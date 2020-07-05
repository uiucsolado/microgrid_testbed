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





























































































































































































































































//@cmp.def.end


//-----------------------------------------------------------------------------------------
// generated using template: common_variables.template-------------------------------------
// true global variables


//@cmp.var.start
// variables
double _grid_forming_inverter__averaged__be1_25a_synchronizer_connect_inv__out;
double _grid_forming_inverter__averaged__be1_25a_synchronizer_constant6__out = 0.001;
double _grid_forming_inverter__averaged__be1_25a_synchronizer_constant7__out = 0.001;
double _grid_forming_inverter__averaged__be1_25a_synchronizer_constant9__out = 0.05;
double _grid_forming_inverter__averaged__be1_25a_synchronizer_unit_delay2__out;
double _grid_forming_inverter__averaged__be1_25a_synchronizer_unit_delay3__out;
double _grid_forming_inverter__averaged__be1_25a_synchronizer_unit_delay4__out;
X_Int32 _grid_forming_inverter__averaged__be1_25a_synchronizer_unit_delay5__out;
double _grid_forming_inverter__averaged__constant1__out = 900.0;
double _grid_forming_inverter__averaged__controller_constant1__out = 0.0;
double _grid_forming_inverter__averaged__controller_frequency_droop_constant2__out = 376.99111843077515;
double _grid_forming_inverter__averaged__controller_frequency_droop_constant4__out = 376.99111843077515;
double _grid_forming_inverter__averaged__controller_integrator1__out;
double _grid_forming_inverter__averaged__controller_integrator2__out;
double _grid_forming_inverter__averaged__controller_integrator3__out;
double _grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_limit_zero__out = 0.001;
double _grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_one__out = 0.001;
double _grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_dq_to_abc_o_ref__out = 0.0;
double _grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_limit_zero__out = 0.001;
double _grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_one__out = 0.001;
double _grid_forming_inverter__averaged__controller_voltage_droop_constant2__out = 1.0;
double _grid_forming_inverter__averaged__controller_voltage_droop_constant4__out = 1.0;
double _grid_forming_inverter__averaged__ea1_va1__out;
double _grid_forming_inverter__averaged__eb1_va1__out;
double _grid_forming_inverter__averaged__ec1_va1__out;
X_Int32 _grid_forming_inverter__averaged__inv_sync__out;
double _grid_forming_inverter__averaged__ia1_ia1__out;
double _grid_forming_inverter__averaged__ib1_ia1__out;
double _grid_forming_inverter__averaged__ic1_ia1__out;
double _grid_forming_inverter__averaged__va2_va1__out;
double _grid_forming_inverter__averaged__vag_va1__out;
double _grid_forming_inverter__averaged__vb2_va1__out;
double _grid_forming_inverter__averaged__vbg_va1__out;
double _grid_forming_inverter__averaged__vc2_va1__out;
double _grid_forming_inverter__averaged__vcg_va1__out;
double _grid_forming_inverter__averaged__xi_a1_ia1__out;
double _grid_forming_inverter__averaged__xi_b1_ia1__out;
double _grid_forming_inverter__averaged__xi_c1_ia1__out;
double _pref__out;
double _qref__out;
double _sinusoidal_source1__out;
double _sinusoidal_source2__out;
double _sinusoidal_source3__out;
float _grid_forming_inverter__averaged__be1_25a_synchronizer_digital_probe1__tmp;
X_Int32 _grid_forming_inverter__averaged__be1_25a_synchronizer_logical_operator2__out;
double _grid_forming_inverter__averaged__gain1__out;
double _grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_comparator1__out;
double _grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_comparator1__out;
double _grid_forming_inverter__averaged__be1_25a_synchronizer_current_abc_to_dq3_abc_to_dq1_abc_to_alpha_beta__alpha;
double _grid_forming_inverter__averaged__be1_25a_synchronizer_current_abc_to_dq3_abc_to_dq1_abc_to_alpha_beta__beta;
double _grid_forming_inverter__averaged__be1_25a_synchronizer_current_abc_to_dq3_abc_to_dq1_abc_to_alpha_beta__gamma;
double _grid_forming_inverter__averaged__controller_current_abc_to_dq2_abc_to_dq1_abc_to_alpha_beta__alpha;
double _grid_forming_inverter__averaged__controller_current_abc_to_dq2_abc_to_dq1_abc_to_alpha_beta__beta;
double _grid_forming_inverter__averaged__controller_current_abc_to_dq2_abc_to_dq1_abc_to_alpha_beta__gamma;
float _grid_forming_inverter__averaged__inv_sync_on__tmp;
X_Int32 _grid_forming_inverter__averaged__logical_operator1__out;
double _grid_forming_inverter__averaged__controller_current_abc_to_dq4_abc_to_dq1_abc_to_alpha_beta__alpha;
double _grid_forming_inverter__averaged__controller_current_abc_to_dq4_abc_to_dq1_abc_to_alpha_beta__beta;
double _grid_forming_inverter__averaged__controller_current_abc_to_dq4_abc_to_dq1_abc_to_alpha_beta__gamma;
double _grid_forming_inverter__averaged__be1_25a_synchronizer_sum6__out;
double _grid_forming_inverter__averaged__be1_25a_synchronizer_sum7__out;
double _grid_forming_inverter__averaged__controller_current_abc_to_dq3_abc_to_dq1_abc_to_alpha_beta__alpha;
double _grid_forming_inverter__averaged__controller_current_abc_to_dq3_abc_to_dq1_abc_to_alpha_beta__beta;
double _grid_forming_inverter__averaged__controller_current_abc_to_dq3_abc_to_dq1_abc_to_alpha_beta__gamma;
double _grid_forming_inverter__averaged__be1_25a_synchronizer_sum8__out;
double _grid_forming_inverter__averaged__be1_25a_synchronizer_abc_to_dq1_abc_to_alpha_beta__alpha;
double _grid_forming_inverter__averaged__be1_25a_synchronizer_abc_to_dq1_abc_to_alpha_beta__beta;
double _grid_forming_inverter__averaged__be1_25a_synchronizer_abc_to_dq1_abc_to_alpha_beta__gamma;
double _grid_forming_inverter__averaged__controller_current_abc_to_dq_abc_to_dq1_abc_to_alpha_beta__alpha;
double _grid_forming_inverter__averaged__controller_current_abc_to_dq_abc_to_dq1_abc_to_alpha_beta__beta;
double _grid_forming_inverter__averaged__controller_current_abc_to_dq_abc_to_dq1_abc_to_alpha_beta__gamma;
double _grid_forming_inverter__averaged__controller_gain19__out;
double _grid_forming_inverter__averaged__controller_gain18__out;
double _gain3__out;
double _gain5__out;
double _gain4__out;
float _grid_forming_inverter__averaged__be1_25a_synchronizer_digital_probe6__tmp;
double _grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_signal_switch1__out;
double _grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_signal_switch1__out;
double _grid_forming_inverter__averaged__be1_25a_synchronizer_current_abc_to_dq3_abc_to_dq1_alpha_beta_to_dq__d;
double _grid_forming_inverter__averaged__be1_25a_synchronizer_current_abc_to_dq3_abc_to_dq1_alpha_beta_to_dq__q;
double _grid_forming_inverter__averaged__be1_25a_synchronizer_current_abc_to_dq3_abc_to_dq1_alpha_beta_to_dq__k1;
double _grid_forming_inverter__averaged__be1_25a_synchronizer_current_abc_to_dq3_abc_to_dq1_alpha_beta_to_dq__k2;
double _grid_forming_inverter__averaged__controller_current_abc_to_dq2_abc_to_dq1_alpha_beta_to_dq__d;
double _grid_forming_inverter__averaged__controller_current_abc_to_dq2_abc_to_dq1_alpha_beta_to_dq__q;
double _grid_forming_inverter__averaged__controller_current_abc_to_dq2_abc_to_dq1_alpha_beta_to_dq__k1;
double _grid_forming_inverter__averaged__controller_current_abc_to_dq2_abc_to_dq1_alpha_beta_to_dq__k2;
float _grid_forming_inverter__averaged__inv_sync_off__tmp;
double _grid_forming_inverter__averaged__controller_current_abc_to_dq4_abc_to_dq1_alpha_beta_to_dq__d;
double _grid_forming_inverter__averaged__controller_current_abc_to_dq4_abc_to_dq1_alpha_beta_to_dq__q;
double _grid_forming_inverter__averaged__controller_current_abc_to_dq4_abc_to_dq1_alpha_beta_to_dq__k1;
double _grid_forming_inverter__averaged__controller_current_abc_to_dq4_abc_to_dq1_alpha_beta_to_dq__k2;
double _grid_forming_inverter__averaged__controller_current_abc_to_dq3_abc_to_dq1_alpha_beta_to_dq__d;
double _grid_forming_inverter__averaged__controller_current_abc_to_dq3_abc_to_dq1_alpha_beta_to_dq__q;
double _grid_forming_inverter__averaged__controller_current_abc_to_dq3_abc_to_dq1_alpha_beta_to_dq__k1;
double _grid_forming_inverter__averaged__controller_current_abc_to_dq3_abc_to_dq1_alpha_beta_to_dq__k2;
double _grid_forming_inverter__averaged__be1_25a_synchronizer_abc_to_dq2_abc_to_alpha_beta__alpha;
double _grid_forming_inverter__averaged__be1_25a_synchronizer_abc_to_dq2_abc_to_alpha_beta__beta;
double _grid_forming_inverter__averaged__be1_25a_synchronizer_abc_to_dq2_abc_to_alpha_beta__gamma;
double _grid_forming_inverter__averaged__be1_25a_synchronizer_abc_to_dq1_alpha_beta_to_dq__d;
double _grid_forming_inverter__averaged__be1_25a_synchronizer_abc_to_dq1_alpha_beta_to_dq__q;
double _grid_forming_inverter__averaged__be1_25a_synchronizer_abc_to_dq1_alpha_beta_to_dq__k1;
double _grid_forming_inverter__averaged__be1_25a_synchronizer_abc_to_dq1_alpha_beta_to_dq__k2;
double _grid_forming_inverter__averaged__controller_current_abc_to_dq_abc_to_dq1_alpha_beta_to_dq__d;
double _grid_forming_inverter__averaged__controller_current_abc_to_dq_abc_to_dq1_alpha_beta_to_dq__q;
double _grid_forming_inverter__averaged__controller_current_abc_to_dq_abc_to_dq1_alpha_beta_to_dq__k1;
double _grid_forming_inverter__averaged__controller_current_abc_to_dq_abc_to_dq1_alpha_beta_to_dq__k2;
double _grid_forming_inverter__averaged__controller_frequency_droop_sum1__out;
double _grid_forming_inverter__averaged__controller_voltage_droop_sum2__out;
double _grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_gain5__out;
double _grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_gain5__out;
double _grid_forming_inverter__averaged__be1_25a_synchronizer_gain12__out;
double _grid_forming_inverter__averaged__be1_25a_synchronizer_gain7__out;
double _grid_forming_inverter__averaged__controller_gain5__out;
double _grid_forming_inverter__averaged__controller_gain8__out;
double _grid_forming_inverter__averaged__controller_gain11__out;
double _grid_forming_inverter__averaged__controller_gain12__out;
double _grid_forming_inverter__averaged__controller_gain10__out;
double _grid_forming_inverter__averaged__controller_gain9__out;
double _grid_forming_inverter__averaged__be1_25a_synchronizer_abc_to_dq2_alpha_beta_to_dq__d;
double _grid_forming_inverter__averaged__be1_25a_synchronizer_abc_to_dq2_alpha_beta_to_dq__q;
double _grid_forming_inverter__averaged__be1_25a_synchronizer_abc_to_dq2_alpha_beta_to_dq__k1;
double _grid_forming_inverter__averaged__be1_25a_synchronizer_abc_to_dq2_alpha_beta_to_dq__k2;
double _grid_forming_inverter__averaged__be1_25a_synchronizer_gain5__out;
double _grid_forming_inverter__averaged__be1_25a_synchronizer_gain6__out;
double _grid_forming_inverter__averaged__controller_gain6__out;
double _grid_forming_inverter__averaged__controller_gain7__out;
double _grid_forming_inverter__averaged__controller_frequency_droop_gain3__out;
double _grid_forming_inverter__averaged__controller_voltage_droop_gain3__out;
double _grid_forming_inverter__averaged__be1_25a_synchronizer_product2__out;
double _grid_forming_inverter__averaged__be1_25a_synchronizer_limit1__out;
double _grid_forming_inverter__averaged__be1_25a_synchronizer_product1__out;
double _grid_forming_inverter__averaged__controller_product10__out;
double _grid_forming_inverter__averaged__controller_product111__out;
double _grid_forming_inverter__averaged__controller_product12__out;
double _grid_forming_inverter__averaged__controller_product13__out;
double _grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_gain4__out;
double _grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_gain6__out;
double _grid_forming_inverter__averaged__be1_25a_synchronizer_limit2__out;
double _grid_forming_inverter__averaged__be1_25a_synchronizer_product3__out;
double _grid_forming_inverter__averaged__be1_25a_synchronizer_pll_pid_controller1__out;
double _grid_forming_inverter__averaged__be1_25a_synchronizer_pll_pid_controller1__pi_reg_out_int;
double _grid_forming_inverter__averaged__be1_25a_synchronizer_product4__out;
double _grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_sum10__out;
double _grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_gain7__out;
double _grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_sum11__out;
double _grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_gain6__out;
double _grid_forming_inverter__averaged__be1_25a_synchronizer_trigonometric_function1__out;
double _grid_forming_inverter__averaged__be1_25a_synchronizer_sum4__out;
double _grid_forming_inverter__averaged__controller_sum2__out;
double _grid_forming_inverter__averaged__controller_sum1__out;
double _grid_forming_inverter__averaged__be1_25a_synchronizer_trigonometric_function2__out;
double _grid_forming_inverter__averaged__be1_25a_synchronizer_gain3__out;
double _grid_forming_inverter__averaged__be1_25a_synchronizer_pll_c_function1__var;
double _grid_forming_inverter__averaged__be1_25a_synchronizer_pll_c_function1__in;


double _grid_forming_inverter__averaged__be1_25a_synchronizer_pll_c_function1__out;
double _grid_forming_inverter__averaged__controller_frequency_droop_sum5__out;
double _grid_forming_inverter__averaged__be1_25a_synchronizer_sum5__out;
double _grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_gain3__out;
double _grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_gain4__out;
double _grid_forming_inverter__averaged__be1_25a_synchronizer_confine_phase1__x;
double _grid_forming_inverter__averaged__be1_25a_synchronizer_confine_phase1__floor_in;
double _grid_forming_inverter__averaged__be1_25a_synchronizer_confine_phase1__in;


double _grid_forming_inverter__averaged__be1_25a_synchronizer_confine_phase1__out;
double _grid_forming_inverter__averaged__be1_25a_synchronizer_mathematical_function1__out;
double _grid_forming_inverter__averaged__controller_gain14__out;
double _grid_forming_inverter__averaged__controller_gain17__out;
double _grid_forming_inverter__averaged__controller_sum5__out;
double _grid_forming_inverter__averaged__controller_gain15__out;
double _grid_forming_inverter__averaged__controller_gain16__out;
double _grid_forming_inverter__averaged__controller_sum4__out;
double _grid_forming_inverter__averaged__be1_25a_synchronizer_confine_phase2__x;
double _grid_forming_inverter__averaged__be1_25a_synchronizer_confine_phase2__floor_in;
double _grid_forming_inverter__averaged__be1_25a_synchronizer_confine_phase2__in;


double _grid_forming_inverter__averaged__be1_25a_synchronizer_confine_phase2__out;
double _grid_forming_inverter__averaged__be1_25a_synchronizer_pll_confine_phase__x;
double _grid_forming_inverter__averaged__be1_25a_synchronizer_pll_confine_phase__floor_in;
double _grid_forming_inverter__averaged__be1_25a_synchronizer_pll_confine_phase__in;


