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


























































































































































































































































































































//@cmp.def.end


//-----------------------------------------------------------------------------------------
// generated using template: common_variables.template-------------------------------------
// true global variables


//@cmp.var.start
// variables
double _microturbine_be1_25a_synchronizer_constant6__out = 0.005;
double _microturbine_be1_25a_synchronizer_constant7__out = 0.001;
double _microturbine_be1_25a_synchronizer_constant9__out = 0.05;
double _microturbine_be1_25a_synchronizer_unit_delay2__out;
X_Int32 _microturbine_be1_25a_synchronizer_unit_delay5__out;
double _microturbine_be1_25a_synchronizer_abc_to_qd_constant2__out = 2.0943951023931953;
double _microturbine_be1_25a_synchronizer_abc_to_qd_constant3__out = 2.0943951023931953;
double _microturbine_be1_25a_synchronizer_abc_to_qd1_constant2__out = 2.0943951023931953;
double _microturbine_be1_25a_synchronizer_abc_to_qd1_constant3__out = 2.0943951023931953;
double _microturbine_cb_control_constant1__out = 1.0;
double _microturbine_cb_control_constant10__out = 0.05;
double _microturbine_cb_control_constant11__out = 0.001;
X_Int32 _microturbine_cb_control_grid_islanded__out;
double _microturbine_connect_mcb__out;
double _microturbine_connect_mt__out;
double _microturbine_constant1__out = 1.0;
double _microturbine_constant2__out = 1.0;
double _microturbine_ea1_va1__out;
double _microturbine_eb1_va1__out;
double _microturbine_ec1_va1__out;
double _microturbine_engine_integrator1__out;
double _microturbine_exciter_constant1__out = 0.0;
double _microturbine_governor_agc__out;
double _microturbine_governor_agc_offset__out = 18745.8;
double _microturbine_governor_exciter_activation_constant1__out = 0.008;
double _microturbine_governor_exciter_activation_constant2__out = 1.0;
double _microturbine_governor_integrator1__out;
double _microturbine_synchonous_machine_e_f_va1__out;
double _microturbine_synchonous_machine_e_qp_constant1__out = 1.930201397855058;
double _microturbine_synchonous_machine_e_qp_constant2__out = 0.24050623578038516;
double _microturbine_synchonous_machine_e_qp_constant3__out = 0.4199553748870971;
double _microturbine_synchonous_machine_e_qp_integrator1__out;
double _microturbine_synchonous_machine_ia1_ia1__out;
double _microturbine_synchonous_machine_ib1_ia1__out;
double _microturbine_synchonous_machine_ic1_ia1__out;
double _microturbine_synchonous_machine_phi_1d_a_constant1__out = 0.4199553748870971;
double _microturbine_synchonous_machine_phi_1d_a_integrator1__out;
double _microturbine_synchonous_machine_phi_2q_a_constant1__out = 1.7196607045831453;
double _microturbine_synchonous_machine_phi_2q_a_integrator1__out;
double _microturbine_synchonous_machine_phi_d_a_2_constant1__out = 0.8989981135901638;
double _microturbine_synchonous_machine_phi_d_a_2_constant2__out = 0.10100188640983622;
double _microturbine_synchonous_machine_phi_q_a_2_constant2__out = 0.8779625044216485;
double _microturbine_synchonous_machine_v_dg2_constant2__out = 376.99111843077515;
double _microturbine_synchonous_machine_v_dg2_constant3__out = 0.0;
double _microturbine_synchonous_machine_v_qg2_constant2__out = 376.99111843077515;
double _microturbine_synchonous_machine_v_qg2_constant3__out = 0.0;
double _microturbine_synchonous_machine_abc_to_qd_constant2__out = 2.0943951023931953;
double _microturbine_synchonous_machine_abc_to_qd_constant3__out = 2.0943951023931953;
double _microturbine_synchonous_machine_qd_to_abc_constant2__out = 2.0943951023931953;
double _microturbine_synchonous_machine_qd_to_abc_constant3__out = 2.0943951023931953;
double _microturbine_synchonous_machine_w_m_constant1__out = 0.00580671125220663;
double _microturbine_synchonous_machine_w_m_integrator1__out;
double _microturbine_three_phase_meter1_ia_ia1__out;
double _microturbine_three_phase_meter1_ib_ia1__out;
double _microturbine_three_phase_meter1_ic_ia1__out;
double _microturbine_three_phase_meter1_van_va1__out;
double _microturbine_three_phase_meter1_vbn_va1__out;
double _microturbine_three_phase_meter1_vcn_va1__out;
double _microturbine_three_phase_meter1_zero__out = 0.0;
double _microturbine_va_g1_va1__out;
double _microturbine_vb_g1_va1__out;
double _microturbine_vc_g1_va1__out;
double _microturbine_vref__out;
double _microturbine_wref__out;
double _sinusoidal_source1__out;
double _sinusoidal_source2__out;
double _sinusoidal_source3__out;
X_Int32 _grid_connect__out;
double _microturbine_be1_25a_synchronizer_abc_to_qd_trigonometric_function3__out;
double _microturbine_be1_25a_synchronizer_abc_to_qd_trigonometric_function5__out;
double _microturbine_be1_25a_synchronizer_abc_to_qd1_confine_phase__x;
double _microturbine_be1_25a_synchronizer_abc_to_qd1_confine_phase__floor_in;
double _microturbine_be1_25a_synchronizer_abc_to_qd1_confine_phase__in;


double _microturbine_be1_25a_synchronizer_abc_to_qd1_confine_phase__out;
float _microturbine_be1_25a_synchronizer_digital_probe1__tmp;
X_Int32 _microturbine_be1_25a_synchronizer_logical_operator2__out;
double _microturbine_be1_25a_synchronizer_abc_to_qd_sum2__out;
double _microturbine_be1_25a_synchronizer_abc_to_qd_sum4__out;
X_Int32 _microturbine_cb_control_logical_operator9__out;
double _microturbine_cb_control_logical_operator4__out;
float _microturbine_cb_control_mcb_on__tmp;
double _microturbine_cb_control_logical_operator2__out;
double _microturbine_engine_gain2__out;
double _microturbine_governor_sum11__out;
double _microturbine_engine_sum1__out;
double _microturbine_synchonous_machine_e_qp_gain2__out;
double _microturbine_synchonous_machine_phi_d_a_2_product1__out;
double _microturbine_synchonous_machine_phi_d_a_2_product2__out;
double _microturbine_synchonous_machine_phi_q_a_2_product2__out;
double _microturbine_synchonous_machine_w_m_gain16__out;
double _microturbine_gain1__out;
double _microturbine_synchonous_machine_w_m_gain1__out;
double _microturbine_synchonous_machine_gain1__out;
double _microturbine_synchonous_machine_gain17__out;
double _microturbine_three_phase_meter1_power_meter__Pdc;
double _microturbine_three_phase_meter1_power_meter__Qdc;
double _microturbine_three_phase_meter1_power_meter__P0dc;
double _microturbine_three_phase_meter1_power_meter__Pac;
double _microturbine_three_phase_meter1_power_meter__Qac;
double _microturbine_three_phase_meter1_power_meter__P0ac;
double _microturbine_three_phase_meter1_power_meter__apparent;
double _microturbine_three_phase_meter1_power_meter__k_factor;
double _microturbine_three_phase_meter1_power_meter__v_alpha;
double _microturbine_three_phase_meter1_power_meter__v_beta;
double _microturbine_three_phase_meter1_power_meter__i_alpha;
double _microturbine_three_phase_meter1_power_meter__i_beta;
double _microturbine_three_phase_meter1_power_meter__v_zero;
double _microturbine_three_phase_meter1_power_meter__i_zero;
double _microturbine_three_phase_meter1_power_meter__filter_1_output;
double _microturbine_three_phase_meter1_power_meter__filter_1_outputQ;
double _microturbine_three_phase_meter1_power_meter__filter_1_outputP0;
double _microturbine_three_phase_meter1_power_meter__filter_2_output;
double _microturbine_three_phase_meter1_power_meter__filter_2_outputQ;
double _microturbine_three_phase_meter1_power_meter__filter_2_outputP0;
double _microturbine_three_phase_meter1_extra_output_bus__out[12];
double _gain3__out;
double _gain5__out;
double _gain4__out;
X_Int32 _logical_operator1__out;
float _grid_connect_on__tmp;
double _microturbine_be1_25a_synchronizer_abc_to_qd_product1__out;
double _microturbine_be1_25a_synchronizer_abc_to_qd_product4__out;
double _microturbine_be1_25a_synchronizer_abc_to_qd1_sum2__out;
double _microturbine_be1_25a_synchronizer_abc_to_qd1_sum4__out;
double _microturbine_be1_25a_synchronizer_abc_to_qd1_trigonometric_function3__out;
double _microturbine_be1_25a_synchronizer_abc_to_qd1_trigonometric_function5__out;
float _microturbine_be1_25a_synchronizer_digital_probe6__tmp;
double _microturbine_be1_25a_synchronizer_abc_to_qd_trigonometric_function2__out;
double _microturbine_be1_25a_synchronizer_abc_to_qd_trigonometric_function6__out;
double _microturbine_be1_25a_synchronizer_abc_to_qd_trigonometric_function4__out;
double _microturbine_be1_25a_synchronizer_abc_to_qd_trigonometric_function7__out;
float _microturbine_cb_control_mcb_off__tmp;
double _microturbine_governor_gain37__out;
double _microturbine_engine_gain1__out;
double _microturbine_be1_25a_synchronizer_gain4__out;
double _microturbine_cb_control_gain13__out;
double _microturbine_gain18__out;
double _microturbine_synchonous_machine_w_m_product1__out;
double _microturbine_synchonous_machine_c_function1__var;
double _microturbine_synchonous_machine_c_function1__in;


double _microturbine_synchonous_machine_c_function1__out;
double _microturbine_synchonous_machine_v_dg2_product3__out;
double _microturbine_synchonous_machine_v_qg2_product3__out;
double _microturbine_three_phase_meter1_output_bus__out[30];
float _grid_connect_off__tmp;
double _microturbine_be1_25a_synchronizer_abc_to_qd1_trigonometric_function2__out;
double _microturbine_be1_25a_synchronizer_abc_to_qd1_trigonometric_function6__out;
double _microturbine_be1_25a_synchronizer_abc_to_qd1_trigonometric_function4__out;
double _microturbine_be1_25a_synchronizer_abc_to_qd1_trigonometric_function7__out;
double _microturbine_be1_25a_synchronizer_abc_to_qd1_product1__out;
double _microturbine_be1_25a_synchronizer_abc_to_qd1_product4__out;
double _microturbine_be1_25a_synchronizer_abc_to_qd_product2__out;
double _microturbine_be1_25a_synchronizer_abc_to_qd_product5__out;
double _microturbine_be1_25a_synchronizer_abc_to_qd_product3__out;
double _microturbine_be1_25a_synchronizer_abc_to_qd_product6__out;
double _microturbine_governor_sum2__out;
double _microturbine_cb_control_sum10__out;
double _microturbine_governor_gain28__out;
double _microturbine_synchonous_machine_abc_to_qd_confine_phase__x;
double _microturbine_synchonous_machine_abc_to_qd_confine_phase__floor_in;
double _microturbine_synchonous_machine_abc_to_qd_confine_phase__in;


double _microturbine_synchonous_machine_abc_to_qd_confine_phase__out;
double _microturbine_synchonous_machine_qd_to_abc_confine_phase__x;
double _microturbine_synchonous_machine_qd_to_abc_confine_phase__floor_in;
double _microturbine_synchonous_machine_qd_to_abc_confine_phase__in;


double _microturbine_synchonous_machine_qd_to_abc_confine_phase__out;
double _microturbine_be1_25a_synchronizer_abc_to_qd1_product2__out;
double _microturbine_be1_25a_synchronizer_abc_to_qd1_product5__out;
double _microturbine_be1_25a_synchronizer_abc_to_qd1_product3__out;
double _microturbine_be1_25a_synchronizer_abc_to_qd1_product6__out;
double _microturbine_be1_25a_synchronizer_abc_to_qd_sum3__out;
double _microturbine_be1_25a_synchronizer_abc_to_qd_sum5__out;
double _microturbine_governor_gain29__out;
double _microturbine_cb_control_abs7__out;
double _microturbine_governor_exciter_activation_sum1__out;
double _microturbine_synchonous_machine_abc_to_qd_sum2__out;
double _microturbine_synchonous_machine_abc_to_qd_sum4__out;
double _microturbine_synchonous_machine_abc_to_qd_trigonometric_function3__out;
double _microturbine_synchonous_machine_abc_to_qd_trigonometric_function5__out;
double _microturbine_synchonous_machine_qd_to_abc_sum2__out;
double _microturbine_synchonous_machine_qd_to_abc_sum4__out;
double _microturbine_synchonous_machine_qd_to_abc_trigonometric_function2__out;
double _microturbine_synchonous_machine_qd_to_abc_trigonometric_function3__out;
double _microturbine_be1_25a_synchronizer_abc_to_qd1_sum3__out;
double _microturbine_be1_25a_synchronizer_abc_to_qd1_sum5__out;
double _microturbine_be1_25a_synchronizer_abc_to_qd_gain1__out;
double _microturbine_be1_25a_synchronizer_abc_to_qd_gain2__out;
double _microturbine_cb_control_relational_operator6__out;
double _microturbine_governor_exciter_activation_abs1__out;
double _microturbine_synchonous_machine_abc_to_qd_trigonometric_function2__out;
double _microturbine_synchonous_machine_abc_to_qd_trigonometric_function6__out;
double _microturbine_synchonous_machine_abc_to_qd_trigonometric_function4__out;
double _microturbine_synchonous_machine_abc_to_qd_trigonometric_function7__out;
double _microturbine_synchonous_machine_abc_to_qd_product1__out;
double _microturbine_synchonous_machine_abc_to_qd_product4__out;
double _microturbine_synchonous_machine_qd_to_abc_trigonometric_function4__out;
double _microturbine_synchonous_machine_qd_to_abc_trigonometric_function5__out;
double _microturbine_synchonous_machine_qd_to_abc_trigonometric_function6__out;
double _microturbine_synchonous_machine_qd_to_abc_trigonometric_function7__out;
double _microturbine_be1_25a_synchronizer_abc_to_qd1_gain1__out;
double _microturbine_be1_25a_synchronizer_abc_to_qd1_gain2__out;
double _microturbine_be1_25a_synchronizer_gain5__out;
double _microturbine_be1_25a_synchronizer_gain6__out;
double _microturbine_governor_exciter_activation_comparator1__out;
double _microturbine_synchonous_machine_abc_to_qd_product2__out;
double _microturbine_synchonous_machine_abc_to_qd_product5__out;
double _microturbine_synchonous_machine_abc_to_qd_product3__out;
double _microturbine_synchonous_machine_abc_to_qd_product6__out;
double _microturbine_be1_25a_synchronizer_gain7__out;
double _microturbine_be1_25a_synchronizer_gain12__out;
double _microturbine_be1_25a_synchronizer_limit2__out;
double _microturbine_be1_25a_synchronizer_product3__out;
double _microturbine_be1_25a_synchronizer_pll_pid_controller1__out;
double _microturbine_be1_25a_synchronizer_pll_pid_controller1__pi_reg_out_int;
double _microturbine_be1_25a_synchronizer_product4__out;
double _microturbine_governor_exciter_activation_activate_exciter__boolean;


X_Int32 _microturbine_governor_exciter_activation_activate_exciter__Activate;
double _microturbine_synchonous_machine_abc_to_qd_sum3__out;
double _microturbine_synchonous_machine_abc_to_qd_sum5__out;
double _microturbine_be1_25a_synchronizer_limit1__out;
double _microturbine_be1_25a_synchronizer_magnitude_product6__out;
double _microturbine_be1_25a_synchronizer_magnitude_product5__out;
double _microturbine_be1_25a_synchronizer_trigonometric_function2__out;
double _microturbine_be1_25a_synchronizer_gain13__out;
double _microturbine_be1_25a_synchronizer_pll_c_function1__var;
double _microturbine_be1_25a_synchronizer_pll_c_function1__in;


double _microturbine_be1_25a_synchronizer_pll_c_function1__out;
double _microturbine_be1_25a_synchronizer_sum5__out;
double _microturbine_exciter_integrator1__out;
double _microturbine_exciter_integrator2__out;
double _microturbine_exciter_integrator3__out;
double _microturbine_exciter_integrator4__out;
X_Int32 _microturbine_exciter_logical_operator1__out;
double _microturbine_exciter_pi_integrator1__out;
float _microturbine_exciter_exciter_on__tmp;
double _microturbine_synchonous_machine_abc_to_qd_gain1__out;
double _microturbine_synchonous_machine_abc_to_qd_gain2__out;
double _microturbine_be1_25a_synchronizer_trigonometric_function1__out;
double _microturbine_be1_25a_synchronizer_magnitude_sum3__out;
double _microturbine_be1_25a_synchronizer_gain16__out;
double _microturbine_be1_25a_synchronizer_sum2__out;
double _microturbine_be1_25a_synchronizer_pll_confine_phase__x;
double _microturbine_be1_25a_synchronizer_pll_confine_phase__floor_in;
double _microturbine_be1_25a_synchronizer_pll_confine_phase__in;


double _microturbine_be1_25a_synchronizer_pll_confine_phase__out;
double _microturbine_be1_25a_synchronizer_mathematical_function2__out;
double _microturbine_exciter_gain2__out;
double _microturbine_exciter_gain3__out;
double _microturbine_exciter_gain5__out;
double _microturbine_exciter_pi_ki__out;
double _microturbine_exciter_pi_kp__out;
double _microturbine_exciter_gain7__out;
float _microturbine_exciter_exciter_off__tmp;
double _microturbine_synchonous_machine_gain10__out;
double _microturbine_synchonous_machine_gain11__out;
double _microturbine_be1_25a_synchronizer_gain17__out;
double _microturbine_be1_25a_synchronizer_sum1__out;
double _microturbine_be1_25a_synchronizer_magnitude_mathematical_function1__out;
double _microturbine_be1_25a_synchronizer_abs5__out;
double _microturbine_be1_25a_synchronizer_be1_25a_synchronizer2__df;


double _microturbine_be1_25a_synchronizer_be1_25a_synchronizer2__del_w;
double _microturbine_cb_control_hold_after_connect2__var;
double _microturbine_cb_control_hold_after_connect2__in1;
double _microturbine_cb_control_hold_after_connect2__in2;


X_Int32 _microturbine_cb_control_hold_after_connect2__out;
double _microturbine_exciter_sum1__out;
double _microturbine_exciter_sum2__out;
double _microturbine_exciter_pi_sum5__out;
double _microturbine_synchonous_machine_phi_2q_a_product1__out;
double _microturbine_synchonous_machine_phi_q_a_2_gain1__out;
double _microturbine_synchonous_machine_e_qp_product3__out;
double _microturbine_synchonous_machine_phi_1d_a_product1__out;
double _microturbine_synchonous_machine_phi_d_a_2_gain1__out;
double _microturbine_be1_25a_synchronizer_confine_phase__in;


double _microturbine_be1_25a_synchronizer_confine_phase__out;
double _microturbine_be1_25a_synchronizer_sum3__out;
double _microturbine_cb_control_sum9__out;
double _microturbine_exciter_sum5__out;
double _microturbine_gain17__out;
double _microturbine_be1_25a_synchronizer_relational_operator2__out;
X_Int32 _microturbine_cb_control_logical_operator10__out;
X_Int32 _microturbine_cb_control_logical_operator7__out;
double _microturbine_exciter_gain1__out;
double _microturbine_exciter_gain4__out;
double _microturbine_exciter_pi_limit1__out;
double _microturbine_synchonous_machine_phi_2q_a_sum1__out;
double _microturbine_synchonous_machine_phi_q_a_2_sum1__out;
double _microturbine_synchonous_machine_e_qp_sum3__out;
double _microturbine_synchonous_machine_phi_1d_a_sum1__out;
double _microturbine_synchonous_machine_phi_d_a_2_sum1__out;
double _microturbine_be1_25a_synchronizer_abs4__out;
double _microturbine_be1_25a_synchronizer_abs2__out;
double _microturbine_be1_25a_synchronizer_be1_25a_synchronizer1__dV;


