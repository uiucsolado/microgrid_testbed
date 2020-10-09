// generated using template: cop_main.template---------------------------------------------
/******************************************************************************************
**
**  Module Name: cop_main.c
**  NOTE: Automatically generated file. DO NOT MODIFY!
**  Description:
**            Main file
**
******************************************************************************************/
// generated using template: arm/custom_include.template-----------------------------------

#include "math.h"

// x86 libraries:
#include "../include/sp_functions_dev0.h"

// H files from Advanced C Function components
//#include "example_dll.h"

// Header files from additional sources (Advanced C Function)
// ----------------------------------------------------------------------------------------
// generated using template: VirtualHIL/custom_defines.template----------------------------

typedef unsigned char X_UnInt8;
typedef char X_Int8;
typedef signed short X_Int16;
typedef unsigned short X_UnInt16;
typedef int X_Int32;
typedef unsigned int X_UnInt32;
typedef unsigned int uint;
typedef double real;

// ----------------------------------------------------------------------------------------
// generated using template: custom_consts.template----------------------------------------

// arithmetic constants
#define C_SQRT_2                    1.4142135623730950488016887242097f
#define C_SQRT_3                    1.7320508075688772935274463415059f
#define C_PI                        3.1415926535897932384626433832795f
#define C_E                         2.7182818284590452353602874713527f
#define C_2PI                       6.283185307179586476925286766559f

//@cmp.def.start
//component defines





















































































































































































































































































#define SQRT_2OVER3 0.8164965809277260327324280249019f
#define SQRT3_OVER_2 0.8660254037844386467637231707529f
#define ONE_DIV_BY_SQRT_3 0.57735026918962576450914878f










































#define SQRT_2OVER3 0.8164965809277260327324280249019f
#define SQRT3_OVER_2 0.8660254037844386467637231707529f
#define ONE_DIV_BY_SQRT_3 0.57735026918962576450914878f











































































































































































































































#define SQRT_2OVER3 0.8164965809277260327324280249019f
#define SQRT3_OVER_2 0.8660254037844386467637231707529f
#define ONE_DIV_BY_SQRT_3 0.57735026918962576450914878f



















































































































































































































































































































































































































































































































































































































































































































































#define MIN(a,b) (((a)<(b))?(a):(b))
#define MAX(a,b) (((a)>(b))?(a):(b))

#define MIN(a,b) (((a)<(b))?(a):(b))
#define MAX(a,b) (((a)>(b))?(a):(b))




#define MIN(a,b) (((a)<(b))?(a):(b))
#define MAX(a,b) (((a)>(b))?(a):(b))

#define MIN(a,b) (((a)<(b))?(a):(b))
#define MAX(a,b) (((a)>(b))?(a):(b))





























//@cmp.def.end


//-----------------------------------------------------------------------------------------
// generated using template: common_variables.template-------------------------------------
// true global variables


//@cmp.var.start
// variables
X_Int32 _ess1_be1_25a_synchronizer_connect_inv__out;
double _ess1_be1_25a_synchronizer_constant6__out = 0.01;
double _ess1_be1_25a_synchronizer_constant7__out = 1.0;
double _ess1_be1_25a_synchronizer_constant9__out = 0.003;
double _ess1_be1_25a_synchronizer_unit_delay2__out;
double _ess1_battery_constant1__out = 55.0;
double _ess1_battery_constant2__out = 0.9;
double _ess1_battery_constant3__out = 0.86;
double _ess1_battery_constant4__out = 1.3;
double _ess1_battery_constant5__out = 1.5;
double _ess1_battery_constant6__out = 1.0;
double _ess1_battery_constant7__out = 1.2;
double _ess1_battery_constant8__out = 1.0;
double _ess1_battery_unit_delay1__out;
double _ess1_battery_unit_delay2__out;
X_Int32 _ess1_battery_charge__out;
X_Int32 _ess1_connect__out;
double _ess1_constant2__out = 1.0;
double _ess1_controller_constant1__out = 0.0;
double _ess1_controller_frequency_droop_clock1__out;
double _ess1_controller_frequency_droop_clock2__out;
double _ess1_controller_integrator2__out;
double _ess1_controller_integrator3__out;
X_Int32 _ess1_controller_outer_voltage_loop___inner_current_loop_gfm_mode__out;
double _ess1_controller_outer_voltage_loop___inner_current_loop_dq_to_abc_o_ref__out = 0.0;
double _ess1_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_limit3__out;
double _ess1_controller_outer_voltage_loop___inner_current_loop_outer_power_loop_limit_zero__out = 0.1;
double _ess1_controller_outer_voltage_loop___inner_current_loop_outer_power_loop_one__out = 1.0;
double _ess1_controller_pll_pll_pid_integrator1__out;
double _ess1_controller_pll_pll_pid_integrator2__out;
double _ess1_controller_pll_pll_unit_delay1__out;
double _ess1_controller_pll_pll_to_hz__out;
double _ess1_controller_voltage_droop_clock1__out;
double _ess1_controller_voltage_droop_clock2__out;
double _ess1_ea1_va1__out;
double _ess1_eb1_va1__out;
double _ess1_ec1_va1__out;
X_Int32 _ess1_inv_sync__out;
double _ess1_ia1_ia1__out;
double _ess1_ib1_ia1__out;
double _ess1_ic1_ia1__out;
double _ess1_idc_ia1__out;
double _ess1_p_ref_ess__out;
double _ess1_power_meas_gain4__out;
double _ess1_power_meas_gain5__out;
double _ess1_power_meas_power_meas_dqpu_s_and_pf__P;
double _ess1_power_meas_power_meas_dqpu_s_and_pf__Q;


double _ess1_power_meas_power_meas_dqpu_s_and_pf__S;
double _ess1_power_meas_power_meas_dqpu_s_and_pf__pf;
double _ess1_q_ref_ess__out;
double _ess1_va2_va1__out;
double _ess1_vag_va1__out;
double _ess1_vb2_va1__out;
double _ess1_vbg_va1__out;
double _ess1_vc2_va1__out;
double _ess1_vcg_va1__out;
double _ess1_xi_a1_ia1__out;
double _ess1_xi_b1_ia1__out;
double _ess1_xi_c1_ia1__out;
X_Int32 _ess2_be1_25a_synchronizer_connect_inv__out;
double _ess2_be1_25a_synchronizer_constant6__out = 0.01;
double _ess2_be1_25a_synchronizer_constant7__out = 1.0;
double _ess2_be1_25a_synchronizer_constant9__out = 0.003;
double _ess2_be1_25a_synchronizer_unit_delay2__out;
double _ess2_battery_constant1__out = 55.0;
double _ess2_battery_constant2__out = 0.9;
double _ess2_battery_constant3__out = 0.86;
double _ess2_battery_constant4__out = 1.3;
double _ess2_battery_constant5__out = 1.5;
double _ess2_battery_constant6__out = 1.0;
double _ess2_battery_constant7__out = 1.2;
double _ess2_battery_constant8__out = 1.0;
double _ess2_battery_unit_delay1__out;
double _ess2_battery_unit_delay2__out;
X_Int32 _ess2_battery_charge__out;
X_Int32 _ess2_connect__out;
double _ess2_constant2__out = 1.0;
double _ess2_controller_constant1__out = 0.0;
double _ess2_controller_frequency_droop_clock1__out;
double _ess2_controller_frequency_droop_clock2__out;
double _ess2_controller_integrator2__out;
double _ess2_controller_integrator3__out;
X_Int32 _ess2_controller_outer_voltage_loop___inner_current_loop_gfm_mode__out;
double _ess2_controller_outer_voltage_loop___inner_current_loop_dq_to_abc_o_ref__out = 0.0;
double _ess2_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_limit3__out;
double _ess2_controller_outer_voltage_loop___inner_current_loop_outer_power_loop_limit_zero__out = 0.1;
double _ess2_controller_outer_voltage_loop___inner_current_loop_outer_power_loop_one__out = 1.0;
double _ess2_controller_pll_pll_pid_integrator1__out;
double _ess2_controller_pll_pll_pid_integrator2__out;
double _ess2_controller_pll_pll_unit_delay1__out;
double _ess2_controller_pll_pll_to_hz__out;
double _ess2_controller_voltage_droop_clock1__out;
double _ess2_controller_voltage_droop_clock2__out;
double _ess2_ea1_va1__out;
double _ess2_eb1_va1__out;
double _ess2_ec1_va1__out;
X_Int32 _ess2_inv_sync__out;
double _ess2_ia1_ia1__out;
double _ess2_ib1_ia1__out;
double _ess2_ic1_ia1__out;
double _ess2_idc_ia1__out;
double _ess2_p_ref_ess__out;
double _ess2_power_meas_gain4__out;
double _ess2_power_meas_gain5__out;
double _ess2_power_meas_power_meas_dqpu_s_and_pf__P;
double _ess2_power_meas_power_meas_dqpu_s_and_pf__Q;


double _ess2_power_meas_power_meas_dqpu_s_and_pf__S;
double _ess2_power_meas_power_meas_dqpu_s_and_pf__pf;
double _ess2_q_ref_ess__out;
double _ess2_va2_va1__out;
double _ess2_vag_va1__out;
double _ess2_vb2_va1__out;
double _ess2_vbg_va1__out;
double _ess2_vc2_va1__out;
double _ess2_vcg_va1__out;
double _ess2_xi_a1_ia1__out;
double _ess2_xi_b1_ia1__out;
double _ess2_xi_c1_ia1__out;
// Generated from the component Root/PCC/Digital Input Close
X_UnInt32 _pcc_digital_input_close__out;// Generated from the component Root/PCC/Digital Input Trip
X_UnInt32 _pcc_digital_input_trip__out;
X_Int32 _pcc_grid_connect__out;
double _pcc_meas1_ia_ia1__out;
double _pcc_meas1_ib_ia1__out;
double _pcc_meas1_ic_ia1__out;
double _pcc_meas1_va_va1__out;
double _pcc_meas1_vb_va1__out;
double _pcc_meas1_vc_va1__out;
double _pcc_meas2_va_va1__out;
double _pcc_meas2_vb_va1__out;
double _pcc_meas2_vc_va1__out;
double _pcc_pcc_measurements_constant1__out = 1.0;
double _pcc_pcc_measurements_constant2__out = 1.0;
double _pcc_pcc_measurements_three_phase_pll1_pid_integrator1__out;
double _pcc_pcc_measurements_three_phase_pll1_pid_integrator2__out;
double _pcc_pcc_measurements_three_phase_pll1_unit_delay1__out;
double _pcc_pcc_measurements_three_phase_pll1_to_hz__out;
X_UnInt32 _pcc_sr_flip_flop1__out;
X_UnInt32 _pcc_sr_flip_flop1__out_n;
double _pv1_constant1__out = 1.0;
double _pv1_constant2__out = 480.0;
double _pv1_pv_plant_control_grid_follow_constant1__out = 0.0;
double _pv1_pv_plant_control_grid_follow_constant2__out = 0.0;
double _pv1_pv_plant_control_grid_follow_constant3__out = 1.0;
double _pv1_pv_plant_control_grid_follow_controlsignal_calculation_damp__out = 0.0;
double _pv1_pv_plant_control_grid_follow_controlsignal_calculation_limit3__out;
double _pv1_pv_plant_control_grid_follow_edge_detection1_unit_delay1__out;
double _pv1_pv_plant_control_grid_follow_limit_pqref_unit_delay1__out;
double _pv1_pv_plant_control_grid_follow_limit_pqref_unit_delay2__out;
double _pv1_pv_plant_control_grid_follow_pv_area_m2__out = 100.0;
double _pv1_pv_plant_control_grid_follow_power_meas_gain4__out;
double _pv1_pv_plant_control_grid_follow_power_meas_gain5__out;
double _pv1_pv_plant_control_grid_follow_power_meas_power_meas_dqpu_s_and_pf__P;
double _pv1_pv_plant_control_grid_follow_power_meas_power_meas_dqpu_s_and_pf__Q;


double _pv1_pv_plant_control_grid_follow_power_meas_power_meas_dqpu_s_and_pf__S;
double _pv1_pv_plant_control_grid_follow_power_meas_power_meas_dqpu_s_and_pf__pf;
double _pv1_pv_plant_control_grid_follow_power_meas1_gain4__out;
double _pv1_pv_plant_control_grid_follow_power_meas1_gain5__out;
double _pv1_pv_plant_control_grid_follow_power_meas1_power_meas_dqpu_s_and_pf__P;
double _pv1_pv_plant_control_grid_follow_power_meas1_power_meas_dqpu_s_and_pf__Q;


double _pv1_pv_plant_control_grid_follow_power_meas1_power_meas_dqpu_s_and_pf__S;
double _pv1_pv_plant_control_grid_follow_power_meas1_power_meas_dqpu_s_and_pf__pf;
double _pv1_pv_plant_control_pll_constant1__out = 0.0;
double _pv1_pv_plant_control_pll_pll_pid_integrator1__out;
double _pv1_pv_plant_control_pll_pll_pid_integrator2__out;
double _pv1_pv_plant_control_pll_pll_unit_delay1__out;
double _pv1_pv_plant_control_pll_pll_to_hz__out;
double _pv1_pv_plant_control_duty_cycle_zsm_constant1__out = 0.5;
double _pv1_pv_plant_control_duty_cycle_zsm_constant2__out = 1.0;
double _pv1_pv_plant_control_duty_cycle_zsm_constant3__out = 1.0;
double _pv1_pv_plant_control_duty_cycle_zsm_constant4__out = 1.0;
double _pv1_pv_plant_control_duty_cycle_o_ref__out = 0.0;
double _pv1_pv_plant_ia_ia1__out;
double _pv1_pv_plant_ia1_ia1__out;
double _pv1_pv_plant_ib_ia1__out;
double _pv1_pv_plant_ib1_ia1__out;
double _pv1_pv_plant_ic_ia1__out;
double _pv1_pv_plant_ic1_ia1__out;
double _pv1_pv_plant_vdc__out = 1000.0;
double _pv1_pv_plant_va_va1__out;
double _pv1_pv_plant_vb_va1__out;
double _pv1_pv_plant_vc_va1__out;
double _pv1_pv_plant_vdc_va1__out;
double _pv1_q_ref_pv1__out;
double _pv1_solar_irradiance_constant10__out = 346.0;
double _pv1_solar_irradiance_constant11__out = 0.0;
double _pv1_solar_irradiance_constant12__out = 0.3490658503988659;
double _pv1_solar_irradiance_constant14__out = 0.2;
double _pv1_solar_irradiance_constant15__out = 1.0;
double _pv1_solar_irradiance_constant17__out = 1.0;
double _pv1_solar_irradiance_constant9__out = 304.0;
double _pv1_solar_irradiance_ang_t1__out;
double _pv2_constant1__out = 1.0;
double _pv2_constant2__out = 480.0;
double _pv2_pv_plant_control_grid_follow_constant1__out = 0.0;
double _pv2_pv_plant_control_grid_follow_constant2__out = 0.0;
double _pv2_pv_plant_control_grid_follow_constant3__out = 1.0;
double _pv2_pv_plant_control_grid_follow_controlsignal_calculation_damp__out = 0.0;
double _pv2_pv_plant_control_grid_follow_controlsignal_calculation_limit3__out;
double _pv2_pv_plant_control_grid_follow_edge_detection1_unit_delay1__out;
double _pv2_pv_plant_control_grid_follow_limit_pqref_unit_delay1__out;
double _pv2_pv_plant_control_grid_follow_limit_pqref_unit_delay2__out;
double _pv2_pv_plant_control_grid_follow_pv_area_m2__out = 100.0;
double _pv2_pv_plant_control_grid_follow_power_meas_gain4__out;
double _pv2_pv_plant_control_grid_follow_power_meas_gain5__out;
double _pv2_pv_plant_control_grid_follow_power_meas_power_meas_dqpu_s_and_pf__P;
double _pv2_pv_plant_control_grid_follow_power_meas_power_meas_dqpu_s_and_pf__Q;


double _pv2_pv_plant_control_grid_follow_power_meas_power_meas_dqpu_s_and_pf__S;
double _pv2_pv_plant_control_grid_follow_power_meas_power_meas_dqpu_s_and_pf__pf;
double _pv2_pv_plant_control_grid_follow_power_meas1_gain4__out;
double _pv2_pv_plant_control_grid_follow_power_meas1_gain5__out;
double _pv2_pv_plant_control_grid_follow_power_meas1_power_meas_dqpu_s_and_pf__P;
double _pv2_pv_plant_control_grid_follow_power_meas1_power_meas_dqpu_s_and_pf__Q;


double _pv2_pv_plant_control_grid_follow_power_meas1_power_meas_dqpu_s_and_pf__S;
double _pv2_pv_plant_control_grid_follow_power_meas1_power_meas_dqpu_s_and_pf__pf;
double _pv2_pv_plant_control_pll_constant1__out = 0.0;
double _pv2_pv_plant_control_pll_pll_pid_integrator1__out;
double _pv2_pv_plant_control_pll_pll_pid_integrator2__out;
double _pv2_pv_plant_control_pll_pll_unit_delay1__out;
double _pv2_pv_plant_control_pll_pll_to_hz__out;
double _pv2_pv_plant_control_duty_cycle_zsm_constant1__out = 0.5;
double _pv2_pv_plant_control_duty_cycle_zsm_constant2__out = 1.0;
double _pv2_pv_plant_control_duty_cycle_zsm_constant3__out = 1.0;
double _pv2_pv_plant_control_duty_cycle_zsm_constant4__out = 1.0;
double _pv2_pv_plant_control_duty_cycle_o_ref__out = 0.0;
double _pv2_pv_plant_ia_ia1__out;
double _pv2_pv_plant_ia1_ia1__out;
double _pv2_pv_plant_ib_ia1__out;
double _pv2_pv_plant_ib1_ia1__out;
double _pv2_pv_plant_ic_ia1__out;
double _pv2_pv_plant_ic1_ia1__out;
double _pv2_pv_plant_vdc__out = 1000.0;
double _pv2_pv_plant_va_va1__out;
double _pv2_pv_plant_vb_va1__out;
double _pv2_pv_plant_vc_va1__out;
double _pv2_pv_plant_vdc_va1__out;
double _pv2_q_ref_pv2__out;
double _pv2_solar_irradiance_constant15__out = 1.0;
double _pv2_solar_irradiance_constant17__out = 1.0;
double _pv2_solar_irradiance_ang_t2__out;
double _ess1_be1_25a_synchronizer_stay_connected1__connect;
X_Int32 _ess1_be1_25a_synchronizer_stay_connected1__connectINV;
double _ess1_be1_25a_synchronizer_stay_connected1__ready;


X_Int32 _ess1_be1_25a_synchronizer_stay_connected1__out;
double _ess1_be1_25a_synchronizer_be1_25a_synchronizer__dAng;
double _ess1_be1_25a_synchronizer_be1_25a_synchronizer__df;


double _ess1_be1_25a_synchronizer_be1_25a_synchronizer__del_w;
double _ess1_be1_25a_synchronizer_be1_25a_synchronizer1__dV;


double _ess1_be1_25a_synchronizer_be1_25a_synchronizer1__del_V;
double _ess1_battery_abs4__out;
double _ess1_battery_sum1__out;
double _ess1_battery_c_function__Cbat;
double _ess1_battery_c_function__Vbat;
double _ess1_battery_c_function__Ceff;
double _ess1_battery_c_function__Ibat;
X_Int32 _ess1_battery_c_function__charge;
double _ess1_battery_c_function__x[6];


double _ess1_battery_c_function__SOC;
double _ess1_battery_c_function__Vbtt;
double _ess1_battery_c_function__Vdc;
float _ess1_battery_charging__tmp;
double _ess1_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_gain5__out;
double _ess1_controller_pll_gain5__out;
double _ess1_be1_25a_synchronizer_current_abc_to_dq3_abc_to_dq1_abc_to_alpha_beta__alpha;
double _ess1_be1_25a_synchronizer_current_abc_to_dq3_abc_to_dq1_abc_to_alpha_beta__beta;
double _ess1_be1_25a_synchronizer_current_abc_to_dq3_abc_to_dq1_abc_to_alpha_beta__gamma;
double _ess1_controller_pll_pll_abc_to_dq_abc_to_alpha_beta__alpha;
double _ess1_controller_pll_pll_abc_to_dq_abc_to_alpha_beta__beta;
double _ess1_controller_pll_pll_abc_to_dq_abc_to_alpha_beta__gamma;
float _ess1_inv_sync_on__tmp;
X_Int32 _ess1_logical_operator1__out;
double _ess1_controller_current_abc_to_dq4_abc_to_dq1_abc_to_alpha_beta__alpha;
double _ess1_controller_current_abc_to_dq4_abc_to_dq1_abc_to_alpha_beta__beta;
double _ess1_controller_current_abc_to_dq4_abc_to_dq1_abc_to_alpha_beta__gamma;
double _ess1_power_meter__Pdc;
double _ess1_power_meter__Qdc;
double _ess1_power_meter__P0dc;
double _ess1_power_meter__Pac;
double _ess1_power_meter__Qac;
double _ess1_power_meter__P0ac;
double _ess1_power_meter__apparent;
double _ess1_power_meter__k_factor;
double _ess1_power_meter__v_alpha;
double _ess1_power_meter__v_beta;
double _ess1_power_meter__i_alpha;
double _ess1_power_meter__i_beta;
double _ess1_power_meter__v_zero;
double _ess1_power_meter__i_zero;
double _ess1_power_meter__filter_1_output;
double _ess1_power_meter__filter_1_outputQ;
double _ess1_power_meter__filter_1_outputP0;
double _ess1_battery_c_function2__Idc;
double _ess1_battery_c_function2__Vbtt;
X_Int32 _ess1_battery_c_function2__charge;


double _ess1_battery_c_function2__Ibat;
X_Int32 _ess1_c_function1__charge;
double _ess1_c_function1__ref;


double _ess1_c_function1__out;
double _ess1_power_meas_gain6__out;
X_Int32 _ess1_c_function2__charge;
double _ess1_c_function2__ref;


double _ess1_c_function2__out;
X_Int32 _ess1_logical_operator3__out;
X_Int32 _ess1_logical_operator2__out;
double _ess1_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__out;
double _ess1_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__b_coeff[2] = {6.282790547806893e-05, 6.282790547806893e-05};
double _ess1_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__a_coeff[2] = {1.0, -0.999874344189044};
double _ess1_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__a_sum;
double _ess1_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__b_sum;
double _ess1_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__delay_line_in;
X_UnInt32 _ess1_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__i;
double _ess1_be1_25a_synchronizer_sum6__out;
double _ess1_be1_25a_synchronizer_sum7__out;
double _ess1_controller_current_abc_to_dq3_abc_to_dq1_abc_to_alpha_beta__alpha;
double _ess1_controller_current_abc_to_dq3_abc_to_dq1_abc_to_alpha_beta__beta;
double _ess1_controller_current_abc_to_dq3_abc_to_dq1_abc_to_alpha_beta__gamma;
double _ess1_be1_25a_synchronizer_sum8__out;
double _ess1_be1_25a_synchronizer_abc_to_dq1_abc_to_alpha_beta__alpha;
double _ess1_be1_25a_synchronizer_abc_to_dq1_abc_to_alpha_beta__beta;
double _ess1_be1_25a_synchronizer_abc_to_dq1_abc_to_alpha_beta__gamma;
double _ess1_controller_current_abc_to_dq_abc_to_dq1_abc_to_alpha_beta__alpha;
double _ess1_controller_current_abc_to_dq_abc_to_dq1_abc_to_alpha_beta__beta;
double _ess1_controller_current_abc_to_dq_abc_to_dq1_abc_to_alpha_beta__gamma;
double _ess2_be1_25a_synchronizer_stay_connected1__connect;
X_Int32 _ess2_be1_25a_synchronizer_stay_connected1__connectINV;
double _ess2_be1_25a_synchronizer_stay_connected1__ready;


X_Int32 _ess2_be1_25a_synchronizer_stay_connected1__out;
double _ess2_be1_25a_synchronizer_be1_25a_synchronizer__dAng;
double _ess2_be1_25a_synchronizer_be1_25a_synchronizer__df;


double _ess2_be1_25a_synchronizer_be1_25a_synchronizer__del_w;
double _ess2_be1_25a_synchronizer_be1_25a_synchronizer1__dV;


double _ess2_be1_25a_synchronizer_be1_25a_synchronizer1__del_V;
double _ess2_battery_abs4__out;
double _ess2_battery_sum1__out;
double _ess2_battery_c_function__Cbat;
double _ess2_battery_c_function__Vbat;
double _ess2_battery_c_function__Ceff;
double _ess2_battery_c_function__Ibat;
X_Int32 _ess2_battery_c_function__charge;
double _ess2_battery_c_function__x[6];


double _ess2_battery_c_function__SOC;
double _ess2_battery_c_function__Vbtt;
double _ess2_battery_c_function__Vdc;
float _ess2_battery_charging__tmp;
double _ess2_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_gain5__out;
double _ess2_controller_pll_gain5__out;
double _ess2_be1_25a_synchronizer_current_abc_to_dq3_abc_to_dq1_abc_to_alpha_beta__alpha;
double _ess2_be1_25a_synchronizer_current_abc_to_dq3_abc_to_dq1_abc_to_alpha_beta__beta;
double _ess2_be1_25a_synchronizer_current_abc_to_dq3_abc_to_dq1_abc_to_alpha_beta__gamma;
double _ess2_controller_pll_pll_abc_to_dq_abc_to_alpha_beta__alpha;
double _ess2_controller_pll_pll_abc_to_dq_abc_to_alpha_beta__beta;
double _ess2_controller_pll_pll_abc_to_dq_abc_to_alpha_beta__gamma;
float _ess2_inv_sync_on__tmp;
X_Int32 _ess2_logical_operator1__out;
double _ess2_controller_current_abc_to_dq4_abc_to_dq1_abc_to_alpha_beta__alpha;
double _ess2_controller_current_abc_to_dq4_abc_to_dq1_abc_to_alpha_beta__beta;
double _ess2_controller_current_abc_to_dq4_abc_to_dq1_abc_to_alpha_beta__gamma;
double _ess2_power_meter__Pdc;
double _ess2_power_meter__Qdc;
double _ess2_power_meter__P0dc;
double _ess2_power_meter__Pac;
double _ess2_power_meter__Qac;
double _ess2_power_meter__P0ac;
double _ess2_power_meter__apparent;
double _ess2_power_meter__k_factor;
double _ess2_power_meter__v_alpha;
double _ess2_power_meter__v_beta;
double _ess2_power_meter__i_alpha;
double _ess2_power_meter__i_beta;
double _ess2_power_meter__v_zero;
double _ess2_power_meter__i_zero;
double _ess2_power_meter__filter_1_output;
double _ess2_power_meter__filter_1_outputQ;
double _ess2_power_meter__filter_1_outputP0;
double _ess2_battery_c_function2__Idc;
double _ess2_battery_c_function2__Vbtt;
X_Int32 _ess2_battery_c_function2__charge;


double _ess2_battery_c_function2__Ibat;
X_Int32 _ess2_c_function1__charge;
double _ess2_c_function1__ref;


double _ess2_c_function1__out;
double _ess2_power_meas_gain6__out;
X_Int32 _ess2_c_function2__charge;
double _ess2_c_function2__ref;


double _ess2_c_function2__out;
X_Int32 _ess2_logical_operator3__out;
X_Int32 _ess2_logical_operator2__out;
double _ess2_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__out;
double _ess2_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__b_coeff[2] = {6.282790547806893e-05, 6.282790547806893e-05};
double _ess2_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__a_coeff[2] = {1.0, -0.999874344189044};
double _ess2_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__a_sum;
double _ess2_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__b_sum;
double _ess2_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__delay_line_in;
X_UnInt32 _ess2_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__i;
double _ess2_be1_25a_synchronizer_sum6__out;
double _ess2_be1_25a_synchronizer_sum7__out;
double _ess2_controller_current_abc_to_dq3_abc_to_dq1_abc_to_alpha_beta__alpha;
double _ess2_controller_current_abc_to_dq3_abc_to_dq1_abc_to_alpha_beta__beta;
double _ess2_controller_current_abc_to_dq3_abc_to_dq1_abc_to_alpha_beta__gamma;
double _ess2_be1_25a_synchronizer_sum8__out;
double _ess2_be1_25a_synchronizer_abc_to_dq1_abc_to_alpha_beta__alpha;
double _ess2_be1_25a_synchronizer_abc_to_dq1_abc_to_alpha_beta__beta;
double _ess2_be1_25a_synchronizer_abc_to_dq1_abc_to_alpha_beta__gamma;
double _ess2_controller_current_abc_to_dq_abc_to_dq1_abc_to_alpha_beta__alpha;
double _ess2_controller_current_abc_to_dq_abc_to_dq1_abc_to_alpha_beta__beta;
double _ess2_controller_current_abc_to_dq_abc_to_dq1_abc_to_alpha_beta__gamma;
double _pcc_meas1_bus_join2__out[3];
double _pcc_meas1_bus_join1__out[3];
double _pcc_meas2_bus_join1__out[3];
double _pcc_pcc_measurements_three_phase_pll1_sin__out;
double _pcc_gain4__out;
X_Int32 _pcc_logical_operator2__out;
double _pv1_pv_plant_control_grid_follow_controlsignal_calculation_gain5__out;
double _pv1_pv_plant_control_grid_follow_power_meas_gain6__out;
double _pv1_pv_plant_control_grid_follow_power_meas1_gain6__out;
double _pv1_pv_plant_control_pll_gain1__out;
double _pv1_pv_plant_control_duty_cycle_zsm_limit1__out;
double _pv1_pv_plant_control_grid_follow_current_abc_to_dq_abc_to_dq1_abc_to_alpha_beta__alpha;
double _pv1_pv_plant_control_grid_follow_current_abc_to_dq_abc_to_dq1_abc_to_alpha_beta__beta;
double _pv1_pv_plant_control_grid_follow_current_abc_to_dq_abc_to_dq1_abc_to_alpha_beta__gamma;
double _pv1_pv_plant_control_grid_follow_current_abc_to_dq1_abc_to_dq1_abc_to_alpha_beta__alpha;
double _pv1_pv_plant_control_grid_follow_current_abc_to_dq1_abc_to_dq1_abc_to_alpha_beta__beta;
double _pv1_pv_plant_control_grid_follow_current_abc_to_dq1_abc_to_dq1_abc_to_alpha_beta__gamma;
double _pv1_pv_plant_control_grid_follow_gain3__out;
double _pv1_solar_irradiance_trigonometric_function1__out;
double _pv1_solar_irradiance_trigonometric_function6__out;
double _pv2_solar_irradiance_trigonometric_function1__out;
double _pv2_solar_irradiance_trigonometric_function6__out;
double _pv1_solar_irradiance_trigonometric_function2__out;
double _pv1_solar_irradiance_trigonometric_function7__out;
double _pv2_solar_irradiance_trigonometric_function2__out;
double _pv2_solar_irradiance_trigonometric_function7__out;
double _pv1_solar_irradiance_c_function2__k;
double _pv1_solar_irradiance_c_function2__ETR;
double _pv1_solar_irradiance_c_function2__GHI;


double _pv1_solar_irradiance_c_function2__Gdh;
double _pv1_solar_irradiance_c_function2__f;
double _pv2_solar_irradiance_c_function2__k;
double _pv2_solar_irradiance_c_function2__ETR;
double _pv2_solar_irradiance_c_function2__GHI;


double _pv2_solar_irradiance_c_function2__Gdh;
double _pv2_solar_irradiance_c_function2__f;
double _pv1_solar_irradiance_gain4__out;
double _pv2_pv_plant_control_grid_follow_controlsignal_calculation_gain5__out;
double _pv2_pv_plant_control_grid_follow_power_meas_gain6__out;
double _pv2_pv_plant_control_grid_follow_power_meas1_gain6__out;
double _pv2_pv_plant_control_pll_gain1__out;
double _pv2_pv_plant_control_duty_cycle_zsm_limit1__out;
double _pv2_pv_plant_control_grid_follow_current_abc_to_dq_abc_to_dq1_abc_to_alpha_beta__alpha;
double _pv2_pv_plant_control_grid_follow_current_abc_to_dq_abc_to_dq1_abc_to_alpha_beta__beta;
double _pv2_pv_plant_control_grid_follow_current_abc_to_dq_abc_to_dq1_abc_to_alpha_beta__gamma;
double _pv2_pv_plant_control_grid_follow_current_abc_to_dq1_abc_to_dq1_abc_to_alpha_beta__alpha;
double _pv2_pv_plant_control_grid_follow_current_abc_to_dq1_abc_to_dq1_abc_to_alpha_beta__beta;
double _pv2_pv_plant_control_grid_follow_current_abc_to_dq1_abc_to_dq1_abc_to_alpha_beta__gamma;
double _pv2_pv_plant_control_grid_follow_gain3__out;
double _pv2_solar_irradiance_gain4__out;
float _ess1_be1_25a_synchronizer_digital_probe1__tmp;
X_Int32 _ess1_be1_25a_synchronizer_logical_operator2__out;
double _ess1_be1_25a_synchronizer_hold_after_connect2__var;
X_Int32 _ess1_be1_25a_synchronizer_hold_after_connect2__INV_sync;
X_Int32 _ess1_be1_25a_synchronizer_hold_after_connect2__connect;
double _ess1_be1_25a_synchronizer_hold_after_connect2__in;


double _ess1_be1_25a_synchronizer_hold_after_connect2__out;
double _ess1_be1_25a_synchronizer_hold_after_connect3__var;
X_Int32 _ess1_be1_25a_synchronizer_hold_after_connect3__INV_sync;
X_Int32 _ess1_be1_25a_synchronizer_hold_after_connect3__connect;
double _ess1_be1_25a_synchronizer_hold_after_connect3__in;


double _ess1_be1_25a_synchronizer_hold_after_connect3__out;
double _ess1_battery_mathematical_function4__out;
double _ess1_battery_abs5__out;
double _ess1_be1_25a_synchronizer_current_abc_to_dq3_abc_to_dq1_alpha_beta_to_dq__d;
double _ess1_be1_25a_synchronizer_current_abc_to_dq3_abc_to_dq1_alpha_beta_to_dq__q;
double _ess1_be1_25a_synchronizer_current_abc_to_dq3_abc_to_dq1_alpha_beta_to_dq__k1;
double _ess1_be1_25a_synchronizer_current_abc_to_dq3_abc_to_dq1_alpha_beta_to_dq__k2;
double _ess1_controller_pll_pll_abc_to_dq_alpha_beta_to_dq__d;
double _ess1_controller_pll_pll_abc_to_dq_alpha_beta_to_dq__q;
double _ess1_controller_pll_pll_abc_to_dq_alpha_beta_to_dq__k1;
double _ess1_controller_pll_pll_abc_to_dq_alpha_beta_to_dq__k2;
float _ess1_inv_sync_off__tmp;
double _ess1_controller_current_abc_to_dq4_abc_to_dq1_alpha_beta_to_dq__d;
double _ess1_controller_current_abc_to_dq4_abc_to_dq1_alpha_beta_to_dq__q;
double _ess1_controller_current_abc_to_dq4_abc_to_dq1_alpha_beta_to_dq__k1;
double _ess1_controller_current_abc_to_dq4_abc_to_dq1_alpha_beta_to_dq__k2;
double _ess1_battery_abs1__out;
double _ess1_battery_abs2__out;
double _ess1_battery_abs3__out;
double _ess1_battery_c_function1__Ibat;
double _ess1_battery_c_function1__SOC;


double _ess1_battery_c_function1__out;
double _ess1_battery_lpf_dc__out;
double _ess1_battery_lpf_dc__b_coeff[2] = {6.282790547806893e-05, 6.282790547806893e-05};
double _ess1_battery_lpf_dc__a_coeff[2] = {1.0, -0.999874344189044};
double _ess1_battery_lpf_dc__a_sum;
double _ess1_battery_lpf_dc__b_sum;
double _ess1_battery_lpf_dc__delay_line_in;
X_UnInt32 _ess1_battery_lpf_dc__i;
double _ess1_gain18__out;
double _ess1_gain17__out;
X_Int32 _ess1_controller_outer_voltage_loop___inner_current_loop_logical_operator1__out;
double _ess1_controller_current_abc_to_dq3_abc_to_dq1_alpha_beta_to_dq__d;
double _ess1_controller_current_abc_to_dq3_abc_to_dq1_alpha_beta_to_dq__q;
double _ess1_controller_current_abc_to_dq3_abc_to_dq1_alpha_beta_to_dq__k1;
double _ess1_controller_current_abc_to_dq3_abc_to_dq1_alpha_beta_to_dq__k2;
double _ess1_be1_25a_synchronizer_abc_to_dq2_abc_to_alpha_beta__alpha;
double _ess1_be1_25a_synchronizer_abc_to_dq2_abc_to_alpha_beta__beta;
double _ess1_be1_25a_synchronizer_abc_to_dq2_abc_to_alpha_beta__gamma;
double _ess1_be1_25a_synchronizer_abc_to_dq1_alpha_beta_to_dq__d;
double _ess1_be1_25a_synchronizer_abc_to_dq1_alpha_beta_to_dq__q;
double _ess1_be1_25a_synchronizer_abc_to_dq1_alpha_beta_to_dq__k1;
double _ess1_be1_25a_synchronizer_abc_to_dq1_alpha_beta_to_dq__k2;
double _ess1_controller_current_abc_to_dq_abc_to_dq1_alpha_beta_to_dq__d;
double _ess1_controller_current_abc_to_dq_abc_to_dq1_alpha_beta_to_dq__q;
double _ess1_controller_current_abc_to_dq_abc_to_dq1_alpha_beta_to_dq__k1;
double _ess1_controller_current_abc_to_dq_abc_to_dq1_alpha_beta_to_dq__k2;
float _ess2_be1_25a_synchronizer_digital_probe1__tmp;
X_Int32 _ess2_be1_25a_synchronizer_logical_operator2__out;
double _ess2_be1_25a_synchronizer_hold_after_connect2__var;
X_Int32 _ess2_be1_25a_synchronizer_hold_after_connect2__INV_sync;
X_Int32 _ess2_be1_25a_synchronizer_hold_after_connect2__connect;
double _ess2_be1_25a_synchronizer_hold_after_connect2__in;


double _ess2_be1_25a_synchronizer_hold_after_connect2__out;
double _ess2_be1_25a_synchronizer_hold_after_connect3__var;
X_Int32 _ess2_be1_25a_synchronizer_hold_after_connect3__INV_sync;
X_Int32 _ess2_be1_25a_synchronizer_hold_after_connect3__connect;
double _ess2_be1_25a_synchronizer_hold_after_connect3__in;


double _ess2_be1_25a_synchronizer_hold_after_connect3__out;
double _ess2_battery_mathematical_function4__out;
double _ess2_battery_abs5__out;
double _ess2_be1_25a_synchronizer_current_abc_to_dq3_abc_to_dq1_alpha_beta_to_dq__d;
double _ess2_be1_25a_synchronizer_current_abc_to_dq3_abc_to_dq1_alpha_beta_to_dq__q;
double _ess2_be1_25a_synchronizer_current_abc_to_dq3_abc_to_dq1_alpha_beta_to_dq__k1;
double _ess2_be1_25a_synchronizer_current_abc_to_dq3_abc_to_dq1_alpha_beta_to_dq__k2;
double _ess2_controller_pll_pll_abc_to_dq_alpha_beta_to_dq__d;
double _ess2_controller_pll_pll_abc_to_dq_alpha_beta_to_dq__q;
double _ess2_controller_pll_pll_abc_to_dq_alpha_beta_to_dq__k1;
double _ess2_controller_pll_pll_abc_to_dq_alpha_beta_to_dq__k2;
float _ess2_inv_sync_off__tmp;
double _ess2_controller_current_abc_to_dq4_abc_to_dq1_alpha_beta_to_dq__d;
double _ess2_controller_current_abc_to_dq4_abc_to_dq1_alpha_beta_to_dq__q;
double _ess2_controller_current_abc_to_dq4_abc_to_dq1_alpha_beta_to_dq__k1;
double _ess2_controller_current_abc_to_dq4_abc_to_dq1_alpha_beta_to_dq__k2;
double _ess2_battery_abs1__out;
double _ess2_battery_abs2__out;
double _ess2_battery_abs3__out;
double _ess2_battery_c_function1__Ibat;
double _ess2_battery_c_function1__SOC;


double _ess2_battery_c_function1__out;
double _ess2_battery_lpf_dc__out;
double _ess2_battery_lpf_dc__b_coeff[2] = {6.282790547806893e-05, 6.282790547806893e-05};
double _ess2_battery_lpf_dc__a_coeff[2] = {1.0, -0.999874344189044};
double _ess2_battery_lpf_dc__a_sum;
double _ess2_battery_lpf_dc__b_sum;
double _ess2_battery_lpf_dc__delay_line_in;
X_UnInt32 _ess2_battery_lpf_dc__i;
double _ess2_gain18__out;
double _ess2_gain17__out;
X_Int32 _ess2_controller_outer_voltage_loop___inner_current_loop_logical_operator1__out;
double _ess2_controller_current_abc_to_dq3_abc_to_dq1_alpha_beta_to_dq__d;
double _ess2_controller_current_abc_to_dq3_abc_to_dq1_alpha_beta_to_dq__q;
double _ess2_controller_current_abc_to_dq3_abc_to_dq1_alpha_beta_to_dq__k1;
double _ess2_controller_current_abc_to_dq3_abc_to_dq1_alpha_beta_to_dq__k2;
double _ess2_be1_25a_synchronizer_abc_to_dq2_abc_to_alpha_beta__alpha;
double _ess2_be1_25a_synchronizer_abc_to_dq2_abc_to_alpha_beta__beta;
double _ess2_be1_25a_synchronizer_abc_to_dq2_abc_to_alpha_beta__gamma;
double _ess2_be1_25a_synchronizer_abc_to_dq1_alpha_beta_to_dq__d;
double _ess2_be1_25a_synchronizer_abc_to_dq1_alpha_beta_to_dq__q;
double _ess2_be1_25a_synchronizer_abc_to_dq1_alpha_beta_to_dq__k1;
double _ess2_be1_25a_synchronizer_abc_to_dq1_alpha_beta_to_dq__k2;
double _ess2_controller_current_abc_to_dq_abc_to_dq1_alpha_beta_to_dq__d;
double _ess2_controller_current_abc_to_dq_abc_to_dq1_alpha_beta_to_dq__q;
double _ess2_controller_current_abc_to_dq_abc_to_dq1_alpha_beta_to_dq__k1;
double _ess2_controller_current_abc_to_dq_abc_to_dq1_alpha_beta_to_dq__k2;
double _pcc_pcc_measurements_bus_split2__out;
double _pcc_pcc_measurements_bus_split2__out1;
double _pcc_pcc_measurements_bus_split2__out2;
double _pcc_pcc_measurements_bus_split1__out;
double _pcc_pcc_measurements_bus_split1__out1;
double _pcc_pcc_measurements_bus_split1__out2;
double _pcc_data_type_conversion1__out;
double _pv1_pv_plant_control_duty_cycle_zsm_sum2__out;
double _pv1_pv_plant_control_duty_cycle_zsm_sum8__out;
double _pv1_pv_plant_control_grid_follow_current_abc_to_dq_abc_to_dq1_alpha_beta_to_dq__d;
double _pv1_pv_plant_control_grid_follow_current_abc_to_dq_abc_to_dq1_alpha_beta_to_dq__q;
double _pv1_pv_plant_control_grid_follow_current_abc_to_dq_abc_to_dq1_alpha_beta_to_dq__k1;
double _pv1_pv_plant_control_grid_follow_current_abc_to_dq_abc_to_dq1_alpha_beta_to_dq__k2;
double _pv1_pv_plant_control_grid_follow_current_abc_to_dq1_abc_to_dq1_alpha_beta_to_dq__d;
double _pv1_pv_plant_control_grid_follow_current_abc_to_dq1_abc_to_dq1_alpha_beta_to_dq__q;
double _pv1_pv_plant_control_grid_follow_current_abc_to_dq1_abc_to_dq1_alpha_beta_to_dq__k1;
double _pv1_pv_plant_control_grid_follow_current_abc_to_dq1_abc_to_dq1_alpha_beta_to_dq__k2;
double _pv1_pv_plant_control_grid_follow_controlsignal_calculation_lpf_dc__out;
double _pv1_pv_plant_control_grid_follow_controlsignal_calculation_lpf_dc__b_coeff[2] = {6.282790547806893e-05, 6.282790547806893e-05};
double _pv1_pv_plant_control_grid_follow_controlsignal_calculation_lpf_dc__a_coeff[2] = {1.0, -0.999874344189044};
double _pv1_pv_plant_control_grid_follow_controlsignal_calculation_lpf_dc__a_sum;
double _pv1_pv_plant_control_grid_follow_controlsignal_calculation_lpf_dc__b_sum;
double _pv1_pv_plant_control_grid_follow_controlsignal_calculation_lpf_dc__delay_line_in;
X_UnInt32 _pv1_pv_plant_control_grid_follow_controlsignal_calculation_lpf_dc__i;
double _pv1_solar_irradiance_product4__out;
double _pv1_solar_irradiance_sum3__out;
double _pv2_solar_irradiance_sum3__out;
double _pv2_solar_irradiance_product4__out;
double _pv1_solar_irradiance_gain1__out;
double _pv1_solar_irradiance_gain2__out;
double _pv1_solar_irradiance_trigonometric_function3__out;
double _pv2_pv_plant_control_duty_cycle_zsm_sum2__out;
double _pv2_pv_plant_control_duty_cycle_zsm_sum8__out;
double _pv2_pv_plant_control_grid_follow_current_abc_to_dq_abc_to_dq1_alpha_beta_to_dq__d;
double _pv2_pv_plant_control_grid_follow_current_abc_to_dq_abc_to_dq1_alpha_beta_to_dq__q;
double _pv2_pv_plant_control_grid_follow_current_abc_to_dq_abc_to_dq1_alpha_beta_to_dq__k1;
double _pv2_pv_plant_control_grid_follow_current_abc_to_dq_abc_to_dq1_alpha_beta_to_dq__k2;
double _pv2_pv_plant_control_grid_follow_current_abc_to_dq1_abc_to_dq1_alpha_beta_to_dq__d;
double _pv2_pv_plant_control_grid_follow_current_abc_to_dq1_abc_to_dq1_alpha_beta_to_dq__q;
double _pv2_pv_plant_control_grid_follow_current_abc_to_dq1_abc_to_dq1_alpha_beta_to_dq__k1;
double _pv2_pv_plant_control_grid_follow_current_abc_to_dq1_abc_to_dq1_alpha_beta_to_dq__k2;
double _pv2_pv_plant_control_grid_follow_controlsignal_calculation_lpf_dc__out;
double _pv2_pv_plant_control_grid_follow_controlsignal_calculation_lpf_dc__b_coeff[2] = {6.282790547806893e-05, 6.282790547806893e-05};
double _pv2_pv_plant_control_grid_follow_controlsignal_calculation_lpf_dc__a_coeff[2] = {1.0, -0.999874344189044};
double _pv2_pv_plant_control_grid_follow_controlsignal_calculation_lpf_dc__a_sum;
double _pv2_pv_plant_control_grid_follow_controlsignal_calculation_lpf_dc__b_sum;
double _pv2_pv_plant_control_grid_follow_controlsignal_calculation_lpf_dc__delay_line_in;
X_UnInt32 _pv2_pv_plant_control_grid_follow_controlsignal_calculation_lpf_dc__i;
double _pv2_solar_irradiance_gain1__out;
double _pv2_solar_irradiance_gain2__out;
double _pv2_solar_irradiance_trigonometric_function3__out;
float _ess1_be1_25a_synchronizer_digital_probe6__tmp;
X_Int32 _ess1_controller_frequency_droop_c_function3__Connect;
X_Int32 _ess1_controller_frequency_droop_c_function3__INV_sync;
double _ess1_controller_frequency_droop_c_function3__del_w;


double _ess1_controller_frequency_droop_c_function3__wref;
X_Int32 _ess1_controller_voltage_droop_c_function3__Connect;
X_Int32 _ess1_controller_voltage_droop_c_function3__INV_sync;
double _ess1_controller_voltage_droop_c_function3__del_V;


double _ess1_controller_voltage_droop_c_function3__Vref;
double _ess1_battery_mathematical_function5__out;
double _ess1_be1_25a_synchronizer_gain12__out;
double _ess1_be1_25a_synchronizer_gain7__out;
double _ess1_controller_pll_pll_abc_to_dq_lpf_d__out;
double _ess1_controller_pll_pll_abc_to_dq_lpf_d__b_coeff[2] = {0.0012566370614000002, 0.0012566370614000002};
double _ess1_controller_pll_pll_abc_to_dq_lpf_d__a_coeff[2] = {2.0012566370614, -1.9987433629386};
double _ess1_controller_pll_pll_abc_to_dq_lpf_d__a_sum;
double _ess1_controller_pll_pll_abc_to_dq_lpf_d__b_sum;
double _ess1_controller_pll_pll_abc_to_dq_lpf_d__delay_line_in;
X_UnInt32 _ess1_controller_pll_pll_abc_to_dq_lpf_d__i;
double _ess1_controller_pll_pll_abc_to_dq_lpf_q__out;
double _ess1_controller_pll_pll_abc_to_dq_lpf_q__b_coeff[2] = {0.0012566370614000002, 0.0012566370614000002};
double _ess1_controller_pll_pll_abc_to_dq_lpf_q__a_coeff[2] = {2.0012566370614, -1.9987433629386};
double _ess1_controller_pll_pll_abc_to_dq_lpf_q__a_sum;
double _ess1_controller_pll_pll_abc_to_dq_lpf_q__b_sum;
double _ess1_controller_pll_pll_abc_to_dq_lpf_q__delay_line_in;
X_UnInt32 _ess1_controller_pll_pll_abc_to_dq_lpf_q__i;
double _ess1_controller_gain11__out;
double _ess1_controller_gain12__out;
double _ess1_battery_product1__out;
double _ess1_battery_mathematical_function2__out;
double _ess1_battery_mathematical_function3__out;
double _ess1_battery_mathematical_function6__out;
double _ess1_controller_frequency_droop_sum1__out;
double _ess1_controller_voltage_droop_sum2__out;
double _ess1_controller_gain10__out;
double _ess1_controller_gain9__out;
double _ess1_be1_25a_synchronizer_abc_to_dq2_alpha_beta_to_dq__d;
double _ess1_be1_25a_synchronizer_abc_to_dq2_alpha_beta_to_dq__q;
double _ess1_be1_25a_synchronizer_abc_to_dq2_alpha_beta_to_dq__k1;
double _ess1_be1_25a_synchronizer_abc_to_dq2_alpha_beta_to_dq__k2;
double _ess1_be1_25a_synchronizer_gain5__out;
double _ess1_be1_25a_synchronizer_gain6__out;
double _ess1_controller_gain6__out;
double _ess1_controller_gain7__out;
float _ess2_be1_25a_synchronizer_digital_probe6__tmp;
X_Int32 _ess2_controller_frequency_droop_c_function3__Connect;
X_Int32 _ess2_controller_frequency_droop_c_function3__INV_sync;
double _ess2_controller_frequency_droop_c_function3__del_w;


double _ess2_controller_frequency_droop_c_function3__wref;
X_Int32 _ess2_controller_voltage_droop_c_function3__Connect;
X_Int32 _ess2_controller_voltage_droop_c_function3__INV_sync;
double _ess2_controller_voltage_droop_c_function3__del_V;


double _ess2_controller_voltage_droop_c_function3__Vref;
double _ess2_battery_mathematical_function5__out;
double _ess2_be1_25a_synchronizer_gain12__out;
double _ess2_be1_25a_synchronizer_gain7__out;
double _ess2_controller_pll_pll_abc_to_dq_lpf_d__out;
double _ess2_controller_pll_pll_abc_to_dq_lpf_d__b_coeff[2] = {0.0012566370614000002, 0.0012566370614000002};
double _ess2_controller_pll_pll_abc_to_dq_lpf_d__a_coeff[2] = {2.0012566370614, -1.9987433629386};
double _ess2_controller_pll_pll_abc_to_dq_lpf_d__a_sum;
double _ess2_controller_pll_pll_abc_to_dq_lpf_d__b_sum;
double _ess2_controller_pll_pll_abc_to_dq_lpf_d__delay_line_in;
X_UnInt32 _ess2_controller_pll_pll_abc_to_dq_lpf_d__i;
double _ess2_controller_pll_pll_abc_to_dq_lpf_q__out;
double _ess2_controller_pll_pll_abc_to_dq_lpf_q__b_coeff[2] = {0.0012566370614000002, 0.0012566370614000002};
double _ess2_controller_pll_pll_abc_to_dq_lpf_q__a_coeff[2] = {2.0012566370614, -1.9987433629386};
double _ess2_controller_pll_pll_abc_to_dq_lpf_q__a_sum;
double _ess2_controller_pll_pll_abc_to_dq_lpf_q__b_sum;
double _ess2_controller_pll_pll_abc_to_dq_lpf_q__delay_line_in;
X_UnInt32 _ess2_controller_pll_pll_abc_to_dq_lpf_q__i;
double _ess2_controller_gain11__out;
double _ess2_controller_gain12__out;
double _ess2_battery_product1__out;
double _ess2_battery_mathematical_function2__out;
double _ess2_battery_mathematical_function3__out;
double _ess2_battery_mathematical_function6__out;
double _ess2_controller_frequency_droop_sum1__out;
double _ess2_controller_voltage_droop_sum2__out;
double _ess2_controller_gain10__out;
double _ess2_controller_gain9__out;
double _ess2_be1_25a_synchronizer_abc_to_dq2_alpha_beta_to_dq__d;
double _ess2_be1_25a_synchronizer_abc_to_dq2_alpha_beta_to_dq__q;
double _ess2_be1_25a_synchronizer_abc_to_dq2_alpha_beta_to_dq__k1;
double _ess2_be1_25a_synchronizer_abc_to_dq2_alpha_beta_to_dq__k2;
double _ess2_be1_25a_synchronizer_gain5__out;
double _ess2_be1_25a_synchronizer_gain6__out;
double _ess2_controller_gain6__out;
double _ess2_controller_gain7__out;
double _pcc_pcc_measurements_power_meter1__Pdc;
double _pcc_pcc_measurements_power_meter1__Qdc;
double _pcc_pcc_measurements_power_meter1__P0dc;
double _pcc_pcc_measurements_power_meter1__Pac;
double _pcc_pcc_measurements_power_meter1__Qac;
double _pcc_pcc_measurements_power_meter1__P0ac;
double _pcc_pcc_measurements_power_meter1__apparent;
double _pcc_pcc_measurements_power_meter1__k_factor;
double _pcc_pcc_measurements_power_meter1__v_alpha;
double _pcc_pcc_measurements_power_meter1__v_beta;
double _pcc_pcc_measurements_power_meter1__i_alpha;
double _pcc_pcc_measurements_power_meter1__i_beta;
double _pcc_pcc_measurements_power_meter1__v_zero;
double _pcc_pcc_measurements_power_meter1__i_zero;
double _pcc_pcc_measurements_power_meter1__filter_1_output;
double _pcc_pcc_measurements_power_meter1__filter_1_outputQ;
double _pcc_pcc_measurements_power_meter1__filter_1_outputP0;
double _pcc_pcc_measurements_rms_value1__out;
double _pcc_pcc_measurements_rms_value1__previous_value;
double _pcc_pcc_measurements_rms_value1__previous_filtered_value;
double _pcc_pcc_measurements_rms_value1__correction;
double _pcc_pcc_measurements_rms_value1__previous_correction;
X_UnInt32 _pcc_pcc_measurements_rms_value1__zc;
double _pcc_pcc_measurements_three_phase_pll1_abc_to_dq_abc_to_alpha_beta__alpha;
double _pcc_pcc_measurements_three_phase_pll1_abc_to_dq_abc_to_alpha_beta__beta;
double _pcc_pcc_measurements_three_phase_pll1_abc_to_dq_abc_to_alpha_beta__gamma;
double _pv1_pv_plant_control_grid_follow_current_abc_to_dq_gain1__out;
double _pv1_pv_plant_control_grid_follow_current_abc_to_dq_gain2__out;
double _pv1_pv_plant_control_grid_follow_current_abc_to_dq1_gain1__out;
double _pv1_pv_plant_control_grid_follow_current_abc_to_dq1_gain2__out;
double _pv1_solar_irradiance_sum5__out;
double _pv1_solar_irradiance_product2__out;
double _pv2_solar_irradiance_product2__out;
double _pv2_solar_irradiance_sum5__out;
double _pv1_solar_irradiance_trigonometric_function4__out;
double _pv1_solar_irradiance_trigonometric_function5__out;
double _pv1_solar_irradiance_sum4__out;
double _pv2_pv_plant_control_grid_follow_current_abc_to_dq_gain1__out;
double _pv2_pv_plant_control_grid_follow_current_abc_to_dq_gain2__out;
double _pv2_pv_plant_control_grid_follow_current_abc_to_dq1_gain1__out;
double _pv2_pv_plant_control_grid_follow_current_abc_to_dq1_gain2__out;
double _pv2_solar_irradiance_trigonometric_function4__out;
double _pv2_solar_irradiance_trigonometric_function5__out;
double _pv2_solar_irradiance_sum4__out;
double _ess1_be1_25a_synchronizer_product2__out;
double _ess1_be1_25a_synchronizer_limit1__out;
double _ess1_be1_25a_synchronizer_product1__out;
double _ess1_controller_pll_gain4__out;
double _ess1_controller_pll_gain3__out;
double _ess1_controller_pll_pll_normalize__in1;
double _ess1_controller_pll_pll_normalize__in2;


double _ess1_controller_pll_pll_normalize__in2_pu;
double _ess1_controller_pll_pll_normalize__pk;
double _ess1_battery_mathematical_function1__out;
double _ess1_battery_sum2__out;
double _ess1_controller_frequency_droop_gain3__out;
double _ess1_controller_voltage_droop_gain3__out;
double _ess1_controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_gain4__out;
double _ess1_controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_gain6__out;
double _ess1_be1_25a_synchronizer_limit2__out;
double _ess1_be1_25a_synchronizer_product3__out;
double _ess1_be1_25a_synchronizer_pll_pid_controller1__out;
double _ess1_be1_25a_synchronizer_pll_pid_controller1__pi_reg_out_int;
double _ess1_be1_25a_synchronizer_product4__out;
double _ess1_controller_outer_voltage_loop___inner_current_loop_sum10__out;
double _ess1_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_gain7__out;
double _ess1_controller_outer_voltage_loop___inner_current_loop_sum11__out;
double _ess1_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_gain6__out;
double _ess2_be1_25a_synchronizer_product2__out;
double _ess2_be1_25a_synchronizer_limit1__out;
double _ess2_be1_25a_synchronizer_product1__out;
double _ess2_controller_pll_gain4__out;
double _ess2_controller_pll_gain3__out;
double _ess2_controller_pll_pll_normalize__in1;
double _ess2_controller_pll_pll_normalize__in2;


double _ess2_controller_pll_pll_normalize__in2_pu;
double _ess2_controller_pll_pll_normalize__pk;
double _ess2_battery_mathematical_function1__out;
double _ess2_battery_sum2__out;
double _ess2_controller_frequency_droop_gain3__out;
double _ess2_controller_voltage_droop_gain3__out;
double _ess2_controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_gain4__out;
double _ess2_controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_gain6__out;
double _ess2_be1_25a_synchronizer_limit2__out;
double _ess2_be1_25a_synchronizer_product3__out;
double _ess2_be1_25a_synchronizer_pll_pid_controller1__out;
double _ess2_be1_25a_synchronizer_pll_pid_controller1__pi_reg_out_int;
double _ess2_be1_25a_synchronizer_product4__out;
double _ess2_controller_outer_voltage_loop___inner_current_loop_sum10__out;
double _ess2_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_gain7__out;
double _ess2_controller_outer_voltage_loop___inner_current_loop_sum11__out;
double _ess2_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_gain6__out;
double _pcc_pcc_measurements_comparator1__out;
double _pcc_pcc_measurements_comparator2__out;
double _pcc_w____kw__out;
double _pcc_var____kvar__out;
double _pcc_gain3__out;
double _pcc_pcc_measurements_three_phase_pll1_abc_to_dq_alpha_beta_to_dq__d;
double _pcc_pcc_measurements_three_phase_pll1_abc_to_dq_alpha_beta_to_dq__q;
double _pcc_pcc_measurements_three_phase_pll1_abc_to_dq_alpha_beta_to_dq__k1;
double _pcc_pcc_measurements_three_phase_pll1_abc_to_dq_alpha_beta_to_dq__k2;
double _pv1_pv_plant_control_grid_follow_controlsignal_calculation_gain2__out;
double _pv1_pv_plant_control_grid_follow_controlsignal_calculation_product5__out;
double _pv1_pv_plant_control_grid_follow_controlsignal_calculation_gain1__out;
double _pv1_pv_plant_control_grid_follow_controlsignal_calculation_product6__out;
double _pv1_solar_irradiance_bus_join1__out[4];
double _pv1_solar_irradiance_product3__out;
double _pv2_pv_plant_control_grid_follow_controlsignal_calculation_gain2__out;
double _pv2_pv_plant_control_grid_follow_controlsignal_calculation_product5__out;
double _pv2_pv_plant_control_grid_follow_controlsignal_calculation_gain1__out;
double _pv2_pv_plant_control_grid_follow_controlsignal_calculation_product6__out;
double _pv2_solar_irradiance_bus_join1__out[4];
double _pv2_solar_irradiance_product3__out;
double _ess1_be1_25a_synchronizer_trigonometric_function1__out;
double _ess1_be1_25a_synchronizer_sum4__out;
double _ess1_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_discrete_transfer_function1__out;
double _ess1_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_discrete_transfer_function1__b_coeff[2] = {0.9090909090909092, 0.9090909090909092};
double _ess1_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_discrete_transfer_function1__a_coeff[2] = {1.0, 0.8181818181818182};
double _ess1_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_discrete_transfer_function1__a_sum;
double _ess1_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_discrete_transfer_function1__b_sum;
double _ess1_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_discrete_transfer_function1__delay_line_in;
X_UnInt32 _ess1_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_discrete_transfer_function1__i;
double _ess1_controller_outer_voltage_loop___inner_current_loop_outer_power_loop_product4__out;
double _ess1_controller_outer_voltage_loop___inner_current_loop_outer_power_loop_product5__out;
double _ess1_controller_outer_voltage_loop___inner_current_loop_squared_vt2_product1__out;
double _ess1_controller_product111__out;
double _ess1_controller_product12__out;
double _ess1_power_meas_power_meas_dqpu_product1__out;
double _ess1_power_meas_power_meas_dqpu_product3__out;
double _ess1_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_discrete_transfer_function2__out;
double _ess1_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_discrete_transfer_function2__b_coeff[2] = {0.9090909090909092, 0.9090909090909092};
double _ess1_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_discrete_transfer_function2__a_coeff[2] = {1.0, 0.8181818181818182};
double _ess1_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_discrete_transfer_function2__a_sum;
double _ess1_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_discrete_transfer_function2__b_sum;
double _ess1_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_discrete_transfer_function2__delay_line_in;
X_UnInt32 _ess1_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_discrete_transfer_function2__i;
double _ess1_controller_outer_voltage_loop___inner_current_loop_outer_power_loop_product3__out;
double _ess1_controller_outer_voltage_loop___inner_current_loop_outer_power_loop_product6__out;
double _ess1_controller_outer_voltage_loop___inner_current_loop_squared_vt2_product2__out;
double _ess1_controller_product10__out;
double _ess1_controller_product13__out;
double _ess1_power_meas_power_meas_dqpu_product2__out;
double _ess1_power_meas_power_meas_dqpu_product4__out;
double _ess1_controller_pll_pll_pid_kd__out;
double _ess1_controller_pll_pll_pid_ki__out;
double _ess1_controller_pll_pll_pid_kp__out;
double _ess1_battery_bus_join1__out[6];
double _ess1_controller_frequency_droop_c_function1__clk;
double _ess1_controller_frequency_droop_c_function1__in;


double _ess1_controller_frequency_droop_c_function1__out;
double _ess1_controller_voltage_droop_c_function1__clk;
double _ess1_controller_voltage_droop_c_function1__in;


double _ess1_controller_voltage_droop_c_function1__out;
double _ess1_controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_product6__out;
double _ess1_controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_product8__out;
double _ess1_be1_25a_synchronizer_trigonometric_function2__out;
double _ess1_be1_25a_synchronizer_pll_c_function1__var;
double _ess1_be1_25a_synchronizer_pll_c_function1__in;


double _ess1_be1_25a_synchronizer_pll_c_function1__out;
double _ess1_be1_25a_synchronizer_sum5__out;
double _ess1_controller_outer_voltage_loop___inner_current_loop_gain3__out;
double _ess1_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_product2__out;
double _ess1_controller_outer_voltage_loop___inner_current_loop_gain4__out;
double _ess1_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_product1__out;
double _ess2_be1_25a_synchronizer_trigonometric_function1__out;
double _ess2_be1_25a_synchronizer_sum4__out;
double _ess2_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_discrete_transfer_function1__out;
double _ess2_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_discrete_transfer_function1__b_coeff[2] = {0.9090909090909092, 0.9090909090909092};
double _ess2_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_discrete_transfer_function1__a_coeff[2] = {1.0, 0.8181818181818182};
double _ess2_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_discrete_transfer_function1__a_sum;
double _ess2_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_discrete_transfer_function1__b_sum;
double _ess2_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_discrete_transfer_function1__delay_line_in;
X_UnInt32 _ess2_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_discrete_transfer_function1__i;
double _ess2_controller_outer_voltage_loop___inner_current_loop_outer_power_loop_product4__out;
double _ess2_controller_outer_voltage_loop___inner_current_loop_outer_power_loop_product5__out;
double _ess2_controller_outer_voltage_loop___inner_current_loop_squared_vt2_product1__out;
double _ess2_controller_product111__out;
double _ess2_controller_product12__out;
double _ess2_power_meas_power_meas_dqpu_product1__out;
double _ess2_power_meas_power_meas_dqpu_product3__out;
double _ess2_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_discrete_transfer_function2__out;
double _ess2_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_discrete_transfer_function2__b_coeff[2] = {0.9090909090909092, 0.9090909090909092};
double _ess2_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_discrete_transfer_function2__a_coeff[2] = {1.0, 0.8181818181818182};
double _ess2_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_discrete_transfer_function2__a_sum;
double _ess2_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_discrete_transfer_function2__b_sum;
double _ess2_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_discrete_transfer_function2__delay_line_in;
X_UnInt32 _ess2_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_discrete_transfer_function2__i;
double _ess2_controller_outer_voltage_loop___inner_current_loop_outer_power_loop_product3__out;
double _ess2_controller_outer_voltage_loop___inner_current_loop_outer_power_loop_product6__out;
double _ess2_controller_outer_voltage_loop___inner_current_loop_squared_vt2_product2__out;
double _ess2_controller_product10__out;
double _ess2_controller_product13__out;
double _ess2_power_meas_power_meas_dqpu_product2__out;
double _ess2_power_meas_power_meas_dqpu_product4__out;
double _ess2_controller_pll_pll_pid_kd__out;
double _ess2_controller_pll_pll_pid_ki__out;
double _ess2_controller_pll_pll_pid_kp__out;
double _ess2_battery_bus_join1__out[6];
double _ess2_controller_frequency_droop_c_function1__clk;
double _ess2_controller_frequency_droop_c_function1__in;


double _ess2_controller_frequency_droop_c_function1__out;
double _ess2_controller_voltage_droop_c_function1__clk;
double _ess2_controller_voltage_droop_c_function1__in;


double _ess2_controller_voltage_droop_c_function1__out;
double _ess2_controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_product6__out;
double _ess2_controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_product8__out;
double _ess2_be1_25a_synchronizer_trigonometric_function2__out;
double _ess2_be1_25a_synchronizer_pll_c_function1__var;
double _ess2_be1_25a_synchronizer_pll_c_function1__in;


double _ess2_be1_25a_synchronizer_pll_c_function1__out;
double _ess2_be1_25a_synchronizer_sum5__out;
double _ess2_controller_outer_voltage_loop___inner_current_loop_gain3__out;
double _ess2_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_product2__out;
double _ess2_controller_outer_voltage_loop___inner_current_loop_gain4__out;
double _ess2_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_product1__out;
double _pcc_gain1__out;
double _pcc_gain2__out;
double _pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_d__out;
double _pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_d__b_coeff[2] = {0.06283185307, 0.06283185307};
double _pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_d__a_coeff[2] = {2.06283185307, -1.93716814693};
double _pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_d__a_sum;
double _pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_d__b_sum;
double _pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_d__delay_line_in;
X_UnInt32 _pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_d__i;
double _pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_q__out;
double _pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_q__b_coeff[2] = {0.06283185307, 0.06283185307};
double _pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_q__a_coeff[2] = {2.06283185307, -1.93716814693};
double _pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_q__a_sum;
double _pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_q__b_sum;
double _pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_q__delay_line_in;
X_UnInt32 _pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_q__i;
double _pv1_pv_plant_control_grid_follow_controlsignal_calculation_product2__out;
double _pv1_pv_plant_control_grid_follow_controlsignal_calculation_product1__out;
double _pv1_solar_irradiance_c_function3__Gdh;
double _pv1_solar_irradiance_c_function3__fk;
double _pv1_solar_irradiance_c_function3__x[4];


double _pv1_solar_irradiance_c_function3__Gd;
double _pv1_solar_irradiance_gain3__out;
double _pv2_pv_plant_control_grid_follow_controlsignal_calculation_product2__out;
double _pv2_pv_plant_control_grid_follow_controlsignal_calculation_product1__out;
double _pv2_solar_irradiance_c_function3__Gdh;
double _pv2_solar_irradiance_c_function3__fk;
double _pv2_solar_irradiance_c_function3__x[4];


double _pv2_solar_irradiance_c_function3__Gd;
double _pv2_solar_irradiance_gain3__out;
double _ess1_be1_25a_synchronizer_confine_phase1__x;
double _ess1_be1_25a_synchronizer_confine_phase1__floor_in;
double _ess1_be1_25a_synchronizer_confine_phase1__in;


double _ess1_be1_25a_synchronizer_confine_phase1__out;
double _ess1_be1_25a_synchronizer_mathematical_function1__out;
double _ess1_controller_outer_voltage_loop___inner_current_loop_outer_power_loop_sum3__out;
double _ess1_controller_outer_voltage_loop___inner_current_loop_outer_power_loop_sum4__out;
double _ess1_controller_outer_voltage_loop___inner_current_loop_squared_vt2_sum3__out;
double _ess1_controller_sum2__out;
double _ess1_controller_sum1__out;
double _ess1_power_meas_power_meas_dqpu_sum1__out;
double _ess1_power_meas_power_meas_dqpu_sum2__out;
double _ess1_controller_pll_pll_pid_sum8__out;
double _ess1_controller_frequency_droop_sum4__out;
double _ess1_controller_voltage_droop_sum4__out;
double _ess1_controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_sum10__out;
double _ess1_controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_sum13__out;
double _ess1_be1_25a_synchronizer_confine_phase2__x;
double _ess1_be1_25a_synchronizer_confine_phase2__floor_in;
double _ess1_be1_25a_synchronizer_confine_phase2__in;


double _ess1_be1_25a_synchronizer_confine_phase2__out;
double _ess1_be1_25a_synchronizer_pll_confine_phase__x;
double _ess1_be1_25a_synchronizer_pll_confine_phase__floor_in;
double _ess1_be1_25a_synchronizer_pll_confine_phase__in;


double _ess1_be1_25a_synchronizer_pll_confine_phase__out;
double _ess1_be1_25a_synchronizer_mathematical_function2__out;
double _ess1_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum6__out;
double _ess1_controller_outer_voltage_loop___inner_current_loop_sum8__out;
double _ess1_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum5__out;
double _ess2_be1_25a_synchronizer_confine_phase1__x;
double _ess2_be1_25a_synchronizer_confine_phase1__floor_in;
double _ess2_be1_25a_synchronizer_confine_phase1__in;


double _ess2_be1_25a_synchronizer_confine_phase1__out;
double _ess2_be1_25a_synchronizer_mathematical_function1__out;
double _ess2_controller_outer_voltage_loop___inner_current_loop_outer_power_loop_sum3__out;
double _ess2_controller_outer_voltage_loop___inner_current_loop_outer_power_loop_sum4__out;
double _ess2_controller_outer_voltage_loop___inner_current_loop_squared_vt2_sum3__out;
double _ess2_controller_sum2__out;
double _ess2_controller_sum1__out;
double _ess2_power_meas_power_meas_dqpu_sum1__out;
double _ess2_power_meas_power_meas_dqpu_sum2__out;
double _ess2_controller_pll_pll_pid_sum8__out;
double _ess2_controller_frequency_droop_sum4__out;
double _ess2_controller_voltage_droop_sum4__out;
double _ess2_controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_sum10__out;
double _ess2_controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_sum13__out;
double _ess2_be1_25a_synchronizer_confine_phase2__x;
double _ess2_be1_25a_synchronizer_confine_phase2__floor_in;
double _ess2_be1_25a_synchronizer_confine_phase2__in;


double _ess2_be1_25a_synchronizer_confine_phase2__out;
double _ess2_be1_25a_synchronizer_pll_confine_phase__x;
double _ess2_be1_25a_synchronizer_pll_confine_phase__floor_in;
double _ess2_be1_25a_synchronizer_pll_confine_phase__in;


double _ess2_be1_25a_synchronizer_pll_confine_phase__out;
double _ess2_be1_25a_synchronizer_mathematical_function2__out;
double _ess2_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum6__out;
double _ess2_controller_outer_voltage_loop___inner_current_loop_sum8__out;
double _ess2_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum5__out;
double _pcc_pcc_measurements_three_phase_pll1_normalize__in1;
double _pcc_pcc_measurements_three_phase_pll1_normalize__in2;


double _pcc_pcc_measurements_three_phase_pll1_normalize__in2_pu;
double _pcc_pcc_measurements_three_phase_pll1_normalize__pk;
double _pv1_solar_irradiance_sum6__out;
double _pv2_solar_irradiance_sum6__out;
double _ess1_controller_outer_voltage_loop___inner_current_loop_outer_power_loop_comparator1__out;
double _ess1_controller_gain14__out;
double _ess1_controller_sum5__out;
double _ess1_controller_gain15__out;
double _ess1_controller_sum4__out;
double _ess1_power_meas_power_meas_dqpu_lpf_p__out;
double _ess1_power_meas_power_meas_dqpu_lpf_p__b_coeff[2] = {6.282790547806893e-05, 6.282790547806893e-05};
double _ess1_power_meas_power_meas_dqpu_lpf_p__a_coeff[2] = {1.0, -0.999874344189044};
double _ess1_power_meas_power_meas_dqpu_lpf_p__a_sum;
double _ess1_power_meas_power_meas_dqpu_lpf_p__b_sum;
double _ess1_power_meas_power_meas_dqpu_lpf_p__delay_line_in;
X_UnInt32 _ess1_power_meas_power_meas_dqpu_lpf_p__i;
double _ess1_power_meas_power_meas_dqpu_lpf_q__out;
double _ess1_power_meas_power_meas_dqpu_lpf_q__b_coeff[2] = {6.282790547806893e-05, 6.282790547806893e-05};
double _ess1_power_meas_power_meas_dqpu_lpf_q__a_coeff[2] = {1.0, -0.999874344189044};
double _ess1_power_meas_power_meas_dqpu_lpf_q__a_sum;
double _ess1_power_meas_power_meas_dqpu_lpf_q__b_sum;
double _ess1_power_meas_power_meas_dqpu_lpf_q__delay_line_in;
X_UnInt32 _ess1_power_meas_power_meas_dqpu_lpf_q__i;
double _ess1_controller_pll_pll_pid_gain1__out;
double _ess1_controller_frequency_droop_c_function2__time;
X_Int32 _ess1_controller_frequency_droop_c_function2__connected;
double _ess1_controller_frequency_droop_c_function2__clk;
X_Int32 _ess1_controller_frequency_droop_c_function2__cnt;
double _ess1_controller_frequency_droop_c_function2__in;


double _ess1_controller_frequency_droop_c_function2__out;
double _ess1_controller_voltage_droop_c_function2__time;
X_Int32 _ess1_controller_voltage_droop_c_function2__connected;
X_Int32 _ess1_controller_voltage_droop_c_function2__GFM;
double _ess1_controller_voltage_droop_c_function2__clk;
double _ess1_controller_voltage_droop_c_function2__in;


double _ess1_controller_voltage_droop_c_function2__out;
double _ess1_be1_25a_synchronizer_sum1__out;
double _ess1_be1_25a_synchronizer_sum3__out;
double _ess1_controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_sum11__out;
double _ess2_controller_outer_voltage_loop___inner_current_loop_outer_power_loop_comparator1__out;
double _ess2_controller_gain14__out;
double _ess2_controller_sum5__out;
double _ess2_controller_gain15__out;
double _ess2_controller_sum4__out;
double _ess2_power_meas_power_meas_dqpu_lpf_p__out;
double _ess2_power_meas_power_meas_dqpu_lpf_p__b_coeff[2] = {6.282790547806893e-05, 6.282790547806893e-05};
double _ess2_power_meas_power_meas_dqpu_lpf_p__a_coeff[2] = {1.0, -0.999874344189044};
double _ess2_power_meas_power_meas_dqpu_lpf_p__a_sum;
double _ess2_power_meas_power_meas_dqpu_lpf_p__b_sum;
double _ess2_power_meas_power_meas_dqpu_lpf_p__delay_line_in;
X_UnInt32 _ess2_power_meas_power_meas_dqpu_lpf_p__i;
double _ess2_power_meas_power_meas_dqpu_lpf_q__out;
double _ess2_power_meas_power_meas_dqpu_lpf_q__b_coeff[2] = {6.282790547806893e-05, 6.282790547806893e-05};
double _ess2_power_meas_power_meas_dqpu_lpf_q__a_coeff[2] = {1.0, -0.999874344189044};
double _ess2_power_meas_power_meas_dqpu_lpf_q__a_sum;
double _ess2_power_meas_power_meas_dqpu_lpf_q__b_sum;
double _ess2_power_meas_power_meas_dqpu_lpf_q__delay_line_in;
X_UnInt32 _ess2_power_meas_power_meas_dqpu_lpf_q__i;
double _ess2_controller_pll_pll_pid_gain1__out;
double _ess2_controller_frequency_droop_c_function2__time;
X_Int32 _ess2_controller_frequency_droop_c_function2__connected;
double _ess2_controller_frequency_droop_c_function2__clk;
X_Int32 _ess2_controller_frequency_droop_c_function2__cnt;
double _ess2_controller_frequency_droop_c_function2__in;


double _ess2_controller_frequency_droop_c_function2__out;
double _ess2_controller_voltage_droop_c_function2__time;
X_Int32 _ess2_controller_voltage_droop_c_function2__connected;
X_Int32 _ess2_controller_voltage_droop_c_function2__GFM;
double _ess2_controller_voltage_droop_c_function2__clk;
double _ess2_controller_voltage_droop_c_function2__in;


double _ess2_controller_voltage_droop_c_function2__out;
double _ess2_be1_25a_synchronizer_sum1__out;
double _ess2_be1_25a_synchronizer_sum3__out;
double _ess2_controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_sum11__out;
double _pcc_pcc_measurements_three_phase_pll1_pid_kd__out;
double _pcc_pcc_measurements_three_phase_pll1_pid_ki__out;
double _pcc_pcc_measurements_three_phase_pll1_pid_kp__out;
double _pv1_bus_join1__out[6];
double _pv2_bus_join1__out[6];
double _ess1_controller_outer_voltage_loop___inner_current_loop_outer_power_loop_signal_switch1__out;
double _ess1_controller_gain13__out;
double _ess1_controller_gain4__out;
double _ess1_controller_pll_pll_pid_sum5__out;
double _ess1_be1_25a_synchronizer_sum2__out;
double _ess1_controller_gain1__out;
double _ess1_controller_outer_voltage_loop___inner_current_loop_sum7__out;
double _ess1_be1_25a_synchronizer_confine_phase__in;


double _ess1_be1_25a_synchronizer_confine_phase__out;
double _ess1_be1_25a_synchronizer_abs2__out;
double _ess1_controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_limit2__out;
double _ess2_controller_outer_voltage_loop___inner_current_loop_outer_power_loop_signal_switch1__out;
double _ess2_controller_gain13__out;
double _ess2_controller_gain4__out;
double _ess2_controller_pll_pll_pid_sum5__out;
double _ess2_be1_25a_synchronizer_sum2__out;
double _ess2_controller_gain1__out;
double _ess2_controller_outer_voltage_loop___inner_current_loop_sum7__out;
double _ess2_be1_25a_synchronizer_confine_phase__in;


double _ess2_be1_25a_synchronizer_confine_phase__out;
double _ess2_be1_25a_synchronizer_abs2__out;
double _ess2_controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_limit2__out;
double _pcc_pcc_measurements_three_phase_pll1_pid_sum8__out;
double _pv1_pv_plant_input_bus_split2__out;
double _pv1_pv_plant_input_bus_split2__out1;
double _pv1_pv_plant_input_bus_split2__out2;
double _pv1_pv_plant_input_bus_split2__out3;
double _pv1_pv_plant_input_bus_split2__out4;
double _pv1_pv_plant_input_bus_split2__out5;
double _pv2_pv_plant_input_bus_split2__out;
double _pv2_pv_plant_input_bus_split2__out1;
double _pv2_pv_plant_input_bus_split2__out2;
double _pv2_pv_plant_input_bus_split2__out3;
double _pv2_pv_plant_input_bus_split2__out4;
double _pv2_pv_plant_input_bus_split2__out5;
double _ess1_controller_outer_voltage_loop___inner_current_loop_outer_power_loop_product1__out;
double _ess1_controller_outer_voltage_loop___inner_current_loop_outer_power_loop_product2__out;
double _ess1_controller_pll_pll_pid_limit1__out;
double _ess1_be1_25a_synchronizer_abs5__out;
double _ess1_controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_sum8__out;
double _ess1_be1_25a_synchronizer_abs4__out;
double _ess1_be1_25a_synchronizer_relational_operator4__out;
double _ess1_controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_pid_controller4__out;
double _ess1_controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_pid_controller4__pi_reg_out_int;
double _ess2_controller_outer_voltage_loop___inner_current_loop_outer_power_loop_product1__out;
double _ess2_controller_outer_voltage_loop___inner_current_loop_outer_power_loop_product2__out;
double _ess2_controller_pll_pll_pid_limit1__out;
double _ess2_be1_25a_synchronizer_abs5__out;
double _ess2_controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_sum8__out;
double _ess2_be1_25a_synchronizer_abs4__out;
double _ess2_be1_25a_synchronizer_relational_operator4__out;
double _ess2_controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_pid_controller4__out;
double _ess2_controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_pid_controller4__pi_reg_out_int;
double _pcc_pcc_measurements_three_phase_pll1_pid_gain1__out;
double _pv1_pv_plant_control_grid_follow_edge_detection1_relational_operator1__out;
double _pv1_pv_plant_control_grid_follow_gain2__out;
double _pv1_pv_plant_control_grid_follow_gain4__out;
double _pv1_pv_plant_control_grid_follow_logical_operator1__out;
double _pv1_pv_plant_control_grid_follow_product2__out;
float _pv1_pv_plant_control_grid_follow_qmode__tmp;
double _pv1_pv_plant_control_grid_follow_delay__counter;
double _pv1_pv_plant_control_grid_follow_delay__in;


double _pv1_pv_plant_control_grid_follow_delay__out;
double _pv1_pv_plant_control_pll_signal_switch1__out;
double _pv1_pv_plant_control_pll_signal_switch2__out;
double _pv1_pv_plant_control_pll_signal_switch3__out;
double _pv1_pv_plant_delay__counter;
double _pv1_pv_plant_delay__in;


double _pv1_pv_plant_delay__out;
float _pv1_pv_plant_enable__tmp;
double _pv2_pv_plant_control_grid_follow_edge_detection1_relational_operator1__out;
double _pv2_pv_plant_control_grid_follow_gain2__out;
double _pv2_pv_plant_control_grid_follow_gain4__out;
double _pv2_pv_plant_control_grid_follow_logical_operator1__out;
double _pv2_pv_plant_control_grid_follow_product2__out;
float _pv2_pv_plant_control_grid_follow_qmode__tmp;
double _pv2_pv_plant_control_grid_follow_delay__counter;
double _pv2_pv_plant_control_grid_follow_delay__in;


double _pv2_pv_plant_control_grid_follow_delay__out;
double _pv2_pv_plant_control_pll_signal_switch1__out;
double _pv2_pv_plant_control_pll_signal_switch2__out;
double _pv2_pv_plant_control_pll_signal_switch3__out;
double _pv2_pv_plant_delay__counter;
double _pv2_pv_plant_delay__in;


double _pv2_pv_plant_delay__out;
float _pv2_pv_plant_enable__tmp;
double _ess1_controller_outer_voltage_loop___inner_current_loop_bus_join2__out[2];
double _ess1_controller_pll_pll_pid_sum6__out;
double _ess1_controller_pll_pll_rate_limiter1__in_rate;
double _ess1_controller_pll_pll_integrator__in;


double _ess1_controller_pll_pll_integrator__out;
double _ess1_be1_25a_synchronizer_relational_operator2__out;
double _ess1_controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_limit1__out;
double _ess1_be1_25a_synchronizer_relational_operator1__out;
float _ess1_be1_25a_synchronizer_digital_probe5__tmp;
double _ess1_controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_sum12__out;
double _ess2_controller_outer_voltage_loop___inner_current_loop_bus_join2__out[2];
double _ess2_controller_pll_pll_pid_sum6__out;
double _ess2_controller_pll_pll_rate_limiter1__in_rate;
double _ess2_controller_pll_pll_integrator__in;


double _ess2_controller_pll_pll_integrator__out;
double _ess2_be1_25a_synchronizer_relational_operator2__out;
double _ess2_controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_limit1__out;
double _ess2_be1_25a_synchronizer_relational_operator1__out;
float _ess2_be1_25a_synchronizer_digital_probe5__tmp;
double _ess2_controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_sum12__out;
double _pcc_pcc_measurements_three_phase_pll1_pid_sum5__out;
double _pv1_pv_plant_control_grid_follow_controlsignal_calculation_pi_d_integrator1__out;
double _pv1_pv_plant_control_grid_follow_controlsignal_calculation_pi_q_integrator1__out;
double _pv1_pv_plant_control_grid_follow_pi_vt_integrator1__out;
double _pv1_pv_plant_control_grid_follow_pv_eff__out;
double _pv1_pv_plant_control_grid_follow_logical_operator2__out;
double _pv1_pv_plant_control_pll_pll_abc_to_dq_abc_to_alpha_beta__alpha;
double _pv1_pv_plant_control_pll_pll_abc_to_dq_abc_to_alpha_beta__beta;
double _pv1_pv_plant_control_pll_pll_abc_to_dq_abc_to_alpha_beta__gamma;
double _pv1_pv_plant_logical_operator1__out;
double _pv2_pv_plant_control_grid_follow_controlsignal_calculation_pi_d_integrator1__out;
double _pv2_pv_plant_control_grid_follow_controlsignal_calculation_pi_q_integrator1__out;
double _pv2_pv_plant_control_grid_follow_pi_vt_integrator1__out;
double _pv2_pv_plant_control_grid_follow_pv_eff__out;
double _pv2_pv_plant_control_grid_follow_logical_operator2__out;
double _pv2_pv_plant_control_pll_pll_abc_to_dq_abc_to_alpha_beta__alpha;
double _pv2_pv_plant_control_pll_pll_abc_to_dq_abc_to_alpha_beta__beta;
double _pv2_pv_plant_control_pll_pll_abc_to_dq_abc_to_alpha_beta__gamma;
double _pv2_pv_plant_logical_operator1__out;
double _ess1_controller_pll_pll_pid_kb__out;
double _ess1_controller_pll_pll_lpf_lpf__out;
double _ess1_controller_pll_pll_lpf_lpf__b_coeff[2] = {4.440892098500626e-16, 9.869600294032388e-06};
double _ess1_controller_pll_pll_lpf_lpf__a_coeff[3] = {1.0, -1.995557788912, 0.9955676585122945};
double _ess1_controller_pll_pll_lpf_lpf__a_sum;
double _ess1_controller_pll_pll_lpf_lpf__b_sum;
double _ess1_controller_pll_pll_lpf_lpf__delay_line_in;
X_UnInt32 _ess1_controller_pll_pll_lpf_lpf__i;
float _ess1_be1_25a_synchronizer_digital_probe4__tmp;
double _ess1_controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_pid_controller3__out;
double _ess1_controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_pid_controller3__pi_reg_out_int;
float _ess1_be1_25a_synchronizer_digital_probe3__tmp;
double _ess1_be1_25a_synchronizer_logical_operator1__out;
double _ess2_controller_pll_pll_pid_kb__out;
double _ess2_controller_pll_pll_lpf_lpf__out;
double _ess2_controller_pll_pll_lpf_lpf__b_coeff[2] = {4.440892098500626e-16, 9.869600294032388e-06};
double _ess2_controller_pll_pll_lpf_lpf__a_coeff[3] = {1.0, -1.995557788912, 0.9955676585122945};
double _ess2_controller_pll_pll_lpf_lpf__a_sum;
double _ess2_controller_pll_pll_lpf_lpf__b_sum;
double _ess2_controller_pll_pll_lpf_lpf__delay_line_in;
X_UnInt32 _ess2_controller_pll_pll_lpf_lpf__i;
float _ess2_be1_25a_synchronizer_digital_probe4__tmp;
double _ess2_controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_pid_controller3__out;
double _ess2_controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_pid_controller3__pi_reg_out_int;
float _ess2_be1_25a_synchronizer_digital_probe3__tmp;
double _ess2_be1_25a_synchronizer_logical_operator1__out;
double _pcc_pcc_measurements_three_phase_pll1_pid_limit1__out;
double _pv1_pv_plant_control_grid_follow_to_pu__out;
double _pv1_pv_plant_control_grid_follow_signal_switch3__out;
double _pv1_pv_plant_control_pll_pll_abc_to_dq_alpha_beta_to_dq__d;
double _pv1_pv_plant_control_pll_pll_abc_to_dq_alpha_beta_to_dq__q;
double _pv1_pv_plant_control_pll_pll_abc_to_dq_alpha_beta_to_dq__k1;
double _pv1_pv_plant_control_pll_pll_abc_to_dq_alpha_beta_to_dq__k2;
float _pv1_pv_plant_on__tmp;
double _pv2_pv_plant_control_grid_follow_to_pu__out;
double _pv2_pv_plant_control_grid_follow_signal_switch3__out;
double _pv2_pv_plant_control_pll_pll_abc_to_dq_alpha_beta_to_dq__d;
double _pv2_pv_plant_control_pll_pll_abc_to_dq_alpha_beta_to_dq__q;
double _pv2_pv_plant_control_pll_pll_abc_to_dq_alpha_beta_to_dq__k1;
double _pv2_pv_plant_control_pll_pll_abc_to_dq_alpha_beta_to_dq__k2;
float _pv2_pv_plant_on__tmp;
double _ess1_controller_pll_pll_pid_sum7__out;
double _ess1_controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_sum9__out;
double _ess2_controller_pll_pll_pid_sum7__out;
double _ess2_controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_sum9__out;
double _pcc_pcc_measurements_three_phase_pll1_pid_sum6__out;
double _pcc_pcc_measurements_three_phase_pll1_rate_limiter1__in_rate;
double _pcc_pcc_measurements_three_phase_pll1_integrator__in;


double _pcc_pcc_measurements_three_phase_pll1_integrator__out;
double _pv1_pv_plant_control_grid_follow_signal_switch2__out;
double _pv1_pv_plant_control_pll_pll_abc_to_dq_lpf_d__out;
double _pv1_pv_plant_control_pll_pll_abc_to_dq_lpf_d__b_coeff[2] = {0.0012566370614000002, 0.0012566370614000002};
double _pv1_pv_plant_control_pll_pll_abc_to_dq_lpf_d__a_coeff[2] = {2.0012566370614, -1.9987433629386};
double _pv1_pv_plant_control_pll_pll_abc_to_dq_lpf_d__a_sum;
double _pv1_pv_plant_control_pll_pll_abc_to_dq_lpf_d__b_sum;
double _pv1_pv_plant_control_pll_pll_abc_to_dq_lpf_d__delay_line_in;
X_UnInt32 _pv1_pv_plant_control_pll_pll_abc_to_dq_lpf_d__i;
double _pv1_pv_plant_control_pll_pll_abc_to_dq_lpf_q__out;
double _pv1_pv_plant_control_pll_pll_abc_to_dq_lpf_q__b_coeff[2] = {0.0012566370614000002, 0.0012566370614000002};
double _pv1_pv_plant_control_pll_pll_abc_to_dq_lpf_q__a_coeff[2] = {2.0012566370614, -1.9987433629386};
double _pv1_pv_plant_control_pll_pll_abc_to_dq_lpf_q__a_sum;
double _pv1_pv_plant_control_pll_pll_abc_to_dq_lpf_q__b_sum;
double _pv1_pv_plant_control_pll_pll_abc_to_dq_lpf_q__delay_line_in;
X_UnInt32 _pv1_pv_plant_control_pll_pll_abc_to_dq_lpf_q__i;
double _pv2_pv_plant_control_grid_follow_signal_switch2__out;
double _pv2_pv_plant_control_pll_pll_abc_to_dq_lpf_d__out;
double _pv2_pv_plant_control_pll_pll_abc_to_dq_lpf_d__b_coeff[2] = {0.0012566370614000002, 0.0012566370614000002};
double _pv2_pv_plant_control_pll_pll_abc_to_dq_lpf_d__a_coeff[2] = {2.0012566370614, -1.9987433629386};
double _pv2_pv_plant_control_pll_pll_abc_to_dq_lpf_d__a_sum;
double _pv2_pv_plant_control_pll_pll_abc_to_dq_lpf_d__b_sum;
double _pv2_pv_plant_control_pll_pll_abc_to_dq_lpf_d__delay_line_in;
X_UnInt32 _pv2_pv_plant_control_pll_pll_abc_to_dq_lpf_d__i;
double _pv2_pv_plant_control_pll_pll_abc_to_dq_lpf_q__out;
double _pv2_pv_plant_control_pll_pll_abc_to_dq_lpf_q__b_coeff[2] = {0.0012566370614000002, 0.0012566370614000002};
double _pv2_pv_plant_control_pll_pll_abc_to_dq_lpf_q__a_coeff[2] = {2.0012566370614, -1.9987433629386};
double _pv2_pv_plant_control_pll_pll_abc_to_dq_lpf_q__a_sum;
double _pv2_pv_plant_control_pll_pll_abc_to_dq_lpf_q__b_sum;
double _pv2_pv_plant_control_pll_pll_abc_to_dq_lpf_q__delay_line_in;
X_UnInt32 _pv2_pv_plant_control_pll_pll_abc_to_dq_lpf_q__i;
double _ess1_controller_outer_voltage_loop___inner_current_loop_bus_join1__out[2];
double _ess2_controller_outer_voltage_loop___inner_current_loop_bus_join1__out[2];
double _pcc_pcc_measurements_three_phase_pll1_pid_kb__out;
double _pcc_pcc_measurements_three_phase_pll1_lpf_lpf__out;
double _pcc_pcc_measurements_three_phase_pll1_lpf_lpf__b_coeff[1] = {0.024674000736159996};
double _pcc_pcc_measurements_three_phase_pll1_lpf_lpf__a_coeff[3] = {1.0, -1.7778894456, 0.8025634463361601};
double _pcc_pcc_measurements_three_phase_pll1_lpf_lpf__a_sum;
double _pcc_pcc_measurements_three_phase_pll1_lpf_lpf__b_sum;
double _pcc_pcc_measurements_three_phase_pll1_lpf_lpf__delay_line_in;
X_UnInt32 _pcc_pcc_measurements_three_phase_pll1_lpf_lpf__i;
double _pv1_pv_plant_control_pll_gain4__out;
double _pv1_pv_plant_control_pll_gain3__out;
double _pv1_pv_plant_control_pll_pll_normalize__in1;
double _pv1_pv_plant_control_pll_pll_normalize__in2;


double _pv1_pv_plant_control_pll_pll_normalize__in2_pu;
double _pv1_pv_plant_control_pll_pll_normalize__pk;
double _pv2_pv_plant_control_pll_gain4__out;
double _pv2_pv_plant_control_pll_gain3__out;
double _pv2_pv_plant_control_pll_pll_normalize__in1;
double _pv2_pv_plant_control_pll_pll_normalize__in2;


double _pv2_pv_plant_control_pll_pll_normalize__in2_pu;
double _pv2_pv_plant_control_pll_pll_normalize__pk;
double _ess1_controller_outer_voltage_loop___inner_current_loop_signal_switch2__out[2];
double _ess2_controller_outer_voltage_loop___inner_current_loop_signal_switch2__out[2];
double _pcc_pcc_measurements_three_phase_pll1_pid_sum7__out;
double _pv1_pv_plant_control_grid_follow_controlsignal_calculation_sum5__out;
double _pv1_pv_plant_control_grid_follow_current_ref_product4__out;
double _pv1_pv_plant_control_grid_follow_current_ref_product5__out;
double _pv1_pv_plant_control_grid_follow_power_meas_power_meas_dqpu_product1__out;
double _pv1_pv_plant_control_grid_follow_power_meas_power_meas_dqpu_product3__out;
double _pv1_pv_plant_control_grid_follow_power_meas1_power_meas_dqpu_product1__out;
double _pv1_pv_plant_control_grid_follow_power_meas1_power_meas_dqpu_product3__out;
double _pv1_pv_plant_control_grid_follow_controlsignal_calculation_sum6__out;
double _pv1_pv_plant_control_grid_follow_current_ref_product3__out;
double _pv1_pv_plant_control_grid_follow_current_ref_product6__out;
double _pv1_pv_plant_control_grid_follow_power_meas_power_meas_dqpu_product2__out;
double _pv1_pv_plant_control_grid_follow_power_meas_power_meas_dqpu_product4__out;
double _pv1_pv_plant_control_grid_follow_power_meas1_power_meas_dqpu_product2__out;
double _pv1_pv_plant_control_grid_follow_power_meas1_power_meas_dqpu_product4__out;
double _pv1_pv_plant_control_pll_gain5__out;
double _pv1_pv_plant_control_pll_pll_pid_kd__out;
double _pv1_pv_plant_control_pll_pll_pid_ki__out;
double _pv1_pv_plant_control_pll_pll_pid_kp__out;
double _pv1_pv_plant_output_bus_join1__out[12];
double _pv2_pv_plant_control_grid_follow_controlsignal_calculation_sum5__out;
double _pv2_pv_plant_control_grid_follow_current_ref_product4__out;
double _pv2_pv_plant_control_grid_follow_current_ref_product5__out;
double _pv2_pv_plant_control_grid_follow_power_meas_power_meas_dqpu_product1__out;
double _pv2_pv_plant_control_grid_follow_power_meas_power_meas_dqpu_product3__out;
double _pv2_pv_plant_control_grid_follow_power_meas1_power_meas_dqpu_product1__out;
double _pv2_pv_plant_control_grid_follow_power_meas1_power_meas_dqpu_product3__out;
double _pv2_pv_plant_control_grid_follow_controlsignal_calculation_sum6__out;
double _pv2_pv_plant_control_grid_follow_current_ref_product3__out;
double _pv2_pv_plant_control_grid_follow_current_ref_product6__out;
double _pv2_pv_plant_control_grid_follow_power_meas_power_meas_dqpu_product2__out;
double _pv2_pv_plant_control_grid_follow_power_meas_power_meas_dqpu_product4__out;
double _pv2_pv_plant_control_grid_follow_power_meas1_power_meas_dqpu_product2__out;
double _pv2_pv_plant_control_grid_follow_power_meas1_power_meas_dqpu_product4__out;
double _pv2_pv_plant_control_pll_gain5__out;
double _pv2_pv_plant_control_pll_pll_pid_kd__out;
double _pv2_pv_plant_control_pll_pll_pid_ki__out;
double _pv2_pv_plant_control_pll_pll_pid_kp__out;
double _pv2_pv_plant_output_bus_join1__out[12];
double _ess1_controller_outer_voltage_loop___inner_current_loop_bus_split1__out;
double _ess1_controller_outer_voltage_loop___inner_current_loop_bus_split1__out1;
double _ess2_controller_outer_voltage_loop___inner_current_loop_bus_split1__out;
double _ess2_controller_outer_voltage_loop___inner_current_loop_bus_split1__out1;
double _pv1_pv_plant_control_grid_follow_current_ref_sum3__out;
double _pv1_pv_plant_control_grid_follow_current_ref_sum4__out;
double _pv1_pv_plant_control_grid_follow_power_meas_power_meas_dqpu_sum1__out;
double _pv1_pv_plant_control_grid_follow_power_meas_power_meas_dqpu_sum2__out;
double _pv1_pv_plant_control_grid_follow_power_meas1_power_meas_dqpu_sum1__out;
double _pv1_pv_plant_control_grid_follow_power_meas1_power_meas_dqpu_sum2__out;
double _pv1_pv_plant_control_grid_follow_current_ref_product7__out;
double _pv1_pv_plant_control_grid_follow_signal_switch4__out;
double _pv1_pv_plant_control_pll_pll_pid_sum8__out;
double _pv1_bus_split1__out;
double _pv1_bus_split1__out1;
double _pv1_bus_split1__out2;
double _pv1_bus_split1__out3;
double _pv1_bus_split1__out4;
double _pv1_bus_split1__out5;
double _pv1_bus_split1__out6;
double _pv1_bus_split1__out7;
double _pv1_bus_split1__out8;
double _pv1_bus_split1__out9;
double _pv1_bus_split1__out10;
double _pv1_bus_split1__out11;
double _pv2_pv_plant_control_grid_follow_current_ref_sum3__out;
double _pv2_pv_plant_control_grid_follow_current_ref_sum4__out;
double _pv2_pv_plant_control_grid_follow_power_meas_power_meas_dqpu_sum1__out;
double _pv2_pv_plant_control_grid_follow_power_meas_power_meas_dqpu_sum2__out;
double _pv2_pv_plant_control_grid_follow_power_meas1_power_meas_dqpu_sum1__out;
double _pv2_pv_plant_control_grid_follow_power_meas1_power_meas_dqpu_sum2__out;
double _pv2_pv_plant_control_grid_follow_current_ref_product7__out;
double _pv2_pv_plant_control_grid_follow_signal_switch4__out;
double _pv2_pv_plant_control_pll_pll_pid_sum8__out;
double _pv2_bus_split1__out;
double _pv2_bus_split1__out1;
double _pv2_bus_split1__out2;
double _pv2_bus_split1__out3;
double _pv2_bus_split1__out4;
double _pv2_bus_split1__out5;
double _pv2_bus_split1__out6;
double _pv2_bus_split1__out7;
double _pv2_bus_split1__out8;
double _pv2_bus_split1__out9;
double _pv2_bus_split1__out10;
double _pv2_bus_split1__out11;
double _ess1_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum8__out;
double _ess1_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum9__out;
double _ess2_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum8__out;
double _ess2_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum9__out;
double _pv1_pv_plant_control_grid_follow_power_meas_power_meas_dqpu_lpf_p__out;
double _pv1_pv_plant_control_grid_follow_power_meas_power_meas_dqpu_lpf_p__b_coeff[2] = {6.282790547806893e-05, 6.282790547806893e-05};
double _pv1_pv_plant_control_grid_follow_power_meas_power_meas_dqpu_lpf_p__a_coeff[2] = {1.0, -0.999874344189044};
double _pv1_pv_plant_control_grid_follow_power_meas_power_meas_dqpu_lpf_p__a_sum;
double _pv1_pv_plant_control_grid_follow_power_meas_power_meas_dqpu_lpf_p__b_sum;
double _pv1_pv_plant_control_grid_follow_power_meas_power_meas_dqpu_lpf_p__delay_line_in;
X_UnInt32 _pv1_pv_plant_control_grid_follow_power_meas_power_meas_dqpu_lpf_p__i;
double _pv1_pv_plant_control_grid_follow_power_meas_power_meas_dqpu_lpf_q__out;
double _pv1_pv_plant_control_grid_follow_power_meas_power_meas_dqpu_lpf_q__b_coeff[2] = {6.282790547806893e-05, 6.282790547806893e-05};
double _pv1_pv_plant_control_grid_follow_power_meas_power_meas_dqpu_lpf_q__a_coeff[2] = {1.0, -0.999874344189044};
double _pv1_pv_plant_control_grid_follow_power_meas_power_meas_dqpu_lpf_q__a_sum;
double _pv1_pv_plant_control_grid_follow_power_meas_power_meas_dqpu_lpf_q__b_sum;
double _pv1_pv_plant_control_grid_follow_power_meas_power_meas_dqpu_lpf_q__delay_line_in;
X_UnInt32 _pv1_pv_plant_control_grid_follow_power_meas_power_meas_dqpu_lpf_q__i;
double _pv1_pv_plant_control_grid_follow_power_meas1_power_meas_dqpu_lpf_p__out;
double _pv1_pv_plant_control_grid_follow_power_meas1_power_meas_dqpu_lpf_p__b_coeff[2] = {6.282790547806893e-05, 6.282790547806893e-05};
double _pv1_pv_plant_control_grid_follow_power_meas1_power_meas_dqpu_lpf_p__a_coeff[2] = {1.0, -0.999874344189044};
double _pv1_pv_plant_control_grid_follow_power_meas1_power_meas_dqpu_lpf_p__a_sum;
double _pv1_pv_plant_control_grid_follow_power_meas1_power_meas_dqpu_lpf_p__b_sum;
double _pv1_pv_plant_control_grid_follow_power_meas1_power_meas_dqpu_lpf_p__delay_line_in;
X_UnInt32 _pv1_pv_plant_control_grid_follow_power_meas1_power_meas_dqpu_lpf_p__i;
double _pv1_pv_plant_control_grid_follow_power_meas1_power_meas_dqpu_lpf_q__out;
double _pv1_pv_plant_control_grid_follow_power_meas1_power_meas_dqpu_lpf_q__b_coeff[2] = {6.282790547806893e-05, 6.282790547806893e-05};
double _pv1_pv_plant_control_grid_follow_power_meas1_power_meas_dqpu_lpf_q__a_coeff[2] = {1.0, -0.999874344189044};
double _pv1_pv_plant_control_grid_follow_power_meas1_power_meas_dqpu_lpf_q__a_sum;
double _pv1_pv_plant_control_grid_follow_power_meas1_power_meas_dqpu_lpf_q__b_sum;
double _pv1_pv_plant_control_grid_follow_power_meas1_power_meas_dqpu_lpf_q__delay_line_in;
X_UnInt32 _pv1_pv_plant_control_grid_follow_power_meas1_power_meas_dqpu_lpf_q__i;
double _pv1_pv_plant_control_grid_follow_current_ref_limit3__out;
double _pv1_pv_plant_control_grid_follow_sum1__out;
double _pv1_pv_plant_control_pll_pll_pid_gain1__out;
double _pv2_pv_plant_control_grid_follow_power_meas_power_meas_dqpu_lpf_p__out;
double _pv2_pv_plant_control_grid_follow_power_meas_power_meas_dqpu_lpf_p__b_coeff[2] = {6.282790547806893e-05, 6.282790547806893e-05};
double _pv2_pv_plant_control_grid_follow_power_meas_power_meas_dqpu_lpf_p__a_coeff[2] = {1.0, -0.999874344189044};
double _pv2_pv_plant_control_grid_follow_power_meas_power_meas_dqpu_lpf_p__a_sum;
double _pv2_pv_plant_control_grid_follow_power_meas_power_meas_dqpu_lpf_p__b_sum;
double _pv2_pv_plant_control_grid_follow_power_meas_power_meas_dqpu_lpf_p__delay_line_in;
X_UnInt32 _pv2_pv_plant_control_grid_follow_power_meas_power_meas_dqpu_lpf_p__i;
double _pv2_pv_plant_control_grid_follow_power_meas_power_meas_dqpu_lpf_q__out;
double _pv2_pv_plant_control_grid_follow_power_meas_power_meas_dqpu_lpf_q__b_coeff[2] = {6.282790547806893e-05, 6.282790547806893e-05};
double _pv2_pv_plant_control_grid_follow_power_meas_power_meas_dqpu_lpf_q__a_coeff[2] = {1.0, -0.999874344189044};
double _pv2_pv_plant_control_grid_follow_power_meas_power_meas_dqpu_lpf_q__a_sum;
double _pv2_pv_plant_control_grid_follow_power_meas_power_meas_dqpu_lpf_q__b_sum;
double _pv2_pv_plant_control_grid_follow_power_meas_power_meas_dqpu_lpf_q__delay_line_in;
X_UnInt32 _pv2_pv_plant_control_grid_follow_power_meas_power_meas_dqpu_lpf_q__i;
double _pv2_pv_plant_control_grid_follow_power_meas1_power_meas_dqpu_lpf_p__out;
double _pv2_pv_plant_control_grid_follow_power_meas1_power_meas_dqpu_lpf_p__b_coeff[2] = {6.282790547806893e-05, 6.282790547806893e-05};
double _pv2_pv_plant_control_grid_follow_power_meas1_power_meas_dqpu_lpf_p__a_coeff[2] = {1.0, -0.999874344189044};
double _pv2_pv_plant_control_grid_follow_power_meas1_power_meas_dqpu_lpf_p__a_sum;
double _pv2_pv_plant_control_grid_follow_power_meas1_power_meas_dqpu_lpf_p__b_sum;
double _pv2_pv_plant_control_grid_follow_power_meas1_power_meas_dqpu_lpf_p__delay_line_in;
X_UnInt32 _pv2_pv_plant_control_grid_follow_power_meas1_power_meas_dqpu_lpf_p__i;
double _pv2_pv_plant_control_grid_follow_power_meas1_power_meas_dqpu_lpf_q__out;
double _pv2_pv_plant_control_grid_follow_power_meas1_power_meas_dqpu_lpf_q__b_coeff[2] = {6.282790547806893e-05, 6.282790547806893e-05};
double _pv2_pv_plant_control_grid_follow_power_meas1_power_meas_dqpu_lpf_q__a_coeff[2] = {1.0, -0.999874344189044};
double _pv2_pv_plant_control_grid_follow_power_meas1_power_meas_dqpu_lpf_q__a_sum;
double _pv2_pv_plant_control_grid_follow_power_meas1_power_meas_dqpu_lpf_q__b_sum;
double _pv2_pv_plant_control_grid_follow_power_meas1_power_meas_dqpu_lpf_q__delay_line_in;
X_UnInt32 _pv2_pv_plant_control_grid_follow_power_meas1_power_meas_dqpu_lpf_q__i;
double _pv2_pv_plant_control_grid_follow_current_ref_limit3__out;
double _pv2_pv_plant_control_grid_follow_sum1__out;
double _pv2_pv_plant_control_pll_pll_pid_gain1__out;
double _ess1_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__out;
double _ess1_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__pi_reg_out_int;
double _ess1_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__out;
double _ess1_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__pi_reg_out_int;
double _ess2_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__out;
double _ess2_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__pi_reg_out_int;
double _ess2_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__out;
double _ess2_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__pi_reg_out_int;
double _pv1_pv_plant_control_grid_follow_current_ref_product1__out;
double _pv1_pv_plant_control_grid_follow_current_ref_product2__out;
double _pv1_pv_plant_control_grid_follow_pi_vt_ki__out;
double _pv1_pv_plant_control_grid_follow_pi_vt_kp__out;
double _pv1_pv_plant_control_pll_pll_pid_sum5__out;
double _pv2_pv_plant_control_grid_follow_current_ref_product1__out;
double _pv2_pv_plant_control_grid_follow_current_ref_product2__out;
double _pv2_pv_plant_control_grid_follow_pi_vt_ki__out;
double _pv2_pv_plant_control_grid_follow_pi_vt_kp__out;
double _pv2_pv_plant_control_pll_pll_pid_sum5__out;
double _ess1_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum3__out;
double _ess1_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum7__out;
double _ess2_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum3__out;
double _ess2_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum7__out;
double _pv1_pv_plant_control_grid_follow_controlsignal_calculation_sum2__out;
double _pv1_pv_plant_control_grid_follow_controlsignal_calculation_sum1__out;
double _pv1_pv_plant_control_grid_follow_pi_vt_sum5__out;
double _pv1_pv_plant_control_pll_pll_pid_limit1__out;
double _pv2_pv_plant_control_grid_follow_controlsignal_calculation_sum2__out;
double _pv2_pv_plant_control_grid_follow_controlsignal_calculation_sum1__out;
double _pv2_pv_plant_control_grid_follow_pi_vt_sum5__out;
double _pv2_pv_plant_control_pll_pll_pid_limit1__out;
double _ess1_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_product5__out;
double _ess1_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_product6__out;
double _ess2_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_product5__out;
double _ess2_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_product6__out;
double _pv1_pv_plant_control_grid_follow_controlsignal_calculation_pi_q_ki__out;
double _pv1_pv_plant_control_grid_follow_controlsignal_calculation_pi_q_kp__out;
double _pv1_pv_plant_control_grid_follow_controlsignal_calculation_pi_d_ki__out;
double _pv1_pv_plant_control_grid_follow_controlsignal_calculation_pi_d_kp__out;
double _pv1_pv_plant_control_grid_follow_pi_vt_limit1__out;
double _pv1_pv_plant_control_pll_pll_pid_sum6__out;
double _pv1_pv_plant_control_pll_pll_rate_limiter1__in_rate;
double _pv1_pv_plant_control_pll_pll_integrator__in;


double _pv1_pv_plant_control_pll_pll_integrator__out;
double _pv2_pv_plant_control_grid_follow_controlsignal_calculation_pi_q_ki__out;
double _pv2_pv_plant_control_grid_follow_controlsignal_calculation_pi_q_kp__out;
double _pv2_pv_plant_control_grid_follow_controlsignal_calculation_pi_d_ki__out;
double _pv2_pv_plant_control_grid_follow_controlsignal_calculation_pi_d_kp__out;
double _pv2_pv_plant_control_grid_follow_pi_vt_limit1__out;
double _pv2_pv_plant_control_pll_pll_pid_sum6__out;
double _pv2_pv_plant_control_pll_pll_rate_limiter1__in_rate;
double _pv2_pv_plant_control_pll_pll_integrator__in;


double _pv2_pv_plant_control_pll_pll_integrator__out;
double _ess1_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_limit1__out;
double _ess1_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_limit2__out;
double _ess2_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_limit1__out;
double _ess2_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_limit2__out;
double _pv1_pv_plant_control_grid_follow_controlsignal_calculation_pi_q_sum5__out;
double _pv1_pv_plant_control_grid_follow_controlsignal_calculation_pi_d_sum5__out;
double _pv1_pv_plant_control_grid_follow_pi_vt_sum6__out;
double _pv1_pv_plant_control_grid_follow_signal_switch1__out;
double _pv1_pv_plant_control_pll_pll_pid_kb__out;
double _pv1_pv_plant_control_pll_pll_lpf_lpf__out;
double _pv1_pv_plant_control_pll_pll_lpf_lpf__b_coeff[2] = {4.440892098500626e-16, 9.869600294032388e-06};
double _pv1_pv_plant_control_pll_pll_lpf_lpf__a_coeff[3] = {1.0, -1.995557788912, 0.9955676585122945};
double _pv1_pv_plant_control_pll_pll_lpf_lpf__a_sum;
double _pv1_pv_plant_control_pll_pll_lpf_lpf__b_sum;
double _pv1_pv_plant_control_pll_pll_lpf_lpf__delay_line_in;
X_UnInt32 _pv1_pv_plant_control_pll_pll_lpf_lpf__i;
double _pv2_pv_plant_control_grid_follow_controlsignal_calculation_pi_q_sum5__out;
double _pv2_pv_plant_control_grid_follow_controlsignal_calculation_pi_d_sum5__out;
double _pv2_pv_plant_control_grid_follow_pi_vt_sum6__out;
double _pv2_pv_plant_control_grid_follow_signal_switch1__out;
double _pv2_pv_plant_control_pll_pll_pid_kb__out;
double _pv2_pv_plant_control_pll_pll_lpf_lpf__out;
double _pv2_pv_plant_control_pll_pll_lpf_lpf__b_coeff[2] = {4.440892098500626e-16, 9.869600294032388e-06};
double _pv2_pv_plant_control_pll_pll_lpf_lpf__a_coeff[3] = {1.0, -1.995557788912, 0.9955676585122945};
double _pv2_pv_plant_control_pll_pll_lpf_lpf__a_sum;
double _pv2_pv_plant_control_pll_pll_lpf_lpf__b_sum;
double _pv2_pv_plant_control_pll_pll_lpf_lpf__delay_line_in;
X_UnInt32 _pv2_pv_plant_control_pll_pll_lpf_lpf__i;
double _ess1_controller_outer_voltage_loop___inner_current_loop_gain5__out;
double _ess1_controller_outer_voltage_loop___inner_current_loop_gain6__out;
double _ess2_controller_outer_voltage_loop___inner_current_loop_gain5__out;
double _ess2_controller_outer_voltage_loop___inner_current_loop_gain6__out;
double _pv1_pv_plant_control_grid_follow_controlsignal_calculation_pi_q_limit1__out;
double _pv1_pv_plant_control_grid_follow_controlsignal_calculation_pi_d_limit1__out;
double _pv1_pv_plant_control_grid_follow_pi_vt_kb__out;
double _pv1_pv_plant_control_grid_follow_limit_pqref_priority_pqlim_pq_limiting_with_priority__signQ;
double _pv1_pv_plant_control_grid_follow_limit_pqref_priority_pqlim_pq_limiting_with_priority__signP;
double _pv1_pv_plant_control_grid_follow_limit_pqref_priority_pqlim_pq_limiting_with_priority__Sref;
double _pv1_pv_plant_control_grid_follow_limit_pqref_priority_pqlim_pq_limiting_with_priority__Pref;
double _pv1_pv_plant_control_grid_follow_limit_pqref_priority_pqlim_pq_limiting_with_priority__Qref;
double _pv1_pv_plant_control_grid_follow_limit_pqref_priority_pqlim_pq_limiting_with_priority__Smax;


double _pv1_pv_plant_control_grid_follow_limit_pqref_priority_pqlim_pq_limiting_with_priority__P;
double _pv1_pv_plant_control_grid_follow_limit_pqref_priority_pqlim_pq_limiting_with_priority__Q;
double _pv1_pv_plant_control_grid_follow_limit_pqref_priority_pqlim_pq_limiting_with_priority__S;
double _pv1_pv_plant_control_pll_pll_pid_sum7__out;
double _pv2_pv_plant_control_grid_follow_controlsignal_calculation_pi_q_limit1__out;
double _pv2_pv_plant_control_grid_follow_controlsignal_calculation_pi_d_limit1__out;
double _pv2_pv_plant_control_grid_follow_pi_vt_kb__out;
double _pv2_pv_plant_control_grid_follow_limit_pqref_priority_pqlim_pq_limiting_with_priority__signQ;
double _pv2_pv_plant_control_grid_follow_limit_pqref_priority_pqlim_pq_limiting_with_priority__signP;
double _pv2_pv_plant_control_grid_follow_limit_pqref_priority_pqlim_pq_limiting_with_priority__Sref;
double _pv2_pv_plant_control_grid_follow_limit_pqref_priority_pqlim_pq_limiting_with_priority__Pref;
double _pv2_pv_plant_control_grid_follow_limit_pqref_priority_pqlim_pq_limiting_with_priority__Qref;
double _pv2_pv_plant_control_grid_follow_limit_pqref_priority_pqlim_pq_limiting_with_priority__Smax;


double _pv2_pv_plant_control_grid_follow_limit_pqref_priority_pqlim_pq_limiting_with_priority__P;
double _pv2_pv_plant_control_grid_follow_limit_pqref_priority_pqlim_pq_limiting_with_priority__Q;
double _pv2_pv_plant_control_grid_follow_limit_pqref_priority_pqlim_pq_limiting_with_priority__S;
double _pv2_pv_plant_control_pll_pll_pid_sum7__out;
double _ess1_controller_outer_voltage_loop___inner_current_loop_dq_to_abc_dq_to_abc1_dq_to_alpha_beta__alpha;
double _ess1_controller_outer_voltage_loop___inner_current_loop_dq_to_abc_dq_to_abc1_dq_to_alpha_beta__beta;
double _ess1_controller_outer_voltage_loop___inner_current_loop_dq_to_abc_dq_to_abc1_dq_to_alpha_beta__k1;
double _ess1_controller_outer_voltage_loop___inner_current_loop_dq_to_abc_dq_to_abc1_dq_to_alpha_beta__k2;
double _ess2_controller_outer_voltage_loop___inner_current_loop_dq_to_abc_dq_to_abc1_dq_to_alpha_beta__alpha;
double _ess2_controller_outer_voltage_loop___inner_current_loop_dq_to_abc_dq_to_abc1_dq_to_alpha_beta__beta;
double _ess2_controller_outer_voltage_loop___inner_current_loop_dq_to_abc_dq_to_abc1_dq_to_alpha_beta__k1;
double _ess2_controller_outer_voltage_loop___inner_current_loop_dq_to_abc_dq_to_abc1_dq_to_alpha_beta__k2;
double _pv1_pv_plant_control_grid_follow_controlsignal_calculation_pi_q_sum6__out;
double _pv1_pv_plant_control_grid_follow_controlsignal_calculation_sum7__out;
double _pv1_pv_plant_control_grid_follow_controlsignal_calculation_pi_d_sum6__out;
double _pv1_pv_plant_control_grid_follow_controlsignal_calculation_sum3__out;
double _pv1_pv_plant_control_grid_follow_pi_vt_sum7__out;
double _pv1_pv_plant_control_grid_follow_limit_pqref_p_rate_limit__in_rate;
double _pv1_pv_plant_control_grid_follow_limit_pqref_q_rate_limit__in_rate;
double _pv1_pv_plant_control_grid_follow_limit_pqref_s_rate_limit__in_rate;
double _pv2_pv_plant_control_grid_follow_controlsignal_calculation_pi_q_sum6__out;
double _pv2_pv_plant_control_grid_follow_controlsignal_calculation_sum7__out;
double _pv2_pv_plant_control_grid_follow_controlsignal_calculation_pi_d_sum6__out;
double _pv2_pv_plant_control_grid_follow_controlsignal_calculation_sum3__out;
double _pv2_pv_plant_control_grid_follow_pi_vt_sum7__out;
double _pv2_pv_plant_control_grid_follow_limit_pqref_p_rate_limit__in_rate;
double _pv2_pv_plant_control_grid_follow_limit_pqref_q_rate_limit__in_rate;
double _pv2_pv_plant_control_grid_follow_limit_pqref_s_rate_limit__in_rate;
double _ess1_controller_outer_voltage_loop___inner_current_loop_dq_to_abc_dq_to_abc1_alpha_beta_to_abc__A;
double _ess1_controller_outer_voltage_loop___inner_current_loop_dq_to_abc_dq_to_abc1_alpha_beta_to_abc__B;
double _ess1_controller_outer_voltage_loop___inner_current_loop_dq_to_abc_dq_to_abc1_alpha_beta_to_abc__C;
double _ess2_controller_outer_voltage_loop___inner_current_loop_dq_to_abc_dq_to_abc1_alpha_beta_to_abc__A;
double _ess2_controller_outer_voltage_loop___inner_current_loop_dq_to_abc_dq_to_abc1_alpha_beta_to_abc__B;
double _ess2_controller_outer_voltage_loop___inner_current_loop_dq_to_abc_dq_to_abc1_alpha_beta_to_abc__C;
double _pv1_pv_plant_control_grid_follow_controlsignal_calculation_pi_q_kb__out;
double _pv1_pv_plant_control_grid_follow_controlsignal_calculation_product7__out;
double _pv1_pv_plant_control_grid_follow_controlsignal_calculation_pi_d_kb__out;
double _pv1_pv_plant_control_grid_follow_controlsignal_calculation_product8__out;
double _pv1_pv_plant_control_grid_follow_limit_pqref_lims_overpq_s_limiting_over_pq__S_PQref;
double _pv1_pv_plant_control_grid_follow_limit_pqref_lims_overpq_s_limiting_over_pq__Pref;
double _pv1_pv_plant_control_grid_follow_limit_pqref_lims_overpq_s_limiting_over_pq__Qref;
double _pv1_pv_plant_control_grid_follow_limit_pqref_lims_overpq_s_limiting_over_pq__Sref;


double _pv1_pv_plant_control_grid_follow_limit_pqref_lims_overpq_s_limiting_over_pq__P;
double _pv1_pv_plant_control_grid_follow_limit_pqref_lims_overpq_s_limiting_over_pq__Q;
double _pv2_pv_plant_control_grid_follow_controlsignal_calculation_pi_q_kb__out;
double _pv2_pv_plant_control_grid_follow_controlsignal_calculation_product7__out;
double _pv2_pv_plant_control_grid_follow_controlsignal_calculation_pi_d_kb__out;
double _pv2_pv_plant_control_grid_follow_controlsignal_calculation_product8__out;
double _pv2_pv_plant_control_grid_follow_limit_pqref_lims_overpq_s_limiting_over_pq__S_PQref;
double _pv2_pv_plant_control_grid_follow_limit_pqref_lims_overpq_s_limiting_over_pq__Pref;
double _pv2_pv_plant_control_grid_follow_limit_pqref_lims_overpq_s_limiting_over_pq__Qref;
double _pv2_pv_plant_control_grid_follow_limit_pqref_lims_overpq_s_limiting_over_pq__Sref;


double _pv2_pv_plant_control_grid_follow_limit_pqref_lims_overpq_s_limiting_over_pq__P;
double _pv2_pv_plant_control_grid_follow_limit_pqref_lims_overpq_s_limiting_over_pq__Q;
double _ess1_controller_bus_join1__out[3];
double _ess2_controller_bus_join1__out[3];
double _pv1_pv_plant_control_grid_follow_controlsignal_calculation_pi_q_sum7__out;
double _pv1_pv_plant_control_grid_follow_controlsignal_calculation_gain11__out;
double _pv1_pv_plant_control_grid_follow_controlsignal_calculation_pi_d_sum7__out;
double _pv1_pv_plant_control_grid_follow_controlsignal_calculation_gain10__out;
double _pv2_pv_plant_control_grid_follow_controlsignal_calculation_pi_q_sum7__out;
double _pv2_pv_plant_control_grid_follow_controlsignal_calculation_gain11__out;
double _pv2_pv_plant_control_grid_follow_controlsignal_calculation_pi_d_sum7__out;
double _pv2_pv_plant_control_grid_follow_controlsignal_calculation_gain10__out;
double _ess1_controller_limit1__out[3];
double _ess2_controller_limit1__out[3];
double _pv1_pv_plant_control_grid_follow_controlsignal_calculation_sum9__out;
double _pv1_pv_plant_control_grid_follow_controlsignal_calculation_sum8__out;
double _pv2_pv_plant_control_grid_follow_controlsignal_calculation_sum9__out;
double _pv2_pv_plant_control_grid_follow_controlsignal_calculation_sum8__out;
double _ess1_bus_split1__out;
double _ess1_bus_split1__out1;
double _ess1_bus_split1__out2;
double _ess2_bus_split1__out;
double _ess2_bus_split1__out1;
double _ess2_bus_split1__out2;
double _pv1_pv_plant_control_duty_cycle_limit3__out;
double _pv1_pv_plant_control_duty_cycle_limit2__out;
double _pv2_pv_plant_control_duty_cycle_limit3__out;
double _pv2_pv_plant_control_duty_cycle_limit2__out;
X_UnInt32 _ess1_three_phase_inverter_igbt_leg1_pwm_modulator__channels[1] = {0};
double _ess1_three_phase_inverter_igbt_leg1_pwm_modulator__limited_in[1];
X_UnInt32 _ess1_three_phase_inverter_igbt_leg1_pwm_modulator__update_mask;
X_UnInt32 _ess1_three_phase_inverter_igbt_leg1_pwm_modulator__sig_dir[1];

X_UnInt32 _ess1_three_phase_inverter_igbt_leg2_pwm_modulator__channels[1] = {1};
double _ess1_three_phase_inverter_igbt_leg2_pwm_modulator__limited_in[1];
X_UnInt32 _ess1_three_phase_inverter_igbt_leg2_pwm_modulator__update_mask;
X_UnInt32 _ess1_three_phase_inverter_igbt_leg2_pwm_modulator__sig_dir[1];

X_UnInt32 _ess1_three_phase_inverter_igbt_leg3_pwm_modulator__channels[1] = {2};
double _ess1_three_phase_inverter_igbt_leg3_pwm_modulator__limited_in[1];
X_UnInt32 _ess1_three_phase_inverter_igbt_leg3_pwm_modulator__update_mask;
X_UnInt32 _ess1_three_phase_inverter_igbt_leg3_pwm_modulator__sig_dir[1];

X_UnInt32 _ess2_three_phase_inverter_igbt_leg1_pwm_modulator__channels[1] = {3};
double _ess2_three_phase_inverter_igbt_leg1_pwm_modulator__limited_in[1];
X_UnInt32 _ess2_three_phase_inverter_igbt_leg1_pwm_modulator__update_mask;
X_UnInt32 _ess2_three_phase_inverter_igbt_leg1_pwm_modulator__sig_dir[1];

X_UnInt32 _ess2_three_phase_inverter_igbt_leg2_pwm_modulator__channels[1] = {4};
double _ess2_three_phase_inverter_igbt_leg2_pwm_modulator__limited_in[1];
X_UnInt32 _ess2_three_phase_inverter_igbt_leg2_pwm_modulator__update_mask;
X_UnInt32 _ess2_three_phase_inverter_igbt_leg2_pwm_modulator__sig_dir[1];

X_UnInt32 _ess2_three_phase_inverter_igbt_leg3_pwm_modulator__channels[1] = {5};
double _ess2_three_phase_inverter_igbt_leg3_pwm_modulator__limited_in[1];
X_UnInt32 _ess2_three_phase_inverter_igbt_leg3_pwm_modulator__update_mask;
X_UnInt32 _ess2_three_phase_inverter_igbt_leg3_pwm_modulator__sig_dir[1];

double _pv1_pv_plant_control_duty_cycle_dq_to_abc1_dq_to_alpha_beta__alpha;
double _pv1_pv_plant_control_duty_cycle_dq_to_abc1_dq_to_alpha_beta__beta;
double _pv1_pv_plant_control_duty_cycle_dq_to_abc1_dq_to_alpha_beta__k1;
double _pv1_pv_plant_control_duty_cycle_dq_to_abc1_dq_to_alpha_beta__k2;
double _pv2_pv_plant_control_duty_cycle_dq_to_abc1_dq_to_alpha_beta__alpha;
double _pv2_pv_plant_control_duty_cycle_dq_to_abc1_dq_to_alpha_beta__beta;
double _pv2_pv_plant_control_duty_cycle_dq_to_abc1_dq_to_alpha_beta__k1;
double _pv2_pv_plant_control_duty_cycle_dq_to_abc1_dq_to_alpha_beta__k2;
double _pv1_pv_plant_control_duty_cycle_dq_to_abc1_alpha_beta_to_abc__A;
double _pv1_pv_plant_control_duty_cycle_dq_to_abc1_alpha_beta_to_abc__B;
double _pv1_pv_plant_control_duty_cycle_dq_to_abc1_alpha_beta_to_abc__C;
double _pv2_pv_plant_control_duty_cycle_dq_to_abc1_alpha_beta_to_abc__A;
double _pv2_pv_plant_control_duty_cycle_dq_to_abc1_alpha_beta_to_abc__B;
double _pv2_pv_plant_control_duty_cycle_dq_to_abc1_alpha_beta_to_abc__C;
double _pv1_pv_plant_control_duty_cycle_zsm_min_max1__out;
double _pv1_pv_plant_control_duty_cycle_zsm_min_max2__out;
double _pv2_pv_plant_control_duty_cycle_zsm_min_max1__out;
double _pv2_pv_plant_control_duty_cycle_zsm_min_max2__out;
double _pv1_pv_plant_control_duty_cycle_zsm_product2__out;
double _pv1_pv_plant_control_duty_cycle_zsm_sum1__out;
double _pv2_pv_plant_control_duty_cycle_zsm_product2__out;
double _pv2_pv_plant_control_duty_cycle_zsm_sum1__out;
double _pv1_pv_plant_control_duty_cycle_zsm_product1__out;
double _pv2_pv_plant_control_duty_cycle_zsm_product1__out;
double _pv1_pv_plant_control_duty_cycle_zsm_sum3__out;
double _pv2_pv_plant_control_duty_cycle_zsm_sum3__out;
double _pv1_pv_plant_control_duty_cycle_zsm_sum5__out;
double _pv1_pv_plant_control_duty_cycle_zsm_sum6__out;
double _pv1_pv_plant_control_duty_cycle_zsm_sum7__out;
double _pv2_pv_plant_control_duty_cycle_zsm_sum5__out;
double _pv2_pv_plant_control_duty_cycle_zsm_sum6__out;
double _pv2_pv_plant_control_duty_cycle_zsm_sum7__out;
X_UnInt32 _pv1_pv_plant_3ph_inverter_1_igbt_leg1_pwm_modulator__channels[1] = {6};
double _pv1_pv_plant_3ph_inverter_1_igbt_leg1_pwm_modulator__limited_in[1];
X_UnInt32 _pv1_pv_plant_3ph_inverter_1_igbt_leg1_pwm_modulator__update_mask;
X_UnInt32 _pv1_pv_plant_3ph_inverter_1_igbt_leg1_pwm_modulator__sig_dir[1];

X_UnInt32 _pv1_pv_plant_3ph_inverter_1_igbt_leg2_pwm_modulator__channels[1] = {7};
double _pv1_pv_plant_3ph_inverter_1_igbt_leg2_pwm_modulator__limited_in[1];
X_UnInt32 _pv1_pv_plant_3ph_inverter_1_igbt_leg2_pwm_modulator__update_mask;
X_UnInt32 _pv1_pv_plant_3ph_inverter_1_igbt_leg2_pwm_modulator__sig_dir[1];

X_UnInt32 _pv1_pv_plant_3ph_inverter_1_igbt_leg3_pwm_modulator__channels[1] = {8};
double _pv1_pv_plant_3ph_inverter_1_igbt_leg3_pwm_modulator__limited_in[1];
X_UnInt32 _pv1_pv_plant_3ph_inverter_1_igbt_leg3_pwm_modulator__update_mask;
X_UnInt32 _pv1_pv_plant_3ph_inverter_1_igbt_leg3_pwm_modulator__sig_dir[1];

X_UnInt32 _pv2_pv_plant_3ph_inverter_1_igbt_leg1_pwm_modulator__channels[1] = {9};
double _pv2_pv_plant_3ph_inverter_1_igbt_leg1_pwm_modulator__limited_in[1];
X_UnInt32 _pv2_pv_plant_3ph_inverter_1_igbt_leg1_pwm_modulator__update_mask;
X_UnInt32 _pv2_pv_plant_3ph_inverter_1_igbt_leg1_pwm_modulator__sig_dir[1];

X_UnInt32 _pv2_pv_plant_3ph_inverter_1_igbt_leg2_pwm_modulator__channels[1] = {10};
double _pv2_pv_plant_3ph_inverter_1_igbt_leg2_pwm_modulator__limited_in[1];
X_UnInt32 _pv2_pv_plant_3ph_inverter_1_igbt_leg2_pwm_modulator__update_mask;
X_UnInt32 _pv2_pv_plant_3ph_inverter_1_igbt_leg2_pwm_modulator__sig_dir[1];

X_UnInt32 _pv2_pv_plant_3ph_inverter_1_igbt_leg3_pwm_modulator__channels[1] = {11};
double _pv2_pv_plant_3ph_inverter_1_igbt_leg3_pwm_modulator__limited_in[1];
X_UnInt32 _pv2_pv_plant_3ph_inverter_1_igbt_leg3_pwm_modulator__update_mask;
X_UnInt32 _pv2_pv_plant_3ph_inverter_1_igbt_leg3_pwm_modulator__sig_dir[1];

//@cmp.var.end

//@cmp.svar.start
// state variables
double _ess1_be1_25a_synchronizer_rate_transition12_output__out =  0.0;

double _ess1_be1_25a_synchronizer_rate_transition2_output__out =  0.0;

double _ess1_be1_25a_synchronizer_rate_transition4_output__out =  0.0;

double _ess1_be1_25a_synchronizer_rate_transition6_output__out =  0.0;

double _ess1_be1_25a_synchronizer_unit_delay2__state;
double _ess1_battery_rate_transition1_output__out =  0.0;

double _ess1_battery_rate_transition2_output__out[6] = { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0};

double _ess1_battery_rate_transition3_output__out =  0.5;

double _ess1_battery_rate_transition4_output__out =  1.0;

X_Int32 _ess1_battery_rate_transition5_output__out = (X_Int32) 0.0;

double _ess1_battery_rate_transition6_output__out =  40.0;

double _ess1_battery_unit_delay1__state;
double _ess1_battery_unit_delay2__state;
double _ess1_controller_frequency_droop_clock1__state;
double _ess1_controller_frequency_droop_clock2__state;
double _ess1_controller_frequency_droop_rate_transition12_output__out =  0.0;

double _ess1_controller_integrator2__state;
double _ess1_controller_integrator3__state;
double _ess1_controller_pll_pll_pid_integrator1__state;
double _ess1_controller_pll_pll_pid_integrator2__state;
double _ess1_controller_pll_pll_unit_delay1__state;
double _ess1_controller_voltage_droop_clock1__state;
double _ess1_controller_voltage_droop_clock2__state;
double _ess1_controller_voltage_droop_rate_transition13_output__out =  0.0;

X_Int32 _ess1_rate_transition1_output__out = (X_Int32) 1.0;

X_Int32 _ess1_rate_transition6_output__out = (X_Int32) 0.0;

double _ess1_rate_transition7_output__out =  750.0;

double _ess2_be1_25a_synchronizer_rate_transition12_output__out =  0.0;

double _ess2_be1_25a_synchronizer_rate_transition2_output__out =  0.0;

double _ess2_be1_25a_synchronizer_rate_transition4_output__out =  0.0;

double _ess2_be1_25a_synchronizer_rate_transition6_output__out =  0.0;

double _ess2_be1_25a_synchronizer_unit_delay2__state;
double _ess2_battery_rate_transition1_output__out =  0.0;

double _ess2_battery_rate_transition2_output__out[6] = { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0};

double _ess2_battery_rate_transition3_output__out =  0.5;

double _ess2_battery_rate_transition4_output__out =  1.0;

X_Int32 _ess2_battery_rate_transition5_output__out = (X_Int32) 0.0;

double _ess2_battery_rate_transition6_output__out =  40.0;

double _ess2_battery_unit_delay1__state;
double _ess2_battery_unit_delay2__state;
double _ess2_controller_frequency_droop_clock1__state;
double _ess2_controller_frequency_droop_clock2__state;
double _ess2_controller_frequency_droop_rate_transition12_output__out =  0.0;

double _ess2_controller_integrator2__state;
double _ess2_controller_integrator3__state;
double _ess2_controller_pll_pll_pid_integrator1__state;
double _ess2_controller_pll_pll_pid_integrator2__state;
double _ess2_controller_pll_pll_unit_delay1__state;
double _ess2_controller_voltage_droop_clock1__state;
double _ess2_controller_voltage_droop_clock2__state;
double _ess2_controller_voltage_droop_rate_transition13_output__out =  0.0;

X_Int32 _ess2_rate_transition1_output__out = (X_Int32) 1.0;

X_Int32 _ess2_rate_transition6_output__out = (X_Int32) 0.0;

double _ess2_rate_transition7_output__out =  750.0;

double _pcc_pcc_measurements_three_phase_pll1_pid_integrator1__state;
double _pcc_pcc_measurements_three_phase_pll1_pid_integrator2__state;
double _pcc_pcc_measurements_three_phase_pll1_unit_delay1__state;
X_UnInt32 _pcc_sr_flip_flop1__state;
double _pv1_pv_plant_control_grid_follow_edge_detection1_unit_delay1__state;
double _pv1_pv_plant_control_grid_follow_limit_pqref_unit_delay1__state;
double _pv1_pv_plant_control_grid_follow_limit_pqref_unit_delay2__state;
double _pv1_pv_plant_control_pll_pll_pid_integrator1__state;
double _pv1_pv_plant_control_pll_pll_pid_integrator2__state;
double _pv1_pv_plant_control_pll_pll_unit_delay1__state;
double _pv2_pv_plant_control_grid_follow_edge_detection1_unit_delay1__state;
double _pv2_pv_plant_control_grid_follow_limit_pqref_unit_delay1__state;
double _pv2_pv_plant_control_grid_follow_limit_pqref_unit_delay2__state;
double _pv2_pv_plant_control_pll_pll_pid_integrator1__state;
double _pv2_pv_plant_control_pll_pll_pid_integrator2__state;
double _pv2_pv_plant_control_pll_pll_unit_delay1__state;
double _ess1_power_meter__filter_1_output_k_minus_1;
double _ess1_power_meter__filter_1_input_k_minus_1;
double _ess1_power_meter__filter_1_output_k_minus_1Q;
double _ess1_power_meter__filter_1_input_k_minus_1Q;
double _ess1_power_meter__filter_1_output_k_minus_1P0;
double _ess1_power_meter__filter_1_input_k_minus_1P0;
double _ess1_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__states[1];
double _ess2_power_meter__filter_1_output_k_minus_1;
double _ess2_power_meter__filter_1_input_k_minus_1;
double _ess2_power_meter__filter_1_output_k_minus_1Q;
double _ess2_power_meter__filter_1_input_k_minus_1Q;
double _ess2_power_meter__filter_1_output_k_minus_1P0;
double _ess2_power_meter__filter_1_input_k_minus_1P0;
double _ess2_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__states[1];
double _ess1_battery_lpf_dc__states[1];
double _ess2_battery_lpf_dc__states[1];
double _pv1_pv_plant_control_grid_follow_controlsignal_calculation_lpf_dc__states[1];
double _pv2_pv_plant_control_grid_follow_controlsignal_calculation_lpf_dc__states[1];
double _ess1_controller_pll_pll_abc_to_dq_lpf_d__states[1];
double _ess1_controller_pll_pll_abc_to_dq_lpf_q__states[1];
double _ess2_controller_pll_pll_abc_to_dq_lpf_d__states[1];
double _ess2_controller_pll_pll_abc_to_dq_lpf_q__states[1];
double _pcc_pcc_measurements_power_meter1__filter_1_output_k_minus_1;
double _pcc_pcc_measurements_power_meter1__filter_1_input_k_minus_1;
double _pcc_pcc_measurements_power_meter1__filter_1_output_k_minus_1Q;
double _pcc_pcc_measurements_power_meter1__filter_1_input_k_minus_1Q;
double _pcc_pcc_measurements_power_meter1__filter_1_output_k_minus_1P0;
double _pcc_pcc_measurements_power_meter1__filter_1_input_k_minus_1P0;
double _pcc_pcc_measurements_rms_value1__square_sum;
double _pcc_pcc_measurements_rms_value1__sample_cnt;
double _pcc_pcc_measurements_rms_value1__filtered_value;
double _pcc_pcc_measurements_rms_value1__out_state;
double _ess1_be1_25a_synchronizer_pll_pid_controller1__integrator_state;
X_UnInt32 _ess1_be1_25a_synchronizer_pll_pid_controller1__av_active;
double _ess1_be1_25a_synchronizer_pll_pid_controller1__filter_state;
double _ess2_be1_25a_synchronizer_pll_pid_controller1__integrator_state;
X_UnInt32 _ess2_be1_25a_synchronizer_pll_pid_controller1__av_active;
double _ess2_be1_25a_synchronizer_pll_pid_controller1__filter_state;
double _pcc_pcc_measurements_comparator1__state;
double _pcc_pcc_measurements_comparator2__state;
double _ess1_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_discrete_transfer_function1__states[1];
double _ess1_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_discrete_transfer_function2__states[1];
double _ess2_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_discrete_transfer_function1__states[1];
double _ess2_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_discrete_transfer_function2__states[1];
double _pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_d__states[1];
double _pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_q__states[1];
double _ess1_controller_outer_voltage_loop___inner_current_loop_outer_power_loop_comparator1__state;
double _ess1_power_meas_power_meas_dqpu_lpf_p__states[1];
double _ess1_power_meas_power_meas_dqpu_lpf_q__states[1];
double _ess2_controller_outer_voltage_loop___inner_current_loop_outer_power_loop_comparator1__state;
double _ess2_power_meas_power_meas_dqpu_lpf_p__states[1];
double _ess2_power_meas_power_meas_dqpu_lpf_q__states[1];
double _ess1_controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_pid_controller4__integrator_state;
X_UnInt32 _ess1_controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_pid_controller4__av_active;
double _ess1_controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_pid_controller4__filter_state;
double _ess2_controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_pid_controller4__integrator_state;
X_UnInt32 _ess2_controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_pid_controller4__av_active;
double _ess2_controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_pid_controller4__filter_state;
double _ess1_controller_pll_pll_rate_limiter1__prev_out;
double _ess1_controller_pll_pll_rate_limiter1__out;
int _ess1_controller_pll_pll_rate_limiter1__first_step;
double _ess2_controller_pll_pll_rate_limiter1__prev_out;
double _ess2_controller_pll_pll_rate_limiter1__out;
int _ess2_controller_pll_pll_rate_limiter1__first_step;
double _pv1_pv_plant_control_grid_follow_controlsignal_calculation_pi_d_integrator1__state;
double _pv1_pv_plant_control_grid_follow_controlsignal_calculation_pi_d_integrator1__reset_state;
double _pv1_pv_plant_control_grid_follow_controlsignal_calculation_pi_q_integrator1__state;
double _pv1_pv_plant_control_grid_follow_controlsignal_calculation_pi_q_integrator1__reset_state;
double _pv1_pv_plant_control_grid_follow_pi_vt_integrator1__state;
double _pv1_pv_plant_control_grid_follow_pi_vt_integrator1__reset_state;
double _pv2_pv_plant_control_grid_follow_controlsignal_calculation_pi_d_integrator1__state;
double _pv2_pv_plant_control_grid_follow_controlsignal_calculation_pi_d_integrator1__reset_state;
double _pv2_pv_plant_control_grid_follow_controlsignal_calculation_pi_q_integrator1__state;
double _pv2_pv_plant_control_grid_follow_controlsignal_calculation_pi_q_integrator1__reset_state;
double _pv2_pv_plant_control_grid_follow_pi_vt_integrator1__state;
double _pv2_pv_plant_control_grid_follow_pi_vt_integrator1__reset_state;
double _ess1_controller_pll_pll_lpf_lpf__states[2];
double _ess1_controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_pid_controller3__integrator_state;
X_UnInt32 _ess1_controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_pid_controller3__av_active;
double _ess1_controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_pid_controller3__filter_state;
double _ess2_controller_pll_pll_lpf_lpf__states[2];
double _ess2_controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_pid_controller3__integrator_state;
X_UnInt32 _ess2_controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_pid_controller3__av_active;
double _ess2_controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_pid_controller3__filter_state;
double _pcc_pcc_measurements_three_phase_pll1_rate_limiter1__prev_out;
double _pcc_pcc_measurements_three_phase_pll1_rate_limiter1__out;
int _pcc_pcc_measurements_three_phase_pll1_rate_limiter1__first_step;
double _pv1_pv_plant_control_pll_pll_abc_to_dq_lpf_d__states[1];
double _pv1_pv_plant_control_pll_pll_abc_to_dq_lpf_q__states[1];
double _pv2_pv_plant_control_pll_pll_abc_to_dq_lpf_d__states[1];
double _pv2_pv_plant_control_pll_pll_abc_to_dq_lpf_q__states[1];
double _pcc_pcc_measurements_three_phase_pll1_lpf_lpf__states[2];
double _pv1_pv_plant_control_grid_follow_power_meas_power_meas_dqpu_lpf_p__states[1];
double _pv1_pv_plant_control_grid_follow_power_meas_power_meas_dqpu_lpf_q__states[1];
double _pv1_pv_plant_control_grid_follow_power_meas1_power_meas_dqpu_lpf_p__states[1];
double _pv1_pv_plant_control_grid_follow_power_meas1_power_meas_dqpu_lpf_q__states[1];
double _pv2_pv_plant_control_grid_follow_power_meas_power_meas_dqpu_lpf_p__states[1];
double _pv2_pv_plant_control_grid_follow_power_meas_power_meas_dqpu_lpf_q__states[1];
double _pv2_pv_plant_control_grid_follow_power_meas1_power_meas_dqpu_lpf_p__states[1];
double _pv2_pv_plant_control_grid_follow_power_meas1_power_meas_dqpu_lpf_q__states[1];
double _ess1_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__integrator_state;
X_UnInt32 _ess1_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__av_active;
double _ess1_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__filter_state;
double _ess1_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__integrator_state;
X_UnInt32 _ess1_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__av_active;
double _ess1_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__filter_state;
double _ess2_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__integrator_state;
X_UnInt32 _ess2_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__av_active;
double _ess2_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__filter_state;
double _ess2_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__integrator_state;
X_UnInt32 _ess2_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__av_active;
double _ess2_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__filter_state;
double _pv1_pv_plant_control_pll_pll_rate_limiter1__prev_out;
double _pv1_pv_plant_control_pll_pll_rate_limiter1__out;
int _pv1_pv_plant_control_pll_pll_rate_limiter1__first_step;
double _pv2_pv_plant_control_pll_pll_rate_limiter1__prev_out;
double _pv2_pv_plant_control_pll_pll_rate_limiter1__out;
int _pv2_pv_plant_control_pll_pll_rate_limiter1__first_step;
double _pv1_pv_plant_control_pll_pll_lpf_lpf__states[2];
double _pv2_pv_plant_control_pll_pll_lpf_lpf__states[2];
double _pv1_pv_plant_control_grid_follow_limit_pqref_p_rate_limit__prev_out;
double _pv1_pv_plant_control_grid_follow_limit_pqref_p_rate_limit__out;
int _pv1_pv_plant_control_grid_follow_limit_pqref_p_rate_limit__first_step;
double _pv1_pv_plant_control_grid_follow_limit_pqref_q_rate_limit__prev_out;
double _pv1_pv_plant_control_grid_follow_limit_pqref_q_rate_limit__out;
int _pv1_pv_plant_control_grid_follow_limit_pqref_q_rate_limit__first_step;
double _pv1_pv_plant_control_grid_follow_limit_pqref_s_rate_limit__prev_out;
double _pv1_pv_plant_control_grid_follow_limit_pqref_s_rate_limit__out;
int _pv1_pv_plant_control_grid_follow_limit_pqref_s_rate_limit__first_step;
double _pv2_pv_plant_control_grid_follow_limit_pqref_p_rate_limit__prev_out;
double _pv2_pv_plant_control_grid_follow_limit_pqref_p_rate_limit__out;
int _pv2_pv_plant_control_grid_follow_limit_pqref_p_rate_limit__first_step;
double _pv2_pv_plant_control_grid_follow_limit_pqref_q_rate_limit__prev_out;
double _pv2_pv_plant_control_grid_follow_limit_pqref_q_rate_limit__out;
int _pv2_pv_plant_control_grid_follow_limit_pqref_q_rate_limit__first_step;
double _pv2_pv_plant_control_grid_follow_limit_pqref_s_rate_limit__prev_out;
double _pv2_pv_plant_control_grid_follow_limit_pqref_s_rate_limit__out;
int _pv2_pv_plant_control_grid_follow_limit_pqref_s_rate_limit__first_step;
//@cmp.svar.end



// generated using template: virtual_hil/custom_functions.template---------------------------------
void ReInit_user_sp_cpu_dev0() {
#if DEBUG_MODE
    printf("\n\rReInitTimer");
#endif
    //@cmp.init.block.start
    _ess1_be1_25a_synchronizer_rate_transition12_output__out =  0.0;
    _ess1_be1_25a_synchronizer_rate_transition2_output__out =  0.0;
    _ess1_be1_25a_synchronizer_rate_transition4_output__out =  0.0;
    _ess1_be1_25a_synchronizer_rate_transition6_output__out =  0.0;
    _ess1_be1_25a_synchronizer_unit_delay2__state = 0.0;
    _ess1_battery_rate_transition1_output__out =  0.0;
    _ess1_battery_rate_transition2_output__out[0] =  0.0;
    _ess1_battery_rate_transition2_output__out[1] =  0.0;
    _ess1_battery_rate_transition2_output__out[2] =  0.0;
    _ess1_battery_rate_transition2_output__out[3] =  0.0;
    _ess1_battery_rate_transition2_output__out[4] =  0.0;
    _ess1_battery_rate_transition2_output__out[5] =  0.0;
    _ess1_battery_rate_transition3_output__out =  0.5;
    _ess1_battery_rate_transition4_output__out =  1.0;
    _ess1_battery_rate_transition5_output__out = (X_Int32) 0.0;
    _ess1_battery_rate_transition6_output__out =  40.0;
    _ess1_battery_unit_delay1__state = 0.5;
    _ess1_battery_unit_delay2__state = 0.5;
    _ess1_controller_frequency_droop_clock1__state = 0.0f;
    _ess1_controller_frequency_droop_clock2__state = 0.0f;
    _ess1_controller_frequency_droop_rate_transition12_output__out =  0.0;
    _ess1_controller_integrator2__state = 0.0;
    _ess1_controller_integrator3__state = 0.0;
    _ess1_controller_pll_pll_pid_integrator1__state = 376.99111843;
    _ess1_controller_pll_pll_pid_integrator2__state = 0.0;
    _ess1_controller_pll_pll_unit_delay1__state = 0.0;
    _ess1_controller_voltage_droop_clock1__state = 0.0f;
    _ess1_controller_voltage_droop_clock2__state = 0.0f;
    _ess1_controller_voltage_droop_rate_transition13_output__out =  0.0;
    _ess1_power_meas_power_meas_dqpu_s_and_pf__P = 0;
    _ess1_power_meas_power_meas_dqpu_s_and_pf__Q = 0;
    _ess1_power_meas_power_meas_dqpu_s_and_pf__S = 0;
    _ess1_power_meas_power_meas_dqpu_s_and_pf__pf = 0;
    _ess1_rate_transition1_output__out = (X_Int32) 1.0;
    _ess1_rate_transition6_output__out = (X_Int32) 0.0;
    _ess1_rate_transition7_output__out =  750.0;
    _ess2_be1_25a_synchronizer_rate_transition12_output__out =  0.0;
    _ess2_be1_25a_synchronizer_rate_transition2_output__out =  0.0;
    _ess2_be1_25a_synchronizer_rate_transition4_output__out =  0.0;
    _ess2_be1_25a_synchronizer_rate_transition6_output__out =  0.0;
    _ess2_be1_25a_synchronizer_unit_delay2__state = 0.0;
    _ess2_battery_rate_transition1_output__out =  0.0;
    _ess2_battery_rate_transition2_output__out[0] =  0.0;
    _ess2_battery_rate_transition2_output__out[1] =  0.0;
    _ess2_battery_rate_transition2_output__out[2] =  0.0;
    _ess2_battery_rate_transition2_output__out[3] =  0.0;
    _ess2_battery_rate_transition2_output__out[4] =  0.0;
    _ess2_battery_rate_transition2_output__out[5] =  0.0;
    _ess2_battery_rate_transition3_output__out =  0.5;
    _ess2_battery_rate_transition4_output__out =  1.0;
    _ess2_battery_rate_transition5_output__out = (X_Int32) 0.0;
    _ess2_battery_rate_transition6_output__out =  40.0;
    _ess2_battery_unit_delay1__state = 0.5;
    _ess2_battery_unit_delay2__state = 0.5;
    _ess2_controller_frequency_droop_clock1__state = 0.0f;
    _ess2_controller_frequency_droop_clock2__state = 0.0f;
    _ess2_controller_frequency_droop_rate_transition12_output__out =  0.0;
    _ess2_controller_integrator2__state = 0.0;
    _ess2_controller_integrator3__state = 0.0;
    _ess2_controller_pll_pll_pid_integrator1__state = 376.99111843;
    _ess2_controller_pll_pll_pid_integrator2__state = 0.0;
    _ess2_controller_pll_pll_unit_delay1__state = 0.0;
    _ess2_controller_voltage_droop_clock1__state = 0.0f;
    _ess2_controller_voltage_droop_clock2__state = 0.0f;
    _ess2_controller_voltage_droop_rate_transition13_output__out =  0.0;
    _ess2_power_meas_power_meas_dqpu_s_and_pf__P = 0;
    _ess2_power_meas_power_meas_dqpu_s_and_pf__Q = 0;
    _ess2_power_meas_power_meas_dqpu_s_and_pf__S = 0;
    _ess2_power_meas_power_meas_dqpu_s_and_pf__pf = 0;
    _ess2_rate_transition1_output__out = (X_Int32) 1.0;
    _ess2_rate_transition6_output__out = (X_Int32) 0.0;
    _ess2_rate_transition7_output__out =  750.0;
    _pcc_pcc_measurements_three_phase_pll1_pid_integrator1__state = 376.99111843;
    _pcc_pcc_measurements_three_phase_pll1_pid_integrator2__state = 0.0;
    _pcc_pcc_measurements_three_phase_pll1_unit_delay1__state = 0.0;
    _pcc_sr_flip_flop1__state = (double) 0;
    _pv1_pv_plant_control_grid_follow_edge_detection1_unit_delay1__state = 0.0;
    _pv1_pv_plant_control_grid_follow_limit_pqref_unit_delay1__state = 0.0;
    _pv1_pv_plant_control_grid_follow_limit_pqref_unit_delay2__state = 0.0;
    _pv1_pv_plant_control_grid_follow_power_meas_power_meas_dqpu_s_and_pf__P = 0;
    _pv1_pv_plant_control_grid_follow_power_meas_power_meas_dqpu_s_and_pf__Q = 0;
    _pv1_pv_plant_control_grid_follow_power_meas_power_meas_dqpu_s_and_pf__S = 0;
    _pv1_pv_plant_control_grid_follow_power_meas_power_meas_dqpu_s_and_pf__pf = 0;
    _pv1_pv_plant_control_grid_follow_power_meas1_power_meas_dqpu_s_and_pf__P = 0;
    _pv1_pv_plant_control_grid_follow_power_meas1_power_meas_dqpu_s_and_pf__Q = 0;
    _pv1_pv_plant_control_grid_follow_power_meas1_power_meas_dqpu_s_and_pf__S = 0;
    _pv1_pv_plant_control_grid_follow_power_meas1_power_meas_dqpu_s_and_pf__pf = 0;
    _pv1_pv_plant_control_pll_pll_pid_integrator1__state = 376.99111843;
    _pv1_pv_plant_control_pll_pll_pid_integrator2__state = 0.0;
    _pv1_pv_plant_control_pll_pll_unit_delay1__state = 0.0;
    _pv2_pv_plant_control_grid_follow_edge_detection1_unit_delay1__state = 0.0;
    _pv2_pv_plant_control_grid_follow_limit_pqref_unit_delay1__state = 0.0;
    _pv2_pv_plant_control_grid_follow_limit_pqref_unit_delay2__state = 0.0;
    _pv2_pv_plant_control_grid_follow_power_meas_power_meas_dqpu_s_and_pf__P = 0;
    _pv2_pv_plant_control_grid_follow_power_meas_power_meas_dqpu_s_and_pf__Q = 0;
    _pv2_pv_plant_control_grid_follow_power_meas_power_meas_dqpu_s_and_pf__S = 0;
    _pv2_pv_plant_control_grid_follow_power_meas_power_meas_dqpu_s_and_pf__pf = 0;
    _pv2_pv_plant_control_grid_follow_power_meas1_power_meas_dqpu_s_and_pf__P = 0;
    _pv2_pv_plant_control_grid_follow_power_meas1_power_meas_dqpu_s_and_pf__Q = 0;
    _pv2_pv_plant_control_grid_follow_power_meas1_power_meas_dqpu_s_and_pf__S = 0;
    _pv2_pv_plant_control_grid_follow_power_meas1_power_meas_dqpu_s_and_pf__pf = 0;
    _pv2_pv_plant_control_pll_pll_pid_integrator1__state = 376.99111843;
    _pv2_pv_plant_control_pll_pll_pid_integrator2__state = 0.0;
    _pv2_pv_plant_control_pll_pll_unit_delay1__state = 0.0;
    _ess1_be1_25a_synchronizer_stay_connected1__connect = 0;
    HIL_OutAO(0x4015, 0.0f);
    _ess1_battery_c_function__SOC = 0.5;
    HIL_OutAO(0x401b, 0.0f);
    HIL_OutAO(0x401d, 0.0f);
    HIL_OutAO(0x4028, 0.0f);
    HIL_OutAO(0x402d, 0.0f);
    HIL_OutAO(0x4032, 0.0f);
    HIL_OutAO(0x4033, 0.0f);
    HIL_OutAO(0x4034, 0.0f);
    _ess1_power_meter__filter_1_output_k_minus_1 = 0.0;
    _ess1_power_meter__filter_1_input_k_minus_1 = 0.0;
    _ess1_power_meter__filter_1_output_k_minus_1Q = 0.0;
    _ess1_power_meter__filter_1_input_k_minus_1Q = 0.0;
    _ess1_power_meter__filter_1_output_k_minus_1P0 = 0.0;
    _ess1_power_meter__filter_1_input_k_minus_1P0 = 0.0;
    HIL_OutAO(0x4036, 0.0f);
    HIL_OutAO(0x4038, 0.0f);
    HIL_OutAO(0x403b, 0.0f);
    for (_ess1_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__i = 0; _ess1_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__i < 1; _ess1_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__i++) {
        _ess1_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__states[_ess1_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__i] = 0.0;
    }
    _ess2_be1_25a_synchronizer_stay_connected1__connect = 0;
    HIL_OutAO(0x404a, 0.0f);
    _ess2_battery_c_function__SOC = 0.5;
    HIL_OutAO(0x4050, 0.0f);
    HIL_OutAO(0x4052, 0.0f);
    HIL_OutAO(0x405d, 0.0f);
    HIL_OutAO(0x4062, 0.0f);
    HIL_OutAO(0x4067, 0.0f);
    HIL_OutAO(0x4068, 0.0f);
    HIL_OutAO(0x4069, 0.0f);
    _ess2_power_meter__filter_1_output_k_minus_1 = 0.0;
    _ess2_power_meter__filter_1_input_k_minus_1 = 0.0;
    _ess2_power_meter__filter_1_output_k_minus_1Q = 0.0;
    _ess2_power_meter__filter_1_input_k_minus_1Q = 0.0;
    _ess2_power_meter__filter_1_output_k_minus_1P0 = 0.0;
    _ess2_power_meter__filter_1_input_k_minus_1P0 = 0.0;
    HIL_OutAO(0x406b, 0.0f);
    HIL_OutAO(0x406d, 0.0f);
    HIL_OutAO(0x4070, 0.0f);
    for (_ess2_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__i = 0; _ess2_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__i < 1; _ess2_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__i++) {
        _ess2_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__states[_ess2_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__i] = 0.0;
    }
    HIL_OutAO(0x4074, 0.0f);
    HIL_OutAO(0x4077, 0.0f);
    HIL_OutAO(0x4079, 0.0f);
    HIL_OutAO(0x4084, 0.0f);
    HIL_OutAO(0x4086, 0.0f);
    HIL_OutAO(0x4088, 0.0f);
    HIL_OutFloat(145489920, 0.0);
    HIL_OutAO(0x4095, 0.0f);
    HIL_OutAO(0x4098, 0.0f);
    HIL_OutAO(0x409a, 0.0f);
    HIL_OutAO(0x40a5, 0.0f);
    HIL_OutAO(0x40a7, 0.0f);
    HIL_OutAO(0x40a9, 0.0f);
    HIL_OutFloat(149684224, 0.0);
    HIL_OutAO(0x4007, 0.0f);
    _ess1_be1_25a_synchronizer_hold_after_connect2__var = 0;
    _ess1_be1_25a_synchronizer_hold_after_connect3__var = 0;
    HIL_OutAO(0x403a, 0.0f);
    HIL_OutFloat(141295616, 0.0);
    HIL_OutAO(0x4035, 0.0f);
    HIL_OutAO(0x4037, 0.0f);
    HIL_OutAO(0x401a, 0.0f);
    for (_ess1_battery_lpf_dc__i = 0; _ess1_battery_lpf_dc__i < 1; _ess1_battery_lpf_dc__i++) {
        _ess1_battery_lpf_dc__states[_ess1_battery_lpf_dc__i] = 0.0;
    }
    HIL_OutAO(0x4039, 0.0f);
    HIL_OutAO(0x400a, 0.0f);
    HIL_OutAO(0x400b, 0.0f);
    HIL_OutAO(0x400c, 0.0f);
    HIL_OutAO(0x403c, 0.0f);
    _ess2_be1_25a_synchronizer_hold_after_connect2__var = 0;
    _ess2_be1_25a_synchronizer_hold_after_connect3__var = 0;
    HIL_OutAO(0x406f, 0.0f);
    HIL_OutFloat(153878528, 0.0);
    HIL_OutAO(0x406a, 0.0f);
    HIL_OutAO(0x406c, 0.0f);
    HIL_OutAO(0x404f, 0.0f);
    for (_ess2_battery_lpf_dc__i = 0; _ess2_battery_lpf_dc__i < 1; _ess2_battery_lpf_dc__i++) {
        _ess2_battery_lpf_dc__states[_ess2_battery_lpf_dc__i] = 0.0;
    }
    HIL_OutAO(0x406e, 0.0f);
    HIL_OutAO(0x403f, 0.0f);
    HIL_OutAO(0x4040, 0.0f);
    HIL_OutAO(0x4041, 0.0f);
    HIL_OutAO(0x407b, 0.0f);
    HIL_OutAO(0x4085, 0.0f);
    for (_pv1_pv_plant_control_grid_follow_controlsignal_calculation_lpf_dc__i = 0; _pv1_pv_plant_control_grid_follow_controlsignal_calculation_lpf_dc__i < 1; _pv1_pv_plant_control_grid_follow_controlsignal_calculation_lpf_dc__i++) {
        _pv1_pv_plant_control_grid_follow_controlsignal_calculation_lpf_dc__states[_pv1_pv_plant_control_grid_follow_controlsignal_calculation_lpf_dc__i] = 0.0;
    }
    HIL_OutAO(0x409c, 0.0f);
    HIL_OutAO(0x40a6, 0.0f);
    for (_pv2_pv_plant_control_grid_follow_controlsignal_calculation_lpf_dc__i = 0; _pv2_pv_plant_control_grid_follow_controlsignal_calculation_lpf_dc__i < 1; _pv2_pv_plant_control_grid_follow_controlsignal_calculation_lpf_dc__i++) {
        _pv2_pv_plant_control_grid_follow_controlsignal_calculation_lpf_dc__states[_pv2_pv_plant_control_grid_follow_controlsignal_calculation_lpf_dc__i] = 0.0;
    }
    HIL_OutAO(0x4013, 0.0f);
    _ess1_controller_frequency_droop_c_function3__wref = 376.99111843077515;
    HIL_OutAO(0x4012, 0.0f);
    _ess1_controller_voltage_droop_c_function3__Vref = 1;
    for (_ess1_controller_pll_pll_abc_to_dq_lpf_d__i = 0; _ess1_controller_pll_pll_abc_to_dq_lpf_d__i < 1; _ess1_controller_pll_pll_abc_to_dq_lpf_d__i++) {
        _ess1_controller_pll_pll_abc_to_dq_lpf_d__states[_ess1_controller_pll_pll_abc_to_dq_lpf_d__i] = 0.0;
    }
    for (_ess1_controller_pll_pll_abc_to_dq_lpf_q__i = 0; _ess1_controller_pll_pll_abc_to_dq_lpf_q__i < 1; _ess1_controller_pll_pll_abc_to_dq_lpf_q__i++) {
        _ess1_controller_pll_pll_abc_to_dq_lpf_q__states[_ess1_controller_pll_pll_abc_to_dq_lpf_q__i] = 0.0;
    }
    HIL_OutAO(0x4048, 0.0f);
    _ess2_controller_frequency_droop_c_function3__wref = 376.99111843077515;
    HIL_OutAO(0x4047, 0.0f);
    _ess2_controller_voltage_droop_c_function3__Vref = 1;
    for (_ess2_controller_pll_pll_abc_to_dq_lpf_d__i = 0; _ess2_controller_pll_pll_abc_to_dq_lpf_d__i < 1; _ess2_controller_pll_pll_abc_to_dq_lpf_d__i++) {
        _ess2_controller_pll_pll_abc_to_dq_lpf_d__states[_ess2_controller_pll_pll_abc_to_dq_lpf_d__i] = 0.0;
    }
    for (_ess2_controller_pll_pll_abc_to_dq_lpf_q__i = 0; _ess2_controller_pll_pll_abc_to_dq_lpf_q__i < 1; _ess2_controller_pll_pll_abc_to_dq_lpf_q__i++) {
        _ess2_controller_pll_pll_abc_to_dq_lpf_q__states[_ess2_controller_pll_pll_abc_to_dq_lpf_q__i] = 0.0;
    }
    _pcc_pcc_measurements_power_meter1__filter_1_output_k_minus_1 = 0.0;
    _pcc_pcc_measurements_power_meter1__filter_1_input_k_minus_1 = 0.0;
    _pcc_pcc_measurements_power_meter1__filter_1_output_k_minus_1Q = 0.0;
    _pcc_pcc_measurements_power_meter1__filter_1_input_k_minus_1Q = 0.0;
    _pcc_pcc_measurements_power_meter1__filter_1_output_k_minus_1P0 = 0.0;
    _pcc_pcc_measurements_power_meter1__filter_1_input_k_minus_1P0 = 0.0;
    _pcc_pcc_measurements_rms_value1__square_sum = 0x0;
    _pcc_pcc_measurements_rms_value1__sample_cnt = 0x0;
    _pcc_pcc_measurements_rms_value1__filtered_value = 0x0;
    _pcc_pcc_measurements_rms_value1__out_state = 0x0;
    HIL_OutAO(0x4009, 0.0f);
    HIL_OutAO(0x4008, 0.0f);
    _ess1_controller_pll_pll_normalize__in1 = 0;
    _ess1_controller_pll_pll_normalize__in2 = 0;
    _ess1_controller_pll_pll_normalize__pk = 0;
    HIL_OutAO(0x4030, 0.0f);
    HIL_OutAO(0x400d, 0.0f);
    HIL_OutAO(0x400e, 0.0f);
    HIL_OutAO(0x400f, 0.0f);
    _ess1_be1_25a_synchronizer_pll_pid_controller1__integrator_state =  376.99111843077515;
    _ess1_be1_25a_synchronizer_pll_pid_controller1__filter_state =  0.0;
    HIL_OutAO(0x4010, 0.0f);
    HIL_OutAO(0x403e, 0.0f);
    HIL_OutAO(0x403d, 0.0f);
    _ess2_controller_pll_pll_normalize__in1 = 0;
    _ess2_controller_pll_pll_normalize__in2 = 0;
    _ess2_controller_pll_pll_normalize__pk = 0;
    HIL_OutAO(0x4065, 0.0f);
    HIL_OutAO(0x4042, 0.0f);
    HIL_OutAO(0x4043, 0.0f);
    HIL_OutAO(0x4044, 0.0f);
    _ess2_be1_25a_synchronizer_pll_pid_controller1__integrator_state =  376.99111843077515;
    _ess2_be1_25a_synchronizer_pll_pid_controller1__filter_state =  0.0;
    HIL_OutAO(0x4045, 0.0f);
    HIL_OutAO(0x4071, 0.0f);
    _pcc_pcc_measurements_comparator1__state = 0.0f;
    _pcc_pcc_measurements_comparator2__state = 0.0f;
    HIL_OutAO(0x4072, 0.0f);
    HIL_OutAO(0x4081, 0.0f);
    HIL_OutAO(0x4082, 0.0f);
    HIL_OutAO(0x40a2, 0.0f);
    HIL_OutAO(0x40a3, 0.0f);
    for (_ess1_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_discrete_transfer_function1__i = 0; _ess1_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_discrete_transfer_function1__i < 1; _ess1_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_discrete_transfer_function1__i++) {
        _ess1_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_discrete_transfer_function1__states[_ess1_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_discrete_transfer_function1__i] = 0.0;
    }
    for (_ess1_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_discrete_transfer_function2__i = 0; _ess1_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_discrete_transfer_function2__i < 1; _ess1_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_discrete_transfer_function2__i++) {
        _ess1_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_discrete_transfer_function2__states[_ess1_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_discrete_transfer_function2__i] = 0.0;
    }
    _ess1_be1_25a_synchronizer_pll_c_function1__var = 0;
    HIL_OutAO(0x4017, 0.0f);
    for (_ess2_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_discrete_transfer_function1__i = 0; _ess2_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_discrete_transfer_function1__i < 1; _ess2_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_discrete_transfer_function1__i++) {
        _ess2_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_discrete_transfer_function1__states[_ess2_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_discrete_transfer_function1__i] = 0.0;
    }
    for (_ess2_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_discrete_transfer_function2__i = 0; _ess2_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_discrete_transfer_function2__i < 1; _ess2_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_discrete_transfer_function2__i++) {
        _ess2_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_discrete_transfer_function2__states[_ess2_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_discrete_transfer_function2__i] = 0.0;
    }
    _ess2_be1_25a_synchronizer_pll_c_function1__var = 0;
    HIL_OutAO(0x404c, 0.0f);
    for (_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_d__i = 0; _pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_d__i < 1; _pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_d__i++) {
        _pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_d__states[_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_d__i] = 0.0;
    }
    for (_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_q__i = 0; _pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_q__i < 1; _pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_q__i++) {
        _pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_q__states[_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_q__i] = 0.0;
    }
    _ess1_be1_25a_synchronizer_confine_phase1__floor_in = 0;
    _ess1_be1_25a_synchronizer_confine_phase2__floor_in = 0;
    _ess1_be1_25a_synchronizer_pll_confine_phase__floor_in = 0;
    _ess2_be1_25a_synchronizer_confine_phase1__floor_in = 0;
    _ess2_be1_25a_synchronizer_confine_phase2__floor_in = 0;
    _ess2_be1_25a_synchronizer_pll_confine_phase__floor_in = 0;
    _pcc_pcc_measurements_three_phase_pll1_normalize__in1 = 0;
    _pcc_pcc_measurements_three_phase_pll1_normalize__in2 = 0;
    _pcc_pcc_measurements_three_phase_pll1_normalize__pk = 0;
    HIL_OutAO(0x4018, 0.0f);
    _ess1_controller_outer_voltage_loop___inner_current_loop_outer_power_loop_comparator1__state = 0.0f;
    for (_ess1_power_meas_power_meas_dqpu_lpf_p__i = 0; _ess1_power_meas_power_meas_dqpu_lpf_p__i < 1; _ess1_power_meas_power_meas_dqpu_lpf_p__i++) {
        _ess1_power_meas_power_meas_dqpu_lpf_p__states[_ess1_power_meas_power_meas_dqpu_lpf_p__i] = 0.0;
    }
    for (_ess1_power_meas_power_meas_dqpu_lpf_q__i = 0; _ess1_power_meas_power_meas_dqpu_lpf_q__i < 1; _ess1_power_meas_power_meas_dqpu_lpf_q__i++) {
        _ess1_power_meas_power_meas_dqpu_lpf_q__states[_ess1_power_meas_power_meas_dqpu_lpf_q__i] = 0.0;
    }
    _ess1_controller_frequency_droop_c_function2__connected = 0;
    _ess1_controller_frequency_droop_c_function2__time = 0;
    HIL_OutAO(0x402f, 0.0f);
    HIL_OutAO(0x4019, 0.0f);
    HIL_OutAO(0x401f, 0.0f);
    HIL_OutAO(0x404d, 0.0f);
    _ess2_controller_outer_voltage_loop___inner_current_loop_outer_power_loop_comparator1__state = 0.0f;
    for (_ess2_power_meas_power_meas_dqpu_lpf_p__i = 0; _ess2_power_meas_power_meas_dqpu_lpf_p__i < 1; _ess2_power_meas_power_meas_dqpu_lpf_p__i++) {
        _ess2_power_meas_power_meas_dqpu_lpf_p__states[_ess2_power_meas_power_meas_dqpu_lpf_p__i] = 0.0;
    }
    for (_ess2_power_meas_power_meas_dqpu_lpf_q__i = 0; _ess2_power_meas_power_meas_dqpu_lpf_q__i < 1; _ess2_power_meas_power_meas_dqpu_lpf_q__i++) {
        _ess2_power_meas_power_meas_dqpu_lpf_q__states[_ess2_power_meas_power_meas_dqpu_lpf_q__i] = 0.0;
    }
    _ess2_controller_frequency_droop_c_function2__connected = 0;
    _ess2_controller_frequency_droop_c_function2__time = 0;
    HIL_OutAO(0x4064, 0.0f);
    HIL_OutAO(0x404e, 0.0f);
    HIL_OutAO(0x4054, 0.0f);
    HIL_OutAO(0x4093, 0.0f);
    HIL_OutAO(0x40b4, 0.0f);
    HIL_OutAO(0x402e, 0.0f);
    HIL_OutAO(0x402c, 0.0f);
    HIL_OutAO(0x4016, 0.0f);
    HIL_OutAO(0x401c, 0.0f);
    HIL_OutAO(0x4023, 0.0f);
    HIL_OutAO(0x4063, 0.0f);
    HIL_OutAO(0x4061, 0.0f);
    HIL_OutAO(0x404b, 0.0f);
    HIL_OutAO(0x4051, 0.0f);
    HIL_OutAO(0x4058, 0.0f);
    HIL_OutAO(0x402b, 0.0f);
    HIL_OutAO(0x4014, 0.0f);
    HIL_OutAO(0x4031, 0.0f);
    HIL_OutAO(0x401e, 0.0f);
    HIL_OutAO(0x4011, 0.0f);
    _ess1_controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_pid_controller4__integrator_state =  0.0;
    _ess1_controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_pid_controller4__filter_state =  0.0;
    HIL_OutAO(0x4060, 0.0f);
    HIL_OutAO(0x4049, 0.0f);
    HIL_OutAO(0x4066, 0.0f);
    HIL_OutAO(0x4053, 0.0f);
    HIL_OutAO(0x4046, 0.0f);
    _ess2_controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_pid_controller4__integrator_state =  0.0;
    _ess2_controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_pid_controller4__filter_state =  0.0;
    _pv1_pv_plant_control_grid_follow_delay__out = 0;
    _pv1_pv_plant_control_grid_follow_delay__counter = 0;
    HIL_OutAO(0x4083, 0.0f);
    _pv1_pv_plant_delay__out = 0;
    _pv1_pv_plant_delay__counter = 0;
    _pv2_pv_plant_control_grid_follow_delay__out = 0;
    _pv2_pv_plant_control_grid_follow_delay__counter = 0;
    HIL_OutAO(0x40a4, 0.0f);
    _pv2_pv_plant_delay__out = 0;
    _pv2_pv_plant_delay__counter = 0;
    _ess1_controller_pll_pll_rate_limiter1__first_step = 1;
    _ess1_controller_pll_pll_integrator__out = 0;
    _ess1_controller_pll_pll_integrator__in = 0;
    HIL_OutAO(0x4022, 0.0f);
    HIL_OutAO(0x4021, 0.0f);
    _ess2_controller_pll_pll_rate_limiter1__first_step = 1;
    _ess2_controller_pll_pll_integrator__out = 0;
    _ess2_controller_pll_pll_integrator__in = 0;
    HIL_OutAO(0x4057, 0.0f);
    HIL_OutAO(0x4056, 0.0f);
    _pv1_pv_plant_control_grid_follow_controlsignal_calculation_pi_d_integrator1__state = 0.0;
    _pv1_pv_plant_control_grid_follow_controlsignal_calculation_pi_d_integrator1__reset_state = 2;
    _pv1_pv_plant_control_grid_follow_controlsignal_calculation_pi_q_integrator1__state = 0.0;
    _pv1_pv_plant_control_grid_follow_controlsignal_calculation_pi_q_integrator1__reset_state = 2;
    _pv1_pv_plant_control_grid_follow_pi_vt_integrator1__state = 0.0;
    _pv1_pv_plant_control_grid_follow_pi_vt_integrator1__reset_state = 2;
    _pv2_pv_plant_control_grid_follow_controlsignal_calculation_pi_d_integrator1__state = 0.0;
    _pv2_pv_plant_control_grid_follow_controlsignal_calculation_pi_d_integrator1__reset_state = 2;
    _pv2_pv_plant_control_grid_follow_controlsignal_calculation_pi_q_integrator1__state = 0.0;
    _pv2_pv_plant_control_grid_follow_controlsignal_calculation_pi_q_integrator1__reset_state = 2;
    _pv2_pv_plant_control_grid_follow_pi_vt_integrator1__state = 0.0;
    _pv2_pv_plant_control_grid_follow_pi_vt_integrator1__reset_state = 2;
    for (_ess1_controller_pll_pll_lpf_lpf__i = 0; _ess1_controller_pll_pll_lpf_lpf__i < 2; _ess1_controller_pll_pll_lpf_lpf__i++) {
        _ess1_controller_pll_pll_lpf_lpf__states[_ess1_controller_pll_pll_lpf_lpf__i] = 38197202.23545778;
    }
    _ess1_controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_pid_controller3__integrator_state =  0.0;
    _ess1_controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_pid_controller3__filter_state =  0.0;
    for (_ess2_controller_pll_pll_lpf_lpf__i = 0; _ess2_controller_pll_pll_lpf_lpf__i < 2; _ess2_controller_pll_pll_lpf_lpf__i++) {
        _ess2_controller_pll_pll_lpf_lpf__states[_ess2_controller_pll_pll_lpf_lpf__i] = 38197202.23545778;
    }
    _ess2_controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_pid_controller3__integrator_state =  0.0;
    _ess2_controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_pid_controller3__filter_state =  0.0;
    HIL_OutAO(0x4020, 0.0f);
    HIL_OutAO(0x4055, 0.0f);
    _pcc_pcc_measurements_three_phase_pll1_rate_limiter1__first_step = 1;
    _pcc_pcc_measurements_three_phase_pll1_integrator__out = 0;
    _pcc_pcc_measurements_three_phase_pll1_integrator__in = 0;
    for (_pv1_pv_plant_control_pll_pll_abc_to_dq_lpf_d__i = 0; _pv1_pv_plant_control_pll_pll_abc_to_dq_lpf_d__i < 1; _pv1_pv_plant_control_pll_pll_abc_to_dq_lpf_d__i++) {
        _pv1_pv_plant_control_pll_pll_abc_to_dq_lpf_d__states[_pv1_pv_plant_control_pll_pll_abc_to_dq_lpf_d__i] = 0.0;
    }
    for (_pv1_pv_plant_control_pll_pll_abc_to_dq_lpf_q__i = 0; _pv1_pv_plant_control_pll_pll_abc_to_dq_lpf_q__i < 1; _pv1_pv_plant_control_pll_pll_abc_to_dq_lpf_q__i++) {
        _pv1_pv_plant_control_pll_pll_abc_to_dq_lpf_q__states[_pv1_pv_plant_control_pll_pll_abc_to_dq_lpf_q__i] = 0.0;
    }
    for (_pv2_pv_plant_control_pll_pll_abc_to_dq_lpf_d__i = 0; _pv2_pv_plant_control_pll_pll_abc_to_dq_lpf_d__i < 1; _pv2_pv_plant_control_pll_pll_abc_to_dq_lpf_d__i++) {
        _pv2_pv_plant_control_pll_pll_abc_to_dq_lpf_d__states[_pv2_pv_plant_control_pll_pll_abc_to_dq_lpf_d__i] = 0.0;
    }
    for (_pv2_pv_plant_control_pll_pll_abc_to_dq_lpf_q__i = 0; _pv2_pv_plant_control_pll_pll_abc_to_dq_lpf_q__i < 1; _pv2_pv_plant_control_pll_pll_abc_to_dq_lpf_q__i++) {
        _pv2_pv_plant_control_pll_pll_abc_to_dq_lpf_q__states[_pv2_pv_plant_control_pll_pll_abc_to_dq_lpf_q__i] = 0.0;
    }
    for (_pcc_pcc_measurements_three_phase_pll1_lpf_lpf__i = 0; _pcc_pcc_measurements_three_phase_pll1_lpf_lpf__i < 2; _pcc_pcc_measurements_three_phase_pll1_lpf_lpf__i++) {
        _pcc_pcc_measurements_three_phase_pll1_lpf_lpf__states[_pcc_pcc_measurements_three_phase_pll1_lpf_lpf__i] = 15278.880894183112;
    }
    HIL_OutAO(0x4078, 0.0f);
    _pv1_pv_plant_control_pll_pll_normalize__in1 = 0;
    _pv1_pv_plant_control_pll_pll_normalize__in2 = 0;
    _pv1_pv_plant_control_pll_pll_normalize__pk = 0;
    HIL_OutAO(0x4099, 0.0f);
    _pv2_pv_plant_control_pll_pll_normalize__in1 = 0;
    _pv2_pv_plant_control_pll_pll_normalize__in2 = 0;
    _pv2_pv_plant_control_pll_pll_normalize__pk = 0;
    HIL_OutAO(0x407e, 0.0f);
    HIL_OutAO(0x407f, 0.0f);
    HIL_OutAO(0x4087, 0.0f);
    HIL_OutAO(0x409f, 0.0f);
    HIL_OutAO(0x40a0, 0.0f);
    HIL_OutAO(0x40a8, 0.0f);
    HIL_OutAO(0x4080, 0.0f);
    HIL_OutAO(0x40a1, 0.0f);
    HIL_OutAO(0x4026, 0.0f);
    HIL_OutAO(0x4027, 0.0f);
    HIL_OutAO(0x405b, 0.0f);
    HIL_OutAO(0x405c, 0.0f);
    for (_pv1_pv_plant_control_grid_follow_power_meas_power_meas_dqpu_lpf_p__i = 0; _pv1_pv_plant_control_grid_follow_power_meas_power_meas_dqpu_lpf_p__i < 1; _pv1_pv_plant_control_grid_follow_power_meas_power_meas_dqpu_lpf_p__i++) {
        _pv1_pv_plant_control_grid_follow_power_meas_power_meas_dqpu_lpf_p__states[_pv1_pv_plant_control_grid_follow_power_meas_power_meas_dqpu_lpf_p__i] = 0.0;
    }
    for (_pv1_pv_plant_control_grid_follow_power_meas_power_meas_dqpu_lpf_q__i = 0; _pv1_pv_plant_control_grid_follow_power_meas_power_meas_dqpu_lpf_q__i < 1; _pv1_pv_plant_control_grid_follow_power_meas_power_meas_dqpu_lpf_q__i++) {
        _pv1_pv_plant_control_grid_follow_power_meas_power_meas_dqpu_lpf_q__states[_pv1_pv_plant_control_grid_follow_power_meas_power_meas_dqpu_lpf_q__i] = 0.0;
    }
    for (_pv1_pv_plant_control_grid_follow_power_meas1_power_meas_dqpu_lpf_p__i = 0; _pv1_pv_plant_control_grid_follow_power_meas1_power_meas_dqpu_lpf_p__i < 1; _pv1_pv_plant_control_grid_follow_power_meas1_power_meas_dqpu_lpf_p__i++) {
        _pv1_pv_plant_control_grid_follow_power_meas1_power_meas_dqpu_lpf_p__states[_pv1_pv_plant_control_grid_follow_power_meas1_power_meas_dqpu_lpf_p__i] = 0.0;
    }
    for (_pv1_pv_plant_control_grid_follow_power_meas1_power_meas_dqpu_lpf_q__i = 0; _pv1_pv_plant_control_grid_follow_power_meas1_power_meas_dqpu_lpf_q__i < 1; _pv1_pv_plant_control_grid_follow_power_meas1_power_meas_dqpu_lpf_q__i++) {
        _pv1_pv_plant_control_grid_follow_power_meas1_power_meas_dqpu_lpf_q__states[_pv1_pv_plant_control_grid_follow_power_meas1_power_meas_dqpu_lpf_q__i] = 0.0;
    }
    HIL_OutAO(0x4073, 0.0f);
    HIL_OutAO(0x4092, 0.0f);
    for (_pv2_pv_plant_control_grid_follow_power_meas_power_meas_dqpu_lpf_p__i = 0; _pv2_pv_plant_control_grid_follow_power_meas_power_meas_dqpu_lpf_p__i < 1; _pv2_pv_plant_control_grid_follow_power_meas_power_meas_dqpu_lpf_p__i++) {
        _pv2_pv_plant_control_grid_follow_power_meas_power_meas_dqpu_lpf_p__states[_pv2_pv_plant_control_grid_follow_power_meas_power_meas_dqpu_lpf_p__i] = 0.0;
    }
    for (_pv2_pv_plant_control_grid_follow_power_meas_power_meas_dqpu_lpf_q__i = 0; _pv2_pv_plant_control_grid_follow_power_meas_power_meas_dqpu_lpf_q__i < 1; _pv2_pv_plant_control_grid_follow_power_meas_power_meas_dqpu_lpf_q__i++) {
        _pv2_pv_plant_control_grid_follow_power_meas_power_meas_dqpu_lpf_q__states[_pv2_pv_plant_control_grid_follow_power_meas_power_meas_dqpu_lpf_q__i] = 0.0;
    }
    for (_pv2_pv_plant_control_grid_follow_power_meas1_power_meas_dqpu_lpf_p__i = 0; _pv2_pv_plant_control_grid_follow_power_meas1_power_meas_dqpu_lpf_p__i < 1; _pv2_pv_plant_control_grid_follow_power_meas1_power_meas_dqpu_lpf_p__i++) {
        _pv2_pv_plant_control_grid_follow_power_meas1_power_meas_dqpu_lpf_p__states[_pv2_pv_plant_control_grid_follow_power_meas1_power_meas_dqpu_lpf_p__i] = 0.0;
    }
    for (_pv2_pv_plant_control_grid_follow_power_meas1_power_meas_dqpu_lpf_q__i = 0; _pv2_pv_plant_control_grid_follow_power_meas1_power_meas_dqpu_lpf_q__i < 1; _pv2_pv_plant_control_grid_follow_power_meas1_power_meas_dqpu_lpf_q__i++) {
        _pv2_pv_plant_control_grid_follow_power_meas1_power_meas_dqpu_lpf_q__states[_pv2_pv_plant_control_grid_follow_power_meas1_power_meas_dqpu_lpf_q__i] = 0.0;
    }
    HIL_OutAO(0x4094, 0.0f);
    HIL_OutAO(0x40b3, 0.0f);
    _ess1_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__integrator_state =  0.0;
    _ess1_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__filter_state =  0.0;
    HIL_OutAO(0x4029, 0.0f);
    _ess1_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__integrator_state =  0.0;
    _ess1_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__filter_state =  0.0;
    HIL_OutAO(0x402a, 0.0f);
    _ess2_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__integrator_state =  0.0;
    _ess2_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__filter_state =  0.0;
    HIL_OutAO(0x405e, 0.0f);
    _ess2_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__integrator_state =  0.0;
    _ess2_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__filter_state =  0.0;
    HIL_OutAO(0x405f, 0.0f);
    HIL_OutAO(0x4076, 0.0f);
    HIL_OutAO(0x4075, 0.0f);
    HIL_OutAO(0x4097, 0.0f);
    HIL_OutAO(0x4096, 0.0f);
    _pv1_pv_plant_control_pll_pll_rate_limiter1__first_step = 1;
    _pv1_pv_plant_control_pll_pll_integrator__out = 0;
    _pv1_pv_plant_control_pll_pll_integrator__in = 0;
    _pv2_pv_plant_control_pll_pll_rate_limiter1__first_step = 1;
    _pv2_pv_plant_control_pll_pll_integrator__out = 0;
    _pv2_pv_plant_control_pll_pll_integrator__in = 0;
    for (_pv1_pv_plant_control_pll_pll_lpf_lpf__i = 0; _pv1_pv_plant_control_pll_pll_lpf_lpf__i < 2; _pv1_pv_plant_control_pll_pll_lpf_lpf__i++) {
        _pv1_pv_plant_control_pll_pll_lpf_lpf__states[_pv1_pv_plant_control_pll_pll_lpf_lpf__i] = 38197202.23545778;
    }
    for (_pv2_pv_plant_control_pll_pll_lpf_lpf__i = 0; _pv2_pv_plant_control_pll_pll_lpf_lpf__i < 2; _pv2_pv_plant_control_pll_pll_lpf_lpf__i++) {
        _pv2_pv_plant_control_pll_pll_lpf_lpf__states[_pv2_pv_plant_control_pll_pll_lpf_lpf__i] = 38197202.23545778;
    }
    _pv1_pv_plant_control_grid_follow_limit_pqref_priority_pqlim_pq_limiting_with_priority__Sref = 0;
    HIL_OutAO(0x407a, 0.0f);
    _pv2_pv_plant_control_grid_follow_limit_pqref_priority_pqlim_pq_limiting_with_priority__Sref = 0;
    HIL_OutAO(0x409b, 0.0f);
    HIL_OutAO(0x4024, 0.0f);
    HIL_OutAO(0x4025, 0.0f);
    HIL_OutAO(0x4059, 0.0f);
    HIL_OutAO(0x405a, 0.0f);
    _pv1_pv_plant_control_grid_follow_limit_pqref_p_rate_limit__first_step = 1;
    _pv1_pv_plant_control_grid_follow_limit_pqref_q_rate_limit__first_step = 1;
    _pv1_pv_plant_control_grid_follow_limit_pqref_s_rate_limit__first_step = 1;
    _pv2_pv_plant_control_grid_follow_limit_pqref_p_rate_limit__first_step = 1;
    _pv2_pv_plant_control_grid_follow_limit_pqref_q_rate_limit__first_step = 1;
    _pv2_pv_plant_control_grid_follow_limit_pqref_s_rate_limit__first_step = 1;
    _pv1_pv_plant_control_grid_follow_limit_pqref_lims_overpq_s_limiting_over_pq__S_PQref = 0;
    _pv2_pv_plant_control_grid_follow_limit_pqref_lims_overpq_s_limiting_over_pq__S_PQref = 0;
    HIL_OutAO(0x407d, 0.0f);
    HIL_OutAO(0x407c, 0.0f);
    HIL_OutAO(0x409e, 0.0f);
    HIL_OutAO(0x409d, 0.0f);
    _ess1_three_phase_inverter_igbt_leg1_pwm_modulator__update_mask = 1;
    HIL_OutInt32(0x2000080 + _ess1_three_phase_inverter_igbt_leg1_pwm_modulator__channels[0], 2500);// divide by 2 is already implemented in hw
    HIL_OutInt32(0x20000c0 + _ess1_three_phase_inverter_igbt_leg1_pwm_modulator__channels[0], 250);
    HIL_OutInt32(0x20001c0 + _ess1_three_phase_inverter_igbt_leg1_pwm_modulator__channels[0], 0);
    HIL_OutInt32(0x2000200 + _ess1_three_phase_inverter_igbt_leg1_pwm_modulator__channels[0], 0);
    HIL_OutInt32(0x2000240 + _ess1_three_phase_inverter_igbt_leg1_pwm_modulator__channels[0], 0);
    HIL_OutInt32(0x2000300 + _ess1_three_phase_inverter_igbt_leg1_pwm_modulator__channels[0], 1);
    HIL_OutInt32(0x2000140, _ess1_three_phase_inverter_igbt_leg1_pwm_modulator__update_mask);
    _ess1_three_phase_inverter_igbt_leg2_pwm_modulator__update_mask = 2;
    HIL_OutInt32(0x2000080 + _ess1_three_phase_inverter_igbt_leg2_pwm_modulator__channels[0], 2500);// divide by 2 is already implemented in hw
    HIL_OutInt32(0x20000c0 + _ess1_three_phase_inverter_igbt_leg2_pwm_modulator__channels[0], 250);
    HIL_OutInt32(0x20001c0 + _ess1_three_phase_inverter_igbt_leg2_pwm_modulator__channels[0], 0);
    HIL_OutInt32(0x2000200 + _ess1_three_phase_inverter_igbt_leg2_pwm_modulator__channels[0], 0);
    HIL_OutInt32(0x2000240 + _ess1_three_phase_inverter_igbt_leg2_pwm_modulator__channels[0], 0);
    HIL_OutInt32(0x2000300 + _ess1_three_phase_inverter_igbt_leg2_pwm_modulator__channels[0], 1);
    HIL_OutInt32(0x2000140, _ess1_three_phase_inverter_igbt_leg2_pwm_modulator__update_mask);
    _ess1_three_phase_inverter_igbt_leg3_pwm_modulator__update_mask = 4;
    HIL_OutInt32(0x2000080 + _ess1_three_phase_inverter_igbt_leg3_pwm_modulator__channels[0], 2500);// divide by 2 is already implemented in hw
    HIL_OutInt32(0x20000c0 + _ess1_three_phase_inverter_igbt_leg3_pwm_modulator__channels[0], 250);
    HIL_OutInt32(0x20001c0 + _ess1_three_phase_inverter_igbt_leg3_pwm_modulator__channels[0], 0);
    HIL_OutInt32(0x2000200 + _ess1_three_phase_inverter_igbt_leg3_pwm_modulator__channels[0], 0);
    HIL_OutInt32(0x2000240 + _ess1_three_phase_inverter_igbt_leg3_pwm_modulator__channels[0], 0);
    HIL_OutInt32(0x2000300 + _ess1_three_phase_inverter_igbt_leg3_pwm_modulator__channels[0], 1);
    HIL_OutInt32(0x2000140, _ess1_three_phase_inverter_igbt_leg3_pwm_modulator__update_mask);
    _ess2_three_phase_inverter_igbt_leg1_pwm_modulator__update_mask = 8;
    HIL_OutInt32(0x2000080 + _ess2_three_phase_inverter_igbt_leg1_pwm_modulator__channels[0], 2500);// divide by 2 is already implemented in hw
    HIL_OutInt32(0x20000c0 + _ess2_three_phase_inverter_igbt_leg1_pwm_modulator__channels[0], 250);
    HIL_OutInt32(0x20001c0 + _ess2_three_phase_inverter_igbt_leg1_pwm_modulator__channels[0], 0);
    HIL_OutInt32(0x2000200 + _ess2_three_phase_inverter_igbt_leg1_pwm_modulator__channels[0], 0);
    HIL_OutInt32(0x2000240 + _ess2_three_phase_inverter_igbt_leg1_pwm_modulator__channels[0], 0);
    HIL_OutInt32(0x2000300 + _ess2_three_phase_inverter_igbt_leg1_pwm_modulator__channels[0], 1);
    HIL_OutInt32(0x2000140, _ess2_three_phase_inverter_igbt_leg1_pwm_modulator__update_mask);
    _ess2_three_phase_inverter_igbt_leg2_pwm_modulator__update_mask = 16;
    HIL_OutInt32(0x2000080 + _ess2_three_phase_inverter_igbt_leg2_pwm_modulator__channels[0], 2500);// divide by 2 is already implemented in hw
    HIL_OutInt32(0x20000c0 + _ess2_three_phase_inverter_igbt_leg2_pwm_modulator__channels[0], 250);
    HIL_OutInt32(0x20001c0 + _ess2_three_phase_inverter_igbt_leg2_pwm_modulator__channels[0], 0);
    HIL_OutInt32(0x2000200 + _ess2_three_phase_inverter_igbt_leg2_pwm_modulator__channels[0], 0);
    HIL_OutInt32(0x2000240 + _ess2_three_phase_inverter_igbt_leg2_pwm_modulator__channels[0], 0);
    HIL_OutInt32(0x2000300 + _ess2_three_phase_inverter_igbt_leg2_pwm_modulator__channels[0], 1);
    HIL_OutInt32(0x2000140, _ess2_three_phase_inverter_igbt_leg2_pwm_modulator__update_mask);
    _ess2_three_phase_inverter_igbt_leg3_pwm_modulator__update_mask = 32;
    HIL_OutInt32(0x2000080 + _ess2_three_phase_inverter_igbt_leg3_pwm_modulator__channels[0], 2500);// divide by 2 is already implemented in hw
    HIL_OutInt32(0x20000c0 + _ess2_three_phase_inverter_igbt_leg3_pwm_modulator__channels[0], 250);
    HIL_OutInt32(0x20001c0 + _ess2_three_phase_inverter_igbt_leg3_pwm_modulator__channels[0], 0);
    HIL_OutInt32(0x2000200 + _ess2_three_phase_inverter_igbt_leg3_pwm_modulator__channels[0], 0);
    HIL_OutInt32(0x2000240 + _ess2_three_phase_inverter_igbt_leg3_pwm_modulator__channels[0], 0);
    HIL_OutInt32(0x2000300 + _ess2_three_phase_inverter_igbt_leg3_pwm_modulator__channels[0], 1);
    HIL_OutInt32(0x2000140, _ess2_three_phase_inverter_igbt_leg3_pwm_modulator__update_mask);
    HIL_OutAO(0x4091, 0.0f);
    HIL_OutAO(0x4090, 0.0f);
    HIL_OutAO(0x40b2, 0.0f);
    HIL_OutAO(0x40b1, 0.0f);
    HIL_OutAO(0x4089, 0.0f);
    HIL_OutAO(0x408a, 0.0f);
    HIL_OutAO(0x408b, 0.0f);
    HIL_OutAO(0x40aa, 0.0f);
    HIL_OutAO(0x40ab, 0.0f);
    HIL_OutAO(0x40ac, 0.0f);
    HIL_OutAO(0x408f, 0.0f);
    HIL_OutAO(0x40b0, 0.0f);
    _pv1_pv_plant_3ph_inverter_1_igbt_leg1_pwm_modulator__update_mask = 64;
    HIL_OutInt32(0x2000080 + _pv1_pv_plant_3ph_inverter_1_igbt_leg1_pwm_modulator__channels[0], 2500);// divide by 2 is already implemented in hw
    HIL_OutInt32(0x20000c0 + _pv1_pv_plant_3ph_inverter_1_igbt_leg1_pwm_modulator__channels[0], 50);
    HIL_OutInt32(0x20001c0 + _pv1_pv_plant_3ph_inverter_1_igbt_leg1_pwm_modulator__channels[0], 0);
    HIL_OutInt32(0x2000200 + _pv1_pv_plant_3ph_inverter_1_igbt_leg1_pwm_modulator__channels[0], 0);
    HIL_OutInt32(0x2000240 + _pv1_pv_plant_3ph_inverter_1_igbt_leg1_pwm_modulator__channels[0], 0);
    HIL_OutInt32(0x2000300 + _pv1_pv_plant_3ph_inverter_1_igbt_leg1_pwm_modulator__channels[0], 1);
    HIL_OutInt32(0x2000140, _pv1_pv_plant_3ph_inverter_1_igbt_leg1_pwm_modulator__update_mask);
    HIL_OutAO(0x408c, 0.0f);
    _pv1_pv_plant_3ph_inverter_1_igbt_leg2_pwm_modulator__update_mask = 128;
    HIL_OutInt32(0x2000080 + _pv1_pv_plant_3ph_inverter_1_igbt_leg2_pwm_modulator__channels[0], 2500);// divide by 2 is already implemented in hw
    HIL_OutInt32(0x20000c0 + _pv1_pv_plant_3ph_inverter_1_igbt_leg2_pwm_modulator__channels[0], 50);
    HIL_OutInt32(0x20001c0 + _pv1_pv_plant_3ph_inverter_1_igbt_leg2_pwm_modulator__channels[0], 0);
    HIL_OutInt32(0x2000200 + _pv1_pv_plant_3ph_inverter_1_igbt_leg2_pwm_modulator__channels[0], 0);
    HIL_OutInt32(0x2000240 + _pv1_pv_plant_3ph_inverter_1_igbt_leg2_pwm_modulator__channels[0], 0);
    HIL_OutInt32(0x2000300 + _pv1_pv_plant_3ph_inverter_1_igbt_leg2_pwm_modulator__channels[0], 1);
    HIL_OutInt32(0x2000140, _pv1_pv_plant_3ph_inverter_1_igbt_leg2_pwm_modulator__update_mask);
    HIL_OutAO(0x408d, 0.0f);
    _pv1_pv_plant_3ph_inverter_1_igbt_leg3_pwm_modulator__update_mask = 256;
    HIL_OutInt32(0x2000080 + _pv1_pv_plant_3ph_inverter_1_igbt_leg3_pwm_modulator__channels[0], 2500);// divide by 2 is already implemented in hw
    HIL_OutInt32(0x20000c0 + _pv1_pv_plant_3ph_inverter_1_igbt_leg3_pwm_modulator__channels[0], 50);
    HIL_OutInt32(0x20001c0 + _pv1_pv_plant_3ph_inverter_1_igbt_leg3_pwm_modulator__channels[0], 0);
    HIL_OutInt32(0x2000200 + _pv1_pv_plant_3ph_inverter_1_igbt_leg3_pwm_modulator__channels[0], 0);
    HIL_OutInt32(0x2000240 + _pv1_pv_plant_3ph_inverter_1_igbt_leg3_pwm_modulator__channels[0], 0);
    HIL_OutInt32(0x2000300 + _pv1_pv_plant_3ph_inverter_1_igbt_leg3_pwm_modulator__channels[0], 1);
    HIL_OutInt32(0x2000140, _pv1_pv_plant_3ph_inverter_1_igbt_leg3_pwm_modulator__update_mask);
    HIL_OutAO(0x408e, 0.0f);
    _pv2_pv_plant_3ph_inverter_1_igbt_leg1_pwm_modulator__update_mask = 512;
    HIL_OutInt32(0x2000080 + _pv2_pv_plant_3ph_inverter_1_igbt_leg1_pwm_modulator__channels[0], 2500);// divide by 2 is already implemented in hw
    HIL_OutInt32(0x20000c0 + _pv2_pv_plant_3ph_inverter_1_igbt_leg1_pwm_modulator__channels[0], 50);
    HIL_OutInt32(0x20001c0 + _pv2_pv_plant_3ph_inverter_1_igbt_leg1_pwm_modulator__channels[0], 0);
    HIL_OutInt32(0x2000200 + _pv2_pv_plant_3ph_inverter_1_igbt_leg1_pwm_modulator__channels[0], 0);
    HIL_OutInt32(0x2000240 + _pv2_pv_plant_3ph_inverter_1_igbt_leg1_pwm_modulator__channels[0], 0);
    HIL_OutInt32(0x2000300 + _pv2_pv_plant_3ph_inverter_1_igbt_leg1_pwm_modulator__channels[0], 1);
    HIL_OutInt32(0x2000140, _pv2_pv_plant_3ph_inverter_1_igbt_leg1_pwm_modulator__update_mask);
    HIL_OutAO(0x40ad, 0.0f);
    _pv2_pv_plant_3ph_inverter_1_igbt_leg2_pwm_modulator__update_mask = 1024;
    HIL_OutInt32(0x2000080 + _pv2_pv_plant_3ph_inverter_1_igbt_leg2_pwm_modulator__channels[0], 2500);// divide by 2 is already implemented in hw
    HIL_OutInt32(0x20000c0 + _pv2_pv_plant_3ph_inverter_1_igbt_leg2_pwm_modulator__channels[0], 50);
    HIL_OutInt32(0x20001c0 + _pv2_pv_plant_3ph_inverter_1_igbt_leg2_pwm_modulator__channels[0], 0);
    HIL_OutInt32(0x2000200 + _pv2_pv_plant_3ph_inverter_1_igbt_leg2_pwm_modulator__channels[0], 0);
    HIL_OutInt32(0x2000240 + _pv2_pv_plant_3ph_inverter_1_igbt_leg2_pwm_modulator__channels[0], 0);
    HIL_OutInt32(0x2000300 + _pv2_pv_plant_3ph_inverter_1_igbt_leg2_pwm_modulator__channels[0], 1);
    HIL_OutInt32(0x2000140, _pv2_pv_plant_3ph_inverter_1_igbt_leg2_pwm_modulator__update_mask);
    HIL_OutAO(0x40ae, 0.0f);
    _pv2_pv_plant_3ph_inverter_1_igbt_leg3_pwm_modulator__update_mask = 2048;
    HIL_OutInt32(0x2000080 + _pv2_pv_plant_3ph_inverter_1_igbt_leg3_pwm_modulator__channels[0], 2500);// divide by 2 is already implemented in hw
    HIL_OutInt32(0x20000c0 + _pv2_pv_plant_3ph_inverter_1_igbt_leg3_pwm_modulator__channels[0], 50);
    HIL_OutInt32(0x20001c0 + _pv2_pv_plant_3ph_inverter_1_igbt_leg3_pwm_modulator__channels[0], 0);
    HIL_OutInt32(0x2000200 + _pv2_pv_plant_3ph_inverter_1_igbt_leg3_pwm_modulator__channels[0], 0);
    HIL_OutInt32(0x2000240 + _pv2_pv_plant_3ph_inverter_1_igbt_leg3_pwm_modulator__channels[0], 0);
    HIL_OutInt32(0x2000300 + _pv2_pv_plant_3ph_inverter_1_igbt_leg3_pwm_modulator__channels[0], 1);
    HIL_OutInt32(0x2000140, _pv2_pv_plant_3ph_inverter_1_igbt_leg3_pwm_modulator__update_mask);
    HIL_OutAO(0x40af, 0.0f);
    //@cmp.init.block.end
}

void ReInit_sp_scope_user_sp_cpu_dev0() {
    // initialise SP Scope buffer pointer
}

void init_fmu_objects_dev0(void) {
    return;
}


void terminate_fmu_objects_dev0(void) {
    return;
}

// generated using template: common_timer_counter_handler.template-------------------------

/*****************************************************************************************/
/**
* This function is the handler which performs processing for the timer counter.
* It is called from an interrupt context such that the amount of processing
* performed should be minimized.  It is called when the timer counter expires
* if interrupts are enabled.
*
*
* @param    None
*
* @return   None
*
* @note     None
*
*****************************************************************************************/

void TimerCounterHandler_0_user_sp_cpu_dev0() {
#if DEBUG_MODE
    printf("\n\rTimerCounterHandler_0");
#endif
    //////////////////////////////////////////////////////////////////////////
    // Output block
    //////////////////////////////////////////////////////////////////////////
    //@cmp.out.block.start
    // Generated from the component: ESS1.BE1-25A Synchronizer.Constant6
    // Generated from the component: ESS1.BE1-25A Synchronizer.Constant7
    // Generated from the component: ESS1.BE1-25A Synchronizer.Constant9
    // Generated from the component: ESS1.BE1-25A Synchronizer.Unit Delay2
    _ess1_be1_25a_synchronizer_unit_delay2__out = _ess1_be1_25a_synchronizer_unit_delay2__state;
    // Generated from the component: ESS1.Battery.Constant1
    // Generated from the component: ESS1.Battery.Constant2
    // Generated from the component: ESS1.Battery.Constant3
    // Generated from the component: ESS1.Battery.Constant4
    // Generated from the component: ESS1.Battery.Constant5
    // Generated from the component: ESS1.Battery.Constant6
    // Generated from the component: ESS1.Battery.Constant7
    // Generated from the component: ESS1.Battery.Constant8
    // Generated from the component: ESS1.Battery.Rate Transition1.Input
    _ess1_battery_rate_transition1_output__out = _ess1_battery_lpf_dc__out;
    // Generated from the component: ESS1.Battery.Rate Transition3.Output
    // Generated from the component: ESS1.Battery.Rate Transition6.Output
    // Generated from the component: ESS1.Battery.charge
    _ess1_battery_charge__out = XIo_InInt32(0x55000104);
    // Generated from the component: ESS1.CONNECT
    _ess1_connect__out = XIo_InInt32(0x55000108);
    // Generated from the component: ESS1.Constant2
    // Generated from the component: ESS1.Controller.Constant1
    // Generated from the component: ESS1.Controller.Frequency droop.Clock1
    _ess1_controller_frequency_droop_clock1__out = _ess1_controller_frequency_droop_clock1__state;
    // Generated from the component: ESS1.Controller.Frequency droop.Clock2
    _ess1_controller_frequency_droop_clock2__out = _ess1_controller_frequency_droop_clock2__state;
    // Generated from the component: ESS1.Controller.Frequency droop.Rate Transition12.Output
    // Generated from the component: ESS1.Controller.Integrator2
    _ess1_controller_integrator2__out = _ess1_controller_integrator2__state;
    // Generated from the component: ESS1.Controller.Integrator3
    _ess1_controller_integrator3__out = _ess1_controller_integrator3__state;
    // Generated from the component: ESS1.Controller.Outer Voltage Loop + Inner Current Loop.GFM_mode
    _ess1_controller_outer_voltage_loop___inner_current_loop_gfm_mode__out = XIo_InInt32(0x5500010c);
    // Generated from the component: ESS1.Controller.Outer Voltage Loop + Inner Current Loop.dq to abc.o_ref
    // Generated from the component: ESS1.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Limit3
    if (_ess1_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__out < 10.0) {
        _ess1_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_limit3__out = 10.0;
    } else {
        _ess1_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_limit3__out = _ess1_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__out;
    }
    // Generated from the component: ESS1.Controller.Outer Voltage Loop + Inner Current Loop.outer power loop.Limit_zero
    // Generated from the component: ESS1.Controller.Outer Voltage Loop + Inner Current Loop.outer power loop.one
    // Generated from the component: ESS1.Controller.PLL.PLL.PID.Integrator1
    _ess1_controller_pll_pll_pid_integrator1__out = _ess1_controller_pll_pll_pid_integrator1__state;
    // Generated from the component: ESS1.Controller.PLL.PLL.PID.Integrator2
    _ess1_controller_pll_pll_pid_integrator2__out = _ess1_controller_pll_pll_pid_integrator2__state;
    // Generated from the component: ESS1.Controller.PLL.PLL.Unit Delay1
    _ess1_controller_pll_pll_unit_delay1__out = _ess1_controller_pll_pll_unit_delay1__state;
    // Generated from the component: ESS1.Controller.PLL.PLL.to_Hz
    _ess1_controller_pll_pll_to_hz__out = 0.15915494309189535 * _ess1_controller_pll_pll_lpf_lpf__out;
    // Generated from the component: ESS1.Controller.Voltage droop.Clock1
    _ess1_controller_voltage_droop_clock1__out = _ess1_controller_voltage_droop_clock1__state;
    // Generated from the component: ESS1.Controller.Voltage droop.Clock2
    _ess1_controller_voltage_droop_clock2__out = _ess1_controller_voltage_droop_clock2__state;
    // Generated from the component: ESS1.Controller.Voltage droop.Rate Transition13.Output
    // Generated from the component: ESS1.Ea1.Va1
    _ess1_ea1_va1__out = (HIL_InFloat(0xc80000 + 0x207));
    // Generated from the component: ESS1.Eb1.Va1
    _ess1_eb1_va1__out = (HIL_InFloat(0xc80000 + 0x208));
    // Generated from the component: ESS1.Ec1.Va1
    _ess1_ec1_va1__out = (HIL_InFloat(0xc80000 + 0x209));
    // Generated from the component: ESS1.Ia1.Ia1
    _ess1_ia1_ia1__out = (HIL_InFloat(0xc80000 + 0x211));
    // Generated from the component: ESS1.Ib1.Ia1
    _ess1_ib1_ia1__out = (HIL_InFloat(0xc80000 + 0x212));
    // Generated from the component: ESS1.Ic1.Ia1
    _ess1_ic1_ia1__out = (HIL_InFloat(0xc80000 + 0x213));
    // Generated from the component: ESS1.Idc.Ia1
    _ess1_idc_ia1__out = (HIL_InFloat(0xc80000 + 0x214));
    // Generated from the component: ESS1.P_ref_ess
    _ess1_p_ref_ess__out = XIo_InFloat(0x55000114);
    // Generated from the component: ESS1.Power_Meas.Gain4
    _ess1_power_meas_gain4__out = 20000.0 * _ess1_power_meas_power_meas_dqpu_lpf_p__out;
    // Generated from the component: ESS1.Power_Meas.Gain5
    _ess1_power_meas_gain5__out = 20000.0 * _ess1_power_meas_power_meas_dqpu_lpf_q__out;
    // Generated from the component: ESS1.Power_Meas.Power_Meas_DQpu.S_and_pf
    _ess1_power_meas_power_meas_dqpu_s_and_pf__P = _ess1_power_meas_power_meas_dqpu_lpf_p__out;
    _ess1_power_meas_power_meas_dqpu_s_and_pf__Q = _ess1_power_meas_power_meas_dqpu_lpf_q__out;
    _ess1_power_meas_power_meas_dqpu_s_and_pf__S = sqrt(_ess1_power_meas_power_meas_dqpu_s_and_pf__P * _ess1_power_meas_power_meas_dqpu_s_and_pf__P + _ess1_power_meas_power_meas_dqpu_s_and_pf__Q * _ess1_power_meas_power_meas_dqpu_s_and_pf__Q);
    if (_ess1_power_meas_power_meas_dqpu_s_and_pf__S > 0) {
        _ess1_power_meas_power_meas_dqpu_s_and_pf__pf = _ess1_power_meas_power_meas_dqpu_s_and_pf__P / _ess1_power_meas_power_meas_dqpu_s_and_pf__S;
    }
    else {
        _ess1_power_meas_power_meas_dqpu_s_and_pf__pf = 0;
    }
    // Generated from the component: ESS1.Q_ref_ess
    _ess1_q_ref_ess__out = XIo_InFloat(0x55000118);
    // Generated from the component: ESS1.Rate Transition1.Output
    // Generated from the component: ESS1.Rate Transition6.Output
    // Generated from the component: ESS1.Rate Transition7.Output
    // Generated from the component: ESS1.Va2.Va1
    _ess1_va2_va1__out = (HIL_InFloat(0xc80000 + 0x20a));
    // Generated from the component: ESS1.VaG.Va1
    _ess1_vag_va1__out = (HIL_InFloat(0xc80000 + 0x20b));
    // Generated from the component: ESS1.Vb2.Va1
    _ess1_vb2_va1__out = (HIL_InFloat(0xc80000 + 0x20c));
    // Generated from the component: ESS1.VbG.Va1
    _ess1_vbg_va1__out = (HIL_InFloat(0xc80000 + 0x20d));
    // Generated from the component: ESS1.Vc2.Va1
    _ess1_vc2_va1__out = (HIL_InFloat(0xc80000 + 0x20e));
    // Generated from the component: ESS1.VcG.Va1
    _ess1_vcg_va1__out = (HIL_InFloat(0xc80000 + 0x20f));
    // Generated from the component: ESS1.Xi_a1.Ia1
    _ess1_xi_a1_ia1__out = (HIL_InFloat(0xc80000 + 0x215));
    // Generated from the component: ESS1.Xi_b1.Ia1
    _ess1_xi_b1_ia1__out = (HIL_InFloat(0xc80000 + 0x216));
    // Generated from the component: ESS1.Xi_c1.Ia1
    _ess1_xi_c1_ia1__out = (HIL_InFloat(0xc80000 + 0x217));
    // Generated from the component: ESS2.BE1-25A Synchronizer.Constant6
    // Generated from the component: ESS2.BE1-25A Synchronizer.Constant7
    // Generated from the component: ESS2.BE1-25A Synchronizer.Constant9
    // Generated from the component: ESS2.BE1-25A Synchronizer.Unit Delay2
    _ess2_be1_25a_synchronizer_unit_delay2__out = _ess2_be1_25a_synchronizer_unit_delay2__state;
    // Generated from the component: ESS2.Battery.Constant1
    // Generated from the component: ESS2.Battery.Constant2
    // Generated from the component: ESS2.Battery.Constant3
    // Generated from the component: ESS2.Battery.Constant4
    // Generated from the component: ESS2.Battery.Constant5
    // Generated from the component: ESS2.Battery.Constant6
    // Generated from the component: ESS2.Battery.Constant7
    // Generated from the component: ESS2.Battery.Constant8
    // Generated from the component: ESS2.Battery.Rate Transition1.Input
    _ess2_battery_rate_transition1_output__out = _ess2_battery_lpf_dc__out;
    // Generated from the component: ESS2.Battery.Rate Transition3.Output
    // Generated from the component: ESS2.Battery.Rate Transition6.Output
    // Generated from the component: ESS2.Battery.charge
    _ess2_battery_charge__out = XIo_InInt32(0x55000120);
    // Generated from the component: ESS2.CONNECT
    _ess2_connect__out = XIo_InInt32(0x55000124);
    // Generated from the component: ESS2.Constant2
    // Generated from the component: ESS2.Controller.Constant1
    // Generated from the component: ESS2.Controller.Frequency droop.Clock1
    _ess2_controller_frequency_droop_clock1__out = _ess2_controller_frequency_droop_clock1__state;
    // Generated from the component: ESS2.Controller.Frequency droop.Clock2
    _ess2_controller_frequency_droop_clock2__out = _ess2_controller_frequency_droop_clock2__state;
    // Generated from the component: ESS2.Controller.Frequency droop.Rate Transition12.Output
    // Generated from the component: ESS2.Controller.Integrator2
    _ess2_controller_integrator2__out = _ess2_controller_integrator2__state;
    // Generated from the component: ESS2.Controller.Integrator3
    _ess2_controller_integrator3__out = _ess2_controller_integrator3__state;
    // Generated from the component: ESS2.Controller.Outer Voltage Loop + Inner Current Loop.GFM_mode
    _ess2_controller_outer_voltage_loop___inner_current_loop_gfm_mode__out = XIo_InInt32(0x55000128);
    // Generated from the component: ESS2.Controller.Outer Voltage Loop + Inner Current Loop.dq to abc.o_ref
    // Generated from the component: ESS2.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Limit3
    if (_ess2_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__out < 10.0) {
        _ess2_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_limit3__out = 10.0;
    } else {
        _ess2_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_limit3__out = _ess2_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__out;
    }
    // Generated from the component: ESS2.Controller.Outer Voltage Loop + Inner Current Loop.outer power loop.Limit_zero
    // Generated from the component: ESS2.Controller.Outer Voltage Loop + Inner Current Loop.outer power loop.one
    // Generated from the component: ESS2.Controller.PLL.PLL.PID.Integrator1
    _ess2_controller_pll_pll_pid_integrator1__out = _ess2_controller_pll_pll_pid_integrator1__state;
    // Generated from the component: ESS2.Controller.PLL.PLL.PID.Integrator2
    _ess2_controller_pll_pll_pid_integrator2__out = _ess2_controller_pll_pll_pid_integrator2__state;
    // Generated from the component: ESS2.Controller.PLL.PLL.Unit Delay1
    _ess2_controller_pll_pll_unit_delay1__out = _ess2_controller_pll_pll_unit_delay1__state;
    // Generated from the component: ESS2.Controller.PLL.PLL.to_Hz
    _ess2_controller_pll_pll_to_hz__out = 0.15915494309189535 * _ess2_controller_pll_pll_lpf_lpf__out;
    // Generated from the component: ESS2.Controller.Voltage droop.Clock1
    _ess2_controller_voltage_droop_clock1__out = _ess2_controller_voltage_droop_clock1__state;
    // Generated from the component: ESS2.Controller.Voltage droop.Clock2
    _ess2_controller_voltage_droop_clock2__out = _ess2_controller_voltage_droop_clock2__state;
    // Generated from the component: ESS2.Controller.Voltage droop.Rate Transition13.Output
    // Generated from the component: ESS2.Ea1.Va1
    _ess2_ea1_va1__out = (HIL_InFloat(0xc80000 + 0x807));
    // Generated from the component: ESS2.Eb1.Va1
    _ess2_eb1_va1__out = (HIL_InFloat(0xc80000 + 0x808));
    // Generated from the component: ESS2.Ec1.Va1
    _ess2_ec1_va1__out = (HIL_InFloat(0xc80000 + 0x809));
    // Generated from the component: ESS2.Ia1.Ia1
    _ess2_ia1_ia1__out = (HIL_InFloat(0xc80000 + 0x811));
    // Generated from the component: ESS2.Ib1.Ia1
    _ess2_ib1_ia1__out = (HIL_InFloat(0xc80000 + 0x812));
    // Generated from the component: ESS2.Ic1.Ia1
    _ess2_ic1_ia1__out = (HIL_InFloat(0xc80000 + 0x813));
    // Generated from the component: ESS2.Idc.Ia1
    _ess2_idc_ia1__out = (HIL_InFloat(0xc80000 + 0x814));
    // Generated from the component: ESS2.P_ref_ess
    _ess2_p_ref_ess__out = XIo_InFloat(0x55000130);
    // Generated from the component: ESS2.Power_Meas.Gain4
    _ess2_power_meas_gain4__out = 20000.0 * _ess2_power_meas_power_meas_dqpu_lpf_p__out;
    // Generated from the component: ESS2.Power_Meas.Gain5
    _ess2_power_meas_gain5__out = 20000.0 * _ess2_power_meas_power_meas_dqpu_lpf_q__out;
    // Generated from the component: ESS2.Power_Meas.Power_Meas_DQpu.S_and_pf
    _ess2_power_meas_power_meas_dqpu_s_and_pf__P = _ess2_power_meas_power_meas_dqpu_lpf_p__out;
    _ess2_power_meas_power_meas_dqpu_s_and_pf__Q = _ess2_power_meas_power_meas_dqpu_lpf_q__out;
    _ess2_power_meas_power_meas_dqpu_s_and_pf__S = sqrt(_ess2_power_meas_power_meas_dqpu_s_and_pf__P * _ess2_power_meas_power_meas_dqpu_s_and_pf__P + _ess2_power_meas_power_meas_dqpu_s_and_pf__Q * _ess2_power_meas_power_meas_dqpu_s_and_pf__Q);
    if (_ess2_power_meas_power_meas_dqpu_s_and_pf__S > 0) {
        _ess2_power_meas_power_meas_dqpu_s_and_pf__pf = _ess2_power_meas_power_meas_dqpu_s_and_pf__P / _ess2_power_meas_power_meas_dqpu_s_and_pf__S;
    }
    else {
        _ess2_power_meas_power_meas_dqpu_s_and_pf__pf = 0;
    }
    // Generated from the component: ESS2.Q_ref_ess
    _ess2_q_ref_ess__out = XIo_InFloat(0x55000134);
    // Generated from the component: ESS2.Rate Transition1.Output
    // Generated from the component: ESS2.Rate Transition6.Output
    // Generated from the component: ESS2.Rate Transition7.Output
    // Generated from the component: ESS2.Va2.Va1
    _ess2_va2_va1__out = (HIL_InFloat(0xc80000 + 0x80a));
    // Generated from the component: ESS2.VaG.Va1
    _ess2_vag_va1__out = (HIL_InFloat(0xc80000 + 0x80b));
    // Generated from the component: ESS2.Vb2.Va1
    _ess2_vb2_va1__out = (HIL_InFloat(0xc80000 + 0x80c));
    // Generated from the component: ESS2.VbG.Va1
    _ess2_vbg_va1__out = (HIL_InFloat(0xc80000 + 0x80d));
    // Generated from the component: ESS2.Vc2.Va1
    _ess2_vc2_va1__out = (HIL_InFloat(0xc80000 + 0x80e));
    // Generated from the component: ESS2.VcG.Va1
    _ess2_vcg_va1__out = (HIL_InFloat(0xc80000 + 0x80f));
    // Generated from the component: ESS2.Xi_a1.Ia1
    _ess2_xi_a1_ia1__out = (HIL_InFloat(0xc80000 + 0x815));
    // Generated from the component: ESS2.Xi_b1.Ia1
    _ess2_xi_b1_ia1__out = (HIL_InFloat(0xc80000 + 0x816));
    // Generated from the component: ESS2.Xi_c1.Ia1
    _ess2_xi_c1_ia1__out = (HIL_InFloat(0xc80000 + 0x817));
    // Generated from the component: PV1.Constant1
    // Generated from the component: PV1.Constant2
    // Generated from the component: PV1.PV Plant.Control.Grid_follow.Constant1
    // Generated from the component: PV1.PV Plant.Control.Grid_follow.Constant2
    // Generated from the component: PV1.PV Plant.Control.Grid_follow.Constant3
    // Generated from the component: PV1.PV Plant.Control.Grid_follow.ControlSignal_Calculation.Damp
    // Generated from the component: PV1.PV Plant.Control.Grid_follow.ControlSignal_Calculation.Limit3
    if (_pv1_pv_plant_control_grid_follow_controlsignal_calculation_lpf_dc__out < 0.01) {
        _pv1_pv_plant_control_grid_follow_controlsignal_calculation_limit3__out = 0.01;
    } else {
        _pv1_pv_plant_control_grid_follow_controlsignal_calculation_limit3__out = _pv1_pv_plant_control_grid_follow_controlsignal_calculation_lpf_dc__out;
    }
    // Generated from the component: PV1.PV Plant.Control.Grid_follow.Edge Detection1.Unit Delay1
    _pv1_pv_plant_control_grid_follow_edge_detection1_unit_delay1__out = _pv1_pv_plant_control_grid_follow_edge_detection1_unit_delay1__state;
    // Generated from the component: PV1.PV Plant.Control.Grid_follow.Limit_PQref.Unit Delay1
    _pv1_pv_plant_control_grid_follow_limit_pqref_unit_delay1__out = _pv1_pv_plant_control_grid_follow_limit_pqref_unit_delay1__state;
    // Generated from the component: PV1.PV Plant.Control.Grid_follow.Limit_PQref.Unit Delay2
    _pv1_pv_plant_control_grid_follow_limit_pqref_unit_delay2__out = _pv1_pv_plant_control_grid_follow_limit_pqref_unit_delay2__state;
    // Generated from the component: PV1.PV Plant.Control.Grid_follow.PV_Area_m2
    // Generated from the component: PV1.PV Plant.Control.Grid_follow.Power_Meas.Gain4
    _pv1_pv_plant_control_grid_follow_power_meas_gain4__out = 10000.0 * _pv1_pv_plant_control_grid_follow_power_meas_power_meas_dqpu_lpf_p__out;
    // Generated from the component: PV1.PV Plant.Control.Grid_follow.Power_Meas.Gain5
    _pv1_pv_plant_control_grid_follow_power_meas_gain5__out = 10000.0 * _pv1_pv_plant_control_grid_follow_power_meas_power_meas_dqpu_lpf_q__out;
    // Generated from the component: PV1.PV Plant.Control.Grid_follow.Power_Meas.Power_Meas_DQpu.S_and_pf
    _pv1_pv_plant_control_grid_follow_power_meas_power_meas_dqpu_s_and_pf__P = _pv1_pv_plant_control_grid_follow_power_meas_power_meas_dqpu_lpf_p__out;
    _pv1_pv_plant_control_grid_follow_power_meas_power_meas_dqpu_s_and_pf__Q = _pv1_pv_plant_control_grid_follow_power_meas_power_meas_dqpu_lpf_q__out;
    _pv1_pv_plant_control_grid_follow_power_meas_power_meas_dqpu_s_and_pf__S = sqrt(_pv1_pv_plant_control_grid_follow_power_meas_power_meas_dqpu_s_and_pf__P * _pv1_pv_plant_control_grid_follow_power_meas_power_meas_dqpu_s_and_pf__P + _pv1_pv_plant_control_grid_follow_power_meas_power_meas_dqpu_s_and_pf__Q * _pv1_pv_plant_control_grid_follow_power_meas_power_meas_dqpu_s_and_pf__Q);
    if (_pv1_pv_plant_control_grid_follow_power_meas_power_meas_dqpu_s_and_pf__S > 0) {
        _pv1_pv_plant_control_grid_follow_power_meas_power_meas_dqpu_s_and_pf__pf = _pv1_pv_plant_control_grid_follow_power_meas_power_meas_dqpu_s_and_pf__P / _pv1_pv_plant_control_grid_follow_power_meas_power_meas_dqpu_s_and_pf__S;
    }
    else {
        _pv1_pv_plant_control_grid_follow_power_meas_power_meas_dqpu_s_and_pf__pf = 0;
    }
    // Generated from the component: PV1.PV Plant.Control.Grid_follow.Power_Meas1.Gain4
    _pv1_pv_plant_control_grid_follow_power_meas1_gain4__out = 10000.0 * _pv1_pv_plant_control_grid_follow_power_meas1_power_meas_dqpu_lpf_p__out;
    // Generated from the component: PV1.PV Plant.Control.Grid_follow.Power_Meas1.Gain5
    _pv1_pv_plant_control_grid_follow_power_meas1_gain5__out = 10000.0 * _pv1_pv_plant_control_grid_follow_power_meas1_power_meas_dqpu_lpf_q__out;
    // Generated from the component: PV1.PV Plant.Control.Grid_follow.Power_Meas1.Power_Meas_DQpu.S_and_pf
    _pv1_pv_plant_control_grid_follow_power_meas1_power_meas_dqpu_s_and_pf__P = _pv1_pv_plant_control_grid_follow_power_meas1_power_meas_dqpu_lpf_p__out;
    _pv1_pv_plant_control_grid_follow_power_meas1_power_meas_dqpu_s_and_pf__Q = _pv1_pv_plant_control_grid_follow_power_meas1_power_meas_dqpu_lpf_q__out;
    _pv1_pv_plant_control_grid_follow_power_meas1_power_meas_dqpu_s_and_pf__S = sqrt(_pv1_pv_plant_control_grid_follow_power_meas1_power_meas_dqpu_s_and_pf__P * _pv1_pv_plant_control_grid_follow_power_meas1_power_meas_dqpu_s_and_pf__P + _pv1_pv_plant_control_grid_follow_power_meas1_power_meas_dqpu_s_and_pf__Q * _pv1_pv_plant_control_grid_follow_power_meas1_power_meas_dqpu_s_and_pf__Q);
    if (_pv1_pv_plant_control_grid_follow_power_meas1_power_meas_dqpu_s_and_pf__S > 0) {
        _pv1_pv_plant_control_grid_follow_power_meas1_power_meas_dqpu_s_and_pf__pf = _pv1_pv_plant_control_grid_follow_power_meas1_power_meas_dqpu_s_and_pf__P / _pv1_pv_plant_control_grid_follow_power_meas1_power_meas_dqpu_s_and_pf__S;
    }
    else {
        _pv1_pv_plant_control_grid_follow_power_meas1_power_meas_dqpu_s_and_pf__pf = 0;
    }
    // Generated from the component: PV1.PV Plant.Control.PLL.Constant1
    // Generated from the component: PV1.PV Plant.Control.PLL.PLL.PID.Integrator1
    _pv1_pv_plant_control_pll_pll_pid_integrator1__out = _pv1_pv_plant_control_pll_pll_pid_integrator1__state;
    // Generated from the component: PV1.PV Plant.Control.PLL.PLL.PID.Integrator2
    _pv1_pv_plant_control_pll_pll_pid_integrator2__out = _pv1_pv_plant_control_pll_pll_pid_integrator2__state;
    // Generated from the component: PV1.PV Plant.Control.PLL.PLL.Unit Delay1
    _pv1_pv_plant_control_pll_pll_unit_delay1__out = _pv1_pv_plant_control_pll_pll_unit_delay1__state;
    // Generated from the component: PV1.PV Plant.Control.PLL.PLL.to_Hz
    _pv1_pv_plant_control_pll_pll_to_hz__out = 0.15915494309189535 * _pv1_pv_plant_control_pll_pll_lpf_lpf__out;
    // Generated from the component: PV1.PV Plant.Control.duty_cycle.ZSM.Constant1
    // Generated from the component: PV1.PV Plant.Control.duty_cycle.ZSM.Constant2
    // Generated from the component: PV1.PV Plant.Control.duty_cycle.ZSM.Constant3
    // Generated from the component: PV1.PV Plant.Control.duty_cycle.ZSM.Constant4
    // Generated from the component: PV1.PV Plant.Control.duty_cycle.o_ref
    // Generated from the component: PV1.PV Plant.Ia.Ia1
    _pv1_pv_plant_ia_ia1__out = (HIL_InFloat(0xc80000 + 0x40b));
    // Generated from the component: PV1.PV Plant.Ia1.Ia1
    _pv1_pv_plant_ia1_ia1__out = (HIL_InFloat(0xc80000 + 0x40c));
    // Generated from the component: PV1.PV Plant.Ib.Ia1
    _pv1_pv_plant_ib_ia1__out = (HIL_InFloat(0xc80000 + 0x40d));
    // Generated from the component: PV1.PV Plant.Ib1.Ia1
    _pv1_pv_plant_ib1_ia1__out = (HIL_InFloat(0xc80000 + 0x40e));
    // Generated from the component: PV1.PV Plant.Ic.Ia1
    _pv1_pv_plant_ic_ia1__out = (HIL_InFloat(0xc80000 + 0x40f));
    // Generated from the component: PV1.PV Plant.Ic1.Ia1
    _pv1_pv_plant_ic1_ia1__out = (HIL_InFloat(0xc80000 + 0x410));
    // Generated from the component: PV1.PV Plant.VDC
    // Generated from the component: PV1.PV Plant.Va.Va1
    _pv1_pv_plant_va_va1__out = (HIL_InFloat(0xc80000 + 0x406));
    // Generated from the component: PV1.PV Plant.Vb.Va1
    _pv1_pv_plant_vb_va1__out = (HIL_InFloat(0xc80000 + 0x408));
    // Generated from the component: PV1.PV Plant.Vc.Va1
    _pv1_pv_plant_vc_va1__out = (HIL_InFloat(0xc80000 + 0x409));
    // Generated from the component: PV1.PV Plant.Vdc.Va1
    _pv1_pv_plant_vdc_va1__out = (HIL_InFloat(0xc80000 + 0x40a));
    // Generated from the component: PV1.Q_ref_pv1
    _pv1_q_ref_pv1__out = XIo_InFloat(0x5500013c);
    // Generated from the component: PV1.Solar irradiance.Constant10
    // Generated from the component: PV1.Solar irradiance.Constant11
    // Generated from the component: PV1.Solar irradiance.Constant12
    // Generated from the component: PV1.Solar irradiance.Constant14
    // Generated from the component: PV1.Solar irradiance.Constant15
    // Generated from the component: PV1.Solar irradiance.Constant17
    // Generated from the component: PV1.Solar irradiance.Constant9
    // Generated from the component: PV1.Solar irradiance.ang_t1
    _pv1_solar_irradiance_ang_t1__out = XIo_InFloat(0x55000140);
    // Generated from the component: PV2.Constant1
    // Generated from the component: PV2.Constant2
    // Generated from the component: PV2.PV Plant.Control.Grid_follow.Constant1
    // Generated from the component: PV2.PV Plant.Control.Grid_follow.Constant2
    // Generated from the component: PV2.PV Plant.Control.Grid_follow.Constant3
    // Generated from the component: PV2.PV Plant.Control.Grid_follow.ControlSignal_Calculation.Damp
    // Generated from the component: PV2.PV Plant.Control.Grid_follow.ControlSignal_Calculation.Limit3
    if (_pv2_pv_plant_control_grid_follow_controlsignal_calculation_lpf_dc__out < 0.01) {
        _pv2_pv_plant_control_grid_follow_controlsignal_calculation_limit3__out = 0.01;
    } else {
        _pv2_pv_plant_control_grid_follow_controlsignal_calculation_limit3__out = _pv2_pv_plant_control_grid_follow_controlsignal_calculation_lpf_dc__out;
    }
    // Generated from the component: PV2.PV Plant.Control.Grid_follow.Edge Detection1.Unit Delay1
    _pv2_pv_plant_control_grid_follow_edge_detection1_unit_delay1__out = _pv2_pv_plant_control_grid_follow_edge_detection1_unit_delay1__state;
    // Generated from the component: PV2.PV Plant.Control.Grid_follow.Limit_PQref.Unit Delay1
    _pv2_pv_plant_control_grid_follow_limit_pqref_unit_delay1__out = _pv2_pv_plant_control_grid_follow_limit_pqref_unit_delay1__state;
    // Generated from the component: PV2.PV Plant.Control.Grid_follow.Limit_PQref.Unit Delay2
    _pv2_pv_plant_control_grid_follow_limit_pqref_unit_delay2__out = _pv2_pv_plant_control_grid_follow_limit_pqref_unit_delay2__state;
    // Generated from the component: PV2.PV Plant.Control.Grid_follow.PV_Area_m2
    // Generated from the component: PV2.PV Plant.Control.Grid_follow.Power_Meas.Gain4
    _pv2_pv_plant_control_grid_follow_power_meas_gain4__out = 10000.0 * _pv2_pv_plant_control_grid_follow_power_meas_power_meas_dqpu_lpf_p__out;
    // Generated from the component: PV2.PV Plant.Control.Grid_follow.Power_Meas.Gain5
    _pv2_pv_plant_control_grid_follow_power_meas_gain5__out = 10000.0 * _pv2_pv_plant_control_grid_follow_power_meas_power_meas_dqpu_lpf_q__out;
    // Generated from the component: PV2.PV Plant.Control.Grid_follow.Power_Meas.Power_Meas_DQpu.S_and_pf
    _pv2_pv_plant_control_grid_follow_power_meas_power_meas_dqpu_s_and_pf__P = _pv2_pv_plant_control_grid_follow_power_meas_power_meas_dqpu_lpf_p__out;
    _pv2_pv_plant_control_grid_follow_power_meas_power_meas_dqpu_s_and_pf__Q = _pv2_pv_plant_control_grid_follow_power_meas_power_meas_dqpu_lpf_q__out;
    _pv2_pv_plant_control_grid_follow_power_meas_power_meas_dqpu_s_and_pf__S = sqrt(_pv2_pv_plant_control_grid_follow_power_meas_power_meas_dqpu_s_and_pf__P * _pv2_pv_plant_control_grid_follow_power_meas_power_meas_dqpu_s_and_pf__P + _pv2_pv_plant_control_grid_follow_power_meas_power_meas_dqpu_s_and_pf__Q * _pv2_pv_plant_control_grid_follow_power_meas_power_meas_dqpu_s_and_pf__Q);
    if (_pv2_pv_plant_control_grid_follow_power_meas_power_meas_dqpu_s_and_pf__S > 0) {
        _pv2_pv_plant_control_grid_follow_power_meas_power_meas_dqpu_s_and_pf__pf = _pv2_pv_plant_control_grid_follow_power_meas_power_meas_dqpu_s_and_pf__P / _pv2_pv_plant_control_grid_follow_power_meas_power_meas_dqpu_s_and_pf__S;
    }
    else {
        _pv2_pv_plant_control_grid_follow_power_meas_power_meas_dqpu_s_and_pf__pf = 0;
    }
    // Generated from the component: PV2.PV Plant.Control.Grid_follow.Power_Meas1.Gain4
    _pv2_pv_plant_control_grid_follow_power_meas1_gain4__out = 10000.0 * _pv2_pv_plant_control_grid_follow_power_meas1_power_meas_dqpu_lpf_p__out;
    // Generated from the component: PV2.PV Plant.Control.Grid_follow.Power_Meas1.Gain5
    _pv2_pv_plant_control_grid_follow_power_meas1_gain5__out = 10000.0 * _pv2_pv_plant_control_grid_follow_power_meas1_power_meas_dqpu_lpf_q__out;
    // Generated from the component: PV2.PV Plant.Control.Grid_follow.Power_Meas1.Power_Meas_DQpu.S_and_pf
    _pv2_pv_plant_control_grid_follow_power_meas1_power_meas_dqpu_s_and_pf__P = _pv2_pv_plant_control_grid_follow_power_meas1_power_meas_dqpu_lpf_p__out;
    _pv2_pv_plant_control_grid_follow_power_meas1_power_meas_dqpu_s_and_pf__Q = _pv2_pv_plant_control_grid_follow_power_meas1_power_meas_dqpu_lpf_q__out;
    _pv2_pv_plant_control_grid_follow_power_meas1_power_meas_dqpu_s_and_pf__S = sqrt(_pv2_pv_plant_control_grid_follow_power_meas1_power_meas_dqpu_s_and_pf__P * _pv2_pv_plant_control_grid_follow_power_meas1_power_meas_dqpu_s_and_pf__P + _pv2_pv_plant_control_grid_follow_power_meas1_power_meas_dqpu_s_and_pf__Q * _pv2_pv_plant_control_grid_follow_power_meas1_power_meas_dqpu_s_and_pf__Q);
    if (_pv2_pv_plant_control_grid_follow_power_meas1_power_meas_dqpu_s_and_pf__S > 0) {
        _pv2_pv_plant_control_grid_follow_power_meas1_power_meas_dqpu_s_and_pf__pf = _pv2_pv_plant_control_grid_follow_power_meas1_power_meas_dqpu_s_and_pf__P / _pv2_pv_plant_control_grid_follow_power_meas1_power_meas_dqpu_s_and_pf__S;
    }
    else {
        _pv2_pv_plant_control_grid_follow_power_meas1_power_meas_dqpu_s_and_pf__pf = 0;
    }
    // Generated from the component: PV2.PV Plant.Control.PLL.Constant1
    // Generated from the component: PV2.PV Plant.Control.PLL.PLL.PID.Integrator1
    _pv2_pv_plant_control_pll_pll_pid_integrator1__out = _pv2_pv_plant_control_pll_pll_pid_integrator1__state;
    // Generated from the component: PV2.PV Plant.Control.PLL.PLL.PID.Integrator2
    _pv2_pv_plant_control_pll_pll_pid_integrator2__out = _pv2_pv_plant_control_pll_pll_pid_integrator2__state;
    // Generated from the component: PV2.PV Plant.Control.PLL.PLL.Unit Delay1
    _pv2_pv_plant_control_pll_pll_unit_delay1__out = _pv2_pv_plant_control_pll_pll_unit_delay1__state;
    // Generated from the component: PV2.PV Plant.Control.PLL.PLL.to_Hz
    _pv2_pv_plant_control_pll_pll_to_hz__out = 0.15915494309189535 * _pv2_pv_plant_control_pll_pll_lpf_lpf__out;
    // Generated from the component: PV2.PV Plant.Control.duty_cycle.ZSM.Constant1
    // Generated from the component: PV2.PV Plant.Control.duty_cycle.ZSM.Constant2
    // Generated from the component: PV2.PV Plant.Control.duty_cycle.ZSM.Constant3
    // Generated from the component: PV2.PV Plant.Control.duty_cycle.ZSM.Constant4
    // Generated from the component: PV2.PV Plant.Control.duty_cycle.o_ref
    // Generated from the component: PV2.PV Plant.Ia.Ia1
    _pv2_pv_plant_ia_ia1__out = (HIL_InFloat(0xc80000 + 0x60b));
    // Generated from the component: PV2.PV Plant.Ia1.Ia1
    _pv2_pv_plant_ia1_ia1__out = (HIL_InFloat(0xc80000 + 0x60c));
    // Generated from the component: PV2.PV Plant.Ib.Ia1
    _pv2_pv_plant_ib_ia1__out = (HIL_InFloat(0xc80000 + 0x60d));
    // Generated from the component: PV2.PV Plant.Ib1.Ia1
    _pv2_pv_plant_ib1_ia1__out = (HIL_InFloat(0xc80000 + 0x60e));
    // Generated from the component: PV2.PV Plant.Ic.Ia1
    _pv2_pv_plant_ic_ia1__out = (HIL_InFloat(0xc80000 + 0x60f));
    // Generated from the component: PV2.PV Plant.Ic1.Ia1
    _pv2_pv_plant_ic1_ia1__out = (HIL_InFloat(0xc80000 + 0x610));
    // Generated from the component: PV2.PV Plant.VDC
    // Generated from the component: PV2.PV Plant.Va.Va1
    _pv2_pv_plant_va_va1__out = (HIL_InFloat(0xc80000 + 0x606));
    // Generated from the component: PV2.PV Plant.Vb.Va1
    _pv2_pv_plant_vb_va1__out = (HIL_InFloat(0xc80000 + 0x608));
    // Generated from the component: PV2.PV Plant.Vc.Va1
    _pv2_pv_plant_vc_va1__out = (HIL_InFloat(0xc80000 + 0x609));
    // Generated from the component: PV2.PV Plant.Vdc.Va1
    _pv2_pv_plant_vdc_va1__out = (HIL_InFloat(0xc80000 + 0x60a));
    // Generated from the component: PV2.Q_ref_pv2
    _pv2_q_ref_pv2__out = XIo_InFloat(0x55000144);
    // Generated from the component: PV2.Solar irradiance.Constant15
    // Generated from the component: PV2.Solar irradiance.Constant17
    // Generated from the component: PV2.Solar irradiance.ang_t2
    _pv2_solar_irradiance_ang_t2__out = XIo_InFloat(0x55000148);
    // Generated from the component: ESS1.Battery.Abs4
    _ess1_battery_abs4__out = fabs(_ess1_battery_rate_transition3_output__out);
    // Generated from the component: ESS1.Battery.Sum1
    _ess1_battery_sum1__out = _ess1_battery_constant6__out - _ess1_battery_rate_transition3_output__out;
    // Generated from the component: ESS1.Battery.Charging
    HIL_OutInt32(0xf00405, _ess1_battery_charge__out != 0x0);
    // Generated from the component: ESS1.Battery.Rate Transition5.Input
    _ess1_battery_rate_transition5_output__out = _ess1_battery_charge__out;
    // Generated from the component: ESS1.Controller.E_qREF1
    HIL_OutAO(0x401d, (float)_ess1_controller_constant1__out);
    // Generated from the component: ESS1.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Gain5
    _ess1_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_gain5__out = 0.5 * _ess1_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_limit3__out;
    // Generated from the component: ESS1.Controller.Outer Voltage Loop + Inner Current Loop.alpha
    HIL_OutAO(0x4028, (float)_ess1_controller_pll_pll_unit_delay1__out);
    // Generated from the component: ESS1.Controller.PLL.Gain5
    _ess1_controller_pll_gain5__out = 6.283185307179586 * _ess1_controller_pll_pll_to_hz__out;
    // Generated from the component: ESS1.Controller.PLL.f_meas
    HIL_OutAO(0x402d, (float)_ess1_controller_pll_pll_to_hz__out);
    // Generated from the component: ESS1.Ea_1
    HIL_OutAO(0x4032, (float)_ess1_ea1_va1__out);
    // Generated from the component: ESS1.Eb_1
    HIL_OutAO(0x4033, (float)_ess1_eb1_va1__out);
    // Generated from the component: ESS1.BE1-25A Synchronizer.Current_abc_to_dq3.abc to dq1.abc to alpha beta
    _ess1_be1_25a_synchronizer_current_abc_to_dq3_abc_to_dq1_abc_to_alpha_beta__alpha = (2.0 * _ess1_ea1_va1__out - _ess1_eb1_va1__out - _ess1_ec1_va1__out) * 0.3333333333333333;
    _ess1_be1_25a_synchronizer_current_abc_to_dq3_abc_to_dq1_abc_to_alpha_beta__beta = (_ess1_eb1_va1__out - _ess1_ec1_va1__out) * 0.5773502691896258;
    _ess1_be1_25a_synchronizer_current_abc_to_dq3_abc_to_dq1_abc_to_alpha_beta__gamma = (_ess1_ea1_va1__out + _ess1_eb1_va1__out + _ess1_ec1_va1__out) * 0.3333333333333333;
    // Generated from the component: ESS1.Controller.PLL.PLL.abc to dq.abc to alpha beta
    _ess1_controller_pll_pll_abc_to_dq_abc_to_alpha_beta__alpha = (2.0 * _ess1_ea1_va1__out - _ess1_eb1_va1__out - _ess1_ec1_va1__out) * 0.3333333333333333;
    _ess1_controller_pll_pll_abc_to_dq_abc_to_alpha_beta__beta = (_ess1_eb1_va1__out - _ess1_ec1_va1__out) * 0.5773502691896258;
    _ess1_controller_pll_pll_abc_to_dq_abc_to_alpha_beta__gamma = (_ess1_ea1_va1__out + _ess1_eb1_va1__out + _ess1_ec1_va1__out) * 0.3333333333333333;
    // Generated from the component: ESS1.Ec_1
    HIL_OutAO(0x4034, (float)_ess1_ec1_va1__out);
    // Generated from the component: ESS1.Controller.Current_abc_to_dq4.abc to dq1.abc to alpha beta
    _ess1_controller_current_abc_to_dq4_abc_to_dq1_abc_to_alpha_beta__alpha = (2.0 * _ess1_ia1_ia1__out - _ess1_ib1_ia1__out - _ess1_ic1_ia1__out) * 0.3333333333333333;
    _ess1_controller_current_abc_to_dq4_abc_to_dq1_abc_to_alpha_beta__beta = (_ess1_ib1_ia1__out - _ess1_ic1_ia1__out) * 0.5773502691896258;
    _ess1_controller_current_abc_to_dq4_abc_to_dq1_abc_to_alpha_beta__gamma = (_ess1_ia1_ia1__out + _ess1_ib1_ia1__out + _ess1_ic1_ia1__out) * 0.3333333333333333;
    // Generated from the component: ESS1.Power Meter
    _ess1_power_meter__v_alpha = SQRT_2OVER3 * ( _ess1_ea1_va1__out - 0.5f * _ess1_eb1_va1__out - 0.5f * _ess1_ec1_va1__out);
    _ess1_power_meter__v_beta = SQRT_2OVER3 * (SQRT3_OVER_2 * _ess1_eb1_va1__out - SQRT3_OVER_2 * _ess1_ec1_va1__out);
    _ess1_power_meter__i_alpha = SQRT_2OVER3 * ( _ess1_ia1_ia1__out - 0.5f * _ess1_ib1_ia1__out - 0.5f * _ess1_ic1_ia1__out);
    _ess1_power_meter__i_beta = SQRT_2OVER3 * (SQRT3_OVER_2 * _ess1_ib1_ia1__out - SQRT3_OVER_2 * _ess1_ic1_ia1__out);
    _ess1_power_meter__v_zero = ONE_DIV_BY_SQRT_3 * (_ess1_ea1_va1__out + _ess1_eb1_va1__out + _ess1_ec1_va1__out);
    _ess1_power_meter__i_zero = ONE_DIV_BY_SQRT_3 * (_ess1_ia1_ia1__out + _ess1_ib1_ia1__out + _ess1_ic1_ia1__out);
    _ess1_power_meter__Pac = _ess1_power_meter__v_alpha * _ess1_power_meter__i_alpha + _ess1_power_meter__v_beta * _ess1_power_meter__i_beta;
    _ess1_power_meter__Qac = _ess1_power_meter__v_beta * _ess1_power_meter__i_alpha - _ess1_power_meter__v_alpha * _ess1_power_meter__i_beta;
    _ess1_power_meter__P0ac = _ess1_power_meter__v_zero * _ess1_power_meter__i_zero;
    _ess1_power_meter__filter_1_output = 6.282790547807006e-05 * (_ess1_power_meter__Pac + _ess1_power_meter__filter_1_input_k_minus_1) - (-0.9998743441890439) * _ess1_power_meter__filter_1_output_k_minus_1;
    _ess1_power_meter__filter_1_outputQ = 6.282790547807006e-05 * (_ess1_power_meter__Qac + _ess1_power_meter__filter_1_input_k_minus_1Q) - (-0.9998743441890439) * _ess1_power_meter__filter_1_output_k_minus_1Q;
    _ess1_power_meter__filter_1_outputP0 = 6.282790547807006e-05 * (_ess1_power_meter__P0ac + _ess1_power_meter__filter_1_input_k_minus_1P0) - (-0.9998743441890439) * _ess1_power_meter__filter_1_output_k_minus_1P0;
    _ess1_power_meter__filter_1_input_k_minus_1 = _ess1_power_meter__Pac;
    _ess1_power_meter__filter_1_output_k_minus_1 = _ess1_power_meter__filter_1_output;
    _ess1_power_meter__filter_1_input_k_minus_1Q = _ess1_power_meter__Qac;;
    _ess1_power_meter__filter_1_output_k_minus_1Q = _ess1_power_meter__filter_1_outputQ;
    _ess1_power_meter__filter_1_input_k_minus_1P0 = _ess1_power_meter__P0ac;
    _ess1_power_meter__filter_1_output_k_minus_1P0 = _ess1_power_meter__filter_1_outputP0;
    _ess1_power_meter__Pdc = _ess1_power_meter__filter_1_output;
    _ess1_power_meter__Qdc = _ess1_power_meter__filter_1_outputQ;
    _ess1_power_meter__P0dc = _ess1_power_meter__filter_1_outputP0;
    _ess1_power_meter__apparent = sqrt(pow(_ess1_power_meter__Pdc, 2) + pow(_ess1_power_meter__Qdc, 2));
    if (_ess1_power_meter__apparent > 0)
        _ess1_power_meter__k_factor = _ess1_power_meter__Pdc / _ess1_power_meter__apparent;
    else
        _ess1_power_meter__k_factor = 0;
    // Generated from the component: ESS1.Battery.C function2
    _ess1_battery_c_function2__Idc = _ess1_idc_ia1__out;
    _ess1_battery_c_function2__Vbtt = _ess1_battery_rate_transition6_output__out;
    _ess1_battery_c_function2__charge = _ess1_battery_charge__out;
    if (_ess1_battery_c_function2__charge > 0)_ess1_battery_c_function2__Ibat = _ess1_battery_c_function2__Idc * 750.0 / _ess1_battery_c_function2__Vbtt;
    else _ess1_battery_c_function2__Ibat = _ess1_battery_c_function2__Idc * 750.0 / _ess1_battery_c_function2__Vbtt;
    // Generated from the component: ESS1.C function1
    _ess1_c_function1__charge = _ess1_battery_charge__out;
    _ess1_c_function1__ref = _ess1_p_ref_ess__out;
    if (_ess1_c_function1__charge > 0)_ess1_c_function1__out = -1;
    else _ess1_c_function1__out = _ess1_c_function1__ref;
    // Generated from the component: ESS1.P1
    HIL_OutAO(0x4036, (float)_ess1_power_meas_gain4__out);
    // Generated from the component: ESS1.Q1
    HIL_OutAO(0x4038, (float)_ess1_power_meas_gain5__out);
    // Generated from the component: ESS1.Power_Meas.Gain6
    _ess1_power_meas_gain6__out = 20000.0 * _ess1_power_meas_power_meas_dqpu_s_and_pf__S;
    // Generated from the component: ESS1.pf
    HIL_OutAO(0x403b, (float)_ess1_power_meas_power_meas_dqpu_s_and_pf__pf);
    // Generated from the component: ESS1.C function2
    _ess1_c_function2__charge = _ess1_battery_charge__out;
    _ess1_c_function2__ref = _ess1_q_ref_ess__out;
    if (_ess1_c_function2__charge > 0)_ess1_c_function2__out = 0;
    else _ess1_c_function2__out = _ess1_c_function2__ref;
    // Generated from the component: ESS1.Logical operator3
    _ess1_logical_operator3__out = !_ess1_rate_transition1_output__out;
    // Generated from the component: ESS1.Logical operator2
    _ess1_logical_operator2__out = _ess1_connect__out || _ess1_rate_transition6_output__out ;
    // Generated from the component: ESS1.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.LPF_dc
    _ess1_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__a_sum = 0.0f;
    _ess1_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__b_sum = 0.0f;
    _ess1_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__delay_line_in = 0.0f;
    for (_ess1_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__i = 0; _ess1_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__i < 1; _ess1_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__i++) {
        _ess1_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__b_sum += _ess1_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__b_coeff[_ess1_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__i + 1] * _ess1_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__states[_ess1_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__i];
    }
    _ess1_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__a_sum += _ess1_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__states[0] * _ess1_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__a_coeff[1];
    _ess1_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__delay_line_in = _ess1_rate_transition7_output__out - _ess1_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__a_sum;
    _ess1_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__b_sum += _ess1_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__b_coeff[0] * _ess1_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__delay_line_in;
    _ess1_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__out = _ess1_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__b_sum;
    // Generated from the component: ESS1.BE1-25A Synchronizer.Sum6
    _ess1_be1_25a_synchronizer_sum6__out = _ess1_ea1_va1__out - _ess1_vag_va1__out;
    // Generated from the component: ESS1.BE1-25A Synchronizer.Sum7
    _ess1_be1_25a_synchronizer_sum7__out = _ess1_eb1_va1__out - _ess1_vbg_va1__out;
    // Generated from the component: ESS1.Controller.Current_abc_to_dq3.abc to dq1.abc to alpha beta
    _ess1_controller_current_abc_to_dq3_abc_to_dq1_abc_to_alpha_beta__alpha = (2.0 * _ess1_va2_va1__out - _ess1_vb2_va1__out - _ess1_vc2_va1__out) * 0.3333333333333333;
    _ess1_controller_current_abc_to_dq3_abc_to_dq1_abc_to_alpha_beta__beta = (_ess1_vb2_va1__out - _ess1_vc2_va1__out) * 0.5773502691896258;
    _ess1_controller_current_abc_to_dq3_abc_to_dq1_abc_to_alpha_beta__gamma = (_ess1_va2_va1__out + _ess1_vb2_va1__out + _ess1_vc2_va1__out) * 0.3333333333333333;
    // Generated from the component: ESS1.BE1-25A Synchronizer.Sum8
    _ess1_be1_25a_synchronizer_sum8__out = _ess1_ec1_va1__out - _ess1_vcg_va1__out;
    // Generated from the component: ESS1.BE1-25A Synchronizer.abc to dq1.abc to alpha beta
    _ess1_be1_25a_synchronizer_abc_to_dq1_abc_to_alpha_beta__alpha = (2.0 * _ess1_vag_va1__out - _ess1_vbg_va1__out - _ess1_vcg_va1__out) * 0.3333333333333333;
    _ess1_be1_25a_synchronizer_abc_to_dq1_abc_to_alpha_beta__beta = (_ess1_vbg_va1__out - _ess1_vcg_va1__out) * 0.5773502691896258;
    _ess1_be1_25a_synchronizer_abc_to_dq1_abc_to_alpha_beta__gamma = (_ess1_vag_va1__out + _ess1_vbg_va1__out + _ess1_vcg_va1__out) * 0.3333333333333333;
    // Generated from the component: ESS1.Controller.Current_abc_to_dq.abc to dq1.abc to alpha beta
    _ess1_controller_current_abc_to_dq_abc_to_dq1_abc_to_alpha_beta__alpha = (2.0 * _ess1_xi_a1_ia1__out - _ess1_xi_b1_ia1__out - _ess1_xi_c1_ia1__out) * 0.3333333333333333;
    _ess1_controller_current_abc_to_dq_abc_to_dq1_abc_to_alpha_beta__beta = (_ess1_xi_b1_ia1__out - _ess1_xi_c1_ia1__out) * 0.5773502691896258;
    _ess1_controller_current_abc_to_dq_abc_to_dq1_abc_to_alpha_beta__gamma = (_ess1_xi_a1_ia1__out + _ess1_xi_b1_ia1__out + _ess1_xi_c1_ia1__out) * 0.3333333333333333;
    // Generated from the component: ESS2.Battery.Abs4
    _ess2_battery_abs4__out = fabs(_ess2_battery_rate_transition3_output__out);
    // Generated from the component: ESS2.Battery.Sum1
    _ess2_battery_sum1__out = _ess2_battery_constant6__out - _ess2_battery_rate_transition3_output__out;
    // Generated from the component: ESS2.Battery.Charging
    HIL_OutInt32(0xf0040d, _ess2_battery_charge__out != 0x0);
    // Generated from the component: ESS2.Battery.Rate Transition5.Input
    _ess2_battery_rate_transition5_output__out = _ess2_battery_charge__out;
    // Generated from the component: ESS2.Controller.E_qREF1
    HIL_OutAO(0x4052, (float)_ess2_controller_constant1__out);
    // Generated from the component: ESS2.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Gain5
    _ess2_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_gain5__out = 0.5 * _ess2_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_limit3__out;
    // Generated from the component: ESS2.Controller.Outer Voltage Loop + Inner Current Loop.alpha
    HIL_OutAO(0x405d, (float)_ess2_controller_pll_pll_unit_delay1__out);
    // Generated from the component: ESS2.Controller.PLL.Gain5
    _ess2_controller_pll_gain5__out = 6.283185307179586 * _ess2_controller_pll_pll_to_hz__out;
    // Generated from the component: ESS2.Controller.PLL.f_meas
    HIL_OutAO(0x4062, (float)_ess2_controller_pll_pll_to_hz__out);
    // Generated from the component: ESS2.Ea_1
    HIL_OutAO(0x4067, (float)_ess2_ea1_va1__out);
    // Generated from the component: ESS2.Eb_1
    HIL_OutAO(0x4068, (float)_ess2_eb1_va1__out);
    // Generated from the component: ESS2.BE1-25A Synchronizer.Current_abc_to_dq3.abc to dq1.abc to alpha beta
    _ess2_be1_25a_synchronizer_current_abc_to_dq3_abc_to_dq1_abc_to_alpha_beta__alpha = (2.0 * _ess2_ea1_va1__out - _ess2_eb1_va1__out - _ess2_ec1_va1__out) * 0.3333333333333333;
    _ess2_be1_25a_synchronizer_current_abc_to_dq3_abc_to_dq1_abc_to_alpha_beta__beta = (_ess2_eb1_va1__out - _ess2_ec1_va1__out) * 0.5773502691896258;
    _ess2_be1_25a_synchronizer_current_abc_to_dq3_abc_to_dq1_abc_to_alpha_beta__gamma = (_ess2_ea1_va1__out + _ess2_eb1_va1__out + _ess2_ec1_va1__out) * 0.3333333333333333;
    // Generated from the component: ESS2.Controller.PLL.PLL.abc to dq.abc to alpha beta
    _ess2_controller_pll_pll_abc_to_dq_abc_to_alpha_beta__alpha = (2.0 * _ess2_ea1_va1__out - _ess2_eb1_va1__out - _ess2_ec1_va1__out) * 0.3333333333333333;
    _ess2_controller_pll_pll_abc_to_dq_abc_to_alpha_beta__beta = (_ess2_eb1_va1__out - _ess2_ec1_va1__out) * 0.5773502691896258;
    _ess2_controller_pll_pll_abc_to_dq_abc_to_alpha_beta__gamma = (_ess2_ea1_va1__out + _ess2_eb1_va1__out + _ess2_ec1_va1__out) * 0.3333333333333333;
    // Generated from the component: ESS2.Ec_1
    HIL_OutAO(0x4069, (float)_ess2_ec1_va1__out);
    // Generated from the component: ESS2.Controller.Current_abc_to_dq4.abc to dq1.abc to alpha beta
    _ess2_controller_current_abc_to_dq4_abc_to_dq1_abc_to_alpha_beta__alpha = (2.0 * _ess2_ia1_ia1__out - _ess2_ib1_ia1__out - _ess2_ic1_ia1__out) * 0.3333333333333333;
    _ess2_controller_current_abc_to_dq4_abc_to_dq1_abc_to_alpha_beta__beta = (_ess2_ib1_ia1__out - _ess2_ic1_ia1__out) * 0.5773502691896258;
    _ess2_controller_current_abc_to_dq4_abc_to_dq1_abc_to_alpha_beta__gamma = (_ess2_ia1_ia1__out + _ess2_ib1_ia1__out + _ess2_ic1_ia1__out) * 0.3333333333333333;
    // Generated from the component: ESS2.Power Meter
    _ess2_power_meter__v_alpha = SQRT_2OVER3 * ( _ess2_ea1_va1__out - 0.5f * _ess2_eb1_va1__out - 0.5f * _ess2_ec1_va1__out);
    _ess2_power_meter__v_beta = SQRT_2OVER3 * (SQRT3_OVER_2 * _ess2_eb1_va1__out - SQRT3_OVER_2 * _ess2_ec1_va1__out);
    _ess2_power_meter__i_alpha = SQRT_2OVER3 * ( _ess2_ia1_ia1__out - 0.5f * _ess2_ib1_ia1__out - 0.5f * _ess2_ic1_ia1__out);
    _ess2_power_meter__i_beta = SQRT_2OVER3 * (SQRT3_OVER_2 * _ess2_ib1_ia1__out - SQRT3_OVER_2 * _ess2_ic1_ia1__out);
    _ess2_power_meter__v_zero = ONE_DIV_BY_SQRT_3 * (_ess2_ea1_va1__out + _ess2_eb1_va1__out + _ess2_ec1_va1__out);
    _ess2_power_meter__i_zero = ONE_DIV_BY_SQRT_3 * (_ess2_ia1_ia1__out + _ess2_ib1_ia1__out + _ess2_ic1_ia1__out);
    _ess2_power_meter__Pac = _ess2_power_meter__v_alpha * _ess2_power_meter__i_alpha + _ess2_power_meter__v_beta * _ess2_power_meter__i_beta;
    _ess2_power_meter__Qac = _ess2_power_meter__v_beta * _ess2_power_meter__i_alpha - _ess2_power_meter__v_alpha * _ess2_power_meter__i_beta;
    _ess2_power_meter__P0ac = _ess2_power_meter__v_zero * _ess2_power_meter__i_zero;
    _ess2_power_meter__filter_1_output = 6.282790547807006e-05 * (_ess2_power_meter__Pac + _ess2_power_meter__filter_1_input_k_minus_1) - (-0.9998743441890439) * _ess2_power_meter__filter_1_output_k_minus_1;
    _ess2_power_meter__filter_1_outputQ = 6.282790547807006e-05 * (_ess2_power_meter__Qac + _ess2_power_meter__filter_1_input_k_minus_1Q) - (-0.9998743441890439) * _ess2_power_meter__filter_1_output_k_minus_1Q;
    _ess2_power_meter__filter_1_outputP0 = 6.282790547807006e-05 * (_ess2_power_meter__P0ac + _ess2_power_meter__filter_1_input_k_minus_1P0) - (-0.9998743441890439) * _ess2_power_meter__filter_1_output_k_minus_1P0;
    _ess2_power_meter__filter_1_input_k_minus_1 = _ess2_power_meter__Pac;
    _ess2_power_meter__filter_1_output_k_minus_1 = _ess2_power_meter__filter_1_output;
    _ess2_power_meter__filter_1_input_k_minus_1Q = _ess2_power_meter__Qac;;
    _ess2_power_meter__filter_1_output_k_minus_1Q = _ess2_power_meter__filter_1_outputQ;
    _ess2_power_meter__filter_1_input_k_minus_1P0 = _ess2_power_meter__P0ac;
    _ess2_power_meter__filter_1_output_k_minus_1P0 = _ess2_power_meter__filter_1_outputP0;
    _ess2_power_meter__Pdc = _ess2_power_meter__filter_1_output;
    _ess2_power_meter__Qdc = _ess2_power_meter__filter_1_outputQ;
    _ess2_power_meter__P0dc = _ess2_power_meter__filter_1_outputP0;
    _ess2_power_meter__apparent = sqrt(pow(_ess2_power_meter__Pdc, 2) + pow(_ess2_power_meter__Qdc, 2));
    if (_ess2_power_meter__apparent > 0)
        _ess2_power_meter__k_factor = _ess2_power_meter__Pdc / _ess2_power_meter__apparent;
    else
        _ess2_power_meter__k_factor = 0;
    // Generated from the component: ESS2.Battery.C function2
    _ess2_battery_c_function2__Idc = _ess2_idc_ia1__out;
    _ess2_battery_c_function2__Vbtt = _ess2_battery_rate_transition6_output__out;
    _ess2_battery_c_function2__charge = _ess2_battery_charge__out;
    if (_ess2_battery_c_function2__charge > 0)_ess2_battery_c_function2__Ibat = _ess2_battery_c_function2__Idc * 750.0 / _ess2_battery_c_function2__Vbtt;
    else _ess2_battery_c_function2__Ibat = _ess2_battery_c_function2__Idc * 750.0 / _ess2_battery_c_function2__Vbtt;
    // Generated from the component: ESS2.C function1
    _ess2_c_function1__charge = _ess2_battery_charge__out;
    _ess2_c_function1__ref = _ess2_p_ref_ess__out;
    if (_ess2_c_function1__charge > 0)_ess2_c_function1__out = -1;
    else _ess2_c_function1__out = _ess2_c_function1__ref;
    // Generated from the component: ESS2.P1
    HIL_OutAO(0x406b, (float)_ess2_power_meas_gain4__out);
    // Generated from the component: ESS2.Q1
    HIL_OutAO(0x406d, (float)_ess2_power_meas_gain5__out);
    // Generated from the component: ESS2.Power_Meas.Gain6
    _ess2_power_meas_gain6__out = 20000.0 * _ess2_power_meas_power_meas_dqpu_s_and_pf__S;
    // Generated from the component: ESS2.pf
    HIL_OutAO(0x4070, (float)_ess2_power_meas_power_meas_dqpu_s_and_pf__pf);
    // Generated from the component: ESS2.C function2
    _ess2_c_function2__charge = _ess2_battery_charge__out;
    _ess2_c_function2__ref = _ess2_q_ref_ess__out;
    if (_ess2_c_function2__charge > 0)_ess2_c_function2__out = 0;
    else _ess2_c_function2__out = _ess2_c_function2__ref;
    // Generated from the component: ESS2.Logical operator3
    _ess2_logical_operator3__out = !_ess2_rate_transition1_output__out;
    // Generated from the component: ESS2.Logical operator2
    _ess2_logical_operator2__out = _ess2_connect__out || _ess2_rate_transition6_output__out ;
    // Generated from the component: ESS2.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.LPF_dc
    _ess2_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__a_sum = 0.0f;
    _ess2_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__b_sum = 0.0f;
    _ess2_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__delay_line_in = 0.0f;
    for (_ess2_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__i = 0; _ess2_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__i < 1; _ess2_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__i++) {
        _ess2_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__b_sum += _ess2_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__b_coeff[_ess2_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__i + 1] * _ess2_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__states[_ess2_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__i];
    }
    _ess2_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__a_sum += _ess2_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__states[0] * _ess2_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__a_coeff[1];
    _ess2_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__delay_line_in = _ess2_rate_transition7_output__out - _ess2_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__a_sum;
    _ess2_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__b_sum += _ess2_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__b_coeff[0] * _ess2_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__delay_line_in;
    _ess2_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__out = _ess2_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__b_sum;
    // Generated from the component: ESS2.BE1-25A Synchronizer.Sum6
    _ess2_be1_25a_synchronizer_sum6__out = _ess2_ea1_va1__out - _ess2_vag_va1__out;
    // Generated from the component: ESS2.BE1-25A Synchronizer.Sum7
    _ess2_be1_25a_synchronizer_sum7__out = _ess2_eb1_va1__out - _ess2_vbg_va1__out;
    // Generated from the component: ESS2.Controller.Current_abc_to_dq3.abc to dq1.abc to alpha beta
    _ess2_controller_current_abc_to_dq3_abc_to_dq1_abc_to_alpha_beta__alpha = (2.0 * _ess2_va2_va1__out - _ess2_vb2_va1__out - _ess2_vc2_va1__out) * 0.3333333333333333;
    _ess2_controller_current_abc_to_dq3_abc_to_dq1_abc_to_alpha_beta__beta = (_ess2_vb2_va1__out - _ess2_vc2_va1__out) * 0.5773502691896258;
    _ess2_controller_current_abc_to_dq3_abc_to_dq1_abc_to_alpha_beta__gamma = (_ess2_va2_va1__out + _ess2_vb2_va1__out + _ess2_vc2_va1__out) * 0.3333333333333333;
    // Generated from the component: ESS2.BE1-25A Synchronizer.Sum8
    _ess2_be1_25a_synchronizer_sum8__out = _ess2_ec1_va1__out - _ess2_vcg_va1__out;
    // Generated from the component: ESS2.BE1-25A Synchronizer.abc to dq1.abc to alpha beta
    _ess2_be1_25a_synchronizer_abc_to_dq1_abc_to_alpha_beta__alpha = (2.0 * _ess2_vag_va1__out - _ess2_vbg_va1__out - _ess2_vcg_va1__out) * 0.3333333333333333;
    _ess2_be1_25a_synchronizer_abc_to_dq1_abc_to_alpha_beta__beta = (_ess2_vbg_va1__out - _ess2_vcg_va1__out) * 0.5773502691896258;
    _ess2_be1_25a_synchronizer_abc_to_dq1_abc_to_alpha_beta__gamma = (_ess2_vag_va1__out + _ess2_vbg_va1__out + _ess2_vcg_va1__out) * 0.3333333333333333;
    // Generated from the component: ESS2.Controller.Current_abc_to_dq.abc to dq1.abc to alpha beta
    _ess2_controller_current_abc_to_dq_abc_to_dq1_abc_to_alpha_beta__alpha = (2.0 * _ess2_xi_a1_ia1__out - _ess2_xi_b1_ia1__out - _ess2_xi_c1_ia1__out) * 0.3333333333333333;
    _ess2_controller_current_abc_to_dq_abc_to_dq1_abc_to_alpha_beta__beta = (_ess2_xi_b1_ia1__out - _ess2_xi_c1_ia1__out) * 0.5773502691896258;
    _ess2_controller_current_abc_to_dq_abc_to_dq1_abc_to_alpha_beta__gamma = (_ess2_xi_a1_ia1__out + _ess2_xi_b1_ia1__out + _ess2_xi_c1_ia1__out) * 0.3333333333333333;
    // Generated from the component: PV1.PV Plant.Control.Grid_follow.ControlSignal_Calculation.Gain5
    _pv1_pv_plant_control_grid_follow_controlsignal_calculation_gain5__out = 0.5 * _pv1_pv_plant_control_grid_follow_controlsignal_calculation_limit3__out;
    // Generated from the component: PV1.PV Plant.Control.Grid_follow.ControlSignal_Calculation.Vdc
    HIL_OutAO(0x4074, (float)_pv1_pv_plant_control_grid_follow_controlsignal_calculation_limit3__out);
    // Generated from the component: PV1.PV Plant.Control.Grid_follow.P
    HIL_OutAO(0x4077, (float)_pv1_pv_plant_control_grid_follow_power_meas_gain4__out);
    // Generated from the component: PV1.PV Plant.Control.Grid_follow.Q
    HIL_OutAO(0x4079, (float)_pv1_pv_plant_control_grid_follow_power_meas_gain5__out);
    // Generated from the component: PV1.PV Plant.Control.Grid_follow.Power_Meas.Gain6
    _pv1_pv_plant_control_grid_follow_power_meas_gain6__out = 10000.0 * _pv1_pv_plant_control_grid_follow_power_meas_power_meas_dqpu_s_and_pf__S;
    // Generated from the component: PV1.PV Plant.Control.Grid_follow.pf
    HIL_OutAO(0x4084, (float)_pv1_pv_plant_control_grid_follow_power_meas_power_meas_dqpu_s_and_pf__pf);
    // Generated from the component: PV1.PV Plant.Control.Grid_follow.Power_Meas1.Gain6
    _pv1_pv_plant_control_grid_follow_power_meas1_gain6__out = 10000.0 * _pv1_pv_plant_control_grid_follow_power_meas1_power_meas_dqpu_s_and_pf__S;
    // Generated from the component: PV1.PV Plant.Control.Grid_follow.wt_pll
    HIL_OutAO(0x4086, (float)_pv1_pv_plant_control_pll_pll_unit_delay1__out);
    // Generated from the component: PV1.PV Plant.Control.PLL.Gain1
    _pv1_pv_plant_control_pll_gain1__out = 0.016666666666666666 * _pv1_pv_plant_control_pll_pll_to_hz__out;
    // Generated from the component: PV1.PV Plant.Control.PLL.f_meas
    HIL_OutAO(0x4088, (float)_pv1_pv_plant_control_pll_pll_to_hz__out);
    // Generated from the component: PV1.PV Plant.Control.duty_cycle.ZSM.Limit1
    if (_pv1_pv_plant_control_duty_cycle_zsm_constant1__out > 1.0) {
        _pv1_pv_plant_control_duty_cycle_zsm_limit1__out = 1.0;
    } else if (_pv1_pv_plant_control_duty_cycle_zsm_constant1__out < 0.0) {
        _pv1_pv_plant_control_duty_cycle_zsm_limit1__out = 0.0;
    } else {
        _pv1_pv_plant_control_duty_cycle_zsm_limit1__out = _pv1_pv_plant_control_duty_cycle_zsm_constant1__out;
    }
    // Generated from the component: PV1.PV Plant.Control.Grid_follow.Current_abc_to_dq.abc to dq1.abc to alpha beta
    _pv1_pv_plant_control_grid_follow_current_abc_to_dq_abc_to_dq1_abc_to_alpha_beta__alpha = (2.0 * _pv1_pv_plant_ia_ia1__out - _pv1_pv_plant_ib_ia1__out - _pv1_pv_plant_ic_ia1__out) * 0.3333333333333333;
    _pv1_pv_plant_control_grid_follow_current_abc_to_dq_abc_to_dq1_abc_to_alpha_beta__beta = (_pv1_pv_plant_ib_ia1__out - _pv1_pv_plant_ic_ia1__out) * 0.5773502691896258;
    _pv1_pv_plant_control_grid_follow_current_abc_to_dq_abc_to_dq1_abc_to_alpha_beta__gamma = (_pv1_pv_plant_ia_ia1__out + _pv1_pv_plant_ib_ia1__out + _pv1_pv_plant_ic_ia1__out) * 0.3333333333333333;
    // Generated from the component: PV1.PV Plant.Control.Grid_follow.Current_abc_to_dq1.abc to dq1.abc to alpha beta
    _pv1_pv_plant_control_grid_follow_current_abc_to_dq1_abc_to_dq1_abc_to_alpha_beta__alpha = (2.0 * _pv1_pv_plant_ia1_ia1__out - _pv1_pv_plant_ib1_ia1__out - _pv1_pv_plant_ic1_ia1__out) * 0.3333333333333333;
    _pv1_pv_plant_control_grid_follow_current_abc_to_dq1_abc_to_dq1_abc_to_alpha_beta__beta = (_pv1_pv_plant_ib1_ia1__out - _pv1_pv_plant_ic1_ia1__out) * 0.5773502691896258;
    _pv1_pv_plant_control_grid_follow_current_abc_to_dq1_abc_to_dq1_abc_to_alpha_beta__gamma = (_pv1_pv_plant_ia1_ia1__out + _pv1_pv_plant_ib1_ia1__out + _pv1_pv_plant_ic1_ia1__out) * 0.3333333333333333;
    // Generated from the component: PV1.PV Plant.Vs2.Vs1
    HIL_OutFloat(145489920, (float) _pv1_pv_plant_vdc__out);
    // Generated from the component: PV1.PV Plant.Control.Grid_follow.Gain3
    _pv1_pv_plant_control_grid_follow_gain3__out = 0.001 * _pv1_pv_plant_vdc_va1__out;
    // Generated from the component: PV1.Solar irradiance.Trigonometric function1
    _pv1_solar_irradiance_trigonometric_function1__out = cos(_pv1_solar_irradiance_constant11__out);
    // Generated from the component: PV1.Solar irradiance.Trigonometric function6
    _pv1_solar_irradiance_trigonometric_function6__out = cos(_pv1_solar_irradiance_constant11__out);
    // Generated from the component: PV2.Solar irradiance.Trigonometric function1
    _pv2_solar_irradiance_trigonometric_function1__out = cos(_pv1_solar_irradiance_constant11__out);
    // Generated from the component: PV2.Solar irradiance.Trigonometric function6
    _pv2_solar_irradiance_trigonometric_function6__out = cos(_pv1_solar_irradiance_constant11__out);
    // Generated from the component: PV1.Solar irradiance.Trigonometric function2
    _pv1_solar_irradiance_trigonometric_function2__out = cos(_pv1_solar_irradiance_constant12__out);
    // Generated from the component: PV1.Solar irradiance.Trigonometric function7
    _pv1_solar_irradiance_trigonometric_function7__out = sin(_pv1_solar_irradiance_constant12__out);
    // Generated from the component: PV2.Solar irradiance.Trigonometric function2
    _pv2_solar_irradiance_trigonometric_function2__out = cos(_pv1_solar_irradiance_constant12__out);
    // Generated from the component: PV2.Solar irradiance.Trigonometric function7
    _pv2_solar_irradiance_trigonometric_function7__out = sin(_pv1_solar_irradiance_constant12__out);
    // Generated from the component: PV1.Solar irradiance.C function2
    _pv1_solar_irradiance_c_function2__ETR = _pv1_solar_irradiance_constant10__out;
    _pv1_solar_irradiance_c_function2__GHI = _pv1_solar_irradiance_constant9__out;
    if (_pv1_solar_irradiance_c_function2__k <= 0.21)_pv1_solar_irradiance_c_function2__f = 0.995 - 0.081 * _pv1_solar_irradiance_c_function2__k;
    else if (_pv1_solar_irradiance_c_function2__k > 0.76)_pv1_solar_irradiance_c_function2__f = 0.18;
    else _pv1_solar_irradiance_c_function2__f = 0.724 + 2.738 * _pv1_solar_irradiance_c_function2__k - 8.321 * _pv1_solar_irradiance_c_function2__k * _pv1_solar_irradiance_c_function2__k + 4.967 * _pv1_solar_irradiance_c_function2__k * _pv1_solar_irradiance_c_function2__k * _pv1_solar_irradiance_c_function2__k;
    _pv1_solar_irradiance_c_function2__Gdh = _pv1_solar_irradiance_c_function2__f * _pv1_solar_irradiance_c_function2__GHI;
    // Generated from the component: PV2.Solar irradiance.C function2
    _pv2_solar_irradiance_c_function2__ETR = _pv1_solar_irradiance_constant10__out;
    _pv2_solar_irradiance_c_function2__GHI = _pv1_solar_irradiance_constant9__out;
    if (_pv2_solar_irradiance_c_function2__k <= 0.21)_pv2_solar_irradiance_c_function2__f = 0.995 - 0.081 * _pv2_solar_irradiance_c_function2__k;
    else if (_pv2_solar_irradiance_c_function2__k > 0.76)_pv2_solar_irradiance_c_function2__f = 0.18;
    else _pv2_solar_irradiance_c_function2__f = 0.724 + 2.738 * _pv2_solar_irradiance_c_function2__k - 8.321 * _pv2_solar_irradiance_c_function2__k * _pv2_solar_irradiance_c_function2__k + 4.967 * _pv2_solar_irradiance_c_function2__k * _pv2_solar_irradiance_c_function2__k * _pv2_solar_irradiance_c_function2__k;
    _pv2_solar_irradiance_c_function2__Gdh = _pv2_solar_irradiance_c_function2__f * _pv2_solar_irradiance_c_function2__GHI;
    // Generated from the component: PV1.Solar irradiance.Gain4
    _pv1_solar_irradiance_gain4__out = 0.017453292519943295 * _pv1_solar_irradiance_ang_t1__out;
    // Generated from the component: PV2.PV Plant.Control.Grid_follow.ControlSignal_Calculation.Gain5
    _pv2_pv_plant_control_grid_follow_controlsignal_calculation_gain5__out = 0.5 * _pv2_pv_plant_control_grid_follow_controlsignal_calculation_limit3__out;
    // Generated from the component: PV2.PV Plant.Control.Grid_follow.ControlSignal_Calculation.Vdc
    HIL_OutAO(0x4095, (float)_pv2_pv_plant_control_grid_follow_controlsignal_calculation_limit3__out);
    // Generated from the component: PV2.PV Plant.Control.Grid_follow.P
    HIL_OutAO(0x4098, (float)_pv2_pv_plant_control_grid_follow_power_meas_gain4__out);
    // Generated from the component: PV2.PV Plant.Control.Grid_follow.Q
    HIL_OutAO(0x409a, (float)_pv2_pv_plant_control_grid_follow_power_meas_gain5__out);
    // Generated from the component: PV2.PV Plant.Control.Grid_follow.Power_Meas.Gain6
    _pv2_pv_plant_control_grid_follow_power_meas_gain6__out = 10000.0 * _pv2_pv_plant_control_grid_follow_power_meas_power_meas_dqpu_s_and_pf__S;
    // Generated from the component: PV2.PV Plant.Control.Grid_follow.pf
    HIL_OutAO(0x40a5, (float)_pv2_pv_plant_control_grid_follow_power_meas_power_meas_dqpu_s_and_pf__pf);
    // Generated from the component: PV2.PV Plant.Control.Grid_follow.Power_Meas1.Gain6
    _pv2_pv_plant_control_grid_follow_power_meas1_gain6__out = 10000.0 * _pv2_pv_plant_control_grid_follow_power_meas1_power_meas_dqpu_s_and_pf__S;
    // Generated from the component: PV2.PV Plant.Control.Grid_follow.wt_pll
    HIL_OutAO(0x40a7, (float)_pv2_pv_plant_control_pll_pll_unit_delay1__out);
    // Generated from the component: PV2.PV Plant.Control.PLL.Gain1
    _pv2_pv_plant_control_pll_gain1__out = 0.016666666666666666 * _pv2_pv_plant_control_pll_pll_to_hz__out;
    // Generated from the component: PV2.PV Plant.Control.PLL.f_meas
    HIL_OutAO(0x40a9, (float)_pv2_pv_plant_control_pll_pll_to_hz__out);
    // Generated from the component: PV2.PV Plant.Control.duty_cycle.ZSM.Limit1
    if (_pv2_pv_plant_control_duty_cycle_zsm_constant1__out > 1.0) {
        _pv2_pv_plant_control_duty_cycle_zsm_limit1__out = 1.0;
    } else if (_pv2_pv_plant_control_duty_cycle_zsm_constant1__out < 0.0) {
        _pv2_pv_plant_control_duty_cycle_zsm_limit1__out = 0.0;
    } else {
        _pv2_pv_plant_control_duty_cycle_zsm_limit1__out = _pv2_pv_plant_control_duty_cycle_zsm_constant1__out;
    }
    // Generated from the component: PV2.PV Plant.Control.Grid_follow.Current_abc_to_dq.abc to dq1.abc to alpha beta
    _pv2_pv_plant_control_grid_follow_current_abc_to_dq_abc_to_dq1_abc_to_alpha_beta__alpha = (2.0 * _pv2_pv_plant_ia_ia1__out - _pv2_pv_plant_ib_ia1__out - _pv2_pv_plant_ic_ia1__out) * 0.3333333333333333;
    _pv2_pv_plant_control_grid_follow_current_abc_to_dq_abc_to_dq1_abc_to_alpha_beta__beta = (_pv2_pv_plant_ib_ia1__out - _pv2_pv_plant_ic_ia1__out) * 0.5773502691896258;
    _pv2_pv_plant_control_grid_follow_current_abc_to_dq_abc_to_dq1_abc_to_alpha_beta__gamma = (_pv2_pv_plant_ia_ia1__out + _pv2_pv_plant_ib_ia1__out + _pv2_pv_plant_ic_ia1__out) * 0.3333333333333333;
    // Generated from the component: PV2.PV Plant.Control.Grid_follow.Current_abc_to_dq1.abc to dq1.abc to alpha beta
    _pv2_pv_plant_control_grid_follow_current_abc_to_dq1_abc_to_dq1_abc_to_alpha_beta__alpha = (2.0 * _pv2_pv_plant_ia1_ia1__out - _pv2_pv_plant_ib1_ia1__out - _pv2_pv_plant_ic1_ia1__out) * 0.3333333333333333;
    _pv2_pv_plant_control_grid_follow_current_abc_to_dq1_abc_to_dq1_abc_to_alpha_beta__beta = (_pv2_pv_plant_ib1_ia1__out - _pv2_pv_plant_ic1_ia1__out) * 0.5773502691896258;
    _pv2_pv_plant_control_grid_follow_current_abc_to_dq1_abc_to_dq1_abc_to_alpha_beta__gamma = (_pv2_pv_plant_ia1_ia1__out + _pv2_pv_plant_ib1_ia1__out + _pv2_pv_plant_ic1_ia1__out) * 0.3333333333333333;
    // Generated from the component: PV2.PV Plant.Vs2.Vs1
    HIL_OutFloat(149684224, (float) _pv2_pv_plant_vdc__out);
    // Generated from the component: PV2.PV Plant.Control.Grid_follow.Gain3
    _pv2_pv_plant_control_grid_follow_gain3__out = 0.001 * _pv2_pv_plant_vdc_va1__out;
    // Generated from the component: PV2.Solar irradiance.Gain4
    _pv2_solar_irradiance_gain4__out = 0.017453292519943295 * _pv2_solar_irradiance_ang_t2__out;
    // Generated from the component: ESS1.Battery.Mathematical function4
    _ess1_battery_mathematical_function4__out = pow(_ess1_battery_abs4__out, _ess1_battery_constant5__out);
    // Generated from the component: ESS1.Battery.Abs5
    _ess1_battery_abs5__out = fabs(_ess1_battery_sum1__out);
    // Generated from the component: ESS1.BE1-25A Synchronizer.Current_abc_to_dq3.Termination
    // Generated from the component: ESS1.BE1-25A Synchronizer.Current_abc_to_dq3.abc to dq1.alpha beta to dq
    _ess1_be1_25a_synchronizer_current_abc_to_dq3_abc_to_dq1_alpha_beta_to_dq__k1 = cos(_ess1_be1_25a_synchronizer_unit_delay2__out);
    _ess1_be1_25a_synchronizer_current_abc_to_dq3_abc_to_dq1_alpha_beta_to_dq__k2 = sin(_ess1_be1_25a_synchronizer_unit_delay2__out);
    _ess1_be1_25a_synchronizer_current_abc_to_dq3_abc_to_dq1_alpha_beta_to_dq__d = _ess1_be1_25a_synchronizer_current_abc_to_dq3_abc_to_dq1_alpha_beta_to_dq__k2 * _ess1_be1_25a_synchronizer_current_abc_to_dq3_abc_to_dq1_abc_to_alpha_beta__alpha - _ess1_be1_25a_synchronizer_current_abc_to_dq3_abc_to_dq1_alpha_beta_to_dq__k1 * _ess1_be1_25a_synchronizer_current_abc_to_dq3_abc_to_dq1_abc_to_alpha_beta__beta;
    _ess1_be1_25a_synchronizer_current_abc_to_dq3_abc_to_dq1_alpha_beta_to_dq__q = _ess1_be1_25a_synchronizer_current_abc_to_dq3_abc_to_dq1_alpha_beta_to_dq__k1 * _ess1_be1_25a_synchronizer_current_abc_to_dq3_abc_to_dq1_abc_to_alpha_beta__alpha + _ess1_be1_25a_synchronizer_current_abc_to_dq3_abc_to_dq1_alpha_beta_to_dq__k2 * _ess1_be1_25a_synchronizer_current_abc_to_dq3_abc_to_dq1_abc_to_alpha_beta__beta;
    // Generated from the component: ESS1.Controller.PLL.PLL.abc to dq.alpha beta to dq
    _ess1_controller_pll_pll_abc_to_dq_alpha_beta_to_dq__k1 = cos(_ess1_controller_pll_pll_unit_delay1__out);
    _ess1_controller_pll_pll_abc_to_dq_alpha_beta_to_dq__k2 = sin(_ess1_controller_pll_pll_unit_delay1__out);
    _ess1_controller_pll_pll_abc_to_dq_alpha_beta_to_dq__d = _ess1_controller_pll_pll_abc_to_dq_alpha_beta_to_dq__k2 * _ess1_controller_pll_pll_abc_to_dq_abc_to_alpha_beta__alpha - _ess1_controller_pll_pll_abc_to_dq_alpha_beta_to_dq__k1 * _ess1_controller_pll_pll_abc_to_dq_abc_to_alpha_beta__beta;
    _ess1_controller_pll_pll_abc_to_dq_alpha_beta_to_dq__q = _ess1_controller_pll_pll_abc_to_dq_alpha_beta_to_dq__k1 * _ess1_controller_pll_pll_abc_to_dq_abc_to_alpha_beta__alpha + _ess1_controller_pll_pll_abc_to_dq_alpha_beta_to_dq__k2 * _ess1_controller_pll_pll_abc_to_dq_abc_to_alpha_beta__beta;
    // Generated from the component: ESS1.Controller.PLL.PLL.term_zero
    // Generated from the component: ESS1.Controller.Current_abc_to_dq4.Termination1
    // Generated from the component: ESS1.Controller.Current_abc_to_dq4.abc to dq1.alpha beta to dq
    _ess1_controller_current_abc_to_dq4_abc_to_dq1_alpha_beta_to_dq__k1 = cos(_ess1_controller_pll_pll_unit_delay1__out);
    _ess1_controller_current_abc_to_dq4_abc_to_dq1_alpha_beta_to_dq__k2 = sin(_ess1_controller_pll_pll_unit_delay1__out);
    _ess1_controller_current_abc_to_dq4_abc_to_dq1_alpha_beta_to_dq__d = _ess1_controller_current_abc_to_dq4_abc_to_dq1_alpha_beta_to_dq__k2 * _ess1_controller_current_abc_to_dq4_abc_to_dq1_abc_to_alpha_beta__alpha - _ess1_controller_current_abc_to_dq4_abc_to_dq1_alpha_beta_to_dq__k1 * _ess1_controller_current_abc_to_dq4_abc_to_dq1_abc_to_alpha_beta__beta;
    _ess1_controller_current_abc_to_dq4_abc_to_dq1_alpha_beta_to_dq__q = _ess1_controller_current_abc_to_dq4_abc_to_dq1_alpha_beta_to_dq__k1 * _ess1_controller_current_abc_to_dq4_abc_to_dq1_abc_to_alpha_beta__alpha + _ess1_controller_current_abc_to_dq4_abc_to_dq1_alpha_beta_to_dq__k2 * _ess1_controller_current_abc_to_dq4_abc_to_dq1_abc_to_alpha_beta__beta;
    // Generated from the component: ESS1.P
    HIL_OutAO(0x4035, (float)_ess1_power_meter__Pdc);
    // Generated from the component: ESS1.Q
    HIL_OutAO(0x4037, (float)_ess1_power_meter__Qdc);
    // Generated from the component: ESS1.Battery.Abs1
    _ess1_battery_abs1__out = fabs(_ess1_battery_c_function2__Ibat);
    // Generated from the component: ESS1.Battery.Abs2
    _ess1_battery_abs2__out = fabs(_ess1_battery_c_function2__Ibat);
    // Generated from the component: ESS1.Battery.Abs3
    _ess1_battery_abs3__out = fabs(_ess1_battery_c_function2__Ibat);
    // Generated from the component: ESS1.Battery.C function1
    _ess1_battery_c_function1__Ibat = _ess1_battery_c_function2__Ibat;
    _ess1_battery_c_function1__SOC = _ess1_battery_rate_transition3_output__out;
    if (_ess1_battery_c_function1__Ibat > 0)_ess1_battery_c_function1__out = 20.73 * (_ess1_battery_c_function1__SOC - 1) / (_ess1_battery_c_function1__Ibat / 55.0 + 0.55);
    else _ess1_battery_c_function1__out = 20.73 * (_ess1_battery_c_function1__SOC - 1) / (-_ess1_battery_c_function1__Ibat / 55.0 + 0.55);
    // Generated from the component: ESS1.Battery.Ibat
    HIL_OutAO(0x401a, (float)_ess1_battery_c_function2__Ibat);
    // Generated from the component: ESS1.Battery.LPF_dc
    _ess1_battery_lpf_dc__a_sum = 0.0f;
    _ess1_battery_lpf_dc__b_sum = 0.0f;
    _ess1_battery_lpf_dc__delay_line_in = 0.0f;
    for (_ess1_battery_lpf_dc__i = 0; _ess1_battery_lpf_dc__i < 1; _ess1_battery_lpf_dc__i++) {
        _ess1_battery_lpf_dc__b_sum += _ess1_battery_lpf_dc__b_coeff[_ess1_battery_lpf_dc__i + 1] * _ess1_battery_lpf_dc__states[_ess1_battery_lpf_dc__i];
    }
    _ess1_battery_lpf_dc__a_sum += _ess1_battery_lpf_dc__states[0] * _ess1_battery_lpf_dc__a_coeff[1];
    _ess1_battery_lpf_dc__delay_line_in = _ess1_battery_c_function2__Ibat - _ess1_battery_lpf_dc__a_sum;
    _ess1_battery_lpf_dc__b_sum += _ess1_battery_lpf_dc__b_coeff[0] * _ess1_battery_lpf_dc__delay_line_in;
    _ess1_battery_lpf_dc__out = _ess1_battery_lpf_dc__b_sum;
    // Generated from the component: ESS1.Gain18
    _ess1_gain18__out = 0.05 * _ess1_c_function1__out;
    // Generated from the component: ESS1.S
    HIL_OutAO(0x4039, (float)_ess1_power_meas_gain6__out);
    // Generated from the component: ESS1.Gain17
    _ess1_gain17__out = 0.05 * _ess1_c_function2__out;
    // Generated from the component: ESS1.Controller.Outer Voltage Loop + Inner Current Loop.Logical operator1
    _ess1_controller_outer_voltage_loop___inner_current_loop_logical_operator1__out = _ess1_logical_operator3__out || _ess1_controller_outer_voltage_loop___inner_current_loop_gfm_mode__out ;
    // Generated from the component: ESS1.S2.CTC_Wrapper
    if (_ess1_logical_operator2__out == 0x0) {
        HIL_OutInt32(0x8640480, 0x0);
    }
    else {
        HIL_OutInt32(0x8640480, 0x1);
    }
    // Generated from the component: ESS1.BE1-25A Synchronizer.Ea-Va
    HIL_OutAO(0x400a, (float)_ess1_be1_25a_synchronizer_sum6__out);
    // Generated from the component: ESS1.BE1-25A Synchronizer.Eb-Vb
    HIL_OutAO(0x400b, (float)_ess1_be1_25a_synchronizer_sum7__out);
    // Generated from the component: ESS1.Controller.Current_abc_to_dq3.Termination1
    // Generated from the component: ESS1.Controller.Current_abc_to_dq3.abc to dq1.alpha beta to dq
    _ess1_controller_current_abc_to_dq3_abc_to_dq1_alpha_beta_to_dq__k1 = cos(_ess1_controller_pll_pll_unit_delay1__out);
    _ess1_controller_current_abc_to_dq3_abc_to_dq1_alpha_beta_to_dq__k2 = sin(_ess1_controller_pll_pll_unit_delay1__out);
    _ess1_controller_current_abc_to_dq3_abc_to_dq1_alpha_beta_to_dq__d = _ess1_controller_current_abc_to_dq3_abc_to_dq1_alpha_beta_to_dq__k2 * _ess1_controller_current_abc_to_dq3_abc_to_dq1_abc_to_alpha_beta__alpha - _ess1_controller_current_abc_to_dq3_abc_to_dq1_alpha_beta_to_dq__k1 * _ess1_controller_current_abc_to_dq3_abc_to_dq1_abc_to_alpha_beta__beta;
    _ess1_controller_current_abc_to_dq3_abc_to_dq1_alpha_beta_to_dq__q = _ess1_controller_current_abc_to_dq3_abc_to_dq1_alpha_beta_to_dq__k1 * _ess1_controller_current_abc_to_dq3_abc_to_dq1_abc_to_alpha_beta__alpha + _ess1_controller_current_abc_to_dq3_abc_to_dq1_alpha_beta_to_dq__k2 * _ess1_controller_current_abc_to_dq3_abc_to_dq1_abc_to_alpha_beta__beta;
    // Generated from the component: ESS1.BE1-25A Synchronizer.Ec-Vc
    HIL_OutAO(0x400c, (float)_ess1_be1_25a_synchronizer_sum8__out);
    // Generated from the component: ESS1.BE1-25A Synchronizer.abc to dq2.abc to alpha beta
    _ess1_be1_25a_synchronizer_abc_to_dq2_abc_to_alpha_beta__alpha = (2.0 * _ess1_be1_25a_synchronizer_sum6__out - _ess1_be1_25a_synchronizer_sum7__out - _ess1_be1_25a_synchronizer_sum8__out) * 0.3333333333333333;
    _ess1_be1_25a_synchronizer_abc_to_dq2_abc_to_alpha_beta__beta = (_ess1_be1_25a_synchronizer_sum7__out - _ess1_be1_25a_synchronizer_sum8__out) * 0.5773502691896258;
    _ess1_be1_25a_synchronizer_abc_to_dq2_abc_to_alpha_beta__gamma = (_ess1_be1_25a_synchronizer_sum6__out + _ess1_be1_25a_synchronizer_sum7__out + _ess1_be1_25a_synchronizer_sum8__out) * 0.3333333333333333;
    // Generated from the component: ESS1.BE1-25A Synchronizer.Termination1
    // Generated from the component: ESS1.BE1-25A Synchronizer.abc to dq1.alpha beta to dq
    _ess1_be1_25a_synchronizer_abc_to_dq1_alpha_beta_to_dq__k1 = cos(_ess1_be1_25a_synchronizer_unit_delay2__out);
    _ess1_be1_25a_synchronizer_abc_to_dq1_alpha_beta_to_dq__k2 = sin(_ess1_be1_25a_synchronizer_unit_delay2__out);
    _ess1_be1_25a_synchronizer_abc_to_dq1_alpha_beta_to_dq__d = _ess1_be1_25a_synchronizer_abc_to_dq1_alpha_beta_to_dq__k2 * _ess1_be1_25a_synchronizer_abc_to_dq1_abc_to_alpha_beta__alpha - _ess1_be1_25a_synchronizer_abc_to_dq1_alpha_beta_to_dq__k1 * _ess1_be1_25a_synchronizer_abc_to_dq1_abc_to_alpha_beta__beta;
    _ess1_be1_25a_synchronizer_abc_to_dq1_alpha_beta_to_dq__q = _ess1_be1_25a_synchronizer_abc_to_dq1_alpha_beta_to_dq__k1 * _ess1_be1_25a_synchronizer_abc_to_dq1_abc_to_alpha_beta__alpha + _ess1_be1_25a_synchronizer_abc_to_dq1_alpha_beta_to_dq__k2 * _ess1_be1_25a_synchronizer_abc_to_dq1_abc_to_alpha_beta__beta;
    // Generated from the component: ESS1.Controller.Current_abc_to_dq.Termination1
    // Generated from the component: ESS1.Controller.Current_abc_to_dq.abc to dq1.alpha beta to dq
    _ess1_controller_current_abc_to_dq_abc_to_dq1_alpha_beta_to_dq__k1 = cos(_ess1_controller_pll_pll_unit_delay1__out);
    _ess1_controller_current_abc_to_dq_abc_to_dq1_alpha_beta_to_dq__k2 = sin(_ess1_controller_pll_pll_unit_delay1__out);
    _ess1_controller_current_abc_to_dq_abc_to_dq1_alpha_beta_to_dq__d = _ess1_controller_current_abc_to_dq_abc_to_dq1_alpha_beta_to_dq__k2 * _ess1_controller_current_abc_to_dq_abc_to_dq1_abc_to_alpha_beta__alpha - _ess1_controller_current_abc_to_dq_abc_to_dq1_alpha_beta_to_dq__k1 * _ess1_controller_current_abc_to_dq_abc_to_dq1_abc_to_alpha_beta__beta;
    _ess1_controller_current_abc_to_dq_abc_to_dq1_alpha_beta_to_dq__q = _ess1_controller_current_abc_to_dq_abc_to_dq1_alpha_beta_to_dq__k1 * _ess1_controller_current_abc_to_dq_abc_to_dq1_abc_to_alpha_beta__alpha + _ess1_controller_current_abc_to_dq_abc_to_dq1_alpha_beta_to_dq__k2 * _ess1_controller_current_abc_to_dq_abc_to_dq1_abc_to_alpha_beta__beta;
    // Generated from the component: ESS2.Battery.Mathematical function4
    _ess2_battery_mathematical_function4__out = pow(_ess2_battery_abs4__out, _ess2_battery_constant5__out);
    // Generated from the component: ESS2.Battery.Abs5
    _ess2_battery_abs5__out = fabs(_ess2_battery_sum1__out);
    // Generated from the component: ESS2.BE1-25A Synchronizer.Current_abc_to_dq3.Termination
    // Generated from the component: ESS2.BE1-25A Synchronizer.Current_abc_to_dq3.abc to dq1.alpha beta to dq
    _ess2_be1_25a_synchronizer_current_abc_to_dq3_abc_to_dq1_alpha_beta_to_dq__k1 = cos(_ess2_be1_25a_synchronizer_unit_delay2__out);
    _ess2_be1_25a_synchronizer_current_abc_to_dq3_abc_to_dq1_alpha_beta_to_dq__k2 = sin(_ess2_be1_25a_synchronizer_unit_delay2__out);
    _ess2_be1_25a_synchronizer_current_abc_to_dq3_abc_to_dq1_alpha_beta_to_dq__d = _ess2_be1_25a_synchronizer_current_abc_to_dq3_abc_to_dq1_alpha_beta_to_dq__k2 * _ess2_be1_25a_synchronizer_current_abc_to_dq3_abc_to_dq1_abc_to_alpha_beta__alpha - _ess2_be1_25a_synchronizer_current_abc_to_dq3_abc_to_dq1_alpha_beta_to_dq__k1 * _ess2_be1_25a_synchronizer_current_abc_to_dq3_abc_to_dq1_abc_to_alpha_beta__beta;
    _ess2_be1_25a_synchronizer_current_abc_to_dq3_abc_to_dq1_alpha_beta_to_dq__q = _ess2_be1_25a_synchronizer_current_abc_to_dq3_abc_to_dq1_alpha_beta_to_dq__k1 * _ess2_be1_25a_synchronizer_current_abc_to_dq3_abc_to_dq1_abc_to_alpha_beta__alpha + _ess2_be1_25a_synchronizer_current_abc_to_dq3_abc_to_dq1_alpha_beta_to_dq__k2 * _ess2_be1_25a_synchronizer_current_abc_to_dq3_abc_to_dq1_abc_to_alpha_beta__beta;
    // Generated from the component: ESS2.Controller.PLL.PLL.abc to dq.alpha beta to dq
    _ess2_controller_pll_pll_abc_to_dq_alpha_beta_to_dq__k1 = cos(_ess2_controller_pll_pll_unit_delay1__out);
    _ess2_controller_pll_pll_abc_to_dq_alpha_beta_to_dq__k2 = sin(_ess2_controller_pll_pll_unit_delay1__out);
    _ess2_controller_pll_pll_abc_to_dq_alpha_beta_to_dq__d = _ess2_controller_pll_pll_abc_to_dq_alpha_beta_to_dq__k2 * _ess2_controller_pll_pll_abc_to_dq_abc_to_alpha_beta__alpha - _ess2_controller_pll_pll_abc_to_dq_alpha_beta_to_dq__k1 * _ess2_controller_pll_pll_abc_to_dq_abc_to_alpha_beta__beta;
    _ess2_controller_pll_pll_abc_to_dq_alpha_beta_to_dq__q = _ess2_controller_pll_pll_abc_to_dq_alpha_beta_to_dq__k1 * _ess2_controller_pll_pll_abc_to_dq_abc_to_alpha_beta__alpha + _ess2_controller_pll_pll_abc_to_dq_alpha_beta_to_dq__k2 * _ess2_controller_pll_pll_abc_to_dq_abc_to_alpha_beta__beta;
    // Generated from the component: ESS2.Controller.PLL.PLL.term_zero
    // Generated from the component: ESS2.Controller.Current_abc_to_dq4.Termination1
    // Generated from the component: ESS2.Controller.Current_abc_to_dq4.abc to dq1.alpha beta to dq
    _ess2_controller_current_abc_to_dq4_abc_to_dq1_alpha_beta_to_dq__k1 = cos(_ess2_controller_pll_pll_unit_delay1__out);
    _ess2_controller_current_abc_to_dq4_abc_to_dq1_alpha_beta_to_dq__k2 = sin(_ess2_controller_pll_pll_unit_delay1__out);
    _ess2_controller_current_abc_to_dq4_abc_to_dq1_alpha_beta_to_dq__d = _ess2_controller_current_abc_to_dq4_abc_to_dq1_alpha_beta_to_dq__k2 * _ess2_controller_current_abc_to_dq4_abc_to_dq1_abc_to_alpha_beta__alpha - _ess2_controller_current_abc_to_dq4_abc_to_dq1_alpha_beta_to_dq__k1 * _ess2_controller_current_abc_to_dq4_abc_to_dq1_abc_to_alpha_beta__beta;
    _ess2_controller_current_abc_to_dq4_abc_to_dq1_alpha_beta_to_dq__q = _ess2_controller_current_abc_to_dq4_abc_to_dq1_alpha_beta_to_dq__k1 * _ess2_controller_current_abc_to_dq4_abc_to_dq1_abc_to_alpha_beta__alpha + _ess2_controller_current_abc_to_dq4_abc_to_dq1_alpha_beta_to_dq__k2 * _ess2_controller_current_abc_to_dq4_abc_to_dq1_abc_to_alpha_beta__beta;
    // Generated from the component: ESS2.P
    HIL_OutAO(0x406a, (float)_ess2_power_meter__Pdc);
    // Generated from the component: ESS2.Q
    HIL_OutAO(0x406c, (float)_ess2_power_meter__Qdc);
    // Generated from the component: ESS2.Battery.Abs1
    _ess2_battery_abs1__out = fabs(_ess2_battery_c_function2__Ibat);
    // Generated from the component: ESS2.Battery.Abs2
    _ess2_battery_abs2__out = fabs(_ess2_battery_c_function2__Ibat);
    // Generated from the component: ESS2.Battery.Abs3
    _ess2_battery_abs3__out = fabs(_ess2_battery_c_function2__Ibat);
    // Generated from the component: ESS2.Battery.C function1
    _ess2_battery_c_function1__Ibat = _ess2_battery_c_function2__Ibat;
    _ess2_battery_c_function1__SOC = _ess2_battery_rate_transition3_output__out;
    if (_ess2_battery_c_function1__Ibat > 0)_ess2_battery_c_function1__out = 20.73 * (_ess2_battery_c_function1__SOC - 1) / (_ess2_battery_c_function1__Ibat / 55.0 + 0.55);
    else _ess2_battery_c_function1__out = 20.73 * (_ess2_battery_c_function1__SOC - 1) / (-_ess2_battery_c_function1__Ibat / 55.0 + 0.55);
    // Generated from the component: ESS2.Battery.Ibat
    HIL_OutAO(0x404f, (float)_ess2_battery_c_function2__Ibat);
    // Generated from the component: ESS2.Battery.LPF_dc
    _ess2_battery_lpf_dc__a_sum = 0.0f;
    _ess2_battery_lpf_dc__b_sum = 0.0f;
    _ess2_battery_lpf_dc__delay_line_in = 0.0f;
    for (_ess2_battery_lpf_dc__i = 0; _ess2_battery_lpf_dc__i < 1; _ess2_battery_lpf_dc__i++) {
        _ess2_battery_lpf_dc__b_sum += _ess2_battery_lpf_dc__b_coeff[_ess2_battery_lpf_dc__i + 1] * _ess2_battery_lpf_dc__states[_ess2_battery_lpf_dc__i];
    }
    _ess2_battery_lpf_dc__a_sum += _ess2_battery_lpf_dc__states[0] * _ess2_battery_lpf_dc__a_coeff[1];
    _ess2_battery_lpf_dc__delay_line_in = _ess2_battery_c_function2__Ibat - _ess2_battery_lpf_dc__a_sum;
    _ess2_battery_lpf_dc__b_sum += _ess2_battery_lpf_dc__b_coeff[0] * _ess2_battery_lpf_dc__delay_line_in;
    _ess2_battery_lpf_dc__out = _ess2_battery_lpf_dc__b_sum;
    // Generated from the component: ESS2.Gain18
    _ess2_gain18__out = 0.05 * _ess2_c_function1__out;
    // Generated from the component: ESS2.S
    HIL_OutAO(0x406e, (float)_ess2_power_meas_gain6__out);
    // Generated from the component: ESS2.Gain17
    _ess2_gain17__out = 0.05 * _ess2_c_function2__out;
    // Generated from the component: ESS2.Controller.Outer Voltage Loop + Inner Current Loop.Logical operator1
    _ess2_controller_outer_voltage_loop___inner_current_loop_logical_operator1__out = _ess2_logical_operator3__out || _ess2_controller_outer_voltage_loop___inner_current_loop_gfm_mode__out ;
    // Generated from the component: ESS2.S2.CTC_Wrapper
    if (_ess2_logical_operator2__out == 0x0) {
        HIL_OutInt32(0x9240480, 0x0);
    }
    else {
        HIL_OutInt32(0x9240480, 0x1);
    }
    // Generated from the component: ESS2.BE1-25A Synchronizer.Ea-Va
    HIL_OutAO(0x403f, (float)_ess2_be1_25a_synchronizer_sum6__out);
    // Generated from the component: ESS2.BE1-25A Synchronizer.Eb-Vb
    HIL_OutAO(0x4040, (float)_ess2_be1_25a_synchronizer_sum7__out);
    // Generated from the component: ESS2.Controller.Current_abc_to_dq3.Termination1
    // Generated from the component: ESS2.Controller.Current_abc_to_dq3.abc to dq1.alpha beta to dq
    _ess2_controller_current_abc_to_dq3_abc_to_dq1_alpha_beta_to_dq__k1 = cos(_ess2_controller_pll_pll_unit_delay1__out);
    _ess2_controller_current_abc_to_dq3_abc_to_dq1_alpha_beta_to_dq__k2 = sin(_ess2_controller_pll_pll_unit_delay1__out);
    _ess2_controller_current_abc_to_dq3_abc_to_dq1_alpha_beta_to_dq__d = _ess2_controller_current_abc_to_dq3_abc_to_dq1_alpha_beta_to_dq__k2 * _ess2_controller_current_abc_to_dq3_abc_to_dq1_abc_to_alpha_beta__alpha - _ess2_controller_current_abc_to_dq3_abc_to_dq1_alpha_beta_to_dq__k1 * _ess2_controller_current_abc_to_dq3_abc_to_dq1_abc_to_alpha_beta__beta;
    _ess2_controller_current_abc_to_dq3_abc_to_dq1_alpha_beta_to_dq__q = _ess2_controller_current_abc_to_dq3_abc_to_dq1_alpha_beta_to_dq__k1 * _ess2_controller_current_abc_to_dq3_abc_to_dq1_abc_to_alpha_beta__alpha + _ess2_controller_current_abc_to_dq3_abc_to_dq1_alpha_beta_to_dq__k2 * _ess2_controller_current_abc_to_dq3_abc_to_dq1_abc_to_alpha_beta__beta;
    // Generated from the component: ESS2.BE1-25A Synchronizer.Ec-Vc
    HIL_OutAO(0x4041, (float)_ess2_be1_25a_synchronizer_sum8__out);
    // Generated from the component: ESS2.BE1-25A Synchronizer.abc to dq2.abc to alpha beta
    _ess2_be1_25a_synchronizer_abc_to_dq2_abc_to_alpha_beta__alpha = (2.0 * _ess2_be1_25a_synchronizer_sum6__out - _ess2_be1_25a_synchronizer_sum7__out - _ess2_be1_25a_synchronizer_sum8__out) * 0.3333333333333333;
    _ess2_be1_25a_synchronizer_abc_to_dq2_abc_to_alpha_beta__beta = (_ess2_be1_25a_synchronizer_sum7__out - _ess2_be1_25a_synchronizer_sum8__out) * 0.5773502691896258;
    _ess2_be1_25a_synchronizer_abc_to_dq2_abc_to_alpha_beta__gamma = (_ess2_be1_25a_synchronizer_sum6__out + _ess2_be1_25a_synchronizer_sum7__out + _ess2_be1_25a_synchronizer_sum8__out) * 0.3333333333333333;
    // Generated from the component: ESS2.BE1-25A Synchronizer.Termination1
    // Generated from the component: ESS2.BE1-25A Synchronizer.abc to dq1.alpha beta to dq
    _ess2_be1_25a_synchronizer_abc_to_dq1_alpha_beta_to_dq__k1 = cos(_ess2_be1_25a_synchronizer_unit_delay2__out);
    _ess2_be1_25a_synchronizer_abc_to_dq1_alpha_beta_to_dq__k2 = sin(_ess2_be1_25a_synchronizer_unit_delay2__out);
    _ess2_be1_25a_synchronizer_abc_to_dq1_alpha_beta_to_dq__d = _ess2_be1_25a_synchronizer_abc_to_dq1_alpha_beta_to_dq__k2 * _ess2_be1_25a_synchronizer_abc_to_dq1_abc_to_alpha_beta__alpha - _ess2_be1_25a_synchronizer_abc_to_dq1_alpha_beta_to_dq__k1 * _ess2_be1_25a_synchronizer_abc_to_dq1_abc_to_alpha_beta__beta;
    _ess2_be1_25a_synchronizer_abc_to_dq1_alpha_beta_to_dq__q = _ess2_be1_25a_synchronizer_abc_to_dq1_alpha_beta_to_dq__k1 * _ess2_be1_25a_synchronizer_abc_to_dq1_abc_to_alpha_beta__alpha + _ess2_be1_25a_synchronizer_abc_to_dq1_alpha_beta_to_dq__k2 * _ess2_be1_25a_synchronizer_abc_to_dq1_abc_to_alpha_beta__beta;
    // Generated from the component: ESS2.Controller.Current_abc_to_dq.Termination1
    // Generated from the component: ESS2.Controller.Current_abc_to_dq.abc to dq1.alpha beta to dq
    _ess2_controller_current_abc_to_dq_abc_to_dq1_alpha_beta_to_dq__k1 = cos(_ess2_controller_pll_pll_unit_delay1__out);
    _ess2_controller_current_abc_to_dq_abc_to_dq1_alpha_beta_to_dq__k2 = sin(_ess2_controller_pll_pll_unit_delay1__out);
    _ess2_controller_current_abc_to_dq_abc_to_dq1_alpha_beta_to_dq__d = _ess2_controller_current_abc_to_dq_abc_to_dq1_alpha_beta_to_dq__k2 * _ess2_controller_current_abc_to_dq_abc_to_dq1_abc_to_alpha_beta__alpha - _ess2_controller_current_abc_to_dq_abc_to_dq1_alpha_beta_to_dq__k1 * _ess2_controller_current_abc_to_dq_abc_to_dq1_abc_to_alpha_beta__beta;
    _ess2_controller_current_abc_to_dq_abc_to_dq1_alpha_beta_to_dq__q = _ess2_controller_current_abc_to_dq_abc_to_dq1_alpha_beta_to_dq__k1 * _ess2_controller_current_abc_to_dq_abc_to_dq1_abc_to_alpha_beta__alpha + _ess2_controller_current_abc_to_dq_abc_to_dq1_alpha_beta_to_dq__k2 * _ess2_controller_current_abc_to_dq_abc_to_dq1_abc_to_alpha_beta__beta;
    // Generated from the component: PV1.PV Plant.Control.Grid_follow.S
    HIL_OutAO(0x407b, (float)_pv1_pv_plant_control_grid_follow_power_meas_gain6__out);
    // Generated from the component: PV1.PV Plant.Control.Grid_follow.w_pu
    HIL_OutAO(0x4085, (float)_pv1_pv_plant_control_pll_gain1__out);
    // Generated from the component: PV1.PV Plant.Control.duty_cycle.ZSM.Sum2
    _pv1_pv_plant_control_duty_cycle_zsm_sum2__out =  - _pv1_pv_plant_control_duty_cycle_zsm_limit1__out + _pv1_pv_plant_control_duty_cycle_zsm_constant3__out;
    // Generated from the component: PV1.PV Plant.Control.duty_cycle.ZSM.Sum8
    _pv1_pv_plant_control_duty_cycle_zsm_sum8__out =  - _pv1_pv_plant_control_duty_cycle_zsm_limit1__out + _pv1_pv_plant_control_duty_cycle_zsm_constant4__out;
    // Generated from the component: PV1.PV Plant.Control.Grid_follow.Current_abc_to_dq.Termination1
    // Generated from the component: PV1.PV Plant.Control.Grid_follow.Current_abc_to_dq.abc to dq1.alpha beta to dq
    _pv1_pv_plant_control_grid_follow_current_abc_to_dq_abc_to_dq1_alpha_beta_to_dq__k1 = cos(_pv1_pv_plant_control_pll_pll_unit_delay1__out);
    _pv1_pv_plant_control_grid_follow_current_abc_to_dq_abc_to_dq1_alpha_beta_to_dq__k2 = sin(_pv1_pv_plant_control_pll_pll_unit_delay1__out);
    _pv1_pv_plant_control_grid_follow_current_abc_to_dq_abc_to_dq1_alpha_beta_to_dq__d = _pv1_pv_plant_control_grid_follow_current_abc_to_dq_abc_to_dq1_alpha_beta_to_dq__k2 * _pv1_pv_plant_control_grid_follow_current_abc_to_dq_abc_to_dq1_abc_to_alpha_beta__alpha - _pv1_pv_plant_control_grid_follow_current_abc_to_dq_abc_to_dq1_alpha_beta_to_dq__k1 * _pv1_pv_plant_control_grid_follow_current_abc_to_dq_abc_to_dq1_abc_to_alpha_beta__beta;
    _pv1_pv_plant_control_grid_follow_current_abc_to_dq_abc_to_dq1_alpha_beta_to_dq__q = _pv1_pv_plant_control_grid_follow_current_abc_to_dq_abc_to_dq1_alpha_beta_to_dq__k1 * _pv1_pv_plant_control_grid_follow_current_abc_to_dq_abc_to_dq1_abc_to_alpha_beta__alpha + _pv1_pv_plant_control_grid_follow_current_abc_to_dq_abc_to_dq1_alpha_beta_to_dq__k2 * _pv1_pv_plant_control_grid_follow_current_abc_to_dq_abc_to_dq1_abc_to_alpha_beta__beta;
    // Generated from the component: PV1.PV Plant.Control.Grid_follow.Current_abc_to_dq1.Termination1
    // Generated from the component: PV1.PV Plant.Control.Grid_follow.Current_abc_to_dq1.abc to dq1.alpha beta to dq
    _pv1_pv_plant_control_grid_follow_current_abc_to_dq1_abc_to_dq1_alpha_beta_to_dq__k1 = cos(_pv1_pv_plant_control_pll_pll_unit_delay1__out);
    _pv1_pv_plant_control_grid_follow_current_abc_to_dq1_abc_to_dq1_alpha_beta_to_dq__k2 = sin(_pv1_pv_plant_control_pll_pll_unit_delay1__out);
    _pv1_pv_plant_control_grid_follow_current_abc_to_dq1_abc_to_dq1_alpha_beta_to_dq__d = _pv1_pv_plant_control_grid_follow_current_abc_to_dq1_abc_to_dq1_alpha_beta_to_dq__k2 * _pv1_pv_plant_control_grid_follow_current_abc_to_dq1_abc_to_dq1_abc_to_alpha_beta__alpha - _pv1_pv_plant_control_grid_follow_current_abc_to_dq1_abc_to_dq1_alpha_beta_to_dq__k1 * _pv1_pv_plant_control_grid_follow_current_abc_to_dq1_abc_to_dq1_abc_to_alpha_beta__beta;
    _pv1_pv_plant_control_grid_follow_current_abc_to_dq1_abc_to_dq1_alpha_beta_to_dq__q = _pv1_pv_plant_control_grid_follow_current_abc_to_dq1_abc_to_dq1_alpha_beta_to_dq__k1 * _pv1_pv_plant_control_grid_follow_current_abc_to_dq1_abc_to_dq1_abc_to_alpha_beta__alpha + _pv1_pv_plant_control_grid_follow_current_abc_to_dq1_abc_to_dq1_alpha_beta_to_dq__k2 * _pv1_pv_plant_control_grid_follow_current_abc_to_dq1_abc_to_dq1_abc_to_alpha_beta__beta;
    // Generated from the component: PV1.PV Plant.Control.Grid_follow.ControlSignal_Calculation.LPF_dc
    _pv1_pv_plant_control_grid_follow_controlsignal_calculation_lpf_dc__a_sum = 0.0f;
    _pv1_pv_plant_control_grid_follow_controlsignal_calculation_lpf_dc__b_sum = 0.0f;
    _pv1_pv_plant_control_grid_follow_controlsignal_calculation_lpf_dc__delay_line_in = 0.0f;
    for (_pv1_pv_plant_control_grid_follow_controlsignal_calculation_lpf_dc__i = 0; _pv1_pv_plant_control_grid_follow_controlsignal_calculation_lpf_dc__i < 1; _pv1_pv_plant_control_grid_follow_controlsignal_calculation_lpf_dc__i++) {
        _pv1_pv_plant_control_grid_follow_controlsignal_calculation_lpf_dc__b_sum += _pv1_pv_plant_control_grid_follow_controlsignal_calculation_lpf_dc__b_coeff[_pv1_pv_plant_control_grid_follow_controlsignal_calculation_lpf_dc__i + 1] * _pv1_pv_plant_control_grid_follow_controlsignal_calculation_lpf_dc__states[_pv1_pv_plant_control_grid_follow_controlsignal_calculation_lpf_dc__i];
    }
    _pv1_pv_plant_control_grid_follow_controlsignal_calculation_lpf_dc__a_sum += _pv1_pv_plant_control_grid_follow_controlsignal_calculation_lpf_dc__states[0] * _pv1_pv_plant_control_grid_follow_controlsignal_calculation_lpf_dc__a_coeff[1];
    _pv1_pv_plant_control_grid_follow_controlsignal_calculation_lpf_dc__delay_line_in = _pv1_pv_plant_control_grid_follow_gain3__out - _pv1_pv_plant_control_grid_follow_controlsignal_calculation_lpf_dc__a_sum;
    _pv1_pv_plant_control_grid_follow_controlsignal_calculation_lpf_dc__b_sum += _pv1_pv_plant_control_grid_follow_controlsignal_calculation_lpf_dc__b_coeff[0] * _pv1_pv_plant_control_grid_follow_controlsignal_calculation_lpf_dc__delay_line_in;
    _pv1_pv_plant_control_grid_follow_controlsignal_calculation_lpf_dc__out = _pv1_pv_plant_control_grid_follow_controlsignal_calculation_lpf_dc__b_sum;
    // Generated from the component: PV1.Solar irradiance.Product4
    _pv1_solar_irradiance_product4__out = (_pv1_solar_irradiance_c_function2__f * _pv1_solar_irradiance_c_function2__f);
    // Generated from the component: PV1.Solar irradiance.Sum3
    _pv1_solar_irradiance_sum3__out = _pv1_solar_irradiance_constant9__out - _pv1_solar_irradiance_c_function2__Gdh;
    // Generated from the component: PV2.Solar irradiance.Sum3
    _pv2_solar_irradiance_sum3__out = _pv1_solar_irradiance_constant9__out - _pv1_solar_irradiance_c_function2__Gdh;
    // Generated from the component: PV2.Solar irradiance.Product4
    _pv2_solar_irradiance_product4__out = (_pv2_solar_irradiance_c_function2__f * _pv2_solar_irradiance_c_function2__f);
    // Generated from the component: PV1.Solar irradiance.Gain1
    _pv1_solar_irradiance_gain1__out = 0.5 * _pv1_solar_irradiance_gain4__out;
    // Generated from the component: PV1.Solar irradiance.Gain2
    _pv1_solar_irradiance_gain2__out = 0.5 * _pv1_solar_irradiance_gain4__out;
    // Generated from the component: PV1.Solar irradiance.Trigonometric function3
    _pv1_solar_irradiance_trigonometric_function3__out = cos(_pv1_solar_irradiance_gain4__out);
    // Generated from the component: PV2.PV Plant.Control.Grid_follow.S
    HIL_OutAO(0x409c, (float)_pv2_pv_plant_control_grid_follow_power_meas_gain6__out);
    // Generated from the component: PV2.PV Plant.Control.Grid_follow.w_pu
    HIL_OutAO(0x40a6, (float)_pv2_pv_plant_control_pll_gain1__out);
    // Generated from the component: PV2.PV Plant.Control.duty_cycle.ZSM.Sum2
    _pv2_pv_plant_control_duty_cycle_zsm_sum2__out =  - _pv2_pv_plant_control_duty_cycle_zsm_limit1__out + _pv2_pv_plant_control_duty_cycle_zsm_constant3__out;
    // Generated from the component: PV2.PV Plant.Control.duty_cycle.ZSM.Sum8
    _pv2_pv_plant_control_duty_cycle_zsm_sum8__out =  - _pv2_pv_plant_control_duty_cycle_zsm_limit1__out + _pv2_pv_plant_control_duty_cycle_zsm_constant4__out;
    // Generated from the component: PV2.PV Plant.Control.Grid_follow.Current_abc_to_dq.Termination1
    // Generated from the component: PV2.PV Plant.Control.Grid_follow.Current_abc_to_dq.abc to dq1.alpha beta to dq
    _pv2_pv_plant_control_grid_follow_current_abc_to_dq_abc_to_dq1_alpha_beta_to_dq__k1 = cos(_pv2_pv_plant_control_pll_pll_unit_delay1__out);
    _pv2_pv_plant_control_grid_follow_current_abc_to_dq_abc_to_dq1_alpha_beta_to_dq__k2 = sin(_pv2_pv_plant_control_pll_pll_unit_delay1__out);
    _pv2_pv_plant_control_grid_follow_current_abc_to_dq_abc_to_dq1_alpha_beta_to_dq__d = _pv2_pv_plant_control_grid_follow_current_abc_to_dq_abc_to_dq1_alpha_beta_to_dq__k2 * _pv2_pv_plant_control_grid_follow_current_abc_to_dq_abc_to_dq1_abc_to_alpha_beta__alpha - _pv2_pv_plant_control_grid_follow_current_abc_to_dq_abc_to_dq1_alpha_beta_to_dq__k1 * _pv2_pv_plant_control_grid_follow_current_abc_to_dq_abc_to_dq1_abc_to_alpha_beta__beta;
    _pv2_pv_plant_control_grid_follow_current_abc_to_dq_abc_to_dq1_alpha_beta_to_dq__q = _pv2_pv_plant_control_grid_follow_current_abc_to_dq_abc_to_dq1_alpha_beta_to_dq__k1 * _pv2_pv_plant_control_grid_follow_current_abc_to_dq_abc_to_dq1_abc_to_alpha_beta__alpha + _pv2_pv_plant_control_grid_follow_current_abc_to_dq_abc_to_dq1_alpha_beta_to_dq__k2 * _pv2_pv_plant_control_grid_follow_current_abc_to_dq_abc_to_dq1_abc_to_alpha_beta__beta;
    // Generated from the component: PV2.PV Plant.Control.Grid_follow.Current_abc_to_dq1.Termination1
    // Generated from the component: PV2.PV Plant.Control.Grid_follow.Current_abc_to_dq1.abc to dq1.alpha beta to dq
    _pv2_pv_plant_control_grid_follow_current_abc_to_dq1_abc_to_dq1_alpha_beta_to_dq__k1 = cos(_pv2_pv_plant_control_pll_pll_unit_delay1__out);
    _pv2_pv_plant_control_grid_follow_current_abc_to_dq1_abc_to_dq1_alpha_beta_to_dq__k2 = sin(_pv2_pv_plant_control_pll_pll_unit_delay1__out);
    _pv2_pv_plant_control_grid_follow_current_abc_to_dq1_abc_to_dq1_alpha_beta_to_dq__d = _pv2_pv_plant_control_grid_follow_current_abc_to_dq1_abc_to_dq1_alpha_beta_to_dq__k2 * _pv2_pv_plant_control_grid_follow_current_abc_to_dq1_abc_to_dq1_abc_to_alpha_beta__alpha - _pv2_pv_plant_control_grid_follow_current_abc_to_dq1_abc_to_dq1_alpha_beta_to_dq__k1 * _pv2_pv_plant_control_grid_follow_current_abc_to_dq1_abc_to_dq1_abc_to_alpha_beta__beta;
    _pv2_pv_plant_control_grid_follow_current_abc_to_dq1_abc_to_dq1_alpha_beta_to_dq__q = _pv2_pv_plant_control_grid_follow_current_abc_to_dq1_abc_to_dq1_alpha_beta_to_dq__k1 * _pv2_pv_plant_control_grid_follow_current_abc_to_dq1_abc_to_dq1_abc_to_alpha_beta__alpha + _pv2_pv_plant_control_grid_follow_current_abc_to_dq1_abc_to_dq1_alpha_beta_to_dq__k2 * _pv2_pv_plant_control_grid_follow_current_abc_to_dq1_abc_to_dq1_abc_to_alpha_beta__beta;
    // Generated from the component: PV2.PV Plant.Control.Grid_follow.ControlSignal_Calculation.LPF_dc
    _pv2_pv_plant_control_grid_follow_controlsignal_calculation_lpf_dc__a_sum = 0.0f;
    _pv2_pv_plant_control_grid_follow_controlsignal_calculation_lpf_dc__b_sum = 0.0f;
    _pv2_pv_plant_control_grid_follow_controlsignal_calculation_lpf_dc__delay_line_in = 0.0f;
    for (_pv2_pv_plant_control_grid_follow_controlsignal_calculation_lpf_dc__i = 0; _pv2_pv_plant_control_grid_follow_controlsignal_calculation_lpf_dc__i < 1; _pv2_pv_plant_control_grid_follow_controlsignal_calculation_lpf_dc__i++) {
        _pv2_pv_plant_control_grid_follow_controlsignal_calculation_lpf_dc__b_sum += _pv2_pv_plant_control_grid_follow_controlsignal_calculation_lpf_dc__b_coeff[_pv2_pv_plant_control_grid_follow_controlsignal_calculation_lpf_dc__i + 1] * _pv2_pv_plant_control_grid_follow_controlsignal_calculation_lpf_dc__states[_pv2_pv_plant_control_grid_follow_controlsignal_calculation_lpf_dc__i];
    }
    _pv2_pv_plant_control_grid_follow_controlsignal_calculation_lpf_dc__a_sum += _pv2_pv_plant_control_grid_follow_controlsignal_calculation_lpf_dc__states[0] * _pv2_pv_plant_control_grid_follow_controlsignal_calculation_lpf_dc__a_coeff[1];
    _pv2_pv_plant_control_grid_follow_controlsignal_calculation_lpf_dc__delay_line_in = _pv2_pv_plant_control_grid_follow_gain3__out - _pv2_pv_plant_control_grid_follow_controlsignal_calculation_lpf_dc__a_sum;
    _pv2_pv_plant_control_grid_follow_controlsignal_calculation_lpf_dc__b_sum += _pv2_pv_plant_control_grid_follow_controlsignal_calculation_lpf_dc__b_coeff[0] * _pv2_pv_plant_control_grid_follow_controlsignal_calculation_lpf_dc__delay_line_in;
    _pv2_pv_plant_control_grid_follow_controlsignal_calculation_lpf_dc__out = _pv2_pv_plant_control_grid_follow_controlsignal_calculation_lpf_dc__b_sum;
    // Generated from the component: PV2.Solar irradiance.Gain1
    _pv2_solar_irradiance_gain1__out = 0.5 * _pv2_solar_irradiance_gain4__out;
    // Generated from the component: PV2.Solar irradiance.Gain2
    _pv2_solar_irradiance_gain2__out = 0.5 * _pv2_solar_irradiance_gain4__out;
    // Generated from the component: PV2.Solar irradiance.Trigonometric function3
    _pv2_solar_irradiance_trigonometric_function3__out = cos(_pv2_solar_irradiance_gain4__out);
    // Generated from the component: ESS1.Battery.Mathematical function5
    _ess1_battery_mathematical_function5__out = pow(_ess1_battery_abs5__out, _ess1_battery_constant7__out);
    // Generated from the component: ESS1.BE1-25A Synchronizer.Gain12
    _ess1_be1_25a_synchronizer_gain12__out = 0.0025515518153991436 * _ess1_be1_25a_synchronizer_current_abc_to_dq3_abc_to_dq1_alpha_beta_to_dq__q;
    // Generated from the component: ESS1.BE1-25A Synchronizer.Gain7
    _ess1_be1_25a_synchronizer_gain7__out = 0.0025515518153991436 * _ess1_be1_25a_synchronizer_current_abc_to_dq3_abc_to_dq1_alpha_beta_to_dq__d;
    // Generated from the component: ESS1.Controller.PLL.PLL.abc to dq.LPF_d
    _ess1_controller_pll_pll_abc_to_dq_lpf_d__a_sum = 0.0f;
    _ess1_controller_pll_pll_abc_to_dq_lpf_d__b_sum = 0.0f;
    _ess1_controller_pll_pll_abc_to_dq_lpf_d__delay_line_in = 0.0f;
    for (_ess1_controller_pll_pll_abc_to_dq_lpf_d__i = 0; _ess1_controller_pll_pll_abc_to_dq_lpf_d__i < 1; _ess1_controller_pll_pll_abc_to_dq_lpf_d__i++) {
        _ess1_controller_pll_pll_abc_to_dq_lpf_d__b_sum += _ess1_controller_pll_pll_abc_to_dq_lpf_d__b_coeff[_ess1_controller_pll_pll_abc_to_dq_lpf_d__i + 1] * _ess1_controller_pll_pll_abc_to_dq_lpf_d__states[_ess1_controller_pll_pll_abc_to_dq_lpf_d__i];
    }
    _ess1_controller_pll_pll_abc_to_dq_lpf_d__a_sum += _ess1_controller_pll_pll_abc_to_dq_lpf_d__states[0] * _ess1_controller_pll_pll_abc_to_dq_lpf_d__a_coeff[1];
    _ess1_controller_pll_pll_abc_to_dq_lpf_d__delay_line_in = (_ess1_controller_pll_pll_abc_to_dq_alpha_beta_to_dq__d - _ess1_controller_pll_pll_abc_to_dq_lpf_d__a_sum) / _ess1_controller_pll_pll_abc_to_dq_lpf_d__a_coeff[0];
    _ess1_controller_pll_pll_abc_to_dq_lpf_d__b_sum += _ess1_controller_pll_pll_abc_to_dq_lpf_d__b_coeff[0] * _ess1_controller_pll_pll_abc_to_dq_lpf_d__delay_line_in;
    _ess1_controller_pll_pll_abc_to_dq_lpf_d__out = _ess1_controller_pll_pll_abc_to_dq_lpf_d__b_sum;
    // Generated from the component: ESS1.Controller.PLL.PLL.abc to dq.LPF_q
    _ess1_controller_pll_pll_abc_to_dq_lpf_q__a_sum = 0.0f;
    _ess1_controller_pll_pll_abc_to_dq_lpf_q__b_sum = 0.0f;
    _ess1_controller_pll_pll_abc_to_dq_lpf_q__delay_line_in = 0.0f;
    for (_ess1_controller_pll_pll_abc_to_dq_lpf_q__i = 0; _ess1_controller_pll_pll_abc_to_dq_lpf_q__i < 1; _ess1_controller_pll_pll_abc_to_dq_lpf_q__i++) {
        _ess1_controller_pll_pll_abc_to_dq_lpf_q__b_sum += _ess1_controller_pll_pll_abc_to_dq_lpf_q__b_coeff[_ess1_controller_pll_pll_abc_to_dq_lpf_q__i + 1] * _ess1_controller_pll_pll_abc_to_dq_lpf_q__states[_ess1_controller_pll_pll_abc_to_dq_lpf_q__i];
    }
    _ess1_controller_pll_pll_abc_to_dq_lpf_q__a_sum += _ess1_controller_pll_pll_abc_to_dq_lpf_q__states[0] * _ess1_controller_pll_pll_abc_to_dq_lpf_q__a_coeff[1];
    _ess1_controller_pll_pll_abc_to_dq_lpf_q__delay_line_in = (_ess1_controller_pll_pll_abc_to_dq_alpha_beta_to_dq__q - _ess1_controller_pll_pll_abc_to_dq_lpf_q__a_sum) / _ess1_controller_pll_pll_abc_to_dq_lpf_q__a_coeff[0];
    _ess1_controller_pll_pll_abc_to_dq_lpf_q__b_sum += _ess1_controller_pll_pll_abc_to_dq_lpf_q__b_coeff[0] * _ess1_controller_pll_pll_abc_to_dq_lpf_q__delay_line_in;
    _ess1_controller_pll_pll_abc_to_dq_lpf_q__out = _ess1_controller_pll_pll_abc_to_dq_lpf_q__b_sum;
    // Generated from the component: ESS1.Controller.Gain11
    _ess1_controller_gain11__out = 0.029393876913398145 * _ess1_controller_current_abc_to_dq4_abc_to_dq1_alpha_beta_to_dq__d;
    // Generated from the component: ESS1.Controller.Gain12
    _ess1_controller_gain12__out = 0.029393876913398145 * _ess1_controller_current_abc_to_dq4_abc_to_dq1_alpha_beta_to_dq__q;
    // Generated from the component: ESS1.Battery.Product1
    _ess1_battery_product1__out = (_ess1_battery_abs1__out) * 1.0 / (_ess1_battery_constant1__out);
    // Generated from the component: ESS1.Battery.Mathematical function2
    _ess1_battery_mathematical_function2__out = pow(_ess1_battery_abs2__out, _ess1_battery_constant3__out);
    // Generated from the component: ESS1.Battery.Mathematical function3
    _ess1_battery_mathematical_function3__out = pow(_ess1_battery_abs3__out, _ess1_battery_constant4__out);
    // Generated from the component: ESS1.Battery.Mathematical function6
    _ess1_battery_mathematical_function6__out = pow(M_E, _ess1_battery_c_function1__out);
    // Generated from the component: ESS1.Controller.Frequency droop.Sum1
    _ess1_controller_frequency_droop_sum1__out = _ess1_gain18__out - _ess1_controller_integrator2__out;
    // Generated from the component: ESS1.Controller.Voltage droop.Sum2
    _ess1_controller_voltage_droop_sum2__out = _ess1_gain17__out - _ess1_controller_integrator3__out;
    // Generated from the component: ESS1.Controller.Gain10
    _ess1_controller_gain10__out = 0.0025515518153991436 * _ess1_controller_current_abc_to_dq3_abc_to_dq1_alpha_beta_to_dq__q;
    // Generated from the component: ESS1.Controller.Gain9
    _ess1_controller_gain9__out = 0.0025515518153991436 * _ess1_controller_current_abc_to_dq3_abc_to_dq1_alpha_beta_to_dq__d;
    // Generated from the component: ESS1.BE1-25A Synchronizer.Termination2
    // Generated from the component: ESS1.BE1-25A Synchronizer.abc to dq2.alpha beta to dq
    _ess1_be1_25a_synchronizer_abc_to_dq2_alpha_beta_to_dq__k1 = cos(_ess1_be1_25a_synchronizer_unit_delay2__out);
    _ess1_be1_25a_synchronizer_abc_to_dq2_alpha_beta_to_dq__k2 = sin(_ess1_be1_25a_synchronizer_unit_delay2__out);
    _ess1_be1_25a_synchronizer_abc_to_dq2_alpha_beta_to_dq__d = _ess1_be1_25a_synchronizer_abc_to_dq2_alpha_beta_to_dq__k2 * _ess1_be1_25a_synchronizer_abc_to_dq2_abc_to_alpha_beta__alpha - _ess1_be1_25a_synchronizer_abc_to_dq2_alpha_beta_to_dq__k1 * _ess1_be1_25a_synchronizer_abc_to_dq2_abc_to_alpha_beta__beta;
    _ess1_be1_25a_synchronizer_abc_to_dq2_alpha_beta_to_dq__q = _ess1_be1_25a_synchronizer_abc_to_dq2_alpha_beta_to_dq__k1 * _ess1_be1_25a_synchronizer_abc_to_dq2_abc_to_alpha_beta__alpha + _ess1_be1_25a_synchronizer_abc_to_dq2_alpha_beta_to_dq__k2 * _ess1_be1_25a_synchronizer_abc_to_dq2_abc_to_alpha_beta__beta;
    // Generated from the component: ESS1.BE1-25A Synchronizer.Gain5
    _ess1_be1_25a_synchronizer_gain5__out = 0.0025515518153991436 * _ess1_be1_25a_synchronizer_abc_to_dq1_alpha_beta_to_dq__d;
    // Generated from the component: ESS1.BE1-25A Synchronizer.Gain6
    _ess1_be1_25a_synchronizer_gain6__out = 0.0025515518153991436 * _ess1_be1_25a_synchronizer_abc_to_dq1_alpha_beta_to_dq__q;
    // Generated from the component: ESS1.Controller.Gain6
    _ess1_controller_gain6__out = 0.029393876913398145 * _ess1_controller_current_abc_to_dq_abc_to_dq1_alpha_beta_to_dq__d;
    // Generated from the component: ESS1.Controller.Gain7
    _ess1_controller_gain7__out = 0.029393876913398145 * _ess1_controller_current_abc_to_dq_abc_to_dq1_alpha_beta_to_dq__q;
    // Generated from the component: ESS2.Battery.Mathematical function5
    _ess2_battery_mathematical_function5__out = pow(_ess2_battery_abs5__out, _ess2_battery_constant7__out);
    // Generated from the component: ESS2.BE1-25A Synchronizer.Gain12
    _ess2_be1_25a_synchronizer_gain12__out = 0.0025515518153991436 * _ess2_be1_25a_synchronizer_current_abc_to_dq3_abc_to_dq1_alpha_beta_to_dq__q;
    // Generated from the component: ESS2.BE1-25A Synchronizer.Gain7
    _ess2_be1_25a_synchronizer_gain7__out = 0.0025515518153991436 * _ess2_be1_25a_synchronizer_current_abc_to_dq3_abc_to_dq1_alpha_beta_to_dq__d;
    // Generated from the component: ESS2.Controller.PLL.PLL.abc to dq.LPF_d
    _ess2_controller_pll_pll_abc_to_dq_lpf_d__a_sum = 0.0f;
    _ess2_controller_pll_pll_abc_to_dq_lpf_d__b_sum = 0.0f;
    _ess2_controller_pll_pll_abc_to_dq_lpf_d__delay_line_in = 0.0f;
    for (_ess2_controller_pll_pll_abc_to_dq_lpf_d__i = 0; _ess2_controller_pll_pll_abc_to_dq_lpf_d__i < 1; _ess2_controller_pll_pll_abc_to_dq_lpf_d__i++) {
        _ess2_controller_pll_pll_abc_to_dq_lpf_d__b_sum += _ess2_controller_pll_pll_abc_to_dq_lpf_d__b_coeff[_ess2_controller_pll_pll_abc_to_dq_lpf_d__i + 1] * _ess2_controller_pll_pll_abc_to_dq_lpf_d__states[_ess2_controller_pll_pll_abc_to_dq_lpf_d__i];
    }
    _ess2_controller_pll_pll_abc_to_dq_lpf_d__a_sum += _ess2_controller_pll_pll_abc_to_dq_lpf_d__states[0] * _ess2_controller_pll_pll_abc_to_dq_lpf_d__a_coeff[1];
    _ess2_controller_pll_pll_abc_to_dq_lpf_d__delay_line_in = (_ess2_controller_pll_pll_abc_to_dq_alpha_beta_to_dq__d - _ess2_controller_pll_pll_abc_to_dq_lpf_d__a_sum) / _ess2_controller_pll_pll_abc_to_dq_lpf_d__a_coeff[0];
    _ess2_controller_pll_pll_abc_to_dq_lpf_d__b_sum += _ess2_controller_pll_pll_abc_to_dq_lpf_d__b_coeff[0] * _ess2_controller_pll_pll_abc_to_dq_lpf_d__delay_line_in;
    _ess2_controller_pll_pll_abc_to_dq_lpf_d__out = _ess2_controller_pll_pll_abc_to_dq_lpf_d__b_sum;
    // Generated from the component: ESS2.Controller.PLL.PLL.abc to dq.LPF_q
    _ess2_controller_pll_pll_abc_to_dq_lpf_q__a_sum = 0.0f;
    _ess2_controller_pll_pll_abc_to_dq_lpf_q__b_sum = 0.0f;
    _ess2_controller_pll_pll_abc_to_dq_lpf_q__delay_line_in = 0.0f;
    for (_ess2_controller_pll_pll_abc_to_dq_lpf_q__i = 0; _ess2_controller_pll_pll_abc_to_dq_lpf_q__i < 1; _ess2_controller_pll_pll_abc_to_dq_lpf_q__i++) {
        _ess2_controller_pll_pll_abc_to_dq_lpf_q__b_sum += _ess2_controller_pll_pll_abc_to_dq_lpf_q__b_coeff[_ess2_controller_pll_pll_abc_to_dq_lpf_q__i + 1] * _ess2_controller_pll_pll_abc_to_dq_lpf_q__states[_ess2_controller_pll_pll_abc_to_dq_lpf_q__i];
    }
    _ess2_controller_pll_pll_abc_to_dq_lpf_q__a_sum += _ess2_controller_pll_pll_abc_to_dq_lpf_q__states[0] * _ess2_controller_pll_pll_abc_to_dq_lpf_q__a_coeff[1];
    _ess2_controller_pll_pll_abc_to_dq_lpf_q__delay_line_in = (_ess2_controller_pll_pll_abc_to_dq_alpha_beta_to_dq__q - _ess2_controller_pll_pll_abc_to_dq_lpf_q__a_sum) / _ess2_controller_pll_pll_abc_to_dq_lpf_q__a_coeff[0];
    _ess2_controller_pll_pll_abc_to_dq_lpf_q__b_sum += _ess2_controller_pll_pll_abc_to_dq_lpf_q__b_coeff[0] * _ess2_controller_pll_pll_abc_to_dq_lpf_q__delay_line_in;
    _ess2_controller_pll_pll_abc_to_dq_lpf_q__out = _ess2_controller_pll_pll_abc_to_dq_lpf_q__b_sum;
    // Generated from the component: ESS2.Controller.Gain11
    _ess2_controller_gain11__out = 0.029393876913398145 * _ess2_controller_current_abc_to_dq4_abc_to_dq1_alpha_beta_to_dq__d;
    // Generated from the component: ESS2.Controller.Gain12
    _ess2_controller_gain12__out = 0.029393876913398145 * _ess2_controller_current_abc_to_dq4_abc_to_dq1_alpha_beta_to_dq__q;
    // Generated from the component: ESS2.Battery.Product1
    _ess2_battery_product1__out = (_ess2_battery_abs1__out) * 1.0 / (_ess2_battery_constant1__out);
    // Generated from the component: ESS2.Battery.Mathematical function2
    _ess2_battery_mathematical_function2__out = pow(_ess2_battery_abs2__out, _ess2_battery_constant3__out);
    // Generated from the component: ESS2.Battery.Mathematical function3
    _ess2_battery_mathematical_function3__out = pow(_ess2_battery_abs3__out, _ess2_battery_constant4__out);
    // Generated from the component: ESS2.Battery.Mathematical function6
    _ess2_battery_mathematical_function6__out = pow(M_E, _ess2_battery_c_function1__out);
    // Generated from the component: ESS2.Controller.Frequency droop.Sum1
    _ess2_controller_frequency_droop_sum1__out = _ess2_gain18__out - _ess2_controller_integrator2__out;
    // Generated from the component: ESS2.Controller.Voltage droop.Sum2
    _ess2_controller_voltage_droop_sum2__out = _ess2_gain17__out - _ess2_controller_integrator3__out;
    // Generated from the component: ESS2.Controller.Gain10
    _ess2_controller_gain10__out = 0.0025515518153991436 * _ess2_controller_current_abc_to_dq3_abc_to_dq1_alpha_beta_to_dq__q;
    // Generated from the component: ESS2.Controller.Gain9
    _ess2_controller_gain9__out = 0.0025515518153991436 * _ess2_controller_current_abc_to_dq3_abc_to_dq1_alpha_beta_to_dq__d;
    // Generated from the component: ESS2.BE1-25A Synchronizer.Termination2
    // Generated from the component: ESS2.BE1-25A Synchronizer.abc to dq2.alpha beta to dq
    _ess2_be1_25a_synchronizer_abc_to_dq2_alpha_beta_to_dq__k1 = cos(_ess2_be1_25a_synchronizer_unit_delay2__out);
    _ess2_be1_25a_synchronizer_abc_to_dq2_alpha_beta_to_dq__k2 = sin(_ess2_be1_25a_synchronizer_unit_delay2__out);
    _ess2_be1_25a_synchronizer_abc_to_dq2_alpha_beta_to_dq__d = _ess2_be1_25a_synchronizer_abc_to_dq2_alpha_beta_to_dq__k2 * _ess2_be1_25a_synchronizer_abc_to_dq2_abc_to_alpha_beta__alpha - _ess2_be1_25a_synchronizer_abc_to_dq2_alpha_beta_to_dq__k1 * _ess2_be1_25a_synchronizer_abc_to_dq2_abc_to_alpha_beta__beta;
    _ess2_be1_25a_synchronizer_abc_to_dq2_alpha_beta_to_dq__q = _ess2_be1_25a_synchronizer_abc_to_dq2_alpha_beta_to_dq__k1 * _ess2_be1_25a_synchronizer_abc_to_dq2_abc_to_alpha_beta__alpha + _ess2_be1_25a_synchronizer_abc_to_dq2_alpha_beta_to_dq__k2 * _ess2_be1_25a_synchronizer_abc_to_dq2_abc_to_alpha_beta__beta;
    // Generated from the component: ESS2.BE1-25A Synchronizer.Gain5
    _ess2_be1_25a_synchronizer_gain5__out = 0.0025515518153991436 * _ess2_be1_25a_synchronizer_abc_to_dq1_alpha_beta_to_dq__d;
    // Generated from the component: ESS2.BE1-25A Synchronizer.Gain6
    _ess2_be1_25a_synchronizer_gain6__out = 0.0025515518153991436 * _ess2_be1_25a_synchronizer_abc_to_dq1_alpha_beta_to_dq__q;
    // Generated from the component: ESS2.Controller.Gain6
    _ess2_controller_gain6__out = 0.029393876913398145 * _ess2_controller_current_abc_to_dq_abc_to_dq1_alpha_beta_to_dq__d;
    // Generated from the component: ESS2.Controller.Gain7
    _ess2_controller_gain7__out = 0.029393876913398145 * _ess2_controller_current_abc_to_dq_abc_to_dq1_alpha_beta_to_dq__q;
    // Generated from the component: PV1.PV Plant.Control.Grid_follow.Current_abc_to_dq.Gain1
    _pv1_pv_plant_control_grid_follow_current_abc_to_dq_gain1__out = 0.05878775382679627 * _pv1_pv_plant_control_grid_follow_current_abc_to_dq_abc_to_dq1_alpha_beta_to_dq__d;
    // Generated from the component: PV1.PV Plant.Control.Grid_follow.Current_abc_to_dq.Gain2
    _pv1_pv_plant_control_grid_follow_current_abc_to_dq_gain2__out = 0.05878775382679627 * _pv1_pv_plant_control_grid_follow_current_abc_to_dq_abc_to_dq1_alpha_beta_to_dq__q;
    // Generated from the component: PV1.PV Plant.Control.Grid_follow.Current_abc_to_dq1.Gain1
    _pv1_pv_plant_control_grid_follow_current_abc_to_dq1_gain1__out = 0.05878775382679627 * _pv1_pv_plant_control_grid_follow_current_abc_to_dq1_abc_to_dq1_alpha_beta_to_dq__d;
    // Generated from the component: PV1.PV Plant.Control.Grid_follow.Current_abc_to_dq1.Gain2
    _pv1_pv_plant_control_grid_follow_current_abc_to_dq1_gain2__out = 0.05878775382679627 * _pv1_pv_plant_control_grid_follow_current_abc_to_dq1_abc_to_dq1_alpha_beta_to_dq__q;
    // Generated from the component: PV1.Solar irradiance.Sum5
    _pv1_solar_irradiance_sum5__out = _pv1_solar_irradiance_constant17__out - _pv1_solar_irradiance_product4__out;
    // Generated from the component: PV1.Solar irradiance.Product2
    _pv1_solar_irradiance_product2__out = (_pv1_solar_irradiance_sum3__out * _pv1_solar_irradiance_trigonometric_function1__out) * 1.0 / (_pv1_solar_irradiance_trigonometric_function2__out);
    // Generated from the component: PV2.Solar irradiance.Product2
    _pv2_solar_irradiance_product2__out = (_pv2_solar_irradiance_sum3__out * _pv2_solar_irradiance_trigonometric_function1__out) * 1.0 / (_pv2_solar_irradiance_trigonometric_function2__out);
    // Generated from the component: PV2.Solar irradiance.Sum5
    _pv2_solar_irradiance_sum5__out = _pv2_solar_irradiance_constant17__out - _pv2_solar_irradiance_product4__out;
    // Generated from the component: PV1.Solar irradiance.Trigonometric function4
    _pv1_solar_irradiance_trigonometric_function4__out = cos(_pv1_solar_irradiance_gain1__out);
    // Generated from the component: PV1.Solar irradiance.Trigonometric function5
    _pv1_solar_irradiance_trigonometric_function5__out = sin(_pv1_solar_irradiance_gain2__out);
    // Generated from the component: PV1.Solar irradiance.Sum4
    _pv1_solar_irradiance_sum4__out = _pv1_solar_irradiance_constant15__out - _pv1_solar_irradiance_trigonometric_function3__out;
    // Generated from the component: PV2.PV Plant.Control.Grid_follow.Current_abc_to_dq.Gain1
    _pv2_pv_plant_control_grid_follow_current_abc_to_dq_gain1__out = 0.05878775382679627 * _pv2_pv_plant_control_grid_follow_current_abc_to_dq_abc_to_dq1_alpha_beta_to_dq__d;
    // Generated from the component: PV2.PV Plant.Control.Grid_follow.Current_abc_to_dq.Gain2
    _pv2_pv_plant_control_grid_follow_current_abc_to_dq_gain2__out = 0.05878775382679627 * _pv2_pv_plant_control_grid_follow_current_abc_to_dq_abc_to_dq1_alpha_beta_to_dq__q;
    // Generated from the component: PV2.PV Plant.Control.Grid_follow.Current_abc_to_dq1.Gain1
    _pv2_pv_plant_control_grid_follow_current_abc_to_dq1_gain1__out = 0.05878775382679627 * _pv2_pv_plant_control_grid_follow_current_abc_to_dq1_abc_to_dq1_alpha_beta_to_dq__d;
    // Generated from the component: PV2.PV Plant.Control.Grid_follow.Current_abc_to_dq1.Gain2
    _pv2_pv_plant_control_grid_follow_current_abc_to_dq1_gain2__out = 0.05878775382679627 * _pv2_pv_plant_control_grid_follow_current_abc_to_dq1_abc_to_dq1_alpha_beta_to_dq__q;
    // Generated from the component: PV2.Solar irradiance.Trigonometric function4
    _pv2_solar_irradiance_trigonometric_function4__out = cos(_pv2_solar_irradiance_gain1__out);
    // Generated from the component: PV2.Solar irradiance.Trigonometric function5
    _pv2_solar_irradiance_trigonometric_function5__out = sin(_pv2_solar_irradiance_gain2__out);
    // Generated from the component: PV2.Solar irradiance.Sum4
    _pv2_solar_irradiance_sum4__out = _pv2_solar_irradiance_constant15__out - _pv2_solar_irradiance_trigonometric_function3__out;
    // Generated from the component: ESS1.BE1-25A Synchronizer.E_q
    HIL_OutAO(0x4009, (float)_ess1_be1_25a_synchronizer_gain12__out);
    // Generated from the component: ESS1.BE1-25A Synchronizer.Product2
    _ess1_be1_25a_synchronizer_product2__out = (_ess1_be1_25a_synchronizer_gain12__out * _ess1_be1_25a_synchronizer_gain12__out);
    // Generated from the component: ESS1.BE1-25A Synchronizer.E_d
    HIL_OutAO(0x4008, (float)_ess1_be1_25a_synchronizer_gain7__out);
    // Generated from the component: ESS1.BE1-25A Synchronizer.Limit1
    if (_ess1_be1_25a_synchronizer_gain7__out < 1e-12) {
        _ess1_be1_25a_synchronizer_limit1__out = 1e-12;
    } else {
        _ess1_be1_25a_synchronizer_limit1__out = _ess1_be1_25a_synchronizer_gain7__out;
    }
    // Generated from the component: ESS1.BE1-25A Synchronizer.Product1
    _ess1_be1_25a_synchronizer_product1__out = (_ess1_be1_25a_synchronizer_gain7__out * _ess1_be1_25a_synchronizer_gain7__out);
    // Generated from the component: ESS1.Controller.PLL.Gain4
    _ess1_controller_pll_gain4__out = 0.0025515518153991436 * _ess1_controller_pll_pll_abc_to_dq_lpf_d__out;
    // Generated from the component: ESS1.Controller.PLL.Gain3
    _ess1_controller_pll_gain3__out = 0.0025515518153991436 * _ess1_controller_pll_pll_abc_to_dq_lpf_q__out;
    // Generated from the component: ESS1.Controller.PLL.PLL.normalize
    _ess1_controller_pll_pll_normalize__in1 = _ess1_controller_pll_pll_abc_to_dq_lpf_d__out;
    _ess1_controller_pll_pll_normalize__in2 = _ess1_controller_pll_pll_abc_to_dq_lpf_q__out;
    _ess1_controller_pll_pll_normalize__pk = (powf(_ess1_controller_pll_pll_normalize__in1, 2.0) + powf(_ess1_controller_pll_pll_normalize__in2, 2.0));
    _ess1_controller_pll_pll_normalize__pk = sqrt(_ess1_controller_pll_pll_normalize__pk);
    if (_ess1_controller_pll_pll_normalize__pk < 0.1) {
        _ess1_controller_pll_pll_normalize__in2_pu = _ess1_controller_pll_pll_normalize__in2 / 0.1;
    }
    else {
        _ess1_controller_pll_pll_normalize__in2_pu = _ess1_controller_pll_pll_normalize__in2 / _ess1_controller_pll_pll_normalize__pk;
    }
    // Generated from the component: ESS1.Battery.Mathematical function1
    _ess1_battery_mathematical_function1__out = pow(_ess1_battery_product1__out, _ess1_battery_constant2__out);
    // Generated from the component: ESS1.Battery.Sum2
    _ess1_battery_sum2__out = _ess1_battery_constant8__out - _ess1_battery_mathematical_function6__out;
    // Generated from the component: ESS1.Controller.Frequency droop.Gain3
    _ess1_controller_frequency_droop_gain3__out = 0.011309733552923255 * _ess1_controller_frequency_droop_sum1__out;
    // Generated from the component: ESS1.Controller.Voltage droop.Gain3
    _ess1_controller_voltage_droop_gain3__out = 0.01959591794226543 * _ess1_controller_voltage_droop_sum2__out;
    // Generated from the component: ESS1.Controller.Voltage droop.dQ
    HIL_OutAO(0x4030, (float)_ess1_controller_voltage_droop_sum2__out);
    // Generated from the component: ESS1.Controller.Outer Voltage Loop + Inner Current Loop.Outer voltage control loop.Gain4
    _ess1_controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_gain4__out = 5.760000000000002e-05 * _ess1_controller_gain10__out;
    // Generated from the component: ESS1.Controller.Outer Voltage Loop + Inner Current Loop.Outer voltage control loop.Gain6
    _ess1_controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_gain6__out = 5.760000000000002e-05 * _ess1_controller_gain9__out;
    // Generated from the component: ESS1.BE1-25A Synchronizer.Ed-Vd
    HIL_OutAO(0x400d, (float)_ess1_be1_25a_synchronizer_abc_to_dq2_alpha_beta_to_dq__d);
    // Generated from the component: ESS1.BE1-25A Synchronizer.Eq-Vq
    HIL_OutAO(0x400e, (float)_ess1_be1_25a_synchronizer_abc_to_dq2_alpha_beta_to_dq__q);
    // Generated from the component: ESS1.BE1-25A Synchronizer.Limit2
    if (_ess1_be1_25a_synchronizer_gain5__out < 1e-12) {
        _ess1_be1_25a_synchronizer_limit2__out = 1e-12;
    } else {
        _ess1_be1_25a_synchronizer_limit2__out = _ess1_be1_25a_synchronizer_gain5__out;
    }
    // Generated from the component: ESS1.BE1-25A Synchronizer.Product3
    _ess1_be1_25a_synchronizer_product3__out = (_ess1_be1_25a_synchronizer_gain5__out * _ess1_be1_25a_synchronizer_gain5__out);
    // Generated from the component: ESS1.BE1-25A Synchronizer.Vd_G
    HIL_OutAO(0x400f, (float)_ess1_be1_25a_synchronizer_gain5__out);
    // Generated from the component: ESS1.BE1-25A Synchronizer.PLL.PID controller1
    _ess1_be1_25a_synchronizer_pll_pid_controller1__pi_reg_out_int = _ess1_be1_25a_synchronizer_pll_pid_controller1__integrator_state + 1.0 * _ess1_be1_25a_synchronizer_gain6__out;
    if (_ess1_be1_25a_synchronizer_pll_pid_controller1__pi_reg_out_int < 373.84952577718536) {
        _ess1_be1_25a_synchronizer_pll_pid_controller1__out = 373.84952577718536;
        _ess1_be1_25a_synchronizer_pll_pid_controller1__av_active = 1;
    } else if (_ess1_be1_25a_synchronizer_pll_pid_controller1__pi_reg_out_int > 380.132711084365) {
        _ess1_be1_25a_synchronizer_pll_pid_controller1__out = 380.132711084365;
        _ess1_be1_25a_synchronizer_pll_pid_controller1__av_active = 1;
    } else {
        _ess1_be1_25a_synchronizer_pll_pid_controller1__out = _ess1_be1_25a_synchronizer_pll_pid_controller1__pi_reg_out_int;
        _ess1_be1_25a_synchronizer_pll_pid_controller1__av_active = 0;
    }
    // Generated from the component: ESS1.BE1-25A Synchronizer.Product4
    _ess1_be1_25a_synchronizer_product4__out = (_ess1_be1_25a_synchronizer_gain6__out * _ess1_be1_25a_synchronizer_gain6__out);
    // Generated from the component: ESS1.BE1-25A Synchronizer.Vq_G
    HIL_OutAO(0x4010, (float)_ess1_be1_25a_synchronizer_gain6__out);
    // Generated from the component: ESS1.Controller.Outer Voltage Loop + Inner Current Loop.Sum10
    _ess1_controller_outer_voltage_loop___inner_current_loop_sum10__out = _ess1_controller_gain11__out - _ess1_controller_gain6__out;
    // Generated from the component: ESS1.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Gain7
    _ess1_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_gain7__out = 0.0028906249999999995 * _ess1_controller_gain6__out;
    // Generated from the component: ESS1.Controller.Outer Voltage Loop + Inner Current Loop.Sum11
    _ess1_controller_outer_voltage_loop___inner_current_loop_sum11__out = _ess1_controller_gain12__out - _ess1_controller_gain7__out;
    // Generated from the component: ESS1.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Gain6
    _ess1_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_gain6__out = 0.0028906249999999995 * _ess1_controller_gain7__out;
    // Generated from the component: ESS2.BE1-25A Synchronizer.E_q
    HIL_OutAO(0x403e, (float)_ess2_be1_25a_synchronizer_gain12__out);
    // Generated from the component: ESS2.BE1-25A Synchronizer.Product2
    _ess2_be1_25a_synchronizer_product2__out = (_ess2_be1_25a_synchronizer_gain12__out * _ess2_be1_25a_synchronizer_gain12__out);
    // Generated from the component: ESS2.BE1-25A Synchronizer.E_d
    HIL_OutAO(0x403d, (float)_ess2_be1_25a_synchronizer_gain7__out);
    // Generated from the component: ESS2.BE1-25A Synchronizer.Limit1
    if (_ess2_be1_25a_synchronizer_gain7__out < 1e-12) {
        _ess2_be1_25a_synchronizer_limit1__out = 1e-12;
    } else {
        _ess2_be1_25a_synchronizer_limit1__out = _ess2_be1_25a_synchronizer_gain7__out;
    }
    // Generated from the component: ESS2.BE1-25A Synchronizer.Product1
    _ess2_be1_25a_synchronizer_product1__out = (_ess2_be1_25a_synchronizer_gain7__out * _ess2_be1_25a_synchronizer_gain7__out);
    // Generated from the component: ESS2.Controller.PLL.Gain4
    _ess2_controller_pll_gain4__out = 0.0025515518153991436 * _ess2_controller_pll_pll_abc_to_dq_lpf_d__out;
    // Generated from the component: ESS2.Controller.PLL.Gain3
    _ess2_controller_pll_gain3__out = 0.0025515518153991436 * _ess2_controller_pll_pll_abc_to_dq_lpf_q__out;
    // Generated from the component: ESS2.Controller.PLL.PLL.normalize
    _ess2_controller_pll_pll_normalize__in1 = _ess2_controller_pll_pll_abc_to_dq_lpf_d__out;
    _ess2_controller_pll_pll_normalize__in2 = _ess2_controller_pll_pll_abc_to_dq_lpf_q__out;
    _ess2_controller_pll_pll_normalize__pk = (powf(_ess2_controller_pll_pll_normalize__in1, 2.0) + powf(_ess2_controller_pll_pll_normalize__in2, 2.0));
    _ess2_controller_pll_pll_normalize__pk = sqrt(_ess2_controller_pll_pll_normalize__pk);
    if (_ess2_controller_pll_pll_normalize__pk < 0.1) {
        _ess2_controller_pll_pll_normalize__in2_pu = _ess2_controller_pll_pll_normalize__in2 / 0.1;
    }
    else {
        _ess2_controller_pll_pll_normalize__in2_pu = _ess2_controller_pll_pll_normalize__in2 / _ess2_controller_pll_pll_normalize__pk;
    }
    // Generated from the component: ESS2.Battery.Mathematical function1
    _ess2_battery_mathematical_function1__out = pow(_ess2_battery_product1__out, _ess2_battery_constant2__out);
    // Generated from the component: ESS2.Battery.Sum2
    _ess2_battery_sum2__out = _ess2_battery_constant8__out - _ess2_battery_mathematical_function6__out;
    // Generated from the component: ESS2.Controller.Frequency droop.Gain3
    _ess2_controller_frequency_droop_gain3__out = 0.011309733552923255 * _ess2_controller_frequency_droop_sum1__out;
    // Generated from the component: ESS2.Controller.Voltage droop.Gain3
    _ess2_controller_voltage_droop_gain3__out = 0.01959591794226543 * _ess2_controller_voltage_droop_sum2__out;
    // Generated from the component: ESS2.Controller.Voltage droop.dQ
    HIL_OutAO(0x4065, (float)_ess2_controller_voltage_droop_sum2__out);
    // Generated from the component: ESS2.Controller.Outer Voltage Loop + Inner Current Loop.Outer voltage control loop.Gain4
    _ess2_controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_gain4__out = 5.760000000000002e-05 * _ess2_controller_gain10__out;
    // Generated from the component: ESS2.Controller.Outer Voltage Loop + Inner Current Loop.Outer voltage control loop.Gain6
    _ess2_controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_gain6__out = 5.760000000000002e-05 * _ess2_controller_gain9__out;
    // Generated from the component: ESS2.BE1-25A Synchronizer.Ed-Vd
    HIL_OutAO(0x4042, (float)_ess2_be1_25a_synchronizer_abc_to_dq2_alpha_beta_to_dq__d);
    // Generated from the component: ESS2.BE1-25A Synchronizer.Eq-Vq
    HIL_OutAO(0x4043, (float)_ess2_be1_25a_synchronizer_abc_to_dq2_alpha_beta_to_dq__q);
    // Generated from the component: ESS2.BE1-25A Synchronizer.Limit2
    if (_ess2_be1_25a_synchronizer_gain5__out < 1e-12) {
        _ess2_be1_25a_synchronizer_limit2__out = 1e-12;
    } else {
        _ess2_be1_25a_synchronizer_limit2__out = _ess2_be1_25a_synchronizer_gain5__out;
    }
    // Generated from the component: ESS2.BE1-25A Synchronizer.Product3
    _ess2_be1_25a_synchronizer_product3__out = (_ess2_be1_25a_synchronizer_gain5__out * _ess2_be1_25a_synchronizer_gain5__out);
    // Generated from the component: ESS2.BE1-25A Synchronizer.Vd_G
    HIL_OutAO(0x4044, (float)_ess2_be1_25a_synchronizer_gain5__out);
    // Generated from the component: ESS2.BE1-25A Synchronizer.PLL.PID controller1
    _ess2_be1_25a_synchronizer_pll_pid_controller1__pi_reg_out_int = _ess2_be1_25a_synchronizer_pll_pid_controller1__integrator_state + 1.0 * _ess2_be1_25a_synchronizer_gain6__out;
    if (_ess2_be1_25a_synchronizer_pll_pid_controller1__pi_reg_out_int < 373.84952577718536) {
        _ess2_be1_25a_synchronizer_pll_pid_controller1__out = 373.84952577718536;
        _ess2_be1_25a_synchronizer_pll_pid_controller1__av_active = 1;
    } else if (_ess2_be1_25a_synchronizer_pll_pid_controller1__pi_reg_out_int > 380.132711084365) {
        _ess2_be1_25a_synchronizer_pll_pid_controller1__out = 380.132711084365;
        _ess2_be1_25a_synchronizer_pll_pid_controller1__av_active = 1;
    } else {
        _ess2_be1_25a_synchronizer_pll_pid_controller1__out = _ess2_be1_25a_synchronizer_pll_pid_controller1__pi_reg_out_int;
        _ess2_be1_25a_synchronizer_pll_pid_controller1__av_active = 0;
    }
    // Generated from the component: ESS2.BE1-25A Synchronizer.Product4
    _ess2_be1_25a_synchronizer_product4__out = (_ess2_be1_25a_synchronizer_gain6__out * _ess2_be1_25a_synchronizer_gain6__out);
    // Generated from the component: ESS2.BE1-25A Synchronizer.Vq_G
    HIL_OutAO(0x4045, (float)_ess2_be1_25a_synchronizer_gain6__out);
    // Generated from the component: ESS2.Controller.Outer Voltage Loop + Inner Current Loop.Sum10
    _ess2_controller_outer_voltage_loop___inner_current_loop_sum10__out = _ess2_controller_gain11__out - _ess2_controller_gain6__out;
    // Generated from the component: ESS2.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Gain7
    _ess2_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_gain7__out = 0.0028906249999999995 * _ess2_controller_gain6__out;
    // Generated from the component: ESS2.Controller.Outer Voltage Loop + Inner Current Loop.Sum11
    _ess2_controller_outer_voltage_loop___inner_current_loop_sum11__out = _ess2_controller_gain12__out - _ess2_controller_gain7__out;
    // Generated from the component: ESS2.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Gain6
    _ess2_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_gain6__out = 0.0028906249999999995 * _ess2_controller_gain7__out;
    // Generated from the component: PV1.PV Plant.Control.Grid_follow.ControlSignal_Calculation.Gain2
    _pv1_pv_plant_control_grid_follow_controlsignal_calculation_gain2__out = 0.5448699758569797 * _pv1_pv_plant_control_grid_follow_current_abc_to_dq_gain1__out;
    // Generated from the component: PV1.PV Plant.Control.Grid_follow.ControlSignal_Calculation.Product5
    _pv1_pv_plant_control_grid_follow_controlsignal_calculation_product5__out = (_pv1_pv_plant_control_grid_follow_current_abc_to_dq_gain1__out * _pv1_pv_plant_control_grid_follow_controlsignal_calculation_damp__out);
    // Generated from the component: PV1.PV Plant.Control.Grid_follow.id
    HIL_OutAO(0x4081, (float)_pv1_pv_plant_control_grid_follow_current_abc_to_dq_gain1__out);
    // Generated from the component: PV1.PV Plant.Control.Grid_follow.ControlSignal_Calculation.Gain1
    _pv1_pv_plant_control_grid_follow_controlsignal_calculation_gain1__out = 0.5448699758569797 * _pv1_pv_plant_control_grid_follow_current_abc_to_dq_gain2__out;
    // Generated from the component: PV1.PV Plant.Control.Grid_follow.ControlSignal_Calculation.Product6
    _pv1_pv_plant_control_grid_follow_controlsignal_calculation_product6__out = (_pv1_pv_plant_control_grid_follow_controlsignal_calculation_damp__out * _pv1_pv_plant_control_grid_follow_current_abc_to_dq_gain2__out);
    // Generated from the component: PV1.PV Plant.Control.Grid_follow.iq
    HIL_OutAO(0x4082, (float)_pv1_pv_plant_control_grid_follow_current_abc_to_dq_gain2__out);
    // Generated from the component: PV1.Solar irradiance.Bus Join1
    _pv1_solar_irradiance_bus_join1__out[0] = _pv1_solar_irradiance_trigonometric_function4__out;
    _pv1_solar_irradiance_bus_join1__out[1] = _pv1_solar_irradiance_trigonometric_function5__out;
    _pv1_solar_irradiance_bus_join1__out[2] = _pv1_solar_irradiance_trigonometric_function6__out;
    _pv1_solar_irradiance_bus_join1__out[3] = _pv1_solar_irradiance_trigonometric_function7__out;
    // Generated from the component: PV1.Solar irradiance.Product3
    _pv1_solar_irradiance_product3__out = (_pv1_solar_irradiance_sum4__out * _pv1_solar_irradiance_constant9__out * _pv1_solar_irradiance_constant14__out);
    // Generated from the component: PV2.PV Plant.Control.Grid_follow.ControlSignal_Calculation.Gain2
    _pv2_pv_plant_control_grid_follow_controlsignal_calculation_gain2__out = 0.5448699758569797 * _pv2_pv_plant_control_grid_follow_current_abc_to_dq_gain1__out;
    // Generated from the component: PV2.PV Plant.Control.Grid_follow.ControlSignal_Calculation.Product5
    _pv2_pv_plant_control_grid_follow_controlsignal_calculation_product5__out = (_pv2_pv_plant_control_grid_follow_current_abc_to_dq_gain1__out * _pv2_pv_plant_control_grid_follow_controlsignal_calculation_damp__out);
    // Generated from the component: PV2.PV Plant.Control.Grid_follow.id
    HIL_OutAO(0x40a2, (float)_pv2_pv_plant_control_grid_follow_current_abc_to_dq_gain1__out);
    // Generated from the component: PV2.PV Plant.Control.Grid_follow.ControlSignal_Calculation.Gain1
    _pv2_pv_plant_control_grid_follow_controlsignal_calculation_gain1__out = 0.5448699758569797 * _pv2_pv_plant_control_grid_follow_current_abc_to_dq_gain2__out;
    // Generated from the component: PV2.PV Plant.Control.Grid_follow.ControlSignal_Calculation.Product6
    _pv2_pv_plant_control_grid_follow_controlsignal_calculation_product6__out = (_pv2_pv_plant_control_grid_follow_controlsignal_calculation_damp__out * _pv2_pv_plant_control_grid_follow_current_abc_to_dq_gain2__out);
    // Generated from the component: PV2.PV Plant.Control.Grid_follow.iq
    HIL_OutAO(0x40a3, (float)_pv2_pv_plant_control_grid_follow_current_abc_to_dq_gain2__out);
    // Generated from the component: PV2.Solar irradiance.Bus Join1
    _pv2_solar_irradiance_bus_join1__out[0] = _pv2_solar_irradiance_trigonometric_function4__out;
    _pv2_solar_irradiance_bus_join1__out[1] = _pv2_solar_irradiance_trigonometric_function5__out;
    _pv2_solar_irradiance_bus_join1__out[2] = _pv2_solar_irradiance_trigonometric_function6__out;
    _pv2_solar_irradiance_bus_join1__out[3] = _pv2_solar_irradiance_trigonometric_function7__out;
    // Generated from the component: PV2.Solar irradiance.Product3
    _pv2_solar_irradiance_product3__out = (_pv2_solar_irradiance_sum4__out * _pv1_solar_irradiance_constant9__out * _pv1_solar_irradiance_constant14__out);
    // Generated from the component: ESS1.BE1-25A Synchronizer.Trigonometric function1
    _ess1_be1_25a_synchronizer_trigonometric_function1__out = atan2(_ess1_be1_25a_synchronizer_gain12__out, _ess1_be1_25a_synchronizer_limit1__out);
    // Generated from the component: ESS1.BE1-25A Synchronizer.Sum4
    _ess1_be1_25a_synchronizer_sum4__out = _ess1_be1_25a_synchronizer_product1__out + _ess1_be1_25a_synchronizer_product2__out;
    // Generated from the component: ESS1.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Discrete Transfer Function1
    _ess1_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_discrete_transfer_function1__a_sum = 0.0f;
    _ess1_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_discrete_transfer_function1__b_sum = 0.0f;
    _ess1_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_discrete_transfer_function1__delay_line_in = 0.0f;
    for (_ess1_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_discrete_transfer_function1__i = 0; _ess1_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_discrete_transfer_function1__i < 1; _ess1_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_discrete_transfer_function1__i++) {
        _ess1_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_discrete_transfer_function1__b_sum += _ess1_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_discrete_transfer_function1__b_coeff[_ess1_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_discrete_transfer_function1__i + 1] * _ess1_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_discrete_transfer_function1__states[_ess1_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_discrete_transfer_function1__i];
    }
    _ess1_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_discrete_transfer_function1__a_sum += _ess1_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_discrete_transfer_function1__states[0] * _ess1_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_discrete_transfer_function1__a_coeff[1];
    _ess1_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_discrete_transfer_function1__delay_line_in = _ess1_controller_pll_gain4__out - _ess1_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_discrete_transfer_function1__a_sum;
    _ess1_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_discrete_transfer_function1__b_sum += _ess1_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_discrete_transfer_function1__b_coeff[0] * _ess1_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_discrete_transfer_function1__delay_line_in;
    _ess1_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_discrete_transfer_function1__out = _ess1_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_discrete_transfer_function1__b_sum;
    // Generated from the component: ESS1.Controller.Outer Voltage Loop + Inner Current Loop.outer power loop.Product4
    _ess1_controller_outer_voltage_loop___inner_current_loop_outer_power_loop_product4__out = (_ess1_controller_pll_gain4__out * _ess1_gain17__out);
    // Generated from the component: ESS1.Controller.Outer Voltage Loop + Inner Current Loop.outer power loop.Product5
    _ess1_controller_outer_voltage_loop___inner_current_loop_outer_power_loop_product5__out = (_ess1_gain18__out * _ess1_controller_pll_gain4__out);
    // Generated from the component: ESS1.Controller.Outer Voltage Loop + Inner Current Loop.squared_Vt2.Product1
    _ess1_controller_outer_voltage_loop___inner_current_loop_squared_vt2_product1__out = (_ess1_controller_pll_gain4__out * _ess1_controller_pll_gain4__out);
    // Generated from the component: ESS1.Controller.Product111
    _ess1_controller_product111__out = (_ess1_controller_pll_gain4__out * _ess1_controller_gain6__out);
    // Generated from the component: ESS1.Controller.Product12
    _ess1_controller_product12__out = (_ess1_controller_pll_gain4__out * _ess1_controller_gain7__out);
    // Generated from the component: ESS1.Power_Meas.Power_Meas_DQpu.Product1
    _ess1_power_meas_power_meas_dqpu_product1__out = (_ess1_controller_pll_gain4__out * _ess1_controller_gain6__out);
    // Generated from the component: ESS1.Power_Meas.Power_Meas_DQpu.Product3
    _ess1_power_meas_power_meas_dqpu_product3__out = (_ess1_controller_pll_gain4__out * _ess1_controller_gain7__out);
    // Generated from the component: ESS1.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Discrete Transfer Function2
    _ess1_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_discrete_transfer_function2__a_sum = 0.0f;
    _ess1_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_discrete_transfer_function2__b_sum = 0.0f;
    _ess1_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_discrete_transfer_function2__delay_line_in = 0.0f;
    for (_ess1_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_discrete_transfer_function2__i = 0; _ess1_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_discrete_transfer_function2__i < 1; _ess1_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_discrete_transfer_function2__i++) {
        _ess1_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_discrete_transfer_function2__b_sum += _ess1_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_discrete_transfer_function2__b_coeff[_ess1_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_discrete_transfer_function2__i + 1] * _ess1_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_discrete_transfer_function2__states[_ess1_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_discrete_transfer_function2__i];
    }
    _ess1_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_discrete_transfer_function2__a_sum += _ess1_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_discrete_transfer_function2__states[0] * _ess1_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_discrete_transfer_function2__a_coeff[1];
    _ess1_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_discrete_transfer_function2__delay_line_in = _ess1_controller_pll_gain3__out - _ess1_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_discrete_transfer_function2__a_sum;
    _ess1_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_discrete_transfer_function2__b_sum += _ess1_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_discrete_transfer_function2__b_coeff[0] * _ess1_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_discrete_transfer_function2__delay_line_in;
    _ess1_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_discrete_transfer_function2__out = _ess1_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_discrete_transfer_function2__b_sum;
    // Generated from the component: ESS1.Controller.Outer Voltage Loop + Inner Current Loop.outer power loop.Product3
    _ess1_controller_outer_voltage_loop___inner_current_loop_outer_power_loop_product3__out = (_ess1_controller_pll_gain3__out * _ess1_gain18__out);
    // Generated from the component: ESS1.Controller.Outer Voltage Loop + Inner Current Loop.outer power loop.Product6
    _ess1_controller_outer_voltage_loop___inner_current_loop_outer_power_loop_product6__out = (_ess1_gain17__out * _ess1_controller_pll_gain3__out);
    // Generated from the component: ESS1.Controller.Outer Voltage Loop + Inner Current Loop.squared_Vt2.Product2
    _ess1_controller_outer_voltage_loop___inner_current_loop_squared_vt2_product2__out = (_ess1_controller_pll_gain3__out * _ess1_controller_pll_gain3__out);
    // Generated from the component: ESS1.Controller.Product10
    _ess1_controller_product10__out = (_ess1_controller_gain6__out * _ess1_controller_pll_gain3__out);
    // Generated from the component: ESS1.Controller.Product13
    _ess1_controller_product13__out = (_ess1_controller_pll_gain3__out * _ess1_controller_gain7__out);
    // Generated from the component: ESS1.Power_Meas.Power_Meas_DQpu.Product2
    _ess1_power_meas_power_meas_dqpu_product2__out = (_ess1_controller_pll_gain3__out * _ess1_controller_gain7__out);
    // Generated from the component: ESS1.Power_Meas.Power_Meas_DQpu.Product4
    _ess1_power_meas_power_meas_dqpu_product4__out = (_ess1_controller_pll_gain3__out * _ess1_controller_gain6__out);
    // Generated from the component: ESS1.Controller.PLL.PLL.PID.Kd
    _ess1_controller_pll_pll_pid_kd__out = 1.0 * _ess1_controller_pll_pll_normalize__in2_pu;
    // Generated from the component: ESS1.Controller.PLL.PLL.PID.Ki
    _ess1_controller_pll_pll_pid_ki__out = 3200.0 * _ess1_controller_pll_pll_normalize__in2_pu;
    // Generated from the component: ESS1.Controller.PLL.PLL.PID.Kp
    _ess1_controller_pll_pll_pid_kp__out = 100.0 * _ess1_controller_pll_pll_normalize__in2_pu;
    // Generated from the component: ESS1.Controller.PLL.PLL.term_pk
    // Generated from the component: ESS1.Battery.Bus Join1
    _ess1_battery_bus_join1__out[0] = _ess1_battery_mathematical_function1__out;
    _ess1_battery_bus_join1__out[1] = _ess1_battery_mathematical_function2__out;
    _ess1_battery_bus_join1__out[2] = _ess1_battery_mathematical_function5__out;
    _ess1_battery_bus_join1__out[3] = _ess1_battery_abs3__out;
    _ess1_battery_bus_join1__out[4] = _ess1_battery_mathematical_function3__out;
    _ess1_battery_bus_join1__out[5] = _ess1_battery_mathematical_function4__out;
    // Generated from the component: ESS1.Battery.Rate Transition4.Input
    _ess1_battery_rate_transition4_output__out = _ess1_battery_sum2__out;
    // Generated from the component: ESS1.Controller.Frequency droop.C function1
    _ess1_controller_frequency_droop_c_function1__clk = _ess1_controller_frequency_droop_clock1__out;
    _ess1_controller_frequency_droop_c_function1__in = _ess1_controller_frequency_droop_gain3__out;
    if (_ess1_controller_frequency_droop_c_function1__clk > 120) {
        _ess1_controller_frequency_droop_c_function1__out = _ess1_controller_frequency_droop_c_function1__in;
    }
    else {
        _ess1_controller_frequency_droop_c_function1__out = 0;
    }
    _ess1_controller_frequency_droop_c_function1__out = _ess1_controller_frequency_droop_c_function1__in;
    // Generated from the component: ESS1.Controller.Voltage droop.C function1
    _ess1_controller_voltage_droop_c_function1__clk = _ess1_controller_voltage_droop_clock1__out;
    _ess1_controller_voltage_droop_c_function1__in = _ess1_controller_voltage_droop_gain3__out;
    if (_ess1_controller_voltage_droop_c_function1__clk > 120) {
        _ess1_controller_voltage_droop_c_function1__out = _ess1_controller_voltage_droop_c_function1__in;
    }
    else {
        _ess1_controller_voltage_droop_c_function1__out = 0;
    }
    _ess1_controller_voltage_droop_c_function1__out = _ess1_controller_voltage_droop_c_function1__in;
    // Generated from the component: ESS1.Controller.Outer Voltage Loop + Inner Current Loop.Outer voltage control loop.Product6
    _ess1_controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_product6__out = (_ess1_controller_pll_gain5__out * _ess1_controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_gain4__out);
    // Generated from the component: ESS1.Controller.Outer Voltage Loop + Inner Current Loop.Outer voltage control loop.Product8
    _ess1_controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_product8__out = (_ess1_controller_pll_gain5__out * _ess1_controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_gain6__out);
    // Generated from the component: ESS1.BE1-25A Synchronizer.Trigonometric function2
    _ess1_be1_25a_synchronizer_trigonometric_function2__out = atan2(_ess1_be1_25a_synchronizer_gain6__out, _ess1_be1_25a_synchronizer_limit2__out);
    // Generated from the component: ESS1.BE1-25A Synchronizer.PLL.C function1
    _ess1_be1_25a_synchronizer_pll_c_function1__in = _ess1_be1_25a_synchronizer_pll_pid_controller1__out;
    _ess1_be1_25a_synchronizer_pll_c_function1__out = _ess1_be1_25a_synchronizer_pll_c_function1__var;
    // Generated from the component: ESS1.BE1-25A Synchronizer.w_bus
    HIL_OutAO(0x4017, (float)_ess1_be1_25a_synchronizer_pll_pid_controller1__out);
    // Generated from the component: ESS1.BE1-25A Synchronizer.Sum5
    _ess1_be1_25a_synchronizer_sum5__out = _ess1_be1_25a_synchronizer_product3__out + _ess1_be1_25a_synchronizer_product4__out;
    // Generated from the component: ESS1.Controller.Outer Voltage Loop + Inner Current Loop.Gain3
    _ess1_controller_outer_voltage_loop___inner_current_loop_gain3__out = 0.22458333333333327 * _ess1_controller_outer_voltage_loop___inner_current_loop_sum10__out;
    // Generated from the component: ESS1.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Product2
    _ess1_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_product2__out = (_ess1_controller_pll_gain5__out * _ess1_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_gain7__out);
    // Generated from the component: ESS1.Controller.Outer Voltage Loop + Inner Current Loop.Gain4
    _ess1_controller_outer_voltage_loop___inner_current_loop_gain4__out = 0.22458333333333327 * _ess1_controller_outer_voltage_loop___inner_current_loop_sum11__out;
    // Generated from the component: ESS1.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Product1
    _ess1_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_product1__out = (_ess1_controller_pll_gain5__out * _ess1_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_gain6__out);
    // Generated from the component: ESS2.BE1-25A Synchronizer.Trigonometric function1
    _ess2_be1_25a_synchronizer_trigonometric_function1__out = atan2(_ess2_be1_25a_synchronizer_gain12__out, _ess2_be1_25a_synchronizer_limit1__out);
    // Generated from the component: ESS2.BE1-25A Synchronizer.Sum4
    _ess2_be1_25a_synchronizer_sum4__out = _ess2_be1_25a_synchronizer_product1__out + _ess2_be1_25a_synchronizer_product2__out;
    // Generated from the component: ESS2.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Discrete Transfer Function1
    _ess2_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_discrete_transfer_function1__a_sum = 0.0f;
    _ess2_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_discrete_transfer_function1__b_sum = 0.0f;
    _ess2_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_discrete_transfer_function1__delay_line_in = 0.0f;
    for (_ess2_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_discrete_transfer_function1__i = 0; _ess2_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_discrete_transfer_function1__i < 1; _ess2_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_discrete_transfer_function1__i++) {
        _ess2_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_discrete_transfer_function1__b_sum += _ess2_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_discrete_transfer_function1__b_coeff[_ess2_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_discrete_transfer_function1__i + 1] * _ess2_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_discrete_transfer_function1__states[_ess2_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_discrete_transfer_function1__i];
    }
    _ess2_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_discrete_transfer_function1__a_sum += _ess2_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_discrete_transfer_function1__states[0] * _ess2_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_discrete_transfer_function1__a_coeff[1];
    _ess2_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_discrete_transfer_function1__delay_line_in = _ess2_controller_pll_gain4__out - _ess2_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_discrete_transfer_function1__a_sum;
    _ess2_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_discrete_transfer_function1__b_sum += _ess2_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_discrete_transfer_function1__b_coeff[0] * _ess2_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_discrete_transfer_function1__delay_line_in;
    _ess2_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_discrete_transfer_function1__out = _ess2_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_discrete_transfer_function1__b_sum;
    // Generated from the component: ESS2.Controller.Outer Voltage Loop + Inner Current Loop.outer power loop.Product4
    _ess2_controller_outer_voltage_loop___inner_current_loop_outer_power_loop_product4__out = (_ess2_controller_pll_gain4__out * _ess2_gain17__out);
    // Generated from the component: ESS2.Controller.Outer Voltage Loop + Inner Current Loop.outer power loop.Product5
    _ess2_controller_outer_voltage_loop___inner_current_loop_outer_power_loop_product5__out = (_ess2_gain18__out * _ess2_controller_pll_gain4__out);
    // Generated from the component: ESS2.Controller.Outer Voltage Loop + Inner Current Loop.squared_Vt2.Product1
    _ess2_controller_outer_voltage_loop___inner_current_loop_squared_vt2_product1__out = (_ess2_controller_pll_gain4__out * _ess2_controller_pll_gain4__out);
    // Generated from the component: ESS2.Controller.Product111
    _ess2_controller_product111__out = (_ess2_controller_pll_gain4__out * _ess2_controller_gain6__out);
    // Generated from the component: ESS2.Controller.Product12
    _ess2_controller_product12__out = (_ess2_controller_pll_gain4__out * _ess2_controller_gain7__out);
    // Generated from the component: ESS2.Power_Meas.Power_Meas_DQpu.Product1
    _ess2_power_meas_power_meas_dqpu_product1__out = (_ess2_controller_pll_gain4__out * _ess2_controller_gain6__out);
    // Generated from the component: ESS2.Power_Meas.Power_Meas_DQpu.Product3
    _ess2_power_meas_power_meas_dqpu_product3__out = (_ess2_controller_pll_gain4__out * _ess2_controller_gain7__out);
    // Generated from the component: ESS2.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Discrete Transfer Function2
    _ess2_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_discrete_transfer_function2__a_sum = 0.0f;
    _ess2_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_discrete_transfer_function2__b_sum = 0.0f;
    _ess2_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_discrete_transfer_function2__delay_line_in = 0.0f;
    for (_ess2_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_discrete_transfer_function2__i = 0; _ess2_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_discrete_transfer_function2__i < 1; _ess2_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_discrete_transfer_function2__i++) {
        _ess2_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_discrete_transfer_function2__b_sum += _ess2_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_discrete_transfer_function2__b_coeff[_ess2_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_discrete_transfer_function2__i + 1] * _ess2_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_discrete_transfer_function2__states[_ess2_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_discrete_transfer_function2__i];
    }
    _ess2_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_discrete_transfer_function2__a_sum += _ess2_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_discrete_transfer_function2__states[0] * _ess2_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_discrete_transfer_function2__a_coeff[1];
    _ess2_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_discrete_transfer_function2__delay_line_in = _ess2_controller_pll_gain3__out - _ess2_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_discrete_transfer_function2__a_sum;
    _ess2_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_discrete_transfer_function2__b_sum += _ess2_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_discrete_transfer_function2__b_coeff[0] * _ess2_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_discrete_transfer_function2__delay_line_in;
    _ess2_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_discrete_transfer_function2__out = _ess2_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_discrete_transfer_function2__b_sum;
    // Generated from the component: ESS2.Controller.Outer Voltage Loop + Inner Current Loop.outer power loop.Product3
    _ess2_controller_outer_voltage_loop___inner_current_loop_outer_power_loop_product3__out = (_ess2_controller_pll_gain3__out * _ess2_gain18__out);
    // Generated from the component: ESS2.Controller.Outer Voltage Loop + Inner Current Loop.outer power loop.Product6
    _ess2_controller_outer_voltage_loop___inner_current_loop_outer_power_loop_product6__out = (_ess2_gain17__out * _ess2_controller_pll_gain3__out);
    // Generated from the component: ESS2.Controller.Outer Voltage Loop + Inner Current Loop.squared_Vt2.Product2
    _ess2_controller_outer_voltage_loop___inner_current_loop_squared_vt2_product2__out = (_ess2_controller_pll_gain3__out * _ess2_controller_pll_gain3__out);
    // Generated from the component: ESS2.Controller.Product10
    _ess2_controller_product10__out = (_ess2_controller_gain6__out * _ess2_controller_pll_gain3__out);
    // Generated from the component: ESS2.Controller.Product13
    _ess2_controller_product13__out = (_ess2_controller_pll_gain3__out * _ess2_controller_gain7__out);
    // Generated from the component: ESS2.Power_Meas.Power_Meas_DQpu.Product2
    _ess2_power_meas_power_meas_dqpu_product2__out = (_ess2_controller_pll_gain3__out * _ess2_controller_gain7__out);
    // Generated from the component: ESS2.Power_Meas.Power_Meas_DQpu.Product4
    _ess2_power_meas_power_meas_dqpu_product4__out = (_ess2_controller_pll_gain3__out * _ess2_controller_gain6__out);
    // Generated from the component: ESS2.Controller.PLL.PLL.PID.Kd
    _ess2_controller_pll_pll_pid_kd__out = 1.0 * _ess2_controller_pll_pll_normalize__in2_pu;
    // Generated from the component: ESS2.Controller.PLL.PLL.PID.Ki
    _ess2_controller_pll_pll_pid_ki__out = 3200.0 * _ess2_controller_pll_pll_normalize__in2_pu;
    // Generated from the component: ESS2.Controller.PLL.PLL.PID.Kp
    _ess2_controller_pll_pll_pid_kp__out = 100.0 * _ess2_controller_pll_pll_normalize__in2_pu;
    // Generated from the component: ESS2.Controller.PLL.PLL.term_pk
    // Generated from the component: ESS2.Battery.Bus Join1
    _ess2_battery_bus_join1__out[0] = _ess2_battery_mathematical_function1__out;
    _ess2_battery_bus_join1__out[1] = _ess2_battery_mathematical_function2__out;
    _ess2_battery_bus_join1__out[2] = _ess2_battery_mathematical_function5__out;
    _ess2_battery_bus_join1__out[3] = _ess2_battery_abs3__out;
    _ess2_battery_bus_join1__out[4] = _ess2_battery_mathematical_function3__out;
    _ess2_battery_bus_join1__out[5] = _ess2_battery_mathematical_function4__out;
    // Generated from the component: ESS2.Battery.Rate Transition4.Input
    _ess2_battery_rate_transition4_output__out = _ess2_battery_sum2__out;
    // Generated from the component: ESS2.Controller.Frequency droop.C function1
    _ess2_controller_frequency_droop_c_function1__clk = _ess2_controller_frequency_droop_clock1__out;
    _ess2_controller_frequency_droop_c_function1__in = _ess2_controller_frequency_droop_gain3__out;
    if (_ess2_controller_frequency_droop_c_function1__clk > 120) {
        _ess2_controller_frequency_droop_c_function1__out = _ess2_controller_frequency_droop_c_function1__in;
    }
    else {
        _ess2_controller_frequency_droop_c_function1__out = 0;
    }
    _ess2_controller_frequency_droop_c_function1__out = _ess2_controller_frequency_droop_c_function1__in;
    // Generated from the component: ESS2.Controller.Voltage droop.C function1
    _ess2_controller_voltage_droop_c_function1__clk = _ess2_controller_voltage_droop_clock1__out;
    _ess2_controller_voltage_droop_c_function1__in = _ess2_controller_voltage_droop_gain3__out;
    if (_ess2_controller_voltage_droop_c_function1__clk > 120) {
        _ess2_controller_voltage_droop_c_function1__out = _ess2_controller_voltage_droop_c_function1__in;
    }
    else {
        _ess2_controller_voltage_droop_c_function1__out = 0;
    }
    _ess2_controller_voltage_droop_c_function1__out = _ess2_controller_voltage_droop_c_function1__in;
    // Generated from the component: ESS2.Controller.Outer Voltage Loop + Inner Current Loop.Outer voltage control loop.Product6
    _ess2_controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_product6__out = (_ess2_controller_pll_gain5__out * _ess2_controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_gain4__out);
    // Generated from the component: ESS2.Controller.Outer Voltage Loop + Inner Current Loop.Outer voltage control loop.Product8
    _ess2_controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_product8__out = (_ess2_controller_pll_gain5__out * _ess2_controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_gain6__out);
    // Generated from the component: ESS2.BE1-25A Synchronizer.Trigonometric function2
    _ess2_be1_25a_synchronizer_trigonometric_function2__out = atan2(_ess2_be1_25a_synchronizer_gain6__out, _ess2_be1_25a_synchronizer_limit2__out);
    // Generated from the component: ESS2.BE1-25A Synchronizer.PLL.C function1
    _ess2_be1_25a_synchronizer_pll_c_function1__in = _ess2_be1_25a_synchronizer_pll_pid_controller1__out;
    _ess2_be1_25a_synchronizer_pll_c_function1__out = _ess2_be1_25a_synchronizer_pll_c_function1__var;
    // Generated from the component: ESS2.BE1-25A Synchronizer.w_bus
    HIL_OutAO(0x404c, (float)_ess2_be1_25a_synchronizer_pll_pid_controller1__out);
    // Generated from the component: ESS2.BE1-25A Synchronizer.Sum5
    _ess2_be1_25a_synchronizer_sum5__out = _ess2_be1_25a_synchronizer_product3__out + _ess2_be1_25a_synchronizer_product4__out;
    // Generated from the component: ESS2.Controller.Outer Voltage Loop + Inner Current Loop.Gain3
    _ess2_controller_outer_voltage_loop___inner_current_loop_gain3__out = 0.22458333333333327 * _ess2_controller_outer_voltage_loop___inner_current_loop_sum10__out;
    // Generated from the component: ESS2.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Product2
    _ess2_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_product2__out = (_ess2_controller_pll_gain5__out * _ess2_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_gain7__out);
    // Generated from the component: ESS2.Controller.Outer Voltage Loop + Inner Current Loop.Gain4
    _ess2_controller_outer_voltage_loop___inner_current_loop_gain4__out = 0.22458333333333327 * _ess2_controller_outer_voltage_loop___inner_current_loop_sum11__out;
    // Generated from the component: ESS2.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Product1
    _ess2_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_product1__out = (_ess2_controller_pll_gain5__out * _ess2_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_gain6__out);
    // Generated from the component: PV1.PV Plant.Control.Grid_follow.ControlSignal_Calculation.Product2
    _pv1_pv_plant_control_grid_follow_controlsignal_calculation_product2__out = (_pv1_pv_plant_control_pll_gain1__out * _pv1_pv_plant_control_grid_follow_controlsignal_calculation_gain2__out);
    // Generated from the component: PV1.PV Plant.Control.Grid_follow.ControlSignal_Calculation.Product1
    _pv1_pv_plant_control_grid_follow_controlsignal_calculation_product1__out = (_pv1_pv_plant_control_pll_gain1__out * _pv1_pv_plant_control_grid_follow_controlsignal_calculation_gain1__out);
    // Generated from the component: PV1.Solar irradiance.C function3
    _pv1_solar_irradiance_c_function3__Gdh = _pv1_solar_irradiance_c_function2__Gdh;
    _pv1_solar_irradiance_c_function3__fk = _pv1_solar_irradiance_sum5__out;
    _pv1_solar_irradiance_c_function3__x[0] = _pv1_solar_irradiance_bus_join1__out[0];
    _pv1_solar_irradiance_c_function3__x[1] = _pv1_solar_irradiance_bus_join1__out[1];
    _pv1_solar_irradiance_c_function3__x[2] = _pv1_solar_irradiance_bus_join1__out[2];
    _pv1_solar_irradiance_c_function3__x[3] = _pv1_solar_irradiance_bus_join1__out[3];
    _pv1_solar_irradiance_c_function3__Gd = _pv1_solar_irradiance_c_function3__Gdh * 0.5 * (1 + _pv1_solar_irradiance_c_function3__x[0]) * (1 + _pv1_solar_irradiance_c_function3__fk * _pv1_solar_irradiance_c_function3__x[1] * _pv1_solar_irradiance_c_function3__x[1] * _pv1_solar_irradiance_c_function3__x[1]) * (1 + _pv1_solar_irradiance_c_function3__fk * _pv1_solar_irradiance_c_function3__x[2] * _pv1_solar_irradiance_c_function3__x[2] * _pv1_solar_irradiance_c_function3__x[3] * _pv1_solar_irradiance_c_function3__x[3] * _pv1_solar_irradiance_c_function3__x[3]);
    // Generated from the component: PV1.Solar irradiance.Gain3
    _pv1_solar_irradiance_gain3__out = 0.5 * _pv1_solar_irradiance_product3__out;
    // Generated from the component: PV2.PV Plant.Control.Grid_follow.ControlSignal_Calculation.Product2
    _pv2_pv_plant_control_grid_follow_controlsignal_calculation_product2__out = (_pv2_pv_plant_control_pll_gain1__out * _pv2_pv_plant_control_grid_follow_controlsignal_calculation_gain2__out);
    // Generated from the component: PV2.PV Plant.Control.Grid_follow.ControlSignal_Calculation.Product1
    _pv2_pv_plant_control_grid_follow_controlsignal_calculation_product1__out = (_pv2_pv_plant_control_pll_gain1__out * _pv2_pv_plant_control_grid_follow_controlsignal_calculation_gain1__out);
    // Generated from the component: PV2.Solar irradiance.C function3
    _pv2_solar_irradiance_c_function3__Gdh = _pv2_solar_irradiance_c_function2__Gdh;
    _pv2_solar_irradiance_c_function3__fk = _pv2_solar_irradiance_sum5__out;
    _pv2_solar_irradiance_c_function3__x[0] = _pv2_solar_irradiance_bus_join1__out[0];
    _pv2_solar_irradiance_c_function3__x[1] = _pv2_solar_irradiance_bus_join1__out[1];
    _pv2_solar_irradiance_c_function3__x[2] = _pv2_solar_irradiance_bus_join1__out[2];
    _pv2_solar_irradiance_c_function3__x[3] = _pv2_solar_irradiance_bus_join1__out[3];
    _pv2_solar_irradiance_c_function3__Gd = _pv2_solar_irradiance_c_function3__Gdh * 0.5 * (1 + _pv2_solar_irradiance_c_function3__x[0]) * (1 + _pv2_solar_irradiance_c_function3__fk * _pv2_solar_irradiance_c_function3__x[1] * _pv2_solar_irradiance_c_function3__x[1] * _pv2_solar_irradiance_c_function3__x[1]) * (1 + _pv2_solar_irradiance_c_function3__fk * _pv2_solar_irradiance_c_function3__x[2] * _pv2_solar_irradiance_c_function3__x[2] * _pv2_solar_irradiance_c_function3__x[3] * _pv2_solar_irradiance_c_function3__x[3] * _pv2_solar_irradiance_c_function3__x[3]);
    // Generated from the component: PV2.Solar irradiance.Gain3
    _pv2_solar_irradiance_gain3__out = 0.5 * _pv2_solar_irradiance_product3__out;
    // Generated from the component: ESS1.BE1-25A Synchronizer.confine phase1
    _ess1_be1_25a_synchronizer_confine_phase1__in = _ess1_be1_25a_synchronizer_trigonometric_function1__out;
    _ess1_be1_25a_synchronizer_confine_phase1__x = _ess1_be1_25a_synchronizer_confine_phase1__in / 6.283185307179586;
    _ess1_be1_25a_synchronizer_confine_phase1__floor_in = floor(_ess1_be1_25a_synchronizer_confine_phase1__x);
    _ess1_be1_25a_synchronizer_confine_phase1__out = _ess1_be1_25a_synchronizer_confine_phase1__in - (6.283185307179586 * _ess1_be1_25a_synchronizer_confine_phase1__floor_in);
    // Generated from the component: ESS1.BE1-25A Synchronizer.Mathematical function1
    _ess1_be1_25a_synchronizer_mathematical_function1__out = sqrt(_ess1_be1_25a_synchronizer_sum4__out);
    // Generated from the component: ESS1.Controller.Outer Voltage Loop + Inner Current Loop.outer power loop.Sum3
    _ess1_controller_outer_voltage_loop___inner_current_loop_outer_power_loop_sum3__out = _ess1_controller_outer_voltage_loop___inner_current_loop_outer_power_loop_product3__out - _ess1_controller_outer_voltage_loop___inner_current_loop_outer_power_loop_product4__out;
    // Generated from the component: ESS1.Controller.Outer Voltage Loop + Inner Current Loop.outer power loop.Sum4
    _ess1_controller_outer_voltage_loop___inner_current_loop_outer_power_loop_sum4__out = _ess1_controller_outer_voltage_loop___inner_current_loop_outer_power_loop_product5__out + _ess1_controller_outer_voltage_loop___inner_current_loop_outer_power_loop_product6__out;
    // Generated from the component: ESS1.Controller.Outer Voltage Loop + Inner Current Loop.squared_Vt2.Sum3
    _ess1_controller_outer_voltage_loop___inner_current_loop_squared_vt2_sum3__out = _ess1_controller_outer_voltage_loop___inner_current_loop_squared_vt2_product1__out + _ess1_controller_outer_voltage_loop___inner_current_loop_squared_vt2_product2__out;
    // Generated from the component: ESS1.Controller.Sum2
    _ess1_controller_sum2__out = _ess1_controller_product10__out - _ess1_controller_product12__out;
    // Generated from the component: ESS1.Controller.Sum1
    _ess1_controller_sum1__out = _ess1_controller_product111__out + _ess1_controller_product13__out;
    // Generated from the component: ESS1.Power_Meas.Power_Meas_DQpu.Sum1
    _ess1_power_meas_power_meas_dqpu_sum1__out = _ess1_power_meas_power_meas_dqpu_product1__out + _ess1_power_meas_power_meas_dqpu_product2__out;
    // Generated from the component: ESS1.Power_Meas.Power_Meas_DQpu.Sum2
    _ess1_power_meas_power_meas_dqpu_sum2__out = _ess1_power_meas_power_meas_dqpu_product4__out - _ess1_power_meas_power_meas_dqpu_product3__out;
    // Generated from the component: ESS1.Controller.PLL.PLL.PID.Sum8
    _ess1_controller_pll_pll_pid_sum8__out = _ess1_controller_pll_pll_pid_kd__out - _ess1_controller_pll_pll_pid_integrator2__out;
    // Generated from the component: ESS1.Battery.Rate Transition2.Input
    _ess1_battery_rate_transition2_output__out[0] = _ess1_battery_bus_join1__out[0];
    _ess1_battery_rate_transition2_output__out[1] = _ess1_battery_bus_join1__out[1];
    _ess1_battery_rate_transition2_output__out[2] = _ess1_battery_bus_join1__out[2];
    _ess1_battery_rate_transition2_output__out[3] = _ess1_battery_bus_join1__out[3];
    _ess1_battery_rate_transition2_output__out[4] = _ess1_battery_bus_join1__out[4];
    _ess1_battery_rate_transition2_output__out[5] = _ess1_battery_bus_join1__out[5];
    // Generated from the component: ESS1.Controller.Frequency droop.Sum4
    _ess1_controller_frequency_droop_sum4__out = _ess1_controller_frequency_droop_c_function1__out + _ess1_controller_frequency_droop_rate_transition12_output__out;
    // Generated from the component: ESS1.Controller.Voltage droop.Sum4
    _ess1_controller_voltage_droop_sum4__out = _ess1_controller_voltage_droop_c_function1__out + _ess1_controller_voltage_droop_rate_transition13_output__out;
    // Generated from the component: ESS1.Controller.Outer Voltage Loop + Inner Current Loop.Outer voltage control loop.Sum10
    _ess1_controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_sum10__out = _ess1_controller_gain11__out - _ess1_controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_product6__out;
    // Generated from the component: ESS1.Controller.Outer Voltage Loop + Inner Current Loop.Outer voltage control loop.Sum13
    _ess1_controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_sum13__out = _ess1_controller_gain12__out + _ess1_controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_product8__out;
    // Generated from the component: ESS1.BE1-25A Synchronizer.confine phase2
    _ess1_be1_25a_synchronizer_confine_phase2__in = _ess1_be1_25a_synchronizer_trigonometric_function2__out;
    _ess1_be1_25a_synchronizer_confine_phase2__x = _ess1_be1_25a_synchronizer_confine_phase2__in / 6.283185307179586;
    _ess1_be1_25a_synchronizer_confine_phase2__floor_in = floor(_ess1_be1_25a_synchronizer_confine_phase2__x);
    _ess1_be1_25a_synchronizer_confine_phase2__out = _ess1_be1_25a_synchronizer_confine_phase2__in - (6.283185307179586 * _ess1_be1_25a_synchronizer_confine_phase2__floor_in);
    // Generated from the component: ESS1.BE1-25A Synchronizer.PLL.confine phase
    _ess1_be1_25a_synchronizer_pll_confine_phase__in = _ess1_be1_25a_synchronizer_pll_c_function1__out;
    _ess1_be1_25a_synchronizer_pll_confine_phase__x = _ess1_be1_25a_synchronizer_pll_confine_phase__in / 6.283185307179586;
    _ess1_be1_25a_synchronizer_pll_confine_phase__floor_in = floor(_ess1_be1_25a_synchronizer_pll_confine_phase__x);
    _ess1_be1_25a_synchronizer_pll_confine_phase__out = _ess1_be1_25a_synchronizer_pll_confine_phase__in - (6.283185307179586 * _ess1_be1_25a_synchronizer_pll_confine_phase__floor_in);
    // Generated from the component: ESS1.BE1-25A Synchronizer.Mathematical function2
    _ess1_be1_25a_synchronizer_mathematical_function2__out = sqrt(_ess1_be1_25a_synchronizer_sum5__out);
    // Generated from the component: ESS1.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Sum6
    _ess1_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum6__out = _ess1_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_discrete_transfer_function2__out + _ess1_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_product2__out;
    // Generated from the component: ESS1.Controller.Outer Voltage Loop + Inner Current Loop.Sum8
    _ess1_controller_outer_voltage_loop___inner_current_loop_sum8__out = _ess1_controller_outer_voltage_loop___inner_current_loop_gain4__out + _ess1_controller_constant1__out;
    // Generated from the component: ESS1.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Sum5
    _ess1_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum5__out = _ess1_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_discrete_transfer_function1__out - _ess1_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_product1__out;
    // Generated from the component: ESS2.BE1-25A Synchronizer.confine phase1
    _ess2_be1_25a_synchronizer_confine_phase1__in = _ess2_be1_25a_synchronizer_trigonometric_function1__out;
    _ess2_be1_25a_synchronizer_confine_phase1__x = _ess2_be1_25a_synchronizer_confine_phase1__in / 6.283185307179586;
    _ess2_be1_25a_synchronizer_confine_phase1__floor_in = floor(_ess2_be1_25a_synchronizer_confine_phase1__x);
    _ess2_be1_25a_synchronizer_confine_phase1__out = _ess2_be1_25a_synchronizer_confine_phase1__in - (6.283185307179586 * _ess2_be1_25a_synchronizer_confine_phase1__floor_in);
    // Generated from the component: ESS2.BE1-25A Synchronizer.Mathematical function1
    _ess2_be1_25a_synchronizer_mathematical_function1__out = sqrt(_ess2_be1_25a_synchronizer_sum4__out);
    // Generated from the component: ESS2.Controller.Outer Voltage Loop + Inner Current Loop.outer power loop.Sum3
    _ess2_controller_outer_voltage_loop___inner_current_loop_outer_power_loop_sum3__out = _ess2_controller_outer_voltage_loop___inner_current_loop_outer_power_loop_product3__out - _ess2_controller_outer_voltage_loop___inner_current_loop_outer_power_loop_product4__out;
    // Generated from the component: ESS2.Controller.Outer Voltage Loop + Inner Current Loop.outer power loop.Sum4
    _ess2_controller_outer_voltage_loop___inner_current_loop_outer_power_loop_sum4__out = _ess2_controller_outer_voltage_loop___inner_current_loop_outer_power_loop_product5__out + _ess2_controller_outer_voltage_loop___inner_current_loop_outer_power_loop_product6__out;
    // Generated from the component: ESS2.Controller.Outer Voltage Loop + Inner Current Loop.squared_Vt2.Sum3
    _ess2_controller_outer_voltage_loop___inner_current_loop_squared_vt2_sum3__out = _ess2_controller_outer_voltage_loop___inner_current_loop_squared_vt2_product1__out + _ess2_controller_outer_voltage_loop___inner_current_loop_squared_vt2_product2__out;
    // Generated from the component: ESS2.Controller.Sum2
    _ess2_controller_sum2__out = _ess2_controller_product10__out - _ess2_controller_product12__out;
    // Generated from the component: ESS2.Controller.Sum1
    _ess2_controller_sum1__out = _ess2_controller_product111__out + _ess2_controller_product13__out;
    // Generated from the component: ESS2.Power_Meas.Power_Meas_DQpu.Sum1
    _ess2_power_meas_power_meas_dqpu_sum1__out = _ess2_power_meas_power_meas_dqpu_product1__out + _ess2_power_meas_power_meas_dqpu_product2__out;
    // Generated from the component: ESS2.Power_Meas.Power_Meas_DQpu.Sum2
    _ess2_power_meas_power_meas_dqpu_sum2__out = _ess2_power_meas_power_meas_dqpu_product4__out - _ess2_power_meas_power_meas_dqpu_product3__out;
    // Generated from the component: ESS2.Controller.PLL.PLL.PID.Sum8
    _ess2_controller_pll_pll_pid_sum8__out = _ess2_controller_pll_pll_pid_kd__out - _ess2_controller_pll_pll_pid_integrator2__out;
    // Generated from the component: ESS2.Battery.Rate Transition2.Input
    _ess2_battery_rate_transition2_output__out[0] = _ess2_battery_bus_join1__out[0];
    _ess2_battery_rate_transition2_output__out[1] = _ess2_battery_bus_join1__out[1];
    _ess2_battery_rate_transition2_output__out[2] = _ess2_battery_bus_join1__out[2];
    _ess2_battery_rate_transition2_output__out[3] = _ess2_battery_bus_join1__out[3];
    _ess2_battery_rate_transition2_output__out[4] = _ess2_battery_bus_join1__out[4];
    _ess2_battery_rate_transition2_output__out[5] = _ess2_battery_bus_join1__out[5];
    // Generated from the component: ESS2.Controller.Frequency droop.Sum4
    _ess2_controller_frequency_droop_sum4__out = _ess2_controller_frequency_droop_c_function1__out + _ess2_controller_frequency_droop_rate_transition12_output__out;
    // Generated from the component: ESS2.Controller.Voltage droop.Sum4
    _ess2_controller_voltage_droop_sum4__out = _ess2_controller_voltage_droop_c_function1__out + _ess2_controller_voltage_droop_rate_transition13_output__out;
    // Generated from the component: ESS2.Controller.Outer Voltage Loop + Inner Current Loop.Outer voltage control loop.Sum10
    _ess2_controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_sum10__out = _ess2_controller_gain11__out - _ess2_controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_product6__out;
    // Generated from the component: ESS2.Controller.Outer Voltage Loop + Inner Current Loop.Outer voltage control loop.Sum13
    _ess2_controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_sum13__out = _ess2_controller_gain12__out + _ess2_controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_product8__out;
    // Generated from the component: ESS2.BE1-25A Synchronizer.confine phase2
    _ess2_be1_25a_synchronizer_confine_phase2__in = _ess2_be1_25a_synchronizer_trigonometric_function2__out;
    _ess2_be1_25a_synchronizer_confine_phase2__x = _ess2_be1_25a_synchronizer_confine_phase2__in / 6.283185307179586;
    _ess2_be1_25a_synchronizer_confine_phase2__floor_in = floor(_ess2_be1_25a_synchronizer_confine_phase2__x);
    _ess2_be1_25a_synchronizer_confine_phase2__out = _ess2_be1_25a_synchronizer_confine_phase2__in - (6.283185307179586 * _ess2_be1_25a_synchronizer_confine_phase2__floor_in);
    // Generated from the component: ESS2.BE1-25A Synchronizer.PLL.confine phase
    _ess2_be1_25a_synchronizer_pll_confine_phase__in = _ess2_be1_25a_synchronizer_pll_c_function1__out;
    _ess2_be1_25a_synchronizer_pll_confine_phase__x = _ess2_be1_25a_synchronizer_pll_confine_phase__in / 6.283185307179586;
    _ess2_be1_25a_synchronizer_pll_confine_phase__floor_in = floor(_ess2_be1_25a_synchronizer_pll_confine_phase__x);
    _ess2_be1_25a_synchronizer_pll_confine_phase__out = _ess2_be1_25a_synchronizer_pll_confine_phase__in - (6.283185307179586 * _ess2_be1_25a_synchronizer_pll_confine_phase__floor_in);
    // Generated from the component: ESS2.BE1-25A Synchronizer.Mathematical function2
    _ess2_be1_25a_synchronizer_mathematical_function2__out = sqrt(_ess2_be1_25a_synchronizer_sum5__out);
    // Generated from the component: ESS2.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Sum6
    _ess2_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum6__out = _ess2_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_discrete_transfer_function2__out + _ess2_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_product2__out;
    // Generated from the component: ESS2.Controller.Outer Voltage Loop + Inner Current Loop.Sum8
    _ess2_controller_outer_voltage_loop___inner_current_loop_sum8__out = _ess2_controller_outer_voltage_loop___inner_current_loop_gain4__out + _ess2_controller_constant1__out;
    // Generated from the component: ESS2.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Sum5
    _ess2_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum5__out = _ess2_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_discrete_transfer_function1__out - _ess2_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_product1__out;
    // Generated from the component: PV1.Solar irradiance.Sum6
    _pv1_solar_irradiance_sum6__out = _pv1_solar_irradiance_product2__out + _pv1_solar_irradiance_gain3__out + _pv1_solar_irradiance_c_function3__Gd;
    // Generated from the component: PV2.Solar irradiance.Sum6
    _pv2_solar_irradiance_sum6__out = _pv2_solar_irradiance_product2__out + _pv2_solar_irradiance_gain3__out + _pv2_solar_irradiance_c_function3__Gd;
    // Generated from the component: ESS1.BE1-25A Synchronizer.|E|
    HIL_OutAO(0x4018, (float)_ess1_be1_25a_synchronizer_mathematical_function1__out);
    // Generated from the component: ESS1.Controller.Outer Voltage Loop + Inner Current Loop.outer power loop.Comparator1
    if (_ess1_controller_outer_voltage_loop___inner_current_loop_squared_vt2_sum3__out < _ess1_controller_outer_voltage_loop___inner_current_loop_outer_power_loop_limit_zero__out) {
        _ess1_controller_outer_voltage_loop___inner_current_loop_outer_power_loop_comparator1__out = 0;
    } else if (_ess1_controller_outer_voltage_loop___inner_current_loop_squared_vt2_sum3__out > _ess1_controller_outer_voltage_loop___inner_current_loop_outer_power_loop_limit_zero__out) {
        _ess1_controller_outer_voltage_loop___inner_current_loop_outer_power_loop_comparator1__out = 1;
    } else {
        _ess1_controller_outer_voltage_loop___inner_current_loop_outer_power_loop_comparator1__out = _ess1_controller_outer_voltage_loop___inner_current_loop_outer_power_loop_comparator1__state;
    }
    // Generated from the component: ESS1.Controller.Gain14
    _ess1_controller_gain14__out = 20000.0 * _ess1_controller_sum2__out;
    // Generated from the component: ESS1.Controller.Sum5
    _ess1_controller_sum5__out = _ess1_controller_sum2__out - _ess1_controller_integrator3__out;
    // Generated from the component: ESS1.Controller.Gain15
    _ess1_controller_gain15__out = 20000.0 * _ess1_controller_sum1__out;
    // Generated from the component: ESS1.Controller.Sum4
    _ess1_controller_sum4__out = _ess1_controller_sum1__out - _ess1_controller_integrator2__out;
    // Generated from the component: ESS1.Power_Meas.Power_Meas_DQpu.LPF_P
    _ess1_power_meas_power_meas_dqpu_lpf_p__a_sum = 0.0f;
    _ess1_power_meas_power_meas_dqpu_lpf_p__b_sum = 0.0f;
    _ess1_power_meas_power_meas_dqpu_lpf_p__delay_line_in = 0.0f;
    for (_ess1_power_meas_power_meas_dqpu_lpf_p__i = 0; _ess1_power_meas_power_meas_dqpu_lpf_p__i < 1; _ess1_power_meas_power_meas_dqpu_lpf_p__i++) {
        _ess1_power_meas_power_meas_dqpu_lpf_p__b_sum += _ess1_power_meas_power_meas_dqpu_lpf_p__b_coeff[_ess1_power_meas_power_meas_dqpu_lpf_p__i + 1] * _ess1_power_meas_power_meas_dqpu_lpf_p__states[_ess1_power_meas_power_meas_dqpu_lpf_p__i];
    }
    _ess1_power_meas_power_meas_dqpu_lpf_p__a_sum += _ess1_power_meas_power_meas_dqpu_lpf_p__states[0] * _ess1_power_meas_power_meas_dqpu_lpf_p__a_coeff[1];
    _ess1_power_meas_power_meas_dqpu_lpf_p__delay_line_in = _ess1_power_meas_power_meas_dqpu_sum1__out - _ess1_power_meas_power_meas_dqpu_lpf_p__a_sum;
    _ess1_power_meas_power_meas_dqpu_lpf_p__b_sum += _ess1_power_meas_power_meas_dqpu_lpf_p__b_coeff[0] * _ess1_power_meas_power_meas_dqpu_lpf_p__delay_line_in;
    _ess1_power_meas_power_meas_dqpu_lpf_p__out = _ess1_power_meas_power_meas_dqpu_lpf_p__b_sum;
    // Generated from the component: ESS1.Power_Meas.Power_Meas_DQpu.LPF_Q
    _ess1_power_meas_power_meas_dqpu_lpf_q__a_sum = 0.0f;
    _ess1_power_meas_power_meas_dqpu_lpf_q__b_sum = 0.0f;
    _ess1_power_meas_power_meas_dqpu_lpf_q__delay_line_in = 0.0f;
    for (_ess1_power_meas_power_meas_dqpu_lpf_q__i = 0; _ess1_power_meas_power_meas_dqpu_lpf_q__i < 1; _ess1_power_meas_power_meas_dqpu_lpf_q__i++) {
        _ess1_power_meas_power_meas_dqpu_lpf_q__b_sum += _ess1_power_meas_power_meas_dqpu_lpf_q__b_coeff[_ess1_power_meas_power_meas_dqpu_lpf_q__i + 1] * _ess1_power_meas_power_meas_dqpu_lpf_q__states[_ess1_power_meas_power_meas_dqpu_lpf_q__i];
    }
    _ess1_power_meas_power_meas_dqpu_lpf_q__a_sum += _ess1_power_meas_power_meas_dqpu_lpf_q__states[0] * _ess1_power_meas_power_meas_dqpu_lpf_q__a_coeff[1];
    _ess1_power_meas_power_meas_dqpu_lpf_q__delay_line_in = _ess1_power_meas_power_meas_dqpu_sum2__out - _ess1_power_meas_power_meas_dqpu_lpf_q__a_sum;
    _ess1_power_meas_power_meas_dqpu_lpf_q__b_sum += _ess1_power_meas_power_meas_dqpu_lpf_q__b_coeff[0] * _ess1_power_meas_power_meas_dqpu_lpf_q__delay_line_in;
    _ess1_power_meas_power_meas_dqpu_lpf_q__out = _ess1_power_meas_power_meas_dqpu_lpf_q__b_sum;
    // Generated from the component: ESS1.Controller.PLL.PLL.PID.Gain1
    _ess1_controller_pll_pll_pid_gain1__out = 714.2857 * _ess1_controller_pll_pll_pid_sum8__out;
    // Generated from the component: ESS1.Controller.Frequency droop.C function2
    _ess1_controller_frequency_droop_c_function2__clk = _ess1_controller_frequency_droop_clock2__out;
    _ess1_controller_frequency_droop_c_function2__cnt = _ess1_controller_outer_voltage_loop___inner_current_loop_logical_operator1__out;
    _ess1_controller_frequency_droop_c_function2__in = _ess1_controller_frequency_droop_sum4__out;
    if (_ess1_controller_frequency_droop_c_function2__cnt > 0)_ess1_controller_frequency_droop_c_function2__out = _ess1_controller_frequency_droop_c_function2__in;
    else _ess1_controller_frequency_droop_c_function2__out = 2 * 3.14159265359 * 60;
    // Generated from the component: ESS1.Controller.Voltage droop.C function2
    _ess1_controller_voltage_droop_c_function2__GFM = _ess1_controller_outer_voltage_loop___inner_current_loop_logical_operator1__out;
    _ess1_controller_voltage_droop_c_function2__clk = _ess1_controller_voltage_droop_clock2__out;
    _ess1_controller_voltage_droop_c_function2__in = _ess1_controller_voltage_droop_sum4__out;
    if (_ess1_controller_voltage_droop_c_function2__GFM > 0)_ess1_controller_voltage_droop_c_function2__out = _ess1_controller_voltage_droop_c_function2__in;
    else _ess1_controller_voltage_droop_c_function2__out = 1;
    // Generated from the component: ESS1.Controller.Voltage droop.E_1
    HIL_OutAO(0x402f, (float)_ess1_controller_voltage_droop_sum4__out);
    // Generated from the component: ESS1.BE1-25A Synchronizer.Sum1
    _ess1_be1_25a_synchronizer_sum1__out =  - _ess1_be1_25a_synchronizer_confine_phase1__out + _ess1_be1_25a_synchronizer_confine_phase2__out;
    // Generated from the component: ESS1.BE1-25A Synchronizer.Sum3
    _ess1_be1_25a_synchronizer_sum3__out =  - _ess1_be1_25a_synchronizer_mathematical_function1__out + _ess1_be1_25a_synchronizer_mathematical_function2__out;
    // Generated from the component: ESS1.BE1-25A Synchronizer.|V|
    HIL_OutAO(0x4019, (float)_ess1_be1_25a_synchronizer_mathematical_function2__out);
    // Generated from the component: ESS1.Controller.Outer Voltage Loop + Inner Current Loop.Eq_ref
    HIL_OutAO(0x401f, (float)_ess1_controller_outer_voltage_loop___inner_current_loop_sum8__out);
    // Generated from the component: ESS1.Controller.Outer Voltage Loop + Inner Current Loop.Outer voltage control loop.Sum11
    _ess1_controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_sum11__out = _ess1_controller_outer_voltage_loop___inner_current_loop_sum8__out - _ess1_controller_gain10__out;
    // Generated from the component: ESS2.BE1-25A Synchronizer.|E|
    HIL_OutAO(0x404d, (float)_ess2_be1_25a_synchronizer_mathematical_function1__out);
    // Generated from the component: ESS2.Controller.Outer Voltage Loop + Inner Current Loop.outer power loop.Comparator1
    if (_ess2_controller_outer_voltage_loop___inner_current_loop_squared_vt2_sum3__out < _ess2_controller_outer_voltage_loop___inner_current_loop_outer_power_loop_limit_zero__out) {
        _ess2_controller_outer_voltage_loop___inner_current_loop_outer_power_loop_comparator1__out = 0;
    } else if (_ess2_controller_outer_voltage_loop___inner_current_loop_squared_vt2_sum3__out > _ess2_controller_outer_voltage_loop___inner_current_loop_outer_power_loop_limit_zero__out) {
        _ess2_controller_outer_voltage_loop___inner_current_loop_outer_power_loop_comparator1__out = 1;
    } else {
        _ess2_controller_outer_voltage_loop___inner_current_loop_outer_power_loop_comparator1__out = _ess2_controller_outer_voltage_loop___inner_current_loop_outer_power_loop_comparator1__state;
    }
    // Generated from the component: ESS2.Controller.Gain14
    _ess2_controller_gain14__out = 20000.0 * _ess2_controller_sum2__out;
    // Generated from the component: ESS2.Controller.Sum5
    _ess2_controller_sum5__out = _ess2_controller_sum2__out - _ess2_controller_integrator3__out;
    // Generated from the component: ESS2.Controller.Gain15
    _ess2_controller_gain15__out = 20000.0 * _ess2_controller_sum1__out;
    // Generated from the component: ESS2.Controller.Sum4
    _ess2_controller_sum4__out = _ess2_controller_sum1__out - _ess2_controller_integrator2__out;
    // Generated from the component: ESS2.Power_Meas.Power_Meas_DQpu.LPF_P
    _ess2_power_meas_power_meas_dqpu_lpf_p__a_sum = 0.0f;
    _ess2_power_meas_power_meas_dqpu_lpf_p__b_sum = 0.0f;
    _ess2_power_meas_power_meas_dqpu_lpf_p__delay_line_in = 0.0f;
    for (_ess2_power_meas_power_meas_dqpu_lpf_p__i = 0; _ess2_power_meas_power_meas_dqpu_lpf_p__i < 1; _ess2_power_meas_power_meas_dqpu_lpf_p__i++) {
        _ess2_power_meas_power_meas_dqpu_lpf_p__b_sum += _ess2_power_meas_power_meas_dqpu_lpf_p__b_coeff[_ess2_power_meas_power_meas_dqpu_lpf_p__i + 1] * _ess2_power_meas_power_meas_dqpu_lpf_p__states[_ess2_power_meas_power_meas_dqpu_lpf_p__i];
    }
    _ess2_power_meas_power_meas_dqpu_lpf_p__a_sum += _ess2_power_meas_power_meas_dqpu_lpf_p__states[0] * _ess2_power_meas_power_meas_dqpu_lpf_p__a_coeff[1];
    _ess2_power_meas_power_meas_dqpu_lpf_p__delay_line_in = _ess2_power_meas_power_meas_dqpu_sum1__out - _ess2_power_meas_power_meas_dqpu_lpf_p__a_sum;
    _ess2_power_meas_power_meas_dqpu_lpf_p__b_sum += _ess2_power_meas_power_meas_dqpu_lpf_p__b_coeff[0] * _ess2_power_meas_power_meas_dqpu_lpf_p__delay_line_in;
    _ess2_power_meas_power_meas_dqpu_lpf_p__out = _ess2_power_meas_power_meas_dqpu_lpf_p__b_sum;
    // Generated from the component: ESS2.Power_Meas.Power_Meas_DQpu.LPF_Q
    _ess2_power_meas_power_meas_dqpu_lpf_q__a_sum = 0.0f;
    _ess2_power_meas_power_meas_dqpu_lpf_q__b_sum = 0.0f;
    _ess2_power_meas_power_meas_dqpu_lpf_q__delay_line_in = 0.0f;
    for (_ess2_power_meas_power_meas_dqpu_lpf_q__i = 0; _ess2_power_meas_power_meas_dqpu_lpf_q__i < 1; _ess2_power_meas_power_meas_dqpu_lpf_q__i++) {
        _ess2_power_meas_power_meas_dqpu_lpf_q__b_sum += _ess2_power_meas_power_meas_dqpu_lpf_q__b_coeff[_ess2_power_meas_power_meas_dqpu_lpf_q__i + 1] * _ess2_power_meas_power_meas_dqpu_lpf_q__states[_ess2_power_meas_power_meas_dqpu_lpf_q__i];
    }
    _ess2_power_meas_power_meas_dqpu_lpf_q__a_sum += _ess2_power_meas_power_meas_dqpu_lpf_q__states[0] * _ess2_power_meas_power_meas_dqpu_lpf_q__a_coeff[1];
    _ess2_power_meas_power_meas_dqpu_lpf_q__delay_line_in = _ess2_power_meas_power_meas_dqpu_sum2__out - _ess2_power_meas_power_meas_dqpu_lpf_q__a_sum;
    _ess2_power_meas_power_meas_dqpu_lpf_q__b_sum += _ess2_power_meas_power_meas_dqpu_lpf_q__b_coeff[0] * _ess2_power_meas_power_meas_dqpu_lpf_q__delay_line_in;
    _ess2_power_meas_power_meas_dqpu_lpf_q__out = _ess2_power_meas_power_meas_dqpu_lpf_q__b_sum;
    // Generated from the component: ESS2.Controller.PLL.PLL.PID.Gain1
    _ess2_controller_pll_pll_pid_gain1__out = 714.2857 * _ess2_controller_pll_pll_pid_sum8__out;
    // Generated from the component: ESS2.Controller.Frequency droop.C function2
    _ess2_controller_frequency_droop_c_function2__clk = _ess2_controller_frequency_droop_clock2__out;
    _ess2_controller_frequency_droop_c_function2__cnt = _ess2_controller_outer_voltage_loop___inner_current_loop_logical_operator1__out;
    _ess2_controller_frequency_droop_c_function2__in = _ess2_controller_frequency_droop_sum4__out;
    if (_ess2_controller_frequency_droop_c_function2__cnt > 0)_ess2_controller_frequency_droop_c_function2__out = _ess2_controller_frequency_droop_c_function2__in;
    else _ess2_controller_frequency_droop_c_function2__out = 2 * 3.14159265359 * 60;
    // Generated from the component: ESS2.Controller.Voltage droop.C function2
    _ess2_controller_voltage_droop_c_function2__GFM = _ess2_controller_outer_voltage_loop___inner_current_loop_logical_operator1__out;
    _ess2_controller_voltage_droop_c_function2__clk = _ess2_controller_voltage_droop_clock2__out;
    _ess2_controller_voltage_droop_c_function2__in = _ess2_controller_voltage_droop_sum4__out;
    if (_ess2_controller_voltage_droop_c_function2__GFM > 0)_ess2_controller_voltage_droop_c_function2__out = _ess2_controller_voltage_droop_c_function2__in;
    else _ess2_controller_voltage_droop_c_function2__out = 1;
    // Generated from the component: ESS2.Controller.Voltage droop.E_1
    HIL_OutAO(0x4064, (float)_ess2_controller_voltage_droop_sum4__out);
    // Generated from the component: ESS2.BE1-25A Synchronizer.Sum1
    _ess2_be1_25a_synchronizer_sum1__out =  - _ess2_be1_25a_synchronizer_confine_phase1__out + _ess2_be1_25a_synchronizer_confine_phase2__out;
    // Generated from the component: ESS2.BE1-25A Synchronizer.Sum3
    _ess2_be1_25a_synchronizer_sum3__out =  - _ess2_be1_25a_synchronizer_mathematical_function1__out + _ess2_be1_25a_synchronizer_mathematical_function2__out;
    // Generated from the component: ESS2.BE1-25A Synchronizer.|V|
    HIL_OutAO(0x404e, (float)_ess2_be1_25a_synchronizer_mathematical_function2__out);
    // Generated from the component: ESS2.Controller.Outer Voltage Loop + Inner Current Loop.Eq_ref
    HIL_OutAO(0x4054, (float)_ess2_controller_outer_voltage_loop___inner_current_loop_sum8__out);
    // Generated from the component: ESS2.Controller.Outer Voltage Loop + Inner Current Loop.Outer voltage control loop.Sum11
    _ess2_controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_sum11__out = _ess2_controller_outer_voltage_loop___inner_current_loop_sum8__out - _ess2_controller_gain10__out;
    // Generated from the component: PV1.Bus Join1
    _pv1_bus_join1__out[0] = _pv1_constant1__out;
    _pv1_bus_join1__out[1] = _pv1_constant1__out;
    _pv1_bus_join1__out[2] = _pv1_solar_irradiance_sum6__out;
    _pv1_bus_join1__out[3] = _pv1_constant2__out;
    _pv1_bus_join1__out[4] = _pv1_constant1__out;
    _pv1_bus_join1__out[5] = _pv1_q_ref_pv1__out;
    // Generated from the component: PV1.SI
    HIL_OutAO(0x4093, (float)_pv1_solar_irradiance_sum6__out);
    // Generated from the component: PV2.Bus Join1
    _pv2_bus_join1__out[0] = _pv2_constant1__out;
    _pv2_bus_join1__out[1] = _pv2_constant1__out;
    _pv2_bus_join1__out[2] = _pv2_solar_irradiance_sum6__out;
    _pv2_bus_join1__out[3] = _pv2_constant2__out;
    _pv2_bus_join1__out[4] = _pv2_constant1__out;
    _pv2_bus_join1__out[5] = _pv2_q_ref_pv2__out;
    // Generated from the component: PV2.SI
    HIL_OutAO(0x40b4, (float)_pv2_solar_irradiance_sum6__out);
    // Generated from the component: ESS1.Controller.Outer Voltage Loop + Inner Current Loop.outer power loop.Signal switch1
    _ess1_controller_outer_voltage_loop___inner_current_loop_outer_power_loop_signal_switch1__out = (_ess1_controller_outer_voltage_loop___inner_current_loop_outer_power_loop_comparator1__out < 0.5f) ? _ess1_controller_outer_voltage_loop___inner_current_loop_outer_power_loop_one__out : _ess1_controller_outer_voltage_loop___inner_current_loop_squared_vt2_sum3__out;
    // Generated from the component: ESS1.Controller.Q1
    HIL_OutAO(0x402e, (float)_ess1_controller_gain14__out);
    // Generated from the component: ESS1.Controller.Gain13
    _ess1_controller_gain13__out = 2.0 * _ess1_controller_sum5__out;
    // Generated from the component: ESS1.Controller.P1
    HIL_OutAO(0x402c, (float)_ess1_controller_gain15__out);
    // Generated from the component: ESS1.Controller.Gain4
    _ess1_controller_gain4__out = 2.0 * _ess1_controller_sum4__out;
    // Generated from the component: ESS1.Controller.PLL.PLL.PID.Sum5
    _ess1_controller_pll_pll_pid_sum5__out = _ess1_controller_pll_pll_pid_kp__out + _ess1_controller_pll_pll_pid_gain1__out + _ess1_controller_pll_pll_pid_integrator1__out;
    // Generated from the component: ESS1.BE1-25A Synchronizer.Sum2
    _ess1_be1_25a_synchronizer_sum2__out =  - _ess1_controller_frequency_droop_c_function2__out + _ess1_be1_25a_synchronizer_pll_pid_controller1__out;
    // Generated from the component: ESS1.BE1-25A Synchronizer.w_G
    HIL_OutAO(0x4016, (float)_ess1_controller_frequency_droop_c_function2__out);
    // Generated from the component: ESS1.Controller.Gain1
    _ess1_controller_gain1__out = 0.15915494309189535 * _ess1_controller_frequency_droop_c_function2__out;
    // Generated from the component: ESS1.Controller.E_dREF1
    HIL_OutAO(0x401c, (float)_ess1_controller_voltage_droop_c_function2__out);
    // Generated from the component: ESS1.Controller.Outer Voltage Loop + Inner Current Loop.Sum7
    _ess1_controller_outer_voltage_loop___inner_current_loop_sum7__out = _ess1_controller_outer_voltage_loop___inner_current_loop_gain3__out + _ess1_controller_voltage_droop_c_function2__out;
    // Generated from the component: ESS1.BE1-25A Synchronizer.confine phase
    _ess1_be1_25a_synchronizer_confine_phase__in = _ess1_be1_25a_synchronizer_sum1__out;
    if (_ess1_be1_25a_synchronizer_confine_phase__in > 0) {
        if (_ess1_be1_25a_synchronizer_confine_phase__in > (6.283185307179586 / 2))_ess1_be1_25a_synchronizer_confine_phase__out = _ess1_be1_25a_synchronizer_confine_phase__in - 6.283185307179586;
        else _ess1_be1_25a_synchronizer_confine_phase__out = _ess1_be1_25a_synchronizer_confine_phase__in;
    }
    if (_ess1_be1_25a_synchronizer_confine_phase__in < 0) {
        if (_ess1_be1_25a_synchronizer_confine_phase__in < (-6.283185307179586 / 2))_ess1_be1_25a_synchronizer_confine_phase__out = _ess1_be1_25a_synchronizer_confine_phase__in + 6.283185307179586;
        else _ess1_be1_25a_synchronizer_confine_phase__out = _ess1_be1_25a_synchronizer_confine_phase__in;
    }
    // Generated from the component: ESS1.BE1-25A Synchronizer.Abs2
    _ess1_be1_25a_synchronizer_abs2__out = fabs(_ess1_be1_25a_synchronizer_sum3__out);
    // Generated from the component: ESS1.BE1-25A Synchronizer.Rate Transition6.Input
    _ess1_be1_25a_synchronizer_rate_transition6_output__out = _ess1_be1_25a_synchronizer_sum3__out;
    // Generated from the component: ESS1.Controller.Outer Voltage Loop + Inner Current Loop.Outer voltage control loop.Eq_err
    HIL_OutAO(0x4023, (float)_ess1_controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_sum11__out);
    // Generated from the component: ESS1.Controller.Outer Voltage Loop + Inner Current Loop.Outer voltage control loop.Limit2
    if (_ess1_controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_sum11__out > 1.0) {
        _ess1_controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_limit2__out = 1.0;
    } else if (_ess1_controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_sum11__out < -1.0) {
        _ess1_controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_limit2__out = -1.0;
    } else {
        _ess1_controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_limit2__out = _ess1_controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_sum11__out;
    }
    // Generated from the component: ESS2.Controller.Outer Voltage Loop + Inner Current Loop.outer power loop.Signal switch1
    _ess2_controller_outer_voltage_loop___inner_current_loop_outer_power_loop_signal_switch1__out = (_ess2_controller_outer_voltage_loop___inner_current_loop_outer_power_loop_comparator1__out < 0.5f) ? _ess2_controller_outer_voltage_loop___inner_current_loop_outer_power_loop_one__out : _ess2_controller_outer_voltage_loop___inner_current_loop_squared_vt2_sum3__out;
    // Generated from the component: ESS2.Controller.Q1
    HIL_OutAO(0x4063, (float)_ess2_controller_gain14__out);
    // Generated from the component: ESS2.Controller.Gain13
    _ess2_controller_gain13__out = 2.0 * _ess2_controller_sum5__out;
    // Generated from the component: ESS2.Controller.P1
    HIL_OutAO(0x4061, (float)_ess2_controller_gain15__out);
    // Generated from the component: ESS2.Controller.Gain4
    _ess2_controller_gain4__out = 2.0 * _ess2_controller_sum4__out;
    // Generated from the component: ESS2.Controller.PLL.PLL.PID.Sum5
    _ess2_controller_pll_pll_pid_sum5__out = _ess2_controller_pll_pll_pid_kp__out + _ess2_controller_pll_pll_pid_gain1__out + _ess2_controller_pll_pll_pid_integrator1__out;
    // Generated from the component: ESS2.BE1-25A Synchronizer.Sum2
    _ess2_be1_25a_synchronizer_sum2__out =  - _ess2_controller_frequency_droop_c_function2__out + _ess2_be1_25a_synchronizer_pll_pid_controller1__out;
    // Generated from the component: ESS2.BE1-25A Synchronizer.w_G
    HIL_OutAO(0x404b, (float)_ess2_controller_frequency_droop_c_function2__out);
    // Generated from the component: ESS2.Controller.Gain1
    _ess2_controller_gain1__out = 0.15915494309189535 * _ess2_controller_frequency_droop_c_function2__out;
    // Generated from the component: ESS2.Controller.E_dREF1
    HIL_OutAO(0x4051, (float)_ess2_controller_voltage_droop_c_function2__out);
    // Generated from the component: ESS2.Controller.Outer Voltage Loop + Inner Current Loop.Sum7
    _ess2_controller_outer_voltage_loop___inner_current_loop_sum7__out = _ess2_controller_outer_voltage_loop___inner_current_loop_gain3__out + _ess2_controller_voltage_droop_c_function2__out;
    // Generated from the component: ESS2.BE1-25A Synchronizer.confine phase
    _ess2_be1_25a_synchronizer_confine_phase__in = _ess2_be1_25a_synchronizer_sum1__out;
    if (_ess2_be1_25a_synchronizer_confine_phase__in > 0) {
        if (_ess2_be1_25a_synchronizer_confine_phase__in > (6.283185307179586 / 2))_ess2_be1_25a_synchronizer_confine_phase__out = _ess2_be1_25a_synchronizer_confine_phase__in - 6.283185307179586;
        else _ess2_be1_25a_synchronizer_confine_phase__out = _ess2_be1_25a_synchronizer_confine_phase__in;
    }
    if (_ess2_be1_25a_synchronizer_confine_phase__in < 0) {
        if (_ess2_be1_25a_synchronizer_confine_phase__in < (-6.283185307179586 / 2))_ess2_be1_25a_synchronizer_confine_phase__out = _ess2_be1_25a_synchronizer_confine_phase__in + 6.283185307179586;
        else _ess2_be1_25a_synchronizer_confine_phase__out = _ess2_be1_25a_synchronizer_confine_phase__in;
    }
    // Generated from the component: ESS2.BE1-25A Synchronizer.Abs2
    _ess2_be1_25a_synchronizer_abs2__out = fabs(_ess2_be1_25a_synchronizer_sum3__out);
    // Generated from the component: ESS2.BE1-25A Synchronizer.Rate Transition6.Input
    _ess2_be1_25a_synchronizer_rate_transition6_output__out = _ess2_be1_25a_synchronizer_sum3__out;
    // Generated from the component: ESS2.Controller.Outer Voltage Loop + Inner Current Loop.Outer voltage control loop.Eq_err
    HIL_OutAO(0x4058, (float)_ess2_controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_sum11__out);
    // Generated from the component: ESS2.Controller.Outer Voltage Loop + Inner Current Loop.Outer voltage control loop.Limit2
    if (_ess2_controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_sum11__out > 1.0) {
        _ess2_controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_limit2__out = 1.0;
    } else if (_ess2_controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_sum11__out < -1.0) {
        _ess2_controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_limit2__out = -1.0;
    } else {
        _ess2_controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_limit2__out = _ess2_controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_sum11__out;
    }
    // Generated from the component: PV1.PV Plant.Input.Bus Split2
    _pv1_pv_plant_input_bus_split2__out = _pv1_bus_join1__out[0];
    _pv1_pv_plant_input_bus_split2__out1 = _pv1_bus_join1__out[1];
    _pv1_pv_plant_input_bus_split2__out2 = _pv1_bus_join1__out[2];
    _pv1_pv_plant_input_bus_split2__out3 = _pv1_bus_join1__out[3];
    _pv1_pv_plant_input_bus_split2__out4 = _pv1_bus_join1__out[4];
    _pv1_pv_plant_input_bus_split2__out5 = _pv1_bus_join1__out[5];
    // Generated from the component: PV2.PV Plant.Input.Bus Split2
    _pv2_pv_plant_input_bus_split2__out = _pv2_bus_join1__out[0];
    _pv2_pv_plant_input_bus_split2__out1 = _pv2_bus_join1__out[1];
    _pv2_pv_plant_input_bus_split2__out2 = _pv2_bus_join1__out[2];
    _pv2_pv_plant_input_bus_split2__out3 = _pv2_bus_join1__out[3];
    _pv2_pv_plant_input_bus_split2__out4 = _pv2_bus_join1__out[4];
    _pv2_pv_plant_input_bus_split2__out5 = _pv2_bus_join1__out[5];
    // Generated from the component: ESS1.Controller.Outer Voltage Loop + Inner Current Loop.outer power loop.Et_sqr_res
    HIL_OutAO(0x402b, (float)_ess1_controller_outer_voltage_loop___inner_current_loop_outer_power_loop_signal_switch1__out);
    // Generated from the component: ESS1.Controller.Outer Voltage Loop + Inner Current Loop.outer power loop.Product1
    _ess1_controller_outer_voltage_loop___inner_current_loop_outer_power_loop_product1__out = (_ess1_controller_outer_voltage_loop___inner_current_loop_outer_power_loop_sum3__out) * 1.0 / (_ess1_controller_outer_voltage_loop___inner_current_loop_outer_power_loop_signal_switch1__out);
    // Generated from the component: ESS1.Controller.Outer Voltage Loop + Inner Current Loop.outer power loop.Product2
    _ess1_controller_outer_voltage_loop___inner_current_loop_outer_power_loop_product2__out = (_ess1_controller_outer_voltage_loop___inner_current_loop_outer_power_loop_sum4__out) * 1.0 / (_ess1_controller_outer_voltage_loop___inner_current_loop_outer_power_loop_signal_switch1__out);
    // Generated from the component: ESS1.Controller.PLL.PLL.PID.Limit1
    if (_ess1_controller_pll_pll_pid_sum5__out > 527.7875658030853) {
        _ess1_controller_pll_pll_pid_limit1__out = 527.7875658030853;
    } else if (_ess1_controller_pll_pll_pid_sum5__out < 0.0) {
        _ess1_controller_pll_pll_pid_limit1__out = 0.0;
    } else {
        _ess1_controller_pll_pll_pid_limit1__out = _ess1_controller_pll_pll_pid_sum5__out;
    }
    // Generated from the component: ESS1.BE1-25A Synchronizer.Abs5
    _ess1_be1_25a_synchronizer_abs5__out = fabs(_ess1_be1_25a_synchronizer_sum2__out);
    // Generated from the component: ESS1.BE1-25A Synchronizer.Rate Transition4.Input
    _ess1_be1_25a_synchronizer_rate_transition4_output__out = _ess1_be1_25a_synchronizer_sum2__out;
    // Generated from the component: ESS1.BE1-25A Synchronizer.frequency_diff3
    HIL_OutAO(0x4014, (float)_ess1_be1_25a_synchronizer_sum2__out);
    // Generated from the component: ESS1.Controller.f1
    HIL_OutAO(0x4031, (float)_ess1_controller_gain1__out);
    // Generated from the component: ESS1.Controller.Outer Voltage Loop + Inner Current Loop.Ed_ref
    HIL_OutAO(0x401e, (float)_ess1_controller_outer_voltage_loop___inner_current_loop_sum7__out);
    // Generated from the component: ESS1.Controller.Outer Voltage Loop + Inner Current Loop.Outer voltage control loop.Sum8
    _ess1_controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_sum8__out = _ess1_controller_outer_voltage_loop___inner_current_loop_sum7__out - _ess1_controller_gain9__out;
    // Generated from the component: ESS1.BE1-25A Synchronizer.Abs4
    _ess1_be1_25a_synchronizer_abs4__out = fabs(_ess1_be1_25a_synchronizer_confine_phase__out);
    // Generated from the component: ESS1.BE1-25A Synchronizer.Rate Transition2.Input
    _ess1_be1_25a_synchronizer_rate_transition2_output__out = _ess1_be1_25a_synchronizer_confine_phase__out;
    // Generated from the component: ESS1.BE1-25A Synchronizer.angle_diff3
    HIL_OutAO(0x4011, (float)_ess1_be1_25a_synchronizer_confine_phase__out);
    // Generated from the component: ESS1.BE1-25A Synchronizer.Relational operator4
    _ess1_be1_25a_synchronizer_relational_operator4__out = (_ess1_be1_25a_synchronizer_abs2__out < _ess1_be1_25a_synchronizer_constant9__out) ? 1 : 0;
    // Generated from the component: ESS1.Controller.Outer Voltage Loop + Inner Current Loop.Outer voltage control loop.PID controller4
    _ess1_controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_pid_controller4__pi_reg_out_int = _ess1_controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_pid_controller4__integrator_state + 0.0033 * _ess1_controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_limit2__out;
    if (_ess1_controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_pid_controller4__pi_reg_out_int < -1.0) {
        _ess1_controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_pid_controller4__out = -1.0;
        _ess1_controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_pid_controller4__av_active = 1;
    } else if (_ess1_controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_pid_controller4__pi_reg_out_int > 1.0) {
        _ess1_controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_pid_controller4__out = 1.0;
        _ess1_controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_pid_controller4__av_active = 1;
    } else {
        _ess1_controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_pid_controller4__out = _ess1_controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_pid_controller4__pi_reg_out_int;
        _ess1_controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_pid_controller4__av_active = 0;
    }
    // Generated from the component: ESS2.Controller.Outer Voltage Loop + Inner Current Loop.outer power loop.Et_sqr_res
    HIL_OutAO(0x4060, (float)_ess2_controller_outer_voltage_loop___inner_current_loop_outer_power_loop_signal_switch1__out);
    // Generated from the component: ESS2.Controller.Outer Voltage Loop + Inner Current Loop.outer power loop.Product1
    _ess2_controller_outer_voltage_loop___inner_current_loop_outer_power_loop_product1__out = (_ess2_controller_outer_voltage_loop___inner_current_loop_outer_power_loop_sum3__out) * 1.0 / (_ess2_controller_outer_voltage_loop___inner_current_loop_outer_power_loop_signal_switch1__out);
    // Generated from the component: ESS2.Controller.Outer Voltage Loop + Inner Current Loop.outer power loop.Product2
    _ess2_controller_outer_voltage_loop___inner_current_loop_outer_power_loop_product2__out = (_ess2_controller_outer_voltage_loop___inner_current_loop_outer_power_loop_sum4__out) * 1.0 / (_ess2_controller_outer_voltage_loop___inner_current_loop_outer_power_loop_signal_switch1__out);
    // Generated from the component: ESS2.Controller.PLL.PLL.PID.Limit1
    if (_ess2_controller_pll_pll_pid_sum5__out > 527.7875658030853) {
        _ess2_controller_pll_pll_pid_limit1__out = 527.7875658030853;
    } else if (_ess2_controller_pll_pll_pid_sum5__out < 0.0) {
        _ess2_controller_pll_pll_pid_limit1__out = 0.0;
    } else {
        _ess2_controller_pll_pll_pid_limit1__out = _ess2_controller_pll_pll_pid_sum5__out;
    }
    // Generated from the component: ESS2.BE1-25A Synchronizer.Abs5
    _ess2_be1_25a_synchronizer_abs5__out = fabs(_ess2_be1_25a_synchronizer_sum2__out);
    // Generated from the component: ESS2.BE1-25A Synchronizer.Rate Transition4.Input
    _ess2_be1_25a_synchronizer_rate_transition4_output__out = _ess2_be1_25a_synchronizer_sum2__out;
    // Generated from the component: ESS2.BE1-25A Synchronizer.frequency_diff3
    HIL_OutAO(0x4049, (float)_ess2_be1_25a_synchronizer_sum2__out);
    // Generated from the component: ESS2.Controller.f1
    HIL_OutAO(0x4066, (float)_ess2_controller_gain1__out);
    // Generated from the component: ESS2.Controller.Outer Voltage Loop + Inner Current Loop.Ed_ref
    HIL_OutAO(0x4053, (float)_ess2_controller_outer_voltage_loop___inner_current_loop_sum7__out);
    // Generated from the component: ESS2.Controller.Outer Voltage Loop + Inner Current Loop.Outer voltage control loop.Sum8
    _ess2_controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_sum8__out = _ess2_controller_outer_voltage_loop___inner_current_loop_sum7__out - _ess2_controller_gain9__out;
    // Generated from the component: ESS2.BE1-25A Synchronizer.Abs4
    _ess2_be1_25a_synchronizer_abs4__out = fabs(_ess2_be1_25a_synchronizer_confine_phase__out);
    // Generated from the component: ESS2.BE1-25A Synchronizer.Rate Transition2.Input
    _ess2_be1_25a_synchronizer_rate_transition2_output__out = _ess2_be1_25a_synchronizer_confine_phase__out;
    // Generated from the component: ESS2.BE1-25A Synchronizer.angle_diff3
    HIL_OutAO(0x4046, (float)_ess2_be1_25a_synchronizer_confine_phase__out);
    // Generated from the component: ESS2.BE1-25A Synchronizer.Relational operator4
    _ess2_be1_25a_synchronizer_relational_operator4__out = (_ess2_be1_25a_synchronizer_abs2__out < _ess2_be1_25a_synchronizer_constant9__out) ? 1 : 0;
    // Generated from the component: ESS2.Controller.Outer Voltage Loop + Inner Current Loop.Outer voltage control loop.PID controller4
    _ess2_controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_pid_controller4__pi_reg_out_int = _ess2_controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_pid_controller4__integrator_state + 0.0033 * _ess2_controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_limit2__out;
    if (_ess2_controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_pid_controller4__pi_reg_out_int < -1.0) {
        _ess2_controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_pid_controller4__out = -1.0;
        _ess2_controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_pid_controller4__av_active = 1;
    } else if (_ess2_controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_pid_controller4__pi_reg_out_int > 1.0) {
        _ess2_controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_pid_controller4__out = 1.0;
        _ess2_controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_pid_controller4__av_active = 1;
    } else {
        _ess2_controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_pid_controller4__out = _ess2_controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_pid_controller4__pi_reg_out_int;
        _ess2_controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_pid_controller4__av_active = 0;
    }
    // Generated from the component: PV1.PV Plant.Control.Grid_follow.Edge Detection1.Relational operator1
    _pv1_pv_plant_control_grid_follow_edge_detection1_relational_operator1__out = (_pv1_pv_plant_input_bus_split2__out1 != _pv1_pv_plant_control_grid_follow_edge_detection1_unit_delay1__out) ? 1 : 0;
    // Generated from the component: PV1.PV Plant.Control.Grid_follow.Gain2
    _pv1_pv_plant_control_grid_follow_gain2__out = 0.1 * _pv1_pv_plant_input_bus_split2__out5;
    // Generated from the component: PV1.PV Plant.Control.Grid_follow.Gain4
    _pv1_pv_plant_control_grid_follow_gain4__out = 0.0020833333333333333 * _pv1_pv_plant_input_bus_split2__out3;
    // Generated from the component: PV1.PV Plant.Control.Grid_follow.Logical operator1
    _pv1_pv_plant_control_grid_follow_logical_operator1__out = !_pv1_pv_plant_input_bus_split2__out;
    // Generated from the component: PV1.PV Plant.Control.Grid_follow.Product2
    _pv1_pv_plant_control_grid_follow_product2__out = (_pv1_pv_plant_input_bus_split2__out2 * _pv1_pv_plant_control_grid_follow_pv_area_m2__out);
    // Generated from the component: PV1.PV Plant.Control.Grid_follow.Qmode
    HIL_OutInt32(0xf00410, _pv1_pv_plant_input_bus_split2__out4 != 0x0);
    // Generated from the component: PV1.PV Plant.Control.Grid_follow.delay
    _pv1_pv_plant_control_grid_follow_delay__in = _pv1_pv_plant_input_bus_split2__out;
    if (_pv1_pv_plant_control_grid_follow_delay__out == 0) {
        if (_pv1_pv_plant_control_grid_follow_delay__in > 0.5) {
            _pv1_pv_plant_control_grid_follow_delay__counter += 2e-05;
            if (_pv1_pv_plant_control_grid_follow_delay__counter > 0.125) {
                _pv1_pv_plant_control_grid_follow_delay__out = 1;
            }
        }
        else {
            _pv1_pv_plant_control_grid_follow_delay__counter -= _pv1_pv_plant_control_grid_follow_delay__counter;
            _pv1_pv_plant_control_grid_follow_delay__out = 0;
        }
    }
    else {
        _pv1_pv_plant_control_grid_follow_delay__counter = 0;
        if (_pv1_pv_plant_control_grid_follow_delay__in <= 0.5) {
            _pv1_pv_plant_control_grid_follow_delay__out = 0;
        }
    }
    // Generated from the component: PV1.PV Plant.Control.Grid_follow.irr_in
    HIL_OutAO(0x4083, (float)_pv1_pv_plant_input_bus_split2__out2);
    // Generated from the component: PV1.PV Plant.Control.PLL.Signal switch1
    _pv1_pv_plant_control_pll_signal_switch1__out = (_pv1_pv_plant_input_bus_split2__out > 0.0f) ? _pv1_pv_plant_va_va1__out : _pv1_pv_plant_control_pll_constant1__out;
    // Generated from the component: PV1.PV Plant.Control.PLL.Signal switch2
    _pv1_pv_plant_control_pll_signal_switch2__out = (_pv1_pv_plant_input_bus_split2__out > 0.0f) ? _pv1_pv_plant_vb_va1__out : _pv1_pv_plant_control_pll_constant1__out;
    // Generated from the component: PV1.PV Plant.Control.PLL.Signal switch3
    _pv1_pv_plant_control_pll_signal_switch3__out = (_pv1_pv_plant_input_bus_split2__out > 0.0f) ? _pv1_pv_plant_vc_va1__out : _pv1_pv_plant_control_pll_constant1__out;
    // Generated from the component: PV1.PV Plant.S1.CTC_Wrapper
    if (_pv1_pv_plant_input_bus_split2__out == 0x0) {
        HIL_OutInt32(0x8a40480, 0x0);
    }
    else {
        HIL_OutInt32(0x8a40480, 0x1);
    }
    // Generated from the component: PV1.PV Plant.delay
    _pv1_pv_plant_delay__in = _pv1_pv_plant_input_bus_split2__out;
    if (_pv1_pv_plant_delay__out == 0) {
        if (_pv1_pv_plant_delay__in > 0.5) {
            _pv1_pv_plant_delay__counter += 2e-05;
            if (_pv1_pv_plant_delay__counter > 0.125) {
                _pv1_pv_plant_delay__out = 1;
            }
        }
        else {
            _pv1_pv_plant_delay__counter -= _pv1_pv_plant_delay__counter;
            _pv1_pv_plant_delay__out = 0;
        }
    }
    else {
        _pv1_pv_plant_delay__counter = 0;
        if (_pv1_pv_plant_delay__in <= 0.5) {
            _pv1_pv_plant_delay__out = 0;
        }
    }
    // Generated from the component: PV1.PV Plant.enable
    HIL_OutInt32(0xf00412, _pv1_pv_plant_input_bus_split2__out1 != 0x0);
    // Generated from the component: PV2.PV Plant.Control.Grid_follow.Edge Detection1.Relational operator1
    _pv2_pv_plant_control_grid_follow_edge_detection1_relational_operator1__out = (_pv2_pv_plant_input_bus_split2__out1 != _pv2_pv_plant_control_grid_follow_edge_detection1_unit_delay1__out) ? 1 : 0;
    // Generated from the component: PV2.PV Plant.Control.Grid_follow.Gain2
    _pv2_pv_plant_control_grid_follow_gain2__out = 0.1 * _pv2_pv_plant_input_bus_split2__out5;
    // Generated from the component: PV2.PV Plant.Control.Grid_follow.Gain4
    _pv2_pv_plant_control_grid_follow_gain4__out = 0.0020833333333333333 * _pv2_pv_plant_input_bus_split2__out3;
    // Generated from the component: PV2.PV Plant.Control.Grid_follow.Logical operator1
    _pv2_pv_plant_control_grid_follow_logical_operator1__out = !_pv2_pv_plant_input_bus_split2__out;
    // Generated from the component: PV2.PV Plant.Control.Grid_follow.Product2
    _pv2_pv_plant_control_grid_follow_product2__out = (_pv2_pv_plant_input_bus_split2__out2 * _pv2_pv_plant_control_grid_follow_pv_area_m2__out);
    // Generated from the component: PV2.PV Plant.Control.Grid_follow.Qmode
    HIL_OutInt32(0xf00413, _pv2_pv_plant_input_bus_split2__out4 != 0x0);
    // Generated from the component: PV2.PV Plant.Control.Grid_follow.delay
    _pv2_pv_plant_control_grid_follow_delay__in = _pv2_pv_plant_input_bus_split2__out;
    if (_pv2_pv_plant_control_grid_follow_delay__out == 0) {
        if (_pv2_pv_plant_control_grid_follow_delay__in > 0.5) {
            _pv2_pv_plant_control_grid_follow_delay__counter += 2e-05;
            if (_pv2_pv_plant_control_grid_follow_delay__counter > 0.125) {
                _pv2_pv_plant_control_grid_follow_delay__out = 1;
            }
        }
        else {
            _pv2_pv_plant_control_grid_follow_delay__counter -= _pv2_pv_plant_control_grid_follow_delay__counter;
            _pv2_pv_plant_control_grid_follow_delay__out = 0;
        }
    }
    else {
        _pv2_pv_plant_control_grid_follow_delay__counter = 0;
        if (_pv2_pv_plant_control_grid_follow_delay__in <= 0.5) {
            _pv2_pv_plant_control_grid_follow_delay__out = 0;
        }
    }
    // Generated from the component: PV2.PV Plant.Control.Grid_follow.irr_in
    HIL_OutAO(0x40a4, (float)_pv2_pv_plant_input_bus_split2__out2);
    // Generated from the component: PV2.PV Plant.Control.PLL.Signal switch1
    _pv2_pv_plant_control_pll_signal_switch1__out = (_pv2_pv_plant_input_bus_split2__out > 0.0f) ? _pv2_pv_plant_va_va1__out : _pv2_pv_plant_control_pll_constant1__out;
    // Generated from the component: PV2.PV Plant.Control.PLL.Signal switch2
    _pv2_pv_plant_control_pll_signal_switch2__out = (_pv2_pv_plant_input_bus_split2__out > 0.0f) ? _pv2_pv_plant_vb_va1__out : _pv2_pv_plant_control_pll_constant1__out;
    // Generated from the component: PV2.PV Plant.Control.PLL.Signal switch3
    _pv2_pv_plant_control_pll_signal_switch3__out = (_pv2_pv_plant_input_bus_split2__out > 0.0f) ? _pv2_pv_plant_vc_va1__out : _pv2_pv_plant_control_pll_constant1__out;
    // Generated from the component: PV2.PV Plant.S1.CTC_Wrapper
    if (_pv2_pv_plant_input_bus_split2__out == 0x0) {
        HIL_OutInt32(0x8e40480, 0x0);
    }
    else {
        HIL_OutInt32(0x8e40480, 0x1);
    }
    // Generated from the component: PV2.PV Plant.delay
    _pv2_pv_plant_delay__in = _pv2_pv_plant_input_bus_split2__out;
    if (_pv2_pv_plant_delay__out == 0) {
        if (_pv2_pv_plant_delay__in > 0.5) {
            _pv2_pv_plant_delay__counter += 2e-05;
            if (_pv2_pv_plant_delay__counter > 0.125) {
                _pv2_pv_plant_delay__out = 1;
            }
        }
        else {
            _pv2_pv_plant_delay__counter -= _pv2_pv_plant_delay__counter;
            _pv2_pv_plant_delay__out = 0;
        }
    }
    else {
        _pv2_pv_plant_delay__counter = 0;
        if (_pv2_pv_plant_delay__in <= 0.5) {
            _pv2_pv_plant_delay__out = 0;
        }
    }
    // Generated from the component: PV2.PV Plant.enable
    HIL_OutInt32(0xf00415, _pv2_pv_plant_input_bus_split2__out1 != 0x0);
    // Generated from the component: ESS1.Controller.Outer Voltage Loop + Inner Current Loop.Bus Join2
    _ess1_controller_outer_voltage_loop___inner_current_loop_bus_join2__out[0] = _ess1_controller_outer_voltage_loop___inner_current_loop_outer_power_loop_product2__out;
    _ess1_controller_outer_voltage_loop___inner_current_loop_bus_join2__out[1] = _ess1_controller_outer_voltage_loop___inner_current_loop_outer_power_loop_product1__out;
    // Generated from the component: ESS1.Controller.PLL.PLL.PID.Sum6
    _ess1_controller_pll_pll_pid_sum6__out =  - _ess1_controller_pll_pll_pid_sum5__out + _ess1_controller_pll_pll_pid_limit1__out;
    // Generated from the component: ESS1.Controller.PLL.PLL.Rate Limiter1
    if (_ess1_controller_pll_pll_rate_limiter1__first_step) {
        _ess1_controller_pll_pll_rate_limiter1__out = _ess1_controller_pll_pll_pid_limit1__out;
    } else {
        _ess1_controller_pll_pll_rate_limiter1__out = _ess1_controller_pll_pll_pid_limit1__out;
        _ess1_controller_pll_pll_rate_limiter1__in_rate = _ess1_controller_pll_pll_pid_limit1__out - _ess1_controller_pll_pll_rate_limiter1__prev_out;
        if (_ess1_controller_pll_pll_rate_limiter1__in_rate > 0.03769911184307752) {
            _ess1_controller_pll_pll_rate_limiter1__out = _ess1_controller_pll_pll_rate_limiter1__prev_out + (0.03769911184307752);
        }
        if (_ess1_controller_pll_pll_rate_limiter1__in_rate < -0.03769911184307752) {
            _ess1_controller_pll_pll_rate_limiter1__out = _ess1_controller_pll_pll_rate_limiter1__prev_out + (-0.03769911184307752);
        }
    }
    // Generated from the component: ESS1.Controller.PLL.PLL.integrator
    _ess1_controller_pll_pll_integrator__in = _ess1_controller_pll_pll_pid_limit1__out;
    _ess1_controller_pll_pll_integrator__out += 2e-05 * _ess1_controller_pll_pll_integrator__in;
    if (_ess1_controller_pll_pll_integrator__in >= 0.0) {
        if (_ess1_controller_pll_pll_integrator__out >= 6.283185307179586) {
            _ess1_controller_pll_pll_integrator__out -= 6.283185307179586;
        }
    }
    else {
        if (_ess1_controller_pll_pll_integrator__out <= -6.283185307179586) {
            _ess1_controller_pll_pll_integrator__out += 6.283185307179586;
        }
    }
    // Generated from the component: ESS1.BE1-25A Synchronizer.Relational operator2
    _ess1_be1_25a_synchronizer_relational_operator2__out = (_ess1_be1_25a_synchronizer_constant7__out > _ess1_be1_25a_synchronizer_abs5__out) ? 1 : 0;
    // Generated from the component: ESS1.Controller.Outer Voltage Loop + Inner Current Loop.Outer voltage control loop.Ed_err
    HIL_OutAO(0x4022, (float)_ess1_controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_sum8__out);
    // Generated from the component: ESS1.Controller.Outer Voltage Loop + Inner Current Loop.Outer voltage control loop.Limit1
    if (_ess1_controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_sum8__out > 1.0) {
        _ess1_controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_limit1__out = 1.0;
    } else if (_ess1_controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_sum8__out < -1.0) {
        _ess1_controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_limit1__out = -1.0;
    } else {
        _ess1_controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_limit1__out = _ess1_controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_sum8__out;
    }
    // Generated from the component: ESS1.BE1-25A Synchronizer.Relational operator1
    _ess1_be1_25a_synchronizer_relational_operator1__out = (_ess1_be1_25a_synchronizer_constant6__out > _ess1_be1_25a_synchronizer_abs4__out) ? 1 : 0;
    // Generated from the component: ESS1.BE1-25A Synchronizer.Digital Probe5
    HIL_OutInt32(0xf00403, _ess1_be1_25a_synchronizer_relational_operator4__out != 0x0);
    // Generated from the component: ESS1.Controller.Outer Voltage Loop + Inner Current Loop.Outer voltage control loop.EQ_ctrl
    HIL_OutAO(0x4021, (float)_ess1_controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_pid_controller4__out);
    // Generated from the component: ESS1.Controller.Outer Voltage Loop + Inner Current Loop.Outer voltage control loop.Sum12
    _ess1_controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_sum12__out = _ess1_controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_pid_controller4__out + _ess1_controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_sum13__out;
    // Generated from the component: ESS2.Controller.Outer Voltage Loop + Inner Current Loop.Bus Join2
    _ess2_controller_outer_voltage_loop___inner_current_loop_bus_join2__out[0] = _ess2_controller_outer_voltage_loop___inner_current_loop_outer_power_loop_product2__out;
    _ess2_controller_outer_voltage_loop___inner_current_loop_bus_join2__out[1] = _ess2_controller_outer_voltage_loop___inner_current_loop_outer_power_loop_product1__out;
    // Generated from the component: ESS2.Controller.PLL.PLL.PID.Sum6
    _ess2_controller_pll_pll_pid_sum6__out =  - _ess2_controller_pll_pll_pid_sum5__out + _ess2_controller_pll_pll_pid_limit1__out;
    // Generated from the component: ESS2.Controller.PLL.PLL.Rate Limiter1
    if (_ess2_controller_pll_pll_rate_limiter1__first_step) {
        _ess2_controller_pll_pll_rate_limiter1__out = _ess2_controller_pll_pll_pid_limit1__out;
    } else {
        _ess2_controller_pll_pll_rate_limiter1__out = _ess2_controller_pll_pll_pid_limit1__out;
        _ess2_controller_pll_pll_rate_limiter1__in_rate = _ess2_controller_pll_pll_pid_limit1__out - _ess2_controller_pll_pll_rate_limiter1__prev_out;
        if (_ess2_controller_pll_pll_rate_limiter1__in_rate > 0.03769911184307752) {
            _ess2_controller_pll_pll_rate_limiter1__out = _ess2_controller_pll_pll_rate_limiter1__prev_out + (0.03769911184307752);
        }
        if (_ess2_controller_pll_pll_rate_limiter1__in_rate < -0.03769911184307752) {
            _ess2_controller_pll_pll_rate_limiter1__out = _ess2_controller_pll_pll_rate_limiter1__prev_out + (-0.03769911184307752);
        }
    }
    // Generated from the component: ESS2.Controller.PLL.PLL.integrator
    _ess2_controller_pll_pll_integrator__in = _ess2_controller_pll_pll_pid_limit1__out;
    _ess2_controller_pll_pll_integrator__out += 2e-05 * _ess2_controller_pll_pll_integrator__in;
    if (_ess2_controller_pll_pll_integrator__in >= 0.0) {
        if (_ess2_controller_pll_pll_integrator__out >= 6.283185307179586) {
            _ess2_controller_pll_pll_integrator__out -= 6.283185307179586;
        }
    }
    else {
        if (_ess2_controller_pll_pll_integrator__out <= -6.283185307179586) {
            _ess2_controller_pll_pll_integrator__out += 6.283185307179586;
        }
    }
    // Generated from the component: ESS2.BE1-25A Synchronizer.Relational operator2
    _ess2_be1_25a_synchronizer_relational_operator2__out = (_ess2_be1_25a_synchronizer_constant7__out > _ess2_be1_25a_synchronizer_abs5__out) ? 1 : 0;
    // Generated from the component: ESS2.Controller.Outer Voltage Loop + Inner Current Loop.Outer voltage control loop.Ed_err
    HIL_OutAO(0x4057, (float)_ess2_controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_sum8__out);
    // Generated from the component: ESS2.Controller.Outer Voltage Loop + Inner Current Loop.Outer voltage control loop.Limit1
    if (_ess2_controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_sum8__out > 1.0) {
        _ess2_controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_limit1__out = 1.0;
    } else if (_ess2_controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_sum8__out < -1.0) {
        _ess2_controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_limit1__out = -1.0;
    } else {
        _ess2_controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_limit1__out = _ess2_controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_sum8__out;
    }
    // Generated from the component: ESS2.BE1-25A Synchronizer.Relational operator1
    _ess2_be1_25a_synchronizer_relational_operator1__out = (_ess2_be1_25a_synchronizer_constant6__out > _ess2_be1_25a_synchronizer_abs4__out) ? 1 : 0;
    // Generated from the component: ESS2.BE1-25A Synchronizer.Digital Probe5
    HIL_OutInt32(0xf0040b, _ess2_be1_25a_synchronizer_relational_operator4__out != 0x0);
    // Generated from the component: ESS2.Controller.Outer Voltage Loop + Inner Current Loop.Outer voltage control loop.EQ_ctrl
    HIL_OutAO(0x4056, (float)_ess2_controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_pid_controller4__out);
    // Generated from the component: ESS2.Controller.Outer Voltage Loop + Inner Current Loop.Outer voltage control loop.Sum12
    _ess2_controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_sum12__out = _ess2_controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_pid_controller4__out + _ess2_controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_sum13__out;
    // Generated from the component: PV1.PV Plant.Control.Grid_follow.ControlSignal_Calculation.PI_d.Integrator1
    if (((_pv1_pv_plant_control_grid_follow_edge_detection1_relational_operator1__out > 0.0) && (_pv1_pv_plant_control_grid_follow_controlsignal_calculation_pi_d_integrator1__reset_state <= 0)) || ((_pv1_pv_plant_control_grid_follow_edge_detection1_relational_operator1__out <= 0.0) && (_pv1_pv_plant_control_grid_follow_controlsignal_calculation_pi_d_integrator1__reset_state == 1))) {
        _pv1_pv_plant_control_grid_follow_controlsignal_calculation_pi_d_integrator1__state = 0.0;
    }
    _pv1_pv_plant_control_grid_follow_controlsignal_calculation_pi_d_integrator1__out = _pv1_pv_plant_control_grid_follow_controlsignal_calculation_pi_d_integrator1__state;
    // Generated from the component: PV1.PV Plant.Control.Grid_follow.ControlSignal_Calculation.PI_q.Integrator1
    if (((_pv1_pv_plant_control_grid_follow_edge_detection1_relational_operator1__out > 0.0) && (_pv1_pv_plant_control_grid_follow_controlsignal_calculation_pi_q_integrator1__reset_state <= 0)) || ((_pv1_pv_plant_control_grid_follow_edge_detection1_relational_operator1__out <= 0.0) && (_pv1_pv_plant_control_grid_follow_controlsignal_calculation_pi_q_integrator1__reset_state == 1))) {
        _pv1_pv_plant_control_grid_follow_controlsignal_calculation_pi_q_integrator1__state = 0.0;
    }
    _pv1_pv_plant_control_grid_follow_controlsignal_calculation_pi_q_integrator1__out = _pv1_pv_plant_control_grid_follow_controlsignal_calculation_pi_q_integrator1__state;
    // Generated from the component: PV1.PV Plant.Control.Grid_follow.PI_Vt.Integrator1
    if (((_pv1_pv_plant_control_grid_follow_logical_operator1__out > 0.0) && (_pv1_pv_plant_control_grid_follow_pi_vt_integrator1__reset_state <= 0)) || ((_pv1_pv_plant_control_grid_follow_logical_operator1__out <= 0.0) && (_pv1_pv_plant_control_grid_follow_pi_vt_integrator1__reset_state == 1))) {
        _pv1_pv_plant_control_grid_follow_pi_vt_integrator1__state = 0.0;
    }
    _pv1_pv_plant_control_grid_follow_pi_vt_integrator1__out = _pv1_pv_plant_control_grid_follow_pi_vt_integrator1__state;
    // Generated from the component: PV1.PV Plant.Control.Grid_follow.PV_eff
    _pv1_pv_plant_control_grid_follow_pv_eff__out = 0.15 * _pv1_pv_plant_control_grid_follow_product2__out;
    // Generated from the component: PV1.PV Plant.Control.Grid_follow.Logical operator2
    _pv1_pv_plant_control_grid_follow_logical_operator2__out = _pv1_pv_plant_control_grid_follow_delay__out && _pv1_pv_plant_input_bus_split2__out1 ;
    // Generated from the component: PV1.PV Plant.Control.PLL.PLL.abc to dq.abc to alpha beta
    _pv1_pv_plant_control_pll_pll_abc_to_dq_abc_to_alpha_beta__alpha = (2.0 * _pv1_pv_plant_control_pll_signal_switch1__out - _pv1_pv_plant_control_pll_signal_switch2__out - _pv1_pv_plant_control_pll_signal_switch3__out) * 0.3333333333333333;
    _pv1_pv_plant_control_pll_pll_abc_to_dq_abc_to_alpha_beta__beta = (_pv1_pv_plant_control_pll_signal_switch2__out - _pv1_pv_plant_control_pll_signal_switch3__out) * 0.5773502691896258;
    _pv1_pv_plant_control_pll_pll_abc_to_dq_abc_to_alpha_beta__gamma = (_pv1_pv_plant_control_pll_signal_switch1__out + _pv1_pv_plant_control_pll_signal_switch2__out + _pv1_pv_plant_control_pll_signal_switch3__out) * 0.3333333333333333;
    // Generated from the component: PV1.PV Plant.Logical operator1
    _pv1_pv_plant_logical_operator1__out = _pv1_pv_plant_input_bus_split2__out1 && _pv1_pv_plant_delay__out ;
    // Generated from the component: PV2.PV Plant.Control.Grid_follow.ControlSignal_Calculation.PI_d.Integrator1
    if (((_pv2_pv_plant_control_grid_follow_edge_detection1_relational_operator1__out > 0.0) && (_pv2_pv_plant_control_grid_follow_controlsignal_calculation_pi_d_integrator1__reset_state <= 0)) || ((_pv2_pv_plant_control_grid_follow_edge_detection1_relational_operator1__out <= 0.0) && (_pv2_pv_plant_control_grid_follow_controlsignal_calculation_pi_d_integrator1__reset_state == 1))) {
        _pv2_pv_plant_control_grid_follow_controlsignal_calculation_pi_d_integrator1__state = 0.0;
    }
    _pv2_pv_plant_control_grid_follow_controlsignal_calculation_pi_d_integrator1__out = _pv2_pv_plant_control_grid_follow_controlsignal_calculation_pi_d_integrator1__state;
    // Generated from the component: PV2.PV Plant.Control.Grid_follow.ControlSignal_Calculation.PI_q.Integrator1
    if (((_pv2_pv_plant_control_grid_follow_edge_detection1_relational_operator1__out > 0.0) && (_pv2_pv_plant_control_grid_follow_controlsignal_calculation_pi_q_integrator1__reset_state <= 0)) || ((_pv2_pv_plant_control_grid_follow_edge_detection1_relational_operator1__out <= 0.0) && (_pv2_pv_plant_control_grid_follow_controlsignal_calculation_pi_q_integrator1__reset_state == 1))) {
        _pv2_pv_plant_control_grid_follow_controlsignal_calculation_pi_q_integrator1__state = 0.0;
    }
    _pv2_pv_plant_control_grid_follow_controlsignal_calculation_pi_q_integrator1__out = _pv2_pv_plant_control_grid_follow_controlsignal_calculation_pi_q_integrator1__state;
    // Generated from the component: PV2.PV Plant.Control.Grid_follow.PI_Vt.Integrator1
    if (((_pv2_pv_plant_control_grid_follow_logical_operator1__out > 0.0) && (_pv2_pv_plant_control_grid_follow_pi_vt_integrator1__reset_state <= 0)) || ((_pv2_pv_plant_control_grid_follow_logical_operator1__out <= 0.0) && (_pv2_pv_plant_control_grid_follow_pi_vt_integrator1__reset_state == 1))) {
        _pv2_pv_plant_control_grid_follow_pi_vt_integrator1__state = 0.0;
    }
    _pv2_pv_plant_control_grid_follow_pi_vt_integrator1__out = _pv2_pv_plant_control_grid_follow_pi_vt_integrator1__state;
    // Generated from the component: PV2.PV Plant.Control.Grid_follow.PV_eff
    _pv2_pv_plant_control_grid_follow_pv_eff__out = 0.15 * _pv2_pv_plant_control_grid_follow_product2__out;
    // Generated from the component: PV2.PV Plant.Control.Grid_follow.Logical operator2
    _pv2_pv_plant_control_grid_follow_logical_operator2__out = _pv2_pv_plant_control_grid_follow_delay__out && _pv2_pv_plant_input_bus_split2__out1 ;
    // Generated from the component: PV2.PV Plant.Control.PLL.PLL.abc to dq.abc to alpha beta
    _pv2_pv_plant_control_pll_pll_abc_to_dq_abc_to_alpha_beta__alpha = (2.0 * _pv2_pv_plant_control_pll_signal_switch1__out - _pv2_pv_plant_control_pll_signal_switch2__out - _pv2_pv_plant_control_pll_signal_switch3__out) * 0.3333333333333333;
    _pv2_pv_plant_control_pll_pll_abc_to_dq_abc_to_alpha_beta__beta = (_pv2_pv_plant_control_pll_signal_switch2__out - _pv2_pv_plant_control_pll_signal_switch3__out) * 0.5773502691896258;
    _pv2_pv_plant_control_pll_pll_abc_to_dq_abc_to_alpha_beta__gamma = (_pv2_pv_plant_control_pll_signal_switch1__out + _pv2_pv_plant_control_pll_signal_switch2__out + _pv2_pv_plant_control_pll_signal_switch3__out) * 0.3333333333333333;
    // Generated from the component: PV2.PV Plant.Logical operator1
    _pv2_pv_plant_logical_operator1__out = _pv2_pv_plant_input_bus_split2__out1 && _pv2_pv_plant_delay__out ;
    // Generated from the component: ESS1.Controller.PLL.PLL.PID.Kb
    _ess1_controller_pll_pll_pid_kb__out = 1.0 * _ess1_controller_pll_pll_pid_sum6__out;
    // Generated from the component: ESS1.Controller.PLL.PLL.LPF.LPF
    _ess1_controller_pll_pll_lpf_lpf__a_sum = 0.0f;
    _ess1_controller_pll_pll_lpf_lpf__b_sum = 0.0f;
    _ess1_controller_pll_pll_lpf_lpf__delay_line_in = 0.0f;
    for (_ess1_controller_pll_pll_lpf_lpf__i = 0; _ess1_controller_pll_pll_lpf_lpf__i < 2; _ess1_controller_pll_pll_lpf_lpf__i++) {
        _ess1_controller_pll_pll_lpf_lpf__b_sum += _ess1_controller_pll_pll_lpf_lpf__b_coeff[_ess1_controller_pll_pll_lpf_lpf__i] * _ess1_controller_pll_pll_lpf_lpf__states[_ess1_controller_pll_pll_lpf_lpf__i + 0];
    }
    for (_ess1_controller_pll_pll_lpf_lpf__i = 1; _ess1_controller_pll_pll_lpf_lpf__i > 0; _ess1_controller_pll_pll_lpf_lpf__i--) {
        _ess1_controller_pll_pll_lpf_lpf__a_sum += _ess1_controller_pll_pll_lpf_lpf__a_coeff[_ess1_controller_pll_pll_lpf_lpf__i + 1] * _ess1_controller_pll_pll_lpf_lpf__states[_ess1_controller_pll_pll_lpf_lpf__i];
    }
    _ess1_controller_pll_pll_lpf_lpf__a_sum += _ess1_controller_pll_pll_lpf_lpf__states[0] * _ess1_controller_pll_pll_lpf_lpf__a_coeff[1];
    _ess1_controller_pll_pll_lpf_lpf__delay_line_in = _ess1_controller_pll_pll_rate_limiter1__out - _ess1_controller_pll_pll_lpf_lpf__a_sum;
    _ess1_controller_pll_pll_lpf_lpf__out = _ess1_controller_pll_pll_lpf_lpf__b_sum;
    // Generated from the component: ESS1.BE1-25A Synchronizer.Digital Probe4
    HIL_OutInt32(0xf00402, _ess1_be1_25a_synchronizer_relational_operator2__out != 0x0);
    // Generated from the component: ESS1.Controller.Outer Voltage Loop + Inner Current Loop.Outer voltage control loop.PID controller3
    _ess1_controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_pid_controller3__pi_reg_out_int = _ess1_controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_pid_controller3__integrator_state + 0.0033 * _ess1_controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_limit1__out;
    if (_ess1_controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_pid_controller3__pi_reg_out_int < -1.0) {
        _ess1_controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_pid_controller3__out = -1.0;
        _ess1_controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_pid_controller3__av_active = 1;
    } else if (_ess1_controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_pid_controller3__pi_reg_out_int > 1.0) {
        _ess1_controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_pid_controller3__out = 1.0;
        _ess1_controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_pid_controller3__av_active = 1;
    } else {
        _ess1_controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_pid_controller3__out = _ess1_controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_pid_controller3__pi_reg_out_int;
        _ess1_controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_pid_controller3__av_active = 0;
    }
    // Generated from the component: ESS1.BE1-25A Synchronizer.Digital Probe3
    HIL_OutInt32(0xf00401, _ess1_be1_25a_synchronizer_relational_operator1__out != 0x0);
    // Generated from the component: ESS1.BE1-25A Synchronizer.Logical operator1
    _ess1_be1_25a_synchronizer_logical_operator1__out = _ess1_be1_25a_synchronizer_relational_operator1__out && _ess1_be1_25a_synchronizer_relational_operator2__out && _ess1_be1_25a_synchronizer_relational_operator4__out ;
    // Generated from the component: ESS2.Controller.PLL.PLL.PID.Kb
    _ess2_controller_pll_pll_pid_kb__out = 1.0 * _ess2_controller_pll_pll_pid_sum6__out;
    // Generated from the component: ESS2.Controller.PLL.PLL.LPF.LPF
    _ess2_controller_pll_pll_lpf_lpf__a_sum = 0.0f;
    _ess2_controller_pll_pll_lpf_lpf__b_sum = 0.0f;
    _ess2_controller_pll_pll_lpf_lpf__delay_line_in = 0.0f;
    for (_ess2_controller_pll_pll_lpf_lpf__i = 0; _ess2_controller_pll_pll_lpf_lpf__i < 2; _ess2_controller_pll_pll_lpf_lpf__i++) {
        _ess2_controller_pll_pll_lpf_lpf__b_sum += _ess2_controller_pll_pll_lpf_lpf__b_coeff[_ess2_controller_pll_pll_lpf_lpf__i] * _ess2_controller_pll_pll_lpf_lpf__states[_ess2_controller_pll_pll_lpf_lpf__i + 0];
    }
    for (_ess2_controller_pll_pll_lpf_lpf__i = 1; _ess2_controller_pll_pll_lpf_lpf__i > 0; _ess2_controller_pll_pll_lpf_lpf__i--) {
        _ess2_controller_pll_pll_lpf_lpf__a_sum += _ess2_controller_pll_pll_lpf_lpf__a_coeff[_ess2_controller_pll_pll_lpf_lpf__i + 1] * _ess2_controller_pll_pll_lpf_lpf__states[_ess2_controller_pll_pll_lpf_lpf__i];
    }
    _ess2_controller_pll_pll_lpf_lpf__a_sum += _ess2_controller_pll_pll_lpf_lpf__states[0] * _ess2_controller_pll_pll_lpf_lpf__a_coeff[1];
    _ess2_controller_pll_pll_lpf_lpf__delay_line_in = _ess2_controller_pll_pll_rate_limiter1__out - _ess2_controller_pll_pll_lpf_lpf__a_sum;
    _ess2_controller_pll_pll_lpf_lpf__out = _ess2_controller_pll_pll_lpf_lpf__b_sum;
    // Generated from the component: ESS2.BE1-25A Synchronizer.Digital Probe4
    HIL_OutInt32(0xf0040a, _ess2_be1_25a_synchronizer_relational_operator2__out != 0x0);
    // Generated from the component: ESS2.Controller.Outer Voltage Loop + Inner Current Loop.Outer voltage control loop.PID controller3
    _ess2_controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_pid_controller3__pi_reg_out_int = _ess2_controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_pid_controller3__integrator_state + 0.0033 * _ess2_controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_limit1__out;
    if (_ess2_controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_pid_controller3__pi_reg_out_int < -1.0) {
        _ess2_controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_pid_controller3__out = -1.0;
        _ess2_controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_pid_controller3__av_active = 1;
    } else if (_ess2_controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_pid_controller3__pi_reg_out_int > 1.0) {
        _ess2_controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_pid_controller3__out = 1.0;
        _ess2_controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_pid_controller3__av_active = 1;
    } else {
        _ess2_controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_pid_controller3__out = _ess2_controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_pid_controller3__pi_reg_out_int;
        _ess2_controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_pid_controller3__av_active = 0;
    }
    // Generated from the component: ESS2.BE1-25A Synchronizer.Digital Probe3
    HIL_OutInt32(0xf00409, _ess2_be1_25a_synchronizer_relational_operator1__out != 0x0);
    // Generated from the component: ESS2.BE1-25A Synchronizer.Logical operator1
    _ess2_be1_25a_synchronizer_logical_operator1__out = _ess2_be1_25a_synchronizer_relational_operator1__out && _ess2_be1_25a_synchronizer_relational_operator2__out && _ess2_be1_25a_synchronizer_relational_operator4__out ;
    // Generated from the component: PV1.PV Plant.Control.Grid_follow.to_pu
    _pv1_pv_plant_control_grid_follow_to_pu__out = 0.0001 * _pv1_pv_plant_control_grid_follow_pv_eff__out;
    // Generated from the component: PV1.PV Plant.Control.Grid_follow.Signal switch3
    _pv1_pv_plant_control_grid_follow_signal_switch3__out = (_pv1_pv_plant_control_grid_follow_logical_operator2__out > 0.5f) ? _pv1_pv_plant_control_grid_follow_gain2__out : _pv1_pv_plant_control_grid_follow_constant2__out;
    // Generated from the component: PV1.PV Plant.Control.PLL.PLL.abc to dq.alpha beta to dq
    _pv1_pv_plant_control_pll_pll_abc_to_dq_alpha_beta_to_dq__k1 = cos(_pv1_pv_plant_control_pll_pll_unit_delay1__out);
    _pv1_pv_plant_control_pll_pll_abc_to_dq_alpha_beta_to_dq__k2 = sin(_pv1_pv_plant_control_pll_pll_unit_delay1__out);
    _pv1_pv_plant_control_pll_pll_abc_to_dq_alpha_beta_to_dq__d = _pv1_pv_plant_control_pll_pll_abc_to_dq_alpha_beta_to_dq__k2 * _pv1_pv_plant_control_pll_pll_abc_to_dq_abc_to_alpha_beta__alpha - _pv1_pv_plant_control_pll_pll_abc_to_dq_alpha_beta_to_dq__k1 * _pv1_pv_plant_control_pll_pll_abc_to_dq_abc_to_alpha_beta__beta;
    _pv1_pv_plant_control_pll_pll_abc_to_dq_alpha_beta_to_dq__q = _pv1_pv_plant_control_pll_pll_abc_to_dq_alpha_beta_to_dq__k1 * _pv1_pv_plant_control_pll_pll_abc_to_dq_abc_to_alpha_beta__alpha + _pv1_pv_plant_control_pll_pll_abc_to_dq_alpha_beta_to_dq__k2 * _pv1_pv_plant_control_pll_pll_abc_to_dq_abc_to_alpha_beta__beta;
    // Generated from the component: PV1.PV Plant.Control.PLL.PLL.term_zero
    // Generated from the component: PV1.PV Plant.On
    HIL_OutInt32(0xf00411, _pv1_pv_plant_logical_operator1__out != 0x0);
    // Generated from the component: PV2.PV Plant.Control.Grid_follow.to_pu
    _pv2_pv_plant_control_grid_follow_to_pu__out = 0.0001 * _pv2_pv_plant_control_grid_follow_pv_eff__out;
    // Generated from the component: PV2.PV Plant.Control.Grid_follow.Signal switch3
    _pv2_pv_plant_control_grid_follow_signal_switch3__out = (_pv2_pv_plant_control_grid_follow_logical_operator2__out > 0.5f) ? _pv2_pv_plant_control_grid_follow_gain2__out : _pv2_pv_plant_control_grid_follow_constant2__out;
    // Generated from the component: PV2.PV Plant.Control.PLL.PLL.abc to dq.alpha beta to dq
    _pv2_pv_plant_control_pll_pll_abc_to_dq_alpha_beta_to_dq__k1 = cos(_pv2_pv_plant_control_pll_pll_unit_delay1__out);
    _pv2_pv_plant_control_pll_pll_abc_to_dq_alpha_beta_to_dq__k2 = sin(_pv2_pv_plant_control_pll_pll_unit_delay1__out);
    _pv2_pv_plant_control_pll_pll_abc_to_dq_alpha_beta_to_dq__d = _pv2_pv_plant_control_pll_pll_abc_to_dq_alpha_beta_to_dq__k2 * _pv2_pv_plant_control_pll_pll_abc_to_dq_abc_to_alpha_beta__alpha - _pv2_pv_plant_control_pll_pll_abc_to_dq_alpha_beta_to_dq__k1 * _pv2_pv_plant_control_pll_pll_abc_to_dq_abc_to_alpha_beta__beta;
    _pv2_pv_plant_control_pll_pll_abc_to_dq_alpha_beta_to_dq__q = _pv2_pv_plant_control_pll_pll_abc_to_dq_alpha_beta_to_dq__k1 * _pv2_pv_plant_control_pll_pll_abc_to_dq_abc_to_alpha_beta__alpha + _pv2_pv_plant_control_pll_pll_abc_to_dq_alpha_beta_to_dq__k2 * _pv2_pv_plant_control_pll_pll_abc_to_dq_abc_to_alpha_beta__beta;
    // Generated from the component: PV2.PV Plant.Control.PLL.PLL.term_zero
    // Generated from the component: PV2.PV Plant.On
    HIL_OutInt32(0xf00414, _pv2_pv_plant_logical_operator1__out != 0x0);
    // Generated from the component: ESS1.Controller.PLL.PLL.PID.Sum7
    _ess1_controller_pll_pll_pid_sum7__out = _ess1_controller_pll_pll_pid_ki__out + _ess1_controller_pll_pll_pid_kb__out;
    // Generated from the component: ESS1.Controller.Outer Voltage Loop + Inner Current Loop.Outer voltage control loop.ED_ctrl
    HIL_OutAO(0x4020, (float)_ess1_controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_pid_controller3__out);
    // Generated from the component: ESS1.Controller.Outer Voltage Loop + Inner Current Loop.Outer voltage control loop.Sum9
    _ess1_controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_sum9__out = _ess1_controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_pid_controller3__out + _ess1_controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_sum10__out;
    // Generated from the component: ESS1.BE1-25A Synchronizer.Rate Transition12.Input
    _ess1_be1_25a_synchronizer_rate_transition12_output__out = _ess1_be1_25a_synchronizer_logical_operator1__out;
    // Generated from the component: ESS2.Controller.PLL.PLL.PID.Sum7
    _ess2_controller_pll_pll_pid_sum7__out = _ess2_controller_pll_pll_pid_ki__out + _ess2_controller_pll_pll_pid_kb__out;
    // Generated from the component: ESS2.Controller.Outer Voltage Loop + Inner Current Loop.Outer voltage control loop.ED_ctrl
    HIL_OutAO(0x4055, (float)_ess2_controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_pid_controller3__out);
    // Generated from the component: ESS2.Controller.Outer Voltage Loop + Inner Current Loop.Outer voltage control loop.Sum9
    _ess2_controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_sum9__out = _ess2_controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_pid_controller3__out + _ess2_controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_sum10__out;
    // Generated from the component: ESS2.BE1-25A Synchronizer.Rate Transition12.Input
    _ess2_be1_25a_synchronizer_rate_transition12_output__out = _ess2_be1_25a_synchronizer_logical_operator1__out;
    // Generated from the component: PV1.PV Plant.Control.Grid_follow.Signal switch2
    _pv1_pv_plant_control_grid_follow_signal_switch2__out = (_pv1_pv_plant_control_grid_follow_logical_operator2__out > 0.5f) ? _pv1_pv_plant_control_grid_follow_to_pu__out : _pv1_pv_plant_control_grid_follow_constant1__out;
    // Generated from the component: PV1.PV Plant.Control.PLL.PLL.abc to dq.LPF_d
    _pv1_pv_plant_control_pll_pll_abc_to_dq_lpf_d__a_sum = 0.0f;
    _pv1_pv_plant_control_pll_pll_abc_to_dq_lpf_d__b_sum = 0.0f;
    _pv1_pv_plant_control_pll_pll_abc_to_dq_lpf_d__delay_line_in = 0.0f;
    for (_pv1_pv_plant_control_pll_pll_abc_to_dq_lpf_d__i = 0; _pv1_pv_plant_control_pll_pll_abc_to_dq_lpf_d__i < 1; _pv1_pv_plant_control_pll_pll_abc_to_dq_lpf_d__i++) {
        _pv1_pv_plant_control_pll_pll_abc_to_dq_lpf_d__b_sum += _pv1_pv_plant_control_pll_pll_abc_to_dq_lpf_d__b_coeff[_pv1_pv_plant_control_pll_pll_abc_to_dq_lpf_d__i + 1] * _pv1_pv_plant_control_pll_pll_abc_to_dq_lpf_d__states[_pv1_pv_plant_control_pll_pll_abc_to_dq_lpf_d__i];
    }
    _pv1_pv_plant_control_pll_pll_abc_to_dq_lpf_d__a_sum += _pv1_pv_plant_control_pll_pll_abc_to_dq_lpf_d__states[0] * _pv1_pv_plant_control_pll_pll_abc_to_dq_lpf_d__a_coeff[1];
    _pv1_pv_plant_control_pll_pll_abc_to_dq_lpf_d__delay_line_in = (_pv1_pv_plant_control_pll_pll_abc_to_dq_alpha_beta_to_dq__d - _pv1_pv_plant_control_pll_pll_abc_to_dq_lpf_d__a_sum) / _pv1_pv_plant_control_pll_pll_abc_to_dq_lpf_d__a_coeff[0];
    _pv1_pv_plant_control_pll_pll_abc_to_dq_lpf_d__b_sum += _pv1_pv_plant_control_pll_pll_abc_to_dq_lpf_d__b_coeff[0] * _pv1_pv_plant_control_pll_pll_abc_to_dq_lpf_d__delay_line_in;
    _pv1_pv_plant_control_pll_pll_abc_to_dq_lpf_d__out = _pv1_pv_plant_control_pll_pll_abc_to_dq_lpf_d__b_sum;
    // Generated from the component: PV1.PV Plant.Control.PLL.PLL.abc to dq.LPF_q
    _pv1_pv_plant_control_pll_pll_abc_to_dq_lpf_q__a_sum = 0.0f;
    _pv1_pv_plant_control_pll_pll_abc_to_dq_lpf_q__b_sum = 0.0f;
    _pv1_pv_plant_control_pll_pll_abc_to_dq_lpf_q__delay_line_in = 0.0f;
    for (_pv1_pv_plant_control_pll_pll_abc_to_dq_lpf_q__i = 0; _pv1_pv_plant_control_pll_pll_abc_to_dq_lpf_q__i < 1; _pv1_pv_plant_control_pll_pll_abc_to_dq_lpf_q__i++) {
        _pv1_pv_plant_control_pll_pll_abc_to_dq_lpf_q__b_sum += _pv1_pv_plant_control_pll_pll_abc_to_dq_lpf_q__b_coeff[_pv1_pv_plant_control_pll_pll_abc_to_dq_lpf_q__i + 1] * _pv1_pv_plant_control_pll_pll_abc_to_dq_lpf_q__states[_pv1_pv_plant_control_pll_pll_abc_to_dq_lpf_q__i];
    }
    _pv1_pv_plant_control_pll_pll_abc_to_dq_lpf_q__a_sum += _pv1_pv_plant_control_pll_pll_abc_to_dq_lpf_q__states[0] * _pv1_pv_plant_control_pll_pll_abc_to_dq_lpf_q__a_coeff[1];
    _pv1_pv_plant_control_pll_pll_abc_to_dq_lpf_q__delay_line_in = (_pv1_pv_plant_control_pll_pll_abc_to_dq_alpha_beta_to_dq__q - _pv1_pv_plant_control_pll_pll_abc_to_dq_lpf_q__a_sum) / _pv1_pv_plant_control_pll_pll_abc_to_dq_lpf_q__a_coeff[0];
    _pv1_pv_plant_control_pll_pll_abc_to_dq_lpf_q__b_sum += _pv1_pv_plant_control_pll_pll_abc_to_dq_lpf_q__b_coeff[0] * _pv1_pv_plant_control_pll_pll_abc_to_dq_lpf_q__delay_line_in;
    _pv1_pv_plant_control_pll_pll_abc_to_dq_lpf_q__out = _pv1_pv_plant_control_pll_pll_abc_to_dq_lpf_q__b_sum;
    // Generated from the component: PV2.PV Plant.Control.Grid_follow.Signal switch2
    _pv2_pv_plant_control_grid_follow_signal_switch2__out = (_pv2_pv_plant_control_grid_follow_logical_operator2__out > 0.5f) ? _pv2_pv_plant_control_grid_follow_to_pu__out : _pv2_pv_plant_control_grid_follow_constant1__out;
    // Generated from the component: PV2.PV Plant.Control.PLL.PLL.abc to dq.LPF_d
    _pv2_pv_plant_control_pll_pll_abc_to_dq_lpf_d__a_sum = 0.0f;
    _pv2_pv_plant_control_pll_pll_abc_to_dq_lpf_d__b_sum = 0.0f;
    _pv2_pv_plant_control_pll_pll_abc_to_dq_lpf_d__delay_line_in = 0.0f;
    for (_pv2_pv_plant_control_pll_pll_abc_to_dq_lpf_d__i = 0; _pv2_pv_plant_control_pll_pll_abc_to_dq_lpf_d__i < 1; _pv2_pv_plant_control_pll_pll_abc_to_dq_lpf_d__i++) {
        _pv2_pv_plant_control_pll_pll_abc_to_dq_lpf_d__b_sum += _pv2_pv_plant_control_pll_pll_abc_to_dq_lpf_d__b_coeff[_pv2_pv_plant_control_pll_pll_abc_to_dq_lpf_d__i + 1] * _pv2_pv_plant_control_pll_pll_abc_to_dq_lpf_d__states[_pv2_pv_plant_control_pll_pll_abc_to_dq_lpf_d__i];
    }
    _pv2_pv_plant_control_pll_pll_abc_to_dq_lpf_d__a_sum += _pv2_pv_plant_control_pll_pll_abc_to_dq_lpf_d__states[0] * _pv2_pv_plant_control_pll_pll_abc_to_dq_lpf_d__a_coeff[1];
    _pv2_pv_plant_control_pll_pll_abc_to_dq_lpf_d__delay_line_in = (_pv2_pv_plant_control_pll_pll_abc_to_dq_alpha_beta_to_dq__d - _pv2_pv_plant_control_pll_pll_abc_to_dq_lpf_d__a_sum) / _pv2_pv_plant_control_pll_pll_abc_to_dq_lpf_d__a_coeff[0];
    _pv2_pv_plant_control_pll_pll_abc_to_dq_lpf_d__b_sum += _pv2_pv_plant_control_pll_pll_abc_to_dq_lpf_d__b_coeff[0] * _pv2_pv_plant_control_pll_pll_abc_to_dq_lpf_d__delay_line_in;
    _pv2_pv_plant_control_pll_pll_abc_to_dq_lpf_d__out = _pv2_pv_plant_control_pll_pll_abc_to_dq_lpf_d__b_sum;
    // Generated from the component: PV2.PV Plant.Control.PLL.PLL.abc to dq.LPF_q
    _pv2_pv_plant_control_pll_pll_abc_to_dq_lpf_q__a_sum = 0.0f;
    _pv2_pv_plant_control_pll_pll_abc_to_dq_lpf_q__b_sum = 0.0f;
    _pv2_pv_plant_control_pll_pll_abc_to_dq_lpf_q__delay_line_in = 0.0f;
    for (_pv2_pv_plant_control_pll_pll_abc_to_dq_lpf_q__i = 0; _pv2_pv_plant_control_pll_pll_abc_to_dq_lpf_q__i < 1; _pv2_pv_plant_control_pll_pll_abc_to_dq_lpf_q__i++) {
        _pv2_pv_plant_control_pll_pll_abc_to_dq_lpf_q__b_sum += _pv2_pv_plant_control_pll_pll_abc_to_dq_lpf_q__b_coeff[_pv2_pv_plant_control_pll_pll_abc_to_dq_lpf_q__i + 1] * _pv2_pv_plant_control_pll_pll_abc_to_dq_lpf_q__states[_pv2_pv_plant_control_pll_pll_abc_to_dq_lpf_q__i];
    }
    _pv2_pv_plant_control_pll_pll_abc_to_dq_lpf_q__a_sum += _pv2_pv_plant_control_pll_pll_abc_to_dq_lpf_q__states[0] * _pv2_pv_plant_control_pll_pll_abc_to_dq_lpf_q__a_coeff[1];
    _pv2_pv_plant_control_pll_pll_abc_to_dq_lpf_q__delay_line_in = (_pv2_pv_plant_control_pll_pll_abc_to_dq_alpha_beta_to_dq__q - _pv2_pv_plant_control_pll_pll_abc_to_dq_lpf_q__a_sum) / _pv2_pv_plant_control_pll_pll_abc_to_dq_lpf_q__a_coeff[0];
    _pv2_pv_plant_control_pll_pll_abc_to_dq_lpf_q__b_sum += _pv2_pv_plant_control_pll_pll_abc_to_dq_lpf_q__b_coeff[0] * _pv2_pv_plant_control_pll_pll_abc_to_dq_lpf_q__delay_line_in;
    _pv2_pv_plant_control_pll_pll_abc_to_dq_lpf_q__out = _pv2_pv_plant_control_pll_pll_abc_to_dq_lpf_q__b_sum;
    // Generated from the component: ESS1.Controller.Outer Voltage Loop + Inner Current Loop.Bus Join1
    _ess1_controller_outer_voltage_loop___inner_current_loop_bus_join1__out[0] = _ess1_controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_sum9__out;
    _ess1_controller_outer_voltage_loop___inner_current_loop_bus_join1__out[1] = _ess1_controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_sum12__out;
    // Generated from the component: ESS2.Controller.Outer Voltage Loop + Inner Current Loop.Bus Join1
    _ess2_controller_outer_voltage_loop___inner_current_loop_bus_join1__out[0] = _ess2_controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_sum9__out;
    _ess2_controller_outer_voltage_loop___inner_current_loop_bus_join1__out[1] = _ess2_controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_sum12__out;
    // Generated from the component: PV1.PV Plant.Control.Grid_follow.Pref
    HIL_OutAO(0x4078, (float)_pv1_pv_plant_control_grid_follow_signal_switch2__out);
    // Generated from the component: PV1.PV Plant.Control.PLL.Gain4
    _pv1_pv_plant_control_pll_gain4__out = 0.002551551815399144 * _pv1_pv_plant_control_pll_pll_abc_to_dq_lpf_d__out;
    // Generated from the component: PV1.PV Plant.Control.PLL.Gain3
    _pv1_pv_plant_control_pll_gain3__out = 0.002551551815399144 * _pv1_pv_plant_control_pll_pll_abc_to_dq_lpf_q__out;
    // Generated from the component: PV1.PV Plant.Control.PLL.PLL.normalize
    _pv1_pv_plant_control_pll_pll_normalize__in1 = _pv1_pv_plant_control_pll_pll_abc_to_dq_lpf_d__out;
    _pv1_pv_plant_control_pll_pll_normalize__in2 = _pv1_pv_plant_control_pll_pll_abc_to_dq_lpf_q__out;
    _pv1_pv_plant_control_pll_pll_normalize__pk = (powf(_pv1_pv_plant_control_pll_pll_normalize__in1, 2.0) + powf(_pv1_pv_plant_control_pll_pll_normalize__in2, 2.0));
    _pv1_pv_plant_control_pll_pll_normalize__pk = sqrt(_pv1_pv_plant_control_pll_pll_normalize__pk);
    if (_pv1_pv_plant_control_pll_pll_normalize__pk < 0.1) {
        _pv1_pv_plant_control_pll_pll_normalize__in2_pu = _pv1_pv_plant_control_pll_pll_normalize__in2 / 0.1;
    }
    else {
        _pv1_pv_plant_control_pll_pll_normalize__in2_pu = _pv1_pv_plant_control_pll_pll_normalize__in2 / _pv1_pv_plant_control_pll_pll_normalize__pk;
    }
    // Generated from the component: PV2.PV Plant.Control.Grid_follow.Pref
    HIL_OutAO(0x4099, (float)_pv2_pv_plant_control_grid_follow_signal_switch2__out);
    // Generated from the component: PV2.PV Plant.Control.PLL.Gain4
    _pv2_pv_plant_control_pll_gain4__out = 0.002551551815399144 * _pv2_pv_plant_control_pll_pll_abc_to_dq_lpf_d__out;
    // Generated from the component: PV2.PV Plant.Control.PLL.Gain3
    _pv2_pv_plant_control_pll_gain3__out = 0.002551551815399144 * _pv2_pv_plant_control_pll_pll_abc_to_dq_lpf_q__out;
    // Generated from the component: PV2.PV Plant.Control.PLL.PLL.normalize
    _pv2_pv_plant_control_pll_pll_normalize__in1 = _pv2_pv_plant_control_pll_pll_abc_to_dq_lpf_d__out;
    _pv2_pv_plant_control_pll_pll_normalize__in2 = _pv2_pv_plant_control_pll_pll_abc_to_dq_lpf_q__out;
    _pv2_pv_plant_control_pll_pll_normalize__pk = (powf(_pv2_pv_plant_control_pll_pll_normalize__in1, 2.0) + powf(_pv2_pv_plant_control_pll_pll_normalize__in2, 2.0));
    _pv2_pv_plant_control_pll_pll_normalize__pk = sqrt(_pv2_pv_plant_control_pll_pll_normalize__pk);
    if (_pv2_pv_plant_control_pll_pll_normalize__pk < 0.1) {
        _pv2_pv_plant_control_pll_pll_normalize__in2_pu = _pv2_pv_plant_control_pll_pll_normalize__in2 / 0.1;
    }
    else {
        _pv2_pv_plant_control_pll_pll_normalize__in2_pu = _pv2_pv_plant_control_pll_pll_normalize__in2 / _pv2_pv_plant_control_pll_pll_normalize__pk;
    }
    // Generated from the component: ESS1.Controller.Outer Voltage Loop + Inner Current Loop.Signal switch2
    _ess1_controller_outer_voltage_loop___inner_current_loop_signal_switch2__out[0] = (_ess1_controller_outer_voltage_loop___inner_current_loop_logical_operator1__out != 1.0) ? _ess1_controller_outer_voltage_loop___inner_current_loop_bus_join2__out[0] : _ess1_controller_outer_voltage_loop___inner_current_loop_bus_join1__out[0];
    _ess1_controller_outer_voltage_loop___inner_current_loop_signal_switch2__out[1] = (_ess1_controller_outer_voltage_loop___inner_current_loop_logical_operator1__out != 1.0) ? _ess1_controller_outer_voltage_loop___inner_current_loop_bus_join2__out[1] : _ess1_controller_outer_voltage_loop___inner_current_loop_bus_join1__out[1];
    // Generated from the component: ESS2.Controller.Outer Voltage Loop + Inner Current Loop.Signal switch2
    _ess2_controller_outer_voltage_loop___inner_current_loop_signal_switch2__out[0] = (_ess2_controller_outer_voltage_loop___inner_current_loop_logical_operator1__out != 1.0) ? _ess2_controller_outer_voltage_loop___inner_current_loop_bus_join2__out[0] : _ess2_controller_outer_voltage_loop___inner_current_loop_bus_join1__out[0];
    _ess2_controller_outer_voltage_loop___inner_current_loop_signal_switch2__out[1] = (_ess2_controller_outer_voltage_loop___inner_current_loop_logical_operator1__out != 1.0) ? _ess2_controller_outer_voltage_loop___inner_current_loop_bus_join2__out[1] : _ess2_controller_outer_voltage_loop___inner_current_loop_bus_join1__out[1];
    // Generated from the component: PV1.PV Plant.Control.Grid_follow.ControlSignal_Calculation.Sum5
    _pv1_pv_plant_control_grid_follow_controlsignal_calculation_sum5__out = _pv1_pv_plant_control_pll_gain4__out - _pv1_pv_plant_control_grid_follow_controlsignal_calculation_product1__out;
    // Generated from the component: PV1.PV Plant.Control.Grid_follow.Current_ref.Product4
    _pv1_pv_plant_control_grid_follow_current_ref_product4__out = (_pv1_pv_plant_control_pll_gain4__out * _pv1_pv_plant_control_grid_follow_limit_pqref_unit_delay2__out);
    // Generated from the component: PV1.PV Plant.Control.Grid_follow.Current_ref.Product5
    _pv1_pv_plant_control_grid_follow_current_ref_product5__out = (_pv1_pv_plant_control_grid_follow_limit_pqref_unit_delay1__out * _pv1_pv_plant_control_pll_gain4__out);
    // Generated from the component: PV1.PV Plant.Control.Grid_follow.Power_Meas.Power_Meas_DQpu.Product1
    _pv1_pv_plant_control_grid_follow_power_meas_power_meas_dqpu_product1__out = (_pv1_pv_plant_control_pll_gain4__out * _pv1_pv_plant_control_grid_follow_current_abc_to_dq_gain1__out);
    // Generated from the component: PV1.PV Plant.Control.Grid_follow.Power_Meas.Power_Meas_DQpu.Product3
    _pv1_pv_plant_control_grid_follow_power_meas_power_meas_dqpu_product3__out = (_pv1_pv_plant_control_pll_gain4__out * _pv1_pv_plant_control_grid_follow_current_abc_to_dq_gain2__out);
    // Generated from the component: PV1.PV Plant.Control.Grid_follow.Power_Meas1.Power_Meas_DQpu.Product1
    _pv1_pv_plant_control_grid_follow_power_meas1_power_meas_dqpu_product1__out = (_pv1_pv_plant_control_pll_gain4__out * _pv1_pv_plant_control_grid_follow_current_abc_to_dq1_gain1__out);
    // Generated from the component: PV1.PV Plant.Control.Grid_follow.Power_Meas1.Power_Meas_DQpu.Product3
    _pv1_pv_plant_control_grid_follow_power_meas1_power_meas_dqpu_product3__out = (_pv1_pv_plant_control_pll_gain4__out * _pv1_pv_plant_control_grid_follow_current_abc_to_dq1_gain2__out);
    // Generated from the component: PV1.PV Plant.Control.Grid_follow.Vd
    HIL_OutAO(0x407e, (float)_pv1_pv_plant_control_pll_gain4__out);
    // Generated from the component: PV1.PV Plant.Control.Grid_follow.ControlSignal_Calculation.Sum6
    _pv1_pv_plant_control_grid_follow_controlsignal_calculation_sum6__out = _pv1_pv_plant_control_pll_gain3__out + _pv1_pv_plant_control_grid_follow_controlsignal_calculation_product2__out;
    // Generated from the component: PV1.PV Plant.Control.Grid_follow.Current_ref.Product3
    _pv1_pv_plant_control_grid_follow_current_ref_product3__out = (_pv1_pv_plant_control_pll_gain3__out * _pv1_pv_plant_control_grid_follow_limit_pqref_unit_delay1__out);
    // Generated from the component: PV1.PV Plant.Control.Grid_follow.Current_ref.Product6
    _pv1_pv_plant_control_grid_follow_current_ref_product6__out = (_pv1_pv_plant_control_grid_follow_limit_pqref_unit_delay2__out * _pv1_pv_plant_control_pll_gain3__out);
    // Generated from the component: PV1.PV Plant.Control.Grid_follow.Power_Meas.Power_Meas_DQpu.Product2
    _pv1_pv_plant_control_grid_follow_power_meas_power_meas_dqpu_product2__out = (_pv1_pv_plant_control_pll_gain3__out * _pv1_pv_plant_control_grid_follow_current_abc_to_dq_gain2__out);
    // Generated from the component: PV1.PV Plant.Control.Grid_follow.Power_Meas.Power_Meas_DQpu.Product4
    _pv1_pv_plant_control_grid_follow_power_meas_power_meas_dqpu_product4__out = (_pv1_pv_plant_control_pll_gain3__out * _pv1_pv_plant_control_grid_follow_current_abc_to_dq_gain1__out);
    // Generated from the component: PV1.PV Plant.Control.Grid_follow.Power_Meas1.Power_Meas_DQpu.Product2
    _pv1_pv_plant_control_grid_follow_power_meas1_power_meas_dqpu_product2__out = (_pv1_pv_plant_control_pll_gain3__out * _pv1_pv_plant_control_grid_follow_current_abc_to_dq1_gain2__out);
    // Generated from the component: PV1.PV Plant.Control.Grid_follow.Power_Meas1.Power_Meas_DQpu.Product4
    _pv1_pv_plant_control_grid_follow_power_meas1_power_meas_dqpu_product4__out = (_pv1_pv_plant_control_pll_gain3__out * _pv1_pv_plant_control_grid_follow_current_abc_to_dq1_gain1__out);
    // Generated from the component: PV1.PV Plant.Control.Grid_follow.Vq
    HIL_OutAO(0x407f, (float)_pv1_pv_plant_control_pll_gain3__out);
    // Generated from the component: PV1.PV Plant.Control.PLL.Gain5
    _pv1_pv_plant_control_pll_gain5__out = 0.002551551815399144 * _pv1_pv_plant_control_pll_pll_normalize__pk;
    // Generated from the component: PV1.PV Plant.Control.PLL.PLL.PID.Kd
    _pv1_pv_plant_control_pll_pll_pid_kd__out = 1.0 * _pv1_pv_plant_control_pll_pll_normalize__in2_pu;
    // Generated from the component: PV1.PV Plant.Control.PLL.PLL.PID.Ki
    _pv1_pv_plant_control_pll_pll_pid_ki__out = 3200.0 * _pv1_pv_plant_control_pll_pll_normalize__in2_pu;
    // Generated from the component: PV1.PV Plant.Control.PLL.PLL.PID.Kp
    _pv1_pv_plant_control_pll_pll_pid_kp__out = 100.0 * _pv1_pv_plant_control_pll_pll_normalize__in2_pu;
    // Generated from the component: PV1.PV Plant.Control.PLL.Vt_meas
    HIL_OutAO(0x4087, (float)_pv1_pv_plant_control_pll_pll_normalize__pk);
    // Generated from the component: PV1.PV Plant.Output.Bus Join1
    _pv1_pv_plant_output_bus_join1__out[0] = _pv1_pv_plant_input_bus_split2__out;
    _pv1_pv_plant_output_bus_join1__out[1] = _pv1_pv_plant_logical_operator1__out;
    _pv1_pv_plant_output_bus_join1__out[2] = _pv1_pv_plant_va_va1__out;
    _pv1_pv_plant_output_bus_join1__out[3] = _pv1_pv_plant_vb_va1__out;
    _pv1_pv_plant_output_bus_join1__out[4] = _pv1_pv_plant_vc_va1__out;
    _pv1_pv_plant_output_bus_join1__out[5] = _pv1_pv_plant_control_pll_pll_normalize__pk;
    _pv1_pv_plant_output_bus_join1__out[6] = _pv1_pv_plant_ia1_ia1__out;
    _pv1_pv_plant_output_bus_join1__out[7] = _pv1_pv_plant_ib1_ia1__out;
    _pv1_pv_plant_output_bus_join1__out[8] = _pv1_pv_plant_ic1_ia1__out;
    _pv1_pv_plant_output_bus_join1__out[9] = _pv1_pv_plant_control_pll_pll_to_hz__out;
    _pv1_pv_plant_output_bus_join1__out[10] = _pv1_pv_plant_control_grid_follow_power_meas_gain4__out;
    _pv1_pv_plant_output_bus_join1__out[11] = _pv1_pv_plant_control_grid_follow_power_meas_gain5__out;
    // Generated from the component: PV2.PV Plant.Control.Grid_follow.ControlSignal_Calculation.Sum5
    _pv2_pv_plant_control_grid_follow_controlsignal_calculation_sum5__out = _pv2_pv_plant_control_pll_gain4__out - _pv2_pv_plant_control_grid_follow_controlsignal_calculation_product1__out;
    // Generated from the component: PV2.PV Plant.Control.Grid_follow.Current_ref.Product4
    _pv2_pv_plant_control_grid_follow_current_ref_product4__out = (_pv2_pv_plant_control_pll_gain4__out * _pv2_pv_plant_control_grid_follow_limit_pqref_unit_delay2__out);
    // Generated from the component: PV2.PV Plant.Control.Grid_follow.Current_ref.Product5
    _pv2_pv_plant_control_grid_follow_current_ref_product5__out = (_pv2_pv_plant_control_grid_follow_limit_pqref_unit_delay1__out * _pv2_pv_plant_control_pll_gain4__out);
    // Generated from the component: PV2.PV Plant.Control.Grid_follow.Power_Meas.Power_Meas_DQpu.Product1
    _pv2_pv_plant_control_grid_follow_power_meas_power_meas_dqpu_product1__out = (_pv2_pv_plant_control_pll_gain4__out * _pv2_pv_plant_control_grid_follow_current_abc_to_dq_gain1__out);
    // Generated from the component: PV2.PV Plant.Control.Grid_follow.Power_Meas.Power_Meas_DQpu.Product3
    _pv2_pv_plant_control_grid_follow_power_meas_power_meas_dqpu_product3__out = (_pv2_pv_plant_control_pll_gain4__out * _pv2_pv_plant_control_grid_follow_current_abc_to_dq_gain2__out);
    // Generated from the component: PV2.PV Plant.Control.Grid_follow.Power_Meas1.Power_Meas_DQpu.Product1
    _pv2_pv_plant_control_grid_follow_power_meas1_power_meas_dqpu_product1__out = (_pv2_pv_plant_control_pll_gain4__out * _pv2_pv_plant_control_grid_follow_current_abc_to_dq1_gain1__out);
    // Generated from the component: PV2.PV Plant.Control.Grid_follow.Power_Meas1.Power_Meas_DQpu.Product3
    _pv2_pv_plant_control_grid_follow_power_meas1_power_meas_dqpu_product3__out = (_pv2_pv_plant_control_pll_gain4__out * _pv2_pv_plant_control_grid_follow_current_abc_to_dq1_gain2__out);
    // Generated from the component: PV2.PV Plant.Control.Grid_follow.Vd
    HIL_OutAO(0x409f, (float)_pv2_pv_plant_control_pll_gain4__out);
    // Generated from the component: PV2.PV Plant.Control.Grid_follow.ControlSignal_Calculation.Sum6
    _pv2_pv_plant_control_grid_follow_controlsignal_calculation_sum6__out = _pv2_pv_plant_control_pll_gain3__out + _pv2_pv_plant_control_grid_follow_controlsignal_calculation_product2__out;
    // Generated from the component: PV2.PV Plant.Control.Grid_follow.Current_ref.Product3
    _pv2_pv_plant_control_grid_follow_current_ref_product3__out = (_pv2_pv_plant_control_pll_gain3__out * _pv2_pv_plant_control_grid_follow_limit_pqref_unit_delay1__out);
    // Generated from the component: PV2.PV Plant.Control.Grid_follow.Current_ref.Product6
    _pv2_pv_plant_control_grid_follow_current_ref_product6__out = (_pv2_pv_plant_control_grid_follow_limit_pqref_unit_delay2__out * _pv2_pv_plant_control_pll_gain3__out);
    // Generated from the component: PV2.PV Plant.Control.Grid_follow.Power_Meas.Power_Meas_DQpu.Product2
    _pv2_pv_plant_control_grid_follow_power_meas_power_meas_dqpu_product2__out = (_pv2_pv_plant_control_pll_gain3__out * _pv2_pv_plant_control_grid_follow_current_abc_to_dq_gain2__out);
    // Generated from the component: PV2.PV Plant.Control.Grid_follow.Power_Meas.Power_Meas_DQpu.Product4
    _pv2_pv_plant_control_grid_follow_power_meas_power_meas_dqpu_product4__out = (_pv2_pv_plant_control_pll_gain3__out * _pv2_pv_plant_control_grid_follow_current_abc_to_dq_gain1__out);
    // Generated from the component: PV2.PV Plant.Control.Grid_follow.Power_Meas1.Power_Meas_DQpu.Product2
    _pv2_pv_plant_control_grid_follow_power_meas1_power_meas_dqpu_product2__out = (_pv2_pv_plant_control_pll_gain3__out * _pv2_pv_plant_control_grid_follow_current_abc_to_dq1_gain2__out);
    // Generated from the component: PV2.PV Plant.Control.Grid_follow.Power_Meas1.Power_Meas_DQpu.Product4
    _pv2_pv_plant_control_grid_follow_power_meas1_power_meas_dqpu_product4__out = (_pv2_pv_plant_control_pll_gain3__out * _pv2_pv_plant_control_grid_follow_current_abc_to_dq1_gain1__out);
    // Generated from the component: PV2.PV Plant.Control.Grid_follow.Vq
    HIL_OutAO(0x40a0, (float)_pv2_pv_plant_control_pll_gain3__out);
    // Generated from the component: PV2.PV Plant.Control.PLL.Gain5
    _pv2_pv_plant_control_pll_gain5__out = 0.002551551815399144 * _pv2_pv_plant_control_pll_pll_normalize__pk;
    // Generated from the component: PV2.PV Plant.Control.PLL.PLL.PID.Kd
    _pv2_pv_plant_control_pll_pll_pid_kd__out = 1.0 * _pv2_pv_plant_control_pll_pll_normalize__in2_pu;
    // Generated from the component: PV2.PV Plant.Control.PLL.PLL.PID.Ki
    _pv2_pv_plant_control_pll_pll_pid_ki__out = 3200.0 * _pv2_pv_plant_control_pll_pll_normalize__in2_pu;
    // Generated from the component: PV2.PV Plant.Control.PLL.PLL.PID.Kp
    _pv2_pv_plant_control_pll_pll_pid_kp__out = 100.0 * _pv2_pv_plant_control_pll_pll_normalize__in2_pu;
    // Generated from the component: PV2.PV Plant.Control.PLL.Vt_meas
    HIL_OutAO(0x40a8, (float)_pv2_pv_plant_control_pll_pll_normalize__pk);
    // Generated from the component: PV2.PV Plant.Output.Bus Join1
    _pv2_pv_plant_output_bus_join1__out[0] = _pv2_pv_plant_input_bus_split2__out;
    _pv2_pv_plant_output_bus_join1__out[1] = _pv2_pv_plant_logical_operator1__out;
    _pv2_pv_plant_output_bus_join1__out[2] = _pv2_pv_plant_va_va1__out;
    _pv2_pv_plant_output_bus_join1__out[3] = _pv2_pv_plant_vb_va1__out;
    _pv2_pv_plant_output_bus_join1__out[4] = _pv2_pv_plant_vc_va1__out;
    _pv2_pv_plant_output_bus_join1__out[5] = _pv2_pv_plant_control_pll_pll_normalize__pk;
    _pv2_pv_plant_output_bus_join1__out[6] = _pv2_pv_plant_ia1_ia1__out;
    _pv2_pv_plant_output_bus_join1__out[7] = _pv2_pv_plant_ib1_ia1__out;
    _pv2_pv_plant_output_bus_join1__out[8] = _pv2_pv_plant_ic1_ia1__out;
    _pv2_pv_plant_output_bus_join1__out[9] = _pv2_pv_plant_control_pll_pll_to_hz__out;
    _pv2_pv_plant_output_bus_join1__out[10] = _pv2_pv_plant_control_grid_follow_power_meas_gain4__out;
    _pv2_pv_plant_output_bus_join1__out[11] = _pv2_pv_plant_control_grid_follow_power_meas_gain5__out;
    // Generated from the component: ESS1.Controller.Outer Voltage Loop + Inner Current Loop.Bus Split1
    _ess1_controller_outer_voltage_loop___inner_current_loop_bus_split1__out = _ess1_controller_outer_voltage_loop___inner_current_loop_signal_switch2__out[0];
    _ess1_controller_outer_voltage_loop___inner_current_loop_bus_split1__out1 = _ess1_controller_outer_voltage_loop___inner_current_loop_signal_switch2__out[1];
    // Generated from the component: ESS2.Controller.Outer Voltage Loop + Inner Current Loop.Bus Split1
    _ess2_controller_outer_voltage_loop___inner_current_loop_bus_split1__out = _ess2_controller_outer_voltage_loop___inner_current_loop_signal_switch2__out[0];
    _ess2_controller_outer_voltage_loop___inner_current_loop_bus_split1__out1 = _ess2_controller_outer_voltage_loop___inner_current_loop_signal_switch2__out[1];
    // Generated from the component: PV1.PV Plant.Control.Grid_follow.Current_ref.Sum3
    _pv1_pv_plant_control_grid_follow_current_ref_sum3__out = _pv1_pv_plant_control_grid_follow_current_ref_product3__out - _pv1_pv_plant_control_grid_follow_current_ref_product4__out;
    // Generated from the component: PV1.PV Plant.Control.Grid_follow.Current_ref.Sum4
    _pv1_pv_plant_control_grid_follow_current_ref_sum4__out = _pv1_pv_plant_control_grid_follow_current_ref_product5__out + _pv1_pv_plant_control_grid_follow_current_ref_product6__out;
    // Generated from the component: PV1.PV Plant.Control.Grid_follow.Power_Meas.Power_Meas_DQpu.Sum1
    _pv1_pv_plant_control_grid_follow_power_meas_power_meas_dqpu_sum1__out = _pv1_pv_plant_control_grid_follow_power_meas_power_meas_dqpu_product1__out + _pv1_pv_plant_control_grid_follow_power_meas_power_meas_dqpu_product2__out;
    // Generated from the component: PV1.PV Plant.Control.Grid_follow.Power_Meas.Power_Meas_DQpu.Sum2
    _pv1_pv_plant_control_grid_follow_power_meas_power_meas_dqpu_sum2__out = _pv1_pv_plant_control_grid_follow_power_meas_power_meas_dqpu_product4__out - _pv1_pv_plant_control_grid_follow_power_meas_power_meas_dqpu_product3__out;
    // Generated from the component: PV1.PV Plant.Control.Grid_follow.Power_Meas1.Power_Meas_DQpu.Sum1
    _pv1_pv_plant_control_grid_follow_power_meas1_power_meas_dqpu_sum1__out = _pv1_pv_plant_control_grid_follow_power_meas1_power_meas_dqpu_product1__out + _pv1_pv_plant_control_grid_follow_power_meas1_power_meas_dqpu_product2__out;
    // Generated from the component: PV1.PV Plant.Control.Grid_follow.Power_Meas1.Power_Meas_DQpu.Sum2
    _pv1_pv_plant_control_grid_follow_power_meas1_power_meas_dqpu_sum2__out = _pv1_pv_plant_control_grid_follow_power_meas1_power_meas_dqpu_product4__out - _pv1_pv_plant_control_grid_follow_power_meas1_power_meas_dqpu_product3__out;
    // Generated from the component: PV1.PV Plant.Control.Grid_follow.Current_ref.Product7
    _pv1_pv_plant_control_grid_follow_current_ref_product7__out = (_pv1_pv_plant_control_pll_gain5__out * _pv1_pv_plant_control_pll_gain5__out);
    // Generated from the component: PV1.PV Plant.Control.Grid_follow.Signal switch4
    _pv1_pv_plant_control_grid_follow_signal_switch4__out = (_pv1_pv_plant_control_grid_follow_logical_operator2__out > 0.5f) ? _pv1_pv_plant_control_grid_follow_gain4__out : _pv1_pv_plant_control_pll_gain5__out;
    // Generated from the component: PV1.PV Plant.Control.Grid_follow.Vt_pu
    HIL_OutAO(0x4080, (float)_pv1_pv_plant_control_pll_gain5__out);
    // Generated from the component: PV1.PV Plant.Control.PLL.PLL.PID.Sum8
    _pv1_pv_plant_control_pll_pll_pid_sum8__out = _pv1_pv_plant_control_pll_pll_pid_kd__out - _pv1_pv_plant_control_pll_pll_pid_integrator2__out;
    // Generated from the component: PV1.Bus Split1
    _pv1_bus_split1__out = _pv1_pv_plant_output_bus_join1__out[0];
    _pv1_bus_split1__out1 = _pv1_pv_plant_output_bus_join1__out[1];
    _pv1_bus_split1__out2 = _pv1_pv_plant_output_bus_join1__out[2];
    _pv1_bus_split1__out3 = _pv1_pv_plant_output_bus_join1__out[3];
    _pv1_bus_split1__out4 = _pv1_pv_plant_output_bus_join1__out[4];
    _pv1_bus_split1__out5 = _pv1_pv_plant_output_bus_join1__out[5];
    _pv1_bus_split1__out6 = _pv1_pv_plant_output_bus_join1__out[6];
    _pv1_bus_split1__out7 = _pv1_pv_plant_output_bus_join1__out[7];
    _pv1_bus_split1__out8 = _pv1_pv_plant_output_bus_join1__out[8];
    _pv1_bus_split1__out9 = _pv1_pv_plant_output_bus_join1__out[9];
    _pv1_bus_split1__out10 = _pv1_pv_plant_output_bus_join1__out[10];
    _pv1_bus_split1__out11 = _pv1_pv_plant_output_bus_join1__out[11];
    // Generated from the component: PV2.PV Plant.Control.Grid_follow.Current_ref.Sum3
    _pv2_pv_plant_control_grid_follow_current_ref_sum3__out = _pv2_pv_plant_control_grid_follow_current_ref_product3__out - _pv2_pv_plant_control_grid_follow_current_ref_product4__out;
    // Generated from the component: PV2.PV Plant.Control.Grid_follow.Current_ref.Sum4
    _pv2_pv_plant_control_grid_follow_current_ref_sum4__out = _pv2_pv_plant_control_grid_follow_current_ref_product5__out + _pv2_pv_plant_control_grid_follow_current_ref_product6__out;
    // Generated from the component: PV2.PV Plant.Control.Grid_follow.Power_Meas.Power_Meas_DQpu.Sum1
    _pv2_pv_plant_control_grid_follow_power_meas_power_meas_dqpu_sum1__out = _pv2_pv_plant_control_grid_follow_power_meas_power_meas_dqpu_product1__out + _pv2_pv_plant_control_grid_follow_power_meas_power_meas_dqpu_product2__out;
    // Generated from the component: PV2.PV Plant.Control.Grid_follow.Power_Meas.Power_Meas_DQpu.Sum2
    _pv2_pv_plant_control_grid_follow_power_meas_power_meas_dqpu_sum2__out = _pv2_pv_plant_control_grid_follow_power_meas_power_meas_dqpu_product4__out - _pv2_pv_plant_control_grid_follow_power_meas_power_meas_dqpu_product3__out;
    // Generated from the component: PV2.PV Plant.Control.Grid_follow.Power_Meas1.Power_Meas_DQpu.Sum1
    _pv2_pv_plant_control_grid_follow_power_meas1_power_meas_dqpu_sum1__out = _pv2_pv_plant_control_grid_follow_power_meas1_power_meas_dqpu_product1__out + _pv2_pv_plant_control_grid_follow_power_meas1_power_meas_dqpu_product2__out;
    // Generated from the component: PV2.PV Plant.Control.Grid_follow.Power_Meas1.Power_Meas_DQpu.Sum2
    _pv2_pv_plant_control_grid_follow_power_meas1_power_meas_dqpu_sum2__out = _pv2_pv_plant_control_grid_follow_power_meas1_power_meas_dqpu_product4__out - _pv2_pv_plant_control_grid_follow_power_meas1_power_meas_dqpu_product3__out;
    // Generated from the component: PV2.PV Plant.Control.Grid_follow.Current_ref.Product7
    _pv2_pv_plant_control_grid_follow_current_ref_product7__out = (_pv2_pv_plant_control_pll_gain5__out * _pv2_pv_plant_control_pll_gain5__out);
    // Generated from the component: PV2.PV Plant.Control.Grid_follow.Signal switch4
    _pv2_pv_plant_control_grid_follow_signal_switch4__out = (_pv2_pv_plant_control_grid_follow_logical_operator2__out > 0.5f) ? _pv2_pv_plant_control_grid_follow_gain4__out : _pv2_pv_plant_control_pll_gain5__out;
    // Generated from the component: PV2.PV Plant.Control.Grid_follow.Vt_pu
    HIL_OutAO(0x40a1, (float)_pv2_pv_plant_control_pll_gain5__out);
    // Generated from the component: PV2.PV Plant.Control.PLL.PLL.PID.Sum8
    _pv2_pv_plant_control_pll_pll_pid_sum8__out = _pv2_pv_plant_control_pll_pll_pid_kd__out - _pv2_pv_plant_control_pll_pll_pid_integrator2__out;
    // Generated from the component: PV2.Bus Split1
    _pv2_bus_split1__out = _pv2_pv_plant_output_bus_join1__out[0];
    _pv2_bus_split1__out1 = _pv2_pv_plant_output_bus_join1__out[1];
    _pv2_bus_split1__out2 = _pv2_pv_plant_output_bus_join1__out[2];
    _pv2_bus_split1__out3 = _pv2_pv_plant_output_bus_join1__out[3];
    _pv2_bus_split1__out4 = _pv2_pv_plant_output_bus_join1__out[4];
    _pv2_bus_split1__out5 = _pv2_pv_plant_output_bus_join1__out[5];
    _pv2_bus_split1__out6 = _pv2_pv_plant_output_bus_join1__out[6];
    _pv2_bus_split1__out7 = _pv2_pv_plant_output_bus_join1__out[7];
    _pv2_bus_split1__out8 = _pv2_pv_plant_output_bus_join1__out[8];
    _pv2_bus_split1__out9 = _pv2_pv_plant_output_bus_join1__out[9];
    _pv2_bus_split1__out10 = _pv2_pv_plant_output_bus_join1__out[10];
    _pv2_bus_split1__out11 = _pv2_pv_plant_output_bus_join1__out[11];
    // Generated from the component: ESS1.Controller.Outer Voltage Loop + Inner Current Loop.Xi_d_ref
    HIL_OutAO(0x4026, (float)_ess1_controller_outer_voltage_loop___inner_current_loop_bus_split1__out);
    // Generated from the component: ESS1.Controller.Outer Voltage Loop + Inner Current Loop.Xi_q_ref
    HIL_OutAO(0x4027, (float)_ess1_controller_outer_voltage_loop___inner_current_loop_bus_split1__out1);
    // Generated from the component: ESS1.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Sum8
    _ess1_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum8__out = _ess1_controller_outer_voltage_loop___inner_current_loop_bus_split1__out - _ess1_controller_gain6__out;
    // Generated from the component: ESS1.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Sum9
    _ess1_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum9__out = _ess1_controller_outer_voltage_loop___inner_current_loop_bus_split1__out1 - _ess1_controller_gain7__out;
    // Generated from the component: ESS2.Controller.Outer Voltage Loop + Inner Current Loop.Xi_d_ref
    HIL_OutAO(0x405b, (float)_ess2_controller_outer_voltage_loop___inner_current_loop_bus_split1__out);
    // Generated from the component: ESS2.Controller.Outer Voltage Loop + Inner Current Loop.Xi_q_ref
    HIL_OutAO(0x405c, (float)_ess2_controller_outer_voltage_loop___inner_current_loop_bus_split1__out1);
    // Generated from the component: ESS2.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Sum8
    _ess2_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum8__out = _ess2_controller_outer_voltage_loop___inner_current_loop_bus_split1__out - _ess2_controller_gain6__out;
    // Generated from the component: ESS2.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Sum9
    _ess2_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum9__out = _ess2_controller_outer_voltage_loop___inner_current_loop_bus_split1__out1 - _ess2_controller_gain7__out;
    // Generated from the component: PV1.PV Plant.Control.Grid_follow.Power_Meas.Power_Meas_DQpu.LPF_P
    _pv1_pv_plant_control_grid_follow_power_meas_power_meas_dqpu_lpf_p__a_sum = 0.0f;
    _pv1_pv_plant_control_grid_follow_power_meas_power_meas_dqpu_lpf_p__b_sum = 0.0f;
    _pv1_pv_plant_control_grid_follow_power_meas_power_meas_dqpu_lpf_p__delay_line_in = 0.0f;
    for (_pv1_pv_plant_control_grid_follow_power_meas_power_meas_dqpu_lpf_p__i = 0; _pv1_pv_plant_control_grid_follow_power_meas_power_meas_dqpu_lpf_p__i < 1; _pv1_pv_plant_control_grid_follow_power_meas_power_meas_dqpu_lpf_p__i++) {
        _pv1_pv_plant_control_grid_follow_power_meas_power_meas_dqpu_lpf_p__b_sum += _pv1_pv_plant_control_grid_follow_power_meas_power_meas_dqpu_lpf_p__b_coeff[_pv1_pv_plant_control_grid_follow_power_meas_power_meas_dqpu_lpf_p__i + 1] * _pv1_pv_plant_control_grid_follow_power_meas_power_meas_dqpu_lpf_p__states[_pv1_pv_plant_control_grid_follow_power_meas_power_meas_dqpu_lpf_p__i];
    }
    _pv1_pv_plant_control_grid_follow_power_meas_power_meas_dqpu_lpf_p__a_sum += _pv1_pv_plant_control_grid_follow_power_meas_power_meas_dqpu_lpf_p__states[0] * _pv1_pv_plant_control_grid_follow_power_meas_power_meas_dqpu_lpf_p__a_coeff[1];
    _pv1_pv_plant_control_grid_follow_power_meas_power_meas_dqpu_lpf_p__delay_line_in = _pv1_pv_plant_control_grid_follow_power_meas_power_meas_dqpu_sum1__out - _pv1_pv_plant_control_grid_follow_power_meas_power_meas_dqpu_lpf_p__a_sum;
    _pv1_pv_plant_control_grid_follow_power_meas_power_meas_dqpu_lpf_p__b_sum += _pv1_pv_plant_control_grid_follow_power_meas_power_meas_dqpu_lpf_p__b_coeff[0] * _pv1_pv_plant_control_grid_follow_power_meas_power_meas_dqpu_lpf_p__delay_line_in;
    _pv1_pv_plant_control_grid_follow_power_meas_power_meas_dqpu_lpf_p__out = _pv1_pv_plant_control_grid_follow_power_meas_power_meas_dqpu_lpf_p__b_sum;
    // Generated from the component: PV1.PV Plant.Control.Grid_follow.Power_Meas.Power_Meas_DQpu.LPF_Q
    _pv1_pv_plant_control_grid_follow_power_meas_power_meas_dqpu_lpf_q__a_sum = 0.0f;
    _pv1_pv_plant_control_grid_follow_power_meas_power_meas_dqpu_lpf_q__b_sum = 0.0f;
    _pv1_pv_plant_control_grid_follow_power_meas_power_meas_dqpu_lpf_q__delay_line_in = 0.0f;
    for (_pv1_pv_plant_control_grid_follow_power_meas_power_meas_dqpu_lpf_q__i = 0; _pv1_pv_plant_control_grid_follow_power_meas_power_meas_dqpu_lpf_q__i < 1; _pv1_pv_plant_control_grid_follow_power_meas_power_meas_dqpu_lpf_q__i++) {
        _pv1_pv_plant_control_grid_follow_power_meas_power_meas_dqpu_lpf_q__b_sum += _pv1_pv_plant_control_grid_follow_power_meas_power_meas_dqpu_lpf_q__b_coeff[_pv1_pv_plant_control_grid_follow_power_meas_power_meas_dqpu_lpf_q__i + 1] * _pv1_pv_plant_control_grid_follow_power_meas_power_meas_dqpu_lpf_q__states[_pv1_pv_plant_control_grid_follow_power_meas_power_meas_dqpu_lpf_q__i];
    }
    _pv1_pv_plant_control_grid_follow_power_meas_power_meas_dqpu_lpf_q__a_sum += _pv1_pv_plant_control_grid_follow_power_meas_power_meas_dqpu_lpf_q__states[0] * _pv1_pv_plant_control_grid_follow_power_meas_power_meas_dqpu_lpf_q__a_coeff[1];
    _pv1_pv_plant_control_grid_follow_power_meas_power_meas_dqpu_lpf_q__delay_line_in = _pv1_pv_plant_control_grid_follow_power_meas_power_meas_dqpu_sum2__out - _pv1_pv_plant_control_grid_follow_power_meas_power_meas_dqpu_lpf_q__a_sum;
    _pv1_pv_plant_control_grid_follow_power_meas_power_meas_dqpu_lpf_q__b_sum += _pv1_pv_plant_control_grid_follow_power_meas_power_meas_dqpu_lpf_q__b_coeff[0] * _pv1_pv_plant_control_grid_follow_power_meas_power_meas_dqpu_lpf_q__delay_line_in;
    _pv1_pv_plant_control_grid_follow_power_meas_power_meas_dqpu_lpf_q__out = _pv1_pv_plant_control_grid_follow_power_meas_power_meas_dqpu_lpf_q__b_sum;
    // Generated from the component: PV1.PV Plant.Control.Grid_follow.Power_Meas1.Power_Meas_DQpu.LPF_P
    _pv1_pv_plant_control_grid_follow_power_meas1_power_meas_dqpu_lpf_p__a_sum = 0.0f;
    _pv1_pv_plant_control_grid_follow_power_meas1_power_meas_dqpu_lpf_p__b_sum = 0.0f;
    _pv1_pv_plant_control_grid_follow_power_meas1_power_meas_dqpu_lpf_p__delay_line_in = 0.0f;
    for (_pv1_pv_plant_control_grid_follow_power_meas1_power_meas_dqpu_lpf_p__i = 0; _pv1_pv_plant_control_grid_follow_power_meas1_power_meas_dqpu_lpf_p__i < 1; _pv1_pv_plant_control_grid_follow_power_meas1_power_meas_dqpu_lpf_p__i++) {
        _pv1_pv_plant_control_grid_follow_power_meas1_power_meas_dqpu_lpf_p__b_sum += _pv1_pv_plant_control_grid_follow_power_meas1_power_meas_dqpu_lpf_p__b_coeff[_pv1_pv_plant_control_grid_follow_power_meas1_power_meas_dqpu_lpf_p__i + 1] * _pv1_pv_plant_control_grid_follow_power_meas1_power_meas_dqpu_lpf_p__states[_pv1_pv_plant_control_grid_follow_power_meas1_power_meas_dqpu_lpf_p__i];
    }
    _pv1_pv_plant_control_grid_follow_power_meas1_power_meas_dqpu_lpf_p__a_sum += _pv1_pv_plant_control_grid_follow_power_meas1_power_meas_dqpu_lpf_p__states[0] * _pv1_pv_plant_control_grid_follow_power_meas1_power_meas_dqpu_lpf_p__a_coeff[1];
    _pv1_pv_plant_control_grid_follow_power_meas1_power_meas_dqpu_lpf_p__delay_line_in = _pv1_pv_plant_control_grid_follow_power_meas1_power_meas_dqpu_sum1__out - _pv1_pv_plant_control_grid_follow_power_meas1_power_meas_dqpu_lpf_p__a_sum;
    _pv1_pv_plant_control_grid_follow_power_meas1_power_meas_dqpu_lpf_p__b_sum += _pv1_pv_plant_control_grid_follow_power_meas1_power_meas_dqpu_lpf_p__b_coeff[0] * _pv1_pv_plant_control_grid_follow_power_meas1_power_meas_dqpu_lpf_p__delay_line_in;
    _pv1_pv_plant_control_grid_follow_power_meas1_power_meas_dqpu_lpf_p__out = _pv1_pv_plant_control_grid_follow_power_meas1_power_meas_dqpu_lpf_p__b_sum;
    // Generated from the component: PV1.PV Plant.Control.Grid_follow.Power_Meas1.Power_Meas_DQpu.LPF_Q
    _pv1_pv_plant_control_grid_follow_power_meas1_power_meas_dqpu_lpf_q__a_sum = 0.0f;
    _pv1_pv_plant_control_grid_follow_power_meas1_power_meas_dqpu_lpf_q__b_sum = 0.0f;
    _pv1_pv_plant_control_grid_follow_power_meas1_power_meas_dqpu_lpf_q__delay_line_in = 0.0f;
    for (_pv1_pv_plant_control_grid_follow_power_meas1_power_meas_dqpu_lpf_q__i = 0; _pv1_pv_plant_control_grid_follow_power_meas1_power_meas_dqpu_lpf_q__i < 1; _pv1_pv_plant_control_grid_follow_power_meas1_power_meas_dqpu_lpf_q__i++) {
        _pv1_pv_plant_control_grid_follow_power_meas1_power_meas_dqpu_lpf_q__b_sum += _pv1_pv_plant_control_grid_follow_power_meas1_power_meas_dqpu_lpf_q__b_coeff[_pv1_pv_plant_control_grid_follow_power_meas1_power_meas_dqpu_lpf_q__i + 1] * _pv1_pv_plant_control_grid_follow_power_meas1_power_meas_dqpu_lpf_q__states[_pv1_pv_plant_control_grid_follow_power_meas1_power_meas_dqpu_lpf_q__i];
    }
    _pv1_pv_plant_control_grid_follow_power_meas1_power_meas_dqpu_lpf_q__a_sum += _pv1_pv_plant_control_grid_follow_power_meas1_power_meas_dqpu_lpf_q__states[0] * _pv1_pv_plant_control_grid_follow_power_meas1_power_meas_dqpu_lpf_q__a_coeff[1];
    _pv1_pv_plant_control_grid_follow_power_meas1_power_meas_dqpu_lpf_q__delay_line_in = _pv1_pv_plant_control_grid_follow_power_meas1_power_meas_dqpu_sum2__out - _pv1_pv_plant_control_grid_follow_power_meas1_power_meas_dqpu_lpf_q__a_sum;
    _pv1_pv_plant_control_grid_follow_power_meas1_power_meas_dqpu_lpf_q__b_sum += _pv1_pv_plant_control_grid_follow_power_meas1_power_meas_dqpu_lpf_q__b_coeff[0] * _pv1_pv_plant_control_grid_follow_power_meas1_power_meas_dqpu_lpf_q__delay_line_in;
    _pv1_pv_plant_control_grid_follow_power_meas1_power_meas_dqpu_lpf_q__out = _pv1_pv_plant_control_grid_follow_power_meas1_power_meas_dqpu_lpf_q__b_sum;
    // Generated from the component: PV1.PV Plant.Control.Grid_follow.Current_ref.Limit3
    if (_pv1_pv_plant_control_grid_follow_current_ref_product7__out < 0.01) {
        _pv1_pv_plant_control_grid_follow_current_ref_limit3__out = 0.01;
    } else {
        _pv1_pv_plant_control_grid_follow_current_ref_limit3__out = _pv1_pv_plant_control_grid_follow_current_ref_product7__out;
    }
    // Generated from the component: PV1.PV Plant.Control.Grid_follow.Sum1
    _pv1_pv_plant_control_grid_follow_sum1__out = _pv1_pv_plant_control_grid_follow_signal_switch4__out - _pv1_pv_plant_control_pll_gain5__out;
    // Generated from the component: PV1.PV Plant.Control.PLL.PLL.PID.Gain1
    _pv1_pv_plant_control_pll_pll_pid_gain1__out = 714.2857 * _pv1_pv_plant_control_pll_pll_pid_sum8__out;
    // Generated from the component: PV1.P
    HIL_OutAO(0x4073, (float)_pv1_bus_split1__out10);
    // Generated from the component: PV1.Q
    HIL_OutAO(0x4092, (float)_pv1_bus_split1__out11);
    // Generated from the component: PV2.PV Plant.Control.Grid_follow.Power_Meas.Power_Meas_DQpu.LPF_P
    _pv2_pv_plant_control_grid_follow_power_meas_power_meas_dqpu_lpf_p__a_sum = 0.0f;
    _pv2_pv_plant_control_grid_follow_power_meas_power_meas_dqpu_lpf_p__b_sum = 0.0f;
    _pv2_pv_plant_control_grid_follow_power_meas_power_meas_dqpu_lpf_p__delay_line_in = 0.0f;
    for (_pv2_pv_plant_control_grid_follow_power_meas_power_meas_dqpu_lpf_p__i = 0; _pv2_pv_plant_control_grid_follow_power_meas_power_meas_dqpu_lpf_p__i < 1; _pv2_pv_plant_control_grid_follow_power_meas_power_meas_dqpu_lpf_p__i++) {
        _pv2_pv_plant_control_grid_follow_power_meas_power_meas_dqpu_lpf_p__b_sum += _pv2_pv_plant_control_grid_follow_power_meas_power_meas_dqpu_lpf_p__b_coeff[_pv2_pv_plant_control_grid_follow_power_meas_power_meas_dqpu_lpf_p__i + 1] * _pv2_pv_plant_control_grid_follow_power_meas_power_meas_dqpu_lpf_p__states[_pv2_pv_plant_control_grid_follow_power_meas_power_meas_dqpu_lpf_p__i];
    }
    _pv2_pv_plant_control_grid_follow_power_meas_power_meas_dqpu_lpf_p__a_sum += _pv2_pv_plant_control_grid_follow_power_meas_power_meas_dqpu_lpf_p__states[0] * _pv2_pv_plant_control_grid_follow_power_meas_power_meas_dqpu_lpf_p__a_coeff[1];
    _pv2_pv_plant_control_grid_follow_power_meas_power_meas_dqpu_lpf_p__delay_line_in = _pv2_pv_plant_control_grid_follow_power_meas_power_meas_dqpu_sum1__out - _pv2_pv_plant_control_grid_follow_power_meas_power_meas_dqpu_lpf_p__a_sum;
    _pv2_pv_plant_control_grid_follow_power_meas_power_meas_dqpu_lpf_p__b_sum += _pv2_pv_plant_control_grid_follow_power_meas_power_meas_dqpu_lpf_p__b_coeff[0] * _pv2_pv_plant_control_grid_follow_power_meas_power_meas_dqpu_lpf_p__delay_line_in;
    _pv2_pv_plant_control_grid_follow_power_meas_power_meas_dqpu_lpf_p__out = _pv2_pv_plant_control_grid_follow_power_meas_power_meas_dqpu_lpf_p__b_sum;
    // Generated from the component: PV2.PV Plant.Control.Grid_follow.Power_Meas.Power_Meas_DQpu.LPF_Q
    _pv2_pv_plant_control_grid_follow_power_meas_power_meas_dqpu_lpf_q__a_sum = 0.0f;
    _pv2_pv_plant_control_grid_follow_power_meas_power_meas_dqpu_lpf_q__b_sum = 0.0f;
    _pv2_pv_plant_control_grid_follow_power_meas_power_meas_dqpu_lpf_q__delay_line_in = 0.0f;
    for (_pv2_pv_plant_control_grid_follow_power_meas_power_meas_dqpu_lpf_q__i = 0; _pv2_pv_plant_control_grid_follow_power_meas_power_meas_dqpu_lpf_q__i < 1; _pv2_pv_plant_control_grid_follow_power_meas_power_meas_dqpu_lpf_q__i++) {
        _pv2_pv_plant_control_grid_follow_power_meas_power_meas_dqpu_lpf_q__b_sum += _pv2_pv_plant_control_grid_follow_power_meas_power_meas_dqpu_lpf_q__b_coeff[_pv2_pv_plant_control_grid_follow_power_meas_power_meas_dqpu_lpf_q__i + 1] * _pv2_pv_plant_control_grid_follow_power_meas_power_meas_dqpu_lpf_q__states[_pv2_pv_plant_control_grid_follow_power_meas_power_meas_dqpu_lpf_q__i];
    }
    _pv2_pv_plant_control_grid_follow_power_meas_power_meas_dqpu_lpf_q__a_sum += _pv2_pv_plant_control_grid_follow_power_meas_power_meas_dqpu_lpf_q__states[0] * _pv2_pv_plant_control_grid_follow_power_meas_power_meas_dqpu_lpf_q__a_coeff[1];
    _pv2_pv_plant_control_grid_follow_power_meas_power_meas_dqpu_lpf_q__delay_line_in = _pv2_pv_plant_control_grid_follow_power_meas_power_meas_dqpu_sum2__out - _pv2_pv_plant_control_grid_follow_power_meas_power_meas_dqpu_lpf_q__a_sum;
    _pv2_pv_plant_control_grid_follow_power_meas_power_meas_dqpu_lpf_q__b_sum += _pv2_pv_plant_control_grid_follow_power_meas_power_meas_dqpu_lpf_q__b_coeff[0] * _pv2_pv_plant_control_grid_follow_power_meas_power_meas_dqpu_lpf_q__delay_line_in;
    _pv2_pv_plant_control_grid_follow_power_meas_power_meas_dqpu_lpf_q__out = _pv2_pv_plant_control_grid_follow_power_meas_power_meas_dqpu_lpf_q__b_sum;
    // Generated from the component: PV2.PV Plant.Control.Grid_follow.Power_Meas1.Power_Meas_DQpu.LPF_P
    _pv2_pv_plant_control_grid_follow_power_meas1_power_meas_dqpu_lpf_p__a_sum = 0.0f;
    _pv2_pv_plant_control_grid_follow_power_meas1_power_meas_dqpu_lpf_p__b_sum = 0.0f;
    _pv2_pv_plant_control_grid_follow_power_meas1_power_meas_dqpu_lpf_p__delay_line_in = 0.0f;
    for (_pv2_pv_plant_control_grid_follow_power_meas1_power_meas_dqpu_lpf_p__i = 0; _pv2_pv_plant_control_grid_follow_power_meas1_power_meas_dqpu_lpf_p__i < 1; _pv2_pv_plant_control_grid_follow_power_meas1_power_meas_dqpu_lpf_p__i++) {
        _pv2_pv_plant_control_grid_follow_power_meas1_power_meas_dqpu_lpf_p__b_sum += _pv2_pv_plant_control_grid_follow_power_meas1_power_meas_dqpu_lpf_p__b_coeff[_pv2_pv_plant_control_grid_follow_power_meas1_power_meas_dqpu_lpf_p__i + 1] * _pv2_pv_plant_control_grid_follow_power_meas1_power_meas_dqpu_lpf_p__states[_pv2_pv_plant_control_grid_follow_power_meas1_power_meas_dqpu_lpf_p__i];
    }
    _pv2_pv_plant_control_grid_follow_power_meas1_power_meas_dqpu_lpf_p__a_sum += _pv2_pv_plant_control_grid_follow_power_meas1_power_meas_dqpu_lpf_p__states[0] * _pv2_pv_plant_control_grid_follow_power_meas1_power_meas_dqpu_lpf_p__a_coeff[1];
    _pv2_pv_plant_control_grid_follow_power_meas1_power_meas_dqpu_lpf_p__delay_line_in = _pv2_pv_plant_control_grid_follow_power_meas1_power_meas_dqpu_sum1__out - _pv2_pv_plant_control_grid_follow_power_meas1_power_meas_dqpu_lpf_p__a_sum;
    _pv2_pv_plant_control_grid_follow_power_meas1_power_meas_dqpu_lpf_p__b_sum += _pv2_pv_plant_control_grid_follow_power_meas1_power_meas_dqpu_lpf_p__b_coeff[0] * _pv2_pv_plant_control_grid_follow_power_meas1_power_meas_dqpu_lpf_p__delay_line_in;
    _pv2_pv_plant_control_grid_follow_power_meas1_power_meas_dqpu_lpf_p__out = _pv2_pv_plant_control_grid_follow_power_meas1_power_meas_dqpu_lpf_p__b_sum;
    // Generated from the component: PV2.PV Plant.Control.Grid_follow.Power_Meas1.Power_Meas_DQpu.LPF_Q
    _pv2_pv_plant_control_grid_follow_power_meas1_power_meas_dqpu_lpf_q__a_sum = 0.0f;
    _pv2_pv_plant_control_grid_follow_power_meas1_power_meas_dqpu_lpf_q__b_sum = 0.0f;
    _pv2_pv_plant_control_grid_follow_power_meas1_power_meas_dqpu_lpf_q__delay_line_in = 0.0f;
    for (_pv2_pv_plant_control_grid_follow_power_meas1_power_meas_dqpu_lpf_q__i = 0; _pv2_pv_plant_control_grid_follow_power_meas1_power_meas_dqpu_lpf_q__i < 1; _pv2_pv_plant_control_grid_follow_power_meas1_power_meas_dqpu_lpf_q__i++) {
        _pv2_pv_plant_control_grid_follow_power_meas1_power_meas_dqpu_lpf_q__b_sum += _pv2_pv_plant_control_grid_follow_power_meas1_power_meas_dqpu_lpf_q__b_coeff[_pv2_pv_plant_control_grid_follow_power_meas1_power_meas_dqpu_lpf_q__i + 1] * _pv2_pv_plant_control_grid_follow_power_meas1_power_meas_dqpu_lpf_q__states[_pv2_pv_plant_control_grid_follow_power_meas1_power_meas_dqpu_lpf_q__i];
    }
    _pv2_pv_plant_control_grid_follow_power_meas1_power_meas_dqpu_lpf_q__a_sum += _pv2_pv_plant_control_grid_follow_power_meas1_power_meas_dqpu_lpf_q__states[0] * _pv2_pv_plant_control_grid_follow_power_meas1_power_meas_dqpu_lpf_q__a_coeff[1];
    _pv2_pv_plant_control_grid_follow_power_meas1_power_meas_dqpu_lpf_q__delay_line_in = _pv2_pv_plant_control_grid_follow_power_meas1_power_meas_dqpu_sum2__out - _pv2_pv_plant_control_grid_follow_power_meas1_power_meas_dqpu_lpf_q__a_sum;
    _pv2_pv_plant_control_grid_follow_power_meas1_power_meas_dqpu_lpf_q__b_sum += _pv2_pv_plant_control_grid_follow_power_meas1_power_meas_dqpu_lpf_q__b_coeff[0] * _pv2_pv_plant_control_grid_follow_power_meas1_power_meas_dqpu_lpf_q__delay_line_in;
    _pv2_pv_plant_control_grid_follow_power_meas1_power_meas_dqpu_lpf_q__out = _pv2_pv_plant_control_grid_follow_power_meas1_power_meas_dqpu_lpf_q__b_sum;
    // Generated from the component: PV2.PV Plant.Control.Grid_follow.Current_ref.Limit3
    if (_pv2_pv_plant_control_grid_follow_current_ref_product7__out < 0.01) {
        _pv2_pv_plant_control_grid_follow_current_ref_limit3__out = 0.01;
    } else {
        _pv2_pv_plant_control_grid_follow_current_ref_limit3__out = _pv2_pv_plant_control_grid_follow_current_ref_product7__out;
    }
    // Generated from the component: PV2.PV Plant.Control.Grid_follow.Sum1
    _pv2_pv_plant_control_grid_follow_sum1__out = _pv2_pv_plant_control_grid_follow_signal_switch4__out - _pv2_pv_plant_control_pll_gain5__out;
    // Generated from the component: PV2.PV Plant.Control.PLL.PLL.PID.Gain1
    _pv2_pv_plant_control_pll_pll_pid_gain1__out = 714.2857 * _pv2_pv_plant_control_pll_pll_pid_sum8__out;
    // Generated from the component: PV2.P
    HIL_OutAO(0x4094, (float)_pv2_bus_split1__out10);
    // Generated from the component: PV2.Q
    HIL_OutAO(0x40b3, (float)_pv2_bus_split1__out11);
    // Generated from the component: ESS1.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.PID controller1
    _ess1_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__pi_reg_out_int = _ess1_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__integrator_state + 0.527690972222222 * _ess1_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum8__out;
    if (_ess1_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__pi_reg_out_int < -1.0) {
        _ess1_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__out = -1.0;
        _ess1_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__av_active = 1;
    } else if (_ess1_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__pi_reg_out_int > 1.0) {
        _ess1_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__out = 1.0;
        _ess1_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__av_active = 1;
    } else {
        _ess1_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__out = _ess1_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__pi_reg_out_int;
        _ess1_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__av_active = 0;
    }
    // Generated from the component: ESS1.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.id_err
    HIL_OutAO(0x4029, (float)_ess1_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum8__out);
    // Generated from the component: ESS1.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.PID controller2
    _ess1_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__pi_reg_out_int = _ess1_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__integrator_state + 0.527690972222222 * _ess1_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum9__out;
    if (_ess1_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__pi_reg_out_int < -1.0) {
        _ess1_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__out = -1.0;
        _ess1_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__av_active = 1;
    } else if (_ess1_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__pi_reg_out_int > 1.0) {
        _ess1_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__out = 1.0;
        _ess1_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__av_active = 1;
    } else {
        _ess1_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__out = _ess1_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__pi_reg_out_int;
        _ess1_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__av_active = 0;
    }
    // Generated from the component: ESS1.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.iq_err
    HIL_OutAO(0x402a, (float)_ess1_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum9__out);
    // Generated from the component: ESS2.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.PID controller1
    _ess2_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__pi_reg_out_int = _ess2_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__integrator_state + 0.527690972222222 * _ess2_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum8__out;
    if (_ess2_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__pi_reg_out_int < -1.0) {
        _ess2_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__out = -1.0;
        _ess2_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__av_active = 1;
    } else if (_ess2_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__pi_reg_out_int > 1.0) {
        _ess2_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__out = 1.0;
        _ess2_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__av_active = 1;
    } else {
        _ess2_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__out = _ess2_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__pi_reg_out_int;
        _ess2_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__av_active = 0;
    }
    // Generated from the component: ESS2.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.id_err
    HIL_OutAO(0x405e, (float)_ess2_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum8__out);
    // Generated from the component: ESS2.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.PID controller2
    _ess2_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__pi_reg_out_int = _ess2_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__integrator_state + 0.527690972222222 * _ess2_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum9__out;
    if (_ess2_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__pi_reg_out_int < -1.0) {
        _ess2_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__out = -1.0;
        _ess2_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__av_active = 1;
    } else if (_ess2_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__pi_reg_out_int > 1.0) {
        _ess2_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__out = 1.0;
        _ess2_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__av_active = 1;
    } else {
        _ess2_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__out = _ess2_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__pi_reg_out_int;
        _ess2_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__av_active = 0;
    }
    // Generated from the component: ESS2.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.iq_err
    HIL_OutAO(0x405f, (float)_ess2_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum9__out);
    // Generated from the component: PV1.PV Plant.Control.Grid_follow.Current_ref.Product1
    _pv1_pv_plant_control_grid_follow_current_ref_product1__out = (_pv1_pv_plant_control_grid_follow_current_ref_sum3__out) * 1.0 / (_pv1_pv_plant_control_grid_follow_current_ref_limit3__out);
    // Generated from the component: PV1.PV Plant.Control.Grid_follow.Current_ref.Product2
    _pv1_pv_plant_control_grid_follow_current_ref_product2__out = (_pv1_pv_plant_control_grid_follow_current_ref_sum4__out) * 1.0 / (_pv1_pv_plant_control_grid_follow_current_ref_limit3__out);
    // Generated from the component: PV1.PV Plant.Control.Grid_follow.PI_Vt.Ki
    _pv1_pv_plant_control_grid_follow_pi_vt_ki__out = 0.7493 * _pv1_pv_plant_control_grid_follow_sum1__out;
    // Generated from the component: PV1.PV Plant.Control.Grid_follow.PI_Vt.Kp
    _pv1_pv_plant_control_grid_follow_pi_vt_kp__out = 0.0033 * _pv1_pv_plant_control_grid_follow_sum1__out;
    // Generated from the component: PV1.PV Plant.Control.PLL.PLL.PID.Sum5
    _pv1_pv_plant_control_pll_pll_pid_sum5__out = _pv1_pv_plant_control_pll_pll_pid_kp__out + _pv1_pv_plant_control_pll_pll_pid_gain1__out + _pv1_pv_plant_control_pll_pll_pid_integrator1__out;
    // Generated from the component: PV2.PV Plant.Control.Grid_follow.Current_ref.Product1
    _pv2_pv_plant_control_grid_follow_current_ref_product1__out = (_pv2_pv_plant_control_grid_follow_current_ref_sum3__out) * 1.0 / (_pv2_pv_plant_control_grid_follow_current_ref_limit3__out);
    // Generated from the component: PV2.PV Plant.Control.Grid_follow.Current_ref.Product2
    _pv2_pv_plant_control_grid_follow_current_ref_product2__out = (_pv2_pv_plant_control_grid_follow_current_ref_sum4__out) * 1.0 / (_pv2_pv_plant_control_grid_follow_current_ref_limit3__out);
    // Generated from the component: PV2.PV Plant.Control.Grid_follow.PI_Vt.Ki
    _pv2_pv_plant_control_grid_follow_pi_vt_ki__out = 0.7493 * _pv2_pv_plant_control_grid_follow_sum1__out;
    // Generated from the component: PV2.PV Plant.Control.Grid_follow.PI_Vt.Kp
    _pv2_pv_plant_control_grid_follow_pi_vt_kp__out = 0.0033 * _pv2_pv_plant_control_grid_follow_sum1__out;
    // Generated from the component: PV2.PV Plant.Control.PLL.PLL.PID.Sum5
    _pv2_pv_plant_control_pll_pll_pid_sum5__out = _pv2_pv_plant_control_pll_pll_pid_kp__out + _pv2_pv_plant_control_pll_pll_pid_gain1__out + _pv2_pv_plant_control_pll_pll_pid_integrator1__out;
    // Generated from the component: ESS1.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Sum3
    _ess1_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum3__out = _ess1_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__out + _ess1_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum5__out;
    // Generated from the component: ESS1.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Sum7
    _ess1_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum7__out = _ess1_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__out + _ess1_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum6__out;
    // Generated from the component: ESS2.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Sum3
    _ess2_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum3__out = _ess2_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__out + _ess2_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum5__out;
    // Generated from the component: ESS2.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Sum7
    _ess2_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum7__out = _ess2_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__out + _ess2_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum6__out;
    // Generated from the component: PV1.PV Plant.Control.Grid_follow.ControlSignal_Calculation.Sum2
    _pv1_pv_plant_control_grid_follow_controlsignal_calculation_sum2__out =  - _pv1_pv_plant_control_grid_follow_current_abc_to_dq_gain2__out + _pv1_pv_plant_control_grid_follow_current_ref_product1__out;
    // Generated from the component: PV1.PV Plant.Control.Grid_follow.Iq_ref
    HIL_OutAO(0x4076, (float)_pv1_pv_plant_control_grid_follow_current_ref_product1__out);
    // Generated from the component: PV1.PV Plant.Control.Grid_follow.ControlSignal_Calculation.Sum1
    _pv1_pv_plant_control_grid_follow_controlsignal_calculation_sum1__out =  - _pv1_pv_plant_control_grid_follow_current_abc_to_dq_gain1__out + _pv1_pv_plant_control_grid_follow_current_ref_product2__out;
    // Generated from the component: PV1.PV Plant.Control.Grid_follow.Id_ref
    HIL_OutAO(0x4075, (float)_pv1_pv_plant_control_grid_follow_current_ref_product2__out);
    // Generated from the component: PV1.PV Plant.Control.Grid_follow.PI_Vt.Sum5
    _pv1_pv_plant_control_grid_follow_pi_vt_sum5__out = _pv1_pv_plant_control_grid_follow_pi_vt_kp__out + _pv1_pv_plant_control_grid_follow_pi_vt_integrator1__out;
    // Generated from the component: PV1.PV Plant.Control.PLL.PLL.PID.Limit1
    if (_pv1_pv_plant_control_pll_pll_pid_sum5__out > 527.7875658030853) {
        _pv1_pv_plant_control_pll_pll_pid_limit1__out = 527.7875658030853;
    } else if (_pv1_pv_plant_control_pll_pll_pid_sum5__out < 0.0) {
        _pv1_pv_plant_control_pll_pll_pid_limit1__out = 0.0;
    } else {
        _pv1_pv_plant_control_pll_pll_pid_limit1__out = _pv1_pv_plant_control_pll_pll_pid_sum5__out;
    }
    // Generated from the component: PV2.PV Plant.Control.Grid_follow.ControlSignal_Calculation.Sum2
    _pv2_pv_plant_control_grid_follow_controlsignal_calculation_sum2__out =  - _pv2_pv_plant_control_grid_follow_current_abc_to_dq_gain2__out + _pv2_pv_plant_control_grid_follow_current_ref_product1__out;
    // Generated from the component: PV2.PV Plant.Control.Grid_follow.Iq_ref
    HIL_OutAO(0x4097, (float)_pv2_pv_plant_control_grid_follow_current_ref_product1__out);
    // Generated from the component: PV2.PV Plant.Control.Grid_follow.ControlSignal_Calculation.Sum1
    _pv2_pv_plant_control_grid_follow_controlsignal_calculation_sum1__out =  - _pv2_pv_plant_control_grid_follow_current_abc_to_dq_gain1__out + _pv2_pv_plant_control_grid_follow_current_ref_product2__out;
    // Generated from the component: PV2.PV Plant.Control.Grid_follow.Id_ref
    HIL_OutAO(0x4096, (float)_pv2_pv_plant_control_grid_follow_current_ref_product2__out);
    // Generated from the component: PV2.PV Plant.Control.Grid_follow.PI_Vt.Sum5
    _pv2_pv_plant_control_grid_follow_pi_vt_sum5__out = _pv2_pv_plant_control_grid_follow_pi_vt_kp__out + _pv2_pv_plant_control_grid_follow_pi_vt_integrator1__out;
    // Generated from the component: PV2.PV Plant.Control.PLL.PLL.PID.Limit1
    if (_pv2_pv_plant_control_pll_pll_pid_sum5__out > 527.7875658030853) {
        _pv2_pv_plant_control_pll_pll_pid_limit1__out = 527.7875658030853;
    } else if (_pv2_pv_plant_control_pll_pll_pid_sum5__out < 0.0) {
        _pv2_pv_plant_control_pll_pll_pid_limit1__out = 0.0;
    } else {
        _pv2_pv_plant_control_pll_pll_pid_limit1__out = _pv2_pv_plant_control_pll_pll_pid_sum5__out;
    }
    // Generated from the component: ESS1.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Product5
    _ess1_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_product5__out = (_ess1_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum3__out) * 1.0 / (_ess1_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_gain5__out);
    // Generated from the component: ESS1.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Product6
    _ess1_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_product6__out = (_ess1_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum7__out) * 1.0 / (_ess1_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_gain5__out);
    // Generated from the component: ESS2.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Product5
    _ess2_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_product5__out = (_ess2_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum3__out) * 1.0 / (_ess2_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_gain5__out);
    // Generated from the component: ESS2.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Product6
    _ess2_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_product6__out = (_ess2_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum7__out) * 1.0 / (_ess2_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_gain5__out);
    // Generated from the component: PV1.PV Plant.Control.Grid_follow.ControlSignal_Calculation.PI_q.Ki
    _pv1_pv_plant_control_grid_follow_controlsignal_calculation_pi_q_ki__out = 4.0 * _pv1_pv_plant_control_grid_follow_controlsignal_calculation_sum2__out;
    // Generated from the component: PV1.PV Plant.Control.Grid_follow.ControlSignal_Calculation.PI_q.Kp
    _pv1_pv_plant_control_grid_follow_controlsignal_calculation_pi_q_kp__out = 0.6079 * _pv1_pv_plant_control_grid_follow_controlsignal_calculation_sum2__out;
    // Generated from the component: PV1.PV Plant.Control.Grid_follow.ControlSignal_Calculation.PI_d.Ki
    _pv1_pv_plant_control_grid_follow_controlsignal_calculation_pi_d_ki__out = 4.0 * _pv1_pv_plant_control_grid_follow_controlsignal_calculation_sum1__out;
    // Generated from the component: PV1.PV Plant.Control.Grid_follow.ControlSignal_Calculation.PI_d.Kp
    _pv1_pv_plant_control_grid_follow_controlsignal_calculation_pi_d_kp__out = 0.6079 * _pv1_pv_plant_control_grid_follow_controlsignal_calculation_sum1__out;
    // Generated from the component: PV1.PV Plant.Control.Grid_follow.PI_Vt.Limit1
    if (_pv1_pv_plant_control_grid_follow_pi_vt_sum5__out > 4.0) {
        _pv1_pv_plant_control_grid_follow_pi_vt_limit1__out = 4.0;
    } else if (_pv1_pv_plant_control_grid_follow_pi_vt_sum5__out < -4.0) {
        _pv1_pv_plant_control_grid_follow_pi_vt_limit1__out = -4.0;
    } else {
        _pv1_pv_plant_control_grid_follow_pi_vt_limit1__out = _pv1_pv_plant_control_grid_follow_pi_vt_sum5__out;
    }
    // Generated from the component: PV1.PV Plant.Control.PLL.PLL.PID.Sum6
    _pv1_pv_plant_control_pll_pll_pid_sum6__out =  - _pv1_pv_plant_control_pll_pll_pid_sum5__out + _pv1_pv_plant_control_pll_pll_pid_limit1__out;
    // Generated from the component: PV1.PV Plant.Control.PLL.PLL.Rate Limiter1
    if (_pv1_pv_plant_control_pll_pll_rate_limiter1__first_step) {
        _pv1_pv_plant_control_pll_pll_rate_limiter1__out = _pv1_pv_plant_control_pll_pll_pid_limit1__out;
    } else {
        _pv1_pv_plant_control_pll_pll_rate_limiter1__out = _pv1_pv_plant_control_pll_pll_pid_limit1__out;
        _pv1_pv_plant_control_pll_pll_rate_limiter1__in_rate = _pv1_pv_plant_control_pll_pll_pid_limit1__out - _pv1_pv_plant_control_pll_pll_rate_limiter1__prev_out;
        if (_pv1_pv_plant_control_pll_pll_rate_limiter1__in_rate > 0.03769911184307752) {
            _pv1_pv_plant_control_pll_pll_rate_limiter1__out = _pv1_pv_plant_control_pll_pll_rate_limiter1__prev_out + (0.03769911184307752);
        }
        if (_pv1_pv_plant_control_pll_pll_rate_limiter1__in_rate < -0.03769911184307752) {
            _pv1_pv_plant_control_pll_pll_rate_limiter1__out = _pv1_pv_plant_control_pll_pll_rate_limiter1__prev_out + (-0.03769911184307752);
        }
    }
    // Generated from the component: PV1.PV Plant.Control.PLL.PLL.integrator
    _pv1_pv_plant_control_pll_pll_integrator__in = _pv1_pv_plant_control_pll_pll_pid_limit1__out;
    _pv1_pv_plant_control_pll_pll_integrator__out += 2e-05 * _pv1_pv_plant_control_pll_pll_integrator__in;
    if (_pv1_pv_plant_control_pll_pll_integrator__in >= 0.0) {
        if (_pv1_pv_plant_control_pll_pll_integrator__out >= 6.283185307179586) {
            _pv1_pv_plant_control_pll_pll_integrator__out -= 6.283185307179586;
        }
    }
    else {
        if (_pv1_pv_plant_control_pll_pll_integrator__out <= -6.283185307179586) {
            _pv1_pv_plant_control_pll_pll_integrator__out += 6.283185307179586;
        }
    }
    // Generated from the component: PV2.PV Plant.Control.Grid_follow.ControlSignal_Calculation.PI_q.Ki
    _pv2_pv_plant_control_grid_follow_controlsignal_calculation_pi_q_ki__out = 4.0 * _pv2_pv_plant_control_grid_follow_controlsignal_calculation_sum2__out;
    // Generated from the component: PV2.PV Plant.Control.Grid_follow.ControlSignal_Calculation.PI_q.Kp
    _pv2_pv_plant_control_grid_follow_controlsignal_calculation_pi_q_kp__out = 0.6079 * _pv2_pv_plant_control_grid_follow_controlsignal_calculation_sum2__out;
    // Generated from the component: PV2.PV Plant.Control.Grid_follow.ControlSignal_Calculation.PI_d.Ki
    _pv2_pv_plant_control_grid_follow_controlsignal_calculation_pi_d_ki__out = 4.0 * _pv2_pv_plant_control_grid_follow_controlsignal_calculation_sum1__out;
    // Generated from the component: PV2.PV Plant.Control.Grid_follow.ControlSignal_Calculation.PI_d.Kp
    _pv2_pv_plant_control_grid_follow_controlsignal_calculation_pi_d_kp__out = 0.6079 * _pv2_pv_plant_control_grid_follow_controlsignal_calculation_sum1__out;
    // Generated from the component: PV2.PV Plant.Control.Grid_follow.PI_Vt.Limit1
    if (_pv2_pv_plant_control_grid_follow_pi_vt_sum5__out > 4.0) {
        _pv2_pv_plant_control_grid_follow_pi_vt_limit1__out = 4.0;
    } else if (_pv2_pv_plant_control_grid_follow_pi_vt_sum5__out < -4.0) {
        _pv2_pv_plant_control_grid_follow_pi_vt_limit1__out = -4.0;
    } else {
        _pv2_pv_plant_control_grid_follow_pi_vt_limit1__out = _pv2_pv_plant_control_grid_follow_pi_vt_sum5__out;
    }
    // Generated from the component: PV2.PV Plant.Control.PLL.PLL.PID.Sum6
    _pv2_pv_plant_control_pll_pll_pid_sum6__out =  - _pv2_pv_plant_control_pll_pll_pid_sum5__out + _pv2_pv_plant_control_pll_pll_pid_limit1__out;
    // Generated from the component: PV2.PV Plant.Control.PLL.PLL.Rate Limiter1
    if (_pv2_pv_plant_control_pll_pll_rate_limiter1__first_step) {
        _pv2_pv_plant_control_pll_pll_rate_limiter1__out = _pv2_pv_plant_control_pll_pll_pid_limit1__out;
    } else {
        _pv2_pv_plant_control_pll_pll_rate_limiter1__out = _pv2_pv_plant_control_pll_pll_pid_limit1__out;
        _pv2_pv_plant_control_pll_pll_rate_limiter1__in_rate = _pv2_pv_plant_control_pll_pll_pid_limit1__out - _pv2_pv_plant_control_pll_pll_rate_limiter1__prev_out;
        if (_pv2_pv_plant_control_pll_pll_rate_limiter1__in_rate > 0.03769911184307752) {
            _pv2_pv_plant_control_pll_pll_rate_limiter1__out = _pv2_pv_plant_control_pll_pll_rate_limiter1__prev_out + (0.03769911184307752);
        }
        if (_pv2_pv_plant_control_pll_pll_rate_limiter1__in_rate < -0.03769911184307752) {
            _pv2_pv_plant_control_pll_pll_rate_limiter1__out = _pv2_pv_plant_control_pll_pll_rate_limiter1__prev_out + (-0.03769911184307752);
        }
    }
    // Generated from the component: PV2.PV Plant.Control.PLL.PLL.integrator
    _pv2_pv_plant_control_pll_pll_integrator__in = _pv2_pv_plant_control_pll_pll_pid_limit1__out;
    _pv2_pv_plant_control_pll_pll_integrator__out += 2e-05 * _pv2_pv_plant_control_pll_pll_integrator__in;
    if (_pv2_pv_plant_control_pll_pll_integrator__in >= 0.0) {
        if (_pv2_pv_plant_control_pll_pll_integrator__out >= 6.283185307179586) {
            _pv2_pv_plant_control_pll_pll_integrator__out -= 6.283185307179586;
        }
    }
    else {
        if (_pv2_pv_plant_control_pll_pll_integrator__out <= -6.283185307179586) {
            _pv2_pv_plant_control_pll_pll_integrator__out += 6.283185307179586;
        }
    }
    // Generated from the component: ESS1.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Limit1
    if (_ess1_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_product5__out > 1.0) {
        _ess1_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_limit1__out = 1.0;
    } else if (_ess1_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_product5__out < -1.0) {
        _ess1_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_limit1__out = -1.0;
    } else {
        _ess1_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_limit1__out = _ess1_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_product5__out;
    }
    // Generated from the component: ESS1.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Limit2
    if (_ess1_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_product6__out > 1.0) {
        _ess1_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_limit2__out = 1.0;
    } else if (_ess1_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_product6__out < -1.0) {
        _ess1_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_limit2__out = -1.0;
    } else {
        _ess1_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_limit2__out = _ess1_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_product6__out;
    }
    // Generated from the component: ESS2.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Limit1
    if (_ess2_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_product5__out > 1.0) {
        _ess2_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_limit1__out = 1.0;
    } else if (_ess2_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_product5__out < -1.0) {
        _ess2_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_limit1__out = -1.0;
    } else {
        _ess2_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_limit1__out = _ess2_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_product5__out;
    }
    // Generated from the component: ESS2.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Limit2
    if (_ess2_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_product6__out > 1.0) {
        _ess2_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_limit2__out = 1.0;
    } else if (_ess2_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_product6__out < -1.0) {
        _ess2_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_limit2__out = -1.0;
    } else {
        _ess2_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_limit2__out = _ess2_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_product6__out;
    }
    // Generated from the component: PV1.PV Plant.Control.Grid_follow.ControlSignal_Calculation.PI_q.Sum5
    _pv1_pv_plant_control_grid_follow_controlsignal_calculation_pi_q_sum5__out = _pv1_pv_plant_control_grid_follow_controlsignal_calculation_pi_q_kp__out + _pv1_pv_plant_control_grid_follow_controlsignal_calculation_pi_q_integrator1__out;
    // Generated from the component: PV1.PV Plant.Control.Grid_follow.ControlSignal_Calculation.PI_d.Sum5
    _pv1_pv_plant_control_grid_follow_controlsignal_calculation_pi_d_sum5__out = _pv1_pv_plant_control_grid_follow_controlsignal_calculation_pi_d_kp__out + _pv1_pv_plant_control_grid_follow_controlsignal_calculation_pi_d_integrator1__out;
    // Generated from the component: PV1.PV Plant.Control.Grid_follow.PI_Vt.Sum6
    _pv1_pv_plant_control_grid_follow_pi_vt_sum6__out =  - _pv1_pv_plant_control_grid_follow_pi_vt_sum5__out + _pv1_pv_plant_control_grid_follow_pi_vt_limit1__out;
    // Generated from the component: PV1.PV Plant.Control.Grid_follow.Signal switch1
    _pv1_pv_plant_control_grid_follow_signal_switch1__out = (_pv1_pv_plant_input_bus_split2__out4 > 0.5f) ? _pv1_pv_plant_control_grid_follow_signal_switch3__out : _pv1_pv_plant_control_grid_follow_pi_vt_limit1__out;
    // Generated from the component: PV1.PV Plant.Control.PLL.PLL.PID.Kb
    _pv1_pv_plant_control_pll_pll_pid_kb__out = 1.0 * _pv1_pv_plant_control_pll_pll_pid_sum6__out;
    // Generated from the component: PV1.PV Plant.Control.PLL.PLL.LPF.LPF
    _pv1_pv_plant_control_pll_pll_lpf_lpf__a_sum = 0.0f;
    _pv1_pv_plant_control_pll_pll_lpf_lpf__b_sum = 0.0f;
    _pv1_pv_plant_control_pll_pll_lpf_lpf__delay_line_in = 0.0f;
    for (_pv1_pv_plant_control_pll_pll_lpf_lpf__i = 0; _pv1_pv_plant_control_pll_pll_lpf_lpf__i < 2; _pv1_pv_plant_control_pll_pll_lpf_lpf__i++) {
        _pv1_pv_plant_control_pll_pll_lpf_lpf__b_sum += _pv1_pv_plant_control_pll_pll_lpf_lpf__b_coeff[_pv1_pv_plant_control_pll_pll_lpf_lpf__i] * _pv1_pv_plant_control_pll_pll_lpf_lpf__states[_pv1_pv_plant_control_pll_pll_lpf_lpf__i + 0];
    }
    for (_pv1_pv_plant_control_pll_pll_lpf_lpf__i = 1; _pv1_pv_plant_control_pll_pll_lpf_lpf__i > 0; _pv1_pv_plant_control_pll_pll_lpf_lpf__i--) {
        _pv1_pv_plant_control_pll_pll_lpf_lpf__a_sum += _pv1_pv_plant_control_pll_pll_lpf_lpf__a_coeff[_pv1_pv_plant_control_pll_pll_lpf_lpf__i + 1] * _pv1_pv_plant_control_pll_pll_lpf_lpf__states[_pv1_pv_plant_control_pll_pll_lpf_lpf__i];
    }
    _pv1_pv_plant_control_pll_pll_lpf_lpf__a_sum += _pv1_pv_plant_control_pll_pll_lpf_lpf__states[0] * _pv1_pv_plant_control_pll_pll_lpf_lpf__a_coeff[1];
    _pv1_pv_plant_control_pll_pll_lpf_lpf__delay_line_in = _pv1_pv_plant_control_pll_pll_rate_limiter1__out - _pv1_pv_plant_control_pll_pll_lpf_lpf__a_sum;
    _pv1_pv_plant_control_pll_pll_lpf_lpf__out = _pv1_pv_plant_control_pll_pll_lpf_lpf__b_sum;
    // Generated from the component: PV2.PV Plant.Control.Grid_follow.ControlSignal_Calculation.PI_q.Sum5
    _pv2_pv_plant_control_grid_follow_controlsignal_calculation_pi_q_sum5__out = _pv2_pv_plant_control_grid_follow_controlsignal_calculation_pi_q_kp__out + _pv2_pv_plant_control_grid_follow_controlsignal_calculation_pi_q_integrator1__out;
    // Generated from the component: PV2.PV Plant.Control.Grid_follow.ControlSignal_Calculation.PI_d.Sum5
    _pv2_pv_plant_control_grid_follow_controlsignal_calculation_pi_d_sum5__out = _pv2_pv_plant_control_grid_follow_controlsignal_calculation_pi_d_kp__out + _pv2_pv_plant_control_grid_follow_controlsignal_calculation_pi_d_integrator1__out;
    // Generated from the component: PV2.PV Plant.Control.Grid_follow.PI_Vt.Sum6
    _pv2_pv_plant_control_grid_follow_pi_vt_sum6__out =  - _pv2_pv_plant_control_grid_follow_pi_vt_sum5__out + _pv2_pv_plant_control_grid_follow_pi_vt_limit1__out;
    // Generated from the component: PV2.PV Plant.Control.Grid_follow.Signal switch1
    _pv2_pv_plant_control_grid_follow_signal_switch1__out = (_pv2_pv_plant_input_bus_split2__out4 > 0.5f) ? _pv2_pv_plant_control_grid_follow_signal_switch3__out : _pv2_pv_plant_control_grid_follow_pi_vt_limit1__out;
    // Generated from the component: PV2.PV Plant.Control.PLL.PLL.PID.Kb
    _pv2_pv_plant_control_pll_pll_pid_kb__out = 1.0 * _pv2_pv_plant_control_pll_pll_pid_sum6__out;
    // Generated from the component: PV2.PV Plant.Control.PLL.PLL.LPF.LPF
    _pv2_pv_plant_control_pll_pll_lpf_lpf__a_sum = 0.0f;
    _pv2_pv_plant_control_pll_pll_lpf_lpf__b_sum = 0.0f;
    _pv2_pv_plant_control_pll_pll_lpf_lpf__delay_line_in = 0.0f;
    for (_pv2_pv_plant_control_pll_pll_lpf_lpf__i = 0; _pv2_pv_plant_control_pll_pll_lpf_lpf__i < 2; _pv2_pv_plant_control_pll_pll_lpf_lpf__i++) {
        _pv2_pv_plant_control_pll_pll_lpf_lpf__b_sum += _pv2_pv_plant_control_pll_pll_lpf_lpf__b_coeff[_pv2_pv_plant_control_pll_pll_lpf_lpf__i] * _pv2_pv_plant_control_pll_pll_lpf_lpf__states[_pv2_pv_plant_control_pll_pll_lpf_lpf__i + 0];
    }
    for (_pv2_pv_plant_control_pll_pll_lpf_lpf__i = 1; _pv2_pv_plant_control_pll_pll_lpf_lpf__i > 0; _pv2_pv_plant_control_pll_pll_lpf_lpf__i--) {
        _pv2_pv_plant_control_pll_pll_lpf_lpf__a_sum += _pv2_pv_plant_control_pll_pll_lpf_lpf__a_coeff[_pv2_pv_plant_control_pll_pll_lpf_lpf__i + 1] * _pv2_pv_plant_control_pll_pll_lpf_lpf__states[_pv2_pv_plant_control_pll_pll_lpf_lpf__i];
    }
    _pv2_pv_plant_control_pll_pll_lpf_lpf__a_sum += _pv2_pv_plant_control_pll_pll_lpf_lpf__states[0] * _pv2_pv_plant_control_pll_pll_lpf_lpf__a_coeff[1];
    _pv2_pv_plant_control_pll_pll_lpf_lpf__delay_line_in = _pv2_pv_plant_control_pll_pll_rate_limiter1__out - _pv2_pv_plant_control_pll_pll_lpf_lpf__a_sum;
    _pv2_pv_plant_control_pll_pll_lpf_lpf__out = _pv2_pv_plant_control_pll_pll_lpf_lpf__b_sum;
    // Generated from the component: ESS1.Controller.Outer Voltage Loop + Inner Current Loop.Gain5
    _ess1_controller_outer_voltage_loop___inner_current_loop_gain5__out = 391.91835884530855 * _ess1_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_limit1__out;
    // Generated from the component: ESS1.Controller.Outer Voltage Loop + Inner Current Loop.Gain6
    _ess1_controller_outer_voltage_loop___inner_current_loop_gain6__out = 391.91835884530855 * _ess1_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_limit2__out;
    // Generated from the component: ESS2.Controller.Outer Voltage Loop + Inner Current Loop.Gain5
    _ess2_controller_outer_voltage_loop___inner_current_loop_gain5__out = 391.91835884530855 * _ess2_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_limit1__out;
    // Generated from the component: ESS2.Controller.Outer Voltage Loop + Inner Current Loop.Gain6
    _ess2_controller_outer_voltage_loop___inner_current_loop_gain6__out = 391.91835884530855 * _ess2_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_limit2__out;
    // Generated from the component: PV1.PV Plant.Control.Grid_follow.ControlSignal_Calculation.PI_q.Limit1
    if (_pv1_pv_plant_control_grid_follow_controlsignal_calculation_pi_q_sum5__out > 10.0) {
        _pv1_pv_plant_control_grid_follow_controlsignal_calculation_pi_q_limit1__out = 10.0;
    } else if (_pv1_pv_plant_control_grid_follow_controlsignal_calculation_pi_q_sum5__out < -10.0) {
        _pv1_pv_plant_control_grid_follow_controlsignal_calculation_pi_q_limit1__out = -10.0;
    } else {
        _pv1_pv_plant_control_grid_follow_controlsignal_calculation_pi_q_limit1__out = _pv1_pv_plant_control_grid_follow_controlsignal_calculation_pi_q_sum5__out;
    }
    // Generated from the component: PV1.PV Plant.Control.Grid_follow.ControlSignal_Calculation.PI_d.Limit1
    if (_pv1_pv_plant_control_grid_follow_controlsignal_calculation_pi_d_sum5__out > 10.0) {
        _pv1_pv_plant_control_grid_follow_controlsignal_calculation_pi_d_limit1__out = 10.0;
    } else if (_pv1_pv_plant_control_grid_follow_controlsignal_calculation_pi_d_sum5__out < -10.0) {
        _pv1_pv_plant_control_grid_follow_controlsignal_calculation_pi_d_limit1__out = -10.0;
    } else {
        _pv1_pv_plant_control_grid_follow_controlsignal_calculation_pi_d_limit1__out = _pv1_pv_plant_control_grid_follow_controlsignal_calculation_pi_d_sum5__out;
    }
    // Generated from the component: PV1.PV Plant.Control.Grid_follow.PI_Vt.Kb
    _pv1_pv_plant_control_grid_follow_pi_vt_kb__out = 1000.0 * _pv1_pv_plant_control_grid_follow_pi_vt_sum6__out;
    // Generated from the component: PV1.PV Plant.Control.Grid_follow.Limit_PQref.priority_PQlim.PQ limiting with priority
    _pv1_pv_plant_control_grid_follow_limit_pqref_priority_pqlim_pq_limiting_with_priority__Pref = _pv1_pv_plant_control_grid_follow_signal_switch2__out;
    _pv1_pv_plant_control_grid_follow_limit_pqref_priority_pqlim_pq_limiting_with_priority__Qref = _pv1_pv_plant_control_grid_follow_signal_switch1__out;
    _pv1_pv_plant_control_grid_follow_limit_pqref_priority_pqlim_pq_limiting_with_priority__Smax = _pv1_pv_plant_control_grid_follow_constant3__out;
    _pv1_pv_plant_control_grid_follow_limit_pqref_priority_pqlim_pq_limiting_with_priority__Sref = sqrt(_pv1_pv_plant_control_grid_follow_limit_pqref_priority_pqlim_pq_limiting_with_priority__Pref * _pv1_pv_plant_control_grid_follow_limit_pqref_priority_pqlim_pq_limiting_with_priority__Pref + _pv1_pv_plant_control_grid_follow_limit_pqref_priority_pqlim_pq_limiting_with_priority__Qref * _pv1_pv_plant_control_grid_follow_limit_pqref_priority_pqlim_pq_limiting_with_priority__Qref);
    if (_pv1_pv_plant_control_grid_follow_limit_pqref_priority_pqlim_pq_limiting_with_priority__Qref >= 0)_pv1_pv_plant_control_grid_follow_limit_pqref_priority_pqlim_pq_limiting_with_priority__signQ = 1;
    else _pv1_pv_plant_control_grid_follow_limit_pqref_priority_pqlim_pq_limiting_with_priority__signQ = -1;
    if (_pv1_pv_plant_control_grid_follow_limit_pqref_priority_pqlim_pq_limiting_with_priority__Pref >= 0)_pv1_pv_plant_control_grid_follow_limit_pqref_priority_pqlim_pq_limiting_with_priority__signP = 1;
    else _pv1_pv_plant_control_grid_follow_limit_pqref_priority_pqlim_pq_limiting_with_priority__signP = -1;
    if (_pv1_pv_plant_control_grid_follow_limit_pqref_priority_pqlim_pq_limiting_with_priority__Sref <= _pv1_pv_plant_control_grid_follow_limit_pqref_priority_pqlim_pq_limiting_with_priority__Smax) {
        _pv1_pv_plant_control_grid_follow_limit_pqref_priority_pqlim_pq_limiting_with_priority__S = _pv1_pv_plant_control_grid_follow_limit_pqref_priority_pqlim_pq_limiting_with_priority__Sref;
        _pv1_pv_plant_control_grid_follow_limit_pqref_priority_pqlim_pq_limiting_with_priority__P = _pv1_pv_plant_control_grid_follow_limit_pqref_priority_pqlim_pq_limiting_with_priority__Pref;
        _pv1_pv_plant_control_grid_follow_limit_pqref_priority_pqlim_pq_limiting_with_priority__Q = _pv1_pv_plant_control_grid_follow_limit_pqref_priority_pqlim_pq_limiting_with_priority__Qref;
    }
    else {
        _pv1_pv_plant_control_grid_follow_limit_pqref_priority_pqlim_pq_limiting_with_priority__S = _pv1_pv_plant_control_grid_follow_limit_pqref_priority_pqlim_pq_limiting_with_priority__Smax;
        if (1.0 == 1) {
            if (fabs(_pv1_pv_plant_control_grid_follow_limit_pqref_priority_pqlim_pq_limiting_with_priority__Pref) > _pv1_pv_plant_control_grid_follow_limit_pqref_priority_pqlim_pq_limiting_with_priority__Smax) {
                _pv1_pv_plant_control_grid_follow_limit_pqref_priority_pqlim_pq_limiting_with_priority__P = _pv1_pv_plant_control_grid_follow_limit_pqref_priority_pqlim_pq_limiting_with_priority__signP * _pv1_pv_plant_control_grid_follow_limit_pqref_priority_pqlim_pq_limiting_with_priority__Smax;
                _pv1_pv_plant_control_grid_follow_limit_pqref_priority_pqlim_pq_limiting_with_priority__Q = 0;
            }
            else {
                _pv1_pv_plant_control_grid_follow_limit_pqref_priority_pqlim_pq_limiting_with_priority__P = _pv1_pv_plant_control_grid_follow_limit_pqref_priority_pqlim_pq_limiting_with_priority__Pref;
                _pv1_pv_plant_control_grid_follow_limit_pqref_priority_pqlim_pq_limiting_with_priority__Q = _pv1_pv_plant_control_grid_follow_limit_pqref_priority_pqlim_pq_limiting_with_priority__signQ * sqrt(_pv1_pv_plant_control_grid_follow_limit_pqref_priority_pqlim_pq_limiting_with_priority__Smax * _pv1_pv_plant_control_grid_follow_limit_pqref_priority_pqlim_pq_limiting_with_priority__Smax - _pv1_pv_plant_control_grid_follow_limit_pqref_priority_pqlim_pq_limiting_with_priority__Pref * _pv1_pv_plant_control_grid_follow_limit_pqref_priority_pqlim_pq_limiting_with_priority__Pref);
            }
        }
        else if (1.0 == 2) {
            if (fabs(_pv1_pv_plant_control_grid_follow_limit_pqref_priority_pqlim_pq_limiting_with_priority__Qref) > _pv1_pv_plant_control_grid_follow_limit_pqref_priority_pqlim_pq_limiting_with_priority__Smax) {
                _pv1_pv_plant_control_grid_follow_limit_pqref_priority_pqlim_pq_limiting_with_priority__Q = _pv1_pv_plant_control_grid_follow_limit_pqref_priority_pqlim_pq_limiting_with_priority__signQ * _pv1_pv_plant_control_grid_follow_limit_pqref_priority_pqlim_pq_limiting_with_priority__Smax;
                _pv1_pv_plant_control_grid_follow_limit_pqref_priority_pqlim_pq_limiting_with_priority__P = 0;
            }
            else {
                _pv1_pv_plant_control_grid_follow_limit_pqref_priority_pqlim_pq_limiting_with_priority__Q = _pv1_pv_plant_control_grid_follow_limit_pqref_priority_pqlim_pq_limiting_with_priority__Qref;
                _pv1_pv_plant_control_grid_follow_limit_pqref_priority_pqlim_pq_limiting_with_priority__P = _pv1_pv_plant_control_grid_follow_limit_pqref_priority_pqlim_pq_limiting_with_priority__signP * sqrt(_pv1_pv_plant_control_grid_follow_limit_pqref_priority_pqlim_pq_limiting_with_priority__Smax * _pv1_pv_plant_control_grid_follow_limit_pqref_priority_pqlim_pq_limiting_with_priority__Smax - _pv1_pv_plant_control_grid_follow_limit_pqref_priority_pqlim_pq_limiting_with_priority__Qref * _pv1_pv_plant_control_grid_follow_limit_pqref_priority_pqlim_pq_limiting_with_priority__Qref);
            }
        }
        else {
            _pv1_pv_plant_control_grid_follow_limit_pqref_priority_pqlim_pq_limiting_with_priority__P = (_pv1_pv_plant_control_grid_follow_limit_pqref_priority_pqlim_pq_limiting_with_priority__Pref / _pv1_pv_plant_control_grid_follow_limit_pqref_priority_pqlim_pq_limiting_with_priority__Sref) * _pv1_pv_plant_control_grid_follow_limit_pqref_priority_pqlim_pq_limiting_with_priority__Smax;
            _pv1_pv_plant_control_grid_follow_limit_pqref_priority_pqlim_pq_limiting_with_priority__Q = (_pv1_pv_plant_control_grid_follow_limit_pqref_priority_pqlim_pq_limiting_with_priority__Qref / _pv1_pv_plant_control_grid_follow_limit_pqref_priority_pqlim_pq_limiting_with_priority__Sref) * _pv1_pv_plant_control_grid_follow_limit_pqref_priority_pqlim_pq_limiting_with_priority__Smax;
        }
    }
    // Generated from the component: PV1.PV Plant.Control.Grid_follow.Qref
    HIL_OutAO(0x407a, (float)_pv1_pv_plant_control_grid_follow_signal_switch1__out);
    // Generated from the component: PV1.PV Plant.Control.PLL.PLL.PID.Sum7
    _pv1_pv_plant_control_pll_pll_pid_sum7__out = _pv1_pv_plant_control_pll_pll_pid_ki__out + _pv1_pv_plant_control_pll_pll_pid_kb__out;
    // Generated from the component: PV2.PV Plant.Control.Grid_follow.ControlSignal_Calculation.PI_q.Limit1
    if (_pv2_pv_plant_control_grid_follow_controlsignal_calculation_pi_q_sum5__out > 10.0) {
        _pv2_pv_plant_control_grid_follow_controlsignal_calculation_pi_q_limit1__out = 10.0;
    } else if (_pv2_pv_plant_control_grid_follow_controlsignal_calculation_pi_q_sum5__out < -10.0) {
        _pv2_pv_plant_control_grid_follow_controlsignal_calculation_pi_q_limit1__out = -10.0;
    } else {
        _pv2_pv_plant_control_grid_follow_controlsignal_calculation_pi_q_limit1__out = _pv2_pv_plant_control_grid_follow_controlsignal_calculation_pi_q_sum5__out;
    }
    // Generated from the component: PV2.PV Plant.Control.Grid_follow.ControlSignal_Calculation.PI_d.Limit1
    if (_pv2_pv_plant_control_grid_follow_controlsignal_calculation_pi_d_sum5__out > 10.0) {
        _pv2_pv_plant_control_grid_follow_controlsignal_calculation_pi_d_limit1__out = 10.0;
    } else if (_pv2_pv_plant_control_grid_follow_controlsignal_calculation_pi_d_sum5__out < -10.0) {
        _pv2_pv_plant_control_grid_follow_controlsignal_calculation_pi_d_limit1__out = -10.0;
    } else {
        _pv2_pv_plant_control_grid_follow_controlsignal_calculation_pi_d_limit1__out = _pv2_pv_plant_control_grid_follow_controlsignal_calculation_pi_d_sum5__out;
    }
    // Generated from the component: PV2.PV Plant.Control.Grid_follow.PI_Vt.Kb
    _pv2_pv_plant_control_grid_follow_pi_vt_kb__out = 1000.0 * _pv2_pv_plant_control_grid_follow_pi_vt_sum6__out;
    // Generated from the component: PV2.PV Plant.Control.Grid_follow.Limit_PQref.priority_PQlim.PQ limiting with priority
    _pv2_pv_plant_control_grid_follow_limit_pqref_priority_pqlim_pq_limiting_with_priority__Pref = _pv2_pv_plant_control_grid_follow_signal_switch2__out;
    _pv2_pv_plant_control_grid_follow_limit_pqref_priority_pqlim_pq_limiting_with_priority__Qref = _pv2_pv_plant_control_grid_follow_signal_switch1__out;
    _pv2_pv_plant_control_grid_follow_limit_pqref_priority_pqlim_pq_limiting_with_priority__Smax = _pv2_pv_plant_control_grid_follow_constant3__out;
    _pv2_pv_plant_control_grid_follow_limit_pqref_priority_pqlim_pq_limiting_with_priority__Sref = sqrt(_pv2_pv_plant_control_grid_follow_limit_pqref_priority_pqlim_pq_limiting_with_priority__Pref * _pv2_pv_plant_control_grid_follow_limit_pqref_priority_pqlim_pq_limiting_with_priority__Pref + _pv2_pv_plant_control_grid_follow_limit_pqref_priority_pqlim_pq_limiting_with_priority__Qref * _pv2_pv_plant_control_grid_follow_limit_pqref_priority_pqlim_pq_limiting_with_priority__Qref);
    if (_pv2_pv_plant_control_grid_follow_limit_pqref_priority_pqlim_pq_limiting_with_priority__Qref >= 0)_pv2_pv_plant_control_grid_follow_limit_pqref_priority_pqlim_pq_limiting_with_priority__signQ = 1;
    else _pv2_pv_plant_control_grid_follow_limit_pqref_priority_pqlim_pq_limiting_with_priority__signQ = -1;
    if (_pv2_pv_plant_control_grid_follow_limit_pqref_priority_pqlim_pq_limiting_with_priority__Pref >= 0)_pv2_pv_plant_control_grid_follow_limit_pqref_priority_pqlim_pq_limiting_with_priority__signP = 1;
    else _pv2_pv_plant_control_grid_follow_limit_pqref_priority_pqlim_pq_limiting_with_priority__signP = -1;
    if (_pv2_pv_plant_control_grid_follow_limit_pqref_priority_pqlim_pq_limiting_with_priority__Sref <= _pv2_pv_plant_control_grid_follow_limit_pqref_priority_pqlim_pq_limiting_with_priority__Smax) {
        _pv2_pv_plant_control_grid_follow_limit_pqref_priority_pqlim_pq_limiting_with_priority__S = _pv2_pv_plant_control_grid_follow_limit_pqref_priority_pqlim_pq_limiting_with_priority__Sref;
        _pv2_pv_plant_control_grid_follow_limit_pqref_priority_pqlim_pq_limiting_with_priority__P = _pv2_pv_plant_control_grid_follow_limit_pqref_priority_pqlim_pq_limiting_with_priority__Pref;
        _pv2_pv_plant_control_grid_follow_limit_pqref_priority_pqlim_pq_limiting_with_priority__Q = _pv2_pv_plant_control_grid_follow_limit_pqref_priority_pqlim_pq_limiting_with_priority__Qref;
    }
    else {
        _pv2_pv_plant_control_grid_follow_limit_pqref_priority_pqlim_pq_limiting_with_priority__S = _pv2_pv_plant_control_grid_follow_limit_pqref_priority_pqlim_pq_limiting_with_priority__Smax;
        if (1.0 == 1) {
            if (fabs(_pv2_pv_plant_control_grid_follow_limit_pqref_priority_pqlim_pq_limiting_with_priority__Pref) > _pv2_pv_plant_control_grid_follow_limit_pqref_priority_pqlim_pq_limiting_with_priority__Smax) {
                _pv2_pv_plant_control_grid_follow_limit_pqref_priority_pqlim_pq_limiting_with_priority__P = _pv2_pv_plant_control_grid_follow_limit_pqref_priority_pqlim_pq_limiting_with_priority__signP * _pv2_pv_plant_control_grid_follow_limit_pqref_priority_pqlim_pq_limiting_with_priority__Smax;
                _pv2_pv_plant_control_grid_follow_limit_pqref_priority_pqlim_pq_limiting_with_priority__Q = 0;
            }
            else {
                _pv2_pv_plant_control_grid_follow_limit_pqref_priority_pqlim_pq_limiting_with_priority__P = _pv2_pv_plant_control_grid_follow_limit_pqref_priority_pqlim_pq_limiting_with_priority__Pref;
                _pv2_pv_plant_control_grid_follow_limit_pqref_priority_pqlim_pq_limiting_with_priority__Q = _pv2_pv_plant_control_grid_follow_limit_pqref_priority_pqlim_pq_limiting_with_priority__signQ * sqrt(_pv2_pv_plant_control_grid_follow_limit_pqref_priority_pqlim_pq_limiting_with_priority__Smax * _pv2_pv_plant_control_grid_follow_limit_pqref_priority_pqlim_pq_limiting_with_priority__Smax - _pv2_pv_plant_control_grid_follow_limit_pqref_priority_pqlim_pq_limiting_with_priority__Pref * _pv2_pv_plant_control_grid_follow_limit_pqref_priority_pqlim_pq_limiting_with_priority__Pref);
            }
        }
        else if (1.0 == 2) {
            if (fabs(_pv2_pv_plant_control_grid_follow_limit_pqref_priority_pqlim_pq_limiting_with_priority__Qref) > _pv2_pv_plant_control_grid_follow_limit_pqref_priority_pqlim_pq_limiting_with_priority__Smax) {
                _pv2_pv_plant_control_grid_follow_limit_pqref_priority_pqlim_pq_limiting_with_priority__Q = _pv2_pv_plant_control_grid_follow_limit_pqref_priority_pqlim_pq_limiting_with_priority__signQ * _pv2_pv_plant_control_grid_follow_limit_pqref_priority_pqlim_pq_limiting_with_priority__Smax;
                _pv2_pv_plant_control_grid_follow_limit_pqref_priority_pqlim_pq_limiting_with_priority__P = 0;
            }
            else {
                _pv2_pv_plant_control_grid_follow_limit_pqref_priority_pqlim_pq_limiting_with_priority__Q = _pv2_pv_plant_control_grid_follow_limit_pqref_priority_pqlim_pq_limiting_with_priority__Qref;
                _pv2_pv_plant_control_grid_follow_limit_pqref_priority_pqlim_pq_limiting_with_priority__P = _pv2_pv_plant_control_grid_follow_limit_pqref_priority_pqlim_pq_limiting_with_priority__signP * sqrt(_pv2_pv_plant_control_grid_follow_limit_pqref_priority_pqlim_pq_limiting_with_priority__Smax * _pv2_pv_plant_control_grid_follow_limit_pqref_priority_pqlim_pq_limiting_with_priority__Smax - _pv2_pv_plant_control_grid_follow_limit_pqref_priority_pqlim_pq_limiting_with_priority__Qref * _pv2_pv_plant_control_grid_follow_limit_pqref_priority_pqlim_pq_limiting_with_priority__Qref);
            }
        }
        else {
            _pv2_pv_plant_control_grid_follow_limit_pqref_priority_pqlim_pq_limiting_with_priority__P = (_pv2_pv_plant_control_grid_follow_limit_pqref_priority_pqlim_pq_limiting_with_priority__Pref / _pv2_pv_plant_control_grid_follow_limit_pqref_priority_pqlim_pq_limiting_with_priority__Sref) * _pv2_pv_plant_control_grid_follow_limit_pqref_priority_pqlim_pq_limiting_with_priority__Smax;
            _pv2_pv_plant_control_grid_follow_limit_pqref_priority_pqlim_pq_limiting_with_priority__Q = (_pv2_pv_plant_control_grid_follow_limit_pqref_priority_pqlim_pq_limiting_with_priority__Qref / _pv2_pv_plant_control_grid_follow_limit_pqref_priority_pqlim_pq_limiting_with_priority__Sref) * _pv2_pv_plant_control_grid_follow_limit_pqref_priority_pqlim_pq_limiting_with_priority__Smax;
        }
    }
    // Generated from the component: PV2.PV Plant.Control.Grid_follow.Qref
    HIL_OutAO(0x409b, (float)_pv2_pv_plant_control_grid_follow_signal_switch1__out);
    // Generated from the component: PV2.PV Plant.Control.PLL.PLL.PID.Sum7
    _pv2_pv_plant_control_pll_pll_pid_sum7__out = _pv2_pv_plant_control_pll_pll_pid_ki__out + _pv2_pv_plant_control_pll_pll_pid_kb__out;
    // Generated from the component: ESS1.Controller.Outer Voltage Loop + Inner Current Loop.Ud
    HIL_OutAO(0x4024, (float)_ess1_controller_outer_voltage_loop___inner_current_loop_gain5__out);
    // Generated from the component: ESS1.Controller.Outer Voltage Loop + Inner Current Loop.Uq
    HIL_OutAO(0x4025, (float)_ess1_controller_outer_voltage_loop___inner_current_loop_gain6__out);
    // Generated from the component: ESS1.Controller.Outer Voltage Loop + Inner Current Loop.dq to abc.dq to abc1.dq to alpha beta
    _ess1_controller_outer_voltage_loop___inner_current_loop_dq_to_abc_dq_to_abc1_dq_to_alpha_beta__k1 = cos(_ess1_controller_pll_pll_unit_delay1__out);
    _ess1_controller_outer_voltage_loop___inner_current_loop_dq_to_abc_dq_to_abc1_dq_to_alpha_beta__k2 = sin(_ess1_controller_pll_pll_unit_delay1__out);
    _ess1_controller_outer_voltage_loop___inner_current_loop_dq_to_abc_dq_to_abc1_dq_to_alpha_beta__alpha = _ess1_controller_outer_voltage_loop___inner_current_loop_dq_to_abc_dq_to_abc1_dq_to_alpha_beta__k2 * _ess1_controller_outer_voltage_loop___inner_current_loop_gain5__out + _ess1_controller_outer_voltage_loop___inner_current_loop_dq_to_abc_dq_to_abc1_dq_to_alpha_beta__k1 * _ess1_controller_outer_voltage_loop___inner_current_loop_gain6__out;
    _ess1_controller_outer_voltage_loop___inner_current_loop_dq_to_abc_dq_to_abc1_dq_to_alpha_beta__beta = _ess1_controller_outer_voltage_loop___inner_current_loop_dq_to_abc_dq_to_abc1_dq_to_alpha_beta__k2 * _ess1_controller_outer_voltage_loop___inner_current_loop_gain6__out - _ess1_controller_outer_voltage_loop___inner_current_loop_dq_to_abc_dq_to_abc1_dq_to_alpha_beta__k1 * _ess1_controller_outer_voltage_loop___inner_current_loop_gain5__out;
    // Generated from the component: ESS2.Controller.Outer Voltage Loop + Inner Current Loop.Ud
    HIL_OutAO(0x4059, (float)_ess2_controller_outer_voltage_loop___inner_current_loop_gain5__out);
    // Generated from the component: ESS2.Controller.Outer Voltage Loop + Inner Current Loop.Uq
    HIL_OutAO(0x405a, (float)_ess2_controller_outer_voltage_loop___inner_current_loop_gain6__out);
    // Generated from the component: ESS2.Controller.Outer Voltage Loop + Inner Current Loop.dq to abc.dq to abc1.dq to alpha beta
    _ess2_controller_outer_voltage_loop___inner_current_loop_dq_to_abc_dq_to_abc1_dq_to_alpha_beta__k1 = cos(_ess2_controller_pll_pll_unit_delay1__out);
    _ess2_controller_outer_voltage_loop___inner_current_loop_dq_to_abc_dq_to_abc1_dq_to_alpha_beta__k2 = sin(_ess2_controller_pll_pll_unit_delay1__out);
    _ess2_controller_outer_voltage_loop___inner_current_loop_dq_to_abc_dq_to_abc1_dq_to_alpha_beta__alpha = _ess2_controller_outer_voltage_loop___inner_current_loop_dq_to_abc_dq_to_abc1_dq_to_alpha_beta__k2 * _ess2_controller_outer_voltage_loop___inner_current_loop_gain5__out + _ess2_controller_outer_voltage_loop___inner_current_loop_dq_to_abc_dq_to_abc1_dq_to_alpha_beta__k1 * _ess2_controller_outer_voltage_loop___inner_current_loop_gain6__out;
    _ess2_controller_outer_voltage_loop___inner_current_loop_dq_to_abc_dq_to_abc1_dq_to_alpha_beta__beta = _ess2_controller_outer_voltage_loop___inner_current_loop_dq_to_abc_dq_to_abc1_dq_to_alpha_beta__k2 * _ess2_controller_outer_voltage_loop___inner_current_loop_gain6__out - _ess2_controller_outer_voltage_loop___inner_current_loop_dq_to_abc_dq_to_abc1_dq_to_alpha_beta__k1 * _ess2_controller_outer_voltage_loop___inner_current_loop_gain5__out;
    // Generated from the component: PV1.PV Plant.Control.Grid_follow.ControlSignal_Calculation.PI_q.Sum6
    _pv1_pv_plant_control_grid_follow_controlsignal_calculation_pi_q_sum6__out =  - _pv1_pv_plant_control_grid_follow_controlsignal_calculation_pi_q_sum5__out + _pv1_pv_plant_control_grid_follow_controlsignal_calculation_pi_q_limit1__out;
    // Generated from the component: PV1.PV Plant.Control.Grid_follow.ControlSignal_Calculation.Sum7
    _pv1_pv_plant_control_grid_follow_controlsignal_calculation_sum7__out = _pv1_pv_plant_control_grid_follow_controlsignal_calculation_pi_q_limit1__out + _pv1_pv_plant_control_grid_follow_controlsignal_calculation_sum6__out;
    // Generated from the component: PV1.PV Plant.Control.Grid_follow.ControlSignal_Calculation.PI_d.Sum6
    _pv1_pv_plant_control_grid_follow_controlsignal_calculation_pi_d_sum6__out =  - _pv1_pv_plant_control_grid_follow_controlsignal_calculation_pi_d_sum5__out + _pv1_pv_plant_control_grid_follow_controlsignal_calculation_pi_d_limit1__out;
    // Generated from the component: PV1.PV Plant.Control.Grid_follow.ControlSignal_Calculation.Sum3
    _pv1_pv_plant_control_grid_follow_controlsignal_calculation_sum3__out = _pv1_pv_plant_control_grid_follow_controlsignal_calculation_pi_d_limit1__out + _pv1_pv_plant_control_grid_follow_controlsignal_calculation_sum5__out;
    // Generated from the component: PV1.PV Plant.Control.Grid_follow.PI_Vt.Sum7
    _pv1_pv_plant_control_grid_follow_pi_vt_sum7__out = _pv1_pv_plant_control_grid_follow_pi_vt_ki__out + _pv1_pv_plant_control_grid_follow_pi_vt_kb__out;
    // Generated from the component: PV1.PV Plant.Control.Grid_follow.Limit_PQref.P rate limit
    if (_pv1_pv_plant_control_grid_follow_limit_pqref_p_rate_limit__first_step) {
        _pv1_pv_plant_control_grid_follow_limit_pqref_p_rate_limit__out = _pv1_pv_plant_control_grid_follow_limit_pqref_priority_pqlim_pq_limiting_with_priority__P;
    } else {
        _pv1_pv_plant_control_grid_follow_limit_pqref_p_rate_limit__out = _pv1_pv_plant_control_grid_follow_limit_pqref_priority_pqlim_pq_limiting_with_priority__P;
        _pv1_pv_plant_control_grid_follow_limit_pqref_p_rate_limit__in_rate = _pv1_pv_plant_control_grid_follow_limit_pqref_priority_pqlim_pq_limiting_with_priority__P - _pv1_pv_plant_control_grid_follow_limit_pqref_p_rate_limit__prev_out;
        if (_pv1_pv_plant_control_grid_follow_limit_pqref_p_rate_limit__in_rate > 0.0001) {
            _pv1_pv_plant_control_grid_follow_limit_pqref_p_rate_limit__out = _pv1_pv_plant_control_grid_follow_limit_pqref_p_rate_limit__prev_out + (0.0001);
        }
        if (_pv1_pv_plant_control_grid_follow_limit_pqref_p_rate_limit__in_rate < -0.0001) {
            _pv1_pv_plant_control_grid_follow_limit_pqref_p_rate_limit__out = _pv1_pv_plant_control_grid_follow_limit_pqref_p_rate_limit__prev_out + (-0.0001);
        }
    }
    // Generated from the component: PV1.PV Plant.Control.Grid_follow.Limit_PQref.Q rate limit
    if (_pv1_pv_plant_control_grid_follow_limit_pqref_q_rate_limit__first_step) {
        _pv1_pv_plant_control_grid_follow_limit_pqref_q_rate_limit__out = _pv1_pv_plant_control_grid_follow_limit_pqref_priority_pqlim_pq_limiting_with_priority__Q;
    } else {
        _pv1_pv_plant_control_grid_follow_limit_pqref_q_rate_limit__out = _pv1_pv_plant_control_grid_follow_limit_pqref_priority_pqlim_pq_limiting_with_priority__Q;
        _pv1_pv_plant_control_grid_follow_limit_pqref_q_rate_limit__in_rate = _pv1_pv_plant_control_grid_follow_limit_pqref_priority_pqlim_pq_limiting_with_priority__Q - _pv1_pv_plant_control_grid_follow_limit_pqref_q_rate_limit__prev_out;
        if (_pv1_pv_plant_control_grid_follow_limit_pqref_q_rate_limit__in_rate > 0.0001) {
            _pv1_pv_plant_control_grid_follow_limit_pqref_q_rate_limit__out = _pv1_pv_plant_control_grid_follow_limit_pqref_q_rate_limit__prev_out + (0.0001);
        }
        if (_pv1_pv_plant_control_grid_follow_limit_pqref_q_rate_limit__in_rate < -0.0001) {
            _pv1_pv_plant_control_grid_follow_limit_pqref_q_rate_limit__out = _pv1_pv_plant_control_grid_follow_limit_pqref_q_rate_limit__prev_out + (-0.0001);
        }
    }
    // Generated from the component: PV1.PV Plant.Control.Grid_follow.Limit_PQref.S rate limit
    if (_pv1_pv_plant_control_grid_follow_limit_pqref_s_rate_limit__first_step) {
        _pv1_pv_plant_control_grid_follow_limit_pqref_s_rate_limit__out = _pv1_pv_plant_control_grid_follow_limit_pqref_priority_pqlim_pq_limiting_with_priority__S;
    } else {
        _pv1_pv_plant_control_grid_follow_limit_pqref_s_rate_limit__out = _pv1_pv_plant_control_grid_follow_limit_pqref_priority_pqlim_pq_limiting_with_priority__S;
        _pv1_pv_plant_control_grid_follow_limit_pqref_s_rate_limit__in_rate = _pv1_pv_plant_control_grid_follow_limit_pqref_priority_pqlim_pq_limiting_with_priority__S - _pv1_pv_plant_control_grid_follow_limit_pqref_s_rate_limit__prev_out;
        if (_pv1_pv_plant_control_grid_follow_limit_pqref_s_rate_limit__in_rate > 0.0001) {
            _pv1_pv_plant_control_grid_follow_limit_pqref_s_rate_limit__out = _pv1_pv_plant_control_grid_follow_limit_pqref_s_rate_limit__prev_out + (0.0001);
        }
        if (_pv1_pv_plant_control_grid_follow_limit_pqref_s_rate_limit__in_rate < -0.0001) {
            _pv1_pv_plant_control_grid_follow_limit_pqref_s_rate_limit__out = _pv1_pv_plant_control_grid_follow_limit_pqref_s_rate_limit__prev_out + (-0.0001);
        }
    }
    // Generated from the component: PV2.PV Plant.Control.Grid_follow.ControlSignal_Calculation.PI_q.Sum6
    _pv2_pv_plant_control_grid_follow_controlsignal_calculation_pi_q_sum6__out =  - _pv2_pv_plant_control_grid_follow_controlsignal_calculation_pi_q_sum5__out + _pv2_pv_plant_control_grid_follow_controlsignal_calculation_pi_q_limit1__out;
    // Generated from the component: PV2.PV Plant.Control.Grid_follow.ControlSignal_Calculation.Sum7
    _pv2_pv_plant_control_grid_follow_controlsignal_calculation_sum7__out = _pv2_pv_plant_control_grid_follow_controlsignal_calculation_pi_q_limit1__out + _pv2_pv_plant_control_grid_follow_controlsignal_calculation_sum6__out;
    // Generated from the component: PV2.PV Plant.Control.Grid_follow.ControlSignal_Calculation.PI_d.Sum6
    _pv2_pv_plant_control_grid_follow_controlsignal_calculation_pi_d_sum6__out =  - _pv2_pv_plant_control_grid_follow_controlsignal_calculation_pi_d_sum5__out + _pv2_pv_plant_control_grid_follow_controlsignal_calculation_pi_d_limit1__out;
    // Generated from the component: PV2.PV Plant.Control.Grid_follow.ControlSignal_Calculation.Sum3
    _pv2_pv_plant_control_grid_follow_controlsignal_calculation_sum3__out = _pv2_pv_plant_control_grid_follow_controlsignal_calculation_pi_d_limit1__out + _pv2_pv_plant_control_grid_follow_controlsignal_calculation_sum5__out;
    // Generated from the component: PV2.PV Plant.Control.Grid_follow.PI_Vt.Sum7
    _pv2_pv_plant_control_grid_follow_pi_vt_sum7__out = _pv2_pv_plant_control_grid_follow_pi_vt_ki__out + _pv2_pv_plant_control_grid_follow_pi_vt_kb__out;
    // Generated from the component: PV2.PV Plant.Control.Grid_follow.Limit_PQref.P rate limit
    if (_pv2_pv_plant_control_grid_follow_limit_pqref_p_rate_limit__first_step) {
        _pv2_pv_plant_control_grid_follow_limit_pqref_p_rate_limit__out = _pv2_pv_plant_control_grid_follow_limit_pqref_priority_pqlim_pq_limiting_with_priority__P;
    } else {
        _pv2_pv_plant_control_grid_follow_limit_pqref_p_rate_limit__out = _pv2_pv_plant_control_grid_follow_limit_pqref_priority_pqlim_pq_limiting_with_priority__P;
        _pv2_pv_plant_control_grid_follow_limit_pqref_p_rate_limit__in_rate = _pv2_pv_plant_control_grid_follow_limit_pqref_priority_pqlim_pq_limiting_with_priority__P - _pv2_pv_plant_control_grid_follow_limit_pqref_p_rate_limit__prev_out;
        if (_pv2_pv_plant_control_grid_follow_limit_pqref_p_rate_limit__in_rate > 0.0001) {
            _pv2_pv_plant_control_grid_follow_limit_pqref_p_rate_limit__out = _pv2_pv_plant_control_grid_follow_limit_pqref_p_rate_limit__prev_out + (0.0001);
        }
        if (_pv2_pv_plant_control_grid_follow_limit_pqref_p_rate_limit__in_rate < -0.0001) {
            _pv2_pv_plant_control_grid_follow_limit_pqref_p_rate_limit__out = _pv2_pv_plant_control_grid_follow_limit_pqref_p_rate_limit__prev_out + (-0.0001);
        }
    }
    // Generated from the component: PV2.PV Plant.Control.Grid_follow.Limit_PQref.Q rate limit
    if (_pv2_pv_plant_control_grid_follow_limit_pqref_q_rate_limit__first_step) {
        _pv2_pv_plant_control_grid_follow_limit_pqref_q_rate_limit__out = _pv2_pv_plant_control_grid_follow_limit_pqref_priority_pqlim_pq_limiting_with_priority__Q;
    } else {
        _pv2_pv_plant_control_grid_follow_limit_pqref_q_rate_limit__out = _pv2_pv_plant_control_grid_follow_limit_pqref_priority_pqlim_pq_limiting_with_priority__Q;
        _pv2_pv_plant_control_grid_follow_limit_pqref_q_rate_limit__in_rate = _pv2_pv_plant_control_grid_follow_limit_pqref_priority_pqlim_pq_limiting_with_priority__Q - _pv2_pv_plant_control_grid_follow_limit_pqref_q_rate_limit__prev_out;
        if (_pv2_pv_plant_control_grid_follow_limit_pqref_q_rate_limit__in_rate > 0.0001) {
            _pv2_pv_plant_control_grid_follow_limit_pqref_q_rate_limit__out = _pv2_pv_plant_control_grid_follow_limit_pqref_q_rate_limit__prev_out + (0.0001);
        }
        if (_pv2_pv_plant_control_grid_follow_limit_pqref_q_rate_limit__in_rate < -0.0001) {
            _pv2_pv_plant_control_grid_follow_limit_pqref_q_rate_limit__out = _pv2_pv_plant_control_grid_follow_limit_pqref_q_rate_limit__prev_out + (-0.0001);
        }
    }
    // Generated from the component: PV2.PV Plant.Control.Grid_follow.Limit_PQref.S rate limit
    if (_pv2_pv_plant_control_grid_follow_limit_pqref_s_rate_limit__first_step) {
        _pv2_pv_plant_control_grid_follow_limit_pqref_s_rate_limit__out = _pv2_pv_plant_control_grid_follow_limit_pqref_priority_pqlim_pq_limiting_with_priority__S;
    } else {
        _pv2_pv_plant_control_grid_follow_limit_pqref_s_rate_limit__out = _pv2_pv_plant_control_grid_follow_limit_pqref_priority_pqlim_pq_limiting_with_priority__S;
        _pv2_pv_plant_control_grid_follow_limit_pqref_s_rate_limit__in_rate = _pv2_pv_plant_control_grid_follow_limit_pqref_priority_pqlim_pq_limiting_with_priority__S - _pv2_pv_plant_control_grid_follow_limit_pqref_s_rate_limit__prev_out;
        if (_pv2_pv_plant_control_grid_follow_limit_pqref_s_rate_limit__in_rate > 0.0001) {
            _pv2_pv_plant_control_grid_follow_limit_pqref_s_rate_limit__out = _pv2_pv_plant_control_grid_follow_limit_pqref_s_rate_limit__prev_out + (0.0001);
        }
        if (_pv2_pv_plant_control_grid_follow_limit_pqref_s_rate_limit__in_rate < -0.0001) {
            _pv2_pv_plant_control_grid_follow_limit_pqref_s_rate_limit__out = _pv2_pv_plant_control_grid_follow_limit_pqref_s_rate_limit__prev_out + (-0.0001);
        }
    }
    // Generated from the component: ESS1.Controller.Outer Voltage Loop + Inner Current Loop.dq to abc.dq to abc1.alpha beta to abc
    _ess1_controller_outer_voltage_loop___inner_current_loop_dq_to_abc_dq_to_abc1_alpha_beta_to_abc__A = 1 * _ess1_controller_outer_voltage_loop___inner_current_loop_dq_to_abc_o_ref__out;
    _ess1_controller_outer_voltage_loop___inner_current_loop_dq_to_abc_dq_to_abc1_alpha_beta_to_abc__B = _ess1_controller_outer_voltage_loop___inner_current_loop_dq_to_abc_dq_to_abc1_alpha_beta_to_abc__A - 0.5 * _ess1_controller_outer_voltage_loop___inner_current_loop_dq_to_abc_dq_to_abc1_dq_to_alpha_beta__alpha;
    _ess1_controller_outer_voltage_loop___inner_current_loop_dq_to_abc_dq_to_abc1_alpha_beta_to_abc__C = _ess1_controller_outer_voltage_loop___inner_current_loop_dq_to_abc_dq_to_abc1_alpha_beta_to_abc__B - 0.8660254037844386 * _ess1_controller_outer_voltage_loop___inner_current_loop_dq_to_abc_dq_to_abc1_dq_to_alpha_beta__beta;
    _ess1_controller_outer_voltage_loop___inner_current_loop_dq_to_abc_dq_to_abc1_alpha_beta_to_abc__B += 0.8660254037844386 * _ess1_controller_outer_voltage_loop___inner_current_loop_dq_to_abc_dq_to_abc1_dq_to_alpha_beta__beta;
    _ess1_controller_outer_voltage_loop___inner_current_loop_dq_to_abc_dq_to_abc1_alpha_beta_to_abc__A += 1 * _ess1_controller_outer_voltage_loop___inner_current_loop_dq_to_abc_dq_to_abc1_dq_to_alpha_beta__alpha;
    // Generated from the component: ESS2.Controller.Outer Voltage Loop + Inner Current Loop.dq to abc.dq to abc1.alpha beta to abc
    _ess2_controller_outer_voltage_loop___inner_current_loop_dq_to_abc_dq_to_abc1_alpha_beta_to_abc__A = 1 * _ess2_controller_outer_voltage_loop___inner_current_loop_dq_to_abc_o_ref__out;
    _ess2_controller_outer_voltage_loop___inner_current_loop_dq_to_abc_dq_to_abc1_alpha_beta_to_abc__B = _ess2_controller_outer_voltage_loop___inner_current_loop_dq_to_abc_dq_to_abc1_alpha_beta_to_abc__A - 0.5 * _ess2_controller_outer_voltage_loop___inner_current_loop_dq_to_abc_dq_to_abc1_dq_to_alpha_beta__alpha;
    _ess2_controller_outer_voltage_loop___inner_current_loop_dq_to_abc_dq_to_abc1_alpha_beta_to_abc__C = _ess2_controller_outer_voltage_loop___inner_current_loop_dq_to_abc_dq_to_abc1_alpha_beta_to_abc__B - 0.8660254037844386 * _ess2_controller_outer_voltage_loop___inner_current_loop_dq_to_abc_dq_to_abc1_dq_to_alpha_beta__beta;
    _ess2_controller_outer_voltage_loop___inner_current_loop_dq_to_abc_dq_to_abc1_alpha_beta_to_abc__B += 0.8660254037844386 * _ess2_controller_outer_voltage_loop___inner_current_loop_dq_to_abc_dq_to_abc1_dq_to_alpha_beta__beta;
    _ess2_controller_outer_voltage_loop___inner_current_loop_dq_to_abc_dq_to_abc1_alpha_beta_to_abc__A += 1 * _ess2_controller_outer_voltage_loop___inner_current_loop_dq_to_abc_dq_to_abc1_dq_to_alpha_beta__alpha;
    // Generated from the component: PV1.PV Plant.Control.Grid_follow.ControlSignal_Calculation.PI_q.Kb
    _pv1_pv_plant_control_grid_follow_controlsignal_calculation_pi_q_kb__out = 1.0 * _pv1_pv_plant_control_grid_follow_controlsignal_calculation_pi_q_sum6__out;
    // Generated from the component: PV1.PV Plant.Control.Grid_follow.ControlSignal_Calculation.Product7
    _pv1_pv_plant_control_grid_follow_controlsignal_calculation_product7__out = (_pv1_pv_plant_control_grid_follow_controlsignal_calculation_sum7__out) * 1.0 / (_pv1_pv_plant_control_grid_follow_controlsignal_calculation_gain5__out);
    // Generated from the component: PV1.PV Plant.Control.Grid_follow.ControlSignal_Calculation.PI_d.Kb
    _pv1_pv_plant_control_grid_follow_controlsignal_calculation_pi_d_kb__out = 1.0 * _pv1_pv_plant_control_grid_follow_controlsignal_calculation_pi_d_sum6__out;
    // Generated from the component: PV1.PV Plant.Control.Grid_follow.ControlSignal_Calculation.Product8
    _pv1_pv_plant_control_grid_follow_controlsignal_calculation_product8__out = (_pv1_pv_plant_control_grid_follow_controlsignal_calculation_sum3__out) * 1.0 / (_pv1_pv_plant_control_grid_follow_controlsignal_calculation_gain5__out);
    // Generated from the component: PV1.PV Plant.Control.Grid_follow.Limit_PQref.limS_overPQ.S limiting over PQ
    _pv1_pv_plant_control_grid_follow_limit_pqref_lims_overpq_s_limiting_over_pq__Pref = _pv1_pv_plant_control_grid_follow_limit_pqref_p_rate_limit__out;
    _pv1_pv_plant_control_grid_follow_limit_pqref_lims_overpq_s_limiting_over_pq__Qref = _pv1_pv_plant_control_grid_follow_limit_pqref_q_rate_limit__out;
    _pv1_pv_plant_control_grid_follow_limit_pqref_lims_overpq_s_limiting_over_pq__Sref = _pv1_pv_plant_control_grid_follow_limit_pqref_s_rate_limit__out;
    _pv1_pv_plant_control_grid_follow_limit_pqref_lims_overpq_s_limiting_over_pq__S_PQref = sqrt(_pv1_pv_plant_control_grid_follow_limit_pqref_lims_overpq_s_limiting_over_pq__Pref * _pv1_pv_plant_control_grid_follow_limit_pqref_lims_overpq_s_limiting_over_pq__Pref + _pv1_pv_plant_control_grid_follow_limit_pqref_lims_overpq_s_limiting_over_pq__Qref * _pv1_pv_plant_control_grid_follow_limit_pqref_lims_overpq_s_limiting_over_pq__Qref);
    if (_pv1_pv_plant_control_grid_follow_limit_pqref_lims_overpq_s_limiting_over_pq__S_PQref > _pv1_pv_plant_control_grid_follow_limit_pqref_lims_overpq_s_limiting_over_pq__Sref) {
        _pv1_pv_plant_control_grid_follow_limit_pqref_lims_overpq_s_limiting_over_pq__P = (_pv1_pv_plant_control_grid_follow_limit_pqref_lims_overpq_s_limiting_over_pq__Pref / _pv1_pv_plant_control_grid_follow_limit_pqref_lims_overpq_s_limiting_over_pq__S_PQref) * _pv1_pv_plant_control_grid_follow_limit_pqref_lims_overpq_s_limiting_over_pq__Sref;
        _pv1_pv_plant_control_grid_follow_limit_pqref_lims_overpq_s_limiting_over_pq__Q = (_pv1_pv_plant_control_grid_follow_limit_pqref_lims_overpq_s_limiting_over_pq__Qref / _pv1_pv_plant_control_grid_follow_limit_pqref_lims_overpq_s_limiting_over_pq__S_PQref) * _pv1_pv_plant_control_grid_follow_limit_pqref_lims_overpq_s_limiting_over_pq__Sref;
    }
    else {
        _pv1_pv_plant_control_grid_follow_limit_pqref_lims_overpq_s_limiting_over_pq__P = _pv1_pv_plant_control_grid_follow_limit_pqref_lims_overpq_s_limiting_over_pq__Pref;
        _pv1_pv_plant_control_grid_follow_limit_pqref_lims_overpq_s_limiting_over_pq__Q = _pv1_pv_plant_control_grid_follow_limit_pqref_lims_overpq_s_limiting_over_pq__Qref;
    }
    // Generated from the component: PV2.PV Plant.Control.Grid_follow.ControlSignal_Calculation.PI_q.Kb
    _pv2_pv_plant_control_grid_follow_controlsignal_calculation_pi_q_kb__out = 1.0 * _pv2_pv_plant_control_grid_follow_controlsignal_calculation_pi_q_sum6__out;
    // Generated from the component: PV2.PV Plant.Control.Grid_follow.ControlSignal_Calculation.Product7
    _pv2_pv_plant_control_grid_follow_controlsignal_calculation_product7__out = (_pv2_pv_plant_control_grid_follow_controlsignal_calculation_sum7__out) * 1.0 / (_pv2_pv_plant_control_grid_follow_controlsignal_calculation_gain5__out);
    // Generated from the component: PV2.PV Plant.Control.Grid_follow.ControlSignal_Calculation.PI_d.Kb
    _pv2_pv_plant_control_grid_follow_controlsignal_calculation_pi_d_kb__out = 1.0 * _pv2_pv_plant_control_grid_follow_controlsignal_calculation_pi_d_sum6__out;
    // Generated from the component: PV2.PV Plant.Control.Grid_follow.ControlSignal_Calculation.Product8
    _pv2_pv_plant_control_grid_follow_controlsignal_calculation_product8__out = (_pv2_pv_plant_control_grid_follow_controlsignal_calculation_sum3__out) * 1.0 / (_pv2_pv_plant_control_grid_follow_controlsignal_calculation_gain5__out);
    // Generated from the component: PV2.PV Plant.Control.Grid_follow.Limit_PQref.limS_overPQ.S limiting over PQ
    _pv2_pv_plant_control_grid_follow_limit_pqref_lims_overpq_s_limiting_over_pq__Pref = _pv2_pv_plant_control_grid_follow_limit_pqref_p_rate_limit__out;
    _pv2_pv_plant_control_grid_follow_limit_pqref_lims_overpq_s_limiting_over_pq__Qref = _pv2_pv_plant_control_grid_follow_limit_pqref_q_rate_limit__out;
    _pv2_pv_plant_control_grid_follow_limit_pqref_lims_overpq_s_limiting_over_pq__Sref = _pv2_pv_plant_control_grid_follow_limit_pqref_s_rate_limit__out;
    _pv2_pv_plant_control_grid_follow_limit_pqref_lims_overpq_s_limiting_over_pq__S_PQref = sqrt(_pv2_pv_plant_control_grid_follow_limit_pqref_lims_overpq_s_limiting_over_pq__Pref * _pv2_pv_plant_control_grid_follow_limit_pqref_lims_overpq_s_limiting_over_pq__Pref + _pv2_pv_plant_control_grid_follow_limit_pqref_lims_overpq_s_limiting_over_pq__Qref * _pv2_pv_plant_control_grid_follow_limit_pqref_lims_overpq_s_limiting_over_pq__Qref);
    if (_pv2_pv_plant_control_grid_follow_limit_pqref_lims_overpq_s_limiting_over_pq__S_PQref > _pv2_pv_plant_control_grid_follow_limit_pqref_lims_overpq_s_limiting_over_pq__Sref) {
        _pv2_pv_plant_control_grid_follow_limit_pqref_lims_overpq_s_limiting_over_pq__P = (_pv2_pv_plant_control_grid_follow_limit_pqref_lims_overpq_s_limiting_over_pq__Pref / _pv2_pv_plant_control_grid_follow_limit_pqref_lims_overpq_s_limiting_over_pq__S_PQref) * _pv2_pv_plant_control_grid_follow_limit_pqref_lims_overpq_s_limiting_over_pq__Sref;
        _pv2_pv_plant_control_grid_follow_limit_pqref_lims_overpq_s_limiting_over_pq__Q = (_pv2_pv_plant_control_grid_follow_limit_pqref_lims_overpq_s_limiting_over_pq__Qref / _pv2_pv_plant_control_grid_follow_limit_pqref_lims_overpq_s_limiting_over_pq__S_PQref) * _pv2_pv_plant_control_grid_follow_limit_pqref_lims_overpq_s_limiting_over_pq__Sref;
    }
    else {
        _pv2_pv_plant_control_grid_follow_limit_pqref_lims_overpq_s_limiting_over_pq__P = _pv2_pv_plant_control_grid_follow_limit_pqref_lims_overpq_s_limiting_over_pq__Pref;
        _pv2_pv_plant_control_grid_follow_limit_pqref_lims_overpq_s_limiting_over_pq__Q = _pv2_pv_plant_control_grid_follow_limit_pqref_lims_overpq_s_limiting_over_pq__Qref;
    }
    // Generated from the component: ESS1.Controller.Bus Join1
    _ess1_controller_bus_join1__out[0] = _ess1_controller_outer_voltage_loop___inner_current_loop_dq_to_abc_dq_to_abc1_alpha_beta_to_abc__A;
    _ess1_controller_bus_join1__out[1] = _ess1_controller_outer_voltage_loop___inner_current_loop_dq_to_abc_dq_to_abc1_alpha_beta_to_abc__B;
    _ess1_controller_bus_join1__out[2] = _ess1_controller_outer_voltage_loop___inner_current_loop_dq_to_abc_dq_to_abc1_alpha_beta_to_abc__C;
    // Generated from the component: ESS2.Controller.Bus Join1
    _ess2_controller_bus_join1__out[0] = _ess2_controller_outer_voltage_loop___inner_current_loop_dq_to_abc_dq_to_abc1_alpha_beta_to_abc__A;
    _ess2_controller_bus_join1__out[1] = _ess2_controller_outer_voltage_loop___inner_current_loop_dq_to_abc_dq_to_abc1_alpha_beta_to_abc__B;
    _ess2_controller_bus_join1__out[2] = _ess2_controller_outer_voltage_loop___inner_current_loop_dq_to_abc_dq_to_abc1_alpha_beta_to_abc__C;
    // Generated from the component: PV1.PV Plant.Control.Grid_follow.ControlSignal_Calculation.PI_q.Sum7
    _pv1_pv_plant_control_grid_follow_controlsignal_calculation_pi_q_sum7__out = _pv1_pv_plant_control_grid_follow_controlsignal_calculation_pi_q_ki__out + _pv1_pv_plant_control_grid_follow_controlsignal_calculation_pi_q_kb__out;
    // Generated from the component: PV1.PV Plant.Control.Grid_follow.ControlSignal_Calculation.Gain11
    _pv1_pv_plant_control_grid_follow_controlsignal_calculation_gain11__out = 0.3919183588453085 * _pv1_pv_plant_control_grid_follow_controlsignal_calculation_product7__out;
    // Generated from the component: PV1.PV Plant.Control.Grid_follow.ControlSignal_Calculation.PI_d.Sum7
    _pv1_pv_plant_control_grid_follow_controlsignal_calculation_pi_d_sum7__out = _pv1_pv_plant_control_grid_follow_controlsignal_calculation_pi_d_ki__out + _pv1_pv_plant_control_grid_follow_controlsignal_calculation_pi_d_kb__out;
    // Generated from the component: PV1.PV Plant.Control.Grid_follow.ControlSignal_Calculation.Gain10
    _pv1_pv_plant_control_grid_follow_controlsignal_calculation_gain10__out = 0.3919183588453085 * _pv1_pv_plant_control_grid_follow_controlsignal_calculation_product8__out;
    // Generated from the component: PV2.PV Plant.Control.Grid_follow.ControlSignal_Calculation.PI_q.Sum7
    _pv2_pv_plant_control_grid_follow_controlsignal_calculation_pi_q_sum7__out = _pv2_pv_plant_control_grid_follow_controlsignal_calculation_pi_q_ki__out + _pv2_pv_plant_control_grid_follow_controlsignal_calculation_pi_q_kb__out;
    // Generated from the component: PV2.PV Plant.Control.Grid_follow.ControlSignal_Calculation.Gain11
    _pv2_pv_plant_control_grid_follow_controlsignal_calculation_gain11__out = 0.3919183588453085 * _pv2_pv_plant_control_grid_follow_controlsignal_calculation_product7__out;
    // Generated from the component: PV2.PV Plant.Control.Grid_follow.ControlSignal_Calculation.PI_d.Sum7
    _pv2_pv_plant_control_grid_follow_controlsignal_calculation_pi_d_sum7__out = _pv2_pv_plant_control_grid_follow_controlsignal_calculation_pi_d_ki__out + _pv2_pv_plant_control_grid_follow_controlsignal_calculation_pi_d_kb__out;
    // Generated from the component: PV2.PV Plant.Control.Grid_follow.ControlSignal_Calculation.Gain10
    _pv2_pv_plant_control_grid_follow_controlsignal_calculation_gain10__out = 0.3919183588453085 * _pv2_pv_plant_control_grid_follow_controlsignal_calculation_product8__out;
    // Generated from the component: ESS1.Controller.Limit1
    if (_ess1_controller_bus_join1__out[0] > 1.0) {
        _ess1_controller_limit1__out[0] = 1.0;
    } else if (_ess1_controller_bus_join1__out[0] < -1.0) {
        _ess1_controller_limit1__out[0] = -1.0;
    } else {
        _ess1_controller_limit1__out[0] = _ess1_controller_bus_join1__out[0];
    }
    if (_ess1_controller_bus_join1__out[1] > 1.0) {
        _ess1_controller_limit1__out[1] = 1.0;
    } else if (_ess1_controller_bus_join1__out[1] < -1.0) {
        _ess1_controller_limit1__out[1] = -1.0;
    } else {
        _ess1_controller_limit1__out[1] = _ess1_controller_bus_join1__out[1];
    }
    if (_ess1_controller_bus_join1__out[2] > 1.0) {
        _ess1_controller_limit1__out[2] = 1.0;
    } else if (_ess1_controller_bus_join1__out[2] < -1.0) {
        _ess1_controller_limit1__out[2] = -1.0;
    } else {
        _ess1_controller_limit1__out[2] = _ess1_controller_bus_join1__out[2];
    }
    // Generated from the component: ESS2.Controller.Limit1
    if (_ess2_controller_bus_join1__out[0] > 1.0) {
        _ess2_controller_limit1__out[0] = 1.0;
    } else if (_ess2_controller_bus_join1__out[0] < -1.0) {
        _ess2_controller_limit1__out[0] = -1.0;
    } else {
        _ess2_controller_limit1__out[0] = _ess2_controller_bus_join1__out[0];
    }
    if (_ess2_controller_bus_join1__out[1] > 1.0) {
        _ess2_controller_limit1__out[1] = 1.0;
    } else if (_ess2_controller_bus_join1__out[1] < -1.0) {
        _ess2_controller_limit1__out[1] = -1.0;
    } else {
        _ess2_controller_limit1__out[1] = _ess2_controller_bus_join1__out[1];
    }
    if (_ess2_controller_bus_join1__out[2] > 1.0) {
        _ess2_controller_limit1__out[2] = 1.0;
    } else if (_ess2_controller_bus_join1__out[2] < -1.0) {
        _ess2_controller_limit1__out[2] = -1.0;
    } else {
        _ess2_controller_limit1__out[2] = _ess2_controller_bus_join1__out[2];
    }
    // Generated from the component: PV1.PV Plant.Control.Grid_follow.ControlSignal_Calculation.Sum9
    _pv1_pv_plant_control_grid_follow_controlsignal_calculation_sum9__out = _pv1_pv_plant_control_grid_follow_controlsignal_calculation_product6__out + _pv1_pv_plant_control_grid_follow_controlsignal_calculation_gain11__out;
    // Generated from the component: PV1.PV Plant.Control.Grid_follow.ControlSignal_Calculation.Sum8
    _pv1_pv_plant_control_grid_follow_controlsignal_calculation_sum8__out = _pv1_pv_plant_control_grid_follow_controlsignal_calculation_gain10__out + _pv1_pv_plant_control_grid_follow_controlsignal_calculation_product5__out;
    // Generated from the component: PV2.PV Plant.Control.Grid_follow.ControlSignal_Calculation.Sum9
    _pv2_pv_plant_control_grid_follow_controlsignal_calculation_sum9__out = _pv2_pv_plant_control_grid_follow_controlsignal_calculation_product6__out + _pv2_pv_plant_control_grid_follow_controlsignal_calculation_gain11__out;
    // Generated from the component: PV2.PV Plant.Control.Grid_follow.ControlSignal_Calculation.Sum8
    _pv2_pv_plant_control_grid_follow_controlsignal_calculation_sum8__out = _pv2_pv_plant_control_grid_follow_controlsignal_calculation_gain10__out + _pv2_pv_plant_control_grid_follow_controlsignal_calculation_product5__out;
    // Generated from the component: ESS1.Bus Split1
    _ess1_bus_split1__out = _ess1_controller_limit1__out[0];
    _ess1_bus_split1__out1 = _ess1_controller_limit1__out[1];
    _ess1_bus_split1__out2 = _ess1_controller_limit1__out[2];
    // Generated from the component: ESS2.Bus Split1
    _ess2_bus_split1__out = _ess2_controller_limit1__out[0];
    _ess2_bus_split1__out1 = _ess2_controller_limit1__out[1];
    _ess2_bus_split1__out2 = _ess2_controller_limit1__out[2];
    // Generated from the component: PV1.PV Plant.Control.Grid_follow.Uq_c
    HIL_OutAO(0x407d, (float)_pv1_pv_plant_control_grid_follow_controlsignal_calculation_sum9__out);
    // Generated from the component: PV1.PV Plant.Control.duty_cycle.Limit3
    if (_pv1_pv_plant_control_grid_follow_controlsignal_calculation_sum9__out > 1.1546) {
        _pv1_pv_plant_control_duty_cycle_limit3__out = 1.1546;
    } else if (_pv1_pv_plant_control_grid_follow_controlsignal_calculation_sum9__out < -1.1546) {
        _pv1_pv_plant_control_duty_cycle_limit3__out = -1.1546;
    } else {
        _pv1_pv_plant_control_duty_cycle_limit3__out = _pv1_pv_plant_control_grid_follow_controlsignal_calculation_sum9__out;
    }
    // Generated from the component: PV1.PV Plant.Control.Grid_follow.Ud_c
    HIL_OutAO(0x407c, (float)_pv1_pv_plant_control_grid_follow_controlsignal_calculation_sum8__out);
    // Generated from the component: PV1.PV Plant.Control.duty_cycle.Limit2
    if (_pv1_pv_plant_control_grid_follow_controlsignal_calculation_sum8__out > 1.1546) {
        _pv1_pv_plant_control_duty_cycle_limit2__out = 1.1546;
    } else if (_pv1_pv_plant_control_grid_follow_controlsignal_calculation_sum8__out < -1.1546) {
        _pv1_pv_plant_control_duty_cycle_limit2__out = -1.1546;
    } else {
        _pv1_pv_plant_control_duty_cycle_limit2__out = _pv1_pv_plant_control_grid_follow_controlsignal_calculation_sum8__out;
    }
    // Generated from the component: PV2.PV Plant.Control.Grid_follow.Uq_c
    HIL_OutAO(0x409e, (float)_pv2_pv_plant_control_grid_follow_controlsignal_calculation_sum9__out);
    // Generated from the component: PV2.PV Plant.Control.duty_cycle.Limit3
    if (_pv2_pv_plant_control_grid_follow_controlsignal_calculation_sum9__out > 1.1546) {
        _pv2_pv_plant_control_duty_cycle_limit3__out = 1.1546;
    } else if (_pv2_pv_plant_control_grid_follow_controlsignal_calculation_sum9__out < -1.1546) {
        _pv2_pv_plant_control_duty_cycle_limit3__out = -1.1546;
    } else {
        _pv2_pv_plant_control_duty_cycle_limit3__out = _pv2_pv_plant_control_grid_follow_controlsignal_calculation_sum9__out;
    }
    // Generated from the component: PV2.PV Plant.Control.Grid_follow.Ud_c
    HIL_OutAO(0x409d, (float)_pv2_pv_plant_control_grid_follow_controlsignal_calculation_sum8__out);
    // Generated from the component: PV2.PV Plant.Control.duty_cycle.Limit2
    if (_pv2_pv_plant_control_grid_follow_controlsignal_calculation_sum8__out > 1.1546) {
        _pv2_pv_plant_control_duty_cycle_limit2__out = 1.1546;
    } else if (_pv2_pv_plant_control_grid_follow_controlsignal_calculation_sum8__out < -1.1546) {
        _pv2_pv_plant_control_duty_cycle_limit2__out = -1.1546;
    } else {
        _pv2_pv_plant_control_duty_cycle_limit2__out = _pv2_pv_plant_control_grid_follow_controlsignal_calculation_sum8__out;
    }
    // Generated from the component: ESS1.Three Phase Inverter.IGBT Leg1.PWM_Modulator
    if (_ess1_bus_split1__out < -1.0)
        _ess1_three_phase_inverter_igbt_leg1_pwm_modulator__limited_in[0] = -1.0;
    else if (_ess1_bus_split1__out > 1.0)
        _ess1_three_phase_inverter_igbt_leg1_pwm_modulator__limited_in[0] = 1.0;
    else
        _ess1_three_phase_inverter_igbt_leg1_pwm_modulator__limited_in[0] = _ess1_bus_split1__out;
    HIL_OutInt32(0x2000040 + _ess1_three_phase_inverter_igbt_leg1_pwm_modulator__channels[0], ((unsigned)((_ess1_three_phase_inverter_igbt_leg1_pwm_modulator__limited_in[0] - (-1.0)) * 1250.0)));
    if (_ess1_constant2__out == 0x0) {
        // pwm_modulator_en
        HIL_OutInt32(0x2000000 + _ess1_three_phase_inverter_igbt_leg1_pwm_modulator__channels[0], 0x0);
    }
    else {
        // pwm_modulator_en
        HIL_OutInt32(0x2000000 + _ess1_three_phase_inverter_igbt_leg1_pwm_modulator__channels[0], 0x1);
    }
    HIL_OutInt32(0x2000140, _ess1_three_phase_inverter_igbt_leg1_pwm_modulator__update_mask);
    // Generated from the component: ESS1.Three Phase Inverter.IGBT Leg2.PWM_Modulator
    if (_ess1_bus_split1__out1 < -1.0)
        _ess1_three_phase_inverter_igbt_leg2_pwm_modulator__limited_in[0] = -1.0;
    else if (_ess1_bus_split1__out1 > 1.0)
        _ess1_three_phase_inverter_igbt_leg2_pwm_modulator__limited_in[0] = 1.0;
    else
        _ess1_three_phase_inverter_igbt_leg2_pwm_modulator__limited_in[0] = _ess1_bus_split1__out1;
    HIL_OutInt32(0x2000040 + _ess1_three_phase_inverter_igbt_leg2_pwm_modulator__channels[0], ((unsigned)((_ess1_three_phase_inverter_igbt_leg2_pwm_modulator__limited_in[0] - (-1.0)) * 1250.0)));
    if (_ess1_constant2__out == 0x0) {
        // pwm_modulator_en
        HIL_OutInt32(0x2000000 + _ess1_three_phase_inverter_igbt_leg2_pwm_modulator__channels[0], 0x0);
    }
    else {
        // pwm_modulator_en
        HIL_OutInt32(0x2000000 + _ess1_three_phase_inverter_igbt_leg2_pwm_modulator__channels[0], 0x1);
    }
    HIL_OutInt32(0x2000140, _ess1_three_phase_inverter_igbt_leg2_pwm_modulator__update_mask);
    // Generated from the component: ESS1.Three Phase Inverter.IGBT Leg3.PWM_Modulator
    if (_ess1_bus_split1__out2 < -1.0)
        _ess1_three_phase_inverter_igbt_leg3_pwm_modulator__limited_in[0] = -1.0;
    else if (_ess1_bus_split1__out2 > 1.0)
        _ess1_three_phase_inverter_igbt_leg3_pwm_modulator__limited_in[0] = 1.0;
    else
        _ess1_three_phase_inverter_igbt_leg3_pwm_modulator__limited_in[0] = _ess1_bus_split1__out2;
    HIL_OutInt32(0x2000040 + _ess1_three_phase_inverter_igbt_leg3_pwm_modulator__channels[0], ((unsigned)((_ess1_three_phase_inverter_igbt_leg3_pwm_modulator__limited_in[0] - (-1.0)) * 1250.0)));
    if (_ess1_constant2__out == 0x0) {
        // pwm_modulator_en
        HIL_OutInt32(0x2000000 + _ess1_three_phase_inverter_igbt_leg3_pwm_modulator__channels[0], 0x0);
    }
    else {
        // pwm_modulator_en
        HIL_OutInt32(0x2000000 + _ess1_three_phase_inverter_igbt_leg3_pwm_modulator__channels[0], 0x1);
    }
    HIL_OutInt32(0x2000140, _ess1_three_phase_inverter_igbt_leg3_pwm_modulator__update_mask);
    // Generated from the component: ESS2.Three Phase Inverter.IGBT Leg1.PWM_Modulator
    if (_ess2_bus_split1__out < -1.0)
        _ess2_three_phase_inverter_igbt_leg1_pwm_modulator__limited_in[0] = -1.0;
    else if (_ess2_bus_split1__out > 1.0)
        _ess2_three_phase_inverter_igbt_leg1_pwm_modulator__limited_in[0] = 1.0;
    else
        _ess2_three_phase_inverter_igbt_leg1_pwm_modulator__limited_in[0] = _ess2_bus_split1__out;
    HIL_OutInt32(0x2000040 + _ess2_three_phase_inverter_igbt_leg1_pwm_modulator__channels[0], ((unsigned)((_ess2_three_phase_inverter_igbt_leg1_pwm_modulator__limited_in[0] - (-1.0)) * 1250.0)));
    if (_ess2_constant2__out == 0x0) {
        // pwm_modulator_en
        HIL_OutInt32(0x2000000 + _ess2_three_phase_inverter_igbt_leg1_pwm_modulator__channels[0], 0x0);
    }
    else {
        // pwm_modulator_en
        HIL_OutInt32(0x2000000 + _ess2_three_phase_inverter_igbt_leg1_pwm_modulator__channels[0], 0x1);
    }
    HIL_OutInt32(0x2000140, _ess2_three_phase_inverter_igbt_leg1_pwm_modulator__update_mask);
    // Generated from the component: ESS2.Three Phase Inverter.IGBT Leg2.PWM_Modulator
    if (_ess2_bus_split1__out1 < -1.0)
        _ess2_three_phase_inverter_igbt_leg2_pwm_modulator__limited_in[0] = -1.0;
    else if (_ess2_bus_split1__out1 > 1.0)
        _ess2_three_phase_inverter_igbt_leg2_pwm_modulator__limited_in[0] = 1.0;
    else
        _ess2_three_phase_inverter_igbt_leg2_pwm_modulator__limited_in[0] = _ess2_bus_split1__out1;
    HIL_OutInt32(0x2000040 + _ess2_three_phase_inverter_igbt_leg2_pwm_modulator__channels[0], ((unsigned)((_ess2_three_phase_inverter_igbt_leg2_pwm_modulator__limited_in[0] - (-1.0)) * 1250.0)));
    if (_ess2_constant2__out == 0x0) {
        // pwm_modulator_en
        HIL_OutInt32(0x2000000 + _ess2_three_phase_inverter_igbt_leg2_pwm_modulator__channels[0], 0x0);
    }
    else {
        // pwm_modulator_en
        HIL_OutInt32(0x2000000 + _ess2_three_phase_inverter_igbt_leg2_pwm_modulator__channels[0], 0x1);
    }
    HIL_OutInt32(0x2000140, _ess2_three_phase_inverter_igbt_leg2_pwm_modulator__update_mask);
    // Generated from the component: ESS2.Three Phase Inverter.IGBT Leg3.PWM_Modulator
    if (_ess2_bus_split1__out2 < -1.0)
        _ess2_three_phase_inverter_igbt_leg3_pwm_modulator__limited_in[0] = -1.0;
    else if (_ess2_bus_split1__out2 > 1.0)
        _ess2_three_phase_inverter_igbt_leg3_pwm_modulator__limited_in[0] = 1.0;
    else
        _ess2_three_phase_inverter_igbt_leg3_pwm_modulator__limited_in[0] = _ess2_bus_split1__out2;
    HIL_OutInt32(0x2000040 + _ess2_three_phase_inverter_igbt_leg3_pwm_modulator__channels[0], ((unsigned)((_ess2_three_phase_inverter_igbt_leg3_pwm_modulator__limited_in[0] - (-1.0)) * 1250.0)));
    if (_ess2_constant2__out == 0x0) {
        // pwm_modulator_en
        HIL_OutInt32(0x2000000 + _ess2_three_phase_inverter_igbt_leg3_pwm_modulator__channels[0], 0x0);
    }
    else {
        // pwm_modulator_en
        HIL_OutInt32(0x2000000 + _ess2_three_phase_inverter_igbt_leg3_pwm_modulator__channels[0], 0x1);
    }
    HIL_OutInt32(0x2000140, _ess2_three_phase_inverter_igbt_leg3_pwm_modulator__update_mask);
    // Generated from the component: PV1.PV Plant.Control.duty_cycle.m_q
    HIL_OutAO(0x4091, (float)_pv1_pv_plant_control_duty_cycle_limit3__out);
    // Generated from the component: PV1.PV Plant.Control.duty_cycle.dq to abc1.dq to alpha beta
    _pv1_pv_plant_control_duty_cycle_dq_to_abc1_dq_to_alpha_beta__k1 = cos(_pv1_pv_plant_control_pll_pll_unit_delay1__out);
    _pv1_pv_plant_control_duty_cycle_dq_to_abc1_dq_to_alpha_beta__k2 = sin(_pv1_pv_plant_control_pll_pll_unit_delay1__out);
    _pv1_pv_plant_control_duty_cycle_dq_to_abc1_dq_to_alpha_beta__alpha = _pv1_pv_plant_control_duty_cycle_dq_to_abc1_dq_to_alpha_beta__k2 * _pv1_pv_plant_control_duty_cycle_limit2__out + _pv1_pv_plant_control_duty_cycle_dq_to_abc1_dq_to_alpha_beta__k1 * _pv1_pv_plant_control_duty_cycle_limit3__out;
    _pv1_pv_plant_control_duty_cycle_dq_to_abc1_dq_to_alpha_beta__beta = _pv1_pv_plant_control_duty_cycle_dq_to_abc1_dq_to_alpha_beta__k2 * _pv1_pv_plant_control_duty_cycle_limit3__out - _pv1_pv_plant_control_duty_cycle_dq_to_abc1_dq_to_alpha_beta__k1 * _pv1_pv_plant_control_duty_cycle_limit2__out;
    // Generated from the component: PV1.PV Plant.Control.duty_cycle.m_d
    HIL_OutAO(0x4090, (float)_pv1_pv_plant_control_duty_cycle_limit2__out);
    // Generated from the component: PV2.PV Plant.Control.duty_cycle.m_q
    HIL_OutAO(0x40b2, (float)_pv2_pv_plant_control_duty_cycle_limit3__out);
    // Generated from the component: PV2.PV Plant.Control.duty_cycle.dq to abc1.dq to alpha beta
    _pv2_pv_plant_control_duty_cycle_dq_to_abc1_dq_to_alpha_beta__k1 = cos(_pv2_pv_plant_control_pll_pll_unit_delay1__out);
    _pv2_pv_plant_control_duty_cycle_dq_to_abc1_dq_to_alpha_beta__k2 = sin(_pv2_pv_plant_control_pll_pll_unit_delay1__out);
    _pv2_pv_plant_control_duty_cycle_dq_to_abc1_dq_to_alpha_beta__alpha = _pv2_pv_plant_control_duty_cycle_dq_to_abc1_dq_to_alpha_beta__k2 * _pv2_pv_plant_control_duty_cycle_limit2__out + _pv2_pv_plant_control_duty_cycle_dq_to_abc1_dq_to_alpha_beta__k1 * _pv2_pv_plant_control_duty_cycle_limit3__out;
    _pv2_pv_plant_control_duty_cycle_dq_to_abc1_dq_to_alpha_beta__beta = _pv2_pv_plant_control_duty_cycle_dq_to_abc1_dq_to_alpha_beta__k2 * _pv2_pv_plant_control_duty_cycle_limit3__out - _pv2_pv_plant_control_duty_cycle_dq_to_abc1_dq_to_alpha_beta__k1 * _pv2_pv_plant_control_duty_cycle_limit2__out;
    // Generated from the component: PV2.PV Plant.Control.duty_cycle.m_d
    HIL_OutAO(0x40b1, (float)_pv2_pv_plant_control_duty_cycle_limit2__out);
    // Generated from the component: PV1.PV Plant.Control.duty_cycle.dq to abc1.alpha beta to abc
    _pv1_pv_plant_control_duty_cycle_dq_to_abc1_alpha_beta_to_abc__A = 1 * _pv1_pv_plant_control_duty_cycle_o_ref__out;
    _pv1_pv_plant_control_duty_cycle_dq_to_abc1_alpha_beta_to_abc__B = _pv1_pv_plant_control_duty_cycle_dq_to_abc1_alpha_beta_to_abc__A - 0.5 * _pv1_pv_plant_control_duty_cycle_dq_to_abc1_dq_to_alpha_beta__alpha;
    _pv1_pv_plant_control_duty_cycle_dq_to_abc1_alpha_beta_to_abc__C = _pv1_pv_plant_control_duty_cycle_dq_to_abc1_alpha_beta_to_abc__B - 0.8660254037844386 * _pv1_pv_plant_control_duty_cycle_dq_to_abc1_dq_to_alpha_beta__beta;
    _pv1_pv_plant_control_duty_cycle_dq_to_abc1_alpha_beta_to_abc__B += 0.8660254037844386 * _pv1_pv_plant_control_duty_cycle_dq_to_abc1_dq_to_alpha_beta__beta;
    _pv1_pv_plant_control_duty_cycle_dq_to_abc1_alpha_beta_to_abc__A += 1 * _pv1_pv_plant_control_duty_cycle_dq_to_abc1_dq_to_alpha_beta__alpha;
    // Generated from the component: PV2.PV Plant.Control.duty_cycle.dq to abc1.alpha beta to abc
    _pv2_pv_plant_control_duty_cycle_dq_to_abc1_alpha_beta_to_abc__A = 1 * _pv2_pv_plant_control_duty_cycle_o_ref__out;
    _pv2_pv_plant_control_duty_cycle_dq_to_abc1_alpha_beta_to_abc__B = _pv2_pv_plant_control_duty_cycle_dq_to_abc1_alpha_beta_to_abc__A - 0.5 * _pv2_pv_plant_control_duty_cycle_dq_to_abc1_dq_to_alpha_beta__alpha;
    _pv2_pv_plant_control_duty_cycle_dq_to_abc1_alpha_beta_to_abc__C = _pv2_pv_plant_control_duty_cycle_dq_to_abc1_alpha_beta_to_abc__B - 0.8660254037844386 * _pv2_pv_plant_control_duty_cycle_dq_to_abc1_dq_to_alpha_beta__beta;
    _pv2_pv_plant_control_duty_cycle_dq_to_abc1_alpha_beta_to_abc__B += 0.8660254037844386 * _pv2_pv_plant_control_duty_cycle_dq_to_abc1_dq_to_alpha_beta__beta;
    _pv2_pv_plant_control_duty_cycle_dq_to_abc1_alpha_beta_to_abc__A += 1 * _pv2_pv_plant_control_duty_cycle_dq_to_abc1_dq_to_alpha_beta__alpha;
    // Generated from the component: PV1.PV Plant.Control.duty_cycle.Da
    HIL_OutAO(0x4089, (float)_pv1_pv_plant_control_duty_cycle_dq_to_abc1_alpha_beta_to_abc__A);
    // Generated from the component: PV1.PV Plant.Control.duty_cycle.Db
    HIL_OutAO(0x408a, (float)_pv1_pv_plant_control_duty_cycle_dq_to_abc1_alpha_beta_to_abc__B);
    // Generated from the component: PV1.PV Plant.Control.duty_cycle.Dc
    HIL_OutAO(0x408b, (float)_pv1_pv_plant_control_duty_cycle_dq_to_abc1_alpha_beta_to_abc__C);
    // Generated from the component: PV1.PV Plant.Control.duty_cycle.ZSM.Min Max1
    _pv1_pv_plant_control_duty_cycle_zsm_min_max1__out = MIN(MIN(_pv1_pv_plant_control_duty_cycle_dq_to_abc1_alpha_beta_to_abc__A, _pv1_pv_plant_control_duty_cycle_dq_to_abc1_alpha_beta_to_abc__B), _pv1_pv_plant_control_duty_cycle_dq_to_abc1_alpha_beta_to_abc__C);
    // Generated from the component: PV1.PV Plant.Control.duty_cycle.ZSM.Min Max2
    _pv1_pv_plant_control_duty_cycle_zsm_min_max2__out = MAX(MAX(_pv1_pv_plant_control_duty_cycle_dq_to_abc1_alpha_beta_to_abc__A, _pv1_pv_plant_control_duty_cycle_dq_to_abc1_alpha_beta_to_abc__B), _pv1_pv_plant_control_duty_cycle_dq_to_abc1_alpha_beta_to_abc__C);
    // Generated from the component: PV2.PV Plant.Control.duty_cycle.Da
    HIL_OutAO(0x40aa, (float)_pv2_pv_plant_control_duty_cycle_dq_to_abc1_alpha_beta_to_abc__A);
    // Generated from the component: PV2.PV Plant.Control.duty_cycle.Db
    HIL_OutAO(0x40ab, (float)_pv2_pv_plant_control_duty_cycle_dq_to_abc1_alpha_beta_to_abc__B);
    // Generated from the component: PV2.PV Plant.Control.duty_cycle.Dc
    HIL_OutAO(0x40ac, (float)_pv2_pv_plant_control_duty_cycle_dq_to_abc1_alpha_beta_to_abc__C);
    // Generated from the component: PV2.PV Plant.Control.duty_cycle.ZSM.Min Max1
    _pv2_pv_plant_control_duty_cycle_zsm_min_max1__out = MIN(MIN(_pv2_pv_plant_control_duty_cycle_dq_to_abc1_alpha_beta_to_abc__A, _pv2_pv_plant_control_duty_cycle_dq_to_abc1_alpha_beta_to_abc__B), _pv2_pv_plant_control_duty_cycle_dq_to_abc1_alpha_beta_to_abc__C);
    // Generated from the component: PV2.PV Plant.Control.duty_cycle.ZSM.Min Max2
    _pv2_pv_plant_control_duty_cycle_zsm_min_max2__out = MAX(MAX(_pv2_pv_plant_control_duty_cycle_dq_to_abc1_alpha_beta_to_abc__A, _pv2_pv_plant_control_duty_cycle_dq_to_abc1_alpha_beta_to_abc__B), _pv2_pv_plant_control_duty_cycle_dq_to_abc1_alpha_beta_to_abc__C);
    // Generated from the component: PV1.PV Plant.Control.duty_cycle.ZSM.Product2
    _pv1_pv_plant_control_duty_cycle_zsm_product2__out = (_pv1_pv_plant_control_duty_cycle_zsm_sum2__out * _pv1_pv_plant_control_duty_cycle_zsm_min_max1__out);
    // Generated from the component: PV1.PV Plant.Control.duty_cycle.ZSM.Sum1
    _pv1_pv_plant_control_duty_cycle_zsm_sum1__out =  - _pv1_pv_plant_control_duty_cycle_zsm_min_max2__out + _pv1_pv_plant_control_duty_cycle_zsm_constant2__out;
    // Generated from the component: PV2.PV Plant.Control.duty_cycle.ZSM.Product2
    _pv2_pv_plant_control_duty_cycle_zsm_product2__out = (_pv2_pv_plant_control_duty_cycle_zsm_sum2__out * _pv2_pv_plant_control_duty_cycle_zsm_min_max1__out);
    // Generated from the component: PV2.PV Plant.Control.duty_cycle.ZSM.Sum1
    _pv2_pv_plant_control_duty_cycle_zsm_sum1__out =  - _pv2_pv_plant_control_duty_cycle_zsm_min_max2__out + _pv2_pv_plant_control_duty_cycle_zsm_constant2__out;
    // Generated from the component: PV1.PV Plant.Control.duty_cycle.ZSM.Product1
    _pv1_pv_plant_control_duty_cycle_zsm_product1__out = (_pv1_pv_plant_control_duty_cycle_zsm_limit1__out * _pv1_pv_plant_control_duty_cycle_zsm_sum1__out);
    // Generated from the component: PV2.PV Plant.Control.duty_cycle.ZSM.Product1
    _pv2_pv_plant_control_duty_cycle_zsm_product1__out = (_pv2_pv_plant_control_duty_cycle_zsm_limit1__out * _pv2_pv_plant_control_duty_cycle_zsm_sum1__out);
    // Generated from the component: PV1.PV Plant.Control.duty_cycle.ZSM.Sum3
    _pv1_pv_plant_control_duty_cycle_zsm_sum3__out =  - _pv1_pv_plant_control_duty_cycle_zsm_sum8__out - _pv1_pv_plant_control_duty_cycle_zsm_product2__out + _pv1_pv_plant_control_duty_cycle_zsm_product1__out;
    // Generated from the component: PV2.PV Plant.Control.duty_cycle.ZSM.Sum3
    _pv2_pv_plant_control_duty_cycle_zsm_sum3__out =  - _pv2_pv_plant_control_duty_cycle_zsm_sum8__out - _pv2_pv_plant_control_duty_cycle_zsm_product2__out + _pv2_pv_plant_control_duty_cycle_zsm_product1__out;
    // Generated from the component: PV1.PV Plant.Control.duty_cycle.ZSM.Sum5
    _pv1_pv_plant_control_duty_cycle_zsm_sum5__out = _pv1_pv_plant_control_duty_cycle_dq_to_abc1_alpha_beta_to_abc__A + _pv1_pv_plant_control_duty_cycle_zsm_sum3__out;
    // Generated from the component: PV1.PV Plant.Control.duty_cycle.ZSM.Sum6
    _pv1_pv_plant_control_duty_cycle_zsm_sum6__out = _pv1_pv_plant_control_duty_cycle_dq_to_abc1_alpha_beta_to_abc__B + _pv1_pv_plant_control_duty_cycle_zsm_sum3__out;
    // Generated from the component: PV1.PV Plant.Control.duty_cycle.ZSM.Sum7
    _pv1_pv_plant_control_duty_cycle_zsm_sum7__out = _pv1_pv_plant_control_duty_cycle_dq_to_abc1_alpha_beta_to_abc__C + _pv1_pv_plant_control_duty_cycle_zsm_sum3__out;
    // Generated from the component: PV1.PV Plant.Control.duty_cycle.ZSM.Z0
    HIL_OutAO(0x408f, (float)_pv1_pv_plant_control_duty_cycle_zsm_sum3__out);
    // Generated from the component: PV2.PV Plant.Control.duty_cycle.ZSM.Sum5
    _pv2_pv_plant_control_duty_cycle_zsm_sum5__out = _pv2_pv_plant_control_duty_cycle_dq_to_abc1_alpha_beta_to_abc__A + _pv2_pv_plant_control_duty_cycle_zsm_sum3__out;
    // Generated from the component: PV2.PV Plant.Control.duty_cycle.ZSM.Sum6
    _pv2_pv_plant_control_duty_cycle_zsm_sum6__out = _pv2_pv_plant_control_duty_cycle_dq_to_abc1_alpha_beta_to_abc__B + _pv2_pv_plant_control_duty_cycle_zsm_sum3__out;
    // Generated from the component: PV2.PV Plant.Control.duty_cycle.ZSM.Sum7
    _pv2_pv_plant_control_duty_cycle_zsm_sum7__out = _pv2_pv_plant_control_duty_cycle_dq_to_abc1_alpha_beta_to_abc__C + _pv2_pv_plant_control_duty_cycle_zsm_sum3__out;
    // Generated from the component: PV2.PV Plant.Control.duty_cycle.ZSM.Z0
    HIL_OutAO(0x40b0, (float)_pv2_pv_plant_control_duty_cycle_zsm_sum3__out);
    // Generated from the component: PV1.PV Plant.3ph_inverter 1.IGBT Leg1.PWM_Modulator
    if (_pv1_pv_plant_control_duty_cycle_zsm_sum5__out < -1.0)
        _pv1_pv_plant_3ph_inverter_1_igbt_leg1_pwm_modulator__limited_in[0] = -1.0;
    else if (_pv1_pv_plant_control_duty_cycle_zsm_sum5__out > 1.0)
        _pv1_pv_plant_3ph_inverter_1_igbt_leg1_pwm_modulator__limited_in[0] = 1.0;
    else
        _pv1_pv_plant_3ph_inverter_1_igbt_leg1_pwm_modulator__limited_in[0] = _pv1_pv_plant_control_duty_cycle_zsm_sum5__out;
    HIL_OutInt32(0x2000040 + _pv1_pv_plant_3ph_inverter_1_igbt_leg1_pwm_modulator__channels[0], ((unsigned)((_pv1_pv_plant_3ph_inverter_1_igbt_leg1_pwm_modulator__limited_in[0] - (-1.0)) * 1250.0)));
    if (_pv1_pv_plant_logical_operator1__out == 0x0) {
        // pwm_modulator_en
        HIL_OutInt32(0x2000000 + _pv1_pv_plant_3ph_inverter_1_igbt_leg1_pwm_modulator__channels[0], 0x0);
    }
    else {
        // pwm_modulator_en
        HIL_OutInt32(0x2000000 + _pv1_pv_plant_3ph_inverter_1_igbt_leg1_pwm_modulator__channels[0], 0x1);
    }
    HIL_OutInt32(0x2000140, _pv1_pv_plant_3ph_inverter_1_igbt_leg1_pwm_modulator__update_mask);
    // Generated from the component: PV1.PV Plant.Control.duty_cycle.Dz_A
    HIL_OutAO(0x408c, (float)_pv1_pv_plant_control_duty_cycle_zsm_sum5__out);
    // Generated from the component: PV1.PV Plant.3ph_inverter 1.IGBT Leg2.PWM_Modulator
    if (_pv1_pv_plant_control_duty_cycle_zsm_sum6__out < -1.0)
        _pv1_pv_plant_3ph_inverter_1_igbt_leg2_pwm_modulator__limited_in[0] = -1.0;
    else if (_pv1_pv_plant_control_duty_cycle_zsm_sum6__out > 1.0)
        _pv1_pv_plant_3ph_inverter_1_igbt_leg2_pwm_modulator__limited_in[0] = 1.0;
    else
        _pv1_pv_plant_3ph_inverter_1_igbt_leg2_pwm_modulator__limited_in[0] = _pv1_pv_plant_control_duty_cycle_zsm_sum6__out;
    HIL_OutInt32(0x2000040 + _pv1_pv_plant_3ph_inverter_1_igbt_leg2_pwm_modulator__channels[0], ((unsigned)((_pv1_pv_plant_3ph_inverter_1_igbt_leg2_pwm_modulator__limited_in[0] - (-1.0)) * 1250.0)));
    if (_pv1_pv_plant_logical_operator1__out == 0x0) {
        // pwm_modulator_en
        HIL_OutInt32(0x2000000 + _pv1_pv_plant_3ph_inverter_1_igbt_leg2_pwm_modulator__channels[0], 0x0);
    }
    else {
        // pwm_modulator_en
        HIL_OutInt32(0x2000000 + _pv1_pv_plant_3ph_inverter_1_igbt_leg2_pwm_modulator__channels[0], 0x1);
    }
    HIL_OutInt32(0x2000140, _pv1_pv_plant_3ph_inverter_1_igbt_leg2_pwm_modulator__update_mask);
    // Generated from the component: PV1.PV Plant.Control.duty_cycle.Dz_B
    HIL_OutAO(0x408d, (float)_pv1_pv_plant_control_duty_cycle_zsm_sum6__out);
    // Generated from the component: PV1.PV Plant.3ph_inverter 1.IGBT Leg3.PWM_Modulator
    if (_pv1_pv_plant_control_duty_cycle_zsm_sum7__out < -1.0)
        _pv1_pv_plant_3ph_inverter_1_igbt_leg3_pwm_modulator__limited_in[0] = -1.0;
    else if (_pv1_pv_plant_control_duty_cycle_zsm_sum7__out > 1.0)
        _pv1_pv_plant_3ph_inverter_1_igbt_leg3_pwm_modulator__limited_in[0] = 1.0;
    else
        _pv1_pv_plant_3ph_inverter_1_igbt_leg3_pwm_modulator__limited_in[0] = _pv1_pv_plant_control_duty_cycle_zsm_sum7__out;
    HIL_OutInt32(0x2000040 + _pv1_pv_plant_3ph_inverter_1_igbt_leg3_pwm_modulator__channels[0], ((unsigned)((_pv1_pv_plant_3ph_inverter_1_igbt_leg3_pwm_modulator__limited_in[0] - (-1.0)) * 1250.0)));
    if (_pv1_pv_plant_logical_operator1__out == 0x0) {
        // pwm_modulator_en
        HIL_OutInt32(0x2000000 + _pv1_pv_plant_3ph_inverter_1_igbt_leg3_pwm_modulator__channels[0], 0x0);
    }
    else {
        // pwm_modulator_en
        HIL_OutInt32(0x2000000 + _pv1_pv_plant_3ph_inverter_1_igbt_leg3_pwm_modulator__channels[0], 0x1);
    }
    HIL_OutInt32(0x2000140, _pv1_pv_plant_3ph_inverter_1_igbt_leg3_pwm_modulator__update_mask);
    // Generated from the component: PV1.PV Plant.Control.duty_cycle.Dz_C
    HIL_OutAO(0x408e, (float)_pv1_pv_plant_control_duty_cycle_zsm_sum7__out);
    // Generated from the component: PV2.PV Plant.3ph_inverter 1.IGBT Leg1.PWM_Modulator
    if (_pv2_pv_plant_control_duty_cycle_zsm_sum5__out < -1.0)
        _pv2_pv_plant_3ph_inverter_1_igbt_leg1_pwm_modulator__limited_in[0] = -1.0;
    else if (_pv2_pv_plant_control_duty_cycle_zsm_sum5__out > 1.0)
        _pv2_pv_plant_3ph_inverter_1_igbt_leg1_pwm_modulator__limited_in[0] = 1.0;
    else
        _pv2_pv_plant_3ph_inverter_1_igbt_leg1_pwm_modulator__limited_in[0] = _pv2_pv_plant_control_duty_cycle_zsm_sum5__out;
    HIL_OutInt32(0x2000040 + _pv2_pv_plant_3ph_inverter_1_igbt_leg1_pwm_modulator__channels[0], ((unsigned)((_pv2_pv_plant_3ph_inverter_1_igbt_leg1_pwm_modulator__limited_in[0] - (-1.0)) * 1250.0)));
    if (_pv2_pv_plant_logical_operator1__out == 0x0) {
        // pwm_modulator_en
        HIL_OutInt32(0x2000000 + _pv2_pv_plant_3ph_inverter_1_igbt_leg1_pwm_modulator__channels[0], 0x0);
    }
    else {
        // pwm_modulator_en
        HIL_OutInt32(0x2000000 + _pv2_pv_plant_3ph_inverter_1_igbt_leg1_pwm_modulator__channels[0], 0x1);
    }
    HIL_OutInt32(0x2000140, _pv2_pv_plant_3ph_inverter_1_igbt_leg1_pwm_modulator__update_mask);
    // Generated from the component: PV2.PV Plant.Control.duty_cycle.Dz_A
    HIL_OutAO(0x40ad, (float)_pv2_pv_plant_control_duty_cycle_zsm_sum5__out);
    // Generated from the component: PV2.PV Plant.3ph_inverter 1.IGBT Leg2.PWM_Modulator
    if (_pv2_pv_plant_control_duty_cycle_zsm_sum6__out < -1.0)
        _pv2_pv_plant_3ph_inverter_1_igbt_leg2_pwm_modulator__limited_in[0] = -1.0;
    else if (_pv2_pv_plant_control_duty_cycle_zsm_sum6__out > 1.0)
        _pv2_pv_plant_3ph_inverter_1_igbt_leg2_pwm_modulator__limited_in[0] = 1.0;
    else
        _pv2_pv_plant_3ph_inverter_1_igbt_leg2_pwm_modulator__limited_in[0] = _pv2_pv_plant_control_duty_cycle_zsm_sum6__out;
    HIL_OutInt32(0x2000040 + _pv2_pv_plant_3ph_inverter_1_igbt_leg2_pwm_modulator__channels[0], ((unsigned)((_pv2_pv_plant_3ph_inverter_1_igbt_leg2_pwm_modulator__limited_in[0] - (-1.0)) * 1250.0)));
    if (_pv2_pv_plant_logical_operator1__out == 0x0) {
        // pwm_modulator_en
        HIL_OutInt32(0x2000000 + _pv2_pv_plant_3ph_inverter_1_igbt_leg2_pwm_modulator__channels[0], 0x0);
    }
    else {
        // pwm_modulator_en
        HIL_OutInt32(0x2000000 + _pv2_pv_plant_3ph_inverter_1_igbt_leg2_pwm_modulator__channels[0], 0x1);
    }
    HIL_OutInt32(0x2000140, _pv2_pv_plant_3ph_inverter_1_igbt_leg2_pwm_modulator__update_mask);
    // Generated from the component: PV2.PV Plant.Control.duty_cycle.Dz_B
    HIL_OutAO(0x40ae, (float)_pv2_pv_plant_control_duty_cycle_zsm_sum6__out);
    // Generated from the component: PV2.PV Plant.3ph_inverter 1.IGBT Leg3.PWM_Modulator
    if (_pv2_pv_plant_control_duty_cycle_zsm_sum7__out < -1.0)
        _pv2_pv_plant_3ph_inverter_1_igbt_leg3_pwm_modulator__limited_in[0] = -1.0;
    else if (_pv2_pv_plant_control_duty_cycle_zsm_sum7__out > 1.0)
        _pv2_pv_plant_3ph_inverter_1_igbt_leg3_pwm_modulator__limited_in[0] = 1.0;
    else
        _pv2_pv_plant_3ph_inverter_1_igbt_leg3_pwm_modulator__limited_in[0] = _pv2_pv_plant_control_duty_cycle_zsm_sum7__out;
    HIL_OutInt32(0x2000040 + _pv2_pv_plant_3ph_inverter_1_igbt_leg3_pwm_modulator__channels[0], ((unsigned)((_pv2_pv_plant_3ph_inverter_1_igbt_leg3_pwm_modulator__limited_in[0] - (-1.0)) * 1250.0)));
    if (_pv2_pv_plant_logical_operator1__out == 0x0) {
        // pwm_modulator_en
        HIL_OutInt32(0x2000000 + _pv2_pv_plant_3ph_inverter_1_igbt_leg3_pwm_modulator__channels[0], 0x0);
    }
    else {
        // pwm_modulator_en
        HIL_OutInt32(0x2000000 + _pv2_pv_plant_3ph_inverter_1_igbt_leg3_pwm_modulator__channels[0], 0x1);
    }
    HIL_OutInt32(0x2000140, _pv2_pv_plant_3ph_inverter_1_igbt_leg3_pwm_modulator__update_mask);
    // Generated from the component: PV2.PV Plant.Control.duty_cycle.Dz_C
    HIL_OutAO(0x40af, (float)_pv2_pv_plant_control_duty_cycle_zsm_sum7__out);
    //@cmp.out.block.end
    //////////////////////////////////////////////////////////////////////////
    // Update block
    //////////////////////////////////////////////////////////////////////////
    //@cmp.update.block.start
    // Generated from the component: ESS1.BE1-25A Synchronizer.Unit Delay2
    _ess1_be1_25a_synchronizer_unit_delay2__state = _ess1_be1_25a_synchronizer_pll_confine_phase__out;
    // Generated from the component: ESS1.Controller.Frequency droop.Clock1
    _ess1_controller_frequency_droop_clock1__state += 2e-05;
    // Generated from the component: ESS1.Controller.Frequency droop.Clock2
    _ess1_controller_frequency_droop_clock2__state += 2e-05;
    // Generated from the component: ESS1.Controller.Integrator2
    _ess1_controller_integrator2__state += _ess1_controller_gain4__out * 2e-05;
    // Generated from the component: ESS1.Controller.Integrator3
    _ess1_controller_integrator3__state += _ess1_controller_gain13__out * 2e-05;
    // Generated from the component: ESS1.Controller.PLL.PLL.PID.Integrator1
    _ess1_controller_pll_pll_pid_integrator1__state += _ess1_controller_pll_pll_pid_sum7__out * 2e-05;
    // Generated from the component: ESS1.Controller.PLL.PLL.PID.Integrator2
    _ess1_controller_pll_pll_pid_integrator2__state += _ess1_controller_pll_pll_pid_gain1__out * 2e-05;
    // Generated from the component: ESS1.Controller.PLL.PLL.Unit Delay1
    _ess1_controller_pll_pll_unit_delay1__state = _ess1_controller_pll_pll_integrator__out;
    // Generated from the component: ESS1.Controller.Voltage droop.Clock1
    _ess1_controller_voltage_droop_clock1__state += 2e-05;
    // Generated from the component: ESS1.Controller.Voltage droop.Clock2
    _ess1_controller_voltage_droop_clock2__state += 2e-05;
    // Generated from the component: ESS1.Power_Meas.Power_Meas_DQpu.S_and_pf
    // Generated from the component: ESS2.BE1-25A Synchronizer.Unit Delay2
    _ess2_be1_25a_synchronizer_unit_delay2__state = _ess2_be1_25a_synchronizer_pll_confine_phase__out;
    // Generated from the component: ESS2.Controller.Frequency droop.Clock1
    _ess2_controller_frequency_droop_clock1__state += 2e-05;
    // Generated from the component: ESS2.Controller.Frequency droop.Clock2
    _ess2_controller_frequency_droop_clock2__state += 2e-05;
    // Generated from the component: ESS2.Controller.Integrator2
    _ess2_controller_integrator2__state += _ess2_controller_gain4__out * 2e-05;
    // Generated from the component: ESS2.Controller.Integrator3
    _ess2_controller_integrator3__state += _ess2_controller_gain13__out * 2e-05;
    // Generated from the component: ESS2.Controller.PLL.PLL.PID.Integrator1
    _ess2_controller_pll_pll_pid_integrator1__state += _ess2_controller_pll_pll_pid_sum7__out * 2e-05;
    // Generated from the component: ESS2.Controller.PLL.PLL.PID.Integrator2
    _ess2_controller_pll_pll_pid_integrator2__state += _ess2_controller_pll_pll_pid_gain1__out * 2e-05;
    // Generated from the component: ESS2.Controller.PLL.PLL.Unit Delay1
    _ess2_controller_pll_pll_unit_delay1__state = _ess2_controller_pll_pll_integrator__out;
    // Generated from the component: ESS2.Controller.Voltage droop.Clock1
    _ess2_controller_voltage_droop_clock1__state += 2e-05;
    // Generated from the component: ESS2.Controller.Voltage droop.Clock2
    _ess2_controller_voltage_droop_clock2__state += 2e-05;
    // Generated from the component: ESS2.Power_Meas.Power_Meas_DQpu.S_and_pf
    // Generated from the component: PV1.PV Plant.Control.Grid_follow.Edge Detection1.Unit Delay1
    _pv1_pv_plant_control_grid_follow_edge_detection1_unit_delay1__state = _pv1_pv_plant_input_bus_split2__out1;
    // Generated from the component: PV1.PV Plant.Control.Grid_follow.Limit_PQref.Unit Delay1
    _pv1_pv_plant_control_grid_follow_limit_pqref_unit_delay1__state = _pv1_pv_plant_control_grid_follow_limit_pqref_lims_overpq_s_limiting_over_pq__P;
    // Generated from the component: PV1.PV Plant.Control.Grid_follow.Limit_PQref.Unit Delay2
    _pv1_pv_plant_control_grid_follow_limit_pqref_unit_delay2__state = _pv1_pv_plant_control_grid_follow_limit_pqref_lims_overpq_s_limiting_over_pq__Q;
    // Generated from the component: PV1.PV Plant.Control.Grid_follow.Power_Meas.Power_Meas_DQpu.S_and_pf
    // Generated from the component: PV1.PV Plant.Control.Grid_follow.Power_Meas1.Power_Meas_DQpu.S_and_pf
    // Generated from the component: PV1.PV Plant.Control.PLL.PLL.PID.Integrator1
    _pv1_pv_plant_control_pll_pll_pid_integrator1__state += _pv1_pv_plant_control_pll_pll_pid_sum7__out * 2e-05;
    // Generated from the component: PV1.PV Plant.Control.PLL.PLL.PID.Integrator2
    _pv1_pv_plant_control_pll_pll_pid_integrator2__state += _pv1_pv_plant_control_pll_pll_pid_gain1__out * 2e-05;
    // Generated from the component: PV1.PV Plant.Control.PLL.PLL.Unit Delay1
    _pv1_pv_plant_control_pll_pll_unit_delay1__state = _pv1_pv_plant_control_pll_pll_integrator__out;
    // Generated from the component: PV2.PV Plant.Control.Grid_follow.Edge Detection1.Unit Delay1
    _pv2_pv_plant_control_grid_follow_edge_detection1_unit_delay1__state = _pv2_pv_plant_input_bus_split2__out1;
    // Generated from the component: PV2.PV Plant.Control.Grid_follow.Limit_PQref.Unit Delay1
    _pv2_pv_plant_control_grid_follow_limit_pqref_unit_delay1__state = _pv2_pv_plant_control_grid_follow_limit_pqref_lims_overpq_s_limiting_over_pq__P;
    // Generated from the component: PV2.PV Plant.Control.Grid_follow.Limit_PQref.Unit Delay2
    _pv2_pv_plant_control_grid_follow_limit_pqref_unit_delay2__state = _pv2_pv_plant_control_grid_follow_limit_pqref_lims_overpq_s_limiting_over_pq__Q;
    // Generated from the component: PV2.PV Plant.Control.Grid_follow.Power_Meas.Power_Meas_DQpu.S_and_pf
    // Generated from the component: PV2.PV Plant.Control.Grid_follow.Power_Meas1.Power_Meas_DQpu.S_and_pf
    // Generated from the component: PV2.PV Plant.Control.PLL.PLL.PID.Integrator1
    _pv2_pv_plant_control_pll_pll_pid_integrator1__state += _pv2_pv_plant_control_pll_pll_pid_sum7__out * 2e-05;
    // Generated from the component: PV2.PV Plant.Control.PLL.PLL.PID.Integrator2
    _pv2_pv_plant_control_pll_pll_pid_integrator2__state += _pv2_pv_plant_control_pll_pll_pid_gain1__out * 2e-05;
    // Generated from the component: PV2.PV Plant.Control.PLL.PLL.Unit Delay1
    _pv2_pv_plant_control_pll_pll_unit_delay1__state = _pv2_pv_plant_control_pll_pll_integrator__out;
    // Generated from the component: ESS1.Battery.C function2
    // Generated from the component: ESS1.C function1
    // Generated from the component: ESS1.C function2
    // Generated from the component: ESS1.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.LPF_dc
    _ess1_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__states[0] = _ess1_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__delay_line_in;
    // Generated from the component: ESS2.Battery.C function2
    // Generated from the component: ESS2.C function1
    // Generated from the component: ESS2.C function2
    // Generated from the component: ESS2.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.LPF_dc
    _ess2_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__states[0] = _ess2_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__delay_line_in;
    // Generated from the component: PV1.Solar irradiance.C function2
    _pv1_solar_irradiance_c_function2__k = _pv1_solar_irradiance_c_function2__GHI / _pv1_solar_irradiance_c_function2__ETR;
    // Generated from the component: PV2.Solar irradiance.C function2
    _pv2_solar_irradiance_c_function2__k = _pv2_solar_irradiance_c_function2__GHI / _pv2_solar_irradiance_c_function2__ETR;
    // Generated from the component: ESS1.Battery.C function1
    // Generated from the component: ESS1.Battery.LPF_dc
    _ess1_battery_lpf_dc__states[0] = _ess1_battery_lpf_dc__delay_line_in;
    // Generated from the component: ESS2.Battery.C function1
    // Generated from the component: ESS2.Battery.LPF_dc
    _ess2_battery_lpf_dc__states[0] = _ess2_battery_lpf_dc__delay_line_in;
    // Generated from the component: PV1.PV Plant.Control.Grid_follow.ControlSignal_Calculation.LPF_dc
    _pv1_pv_plant_control_grid_follow_controlsignal_calculation_lpf_dc__states[0] = _pv1_pv_plant_control_grid_follow_controlsignal_calculation_lpf_dc__delay_line_in;
    // Generated from the component: PV2.PV Plant.Control.Grid_follow.ControlSignal_Calculation.LPF_dc
    _pv2_pv_plant_control_grid_follow_controlsignal_calculation_lpf_dc__states[0] = _pv2_pv_plant_control_grid_follow_controlsignal_calculation_lpf_dc__delay_line_in;
    // Generated from the component: ESS1.Controller.PLL.PLL.abc to dq.LPF_d
    _ess1_controller_pll_pll_abc_to_dq_lpf_d__states[0] = _ess1_controller_pll_pll_abc_to_dq_lpf_d__delay_line_in;
    // Generated from the component: ESS1.Controller.PLL.PLL.abc to dq.LPF_q
    _ess1_controller_pll_pll_abc_to_dq_lpf_q__states[0] = _ess1_controller_pll_pll_abc_to_dq_lpf_q__delay_line_in;
    // Generated from the component: ESS2.Controller.PLL.PLL.abc to dq.LPF_d
    _ess2_controller_pll_pll_abc_to_dq_lpf_d__states[0] = _ess2_controller_pll_pll_abc_to_dq_lpf_d__delay_line_in;
    // Generated from the component: ESS2.Controller.PLL.PLL.abc to dq.LPF_q
    _ess2_controller_pll_pll_abc_to_dq_lpf_q__states[0] = _ess2_controller_pll_pll_abc_to_dq_lpf_q__delay_line_in;
    // Generated from the component: ESS1.Controller.PLL.PLL.normalize
    // Generated from the component: ESS1.BE1-25A Synchronizer.PLL.PID controller1
    if (!_ess1_be1_25a_synchronizer_pll_pid_controller1__av_active) {
        _ess1_be1_25a_synchronizer_pll_pid_controller1__integrator_state += 2.0 * _ess1_be1_25a_synchronizer_gain6__out * 2e-05;
    }
    // Generated from the component: ESS2.Controller.PLL.PLL.normalize
    // Generated from the component: ESS2.BE1-25A Synchronizer.PLL.PID controller1
    if (!_ess2_be1_25a_synchronizer_pll_pid_controller1__av_active) {
        _ess2_be1_25a_synchronizer_pll_pid_controller1__integrator_state += 2.0 * _ess2_be1_25a_synchronizer_gain6__out * 2e-05;
    }
    // Generated from the component: ESS1.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Discrete Transfer Function1
    _ess1_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_discrete_transfer_function1__states[0] = _ess1_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_discrete_transfer_function1__delay_line_in;
    // Generated from the component: ESS1.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Discrete Transfer Function2
    _ess1_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_discrete_transfer_function2__states[0] = _ess1_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_discrete_transfer_function2__delay_line_in;
    // Generated from the component: ESS1.Controller.Frequency droop.C function1
    // Generated from the component: ESS1.Controller.Voltage droop.C function1
    // Generated from the component: ESS1.BE1-25A Synchronizer.PLL.C function1
    _ess1_be1_25a_synchronizer_pll_c_function1__var += (2e-05 * _ess1_be1_25a_synchronizer_pll_c_function1__in);
    // Generated from the component: ESS2.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Discrete Transfer Function1
    _ess2_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_discrete_transfer_function1__states[0] = _ess2_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_discrete_transfer_function1__delay_line_in;
    // Generated from the component: ESS2.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Discrete Transfer Function2
    _ess2_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_discrete_transfer_function2__states[0] = _ess2_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_discrete_transfer_function2__delay_line_in;
    // Generated from the component: ESS2.Controller.Frequency droop.C function1
    // Generated from the component: ESS2.Controller.Voltage droop.C function1
    // Generated from the component: ESS2.BE1-25A Synchronizer.PLL.C function1
    _ess2_be1_25a_synchronizer_pll_c_function1__var += (2e-05 * _ess2_be1_25a_synchronizer_pll_c_function1__in);
    // Generated from the component: PV1.Solar irradiance.C function3
    // Generated from the component: PV2.Solar irradiance.C function3
    // Generated from the component: ESS1.BE1-25A Synchronizer.confine phase1
    // Generated from the component: ESS1.BE1-25A Synchronizer.confine phase2
    // Generated from the component: ESS1.BE1-25A Synchronizer.PLL.confine phase
    // Generated from the component: ESS2.BE1-25A Synchronizer.confine phase1
    // Generated from the component: ESS2.BE1-25A Synchronizer.confine phase2
    // Generated from the component: ESS2.BE1-25A Synchronizer.PLL.confine phase
    // Generated from the component: ESS1.Controller.Outer Voltage Loop + Inner Current Loop.outer power loop.Comparator1
    if (_ess1_controller_outer_voltage_loop___inner_current_loop_squared_vt2_sum3__out < _ess1_controller_outer_voltage_loop___inner_current_loop_outer_power_loop_limit_zero__out) {
        _ess1_controller_outer_voltage_loop___inner_current_loop_outer_power_loop_comparator1__state = 0;
    } else if (_ess1_controller_outer_voltage_loop___inner_current_loop_squared_vt2_sum3__out > _ess1_controller_outer_voltage_loop___inner_current_loop_outer_power_loop_limit_zero__out) {
        _ess1_controller_outer_voltage_loop___inner_current_loop_outer_power_loop_comparator1__state = 1;
    }
    // Generated from the component: ESS1.Power_Meas.Power_Meas_DQpu.LPF_P
    _ess1_power_meas_power_meas_dqpu_lpf_p__states[0] = _ess1_power_meas_power_meas_dqpu_lpf_p__delay_line_in;
    // Generated from the component: ESS1.Power_Meas.Power_Meas_DQpu.LPF_Q
    _ess1_power_meas_power_meas_dqpu_lpf_q__states[0] = _ess1_power_meas_power_meas_dqpu_lpf_q__delay_line_in;
    // Generated from the component: ESS1.Controller.Frequency droop.C function2
    if (_ess1_controller_frequency_droop_c_function2__connected < 1 && _ess1_controller_frequency_droop_c_function2__cnt > 0) {
        _ess1_controller_frequency_droop_c_function2__time = _ess1_controller_frequency_droop_c_function2__clk;
    }
    if (_ess1_controller_frequency_droop_c_function2__cnt > 0) {
        _ess1_controller_frequency_droop_c_function2__connected = 1;
    }
    // Generated from the component: ESS1.Controller.Voltage droop.C function2
    // Generated from the component: ESS2.Controller.Outer Voltage Loop + Inner Current Loop.outer power loop.Comparator1
    if (_ess2_controller_outer_voltage_loop___inner_current_loop_squared_vt2_sum3__out < _ess2_controller_outer_voltage_loop___inner_current_loop_outer_power_loop_limit_zero__out) {
        _ess2_controller_outer_voltage_loop___inner_current_loop_outer_power_loop_comparator1__state = 0;
    } else if (_ess2_controller_outer_voltage_loop___inner_current_loop_squared_vt2_sum3__out > _ess2_controller_outer_voltage_loop___inner_current_loop_outer_power_loop_limit_zero__out) {
        _ess2_controller_outer_voltage_loop___inner_current_loop_outer_power_loop_comparator1__state = 1;
    }
    // Generated from the component: ESS2.Power_Meas.Power_Meas_DQpu.LPF_P
    _ess2_power_meas_power_meas_dqpu_lpf_p__states[0] = _ess2_power_meas_power_meas_dqpu_lpf_p__delay_line_in;
    // Generated from the component: ESS2.Power_Meas.Power_Meas_DQpu.LPF_Q
    _ess2_power_meas_power_meas_dqpu_lpf_q__states[0] = _ess2_power_meas_power_meas_dqpu_lpf_q__delay_line_in;
    // Generated from the component: ESS2.Controller.Frequency droop.C function2
    if (_ess2_controller_frequency_droop_c_function2__connected < 1 && _ess2_controller_frequency_droop_c_function2__cnt > 0) {
        _ess2_controller_frequency_droop_c_function2__time = _ess2_controller_frequency_droop_c_function2__clk;
    }
    if (_ess2_controller_frequency_droop_c_function2__cnt > 0) {
        _ess2_controller_frequency_droop_c_function2__connected = 1;
    }
    // Generated from the component: ESS2.Controller.Voltage droop.C function2
    // Generated from the component: ESS1.BE1-25A Synchronizer.confine phase
    // Generated from the component: ESS2.BE1-25A Synchronizer.confine phase
    // Generated from the component: ESS1.Controller.Outer Voltage Loop + Inner Current Loop.Outer voltage control loop.PID controller4
    if (!_ess1_controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_pid_controller4__av_active) {
        _ess1_controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_pid_controller4__integrator_state += 0.7493 * _ess1_controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_limit2__out * 2e-05;
    }
    // Generated from the component: ESS2.Controller.Outer Voltage Loop + Inner Current Loop.Outer voltage control loop.PID controller4
    if (!_ess2_controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_pid_controller4__av_active) {
        _ess2_controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_pid_controller4__integrator_state += 0.7493 * _ess2_controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_limit2__out * 2e-05;
    }
    // Generated from the component: PV1.PV Plant.Control.Grid_follow.delay
    // Generated from the component: PV1.PV Plant.delay
    // Generated from the component: PV2.PV Plant.Control.Grid_follow.delay
    // Generated from the component: PV2.PV Plant.delay
    // Generated from the component: ESS1.Controller.PLL.PLL.Rate Limiter1
    _ess1_controller_pll_pll_rate_limiter1__prev_out = _ess1_controller_pll_pll_rate_limiter1__out;
    _ess1_controller_pll_pll_rate_limiter1__first_step = 0;
    // Generated from the component: ESS1.Controller.PLL.PLL.integrator
    // Generated from the component: ESS2.Controller.PLL.PLL.Rate Limiter1
    _ess2_controller_pll_pll_rate_limiter1__prev_out = _ess2_controller_pll_pll_rate_limiter1__out;
    _ess2_controller_pll_pll_rate_limiter1__first_step = 0;
    // Generated from the component: ESS2.Controller.PLL.PLL.integrator
    // Generated from the component: PV1.PV Plant.Control.Grid_follow.ControlSignal_Calculation.PI_d.Integrator1
    _pv1_pv_plant_control_grid_follow_controlsignal_calculation_pi_d_integrator1__state += _pv1_pv_plant_control_grid_follow_controlsignal_calculation_pi_d_sum7__out * 2e-05;
    if (_pv1_pv_plant_control_grid_follow_edge_detection1_relational_operator1__out > 0)
        _pv1_pv_plant_control_grid_follow_controlsignal_calculation_pi_d_integrator1__reset_state = 1;
    else if (_pv1_pv_plant_control_grid_follow_edge_detection1_relational_operator1__out < 0)
        _pv1_pv_plant_control_grid_follow_controlsignal_calculation_pi_d_integrator1__reset_state = -1;
    else
        _pv1_pv_plant_control_grid_follow_controlsignal_calculation_pi_d_integrator1__reset_state = 0;
    // Generated from the component: PV1.PV Plant.Control.Grid_follow.ControlSignal_Calculation.PI_q.Integrator1
    _pv1_pv_plant_control_grid_follow_controlsignal_calculation_pi_q_integrator1__state += _pv1_pv_plant_control_grid_follow_controlsignal_calculation_pi_q_sum7__out * 2e-05;
    if (_pv1_pv_plant_control_grid_follow_edge_detection1_relational_operator1__out > 0)
        _pv1_pv_plant_control_grid_follow_controlsignal_calculation_pi_q_integrator1__reset_state = 1;
    else if (_pv1_pv_plant_control_grid_follow_edge_detection1_relational_operator1__out < 0)
        _pv1_pv_plant_control_grid_follow_controlsignal_calculation_pi_q_integrator1__reset_state = -1;
    else
        _pv1_pv_plant_control_grid_follow_controlsignal_calculation_pi_q_integrator1__reset_state = 0;
    // Generated from the component: PV1.PV Plant.Control.Grid_follow.PI_Vt.Integrator1
    _pv1_pv_plant_control_grid_follow_pi_vt_integrator1__state += _pv1_pv_plant_control_grid_follow_pi_vt_sum7__out * 2e-05;
    if (_pv1_pv_plant_control_grid_follow_logical_operator1__out > 0)
        _pv1_pv_plant_control_grid_follow_pi_vt_integrator1__reset_state = 1;
    else if (_pv1_pv_plant_control_grid_follow_logical_operator1__out < 0)
        _pv1_pv_plant_control_grid_follow_pi_vt_integrator1__reset_state = -1;
    else
        _pv1_pv_plant_control_grid_follow_pi_vt_integrator1__reset_state = 0;
    // Generated from the component: PV2.PV Plant.Control.Grid_follow.ControlSignal_Calculation.PI_d.Integrator1
    _pv2_pv_plant_control_grid_follow_controlsignal_calculation_pi_d_integrator1__state += _pv2_pv_plant_control_grid_follow_controlsignal_calculation_pi_d_sum7__out * 2e-05;
    if (_pv2_pv_plant_control_grid_follow_edge_detection1_relational_operator1__out > 0)
        _pv2_pv_plant_control_grid_follow_controlsignal_calculation_pi_d_integrator1__reset_state = 1;
    else if (_pv2_pv_plant_control_grid_follow_edge_detection1_relational_operator1__out < 0)
        _pv2_pv_plant_control_grid_follow_controlsignal_calculation_pi_d_integrator1__reset_state = -1;
    else
        _pv2_pv_plant_control_grid_follow_controlsignal_calculation_pi_d_integrator1__reset_state = 0;
    // Generated from the component: PV2.PV Plant.Control.Grid_follow.ControlSignal_Calculation.PI_q.Integrator1
    _pv2_pv_plant_control_grid_follow_controlsignal_calculation_pi_q_integrator1__state += _pv2_pv_plant_control_grid_follow_controlsignal_calculation_pi_q_sum7__out * 2e-05;
    if (_pv2_pv_plant_control_grid_follow_edge_detection1_relational_operator1__out > 0)
        _pv2_pv_plant_control_grid_follow_controlsignal_calculation_pi_q_integrator1__reset_state = 1;
    else if (_pv2_pv_plant_control_grid_follow_edge_detection1_relational_operator1__out < 0)
        _pv2_pv_plant_control_grid_follow_controlsignal_calculation_pi_q_integrator1__reset_state = -1;
    else
        _pv2_pv_plant_control_grid_follow_controlsignal_calculation_pi_q_integrator1__reset_state = 0;
    // Generated from the component: PV2.PV Plant.Control.Grid_follow.PI_Vt.Integrator1
    _pv2_pv_plant_control_grid_follow_pi_vt_integrator1__state += _pv2_pv_plant_control_grid_follow_pi_vt_sum7__out * 2e-05;
    if (_pv2_pv_plant_control_grid_follow_logical_operator1__out > 0)
        _pv2_pv_plant_control_grid_follow_pi_vt_integrator1__reset_state = 1;
    else if (_pv2_pv_plant_control_grid_follow_logical_operator1__out < 0)
        _pv2_pv_plant_control_grid_follow_pi_vt_integrator1__reset_state = -1;
    else
        _pv2_pv_plant_control_grid_follow_pi_vt_integrator1__reset_state = 0;
    // Generated from the component: ESS1.Controller.PLL.PLL.LPF.LPF
    for (_ess1_controller_pll_pll_lpf_lpf__i = 1; _ess1_controller_pll_pll_lpf_lpf__i > 0; _ess1_controller_pll_pll_lpf_lpf__i--) {
        _ess1_controller_pll_pll_lpf_lpf__states[_ess1_controller_pll_pll_lpf_lpf__i] = _ess1_controller_pll_pll_lpf_lpf__states[_ess1_controller_pll_pll_lpf_lpf__i - 1];
    }
    _ess1_controller_pll_pll_lpf_lpf__states[0] = _ess1_controller_pll_pll_lpf_lpf__delay_line_in;
    // Generated from the component: ESS1.Controller.Outer Voltage Loop + Inner Current Loop.Outer voltage control loop.PID controller3
    if (!_ess1_controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_pid_controller3__av_active) {
        _ess1_controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_pid_controller3__integrator_state += 0.7493 * _ess1_controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_limit1__out * 2e-05;
    }
    // Generated from the component: ESS2.Controller.PLL.PLL.LPF.LPF
    for (_ess2_controller_pll_pll_lpf_lpf__i = 1; _ess2_controller_pll_pll_lpf_lpf__i > 0; _ess2_controller_pll_pll_lpf_lpf__i--) {
        _ess2_controller_pll_pll_lpf_lpf__states[_ess2_controller_pll_pll_lpf_lpf__i] = _ess2_controller_pll_pll_lpf_lpf__states[_ess2_controller_pll_pll_lpf_lpf__i - 1];
    }
    _ess2_controller_pll_pll_lpf_lpf__states[0] = _ess2_controller_pll_pll_lpf_lpf__delay_line_in;
    // Generated from the component: ESS2.Controller.Outer Voltage Loop + Inner Current Loop.Outer voltage control loop.PID controller3
    if (!_ess2_controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_pid_controller3__av_active) {
        _ess2_controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_pid_controller3__integrator_state += 0.7493 * _ess2_controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_limit1__out * 2e-05;
    }
    // Generated from the component: PV1.PV Plant.Control.PLL.PLL.abc to dq.LPF_d
    _pv1_pv_plant_control_pll_pll_abc_to_dq_lpf_d__states[0] = _pv1_pv_plant_control_pll_pll_abc_to_dq_lpf_d__delay_line_in;
    // Generated from the component: PV1.PV Plant.Control.PLL.PLL.abc to dq.LPF_q
    _pv1_pv_plant_control_pll_pll_abc_to_dq_lpf_q__states[0] = _pv1_pv_plant_control_pll_pll_abc_to_dq_lpf_q__delay_line_in;
    // Generated from the component: PV2.PV Plant.Control.PLL.PLL.abc to dq.LPF_d
    _pv2_pv_plant_control_pll_pll_abc_to_dq_lpf_d__states[0] = _pv2_pv_plant_control_pll_pll_abc_to_dq_lpf_d__delay_line_in;
    // Generated from the component: PV2.PV Plant.Control.PLL.PLL.abc to dq.LPF_q
    _pv2_pv_plant_control_pll_pll_abc_to_dq_lpf_q__states[0] = _pv2_pv_plant_control_pll_pll_abc_to_dq_lpf_q__delay_line_in;
    // Generated from the component: PV1.PV Plant.Control.PLL.PLL.normalize
    // Generated from the component: PV2.PV Plant.Control.PLL.PLL.normalize
    // Generated from the component: PV1.PV Plant.Control.Grid_follow.Power_Meas.Power_Meas_DQpu.LPF_P
    _pv1_pv_plant_control_grid_follow_power_meas_power_meas_dqpu_lpf_p__states[0] = _pv1_pv_plant_control_grid_follow_power_meas_power_meas_dqpu_lpf_p__delay_line_in;
    // Generated from the component: PV1.PV Plant.Control.Grid_follow.Power_Meas.Power_Meas_DQpu.LPF_Q
    _pv1_pv_plant_control_grid_follow_power_meas_power_meas_dqpu_lpf_q__states[0] = _pv1_pv_plant_control_grid_follow_power_meas_power_meas_dqpu_lpf_q__delay_line_in;
    // Generated from the component: PV1.PV Plant.Control.Grid_follow.Power_Meas1.Power_Meas_DQpu.LPF_P
    _pv1_pv_plant_control_grid_follow_power_meas1_power_meas_dqpu_lpf_p__states[0] = _pv1_pv_plant_control_grid_follow_power_meas1_power_meas_dqpu_lpf_p__delay_line_in;
    // Generated from the component: PV1.PV Plant.Control.Grid_follow.Power_Meas1.Power_Meas_DQpu.LPF_Q
    _pv1_pv_plant_control_grid_follow_power_meas1_power_meas_dqpu_lpf_q__states[0] = _pv1_pv_plant_control_grid_follow_power_meas1_power_meas_dqpu_lpf_q__delay_line_in;
    // Generated from the component: PV2.PV Plant.Control.Grid_follow.Power_Meas.Power_Meas_DQpu.LPF_P
    _pv2_pv_plant_control_grid_follow_power_meas_power_meas_dqpu_lpf_p__states[0] = _pv2_pv_plant_control_grid_follow_power_meas_power_meas_dqpu_lpf_p__delay_line_in;
    // Generated from the component: PV2.PV Plant.Control.Grid_follow.Power_Meas.Power_Meas_DQpu.LPF_Q
    _pv2_pv_plant_control_grid_follow_power_meas_power_meas_dqpu_lpf_q__states[0] = _pv2_pv_plant_control_grid_follow_power_meas_power_meas_dqpu_lpf_q__delay_line_in;
    // Generated from the component: PV2.PV Plant.Control.Grid_follow.Power_Meas1.Power_Meas_DQpu.LPF_P
    _pv2_pv_plant_control_grid_follow_power_meas1_power_meas_dqpu_lpf_p__states[0] = _pv2_pv_plant_control_grid_follow_power_meas1_power_meas_dqpu_lpf_p__delay_line_in;
    // Generated from the component: PV2.PV Plant.Control.Grid_follow.Power_Meas1.Power_Meas_DQpu.LPF_Q
    _pv2_pv_plant_control_grid_follow_power_meas1_power_meas_dqpu_lpf_q__states[0] = _pv2_pv_plant_control_grid_follow_power_meas1_power_meas_dqpu_lpf_q__delay_line_in;
    // Generated from the component: ESS1.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.PID controller1
    _ess1_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__integrator_state += 3.4722222222222214 * _ess1_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum8__out * 2e-05;
    // Generated from the component: ESS1.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.PID controller2
    _ess1_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__integrator_state += 3.4722222222222214 * _ess1_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum9__out * 2e-05;
    // Generated from the component: ESS2.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.PID controller1
    _ess2_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__integrator_state += 3.4722222222222214 * _ess2_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum8__out * 2e-05;
    // Generated from the component: ESS2.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.PID controller2
    _ess2_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__integrator_state += 3.4722222222222214 * _ess2_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum9__out * 2e-05;
    // Generated from the component: PV1.PV Plant.Control.PLL.PLL.Rate Limiter1
    _pv1_pv_plant_control_pll_pll_rate_limiter1__prev_out = _pv1_pv_plant_control_pll_pll_rate_limiter1__out;
    _pv1_pv_plant_control_pll_pll_rate_limiter1__first_step = 0;
    // Generated from the component: PV1.PV Plant.Control.PLL.PLL.integrator
    // Generated from the component: PV2.PV Plant.Control.PLL.PLL.Rate Limiter1
    _pv2_pv_plant_control_pll_pll_rate_limiter1__prev_out = _pv2_pv_plant_control_pll_pll_rate_limiter1__out;
    _pv2_pv_plant_control_pll_pll_rate_limiter1__first_step = 0;
    // Generated from the component: PV2.PV Plant.Control.PLL.PLL.integrator
    // Generated from the component: PV1.PV Plant.Control.PLL.PLL.LPF.LPF
    for (_pv1_pv_plant_control_pll_pll_lpf_lpf__i = 1; _pv1_pv_plant_control_pll_pll_lpf_lpf__i > 0; _pv1_pv_plant_control_pll_pll_lpf_lpf__i--) {
        _pv1_pv_plant_control_pll_pll_lpf_lpf__states[_pv1_pv_plant_control_pll_pll_lpf_lpf__i] = _pv1_pv_plant_control_pll_pll_lpf_lpf__states[_pv1_pv_plant_control_pll_pll_lpf_lpf__i - 1];
    }
    _pv1_pv_plant_control_pll_pll_lpf_lpf__states[0] = _pv1_pv_plant_control_pll_pll_lpf_lpf__delay_line_in;
    // Generated from the component: PV2.PV Plant.Control.PLL.PLL.LPF.LPF
    for (_pv2_pv_plant_control_pll_pll_lpf_lpf__i = 1; _pv2_pv_plant_control_pll_pll_lpf_lpf__i > 0; _pv2_pv_plant_control_pll_pll_lpf_lpf__i--) {
        _pv2_pv_plant_control_pll_pll_lpf_lpf__states[_pv2_pv_plant_control_pll_pll_lpf_lpf__i] = _pv2_pv_plant_control_pll_pll_lpf_lpf__states[_pv2_pv_plant_control_pll_pll_lpf_lpf__i - 1];
    }
    _pv2_pv_plant_control_pll_pll_lpf_lpf__states[0] = _pv2_pv_plant_control_pll_pll_lpf_lpf__delay_line_in;
    // Generated from the component: PV1.PV Plant.Control.Grid_follow.Limit_PQref.priority_PQlim.PQ limiting with priority
    // Generated from the component: PV2.PV Plant.Control.Grid_follow.Limit_PQref.priority_PQlim.PQ limiting with priority
    // Generated from the component: PV1.PV Plant.Control.Grid_follow.Limit_PQref.P rate limit
    _pv1_pv_plant_control_grid_follow_limit_pqref_p_rate_limit__prev_out = _pv1_pv_plant_control_grid_follow_limit_pqref_p_rate_limit__out;
    _pv1_pv_plant_control_grid_follow_limit_pqref_p_rate_limit__first_step = 0;
    // Generated from the component: PV1.PV Plant.Control.Grid_follow.Limit_PQref.Q rate limit
    _pv1_pv_plant_control_grid_follow_limit_pqref_q_rate_limit__prev_out = _pv1_pv_plant_control_grid_follow_limit_pqref_q_rate_limit__out;
    _pv1_pv_plant_control_grid_follow_limit_pqref_q_rate_limit__first_step = 0;
    // Generated from the component: PV1.PV Plant.Control.Grid_follow.Limit_PQref.S rate limit
    _pv1_pv_plant_control_grid_follow_limit_pqref_s_rate_limit__prev_out = _pv1_pv_plant_control_grid_follow_limit_pqref_s_rate_limit__out;
    _pv1_pv_plant_control_grid_follow_limit_pqref_s_rate_limit__first_step = 0;
    // Generated from the component: PV2.PV Plant.Control.Grid_follow.Limit_PQref.P rate limit
    _pv2_pv_plant_control_grid_follow_limit_pqref_p_rate_limit__prev_out = _pv2_pv_plant_control_grid_follow_limit_pqref_p_rate_limit__out;
    _pv2_pv_plant_control_grid_follow_limit_pqref_p_rate_limit__first_step = 0;
    // Generated from the component: PV2.PV Plant.Control.Grid_follow.Limit_PQref.Q rate limit
    _pv2_pv_plant_control_grid_follow_limit_pqref_q_rate_limit__prev_out = _pv2_pv_plant_control_grid_follow_limit_pqref_q_rate_limit__out;
    _pv2_pv_plant_control_grid_follow_limit_pqref_q_rate_limit__first_step = 0;
    // Generated from the component: PV2.PV Plant.Control.Grid_follow.Limit_PQref.S rate limit
    _pv2_pv_plant_control_grid_follow_limit_pqref_s_rate_limit__prev_out = _pv2_pv_plant_control_grid_follow_limit_pqref_s_rate_limit__out;
    _pv2_pv_plant_control_grid_follow_limit_pqref_s_rate_limit__first_step = 0;
    // Generated from the component: PV1.PV Plant.Control.Grid_follow.Limit_PQref.limS_overPQ.S limiting over PQ
    // Generated from the component: PV2.PV Plant.Control.Grid_follow.Limit_PQref.limS_overPQ.S limiting over PQ
    //@cmp.update.block.end
}
void TimerCounterHandler_1_user_sp_cpu_dev0() {
#if DEBUG_MODE
    printf("\n\rTimerCounterHandler_1");
#endif
    //////////////////////////////////////////////////////////////////////////
    // Output block
    //////////////////////////////////////////////////////////////////////////
    //@cmp.out.block.start
    // Generated from the component: ESS1.Battery.Rate Transition1.Output
    // Generated from the component: ESS1.Battery.Rate Transition2.Output
    // Generated from the component: ESS1.Battery.Rate Transition4.Output
    // Generated from the component: ESS1.Battery.Rate Transition5.Output
    // Generated from the component: ESS1.Battery.Unit Delay1
    _ess1_battery_unit_delay1__out = _ess1_battery_unit_delay1__state;
    // Generated from the component: ESS1.Battery.Unit Delay2
    _ess1_battery_unit_delay2__out = _ess1_battery_unit_delay2__state;
    // Generated from the component: ESS2.Battery.Rate Transition1.Output
    // Generated from the component: ESS2.Battery.Rate Transition2.Output
    // Generated from the component: ESS2.Battery.Rate Transition4.Output
    // Generated from the component: ESS2.Battery.Rate Transition5.Output
    // Generated from the component: ESS2.Battery.Unit Delay1
    _ess2_battery_unit_delay1__out = _ess2_battery_unit_delay1__state;
    // Generated from the component: ESS2.Battery.Unit Delay2
    _ess2_battery_unit_delay2__out = _ess2_battery_unit_delay2__state;
    // Generated from the component: PCC.Digital Input Close
    _pcc_digital_input_close__out = HIL_InInt32(0xf80207);
    if(_pcc_digital_input_close__out == 0) {
        _pcc_digital_input_close__out = 1;
    } else {
        _pcc_digital_input_close__out = 0;
    }
    // Generated from the component: PCC.Digital Input Trip
    _pcc_digital_input_trip__out = HIL_InInt32(0xf80208);
    if(_pcc_digital_input_trip__out == 0) {
        _pcc_digital_input_trip__out = 1;
    } else {
        _pcc_digital_input_trip__out = 0;
    }
    // Generated from the component: PCC.Grid_Connect
    _pcc_grid_connect__out = XIo_InInt32(0x55000138);
    // Generated from the component: PCC.Meas1.IA.Ia1
    _pcc_meas1_ia_ia1__out = (HIL_InFloat(0xc80000 + 0x15));
    // Generated from the component: PCC.Meas1.IB.Ia1
    _pcc_meas1_ib_ia1__out = (HIL_InFloat(0xc80000 + 0x16));
    // Generated from the component: PCC.Meas1.IC.Ia1
    _pcc_meas1_ic_ia1__out = (HIL_InFloat(0xc80000 + 0x17));
    // Generated from the component: PCC.Meas1.VA.Va1
    _pcc_meas1_va_va1__out = (HIL_InFloat(0xc80000 + 0xa));
    // Generated from the component: PCC.Meas1.VB.Va1
    _pcc_meas1_vb_va1__out = (HIL_InFloat(0xc80000 + 0xb));
    // Generated from the component: PCC.Meas1.VC.Va1
    _pcc_meas1_vc_va1__out = (HIL_InFloat(0xc80000 + 0xc));
    // Generated from the component: PCC.Meas2.VA.Va1
    _pcc_meas2_va_va1__out = (HIL_InFloat(0xc80000 + 0xd));
    // Generated from the component: PCC.Meas2.VB.Va1
    _pcc_meas2_vb_va1__out = (HIL_InFloat(0xc80000 + 0xe));
    // Generated from the component: PCC.Meas2.VC.Va1
    _pcc_meas2_vc_va1__out = (HIL_InFloat(0xc80000 + 0xf));
    // Generated from the component: PCC.PCC Measurements.Constant1
    // Generated from the component: PCC.PCC Measurements.Constant2
    // Generated from the component: PCC.PCC Measurements.Three phase PLL1.PID.Integrator1
    _pcc_pcc_measurements_three_phase_pll1_pid_integrator1__out = _pcc_pcc_measurements_three_phase_pll1_pid_integrator1__state;
    // Generated from the component: PCC.PCC Measurements.Three phase PLL1.PID.Integrator2
    _pcc_pcc_measurements_three_phase_pll1_pid_integrator2__out = _pcc_pcc_measurements_three_phase_pll1_pid_integrator2__state;
    // Generated from the component: PCC.PCC Measurements.Three phase PLL1.Unit Delay1
    _pcc_pcc_measurements_three_phase_pll1_unit_delay1__out = _pcc_pcc_measurements_three_phase_pll1_unit_delay1__state;
    // Generated from the component: PCC.PCC Measurements.Three phase PLL1.to_Hz
    _pcc_pcc_measurements_three_phase_pll1_to_hz__out = 0.15915494309189535 * _pcc_pcc_measurements_three_phase_pll1_lpf_lpf__out;
    // Generated from the component: PCC.SR Flip Flop1
    _pcc_sr_flip_flop1__out = _pcc_sr_flip_flop1__state;
    _pcc_sr_flip_flop1__out_n = _pcc_sr_flip_flop1__state != -1 ? !_pcc_sr_flip_flop1__state : -1;
    // Generated from the component: ESS1.Battery.C function
    _ess1_battery_c_function__Ceff = _ess1_battery_rate_transition4_output__out;
    _ess1_battery_c_function__Ibat = _ess1_battery_rate_transition1_output__out;
    _ess1_battery_c_function__charge = _ess1_battery_rate_transition5_output__out;
    _ess1_battery_c_function__x[0] = _ess1_battery_rate_transition2_output__out[0];
    _ess1_battery_c_function__x[1] = _ess1_battery_rate_transition2_output__out[1];
    _ess1_battery_c_function__x[2] = _ess1_battery_rate_transition2_output__out[2];
    _ess1_battery_c_function__x[3] = _ess1_battery_rate_transition2_output__out[3];
    _ess1_battery_c_function__x[4] = _ess1_battery_rate_transition2_output__out[4];
    _ess1_battery_c_function__x[5] = _ess1_battery_rate_transition2_output__out[5];
    if (_ess1_battery_c_function__Ibat > 0) {
        _ess1_battery_c_function__Vbat = 20.0 * (2 + 0.16 * _ess1_battery_c_function__SOC) + 20.0 * _ess1_battery_c_function__Ibat / 550.0 * (6 / (1 + _ess1_battery_c_function__x[1]) + 0.48 / _ess1_battery_c_function__x[2] + 0.036) * (1 - 0.025 * (30.0 - 25));
        _ess1_battery_c_function__SOC = _ess1_battery_c_function__SOC + (_ess1_battery_c_function__Ibat / _ess1_battery_c_function__Cbat) * 1e-3 / 3600.0;
    }
    else {
        _ess1_battery_c_function__Vbat = 20.0 * (1.965 + 0.12 * _ess1_battery_c_function__SOC) - 20.0 * _ess1_battery_c_function__x[3] / 550.0 * (4 / (1 + _ess1_battery_c_function__x[4]) + 0.27 / _ess1_battery_c_function__x[5] + 0.02) * (1 - 0.007 * (30.0 - 25));
        _ess1_battery_c_function__SOC = _ess1_battery_c_function__SOC + (_ess1_battery_c_function__Ibat / _ess1_battery_c_function__Cbat) * 1e-3 / 3600.0;
    }
    if (_ess1_battery_c_function__SOC < 0.001)_ess1_battery_c_function__SOC = 0.001;
    if (_ess1_battery_c_function__SOC > 1)_ess1_battery_c_function__SOC = 1;
    if (_ess1_battery_c_function__Vbat < 1)_ess1_battery_c_function__Vbat = 1;
    if (_ess1_battery_c_function__Vbat > 1.5e3)_ess1_battery_c_function__Vbat = 1.5e3;
    _ess1_battery_c_function__Vbtt = _ess1_battery_c_function__Vbat + 0.01 * _ess1_battery_c_function__Ibat;
    if (_ess1_battery_c_function__charge > 0)_ess1_battery_c_function__Vdc = 750.0;
    else _ess1_battery_c_function__Vdc = 750.0;
    // Generated from the component: ESS1.Battery.Rate Transition3.Input
    _ess1_battery_rate_transition3_output__out = _ess1_battery_unit_delay1__out;
    // Generated from the component: ESS1.Battery.SOC
    HIL_OutAO(0x401b, (float)_ess1_battery_unit_delay1__out);
    // Generated from the component: ESS1.Battery.Rate Transition6.Input
    _ess1_battery_rate_transition6_output__out = _ess1_battery_unit_delay2__out;
    // Generated from the component: ESS2.Battery.C function
    _ess2_battery_c_function__Ceff = _ess2_battery_rate_transition4_output__out;
    _ess2_battery_c_function__Ibat = _ess2_battery_rate_transition1_output__out;
    _ess2_battery_c_function__charge = _ess2_battery_rate_transition5_output__out;
    _ess2_battery_c_function__x[0] = _ess2_battery_rate_transition2_output__out[0];
    _ess2_battery_c_function__x[1] = _ess2_battery_rate_transition2_output__out[1];
    _ess2_battery_c_function__x[2] = _ess2_battery_rate_transition2_output__out[2];
    _ess2_battery_c_function__x[3] = _ess2_battery_rate_transition2_output__out[3];
    _ess2_battery_c_function__x[4] = _ess2_battery_rate_transition2_output__out[4];
    _ess2_battery_c_function__x[5] = _ess2_battery_rate_transition2_output__out[5];
    if (_ess2_battery_c_function__Ibat > 0) {
        _ess2_battery_c_function__Vbat = 20.0 * (2 + 0.16 * _ess2_battery_c_function__SOC) + 20.0 * _ess2_battery_c_function__Ibat / 550.0 * (6 / (1 + _ess2_battery_c_function__x[1]) + 0.48 / _ess2_battery_c_function__x[2] + 0.036) * (1 - 0.025 * (30.0 - 25));
        _ess2_battery_c_function__SOC = _ess2_battery_c_function__SOC + (_ess2_battery_c_function__Ibat / _ess2_battery_c_function__Cbat) * 1e-3 / 3600.0;
    }
    else {
        _ess2_battery_c_function__Vbat = 20.0 * (1.965 + 0.12 * _ess2_battery_c_function__SOC) - 20.0 * _ess2_battery_c_function__x[3] / 550.0 * (4 / (1 + _ess2_battery_c_function__x[4]) + 0.27 / _ess2_battery_c_function__x[5] + 0.02) * (1 - 0.007 * (30.0 - 25));
        _ess2_battery_c_function__SOC = _ess2_battery_c_function__SOC + (_ess2_battery_c_function__Ibat / _ess2_battery_c_function__Cbat) * 1e-3 / 3600.0;
    }
    if (_ess2_battery_c_function__SOC < 0.001)_ess2_battery_c_function__SOC = 0.001;
    if (_ess2_battery_c_function__SOC > 1)_ess2_battery_c_function__SOC = 1;
    if (_ess2_battery_c_function__Vbat < 1)_ess2_battery_c_function__Vbat = 1;
    if (_ess2_battery_c_function__Vbat > 1.5e3)_ess2_battery_c_function__Vbat = 1.5e3;
    _ess2_battery_c_function__Vbtt = _ess2_battery_c_function__Vbat + 0.01 * _ess2_battery_c_function__Ibat;
    if (_ess2_battery_c_function__charge > 0)_ess2_battery_c_function__Vdc = 750.0;
    else _ess2_battery_c_function__Vdc = 750.0;
    // Generated from the component: ESS2.Battery.Rate Transition3.Input
    _ess2_battery_rate_transition3_output__out = _ess2_battery_unit_delay1__out;
    // Generated from the component: ESS2.Battery.SOC
    HIL_OutAO(0x4050, (float)_ess2_battery_unit_delay1__out);
    // Generated from the component: ESS2.Battery.Rate Transition6.Input
    _ess2_battery_rate_transition6_output__out = _ess2_battery_unit_delay2__out;
    // Generated from the component: ESS1.Rate Transition1.Input
    _ess1_rate_transition1_output__out = _pcc_grid_connect__out;
    // Generated from the component: ESS2.Rate Transition1.Input
    _ess2_rate_transition1_output__out = _pcc_grid_connect__out;
    // Generated from the component: PCC.Meas1.Bus Join2
    _pcc_meas1_bus_join2__out[0] = _pcc_meas1_ia_ia1__out;
    _pcc_meas1_bus_join2__out[1] = _pcc_meas1_ib_ia1__out;
    _pcc_meas1_bus_join2__out[2] = _pcc_meas1_ic_ia1__out;
    // Generated from the component: PCC.Meas1.Bus Join1
    _pcc_meas1_bus_join1__out[0] = _pcc_meas1_va_va1__out;
    _pcc_meas1_bus_join1__out[1] = _pcc_meas1_vb_va1__out;
    _pcc_meas1_bus_join1__out[2] = _pcc_meas1_vc_va1__out;
    // Generated from the component: PCC.Meas2.Bus Join1
    _pcc_meas2_bus_join1__out[0] = _pcc_meas2_va_va1__out;
    _pcc_meas2_bus_join1__out[1] = _pcc_meas2_vb_va1__out;
    _pcc_meas2_bus_join1__out[2] = _pcc_meas2_vc_va1__out;
    // Generated from the component: PCC.PCC Measurements.Termination4
    // Generated from the component: PCC.PCC Measurements.Three phase PLL1.sin
    _pcc_pcc_measurements_three_phase_pll1_sin__out = sin(_pcc_pcc_measurements_three_phase_pll1_unit_delay1__out);
    // Generated from the component: PCC.Gain4
    _pcc_gain4__out = 100.0 * _pcc_pcc_measurements_three_phase_pll1_to_hz__out;
    // Generated from the component: PCC.Logical operator2
    _pcc_logical_operator2__out = _pcc_grid_connect__out && _pcc_sr_flip_flop1__out ;
    // Generated from the component: ESS1.Rate Transition7.Input
    _ess1_rate_transition7_output__out = _ess1_battery_c_function__Vdc;
    // Generated from the component: ESS1.VDC
    HIL_OutAO(0x403a, (float)_ess1_battery_c_function__Vdc);
    // Generated from the component: ESS1.Vdc.Vs1
    HIL_OutFloat(141295616, (float) _ess1_battery_c_function__Vdc);
    // Generated from the component: ESS2.Rate Transition7.Input
    _ess2_rate_transition7_output__out = _ess2_battery_c_function__Vdc;
    // Generated from the component: ESS2.VDC
    HIL_OutAO(0x406f, (float)_ess2_battery_c_function__Vdc);
    // Generated from the component: ESS2.Vdc.Vs1
    HIL_OutFloat(153878528, (float) _ess2_battery_c_function__Vdc);
    // Generated from the component: PCC.PCC Measurements.Bus Split2
    _pcc_pcc_measurements_bus_split2__out = _pcc_meas1_bus_join2__out[0];
    _pcc_pcc_measurements_bus_split2__out1 = _pcc_meas1_bus_join2__out[1];
    _pcc_pcc_measurements_bus_split2__out2 = _pcc_meas1_bus_join2__out[2];
    // Generated from the component: PCC.PCC Measurements.Bus Split1
    _pcc_pcc_measurements_bus_split1__out = _pcc_meas1_bus_join1__out[0];
    _pcc_pcc_measurements_bus_split1__out1 = _pcc_meas1_bus_join1__out[1];
    _pcc_pcc_measurements_bus_split1__out2 = _pcc_meas1_bus_join1__out[2];
    // Generated from the component: PCC.PCC Measurements.Termination5
    // Generated from the component: PCC.Data Type Conversion1
    _pcc_data_type_conversion1__out = (double)_pcc_logical_operator2__out;
    // Generated from the component: PCC.S1.CTC_Wrapper
    if (_pcc_logical_operator2__out == 0x0) {
        HIL_OutInt32(0x8240480, 0x0);
    }
    else {
        HIL_OutInt32(0x8240480, 0x1);
    }
    // Generated from the component: PCC.PCC Measurements.Power Meter1
    _pcc_pcc_measurements_power_meter1__v_alpha = SQRT_2OVER3 * ( _pcc_pcc_measurements_bus_split1__out - 0.5f * _pcc_pcc_measurements_bus_split1__out1 - 0.5f * _pcc_pcc_measurements_bus_split1__out2);
    _pcc_pcc_measurements_power_meter1__v_beta = SQRT_2OVER3 * (SQRT3_OVER_2 * _pcc_pcc_measurements_bus_split1__out1 - SQRT3_OVER_2 * _pcc_pcc_measurements_bus_split1__out2);
    _pcc_pcc_measurements_power_meter1__i_alpha = SQRT_2OVER3 * ( _pcc_pcc_measurements_bus_split2__out - 0.5f * _pcc_pcc_measurements_bus_split2__out1 - 0.5f * _pcc_pcc_measurements_bus_split2__out2);
    _pcc_pcc_measurements_power_meter1__i_beta = SQRT_2OVER3 * (SQRT3_OVER_2 * _pcc_pcc_measurements_bus_split2__out1 - SQRT3_OVER_2 * _pcc_pcc_measurements_bus_split2__out2);
    _pcc_pcc_measurements_power_meter1__v_zero = ONE_DIV_BY_SQRT_3 * (_pcc_pcc_measurements_bus_split1__out + _pcc_pcc_measurements_bus_split1__out1 + _pcc_pcc_measurements_bus_split1__out2);
    _pcc_pcc_measurements_power_meter1__i_zero = ONE_DIV_BY_SQRT_3 * (_pcc_pcc_measurements_bus_split2__out + _pcc_pcc_measurements_bus_split2__out1 + _pcc_pcc_measurements_bus_split2__out2);
    _pcc_pcc_measurements_power_meter1__Pac = _pcc_pcc_measurements_power_meter1__v_alpha * _pcc_pcc_measurements_power_meter1__i_alpha + _pcc_pcc_measurements_power_meter1__v_beta * _pcc_pcc_measurements_power_meter1__i_beta;
    _pcc_pcc_measurements_power_meter1__Qac = _pcc_pcc_measurements_power_meter1__v_beta * _pcc_pcc_measurements_power_meter1__i_alpha - _pcc_pcc_measurements_power_meter1__v_alpha * _pcc_pcc_measurements_power_meter1__i_beta;
    _pcc_pcc_measurements_power_meter1__P0ac = _pcc_pcc_measurements_power_meter1__v_zero * _pcc_pcc_measurements_power_meter1__i_zero;
    _pcc_pcc_measurements_power_meter1__filter_1_output = 0.08613019954354689 * (_pcc_pcc_measurements_power_meter1__Pac + _pcc_pcc_measurements_power_meter1__filter_1_input_k_minus_1) - (-0.8277396009129062) * _pcc_pcc_measurements_power_meter1__filter_1_output_k_minus_1;
    _pcc_pcc_measurements_power_meter1__filter_1_outputQ = 0.08613019954354689 * (_pcc_pcc_measurements_power_meter1__Qac + _pcc_pcc_measurements_power_meter1__filter_1_input_k_minus_1Q) - (-0.8277396009129062) * _pcc_pcc_measurements_power_meter1__filter_1_output_k_minus_1Q;
    _pcc_pcc_measurements_power_meter1__filter_1_outputP0 = 0.08613019954354689 * (_pcc_pcc_measurements_power_meter1__P0ac + _pcc_pcc_measurements_power_meter1__filter_1_input_k_minus_1P0) - (-0.8277396009129062) * _pcc_pcc_measurements_power_meter1__filter_1_output_k_minus_1P0;
    _pcc_pcc_measurements_power_meter1__filter_1_input_k_minus_1 = _pcc_pcc_measurements_power_meter1__Pac;
    _pcc_pcc_measurements_power_meter1__filter_1_output_k_minus_1 = _pcc_pcc_measurements_power_meter1__filter_1_output;
    _pcc_pcc_measurements_power_meter1__filter_1_input_k_minus_1Q = _pcc_pcc_measurements_power_meter1__Qac;;
    _pcc_pcc_measurements_power_meter1__filter_1_output_k_minus_1Q = _pcc_pcc_measurements_power_meter1__filter_1_outputQ;
    _pcc_pcc_measurements_power_meter1__filter_1_input_k_minus_1P0 = _pcc_pcc_measurements_power_meter1__P0ac;
    _pcc_pcc_measurements_power_meter1__filter_1_output_k_minus_1P0 = _pcc_pcc_measurements_power_meter1__filter_1_outputP0;
    _pcc_pcc_measurements_power_meter1__Pdc = _pcc_pcc_measurements_power_meter1__filter_1_output;
    _pcc_pcc_measurements_power_meter1__Qdc = _pcc_pcc_measurements_power_meter1__filter_1_outputQ;
    _pcc_pcc_measurements_power_meter1__P0dc = _pcc_pcc_measurements_power_meter1__filter_1_outputP0;
    _pcc_pcc_measurements_power_meter1__apparent = sqrt(pow(_pcc_pcc_measurements_power_meter1__Pdc, 2) + pow(_pcc_pcc_measurements_power_meter1__Qdc, 2));
    if (_pcc_pcc_measurements_power_meter1__apparent > 0)
        _pcc_pcc_measurements_power_meter1__k_factor = _pcc_pcc_measurements_power_meter1__Pdc / _pcc_pcc_measurements_power_meter1__apparent;
    else
        _pcc_pcc_measurements_power_meter1__k_factor = 0;
    // Generated from the component: PCC.PCC Measurements.RMS value1
    _pcc_pcc_measurements_rms_value1__previous_filtered_value = _pcc_pcc_measurements_rms_value1__filtered_value;
    _pcc_pcc_measurements_rms_value1__filtered_value = _pcc_pcc_measurements_rms_value1__previous_filtered_value * 0.1 + _pcc_pcc_measurements_bus_split1__out * 0.9;
    if( (_pcc_pcc_measurements_rms_value1__filtered_value >= 0.0) && (_pcc_pcc_measurements_rms_value1__previous_filtered_value < 0.0) )
        _pcc_pcc_measurements_rms_value1__zc = 1;
    else
        _pcc_pcc_measurements_rms_value1__zc = 0;
    _pcc_pcc_measurements_rms_value1__out = _pcc_pcc_measurements_rms_value1__out_state;
    // Generated from the component: PCC.PCC Measurements.Three phase PLL1.abc to dq.abc to alpha beta
    _pcc_pcc_measurements_three_phase_pll1_abc_to_dq_abc_to_alpha_beta__alpha = (2.0 * _pcc_pcc_measurements_bus_split1__out - _pcc_pcc_measurements_bus_split1__out1 - _pcc_pcc_measurements_bus_split1__out2) * 0.3333333333333333;
    _pcc_pcc_measurements_three_phase_pll1_abc_to_dq_abc_to_alpha_beta__beta = (_pcc_pcc_measurements_bus_split1__out1 - _pcc_pcc_measurements_bus_split1__out2) * 0.5773502691896258;
    _pcc_pcc_measurements_three_phase_pll1_abc_to_dq_abc_to_alpha_beta__gamma = (_pcc_pcc_measurements_bus_split1__out + _pcc_pcc_measurements_bus_split1__out1 + _pcc_pcc_measurements_bus_split1__out2) * 0.3333333333333333;
    // Generated from the component: PCC.P
    HIL_OutAO(0x4071, (float)_pcc_pcc_measurements_power_meter1__Pdc);
    // Generated from the component: PCC.PCC Measurements.Comparator1
    if (_pcc_pcc_measurements_power_meter1__Pdc < _pcc_pcc_measurements_constant1__out) {
        _pcc_pcc_measurements_comparator1__out = 0;
    } else if (_pcc_pcc_measurements_power_meter1__Pdc > _pcc_pcc_measurements_constant1__out) {
        _pcc_pcc_measurements_comparator1__out = 1;
    } else {
        _pcc_pcc_measurements_comparator1__out = _pcc_pcc_measurements_comparator1__state;
    }
    // Generated from the component: PCC.PCC Measurements.Comparator2
    if (_pcc_pcc_measurements_power_meter1__k_factor < _pcc_pcc_measurements_constant2__out) {
        _pcc_pcc_measurements_comparator2__out = 0;
    } else if (_pcc_pcc_measurements_power_meter1__k_factor > _pcc_pcc_measurements_constant2__out) {
        _pcc_pcc_measurements_comparator2__out = 1;
    } else {
        _pcc_pcc_measurements_comparator2__out = _pcc_pcc_measurements_comparator2__state;
    }
    // Generated from the component: PCC.PCC Measurements.Termination6
    // Generated from the component: PCC.PCC Measurements.Termination7
    // Generated from the component: PCC.PCC Measurements.Termination8
    // Generated from the component: PCC.Q
    HIL_OutAO(0x4072, (float)_pcc_pcc_measurements_power_meter1__Qdc);
    // Generated from the component: PCC.W -> kW
    _pcc_w____kw__out = 0.001 * _pcc_pcc_measurements_power_meter1__Pdc;
    // Generated from the component: PCC.var -> kvar
    _pcc_var____kvar__out = 0.001 * _pcc_pcc_measurements_power_meter1__Qdc;
    // Generated from the component: PCC.Gain3
    _pcc_gain3__out = 100.0 * _pcc_pcc_measurements_rms_value1__out;
    // Generated from the component: PCC.PCC Measurements.Termination3
    // Generated from the component: PCC.PCC Measurements.Three phase PLL1.abc to dq.alpha beta to dq
    _pcc_pcc_measurements_three_phase_pll1_abc_to_dq_alpha_beta_to_dq__k1 = cos(_pcc_pcc_measurements_three_phase_pll1_unit_delay1__out);
    _pcc_pcc_measurements_three_phase_pll1_abc_to_dq_alpha_beta_to_dq__k2 = sin(_pcc_pcc_measurements_three_phase_pll1_unit_delay1__out);
    _pcc_pcc_measurements_three_phase_pll1_abc_to_dq_alpha_beta_to_dq__d = _pcc_pcc_measurements_three_phase_pll1_abc_to_dq_alpha_beta_to_dq__k2 * _pcc_pcc_measurements_three_phase_pll1_abc_to_dq_abc_to_alpha_beta__alpha - _pcc_pcc_measurements_three_phase_pll1_abc_to_dq_alpha_beta_to_dq__k1 * _pcc_pcc_measurements_three_phase_pll1_abc_to_dq_abc_to_alpha_beta__beta;
    _pcc_pcc_measurements_three_phase_pll1_abc_to_dq_alpha_beta_to_dq__q = _pcc_pcc_measurements_three_phase_pll1_abc_to_dq_alpha_beta_to_dq__k1 * _pcc_pcc_measurements_three_phase_pll1_abc_to_dq_abc_to_alpha_beta__alpha + _pcc_pcc_measurements_three_phase_pll1_abc_to_dq_alpha_beta_to_dq__k2 * _pcc_pcc_measurements_three_phase_pll1_abc_to_dq_abc_to_alpha_beta__beta;
    // Generated from the component: PCC.Gain1
    _pcc_gain1__out = 10.0 * _pcc_w____kw__out;
    // Generated from the component: PCC.Gain2
    _pcc_gain2__out = 10.0 * _pcc_var____kvar__out;
    // Generated from the component: PCC.PCC Measurements.Three phase PLL1.abc to dq.LPF_d
    _pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_d__a_sum = 0.0f;
    _pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_d__b_sum = 0.0f;
    _pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_d__delay_line_in = 0.0f;
    for (_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_d__i = 0; _pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_d__i < 1; _pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_d__i++) {
        _pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_d__b_sum += _pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_d__b_coeff[_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_d__i + 1] * _pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_d__states[_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_d__i];
    }
    _pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_d__a_sum += _pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_d__states[0] * _pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_d__a_coeff[1];
    _pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_d__delay_line_in = (_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_alpha_beta_to_dq__d - _pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_d__a_sum) / _pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_d__a_coeff[0];
    _pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_d__b_sum += _pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_d__b_coeff[0] * _pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_d__delay_line_in;
    _pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_d__out = _pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_d__b_sum;
    // Generated from the component: PCC.PCC Measurements.Three phase PLL1.abc to dq.LPF_q
    _pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_q__a_sum = 0.0f;
    _pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_q__b_sum = 0.0f;
    _pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_q__delay_line_in = 0.0f;
    for (_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_q__i = 0; _pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_q__i < 1; _pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_q__i++) {
        _pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_q__b_sum += _pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_q__b_coeff[_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_q__i + 1] * _pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_q__states[_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_q__i];
    }
    _pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_q__a_sum += _pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_q__states[0] * _pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_q__a_coeff[1];
    _pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_q__delay_line_in = (_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_alpha_beta_to_dq__q - _pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_q__a_sum) / _pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_q__a_coeff[0];
    _pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_q__b_sum += _pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_q__b_coeff[0] * _pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_q__delay_line_in;
    _pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_q__out = _pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_q__b_sum;
    // Generated from the component: PCC.PCC Measurements.Termination1
    // Generated from the component: PCC.PCC Measurements.Termination2
    // Generated from the component: PCC.PCC Measurements.Three phase PLL1.normalize
    _pcc_pcc_measurements_three_phase_pll1_normalize__in1 = _pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_d__out;
    _pcc_pcc_measurements_three_phase_pll1_normalize__in2 = _pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_q__out;
    _pcc_pcc_measurements_three_phase_pll1_normalize__pk = (powf(_pcc_pcc_measurements_three_phase_pll1_normalize__in1, 2.0) + powf(_pcc_pcc_measurements_three_phase_pll1_normalize__in2, 2.0));
    _pcc_pcc_measurements_three_phase_pll1_normalize__pk = sqrt(_pcc_pcc_measurements_three_phase_pll1_normalize__pk);
    if (_pcc_pcc_measurements_three_phase_pll1_normalize__pk < 0.1) {
        _pcc_pcc_measurements_three_phase_pll1_normalize__in2_pu = _pcc_pcc_measurements_three_phase_pll1_normalize__in2 / 0.1;
    }
    else {
        _pcc_pcc_measurements_three_phase_pll1_normalize__in2_pu = _pcc_pcc_measurements_three_phase_pll1_normalize__in2 / _pcc_pcc_measurements_three_phase_pll1_normalize__pk;
    }
    // Generated from the component: PCC.PCC Measurements.Three phase PLL1.PID.Kd
    _pcc_pcc_measurements_three_phase_pll1_pid_kd__out = 1.0 * _pcc_pcc_measurements_three_phase_pll1_normalize__in2_pu;
    // Generated from the component: PCC.PCC Measurements.Three phase PLL1.PID.Ki
    _pcc_pcc_measurements_three_phase_pll1_pid_ki__out = 3200.0 * _pcc_pcc_measurements_three_phase_pll1_normalize__in2_pu;
    // Generated from the component: PCC.PCC Measurements.Three phase PLL1.PID.Kp
    _pcc_pcc_measurements_three_phase_pll1_pid_kp__out = 100.0 * _pcc_pcc_measurements_three_phase_pll1_normalize__in2_pu;
    // Generated from the component: PCC.PCC Measurements.Three phase PLL1.term_pk
    // Generated from the component: PCC.PCC Measurements.Three phase PLL1.PID.Sum8
    _pcc_pcc_measurements_three_phase_pll1_pid_sum8__out = _pcc_pcc_measurements_three_phase_pll1_pid_kd__out - _pcc_pcc_measurements_three_phase_pll1_pid_integrator2__out;
    // Generated from the component: PCC.PCC Measurements.Three phase PLL1.PID.Gain1
    _pcc_pcc_measurements_three_phase_pll1_pid_gain1__out = 714.2857 * _pcc_pcc_measurements_three_phase_pll1_pid_sum8__out;
    // Generated from the component: PCC.PCC Measurements.Three phase PLL1.PID.Sum5
    _pcc_pcc_measurements_three_phase_pll1_pid_sum5__out = _pcc_pcc_measurements_three_phase_pll1_pid_kp__out + _pcc_pcc_measurements_three_phase_pll1_pid_gain1__out + _pcc_pcc_measurements_three_phase_pll1_pid_integrator1__out;
    // Generated from the component: PCC.PCC Measurements.Three phase PLL1.PID.Limit1
    if (_pcc_pcc_measurements_three_phase_pll1_pid_sum5__out > 10000.0) {
        _pcc_pcc_measurements_three_phase_pll1_pid_limit1__out = 10000.0;
    } else if (_pcc_pcc_measurements_three_phase_pll1_pid_sum5__out < -10000.0) {
        _pcc_pcc_measurements_three_phase_pll1_pid_limit1__out = -10000.0;
    } else {
        _pcc_pcc_measurements_three_phase_pll1_pid_limit1__out = _pcc_pcc_measurements_three_phase_pll1_pid_sum5__out;
    }
    // Generated from the component: PCC.PCC Measurements.Three phase PLL1.PID.Sum6
    _pcc_pcc_measurements_three_phase_pll1_pid_sum6__out =  - _pcc_pcc_measurements_three_phase_pll1_pid_sum5__out + _pcc_pcc_measurements_three_phase_pll1_pid_limit1__out;
    // Generated from the component: PCC.PCC Measurements.Three phase PLL1.Rate Limiter1
    if (_pcc_pcc_measurements_three_phase_pll1_rate_limiter1__first_step) {
        _pcc_pcc_measurements_three_phase_pll1_rate_limiter1__out = _pcc_pcc_measurements_three_phase_pll1_pid_limit1__out;
    } else {
        _pcc_pcc_measurements_three_phase_pll1_rate_limiter1__out = _pcc_pcc_measurements_three_phase_pll1_pid_limit1__out;
        _pcc_pcc_measurements_three_phase_pll1_rate_limiter1__in_rate = _pcc_pcc_measurements_three_phase_pll1_pid_limit1__out - _pcc_pcc_measurements_three_phase_pll1_rate_limiter1__prev_out;
        if (_pcc_pcc_measurements_three_phase_pll1_rate_limiter1__in_rate > 0.07539822368615504) {
            _pcc_pcc_measurements_three_phase_pll1_rate_limiter1__out = _pcc_pcc_measurements_three_phase_pll1_rate_limiter1__prev_out + (0.07539822368615504);
        }
        if (_pcc_pcc_measurements_three_phase_pll1_rate_limiter1__in_rate < -0.07539822368615504) {
            _pcc_pcc_measurements_three_phase_pll1_rate_limiter1__out = _pcc_pcc_measurements_three_phase_pll1_rate_limiter1__prev_out + (-0.07539822368615504);
        }
    }
    // Generated from the component: PCC.PCC Measurements.Three phase PLL1.integrator
    _pcc_pcc_measurements_three_phase_pll1_integrator__in = _pcc_pcc_measurements_three_phase_pll1_pid_limit1__out;
    _pcc_pcc_measurements_three_phase_pll1_integrator__out += 0.001 * _pcc_pcc_measurements_three_phase_pll1_integrator__in;
    if (_pcc_pcc_measurements_three_phase_pll1_integrator__in >= 0.0) {
        if (_pcc_pcc_measurements_three_phase_pll1_integrator__out >= 6.283185307179586) {
            _pcc_pcc_measurements_three_phase_pll1_integrator__out -= 6.283185307179586;
        }
    }
    else {
        if (_pcc_pcc_measurements_three_phase_pll1_integrator__out <= -6.283185307179586) {
            _pcc_pcc_measurements_three_phase_pll1_integrator__out += 6.283185307179586;
        }
    }
    // Generated from the component: PCC.PCC Measurements.Three phase PLL1.PID.Kb
    _pcc_pcc_measurements_three_phase_pll1_pid_kb__out = 1.0 * _pcc_pcc_measurements_three_phase_pll1_pid_sum6__out;
    // Generated from the component: PCC.PCC Measurements.Three phase PLL1.LPF.LPF
    _pcc_pcc_measurements_three_phase_pll1_lpf_lpf__a_sum = 0.0f;
    _pcc_pcc_measurements_three_phase_pll1_lpf_lpf__b_sum = 0.0f;
    _pcc_pcc_measurements_three_phase_pll1_lpf_lpf__delay_line_in = 0.0f;
    for (_pcc_pcc_measurements_three_phase_pll1_lpf_lpf__i = 0; _pcc_pcc_measurements_three_phase_pll1_lpf_lpf__i < 1; _pcc_pcc_measurements_three_phase_pll1_lpf_lpf__i++) {
        _pcc_pcc_measurements_three_phase_pll1_lpf_lpf__b_sum += _pcc_pcc_measurements_three_phase_pll1_lpf_lpf__b_coeff[_pcc_pcc_measurements_three_phase_pll1_lpf_lpf__i] * _pcc_pcc_measurements_three_phase_pll1_lpf_lpf__states[_pcc_pcc_measurements_three_phase_pll1_lpf_lpf__i + 1];
    }
    for (_pcc_pcc_measurements_three_phase_pll1_lpf_lpf__i = 1; _pcc_pcc_measurements_three_phase_pll1_lpf_lpf__i > 0; _pcc_pcc_measurements_three_phase_pll1_lpf_lpf__i--) {
        _pcc_pcc_measurements_three_phase_pll1_lpf_lpf__a_sum += _pcc_pcc_measurements_three_phase_pll1_lpf_lpf__a_coeff[_pcc_pcc_measurements_three_phase_pll1_lpf_lpf__i + 1] * _pcc_pcc_measurements_three_phase_pll1_lpf_lpf__states[_pcc_pcc_measurements_three_phase_pll1_lpf_lpf__i];
    }
    _pcc_pcc_measurements_three_phase_pll1_lpf_lpf__a_sum += _pcc_pcc_measurements_three_phase_pll1_lpf_lpf__states[0] * _pcc_pcc_measurements_three_phase_pll1_lpf_lpf__a_coeff[1];
    _pcc_pcc_measurements_three_phase_pll1_lpf_lpf__delay_line_in = _pcc_pcc_measurements_three_phase_pll1_rate_limiter1__out - _pcc_pcc_measurements_three_phase_pll1_lpf_lpf__a_sum;
    _pcc_pcc_measurements_three_phase_pll1_lpf_lpf__out = _pcc_pcc_measurements_three_phase_pll1_lpf_lpf__b_sum;
    // Generated from the component: PCC.PCC Measurements.Three phase PLL1.PID.Sum7
    _pcc_pcc_measurements_three_phase_pll1_pid_sum7__out = _pcc_pcc_measurements_three_phase_pll1_pid_ki__out + _pcc_pcc_measurements_three_phase_pll1_pid_kb__out;
    //@cmp.out.block.end
    //////////////////////////////////////////////////////////////////////////
    // Update block
    //////////////////////////////////////////////////////////////////////////
    //@cmp.update.block.start
    // Generated from the component: ESS1.Battery.Unit Delay1
    _ess1_battery_unit_delay1__state = _ess1_battery_c_function__SOC;
    // Generated from the component: ESS1.Battery.Unit Delay2
    _ess1_battery_unit_delay2__state = _ess1_battery_c_function__Vbtt;
    // Generated from the component: ESS2.Battery.Unit Delay1
    _ess2_battery_unit_delay1__state = _ess2_battery_c_function__SOC;
    // Generated from the component: ESS2.Battery.Unit Delay2
    _ess2_battery_unit_delay2__state = _ess2_battery_c_function__Vbtt;
    // Generated from the component: PCC.PCC Measurements.Three phase PLL1.PID.Integrator1
    _pcc_pcc_measurements_three_phase_pll1_pid_integrator1__state += _pcc_pcc_measurements_three_phase_pll1_pid_sum7__out * 0.001;
    // Generated from the component: PCC.PCC Measurements.Three phase PLL1.PID.Integrator2
    _pcc_pcc_measurements_three_phase_pll1_pid_integrator2__state += _pcc_pcc_measurements_three_phase_pll1_pid_gain1__out * 0.001;
    // Generated from the component: PCC.PCC Measurements.Three phase PLL1.Unit Delay1
    _pcc_pcc_measurements_three_phase_pll1_unit_delay1__state = _pcc_pcc_measurements_three_phase_pll1_integrator__out;
    // Generated from the component: PCC.SR Flip Flop1
    if ((_pcc_digital_input_close__out != 0x0) && (_pcc_digital_input_trip__out == 0x0))
        _pcc_sr_flip_flop1__state = 1;
    else if ((_pcc_digital_input_close__out == 0x0) && (_pcc_digital_input_trip__out != 0x0))
        _pcc_sr_flip_flop1__state = 0;
    else if ((_pcc_digital_input_close__out != 0x0) && (_pcc_digital_input_trip__out != 0x0))
        _pcc_sr_flip_flop1__state = -1;
    // Generated from the component: ESS1.Battery.C function
    _ess1_battery_c_function__Cbat = 1.67 * 550.0 * (1 + 0.005 * (30.0 - 25)) / (1 + 0.67 * _ess1_battery_c_function__x[0]);
    // Generated from the component: ESS2.Battery.C function
    _ess2_battery_c_function__Cbat = 1.67 * 550.0 * (1 + 0.005 * (30.0 - 25)) / (1 + 0.67 * _ess2_battery_c_function__x[0]);
    // Generated from the component: PCC.PCC Measurements.RMS value1
    if( _pcc_pcc_measurements_rms_value1__zc ) {
        if (_pcc_pcc_measurements_bus_split1__out != _pcc_pcc_measurements_rms_value1__previous_value)
            _pcc_pcc_measurements_rms_value1__correction = - _pcc_pcc_measurements_rms_value1__previous_value / (_pcc_pcc_measurements_bus_split1__out - _pcc_pcc_measurements_rms_value1__previous_value);
        if (_pcc_pcc_measurements_rms_value1__correction < 0)
            _pcc_pcc_measurements_rms_value1__correction = 0;
        else
            _pcc_pcc_measurements_rms_value1__correction = 0;
        _pcc_pcc_measurements_rms_value1__sample_cnt += _pcc_pcc_measurements_rms_value1__correction - _pcc_pcc_measurements_rms_value1__previous_correction;
        _pcc_pcc_measurements_rms_value1__out_state = sqrt(_pcc_pcc_measurements_rms_value1__square_sum / _pcc_pcc_measurements_rms_value1__sample_cnt);
        _pcc_pcc_measurements_rms_value1__sample_cnt = 0;
        _pcc_pcc_measurements_rms_value1__previous_correction = _pcc_pcc_measurements_rms_value1__correction;
        _pcc_pcc_measurements_rms_value1__square_sum = 0;
    } else if ( _pcc_pcc_measurements_rms_value1__sample_cnt >= 500 ) {
        _pcc_pcc_measurements_rms_value1__out_state = sqrt(_pcc_pcc_measurements_rms_value1__square_sum / _pcc_pcc_measurements_rms_value1__sample_cnt);
        _pcc_pcc_measurements_rms_value1__sample_cnt = 0;
        _pcc_pcc_measurements_rms_value1__square_sum = 0;
    }
    _pcc_pcc_measurements_rms_value1__previous_value = _pcc_pcc_measurements_bus_split1__out;
    _pcc_pcc_measurements_rms_value1__square_sum += _pcc_pcc_measurements_bus_split1__out * _pcc_pcc_measurements_bus_split1__out;
    _pcc_pcc_measurements_rms_value1__sample_cnt ++;
    // Generated from the component: PCC.PCC Measurements.Comparator1
    if (_pcc_pcc_measurements_power_meter1__Pdc < _pcc_pcc_measurements_constant1__out) {
        _pcc_pcc_measurements_comparator1__state = 0;
    } else if (_pcc_pcc_measurements_power_meter1__Pdc > _pcc_pcc_measurements_constant1__out) {
        _pcc_pcc_measurements_comparator1__state = 1;
    }
    // Generated from the component: PCC.PCC Measurements.Comparator2
    if (_pcc_pcc_measurements_power_meter1__k_factor < _pcc_pcc_measurements_constant2__out) {
        _pcc_pcc_measurements_comparator2__state = 0;
    } else if (_pcc_pcc_measurements_power_meter1__k_factor > _pcc_pcc_measurements_constant2__out) {
        _pcc_pcc_measurements_comparator2__state = 1;
    }
    // Generated from the component: PCC.PCC Measurements.Three phase PLL1.abc to dq.LPF_d
    _pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_d__states[0] = _pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_d__delay_line_in;
    // Generated from the component: PCC.PCC Measurements.Three phase PLL1.abc to dq.LPF_q
    _pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_q__states[0] = _pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_q__delay_line_in;
    // Generated from the component: PCC.PCC Measurements.Three phase PLL1.normalize
    // Generated from the component: PCC.PCC Measurements.Three phase PLL1.Rate Limiter1
    _pcc_pcc_measurements_three_phase_pll1_rate_limiter1__prev_out = _pcc_pcc_measurements_three_phase_pll1_rate_limiter1__out;
    _pcc_pcc_measurements_three_phase_pll1_rate_limiter1__first_step = 0;
    // Generated from the component: PCC.PCC Measurements.Three phase PLL1.integrator
    // Generated from the component: PCC.PCC Measurements.Three phase PLL1.LPF.LPF
    for (_pcc_pcc_measurements_three_phase_pll1_lpf_lpf__i = 1; _pcc_pcc_measurements_three_phase_pll1_lpf_lpf__i > 0; _pcc_pcc_measurements_three_phase_pll1_lpf_lpf__i--) {
        _pcc_pcc_measurements_three_phase_pll1_lpf_lpf__states[_pcc_pcc_measurements_three_phase_pll1_lpf_lpf__i] = _pcc_pcc_measurements_three_phase_pll1_lpf_lpf__states[_pcc_pcc_measurements_three_phase_pll1_lpf_lpf__i - 1];
    }
    _pcc_pcc_measurements_three_phase_pll1_lpf_lpf__states[0] = _pcc_pcc_measurements_three_phase_pll1_lpf_lpf__delay_line_in;
    //@cmp.update.block.end
}
void TimerCounterHandler_2_user_sp_cpu_dev0() {
#if DEBUG_MODE
    printf("\n\rTimerCounterHandler_2");
#endif
    //////////////////////////////////////////////////////////////////////////
    // Output block
    //////////////////////////////////////////////////////////////////////////
    //@cmp.out.block.start
    // Generated from the component: ESS1.BE1-25A Synchronizer.Connect INV
    _ess1_be1_25a_synchronizer_connect_inv__out = XIo_InInt32(0x55000100);
    // Generated from the component: ESS1.BE1-25A Synchronizer.Rate Transition12.Output
    // Generated from the component: ESS1.BE1-25A Synchronizer.Rate Transition2.Output
    // Generated from the component: ESS1.BE1-25A Synchronizer.Rate Transition4.Output
    // Generated from the component: ESS1.BE1-25A Synchronizer.Rate Transition6.Output
    // Generated from the component: ESS1.INV_sync
    _ess1_inv_sync__out = XIo_InInt32(0x55000110);
    // Generated from the component: ESS2.BE1-25A Synchronizer.Connect INV
    _ess2_be1_25a_synchronizer_connect_inv__out = XIo_InInt32(0x5500011c);
    // Generated from the component: ESS2.BE1-25A Synchronizer.Rate Transition12.Output
    // Generated from the component: ESS2.BE1-25A Synchronizer.Rate Transition2.Output
    // Generated from the component: ESS2.BE1-25A Synchronizer.Rate Transition4.Output
    // Generated from the component: ESS2.BE1-25A Synchronizer.Rate Transition6.Output
    // Generated from the component: ESS2.INV_sync
    _ess2_inv_sync__out = XIo_InInt32(0x5500012c);
    // Generated from the component: ESS1.BE1-25A Synchronizer.stay connected1
    _ess1_be1_25a_synchronizer_stay_connected1__connectINV = _ess1_be1_25a_synchronizer_connect_inv__out;
    _ess1_be1_25a_synchronizer_stay_connected1__ready = _ess1_be1_25a_synchronizer_rate_transition12_output__out;
    _ess1_be1_25a_synchronizer_stay_connected1__out = _ess1_be1_25a_synchronizer_stay_connected1__connect;
    // Generated from the component: ESS1.BE1-25A Synchronizer.BE1-25A Synchronizer
    _ess1_be1_25a_synchronizer_be1_25a_synchronizer__dAng = _ess1_be1_25a_synchronizer_rate_transition2_output__out;
    _ess1_be1_25a_synchronizer_be1_25a_synchronizer__df = _ess1_be1_25a_synchronizer_rate_transition4_output__out;
    if (_ess1_be1_25a_synchronizer_be1_25a_synchronizer__dAng > 3.14159265359)_ess1_be1_25a_synchronizer_be1_25a_synchronizer__dAng -= 2 * 3.14159265359;
    if (_ess1_be1_25a_synchronizer_be1_25a_synchronizer__dAng < -3.14159265359)_ess1_be1_25a_synchronizer_be1_25a_synchronizer__dAng += 2 * 3.14159265359;
    _ess1_be1_25a_synchronizer_be1_25a_synchronizer__del_w = 0.01 * _ess1_be1_25a_synchronizer_be1_25a_synchronizer__dAng / 1.0 + _ess1_be1_25a_synchronizer_be1_25a_synchronizer__df;
    if (_ess1_be1_25a_synchronizer_be1_25a_synchronizer__del_w > 0.1)_ess1_be1_25a_synchronizer_be1_25a_synchronizer__del_w = 0.1;
    else if (_ess1_be1_25a_synchronizer_be1_25a_synchronizer__del_w < -0.1)_ess1_be1_25a_synchronizer_be1_25a_synchronizer__del_w = -0.1;
    // Generated from the component: ESS1.BE1-25A Synchronizer.BE1-25A Synchronizer1
    _ess1_be1_25a_synchronizer_be1_25a_synchronizer1__dV = _ess1_be1_25a_synchronizer_rate_transition6_output__out;
    _ess1_be1_25a_synchronizer_be1_25a_synchronizer1__del_V = 0.01 * _ess1_be1_25a_synchronizer_be1_25a_synchronizer1__dV;
    // Generated from the component: ESS1.BE1-25A Synchronizer.volt_diff3
    HIL_OutAO(0x4015, (float)_ess1_be1_25a_synchronizer_rate_transition6_output__out);
    // Generated from the component: ESS1.INV_sync ON
    HIL_OutInt32(0xf00407, _ess1_inv_sync__out != 0x0);
    // Generated from the component: ESS1.Logical operator1
    _ess1_logical_operator1__out = !_ess1_inv_sync__out;
    // Generated from the component: ESS2.BE1-25A Synchronizer.stay connected1
    _ess2_be1_25a_synchronizer_stay_connected1__connectINV = _ess2_be1_25a_synchronizer_connect_inv__out;
    _ess2_be1_25a_synchronizer_stay_connected1__ready = _ess2_be1_25a_synchronizer_rate_transition12_output__out;
    _ess2_be1_25a_synchronizer_stay_connected1__out = _ess2_be1_25a_synchronizer_stay_connected1__connect;
    // Generated from the component: ESS2.BE1-25A Synchronizer.BE1-25A Synchronizer
    _ess2_be1_25a_synchronizer_be1_25a_synchronizer__dAng = _ess2_be1_25a_synchronizer_rate_transition2_output__out;
    _ess2_be1_25a_synchronizer_be1_25a_synchronizer__df = _ess2_be1_25a_synchronizer_rate_transition4_output__out;
    if (_ess2_be1_25a_synchronizer_be1_25a_synchronizer__dAng > 3.14159265359)_ess2_be1_25a_synchronizer_be1_25a_synchronizer__dAng -= 2 * 3.14159265359;
    if (_ess2_be1_25a_synchronizer_be1_25a_synchronizer__dAng < -3.14159265359)_ess2_be1_25a_synchronizer_be1_25a_synchronizer__dAng += 2 * 3.14159265359;
    _ess2_be1_25a_synchronizer_be1_25a_synchronizer__del_w = 0.01 * _ess2_be1_25a_synchronizer_be1_25a_synchronizer__dAng / 1.0 + _ess2_be1_25a_synchronizer_be1_25a_synchronizer__df;
    if (_ess2_be1_25a_synchronizer_be1_25a_synchronizer__del_w > 0.1)_ess2_be1_25a_synchronizer_be1_25a_synchronizer__del_w = 0.1;
    else if (_ess2_be1_25a_synchronizer_be1_25a_synchronizer__del_w < -0.1)_ess2_be1_25a_synchronizer_be1_25a_synchronizer__del_w = -0.1;
    // Generated from the component: ESS2.BE1-25A Synchronizer.BE1-25A Synchronizer1
    _ess2_be1_25a_synchronizer_be1_25a_synchronizer1__dV = _ess2_be1_25a_synchronizer_rate_transition6_output__out;
    _ess2_be1_25a_synchronizer_be1_25a_synchronizer1__del_V = 0.01 * _ess2_be1_25a_synchronizer_be1_25a_synchronizer1__dV;
    // Generated from the component: ESS2.BE1-25A Synchronizer.volt_diff3
    HIL_OutAO(0x404a, (float)_ess2_be1_25a_synchronizer_rate_transition6_output__out);
    // Generated from the component: ESS2.INV_sync ON
    HIL_OutInt32(0xf0040f, _ess2_inv_sync__out != 0x0);
    // Generated from the component: ESS2.Logical operator1
    _ess2_logical_operator1__out = !_ess2_inv_sync__out;
    // Generated from the component: ESS1.BE1-25A Synchronizer.Connect
    HIL_OutAO(0x4007, (float)_ess1_be1_25a_synchronizer_stay_connected1__out);
    // Generated from the component: ESS1.BE1-25A Synchronizer.Digital Probe1
    HIL_OutInt32(0xf00400, _ess1_be1_25a_synchronizer_stay_connected1__out != 0x0);
    // Generated from the component: ESS1.BE1-25A Synchronizer.Logical operator2
    _ess1_be1_25a_synchronizer_logical_operator2__out = !_ess1_be1_25a_synchronizer_stay_connected1__out;
    // Generated from the component: ESS1.Rate Transition6.Input
    _ess1_rate_transition6_output__out = _ess1_be1_25a_synchronizer_stay_connected1__out;
    // Generated from the component: ESS1.BE1-25A Synchronizer.Hold after connect2
    _ess1_be1_25a_synchronizer_hold_after_connect2__INV_sync = _ess1_inv_sync__out;
    _ess1_be1_25a_synchronizer_hold_after_connect2__connect = _ess1_be1_25a_synchronizer_stay_connected1__out;
    _ess1_be1_25a_synchronizer_hold_after_connect2__in = _ess1_be1_25a_synchronizer_be1_25a_synchronizer__del_w;
    _ess1_be1_25a_synchronizer_hold_after_connect2__out = _ess1_be1_25a_synchronizer_hold_after_connect2__var;
    // Generated from the component: ESS1.BE1-25A Synchronizer.Hold after connect3
    _ess1_be1_25a_synchronizer_hold_after_connect3__INV_sync = _ess1_inv_sync__out;
    _ess1_be1_25a_synchronizer_hold_after_connect3__connect = _ess1_be1_25a_synchronizer_stay_connected1__out;
    _ess1_be1_25a_synchronizer_hold_after_connect3__in = _ess1_be1_25a_synchronizer_be1_25a_synchronizer1__del_V;
    _ess1_be1_25a_synchronizer_hold_after_connect3__out = _ess1_be1_25a_synchronizer_hold_after_connect3__var;
    // Generated from the component: ESS1.INV_sync OFF
    HIL_OutInt32(0xf00406, _ess1_logical_operator1__out != 0x0);
    // Generated from the component: ESS2.BE1-25A Synchronizer.Connect
    HIL_OutAO(0x403c, (float)_ess2_be1_25a_synchronizer_stay_connected1__out);
    // Generated from the component: ESS2.BE1-25A Synchronizer.Digital Probe1
    HIL_OutInt32(0xf00408, _ess2_be1_25a_synchronizer_stay_connected1__out != 0x0);
    // Generated from the component: ESS2.BE1-25A Synchronizer.Logical operator2
    _ess2_be1_25a_synchronizer_logical_operator2__out = !_ess2_be1_25a_synchronizer_stay_connected1__out;
    // Generated from the component: ESS2.Rate Transition6.Input
    _ess2_rate_transition6_output__out = _ess2_be1_25a_synchronizer_stay_connected1__out;
    // Generated from the component: ESS2.BE1-25A Synchronizer.Hold after connect2
    _ess2_be1_25a_synchronizer_hold_after_connect2__INV_sync = _ess2_inv_sync__out;
    _ess2_be1_25a_synchronizer_hold_after_connect2__connect = _ess2_be1_25a_synchronizer_stay_connected1__out;
    _ess2_be1_25a_synchronizer_hold_after_connect2__in = _ess2_be1_25a_synchronizer_be1_25a_synchronizer__del_w;
    _ess2_be1_25a_synchronizer_hold_after_connect2__out = _ess2_be1_25a_synchronizer_hold_after_connect2__var;
    // Generated from the component: ESS2.BE1-25A Synchronizer.Hold after connect3
    _ess2_be1_25a_synchronizer_hold_after_connect3__INV_sync = _ess2_inv_sync__out;
    _ess2_be1_25a_synchronizer_hold_after_connect3__connect = _ess2_be1_25a_synchronizer_stay_connected1__out;
    _ess2_be1_25a_synchronizer_hold_after_connect3__in = _ess2_be1_25a_synchronizer_be1_25a_synchronizer1__del_V;
    _ess2_be1_25a_synchronizer_hold_after_connect3__out = _ess2_be1_25a_synchronizer_hold_after_connect3__var;
    // Generated from the component: ESS2.INV_sync OFF
    HIL_OutInt32(0xf0040e, _ess2_logical_operator1__out != 0x0);
    // Generated from the component: ESS1.BE1-25A Synchronizer.Digital Probe6
    HIL_OutInt32(0xf00404, _ess1_be1_25a_synchronizer_logical_operator2__out != 0x0);
    // Generated from the component: ESS1.BE1-25A Synchronizer.del_w
    HIL_OutAO(0x4013, (float)_ess1_be1_25a_synchronizer_hold_after_connect2__out);
    // Generated from the component: ESS1.Controller.Frequency droop.C function3
    _ess1_controller_frequency_droop_c_function3__Connect = _ess1_be1_25a_synchronizer_stay_connected1__out;
    _ess1_controller_frequency_droop_c_function3__INV_sync = _ess1_inv_sync__out;
    _ess1_controller_frequency_droop_c_function3__del_w = _ess1_be1_25a_synchronizer_hold_after_connect2__out;
    if (_ess1_controller_frequency_droop_c_function3__INV_sync)_ess1_controller_frequency_droop_c_function3__wref = _ess1_controller_frequency_droop_c_function3__wref + _ess1_controller_frequency_droop_c_function3__del_w;
    if (_ess1_controller_frequency_droop_c_function3__Connect)_ess1_controller_frequency_droop_c_function3__wref = 376.99111843077515;
    // Generated from the component: ESS1.BE1-25A Synchronizer.del_V
    HIL_OutAO(0x4012, (float)_ess1_be1_25a_synchronizer_hold_after_connect3__out);
    // Generated from the component: ESS1.Controller.Voltage droop.C function3
    _ess1_controller_voltage_droop_c_function3__Connect = _ess1_be1_25a_synchronizer_stay_connected1__out;
    _ess1_controller_voltage_droop_c_function3__INV_sync = _ess1_inv_sync__out;
    _ess1_controller_voltage_droop_c_function3__del_V = _ess1_be1_25a_synchronizer_hold_after_connect3__out;
    if (_ess1_controller_voltage_droop_c_function3__INV_sync)_ess1_controller_voltage_droop_c_function3__Vref = _ess1_controller_voltage_droop_c_function3__Vref + _ess1_controller_voltage_droop_c_function3__del_V;
    if (_ess1_controller_voltage_droop_c_function3__Connect)_ess1_controller_voltage_droop_c_function3__Vref = 1;
    // Generated from the component: ESS2.BE1-25A Synchronizer.Digital Probe6
    HIL_OutInt32(0xf0040c, _ess2_be1_25a_synchronizer_logical_operator2__out != 0x0);
    // Generated from the component: ESS2.BE1-25A Synchronizer.del_w
    HIL_OutAO(0x4048, (float)_ess2_be1_25a_synchronizer_hold_after_connect2__out);
    // Generated from the component: ESS2.Controller.Frequency droop.C function3
    _ess2_controller_frequency_droop_c_function3__Connect = _ess2_be1_25a_synchronizer_stay_connected1__out;
    _ess2_controller_frequency_droop_c_function3__INV_sync = _ess2_inv_sync__out;
    _ess2_controller_frequency_droop_c_function3__del_w = _ess2_be1_25a_synchronizer_hold_after_connect2__out;
    if (_ess2_controller_frequency_droop_c_function3__INV_sync)_ess2_controller_frequency_droop_c_function3__wref = _ess2_controller_frequency_droop_c_function3__wref + _ess2_controller_frequency_droop_c_function3__del_w;
    if (_ess2_controller_frequency_droop_c_function3__Connect)_ess2_controller_frequency_droop_c_function3__wref = 376.99111843077515;
    // Generated from the component: ESS2.BE1-25A Synchronizer.del_V
    HIL_OutAO(0x4047, (float)_ess2_be1_25a_synchronizer_hold_after_connect3__out);
    // Generated from the component: ESS2.Controller.Voltage droop.C function3
    _ess2_controller_voltage_droop_c_function3__Connect = _ess2_be1_25a_synchronizer_stay_connected1__out;
    _ess2_controller_voltage_droop_c_function3__INV_sync = _ess2_inv_sync__out;
    _ess2_controller_voltage_droop_c_function3__del_V = _ess2_be1_25a_synchronizer_hold_after_connect3__out;
    if (_ess2_controller_voltage_droop_c_function3__INV_sync)_ess2_controller_voltage_droop_c_function3__Vref = _ess2_controller_voltage_droop_c_function3__Vref + _ess2_controller_voltage_droop_c_function3__del_V;
    if (_ess2_controller_voltage_droop_c_function3__Connect)_ess2_controller_voltage_droop_c_function3__Vref = 1;
    // Generated from the component: ESS1.Controller.Frequency droop.Rate Transition12.Input
    _ess1_controller_frequency_droop_rate_transition12_output__out = _ess1_controller_frequency_droop_c_function3__wref;
    // Generated from the component: ESS1.Controller.Voltage droop.Rate Transition13.Input
    _ess1_controller_voltage_droop_rate_transition13_output__out = _ess1_controller_voltage_droop_c_function3__Vref;
    // Generated from the component: ESS2.Controller.Frequency droop.Rate Transition12.Input
    _ess2_controller_frequency_droop_rate_transition12_output__out = _ess2_controller_frequency_droop_c_function3__wref;
    // Generated from the component: ESS2.Controller.Voltage droop.Rate Transition13.Input
    _ess2_controller_voltage_droop_rate_transition13_output__out = _ess2_controller_voltage_droop_c_function3__Vref;
    //@cmp.out.block.end
    //////////////////////////////////////////////////////////////////////////
    // Update block
    //////////////////////////////////////////////////////////////////////////
    //@cmp.update.block.start
    // Generated from the component: ESS1.BE1-25A Synchronizer.stay connected1
    if ((_ess1_be1_25a_synchronizer_stay_connected1__ready == 1) && (_ess1_be1_25a_synchronizer_stay_connected1__connectINV == 1)) {
        _ess1_be1_25a_synchronizer_stay_connected1__connect = 1;
    }
    else if (_ess1_be1_25a_synchronizer_stay_connected1__connectINV == 0) {
        _ess1_be1_25a_synchronizer_stay_connected1__connect = 0;
    }
    // Generated from the component: ESS1.BE1-25A Synchronizer.BE1-25A Synchronizer
    // Generated from the component: ESS1.BE1-25A Synchronizer.BE1-25A Synchronizer1
    // Generated from the component: ESS2.BE1-25A Synchronizer.stay connected1
    if ((_ess2_be1_25a_synchronizer_stay_connected1__ready == 1) && (_ess2_be1_25a_synchronizer_stay_connected1__connectINV == 1)) {
        _ess2_be1_25a_synchronizer_stay_connected1__connect = 1;
    }
    else if (_ess2_be1_25a_synchronizer_stay_connected1__connectINV == 0) {
        _ess2_be1_25a_synchronizer_stay_connected1__connect = 0;
    }
    // Generated from the component: ESS2.BE1-25A Synchronizer.BE1-25A Synchronizer
    // Generated from the component: ESS2.BE1-25A Synchronizer.BE1-25A Synchronizer1
    // Generated from the component: ESS1.BE1-25A Synchronizer.Hold after connect2
    if ((_ess1_be1_25a_synchronizer_hold_after_connect2__connect == 0) && (_ess1_be1_25a_synchronizer_hold_after_connect2__INV_sync == 1))_ess1_be1_25a_synchronizer_hold_after_connect2__var = _ess1_be1_25a_synchronizer_hold_after_connect2__in;
    else if (_ess1_be1_25a_synchronizer_hold_after_connect2__connect == 1)_ess1_be1_25a_synchronizer_hold_after_connect2__var = 0;
    // Generated from the component: ESS1.BE1-25A Synchronizer.Hold after connect3
    if ((_ess1_be1_25a_synchronizer_hold_after_connect3__connect == 0) && (_ess1_be1_25a_synchronizer_hold_after_connect3__INV_sync == 1))_ess1_be1_25a_synchronizer_hold_after_connect3__var = _ess1_be1_25a_synchronizer_hold_after_connect3__in;
    else if (_ess1_be1_25a_synchronizer_hold_after_connect3__connect == 1)_ess1_be1_25a_synchronizer_hold_after_connect3__var = 0;
    // Generated from the component: ESS2.BE1-25A Synchronizer.Hold after connect2
    if ((_ess2_be1_25a_synchronizer_hold_after_connect2__connect == 0) && (_ess2_be1_25a_synchronizer_hold_after_connect2__INV_sync == 1))_ess2_be1_25a_synchronizer_hold_after_connect2__var = _ess2_be1_25a_synchronizer_hold_after_connect2__in;
    else if (_ess2_be1_25a_synchronizer_hold_after_connect2__connect == 1)_ess2_be1_25a_synchronizer_hold_after_connect2__var = 0;
    // Generated from the component: ESS2.BE1-25A Synchronizer.Hold after connect3
    if ((_ess2_be1_25a_synchronizer_hold_after_connect3__connect == 0) && (_ess2_be1_25a_synchronizer_hold_after_connect3__INV_sync == 1))_ess2_be1_25a_synchronizer_hold_after_connect3__var = _ess2_be1_25a_synchronizer_hold_after_connect3__in;
    else if (_ess2_be1_25a_synchronizer_hold_after_connect3__connect == 1)_ess2_be1_25a_synchronizer_hold_after_connect3__var = 0;
    // Generated from the component: ESS1.Controller.Frequency droop.C function3
    // Generated from the component: ESS1.Controller.Voltage droop.C function3
    // Generated from the component: ESS2.Controller.Frequency droop.C function3
    // Generated from the component: ESS2.Controller.Voltage droop.C function3
    //@cmp.update.block.end
}
// ----------------------------------------------------------------------------------------  //-----------------------------------------------------------------------------------------