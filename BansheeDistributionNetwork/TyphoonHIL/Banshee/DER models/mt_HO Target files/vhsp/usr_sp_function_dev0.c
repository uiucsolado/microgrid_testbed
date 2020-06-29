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
double _microturbine_25a_auto_sync_constant1__out = 0.1746725515395925;
double _microturbine_25a_auto_sync_constant2__out = -0.0016;
double _microturbine_25a_auto_sync_constant3__out = 0.0;
double _microturbine_25a_auto_sync_constant4__out = 0.005;
double _microturbine_25a_auto_sync_difference_signal__out;
double _microturbine_clock1__out;
X_Int32 _microturbine_connect__out;
double _microturbine_constant1__out = 1.0;
double _microturbine_constant2__out = 0.0;
double _microturbine_constant3__out = 376.99111843077515;
X_Int32 _microturbine_mt_sync__out;
double _microturbine_sinusoidal_source1__out;
double _microturbine_sinusoidal_source2__out;
double _microturbine_sinusoidal_source3__out;
double _microturbine_qd0_pu__constant1__out = 0.0;
double _microturbine_qd0_pu__constant2__out = 0.0;
double _microturbine_qd0_pu__e_dp_constant1__out = 1.0969924620644034;
double _microturbine_qd0_pu__e_dp_constant2__out = 1.7071361450966718;
double _microturbine_qd0_pu__e_dp_constant3__out = 0.5328249101455675;
double _microturbine_qd0_pu__e_dp_integrator1__out;
double _microturbine_qd0_pu__e_qp_constant1__out = 1.499679472394103;
double _microturbine_qd0_pu__e_qp_constant2__out = 4.73087672368683;
double _microturbine_qd0_pu__e_qp_constant3__out = 0.13013789981586804;
double _microturbine_qd0_pu__e_qp_integrator1__out;
double _microturbine_qd0_pu__engine_integrator1__out;
double _microturbine_qd0_pu__exciter_constant1__out = 0.0;
X_Int32 _microturbine_qd0_pu__exciter_constant2__out = 1;
double _microturbine_qd0_pu__generator_voltage_constant1__out = 0.31683062130177514;
double _microturbine_qd0_pu__generator_voltage_constant2__out = 0.31683062130177514;
double _microturbine_qd0_pu__governor_constant1__out = 0.0064;
double _microturbine_qd0_pu__governor_edge_detection1_unit_delay1__out;
double _microturbine_qd0_pu__i_d_a__algebraic__constant1__out = 0.38433363889162125;
double _microturbine_qd0_pu__i_d_a__algebraic__constant2__out = 0.6156663611083787;
double _microturbine_qd0_pu__i_q_a__algebraic__constant1__out = 0.09039533688261552;
double _microturbine_qd0_pu__i_q_a__algebraic__constant2__out = 0.9096046631173846;
double _microturbine_qd0_pu__phi_1d_a_constant1__out = 0.13013789981586804;
double _microturbine_qd0_pu__phi_1d_a_integrator1__out;
double _microturbine_qd0_pu__phi_2q_a_constant1__out = 0.5328249101455675;
double _microturbine_qd0_pu__phi_2q_a_integrator1__out;
double _microturbine_qd0_pu__phi_d_a_2_constant1__out = 0.38433363889162125;
double _microturbine_qd0_pu__phi_d_a_2_constant2__out = 0.6156663611083787;
double _microturbine_qd0_pu__phi_d_a_constant1__out = 0.319832174556213;
double _microturbine_qd0_pu__phi_d_a_constant2__out = 376.99111843077515;
double _microturbine_qd0_pu__phi_d_a_unit_delay1__out;
double _microturbine_qd0_pu__phi_q_a_2_constant1__out = 0.09039533688261552;
double _microturbine_qd0_pu__phi_q_a_2_constant2__out = 0.9096046631173846;
double _microturbine_qd0_pu__phi_q_a_constant1__out = 0.319832174556213;
double _microturbine_qd0_pu__phi_q_a_constant2__out = 376.99111843077515;
double _microturbine_qd0_pu__phi_q_a_unit_delay1__out;
double _microturbine_qd0_pu__v_dg2_constant2__out = 376.99111843077515;
double _microturbine_qd0_pu__v_dg2_unit_delay1__out;
double _microturbine_qd0_pu__v_qg2_constant2__out = 376.99111843077515;
double _microturbine_qd0_pu__v_qg2_unit_delay1__out;
double _microturbine_qd0_pu__theta_g_constant1__out = 0.0;
double _microturbine_qd0_pu__theta_g_integrator1__out;
double _microturbine_qd0_pu__w_m_constant1__out = 9.735803297112912e-05;
double _microturbine_qd0_pu__w_m_integrator1__out;
double _microturbine_product1__out;
double _microturbine_25a_auto_sync_product5__out;
X_Int32 _microturbine_logical_operator1__out;
double _microturbine_signal_switch1__out;
float _microturbine_governor_on__tmp;
double _microturbine_abc_to_dq1_abc_to_alpha_beta__alpha;
double _microturbine_abc_to_dq1_abc_to_alpha_beta__beta;
double _microturbine_abc_to_dq1_abc_to_alpha_beta__gamma;
double _microturbine_qd0_pu__i_d_a__algebraic__product1__out;
double _microturbine_qd0_pu__i_q_a__algebraic__product1__out;
double _microturbine_qd0_pu__i_d_a__algebraic__product2__out;
double _microturbine_qd0_pu__i_q_a__algebraic__product2__out;
double _microturbine_qd0_pu__phi_d_a_2_product1__out;
double _microturbine_qd0_pu__phi_d_a_2_product2__out;
double _microturbine_qd0_pu__phi_d_a_integrator1__out;
double _microturbine_qd0_pu__phi_q_a_2_product1__out;
double _microturbine_qd0_pu__phi_q_a_2_product2__out;
double _microturbine_qd0_pu__phi_q_a_integrator1__out;
double _microturbine_qd0_pu__w_m_gain1__out;
double _microturbine_qd0_pu__gain1__out;
double _microturbine_qd0_pu__governor_gain1__out;
float _microturbine_governor_off__tmp;
double _microturbine_qd0_pu__governor_gain4__out;
double _microturbine_abc_to_dq1_alpha_beta_to_dq__d;
double _microturbine_abc_to_dq1_alpha_beta_to_dq__q;
double _microturbine_abc_to_dq1_alpha_beta_to_dq__k1;
double _microturbine_abc_to_dq1_alpha_beta_to_dq__k2;
double _microturbine_qd0_pu__phi_d_a_2_sum1__out;
double _microturbine_qd0_pu__phi_q_a_2_sum1__out;
double _microturbine_qd0_pu__w_m_product1__out;
double _microturbine_qd0_pu__generator_voltage_gain4__out;
double _microturbine_qd0_pu__generator_voltage_gain7__out;
double _microturbine_qd0_pu__phi_d_a_product3__out;
double _microturbine_qd0_pu__phi_q_a_product3__out;
double _microturbine_qd0_pu__v_dg2_product3__out;
double _microturbine_qd0_pu__v_qg2_product3__out;
double _microturbine_qd0_pu__governor_rate_limiter1__in_rate;
double _microturbine_gain1__out;
double _microturbine_magnitude_product5__out;
double _microturbine_qd0_pu__q_flux__out;
double _microturbine_qd0_pu__d_flux__out;
double _microturbine_qd0_pu__governor_sum1__out;
double _microturbine_gain2__out;
double _microturbine_magnitude_product6__out;
double _microturbine_qd0_pu__i_d_a__algebraic__sum1__out;
double _microturbine_qd0_pu__phi_q_a_product2__out;
double _microturbine_qd0_pu__v_dg2_gain1__out;
double _microturbine_qd0_pu__v_qg2_product2__out;
double _microturbine_qd0_pu__i_q_a__algebraic__sum1__out;
double _microturbine_qd0_pu__phi_d_a_product2__out;
double _microturbine_qd0_pu__v_dg2_product2__out;
double _microturbine_qd0_pu__v_qg2_gain1__out;
double _microturbine_25a_auto_sync_product4__out;
double _microturbine_25a_auto_sync_relational_operator2__out;
double _microturbine_25a_auto_sync_relational_operator3__out;
double _microturbine_25a_auto_sync_sign1__out;
double _microturbine_qd0_pu__governor_abs1__out;
double _microturbine_trigonometric_function1__out;
double _microturbine_magnitude_sum3__out;
double _microturbine_qd0_pu__i_d_a__algebraic__gain1__out;
double _microturbine_qd0_pu__v_dg2_differentiator1__out;
double _microturbine_qd0_pu__i_q_a__algebraic__gain1__out;
double _microturbine_qd0_pu__v_qg2_differentiator1__out;
double _microturbine_25a_auto_sync_logical_operator2__out;
double _microturbine_25a_auto_sync_proportional_difference_signal__df;
double _microturbine_25a_auto_sync_proportional_difference_signal__max_pds;
double _microturbine_25a_auto_sync_proportional_difference_signal__sign;


double _microturbine_25a_auto_sync_proportional_difference_signal__pds;
double _microturbine_qd0_pu__governor_comparator1__out;
double _microturbine_sum1__out;
double _microturbine_magnitude_mathematical_function1__out;
double _microturbine_qd0_pu__d_current__out;
double _microturbine_qd0_pu__v_dg2_sum2__out;
double _microturbine_qd0_pu__q_current__out;
double _microturbine_qd0_pu__v_qg2_sum2__out;
float _microturbine_25a_auto_sync_f_diff__tmp;
double _microturbine_product4__out;
double _microturbine_qd0_pu__governor_logical_operator1__out;
double _microturbine_remainder__out;
double _microturbine_remainder__in;


double _microturbine_remainder__output;
double _microturbine_qd0_pu__e_qp_product3__out;
double _microturbine_qd0_pu__generator_voltage_gain3__out;
double _microturbine_qd0_pu__generator_voltage_gain8__out;
double _microturbine_qd0_pu__generator_voltage_product3__out;
double _microturbine_qd0_pu__phi_1d_a_product1__out;
double _microturbine_qd0_pu__phi_d_a_product1__out;
double _microturbine_qd0_pu__w_m_product2__out;
double _microturbine_qd0_pu__e_dp_product3__out;
double _microturbine_qd0_pu__generator_voltage_gain2__out;
double _microturbine_qd0_pu__generator_voltage_gain5__out;
double _microturbine_qd0_pu__generator_voltage_product1__out;
double _microturbine_qd0_pu__phi_2q_a_product1__out;
double _microturbine_qd0_pu__phi_q_a_product1__out;
double _microturbine_qd0_pu__w_m_product3__out;
double _microturbine_qd0_pu__engine_sum1__out;
double _microturbine_qd0_pu__governor_edge_detection1_relational_operator1__out;
double _microturbine_qd0_pu__e_qp_sum3__out;
double _microturbine_qd0_pu__generator_voltage_product2__out;
double _microturbine_qd0_pu__generator_voltage_differentiator2__out;
double _microturbine_qd0_pu__phi_1d_a_sum1__out;
double _microturbine_qd0_pu__phi_d_a_sum1__out;
double _microturbine_qd0_pu__e_dp_sum3__out;
double _microturbine_qd0_pu__generator_voltage_differentiator1__out;
double _microturbine_qd0_pu__generator_voltage_product4__out;
double _microturbine_qd0_pu__phi_2q_a_sum1__out;
double _microturbine_qd0_pu__phi_q_a_sum1__out;
double _microturbine_qd0_pu__w_m_sum1__out;
double _microturbine_qd0_pu__engine_gain1__out;
double _microturbine_qd0_pu__governor_wait_to_trip__time_acc;
double _microturbine_qd0_pu__governor_wait_to_trip__Reset;
double _microturbine_qd0_pu__governor_wait_to_trip__boolean;


