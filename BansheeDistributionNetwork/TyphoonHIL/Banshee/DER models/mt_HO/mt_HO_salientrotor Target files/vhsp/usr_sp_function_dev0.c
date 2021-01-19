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
double _microturbine_be1_25a_synchronizer_constant6__out = 0.001;
double _microturbine_be1_25a_synchronizer_constant7__out = 0.001;
double _microturbine_be1_25a_synchronizer_constant9__out = 0.05;
double _microturbine_be1_25a_synchronizer_unit_delay2__out;
double _microturbine_be1_25a_synchronizer_unit_delay3__out;
double _microturbine_be1_25a_synchronizer_unit_delay4__out;
X_Int32 _microturbine_be1_25a_synchronizer_unit_delay5__out;
double _microturbine_connect_mcb__out;
double _microturbine_connect_mt__out;
double _microturbine_constant1__out = 1.0;
double _microturbine_constant2__out = 376.99111843077515;
double _microturbine_ea1_va1__out;
double _microturbine_eb1_va1__out;
double _microturbine_ec1_va1__out;
double _microturbine_ia1_ia1__out;
double _microturbine_ib1_ia1__out;
double _microturbine_ic1_ia1__out;
X_Int32 _microturbine_mt_sync__out;
double _microturbine_va_g1_va1__out;
double _microturbine_vb_g1_va1__out;
double _microturbine_vc_g1_va1__out;
double _microturbine_qd0_pu__clock1__out;
double _microturbine_qd0_pu__constant1__out = 0.0;
double _microturbine_qd0_pu__e_qp_constant1__out = 1.930201397855058;
double _microturbine_qd0_pu__e_qp_constant2__out = 0.24050623578038516;
double _microturbine_qd0_pu__e_qp_constant3__out = 0.4199553748870971;
double _microturbine_qd0_pu__e_qp_integrator1__out;
double _microturbine_qd0_pu__engine_integrator1__out;
double _microturbine_qd0_pu__exciter_constant1__out = 0.0;
double _microturbine_qd0_pu__governor_agc__out;
double _microturbine_qd0_pu__governor_exciter_activation_constant1__out = 0.002;
double _microturbine_qd0_pu__governor_exciter_activation_constant2__out = 1.0;
double _microturbine_qd0_pu__governor_integrator10__out;
double _microturbine_qd0_pu__governor_integrator11__out;
double _microturbine_qd0_pu__governor_integrator12__out;
double _microturbine_qd0_pu__governor_integrator9__out;
double _microturbine_qd0_pu__phi_1d_a_constant1__out = 0.4199553748870971;
double _microturbine_qd0_pu__phi_1d_a_integrator1__out;
double _microturbine_qd0_pu__phi_2q_a_constant1__out = 1.7196607045831453;
double _microturbine_qd0_pu__phi_2q_a_integrator1__out;
double _microturbine_qd0_pu__phi_d_a_2_constant1__out = 0.8989981135901638;
double _microturbine_qd0_pu__phi_d_a_2_constant2__out = 0.10100188640983622;
double _microturbine_qd0_pu__phi_q_a_2_constant2__out = 0.8779625044216485;
double _microturbine_qd0_pu__v_dg2_constant2__out = 376.99111843077515;
double _microturbine_qd0_pu__v_qg2_constant2__out = 376.99111843077515;
double _microturbine_qd0_pu__vref__out;
double _microturbine_qd0_pu__w_m_constant1__out = 0.00580671125220663;
double _microturbine_qd0_pu__w_m_integrator1__out;
double _microturbine_qd0_pu__wref__out;
double _sinusoidal_source1__out;
double _sinusoidal_source2__out;
double _sinusoidal_source3__out;
float _microturbine_be1_25a_synchronizer_digital_probe1__tmp;
X_Int32 _microturbine_be1_25a_synchronizer_logical_operator2__out;
double _microturbine_cb_control_logical_operator4__out;
float _microturbine_cb_control_mcb_on__tmp;
double _microturbine_cb_control_logical_operator2__out;
double _microturbine_be1_25a_synchronizer_current_abc_to_dq3_abc_to_dq1_abc_to_alpha_beta__alpha;
double _microturbine_be1_25a_synchronizer_current_abc_to_dq3_abc_to_dq1_abc_to_alpha_beta__beta;
double _microturbine_be1_25a_synchronizer_current_abc_to_dq3_abc_to_dq1_abc_to_alpha_beta__gamma;
double _microturbine_qd0_pu__abc_to_dq1_abc_to_alpha_beta__alpha;
double _microturbine_qd0_pu__abc_to_dq1_abc_to_alpha_beta__beta;
double _microturbine_qd0_pu__abc_to_dq1_abc_to_alpha_beta__gamma;
X_Int32 _microturbine_logical_operator1__out;
float _microturbine_mt_sync_on__tmp;
double _microturbine_be1_25a_synchronizer_sum6__out;
double _microturbine_be1_25a_synchronizer_sum7__out;
double _microturbine_be1_25a_synchronizer_sum8__out;
double _microturbine_be1_25a_synchronizer_abc_to_dq1_abc_to_alpha_beta__alpha;
double _microturbine_be1_25a_synchronizer_abc_to_dq1_abc_to_alpha_beta__beta;
double _microturbine_be1_25a_synchronizer_abc_to_dq1_abc_to_alpha_beta__gamma;
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
double _microturbine_qd0_pu__governor_gain35__out;
double _microturbine_qd0_pu__engine_sum1__out;
double _microturbine_qd0_pu__governor_sum2__out;
double _microturbine_qd0_pu__governor_gain36__out;
double _microturbine_qd0_pu__phi_d_a_2_product1__out;
double _microturbine_qd0_pu__phi_d_a_2_product2__out;
double _microturbine_qd0_pu__phi_q_a_2_product2__out;
double _microturbine_qd0_pu__w_m_gain1__out;
double _microturbine_qd0_pu__gain1__out;
double _microturbine_qd0_pu__gain16__out;
double _microturbine_qd0_pu__governor_gain28__out;
double _gain3__out;
double _gain5__out;
double _gain4__out;
float _microturbine_be1_25a_synchronizer_digital_probe6__tmp;
float _microturbine_cb_control_mcb_off__tmp;
double _microturbine_cb_control_logical_operator1__out;
double _microturbine_be1_25a_synchronizer_current_abc_to_dq3_abc_to_dq1_alpha_beta_to_dq__d;
double _microturbine_be1_25a_synchronizer_current_abc_to_dq3_abc_to_dq1_alpha_beta_to_dq__q;
double _microturbine_be1_25a_synchronizer_current_abc_to_dq3_abc_to_dq1_alpha_beta_to_dq__k1;
double _microturbine_be1_25a_synchronizer_current_abc_to_dq3_abc_to_dq1_alpha_beta_to_dq__k2;
float _microturbine_mt_sync_off__tmp;
double _microturbine_be1_25a_synchronizer_abc_to_dq2_abc_to_alpha_beta__alpha;
double _microturbine_be1_25a_synchronizer_abc_to_dq2_abc_to_alpha_beta__beta;
double _microturbine_be1_25a_synchronizer_abc_to_dq2_abc_to_alpha_beta__gamma;
double _microturbine_be1_25a_synchronizer_abc_to_dq1_alpha_beta_to_dq__d;
double _microturbine_be1_25a_synchronizer_abc_to_dq1_alpha_beta_to_dq__q;
double _microturbine_be1_25a_synchronizer_abc_to_dq1_alpha_beta_to_dq__k1;
double _microturbine_be1_25a_synchronizer_abc_to_dq1_alpha_beta_to_dq__k2;
double _microturbine_qd0_pu__governor_sum9__out;
double _microturbine_qd0_pu__engine_gain1__out;
double _microturbine_qd0_pu__governor_gain29__out;
double _microturbine_qd0_pu__w_m_product1__out;
double _microturbine_be1_25a_synchronizer_gain4__out;
double _microturbine_qd0_pu__product1__out;
double _microturbine_qd0_pu__v_dg2_product3__out;
double _microturbine_qd0_pu__v_qg2_product3__out;
double _microturbine_qd0_pu__governor_exciter_activation_sum1__out;
float _microturbine_cb_control_gcb_on__tmp;
double _microturbine_cb_control_logical_operator3__out;
double _microturbine_be1_25a_synchronizer_gain12__out;
double _microturbine_be1_25a_synchronizer_gain7__out;
double _microturbine_be1_25a_synchronizer_abc_to_dq2_alpha_beta_to_dq__d;
double _microturbine_be1_25a_synchronizer_abc_to_dq2_alpha_beta_to_dq__q;
double _microturbine_be1_25a_synchronizer_abc_to_dq2_alpha_beta_to_dq__k1;
double _microturbine_be1_25a_synchronizer_abc_to_dq2_alpha_beta_to_dq__k2;
double _microturbine_be1_25a_synchronizer_gain5__out;
double _microturbine_be1_25a_synchronizer_gain6__out;
double _microturbine_qd0_pu__abc_to_dq1_alpha_beta_to_dq__d;
double _microturbine_qd0_pu__abc_to_dq1_alpha_beta_to_dq__q;
double _microturbine_qd0_pu__abc_to_dq1_alpha_beta_to_dq__k1;
double _microturbine_qd0_pu__abc_to_dq1_alpha_beta_to_dq__k2;
double _microturbine_qd0_pu__governor_exciter_activation_abs1__out;
float _microturbine_cb_control_gcb_off__tmp;
double _microturbine_be1_25a_synchronizer_product2__out;
double _microturbine_qd0_pu__magnitude_product5__out;
double _microturbine_be1_25a_synchronizer_limit1__out;
double _microturbine_be1_25a_synchronizer_product1__out;
double _microturbine_qd0_pu__magnitude_product6__out;
double _microturbine_be1_25a_synchronizer_limit2__out;
double _microturbine_be1_25a_synchronizer_product3__out;
double _microturbine_be1_25a_synchronizer_pll_pid_controller1__out;
double _microturbine_be1_25a_synchronizer_pll_pid_controller1__pi_reg_out_int;
double _microturbine_be1_25a_synchronizer_product4__out;
double _microturbine_qd0_pu__gain10__out;
double _microturbine_qd0_pu__gain11__out;
double _microturbine_qd0_pu__governor_exciter_activation_comparator1__out;
double _microturbine_be1_25a_synchronizer_trigonometric_function1__out;
double _microturbine_be1_25a_synchronizer_sum4__out;
double _microturbine_qd0_pu__magnitude_sum3__out;
double _microturbine_be1_25a_synchronizer_trigonometric_function2__out;
double _microturbine_be1_25a_synchronizer_gain3__out;
double _microturbine_be1_25a_synchronizer_pll_c_function1__var;
double _microturbine_be1_25a_synchronizer_pll_c_function1__in;


double _microturbine_be1_25a_synchronizer_pll_c_function1__out;
double _microturbine_signal_switch1__out;
double _microturbine_be1_25a_synchronizer_sum5__out;
double _microturbine_qd0_pu__gain14__out;
double _microturbine_qd0_pu__gain6__out;
double _microturbine_qd0_pu__governor_exciter_activation_activate_exciter__boolean;


X_Int32 _microturbine_qd0_pu__governor_exciter_activation_activate_exciter__Activate;
double _microturbine_be1_25a_synchronizer_confine_phase1__x;
double _microturbine_be1_25a_synchronizer_confine_phase1__floor_in;
double _microturbine_be1_25a_synchronizer_confine_phase1__in;


double _microturbine_be1_25a_synchronizer_confine_phase1__out;
double _microturbine_be1_25a_synchronizer_mathematical_function1__out;
double _microturbine_qd0_pu__magnitude_mathematical_function1__out;
double _microturbine_be1_25a_synchronizer_confine_phase2__x;
double _microturbine_be1_25a_synchronizer_confine_phase2__floor_in;
double _microturbine_be1_25a_synchronizer_confine_phase2__in;


double _microturbine_be1_25a_synchronizer_confine_phase2__out;
double _microturbine_be1_25a_synchronizer_sum2__out;
double _microturbine_be1_25a_synchronizer_pll_confine_phase__x;
double _microturbine_be1_25a_synchronizer_pll_confine_phase__floor_in;
double _microturbine_be1_25a_synchronizer_pll_confine_phase__in;


double _microturbine_be1_25a_synchronizer_pll_confine_phase__out;
double _microturbine_qd0_pu___v_4__out;
double _microturbine_be1_25a_synchronizer_mathematical_function2__out;
double _microturbine_qd0_pu__phi_2q_a_product1__out;
double _microturbine_qd0_pu__phi_q_a_2_gain1__out;
double _microturbine_qd0_pu__e_qp_product3__out;
double _microturbine_qd0_pu__gain15__out;
double _microturbine_qd0_pu__phi_1d_a_product1__out;
double _microturbine_qd0_pu__phi_d_a_2_gain1__out;
double _microturbine_qd0_pu__exciter_integrator1__out;
double _microturbine_qd0_pu__exciter_integrator2__out;
double _microturbine_qd0_pu__exciter_integrator3__out;
double _microturbine_qd0_pu__exciter_integrator4__out;
X_Int32 _microturbine_qd0_pu__exciter_logical_operator1__out;
double _microturbine_qd0_pu__exciter_pi_integrator1__out;
float _microturbine_qd0_pu__exciter_exciter_on__tmp;
double _microturbine_qd0_pu__gain17__out;
double _microturbine_be1_25a_synchronizer_sum1__out;
double _microturbine_be1_25a_synchronizer_abs5__out;
double _microturbine_qd0_pu__governor_gain4__out;
double _microturbine_be1_25a_synchronizer_sum3__out;
double _microturbine_signal_switch2__out;
double _microturbine_qd0_pu__phi_2q_a_sum1__out;
double _microturbine_qd0_pu__phi_q_a_2_sum1__out;
double _microturbine_qd0_pu__e_qp_sum3__out;
double _microturbine_qd0_pu__phi_1d_a_sum1__out;
double _microturbine_qd0_pu__phi_d_a_2_sum1__out;
double _microturbine_qd0_pu__exciter_gain2__out;
double _microturbine_qd0_pu__exciter_gain3__out;
double _microturbine_qd0_pu__exciter_gain5__out;
double _microturbine_qd0_pu__exciter_pi_ki__out;
double _microturbine_qd0_pu__exciter_pi_kp__out;
double _microturbine_qd0_pu__exciter_gain7__out;
double _microturbine_qd0_pu__exciter_sum5__out;
float _microturbine_qd0_pu__exciter_exciter_off__tmp;
double _microturbine_be1_25a_synchronizer_confine_phase__in;


double _microturbine_be1_25a_synchronizer_confine_phase__out;
double _microturbine_be1_25a_synchronizer_relational_operator2__out;
double _microturbine_qd0_pu__governor_rate_limiter1__in_rate;
double _microturbine_be1_25a_synchronizer_abs2__out;
double _microturbine_be1_25a_synchronizer_be1_25a_synchronizer1__dV;


double _microturbine_be1_25a_synchronizer_be1_25a_synchronizer1__del_V;
double _microturbine_qd0_pu___v_3__out;
double _microturbine_qd0_pu__phi_2q_a_gain1__out;
double _microturbine_qd0_pu__v_dg2_product2__out;
double _microturbine_qd0_pu__v_qg2_gain1__out;
double _microturbine_qd0_pu__w_m_product2__out;
double _microturbine_qd0_pu__e_qp_product2__out;
double _microturbine_qd0_pu__phi_1d_a_gain1__out;
double _microturbine_qd0_pu__v_dg2_gain1__out;
double _microturbine_qd0_pu__v_qg2_product2__out;
double _microturbine_qd0_pu__w_m_product3__out;
double _microturbine_qd0_pu__exciter_sum1__out;
double _microturbine_qd0_pu__exciter_sum2__out;
double _microturbine_qd0_pu__exciter_pi_sum5__out;
double _microturbine_qd0_pu__exciter_gain9__out;
double _microturbine_be1_25a_synchronizer_abs4__out;
float _microturbine_be1_25a_synchronizer_digital_probe4__tmp;
double _microturbine_qd0_pu__governor_sum6__out;
double _microturbine_be1_25a_synchronizer_relational_operator4__out;
double _microturbine_be1_25a_synchronizer_hold_after_connect1__var;
X_Int32 _microturbine_be1_25a_synchronizer_hold_after_connect1__MT_sync;
X_Int32 _microturbine_be1_25a_synchronizer_hold_after_connect1__connect;
X_Int32 _microturbine_be1_25a_synchronizer_hold_after_connect1__exc_state;
double _microturbine_be1_25a_synchronizer_hold_after_connect1__in;


