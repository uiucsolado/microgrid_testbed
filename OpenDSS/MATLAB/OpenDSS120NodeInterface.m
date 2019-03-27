% Chris Sain
% January 15, 2019

% MATLAB script to interface with TI devices using MODBUS communication.
% Takes input from 100 IP addresses (distributed control), runs OpenDSS
% simulation of UCSD Microgrid according to those new inputs (generators,
% loads), records total power exchanged on tie-line

clear all; close all; clc;      % clean workspace

%% Setting OpenDSS engine
global o;   % Create variable for DSS Server
o = actxserver('OpendssEngine.dss');    % Instantiate the OpenDSS object
o.Start(0);         % Starting up the solver

%Display error message if unable to start the solver
if ~o.Start(0)
    disp('Unable to start the OpenDSS Engine');
    return
end

% Set up the Text, Circuit and Solution interfaces
dssText = o.Text;
dssCircuit = o.ActiveCircuit;
dssSolution = dssCircuit.Solution;

%% Setting OpendDSS simulation
p = '\ModifiedNamesUCSD_RedModel_120controllable_nodes'; % Location of DSS file on local machine
dssText.Command = ['Compile "' p '"'];  % Set up circuit
dssText.Command='Export Result';    % Export the result into directory
o.Allowforms=false;     % Ignore warning messages

% Solve initial snapshot
dssSolution.SolveSnap; % Solves powerflow in snapshot mode

% Some data from circuit compilation, will be used later to record tie-line power
numCktElements = dssCircuit.NumCktElements;         
ElementNames = dssCircuit.AllElementNames;

% Record power at tie line for initial simulation, phase A only (balanced so all phases the same)
presentcktElement = dssCircuit.CktElements('Vsource.source');       % Select tie line element
tieLineRealA(1) = presentcktElement.Powers(1);          % Record real power on phase A of element
tieLineRealA(2) = tieLineRealA(1);

%% Read outside generator capacity data
% Load excel file with capacities
node_power_quantities = xlsread('\Tables and Code Generation Assistance\node_capacity.xlsx'); % read capacities: col1 = min, col2 = max, col3 = setpoint
power_min = node_power_quantities(:,1); % power minimums
power_max = node_power_quantities(:,2); % power maximums
power_setpoints = node_power_quantities(:,3); % power setpoints

%% Set up MODBUS communication for 100 controllers
% These are all 3-phase, will simply assign all three phases of element to be same (Should be balanced)

PV_T_171_SEC1 = modbus('tcpip', '192.168.2.21', 502);
PV_EBU2_LAB1 = modbus('tcpip', '192.168.2.22', 502);
PV_BIRCH_AQUARIUM1 = modbus('tcpip', '192.168.2.23', 502);
PV_T_270_SEC1 = modbus('tcpip', '192.168.2.24', 502);
PV_GILMAN_PARKING1 = modbus('tcpip', '192.168.2.25', 502);
PV_US_2_HOPKINS1 = modbus('tcpip', '192.168.2.26', 502);
PV_BIRCH_AQ1 = modbus('tcpip', '192.168.2.27', 502);
PV_USS_A1 = modbus('tcpip', '192.168.2.28', 502);
PV_USS_B1 = modbus('tcpip', '192.168.2.29', 502);
PV_USS_C_PC1 = modbus('tcpip', '192.168.2.30', 502);
Load_MCSS_MB1 = modbus('tcpip', '192.168.2.31', 502);
Load_MCSS_MA1 = modbus('tcpip', '192.168.2.32', 502);
Load_MCSS_MC1 = modbus('tcpip', '192.168.2.33', 502);
Load_EAST_CAMPUS_11 = modbus('tcpip', '192.168.2.34', 502);
Load_PSB1 = modbus('tcpip', '192.168.2.35', 502);
Load_PRI_BIO_MED1 = modbus('tcpip', '192.168.2.36', 502);
Load_SS_64_SIO1 = modbus('tcpip', '192.168.2.37', 502);
Load_BLACK_BOX_PRI1 = modbus('tcpip', '192.168.2.38', 502);
Load_BLDG_3B_12KV1 = modbus('tcpip', '192.168.2.39', 502);
Load_BLDG_3B_151 = modbus('tcpip', '192.168.2.40', 502);
Load_SS_36_RC1 = modbus('tcpip', '192.168.2.41', 502);
Load_N_CAMPUS_B1 = modbus('tcpip', '192.168.2.42', 502);
Load_N_CAMPUS_C1 = modbus('tcpip', '192.168.2.43', 502);
Load_BUS_NC171 = modbus('tcpip', '192.168.2.44', 502);
Load_N_CAMPUS_A1 = modbus('tcpip', '192.168.2.45', 502);
Load_BUS_T_238_PRI1 = modbus('tcpip', '192.168.2.46', 502);
Load_REVELLE_21 = modbus('tcpip', '192.168.2.47', 502);
Load_REVELLE_11 = modbus('tcpip', '192.168.2.48', 502);
Load_E_1_5_111 = modbus('tcpip', '192.168.2.49', 502);
Load_E_1_9_2_3051 = modbus('tcpip', '192.168.2.50', 502);
Load_E_1_7_81 = modbus('tcpip', '192.168.2.51', 502);
Load_E_1_9_111 = modbus('tcpip', '192.168.2.52', 502);
Load_E_1_9_81 = modbus('tcpip', '192.168.2.53', 502);
Load_E_10_10_2021 = modbus('tcpip', '192.168.2.54', 502);
Load_E_10_11_14_1091 = modbus('tcpip', '192.168.2.55', 502);
Load_SIO_2_SUB1 = modbus('tcpip', '192.168.2.56', 502);
Load_SIO_1_SUB1 = modbus('tcpip', '192.168.2.57', 502);
Load_SS_83_MC_151 = modbus('tcpip', '192.168.2.58', 502);
Load_E_2_6_121 = modbus('tcpip', '192.168.2.59', 502);
Load_E_2_9_151 = modbus('tcpip', '192.168.2.60', 502);
Load_EAST_CAMPUS_31 = modbus('tcpip', '192.168.2.61', 502);
Load_E_5_5_4361 = modbus('tcpip', '192.168.2.62', 502);
Load_E_7_1_71 = modbus('tcpip', '192.168.2.63', 502);
Load_E_7_11_171 = modbus('tcpip', '192.168.2.64', 502);
Load_E_7_17_171 = modbus('tcpip', '192.168.2.65', 502);
Load_E_7_19_171 = modbus('tcpip', '192.168.2.66', 502);
Load_SS_42_WC1 = modbus('tcpip', '192.168.2.67', 502);
Load_EBU2_LAB_PRI1 = modbus('tcpip', '192.168.2.68', 502);
Load_SW_T_0951 = modbus('tcpip', '192.168.2.69', 502);
Load_PSA1 = modbus('tcpip', '192.168.2.70', 502);
Load_BUS_T_179_PRI1 = modbus('tcpip', '192.168.2.71', 502);
Load_BUS_T_345_PRI1 = modbus('tcpip', '192.168.2.72', 502);
Load_SS_31_RC1 = modbus('tcpip', '192.168.2.73', 502);
Load_SS_30_RC1 = modbus('tcpip', '192.168.2.74', 502);
Load_SB_B2A1 = modbus('tcpip', '192.168.2.75', 502);
Load_SS_52_SIO1 = modbus('tcpip', '192.168.2.76', 502);
Load_SS_82_WC1 = modbus('tcpip', '192.168.2.77', 502);
Load_SS_91_WC1 = modbus('tcpip', '192.168.2.78', 502);
Load_SS_92_ERC1 = modbus('tcpip', '192.168.2.79', 502);
Load_SVERD_US1_PRI1 = modbus('tcpip', '192.168.2.80', 502);
Load_T_0501 = modbus('tcpip', '192.168.2.81', 502);
Load_C_SERVICE_PRI1 = modbus('tcpip', '192.168.2.82', 502);
Load_SW_T_071_0721 = modbus('tcpip', '192.168.2.83', 502);
Load_BUS_T_234_PRI1 = modbus('tcpip', '192.168.2.84', 502);
Load_DB_CP1 = modbus('tcpip', '192.168.2.85', 502);
Load_BUS_T_257_PRI1 = modbus('tcpip', '192.168.2.86', 502);
Load_BUS_T_259_PRI1 = modbus('tcpip', '192.168.2.87', 502);
Load_T_270_PRI1 = modbus('tcpip', '192.168.2.88', 502);
Load_T_281_PRI1 = modbus('tcpip', '192.168.2.89', 502);
Load_BUS_T_284_PRI1 = modbus('tcpip', '192.168.2.90', 502);
Load_PRI_T_306_SHILEY1 = modbus('tcpip', '192.168.2.91', 502);
Load_BUS_T_318_PRI1 = modbus('tcpip', '192.168.2.92', 502);
Load_T_PHARM_ESA_P1 = modbus('tcpip', '192.168.2.93', 502);
Load_T_341_PRI1 = modbus('tcpip', '192.168.2.94', 502);
Load_BUS_T_347_PRI1 = modbus('tcpip', '192.168.2.95', 502);
Load_HEALTH_CENTER1 = modbus('tcpip', '192.168.2.96', 502);
Load_CRB_3B1 = modbus('tcpip', '192.168.2.97', 502);
Load_HUBBS_HALL1 = modbus('tcpip', '192.168.2.98', 502);
Load_FACULTY_CLUB1 = modbus('tcpip', '192.168.2.99', 502);
Load_POWELL_STRUCT1 = modbus('tcpip', '192.168.2.100', 502);
Load_T_137_SEC_EBU11 = modbus('tcpip', '192.168.2.101', 502);
Load_EBU1_T_1381 = modbus('tcpip', '192.168.2.102', 502);
Load_PHYS_ED_BLDGS1 = modbus('tcpip', '192.168.2.103', 502);
Load_T_171_SEC1 = modbus('tcpip', '192.168.2.104', 502);
Load_T_179_OCEANVIEW_SEC1 = modbus('tcpip', '192.168.2.105', 502);
Load_HI_BAY_PHYSICS1 = modbus('tcpip', '192.168.2.106', 502);
Load_MANDEVILLE_CTR1 = modbus('tcpip', '192.168.2.107', 502);
Load_IGPP_SUB1 = modbus('tcpip', '192.168.2.108', 502);
Load_VISUAL_ARTS1 = modbus('tcpip', '192.168.2.109', 502);
Load_US_2_RIMAC1 = modbus('tcpip', '192.168.2.110', 502);
Load_EBU2_LAB1 = modbus('tcpip', '192.168.2.111', 502);
Load_BIRCH_AQUARIUM1 = modbus('tcpip', '192.168.2.112', 502);
Load_SVERDRUP_US11 = modbus('tcpip', '192.168.2.113', 502);
Load_CENT_HALL1 = modbus('tcpip', '192.168.2.114', 502);
Load_SERF_BLDG1 = modbus('tcpip', '192.168.2.115', 502);
Load_DANCE_STUDIO1 = modbus('tcpip', '192.168.2.116', 502);
Load_T_259_SEC1 = modbus('tcpip', '192.168.2.117', 502);
Gen_SG1_BUS1 = modbus('tcpip', '192.168.2.118', 502);
Gen_PSB1 = modbus('tcpip', '192.168.2.119', 502);
Gen_PSA1 = modbus('tcpip', '192.168.2.120', 502);


