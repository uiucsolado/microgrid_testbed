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
X_Int32 _3ph_fault_103_ctrl__out;
X_Int32 _3ph_fault_106_ctrl__out;
double _diesel_mcb_va_grid_2_va1__out;
double _diesel_mcb_vb_grid_2_va1__out;
double _diesel_mcb_vc_grid_2_va1__out;
X_Int32 _f1_cb1_f1_cb1__out;
double _f1_cb1_meas1_ia_ia1__out;
double _f1_cb1_meas1_ib_ia1__out;
double _f1_cb1_meas1_ic_ia1__out;
double _f1_cb1_meas1_va_va1__out;
double _f1_cb1_meas1_vb_va1__out;
double _f1_cb1_meas1_vc_va1__out;
double _f1_cb1_meas2_va_va1__out;
double _f1_cb1_meas2_vb_va1__out;
double _f1_cb1_meas2_vc_va1__out;
X_Int32 _f1_cb10_f1_cb10__out;
double _f1_cb10_meas1_ia_ia1__out;
double _f1_cb10_meas1_ib_ia1__out;
double _f1_cb10_meas1_ic_ia1__out;
double _f1_cb10_meas1_va_va1__out;
double _f1_cb10_meas1_vb_va1__out;
double _f1_cb10_meas1_vc_va1__out;
double _f1_cb10_meas2_va_va1__out;
double _f1_cb10_meas2_vb_va1__out;
double _f1_cb10_meas2_vc_va1__out;
X_Int32 _f1_cb14_f1_cb14__out;
double _f1_cb14_meas1_ia_ia1__out;
double _f1_cb14_meas1_ib_ia1__out;
double _f1_cb14_meas1_ic_ia1__out;
double _f1_cb14_meas1_va_va1__out;
double _f1_cb14_meas1_vb_va1__out;
double _f1_cb14_meas1_vc_va1__out;
double _f1_cb14_meas2_va_va1__out;
double _f1_cb14_meas2_vb_va1__out;
double _f1_cb14_meas2_vc_va1__out;
X_Int32 _f1_cb2_f1_cb2__out;
double _f1_cb2_meas1_ia_ia1__out;
double _f1_cb2_meas1_ib_ia1__out;
double _f1_cb2_meas1_ic_ia1__out;
double _f1_cb2_meas1_va_va1__out;
double _f1_cb2_meas1_vb_va1__out;
double _f1_cb2_meas1_vc_va1__out;
double _f1_cb2_meas2_va_va1__out;
double _f1_cb2_meas2_vb_va1__out;
double _f1_cb2_meas2_vc_va1__out;
X_Int32 _f1_cb3_brk_f1_cb3__out;
X_Int32 _f1_cb4_f1_cb4__out;
double _f1_cb4_meas1_ia_ia1__out;
double _f1_cb4_meas1_ib_ia1__out;
double _f1_cb4_meas1_ic_ia1__out;
double _f1_cb4_meas1_va_va1__out;
double _f1_cb4_meas1_vb_va1__out;
double _f1_cb4_meas1_vc_va1__out;
double _f1_cb4_meas2_va_va1__out;
double _f1_cb4_meas2_vb_va1__out;
double _f1_cb4_meas2_vc_va1__out;
X_Int32 _f1_cb5_f1_cb5__out;
double _f1_cb5_meas1_ia_ia1__out;
double _f1_cb5_meas1_ib_ia1__out;
double _f1_cb5_meas1_ic_ia1__out;
double _f1_cb5_meas1_va_va1__out;
double _f1_cb5_meas1_vb_va1__out;
double _f1_cb5_meas1_vc_va1__out;
double _f1_cb5_meas2_va_va1__out;
double _f1_cb5_meas2_vb_va1__out;
double _f1_cb5_meas2_vc_va1__out;
X_Int32 _f1_cb6_f1_cb6__out;
double _f1_cb6_meas1_ia_ia1__out;
double _f1_cb6_meas1_ib_ia1__out;
double _f1_cb6_meas1_ic_ia1__out;
double _f1_cb6_meas1_va_va1__out;
double _f1_cb6_meas1_vb_va1__out;
double _f1_cb6_meas1_vc_va1__out;
double _f1_cb6_meas2_va_va1__out;
double _f1_cb6_meas2_vb_va1__out;
double _f1_cb6_meas2_vc_va1__out;
X_Int32 _f1_cb7_f1_cb7__out;
double _f1_cb7_meas1_ia_ia1__out;
double _f1_cb7_meas1_ib_ia1__out;
double _f1_cb7_meas1_ic_ia1__out;
double _f1_cb7_meas1_va_va1__out;
double _f1_cb7_meas1_vb_va1__out;
double _f1_cb7_meas1_vc_va1__out;
double _f1_cb7_meas2_va_va1__out;
double _f1_cb7_meas2_vb_va1__out;
double _f1_cb7_meas2_vc_va1__out;
double _f1_motor_chiller_compressor_unit_delay1__out;
double _f1_motor_im_machine_wrapper1__speed_out;
double _f1_motor_im_machine_wrapper1__torque_out;
double _f1_motor_im_machine_wrapper1__angle_out;
double _microturbine1_be1_25a_synchronizer_constant6__out = 0.005;
double _microturbine1_be1_25a_synchronizer_constant7__out = 0.001;
double _microturbine1_be1_25a_synchronizer_constant9__out = 0.05;
double _microturbine1_be1_25a_synchronizer_unit_delay2__out;
X_Int32 _microturbine1_be1_25a_synchronizer_unit_delay5__out;
double _microturbine1_be1_25a_synchronizer_abc_to_qd_constant2__out = 2.0943951023931953;
double _microturbine1_be1_25a_synchronizer_abc_to_qd_constant3__out = 2.0943951023931953;
double _microturbine1_be1_25a_synchronizer_abc_to_qd1_constant2__out = 2.0943951023931953;
double _microturbine1_be1_25a_synchronizer_abc_to_qd1_constant3__out = 2.0943951023931953;
double _microturbine1_cb_control_constant1__out = 1.0;
double _microturbine1_cb_control_constant10__out = 0.05;
double _microturbine1_cb_control_constant11__out = 0.001;
X_Int32 _microturbine1_cb_control_grid_islanded__out;
double _microturbine1_connect_mcb__out;
double _microturbine1_connect_mt__out;
double _microturbine1_constant1__out = 1.0;
double _microturbine1_constant2__out = 1.0;
double _microturbine1_ea1_va1__out;
double _microturbine1_eb1_va1__out;
double _microturbine1_ec1_va1__out;
double _microturbine1_engine_integrator1__out;
double _microturbine1_exciter_constant1__out = 0.0;
double _microturbine1_governor_agc__out;
double _microturbine1_governor_agc_offset__out = 17780.6;
double _microturbine1_governor_exciter_activation_constant1__out = 0.008;
double _microturbine1_governor_exciter_activation_constant2__out = 1.0;
double _microturbine1_governor_integrator1__out;
double _microturbine1_synchonous_machine_e_f_va1__out;
double _microturbine1_synchonous_machine_e_qp_constant1__out = 1.930201397855058;
double _microturbine1_synchonous_machine_e_qp_constant2__out = 0.24050623578038516;
double _microturbine1_synchonous_machine_e_qp_constant3__out = 0.4199553748870971;
double _microturbine1_synchonous_machine_e_qp_integrator1__out;
double _microturbine1_synchonous_machine_ia1_ia1__out;
double _microturbine1_synchonous_machine_ib1_ia1__out;
double _microturbine1_synchonous_machine_ic1_ia1__out;
double _microturbine1_synchonous_machine_phi_1d_a_constant1__out = 0.4199553748870971;
double _microturbine1_synchonous_machine_phi_1d_a_integrator1__out;
double _microturbine1_synchonous_machine_phi_2q_a_constant1__out = 1.7196607045831453;
double _microturbine1_synchonous_machine_phi_2q_a_integrator1__out;
double _microturbine1_synchonous_machine_phi_d_a_2_constant1__out = 0.8989981135901638;
double _microturbine1_synchonous_machine_phi_d_a_2_constant2__out = 0.10100188640983622;
double _microturbine1_synchonous_machine_phi_q_a_2_constant2__out = 0.8779625044216485;
double _microturbine1_synchonous_machine_v_dg2_constant2__out = 376.99111843077515;
double _microturbine1_synchonous_machine_v_dg2_constant3__out = 0.0;
double _microturbine1_synchonous_machine_v_qg2_constant2__out = 376.99111843077515;
double _microturbine1_synchonous_machine_v_qg2_constant3__out = 0.0;
double _microturbine1_synchonous_machine_abc_to_qd_constant2__out = 2.0943951023931953;
double _microturbine1_synchonous_machine_abc_to_qd_constant3__out = 2.0943951023931953;
double _microturbine1_synchonous_machine_qd_to_abc_constant2__out = 2.0943951023931953;
double _microturbine1_synchonous_machine_qd_to_abc_constant3__out = 2.0943951023931953;
double _microturbine1_synchonous_machine_w_m_constant1__out = 0.00580671125220663;
double _microturbine1_synchonous_machine_w_m_integrator1__out;
double _microturbine1_three_phase_meter1_ia_ia1__out;
double _microturbine1_three_phase_meter1_ib_ia1__out;
double _microturbine1_three_phase_meter1_ic_ia1__out;
double _microturbine1_three_phase_meter1_va_g1_va1__out;
double _microturbine1_three_phase_meter1_vb_g1_va1__out;
double _microturbine1_three_phase_meter1_vc_g1_va1__out;
double _microturbine1_vref__out;
double _microturbine1_wref__out;
double _diesel_mcb_rms_value1__out;
double _diesel_mcb_rms_value1__previous_value;
double _diesel_mcb_rms_value1__previous_filtered_value;
double _diesel_mcb_rms_value1__correction;
double _diesel_mcb_rms_value1__previous_correction;
X_UnInt32 _diesel_mcb_rms_value1__zc;
double _diesel_mcb_rms_value2__out;
double _diesel_mcb_rms_value2__previous_value;
double _diesel_mcb_rms_value2__previous_filtered_value;
double _diesel_mcb_rms_value2__correction;
double _diesel_mcb_rms_value2__previous_correction;
X_UnInt32 _diesel_mcb_rms_value2__zc;
double _diesel_mcb_rms_value3__out;
double _diesel_mcb_rms_value3__previous_value;
double _diesel_mcb_rms_value3__previous_filtered_value;
double _diesel_mcb_rms_value3__correction;
double _diesel_mcb_rms_value3__previous_correction;
X_UnInt32 _diesel_mcb_rms_value3__zc;
double _f1_cb1_meas1_bus_join2__out[3];
double _f1_cb1_meas1_bus_join1__out[3];
double _f1_cb1_meas2_bus_join1__out[3];
double _f1_cb10_meas1_bus_join2__out[3];
double _f1_cb10_meas1_bus_join1__out[3];
double _f1_cb10_meas2_bus_join1__out[3];
double _f1_cb14_meas1_bus_join2__out[3];
double _f1_cb14_meas1_bus_join1__out[3];
double _f1_cb14_meas2_bus_join1__out[3];
double _f1_cb2_meas1_bus_join2__out[3];
double _f1_cb2_meas1_bus_join1__out[3];
double _f1_cb2_meas2_bus_join1__out[3];
double _f1_cb4_meas1_bus_join2__out[3];
double _f1_cb4_meas1_bus_join1__out[3];
double _f1_cb4_meas2_bus_join1__out[3];
double _f1_cb5_meas1_bus_join2__out[3];
double _f1_cb5_meas1_bus_join1__out[3];
double _f1_cb5_meas2_bus_join1__out[3];
double _f1_cb6_meas1_bus_join2__out[3];
double _f1_cb6_meas1_bus_join1__out[3];
double _f1_cb6_meas2_bus_join1__out[3];
double _f1_cb7_meas1_bus_join2__out[3];
double _f1_cb7_meas1_bus_join1__out[3];
double _f1_cb7_meas2_bus_join1__out[3];
double _f1_motor_chiller_compressor_gain1__out;
double _microturbine1_be1_25a_synchronizer_abc_to_qd_trigonometric_function3__out;
double _microturbine1_be1_25a_synchronizer_abc_to_qd_trigonometric_function5__out;
double _microturbine1_be1_25a_synchronizer_abc_to_qd1_confine_phase__x;
double _microturbine1_be1_25a_synchronizer_abc_to_qd1_confine_phase__floor_in;
double _microturbine1_be1_25a_synchronizer_abc_to_qd1_confine_phase__in;


double _microturbine1_be1_25a_synchronizer_abc_to_qd1_confine_phase__out;
float _microturbine1_be1_25a_synchronizer_digital_probe1__tmp;
X_Int32 _microturbine1_be1_25a_synchronizer_logical_operator2__out;
double _microturbine1_be1_25a_synchronizer_abc_to_qd_sum2__out;
double _microturbine1_be1_25a_synchronizer_abc_to_qd_sum4__out;
X_Int32 _microturbine1_cb_control_logical_operator9__out;
double _microturbine1_cb_control_logical_operator4__out;
float _microturbine1_cb_control_mcb_on__tmp;
double _microturbine1_cb_control_logical_operator2__out;
double _microturbine1_engine_gain2__out;
double _microturbine1_exciter_integrator1__out;
double _microturbine1_exciter_integrator2__out;
double _microturbine1_exciter_integrator3__out;
double _microturbine1_exciter_integrator4__out;
X_Int32 _microturbine1_exciter_logical_operator1__out;
double _microturbine1_exciter_pi_integrator1__out;
float _microturbine1_exciter_exciter_on__tmp;
double _microturbine1_governor_sum11__out;
double _microturbine1_engine_sum1__out;
double _microturbine1_governor_gain28__out;
double _microturbine1_synchonous_machine_e_qp_gain2__out;
double _microturbine1_synchonous_machine_phi_d_a_2_product1__out;
double _microturbine1_synchonous_machine_phi_d_a_2_product2__out;
double _microturbine1_synchonous_machine_phi_q_a_2_product2__out;
double _microturbine1_synchonous_machine_w_m_gain16__out;
double _microturbine1_gain1__out;
double _microturbine1_synchonous_machine_w_m_gain1__out;
double _microturbine1_synchonous_machine_gain1__out;
double _microturbine1_synchonous_machine_gain17__out;
double _microturbine1_three_phase_meter1_pq_measure_pq_power_meter1__Pdc;
double _microturbine1_three_phase_meter1_pq_measure_pq_power_meter1__Qdc;
double _microturbine1_three_phase_meter1_pq_measure_pq_power_meter1__P0dc;
double _microturbine1_three_phase_meter1_pq_measure_pq_power_meter1__Pac;
double _microturbine1_three_phase_meter1_pq_measure_pq_power_meter1__Qac;
double _microturbine1_three_phase_meter1_pq_measure_pq_power_meter1__P0ac;
double _microturbine1_three_phase_meter1_pq_measure_pq_power_meter1__apparent;
double _microturbine1_three_phase_meter1_pq_measure_pq_power_meter1__k_factor;
double _microturbine1_three_phase_meter1_pq_measure_pq_power_meter1__v_alpha;
double _microturbine1_three_phase_meter1_pq_measure_pq_power_meter1__v_beta;
double _microturbine1_three_phase_meter1_pq_measure_pq_power_meter1__i_alpha;
double _microturbine1_three_phase_meter1_pq_measure_pq_power_meter1__i_beta;
double _microturbine1_three_phase_meter1_pq_measure_pq_power_meter1__v_zero;
double _microturbine1_three_phase_meter1_pq_measure_pq_power_meter1__i_zero;
double _microturbine1_three_phase_meter1_pq_measure_pq_power_meter1__filter_1_output;
double _microturbine1_three_phase_meter1_pq_measure_pq_power_meter1__filter_1_outputQ;
double _microturbine1_three_phase_meter1_pq_measure_pq_power_meter1__filter_1_outputP0;
double _f1_motor_chiller_compressor_c_function1__w;


double _f1_motor_chiller_compressor_c_function1__T;
double _microturbine1_be1_25a_synchronizer_abc_to_qd_product1__out;
double _microturbine1_be1_25a_synchronizer_abc_to_qd_product4__out;
double _microturbine1_be1_25a_synchronizer_abc_to_qd1_sum2__out;
double _microturbine1_be1_25a_synchronizer_abc_to_qd1_sum4__out;
double _microturbine1_be1_25a_synchronizer_abc_to_qd1_trigonometric_function3__out;
double _microturbine1_be1_25a_synchronizer_abc_to_qd1_trigonometric_function5__out;
float _microturbine1_be1_25a_synchronizer_digital_probe6__tmp;
double _microturbine1_be1_25a_synchronizer_abc_to_qd_trigonometric_function2__out;
double _microturbine1_be1_25a_synchronizer_abc_to_qd_trigonometric_function6__out;
double _microturbine1_be1_25a_synchronizer_abc_to_qd_trigonometric_function4__out;
double _microturbine1_be1_25a_synchronizer_abc_to_qd_trigonometric_function7__out;
float _microturbine1_cb_control_mcb_off__tmp;
double _microturbine1_exciter_gain2__out;
double _microturbine1_exciter_gain3__out;
double _microturbine1_exciter_gain5__out;
double _microturbine1_exciter_pi_ki__out;
double _microturbine1_exciter_pi_kp__out;
double _microturbine1_exciter_gain7__out;
double _microturbine1_exciter_sum4__out;
double _microturbine1_exciter_sum5__out;
float _microturbine1_exciter_exciter_off__tmp;
double _microturbine1_governor_gain37__out;
double _microturbine1_engine_gain1__out;
double _microturbine1_governor_exciter_activation_sum1__out;
double _microturbine1_governor_sum7__out;
double _microturbine1_be1_25a_synchronizer_gain4__out;
double _microturbine1_cb_control_gain13__out;
double _microturbine1_gain18__out;
double _microturbine1_synchonous_machine_w_m_product1__out;
double _microturbine1_synchonous_machine_c_function1__var;
double _microturbine1_synchonous_machine_c_function1__in;


double _microturbine1_synchonous_machine_c_function1__out;
double _microturbine1_synchonous_machine_v_dg2_product3__out;
double _microturbine1_synchonous_machine_v_qg2_product3__out;
double _microturbine1_be1_25a_synchronizer_abc_to_qd1_trigonometric_function2__out;
double _microturbine1_be1_25a_synchronizer_abc_to_qd1_trigonometric_function6__out;
double _microturbine1_be1_25a_synchronizer_abc_to_qd1_trigonometric_function4__out;
double _microturbine1_be1_25a_synchronizer_abc_to_qd1_trigonometric_function7__out;
double _microturbine1_be1_25a_synchronizer_abc_to_qd1_product1__out;
double _microturbine1_be1_25a_synchronizer_abc_to_qd1_product4__out;
double _microturbine1_be1_25a_synchronizer_abc_to_qd_product2__out;
double _microturbine1_be1_25a_synchronizer_abc_to_qd_product5__out;
double _microturbine1_be1_25a_synchronizer_abc_to_qd_product3__out;
double _microturbine1_be1_25a_synchronizer_abc_to_qd_product6__out;
double _microturbine1_exciter_sum1__out;
double _microturbine1_exciter_sum2__out;
double _microturbine1_exciter_pi_sum5__out;
double _microturbine1_exciter__v_1__out;
double _microturbine1_exciter_gain9__out;
double _microturbine1_governor_sum2__out;
double _microturbine1_governor_exciter_activation_abs1__out;
double _microturbine1_governor_rate_limiter2__in_rate;
double _microturbine1_cb_control_sum10__out;
double _microturbine1_synchonous_machine_abc_to_qd_confine_phase__x;
double _microturbine1_synchonous_machine_abc_to_qd_confine_phase__floor_in;
double _microturbine1_synchonous_machine_abc_to_qd_confine_phase__in;


double _microturbine1_synchonous_machine_abc_to_qd_confine_phase__out;
double _microturbine1_synchonous_machine_qd_to_abc_confine_phase__x;
double _microturbine1_synchonous_machine_qd_to_abc_confine_phase__floor_in;
double _microturbine1_synchonous_machine_qd_to_abc_confine_phase__in;


double _microturbine1_synchonous_machine_qd_to_abc_confine_phase__out;
double _microturbine1_be1_25a_synchronizer_abc_to_qd1_product2__out;
double _microturbine1_be1_25a_synchronizer_abc_to_qd1_product5__out;
double _microturbine1_be1_25a_synchronizer_abc_to_qd1_product3__out;
double _microturbine1_be1_25a_synchronizer_abc_to_qd1_product6__out;
double _microturbine1_be1_25a_synchronizer_abc_to_qd_sum3__out;
double _microturbine1_be1_25a_synchronizer_abc_to_qd_sum5__out;
double _microturbine1_exciter_gain1__out;
double _microturbine1_exciter_gain4__out;
double _microturbine1_exciter_pi_limit1__out;
double _microturbine1_exciter_rate_limit__in_rate;
double _microturbine1_governor_gain29__out;
double _microturbine1_governor_exciter_activation_comparator1__out;
double _microturbine1_cb_control_abs7__out;
double _microturbine1_synchonous_machine_abc_to_qd_sum2__out;
double _microturbine1_synchonous_machine_abc_to_qd_sum4__out;
double _microturbine1_synchonous_machine_abc_to_qd_trigonometric_function3__out;
double _microturbine1_synchonous_machine_abc_to_qd_trigonometric_function5__out;
double _microturbine1_synchonous_machine_qd_to_abc_sum2__out;
double _microturbine1_synchonous_machine_qd_to_abc_sum4__out;
double _microturbine1_synchonous_machine_qd_to_abc_trigonometric_function2__out;
double _microturbine1_synchonous_machine_qd_to_abc_trigonometric_function3__out;
double _microturbine1_be1_25a_synchronizer_abc_to_qd1_sum3__out;
double _microturbine1_be1_25a_synchronizer_abc_to_qd1_sum5__out;
double _microturbine1_be1_25a_synchronizer_abc_to_qd_gain1__out;
double _microturbine1_be1_25a_synchronizer_abc_to_qd_gain2__out;
double _microturbine1_exciter_gain18__out;
double _microturbine1_exciter_pi_sum6__out;
double _microturbine1_exciter_gain8__out;
double _microturbine1_governor_sum10__out;
double _microturbine1_governor_exciter_activation_activate_exciter__boolean;


X_Int32 _microturbine1_governor_exciter_activation_activate_exciter__Activate;
double _microturbine1_cb_control_relational_operator6__out;
double _microturbine1_synchonous_machine_abc_to_qd_trigonometric_function2__out;
double _microturbine1_synchonous_machine_abc_to_qd_trigonometric_function6__out;
double _microturbine1_synchonous_machine_abc_to_qd_trigonometric_function4__out;
double _microturbine1_synchonous_machine_abc_to_qd_trigonometric_function7__out;
double _microturbine1_synchonous_machine_abc_to_qd_product1__out;
double _microturbine1_synchonous_machine_abc_to_qd_product4__out;
double _microturbine1_synchonous_machine_qd_to_abc_trigonometric_function4__out;
double _microturbine1_synchonous_machine_qd_to_abc_trigonometric_function5__out;
double _microturbine1_synchonous_machine_qd_to_abc_trigonometric_function6__out;
double _microturbine1_synchonous_machine_qd_to_abc_trigonometric_function7__out;
double _microturbine1_be1_25a_synchronizer_abc_to_qd1_gain1__out;
double _microturbine1_be1_25a_synchronizer_abc_to_qd1_gain2__out;
double _microturbine1_be1_25a_synchronizer_gain5__out;
double _microturbine1_be1_25a_synchronizer_gain6__out;
double _microturbine1_exciter_pi_kb__out;
double _microturbine1_exciter_sum3__out;
double _microturbine1_governor_discrete_transfer_function1__out;
double _microturbine1_governor_discrete_transfer_function1__b_coeff[2] = {834.166666666667, -832.4999999999998};
double _microturbine1_governor_discrete_transfer_function1__a_coeff[2] = {1.0, 0.6666666666666666};
double _microturbine1_governor_discrete_transfer_function1__a_sum;
double _microturbine1_governor_discrete_transfer_function1__b_sum;
double _microturbine1_governor_discrete_transfer_function1__delay_line_in;
X_UnInt32 _microturbine1_governor_discrete_transfer_function1__i;
double _microturbine1_synchonous_machine_abc_to_qd_product2__out;
double _microturbine1_synchonous_machine_abc_to_qd_product5__out;
double _microturbine1_synchonous_machine_abc_to_qd_product3__out;
double _microturbine1_synchonous_machine_abc_to_qd_product6__out;
double _microturbine1_be1_25a_synchronizer_gain7__out;
double _microturbine1_be1_25a_synchronizer_gain12__out;
double _microturbine1_be1_25a_synchronizer_limit2__out;
double _microturbine1_be1_25a_synchronizer_product3__out;
double _microturbine1_be1_25a_synchronizer_pll_pid_controller1__out;
double _microturbine1_be1_25a_synchronizer_pll_pid_controller1__pi_reg_out_int;
double _microturbine1_be1_25a_synchronizer_product4__out;
double _microturbine1_exciter_pi_sum7__out;
double _microturbine1_exciter_gain6__out;
double _microturbine1_governor_gain38__out;
double _microturbine1_synchonous_machine_abc_to_qd_sum3__out;
double _microturbine1_synchonous_machine_abc_to_qd_sum5__out;
double _microturbine1_be1_25a_synchronizer_limit1__out;
double _microturbine1_be1_25a_synchronizer_magnitude_product6__out;
double _microturbine1_be1_25a_synchronizer_magnitude_product5__out;
double _microturbine1_be1_25a_synchronizer_trigonometric_function2__out;
double _microturbine1_be1_25a_synchronizer_gain13__out;
double _microturbine1_be1_25a_synchronizer_pll_c_function1__var;
double _microturbine1_be1_25a_synchronizer_pll_c_function1__in;


double _microturbine1_be1_25a_synchronizer_pll_c_function1__out;
double _microturbine1_be1_25a_synchronizer_sum5__out;
double _microturbine1_governor_gain39__out;
double _microturbine1_synchonous_machine_abc_to_qd_gain1__out;
double _microturbine1_synchonous_machine_abc_to_qd_gain2__out;
double _microturbine1_be1_25a_synchronizer_trigonometric_function1__out;
double _microturbine1_be1_25a_synchronizer_magnitude_sum3__out;
double _microturbine1_be1_25a_synchronizer_gain16__out;
double _microturbine1_be1_25a_synchronizer_sum2__out;
double _microturbine1_be1_25a_synchronizer_pll_confine_phase__x;
double _microturbine1_be1_25a_synchronizer_pll_confine_phase__floor_in;
double _microturbine1_be1_25a_synchronizer_pll_confine_phase__in;