double _microturbine_be1_25a_synchronizer_hold_after_connect1__out;
double _microturbine_qd0_pu__exciter_sum6__out;
double _microturbine_qd0_pu__v_qg2_differentiator1__out;
double _microturbine_qd0_pu__e_qp_sum2__out;
double _microturbine_qd0_pu__v_dg2_differentiator1__out;
double _microturbine_qd0_pu__w_m_sum1__out;
double _microturbine_qd0_pu__exciter_gain1__out;
double _microturbine_qd0_pu__exciter_gain4__out;
double _microturbine_qd0_pu__exciter_pi_limit1__out;
double _microturbine_be1_25a_synchronizer_be1_25a_synchronizer__angle_slip;
double _microturbine_be1_25a_synchronizer_be1_25a_synchronizer__df;


double _microturbine_be1_25a_synchronizer_be1_25a_synchronizer__del_w;
double _microturbine_be1_25a_synchronizer_relational_operator1__out;
double _microturbine_qd0_pu__governor_sum7__out;
float _microturbine_be1_25a_synchronizer_digital_probe5__tmp;
double _microturbine_qd0_pu__exciter_sum4__out;
double _microturbine_qd0_pu__v_qg2_sum2__out;
double _microturbine_qd0_pu__e_qp_product1__out;
double _microturbine_qd0_pu__v_dg2_sum2__out;
double _microturbine_qd0_pu__w_m_sum2__out;
double _microturbine_qd0_pu__exciter_pi_sum6__out;
double _microturbine_be1_25a_synchronizer_hold_after_connect__var;
X_Int32 _microturbine_be1_25a_synchronizer_hold_after_connect__MT_sync;
X_Int32 _microturbine_be1_25a_synchronizer_hold_after_connect__connect;
double _microturbine_be1_25a_synchronizer_hold_after_connect__in;


double _microturbine_be1_25a_synchronizer_hold_after_connect__out;
float _microturbine_be1_25a_synchronizer_digital_probe3__tmp;
double _microturbine_be1_25a_synchronizer_logical_operator1__out;
double _microturbine_qd0_pu__governor_sum10__out;
double _microturbine_qd0_pu__exciter__v_1__out;
double _microturbine_qd0_pu__gain8__out;
double _microturbine_qd0_pu__e_qp_sum1__out;
double _microturbine_qd0_pu__gain9__out;
double _microturbine_qd0_pu__w_m_gain2__out;
double _microturbine_qd0_pu__exciter_pi_kb__out;
double _microturbine_be1_25a_synchronizer_stay_connected1__connect;
X_Int32 _microturbine_be1_25a_synchronizer_stay_connected1__MTsync;
double _microturbine_be1_25a_synchronizer_stay_connected1__connectMT;
double _microturbine_be1_25a_synchronizer_stay_connected1__ready;


X_Int32 _microturbine_be1_25a_synchronizer_stay_connected1__out;
double _microturbine_qd0_pu__governor_gain30__out;
double _microturbine_qd0_pu__exciter_rate_limit__in_rate;
double _microturbine_qd0_pu__e_qp_gain1__out;
double _microturbine_qd0_pu__gain2__out;
double _microturbine_qd0_pu__exciter_pi_sum7__out;
double _microturbine_qd0_pu__governor_sum3__out;
double _microturbine_qd0_pu__exciter_gain8__out;
double _microturbine_qd0_pu__dq_to_abc1_dq_to_alpha_beta__alpha;
double _microturbine_qd0_pu__dq_to_abc1_dq_to_alpha_beta__beta;
double _microturbine_qd0_pu__dq_to_abc1_dq_to_alpha_beta__k1;
double _microturbine_qd0_pu__dq_to_abc1_dq_to_alpha_beta__k2;
double _microturbine_qd0_pu__governor_gain31__out;
double _microturbine_qd0_pu__exciter_sum3__out;
double _microturbine_qd0_pu__dq_to_abc1_alpha_beta_to_abc__A;
double _microturbine_qd0_pu__dq_to_abc1_alpha_beta_to_abc__B;
double _microturbine_qd0_pu__dq_to_abc1_alpha_beta_to_abc__C;
double _microturbine_qd0_pu__governor_sum4__out;
double _microturbine_qd0_pu__exciter_gain6__out;
double _microturbine_qd0_pu__governor_gain32__out;
double _microturbine_qd0_pu__governor_sum5__out;
double _microturbine_qd0_pu__governor_gain33__out;
double _microturbine_qd0_pu__governor_sum8__out;
double _microturbine_qd0_pu__governor_gain34__out;//@cmp.var.end

//@cmp.svar.start
// state variables
double _microturbine_be1_25a_synchronizer_unit_delay2__state;
double _microturbine_be1_25a_synchronizer_unit_delay3__state;
double _microturbine_be1_25a_synchronizer_unit_delay4__state;
X_Int32 _microturbine_be1_25a_synchronizer_unit_delay5__state;
double _microturbine_qd0_pu__clock1__state;
double _microturbine_qd0_pu__e_qp_integrator1__state;
double _microturbine_qd0_pu__engine_integrator1__state;
double _microturbine_qd0_pu__governor_integrator10__state;
double _microturbine_qd0_pu__governor_integrator11__state;
double _microturbine_qd0_pu__governor_integrator12__state;
double _microturbine_qd0_pu__governor_integrator9__state;
double _microturbine_qd0_pu__phi_1d_a_integrator1__state;
double _microturbine_qd0_pu__phi_2q_a_integrator1__state;
double _microturbine_qd0_pu__w_m_integrator1__state;
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
double _microturbine_be1_25a_synchronizer_pll_pid_controller1__integrator_state;
X_UnInt32 _microturbine_be1_25a_synchronizer_pll_pid_controller1__av_active;
double _microturbine_be1_25a_synchronizer_pll_pid_controller1__filter_state;
double _microturbine_qd0_pu__governor_exciter_activation_comparator1__state;
double _microturbine_qd0_pu__exciter_integrator1__state;
X_Int32 _microturbine_qd0_pu__exciter_integrator1__reset_state;
double _microturbine_qd0_pu__exciter_integrator2__state;
X_Int32 _microturbine_qd0_pu__exciter_integrator2__reset_state;
double _microturbine_qd0_pu__exciter_integrator3__state;
X_Int32 _microturbine_qd0_pu__exciter_integrator3__reset_state;
double _microturbine_qd0_pu__exciter_integrator4__state;
X_Int32 _microturbine_qd0_pu__exciter_integrator4__reset_state;
double _microturbine_qd0_pu__exciter_pi_integrator1__state;
X_Int32 _microturbine_qd0_pu__exciter_pi_integrator1__reset_state;
double _microturbine_qd0_pu__governor_rate_limiter1__prev_out;
double _microturbine_qd0_pu__governor_rate_limiter1__out;
int _microturbine_qd0_pu__governor_rate_limiter1__first_step;
double _microturbine_qd0_pu__v_qg2_differentiator1__state;
double _microturbine_qd0_pu__v_dg2_differentiator1__state;
double _microturbine_qd0_pu__exciter_rate_limit__prev_out;
double _microturbine_qd0_pu__exciter_rate_limit__out;
int _microturbine_qd0_pu__exciter_rate_limit__first_step;
//@cmp.svar.end