double _microturbine_be1_25a_synchronizer_be1_25a_synchronizer1__del_V;
double _microturbine_cb_control_abs6__out;
double _microturbine_exciter_gain9__out;
float _microturbine_be1_25a_synchronizer_digital_probe4__tmp;
X_Int32 _microturbine_cb_control_logical_operator11__out;
float _microturbine_cb_control_grid_islanded_on__tmp;
X_Int32 _microturbine_cb_control_logical_operator5__out;
double _microturbine_exciter_gain18__out;
double _microturbine_exciter_pi_sum6__out;
double _microturbine_synchonous_machine_phi_2q_a_gain1__out;
double _microturbine_synchonous_machine_v_dg2_product2__out;
double _microturbine_synchonous_machine_v_qg2_gain1__out;
double _microturbine_synchonous_machine_w_m_product2__out;
double _microturbine_synchonous_machine_e_qp_product2__out;
double _microturbine_synchonous_machine_phi_1d_a_gain1__out;
double _microturbine_synchonous_machine_v_dg2_gain1__out;
double _microturbine_synchonous_machine_v_qg2_product2__out;
double _microturbine_synchonous_machine_w_m_product3__out;
double _microturbine_be1_25a_synchronizer_relational_operator1__out;
double _microturbine_be1_25a_synchronizer_relational_operator4__out;
double _microturbine_cb_control_relational_operator5__out;
X_Int32 _microturbine_cb_control_logical_operator12__out;
float _microturbine_cb_control_mt_sync_on__tmp;
float _microturbine_cb_control_grid_islanded_off__tmp;
double _microturbine_exciter_pi_kb__out;
double _microturbine_synchonous_machine_v_qg2_discrete_transfer_function1__out;
double _microturbine_synchonous_machine_v_qg2_discrete_transfer_function1__b_coeff[2] = {200.0, -200.00000000000003};
double _microturbine_synchonous_machine_v_qg2_discrete_transfer_function1__a_coeff[2] = {1.0, -0.9960079893439916};
double _microturbine_synchonous_machine_v_qg2_discrete_transfer_function1__a_sum;
double _microturbine_synchonous_machine_v_qg2_discrete_transfer_function1__b_sum;
double _microturbine_synchonous_machine_v_qg2_discrete_transfer_function1__delay_line_in;
X_UnInt32 _microturbine_synchonous_machine_v_qg2_discrete_transfer_function1__i;
double _microturbine_synchonous_machine_e_qp_sum2__out;
double _microturbine_synchonous_machine_v_dg2_discrete_transfer_function1__out;
double _microturbine_synchonous_machine_v_dg2_discrete_transfer_function1__b_coeff[2] = {200.0, -200.00000000000003};
double _microturbine_synchonous_machine_v_dg2_discrete_transfer_function1__a_coeff[2] = {1.0, -0.9960079893439916};
double _microturbine_synchonous_machine_v_dg2_discrete_transfer_function1__a_sum;
double _microturbine_synchonous_machine_v_dg2_discrete_transfer_function1__b_sum;
double _microturbine_synchonous_machine_v_dg2_discrete_transfer_function1__delay_line_in;
X_UnInt32 _microturbine_synchonous_machine_v_dg2_discrete_transfer_function1__i;
double _microturbine_synchonous_machine_w_m_sum1__out;
float _microturbine_be1_25a_synchronizer_digital_probe3__tmp;
float _microturbine_be1_25a_synchronizer_digital_probe5__tmp;
double _microturbine_be1_25a_synchronizer_logical_operator1__out;
double _microturbine_cb_control_logical_operator8__out;
float _microturbine_cb_control_mt_sync_off__tmp;
double _microturbine_exciter_pi_sum7__out;
double _microturbine_synchonous_machine_v_qg2_sum2__out;
double _microturbine_synchonous_machine_e_qp_product1__out;
double _microturbine_synchonous_machine_v_dg2_sum2__out;
double _microturbine_synchonous_machine_w_m_sum2__out;
double _microturbine_be1_25a_synchronizer_stay_connected1__connect;
X_Int32 _microturbine_be1_25a_synchronizer_stay_connected1__MTsync;
double _microturbine_be1_25a_synchronizer_stay_connected1__connectMT;
double _microturbine_be1_25a_synchronizer_stay_connected1__ready;


X_Int32 _microturbine_be1_25a_synchronizer_stay_connected1__out;
double _microturbine_cb_control_logical_operator6__out;
double _microturbine_synchonous_machine_gain8__out;
double _microturbine_synchonous_machine_e_qp_sum1__out;
double _microturbine_synchonous_machine_gain9__out;
double _microturbine_synchonous_machine_w_m_gain2__out;
double _microturbine_cb_control_logical_operator1__out;
double _microturbine_synchonous_machine_qd_to_abc_product1__out;
double _microturbine_synchonous_machine_qd_to_abc_product3__out;
double _microturbine_synchonous_machine_qd_to_abc_product5__out;
double _microturbine_synchonous_machine_e_qp_gain1__out;
double _microturbine_synchonous_machine_qd_to_abc_product2__out;
double _microturbine_synchonous_machine_qd_to_abc_product4__out;
double _microturbine_synchonous_machine_qd_to_abc_product6__out;
X_Int32 _microturbine_cb_control_stay_connected1__var;
double _microturbine_cb_control_stay_connected1__connect;
double _microturbine_cb_control_stay_connected1__disconnect;


X_Int32 _microturbine_cb_control_stay_connected1__action;
double _microturbine_synchonous_machine_qd_to_abc_sum3__out;
double _microturbine_synchonous_machine_qd_to_abc_sum5__out;
double _microturbine_synchonous_machine_qd_to_abc_sum6__out;
double _microturbine_be1_25a_synchronizer_hold_after_connect__var;
X_Int32 _microturbine_be1_25a_synchronizer_hold_after_connect__MT_sync;
X_Int32 _microturbine_be1_25a_synchronizer_hold_after_connect__connect;
double _microturbine_be1_25a_synchronizer_hold_after_connect__in;


double _microturbine_be1_25a_synchronizer_hold_after_connect__out;
double _microturbine_be1_25a_synchronizer_hold_after_connect1__var;
X_Int32 _microturbine_be1_25a_synchronizer_hold_after_connect1__MT_sync;
X_Int32 _microturbine_be1_25a_synchronizer_hold_after_connect1__connect;
X_Int32 _microturbine_be1_25a_synchronizer_hold_after_connect1__exc_state;
double _microturbine_be1_25a_synchronizer_hold_after_connect1__in;


double _microturbine_be1_25a_synchronizer_hold_after_connect1__out;
float _microturbine_cb_control_gcb_on__tmp;
X_Int32 _microturbine_cb_control_logical_operator3__out;
double _microturbine_be1_25a_synchronizer_sum9__out;
double _microturbine_be1_25a_synchronizer_sum10__out;
float _microturbine_cb_control_gcb_off__tmp;
double _microturbine_be1_25a_synchronizer_hold_after_connect2__var;
X_Int32 _microturbine_be1_25a_synchronizer_hold_after_connect2__connect;
double _microturbine_be1_25a_synchronizer_hold_after_connect2__in;


double _microturbine_be1_25a_synchronizer_hold_after_connect2__out;
double _microturbine_be1_25a_synchronizer_hold_after_connect3__var;
X_Int32 _microturbine_be1_25a_synchronizer_hold_after_connect3__connect;
double _microturbine_be1_25a_synchronizer_hold_after_connect3__in;


double _microturbine_be1_25a_synchronizer_hold_after_connect3__out;
double _microturbine_signal_switch1__out;
double _microturbine_signal_switch2__out;
double _microturbine_w__out;
double _microturbine__v_3__out;
double _microturbine_governor_sum7__out;
double _microturbine_exciter_sum4__out;
double _microturbine_governor_rate_limiter2__in_rate;
double _microturbine_exciter__v_1__out;
double _microturbine_governor_sum10__out;
double _microturbine_exciter_rate_limit__in_rate;
double _microturbine_governor_discrete_transfer_function1__out;
double _microturbine_governor_discrete_transfer_function1__b_coeff[2] = {834.166666666667, -832.4999999999998};
double _microturbine_governor_discrete_transfer_function1__a_coeff[2] = {1.0, 0.6666666666666666};
double _microturbine_governor_discrete_transfer_function1__a_sum;
double _microturbine_governor_discrete_transfer_function1__b_sum;
double _microturbine_governor_discrete_transfer_function1__delay_line_in;
X_UnInt32 _microturbine_governor_discrete_transfer_function1__i;
double _microturbine_exciter_gain8__out;
double _microturbine_governor_gain38__out;
double _microturbine_exciter_sum3__out;
double _microturbine_governor_gain39__out;
double _microturbine_exciter_gain6__out;
double _microturbine_governor_discrete_transfer_function2__out;
double _microturbine_governor_discrete_transfer_function2__b_coeff[3] = {1.4594780219780221, 0.0572344322344327, -1.4022435897435903};
double _microturbine_governor_discrete_transfer_function2__a_coeff[3] = {1.0, -1.1254578754578755, 0.23992673992674};
double _microturbine_governor_discrete_transfer_function2__a_sum;
double _microturbine_governor_discrete_transfer_function2__b_sum;
double _microturbine_governor_discrete_transfer_function2__delay_line_in;
X_UnInt32 _microturbine_governor_discrete_transfer_function2__i;
//@cmp.var.end

//@cmp.svar.start
// state variables
double _microturbine_be1_25a_synchronizer_unit_delay2__state;
X_Int32 _microturbine_be1_25a_synchronizer_unit_delay5__state;
double _microturbine_engine_integrator1__state;
double _microturbine_governor_integrator1__state;
double _microturbine_synchonous_machine_e_qp_integrator1__state;
double _microturbine_synchonous_machine_phi_1d_a_integrator1__state;
double _microturbine_synchonous_machine_phi_2q_a_integrator1__state;
double _microturbine_synchonous_machine_rate_transition1_output__out =  0.0;

double _microturbine_synchonous_machine_rate_transition2_output__out =  0.0;

double _microturbine_synchonous_machine_w_m_integrator1__state;
double _sinusoidal_source1__current_phase;
double _sinusoidal_source2__current_phase;
double _sinusoidal_source3__current_phase;
double _microturbine_three_phase_meter1_power_meter__filter_1_output_k_minus_1;
double _microturbine_three_phase_meter1_power_meter__filter_1_input_k_minus_1;
double _microturbine_three_phase_meter1_power_meter__filter_1_output_k_minus_1Q;
double _microturbine_three_phase_meter1_power_meter__filter_1_input_k_minus_1Q;
double _microturbine_three_phase_meter1_power_meter__filter_1_output_k_minus_1P0;
double _microturbine_three_phase_meter1_power_meter__filter_1_input_k_minus_1P0;
double _microturbine_three_phase_meter1_power_meter__filter_2_output_k_minus_1;
double _microturbine_three_phase_meter1_power_meter__filter_2_input_k_minus_1;
double _microturbine_three_phase_meter1_power_meter__filter_2_output_k_minus_1Q;
double _microturbine_three_phase_meter1_power_meter__filter_2_input_k_minus_1Q;
double _microturbine_three_phase_meter1_power_meter__filter_2_output_k_minus_1P0;
double _microturbine_three_phase_meter1_power_meter__filter_2_input_k_minus_1P0;
double _microturbine_governor_exciter_activation_comparator1__state;
double _microturbine_be1_25a_synchronizer_pll_pid_controller1__integrator_state;
X_UnInt32 _microturbine_be1_25a_synchronizer_pll_pid_controller1__av_active;
double _microturbine_be1_25a_synchronizer_pll_pid_controller1__filter_state;
double _microturbine_exciter_integrator1__state;
X_Int32 _microturbine_exciter_integrator1__reset_state;
double _microturbine_exciter_integrator2__state;
X_Int32 _microturbine_exciter_integrator2__reset_state;
double _microturbine_exciter_integrator3__state;
X_Int32 _microturbine_exciter_integrator3__reset_state;
double _microturbine_exciter_integrator4__state;
X_Int32 _microturbine_exciter_integrator4__reset_state;
double _microturbine_exciter_pi_integrator1__state;
X_Int32 _microturbine_exciter_pi_integrator1__reset_state;
double _microturbine_synchonous_machine_v_qg2_discrete_transfer_function1__states[1];
double _microturbine_synchonous_machine_v_dg2_discrete_transfer_function1__states[1];
double _microturbine_governor_rate_limiter2__prev_out;
double _microturbine_governor_rate_limiter2__out;
int _microturbine_governor_rate_limiter2__first_step;
double _microturbine_exciter_rate_limit__prev_out;
double _microturbine_exciter_rate_limit__out;
int _microturbine_exciter_rate_limit__first_step;
double _microturbine_governor_discrete_transfer_function1__states[1];
double _microturbine_governor_discrete_transfer_function2__states[2];
//@cmp.svar.end