double _microturbine1_be1_25a_synchronizer_pll_confine_phase__out;
double _microturbine1_be1_25a_synchronizer_mathematical_function2__out;
double _microturbine1_governor_discrete_transfer_function2__out;
double _microturbine1_governor_discrete_transfer_function2__b_coeff[3] = {1.4594780219780221, 0.0572344322344327, -1.4022435897435903};
double _microturbine1_governor_discrete_transfer_function2__a_coeff[3] = {1.0, -1.1254578754578755, 0.23992673992674};
double _microturbine1_governor_discrete_transfer_function2__a_sum;
double _microturbine1_governor_discrete_transfer_function2__b_sum;
double _microturbine1_governor_discrete_transfer_function2__delay_line_in;
X_UnInt32 _microturbine1_governor_discrete_transfer_function2__i;
double _microturbine1_synchonous_machine_gain10__out;
double _microturbine1_synchonous_machine_gain11__out;
double _microturbine1_be1_25a_synchronizer_gain17__out;
double _microturbine1_be1_25a_synchronizer_sum1__out;
double _microturbine1_be1_25a_synchronizer_magnitude_mathematical_function1__out;
double _microturbine1_be1_25a_synchronizer_abs5__out;
double _microturbine1_be1_25a_synchronizer_be1_25a_synchronizer2__df;


double _microturbine1_be1_25a_synchronizer_be1_25a_synchronizer2__del_w;
double _microturbine1_cb_control_hold_after_connect2__var;
double _microturbine1_cb_control_hold_after_connect2__in1;
double _microturbine1_cb_control_hold_after_connect2__in2;


X_Int32 _microturbine1_cb_control_hold_after_connect2__out;
double _microturbine1_synchonous_machine_phi_2q_a_product1__out;
double _microturbine1_synchonous_machine_phi_q_a_2_gain1__out;
double _microturbine1_synchonous_machine_e_qp_product3__out;
double _microturbine1_synchonous_machine_phi_1d_a_product1__out;
double _microturbine1_synchonous_machine_phi_d_a_2_gain1__out;
double _microturbine1_be1_25a_synchronizer_confine_phase__in;


double _microturbine1_be1_25a_synchronizer_confine_phase__out;
double _microturbine1_be1_25a_synchronizer_gain18__out;
double _microturbine1_be1_25a_synchronizer_sum3__out;
double _microturbine1_cb_control_sum9__out;
double _microturbine1_gain17__out;
double _microturbine1_be1_25a_synchronizer_relational_operator2__out;
X_Int32 _microturbine1_cb_control_logical_operator10__out;
X_Int32 _microturbine1_cb_control_logical_operator7__out;
double _microturbine1_synchonous_machine_phi_2q_a_sum1__out;
double _microturbine1_synchonous_machine_phi_q_a_2_sum1__out;
double _microturbine1_synchonous_machine_e_qp_sum3__out;
double _microturbine1_synchonous_machine_phi_1d_a_sum1__out;
double _microturbine1_synchonous_machine_phi_d_a_2_sum1__out;
double _microturbine1_be1_25a_synchronizer_abs4__out;
double _microturbine1_be1_25a_synchronizer_abs2__out;
double _microturbine1_be1_25a_synchronizer_be1_25a_synchronizer1__dV;


double _microturbine1_be1_25a_synchronizer_be1_25a_synchronizer1__del_V;
double _microturbine1_cb_control_abs6__out;
float _microturbine1_be1_25a_synchronizer_digital_probe4__tmp;
X_Int32 _microturbine1_cb_control_logical_operator11__out;
float _microturbine1_cb_control_grid_islanded_on__tmp;
X_Int32 _microturbine1_cb_control_logical_operator5__out;
double _microturbine1_synchonous_machine_phi_2q_a_gain1__out;
double _microturbine1_synchonous_machine_v_dg2_product2__out;
double _microturbine1_synchonous_machine_v_qg2_gain1__out;
double _microturbine1_synchonous_machine_w_m_product2__out;
double _microturbine1_synchonous_machine_e_qp_product2__out;
double _microturbine1_synchonous_machine_phi_1d_a_gain1__out;
double _microturbine1_synchonous_machine_v_dg2_gain1__out;
double _microturbine1_synchonous_machine_v_qg2_product2__out;
double _microturbine1_synchonous_machine_w_m_product3__out;
double _microturbine1_be1_25a_synchronizer_relational_operator1__out;
double _microturbine1_be1_25a_synchronizer_relational_operator4__out;
double _microturbine1_cb_control_relational_operator5__out;
X_Int32 _microturbine1_cb_control_logical_operator12__out;
float _microturbine1_cb_control_mt_sync_on__tmp;
float _microturbine1_cb_control_grid_islanded_off__tmp;
double _microturbine1_synchonous_machine_v_qg2_discrete_transfer_function1__out;
double _microturbine1_synchonous_machine_v_qg2_discrete_transfer_function1__b_coeff[2] = {200.0, -200.00000000000003};
double _microturbine1_synchonous_machine_v_qg2_discrete_transfer_function1__a_coeff[2] = {1.0, -0.9960079893439916};
double _microturbine1_synchonous_machine_v_qg2_discrete_transfer_function1__a_sum;
double _microturbine1_synchonous_machine_v_qg2_discrete_transfer_function1__b_sum;
double _microturbine1_synchonous_machine_v_qg2_discrete_transfer_function1__delay_line_in;
X_UnInt32 _microturbine1_synchonous_machine_v_qg2_discrete_transfer_function1__i;
double _microturbine1_synchonous_machine_e_qp_sum2__out;
double _microturbine1_synchonous_machine_v_dg2_discrete_transfer_function1__out;
double _microturbine1_synchonous_machine_v_dg2_discrete_transfer_function1__b_coeff[2] = {200.0, -200.00000000000003};
double _microturbine1_synchonous_machine_v_dg2_discrete_transfer_function1__a_coeff[2] = {1.0, -0.9960079893439916};
double _microturbine1_synchonous_machine_v_dg2_discrete_transfer_function1__a_sum;
double _microturbine1_synchonous_machine_v_dg2_discrete_transfer_function1__b_sum;
double _microturbine1_synchonous_machine_v_dg2_discrete_transfer_function1__delay_line_in;
X_UnInt32 _microturbine1_synchonous_machine_v_dg2_discrete_transfer_function1__i;
double _microturbine1_synchonous_machine_w_m_sum1__out;
float _microturbine1_be1_25a_synchronizer_digital_probe3__tmp;
float _microturbine1_be1_25a_synchronizer_digital_probe5__tmp;
double _microturbine1_be1_25a_synchronizer_logical_operator1__out;
double _microturbine1_cb_control_logical_operator8__out;
float _microturbine1_cb_control_mt_sync_off__tmp;
double _microturbine1_synchonous_machine_v_qg2_sum2__out;
double _microturbine1_synchonous_machine_e_qp_product1__out;
double _microturbine1_synchonous_machine_v_dg2_sum2__out;
double _microturbine1_synchonous_machine_w_m_sum2__out;
double _microturbine1_be1_25a_synchronizer_stay_connected1__connect;
X_Int32 _microturbine1_be1_25a_synchronizer_stay_connected1__MTsync;
double _microturbine1_be1_25a_synchronizer_stay_connected1__connectMT;
double _microturbine1_be1_25a_synchronizer_stay_connected1__ready;


X_Int32 _microturbine1_be1_25a_synchronizer_stay_connected1__out;
double _microturbine1_cb_control_logical_operator6__out;
double _microturbine1_synchonous_machine_gain8__out;
double _microturbine1_synchonous_machine_e_qp_sum1__out;
double _microturbine1_synchonous_machine_gain9__out;
double _microturbine1_synchonous_machine_w_m_gain2__out;
double _microturbine1_cb_control_logical_operator1__out;
double _microturbine1_synchonous_machine_qd_to_abc_product1__out;
double _microturbine1_synchonous_machine_qd_to_abc_product3__out;
double _microturbine1_synchonous_machine_qd_to_abc_product5__out;
double _microturbine1_synchonous_machine_e_qp_gain1__out;
double _microturbine1_synchonous_machine_qd_to_abc_product2__out;
double _microturbine1_synchonous_machine_qd_to_abc_product4__out;
double _microturbine1_synchonous_machine_qd_to_abc_product6__out;
X_Int32 _microturbine1_cb_control_stay_connected1__var;
double _microturbine1_cb_control_stay_connected1__connect;
double _microturbine1_cb_control_stay_connected1__disconnect;


X_Int32 _microturbine1_cb_control_stay_connected1__action;
double _microturbine1_synchonous_machine_qd_to_abc_sum3__out;
double _microturbine1_synchonous_machine_qd_to_abc_sum5__out;
double _microturbine1_synchonous_machine_qd_to_abc_sum6__out;
double _microturbine1_be1_25a_synchronizer_hold_after_connect__var;
X_Int32 _microturbine1_be1_25a_synchronizer_hold_after_connect__MT_sync;
X_Int32 _microturbine1_be1_25a_synchronizer_hold_after_connect__connect;
double _microturbine1_be1_25a_synchronizer_hold_after_connect__in;


double _microturbine1_be1_25a_synchronizer_hold_after_connect__out;
double _microturbine1_be1_25a_synchronizer_hold_after_connect1__var;
X_Int32 _microturbine1_be1_25a_synchronizer_hold_after_connect1__MT_sync;
X_Int32 _microturbine1_be1_25a_synchronizer_hold_after_connect1__connect;
X_Int32 _microturbine1_be1_25a_synchronizer_hold_after_connect1__exc_state;
double _microturbine1_be1_25a_synchronizer_hold_after_connect1__in;


double _microturbine1_be1_25a_synchronizer_hold_after_connect1__out;
float _microturbine1_cb_control_gcb_on__tmp;
X_Int32 _microturbine1_cb_control_logical_operator3__out;
double _microturbine1_be1_25a_synchronizer_sum9__out;
double _microturbine1_be1_25a_synchronizer_sum10__out;
float _microturbine1_cb_control_gcb_off__tmp;
double _microturbine1_be1_25a_synchronizer_hold_after_connect2__var;
X_Int32 _microturbine1_be1_25a_synchronizer_hold_after_connect2__connect;
double _microturbine1_be1_25a_synchronizer_hold_after_connect2__in;


double _microturbine1_be1_25a_synchronizer_hold_after_connect2__out;
double _microturbine1_be1_25a_synchronizer_hold_after_connect3__var;
X_Int32 _microturbine1_be1_25a_synchronizer_hold_after_connect3__connect;
double _microturbine1_be1_25a_synchronizer_hold_after_connect3__in;


double _microturbine1_be1_25a_synchronizer_hold_after_connect3__out;
double _microturbine1_signal_switch1__out;
double _microturbine1_signal_switch2__out;
double _microturbine1_w__out;
double _microturbine1__v_3__out;
//@cmp.var.end

//@cmp.svar.start
// state variables
double _f1_motor_chiller_compressor_unit_delay1__state;
double _f1_motor_im_machine_wrapper1__model_load;
double _microturbine1_be1_25a_synchronizer_unit_delay2__state;
X_Int32 _microturbine1_be1_25a_synchronizer_unit_delay5__state;
double _microturbine1_engine_integrator1__state;
X_Int32 _microturbine1_exciter_rate_transition1_output__out = (X_Int32) 0.0;

double _microturbine1_exciter_rate_transition2_output__out =  0.0;

double _microturbine1_exciter_rate_transition3_output__out =  0.0;

double _microturbine1_governor_integrator1__state;
double _microturbine1_governor_rate_transition1_output__out =  0.0;

double _microturbine1_governor_rate_transition2_output__out =  0.0;

X_Int32 _microturbine1_governor_rate_transition3_output__out = (X_Int32) 0.0;

double _microturbine1_synchonous_machine_e_qp_integrator1__state;
double _microturbine1_synchonous_machine_phi_1d_a_integrator1__state;
double _microturbine1_synchonous_machine_phi_2q_a_integrator1__state;
double _microturbine1_synchonous_machine_rate_transition1_output__out =  0.0;

double _microturbine1_synchonous_machine_rate_transition2_output__out =  0.0;

double _microturbine1_synchonous_machine_w_m_integrator1__state;
double _diesel_mcb_rms_value1__square_sum;
double _diesel_mcb_rms_value1__sample_cnt;
double _diesel_mcb_rms_value1__filtered_value;
double _diesel_mcb_rms_value1__out_state;
double _diesel_mcb_rms_value2__square_sum;
double _diesel_mcb_rms_value2__sample_cnt;
double _diesel_mcb_rms_value2__filtered_value;
double _diesel_mcb_rms_value2__out_state;
double _diesel_mcb_rms_value3__square_sum;
double _diesel_mcb_rms_value3__sample_cnt;
double _diesel_mcb_rms_value3__filtered_value;
double _diesel_mcb_rms_value3__out_state;
double _microturbine1_exciter_integrator1__state;
X_Int32 _microturbine1_exciter_integrator1__reset_state;
double _microturbine1_exciter_integrator2__state;
X_Int32 _microturbine1_exciter_integrator2__reset_state;
double _microturbine1_exciter_integrator3__state;
X_Int32 _microturbine1_exciter_integrator3__reset_state;
double _microturbine1_exciter_integrator4__state;
X_Int32 _microturbine1_exciter_integrator4__reset_state;
double _microturbine1_exciter_pi_integrator1__state;
X_Int32 _microturbine1_exciter_pi_integrator1__reset_state;
double _microturbine1_three_phase_meter1_pq_measure_pq_power_meter1__filter_1_output_k_minus_1;
double _microturbine1_three_phase_meter1_pq_measure_pq_power_meter1__filter_1_input_k_minus_1;
double _microturbine1_three_phase_meter1_pq_measure_pq_power_meter1__filter_1_output_k_minus_1Q;
double _microturbine1_three_phase_meter1_pq_measure_pq_power_meter1__filter_1_input_k_minus_1Q;
double _microturbine1_three_phase_meter1_pq_measure_pq_power_meter1__filter_1_output_k_minus_1P0;
double _microturbine1_three_phase_meter1_pq_measure_pq_power_meter1__filter_1_input_k_minus_1P0;
double _microturbine1_governor_rate_limiter2__prev_out;
double _microturbine1_governor_rate_limiter2__out;
int _microturbine1_governor_rate_limiter2__first_step;
double _microturbine1_exciter_rate_limit__prev_out;
double _microturbine1_exciter_rate_limit__out;
int _microturbine1_exciter_rate_limit__first_step;
double _microturbine1_governor_exciter_activation_comparator1__state;
double _microturbine1_governor_discrete_transfer_function1__states[1];
double _microturbine1_be1_25a_synchronizer_pll_pid_controller1__integrator_state;
X_UnInt32 _microturbine1_be1_25a_synchronizer_pll_pid_controller1__av_active;
double _microturbine1_be1_25a_synchronizer_pll_pid_controller1__filter_state;
double _microturbine1_governor_discrete_transfer_function2__states[2];
double _microturbine1_synchonous_machine_v_qg2_discrete_transfer_function1__states[1];
double _microturbine1_synchonous_machine_v_dg2_discrete_transfer_function1__states[1];
//@cmp.svar.end