X_Int32 _microturbine_qd0_pu__governor_wait_to_trip__Trip;
double _microturbine_qd0_pu__e_qp_product2__out;
double _microturbine_qd0_pu__generator_voltage_gain6__out;
double _microturbine_qd0_pu__phi_1d_a_gain1__out;
double _microturbine_qd0_pu__phi_d_a_sum2__out;
double _microturbine_qd0_pu__e_dp_product2__out;
double _microturbine_qd0_pu__generator_voltage_gain1__out;
double _microturbine_qd0_pu__phi_2q_a_gain1__out;
double _microturbine_qd0_pu__phi_q_a_sum2__out;
double _microturbine_qd0_pu__w_m_sum2__out;
X_Int32 _microturbine_qd0_pu__exciter_relational_operator1__out;
double _microturbine_qd0_pu__e_qp_sum2__out;
double _microturbine_qd0_pu__generator_voltage_sum2__out;
double _microturbine_qd0_pu__phi_d_a_gain1__out;
double _microturbine_qd0_pu__e_dp_sum2__out;
double _microturbine_qd0_pu__generator_voltage_sum1__out;
double _microturbine_qd0_pu__phi_q_a_gain1__out;
double _microturbine_qd0_pu__w_m_gain2__out;
double _microturbine_qd0_pu__exciter_integrator1__out;
double _microturbine_qd0_pu__exciter_integrator2__out;
double _microturbine_qd0_pu__exciter_integrator3__out;
double _microturbine_qd0_pu__exciter_integrator4__out;
X_Int32 _microturbine_qd0_pu__exciter_logical_operator1__out;
double _microturbine_qd0_pu__exciter_pi_integrator1__out;
float _microturbine_qd0_pu__exciter_exciter_on__tmp;
double _microturbine_qd0_pu__exciter__v_1__out;
double _microturbine_qd0_pu__e_qp_product1__out;
double _microturbine_qd0_pu__d_voltage__out;
double _microturbine_qd0_pu__e_dp_product1__out;
double _microturbine_qd0_pu__q_voltage__out;
double _microturbine_qd0_pu__exciter_gain2__out;
double _microturbine_qd0_pu__exciter_gain3__out;
double _microturbine_qd0_pu__exciter_gain5__out;
double _microturbine_qd0_pu__exciter_pi_ki__out;
double _microturbine_qd0_pu__exciter_pi_kp__out;
double _microturbine_qd0_pu__exciter_gain7__out;
float _microturbine_qd0_pu__exciter_exciter_off__tmp;
double _microturbine_qd0_pu__exciter_rate_limit__in_rate;
double _microturbine_qd0_pu__magnitude_product6__out;
double _microturbine_qd0_pu__theta_g_gain1__out;
double _microturbine_qd0_pu__e_dp_sum1__out;
double _microturbine_qd0_pu__magnitude_product5__out;
double _microturbine_qd0_pu__exciter_sum1__out;
double _microturbine_qd0_pu__exciter_sum2__out;
double _microturbine_qd0_pu__exciter_pi_sum5__out;
double _microturbine_qd0_pu__exciter_sum4__out;
double _microturbine_qd0_pu__theta_g_trigonometric_function2__out;
double _microturbine_qd0_pu__e_dp_gain1__out;
double _microturbine_qd0_pu__magnitude_sum3__out;
double _microturbine_qd0_pu__exciter_gain1__out;
double _microturbine_qd0_pu__exciter_gain4__out;
double _microturbine_qd0_pu__exciter_pi_limit1__out;
double _microturbine_25a_auto_sync_abs2__out;
double _microturbine_qd0_pu__exciter_gain8__out;
double _microturbine_qd0_pu__theta_g_signal_switch1__out;
double _microturbine_qd0_pu__magnitude_mathematical_function1__out;
double _microturbine_qd0_pu__e_qp_sum1__out;
double _microturbine_qd0_pu__exciter_pi_sum6__out;
double _microturbine_25a_auto_sync_relational_operator4__out;
double _microturbine_qd0_pu__exciter_sum3__out;
double _microturbine_qd0_pu__theta_g_sum1__out;
double _microturbine_qd0_pu__exciter_sum5__out;
double _microturbine_qd0_pu__e_qp_gain1__out;
double _microturbine_qd0_pu__exciter_pi_kb__out;
float _microturbine_25a_auto_sync_v_diff__tmp;
double _microturbine_qd0_pu__exciter_gain6__out;
double _microturbine_qd0_pu__theta_g_remainder__out;
double _microturbine_qd0_pu__theta_g_remainder__in;


double _microturbine_qd0_pu__theta_g_remainder__output;
double _microturbine_qd0_pu__exciter_gain9__out;
double _microturbine_qd0_pu__exciter_pi_sum7__out;
double _microturbine_25a_auto_sync_sum1__out;
double _microturbine_25a_auto_sync_confine_phase__dtheta;


double _microturbine_25a_auto_sync_confine_phase__dtheta_confined;
double _microturbine_25a_auto_sync_abs1__out;
double _microturbine_25a_auto_sync_relational_operator1__out;
double _microturbine_25a_auto_sync_logical_operator1__out;
float _microturbine_25a_auto_sync_theta_diff__tmp;
double _microturbine_product3__out;
float _microturbine_ready_to_connect__tmp;
//@cmp.var.end