double _grid_forming_inverter__averaged__be1_25a_synchronizer_pll_confine_phase__out;
double _grid_forming_inverter__averaged__controller_frequency_droop_signal_switch1__out;
double _grid_forming_inverter__averaged__be1_25a_synchronizer_mathematical_function2__out;
double _grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_sum8__out;
double _grid_forming_inverter__averaged__controller_gain13__out;
double _grid_forming_inverter__averaged__controller_gain4__out;
double _grid_forming_inverter__averaged__be1_25a_synchronizer_sum1__out;
double _grid_forming_inverter__averaged__controller_frequency_droop_signal_switch2__out;
double _grid_forming_inverter__averaged__be1_25a_synchronizer_sum3__out;
double _grid_forming_inverter__averaged__controller_voltage_droop_sum5__out;
double _grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_sum11__out;
double _grid_forming_inverter__averaged__be1_25a_synchronizer_confine_phase__in;


double _grid_forming_inverter__averaged__be1_25a_synchronizer_confine_phase__out;
double _grid_forming_inverter__averaged__controller_frequency_droop_sum4__out;
double _grid_forming_inverter__averaged__be1_25a_synchronizer_abs2__out;
double _grid_forming_inverter__averaged__be1_25a_synchronizer_be1_25a_synchronizer1__dV;


double _grid_forming_inverter__averaged__be1_25a_synchronizer_be1_25a_synchronizer1__del_V;
double _grid_forming_inverter__averaged__controller_voltage_droop_signal_switch1__out;
double _grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_pid_controller4__out;
double _grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_pid_controller4__pi_reg_out_int;
double _grid_forming_inverter__averaged__be1_25a_synchronizer_abs4__out;
double _grid_forming_inverter__averaged__be1_25a_synchronizer_gain4__out;
double _grid_forming_inverter__averaged__controller_gain1__out;
double _grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_gain7__out;
double _grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_gain8__out;
double _grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_gain8__out;
double _grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_gain9__out;
double _grid_forming_inverter__averaged__be1_25a_synchronizer_relational_operator4__out;
double _grid_forming_inverter__averaged__be1_25a_synchronizer_hold_after_connect3__var;
X_Int32 _grid_forming_inverter__averaged__be1_25a_synchronizer_hold_after_connect3__INV_sync;
X_Int32 _grid_forming_inverter__averaged__be1_25a_synchronizer_hold_after_connect3__connect;
double _grid_forming_inverter__averaged__be1_25a_synchronizer_hold_after_connect3__in;


double _grid_forming_inverter__averaged__be1_25a_synchronizer_hold_after_connect3__out;
double _grid_forming_inverter__averaged__controller_voltage_droop_signal_switch2__out;
double _grid_forming_inverter__averaged__be1_25a_synchronizer_relational_operator1__out;
double _grid_forming_inverter__averaged__be1_25a_synchronizer_sum2__out;
double _grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_product6__out;
double _grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_product8__out;
double _grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_product1__out;
double _grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_product2__out;
float _grid_forming_inverter__averaged__be1_25a_synchronizer_digital_probe5__tmp;
double _grid_forming_inverter__averaged__controller_voltage_droop_sum4__out;
float _grid_forming_inverter__averaged__be1_25a_synchronizer_digital_probe3__tmp;
double _grid_forming_inverter__averaged__be1_25a_synchronizer_abs5__out;
double _grid_forming_inverter__averaged__be1_25a_synchronizer_be1_25a_synchronizer__angle_slip;
double _grid_forming_inverter__averaged__be1_25a_synchronizer_be1_25a_synchronizer__df;


double _grid_forming_inverter__averaged__be1_25a_synchronizer_be1_25a_synchronizer__del_w;
double _grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_sum10__out;
double _grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_sum13__out;
double _grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum5__out;
double _grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum6__out;
double _grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_sum7__out;
double _grid_forming_inverter__averaged__be1_25a_synchronizer_relational_operator2__out;
double _grid_forming_inverter__averaged__be1_25a_synchronizer_hold_after_connect2__var;
X_Int32 _grid_forming_inverter__averaged__be1_25a_synchronizer_hold_after_connect2__INV_sync;
X_Int32 _grid_forming_inverter__averaged__be1_25a_synchronizer_hold_after_connect2__connect;
double _grid_forming_inverter__averaged__be1_25a_synchronizer_hold_after_connect2__in;


double _grid_forming_inverter__averaged__be1_25a_synchronizer_hold_after_connect2__out;
double _grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_product5__out;
double _grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_product7__out;
double _grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_product3__out;
double _grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_product4__out;
double _grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_sum8__out;
float _grid_forming_inverter__averaged__be1_25a_synchronizer_digital_probe4__tmp;
double _grid_forming_inverter__averaged__be1_25a_synchronizer_logical_operator1__out;
double _grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_sum12__out;
double _grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_pid_controller3__out;
double _grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_pid_controller3__pi_reg_out_int;
double _grid_forming_inverter__averaged__be1_25a_synchronizer_stay_connected1__connect;
double _grid_forming_inverter__averaged__be1_25a_synchronizer_stay_connected1__connectINV;
double _grid_forming_inverter__averaged__be1_25a_synchronizer_stay_connected1__ready;


X_Int32 _grid_forming_inverter__averaged__be1_25a_synchronizer_stay_connected1__out;
double _grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum9__out;
double _grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_sum9__out;
double _grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__out;
double _grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__pi_reg_out_int;
double _grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum8__out;
double _grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum7__out;
double _grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__out;
double _grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__pi_reg_out_int;
double _grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_gain6__out;
double _grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum3__out;
double _grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_gain5__out;
double _grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_dq_to_abc_dq_to_abc1_dq_to_alpha_beta__alpha;
double _grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_dq_to_abc_dq_to_abc1_dq_to_alpha_beta__beta;
double _grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_dq_to_abc_dq_to_abc1_dq_to_alpha_beta__k1;
double _grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_dq_to_abc_dq_to_abc1_dq_to_alpha_beta__k2;
double _grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_dq_to_abc_dq_to_abc1_alpha_beta_to_abc__A;
double _grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_dq_to_abc_dq_to_abc1_alpha_beta_to_abc__B;
double _grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_dq_to_abc_dq_to_abc1_alpha_beta_to_abc__C;
double _grid_forming_inverter__averaged__controller_bus_join1__out[3];
double _grid_forming_inverter__averaged__product1__out[3];
double _grid_forming_inverter__averaged__bus_split1__out;
double _grid_forming_inverter__averaged__bus_split1__out1;
double _grid_forming_inverter__averaged__bus_split1__out2;     //@cmp.var.end

//@cmp.svar.start
// state variables
double _grid_forming_inverter__averaged__be1_25a_synchronizer_unit_delay2__state;
double _grid_forming_inverter__averaged__be1_25a_synchronizer_unit_delay3__state;
double _grid_forming_inverter__averaged__be1_25a_synchronizer_unit_delay4__state;
X_Int32 _grid_forming_inverter__averaged__be1_25a_synchronizer_unit_delay5__state;
double _grid_forming_inverter__averaged__controller_integrator1__state;
double _grid_forming_inverter__averaged__controller_integrator2__state;
double _grid_forming_inverter__averaged__controller_integrator3__state;
double _sinusoidal_source1__current_phase;
double _sinusoidal_source2__current_phase;
double _sinusoidal_source3__current_phase;
double _grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_comparator1__state;
double _grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_comparator1__state;
double _grid_forming_inverter__averaged__be1_25a_synchronizer_pll_pid_controller1__integrator_state;
X_UnInt32 _grid_forming_inverter__averaged__be1_25a_synchronizer_pll_pid_controller1__av_active;
double _grid_forming_inverter__averaged__be1_25a_synchronizer_pll_pid_controller1__filter_state;
double _grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_pid_controller4__integrator_state;
X_UnInt32 _grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_pid_controller4__av_active;
double _grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_pid_controller4__filter_state;
double _grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_pid_controller3__integrator_state;
X_UnInt32 _grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_pid_controller3__av_active;
double _grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_pid_controller3__filter_state;
double _grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__integrator_state;
X_UnInt32 _grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__av_active;
double _grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__filter_state;
double _grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__integrator_state;
X_UnInt32 _grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__av_active;
double _grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__filter_state;
//@cmp.svar.end