// generated using template: virtual_hil/custom_functions.template---------------------------------
void ReInit_user_sp_cpu_dev0() {
#if DEBUG_MODE
    printf("\n\rReInitTimer");
#endif
    //@cmp.init.block.start
    _f1_motor_chiller_compressor_unit_delay1__state = 0.0;
    _f1_motor_im_machine_wrapper1__model_load = 0.0;
    _microturbine1_be1_25a_synchronizer_unit_delay2__state = 0.0;
    _microturbine1_be1_25a_synchronizer_unit_delay5__state = 0.0;
    _microturbine1_engine_integrator1__state = 0.0;
    _microturbine1_exciter_rate_transition1_output__out = (X_Int32) 0.0;
    _microturbine1_exciter_rate_transition2_output__out =  0.0;
    _microturbine1_exciter_rate_transition3_output__out =  0.0;
    _microturbine1_governor_integrator1__state = 0.0;
    _microturbine1_governor_rate_transition1_output__out =  0.0;
    _microturbine1_governor_rate_transition2_output__out =  0.0;
    _microturbine1_governor_rate_transition3_output__out = (X_Int32) 0.0;
    _microturbine1_synchonous_machine_e_qp_integrator1__state = 0.0;
    _microturbine1_synchonous_machine_phi_1d_a_integrator1__state = 0.0;
    _microturbine1_synchonous_machine_phi_2q_a_integrator1__state = 0.0;
    _microturbine1_synchonous_machine_rate_transition1_output__out =  0.0;
    _microturbine1_synchonous_machine_rate_transition2_output__out =  0.0;
    _microturbine1_synchonous_machine_w_m_integrator1__state = 0.0;
    HIL_OutInt32(141033728, 0x1);
    HIL_OutInt32(141033729, 0x1);
    HIL_OutInt32(141033730, 0x1);
    _diesel_mcb_rms_value1__square_sum = 0x0;
    _diesel_mcb_rms_value1__sample_cnt = 0x0;
    _diesel_mcb_rms_value1__filtered_value = 0x0;
    _diesel_mcb_rms_value1__out_state = 0x0;
    _diesel_mcb_rms_value2__square_sum = 0x0;
    _diesel_mcb_rms_value2__sample_cnt = 0x0;
    _diesel_mcb_rms_value2__filtered_value = 0x0;
    _diesel_mcb_rms_value2__out_state = 0x0;
    _diesel_mcb_rms_value3__square_sum = 0x0;
    _diesel_mcb_rms_value3__sample_cnt = 0x0;
    _diesel_mcb_rms_value3__filtered_value = 0x0;
    _diesel_mcb_rms_value3__out_state = 0x0;
    _microturbine1_be1_25a_synchronizer_abc_to_qd1_confine_phase__floor_in = 0;
    HIL_OutAO(0x4013, 0.0f);
    _microturbine1_exciter_integrator1__state = 0.0;
    _microturbine1_exciter_integrator1__reset_state = 2;
    _microturbine1_exciter_integrator2__state = 0.0;
    _microturbine1_exciter_integrator2__reset_state = 2;
    _microturbine1_exciter_integrator3__state = 0.0;
    _microturbine1_exciter_integrator3__reset_state = 2;
    _microturbine1_exciter_integrator4__state = 0.0;
    _microturbine1_exciter_integrator4__reset_state = 2;
    _microturbine1_exciter_pi_integrator1__state = 0.0;
    _microturbine1_exciter_pi_integrator1__reset_state = 2;
    HIL_OutAO(0x4022, 0.0f);
    HIL_OutAO(0x4024, 0.0f);
    HIL_OutAO(0x4029, 0.0f);
    HIL_OutAO(0x402a, 0.0f);
    HIL_OutAO(0x4030, 0.0f);
    _microturbine1_three_phase_meter1_pq_measure_pq_power_meter1__filter_1_output_k_minus_1 = 0.0;
    _microturbine1_three_phase_meter1_pq_measure_pq_power_meter1__filter_1_input_k_minus_1 = 0.0;
    _microturbine1_three_phase_meter1_pq_measure_pq_power_meter1__filter_1_output_k_minus_1Q = 0.0;
    _microturbine1_three_phase_meter1_pq_measure_pq_power_meter1__filter_1_input_k_minus_1Q = 0.0;
    _microturbine1_three_phase_meter1_pq_measure_pq_power_meter1__filter_1_output_k_minus_1P0 = 0.0;
    _microturbine1_three_phase_meter1_pq_measure_pq_power_meter1__filter_1_input_k_minus_1P0 = 0.0;
    HIL_OutAO(0x4007, 0.0f);
    HIL_OutAO(0x4008, 0.0f);
    HIL_OutAO(0x4009, 0.0f);
    _f1_motor_chiller_compressor_c_function1__T = 0;
    _f1_motor_chiller_compressor_c_function1__w = 0;
    HIL_OutAO(0x401c, 0.0f);
    HIL_OutAO(0x401e, 0.0f);
    HIL_OutAO(0x401f, 0.0f);
    HIL_OutAO(0x401d, 0.0f);
    _microturbine1_synchonous_machine_c_function1__var = 0;
    HIL_OutAO(0x402d, 0.0f);
    HIL_OutAO(0x402e, 0.0f);
    HIL_OutAO(0x402f, 0.0f);
    HIL_OutAO(0x4021, 0.0f);
    _microturbine1_governor_rate_limiter2__first_step = 1;
    HIL_OutAO(0x4017, 0.0f);
    _microturbine1_synchonous_machine_abc_to_qd_confine_phase__floor_in = 0;
    _microturbine1_synchonous_machine_qd_to_abc_confine_phase__floor_in = 0;
    _microturbine1_exciter_rate_limit__first_step = 1;
    _microturbine1_governor_exciter_activation_comparator1__state = 0.0f;
    HIL_OutAO(0x4023, 0.0f);
    HIL_OutAO(0x4020, 0.0f);
    _microturbine1_governor_exciter_activation_activate_exciter__Activate = 0;
    HIL_OutFloat(162267136, 0.0);
    for (_microturbine1_governor_discrete_transfer_function1__i = 0; _microturbine1_governor_discrete_transfer_function1__i < 1; _microturbine1_governor_discrete_transfer_function1__i++) {
        _microturbine1_governor_discrete_transfer_function1__states[_microturbine1_governor_discrete_transfer_function1__i] = 0.0;
    }
    HIL_OutAO(0x400c, 0.0f);
    _microturbine1_be1_25a_synchronizer_pll_pid_controller1__integrator_state =  376.99111843077515;
    _microturbine1_be1_25a_synchronizer_pll_pid_controller1__filter_state =  0.0;
    HIL_OutAO(0x400d, 0.0f);
    HIL_OutAO(0x400a, 0.0f);
    HIL_OutAO(0x400b, 0.0f);
    _microturbine1_be1_25a_synchronizer_pll_c_function1__var = 0;
    HIL_OutAO(0x4012, 0.0f);
    HIL_OutAO(0x4018, 0.0f);
    _microturbine1_be1_25a_synchronizer_pll_confine_phase__floor_in = 0;
    for (_microturbine1_governor_discrete_transfer_function2__i = 0; _microturbine1_governor_discrete_transfer_function2__i < 2; _microturbine1_governor_discrete_transfer_function2__i++) {
        _microturbine1_governor_discrete_transfer_function2__states[_microturbine1_governor_discrete_transfer_function2__i] = 0.0;
    }
    HIL_OutAO(0x4015, 0.0f);
    HIL_OutAO(0x4011, 0.0f);
    HIL_OutAO(0x401b, 0.0f);
    _microturbine1_cb_control_hold_after_connect2__var = 1;
    HIL_OutAO(0x4028, 0.0f);
    HIL_OutAO(0x4027, 0.0f);
    HIL_OutAO(0x4014, 0.0f);
    HIL_OutAO(0x401a, 0.0f);
    HIL_OutAO(0x400e, 0.0f);
    HIL_OutAO(0x4019, 0.0f);
    HIL_OutAO(0x4016, 0.0f);
    HIL_OutAO(0x4031, 0.0f);
    HIL_OutAO(0x402c, 0.0f);
    HIL_OutAO(0x402b, 0.0f);
    for (_microturbine1_synchonous_machine_v_qg2_discrete_transfer_function1__i = 0; _microturbine1_synchonous_machine_v_qg2_discrete_transfer_function1__i < 1; _microturbine1_synchonous_machine_v_qg2_discrete_transfer_function1__i++) {
        _microturbine1_synchonous_machine_v_qg2_discrete_transfer_function1__states[_microturbine1_synchonous_machine_v_qg2_discrete_transfer_function1__i] = 0.0;
    }
    for (_microturbine1_synchonous_machine_v_dg2_discrete_transfer_function1__i = 0; _microturbine1_synchonous_machine_v_dg2_discrete_transfer_function1__i < 1; _microturbine1_synchonous_machine_v_dg2_discrete_transfer_function1__i++) {
        _microturbine1_synchonous_machine_v_dg2_discrete_transfer_function1__states[_microturbine1_synchonous_machine_v_dg2_discrete_transfer_function1__i] = 0.0;
    }
    _microturbine1_be1_25a_synchronizer_stay_connected1__connect = 0;
    HIL_OutAO(0x4026, 0.0f);
    HIL_OutAO(0x4025, 0.0f);
    _microturbine1_cb_control_stay_connected1__var = 0;
    _microturbine1_be1_25a_synchronizer_hold_after_connect__var = 0;
    _microturbine1_be1_25a_synchronizer_hold_after_connect1__var = 0;
    HIL_OutFloat(137101312, 0.0);
    HIL_OutFloat(137101313, 0.0);
    HIL_OutFloat(137101314, 0.0);
    HIL_OutAO(0x4010, 0.0f);
    HIL_OutAO(0x400f, 0.0f);
    _microturbine1_be1_25a_synchronizer_hold_after_connect2__var = 0;
    _microturbine1_be1_25a_synchronizer_hold_after_connect3__var = 0;
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
    // Generated from the component: Microturbine1.Synchonous Machine.E_F.Va1
    _microturbine1_synchonous_machine_e_f_va1__out = (HIL_InFloat(0xc80000 + 0xc00));
    // Generated from the component: Microturbine1.Synchonous Machine.E_qp.Constant1
    // Generated from the component: Microturbine1.Synchonous Machine.E_qp.Constant2
    // Generated from the component: Microturbine1.Synchonous Machine.E_qp.Constant3
    // Generated from the component: Microturbine1.Synchonous Machine.E_qp.Integrator1
    _microturbine1_synchonous_machine_e_qp_integrator1__out = _microturbine1_synchonous_machine_e_qp_integrator1__state;
    // Generated from the component: Microturbine1.Synchonous Machine.Ia1.Ia1
    _microturbine1_synchonous_machine_ia1_ia1__out = (HIL_InFloat(0xc80000 + 0x16));
    // Generated from the component: Microturbine1.Synchonous Machine.Ib1.Ia1
    _microturbine1_synchonous_machine_ib1_ia1__out = (HIL_InFloat(0xc80000 + 0x17));
    // Generated from the component: Microturbine1.Synchonous Machine.Ic1.Ia1
    _microturbine1_synchonous_machine_ic1_ia1__out = (HIL_InFloat(0xc80000 + 0x18));
    // Generated from the component: Microturbine1.Synchonous Machine.Phi_1d_a.Constant1
    // Generated from the component: Microturbine1.Synchonous Machine.Phi_1d_a.Integrator1
    _microturbine1_synchonous_machine_phi_1d_a_integrator1__out = _microturbine1_synchonous_machine_phi_1d_a_integrator1__state;
    // Generated from the component: Microturbine1.Synchonous Machine.Phi_2q_a.Constant1
    // Generated from the component: Microturbine1.Synchonous Machine.Phi_2q_a.Integrator1
    _microturbine1_synchonous_machine_phi_2q_a_integrator1__out = _microturbine1_synchonous_machine_phi_2q_a_integrator1__state;
    // Generated from the component: Microturbine1.Synchonous Machine.Phi_d_a 2.Constant1
    // Generated from the component: Microturbine1.Synchonous Machine.Phi_d_a 2.Constant2
    // Generated from the component: Microturbine1.Synchonous Machine.Phi_q_a 2.Constant2
    // Generated from the component: Microturbine1.Synchonous Machine.Rate Transition1.Output
    // Generated from the component: Microturbine1.Synchonous Machine.V_dG2.Constant2
    // Generated from the component: Microturbine1.Synchonous Machine.V_dG2.Constant3
    // Generated from the component: Microturbine1.Synchonous Machine.V_qG2.Constant2
    // Generated from the component: Microturbine1.Synchonous Machine.V_qG2.Constant3
    // Generated from the component: Microturbine1.Synchonous Machine.abc to qd.Constant2
    // Generated from the component: Microturbine1.Synchonous Machine.abc to qd.Constant3
    // Generated from the component: Microturbine1.Synchonous Machine.qd to abc.Constant2
    // Generated from the component: Microturbine1.Synchonous Machine.qd to abc.Constant3
    // Generated from the component: Microturbine1.Synchonous Machine.w_m.Constant1
    // Generated from the component: Microturbine1.Synchonous Machine.w_m.Integrator1
    _microturbine1_synchonous_machine_w_m_integrator1__out = _microturbine1_synchonous_machine_w_m_integrator1__state;
    // Generated from the component: Microturbine1.Synchonous Machine.E_qp.Gain2
    _microturbine1_synchonous_machine_e_qp_gain2__out = 8.874962836170933e-05 * _microturbine1_synchonous_machine_e_f_va1__out;
    // Generated from the component: Microturbine1.Synchonous Machine.E_qp_M
    HIL_OutAO(0x4024, (float)_microturbine1_synchonous_machine_e_qp_integrator1__out);
    // Generated from the component: Microturbine1.Synchonous Machine.Phi_1d_a_M
    HIL_OutAO(0x4029, (float)_microturbine1_synchonous_machine_phi_1d_a_integrator1__out);
    // Generated from the component: Microturbine1.Synchonous Machine.Phi_2q_a_M
    HIL_OutAO(0x402a, (float)_microturbine1_synchonous_machine_phi_2q_a_integrator1__out);
    // Generated from the component: Microturbine1.Synchonous Machine.Phi_d_a 2.Product1
    _microturbine1_synchonous_machine_phi_d_a_2_product1__out = (_microturbine1_synchonous_machine_phi_d_a_2_constant1__out * _microturbine1_synchonous_machine_e_qp_integrator1__out);
    // Generated from the component: Microturbine1.Synchonous Machine.Phi_d_a 2.Product2
    _microturbine1_synchonous_machine_phi_d_a_2_product2__out = (_microturbine1_synchonous_machine_phi_d_a_2_constant2__out * _microturbine1_synchonous_machine_phi_1d_a_integrator1__out);
    // Generated from the component: Microturbine1.Synchonous Machine.Phi_q_a 2.Product2
    _microturbine1_synchonous_machine_phi_q_a_2_product2__out = (_microturbine1_synchonous_machine_phi_q_a_2_constant2__out * _microturbine1_synchonous_machine_phi_2q_a_integrator1__out);
    // Generated from the component: Microturbine1.Synchonous Machine.w_m.Gain16
    _microturbine1_synchonous_machine_w_m_gain16__out = 5.385587406153931e-05 * _microturbine1_synchonous_machine_rate_transition1_output__out;
    // Generated from the component: Microturbine1.Synchonous Machine.V_dG2.Termination1
    // Generated from the component: Microturbine1.Synchonous Machine.V_qG2.Termination1
    // Generated from the component: Microturbine1.Synchonous Machine.w_m.Gain1
    _microturbine1_synchonous_machine_w_m_gain1__out = 0.005305164769729845 * _microturbine1_synchonous_machine_w_m_constant1__out;
    // Generated from the component: Microturbine1.Synchonous Machine.Gain1
    _microturbine1_synchonous_machine_gain1__out = 2.0 * _microturbine1_synchonous_machine_w_m_integrator1__out;
    // Generated from the component: Microturbine1.Synchonous Machine.Gain17
    _microturbine1_synchonous_machine_gain17__out = 9.549296585513721 * _microturbine1_synchonous_machine_w_m_integrator1__out;
    // Generated from the component: Microturbine1.Synchonous Machine.w_m.Product1
    _microturbine1_synchonous_machine_w_m_product1__out = (_microturbine1_synchonous_machine_w_m_gain1__out * _microturbine1_synchonous_machine_w_m_integrator1__out);
    // Generated from the component: Microturbine1.Synchonous Machine.C function1
    _microturbine1_synchonous_machine_c_function1__in = _microturbine1_synchonous_machine_gain1__out;
    _microturbine1_synchonous_machine_c_function1__out = _microturbine1_synchonous_machine_c_function1__var;
    // Generated from the component: Microturbine1.Synchonous Machine.V_dG2.Product3
    _microturbine1_synchonous_machine_v_dg2_product3__out = (_microturbine1_synchonous_machine_gain1__out) * 1.0 / (_microturbine1_synchonous_machine_v_dg2_constant2__out);
    // Generated from the component: Microturbine1.Synchonous Machine.V_qG2.Product3
    _microturbine1_synchonous_machine_v_qg2_product3__out = (_microturbine1_synchonous_machine_gain1__out) * 1.0 / (_microturbine1_synchonous_machine_v_qg2_constant2__out);
    // Generated from the component: Microturbine1.Synchonous Machine.Rate Transition2.Input
    _microturbine1_synchonous_machine_rate_transition2_output__out = _microturbine1_synchonous_machine_gain17__out;
    // Generated from the component: Microturbine1.Synchonous Machine.abc to qd.confine phase
    _microturbine1_synchonous_machine_abc_to_qd_confine_phase__in = _microturbine1_synchonous_machine_c_function1__out;
    _microturbine1_synchonous_machine_abc_to_qd_confine_phase__x = _microturbine1_synchonous_machine_abc_to_qd_confine_phase__in / 6.283185307179586;
    _microturbine1_synchonous_machine_abc_to_qd_confine_phase__floor_in = floor(_microturbine1_synchonous_machine_abc_to_qd_confine_phase__x);
    _microturbine1_synchonous_machine_abc_to_qd_confine_phase__out = _microturbine1_synchonous_machine_abc_to_qd_confine_phase__in - (6.283185307179586 * _microturbine1_synchonous_machine_abc_to_qd_confine_phase__floor_in);
    // Generated from the component: Microturbine1.Synchonous Machine.qd to abc.confine phase
    _microturbine1_synchonous_machine_qd_to_abc_confine_phase__in = _microturbine1_synchonous_machine_c_function1__out;
    _microturbine1_synchonous_machine_qd_to_abc_confine_phase__x = _microturbine1_synchonous_machine_qd_to_abc_confine_phase__in / 6.283185307179586;
    _microturbine1_synchonous_machine_qd_to_abc_confine_phase__floor_in = floor(_microturbine1_synchonous_machine_qd_to_abc_confine_phase__x);
    _microturbine1_synchonous_machine_qd_to_abc_confine_phase__out = _microturbine1_synchonous_machine_qd_to_abc_confine_phase__in - (6.283185307179586 * _microturbine1_synchonous_machine_qd_to_abc_confine_phase__floor_in);
    // Generated from the component: Microturbine1.Synchonous Machine.abc to qd.Sum2
    _microturbine1_synchonous_machine_abc_to_qd_sum2__out = _microturbine1_synchonous_machine_abc_to_qd_confine_phase__out - _microturbine1_synchonous_machine_abc_to_qd_constant2__out;
    // Generated from the component: Microturbine1.Synchonous Machine.abc to qd.Sum4
    _microturbine1_synchonous_machine_abc_to_qd_sum4__out = _microturbine1_synchonous_machine_abc_to_qd_confine_phase__out + _microturbine1_synchonous_machine_abc_to_qd_constant3__out;
    // Generated from the component: Microturbine1.Synchonous Machine.abc to qd.Trigonometric function3
    _microturbine1_synchonous_machine_abc_to_qd_trigonometric_function3__out = cos(_microturbine1_synchonous_machine_abc_to_qd_confine_phase__out);
    // Generated from the component: Microturbine1.Synchonous Machine.abc to qd.Trigonometric function5
    _microturbine1_synchonous_machine_abc_to_qd_trigonometric_function5__out = sin(_microturbine1_synchonous_machine_abc_to_qd_confine_phase__out);
    // Generated from the component: Microturbine1.Synchonous Machine.qd to abc.Sum2
    _microturbine1_synchonous_machine_qd_to_abc_sum2__out = _microturbine1_synchonous_machine_qd_to_abc_confine_phase__out - _microturbine1_synchonous_machine_qd_to_abc_constant2__out;
    // Generated from the component: Microturbine1.Synchonous Machine.qd to abc.Sum4
    _microturbine1_synchonous_machine_qd_to_abc_sum4__out = _microturbine1_synchonous_machine_qd_to_abc_confine_phase__out + _microturbine1_synchonous_machine_qd_to_abc_constant3__out;
    // Generated from the component: Microturbine1.Synchonous Machine.qd to abc.Trigonometric function2
    _microturbine1_synchonous_machine_qd_to_abc_trigonometric_function2__out = sin(_microturbine1_synchonous_machine_qd_to_abc_confine_phase__out);
    // Generated from the component: Microturbine1.Synchonous Machine.qd to abc.Trigonometric function3
    _microturbine1_synchonous_machine_qd_to_abc_trigonometric_function3__out = cos(_microturbine1_synchonous_machine_qd_to_abc_confine_phase__out);
    // Generated from the component: Microturbine1.Synchonous Machine.abc to qd.Trigonometric function2
    _microturbine1_synchonous_machine_abc_to_qd_trigonometric_function2__out = cos(_microturbine1_synchonous_machine_abc_to_qd_sum2__out);
    // Generated from the component: Microturbine1.Synchonous Machine.abc to qd.Trigonometric function6
    _microturbine1_synchonous_machine_abc_to_qd_trigonometric_function6__out = sin(_microturbine1_synchonous_machine_abc_to_qd_sum2__out);
    // Generated from the component: Microturbine1.Synchonous Machine.abc to qd.Trigonometric function4
    _microturbine1_synchonous_machine_abc_to_qd_trigonometric_function4__out = cos(_microturbine1_synchonous_machine_abc_to_qd_sum4__out);
    // Generated from the component: Microturbine1.Synchonous Machine.abc to qd.Trigonometric function7
    _microturbine1_synchonous_machine_abc_to_qd_trigonometric_function7__out = sin(_microturbine1_synchonous_machine_abc_to_qd_sum4__out);
    // Generated from the component: Microturbine1.Synchonous Machine.abc to qd.Product1
    _microturbine1_synchonous_machine_abc_to_qd_product1__out = (_microturbine1_synchonous_machine_ia1_ia1__out * _microturbine1_synchonous_machine_abc_to_qd_trigonometric_function3__out);
    // Generated from the component: Microturbine1.Synchonous Machine.abc to qd.Product4
    _microturbine1_synchonous_machine_abc_to_qd_product4__out = (_microturbine1_synchonous_machine_ia1_ia1__out * _microturbine1_synchonous_machine_abc_to_qd_trigonometric_function5__out);
    // Generated from the component: Microturbine1.Synchonous Machine.qd to abc.Trigonometric function4
    _microturbine1_synchonous_machine_qd_to_abc_trigonometric_function4__out = cos(_microturbine1_synchonous_machine_qd_to_abc_sum2__out);
    // Generated from the component: Microturbine1.Synchonous Machine.qd to abc.Trigonometric function5
    _microturbine1_synchonous_machine_qd_to_abc_trigonometric_function5__out = sin(_microturbine1_synchonous_machine_qd_to_abc_sum2__out);
    // Generated from the component: Microturbine1.Synchonous Machine.qd to abc.Trigonometric function6
    _microturbine1_synchonous_machine_qd_to_abc_trigonometric_function6__out = cos(_microturbine1_synchonous_machine_qd_to_abc_sum4__out);
    // Generated from the component: Microturbine1.Synchonous Machine.qd to abc.Trigonometric function7
    _microturbine1_synchonous_machine_qd_to_abc_trigonometric_function7__out = sin(_microturbine1_synchonous_machine_qd_to_abc_sum4__out);
    // Generated from the component: Microturbine1.Synchonous Machine.abc to qd.Product2
    _microturbine1_synchonous_machine_abc_to_qd_product2__out = (_microturbine1_synchonous_machine_ib1_ia1__out * _microturbine1_synchonous_machine_abc_to_qd_trigonometric_function2__out);
    // Generated from the component: Microturbine1.Synchonous Machine.abc to qd.Product5
    _microturbine1_synchonous_machine_abc_to_qd_product5__out = (_microturbine1_synchonous_machine_ib1_ia1__out * _microturbine1_synchonous_machine_abc_to_qd_trigonometric_function6__out);
    // Generated from the component: Microturbine1.Synchonous Machine.abc to qd.Product3
    _microturbine1_synchonous_machine_abc_to_qd_product3__out = (_microturbine1_synchonous_machine_ic1_ia1__out * _microturbine1_synchonous_machine_abc_to_qd_trigonometric_function4__out);
    // Generated from the component: Microturbine1.Synchonous Machine.abc to qd.Product6
    _microturbine1_synchonous_machine_abc_to_qd_product6__out = (_microturbine1_synchonous_machine_ic1_ia1__out * _microturbine1_synchonous_machine_abc_to_qd_trigonometric_function7__out);
    // Generated from the component: Microturbine1.Synchonous Machine.abc to qd.Sum3
    _microturbine1_synchonous_machine_abc_to_qd_sum3__out = _microturbine1_synchonous_machine_abc_to_qd_product1__out + _microturbine1_synchonous_machine_abc_to_qd_product2__out + _microturbine1_synchonous_machine_abc_to_qd_product3__out;
    // Generated from the component: Microturbine1.Synchonous Machine.abc to qd.Sum5
    _microturbine1_synchonous_machine_abc_to_qd_sum5__out = _microturbine1_synchonous_machine_abc_to_qd_product4__out + _microturbine1_synchonous_machine_abc_to_qd_product5__out + _microturbine1_synchonous_machine_abc_to_qd_product6__out;
    // Generated from the component: Microturbine1.Synchonous Machine.abc to qd.Gain1
    _microturbine1_synchonous_machine_abc_to_qd_gain1__out = 0.6666666666666666 * _microturbine1_synchonous_machine_abc_to_qd_sum3__out;
    // Generated from the component: Microturbine1.Synchonous Machine.abc to qd.Gain2
    _microturbine1_synchonous_machine_abc_to_qd_gain2__out = 0.6666666666666666 * _microturbine1_synchonous_machine_abc_to_qd_sum5__out;
    // Generated from the component: Microturbine1.Synchonous Machine.Gain10
    _microturbine1_synchonous_machine_gain10__out = 0.00482899406434398 * _microturbine1_synchonous_machine_abc_to_qd_gain1__out;
    // Generated from the component: Microturbine1.Synchonous Machine.Gain11
    _microturbine1_synchonous_machine_gain11__out = 0.00482899406434398 * _microturbine1_synchonous_machine_abc_to_qd_gain2__out;
    // Generated from the component: Microturbine1.Synchonous Machine.I_q_a1
    HIL_OutAO(0x4028, (float)_microturbine1_synchonous_machine_gain10__out);
    // Generated from the component: Microturbine1.Synchonous Machine.Phi_2q_a.Product1
    _microturbine1_synchonous_machine_phi_2q_a_product1__out = (_microturbine1_synchonous_machine_phi_2q_a_constant1__out * _microturbine1_synchonous_machine_gain10__out);
    // Generated from the component: Microturbine1.Synchonous Machine.Phi_q_a 2.Gain1
    _microturbine1_synchonous_machine_phi_q_a_2_gain1__out = 0.2597484888268292 * _microturbine1_synchonous_machine_gain10__out;
    // Generated from the component: Microturbine1.Synchonous Machine.E_qp.Product3
    _microturbine1_synchonous_machine_e_qp_product3__out = (_microturbine1_synchonous_machine_e_qp_constant3__out * _microturbine1_synchonous_machine_gain11__out);
    // Generated from the component: Microturbine1.Synchonous Machine.I_d_a1
    HIL_OutAO(0x4027, (float)_microturbine1_synchonous_machine_gain11__out);
    // Generated from the component: Microturbine1.Synchonous Machine.Phi_1d_a.Product1
    _microturbine1_synchonous_machine_phi_1d_a_product1__out = (_microturbine1_synchonous_machine_phi_1d_a_constant1__out * _microturbine1_synchonous_machine_gain11__out);
    // Generated from the component: Microturbine1.Synchonous Machine.Phi_d_a 2.Gain1
    _microturbine1_synchonous_machine_phi_d_a_2_gain1__out = 0.4274244930105489 * _microturbine1_synchonous_machine_gain11__out;
    // Generated from the component: Microturbine1.Synchonous Machine.Phi_2q_a.Sum1
    _microturbine1_synchonous_machine_phi_2q_a_sum1__out =  - _microturbine1_synchonous_machine_phi_2q_a_integrator1__out - _microturbine1_synchonous_machine_phi_2q_a_product1__out;
    // Generated from the component: Microturbine1.Synchonous Machine.Phi_q_a 2.Sum1
    _microturbine1_synchonous_machine_phi_q_a_2_sum1__out =  - _microturbine1_synchonous_machine_phi_q_a_2_gain1__out + _microturbine1_synchonous_machine_phi_q_a_2_product2__out;
    // Generated from the component: Microturbine1.Synchonous Machine.E_qp.Sum3
    _microturbine1_synchonous_machine_e_qp_sum3__out = _microturbine1_synchonous_machine_phi_1d_a_integrator1__out + _microturbine1_synchonous_machine_e_qp_product3__out - _microturbine1_synchonous_machine_e_qp_integrator1__out;
    // Generated from the component: Microturbine1.Synchonous Machine.Phi_1d_a.Sum1
    _microturbine1_synchonous_machine_phi_1d_a_sum1__out =  - _microturbine1_synchonous_machine_phi_1d_a_integrator1__out + _microturbine1_synchonous_machine_e_qp_integrator1__out - _microturbine1_synchonous_machine_phi_1d_a_product1__out;
    // Generated from the component: Microturbine1.Synchonous Machine.Phi_d_a 2.Sum1
    _microturbine1_synchonous_machine_phi_d_a_2_sum1__out =  - _microturbine1_synchonous_machine_phi_d_a_2_gain1__out + _microturbine1_synchonous_machine_phi_d_a_2_product2__out + _microturbine1_synchonous_machine_phi_d_a_2_product1__out;
    // Generated from the component: Microturbine1.Synchonous Machine.Phi_2q_a.Gain1
    _microturbine1_synchonous_machine_phi_2q_a_gain1__out = 4.898478952953661 * _microturbine1_synchonous_machine_phi_2q_a_sum1__out;
    // Generated from the component: Microturbine1.Synchonous Machine.Phi_q_a_M
    HIL_OutAO(0x402c, (float)_microturbine1_synchonous_machine_phi_q_a_2_sum1__out);
    // Generated from the component: Microturbine1.Synchonous Machine.V_dG2.Product2
    _microturbine1_synchonous_machine_v_dg2_product2__out = (_microturbine1_synchonous_machine_v_dg2_product3__out * _microturbine1_synchonous_machine_phi_q_a_2_sum1__out);
    // Generated from the component: Microturbine1.Synchonous Machine.V_qG2.Gain1
    _microturbine1_synchonous_machine_v_qg2_gain1__out = 0.0026525823848649226 * _microturbine1_synchonous_machine_phi_q_a_2_sum1__out;
    // Generated from the component: Microturbine1.Synchonous Machine.w_m.Product2
    _microturbine1_synchonous_machine_w_m_product2__out = (_microturbine1_synchonous_machine_phi_q_a_2_sum1__out * _microturbine1_synchonous_machine_gain11__out);
    // Generated from the component: Microturbine1.Synchonous Machine.E_qp.Product2
    _microturbine1_synchonous_machine_e_qp_product2__out = (_microturbine1_synchonous_machine_e_qp_constant2__out * _microturbine1_synchonous_machine_e_qp_sum3__out);
    // Generated from the component: Microturbine1.Synchonous Machine.Phi_1d_a.Gain1
    _microturbine1_synchonous_machine_phi_1d_a_gain1__out = 25.623029273849628 * _microturbine1_synchonous_machine_phi_1d_a_sum1__out;
    // Generated from the component: Microturbine1.Synchonous Machine.Phi_d_a_M
    HIL_OutAO(0x402b, (float)_microturbine1_synchonous_machine_phi_d_a_2_sum1__out);
    // Generated from the component: Microturbine1.Synchonous Machine.V_dG2.Gain1
    _microturbine1_synchonous_machine_v_dg2_gain1__out = 0.0026525823848649226 * _microturbine1_synchonous_machine_phi_d_a_2_sum1__out;
    // Generated from the component: Microturbine1.Synchonous Machine.V_qG2.Product2
    _microturbine1_synchonous_machine_v_qg2_product2__out = (_microturbine1_synchonous_machine_v_qg2_product3__out * _microturbine1_synchonous_machine_phi_d_a_2_sum1__out);
    // Generated from the component: Microturbine1.Synchonous Machine.w_m.Product3
    _microturbine1_synchonous_machine_w_m_product3__out = (_microturbine1_synchonous_machine_phi_d_a_2_sum1__out * _microturbine1_synchonous_machine_gain10__out);
    // Generated from the component: Microturbine1.Synchonous Machine.V_qG2.Discrete Transfer Function1
    _microturbine1_synchonous_machine_v_qg2_discrete_transfer_function1__a_sum = 0.0f;
    _microturbine1_synchonous_machine_v_qg2_discrete_transfer_function1__b_sum = 0.0f;
    _microturbine1_synchonous_machine_v_qg2_discrete_transfer_function1__delay_line_in = 0.0f;
    for (_microturbine1_synchonous_machine_v_qg2_discrete_transfer_function1__i = 0; _microturbine1_synchonous_machine_v_qg2_discrete_transfer_function1__i < 1; _microturbine1_synchonous_machine_v_qg2_discrete_transfer_function1__i++) {
        _microturbine1_synchonous_machine_v_qg2_discrete_transfer_function1__b_sum += _microturbine1_synchonous_machine_v_qg2_discrete_transfer_function1__b_coeff[_microturbine1_synchonous_machine_v_qg2_discrete_transfer_function1__i + 1] * _microturbine1_synchonous_machine_v_qg2_discrete_transfer_function1__states[_microturbine1_synchonous_machine_v_qg2_discrete_transfer_function1__i];
    }
    _microturbine1_synchonous_machine_v_qg2_discrete_transfer_function1__a_sum += _microturbine1_synchonous_machine_v_qg2_discrete_transfer_function1__states[0] * _microturbine1_synchonous_machine_v_qg2_discrete_transfer_function1__a_coeff[1];
    _microturbine1_synchonous_machine_v_qg2_discrete_transfer_function1__delay_line_in = _microturbine1_synchonous_machine_v_qg2_gain1__out - _microturbine1_synchonous_machine_v_qg2_discrete_transfer_function1__a_sum;
    _microturbine1_synchonous_machine_v_qg2_discrete_transfer_function1__b_sum += _microturbine1_synchonous_machine_v_qg2_discrete_transfer_function1__b_coeff[0] * _microturbine1_synchonous_machine_v_qg2_discrete_transfer_function1__delay_line_in;
    _microturbine1_synchonous_machine_v_qg2_discrete_transfer_function1__out = _microturbine1_synchonous_machine_v_qg2_discrete_transfer_function1__b_sum;
    // Generated from the component: Microturbine1.Synchonous Machine.E_qp.Sum2
    _microturbine1_synchonous_machine_e_qp_sum2__out = _microturbine1_synchonous_machine_gain11__out - _microturbine1_synchonous_machine_e_qp_product2__out;
    // Generated from the component: Microturbine1.Synchonous Machine.V_dG2.Discrete Transfer Function1
    _microturbine1_synchonous_machine_v_dg2_discrete_transfer_function1__a_sum = 0.0f;
    _microturbine1_synchonous_machine_v_dg2_discrete_transfer_function1__b_sum = 0.0f;
    _microturbine1_synchonous_machine_v_dg2_discrete_transfer_function1__delay_line_in = 0.0f;
    for (_microturbine1_synchonous_machine_v_dg2_discrete_transfer_function1__i = 0; _microturbine1_synchonous_machine_v_dg2_discrete_transfer_function1__i < 1; _microturbine1_synchonous_machine_v_dg2_discrete_transfer_function1__i++) {
        _microturbine1_synchonous_machine_v_dg2_discrete_transfer_function1__b_sum += _microturbine1_synchonous_machine_v_dg2_discrete_transfer_function1__b_coeff[_microturbine1_synchonous_machine_v_dg2_discrete_transfer_function1__i + 1] * _microturbine1_synchonous_machine_v_dg2_discrete_transfer_function1__states[_microturbine1_synchonous_machine_v_dg2_discrete_transfer_function1__i];
    }
    _microturbine1_synchonous_machine_v_dg2_discrete_transfer_function1__a_sum += _microturbine1_synchonous_machine_v_dg2_discrete_transfer_function1__states[0] * _microturbine1_synchonous_machine_v_dg2_discrete_transfer_function1__a_coeff[1];
    _microturbine1_synchonous_machine_v_dg2_discrete_transfer_function1__delay_line_in = _microturbine1_synchonous_machine_v_dg2_gain1__out - _microturbine1_synchonous_machine_v_dg2_discrete_transfer_function1__a_sum;
    _microturbine1_synchonous_machine_v_dg2_discrete_transfer_function1__b_sum += _microturbine1_synchonous_machine_v_dg2_discrete_transfer_function1__b_coeff[0] * _microturbine1_synchonous_machine_v_dg2_discrete_transfer_function1__delay_line_in;
    _microturbine1_synchonous_machine_v_dg2_discrete_transfer_function1__out = _microturbine1_synchonous_machine_v_dg2_discrete_transfer_function1__b_sum;
    // Generated from the component: Microturbine1.Synchonous Machine.w_m.Sum1
    _microturbine1_synchonous_machine_w_m_sum1__out = _microturbine1_synchonous_machine_w_m_product3__out - _microturbine1_synchonous_machine_w_m_product2__out;
    // Generated from the component: Microturbine1.Synchonous Machine.V_qG2.Sum2
    _microturbine1_synchonous_machine_v_qg2_sum2__out = _microturbine1_synchonous_machine_v_qg2_product2__out + _microturbine1_synchonous_machine_v_qg2_discrete_transfer_function1__out;
    // Generated from the component: Microturbine1.Synchonous Machine.E_qp.Product1
    _microturbine1_synchonous_machine_e_qp_product1__out = (_microturbine1_synchonous_machine_e_qp_constant1__out * _microturbine1_synchonous_machine_e_qp_sum2__out);
    // Generated from the component: Microturbine1.Synchonous Machine.V_dG2.Sum2
    _microturbine1_synchonous_machine_v_dg2_sum2__out =  - _microturbine1_synchonous_machine_v_dg2_product2__out + _microturbine1_synchonous_machine_v_dg2_discrete_transfer_function1__out;
    // Generated from the component: Microturbine1.Synchonous Machine.w_m.Sum2
    _microturbine1_synchonous_machine_w_m_sum2__out = _microturbine1_synchonous_machine_w_m_gain16__out - _microturbine1_synchonous_machine_w_m_sum1__out - _microturbine1_synchonous_machine_w_m_product1__out;
    // Generated from the component: Microturbine1.Synchonous Machine.Eq_phi
    HIL_OutAO(0x4026, (float)_microturbine1_synchonous_machine_v_qg2_sum2__out);
    // Generated from the component: Microturbine1.Synchonous Machine.Gain8
    _microturbine1_synchonous_machine_gain8__out = 11267.652816802622 * _microturbine1_synchonous_machine_v_qg2_sum2__out;
    // Generated from the component: Microturbine1.Synchonous Machine.E_qp.Sum1
    _microturbine1_synchonous_machine_e_qp_sum1__out =  - _microturbine1_synchonous_machine_e_qp_integrator1__out - _microturbine1_synchonous_machine_e_qp_product1__out + _microturbine1_synchonous_machine_e_qp_gain2__out;
    // Generated from the component: Microturbine1.Synchonous Machine.Ed_phi
    HIL_OutAO(0x4025, (float)_microturbine1_synchonous_machine_v_dg2_sum2__out);
    // Generated from the component: Microturbine1.Synchonous Machine.Gain9
    _microturbine1_synchonous_machine_gain9__out = 11267.652816802622 * _microturbine1_synchonous_machine_v_dg2_sum2__out;
    // Generated from the component: Microturbine1.Synchonous Machine.w_m.Gain2
    _microturbine1_synchonous_machine_w_m_gain2__out = 135.88203817864417 * _microturbine1_synchonous_machine_w_m_sum2__out;
    // Generated from the component: Microturbine1.Synchonous Machine.qd to abc.Product1
    _microturbine1_synchonous_machine_qd_to_abc_product1__out = (_microturbine1_synchonous_machine_gain8__out * _microturbine1_synchonous_machine_qd_to_abc_trigonometric_function3__out);
    // Generated from the component: Microturbine1.Synchonous Machine.qd to abc.Product3
    _microturbine1_synchonous_machine_qd_to_abc_product3__out = (_microturbine1_synchonous_machine_gain8__out * _microturbine1_synchonous_machine_qd_to_abc_trigonometric_function4__out);
    // Generated from the component: Microturbine1.Synchonous Machine.qd to abc.Product5
    _microturbine1_synchonous_machine_qd_to_abc_product5__out = (_microturbine1_synchonous_machine_gain8__out * _microturbine1_synchonous_machine_qd_to_abc_trigonometric_function6__out);
    // Generated from the component: Microturbine1.Synchonous Machine.E_qp.Gain1
    _microturbine1_synchonous_machine_e_qp_gain1__out = 0.27142857142857146 * _microturbine1_synchonous_machine_e_qp_sum1__out;
    // Generated from the component: Microturbine1.Synchonous Machine.qd to abc.Product2
    _microturbine1_synchonous_machine_qd_to_abc_product2__out = (_microturbine1_synchonous_machine_gain9__out * _microturbine1_synchonous_machine_qd_to_abc_trigonometric_function2__out);
    // Generated from the component: Microturbine1.Synchonous Machine.qd to abc.Product4
    _microturbine1_synchonous_machine_qd_to_abc_product4__out = (_microturbine1_synchonous_machine_gain9__out * _microturbine1_synchonous_machine_qd_to_abc_trigonometric_function5__out);
    // Generated from the component: Microturbine1.Synchonous Machine.qd to abc.Product6
    _microturbine1_synchonous_machine_qd_to_abc_product6__out = (_microturbine1_synchonous_machine_gain9__out * _microturbine1_synchonous_machine_qd_to_abc_trigonometric_function7__out);
    // Generated from the component: Microturbine1.Synchonous Machine.qd to abc.Sum3
    _microturbine1_synchonous_machine_qd_to_abc_sum3__out = _microturbine1_synchonous_machine_qd_to_abc_product1__out + _microturbine1_synchonous_machine_qd_to_abc_product2__out;
    // Generated from the component: Microturbine1.Synchonous Machine.qd to abc.Sum5
    _microturbine1_synchonous_machine_qd_to_abc_sum5__out = _microturbine1_synchonous_machine_qd_to_abc_product3__out + _microturbine1_synchonous_machine_qd_to_abc_product4__out;
    // Generated from the component: Microturbine1.Synchonous Machine.qd to abc.Sum6
    _microturbine1_synchonous_machine_qd_to_abc_sum6__out = _microturbine1_synchonous_machine_qd_to_abc_product5__out + _microturbine1_synchonous_machine_qd_to_abc_product6__out;
    // Generated from the component: Microturbine1.Synchonous Machine.Ea1.Vs1
    HIL_OutFloat(137101312, (float) _microturbine1_synchonous_machine_qd_to_abc_sum3__out);
    // Generated from the component: Microturbine1.Synchonous Machine.Eb1.Vs1
    HIL_OutFloat(137101313, (float) _microturbine1_synchonous_machine_qd_to_abc_sum5__out);
    // Generated from the component: Microturbine1.Synchonous Machine.Ec1.Vs1
    HIL_OutFloat(137101314, (float) _microturbine1_synchonous_machine_qd_to_abc_sum6__out);
    //@cmp.out.block.end
    //////////////////////////////////////////////////////////////////////////
    // Update block
    //////////////////////////////////////////////////////////////////////////
    //@cmp.update.block.start
    // Generated from the component: Microturbine1.Synchonous Machine.E_qp.Integrator1
    _microturbine1_synchonous_machine_e_qp_integrator1__state += _microturbine1_synchonous_machine_e_qp_gain1__out * 2e-05;
    // Generated from the component: Microturbine1.Synchonous Machine.Phi_1d_a.Integrator1
    _microturbine1_synchonous_machine_phi_1d_a_integrator1__state += _microturbine1_synchonous_machine_phi_1d_a_gain1__out * 2e-05;
    // Generated from the component: Microturbine1.Synchonous Machine.Phi_2q_a.Integrator1
    _microturbine1_synchonous_machine_phi_2q_a_integrator1__state += _microturbine1_synchonous_machine_phi_2q_a_gain1__out * 2e-05;
    // Generated from the component: Microturbine1.Synchonous Machine.w_m.Integrator1
    _microturbine1_synchonous_machine_w_m_integrator1__state += _microturbine1_synchonous_machine_w_m_gain2__out * 2e-05;
    // Generated from the component: Microturbine1.Synchonous Machine.C function1
    _microturbine1_synchonous_machine_c_function1__var += (2e-05 * _microturbine1_synchonous_machine_c_function1__in);
    // Generated from the component: Microturbine1.Synchonous Machine.abc to qd.confine phase
    // Generated from the component: Microturbine1.Synchonous Machine.qd to abc.confine phase
    // Generated from the component: Microturbine1.Synchonous Machine.V_qG2.Discrete Transfer Function1
    _microturbine1_synchonous_machine_v_qg2_discrete_transfer_function1__states[0] = _microturbine1_synchonous_machine_v_qg2_discrete_transfer_function1__delay_line_in;
    // Generated from the component: Microturbine1.Synchonous Machine.V_dG2.Discrete Transfer Function1
    _microturbine1_synchonous_machine_v_dg2_discrete_transfer_function1__states[0] = _microturbine1_synchonous_machine_v_dg2_discrete_transfer_function1__delay_line_in;
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
    // Generated from the component: 3ph Fault 103.ctrl
    _3ph_fault_103_ctrl__out = XIo_InInt32(0x55000100);
    // Generated from the component: 3ph Fault 106.ctrl
    _3ph_fault_106_ctrl__out = XIo_InInt32(0x55000104);
    // Generated from the component: DIESEL_MCB.VA_grid_2.Va1
    _diesel_mcb_va_grid_2_va1__out = (HIL_InFloat(0xc80000 + 0x6));
    // Generated from the component: DIESEL_MCB.VB_grid_2.Va1
    _diesel_mcb_vb_grid_2_va1__out = (HIL_InFloat(0xc80000 + 0x7));
    // Generated from the component: DIESEL_MCB.VC_grid_2.Va1
    _diesel_mcb_vc_grid_2_va1__out = (HIL_InFloat(0xc80000 + 0x8));
    // Generated from the component: F1_CB1.F1_CB1
    _f1_cb1_f1_cb1__out = XIo_InInt32(0x55000108);
    // Generated from the component: F1_CB1.Meas1.IA.Ia1
    _f1_cb1_meas1_ia_ia1__out = (HIL_InFloat(0xc80000 + 0x427));
    // Generated from the component: F1_CB1.Meas1.IB.Ia1
    _f1_cb1_meas1_ib_ia1__out = (HIL_InFloat(0xc80000 + 0x428));
    // Generated from the component: F1_CB1.Meas1.IC.Ia1
    _f1_cb1_meas1_ic_ia1__out = (HIL_InFloat(0xc80000 + 0x429));
    // Generated from the component: F1_CB1.Meas1.VA.Va1
    _f1_cb1_meas1_va_va1__out = (HIL_InFloat(0xc80000 + 0x412));
    // Generated from the component: F1_CB1.Meas1.VB.Va1
    _f1_cb1_meas1_vb_va1__out = (HIL_InFloat(0xc80000 + 0x413));
    // Generated from the component: F1_CB1.Meas1.VC.Va1
    _f1_cb1_meas1_vc_va1__out = (HIL_InFloat(0xc80000 + 0x414));
    // Generated from the component: F1_CB1.Meas2.VA.Va1
    _f1_cb1_meas2_va_va1__out = (HIL_InFloat(0xc80000 + 0x415));
    // Generated from the component: F1_CB1.Meas2.VB.Va1
    _f1_cb1_meas2_vb_va1__out = (HIL_InFloat(0xc80000 + 0x416));
    // Generated from the component: F1_CB1.Meas2.VC.Va1
    _f1_cb1_meas2_vc_va1__out = (HIL_InFloat(0xc80000 + 0x417));
    // Generated from the component: F1_CB10.F1_CB10
    _f1_cb10_f1_cb10__out = XIo_InInt32(0x5500010c);
    // Generated from the component: F1_CB10.Meas1.IA.Ia1
    _f1_cb10_meas1_ia_ia1__out = (HIL_InFloat(0xc80000 + 0x223));
    // Generated from the component: F1_CB10.Meas1.IB.Ia1
    _f1_cb10_meas1_ib_ia1__out = (HIL_InFloat(0xc80000 + 0x224));
    // Generated from the component: F1_CB10.Meas1.IC.Ia1
    _f1_cb10_meas1_ic_ia1__out = (HIL_InFloat(0xc80000 + 0x225));
    // Generated from the component: F1_CB10.Meas1.VA.Va1
    _f1_cb10_meas1_va_va1__out = (HIL_InFloat(0xc80000 + 0x21c));
    // Generated from the component: F1_CB10.Meas1.VB.Va1
    _f1_cb10_meas1_vb_va1__out = (HIL_InFloat(0xc80000 + 0x21d));
    // Generated from the component: F1_CB10.Meas1.VC.Va1
    _f1_cb10_meas1_vc_va1__out = (HIL_InFloat(0xc80000 + 0x21e));
    // Generated from the component: F1_CB10.Meas2.VA.Va1
    _f1_cb10_meas2_va_va1__out = (HIL_InFloat(0xc80000 + 0x21f));
    // Generated from the component: F1_CB10.Meas2.VB.Va1
    _f1_cb10_meas2_vb_va1__out = (HIL_InFloat(0xc80000 + 0x220));
    // Generated from the component: F1_CB10.Meas2.VC.Va1
    _f1_cb10_meas2_vc_va1__out = (HIL_InFloat(0xc80000 + 0x221));
    // Generated from the component: F1_CB14.F1_CB14
    _f1_cb14_f1_cb14__out = XIo_InInt32(0x55000110);
    // Generated from the component: F1_CB14.Meas1.IA.Ia1
    _f1_cb14_meas1_ia_ia1__out = (HIL_InFloat(0xc80000 + 0x813));
    // Generated from the component: F1_CB14.Meas1.IB.Ia1
    _f1_cb14_meas1_ib_ia1__out = (HIL_InFloat(0xc80000 + 0x814));
    // Generated from the component: F1_CB14.Meas1.IC.Ia1
    _f1_cb14_meas1_ic_ia1__out = (HIL_InFloat(0xc80000 + 0x815));
    // Generated from the component: F1_CB14.Meas1.VA.Va1
    _f1_cb14_meas1_va_va1__out = (HIL_InFloat(0xc80000 + 0x805));
    // Generated from the component: F1_CB14.Meas1.VB.Va1
    _f1_cb14_meas1_vb_va1__out = (HIL_InFloat(0xc80000 + 0x806));
    // Generated from the component: F1_CB14.Meas1.VC.Va1
    _f1_cb14_meas1_vc_va1__out = (HIL_InFloat(0xc80000 + 0x807));
    // Generated from the component: F1_CB14.Meas2.VA.Va1
    _f1_cb14_meas2_va_va1__out = (HIL_InFloat(0xc80000 + 0x808));
    // Generated from the component: F1_CB14.Meas2.VB.Va1
    _f1_cb14_meas2_vb_va1__out = (HIL_InFloat(0xc80000 + 0x809));
    // Generated from the component: F1_CB14.Meas2.VC.Va1
    _f1_cb14_meas2_vc_va1__out = (HIL_InFloat(0xc80000 + 0x80a));
    // Generated from the component: F1_CB2.F1_CB2
    _f1_cb2_f1_cb2__out = XIo_InInt32(0x55000114);
    // Generated from the component: F1_CB2.Meas1.IA.Ia1
    _f1_cb2_meas1_ia_ia1__out = (HIL_InFloat(0xc80000 + 0x623));
    // Generated from the component: F1_CB2.Meas1.IB.Ia1
    _f1_cb2_meas1_ib_ia1__out = (HIL_InFloat(0xc80000 + 0x624));
    // Generated from the component: F1_CB2.Meas1.IC.Ia1
    _f1_cb2_meas1_ic_ia1__out = (HIL_InFloat(0xc80000 + 0x625));
    // Generated from the component: F1_CB2.Meas1.VA.Va1
    _f1_cb2_meas1_va_va1__out = (HIL_InFloat(0xc80000 + 0x610));
    // Generated from the component: F1_CB2.Meas1.VB.Va1
    _f1_cb2_meas1_vb_va1__out = (HIL_InFloat(0xc80000 + 0x611));
    // Generated from the component: F1_CB2.Meas1.VC.Va1
    _f1_cb2_meas1_vc_va1__out = (HIL_InFloat(0xc80000 + 0x612));
    // Generated from the component: F1_CB2.Meas2.VA.Va1
    _f1_cb2_meas2_va_va1__out = (HIL_InFloat(0xc80000 + 0x613));
    // Generated from the component: F1_CB2.Meas2.VB.Va1
    _f1_cb2_meas2_vb_va1__out = (HIL_InFloat(0xc80000 + 0x614));
    // Generated from the component: F1_CB2.Meas2.VC.Va1
    _f1_cb2_meas2_vc_va1__out = (HIL_InFloat(0xc80000 + 0x615));
    // Generated from the component: F1_CB3.Brk.F1_CB3
    _f1_cb3_brk_f1_cb3__out = XIo_InInt32(0x55000118);
    // Generated from the component: F1_CB4.F1_CB4
    _f1_cb4_f1_cb4__out = XIo_InInt32(0x5500011c);
    // Generated from the component: F1_CB4.Meas1.IA.Ia1
    _f1_cb4_meas1_ia_ia1__out = (HIL_InFloat(0xc80000 + 0x42d));
    // Generated from the component: F1_CB4.Meas1.IB.Ia1
    _f1_cb4_meas1_ib_ia1__out = (HIL_InFloat(0xc80000 + 0x42e));
    // Generated from the component: F1_CB4.Meas1.IC.Ia1
    _f1_cb4_meas1_ic_ia1__out = (HIL_InFloat(0xc80000 + 0x42f));
    // Generated from the component: F1_CB4.Meas1.VA.Va1
    _f1_cb4_meas1_va_va1__out = (HIL_InFloat(0xc80000 + 0x418));
    // Generated from the component: F1_CB4.Meas1.VB.Va1
    _f1_cb4_meas1_vb_va1__out = (HIL_InFloat(0xc80000 + 0x419));
    // Generated from the component: F1_CB4.Meas1.VC.Va1
    _f1_cb4_meas1_vc_va1__out = (HIL_InFloat(0xc80000 + 0x41a));
    // Generated from the component: F1_CB4.Meas2.VA.Va1
    _f1_cb4_meas2_va_va1__out = (HIL_InFloat(0xc80000 + 0x41b));
    // Generated from the component: F1_CB4.Meas2.VB.Va1
    _f1_cb4_meas2_vb_va1__out = (HIL_InFloat(0xc80000 + 0x41c));
    // Generated from the component: F1_CB4.Meas2.VC.Va1
    _f1_cb4_meas2_vc_va1__out = (HIL_InFloat(0xc80000 + 0x41d));
    // Generated from the component: F1_CB5.F1_CB5
    _f1_cb5_f1_cb5__out = XIo_InInt32(0x55000120);
    // Generated from the component: F1_CB5.Meas1.IA.Ia1
    _f1_cb5_meas1_ia_ia1__out = (HIL_InFloat(0xc80000 + 0x430));
    // Generated from the component: F1_CB5.Meas1.IB.Ia1
    _f1_cb5_meas1_ib_ia1__out = (HIL_InFloat(0xc80000 + 0x431));
    // Generated from the component: F1_CB5.Meas1.IC.Ia1
    _f1_cb5_meas1_ic_ia1__out = (HIL_InFloat(0xc80000 + 0x432));
    // Generated from the component: F1_CB5.Meas1.VA.Va1
    _f1_cb5_meas1_va_va1__out = (HIL_InFloat(0xc80000 + 0x41e));
    // Generated from the component: F1_CB5.Meas1.VB.Va1
    _f1_cb5_meas1_vb_va1__out = (HIL_InFloat(0xc80000 + 0x41f));
    // Generated from the component: F1_CB5.Meas1.VC.Va1
    _f1_cb5_meas1_vc_va1__out = (HIL_InFloat(0xc80000 + 0x420));
    // Generated from the component: F1_CB5.Meas2.VA.Va1
    _f1_cb5_meas2_va_va1__out = (HIL_InFloat(0xc80000 + 0x421));
    // Generated from the component: F1_CB5.Meas2.VB.Va1
    _f1_cb5_meas2_vb_va1__out = (HIL_InFloat(0xc80000 + 0x422));
    // Generated from the component: F1_CB5.Meas2.VC.Va1
    _f1_cb5_meas2_vc_va1__out = (HIL_InFloat(0xc80000 + 0x423));
    // Generated from the component: F1_CB6.F1_CB6
    _f1_cb6_f1_cb6__out = XIo_InInt32(0x55000124);
    // Generated from the component: F1_CB6.Meas1.IA.Ia1
    _f1_cb6_meas1_ia_ia1__out = (HIL_InFloat(0xc80000 + 0x626));
    // Generated from the component: F1_CB6.Meas1.IB.Ia1
    _f1_cb6_meas1_ib_ia1__out = (HIL_InFloat(0xc80000 + 0x627));
    // Generated from the component: F1_CB6.Meas1.IC.Ia1
    _f1_cb6_meas1_ic_ia1__out = (HIL_InFloat(0xc80000 + 0x628));
    // Generated from the component: F1_CB6.Meas1.VA.Va1
    _f1_cb6_meas1_va_va1__out = (HIL_InFloat(0xc80000 + 0x616));
    // Generated from the component: F1_CB6.Meas1.VB.Va1
    _f1_cb6_meas1_vb_va1__out = (HIL_InFloat(0xc80000 + 0x617));
    // Generated from the component: F1_CB6.Meas1.VC.Va1
    _f1_cb6_meas1_vc_va1__out = (HIL_InFloat(0xc80000 + 0x618));
    // Generated from the component: F1_CB6.Meas2.VA.Va1
    _f1_cb6_meas2_va_va1__out = (HIL_InFloat(0xc80000 + 0x619));
    // Generated from the component: F1_CB6.Meas2.VB.Va1
    _f1_cb6_meas2_vb_va1__out = (HIL_InFloat(0xc80000 + 0x61a));
    // Generated from the component: F1_CB6.Meas2.VC.Va1
    _f1_cb6_meas2_vc_va1__out = (HIL_InFloat(0xc80000 + 0x61b));
    // Generated from the component: F1_CB7.F1_CB7
    _f1_cb7_f1_cb7__out = XIo_InInt32(0x55000128);
    // Generated from the component: F1_CB7.Meas1.IA.Ia1
    _f1_cb7_meas1_ia_ia1__out = (HIL_InFloat(0xc80000 + 0x629));
    // Generated from the component: F1_CB7.Meas1.IB.Ia1
    _f1_cb7_meas1_ib_ia1__out = (HIL_InFloat(0xc80000 + 0x62a));
    // Generated from the component: F1_CB7.Meas1.IC.Ia1
    _f1_cb7_meas1_ic_ia1__out = (HIL_InFloat(0xc80000 + 0x62b));
    // Generated from the component: F1_CB7.Meas1.VA.Va1
    _f1_cb7_meas1_va_va1__out = (HIL_InFloat(0xc80000 + 0x61c));
    // Generated from the component: F1_CB7.Meas1.VB.Va1
    _f1_cb7_meas1_vb_va1__out = (HIL_InFloat(0xc80000 + 0x61d));
    // Generated from the component: F1_CB7.Meas1.VC.Va1
    _f1_cb7_meas1_vc_va1__out = (HIL_InFloat(0xc80000 + 0x61e));
    // Generated from the component: F1_CB7.Meas2.VA.Va1
    _f1_cb7_meas2_va_va1__out = (HIL_InFloat(0xc80000 + 0x61f));
    // Generated from the component: F1_CB7.Meas2.VB.Va1
    _f1_cb7_meas2_vb_va1__out = (HIL_InFloat(0xc80000 + 0x620));
    // Generated from the component: F1_CB7.Meas2.VC.Va1
    _f1_cb7_meas2_vc_va1__out = (HIL_InFloat(0xc80000 + 0x621));
    // Generated from the component: F1_Motor.Chiller_compressor.Unit Delay1
    _f1_motor_chiller_compressor_unit_delay1__out = _f1_motor_chiller_compressor_unit_delay1__state;
    // Generated from the component: F1_Motor.IM.Machine Wrapper1
    HIL_OutFloat((0x800000 + 0x40000 * 0x0 + 0x18),  _f1_motor_im_machine_wrapper1__model_load);
    _f1_motor_im_machine_wrapper1__speed_out = (HIL_InFloat(0xc80000 + 0x800a));
    _f1_motor_im_machine_wrapper1__torque_out = (HIL_InFloat(0xc80000 + 0x8008));
    _f1_motor_im_machine_wrapper1__angle_out = (HIL_InFloat(0xc80000 + 0x800b));
    // Generated from the component: Microturbine1.BE1-25A Synchronizer.Constant6
    // Generated from the component: Microturbine1.BE1-25A Synchronizer.Constant7
    // Generated from the component: Microturbine1.BE1-25A Synchronizer.Constant9
    // Generated from the component: Microturbine1.BE1-25A Synchronizer.Unit Delay2
    _microturbine1_be1_25a_synchronizer_unit_delay2__out = _microturbine1_be1_25a_synchronizer_unit_delay2__state;
    // Generated from the component: Microturbine1.BE1-25A Synchronizer.Unit Delay5
    _microturbine1_be1_25a_synchronizer_unit_delay5__out = _microturbine1_be1_25a_synchronizer_unit_delay5__state;
    // Generated from the component: Microturbine1.BE1-25A Synchronizer.abc to qd.Constant2
    // Generated from the component: Microturbine1.BE1-25A Synchronizer.abc to qd.Constant3
    // Generated from the component: Microturbine1.BE1-25A Synchronizer.abc to qd1.Constant2
    // Generated from the component: Microturbine1.BE1-25A Synchronizer.abc to qd1.Constant3
    // Generated from the component: Microturbine1.CB_control.Constant1
    // Generated from the component: Microturbine1.CB_control.Constant10
    // Generated from the component: Microturbine1.CB_control.Constant11
    // Generated from the component: Microturbine1.CB_control.Grid_Islanded
    _microturbine1_cb_control_grid_islanded__out = XIo_InInt32(0x5500012c);
    // Generated from the component: Microturbine1.Connect MCB
    _microturbine1_connect_mcb__out = XIo_InFloat(0x55000130);
    // Generated from the component: Microturbine1.Connect MT
    _microturbine1_connect_mt__out = XIo_InFloat(0x55000134);
    // Generated from the component: Microturbine1.Constant1
    // Generated from the component: Microturbine1.Constant2
    // Generated from the component: Microturbine1.Ea1.Va1
    _microturbine1_ea1_va1__out = (HIL_InFloat(0xc80000 + 0x9));
    // Generated from the component: Microturbine1.Eb1.Va1
    _microturbine1_eb1_va1__out = (HIL_InFloat(0xc80000 + 0xa));
    // Generated from the component: Microturbine1.Ec1.Va1
    _microturbine1_ec1_va1__out = (HIL_InFloat(0xc80000 + 0xb));
    // Generated from the component: Microturbine1.Engine.Integrator1
    _microturbine1_engine_integrator1__out = _microturbine1_engine_integrator1__state;
    // Generated from the component: Microturbine1.Exciter.Constant1
    // Generated from the component: Microturbine1.Exciter.Rate Transition1.Output
    // Generated from the component: Microturbine1.Exciter.Rate Transition2.Output
    // Generated from the component: Microturbine1.Exciter.Rate Transition3.Output
    // Generated from the component: Microturbine1.Governor.AGC
    _microturbine1_governor_agc__out = XIo_InFloat(0x55000138);
    // Generated from the component: Microturbine1.Governor.AGC offset
    // Generated from the component: Microturbine1.Governor.Exciter Activation.Constant1
    // Generated from the component: Microturbine1.Governor.Exciter Activation.Constant2
    // Generated from the component: Microturbine1.Governor.Integrator1
    _microturbine1_governor_integrator1__out = _microturbine1_governor_integrator1__state;
    // Generated from the component: Microturbine1.Governor.Rate Transition1.Output
    // Generated from the component: Microturbine1.Governor.Rate Transition2.Output
    // Generated from the component: Microturbine1.Governor.Rate Transition3.Output
    // Generated from the component: Microturbine1.Synchonous Machine.Rate Transition2.Output
    // Generated from the component: Microturbine1.Three-phase Meter1.Ia.Ia1
    _microturbine1_three_phase_meter1_ia_ia1__out = (HIL_InFloat(0xc80000 + 0x19));
    // Generated from the component: Microturbine1.Three-phase Meter1.Ib.Ia1
    _microturbine1_three_phase_meter1_ib_ia1__out = (HIL_InFloat(0xc80000 + 0x1a));
    // Generated from the component: Microturbine1.Three-phase Meter1.Ic.Ia1
    _microturbine1_three_phase_meter1_ic_ia1__out = (HIL_InFloat(0xc80000 + 0x1b));
    // Generated from the component: Microturbine1.Three-phase Meter1.Va_G1.Va1
    _microturbine1_three_phase_meter1_va_g1_va1__out = (HIL_InFloat(0xc80000 + 0xc));
    // Generated from the component: Microturbine1.Three-phase Meter1.Vb_G1.Va1
    _microturbine1_three_phase_meter1_vb_g1_va1__out = (HIL_InFloat(0xc80000 + 0xd));
    // Generated from the component: Microturbine1.Three-phase Meter1.Vc_G1.Va1
    _microturbine1_three_phase_meter1_vc_g1_va1__out = (HIL_InFloat(0xc80000 + 0xe));
    // Generated from the component: Microturbine1.Vref
    _microturbine1_vref__out = XIo_InFloat(0x5500013c);
    // Generated from the component: Microturbine1.wref
    _microturbine1_wref__out = XIo_InFloat(0x55000140);
    // Generated from the component: 3ph Fault 103.S1.CTC_Wrapper
    if (_3ph_fault_103_ctrl__out == 0x0) {
        HIL_OutInt32(0x8240480, 0x0);
    }
    else {
        HIL_OutInt32(0x8240480, 0x1);
    }
    // Generated from the component: 3ph Fault 106.S1.ph_A.Isw
    HIL_OutInt32(141033728, _3ph_fault_106_ctrl__out);
    // Generated from the component: 3ph Fault 106.S1.ph_B.Isw
    HIL_OutInt32(141033729, _3ph_fault_106_ctrl__out);
    // Generated from the component: 3ph Fault 106.S1.ph_C.Isw
    HIL_OutInt32(141033730, _3ph_fault_106_ctrl__out);
    // Generated from the component: DIESEL_MCB.RMS value1
    _diesel_mcb_rms_value1__previous_filtered_value = _diesel_mcb_rms_value1__filtered_value;
    _diesel_mcb_rms_value1__filtered_value = _diesel_mcb_rms_value1__previous_filtered_value * 0.1 + _diesel_mcb_va_grid_2_va1__out * 0.9;
    if( (_diesel_mcb_rms_value1__filtered_value >= 0.0) && (_diesel_mcb_rms_value1__previous_filtered_value < 0.0) )
        _diesel_mcb_rms_value1__zc = 1;
    else
        _diesel_mcb_rms_value1__zc = 0;
    _diesel_mcb_rms_value1__out = _diesel_mcb_rms_value1__out_state;
    // Generated from the component: DIESEL_MCB.RMS value2
    _diesel_mcb_rms_value2__previous_filtered_value = _diesel_mcb_rms_value2__filtered_value;
    _diesel_mcb_rms_value2__filtered_value = _diesel_mcb_rms_value2__previous_filtered_value * 0.1 + _diesel_mcb_vb_grid_2_va1__out * 0.9;
    if( (_diesel_mcb_rms_value2__filtered_value >= 0.0) && (_diesel_mcb_rms_value2__previous_filtered_value < 0.0) )
        _diesel_mcb_rms_value2__zc = 1;
    else
        _diesel_mcb_rms_value2__zc = 0;
    _diesel_mcb_rms_value2__out = _diesel_mcb_rms_value2__out_state;
    // Generated from the component: DIESEL_MCB.RMS value3
    _diesel_mcb_rms_value3__previous_filtered_value = _diesel_mcb_rms_value3__filtered_value;
    _diesel_mcb_rms_value3__filtered_value = _diesel_mcb_rms_value3__previous_filtered_value * 0.1 + _diesel_mcb_vc_grid_2_va1__out * 0.9;
    if( (_diesel_mcb_rms_value3__filtered_value >= 0.0) && (_diesel_mcb_rms_value3__previous_filtered_value < 0.0) )
        _diesel_mcb_rms_value3__zc = 1;
    else
        _diesel_mcb_rms_value3__zc = 0;
    _diesel_mcb_rms_value3__out = _diesel_mcb_rms_value3__out_state;
    // Generated from the component: F1_CB1.Brk.S1.CTC_Wrapper
    if (_f1_cb1_f1_cb1__out == 0x0) {
        HIL_OutInt32(0x8a40480, 0x0);
    }
    else {
        HIL_OutInt32(0x8a40480, 0x1);
    }
    // Generated from the component: F1_CB1.Meas1.Bus Join2
    _f1_cb1_meas1_bus_join2__out[0] = _f1_cb1_meas1_ia_ia1__out;
    _f1_cb1_meas1_bus_join2__out[1] = _f1_cb1_meas1_ib_ia1__out;
    _f1_cb1_meas1_bus_join2__out[2] = _f1_cb1_meas1_ic_ia1__out;
    // Generated from the component: F1_CB1.Meas1.Bus Join1
    _f1_cb1_meas1_bus_join1__out[0] = _f1_cb1_meas1_va_va1__out;
    _f1_cb1_meas1_bus_join1__out[1] = _f1_cb1_meas1_vb_va1__out;
    _f1_cb1_meas1_bus_join1__out[2] = _f1_cb1_meas1_vc_va1__out;
    // Generated from the component: F1_CB1.Meas2.Bus Join1
    _f1_cb1_meas2_bus_join1__out[0] = _f1_cb1_meas2_va_va1__out;
    _f1_cb1_meas2_bus_join1__out[1] = _f1_cb1_meas2_vb_va1__out;
    _f1_cb1_meas2_bus_join1__out[2] = _f1_cb1_meas2_vc_va1__out;
    // Generated from the component: F1_CB10.Brk.S1.CTC_Wrapper
    if (_f1_cb10_f1_cb10__out == 0x0) {
        HIL_OutInt32(0x8640480, 0x0);
    }
    else {
        HIL_OutInt32(0x8640480, 0x1);
    }
    // Generated from the component: F1_CB10.Meas1.Bus Join2
    _f1_cb10_meas1_bus_join2__out[0] = _f1_cb10_meas1_ia_ia1__out;
    _f1_cb10_meas1_bus_join2__out[1] = _f1_cb10_meas1_ib_ia1__out;
    _f1_cb10_meas1_bus_join2__out[2] = _f1_cb10_meas1_ic_ia1__out;
    // Generated from the component: F1_CB10.Meas1.Bus Join1
    _f1_cb10_meas1_bus_join1__out[0] = _f1_cb10_meas1_va_va1__out;
    _f1_cb10_meas1_bus_join1__out[1] = _f1_cb10_meas1_vb_va1__out;
    _f1_cb10_meas1_bus_join1__out[2] = _f1_cb10_meas1_vc_va1__out;
    // Generated from the component: F1_CB10.Meas2.Bus Join1
    _f1_cb10_meas2_bus_join1__out[0] = _f1_cb10_meas2_va_va1__out;
    _f1_cb10_meas2_bus_join1__out[1] = _f1_cb10_meas2_vb_va1__out;
    _f1_cb10_meas2_bus_join1__out[2] = _f1_cb10_meas2_vc_va1__out;
    // Generated from the component: F1_CB14.Brk.S1.CTC_Wrapper
    if (_f1_cb14_f1_cb14__out == 0x0) {
        HIL_OutInt32(0x9240480, 0x0);
    }
    else {
        HIL_OutInt32(0x9240480, 0x1);
    }
    // Generated from the component: F1_CB14.Meas1.Bus Join2
    _f1_cb14_meas1_bus_join2__out[0] = _f1_cb14_meas1_ia_ia1__out;
    _f1_cb14_meas1_bus_join2__out[1] = _f1_cb14_meas1_ib_ia1__out;
    _f1_cb14_meas1_bus_join2__out[2] = _f1_cb14_meas1_ic_ia1__out;
    // Generated from the component: F1_CB14.Meas1.Bus Join1
    _f1_cb14_meas1_bus_join1__out[0] = _f1_cb14_meas1_va_va1__out;
    _f1_cb14_meas1_bus_join1__out[1] = _f1_cb14_meas1_vb_va1__out;
    _f1_cb14_meas1_bus_join1__out[2] = _f1_cb14_meas1_vc_va1__out;
    // Generated from the component: F1_CB14.Meas2.Bus Join1
    _f1_cb14_meas2_bus_join1__out[0] = _f1_cb14_meas2_va_va1__out;
    _f1_cb14_meas2_bus_join1__out[1] = _f1_cb14_meas2_vb_va1__out;
    _f1_cb14_meas2_bus_join1__out[2] = _f1_cb14_meas2_vc_va1__out;
    // Generated from the component: F1_CB2.Brk.S1.CTC_Wrapper
    if (_f1_cb2_f1_cb2__out == 0x0) {
        HIL_OutInt32(0x8e40480, 0x0);
    }
    else {
        HIL_OutInt32(0x8e40480, 0x1);
    }
    // Generated from the component: F1_CB2.Meas1.Bus Join2
    _f1_cb2_meas1_bus_join2__out[0] = _f1_cb2_meas1_ia_ia1__out;
    _f1_cb2_meas1_bus_join2__out[1] = _f1_cb2_meas1_ib_ia1__out;
    _f1_cb2_meas1_bus_join2__out[2] = _f1_cb2_meas1_ic_ia1__out;
    // Generated from the component: F1_CB2.Meas1.Bus Join1
    _f1_cb2_meas1_bus_join1__out[0] = _f1_cb2_meas1_va_va1__out;
    _f1_cb2_meas1_bus_join1__out[1] = _f1_cb2_meas1_vb_va1__out;
    _f1_cb2_meas1_bus_join1__out[2] = _f1_cb2_meas1_vc_va1__out;
    // Generated from the component: F1_CB2.Meas2.Bus Join1
    _f1_cb2_meas2_bus_join1__out[0] = _f1_cb2_meas2_va_va1__out;
    _f1_cb2_meas2_bus_join1__out[1] = _f1_cb2_meas2_vb_va1__out;
    _f1_cb2_meas2_bus_join1__out[2] = _f1_cb2_meas2_vc_va1__out;
    // Generated from the component: F1_CB3.Brk.S1.CTC_Wrapper
    if (_f1_cb3_brk_f1_cb3__out == 0x0) {
        HIL_OutInt32(0x9640480, 0x0);
    }
    else {
        HIL_OutInt32(0x9640480, 0x1);
    }
    // Generated from the component: F1_CB4.Brk.S1.CTC_Wrapper
    if (_f1_cb4_f1_cb4__out == 0x0) {
        HIL_OutInt32(0x8a40481, 0x0);
    }
    else {
        HIL_OutInt32(0x8a40481, 0x1);
    }
    // Generated from the component: F1_CB4.Meas1.Bus Join2
    _f1_cb4_meas1_bus_join2__out[0] = _f1_cb4_meas1_ia_ia1__out;
    _f1_cb4_meas1_bus_join2__out[1] = _f1_cb4_meas1_ib_ia1__out;
    _f1_cb4_meas1_bus_join2__out[2] = _f1_cb4_meas1_ic_ia1__out;
    // Generated from the component: F1_CB4.Meas1.Bus Join1
    _f1_cb4_meas1_bus_join1__out[0] = _f1_cb4_meas1_va_va1__out;
    _f1_cb4_meas1_bus_join1__out[1] = _f1_cb4_meas1_vb_va1__out;
    _f1_cb4_meas1_bus_join1__out[2] = _f1_cb4_meas1_vc_va1__out;
    // Generated from the component: F1_CB4.Meas2.Bus Join1
    _f1_cb4_meas2_bus_join1__out[0] = _f1_cb4_meas2_va_va1__out;
    _f1_cb4_meas2_bus_join1__out[1] = _f1_cb4_meas2_vb_va1__out;
    _f1_cb4_meas2_bus_join1__out[2] = _f1_cb4_meas2_vc_va1__out;
    // Generated from the component: F1_CB5.Brk.S1.CTC_Wrapper
    if (_f1_cb5_f1_cb5__out == 0x0) {
        HIL_OutInt32(0x8a40482, 0x0);
    }
    else {
        HIL_OutInt32(0x8a40482, 0x1);
    }
    // Generated from the component: F1_CB5.Meas1.Bus Join2
    _f1_cb5_meas1_bus_join2__out[0] = _f1_cb5_meas1_ia_ia1__out;
    _f1_cb5_meas1_bus_join2__out[1] = _f1_cb5_meas1_ib_ia1__out;
    _f1_cb5_meas1_bus_join2__out[2] = _f1_cb5_meas1_ic_ia1__out;
    // Generated from the component: F1_CB5.Meas1.Bus Join1
    _f1_cb5_meas1_bus_join1__out[0] = _f1_cb5_meas1_va_va1__out;
    _f1_cb5_meas1_bus_join1__out[1] = _f1_cb5_meas1_vb_va1__out;
    _f1_cb5_meas1_bus_join1__out[2] = _f1_cb5_meas1_vc_va1__out;
    // Generated from the component: F1_CB5.Meas2.Bus Join1
    _f1_cb5_meas2_bus_join1__out[0] = _f1_cb5_meas2_va_va1__out;
    _f1_cb5_meas2_bus_join1__out[1] = _f1_cb5_meas2_vb_va1__out;
    _f1_cb5_meas2_bus_join1__out[2] = _f1_cb5_meas2_vc_va1__out;
    // Generated from the component: F1_CB6.Brk.S1.CTC_Wrapper
    if (_f1_cb6_f1_cb6__out == 0x0) {
        HIL_OutInt32(0x8e40481, 0x0);
    }
    else {
        HIL_OutInt32(0x8e40481, 0x1);
    }
    // Generated from the component: F1_CB6.Meas1.Bus Join2
    _f1_cb6_meas1_bus_join2__out[0] = _f1_cb6_meas1_ia_ia1__out;
    _f1_cb6_meas1_bus_join2__out[1] = _f1_cb6_meas1_ib_ia1__out;
    _f1_cb6_meas1_bus_join2__out[2] = _f1_cb6_meas1_ic_ia1__out;
    // Generated from the component: F1_CB6.Meas1.Bus Join1
    _f1_cb6_meas1_bus_join1__out[0] = _f1_cb6_meas1_va_va1__out;
    _f1_cb6_meas1_bus_join1__out[1] = _f1_cb6_meas1_vb_va1__out;
    _f1_cb6_meas1_bus_join1__out[2] = _f1_cb6_meas1_vc_va1__out;
    // Generated from the component: F1_CB6.Meas2.Bus Join1
    _f1_cb6_meas2_bus_join1__out[0] = _f1_cb6_meas2_va_va1__out;
    _f1_cb6_meas2_bus_join1__out[1] = _f1_cb6_meas2_vb_va1__out;
    _f1_cb6_meas2_bus_join1__out[2] = _f1_cb6_meas2_vc_va1__out;
    // Generated from the component: F1_CB7.Brk.S1.CTC_Wrapper
    if (_f1_cb7_f1_cb7__out == 0x0) {
        HIL_OutInt32(0x8e40482, 0x0);
    }
    else {
        HIL_OutInt32(0x8e40482, 0x1);
    }
    // Generated from the component: F1_CB7.Meas1.Bus Join2
    _f1_cb7_meas1_bus_join2__out[0] = _f1_cb7_meas1_ia_ia1__out;
    _f1_cb7_meas1_bus_join2__out[1] = _f1_cb7_meas1_ib_ia1__out;
    _f1_cb7_meas1_bus_join2__out[2] = _f1_cb7_meas1_ic_ia1__out;
    // Generated from the component: F1_CB7.Meas1.Bus Join1
    _f1_cb7_meas1_bus_join1__out[0] = _f1_cb7_meas1_va_va1__out;
    _f1_cb7_meas1_bus_join1__out[1] = _f1_cb7_meas1_vb_va1__out;
    _f1_cb7_meas1_bus_join1__out[2] = _f1_cb7_meas1_vc_va1__out;
    // Generated from the component: F1_CB7.Meas2.Bus Join1
    _f1_cb7_meas2_bus_join1__out[0] = _f1_cb7_meas2_va_va1__out;
    _f1_cb7_meas2_bus_join1__out[1] = _f1_cb7_meas2_vb_va1__out;
    _f1_cb7_meas2_bus_join1__out[2] = _f1_cb7_meas2_vc_va1__out;
    // Generated from the component: F1_Motor.Chiller_compressor.Gain1
    _f1_motor_chiller_compressor_gain1__out = 9.5493 * _f1_motor_im_machine_wrapper1__speed_out;
    // Generated from the component: F1_Motor.Termination1
    // Generated from the component: Microturbine1.BE1-25A Synchronizer.abc to qd.Trigonometric function3
    _microturbine1_be1_25a_synchronizer_abc_to_qd_trigonometric_function3__out = cos(_microturbine1_be1_25a_synchronizer_unit_delay2__out);
    // Generated from the component: Microturbine1.BE1-25A Synchronizer.abc to qd.Trigonometric function5
    _microturbine1_be1_25a_synchronizer_abc_to_qd_trigonometric_function5__out = sin(_microturbine1_be1_25a_synchronizer_unit_delay2__out);
    // Generated from the component: Microturbine1.BE1-25A Synchronizer.abc to qd1.confine phase
    _microturbine1_be1_25a_synchronizer_abc_to_qd1_confine_phase__in = _microturbine1_be1_25a_synchronizer_unit_delay2__out;
    _microturbine1_be1_25a_synchronizer_abc_to_qd1_confine_phase__x = _microturbine1_be1_25a_synchronizer_abc_to_qd1_confine_phase__in / 6.283185307179586;
    _microturbine1_be1_25a_synchronizer_abc_to_qd1_confine_phase__floor_in = floor(_microturbine1_be1_25a_synchronizer_abc_to_qd1_confine_phase__x);
    _microturbine1_be1_25a_synchronizer_abc_to_qd1_confine_phase__out = _microturbine1_be1_25a_synchronizer_abc_to_qd1_confine_phase__in - (6.283185307179586 * _microturbine1_be1_25a_synchronizer_abc_to_qd1_confine_phase__floor_in);
    // Generated from the component: Microturbine1.BE1-25A Synchronizer.thetaPLL
    HIL_OutAO(0x4013, (float)_microturbine1_be1_25a_synchronizer_unit_delay2__out);
    // Generated from the component: Microturbine1.BE1-25A Synchronizer.Digital Probe1
    HIL_OutInt32(0xf00400, _microturbine1_be1_25a_synchronizer_unit_delay5__out != 0x0);
    // Generated from the component: Microturbine1.BE1-25A Synchronizer.Logical operator2
    _microturbine1_be1_25a_synchronizer_logical_operator2__out = !_microturbine1_be1_25a_synchronizer_unit_delay5__out;
    // Generated from the component: Microturbine1.BE1-25A Synchronizer.abc to qd.Sum2
    _microturbine1_be1_25a_synchronizer_abc_to_qd_sum2__out = _microturbine1_be1_25a_synchronizer_unit_delay2__out - _microturbine1_be1_25a_synchronizer_abc_to_qd_constant2__out;
    // Generated from the component: Microturbine1.BE1-25A Synchronizer.abc to qd.Sum4
    _microturbine1_be1_25a_synchronizer_abc_to_qd_sum4__out = _microturbine1_be1_25a_synchronizer_unit_delay2__out + _microturbine1_be1_25a_synchronizer_abc_to_qd_constant3__out;
    // Generated from the component: Microturbine1.CB_control.Logical operator9
    _microturbine1_cb_control_logical_operator9__out = !_microturbine1_cb_control_grid_islanded__out;
    // Generated from the component: DIESEL_MCB.DG_MCB.CTC_Wrapper
    if (_microturbine1_connect_mcb__out == 0x0) {
        HIL_OutInt32(0x8240481, 0x0);
    }
    else {
        HIL_OutInt32(0x8240481, 0x1);
    }
    // Generated from the component: Microturbine1.CB_control.Logical operator4
    _microturbine1_cb_control_logical_operator4__out = !_microturbine1_connect_mcb__out;
    // Generated from the component: Microturbine1.CB_control.MCB ON
    HIL_OutInt32(0xf0040a, _microturbine1_connect_mcb__out != 0x0);
    // Generated from the component: Microturbine1.CB_control.Logical operator2
    _microturbine1_cb_control_logical_operator2__out = _microturbine1_connect_mt__out && _microturbine1_connect_mcb__out ;
    // Generated from the component: Microturbine1.Engine.Gain2
    _microturbine1_engine_gain2__out = 18568.076694054456 * _microturbine1_engine_integrator1__out;
    // Generated from the component: Microturbine1.Exciter.Integrator1
    if (((_microturbine1_exciter_rate_transition1_output__out > 0.0) && (_microturbine1_exciter_integrator1__reset_state <= 0)) || ((_microturbine1_exciter_rate_transition1_output__out <= 0.0) && (_microturbine1_exciter_integrator1__reset_state == 1))) {
        _microturbine1_exciter_integrator1__state = 0.0;
    }
    _microturbine1_exciter_integrator1__out = _microturbine1_exciter_integrator1__state;
    // Generated from the component: Microturbine1.Exciter.Integrator2
    if (((_microturbine1_exciter_rate_transition1_output__out > 0.0) && (_microturbine1_exciter_integrator2__reset_state <= 0)) || ((_microturbine1_exciter_rate_transition1_output__out <= 0.0) && (_microturbine1_exciter_integrator2__reset_state == 1))) {
        _microturbine1_exciter_integrator2__state = 0.0;
    }
    _microturbine1_exciter_integrator2__out = _microturbine1_exciter_integrator2__state;
    // Generated from the component: Microturbine1.Exciter.Integrator3
    if (((_microturbine1_exciter_rate_transition1_output__out > 0.0) && (_microturbine1_exciter_integrator3__reset_state <= 0)) || ((_microturbine1_exciter_rate_transition1_output__out <= 0.0) && (_microturbine1_exciter_integrator3__reset_state == 1))) {
        _microturbine1_exciter_integrator3__state = 0.0;
    }
    _microturbine1_exciter_integrator3__out = _microturbine1_exciter_integrator3__state;
    // Generated from the component: Microturbine1.Exciter.Integrator4
    if (((_microturbine1_exciter_rate_transition1_output__out > 0.0) && (_microturbine1_exciter_integrator4__reset_state <= 0)) || ((_microturbine1_exciter_rate_transition1_output__out <= 0.0) && (_microturbine1_exciter_integrator4__reset_state == 1))) {
        _microturbine1_exciter_integrator4__state = 0.0;
    }
    _microturbine1_exciter_integrator4__out = _microturbine1_exciter_integrator4__state;
    // Generated from the component: Microturbine1.Exciter.Logical operator1
    _microturbine1_exciter_logical_operator1__out = !_microturbine1_exciter_rate_transition1_output__out;
    // Generated from the component: Microturbine1.Exciter.PI.Integrator1
    if (((_microturbine1_exciter_rate_transition1_output__out > 0.0) && (_microturbine1_exciter_pi_integrator1__reset_state <= 0)) || ((_microturbine1_exciter_rate_transition1_output__out <= 0.0) && (_microturbine1_exciter_pi_integrator1__reset_state == 1))) {
        _microturbine1_exciter_pi_integrator1__state = 0.0;
    }
    _microturbine1_exciter_pi_integrator1__out = _microturbine1_exciter_pi_integrator1__state;
    // Generated from the component: Microturbine1.Exciter.exciter ON
    HIL_OutInt32(0xf0040e, _microturbine1_exciter_rate_transition1_output__out != 0x0);
    // Generated from the component: Microturbine1.Governor.Sum11
    _microturbine1_governor_sum11__out = _microturbine1_governor_agc_offset__out + _microturbine1_governor_agc__out;
    // Generated from the component: Microturbine1.Engine.Sum1
    _microturbine1_engine_sum1__out =  - _microturbine1_engine_integrator1__out + _microturbine1_governor_integrator1__out;
    // Generated from the component: Microturbine1.Governor.P_sv
    HIL_OutAO(0x4022, (float)_microturbine1_governor_integrator1__out);
    // Generated from the component: Microturbine1.Governor.Gain28
    _microturbine1_governor_gain28__out = 0.005305164769729845 * _microturbine1_governor_rate_transition2_output__out;
    // Generated from the component: Microturbine1.Exciter.Rate Transition1.Input
    _microturbine1_exciter_rate_transition1_output__out = _microturbine1_governor_rate_transition3_output__out;
    // Generated from the component: Microturbine1.Gain1
    _microturbine1_gain1__out = 0.20943951023931953 * _microturbine1_synchonous_machine_rate_transition2_output__out;
    // Generated from the component: Microturbine1.w_M
    HIL_OutAO(0x4030, (float)_microturbine1_synchonous_machine_rate_transition2_output__out);
    // Generated from the component: Microturbine1.Three-phase Meter1.PQ measure.PQ Power Meter1
    _microturbine1_three_phase_meter1_pq_measure_pq_power_meter1__v_alpha = SQRT_2OVER3 * ( _microturbine1_three_phase_meter1_va_g1_va1__out - 0.5f * _microturbine1_three_phase_meter1_vb_g1_va1__out - 0.5f * _microturbine1_three_phase_meter1_vc_g1_va1__out);
    _microturbine1_three_phase_meter1_pq_measure_pq_power_meter1__v_beta = SQRT_2OVER3 * (SQRT3_OVER_2 * _microturbine1_three_phase_meter1_vb_g1_va1__out - SQRT3_OVER_2 * _microturbine1_three_phase_meter1_vc_g1_va1__out);
    _microturbine1_three_phase_meter1_pq_measure_pq_power_meter1__i_alpha = SQRT_2OVER3 * ( _microturbine1_three_phase_meter1_ia_ia1__out - 0.5f * _microturbine1_three_phase_meter1_ib_ia1__out - 0.5f * _microturbine1_three_phase_meter1_ic_ia1__out);
    _microturbine1_three_phase_meter1_pq_measure_pq_power_meter1__i_beta = SQRT_2OVER3 * (SQRT3_OVER_2 * _microturbine1_three_phase_meter1_ib_ia1__out - SQRT3_OVER_2 * _microturbine1_three_phase_meter1_ic_ia1__out);
    _microturbine1_three_phase_meter1_pq_measure_pq_power_meter1__v_zero = ONE_DIV_BY_SQRT_3 * (_microturbine1_three_phase_meter1_va_g1_va1__out + _microturbine1_three_phase_meter1_vb_g1_va1__out + _microturbine1_three_phase_meter1_vc_g1_va1__out);
    _microturbine1_three_phase_meter1_pq_measure_pq_power_meter1__i_zero = ONE_DIV_BY_SQRT_3 * (_microturbine1_three_phase_meter1_ia_ia1__out + _microturbine1_three_phase_meter1_ib_ia1__out + _microturbine1_three_phase_meter1_ic_ia1__out);
    _microturbine1_three_phase_meter1_pq_measure_pq_power_meter1__Pac = _microturbine1_three_phase_meter1_pq_measure_pq_power_meter1__v_alpha * _microturbine1_three_phase_meter1_pq_measure_pq_power_meter1__i_alpha + _microturbine1_three_phase_meter1_pq_measure_pq_power_meter1__v_beta * _microturbine1_three_phase_meter1_pq_measure_pq_power_meter1__i_beta;
    _microturbine1_three_phase_meter1_pq_measure_pq_power_meter1__Qac = _microturbine1_three_phase_meter1_pq_measure_pq_power_meter1__v_beta * _microturbine1_three_phase_meter1_pq_measure_pq_power_meter1__i_alpha - _microturbine1_three_phase_meter1_pq_measure_pq_power_meter1__v_alpha * _microturbine1_three_phase_meter1_pq_measure_pq_power_meter1__i_beta;
    _microturbine1_three_phase_meter1_pq_measure_pq_power_meter1__P0ac = _microturbine1_three_phase_meter1_pq_measure_pq_power_meter1__v_zero * _microturbine1_three_phase_meter1_pq_measure_pq_power_meter1__i_zero;
    _microturbine1_three_phase_meter1_pq_measure_pq_power_meter1__filter_1_output = 0.08613019954354689 * (_microturbine1_three_phase_meter1_pq_measure_pq_power_meter1__Pac + _microturbine1_three_phase_meter1_pq_measure_pq_power_meter1__filter_1_input_k_minus_1) - (-0.8277396009129062) * _microturbine1_three_phase_meter1_pq_measure_pq_power_meter1__filter_1_output_k_minus_1;
    _microturbine1_three_phase_meter1_pq_measure_pq_power_meter1__filter_1_outputQ = 0.08613019954354689 * (_microturbine1_three_phase_meter1_pq_measure_pq_power_meter1__Qac + _microturbine1_three_phase_meter1_pq_measure_pq_power_meter1__filter_1_input_k_minus_1Q) - (-0.8277396009129062) * _microturbine1_three_phase_meter1_pq_measure_pq_power_meter1__filter_1_output_k_minus_1Q;
    _microturbine1_three_phase_meter1_pq_measure_pq_power_meter1__filter_1_outputP0 = 0.08613019954354689 * (_microturbine1_three_phase_meter1_pq_measure_pq_power_meter1__P0ac + _microturbine1_three_phase_meter1_pq_measure_pq_power_meter1__filter_1_input_k_minus_1P0) - (-0.8277396009129062) * _microturbine1_three_phase_meter1_pq_measure_pq_power_meter1__filter_1_output_k_minus_1P0;
    _microturbine1_three_phase_meter1_pq_measure_pq_power_meter1__filter_1_input_k_minus_1 = _microturbine1_three_phase_meter1_pq_measure_pq_power_meter1__Pac;
    _microturbine1_three_phase_meter1_pq_measure_pq_power_meter1__filter_1_output_k_minus_1 = _microturbine1_three_phase_meter1_pq_measure_pq_power_meter1__filter_1_output;
    _microturbine1_three_phase_meter1_pq_measure_pq_power_meter1__filter_1_input_k_minus_1Q = _microturbine1_three_phase_meter1_pq_measure_pq_power_meter1__Qac;;
    _microturbine1_three_phase_meter1_pq_measure_pq_power_meter1__filter_1_output_k_minus_1Q = _microturbine1_three_phase_meter1_pq_measure_pq_power_meter1__filter_1_outputQ;
    _microturbine1_three_phase_meter1_pq_measure_pq_power_meter1__filter_1_input_k_minus_1P0 = _microturbine1_three_phase_meter1_pq_measure_pq_power_meter1__P0ac;
    _microturbine1_three_phase_meter1_pq_measure_pq_power_meter1__filter_1_output_k_minus_1P0 = _microturbine1_three_phase_meter1_pq_measure_pq_power_meter1__filter_1_outputP0;
    _microturbine1_three_phase_meter1_pq_measure_pq_power_meter1__Pdc = _microturbine1_three_phase_meter1_pq_measure_pq_power_meter1__filter_1_output;
    _microturbine1_three_phase_meter1_pq_measure_pq_power_meter1__Qdc = _microturbine1_three_phase_meter1_pq_measure_pq_power_meter1__filter_1_outputQ;
    _microturbine1_three_phase_meter1_pq_measure_pq_power_meter1__P0dc = _microturbine1_three_phase_meter1_pq_measure_pq_power_meter1__filter_1_outputP0;
    _microturbine1_three_phase_meter1_pq_measure_pq_power_meter1__apparent = sqrt(pow(_microturbine1_three_phase_meter1_pq_measure_pq_power_meter1__Pdc, 2) + pow(_microturbine1_three_phase_meter1_pq_measure_pq_power_meter1__Qdc, 2));
    if (_microturbine1_three_phase_meter1_pq_measure_pq_power_meter1__apparent > 0)
        _microturbine1_three_phase_meter1_pq_measure_pq_power_meter1__k_factor = _microturbine1_three_phase_meter1_pq_measure_pq_power_meter1__Pdc / _microturbine1_three_phase_meter1_pq_measure_pq_power_meter1__apparent;
    else
        _microturbine1_three_phase_meter1_pq_measure_pq_power_meter1__k_factor = 0;
    // Generated from the component: DIESEL_MCB.VA_grid2rms
    HIL_OutAO(0x4007, (float)_diesel_mcb_rms_value1__out);
    // Generated from the component: DIESEL_MCB.VB_grid2rms
    HIL_OutAO(0x4008, (float)_diesel_mcb_rms_value2__out);
    // Generated from the component: DIESEL_MCB.VC_grid2rms
    HIL_OutAO(0x4009, (float)_diesel_mcb_rms_value3__out);
    // Generated from the component: F1_CB1.Termination2
    // Generated from the component: F1_CB1.Termination1
    // Generated from the component: F1_CB1.Termination3
    // Generated from the component: F1_CB10.Termination4
    // Generated from the component: F1_CB10.Termination5
    // Generated from the component: F1_CB10.Termination3
    // Generated from the component: F1_CB14.Termination4
    // Generated from the component: F1_CB14.Termination5
    // Generated from the component: F1_CB14.Termination3
    // Generated from the component: F1_CB2.Termination4
    // Generated from the component: F1_CB2.Termination5
    // Generated from the component: F1_CB2.Termination3
    // Generated from the component: F1_CB4.Termination4
    // Generated from the component: F1_CB4.Termination5
    // Generated from the component: F1_CB4.Termination3
    // Generated from the component: F1_CB5.Termination4
    // Generated from the component: F1_CB5.Termination5
    // Generated from the component: F1_CB5.Termination3
    // Generated from the component: F1_CB6.Termination4
    // Generated from the component: F1_CB6.Termination5
    // Generated from the component: F1_CB6.Termination3
    // Generated from the component: F1_CB7.Termination4
    // Generated from the component: F1_CB7.Termination5
    // Generated from the component: F1_CB7.Termination3
    // Generated from the component: F1_Motor.Chiller_compressor.C function1
    _f1_motor_chiller_compressor_c_function1__w = _f1_motor_chiller_compressor_gain1__out;
    _f1_motor_chiller_compressor_c_function1__T = 0.1118 * _f1_motor_chiller_compressor_c_function1__w + 0.000861 * powf(_f1_motor_chiller_compressor_c_function1__w, 2) - 3.371e-7 * powf(_f1_motor_chiller_compressor_c_function1__w, 3);
    // Generated from the component: Microturbine1.BE1-25A Synchronizer.abc to qd.Product1
    _microturbine1_be1_25a_synchronizer_abc_to_qd_product1__out = (_microturbine1_three_phase_meter1_va_g1_va1__out * _microturbine1_be1_25a_synchronizer_abc_to_qd_trigonometric_function3__out);
    // Generated from the component: Microturbine1.BE1-25A Synchronizer.abc to qd.Product4
    _microturbine1_be1_25a_synchronizer_abc_to_qd_product4__out = (_microturbine1_three_phase_meter1_va_g1_va1__out * _microturbine1_be1_25a_synchronizer_abc_to_qd_trigonometric_function5__out);
    // Generated from the component: Microturbine1.BE1-25A Synchronizer.abc to qd1.Sum2
    _microturbine1_be1_25a_synchronizer_abc_to_qd1_sum2__out = _microturbine1_be1_25a_synchronizer_abc_to_qd1_confine_phase__out - _microturbine1_be1_25a_synchronizer_abc_to_qd1_constant2__out;
    // Generated from the component: Microturbine1.BE1-25A Synchronizer.abc to qd1.Sum4
    _microturbine1_be1_25a_synchronizer_abc_to_qd1_sum4__out = _microturbine1_be1_25a_synchronizer_abc_to_qd1_confine_phase__out + _microturbine1_be1_25a_synchronizer_abc_to_qd1_constant3__out;
    // Generated from the component: Microturbine1.BE1-25A Synchronizer.abc to qd1.Trigonometric function3
    _microturbine1_be1_25a_synchronizer_abc_to_qd1_trigonometric_function3__out = cos(_microturbine1_be1_25a_synchronizer_abc_to_qd1_confine_phase__out);
    // Generated from the component: Microturbine1.BE1-25A Synchronizer.abc to qd1.Trigonometric function5
    _microturbine1_be1_25a_synchronizer_abc_to_qd1_trigonometric_function5__out = sin(_microturbine1_be1_25a_synchronizer_abc_to_qd1_confine_phase__out);
    // Generated from the component: Microturbine1.BE1-25A Synchronizer.Digital Probe6
    HIL_OutInt32(0xf00404, _microturbine1_be1_25a_synchronizer_logical_operator2__out != 0x0);
    // Generated from the component: Microturbine1.BE1-25A Synchronizer.abc to qd.Trigonometric function2
    _microturbine1_be1_25a_synchronizer_abc_to_qd_trigonometric_function2__out = cos(_microturbine1_be1_25a_synchronizer_abc_to_qd_sum2__out);
    // Generated from the component: Microturbine1.BE1-25A Synchronizer.abc to qd.Trigonometric function6
    _microturbine1_be1_25a_synchronizer_abc_to_qd_trigonometric_function6__out = sin(_microturbine1_be1_25a_synchronizer_abc_to_qd_sum2__out);
    // Generated from the component: Microturbine1.BE1-25A Synchronizer.abc to qd.Trigonometric function4
    _microturbine1_be1_25a_synchronizer_abc_to_qd_trigonometric_function4__out = cos(_microturbine1_be1_25a_synchronizer_abc_to_qd_sum4__out);
    // Generated from the component: Microturbine1.BE1-25A Synchronizer.abc to qd.Trigonometric function7
    _microturbine1_be1_25a_synchronizer_abc_to_qd_trigonometric_function7__out = sin(_microturbine1_be1_25a_synchronizer_abc_to_qd_sum4__out);
    // Generated from the component: Microturbine1.CB_control.MCB OFF
    HIL_OutInt32(0xf00409, _microturbine1_cb_control_logical_operator4__out != 0x0);
    // Generated from the component: Microturbine1.Synchonous Machine.Rate Transition1.Input
    _microturbine1_synchonous_machine_rate_transition1_output__out = _microturbine1_engine_gain2__out;
    // Generated from the component: Microturbine1.Exciter.E_f_M
    HIL_OutAO(0x401c, (float)_microturbine1_exciter_integrator1__out);
    // Generated from the component: Microturbine1.Exciter.Gain2
    _microturbine1_exciter_gain2__out = 1.0 * _microturbine1_exciter_integrator1__out;
    // Generated from the component: Microturbine1.Exciter.Gain3
    _microturbine1_exciter_gain3__out = 0.0 * _microturbine1_exciter_integrator1__out;
    // Generated from the component: Microturbine1.Exciter.Gain5
    _microturbine1_exciter_gain5__out = 0.0 * _microturbine1_exciter_integrator1__out;
    // Generated from the component: Microturbine1.Exciter.PI.Ki
    _microturbine1_exciter_pi_ki__out = 1.19 * _microturbine1_exciter_integrator1__out;
    // Generated from the component: Microturbine1.Exciter.PI.Kp
    _microturbine1_exciter_pi_kp__out = 1.16 * _microturbine1_exciter_integrator1__out;
    // Generated from the component: Microturbine1.Exciter.Gain7
    _microturbine1_exciter_gain7__out = 20.0 * _microturbine1_exciter_integrator2__out;
    // Generated from the component: Microturbine1.Exciter.R_F_M
    HIL_OutAO(0x401e, (float)_microturbine1_exciter_integrator2__out);
    // Generated from the component: Microturbine1.Exciter.V_R_M
    HIL_OutAO(0x401f, (float)_microturbine1_exciter_integrator3__out);
    // Generated from the component: Microturbine1.Exciter.E_t_M
    HIL_OutAO(0x401d, (float)_microturbine1_exciter_integrator4__out);
    // Generated from the component: Microturbine1.Exciter.Sum4
    _microturbine1_exciter_sum4__out = _microturbine1_exciter_rate_transition2_output__out - _microturbine1_exciter_integrator4__out;
    // Generated from the component: Microturbine1.Exciter.Sum5
    _microturbine1_exciter_sum5__out =  - _microturbine1_exciter_integrator4__out + _microturbine1_exciter_rate_transition3_output__out;
    // Generated from the component: Microturbine1.Exciter.exciter OFF
    HIL_OutInt32(0xf0040d, _microturbine1_exciter_logical_operator1__out != 0x0);
    // Generated from the component: Microturbine1.Governor.Gain37
    _microturbine1_governor_gain37__out = 2.857142857142857e-07 * _microturbine1_governor_sum11__out;
    // Generated from the component: Microturbine1.Engine.Gain1
    _microturbine1_engine_gain1__out = 41.666666666666664 * _microturbine1_engine_sum1__out;
    // Generated from the component: Microturbine1.Governor.Exciter Activation.Sum1
    _microturbine1_governor_exciter_activation_sum1__out = _microturbine1_governor_exciter_activation_constant2__out - _microturbine1_governor_gain28__out;
    // Generated from the component: Microturbine1.Governor.Sum7
    _microturbine1_governor_sum7__out = _microturbine1_governor_rate_transition1_output__out - _microturbine1_governor_gain28__out;
    // Generated from the component: Microturbine1.BE1-25A Synchronizer.Gain4
    _microturbine1_be1_25a_synchronizer_gain4__out = 0.0026525823848649226 * _microturbine1_gain1__out;
    // Generated from the component: Microturbine1.CB_control.Gain13
    _microturbine1_cb_control_gain13__out = 0.0026525823848649226 * _microturbine1_gain1__out;
    // Generated from the component: Microturbine1.Gain18
    _microturbine1_gain18__out = 0.5 * _microturbine1_gain1__out;
    // Generated from the component: Microturbine1.Three-phase Meter1.POWER_P
    HIL_OutAO(0x402d, (float)_microturbine1_three_phase_meter1_pq_measure_pq_power_meter1__Pdc);
    // Generated from the component: Microturbine1.Three-phase Meter1.POWER_Q
    HIL_OutAO(0x402e, (float)_microturbine1_three_phase_meter1_pq_measure_pq_power_meter1__Qdc);
    // Generated from the component: Microturbine1.Three-phase Meter1.POWER_S
    HIL_OutAO(0x402f, (float)_microturbine1_three_phase_meter1_pq_measure_pq_power_meter1__apparent);
    // Generated from the component: Microturbine1.Three-phase Meter1.PQ measure.Termination1
    // Generated from the component: Microturbine1.Three-phase Meter1.PQ measure.Termination2
    // Generated from the component: Microturbine1.Three-phase Meter1.PQ measure.Termination4
    // Generated from the component: Microturbine1.BE1-25A Synchronizer.abc to qd1.Trigonometric function2
    _microturbine1_be1_25a_synchronizer_abc_to_qd1_trigonometric_function2__out = cos(_microturbine1_be1_25a_synchronizer_abc_to_qd1_sum2__out);
    // Generated from the component: Microturbine1.BE1-25A Synchronizer.abc to qd1.Trigonometric function6
    _microturbine1_be1_25a_synchronizer_abc_to_qd1_trigonometric_function6__out = sin(_microturbine1_be1_25a_synchronizer_abc_to_qd1_sum2__out);
    // Generated from the component: Microturbine1.BE1-25A Synchronizer.abc to qd1.Trigonometric function4
    _microturbine1_be1_25a_synchronizer_abc_to_qd1_trigonometric_function4__out = cos(_microturbine1_be1_25a_synchronizer_abc_to_qd1_sum4__out);
    // Generated from the component: Microturbine1.BE1-25A Synchronizer.abc to qd1.Trigonometric function7
    _microturbine1_be1_25a_synchronizer_abc_to_qd1_trigonometric_function7__out = sin(_microturbine1_be1_25a_synchronizer_abc_to_qd1_sum4__out);
    // Generated from the component: Microturbine1.BE1-25A Synchronizer.abc to qd1.Product1
    _microturbine1_be1_25a_synchronizer_abc_to_qd1_product1__out = (_microturbine1_ea1_va1__out * _microturbine1_be1_25a_synchronizer_abc_to_qd1_trigonometric_function3__out);
    // Generated from the component: Microturbine1.BE1-25A Synchronizer.abc to qd1.Product4
    _microturbine1_be1_25a_synchronizer_abc_to_qd1_product4__out = (_microturbine1_ea1_va1__out * _microturbine1_be1_25a_synchronizer_abc_to_qd1_trigonometric_function5__out);
    // Generated from the component: Microturbine1.BE1-25A Synchronizer.abc to qd.Product2
    _microturbine1_be1_25a_synchronizer_abc_to_qd_product2__out = (_microturbine1_three_phase_meter1_vb_g1_va1__out * _microturbine1_be1_25a_synchronizer_abc_to_qd_trigonometric_function2__out);
    // Generated from the component: Microturbine1.BE1-25A Synchronizer.abc to qd.Product5
    _microturbine1_be1_25a_synchronizer_abc_to_qd_product5__out = (_microturbine1_three_phase_meter1_vb_g1_va1__out * _microturbine1_be1_25a_synchronizer_abc_to_qd_trigonometric_function6__out);
    // Generated from the component: Microturbine1.BE1-25A Synchronizer.abc to qd.Product3
    _microturbine1_be1_25a_synchronizer_abc_to_qd_product3__out = (_microturbine1_three_phase_meter1_vc_g1_va1__out * _microturbine1_be1_25a_synchronizer_abc_to_qd_trigonometric_function4__out);
    // Generated from the component: Microturbine1.BE1-25A Synchronizer.abc to qd.Product6
    _microturbine1_be1_25a_synchronizer_abc_to_qd_product6__out = (_microturbine1_three_phase_meter1_vc_g1_va1__out * _microturbine1_be1_25a_synchronizer_abc_to_qd_trigonometric_function7__out);
    // Generated from the component: Microturbine1.Exciter.Sum1
    _microturbine1_exciter_sum1__out =  - _microturbine1_exciter_gain2__out + _microturbine1_exciter_integrator3__out;
    // Generated from the component: Microturbine1.Exciter.Sum2
    _microturbine1_exciter_sum2__out =  - _microturbine1_exciter_integrator2__out + _microturbine1_exciter_gain3__out;
    // Generated from the component: Microturbine1.Exciter.PI.Sum5
    _microturbine1_exciter_pi_sum5__out = _microturbine1_exciter_pi_kp__out + _microturbine1_exciter_pi_integrator1__out;
    // Generated from the component: Microturbine1.Exciter.|V|1
    _microturbine1_exciter__v_1__out = (_microturbine1_exciter_rate_transition1_output__out != 1.0) ? _microturbine1_exciter_constant1__out : _microturbine1_exciter_sum4__out;
    // Generated from the component: Microturbine1.Exciter.Gain9
    _microturbine1_exciter_gain9__out = 1000.0 * _microturbine1_exciter_sum5__out;
    // Generated from the component: Microturbine1.Governor.Sum2
    _microturbine1_governor_sum2__out = _microturbine1_governor_gain37__out - _microturbine1_governor_integrator1__out;
    // Generated from the component: Microturbine1.Governor.Exciter Activation.Abs1
    _microturbine1_governor_exciter_activation_abs1__out = fabs(_microturbine1_governor_exciter_activation_sum1__out);
    // Generated from the component: Microturbine1.Governor.Exciter Activation.speed difference
    HIL_OutAO(0x4021, (float)_microturbine1_governor_exciter_activation_sum1__out);
    // Generated from the component: Microturbine1.Governor.Rate Limiter2
    if (_microturbine1_governor_rate_limiter2__first_step) {
        _microturbine1_governor_rate_limiter2__out = _microturbine1_governor_sum7__out;
    } else {
        _microturbine1_governor_rate_limiter2__out = _microturbine1_governor_sum7__out;
        _microturbine1_governor_rate_limiter2__in_rate = _microturbine1_governor_sum7__out - _microturbine1_governor_rate_limiter2__prev_out;
        if (_microturbine1_governor_rate_limiter2__in_rate > 0.005) {
            _microturbine1_governor_rate_limiter2__out = _microturbine1_governor_rate_limiter2__prev_out + (0.005);
        }
        if (_microturbine1_governor_rate_limiter2__in_rate < -0.005) {
            _microturbine1_governor_rate_limiter2__out = _microturbine1_governor_rate_limiter2__prev_out + (-0.005);
        }
    }
    // Generated from the component: Microturbine1.BE1-25A Synchronizer.w_G
    HIL_OutAO(0x4017, (float)_microturbine1_be1_25a_synchronizer_gain4__out);
    // Generated from the component: Microturbine1.CB_control.Sum10
    _microturbine1_cb_control_sum10__out =  - _microturbine1_cb_control_constant1__out + _microturbine1_cb_control_gain13__out;
    // Generated from the component: Microturbine1.Governor.Rate Transition2.Input
    _microturbine1_governor_rate_transition2_output__out = _microturbine1_gain18__out;
    // Generated from the component: Microturbine1.BE1-25A Synchronizer.abc to qd1.Product2
    _microturbine1_be1_25a_synchronizer_abc_to_qd1_product2__out = (_microturbine1_eb1_va1__out * _microturbine1_be1_25a_synchronizer_abc_to_qd1_trigonometric_function2__out);
    // Generated from the component: Microturbine1.BE1-25A Synchronizer.abc to qd1.Product5
    _microturbine1_be1_25a_synchronizer_abc_to_qd1_product5__out = (_microturbine1_eb1_va1__out * _microturbine1_be1_25a_synchronizer_abc_to_qd1_trigonometric_function6__out);
    // Generated from the component: Microturbine1.BE1-25A Synchronizer.abc to qd1.Product3
    _microturbine1_be1_25a_synchronizer_abc_to_qd1_product3__out = (_microturbine1_ec1_va1__out * _microturbine1_be1_25a_synchronizer_abc_to_qd1_trigonometric_function4__out);
    // Generated from the component: Microturbine1.BE1-25A Synchronizer.abc to qd1.Product6
    _microturbine1_be1_25a_synchronizer_abc_to_qd1_product6__out = (_microturbine1_ec1_va1__out * _microturbine1_be1_25a_synchronizer_abc_to_qd1_trigonometric_function7__out);
    // Generated from the component: Microturbine1.BE1-25A Synchronizer.abc to qd.Sum3
    _microturbine1_be1_25a_synchronizer_abc_to_qd_sum3__out = _microturbine1_be1_25a_synchronizer_abc_to_qd_product1__out + _microturbine1_be1_25a_synchronizer_abc_to_qd_product2__out + _microturbine1_be1_25a_synchronizer_abc_to_qd_product3__out;
    // Generated from the component: Microturbine1.BE1-25A Synchronizer.abc to qd.Sum5
    _microturbine1_be1_25a_synchronizer_abc_to_qd_sum5__out = _microturbine1_be1_25a_synchronizer_abc_to_qd_product4__out + _microturbine1_be1_25a_synchronizer_abc_to_qd_product5__out + _microturbine1_be1_25a_synchronizer_abc_to_qd_product6__out;
    // Generated from the component: Microturbine1.Exciter.Gain1
    _microturbine1_exciter_gain1__out = 1000.0 * _microturbine1_exciter_sum1__out;
    // Generated from the component: Microturbine1.Exciter.Gain4
    _microturbine1_exciter_gain4__out = 1000.0 * _microturbine1_exciter_sum2__out;
    // Generated from the component: Microturbine1.Exciter.PI.Limit1
    if (_microturbine1_exciter_pi_sum5__out > 3.0) {
        _microturbine1_exciter_pi_limit1__out = 3.0;
    } else if (_microturbine1_exciter_pi_sum5__out < -3.0) {
        _microturbine1_exciter_pi_limit1__out = -3.0;
    } else {
        _microturbine1_exciter_pi_limit1__out = _microturbine1_exciter_pi_sum5__out;
    }
    // Generated from the component: Microturbine1.Exciter.Rate Limit
    if (_microturbine1_exciter_rate_limit__first_step) {
        _microturbine1_exciter_rate_limit__out = _microturbine1_exciter__v_1__out;
    } else {
        _microturbine1_exciter_rate_limit__out = _microturbine1_exciter__v_1__out;
        _microturbine1_exciter_rate_limit__in_rate = _microturbine1_exciter__v_1__out - _microturbine1_exciter_rate_limit__prev_out;
        if (_microturbine1_exciter_rate_limit__in_rate > 0.005) {
            _microturbine1_exciter_rate_limit__out = _microturbine1_exciter_rate_limit__prev_out + (0.005);
        }
        if (_microturbine1_exciter_rate_limit__in_rate < -0.005) {
            _microturbine1_exciter_rate_limit__out = _microturbine1_exciter_rate_limit__prev_out + (-0.005);
        }
    }
    // Generated from the component: Microturbine1.Governor.Gain29
    _microturbine1_governor_gain29__out = 0.1 * _microturbine1_governor_sum2__out;
    // Generated from the component: Microturbine1.Governor.Exciter Activation.Comparator1
    if (_microturbine1_governor_exciter_activation_constant1__out < _microturbine1_governor_exciter_activation_abs1__out) {
        _microturbine1_governor_exciter_activation_comparator1__out = 0;
    } else if (_microturbine1_governor_exciter_activation_constant1__out > _microturbine1_governor_exciter_activation_abs1__out) {
        _microturbine1_governor_exciter_activation_comparator1__out = 1;
    } else {
        _microturbine1_governor_exciter_activation_comparator1__out = _microturbine1_governor_exciter_activation_comparator1__state;
    }
    // Generated from the component: Microturbine1.Governor.frequency_diff
    HIL_OutAO(0x4023, (float)_microturbine1_governor_rate_limiter2__out);
    // Generated from the component: Microturbine1.CB_control.Abs7
    _microturbine1_cb_control_abs7__out = fabs(_microturbine1_cb_control_sum10__out);
    // Generated from the component: Microturbine1.BE1-25A Synchronizer.abc to qd1.Sum3
    _microturbine1_be1_25a_synchronizer_abc_to_qd1_sum3__out = _microturbine1_be1_25a_synchronizer_abc_to_qd1_product1__out + _microturbine1_be1_25a_synchronizer_abc_to_qd1_product2__out + _microturbine1_be1_25a_synchronizer_abc_to_qd1_product3__out;
    // Generated from the component: Microturbine1.BE1-25A Synchronizer.abc to qd1.Sum5
    _microturbine1_be1_25a_synchronizer_abc_to_qd1_sum5__out = _microturbine1_be1_25a_synchronizer_abc_to_qd1_product4__out + _microturbine1_be1_25a_synchronizer_abc_to_qd1_product5__out + _microturbine1_be1_25a_synchronizer_abc_to_qd1_product6__out;
    // Generated from the component: Microturbine1.BE1-25A Synchronizer.abc to qd.Gain1
    _microturbine1_be1_25a_synchronizer_abc_to_qd_gain1__out = 0.6666666666666666 * _microturbine1_be1_25a_synchronizer_abc_to_qd_sum3__out;
    // Generated from the component: Microturbine1.BE1-25A Synchronizer.abc to qd.Gain2
    _microturbine1_be1_25a_synchronizer_abc_to_qd_gain2__out = 0.6666666666666666 * _microturbine1_be1_25a_synchronizer_abc_to_qd_sum5__out;
    // Generated from the component: Microturbine1.Exciter.Gain18
    _microturbine1_exciter_gain18__out = 11267.652816802622 * _microturbine1_exciter_pi_limit1__out;
    // Generated from the component: Microturbine1.Exciter.PI.Sum6
    _microturbine1_exciter_pi_sum6__out =  - _microturbine1_exciter_pi_sum5__out + _microturbine1_exciter_pi_limit1__out;
    // Generated from the component: Microturbine1.Exciter.Gain8
    _microturbine1_exciter_gain8__out = 20.0 * _microturbine1_exciter_rate_limit__out;
    // Generated from the component: Microturbine1.Exciter.voltage_diff
    HIL_OutAO(0x4020, (float)_microturbine1_exciter_rate_limit__out);
    // Generated from the component: Microturbine1.Governor.Sum10
    _microturbine1_governor_sum10__out = _microturbine1_governor_gain29__out + _microturbine1_governor_rate_limiter2__out;
    // Generated from the component: Microturbine1.Governor.Exciter Activation.Activate Exciter
    _microturbine1_governor_exciter_activation_activate_exciter__boolean = _microturbine1_governor_exciter_activation_comparator1__out;
    if (_microturbine1_governor_exciter_activation_activate_exciter__boolean == 1) {
        _microturbine1_governor_exciter_activation_activate_exciter__Activate = 1;
    }
    // Generated from the component: Microturbine1.CB_control.Relational operator6
    _microturbine1_cb_control_relational_operator6__out = (_microturbine1_cb_control_constant11__out > _microturbine1_cb_control_abs7__out) ? 1 : 0;
    // Generated from the component: Microturbine1.BE1-25A Synchronizer.abc to qd1.Gain1
    _microturbine1_be1_25a_synchronizer_abc_to_qd1_gain1__out = 0.6666666666666666 * _microturbine1_be1_25a_synchronizer_abc_to_qd1_sum3__out;
    // Generated from the component: Microturbine1.BE1-25A Synchronizer.abc to qd1.Gain2
    _microturbine1_be1_25a_synchronizer_abc_to_qd1_gain2__out = 0.6666666666666666 * _microturbine1_be1_25a_synchronizer_abc_to_qd1_sum5__out;
    // Generated from the component: Microturbine1.BE1-25A Synchronizer.Gain5
    _microturbine1_be1_25a_synchronizer_gain5__out = 8.874962836170933e-05 * _microturbine1_be1_25a_synchronizer_abc_to_qd_gain1__out;
    // Generated from the component: Microturbine1.BE1-25A Synchronizer.Gain6
    _microturbine1_be1_25a_synchronizer_gain6__out = -8.874962836170933e-05 * _microturbine1_be1_25a_synchronizer_abc_to_qd_gain2__out;
    // Generated from the component: Microturbine1.V_F.Vs1
    HIL_OutFloat(162267136, (float) _microturbine1_exciter_gain18__out);
    // Generated from the component: Microturbine1.Exciter.PI.Kb
    _microturbine1_exciter_pi_kb__out = 1.0 * _microturbine1_exciter_pi_sum6__out;
    // Generated from the component: Microturbine1.Exciter.Sum3
    _microturbine1_exciter_sum3__out =  - _microturbine1_exciter_integrator3__out + _microturbine1_exciter_gain7__out - _microturbine1_exciter_gain5__out + _microturbine1_exciter_gain8__out;
    // Generated from the component: Microturbine1.Governor.Discrete Transfer Function1
    _microturbine1_governor_discrete_transfer_function1__a_sum = 0.0f;
    _microturbine1_governor_discrete_transfer_function1__b_sum = 0.0f;
    _microturbine1_governor_discrete_transfer_function1__delay_line_in = 0.0f;
    for (_microturbine1_governor_discrete_transfer_function1__i = 0; _microturbine1_governor_discrete_transfer_function1__i < 1; _microturbine1_governor_discrete_transfer_function1__i++) {
        _microturbine1_governor_discrete_transfer_function1__b_sum += _microturbine1_governor_discrete_transfer_function1__b_coeff[_microturbine1_governor_discrete_transfer_function1__i + 1] * _microturbine1_governor_discrete_transfer_function1__states[_microturbine1_governor_discrete_transfer_function1__i];
    }
    _microturbine1_governor_discrete_transfer_function1__a_sum += _microturbine1_governor_discrete_transfer_function1__states[0] * _microturbine1_governor_discrete_transfer_function1__a_coeff[1];
    _microturbine1_governor_discrete_transfer_function1__delay_line_in = _microturbine1_governor_sum10__out - _microturbine1_governor_discrete_transfer_function1__a_sum;
    _microturbine1_governor_discrete_transfer_function1__b_sum += _microturbine1_governor_discrete_transfer_function1__b_coeff[0] * _microturbine1_governor_discrete_transfer_function1__delay_line_in;
    _microturbine1_governor_discrete_transfer_function1__out = _microturbine1_governor_discrete_transfer_function1__b_sum;
    // Generated from the component: Microturbine1.Governor.Rate Transition3.Input
    _microturbine1_governor_rate_transition3_output__out = _microturbine1_governor_exciter_activation_activate_exciter__Activate;
    // Generated from the component: Microturbine1.BE1-25A Synchronizer.Gain7
    _microturbine1_be1_25a_synchronizer_gain7__out = 8.874962836170933e-05 * _microturbine1_be1_25a_synchronizer_abc_to_qd1_gain1__out;
    // Generated from the component: Microturbine1.BE1-25A Synchronizer.Gain12
    _microturbine1_be1_25a_synchronizer_gain12__out = -8.874962836170933e-05 * _microturbine1_be1_25a_synchronizer_abc_to_qd1_gain2__out;
    // Generated from the component: Microturbine1.BE1-25A Synchronizer.Limit2
    if (_microturbine1_be1_25a_synchronizer_gain5__out < 1e-12) {
        _microturbine1_be1_25a_synchronizer_limit2__out = 1e-12;
    } else {
        _microturbine1_be1_25a_synchronizer_limit2__out = _microturbine1_be1_25a_synchronizer_gain5__out;
    }
    // Generated from the component: Microturbine1.BE1-25A Synchronizer.Product3
    _microturbine1_be1_25a_synchronizer_product3__out = (_microturbine1_be1_25a_synchronizer_gain5__out * _microturbine1_be1_25a_synchronizer_gain5__out);
    // Generated from the component: Microturbine1.BE1-25A Synchronizer.Vd_G
    HIL_OutAO(0x400c, (float)_microturbine1_be1_25a_synchronizer_gain5__out);
    // Generated from the component: Microturbine1.BE1-25A Synchronizer.PLL.PID controller1
    _microturbine1_be1_25a_synchronizer_pll_pid_controller1__pi_reg_out_int = _microturbine1_be1_25a_synchronizer_pll_pid_controller1__integrator_state + 5.0 * _microturbine1_be1_25a_synchronizer_gain6__out;
    if (_microturbine1_be1_25a_synchronizer_pll_pid_controller1__pi_reg_out_int < 358.1415625092364) {
        _microturbine1_be1_25a_synchronizer_pll_pid_controller1__out = 358.1415625092364;
        _microturbine1_be1_25a_synchronizer_pll_pid_controller1__av_active = 1;
    } else if (_microturbine1_be1_25a_synchronizer_pll_pid_controller1__pi_reg_out_int > 395.84067435231395) {
        _microturbine1_be1_25a_synchronizer_pll_pid_controller1__out = 395.84067435231395;
        _microturbine1_be1_25a_synchronizer_pll_pid_controller1__av_active = 1;
    } else {
        _microturbine1_be1_25a_synchronizer_pll_pid_controller1__out = _microturbine1_be1_25a_synchronizer_pll_pid_controller1__pi_reg_out_int;
        _microturbine1_be1_25a_synchronizer_pll_pid_controller1__av_active = 0;
    }
    // Generated from the component: Microturbine1.BE1-25A Synchronizer.Product4
    _microturbine1_be1_25a_synchronizer_product4__out = (_microturbine1_be1_25a_synchronizer_gain6__out * _microturbine1_be1_25a_synchronizer_gain6__out);
    // Generated from the component: Microturbine1.BE1-25A Synchronizer.Vq_G
    HIL_OutAO(0x400d, (float)_microturbine1_be1_25a_synchronizer_gain6__out);
    // Generated from the component: Microturbine1.Exciter.PI.Sum7
    _microturbine1_exciter_pi_sum7__out = _microturbine1_exciter_pi_ki__out + _microturbine1_exciter_pi_kb__out;
    // Generated from the component: Microturbine1.Exciter.Gain6
    _microturbine1_exciter_gain6__out = 500.0 * _microturbine1_exciter_sum3__out;
    // Generated from the component: Microturbine1.Governor.Gain38
    _microturbine1_governor_gain38__out = 0.75 * _microturbine1_governor_discrete_transfer_function1__out;
    // Generated from the component: Microturbine1.BE1-25A Synchronizer.E_d
    HIL_OutAO(0x400a, (float)_microturbine1_be1_25a_synchronizer_gain7__out);
    // Generated from the component: Microturbine1.BE1-25A Synchronizer.Limit1
    if (_microturbine1_be1_25a_synchronizer_gain7__out < 1e-12) {
        _microturbine1_be1_25a_synchronizer_limit1__out = 1e-12;
    } else {
        _microturbine1_be1_25a_synchronizer_limit1__out = _microturbine1_be1_25a_synchronizer_gain7__out;
    }
    // Generated from the component: Microturbine1.BE1-25A Synchronizer.magnitude.Product6
    _microturbine1_be1_25a_synchronizer_magnitude_product6__out = (_microturbine1_be1_25a_synchronizer_gain7__out * _microturbine1_be1_25a_synchronizer_gain7__out);
    // Generated from the component: Microturbine1.BE1-25A Synchronizer.E_q
    HIL_OutAO(0x400b, (float)_microturbine1_be1_25a_synchronizer_gain12__out);
    // Generated from the component: Microturbine1.BE1-25A Synchronizer.magnitude.Product5
    _microturbine1_be1_25a_synchronizer_magnitude_product5__out = (_microturbine1_be1_25a_synchronizer_gain12__out * _microturbine1_be1_25a_synchronizer_gain12__out);
    // Generated from the component: Microturbine1.BE1-25A Synchronizer.Trigonometric function2
    _microturbine1_be1_25a_synchronizer_trigonometric_function2__out = atan2(_microturbine1_be1_25a_synchronizer_gain6__out, _microturbine1_be1_25a_synchronizer_limit2__out);
    // Generated from the component: Microturbine1.BE1-25A Synchronizer.Gain13
    _microturbine1_be1_25a_synchronizer_gain13__out = 0.0026525823848649226 * _microturbine1_be1_25a_synchronizer_pll_pid_controller1__out;
    // Generated from the component: Microturbine1.BE1-25A Synchronizer.PLL.C function1
    _microturbine1_be1_25a_synchronizer_pll_c_function1__in = _microturbine1_be1_25a_synchronizer_pll_pid_controller1__out;
    _microturbine1_be1_25a_synchronizer_pll_c_function1__out = _microturbine1_be1_25a_synchronizer_pll_c_function1__var;
    // Generated from the component: Microturbine1.BE1-25A Synchronizer.omegaPLL
    HIL_OutAO(0x4012, (float)_microturbine1_be1_25a_synchronizer_pll_pid_controller1__out);
    // Generated from the component: Microturbine1.BE1-25A Synchronizer.Sum5
    _microturbine1_be1_25a_synchronizer_sum5__out = _microturbine1_be1_25a_synchronizer_product3__out + _microturbine1_be1_25a_synchronizer_product4__out;
    // Generated from the component: Microturbine1.Governor.Gain39
    _microturbine1_governor_gain39__out = 10.0 * _microturbine1_governor_gain38__out;
    // Generated from the component: Microturbine1.BE1-25A Synchronizer.Trigonometric function1
    _microturbine1_be1_25a_synchronizer_trigonometric_function1__out = atan2(_microturbine1_be1_25a_synchronizer_gain12__out, _microturbine1_be1_25a_synchronizer_limit1__out);
    // Generated from the component: Microturbine1.BE1-25A Synchronizer.magnitude.Sum3
    _microturbine1_be1_25a_synchronizer_magnitude_sum3__out = _microturbine1_be1_25a_synchronizer_magnitude_product5__out + _microturbine1_be1_25a_synchronizer_magnitude_product6__out;
    // Generated from the component: Microturbine1.BE1-25A Synchronizer.Gain16
    _microturbine1_be1_25a_synchronizer_gain16__out = 57.29577951308232 * _microturbine1_be1_25a_synchronizer_trigonometric_function2__out;
    // Generated from the component: Microturbine1.BE1-25A Synchronizer.Sum2
    _microturbine1_be1_25a_synchronizer_sum2__out =  - _microturbine1_be1_25a_synchronizer_gain4__out + _microturbine1_be1_25a_synchronizer_gain13__out;
    // Generated from the component: Microturbine1.BE1-25A Synchronizer.w_bus
    HIL_OutAO(0x4018, (float)_microturbine1_be1_25a_synchronizer_gain13__out);
    // Generated from the component: Microturbine1.BE1-25A Synchronizer.PLL.confine phase
    _microturbine1_be1_25a_synchronizer_pll_confine_phase__in = _microturbine1_be1_25a_synchronizer_pll_c_function1__out;
    _microturbine1_be1_25a_synchronizer_pll_confine_phase__x = _microturbine1_be1_25a_synchronizer_pll_confine_phase__in / 6.283185307179586;
    _microturbine1_be1_25a_synchronizer_pll_confine_phase__floor_in = floor(_microturbine1_be1_25a_synchronizer_pll_confine_phase__x);
    _microturbine1_be1_25a_synchronizer_pll_confine_phase__out = _microturbine1_be1_25a_synchronizer_pll_confine_phase__in - (6.283185307179586 * _microturbine1_be1_25a_synchronizer_pll_confine_phase__floor_in);
    // Generated from the component: Microturbine1.BE1-25A Synchronizer.Mathematical function2
    _microturbine1_be1_25a_synchronizer_mathematical_function2__out = sqrt(_microturbine1_be1_25a_synchronizer_sum5__out);
    // Generated from the component: Microturbine1.Governor.Discrete Transfer Function2
    _microturbine1_governor_discrete_transfer_function2__a_sum = 0.0f;
    _microturbine1_governor_discrete_transfer_function2__b_sum = 0.0f;
    _microturbine1_governor_discrete_transfer_function2__delay_line_in = 0.0f;
    for (_microturbine1_governor_discrete_transfer_function2__i = 0; _microturbine1_governor_discrete_transfer_function2__i < 2; _microturbine1_governor_discrete_transfer_function2__i++) {
        _microturbine1_governor_discrete_transfer_function2__b_sum += _microturbine1_governor_discrete_transfer_function2__b_coeff[_microturbine1_governor_discrete_transfer_function2__i + 1] * _microturbine1_governor_discrete_transfer_function2__states[_microturbine1_governor_discrete_transfer_function2__i];
    }
    for (_microturbine1_governor_discrete_transfer_function2__i = 1; _microturbine1_governor_discrete_transfer_function2__i > 0; _microturbine1_governor_discrete_transfer_function2__i--) {
        _microturbine1_governor_discrete_transfer_function2__a_sum += _microturbine1_governor_discrete_transfer_function2__a_coeff[_microturbine1_governor_discrete_transfer_function2__i + 1] * _microturbine1_governor_discrete_transfer_function2__states[_microturbine1_governor_discrete_transfer_function2__i];
    }
    _microturbine1_governor_discrete_transfer_function2__a_sum += _microturbine1_governor_discrete_transfer_function2__states[0] * _microturbine1_governor_discrete_transfer_function2__a_coeff[1];
    _microturbine1_governor_discrete_transfer_function2__delay_line_in = _microturbine1_governor_gain39__out - _microturbine1_governor_discrete_transfer_function2__a_sum;
    _microturbine1_governor_discrete_transfer_function2__b_sum += _microturbine1_governor_discrete_transfer_function2__b_coeff[0] * _microturbine1_governor_discrete_transfer_function2__delay_line_in;
    _microturbine1_governor_discrete_transfer_function2__out = _microturbine1_governor_discrete_transfer_function2__b_sum;
    // Generated from the component: Microturbine1.BE1-25A Synchronizer.Gain17
    _microturbine1_be1_25a_synchronizer_gain17__out = 57.29577951308232 * _microturbine1_be1_25a_synchronizer_trigonometric_function1__out;
    // Generated from the component: Microturbine1.BE1-25A Synchronizer.Sum1
    _microturbine1_be1_25a_synchronizer_sum1__out =  - _microturbine1_be1_25a_synchronizer_trigonometric_function1__out + _microturbine1_be1_25a_synchronizer_trigonometric_function2__out;
    // Generated from the component: Microturbine1.BE1-25A Synchronizer.magnitude.Mathematical function1
    _microturbine1_be1_25a_synchronizer_magnitude_mathematical_function1__out = sqrt(_microturbine1_be1_25a_synchronizer_magnitude_sum3__out);
    // Generated from the component: Microturbine1.BE1-25A Synchronizer.theta_V
    HIL_OutAO(0x4015, (float)_microturbine1_be1_25a_synchronizer_gain16__out);
    // Generated from the component: Microturbine1.BE1-25A Synchronizer.Abs5
    _microturbine1_be1_25a_synchronizer_abs5__out = fabs(_microturbine1_be1_25a_synchronizer_sum2__out);
    // Generated from the component: Microturbine1.BE1-25A Synchronizer.BE1-25A Synchronizer2
    _microturbine1_be1_25a_synchronizer_be1_25a_synchronizer2__df = _microturbine1_be1_25a_synchronizer_sum2__out;
    if (_microturbine1_be1_25a_synchronizer_be1_25a_synchronizer2__df > 0.002) {
        _microturbine1_be1_25a_synchronizer_be1_25a_synchronizer2__del_w = 1.125 * 0.08;
    }
    else if ((_microturbine1_be1_25a_synchronizer_be1_25a_synchronizer2__df <= 0.002) && (_microturbine1_be1_25a_synchronizer_be1_25a_synchronizer2__df > 0)) {
        _microturbine1_be1_25a_synchronizer_be1_25a_synchronizer2__del_w = 0.08 * _microturbine1_be1_25a_synchronizer_be1_25a_synchronizer2__df / 0.002 + (0.125 * 0.08);
    }
    else if ((_microturbine1_be1_25a_synchronizer_be1_25a_synchronizer2__df <= 0) && (_microturbine1_be1_25a_synchronizer_be1_25a_synchronizer2__df > (-0.001))) {
        _microturbine1_be1_25a_synchronizer_be1_25a_synchronizer2__del_w = (0.125 * 0.08) * (_microturbine1_be1_25a_synchronizer_be1_25a_synchronizer2__df) / 0.001 + (0.125 * 0.08);
    }
    else if ((_microturbine1_be1_25a_synchronizer_be1_25a_synchronizer2__df <= (-1 * 0.001)) && (_microturbine1_be1_25a_synchronizer_be1_25a_synchronizer2__df > (-1 * 0.002))) {
        _microturbine1_be1_25a_synchronizer_be1_25a_synchronizer2__del_w = 0;
    }
    else if (_microturbine1_be1_25a_synchronizer_be1_25a_synchronizer2__df <= (-1 * 0.002)) {
        _microturbine1_be1_25a_synchronizer_be1_25a_synchronizer2__del_w = (0.002 + _microturbine1_be1_25a_synchronizer_be1_25a_synchronizer2__df) * 0.08 / 0.002;
    }
    // Generated from the component: Microturbine1.BE1-25A Synchronizer.frequency_diff3
    HIL_OutAO(0x4011, (float)_microturbine1_be1_25a_synchronizer_sum2__out);
    // Generated from the component: Microturbine1.BE1-25A Synchronizer.|V|
    HIL_OutAO(0x401b, (float)_microturbine1_be1_25a_synchronizer_mathematical_function2__out);
    // Generated from the component: Microturbine1.CB_control.Hold after connect2
    _microturbine1_cb_control_hold_after_connect2__in1 = _microturbine1_be1_25a_synchronizer_mathematical_function2__out;
    _microturbine1_cb_control_hold_after_connect2__in2 = _microturbine1_be1_25a_synchronizer_gain13__out;
    _microturbine1_cb_control_hold_after_connect2__out = _microturbine1_cb_control_hold_after_connect2__var;
    // Generated from the component: Microturbine1.BE1-25A Synchronizer.theta_E
    HIL_OutAO(0x4014, (float)_microturbine1_be1_25a_synchronizer_gain17__out);
    // Generated from the component: Microturbine1.BE1-25A Synchronizer.confine phase
    _microturbine1_be1_25a_synchronizer_confine_phase__in = _microturbine1_be1_25a_synchronizer_sum1__out;
    if (_microturbine1_be1_25a_synchronizer_confine_phase__in > 0) {
        if (_microturbine1_be1_25a_synchronizer_confine_phase__in > (6.283185307179586 / 2))_microturbine1_be1_25a_synchronizer_confine_phase__out = _microturbine1_be1_25a_synchronizer_confine_phase__in - 6.283185307179586;
        else _microturbine1_be1_25a_synchronizer_confine_phase__out = _microturbine1_be1_25a_synchronizer_confine_phase__in;
    }
    if (_microturbine1_be1_25a_synchronizer_confine_phase__in < 0) {
        if (_microturbine1_be1_25a_synchronizer_confine_phase__in < (-6.283185307179586 / 2))_microturbine1_be1_25a_synchronizer_confine_phase__out = _microturbine1_be1_25a_synchronizer_confine_phase__in + 6.283185307179586;
        else _microturbine1_be1_25a_synchronizer_confine_phase__out = _microturbine1_be1_25a_synchronizer_confine_phase__in;
    }
    // Generated from the component: Microturbine1.BE1-25A Synchronizer.Gain18
    _microturbine1_be1_25a_synchronizer_gain18__out = 13.8 * _microturbine1_be1_25a_synchronizer_magnitude_mathematical_function1__out;
    // Generated from the component: Microturbine1.BE1-25A Synchronizer.Sum3
    _microturbine1_be1_25a_synchronizer_sum3__out =  - _microturbine1_be1_25a_synchronizer_magnitude_mathematical_function1__out + _microturbine1_be1_25a_synchronizer_mathematical_function2__out;
    // Generated from the component: Microturbine1.BE1-25A Synchronizer.|E| pu
    HIL_OutAO(0x401a, (float)_microturbine1_be1_25a_synchronizer_magnitude_mathematical_function1__out);
    // Generated from the component: Microturbine1.CB_control.Sum9
    _microturbine1_cb_control_sum9__out =  - _microturbine1_be1_25a_synchronizer_magnitude_mathematical_function1__out + _microturbine1_cb_control_constant1__out;
    // Generated from the component: Microturbine1.Exciter.Rate Transition3.Input
    _microturbine1_exciter_rate_transition3_output__out = _microturbine1_be1_25a_synchronizer_magnitude_mathematical_function1__out;
    // Generated from the component: Microturbine1.Gain17
    _microturbine1_gain17__out = 13.8 * _microturbine1_be1_25a_synchronizer_magnitude_mathematical_function1__out;
    // Generated from the component: Microturbine1.BE1-25A Synchronizer.Relational operator2
    _microturbine1_be1_25a_synchronizer_relational_operator2__out = (_microturbine1_be1_25a_synchronizer_constant7__out > _microturbine1_be1_25a_synchronizer_abs5__out) ? 1 : 0;
    // Generated from the component: Microturbine1.CB_control.Logical operator10
    _microturbine1_cb_control_logical_operator10__out = !_microturbine1_cb_control_hold_after_connect2__out;
    // Generated from the component: Microturbine1.CB_control.Logical operator7
    _microturbine1_cb_control_logical_operator7__out = _microturbine1_cb_control_grid_islanded__out && _microturbine1_cb_control_hold_after_connect2__out ;
    // Generated from the component: Microturbine1.BE1-25A Synchronizer.Abs4
    _microturbine1_be1_25a_synchronizer_abs4__out = fabs(_microturbine1_be1_25a_synchronizer_confine_phase__out);
    // Generated from the component: Microturbine1.BE1-25A Synchronizer.angle_diff3
    HIL_OutAO(0x400e, (float)_microturbine1_be1_25a_synchronizer_confine_phase__out);
    // Generated from the component: Microturbine1.BE1-25A Synchronizer.|E|
    HIL_OutAO(0x4019, (float)_microturbine1_be1_25a_synchronizer_gain18__out);
    // Generated from the component: Microturbine1.BE1-25A Synchronizer.Abs2
    _microturbine1_be1_25a_synchronizer_abs2__out = fabs(_microturbine1_be1_25a_synchronizer_sum3__out);
    // Generated from the component: Microturbine1.BE1-25A Synchronizer.BE1-25A Synchronizer1
    _microturbine1_be1_25a_synchronizer_be1_25a_synchronizer1__dV = _microturbine1_be1_25a_synchronizer_sum3__out;
    if (_microturbine1_be1_25a_synchronizer_be1_25a_synchronizer1__dV > 0.002) {
        _microturbine1_be1_25a_synchronizer_be1_25a_synchronizer1__del_V = 0.05;
    }
    else if ((_microturbine1_be1_25a_synchronizer_be1_25a_synchronizer1__dV <= 0.002) && (_microturbine1_be1_25a_synchronizer_be1_25a_synchronizer1__dV > 0)) {
        _microturbine1_be1_25a_synchronizer_be1_25a_synchronizer1__del_V = 0.05 * _microturbine1_be1_25a_synchronizer_be1_25a_synchronizer1__dV / 0.002;
    }
    else if ((_microturbine1_be1_25a_synchronizer_be1_25a_synchronizer1__dV <= 0) && (_microturbine1_be1_25a_synchronizer_be1_25a_synchronizer1__dV > -1 * (0.002 - 0.001))) {
        _microturbine1_be1_25a_synchronizer_be1_25a_synchronizer1__del_V = 0;
    }
    else if ((_microturbine1_be1_25a_synchronizer_be1_25a_synchronizer1__dV <= (-1 * (0.002 - 0.001))) && (_microturbine1_be1_25a_synchronizer_be1_25a_synchronizer1__dV > (-1 * 0.002))) {
        _microturbine1_be1_25a_synchronizer_be1_25a_synchronizer1__del_V = 0.05 * (_microturbine1_be1_25a_synchronizer_be1_25a_synchronizer1__dV + (0.002 - 0.001)) / 0.001;
    }
    else if (_microturbine1_be1_25a_synchronizer_be1_25a_synchronizer1__dV <= (-1 * 0.002)) {
        _microturbine1_be1_25a_synchronizer_be1_25a_synchronizer1__del_V = -1 * 0.05;
    }
    // Generated from the component: Microturbine1.BE1-25A Synchronizer.volt_diff3
    HIL_OutAO(0x4016, (float)_microturbine1_be1_25a_synchronizer_sum3__out);
    // Generated from the component: Microturbine1.CB_control.Abs6
    _microturbine1_cb_control_abs6__out = fabs(_microturbine1_cb_control_sum9__out);
    // Generated from the component: Microturbine1.|V|
    HIL_OutAO(0x4031, (float)_microturbine1_gain17__out);
    // Generated from the component: Microturbine1.BE1-25A Synchronizer.Digital Probe4
    HIL_OutInt32(0xf00402, _microturbine1_be1_25a_synchronizer_relational_operator2__out != 0x0);
    // Generated from the component: Microturbine1.CB_control.Logical operator11
    _microturbine1_cb_control_logical_operator11__out = _microturbine1_cb_control_logical_operator10__out && _microturbine1_cb_control_logical_operator9__out ;
    // Generated from the component: Microturbine1.CB_control.Grid_Islanded ON
    HIL_OutInt32(0xf00408, _microturbine1_cb_control_logical_operator7__out != 0x0);
    // Generated from the component: Microturbine1.CB_control.Logical operator5
    _microturbine1_cb_control_logical_operator5__out = !_microturbine1_cb_control_logical_operator7__out;
    // Generated from the component: Microturbine1.BE1-25A Synchronizer.Relational operator1
    _microturbine1_be1_25a_synchronizer_relational_operator1__out = (_microturbine1_be1_25a_synchronizer_constant6__out > _microturbine1_be1_25a_synchronizer_abs4__out) ? 1 : 0;
    // Generated from the component: Microturbine1.BE1-25A Synchronizer.Relational operator4
    _microturbine1_be1_25a_synchronizer_relational_operator4__out = (_microturbine1_be1_25a_synchronizer_abs2__out < _microturbine1_be1_25a_synchronizer_constant9__out) ? 1 : 0;
    // Generated from the component: Microturbine1.CB_control.Relational operator5
    _microturbine1_cb_control_relational_operator5__out = (_microturbine1_cb_control_abs6__out < _microturbine1_cb_control_constant10__out) ? 1 : 0;
    // Generated from the component: Microturbine1.CB_control.Logical operator12
    _microturbine1_cb_control_logical_operator12__out = !_microturbine1_cb_control_logical_operator11__out;
    // Generated from the component: Microturbine1.CB_control.MT_sync ON
    HIL_OutInt32(0xf0040c, _microturbine1_cb_control_logical_operator11__out != 0x0);
    // Generated from the component: Microturbine1.CB_control.Grid_Islanded OFF
    HIL_OutInt32(0xf00407, _microturbine1_cb_control_logical_operator5__out != 0x0);
    // Generated from the component: Microturbine1.BE1-25A Synchronizer.Digital Probe3
    HIL_OutInt32(0xf00401, _microturbine1_be1_25a_synchronizer_relational_operator1__out != 0x0);
    // Generated from the component: Microturbine1.BE1-25A Synchronizer.Digital Probe5
    HIL_OutInt32(0xf00403, _microturbine1_be1_25a_synchronizer_relational_operator4__out != 0x0);
    // Generated from the component: Microturbine1.BE1-25A Synchronizer.Logical operator1
    _microturbine1_be1_25a_synchronizer_logical_operator1__out = _microturbine1_be1_25a_synchronizer_relational_operator1__out && _microturbine1_be1_25a_synchronizer_relational_operator2__out && _microturbine1_be1_25a_synchronizer_relational_operator4__out ;
    // Generated from the component: Microturbine1.CB_control.Logical operator8
    _microturbine1_cb_control_logical_operator8__out = _microturbine1_cb_control_relational_operator6__out && _microturbine1_cb_control_relational_operator5__out && _microturbine1_cb_control_logical_operator7__out ;
    // Generated from the component: Microturbine1.CB_control.MT_sync OFF
    HIL_OutInt32(0xf0040b, _microturbine1_cb_control_logical_operator12__out != 0x0);
    // Generated from the component: Microturbine1.BE1-25A Synchronizer.stay connected1
    _microturbine1_be1_25a_synchronizer_stay_connected1__MTsync = _microturbine1_cb_control_logical_operator11__out;
    _microturbine1_be1_25a_synchronizer_stay_connected1__connectMT = _microturbine1_cb_control_logical_operator2__out;
    _microturbine1_be1_25a_synchronizer_stay_connected1__ready = _microturbine1_be1_25a_synchronizer_logical_operator1__out;
    _microturbine1_be1_25a_synchronizer_stay_connected1__out = _microturbine1_be1_25a_synchronizer_stay_connected1__connect;
    // Generated from the component: Microturbine1.CB_control.Logical operator6
    _microturbine1_cb_control_logical_operator6__out = _microturbine1_be1_25a_synchronizer_unit_delay5__out || _microturbine1_cb_control_logical_operator8__out ;
    // Generated from the component: Microturbine1.CB_control.Logical operator1
    _microturbine1_cb_control_logical_operator1__out = _microturbine1_cb_control_logical_operator2__out && _microturbine1_cb_control_logical_operator6__out ;
    // Generated from the component: Microturbine1.CB_control.stay connected1
    _microturbine1_cb_control_stay_connected1__connect = _microturbine1_cb_control_logical_operator1__out;
    _microturbine1_cb_control_stay_connected1__disconnect = _microturbine1_connect_mt__out;
    _microturbine1_cb_control_stay_connected1__action = _microturbine1_cb_control_stay_connected1__var;
    // Generated from the component: Microturbine1.BE1-25A Synchronizer.Hold after connect
    _microturbine1_be1_25a_synchronizer_hold_after_connect__MT_sync = _microturbine1_cb_control_logical_operator11__out;
    _microturbine1_be1_25a_synchronizer_hold_after_connect__connect = _microturbine1_cb_control_stay_connected1__action;
    _microturbine1_be1_25a_synchronizer_hold_after_connect__in = _microturbine1_be1_25a_synchronizer_be1_25a_synchronizer2__del_w;
    _microturbine1_be1_25a_synchronizer_hold_after_connect__out = _microturbine1_be1_25a_synchronizer_hold_after_connect__var;
    // Generated from the component: Microturbine1.BE1-25A Synchronizer.Hold after connect1
    _microturbine1_be1_25a_synchronizer_hold_after_connect1__MT_sync = _microturbine1_cb_control_logical_operator11__out;
    _microturbine1_be1_25a_synchronizer_hold_after_connect1__connect = _microturbine1_cb_control_stay_connected1__action;
    _microturbine1_be1_25a_synchronizer_hold_after_connect1__exc_state = _microturbine1_governor_rate_transition3_output__out;
    _microturbine1_be1_25a_synchronizer_hold_after_connect1__in = _microturbine1_be1_25a_synchronizer_be1_25a_synchronizer1__del_V;
    _microturbine1_be1_25a_synchronizer_hold_after_connect1__out = _microturbine1_be1_25a_synchronizer_hold_after_connect1__var;
    // Generated from the component: Microturbine1.CB_control.GCB ON
    HIL_OutInt32(0xf00406, _microturbine1_cb_control_stay_connected1__action != 0x0);
    // Generated from the component: Microturbine1.CB_control.Logical operator3
    _microturbine1_cb_control_logical_operator3__out = !_microturbine1_cb_control_stay_connected1__action;
    // Generated from the component: Microturbine1.S4.CTC_Wrapper
    if (_microturbine1_cb_control_stay_connected1__action == 0x0) {
        HIL_OutInt32(0x8240482, 0x0);
    }
    else {
        HIL_OutInt32(0x8240482, 0x1);
    }
    // Generated from the component: Microturbine1.BE1-25A Synchronizer.Sum9
    _microturbine1_be1_25a_synchronizer_sum9__out = _microturbine1_be1_25a_synchronizer_gain13__out + _microturbine1_be1_25a_synchronizer_hold_after_connect__out;
    // Generated from the component: Microturbine1.BE1-25A Synchronizer.del_w
    HIL_OutAO(0x4010, (float)_microturbine1_be1_25a_synchronizer_hold_after_connect__out);
    // Generated from the component: Microturbine1.BE1-25A Synchronizer.Sum10
    _microturbine1_be1_25a_synchronizer_sum10__out = _microturbine1_be1_25a_synchronizer_mathematical_function2__out + _microturbine1_be1_25a_synchronizer_hold_after_connect1__out;
    // Generated from the component: Microturbine1.BE1-25A Synchronizer.del_V
    HIL_OutAO(0x400f, (float)_microturbine1_be1_25a_synchronizer_hold_after_connect1__out);
    // Generated from the component: Microturbine1.CB_control.GCB OFF
    HIL_OutInt32(0xf00405, _microturbine1_cb_control_logical_operator3__out != 0x0);
    // Generated from the component: Microturbine1.BE1-25A Synchronizer.Hold after connect2
    _microturbine1_be1_25a_synchronizer_hold_after_connect2__connect = _microturbine1_cb_control_stay_connected1__action;
    _microturbine1_be1_25a_synchronizer_hold_after_connect2__in = _microturbine1_be1_25a_synchronizer_sum9__out;
    _microturbine1_be1_25a_synchronizer_hold_after_connect2__out = _microturbine1_be1_25a_synchronizer_hold_after_connect2__var;
    // Generated from the component: Microturbine1.BE1-25A Synchronizer.Hold after connect3
    _microturbine1_be1_25a_synchronizer_hold_after_connect3__connect = _microturbine1_cb_control_stay_connected1__action;
    _microturbine1_be1_25a_synchronizer_hold_after_connect3__in = _microturbine1_be1_25a_synchronizer_sum10__out;
    _microturbine1_be1_25a_synchronizer_hold_after_connect3__out = _microturbine1_be1_25a_synchronizer_hold_after_connect3__var;
    // Generated from the component: Microturbine1.Signal switch1
    _microturbine1_signal_switch1__out = (_microturbine1_cb_control_logical_operator11__out != 1.0) ? _microturbine1_constant2__out : _microturbine1_be1_25a_synchronizer_hold_after_connect2__out;
    // Generated from the component: Microturbine1.Signal switch2
    _microturbine1_signal_switch2__out = (_microturbine1_cb_control_logical_operator11__out != 1.0) ? _microturbine1_constant1__out : _microturbine1_be1_25a_synchronizer_hold_after_connect3__out;
    // Generated from the component: Microturbine1.w
    _microturbine1_w__out = (_microturbine1_cb_control_stay_connected1__action > 0.5) ? _microturbine1_wref__out : _microturbine1_signal_switch1__out;
    // Generated from the component: Microturbine1.|V|3
    _microturbine1__v_3__out = (_microturbine1_cb_control_stay_connected1__action > 0.5) ? _microturbine1_vref__out : _microturbine1_signal_switch2__out;
    // Generated from the component: Microturbine1.Governor.Rate Transition1.Input
    _microturbine1_governor_rate_transition1_output__out = _microturbine1_w__out;
    // Generated from the component: Microturbine1.Exciter.Rate Transition2.Input
    _microturbine1_exciter_rate_transition2_output__out = _microturbine1__v_3__out;
    //@cmp.out.block.end
    //////////////////////////////////////////////////////////////////////////
    // Update block
    //////////////////////////////////////////////////////////////////////////
    //@cmp.update.block.start
    // Generated from the component: F1_Motor.Chiller_compressor.Unit Delay1
    _f1_motor_chiller_compressor_unit_delay1__state = _f1_motor_chiller_compressor_c_function1__T;
    // Generated from the component: F1_Motor.IM.Machine Wrapper1
    _f1_motor_im_machine_wrapper1__model_load = _f1_motor_chiller_compressor_unit_delay1__out;
    // Generated from the component: Microturbine1.BE1-25A Synchronizer.Unit Delay2
    _microturbine1_be1_25a_synchronizer_unit_delay2__state = _microturbine1_be1_25a_synchronizer_pll_confine_phase__out;
    // Generated from the component: Microturbine1.BE1-25A Synchronizer.Unit Delay5
    _microturbine1_be1_25a_synchronizer_unit_delay5__state = _microturbine1_be1_25a_synchronizer_stay_connected1__out;
    // Generated from the component: Microturbine1.Engine.Integrator1
    _microturbine1_engine_integrator1__state += _microturbine1_engine_gain1__out * 0.001;
    // Generated from the component: Microturbine1.Governor.Integrator1
    _microturbine1_governor_integrator1__state += _microturbine1_governor_discrete_transfer_function2__out * 0.001;
    // Generated from the component: DIESEL_MCB.RMS value1
    if( _diesel_mcb_rms_value1__zc ) {
        if (_diesel_mcb_va_grid_2_va1__out != _diesel_mcb_rms_value1__previous_value)
            _diesel_mcb_rms_value1__correction = - _diesel_mcb_rms_value1__previous_value / (_diesel_mcb_va_grid_2_va1__out - _diesel_mcb_rms_value1__previous_value);
        if (_diesel_mcb_rms_value1__correction < 0)
            _diesel_mcb_rms_value1__correction = 0;
        else
            _diesel_mcb_rms_value1__correction = 0;
        _diesel_mcb_rms_value1__sample_cnt += _diesel_mcb_rms_value1__correction - _diesel_mcb_rms_value1__previous_correction;
        _diesel_mcb_rms_value1__out_state = sqrt(_diesel_mcb_rms_value1__square_sum / _diesel_mcb_rms_value1__sample_cnt);
        _diesel_mcb_rms_value1__sample_cnt = 0;
        _diesel_mcb_rms_value1__previous_correction = _diesel_mcb_rms_value1__correction;
        _diesel_mcb_rms_value1__square_sum = 0;
    } else if ( _diesel_mcb_rms_value1__sample_cnt >= 500 ) {
        _diesel_mcb_rms_value1__out_state = sqrt(_diesel_mcb_rms_value1__square_sum / _diesel_mcb_rms_value1__sample_cnt);
        _diesel_mcb_rms_value1__sample_cnt = 0;
        _diesel_mcb_rms_value1__square_sum = 0;
    }
    _diesel_mcb_rms_value1__previous_value = _diesel_mcb_va_grid_2_va1__out;
    _diesel_mcb_rms_value1__square_sum += _diesel_mcb_va_grid_2_va1__out * _diesel_mcb_va_grid_2_va1__out;
    _diesel_mcb_rms_value1__sample_cnt ++;
    // Generated from the component: DIESEL_MCB.RMS value2
    if( _diesel_mcb_rms_value2__zc ) {
        if (_diesel_mcb_vb_grid_2_va1__out != _diesel_mcb_rms_value2__previous_value)
            _diesel_mcb_rms_value2__correction = - _diesel_mcb_rms_value2__previous_value / (_diesel_mcb_vb_grid_2_va1__out - _diesel_mcb_rms_value2__previous_value);
        if (_diesel_mcb_rms_value2__correction < 0)
            _diesel_mcb_rms_value2__correction = 0;
        else
            _diesel_mcb_rms_value2__correction = 0;
        _diesel_mcb_rms_value2__sample_cnt += _diesel_mcb_rms_value2__correction - _diesel_mcb_rms_value2__previous_correction;
        _diesel_mcb_rms_value2__out_state = sqrt(_diesel_mcb_rms_value2__square_sum / _diesel_mcb_rms_value2__sample_cnt);
        _diesel_mcb_rms_value2__sample_cnt = 0;
        _diesel_mcb_rms_value2__previous_correction = _diesel_mcb_rms_value2__correction;
        _diesel_mcb_rms_value2__square_sum = 0;
    } else if ( _diesel_mcb_rms_value2__sample_cnt >= 500 ) {
        _diesel_mcb_rms_value2__out_state = sqrt(_diesel_mcb_rms_value2__square_sum / _diesel_mcb_rms_value2__sample_cnt);
        _diesel_mcb_rms_value2__sample_cnt = 0;
        _diesel_mcb_rms_value2__square_sum = 0;
    }
    _diesel_mcb_rms_value2__previous_value = _diesel_mcb_vb_grid_2_va1__out;
    _diesel_mcb_rms_value2__square_sum += _diesel_mcb_vb_grid_2_va1__out * _diesel_mcb_vb_grid_2_va1__out;
    _diesel_mcb_rms_value2__sample_cnt ++;
    // Generated from the component: DIESEL_MCB.RMS value3
    if( _diesel_mcb_rms_value3__zc ) {
        if (_diesel_mcb_vc_grid_2_va1__out != _diesel_mcb_rms_value3__previous_value)
            _diesel_mcb_rms_value3__correction = - _diesel_mcb_rms_value3__previous_value / (_diesel_mcb_vc_grid_2_va1__out - _diesel_mcb_rms_value3__previous_value);
        if (_diesel_mcb_rms_value3__correction < 0)
            _diesel_mcb_rms_value3__correction = 0;
        else
            _diesel_mcb_rms_value3__correction = 0;
        _diesel_mcb_rms_value3__sample_cnt += _diesel_mcb_rms_value3__correction - _diesel_mcb_rms_value3__previous_correction;
        _diesel_mcb_rms_value3__out_state = sqrt(_diesel_mcb_rms_value3__square_sum / _diesel_mcb_rms_value3__sample_cnt);
        _diesel_mcb_rms_value3__sample_cnt = 0;
        _diesel_mcb_rms_value3__previous_correction = _diesel_mcb_rms_value3__correction;
        _diesel_mcb_rms_value3__square_sum = 0;
    } else if ( _diesel_mcb_rms_value3__sample_cnt >= 500 ) {
        _diesel_mcb_rms_value3__out_state = sqrt(_diesel_mcb_rms_value3__square_sum / _diesel_mcb_rms_value3__sample_cnt);
        _diesel_mcb_rms_value3__sample_cnt = 0;
        _diesel_mcb_rms_value3__square_sum = 0;
    }
    _diesel_mcb_rms_value3__previous_value = _diesel_mcb_vc_grid_2_va1__out;
    _diesel_mcb_rms_value3__square_sum += _diesel_mcb_vc_grid_2_va1__out * _diesel_mcb_vc_grid_2_va1__out;
    _diesel_mcb_rms_value3__sample_cnt ++;
    // Generated from the component: Microturbine1.BE1-25A Synchronizer.abc to qd1.confine phase
    // Generated from the component: Microturbine1.Exciter.Integrator1
    _microturbine1_exciter_integrator1__state += _microturbine1_exciter_gain1__out * 0.001;
    if (_microturbine1_exciter_rate_transition1_output__out > 0)
        _microturbine1_exciter_integrator1__reset_state = 1;
    else if (_microturbine1_exciter_rate_transition1_output__out < 0)
        _microturbine1_exciter_integrator1__reset_state = -1;
    else
        _microturbine1_exciter_integrator1__reset_state = 0;
    // Generated from the component: Microturbine1.Exciter.Integrator2
    _microturbine1_exciter_integrator2__state += _microturbine1_exciter_gain4__out * 0.001;
    if (_microturbine1_exciter_rate_transition1_output__out > 0)
        _microturbine1_exciter_integrator2__reset_state = 1;
    else if (_microturbine1_exciter_rate_transition1_output__out < 0)
        _microturbine1_exciter_integrator2__reset_state = -1;
    else
        _microturbine1_exciter_integrator2__reset_state = 0;
    // Generated from the component: Microturbine1.Exciter.Integrator3
    _microturbine1_exciter_integrator3__state += _microturbine1_exciter_gain6__out * 0.001;
    if (_microturbine1_exciter_rate_transition1_output__out > 0)
        _microturbine1_exciter_integrator3__reset_state = 1;
    else if (_microturbine1_exciter_rate_transition1_output__out < 0)
        _microturbine1_exciter_integrator3__reset_state = -1;
    else
        _microturbine1_exciter_integrator3__reset_state = 0;
    if (_microturbine1_exciter_integrator3__state > 5.0)
        _microturbine1_exciter_integrator3__state = 5.0;
    if (_microturbine1_exciter_integrator3__state < -5.0)
        _microturbine1_exciter_integrator3__state = -5.0;
    // Generated from the component: Microturbine1.Exciter.Integrator4
    _microturbine1_exciter_integrator4__state += _microturbine1_exciter_gain9__out * 0.001;
    if (_microturbine1_exciter_rate_transition1_output__out > 0)
        _microturbine1_exciter_integrator4__reset_state = 1;
    else if (_microturbine1_exciter_rate_transition1_output__out < 0)
        _microturbine1_exciter_integrator4__reset_state = -1;
    else
        _microturbine1_exciter_integrator4__reset_state = 0;
    // Generated from the component: Microturbine1.Exciter.PI.Integrator1
    _microturbine1_exciter_pi_integrator1__state += _microturbine1_exciter_pi_sum7__out * 0.001;
    if (_microturbine1_exciter_rate_transition1_output__out > 0)
        _microturbine1_exciter_pi_integrator1__reset_state = 1;
    else if (_microturbine1_exciter_rate_transition1_output__out < 0)
        _microturbine1_exciter_pi_integrator1__reset_state = -1;
    else
        _microturbine1_exciter_pi_integrator1__reset_state = 0;
    // Generated from the component: F1_Motor.Chiller_compressor.C function1
    // Generated from the component: Microturbine1.Governor.Rate Limiter2
    _microturbine1_governor_rate_limiter2__prev_out = _microturbine1_governor_rate_limiter2__out;
    _microturbine1_governor_rate_limiter2__first_step = 0;
    // Generated from the component: Microturbine1.Exciter.Rate Limit
    _microturbine1_exciter_rate_limit__prev_out = _microturbine1_exciter_rate_limit__out;
    _microturbine1_exciter_rate_limit__first_step = 0;
    // Generated from the component: Microturbine1.Governor.Exciter Activation.Comparator1
    if (_microturbine1_governor_exciter_activation_constant1__out < _microturbine1_governor_exciter_activation_abs1__out) {
        _microturbine1_governor_exciter_activation_comparator1__state = 0;
    } else if (_microturbine1_governor_exciter_activation_constant1__out > _microturbine1_governor_exciter_activation_abs1__out) {
        _microturbine1_governor_exciter_activation_comparator1__state = 1;
    }
    // Generated from the component: Microturbine1.Governor.Exciter Activation.Activate Exciter
    // Generated from the component: Microturbine1.Governor.Discrete Transfer Function1
    _microturbine1_governor_discrete_transfer_function1__states[0] = _microturbine1_governor_discrete_transfer_function1__delay_line_in;
    // Generated from the component: Microturbine1.BE1-25A Synchronizer.PLL.PID controller1
    if (!_microturbine1_be1_25a_synchronizer_pll_pid_controller1__av_active) {
        _microturbine1_be1_25a_synchronizer_pll_pid_controller1__integrator_state += 2.0 * _microturbine1_be1_25a_synchronizer_gain6__out * 0.001;
    }
    // Generated from the component: Microturbine1.BE1-25A Synchronizer.PLL.C function1
    _microturbine1_be1_25a_synchronizer_pll_c_function1__var += (0.001 * _microturbine1_be1_25a_synchronizer_pll_c_function1__in);
    // Generated from the component: Microturbine1.BE1-25A Synchronizer.PLL.confine phase
    // Generated from the component: Microturbine1.Governor.Discrete Transfer Function2
    for (_microturbine1_governor_discrete_transfer_function2__i = 1; _microturbine1_governor_discrete_transfer_function2__i > 0; _microturbine1_governor_discrete_transfer_function2__i--) {
        _microturbine1_governor_discrete_transfer_function2__states[_microturbine1_governor_discrete_transfer_function2__i] = _microturbine1_governor_discrete_transfer_function2__states[_microturbine1_governor_discrete_transfer_function2__i - 1];
    }
    _microturbine1_governor_discrete_transfer_function2__states[0] = _microturbine1_governor_discrete_transfer_function2__delay_line_in;
    // Generated from the component: Microturbine1.BE1-25A Synchronizer.BE1-25A Synchronizer2
    // Generated from the component: Microturbine1.CB_control.Hold after connect2
    if ((_microturbine1_cb_control_hold_after_connect2__in1 < 1.1) && (_microturbine1_cb_control_hold_after_connect2__in1 > 0.9) && (_microturbine1_cb_control_hold_after_connect2__in2 < 1.1) && (_microturbine1_cb_control_hold_after_connect2__in2 > 0.9))_microturbine1_cb_control_hold_after_connect2__var = 0;
    else _microturbine1_cb_control_hold_after_connect2__var = 1;
    // Generated from the component: Microturbine1.BE1-25A Synchronizer.confine phase
    // Generated from the component: Microturbine1.BE1-25A Synchronizer.BE1-25A Synchronizer1
    // Generated from the component: Microturbine1.BE1-25A Synchronizer.stay connected1
    if ((_microturbine1_be1_25a_synchronizer_stay_connected1__ready == 1) && (_microturbine1_be1_25a_synchronizer_stay_connected1__connectMT == 1) && (_microturbine1_be1_25a_synchronizer_stay_connected1__MTsync == 1)) {
        _microturbine1_be1_25a_synchronizer_stay_connected1__connect = 1;
    }
    else if ((_microturbine1_be1_25a_synchronizer_stay_connected1__connectMT == 0) || (_microturbine1_be1_25a_synchronizer_stay_connected1__MTsync == 0)) {
        _microturbine1_be1_25a_synchronizer_stay_connected1__connect = 0;
    }
    // Generated from the component: Microturbine1.CB_control.stay connected1
    if (_microturbine1_cb_control_stay_connected1__connect == 1) {
        _microturbine1_cb_control_stay_connected1__var = 1;
    }
    if (_microturbine1_cb_control_stay_connected1__disconnect == 0) {
        _microturbine1_cb_control_stay_connected1__var = 0;
    }
    // Generated from the component: Microturbine1.BE1-25A Synchronizer.Hold after connect
    if ((_microturbine1_be1_25a_synchronizer_hold_after_connect__connect == 0) && (_microturbine1_be1_25a_synchronizer_hold_after_connect__MT_sync == 1))_microturbine1_be1_25a_synchronizer_hold_after_connect__var = _microturbine1_be1_25a_synchronizer_hold_after_connect__in;
    else if (_microturbine1_be1_25a_synchronizer_hold_after_connect__MT_sync == 0)_microturbine1_be1_25a_synchronizer_hold_after_connect__var = 0;
    // Generated from the component: Microturbine1.BE1-25A Synchronizer.Hold after connect1
    if ((_microturbine1_be1_25a_synchronizer_hold_after_connect1__connect == 0) && (_microturbine1_be1_25a_synchronizer_hold_after_connect1__exc_state == 1) && (_microturbine1_be1_25a_synchronizer_hold_after_connect1__MT_sync == 1))_microturbine1_be1_25a_synchronizer_hold_after_connect1__var = _microturbine1_be1_25a_synchronizer_hold_after_connect1__in;
    else if (_microturbine1_be1_25a_synchronizer_hold_after_connect1__MT_sync == 0)_microturbine1_be1_25a_synchronizer_hold_after_connect1__var = 0;
    // Generated from the component: Microturbine1.BE1-25A Synchronizer.Hold after connect2
    if (_microturbine1_be1_25a_synchronizer_hold_after_connect2__connect == 0)_microturbine1_be1_25a_synchronizer_hold_after_connect2__var = _microturbine1_be1_25a_synchronizer_hold_after_connect2__in;
    // Generated from the component: Microturbine1.BE1-25A Synchronizer.Hold after connect3
    if (_microturbine1_be1_25a_synchronizer_hold_after_connect3__connect == 0)_microturbine1_be1_25a_synchronizer_hold_after_connect3__var = _microturbine1_be1_25a_synchronizer_hold_after_connect3__in;
    //@cmp.update.block.end
}
// ----------------------------------------------------------------------------------------  //-----------------------------------------------------------------------------------------