% Receive new REGD values from TI over MODBUS, convert to new powers based on setpoints, assign to nodes, solve snapshot
%  Save power at tie-line

i = 1;  % counter to keep track of number of simulations
p = zeros(100,1);   % Initialize power vector
numSims = 30;       % number of simulations to run
regdLog = zeros(numSims+1,1); % log to save the regd signals

% Set up time vector
time = zeros(numSims,1);
time(1) = 0;
time(2) = 4.527;            % Hardcode time delay from ratio consensus + communication



while i < numSims
    
    tic         % start timer (record how long simulation takes)
    
    % Read the REGD signal from each TI device (should all be identical once ratio consensus has finished), convert to value between -1 and 1
    regd(1) = read(PV_T_171_SEC1, 'holdingregs', 1, 1, 'int32')*1e-7;
    regd(2) = read(PV_EBU2_LAB1, 'holdingregs', 1, 1, 'int32')*1e-7;
    regd(3) = read(PV_BIRCH_AQUARIUM1, 'holdingregs', 1, 1, 'int32')*1e-7;
    regd(4) = read(PV_T_270_SEC1, 'holdingregs', 1, 1, 'int32')*1e-7;
    regd(5) = read(PV_GILMAN_PARKING1, 'holdingregs', 1, 1, 'int32')*1e-7;
    regd(6) = read(PV_US_2_HOPKINS1, 'holdingregs', 1, 1, 'int32')*1e-7;
    regd(7) = read(PV_BIRCH_AQ1, 'holdingregs', 1, 1, 'int32')*1e-7;
    regd(8) = read(PV_USS_A1, 'holdingregs', 1, 1, 'int32')*1e-7;
    regd(9) = read(PV_USS_B1, 'holdingregs', 1, 1, 'int32')*1e-7;
    regd(10) = read(PV_USS_C_PC1, 'holdingregs', 1, 1, 'int32')*1e-7;
    regd(11) = read(Load_MCSS_MB1, 'holdingregs', 1, 1, 'int32')*1e-7;
    regd(12) = read(Load_MCSS_MA1, 'holdingregs', 1, 1, 'int32')*1e-7;
    regd(13) = read(Load_MCSS_MC1, 'holdingregs', 1, 1, 'int32')*1e-7;
    regd(14) = read(Load_EAST_CAMPUS_11, 'holdingregs', 1, 1, 'int32')*1e-7;
    regd(15) = read(Load_PSB1, 'holdingregs', 1, 1, 'int32')*1e-7;
    regd(16) = read(Load_PRI_BIO_MED1, 'holdingregs', 1, 1, 'int32')*1e-7;
    regd(17) = read(Load_SS_64_SIO1, 'holdingregs', 1, 1, 'int32')*1e-7;
    regd(18) = read(Load_BLACK_BOX_PRI1, 'holdingregs', 1, 1, 'int32')*1e-7;
    regd(19) = read(Load_BLDG_3B_12KV1, 'holdingregs', 1, 1, 'int32')*1e-7;
    regd(20) = read(Load_BLDG_3B_151, 'holdingregs', 1, 1, 'int32')*1e-7;
    regd(21) = read(Load_SS_36_RC1, 'holdingregs', 1, 1, 'int32')*1e-7;
    regd(22) = read(Load_N_CAMPUS_B1, 'holdingregs', 1, 1, 'int32')*1e-7;
    regd(23) = read(Load_N_CAMPUS_C1, 'holdingregs', 1, 1, 'int32')*1e-7;
    regd(24) = read(Load_BUS_NC171, 'holdingregs', 1, 1, 'int32')*1e-7;
    regd(25) = read(Load_N_CAMPUS_A1, 'holdingregs', 1, 1, 'int32')*1e-7;
    regd(26) = read(Load_BUS_T_238_PRI1, 'holdingregs', 1, 1, 'int32')*1e-7;
    regd(27) = read(Load_REVELLE_21, 'holdingregs', 1, 1, 'int32')*1e-7;
    regd(28) = read(Load_REVELLE_11, 'holdingregs', 1, 1, 'int32')*1e-7;
    regd(29) = read(Load_E_1_5_111, 'holdingregs', 1, 1, 'int32')*1e-7;
    regd(30) = read(Load_E_1_9_2_3051, 'holdingregs', 1, 1, 'int32')*1e-7;
    regd(31) = read(Load_E_1_7_81, 'holdingregs', 1, 1, 'int32')*1e-7;
    regd(32) = read(Load_E_1_9_111, 'holdingregs', 1, 1, 'int32')*1e-7;
    regd(33) = read(Load_E_1_9_81, 'holdingregs', 1, 1, 'int32')*1e-7;
    regd(34) = read(Load_E_10_10_2021, 'holdingregs', 1, 1, 'int32')*1e-7;
    regd(35) = read(Load_E_10_11_14_1091, 'holdingregs', 1, 1, 'int32')*1e-7;
    regd(36) = read(Load_SIO_2_SUB1, 'holdingregs', 1, 1, 'int32')*1e-7;
    regd(37) = read(Load_SIO_1_SUB1, 'holdingregs', 1, 1, 'int32')*1e-7;
    regd(38) = read(Load_SS_83_MC_151, 'holdingregs', 1, 1, 'int32')*1e-7;
    regd(39) = read(Load_E_2_6_121, 'holdingregs', 1, 1, 'int32')*1e-7;
    regd(40) = read(Load_E_2_9_151, 'holdingregs', 1, 1, 'int32')*1e-7;
    regd(41) = read(Load_EAST_CAMPUS_31, 'holdingregs', 1, 1, 'int32')*1e-7;
    regd(42) = read(Load_E_5_5_4361, 'holdingregs', 1, 1, 'int32')*1e-7;
    regd(43) = read(Load_E_7_1_71, 'holdingregs', 1, 1, 'int32')*1e-7;
    regd(44) = read(Load_E_7_11_171, 'holdingregs', 1, 1, 'int32')*1e-7;
    regd(45) = read(Load_E_7_17_171, 'holdingregs', 1, 1, 'int32')*1e-7;
    regd(46) = read(Load_E_7_19_171, 'holdingregs', 1, 1, 'int32')*1e-7;
    regd(47) = read(Load_SS_42_WC1, 'holdingregs', 1, 1, 'int32')*1e-7;
    regd(48) = read(Load_EBU2_LAB_PRI1, 'holdingregs', 1, 1, 'int32')*1e-7;
    regd(49) = read(Load_SW_T_0951, 'holdingregs', 1, 1, 'int32')*1e-7;
    regd(50) = read(Load_PSA1, 'holdingregs', 1, 1, 'int32')*1e-7;
    regd(51) = read(Load_BUS_T_179_PRI1, 'holdingregs', 1, 1, 'int32')*1e-7;
    regd(52) = read(Load_BUS_T_345_PRI1, 'holdingregs', 1, 1, 'int32')*1e-7;
    regd(53) = read(Load_SS_31_RC1, 'holdingregs', 1, 1, 'int32')*1e-7;
    regd(54) = read(Load_SS_30_RC1, 'holdingregs', 1, 1, 'int32')*1e-7;
    regd(55) = read(Load_SB_B2A1, 'holdingregs', 1, 1, 'int32')*1e-7;
    regd(56) = read(Load_SS_52_SIO1, 'holdingregs', 1, 1, 'int32')*1e-7;
    regd(57) = read(Load_SS_82_WC1, 'holdingregs', 1, 1, 'int32')*1e-7;
    regd(58) = read(Load_SS_91_WC1, 'holdingregs', 1, 1, 'int32')*1e-7;
    regd(59) = read(Load_SS_92_ERC1, 'holdingregs', 1, 1, 'int32')*1e-7;
    regd(60) = read(Load_SVERD_US1_PRI1, 'holdingregs', 1, 1, 'int32')*1e-7;
    regd(61) = read(Load_T_0501, 'holdingregs', 1, 1, 'int32')*1e-7;
    regd(62) = read(Load_C_SERVICE_PRI1, 'holdingregs', 1, 1, 'int32')*1e-7;
    regd(63) = read(Load_SW_T_071_0721, 'holdingregs', 1, 1, 'int32')*1e-7;
    regd(64) = read(Load_BUS_T_234_PRI1, 'holdingregs', 1, 1, 'int32')*1e-7;
    regd(65) = read(Load_DB_CP1, 'holdingregs', 1, 1, 'int32')*1e-7;
    regd(66) = read(Load_BUS_T_257_PRI1, 'holdingregs', 1, 1, 'int32')*1e-7;
    regd(67) = read(Load_BUS_T_259_PRI1, 'holdingregs', 1, 1, 'int32')*1e-7;
    regd(68) = read(Load_T_270_PRI1, 'holdingregs', 1, 1, 'int32')*1e-7;
    regd(69) = read(Load_T_281_PRI1, 'holdingregs', 1, 1, 'int32')*1e-7;
    regd(70) = read(Load_BUS_T_284_PRI1, 'holdingregs', 1, 1, 'int32')*1e-7;
    regd(71) = read(Load_PRI_T_306_SHILEY1, 'holdingregs', 1, 1, 'int32')*1e-7;
    regd(72) = read(Load_BUS_T_318_PRI1, 'holdingregs', 1, 1, 'int32')*1e-7;
    regd(73) = read(Load_T_PHARM_ESA_P1, 'holdingregs', 1, 1, 'int32')*1e-7;
    regd(74) = read(Load_T_341_PRI1, 'holdingregs', 1, 1, 'int32')*1e-7;
    regd(75) = read(Load_BUS_T_347_PRI1, 'holdingregs', 1, 1, 'int32')*1e-7;
    regd(76) = read(Load_HEALTH_CENTER1, 'holdingregs', 1, 1, 'int32')*1e-7;
    regd(77) = read(Load_CRB_3B1, 'holdingregs', 1, 1, 'int32')*1e-7;
    regd(78) = read(Load_HUBBS_HALL1, 'holdingregs', 1, 1, 'int32')*1e-7;
    regd(79) = read(Load_FACULTY_CLUB1, 'holdingregs', 1, 1, 'int32')*1e-7;
    regd(80) = read(Load_POWELL_STRUCT1, 'holdingregs', 1, 1, 'int32')*1e-7;
    regd(81) = read(Load_T_137_SEC_EBU11, 'holdingregs', 1, 1, 'int32')*1e-7;
    regd(82) = read(Load_EBU1_T_1381, 'holdingregs', 1, 1, 'int32')*1e-7;
    regd(83) = read(Load_PHYS_ED_BLDGS1, 'holdingregs', 1, 1, 'int32')*1e-7;
    regd(84) = read(Load_T_171_SEC1, 'holdingregs', 1, 1, 'int32')*1e-7;
    regd(85) = read(Load_T_179_OCEANVIEW_SEC1, 'holdingregs', 1, 1, 'int32')*1e-7;
    regd(86) = read(Load_HI_BAY_PHYSICS1, 'holdingregs', 1, 1, 'int32')*1e-7;
    regd(87) = read(Load_MANDEVILLE_CTR1, 'holdingregs', 1, 1, 'int32')*1e-7;
    regd(88) = read(Load_IGPP_SUB1, 'holdingregs', 1, 1, 'int32')*1e-7;
    regd(89) = read(Load_VISUAL_ARTS1, 'holdingregs', 1, 1, 'int32')*1e-7;
    regd(90) = read(Load_US_2_RIMAC1, 'holdingregs', 1, 1, 'int32')*1e-7;
    regd(91) = read(Load_EBU2_LAB1, 'holdingregs', 1, 1, 'int32')*1e-7;
    regd(92) = read(Load_BIRCH_AQUARIUM1, 'holdingregs', 1, 1, 'int32')*1e-7;
    regd(93) = read(Load_SVERDRUP_US11, 'holdingregs', 1, 1, 'int32')*1e-7;
    regd(94) = read(Load_CENT_HALL1, 'holdingregs', 1, 1, 'int32')*1e-7;
    regd(95) = read(Load_SERF_BLDG1, 'holdingregs', 1, 1, 'int32')*1e-7;
    regd(96) = read(Load_DANCE_STUDIO1, 'holdingregs', 1, 1, 'int32')*1e-7;
    regd(97) = read(Load_T_259_SEC1, 'holdingregs', 1, 1, 'int32')*1e-7;
    regd(98) = read(Gen_SG1_BUS1, 'holdingregs', 1, 1, 'int32')*1e-7;
    regd(99) = read(Gen_PSB1, 'holdingregs', 1, 1, 'int32')*1e-7;
    regd(100) = read(Gen_PSA1, 'holdingregs', 1, 1, 'int32')*1e-7;
    
    regdLog(i) = mean(regd);
  
    
    % convert REGD signal into new power values for nodes
    for j = 1:length(regd)
    
        if regd(j) > 0
            
            p(j) = power_setpoints(j) + regd(j)*(power_max(j) - power_setpoints(j));
            
        else
           
            p(j) = power_setpoints(j) + regd(j)*(power_setpoints(j) - power_min(j));
            
        end
        
        % Loads treated as generators with "negative power", need to convert back to positive numbers for OpenDSS assignment
        if j < 98       
            p(j) = -p(j);
        end
        
    end
    
    
    % Set nodes to new calculated power outputs 
    
    dssText.Command=['Pvsystem.PV_T_171_SEC1.KVA=' num2str(p(1))];
    dssText.Command=['Pvsystem.PV_T_171_SEC2.KVA=' num2str(p(1))];
    dssText.Command=['Pvsystem.PV_T_171_SEC3.KVA=' num2str(p(1))];
    dssText.Command=['Pvsystem.PV_EBU2_LAB1.KVA=' num2str(p(2))];
    dssText.Command=['Pvsystem.PV_EBU2_LAB2.KVA=' num2str(p(2))];
    dssText.Command=['Pvsystem.PV_EBU2_LAB3.KVA=' num2str(p(2))];
    dssText.Command=['Pvsystem.PV_BIRCH_AQUARIUM1.KVA=' num2str(p(3))];
    dssText.Command=['Pvsystem.PV_BIRCH_AQUARIUM2.KVA=' num2str(p(3))];
    dssText.Command=['Pvsystem.PV_BIRCH_AQUARIUM3.KVA=' num2str(p(3))];
    dssText.Command=['Pvsystem.PV_T_270_SEC1.KVA=' num2str(p(4))];
    dssText.Command=['Pvsystem.PV_T_270_SEC2.KVA=' num2str(p(4))];
    dssText.Command=['Pvsystem.PV_T_270_SEC3.KVA=' num2str(p(4))];
    dssText.Command=['Pvsystem.PV_GILMAN_PARKING1.KVA=' num2str(p(5))];
    dssText.Command=['Pvsystem.PV_GILMAN_PARKING2.KVA=' num2str(p(5))];
    dssText.Command=['Pvsystem.PV_GILMAN_PARKING3.KVA=' num2str(p(5))];
    dssText.Command=['Pvsystem.PV_US_2_HOPKINS1.KVA=' num2str(p(6))];
    dssText.Command=['Pvsystem.PV_US_2_HOPKINS2.KVA=' num2str(p(6))];
    dssText.Command=['Pvsystem.PV_US_2_HOPKINS3.KVA=' num2str(p(6))];
    dssText.Command=['Pvsystem.PV_BIRCH_AQ1.KVA=' num2str(p(7))];
    dssText.Command=['Pvsystem.PV_BIRCH_AQ2.KVA=' num2str(p(7))];
    dssText.Command=['Pvsystem.PV_BIRCH_AQ3.KVA=' num2str(p(7))];
    dssText.Command=['Pvsystem.PV_USS_A1.KVA=' num2str(p(8))];
    dssText.Command=['Pvsystem.PV_USS_A2.KVA=' num2str(p(8))];
    dssText.Command=['Pvsystem.PV_USS_A3.KVA=' num2str(p(8))];
    dssText.Command=['Pvsystem.PV_USS_B1.KVA=' num2str(p(9))];
    dssText.Command=['Pvsystem.PV_USS_B2.KVA=' num2str(p(9))];
    dssText.Command=['Pvsystem.PV_USS_B3.KVA=' num2str(p(9))];
    dssText.Command=['Pvsystem.PV_USS_C_PC1.KVA=' num2str(p(10))];
    dssText.Command=['Pvsystem.PV_USS_C_PC2.KVA=' num2str(p(10))];
    dssText.Command=['Pvsystem.PV_USS_C_PC3.KVA=' num2str(p(10))];
    dssText.Command=['Load.Load_MCSS_MB1.Kw=' num2str(p(11))];
    dssText.Command=['Load.Load_MCSS_MB2.Kw=' num2str(p(11))];
    dssText.Command=['Load.Load_MCSS_MB3.Kw=' num2str(p(11))];
    dssText.Command=['Load.Load_MCSS_MA1.Kw=' num2str(p(12))];
    dssText.Command=['Load.Load_MCSS_MA2.Kw=' num2str(p(12))];
    dssText.Command=['Load.Load_MCSS_MA3.Kw=' num2str(p(12))];
    dssText.Command=['Load.Load_MCSS_MC1.Kw=' num2str(p(13))];
    dssText.Command=['Load.Load_MCSS_MC2.Kw=' num2str(p(13))];
    dssText.Command=['Load.Load_MCSS_MC3.Kw=' num2str(p(13))];
    dssText.Command=['Load.Load_EAST_CAMPUS_11.Kw=' num2str(p(14))];
    dssText.Command=['Load.Load_EAST_CAMPUS_12.Kw=' num2str(p(14))];
    dssText.Command=['Load.Load_EAST_CAMPUS_13.Kw=' num2str(p(14))];
    dssText.Command=['Load.Load_PSB1.Kw=' num2str(p(15))];
    dssText.Command=['Load.Load_PSB2.Kw=' num2str(p(15))];
    dssText.Command=['Load.Load_PSB3.Kw=' num2str(p(15))];
    dssText.Command=['Load.Load_PRI_BIO_MED1.Kw=' num2str(p(16))];
    dssText.Command=['Load.Load_PRI_BIO_MED2.Kw=' num2str(p(16))];
    dssText.Command=['Load.Load_PRI_BIO_MED3.Kw=' num2str(p(16))];
    dssText.Command=['Load.Load_SS_64_SIO1.Kw=' num2str(p(17))];
    dssText.Command=['Load.Load_SS_64_SIO2.Kw=' num2str(p(17))];
    dssText.Command=['Load.Load_SS_64_SIO3.Kw=' num2str(p(17))];
    dssText.Command=['Load.Load_BLACK_BOX_PRI1.Kw=' num2str(p(18))];
    dssText.Command=['Load.Load_BLACK_BOX_PRI2.Kw=' num2str(p(18))];
    dssText.Command=['Load.Load_BLACK_BOX_PRI3.Kw=' num2str(p(18))];
    dssText.Command=['Load.Load_BLDG_3B_12KV1.Kw=' num2str(p(19))];
    dssText.Command=['Load.Load_BLDG_3B_12KV2.Kw=' num2str(p(19))];
    dssText.Command=['Load.Load_BLDG_3B_12KV3.Kw=' num2str(p(19))];
    dssText.Command=['Load.Load_BLDG_3B_151.Kw=' num2str(p(20))];
    dssText.Command=['Load.Load_BLDG_3B_152.Kw=' num2str(p(20))];
    dssText.Command=['Load.Load_BLDG_3B_153.Kw=' num2str(p(20))];
    dssText.Command=['Load.Load_SS_36_RC1.Kw=' num2str(p(21))];
    dssText.Command=['Load.Load_SS_36_RC2.Kw=' num2str(p(21))];
    dssText.Command=['Load.Load_SS_36_RC3.Kw=' num2str(p(21))];
    dssText.Command=['Load.Load_N_CAMPUS_B1.Kw=' num2str(p(22))];
    dssText.Command=['Load.Load_N_CAMPUS_B2.Kw=' num2str(p(22))];
    dssText.Command=['Load.Load_N_CAMPUS_B3.Kw=' num2str(p(22))];
    dssText.Command=['Load.Load_N_CAMPUS_C1.Kw=' num2str(p(23))];
    dssText.Command=['Load.Load_N_CAMPUS_C2.Kw=' num2str(p(23))];
    dssText.Command=['Load.Load_N_CAMPUS_C3.Kw=' num2str(p(23))];
    dssText.Command=['Load.Load_BUS_NC171.Kw=' num2str(p(24))];
    dssText.Command=['Load.Load_BUS_NC172.Kw=' num2str(p(24))];
    dssText.Command=['Load.Load_BUS_NC173.Kw=' num2str(p(24))];
    dssText.Command=['Load.Load_N_CAMPUS_A1.Kw=' num2str(p(25))];
    dssText.Command=['Load.Load_N_CAMPUS_A2.Kw=' num2str(p(25))];
    dssText.Command=['Load.Load_N_CAMPUS_A3.Kw=' num2str(p(25))];
    dssText.Command=['Load.Load_BUS_T_238_PRI1.Kw=' num2str(p(26))];
    dssText.Command=['Load.Load_BUS_T_238_PRI2.Kw=' num2str(p(26))];
    dssText.Command=['Load.Load_BUS_T_238_PRI3.Kw=' num2str(p(26))];
    dssText.Command=['Load.Load_REVELLE_21.Kw=' num2str(p(27))];
    dssText.Command=['Load.Load_REVELLE_22.Kw=' num2str(p(27))];
    dssText.Command=['Load.Load_REVELLE_23.Kw=' num2str(p(27))];
    dssText.Command=['Load.Load_REVELLE_11.Kw=' num2str(p(28))];
    dssText.Command=['Load.Load_REVELLE_12.Kw=' num2str(p(28))];
    dssText.Command=['Load.Load_REVELLE_13.Kw=' num2str(p(28))];
    dssText.Command=['Load.Load_E_1_5_111.Kw=' num2str(p(29))];
    dssText.Command=['Load.Load_E_1_5_112.Kw=' num2str(p(29))];
    dssText.Command=['Load.Load_E_1_5_113.Kw=' num2str(p(29))];
    dssText.Command=['Load.Load_E_1_9_2_3051.Kw=' num2str(p(30))];
    dssText.Command=['Load.Load_E_1_9_2_3052.Kw=' num2str(p(30))];
    dssText.Command=['Load.Load_E_1_9_2_3053.Kw=' num2str(p(30))];
    dssText.Command=['Load.Load_E_1_7_81.Kw=' num2str(p(31))];
    dssText.Command=['Load.Load_E_1_7_82.Kw=' num2str(p(31))];
    dssText.Command=['Load.Load_E_1_7_83.Kw=' num2str(p(31))];
    dssText.Command=['Load.Load_E_1_9_111.Kw=' num2str(p(32))];
    dssText.Command=['Load.Load_E_1_9_112.Kw=' num2str(p(32))];
    dssText.Command=['Load.Load_E_1_9_113.Kw=' num2str(p(32))];
    dssText.Command=['Load.Load_E_1_9_81.Kw=' num2str(p(33))];
    dssText.Command=['Load.Load_E_1_9_82.Kw=' num2str(p(33))];
    dssText.Command=['Load.Load_E_1_9_83.Kw=' num2str(p(33))];
    dssText.Command=['Load.Load_E_10_10_2021.Kw=' num2str(p(34))];
    dssText.Command=['Load.Load_E_10_10_2022.Kw=' num2str(p(34))];
    dssText.Command=['Load.Load_E_10_10_2023.Kw=' num2str(p(34))];
    dssText.Command=['Load.Load_E_10_11_14_1091.Kw=' num2str(p(35))];
    dssText.Command=['Load.Load_E_10_11_14_1092.Kw=' num2str(p(35))];
    dssText.Command=['Load.Load_E_10_11_14_1093.Kw=' num2str(p(35))];
    dssText.Command=['Load.Load_SIO_2_SUB1.Kw=' num2str(p(36))];
    dssText.Command=['Load.Load_SIO_2_SUB2.Kw=' num2str(p(36))];
    dssText.Command=['Load.Load_SIO_2_SUB3.Kw=' num2str(p(36))];
    dssText.Command=['Load.Load_SIO_1_SUB1.Kw=' num2str(p(37))];
    dssText.Command=['Load.Load_SIO_1_SUB2.Kw=' num2str(p(37))];
    dssText.Command=['Load.Load_SIO_1_SUB3.Kw=' num2str(p(37))];
    dssText.Command=['Load.Load_SS_83_MC_151.Kw=' num2str(p(38))];
    dssText.Command=['Load.Load_SS_83_MC_152.Kw=' num2str(p(38))];
    dssText.Command=['Load.Load_SS_83_MC_153.Kw=' num2str(p(38))];
    dssText.Command=['Load.Load_E_2_6_121.Kw=' num2str(p(39))];
    dssText.Command=['Load.Load_E_2_6_122.Kw=' num2str(p(39))];
    dssText.Command=['Load.Load_E_2_6_123.Kw=' num2str(p(39))];
    dssText.Command=['Load.Load_E_2_9_151.Kw=' num2str(p(40))];
    dssText.Command=['Load.Load_E_2_9_152.Kw=' num2str(p(40))];
    dssText.Command=['Load.Load_E_2_9_153.Kw=' num2str(p(40))];
    dssText.Command=['Load.Load_EAST_CAMPUS_31.Kw=' num2str(p(41))];
    dssText.Command=['Load.Load_EAST_CAMPUS_32.Kw=' num2str(p(41))];
    dssText.Command=['Load.Load_EAST_CAMPUS_33.Kw=' num2str(p(41))];
    dssText.Command=['Load.Load_E_5_5_4361.Kw=' num2str(p(42))];
    dssText.Command=['Load.Load_E_5_5_4362.Kw=' num2str(p(42))];
    dssText.Command=['Load.Load_E_5_5_4363.Kw=' num2str(p(42))];
    dssText.Command=['Load.Load_E_7_1_71.Kw=' num2str(p(43))];
    dssText.Command=['Load.Load_E_7_1_72.Kw=' num2str(p(43))];
    dssText.Command=['Load.Load_E_7_1_73.Kw=' num2str(p(43))];
    dssText.Command=['Load.Load_E_7_11_171.Kw=' num2str(p(44))];
    dssText.Command=['Load.Load_E_7_11_172.Kw=' num2str(p(44))];
    dssText.Command=['Load.Load_E_7_11_173.Kw=' num2str(p(44))];
    dssText.Command=['Load.Load_E_7_17_171.Kw=' num2str(p(45))];
    dssText.Command=['Load.Load_E_7_17_172.Kw=' num2str(p(45))];
    dssText.Command=['Load.Load_E_7_17_173.Kw=' num2str(p(45))];
    dssText.Command=['Load.Load_E_7_19_171.Kw=' num2str(p(46))];
    dssText.Command=['Load.Load_E_7_19_172.Kw=' num2str(p(46))];
    dssText.Command=['Load.Load_E_7_19_173.Kw=' num2str(p(46))];
    dssText.Command=['Load.Load_SS_42_WC1.Kw=' num2str(p(47))];
    dssText.Command=['Load.Load_SS_42_WC2.Kw=' num2str(p(47))];
    dssText.Command=['Load.Load_SS_42_WC3.Kw=' num2str(p(47))];
    dssText.Command=['Load.Load_EBU2_LAB_PRI1.Kw=' num2str(p(48))];
    dssText.Command=['Load.Load_EBU2_LAB_PRI2.Kw=' num2str(p(48))];
    dssText.Command=['Load.Load_EBU2_LAB_PRI3.Kw=' num2str(p(48))];
    dssText.Command=['Load.Load_SW_T_0951.Kw=' num2str(p(49))];
    dssText.Command=['Load.Load_SW_T_0952.Kw=' num2str(p(49))];
    dssText.Command=['Load.Load_SW_T_0953.Kw=' num2str(p(49))];
    dssText.Command=['Load.Load_PSA1.Kw=' num2str(p(50))];
    dssText.Command=['Load.Load_PSA2.Kw=' num2str(p(50))];
    dssText.Command=['Load.Load_PSA3.Kw=' num2str(p(50))];
    dssText.Command=['Load.Load_BUS_T_179_PRI1.Kw=' num2str(p(51))];
    dssText.Command=['Load.Load_BUS_T_179_PRI2.Kw=' num2str(p(51))];
    dssText.Command=['Load.Load_BUS_T_179_PRI3.Kw=' num2str(p(51))];
    dssText.Command=['Load.Load_BUS_T_345_PRI1.Kw=' num2str(p(52))];
    dssText.Command=['Load.Load_BUS_T_345_PRI2.Kw=' num2str(p(52))];
    dssText.Command=['Load.Load_BUS_T_345_PRI3.Kw=' num2str(p(52))];
    dssText.Command=['Load.Load_SS_31_RC1.Kw=' num2str(p(53))];
    dssText.Command=['Load.Load_SS_31_RC2.Kw=' num2str(p(53))];
    dssText.Command=['Load.Load_SS_31_RC3.Kw=' num2str(p(53))];
    dssText.Command=['Load.Load_SS_30_RC1.Kw=' num2str(p(54))];
    dssText.Command=['Load.Load_SS_30_RC2.Kw=' num2str(p(54))];
    dssText.Command=['Load.Load_SS_30_RC3.Kw=' num2str(p(54))];
    dssText.Command=['Load.Load_SB_B2A1.Kw=' num2str(p(55))];
    dssText.Command=['Load.Load_SB_B2A2.Kw=' num2str(p(55))];
    dssText.Command=['Load.Load_SB_B2A3.Kw=' num2str(p(55))];
    dssText.Command=['Load.Load_SS_52_SIO1.Kw=' num2str(p(56))];
    dssText.Command=['Load.Load_SS_52_SIO2.Kw=' num2str(p(56))];
    dssText.Command=['Load.Load_SS_52_SIO3.Kw=' num2str(p(56))];
    dssText.Command=['Load.Load_SS_82_WC1.Kw=' num2str(p(57))];
    dssText.Command=['Load.Load_SS_82_WC2.Kw=' num2str(p(57))];
    dssText.Command=['Load.Load_SS_82_WC3.Kw=' num2str(p(57))];
    dssText.Command=['Load.Load_SS_91_WC1.Kw=' num2str(p(58))];
    dssText.Command=['Load.Load_SS_91_WC2.Kw=' num2str(p(58))];
    dssText.Command=['Load.Load_SS_91_WC3.Kw=' num2str(p(58))];
    dssText.Command=['Load.Load_SS_92_ERC1.Kw=' num2str(p(59))];
    dssText.Command=['Load.Load_SS_92_ERC2.Kw=' num2str(p(59))];
    dssText.Command=['Load.Load_SS_92_ERC3.Kw=' num2str(p(59))];
    dssText.Command=['Load.Load_SVERD_US1_PRI1.Kw=' num2str(p(60))];
    dssText.Command=['Load.Load_SVERD_US1_PRI2.Kw=' num2str(p(60))];
    dssText.Command=['Load.Load_SVERD_US1_PRI3.Kw=' num2str(p(60))];
    dssText.Command=['Load.Load_T_0501.Kw=' num2str(p(61))];
    dssText.Command=['Load.Load_T_0502.Kw=' num2str(p(61))];
    dssText.Command=['Load.Load_T_0503.Kw=' num2str(p(61))];
    dssText.Command=['Load.Load_C_SERVICE_PRI1.Kw=' num2str(p(62))];
    dssText.Command=['Load.Load_C_SERVICE_PRI2.Kw=' num2str(p(62))];
    dssText.Command=['Load.Load_C_SERVICE_PRI3.Kw=' num2str(p(62))];
    dssText.Command=['Load.Load_SW_T_071_0721.Kw=' num2str(p(63))];
    dssText.Command=['Load.Load_SW_T_071_0722.Kw=' num2str(p(63))];
    dssText.Command=['Load.Load_SW_T_071_0723.Kw=' num2str(p(63))];
    dssText.Command=['Load.Load_BUS_T_234_PRI1.Kw=' num2str(p(64))];
    dssText.Command=['Load.Load_BUS_T_234_PRI2.Kw=' num2str(p(64))];
    dssText.Command=['Load.Load_BUS_T_234_PRI3.Kw=' num2str(p(64))];
    dssText.Command=['Load.Load_DB_CP1.Kw=' num2str(p(65))];
    dssText.Command=['Load.Load_DB_CP2.Kw=' num2str(p(65))];
    dssText.Command=['Load.Load_DB_CP3.Kw=' num2str(p(65))];
    dssText.Command=['Load.Load_BUS_T_257_PRI1.Kw=' num2str(p(66))];
    dssText.Command=['Load.Load_BUS_T_257_PRI2.Kw=' num2str(p(66))];
    dssText.Command=['Load.Load_BUS_T_257_PRI3.Kw=' num2str(p(66))];
    dssText.Command=['Load.Load_BUS_T_259_PRI1.Kw=' num2str(p(67))];
    dssText.Command=['Load.Load_BUS_T_259_PRI2.Kw=' num2str(p(67))];
    dssText.Command=['Load.Load_BUS_T_259_PRI3.Kw=' num2str(p(67))];
    dssText.Command=['Load.Load_T_270_PRI1.Kw=' num2str(p(68))];
    dssText.Command=['Load.Load_T_270_PRI2.Kw=' num2str(p(68))];
    dssText.Command=['Load.Load_T_270_PRI3.Kw=' num2str(p(68))];
    dssText.Command=['Load.Load_T_281_PRI1.Kw=' num2str(p(69))];
    dssText.Command=['Load.Load_T_281_PRI2.Kw=' num2str(p(69))];
    dssText.Command=['Load.Load_T_281_PRI3.Kw=' num2str(p(69))];
    dssText.Command=['Load.Load_BUS_T_284_PRI1.Kw=' num2str(p(70))];
    dssText.Command=['Load.Load_BUS_T_284_PRI2.Kw=' num2str(p(70))];
    dssText.Command=['Load.Load_BUS_T_284_PRI3.Kw=' num2str(p(70))];
    dssText.Command=['Load.Load_PRI_T_306_SHILEY1.Kw=' num2str(p(71))];
    dssText.Command=['Load.Load_PRI_T_306_SHILEY2.Kw=' num2str(p(71))];
    dssText.Command=['Load.Load_PRI_T_306_SHILEY3.Kw=' num2str(p(71))];
    dssText.Command=['Load.Load_BUS_T_318_PRI1.Kw=' num2str(p(72))];
    dssText.Command=['Load.Load_BUS_T_318_PRI2.Kw=' num2str(p(72))];
    dssText.Command=['Load.Load_BUS_T_318_PRI3.Kw=' num2str(p(72))];
    dssText.Command=['Load.Load_T_PHARM_ESA_P1.Kw=' num2str(p(73))];
    dssText.Command=['Load.Load_T_PHARM_ESA_P2.Kw=' num2str(p(73))];
    dssText.Command=['Load.Load_T_PHARM_ESA_P3.Kw=' num2str(p(73))];
    dssText.Command=['Load.Load_T_341_PRI1.Kw=' num2str(p(74))];
    dssText.Command=['Load.Load_T_341_PRI2.Kw=' num2str(p(74))];
    dssText.Command=['Load.Load_T_341_PRI3.Kw=' num2str(p(74))];
    dssText.Command=['Load.Load_BUS_T_347_PRI1.Kw=' num2str(p(75))];
    dssText.Command=['Load.Load_BUS_T_347_PRI2.Kw=' num2str(p(75))];
    dssText.Command=['Load.Load_BUS_T_347_PRI3.Kw=' num2str(p(75))];
    dssText.Command=['Load.Load_HEALTH_CENTER1.Kw=' num2str(p(76))];
    dssText.Command=['Load.Load_HEALTH_CENTER2.Kw=' num2str(p(76))];
    dssText.Command=['Load.Load_HEALTH_CENTER3.Kw=' num2str(p(76))];
    dssText.Command=['Load.Load_CRB_3B1.Kw=' num2str(p(77))];
    dssText.Command=['Load.Load_CRB_3B2.Kw=' num2str(p(77))];
    dssText.Command=['Load.Load_CRB_3B3.Kw=' num2str(p(77))];
    dssText.Command=['Load.Load_HUBBS_HALL1.Kw=' num2str(p(78))];
    dssText.Command=['Load.Load_HUBBS_HALL2.Kw=' num2str(p(78))];
    dssText.Command=['Load.Load_HUBBS_HALL3.Kw=' num2str(p(78))];
    dssText.Command=['Load.Load_FACULTY_CLUB1.Kw=' num2str(p(79))];
    dssText.Command=['Load.Load_FACULTY_CLUB2.Kw=' num2str(p(79))];
    dssText.Command=['Load.Load_FACULTY_CLUB3.Kw=' num2str(p(79))];
    dssText.Command=['Load.Load_POWELL_STRUCT1.Kw=' num2str(p(80))];
    dssText.Command=['Load.Load_POWELL_STRUCT2.Kw=' num2str(p(80))];
    dssText.Command=['Load.Load_POWELL_STRUCT3.Kw=' num2str(p(80))];
    dssText.Command=['Load.Load_T_137_SEC_EBU11.Kw=' num2str(p(81))];
    dssText.Command=['Load.Load_T_137_SEC_EBU12.Kw=' num2str(p(81))];
    dssText.Command=['Load.Load_T_137_SEC_EBU13.Kw=' num2str(p(81))];
    dssText.Command=['Load.Load_EBU1_T_1381.Kw=' num2str(p(82))];
    dssText.Command=['Load.Load_EBU1_T_1382.Kw=' num2str(p(82))];
    dssText.Command=['Load.Load_EBU1_T_1383.Kw=' num2str(p(82))];
    dssText.Command=['Load.Load_PHYS_ED_BLDGS1.Kw=' num2str(p(83))];
    dssText.Command=['Load.Load_PHYS_ED_BLDGS2.Kw=' num2str(p(83))];
    dssText.Command=['Load.Load_PHYS_ED_BLDGS3.Kw=' num2str(p(83))];
    dssText.Command=['Load.Load_T_171_SEC1.Kw=' num2str(p(84))];
    dssText.Command=['Load.Load_T_171_SEC2.Kw=' num2str(p(84))];
    dssText.Command=['Load.Load_T_171_SEC3.Kw=' num2str(p(84))];
    dssText.Command=['Load.Load_T_179_OCEANVIEW_SEC1.Kw=' num2str(p(85))];
    dssText.Command=['Load.Load_T_179_OCEANVIEW_SEC2.Kw=' num2str(p(85))];
    dssText.Command=['Load.Load_T_179_OCEANVIEW_SEC3.Kw=' num2str(p(85))];
    dssText.Command=['Load.Load_HI_BAY_PHYSICS1.Kw=' num2str(p(86))];
    dssText.Command=['Load.Load_HI_BAY_PHYSICS2.Kw=' num2str(p(86))];
    dssText.Command=['Load.Load_HI_BAY_PHYSICS3.Kw=' num2str(p(86))];
    dssText.Command=['Load.Load_MANDEVILLE_CTR1.Kw=' num2str(p(87))];
    dssText.Command=['Load.Load_MANDEVILLE_CTR2.Kw=' num2str(p(87))];
    dssText.Command=['Load.Load_MANDEVILLE_CTR3.Kw=' num2str(p(87))];
    dssText.Command=['Load.Load_IGPP_SUB1.Kw=' num2str(p(88))];
    dssText.Command=['Load.Load_IGPP_SUB2.Kw=' num2str(p(88))];
    dssText.Command=['Load.Load_IGPP_SUB3.Kw=' num2str(p(88))];
    dssText.Command=['Load.Load_VISUAL_ARTS1.Kw=' num2str(p(89))];
    dssText.Command=['Load.Load_VISUAL_ARTS2.Kw=' num2str(p(89))];
    dssText.Command=['Load.Load_VISUAL_ARTS3.Kw=' num2str(p(89))];
    dssText.Command=['Load.Load_US_2_RIMAC1.Kw=' num2str(p(90))];
    dssText.Command=['Load.Load_US_2_RIMAC2.Kw=' num2str(p(90))];
    dssText.Command=['Load.Load_US_2_RIMAC3.Kw=' num2str(p(90))];
    dssText.Command=['Load.Load_EBU2_LAB1.Kw=' num2str(p(91))];
    dssText.Command=['Load.Load_EBU2_LAB2.Kw=' num2str(p(91))];
    dssText.Command=['Load.Load_EBU2_LAB3.Kw=' num2str(p(91))];
    dssText.Command=['Load.Load_BIRCH_AQUARIUM1.Kw=' num2str(p(92))];
    dssText.Command=['Load.Load_BIRCH_AQUARIUM2.Kw=' num2str(p(92))];
    dssText.Command=['Load.Load_BIRCH_AQUARIUM3.Kw=' num2str(p(92))];
    dssText.Command=['Load.Load_SVERDRUP_US11.Kw=' num2str(p(93))];
    dssText.Command=['Load.Load_SVERDRUP_US12.Kw=' num2str(p(93))];
    dssText.Command=['Load.Load_SVERDRUP_US13.Kw=' num2str(p(93))];
    dssText.Command=['Load.Load_CENT_HALL1.Kw=' num2str(p(94))];
    dssText.Command=['Load.Load_CENT_HALL2.Kw=' num2str(p(94))];
    dssText.Command=['Load.Load_CENT_HALL3.Kw=' num2str(p(94))];
    dssText.Command=['Load.Load_SERF_BLDG1.Kw=' num2str(p(95))];
    dssText.Command=['Load.Load_SERF_BLDG2.Kw=' num2str(p(95))];
    dssText.Command=['Load.Load_SERF_BLDG3.Kw=' num2str(p(95))];
    dssText.Command=['Load.Load_DANCE_STUDIO1.Kw=' num2str(p(96))];
    dssText.Command=['Load.Load_DANCE_STUDIO2.Kw=' num2str(p(96))];
    dssText.Command=['Load.Load_DANCE_STUDIO3.Kw=' num2str(p(96))];
    dssText.Command=['Load.Load_T_259_SEC1.Kw=' num2str(p(97))];
    dssText.Command=['Load.Load_T_259_SEC2.Kw=' num2str(p(97))];
    dssText.Command=['Load.Load_T_259_SEC3.Kw=' num2str(p(97))];
    dssText.Command=['Generator.Gen_SG1_BUS1.Kw=' num2str(p(98))];
    dssText.Command=['Generator.Gen_SG1_BUS2.Kw=' num2str(p(98))];
    dssText.Command=['Generator.Gen_SG1_BUS3.Kw=' num2str(p(98))];
    dssText.Command=['Generator.Gen_PSB1.Kw=' num2str(p(99))];
    dssText.Command=['Generator.Gen_PSB2.Kw=' num2str(p(99))];
    dssText.Command=['Generator.Gen_PSB3.Kw=' num2str(p(99))];
    dssText.Command=['Generator.Gen_PSA1.Kw=' num2str(p(100))];
    dssText.Command=['Generator.Gen_PSA2.Kw=' num2str(p(100))];
    dssText.Command=['Generator.Gen_PSA3.Kw=' num2str(p(100))];
    
    
    % Solve power flow with updated values
    dssSolution.SolveSnap; % Solves powerflow in snapshot mode
     
    % Record power at tie line, phase A only (balanced so all phases the same)
    presentcktElement = dssCircuit.CktElements('Vsource.source');       % Select tie line element
    tieLineRealA(i+2) = presentcktElement.Powers(1);          % Record real power on phase A of element
    
    time(i+2) = time(i+1) + toc;     % Stop timer
    
    i = i + 1      % increment counter, will show how many simulations have been run
    
    
end

% dssText.Command=['show Powers kva elements'];

% Plot the power at the tie line of Phase A
figure(1)
hold on
plot(time, tieLineRealA,'r','LineWidth', 3);
title('Real Power at 69kV Tie Line (Phase A), OpenDSS Simulation');
ylabel('Real Power (kW)');
xlabel('Time(s)');
hold off