//@cmp.svar.start
// state variables
double _microturbine_clock1__state;
double _microturbine_sinusoidal_source1__current_phase;
double _microturbine_sinusoidal_source2__current_phase;
double _microturbine_sinusoidal_source3__current_phase;
double _microturbine_qd0_pu__e_dp_integrator1__state;
double _microturbine_qd0_pu__e_qp_integrator1__state;
double _microturbine_qd0_pu__engine_integrator1__state;
double _microturbine_qd0_pu__governor_edge_detection1_unit_delay1__state;
double _microturbine_qd0_pu__phi_1d_a_integrator1__state;
double _microturbine_qd0_pu__phi_2q_a_integrator1__state;
double _microturbine_qd0_pu__phi_d_a_unit_delay1__state;
double _microturbine_qd0_pu__phi_q_a_unit_delay1__state;
double _microturbine_qd0_pu__v_dg2_unit_delay1__state;
double _microturbine_qd0_pu__v_qg2_unit_delay1__state;
double _microturbine_qd0_pu__theta_g_integrator1__state;
double _microturbine_qd0_pu__w_m_integrator1__state;
double _microturbine_qd0_pu__phi_d_a_integrator1__state;
double _microturbine_qd0_pu__phi_q_a_integrator1__state;
double _microturbine_qd0_pu__governor_rate_limiter1__prev_out;
double _microturbine_qd0_pu__governor_rate_limiter1__out;
int _microturbine_qd0_pu__governor_rate_limiter1__first_step;
double _microturbine_qd0_pu__v_dg2_differentiator1__state;
double _microturbine_qd0_pu__v_qg2_differentiator1__state;
double _microturbine_qd0_pu__governor_comparator1__state;
double _microturbine_qd0_pu__generator_voltage_differentiator2__state;
double _microturbine_qd0_pu__generator_voltage_differentiator1__state;
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
    _microturbine_clock1__state = 0.0f;
    _microturbine_sinusoidal_source1__current_phase = 0.0 / 360.0f;
    _microturbine_sinusoidal_source2__current_phase = -120.0 / 360.0f;
    _microturbine_sinusoidal_source3__current_phase = 120.0 / 360.0f;
    _microturbine_qd0_pu__e_dp_integrator1__state = 0.0;
    _microturbine_qd0_pu__e_qp_integrator1__state = 0.0;
    _microturbine_qd0_pu__engine_integrator1__state = 0.0;
    _microturbine_qd0_pu__governor_edge_detection1_unit_delay1__state = 0.0;
    _microturbine_qd0_pu__phi_1d_a_integrator1__state = 0.0;
    _microturbine_qd0_pu__phi_2q_a_integrator1__state = 0.0;
    _microturbine_qd0_pu__phi_d_a_unit_delay1__state = 0.0;
    _microturbine_qd0_pu__phi_q_a_unit_delay1__state = 0.0;
    _microturbine_qd0_pu__v_dg2_unit_delay1__state = 0.0;
    _microturbine_qd0_pu__v_qg2_unit_delay1__state = 0.0;
    _microturbine_qd0_pu__theta_g_integrator1__state = 0.0;
    _microturbine_qd0_pu__w_m_integrator1__state = 0.0;
    HIL_OutAO(0x4019, 0.0f);
    HIL_OutAO(0x4007, 0.0f);
    HIL_OutAO(0x4008, 0.0f);
    HIL_OutAO(0x4013, 0.0f);
    HIL_OutAO(0x400f, 0.0f);
    HIL_OutAO(0x4010, 0.0f);
    _microturbine_qd0_pu__phi_d_a_integrator1__state =  _microturbine_qd0_pu__phi_d_a_unit_delay1__out;
    _microturbine_qd0_pu__phi_q_a_integrator1__state =  _microturbine_qd0_pu__phi_q_a_unit_delay1__out;
    HIL_OutAO(0x4017, 0.0f);
    _microturbine_qd0_pu__governor_rate_limiter1__first_step = 1;
    HIL_OutAO(0x4002, 0.0f);
    HIL_OutAO(0x4001, 0.0f);
    HIL_OutAO(0x4011, 0.0f);
    HIL_OutAO(0x4012, 0.0f);
    HIL_OutAO(0x400e, 0.0f);
    _microturbine_qd0_pu__v_dg2_differentiator1__state =  0.0f;
    _microturbine_qd0_pu__v_qg2_differentiator1__state =  0.0f;
    _microturbine_25a_auto_sync_proportional_difference_signal__df = 0;
    _microturbine_25a_auto_sync_proportional_difference_signal__pds = 0;
    _microturbine_25a_auto_sync_proportional_difference_signal__sign = 0;
    _microturbine_25a_auto_sync_proportional_difference_signal__max_pds = 0;
    _microturbine_qd0_pu__governor_comparator1__state = 0.0f;
    _microturbine_remainder__out = 0;
    _microturbine_remainder__in = 0;
    HIL_OutAO(0x4004, 0.0f);
    HIL_OutAO(0x4005, 0.0f);
    HIL_OutAO(0x4003, 0.0f);
    _microturbine_qd0_pu__generator_voltage_differentiator2__state =  0.0f;
    _microturbine_qd0_pu__generator_voltage_differentiator1__state =  0.0f;
    _microturbine_qd0_pu__governor_wait_to_trip__time_acc = 0;
    _microturbine_qd0_pu__governor_wait_to_trip__Trip = 0;
    HIL_OutAO(0x400d, 0.0f);
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
    HIL_OutAO(0x4009, 0.0f);
    HIL_OutAO(0x400a, 0.0f);
    HIL_OutAO(0x400b, 0.0f);
    _microturbine_qd0_pu__exciter_rate_limit__first_step = 1;
    HIL_OutAO(0x4014, 0.0f);
    HIL_OutAO(0x4015, 0.0f);
    HIL_OutAO(0x400c, 0.0f);
    HIL_OutAO(0x4006, 0.0f);
    HIL_OutAO(0x4018, 0.0f);
    _microturbine_qd0_pu__theta_g_remainder__out = 0;
    _microturbine_qd0_pu__theta_g_remainder__in = 0;
    HIL_OutAO(0x4016, 0.0f);
    _microturbine_25a_auto_sync_confine_phase__dtheta = 0;
    _microturbine_25a_auto_sync_confine_phase__dtheta_confined = 0;
    HIL_OutAO(0x4000, 0.0f);
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
    // Generated from the component: Microturbine.25A_auto_sync.Constant1
    // Generated from the component: Microturbine.25A_auto_sync.Constant2
    // Generated from the component: Microturbine.25A_auto_sync.Constant3
    // Generated from the component: Microturbine.25A_auto_sync.Constant4
    // Generated from the component: Microturbine.25A_auto_sync.Difference signal
    _microturbine_25a_auto_sync_difference_signal__out = XIo_InFloat(0x55000100);
    // Generated from the component: Microturbine.Clock1
    _microturbine_clock1__out = _microturbine_clock1__state;
    // Generated from the component: Microturbine.Connect
    _microturbine_connect__out = XIo_InInt32(0x55000104);
    // Generated from the component: Microturbine.Constant1
    // Generated from the component: Microturbine.Constant2
    // Generated from the component: Microturbine.Constant3
    // Generated from the component: Microturbine.MT_sync
    _microturbine_mt_sync__out = XIo_InInt32(0x55000108);
    // Generated from the component: Microturbine.Sinusoidal Source1
    _microturbine_sinusoidal_source1__out = (1.0 * sin(2.0f * M_PI * _microturbine_sinusoidal_source1__current_phase) + 0.0);
    // Generated from the component: Microturbine.Sinusoidal Source2
    _microturbine_sinusoidal_source2__out = (1.0 * sin(2.0f * M_PI * _microturbine_sinusoidal_source2__current_phase) + 0.0);
    // Generated from the component: Microturbine.Sinusoidal Source3
    _microturbine_sinusoidal_source3__out = (1.0 * sin(2.0f * M_PI * _microturbine_sinusoidal_source3__current_phase) + 0.0);
    // Generated from the component: Microturbine.qd0(PU).Constant1
    // Generated from the component: Microturbine.qd0(PU).Constant2
    // Generated from the component: Microturbine.qd0(PU).E_dp.Constant1
    // Generated from the component: Microturbine.qd0(PU).E_dp.Constant2
    // Generated from the component: Microturbine.qd0(PU).E_dp.Constant3
    // Generated from the component: Microturbine.qd0(PU).E_dp.Integrator1
    _microturbine_qd0_pu__e_dp_integrator1__out = _microturbine_qd0_pu__e_dp_integrator1__state;
    // Generated from the component: Microturbine.qd0(PU).E_qp.Constant1
    // Generated from the component: Microturbine.qd0(PU).E_qp.Constant2
    // Generated from the component: Microturbine.qd0(PU).E_qp.Constant3
    // Generated from the component: Microturbine.qd0(PU).E_qp.Integrator1
    _microturbine_qd0_pu__e_qp_integrator1__out = _microturbine_qd0_pu__e_qp_integrator1__state;
    // Generated from the component: Microturbine.qd0(PU).Engine.Integrator1
    _microturbine_qd0_pu__engine_integrator1__out = _microturbine_qd0_pu__engine_integrator1__state;
    // Generated from the component: Microturbine.qd0(PU).Exciter.Constant1
    // Generated from the component: Microturbine.qd0(PU).Exciter.Constant2
    // Generated from the component: Microturbine.qd0(PU).Generator Voltage.Constant1
    // Generated from the component: Microturbine.qd0(PU).Generator Voltage.Constant2
    // Generated from the component: Microturbine.qd0(PU).Governor.Constant1
    // Generated from the component: Microturbine.qd0(PU).Governor.Edge Detection1.Unit Delay1
    _microturbine_qd0_pu__governor_edge_detection1_unit_delay1__out = _microturbine_qd0_pu__governor_edge_detection1_unit_delay1__state;
    // Generated from the component: Microturbine.qd0(PU).I_d_a (algebraic).Constant1
    // Generated from the component: Microturbine.qd0(PU).I_d_a (algebraic).Constant2
    // Generated from the component: Microturbine.qd0(PU).I_q_a (algebraic).Constant1
    // Generated from the component: Microturbine.qd0(PU).I_q_a (algebraic).Constant2
    // Generated from the component: Microturbine.qd0(PU).Phi_1d_a.Constant1
    // Generated from the component: Microturbine.qd0(PU).Phi_1d_a.Integrator1
    _microturbine_qd0_pu__phi_1d_a_integrator1__out = _microturbine_qd0_pu__phi_1d_a_integrator1__state;
    // Generated from the component: Microturbine.qd0(PU).Phi_2q_a.Constant1
    // Generated from the component: Microturbine.qd0(PU).Phi_2q_a.Integrator1
    _microturbine_qd0_pu__phi_2q_a_integrator1__out = _microturbine_qd0_pu__phi_2q_a_integrator1__state;
    // Generated from the component: Microturbine.qd0(PU).Phi_d_a 2.Constant1
    // Generated from the component: Microturbine.qd0(PU).Phi_d_a 2.Constant2
    // Generated from the component: Microturbine.qd0(PU).Phi_d_a.Constant1
    // Generated from the component: Microturbine.qd0(PU).Phi_d_a.Constant2
    // Generated from the component: Microturbine.qd0(PU).Phi_d_a.Unit Delay1
    _microturbine_qd0_pu__phi_d_a_unit_delay1__out = _microturbine_qd0_pu__phi_d_a_unit_delay1__state;
    // Generated from the component: Microturbine.qd0(PU).Phi_q_a 2.Constant1
    // Generated from the component: Microturbine.qd0(PU).Phi_q_a 2.Constant2
    // Generated from the component: Microturbine.qd0(PU).Phi_q_a.Constant1
    // Generated from the component: Microturbine.qd0(PU).Phi_q_a.Constant2
    // Generated from the component: Microturbine.qd0(PU).Phi_q_a.Unit Delay1
    _microturbine_qd0_pu__phi_q_a_unit_delay1__out = _microturbine_qd0_pu__phi_q_a_unit_delay1__state;
    // Generated from the component: Microturbine.qd0(PU).V_dG2.Constant2
    // Generated from the component: Microturbine.qd0(PU).V_dG2.Unit Delay1
    _microturbine_qd0_pu__v_dg2_unit_delay1__out = _microturbine_qd0_pu__v_dg2_unit_delay1__state;
    // Generated from the component: Microturbine.qd0(PU).V_qG2.Constant2
    // Generated from the component: Microturbine.qd0(PU).V_qG2.Unit Delay1
    _microturbine_qd0_pu__v_qg2_unit_delay1__out = _microturbine_qd0_pu__v_qg2_unit_delay1__state;
    // Generated from the component: Microturbine.qd0(PU).theta_G.Constant1
    // Generated from the component: Microturbine.qd0(PU).theta_G.Integrator1
    _microturbine_qd0_pu__theta_g_integrator1__out = _microturbine_qd0_pu__theta_g_integrator1__state;
    // Generated from the component: Microturbine.qd0(PU).w_m.Constant1
    // Generated from the component: Microturbine.qd0(PU).w_m.Integrator1
    _microturbine_qd0_pu__w_m_integrator1__out = _microturbine_qd0_pu__w_m_integrator1__state;
    // Generated from the component: Microturbine.Product1
    _microturbine_product1__out = (_microturbine_clock1__out * _microturbine_constant3__out);
    // Generated from the component: Microturbine.w_bus
    HIL_OutAO(0x4019, (float)_microturbine_constant3__out);
    // Generated from the component: Microturbine.25A_auto_sync.Product5
    _microturbine_25a_auto_sync_product5__out = (_microturbine_mt_sync__out * _microturbine_25a_auto_sync_difference_signal__out);
    // Generated from the component: Microturbine.Logical operator1
    _microturbine_logical_operator1__out = !_microturbine_mt_sync__out;
    // Generated from the component: Microturbine.Signal switch1
    _microturbine_signal_switch1__out = (_microturbine_mt_sync__out != 1.0) ? _microturbine_constant2__out : _microturbine_constant3__out;
    // Generated from the component: Microturbine.governor ON
    HIL_OutInt32(0xf00405, _microturbine_mt_sync__out != 0x0);
    // Generated from the component: Microturbine.abc to dq1.abc to alpha beta
    _microturbine_abc_to_dq1_abc_to_alpha_beta__alpha = (2.0 * _microturbine_sinusoidal_source1__out - _microturbine_sinusoidal_source2__out - _microturbine_sinusoidal_source3__out) * 0.3333333333333333;
    _microturbine_abc_to_dq1_abc_to_alpha_beta__beta = (_microturbine_sinusoidal_source2__out - _microturbine_sinusoidal_source3__out) * 0.5773502691896258;
    _microturbine_abc_to_dq1_abc_to_alpha_beta__gamma = (_microturbine_sinusoidal_source1__out + _microturbine_sinusoidal_source2__out + _microturbine_sinusoidal_source3__out) * 0.3333333333333333;
    // Generated from the component: Microturbine.qd0(PU).E_dp_M
    HIL_OutAO(0x4007, (float)_microturbine_qd0_pu__e_dp_integrator1__out);
    // Generated from the component: Microturbine.qd0(PU).E_qp_M
    HIL_OutAO(0x4008, (float)_microturbine_qd0_pu__e_qp_integrator1__out);
    // Generated from the component: Microturbine.qd0(PU).T_m_M
    HIL_OutAO(0x4013, (float)_microturbine_qd0_pu__engine_integrator1__out);
    // Generated from the component: Microturbine.qd0(PU).I_d_a (algebraic).Product1
    _microturbine_qd0_pu__i_d_a__algebraic__product1__out = (_microturbine_qd0_pu__i_d_a__algebraic__constant1__out * _microturbine_qd0_pu__e_qp_integrator1__out);
    // Generated from the component: Microturbine.qd0(PU).I_q_a (algebraic).Product1
    _microturbine_qd0_pu__i_q_a__algebraic__product1__out = (_microturbine_qd0_pu__i_q_a__algebraic__constant1__out * _microturbine_qd0_pu__e_dp_integrator1__out);
    // Generated from the component: Microturbine.qd0(PU).I_d_a (algebraic).Product2
    _microturbine_qd0_pu__i_d_a__algebraic__product2__out = (_microturbine_qd0_pu__i_d_a__algebraic__constant2__out * _microturbine_qd0_pu__phi_1d_a_integrator1__out);
    // Generated from the component: Microturbine.qd0(PU).Phi_1d_a_M
    HIL_OutAO(0x400f, (float)_microturbine_qd0_pu__phi_1d_a_integrator1__out);
    // Generated from the component: Microturbine.qd0(PU).I_q_a (algebraic).Product2
    _microturbine_qd0_pu__i_q_a__algebraic__product2__out = (_microturbine_qd0_pu__i_q_a__algebraic__constant2__out * _microturbine_qd0_pu__phi_2q_a_integrator1__out);
    // Generated from the component: Microturbine.qd0(PU).Phi_2q_a_M
    HIL_OutAO(0x4010, (float)_microturbine_qd0_pu__phi_2q_a_integrator1__out);
    // Generated from the component: Microturbine.qd0(PU).Phi_d_a 2.Product1
    _microturbine_qd0_pu__phi_d_a_2_product1__out = (_microturbine_qd0_pu__phi_d_a_2_constant1__out * _microturbine_qd0_pu__e_qp_integrator1__out);
    // Generated from the component: Microturbine.qd0(PU).Phi_d_a 2.Product2
    _microturbine_qd0_pu__phi_d_a_2_product2__out = (_microturbine_qd0_pu__phi_d_a_2_constant2__out * _microturbine_qd0_pu__phi_1d_a_integrator1__out);
    // Generated from the component: Microturbine.qd0(PU).Phi_d_a.Integrator1
    _microturbine_qd0_pu__phi_d_a_integrator1__out = _microturbine_qd0_pu__phi_d_a_integrator1__state;
    // Generated from the component: Microturbine.qd0(PU).Phi_q_a 2.Product1
    _microturbine_qd0_pu__phi_q_a_2_product1__out = (_microturbine_qd0_pu__phi_q_a_2_constant1__out * _microturbine_qd0_pu__e_dp_integrator1__out);
    // Generated from the component: Microturbine.qd0(PU).Phi_q_a 2.Product2
    _microturbine_qd0_pu__phi_q_a_2_product2__out = (_microturbine_qd0_pu__phi_q_a_2_constant2__out * _microturbine_qd0_pu__phi_2q_a_integrator1__out);
    // Generated from the component: Microturbine.qd0(PU).Phi_q_a.Integrator1
    _microturbine_qd0_pu__phi_q_a_integrator1__out = _microturbine_qd0_pu__phi_q_a_integrator1__state;
    // Generated from the component: Microturbine.qd0(PU).w_m.Gain1
    _microturbine_qd0_pu__w_m_gain1__out = 0.0026525823848649226 * _microturbine_qd0_pu__w_m_constant1__out;
    // Generated from the component: Microturbine.qd0(PU).Gain1
    _microturbine_qd0_pu__gain1__out = 1.0 * _microturbine_qd0_pu__w_m_integrator1__out;
    // Generated from the component: Microturbine.qd0(PU).Governor.Gain1
    _microturbine_qd0_pu__governor_gain1__out = 0.0026525823848649226 * _microturbine_qd0_pu__w_m_integrator1__out;
    // Generated from the component: Microturbine.qd0(PU).w_m_M
    HIL_OutAO(0x4017, (float)_microturbine_qd0_pu__w_m_integrator1__out);
    // Generated from the component: Microturbine.governor OFF
    HIL_OutInt32(0xf00404, _microturbine_logical_operator1__out != 0x0);
    // Generated from the component: Microturbine.qd0(PU).Governor.Gain4
    _microturbine_qd0_pu__governor_gain4__out = 0.0026525823848649226 * _microturbine_signal_switch1__out;
    // Generated from the component: Microturbine.Termination1
    // Generated from the component: Microturbine.abc to dq1.alpha beta to dq
    _microturbine_abc_to_dq1_alpha_beta_to_dq__k1 = cos(_microturbine_product1__out);
    _microturbine_abc_to_dq1_alpha_beta_to_dq__k2 = sin(_microturbine_product1__out);
    _microturbine_abc_to_dq1_alpha_beta_to_dq__d = _microturbine_abc_to_dq1_alpha_beta_to_dq__k2 * _microturbine_abc_to_dq1_abc_to_alpha_beta__alpha - _microturbine_abc_to_dq1_alpha_beta_to_dq__k1 * _microturbine_abc_to_dq1_abc_to_alpha_beta__beta;
    _microturbine_abc_to_dq1_alpha_beta_to_dq__q = _microturbine_abc_to_dq1_alpha_beta_to_dq__k1 * _microturbine_abc_to_dq1_abc_to_alpha_beta__alpha + _microturbine_abc_to_dq1_alpha_beta_to_dq__k2 * _microturbine_abc_to_dq1_abc_to_alpha_beta__beta;
    // Generated from the component: Microturbine.qd0(PU).Phi_d_a 2.Sum1
    _microturbine_qd0_pu__phi_d_a_2_sum1__out = _microturbine_qd0_pu__phi_d_a_2_product1__out + _microturbine_qd0_pu__phi_d_a_2_product2__out;
    // Generated from the component: Microturbine.qd0(PU).Phi_q_a 2.Sum1
    _microturbine_qd0_pu__phi_q_a_2_sum1__out =  - _microturbine_qd0_pu__phi_q_a_2_product1__out + _microturbine_qd0_pu__phi_q_a_2_product2__out;
    // Generated from the component: Microturbine.qd0(PU).w_m.Product1
    _microturbine_qd0_pu__w_m_product1__out = (_microturbine_qd0_pu__w_m_gain1__out * _microturbine_qd0_pu__w_m_integrator1__out);
    // Generated from the component: Microturbine.qd0(PU).Generator Voltage.Gain4
    _microturbine_qd0_pu__generator_voltage_gain4__out = 0.0026525823848649226 * _microturbine_qd0_pu__gain1__out;
    // Generated from the component: Microturbine.qd0(PU).Generator Voltage.Gain7
    _microturbine_qd0_pu__generator_voltage_gain7__out = 0.0026525823848649226 * _microturbine_qd0_pu__gain1__out;
    // Generated from the component: Microturbine.qd0(PU).Phi_d_a.Product3
    _microturbine_qd0_pu__phi_d_a_product3__out = (_microturbine_qd0_pu__gain1__out) * 1.0 / (_microturbine_qd0_pu__phi_d_a_constant2__out);
    // Generated from the component: Microturbine.qd0(PU).Phi_q_a.Product3
    _microturbine_qd0_pu__phi_q_a_product3__out = (_microturbine_qd0_pu__gain1__out) * 1.0 / (_microturbine_qd0_pu__phi_q_a_constant2__out);
    // Generated from the component: Microturbine.qd0(PU).V_dG2.Product3
    _microturbine_qd0_pu__v_dg2_product3__out = (_microturbine_qd0_pu__gain1__out) * 1.0 / (_microturbine_qd0_pu__v_dg2_constant2__out);
    // Generated from the component: Microturbine.qd0(PU).V_qG2.Product3
    _microturbine_qd0_pu__v_qg2_product3__out = (_microturbine_qd0_pu__gain1__out) * 1.0 / (_microturbine_qd0_pu__v_qg2_constant2__out);
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
    // Generated from the component: Microturbine.Gain1
    _microturbine_gain1__out = -1.0 * _microturbine_abc_to_dq1_alpha_beta_to_dq__q;
    // Generated from the component: Microturbine.V_q_a_B
    HIL_OutAO(0x4002, (float)_microturbine_abc_to_dq1_alpha_beta_to_dq__d);
    // Generated from the component: Microturbine.magnitude.Product5
    _microturbine_magnitude_product5__out = (_microturbine_abc_to_dq1_alpha_beta_to_dq__d * _microturbine_abc_to_dq1_alpha_beta_to_dq__d);
    // Generated from the component: Microturbine.qd0(PU).q-flux
    _microturbine_qd0_pu__q_flux__out = (_microturbine_connect__out != 1.0) ? _microturbine_qd0_pu__phi_d_a_2_sum1__out : _microturbine_qd0_pu__phi_d_a_integrator1__out;
    // Generated from the component: Microturbine.qd0(PU).d-flux
    _microturbine_qd0_pu__d_flux__out = (_microturbine_connect__out != 1.0) ? _microturbine_qd0_pu__phi_q_a_2_sum1__out : _microturbine_qd0_pu__phi_q_a_integrator1__out;
    // Generated from the component: Microturbine.qd0(PU).Governor.Sum1
    _microturbine_qd0_pu__governor_sum1__out = _microturbine_qd0_pu__governor_rate_limiter1__out - _microturbine_qd0_pu__governor_gain1__out;
    // Generated from the component: Microturbine.Gain2
    _microturbine_gain2__out = -1.0 * _microturbine_gain1__out;
    // Generated from the component: Microturbine.V_d_a_B
    HIL_OutAO(0x4001, (float)_microturbine_gain1__out);
    // Generated from the component: Microturbine.magnitude.Product6
    _microturbine_magnitude_product6__out = (_microturbine_gain1__out * _microturbine_gain1__out);
    // Generated from the component: Microturbine.qd0(PU).I_d_a (algebraic).Sum1
    _microturbine_qd0_pu__i_d_a__algebraic__sum1__out =  - _microturbine_qd0_pu__q_flux__out + _microturbine_qd0_pu__i_d_a__algebraic__product1__out + _microturbine_qd0_pu__i_d_a__algebraic__product2__out;
    // Generated from the component: Microturbine.qd0(PU).Phi_d_a_M
    HIL_OutAO(0x4011, (float)_microturbine_qd0_pu__q_flux__out);
    // Generated from the component: Microturbine.qd0(PU).Phi_q_a.Product2
    _microturbine_qd0_pu__phi_q_a_product2__out = (_microturbine_qd0_pu__phi_q_a_product3__out * _microturbine_qd0_pu__q_flux__out);
    // Generated from the component: Microturbine.qd0(PU).V_dG2.Gain1
    _microturbine_qd0_pu__v_dg2_gain1__out = 0.0026525823848649226 * _microturbine_qd0_pu__q_flux__out;
    // Generated from the component: Microturbine.qd0(PU).V_qG2.Product2
    _microturbine_qd0_pu__v_qg2_product2__out = (_microturbine_qd0_pu__v_qg2_product3__out * _microturbine_qd0_pu__q_flux__out);
    // Generated from the component: Microturbine.qd0(PU).I_q_a (algebraic).Sum1
    _microturbine_qd0_pu__i_q_a__algebraic__sum1__out =  - _microturbine_qd0_pu__d_flux__out - _microturbine_qd0_pu__i_q_a__algebraic__product1__out + _microturbine_qd0_pu__i_q_a__algebraic__product2__out;
    // Generated from the component: Microturbine.qd0(PU).Phi_d_a.Product2
    _microturbine_qd0_pu__phi_d_a_product2__out = (_microturbine_qd0_pu__phi_d_a_product3__out * _microturbine_qd0_pu__d_flux__out);
    // Generated from the component: Microturbine.qd0(PU).Phi_q_a_M
    HIL_OutAO(0x4012, (float)_microturbine_qd0_pu__d_flux__out);
    // Generated from the component: Microturbine.qd0(PU).V_dG2.Product2
    _microturbine_qd0_pu__v_dg2_product2__out = (_microturbine_qd0_pu__v_dg2_product3__out * _microturbine_qd0_pu__d_flux__out);
    // Generated from the component: Microturbine.qd0(PU).V_qG2.Gain1
    _microturbine_qd0_pu__v_qg2_gain1__out = 0.0026525823848649226 * _microturbine_qd0_pu__d_flux__out;
    // Generated from the component: Microturbine.25A_auto_sync.Product4
    _microturbine_25a_auto_sync_product4__out = (_microturbine_qd0_pu__governor_sum1__out * _microturbine_mt_sync__out);
    // Generated from the component: Microturbine.25A_auto_sync.Relational operator2
    _microturbine_25a_auto_sync_relational_operator2__out = (_microturbine_qd0_pu__governor_sum1__out > _microturbine_25a_auto_sync_constant2__out) ? 1 : 0;
    // Generated from the component: Microturbine.25A_auto_sync.Relational operator3
    _microturbine_25a_auto_sync_relational_operator3__out = (_microturbine_qd0_pu__governor_sum1__out < _microturbine_25a_auto_sync_constant3__out) ? 1 : 0;
    // Generated from the component: Microturbine.25A_auto_sync.Sign1
    _microturbine_25a_auto_sync_sign1__out = (_microturbine_qd0_pu__governor_sum1__out == 0x0) ? 0 : ((_microturbine_qd0_pu__governor_sum1__out > 0x0) ? 1 : -1);
    // Generated from the component: Microturbine.qd0(PU).Governor.Abs1
    _microturbine_qd0_pu__governor_abs1__out = fabs(_microturbine_qd0_pu__governor_sum1__out);
    // Generated from the component: Microturbine.qd0(PU).Governor.speed difference
    HIL_OutAO(0x400e, (float)_microturbine_qd0_pu__governor_sum1__out);
    // Generated from the component: Microturbine.Trigonometric function1
    _microturbine_trigonometric_function1__out = atan2(_microturbine_gain2__out, _microturbine_abc_to_dq1_alpha_beta_to_dq__d);
    // Generated from the component: Microturbine.magnitude.Sum3
    _microturbine_magnitude_sum3__out = _microturbine_magnitude_product5__out + _microturbine_magnitude_product6__out;
    // Generated from the component: Microturbine.qd0(PU).I_d_a (algebraic).Gain1
    _microturbine_qd0_pu__i_d_a__algebraic__gain1__out = 0.20422277119458182 * _microturbine_qd0_pu__i_d_a__algebraic__sum1__out;
    // Generated from the component: Microturbine.qd0(PU).V_dG2.Differentiator1
    _microturbine_qd0_pu__v_dg2_differentiator1__out = (_microturbine_qd0_pu__v_dg2_gain1__out - _microturbine_qd0_pu__v_dg2_differentiator1__state) / 2e-05;
    // Generated from the component: Microturbine.qd0(PU).I_q_a (algebraic).Gain1
    _microturbine_qd0_pu__i_q_a__algebraic__gain1__out = 0.2043000201921957 * _microturbine_qd0_pu__i_q_a__algebraic__sum1__out;
    // Generated from the component: Microturbine.qd0(PU).V_qG2.Differentiator1
    _microturbine_qd0_pu__v_qg2_differentiator1__out = (_microturbine_qd0_pu__v_qg2_gain1__out - _microturbine_qd0_pu__v_qg2_differentiator1__state) / 2e-05;
    // Generated from the component: Microturbine.25A_auto_sync.Logical operator2
    _microturbine_25a_auto_sync_logical_operator2__out = _microturbine_25a_auto_sync_relational_operator2__out && _microturbine_25a_auto_sync_relational_operator3__out ;
    // Generated from the component: Microturbine.25A_auto_sync.proportional difference signal
    _microturbine_25a_auto_sync_proportional_difference_signal__df = _microturbine_25a_auto_sync_product4__out;
    _microturbine_25a_auto_sync_proportional_difference_signal__max_pds = _microturbine_25a_auto_sync_product5__out;
    _microturbine_25a_auto_sync_proportional_difference_signal__sign = _microturbine_25a_auto_sync_sign1__out;
    if (_microturbine_25a_auto_sync_proportional_difference_signal__df >= (3.5 * 0.0016)) {
        _microturbine_25a_auto_sync_proportional_difference_signal__pds = _microturbine_25a_auto_sync_proportional_difference_signal__max_pds;
    }
    else if ((_microturbine_25a_auto_sync_proportional_difference_signal__df < (3.5 * 0.0016)) && (_microturbine_25a_auto_sync_proportional_difference_signal__df >= 0)) {
        _microturbine_25a_auto_sync_proportional_difference_signal__pds = (_microturbine_25a_auto_sync_proportional_difference_signal__max_pds * _microturbine_25a_auto_sync_proportional_difference_signal__df / (4 * 0.0016)) + (0.125 * _microturbine_25a_auto_sync_proportional_difference_signal__max_pds);
    }
    else if ((_microturbine_25a_auto_sync_proportional_difference_signal__df < 0) && (_microturbine_25a_auto_sync_proportional_difference_signal__df >= (-1 * 0.00016))) {
        _microturbine_25a_auto_sync_proportional_difference_signal__pds = (_microturbine_25a_auto_sync_proportional_difference_signal__max_pds / (4 * 0.0016)) * 0.00016;
    }
    else if ((_microturbine_25a_auto_sync_proportional_difference_signal__df < (-1 * 0.00016)) && (_microturbine_25a_auto_sync_proportional_difference_signal__df > (-0.5 * 0.0016))) {
        _microturbine_25a_auto_sync_proportional_difference_signal__pds = 0;
    }
    else if ((_microturbine_25a_auto_sync_proportional_difference_signal__df <= (-0.5 * 0.0016)) && (_microturbine_25a_auto_sync_proportional_difference_signal__df > (-4 * 0.0016))) {
        _microturbine_25a_auto_sync_proportional_difference_signal__pds = _microturbine_25a_auto_sync_proportional_difference_signal__sign * (_microturbine_25a_auto_sync_proportional_difference_signal__max_pds / (4 * 0.0016)) * _microturbine_25a_auto_sync_proportional_difference_signal__df;
    }
    else {
        _microturbine_25a_auto_sync_proportional_difference_signal__pds = _microturbine_25a_auto_sync_proportional_difference_signal__sign * _microturbine_25a_auto_sync_proportional_difference_signal__max_pds;
    }
    // Generated from the component: Microturbine.qd0(PU).Governor.Comparator1
    if (_microturbine_qd0_pu__governor_constant1__out < _microturbine_qd0_pu__governor_abs1__out) {
        _microturbine_qd0_pu__governor_comparator1__out = 0;
    } else if (_microturbine_qd0_pu__governor_constant1__out > _microturbine_qd0_pu__governor_abs1__out) {
        _microturbine_qd0_pu__governor_comparator1__out = 1;
    } else {
        _microturbine_qd0_pu__governor_comparator1__out = _microturbine_qd0_pu__governor_comparator1__state;
    }
    // Generated from the component: Microturbine.Sum1
    _microturbine_sum1__out = _microturbine_trigonometric_function1__out + _microturbine_product1__out;
    // Generated from the component: Microturbine.magnitude.Mathematical function1
    _microturbine_magnitude_mathematical_function1__out = sqrt(_microturbine_magnitude_sum3__out);
    // Generated from the component: Microturbine.qd0(PU).d-Current
    _microturbine_qd0_pu__d_current__out = (_microturbine_connect__out != 1.0) ? _microturbine_qd0_pu__constant2__out : _microturbine_qd0_pu__i_d_a__algebraic__gain1__out;
    // Generated from the component: Microturbine.qd0(PU).V_dG2.Sum2
    _microturbine_qd0_pu__v_dg2_sum2__out =  - _microturbine_qd0_pu__v_dg2_product2__out + _microturbine_qd0_pu__v_dg2_differentiator1__out;
    // Generated from the component: Microturbine.qd0(PU).q-Current
    _microturbine_qd0_pu__q_current__out = (_microturbine_connect__out != 1.0) ? _microturbine_qd0_pu__constant1__out : _microturbine_qd0_pu__i_q_a__algebraic__gain1__out;
    // Generated from the component: Microturbine.qd0(PU).V_qG2.Sum2
    _microturbine_qd0_pu__v_qg2_sum2__out = _microturbine_qd0_pu__v_qg2_product2__out + _microturbine_qd0_pu__v_qg2_differentiator1__out;
    // Generated from the component: Microturbine.25A_auto_sync.f_diff
    HIL_OutInt32(0xf00401, _microturbine_25a_auto_sync_logical_operator2__out != 0x0);
    // Generated from the component: Microturbine.Product4
    _microturbine_product4__out = (_microturbine_mt_sync__out * _microturbine_25a_auto_sync_proportional_difference_signal__pds);
    // Generated from the component: Microturbine.qd0(PU).Governor.Logical operator1
    _microturbine_qd0_pu__governor_logical_operator1__out = _microturbine_mt_sync__out && _microturbine_qd0_pu__governor_comparator1__out ;
    // Generated from the component: Microturbine.remainder
    _microturbine_remainder__in = _microturbine_sum1__out;
    _microturbine_remainder__output = _microturbine_remainder__out + 0.0;
    // Generated from the component: Microturbine.bus_|V|
    HIL_OutAO(0x4004, (float)_microturbine_magnitude_mathematical_function1__out);
    // Generated from the component: Microturbine.qd0(PU).E_qp.Product3
    _microturbine_qd0_pu__e_qp_product3__out = (_microturbine_qd0_pu__e_qp_constant3__out * _microturbine_qd0_pu__d_current__out);
    // Generated from the component: Microturbine.qd0(PU).Generator Voltage.Gain3
    _microturbine_qd0_pu__generator_voltage_gain3__out = -4.6566210634570595 * _microturbine_qd0_pu__d_current__out;
    // Generated from the component: Microturbine.qd0(PU).Generator Voltage.Gain8
    _microturbine_qd0_pu__generator_voltage_gain8__out = -4.6566210634570595 * _microturbine_qd0_pu__d_current__out;
    // Generated from the component: Microturbine.qd0(PU).Generator Voltage.Product3
    _microturbine_qd0_pu__generator_voltage_product3__out = (_microturbine_qd0_pu__generator_voltage_constant2__out * _microturbine_qd0_pu__d_current__out);
    // Generated from the component: Microturbine.qd0(PU).Phi_1d_a.Product1
    _microturbine_qd0_pu__phi_1d_a_product1__out = (_microturbine_qd0_pu__phi_1d_a_constant1__out * _microturbine_qd0_pu__d_current__out);
    // Generated from the component: Microturbine.qd0(PU).Phi_d_a.Product1
    _microturbine_qd0_pu__phi_d_a_product1__out = (_microturbine_qd0_pu__phi_d_a_constant1__out * _microturbine_qd0_pu__d_current__out);
    // Generated from the component: Microturbine.qd0(PU).w_m.Product2
    _microturbine_qd0_pu__w_m_product2__out = (_microturbine_qd0_pu__d_flux__out * _microturbine_qd0_pu__d_current__out);
    // Generated from the component: Microturbine.qd0(PU).E_dp.Product3
    _microturbine_qd0_pu__e_dp_product3__out = (_microturbine_qd0_pu__e_dp_constant3__out * _microturbine_qd0_pu__q_current__out);
    // Generated from the component: Microturbine.qd0(PU).Generator Voltage.Gain2
    _microturbine_qd0_pu__generator_voltage_gain2__out = -4.6566210634570595 * _microturbine_qd0_pu__q_current__out;
    // Generated from the component: Microturbine.qd0(PU).Generator Voltage.Gain5
    _microturbine_qd0_pu__generator_voltage_gain5__out = -4.6566210634570595 * _microturbine_qd0_pu__q_current__out;
    // Generated from the component: Microturbine.qd0(PU).Generator Voltage.Product1
    _microturbine_qd0_pu__generator_voltage_product1__out = (_microturbine_qd0_pu__generator_voltage_constant1__out * _microturbine_qd0_pu__q_current__out);
    // Generated from the component: Microturbine.qd0(PU).Phi_2q_a.Product1
    _microturbine_qd0_pu__phi_2q_a_product1__out = (_microturbine_qd0_pu__phi_2q_a_constant1__out * _microturbine_qd0_pu__q_current__out);
    // Generated from the component: Microturbine.qd0(PU).Phi_q_a.Product1
    _microturbine_qd0_pu__phi_q_a_product1__out = (_microturbine_qd0_pu__phi_q_a_constant1__out * _microturbine_qd0_pu__q_current__out);
    // Generated from the component: Microturbine.qd0(PU).w_m.Product3
    _microturbine_qd0_pu__w_m_product3__out = (_microturbine_qd0_pu__q_flux__out * _microturbine_qd0_pu__q_current__out);
    // Generated from the component: Microturbine.pds signal
    HIL_OutAO(0x4005, (float)_microturbine_product4__out);
    // Generated from the component: Microturbine.qd0(PU).Engine.Sum1
    _microturbine_qd0_pu__engine_sum1__out =  - _microturbine_qd0_pu__engine_integrator1__out + _microturbine_product4__out;
    // Generated from the component: Microturbine.qd0(PU).Governor.Edge Detection1.Relational operator1
    _microturbine_qd0_pu__governor_edge_detection1_relational_operator1__out = (_microturbine_qd0_pu__governor_logical_operator1__out != _microturbine_qd0_pu__governor_edge_detection1_unit_delay1__out) ? 1 : 0;
    // Generated from the component: Microturbine.bus_angle
    HIL_OutAO(0x4003, (float)_microturbine_remainder__output);
    // Generated from the component: Microturbine.qd0(PU).E_qp.Sum3
    _microturbine_qd0_pu__e_qp_sum3__out = _microturbine_qd0_pu__phi_1d_a_integrator1__out + _microturbine_qd0_pu__e_qp_product3__out - _microturbine_qd0_pu__e_qp_integrator1__out;
    // Generated from the component: Microturbine.qd0(PU).Generator Voltage.Product2
    _microturbine_qd0_pu__generator_voltage_product2__out = (_microturbine_qd0_pu__generator_voltage_gain4__out * _microturbine_qd0_pu__generator_voltage_gain3__out);
    // Generated from the component: Microturbine.qd0(PU).Generator Voltage.Differentiator2
    _microturbine_qd0_pu__generator_voltage_differentiator2__out = (_microturbine_qd0_pu__generator_voltage_gain8__out - _microturbine_qd0_pu__generator_voltage_differentiator2__state) / 2e-05;
    // Generated from the component: Microturbine.qd0(PU).Phi_1d_a.Sum1
    _microturbine_qd0_pu__phi_1d_a_sum1__out =  - _microturbine_qd0_pu__phi_1d_a_integrator1__out + _microturbine_qd0_pu__e_qp_integrator1__out - _microturbine_qd0_pu__phi_1d_a_product1__out;
    // Generated from the component: Microturbine.qd0(PU).Phi_d_a.Sum1
    _microturbine_qd0_pu__phi_d_a_sum1__out = _microturbine_qd0_pu__phi_d_a_product1__out + _microturbine_qd0_pu__phi_d_a_product2__out;
    // Generated from the component: Microturbine.qd0(PU).E_dp.Sum3
    _microturbine_qd0_pu__e_dp_sum3__out = _microturbine_qd0_pu__phi_2q_a_integrator1__out + _microturbine_qd0_pu__e_dp_product3__out + _microturbine_qd0_pu__e_dp_integrator1__out;
    // Generated from the component: Microturbine.qd0(PU).Generator Voltage.Differentiator1
    _microturbine_qd0_pu__generator_voltage_differentiator1__out = (_microturbine_qd0_pu__generator_voltage_gain2__out - _microturbine_qd0_pu__generator_voltage_differentiator1__state) / 2e-05;
    // Generated from the component: Microturbine.qd0(PU).Generator Voltage.Product4
    _microturbine_qd0_pu__generator_voltage_product4__out = (_microturbine_qd0_pu__generator_voltage_gain7__out * _microturbine_qd0_pu__generator_voltage_gain5__out);
    // Generated from the component: Microturbine.qd0(PU).Phi_2q_a.Sum1
    _microturbine_qd0_pu__phi_2q_a_sum1__out =  - _microturbine_qd0_pu__phi_2q_a_integrator1__out - _microturbine_qd0_pu__e_dp_integrator1__out - _microturbine_qd0_pu__phi_2q_a_product1__out;
    // Generated from the component: Microturbine.qd0(PU).Phi_q_a.Sum1
    _microturbine_qd0_pu__phi_q_a_sum1__out = _microturbine_qd0_pu__phi_q_a_product1__out - _microturbine_qd0_pu__phi_q_a_product2__out;
    // Generated from the component: Microturbine.qd0(PU).w_m.Sum1
    _microturbine_qd0_pu__w_m_sum1__out = _microturbine_qd0_pu__w_m_product3__out - _microturbine_qd0_pu__w_m_product2__out;
    // Generated from the component: Microturbine.qd0(PU).Engine.Gain1
    _microturbine_qd0_pu__engine_gain1__out = 41.666666666666664 * _microturbine_qd0_pu__engine_sum1__out;
    // Generated from the component: Microturbine.qd0(PU).Governor.wait_to_trip
    _microturbine_qd0_pu__governor_wait_to_trip__Reset = _microturbine_qd0_pu__governor_edge_detection1_relational_operator1__out;
    _microturbine_qd0_pu__governor_wait_to_trip__boolean = _microturbine_qd0_pu__governor_logical_operator1__out;
    if (_microturbine_qd0_pu__governor_wait_to_trip__time_acc >= 5.0) {
        _microturbine_qd0_pu__governor_wait_to_trip__Trip = 1;
    }
    else {
        _microturbine_qd0_pu__governor_wait_to_trip__time_acc += 2e-05 * _microturbine_qd0_pu__governor_wait_to_trip__boolean;
    }
    if (_microturbine_qd0_pu__governor_wait_to_trip__Reset == 1) {
        _microturbine_qd0_pu__governor_wait_to_trip__time_acc = 0;
        _microturbine_qd0_pu__governor_wait_to_trip__Trip = 0;
    }
    // Generated from the component: Microturbine.qd0(PU).E_qp.Product2
    _microturbine_qd0_pu__e_qp_product2__out = (_microturbine_qd0_pu__e_qp_constant2__out * _microturbine_qd0_pu__e_qp_sum3__out);
    // Generated from the component: Microturbine.qd0(PU).Generator Voltage.Gain6
    _microturbine_qd0_pu__generator_voltage_gain6__out = 0.0026525823848649226 * _microturbine_qd0_pu__generator_voltage_differentiator2__out;
    // Generated from the component: Microturbine.qd0(PU).Phi_1d_a.Gain1
    _microturbine_qd0_pu__phi_1d_a_gain1__out = 23.792292216149942 * _microturbine_qd0_pu__phi_1d_a_sum1__out;
    // Generated from the component: Microturbine.qd0(PU).Phi_d_a.Sum2
    _microturbine_qd0_pu__phi_d_a_sum2__out = _microturbine_qd0_pu__phi_d_a_sum1__out + _microturbine_gain1__out;
    // Generated from the component: Microturbine.qd0(PU).E_dp.Product2
    _microturbine_qd0_pu__e_dp_product2__out = (_microturbine_qd0_pu__e_dp_constant2__out * _microturbine_qd0_pu__e_dp_sum3__out);
    // Generated from the component: Microturbine.qd0(PU).Generator Voltage.Gain1
    _microturbine_qd0_pu__generator_voltage_gain1__out = 0.0026525823848649226 * _microturbine_qd0_pu__generator_voltage_differentiator1__out;
    // Generated from the component: Microturbine.qd0(PU).Phi_2q_a.Gain1
    _microturbine_qd0_pu__phi_2q_a_gain1__out = 1.069931328926725 * _microturbine_qd0_pu__phi_2q_a_sum1__out;
    // Generated from the component: Microturbine.qd0(PU).Phi_q_a.Sum2
    _microturbine_qd0_pu__phi_q_a_sum2__out = _microturbine_qd0_pu__phi_q_a_sum1__out + _microturbine_abc_to_dq1_alpha_beta_to_dq__d;
    // Generated from the component: Microturbine.qd0(PU).w_m.Sum2
    _microturbine_qd0_pu__w_m_sum2__out = _microturbine_qd0_pu__engine_integrator1__out - _microturbine_qd0_pu__w_m_sum1__out - _microturbine_qd0_pu__w_m_product1__out;
    // Generated from the component: Microturbine.qd0(PU).Exciter.Relational operator1
    _microturbine_qd0_pu__exciter_relational_operator1__out = (_microturbine_qd0_pu__governor_wait_to_trip__Trip == _microturbine_qd0_pu__exciter_constant2__out) ? 1 : 0;
    // Generated from the component: Microturbine.qd0(PU).Governor.Exc_state
    HIL_OutAO(0x400d, (float)_microturbine_qd0_pu__governor_wait_to_trip__Trip);
    // Generated from the component: Microturbine.qd0(PU).E_qp.Sum2
    _microturbine_qd0_pu__e_qp_sum2__out = _microturbine_qd0_pu__d_current__out - _microturbine_qd0_pu__e_qp_product2__out;
    // Generated from the component: Microturbine.qd0(PU).Generator Voltage.Sum2
    _microturbine_qd0_pu__generator_voltage_sum2__out = _microturbine_qd0_pu__generator_voltage_product3__out + _microturbine_qd0_pu__generator_voltage_product4__out - _microturbine_qd0_pu__generator_voltage_gain6__out + _microturbine_gain1__out;
    // Generated from the component: Microturbine.qd0(PU).Phi_d_a.Gain1
    _microturbine_qd0_pu__phi_d_a_gain1__out = 376.99111843077515 * _microturbine_qd0_pu__phi_d_a_sum2__out;
    // Generated from the component: Microturbine.qd0(PU).E_dp.Sum2
    _microturbine_qd0_pu__e_dp_sum2__out = _microturbine_qd0_pu__q_current__out - _microturbine_qd0_pu__e_dp_product2__out;
    // Generated from the component: Microturbine.qd0(PU).Generator Voltage.Sum1
    _microturbine_qd0_pu__generator_voltage_sum1__out = _microturbine_qd0_pu__generator_voltage_product1__out - _microturbine_qd0_pu__generator_voltage_product2__out - _microturbine_qd0_pu__generator_voltage_gain1__out + _microturbine_abc_to_dq1_alpha_beta_to_dq__d;
    // Generated from the component: Microturbine.qd0(PU).Phi_q_a.Gain1
    _microturbine_qd0_pu__phi_q_a_gain1__out = 376.99111843077515 * _microturbine_qd0_pu__phi_q_a_sum2__out;
    // Generated from the component: Microturbine.qd0(PU).w_m.Gain2
    _microturbine_qd0_pu__w_m_gain2__out = 8.415297459582867 * _microturbine_qd0_pu__w_m_sum2__out;
    // Generated from the component: Microturbine.qd0(PU).Exciter.Integrator1
    if (((_microturbine_qd0_pu__exciter_relational_operator1__out > 0.0) && (_microturbine_qd0_pu__exciter_integrator1__reset_state <= 0)) || ((_microturbine_qd0_pu__exciter_relational_operator1__out <= 0.0) && (_microturbine_qd0_pu__exciter_integrator1__reset_state == 1))) {
        _microturbine_qd0_pu__exciter_integrator1__state = 0.0;
    }
    _microturbine_qd0_pu__exciter_integrator1__out = _microturbine_qd0_pu__exciter_integrator1__state;
    // Generated from the component: Microturbine.qd0(PU).Exciter.Integrator2
    if (((_microturbine_qd0_pu__exciter_relational_operator1__out > 0.0) && (_microturbine_qd0_pu__exciter_integrator2__reset_state <= 0)) || ((_microturbine_qd0_pu__exciter_relational_operator1__out <= 0.0) && (_microturbine_qd0_pu__exciter_integrator2__reset_state == 1))) {
        _microturbine_qd0_pu__exciter_integrator2__state = 0.0;
    }
    _microturbine_qd0_pu__exciter_integrator2__out = _microturbine_qd0_pu__exciter_integrator2__state;
    // Generated from the component: Microturbine.qd0(PU).Exciter.Integrator3
    if (((_microturbine_qd0_pu__exciter_relational_operator1__out > 0.0) && (_microturbine_qd0_pu__exciter_integrator3__reset_state <= 0)) || ((_microturbine_qd0_pu__exciter_relational_operator1__out <= 0.0) && (_microturbine_qd0_pu__exciter_integrator3__reset_state == 1))) {
        _microturbine_qd0_pu__exciter_integrator3__state = 0.0;
    }
    _microturbine_qd0_pu__exciter_integrator3__out = _microturbine_qd0_pu__exciter_integrator3__state;
    // Generated from the component: Microturbine.qd0(PU).Exciter.Integrator4
    if (((_microturbine_qd0_pu__exciter_relational_operator1__out > 0.0) && (_microturbine_qd0_pu__exciter_integrator4__reset_state <= 0)) || ((_microturbine_qd0_pu__exciter_relational_operator1__out <= 0.0) && (_microturbine_qd0_pu__exciter_integrator4__reset_state == 1))) {
        _microturbine_qd0_pu__exciter_integrator4__state = 0.0;
    }
    _microturbine_qd0_pu__exciter_integrator4__out = _microturbine_qd0_pu__exciter_integrator4__state;
    // Generated from the component: Microturbine.qd0(PU).Exciter.Logical operator1
    _microturbine_qd0_pu__exciter_logical_operator1__out = !_microturbine_qd0_pu__exciter_relational_operator1__out;
    // Generated from the component: Microturbine.qd0(PU).Exciter.PI.Integrator1
    if (((_microturbine_qd0_pu__exciter_relational_operator1__out > 0.0) && (_microturbine_qd0_pu__exciter_pi_integrator1__reset_state <= 0)) || ((_microturbine_qd0_pu__exciter_relational_operator1__out <= 0.0) && (_microturbine_qd0_pu__exciter_pi_integrator1__reset_state == 1))) {
        _microturbine_qd0_pu__exciter_pi_integrator1__state = 0.0;
    }
    _microturbine_qd0_pu__exciter_pi_integrator1__out = _microturbine_qd0_pu__exciter_pi_integrator1__state;
    // Generated from the component: Microturbine.qd0(PU).Exciter.exciter ON
    HIL_OutInt32(0xf00407, _microturbine_qd0_pu__exciter_relational_operator1__out != 0x0);
    // Generated from the component: Microturbine.qd0(PU).Exciter.|V|1
    _microturbine_qd0_pu__exciter__v_1__out = (_microturbine_qd0_pu__exciter_relational_operator1__out != 1.0) ? _microturbine_qd0_pu__exciter_constant1__out : _microturbine_constant1__out;
    // Generated from the component: Microturbine.qd0(PU).E_qp.Product1
    _microturbine_qd0_pu__e_qp_product1__out = (_microturbine_qd0_pu__e_qp_constant1__out * _microturbine_qd0_pu__e_qp_sum2__out);
    // Generated from the component: Microturbine.qd0(PU).d-Voltage
    _microturbine_qd0_pu__d_voltage__out = (_microturbine_connect__out != 1.0) ? _microturbine_qd0_pu__v_dg2_unit_delay1__out : _microturbine_qd0_pu__generator_voltage_sum2__out;
    // Generated from the component: Microturbine.qd0(PU).E_dp.Product1
    _microturbine_qd0_pu__e_dp_product1__out = (_microturbine_qd0_pu__e_dp_constant1__out * _microturbine_qd0_pu__e_dp_sum2__out);
    // Generated from the component: Microturbine.qd0(PU).q-Voltage
    _microturbine_qd0_pu__q_voltage__out = (_microturbine_connect__out != 1.0) ? _microturbine_qd0_pu__v_qg2_unit_delay1__out : _microturbine_qd0_pu__generator_voltage_sum1__out;
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
    HIL_OutAO(0x4009, (float)_microturbine_qd0_pu__exciter_integrator2__out);
    // Generated from the component: Microturbine.qd0(PU).Exciter.V_R_M
    HIL_OutAO(0x400a, (float)_microturbine_qd0_pu__exciter_integrator3__out);
    // Generated from the component: Microturbine.qd0(PU).Exciter.V_t_M
    HIL_OutAO(0x400b, (float)_microturbine_qd0_pu__exciter_integrator4__out);
    // Generated from the component: Microturbine.qd0(PU).Exciter.exciter OFF
    HIL_OutInt32(0xf00406, _microturbine_qd0_pu__exciter_logical_operator1__out != 0x0);
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
    // Generated from the component: Microturbine.qd0(PU).VdG
    HIL_OutAO(0x4014, (float)_microturbine_qd0_pu__d_voltage__out);
    // Generated from the component: Microturbine.qd0(PU).magnitude.Product6
    _microturbine_qd0_pu__magnitude_product6__out = (_microturbine_qd0_pu__d_voltage__out * _microturbine_qd0_pu__d_voltage__out);
    // Generated from the component: Microturbine.qd0(PU).theta_G.Gain1
    _microturbine_qd0_pu__theta_g_gain1__out = -1.0 * _microturbine_qd0_pu__d_voltage__out;
    // Generated from the component: Microturbine.qd0(PU).E_dp.Sum1
    _microturbine_qd0_pu__e_dp_sum1__out =  - _microturbine_qd0_pu__e_dp_integrator1__out + _microturbine_qd0_pu__e_dp_product1__out;
    // Generated from the component: Microturbine.qd0(PU).VqG
    HIL_OutAO(0x4015, (float)_microturbine_qd0_pu__q_voltage__out);
    // Generated from the component: Microturbine.qd0(PU).magnitude.Product5
    _microturbine_qd0_pu__magnitude_product5__out = (_microturbine_qd0_pu__q_voltage__out * _microturbine_qd0_pu__q_voltage__out);
    // Generated from the component: Microturbine.qd0(PU).Exciter.Sum1
    _microturbine_qd0_pu__exciter_sum1__out =  - _microturbine_qd0_pu__exciter_gain2__out + _microturbine_qd0_pu__exciter_integrator3__out;
    // Generated from the component: Microturbine.qd0(PU).Exciter.Sum2
    _microturbine_qd0_pu__exciter_sum2__out =  - _microturbine_qd0_pu__exciter_integrator2__out + _microturbine_qd0_pu__exciter_gain3__out;
    // Generated from the component: Microturbine.qd0(PU).Exciter.PI.Sum5
    _microturbine_qd0_pu__exciter_pi_sum5__out = _microturbine_qd0_pu__exciter_pi_kp__out + _microturbine_qd0_pu__exciter_pi_integrator1__out;
    // Generated from the component: Microturbine.qd0(PU).Exciter.Sum4
    _microturbine_qd0_pu__exciter_sum4__out = _microturbine_qd0_pu__exciter_rate_limit__out - _microturbine_qd0_pu__exciter_integrator4__out;
    // Generated from the component: Microturbine.qd0(PU).theta_G.Trigonometric function2
    _microturbine_qd0_pu__theta_g_trigonometric_function2__out = atan2(_microturbine_qd0_pu__theta_g_gain1__out, _microturbine_qd0_pu__q_voltage__out);
    // Generated from the component: Microturbine.qd0(PU).E_dp.Gain1
    _microturbine_qd0_pu__e_dp_gain1__out = 0.27692307692307694 * _microturbine_qd0_pu__e_dp_sum1__out;
    // Generated from the component: Microturbine.qd0(PU).magnitude.Sum3
    _microturbine_qd0_pu__magnitude_sum3__out = _microturbine_qd0_pu__magnitude_product5__out + _microturbine_qd0_pu__magnitude_product6__out;
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
    // Generated from the component: Microturbine.25A_auto_sync.Abs2
    _microturbine_25a_auto_sync_abs2__out = fabs(_microturbine_qd0_pu__exciter_sum4__out);
    // Generated from the component: Microturbine.qd0(PU).Exciter.Gain8
    _microturbine_qd0_pu__exciter_gain8__out = 1.0 * _microturbine_qd0_pu__exciter_sum4__out;
    // Generated from the component: Microturbine.qd0(PU).Exciter.Volt difference
    HIL_OutAO(0x400c, (float)_microturbine_qd0_pu__exciter_sum4__out);
    // Generated from the component: Microturbine.qd0(PU).theta_G.Signal switch1
    _microturbine_qd0_pu__theta_g_signal_switch1__out = (_microturbine_qd0_pu__governor_wait_to_trip__Trip < 0.0) ? _microturbine_qd0_pu__theta_g_trigonometric_function2__out : _microturbine_qd0_pu__theta_g_constant1__out;
    // Generated from the component: Microturbine.qd0(PU).magnitude.Mathematical function1
    _microturbine_qd0_pu__magnitude_mathematical_function1__out = sqrt(_microturbine_qd0_pu__magnitude_sum3__out);
    // Generated from the component: Microturbine.qd0(PU).E_F_M
    HIL_OutAO(0x4006, (float)_microturbine_qd0_pu__exciter_pi_limit1__out);
    // Generated from the component: Microturbine.qd0(PU).E_qp.Sum1
    _microturbine_qd0_pu__e_qp_sum1__out =  - _microturbine_qd0_pu__e_qp_integrator1__out - _microturbine_qd0_pu__e_qp_product1__out + _microturbine_qd0_pu__exciter_pi_limit1__out;
    // Generated from the component: Microturbine.qd0(PU).Exciter.PI.Sum6
    _microturbine_qd0_pu__exciter_pi_sum6__out =  - _microturbine_qd0_pu__exciter_pi_sum5__out + _microturbine_qd0_pu__exciter_pi_limit1__out;
    // Generated from the component: Microturbine.25A_auto_sync.Relational operator4
    _microturbine_25a_auto_sync_relational_operator4__out = (_microturbine_25a_auto_sync_abs2__out < _microturbine_25a_auto_sync_constant4__out) ? 1 : 0;
    // Generated from the component: Microturbine.qd0(PU).Exciter.Sum3
    _microturbine_qd0_pu__exciter_sum3__out =  - _microturbine_qd0_pu__exciter_integrator3__out + _microturbine_qd0_pu__exciter_gain7__out - _microturbine_qd0_pu__exciter_gain5__out + _microturbine_qd0_pu__exciter_gain8__out;
    // Generated from the component: Microturbine.qd0(PU).theta_G.Sum1
    _microturbine_qd0_pu__theta_g_sum1__out = _microturbine_qd0_pu__theta_g_signal_switch1__out + _microturbine_qd0_pu__theta_g_integrator1__out;
    // Generated from the component: Microturbine.qd0(PU).Exciter.Sum5
    _microturbine_qd0_pu__exciter_sum5__out =  - _microturbine_qd0_pu__exciter_integrator4__out + _microturbine_qd0_pu__magnitude_mathematical_function1__out;
    // Generated from the component: Microturbine.qd0(PU).|V|_M
    HIL_OutAO(0x4018, (float)_microturbine_qd0_pu__magnitude_mathematical_function1__out);
    // Generated from the component: Microturbine.qd0(PU).E_qp.Gain1
    _microturbine_qd0_pu__e_qp_gain1__out = 0.1971753967168982 * _microturbine_qd0_pu__e_qp_sum1__out;
    // Generated from the component: Microturbine.qd0(PU).Exciter.PI.Kb
    _microturbine_qd0_pu__exciter_pi_kb__out = 1.0 * _microturbine_qd0_pu__exciter_pi_sum6__out;
    // Generated from the component: Microturbine.25A_auto_sync.V_diff
    HIL_OutInt32(0xf00400, _microturbine_25a_auto_sync_relational_operator4__out != 0x0);
    // Generated from the component: Microturbine.qd0(PU).Exciter.Gain6
    _microturbine_qd0_pu__exciter_gain6__out = 500.0 * _microturbine_qd0_pu__exciter_sum3__out;
    // Generated from the component: Microturbine.qd0(PU).theta_G.remainder
    _microturbine_qd0_pu__theta_g_remainder__in = _microturbine_qd0_pu__theta_g_sum1__out;
    _microturbine_qd0_pu__theta_g_remainder__output = _microturbine_qd0_pu__theta_g_remainder__out + 0.0;
    // Generated from the component: Microturbine.qd0(PU).Exciter.Gain9
    _microturbine_qd0_pu__exciter_gain9__out = 5000.0 * _microturbine_qd0_pu__exciter_sum5__out;
    // Generated from the component: Microturbine.qd0(PU).Exciter.PI.Sum7
    _microturbine_qd0_pu__exciter_pi_sum7__out = _microturbine_qd0_pu__exciter_pi_ki__out + _microturbine_qd0_pu__exciter_pi_kb__out;
    // Generated from the component: Microturbine.25A_auto_sync.Sum1
    _microturbine_25a_auto_sync_sum1__out =  - _microturbine_qd0_pu__theta_g_remainder__output + _microturbine_remainder__output;
    // Generated from the component: Microturbine.qd0(PU).theta_G_M
    HIL_OutAO(0x4016, (float)_microturbine_qd0_pu__theta_g_remainder__output);
    // Generated from the component: Microturbine.25A_auto_sync.confine_phase
    _microturbine_25a_auto_sync_confine_phase__dtheta = _microturbine_25a_auto_sync_sum1__out;
    if (_microturbine_25a_auto_sync_confine_phase__dtheta > 3.14159265359) {
        _microturbine_25a_auto_sync_confine_phase__dtheta_confined = _microturbine_25a_auto_sync_confine_phase__dtheta - 6.28318530718;
    }
    else {
        if (_microturbine_25a_auto_sync_confine_phase__dtheta < -3.14159265359) {
            _microturbine_25a_auto_sync_confine_phase__dtheta_confined = _microturbine_25a_auto_sync_confine_phase__dtheta + 6.28318530718;
        }
        else {
            _microturbine_25a_auto_sync_confine_phase__dtheta_confined = _microturbine_25a_auto_sync_confine_phase__dtheta;
        }
    }
    // Generated from the component: Microturbine.25A_auto_sync.Abs1
    _microturbine_25a_auto_sync_abs1__out = fabs(_microturbine_25a_auto_sync_confine_phase__dtheta_confined);
    // Generated from the component: Microturbine.25A_auto_sync.dtheta
    HIL_OutAO(0x4000, (float)_microturbine_25a_auto_sync_confine_phase__dtheta_confined);
    // Generated from the component: Microturbine.25A_auto_sync.Relational operator1
    _microturbine_25a_auto_sync_relational_operator1__out = (_microturbine_25a_auto_sync_abs1__out < _microturbine_25a_auto_sync_constant1__out) ? 1 : 0;
    // Generated from the component: Microturbine.25A_auto_sync.Logical operator1
    _microturbine_25a_auto_sync_logical_operator1__out = _microturbine_25a_auto_sync_relational_operator4__out && _microturbine_25a_auto_sync_relational_operator1__out && _microturbine_25a_auto_sync_logical_operator2__out ;
    // Generated from the component: Microturbine.25A_auto_sync.theta_diff
    HIL_OutInt32(0xf00402, _microturbine_25a_auto_sync_relational_operator1__out != 0x0);
    // Generated from the component: Microturbine.Product3
    _microturbine_product3__out = (_microturbine_25a_auto_sync_logical_operator1__out * _microturbine_mt_sync__out);
    // Generated from the component: Microturbine.Ready_to_connect
    HIL_OutInt32(0xf00403, _microturbine_product3__out != 0x0);
    //@cmp.out.block.end
    //////////////////////////////////////////////////////////////////////////
    // Update block
    //////////////////////////////////////////////////////////////////////////
    //@cmp.update.block.start
    // Generated from the component: Microturbine.Clock1
    _microturbine_clock1__state += 2e-05;
    // Generated from the component: Microturbine.Sinusoidal Source1
    _microturbine_sinusoidal_source1__current_phase += 60.0 * 2e-05;
    if (_microturbine_sinusoidal_source1__current_phase >= 1.0f) {
        _microturbine_sinusoidal_source1__current_phase -= 1.0f;
    }
    // Generated from the component: Microturbine.Sinusoidal Source2
    _microturbine_sinusoidal_source2__current_phase += 60.0 * 2e-05;
    if (_microturbine_sinusoidal_source2__current_phase >= 1.0f) {
        _microturbine_sinusoidal_source2__current_phase -= 1.0f;
    }
    // Generated from the component: Microturbine.Sinusoidal Source3
    _microturbine_sinusoidal_source3__current_phase += 60.0 * 2e-05;
    if (_microturbine_sinusoidal_source3__current_phase >= 1.0f) {
        _microturbine_sinusoidal_source3__current_phase -= 1.0f;
    }
    // Generated from the component: Microturbine.qd0(PU).E_dp.Integrator1
    _microturbine_qd0_pu__e_dp_integrator1__state += _microturbine_qd0_pu__e_dp_gain1__out * 2e-05;
    // Generated from the component: Microturbine.qd0(PU).E_qp.Integrator1
    _microturbine_qd0_pu__e_qp_integrator1__state += _microturbine_qd0_pu__e_qp_gain1__out * 2e-05;
    // Generated from the component: Microturbine.qd0(PU).Engine.Integrator1
    _microturbine_qd0_pu__engine_integrator1__state += _microturbine_qd0_pu__engine_gain1__out * 2e-05;
    // Generated from the component: Microturbine.qd0(PU).Governor.Edge Detection1.Unit Delay1
    _microturbine_qd0_pu__governor_edge_detection1_unit_delay1__state = _microturbine_qd0_pu__governor_logical_operator1__out;
    // Generated from the component: Microturbine.qd0(PU).Phi_1d_a.Integrator1
    _microturbine_qd0_pu__phi_1d_a_integrator1__state += _microturbine_qd0_pu__phi_1d_a_gain1__out * 2e-05;
    // Generated from the component: Microturbine.qd0(PU).Phi_2q_a.Integrator1
    _microturbine_qd0_pu__phi_2q_a_integrator1__state += _microturbine_qd0_pu__phi_2q_a_gain1__out * 2e-05;
    // Generated from the component: Microturbine.qd0(PU).Phi_d_a.Unit Delay1
    _microturbine_qd0_pu__phi_d_a_unit_delay1__state = _microturbine_qd0_pu__q_flux__out;
    // Generated from the component: Microturbine.qd0(PU).Phi_q_a.Unit Delay1
    _microturbine_qd0_pu__phi_q_a_unit_delay1__state = _microturbine_qd0_pu__d_flux__out;
    // Generated from the component: Microturbine.qd0(PU).V_dG2.Unit Delay1
    _microturbine_qd0_pu__v_dg2_unit_delay1__state = _microturbine_qd0_pu__v_dg2_sum2__out;
    // Generated from the component: Microturbine.qd0(PU).V_qG2.Unit Delay1
    _microturbine_qd0_pu__v_qg2_unit_delay1__state = _microturbine_qd0_pu__v_qg2_sum2__out;
    // Generated from the component: Microturbine.qd0(PU).theta_G.Integrator1
    _microturbine_qd0_pu__theta_g_integrator1__state += _microturbine_qd0_pu__gain1__out * 2e-05;
    // Generated from the component: Microturbine.qd0(PU).w_m.Integrator1
    _microturbine_qd0_pu__w_m_integrator1__state += _microturbine_qd0_pu__w_m_gain2__out * 2e-05;
    // Generated from the component: Microturbine.qd0(PU).Phi_d_a.Integrator1
    _microturbine_qd0_pu__phi_d_a_integrator1__state += _microturbine_qd0_pu__phi_d_a_gain1__out * 2e-05;
    // Generated from the component: Microturbine.qd0(PU).Phi_q_a.Integrator1
    _microturbine_qd0_pu__phi_q_a_integrator1__state += _microturbine_qd0_pu__phi_q_a_gain1__out * 2e-05;
    // Generated from the component: Microturbine.qd0(PU).Governor.Rate Limiter1
    _microturbine_qd0_pu__governor_rate_limiter1__prev_out = _microturbine_qd0_pu__governor_rate_limiter1__out;
    _microturbine_qd0_pu__governor_rate_limiter1__first_step = 0;
    // Generated from the component: Microturbine.qd0(PU).V_dG2.Differentiator1
    _microturbine_qd0_pu__v_dg2_differentiator1__state = _microturbine_qd0_pu__v_dg2_gain1__out;
    // Generated from the component: Microturbine.qd0(PU).V_qG2.Differentiator1
    _microturbine_qd0_pu__v_qg2_differentiator1__state = _microturbine_qd0_pu__v_qg2_gain1__out;
    // Generated from the component: Microturbine.25A_auto_sync.proportional difference signal
    // Generated from the component: Microturbine.qd0(PU).Governor.Comparator1
    if (_microturbine_qd0_pu__governor_constant1__out < _microturbine_qd0_pu__governor_abs1__out) {
        _microturbine_qd0_pu__governor_comparator1__state = 0;
    } else if (_microturbine_qd0_pu__governor_constant1__out > _microturbine_qd0_pu__governor_abs1__out) {
        _microturbine_qd0_pu__governor_comparator1__state = 1;
    }
    // Generated from the component: Microturbine.remainder
    _microturbine_remainder__out = fmod(_microturbine_remainder__in, 6.283185307179586);
    // Generated from the component: Microturbine.qd0(PU).Generator Voltage.Differentiator2
    _microturbine_qd0_pu__generator_voltage_differentiator2__state = _microturbine_qd0_pu__generator_voltage_gain8__out;
    // Generated from the component: Microturbine.qd0(PU).Generator Voltage.Differentiator1
    _microturbine_qd0_pu__generator_voltage_differentiator1__state = _microturbine_qd0_pu__generator_voltage_gain2__out;
    // Generated from the component: Microturbine.qd0(PU).Governor.wait_to_trip
    // Generated from the component: Microturbine.qd0(PU).Exciter.Integrator1
    _microturbine_qd0_pu__exciter_integrator1__state += _microturbine_qd0_pu__exciter_gain1__out * 2e-05;
    if (_microturbine_qd0_pu__exciter_relational_operator1__out > 0)
        _microturbine_qd0_pu__exciter_integrator1__reset_state = 1;
    else if (_microturbine_qd0_pu__exciter_relational_operator1__out < 0)
        _microturbine_qd0_pu__exciter_integrator1__reset_state = -1;
    else
        _microturbine_qd0_pu__exciter_integrator1__reset_state = 0;
    // Generated from the component: Microturbine.qd0(PU).Exciter.Integrator2
    _microturbine_qd0_pu__exciter_integrator2__state += _microturbine_qd0_pu__exciter_gain4__out * 2e-05;
    if (_microturbine_qd0_pu__exciter_relational_operator1__out > 0)
        _microturbine_qd0_pu__exciter_integrator2__reset_state = 1;
    else if (_microturbine_qd0_pu__exciter_relational_operator1__out < 0)
        _microturbine_qd0_pu__exciter_integrator2__reset_state = -1;
    else
        _microturbine_qd0_pu__exciter_integrator2__reset_state = 0;
    // Generated from the component: Microturbine.qd0(PU).Exciter.Integrator3
    _microturbine_qd0_pu__exciter_integrator3__state += _microturbine_qd0_pu__exciter_gain6__out * 2e-05;
    if (_microturbine_qd0_pu__exciter_relational_operator1__out > 0)
        _microturbine_qd0_pu__exciter_integrator3__reset_state = 1;
    else if (_microturbine_qd0_pu__exciter_relational_operator1__out < 0)
        _microturbine_qd0_pu__exciter_integrator3__reset_state = -1;
    else
        _microturbine_qd0_pu__exciter_integrator3__reset_state = 0;
    if (_microturbine_qd0_pu__exciter_integrator3__state > 10.0)
        _microturbine_qd0_pu__exciter_integrator3__state = 10.0;
    if (_microturbine_qd0_pu__exciter_integrator3__state < -10.0)
        _microturbine_qd0_pu__exciter_integrator3__state = -10.0;
    // Generated from the component: Microturbine.qd0(PU).Exciter.Integrator4
    _microturbine_qd0_pu__exciter_integrator4__state += _microturbine_qd0_pu__exciter_gain9__out * 2e-05;
    if (_microturbine_qd0_pu__exciter_relational_operator1__out > 0)
        _microturbine_qd0_pu__exciter_integrator4__reset_state = 1;
    else if (_microturbine_qd0_pu__exciter_relational_operator1__out < 0)
        _microturbine_qd0_pu__exciter_integrator4__reset_state = -1;
    else
        _microturbine_qd0_pu__exciter_integrator4__reset_state = 0;
    // Generated from the component: Microturbine.qd0(PU).Exciter.PI.Integrator1
    _microturbine_qd0_pu__exciter_pi_integrator1__state += _microturbine_qd0_pu__exciter_pi_sum7__out * 2e-05;
    if (_microturbine_qd0_pu__exciter_relational_operator1__out > 0)
        _microturbine_qd0_pu__exciter_pi_integrator1__reset_state = 1;
    else if (_microturbine_qd0_pu__exciter_relational_operator1__out < 0)
        _microturbine_qd0_pu__exciter_pi_integrator1__reset_state = -1;
    else
        _microturbine_qd0_pu__exciter_pi_integrator1__reset_state = 0;
    // Generated from the component: Microturbine.qd0(PU).Exciter.Rate Limit
    _microturbine_qd0_pu__exciter_rate_limit__prev_out = _microturbine_qd0_pu__exciter_rate_limit__out;
    _microturbine_qd0_pu__exciter_rate_limit__first_step = 0;
    // Generated from the component: Microturbine.qd0(PU).theta_G.remainder
    _microturbine_qd0_pu__theta_g_remainder__out = fmod(_microturbine_qd0_pu__theta_g_remainder__in, 6.283185307179586);
    // Generated from the component: Microturbine.25A_auto_sync.confine_phase
    //@cmp.update.block.end
}
// ----------------------------------------------------------------------------------------  //-----------------------------------------------------------------------------------------