// generated using template: virtual_hil/custom_functions.template---------------------------------
void ReInit_user_sp_cpu_dev0() {
#if DEBUG_MODE
    printf("\n\rReInitTimer");
#endif
    //@cmp.init.block.start
    _grid_forming_inverter__averaged__be1_25a_synchronizer_unit_delay2__state = 0.0;
    _grid_forming_inverter__averaged__be1_25a_synchronizer_unit_delay3__state = 0.0;
    _grid_forming_inverter__averaged__be1_25a_synchronizer_unit_delay4__state = 0.0;
    _grid_forming_inverter__averaged__be1_25a_synchronizer_unit_delay5__state = 0.0;
    _grid_forming_inverter__averaged__controller_integrator1__state = 0.0;
    _grid_forming_inverter__averaged__controller_integrator2__state = 0.0;
    _grid_forming_inverter__averaged__controller_integrator3__state = 0.0;
    _sinusoidal_source1__current_phase = 0.0 / 360.0f;
    _sinusoidal_source2__current_phase = -120.0 / 360.0f;
    _sinusoidal_source3__current_phase = 120.0 / 360.0f;
    HIL_OutAO(0x400b, 0.0f);
    HIL_OutAO(0x400a, 0.0f);
    HIL_OutAO(0x4015, 0.0f);
    _grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_comparator1__state = 0.0f;
    _grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_comparator1__state = 0.0f;
    HIL_OutAO(0x4024, 0.0f);
    HIL_OutAO(0x4025, 0.0f);
    HIL_OutAO(0x4026, 0.0f);
    HIL_OutAO(0x4002, 0.0f);
    HIL_OutAO(0x4003, 0.0f);
    HIL_OutAO(0x4004, 0.0f);
    HIL_OutFloat(137101312, 0.0);
    HIL_OutFloat(137101313, 0.0);
    HIL_OutFloat(137101314, 0.0);
    HIL_OutAO(0x4001, 0.0f);
    HIL_OutAO(0x4000, 0.0f);
    HIL_OutAO(0x4014, 0.0f);
    HIL_OutAO(0x4012, 0.0f);
    HIL_OutAO(0x4005, 0.0f);
    HIL_OutAO(0x4006, 0.0f);
    HIL_OutAO(0x4007, 0.0f);
    _grid_forming_inverter__averaged__be1_25a_synchronizer_pll_pid_controller1__integrator_state =  376.99111843077515;
    _grid_forming_inverter__averaged__be1_25a_synchronizer_pll_pid_controller1__filter_state =  0.0;
    HIL_OutAO(0x4008, 0.0f);
    _grid_forming_inverter__averaged__be1_25a_synchronizer_pll_c_function1__var = 0;
    _grid_forming_inverter__averaged__be1_25a_synchronizer_confine_phase1__floor_in = 0;
    _grid_forming_inverter__averaged__be1_25a_synchronizer_confine_phase2__floor_in = 0;
    HIL_OutAO(0x400f, 0.0f);
    _grid_forming_inverter__averaged__be1_25a_synchronizer_pll_confine_phase__floor_in = 0;
    HIL_OutAO(0x4010, 0.0f);
    HIL_OutAO(0x4020, 0.0f);
    HIL_OutAO(0x4021, 0.0f);
    HIL_OutAO(0x401e, 0.0f);
    HIL_OutAO(0x401f, 0.0f);
    HIL_OutAO(0x4011, 0.0f);
    HIL_OutAO(0x400d, 0.0f);
    HIL_OutAO(0x4019, 0.0f);
    _grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_pid_controller4__integrator_state =  0.0;
    _grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_pid_controller4__filter_state =  0.0;
    HIL_OutAO(0x4009, 0.0f);
    _grid_forming_inverter__averaged__be1_25a_synchronizer_hold_after_connect3__var = 0;
    HIL_OutAO(0x4018, 0.0f);
    HIL_OutAO(0x400e, 0.0f);
    HIL_OutAO(0x4023, 0.0f);
    HIL_OutAO(0x400c, 0.0f);
    HIL_OutAO(0x4013, 0.0f);
    HIL_OutAO(0x4022, 0.0f);
    _grid_forming_inverter__averaged__be1_25a_synchronizer_hold_after_connect2__var = 0;
    HIL_OutAO(0x4017, 0.0f);
    _grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_pid_controller3__integrator_state =  0.0;
    _grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_pid_controller3__filter_state =  0.0;
    _grid_forming_inverter__averaged__be1_25a_synchronizer_stay_connected1__connect = 0;
    HIL_OutAO(0x4016, 0.0f);
    _grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__integrator_state =  0.0;
    _grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__filter_state =  0.0;
    HIL_OutAO(0x401d, 0.0f);
    HIL_OutAO(0x401c, 0.0f);
    _grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__integrator_state =  0.0;
    _grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__filter_state =  0.0;
    HIL_OutAO(0x401b, 0.0f);
    HIL_OutAO(0x401a, 0.0f);
    HIL_OutFloat(141295616, 0.0);
    HIL_OutFloat(141295617, 0.0);
    HIL_OutFloat(141295618, 0.0);
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
    // Generated from the component: Grid forming inverter (averaged).BE1-25A Synchronizer.Connect INV
    _grid_forming_inverter__averaged__be1_25a_synchronizer_connect_inv__out = XIo_InFloat(0x55000100);
    // Generated from the component: Grid forming inverter (averaged).BE1-25A Synchronizer.Constant6
    // Generated from the component: Grid forming inverter (averaged).BE1-25A Synchronizer.Constant7
    // Generated from the component: Grid forming inverter (averaged).BE1-25A Synchronizer.Constant9
    // Generated from the component: Grid forming inverter (averaged).BE1-25A Synchronizer.Unit Delay2
    _grid_forming_inverter__averaged__be1_25a_synchronizer_unit_delay2__out = _grid_forming_inverter__averaged__be1_25a_synchronizer_unit_delay2__state;
    // Generated from the component: Grid forming inverter (averaged).BE1-25A Synchronizer.Unit Delay3
    _grid_forming_inverter__averaged__be1_25a_synchronizer_unit_delay3__out = _grid_forming_inverter__averaged__be1_25a_synchronizer_unit_delay3__state;
    // Generated from the component: Grid forming inverter (averaged).BE1-25A Synchronizer.Unit Delay4
    _grid_forming_inverter__averaged__be1_25a_synchronizer_unit_delay4__out = _grid_forming_inverter__averaged__be1_25a_synchronizer_unit_delay4__state;
    // Generated from the component: Grid forming inverter (averaged).BE1-25A Synchronizer.Unit Delay5
    _grid_forming_inverter__averaged__be1_25a_synchronizer_unit_delay5__out = _grid_forming_inverter__averaged__be1_25a_synchronizer_unit_delay5__state;
    // Generated from the component: Grid forming inverter (averaged).Constant1
    // Generated from the component: Grid forming inverter (averaged).Controller.Constant1
    // Generated from the component: Grid forming inverter (averaged).Controller.Frequency droop.Constant2
    // Generated from the component: Grid forming inverter (averaged).Controller.Frequency droop.Constant4
    // Generated from the component: Grid forming inverter (averaged).Controller.Integrator1
    _grid_forming_inverter__averaged__controller_integrator1__out = _grid_forming_inverter__averaged__controller_integrator1__state;
    // Generated from the component: Grid forming inverter (averaged).Controller.Integrator2
    _grid_forming_inverter__averaged__controller_integrator2__out = _grid_forming_inverter__averaged__controller_integrator2__state;
    // Generated from the component: Grid forming inverter (averaged).Controller.Integrator3
    _grid_forming_inverter__averaged__controller_integrator3__out = _grid_forming_inverter__averaged__controller_integrator3__state;
    // Generated from the component: Grid forming inverter (averaged).Controller.Outer Voltage Loop + Inner Current Loop.Outer voltage control loop.Limit_zero
    // Generated from the component: Grid forming inverter (averaged).Controller.Outer Voltage Loop + Inner Current Loop.Outer voltage control loop.one
    // Generated from the component: Grid forming inverter (averaged).Controller.Outer Voltage Loop + Inner Current Loop.dq to abc.o_ref
    // Generated from the component: Grid forming inverter (averaged).Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Limit_zero
    // Generated from the component: Grid forming inverter (averaged).Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.one
    // Generated from the component: Grid forming inverter (averaged).Controller.Voltage droop.Constant2
    // Generated from the component: Grid forming inverter (averaged).Controller.Voltage droop.Constant4
    // Generated from the component: Grid forming inverter (averaged).Ea1.Va1
    _grid_forming_inverter__averaged__ea1_va1__out = (HIL_InFloat(0xc80000 + 0x206));
    // Generated from the component: Grid forming inverter (averaged).Eb1.Va1
    _grid_forming_inverter__averaged__eb1_va1__out = (HIL_InFloat(0xc80000 + 0x207));
    // Generated from the component: Grid forming inverter (averaged).Ec1.Va1
    _grid_forming_inverter__averaged__ec1_va1__out = (HIL_InFloat(0xc80000 + 0x208));
    // Generated from the component: Grid forming inverter (averaged).INV_sync
    _grid_forming_inverter__averaged__inv_sync__out = XIo_InInt32(0x55000104);
    // Generated from the component: Grid forming inverter (averaged).Ia1.Ia1
    _grid_forming_inverter__averaged__ia1_ia1__out = (HIL_InFloat(0xc80000 + 0xf));
    // Generated from the component: Grid forming inverter (averaged).Ib1.Ia1
    _grid_forming_inverter__averaged__ib1_ia1__out = (HIL_InFloat(0xc80000 + 0x10));
    // Generated from the component: Grid forming inverter (averaged).Ic1.Ia1
    _grid_forming_inverter__averaged__ic1_ia1__out = (HIL_InFloat(0xc80000 + 0x11));
    // Generated from the component: Grid forming inverter (averaged).Va2.Va1
    _grid_forming_inverter__averaged__va2_va1__out = (HIL_InFloat(0xc80000 + 0x209));
    // Generated from the component: Grid forming inverter (averaged).VaG.Va1
    _grid_forming_inverter__averaged__vag_va1__out = (HIL_InFloat(0xc80000 + 0xc));
    // Generated from the component: Grid forming inverter (averaged).Vb2.Va1
    _grid_forming_inverter__averaged__vb2_va1__out = (HIL_InFloat(0xc80000 + 0x20a));
    // Generated from the component: Grid forming inverter (averaged).VbG.Va1
    _grid_forming_inverter__averaged__vbg_va1__out = (HIL_InFloat(0xc80000 + 0xd));
    // Generated from the component: Grid forming inverter (averaged).Vc2.Va1
    _grid_forming_inverter__averaged__vc2_va1__out = (HIL_InFloat(0xc80000 + 0x20b));
    // Generated from the component: Grid forming inverter (averaged).VcG.Va1
    _grid_forming_inverter__averaged__vcg_va1__out = (HIL_InFloat(0xc80000 + 0xe));
    // Generated from the component: Grid forming inverter (averaged).Xi_a1.Ia1
    _grid_forming_inverter__averaged__xi_a1_ia1__out = (HIL_InFloat(0xc80000 + 0x20c));
    // Generated from the component: Grid forming inverter (averaged).Xi_b1.Ia1
    _grid_forming_inverter__averaged__xi_b1_ia1__out = (HIL_InFloat(0xc80000 + 0x20d));
    // Generated from the component: Grid forming inverter (averaged).Xi_c1.Ia1
    _grid_forming_inverter__averaged__xi_c1_ia1__out = (HIL_InFloat(0xc80000 + 0x20e));
    // Generated from the component: Pref
    _pref__out = XIo_InFloat(0x55000108);
    // Generated from the component: Qref
    _qref__out = XIo_InFloat(0x5500010c);
    // Generated from the component: Sinusoidal Source1
    _sinusoidal_source1__out = (1.0 * sin(2.0f * M_PI * _sinusoidal_source1__current_phase) + 0.0);
    // Generated from the component: Sinusoidal Source2
    _sinusoidal_source2__out = (1.0 * sin(2.0f * M_PI * _sinusoidal_source2__current_phase) + 0.0);
    // Generated from the component: Sinusoidal Source3
    _sinusoidal_source3__out = (1.0 * sin(2.0f * M_PI * _sinusoidal_source3__current_phase) + 0.0);
    // Generated from the component: Grid forming inverter (averaged).BE1-25A Synchronizer.del_w
    HIL_OutAO(0x400b, (float)_grid_forming_inverter__averaged__be1_25a_synchronizer_unit_delay3__out);
    // Generated from the component: Grid forming inverter (averaged).BE1-25A Synchronizer.del_V
    HIL_OutAO(0x400a, (float)_grid_forming_inverter__averaged__be1_25a_synchronizer_unit_delay4__out);
    // Generated from the component: Grid forming inverter (averaged).BE1-25A Synchronizer.Digital Probe1
    HIL_OutInt32(0xf00400, _grid_forming_inverter__averaged__be1_25a_synchronizer_unit_delay5__out != 0x0);
    // Generated from the component: Grid forming inverter (averaged).BE1-25A Synchronizer.Logical operator2
    _grid_forming_inverter__averaged__be1_25a_synchronizer_logical_operator2__out = !_grid_forming_inverter__averaged__be1_25a_synchronizer_unit_delay5__out;
    // Generated from the component: Grid forming inverter (averaged).S2.CTC_Wrapper
    if (_grid_forming_inverter__averaged__be1_25a_synchronizer_unit_delay5__out == 0x0) {
        HIL_OutInt32(0x8240480, 0x0);
    }
    else {
        HIL_OutInt32(0x8240480, 0x1);
    }
    // Generated from the component: Grid forming inverter (averaged).Gain1
    _grid_forming_inverter__averaged__gain1__out = 0.5 * _grid_forming_inverter__averaged__constant1__out;
    // Generated from the component: Grid forming inverter (averaged).Controller.E_qREF1
    HIL_OutAO(0x4015, (float)_grid_forming_inverter__averaged__controller_constant1__out);
    // Generated from the component: Grid forming inverter (averaged).Controller.Outer Voltage Loop + Inner Current Loop.Outer voltage control loop.Comparator1
    if (_grid_forming_inverter__averaged__constant1__out < _grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_limit_zero__out) {
        _grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_comparator1__out = 0;
    } else if (_grid_forming_inverter__averaged__constant1__out > _grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_limit_zero__out) {
        _grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_comparator1__out = 1;
    } else {
        _grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_comparator1__out = _grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_comparator1__state;
    }
    // Generated from the component: Grid forming inverter (averaged).Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Comparator1
    if (_grid_forming_inverter__averaged__constant1__out < _grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_limit_zero__out) {
        _grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_comparator1__out = 0;
    } else if (_grid_forming_inverter__averaged__constant1__out > _grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_limit_zero__out) {
        _grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_comparator1__out = 1;
    } else {
        _grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_comparator1__out = _grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_comparator1__state;
    }
    // Generated from the component: Grid forming inverter (averaged).Ea_1
    HIL_OutAO(0x4024, (float)_grid_forming_inverter__averaged__ea1_va1__out);
    // Generated from the component: Grid forming inverter (averaged).Eb_1
    HIL_OutAO(0x4025, (float)_grid_forming_inverter__averaged__eb1_va1__out);
    // Generated from the component: Grid forming inverter (averaged).BE1-25A Synchronizer.Current_abc_to_dq3.abc to dq1.abc to alpha beta
    _grid_forming_inverter__averaged__be1_25a_synchronizer_current_abc_to_dq3_abc_to_dq1_abc_to_alpha_beta__alpha = (2.0 * _grid_forming_inverter__averaged__ea1_va1__out - _grid_forming_inverter__averaged__eb1_va1__out - _grid_forming_inverter__averaged__ec1_va1__out) * 0.3333333333333333;
    _grid_forming_inverter__averaged__be1_25a_synchronizer_current_abc_to_dq3_abc_to_dq1_abc_to_alpha_beta__beta = (_grid_forming_inverter__averaged__eb1_va1__out - _grid_forming_inverter__averaged__ec1_va1__out) * 0.5773502691896258;
    _grid_forming_inverter__averaged__be1_25a_synchronizer_current_abc_to_dq3_abc_to_dq1_abc_to_alpha_beta__gamma = (_grid_forming_inverter__averaged__ea1_va1__out + _grid_forming_inverter__averaged__eb1_va1__out + _grid_forming_inverter__averaged__ec1_va1__out) * 0.3333333333333333;
    // Generated from the component: Grid forming inverter (averaged).Controller.Current_abc_to_dq2.abc to dq1.abc to alpha beta
    _grid_forming_inverter__averaged__controller_current_abc_to_dq2_abc_to_dq1_abc_to_alpha_beta__alpha = (2.0 * _grid_forming_inverter__averaged__ea1_va1__out - _grid_forming_inverter__averaged__eb1_va1__out - _grid_forming_inverter__averaged__ec1_va1__out) * 0.3333333333333333;
    _grid_forming_inverter__averaged__controller_current_abc_to_dq2_abc_to_dq1_abc_to_alpha_beta__beta = (_grid_forming_inverter__averaged__eb1_va1__out - _grid_forming_inverter__averaged__ec1_va1__out) * 0.5773502691896258;
    _grid_forming_inverter__averaged__controller_current_abc_to_dq2_abc_to_dq1_abc_to_alpha_beta__gamma = (_grid_forming_inverter__averaged__ea1_va1__out + _grid_forming_inverter__averaged__eb1_va1__out + _grid_forming_inverter__averaged__ec1_va1__out) * 0.3333333333333333;
    // Generated from the component: Grid forming inverter (averaged).Ec_1
    HIL_OutAO(0x4026, (float)_grid_forming_inverter__averaged__ec1_va1__out);
    // Generated from the component: Grid forming inverter (averaged).INV_sync ON
    HIL_OutInt32(0xf00406, _grid_forming_inverter__averaged__inv_sync__out != 0x0);
    // Generated from the component: Grid forming inverter (averaged).Logical operator1
    _grid_forming_inverter__averaged__logical_operator1__out = !_grid_forming_inverter__averaged__inv_sync__out;
    // Generated from the component: Grid forming inverter (averaged).Controller.Current_abc_to_dq4.abc to dq1.abc to alpha beta
    _grid_forming_inverter__averaged__controller_current_abc_to_dq4_abc_to_dq1_abc_to_alpha_beta__alpha = (2.0 * _grid_forming_inverter__averaged__ia1_ia1__out - _grid_forming_inverter__averaged__ib1_ia1__out - _grid_forming_inverter__averaged__ic1_ia1__out) * 0.3333333333333333;
    _grid_forming_inverter__averaged__controller_current_abc_to_dq4_abc_to_dq1_abc_to_alpha_beta__beta = (_grid_forming_inverter__averaged__ib1_ia1__out - _grid_forming_inverter__averaged__ic1_ia1__out) * 0.5773502691896258;
    _grid_forming_inverter__averaged__controller_current_abc_to_dq4_abc_to_dq1_abc_to_alpha_beta__gamma = (_grid_forming_inverter__averaged__ia1_ia1__out + _grid_forming_inverter__averaged__ib1_ia1__out + _grid_forming_inverter__averaged__ic1_ia1__out) * 0.3333333333333333;
    // Generated from the component: Grid forming inverter (averaged).BE1-25A Synchronizer.Sum6
    _grid_forming_inverter__averaged__be1_25a_synchronizer_sum6__out = _grid_forming_inverter__averaged__ea1_va1__out - _grid_forming_inverter__averaged__vag_va1__out;
    // Generated from the component: Grid forming inverter (averaged).BE1-25A Synchronizer.Sum7
    _grid_forming_inverter__averaged__be1_25a_synchronizer_sum7__out = _grid_forming_inverter__averaged__eb1_va1__out - _grid_forming_inverter__averaged__vbg_va1__out;
    // Generated from the component: Grid forming inverter (averaged).Controller.Current_abc_to_dq3.abc to dq1.abc to alpha beta
    _grid_forming_inverter__averaged__controller_current_abc_to_dq3_abc_to_dq1_abc_to_alpha_beta__alpha = (2.0 * _grid_forming_inverter__averaged__va2_va1__out - _grid_forming_inverter__averaged__vb2_va1__out - _grid_forming_inverter__averaged__vc2_va1__out) * 0.3333333333333333;
    _grid_forming_inverter__averaged__controller_current_abc_to_dq3_abc_to_dq1_abc_to_alpha_beta__beta = (_grid_forming_inverter__averaged__vb2_va1__out - _grid_forming_inverter__averaged__vc2_va1__out) * 0.5773502691896258;
    _grid_forming_inverter__averaged__controller_current_abc_to_dq3_abc_to_dq1_abc_to_alpha_beta__gamma = (_grid_forming_inverter__averaged__va2_va1__out + _grid_forming_inverter__averaged__vb2_va1__out + _grid_forming_inverter__averaged__vc2_va1__out) * 0.3333333333333333;
    // Generated from the component: Grid forming inverter (averaged).BE1-25A Synchronizer.Sum8
    _grid_forming_inverter__averaged__be1_25a_synchronizer_sum8__out = _grid_forming_inverter__averaged__ec1_va1__out - _grid_forming_inverter__averaged__vcg_va1__out;
    // Generated from the component: Grid forming inverter (averaged).BE1-25A Synchronizer.abc to dq1.abc to alpha beta
    _grid_forming_inverter__averaged__be1_25a_synchronizer_abc_to_dq1_abc_to_alpha_beta__alpha = (2.0 * _grid_forming_inverter__averaged__vag_va1__out - _grid_forming_inverter__averaged__vbg_va1__out - _grid_forming_inverter__averaged__vcg_va1__out) * 0.3333333333333333;
    _grid_forming_inverter__averaged__be1_25a_synchronizer_abc_to_dq1_abc_to_alpha_beta__beta = (_grid_forming_inverter__averaged__vbg_va1__out - _grid_forming_inverter__averaged__vcg_va1__out) * 0.5773502691896258;
    _grid_forming_inverter__averaged__be1_25a_synchronizer_abc_to_dq1_abc_to_alpha_beta__gamma = (_grid_forming_inverter__averaged__vag_va1__out + _grid_forming_inverter__averaged__vbg_va1__out + _grid_forming_inverter__averaged__vcg_va1__out) * 0.3333333333333333;
    // Generated from the component: Grid forming inverter (averaged).Controller.Current_abc_to_dq.abc to dq1.abc to alpha beta
    _grid_forming_inverter__averaged__controller_current_abc_to_dq_abc_to_dq1_abc_to_alpha_beta__alpha = (2.0 * _grid_forming_inverter__averaged__xi_a1_ia1__out - _grid_forming_inverter__averaged__xi_b1_ia1__out - _grid_forming_inverter__averaged__xi_c1_ia1__out) * 0.3333333333333333;
    _grid_forming_inverter__averaged__controller_current_abc_to_dq_abc_to_dq1_abc_to_alpha_beta__beta = (_grid_forming_inverter__averaged__xi_b1_ia1__out - _grid_forming_inverter__averaged__xi_c1_ia1__out) * 0.5773502691896258;
    _grid_forming_inverter__averaged__controller_current_abc_to_dq_abc_to_dq1_abc_to_alpha_beta__gamma = (_grid_forming_inverter__averaged__xi_a1_ia1__out + _grid_forming_inverter__averaged__xi_b1_ia1__out + _grid_forming_inverter__averaged__xi_c1_ia1__out) * 0.3333333333333333;
    // Generated from the component: Grid forming inverter (averaged).Controller.Gain19
    _grid_forming_inverter__averaged__controller_gain19__out = 5e-06 * _pref__out;
    // Generated from the component: Grid forming inverter (averaged).Controller.Gain18
    _grid_forming_inverter__averaged__controller_gain18__out = 5e-06 * _qref__out;
    // Generated from the component: Gain3
    _gain3__out = 391.91835884530855 * _sinusoidal_source1__out;
    // Generated from the component: Gain5
    _gain5__out = 391.91835884530855 * _sinusoidal_source2__out;
    // Generated from the component: Gain4
    _gain4__out = 391.91835884530855 * _sinusoidal_source3__out;
    // Generated from the component: Grid forming inverter (averaged).BE1-25A Synchronizer.Digital Probe6
    HIL_OutInt32(0xf00404, _grid_forming_inverter__averaged__be1_25a_synchronizer_logical_operator2__out != 0x0);
    // Generated from the component: Grid forming inverter (averaged).Controller.Outer Voltage Loop + Inner Current Loop.Outer voltage control loop.Signal switch1
    _grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_signal_switch1__out = (_grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_comparator1__out < 0.5f) ? _grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_one__out : _grid_forming_inverter__averaged__constant1__out;
    // Generated from the component: Grid forming inverter (averaged).Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Signal switch1
    _grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_signal_switch1__out = (_grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_comparator1__out < 0.5f) ? _grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_one__out : _grid_forming_inverter__averaged__constant1__out;
    // Generated from the component: Grid forming inverter (averaged).BE1-25A Synchronizer.Current_abc_to_dq3.Termination
    // Generated from the component: Grid forming inverter (averaged).BE1-25A Synchronizer.Current_abc_to_dq3.abc to dq1.alpha beta to dq
    _grid_forming_inverter__averaged__be1_25a_synchronizer_current_abc_to_dq3_abc_to_dq1_alpha_beta_to_dq__k1 = cos(_grid_forming_inverter__averaged__be1_25a_synchronizer_unit_delay2__out);
    _grid_forming_inverter__averaged__be1_25a_synchronizer_current_abc_to_dq3_abc_to_dq1_alpha_beta_to_dq__k2 = sin(_grid_forming_inverter__averaged__be1_25a_synchronizer_unit_delay2__out);
    _grid_forming_inverter__averaged__be1_25a_synchronizer_current_abc_to_dq3_abc_to_dq1_alpha_beta_to_dq__d = _grid_forming_inverter__averaged__be1_25a_synchronizer_current_abc_to_dq3_abc_to_dq1_alpha_beta_to_dq__k2 * _grid_forming_inverter__averaged__be1_25a_synchronizer_current_abc_to_dq3_abc_to_dq1_abc_to_alpha_beta__alpha - _grid_forming_inverter__averaged__be1_25a_synchronizer_current_abc_to_dq3_abc_to_dq1_alpha_beta_to_dq__k1 * _grid_forming_inverter__averaged__be1_25a_synchronizer_current_abc_to_dq3_abc_to_dq1_abc_to_alpha_beta__beta;
    _grid_forming_inverter__averaged__be1_25a_synchronizer_current_abc_to_dq3_abc_to_dq1_alpha_beta_to_dq__q = _grid_forming_inverter__averaged__be1_25a_synchronizer_current_abc_to_dq3_abc_to_dq1_alpha_beta_to_dq__k1 * _grid_forming_inverter__averaged__be1_25a_synchronizer_current_abc_to_dq3_abc_to_dq1_abc_to_alpha_beta__alpha + _grid_forming_inverter__averaged__be1_25a_synchronizer_current_abc_to_dq3_abc_to_dq1_alpha_beta_to_dq__k2 * _grid_forming_inverter__averaged__be1_25a_synchronizer_current_abc_to_dq3_abc_to_dq1_abc_to_alpha_beta__beta;
    // Generated from the component: Grid forming inverter (averaged).Controller.Current_abc_to_dq2.Termination1
    // Generated from the component: Grid forming inverter (averaged).Controller.Current_abc_to_dq2.abc to dq1.alpha beta to dq
    _grid_forming_inverter__averaged__controller_current_abc_to_dq2_abc_to_dq1_alpha_beta_to_dq__k1 = cos(_grid_forming_inverter__averaged__controller_integrator1__out);
    _grid_forming_inverter__averaged__controller_current_abc_to_dq2_abc_to_dq1_alpha_beta_to_dq__k2 = sin(_grid_forming_inverter__averaged__controller_integrator1__out);
    _grid_forming_inverter__averaged__controller_current_abc_to_dq2_abc_to_dq1_alpha_beta_to_dq__d = _grid_forming_inverter__averaged__controller_current_abc_to_dq2_abc_to_dq1_alpha_beta_to_dq__k2 * _grid_forming_inverter__averaged__controller_current_abc_to_dq2_abc_to_dq1_abc_to_alpha_beta__alpha - _grid_forming_inverter__averaged__controller_current_abc_to_dq2_abc_to_dq1_alpha_beta_to_dq__k1 * _grid_forming_inverter__averaged__controller_current_abc_to_dq2_abc_to_dq1_abc_to_alpha_beta__beta;
    _grid_forming_inverter__averaged__controller_current_abc_to_dq2_abc_to_dq1_alpha_beta_to_dq__q = _grid_forming_inverter__averaged__controller_current_abc_to_dq2_abc_to_dq1_alpha_beta_to_dq__k1 * _grid_forming_inverter__averaged__controller_current_abc_to_dq2_abc_to_dq1_abc_to_alpha_beta__alpha + _grid_forming_inverter__averaged__controller_current_abc_to_dq2_abc_to_dq1_alpha_beta_to_dq__k2 * _grid_forming_inverter__averaged__controller_current_abc_to_dq2_abc_to_dq1_abc_to_alpha_beta__beta;
    // Generated from the component: Grid forming inverter (averaged).INV_sync OFF
    HIL_OutInt32(0xf00405, _grid_forming_inverter__averaged__logical_operator1__out != 0x0);
    // Generated from the component: Grid forming inverter (averaged).Controller.Current_abc_to_dq4.Termination1
    // Generated from the component: Grid forming inverter (averaged).Controller.Current_abc_to_dq4.abc to dq1.alpha beta to dq
    _grid_forming_inverter__averaged__controller_current_abc_to_dq4_abc_to_dq1_alpha_beta_to_dq__k1 = cos(_grid_forming_inverter__averaged__controller_integrator1__out);
    _grid_forming_inverter__averaged__controller_current_abc_to_dq4_abc_to_dq1_alpha_beta_to_dq__k2 = sin(_grid_forming_inverter__averaged__controller_integrator1__out);
    _grid_forming_inverter__averaged__controller_current_abc_to_dq4_abc_to_dq1_alpha_beta_to_dq__d = _grid_forming_inverter__averaged__controller_current_abc_to_dq4_abc_to_dq1_alpha_beta_to_dq__k2 * _grid_forming_inverter__averaged__controller_current_abc_to_dq4_abc_to_dq1_abc_to_alpha_beta__alpha - _grid_forming_inverter__averaged__controller_current_abc_to_dq4_abc_to_dq1_alpha_beta_to_dq__k1 * _grid_forming_inverter__averaged__controller_current_abc_to_dq4_abc_to_dq1_abc_to_alpha_beta__beta;
    _grid_forming_inverter__averaged__controller_current_abc_to_dq4_abc_to_dq1_alpha_beta_to_dq__q = _grid_forming_inverter__averaged__controller_current_abc_to_dq4_abc_to_dq1_alpha_beta_to_dq__k1 * _grid_forming_inverter__averaged__controller_current_abc_to_dq4_abc_to_dq1_abc_to_alpha_beta__alpha + _grid_forming_inverter__averaged__controller_current_abc_to_dq4_abc_to_dq1_alpha_beta_to_dq__k2 * _grid_forming_inverter__averaged__controller_current_abc_to_dq4_abc_to_dq1_abc_to_alpha_beta__beta;
    // Generated from the component: Grid forming inverter (averaged).BE1-25A Synchronizer.Ea-Va
    HIL_OutAO(0x4002, (float)_grid_forming_inverter__averaged__be1_25a_synchronizer_sum6__out);
    // Generated from the component: Grid forming inverter (averaged).BE1-25A Synchronizer.Eb-Vb
    HIL_OutAO(0x4003, (float)_grid_forming_inverter__averaged__be1_25a_synchronizer_sum7__out);
    // Generated from the component: Grid forming inverter (averaged).Controller.Current_abc_to_dq3.Termination1
    // Generated from the component: Grid forming inverter (averaged).Controller.Current_abc_to_dq3.abc to dq1.alpha beta to dq
    _grid_forming_inverter__averaged__controller_current_abc_to_dq3_abc_to_dq1_alpha_beta_to_dq__k1 = cos(_grid_forming_inverter__averaged__controller_integrator1__out);
    _grid_forming_inverter__averaged__controller_current_abc_to_dq3_abc_to_dq1_alpha_beta_to_dq__k2 = sin(_grid_forming_inverter__averaged__controller_integrator1__out);
    _grid_forming_inverter__averaged__controller_current_abc_to_dq3_abc_to_dq1_alpha_beta_to_dq__d = _grid_forming_inverter__averaged__controller_current_abc_to_dq3_abc_to_dq1_alpha_beta_to_dq__k2 * _grid_forming_inverter__averaged__controller_current_abc_to_dq3_abc_to_dq1_abc_to_alpha_beta__alpha - _grid_forming_inverter__averaged__controller_current_abc_to_dq3_abc_to_dq1_alpha_beta_to_dq__k1 * _grid_forming_inverter__averaged__controller_current_abc_to_dq3_abc_to_dq1_abc_to_alpha_beta__beta;
    _grid_forming_inverter__averaged__controller_current_abc_to_dq3_abc_to_dq1_alpha_beta_to_dq__q = _grid_forming_inverter__averaged__controller_current_abc_to_dq3_abc_to_dq1_alpha_beta_to_dq__k1 * _grid_forming_inverter__averaged__controller_current_abc_to_dq3_abc_to_dq1_abc_to_alpha_beta__alpha + _grid_forming_inverter__averaged__controller_current_abc_to_dq3_abc_to_dq1_alpha_beta_to_dq__k2 * _grid_forming_inverter__averaged__controller_current_abc_to_dq3_abc_to_dq1_abc_to_alpha_beta__beta;
    // Generated from the component: Grid forming inverter (averaged).BE1-25A Synchronizer.Ec-Vc
    HIL_OutAO(0x4004, (float)_grid_forming_inverter__averaged__be1_25a_synchronizer_sum8__out);
    // Generated from the component: Grid forming inverter (averaged).BE1-25A Synchronizer.abc to dq2.abc to alpha beta
    _grid_forming_inverter__averaged__be1_25a_synchronizer_abc_to_dq2_abc_to_alpha_beta__alpha = (2.0 * _grid_forming_inverter__averaged__be1_25a_synchronizer_sum6__out - _grid_forming_inverter__averaged__be1_25a_synchronizer_sum7__out - _grid_forming_inverter__averaged__be1_25a_synchronizer_sum8__out) * 0.3333333333333333;
    _grid_forming_inverter__averaged__be1_25a_synchronizer_abc_to_dq2_abc_to_alpha_beta__beta = (_grid_forming_inverter__averaged__be1_25a_synchronizer_sum7__out - _grid_forming_inverter__averaged__be1_25a_synchronizer_sum8__out) * 0.5773502691896258;
    _grid_forming_inverter__averaged__be1_25a_synchronizer_abc_to_dq2_abc_to_alpha_beta__gamma = (_grid_forming_inverter__averaged__be1_25a_synchronizer_sum6__out + _grid_forming_inverter__averaged__be1_25a_synchronizer_sum7__out + _grid_forming_inverter__averaged__be1_25a_synchronizer_sum8__out) * 0.3333333333333333;
    // Generated from the component: Grid forming inverter (averaged).BE1-25A Synchronizer.Termination1
    // Generated from the component: Grid forming inverter (averaged).BE1-25A Synchronizer.abc to dq1.alpha beta to dq
    _grid_forming_inverter__averaged__be1_25a_synchronizer_abc_to_dq1_alpha_beta_to_dq__k1 = cos(_grid_forming_inverter__averaged__be1_25a_synchronizer_unit_delay2__out);
    _grid_forming_inverter__averaged__be1_25a_synchronizer_abc_to_dq1_alpha_beta_to_dq__k2 = sin(_grid_forming_inverter__averaged__be1_25a_synchronizer_unit_delay2__out);
    _grid_forming_inverter__averaged__be1_25a_synchronizer_abc_to_dq1_alpha_beta_to_dq__d = _grid_forming_inverter__averaged__be1_25a_synchronizer_abc_to_dq1_alpha_beta_to_dq__k2 * _grid_forming_inverter__averaged__be1_25a_synchronizer_abc_to_dq1_abc_to_alpha_beta__alpha - _grid_forming_inverter__averaged__be1_25a_synchronizer_abc_to_dq1_alpha_beta_to_dq__k1 * _grid_forming_inverter__averaged__be1_25a_synchronizer_abc_to_dq1_abc_to_alpha_beta__beta;
    _grid_forming_inverter__averaged__be1_25a_synchronizer_abc_to_dq1_alpha_beta_to_dq__q = _grid_forming_inverter__averaged__be1_25a_synchronizer_abc_to_dq1_alpha_beta_to_dq__k1 * _grid_forming_inverter__averaged__be1_25a_synchronizer_abc_to_dq1_abc_to_alpha_beta__alpha + _grid_forming_inverter__averaged__be1_25a_synchronizer_abc_to_dq1_alpha_beta_to_dq__k2 * _grid_forming_inverter__averaged__be1_25a_synchronizer_abc_to_dq1_abc_to_alpha_beta__beta;
    // Generated from the component: Grid forming inverter (averaged).Controller.Current_abc_to_dq.Termination1
    // Generated from the component: Grid forming inverter (averaged).Controller.Current_abc_to_dq.abc to dq1.alpha beta to dq
    _grid_forming_inverter__averaged__controller_current_abc_to_dq_abc_to_dq1_alpha_beta_to_dq__k1 = cos(_grid_forming_inverter__averaged__controller_integrator1__out);
    _grid_forming_inverter__averaged__controller_current_abc_to_dq_abc_to_dq1_alpha_beta_to_dq__k2 = sin(_grid_forming_inverter__averaged__controller_integrator1__out);
    _grid_forming_inverter__averaged__controller_current_abc_to_dq_abc_to_dq1_alpha_beta_to_dq__d = _grid_forming_inverter__averaged__controller_current_abc_to_dq_abc_to_dq1_alpha_beta_to_dq__k2 * _grid_forming_inverter__averaged__controller_current_abc_to_dq_abc_to_dq1_abc_to_alpha_beta__alpha - _grid_forming_inverter__averaged__controller_current_abc_to_dq_abc_to_dq1_alpha_beta_to_dq__k1 * _grid_forming_inverter__averaged__controller_current_abc_to_dq_abc_to_dq1_abc_to_alpha_beta__beta;
    _grid_forming_inverter__averaged__controller_current_abc_to_dq_abc_to_dq1_alpha_beta_to_dq__q = _grid_forming_inverter__averaged__controller_current_abc_to_dq_abc_to_dq1_alpha_beta_to_dq__k1 * _grid_forming_inverter__averaged__controller_current_abc_to_dq_abc_to_dq1_abc_to_alpha_beta__alpha + _grid_forming_inverter__averaged__controller_current_abc_to_dq_abc_to_dq1_alpha_beta_to_dq__k2 * _grid_forming_inverter__averaged__controller_current_abc_to_dq_abc_to_dq1_abc_to_alpha_beta__beta;
    // Generated from the component: Grid forming inverter (averaged).Controller.Frequency droop.Sum1
    _grid_forming_inverter__averaged__controller_frequency_droop_sum1__out = _grid_forming_inverter__averaged__controller_gain19__out - _grid_forming_inverter__averaged__controller_integrator2__out;
    // Generated from the component: Grid forming inverter (averaged).Controller.Voltage droop.Sum2
    _grid_forming_inverter__averaged__controller_voltage_droop_sum2__out = _grid_forming_inverter__averaged__controller_gain18__out - _grid_forming_inverter__averaged__controller_integrator3__out;
    // Generated from the component: Va_G.Vs1
    HIL_OutFloat(137101312, (float) _gain3__out);
    // Generated from the component: Vb_G.Vs1
    HIL_OutFloat(137101313, (float) _gain5__out);
    // Generated from the component: Vc_G.Vs1
    HIL_OutFloat(137101314, (float) _gain4__out);
    // Generated from the component: Grid forming inverter (averaged).Controller.Outer Voltage Loop + Inner Current Loop.Outer voltage control loop.Gain5
    _grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_gain5__out = 0.5 * _grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_signal_switch1__out;
    // Generated from the component: Grid forming inverter (averaged).Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Gain5
    _grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_gain5__out = 0.5 * _grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_signal_switch1__out;
    // Generated from the component: Grid forming inverter (averaged).BE1-25A Synchronizer.Gain12
    _grid_forming_inverter__averaged__be1_25a_synchronizer_gain12__out = 0.004421461629572523 * _grid_forming_inverter__averaged__be1_25a_synchronizer_current_abc_to_dq3_abc_to_dq1_alpha_beta_to_dq__q;
    // Generated from the component: Grid forming inverter (averaged).BE1-25A Synchronizer.Gain7
    _grid_forming_inverter__averaged__be1_25a_synchronizer_gain7__out = 0.004421461629572523 * _grid_forming_inverter__averaged__be1_25a_synchronizer_current_abc_to_dq3_abc_to_dq1_alpha_beta_to_dq__d;
    // Generated from the component: Grid forming inverter (averaged).Controller.Gain5
    _grid_forming_inverter__averaged__controller_gain5__out = 0.004421461629572523 * _grid_forming_inverter__averaged__controller_current_abc_to_dq2_abc_to_dq1_alpha_beta_to_dq__d;
    // Generated from the component: Grid forming inverter (averaged).Controller.Gain8
    _grid_forming_inverter__averaged__controller_gain8__out = 0.004421461629572523 * _grid_forming_inverter__averaged__controller_current_abc_to_dq2_abc_to_dq1_alpha_beta_to_dq__q;
    // Generated from the component: Grid forming inverter (averaged).Controller.Gain11
    _grid_forming_inverter__averaged__controller_gain11__out = 0.0011308477645849007 * _grid_forming_inverter__averaged__controller_current_abc_to_dq4_abc_to_dq1_alpha_beta_to_dq__d;
    // Generated from the component: Grid forming inverter (averaged).Controller.Gain12
    _grid_forming_inverter__averaged__controller_gain12__out = 0.0011308477645849007 * _grid_forming_inverter__averaged__controller_current_abc_to_dq4_abc_to_dq1_alpha_beta_to_dq__q;
    // Generated from the component: Grid forming inverter (averaged).Controller.Gain10
    _grid_forming_inverter__averaged__controller_gain10__out = 0.004421461629572523 * _grid_forming_inverter__averaged__controller_current_abc_to_dq3_abc_to_dq1_alpha_beta_to_dq__q;
    // Generated from the component: Grid forming inverter (averaged).Controller.Gain9
    _grid_forming_inverter__averaged__controller_gain9__out = 0.004421461629572523 * _grid_forming_inverter__averaged__controller_current_abc_to_dq3_abc_to_dq1_alpha_beta_to_dq__d;
    // Generated from the component: Grid forming inverter (averaged).BE1-25A Synchronizer.Termination2
    // Generated from the component: Grid forming inverter (averaged).BE1-25A Synchronizer.abc to dq2.alpha beta to dq
    _grid_forming_inverter__averaged__be1_25a_synchronizer_abc_to_dq2_alpha_beta_to_dq__k1 = cos(_grid_forming_inverter__averaged__be1_25a_synchronizer_unit_delay2__out);
    _grid_forming_inverter__averaged__be1_25a_synchronizer_abc_to_dq2_alpha_beta_to_dq__k2 = sin(_grid_forming_inverter__averaged__be1_25a_synchronizer_unit_delay2__out);
    _grid_forming_inverter__averaged__be1_25a_synchronizer_abc_to_dq2_alpha_beta_to_dq__d = _grid_forming_inverter__averaged__be1_25a_synchronizer_abc_to_dq2_alpha_beta_to_dq__k2 * _grid_forming_inverter__averaged__be1_25a_synchronizer_abc_to_dq2_abc_to_alpha_beta__alpha - _grid_forming_inverter__averaged__be1_25a_synchronizer_abc_to_dq2_alpha_beta_to_dq__k1 * _grid_forming_inverter__averaged__be1_25a_synchronizer_abc_to_dq2_abc_to_alpha_beta__beta;
    _grid_forming_inverter__averaged__be1_25a_synchronizer_abc_to_dq2_alpha_beta_to_dq__q = _grid_forming_inverter__averaged__be1_25a_synchronizer_abc_to_dq2_alpha_beta_to_dq__k1 * _grid_forming_inverter__averaged__be1_25a_synchronizer_abc_to_dq2_abc_to_alpha_beta__alpha + _grid_forming_inverter__averaged__be1_25a_synchronizer_abc_to_dq2_alpha_beta_to_dq__k2 * _grid_forming_inverter__averaged__be1_25a_synchronizer_abc_to_dq2_abc_to_alpha_beta__beta;
    // Generated from the component: Grid forming inverter (averaged).BE1-25A Synchronizer.Gain5
    _grid_forming_inverter__averaged__be1_25a_synchronizer_gain5__out = 0.004421461629572523 * _grid_forming_inverter__averaged__be1_25a_synchronizer_abc_to_dq1_alpha_beta_to_dq__d;
    // Generated from the component: Grid forming inverter (averaged).BE1-25A Synchronizer.Gain6
    _grid_forming_inverter__averaged__be1_25a_synchronizer_gain6__out = 0.004421461629572523 * _grid_forming_inverter__averaged__be1_25a_synchronizer_abc_to_dq1_alpha_beta_to_dq__q;
    // Generated from the component: Grid forming inverter (averaged).Controller.Gain6
    _grid_forming_inverter__averaged__controller_gain6__out = 0.0011308477645849007 * _grid_forming_inverter__averaged__controller_current_abc_to_dq_abc_to_dq1_alpha_beta_to_dq__d;
    // Generated from the component: Grid forming inverter (averaged).Controller.Gain7
    _grid_forming_inverter__averaged__controller_gain7__out = 0.0011308477645849007 * _grid_forming_inverter__averaged__controller_current_abc_to_dq_abc_to_dq1_alpha_beta_to_dq__q;
    // Generated from the component: Grid forming inverter (averaged).Controller.Frequency droop.Gain3
    _grid_forming_inverter__averaged__controller_frequency_droop_gain3__out = 1.1309733552923256 * _grid_forming_inverter__averaged__controller_frequency_droop_sum1__out;
    // Generated from the component: Grid forming inverter (averaged).Controller.Voltage droop.Gain3
    _grid_forming_inverter__averaged__controller_voltage_droop_gain3__out = 0.0011308477645849007 * _grid_forming_inverter__averaged__controller_voltage_droop_sum2__out;
    // Generated from the component: Grid forming inverter (averaged).BE1-25A Synchronizer.E_q
    HIL_OutAO(0x4001, (float)_grid_forming_inverter__averaged__be1_25a_synchronizer_gain12__out);
    // Generated from the component: Grid forming inverter (averaged).BE1-25A Synchronizer.Product2
    _grid_forming_inverter__averaged__be1_25a_synchronizer_product2__out = (_grid_forming_inverter__averaged__be1_25a_synchronizer_gain12__out * _grid_forming_inverter__averaged__be1_25a_synchronizer_gain12__out);
    // Generated from the component: Grid forming inverter (averaged).BE1-25A Synchronizer.E_d
    HIL_OutAO(0x4000, (float)_grid_forming_inverter__averaged__be1_25a_synchronizer_gain7__out);
    // Generated from the component: Grid forming inverter (averaged).BE1-25A Synchronizer.Limit1
    if (_grid_forming_inverter__averaged__be1_25a_synchronizer_gain7__out < 1e-12) {
        _grid_forming_inverter__averaged__be1_25a_synchronizer_limit1__out = 1e-12;
    } else {
        _grid_forming_inverter__averaged__be1_25a_synchronizer_limit1__out = _grid_forming_inverter__averaged__be1_25a_synchronizer_gain7__out;
    }
    // Generated from the component: Grid forming inverter (averaged).BE1-25A Synchronizer.Product1
    _grid_forming_inverter__averaged__be1_25a_synchronizer_product1__out = (_grid_forming_inverter__averaged__be1_25a_synchronizer_gain7__out * _grid_forming_inverter__averaged__be1_25a_synchronizer_gain7__out);
    // Generated from the component: Grid forming inverter (averaged).Controller.E_q1
    HIL_OutAO(0x4014, (float)_grid_forming_inverter__averaged__controller_gain8__out);
    // Generated from the component: Grid forming inverter (averaged).Controller.Product10
    _grid_forming_inverter__averaged__controller_product10__out = (_grid_forming_inverter__averaged__controller_gain11__out * _grid_forming_inverter__averaged__controller_gain8__out);
    // Generated from the component: Grid forming inverter (averaged).Controller.Product111
    _grid_forming_inverter__averaged__controller_product111__out = (_grid_forming_inverter__averaged__controller_gain5__out * _grid_forming_inverter__averaged__controller_gain11__out);
    // Generated from the component: Grid forming inverter (averaged).Controller.Product12
    _grid_forming_inverter__averaged__controller_product12__out = (_grid_forming_inverter__averaged__controller_gain5__out * _grid_forming_inverter__averaged__controller_gain12__out);
    // Generated from the component: Grid forming inverter (averaged).Controller.Product13
    _grid_forming_inverter__averaged__controller_product13__out = (_grid_forming_inverter__averaged__controller_gain8__out * _grid_forming_inverter__averaged__controller_gain12__out);
    // Generated from the component: Grid forming inverter (averaged).Controller.Outer Voltage Loop + Inner Current Loop.Outer voltage control loop.Gain4
    _grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_gain4__out = 0.014463075763037474 * _grid_forming_inverter__averaged__controller_gain10__out;
    // Generated from the component: Grid forming inverter (averaged).Controller.E_d1
    HIL_OutAO(0x4012, (float)_grid_forming_inverter__averaged__controller_gain9__out);
    // Generated from the component: Grid forming inverter (averaged).Controller.Outer Voltage Loop + Inner Current Loop.Outer voltage control loop.Gain6
    _grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_gain6__out = 0.014463075763037474 * _grid_forming_inverter__averaged__controller_gain9__out;
    // Generated from the component: Grid forming inverter (averaged).BE1-25A Synchronizer.Ed-Vd
    HIL_OutAO(0x4005, (float)_grid_forming_inverter__averaged__be1_25a_synchronizer_abc_to_dq2_alpha_beta_to_dq__d);
    // Generated from the component: Grid forming inverter (averaged).BE1-25A Synchronizer.Eq-Vq
    HIL_OutAO(0x4006, (float)_grid_forming_inverter__averaged__be1_25a_synchronizer_abc_to_dq2_alpha_beta_to_dq__q);
    // Generated from the component: Grid forming inverter (averaged).BE1-25A Synchronizer.Limit2
    if (_grid_forming_inverter__averaged__be1_25a_synchronizer_gain5__out < 1e-12) {
        _grid_forming_inverter__averaged__be1_25a_synchronizer_limit2__out = 1e-12;
    } else {
        _grid_forming_inverter__averaged__be1_25a_synchronizer_limit2__out = _grid_forming_inverter__averaged__be1_25a_synchronizer_gain5__out;
    }
    // Generated from the component: Grid forming inverter (averaged).BE1-25A Synchronizer.Product3
    _grid_forming_inverter__averaged__be1_25a_synchronizer_product3__out = (_grid_forming_inverter__averaged__be1_25a_synchronizer_gain5__out * _grid_forming_inverter__averaged__be1_25a_synchronizer_gain5__out);
    // Generated from the component: Grid forming inverter (averaged).BE1-25A Synchronizer.Vd_G
    HIL_OutAO(0x4007, (float)_grid_forming_inverter__averaged__be1_25a_synchronizer_gain5__out);
    // Generated from the component: Grid forming inverter (averaged).BE1-25A Synchronizer.PLL.PID controller1
    _grid_forming_inverter__averaged__be1_25a_synchronizer_pll_pid_controller1__pi_reg_out_int = _grid_forming_inverter__averaged__be1_25a_synchronizer_pll_pid_controller1__integrator_state + 1.0 * _grid_forming_inverter__averaged__be1_25a_synchronizer_gain6__out;
    if (_grid_forming_inverter__averaged__be1_25a_synchronizer_pll_pid_controller1__pi_reg_out_int < 373.84952577718536) {
        _grid_forming_inverter__averaged__be1_25a_synchronizer_pll_pid_controller1__out = 373.84952577718536;
        _grid_forming_inverter__averaged__be1_25a_synchronizer_pll_pid_controller1__av_active = 1;
    } else if (_grid_forming_inverter__averaged__be1_25a_synchronizer_pll_pid_controller1__pi_reg_out_int > 380.132711084365) {
        _grid_forming_inverter__averaged__be1_25a_synchronizer_pll_pid_controller1__out = 380.132711084365;
        _grid_forming_inverter__averaged__be1_25a_synchronizer_pll_pid_controller1__av_active = 1;
    } else {
        _grid_forming_inverter__averaged__be1_25a_synchronizer_pll_pid_controller1__out = _grid_forming_inverter__averaged__be1_25a_synchronizer_pll_pid_controller1__pi_reg_out_int;
        _grid_forming_inverter__averaged__be1_25a_synchronizer_pll_pid_controller1__av_active = 0;
    }
    // Generated from the component: Grid forming inverter (averaged).BE1-25A Synchronizer.Product4
    _grid_forming_inverter__averaged__be1_25a_synchronizer_product4__out = (_grid_forming_inverter__averaged__be1_25a_synchronizer_gain6__out * _grid_forming_inverter__averaged__be1_25a_synchronizer_gain6__out);
    // Generated from the component: Grid forming inverter (averaged).BE1-25A Synchronizer.Vq_G
    HIL_OutAO(0x4008, (float)_grid_forming_inverter__averaged__be1_25a_synchronizer_gain6__out);
    // Generated from the component: Grid forming inverter (averaged).Controller.Outer Voltage Loop + Inner Current Loop.Sum10
    _grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_sum10__out = _grid_forming_inverter__averaged__controller_gain11__out - _grid_forming_inverter__averaged__controller_gain6__out;
    // Generated from the component: Grid forming inverter (averaged).Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Gain7
    _grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_gain7__out = 8.843905344464218 * _grid_forming_inverter__averaged__controller_gain6__out;
    // Generated from the component: Grid forming inverter (averaged).Controller.Outer Voltage Loop + Inner Current Loop.Sum11
    _grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_sum11__out = _grid_forming_inverter__averaged__controller_gain12__out - _grid_forming_inverter__averaged__controller_gain7__out;
    // Generated from the component: Grid forming inverter (averaged).Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Gain6
    _grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_gain6__out = 8.843905344464218 * _grid_forming_inverter__averaged__controller_gain7__out;
    // Generated from the component: Grid forming inverter (averaged).BE1-25A Synchronizer.Trigonometric function1
    _grid_forming_inverter__averaged__be1_25a_synchronizer_trigonometric_function1__out = atan2(_grid_forming_inverter__averaged__be1_25a_synchronizer_gain12__out, _grid_forming_inverter__averaged__be1_25a_synchronizer_limit1__out);
    // Generated from the component: Grid forming inverter (averaged).BE1-25A Synchronizer.Sum4
    _grid_forming_inverter__averaged__be1_25a_synchronizer_sum4__out = _grid_forming_inverter__averaged__be1_25a_synchronizer_product1__out + _grid_forming_inverter__averaged__be1_25a_synchronizer_product2__out;
    // Generated from the component: Grid forming inverter (averaged).Controller.Sum2
    _grid_forming_inverter__averaged__controller_sum2__out = _grid_forming_inverter__averaged__controller_product10__out - _grid_forming_inverter__averaged__controller_product12__out;
    // Generated from the component: Grid forming inverter (averaged).Controller.Sum1
    _grid_forming_inverter__averaged__controller_sum1__out = _grid_forming_inverter__averaged__controller_product111__out + _grid_forming_inverter__averaged__controller_product13__out;
    // Generated from the component: Grid forming inverter (averaged).BE1-25A Synchronizer.Trigonometric function2
    _grid_forming_inverter__averaged__be1_25a_synchronizer_trigonometric_function2__out = atan2(_grid_forming_inverter__averaged__be1_25a_synchronizer_gain6__out, _grid_forming_inverter__averaged__be1_25a_synchronizer_limit2__out);
    // Generated from the component: Grid forming inverter (averaged).BE1-25A Synchronizer.Gain3
    _grid_forming_inverter__averaged__be1_25a_synchronizer_gain3__out = 0.0026525823848649226 * _grid_forming_inverter__averaged__be1_25a_synchronizer_pll_pid_controller1__out;
    // Generated from the component: Grid forming inverter (averaged).BE1-25A Synchronizer.PLL.C function1
    _grid_forming_inverter__averaged__be1_25a_synchronizer_pll_c_function1__in = _grid_forming_inverter__averaged__be1_25a_synchronizer_pll_pid_controller1__out;
    _grid_forming_inverter__averaged__be1_25a_synchronizer_pll_c_function1__out = _grid_forming_inverter__averaged__be1_25a_synchronizer_pll_c_function1__var;
    // Generated from the component: Grid forming inverter (averaged).Controller.Frequency droop.Sum5
    _grid_forming_inverter__averaged__controller_frequency_droop_sum5__out = _grid_forming_inverter__averaged__be1_25a_synchronizer_unit_delay3__out + _grid_forming_inverter__averaged__be1_25a_synchronizer_pll_pid_controller1__out;
    // Generated from the component: Grid forming inverter (averaged).BE1-25A Synchronizer.Sum5
    _grid_forming_inverter__averaged__be1_25a_synchronizer_sum5__out = _grid_forming_inverter__averaged__be1_25a_synchronizer_product3__out + _grid_forming_inverter__averaged__be1_25a_synchronizer_product4__out;
    // Generated from the component: Grid forming inverter (averaged).Controller.Outer Voltage Loop + Inner Current Loop.Gain3
    _grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_gain3__out = 0.058647968825346335 * _grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_sum10__out;
    // Generated from the component: Grid forming inverter (averaged).Controller.Outer Voltage Loop + Inner Current Loop.Gain4
    _grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_gain4__out = 0.058647968825346335 * _grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_sum11__out;
    // Generated from the component: Grid forming inverter (averaged).BE1-25A Synchronizer.confine phase1
    _grid_forming_inverter__averaged__be1_25a_synchronizer_confine_phase1__in = _grid_forming_inverter__averaged__be1_25a_synchronizer_trigonometric_function1__out;
    _grid_forming_inverter__averaged__be1_25a_synchronizer_confine_phase1__x = _grid_forming_inverter__averaged__be1_25a_synchronizer_confine_phase1__in / 6.283185307179586;
    _grid_forming_inverter__averaged__be1_25a_synchronizer_confine_phase1__floor_in = floor(_grid_forming_inverter__averaged__be1_25a_synchronizer_confine_phase1__x);
    _grid_forming_inverter__averaged__be1_25a_synchronizer_confine_phase1__out = _grid_forming_inverter__averaged__be1_25a_synchronizer_confine_phase1__in - (6.283185307179586 * _grid_forming_inverter__averaged__be1_25a_synchronizer_confine_phase1__floor_in);
    // Generated from the component: Grid forming inverter (averaged).BE1-25A Synchronizer.Mathematical function1
    _grid_forming_inverter__averaged__be1_25a_synchronizer_mathematical_function1__out = sqrt(_grid_forming_inverter__averaged__be1_25a_synchronizer_sum4__out);
    // Generated from the component: Grid forming inverter (averaged).Controller.Gain14
    _grid_forming_inverter__averaged__controller_gain14__out = 200000.0 * _grid_forming_inverter__averaged__controller_sum2__out;
    // Generated from the component: Grid forming inverter (averaged).Controller.Gain17
    _grid_forming_inverter__averaged__controller_gain17__out = 2.857142857142857 * _grid_forming_inverter__averaged__controller_sum2__out;
    // Generated from the component: Grid forming inverter (averaged).Controller.Sum5
    _grid_forming_inverter__averaged__controller_sum5__out = _grid_forming_inverter__averaged__controller_sum2__out - _grid_forming_inverter__averaged__controller_integrator3__out;
    // Generated from the component: Grid forming inverter (averaged).Controller.Gain15
    _grid_forming_inverter__averaged__controller_gain15__out = 200000.0 * _grid_forming_inverter__averaged__controller_sum1__out;
    // Generated from the component: Grid forming inverter (averaged).Controller.Gain16
    _grid_forming_inverter__averaged__controller_gain16__out = 2.857142857142857 * _grid_forming_inverter__averaged__controller_sum1__out;
    // Generated from the component: Grid forming inverter (averaged).Controller.Sum4
    _grid_forming_inverter__averaged__controller_sum4__out = _grid_forming_inverter__averaged__controller_sum1__out - _grid_forming_inverter__averaged__controller_integrator2__out;
    // Generated from the component: Grid forming inverter (averaged).BE1-25A Synchronizer.confine phase2
    _grid_forming_inverter__averaged__be1_25a_synchronizer_confine_phase2__in = _grid_forming_inverter__averaged__be1_25a_synchronizer_trigonometric_function2__out;
    _grid_forming_inverter__averaged__be1_25a_synchronizer_confine_phase2__x = _grid_forming_inverter__averaged__be1_25a_synchronizer_confine_phase2__in / 6.283185307179586;
    _grid_forming_inverter__averaged__be1_25a_synchronizer_confine_phase2__floor_in = floor(_grid_forming_inverter__averaged__be1_25a_synchronizer_confine_phase2__x);
    _grid_forming_inverter__averaged__be1_25a_synchronizer_confine_phase2__out = _grid_forming_inverter__averaged__be1_25a_synchronizer_confine_phase2__in - (6.283185307179586 * _grid_forming_inverter__averaged__be1_25a_synchronizer_confine_phase2__floor_in);
    // Generated from the component: Grid forming inverter (averaged).BE1-25A Synchronizer.w_bus
    HIL_OutAO(0x400f, (float)_grid_forming_inverter__averaged__be1_25a_synchronizer_gain3__out);
    // Generated from the component: Grid forming inverter (averaged).BE1-25A Synchronizer.PLL.confine phase
    _grid_forming_inverter__averaged__be1_25a_synchronizer_pll_confine_phase__in = _grid_forming_inverter__averaged__be1_25a_synchronizer_pll_c_function1__out;
    _grid_forming_inverter__averaged__be1_25a_synchronizer_pll_confine_phase__x = _grid_forming_inverter__averaged__be1_25a_synchronizer_pll_confine_phase__in / 6.283185307179586;
    _grid_forming_inverter__averaged__be1_25a_synchronizer_pll_confine_phase__floor_in = floor(_grid_forming_inverter__averaged__be1_25a_synchronizer_pll_confine_phase__x);
    _grid_forming_inverter__averaged__be1_25a_synchronizer_pll_confine_phase__out = _grid_forming_inverter__averaged__be1_25a_synchronizer_pll_confine_phase__in - (6.283185307179586 * _grid_forming_inverter__averaged__be1_25a_synchronizer_pll_confine_phase__floor_in);
    // Generated from the component: Grid forming inverter (averaged).Controller.Frequency droop.Signal switch1
    _grid_forming_inverter__averaged__controller_frequency_droop_signal_switch1__out = (_grid_forming_inverter__averaged__inv_sync__out != 1.0) ? _grid_forming_inverter__averaged__controller_frequency_droop_constant2__out : _grid_forming_inverter__averaged__controller_frequency_droop_sum5__out;
    // Generated from the component: Grid forming inverter (averaged).BE1-25A Synchronizer.Mathematical function2
    _grid_forming_inverter__averaged__be1_25a_synchronizer_mathematical_function2__out = sqrt(_grid_forming_inverter__averaged__be1_25a_synchronizer_sum5__out);
    // Generated from the component: Grid forming inverter (averaged).Controller.Outer Voltage Loop + Inner Current Loop.Sum8
    _grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_sum8__out = _grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_gain4__out + _grid_forming_inverter__averaged__controller_constant1__out;
    // Generated from the component: Grid forming inverter (averaged).BE1-25A Synchronizer.|E|
    HIL_OutAO(0x4010, (float)_grid_forming_inverter__averaged__be1_25a_synchronizer_mathematical_function1__out);
    // Generated from the component: Grid forming inverter (averaged).Controller.Q1
    HIL_OutAO(0x4020, (float)_grid_forming_inverter__averaged__controller_gain14__out);
    // Generated from the component: Grid forming inverter (averaged).Controller.Qpu
    HIL_OutAO(0x4021, (float)_grid_forming_inverter__averaged__controller_gain17__out);
    // Generated from the component: Grid forming inverter (averaged).Controller.Gain13
    _grid_forming_inverter__averaged__controller_gain13__out = 2.0 * _grid_forming_inverter__averaged__controller_sum5__out;
    // Generated from the component: Grid forming inverter (averaged).Controller.P1
    HIL_OutAO(0x401e, (float)_grid_forming_inverter__averaged__controller_gain15__out);
    // Generated from the component: Grid forming inverter (averaged).Controller.Ppu
    HIL_OutAO(0x401f, (float)_grid_forming_inverter__averaged__controller_gain16__out);
    // Generated from the component: Grid forming inverter (averaged).Controller.Gain4
    _grid_forming_inverter__averaged__controller_gain4__out = 2.0 * _grid_forming_inverter__averaged__controller_sum4__out;
    // Generated from the component: Grid forming inverter (averaged).BE1-25A Synchronizer.Sum1
    _grid_forming_inverter__averaged__be1_25a_synchronizer_sum1__out =  - _grid_forming_inverter__averaged__be1_25a_synchronizer_confine_phase1__out + _grid_forming_inverter__averaged__be1_25a_synchronizer_confine_phase2__out;
    // Generated from the component: Grid forming inverter (averaged).Controller.Frequency droop.Signal switch2
    _grid_forming_inverter__averaged__controller_frequency_droop_signal_switch2__out = (_grid_forming_inverter__averaged__be1_25a_synchronizer_unit_delay5__out != 1.0) ? _grid_forming_inverter__averaged__controller_frequency_droop_signal_switch1__out : _grid_forming_inverter__averaged__controller_frequency_droop_constant4__out;
    // Generated from the component: Grid forming inverter (averaged).BE1-25A Synchronizer.Sum3
    _grid_forming_inverter__averaged__be1_25a_synchronizer_sum3__out =  - _grid_forming_inverter__averaged__be1_25a_synchronizer_mathematical_function1__out + _grid_forming_inverter__averaged__be1_25a_synchronizer_mathematical_function2__out;
    // Generated from the component: Grid forming inverter (averaged).BE1-25A Synchronizer.|V|
    HIL_OutAO(0x4011, (float)_grid_forming_inverter__averaged__be1_25a_synchronizer_mathematical_function2__out);
    // Generated from the component: Grid forming inverter (averaged).Controller.Voltage droop.Sum5
    _grid_forming_inverter__averaged__controller_voltage_droop_sum5__out = _grid_forming_inverter__averaged__be1_25a_synchronizer_unit_delay4__out + _grid_forming_inverter__averaged__be1_25a_synchronizer_mathematical_function2__out;
    // Generated from the component: Grid forming inverter (averaged).Controller.Outer Voltage Loop + Inner Current Loop.Outer voltage control loop.Sum11
    _grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_sum11__out = _grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_sum8__out - _grid_forming_inverter__averaged__controller_gain10__out;
    // Generated from the component: Grid forming inverter (averaged).BE1-25A Synchronizer.confine phase
    _grid_forming_inverter__averaged__be1_25a_synchronizer_confine_phase__in = _grid_forming_inverter__averaged__be1_25a_synchronizer_sum1__out;
    if (_grid_forming_inverter__averaged__be1_25a_synchronizer_confine_phase__in > 0) {
        if (_grid_forming_inverter__averaged__be1_25a_synchronizer_confine_phase__in > (6.283185307179586 / 2))_grid_forming_inverter__averaged__be1_25a_synchronizer_confine_phase__out = _grid_forming_inverter__averaged__be1_25a_synchronizer_confine_phase__in - 6.283185307179586;
        else _grid_forming_inverter__averaged__be1_25a_synchronizer_confine_phase__out = _grid_forming_inverter__averaged__be1_25a_synchronizer_confine_phase__in;
    }
    if (_grid_forming_inverter__averaged__be1_25a_synchronizer_confine_phase__in < 0) {
        if (_grid_forming_inverter__averaged__be1_25a_synchronizer_confine_phase__in < (-6.283185307179586 / 2))_grid_forming_inverter__averaged__be1_25a_synchronizer_confine_phase__out = _grid_forming_inverter__averaged__be1_25a_synchronizer_confine_phase__in + 6.283185307179586;
        else _grid_forming_inverter__averaged__be1_25a_synchronizer_confine_phase__out = _grid_forming_inverter__averaged__be1_25a_synchronizer_confine_phase__in;
    }
    // Generated from the component: Grid forming inverter (averaged).Controller.Frequency droop.Sum4
    _grid_forming_inverter__averaged__controller_frequency_droop_sum4__out = _grid_forming_inverter__averaged__controller_frequency_droop_gain3__out + _grid_forming_inverter__averaged__controller_frequency_droop_signal_switch2__out;
    // Generated from the component: Grid forming inverter (averaged).BE1-25A Synchronizer.Abs2
    _grid_forming_inverter__averaged__be1_25a_synchronizer_abs2__out = fabs(_grid_forming_inverter__averaged__be1_25a_synchronizer_sum3__out);
    // Generated from the component: Grid forming inverter (averaged).BE1-25A Synchronizer.BE1-25A Synchronizer1
    _grid_forming_inverter__averaged__be1_25a_synchronizer_be1_25a_synchronizer1__dV = _grid_forming_inverter__averaged__be1_25a_synchronizer_sum3__out;
    if (_grid_forming_inverter__averaged__be1_25a_synchronizer_be1_25a_synchronizer1__dV > 0.005) {
        _grid_forming_inverter__averaged__be1_25a_synchronizer_be1_25a_synchronizer1__del_V = 0.01;
    }
    else if ((_grid_forming_inverter__averaged__be1_25a_synchronizer_be1_25a_synchronizer1__dV <= 0.005) && (_grid_forming_inverter__averaged__be1_25a_synchronizer_be1_25a_synchronizer1__dV > 0)) {
        _grid_forming_inverter__averaged__be1_25a_synchronizer_be1_25a_synchronizer1__del_V = 0.01 * _grid_forming_inverter__averaged__be1_25a_synchronizer_be1_25a_synchronizer1__dV / 0.005;
    }
    else if ((_grid_forming_inverter__averaged__be1_25a_synchronizer_be1_25a_synchronizer1__dV <= 0) && (_grid_forming_inverter__averaged__be1_25a_synchronizer_be1_25a_synchronizer1__dV > -1 * (0.005 - 0.0025))) {
        _grid_forming_inverter__averaged__be1_25a_synchronizer_be1_25a_synchronizer1__del_V = 0;
    }
    else if ((_grid_forming_inverter__averaged__be1_25a_synchronizer_be1_25a_synchronizer1__dV <= (-1 * (0.005 - 0.0025))) && (_grid_forming_inverter__averaged__be1_25a_synchronizer_be1_25a_synchronizer1__dV > (-1 * 0.005))) {
        _grid_forming_inverter__averaged__be1_25a_synchronizer_be1_25a_synchronizer1__del_V = 0.01 * (_grid_forming_inverter__averaged__be1_25a_synchronizer_be1_25a_synchronizer1__dV + (0.005 - 0.0025)) / 0.0025;
    }
    else if (_grid_forming_inverter__averaged__be1_25a_synchronizer_be1_25a_synchronizer1__dV <= (-1 * 0.005)) {
        _grid_forming_inverter__averaged__be1_25a_synchronizer_be1_25a_synchronizer1__del_V = -1 * 0.01;
    }
    // Generated from the component: Grid forming inverter (averaged).BE1-25A Synchronizer.volt_diff3
    HIL_OutAO(0x400d, (float)_grid_forming_inverter__averaged__be1_25a_synchronizer_sum3__out);
    // Generated from the component: Grid forming inverter (averaged).Controller.Voltage droop.Signal switch1
    _grid_forming_inverter__averaged__controller_voltage_droop_signal_switch1__out = (_grid_forming_inverter__averaged__inv_sync__out != 1.0) ? _grid_forming_inverter__averaged__controller_voltage_droop_constant2__out : _grid_forming_inverter__averaged__controller_voltage_droop_sum5__out;
    // Generated from the component: Grid forming inverter (averaged).Controller.Outer Voltage Loop + Inner Current Loop.Outer voltage control loop.EQ_error
    HIL_OutAO(0x4019, (float)_grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_sum11__out);
    // Generated from the component: Grid forming inverter (averaged).Controller.Outer Voltage Loop + Inner Current Loop.Outer voltage control loop.PID controller4
    _grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_pid_controller4__pi_reg_out_int = _grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_pid_controller4__integrator_state + 0.3 * _grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_sum11__out;
    if (_grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_pid_controller4__pi_reg_out_int < -0.35) {
        _grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_pid_controller4__out = -0.35;
        _grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_pid_controller4__av_active = 1;
    } else if (_grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_pid_controller4__pi_reg_out_int > 0.35) {
        _grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_pid_controller4__out = 0.35;
        _grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_pid_controller4__av_active = 1;
    } else {
        _grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_pid_controller4__out = _grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_pid_controller4__pi_reg_out_int;
        _grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_pid_controller4__av_active = 0;
    }
    // Generated from the component: Grid forming inverter (averaged).BE1-25A Synchronizer.Abs4
    _grid_forming_inverter__averaged__be1_25a_synchronizer_abs4__out = fabs(_grid_forming_inverter__averaged__be1_25a_synchronizer_confine_phase__out);
    // Generated from the component: Grid forming inverter (averaged).BE1-25A Synchronizer.angle_diff3
    HIL_OutAO(0x4009, (float)_grid_forming_inverter__averaged__be1_25a_synchronizer_confine_phase__out);
    // Generated from the component: Grid forming inverter (averaged).BE1-25A Synchronizer.Gain4
    _grid_forming_inverter__averaged__be1_25a_synchronizer_gain4__out = 0.0026525823848649226 * _grid_forming_inverter__averaged__controller_frequency_droop_sum4__out;
    // Generated from the component: Grid forming inverter (averaged).Controller.Gain1
    _grid_forming_inverter__averaged__controller_gain1__out = 0.15915494309189535 * _grid_forming_inverter__averaged__controller_frequency_droop_sum4__out;
    // Generated from the component: Grid forming inverter (averaged).Controller.Outer Voltage Loop + Inner Current Loop.Outer voltage control loop.Gain7
    _grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_gain7__out = 0.0026525823848649226 * _grid_forming_inverter__averaged__controller_frequency_droop_sum4__out;
    // Generated from the component: Grid forming inverter (averaged).Controller.Outer Voltage Loop + Inner Current Loop.Outer voltage control loop.Gain8
    _grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_gain8__out = 0.0026525823848649226 * _grid_forming_inverter__averaged__controller_frequency_droop_sum4__out;
    // Generated from the component: Grid forming inverter (averaged).Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Gain8
    _grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_gain8__out = 0.0026525823848649226 * _grid_forming_inverter__averaged__controller_frequency_droop_sum4__out;
    // Generated from the component: Grid forming inverter (averaged).Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Gain9
    _grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_gain9__out = 0.0026525823848649226 * _grid_forming_inverter__averaged__controller_frequency_droop_sum4__out;
    // Generated from the component: Grid forming inverter (averaged).BE1-25A Synchronizer.Relational operator4
    _grid_forming_inverter__averaged__be1_25a_synchronizer_relational_operator4__out = (_grid_forming_inverter__averaged__be1_25a_synchronizer_abs2__out < _grid_forming_inverter__averaged__be1_25a_synchronizer_constant9__out) ? 1 : 0;
    // Generated from the component: Grid forming inverter (averaged).BE1-25A Synchronizer.Hold after connect3
    _grid_forming_inverter__averaged__be1_25a_synchronizer_hold_after_connect3__INV_sync = _grid_forming_inverter__averaged__inv_sync__out;
    _grid_forming_inverter__averaged__be1_25a_synchronizer_hold_after_connect3__connect = _grid_forming_inverter__averaged__be1_25a_synchronizer_unit_delay5__out;
    _grid_forming_inverter__averaged__be1_25a_synchronizer_hold_after_connect3__in = _grid_forming_inverter__averaged__be1_25a_synchronizer_be1_25a_synchronizer1__del_V;
    _grid_forming_inverter__averaged__be1_25a_synchronizer_hold_after_connect3__out = _grid_forming_inverter__averaged__be1_25a_synchronizer_hold_after_connect3__var;
    // Generated from the component: Grid forming inverter (averaged).Controller.Voltage droop.Signal switch2
    _grid_forming_inverter__averaged__controller_voltage_droop_signal_switch2__out = (_grid_forming_inverter__averaged__be1_25a_synchronizer_unit_delay5__out != 1.0) ? _grid_forming_inverter__averaged__controller_voltage_droop_signal_switch1__out : _grid_forming_inverter__averaged__controller_voltage_droop_constant4__out;
    // Generated from the component: Grid forming inverter (averaged).Controller.Outer Voltage Loop + Inner Current Loop.Outer voltage control loop.EQ_ctrl
    HIL_OutAO(0x4018, (float)_grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_pid_controller4__out);
    // Generated from the component: Grid forming inverter (averaged).BE1-25A Synchronizer.Relational operator1
    _grid_forming_inverter__averaged__be1_25a_synchronizer_relational_operator1__out = (_grid_forming_inverter__averaged__be1_25a_synchronizer_constant6__out > _grid_forming_inverter__averaged__be1_25a_synchronizer_abs4__out) ? 1 : 0;
    // Generated from the component: Grid forming inverter (averaged).BE1-25A Synchronizer.Sum2
    _grid_forming_inverter__averaged__be1_25a_synchronizer_sum2__out =  - _grid_forming_inverter__averaged__be1_25a_synchronizer_gain4__out + _grid_forming_inverter__averaged__be1_25a_synchronizer_gain3__out;
    // Generated from the component: Grid forming inverter (averaged).BE1-25A Synchronizer.w_G
    HIL_OutAO(0x400e, (float)_grid_forming_inverter__averaged__be1_25a_synchronizer_gain4__out);
    // Generated from the component: Grid forming inverter (averaged).Controller.f1
    HIL_OutAO(0x4023, (float)_grid_forming_inverter__averaged__controller_gain1__out);
    // Generated from the component: Grid forming inverter (averaged).Controller.Outer Voltage Loop + Inner Current Loop.Outer voltage control loop.Product6
    _grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_product6__out = (_grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_gain7__out * _grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_gain4__out);
    // Generated from the component: Grid forming inverter (averaged).Controller.Outer Voltage Loop + Inner Current Loop.Outer voltage control loop.Product8
    _grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_product8__out = (_grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_gain8__out * _grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_gain6__out);
    // Generated from the component: Grid forming inverter (averaged).Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Product1
    _grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_product1__out = (_grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_gain8__out * _grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_gain6__out);
    // Generated from the component: Grid forming inverter (averaged).Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Product2
    _grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_product2__out = (_grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_gain9__out * _grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_gain7__out);
    // Generated from the component: Grid forming inverter (averaged).BE1-25A Synchronizer.Digital Probe5
    HIL_OutInt32(0xf00403, _grid_forming_inverter__averaged__be1_25a_synchronizer_relational_operator4__out != 0x0);
    // Generated from the component: Grid forming inverter (averaged).Controller.Voltage droop.Sum4
    _grid_forming_inverter__averaged__controller_voltage_droop_sum4__out = _grid_forming_inverter__averaged__controller_voltage_droop_gain3__out + _grid_forming_inverter__averaged__controller_voltage_droop_signal_switch2__out;
    // Generated from the component: Grid forming inverter (averaged).BE1-25A Synchronizer.Digital Probe3
    HIL_OutInt32(0xf00401, _grid_forming_inverter__averaged__be1_25a_synchronizer_relational_operator1__out != 0x0);
    // Generated from the component: Grid forming inverter (averaged).BE1-25A Synchronizer.Abs5
    _grid_forming_inverter__averaged__be1_25a_synchronizer_abs5__out = fabs(_grid_forming_inverter__averaged__be1_25a_synchronizer_sum2__out);
    // Generated from the component: Grid forming inverter (averaged).BE1-25A Synchronizer.BE1-25A Synchronizer
    _grid_forming_inverter__averaged__be1_25a_synchronizer_be1_25a_synchronizer__angle_slip = _grid_forming_inverter__averaged__be1_25a_synchronizer_abs4__out;
    _grid_forming_inverter__averaged__be1_25a_synchronizer_be1_25a_synchronizer__df = _grid_forming_inverter__averaged__be1_25a_synchronizer_sum2__out;
    if (_grid_forming_inverter__averaged__be1_25a_synchronizer_be1_25a_synchronizer__df > 0.01) {
        _grid_forming_inverter__averaged__be1_25a_synchronizer_be1_25a_synchronizer__del_w = 1.125 * 0.5;
    }
    else if ((_grid_forming_inverter__averaged__be1_25a_synchronizer_be1_25a_synchronizer__df <= 0.01) && (_grid_forming_inverter__averaged__be1_25a_synchronizer_be1_25a_synchronizer__df > 0)) {
        _grid_forming_inverter__averaged__be1_25a_synchronizer_be1_25a_synchronizer__del_w = 0.5 * _grid_forming_inverter__averaged__be1_25a_synchronizer_be1_25a_synchronizer__df / 0.01 + (0.125 * 0.5);
    }
    else if ((_grid_forming_inverter__averaged__be1_25a_synchronizer_be1_25a_synchronizer__df <= 0) && (_grid_forming_inverter__averaged__be1_25a_synchronizer_be1_25a_synchronizer__df > (-0.005))) {
        _grid_forming_inverter__averaged__be1_25a_synchronizer_be1_25a_synchronizer__del_w = (0.125 * 0.5) * (_grid_forming_inverter__averaged__be1_25a_synchronizer_be1_25a_synchronizer__df) / 0.005 + (0.125 * 0.5);
    }
    else if ((_grid_forming_inverter__averaged__be1_25a_synchronizer_be1_25a_synchronizer__df <= (-1 * 0.005)) && (_grid_forming_inverter__averaged__be1_25a_synchronizer_be1_25a_synchronizer__df > (-1 * 0.01))) {
        _grid_forming_inverter__averaged__be1_25a_synchronizer_be1_25a_synchronizer__del_w = 0;
    }
    else if (_grid_forming_inverter__averaged__be1_25a_synchronizer_be1_25a_synchronizer__df <= (-1 * 0.01)) {
        _grid_forming_inverter__averaged__be1_25a_synchronizer_be1_25a_synchronizer__del_w = (0.01 + _grid_forming_inverter__averaged__be1_25a_synchronizer_be1_25a_synchronizer__df) * 0.5 / 0.01;
    }
    // Generated from the component: Grid forming inverter (averaged).BE1-25A Synchronizer.frequency_diff3
    HIL_OutAO(0x400c, (float)_grid_forming_inverter__averaged__be1_25a_synchronizer_sum2__out);
    // Generated from the component: Grid forming inverter (averaged).Controller.Outer Voltage Loop + Inner Current Loop.Outer voltage control loop.Sum10
    _grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_sum10__out = _grid_forming_inverter__averaged__controller_gain11__out - _grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_product6__out;
    // Generated from the component: Grid forming inverter (averaged).Controller.Outer Voltage Loop + Inner Current Loop.Outer voltage control loop.Sum13
    _grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_sum13__out = _grid_forming_inverter__averaged__controller_gain12__out + _grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_product8__out;
    // Generated from the component: Grid forming inverter (averaged).Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Sum5
    _grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum5__out = _grid_forming_inverter__averaged__controller_gain5__out - _grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_product1__out;
    // Generated from the component: Grid forming inverter (averaged).Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Sum6
    _grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum6__out = _grid_forming_inverter__averaged__controller_gain8__out + _grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_product2__out;
    // Generated from the component: Grid forming inverter (averaged).Controller.E_dREF1
    HIL_OutAO(0x4013, (float)_grid_forming_inverter__averaged__controller_voltage_droop_sum4__out);
    // Generated from the component: Grid forming inverter (averaged).Controller.Outer Voltage Loop + Inner Current Loop.Sum7
    _grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_sum7__out = _grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_gain3__out + _grid_forming_inverter__averaged__controller_voltage_droop_sum4__out;
    // Generated from the component: Grid forming inverter (averaged).Controller.Voltage droop.E_1
    HIL_OutAO(0x4022, (float)_grid_forming_inverter__averaged__controller_voltage_droop_sum4__out);
    // Generated from the component: Grid forming inverter (averaged).BE1-25A Synchronizer.Relational operator2
    _grid_forming_inverter__averaged__be1_25a_synchronizer_relational_operator2__out = (_grid_forming_inverter__averaged__be1_25a_synchronizer_constant7__out > _grid_forming_inverter__averaged__be1_25a_synchronizer_abs5__out) ? 1 : 0;
    // Generated from the component: Grid forming inverter (averaged).BE1-25A Synchronizer.Hold after connect2
    _grid_forming_inverter__averaged__be1_25a_synchronizer_hold_after_connect2__INV_sync = _grid_forming_inverter__averaged__inv_sync__out;
    _grid_forming_inverter__averaged__be1_25a_synchronizer_hold_after_connect2__connect = _grid_forming_inverter__averaged__be1_25a_synchronizer_unit_delay5__out;
    _grid_forming_inverter__averaged__be1_25a_synchronizer_hold_after_connect2__in = _grid_forming_inverter__averaged__be1_25a_synchronizer_be1_25a_synchronizer__del_w;
    _grid_forming_inverter__averaged__be1_25a_synchronizer_hold_after_connect2__out = _grid_forming_inverter__averaged__be1_25a_synchronizer_hold_after_connect2__var;
    // Generated from the component: Grid forming inverter (averaged).Controller.Outer Voltage Loop + Inner Current Loop.Outer voltage control loop.Product5
    _grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_product5__out = (_grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_sum10__out) * 1.0 / (_grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_gain5__out);
    // Generated from the component: Grid forming inverter (averaged).Controller.Outer Voltage Loop + Inner Current Loop.Outer voltage control loop.Product7
    _grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_product7__out = (_grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_sum13__out) * 1.0 / (_grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_gain5__out);
    // Generated from the component: Grid forming inverter (averaged).Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Product3
    _grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_product3__out = (_grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum5__out) * 1.0 / (_grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_gain5__out);
    // Generated from the component: Grid forming inverter (averaged).Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Product4
    _grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_product4__out = (_grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum6__out) * 1.0 / (_grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_gain5__out);
    // Generated from the component: Grid forming inverter (averaged).Controller.Outer Voltage Loop + Inner Current Loop.Outer voltage control loop.Sum8
    _grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_sum8__out = _grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_sum7__out - _grid_forming_inverter__averaged__controller_gain9__out;
    // Generated from the component: Grid forming inverter (averaged).BE1-25A Synchronizer.Digital Probe4
    HIL_OutInt32(0xf00402, _grid_forming_inverter__averaged__be1_25a_synchronizer_relational_operator2__out != 0x0);
    // Generated from the component: Grid forming inverter (averaged).BE1-25A Synchronizer.Logical operator1
    _grid_forming_inverter__averaged__be1_25a_synchronizer_logical_operator1__out = _grid_forming_inverter__averaged__be1_25a_synchronizer_relational_operator1__out && _grid_forming_inverter__averaged__be1_25a_synchronizer_relational_operator2__out && _grid_forming_inverter__averaged__be1_25a_synchronizer_relational_operator4__out ;
    // Generated from the component: Grid forming inverter (averaged).Controller.Outer Voltage Loop + Inner Current Loop.Outer voltage control loop.Sum12
    _grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_sum12__out = _grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_pid_controller4__out + _grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_product7__out;
    // Generated from the component: Grid forming inverter (averaged).Controller.Outer Voltage Loop + Inner Current Loop.Outer voltage control loop.ED_error
    HIL_OutAO(0x4017, (float)_grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_sum8__out);
    // Generated from the component: Grid forming inverter (averaged).Controller.Outer Voltage Loop + Inner Current Loop.Outer voltage control loop.PID controller3
    _grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_pid_controller3__pi_reg_out_int = _grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_pid_controller3__integrator_state + 0.3 * _grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_sum8__out;
    if (_grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_pid_controller3__pi_reg_out_int < -0.35) {
        _grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_pid_controller3__out = -0.35;
        _grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_pid_controller3__av_active = 1;
    } else if (_grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_pid_controller3__pi_reg_out_int > 0.35) {
        _grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_pid_controller3__out = 0.35;
        _grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_pid_controller3__av_active = 1;
    } else {
        _grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_pid_controller3__out = _grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_pid_controller3__pi_reg_out_int;
        _grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_pid_controller3__av_active = 0;
    }
    // Generated from the component: Grid forming inverter (averaged).BE1-25A Synchronizer.stay connected1
    _grid_forming_inverter__averaged__be1_25a_synchronizer_stay_connected1__connectINV = _grid_forming_inverter__averaged__be1_25a_synchronizer_connect_inv__out;
    _grid_forming_inverter__averaged__be1_25a_synchronizer_stay_connected1__ready = _grid_forming_inverter__averaged__be1_25a_synchronizer_logical_operator1__out;
    _grid_forming_inverter__averaged__be1_25a_synchronizer_stay_connected1__out = _grid_forming_inverter__averaged__be1_25a_synchronizer_stay_connected1__connect;
    // Generated from the component: Grid forming inverter (averaged).Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Sum9
    _grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum9__out = _grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_sum12__out - _grid_forming_inverter__averaged__controller_gain7__out;
    // Generated from the component: Grid forming inverter (averaged).Controller.Outer Voltage Loop + Inner Current Loop.Outer voltage control loop.ED_ctrl
    HIL_OutAO(0x4016, (float)_grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_pid_controller3__out);
    // Generated from the component: Grid forming inverter (averaged).Controller.Outer Voltage Loop + Inner Current Loop.Outer voltage control loop.Sum9
    _grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_sum9__out = _grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_pid_controller3__out + _grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_product5__out;
    // Generated from the component: Grid forming inverter (averaged).Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.PID controller2
    _grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__pi_reg_out_int = _grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__integrator_state + 0.1 * _grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum9__out;
    if (_grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__pi_reg_out_int < -1.0) {
        _grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__out = -1.0;
        _grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__av_active = 1;
    } else if (_grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__pi_reg_out_int > 1.0) {
        _grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__out = 1.0;
        _grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__av_active = 1;
    } else {
        _grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__out = _grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__pi_reg_out_int;
        _grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__av_active = 0;
    }
    // Generated from the component: Grid forming inverter (averaged).Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.XiQ_error
    HIL_OutAO(0x401d, (float)_grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum9__out);
    // Generated from the component: Grid forming inverter (averaged).Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Sum8
    _grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum8__out = _grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_sum9__out - _grid_forming_inverter__averaged__controller_gain6__out;
    // Generated from the component: Grid forming inverter (averaged).Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Sum7
    _grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum7__out = _grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__out + _grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_product4__out;
    // Generated from the component: Grid forming inverter (averaged).Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.XiQ_ctrl
    HIL_OutAO(0x401c, (float)_grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__out);
    // Generated from the component: Grid forming inverter (averaged).Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.PID controller1
    _grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__pi_reg_out_int = _grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__integrator_state + 0.1 * _grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum8__out;
    if (_grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__pi_reg_out_int < -1.0) {
        _grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__out = -1.0;
        _grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__av_active = 1;
    } else if (_grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__pi_reg_out_int > 1.0) {
        _grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__out = 1.0;
        _grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__av_active = 1;
    } else {
        _grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__out = _grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__pi_reg_out_int;
        _grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__av_active = 0;
    }
    // Generated from the component: Grid forming inverter (averaged).Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.XiD_error
    HIL_OutAO(0x401b, (float)_grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum8__out);
    // Generated from the component: Grid forming inverter (averaged).Controller.Outer Voltage Loop + Inner Current Loop.Gain6
    _grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_gain6__out = 226.16955291698014 * _grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum7__out;
    // Generated from the component: Grid forming inverter (averaged).Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Sum3
    _grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum3__out = _grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__out + _grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_product3__out;
    // Generated from the component: Grid forming inverter (averaged).Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.XiD_ctrl
    HIL_OutAO(0x401a, (float)_grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__out);
    // Generated from the component: Grid forming inverter (averaged).Controller.Outer Voltage Loop + Inner Current Loop.Gain5
    _grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_gain5__out = 226.16955291698014 * _grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum3__out;
    // Generated from the component: Grid forming inverter (averaged).Controller.Outer Voltage Loop + Inner Current Loop.dq to abc.dq to abc1.dq to alpha beta
    _grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_dq_to_abc_dq_to_abc1_dq_to_alpha_beta__k1 = cos(_grid_forming_inverter__averaged__controller_integrator1__out);
    _grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_dq_to_abc_dq_to_abc1_dq_to_alpha_beta__k2 = sin(_grid_forming_inverter__averaged__controller_integrator1__out);
    _grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_dq_to_abc_dq_to_abc1_dq_to_alpha_beta__alpha = _grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_dq_to_abc_dq_to_abc1_dq_to_alpha_beta__k2 * _grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_gain5__out + _grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_dq_to_abc_dq_to_abc1_dq_to_alpha_beta__k1 * _grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_gain6__out;
    _grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_dq_to_abc_dq_to_abc1_dq_to_alpha_beta__beta = _grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_dq_to_abc_dq_to_abc1_dq_to_alpha_beta__k2 * _grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_gain6__out - _grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_dq_to_abc_dq_to_abc1_dq_to_alpha_beta__k1 * _grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_gain5__out;
    // Generated from the component: Grid forming inverter (averaged).Controller.Outer Voltage Loop + Inner Current Loop.dq to abc.dq to abc1.alpha beta to abc
    _grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_dq_to_abc_dq_to_abc1_alpha_beta_to_abc__A = 1 * _grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_dq_to_abc_o_ref__out;
    _grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_dq_to_abc_dq_to_abc1_alpha_beta_to_abc__B = _grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_dq_to_abc_dq_to_abc1_alpha_beta_to_abc__A - 0.5 * _grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_dq_to_abc_dq_to_abc1_dq_to_alpha_beta__alpha;
    _grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_dq_to_abc_dq_to_abc1_alpha_beta_to_abc__C = _grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_dq_to_abc_dq_to_abc1_alpha_beta_to_abc__B - 0.8660254037844386 * _grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_dq_to_abc_dq_to_abc1_dq_to_alpha_beta__beta;
    _grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_dq_to_abc_dq_to_abc1_alpha_beta_to_abc__B += 0.8660254037844386 * _grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_dq_to_abc_dq_to_abc1_dq_to_alpha_beta__beta;
    _grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_dq_to_abc_dq_to_abc1_alpha_beta_to_abc__A += 1 * _grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_dq_to_abc_dq_to_abc1_dq_to_alpha_beta__alpha;
    // Generated from the component: Grid forming inverter (averaged).Controller.Bus Join1
    _grid_forming_inverter__averaged__controller_bus_join1__out[0] = _grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_dq_to_abc_dq_to_abc1_alpha_beta_to_abc__A;
    _grid_forming_inverter__averaged__controller_bus_join1__out[1] = _grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_dq_to_abc_dq_to_abc1_alpha_beta_to_abc__B;
    _grid_forming_inverter__averaged__controller_bus_join1__out[2] = _grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_dq_to_abc_dq_to_abc1_alpha_beta_to_abc__C;
    // Generated from the component: Grid forming inverter (averaged).Product1
    _grid_forming_inverter__averaged__product1__out[0] = (_grid_forming_inverter__averaged__controller_bus_join1__out[0]) * (_grid_forming_inverter__averaged__gain1__out);
    _grid_forming_inverter__averaged__product1__out[1] = (_grid_forming_inverter__averaged__controller_bus_join1__out[1]) * (_grid_forming_inverter__averaged__gain1__out);
    _grid_forming_inverter__averaged__product1__out[2] = (_grid_forming_inverter__averaged__controller_bus_join1__out[2]) * (_grid_forming_inverter__averaged__gain1__out);
    // Generated from the component: Grid forming inverter (averaged).Bus Split1
    _grid_forming_inverter__averaged__bus_split1__out = _grid_forming_inverter__averaged__product1__out[0];
    _grid_forming_inverter__averaged__bus_split1__out1 = _grid_forming_inverter__averaged__product1__out[1];
    _grid_forming_inverter__averaged__bus_split1__out2 = _grid_forming_inverter__averaged__product1__out[2];
    // Generated from the component: Grid forming inverter (averaged).Va_inv.Vs1
    HIL_OutFloat(141295616, (float) _grid_forming_inverter__averaged__bus_split1__out);
    // Generated from the component: Grid forming inverter (averaged).Vb_inv.Vs1
    HIL_OutFloat(141295617, (float) _grid_forming_inverter__averaged__bus_split1__out1);
    // Generated from the component: Grid forming inverter (averaged).Vc_inv.Vs1
    HIL_OutFloat(141295618, (float) _grid_forming_inverter__averaged__bus_split1__out2);
    //@cmp.out.block.end
    //////////////////////////////////////////////////////////////////////////
    // Update block
    //////////////////////////////////////////////////////////////////////////
    //@cmp.update.block.start
    // Generated from the component: Grid forming inverter (averaged).BE1-25A Synchronizer.Unit Delay2
    _grid_forming_inverter__averaged__be1_25a_synchronizer_unit_delay2__state = _grid_forming_inverter__averaged__be1_25a_synchronizer_pll_confine_phase__out;
    // Generated from the component: Grid forming inverter (averaged).BE1-25A Synchronizer.Unit Delay3
    _grid_forming_inverter__averaged__be1_25a_synchronizer_unit_delay3__state = _grid_forming_inverter__averaged__be1_25a_synchronizer_hold_after_connect2__out;
    // Generated from the component: Grid forming inverter (averaged).BE1-25A Synchronizer.Unit Delay4
    _grid_forming_inverter__averaged__be1_25a_synchronizer_unit_delay4__state = _grid_forming_inverter__averaged__be1_25a_synchronizer_hold_after_connect3__out;
    // Generated from the component: Grid forming inverter (averaged).BE1-25A Synchronizer.Unit Delay5
    _grid_forming_inverter__averaged__be1_25a_synchronizer_unit_delay5__state = _grid_forming_inverter__averaged__be1_25a_synchronizer_stay_connected1__out;
    // Generated from the component: Grid forming inverter (averaged).Controller.Integrator1
    _grid_forming_inverter__averaged__controller_integrator1__state += _grid_forming_inverter__averaged__controller_frequency_droop_sum4__out * 2e-05;
    // Generated from the component: Grid forming inverter (averaged).Controller.Integrator2
    _grid_forming_inverter__averaged__controller_integrator2__state += _grid_forming_inverter__averaged__controller_gain4__out * 2e-05;
    // Generated from the component: Grid forming inverter (averaged).Controller.Integrator3
    _grid_forming_inverter__averaged__controller_integrator3__state += _grid_forming_inverter__averaged__controller_gain13__out * 2e-05;
    // Generated from the component: Sinusoidal Source1
    _sinusoidal_source1__current_phase += 60.0 * 2e-05;
    if (_sinusoidal_source1__current_phase >= 1.0f) {
        _sinusoidal_source1__current_phase -= 1.0f;
    }
    // Generated from the component: Sinusoidal Source2
    _sinusoidal_source2__current_phase += 60.0 * 2e-05;
    if (_sinusoidal_source2__current_phase >= 1.0f) {
        _sinusoidal_source2__current_phase -= 1.0f;
    }
    // Generated from the component: Sinusoidal Source3
    _sinusoidal_source3__current_phase += 60.0 * 2e-05;
    if (_sinusoidal_source3__current_phase >= 1.0f) {
        _sinusoidal_source3__current_phase -= 1.0f;
    }
    // Generated from the component: Grid forming inverter (averaged).Controller.Outer Voltage Loop + Inner Current Loop.Outer voltage control loop.Comparator1
    if (_grid_forming_inverter__averaged__constant1__out < _grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_limit_zero__out) {
        _grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_comparator1__state = 0;
    } else if (_grid_forming_inverter__averaged__constant1__out > _grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_limit_zero__out) {
        _grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_comparator1__state = 1;
    }
    // Generated from the component: Grid forming inverter (averaged).Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Comparator1
    if (_grid_forming_inverter__averaged__constant1__out < _grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_limit_zero__out) {
        _grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_comparator1__state = 0;
    } else if (_grid_forming_inverter__averaged__constant1__out > _grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_limit_zero__out) {
        _grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_comparator1__state = 1;
    }
    // Generated from the component: Grid forming inverter (averaged).BE1-25A Synchronizer.PLL.PID controller1
    if (!_grid_forming_inverter__averaged__be1_25a_synchronizer_pll_pid_controller1__av_active) {
        _grid_forming_inverter__averaged__be1_25a_synchronizer_pll_pid_controller1__integrator_state += 2.0 * _grid_forming_inverter__averaged__be1_25a_synchronizer_gain6__out * 2e-05;
    }
    // Generated from the component: Grid forming inverter (averaged).BE1-25A Synchronizer.PLL.C function1
    _grid_forming_inverter__averaged__be1_25a_synchronizer_pll_c_function1__var += (2e-05 * _grid_forming_inverter__averaged__be1_25a_synchronizer_pll_c_function1__in);
    // Generated from the component: Grid forming inverter (averaged).BE1-25A Synchronizer.confine phase1
    // Generated from the component: Grid forming inverter (averaged).BE1-25A Synchronizer.confine phase2
    // Generated from the component: Grid forming inverter (averaged).BE1-25A Synchronizer.PLL.confine phase
    // Generated from the component: Grid forming inverter (averaged).BE1-25A Synchronizer.confine phase
    // Generated from the component: Grid forming inverter (averaged).BE1-25A Synchronizer.BE1-25A Synchronizer1
    // Generated from the component: Grid forming inverter (averaged).Controller.Outer Voltage Loop + Inner Current Loop.Outer voltage control loop.PID controller4
    if (!_grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_pid_controller4__av_active) {
        _grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_pid_controller4__integrator_state += 2.0 * _grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_sum11__out * 2e-05;
    }
    // Generated from the component: Grid forming inverter (averaged).BE1-25A Synchronizer.Hold after connect3
    if ((_grid_forming_inverter__averaged__be1_25a_synchronizer_hold_after_connect3__connect == 0) && (_grid_forming_inverter__averaged__be1_25a_synchronizer_hold_after_connect3__INV_sync == 1))_grid_forming_inverter__averaged__be1_25a_synchronizer_hold_after_connect3__var = _grid_forming_inverter__averaged__be1_25a_synchronizer_hold_after_connect3__in;
    else if (_grid_forming_inverter__averaged__be1_25a_synchronizer_hold_after_connect3__connect == 1)_grid_forming_inverter__averaged__be1_25a_synchronizer_hold_after_connect3__var = 0;
    // Generated from the component: Grid forming inverter (averaged).BE1-25A Synchronizer.BE1-25A Synchronizer
    // Generated from the component: Grid forming inverter (averaged).BE1-25A Synchronizer.Hold after connect2
    if ((_grid_forming_inverter__averaged__be1_25a_synchronizer_hold_after_connect2__connect == 0) && (_grid_forming_inverter__averaged__be1_25a_synchronizer_hold_after_connect2__INV_sync == 1))_grid_forming_inverter__averaged__be1_25a_synchronizer_hold_after_connect2__var = _grid_forming_inverter__averaged__be1_25a_synchronizer_hold_after_connect2__in;
    else if (_grid_forming_inverter__averaged__be1_25a_synchronizer_hold_after_connect2__connect == 1)_grid_forming_inverter__averaged__be1_25a_synchronizer_hold_after_connect2__var = 0;
    // Generated from the component: Grid forming inverter (averaged).Controller.Outer Voltage Loop + Inner Current Loop.Outer voltage control loop.PID controller3
    if (!_grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_pid_controller3__av_active) {
        _grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_pid_controller3__integrator_state += 2.0 * _grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_outer_voltage_control_loop_sum8__out * 2e-05;
    }
    // Generated from the component: Grid forming inverter (averaged).BE1-25A Synchronizer.stay connected1
    if ((_grid_forming_inverter__averaged__be1_25a_synchronizer_stay_connected1__ready == 1) && (_grid_forming_inverter__averaged__be1_25a_synchronizer_stay_connected1__connectINV == 1)) {
        _grid_forming_inverter__averaged__be1_25a_synchronizer_stay_connected1__connect = 1;
    }
    else if (_grid_forming_inverter__averaged__be1_25a_synchronizer_stay_connected1__connectINV == 0) {
        _grid_forming_inverter__averaged__be1_25a_synchronizer_stay_connected1__connect = 0;
    }
    // Generated from the component: Grid forming inverter (averaged).Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.PID controller2
    if (!_grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__av_active) {
        _grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__integrator_state += 0.02 * _grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum9__out * 2e-05;
    }
    // Generated from the component: Grid forming inverter (averaged).Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.PID controller1
    if (!_grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__av_active) {
        _grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__integrator_state += 0.02 * _grid_forming_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum8__out * 2e-05;
    }
    //@cmp.update.block.end
}
// ----------------------------------------------------------------------------------------  //-----------------------------------------------------------------------------------------