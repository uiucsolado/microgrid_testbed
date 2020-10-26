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
double _f1_motor_chiller_compressor_unit_delay1__out;
double _f1_motor_im_machine_wrapper1__speed_out;
double _f1_motor_im_machine_wrapper1__torque_out;
double _f1_motor_im_machine_wrapper1__angle_out;
// Generated from the component Root/F1_PCC/Digital Input Close
X_UnInt32 _f1_pcc_digital_input_close__out;// Generated from the component Root/F1_PCC/Digital Input Trip
X_UnInt32 _f1_pcc_digital_input_trip__out;
double _f1_pcc_meas1_ia_ia1__out;
double _f1_pcc_meas1_ib_ia1__out;
double _f1_pcc_meas1_ic_ia1__out;
double _f1_pcc_meas1_va_va1__out;
double _f1_pcc_meas1_vb_va1__out;
double _f1_pcc_meas1_vc_va1__out;
double _f1_pcc_meas2_va_va1__out;
double _f1_pcc_meas2_vb_va1__out;
double _f1_pcc_meas2_vc_va1__out;
double _f1_pcc_pcc_measurements_constant1__out = 1.0;
double _f1_pcc_pcc_measurements_constant2__out = 1.0;
double _f1_pcc_pcc_measurements_three_phase_pll1_pid_integrator1__out;
double _f1_pcc_pcc_measurements_three_phase_pll1_pid_integrator2__out;
double _f1_pcc_pcc_measurements_three_phase_pll1_unit_delay1__out;
double _f1_pcc_pcc_measurements_three_phase_pll1_to_hz__out;
X_UnInt32 _f1_pcc_sr_flip_flop1__out;
X_UnInt32 _f1_pcc_sr_flip_flop1__out_n;
X_Int32 _f1_vl_cb1_f1_cb7__out;
double _f1_vl_cb1_meas1_ia_ia1__out;
double _f1_vl_cb1_meas1_ib_ia1__out;
double _f1_vl_cb1_meas1_ic_ia1__out;
double _f1_vl_cb1_meas1_va_va1__out;
double _f1_vl_cb1_meas1_vb_va1__out;
double _f1_vl_cb1_meas1_vc_va1__out;
double _f1_vl_cb1_meas2_va_va1__out;
double _f1_vl_cb1_meas2_vb_va1__out;
double _f1_vl_cb1_meas2_vc_va1__out;
X_Int32 _f1_vl_cb2_f1_cb7__out;
double _f1_vl_cb2_meas1_ia_ia1__out;
double _f1_vl_cb2_meas1_ib_ia1__out;
double _f1_vl_cb2_meas1_ic_ia1__out;
double _f1_vl_cb2_meas1_va_va1__out;
double _f1_vl_cb2_meas1_vb_va1__out;
double _f1_vl_cb2_meas1_vc_va1__out;
double _f1_vl_cb2_meas2_va_va1__out;
double _f1_vl_cb2_meas2_vb_va1__out;
double _f1_vl_cb2_meas2_vc_va1__out;
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
double _regd_control_p_ref_diesel_pref_initial__out;
double _regd_control_p_ref_diesel_capacity_max__out = 1000000.0;
double _regd_control_p_ref_diesel_capacity_min__out = 200000.0;
double _regd_control_p_ref_vl1_pref_initial__out;
double _regd_control_p_ref_vl1_capacity_max__out = 500000.0;
double _regd_control_p_ref_vl1_capacity_min__out = 100000.0;
double _regd_control_p_ref_vl2_pref_initial__out;
double _regd_control_p_ref_vl2_capacity_max__out = 500000.0;
double _regd_control_p_ref_vl2_capacity_min__out = 100000.0;
double _regd_control_regd__out;
double _vbr_variable_load1_control_constant3__out = 1.0;
double _vbr_variable_load1_control_constant4__out = 0.0;
double _vbr_variable_load1_control_constant5__out = 0.0;
double _vbr_variable_load1_control_limit_pqref_unit_delay1__out;
double _vbr_variable_load1_control_limit_pqref_unit_delay2__out;
double _vbr_variable_load1_control_three_phase_pll2_pid_integrator1__out;
double _vbr_variable_load1_control_three_phase_pll2_pid_integrator2__out;
double _vbr_variable_load1_control_three_phase_pll2_unit_delay1__out;
double _vbr_variable_load1_control_three_phase_pll2_to_hz__out;
double _vbr_variable_load1_ia_ia1__out;
double _vbr_variable_load1_ib_ia1__out;
double _vbr_variable_load1_ic_ia1__out;
double _vbr_variable_load1_va_va1__out;
double _vbr_variable_load1_vb_va1__out;
double _vbr_variable_load1_vc_va1__out;
double _vbr_variable_load1_in_enable__out;
double _vbr_variable_load1_in_qref__out;
double _vbr_variable_load2_control_constant3__out = 1.0;
double _vbr_variable_load2_control_constant4__out = 0.0;
double _vbr_variable_load2_control_constant5__out = 0.0;
double _vbr_variable_load2_control_limit_pqref_unit_delay1__out;
double _vbr_variable_load2_control_limit_pqref_unit_delay2__out;
double _vbr_variable_load2_control_three_phase_pll2_pid_integrator1__out;
double _vbr_variable_load2_control_three_phase_pll2_pid_integrator2__out;
double _vbr_variable_load2_control_three_phase_pll2_unit_delay1__out;
double _vbr_variable_load2_control_three_phase_pll2_to_hz__out;
double _vbr_variable_load2_ia_ia1__out;
double _vbr_variable_load2_ib_ia1__out;
double _vbr_variable_load2_ic_ia1__out;
double _vbr_variable_load2_va_va1__out;
double _vbr_variable_load2_vb_va1__out;
double _vbr_variable_load2_vc_va1__out;
double _vbr_variable_load2_in_enable__out;
double _vbr_variable_load2_in_qref__out;
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
double _f1_motor_chiller_compressor_gain1__out;
double _f1_pcc_meas1_bus_join2__out[3];
double _f1_pcc_meas1_bus_join1__out[3];
double _f1_pcc_meas2_bus_join1__out[3];
double _f1_pcc_pcc_measurements_three_phase_pll1_sin__out;
double _f1_pcc_gain4__out;
double _f1_pcc_data_type_conversion1__out;
double _f1_vl_cb1_meas1_bus_join2__out[3];
double _f1_vl_cb1_meas1_bus_join1__out[3];
double _f1_vl_cb1_meas2_bus_join1__out[3];
double _f1_vl_cb2_meas1_bus_join2__out[3];
double _f1_vl_cb2_meas1_bus_join1__out[3];
double _f1_vl_cb2_meas2_bus_join1__out[3];
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
double _microturbine1_engine_sum1__out;
double _microturbine1_governor_gain28__out;
double _microturbine1_governor_sum11__out;
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
double _regd_control_p_ref_diesel_sum9__out;
double _regd_control_p_ref_diesel_sum8__out;
double _regd_control_p_ref_vl1_sum9__out;
double _regd_control_p_ref_vl1_sum8__out;
double _regd_control_p_ref_vl2_sum9__out;
double _regd_control_p_ref_vl2_sum8__out;
double _vbr_variable_load1_control_gain3__out;
double _vbr_variable_load1_control_abc_to_dq1_abc_to_alpha_beta__alpha;
double _vbr_variable_load1_control_abc_to_dq1_abc_to_alpha_beta__beta;
double _vbr_variable_load1_control_abc_to_dq1_abc_to_alpha_beta__gamma;
double _vbr_variable_load1_control_three_phase_pll2_abc_to_dq_abc_to_alpha_beta__alpha;
double _vbr_variable_load1_control_three_phase_pll2_abc_to_dq_abc_to_alpha_beta__beta;
double _vbr_variable_load1_control_three_phase_pll2_abc_to_dq_abc_to_alpha_beta__gamma;
double _vbr_variable_load1_power_meter1__Pdc;
double _vbr_variable_load1_power_meter1__Qdc;
double _vbr_variable_load1_power_meter1__P0dc;
double _vbr_variable_load1_power_meter1__Pac;
double _vbr_variable_load1_power_meter1__Qac;
double _vbr_variable_load1_power_meter1__P0ac;
double _vbr_variable_load1_power_meter1__apparent;
double _vbr_variable_load1_power_meter1__k_factor;
double _vbr_variable_load1_power_meter1__v_alpha;
double _vbr_variable_load1_power_meter1__v_beta;
double _vbr_variable_load1_power_meter1__i_alpha;
double _vbr_variable_load1_power_meter1__i_beta;
double _vbr_variable_load1_power_meter1__v_zero;
double _vbr_variable_load1_power_meter1__i_zero;
double _vbr_variable_load1_power_meter1__filter_1_output;
double _vbr_variable_load1_power_meter1__filter_1_outputQ;
double _vbr_variable_load1_power_meter1__filter_1_outputP0;
double _vbr_variable_load2_control_gain3__out;
double _vbr_variable_load2_control_abc_to_dq1_abc_to_alpha_beta__alpha;
double _vbr_variable_load2_control_abc_to_dq1_abc_to_alpha_beta__beta;
double _vbr_variable_load2_control_abc_to_dq1_abc_to_alpha_beta__gamma;
double _vbr_variable_load2_control_three_phase_pll2_abc_to_dq_abc_to_alpha_beta__alpha;
double _vbr_variable_load2_control_three_phase_pll2_abc_to_dq_abc_to_alpha_beta__beta;
double _vbr_variable_load2_control_three_phase_pll2_abc_to_dq_abc_to_alpha_beta__gamma;
double _vbr_variable_load2_power_meter1__Pdc;
double _vbr_variable_load2_power_meter1__Qdc;
double _vbr_variable_load2_power_meter1__P0dc;
double _vbr_variable_load2_power_meter1__Pac;
double _vbr_variable_load2_power_meter1__Qac;
double _vbr_variable_load2_power_meter1__P0ac;
double _vbr_variable_load2_power_meter1__apparent;
double _vbr_variable_load2_power_meter1__k_factor;
double _vbr_variable_load2_power_meter1__v_alpha;
double _vbr_variable_load2_power_meter1__v_beta;
double _vbr_variable_load2_power_meter1__i_alpha;
double _vbr_variable_load2_power_meter1__i_beta;
double _vbr_variable_load2_power_meter1__v_zero;
double _vbr_variable_load2_power_meter1__i_zero;
double _vbr_variable_load2_power_meter1__filter_1_output;
double _vbr_variable_load2_power_meter1__filter_1_outputQ;
double _vbr_variable_load2_power_meter1__filter_1_outputP0;
double _f1_motor_chiller_compressor_c_function1__w;


double _f1_motor_chiller_compressor_c_function1__T;
double _f1_pcc_pcc_measurements_bus_split2__out;
double _f1_pcc_pcc_measurements_bus_split2__out1;
double _f1_pcc_pcc_measurements_bus_split2__out2;
double _f1_pcc_pcc_measurements_bus_split1__out;
double _f1_pcc_pcc_measurements_bus_split1__out1;
double _f1_pcc_pcc_measurements_bus_split1__out2;
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
double _microturbine1_engine_gain1__out;
double _microturbine1_governor_exciter_activation_sum1__out;
double _microturbine1_governor_sum7__out;
double _microturbine1_governor_gain37__out;
double _microturbine1_be1_25a_synchronizer_gain4__out;
double _microturbine1_cb_control_gain13__out;
double _microturbine1_gain18__out;
double _microturbine1_synchonous_machine_w_m_product1__out;
double _microturbine1_synchonous_machine_c_function1__var;
double _microturbine1_synchonous_machine_c_function1__in;


double _microturbine1_synchonous_machine_c_function1__out;
double _microturbine1_synchonous_machine_v_dg2_product3__out;
double _microturbine1_synchonous_machine_v_qg2_product3__out;
double _regd_control_p_ref_diesel_c_function1__deltaP;
double _regd_control_p_ref_diesel_c_function1__Reg_Max;
double _regd_control_p_ref_diesel_c_function1__Reg_Min;
double _regd_control_p_ref_diesel_c_function1__in;


double _regd_control_p_ref_diesel_c_function1__out;
double _regd_control_p_ref_vl1_c_function1__deltaP;
double _regd_control_p_ref_vl1_c_function1__Reg_Max;
double _regd_control_p_ref_vl1_c_function1__Reg_Min;
double _regd_control_p_ref_vl1_c_function1__in;


double _regd_control_p_ref_vl1_c_function1__out;
double _regd_control_p_ref_vl2_c_function1__deltaP;
double _regd_control_p_ref_vl2_c_function1__Reg_Max;
double _regd_control_p_ref_vl2_c_function1__Reg_Min;
double _regd_control_p_ref_vl2_c_function1__in;


double _regd_control_p_ref_vl2_c_function1__out;
double _vbr_variable_load1_control_abc_to_dq1_alpha_beta_to_dq__d;
double _vbr_variable_load1_control_abc_to_dq1_alpha_beta_to_dq__q;
double _vbr_variable_load1_control_abc_to_dq1_alpha_beta_to_dq__k1;
double _vbr_variable_load1_control_abc_to_dq1_alpha_beta_to_dq__k2;
double _vbr_variable_load1_control_three_phase_pll2_abc_to_dq_alpha_beta_to_dq__d;
double _vbr_variable_load1_control_three_phase_pll2_abc_to_dq_alpha_beta_to_dq__q;
double _vbr_variable_load1_control_three_phase_pll2_abc_to_dq_alpha_beta_to_dq__k1;
double _vbr_variable_load1_control_three_phase_pll2_abc_to_dq_alpha_beta_to_dq__k2;
double _vbr_variable_load1_bus_join2__out[4];
double _vbr_variable_load2_control_abc_to_dq1_alpha_beta_to_dq__d;
double _vbr_variable_load2_control_abc_to_dq1_alpha_beta_to_dq__q;
double _vbr_variable_load2_control_abc_to_dq1_alpha_beta_to_dq__k1;
double _vbr_variable_load2_control_abc_to_dq1_alpha_beta_to_dq__k2;
double _vbr_variable_load2_control_three_phase_pll2_abc_to_dq_alpha_beta_to_dq__d;
double _vbr_variable_load2_control_three_phase_pll2_abc_to_dq_alpha_beta_to_dq__q;
double _vbr_variable_load2_control_three_phase_pll2_abc_to_dq_alpha_beta_to_dq__k1;
double _vbr_variable_load2_control_three_phase_pll2_abc_to_dq_alpha_beta_to_dq__k2;
double _vbr_variable_load2_bus_join2__out[4];
double _f1_pcc_pcc_measurements_power_meter1__Pdc;
double _f1_pcc_pcc_measurements_power_meter1__Qdc;
double _f1_pcc_pcc_measurements_power_meter1__P0dc;
double _f1_pcc_pcc_measurements_power_meter1__Pac;
double _f1_pcc_pcc_measurements_power_meter1__Qac;
double _f1_pcc_pcc_measurements_power_meter1__P0ac;
double _f1_pcc_pcc_measurements_power_meter1__apparent;
double _f1_pcc_pcc_measurements_power_meter1__k_factor;
double _f1_pcc_pcc_measurements_power_meter1__v_alpha;
double _f1_pcc_pcc_measurements_power_meter1__v_beta;
double _f1_pcc_pcc_measurements_power_meter1__i_alpha;
double _f1_pcc_pcc_measurements_power_meter1__i_beta;
double _f1_pcc_pcc_measurements_power_meter1__v_zero;
double _f1_pcc_pcc_measurements_power_meter1__i_zero;
double _f1_pcc_pcc_measurements_power_meter1__filter_1_output;
double _f1_pcc_pcc_measurements_power_meter1__filter_1_outputQ;
double _f1_pcc_pcc_measurements_power_meter1__filter_1_outputP0;
double _f1_pcc_pcc_measurements_rms_value1__out;
double _f1_pcc_pcc_measurements_rms_value1__previous_value;
double _f1_pcc_pcc_measurements_rms_value1__previous_filtered_value;
double _f1_pcc_pcc_measurements_rms_value1__correction;
double _f1_pcc_pcc_measurements_rms_value1__previous_correction;
X_UnInt32 _f1_pcc_pcc_measurements_rms_value1__zc;
double _f1_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_abc_to_alpha_beta__alpha;
double _f1_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_abc_to_alpha_beta__beta;
double _f1_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_abc_to_alpha_beta__gamma;
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
double _microturbine1_governor_exciter_activation_abs1__out;
double _microturbine1_governor_rate_limiter2__in_rate;
double _microturbine1_governor_sum2__out;
double _microturbine1_cb_control_sum10__out;
double _microturbine1_synchonous_machine_abc_to_qd_confine_phase__x;
double _microturbine1_synchonous_machine_abc_to_qd_confine_phase__floor_in;
double _microturbine1_synchonous_machine_abc_to_qd_confine_phase__in;


double _microturbine1_synchonous_machine_abc_to_qd_confine_phase__out;
double _microturbine1_synchonous_machine_qd_to_abc_confine_phase__x;
double _microturbine1_synchonous_machine_qd_to_abc_confine_phase__floor_in;
double _microturbine1_synchonous_machine_qd_to_abc_confine_phase__in;


double _microturbine1_synchonous_machine_qd_to_abc_confine_phase__out;
double _regd_control_p_ref_diesel_sum10__out;
double _regd_control_p_ref_vl1_sum10__out;
double _regd_control_p_ref_vl2_sum10__out;
double _vbr_variable_load1_control_gain4__out;
double _vbr_variable_load1_control_gain5__out;
double _vbr_variable_load1_control_three_phase_pll2_abc_to_dq_lpf_d__out;
double _vbr_variable_load1_control_three_phase_pll2_abc_to_dq_lpf_d__b_coeff[2] = {0.006283185307, 0.006283185307};
double _vbr_variable_load1_control_three_phase_pll2_abc_to_dq_lpf_d__a_coeff[2] = {2.006283185307, -1.993716814693};
double _vbr_variable_load1_control_three_phase_pll2_abc_to_dq_lpf_d__a_sum;
double _vbr_variable_load1_control_three_phase_pll2_abc_to_dq_lpf_d__b_sum;
double _vbr_variable_load1_control_three_phase_pll2_abc_to_dq_lpf_d__delay_line_in;
X_UnInt32 _vbr_variable_load1_control_three_phase_pll2_abc_to_dq_lpf_d__i;
double _vbr_variable_load1_control_three_phase_pll2_abc_to_dq_lpf_q__out;
double _vbr_variable_load1_control_three_phase_pll2_abc_to_dq_lpf_q__b_coeff[2] = {0.006283185307, 0.006283185307};
double _vbr_variable_load1_control_three_phase_pll2_abc_to_dq_lpf_q__a_coeff[2] = {2.006283185307, -1.993716814693};
double _vbr_variable_load1_control_three_phase_pll2_abc_to_dq_lpf_q__a_sum;
double _vbr_variable_load1_control_three_phase_pll2_abc_to_dq_lpf_q__b_sum;
double _vbr_variable_load1_control_three_phase_pll2_abc_to_dq_lpf_q__delay_line_in;
X_UnInt32 _vbr_variable_load1_control_three_phase_pll2_abc_to_dq_lpf_q__i;
double _vbr_variable_load1_out_bus_split1__out;
double _vbr_variable_load1_out_bus_split1__out1;
double _vbr_variable_load1_out_bus_split1__out2;
double _vbr_variable_load1_out_bus_split1__out3;
double _vbr_variable_load2_control_gain4__out;
double _vbr_variable_load2_control_gain5__out;
double _vbr_variable_load2_control_three_phase_pll2_abc_to_dq_lpf_d__out;
double _vbr_variable_load2_control_three_phase_pll2_abc_to_dq_lpf_d__b_coeff[2] = {0.006283185307, 0.006283185307};
double _vbr_variable_load2_control_three_phase_pll2_abc_to_dq_lpf_d__a_coeff[2] = {2.006283185307, -1.993716814693};
double _vbr_variable_load2_control_three_phase_pll2_abc_to_dq_lpf_d__a_sum;
double _vbr_variable_load2_control_three_phase_pll2_abc_to_dq_lpf_d__b_sum;
double _vbr_variable_load2_control_three_phase_pll2_abc_to_dq_lpf_d__delay_line_in;
X_UnInt32 _vbr_variable_load2_control_three_phase_pll2_abc_to_dq_lpf_d__i;
double _vbr_variable_load2_control_three_phase_pll2_abc_to_dq_lpf_q__out;
double _vbr_variable_load2_control_three_phase_pll2_abc_to_dq_lpf_q__b_coeff[2] = {0.006283185307, 0.006283185307};
double _vbr_variable_load2_control_three_phase_pll2_abc_to_dq_lpf_q__a_coeff[2] = {2.006283185307, -1.993716814693};
double _vbr_variable_load2_control_three_phase_pll2_abc_to_dq_lpf_q__a_sum;
double _vbr_variable_load2_control_three_phase_pll2_abc_to_dq_lpf_q__b_sum;
double _vbr_variable_load2_control_three_phase_pll2_abc_to_dq_lpf_q__delay_line_in;
X_UnInt32 _vbr_variable_load2_control_three_phase_pll2_abc_to_dq_lpf_q__i;
double _vbr_variable_load2_out_bus_split1__out;
double _vbr_variable_load2_out_bus_split1__out1;
double _vbr_variable_load2_out_bus_split1__out2;
double _vbr_variable_load2_out_bus_split1__out3;
double _f1_pcc_pcc_measurements_comparator1__out;
double _f1_pcc_pcc_measurements_comparator2__out;
double _f1_pcc_w____kw__out;
double _f1_pcc_var____kvar__out;
double _f1_pcc_gain3__out;
double _f1_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_alpha_beta_to_dq__d;
double _f1_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_alpha_beta_to_dq__q;
double _f1_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_alpha_beta_to_dq__k1;
double _f1_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_alpha_beta_to_dq__k2;
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
double _microturbine1_governor_exciter_activation_comparator1__out;
double _microturbine1_governor_gain29__out;
double _microturbine1_cb_control_abs7__out;
double _microturbine1_synchonous_machine_abc_to_qd_sum2__out;
double _microturbine1_synchonous_machine_abc_to_qd_sum4__out;
double _microturbine1_synchonous_machine_abc_to_qd_trigonometric_function3__out;
double _microturbine1_synchonous_machine_abc_to_qd_trigonometric_function5__out;
double _microturbine1_synchonous_machine_qd_to_abc_sum2__out;
double _microturbine1_synchonous_machine_qd_to_abc_sum4__out;
double _microturbine1_synchonous_machine_qd_to_abc_trigonometric_function2__out;
double _microturbine1_synchonous_machine_qd_to_abc_trigonometric_function3__out;
double _vbr_variable_load1_in_bus_join1__out[3];
double _vbr_variable_load2_in_bus_join1__out[3];
double _vbr_variable_load1_control_current_control_product2__out;
double _vbr_variable_load1_control_current_control_product1__out;
double _vbr_variable_load1_control_gain1__out;
double _vbr_variable_load1_control_gain2__out;
double _vbr_variable_load1_control_three_phase_pll2_normalize__in1;
double _vbr_variable_load1_control_three_phase_pll2_normalize__in2;


double _vbr_variable_load1_control_three_phase_pll2_normalize__in2_pu;
double _vbr_variable_load1_control_three_phase_pll2_normalize__pk;
double _vbr_variable_load2_control_current_control_product2__out;
double _vbr_variable_load2_control_current_control_product1__out;
double _vbr_variable_load2_control_gain1__out;
double _vbr_variable_load2_control_gain2__out;
double _vbr_variable_load2_control_three_phase_pll2_normalize__in1;
double _vbr_variable_load2_control_three_phase_pll2_normalize__in2;


double _vbr_variable_load2_control_three_phase_pll2_normalize__in2_pu;
double _vbr_variable_load2_control_three_phase_pll2_normalize__pk;
double _f1_pcc_gain1__out;
double _f1_pcc_gain2__out;
double _f1_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_d__out;
double _f1_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_d__b_coeff[2] = {0.06283185307, 0.06283185307};
double _f1_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_d__a_coeff[2] = {2.06283185307, -1.93716814693};
double _f1_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_d__a_sum;
double _f1_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_d__b_sum;
double _f1_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_d__delay_line_in;
X_UnInt32 _f1_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_d__i;
double _f1_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_q__out;
double _f1_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_q__b_coeff[2] = {0.06283185307, 0.06283185307};
double _f1_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_q__a_coeff[2] = {2.06283185307, -1.93716814693};
double _f1_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_q__a_sum;
double _f1_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_q__b_sum;
double _f1_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_q__delay_line_in;
X_UnInt32 _f1_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_q__i;
double _microturbine1_be1_25a_synchronizer_abc_to_qd1_sum3__out;
double _microturbine1_be1_25a_synchronizer_abc_to_qd1_sum5__out;
double _microturbine1_be1_25a_synchronizer_abc_to_qd_gain1__out;
double _microturbine1_be1_25a_synchronizer_abc_to_qd_gain2__out;
double _microturbine1_exciter_gain18__out;
double _microturbine1_exciter_pi_sum6__out;
double _microturbine1_exciter_gain8__out;
double _microturbine1_governor_exciter_activation_activate_exciter__boolean;


X_Int32 _microturbine1_governor_exciter_activation_activate_exciter__Activate;
double _microturbine1_governor_sum10__out;
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
double _vbr_variable_load1_subsystem1_bus_split1__out;
double _vbr_variable_load1_subsystem1_bus_split1__out1;
double _vbr_variable_load1_subsystem1_bus_split1__out2;
double _vbr_variable_load2_subsystem1_bus_split1__out;
double _vbr_variable_load2_subsystem1_bus_split1__out1;
double _vbr_variable_load2_subsystem1_bus_split1__out2;
double _vbr_variable_load1_control_current_control_gain11__out;
double _vbr_variable_load1_control_current_control_gain8__out;
double _vbr_variable_load1_control_current_ref_product4__out;
double _vbr_variable_load1_control_current_ref_product5__out;
double _vbr_variable_load1_control_current_ref_product3__out;
double _vbr_variable_load1_control_current_ref_product6__out;
double _vbr_variable_load1_control_gain12__out;
double _vbr_variable_load1_control_three_phase_pll2_pid_kd__out;
double _vbr_variable_load1_control_three_phase_pll2_pid_ki__out;
double _vbr_variable_load1_control_three_phase_pll2_pid_kp__out;
double _vbr_variable_load2_control_current_control_gain11__out;
double _vbr_variable_load2_control_current_control_gain8__out;
double _vbr_variable_load2_control_current_ref_product4__out;
double _vbr_variable_load2_control_current_ref_product5__out;
double _vbr_variable_load2_control_current_ref_product3__out;
double _vbr_variable_load2_control_current_ref_product6__out;
double _vbr_variable_load2_control_gain12__out;
double _vbr_variable_load2_control_three_phase_pll2_pid_kd__out;
double _vbr_variable_load2_control_three_phase_pll2_pid_ki__out;
double _vbr_variable_load2_control_three_phase_pll2_pid_kp__out;
double _f1_pcc_bus_join1__out[8];
double _f1_pcc_pcc_measurements_three_phase_pll1_normalize__in1;
double _f1_pcc_pcc_measurements_three_phase_pll1_normalize__in2;


double _f1_pcc_pcc_measurements_three_phase_pll1_normalize__in2_pu;
double _f1_pcc_pcc_measurements_three_phase_pll1_normalize__pk;
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
double _vbr_variable_load1_control_signal_switch1__out;
double _vbr_variable_load1_control_signal_switch2__out;
double _vbr_variable_load1_control_current_control_pi_d_integrator1__out;
double _vbr_variable_load1_control_current_control_pi_q_integrator1__out;
float _vbr_variable_load1_enable_probe__tmp;
double _vbr_variable_load2_control_signal_switch1__out;
double _vbr_variable_load2_control_signal_switch2__out;
double _vbr_variable_load2_control_current_control_pi_d_integrator1__out;
double _vbr_variable_load2_control_current_control_pi_q_integrator1__out;
float _vbr_variable_load2_enable_probe__tmp;
double _vbr_variable_load1_control_current_ref_sum3__out;
double _vbr_variable_load1_control_current_ref_sum4__out;
double _vbr_variable_load1_control_current_ref_product7__out;
double _vbr_variable_load1_control_three_phase_pll2_pid_sum8__out;
double _vbr_variable_load2_control_current_ref_sum3__out;
double _vbr_variable_load2_control_current_ref_sum4__out;
double _vbr_variable_load2_control_current_ref_product7__out;
double _vbr_variable_load2_control_three_phase_pll2_pid_sum8__out;
double _f1_pcc_pcc_measurements_three_phase_pll1_pid_kd__out;
double _f1_pcc_pcc_measurements_three_phase_pll1_pid_ki__out;
double _f1_pcc_pcc_measurements_three_phase_pll1_pid_kp__out;
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
double _vbr_variable_load1_control_gain8__out;
double _vbr_variable_load1_control_gain9__out;
double _vbr_variable_load2_control_gain8__out;
double _vbr_variable_load2_control_gain9__out;
double _vbr_variable_load1_control_current_ref_limit3__out;
double _vbr_variable_load1_control_three_phase_pll2_pid_gain1__out;
double _vbr_variable_load2_control_current_ref_limit3__out;
double _vbr_variable_load2_control_three_phase_pll2_pid_gain1__out;
double _f1_pcc_pcc_measurements_three_phase_pll1_pid_sum8__out;
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
double _vbr_variable_load1_control_limit_pqref_priority_pqlim_pq_limiting_with_priority__signQ;
double _vbr_variable_load1_control_limit_pqref_priority_pqlim_pq_limiting_with_priority__signP;
double _vbr_variable_load1_control_limit_pqref_priority_pqlim_pq_limiting_with_priority__Sref;
double _vbr_variable_load1_control_limit_pqref_priority_pqlim_pq_limiting_with_priority__Pref;
double _vbr_variable_load1_control_limit_pqref_priority_pqlim_pq_limiting_with_priority__Qref;
double _vbr_variable_load1_control_limit_pqref_priority_pqlim_pq_limiting_with_priority__Smax;


double _vbr_variable_load1_control_limit_pqref_priority_pqlim_pq_limiting_with_priority__P;
double _vbr_variable_load1_control_limit_pqref_priority_pqlim_pq_limiting_with_priority__Q;
double _vbr_variable_load1_control_limit_pqref_priority_pqlim_pq_limiting_with_priority__S;
double _vbr_variable_load2_control_limit_pqref_priority_pqlim_pq_limiting_with_priority__signQ;
double _vbr_variable_load2_control_limit_pqref_priority_pqlim_pq_limiting_with_priority__signP;
double _vbr_variable_load2_control_limit_pqref_priority_pqlim_pq_limiting_with_priority__Sref;
double _vbr_variable_load2_control_limit_pqref_priority_pqlim_pq_limiting_with_priority__Pref;
double _vbr_variable_load2_control_limit_pqref_priority_pqlim_pq_limiting_with_priority__Qref;
double _vbr_variable_load2_control_limit_pqref_priority_pqlim_pq_limiting_with_priority__Smax;


double _vbr_variable_load2_control_limit_pqref_priority_pqlim_pq_limiting_with_priority__P;
double _vbr_variable_load2_control_limit_pqref_priority_pqlim_pq_limiting_with_priority__Q;
double _vbr_variable_load2_control_limit_pqref_priority_pqlim_pq_limiting_with_priority__S;
double _vbr_variable_load1_control_current_ref_product1__out;
double _vbr_variable_load1_control_current_ref_product2__out;
double _vbr_variable_load1_control_three_phase_pll2_pid_sum5__out;
double _vbr_variable_load2_control_current_ref_product1__out;
double _vbr_variable_load2_control_current_ref_product2__out;
double _vbr_variable_load2_control_three_phase_pll2_pid_sum5__out;
double _f1_pcc_pcc_measurements_three_phase_pll1_pid_gain1__out;
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
double _vbr_variable_load1_control_limit_pqref_p_rate_limit__in_rate;
double _vbr_variable_load1_control_limit_pqref_q_rate_limit__in_rate;
double _vbr_variable_load1_control_limit_pqref_s_rate_limit__in_rate;
double _vbr_variable_load2_control_limit_pqref_p_rate_limit__in_rate;
double _vbr_variable_load2_control_limit_pqref_q_rate_limit__in_rate;
double _vbr_variable_load2_control_limit_pqref_s_rate_limit__in_rate;
double _vbr_variable_load1_control_current_control_sum4__out;
double _vbr_variable_load1_control_current_control_sum2__out;
double _vbr_variable_load1_control_three_phase_pll2_pid_limit1__out;
double _vbr_variable_load2_control_current_control_sum4__out;
double _vbr_variable_load2_control_current_control_sum2__out;
double _vbr_variable_load2_control_three_phase_pll2_pid_limit1__out;
double _f1_pcc_pcc_measurements_three_phase_pll1_pid_sum5__out;
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
double _vbr_variable_load1_control_limit_pqref_lims_overpq_s_limiting_over_pq__S_PQref;
double _vbr_variable_load1_control_limit_pqref_lims_overpq_s_limiting_over_pq__Pref;
double _vbr_variable_load1_control_limit_pqref_lims_overpq_s_limiting_over_pq__Qref;
double _vbr_variable_load1_control_limit_pqref_lims_overpq_s_limiting_over_pq__Sref;


double _vbr_variable_load1_control_limit_pqref_lims_overpq_s_limiting_over_pq__P;
double _vbr_variable_load1_control_limit_pqref_lims_overpq_s_limiting_over_pq__Q;
double _vbr_variable_load2_control_limit_pqref_lims_overpq_s_limiting_over_pq__S_PQref;
double _vbr_variable_load2_control_limit_pqref_lims_overpq_s_limiting_over_pq__Pref;
double _vbr_variable_load2_control_limit_pqref_lims_overpq_s_limiting_over_pq__Qref;
double _vbr_variable_load2_control_limit_pqref_lims_overpq_s_limiting_over_pq__Sref;


double _vbr_variable_load2_control_limit_pqref_lims_overpq_s_limiting_over_pq__P;
double _vbr_variable_load2_control_limit_pqref_lims_overpq_s_limiting_over_pq__Q;
double _vbr_variable_load1_control_current_control_pi_q_ki__out;
double _vbr_variable_load1_control_current_control_pi_q_kp__out;
double _vbr_variable_load1_control_current_control_pi_d_ki__out;
double _vbr_variable_load1_control_current_control_pi_d_kp__out;
double _vbr_variable_load1_control_three_phase_pll2_pid_sum6__out;
double _vbr_variable_load1_control_three_phase_pll2_rate_limiter1__in_rate;
double _vbr_variable_load1_control_three_phase_pll2_integrator__in;


double _vbr_variable_load1_control_three_phase_pll2_integrator__out;
double _vbr_variable_load2_control_current_control_pi_q_ki__out;
double _vbr_variable_load2_control_current_control_pi_q_kp__out;
double _vbr_variable_load2_control_current_control_pi_d_ki__out;
double _vbr_variable_load2_control_current_control_pi_d_kp__out;
double _vbr_variable_load2_control_three_phase_pll2_pid_sum6__out;
double _vbr_variable_load2_control_three_phase_pll2_rate_limiter1__in_rate;
double _vbr_variable_load2_control_three_phase_pll2_integrator__in;