// generated using template: virtual_hil/custom_functions.template---------------------------------
void ReInit_user_sp_cpu_dev0() {
#if DEBUG_MODE
    printf("\n\rReInitTimer");
#endif
    //@cmp.init.block.start
    _microturbine_be1_25a_synchronizer_unit_delay2__state = 0.0;
    _microturbine_be1_25a_synchronizer_unit_delay3__state = 0.0;
    _microturbine_be1_25a_synchronizer_unit_delay4__state = 0.0;
    _microturbine_be1_25a_synchronizer_unit_delay5__state = 0.0;
    _microturbine_qd0_pu__clock1__state = 0.0f;
    _microturbine_qd0_pu__e_qp_integrator1__state = 0.0;
    _microturbine_qd0_pu__engine_integrator1__state = 0.0;
    _microturbine_qd0_pu__governor_integrator10__state = 0.0;
    _microturbine_qd0_pu__governor_integrator11__state = 0.0;
    _microturbine_qd0_pu__governor_integrator12__state = 0.0;
    _microturbine_qd0_pu__governor_integrator9__state = 0.0;
    _microturbine_qd0_pu__phi_1d_a_integrator1__state = 0.0;
    _microturbine_qd0_pu__phi_2q_a_integrator1__state = 0.0;
    _microturbine_qd0_pu__w_m_integrator1__state = 0.0;
    _sinusoidal_source1__current_phase = 0.0 / 360.0f;
    _sinusoidal_source2__current_phase = -120.0 / 360.0f;
    _sinusoidal_source3__current_phase = 120.0 / 360.0f;
    HIL_OutAO(0x400b, 0.0f);
    HIL_OutAO(0x400a, 0.0f);
    _microturbine_three_phase_meter1_power_meter__filter_1_output_k_minus_1 = 0.0;
    _microturbine_three_phase_meter1_power_meter__filter_1_input_k_minus_1 = 0.0;
    _microturbine_three_phase_meter1_power_meter__filter_1_output_k_minus_1Q = 0.0;
    _microturbine_three_phase_meter1_power_meter__filter_1_input_k_minus_1Q = 0.0;
    _microturbine_three_phase_meter1_power_meter__filter_1_output_k_minus_1P0 = 0.0;
    _microturbine_three_phase_meter1_power_meter__filter_1_input_k_minus_1P0 = 0.0;
    HIL_OutAO(0x4016, 0.0f);
    HIL_OutAO(0x4027, 0.0f);
    HIL_OutAO(0x4021, 0.0f);
    HIL_OutAO(0x4022, 0.0f);
    HIL_OutAO(0x4002, 0.0f);
    HIL_OutAO(0x4003, 0.0f);
    HIL_OutAO(0x4004, 0.0f);
    HIL_OutAO(0x4011, 0.0f);
    HIL_OutAO(0x4012, 0.0f);
    HIL_OutAO(0x4013, 0.0f);
    HIL_OutAO(0x4014, 0.0f);
    HIL_OutAO(0x4025, 0.0f);
    HIL_OutFloat(137101315, 0.0);
    HIL_OutFloat(137101316, 0.0);
    HIL_OutFloat(137101317, 0.0);
    HIL_OutAO(0x400e, 0.0f);
    HIL_OutAO(0x401e, 0.0f);
    HIL_OutAO(0x4001, 0.0f);
    HIL_OutAO(0x4000, 0.0f);
    HIL_OutAO(0x4005, 0.0f);
    HIL_OutAO(0x4006, 0.0f);
    HIL_OutAO(0x4007, 0.0f);
    _microturbine_be1_25a_synchronizer_pll_pid_controller1__integrator_state =  376.99111843077515;
    _microturbine_be1_25a_synchronizer_pll_pid_controller1__filter_state =  0.0;
    HIL_OutAO(0x4008, 0.0f);
    _microturbine_qd0_pu__governor_exciter_activation_comparator1__state = 0.0f;
    _microturbine_be1_25a_synchronizer_pll_c_function1__var = 0;
    HIL_OutAO(0x4020, 0.0f);
    _microturbine_qd0_pu__governor_exciter_activation_activate_exciter__Activate = 0;
    _microturbine_be1_25a_synchronizer_confine_phase1__floor_in = 0;
    _microturbine_be1_25a_synchronizer_confine_phase2__floor_in = 0;
    HIL_OutAO(0x400f, 0.0f);
    _microturbine_be1_25a_synchronizer_pll_confine_phase__floor_in = 0;
    _microturbine_qd0_pu__exciter_integrator1__state = 0.0;
    _microturbine_qd0_pu__exciter_integrator1__reset_state = 2;
    _microturbine_qd0_pu__exciter_integrator2__state = 0.0;
    _microturbine_qd0_pu__exciter_integrator2__reset_state = 2;
    _microturbine_qd0_pu__exciter_integrator3__state = 0.0;
    _microturbine_qd0_pu__exciter_integrator3__reset_state = 2;
    _microturbine_qd0_pu__exciter_integrator4__state = 0.0;
    _microturbine_qd0_pu__exciter_integrator4__reset_state = 2;
    _microturbine_qd0_pu__exciter_pi_integrator1__state = 0.0;
    _microturbine_qd0_pu__exciter_pi_integrator1__reset_state = 2;
    HIL_OutAO(0x401d, 0.0f);
    HIL_OutAO(0x4028, 0.0f);
    HIL_OutAO(0x400c, 0.0f);
    HIL_OutAO(0x4010, 0.0f);
    HIL_OutAO(0x401f, 0.0f);
    HIL_OutAO(0x4019, 0.0f);
    HIL_OutAO(0x401a, 0.0f);
    HIL_OutAO(0x401b, 0.0f);
    HIL_OutAO(0x4029, 0.0f);
    _microturbine_qd0_pu__governor_rate_limiter1__first_step = 1;
    HIL_OutAO(0x400d, 0.0f);
    HIL_OutAO(0x4024, 0.0f);
    HIL_OutAO(0x4023, 0.0f);
    HIL_OutAO(0x4009, 0.0f);
    _microturbine_be1_25a_synchronizer_hold_after_connect1__var = 0;
    _microturbine_qd0_pu__v_qg2_differentiator1__state =  0.0f;
    _microturbine_qd0_pu__v_dg2_differentiator1__state =  0.0f;
    HIL_OutAO(0x4026, 0.0f);
    HIL_OutAO(0x4015, 0.0f);
    _microturbine_be1_25a_synchronizer_hold_after_connect__var = 0;
    HIL_OutAO(0x4018, 0.0f);
    HIL_OutAO(0x4017, 0.0f);
    _microturbine_be1_25a_synchronizer_stay_connected1__connect = 0;
    _microturbine_qd0_pu__exciter_rate_limit__first_step = 1;
    HIL_OutAO(0x401c, 0.0f);
    HIL_OutFloat(137101312, 0.0);
    HIL_OutFloat(137101313, 0.0);
    HIL_OutFloat(137101314, 0.0);
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
    // Generated from the component: Microturbine.BE1-25A Synchronizer.Constant6
    // Generated from the component: Microturbine.BE1-25A Synchronizer.Constant7
    // Generated from the component: Microturbine.BE1-25A Synchronizer.Constant9
    // Generated from the component: Microturbine.BE1-25A Synchronizer.Unit Delay2
    _microturbine_be1_25a_synchronizer_unit_delay2__out = _microturbine_be1_25a_synchronizer_unit_delay2__state;
    // Generated from the component: Microturbine.BE1-25A Synchronizer.Unit Delay3
    _microturbine_be1_25a_synchronizer_unit_delay3__out = _microturbine_be1_25a_synchronizer_unit_delay3__state;
    // Generated from the component: Microturbine.BE1-25A Synchronizer.Unit Delay4
    _microturbine_be1_25a_synchronizer_unit_delay4__out = _microturbine_be1_25a_synchronizer_unit_delay4__state;
    // Generated from the component: Microturbine.BE1-25A Synchronizer.Unit Delay5
    _microturbine_be1_25a_synchronizer_unit_delay5__out = _microturbine_be1_25a_synchronizer_unit_delay5__state;
    // Generated from the component: Microturbine.Connect MCB
    _microturbine_connect_mcb__out = XIo_InFloat(0x55000100);
    // Generated from the component: Microturbine.Connect MT
    _microturbine_connect_mt__out = XIo_InFloat(0x55000104);
    // Generated from the component: Microturbine.Constant1
    // Generated from the component: Microturbine.Constant2
    // Generated from the component: Microturbine.Ea1.Va1
    _microturbine_ea1_va1__out = (HIL_InFloat(0xc80000 + 0x6));
    // Generated from the component: Microturbine.Eb1.Va1
    _microturbine_eb1_va1__out = (HIL_InFloat(0xc80000 + 0x8));
    // Generated from the component: Microturbine.Ec1.Va1
    _microturbine_ec1_va1__out = (HIL_InFloat(0xc80000 + 0xa));
    // Generated from the component: Microturbine.Ia1.Ia1
    _microturbine_ia1_ia1__out = (HIL_InFloat(0xc80000 + 0x11));
    // Generated from the component: Microturbine.Ib1.Ia1
    _microturbine_ib1_ia1__out = (HIL_InFloat(0xc80000 + 0x12));
    // Generated from the component: Microturbine.Ic1.Ia1
    _microturbine_ic1_ia1__out = (HIL_InFloat(0xc80000 + 0x13));
    // Generated from the component: Microturbine.MT_sync
    _microturbine_mt_sync__out = XIo_InInt32(0x55000108);
    // Generated from the component: Microturbine.Va_G1.Va1
    _microturbine_va_g1_va1__out = (HIL_InFloat(0xc80000 + 0xc));
    // Generated from the component: Microturbine.Vb_G1.Va1
    _microturbine_vb_g1_va1__out = (HIL_InFloat(0xc80000 + 0xd));
    // Generated from the component: Microturbine.Vc_G1.Va1
    _microturbine_vc_g1_va1__out = (HIL_InFloat(0xc80000 + 0xe));
    // Generated from the component: Microturbine.qd0(PU).Clock1
    _microturbine_qd0_pu__clock1__out = _microturbine_qd0_pu__clock1__state;
    // Generated from the component: Microturbine.qd0(PU).Constant1
    // Generated from the component: Microturbine.qd0(PU).E_qp.Constant1
    // Generated from the component: Microturbine.qd0(PU).E_qp.Constant2
    // Generated from the component: Microturbine.qd0(PU).E_qp.Constant3
    // Generated from the component: Microturbine.qd0(PU).E_qp.Integrator1
    _microturbine_qd0_pu__e_qp_integrator1__out = _microturbine_qd0_pu__e_qp_integrator1__state;
    // Generated from the component: Microturbine.qd0(PU).Engine.Integrator1
    _microturbine_qd0_pu__engine_integrator1__out = _microturbine_qd0_pu__engine_integrator1__state;
    // Generated from the component: Microturbine.qd0(PU).Exciter.Constant1
    // Generated from the component: Microturbine.qd0(PU).Governor.AGC
    _microturbine_qd0_pu__governor_agc__out = XIo_InFloat(0x5500010c);
    // Generated from the component: Microturbine.qd0(PU).Governor.Exciter Activation.Constant1
    // Generated from the component: Microturbine.qd0(PU).Governor.Exciter Activation.Constant2
    // Generated from the component: Microturbine.qd0(PU).Governor.Integrator10
    _microturbine_qd0_pu__governor_integrator10__out = _microturbine_qd0_pu__governor_integrator10__state;
    // Generated from the component: Microturbine.qd0(PU).Governor.Integrator11
    _microturbine_qd0_pu__governor_integrator11__out = _microturbine_qd0_pu__governor_integrator11__state;
    // Generated from the component: Microturbine.qd0(PU).Governor.Integrator12
    _microturbine_qd0_pu__governor_integrator12__out = _microturbine_qd0_pu__governor_integrator12__state;
    // Generated from the component: Microturbine.qd0(PU).Governor.Integrator9
    _microturbine_qd0_pu__governor_integrator9__out = _microturbine_qd0_pu__governor_integrator9__state;
    // Generated from the component: Microturbine.qd0(PU).Phi_1d_a.Constant1
    // Generated from the component: Microturbine.qd0(PU).Phi_1d_a.Integrator1
    _microturbine_qd0_pu__phi_1d_a_integrator1__out = _microturbine_qd0_pu__phi_1d_a_integrator1__state;
    // Generated from the component: Microturbine.qd0(PU).Phi_2q_a.Constant1
    // Generated from the component: Microturbine.qd0(PU).Phi_2q_a.Integrator1
    _microturbine_qd0_pu__phi_2q_a_integrator1__out = _microturbine_qd0_pu__phi_2q_a_integrator1__state;
    // Generated from the component: Microturbine.qd0(PU).Phi_d_a 2.Constant1
    // Generated from the component: Microturbine.qd0(PU).Phi_d_a 2.Constant2
    // Generated from the component: Microturbine.qd0(PU).Phi_q_a 2.Constant2
    // Generated from the component: Microturbine.qd0(PU).V_dG2.Constant2
    // Generated from the component: Microturbine.qd0(PU).V_qG2.Constant2
    // Generated from the component: Microturbine.qd0(PU).Vref
    _microturbine_qd0_pu__vref__out = XIo_InFloat(0x55000110);
    // Generated from the component: Microturbine.qd0(PU).w_m.Constant1
    // Generated from the component: Microturbine.qd0(PU).w_m.Integrator1
    _microturbine_qd0_pu__w_m_integrator1__out = _microturbine_qd0_pu__w_m_integrator1__state;
    // Generated from the component: Microturbine.qd0(PU).wref
    _microturbine_qd0_pu__wref__out = XIo_InFloat(0x55000114);
    // Generated from the component: Sinusoidal Source1
    _sinusoidal_source1__out = (1.0 * sin(2.0f * M_PI * _sinusoidal_source1__current_phase) + 0.0);
    // Generated from the component: Sinusoidal Source2
    _sinusoidal_source2__out = (1.0 * sin(2.0f * M_PI * _sinusoidal_source2__current_phase) + 0.0);
    // Generated from the component: Sinusoidal Source3
    _sinusoidal_source3__out = (1.0 * sin(2.0f * M_PI * _sinusoidal_source3__current_phase) + 0.0);
    // Generated from the component: Microturbine.BE1-25A Synchronizer.del_w
    HIL_OutAO(0x400b, (float)_microturbine_be1_25a_synchronizer_unit_delay3__out);
    // Generated from the component: Microturbine.BE1-25A Synchronizer.del_V
    HIL_OutAO(0x400a, (float)_microturbine_be1_25a_synchronizer_unit_delay4__out);
    // Generated from the component: Microturbine.BE1-25A Synchronizer.Digital Probe1
    HIL_OutInt32(0xf00400, _microturbine_be1_25a_synchronizer_unit_delay5__out != 0x0);
    // Generated from the component: Microturbine.BE1-25A Synchronizer.Logical operator2
    _microturbine_be1_25a_synchronizer_logical_operator2__out = !_microturbine_be1_25a_synchronizer_unit_delay5__out;
    // Generated from the component: Microturbine.CB_control.Logical operator4
    _microturbine_cb_control_logical_operator4__out = !_microturbine_connect_mcb__out;
    // Generated from the component: Microturbine.CB_control.MCB ON
    HIL_OutInt32(0xf00408, _microturbine_connect_mcb__out != 0x0);
    // Generated from the component: Termination1
    // Generated from the component: Microturbine.CB_control.Logical operator2
    _microturbine_cb_control_logical_operator2__out = _microturbine_connect_mt__out && _microturbine_connect_mcb__out ;
    // Generated from the component: Microturbine.BE1-25A Synchronizer.Current_abc_to_dq3.abc to dq1.abc to alpha beta
    _microturbine_be1_25a_synchronizer_current_abc_to_dq3_abc_to_dq1_abc_to_alpha_beta__alpha = (2.0 * _microturbine_ea1_va1__out - _microturbine_eb1_va1__out - _microturbine_ec1_va1__out) * 0.3333333333333333;
    _microturbine_be1_25a_synchronizer_current_abc_to_dq3_abc_to_dq1_abc_to_alpha_beta__beta = (_microturbine_eb1_va1__out - _microturbine_ec1_va1__out) * 0.5773502691896258;
    _microturbine_be1_25a_synchronizer_current_abc_to_dq3_abc_to_dq1_abc_to_alpha_beta__gamma = (_microturbine_ea1_va1__out + _microturbine_eb1_va1__out + _microturbine_ec1_va1__out) * 0.3333333333333333;
    // Generated from the component: Microturbine.qd0(PU).abc to dq1.abc to alpha beta
    _microturbine_qd0_pu__abc_to_dq1_abc_to_alpha_beta__alpha = (2.0 * _microturbine_ia1_ia1__out - _microturbine_ib1_ia1__out - _microturbine_ic1_ia1__out) * 0.3333333333333333;
    _microturbine_qd0_pu__abc_to_dq1_abc_to_alpha_beta__beta = (_microturbine_ib1_ia1__out - _microturbine_ic1_ia1__out) * 0.5773502691896258;
    _microturbine_qd0_pu__abc_to_dq1_abc_to_alpha_beta__gamma = (_microturbine_ia1_ia1__out + _microturbine_ib1_ia1__out + _microturbine_ic1_ia1__out) * 0.3333333333333333;
    // Generated from the component: Microturbine.Logical operator1
    _microturbine_logical_operator1__out = !_microturbine_mt_sync__out;
    // Generated from the component: Microturbine.MT_sync ON
    HIL_OutInt32(0xf0040a, _microturbine_mt_sync__out != 0x0);
    // Generated from the component: Microturbine.BE1-25A Synchronizer.Sum6
    _microturbine_be1_25a_synchronizer_sum6__out = _microturbine_ea1_va1__out - _microturbine_va_g1_va1__out;
    // Generated from the component: Microturbine.BE1-25A Synchronizer.Sum7
    _microturbine_be1_25a_synchronizer_sum7__out = _microturbine_eb1_va1__out - _microturbine_vb_g1_va1__out;
    // Generated from the component: Microturbine.BE1-25A Synchronizer.Sum8
    _microturbine_be1_25a_synchronizer_sum8__out = _microturbine_ec1_va1__out - _microturbine_vc_g1_va1__out;
    // Generated from the component: Microturbine.BE1-25A Synchronizer.abc to dq1.abc to alpha beta
    _microturbine_be1_25a_synchronizer_abc_to_dq1_abc_to_alpha_beta__alpha = (2.0 * _microturbine_va_g1_va1__out - _microturbine_vb_g1_va1__out - _microturbine_vc_g1_va1__out) * 0.3333333333333333;
    _microturbine_be1_25a_synchronizer_abc_to_dq1_abc_to_alpha_beta__beta = (_microturbine_vb_g1_va1__out - _microturbine_vc_g1_va1__out) * 0.5773502691896258;
    _microturbine_be1_25a_synchronizer_abc_to_dq1_abc_to_alpha_beta__gamma = (_microturbine_va_g1_va1__out + _microturbine_vb_g1_va1__out + _microturbine_vc_g1_va1__out) * 0.3333333333333333;
    // Generated from the component: Microturbine.Three-phase Meter1.Power Meter
    _microturbine_three_phase_meter1_power_meter__v_alpha = SQRT_2OVER3 * ( _microturbine_va_g1_va1__out - 0.5f * _microturbine_vb_g1_va1__out - 0.5f * _microturbine_vc_g1_va1__out);
    _microturbine_three_phase_meter1_power_meter__v_beta = SQRT_2OVER3 * (SQRT3_OVER_2 * _microturbine_vb_g1_va1__out - SQRT3_OVER_2 * _microturbine_vc_g1_va1__out);
    _microturbine_three_phase_meter1_power_meter__i_alpha = SQRT_2OVER3 * ( _microturbine_ia1_ia1__out - 0.5f * _microturbine_ib1_ia1__out - 0.5f * _microturbine_ic1_ia1__out);
    _microturbine_three_phase_meter1_power_meter__i_beta = SQRT_2OVER3 * (SQRT3_OVER_2 * _microturbine_ib1_ia1__out - SQRT3_OVER_2 * _microturbine_ic1_ia1__out);
    _microturbine_three_phase_meter1_power_meter__v_zero = ONE_DIV_BY_SQRT_3 * (_microturbine_va_g1_va1__out + _microturbine_vb_g1_va1__out + _microturbine_vc_g1_va1__out);
    _microturbine_three_phase_meter1_power_meter__i_zero = ONE_DIV_BY_SQRT_3 * (_microturbine_ia1_ia1__out + _microturbine_ib1_ia1__out + _microturbine_ic1_ia1__out);
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
    // Generated from the component: Microturbine.qd0(PU).E_qp_M
    HIL_OutAO(0x4016, (float)_microturbine_qd0_pu__e_qp_integrator1__out);
    // Generated from the component: Microturbine.qd0(PU).w_m.Tm
    HIL_OutAO(0x4027, (float)_microturbine_qd0_pu__engine_integrator1__out);
    // Generated from the component: Microturbine.qd0(PU).Governor.Gain35
    _microturbine_qd0_pu__governor_gain35__out = 0.025 * _microturbine_qd0_pu__governor_integrator10__out;
    // Generated from the component: Microturbine.qd0(PU).Engine.Sum1
    _microturbine_qd0_pu__engine_sum1__out =  - _microturbine_qd0_pu__engine_integrator1__out + _microturbine_qd0_pu__governor_integrator11__out;
    // Generated from the component: Microturbine.qd0(PU).Governor.Sum2
    _microturbine_qd0_pu__governor_sum2__out = _microturbine_qd0_pu__governor_agc__out - _microturbine_qd0_pu__governor_integrator11__out;
    // Generated from the component: Microturbine.qd0(PU).Governor.Gain36
    _microturbine_qd0_pu__governor_gain36__out = 10000.0 * _microturbine_qd0_pu__governor_integrator12__out;
    // Generated from the component: Microturbine.qd0(PU).Phi_1d_a_M
    HIL_OutAO(0x4021, (float)_microturbine_qd0_pu__phi_1d_a_integrator1__out);
    // Generated from the component: Microturbine.qd0(PU).Phi_2q_a_M
    HIL_OutAO(0x4022, (float)_microturbine_qd0_pu__phi_2q_a_integrator1__out);
    // Generated from the component: Microturbine.qd0(PU).Phi_d_a 2.Product1
    _microturbine_qd0_pu__phi_d_a_2_product1__out = (_microturbine_qd0_pu__phi_d_a_2_constant1__out * _microturbine_qd0_pu__e_qp_integrator1__out);
    // Generated from the component: Microturbine.qd0(PU).Phi_d_a 2.Product2
    _microturbine_qd0_pu__phi_d_a_2_product2__out = (_microturbine_qd0_pu__phi_d_a_2_constant2__out * _microturbine_qd0_pu__phi_1d_a_integrator1__out);
    // Generated from the component: Microturbine.qd0(PU).Phi_q_a 2.Product2
    _microturbine_qd0_pu__phi_q_a_2_product2__out = (_microturbine_qd0_pu__phi_q_a_2_constant2__out * _microturbine_qd0_pu__phi_2q_a_integrator1__out);
    // Generated from the component: Microturbine.qd0(PU).w_m.Gain1
    _microturbine_qd0_pu__w_m_gain1__out = 0.005305164769729845 * _microturbine_qd0_pu__w_m_constant1__out;
    // Generated from the component: Microturbine.qd0(PU).Gain1
    _microturbine_qd0_pu__gain1__out = 2.0 * _microturbine_qd0_pu__w_m_integrator1__out;
    // Generated from the component: Microturbine.qd0(PU).Gain16
    _microturbine_qd0_pu__gain16__out = 9.549296585513721 * _microturbine_qd0_pu__w_m_integrator1__out;
    // Generated from the component: Microturbine.qd0(PU).Governor.Gain28
    _microturbine_qd0_pu__governor_gain28__out = 0.005305164769729845 * _microturbine_qd0_pu__w_m_integrator1__out;
    // Generated from the component: Gain3
    _gain3__out = 11267.652816802622 * _sinusoidal_source1__out;
    // Generated from the component: Gain5
    _gain5__out = 11267.652816802622 * _sinusoidal_source2__out;
    // Generated from the component: Gain4
    _gain4__out = 11267.652816802622 * _sinusoidal_source3__out;
    // Generated from the component: Microturbine.BE1-25A Synchronizer.Digital Probe6
    HIL_OutInt32(0xf00404, _microturbine_be1_25a_synchronizer_logical_operator2__out != 0x0);
    // Generated from the component: Microturbine.CB_control.MCB OFF
    HIL_OutInt32(0xf00407, _microturbine_cb_control_logical_operator4__out != 0x0);
    // Generated from the component: Microturbine.CB_control.Logical operator1
    _microturbine_cb_control_logical_operator1__out = _microturbine_cb_control_logical_operator2__out && _microturbine_be1_25a_synchronizer_unit_delay5__out ;
    // Generated from the component: Microturbine.BE1-25A Synchronizer.Current_abc_to_dq3.Termination
    // Generated from the component: Microturbine.BE1-25A Synchronizer.Current_abc_to_dq3.abc to dq1.alpha beta to dq
    _microturbine_be1_25a_synchronizer_current_abc_to_dq3_abc_to_dq1_alpha_beta_to_dq__k1 = cos(_microturbine_be1_25a_synchronizer_unit_delay2__out);
    _microturbine_be1_25a_synchronizer_current_abc_to_dq3_abc_to_dq1_alpha_beta_to_dq__k2 = sin(_microturbine_be1_25a_synchronizer_unit_delay2__out);
    _microturbine_be1_25a_synchronizer_current_abc_to_dq3_abc_to_dq1_alpha_beta_to_dq__d = _microturbine_be1_25a_synchronizer_current_abc_to_dq3_abc_to_dq1_alpha_beta_to_dq__k2 * _microturbine_be1_25a_synchronizer_current_abc_to_dq3_abc_to_dq1_abc_to_alpha_beta__alpha - _microturbine_be1_25a_synchronizer_current_abc_to_dq3_abc_to_dq1_alpha_beta_to_dq__k1 * _microturbine_be1_25a_synchronizer_current_abc_to_dq3_abc_to_dq1_abc_to_alpha_beta__beta;
    _microturbine_be1_25a_synchronizer_current_abc_to_dq3_abc_to_dq1_alpha_beta_to_dq__q = _microturbine_be1_25a_synchronizer_current_abc_to_dq3_abc_to_dq1_alpha_beta_to_dq__k1 * _microturbine_be1_25a_synchronizer_current_abc_to_dq3_abc_to_dq1_abc_to_alpha_beta__alpha + _microturbine_be1_25a_synchronizer_current_abc_to_dq3_abc_to_dq1_alpha_beta_to_dq__k2 * _microturbine_be1_25a_synchronizer_current_abc_to_dq3_abc_to_dq1_abc_to_alpha_beta__beta;
    // Generated from the component: Microturbine.qd0(PU).Termination1
    // Generated from the component: Microturbine.MT_sync OFF
    HIL_OutInt32(0xf00409, _microturbine_logical_operator1__out != 0x0);
    // Generated from the component: Microturbine.BE1-25A Synchronizer.Ea-Va
    HIL_OutAO(0x4002, (float)_microturbine_be1_25a_synchronizer_sum6__out);
    // Generated from the component: Microturbine.BE1-25A Synchronizer.Eb-Vb
    HIL_OutAO(0x4003, (float)_microturbine_be1_25a_synchronizer_sum7__out);
    // Generated from the component: Microturbine.BE1-25A Synchronizer.Ec-Vc
    HIL_OutAO(0x4004, (float)_microturbine_be1_25a_synchronizer_sum8__out);
    // Generated from the component: Microturbine.BE1-25A Synchronizer.abc to dq2.abc to alpha beta
    _microturbine_be1_25a_synchronizer_abc_to_dq2_abc_to_alpha_beta__alpha = (2.0 * _microturbine_be1_25a_synchronizer_sum6__out - _microturbine_be1_25a_synchronizer_sum7__out - _microturbine_be1_25a_synchronizer_sum8__out) * 0.3333333333333333;
    _microturbine_be1_25a_synchronizer_abc_to_dq2_abc_to_alpha_beta__beta = (_microturbine_be1_25a_synchronizer_sum7__out - _microturbine_be1_25a_synchronizer_sum8__out) * 0.5773502691896258;
    _microturbine_be1_25a_synchronizer_abc_to_dq2_abc_to_alpha_beta__gamma = (_microturbine_be1_25a_synchronizer_sum6__out + _microturbine_be1_25a_synchronizer_sum7__out + _microturbine_be1_25a_synchronizer_sum8__out) * 0.3333333333333333;
    // Generated from the component: Microturbine.BE1-25A Synchronizer.Termination1
    // Generated from the component: Microturbine.BE1-25A Synchronizer.abc to dq1.alpha beta to dq
    _microturbine_be1_25a_synchronizer_abc_to_dq1_alpha_beta_to_dq__k1 = cos(_microturbine_be1_25a_synchronizer_unit_delay2__out);
    _microturbine_be1_25a_synchronizer_abc_to_dq1_alpha_beta_to_dq__k2 = sin(_microturbine_be1_25a_synchronizer_unit_delay2__out);
    _microturbine_be1_25a_synchronizer_abc_to_dq1_alpha_beta_to_dq__d = _microturbine_be1_25a_synchronizer_abc_to_dq1_alpha_beta_to_dq__k2 * _microturbine_be1_25a_synchronizer_abc_to_dq1_abc_to_alpha_beta__alpha - _microturbine_be1_25a_synchronizer_abc_to_dq1_alpha_beta_to_dq__k1 * _microturbine_be1_25a_synchronizer_abc_to_dq1_abc_to_alpha_beta__beta;
    _microturbine_be1_25a_synchronizer_abc_to_dq1_alpha_beta_to_dq__q = _microturbine_be1_25a_synchronizer_abc_to_dq1_alpha_beta_to_dq__k1 * _microturbine_be1_25a_synchronizer_abc_to_dq1_abc_to_alpha_beta__alpha + _microturbine_be1_25a_synchronizer_abc_to_dq1_alpha_beta_to_dq__k2 * _microturbine_be1_25a_synchronizer_abc_to_dq1_abc_to_alpha_beta__beta;
    // Generated from the component: Microturbine.Three-phase Meter1.POWER_P
    HIL_OutAO(0x4011, (float)_microturbine_three_phase_meter1_power_meter__Pdc);
    // Generated from the component: Microturbine.Three-phase Meter1.POWER_PF
    HIL_OutAO(0x4012, (float)_microturbine_three_phase_meter1_power_meter__k_factor);
    // Generated from the component: Microturbine.Three-phase Meter1.POWER_Q
    HIL_OutAO(0x4013, (float)_microturbine_three_phase_meter1_power_meter__Qdc);
    // Generated from the component: Microturbine.Three-phase Meter1.POWER_S
    HIL_OutAO(0x4014, (float)_microturbine_three_phase_meter1_power_meter__apparent);
    // Generated from the component: Microturbine.qd0(PU).Governor.Sum9
    _microturbine_qd0_pu__governor_sum9__out = _microturbine_qd0_pu__governor_integrator9__out + _microturbine_qd0_pu__governor_gain35__out;
    // Generated from the component: Microturbine.qd0(PU).Engine.Gain1
    _microturbine_qd0_pu__engine_gain1__out = 41.666666666666664 * _microturbine_qd0_pu__engine_sum1__out;
    // Generated from the component: Microturbine.qd0(PU).Governor.Gain29
    _microturbine_qd0_pu__governor_gain29__out = 0.05 * _microturbine_qd0_pu__governor_sum2__out;
    // Generated from the component: Microturbine.qd0(PU).w_m.Product1
    _microturbine_qd0_pu__w_m_product1__out = (_microturbine_qd0_pu__w_m_gain1__out * _microturbine_qd0_pu__w_m_integrator1__out);
    // Generated from the component: Microturbine.BE1-25A Synchronizer.Gain4
    _microturbine_be1_25a_synchronizer_gain4__out = 0.0026525823848649226 * _microturbine_qd0_pu__gain1__out;
    // Generated from the component: Microturbine.qd0(PU).Product1
    _microturbine_qd0_pu__product1__out = (_microturbine_qd0_pu__gain1__out * _microturbine_qd0_pu__clock1__out);
    // Generated from the component: Microturbine.qd0(PU).V_dG2.Product3
    _microturbine_qd0_pu__v_dg2_product3__out = (_microturbine_qd0_pu__gain1__out) * 1.0 / (_microturbine_qd0_pu__v_dg2_constant2__out);
    // Generated from the component: Microturbine.qd0(PU).V_qG2.Product3
    _microturbine_qd0_pu__v_qg2_product3__out = (_microturbine_qd0_pu__gain1__out) * 1.0 / (_microturbine_qd0_pu__v_qg2_constant2__out);
    // Generated from the component: Microturbine.qd0(PU).w_M
    HIL_OutAO(0x4025, (float)_microturbine_qd0_pu__gain16__out);
    // Generated from the component: Microturbine.qd0(PU).Governor.Exciter Activation.Sum1
    _microturbine_qd0_pu__governor_exciter_activation_sum1__out = _microturbine_qd0_pu__governor_exciter_activation_constant2__out - _microturbine_qd0_pu__governor_gain28__out;
    // Generated from the component: Va_G.Vs1
    HIL_OutFloat(137101315, (float) _gain3__out);
    // Generated from the component: Vb_G.Vs1
    HIL_OutFloat(137101316, (float) _gain5__out);
    // Generated from the component: Vc_G.Vs1
    HIL_OutFloat(137101317, (float) _gain4__out);
    // Generated from the component: Microturbine.CB_control.GCB ON
    HIL_OutInt32(0xf00406, _microturbine_cb_control_logical_operator1__out != 0x0);
    // Generated from the component: Microturbine.CB_control.Logical operator3
    _microturbine_cb_control_logical_operator3__out = !_microturbine_cb_control_logical_operator1__out;
    // Generated from the component: Microturbine.S2.CTC_Wrapper
    if (_microturbine_cb_control_logical_operator1__out == 0x0) {
        HIL_OutInt32(0x8240480, 0x0);
    }
    else {
        HIL_OutInt32(0x8240480, 0x1);
    }
    // Generated from the component: Microturbine.BE1-25A Synchronizer.Gain12
    _microturbine_be1_25a_synchronizer_gain12__out = 8.874962836170933e-05 * _microturbine_be1_25a_synchronizer_current_abc_to_dq3_abc_to_dq1_alpha_beta_to_dq__q;
    // Generated from the component: Microturbine.BE1-25A Synchronizer.Gain7
    _microturbine_be1_25a_synchronizer_gain7__out = 8.874962836170933e-05 * _microturbine_be1_25a_synchronizer_current_abc_to_dq3_abc_to_dq1_alpha_beta_to_dq__d;
    // Generated from the component: Microturbine.BE1-25A Synchronizer.Termination2
    // Generated from the component: Microturbine.BE1-25A Synchronizer.abc to dq2.alpha beta to dq
    _microturbine_be1_25a_synchronizer_abc_to_dq2_alpha_beta_to_dq__k1 = cos(_microturbine_be1_25a_synchronizer_unit_delay2__out);
    _microturbine_be1_25a_synchronizer_abc_to_dq2_alpha_beta_to_dq__k2 = sin(_microturbine_be1_25a_synchronizer_unit_delay2__out);
    _microturbine_be1_25a_synchronizer_abc_to_dq2_alpha_beta_to_dq__d = _microturbine_be1_25a_synchronizer_abc_to_dq2_alpha_beta_to_dq__k2 * _microturbine_be1_25a_synchronizer_abc_to_dq2_abc_to_alpha_beta__alpha - _microturbine_be1_25a_synchronizer_abc_to_dq2_alpha_beta_to_dq__k1 * _microturbine_be1_25a_synchronizer_abc_to_dq2_abc_to_alpha_beta__beta;
    _microturbine_be1_25a_synchronizer_abc_to_dq2_alpha_beta_to_dq__q = _microturbine_be1_25a_synchronizer_abc_to_dq2_alpha_beta_to_dq__k1 * _microturbine_be1_25a_synchronizer_abc_to_dq2_abc_to_alpha_beta__alpha + _microturbine_be1_25a_synchronizer_abc_to_dq2_alpha_beta_to_dq__k2 * _microturbine_be1_25a_synchronizer_abc_to_dq2_abc_to_alpha_beta__beta;
    // Generated from the component: Microturbine.BE1-25A Synchronizer.Gain5
    _microturbine_be1_25a_synchronizer_gain5__out = 8.874962836170933e-05 * _microturbine_be1_25a_synchronizer_abc_to_dq1_alpha_beta_to_dq__d;
    // Generated from the component: Microturbine.BE1-25A Synchronizer.Gain6
    _microturbine_be1_25a_synchronizer_gain6__out = 8.874962836170933e-05 * _microturbine_be1_25a_synchronizer_abc_to_dq1_alpha_beta_to_dq__q;
    // Generated from the component: Microturbine.BE1-25A Synchronizer.w_G
    HIL_OutAO(0x400e, (float)_microturbine_be1_25a_synchronizer_gain4__out);
    // Generated from the component: Microturbine.qd0(PU).abc to dq1.alpha beta to dq
    _microturbine_qd0_pu__abc_to_dq1_alpha_beta_to_dq__k1 = cos(_microturbine_qd0_pu__product1__out);
    _microturbine_qd0_pu__abc_to_dq1_alpha_beta_to_dq__k2 = sin(_microturbine_qd0_pu__product1__out);
    _microturbine_qd0_pu__abc_to_dq1_alpha_beta_to_dq__d = _microturbine_qd0_pu__abc_to_dq1_alpha_beta_to_dq__k2 * _microturbine_qd0_pu__abc_to_dq1_abc_to_alpha_beta__alpha - _microturbine_qd0_pu__abc_to_dq1_alpha_beta_to_dq__k1 * _microturbine_qd0_pu__abc_to_dq1_abc_to_alpha_beta__beta;
    _microturbine_qd0_pu__abc_to_dq1_alpha_beta_to_dq__q = _microturbine_qd0_pu__abc_to_dq1_alpha_beta_to_dq__k1 * _microturbine_qd0_pu__abc_to_dq1_abc_to_alpha_beta__alpha + _microturbine_qd0_pu__abc_to_dq1_alpha_beta_to_dq__k2 * _microturbine_qd0_pu__abc_to_dq1_abc_to_alpha_beta__beta;
    // Generated from the component: Microturbine.qd0(PU).Governor.Exciter Activation.Abs1
    _microturbine_qd0_pu__governor_exciter_activation_abs1__out = fabs(_microturbine_qd0_pu__governor_exciter_activation_sum1__out);
    // Generated from the component: Microturbine.qd0(PU).Governor.Exciter Activation.speed difference
    HIL_OutAO(0x401e, (float)_microturbine_qd0_pu__governor_exciter_activation_sum1__out);
    // Generated from the component: Microturbine.CB_control.GCB OFF
    HIL_OutInt32(0xf00405, _microturbine_cb_control_logical_operator3__out != 0x0);
    // Generated from the component: Microturbine.BE1-25A Synchronizer.E_q
    HIL_OutAO(0x4001, (float)_microturbine_be1_25a_synchronizer_gain12__out);
    // Generated from the component: Microturbine.BE1-25A Synchronizer.Product2
    _microturbine_be1_25a_synchronizer_product2__out = (_microturbine_be1_25a_synchronizer_gain12__out * _microturbine_be1_25a_synchronizer_gain12__out);
    // Generated from the component: Microturbine.qd0(PU).magnitude.Product5
    _microturbine_qd0_pu__magnitude_product5__out = (_microturbine_be1_25a_synchronizer_gain12__out * _microturbine_be1_25a_synchronizer_gain12__out);
    // Generated from the component: Microturbine.BE1-25A Synchronizer.E_d
    HIL_OutAO(0x4000, (float)_microturbine_be1_25a_synchronizer_gain7__out);
    // Generated from the component: Microturbine.BE1-25A Synchronizer.Limit1
    if (_microturbine_be1_25a_synchronizer_gain7__out < 1e-12) {
        _microturbine_be1_25a_synchronizer_limit1__out = 1e-12;
    } else {
        _microturbine_be1_25a_synchronizer_limit1__out = _microturbine_be1_25a_synchronizer_gain7__out;
    }
    // Generated from the component: Microturbine.BE1-25A Synchronizer.Product1
    _microturbine_be1_25a_synchronizer_product1__out = (_microturbine_be1_25a_synchronizer_gain7__out * _microturbine_be1_25a_synchronizer_gain7__out);
    // Generated from the component: Microturbine.qd0(PU).magnitude.Product6
    _microturbine_qd0_pu__magnitude_product6__out = (_microturbine_be1_25a_synchronizer_gain7__out * _microturbine_be1_25a_synchronizer_gain7__out);
    // Generated from the component: Microturbine.BE1-25A Synchronizer.Ed-Vd
    HIL_OutAO(0x4005, (float)_microturbine_be1_25a_synchronizer_abc_to_dq2_alpha_beta_to_dq__d);
    // Generated from the component: Microturbine.BE1-25A Synchronizer.Eq-Vq
    HIL_OutAO(0x4006, (float)_microturbine_be1_25a_synchronizer_abc_to_dq2_alpha_beta_to_dq__q);
    // Generated from the component: Microturbine.BE1-25A Synchronizer.Limit2
    if (_microturbine_be1_25a_synchronizer_gain5__out < 1e-12) {
        _microturbine_be1_25a_synchronizer_limit2__out = 1e-12;
    } else {
        _microturbine_be1_25a_synchronizer_limit2__out = _microturbine_be1_25a_synchronizer_gain5__out;
    }
    // Generated from the component: Microturbine.BE1-25A Synchronizer.Product3
    _microturbine_be1_25a_synchronizer_product3__out = (_microturbine_be1_25a_synchronizer_gain5__out * _microturbine_be1_25a_synchronizer_gain5__out);
    // Generated from the component: Microturbine.BE1-25A Synchronizer.Vd_G
    HIL_OutAO(0x4007, (float)_microturbine_be1_25a_synchronizer_gain5__out);
    // Generated from the component: Microturbine.BE1-25A Synchronizer.PLL.PID controller1
    _microturbine_be1_25a_synchronizer_pll_pid_controller1__pi_reg_out_int = _microturbine_be1_25a_synchronizer_pll_pid_controller1__integrator_state + 5.0 * _microturbine_be1_25a_synchronizer_gain6__out;
    if (_microturbine_be1_25a_synchronizer_pll_pid_controller1__pi_reg_out_int < 373.84952577718536) {
        _microturbine_be1_25a_synchronizer_pll_pid_controller1__out = 373.84952577718536;
        _microturbine_be1_25a_synchronizer_pll_pid_controller1__av_active = 1;
    } else if (_microturbine_be1_25a_synchronizer_pll_pid_controller1__pi_reg_out_int > 380.132711084365) {
        _microturbine_be1_25a_synchronizer_pll_pid_controller1__out = 380.132711084365;
        _microturbine_be1_25a_synchronizer_pll_pid_controller1__av_active = 1;
    } else {
        _microturbine_be1_25a_synchronizer_pll_pid_controller1__out = _microturbine_be1_25a_synchronizer_pll_pid_controller1__pi_reg_out_int;
        _microturbine_be1_25a_synchronizer_pll_pid_controller1__av_active = 0;
    }
    // Generated from the component: Microturbine.BE1-25A Synchronizer.Product4
    _microturbine_be1_25a_synchronizer_product4__out = (_microturbine_be1_25a_synchronizer_gain6__out * _microturbine_be1_25a_synchronizer_gain6__out);
    // Generated from the component: Microturbine.BE1-25A Synchronizer.Vq_G
    HIL_OutAO(0x4008, (float)_microturbine_be1_25a_synchronizer_gain6__out);
    // Generated from the component: Microturbine.qd0(PU).Gain10
    _microturbine_qd0_pu__gain10__out = 0.00482899406434398 * _microturbine_qd0_pu__abc_to_dq1_alpha_beta_to_dq__d;
    // Generated from the component: Microturbine.qd0(PU).Gain11
    _microturbine_qd0_pu__gain11__out = 0.00482899406434398 * _microturbine_qd0_pu__abc_to_dq1_alpha_beta_to_dq__q;
    // Generated from the component: Microturbine.qd0(PU).Governor.Exciter Activation.Comparator1
    if (_microturbine_qd0_pu__governor_exciter_activation_constant1__out < _microturbine_qd0_pu__governor_exciter_activation_abs1__out) {
        _microturbine_qd0_pu__governor_exciter_activation_comparator1__out = 0;
    } else if (_microturbine_qd0_pu__governor_exciter_activation_constant1__out > _microturbine_qd0_pu__governor_exciter_activation_abs1__out) {
        _microturbine_qd0_pu__governor_exciter_activation_comparator1__out = 1;
    } else {
        _microturbine_qd0_pu__governor_exciter_activation_comparator1__out = _microturbine_qd0_pu__governor_exciter_activation_comparator1__state;
    }
    // Generated from the component: Microturbine.BE1-25A Synchronizer.Trigonometric function1
    _microturbine_be1_25a_synchronizer_trigonometric_function1__out = atan2(_microturbine_be1_25a_synchronizer_gain12__out, _microturbine_be1_25a_synchronizer_limit1__out);
    // Generated from the component: Microturbine.BE1-25A Synchronizer.Sum4
    _microturbine_be1_25a_synchronizer_sum4__out = _microturbine_be1_25a_synchronizer_product1__out + _microturbine_be1_25a_synchronizer_product2__out;
    // Generated from the component: Microturbine.qd0(PU).magnitude.Sum3
    _microturbine_qd0_pu__magnitude_sum3__out = _microturbine_qd0_pu__magnitude_product5__out + _microturbine_qd0_pu__magnitude_product6__out;
    // Generated from the component: Microturbine.BE1-25A Synchronizer.Trigonometric function2
    _microturbine_be1_25a_synchronizer_trigonometric_function2__out = atan2(_microturbine_be1_25a_synchronizer_gain6__out, _microturbine_be1_25a_synchronizer_limit2__out);
    // Generated from the component: Microturbine.BE1-25A Synchronizer.Gain3
    _microturbine_be1_25a_synchronizer_gain3__out = 0.0026525823848649226 * _microturbine_be1_25a_synchronizer_pll_pid_controller1__out;
    // Generated from the component: Microturbine.BE1-25A Synchronizer.PLL.C function1
    _microturbine_be1_25a_synchronizer_pll_c_function1__in = _microturbine_be1_25a_synchronizer_pll_pid_controller1__out;
    _microturbine_be1_25a_synchronizer_pll_c_function1__out = _microturbine_be1_25a_synchronizer_pll_c_function1__var;
    // Generated from the component: Microturbine.Signal switch1
    _microturbine_signal_switch1__out = (_microturbine_mt_sync__out != 1.0) ? _microturbine_constant2__out : _microturbine_be1_25a_synchronizer_pll_pid_controller1__out;
    // Generated from the component: Microturbine.BE1-25A Synchronizer.Sum5
    _microturbine_be1_25a_synchronizer_sum5__out = _microturbine_be1_25a_synchronizer_product3__out + _microturbine_be1_25a_synchronizer_product4__out;
    // Generated from the component: Microturbine.qd0(PU).Gain14
    _microturbine_qd0_pu__gain14__out = 1.0 * _microturbine_qd0_pu__gain10__out;
    // Generated from the component: Microturbine.qd0(PU).I_q_a1
    HIL_OutAO(0x4020, (float)_microturbine_qd0_pu__gain10__out);
    // Generated from the component: Microturbine.qd0(PU).Gain6
    _microturbine_qd0_pu__gain6__out = -1.0 * _microturbine_qd0_pu__gain11__out;
    // Generated from the component: Microturbine.qd0(PU).Governor.Exciter Activation.Activate Exciter
    _microturbine_qd0_pu__governor_exciter_activation_activate_exciter__boolean = _microturbine_qd0_pu__governor_exciter_activation_comparator1__out;
    if (_microturbine_qd0_pu__governor_exciter_activation_activate_exciter__boolean == 1) {
        _microturbine_qd0_pu__governor_exciter_activation_activate_exciter__Activate = 1;
    }
    // Generated from the component: Microturbine.BE1-25A Synchronizer.confine phase1
    _microturbine_be1_25a_synchronizer_confine_phase1__in = _microturbine_be1_25a_synchronizer_trigonometric_function1__out;
    _microturbine_be1_25a_synchronizer_confine_phase1__x = _microturbine_be1_25a_synchronizer_confine_phase1__in / 6.283185307179586;
    _microturbine_be1_25a_synchronizer_confine_phase1__floor_in = floor(_microturbine_be1_25a_synchronizer_confine_phase1__x);
    _microturbine_be1_25a_synchronizer_confine_phase1__out = _microturbine_be1_25a_synchronizer_confine_phase1__in - (6.283185307179586 * _microturbine_be1_25a_synchronizer_confine_phase1__floor_in);
    // Generated from the component: Microturbine.BE1-25A Synchronizer.Mathematical function1
    _microturbine_be1_25a_synchronizer_mathematical_function1__out = sqrt(_microturbine_be1_25a_synchronizer_sum4__out);
    // Generated from the component: Microturbine.qd0(PU).magnitude.Mathematical function1
    _microturbine_qd0_pu__magnitude_mathematical_function1__out = sqrt(_microturbine_qd0_pu__magnitude_sum3__out);
    // Generated from the component: Microturbine.BE1-25A Synchronizer.confine phase2
    _microturbine_be1_25a_synchronizer_confine_phase2__in = _microturbine_be1_25a_synchronizer_trigonometric_function2__out;
    _microturbine_be1_25a_synchronizer_confine_phase2__x = _microturbine_be1_25a_synchronizer_confine_phase2__in / 6.283185307179586;
    _microturbine_be1_25a_synchronizer_confine_phase2__floor_in = floor(_microturbine_be1_25a_synchronizer_confine_phase2__x);
    _microturbine_be1_25a_synchronizer_confine_phase2__out = _microturbine_be1_25a_synchronizer_confine_phase2__in - (6.283185307179586 * _microturbine_be1_25a_synchronizer_confine_phase2__floor_in);
    // Generated from the component: Microturbine.BE1-25A Synchronizer.Sum2
    _microturbine_be1_25a_synchronizer_sum2__out =  - _microturbine_be1_25a_synchronizer_gain4__out + _microturbine_be1_25a_synchronizer_gain3__out;
    // Generated from the component: Microturbine.BE1-25A Synchronizer.w_bus
    HIL_OutAO(0x400f, (float)_microturbine_be1_25a_synchronizer_gain3__out);
    // Generated from the component: Microturbine.BE1-25A Synchronizer.PLL.confine phase
    _microturbine_be1_25a_synchronizer_pll_confine_phase__in = _microturbine_be1_25a_synchronizer_pll_c_function1__out;
    _microturbine_be1_25a_synchronizer_pll_confine_phase__x = _microturbine_be1_25a_synchronizer_pll_confine_phase__in / 6.283185307179586;
    _microturbine_be1_25a_synchronizer_pll_confine_phase__floor_in = floor(_microturbine_be1_25a_synchronizer_pll_confine_phase__x);
    _microturbine_be1_25a_synchronizer_pll_confine_phase__out = _microturbine_be1_25a_synchronizer_pll_confine_phase__in - (6.283185307179586 * _microturbine_be1_25a_synchronizer_pll_confine_phase__floor_in);
    // Generated from the component: Microturbine.qd0(PU).|V|4
    _microturbine_qd0_pu___v_4__out = (_microturbine_be1_25a_synchronizer_unit_delay5__out != 1.0) ? _microturbine_signal_switch1__out : _microturbine_qd0_pu__wref__out;
    // Generated from the component: Microturbine.BE1-25A Synchronizer.Mathematical function2
    _microturbine_be1_25a_synchronizer_mathematical_function2__out = sqrt(_microturbine_be1_25a_synchronizer_sum5__out);
    // Generated from the component: Microturbine.qd0(PU).Phi_2q_a.Product1
    _microturbine_qd0_pu__phi_2q_a_product1__out = (_microturbine_qd0_pu__phi_2q_a_constant1__out * _microturbine_qd0_pu__gain14__out);
    // Generated from the component: Microturbine.qd0(PU).Phi_q_a 2.Gain1
    _microturbine_qd0_pu__phi_q_a_2_gain1__out = 0.2597484888268292 * _microturbine_qd0_pu__gain14__out;
    // Generated from the component: Microturbine.qd0(PU).E_qp.Product3
    _microturbine_qd0_pu__e_qp_product3__out = (_microturbine_qd0_pu__e_qp_constant3__out * _microturbine_qd0_pu__gain6__out);
    // Generated from the component: Microturbine.qd0(PU).Gain15
    _microturbine_qd0_pu__gain15__out = 1.0 * _microturbine_qd0_pu__gain6__out;
    // Generated from the component: Microturbine.qd0(PU).Phi_1d_a.Product1
    _microturbine_qd0_pu__phi_1d_a_product1__out = (_microturbine_qd0_pu__phi_1d_a_constant1__out * _microturbine_qd0_pu__gain6__out);
    // Generated from the component: Microturbine.qd0(PU).Phi_d_a 2.Gain1
    _microturbine_qd0_pu__phi_d_a_2_gain1__out = 0.4274244930105489 * _microturbine_qd0_pu__gain6__out;
    // Generated from the component: Microturbine.qd0(PU).Exciter.Integrator1
    if (((_microturbine_qd0_pu__governor_exciter_activation_activate_exciter__Activate > 0.0) && (_microturbine_qd0_pu__exciter_integrator1__reset_state <= 0)) || ((_microturbine_qd0_pu__governor_exciter_activation_activate_exciter__Activate <= 0.0) && (_microturbine_qd0_pu__exciter_integrator1__reset_state == 1))) {
        _microturbine_qd0_pu__exciter_integrator1__state = 0.0;
    }
    _microturbine_qd0_pu__exciter_integrator1__out = _microturbine_qd0_pu__exciter_integrator1__state;
    // Generated from the component: Microturbine.qd0(PU).Exciter.Integrator2
    if (((_microturbine_qd0_pu__governor_exciter_activation_activate_exciter__Activate > 0.0) && (_microturbine_qd0_pu__exciter_integrator2__reset_state <= 0)) || ((_microturbine_qd0_pu__governor_exciter_activation_activate_exciter__Activate <= 0.0) && (_microturbine_qd0_pu__exciter_integrator2__reset_state == 1))) {
        _microturbine_qd0_pu__exciter_integrator2__state = 0.0;
    }
    _microturbine_qd0_pu__exciter_integrator2__out = _microturbine_qd0_pu__exciter_integrator2__state;
    // Generated from the component: Microturbine.qd0(PU).Exciter.Integrator3
    if (((_microturbine_qd0_pu__governor_exciter_activation_activate_exciter__Activate > 0.0) && (_microturbine_qd0_pu__exciter_integrator3__reset_state <= 0)) || ((_microturbine_qd0_pu__governor_exciter_activation_activate_exciter__Activate <= 0.0) && (_microturbine_qd0_pu__exciter_integrator3__reset_state == 1))) {
        _microturbine_qd0_pu__exciter_integrator3__state = 0.0;
    }
    _microturbine_qd0_pu__exciter_integrator3__out = _microturbine_qd0_pu__exciter_integrator3__state;
    // Generated from the component: Microturbine.qd0(PU).Exciter.Integrator4
    if (((_microturbine_qd0_pu__governor_exciter_activation_activate_exciter__Activate > 0.0) && (_microturbine_qd0_pu__exciter_integrator4__reset_state <= 0)) || ((_microturbine_qd0_pu__governor_exciter_activation_activate_exciter__Activate <= 0.0) && (_microturbine_qd0_pu__exciter_integrator4__reset_state == 1))) {
        _microturbine_qd0_pu__exciter_integrator4__state = 0.0;
    }
    _microturbine_qd0_pu__exciter_integrator4__out = _microturbine_qd0_pu__exciter_integrator4__state;
    // Generated from the component: Microturbine.qd0(PU).Exciter.Logical operator1
    _microturbine_qd0_pu__exciter_logical_operator1__out = !_microturbine_qd0_pu__governor_exciter_activation_activate_exciter__Activate;
    // Generated from the component: Microturbine.qd0(PU).Exciter.PI.Integrator1
    if (((_microturbine_qd0_pu__governor_exciter_activation_activate_exciter__Activate > 0.0) && (_microturbine_qd0_pu__exciter_pi_integrator1__reset_state <= 0)) || ((_microturbine_qd0_pu__governor_exciter_activation_activate_exciter__Activate <= 0.0) && (_microturbine_qd0_pu__exciter_pi_integrator1__reset_state == 1))) {
        _microturbine_qd0_pu__exciter_pi_integrator1__state = 0.0;
    }
    _microturbine_qd0_pu__exciter_pi_integrator1__out = _microturbine_qd0_pu__exciter_pi_integrator1__state;
    // Generated from the component: Microturbine.qd0(PU).Exciter.exciter ON
    HIL_OutInt32(0xf0040c, _microturbine_qd0_pu__governor_exciter_activation_activate_exciter__Activate != 0x0);
    // Generated from the component: Microturbine.qd0(PU).Governor.Exciter Activation.Exc_state
    HIL_OutAO(0x401d, (float)_microturbine_qd0_pu__governor_exciter_activation_activate_exciter__Activate);
    // Generated from the component: Microturbine.qd0(PU).Gain17
    _microturbine_qd0_pu__gain17__out = 13.8 * _microturbine_qd0_pu__magnitude_mathematical_function1__out;
    // Generated from the component: Microturbine.qd0(PU).|E|
    HIL_OutAO(0x4028, (float)_microturbine_qd0_pu__magnitude_mathematical_function1__out);
    // Generated from the component: Microturbine.BE1-25A Synchronizer.Sum1
    _microturbine_be1_25a_synchronizer_sum1__out =  - _microturbine_be1_25a_synchronizer_confine_phase1__out + _microturbine_be1_25a_synchronizer_confine_phase2__out;
    // Generated from the component: Microturbine.BE1-25A Synchronizer.Abs5
    _microturbine_be1_25a_synchronizer_abs5__out = fabs(_microturbine_be1_25a_synchronizer_sum2__out);
    // Generated from the component: Microturbine.BE1-25A Synchronizer.frequency_diff3
    HIL_OutAO(0x400c, (float)_microturbine_be1_25a_synchronizer_sum2__out);
    // Generated from the component: Microturbine.qd0(PU).Governor.Gain4
    _microturbine_qd0_pu__governor_gain4__out = 0.0026525823848649226 * _microturbine_qd0_pu___v_4__out;
    // Generated from the component: Microturbine.BE1-25A Synchronizer.Sum3
    _microturbine_be1_25a_synchronizer_sum3__out =  - _microturbine_be1_25a_synchronizer_mathematical_function1__out + _microturbine_be1_25a_synchronizer_mathematical_function2__out;
    // Generated from the component: Microturbine.BE1-25A Synchronizer.|V|
    HIL_OutAO(0x4010, (float)_microturbine_be1_25a_synchronizer_mathematical_function2__out);
    // Generated from the component: Microturbine.Signal switch2
    _microturbine_signal_switch2__out = (_microturbine_mt_sync__out != 1.0) ? _microturbine_constant1__out : _microturbine_be1_25a_synchronizer_mathematical_function2__out;
    // Generated from the component: Microturbine.qd0(PU).Phi_2q_a.Sum1
    _microturbine_qd0_pu__phi_2q_a_sum1__out =  - _microturbine_qd0_pu__phi_2q_a_integrator1__out - _microturbine_qd0_pu__phi_2q_a_product1__out;
    // Generated from the component: Microturbine.qd0(PU).Phi_q_a 2.Sum1
    _microturbine_qd0_pu__phi_q_a_2_sum1__out =  - _microturbine_qd0_pu__phi_q_a_2_gain1__out + _microturbine_qd0_pu__phi_q_a_2_product2__out;
    // Generated from the component: Microturbine.qd0(PU).E_qp.Sum3
    _microturbine_qd0_pu__e_qp_sum3__out = _microturbine_qd0_pu__phi_1d_a_integrator1__out + _microturbine_qd0_pu__e_qp_product3__out - _microturbine_qd0_pu__e_qp_integrator1__out;
    // Generated from the component: Microturbine.qd0(PU).I_d_a1
    HIL_OutAO(0x401f, (float)_microturbine_qd0_pu__gain15__out);
    // Generated from the component: Microturbine.qd0(PU).Phi_1d_a.Sum1
    _microturbine_qd0_pu__phi_1d_a_sum1__out =  - _microturbine_qd0_pu__phi_1d_a_integrator1__out + _microturbine_qd0_pu__e_qp_integrator1__out - _microturbine_qd0_pu__phi_1d_a_product1__out;
    // Generated from the component: Microturbine.qd0(PU).Phi_d_a 2.Sum1
    _microturbine_qd0_pu__phi_d_a_2_sum1__out =  - _microturbine_qd0_pu__phi_d_a_2_gain1__out + _microturbine_qd0_pu__phi_d_a_2_product2__out + _microturbine_qd0_pu__phi_d_a_2_product1__out;
    // Generated from the component: Microturbine.qd0(PU).Exciter.Gain2
    _microturbine_qd0_pu__exciter_gain2__out = 1.0 * _microturbine_qd0_pu__exciter_integrator1__out;
    // Generated from the component: Microturbine.qd0(PU).Exciter.Gain3
    _microturbine_qd0_pu__exciter_gain3__out = 50.0 * _microturbine_qd0_pu__exciter_integrator1__out;
    // Generated from the component: Microturbine.qd0(PU).Exciter.Gain5
    _microturbine_qd0_pu__exciter_gain5__out = 50.0 * _microturbine_qd0_pu__exciter_integrator1__out;
    // Generated from the component: Microturbine.qd0(PU).Exciter.PI.Ki
    _microturbine_qd0_pu__exciter_pi_ki__out = 0.1 * _microturbine_qd0_pu__exciter_integrator1__out;
    // Generated from the component: Microturbine.qd0(PU).Exciter.PI.Kp
    _microturbine_qd0_pu__exciter_pi_kp__out = 0.01 * _microturbine_qd0_pu__exciter_integrator1__out;
    // Generated from the component: Microturbine.qd0(PU).Exciter.Gain7
    _microturbine_qd0_pu__exciter_gain7__out = 1.0 * _microturbine_qd0_pu__exciter_integrator2__out;
    // Generated from the component: Microturbine.qd0(PU).Exciter.R_F_M
    HIL_OutAO(0x4019, (float)_microturbine_qd0_pu__exciter_integrator2__out);
    // Generated from the component: Microturbine.qd0(PU).Exciter.V_R_M
    HIL_OutAO(0x401a, (float)_microturbine_qd0_pu__exciter_integrator3__out);
    // Generated from the component: Microturbine.qd0(PU).Exciter.Sum5
    _microturbine_qd0_pu__exciter_sum5__out =  - _microturbine_qd0_pu__exciter_integrator4__out + _microturbine_qd0_pu__magnitude_mathematical_function1__out;
    // Generated from the component: Microturbine.qd0(PU).Exciter.V_t_M
    HIL_OutAO(0x401b, (float)_microturbine_qd0_pu__exciter_integrator4__out);
    // Generated from the component: Microturbine.qd0(PU).Exciter.exciter OFF
    HIL_OutInt32(0xf0040b, _microturbine_qd0_pu__exciter_logical_operator1__out != 0x0);
    // Generated from the component: Microturbine.qd0(PU).|V|
    HIL_OutAO(0x4029, (float)_microturbine_qd0_pu__gain17__out);
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
    // Generated from the component: Microturbine.BE1-25A Synchronizer.Relational operator2
    _microturbine_be1_25a_synchronizer_relational_operator2__out = (_microturbine_be1_25a_synchronizer_constant7__out > _microturbine_be1_25a_synchronizer_abs5__out) ? 1 : 0;
    // Generated from the component: Microturbine.qd0(PU).Governor.Rate Limiter1
    if (_microturbine_qd0_pu__governor_rate_limiter1__first_step) {
        _microturbine_qd0_pu__governor_rate_limiter1__out = _microturbine_qd0_pu__governor_gain4__out;
    } else {
        _microturbine_qd0_pu__governor_rate_limiter1__out = _microturbine_qd0_pu__governor_gain4__out;
        _microturbine_qd0_pu__governor_rate_limiter1__in_rate = _microturbine_qd0_pu__governor_gain4__out - _microturbine_qd0_pu__governor_rate_limiter1__prev_out;
        if (_microturbine_qd0_pu__governor_rate_limiter1__in_rate > 0.0002) {
            _microturbine_qd0_pu__governor_rate_limiter1__out = _microturbine_qd0_pu__governor_rate_limiter1__prev_out + (0.0002);
        }
        if (_microturbine_qd0_pu__governor_rate_limiter1__in_rate < -0.0002) {
            _microturbine_qd0_pu__governor_rate_limiter1__out = _microturbine_qd0_pu__governor_rate_limiter1__prev_out + (-0.0002);
        }
    }
    // Generated from the component: Microturbine.BE1-25A Synchronizer.Abs2
    _microturbine_be1_25a_synchronizer_abs2__out = fabs(_microturbine_be1_25a_synchronizer_sum3__out);
    // Generated from the component: Microturbine.BE1-25A Synchronizer.BE1-25A Synchronizer1
    _microturbine_be1_25a_synchronizer_be1_25a_synchronizer1__dV = _microturbine_be1_25a_synchronizer_sum3__out;
    if (_microturbine_be1_25a_synchronizer_be1_25a_synchronizer1__dV > 0.001) {
        _microturbine_be1_25a_synchronizer_be1_25a_synchronizer1__del_V = 0.2;
    }
    else if ((_microturbine_be1_25a_synchronizer_be1_25a_synchronizer1__dV <= 0.001) && (_microturbine_be1_25a_synchronizer_be1_25a_synchronizer1__dV > 0)) {
        _microturbine_be1_25a_synchronizer_be1_25a_synchronizer1__del_V = 0.2 * _microturbine_be1_25a_synchronizer_be1_25a_synchronizer1__dV / 0.001;
    }
    else if ((_microturbine_be1_25a_synchronizer_be1_25a_synchronizer1__dV <= 0) && (_microturbine_be1_25a_synchronizer_be1_25a_synchronizer1__dV > -1 * (0.001 - 0.0005))) {
        _microturbine_be1_25a_synchronizer_be1_25a_synchronizer1__del_V = 0;
    }
    else if ((_microturbine_be1_25a_synchronizer_be1_25a_synchronizer1__dV <= (-1 * (0.001 - 0.0005))) && (_microturbine_be1_25a_synchronizer_be1_25a_synchronizer1__dV > (-1 * 0.001))) {
        _microturbine_be1_25a_synchronizer_be1_25a_synchronizer1__del_V = 0.2 * (_microturbine_be1_25a_synchronizer_be1_25a_synchronizer1__dV + (0.001 - 0.0005)) / 0.0005;
    }
    else if (_microturbine_be1_25a_synchronizer_be1_25a_synchronizer1__dV <= (-1 * 0.001)) {
        _microturbine_be1_25a_synchronizer_be1_25a_synchronizer1__del_V = -1 * 0.2;
    }
    // Generated from the component: Microturbine.BE1-25A Synchronizer.volt_diff3
    HIL_OutAO(0x400d, (float)_microturbine_be1_25a_synchronizer_sum3__out);
    // Generated from the component: Microturbine.qd0(PU).|V|3
    _microturbine_qd0_pu___v_3__out = (_microturbine_be1_25a_synchronizer_unit_delay5__out != 1.0) ? _microturbine_signal_switch2__out : _microturbine_qd0_pu__vref__out;
    // Generated from the component: Microturbine.qd0(PU).Phi_2q_a.Gain1
    _microturbine_qd0_pu__phi_2q_a_gain1__out = 4.898478952953661 * _microturbine_qd0_pu__phi_2q_a_sum1__out;
    // Generated from the component: Microturbine.qd0(PU).Phi_q_a_M
    HIL_OutAO(0x4024, (float)_microturbine_qd0_pu__phi_q_a_2_sum1__out);
    // Generated from the component: Microturbine.qd0(PU).V_dG2.Product2
    _microturbine_qd0_pu__v_dg2_product2__out = (_microturbine_qd0_pu__v_dg2_product3__out * _microturbine_qd0_pu__phi_q_a_2_sum1__out);
    // Generated from the component: Microturbine.qd0(PU).V_qG2.Gain1
    _microturbine_qd0_pu__v_qg2_gain1__out = 0.0 * _microturbine_qd0_pu__phi_q_a_2_sum1__out;
    // Generated from the component: Microturbine.qd0(PU).w_m.Product2
    _microturbine_qd0_pu__w_m_product2__out = (_microturbine_qd0_pu__phi_q_a_2_sum1__out * _microturbine_qd0_pu__gain6__out);
    // Generated from the component: Microturbine.qd0(PU).E_qp.Product2
    _microturbine_qd0_pu__e_qp_product2__out = (_microturbine_qd0_pu__e_qp_constant2__out * _microturbine_qd0_pu__e_qp_sum3__out);
    // Generated from the component: Microturbine.qd0(PU).Phi_1d_a.Gain1
    _microturbine_qd0_pu__phi_1d_a_gain1__out = 25.623029273849628 * _microturbine_qd0_pu__phi_1d_a_sum1__out;
    // Generated from the component: Microturbine.qd0(PU).Phi_d_a_M
    HIL_OutAO(0x4023, (float)_microturbine_qd0_pu__phi_d_a_2_sum1__out);
    // Generated from the component: Microturbine.qd0(PU).V_dG2.Gain1
    _microturbine_qd0_pu__v_dg2_gain1__out = 0.0 * _microturbine_qd0_pu__phi_d_a_2_sum1__out;
    // Generated from the component: Microturbine.qd0(PU).V_qG2.Product2
    _microturbine_qd0_pu__v_qg2_product2__out = (_microturbine_qd0_pu__v_qg2_product3__out * _microturbine_qd0_pu__phi_d_a_2_sum1__out);
    // Generated from the component: Microturbine.qd0(PU).w_m.Product3
    _microturbine_qd0_pu__w_m_product3__out = (_microturbine_qd0_pu__phi_d_a_2_sum1__out * _microturbine_qd0_pu__gain14__out);
    // Generated from the component: Microturbine.qd0(PU).Exciter.Sum1
    _microturbine_qd0_pu__exciter_sum1__out =  - _microturbine_qd0_pu__exciter_gain2__out + _microturbine_qd0_pu__exciter_integrator3__out;
    // Generated from the component: Microturbine.qd0(PU).Exciter.Sum2
    _microturbine_qd0_pu__exciter_sum2__out =  - _microturbine_qd0_pu__exciter_integrator2__out + _microturbine_qd0_pu__exciter_gain3__out;
    // Generated from the component: Microturbine.qd0(PU).Exciter.PI.Sum5
    _microturbine_qd0_pu__exciter_pi_sum5__out = _microturbine_qd0_pu__exciter_pi_kp__out + _microturbine_qd0_pu__exciter_pi_integrator1__out;
    // Generated from the component: Microturbine.qd0(PU).Exciter.Gain9
    _microturbine_qd0_pu__exciter_gain9__out = 5000.0 * _microturbine_qd0_pu__exciter_sum5__out;
    // Generated from the component: Microturbine.BE1-25A Synchronizer.Abs4
    _microturbine_be1_25a_synchronizer_abs4__out = fabs(_microturbine_be1_25a_synchronizer_confine_phase__out);
    // Generated from the component: Microturbine.BE1-25A Synchronizer.angle_diff3
    HIL_OutAO(0x4009, (float)_microturbine_be1_25a_synchronizer_confine_phase__out);
    // Generated from the component: Microturbine.BE1-25A Synchronizer.Digital Probe4
    HIL_OutInt32(0xf00402, _microturbine_be1_25a_synchronizer_relational_operator2__out != 0x0);
    // Generated from the component: Microturbine.qd0(PU).Governor.Sum6
    _microturbine_qd0_pu__governor_sum6__out = _microturbine_qd0_pu__governor_rate_limiter1__out + _microturbine_be1_25a_synchronizer_unit_delay3__out;
    // Generated from the component: Microturbine.BE1-25A Synchronizer.Relational operator4
    _microturbine_be1_25a_synchronizer_relational_operator4__out = (_microturbine_be1_25a_synchronizer_abs2__out < _microturbine_be1_25a_synchronizer_constant9__out) ? 1 : 0;
    // Generated from the component: Microturbine.BE1-25A Synchronizer.Hold after connect1
    _microturbine_be1_25a_synchronizer_hold_after_connect1__MT_sync = _microturbine_mt_sync__out;
    _microturbine_be1_25a_synchronizer_hold_after_connect1__connect = _microturbine_cb_control_logical_operator1__out;
    _microturbine_be1_25a_synchronizer_hold_after_connect1__exc_state = _microturbine_qd0_pu__governor_exciter_activation_activate_exciter__Activate;
    _microturbine_be1_25a_synchronizer_hold_after_connect1__in = _microturbine_be1_25a_synchronizer_be1_25a_synchronizer1__del_V;
    _microturbine_be1_25a_synchronizer_hold_after_connect1__out = _microturbine_be1_25a_synchronizer_hold_after_connect1__var;
    // Generated from the component: Microturbine.qd0(PU).Exciter.Sum6
    _microturbine_qd0_pu__exciter_sum6__out = _microturbine_qd0_pu___v_3__out + _microturbine_be1_25a_synchronizer_unit_delay4__out;
    // Generated from the component: Microturbine.qd0(PU).V_qG2.Differentiator1
    _microturbine_qd0_pu__v_qg2_differentiator1__out = (_microturbine_qd0_pu__v_qg2_gain1__out - _microturbine_qd0_pu__v_qg2_differentiator1__state) / 2e-05;
    // Generated from the component: Microturbine.qd0(PU).E_qp.Sum2
    _microturbine_qd0_pu__e_qp_sum2__out = _microturbine_qd0_pu__gain6__out - _microturbine_qd0_pu__e_qp_product2__out;
    // Generated from the component: Microturbine.qd0(PU).V_dG2.Differentiator1
    _microturbine_qd0_pu__v_dg2_differentiator1__out = (_microturbine_qd0_pu__v_dg2_gain1__out - _microturbine_qd0_pu__v_dg2_differentiator1__state) / 2e-05;
    // Generated from the component: Microturbine.qd0(PU).w_m.Sum1
    _microturbine_qd0_pu__w_m_sum1__out = _microturbine_qd0_pu__w_m_product3__out - _microturbine_qd0_pu__w_m_product2__out;
    // Generated from the component: Microturbine.qd0(PU).Exciter.Gain1
    _microturbine_qd0_pu__exciter_gain1__out = 99999.99999999999 * _microturbine_qd0_pu__exciter_sum1__out;
    // Generated from the component: Microturbine.qd0(PU).Exciter.Gain4
    _microturbine_qd0_pu__exciter_gain4__out = 5000.0 * _microturbine_qd0_pu__exciter_sum2__out;
    // Generated from the component: Microturbine.qd0(PU).Exciter.PI.Limit1
    if (_microturbine_qd0_pu__exciter_pi_sum5__out > 10.0) {
        _microturbine_qd0_pu__exciter_pi_limit1__out = 10.0;
    } else if (_microturbine_qd0_pu__exciter_pi_sum5__out < -10.0) {
        _microturbine_qd0_pu__exciter_pi_limit1__out = -10.0;
    } else {
        _microturbine_qd0_pu__exciter_pi_limit1__out = _microturbine_qd0_pu__exciter_pi_sum5__out;
    }
    // Generated from the component: Microturbine.BE1-25A Synchronizer.BE1-25A Synchronizer
    _microturbine_be1_25a_synchronizer_be1_25a_synchronizer__angle_slip = _microturbine_be1_25a_synchronizer_abs4__out;
    _microturbine_be1_25a_synchronizer_be1_25a_synchronizer__df = _microturbine_be1_25a_synchronizer_sum2__out;
    if (_microturbine_be1_25a_synchronizer_be1_25a_synchronizer__df > 0.0005) {
        _microturbine_be1_25a_synchronizer_be1_25a_synchronizer__del_w = 1.125 * 0.2;
    }
    else if ((_microturbine_be1_25a_synchronizer_be1_25a_synchronizer__df <= 0.0005) && (_microturbine_be1_25a_synchronizer_be1_25a_synchronizer__df > 0)) {
        _microturbine_be1_25a_synchronizer_be1_25a_synchronizer__del_w = 0.2 * _microturbine_be1_25a_synchronizer_be1_25a_synchronizer__df / 0.0005 + (0.125 * 0.2);
    }
    else if ((_microturbine_be1_25a_synchronizer_be1_25a_synchronizer__df <= 0) && (_microturbine_be1_25a_synchronizer_be1_25a_synchronizer__df > (-0.00025))) {
        _microturbine_be1_25a_synchronizer_be1_25a_synchronizer__del_w = (0.125 * 0.2) * (_microturbine_be1_25a_synchronizer_be1_25a_synchronizer__df) / 0.00025 + (0.125 * 0.2);
    }
    else if ((_microturbine_be1_25a_synchronizer_be1_25a_synchronizer__df <= (-1 * 0.00025)) && (_microturbine_be1_25a_synchronizer_be1_25a_synchronizer__df > (-1 * 0.0005))) {
        _microturbine_be1_25a_synchronizer_be1_25a_synchronizer__del_w = 0;
    }
    else if (_microturbine_be1_25a_synchronizer_be1_25a_synchronizer__df <= (-1 * 0.0005)) {
        _microturbine_be1_25a_synchronizer_be1_25a_synchronizer__del_w = (0.0005 + _microturbine_be1_25a_synchronizer_be1_25a_synchronizer__df) * 0.2 / 0.0005;
    }
    // Generated from the component: Microturbine.BE1-25A Synchronizer.Relational operator1
    _microturbine_be1_25a_synchronizer_relational_operator1__out = (_microturbine_be1_25a_synchronizer_constant6__out > _microturbine_be1_25a_synchronizer_abs4__out) ? 1 : 0;
    // Generated from the component: Microturbine.qd0(PU).Governor.Sum7
    _microturbine_qd0_pu__governor_sum7__out = _microturbine_qd0_pu__governor_sum6__out - _microturbine_qd0_pu__governor_gain28__out;
    // Generated from the component: Microturbine.BE1-25A Synchronizer.Digital Probe5
    HIL_OutInt32(0xf00403, _microturbine_be1_25a_synchronizer_relational_operator4__out != 0x0);
    // Generated from the component: Microturbine.qd0(PU).Exciter.Sum4
    _microturbine_qd0_pu__exciter_sum4__out = _microturbine_qd0_pu__exciter_sum6__out - _microturbine_qd0_pu__exciter_integrator4__out;
    // Generated from the component: Microturbine.qd0(PU).V_qG2.Sum2
    _microturbine_qd0_pu__v_qg2_sum2__out = _microturbine_qd0_pu__v_qg2_product2__out + _microturbine_qd0_pu__v_qg2_differentiator1__out;
    // Generated from the component: Microturbine.qd0(PU).E_qp.Product1
    _microturbine_qd0_pu__e_qp_product1__out = (_microturbine_qd0_pu__e_qp_constant1__out * _microturbine_qd0_pu__e_qp_sum2__out);
    // Generated from the component: Microturbine.qd0(PU).V_dG2.Sum2
    _microturbine_qd0_pu__v_dg2_sum2__out =  - _microturbine_qd0_pu__v_dg2_product2__out + _microturbine_qd0_pu__v_dg2_differentiator1__out;
    // Generated from the component: Microturbine.qd0(PU).w_m.Sum2
    _microturbine_qd0_pu__w_m_sum2__out = _microturbine_qd0_pu__engine_integrator1__out - _microturbine_qd0_pu__w_m_sum1__out - _microturbine_qd0_pu__w_m_product1__out;
    // Generated from the component: Microturbine.qd0(PU).w_m.Te
    HIL_OutAO(0x4026, (float)_microturbine_qd0_pu__w_m_sum1__out);
    // Generated from the component: Microturbine.qd0(PU).E_F_M
    HIL_OutAO(0x4015, (float)_microturbine_qd0_pu__exciter_pi_limit1__out);
    // Generated from the component: Microturbine.qd0(PU).Exciter.PI.Sum6
    _microturbine_qd0_pu__exciter_pi_sum6__out =  - _microturbine_qd0_pu__exciter_pi_sum5__out + _microturbine_qd0_pu__exciter_pi_limit1__out;
    // Generated from the component: Microturbine.BE1-25A Synchronizer.Hold after connect
    _microturbine_be1_25a_synchronizer_hold_after_connect__MT_sync = _microturbine_mt_sync__out;
    _microturbine_be1_25a_synchronizer_hold_after_connect__connect = _microturbine_cb_control_logical_operator1__out;
    _microturbine_be1_25a_synchronizer_hold_after_connect__in = _microturbine_be1_25a_synchronizer_be1_25a_synchronizer__del_w;
    _microturbine_be1_25a_synchronizer_hold_after_connect__out = _microturbine_be1_25a_synchronizer_hold_after_connect__var;
    // Generated from the component: Microturbine.BE1-25A Synchronizer.Digital Probe3
    HIL_OutInt32(0xf00401, _microturbine_be1_25a_synchronizer_relational_operator1__out != 0x0);
    // Generated from the component: Microturbine.BE1-25A Synchronizer.Logical operator1
    _microturbine_be1_25a_synchronizer_logical_operator1__out = _microturbine_be1_25a_synchronizer_relational_operator1__out && _microturbine_be1_25a_synchronizer_relational_operator2__out && _microturbine_be1_25a_synchronizer_relational_operator4__out ;
    // Generated from the component: Microturbine.qd0(PU).Governor.Sum10
    _microturbine_qd0_pu__governor_sum10__out = _microturbine_qd0_pu__governor_gain29__out + _microturbine_qd0_pu__governor_sum7__out;
    // Generated from the component: Microturbine.qd0(PU).Exciter.|V|1
    _microturbine_qd0_pu__exciter__v_1__out = (_microturbine_qd0_pu__governor_exciter_activation_activate_exciter__Activate != 1.0) ? _microturbine_qd0_pu__exciter_constant1__out : _microturbine_qd0_pu__exciter_sum4__out;
    // Generated from the component: Microturbine.qd0(PU).Eq_phi
    HIL_OutAO(0x4018, (float)_microturbine_qd0_pu__v_qg2_sum2__out);
    // Generated from the component: Microturbine.qd0(PU).Gain8
    _microturbine_qd0_pu__gain8__out = 11267.652816802622 * _microturbine_qd0_pu__v_qg2_sum2__out;
    // Generated from the component: Microturbine.qd0(PU).E_qp.Sum1
    _microturbine_qd0_pu__e_qp_sum1__out =  - _microturbine_qd0_pu__e_qp_integrator1__out - _microturbine_qd0_pu__e_qp_product1__out + _microturbine_qd0_pu__exciter_pi_limit1__out;
    // Generated from the component: Microturbine.qd0(PU).Ed_phi
    HIL_OutAO(0x4017, (float)_microturbine_qd0_pu__v_dg2_sum2__out);
    // Generated from the component: Microturbine.qd0(PU).Gain9
    _microturbine_qd0_pu__gain9__out = 11267.652816802622 * _microturbine_qd0_pu__v_dg2_sum2__out;
    // Generated from the component: Microturbine.qd0(PU).w_m.Gain2
    _microturbine_qd0_pu__w_m_gain2__out = 135.88203817864417 * _microturbine_qd0_pu__w_m_sum2__out;
    // Generated from the component: Microturbine.qd0(PU).Exciter.PI.Kb
    _microturbine_qd0_pu__exciter_pi_kb__out = 1.0 * _microturbine_qd0_pu__exciter_pi_sum6__out;
    // Generated from the component: Microturbine.BE1-25A Synchronizer.stay connected1
    _microturbine_be1_25a_synchronizer_stay_connected1__MTsync = _microturbine_mt_sync__out;
    _microturbine_be1_25a_synchronizer_stay_connected1__connectMT = _microturbine_cb_control_logical_operator2__out;
    _microturbine_be1_25a_synchronizer_stay_connected1__ready = _microturbine_be1_25a_synchronizer_logical_operator1__out;
    _microturbine_be1_25a_synchronizer_stay_connected1__out = _microturbine_be1_25a_synchronizer_stay_connected1__connect;
    // Generated from the component: Microturbine.qd0(PU).Governor.Gain30
    _microturbine_qd0_pu__governor_gain30__out = 10000.0 * _microturbine_qd0_pu__governor_sum10__out;
    // Generated from the component: Microturbine.qd0(PU).Exciter.Rate Limit
    if (_microturbine_qd0_pu__exciter_rate_limit__first_step) {
        _microturbine_qd0_pu__exciter_rate_limit__out = _microturbine_qd0_pu__exciter__v_1__out;
    } else {
        _microturbine_qd0_pu__exciter_rate_limit__out = _microturbine_qd0_pu__exciter__v_1__out;
        _microturbine_qd0_pu__exciter_rate_limit__in_rate = _microturbine_qd0_pu__exciter__v_1__out - _microturbine_qd0_pu__exciter_rate_limit__prev_out;
        if (_microturbine_qd0_pu__exciter_rate_limit__in_rate > 0.0002) {
            _microturbine_qd0_pu__exciter_rate_limit__out = _microturbine_qd0_pu__exciter_rate_limit__prev_out + (0.0002);
        }
        if (_microturbine_qd0_pu__exciter_rate_limit__in_rate < -0.0002) {
            _microturbine_qd0_pu__exciter_rate_limit__out = _microturbine_qd0_pu__exciter_rate_limit__prev_out + (-0.0002);
        }
    }
    // Generated from the component: Microturbine.qd0(PU).E_qp.Gain1
    _microturbine_qd0_pu__e_qp_gain1__out = 0.27142857142857146 * _microturbine_qd0_pu__e_qp_sum1__out;
    // Generated from the component: Microturbine.qd0(PU).Gain2
    _microturbine_qd0_pu__gain2__out = -1.0 * _microturbine_qd0_pu__gain9__out;
    // Generated from the component: Microturbine.qd0(PU).Exciter.PI.Sum7
    _microturbine_qd0_pu__exciter_pi_sum7__out = _microturbine_qd0_pu__exciter_pi_ki__out + _microturbine_qd0_pu__exciter_pi_kb__out;
    // Generated from the component: Microturbine.qd0(PU).Governor.Sum3
    _microturbine_qd0_pu__governor_sum3__out =  - _microturbine_qd0_pu__governor_gain36__out + _microturbine_qd0_pu__governor_gain30__out;
    // Generated from the component: Microturbine.qd0(PU).Exciter.Gain8
    _microturbine_qd0_pu__exciter_gain8__out = 1.0 * _microturbine_qd0_pu__exciter_rate_limit__out;
    // Generated from the component: Microturbine.qd0(PU).Exciter.Volt difference
    HIL_OutAO(0x401c, (float)_microturbine_qd0_pu__exciter_rate_limit__out);
    // Generated from the component: Microturbine.qd0(PU).dq to abc1.dq to alpha beta
    _microturbine_qd0_pu__dq_to_abc1_dq_to_alpha_beta__k1 = cos(_microturbine_qd0_pu__product1__out);
    _microturbine_qd0_pu__dq_to_abc1_dq_to_alpha_beta__k2 = sin(_microturbine_qd0_pu__product1__out);
    _microturbine_qd0_pu__dq_to_abc1_dq_to_alpha_beta__alpha = _microturbine_qd0_pu__dq_to_abc1_dq_to_alpha_beta__k2 * _microturbine_qd0_pu__gain8__out + _microturbine_qd0_pu__dq_to_abc1_dq_to_alpha_beta__k1 * _microturbine_qd0_pu__gain2__out;
    _microturbine_qd0_pu__dq_to_abc1_dq_to_alpha_beta__beta = _microturbine_qd0_pu__dq_to_abc1_dq_to_alpha_beta__k2 * _microturbine_qd0_pu__gain2__out - _microturbine_qd0_pu__dq_to_abc1_dq_to_alpha_beta__k1 * _microturbine_qd0_pu__gain8__out;
    // Generated from the component: Microturbine.qd0(PU).Governor.Gain31
    _microturbine_qd0_pu__governor_gain31__out = 0.5 * _microturbine_qd0_pu__governor_sum3__out;
    // Generated from the component: Microturbine.qd0(PU).Exciter.Sum3
    _microturbine_qd0_pu__exciter_sum3__out =  - _microturbine_qd0_pu__exciter_integrator3__out + _microturbine_qd0_pu__exciter_gain7__out - _microturbine_qd0_pu__exciter_gain5__out + _microturbine_qd0_pu__exciter_gain8__out;
    // Generated from the component: Microturbine.qd0(PU).dq to abc1.alpha beta to abc
    _microturbine_qd0_pu__dq_to_abc1_alpha_beta_to_abc__A = 1 * _microturbine_qd0_pu__constant1__out;
    _microturbine_qd0_pu__dq_to_abc1_alpha_beta_to_abc__B = _microturbine_qd0_pu__dq_to_abc1_alpha_beta_to_abc__A - 0.5 * _microturbine_qd0_pu__dq_to_abc1_dq_to_alpha_beta__alpha;
    _microturbine_qd0_pu__dq_to_abc1_alpha_beta_to_abc__C = _microturbine_qd0_pu__dq_to_abc1_alpha_beta_to_abc__B - 0.8660254037844386 * _microturbine_qd0_pu__dq_to_abc1_dq_to_alpha_beta__beta;
    _microturbine_qd0_pu__dq_to_abc1_alpha_beta_to_abc__B += 0.8660254037844386 * _microturbine_qd0_pu__dq_to_abc1_dq_to_alpha_beta__beta;
    _microturbine_qd0_pu__dq_to_abc1_alpha_beta_to_abc__A += 1 * _microturbine_qd0_pu__dq_to_abc1_dq_to_alpha_beta__alpha;
    // Generated from the component: Microturbine.qd0(PU).Governor.Sum4
    _microturbine_qd0_pu__governor_sum4__out = _microturbine_qd0_pu__governor_integrator12__out + _microturbine_qd0_pu__governor_gain31__out;
    // Generated from the component: Microturbine.qd0(PU).Exciter.Gain6
    _microturbine_qd0_pu__exciter_gain6__out = 500.0 * _microturbine_qd0_pu__exciter_sum3__out;
    // Generated from the component: Microturbine.Ea.Vs1
    HIL_OutFloat(137101312, (float) _microturbine_qd0_pu__dq_to_abc1_alpha_beta_to_abc__A);
    // Generated from the component: Microturbine.Eb.Vs1
    HIL_OutFloat(137101313, (float) _microturbine_qd0_pu__dq_to_abc1_alpha_beta_to_abc__B);
    // Generated from the component: Microturbine.Ec.Vs1
    HIL_OutFloat(137101314, (float) _microturbine_qd0_pu__dq_to_abc1_alpha_beta_to_abc__C);
    // Generated from the component: Microturbine.qd0(PU).Governor.Gain32
    _microturbine_qd0_pu__governor_gain32__out = 7.5 * _microturbine_qd0_pu__governor_sum4__out;
    // Generated from the component: Microturbine.qd0(PU).Governor.Sum5
    _microturbine_qd0_pu__governor_sum5__out = _microturbine_qd0_pu__governor_integrator9__out - _microturbine_qd0_pu__governor_gain32__out;
    // Generated from the component: Microturbine.qd0(PU).Governor.Gain33
    _microturbine_qd0_pu__governor_gain33__out = 150.6024096385542 * _microturbine_qd0_pu__governor_sum5__out;
    // Generated from the component: Microturbine.qd0(PU).Governor.Sum8
    _microturbine_qd0_pu__governor_sum8__out =  - _microturbine_qd0_pu__governor_integrator10__out - _microturbine_qd0_pu__governor_gain33__out;
    // Generated from the component: Microturbine.qd0(PU).Governor.Gain34
    _microturbine_qd0_pu__governor_gain34__out = 1285.3271389856754 * _microturbine_qd0_pu__governor_sum8__out;
    //@cmp.out.block.end
    //////////////////////////////////////////////////////////////////////////
    // Update block
    //////////////////////////////////////////////////////////////////////////
    //@cmp.update.block.start
    // Generated from the component: Microturbine.BE1-25A Synchronizer.Unit Delay2
    _microturbine_be1_25a_synchronizer_unit_delay2__state = _microturbine_be1_25a_synchronizer_pll_confine_phase__out;
    // Generated from the component: Microturbine.BE1-25A Synchronizer.Unit Delay3
    _microturbine_be1_25a_synchronizer_unit_delay3__state = _microturbine_be1_25a_synchronizer_hold_after_connect__out;
    // Generated from the component: Microturbine.BE1-25A Synchronizer.Unit Delay4
    _microturbine_be1_25a_synchronizer_unit_delay4__state = _microturbine_be1_25a_synchronizer_hold_after_connect1__out;
    // Generated from the component: Microturbine.BE1-25A Synchronizer.Unit Delay5
    _microturbine_be1_25a_synchronizer_unit_delay5__state = _microturbine_be1_25a_synchronizer_stay_connected1__out;
    // Generated from the component: Microturbine.qd0(PU).Clock1
    _microturbine_qd0_pu__clock1__state += 2e-05;
    // Generated from the component: Microturbine.qd0(PU).E_qp.Integrator1
    _microturbine_qd0_pu__e_qp_integrator1__state += _microturbine_qd0_pu__e_qp_gain1__out * 2e-05;
    // Generated from the component: Microturbine.qd0(PU).Engine.Integrator1
    _microturbine_qd0_pu__engine_integrator1__state += _microturbine_qd0_pu__engine_gain1__out * 2e-05;
    // Generated from the component: Microturbine.qd0(PU).Governor.Integrator10
    _microturbine_qd0_pu__governor_integrator10__state += _microturbine_qd0_pu__governor_gain34__out * 2e-05;
    // Generated from the component: Microturbine.qd0(PU).Governor.Integrator11
    _microturbine_qd0_pu__governor_integrator11__state += _microturbine_qd0_pu__governor_sum9__out * 2e-05;
    // Generated from the component: Microturbine.qd0(PU).Governor.Integrator12
    _microturbine_qd0_pu__governor_integrator12__state += _microturbine_qd0_pu__governor_sum3__out * 2e-05;
    // Generated from the component: Microturbine.qd0(PU).Governor.Integrator9
    _microturbine_qd0_pu__governor_integrator9__state += _microturbine_qd0_pu__governor_integrator10__out * 2e-05;
    // Generated from the component: Microturbine.qd0(PU).Phi_1d_a.Integrator1
    _microturbine_qd0_pu__phi_1d_a_integrator1__state += _microturbine_qd0_pu__phi_1d_a_gain1__out * 2e-05;
    // Generated from the component: Microturbine.qd0(PU).Phi_2q_a.Integrator1
    _microturbine_qd0_pu__phi_2q_a_integrator1__state += _microturbine_qd0_pu__phi_2q_a_gain1__out * 2e-05;
    // Generated from the component: Microturbine.qd0(PU).w_m.Integrator1
    _microturbine_qd0_pu__w_m_integrator1__state += _microturbine_qd0_pu__w_m_gain2__out * 2e-05;
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
    // Generated from the component: Microturbine.BE1-25A Synchronizer.PLL.PID controller1
    if (!_microturbine_be1_25a_synchronizer_pll_pid_controller1__av_active) {
        _microturbine_be1_25a_synchronizer_pll_pid_controller1__integrator_state += 2.0 * _microturbine_be1_25a_synchronizer_gain6__out * 2e-05;
    }
    // Generated from the component: Microturbine.qd0(PU).Governor.Exciter Activation.Comparator1
    if (_microturbine_qd0_pu__governor_exciter_activation_constant1__out < _microturbine_qd0_pu__governor_exciter_activation_abs1__out) {
        _microturbine_qd0_pu__governor_exciter_activation_comparator1__state = 0;
    } else if (_microturbine_qd0_pu__governor_exciter_activation_constant1__out > _microturbine_qd0_pu__governor_exciter_activation_abs1__out) {
        _microturbine_qd0_pu__governor_exciter_activation_comparator1__state = 1;
    }
    // Generated from the component: Microturbine.BE1-25A Synchronizer.PLL.C function1
    _microturbine_be1_25a_synchronizer_pll_c_function1__var += (2e-05 * _microturbine_be1_25a_synchronizer_pll_c_function1__in);
    // Generated from the component: Microturbine.qd0(PU).Governor.Exciter Activation.Activate Exciter
    // Generated from the component: Microturbine.BE1-25A Synchronizer.confine phase1
    // Generated from the component: Microturbine.BE1-25A Synchronizer.confine phase2
    // Generated from the component: Microturbine.BE1-25A Synchronizer.PLL.confine phase
    // Generated from the component: Microturbine.qd0(PU).Exciter.Integrator1
    _microturbine_qd0_pu__exciter_integrator1__state += _microturbine_qd0_pu__exciter_gain1__out * 2e-05;
    if (_microturbine_qd0_pu__governor_exciter_activation_activate_exciter__Activate > 0)
        _microturbine_qd0_pu__exciter_integrator1__reset_state = 1;
    else if (_microturbine_qd0_pu__governor_exciter_activation_activate_exciter__Activate < 0)
        _microturbine_qd0_pu__exciter_integrator1__reset_state = -1;
    else
        _microturbine_qd0_pu__exciter_integrator1__reset_state = 0;
    // Generated from the component: Microturbine.qd0(PU).Exciter.Integrator2
    _microturbine_qd0_pu__exciter_integrator2__state += _microturbine_qd0_pu__exciter_gain4__out * 2e-05;
    if (_microturbine_qd0_pu__governor_exciter_activation_activate_exciter__Activate > 0)
        _microturbine_qd0_pu__exciter_integrator2__reset_state = 1;
    else if (_microturbine_qd0_pu__governor_exciter_activation_activate_exciter__Activate < 0)
        _microturbine_qd0_pu__exciter_integrator2__reset_state = -1;
    else
        _microturbine_qd0_pu__exciter_integrator2__reset_state = 0;
    // Generated from the component: Microturbine.qd0(PU).Exciter.Integrator3
    _microturbine_qd0_pu__exciter_integrator3__state += _microturbine_qd0_pu__exciter_gain6__out * 2e-05;
    if (_microturbine_qd0_pu__governor_exciter_activation_activate_exciter__Activate > 0)
        _microturbine_qd0_pu__exciter_integrator3__reset_state = 1;
    else if (_microturbine_qd0_pu__governor_exciter_activation_activate_exciter__Activate < 0)
        _microturbine_qd0_pu__exciter_integrator3__reset_state = -1;
    else
        _microturbine_qd0_pu__exciter_integrator3__reset_state = 0;
    if (_microturbine_qd0_pu__exciter_integrator3__state > 10.0)
        _microturbine_qd0_pu__exciter_integrator3__state = 10.0;
    if (_microturbine_qd0_pu__exciter_integrator3__state < -10.0)
        _microturbine_qd0_pu__exciter_integrator3__state = -10.0;
    // Generated from the component: Microturbine.qd0(PU).Exciter.Integrator4
    _microturbine_qd0_pu__exciter_integrator4__state += _microturbine_qd0_pu__exciter_gain9__out * 2e-05;
    if (_microturbine_qd0_pu__governor_exciter_activation_activate_exciter__Activate > 0)
        _microturbine_qd0_pu__exciter_integrator4__reset_state = 1;
    else if (_microturbine_qd0_pu__governor_exciter_activation_activate_exciter__Activate < 0)
        _microturbine_qd0_pu__exciter_integrator4__reset_state = -1;
    else
        _microturbine_qd0_pu__exciter_integrator4__reset_state = 0;
    // Generated from the component: Microturbine.qd0(PU).Exciter.PI.Integrator1
    _microturbine_qd0_pu__exciter_pi_integrator1__state += _microturbine_qd0_pu__exciter_pi_sum7__out * 2e-05;
    if (_microturbine_qd0_pu__governor_exciter_activation_activate_exciter__Activate > 0)
        _microturbine_qd0_pu__exciter_pi_integrator1__reset_state = 1;
    else if (_microturbine_qd0_pu__governor_exciter_activation_activate_exciter__Activate < 0)
        _microturbine_qd0_pu__exciter_pi_integrator1__reset_state = -1;
    else
        _microturbine_qd0_pu__exciter_pi_integrator1__reset_state = 0;
    // Generated from the component: Microturbine.BE1-25A Synchronizer.confine phase
    // Generated from the component: Microturbine.qd0(PU).Governor.Rate Limiter1
    _microturbine_qd0_pu__governor_rate_limiter1__prev_out = _microturbine_qd0_pu__governor_rate_limiter1__out;
    _microturbine_qd0_pu__governor_rate_limiter1__first_step = 0;
    // Generated from the component: Microturbine.BE1-25A Synchronizer.BE1-25A Synchronizer1
    // Generated from the component: Microturbine.BE1-25A Synchronizer.Hold after connect1
    if ((_microturbine_be1_25a_synchronizer_hold_after_connect1__connect == 0) && (_microturbine_be1_25a_synchronizer_hold_after_connect1__exc_state == 1) && (_microturbine_be1_25a_synchronizer_hold_after_connect1__MT_sync == 1))_microturbine_be1_25a_synchronizer_hold_after_connect1__var = _microturbine_be1_25a_synchronizer_hold_after_connect1__in;
    else if (_microturbine_be1_25a_synchronizer_hold_after_connect1__connect == 1)_microturbine_be1_25a_synchronizer_hold_after_connect1__var = 0;
    // Generated from the component: Microturbine.qd0(PU).V_qG2.Differentiator1
    _microturbine_qd0_pu__v_qg2_differentiator1__state = _microturbine_qd0_pu__v_qg2_gain1__out;
    // Generated from the component: Microturbine.qd0(PU).V_dG2.Differentiator1
    _microturbine_qd0_pu__v_dg2_differentiator1__state = _microturbine_qd0_pu__v_dg2_gain1__out;
    // Generated from the component: Microturbine.BE1-25A Synchronizer.BE1-25A Synchronizer
    // Generated from the component: Microturbine.BE1-25A Synchronizer.Hold after connect
    if ((_microturbine_be1_25a_synchronizer_hold_after_connect__connect == 0) && (_microturbine_be1_25a_synchronizer_hold_after_connect__MT_sync == 1))_microturbine_be1_25a_synchronizer_hold_after_connect__var = _microturbine_be1_25a_synchronizer_hold_after_connect__in;
    else if (_microturbine_be1_25a_synchronizer_hold_after_connect__connect == 1)_microturbine_be1_25a_synchronizer_hold_after_connect__var = 0;
    // Generated from the component: Microturbine.BE1-25A Synchronizer.stay connected1
    if ((_microturbine_be1_25a_synchronizer_stay_connected1__ready == 1) && (_microturbine_be1_25a_synchronizer_stay_connected1__connectMT == 1) && (_microturbine_be1_25a_synchronizer_stay_connected1__MTsync == 1)) {
        _microturbine_be1_25a_synchronizer_stay_connected1__connect = 1;
    }
    else if ((_microturbine_be1_25a_synchronizer_stay_connected1__connectMT == 0) || (_microturbine_be1_25a_synchronizer_stay_connected1__MTsync == 0)) {
        _microturbine_be1_25a_synchronizer_stay_connected1__connect = 0;
    }
    // Generated from the component: Microturbine.qd0(PU).Exciter.Rate Limit
    _microturbine_qd0_pu__exciter_rate_limit__prev_out = _microturbine_qd0_pu__exciter_rate_limit__out;
    _microturbine_qd0_pu__exciter_rate_limit__first_step = 0;
    //@cmp.update.block.end
}
// ----------------------------------------------------------------------------------------  //-----------------------------------------------------------------------------------------