// generated using template: virtual_hil/custom_functions.template---------------------------------
void ReInit_user_sp_cpu_dev0() {
#if DEBUG_MODE
    printf("\n\rReInitTimer");
#endif
    //@cmp.init.block.start
    _microturbine_be1_25a_synchronizer_unit_delay2__state = 0.0;
    _microturbine_be1_25a_synchronizer_unit_delay5__state = 0.0;
    _microturbine_engine_integrator1__state = 0.0;
    _microturbine_governor_integrator1__state = 0.0;
    _microturbine_synchonous_machine_e_qp_integrator1__state = 0.0;
    _microturbine_synchonous_machine_phi_1d_a_integrator1__state = 0.0;
    _microturbine_synchonous_machine_phi_2q_a_integrator1__state = 0.0;
    _microturbine_synchonous_machine_rate_transition1_output__out =  0.0;
    _microturbine_synchonous_machine_rate_transition2_output__out =  0.0;
    _microturbine_synchonous_machine_w_m_integrator1__state = 0.0;
    _sinusoidal_source1__current_phase = 0.0 / 360.0f;
    _sinusoidal_source2__current_phase = -120.0 / 360.0f;
    _sinusoidal_source3__current_phase = 120.0 / 360.0f;
    _microturbine_be1_25a_synchronizer_abc_to_qd1_confine_phase__floor_in = 0;
    HIL_OutAO(0x4009, 0.0f);
    HIL_OutAO(0x4017, 0.0f);
    HIL_OutAO(0x4019, 0.0f);
    HIL_OutAO(0x401e, 0.0f);
    HIL_OutAO(0x401f, 0.0f);
    HIL_OutAO(0x4026, 0.0f);
    _microturbine_three_phase_meter1_power_meter__filter_1_output_k_minus_1 = 0.0;
    _microturbine_three_phase_meter1_power_meter__filter_1_input_k_minus_1 = 0.0;
    _microturbine_three_phase_meter1_power_meter__filter_1_output_k_minus_1Q = 0.0;
    _microturbine_three_phase_meter1_power_meter__filter_1_input_k_minus_1Q = 0.0;
    _microturbine_three_phase_meter1_power_meter__filter_1_output_k_minus_1P0 = 0.0;
    _microturbine_three_phase_meter1_power_meter__filter_1_input_k_minus_1P0 = 0.0;
    _microturbine_synchonous_machine_c_function1__var = 0;
    HIL_OutAO(0x4022, 0.0f);
    HIL_OutAO(0x4023, 0.0f);
    HIL_OutAO(0x4024, 0.0f);
    HIL_OutAO(0x4025, 0.0f);
    HIL_OutFloat(137101312, 0.0);
    HIL_OutFloat(137101313, 0.0);
    HIL_OutFloat(137101314, 0.0);
    HIL_OutAO(0x400d, 0.0f);
    _microturbine_synchonous_machine_abc_to_qd_confine_phase__floor_in = 0;
    _microturbine_synchonous_machine_qd_to_abc_confine_phase__floor_in = 0;
    HIL_OutAO(0x4016, 0.0f);
    _microturbine_governor_exciter_activation_comparator1__state = 0.0f;
    HIL_OutAO(0x4002, 0.0f);
    _microturbine_be1_25a_synchronizer_pll_pid_controller1__integrator_state =  376.99111843077515;
    _microturbine_be1_25a_synchronizer_pll_pid_controller1__filter_state =  0.0;
    HIL_OutAO(0x4003, 0.0f);
    _microturbine_governor_exciter_activation_activate_exciter__Activate = 0;
    HIL_OutAO(0x4000, 0.0f);
    HIL_OutAO(0x4001, 0.0f);
    _microturbine_be1_25a_synchronizer_pll_c_function1__var = 0;
    HIL_OutAO(0x4008, 0.0f);
    _microturbine_exciter_integrator1__state = 0.0;
    _microturbine_exciter_integrator1__reset_state = 2;
    _microturbine_exciter_integrator2__state = 0.0;
    _microturbine_exciter_integrator2__reset_state = 2;
    _microturbine_exciter_integrator3__state = 0.0;
    _microturbine_exciter_integrator3__reset_state = 2;
    _microturbine_exciter_integrator4__state = 0.0;
    _microturbine_exciter_integrator4__reset_state = 2;
    _microturbine_exciter_pi_integrator1__state = 0.0;
    _microturbine_exciter_pi_integrator1__reset_state = 2;
    HIL_OutAO(0x400e, 0.0f);
    _microturbine_be1_25a_synchronizer_pll_confine_phase__floor_in = 0;
    HIL_OutAO(0x4011, 0.0f);
    HIL_OutAO(0x4013, 0.0f);
    HIL_OutAO(0x4014, 0.0f);
    HIL_OutAO(0x4012, 0.0f);
    HIL_OutAO(0x400b, 0.0f);
    HIL_OutAO(0x4007, 0.0f);
    HIL_OutAO(0x4010, 0.0f);
    _microturbine_cb_control_hold_after_connect2__var = 1;
    HIL_OutAO(0x401d, 0.0f);
    HIL_OutAO(0x401c, 0.0f);
    HIL_OutAO(0x400a, 0.0f);
    HIL_OutAO(0x400f, 0.0f);
    HIL_OutAO(0x4004, 0.0f);
    HIL_OutAO(0x400c, 0.0f);
    HIL_OutAO(0x4027, 0.0f);
    HIL_OutAO(0x4021, 0.0f);
    HIL_OutAO(0x4020, 0.0f);
    HIL_OutFloat(145489920, 0.0);
    for (_microturbine_synchonous_machine_v_qg2_discrete_transfer_function1__i = 0; _microturbine_synchonous_machine_v_qg2_discrete_transfer_function1__i < 1; _microturbine_synchonous_machine_v_qg2_discrete_transfer_function1__i++) {
        _microturbine_synchonous_machine_v_qg2_discrete_transfer_function1__states[_microturbine_synchonous_machine_v_qg2_discrete_transfer_function1__i] = 0.0;
    }
    for (_microturbine_synchonous_machine_v_dg2_discrete_transfer_function1__i = 0; _microturbine_synchonous_machine_v_dg2_discrete_transfer_function1__i < 1; _microturbine_synchonous_machine_v_dg2_discrete_transfer_function1__i++) {
        _microturbine_synchonous_machine_v_dg2_discrete_transfer_function1__states[_microturbine_synchonous_machine_v_dg2_discrete_transfer_function1__i] = 0.0;
    }
    _microturbine_be1_25a_synchronizer_stay_connected1__connect = 0;
    HIL_OutAO(0x401b, 0.0f);
    HIL_OutAO(0x401a, 0.0f);
    _microturbine_cb_control_stay_connected1__var = 0;
    _microturbine_be1_25a_synchronizer_hold_after_connect__var = 0;
    _microturbine_be1_25a_synchronizer_hold_after_connect1__var = 0;
    HIL_OutFloat(149684224, 0.0);
    HIL_OutFloat(149684225, 0.0);
    HIL_OutFloat(149684226, 0.0);
    HIL_OutAO(0x4006, 0.0f);
    HIL_OutAO(0x4005, 0.0f);
    _microturbine_be1_25a_synchronizer_hold_after_connect2__var = 0;
    _microturbine_be1_25a_synchronizer_hold_after_connect3__var = 0;
    _microturbine_governor_rate_limiter2__first_step = 1;
    HIL_OutAO(0x4018, 0.0f);
    _microturbine_exciter_rate_limit__first_step = 1;
    for (_microturbine_governor_discrete_transfer_function1__i = 0; _microturbine_governor_discrete_transfer_function1__i < 1; _microturbine_governor_discrete_transfer_function1__i++) {
        _microturbine_governor_discrete_transfer_function1__states[_microturbine_governor_discrete_transfer_function1__i] = 0.0;
    }
    HIL_OutAO(0x4015, 0.0f);
    for (_microturbine_governor_discrete_transfer_function2__i = 0; _microturbine_governor_discrete_transfer_function2__i < 2; _microturbine_governor_discrete_transfer_function2__i++) {
        _microturbine_governor_discrete_transfer_function2__states[_microturbine_governor_discrete_transfer_function2__i] = 0.0;
    }
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
    // Generated from the component: Microturbine.Synchonous Machine.E_F.Va1
    _microturbine_synchonous_machine_e_f_va1__out = (HIL_InFloat(0xc80000 + 0x200));
    // Generated from the component: Microturbine.Synchonous Machine.E_qp.Constant1
    // Generated from the component: Microturbine.Synchonous Machine.E_qp.Constant2
    // Generated from the component: Microturbine.Synchonous Machine.E_qp.Constant3
    // Generated from the component: Microturbine.Synchonous Machine.E_qp.Integrator1
    _microturbine_synchonous_machine_e_qp_integrator1__out = _microturbine_synchonous_machine_e_qp_integrator1__state;
    // Generated from the component: Microturbine.Synchonous Machine.Ia1.Ia1
    _microturbine_synchonous_machine_ia1_ia1__out = (HIL_InFloat(0xc80000 + 0x600));
    // Generated from the component: Microturbine.Synchonous Machine.Ib1.Ia1
    _microturbine_synchonous_machine_ib1_ia1__out = (HIL_InFloat(0xc80000 + 0x601));
    // Generated from the component: Microturbine.Synchonous Machine.Ic1.Ia1
    _microturbine_synchonous_machine_ic1_ia1__out = (HIL_InFloat(0xc80000 + 0x602));
    // Generated from the component: Microturbine.Synchonous Machine.Phi_1d_a.Constant1
    // Generated from the component: Microturbine.Synchonous Machine.Phi_1d_a.Integrator1
    _microturbine_synchonous_machine_phi_1d_a_integrator1__out = _microturbine_synchonous_machine_phi_1d_a_integrator1__state;
    // Generated from the component: Microturbine.Synchonous Machine.Phi_2q_a.Constant1
    // Generated from the component: Microturbine.Synchonous Machine.Phi_2q_a.Integrator1
    _microturbine_synchonous_machine_phi_2q_a_integrator1__out = _microturbine_synchonous_machine_phi_2q_a_integrator1__state;
    // Generated from the component: Microturbine.Synchonous Machine.Phi_d_a 2.Constant1
    // Generated from the component: Microturbine.Synchonous Machine.Phi_d_a 2.Constant2
    // Generated from the component: Microturbine.Synchonous Machine.Phi_q_a 2.Constant2
    // Generated from the component: Microturbine.Synchonous Machine.Rate Transition1.Output
    // Generated from the component: Microturbine.Synchonous Machine.V_dG2.Constant2
    // Generated from the component: Microturbine.Synchonous Machine.V_dG2.Constant3
    // Generated from the component: Microturbine.Synchonous Machine.V_qG2.Constant2
    // Generated from the component: Microturbine.Synchonous Machine.V_qG2.Constant3
    // Generated from the component: Microturbine.Synchonous Machine.abc to qd.Constant2
    // Generated from the component: Microturbine.Synchonous Machine.abc to qd.Constant3
    // Generated from the component: Microturbine.Synchonous Machine.qd to abc.Constant2
    // Generated from the component: Microturbine.Synchonous Machine.qd to abc.Constant3
    // Generated from the component: Microturbine.Synchonous Machine.w_m.Constant1
    // Generated from the component: Microturbine.Synchonous Machine.w_m.Integrator1
    _microturbine_synchonous_machine_w_m_integrator1__out = _microturbine_synchonous_machine_w_m_integrator1__state;
    // Generated from the component: Microturbine.Three-phase Meter1.IA.Ia1
    _microturbine_three_phase_meter1_ia_ia1__out = (HIL_InFloat(0xc80000 + 0x11));
    // Generated from the component: Microturbine.Three-phase Meter1.IB.Ia1
    _microturbine_three_phase_meter1_ib_ia1__out = (HIL_InFloat(0xc80000 + 0x12));
    // Generated from the component: Microturbine.Three-phase Meter1.IC.Ia1
    _microturbine_three_phase_meter1_ic_ia1__out = (HIL_InFloat(0xc80000 + 0x13));
    // Generated from the component: Microturbine.Three-phase Meter1.VAn.Va1
    _microturbine_three_phase_meter1_van_va1__out = (HIL_InFloat(0xc80000 + 0x9));
    // Generated from the component: Microturbine.Three-phase Meter1.VBn.Va1
    _microturbine_three_phase_meter1_vbn_va1__out = (HIL_InFloat(0xc80000 + 0xa));
    // Generated from the component: Microturbine.Three-phase Meter1.VCn.Va1
    _microturbine_three_phase_meter1_vcn_va1__out = (HIL_InFloat(0xc80000 + 0xb));
    // Generated from the component: Microturbine.Three-phase Meter1.zero
    // Generated from the component: Microturbine.Synchonous Machine.E_qp.Gain2
    _microturbine_synchonous_machine_e_qp_gain2__out = 8.874962836170933e-05 * _microturbine_synchonous_machine_e_f_va1__out;
    // Generated from the component: Microturbine.Synchonous Machine.E_qp_M
    HIL_OutAO(0x4019, (float)_microturbine_synchonous_machine_e_qp_integrator1__out);
    // Generated from the component: Microturbine.Synchonous Machine.Phi_1d_a_M
    HIL_OutAO(0x401e, (float)_microturbine_synchonous_machine_phi_1d_a_integrator1__out);
    // Generated from the component: Microturbine.Synchonous Machine.Phi_2q_a_M
    HIL_OutAO(0x401f, (float)_microturbine_synchonous_machine_phi_2q_a_integrator1__out);
    // Generated from the component: Microturbine.Synchonous Machine.Phi_d_a 2.Product1
    _microturbine_synchonous_machine_phi_d_a_2_product1__out = (_microturbine_synchonous_machine_phi_d_a_2_constant1__out * _microturbine_synchonous_machine_e_qp_integrator1__out);
    // Generated from the component: Microturbine.Synchonous Machine.Phi_d_a 2.Product2
    _microturbine_synchonous_machine_phi_d_a_2_product2__out = (_microturbine_synchonous_machine_phi_d_a_2_constant2__out * _microturbine_synchonous_machine_phi_1d_a_integrator1__out);
    // Generated from the component: Microturbine.Synchonous Machine.Phi_q_a 2.Product2
    _microturbine_synchonous_machine_phi_q_a_2_product2__out = (_microturbine_synchonous_machine_phi_q_a_2_constant2__out * _microturbine_synchonous_machine_phi_2q_a_integrator1__out);
    // Generated from the component: Microturbine.Synchonous Machine.w_m.Gain16
    _microturbine_synchonous_machine_w_m_gain16__out = 5.385587406153931e-05 * _microturbine_synchonous_machine_rate_transition1_output__out;
    // Generated from the component: Microturbine.Synchonous Machine.V_dG2.Termination1
    // Generated from the component: Microturbine.Synchonous Machine.V_qG2.Termination1
    // Generated from the component: Microturbine.Synchonous Machine.w_m.Gain1
    _microturbine_synchonous_machine_w_m_gain1__out = 0.005305164769729845 * _microturbine_synchonous_machine_w_m_constant1__out;
    // Generated from the component: Microturbine.Synchonous Machine.Gain1
    _microturbine_synchonous_machine_gain1__out = 2.0 * _microturbine_synchonous_machine_w_m_integrator1__out;
    // Generated from the component: Microturbine.Synchonous Machine.Gain17
    _microturbine_synchonous_machine_gain17__out = 9.549296585513721 * _microturbine_synchonous_machine_w_m_integrator1__out;
    // Generated from the component: Microturbine.Three-phase Meter1.Power Meter
    _microturbine_three_phase_meter1_power_meter__v_alpha = SQRT_2OVER3 * ( _microturbine_three_phase_meter1_van_va1__out - 0.5f * _microturbine_three_phase_meter1_vbn_va1__out - 0.5f * _microturbine_three_phase_meter1_vcn_va1__out);
    _microturbine_three_phase_meter1_power_meter__v_beta = SQRT_2OVER3 * (SQRT3_OVER_2 * _microturbine_three_phase_meter1_vbn_va1__out - SQRT3_OVER_2 * _microturbine_three_phase_meter1_vcn_va1__out);
    _microturbine_three_phase_meter1_power_meter__i_alpha = SQRT_2OVER3 * ( _microturbine_three_phase_meter1_ia_ia1__out - 0.5f * _microturbine_three_phase_meter1_ib_ia1__out - 0.5f * _microturbine_three_phase_meter1_ic_ia1__out);
    _microturbine_three_phase_meter1_power_meter__i_beta = SQRT_2OVER3 * (SQRT3_OVER_2 * _microturbine_three_phase_meter1_ib_ia1__out - SQRT3_OVER_2 * _microturbine_three_phase_meter1_ic_ia1__out);
    _microturbine_three_phase_meter1_power_meter__v_zero = ONE_DIV_BY_SQRT_3 * (_microturbine_three_phase_meter1_van_va1__out + _microturbine_three_phase_meter1_vbn_va1__out + _microturbine_three_phase_meter1_vcn_va1__out);
    _microturbine_three_phase_meter1_power_meter__i_zero = ONE_DIV_BY_SQRT_3 * (_microturbine_three_phase_meter1_ia_ia1__out + _microturbine_three_phase_meter1_ib_ia1__out + _microturbine_three_phase_meter1_ic_ia1__out);
    _microturbine_three_phase_meter1_power_meter__Pac = _microturbine_three_phase_meter1_power_meter__v_alpha * _microturbine_three_phase_meter1_power_meter__i_alpha + _microturbine_three_phase_meter1_power_meter__v_beta * _microturbine_three_phase_meter1_power_meter__i_beta;
    _microturbine_three_phase_meter1_power_meter__Qac = _microturbine_three_phase_meter1_power_meter__v_beta * _microturbine_three_phase_meter1_power_meter__i_alpha - _microturbine_three_phase_meter1_power_meter__v_alpha * _microturbine_three_phase_meter1_power_meter__i_beta;
    _microturbine_three_phase_meter1_power_meter__P0ac = _microturbine_three_phase_meter1_power_meter__v_zero * _microturbine_three_phase_meter1_power_meter__i_zero;
    _microturbine_three_phase_meter1_power_meter__filter_1_output = 0.0018814092193247796 * (_microturbine_three_phase_meter1_power_meter__Pac + _microturbine_three_phase_meter1_power_meter__filter_1_input_k_minus_1) - (-0.9962371815613504) * _microturbine_three_phase_meter1_power_meter__filter_1_output_k_minus_1;
    _microturbine_three_phase_meter1_power_meter__filter_1_outputQ = 0.0018814092193247796 * (_microturbine_three_phase_meter1_power_meter__Qac + _microturbine_three_phase_meter1_power_meter__filter_1_input_k_minus_1Q) - (-0.9962371815613504) * _microturbine_three_phase_meter1_power_meter__filter_1_output_k_minus_1Q;
    _microturbine_three_phase_meter1_power_meter__filter_1_outputP0 = 0.0018814092193247796 * (_microturbine_three_phase_meter1_power_meter__P0ac + _microturbine_three_phase_meter1_power_meter__filter_1_input_k_minus_1P0) - (-0.9962371815613504) * _microturbine_three_phase_meter1_power_meter__filter_1_output_k_minus_1P0;
    _microturbine_three_phase_meter1_power_meter__filter_1_input_k_minus_1 = _microturbine_three_phase_meter1_power_meter__Pac;
    _microturbine_three_phase_meter1_power_meter__filter_1_output_k_minus_1 = _microturbine_three_phase_meter1_power_meter__filter_1_output;
    _microturbine_three_phase_meter1_power_meter__filter_1_input_k_minus_1Q = _microturbine_three_phase_meter1_power_meter__Qac;;
    _microturbine_three_phase_meter1_power_meter__filter_1_output_k_minus_1Q = _microturbine_three_phase_meter1_power_meter__filter_1_outputQ;
    _microturbine_three_phase_meter1_power_meter__filter_1_input_k_minus_1P0 = _microturbine_three_phase_meter1_power_meter__P0ac;
    _microturbine_three_phase_meter1_power_meter__filter_1_output_k_minus_1P0 = _microturbine_three_phase_meter1_power_meter__filter_1_outputP0;
    _microturbine_three_phase_meter1_power_meter__filter_2_output = 0.0018814092193247796 * (_microturbine_three_phase_meter1_power_meter__filter_1_output + _microturbine_three_phase_meter1_power_meter__filter_2_input_k_minus_1) - (-0.9962371815613504) * _microturbine_three_phase_meter1_power_meter__filter_2_output_k_minus_1;
    _microturbine_three_phase_meter1_power_meter__filter_2_outputQ = 0.0018814092193247796 * (_microturbine_three_phase_meter1_power_meter__Qac + _microturbine_three_phase_meter1_power_meter__filter_2_input_k_minus_1Q) - (-0.9962371815613504) * _microturbine_three_phase_meter1_power_meter__filter_2_output_k_minus_1Q;
    _microturbine_three_phase_meter1_power_meter__filter_2_outputP0 = 0.0018814092193247796 * (_microturbine_three_phase_meter1_power_meter__filter_1_outputP0 + _microturbine_three_phase_meter1_power_meter__filter_2_input_k_minus_1P0) - (-0.9962371815613504) * _microturbine_three_phase_meter1_power_meter__filter_2_output_k_minus_1P0;
    _microturbine_three_phase_meter1_power_meter__filter_2_input_k_minus_1 = _microturbine_three_phase_meter1_power_meter__filter_1_output;
    _microturbine_three_phase_meter1_power_meter__filter_2_output_k_minus_1 = _microturbine_three_phase_meter1_power_meter__filter_2_output;
    _microturbine_three_phase_meter1_power_meter__filter_2_input_k_minus_1Q = _microturbine_three_phase_meter1_power_meter__Qac;
    _microturbine_three_phase_meter1_power_meter__filter_2_output_k_minus_1Q = _microturbine_three_phase_meter1_power_meter__filter_2_outputQ;
    _microturbine_three_phase_meter1_power_meter__filter_2_input_k_minus_1P0 = _microturbine_three_phase_meter1_power_meter__filter_1_outputP0;
    _microturbine_three_phase_meter1_power_meter__filter_2_output_k_minus_1P0 = _microturbine_three_phase_meter1_power_meter__filter_2_outputP0;
    _microturbine_three_phase_meter1_power_meter__Pdc = _microturbine_three_phase_meter1_power_meter__filter_2_output;
    _microturbine_three_phase_meter1_power_meter__Qdc = _microturbine_three_phase_meter1_power_meter__filter_2_outputQ;
    _microturbine_three_phase_meter1_power_meter__P0dc = _microturbine_three_phase_meter1_power_meter__filter_2_outputP0;
    _microturbine_three_phase_meter1_power_meter__apparent = sqrt(pow(_microturbine_three_phase_meter1_power_meter__Pdc, 2) + pow(_microturbine_three_phase_meter1_power_meter__Qdc, 2));
    if (_microturbine_three_phase_meter1_power_meter__apparent > 0)
        _microturbine_three_phase_meter1_power_meter__k_factor = _microturbine_three_phase_meter1_power_meter__Pdc / _microturbine_three_phase_meter1_power_meter__apparent;
    else
        _microturbine_three_phase_meter1_power_meter__k_factor = 0;
    // Generated from the component: Microturbine.Three-phase Meter1.Freq
    // Generated from the component: Microturbine.Three-phase Meter1.IA_RMS
    // Generated from the component: Microturbine.Three-phase Meter1.IB_RMS
    // Generated from the component: Microturbine.Three-phase Meter1.IC_RMS
    // Generated from the component: Microturbine.Three-phase Meter1.I_RMS
    // Generated from the component: Microturbine.Three-phase Meter1.POWER_PA
    // Generated from the component: Microturbine.Three-phase Meter1.POWER_PB
    // Generated from the component: Microturbine.Three-phase Meter1.POWER_PC
    // Generated from the component: Microturbine.Three-phase Meter1.POWER_PFA
    // Generated from the component: Microturbine.Three-phase Meter1.POWER_PFB
    // Generated from the component: Microturbine.Three-phase Meter1.POWER_PFC
    // Generated from the component: Microturbine.Three-phase Meter1.POWER_QA
    // Generated from the component: Microturbine.Three-phase Meter1.POWER_QB
    // Generated from the component: Microturbine.Three-phase Meter1.POWER_QC
    // Generated from the component: Microturbine.Three-phase Meter1.POWER_SA
    // Generated from the component: Microturbine.Three-phase Meter1.POWER_SB
    // Generated from the component: Microturbine.Three-phase Meter1.POWER_SC
    // Generated from the component: Microturbine.Three-phase Meter1.VAB_RMS
    // Generated from the component: Microturbine.Three-phase Meter1.VAn_RMS
    // Generated from the component: Microturbine.Three-phase Meter1.VBC_RMS
    // Generated from the component: Microturbine.Three-phase Meter1.VBn_RMS
    // Generated from the component: Microturbine.Three-phase Meter1.VCA_RMS
    // Generated from the component: Microturbine.Three-phase Meter1.VCn_RMS
    // Generated from the component: Microturbine.Three-phase Meter1.VLL_RMS
    // Generated from the component: Microturbine.Three-phase Meter1.VLn_RMS
    // Generated from the component: Microturbine.Three-phase Meter1.extra_output_bus
    _microturbine_three_phase_meter1_extra_output_bus__out[0] = _microturbine_three_phase_meter1_zero__out;
    _microturbine_three_phase_meter1_extra_output_bus__out[1] = _microturbine_three_phase_meter1_zero__out;
    _microturbine_three_phase_meter1_extra_output_bus__out[2] = _microturbine_three_phase_meter1_zero__out;
    _microturbine_three_phase_meter1_extra_output_bus__out[3] = _microturbine_three_phase_meter1_zero__out;
    _microturbine_three_phase_meter1_extra_output_bus__out[4] = _microturbine_three_phase_meter1_zero__out;
    _microturbine_three_phase_meter1_extra_output_bus__out[5] = _microturbine_three_phase_meter1_zero__out;
    _microturbine_three_phase_meter1_extra_output_bus__out[6] = _microturbine_three_phase_meter1_zero__out;
    _microturbine_three_phase_meter1_extra_output_bus__out[7] = _microturbine_three_phase_meter1_zero__out;
    _microturbine_three_phase_meter1_extra_output_bus__out[8] = _microturbine_three_phase_meter1_zero__out;
    _microturbine_three_phase_meter1_extra_output_bus__out[9] = _microturbine_three_phase_meter1_zero__out;
    _microturbine_three_phase_meter1_extra_output_bus__out[10] = _microturbine_three_phase_meter1_zero__out;
    _microturbine_three_phase_meter1_extra_output_bus__out[11] = _microturbine_three_phase_meter1_zero__out;
    // Generated from the component: Microturbine.Synchonous Machine.w_m.Product1
    _microturbine_synchonous_machine_w_m_product1__out = (_microturbine_synchonous_machine_w_m_gain1__out * _microturbine_synchonous_machine_w_m_integrator1__out);
    // Generated from the component: Microturbine.Synchonous Machine.C function1
    _microturbine_synchonous_machine_c_function1__in = _microturbine_synchonous_machine_gain1__out;
    _microturbine_synchonous_machine_c_function1__out = _microturbine_synchonous_machine_c_function1__var;
    // Generated from the component: Microturbine.Synchonous Machine.V_dG2.Product3
    _microturbine_synchonous_machine_v_dg2_product3__out = (_microturbine_synchonous_machine_gain1__out) * 1.0 / (_microturbine_synchonous_machine_v_dg2_constant2__out);
    // Generated from the component: Microturbine.Synchonous Machine.V_qG2.Product3
    _microturbine_synchonous_machine_v_qg2_product3__out = (_microturbine_synchonous_machine_gain1__out) * 1.0 / (_microturbine_synchonous_machine_v_qg2_constant2__out);
    // Generated from the component: Microturbine.Synchonous Machine.Rate Transition2.Input
    _microturbine_synchonous_machine_rate_transition2_output__out = _microturbine_synchonous_machine_gain17__out;
    // Generated from the component: Microturbine.Three-phase Meter1.POWER_P
    HIL_OutAO(0x4022, (float)_microturbine_three_phase_meter1_power_meter__Pdc);
    // Generated from the component: Microturbine.Three-phase Meter1.POWER_PF
    HIL_OutAO(0x4023, (float)_microturbine_three_phase_meter1_power_meter__k_factor);
    // Generated from the component: Microturbine.Three-phase Meter1.POWER_Q
    HIL_OutAO(0x4024, (float)_microturbine_three_phase_meter1_power_meter__Qdc);
    // Generated from the component: Microturbine.Three-phase Meter1.POWER_S
    HIL_OutAO(0x4025, (float)_microturbine_three_phase_meter1_power_meter__apparent);
    // Generated from the component: Microturbine.Three-phase Meter1.output_bus
    _microturbine_three_phase_meter1_output_bus__out[0] = _microturbine_three_phase_meter1_van_va1__out;
    _microturbine_three_phase_meter1_output_bus__out[1] = _microturbine_three_phase_meter1_vbn_va1__out;
    _microturbine_three_phase_meter1_output_bus__out[2] = _microturbine_three_phase_meter1_vcn_va1__out;
    _microturbine_three_phase_meter1_output_bus__out[3] = _microturbine_three_phase_meter1_zero__out;
    _microturbine_three_phase_meter1_output_bus__out[4] = _microturbine_three_phase_meter1_zero__out;
    _microturbine_three_phase_meter1_output_bus__out[5] = _microturbine_three_phase_meter1_zero__out;
    _microturbine_three_phase_meter1_output_bus__out[6] = _microturbine_three_phase_meter1_ia_ia1__out;
    _microturbine_three_phase_meter1_output_bus__out[7] = _microturbine_three_phase_meter1_ib_ia1__out;
    _microturbine_three_phase_meter1_output_bus__out[8] = _microturbine_three_phase_meter1_ic_ia1__out;
    _microturbine_three_phase_meter1_output_bus__out[9] = _microturbine_three_phase_meter1_zero__out;
    _microturbine_three_phase_meter1_output_bus__out[10] = _microturbine_three_phase_meter1_zero__out;
    _microturbine_three_phase_meter1_output_bus__out[11] = _microturbine_three_phase_meter1_zero__out;
    _microturbine_three_phase_meter1_output_bus__out[12] = _microturbine_three_phase_meter1_zero__out;
    _microturbine_three_phase_meter1_output_bus__out[13] = _microturbine_three_phase_meter1_zero__out;
    _microturbine_three_phase_meter1_output_bus__out[14] = _microturbine_three_phase_meter1_zero__out;
    _microturbine_three_phase_meter1_output_bus__out[15] = _microturbine_three_phase_meter1_zero__out;
    _microturbine_three_phase_meter1_output_bus__out[16] = _microturbine_three_phase_meter1_zero__out;
    _microturbine_three_phase_meter1_output_bus__out[17] = _microturbine_three_phase_meter1_zero__out;
    _microturbine_three_phase_meter1_output_bus__out[18] = _microturbine_three_phase_meter1_zero__out;
    _microturbine_three_phase_meter1_output_bus__out[19] = _microturbine_three_phase_meter1_zero__out;
    _microturbine_three_phase_meter1_output_bus__out[20] = _microturbine_three_phase_meter1_zero__out;
    _microturbine_three_phase_meter1_output_bus__out[21] = _microturbine_three_phase_meter1_zero__out;
    _microturbine_three_phase_meter1_output_bus__out[22] = _microturbine_three_phase_meter1_power_meter__Pdc;
    _microturbine_three_phase_meter1_output_bus__out[23] = _microturbine_three_phase_meter1_power_meter__Qdc;
    _microturbine_three_phase_meter1_output_bus__out[24] = _microturbine_three_phase_meter1_power_meter__apparent;
    _microturbine_three_phase_meter1_output_bus__out[25] = _microturbine_three_phase_meter1_power_meter__k_factor;
    _microturbine_three_phase_meter1_output_bus__out[26] = _microturbine_three_phase_meter1_zero__out;
    _microturbine_three_phase_meter1_output_bus__out[27] = _microturbine_three_phase_meter1_zero__out;
    _microturbine_three_phase_meter1_output_bus__out[28] = _microturbine_three_phase_meter1_zero__out;
    _microturbine_three_phase_meter1_output_bus__out[29] = _microturbine_three_phase_meter1_zero__out;
    // Generated from the component: Microturbine.Three-phase Meter1.extra_out
    // Generated from the component: Microturbine.Synchonous Machine.abc to qd.confine phase
    _microturbine_synchonous_machine_abc_to_qd_confine_phase__in = _microturbine_synchonous_machine_c_function1__out;
    _microturbine_synchonous_machine_abc_to_qd_confine_phase__x = _microturbine_synchonous_machine_abc_to_qd_confine_phase__in / 6.283185307179586;
    _microturbine_synchonous_machine_abc_to_qd_confine_phase__floor_in = floor(_microturbine_synchonous_machine_abc_to_qd_confine_phase__x);
    _microturbine_synchonous_machine_abc_to_qd_confine_phase__out = _microturbine_synchonous_machine_abc_to_qd_confine_phase__in - (6.283185307179586 * _microturbine_synchonous_machine_abc_to_qd_confine_phase__floor_in);
    // Generated from the component: Microturbine.Synchonous Machine.qd to abc.confine phase
    _microturbine_synchonous_machine_qd_to_abc_confine_phase__in = _microturbine_synchonous_machine_c_function1__out;
    _microturbine_synchonous_machine_qd_to_abc_confine_phase__x = _microturbine_synchonous_machine_qd_to_abc_confine_phase__in / 6.283185307179586;
    _microturbine_synchonous_machine_qd_to_abc_confine_phase__floor_in = floor(_microturbine_synchonous_machine_qd_to_abc_confine_phase__x);
    _microturbine_synchonous_machine_qd_to_abc_confine_phase__out = _microturbine_synchonous_machine_qd_to_abc_confine_phase__in - (6.283185307179586 * _microturbine_synchonous_machine_qd_to_abc_confine_phase__floor_in);
    // Generated from the component: Microturbine.Three-phase Meter1.Out
    // Generated from the component: Microturbine.Synchonous Machine.abc to qd.Sum2
    _microturbine_synchonous_machine_abc_to_qd_sum2__out = _microturbine_synchonous_machine_abc_to_qd_confine_phase__out - _microturbine_synchonous_machine_abc_to_qd_constant2__out;
    // Generated from the component: Microturbine.Synchonous Machine.abc to qd.Sum4
    _microturbine_synchonous_machine_abc_to_qd_sum4__out = _microturbine_synchonous_machine_abc_to_qd_confine_phase__out + _microturbine_synchonous_machine_abc_to_qd_constant3__out;
    // Generated from the component: Microturbine.Synchonous Machine.abc to qd.Trigonometric function3
    _microturbine_synchonous_machine_abc_to_qd_trigonometric_function3__out = cos(_microturbine_synchonous_machine_abc_to_qd_confine_phase__out);
    // Generated from the component: Microturbine.Synchonous Machine.abc to qd.Trigonometric function5
    _microturbine_synchonous_machine_abc_to_qd_trigonometric_function5__out = sin(_microturbine_synchonous_machine_abc_to_qd_confine_phase__out);
    // Generated from the component: Microturbine.Synchonous Machine.qd to abc.Sum2
    _microturbine_synchonous_machine_qd_to_abc_sum2__out = _microturbine_synchonous_machine_qd_to_abc_confine_phase__out - _microturbine_synchonous_machine_qd_to_abc_constant2__out;
    // Generated from the component: Microturbine.Synchonous Machine.qd to abc.Sum4
    _microturbine_synchonous_machine_qd_to_abc_sum4__out = _microturbine_synchonous_machine_qd_to_abc_confine_phase__out + _microturbine_synchonous_machine_qd_to_abc_constant3__out;
    // Generated from the component: Microturbine.Synchonous Machine.qd to abc.Trigonometric function2
    _microturbine_synchonous_machine_qd_to_abc_trigonometric_function2__out = sin(_microturbine_synchonous_machine_qd_to_abc_confine_phase__out);
    // Generated from the component: Microturbine.Synchonous Machine.qd to abc.Trigonometric function3
    _microturbine_synchonous_machine_qd_to_abc_trigonometric_function3__out = cos(_microturbine_synchonous_machine_qd_to_abc_confine_phase__out);
    // Generated from the component: Microturbine.Synchonous Machine.abc to qd.Trigonometric function2
    _microturbine_synchonous_machine_abc_to_qd_trigonometric_function2__out = cos(_microturbine_synchonous_machine_abc_to_qd_sum2__out);
    // Generated from the component: Microturbine.Synchonous Machine.abc to qd.Trigonometric function6
    _microturbine_synchonous_machine_abc_to_qd_trigonometric_function6__out = sin(_microturbine_synchonous_machine_abc_to_qd_sum2__out);
    // Generated from the component: Microturbine.Synchonous Machine.abc to qd.Trigonometric function4
    _microturbine_synchonous_machine_abc_to_qd_trigonometric_function4__out = cos(_microturbine_synchonous_machine_abc_to_qd_sum4__out);
    // Generated from the component: Microturbine.Synchonous Machine.abc to qd.Trigonometric function7
    _microturbine_synchonous_machine_abc_to_qd_trigonometric_function7__out = sin(_microturbine_synchonous_machine_abc_to_qd_sum4__out);
    // Generated from the component: Microturbine.Synchonous Machine.abc to qd.Product1
    _microturbine_synchonous_machine_abc_to_qd_product1__out = (_microturbine_synchonous_machine_ia1_ia1__out * _microturbine_synchonous_machine_abc_to_qd_trigonometric_function3__out);
    // Generated from the component: Microturbine.Synchonous Machine.abc to qd.Product4
    _microturbine_synchonous_machine_abc_to_qd_product4__out = (_microturbine_synchonous_machine_ia1_ia1__out * _microturbine_synchonous_machine_abc_to_qd_trigonometric_function5__out);
    // Generated from the component: Microturbine.Synchonous Machine.qd to abc.Trigonometric function4
    _microturbine_synchonous_machine_qd_to_abc_trigonometric_function4__out = cos(_microturbine_synchonous_machine_qd_to_abc_sum2__out);
    // Generated from the component: Microturbine.Synchonous Machine.qd to abc.Trigonometric function5
    _microturbine_synchonous_machine_qd_to_abc_trigonometric_function5__out = sin(_microturbine_synchonous_machine_qd_to_abc_sum2__out);
    // Generated from the component: Microturbine.Synchonous Machine.qd to abc.Trigonometric function6
    _microturbine_synchonous_machine_qd_to_abc_trigonometric_function6__out = cos(_microturbine_synchonous_machine_qd_to_abc_sum4__out);
    // Generated from the component: Microturbine.Synchonous Machine.qd to abc.Trigonometric function7
    _microturbine_synchonous_machine_qd_to_abc_trigonometric_function7__out = sin(_microturbine_synchonous_machine_qd_to_abc_sum4__out);
    // Generated from the component: Microturbine.Synchonous Machine.abc to qd.Product2
    _microturbine_synchonous_machine_abc_to_qd_product2__out = (_microturbine_synchonous_machine_ib1_ia1__out * _microturbine_synchonous_machine_abc_to_qd_trigonometric_function2__out);
    // Generated from the component: Microturbine.Synchonous Machine.abc to qd.Product5
    _microturbine_synchonous_machine_abc_to_qd_product5__out = (_microturbine_synchonous_machine_ib1_ia1__out * _microturbine_synchonous_machine_abc_to_qd_trigonometric_function6__out);
    // Generated from the component: Microturbine.Synchonous Machine.abc to qd.Product3
    _microturbine_synchonous_machine_abc_to_qd_product3__out = (_microturbine_synchonous_machine_ic1_ia1__out * _microturbine_synchonous_machine_abc_to_qd_trigonometric_function4__out);
    // Generated from the component: Microturbine.Synchonous Machine.abc to qd.Product6
    _microturbine_synchonous_machine_abc_to_qd_product6__out = (_microturbine_synchonous_machine_ic1_ia1__out * _microturbine_synchonous_machine_abc_to_qd_trigonometric_function7__out);
    // Generated from the component: Microturbine.Synchonous Machine.abc to qd.Sum3
    _microturbine_synchonous_machine_abc_to_qd_sum3__out = _microturbine_synchonous_machine_abc_to_qd_product1__out + _microturbine_synchonous_machine_abc_to_qd_product2__out + _microturbine_synchonous_machine_abc_to_qd_product3__out;
    // Generated from the component: Microturbine.Synchonous Machine.abc to qd.Sum5
    _microturbine_synchonous_machine_abc_to_qd_sum5__out = _microturbine_synchonous_machine_abc_to_qd_product4__out + _microturbine_synchonous_machine_abc_to_qd_product5__out + _microturbine_synchonous_machine_abc_to_qd_product6__out;
    // Generated from the component: Microturbine.Synchonous Machine.abc to qd.Gain1
    _microturbine_synchonous_machine_abc_to_qd_gain1__out = 0.6666666666666666 * _microturbine_synchonous_machine_abc_to_qd_sum3__out;
    // Generated from the component: Microturbine.Synchonous Machine.abc to qd.Gain2
    _microturbine_synchonous_machine_abc_to_qd_gain2__out = 0.6666666666666666 * _microturbine_synchonous_machine_abc_to_qd_sum5__out;
    // Generated from the component: Microturbine.Synchonous Machine.Gain10
    _microturbine_synchonous_machine_gain10__out = 0.00482899406434398 * _microturbine_synchonous_machine_abc_to_qd_gain1__out;
    // Generated from the component: Microturbine.Synchonous Machine.Gain11
    _microturbine_synchonous_machine_gain11__out = 0.00482899406434398 * _microturbine_synchonous_machine_abc_to_qd_gain2__out;
    // Generated from the component: Microturbine.Synchonous Machine.I_q_a1
    HIL_OutAO(0x401d, (float)_microturbine_synchonous_machine_gain10__out);
    // Generated from the component: Microturbine.Synchonous Machine.Phi_2q_a.Product1
    _microturbine_synchonous_machine_phi_2q_a_product1__out = (_microturbine_synchonous_machine_phi_2q_a_constant1__out * _microturbine_synchonous_machine_gain10__out);
    // Generated from the component: Microturbine.Synchonous Machine.Phi_q_a 2.Gain1
    _microturbine_synchonous_machine_phi_q_a_2_gain1__out = 0.2597484888268292 * _microturbine_synchonous_machine_gain10__out;
    // Generated from the component: Microturbine.Synchonous Machine.E_qp.Product3
    _microturbine_synchonous_machine_e_qp_product3__out = (_microturbine_synchonous_machine_e_qp_constant3__out * _microturbine_synchonous_machine_gain11__out);
    // Generated from the component: Microturbine.Synchonous Machine.I_d_a1
    HIL_OutAO(0x401c, (float)_microturbine_synchonous_machine_gain11__out);
    // Generated from the component: Microturbine.Synchonous Machine.Phi_1d_a.Product1
    _microturbine_synchonous_machine_phi_1d_a_product1__out = (_microturbine_synchonous_machine_phi_1d_a_constant1__out * _microturbine_synchonous_machine_gain11__out);
    // Generated from the component: Microturbine.Synchonous Machine.Phi_d_a 2.Gain1
    _microturbine_synchonous_machine_phi_d_a_2_gain1__out = 0.4274244930105489 * _microturbine_synchonous_machine_gain11__out;
    // Generated from the component: Microturbine.Synchonous Machine.Phi_2q_a.Sum1
    _microturbine_synchonous_machine_phi_2q_a_sum1__out =  - _microturbine_synchonous_machine_phi_2q_a_integrator1__out - _microturbine_synchonous_machine_phi_2q_a_product1__out;
    // Generated from the component: Microturbine.Synchonous Machine.Phi_q_a 2.Sum1
    _microturbine_synchonous_machine_phi_q_a_2_sum1__out =  - _microturbine_synchonous_machine_phi_q_a_2_gain1__out + _microturbine_synchonous_machine_phi_q_a_2_product2__out;
    // Generated from the component: Microturbine.Synchonous Machine.E_qp.Sum3
    _microturbine_synchonous_machine_e_qp_sum3__out = _microturbine_synchonous_machine_phi_1d_a_integrator1__out + _microturbine_synchonous_machine_e_qp_product3__out - _microturbine_synchonous_machine_e_qp_integrator1__out;
    // Generated from the component: Microturbine.Synchonous Machine.Phi_1d_a.Sum1
    _microturbine_synchonous_machine_phi_1d_a_sum1__out =  - _microturbine_synchonous_machine_phi_1d_a_integrator1__out + _microturbine_synchonous_machine_e_qp_integrator1__out - _microturbine_synchonous_machine_phi_1d_a_product1__out;
    // Generated from the component: Microturbine.Synchonous Machine.Phi_d_a 2.Sum1
    _microturbine_synchonous_machine_phi_d_a_2_sum1__out =  - _microturbine_synchonous_machine_phi_d_a_2_gain1__out + _microturbine_synchonous_machine_phi_d_a_2_product2__out + _microturbine_synchonous_machine_phi_d_a_2_product1__out;
    // Generated from the component: Microturbine.Synchonous Machine.Phi_2q_a.Gain1
    _microturbine_synchonous_machine_phi_2q_a_gain1__out = 4.898478952953661 * _microturbine_synchonous_machine_phi_2q_a_sum1__out;
    // Generated from the component: Microturbine.Synchonous Machine.Phi_q_a_M
    HIL_OutAO(0x4021, (float)_microturbine_synchonous_machine_phi_q_a_2_sum1__out);
    // Generated from the component: Microturbine.Synchonous Machine.V_dG2.Product2
    _microturbine_synchonous_machine_v_dg2_product2__out = (_microturbine_synchonous_machine_v_dg2_product3__out * _microturbine_synchonous_machine_phi_q_a_2_sum1__out);
    // Generated from the component: Microturbine.Synchonous Machine.V_qG2.Gain1
    _microturbine_synchonous_machine_v_qg2_gain1__out = 0.0026525823848649226 * _microturbine_synchonous_machine_phi_q_a_2_sum1__out;
    // Generated from the component: Microturbine.Synchonous Machine.w_m.Product2
    _microturbine_synchonous_machine_w_m_product2__out = (_microturbine_synchonous_machine_phi_q_a_2_sum1__out * _microturbine_synchonous_machine_gain11__out);
    // Generated from the component: Microturbine.Synchonous Machine.E_qp.Product2
    _microturbine_synchonous_machine_e_qp_product2__out = (_microturbine_synchonous_machine_e_qp_constant2__out * _microturbine_synchonous_machine_e_qp_sum3__out);
    // Generated from the component: Microturbine.Synchonous Machine.Phi_1d_a.Gain1
    _microturbine_synchonous_machine_phi_1d_a_gain1__out = 25.623029273849628 * _microturbine_synchonous_machine_phi_1d_a_sum1__out;
    // Generated from the component: Microturbine.Synchonous Machine.Phi_d_a_M
    HIL_OutAO(0x4020, (float)_microturbine_synchonous_machine_phi_d_a_2_sum1__out);
    // Generated from the component: Microturbine.Synchonous Machine.V_dG2.Gain1
    _microturbine_synchonous_machine_v_dg2_gain1__out = 0.0026525823848649226 * _microturbine_synchonous_machine_phi_d_a_2_sum1__out;
    // Generated from the component: Microturbine.Synchonous Machine.V_qG2.Product2
    _microturbine_synchonous_machine_v_qg2_product2__out = (_microturbine_synchonous_machine_v_qg2_product3__out * _microturbine_synchonous_machine_phi_d_a_2_sum1__out);
    // Generated from the component: Microturbine.Synchonous Machine.w_m.Product3
    _microturbine_synchonous_machine_w_m_product3__out = (_microturbine_synchonous_machine_phi_d_a_2_sum1__out * _microturbine_synchonous_machine_gain10__out);
    // Generated from the component: Microturbine.Synchonous Machine.V_qG2.Discrete Transfer Function1
    _microturbine_synchonous_machine_v_qg2_discrete_transfer_function1__a_sum = 0.0f;
    _microturbine_synchonous_machine_v_qg2_discrete_transfer_function1__b_sum = 0.0f;
    _microturbine_synchonous_machine_v_qg2_discrete_transfer_function1__delay_line_in = 0.0f;
    for (_microturbine_synchonous_machine_v_qg2_discrete_transfer_function1__i = 0; _microturbine_synchonous_machine_v_qg2_discrete_transfer_function1__i < 1; _microturbine_synchonous_machine_v_qg2_discrete_transfer_function1__i++) {
        _microturbine_synchonous_machine_v_qg2_discrete_transfer_function1__b_sum += _microturbine_synchonous_machine_v_qg2_discrete_transfer_function1__b_coeff[_microturbine_synchonous_machine_v_qg2_discrete_transfer_function1__i + 1] * _microturbine_synchonous_machine_v_qg2_discrete_transfer_function1__states[_microturbine_synchonous_machine_v_qg2_discrete_transfer_function1__i];
    }
    _microturbine_synchonous_machine_v_qg2_discrete_transfer_function1__a_sum += _microturbine_synchonous_machine_v_qg2_discrete_transfer_function1__states[0] * _microturbine_synchonous_machine_v_qg2_discrete_transfer_function1__a_coeff[1];
    _microturbine_synchonous_machine_v_qg2_discrete_transfer_function1__delay_line_in = _microturbine_synchonous_machine_v_qg2_gain1__out - _microturbine_synchonous_machine_v_qg2_discrete_transfer_function1__a_sum;
    _microturbine_synchonous_machine_v_qg2_discrete_transfer_function1__b_sum += _microturbine_synchonous_machine_v_qg2_discrete_transfer_function1__b_coeff[0] * _microturbine_synchonous_machine_v_qg2_discrete_transfer_function1__delay_line_in;
    _microturbine_synchonous_machine_v_qg2_discrete_transfer_function1__out = _microturbine_synchonous_machine_v_qg2_discrete_transfer_function1__b_sum;
    // Generated from the component: Microturbine.Synchonous Machine.E_qp.Sum2
    _microturbine_synchonous_machine_e_qp_sum2__out = _microturbine_synchonous_machine_gain11__out - _microturbine_synchonous_machine_e_qp_product2__out;
    // Generated from the component: Microturbine.Synchonous Machine.V_dG2.Discrete Transfer Function1
    _microturbine_synchonous_machine_v_dg2_discrete_transfer_function1__a_sum = 0.0f;
    _microturbine_synchonous_machine_v_dg2_discrete_transfer_function1__b_sum = 0.0f;
    _microturbine_synchonous_machine_v_dg2_discrete_transfer_function1__delay_line_in = 0.0f;
    for (_microturbine_synchonous_machine_v_dg2_discrete_transfer_function1__i = 0; _microturbine_synchonous_machine_v_dg2_discrete_transfer_function1__i < 1; _microturbine_synchonous_machine_v_dg2_discrete_transfer_function1__i++) {
        _microturbine_synchonous_machine_v_dg2_discrete_transfer_function1__b_sum += _microturbine_synchonous_machine_v_dg2_discrete_transfer_function1__b_coeff[_microturbine_synchonous_machine_v_dg2_discrete_transfer_function1__i + 1] * _microturbine_synchonous_machine_v_dg2_discrete_transfer_function1__states[_microturbine_synchonous_machine_v_dg2_discrete_transfer_function1__i];
    }
    _microturbine_synchonous_machine_v_dg2_discrete_transfer_function1__a_sum += _microturbine_synchonous_machine_v_dg2_discrete_transfer_function1__states[0] * _microturbine_synchonous_machine_v_dg2_discrete_transfer_function1__a_coeff[1];
    _microturbine_synchonous_machine_v_dg2_discrete_transfer_function1__delay_line_in = _microturbine_synchonous_machine_v_dg2_gain1__out - _microturbine_synchonous_machine_v_dg2_discrete_transfer_function1__a_sum;
    _microturbine_synchonous_machine_v_dg2_discrete_transfer_function1__b_sum += _microturbine_synchonous_machine_v_dg2_discrete_transfer_function1__b_coeff[0] * _microturbine_synchonous_machine_v_dg2_discrete_transfer_function1__delay_line_in;
    _microturbine_synchonous_machine_v_dg2_discrete_transfer_function1__out = _microturbine_synchonous_machine_v_dg2_discrete_transfer_function1__b_sum;
    // Generated from the component: Microturbine.Synchonous Machine.w_m.Sum1
    _microturbine_synchonous_machine_w_m_sum1__out = _microturbine_synchonous_machine_w_m_product3__out - _microturbine_synchonous_machine_w_m_product2__out;
    // Generated from the component: Microturbine.Synchonous Machine.V_qG2.Sum2
    _microturbine_synchonous_machine_v_qg2_sum2__out = _microturbine_synchonous_machine_v_qg2_product2__out + _microturbine_synchonous_machine_v_qg2_discrete_transfer_function1__out;
    // Generated from the component: Microturbine.Synchonous Machine.E_qp.Product1
    _microturbine_synchonous_machine_e_qp_product1__out = (_microturbine_synchonous_machine_e_qp_constant1__out * _microturbine_synchonous_machine_e_qp_sum2__out);
    // Generated from the component: Microturbine.Synchonous Machine.V_dG2.Sum2
    _microturbine_synchonous_machine_v_dg2_sum2__out =  - _microturbine_synchonous_machine_v_dg2_product2__out + _microturbine_synchonous_machine_v_dg2_discrete_transfer_function1__out;
    // Generated from the component: Microturbine.Synchonous Machine.w_m.Sum2
    _microturbine_synchonous_machine_w_m_sum2__out = _microturbine_synchonous_machine_w_m_gain16__out - _microturbine_synchonous_machine_w_m_sum1__out - _microturbine_synchonous_machine_w_m_product1__out;
    // Generated from the component: Microturbine.Synchonous Machine.Eq_phi
    HIL_OutAO(0x401b, (float)_microturbine_synchonous_machine_v_qg2_sum2__out);
    // Generated from the component: Microturbine.Synchonous Machine.Gain8
    _microturbine_synchonous_machine_gain8__out = 11267.652816802622 * _microturbine_synchonous_machine_v_qg2_sum2__out;
    // Generated from the component: Microturbine.Synchonous Machine.E_qp.Sum1
    _microturbine_synchonous_machine_e_qp_sum1__out =  - _microturbine_synchonous_machine_e_qp_integrator1__out - _microturbine_synchonous_machine_e_qp_product1__out + _microturbine_synchonous_machine_e_qp_gain2__out;
    // Generated from the component: Microturbine.Synchonous Machine.Ed_phi
    HIL_OutAO(0x401a, (float)_microturbine_synchonous_machine_v_dg2_sum2__out);
    // Generated from the component: Microturbine.Synchonous Machine.Gain9
    _microturbine_synchonous_machine_gain9__out = 11267.652816802622 * _microturbine_synchonous_machine_v_dg2_sum2__out;
    // Generated from the component: Microturbine.Synchonous Machine.w_m.Gain2
    _microturbine_synchonous_machine_w_m_gain2__out = 135.88203817864417 * _microturbine_synchonous_machine_w_m_sum2__out;
    // Generated from the component: Microturbine.Synchonous Machine.qd to abc.Product1
    _microturbine_synchonous_machine_qd_to_abc_product1__out = (_microturbine_synchonous_machine_gain8__out * _microturbine_synchonous_machine_qd_to_abc_trigonometric_function3__out);
    // Generated from the component: Microturbine.Synchonous Machine.qd to abc.Product3
    _microturbine_synchonous_machine_qd_to_abc_product3__out = (_microturbine_synchonous_machine_gain8__out * _microturbine_synchonous_machine_qd_to_abc_trigonometric_function4__out);
    // Generated from the component: Microturbine.Synchonous Machine.qd to abc.Product5
    _microturbine_synchonous_machine_qd_to_abc_product5__out = (_microturbine_synchonous_machine_gain8__out * _microturbine_synchonous_machine_qd_to_abc_trigonometric_function6__out);
    // Generated from the component: Microturbine.Synchonous Machine.E_qp.Gain1
    _microturbine_synchonous_machine_e_qp_gain1__out = 0.27142857142857146 * _microturbine_synchonous_machine_e_qp_sum1__out;
    // Generated from the component: Microturbine.Synchonous Machine.qd to abc.Product2
    _microturbine_synchonous_machine_qd_to_abc_product2__out = (_microturbine_synchonous_machine_gain9__out * _microturbine_synchonous_machine_qd_to_abc_trigonometric_function2__out);
    // Generated from the component: Microturbine.Synchonous Machine.qd to abc.Product4
    _microturbine_synchonous_machine_qd_to_abc_product4__out = (_microturbine_synchonous_machine_gain9__out * _microturbine_synchonous_machine_qd_to_abc_trigonometric_function5__out);
    // Generated from the component: Microturbine.Synchonous Machine.qd to abc.Product6
    _microturbine_synchonous_machine_qd_to_abc_product6__out = (_microturbine_synchonous_machine_gain9__out * _microturbine_synchonous_machine_qd_to_abc_trigonometric_function7__out);
    // Generated from the component: Microturbine.Synchonous Machine.qd to abc.Sum3
    _microturbine_synchonous_machine_qd_to_abc_sum3__out = _microturbine_synchonous_machine_qd_to_abc_product1__out + _microturbine_synchonous_machine_qd_to_abc_product2__out;
    // Generated from the component: Microturbine.Synchonous Machine.qd to abc.Sum5
    _microturbine_synchonous_machine_qd_to_abc_sum5__out = _microturbine_synchonous_machine_qd_to_abc_product3__out + _microturbine_synchonous_machine_qd_to_abc_product4__out;
    // Generated from the component: Microturbine.Synchonous Machine.qd to abc.Sum6
    _microturbine_synchonous_machine_qd_to_abc_sum6__out = _microturbine_synchonous_machine_qd_to_abc_product5__out + _microturbine_synchonous_machine_qd_to_abc_product6__out;
    // Generated from the component: Microturbine.Synchonous Machine.Ea1.Vs1
    HIL_OutFloat(149684224, (float) _microturbine_synchonous_machine_qd_to_abc_sum3__out);
    // Generated from the component: Microturbine.Synchonous Machine.Eb1.Vs1
    HIL_OutFloat(149684225, (float) _microturbine_synchonous_machine_qd_to_abc_sum5__out);
    // Generated from the component: Microturbine.Synchonous Machine.Ec1.Vs1
    HIL_OutFloat(149684226, (float) _microturbine_synchonous_machine_qd_to_abc_sum6__out);
    //@cmp.out.block.end
    //////////////////////////////////////////////////////////////////////////
    // Update block
    //////////////////////////////////////////////////////////////////////////
    //@cmp.update.block.start
    // Generated from the component: Microturbine.Synchonous Machine.E_qp.Integrator1
    _microturbine_synchonous_machine_e_qp_integrator1__state += _microturbine_synchonous_machine_e_qp_gain1__out * 2e-05;
    // Generated from the component: Microturbine.Synchonous Machine.Phi_1d_a.Integrator1
    _microturbine_synchonous_machine_phi_1d_a_integrator1__state += _microturbine_synchonous_machine_phi_1d_a_gain1__out * 2e-05;
    // Generated from the component: Microturbine.Synchonous Machine.Phi_2q_a.Integrator1
    _microturbine_synchonous_machine_phi_2q_a_integrator1__state += _microturbine_synchonous_machine_phi_2q_a_gain1__out * 2e-05;
    // Generated from the component: Microturbine.Synchonous Machine.w_m.Integrator1
    _microturbine_synchonous_machine_w_m_integrator1__state += _microturbine_synchonous_machine_w_m_gain2__out * 2e-05;
    // Generated from the component: Microturbine.Synchonous Machine.C function1
    _microturbine_synchonous_machine_c_function1__var += (2e-05 * _microturbine_synchonous_machine_c_function1__in);
    // Generated from the component: Microturbine.Synchonous Machine.abc to qd.confine phase
    // Generated from the component: Microturbine.Synchonous Machine.qd to abc.confine phase
    // Generated from the component: Microturbine.Synchonous Machine.V_qG2.Discrete Transfer Function1
    _microturbine_synchonous_machine_v_qg2_discrete_transfer_function1__states[0] = _microturbine_synchonous_machine_v_qg2_discrete_transfer_function1__delay_line_in;
    // Generated from the component: Microturbine.Synchonous Machine.V_dG2.Discrete Transfer Function1
    _microturbine_synchonous_machine_v_dg2_discrete_transfer_function1__states[0] = _microturbine_synchonous_machine_v_dg2_discrete_transfer_function1__delay_line_in;
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
    // Generated from the component: Microturbine.BE1-25A Synchronizer.Constant6
    // Generated from the component: Microturbine.BE1-25A Synchronizer.Constant7
    // Generated from the component: Microturbine.BE1-25A Synchronizer.Constant9
    // Generated from the component: Microturbine.BE1-25A Synchronizer.Unit Delay2
    _microturbine_be1_25a_synchronizer_unit_delay2__out = _microturbine_be1_25a_synchronizer_unit_delay2__state;
    // Generated from the component: Microturbine.BE1-25A Synchronizer.Unit Delay5
    _microturbine_be1_25a_synchronizer_unit_delay5__out = _microturbine_be1_25a_synchronizer_unit_delay5__state;
    // Generated from the component: Microturbine.BE1-25A Synchronizer.abc to qd.Constant2
    // Generated from the component: Microturbine.BE1-25A Synchronizer.abc to qd.Constant3
    // Generated from the component: Microturbine.BE1-25A Synchronizer.abc to qd1.Constant2
    // Generated from the component: Microturbine.BE1-25A Synchronizer.abc to qd1.Constant3
    // Generated from the component: Microturbine.CB_control.Constant1
    // Generated from the component: Microturbine.CB_control.Constant10
    // Generated from the component: Microturbine.CB_control.Constant11
    // Generated from the component: Microturbine.CB_control.Grid_Islanded
    _microturbine_cb_control_grid_islanded__out = XIo_InInt32(0x55000100);
    // Generated from the component: Microturbine.Connect MCB
    _microturbine_connect_mcb__out = XIo_InFloat(0x55000104);
    // Generated from the component: Microturbine.Connect MT
    _microturbine_connect_mt__out = XIo_InFloat(0x55000108);
    // Generated from the component: Microturbine.Constant1
    // Generated from the component: Microturbine.Constant2
    // Generated from the component: Microturbine.Ea1.Va1
    _microturbine_ea1_va1__out = (HIL_InFloat(0xc80000 + 0x6));
    // Generated from the component: Microturbine.Eb1.Va1
    _microturbine_eb1_va1__out = (HIL_InFloat(0xc80000 + 0x7));
    // Generated from the component: Microturbine.Ec1.Va1
    _microturbine_ec1_va1__out = (HIL_InFloat(0xc80000 + 0x8));
    // Generated from the component: Microturbine.Engine.Integrator1
    _microturbine_engine_integrator1__out = _microturbine_engine_integrator1__state;
    // Generated from the component: Microturbine.Exciter.Constant1
    // Generated from the component: Microturbine.Governor.AGC
    _microturbine_governor_agc__out = XIo_InFloat(0x5500010c);
    // Generated from the component: Microturbine.Governor.AGC offset
    // Generated from the component: Microturbine.Governor.Exciter Activation.Constant1
    // Generated from the component: Microturbine.Governor.Exciter Activation.Constant2
    // Generated from the component: Microturbine.Governor.Integrator1
    _microturbine_governor_integrator1__out = _microturbine_governor_integrator1__state;
    // Generated from the component: Microturbine.Synchonous Machine.Rate Transition2.Output
    // Generated from the component: Microturbine.Va_G1.Va1
    _microturbine_va_g1_va1__out = (HIL_InFloat(0xc80000 + 0xc));
    // Generated from the component: Microturbine.Vb_G1.Va1
    _microturbine_vb_g1_va1__out = (HIL_InFloat(0xc80000 + 0xd));
    // Generated from the component: Microturbine.Vc_G1.Va1
    _microturbine_vc_g1_va1__out = (HIL_InFloat(0xc80000 + 0xe));
    // Generated from the component: Microturbine.Vref
    _microturbine_vref__out = XIo_InFloat(0x55000110);
    // Generated from the component: Microturbine.wref
    _microturbine_wref__out = XIo_InFloat(0x55000114);
    // Generated from the component: Sinusoidal Source1
    _sinusoidal_source1__out = (1.0 * sin(2.0f * M_PI * _sinusoidal_source1__current_phase) + 0.0);
    // Generated from the component: Sinusoidal Source2
    _sinusoidal_source2__out = (1.0 * sin(2.0f * M_PI * _sinusoidal_source2__current_phase) + 0.0);
    // Generated from the component: Sinusoidal Source3
    _sinusoidal_source3__out = (1.0 * sin(2.0f * M_PI * _sinusoidal_source3__current_phase) + 0.0);
    // Generated from the component: grid_connect
    _grid_connect__out = XIo_InInt32(0x55000118);
    // Generated from the component: Microturbine.BE1-25A Synchronizer.abc to qd.Trigonometric function3
    _microturbine_be1_25a_synchronizer_abc_to_qd_trigonometric_function3__out = cos(_microturbine_be1_25a_synchronizer_unit_delay2__out);
    // Generated from the component: Microturbine.BE1-25A Synchronizer.abc to qd.Trigonometric function5
    _microturbine_be1_25a_synchronizer_abc_to_qd_trigonometric_function5__out = sin(_microturbine_be1_25a_synchronizer_unit_delay2__out);
    // Generated from the component: Microturbine.BE1-25A Synchronizer.abc to qd1.confine phase
    _microturbine_be1_25a_synchronizer_abc_to_qd1_confine_phase__in = _microturbine_be1_25a_synchronizer_unit_delay2__out;
    _microturbine_be1_25a_synchronizer_abc_to_qd1_confine_phase__x = _microturbine_be1_25a_synchronizer_abc_to_qd1_confine_phase__in / 6.283185307179586;
    _microturbine_be1_25a_synchronizer_abc_to_qd1_confine_phase__floor_in = floor(_microturbine_be1_25a_synchronizer_abc_to_qd1_confine_phase__x);
    _microturbine_be1_25a_synchronizer_abc_to_qd1_confine_phase__out = _microturbine_be1_25a_synchronizer_abc_to_qd1_confine_phase__in - (6.283185307179586 * _microturbine_be1_25a_synchronizer_abc_to_qd1_confine_phase__floor_in);
    // Generated from the component: Microturbine.BE1-25A Synchronizer.thetaPLL
    HIL_OutAO(0x4009, (float)_microturbine_be1_25a_synchronizer_unit_delay2__out);
    // Generated from the component: Microturbine.BE1-25A Synchronizer.Digital Probe1
    HIL_OutInt32(0xf00400, _microturbine_be1_25a_synchronizer_unit_delay5__out != 0x0);
    // Generated from the component: Microturbine.BE1-25A Synchronizer.Logical operator2
    _microturbine_be1_25a_synchronizer_logical_operator2__out = !_microturbine_be1_25a_synchronizer_unit_delay5__out;
    // Generated from the component: Microturbine.BE1-25A Synchronizer.abc to qd.Sum2
    _microturbine_be1_25a_synchronizer_abc_to_qd_sum2__out = _microturbine_be1_25a_synchronizer_unit_delay2__out - _microturbine_be1_25a_synchronizer_abc_to_qd_constant2__out;
    // Generated from the component: Microturbine.BE1-25A Synchronizer.abc to qd.Sum4
    _microturbine_be1_25a_synchronizer_abc_to_qd_sum4__out = _microturbine_be1_25a_synchronizer_unit_delay2__out + _microturbine_be1_25a_synchronizer_abc_to_qd_constant3__out;
    // Generated from the component: Microturbine.CB_control.Logical operator9
    _microturbine_cb_control_logical_operator9__out = !_microturbine_cb_control_grid_islanded__out;
    // Generated from the component: Microturbine.CB_control.Logical operator4
    _microturbine_cb_control_logical_operator4__out = !_microturbine_connect_mcb__out;
    // Generated from the component: Microturbine.CB_control.MCB ON
    HIL_OutInt32(0xf0040a, _microturbine_connect_mcb__out != 0x0);
    // Generated from the component: Termination1
    // Generated from the component: Microturbine.CB_control.Logical operator2
    _microturbine_cb_control_logical_operator2__out = _microturbine_connect_mt__out && _microturbine_connect_mcb__out ;
    // Generated from the component: Microturbine.Engine.Gain2
    _microturbine_engine_gain2__out = 18568.076694054456 * _microturbine_engine_integrator1__out;
    // Generated from the component: Microturbine.Governor.Sum11
    _microturbine_governor_sum11__out = _microturbine_governor_agc_offset__out + _microturbine_governor_agc__out;
    // Generated from the component: Microturbine.Engine.Sum1
    _microturbine_engine_sum1__out =  - _microturbine_engine_integrator1__out + _microturbine_governor_integrator1__out;
    // Generated from the component: Microturbine.Governor.P_sv
    HIL_OutAO(0x4017, (float)_microturbine_governor_integrator1__out);
    // Generated from the component: Microturbine.Gain1
    _microturbine_gain1__out = 0.20943951023931953 * _microturbine_synchonous_machine_rate_transition2_output__out;
    // Generated from the component: Microturbine.w_M
    HIL_OutAO(0x4026, (float)_microturbine_synchonous_machine_rate_transition2_output__out);
    // Generated from the component: Gain3
    _gain3__out = 11267.652816802622 * _sinusoidal_source1__out;
    // Generated from the component: Gain5
    _gain5__out = 11267.652816802622 * _sinusoidal_source2__out;
    // Generated from the component: Gain4
    _gain4__out = 11267.652816802622 * _sinusoidal_source3__out;
    // Generated from the component: Logical operator1
    _logical_operator1__out = !_grid_connect__out;
    // Generated from the component: S4.CTC_Wrapper
    if (_grid_connect__out == 0x0) {
        HIL_OutInt32(0x8240481, 0x0);
    }
    else {
        HIL_OutInt32(0x8240481, 0x1);
    }
    // Generated from the component: grid_connect ON
    HIL_OutInt32(0xf00410, _grid_connect__out != 0x0);
    // Generated from the component: Microturbine.BE1-25A Synchronizer.abc to qd.Product1
    _microturbine_be1_25a_synchronizer_abc_to_qd_product1__out = (_microturbine_va_g1_va1__out * _microturbine_be1_25a_synchronizer_abc_to_qd_trigonometric_function3__out);
    // Generated from the component: Microturbine.BE1-25A Synchronizer.abc to qd.Product4
    _microturbine_be1_25a_synchronizer_abc_to_qd_product4__out = (_microturbine_va_g1_va1__out * _microturbine_be1_25a_synchronizer_abc_to_qd_trigonometric_function5__out);
    // Generated from the component: Microturbine.BE1-25A Synchronizer.abc to qd1.Sum2
    _microturbine_be1_25a_synchronizer_abc_to_qd1_sum2__out = _microturbine_be1_25a_synchronizer_abc_to_qd1_confine_phase__out - _microturbine_be1_25a_synchronizer_abc_to_qd1_constant2__out;
    // Generated from the component: Microturbine.BE1-25A Synchronizer.abc to qd1.Sum4
    _microturbine_be1_25a_synchronizer_abc_to_qd1_sum4__out = _microturbine_be1_25a_synchronizer_abc_to_qd1_confine_phase__out + _microturbine_be1_25a_synchronizer_abc_to_qd1_constant3__out;
    // Generated from the component: Microturbine.BE1-25A Synchronizer.abc to qd1.Trigonometric function3
    _microturbine_be1_25a_synchronizer_abc_to_qd1_trigonometric_function3__out = cos(_microturbine_be1_25a_synchronizer_abc_to_qd1_confine_phase__out);
    // Generated from the component: Microturbine.BE1-25A Synchronizer.abc to qd1.Trigonometric function5
    _microturbine_be1_25a_synchronizer_abc_to_qd1_trigonometric_function5__out = sin(_microturbine_be1_25a_synchronizer_abc_to_qd1_confine_phase__out);
    // Generated from the component: Microturbine.BE1-25A Synchronizer.Digital Probe6
    HIL_OutInt32(0xf00404, _microturbine_be1_25a_synchronizer_logical_operator2__out != 0x0);
    // Generated from the component: Microturbine.BE1-25A Synchronizer.abc to qd.Trigonometric function2
    _microturbine_be1_25a_synchronizer_abc_to_qd_trigonometric_function2__out = cos(_microturbine_be1_25a_synchronizer_abc_to_qd_sum2__out);
    // Generated from the component: Microturbine.BE1-25A Synchronizer.abc to qd.Trigonometric function6
    _microturbine_be1_25a_synchronizer_abc_to_qd_trigonometric_function6__out = sin(_microturbine_be1_25a_synchronizer_abc_to_qd_sum2__out);
    // Generated from the component: Microturbine.BE1-25A Synchronizer.abc to qd.Trigonometric function4
    _microturbine_be1_25a_synchronizer_abc_to_qd_trigonometric_function4__out = cos(_microturbine_be1_25a_synchronizer_abc_to_qd_sum4__out);
    // Generated from the component: Microturbine.BE1-25A Synchronizer.abc to qd.Trigonometric function7
    _microturbine_be1_25a_synchronizer_abc_to_qd_trigonometric_function7__out = sin(_microturbine_be1_25a_synchronizer_abc_to_qd_sum4__out);
    // Generated from the component: Microturbine.CB_control.MCB OFF
    HIL_OutInt32(0xf00409, _microturbine_cb_control_logical_operator4__out != 0x0);
    // Generated from the component: Microturbine.Synchonous Machine.Rate Transition1.Input
    _microturbine_synchonous_machine_rate_transition1_output__out = _microturbine_engine_gain2__out;
    // Generated from the component: Microturbine.Governor.Gain37
    _microturbine_governor_gain37__out = 2.857142857142857e-07 * _microturbine_governor_sum11__out;
    // Generated from the component: Microturbine.Engine.Gain1
    _microturbine_engine_gain1__out = 41.666666666666664 * _microturbine_engine_sum1__out;
    // Generated from the component: Microturbine.BE1-25A Synchronizer.Gain4
    _microturbine_be1_25a_synchronizer_gain4__out = 0.0026525823848649226 * _microturbine_gain1__out;
    // Generated from the component: Microturbine.CB_control.Gain13
    _microturbine_cb_control_gain13__out = 0.0026525823848649226 * _microturbine_gain1__out;
    // Generated from the component: Microturbine.Gain18
    _microturbine_gain18__out = 0.5 * _microturbine_gain1__out;
    // Generated from the component: Va_G.Vs1
    HIL_OutFloat(137101312, (float) _gain3__out);
    // Generated from the component: Vb_G.Vs1
    HIL_OutFloat(137101313, (float) _gain5__out);
    // Generated from the component: Vc_G.Vs1
    HIL_OutFloat(137101314, (float) _gain4__out);
    // Generated from the component: grid_connect OFF
    HIL_OutInt32(0xf0040f, _logical_operator1__out != 0x0);
    // Generated from the component: Microturbine.BE1-25A Synchronizer.abc to qd1.Trigonometric function2
    _microturbine_be1_25a_synchronizer_abc_to_qd1_trigonometric_function2__out = cos(_microturbine_be1_25a_synchronizer_abc_to_qd1_sum2__out);
    // Generated from the component: Microturbine.BE1-25A Synchronizer.abc to qd1.Trigonometric function6
    _microturbine_be1_25a_synchronizer_abc_to_qd1_trigonometric_function6__out = sin(_microturbine_be1_25a_synchronizer_abc_to_qd1_sum2__out);
    // Generated from the component: Microturbine.BE1-25A Synchronizer.abc to qd1.Trigonometric function4
    _microturbine_be1_25a_synchronizer_abc_to_qd1_trigonometric_function4__out = cos(_microturbine_be1_25a_synchronizer_abc_to_qd1_sum4__out);
    // Generated from the component: Microturbine.BE1-25A Synchronizer.abc to qd1.Trigonometric function7
    _microturbine_be1_25a_synchronizer_abc_to_qd1_trigonometric_function7__out = sin(_microturbine_be1_25a_synchronizer_abc_to_qd1_sum4__out);
    // Generated from the component: Microturbine.BE1-25A Synchronizer.abc to qd1.Product1
    _microturbine_be1_25a_synchronizer_abc_to_qd1_product1__out = (_microturbine_ea1_va1__out * _microturbine_be1_25a_synchronizer_abc_to_qd1_trigonometric_function3__out);
    // Generated from the component: Microturbine.BE1-25A Synchronizer.abc to qd1.Product4
    _microturbine_be1_25a_synchronizer_abc_to_qd1_product4__out = (_microturbine_ea1_va1__out * _microturbine_be1_25a_synchronizer_abc_to_qd1_trigonometric_function5__out);
    // Generated from the component: Microturbine.BE1-25A Synchronizer.abc to qd.Product2
    _microturbine_be1_25a_synchronizer_abc_to_qd_product2__out = (_microturbine_vb_g1_va1__out * _microturbine_be1_25a_synchronizer_abc_to_qd_trigonometric_function2__out);
    // Generated from the component: Microturbine.BE1-25A Synchronizer.abc to qd.Product5
    _microturbine_be1_25a_synchronizer_abc_to_qd_product5__out = (_microturbine_vb_g1_va1__out * _microturbine_be1_25a_synchronizer_abc_to_qd_trigonometric_function6__out);
    // Generated from the component: Microturbine.BE1-25A Synchronizer.abc to qd.Product3
    _microturbine_be1_25a_synchronizer_abc_to_qd_product3__out = (_microturbine_vc_g1_va1__out * _microturbine_be1_25a_synchronizer_abc_to_qd_trigonometric_function4__out);
    // Generated from the component: Microturbine.BE1-25A Synchronizer.abc to qd.Product6
    _microturbine_be1_25a_synchronizer_abc_to_qd_product6__out = (_microturbine_vc_g1_va1__out * _microturbine_be1_25a_synchronizer_abc_to_qd_trigonometric_function7__out);
    // Generated from the component: Microturbine.Governor.Sum2
    _microturbine_governor_sum2__out = _microturbine_governor_gain37__out - _microturbine_governor_integrator1__out;
    // Generated from the component: Microturbine.BE1-25A Synchronizer.w_G
    HIL_OutAO(0x400d, (float)_microturbine_be1_25a_synchronizer_gain4__out);
    // Generated from the component: Microturbine.CB_control.Sum10
    _microturbine_cb_control_sum10__out =  - _microturbine_cb_control_constant1__out + _microturbine_cb_control_gain13__out;
    // Generated from the component: Microturbine.Governor.Gain28
    _microturbine_governor_gain28__out = 0.005305164769729845 * _microturbine_gain18__out;
    // Generated from the component: Microturbine.BE1-25A Synchronizer.abc to qd1.Product2
    _microturbine_be1_25a_synchronizer_abc_to_qd1_product2__out = (_microturbine_eb1_va1__out * _microturbine_be1_25a_synchronizer_abc_to_qd1_trigonometric_function2__out);
    // Generated from the component: Microturbine.BE1-25A Synchronizer.abc to qd1.Product5
    _microturbine_be1_25a_synchronizer_abc_to_qd1_product5__out = (_microturbine_eb1_va1__out * _microturbine_be1_25a_synchronizer_abc_to_qd1_trigonometric_function6__out);
    // Generated from the component: Microturbine.BE1-25A Synchronizer.abc to qd1.Product3
    _microturbine_be1_25a_synchronizer_abc_to_qd1_product3__out = (_microturbine_ec1_va1__out * _microturbine_be1_25a_synchronizer_abc_to_qd1_trigonometric_function4__out);
    // Generated from the component: Microturbine.BE1-25A Synchronizer.abc to qd1.Product6
    _microturbine_be1_25a_synchronizer_abc_to_qd1_product6__out = (_microturbine_ec1_va1__out * _microturbine_be1_25a_synchronizer_abc_to_qd1_trigonometric_function7__out);
    // Generated from the component: Microturbine.BE1-25A Synchronizer.abc to qd.Sum3
    _microturbine_be1_25a_synchronizer_abc_to_qd_sum3__out = _microturbine_be1_25a_synchronizer_abc_to_qd_product1__out + _microturbine_be1_25a_synchronizer_abc_to_qd_product2__out + _microturbine_be1_25a_synchronizer_abc_to_qd_product3__out;
    // Generated from the component: Microturbine.BE1-25A Synchronizer.abc to qd.Sum5
    _microturbine_be1_25a_synchronizer_abc_to_qd_sum5__out = _microturbine_be1_25a_synchronizer_abc_to_qd_product4__out + _microturbine_be1_25a_synchronizer_abc_to_qd_product5__out + _microturbine_be1_25a_synchronizer_abc_to_qd_product6__out;
    // Generated from the component: Microturbine.Governor.Gain29
    _microturbine_governor_gain29__out = 0.1 * _microturbine_governor_sum2__out;
    // Generated from the component: Microturbine.CB_control.Abs7
    _microturbine_cb_control_abs7__out = fabs(_microturbine_cb_control_sum10__out);
    // Generated from the component: Microturbine.Governor.Exciter Activation.Sum1
    _microturbine_governor_exciter_activation_sum1__out = _microturbine_governor_exciter_activation_constant2__out - _microturbine_governor_gain28__out;
    // Generated from the component: Microturbine.BE1-25A Synchronizer.abc to qd1.Sum3
    _microturbine_be1_25a_synchronizer_abc_to_qd1_sum3__out = _microturbine_be1_25a_synchronizer_abc_to_qd1_product1__out + _microturbine_be1_25a_synchronizer_abc_to_qd1_product2__out + _microturbine_be1_25a_synchronizer_abc_to_qd1_product3__out;
    // Generated from the component: Microturbine.BE1-25A Synchronizer.abc to qd1.Sum5
    _microturbine_be1_25a_synchronizer_abc_to_qd1_sum5__out = _microturbine_be1_25a_synchronizer_abc_to_qd1_product4__out + _microturbine_be1_25a_synchronizer_abc_to_qd1_product5__out + _microturbine_be1_25a_synchronizer_abc_to_qd1_product6__out;
    // Generated from the component: Microturbine.BE1-25A Synchronizer.abc to qd.Gain1
    _microturbine_be1_25a_synchronizer_abc_to_qd_gain1__out = 0.6666666666666666 * _microturbine_be1_25a_synchronizer_abc_to_qd_sum3__out;
    // Generated from the component: Microturbine.BE1-25A Synchronizer.abc to qd.Gain2
    _microturbine_be1_25a_synchronizer_abc_to_qd_gain2__out = 0.6666666666666666 * _microturbine_be1_25a_synchronizer_abc_to_qd_sum5__out;
    // Generated from the component: Microturbine.CB_control.Relational operator6
    _microturbine_cb_control_relational_operator6__out = (_microturbine_cb_control_constant11__out > _microturbine_cb_control_abs7__out) ? 1 : 0;
    // Generated from the component: Microturbine.Governor.Exciter Activation.Abs1
    _microturbine_governor_exciter_activation_abs1__out = fabs(_microturbine_governor_exciter_activation_sum1__out);
    // Generated from the component: Microturbine.Governor.Exciter Activation.speed difference
    HIL_OutAO(0x4016, (float)_microturbine_governor_exciter_activation_sum1__out);
    // Generated from the component: Microturbine.BE1-25A Synchronizer.abc to qd1.Gain1
    _microturbine_be1_25a_synchronizer_abc_to_qd1_gain1__out = 0.6666666666666666 * _microturbine_be1_25a_synchronizer_abc_to_qd1_sum3__out;
    // Generated from the component: Microturbine.BE1-25A Synchronizer.abc to qd1.Gain2
    _microturbine_be1_25a_synchronizer_abc_to_qd1_gain2__out = 0.6666666666666666 * _microturbine_be1_25a_synchronizer_abc_to_qd1_sum5__out;
    // Generated from the component: Microturbine.BE1-25A Synchronizer.Gain5
    _microturbine_be1_25a_synchronizer_gain5__out = 8.874962836170933e-05 * _microturbine_be1_25a_synchronizer_abc_to_qd_gain1__out;
    // Generated from the component: Microturbine.BE1-25A Synchronizer.Gain6
    _microturbine_be1_25a_synchronizer_gain6__out = -8.874962836170933e-05 * _microturbine_be1_25a_synchronizer_abc_to_qd_gain2__out;
    // Generated from the component: Microturbine.Governor.Exciter Activation.Comparator1
    if (_microturbine_governor_exciter_activation_constant1__out < _microturbine_governor_exciter_activation_abs1__out) {
        _microturbine_governor_exciter_activation_comparator1__out = 0;
    } else if (_microturbine_governor_exciter_activation_constant1__out > _microturbine_governor_exciter_activation_abs1__out) {
        _microturbine_governor_exciter_activation_comparator1__out = 1;
    } else {
        _microturbine_governor_exciter_activation_comparator1__out = _microturbine_governor_exciter_activation_comparator1__state;
    }
    // Generated from the component: Microturbine.BE1-25A Synchronizer.Gain7
    _microturbine_be1_25a_synchronizer_gain7__out = 8.874962836170933e-05 * _microturbine_be1_25a_synchronizer_abc_to_qd1_gain1__out;
    // Generated from the component: Microturbine.BE1-25A Synchronizer.Gain12
    _microturbine_be1_25a_synchronizer_gain12__out = -8.874962836170933e-05 * _microturbine_be1_25a_synchronizer_abc_to_qd1_gain2__out;
    // Generated from the component: Microturbine.BE1-25A Synchronizer.Limit2
    if (_microturbine_be1_25a_synchronizer_gain5__out < 1e-12) {
        _microturbine_be1_25a_synchronizer_limit2__out = 1e-12;
    } else {
        _microturbine_be1_25a_synchronizer_limit2__out = _microturbine_be1_25a_synchronizer_gain5__out;
    }
    // Generated from the component: Microturbine.BE1-25A Synchronizer.Product3
    _microturbine_be1_25a_synchronizer_product3__out = (_microturbine_be1_25a_synchronizer_gain5__out * _microturbine_be1_25a_synchronizer_gain5__out);
    // Generated from the component: Microturbine.BE1-25A Synchronizer.Vd_G
    HIL_OutAO(0x4002, (float)_microturbine_be1_25a_synchronizer_gain5__out);
    // Generated from the component: Microturbine.BE1-25A Synchronizer.PLL.PID controller1
    _microturbine_be1_25a_synchronizer_pll_pid_controller1__pi_reg_out_int = _microturbine_be1_25a_synchronizer_pll_pid_controller1__integrator_state + 5.0 * _microturbine_be1_25a_synchronizer_gain6__out;
    if (_microturbine_be1_25a_synchronizer_pll_pid_controller1__pi_reg_out_int < 358.1415625092364) {
        _microturbine_be1_25a_synchronizer_pll_pid_controller1__out = 358.1415625092364;
        _microturbine_be1_25a_synchronizer_pll_pid_controller1__av_active = 1;
    } else if (_microturbine_be1_25a_synchronizer_pll_pid_controller1__pi_reg_out_int > 395.84067435231395) {
        _microturbine_be1_25a_synchronizer_pll_pid_controller1__out = 395.84067435231395;
        _microturbine_be1_25a_synchronizer_pll_pid_controller1__av_active = 1;
    } else {
        _microturbine_be1_25a_synchronizer_pll_pid_controller1__out = _microturbine_be1_25a_synchronizer_pll_pid_controller1__pi_reg_out_int;
        _microturbine_be1_25a_synchronizer_pll_pid_controller1__av_active = 0;
    }
    // Generated from the component: Microturbine.BE1-25A Synchronizer.Product4
    _microturbine_be1_25a_synchronizer_product4__out = (_microturbine_be1_25a_synchronizer_gain6__out * _microturbine_be1_25a_synchronizer_gain6__out);
    // Generated from the component: Microturbine.BE1-25A Synchronizer.Vq_G
    HIL_OutAO(0x4003, (float)_microturbine_be1_25a_synchronizer_gain6__out);
    // Generated from the component: Microturbine.Governor.Exciter Activation.Activate Exciter
    _microturbine_governor_exciter_activation_activate_exciter__boolean = _microturbine_governor_exciter_activation_comparator1__out;
    if (_microturbine_governor_exciter_activation_activate_exciter__boolean == 1) {
        _microturbine_governor_exciter_activation_activate_exciter__Activate = 1;
    }
    // Generated from the component: Microturbine.BE1-25A Synchronizer.E_d
    HIL_OutAO(0x4000, (float)_microturbine_be1_25a_synchronizer_gain7__out);
    // Generated from the component: Microturbine.BE1-25A Synchronizer.Limit1
    if (_microturbine_be1_25a_synchronizer_gain7__out < 1e-12) {
        _microturbine_be1_25a_synchronizer_limit1__out = 1e-12;
    } else {
        _microturbine_be1_25a_synchronizer_limit1__out = _microturbine_be1_25a_synchronizer_gain7__out;
    }
    // Generated from the component: Microturbine.BE1-25A Synchronizer.magnitude.Product6
    _microturbine_be1_25a_synchronizer_magnitude_product6__out = (_microturbine_be1_25a_synchronizer_gain7__out * _microturbine_be1_25a_synchronizer_gain7__out);
    // Generated from the component: Microturbine.BE1-25A Synchronizer.E_q
    HIL_OutAO(0x4001, (float)_microturbine_be1_25a_synchronizer_gain12__out);
    // Generated from the component: Microturbine.BE1-25A Synchronizer.magnitude.Product5
    _microturbine_be1_25a_synchronizer_magnitude_product5__out = (_microturbine_be1_25a_synchronizer_gain12__out * _microturbine_be1_25a_synchronizer_gain12__out);
    // Generated from the component: Microturbine.BE1-25A Synchronizer.Trigonometric function2
    _microturbine_be1_25a_synchronizer_trigonometric_function2__out = atan2(_microturbine_be1_25a_synchronizer_gain6__out, _microturbine_be1_25a_synchronizer_limit2__out);
    // Generated from the component: Microturbine.BE1-25A Synchronizer.Gain13
    _microturbine_be1_25a_synchronizer_gain13__out = 0.0026525823848649226 * _microturbine_be1_25a_synchronizer_pll_pid_controller1__out;
    // Generated from the component: Microturbine.BE1-25A Synchronizer.PLL.C function1
    _microturbine_be1_25a_synchronizer_pll_c_function1__in = _microturbine_be1_25a_synchronizer_pll_pid_controller1__out;
    _microturbine_be1_25a_synchronizer_pll_c_function1__out = _microturbine_be1_25a_synchronizer_pll_c_function1__var;
    // Generated from the component: Microturbine.BE1-25A Synchronizer.omegaPLL
    HIL_OutAO(0x4008, (float)_microturbine_be1_25a_synchronizer_pll_pid_controller1__out);
    // Generated from the component: Microturbine.BE1-25A Synchronizer.Sum5
    _microturbine_be1_25a_synchronizer_sum5__out = _microturbine_be1_25a_synchronizer_product3__out + _microturbine_be1_25a_synchronizer_product4__out;
    // Generated from the component: Microturbine.Exciter.Integrator1
    if (((_microturbine_governor_exciter_activation_activate_exciter__Activate > 0.0) && (_microturbine_exciter_integrator1__reset_state <= 0)) || ((_microturbine_governor_exciter_activation_activate_exciter__Activate <= 0.0) && (_microturbine_exciter_integrator1__reset_state == 1))) {
        _microturbine_exciter_integrator1__state = 0.0;
    }
    _microturbine_exciter_integrator1__out = _microturbine_exciter_integrator1__state;
    // Generated from the component: Microturbine.Exciter.Integrator2
    if (((_microturbine_governor_exciter_activation_activate_exciter__Activate > 0.0) && (_microturbine_exciter_integrator2__reset_state <= 0)) || ((_microturbine_governor_exciter_activation_activate_exciter__Activate <= 0.0) && (_microturbine_exciter_integrator2__reset_state == 1))) {
        _microturbine_exciter_integrator2__state = 0.0;
    }
    _microturbine_exciter_integrator2__out = _microturbine_exciter_integrator2__state;
    // Generated from the component: Microturbine.Exciter.Integrator3
    if (((_microturbine_governor_exciter_activation_activate_exciter__Activate > 0.0) && (_microturbine_exciter_integrator3__reset_state <= 0)) || ((_microturbine_governor_exciter_activation_activate_exciter__Activate <= 0.0) && (_microturbine_exciter_integrator3__reset_state == 1))) {
        _microturbine_exciter_integrator3__state = 0.0;
    }
    _microturbine_exciter_integrator3__out = _microturbine_exciter_integrator3__state;
    // Generated from the component: Microturbine.Exciter.Integrator4
    if (((_microturbine_governor_exciter_activation_activate_exciter__Activate > 0.0) && (_microturbine_exciter_integrator4__reset_state <= 0)) || ((_microturbine_governor_exciter_activation_activate_exciter__Activate <= 0.0) && (_microturbine_exciter_integrator4__reset_state == 1))) {
        _microturbine_exciter_integrator4__state = 0.0;
    }
    _microturbine_exciter_integrator4__out = _microturbine_exciter_integrator4__state;
    // Generated from the component: Microturbine.Exciter.Logical operator1
    _microturbine_exciter_logical_operator1__out = !_microturbine_governor_exciter_activation_activate_exciter__Activate;
    // Generated from the component: Microturbine.Exciter.PI.Integrator1
    if (((_microturbine_governor_exciter_activation_activate_exciter__Activate > 0.0) && (_microturbine_exciter_pi_integrator1__reset_state <= 0)) || ((_microturbine_governor_exciter_activation_activate_exciter__Activate <= 0.0) && (_microturbine_exciter_pi_integrator1__reset_state == 1))) {
        _microturbine_exciter_pi_integrator1__state = 0.0;
    }
    _microturbine_exciter_pi_integrator1__out = _microturbine_exciter_pi_integrator1__state;
    // Generated from the component: Microturbine.Exciter.exciter ON
    HIL_OutInt32(0xf0040e, _microturbine_governor_exciter_activation_activate_exciter__Activate != 0x0);
    // Generated from the component: Microturbine.BE1-25A Synchronizer.Trigonometric function1
    _microturbine_be1_25a_synchronizer_trigonometric_function1__out = atan2(_microturbine_be1_25a_synchronizer_gain12__out, _microturbine_be1_25a_synchronizer_limit1__out);
    // Generated from the component: Microturbine.BE1-25A Synchronizer.magnitude.Sum3
    _microturbine_be1_25a_synchronizer_magnitude_sum3__out = _microturbine_be1_25a_synchronizer_magnitude_product5__out + _microturbine_be1_25a_synchronizer_magnitude_product6__out;
    // Generated from the component: Microturbine.BE1-25A Synchronizer.Gain16
    _microturbine_be1_25a_synchronizer_gain16__out = 57.29577951308232 * _microturbine_be1_25a_synchronizer_trigonometric_function2__out;
    // Generated from the component: Microturbine.BE1-25A Synchronizer.Sum2
    _microturbine_be1_25a_synchronizer_sum2__out =  - _microturbine_be1_25a_synchronizer_gain4__out + _microturbine_be1_25a_synchronizer_gain13__out;
    // Generated from the component: Microturbine.BE1-25A Synchronizer.w_bus
    HIL_OutAO(0x400e, (float)_microturbine_be1_25a_synchronizer_gain13__out);
    // Generated from the component: Microturbine.BE1-25A Synchronizer.PLL.confine phase
    _microturbine_be1_25a_synchronizer_pll_confine_phase__in = _microturbine_be1_25a_synchronizer_pll_c_function1__out;
    _microturbine_be1_25a_synchronizer_pll_confine_phase__x = _microturbine_be1_25a_synchronizer_pll_confine_phase__in / 6.283185307179586;
    _microturbine_be1_25a_synchronizer_pll_confine_phase__floor_in = floor(_microturbine_be1_25a_synchronizer_pll_confine_phase__x);
    _microturbine_be1_25a_synchronizer_pll_confine_phase__out = _microturbine_be1_25a_synchronizer_pll_confine_phase__in - (6.283185307179586 * _microturbine_be1_25a_synchronizer_pll_confine_phase__floor_in);
    // Generated from the component: Microturbine.BE1-25A Synchronizer.Mathematical function2
    _microturbine_be1_25a_synchronizer_mathematical_function2__out = sqrt(_microturbine_be1_25a_synchronizer_sum5__out);
    // Generated from the component: Microturbine.Exciter.E_f_M
    HIL_OutAO(0x4011, (float)_microturbine_exciter_integrator1__out);
    // Generated from the component: Microturbine.Exciter.Gain2
    _microturbine_exciter_gain2__out = 1.0 * _microturbine_exciter_integrator1__out;
    // Generated from the component: Microturbine.Exciter.Gain3
    _microturbine_exciter_gain3__out = 0.0 * _microturbine_exciter_integrator1__out;
    // Generated from the component: Microturbine.Exciter.Gain5
    _microturbine_exciter_gain5__out = 0.0 * _microturbine_exciter_integrator1__out;
    // Generated from the component: Microturbine.Exciter.PI.Ki
    _microturbine_exciter_pi_ki__out = 1.19 * _microturbine_exciter_integrator1__out;
    // Generated from the component: Microturbine.Exciter.PI.Kp
    _microturbine_exciter_pi_kp__out = 1.16 * _microturbine_exciter_integrator1__out;
    // Generated from the component: Microturbine.Exciter.Gain7
    _microturbine_exciter_gain7__out = 20.0 * _microturbine_exciter_integrator2__out;
    // Generated from the component: Microturbine.Exciter.R_F_M
    HIL_OutAO(0x4013, (float)_microturbine_exciter_integrator2__out);
    // Generated from the component: Microturbine.Exciter.V_R_M
    HIL_OutAO(0x4014, (float)_microturbine_exciter_integrator3__out);
    // Generated from the component: Microturbine.Exciter.E_t_M
    HIL_OutAO(0x4012, (float)_microturbine_exciter_integrator4__out);
    // Generated from the component: Microturbine.Exciter.exciter OFF
    HIL_OutInt32(0xf0040d, _microturbine_exciter_logical_operator1__out != 0x0);
    // Generated from the component: Microturbine.BE1-25A Synchronizer.Gain17
    _microturbine_be1_25a_synchronizer_gain17__out = 57.29577951308232 * _microturbine_be1_25a_synchronizer_trigonometric_function1__out;
    // Generated from the component: Microturbine.BE1-25A Synchronizer.Sum1
    _microturbine_be1_25a_synchronizer_sum1__out =  - _microturbine_be1_25a_synchronizer_trigonometric_function1__out + _microturbine_be1_25a_synchronizer_trigonometric_function2__out;
    // Generated from the component: Microturbine.BE1-25A Synchronizer.magnitude.Mathematical function1
    _microturbine_be1_25a_synchronizer_magnitude_mathematical_function1__out = sqrt(_microturbine_be1_25a_synchronizer_magnitude_sum3__out);
    // Generated from the component: Microturbine.BE1-25A Synchronizer.theta_V
    HIL_OutAO(0x400b, (float)_microturbine_be1_25a_synchronizer_gain16__out);
    // Generated from the component: Microturbine.BE1-25A Synchronizer.Abs5
    _microturbine_be1_25a_synchronizer_abs5__out = fabs(_microturbine_be1_25a_synchronizer_sum2__out);
    // Generated from the component: Microturbine.BE1-25A Synchronizer.BE1-25A Synchronizer2
    _microturbine_be1_25a_synchronizer_be1_25a_synchronizer2__df = _microturbine_be1_25a_synchronizer_sum2__out;
    if (_microturbine_be1_25a_synchronizer_be1_25a_synchronizer2__df > 0.002) {
        _microturbine_be1_25a_synchronizer_be1_25a_synchronizer2__del_w = 1.125 * 0.08;
    }
    else if ((_microturbine_be1_25a_synchronizer_be1_25a_synchronizer2__df <= 0.002) && (_microturbine_be1_25a_synchronizer_be1_25a_synchronizer2__df > 0)) {
        _microturbine_be1_25a_synchronizer_be1_25a_synchronizer2__del_w = 0.08 * _microturbine_be1_25a_synchronizer_be1_25a_synchronizer2__df / 0.002 + (0.125 * 0.08);
    }
    else if ((_microturbine_be1_25a_synchronizer_be1_25a_synchronizer2__df <= 0) && (_microturbine_be1_25a_synchronizer_be1_25a_synchronizer2__df > (-0.001))) {
        _microturbine_be1_25a_synchronizer_be1_25a_synchronizer2__del_w = (0.125 * 0.08) * (_microturbine_be1_25a_synchronizer_be1_25a_synchronizer2__df) / 0.001 + (0.125 * 0.08);
    }
    else if ((_microturbine_be1_25a_synchronizer_be1_25a_synchronizer2__df <= (-1 * 0.001)) && (_microturbine_be1_25a_synchronizer_be1_25a_synchronizer2__df > (-1 * 0.002))) {
        _microturbine_be1_25a_synchronizer_be1_25a_synchronizer2__del_w = 0;
    }
    else if (_microturbine_be1_25a_synchronizer_be1_25a_synchronizer2__df <= (-1 * 0.002)) {
        _microturbine_be1_25a_synchronizer_be1_25a_synchronizer2__del_w = (0.002 + _microturbine_be1_25a_synchronizer_be1_25a_synchronizer2__df) * 0.08 / 0.002;
    }
    // Generated from the component: Microturbine.BE1-25A Synchronizer.frequency_diff3
    HIL_OutAO(0x4007, (float)_microturbine_be1_25a_synchronizer_sum2__out);
    // Generated from the component: Microturbine.BE1-25A Synchronizer.|V|
    HIL_OutAO(0x4010, (float)_microturbine_be1_25a_synchronizer_mathematical_function2__out);
    // Generated from the component: Microturbine.CB_control.Hold after connect2
    _microturbine_cb_control_hold_after_connect2__in1 = _microturbine_be1_25a_synchronizer_mathematical_function2__out;
    _microturbine_cb_control_hold_after_connect2__in2 = _microturbine_be1_25a_synchronizer_gain13__out;
    _microturbine_cb_control_hold_after_connect2__out = _microturbine_cb_control_hold_after_connect2__var;
    // Generated from the component: Microturbine.Exciter.Sum1
    _microturbine_exciter_sum1__out =  - _microturbine_exciter_gain2__out + _microturbine_exciter_integrator3__out;
    // Generated from the component: Microturbine.Exciter.Sum2
    _microturbine_exciter_sum2__out =  - _microturbine_exciter_integrator2__out + _microturbine_exciter_gain3__out;
    // Generated from the component: Microturbine.Exciter.PI.Sum5
    _microturbine_exciter_pi_sum5__out = _microturbine_exciter_pi_kp__out + _microturbine_exciter_pi_integrator1__out;
    // Generated from the component: Microturbine.BE1-25A Synchronizer.theta_E
    HIL_OutAO(0x400a, (float)_microturbine_be1_25a_synchronizer_gain17__out);
    // Generated from the component: Microturbine.BE1-25A Synchronizer.confine phase
    _microturbine_be1_25a_synchronizer_confine_phase__in = _microturbine_be1_25a_synchronizer_sum1__out;
    if (_microturbine_be1_25a_synchronizer_confine_phase__in > 0) {
        if (_microturbine_be1_25a_synchronizer_confine_phase__in > (6.283185307179586 / 2))_microturbine_be1_25a_synchronizer_confine_phase__out = _microturbine_be1_25a_synchronizer_confine_phase__in - 6.283185307179586;
        else _microturbine_be1_25a_synchronizer_confine_phase__out = _microturbine_be1_25a_synchronizer_confine_phase__in;
    }
    if (_microturbine_be1_25a_synchronizer_confine_phase__in < 0) {
        if (_microturbine_be1_25a_synchronizer_confine_phase__in < (-6.283185307179586 / 2))_microturbine_be1_25a_synchronizer_confine_phase__out = _microturbine_be1_25a_synchronizer_confine_phase__in + 6.283185307179586;
        else _microturbine_be1_25a_synchronizer_confine_phase__out = _microturbine_be1_25a_synchronizer_confine_phase__in;
    }
    // Generated from the component: Microturbine.BE1-25A Synchronizer.Sum3
    _microturbine_be1_25a_synchronizer_sum3__out =  - _microturbine_be1_25a_synchronizer_magnitude_mathematical_function1__out + _microturbine_be1_25a_synchronizer_mathematical_function2__out;
    // Generated from the component: Microturbine.BE1-25A Synchronizer.|E|
    HIL_OutAO(0x400f, (float)_microturbine_be1_25a_synchronizer_magnitude_mathematical_function1__out);
    // Generated from the component: Microturbine.CB_control.Sum9
    _microturbine_cb_control_sum9__out =  - _microturbine_be1_25a_synchronizer_magnitude_mathematical_function1__out + _microturbine_cb_control_constant1__out;
    // Generated from the component: Microturbine.Exciter.Sum5
    _microturbine_exciter_sum5__out =  - _microturbine_exciter_integrator4__out + _microturbine_be1_25a_synchronizer_magnitude_mathematical_function1__out;
    // Generated from the component: Microturbine.Gain17
    _microturbine_gain17__out = 13.8 * _microturbine_be1_25a_synchronizer_magnitude_mathematical_function1__out;
    // Generated from the component: Microturbine.BE1-25A Synchronizer.Relational operator2
    _microturbine_be1_25a_synchronizer_relational_operator2__out = (_microturbine_be1_25a_synchronizer_constant7__out > _microturbine_be1_25a_synchronizer_abs5__out) ? 1 : 0;
    // Generated from the component: Microturbine.CB_control.Logical operator10
    _microturbine_cb_control_logical_operator10__out = !_microturbine_cb_control_hold_after_connect2__out;
    // Generated from the component: Microturbine.CB_control.Logical operator7
    _microturbine_cb_control_logical_operator7__out = _microturbine_cb_control_grid_islanded__out && _microturbine_cb_control_hold_after_connect2__out ;
    // Generated from the component: Microturbine.Exciter.Gain1
    _microturbine_exciter_gain1__out = 1000.0 * _microturbine_exciter_sum1__out;
    // Generated from the component: Microturbine.Exciter.Gain4
    _microturbine_exciter_gain4__out = 1000.0 * _microturbine_exciter_sum2__out;
    // Generated from the component: Microturbine.Exciter.PI.Limit1
    if (_microturbine_exciter_pi_sum5__out > 3.0) {
        _microturbine_exciter_pi_limit1__out = 3.0;
    } else if (_microturbine_exciter_pi_sum5__out < -3.0) {
        _microturbine_exciter_pi_limit1__out = -3.0;
    } else {
        _microturbine_exciter_pi_limit1__out = _microturbine_exciter_pi_sum5__out;
    }
    // Generated from the component: Microturbine.BE1-25A Synchronizer.Abs4
    _microturbine_be1_25a_synchronizer_abs4__out = fabs(_microturbine_be1_25a_synchronizer_confine_phase__out);
    // Generated from the component: Microturbine.BE1-25A Synchronizer.angle_diff3
    HIL_OutAO(0x4004, (float)_microturbine_be1_25a_synchronizer_confine_phase__out);
    // Generated from the component: Microturbine.BE1-25A Synchronizer.Abs2
    _microturbine_be1_25a_synchronizer_abs2__out = fabs(_microturbine_be1_25a_synchronizer_sum3__out);
    // Generated from the component: Microturbine.BE1-25A Synchronizer.BE1-25A Synchronizer1
    _microturbine_be1_25a_synchronizer_be1_25a_synchronizer1__dV = _microturbine_be1_25a_synchronizer_sum3__out;
    if (_microturbine_be1_25a_synchronizer_be1_25a_synchronizer1__dV > 0.002) {
        _microturbine_be1_25a_synchronizer_be1_25a_synchronizer1__del_V = 0.05;
    }
    else if ((_microturbine_be1_25a_synchronizer_be1_25a_synchronizer1__dV <= 0.002) && (_microturbine_be1_25a_synchronizer_be1_25a_synchronizer1__dV > 0)) {
        _microturbine_be1_25a_synchronizer_be1_25a_synchronizer1__del_V = 0.05 * _microturbine_be1_25a_synchronizer_be1_25a_synchronizer1__dV / 0.002;
    }
    else if ((_microturbine_be1_25a_synchronizer_be1_25a_synchronizer1__dV <= 0) && (_microturbine_be1_25a_synchronizer_be1_25a_synchronizer1__dV > -1 * (0.002 - 0.001))) {
        _microturbine_be1_25a_synchronizer_be1_25a_synchronizer1__del_V = 0;
    }
    else if ((_microturbine_be1_25a_synchronizer_be1_25a_synchronizer1__dV <= (-1 * (0.002 - 0.001))) && (_microturbine_be1_25a_synchronizer_be1_25a_synchronizer1__dV > (-1 * 0.002))) {
        _microturbine_be1_25a_synchronizer_be1_25a_synchronizer1__del_V = 0.05 * (_microturbine_be1_25a_synchronizer_be1_25a_synchronizer1__dV + (0.002 - 0.001)) / 0.001;
    }
    else if (_microturbine_be1_25a_synchronizer_be1_25a_synchronizer1__dV <= (-1 * 0.002)) {
        _microturbine_be1_25a_synchronizer_be1_25a_synchronizer1__del_V = -1 * 0.05;
    }
    // Generated from the component: Microturbine.BE1-25A Synchronizer.volt_diff3
    HIL_OutAO(0x400c, (float)_microturbine_be1_25a_synchronizer_sum3__out);
    // Generated from the component: Microturbine.CB_control.Abs6
    _microturbine_cb_control_abs6__out = fabs(_microturbine_cb_control_sum9__out);
    // Generated from the component: Microturbine.Exciter.Gain9
    _microturbine_exciter_gain9__out = 1000.0 * _microturbine_exciter_sum5__out;
    // Generated from the component: Microturbine.|V|
    HIL_OutAO(0x4027, (float)_microturbine_gain17__out);
    // Generated from the component: Microturbine.BE1-25A Synchronizer.Digital Probe4
    HIL_OutInt32(0xf00402, _microturbine_be1_25a_synchronizer_relational_operator2__out != 0x0);
    // Generated from the component: Microturbine.CB_control.Logical operator11
    _microturbine_cb_control_logical_operator11__out = _microturbine_cb_control_logical_operator10__out && _microturbine_cb_control_logical_operator9__out ;
    // Generated from the component: Microturbine.CB_control.Grid_Islanded ON
    HIL_OutInt32(0xf00408, _microturbine_cb_control_logical_operator7__out != 0x0);
    // Generated from the component: Microturbine.CB_control.Logical operator5
    _microturbine_cb_control_logical_operator5__out = !_microturbine_cb_control_logical_operator7__out;
    // Generated from the component: Microturbine.Exciter.Gain18
    _microturbine_exciter_gain18__out = 11267.652816802622 * _microturbine_exciter_pi_limit1__out;
    // Generated from the component: Microturbine.Exciter.PI.Sum6
    _microturbine_exciter_pi_sum6__out =  - _microturbine_exciter_pi_sum5__out + _microturbine_exciter_pi_limit1__out;
    // Generated from the component: Microturbine.BE1-25A Synchronizer.Relational operator1
    _microturbine_be1_25a_synchronizer_relational_operator1__out = (_microturbine_be1_25a_synchronizer_constant6__out > _microturbine_be1_25a_synchronizer_abs4__out) ? 1 : 0;
    // Generated from the component: Microturbine.BE1-25A Synchronizer.Relational operator4
    _microturbine_be1_25a_synchronizer_relational_operator4__out = (_microturbine_be1_25a_synchronizer_abs2__out < _microturbine_be1_25a_synchronizer_constant9__out) ? 1 : 0;
    // Generated from the component: Microturbine.CB_control.Relational operator5
    _microturbine_cb_control_relational_operator5__out = (_microturbine_cb_control_abs6__out < _microturbine_cb_control_constant10__out) ? 1 : 0;
    // Generated from the component: Microturbine.CB_control.Logical operator12
    _microturbine_cb_control_logical_operator12__out = !_microturbine_cb_control_logical_operator11__out;
    // Generated from the component: Microturbine.CB_control.MT_sync ON
    HIL_OutInt32(0xf0040c, _microturbine_cb_control_logical_operator11__out != 0x0);
    // Generated from the component: Microturbine.CB_control.Grid_Islanded OFF
    HIL_OutInt32(0xf00407, _microturbine_cb_control_logical_operator5__out != 0x0);
    // Generated from the component: Microturbine.V_F.Vs1
    HIL_OutFloat(145489920, (float) _microturbine_exciter_gain18__out);
    // Generated from the component: Microturbine.Exciter.PI.Kb
    _microturbine_exciter_pi_kb__out = 1.0 * _microturbine_exciter_pi_sum6__out;
    // Generated from the component: Microturbine.BE1-25A Synchronizer.Digital Probe3
    HIL_OutInt32(0xf00401, _microturbine_be1_25a_synchronizer_relational_operator1__out != 0x0);
    // Generated from the component: Microturbine.BE1-25A Synchronizer.Digital Probe5
    HIL_OutInt32(0xf00403, _microturbine_be1_25a_synchronizer_relational_operator4__out != 0x0);
    // Generated from the component: Microturbine.BE1-25A Synchronizer.Logical operator1
    _microturbine_be1_25a_synchronizer_logical_operator1__out = _microturbine_be1_25a_synchronizer_relational_operator1__out && _microturbine_be1_25a_synchronizer_relational_operator2__out && _microturbine_be1_25a_synchronizer_relational_operator4__out ;
    // Generated from the component: Microturbine.CB_control.Logical operator8
    _microturbine_cb_control_logical_operator8__out = _microturbine_cb_control_relational_operator6__out && _microturbine_cb_control_relational_operator5__out && _microturbine_cb_control_logical_operator7__out ;
    // Generated from the component: Microturbine.CB_control.MT_sync OFF
    HIL_OutInt32(0xf0040b, _microturbine_cb_control_logical_operator12__out != 0x0);
    // Generated from the component: Microturbine.Exciter.PI.Sum7
    _microturbine_exciter_pi_sum7__out = _microturbine_exciter_pi_ki__out + _microturbine_exciter_pi_kb__out;
    // Generated from the component: Microturbine.BE1-25A Synchronizer.stay connected1
    _microturbine_be1_25a_synchronizer_stay_connected1__MTsync = _microturbine_cb_control_logical_operator11__out;
    _microturbine_be1_25a_synchronizer_stay_connected1__connectMT = _microturbine_cb_control_logical_operator2__out;
    _microturbine_be1_25a_synchronizer_stay_connected1__ready = _microturbine_be1_25a_synchronizer_logical_operator1__out;
    _microturbine_be1_25a_synchronizer_stay_connected1__out = _microturbine_be1_25a_synchronizer_stay_connected1__connect;
    // Generated from the component: Microturbine.CB_control.Logical operator6
    _microturbine_cb_control_logical_operator6__out = _microturbine_be1_25a_synchronizer_unit_delay5__out || _microturbine_cb_control_logical_operator8__out ;
    // Generated from the component: Microturbine.CB_control.Logical operator1
    _microturbine_cb_control_logical_operator1__out = _microturbine_cb_control_logical_operator2__out && _microturbine_cb_control_logical_operator6__out ;
    // Generated from the component: Microturbine.CB_control.stay connected1
    _microturbine_cb_control_stay_connected1__connect = _microturbine_cb_control_logical_operator1__out;
    _microturbine_cb_control_stay_connected1__disconnect = _microturbine_connect_mt__out;
    _microturbine_cb_control_stay_connected1__action = _microturbine_cb_control_stay_connected1__var;
    // Generated from the component: Microturbine.BE1-25A Synchronizer.Hold after connect
    _microturbine_be1_25a_synchronizer_hold_after_connect__MT_sync = _microturbine_cb_control_logical_operator11__out;
    _microturbine_be1_25a_synchronizer_hold_after_connect__connect = _microturbine_cb_control_stay_connected1__action;
    _microturbine_be1_25a_synchronizer_hold_after_connect__in = _microturbine_be1_25a_synchronizer_be1_25a_synchronizer2__del_w;
    _microturbine_be1_25a_synchronizer_hold_after_connect__out = _microturbine_be1_25a_synchronizer_hold_after_connect__var;
    // Generated from the component: Microturbine.BE1-25A Synchronizer.Hold after connect1
    _microturbine_be1_25a_synchronizer_hold_after_connect1__MT_sync = _microturbine_cb_control_logical_operator11__out;
    _microturbine_be1_25a_synchronizer_hold_after_connect1__connect = _microturbine_cb_control_stay_connected1__action;
    _microturbine_be1_25a_synchronizer_hold_after_connect1__exc_state = _microturbine_governor_exciter_activation_activate_exciter__Activate;
    _microturbine_be1_25a_synchronizer_hold_after_connect1__in = _microturbine_be1_25a_synchronizer_be1_25a_synchronizer1__del_V;
    _microturbine_be1_25a_synchronizer_hold_after_connect1__out = _microturbine_be1_25a_synchronizer_hold_after_connect1__var;
    // Generated from the component: Microturbine.CB_control.GCB ON
    HIL_OutInt32(0xf00406, _microturbine_cb_control_stay_connected1__action != 0x0);
    // Generated from the component: Microturbine.CB_control.Logical operator3
    _microturbine_cb_control_logical_operator3__out = !_microturbine_cb_control_stay_connected1__action;
    // Generated from the component: Microturbine.S4.CTC_Wrapper
    if (_microturbine_cb_control_stay_connected1__action == 0x0) {
        HIL_OutInt32(0x8240480, 0x0);
    }
    else {
        HIL_OutInt32(0x8240480, 0x1);
    }
    // Generated from the component: Microturbine.BE1-25A Synchronizer.Sum9
    _microturbine_be1_25a_synchronizer_sum9__out = _microturbine_be1_25a_synchronizer_gain13__out + _microturbine_be1_25a_synchronizer_hold_after_connect__out;
    // Generated from the component: Microturbine.BE1-25A Synchronizer.del_w
    HIL_OutAO(0x4006, (float)_microturbine_be1_25a_synchronizer_hold_after_connect__out);
    // Generated from the component: Microturbine.BE1-25A Synchronizer.Sum10
    _microturbine_be1_25a_synchronizer_sum10__out = _microturbine_be1_25a_synchronizer_mathematical_function2__out + _microturbine_be1_25a_synchronizer_hold_after_connect1__out;
    // Generated from the component: Microturbine.BE1-25A Synchronizer.del_V
    HIL_OutAO(0x4005, (float)_microturbine_be1_25a_synchronizer_hold_after_connect1__out);
    // Generated from the component: Microturbine.CB_control.GCB OFF
    HIL_OutInt32(0xf00405, _microturbine_cb_control_logical_operator3__out != 0x0);
    // Generated from the component: Microturbine.BE1-25A Synchronizer.Hold after connect2
    _microturbine_be1_25a_synchronizer_hold_after_connect2__connect = _microturbine_cb_control_stay_connected1__action;
    _microturbine_be1_25a_synchronizer_hold_after_connect2__in = _microturbine_be1_25a_synchronizer_sum9__out;
    _microturbine_be1_25a_synchronizer_hold_after_connect2__out = _microturbine_be1_25a_synchronizer_hold_after_connect2__var;
    // Generated from the component: Microturbine.BE1-25A Synchronizer.Hold after connect3
    _microturbine_be1_25a_synchronizer_hold_after_connect3__connect = _microturbine_cb_control_stay_connected1__action;
    _microturbine_be1_25a_synchronizer_hold_after_connect3__in = _microturbine_be1_25a_synchronizer_sum10__out;
    _microturbine_be1_25a_synchronizer_hold_after_connect3__out = _microturbine_be1_25a_synchronizer_hold_after_connect3__var;
    // Generated from the component: Microturbine.Signal switch1
    _microturbine_signal_switch1__out = (_microturbine_cb_control_logical_operator11__out != 1.0) ? _microturbine_constant2__out : _microturbine_be1_25a_synchronizer_hold_after_connect2__out;
    // Generated from the component: Microturbine.Signal switch2
    _microturbine_signal_switch2__out = (_microturbine_cb_control_logical_operator11__out != 1.0) ? _microturbine_constant1__out : _microturbine_be1_25a_synchronizer_hold_after_connect3__out;
    // Generated from the component: Microturbine.w
    _microturbine_w__out = (_microturbine_cb_control_stay_connected1__action > 0.5) ? _microturbine_wref__out : _microturbine_signal_switch1__out;
    // Generated from the component: Microturbine.|V|3
    _microturbine__v_3__out = (_microturbine_cb_control_stay_connected1__action > 0.5) ? _microturbine_vref__out : _microturbine_signal_switch2__out;
    // Generated from the component: Microturbine.Governor.Sum7
    _microturbine_governor_sum7__out = _microturbine_w__out - _microturbine_governor_gain28__out;
    // Generated from the component: Microturbine.Exciter.Sum4
    _microturbine_exciter_sum4__out = _microturbine__v_3__out - _microturbine_exciter_integrator4__out;
    // Generated from the component: Microturbine.Governor.Rate Limiter2
    if (_microturbine_governor_rate_limiter2__first_step) {
        _microturbine_governor_rate_limiter2__out = _microturbine_governor_sum7__out;
    } else {
        _microturbine_governor_rate_limiter2__out = _microturbine_governor_sum7__out;
        _microturbine_governor_rate_limiter2__in_rate = _microturbine_governor_sum7__out - _microturbine_governor_rate_limiter2__prev_out;
        if (_microturbine_governor_rate_limiter2__in_rate > 0.005) {
            _microturbine_governor_rate_limiter2__out = _microturbine_governor_rate_limiter2__prev_out + (0.005);
        }
        if (_microturbine_governor_rate_limiter2__in_rate < -0.005) {
            _microturbine_governor_rate_limiter2__out = _microturbine_governor_rate_limiter2__prev_out + (-0.005);
        }
    }
    // Generated from the component: Microturbine.Exciter.|V|1
    _microturbine_exciter__v_1__out = (_microturbine_governor_exciter_activation_activate_exciter__Activate != 1.0) ? _microturbine_exciter_constant1__out : _microturbine_exciter_sum4__out;
    // Generated from the component: Microturbine.Governor.Sum10
    _microturbine_governor_sum10__out = _microturbine_governor_gain29__out + _microturbine_governor_rate_limiter2__out;
    // Generated from the component: Microturbine.Governor.frequency_diff
    HIL_OutAO(0x4018, (float)_microturbine_governor_rate_limiter2__out);
    // Generated from the component: Microturbine.Exciter.Rate Limit
    if (_microturbine_exciter_rate_limit__first_step) {
        _microturbine_exciter_rate_limit__out = _microturbine_exciter__v_1__out;
    } else {
        _microturbine_exciter_rate_limit__out = _microturbine_exciter__v_1__out;
        _microturbine_exciter_rate_limit__in_rate = _microturbine_exciter__v_1__out - _microturbine_exciter_rate_limit__prev_out;
        if (_microturbine_exciter_rate_limit__in_rate > 0.005) {
            _microturbine_exciter_rate_limit__out = _microturbine_exciter_rate_limit__prev_out + (0.005);
        }
        if (_microturbine_exciter_rate_limit__in_rate < -0.005) {
            _microturbine_exciter_rate_limit__out = _microturbine_exciter_rate_limit__prev_out + (-0.005);
        }
    }
    // Generated from the component: Microturbine.Governor.Discrete Transfer Function1
    _microturbine_governor_discrete_transfer_function1__a_sum = 0.0f;
    _microturbine_governor_discrete_transfer_function1__b_sum = 0.0f;
    _microturbine_governor_discrete_transfer_function1__delay_line_in = 0.0f;
    for (_microturbine_governor_discrete_transfer_function1__i = 0; _microturbine_governor_discrete_transfer_function1__i < 1; _microturbine_governor_discrete_transfer_function1__i++) {
        _microturbine_governor_discrete_transfer_function1__b_sum += _microturbine_governor_discrete_transfer_function1__b_coeff[_microturbine_governor_discrete_transfer_function1__i + 1] * _microturbine_governor_discrete_transfer_function1__states[_microturbine_governor_discrete_transfer_function1__i];
    }
    _microturbine_governor_discrete_transfer_function1__a_sum += _microturbine_governor_discrete_transfer_function1__states[0] * _microturbine_governor_discrete_transfer_function1__a_coeff[1];
    _microturbine_governor_discrete_transfer_function1__delay_line_in = _microturbine_governor_sum10__out - _microturbine_governor_discrete_transfer_function1__a_sum;
    _microturbine_governor_discrete_transfer_function1__b_sum += _microturbine_governor_discrete_transfer_function1__b_coeff[0] * _microturbine_governor_discrete_transfer_function1__delay_line_in;
    _microturbine_governor_discrete_transfer_function1__out = _microturbine_governor_discrete_transfer_function1__b_sum;
    // Generated from the component: Microturbine.Exciter.Gain8
    _microturbine_exciter_gain8__out = 20.0 * _microturbine_exciter_rate_limit__out;
    // Generated from the component: Microturbine.Exciter.voltage_diff
    HIL_OutAO(0x4015, (float)_microturbine_exciter_rate_limit__out);
    // Generated from the component: Microturbine.Governor.Gain38
    _microturbine_governor_gain38__out = 0.75 * _microturbine_governor_discrete_transfer_function1__out;
    // Generated from the component: Microturbine.Exciter.Sum3
    _microturbine_exciter_sum3__out =  - _microturbine_exciter_integrator3__out + _microturbine_exciter_gain7__out - _microturbine_exciter_gain5__out + _microturbine_exciter_gain8__out;
    // Generated from the component: Microturbine.Governor.Gain39
    _microturbine_governor_gain39__out = 10.0 * _microturbine_governor_gain38__out;
    // Generated from the component: Microturbine.Exciter.Gain6
    _microturbine_exciter_gain6__out = 500.0 * _microturbine_exciter_sum3__out;
    // Generated from the component: Microturbine.Governor.Discrete Transfer Function2
    _microturbine_governor_discrete_transfer_function2__a_sum = 0.0f;
    _microturbine_governor_discrete_transfer_function2__b_sum = 0.0f;
    _microturbine_governor_discrete_transfer_function2__delay_line_in = 0.0f;
    for (_microturbine_governor_discrete_transfer_function2__i = 0; _microturbine_governor_discrete_transfer_function2__i < 2; _microturbine_governor_discrete_transfer_function2__i++) {
        _microturbine_governor_discrete_transfer_function2__b_sum += _microturbine_governor_discrete_transfer_function2__b_coeff[_microturbine_governor_discrete_transfer_function2__i + 1] * _microturbine_governor_discrete_transfer_function2__states[_microturbine_governor_discrete_transfer_function2__i];
    }
    for (_microturbine_governor_discrete_transfer_function2__i = 1; _microturbine_governor_discrete_transfer_function2__i > 0; _microturbine_governor_discrete_transfer_function2__i--) {
        _microturbine_governor_discrete_transfer_function2__a_sum += _microturbine_governor_discrete_transfer_function2__a_coeff[_microturbine_governor_discrete_transfer_function2__i + 1] * _microturbine_governor_discrete_transfer_function2__states[_microturbine_governor_discrete_transfer_function2__i];
    }
    _microturbine_governor_discrete_transfer_function2__a_sum += _microturbine_governor_discrete_transfer_function2__states[0] * _microturbine_governor_discrete_transfer_function2__a_coeff[1];
    _microturbine_governor_discrete_transfer_function2__delay_line_in = _microturbine_governor_gain39__out - _microturbine_governor_discrete_transfer_function2__a_sum;
    _microturbine_governor_discrete_transfer_function2__b_sum += _microturbine_governor_discrete_transfer_function2__b_coeff[0] * _microturbine_governor_discrete_transfer_function2__delay_line_in;
    _microturbine_governor_discrete_transfer_function2__out = _microturbine_governor_discrete_transfer_function2__b_sum;
    //@cmp.out.block.end
    //////////////////////////////////////////////////////////////////////////
    // Update block
    //////////////////////////////////////////////////////////////////////////
    //@cmp.update.block.start
    // Generated from the component: Microturbine.BE1-25A Synchronizer.Unit Delay2
    _microturbine_be1_25a_synchronizer_unit_delay2__state = _microturbine_be1_25a_synchronizer_pll_confine_phase__out;
    // Generated from the component: Microturbine.BE1-25A Synchronizer.Unit Delay5
    _microturbine_be1_25a_synchronizer_unit_delay5__state = _microturbine_be1_25a_synchronizer_stay_connected1__out;
    // Generated from the component: Microturbine.Engine.Integrator1
    _microturbine_engine_integrator1__state += _microturbine_engine_gain1__out * 0.001;
    // Generated from the component: Microturbine.Governor.Integrator1
    _microturbine_governor_integrator1__state += _microturbine_governor_discrete_transfer_function2__out * 0.001;
    // Generated from the component: Sinusoidal Source1
    _sinusoidal_source1__current_phase += 60.0 * 0.001;
    if (_sinusoidal_source1__current_phase >= 1.0f) {
        _sinusoidal_source1__current_phase -= 1.0f;
    }
    // Generated from the component: Sinusoidal Source2
    _sinusoidal_source2__current_phase += 60.0 * 0.001;
    if (_sinusoidal_source2__current_phase >= 1.0f) {
        _sinusoidal_source2__current_phase -= 1.0f;
    }
    // Generated from the component: Sinusoidal Source3
    _sinusoidal_source3__current_phase += 60.0 * 0.001;
    if (_sinusoidal_source3__current_phase >= 1.0f) {
        _sinusoidal_source3__current_phase -= 1.0f;
    }
    // Generated from the component: Microturbine.BE1-25A Synchronizer.abc to qd1.confine phase
    // Generated from the component: Microturbine.Governor.Exciter Activation.Comparator1
    if (_microturbine_governor_exciter_activation_constant1__out < _microturbine_governor_exciter_activation_abs1__out) {
        _microturbine_governor_exciter_activation_comparator1__state = 0;
    } else if (_microturbine_governor_exciter_activation_constant1__out > _microturbine_governor_exciter_activation_abs1__out) {
        _microturbine_governor_exciter_activation_comparator1__state = 1;
    }
    // Generated from the component: Microturbine.BE1-25A Synchronizer.PLL.PID controller1
    if (!_microturbine_be1_25a_synchronizer_pll_pid_controller1__av_active) {
        _microturbine_be1_25a_synchronizer_pll_pid_controller1__integrator_state += 2.0 * _microturbine_be1_25a_synchronizer_gain6__out * 0.001;
    }
    // Generated from the component: Microturbine.Governor.Exciter Activation.Activate Exciter
    // Generated from the component: Microturbine.BE1-25A Synchronizer.PLL.C function1
    _microturbine_be1_25a_synchronizer_pll_c_function1__var += (0.001 * _microturbine_be1_25a_synchronizer_pll_c_function1__in);
    // Generated from the component: Microturbine.Exciter.Integrator1
    _microturbine_exciter_integrator1__state += _microturbine_exciter_gain1__out * 0.001;
    if (_microturbine_governor_exciter_activation_activate_exciter__Activate > 0)
        _microturbine_exciter_integrator1__reset_state = 1;
    else if (_microturbine_governor_exciter_activation_activate_exciter__Activate < 0)
        _microturbine_exciter_integrator1__reset_state = -1;
    else
        _microturbine_exciter_integrator1__reset_state = 0;
    // Generated from the component: Microturbine.Exciter.Integrator2
    _microturbine_exciter_integrator2__state += _microturbine_exciter_gain4__out * 0.001;
    if (_microturbine_governor_exciter_activation_activate_exciter__Activate > 0)
        _microturbine_exciter_integrator2__reset_state = 1;
    else if (_microturbine_governor_exciter_activation_activate_exciter__Activate < 0)
        _microturbine_exciter_integrator2__reset_state = -1;
    else
        _microturbine_exciter_integrator2__reset_state = 0;
    // Generated from the component: Microturbine.Exciter.Integrator3
    _microturbine_exciter_integrator3__state += _microturbine_exciter_gain6__out * 0.001;
    if (_microturbine_governor_exciter_activation_activate_exciter__Activate > 0)
        _microturbine_exciter_integrator3__reset_state = 1;
    else if (_microturbine_governor_exciter_activation_activate_exciter__Activate < 0)
        _microturbine_exciter_integrator3__reset_state = -1;
    else
        _microturbine_exciter_integrator3__reset_state = 0;
    if (_microturbine_exciter_integrator3__state > 5.0)
        _microturbine_exciter_integrator3__state = 5.0;
    if (_microturbine_exciter_integrator3__state < -5.0)
        _microturbine_exciter_integrator3__state = -5.0;
    // Generated from the component: Microturbine.Exciter.Integrator4
    _microturbine_exciter_integrator4__state += _microturbine_exciter_gain9__out * 0.001;
    if (_microturbine_governor_exciter_activation_activate_exciter__Activate > 0)
        _microturbine_exciter_integrator4__reset_state = 1;
    else if (_microturbine_governor_exciter_activation_activate_exciter__Activate < 0)
        _microturbine_exciter_integrator4__reset_state = -1;
    else
        _microturbine_exciter_integrator4__reset_state = 0;
    // Generated from the component: Microturbine.Exciter.PI.Integrator1
    _microturbine_exciter_pi_integrator1__state += _microturbine_exciter_pi_sum7__out * 0.001;
    if (_microturbine_governor_exciter_activation_activate_exciter__Activate > 0)
        _microturbine_exciter_pi_integrator1__reset_state = 1;
    else if (_microturbine_governor_exciter_activation_activate_exciter__Activate < 0)
        _microturbine_exciter_pi_integrator1__reset_state = -1;
    else
        _microturbine_exciter_pi_integrator1__reset_state = 0;
    // Generated from the component: Microturbine.BE1-25A Synchronizer.PLL.confine phase
    // Generated from the component: Microturbine.BE1-25A Synchronizer.BE1-25A Synchronizer2
    // Generated from the component: Microturbine.CB_control.Hold after connect2
    if ((_microturbine_cb_control_hold_after_connect2__in1 < 1.05) && (_microturbine_cb_control_hold_after_connect2__in1 > 0.95) && (_microturbine_cb_control_hold_after_connect2__in2 < 1.005) && (_microturbine_cb_control_hold_after_connect2__in2 > 0.995))_microturbine_cb_control_hold_after_connect2__var = 0;
    else _microturbine_cb_control_hold_after_connect2__var = 1;
    // Generated from the component: Microturbine.BE1-25A Synchronizer.confine phase
    // Generated from the component: Microturbine.BE1-25A Synchronizer.BE1-25A Synchronizer1
    // Generated from the component: Microturbine.BE1-25A Synchronizer.stay connected1
    if ((_microturbine_be1_25a_synchronizer_stay_connected1__ready == 1) && (_microturbine_be1_25a_synchronizer_stay_connected1__connectMT == 1) && (_microturbine_be1_25a_synchronizer_stay_connected1__MTsync == 1)) {
        _microturbine_be1_25a_synchronizer_stay_connected1__connect = 1;
    }
    else if ((_microturbine_be1_25a_synchronizer_stay_connected1__connectMT == 0) || (_microturbine_be1_25a_synchronizer_stay_connected1__MTsync == 0)) {
        _microturbine_be1_25a_synchronizer_stay_connected1__connect = 0;
    }
    // Generated from the component: Microturbine.CB_control.stay connected1
    if (_microturbine_cb_control_stay_connected1__connect == 1) {
        _microturbine_cb_control_stay_connected1__var = 1;
    }
    if (_microturbine_cb_control_stay_connected1__disconnect == 0) {
        _microturbine_cb_control_stay_connected1__var = 0;
    }
    // Generated from the component: Microturbine.BE1-25A Synchronizer.Hold after connect
    if ((_microturbine_be1_25a_synchronizer_hold_after_connect__connect == 0) && (_microturbine_be1_25a_synchronizer_hold_after_connect__MT_sync == 1))_microturbine_be1_25a_synchronizer_hold_after_connect__var = _microturbine_be1_25a_synchronizer_hold_after_connect__in;
    else if (_microturbine_be1_25a_synchronizer_hold_after_connect__MT_sync == 0)_microturbine_be1_25a_synchronizer_hold_after_connect__var = 0;
    // Generated from the component: Microturbine.BE1-25A Synchronizer.Hold after connect1
    if ((_microturbine_be1_25a_synchronizer_hold_after_connect1__connect == 0) && (_microturbine_be1_25a_synchronizer_hold_after_connect1__exc_state == 1) && (_microturbine_be1_25a_synchronizer_hold_after_connect1__MT_sync == 1))_microturbine_be1_25a_synchronizer_hold_after_connect1__var = _microturbine_be1_25a_synchronizer_hold_after_connect1__in;
    else if (_microturbine_be1_25a_synchronizer_hold_after_connect1__MT_sync == 0)_microturbine_be1_25a_synchronizer_hold_after_connect1__var = 0;
    // Generated from the component: Microturbine.BE1-25A Synchronizer.Hold after connect2
    if (_microturbine_be1_25a_synchronizer_hold_after_connect2__connect == 0)_microturbine_be1_25a_synchronizer_hold_after_connect2__var = _microturbine_be1_25a_synchronizer_hold_after_connect2__in;
    // Generated from the component: Microturbine.BE1-25A Synchronizer.Hold after connect3
    if (_microturbine_be1_25a_synchronizer_hold_after_connect3__connect == 0)_microturbine_be1_25a_synchronizer_hold_after_connect3__var = _microturbine_be1_25a_synchronizer_hold_after_connect3__in;
    // Generated from the component: Microturbine.Governor.Rate Limiter2
    _microturbine_governor_rate_limiter2__prev_out = _microturbine_governor_rate_limiter2__out;
    _microturbine_governor_rate_limiter2__first_step = 0;
    // Generated from the component: Microturbine.Exciter.Rate Limit
    _microturbine_exciter_rate_limit__prev_out = _microturbine_exciter_rate_limit__out;
    _microturbine_exciter_rate_limit__first_step = 0;
    // Generated from the component: Microturbine.Governor.Discrete Transfer Function1
    _microturbine_governor_discrete_transfer_function1__states[0] = _microturbine_governor_discrete_transfer_function1__delay_line_in;
    // Generated from the component: Microturbine.Governor.Discrete Transfer Function2
    for (_microturbine_governor_discrete_transfer_function2__i = 1; _microturbine_governor_discrete_transfer_function2__i > 0; _microturbine_governor_discrete_transfer_function2__i--) {
        _microturbine_governor_discrete_transfer_function2__states[_microturbine_governor_discrete_transfer_function2__i] = _microturbine_governor_discrete_transfer_function2__states[_microturbine_governor_discrete_transfer_function2__i - 1];
    }
    _microturbine_governor_discrete_transfer_function2__states[0] = _microturbine_governor_discrete_transfer_function2__delay_line_in;
    //@cmp.update.block.end
}
// ----------------------------------------------------------------------------------------  //-----------------------------------------------------------------------------------------