double _vbr_variable_load2_control_three_phase_pll2_integrator__out;
double _f1_pcc_pcc_measurements_three_phase_pll1_pid_limit1__out;
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
double _vbr_variable_load1_control_current_control_pi_q_sum5__out;
double _vbr_variable_load1_control_current_control_pi_d_sum5__out;
double _vbr_variable_load1_control_three_phase_pll2_pid_kb__out;
double _vbr_variable_load1_control_three_phase_pll2_lpf_lpf__out;
double _vbr_variable_load1_control_three_phase_pll2_lpf_lpf__b_coeff[2] = {2.220446049250313e-16, 0.0002467400073613568};
double _vbr_variable_load1_control_three_phase_pll2_lpf_lpf__a_coeff[3] = {1.0, -1.97778894456, 0.9780356845673617};
double _vbr_variable_load1_control_three_phase_pll2_lpf_lpf__a_sum;
double _vbr_variable_load1_control_three_phase_pll2_lpf_lpf__b_sum;
double _vbr_variable_load1_control_three_phase_pll2_lpf_lpf__delay_line_in;
X_UnInt32 _vbr_variable_load1_control_three_phase_pll2_lpf_lpf__i;
double _vbr_variable_load2_control_current_control_pi_q_sum5__out;
double _vbr_variable_load2_control_current_control_pi_d_sum5__out;
double _vbr_variable_load2_control_three_phase_pll2_pid_kb__out;
double _vbr_variable_load2_control_three_phase_pll2_lpf_lpf__out;
double _vbr_variable_load2_control_three_phase_pll2_lpf_lpf__b_coeff[2] = {2.220446049250313e-16, 0.0002467400073613568};
double _vbr_variable_load2_control_three_phase_pll2_lpf_lpf__a_coeff[3] = {1.0, -1.97778894456, 0.9780356845673617};
double _vbr_variable_load2_control_three_phase_pll2_lpf_lpf__a_sum;
double _vbr_variable_load2_control_three_phase_pll2_lpf_lpf__b_sum;
double _vbr_variable_load2_control_three_phase_pll2_lpf_lpf__delay_line_in;
X_UnInt32 _vbr_variable_load2_control_three_phase_pll2_lpf_lpf__i;
double _f1_pcc_pcc_measurements_three_phase_pll1_pid_sum6__out;
double _f1_pcc_pcc_measurements_three_phase_pll1_rate_limiter1__in_rate;
double _f1_pcc_pcc_measurements_three_phase_pll1_integrator__in;


double _f1_pcc_pcc_measurements_three_phase_pll1_integrator__out;
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
double _vbr_variable_load1_control_current_control_pi_q_limit1__out;
double _vbr_variable_load1_control_current_control_pi_d_limit1__out;
double _vbr_variable_load1_control_three_phase_pll2_pid_sum7__out;
double _vbr_variable_load2_control_current_control_pi_q_limit1__out;
double _vbr_variable_load2_control_current_control_pi_d_limit1__out;
double _vbr_variable_load2_control_three_phase_pll2_pid_sum7__out;
double _f1_pcc_pcc_measurements_three_phase_pll1_pid_kb__out;
double _f1_pcc_pcc_measurements_three_phase_pll1_lpf_lpf__out;
double _f1_pcc_pcc_measurements_three_phase_pll1_lpf_lpf__b_coeff[1] = {0.024674000736159996};
double _f1_pcc_pcc_measurements_three_phase_pll1_lpf_lpf__a_coeff[3] = {1.0, -1.7778894456, 0.8025634463361601};
double _f1_pcc_pcc_measurements_three_phase_pll1_lpf_lpf__a_sum;
double _f1_pcc_pcc_measurements_three_phase_pll1_lpf_lpf__b_sum;
double _f1_pcc_pcc_measurements_three_phase_pll1_lpf_lpf__delay_line_in;
X_UnInt32 _f1_pcc_pcc_measurements_three_phase_pll1_lpf_lpf__i;
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
double _vbr_variable_load1_control_current_control_gain10__out;
double _vbr_variable_load1_control_current_control_pi_q_sum6__out;
double _vbr_variable_load1_control_current_control_gain9__out;
double _vbr_variable_load1_control_current_control_pi_d_sum6__out;
double _vbr_variable_load2_control_current_control_gain10__out;
double _vbr_variable_load2_control_current_control_pi_q_sum6__out;
double _vbr_variable_load2_control_current_control_gain9__out;
double _vbr_variable_load2_control_current_control_pi_d_sum6__out;
double _f1_pcc_pcc_measurements_three_phase_pll1_pid_sum7__out;
float _microturbine1_be1_25a_synchronizer_digital_probe3__tmp;
float _microturbine1_be1_25a_synchronizer_digital_probe5__tmp;
double _microturbine1_be1_25a_synchronizer_logical_operator1__out;
double _microturbine1_cb_control_logical_operator8__out;
float _microturbine1_cb_control_mt_sync_off__tmp;
double _microturbine1_synchonous_machine_v_qg2_sum2__out;
double _microturbine1_synchonous_machine_e_qp_product1__out;
double _microturbine1_synchonous_machine_v_dg2_sum2__out;
double _microturbine1_synchonous_machine_w_m_sum2__out;
double _vbr_variable_load1_control_current_control_sum6__out;
double _vbr_variable_load1_control_current_control_pi_q_kb__out;
double _vbr_variable_load1_control_current_control_sum1__out;
double _vbr_variable_load1_control_current_control_pi_d_kb__out;
double _vbr_variable_load2_control_current_control_sum6__out;
double _vbr_variable_load2_control_current_control_pi_q_kb__out;
double _vbr_variable_load2_control_current_control_sum1__out;
double _vbr_variable_load2_control_current_control_pi_d_kb__out;
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
double _vbr_variable_load1_control_current_control_limit2__out;
double _vbr_variable_load1_control_current_control_pi_q_sum7__out;
double _vbr_variable_load1_control_current_control_limit1__out;
double _vbr_variable_load1_control_current_control_pi_d_sum7__out;
double _vbr_variable_load2_control_current_control_limit2__out;
double _vbr_variable_load2_control_current_control_pi_q_sum7__out;
double _vbr_variable_load2_control_current_control_limit1__out;
double _vbr_variable_load2_control_current_control_pi_d_sum7__out;
double _microturbine1_cb_control_logical_operator1__out;
double _microturbine1_synchonous_machine_qd_to_abc_product1__out;
double _microturbine1_synchonous_machine_qd_to_abc_product3__out;
double _microturbine1_synchonous_machine_qd_to_abc_product5__out;
double _microturbine1_synchonous_machine_e_qp_gain1__out;
double _microturbine1_synchonous_machine_qd_to_abc_product2__out;
double _microturbine1_synchonous_machine_qd_to_abc_product4__out;
double _microturbine1_synchonous_machine_qd_to_abc_product6__out;
double _vbr_variable_load1_control_current_control_gain13__out;
double _vbr_variable_load1_control_current_control_gain12__out;
double _vbr_variable_load2_control_current_control_gain13__out;
double _vbr_variable_load2_control_current_control_gain12__out;
X_Int32 _microturbine1_cb_control_stay_connected1__var;
double _microturbine1_cb_control_stay_connected1__connect;
double _microturbine1_cb_control_stay_connected1__disconnect;


X_Int32 _microturbine1_cb_control_stay_connected1__action;
double _microturbine1_synchonous_machine_qd_to_abc_sum3__out;
double _microturbine1_synchonous_machine_qd_to_abc_sum5__out;
double _microturbine1_synchonous_machine_qd_to_abc_sum6__out;
double _vbr_variable_load1_control_dq_to_abc1_dq_to_alpha_beta__alpha;
double _vbr_variable_load1_control_dq_to_abc1_dq_to_alpha_beta__beta;
double _vbr_variable_load1_control_dq_to_abc1_dq_to_alpha_beta__k1;
double _vbr_variable_load1_control_dq_to_abc1_dq_to_alpha_beta__k2;
double _vbr_variable_load2_control_dq_to_abc1_dq_to_alpha_beta__alpha;
double _vbr_variable_load2_control_dq_to_abc1_dq_to_alpha_beta__beta;
double _vbr_variable_load2_control_dq_to_abc1_dq_to_alpha_beta__k1;
double _vbr_variable_load2_control_dq_to_abc1_dq_to_alpha_beta__k2;
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
double _vbr_variable_load1_control_dq_to_abc1_alpha_beta_to_abc__A;
double _vbr_variable_load1_control_dq_to_abc1_alpha_beta_to_abc__B;
double _vbr_variable_load1_control_dq_to_abc1_alpha_beta_to_abc__C;
double _vbr_variable_load2_control_dq_to_abc1_alpha_beta_to_abc__A;
double _vbr_variable_load2_control_dq_to_abc1_alpha_beta_to_abc__B;
double _vbr_variable_load2_control_dq_to_abc1_alpha_beta_to_abc__C;
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
double _f1_pcc_pcc_measurements_three_phase_pll1_pid_integrator1__state;
double _f1_pcc_pcc_measurements_three_phase_pll1_pid_integrator2__state;
double _f1_pcc_pcc_measurements_three_phase_pll1_unit_delay1__state;
X_UnInt32 _f1_pcc_sr_flip_flop1__state;
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

double _microturbine1_governor_rate_transition4_output__out =  0.0;

double _microturbine1_synchonous_machine_e_qp_integrator1__state;
double _microturbine1_synchonous_machine_phi_1d_a_integrator1__state;
double _microturbine1_synchonous_machine_phi_2q_a_integrator1__state;
double _microturbine1_synchonous_machine_rate_transition1_output__out =  0.0;

double _microturbine1_synchonous_machine_rate_transition2_output__out =  0.0;

double _microturbine1_synchonous_machine_w_m_integrator1__state;
double _vbr_variable_load1_control_limit_pqref_unit_delay1__state;
double _vbr_variable_load1_control_limit_pqref_unit_delay2__state;
double _vbr_variable_load1_control_three_phase_pll2_pid_integrator1__state;
double _vbr_variable_load1_control_three_phase_pll2_pid_integrator2__state;
double _vbr_variable_load1_control_three_phase_pll2_unit_delay1__state;
double _vbr_variable_load2_control_limit_pqref_unit_delay1__state;
double _vbr_variable_load2_control_limit_pqref_unit_delay2__state;
double _vbr_variable_load2_control_three_phase_pll2_pid_integrator1__state;
double _vbr_variable_load2_control_three_phase_pll2_pid_integrator2__state;
double _vbr_variable_load2_control_three_phase_pll2_unit_delay1__state;
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
double _vbr_variable_load1_power_meter1__filter_1_output_k_minus_1;
double _vbr_variable_load1_power_meter1__filter_1_input_k_minus_1;
double _vbr_variable_load1_power_meter1__filter_1_output_k_minus_1Q;
double _vbr_variable_load1_power_meter1__filter_1_input_k_minus_1Q;
double _vbr_variable_load1_power_meter1__filter_1_output_k_minus_1P0;
double _vbr_variable_load1_power_meter1__filter_1_input_k_minus_1P0;
double _vbr_variable_load2_power_meter1__filter_1_output_k_minus_1;
double _vbr_variable_load2_power_meter1__filter_1_input_k_minus_1;
double _vbr_variable_load2_power_meter1__filter_1_output_k_minus_1Q;
double _vbr_variable_load2_power_meter1__filter_1_input_k_minus_1Q;
double _vbr_variable_load2_power_meter1__filter_1_output_k_minus_1P0;
double _vbr_variable_load2_power_meter1__filter_1_input_k_minus_1P0;
double _f1_pcc_pcc_measurements_power_meter1__filter_1_output_k_minus_1;
double _f1_pcc_pcc_measurements_power_meter1__filter_1_input_k_minus_1;
double _f1_pcc_pcc_measurements_power_meter1__filter_1_output_k_minus_1Q;
double _f1_pcc_pcc_measurements_power_meter1__filter_1_input_k_minus_1Q;
double _f1_pcc_pcc_measurements_power_meter1__filter_1_output_k_minus_1P0;
double _f1_pcc_pcc_measurements_power_meter1__filter_1_input_k_minus_1P0;
double _f1_pcc_pcc_measurements_rms_value1__square_sum;
double _f1_pcc_pcc_measurements_rms_value1__sample_cnt;
double _f1_pcc_pcc_measurements_rms_value1__filtered_value;
double _f1_pcc_pcc_measurements_rms_value1__out_state;
double _microturbine1_governor_rate_limiter2__prev_out;
double _microturbine1_governor_rate_limiter2__out;
int _microturbine1_governor_rate_limiter2__first_step;
double _vbr_variable_load1_control_three_phase_pll2_abc_to_dq_lpf_d__states[1];
double _vbr_variable_load1_control_three_phase_pll2_abc_to_dq_lpf_q__states[1];
double _vbr_variable_load2_control_three_phase_pll2_abc_to_dq_lpf_d__states[1];
double _vbr_variable_load2_control_three_phase_pll2_abc_to_dq_lpf_q__states[1];
double _f1_pcc_pcc_measurements_comparator1__state;
double _f1_pcc_pcc_measurements_comparator2__state;
double _microturbine1_exciter_rate_limit__prev_out;
double _microturbine1_exciter_rate_limit__out;
int _microturbine1_exciter_rate_limit__first_step;
double _microturbine1_governor_exciter_activation_comparator1__state;
double _f1_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_d__states[1];
double _f1_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_q__states[1];
double _microturbine1_governor_discrete_transfer_function1__states[1];
double _vbr_variable_load1_control_current_control_pi_d_integrator1__state;
double _vbr_variable_load1_control_current_control_pi_d_integrator1__reset_state;
double _vbr_variable_load1_control_current_control_pi_q_integrator1__state;
double _vbr_variable_load1_control_current_control_pi_q_integrator1__reset_state;
double _vbr_variable_load2_control_current_control_pi_d_integrator1__state;
double _vbr_variable_load2_control_current_control_pi_d_integrator1__reset_state;
double _vbr_variable_load2_control_current_control_pi_q_integrator1__state;
double _vbr_variable_load2_control_current_control_pi_q_integrator1__reset_state;
double _microturbine1_be1_25a_synchronizer_pll_pid_controller1__integrator_state;
X_UnInt32 _microturbine1_be1_25a_synchronizer_pll_pid_controller1__av_active;
double _microturbine1_be1_25a_synchronizer_pll_pid_controller1__filter_state;
double _microturbine1_governor_discrete_transfer_function2__states[2];
double _vbr_variable_load1_control_limit_pqref_p_rate_limit__prev_out;
double _vbr_variable_load1_control_limit_pqref_p_rate_limit__out;
int _vbr_variable_load1_control_limit_pqref_p_rate_limit__first_step;
double _vbr_variable_load1_control_limit_pqref_q_rate_limit__prev_out;
double _vbr_variable_load1_control_limit_pqref_q_rate_limit__out;
int _vbr_variable_load1_control_limit_pqref_q_rate_limit__first_step;
double _vbr_variable_load1_control_limit_pqref_s_rate_limit__prev_out;
double _vbr_variable_load1_control_limit_pqref_s_rate_limit__out;
int _vbr_variable_load1_control_limit_pqref_s_rate_limit__first_step;
double _vbr_variable_load2_control_limit_pqref_p_rate_limit__prev_out;
double _vbr_variable_load2_control_limit_pqref_p_rate_limit__out;
int _vbr_variable_load2_control_limit_pqref_p_rate_limit__first_step;
double _vbr_variable_load2_control_limit_pqref_q_rate_limit__prev_out;
double _vbr_variable_load2_control_limit_pqref_q_rate_limit__out;
int _vbr_variable_load2_control_limit_pqref_q_rate_limit__first_step;
double _vbr_variable_load2_control_limit_pqref_s_rate_limit__prev_out;
double _vbr_variable_load2_control_limit_pqref_s_rate_limit__out;
int _vbr_variable_load2_control_limit_pqref_s_rate_limit__first_step;
double _vbr_variable_load1_control_three_phase_pll2_rate_limiter1__prev_out;
double _vbr_variable_load1_control_three_phase_pll2_rate_limiter1__out;
int _vbr_variable_load1_control_three_phase_pll2_rate_limiter1__first_step;
double _vbr_variable_load2_control_three_phase_pll2_rate_limiter1__prev_out;
double _vbr_variable_load2_control_three_phase_pll2_rate_limiter1__out;
int _vbr_variable_load2_control_three_phase_pll2_rate_limiter1__first_step;
double _vbr_variable_load1_control_three_phase_pll2_lpf_lpf__states[2];
double _vbr_variable_load2_control_three_phase_pll2_lpf_lpf__states[2];
double _f1_pcc_pcc_measurements_three_phase_pll1_rate_limiter1__prev_out;
double _f1_pcc_pcc_measurements_three_phase_pll1_rate_limiter1__out;
int _f1_pcc_pcc_measurements_three_phase_pll1_rate_limiter1__first_step;
double _f1_pcc_pcc_measurements_three_phase_pll1_lpf_lpf__states[2];
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
    _f1_pcc_pcc_measurements_three_phase_pll1_pid_integrator1__state = 376.99111843;
    _f1_pcc_pcc_measurements_three_phase_pll1_pid_integrator2__state = 0.0;
    _f1_pcc_pcc_measurements_three_phase_pll1_unit_delay1__state = 0.0;
    _f1_pcc_sr_flip_flop1__state = (double) 0;
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
    _microturbine1_governor_rate_transition4_output__out =  0.0;
    _microturbine1_synchonous_machine_e_qp_integrator1__state = 0.0;
    _microturbine1_synchonous_machine_phi_1d_a_integrator1__state = 0.0;
    _microturbine1_synchonous_machine_phi_2q_a_integrator1__state = 0.0;
    _microturbine1_synchonous_machine_rate_transition1_output__out =  0.0;
    _microturbine1_synchonous_machine_rate_transition2_output__out =  0.0;
    _microturbine1_synchonous_machine_w_m_integrator1__state = 0.0;
    _vbr_variable_load1_control_limit_pqref_unit_delay1__state = 0.0;
    _vbr_variable_load1_control_limit_pqref_unit_delay2__state = 0.0;
    _vbr_variable_load1_control_three_phase_pll2_pid_integrator1__state = 376.99111843;
    _vbr_variable_load1_control_three_phase_pll2_pid_integrator2__state = 0.0;
    _vbr_variable_load1_control_three_phase_pll2_unit_delay1__state = 0.0;
    _vbr_variable_load2_control_limit_pqref_unit_delay1__state = 0.0;
    _vbr_variable_load2_control_limit_pqref_unit_delay2__state = 0.0;
    _vbr_variable_load2_control_three_phase_pll2_pid_integrator1__state = 376.99111843;
    _vbr_variable_load2_control_three_phase_pll2_pid_integrator2__state = 0.0;
    _vbr_variable_load2_control_three_phase_pll2_unit_delay1__state = 0.0;
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
    HIL_OutAO(0x401a, 0.0f);
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
    HIL_OutAO(0x4029, 0.0f);
    HIL_OutAO(0x402b, 0.0f);
    HIL_OutAO(0x4030, 0.0f);
    HIL_OutAO(0x4031, 0.0f);
    HIL_OutAO(0x4037, 0.0f);
    _microturbine1_three_phase_meter1_pq_measure_pq_power_meter1__filter_1_output_k_minus_1 = 0.0;
    _microturbine1_three_phase_meter1_pq_measure_pq_power_meter1__filter_1_input_k_minus_1 = 0.0;
    _microturbine1_three_phase_meter1_pq_measure_pq_power_meter1__filter_1_output_k_minus_1Q = 0.0;
    _microturbine1_three_phase_meter1_pq_measure_pq_power_meter1__filter_1_input_k_minus_1Q = 0.0;
    _microturbine1_three_phase_meter1_pq_measure_pq_power_meter1__filter_1_output_k_minus_1P0 = 0.0;
    _microturbine1_three_phase_meter1_pq_measure_pq_power_meter1__filter_1_input_k_minus_1P0 = 0.0;
    HIL_OutAO(0x4039, 0.0f);
    HIL_OutAO(0x403a, 0.0f);
    HIL_OutAO(0x403b, 0.0f);
    _vbr_variable_load1_power_meter1__filter_1_output_k_minus_1 = 0.0;
    _vbr_variable_load1_power_meter1__filter_1_input_k_minus_1 = 0.0;
    _vbr_variable_load1_power_meter1__filter_1_output_k_minus_1Q = 0.0;
    _vbr_variable_load1_power_meter1__filter_1_input_k_minus_1Q = 0.0;
    _vbr_variable_load1_power_meter1__filter_1_output_k_minus_1P0 = 0.0;
    _vbr_variable_load1_power_meter1__filter_1_input_k_minus_1P0 = 0.0;
    _vbr_variable_load2_power_meter1__filter_1_output_k_minus_1 = 0.0;
    _vbr_variable_load2_power_meter1__filter_1_input_k_minus_1 = 0.0;
    _vbr_variable_load2_power_meter1__filter_1_output_k_minus_1Q = 0.0;
    _vbr_variable_load2_power_meter1__filter_1_input_k_minus_1Q = 0.0;
    _vbr_variable_load2_power_meter1__filter_1_output_k_minus_1P0 = 0.0;
    _vbr_variable_load2_power_meter1__filter_1_input_k_minus_1P0 = 0.0;
    HIL_OutAO(0x400c, 0.0f);
    HIL_OutAO(0x400d, 0.0f);
    HIL_OutAO(0x400e, 0.0f);
    _f1_motor_chiller_compressor_c_function1__T = 0;
    _f1_motor_chiller_compressor_c_function1__w = 0;
    HIL_OutAO(0x4023, 0.0f);
    HIL_OutAO(0x4025, 0.0f);
    HIL_OutAO(0x4026, 0.0f);
    HIL_OutAO(0x4024, 0.0f);
    _microturbine1_synchonous_machine_c_function1__var = 0;
    HIL_OutAO(0x4034, 0.0f);
    HIL_OutAO(0x4035, 0.0f);
    HIL_OutAO(0x4036, 0.0f);
    _regd_control_p_ref_diesel_c_function1__deltaP = 0;
    _regd_control_p_ref_vl1_c_function1__deltaP = 0;
    _regd_control_p_ref_vl2_c_function1__deltaP = 0;
    HIL_OutAO(0x403c, 0.0f);
    HIL_OutAO(0x403d, 0.0f);
    HIL_OutAO(0x403e, 0.0f);
    HIL_OutAO(0x403f, 0.0f);
    HIL_OutAO(0x4044, 0.0f);
    HIL_OutAO(0x4045, 0.0f);
    HIL_OutAO(0x4046, 0.0f);
    HIL_OutAO(0x4047, 0.0f);
    _f1_pcc_pcc_measurements_power_meter1__filter_1_output_k_minus_1 = 0.0;
    _f1_pcc_pcc_measurements_power_meter1__filter_1_input_k_minus_1 = 0.0;
    _f1_pcc_pcc_measurements_power_meter1__filter_1_output_k_minus_1Q = 0.0;
    _f1_pcc_pcc_measurements_power_meter1__filter_1_input_k_minus_1Q = 0.0;
    _f1_pcc_pcc_measurements_power_meter1__filter_1_output_k_minus_1P0 = 0.0;
    _f1_pcc_pcc_measurements_power_meter1__filter_1_input_k_minus_1P0 = 0.0;
    _f1_pcc_pcc_measurements_rms_value1__square_sum = 0x0;
    _f1_pcc_pcc_measurements_rms_value1__sample_cnt = 0x0;
    _f1_pcc_pcc_measurements_rms_value1__filtered_value = 0x0;
    _f1_pcc_pcc_measurements_rms_value1__out_state = 0x0;
    HIL_OutAO(0x4028, 0.0f);
    _microturbine1_governor_rate_limiter2__first_step = 1;
    HIL_OutAO(0x401e, 0.0f);
    _microturbine1_synchonous_machine_abc_to_qd_confine_phase__floor_in = 0;
    _microturbine1_synchonous_machine_qd_to_abc_confine_phase__floor_in = 0;
    for (_vbr_variable_load1_control_three_phase_pll2_abc_to_dq_lpf_d__i = 0; _vbr_variable_load1_control_three_phase_pll2_abc_to_dq_lpf_d__i < 1; _vbr_variable_load1_control_three_phase_pll2_abc_to_dq_lpf_d__i++) {
        _vbr_variable_load1_control_three_phase_pll2_abc_to_dq_lpf_d__states[_vbr_variable_load1_control_three_phase_pll2_abc_to_dq_lpf_d__i] = 0.0;
    }
    for (_vbr_variable_load1_control_three_phase_pll2_abc_to_dq_lpf_q__i = 0; _vbr_variable_load1_control_three_phase_pll2_abc_to_dq_lpf_q__i < 1; _vbr_variable_load1_control_three_phase_pll2_abc_to_dq_lpf_q__i++) {
        _vbr_variable_load1_control_three_phase_pll2_abc_to_dq_lpf_q__states[_vbr_variable_load1_control_three_phase_pll2_abc_to_dq_lpf_q__i] = 0.0;
    }
    for (_vbr_variable_load2_control_three_phase_pll2_abc_to_dq_lpf_d__i = 0; _vbr_variable_load2_control_three_phase_pll2_abc_to_dq_lpf_d__i < 1; _vbr_variable_load2_control_three_phase_pll2_abc_to_dq_lpf_d__i++) {
        _vbr_variable_load2_control_three_phase_pll2_abc_to_dq_lpf_d__states[_vbr_variable_load2_control_three_phase_pll2_abc_to_dq_lpf_d__i] = 0.0;
    }
    for (_vbr_variable_load2_control_three_phase_pll2_abc_to_dq_lpf_q__i = 0; _vbr_variable_load2_control_three_phase_pll2_abc_to_dq_lpf_q__i < 1; _vbr_variable_load2_control_three_phase_pll2_abc_to_dq_lpf_q__i++) {
        _vbr_variable_load2_control_three_phase_pll2_abc_to_dq_lpf_q__states[_vbr_variable_load2_control_three_phase_pll2_abc_to_dq_lpf_q__i] = 0.0;
    }
    HIL_OutAO(0x400f, 0.0f);
    _f1_pcc_pcc_measurements_comparator1__state = 0.0f;
    _f1_pcc_pcc_measurements_comparator2__state = 0.0f;
    HIL_OutAO(0x4010, 0.0f);
    _microturbine1_exciter_rate_limit__first_step = 1;
    _microturbine1_governor_exciter_activation_comparator1__state = 0.0f;
    HIL_OutAO(0x402a, 0.0f);
    _vbr_variable_load1_control_three_phase_pll2_normalize__in1 = 0;
    _vbr_variable_load1_control_three_phase_pll2_normalize__in2 = 0;
    _vbr_variable_load1_control_three_phase_pll2_normalize__pk = 0;
    HIL_OutAO(0x4040, 0.0f);
    HIL_OutAO(0x4041, 0.0f);
    HIL_OutAO(0x4042, 0.0f);
    HIL_OutAO(0x4043, 0.0f);
    _vbr_variable_load2_control_three_phase_pll2_normalize__in1 = 0;
    _vbr_variable_load2_control_three_phase_pll2_normalize__in2 = 0;
    _vbr_variable_load2_control_three_phase_pll2_normalize__pk = 0;
    HIL_OutAO(0x4048, 0.0f);
    HIL_OutAO(0x4049, 0.0f);
    HIL_OutAO(0x404a, 0.0f);
    HIL_OutAO(0x404b, 0.0f);
    for (_f1_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_d__i = 0; _f1_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_d__i < 1; _f1_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_d__i++) {
        _f1_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_d__states[_f1_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_d__i] = 0.0;
    }
    for (_f1_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_q__i = 0; _f1_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_q__i < 1; _f1_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_q__i++) {
        _f1_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_q__states[_f1_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_q__i] = 0.0;
    }
    HIL_OutAO(0x4027, 0.0f);
    _microturbine1_governor_exciter_activation_activate_exciter__Activate = 0;
    _f1_pcc_pcc_measurements_three_phase_pll1_normalize__in1 = 0;
    _f1_pcc_pcc_measurements_three_phase_pll1_normalize__in2 = 0;
    _f1_pcc_pcc_measurements_three_phase_pll1_normalize__pk = 0;
    HIL_OutFloat(162267136, 0.0);
    for (_microturbine1_governor_discrete_transfer_function1__i = 0; _microturbine1_governor_discrete_transfer_function1__i < 1; _microturbine1_governor_discrete_transfer_function1__i++) {
        _microturbine1_governor_discrete_transfer_function1__states[_microturbine1_governor_discrete_transfer_function1__i] = 0.0;
    }
    _vbr_variable_load1_control_current_control_pi_d_integrator1__state = 0.0;
    _vbr_variable_load1_control_current_control_pi_d_integrator1__reset_state = 2;
    _vbr_variable_load1_control_current_control_pi_q_integrator1__state = 0.0;
    _vbr_variable_load1_control_current_control_pi_q_integrator1__reset_state = 2;
    _vbr_variable_load2_control_current_control_pi_d_integrator1__state = 0.0;
    _vbr_variable_load2_control_current_control_pi_d_integrator1__reset_state = 2;
    _vbr_variable_load2_control_current_control_pi_q_integrator1__state = 0.0;
    _vbr_variable_load2_control_current_control_pi_q_integrator1__reset_state = 2;
    HIL_OutAO(0x4013, 0.0f);
    _microturbine1_be1_25a_synchronizer_pll_pid_controller1__integrator_state =  376.99111843077515;
    _microturbine1_be1_25a_synchronizer_pll_pid_controller1__filter_state =  0.0;
    HIL_OutAO(0x4014, 0.0f);
    HIL_OutAO(0x4011, 0.0f);
    HIL_OutAO(0x4012, 0.0f);
    _microturbine1_be1_25a_synchronizer_pll_c_function1__var = 0;
    HIL_OutAO(0x4019, 0.0f);
    _vbr_variable_load1_control_limit_pqref_priority_pqlim_pq_limiting_with_priority__Sref = 0;
    _vbr_variable_load2_control_limit_pqref_priority_pqlim_pq_limiting_with_priority__Sref = 0;
    HIL_OutAO(0x401f, 0.0f);
    _microturbine1_be1_25a_synchronizer_pll_confine_phase__floor_in = 0;
    for (_microturbine1_governor_discrete_transfer_function2__i = 0; _microturbine1_governor_discrete_transfer_function2__i < 2; _microturbine1_governor_discrete_transfer_function2__i++) {
        _microturbine1_governor_discrete_transfer_function2__states[_microturbine1_governor_discrete_transfer_function2__i] = 0.0;
    }
    _vbr_variable_load1_control_limit_pqref_p_rate_limit__first_step = 1;
    _vbr_variable_load1_control_limit_pqref_q_rate_limit__first_step = 1;
    _vbr_variable_load1_control_limit_pqref_s_rate_limit__first_step = 1;
    _vbr_variable_load2_control_limit_pqref_p_rate_limit__first_step = 1;
    _vbr_variable_load2_control_limit_pqref_q_rate_limit__first_step = 1;
    _vbr_variable_load2_control_limit_pqref_s_rate_limit__first_step = 1;
    HIL_OutAO(0x401c, 0.0f);
    HIL_OutAO(0x4018, 0.0f);
    HIL_OutAO(0x4022, 0.0f);
    _microturbine1_cb_control_hold_after_connect2__var = 1;
    HIL_OutAO(0x402f, 0.0f);
    HIL_OutAO(0x402e, 0.0f);
    _vbr_variable_load1_control_limit_pqref_lims_overpq_s_limiting_over_pq__S_PQref = 0;
    _vbr_variable_load2_control_limit_pqref_lims_overpq_s_limiting_over_pq__S_PQref = 0;
    _vbr_variable_load1_control_three_phase_pll2_rate_limiter1__first_step = 1;
    _vbr_variable_load1_control_three_phase_pll2_integrator__out = 0;
    _vbr_variable_load1_control_three_phase_pll2_integrator__in = 0;
    _vbr_variable_load2_control_three_phase_pll2_rate_limiter1__first_step = 1;
    _vbr_variable_load2_control_three_phase_pll2_integrator__out = 0;
    _vbr_variable_load2_control_three_phase_pll2_integrator__in = 0;
    HIL_OutAO(0x401b, 0.0f);
    HIL_OutAO(0x4021, 0.0f);
    for (_vbr_variable_load1_control_three_phase_pll2_lpf_lpf__i = 0; _vbr_variable_load1_control_three_phase_pll2_lpf_lpf__i < 2; _vbr_variable_load1_control_three_phase_pll2_lpf_lpf__i++) {
        _vbr_variable_load1_control_three_phase_pll2_lpf_lpf__states[_vbr_variable_load1_control_three_phase_pll2_lpf_lpf__i] = 1527888.0894183116;
    }
    for (_vbr_variable_load2_control_three_phase_pll2_lpf_lpf__i = 0; _vbr_variable_load2_control_three_phase_pll2_lpf_lpf__i < 2; _vbr_variable_load2_control_three_phase_pll2_lpf_lpf__i++) {
        _vbr_variable_load2_control_three_phase_pll2_lpf_lpf__states[_vbr_variable_load2_control_three_phase_pll2_lpf_lpf__i] = 1527888.0894183116;
    }
    _f1_pcc_pcc_measurements_three_phase_pll1_rate_limiter1__first_step = 1;
    _f1_pcc_pcc_measurements_three_phase_pll1_integrator__out = 0;
    _f1_pcc_pcc_measurements_three_phase_pll1_integrator__in = 0;
    HIL_OutAO(0x4015, 0.0f);
    HIL_OutAO(0x4020, 0.0f);
    HIL_OutAO(0x401d, 0.0f);
    HIL_OutAO(0x4038, 0.0f);
    HIL_OutAO(0x4033, 0.0f);
    HIL_OutAO(0x4032, 0.0f);
    for (_f1_pcc_pcc_measurements_three_phase_pll1_lpf_lpf__i = 0; _f1_pcc_pcc_measurements_three_phase_pll1_lpf_lpf__i < 2; _f1_pcc_pcc_measurements_three_phase_pll1_lpf_lpf__i++) {
        _f1_pcc_pcc_measurements_three_phase_pll1_lpf_lpf__states[_f1_pcc_pcc_measurements_three_phase_pll1_lpf_lpf__i] = 15278.880894183112;
    }
    for (_microturbine1_synchonous_machine_v_qg2_discrete_transfer_function1__i = 0; _microturbine1_synchonous_machine_v_qg2_discrete_transfer_function1__i < 1; _microturbine1_synchonous_machine_v_qg2_discrete_transfer_function1__i++) {
        _microturbine1_synchonous_machine_v_qg2_discrete_transfer_function1__states[_microturbine1_synchonous_machine_v_qg2_discrete_transfer_function1__i] = 0.0;
    }
    for (_microturbine1_synchonous_machine_v_dg2_discrete_transfer_function1__i = 0; _microturbine1_synchonous_machine_v_dg2_discrete_transfer_function1__i < 1; _microturbine1_synchonous_machine_v_dg2_discrete_transfer_function1__i++) {
        _microturbine1_synchonous_machine_v_dg2_discrete_transfer_function1__states[_microturbine1_synchonous_machine_v_dg2_discrete_transfer_function1__i] = 0.0;
    }
    _microturbine1_be1_25a_synchronizer_stay_connected1__connect = 0;
    HIL_OutAO(0x402d, 0.0f);
    HIL_OutAO(0x402c, 0.0f);
    _microturbine1_cb_control_stay_connected1__var = 0;
    _microturbine1_be1_25a_synchronizer_hold_after_connect__var = 0;
    _microturbine1_be1_25a_synchronizer_hold_after_connect1__var = 0;
    HIL_OutFloat(137101312, 0.0);
    HIL_OutFloat(137101313, 0.0);
    HIL_OutFloat(137101314, 0.0);
    HIL_OutAO(0x4017, 0.0f);
    HIL_OutAO(0x4016, 0.0f);
    HIL_OutFloat(153878528, 0.0);
    HIL_OutFloat(153878529, 0.0);
    HIL_OutFloat(153878530, 0.0);
    HIL_OutFloat(153878531, 0.0);
    HIL_OutFloat(153878532, 0.0);
    HIL_OutFloat(153878533, 0.0);
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
    HIL_OutAO(0x402b, (float)_microturbine1_synchonous_machine_e_qp_integrator1__out);
    // Generated from the component: Microturbine1.Synchonous Machine.Phi_1d_a_M
    HIL_OutAO(0x4030, (float)_microturbine1_synchonous_machine_phi_1d_a_integrator1__out);
    // Generated from the component: Microturbine1.Synchonous Machine.Phi_2q_a_M
    HIL_OutAO(0x4031, (float)_microturbine1_synchonous_machine_phi_2q_a_integrator1__out);
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
    HIL_OutAO(0x402f, (float)_microturbine1_synchonous_machine_gain10__out);
    // Generated from the component: Microturbine1.Synchonous Machine.Phi_2q_a.Product1
    _microturbine1_synchonous_machine_phi_2q_a_product1__out = (_microturbine1_synchonous_machine_phi_2q_a_constant1__out * _microturbine1_synchonous_machine_gain10__out);
    // Generated from the component: Microturbine1.Synchonous Machine.Phi_q_a 2.Gain1
    _microturbine1_synchonous_machine_phi_q_a_2_gain1__out = 0.2597484888268292 * _microturbine1_synchonous_machine_gain10__out;
    // Generated from the component: Microturbine1.Synchonous Machine.E_qp.Product3
    _microturbine1_synchonous_machine_e_qp_product3__out = (_microturbine1_synchonous_machine_e_qp_constant3__out * _microturbine1_synchonous_machine_gain11__out);
    // Generated from the component: Microturbine1.Synchonous Machine.I_d_a1
    HIL_OutAO(0x402e, (float)_microturbine1_synchonous_machine_gain11__out);
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
    HIL_OutAO(0x4033, (float)_microturbine1_synchonous_machine_phi_q_a_2_sum1__out);
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
    HIL_OutAO(0x4032, (float)_microturbine1_synchonous_machine_phi_d_a_2_sum1__out);
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
    HIL_OutAO(0x402d, (float)_microturbine1_synchonous_machine_v_qg2_sum2__out);
    // Generated from the component: Microturbine1.Synchonous Machine.Gain8
    _microturbine1_synchonous_machine_gain8__out = 11267.652816802622 * _microturbine1_synchonous_machine_v_qg2_sum2__out;
    // Generated from the component: Microturbine1.Synchonous Machine.E_qp.Sum1
    _microturbine1_synchonous_machine_e_qp_sum1__out =  - _microturbine1_synchonous_machine_e_qp_integrator1__out - _microturbine1_synchonous_machine_e_qp_product1__out + _microturbine1_synchonous_machine_e_qp_gain2__out;
    // Generated from the component: Microturbine1.Synchonous Machine.Ed_phi
    HIL_OutAO(0x402c, (float)_microturbine1_synchonous_machine_v_dg2_sum2__out);
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
    // Generated from the component: RegD_Control.P_ref_Diesel.Pref_initial
    _regd_control_p_ref_diesel_pref_initial__out = XIo_InFloat(0x55000144);
    // Generated from the component: RegD_Control.P_ref_Diesel.capacity_max
    // Generated from the component: RegD_Control.P_ref_Diesel.capacity_min
    // Generated from the component: RegD_Control.P_ref_VL1.Pref_initial
    _regd_control_p_ref_vl1_pref_initial__out = XIo_InFloat(0x55000148);
    // Generated from the component: RegD_Control.P_ref_VL1.capacity_max
    // Generated from the component: RegD_Control.P_ref_VL1.capacity_min
    // Generated from the component: RegD_Control.P_ref_VL2.Pref_initial
    _regd_control_p_ref_vl2_pref_initial__out = XIo_InFloat(0x5500014c);
    // Generated from the component: RegD_Control.P_ref_VL2.capacity_max
    // Generated from the component: RegD_Control.P_ref_VL2.capacity_min
    // Generated from the component: RegD_Control.RegD
    _regd_control_regd__out = XIo_InFloat(0x55000150);
    // Generated from the component: VBR Variable Load1.Control.Constant3
    // Generated from the component: VBR Variable Load1.Control.Constant4
    // Generated from the component: VBR Variable Load1.Control.Constant5
    // Generated from the component: VBR Variable Load1.Control.Limit_PQref.Unit Delay1
    _vbr_variable_load1_control_limit_pqref_unit_delay1__out = _vbr_variable_load1_control_limit_pqref_unit_delay1__state;
    // Generated from the component: VBR Variable Load1.Control.Limit_PQref.Unit Delay2
    _vbr_variable_load1_control_limit_pqref_unit_delay2__out = _vbr_variable_load1_control_limit_pqref_unit_delay2__state;
    // Generated from the component: VBR Variable Load1.Control.Three phase PLL2.PID.Integrator1
    _vbr_variable_load1_control_three_phase_pll2_pid_integrator1__out = _vbr_variable_load1_control_three_phase_pll2_pid_integrator1__state;
    // Generated from the component: VBR Variable Load1.Control.Three phase PLL2.PID.Integrator2
    _vbr_variable_load1_control_three_phase_pll2_pid_integrator2__out = _vbr_variable_load1_control_three_phase_pll2_pid_integrator2__state;
    // Generated from the component: VBR Variable Load1.Control.Three phase PLL2.Unit Delay1
    _vbr_variable_load1_control_three_phase_pll2_unit_delay1__out = _vbr_variable_load1_control_three_phase_pll2_unit_delay1__state;
    // Generated from the component: VBR Variable Load1.Control.Three phase PLL2.to_Hz
    _vbr_variable_load1_control_three_phase_pll2_to_hz__out = 0.15915494309189535 * _vbr_variable_load1_control_three_phase_pll2_lpf_lpf__out;
    // Generated from the component: VBR Variable Load1.Ia.Ia1
    _vbr_variable_load1_ia_ia1__out = (HIL_InFloat(0xc80000 + 0x849));
    // Generated from the component: VBR Variable Load1.Ib.Ia1
    _vbr_variable_load1_ib_ia1__out = (HIL_InFloat(0xc80000 + 0x84a));
    // Generated from the component: VBR Variable Load1.Ic.Ia1
    _vbr_variable_load1_ic_ia1__out = (HIL_InFloat(0xc80000 + 0x84b));
    // Generated from the component: VBR Variable Load1.Va.Va1
    _vbr_variable_load1_va_va1__out = (HIL_InFloat(0xc80000 + 0x834));
    // Generated from the component: VBR Variable Load1.Vb.Va1
    _vbr_variable_load1_vb_va1__out = (HIL_InFloat(0xc80000 + 0x835));
    // Generated from the component: VBR Variable Load1.Vc.Va1
    _vbr_variable_load1_vc_va1__out = (HIL_InFloat(0xc80000 + 0x836));
    // Generated from the component: VBR Variable Load1_in.Enable
    _vbr_variable_load1_in_enable__out = XIo_InFloat(0x55000154);
    // Generated from the component: VBR Variable Load1_in.Qref
    _vbr_variable_load1_in_qref__out = XIo_InFloat(0x55000158);
    // Generated from the component: VBR Variable Load2.Control.Constant3
    // Generated from the component: VBR Variable Load2.Control.Constant4
    // Generated from the component: VBR Variable Load2.Control.Constant5
    // Generated from the component: VBR Variable Load2.Control.Limit_PQref.Unit Delay1
    _vbr_variable_load2_control_limit_pqref_unit_delay1__out = _vbr_variable_load2_control_limit_pqref_unit_delay1__state;
    // Generated from the component: VBR Variable Load2.Control.Limit_PQref.Unit Delay2
    _vbr_variable_load2_control_limit_pqref_unit_delay2__out = _vbr_variable_load2_control_limit_pqref_unit_delay2__state;
    // Generated from the component: VBR Variable Load2.Control.Three phase PLL2.PID.Integrator1
    _vbr_variable_load2_control_three_phase_pll2_pid_integrator1__out = _vbr_variable_load2_control_three_phase_pll2_pid_integrator1__state;
    // Generated from the component: VBR Variable Load2.Control.Three phase PLL2.PID.Integrator2
    _vbr_variable_load2_control_three_phase_pll2_pid_integrator2__out = _vbr_variable_load2_control_three_phase_pll2_pid_integrator2__state;
    // Generated from the component: VBR Variable Load2.Control.Three phase PLL2.Unit Delay1
    _vbr_variable_load2_control_three_phase_pll2_unit_delay1__out = _vbr_variable_load2_control_three_phase_pll2_unit_delay1__state;
    // Generated from the component: VBR Variable Load2.Control.Three phase PLL2.to_Hz
    _vbr_variable_load2_control_three_phase_pll2_to_hz__out = 0.15915494309189535 * _vbr_variable_load2_control_three_phase_pll2_lpf_lpf__out;
    // Generated from the component: VBR Variable Load2.Ia.Ia1
    _vbr_variable_load2_ia_ia1__out = (HIL_InFloat(0xc80000 + 0x84d));
    // Generated from the component: VBR Variable Load2.Ib.Ia1
    _vbr_variable_load2_ib_ia1__out = (HIL_InFloat(0xc80000 + 0x84e));
    // Generated from the component: VBR Variable Load2.Ic.Ia1
    _vbr_variable_load2_ic_ia1__out = (HIL_InFloat(0xc80000 + 0x84f));
    // Generated from the component: VBR Variable Load2.Va.Va1
    _vbr_variable_load2_va_va1__out = (HIL_InFloat(0xc80000 + 0x838));
    // Generated from the component: VBR Variable Load2.Vb.Va1
    _vbr_variable_load2_vb_va1__out = (HIL_InFloat(0xc80000 + 0x839));
    // Generated from the component: VBR Variable Load2.Vc.Va1
    _vbr_variable_load2_vc_va1__out = (HIL_InFloat(0xc80000 + 0x83a));
    // Generated from the component: VBR Variable Load2_in.Enable
    _vbr_variable_load2_in_enable__out = XIo_InFloat(0x5500015c);
    // Generated from the component: VBR Variable Load2_in.Qref
    _vbr_variable_load2_in_qref__out = XIo_InFloat(0x55000160);
    // Generated from the component: RegD_Control.P_ref_Diesel.Sum9
    _regd_control_p_ref_diesel_sum9__out =  - _regd_control_p_ref_diesel_pref_initial__out + _regd_control_p_ref_diesel_capacity_max__out;
    // Generated from the component: RegD_Control.P_ref_Diesel.Sum8
    _regd_control_p_ref_diesel_sum8__out =  - _regd_control_p_ref_diesel_capacity_min__out + _regd_control_p_ref_diesel_pref_initial__out;
    // Generated from the component: RegD_Control.P_ref_VL1.Sum9
    _regd_control_p_ref_vl1_sum9__out =  - _regd_control_p_ref_vl1_pref_initial__out + _regd_control_p_ref_vl1_capacity_max__out;
    // Generated from the component: RegD_Control.P_ref_VL1.Sum8
    _regd_control_p_ref_vl1_sum8__out =  - _regd_control_p_ref_vl1_capacity_min__out + _regd_control_p_ref_vl1_pref_initial__out;
    // Generated from the component: RegD_Control.P_ref_VL2.Sum9
    _regd_control_p_ref_vl2_sum9__out =  - _regd_control_p_ref_vl2_pref_initial__out + _regd_control_p_ref_vl2_capacity_max__out;
    // Generated from the component: RegD_Control.P_ref_VL2.Sum8
    _regd_control_p_ref_vl2_sum8__out =  - _regd_control_p_ref_vl2_capacity_min__out + _regd_control_p_ref_vl2_pref_initial__out;
    // Generated from the component: RegD_Control.P_ref_Diesel.RegD_act1
    HIL_OutAO(0x4039, (float)_regd_control_regd__out);
    // Generated from the component: RegD_Control.P_ref_VL1.RegD_act1
    HIL_OutAO(0x403a, (float)_regd_control_regd__out);
    // Generated from the component: RegD_Control.P_ref_VL2.RegD_act1
    HIL_OutAO(0x403b, (float)_regd_control_regd__out);
    // Generated from the component: VBR Variable Load1.Control.Gain3
    _vbr_variable_load1_control_gain3__out = 0.016666666666666666 * _vbr_variable_load1_control_three_phase_pll2_to_hz__out;
    // Generated from the component: VBR Variable Load1.Control.abc to dq1.abc to alpha beta
    _vbr_variable_load1_control_abc_to_dq1_abc_to_alpha_beta__alpha = (2.0 * _vbr_variable_load1_ia_ia1__out - _vbr_variable_load1_ib_ia1__out - _vbr_variable_load1_ic_ia1__out) * 0.3333333333333333;
    _vbr_variable_load1_control_abc_to_dq1_abc_to_alpha_beta__beta = (_vbr_variable_load1_ib_ia1__out - _vbr_variable_load1_ic_ia1__out) * 0.5773502691896258;
    _vbr_variable_load1_control_abc_to_dq1_abc_to_alpha_beta__gamma = (_vbr_variable_load1_ia_ia1__out + _vbr_variable_load1_ib_ia1__out + _vbr_variable_load1_ic_ia1__out) * 0.3333333333333333;
    // Generated from the component: VBR Variable Load1.Control.Three phase PLL2.abc to dq.abc to alpha beta
    _vbr_variable_load1_control_three_phase_pll2_abc_to_dq_abc_to_alpha_beta__alpha = (2.0 * _vbr_variable_load1_va_va1__out - _vbr_variable_load1_vb_va1__out - _vbr_variable_load1_vc_va1__out) * 0.3333333333333333;
    _vbr_variable_load1_control_three_phase_pll2_abc_to_dq_abc_to_alpha_beta__beta = (_vbr_variable_load1_vb_va1__out - _vbr_variable_load1_vc_va1__out) * 0.5773502691896258;
    _vbr_variable_load1_control_three_phase_pll2_abc_to_dq_abc_to_alpha_beta__gamma = (_vbr_variable_load1_va_va1__out + _vbr_variable_load1_vb_va1__out + _vbr_variable_load1_vc_va1__out) * 0.3333333333333333;
    // Generated from the component: VBR Variable Load1.Power Meter1
    _vbr_variable_load1_power_meter1__v_alpha = SQRT_2OVER3 * ( _vbr_variable_load1_va_va1__out - 0.5f * _vbr_variable_load1_vb_va1__out - 0.5f * _vbr_variable_load1_vc_va1__out);
    _vbr_variable_load1_power_meter1__v_beta = SQRT_2OVER3 * (SQRT3_OVER_2 * _vbr_variable_load1_vb_va1__out - SQRT3_OVER_2 * _vbr_variable_load1_vc_va1__out);
    _vbr_variable_load1_power_meter1__i_alpha = SQRT_2OVER3 * ( _vbr_variable_load1_ia_ia1__out - 0.5f * _vbr_variable_load1_ib_ia1__out - 0.5f * _vbr_variable_load1_ic_ia1__out);
    _vbr_variable_load1_power_meter1__i_beta = SQRT_2OVER3 * (SQRT3_OVER_2 * _vbr_variable_load1_ib_ia1__out - SQRT3_OVER_2 * _vbr_variable_load1_ic_ia1__out);
    _vbr_variable_load1_power_meter1__v_zero = ONE_DIV_BY_SQRT_3 * (_vbr_variable_load1_va_va1__out + _vbr_variable_load1_vb_va1__out + _vbr_variable_load1_vc_va1__out);
    _vbr_variable_load1_power_meter1__i_zero = ONE_DIV_BY_SQRT_3 * (_vbr_variable_load1_ia_ia1__out + _vbr_variable_load1_ib_ia1__out + _vbr_variable_load1_ic_ia1__out);
    _vbr_variable_load1_power_meter1__Pac = _vbr_variable_load1_power_meter1__v_alpha * _vbr_variable_load1_power_meter1__i_alpha + _vbr_variable_load1_power_meter1__v_beta * _vbr_variable_load1_power_meter1__i_beta;
    _vbr_variable_load1_power_meter1__Qac = _vbr_variable_load1_power_meter1__v_beta * _vbr_variable_load1_power_meter1__i_alpha - _vbr_variable_load1_power_meter1__v_alpha * _vbr_variable_load1_power_meter1__i_beta;
    _vbr_variable_load1_power_meter1__P0ac = _vbr_variable_load1_power_meter1__v_zero * _vbr_variable_load1_power_meter1__i_zero;
    _vbr_variable_load1_power_meter1__filter_1_output = 0.009336780874162044 * (_vbr_variable_load1_power_meter1__Pac + _vbr_variable_load1_power_meter1__filter_1_input_k_minus_1) - (-0.9813264382516759) * _vbr_variable_load1_power_meter1__filter_1_output_k_minus_1;
    _vbr_variable_load1_power_meter1__filter_1_outputQ = 0.009336780874162044 * (_vbr_variable_load1_power_meter1__Qac + _vbr_variable_load1_power_meter1__filter_1_input_k_minus_1Q) - (-0.9813264382516759) * _vbr_variable_load1_power_meter1__filter_1_output_k_minus_1Q;
    _vbr_variable_load1_power_meter1__filter_1_outputP0 = 0.009336780874162044 * (_vbr_variable_load1_power_meter1__P0ac + _vbr_variable_load1_power_meter1__filter_1_input_k_minus_1P0) - (-0.9813264382516759) * _vbr_variable_load1_power_meter1__filter_1_output_k_minus_1P0;
    _vbr_variable_load1_power_meter1__filter_1_input_k_minus_1 = _vbr_variable_load1_power_meter1__Pac;
    _vbr_variable_load1_power_meter1__filter_1_output_k_minus_1 = _vbr_variable_load1_power_meter1__filter_1_output;
    _vbr_variable_load1_power_meter1__filter_1_input_k_minus_1Q = _vbr_variable_load1_power_meter1__Qac;;
    _vbr_variable_load1_power_meter1__filter_1_output_k_minus_1Q = _vbr_variable_load1_power_meter1__filter_1_outputQ;
    _vbr_variable_load1_power_meter1__filter_1_input_k_minus_1P0 = _vbr_variable_load1_power_meter1__P0ac;
    _vbr_variable_load1_power_meter1__filter_1_output_k_minus_1P0 = _vbr_variable_load1_power_meter1__filter_1_outputP0;
    _vbr_variable_load1_power_meter1__Pdc = _vbr_variable_load1_power_meter1__filter_1_output;
    _vbr_variable_load1_power_meter1__Qdc = _vbr_variable_load1_power_meter1__filter_1_outputQ;
    _vbr_variable_load1_power_meter1__P0dc = _vbr_variable_load1_power_meter1__filter_1_outputP0;
    _vbr_variable_load1_power_meter1__apparent = sqrt(pow(_vbr_variable_load1_power_meter1__Pdc, 2) + pow(_vbr_variable_load1_power_meter1__Qdc, 2));
    if (_vbr_variable_load1_power_meter1__apparent > 0)
        _vbr_variable_load1_power_meter1__k_factor = _vbr_variable_load1_power_meter1__Pdc / _vbr_variable_load1_power_meter1__apparent;
    else
        _vbr_variable_load1_power_meter1__k_factor = 0;
    // Generated from the component: VBR Variable Load2.Control.Gain3
    _vbr_variable_load2_control_gain3__out = 0.016666666666666666 * _vbr_variable_load2_control_three_phase_pll2_to_hz__out;
    // Generated from the component: VBR Variable Load2.Control.abc to dq1.abc to alpha beta
    _vbr_variable_load2_control_abc_to_dq1_abc_to_alpha_beta__alpha = (2.0 * _vbr_variable_load2_ia_ia1__out - _vbr_variable_load2_ib_ia1__out - _vbr_variable_load2_ic_ia1__out) * 0.3333333333333333;
    _vbr_variable_load2_control_abc_to_dq1_abc_to_alpha_beta__beta = (_vbr_variable_load2_ib_ia1__out - _vbr_variable_load2_ic_ia1__out) * 0.5773502691896258;
    _vbr_variable_load2_control_abc_to_dq1_abc_to_alpha_beta__gamma = (_vbr_variable_load2_ia_ia1__out + _vbr_variable_load2_ib_ia1__out + _vbr_variable_load2_ic_ia1__out) * 0.3333333333333333;
    // Generated from the component: VBR Variable Load2.Control.Three phase PLL2.abc to dq.abc to alpha beta
    _vbr_variable_load2_control_three_phase_pll2_abc_to_dq_abc_to_alpha_beta__alpha = (2.0 * _vbr_variable_load2_va_va1__out - _vbr_variable_load2_vb_va1__out - _vbr_variable_load2_vc_va1__out) * 0.3333333333333333;
    _vbr_variable_load2_control_three_phase_pll2_abc_to_dq_abc_to_alpha_beta__beta = (_vbr_variable_load2_vb_va1__out - _vbr_variable_load2_vc_va1__out) * 0.5773502691896258;
    _vbr_variable_load2_control_three_phase_pll2_abc_to_dq_abc_to_alpha_beta__gamma = (_vbr_variable_load2_va_va1__out + _vbr_variable_load2_vb_va1__out + _vbr_variable_load2_vc_va1__out) * 0.3333333333333333;
    // Generated from the component: VBR Variable Load2.Power Meter1
    _vbr_variable_load2_power_meter1__v_alpha = SQRT_2OVER3 * ( _vbr_variable_load2_va_va1__out - 0.5f * _vbr_variable_load2_vb_va1__out - 0.5f * _vbr_variable_load2_vc_va1__out);
    _vbr_variable_load2_power_meter1__v_beta = SQRT_2OVER3 * (SQRT3_OVER_2 * _vbr_variable_load2_vb_va1__out - SQRT3_OVER_2 * _vbr_variable_load2_vc_va1__out);
    _vbr_variable_load2_power_meter1__i_alpha = SQRT_2OVER3 * ( _vbr_variable_load2_ia_ia1__out - 0.5f * _vbr_variable_load2_ib_ia1__out - 0.5f * _vbr_variable_load2_ic_ia1__out);
    _vbr_variable_load2_power_meter1__i_beta = SQRT_2OVER3 * (SQRT3_OVER_2 * _vbr_variable_load2_ib_ia1__out - SQRT3_OVER_2 * _vbr_variable_load2_ic_ia1__out);
    _vbr_variable_load2_power_meter1__v_zero = ONE_DIV_BY_SQRT_3 * (_vbr_variable_load2_va_va1__out + _vbr_variable_load2_vb_va1__out + _vbr_variable_load2_vc_va1__out);
    _vbr_variable_load2_power_meter1__i_zero = ONE_DIV_BY_SQRT_3 * (_vbr_variable_load2_ia_ia1__out + _vbr_variable_load2_ib_ia1__out + _vbr_variable_load2_ic_ia1__out);
    _vbr_variable_load2_power_meter1__Pac = _vbr_variable_load2_power_meter1__v_alpha * _vbr_variable_load2_power_meter1__i_alpha + _vbr_variable_load2_power_meter1__v_beta * _vbr_variable_load2_power_meter1__i_beta;
    _vbr_variable_load2_power_meter1__Qac = _vbr_variable_load2_power_meter1__v_beta * _vbr_variable_load2_power_meter1__i_alpha - _vbr_variable_load2_power_meter1__v_alpha * _vbr_variable_load2_power_meter1__i_beta;
    _vbr_variable_load2_power_meter1__P0ac = _vbr_variable_load2_power_meter1__v_zero * _vbr_variable_load2_power_meter1__i_zero;
    _vbr_variable_load2_power_meter1__filter_1_output = 0.009336780874162044 * (_vbr_variable_load2_power_meter1__Pac + _vbr_variable_load2_power_meter1__filter_1_input_k_minus_1) - (-0.9813264382516759) * _vbr_variable_load2_power_meter1__filter_1_output_k_minus_1;
    _vbr_variable_load2_power_meter1__filter_1_outputQ = 0.009336780874162044 * (_vbr_variable_load2_power_meter1__Qac + _vbr_variable_load2_power_meter1__filter_1_input_k_minus_1Q) - (-0.9813264382516759) * _vbr_variable_load2_power_meter1__filter_1_output_k_minus_1Q;
    _vbr_variable_load2_power_meter1__filter_1_outputP0 = 0.009336780874162044 * (_vbr_variable_load2_power_meter1__P0ac + _vbr_variable_load2_power_meter1__filter_1_input_k_minus_1P0) - (-0.9813264382516759) * _vbr_variable_load2_power_meter1__filter_1_output_k_minus_1P0;
    _vbr_variable_load2_power_meter1__filter_1_input_k_minus_1 = _vbr_variable_load2_power_meter1__Pac;
    _vbr_variable_load2_power_meter1__filter_1_output_k_minus_1 = _vbr_variable_load2_power_meter1__filter_1_output;
    _vbr_variable_load2_power_meter1__filter_1_input_k_minus_1Q = _vbr_variable_load2_power_meter1__Qac;;
    _vbr_variable_load2_power_meter1__filter_1_output_k_minus_1Q = _vbr_variable_load2_power_meter1__filter_1_outputQ;
    _vbr_variable_load2_power_meter1__filter_1_input_k_minus_1P0 = _vbr_variable_load2_power_meter1__P0ac;
    _vbr_variable_load2_power_meter1__filter_1_output_k_minus_1P0 = _vbr_variable_load2_power_meter1__filter_1_outputP0;
    _vbr_variable_load2_power_meter1__Pdc = _vbr_variable_load2_power_meter1__filter_1_output;
    _vbr_variable_load2_power_meter1__Qdc = _vbr_variable_load2_power_meter1__filter_1_outputQ;
    _vbr_variable_load2_power_meter1__P0dc = _vbr_variable_load2_power_meter1__filter_1_outputP0;
    _vbr_variable_load2_power_meter1__apparent = sqrt(pow(_vbr_variable_load2_power_meter1__Pdc, 2) + pow(_vbr_variable_load2_power_meter1__Qdc, 2));
    if (_vbr_variable_load2_power_meter1__apparent > 0)
        _vbr_variable_load2_power_meter1__k_factor = _vbr_variable_load2_power_meter1__Pdc / _vbr_variable_load2_power_meter1__apparent;
    else
        _vbr_variable_load2_power_meter1__k_factor = 0;
    // Generated from the component: RegD_Control.P_ref_Diesel.C function1
    _regd_control_p_ref_diesel_c_function1__Reg_Max = _regd_control_p_ref_diesel_sum9__out;
    _regd_control_p_ref_diesel_c_function1__Reg_Min = _regd_control_p_ref_diesel_sum8__out;
    _regd_control_p_ref_diesel_c_function1__in = _regd_control_regd__out;
    _regd_control_p_ref_diesel_c_function1__out = _regd_control_p_ref_diesel_c_function1__deltaP;
    // Generated from the component: RegD_Control.P_ref_VL1.C function1
    _regd_control_p_ref_vl1_c_function1__Reg_Max = _regd_control_p_ref_vl1_sum9__out;
    _regd_control_p_ref_vl1_c_function1__Reg_Min = _regd_control_p_ref_vl1_sum8__out;
    _regd_control_p_ref_vl1_c_function1__in = _regd_control_regd__out;
    _regd_control_p_ref_vl1_c_function1__out = _regd_control_p_ref_vl1_c_function1__deltaP;
    // Generated from the component: RegD_Control.P_ref_VL2.C function1
    _regd_control_p_ref_vl2_c_function1__Reg_Max = _regd_control_p_ref_vl2_sum9__out;
    _regd_control_p_ref_vl2_c_function1__Reg_Min = _regd_control_p_ref_vl2_sum8__out;
    _regd_control_p_ref_vl2_c_function1__in = _regd_control_regd__out;
    _regd_control_p_ref_vl2_c_function1__out = _regd_control_p_ref_vl2_c_function1__deltaP;
    // Generated from the component: VBR Variable Load1.Control.Termination1
    // Generated from the component: VBR Variable Load1.Control.abc to dq1.alpha beta to dq
    _vbr_variable_load1_control_abc_to_dq1_alpha_beta_to_dq__k1 = cos(_vbr_variable_load1_control_three_phase_pll2_unit_delay1__out);
    _vbr_variable_load1_control_abc_to_dq1_alpha_beta_to_dq__k2 = sin(_vbr_variable_load1_control_three_phase_pll2_unit_delay1__out);
    _vbr_variable_load1_control_abc_to_dq1_alpha_beta_to_dq__d = _vbr_variable_load1_control_abc_to_dq1_alpha_beta_to_dq__k2 * _vbr_variable_load1_control_abc_to_dq1_abc_to_alpha_beta__alpha - _vbr_variable_load1_control_abc_to_dq1_alpha_beta_to_dq__k1 * _vbr_variable_load1_control_abc_to_dq1_abc_to_alpha_beta__beta;
    _vbr_variable_load1_control_abc_to_dq1_alpha_beta_to_dq__q = _vbr_variable_load1_control_abc_to_dq1_alpha_beta_to_dq__k1 * _vbr_variable_load1_control_abc_to_dq1_abc_to_alpha_beta__alpha + _vbr_variable_load1_control_abc_to_dq1_alpha_beta_to_dq__k2 * _vbr_variable_load1_control_abc_to_dq1_abc_to_alpha_beta__beta;
    // Generated from the component: VBR Variable Load1.Control.Three phase PLL2.abc to dq.alpha beta to dq
    _vbr_variable_load1_control_three_phase_pll2_abc_to_dq_alpha_beta_to_dq__k1 = cos(_vbr_variable_load1_control_three_phase_pll2_unit_delay1__out);
    _vbr_variable_load1_control_three_phase_pll2_abc_to_dq_alpha_beta_to_dq__k2 = sin(_vbr_variable_load1_control_three_phase_pll2_unit_delay1__out);
    _vbr_variable_load1_control_three_phase_pll2_abc_to_dq_alpha_beta_to_dq__d = _vbr_variable_load1_control_three_phase_pll2_abc_to_dq_alpha_beta_to_dq__k2 * _vbr_variable_load1_control_three_phase_pll2_abc_to_dq_abc_to_alpha_beta__alpha - _vbr_variable_load1_control_three_phase_pll2_abc_to_dq_alpha_beta_to_dq__k1 * _vbr_variable_load1_control_three_phase_pll2_abc_to_dq_abc_to_alpha_beta__beta;
    _vbr_variable_load1_control_three_phase_pll2_abc_to_dq_alpha_beta_to_dq__q = _vbr_variable_load1_control_three_phase_pll2_abc_to_dq_alpha_beta_to_dq__k1 * _vbr_variable_load1_control_three_phase_pll2_abc_to_dq_abc_to_alpha_beta__alpha + _vbr_variable_load1_control_three_phase_pll2_abc_to_dq_alpha_beta_to_dq__k2 * _vbr_variable_load1_control_three_phase_pll2_abc_to_dq_abc_to_alpha_beta__beta;
    // Generated from the component: VBR Variable Load1.Control.Three phase PLL2.term_zero
    // Generated from the component: VBR Variable Load1.Bus Join2
    _vbr_variable_load1_bus_join2__out[0] = _vbr_variable_load1_power_meter1__Pdc;
    _vbr_variable_load1_bus_join2__out[1] = _vbr_variable_load1_power_meter1__Qdc;
    _vbr_variable_load1_bus_join2__out[2] = _vbr_variable_load1_power_meter1__apparent;
    _vbr_variable_load1_bus_join2__out[3] = _vbr_variable_load1_power_meter1__k_factor;
    // Generated from the component: VBR Variable Load1.P
    HIL_OutAO(0x403c, (float)_vbr_variable_load1_power_meter1__Pdc);
    // Generated from the component: VBR Variable Load1.Q
    HIL_OutAO(0x403d, (float)_vbr_variable_load1_power_meter1__Qdc);
    // Generated from the component: VBR Variable Load1.S
    HIL_OutAO(0x403e, (float)_vbr_variable_load1_power_meter1__apparent);
    // Generated from the component: VBR Variable Load1.Termination1
    // Generated from the component: VBR Variable Load1.Termination2
    // Generated from the component: VBR Variable Load1.pf
    HIL_OutAO(0x403f, (float)_vbr_variable_load1_power_meter1__k_factor);
    // Generated from the component: VBR Variable Load2.Control.Termination1
    // Generated from the component: VBR Variable Load2.Control.abc to dq1.alpha beta to dq
    _vbr_variable_load2_control_abc_to_dq1_alpha_beta_to_dq__k1 = cos(_vbr_variable_load2_control_three_phase_pll2_unit_delay1__out);
    _vbr_variable_load2_control_abc_to_dq1_alpha_beta_to_dq__k2 = sin(_vbr_variable_load2_control_three_phase_pll2_unit_delay1__out);
    _vbr_variable_load2_control_abc_to_dq1_alpha_beta_to_dq__d = _vbr_variable_load2_control_abc_to_dq1_alpha_beta_to_dq__k2 * _vbr_variable_load2_control_abc_to_dq1_abc_to_alpha_beta__alpha - _vbr_variable_load2_control_abc_to_dq1_alpha_beta_to_dq__k1 * _vbr_variable_load2_control_abc_to_dq1_abc_to_alpha_beta__beta;
    _vbr_variable_load2_control_abc_to_dq1_alpha_beta_to_dq__q = _vbr_variable_load2_control_abc_to_dq1_alpha_beta_to_dq__k1 * _vbr_variable_load2_control_abc_to_dq1_abc_to_alpha_beta__alpha + _vbr_variable_load2_control_abc_to_dq1_alpha_beta_to_dq__k2 * _vbr_variable_load2_control_abc_to_dq1_abc_to_alpha_beta__beta;
    // Generated from the component: VBR Variable Load2.Control.Three phase PLL2.abc to dq.alpha beta to dq
    _vbr_variable_load2_control_three_phase_pll2_abc_to_dq_alpha_beta_to_dq__k1 = cos(_vbr_variable_load2_control_three_phase_pll2_unit_delay1__out);
    _vbr_variable_load2_control_three_phase_pll2_abc_to_dq_alpha_beta_to_dq__k2 = sin(_vbr_variable_load2_control_three_phase_pll2_unit_delay1__out);
    _vbr_variable_load2_control_three_phase_pll2_abc_to_dq_alpha_beta_to_dq__d = _vbr_variable_load2_control_three_phase_pll2_abc_to_dq_alpha_beta_to_dq__k2 * _vbr_variable_load2_control_three_phase_pll2_abc_to_dq_abc_to_alpha_beta__alpha - _vbr_variable_load2_control_three_phase_pll2_abc_to_dq_alpha_beta_to_dq__k1 * _vbr_variable_load2_control_three_phase_pll2_abc_to_dq_abc_to_alpha_beta__beta;
    _vbr_variable_load2_control_three_phase_pll2_abc_to_dq_alpha_beta_to_dq__q = _vbr_variable_load2_control_three_phase_pll2_abc_to_dq_alpha_beta_to_dq__k1 * _vbr_variable_load2_control_three_phase_pll2_abc_to_dq_abc_to_alpha_beta__alpha + _vbr_variable_load2_control_three_phase_pll2_abc_to_dq_alpha_beta_to_dq__k2 * _vbr_variable_load2_control_three_phase_pll2_abc_to_dq_abc_to_alpha_beta__beta;
    // Generated from the component: VBR Variable Load2.Control.Three phase PLL2.term_zero
    // Generated from the component: VBR Variable Load2.Bus Join2
    _vbr_variable_load2_bus_join2__out[0] = _vbr_variable_load2_power_meter1__Pdc;
    _vbr_variable_load2_bus_join2__out[1] = _vbr_variable_load2_power_meter1__Qdc;
    _vbr_variable_load2_bus_join2__out[2] = _vbr_variable_load2_power_meter1__apparent;
    _vbr_variable_load2_bus_join2__out[3] = _vbr_variable_load2_power_meter1__k_factor;
    // Generated from the component: VBR Variable Load2.P
    HIL_OutAO(0x4044, (float)_vbr_variable_load2_power_meter1__Pdc);
    // Generated from the component: VBR Variable Load2.Q
    HIL_OutAO(0x4045, (float)_vbr_variable_load2_power_meter1__Qdc);
    // Generated from the component: VBR Variable Load2.S
    HIL_OutAO(0x4046, (float)_vbr_variable_load2_power_meter1__apparent);
    // Generated from the component: VBR Variable Load2.Termination1
    // Generated from the component: VBR Variable Load2.Termination2
    // Generated from the component: VBR Variable Load2.pf
    HIL_OutAO(0x4047, (float)_vbr_variable_load2_power_meter1__k_factor);
    // Generated from the component: RegD_Control.P_ref_Diesel.Sum10
    _regd_control_p_ref_diesel_sum10__out = _regd_control_p_ref_diesel_pref_initial__out + _regd_control_p_ref_diesel_c_function1__out;
    // Generated from the component: RegD_Control.P_ref_VL1.Sum10
    _regd_control_p_ref_vl1_sum10__out = _regd_control_p_ref_vl1_pref_initial__out + _regd_control_p_ref_vl1_c_function1__out;
    // Generated from the component: RegD_Control.P_ref_VL2.Sum10
    _regd_control_p_ref_vl2_sum10__out = _regd_control_p_ref_vl2_pref_initial__out + _regd_control_p_ref_vl2_c_function1__out;
    // Generated from the component: VBR Variable Load1.Control.Gain4
    _vbr_variable_load1_control_gain4__out = 0.0003919183588453085 * _vbr_variable_load1_control_abc_to_dq1_alpha_beta_to_dq__d;
    // Generated from the component: VBR Variable Load1.Control.Gain5
    _vbr_variable_load1_control_gain5__out = 0.0003919183588453085 * _vbr_variable_load1_control_abc_to_dq1_alpha_beta_to_dq__q;
    // Generated from the component: VBR Variable Load1.Control.Three phase PLL2.abc to dq.LPF_d
    _vbr_variable_load1_control_three_phase_pll2_abc_to_dq_lpf_d__a_sum = 0.0f;
    _vbr_variable_load1_control_three_phase_pll2_abc_to_dq_lpf_d__b_sum = 0.0f;
    _vbr_variable_load1_control_three_phase_pll2_abc_to_dq_lpf_d__delay_line_in = 0.0f;
    for (_vbr_variable_load1_control_three_phase_pll2_abc_to_dq_lpf_d__i = 0; _vbr_variable_load1_control_three_phase_pll2_abc_to_dq_lpf_d__i < 1; _vbr_variable_load1_control_three_phase_pll2_abc_to_dq_lpf_d__i++) {
        _vbr_variable_load1_control_three_phase_pll2_abc_to_dq_lpf_d__b_sum += _vbr_variable_load1_control_three_phase_pll2_abc_to_dq_lpf_d__b_coeff[_vbr_variable_load1_control_three_phase_pll2_abc_to_dq_lpf_d__i + 1] * _vbr_variable_load1_control_three_phase_pll2_abc_to_dq_lpf_d__states[_vbr_variable_load1_control_three_phase_pll2_abc_to_dq_lpf_d__i];
    }
    _vbr_variable_load1_control_three_phase_pll2_abc_to_dq_lpf_d__a_sum += _vbr_variable_load1_control_three_phase_pll2_abc_to_dq_lpf_d__states[0] * _vbr_variable_load1_control_three_phase_pll2_abc_to_dq_lpf_d__a_coeff[1];
    _vbr_variable_load1_control_three_phase_pll2_abc_to_dq_lpf_d__delay_line_in = (_vbr_variable_load1_control_three_phase_pll2_abc_to_dq_alpha_beta_to_dq__d - _vbr_variable_load1_control_three_phase_pll2_abc_to_dq_lpf_d__a_sum) / _vbr_variable_load1_control_three_phase_pll2_abc_to_dq_lpf_d__a_coeff[0];
    _vbr_variable_load1_control_three_phase_pll2_abc_to_dq_lpf_d__b_sum += _vbr_variable_load1_control_three_phase_pll2_abc_to_dq_lpf_d__b_coeff[0] * _vbr_variable_load1_control_three_phase_pll2_abc_to_dq_lpf_d__delay_line_in;
    _vbr_variable_load1_control_three_phase_pll2_abc_to_dq_lpf_d__out = _vbr_variable_load1_control_three_phase_pll2_abc_to_dq_lpf_d__b_sum;
    // Generated from the component: VBR Variable Load1.Control.Three phase PLL2.abc to dq.LPF_q
    _vbr_variable_load1_control_three_phase_pll2_abc_to_dq_lpf_q__a_sum = 0.0f;
    _vbr_variable_load1_control_three_phase_pll2_abc_to_dq_lpf_q__b_sum = 0.0f;
    _vbr_variable_load1_control_three_phase_pll2_abc_to_dq_lpf_q__delay_line_in = 0.0f;
    for (_vbr_variable_load1_control_three_phase_pll2_abc_to_dq_lpf_q__i = 0; _vbr_variable_load1_control_three_phase_pll2_abc_to_dq_lpf_q__i < 1; _vbr_variable_load1_control_three_phase_pll2_abc_to_dq_lpf_q__i++) {
        _vbr_variable_load1_control_three_phase_pll2_abc_to_dq_lpf_q__b_sum += _vbr_variable_load1_control_three_phase_pll2_abc_to_dq_lpf_q__b_coeff[_vbr_variable_load1_control_three_phase_pll2_abc_to_dq_lpf_q__i + 1] * _vbr_variable_load1_control_three_phase_pll2_abc_to_dq_lpf_q__states[_vbr_variable_load1_control_three_phase_pll2_abc_to_dq_lpf_q__i];
    }
    _vbr_variable_load1_control_three_phase_pll2_abc_to_dq_lpf_q__a_sum += _vbr_variable_load1_control_three_phase_pll2_abc_to_dq_lpf_q__states[0] * _vbr_variable_load1_control_three_phase_pll2_abc_to_dq_lpf_q__a_coeff[1];
    _vbr_variable_load1_control_three_phase_pll2_abc_to_dq_lpf_q__delay_line_in = (_vbr_variable_load1_control_three_phase_pll2_abc_to_dq_alpha_beta_to_dq__q - _vbr_variable_load1_control_three_phase_pll2_abc_to_dq_lpf_q__a_sum) / _vbr_variable_load1_control_three_phase_pll2_abc_to_dq_lpf_q__a_coeff[0];
    _vbr_variable_load1_control_three_phase_pll2_abc_to_dq_lpf_q__b_sum += _vbr_variable_load1_control_three_phase_pll2_abc_to_dq_lpf_q__b_coeff[0] * _vbr_variable_load1_control_three_phase_pll2_abc_to_dq_lpf_q__delay_line_in;
    _vbr_variable_load1_control_three_phase_pll2_abc_to_dq_lpf_q__out = _vbr_variable_load1_control_three_phase_pll2_abc_to_dq_lpf_q__b_sum;
    // Generated from the component: VBR Variable Load1_out.Bus Split1
    _vbr_variable_load1_out_bus_split1__out = _vbr_variable_load1_bus_join2__out[0];
    _vbr_variable_load1_out_bus_split1__out1 = _vbr_variable_load1_bus_join2__out[1];
    _vbr_variable_load1_out_bus_split1__out2 = _vbr_variable_load1_bus_join2__out[2];
    _vbr_variable_load1_out_bus_split1__out3 = _vbr_variable_load1_bus_join2__out[3];
    // Generated from the component: VBR Variable Load2.Control.Gain4
    _vbr_variable_load2_control_gain4__out = 0.0003919183588453085 * _vbr_variable_load2_control_abc_to_dq1_alpha_beta_to_dq__d;
    // Generated from the component: VBR Variable Load2.Control.Gain5
    _vbr_variable_load2_control_gain5__out = 0.0003919183588453085 * _vbr_variable_load2_control_abc_to_dq1_alpha_beta_to_dq__q;
    // Generated from the component: VBR Variable Load2.Control.Three phase PLL2.abc to dq.LPF_d
    _vbr_variable_load2_control_three_phase_pll2_abc_to_dq_lpf_d__a_sum = 0.0f;
    _vbr_variable_load2_control_three_phase_pll2_abc_to_dq_lpf_d__b_sum = 0.0f;
    _vbr_variable_load2_control_three_phase_pll2_abc_to_dq_lpf_d__delay_line_in = 0.0f;
    for (_vbr_variable_load2_control_three_phase_pll2_abc_to_dq_lpf_d__i = 0; _vbr_variable_load2_control_three_phase_pll2_abc_to_dq_lpf_d__i < 1; _vbr_variable_load2_control_three_phase_pll2_abc_to_dq_lpf_d__i++) {
        _vbr_variable_load2_control_three_phase_pll2_abc_to_dq_lpf_d__b_sum += _vbr_variable_load2_control_three_phase_pll2_abc_to_dq_lpf_d__b_coeff[_vbr_variable_load2_control_three_phase_pll2_abc_to_dq_lpf_d__i + 1] * _vbr_variable_load2_control_three_phase_pll2_abc_to_dq_lpf_d__states[_vbr_variable_load2_control_three_phase_pll2_abc_to_dq_lpf_d__i];
    }
    _vbr_variable_load2_control_three_phase_pll2_abc_to_dq_lpf_d__a_sum += _vbr_variable_load2_control_three_phase_pll2_abc_to_dq_lpf_d__states[0] * _vbr_variable_load2_control_three_phase_pll2_abc_to_dq_lpf_d__a_coeff[1];
    _vbr_variable_load2_control_three_phase_pll2_abc_to_dq_lpf_d__delay_line_in = (_vbr_variable_load2_control_three_phase_pll2_abc_to_dq_alpha_beta_to_dq__d - _vbr_variable_load2_control_three_phase_pll2_abc_to_dq_lpf_d__a_sum) / _vbr_variable_load2_control_three_phase_pll2_abc_to_dq_lpf_d__a_coeff[0];
    _vbr_variable_load2_control_three_phase_pll2_abc_to_dq_lpf_d__b_sum += _vbr_variable_load2_control_three_phase_pll2_abc_to_dq_lpf_d__b_coeff[0] * _vbr_variable_load2_control_three_phase_pll2_abc_to_dq_lpf_d__delay_line_in;
    _vbr_variable_load2_control_three_phase_pll2_abc_to_dq_lpf_d__out = _vbr_variable_load2_control_three_phase_pll2_abc_to_dq_lpf_d__b_sum;
    // Generated from the component: VBR Variable Load2.Control.Three phase PLL2.abc to dq.LPF_q
    _vbr_variable_load2_control_three_phase_pll2_abc_to_dq_lpf_q__a_sum = 0.0f;
    _vbr_variable_load2_control_three_phase_pll2_abc_to_dq_lpf_q__b_sum = 0.0f;
    _vbr_variable_load2_control_three_phase_pll2_abc_to_dq_lpf_q__delay_line_in = 0.0f;
    for (_vbr_variable_load2_control_three_phase_pll2_abc_to_dq_lpf_q__i = 0; _vbr_variable_load2_control_three_phase_pll2_abc_to_dq_lpf_q__i < 1; _vbr_variable_load2_control_three_phase_pll2_abc_to_dq_lpf_q__i++) {
        _vbr_variable_load2_control_three_phase_pll2_abc_to_dq_lpf_q__b_sum += _vbr_variable_load2_control_three_phase_pll2_abc_to_dq_lpf_q__b_coeff[_vbr_variable_load2_control_three_phase_pll2_abc_to_dq_lpf_q__i + 1] * _vbr_variable_load2_control_three_phase_pll2_abc_to_dq_lpf_q__states[_vbr_variable_load2_control_three_phase_pll2_abc_to_dq_lpf_q__i];
    }
    _vbr_variable_load2_control_three_phase_pll2_abc_to_dq_lpf_q__a_sum += _vbr_variable_load2_control_three_phase_pll2_abc_to_dq_lpf_q__states[0] * _vbr_variable_load2_control_three_phase_pll2_abc_to_dq_lpf_q__a_coeff[1];
    _vbr_variable_load2_control_three_phase_pll2_abc_to_dq_lpf_q__delay_line_in = (_vbr_variable_load2_control_three_phase_pll2_abc_to_dq_alpha_beta_to_dq__q - _vbr_variable_load2_control_three_phase_pll2_abc_to_dq_lpf_q__a_sum) / _vbr_variable_load2_control_three_phase_pll2_abc_to_dq_lpf_q__a_coeff[0];
    _vbr_variable_load2_control_three_phase_pll2_abc_to_dq_lpf_q__b_sum += _vbr_variable_load2_control_three_phase_pll2_abc_to_dq_lpf_q__b_coeff[0] * _vbr_variable_load2_control_three_phase_pll2_abc_to_dq_lpf_q__delay_line_in;
    _vbr_variable_load2_control_three_phase_pll2_abc_to_dq_lpf_q__out = _vbr_variable_load2_control_three_phase_pll2_abc_to_dq_lpf_q__b_sum;
    // Generated from the component: VBR Variable Load2_out.Bus Split1
    _vbr_variable_load2_out_bus_split1__out = _vbr_variable_load2_bus_join2__out[0];
    _vbr_variable_load2_out_bus_split1__out1 = _vbr_variable_load2_bus_join2__out[1];
    _vbr_variable_load2_out_bus_split1__out2 = _vbr_variable_load2_bus_join2__out[2];
    _vbr_variable_load2_out_bus_split1__out3 = _vbr_variable_load2_bus_join2__out[3];
    // Generated from the component: Microturbine1.Governor.Rate Transition4.Input
    _microturbine1_governor_rate_transition4_output__out = _regd_control_p_ref_diesel_sum10__out;
    // Generated from the component: VBR Variable Load1_in.Bus Join1
    _vbr_variable_load1_in_bus_join1__out[0] = _vbr_variable_load1_in_enable__out;
    _vbr_variable_load1_in_bus_join1__out[1] = _regd_control_p_ref_vl1_sum10__out;
    _vbr_variable_load1_in_bus_join1__out[2] = _vbr_variable_load1_in_qref__out;
    // Generated from the component: VBR Variable Load2_in.Bus Join1
    _vbr_variable_load2_in_bus_join1__out[0] = _vbr_variable_load2_in_enable__out;
    _vbr_variable_load2_in_bus_join1__out[1] = _regd_control_p_ref_vl2_sum10__out;
    _vbr_variable_load2_in_bus_join1__out[2] = _vbr_variable_load2_in_qref__out;
    // Generated from the component: VBR Variable Load1.Control.current_control.Product2
    _vbr_variable_load1_control_current_control_product2__out = (_vbr_variable_load1_control_gain4__out * _vbr_variable_load1_control_gain3__out);
    // Generated from the component: VBR Variable Load1.Control.current_control.Product1
    _vbr_variable_load1_control_current_control_product1__out = (_vbr_variable_load1_control_gain5__out * _vbr_variable_load1_control_gain3__out);
    // Generated from the component: VBR Variable Load1.Control.Gain1
    _vbr_variable_load1_control_gain1__out = 0.005888196497074948 * _vbr_variable_load1_control_three_phase_pll2_abc_to_dq_lpf_d__out;
    // Generated from the component: VBR Variable Load1.Control.Gain2
    _vbr_variable_load1_control_gain2__out = 0.005888196497074948 * _vbr_variable_load1_control_three_phase_pll2_abc_to_dq_lpf_q__out;
    // Generated from the component: VBR Variable Load1.Control.Three phase PLL2.normalize
    _vbr_variable_load1_control_three_phase_pll2_normalize__in1 = _vbr_variable_load1_control_three_phase_pll2_abc_to_dq_lpf_d__out;
    _vbr_variable_load1_control_three_phase_pll2_normalize__in2 = _vbr_variable_load1_control_three_phase_pll2_abc_to_dq_lpf_q__out;
    _vbr_variable_load1_control_three_phase_pll2_normalize__pk = (powf(_vbr_variable_load1_control_three_phase_pll2_normalize__in1, 2.0) + powf(_vbr_variable_load1_control_three_phase_pll2_normalize__in2, 2.0));
    _vbr_variable_load1_control_three_phase_pll2_normalize__pk = sqrt(_vbr_variable_load1_control_three_phase_pll2_normalize__pk);
    if (_vbr_variable_load1_control_three_phase_pll2_normalize__pk < 0.1) {
        _vbr_variable_load1_control_three_phase_pll2_normalize__in2_pu = _vbr_variable_load1_control_three_phase_pll2_normalize__in2 / 0.1;
    }
    else {
        _vbr_variable_load1_control_three_phase_pll2_normalize__in2_pu = _vbr_variable_load1_control_three_phase_pll2_normalize__in2 / _vbr_variable_load1_control_three_phase_pll2_normalize__pk;
    }
    // Generated from the component: VBR Variable Load1_out.P
    HIL_OutAO(0x4040, (float)_vbr_variable_load1_out_bus_split1__out);
    // Generated from the component: VBR Variable Load1_out.Q
    HIL_OutAO(0x4041, (float)_vbr_variable_load1_out_bus_split1__out1);
    // Generated from the component: VBR Variable Load1_out.S
    HIL_OutAO(0x4042, (float)_vbr_variable_load1_out_bus_split1__out2);
    // Generated from the component: VBR Variable Load1_out.pf
    HIL_OutAO(0x4043, (float)_vbr_variable_load1_out_bus_split1__out3);
    // Generated from the component: VBR Variable Load2.Control.current_control.Product2
    _vbr_variable_load2_control_current_control_product2__out = (_vbr_variable_load2_control_gain4__out * _vbr_variable_load2_control_gain3__out);
    // Generated from the component: VBR Variable Load2.Control.current_control.Product1
    _vbr_variable_load2_control_current_control_product1__out = (_vbr_variable_load2_control_gain5__out * _vbr_variable_load2_control_gain3__out);
    // Generated from the component: VBR Variable Load2.Control.Gain1
    _vbr_variable_load2_control_gain1__out = 0.005888196497074948 * _vbr_variable_load2_control_three_phase_pll2_abc_to_dq_lpf_d__out;
    // Generated from the component: VBR Variable Load2.Control.Gain2
    _vbr_variable_load2_control_gain2__out = 0.005888196497074948 * _vbr_variable_load2_control_three_phase_pll2_abc_to_dq_lpf_q__out;
    // Generated from the component: VBR Variable Load2.Control.Three phase PLL2.normalize
    _vbr_variable_load2_control_three_phase_pll2_normalize__in1 = _vbr_variable_load2_control_three_phase_pll2_abc_to_dq_lpf_d__out;
    _vbr_variable_load2_control_three_phase_pll2_normalize__in2 = _vbr_variable_load2_control_three_phase_pll2_abc_to_dq_lpf_q__out;
    _vbr_variable_load2_control_three_phase_pll2_normalize__pk = (powf(_vbr_variable_load2_control_three_phase_pll2_normalize__in1, 2.0) + powf(_vbr_variable_load2_control_three_phase_pll2_normalize__in2, 2.0));
    _vbr_variable_load2_control_three_phase_pll2_normalize__pk = sqrt(_vbr_variable_load2_control_three_phase_pll2_normalize__pk);
    if (_vbr_variable_load2_control_three_phase_pll2_normalize__pk < 0.1) {
        _vbr_variable_load2_control_three_phase_pll2_normalize__in2_pu = _vbr_variable_load2_control_three_phase_pll2_normalize__in2 / 0.1;
    }
    else {
        _vbr_variable_load2_control_three_phase_pll2_normalize__in2_pu = _vbr_variable_load2_control_three_phase_pll2_normalize__in2 / _vbr_variable_load2_control_three_phase_pll2_normalize__pk;
    }
    // Generated from the component: VBR Variable Load2_out.P
    HIL_OutAO(0x4048, (float)_vbr_variable_load2_out_bus_split1__out);
    // Generated from the component: VBR Variable Load2_out.Q
    HIL_OutAO(0x4049, (float)_vbr_variable_load2_out_bus_split1__out1);
    // Generated from the component: VBR Variable Load2_out.S
    HIL_OutAO(0x404a, (float)_vbr_variable_load2_out_bus_split1__out2);
    // Generated from the component: VBR Variable Load2_out.pf
    HIL_OutAO(0x404b, (float)_vbr_variable_load2_out_bus_split1__out3);
    // Generated from the component: VBR Variable Load1.Subsystem1.Bus Split1
    _vbr_variable_load1_subsystem1_bus_split1__out = _vbr_variable_load1_in_bus_join1__out[0];
    _vbr_variable_load1_subsystem1_bus_split1__out1 = _vbr_variable_load1_in_bus_join1__out[1];
    _vbr_variable_load1_subsystem1_bus_split1__out2 = _vbr_variable_load1_in_bus_join1__out[2];
    // Generated from the component: VBR Variable Load2.Subsystem1.Bus Split1
    _vbr_variable_load2_subsystem1_bus_split1__out = _vbr_variable_load2_in_bus_join1__out[0];
    _vbr_variable_load2_subsystem1_bus_split1__out1 = _vbr_variable_load2_in_bus_join1__out[1];
    _vbr_variable_load2_subsystem1_bus_split1__out2 = _vbr_variable_load2_in_bus_join1__out[2];
    // Generated from the component: VBR Variable Load1.Control.current_control.Gain11
    _vbr_variable_load1_control_current_control_gain11__out = 0.5663929062962368 * _vbr_variable_load1_control_current_control_product2__out;
    // Generated from the component: VBR Variable Load1.Control.current_control.Gain8
    _vbr_variable_load1_control_current_control_gain8__out = 0.5663929062962368 * _vbr_variable_load1_control_current_control_product1__out;
    // Generated from the component: VBR Variable Load1.Control.Current_ref.Product4
    _vbr_variable_load1_control_current_ref_product4__out = (_vbr_variable_load1_control_gain1__out * _vbr_variable_load1_control_limit_pqref_unit_delay2__out);
    // Generated from the component: VBR Variable Load1.Control.Current_ref.Product5
    _vbr_variable_load1_control_current_ref_product5__out = (_vbr_variable_load1_control_limit_pqref_unit_delay1__out * _vbr_variable_load1_control_gain1__out);
    // Generated from the component: VBR Variable Load1.Control.Current_ref.Product3
    _vbr_variable_load1_control_current_ref_product3__out = (_vbr_variable_load1_control_gain2__out * _vbr_variable_load1_control_limit_pqref_unit_delay1__out);
    // Generated from the component: VBR Variable Load1.Control.Current_ref.Product6
    _vbr_variable_load1_control_current_ref_product6__out = (_vbr_variable_load1_control_limit_pqref_unit_delay2__out * _vbr_variable_load1_control_gain2__out);
    // Generated from the component: VBR Variable Load1.Control.Gain12
    _vbr_variable_load1_control_gain12__out = 0.005888196497074948 * _vbr_variable_load1_control_three_phase_pll2_normalize__pk;
    // Generated from the component: VBR Variable Load1.Control.Three phase PLL2.PID.Kd
    _vbr_variable_load1_control_three_phase_pll2_pid_kd__out = 1.0 * _vbr_variable_load1_control_three_phase_pll2_normalize__in2_pu;
    // Generated from the component: VBR Variable Load1.Control.Three phase PLL2.PID.Ki
    _vbr_variable_load1_control_three_phase_pll2_pid_ki__out = 3200.0 * _vbr_variable_load1_control_three_phase_pll2_normalize__in2_pu;
    // Generated from the component: VBR Variable Load1.Control.Three phase PLL2.PID.Kp
    _vbr_variable_load1_control_three_phase_pll2_pid_kp__out = 100.0 * _vbr_variable_load1_control_three_phase_pll2_normalize__in2_pu;
    // Generated from the component: VBR Variable Load2.Control.current_control.Gain11
    _vbr_variable_load2_control_current_control_gain11__out = 0.5663929062962368 * _vbr_variable_load2_control_current_control_product2__out;
    // Generated from the component: VBR Variable Load2.Control.current_control.Gain8
    _vbr_variable_load2_control_current_control_gain8__out = 0.5663929062962368 * _vbr_variable_load2_control_current_control_product1__out;
    // Generated from the component: VBR Variable Load2.Control.Current_ref.Product4
    _vbr_variable_load2_control_current_ref_product4__out = (_vbr_variable_load2_control_gain1__out * _vbr_variable_load2_control_limit_pqref_unit_delay2__out);
    // Generated from the component: VBR Variable Load2.Control.Current_ref.Product5
    _vbr_variable_load2_control_current_ref_product5__out = (_vbr_variable_load2_control_limit_pqref_unit_delay1__out * _vbr_variable_load2_control_gain1__out);
    // Generated from the component: VBR Variable Load2.Control.Current_ref.Product3
    _vbr_variable_load2_control_current_ref_product3__out = (_vbr_variable_load2_control_gain2__out * _vbr_variable_load2_control_limit_pqref_unit_delay1__out);
    // Generated from the component: VBR Variable Load2.Control.Current_ref.Product6
    _vbr_variable_load2_control_current_ref_product6__out = (_vbr_variable_load2_control_limit_pqref_unit_delay2__out * _vbr_variable_load2_control_gain2__out);
    // Generated from the component: VBR Variable Load2.Control.Gain12
    _vbr_variable_load2_control_gain12__out = 0.005888196497074948 * _vbr_variable_load2_control_three_phase_pll2_normalize__pk;
    // Generated from the component: VBR Variable Load2.Control.Three phase PLL2.PID.Kd
    _vbr_variable_load2_control_three_phase_pll2_pid_kd__out = 1.0 * _vbr_variable_load2_control_three_phase_pll2_normalize__in2_pu;
    // Generated from the component: VBR Variable Load2.Control.Three phase PLL2.PID.Ki
    _vbr_variable_load2_control_three_phase_pll2_pid_ki__out = 3200.0 * _vbr_variable_load2_control_three_phase_pll2_normalize__in2_pu;
    // Generated from the component: VBR Variable Load2.Control.Three phase PLL2.PID.Kp
    _vbr_variable_load2_control_three_phase_pll2_pid_kp__out = 100.0 * _vbr_variable_load2_control_three_phase_pll2_normalize__in2_pu;
    // Generated from the component: VBR Variable Load1.Control.Signal switch1
    _vbr_variable_load1_control_signal_switch1__out = (_vbr_variable_load1_subsystem1_bus_split1__out > 0.0f) ? _vbr_variable_load1_subsystem1_bus_split1__out1 : _vbr_variable_load1_control_constant5__out;
    // Generated from the component: VBR Variable Load1.Control.Signal switch2
    _vbr_variable_load1_control_signal_switch2__out = (_vbr_variable_load1_subsystem1_bus_split1__out > 0.0f) ? _vbr_variable_load1_subsystem1_bus_split1__out2 : _vbr_variable_load1_control_constant5__out;
    // Generated from the component: VBR Variable Load1.Control.current_control.PI_d.Integrator1
    if (((_vbr_variable_load1_subsystem1_bus_split1__out > 0.0) && (_vbr_variable_load1_control_current_control_pi_d_integrator1__reset_state <= 0)) || ((_vbr_variable_load1_subsystem1_bus_split1__out <= 0.0) && (_vbr_variable_load1_control_current_control_pi_d_integrator1__reset_state == 1))) {
        _vbr_variable_load1_control_current_control_pi_d_integrator1__state = 0.0;
    }
    _vbr_variable_load1_control_current_control_pi_d_integrator1__out = _vbr_variable_load1_control_current_control_pi_d_integrator1__state;
    // Generated from the component: VBR Variable Load1.Control.current_control.PI_q.Integrator1
    if (((_vbr_variable_load1_subsystem1_bus_split1__out > 0.0) && (_vbr_variable_load1_control_current_control_pi_q_integrator1__reset_state <= 0)) || ((_vbr_variable_load1_subsystem1_bus_split1__out <= 0.0) && (_vbr_variable_load1_control_current_control_pi_q_integrator1__reset_state == 1))) {
        _vbr_variable_load1_control_current_control_pi_q_integrator1__state = 0.0;
    }
    _vbr_variable_load1_control_current_control_pi_q_integrator1__out = _vbr_variable_load1_control_current_control_pi_q_integrator1__state;
    // Generated from the component: VBR Variable Load1.enable_probe
    HIL_OutInt32(0xf0040f, _vbr_variable_load1_subsystem1_bus_split1__out != 0x0);
    // Generated from the component: VBR Variable Load2.Control.Signal switch1
    _vbr_variable_load2_control_signal_switch1__out = (_vbr_variable_load2_subsystem1_bus_split1__out > 0.0f) ? _vbr_variable_load2_subsystem1_bus_split1__out1 : _vbr_variable_load2_control_constant5__out;
    // Generated from the component: VBR Variable Load2.Control.Signal switch2
    _vbr_variable_load2_control_signal_switch2__out = (_vbr_variable_load2_subsystem1_bus_split1__out > 0.0f) ? _vbr_variable_load2_subsystem1_bus_split1__out2 : _vbr_variable_load2_control_constant5__out;
    // Generated from the component: VBR Variable Load2.Control.current_control.PI_d.Integrator1
    if (((_vbr_variable_load2_subsystem1_bus_split1__out > 0.0) && (_vbr_variable_load2_control_current_control_pi_d_integrator1__reset_state <= 0)) || ((_vbr_variable_load2_subsystem1_bus_split1__out <= 0.0) && (_vbr_variable_load2_control_current_control_pi_d_integrator1__reset_state == 1))) {
        _vbr_variable_load2_control_current_control_pi_d_integrator1__state = 0.0;
    }
    _vbr_variable_load2_control_current_control_pi_d_integrator1__out = _vbr_variable_load2_control_current_control_pi_d_integrator1__state;
    // Generated from the component: VBR Variable Load2.Control.current_control.PI_q.Integrator1
    if (((_vbr_variable_load2_subsystem1_bus_split1__out > 0.0) && (_vbr_variable_load2_control_current_control_pi_q_integrator1__reset_state <= 0)) || ((_vbr_variable_load2_subsystem1_bus_split1__out <= 0.0) && (_vbr_variable_load2_control_current_control_pi_q_integrator1__reset_state == 1))) {
        _vbr_variable_load2_control_current_control_pi_q_integrator1__state = 0.0;
    }
    _vbr_variable_load2_control_current_control_pi_q_integrator1__out = _vbr_variable_load2_control_current_control_pi_q_integrator1__state;
    // Generated from the component: VBR Variable Load2.enable_probe
    HIL_OutInt32(0xf00410, _vbr_variable_load2_subsystem1_bus_split1__out != 0x0);
    // Generated from the component: VBR Variable Load1.Control.Current_ref.Sum3
    _vbr_variable_load1_control_current_ref_sum3__out = _vbr_variable_load1_control_current_ref_product3__out - _vbr_variable_load1_control_current_ref_product4__out;
    // Generated from the component: VBR Variable Load1.Control.Current_ref.Sum4
    _vbr_variable_load1_control_current_ref_sum4__out = _vbr_variable_load1_control_current_ref_product5__out + _vbr_variable_load1_control_current_ref_product6__out;
    // Generated from the component: VBR Variable Load1.Control.Current_ref.Product7
    _vbr_variable_load1_control_current_ref_product7__out = (_vbr_variable_load1_control_gain12__out * _vbr_variable_load1_control_gain12__out);
    // Generated from the component: VBR Variable Load1.Control.Three phase PLL2.PID.Sum8
    _vbr_variable_load1_control_three_phase_pll2_pid_sum8__out = _vbr_variable_load1_control_three_phase_pll2_pid_kd__out - _vbr_variable_load1_control_three_phase_pll2_pid_integrator2__out;
    // Generated from the component: VBR Variable Load2.Control.Current_ref.Sum3
    _vbr_variable_load2_control_current_ref_sum3__out = _vbr_variable_load2_control_current_ref_product3__out - _vbr_variable_load2_control_current_ref_product4__out;
    // Generated from the component: VBR Variable Load2.Control.Current_ref.Sum4
    _vbr_variable_load2_control_current_ref_sum4__out = _vbr_variable_load2_control_current_ref_product5__out + _vbr_variable_load2_control_current_ref_product6__out;
    // Generated from the component: VBR Variable Load2.Control.Current_ref.Product7
    _vbr_variable_load2_control_current_ref_product7__out = (_vbr_variable_load2_control_gain12__out * _vbr_variable_load2_control_gain12__out);
    // Generated from the component: VBR Variable Load2.Control.Three phase PLL2.PID.Sum8
    _vbr_variable_load2_control_three_phase_pll2_pid_sum8__out = _vbr_variable_load2_control_three_phase_pll2_pid_kd__out - _vbr_variable_load2_control_three_phase_pll2_pid_integrator2__out;
    // Generated from the component: VBR Variable Load1.Control.Gain8
    _vbr_variable_load1_control_gain8__out = 1.5384615384615385e-06 * _vbr_variable_load1_control_signal_switch1__out;
    // Generated from the component: VBR Variable Load1.Control.Gain9
    _vbr_variable_load1_control_gain9__out = 1.5384615384615385e-06 * _vbr_variable_load1_control_signal_switch2__out;
    // Generated from the component: VBR Variable Load2.Control.Gain8
    _vbr_variable_load2_control_gain8__out = 1.5384615384615385e-06 * _vbr_variable_load2_control_signal_switch1__out;
    // Generated from the component: VBR Variable Load2.Control.Gain9
    _vbr_variable_load2_control_gain9__out = 1.5384615384615385e-06 * _vbr_variable_load2_control_signal_switch2__out;
    // Generated from the component: VBR Variable Load1.Control.Current_ref.Limit3
    if (_vbr_variable_load1_control_current_ref_product7__out < 0.01) {
        _vbr_variable_load1_control_current_ref_limit3__out = 0.01;
    } else {
        _vbr_variable_load1_control_current_ref_limit3__out = _vbr_variable_load1_control_current_ref_product7__out;
    }
    // Generated from the component: VBR Variable Load1.Control.Three phase PLL2.PID.Gain1
    _vbr_variable_load1_control_three_phase_pll2_pid_gain1__out = 714.2857 * _vbr_variable_load1_control_three_phase_pll2_pid_sum8__out;
    // Generated from the component: VBR Variable Load2.Control.Current_ref.Limit3
    if (_vbr_variable_load2_control_current_ref_product7__out < 0.01) {
        _vbr_variable_load2_control_current_ref_limit3__out = 0.01;
    } else {
        _vbr_variable_load2_control_current_ref_limit3__out = _vbr_variable_load2_control_current_ref_product7__out;
    }
    // Generated from the component: VBR Variable Load2.Control.Three phase PLL2.PID.Gain1
    _vbr_variable_load2_control_three_phase_pll2_pid_gain1__out = 714.2857 * _vbr_variable_load2_control_three_phase_pll2_pid_sum8__out;
    // Generated from the component: VBR Variable Load1.Control.Limit_PQref.priority_PQlim.PQ limiting with priority
    _vbr_variable_load1_control_limit_pqref_priority_pqlim_pq_limiting_with_priority__Pref = _vbr_variable_load1_control_gain8__out;
    _vbr_variable_load1_control_limit_pqref_priority_pqlim_pq_limiting_with_priority__Qref = _vbr_variable_load1_control_gain9__out;
    _vbr_variable_load1_control_limit_pqref_priority_pqlim_pq_limiting_with_priority__Smax = _vbr_variable_load1_control_constant3__out;
    _vbr_variable_load1_control_limit_pqref_priority_pqlim_pq_limiting_with_priority__Sref = sqrt(_vbr_variable_load1_control_limit_pqref_priority_pqlim_pq_limiting_with_priority__Pref * _vbr_variable_load1_control_limit_pqref_priority_pqlim_pq_limiting_with_priority__Pref + _vbr_variable_load1_control_limit_pqref_priority_pqlim_pq_limiting_with_priority__Qref * _vbr_variable_load1_control_limit_pqref_priority_pqlim_pq_limiting_with_priority__Qref);
    if (_vbr_variable_load1_control_limit_pqref_priority_pqlim_pq_limiting_with_priority__Qref >= 0)_vbr_variable_load1_control_limit_pqref_priority_pqlim_pq_limiting_with_priority__signQ = 1;
    else _vbr_variable_load1_control_limit_pqref_priority_pqlim_pq_limiting_with_priority__signQ = -1;
    if (_vbr_variable_load1_control_limit_pqref_priority_pqlim_pq_limiting_with_priority__Pref >= 0)_vbr_variable_load1_control_limit_pqref_priority_pqlim_pq_limiting_with_priority__signP = 1;
    else _vbr_variable_load1_control_limit_pqref_priority_pqlim_pq_limiting_with_priority__signP = -1;
    if (_vbr_variable_load1_control_limit_pqref_priority_pqlim_pq_limiting_with_priority__Sref <= _vbr_variable_load1_control_limit_pqref_priority_pqlim_pq_limiting_with_priority__Smax) {
        _vbr_variable_load1_control_limit_pqref_priority_pqlim_pq_limiting_with_priority__S = _vbr_variable_load1_control_limit_pqref_priority_pqlim_pq_limiting_with_priority__Sref;
        _vbr_variable_load1_control_limit_pqref_priority_pqlim_pq_limiting_with_priority__P = _vbr_variable_load1_control_limit_pqref_priority_pqlim_pq_limiting_with_priority__Pref;
        _vbr_variable_load1_control_limit_pqref_priority_pqlim_pq_limiting_with_priority__Q = _vbr_variable_load1_control_limit_pqref_priority_pqlim_pq_limiting_with_priority__Qref;
    }
    else {
        _vbr_variable_load1_control_limit_pqref_priority_pqlim_pq_limiting_with_priority__S = _vbr_variable_load1_control_limit_pqref_priority_pqlim_pq_limiting_with_priority__Smax;
        if (1.0 == 1) {
            if (fabs(_vbr_variable_load1_control_limit_pqref_priority_pqlim_pq_limiting_with_priority__Pref) > _vbr_variable_load1_control_limit_pqref_priority_pqlim_pq_limiting_with_priority__Smax) {
                _vbr_variable_load1_control_limit_pqref_priority_pqlim_pq_limiting_with_priority__P = _vbr_variable_load1_control_limit_pqref_priority_pqlim_pq_limiting_with_priority__signP * _vbr_variable_load1_control_limit_pqref_priority_pqlim_pq_limiting_with_priority__Smax;
                _vbr_variable_load1_control_limit_pqref_priority_pqlim_pq_limiting_with_priority__Q = 0;
            }
            else {
                _vbr_variable_load1_control_limit_pqref_priority_pqlim_pq_limiting_with_priority__P = _vbr_variable_load1_control_limit_pqref_priority_pqlim_pq_limiting_with_priority__Pref;
                _vbr_variable_load1_control_limit_pqref_priority_pqlim_pq_limiting_with_priority__Q = _vbr_variable_load1_control_limit_pqref_priority_pqlim_pq_limiting_with_priority__signQ * sqrt(_vbr_variable_load1_control_limit_pqref_priority_pqlim_pq_limiting_with_priority__Smax * _vbr_variable_load1_control_limit_pqref_priority_pqlim_pq_limiting_with_priority__Smax - _vbr_variable_load1_control_limit_pqref_priority_pqlim_pq_limiting_with_priority__Pref * _vbr_variable_load1_control_limit_pqref_priority_pqlim_pq_limiting_with_priority__Pref);
            }
        }
        else if (1.0 == 2) {
            if (fabs(_vbr_variable_load1_control_limit_pqref_priority_pqlim_pq_limiting_with_priority__Qref) > _vbr_variable_load1_control_limit_pqref_priority_pqlim_pq_limiting_with_priority__Smax) {
                _vbr_variable_load1_control_limit_pqref_priority_pqlim_pq_limiting_with_priority__Q = _vbr_variable_load1_control_limit_pqref_priority_pqlim_pq_limiting_with_priority__signQ * _vbr_variable_load1_control_limit_pqref_priority_pqlim_pq_limiting_with_priority__Smax;
                _vbr_variable_load1_control_limit_pqref_priority_pqlim_pq_limiting_with_priority__P = 0;
            }
            else {
                _vbr_variable_load1_control_limit_pqref_priority_pqlim_pq_limiting_with_priority__Q = _vbr_variable_load1_control_limit_pqref_priority_pqlim_pq_limiting_with_priority__Qref;
                _vbr_variable_load1_control_limit_pqref_priority_pqlim_pq_limiting_with_priority__P = _vbr_variable_load1_control_limit_pqref_priority_pqlim_pq_limiting_with_priority__signP * sqrt(_vbr_variable_load1_control_limit_pqref_priority_pqlim_pq_limiting_with_priority__Smax * _vbr_variable_load1_control_limit_pqref_priority_pqlim_pq_limiting_with_priority__Smax - _vbr_variable_load1_control_limit_pqref_priority_pqlim_pq_limiting_with_priority__Qref * _vbr_variable_load1_control_limit_pqref_priority_pqlim_pq_limiting_with_priority__Qref);
            }
        }
        else {
            _vbr_variable_load1_control_limit_pqref_priority_pqlim_pq_limiting_with_priority__P = (_vbr_variable_load1_control_limit_pqref_priority_pqlim_pq_limiting_with_priority__Pref / _vbr_variable_load1_control_limit_pqref_priority_pqlim_pq_limiting_with_priority__Sref) * _vbr_variable_load1_control_limit_pqref_priority_pqlim_pq_limiting_with_priority__Smax;
            _vbr_variable_load1_control_limit_pqref_priority_pqlim_pq_limiting_with_priority__Q = (_vbr_variable_load1_control_limit_pqref_priority_pqlim_pq_limiting_with_priority__Qref / _vbr_variable_load1_control_limit_pqref_priority_pqlim_pq_limiting_with_priority__Sref) * _vbr_variable_load1_control_limit_pqref_priority_pqlim_pq_limiting_with_priority__Smax;
        }
    }
    // Generated from the component: VBR Variable Load2.Control.Limit_PQref.priority_PQlim.PQ limiting with priority
    _vbr_variable_load2_control_limit_pqref_priority_pqlim_pq_limiting_with_priority__Pref = _vbr_variable_load2_control_gain8__out;
    _vbr_variable_load2_control_limit_pqref_priority_pqlim_pq_limiting_with_priority__Qref = _vbr_variable_load2_control_gain9__out;
    _vbr_variable_load2_control_limit_pqref_priority_pqlim_pq_limiting_with_priority__Smax = _vbr_variable_load2_control_constant3__out;
    _vbr_variable_load2_control_limit_pqref_priority_pqlim_pq_limiting_with_priority__Sref = sqrt(_vbr_variable_load2_control_limit_pqref_priority_pqlim_pq_limiting_with_priority__Pref * _vbr_variable_load2_control_limit_pqref_priority_pqlim_pq_limiting_with_priority__Pref + _vbr_variable_load2_control_limit_pqref_priority_pqlim_pq_limiting_with_priority__Qref * _vbr_variable_load2_control_limit_pqref_priority_pqlim_pq_limiting_with_priority__Qref);
    if (_vbr_variable_load2_control_limit_pqref_priority_pqlim_pq_limiting_with_priority__Qref >= 0)_vbr_variable_load2_control_limit_pqref_priority_pqlim_pq_limiting_with_priority__signQ = 1;
    else _vbr_variable_load2_control_limit_pqref_priority_pqlim_pq_limiting_with_priority__signQ = -1;
    if (_vbr_variable_load2_control_limit_pqref_priority_pqlim_pq_limiting_with_priority__Pref >= 0)_vbr_variable_load2_control_limit_pqref_priority_pqlim_pq_limiting_with_priority__signP = 1;
    else _vbr_variable_load2_control_limit_pqref_priority_pqlim_pq_limiting_with_priority__signP = -1;
    if (_vbr_variable_load2_control_limit_pqref_priority_pqlim_pq_limiting_with_priority__Sref <= _vbr_variable_load2_control_limit_pqref_priority_pqlim_pq_limiting_with_priority__Smax) {
        _vbr_variable_load2_control_limit_pqref_priority_pqlim_pq_limiting_with_priority__S = _vbr_variable_load2_control_limit_pqref_priority_pqlim_pq_limiting_with_priority__Sref;
        _vbr_variable_load2_control_limit_pqref_priority_pqlim_pq_limiting_with_priority__P = _vbr_variable_load2_control_limit_pqref_priority_pqlim_pq_limiting_with_priority__Pref;
        _vbr_variable_load2_control_limit_pqref_priority_pqlim_pq_limiting_with_priority__Q = _vbr_variable_load2_control_limit_pqref_priority_pqlim_pq_limiting_with_priority__Qref;
    }
    else {
        _vbr_variable_load2_control_limit_pqref_priority_pqlim_pq_limiting_with_priority__S = _vbr_variable_load2_control_limit_pqref_priority_pqlim_pq_limiting_with_priority__Smax;
        if (1.0 == 1) {
            if (fabs(_vbr_variable_load2_control_limit_pqref_priority_pqlim_pq_limiting_with_priority__Pref) > _vbr_variable_load2_control_limit_pqref_priority_pqlim_pq_limiting_with_priority__Smax) {
                _vbr_variable_load2_control_limit_pqref_priority_pqlim_pq_limiting_with_priority__P = _vbr_variable_load2_control_limit_pqref_priority_pqlim_pq_limiting_with_priority__signP * _vbr_variable_load2_control_limit_pqref_priority_pqlim_pq_limiting_with_priority__Smax;
                _vbr_variable_load2_control_limit_pqref_priority_pqlim_pq_limiting_with_priority__Q = 0;
            }
            else {
                _vbr_variable_load2_control_limit_pqref_priority_pqlim_pq_limiting_with_priority__P = _vbr_variable_load2_control_limit_pqref_priority_pqlim_pq_limiting_with_priority__Pref;
                _vbr_variable_load2_control_limit_pqref_priority_pqlim_pq_limiting_with_priority__Q = _vbr_variable_load2_control_limit_pqref_priority_pqlim_pq_limiting_with_priority__signQ * sqrt(_vbr_variable_load2_control_limit_pqref_priority_pqlim_pq_limiting_with_priority__Smax * _vbr_variable_load2_control_limit_pqref_priority_pqlim_pq_limiting_with_priority__Smax - _vbr_variable_load2_control_limit_pqref_priority_pqlim_pq_limiting_with_priority__Pref * _vbr_variable_load2_control_limit_pqref_priority_pqlim_pq_limiting_with_priority__Pref);
            }
        }
        else if (1.0 == 2) {
            if (fabs(_vbr_variable_load2_control_limit_pqref_priority_pqlim_pq_limiting_with_priority__Qref) > _vbr_variable_load2_control_limit_pqref_priority_pqlim_pq_limiting_with_priority__Smax) {
                _vbr_variable_load2_control_limit_pqref_priority_pqlim_pq_limiting_with_priority__Q = _vbr_variable_load2_control_limit_pqref_priority_pqlim_pq_limiting_with_priority__signQ * _vbr_variable_load2_control_limit_pqref_priority_pqlim_pq_limiting_with_priority__Smax;
                _vbr_variable_load2_control_limit_pqref_priority_pqlim_pq_limiting_with_priority__P = 0;
            }
            else {
                _vbr_variable_load2_control_limit_pqref_priority_pqlim_pq_limiting_with_priority__Q = _vbr_variable_load2_control_limit_pqref_priority_pqlim_pq_limiting_with_priority__Qref;
                _vbr_variable_load2_control_limit_pqref_priority_pqlim_pq_limiting_with_priority__P = _vbr_variable_load2_control_limit_pqref_priority_pqlim_pq_limiting_with_priority__signP * sqrt(_vbr_variable_load2_control_limit_pqref_priority_pqlim_pq_limiting_with_priority__Smax * _vbr_variable_load2_control_limit_pqref_priority_pqlim_pq_limiting_with_priority__Smax - _vbr_variable_load2_control_limit_pqref_priority_pqlim_pq_limiting_with_priority__Qref * _vbr_variable_load2_control_limit_pqref_priority_pqlim_pq_limiting_with_priority__Qref);
            }
        }
        else {
            _vbr_variable_load2_control_limit_pqref_priority_pqlim_pq_limiting_with_priority__P = (_vbr_variable_load2_control_limit_pqref_priority_pqlim_pq_limiting_with_priority__Pref / _vbr_variable_load2_control_limit_pqref_priority_pqlim_pq_limiting_with_priority__Sref) * _vbr_variable_load2_control_limit_pqref_priority_pqlim_pq_limiting_with_priority__Smax;
            _vbr_variable_load2_control_limit_pqref_priority_pqlim_pq_limiting_with_priority__Q = (_vbr_variable_load2_control_limit_pqref_priority_pqlim_pq_limiting_with_priority__Qref / _vbr_variable_load2_control_limit_pqref_priority_pqlim_pq_limiting_with_priority__Sref) * _vbr_variable_load2_control_limit_pqref_priority_pqlim_pq_limiting_with_priority__Smax;
        }
    }
    // Generated from the component: VBR Variable Load1.Control.Current_ref.Product1
    _vbr_variable_load1_control_current_ref_product1__out = (_vbr_variable_load1_control_current_ref_sum3__out) * 1.0 / (_vbr_variable_load1_control_current_ref_limit3__out);
    // Generated from the component: VBR Variable Load1.Control.Current_ref.Product2
    _vbr_variable_load1_control_current_ref_product2__out = (_vbr_variable_load1_control_current_ref_sum4__out) * 1.0 / (_vbr_variable_load1_control_current_ref_limit3__out);
    // Generated from the component: VBR Variable Load1.Control.Three phase PLL2.PID.Sum5
    _vbr_variable_load1_control_three_phase_pll2_pid_sum5__out = _vbr_variable_load1_control_three_phase_pll2_pid_kp__out + _vbr_variable_load1_control_three_phase_pll2_pid_gain1__out + _vbr_variable_load1_control_three_phase_pll2_pid_integrator1__out;
    // Generated from the component: VBR Variable Load2.Control.Current_ref.Product1
    _vbr_variable_load2_control_current_ref_product1__out = (_vbr_variable_load2_control_current_ref_sum3__out) * 1.0 / (_vbr_variable_load2_control_current_ref_limit3__out);
    // Generated from the component: VBR Variable Load2.Control.Current_ref.Product2
    _vbr_variable_load2_control_current_ref_product2__out = (_vbr_variable_load2_control_current_ref_sum4__out) * 1.0 / (_vbr_variable_load2_control_current_ref_limit3__out);
    // Generated from the component: VBR Variable Load2.Control.Three phase PLL2.PID.Sum5
    _vbr_variable_load2_control_three_phase_pll2_pid_sum5__out = _vbr_variable_load2_control_three_phase_pll2_pid_kp__out + _vbr_variable_load2_control_three_phase_pll2_pid_gain1__out + _vbr_variable_load2_control_three_phase_pll2_pid_integrator1__out;
    // Generated from the component: VBR Variable Load1.Control.Limit_PQref.P rate limit
    if (_vbr_variable_load1_control_limit_pqref_p_rate_limit__first_step) {
        _vbr_variable_load1_control_limit_pqref_p_rate_limit__out = _vbr_variable_load1_control_limit_pqref_priority_pqlim_pq_limiting_with_priority__P;
    } else {
        _vbr_variable_load1_control_limit_pqref_p_rate_limit__out = _vbr_variable_load1_control_limit_pqref_priority_pqlim_pq_limiting_with_priority__P;
        _vbr_variable_load1_control_limit_pqref_p_rate_limit__in_rate = _vbr_variable_load1_control_limit_pqref_priority_pqlim_pq_limiting_with_priority__P - _vbr_variable_load1_control_limit_pqref_p_rate_limit__prev_out;
        if (_vbr_variable_load1_control_limit_pqref_p_rate_limit__in_rate > 0.0001) {
            _vbr_variable_load1_control_limit_pqref_p_rate_limit__out = _vbr_variable_load1_control_limit_pqref_p_rate_limit__prev_out + (0.0001);
        }
        if (_vbr_variable_load1_control_limit_pqref_p_rate_limit__in_rate < -0.0001) {
            _vbr_variable_load1_control_limit_pqref_p_rate_limit__out = _vbr_variable_load1_control_limit_pqref_p_rate_limit__prev_out + (-0.0001);
        }
    }
    // Generated from the component: VBR Variable Load1.Control.Limit_PQref.Q rate limit
    if (_vbr_variable_load1_control_limit_pqref_q_rate_limit__first_step) {
        _vbr_variable_load1_control_limit_pqref_q_rate_limit__out = _vbr_variable_load1_control_limit_pqref_priority_pqlim_pq_limiting_with_priority__Q;
    } else {
        _vbr_variable_load1_control_limit_pqref_q_rate_limit__out = _vbr_variable_load1_control_limit_pqref_priority_pqlim_pq_limiting_with_priority__Q;
        _vbr_variable_load1_control_limit_pqref_q_rate_limit__in_rate = _vbr_variable_load1_control_limit_pqref_priority_pqlim_pq_limiting_with_priority__Q - _vbr_variable_load1_control_limit_pqref_q_rate_limit__prev_out;
        if (_vbr_variable_load1_control_limit_pqref_q_rate_limit__in_rate > 0.0001) {
            _vbr_variable_load1_control_limit_pqref_q_rate_limit__out = _vbr_variable_load1_control_limit_pqref_q_rate_limit__prev_out + (0.0001);
        }
        if (_vbr_variable_load1_control_limit_pqref_q_rate_limit__in_rate < -0.0001) {
            _vbr_variable_load1_control_limit_pqref_q_rate_limit__out = _vbr_variable_load1_control_limit_pqref_q_rate_limit__prev_out + (-0.0001);
        }
    }
    // Generated from the component: VBR Variable Load1.Control.Limit_PQref.S rate limit
    if (_vbr_variable_load1_control_limit_pqref_s_rate_limit__first_step) {
        _vbr_variable_load1_control_limit_pqref_s_rate_limit__out = _vbr_variable_load1_control_limit_pqref_priority_pqlim_pq_limiting_with_priority__S;
    } else {
        _vbr_variable_load1_control_limit_pqref_s_rate_limit__out = _vbr_variable_load1_control_limit_pqref_priority_pqlim_pq_limiting_with_priority__S;
        _vbr_variable_load1_control_limit_pqref_s_rate_limit__in_rate = _vbr_variable_load1_control_limit_pqref_priority_pqlim_pq_limiting_with_priority__S - _vbr_variable_load1_control_limit_pqref_s_rate_limit__prev_out;
        if (_vbr_variable_load1_control_limit_pqref_s_rate_limit__in_rate > 0.0001) {
            _vbr_variable_load1_control_limit_pqref_s_rate_limit__out = _vbr_variable_load1_control_limit_pqref_s_rate_limit__prev_out + (0.0001);
        }
        if (_vbr_variable_load1_control_limit_pqref_s_rate_limit__in_rate < -0.0001) {
            _vbr_variable_load1_control_limit_pqref_s_rate_limit__out = _vbr_variable_load1_control_limit_pqref_s_rate_limit__prev_out + (-0.0001);
        }
    }
    // Generated from the component: VBR Variable Load2.Control.Limit_PQref.P rate limit
    if (_vbr_variable_load2_control_limit_pqref_p_rate_limit__first_step) {
        _vbr_variable_load2_control_limit_pqref_p_rate_limit__out = _vbr_variable_load2_control_limit_pqref_priority_pqlim_pq_limiting_with_priority__P;
    } else {
        _vbr_variable_load2_control_limit_pqref_p_rate_limit__out = _vbr_variable_load2_control_limit_pqref_priority_pqlim_pq_limiting_with_priority__P;
        _vbr_variable_load2_control_limit_pqref_p_rate_limit__in_rate = _vbr_variable_load2_control_limit_pqref_priority_pqlim_pq_limiting_with_priority__P - _vbr_variable_load2_control_limit_pqref_p_rate_limit__prev_out;
        if (_vbr_variable_load2_control_limit_pqref_p_rate_limit__in_rate > 0.0001) {
            _vbr_variable_load2_control_limit_pqref_p_rate_limit__out = _vbr_variable_load2_control_limit_pqref_p_rate_limit__prev_out + (0.0001);
        }
        if (_vbr_variable_load2_control_limit_pqref_p_rate_limit__in_rate < -0.0001) {
            _vbr_variable_load2_control_limit_pqref_p_rate_limit__out = _vbr_variable_load2_control_limit_pqref_p_rate_limit__prev_out + (-0.0001);
        }
    }
    // Generated from the component: VBR Variable Load2.Control.Limit_PQref.Q rate limit
    if (_vbr_variable_load2_control_limit_pqref_q_rate_limit__first_step) {
        _vbr_variable_load2_control_limit_pqref_q_rate_limit__out = _vbr_variable_load2_control_limit_pqref_priority_pqlim_pq_limiting_with_priority__Q;
    } else {
        _vbr_variable_load2_control_limit_pqref_q_rate_limit__out = _vbr_variable_load2_control_limit_pqref_priority_pqlim_pq_limiting_with_priority__Q;
        _vbr_variable_load2_control_limit_pqref_q_rate_limit__in_rate = _vbr_variable_load2_control_limit_pqref_priority_pqlim_pq_limiting_with_priority__Q - _vbr_variable_load2_control_limit_pqref_q_rate_limit__prev_out;
        if (_vbr_variable_load2_control_limit_pqref_q_rate_limit__in_rate > 0.0001) {
            _vbr_variable_load2_control_limit_pqref_q_rate_limit__out = _vbr_variable_load2_control_limit_pqref_q_rate_limit__prev_out + (0.0001);
        }
        if (_vbr_variable_load2_control_limit_pqref_q_rate_limit__in_rate < -0.0001) {
            _vbr_variable_load2_control_limit_pqref_q_rate_limit__out = _vbr_variable_load2_control_limit_pqref_q_rate_limit__prev_out + (-0.0001);
        }
    }
    // Generated from the component: VBR Variable Load2.Control.Limit_PQref.S rate limit
    if (_vbr_variable_load2_control_limit_pqref_s_rate_limit__first_step) {
        _vbr_variable_load2_control_limit_pqref_s_rate_limit__out = _vbr_variable_load2_control_limit_pqref_priority_pqlim_pq_limiting_with_priority__S;
    } else {
        _vbr_variable_load2_control_limit_pqref_s_rate_limit__out = _vbr_variable_load2_control_limit_pqref_priority_pqlim_pq_limiting_with_priority__S;
        _vbr_variable_load2_control_limit_pqref_s_rate_limit__in_rate = _vbr_variable_load2_control_limit_pqref_priority_pqlim_pq_limiting_with_priority__S - _vbr_variable_load2_control_limit_pqref_s_rate_limit__prev_out;
        if (_vbr_variable_load2_control_limit_pqref_s_rate_limit__in_rate > 0.0001) {
            _vbr_variable_load2_control_limit_pqref_s_rate_limit__out = _vbr_variable_load2_control_limit_pqref_s_rate_limit__prev_out + (0.0001);
        }
        if (_vbr_variable_load2_control_limit_pqref_s_rate_limit__in_rate < -0.0001) {
            _vbr_variable_load2_control_limit_pqref_s_rate_limit__out = _vbr_variable_load2_control_limit_pqref_s_rate_limit__prev_out + (-0.0001);
        }
    }
    // Generated from the component: VBR Variable Load1.Control.current_control.Sum4
    _vbr_variable_load1_control_current_control_sum4__out = _vbr_variable_load1_control_current_ref_product1__out - _vbr_variable_load1_control_gain5__out;
    // Generated from the component: VBR Variable Load1.Control.current_control.Sum2
    _vbr_variable_load1_control_current_control_sum2__out = _vbr_variable_load1_control_current_ref_product2__out - _vbr_variable_load1_control_gain4__out;
    // Generated from the component: VBR Variable Load1.Control.Three phase PLL2.PID.Limit1
    if (_vbr_variable_load1_control_three_phase_pll2_pid_sum5__out > 10000.0) {
        _vbr_variable_load1_control_three_phase_pll2_pid_limit1__out = 10000.0;
    } else if (_vbr_variable_load1_control_three_phase_pll2_pid_sum5__out < -10000.0) {
        _vbr_variable_load1_control_three_phase_pll2_pid_limit1__out = -10000.0;
    } else {
        _vbr_variable_load1_control_three_phase_pll2_pid_limit1__out = _vbr_variable_load1_control_three_phase_pll2_pid_sum5__out;
    }
    // Generated from the component: VBR Variable Load2.Control.current_control.Sum4
    _vbr_variable_load2_control_current_control_sum4__out = _vbr_variable_load2_control_current_ref_product1__out - _vbr_variable_load2_control_gain5__out;
    // Generated from the component: VBR Variable Load2.Control.current_control.Sum2
    _vbr_variable_load2_control_current_control_sum2__out = _vbr_variable_load2_control_current_ref_product2__out - _vbr_variable_load2_control_gain4__out;
    // Generated from the component: VBR Variable Load2.Control.Three phase PLL2.PID.Limit1
    if (_vbr_variable_load2_control_three_phase_pll2_pid_sum5__out > 10000.0) {
        _vbr_variable_load2_control_three_phase_pll2_pid_limit1__out = 10000.0;
    } else if (_vbr_variable_load2_control_three_phase_pll2_pid_sum5__out < -10000.0) {
        _vbr_variable_load2_control_three_phase_pll2_pid_limit1__out = -10000.0;
    } else {
        _vbr_variable_load2_control_three_phase_pll2_pid_limit1__out = _vbr_variable_load2_control_three_phase_pll2_pid_sum5__out;
    }
    // Generated from the component: VBR Variable Load1.Control.Limit_PQref.limS_overPQ.S limiting over PQ
    _vbr_variable_load1_control_limit_pqref_lims_overpq_s_limiting_over_pq__Pref = _vbr_variable_load1_control_limit_pqref_p_rate_limit__out;
    _vbr_variable_load1_control_limit_pqref_lims_overpq_s_limiting_over_pq__Qref = _vbr_variable_load1_control_limit_pqref_q_rate_limit__out;
    _vbr_variable_load1_control_limit_pqref_lims_overpq_s_limiting_over_pq__Sref = _vbr_variable_load1_control_limit_pqref_s_rate_limit__out;
    _vbr_variable_load1_control_limit_pqref_lims_overpq_s_limiting_over_pq__S_PQref = sqrt(_vbr_variable_load1_control_limit_pqref_lims_overpq_s_limiting_over_pq__Pref * _vbr_variable_load1_control_limit_pqref_lims_overpq_s_limiting_over_pq__Pref + _vbr_variable_load1_control_limit_pqref_lims_overpq_s_limiting_over_pq__Qref * _vbr_variable_load1_control_limit_pqref_lims_overpq_s_limiting_over_pq__Qref);
    if (_vbr_variable_load1_control_limit_pqref_lims_overpq_s_limiting_over_pq__S_PQref > _vbr_variable_load1_control_limit_pqref_lims_overpq_s_limiting_over_pq__Sref) {
        _vbr_variable_load1_control_limit_pqref_lims_overpq_s_limiting_over_pq__P = (_vbr_variable_load1_control_limit_pqref_lims_overpq_s_limiting_over_pq__Pref / _vbr_variable_load1_control_limit_pqref_lims_overpq_s_limiting_over_pq__S_PQref) * _vbr_variable_load1_control_limit_pqref_lims_overpq_s_limiting_over_pq__Sref;
        _vbr_variable_load1_control_limit_pqref_lims_overpq_s_limiting_over_pq__Q = (_vbr_variable_load1_control_limit_pqref_lims_overpq_s_limiting_over_pq__Qref / _vbr_variable_load1_control_limit_pqref_lims_overpq_s_limiting_over_pq__S_PQref) * _vbr_variable_load1_control_limit_pqref_lims_overpq_s_limiting_over_pq__Sref;
    }
    else {
        _vbr_variable_load1_control_limit_pqref_lims_overpq_s_limiting_over_pq__P = _vbr_variable_load1_control_limit_pqref_lims_overpq_s_limiting_over_pq__Pref;
        _vbr_variable_load1_control_limit_pqref_lims_overpq_s_limiting_over_pq__Q = _vbr_variable_load1_control_limit_pqref_lims_overpq_s_limiting_over_pq__Qref;
    }
    // Generated from the component: VBR Variable Load2.Control.Limit_PQref.limS_overPQ.S limiting over PQ
    _vbr_variable_load2_control_limit_pqref_lims_overpq_s_limiting_over_pq__Pref = _vbr_variable_load2_control_limit_pqref_p_rate_limit__out;
    _vbr_variable_load2_control_limit_pqref_lims_overpq_s_limiting_over_pq__Qref = _vbr_variable_load2_control_limit_pqref_q_rate_limit__out;
    _vbr_variable_load2_control_limit_pqref_lims_overpq_s_limiting_over_pq__Sref = _vbr_variable_load2_control_limit_pqref_s_rate_limit__out;
    _vbr_variable_load2_control_limit_pqref_lims_overpq_s_limiting_over_pq__S_PQref = sqrt(_vbr_variable_load2_control_limit_pqref_lims_overpq_s_limiting_over_pq__Pref * _vbr_variable_load2_control_limit_pqref_lims_overpq_s_limiting_over_pq__Pref + _vbr_variable_load2_control_limit_pqref_lims_overpq_s_limiting_over_pq__Qref * _vbr_variable_load2_control_limit_pqref_lims_overpq_s_limiting_over_pq__Qref);
    if (_vbr_variable_load2_control_limit_pqref_lims_overpq_s_limiting_over_pq__S_PQref > _vbr_variable_load2_control_limit_pqref_lims_overpq_s_limiting_over_pq__Sref) {
        _vbr_variable_load2_control_limit_pqref_lims_overpq_s_limiting_over_pq__P = (_vbr_variable_load2_control_limit_pqref_lims_overpq_s_limiting_over_pq__Pref / _vbr_variable_load2_control_limit_pqref_lims_overpq_s_limiting_over_pq__S_PQref) * _vbr_variable_load2_control_limit_pqref_lims_overpq_s_limiting_over_pq__Sref;
        _vbr_variable_load2_control_limit_pqref_lims_overpq_s_limiting_over_pq__Q = (_vbr_variable_load2_control_limit_pqref_lims_overpq_s_limiting_over_pq__Qref / _vbr_variable_load2_control_limit_pqref_lims_overpq_s_limiting_over_pq__S_PQref) * _vbr_variable_load2_control_limit_pqref_lims_overpq_s_limiting_over_pq__Sref;
    }
    else {
        _vbr_variable_load2_control_limit_pqref_lims_overpq_s_limiting_over_pq__P = _vbr_variable_load2_control_limit_pqref_lims_overpq_s_limiting_over_pq__Pref;
        _vbr_variable_load2_control_limit_pqref_lims_overpq_s_limiting_over_pq__Q = _vbr_variable_load2_control_limit_pqref_lims_overpq_s_limiting_over_pq__Qref;
    }
    // Generated from the component: VBR Variable Load1.Control.current_control.PI_q.Ki
    _vbr_variable_load1_control_current_control_pi_q_ki__out = 30.0 * _vbr_variable_load1_control_current_control_sum4__out;
    // Generated from the component: VBR Variable Load1.Control.current_control.PI_q.Kp
    _vbr_variable_load1_control_current_control_pi_q_kp__out = 0.003 * _vbr_variable_load1_control_current_control_sum4__out;
    // Generated from the component: VBR Variable Load1.Control.current_control.PI_d.Ki
    _vbr_variable_load1_control_current_control_pi_d_ki__out = 30.0 * _vbr_variable_load1_control_current_control_sum2__out;
    // Generated from the component: VBR Variable Load1.Control.current_control.PI_d.Kp
    _vbr_variable_load1_control_current_control_pi_d_kp__out = 0.003 * _vbr_variable_load1_control_current_control_sum2__out;
    // Generated from the component: VBR Variable Load1.Control.Three phase PLL2.PID.Sum6
    _vbr_variable_load1_control_three_phase_pll2_pid_sum6__out =  - _vbr_variable_load1_control_three_phase_pll2_pid_sum5__out + _vbr_variable_load1_control_three_phase_pll2_pid_limit1__out;
    // Generated from the component: VBR Variable Load1.Control.Three phase PLL2.Rate Limiter1
    if (_vbr_variable_load1_control_three_phase_pll2_rate_limiter1__first_step) {
        _vbr_variable_load1_control_three_phase_pll2_rate_limiter1__out = _vbr_variable_load1_control_three_phase_pll2_pid_limit1__out;
    } else {
        _vbr_variable_load1_control_three_phase_pll2_rate_limiter1__out = _vbr_variable_load1_control_three_phase_pll2_pid_limit1__out;
        _vbr_variable_load1_control_three_phase_pll2_rate_limiter1__in_rate = _vbr_variable_load1_control_three_phase_pll2_pid_limit1__out - _vbr_variable_load1_control_three_phase_pll2_rate_limiter1__prev_out;
        if (_vbr_variable_load1_control_three_phase_pll2_rate_limiter1__in_rate > 0.007539822368615503) {
            _vbr_variable_load1_control_three_phase_pll2_rate_limiter1__out = _vbr_variable_load1_control_three_phase_pll2_rate_limiter1__prev_out + (0.007539822368615503);
        }
        if (_vbr_variable_load1_control_three_phase_pll2_rate_limiter1__in_rate < -0.007539822368615503) {
            _vbr_variable_load1_control_three_phase_pll2_rate_limiter1__out = _vbr_variable_load1_control_three_phase_pll2_rate_limiter1__prev_out + (-0.007539822368615503);
        }
    }
    // Generated from the component: VBR Variable Load1.Control.Three phase PLL2.integrator
    _vbr_variable_load1_control_three_phase_pll2_integrator__in = _vbr_variable_load1_control_three_phase_pll2_pid_limit1__out;
    _vbr_variable_load1_control_three_phase_pll2_integrator__out += 0.0001 * _vbr_variable_load1_control_three_phase_pll2_integrator__in;
    if (_vbr_variable_load1_control_three_phase_pll2_integrator__in >= 0.0) {
        if (_vbr_variable_load1_control_three_phase_pll2_integrator__out >= 6.283185307179586) {
            _vbr_variable_load1_control_three_phase_pll2_integrator__out -= 6.283185307179586;
        }
    }
    else {
        if (_vbr_variable_load1_control_three_phase_pll2_integrator__out <= -6.283185307179586) {
            _vbr_variable_load1_control_three_phase_pll2_integrator__out += 6.283185307179586;
        }
    }
    // Generated from the component: VBR Variable Load2.Control.current_control.PI_q.Ki
    _vbr_variable_load2_control_current_control_pi_q_ki__out = 30.0 * _vbr_variable_load2_control_current_control_sum4__out;
    // Generated from the component: VBR Variable Load2.Control.current_control.PI_q.Kp
    _vbr_variable_load2_control_current_control_pi_q_kp__out = 0.003 * _vbr_variable_load2_control_current_control_sum4__out;
    // Generated from the component: VBR Variable Load2.Control.current_control.PI_d.Ki
    _vbr_variable_load2_control_current_control_pi_d_ki__out = 30.0 * _vbr_variable_load2_control_current_control_sum2__out;
    // Generated from the component: VBR Variable Load2.Control.current_control.PI_d.Kp
    _vbr_variable_load2_control_current_control_pi_d_kp__out = 0.003 * _vbr_variable_load2_control_current_control_sum2__out;
    // Generated from the component: VBR Variable Load2.Control.Three phase PLL2.PID.Sum6
    _vbr_variable_load2_control_three_phase_pll2_pid_sum6__out =  - _vbr_variable_load2_control_three_phase_pll2_pid_sum5__out + _vbr_variable_load2_control_three_phase_pll2_pid_limit1__out;
    // Generated from the component: VBR Variable Load2.Control.Three phase PLL2.Rate Limiter1
    if (_vbr_variable_load2_control_three_phase_pll2_rate_limiter1__first_step) {
        _vbr_variable_load2_control_three_phase_pll2_rate_limiter1__out = _vbr_variable_load2_control_three_phase_pll2_pid_limit1__out;
    } else {
        _vbr_variable_load2_control_three_phase_pll2_rate_limiter1__out = _vbr_variable_load2_control_three_phase_pll2_pid_limit1__out;
        _vbr_variable_load2_control_three_phase_pll2_rate_limiter1__in_rate = _vbr_variable_load2_control_three_phase_pll2_pid_limit1__out - _vbr_variable_load2_control_three_phase_pll2_rate_limiter1__prev_out;
        if (_vbr_variable_load2_control_three_phase_pll2_rate_limiter1__in_rate > 0.007539822368615503) {
            _vbr_variable_load2_control_three_phase_pll2_rate_limiter1__out = _vbr_variable_load2_control_three_phase_pll2_rate_limiter1__prev_out + (0.007539822368615503);
        }
        if (_vbr_variable_load2_control_three_phase_pll2_rate_limiter1__in_rate < -0.007539822368615503) {
            _vbr_variable_load2_control_three_phase_pll2_rate_limiter1__out = _vbr_variable_load2_control_three_phase_pll2_rate_limiter1__prev_out + (-0.007539822368615503);
        }
    }
    // Generated from the component: VBR Variable Load2.Control.Three phase PLL2.integrator
    _vbr_variable_load2_control_three_phase_pll2_integrator__in = _vbr_variable_load2_control_three_phase_pll2_pid_limit1__out;
    _vbr_variable_load2_control_three_phase_pll2_integrator__out += 0.0001 * _vbr_variable_load2_control_three_phase_pll2_integrator__in;
    if (_vbr_variable_load2_control_three_phase_pll2_integrator__in >= 0.0) {
        if (_vbr_variable_load2_control_three_phase_pll2_integrator__out >= 6.283185307179586) {
            _vbr_variable_load2_control_three_phase_pll2_integrator__out -= 6.283185307179586;
        }
    }
    else {
        if (_vbr_variable_load2_control_three_phase_pll2_integrator__out <= -6.283185307179586) {
            _vbr_variable_load2_control_three_phase_pll2_integrator__out += 6.283185307179586;
        }
    }
    // Generated from the component: VBR Variable Load1.Control.current_control.PI_q.Sum5
    _vbr_variable_load1_control_current_control_pi_q_sum5__out = _vbr_variable_load1_control_current_control_pi_q_kp__out + _vbr_variable_load1_control_current_control_pi_q_integrator1__out;
    // Generated from the component: VBR Variable Load1.Control.current_control.PI_d.Sum5
    _vbr_variable_load1_control_current_control_pi_d_sum5__out = _vbr_variable_load1_control_current_control_pi_d_kp__out + _vbr_variable_load1_control_current_control_pi_d_integrator1__out;
    // Generated from the component: VBR Variable Load1.Control.Three phase PLL2.PID.Kb
    _vbr_variable_load1_control_three_phase_pll2_pid_kb__out = 1.0 * _vbr_variable_load1_control_three_phase_pll2_pid_sum6__out;
    // Generated from the component: VBR Variable Load1.Control.Three phase PLL2.LPF.LPF
    _vbr_variable_load1_control_three_phase_pll2_lpf_lpf__a_sum = 0.0f;
    _vbr_variable_load1_control_three_phase_pll2_lpf_lpf__b_sum = 0.0f;
    _vbr_variable_load1_control_three_phase_pll2_lpf_lpf__delay_line_in = 0.0f;
    for (_vbr_variable_load1_control_three_phase_pll2_lpf_lpf__i = 0; _vbr_variable_load1_control_three_phase_pll2_lpf_lpf__i < 2; _vbr_variable_load1_control_three_phase_pll2_lpf_lpf__i++) {
        _vbr_variable_load1_control_three_phase_pll2_lpf_lpf__b_sum += _vbr_variable_load1_control_three_phase_pll2_lpf_lpf__b_coeff[_vbr_variable_load1_control_three_phase_pll2_lpf_lpf__i] * _vbr_variable_load1_control_three_phase_pll2_lpf_lpf__states[_vbr_variable_load1_control_three_phase_pll2_lpf_lpf__i + 0];
    }
    for (_vbr_variable_load1_control_three_phase_pll2_lpf_lpf__i = 1; _vbr_variable_load1_control_three_phase_pll2_lpf_lpf__i > 0; _vbr_variable_load1_control_three_phase_pll2_lpf_lpf__i--) {
        _vbr_variable_load1_control_three_phase_pll2_lpf_lpf__a_sum += _vbr_variable_load1_control_three_phase_pll2_lpf_lpf__a_coeff[_vbr_variable_load1_control_three_phase_pll2_lpf_lpf__i + 1] * _vbr_variable_load1_control_three_phase_pll2_lpf_lpf__states[_vbr_variable_load1_control_three_phase_pll2_lpf_lpf__i];
    }
    _vbr_variable_load1_control_three_phase_pll2_lpf_lpf__a_sum += _vbr_variable_load1_control_three_phase_pll2_lpf_lpf__states[0] * _vbr_variable_load1_control_three_phase_pll2_lpf_lpf__a_coeff[1];
    _vbr_variable_load1_control_three_phase_pll2_lpf_lpf__delay_line_in = _vbr_variable_load1_control_three_phase_pll2_rate_limiter1__out - _vbr_variable_load1_control_three_phase_pll2_lpf_lpf__a_sum;
    _vbr_variable_load1_control_three_phase_pll2_lpf_lpf__out = _vbr_variable_load1_control_three_phase_pll2_lpf_lpf__b_sum;
    // Generated from the component: VBR Variable Load2.Control.current_control.PI_q.Sum5
    _vbr_variable_load2_control_current_control_pi_q_sum5__out = _vbr_variable_load2_control_current_control_pi_q_kp__out + _vbr_variable_load2_control_current_control_pi_q_integrator1__out;
    // Generated from the component: VBR Variable Load2.Control.current_control.PI_d.Sum5
    _vbr_variable_load2_control_current_control_pi_d_sum5__out = _vbr_variable_load2_control_current_control_pi_d_kp__out + _vbr_variable_load2_control_current_control_pi_d_integrator1__out;
    // Generated from the component: VBR Variable Load2.Control.Three phase PLL2.PID.Kb
    _vbr_variable_load2_control_three_phase_pll2_pid_kb__out = 1.0 * _vbr_variable_load2_control_three_phase_pll2_pid_sum6__out;
    // Generated from the component: VBR Variable Load2.Control.Three phase PLL2.LPF.LPF
    _vbr_variable_load2_control_three_phase_pll2_lpf_lpf__a_sum = 0.0f;
    _vbr_variable_load2_control_three_phase_pll2_lpf_lpf__b_sum = 0.0f;
    _vbr_variable_load2_control_three_phase_pll2_lpf_lpf__delay_line_in = 0.0f;
    for (_vbr_variable_load2_control_three_phase_pll2_lpf_lpf__i = 0; _vbr_variable_load2_control_three_phase_pll2_lpf_lpf__i < 2; _vbr_variable_load2_control_three_phase_pll2_lpf_lpf__i++) {
        _vbr_variable_load2_control_three_phase_pll2_lpf_lpf__b_sum += _vbr_variable_load2_control_three_phase_pll2_lpf_lpf__b_coeff[_vbr_variable_load2_control_three_phase_pll2_lpf_lpf__i] * _vbr_variable_load2_control_three_phase_pll2_lpf_lpf__states[_vbr_variable_load2_control_three_phase_pll2_lpf_lpf__i + 0];
    }
    for (_vbr_variable_load2_control_three_phase_pll2_lpf_lpf__i = 1; _vbr_variable_load2_control_three_phase_pll2_lpf_lpf__i > 0; _vbr_variable_load2_control_three_phase_pll2_lpf_lpf__i--) {
        _vbr_variable_load2_control_three_phase_pll2_lpf_lpf__a_sum += _vbr_variable_load2_control_three_phase_pll2_lpf_lpf__a_coeff[_vbr_variable_load2_control_three_phase_pll2_lpf_lpf__i + 1] * _vbr_variable_load2_control_three_phase_pll2_lpf_lpf__states[_vbr_variable_load2_control_three_phase_pll2_lpf_lpf__i];
    }
    _vbr_variable_load2_control_three_phase_pll2_lpf_lpf__a_sum += _vbr_variable_load2_control_three_phase_pll2_lpf_lpf__states[0] * _vbr_variable_load2_control_three_phase_pll2_lpf_lpf__a_coeff[1];
    _vbr_variable_load2_control_three_phase_pll2_lpf_lpf__delay_line_in = _vbr_variable_load2_control_three_phase_pll2_rate_limiter1__out - _vbr_variable_load2_control_three_phase_pll2_lpf_lpf__a_sum;
    _vbr_variable_load2_control_three_phase_pll2_lpf_lpf__out = _vbr_variable_load2_control_three_phase_pll2_lpf_lpf__b_sum;
    // Generated from the component: VBR Variable Load1.Control.current_control.PI_q.Limit1
    if (_vbr_variable_load1_control_current_control_pi_q_sum5__out > 100000.0) {
        _vbr_variable_load1_control_current_control_pi_q_limit1__out = 100000.0;
    } else if (_vbr_variable_load1_control_current_control_pi_q_sum5__out < -100000.0) {
        _vbr_variable_load1_control_current_control_pi_q_limit1__out = -100000.0;
    } else {
        _vbr_variable_load1_control_current_control_pi_q_limit1__out = _vbr_variable_load1_control_current_control_pi_q_sum5__out;
    }
    // Generated from the component: VBR Variable Load1.Control.current_control.PI_d.Limit1
    if (_vbr_variable_load1_control_current_control_pi_d_sum5__out > 100000.0) {
        _vbr_variable_load1_control_current_control_pi_d_limit1__out = 100000.0;
    } else if (_vbr_variable_load1_control_current_control_pi_d_sum5__out < -100000.0) {
        _vbr_variable_load1_control_current_control_pi_d_limit1__out = -100000.0;
    } else {
        _vbr_variable_load1_control_current_control_pi_d_limit1__out = _vbr_variable_load1_control_current_control_pi_d_sum5__out;
    }
    // Generated from the component: VBR Variable Load1.Control.Three phase PLL2.PID.Sum7
    _vbr_variable_load1_control_three_phase_pll2_pid_sum7__out = _vbr_variable_load1_control_three_phase_pll2_pid_ki__out + _vbr_variable_load1_control_three_phase_pll2_pid_kb__out;
    // Generated from the component: VBR Variable Load2.Control.current_control.PI_q.Limit1
    if (_vbr_variable_load2_control_current_control_pi_q_sum5__out > 100000.0) {
        _vbr_variable_load2_control_current_control_pi_q_limit1__out = 100000.0;
    } else if (_vbr_variable_load2_control_current_control_pi_q_sum5__out < -100000.0) {
        _vbr_variable_load2_control_current_control_pi_q_limit1__out = -100000.0;
    } else {
        _vbr_variable_load2_control_current_control_pi_q_limit1__out = _vbr_variable_load2_control_current_control_pi_q_sum5__out;
    }
    // Generated from the component: VBR Variable Load2.Control.current_control.PI_d.Limit1
    if (_vbr_variable_load2_control_current_control_pi_d_sum5__out > 100000.0) {
        _vbr_variable_load2_control_current_control_pi_d_limit1__out = 100000.0;
    } else if (_vbr_variable_load2_control_current_control_pi_d_sum5__out < -100000.0) {
        _vbr_variable_load2_control_current_control_pi_d_limit1__out = -100000.0;
    } else {
        _vbr_variable_load2_control_current_control_pi_d_limit1__out = _vbr_variable_load2_control_current_control_pi_d_sum5__out;
    }
    // Generated from the component: VBR Variable Load2.Control.Three phase PLL2.PID.Sum7
    _vbr_variable_load2_control_three_phase_pll2_pid_sum7__out = _vbr_variable_load2_control_three_phase_pll2_pid_ki__out + _vbr_variable_load2_control_three_phase_pll2_pid_kb__out;
    // Generated from the component: VBR Variable Load1.Control.current_control.Gain10
    _vbr_variable_load1_control_current_control_gain10__out = 0.8241353503504764 * _vbr_variable_load1_control_current_control_pi_q_limit1__out;
    // Generated from the component: VBR Variable Load1.Control.current_control.PI_q.Sum6
    _vbr_variable_load1_control_current_control_pi_q_sum6__out =  - _vbr_variable_load1_control_current_control_pi_q_sum5__out + _vbr_variable_load1_control_current_control_pi_q_limit1__out;
    // Generated from the component: VBR Variable Load1.Control.current_control.Gain9
    _vbr_variable_load1_control_current_control_gain9__out = 0.8241353503504764 * _vbr_variable_load1_control_current_control_pi_d_limit1__out;
    // Generated from the component: VBR Variable Load1.Control.current_control.PI_d.Sum6
    _vbr_variable_load1_control_current_control_pi_d_sum6__out =  - _vbr_variable_load1_control_current_control_pi_d_sum5__out + _vbr_variable_load1_control_current_control_pi_d_limit1__out;
    // Generated from the component: VBR Variable Load2.Control.current_control.Gain10
    _vbr_variable_load2_control_current_control_gain10__out = 0.8241353503504764 * _vbr_variable_load2_control_current_control_pi_q_limit1__out;
    // Generated from the component: VBR Variable Load2.Control.current_control.PI_q.Sum6
    _vbr_variable_load2_control_current_control_pi_q_sum6__out =  - _vbr_variable_load2_control_current_control_pi_q_sum5__out + _vbr_variable_load2_control_current_control_pi_q_limit1__out;
    // Generated from the component: VBR Variable Load2.Control.current_control.Gain9
    _vbr_variable_load2_control_current_control_gain9__out = 0.8241353503504764 * _vbr_variable_load2_control_current_control_pi_d_limit1__out;
    // Generated from the component: VBR Variable Load2.Control.current_control.PI_d.Sum6
    _vbr_variable_load2_control_current_control_pi_d_sum6__out =  - _vbr_variable_load2_control_current_control_pi_d_sum5__out + _vbr_variable_load2_control_current_control_pi_d_limit1__out;
    // Generated from the component: VBR Variable Load1.Control.current_control.Sum6
    _vbr_variable_load1_control_current_control_sum6__out = _vbr_variable_load1_control_gain2__out - _vbr_variable_load1_control_current_control_gain10__out - _vbr_variable_load1_control_current_control_gain11__out;
    // Generated from the component: VBR Variable Load1.Control.current_control.PI_q.Kb
    _vbr_variable_load1_control_current_control_pi_q_kb__out = 1.0 * _vbr_variable_load1_control_current_control_pi_q_sum6__out;
    // Generated from the component: VBR Variable Load1.Control.current_control.Sum1
    _vbr_variable_load1_control_current_control_sum1__out = _vbr_variable_load1_control_gain1__out - _vbr_variable_load1_control_current_control_gain9__out + _vbr_variable_load1_control_current_control_gain8__out;
    // Generated from the component: VBR Variable Load1.Control.current_control.PI_d.Kb
    _vbr_variable_load1_control_current_control_pi_d_kb__out = 1.0 * _vbr_variable_load1_control_current_control_pi_d_sum6__out;
    // Generated from the component: VBR Variable Load2.Control.current_control.Sum6
    _vbr_variable_load2_control_current_control_sum6__out = _vbr_variable_load2_control_gain2__out - _vbr_variable_load2_control_current_control_gain10__out - _vbr_variable_load2_control_current_control_gain11__out;
    // Generated from the component: VBR Variable Load2.Control.current_control.PI_q.Kb
    _vbr_variable_load2_control_current_control_pi_q_kb__out = 1.0 * _vbr_variable_load2_control_current_control_pi_q_sum6__out;
    // Generated from the component: VBR Variable Load2.Control.current_control.Sum1
    _vbr_variable_load2_control_current_control_sum1__out = _vbr_variable_load2_control_gain1__out - _vbr_variable_load2_control_current_control_gain9__out + _vbr_variable_load2_control_current_control_gain8__out;
    // Generated from the component: VBR Variable Load2.Control.current_control.PI_d.Kb
    _vbr_variable_load2_control_current_control_pi_d_kb__out = 1.0 * _vbr_variable_load2_control_current_control_pi_d_sum6__out;
    // Generated from the component: VBR Variable Load1.Control.current_control.Limit2
    if (_vbr_variable_load1_control_current_control_sum6__out > 3.0) {
        _vbr_variable_load1_control_current_control_limit2__out = 3.0;
    } else if (_vbr_variable_load1_control_current_control_sum6__out < -3.0) {
        _vbr_variable_load1_control_current_control_limit2__out = -3.0;
    } else {
        _vbr_variable_load1_control_current_control_limit2__out = _vbr_variable_load1_control_current_control_sum6__out;
    }
    // Generated from the component: VBR Variable Load1.Control.current_control.PI_q.Sum7
    _vbr_variable_load1_control_current_control_pi_q_sum7__out = _vbr_variable_load1_control_current_control_pi_q_ki__out + _vbr_variable_load1_control_current_control_pi_q_kb__out;
    // Generated from the component: VBR Variable Load1.Control.current_control.Limit1
    if (_vbr_variable_load1_control_current_control_sum1__out > 3.0) {
        _vbr_variable_load1_control_current_control_limit1__out = 3.0;
    } else if (_vbr_variable_load1_control_current_control_sum1__out < -3.0) {
        _vbr_variable_load1_control_current_control_limit1__out = -3.0;
    } else {
        _vbr_variable_load1_control_current_control_limit1__out = _vbr_variable_load1_control_current_control_sum1__out;
    }
    // Generated from the component: VBR Variable Load1.Control.current_control.PI_d.Sum7
    _vbr_variable_load1_control_current_control_pi_d_sum7__out = _vbr_variable_load1_control_current_control_pi_d_ki__out + _vbr_variable_load1_control_current_control_pi_d_kb__out;
    // Generated from the component: VBR Variable Load2.Control.current_control.Limit2
    if (_vbr_variable_load2_control_current_control_sum6__out > 3.0) {
        _vbr_variable_load2_control_current_control_limit2__out = 3.0;
    } else if (_vbr_variable_load2_control_current_control_sum6__out < -3.0) {
        _vbr_variable_load2_control_current_control_limit2__out = -3.0;
    } else {
        _vbr_variable_load2_control_current_control_limit2__out = _vbr_variable_load2_control_current_control_sum6__out;
    }
    // Generated from the component: VBR Variable Load2.Control.current_control.PI_q.Sum7
    _vbr_variable_load2_control_current_control_pi_q_sum7__out = _vbr_variable_load2_control_current_control_pi_q_ki__out + _vbr_variable_load2_control_current_control_pi_q_kb__out;
    // Generated from the component: VBR Variable Load2.Control.current_control.Limit1
    if (_vbr_variable_load2_control_current_control_sum1__out > 3.0) {
        _vbr_variable_load2_control_current_control_limit1__out = 3.0;
    } else if (_vbr_variable_load2_control_current_control_sum1__out < -3.0) {
        _vbr_variable_load2_control_current_control_limit1__out = -3.0;
    } else {
        _vbr_variable_load2_control_current_control_limit1__out = _vbr_variable_load2_control_current_control_sum1__out;
    }
    // Generated from the component: VBR Variable Load2.Control.current_control.PI_d.Sum7
    _vbr_variable_load2_control_current_control_pi_d_sum7__out = _vbr_variable_load2_control_current_control_pi_d_ki__out + _vbr_variable_load2_control_current_control_pi_d_kb__out;
    // Generated from the component: VBR Variable Load1.Control.current_control.Gain13
    _vbr_variable_load1_control_current_control_gain13__out = 169.831288832967 * _vbr_variable_load1_control_current_control_limit2__out;
    // Generated from the component: VBR Variable Load1.Control.current_control.Gain12
    _vbr_variable_load1_control_current_control_gain12__out = 169.831288832967 * _vbr_variable_load1_control_current_control_limit1__out;
    // Generated from the component: VBR Variable Load2.Control.current_control.Gain13
    _vbr_variable_load2_control_current_control_gain13__out = 169.831288832967 * _vbr_variable_load2_control_current_control_limit2__out;
    // Generated from the component: VBR Variable Load2.Control.current_control.Gain12
    _vbr_variable_load2_control_current_control_gain12__out = 169.831288832967 * _vbr_variable_load2_control_current_control_limit1__out;
    // Generated from the component: VBR Variable Load1.Control.dq to abc1.dq to alpha beta
    _vbr_variable_load1_control_dq_to_abc1_dq_to_alpha_beta__k1 = cos(_vbr_variable_load1_control_three_phase_pll2_unit_delay1__out);
    _vbr_variable_load1_control_dq_to_abc1_dq_to_alpha_beta__k2 = sin(_vbr_variable_load1_control_three_phase_pll2_unit_delay1__out);
    _vbr_variable_load1_control_dq_to_abc1_dq_to_alpha_beta__alpha = _vbr_variable_load1_control_dq_to_abc1_dq_to_alpha_beta__k2 * _vbr_variable_load1_control_current_control_gain12__out + _vbr_variable_load1_control_dq_to_abc1_dq_to_alpha_beta__k1 * _vbr_variable_load1_control_current_control_gain13__out;
    _vbr_variable_load1_control_dq_to_abc1_dq_to_alpha_beta__beta = _vbr_variable_load1_control_dq_to_abc1_dq_to_alpha_beta__k2 * _vbr_variable_load1_control_current_control_gain13__out - _vbr_variable_load1_control_dq_to_abc1_dq_to_alpha_beta__k1 * _vbr_variable_load1_control_current_control_gain12__out;
    // Generated from the component: VBR Variable Load2.Control.dq to abc1.dq to alpha beta
    _vbr_variable_load2_control_dq_to_abc1_dq_to_alpha_beta__k1 = cos(_vbr_variable_load2_control_three_phase_pll2_unit_delay1__out);
    _vbr_variable_load2_control_dq_to_abc1_dq_to_alpha_beta__k2 = sin(_vbr_variable_load2_control_three_phase_pll2_unit_delay1__out);
    _vbr_variable_load2_control_dq_to_abc1_dq_to_alpha_beta__alpha = _vbr_variable_load2_control_dq_to_abc1_dq_to_alpha_beta__k2 * _vbr_variable_load2_control_current_control_gain12__out + _vbr_variable_load2_control_dq_to_abc1_dq_to_alpha_beta__k1 * _vbr_variable_load2_control_current_control_gain13__out;
    _vbr_variable_load2_control_dq_to_abc1_dq_to_alpha_beta__beta = _vbr_variable_load2_control_dq_to_abc1_dq_to_alpha_beta__k2 * _vbr_variable_load2_control_current_control_gain13__out - _vbr_variable_load2_control_dq_to_abc1_dq_to_alpha_beta__k1 * _vbr_variable_load2_control_current_control_gain12__out;
    // Generated from the component: VBR Variable Load1.Control.dq to abc1.alpha beta to abc
    _vbr_variable_load1_control_dq_to_abc1_alpha_beta_to_abc__A = 1 * _vbr_variable_load1_control_constant4__out;
    _vbr_variable_load1_control_dq_to_abc1_alpha_beta_to_abc__B = _vbr_variable_load1_control_dq_to_abc1_alpha_beta_to_abc__A - 0.5 * _vbr_variable_load1_control_dq_to_abc1_dq_to_alpha_beta__alpha;
    _vbr_variable_load1_control_dq_to_abc1_alpha_beta_to_abc__C = _vbr_variable_load1_control_dq_to_abc1_alpha_beta_to_abc__B - 0.8660254037844386 * _vbr_variable_load1_control_dq_to_abc1_dq_to_alpha_beta__beta;
    _vbr_variable_load1_control_dq_to_abc1_alpha_beta_to_abc__B += 0.8660254037844386 * _vbr_variable_load1_control_dq_to_abc1_dq_to_alpha_beta__beta;
    _vbr_variable_load1_control_dq_to_abc1_alpha_beta_to_abc__A += 1 * _vbr_variable_load1_control_dq_to_abc1_dq_to_alpha_beta__alpha;
    // Generated from the component: VBR Variable Load2.Control.dq to abc1.alpha beta to abc
    _vbr_variable_load2_control_dq_to_abc1_alpha_beta_to_abc__A = 1 * _vbr_variable_load2_control_constant4__out;
    _vbr_variable_load2_control_dq_to_abc1_alpha_beta_to_abc__B = _vbr_variable_load2_control_dq_to_abc1_alpha_beta_to_abc__A - 0.5 * _vbr_variable_load2_control_dq_to_abc1_dq_to_alpha_beta__alpha;
    _vbr_variable_load2_control_dq_to_abc1_alpha_beta_to_abc__C = _vbr_variable_load2_control_dq_to_abc1_alpha_beta_to_abc__B - 0.8660254037844386 * _vbr_variable_load2_control_dq_to_abc1_dq_to_alpha_beta__beta;
    _vbr_variable_load2_control_dq_to_abc1_alpha_beta_to_abc__B += 0.8660254037844386 * _vbr_variable_load2_control_dq_to_abc1_dq_to_alpha_beta__beta;
    _vbr_variable_load2_control_dq_to_abc1_alpha_beta_to_abc__A += 1 * _vbr_variable_load2_control_dq_to_abc1_dq_to_alpha_beta__alpha;
    // Generated from the component: VBR Variable Load1.Vi_a.Vs1
    HIL_OutFloat(153878528, (float) _vbr_variable_load1_control_dq_to_abc1_alpha_beta_to_abc__A);
    // Generated from the component: VBR Variable Load1.Vi_b.Vs1
    HIL_OutFloat(153878529, (float) _vbr_variable_load1_control_dq_to_abc1_alpha_beta_to_abc__B);
    // Generated from the component: VBR Variable Load1.Vi_c.Vs1
    HIL_OutFloat(153878530, (float) _vbr_variable_load1_control_dq_to_abc1_alpha_beta_to_abc__C);
    // Generated from the component: VBR Variable Load2.Vi_a.Vs1
    HIL_OutFloat(153878531, (float) _vbr_variable_load2_control_dq_to_abc1_alpha_beta_to_abc__A);
    // Generated from the component: VBR Variable Load2.Vi_b.Vs1
    HIL_OutFloat(153878532, (float) _vbr_variable_load2_control_dq_to_abc1_alpha_beta_to_abc__B);
    // Generated from the component: VBR Variable Load2.Vi_c.Vs1
    HIL_OutFloat(153878533, (float) _vbr_variable_load2_control_dq_to_abc1_alpha_beta_to_abc__C);
    //@cmp.out.block.end
    //////////////////////////////////////////////////////////////////////////
    // Update block
    //////////////////////////////////////////////////////////////////////////
    //@cmp.update.block.start
    // Generated from the component: VBR Variable Load1.Control.Limit_PQref.Unit Delay1
    _vbr_variable_load1_control_limit_pqref_unit_delay1__state = _vbr_variable_load1_control_limit_pqref_lims_overpq_s_limiting_over_pq__P;
    // Generated from the component: VBR Variable Load1.Control.Limit_PQref.Unit Delay2
    _vbr_variable_load1_control_limit_pqref_unit_delay2__state = _vbr_variable_load1_control_limit_pqref_lims_overpq_s_limiting_over_pq__Q;
    // Generated from the component: VBR Variable Load1.Control.Three phase PLL2.PID.Integrator1
    _vbr_variable_load1_control_three_phase_pll2_pid_integrator1__state += _vbr_variable_load1_control_three_phase_pll2_pid_sum7__out * 0.0001;
    // Generated from the component: VBR Variable Load1.Control.Three phase PLL2.PID.Integrator2
    _vbr_variable_load1_control_three_phase_pll2_pid_integrator2__state += _vbr_variable_load1_control_three_phase_pll2_pid_gain1__out * 0.0001;
    // Generated from the component: VBR Variable Load1.Control.Three phase PLL2.Unit Delay1
    _vbr_variable_load1_control_three_phase_pll2_unit_delay1__state = _vbr_variable_load1_control_three_phase_pll2_integrator__out;
    // Generated from the component: VBR Variable Load2.Control.Limit_PQref.Unit Delay1
    _vbr_variable_load2_control_limit_pqref_unit_delay1__state = _vbr_variable_load2_control_limit_pqref_lims_overpq_s_limiting_over_pq__P;
    // Generated from the component: VBR Variable Load2.Control.Limit_PQref.Unit Delay2
    _vbr_variable_load2_control_limit_pqref_unit_delay2__state = _vbr_variable_load2_control_limit_pqref_lims_overpq_s_limiting_over_pq__Q;
    // Generated from the component: VBR Variable Load2.Control.Three phase PLL2.PID.Integrator1
    _vbr_variable_load2_control_three_phase_pll2_pid_integrator1__state += _vbr_variable_load2_control_three_phase_pll2_pid_sum7__out * 0.0001;
    // Generated from the component: VBR Variable Load2.Control.Three phase PLL2.PID.Integrator2
    _vbr_variable_load2_control_three_phase_pll2_pid_integrator2__state += _vbr_variable_load2_control_three_phase_pll2_pid_gain1__out * 0.0001;
    // Generated from the component: VBR Variable Load2.Control.Three phase PLL2.Unit Delay1
    _vbr_variable_load2_control_three_phase_pll2_unit_delay1__state = _vbr_variable_load2_control_three_phase_pll2_integrator__out;
    // Generated from the component: RegD_Control.P_ref_Diesel.C function1
    if (_regd_control_p_ref_diesel_c_function1__in >= 0) {
        _regd_control_p_ref_diesel_c_function1__deltaP = _regd_control_p_ref_diesel_c_function1__Reg_Max * _regd_control_p_ref_diesel_c_function1__in;
    }
    else {
        _regd_control_p_ref_diesel_c_function1__deltaP = _regd_control_p_ref_diesel_c_function1__Reg_Min * _regd_control_p_ref_diesel_c_function1__in;
    }
    _regd_control_p_ref_diesel_c_function1__out = _regd_control_p_ref_diesel_c_function1__deltaP;
    // Generated from the component: RegD_Control.P_ref_VL1.C function1
    if (_regd_control_p_ref_vl1_c_function1__in >= 0) {
        _regd_control_p_ref_vl1_c_function1__deltaP = -1 * _regd_control_p_ref_vl1_c_function1__Reg_Min * _regd_control_p_ref_vl1_c_function1__in;
    }
    else {
        _regd_control_p_ref_vl1_c_function1__deltaP = -1 * _regd_control_p_ref_vl1_c_function1__Reg_Max * _regd_control_p_ref_vl1_c_function1__in;
    }
    _regd_control_p_ref_vl1_c_function1__out = _regd_control_p_ref_vl1_c_function1__deltaP;
    // Generated from the component: RegD_Control.P_ref_VL2.C function1
    if (_regd_control_p_ref_vl2_c_function1__in >= 0) {
        _regd_control_p_ref_vl2_c_function1__deltaP = -1 * _regd_control_p_ref_vl2_c_function1__Reg_Min * _regd_control_p_ref_vl2_c_function1__in;
    }
    else {
        _regd_control_p_ref_vl2_c_function1__deltaP = -1 * _regd_control_p_ref_vl2_c_function1__Reg_Max * _regd_control_p_ref_vl2_c_function1__in;
    }
    _regd_control_p_ref_vl2_c_function1__out = _regd_control_p_ref_vl2_c_function1__deltaP;
    // Generated from the component: VBR Variable Load1.Control.Three phase PLL2.abc to dq.LPF_d
    _vbr_variable_load1_control_three_phase_pll2_abc_to_dq_lpf_d__states[0] = _vbr_variable_load1_control_three_phase_pll2_abc_to_dq_lpf_d__delay_line_in;
    // Generated from the component: VBR Variable Load1.Control.Three phase PLL2.abc to dq.LPF_q
    _vbr_variable_load1_control_three_phase_pll2_abc_to_dq_lpf_q__states[0] = _vbr_variable_load1_control_three_phase_pll2_abc_to_dq_lpf_q__delay_line_in;
    // Generated from the component: VBR Variable Load2.Control.Three phase PLL2.abc to dq.LPF_d
    _vbr_variable_load2_control_three_phase_pll2_abc_to_dq_lpf_d__states[0] = _vbr_variable_load2_control_three_phase_pll2_abc_to_dq_lpf_d__delay_line_in;
    // Generated from the component: VBR Variable Load2.Control.Three phase PLL2.abc to dq.LPF_q
    _vbr_variable_load2_control_three_phase_pll2_abc_to_dq_lpf_q__states[0] = _vbr_variable_load2_control_three_phase_pll2_abc_to_dq_lpf_q__delay_line_in;
    // Generated from the component: VBR Variable Load1.Control.Three phase PLL2.normalize
    // Generated from the component: VBR Variable Load2.Control.Three phase PLL2.normalize
    // Generated from the component: VBR Variable Load1.Control.current_control.PI_d.Integrator1
    _vbr_variable_load1_control_current_control_pi_d_integrator1__state += _vbr_variable_load1_control_current_control_pi_d_sum7__out * 0.0001;
    if (_vbr_variable_load1_subsystem1_bus_split1__out > 0)
        _vbr_variable_load1_control_current_control_pi_d_integrator1__reset_state = 1;
    else if (_vbr_variable_load1_subsystem1_bus_split1__out < 0)
        _vbr_variable_load1_control_current_control_pi_d_integrator1__reset_state = -1;
    else
        _vbr_variable_load1_control_current_control_pi_d_integrator1__reset_state = 0;
    // Generated from the component: VBR Variable Load1.Control.current_control.PI_q.Integrator1
    _vbr_variable_load1_control_current_control_pi_q_integrator1__state += _vbr_variable_load1_control_current_control_pi_q_sum7__out * 0.0001;
    if (_vbr_variable_load1_subsystem1_bus_split1__out > 0)
        _vbr_variable_load1_control_current_control_pi_q_integrator1__reset_state = 1;
    else if (_vbr_variable_load1_subsystem1_bus_split1__out < 0)
        _vbr_variable_load1_control_current_control_pi_q_integrator1__reset_state = -1;
    else
        _vbr_variable_load1_control_current_control_pi_q_integrator1__reset_state = 0;
    // Generated from the component: VBR Variable Load2.Control.current_control.PI_d.Integrator1
    _vbr_variable_load2_control_current_control_pi_d_integrator1__state += _vbr_variable_load2_control_current_control_pi_d_sum7__out * 0.0001;
    if (_vbr_variable_load2_subsystem1_bus_split1__out > 0)
        _vbr_variable_load2_control_current_control_pi_d_integrator1__reset_state = 1;
    else if (_vbr_variable_load2_subsystem1_bus_split1__out < 0)
        _vbr_variable_load2_control_current_control_pi_d_integrator1__reset_state = -1;
    else
        _vbr_variable_load2_control_current_control_pi_d_integrator1__reset_state = 0;
    // Generated from the component: VBR Variable Load2.Control.current_control.PI_q.Integrator1
    _vbr_variable_load2_control_current_control_pi_q_integrator1__state += _vbr_variable_load2_control_current_control_pi_q_sum7__out * 0.0001;
    if (_vbr_variable_load2_subsystem1_bus_split1__out > 0)
        _vbr_variable_load2_control_current_control_pi_q_integrator1__reset_state = 1;
    else if (_vbr_variable_load2_subsystem1_bus_split1__out < 0)
        _vbr_variable_load2_control_current_control_pi_q_integrator1__reset_state = -1;
    else
        _vbr_variable_load2_control_current_control_pi_q_integrator1__reset_state = 0;
    // Generated from the component: VBR Variable Load1.Control.Limit_PQref.priority_PQlim.PQ limiting with priority
    // Generated from the component: VBR Variable Load2.Control.Limit_PQref.priority_PQlim.PQ limiting with priority
    // Generated from the component: VBR Variable Load1.Control.Limit_PQref.P rate limit
    _vbr_variable_load1_control_limit_pqref_p_rate_limit__prev_out = _vbr_variable_load1_control_limit_pqref_p_rate_limit__out;
    _vbr_variable_load1_control_limit_pqref_p_rate_limit__first_step = 0;
    // Generated from the component: VBR Variable Load1.Control.Limit_PQref.Q rate limit
    _vbr_variable_load1_control_limit_pqref_q_rate_limit__prev_out = _vbr_variable_load1_control_limit_pqref_q_rate_limit__out;
    _vbr_variable_load1_control_limit_pqref_q_rate_limit__first_step = 0;
    // Generated from the component: VBR Variable Load1.Control.Limit_PQref.S rate limit
    _vbr_variable_load1_control_limit_pqref_s_rate_limit__prev_out = _vbr_variable_load1_control_limit_pqref_s_rate_limit__out;
    _vbr_variable_load1_control_limit_pqref_s_rate_limit__first_step = 0;
    // Generated from the component: VBR Variable Load2.Control.Limit_PQref.P rate limit
    _vbr_variable_load2_control_limit_pqref_p_rate_limit__prev_out = _vbr_variable_load2_control_limit_pqref_p_rate_limit__out;
    _vbr_variable_load2_control_limit_pqref_p_rate_limit__first_step = 0;
    // Generated from the component: VBR Variable Load2.Control.Limit_PQref.Q rate limit
    _vbr_variable_load2_control_limit_pqref_q_rate_limit__prev_out = _vbr_variable_load2_control_limit_pqref_q_rate_limit__out;
    _vbr_variable_load2_control_limit_pqref_q_rate_limit__first_step = 0;
    // Generated from the component: VBR Variable Load2.Control.Limit_PQref.S rate limit
    _vbr_variable_load2_control_limit_pqref_s_rate_limit__prev_out = _vbr_variable_load2_control_limit_pqref_s_rate_limit__out;
    _vbr_variable_load2_control_limit_pqref_s_rate_limit__first_step = 0;
    // Generated from the component: VBR Variable Load1.Control.Limit_PQref.limS_overPQ.S limiting over PQ
    // Generated from the component: VBR Variable Load2.Control.Limit_PQref.limS_overPQ.S limiting over PQ
    // Generated from the component: VBR Variable Load1.Control.Three phase PLL2.Rate Limiter1
    _vbr_variable_load1_control_three_phase_pll2_rate_limiter1__prev_out = _vbr_variable_load1_control_three_phase_pll2_rate_limiter1__out;
    _vbr_variable_load1_control_three_phase_pll2_rate_limiter1__first_step = 0;
    // Generated from the component: VBR Variable Load1.Control.Three phase PLL2.integrator
    // Generated from the component: VBR Variable Load2.Control.Three phase PLL2.Rate Limiter1
    _vbr_variable_load2_control_three_phase_pll2_rate_limiter1__prev_out = _vbr_variable_load2_control_three_phase_pll2_rate_limiter1__out;
    _vbr_variable_load2_control_three_phase_pll2_rate_limiter1__first_step = 0;
    // Generated from the component: VBR Variable Load2.Control.Three phase PLL2.integrator
    // Generated from the component: VBR Variable Load1.Control.Three phase PLL2.LPF.LPF
    for (_vbr_variable_load1_control_three_phase_pll2_lpf_lpf__i = 1; _vbr_variable_load1_control_three_phase_pll2_lpf_lpf__i > 0; _vbr_variable_load1_control_three_phase_pll2_lpf_lpf__i--) {
        _vbr_variable_load1_control_three_phase_pll2_lpf_lpf__states[_vbr_variable_load1_control_three_phase_pll2_lpf_lpf__i] = _vbr_variable_load1_control_three_phase_pll2_lpf_lpf__states[_vbr_variable_load1_control_three_phase_pll2_lpf_lpf__i - 1];
    }
    _vbr_variable_load1_control_three_phase_pll2_lpf_lpf__states[0] = _vbr_variable_load1_control_three_phase_pll2_lpf_lpf__delay_line_in;
    // Generated from the component: VBR Variable Load2.Control.Three phase PLL2.LPF.LPF
    for (_vbr_variable_load2_control_three_phase_pll2_lpf_lpf__i = 1; _vbr_variable_load2_control_three_phase_pll2_lpf_lpf__i > 0; _vbr_variable_load2_control_three_phase_pll2_lpf_lpf__i--) {
        _vbr_variable_load2_control_three_phase_pll2_lpf_lpf__states[_vbr_variable_load2_control_three_phase_pll2_lpf_lpf__i] = _vbr_variable_load2_control_three_phase_pll2_lpf_lpf__states[_vbr_variable_load2_control_three_phase_pll2_lpf_lpf__i - 1];
    }
    _vbr_variable_load2_control_three_phase_pll2_lpf_lpf__states[0] = _vbr_variable_load2_control_three_phase_pll2_lpf_lpf__delay_line_in;
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
    _f1_cb14_meas1_ia_ia1__out = (HIL_InFloat(0xc80000 + 0x613));
    // Generated from the component: F1_CB14.Meas1.IB.Ia1
    _f1_cb14_meas1_ib_ia1__out = (HIL_InFloat(0xc80000 + 0x614));
    // Generated from the component: F1_CB14.Meas1.IC.Ia1
    _f1_cb14_meas1_ic_ia1__out = (HIL_InFloat(0xc80000 + 0x615));
    // Generated from the component: F1_CB14.Meas1.VA.Va1
    _f1_cb14_meas1_va_va1__out = (HIL_InFloat(0xc80000 + 0x605));
    // Generated from the component: F1_CB14.Meas1.VB.Va1
    _f1_cb14_meas1_vb_va1__out = (HIL_InFloat(0xc80000 + 0x606));
    // Generated from the component: F1_CB14.Meas1.VC.Va1
    _f1_cb14_meas1_vc_va1__out = (HIL_InFloat(0xc80000 + 0x607));
    // Generated from the component: F1_CB14.Meas2.VA.Va1
    _f1_cb14_meas2_va_va1__out = (HIL_InFloat(0xc80000 + 0x608));
    // Generated from the component: F1_CB14.Meas2.VB.Va1
    _f1_cb14_meas2_vb_va1__out = (HIL_InFloat(0xc80000 + 0x609));
    // Generated from the component: F1_CB14.Meas2.VC.Va1
    _f1_cb14_meas2_vc_va1__out = (HIL_InFloat(0xc80000 + 0x60a));
    // Generated from the component: F1_CB2.F1_CB2
    _f1_cb2_f1_cb2__out = XIo_InInt32(0x55000114);
    // Generated from the component: F1_CB2.Meas1.IA.Ia1
    _f1_cb2_meas1_ia_ia1__out = (HIL_InFloat(0xc80000 + 0x83d));
    // Generated from the component: F1_CB2.Meas1.IB.Ia1
    _f1_cb2_meas1_ib_ia1__out = (HIL_InFloat(0xc80000 + 0x83e));
    // Generated from the component: F1_CB2.Meas1.IC.Ia1
    _f1_cb2_meas1_ic_ia1__out = (HIL_InFloat(0xc80000 + 0x83f));
    // Generated from the component: F1_CB2.Meas1.VA.Va1
    _f1_cb2_meas1_va_va1__out = (HIL_InFloat(0xc80000 + 0x81c));
    // Generated from the component: F1_CB2.Meas1.VB.Va1
    _f1_cb2_meas1_vb_va1__out = (HIL_InFloat(0xc80000 + 0x81d));
    // Generated from the component: F1_CB2.Meas1.VC.Va1
    _f1_cb2_meas1_vc_va1__out = (HIL_InFloat(0xc80000 + 0x81e));
    // Generated from the component: F1_CB2.Meas2.VA.Va1
    _f1_cb2_meas2_va_va1__out = (HIL_InFloat(0xc80000 + 0x81f));
    // Generated from the component: F1_CB2.Meas2.VB.Va1
    _f1_cb2_meas2_vb_va1__out = (HIL_InFloat(0xc80000 + 0x820));
    // Generated from the component: F1_CB2.Meas2.VC.Va1
    _f1_cb2_meas2_vc_va1__out = (HIL_InFloat(0xc80000 + 0x821));
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
    _f1_cb6_meas1_ia_ia1__out = (HIL_InFloat(0xc80000 + 0x840));
    // Generated from the component: F1_CB6.Meas1.IB.Ia1
    _f1_cb6_meas1_ib_ia1__out = (HIL_InFloat(0xc80000 + 0x841));
    // Generated from the component: F1_CB6.Meas1.IC.Ia1
    _f1_cb6_meas1_ic_ia1__out = (HIL_InFloat(0xc80000 + 0x842));
    // Generated from the component: F1_CB6.Meas1.VA.Va1
    _f1_cb6_meas1_va_va1__out = (HIL_InFloat(0xc80000 + 0x822));
    // Generated from the component: F1_CB6.Meas1.VB.Va1
    _f1_cb6_meas1_vb_va1__out = (HIL_InFloat(0xc80000 + 0x823));
    // Generated from the component: F1_CB6.Meas1.VC.Va1
    _f1_cb6_meas1_vc_va1__out = (HIL_InFloat(0xc80000 + 0x824));
    // Generated from the component: F1_CB6.Meas2.VA.Va1
    _f1_cb6_meas2_va_va1__out = (HIL_InFloat(0xc80000 + 0x825));
    // Generated from the component: F1_CB6.Meas2.VB.Va1
    _f1_cb6_meas2_vb_va1__out = (HIL_InFloat(0xc80000 + 0x826));
    // Generated from the component: F1_CB6.Meas2.VC.Va1
    _f1_cb6_meas2_vc_va1__out = (HIL_InFloat(0xc80000 + 0x827));
    // Generated from the component: F1_Motor.Chiller_compressor.Unit Delay1
    _f1_motor_chiller_compressor_unit_delay1__out = _f1_motor_chiller_compressor_unit_delay1__state;
    // Generated from the component: F1_Motor.IM.Machine Wrapper1
    HIL_OutFloat((0x800000 + 0x40000 * 0x0 + 0x18),  _f1_motor_im_machine_wrapper1__model_load);
    _f1_motor_im_machine_wrapper1__speed_out = (HIL_InFloat(0xc80000 + 0x800a));
    _f1_motor_im_machine_wrapper1__torque_out = (HIL_InFloat(0xc80000 + 0x8008));
    _f1_motor_im_machine_wrapper1__angle_out = (HIL_InFloat(0xc80000 + 0x800b));
    // Generated from the component: F1_PCC.Digital Input Close
    _f1_pcc_digital_input_close__out = HIL_InInt32(0xf80204);
    if(_f1_pcc_digital_input_close__out == 0) {
        _f1_pcc_digital_input_close__out = 1;
    } else {
        _f1_pcc_digital_input_close__out = 0;
    }
    // Generated from the component: F1_PCC.Digital Input Trip
    _f1_pcc_digital_input_trip__out = HIL_InInt32(0xf80205);
    if(_f1_pcc_digital_input_trip__out == 0) {
        _f1_pcc_digital_input_trip__out = 1;
    } else {
        _f1_pcc_digital_input_trip__out = 0;
    }
    // Generated from the component: F1_PCC.Meas1.IA.Ia1
    _f1_pcc_meas1_ia_ia1__out = (HIL_InFloat(0xc80000 + 0xa1d));
    // Generated from the component: F1_PCC.Meas1.IB.Ia1
    _f1_pcc_meas1_ib_ia1__out = (HIL_InFloat(0xc80000 + 0xa1e));
    // Generated from the component: F1_PCC.Meas1.IC.Ia1
    _f1_pcc_meas1_ic_ia1__out = (HIL_InFloat(0xc80000 + 0xa1f));
    // Generated from the component: F1_PCC.Meas1.VA.Va1
    _f1_pcc_meas1_va_va1__out = (HIL_InFloat(0xc80000 + 0xa12));
    // Generated from the component: F1_PCC.Meas1.VB.Va1
    _f1_pcc_meas1_vb_va1__out = (HIL_InFloat(0xc80000 + 0xa13));
    // Generated from the component: F1_PCC.Meas1.VC.Va1
    _f1_pcc_meas1_vc_va1__out = (HIL_InFloat(0xc80000 + 0xa14));
    // Generated from the component: F1_PCC.Meas2.VA.Va1
    _f1_pcc_meas2_va_va1__out = (HIL_InFloat(0xc80000 + 0xa15));
    // Generated from the component: F1_PCC.Meas2.VB.Va1
    _f1_pcc_meas2_vb_va1__out = (HIL_InFloat(0xc80000 + 0xa16));
    // Generated from the component: F1_PCC.Meas2.VC.Va1
    _f1_pcc_meas2_vc_va1__out = (HIL_InFloat(0xc80000 + 0xa17));
    // Generated from the component: F1_PCC.PCC Measurements.Constant1
    // Generated from the component: F1_PCC.PCC Measurements.Constant2
    // Generated from the component: F1_PCC.PCC Measurements.Three phase PLL1.PID.Integrator1
    _f1_pcc_pcc_measurements_three_phase_pll1_pid_integrator1__out = _f1_pcc_pcc_measurements_three_phase_pll1_pid_integrator1__state;
    // Generated from the component: F1_PCC.PCC Measurements.Three phase PLL1.PID.Integrator2
    _f1_pcc_pcc_measurements_three_phase_pll1_pid_integrator2__out = _f1_pcc_pcc_measurements_three_phase_pll1_pid_integrator2__state;
    // Generated from the component: F1_PCC.PCC Measurements.Three phase PLL1.Unit Delay1
    _f1_pcc_pcc_measurements_three_phase_pll1_unit_delay1__out = _f1_pcc_pcc_measurements_three_phase_pll1_unit_delay1__state;
    // Generated from the component: F1_PCC.PCC Measurements.Three phase PLL1.to_Hz
    _f1_pcc_pcc_measurements_three_phase_pll1_to_hz__out = 0.15915494309189535 * _f1_pcc_pcc_measurements_three_phase_pll1_lpf_lpf__out;
    // Generated from the component: F1_PCC.SR Flip Flop1
    _f1_pcc_sr_flip_flop1__out = _f1_pcc_sr_flip_flop1__state;
    _f1_pcc_sr_flip_flop1__out_n = _f1_pcc_sr_flip_flop1__state != -1 ? !_f1_pcc_sr_flip_flop1__state : -1;
    // Generated from the component: F1_VL_CB1.F1_CB7
    _f1_vl_cb1_f1_cb7__out = XIo_InInt32(0x55000128);
    // Generated from the component: F1_VL_CB1.Meas1.IA.Ia1
    _f1_vl_cb1_meas1_ia_ia1__out = (HIL_InFloat(0xc80000 + 0x843));
    // Generated from the component: F1_VL_CB1.Meas1.IB.Ia1
    _f1_vl_cb1_meas1_ib_ia1__out = (HIL_InFloat(0xc80000 + 0x844));
    // Generated from the component: F1_VL_CB1.Meas1.IC.Ia1
    _f1_vl_cb1_meas1_ic_ia1__out = (HIL_InFloat(0xc80000 + 0x845));
    // Generated from the component: F1_VL_CB1.Meas1.VA.Va1
    _f1_vl_cb1_meas1_va_va1__out = (HIL_InFloat(0xc80000 + 0x828));
    // Generated from the component: F1_VL_CB1.Meas1.VB.Va1
    _f1_vl_cb1_meas1_vb_va1__out = (HIL_InFloat(0xc80000 + 0x829));
    // Generated from the component: F1_VL_CB1.Meas1.VC.Va1
    _f1_vl_cb1_meas1_vc_va1__out = (HIL_InFloat(0xc80000 + 0x82a));
    // Generated from the component: F1_VL_CB1.Meas2.VA.Va1
    _f1_vl_cb1_meas2_va_va1__out = (HIL_InFloat(0xc80000 + 0x82b));
    // Generated from the component: F1_VL_CB1.Meas2.VB.Va1
    _f1_vl_cb1_meas2_vb_va1__out = (HIL_InFloat(0xc80000 + 0x82c));
    // Generated from the component: F1_VL_CB1.Meas2.VC.Va1
    _f1_vl_cb1_meas2_vc_va1__out = (HIL_InFloat(0xc80000 + 0x82d));
    // Generated from the component: F1_VL_CB2.F1_CB7
    _f1_vl_cb2_f1_cb7__out = XIo_InInt32(0x5500012c);
    // Generated from the component: F1_VL_CB2.Meas1.IA.Ia1
    _f1_vl_cb2_meas1_ia_ia1__out = (HIL_InFloat(0xc80000 + 0x846));
    // Generated from the component: F1_VL_CB2.Meas1.IB.Ia1
    _f1_vl_cb2_meas1_ib_ia1__out = (HIL_InFloat(0xc80000 + 0x847));
    // Generated from the component: F1_VL_CB2.Meas1.IC.Ia1
    _f1_vl_cb2_meas1_ic_ia1__out = (HIL_InFloat(0xc80000 + 0x848));
    // Generated from the component: F1_VL_CB2.Meas1.VA.Va1
    _f1_vl_cb2_meas1_va_va1__out = (HIL_InFloat(0xc80000 + 0x82e));
    // Generated from the component: F1_VL_CB2.Meas1.VB.Va1
    _f1_vl_cb2_meas1_vb_va1__out = (HIL_InFloat(0xc80000 + 0x82f));
    // Generated from the component: F1_VL_CB2.Meas1.VC.Va1
    _f1_vl_cb2_meas1_vc_va1__out = (HIL_InFloat(0xc80000 + 0x830));
    // Generated from the component: F1_VL_CB2.Meas2.VA.Va1
    _f1_vl_cb2_meas2_va_va1__out = (HIL_InFloat(0xc80000 + 0x831));
    // Generated from the component: F1_VL_CB2.Meas2.VB.Va1
    _f1_vl_cb2_meas2_vb_va1__out = (HIL_InFloat(0xc80000 + 0x832));
    // Generated from the component: F1_VL_CB2.Meas2.VC.Va1
    _f1_vl_cb2_meas2_vc_va1__out = (HIL_InFloat(0xc80000 + 0x833));
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
    _microturbine1_cb_control_grid_islanded__out = XIo_InInt32(0x55000130);
    // Generated from the component: Microturbine1.Connect MCB
    _microturbine1_connect_mcb__out = XIo_InFloat(0x55000134);
    // Generated from the component: Microturbine1.Connect MT
    _microturbine1_connect_mt__out = XIo_InFloat(0x55000138);
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
    // Generated from the component: Microturbine1.Governor.AGC offset
    // Generated from the component: Microturbine1.Governor.Exciter Activation.Constant1
    // Generated from the component: Microturbine1.Governor.Exciter Activation.Constant2
    // Generated from the component: Microturbine1.Governor.Integrator1
    _microturbine1_governor_integrator1__out = _microturbine1_governor_integrator1__state;
    // Generated from the component: Microturbine1.Governor.Rate Transition1.Output
    // Generated from the component: Microturbine1.Governor.Rate Transition2.Output
    // Generated from the component: Microturbine1.Governor.Rate Transition3.Output
    // Generated from the component: Microturbine1.Governor.Rate Transition4.Output
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
        HIL_OutInt32(0x8e40480, 0x0);
    }
    else {
        HIL_OutInt32(0x8e40480, 0x1);
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
        HIL_OutInt32(0x9240480, 0x0);
    }
    else {
        HIL_OutInt32(0x9240480, 0x1);
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
        HIL_OutInt32(0x9240481, 0x0);
    }
    else {
        HIL_OutInt32(0x9240481, 0x1);
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
    // Generated from the component: F1_Motor.Chiller_compressor.Gain1
    _f1_motor_chiller_compressor_gain1__out = 9.5493 * _f1_motor_im_machine_wrapper1__speed_out;
    // Generated from the component: F1_Motor.Termination1
    // Generated from the component: F1_PCC.Meas1.Bus Join2
    _f1_pcc_meas1_bus_join2__out[0] = _f1_pcc_meas1_ia_ia1__out;
    _f1_pcc_meas1_bus_join2__out[1] = _f1_pcc_meas1_ib_ia1__out;
    _f1_pcc_meas1_bus_join2__out[2] = _f1_pcc_meas1_ic_ia1__out;
    // Generated from the component: F1_PCC.Meas1.Bus Join1
    _f1_pcc_meas1_bus_join1__out[0] = _f1_pcc_meas1_va_va1__out;
    _f1_pcc_meas1_bus_join1__out[1] = _f1_pcc_meas1_vb_va1__out;
    _f1_pcc_meas1_bus_join1__out[2] = _f1_pcc_meas1_vc_va1__out;
    // Generated from the component: F1_PCC.Meas2.Bus Join1
    _f1_pcc_meas2_bus_join1__out[0] = _f1_pcc_meas2_va_va1__out;
    _f1_pcc_meas2_bus_join1__out[1] = _f1_pcc_meas2_vb_va1__out;
    _f1_pcc_meas2_bus_join1__out[2] = _f1_pcc_meas2_vc_va1__out;
    // Generated from the component: F1_PCC.PCC Measurements.Termination4
    // Generated from the component: F1_PCC.PCC Measurements.Three phase PLL1.sin
    _f1_pcc_pcc_measurements_three_phase_pll1_sin__out = sin(_f1_pcc_pcc_measurements_three_phase_pll1_unit_delay1__out);
    // Generated from the component: F1_PCC.Gain4
    _f1_pcc_gain4__out = 100.0 * _f1_pcc_pcc_measurements_three_phase_pll1_to_hz__out;
    // Generated from the component: F1_PCC.Data Type Conversion1
    _f1_pcc_data_type_conversion1__out = (double)_f1_pcc_sr_flip_flop1__out;
    // Generated from the component: F1_PCC.S1.CTC_Wrapper
    if (_f1_pcc_sr_flip_flop1__out == 0x0) {
        HIL_OutInt32(0x9640481, 0x0);
    }
    else {
        HIL_OutInt32(0x9640481, 0x1);
    }
    // Generated from the component: F1_PCC.Termination2
    // Generated from the component: F1_PCC.Termination3
    // Generated from the component: F1_VL_CB1.Brk.S1.CTC_Wrapper
    if (_f1_vl_cb1_f1_cb7__out == 0x0) {
        HIL_OutInt32(0x9240482, 0x0);
    }
    else {
        HIL_OutInt32(0x9240482, 0x1);
    }
    // Generated from the component: F1_VL_CB1.Meas1.Bus Join2
    _f1_vl_cb1_meas1_bus_join2__out[0] = _f1_vl_cb1_meas1_ia_ia1__out;
    _f1_vl_cb1_meas1_bus_join2__out[1] = _f1_vl_cb1_meas1_ib_ia1__out;
    _f1_vl_cb1_meas1_bus_join2__out[2] = _f1_vl_cb1_meas1_ic_ia1__out;
    // Generated from the component: F1_VL_CB1.Meas1.Bus Join1
    _f1_vl_cb1_meas1_bus_join1__out[0] = _f1_vl_cb1_meas1_va_va1__out;
    _f1_vl_cb1_meas1_bus_join1__out[1] = _f1_vl_cb1_meas1_vb_va1__out;
    _f1_vl_cb1_meas1_bus_join1__out[2] = _f1_vl_cb1_meas1_vc_va1__out;
    // Generated from the component: F1_VL_CB1.Meas2.Bus Join1
    _f1_vl_cb1_meas2_bus_join1__out[0] = _f1_vl_cb1_meas2_va_va1__out;
    _f1_vl_cb1_meas2_bus_join1__out[1] = _f1_vl_cb1_meas2_vb_va1__out;
    _f1_vl_cb1_meas2_bus_join1__out[2] = _f1_vl_cb1_meas2_vc_va1__out;
    // Generated from the component: F1_VL_CB2.Brk.S1.CTC_Wrapper
    if (_f1_vl_cb2_f1_cb7__out == 0x0) {
        HIL_OutInt32(0x9240483, 0x0);
    }
    else {
        HIL_OutInt32(0x9240483, 0x1);
    }
    // Generated from the component: F1_VL_CB2.Meas1.Bus Join2
    _f1_vl_cb2_meas1_bus_join2__out[0] = _f1_vl_cb2_meas1_ia_ia1__out;
    _f1_vl_cb2_meas1_bus_join2__out[1] = _f1_vl_cb2_meas1_ib_ia1__out;
    _f1_vl_cb2_meas1_bus_join2__out[2] = _f1_vl_cb2_meas1_ic_ia1__out;
    // Generated from the component: F1_VL_CB2.Meas1.Bus Join1
    _f1_vl_cb2_meas1_bus_join1__out[0] = _f1_vl_cb2_meas1_va_va1__out;
    _f1_vl_cb2_meas1_bus_join1__out[1] = _f1_vl_cb2_meas1_vb_va1__out;
    _f1_vl_cb2_meas1_bus_join1__out[2] = _f1_vl_cb2_meas1_vc_va1__out;
    // Generated from the component: F1_VL_CB2.Meas2.Bus Join1
    _f1_vl_cb2_meas2_bus_join1__out[0] = _f1_vl_cb2_meas2_va_va1__out;
    _f1_vl_cb2_meas2_bus_join1__out[1] = _f1_vl_cb2_meas2_vb_va1__out;
    _f1_vl_cb2_meas2_bus_join1__out[2] = _f1_vl_cb2_meas2_vc_va1__out;
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
    HIL_OutAO(0x401a, (float)_microturbine1_be1_25a_synchronizer_unit_delay2__out);
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
    // Generated from the component: Microturbine1.Engine.Sum1
    _microturbine1_engine_sum1__out =  - _microturbine1_engine_integrator1__out + _microturbine1_governor_integrator1__out;
    // Generated from the component: Microturbine1.Governor.P_sv
    HIL_OutAO(0x4029, (float)_microturbine1_governor_integrator1__out);
    // Generated from the component: Microturbine1.Governor.Gain28
    _microturbine1_governor_gain28__out = 0.005305164769729845 * _microturbine1_governor_rate_transition2_output__out;
    // Generated from the component: Microturbine1.Exciter.Rate Transition1.Input
    _microturbine1_exciter_rate_transition1_output__out = _microturbine1_governor_rate_transition3_output__out;
    // Generated from the component: Microturbine1.Governor.Sum11
    _microturbine1_governor_sum11__out = _microturbine1_governor_agc_offset__out + _microturbine1_governor_rate_transition4_output__out;
    // Generated from the component: Microturbine1.Gain1
    _microturbine1_gain1__out = 0.20943951023931953 * _microturbine1_synchonous_machine_rate_transition2_output__out;
    // Generated from the component: Microturbine1.w_M
    HIL_OutAO(0x4037, (float)_microturbine1_synchonous_machine_rate_transition2_output__out);
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
    HIL_OutAO(0x400c, (float)_diesel_mcb_rms_value1__out);
    // Generated from the component: DIESEL_MCB.VB_grid2rms
    HIL_OutAO(0x400d, (float)_diesel_mcb_rms_value2__out);
    // Generated from the component: DIESEL_MCB.VC_grid2rms
    HIL_OutAO(0x400e, (float)_diesel_mcb_rms_value3__out);
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
    // Generated from the component: F1_Motor.Chiller_compressor.C function1
    _f1_motor_chiller_compressor_c_function1__w = _f1_motor_chiller_compressor_gain1__out;
    _f1_motor_chiller_compressor_c_function1__T = 0.1118 * _f1_motor_chiller_compressor_c_function1__w + 0.000861 * powf(_f1_motor_chiller_compressor_c_function1__w, 2) - 3.371e-7 * powf(_f1_motor_chiller_compressor_c_function1__w, 3);
    // Generated from the component: F1_PCC.PCC Measurements.Bus Split2
    _f1_pcc_pcc_measurements_bus_split2__out = _f1_pcc_meas1_bus_join2__out[0];
    _f1_pcc_pcc_measurements_bus_split2__out1 = _f1_pcc_meas1_bus_join2__out[1];
    _f1_pcc_pcc_measurements_bus_split2__out2 = _f1_pcc_meas1_bus_join2__out[2];
    // Generated from the component: F1_PCC.PCC Measurements.Bus Split1
    _f1_pcc_pcc_measurements_bus_split1__out = _f1_pcc_meas1_bus_join1__out[0];
    _f1_pcc_pcc_measurements_bus_split1__out1 = _f1_pcc_meas1_bus_join1__out[1];
    _f1_pcc_pcc_measurements_bus_split1__out2 = _f1_pcc_meas1_bus_join1__out[2];
    // Generated from the component: F1_PCC.Termination4
    // Generated from the component: F1_PCC.PCC Measurements.Termination5
    // Generated from the component: F1_VL_CB1.Termination4
    // Generated from the component: F1_VL_CB1.Termination5
    // Generated from the component: F1_VL_CB1.Termination3
    // Generated from the component: F1_VL_CB2.Termination4
    // Generated from the component: F1_VL_CB2.Termination5
    // Generated from the component: F1_VL_CB2.Termination3
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
    HIL_OutAO(0x4023, (float)_microturbine1_exciter_integrator1__out);
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
    HIL_OutAO(0x4025, (float)_microturbine1_exciter_integrator2__out);
    // Generated from the component: Microturbine1.Exciter.V_R_M
    HIL_OutAO(0x4026, (float)_microturbine1_exciter_integrator3__out);
    // Generated from the component: Microturbine1.Exciter.E_t_M
    HIL_OutAO(0x4024, (float)_microturbine1_exciter_integrator4__out);
    // Generated from the component: Microturbine1.Exciter.Sum4
    _microturbine1_exciter_sum4__out = _microturbine1_exciter_rate_transition2_output__out - _microturbine1_exciter_integrator4__out;
    // Generated from the component: Microturbine1.Exciter.Sum5
    _microturbine1_exciter_sum5__out =  - _microturbine1_exciter_integrator4__out + _microturbine1_exciter_rate_transition3_output__out;
    // Generated from the component: Microturbine1.Exciter.exciter OFF
    HIL_OutInt32(0xf0040d, _microturbine1_exciter_logical_operator1__out != 0x0);
    // Generated from the component: Microturbine1.Engine.Gain1
    _microturbine1_engine_gain1__out = 41.666666666666664 * _microturbine1_engine_sum1__out;
    // Generated from the component: Microturbine1.Governor.Exciter Activation.Sum1
    _microturbine1_governor_exciter_activation_sum1__out = _microturbine1_governor_exciter_activation_constant2__out - _microturbine1_governor_gain28__out;
    // Generated from the component: Microturbine1.Governor.Sum7
    _microturbine1_governor_sum7__out = _microturbine1_governor_rate_transition1_output__out - _microturbine1_governor_gain28__out;
    // Generated from the component: Microturbine1.Governor.Gain37
    _microturbine1_governor_gain37__out = 2.857142857142857e-07 * _microturbine1_governor_sum11__out;
    // Generated from the component: Microturbine1.BE1-25A Synchronizer.Gain4
    _microturbine1_be1_25a_synchronizer_gain4__out = 0.0026525823848649226 * _microturbine1_gain1__out;
    // Generated from the component: Microturbine1.CB_control.Gain13
    _microturbine1_cb_control_gain13__out = 0.0026525823848649226 * _microturbine1_gain1__out;
    // Generated from the component: Microturbine1.Gain18
    _microturbine1_gain18__out = 0.5 * _microturbine1_gain1__out;
    // Generated from the component: Microturbine1.Three-phase Meter1.POWER_P
    HIL_OutAO(0x4034, (float)_microturbine1_three_phase_meter1_pq_measure_pq_power_meter1__Pdc);
    // Generated from the component: Microturbine1.Three-phase Meter1.POWER_Q
    HIL_OutAO(0x4035, (float)_microturbine1_three_phase_meter1_pq_measure_pq_power_meter1__Qdc);
    // Generated from the component: Microturbine1.Three-phase Meter1.POWER_S
    HIL_OutAO(0x4036, (float)_microturbine1_three_phase_meter1_pq_measure_pq_power_meter1__apparent);
    // Generated from the component: Microturbine1.Three-phase Meter1.PQ measure.Termination1
    // Generated from the component: Microturbine1.Three-phase Meter1.PQ measure.Termination2
    // Generated from the component: Microturbine1.Three-phase Meter1.PQ measure.Termination4
    // Generated from the component: F1_PCC.PCC Measurements.Power Meter1
    _f1_pcc_pcc_measurements_power_meter1__v_alpha = SQRT_2OVER3 * ( _f1_pcc_pcc_measurements_bus_split1__out - 0.5f * _f1_pcc_pcc_measurements_bus_split1__out1 - 0.5f * _f1_pcc_pcc_measurements_bus_split1__out2);
    _f1_pcc_pcc_measurements_power_meter1__v_beta = SQRT_2OVER3 * (SQRT3_OVER_2 * _f1_pcc_pcc_measurements_bus_split1__out1 - SQRT3_OVER_2 * _f1_pcc_pcc_measurements_bus_split1__out2);
    _f1_pcc_pcc_measurements_power_meter1__i_alpha = SQRT_2OVER3 * ( _f1_pcc_pcc_measurements_bus_split2__out - 0.5f * _f1_pcc_pcc_measurements_bus_split2__out1 - 0.5f * _f1_pcc_pcc_measurements_bus_split2__out2);
    _f1_pcc_pcc_measurements_power_meter1__i_beta = SQRT_2OVER3 * (SQRT3_OVER_2 * _f1_pcc_pcc_measurements_bus_split2__out1 - SQRT3_OVER_2 * _f1_pcc_pcc_measurements_bus_split2__out2);
    _f1_pcc_pcc_measurements_power_meter1__v_zero = ONE_DIV_BY_SQRT_3 * (_f1_pcc_pcc_measurements_bus_split1__out + _f1_pcc_pcc_measurements_bus_split1__out1 + _f1_pcc_pcc_measurements_bus_split1__out2);
    _f1_pcc_pcc_measurements_power_meter1__i_zero = ONE_DIV_BY_SQRT_3 * (_f1_pcc_pcc_measurements_bus_split2__out + _f1_pcc_pcc_measurements_bus_split2__out1 + _f1_pcc_pcc_measurements_bus_split2__out2);
    _f1_pcc_pcc_measurements_power_meter1__Pac = _f1_pcc_pcc_measurements_power_meter1__v_alpha * _f1_pcc_pcc_measurements_power_meter1__i_alpha + _f1_pcc_pcc_measurements_power_meter1__v_beta * _f1_pcc_pcc_measurements_power_meter1__i_beta;
    _f1_pcc_pcc_measurements_power_meter1__Qac = _f1_pcc_pcc_measurements_power_meter1__v_beta * _f1_pcc_pcc_measurements_power_meter1__i_alpha - _f1_pcc_pcc_measurements_power_meter1__v_alpha * _f1_pcc_pcc_measurements_power_meter1__i_beta;
    _f1_pcc_pcc_measurements_power_meter1__P0ac = _f1_pcc_pcc_measurements_power_meter1__v_zero * _f1_pcc_pcc_measurements_power_meter1__i_zero;
    _f1_pcc_pcc_measurements_power_meter1__filter_1_output = 0.08613019954354689 * (_f1_pcc_pcc_measurements_power_meter1__Pac + _f1_pcc_pcc_measurements_power_meter1__filter_1_input_k_minus_1) - (-0.8277396009129062) * _f1_pcc_pcc_measurements_power_meter1__filter_1_output_k_minus_1;
    _f1_pcc_pcc_measurements_power_meter1__filter_1_outputQ = 0.08613019954354689 * (_f1_pcc_pcc_measurements_power_meter1__Qac + _f1_pcc_pcc_measurements_power_meter1__filter_1_input_k_minus_1Q) - (-0.8277396009129062) * _f1_pcc_pcc_measurements_power_meter1__filter_1_output_k_minus_1Q;
    _f1_pcc_pcc_measurements_power_meter1__filter_1_outputP0 = 0.08613019954354689 * (_f1_pcc_pcc_measurements_power_meter1__P0ac + _f1_pcc_pcc_measurements_power_meter1__filter_1_input_k_minus_1P0) - (-0.8277396009129062) * _f1_pcc_pcc_measurements_power_meter1__filter_1_output_k_minus_1P0;
    _f1_pcc_pcc_measurements_power_meter1__filter_1_input_k_minus_1 = _f1_pcc_pcc_measurements_power_meter1__Pac;
    _f1_pcc_pcc_measurements_power_meter1__filter_1_output_k_minus_1 = _f1_pcc_pcc_measurements_power_meter1__filter_1_output;
    _f1_pcc_pcc_measurements_power_meter1__filter_1_input_k_minus_1Q = _f1_pcc_pcc_measurements_power_meter1__Qac;;
    _f1_pcc_pcc_measurements_power_meter1__filter_1_output_k_minus_1Q = _f1_pcc_pcc_measurements_power_meter1__filter_1_outputQ;
    _f1_pcc_pcc_measurements_power_meter1__filter_1_input_k_minus_1P0 = _f1_pcc_pcc_measurements_power_meter1__P0ac;
    _f1_pcc_pcc_measurements_power_meter1__filter_1_output_k_minus_1P0 = _f1_pcc_pcc_measurements_power_meter1__filter_1_outputP0;
    _f1_pcc_pcc_measurements_power_meter1__Pdc = _f1_pcc_pcc_measurements_power_meter1__filter_1_output;
    _f1_pcc_pcc_measurements_power_meter1__Qdc = _f1_pcc_pcc_measurements_power_meter1__filter_1_outputQ;
    _f1_pcc_pcc_measurements_power_meter1__P0dc = _f1_pcc_pcc_measurements_power_meter1__filter_1_outputP0;
    _f1_pcc_pcc_measurements_power_meter1__apparent = sqrt(pow(_f1_pcc_pcc_measurements_power_meter1__Pdc, 2) + pow(_f1_pcc_pcc_measurements_power_meter1__Qdc, 2));
    if (_f1_pcc_pcc_measurements_power_meter1__apparent > 0)
        _f1_pcc_pcc_measurements_power_meter1__k_factor = _f1_pcc_pcc_measurements_power_meter1__Pdc / _f1_pcc_pcc_measurements_power_meter1__apparent;
    else
        _f1_pcc_pcc_measurements_power_meter1__k_factor = 0;
    // Generated from the component: F1_PCC.PCC Measurements.RMS value1
    _f1_pcc_pcc_measurements_rms_value1__previous_filtered_value = _f1_pcc_pcc_measurements_rms_value1__filtered_value;
    _f1_pcc_pcc_measurements_rms_value1__filtered_value = _f1_pcc_pcc_measurements_rms_value1__previous_filtered_value * 0.1 + _f1_pcc_pcc_measurements_bus_split1__out * 0.9;
    if( (_f1_pcc_pcc_measurements_rms_value1__filtered_value >= 0.0) && (_f1_pcc_pcc_measurements_rms_value1__previous_filtered_value < 0.0) )
        _f1_pcc_pcc_measurements_rms_value1__zc = 1;
    else
        _f1_pcc_pcc_measurements_rms_value1__zc = 0;
    _f1_pcc_pcc_measurements_rms_value1__out = _f1_pcc_pcc_measurements_rms_value1__out_state;
    // Generated from the component: F1_PCC.PCC Measurements.Three phase PLL1.abc to dq.abc to alpha beta
    _f1_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_abc_to_alpha_beta__alpha = (2.0 * _f1_pcc_pcc_measurements_bus_split1__out - _f1_pcc_pcc_measurements_bus_split1__out1 - _f1_pcc_pcc_measurements_bus_split1__out2) * 0.3333333333333333;
    _f1_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_abc_to_alpha_beta__beta = (_f1_pcc_pcc_measurements_bus_split1__out1 - _f1_pcc_pcc_measurements_bus_split1__out2) * 0.5773502691896258;
    _f1_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_abc_to_alpha_beta__gamma = (_f1_pcc_pcc_measurements_bus_split1__out + _f1_pcc_pcc_measurements_bus_split1__out1 + _f1_pcc_pcc_measurements_bus_split1__out2) * 0.3333333333333333;
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
    // Generated from the component: Microturbine1.Governor.Exciter Activation.Abs1
    _microturbine1_governor_exciter_activation_abs1__out = fabs(_microturbine1_governor_exciter_activation_sum1__out);
    // Generated from the component: Microturbine1.Governor.Exciter Activation.speed difference
    HIL_OutAO(0x4028, (float)_microturbine1_governor_exciter_activation_sum1__out);
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
    // Generated from the component: Microturbine1.Governor.Sum2
    _microturbine1_governor_sum2__out = _microturbine1_governor_gain37__out - _microturbine1_governor_integrator1__out;
    // Generated from the component: Microturbine1.BE1-25A Synchronizer.w_G
    HIL_OutAO(0x401e, (float)_microturbine1_be1_25a_synchronizer_gain4__out);
    // Generated from the component: Microturbine1.CB_control.Sum10
    _microturbine1_cb_control_sum10__out =  - _microturbine1_cb_control_constant1__out + _microturbine1_cb_control_gain13__out;
    // Generated from the component: Microturbine1.Governor.Rate Transition2.Input
    _microturbine1_governor_rate_transition2_output__out = _microturbine1_gain18__out;
    // Generated from the component: F1_PCC.P
    HIL_OutAO(0x400f, (float)_f1_pcc_pcc_measurements_power_meter1__Pdc);
    // Generated from the component: F1_PCC.PCC Measurements.Comparator1
    if (_f1_pcc_pcc_measurements_power_meter1__Pdc < _f1_pcc_pcc_measurements_constant1__out) {
        _f1_pcc_pcc_measurements_comparator1__out = 0;
    } else if (_f1_pcc_pcc_measurements_power_meter1__Pdc > _f1_pcc_pcc_measurements_constant1__out) {
        _f1_pcc_pcc_measurements_comparator1__out = 1;
    } else {
        _f1_pcc_pcc_measurements_comparator1__out = _f1_pcc_pcc_measurements_comparator1__state;
    }
    // Generated from the component: F1_PCC.PCC Measurements.Comparator2
    if (_f1_pcc_pcc_measurements_power_meter1__k_factor < _f1_pcc_pcc_measurements_constant2__out) {
        _f1_pcc_pcc_measurements_comparator2__out = 0;
    } else if (_f1_pcc_pcc_measurements_power_meter1__k_factor > _f1_pcc_pcc_measurements_constant2__out) {
        _f1_pcc_pcc_measurements_comparator2__out = 1;
    } else {
        _f1_pcc_pcc_measurements_comparator2__out = _f1_pcc_pcc_measurements_comparator2__state;
    }
    // Generated from the component: F1_PCC.PCC Measurements.Termination6
    // Generated from the component: F1_PCC.PCC Measurements.Termination7
    // Generated from the component: F1_PCC.PCC Measurements.Termination8
    // Generated from the component: F1_PCC.Q
    HIL_OutAO(0x4010, (float)_f1_pcc_pcc_measurements_power_meter1__Qdc);
    // Generated from the component: F1_PCC.W -> kW
    _f1_pcc_w____kw__out = 0.001 * _f1_pcc_pcc_measurements_power_meter1__Pdc;
    // Generated from the component: F1_PCC.var -> kvar
    _f1_pcc_var____kvar__out = 0.001 * _f1_pcc_pcc_measurements_power_meter1__Qdc;
    // Generated from the component: F1_PCC.Gain3
    _f1_pcc_gain3__out = 100.0 * _f1_pcc_pcc_measurements_rms_value1__out;
    // Generated from the component: F1_PCC.PCC Measurements.Termination3
    // Generated from the component: F1_PCC.PCC Measurements.Three phase PLL1.abc to dq.alpha beta to dq
    _f1_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_alpha_beta_to_dq__k1 = cos(_f1_pcc_pcc_measurements_three_phase_pll1_unit_delay1__out);
    _f1_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_alpha_beta_to_dq__k2 = sin(_f1_pcc_pcc_measurements_three_phase_pll1_unit_delay1__out);
    _f1_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_alpha_beta_to_dq__d = _f1_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_alpha_beta_to_dq__k2 * _f1_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_abc_to_alpha_beta__alpha - _f1_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_alpha_beta_to_dq__k1 * _f1_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_abc_to_alpha_beta__beta;
    _f1_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_alpha_beta_to_dq__q = _f1_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_alpha_beta_to_dq__k1 * _f1_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_abc_to_alpha_beta__alpha + _f1_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_alpha_beta_to_dq__k2 * _f1_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_abc_to_alpha_beta__beta;
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
    // Generated from the component: Microturbine1.Governor.Exciter Activation.Comparator1
    if (_microturbine1_governor_exciter_activation_constant1__out < _microturbine1_governor_exciter_activation_abs1__out) {
        _microturbine1_governor_exciter_activation_comparator1__out = 0;
    } else if (_microturbine1_governor_exciter_activation_constant1__out > _microturbine1_governor_exciter_activation_abs1__out) {
        _microturbine1_governor_exciter_activation_comparator1__out = 1;
    } else {
        _microturbine1_governor_exciter_activation_comparator1__out = _microturbine1_governor_exciter_activation_comparator1__state;
    }
    // Generated from the component: Microturbine1.Governor.frequency_diff
    HIL_OutAO(0x402a, (float)_microturbine1_governor_rate_limiter2__out);
    // Generated from the component: Microturbine1.Governor.Gain29
    _microturbine1_governor_gain29__out = 0.1 * _microturbine1_governor_sum2__out;
    // Generated from the component: Microturbine1.CB_control.Abs7
    _microturbine1_cb_control_abs7__out = fabs(_microturbine1_cb_control_sum10__out);
    // Generated from the component: F1_PCC.Gain1
    _f1_pcc_gain1__out = 10.0 * _f1_pcc_w____kw__out;
    // Generated from the component: F1_PCC.Gain2
    _f1_pcc_gain2__out = 10.0 * _f1_pcc_var____kvar__out;
    // Generated from the component: F1_PCC.PCC Measurements.Three phase PLL1.abc to dq.LPF_d
    _f1_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_d__a_sum = 0.0f;
    _f1_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_d__b_sum = 0.0f;
    _f1_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_d__delay_line_in = 0.0f;
    for (_f1_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_d__i = 0; _f1_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_d__i < 1; _f1_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_d__i++) {
        _f1_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_d__b_sum += _f1_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_d__b_coeff[_f1_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_d__i + 1] * _f1_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_d__states[_f1_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_d__i];
    }
    _f1_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_d__a_sum += _f1_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_d__states[0] * _f1_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_d__a_coeff[1];
    _f1_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_d__delay_line_in = (_f1_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_alpha_beta_to_dq__d - _f1_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_d__a_sum) / _f1_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_d__a_coeff[0];
    _f1_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_d__b_sum += _f1_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_d__b_coeff[0] * _f1_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_d__delay_line_in;
    _f1_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_d__out = _f1_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_d__b_sum;
    // Generated from the component: F1_PCC.PCC Measurements.Three phase PLL1.abc to dq.LPF_q
    _f1_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_q__a_sum = 0.0f;
    _f1_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_q__b_sum = 0.0f;
    _f1_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_q__delay_line_in = 0.0f;
    for (_f1_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_q__i = 0; _f1_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_q__i < 1; _f1_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_q__i++) {
        _f1_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_q__b_sum += _f1_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_q__b_coeff[_f1_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_q__i + 1] * _f1_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_q__states[_f1_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_q__i];
    }
    _f1_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_q__a_sum += _f1_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_q__states[0] * _f1_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_q__a_coeff[1];
    _f1_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_q__delay_line_in = (_f1_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_alpha_beta_to_dq__q - _f1_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_q__a_sum) / _f1_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_q__a_coeff[0];
    _f1_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_q__b_sum += _f1_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_q__b_coeff[0] * _f1_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_q__delay_line_in;
    _f1_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_q__out = _f1_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_q__b_sum;
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
    HIL_OutAO(0x4027, (float)_microturbine1_exciter_rate_limit__out);
    // Generated from the component: Microturbine1.Governor.Exciter Activation.Activate Exciter
    _microturbine1_governor_exciter_activation_activate_exciter__boolean = _microturbine1_governor_exciter_activation_comparator1__out;
    if (_microturbine1_governor_exciter_activation_activate_exciter__boolean == 1) {
        _microturbine1_governor_exciter_activation_activate_exciter__Activate = 1;
    }
    // Generated from the component: Microturbine1.Governor.Sum10
    _microturbine1_governor_sum10__out = _microturbine1_governor_gain29__out + _microturbine1_governor_rate_limiter2__out;
    // Generated from the component: Microturbine1.CB_control.Relational operator6
    _microturbine1_cb_control_relational_operator6__out = (_microturbine1_cb_control_constant11__out > _microturbine1_cb_control_abs7__out) ? 1 : 0;
    // Generated from the component: F1_PCC.Bus Join1
    _f1_pcc_bus_join1__out[0] = _f1_pcc_gain1__out;
    _f1_pcc_bus_join1__out[1] = _f1_pcc_gain2__out;
    _f1_pcc_bus_join1__out[2] = _f1_pcc_gain3__out;
    _f1_pcc_bus_join1__out[3] = _f1_pcc_gain4__out;
    _f1_pcc_bus_join1__out[4] = _f1_pcc_data_type_conversion1__out;
    _f1_pcc_bus_join1__out[5] = _f1_pcc_pcc_measurements_power_meter1__k_factor;
    _f1_pcc_bus_join1__out[6] = _f1_pcc_pcc_measurements_comparator1__out;
    _f1_pcc_bus_join1__out[7] = _f1_pcc_pcc_measurements_comparator2__out;
    // Generated from the component: F1_PCC.PCC Measurements.Termination1
    // Generated from the component: F1_PCC.PCC Measurements.Termination2
    // Generated from the component: F1_PCC.PCC Measurements.Three phase PLL1.normalize
    _f1_pcc_pcc_measurements_three_phase_pll1_normalize__in1 = _f1_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_d__out;
    _f1_pcc_pcc_measurements_three_phase_pll1_normalize__in2 = _f1_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_q__out;
    _f1_pcc_pcc_measurements_three_phase_pll1_normalize__pk = (powf(_f1_pcc_pcc_measurements_three_phase_pll1_normalize__in1, 2.0) + powf(_f1_pcc_pcc_measurements_three_phase_pll1_normalize__in2, 2.0));
    _f1_pcc_pcc_measurements_three_phase_pll1_normalize__pk = sqrt(_f1_pcc_pcc_measurements_three_phase_pll1_normalize__pk);
    if (_f1_pcc_pcc_measurements_three_phase_pll1_normalize__pk < 0.1) {
        _f1_pcc_pcc_measurements_three_phase_pll1_normalize__in2_pu = _f1_pcc_pcc_measurements_three_phase_pll1_normalize__in2 / 0.1;
    }
    else {
        _f1_pcc_pcc_measurements_three_phase_pll1_normalize__in2_pu = _f1_pcc_pcc_measurements_three_phase_pll1_normalize__in2 / _f1_pcc_pcc_measurements_three_phase_pll1_normalize__pk;
    }
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
    // Generated from the component: Microturbine1.Governor.Rate Transition3.Input
    _microturbine1_governor_rate_transition3_output__out = _microturbine1_governor_exciter_activation_activate_exciter__Activate;
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
    // Generated from the component: F1_PCC.Termination1
    // Generated from the component: F1_PCC.PCC Measurements.Three phase PLL1.PID.Kd
    _f1_pcc_pcc_measurements_three_phase_pll1_pid_kd__out = 1.0 * _f1_pcc_pcc_measurements_three_phase_pll1_normalize__in2_pu;
    // Generated from the component: F1_PCC.PCC Measurements.Three phase PLL1.PID.Ki
    _f1_pcc_pcc_measurements_three_phase_pll1_pid_ki__out = 3200.0 * _f1_pcc_pcc_measurements_three_phase_pll1_normalize__in2_pu;
    // Generated from the component: F1_PCC.PCC Measurements.Three phase PLL1.PID.Kp
    _f1_pcc_pcc_measurements_three_phase_pll1_pid_kp__out = 100.0 * _f1_pcc_pcc_measurements_three_phase_pll1_normalize__in2_pu;
    // Generated from the component: F1_PCC.PCC Measurements.Three phase PLL1.term_pk
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
    HIL_OutAO(0x4013, (float)_microturbine1_be1_25a_synchronizer_gain5__out);
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
    HIL_OutAO(0x4014, (float)_microturbine1_be1_25a_synchronizer_gain6__out);
    // Generated from the component: Microturbine1.Exciter.PI.Sum7
    _microturbine1_exciter_pi_sum7__out = _microturbine1_exciter_pi_ki__out + _microturbine1_exciter_pi_kb__out;
    // Generated from the component: Microturbine1.Exciter.Gain6
    _microturbine1_exciter_gain6__out = 500.0 * _microturbine1_exciter_sum3__out;
    // Generated from the component: Microturbine1.Governor.Gain38
    _microturbine1_governor_gain38__out = 0.75 * _microturbine1_governor_discrete_transfer_function1__out;
    // Generated from the component: F1_PCC.PCC Measurements.Three phase PLL1.PID.Sum8
    _f1_pcc_pcc_measurements_three_phase_pll1_pid_sum8__out = _f1_pcc_pcc_measurements_three_phase_pll1_pid_kd__out - _f1_pcc_pcc_measurements_three_phase_pll1_pid_integrator2__out;
    // Generated from the component: Microturbine1.BE1-25A Synchronizer.E_d
    HIL_OutAO(0x4011, (float)_microturbine1_be1_25a_synchronizer_gain7__out);
    // Generated from the component: Microturbine1.BE1-25A Synchronizer.Limit1
    if (_microturbine1_be1_25a_synchronizer_gain7__out < 1e-12) {
        _microturbine1_be1_25a_synchronizer_limit1__out = 1e-12;
    } else {
        _microturbine1_be1_25a_synchronizer_limit1__out = _microturbine1_be1_25a_synchronizer_gain7__out;
    }
    // Generated from the component: Microturbine1.BE1-25A Synchronizer.magnitude.Product6
    _microturbine1_be1_25a_synchronizer_magnitude_product6__out = (_microturbine1_be1_25a_synchronizer_gain7__out * _microturbine1_be1_25a_synchronizer_gain7__out);
    // Generated from the component: Microturbine1.BE1-25A Synchronizer.E_q
    HIL_OutAO(0x4012, (float)_microturbine1_be1_25a_synchronizer_gain12__out);
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
    HIL_OutAO(0x4019, (float)_microturbine1_be1_25a_synchronizer_pll_pid_controller1__out);
    // Generated from the component: Microturbine1.BE1-25A Synchronizer.Sum5
    _microturbine1_be1_25a_synchronizer_sum5__out = _microturbine1_be1_25a_synchronizer_product3__out + _microturbine1_be1_25a_synchronizer_product4__out;
    // Generated from the component: Microturbine1.Governor.Gain39
    _microturbine1_governor_gain39__out = 10.0 * _microturbine1_governor_gain38__out;
    // Generated from the component: F1_PCC.PCC Measurements.Three phase PLL1.PID.Gain1
    _f1_pcc_pcc_measurements_three_phase_pll1_pid_gain1__out = 714.2857 * _f1_pcc_pcc_measurements_three_phase_pll1_pid_sum8__out;
    // Generated from the component: Microturbine1.BE1-25A Synchronizer.Trigonometric function1
    _microturbine1_be1_25a_synchronizer_trigonometric_function1__out = atan2(_microturbine1_be1_25a_synchronizer_gain12__out, _microturbine1_be1_25a_synchronizer_limit1__out);
    // Generated from the component: Microturbine1.BE1-25A Synchronizer.magnitude.Sum3
    _microturbine1_be1_25a_synchronizer_magnitude_sum3__out = _microturbine1_be1_25a_synchronizer_magnitude_product5__out + _microturbine1_be1_25a_synchronizer_magnitude_product6__out;
    // Generated from the component: Microturbine1.BE1-25A Synchronizer.Gain16
    _microturbine1_be1_25a_synchronizer_gain16__out = 57.29577951308232 * _microturbine1_be1_25a_synchronizer_trigonometric_function2__out;
    // Generated from the component: Microturbine1.BE1-25A Synchronizer.Sum2
    _microturbine1_be1_25a_synchronizer_sum2__out =  - _microturbine1_be1_25a_synchronizer_gain4__out + _microturbine1_be1_25a_synchronizer_gain13__out;
    // Generated from the component: Microturbine1.BE1-25A Synchronizer.w_bus
    HIL_OutAO(0x401f, (float)_microturbine1_be1_25a_synchronizer_gain13__out);
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
    // Generated from the component: F1_PCC.PCC Measurements.Three phase PLL1.PID.Sum5
    _f1_pcc_pcc_measurements_three_phase_pll1_pid_sum5__out = _f1_pcc_pcc_measurements_three_phase_pll1_pid_kp__out + _f1_pcc_pcc_measurements_three_phase_pll1_pid_gain1__out + _f1_pcc_pcc_measurements_three_phase_pll1_pid_integrator1__out;
    // Generated from the component: Microturbine1.BE1-25A Synchronizer.Gain17
    _microturbine1_be1_25a_synchronizer_gain17__out = 57.29577951308232 * _microturbine1_be1_25a_synchronizer_trigonometric_function1__out;
    // Generated from the component: Microturbine1.BE1-25A Synchronizer.Sum1
    _microturbine1_be1_25a_synchronizer_sum1__out =  - _microturbine1_be1_25a_synchronizer_trigonometric_function1__out + _microturbine1_be1_25a_synchronizer_trigonometric_function2__out;
    // Generated from the component: Microturbine1.BE1-25A Synchronizer.magnitude.Mathematical function1
    _microturbine1_be1_25a_synchronizer_magnitude_mathematical_function1__out = sqrt(_microturbine1_be1_25a_synchronizer_magnitude_sum3__out);
    // Generated from the component: Microturbine1.BE1-25A Synchronizer.theta_V
    HIL_OutAO(0x401c, (float)_microturbine1_be1_25a_synchronizer_gain16__out);
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
    HIL_OutAO(0x4018, (float)_microturbine1_be1_25a_synchronizer_sum2__out);
    // Generated from the component: Microturbine1.BE1-25A Synchronizer.|V|
    HIL_OutAO(0x4022, (float)_microturbine1_be1_25a_synchronizer_mathematical_function2__out);
    // Generated from the component: Microturbine1.CB_control.Hold after connect2
    _microturbine1_cb_control_hold_after_connect2__in1 = _microturbine1_be1_25a_synchronizer_mathematical_function2__out;
    _microturbine1_cb_control_hold_after_connect2__in2 = _microturbine1_be1_25a_synchronizer_gain13__out;
    _microturbine1_cb_control_hold_after_connect2__out = _microturbine1_cb_control_hold_after_connect2__var;
    // Generated from the component: F1_PCC.PCC Measurements.Three phase PLL1.PID.Limit1
    if (_f1_pcc_pcc_measurements_three_phase_pll1_pid_sum5__out > 10000.0) {
        _f1_pcc_pcc_measurements_three_phase_pll1_pid_limit1__out = 10000.0;
    } else if (_f1_pcc_pcc_measurements_three_phase_pll1_pid_sum5__out < -10000.0) {
        _f1_pcc_pcc_measurements_three_phase_pll1_pid_limit1__out = -10000.0;
    } else {
        _f1_pcc_pcc_measurements_three_phase_pll1_pid_limit1__out = _f1_pcc_pcc_measurements_three_phase_pll1_pid_sum5__out;
    }
    // Generated from the component: Microturbine1.BE1-25A Synchronizer.theta_E
    HIL_OutAO(0x401b, (float)_microturbine1_be1_25a_synchronizer_gain17__out);
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
    HIL_OutAO(0x4021, (float)_microturbine1_be1_25a_synchronizer_magnitude_mathematical_function1__out);
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
    // Generated from the component: F1_PCC.PCC Measurements.Three phase PLL1.PID.Sum6
    _f1_pcc_pcc_measurements_three_phase_pll1_pid_sum6__out =  - _f1_pcc_pcc_measurements_three_phase_pll1_pid_sum5__out + _f1_pcc_pcc_measurements_three_phase_pll1_pid_limit1__out;
    // Generated from the component: F1_PCC.PCC Measurements.Three phase PLL1.Rate Limiter1
    if (_f1_pcc_pcc_measurements_three_phase_pll1_rate_limiter1__first_step) {
        _f1_pcc_pcc_measurements_three_phase_pll1_rate_limiter1__out = _f1_pcc_pcc_measurements_three_phase_pll1_pid_limit1__out;
    } else {
        _f1_pcc_pcc_measurements_three_phase_pll1_rate_limiter1__out = _f1_pcc_pcc_measurements_three_phase_pll1_pid_limit1__out;
        _f1_pcc_pcc_measurements_three_phase_pll1_rate_limiter1__in_rate = _f1_pcc_pcc_measurements_three_phase_pll1_pid_limit1__out - _f1_pcc_pcc_measurements_three_phase_pll1_rate_limiter1__prev_out;
        if (_f1_pcc_pcc_measurements_three_phase_pll1_rate_limiter1__in_rate > 0.07539822368615504) {
            _f1_pcc_pcc_measurements_three_phase_pll1_rate_limiter1__out = _f1_pcc_pcc_measurements_three_phase_pll1_rate_limiter1__prev_out + (0.07539822368615504);
        }
        if (_f1_pcc_pcc_measurements_three_phase_pll1_rate_limiter1__in_rate < -0.07539822368615504) {
            _f1_pcc_pcc_measurements_three_phase_pll1_rate_limiter1__out = _f1_pcc_pcc_measurements_three_phase_pll1_rate_limiter1__prev_out + (-0.07539822368615504);
        }
    }
    // Generated from the component: F1_PCC.PCC Measurements.Three phase PLL1.integrator
    _f1_pcc_pcc_measurements_three_phase_pll1_integrator__in = _f1_pcc_pcc_measurements_three_phase_pll1_pid_limit1__out;
    _f1_pcc_pcc_measurements_three_phase_pll1_integrator__out += 0.001 * _f1_pcc_pcc_measurements_three_phase_pll1_integrator__in;
    if (_f1_pcc_pcc_measurements_three_phase_pll1_integrator__in >= 0.0) {
        if (_f1_pcc_pcc_measurements_three_phase_pll1_integrator__out >= 6.283185307179586) {
            _f1_pcc_pcc_measurements_three_phase_pll1_integrator__out -= 6.283185307179586;
        }
    }
    else {
        if (_f1_pcc_pcc_measurements_three_phase_pll1_integrator__out <= -6.283185307179586) {
            _f1_pcc_pcc_measurements_three_phase_pll1_integrator__out += 6.283185307179586;
        }
    }
    // Generated from the component: Microturbine1.BE1-25A Synchronizer.Abs4
    _microturbine1_be1_25a_synchronizer_abs4__out = fabs(_microturbine1_be1_25a_synchronizer_confine_phase__out);
    // Generated from the component: Microturbine1.BE1-25A Synchronizer.angle_diff3
    HIL_OutAO(0x4015, (float)_microturbine1_be1_25a_synchronizer_confine_phase__out);
    // Generated from the component: Microturbine1.BE1-25A Synchronizer.|E|
    HIL_OutAO(0x4020, (float)_microturbine1_be1_25a_synchronizer_gain18__out);
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
    HIL_OutAO(0x401d, (float)_microturbine1_be1_25a_synchronizer_sum3__out);
    // Generated from the component: Microturbine1.CB_control.Abs6
    _microturbine1_cb_control_abs6__out = fabs(_microturbine1_cb_control_sum9__out);
    // Generated from the component: Microturbine1.|V|
    HIL_OutAO(0x4038, (float)_microturbine1_gain17__out);
    // Generated from the component: Microturbine1.BE1-25A Synchronizer.Digital Probe4
    HIL_OutInt32(0xf00402, _microturbine1_be1_25a_synchronizer_relational_operator2__out != 0x0);
    // Generated from the component: Microturbine1.CB_control.Logical operator11
    _microturbine1_cb_control_logical_operator11__out = _microturbine1_cb_control_logical_operator10__out && _microturbine1_cb_control_logical_operator9__out ;
    // Generated from the component: Microturbine1.CB_control.Grid_Islanded ON
    HIL_OutInt32(0xf00408, _microturbine1_cb_control_logical_operator7__out != 0x0);
    // Generated from the component: Microturbine1.CB_control.Logical operator5
    _microturbine1_cb_control_logical_operator5__out = !_microturbine1_cb_control_logical_operator7__out;
    // Generated from the component: F1_PCC.PCC Measurements.Three phase PLL1.PID.Kb
    _f1_pcc_pcc_measurements_three_phase_pll1_pid_kb__out = 1.0 * _f1_pcc_pcc_measurements_three_phase_pll1_pid_sum6__out;
    // Generated from the component: F1_PCC.PCC Measurements.Three phase PLL1.LPF.LPF
    _f1_pcc_pcc_measurements_three_phase_pll1_lpf_lpf__a_sum = 0.0f;
    _f1_pcc_pcc_measurements_three_phase_pll1_lpf_lpf__b_sum = 0.0f;
    _f1_pcc_pcc_measurements_three_phase_pll1_lpf_lpf__delay_line_in = 0.0f;
    for (_f1_pcc_pcc_measurements_three_phase_pll1_lpf_lpf__i = 0; _f1_pcc_pcc_measurements_three_phase_pll1_lpf_lpf__i < 1; _f1_pcc_pcc_measurements_three_phase_pll1_lpf_lpf__i++) {
        _f1_pcc_pcc_measurements_three_phase_pll1_lpf_lpf__b_sum += _f1_pcc_pcc_measurements_three_phase_pll1_lpf_lpf__b_coeff[_f1_pcc_pcc_measurements_three_phase_pll1_lpf_lpf__i] * _f1_pcc_pcc_measurements_three_phase_pll1_lpf_lpf__states[_f1_pcc_pcc_measurements_three_phase_pll1_lpf_lpf__i + 1];
    }
    for (_f1_pcc_pcc_measurements_three_phase_pll1_lpf_lpf__i = 1; _f1_pcc_pcc_measurements_three_phase_pll1_lpf_lpf__i > 0; _f1_pcc_pcc_measurements_three_phase_pll1_lpf_lpf__i--) {
        _f1_pcc_pcc_measurements_three_phase_pll1_lpf_lpf__a_sum += _f1_pcc_pcc_measurements_three_phase_pll1_lpf_lpf__a_coeff[_f1_pcc_pcc_measurements_three_phase_pll1_lpf_lpf__i + 1] * _f1_pcc_pcc_measurements_three_phase_pll1_lpf_lpf__states[_f1_pcc_pcc_measurements_three_phase_pll1_lpf_lpf__i];
    }
    _f1_pcc_pcc_measurements_three_phase_pll1_lpf_lpf__a_sum += _f1_pcc_pcc_measurements_three_phase_pll1_lpf_lpf__states[0] * _f1_pcc_pcc_measurements_three_phase_pll1_lpf_lpf__a_coeff[1];
    _f1_pcc_pcc_measurements_three_phase_pll1_lpf_lpf__delay_line_in = _f1_pcc_pcc_measurements_three_phase_pll1_rate_limiter1__out - _f1_pcc_pcc_measurements_three_phase_pll1_lpf_lpf__a_sum;
    _f1_pcc_pcc_measurements_three_phase_pll1_lpf_lpf__out = _f1_pcc_pcc_measurements_three_phase_pll1_lpf_lpf__b_sum;
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
    // Generated from the component: F1_PCC.PCC Measurements.Three phase PLL1.PID.Sum7
    _f1_pcc_pcc_measurements_three_phase_pll1_pid_sum7__out = _f1_pcc_pcc_measurements_three_phase_pll1_pid_ki__out + _f1_pcc_pcc_measurements_three_phase_pll1_pid_kb__out;
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
    HIL_OutAO(0x4017, (float)_microturbine1_be1_25a_synchronizer_hold_after_connect__out);
    // Generated from the component: Microturbine1.BE1-25A Synchronizer.Sum10
    _microturbine1_be1_25a_synchronizer_sum10__out = _microturbine1_be1_25a_synchronizer_mathematical_function2__out + _microturbine1_be1_25a_synchronizer_hold_after_connect1__out;
    // Generated from the component: Microturbine1.BE1-25A Synchronizer.del_V
    HIL_OutAO(0x4016, (float)_microturbine1_be1_25a_synchronizer_hold_after_connect1__out);
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
    // Generated from the component: F1_PCC.PCC Measurements.Three phase PLL1.PID.Integrator1
    _f1_pcc_pcc_measurements_three_phase_pll1_pid_integrator1__state += _f1_pcc_pcc_measurements_three_phase_pll1_pid_sum7__out * 0.001;
    // Generated from the component: F1_PCC.PCC Measurements.Three phase PLL1.PID.Integrator2
    _f1_pcc_pcc_measurements_three_phase_pll1_pid_integrator2__state += _f1_pcc_pcc_measurements_three_phase_pll1_pid_gain1__out * 0.001;
    // Generated from the component: F1_PCC.PCC Measurements.Three phase PLL1.Unit Delay1
    _f1_pcc_pcc_measurements_three_phase_pll1_unit_delay1__state = _f1_pcc_pcc_measurements_three_phase_pll1_integrator__out;
    // Generated from the component: F1_PCC.SR Flip Flop1
    if ((_f1_pcc_digital_input_close__out != 0x0) && (_f1_pcc_digital_input_trip__out == 0x0))
        _f1_pcc_sr_flip_flop1__state = 1;
    else if ((_f1_pcc_digital_input_close__out == 0x0) && (_f1_pcc_digital_input_trip__out != 0x0))
        _f1_pcc_sr_flip_flop1__state = 0;
    else if ((_f1_pcc_digital_input_close__out != 0x0) && (_f1_pcc_digital_input_trip__out != 0x0))
        _f1_pcc_sr_flip_flop1__state = -1;
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
    // Generated from the component: F1_PCC.PCC Measurements.RMS value1
    if( _f1_pcc_pcc_measurements_rms_value1__zc ) {
        if (_f1_pcc_pcc_measurements_bus_split1__out != _f1_pcc_pcc_measurements_rms_value1__previous_value)
            _f1_pcc_pcc_measurements_rms_value1__correction = - _f1_pcc_pcc_measurements_rms_value1__previous_value / (_f1_pcc_pcc_measurements_bus_split1__out - _f1_pcc_pcc_measurements_rms_value1__previous_value);
        if (_f1_pcc_pcc_measurements_rms_value1__correction < 0)
            _f1_pcc_pcc_measurements_rms_value1__correction = 0;
        else
            _f1_pcc_pcc_measurements_rms_value1__correction = 0;
        _f1_pcc_pcc_measurements_rms_value1__sample_cnt += _f1_pcc_pcc_measurements_rms_value1__correction - _f1_pcc_pcc_measurements_rms_value1__previous_correction;
        _f1_pcc_pcc_measurements_rms_value1__out_state = sqrt(_f1_pcc_pcc_measurements_rms_value1__square_sum / _f1_pcc_pcc_measurements_rms_value1__sample_cnt);
        _f1_pcc_pcc_measurements_rms_value1__sample_cnt = 0;
        _f1_pcc_pcc_measurements_rms_value1__previous_correction = _f1_pcc_pcc_measurements_rms_value1__correction;
        _f1_pcc_pcc_measurements_rms_value1__square_sum = 0;
    } else if ( _f1_pcc_pcc_measurements_rms_value1__sample_cnt >= 500 ) {
        _f1_pcc_pcc_measurements_rms_value1__out_state = sqrt(_f1_pcc_pcc_measurements_rms_value1__square_sum / _f1_pcc_pcc_measurements_rms_value1__sample_cnt);
        _f1_pcc_pcc_measurements_rms_value1__sample_cnt = 0;
        _f1_pcc_pcc_measurements_rms_value1__square_sum = 0;
    }
    _f1_pcc_pcc_measurements_rms_value1__previous_value = _f1_pcc_pcc_measurements_bus_split1__out;
    _f1_pcc_pcc_measurements_rms_value1__square_sum += _f1_pcc_pcc_measurements_bus_split1__out * _f1_pcc_pcc_measurements_bus_split1__out;
    _f1_pcc_pcc_measurements_rms_value1__sample_cnt ++;
    // Generated from the component: Microturbine1.Governor.Rate Limiter2
    _microturbine1_governor_rate_limiter2__prev_out = _microturbine1_governor_rate_limiter2__out;
    _microturbine1_governor_rate_limiter2__first_step = 0;
    // Generated from the component: F1_PCC.PCC Measurements.Comparator1
    if (_f1_pcc_pcc_measurements_power_meter1__Pdc < _f1_pcc_pcc_measurements_constant1__out) {
        _f1_pcc_pcc_measurements_comparator1__state = 0;
    } else if (_f1_pcc_pcc_measurements_power_meter1__Pdc > _f1_pcc_pcc_measurements_constant1__out) {
        _f1_pcc_pcc_measurements_comparator1__state = 1;
    }
    // Generated from the component: F1_PCC.PCC Measurements.Comparator2
    if (_f1_pcc_pcc_measurements_power_meter1__k_factor < _f1_pcc_pcc_measurements_constant2__out) {
        _f1_pcc_pcc_measurements_comparator2__state = 0;
    } else if (_f1_pcc_pcc_measurements_power_meter1__k_factor > _f1_pcc_pcc_measurements_constant2__out) {
        _f1_pcc_pcc_measurements_comparator2__state = 1;
    }
    // Generated from the component: Microturbine1.Exciter.Rate Limit
    _microturbine1_exciter_rate_limit__prev_out = _microturbine1_exciter_rate_limit__out;
    _microturbine1_exciter_rate_limit__first_step = 0;
    // Generated from the component: Microturbine1.Governor.Exciter Activation.Comparator1
    if (_microturbine1_governor_exciter_activation_constant1__out < _microturbine1_governor_exciter_activation_abs1__out) {
        _microturbine1_governor_exciter_activation_comparator1__state = 0;
    } else if (_microturbine1_governor_exciter_activation_constant1__out > _microturbine1_governor_exciter_activation_abs1__out) {
        _microturbine1_governor_exciter_activation_comparator1__state = 1;
    }
    // Generated from the component: F1_PCC.PCC Measurements.Three phase PLL1.abc to dq.LPF_d
    _f1_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_d__states[0] = _f1_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_d__delay_line_in;
    // Generated from the component: F1_PCC.PCC Measurements.Three phase PLL1.abc to dq.LPF_q
    _f1_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_q__states[0] = _f1_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_q__delay_line_in;
    // Generated from the component: Microturbine1.Governor.Exciter Activation.Activate Exciter
    // Generated from the component: F1_PCC.PCC Measurements.Three phase PLL1.normalize
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
    // Generated from the component: F1_PCC.PCC Measurements.Three phase PLL1.Rate Limiter1
    _f1_pcc_pcc_measurements_three_phase_pll1_rate_limiter1__prev_out = _f1_pcc_pcc_measurements_three_phase_pll1_rate_limiter1__out;
    _f1_pcc_pcc_measurements_three_phase_pll1_rate_limiter1__first_step = 0;
    // Generated from the component: F1_PCC.PCC Measurements.Three phase PLL1.integrator
    // Generated from the component: Microturbine1.BE1-25A Synchronizer.BE1-25A Synchronizer1
    // Generated from the component: F1_PCC.PCC Measurements.Three phase PLL1.LPF.LPF
    for (_f1_pcc_pcc_measurements_three_phase_pll1_lpf_lpf__i = 1; _f1_pcc_pcc_measurements_three_phase_pll1_lpf_lpf__i > 0; _f1_pcc_pcc_measurements_three_phase_pll1_lpf_lpf__i--) {
        _f1_pcc_pcc_measurements_three_phase_pll1_lpf_lpf__states[_f1_pcc_pcc_measurements_three_phase_pll1_lpf_lpf__i] = _f1_pcc_pcc_measurements_three_phase_pll1_lpf_lpf__states[_f1_pcc_pcc_measurements_three_phase_pll1_lpf_lpf__i - 1];
    }
    _f1_pcc_pcc_measurements_three_phase_pll1_lpf_lpf__states[0] = _f1_pcc_pcc_measurements_three_phase_pll1_lpf_lpf__delay_line_in;
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