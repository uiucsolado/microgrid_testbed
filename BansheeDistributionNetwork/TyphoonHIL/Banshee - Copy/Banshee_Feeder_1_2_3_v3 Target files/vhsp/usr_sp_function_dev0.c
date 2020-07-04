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




































































































































//@cmp.def.end


//-----------------------------------------------------------------------------------------
// generated using template: common_variables.template-------------------------------------
// true global variables


//@cmp.var.start
// variables
// Generated from the component Root/F1_PCC/Digital Input Close
X_UnInt32 _f1_pcc_digital_input_close__out;// Generated from the component Root/F1_PCC/Digital Input Trip
X_UnInt32 _f1_pcc_digital_input_trip__out;
float _f1_pcc_meas1_ia_ia1__out;
float _f1_pcc_meas1_ib_ia1__out;
float _f1_pcc_meas1_ic_ia1__out;
float _f1_pcc_meas1_va_va1__out;
float _f1_pcc_meas1_vb_va1__out;
float _f1_pcc_meas1_vc_va1__out;
float _f1_pcc_meas2_va_va1__out;
float _f1_pcc_meas2_vb_va1__out;
float _f1_pcc_meas2_vc_va1__out;
float _f1_pcc_pcc_measurements_constant1__out = 1.0;
float _f1_pcc_pcc_measurements_constant2__out = 1.0;
float _f1_pcc_pcc_measurements_three_phase_pll1_pid_integrator1__out;
float _f1_pcc_pcc_measurements_three_phase_pll1_pid_integrator2__out;
float _f1_pcc_pcc_measurements_three_phase_pll1_unit_delay1__out;
float _f1_pcc_pcc_measurements_three_phase_pll1_to_hz__out;
X_UnInt32 _f1_pcc_sr_flip_flop1__out;
X_UnInt32 _f1_pcc_sr_flip_flop1__out_n;
// Generated from the component Root/F2_PCC/Digital Input Close
X_UnInt32 _f2_pcc_digital_input_close__out;// Generated from the component Root/F2_PCC/Digital Input Trip
X_UnInt32 _f2_pcc_digital_input_trip__out;
float _f2_pcc_meas1_ia_ia1__out;
float _f2_pcc_meas1_ib_ia1__out;
float _f2_pcc_meas1_ic_ia1__out;
float _f2_pcc_meas1_va_va1__out;
float _f2_pcc_meas1_vb_va1__out;
float _f2_pcc_meas1_vc_va1__out;
float _f2_pcc_meas2_va_va1__out;
float _f2_pcc_meas2_vb_va1__out;
float _f2_pcc_meas2_vc_va1__out;
float _f2_pcc_pcc_measurements_constant1__out = 1.0;
float _f2_pcc_pcc_measurements_constant2__out = 1.0;
float _f2_pcc_pcc_measurements_three_phase_pll1_pid_integrator1__out;
float _f2_pcc_pcc_measurements_three_phase_pll1_pid_integrator2__out;
float _f2_pcc_pcc_measurements_three_phase_pll1_unit_delay1__out;
float _f2_pcc_pcc_measurements_three_phase_pll1_to_hz__out;
X_UnInt32 _f2_pcc_sr_flip_flop1__out;
X_UnInt32 _f2_pcc_sr_flip_flop1__out_n;
// Generated from the component Root/F3_PCC/Digital Input Close2
X_UnInt32 _f3_pcc_digital_input_close2__out;// Generated from the component Root/F3_PCC/Digital Input Trip2
X_UnInt32 _f3_pcc_digital_input_trip2__out;
float _f3_pcc_meas1_ia_ia1__out;
float _f3_pcc_meas1_ib_ia1__out;
float _f3_pcc_meas1_ic_ia1__out;
float _f3_pcc_meas1_va_va1__out;
float _f3_pcc_meas1_vb_va1__out;
float _f3_pcc_meas1_vc_va1__out;
float _f3_pcc_meas2_va_va1__out;
float _f3_pcc_meas2_vb_va1__out;
float _f3_pcc_meas2_vc_va1__out;
float _f3_pcc_pcc_measurements_constant1__out = 1.0;
float _f3_pcc_pcc_measurements_constant2__out = 1.0;
float _f3_pcc_pcc_measurements_three_phase_pll1_pid_integrator1__out;
float _f3_pcc_pcc_measurements_three_phase_pll1_pid_integrator2__out;
float _f3_pcc_pcc_measurements_three_phase_pll1_unit_delay1__out;
float _f3_pcc_pcc_measurements_three_phase_pll1_to_hz__out;
X_UnInt32 _f3_pcc_sr_flip_flop3__out;
X_UnInt32 _f3_pcc_sr_flip_flop3__out_n;
float _udp_send_dms__out[4];
float _f1_pcc_meas1_bus_join2__out[3];
float _f1_pcc_meas1_bus_join1__out[3];
float _f1_pcc_meas2_bus_join1__out[3];
float _f1_pcc_pcc_measurements_three_phase_pll1_sin__out;
float _f1_pcc_gain4__out;
float _f1_pcc_data_type_conversion1__out;
X_Int32 _udp_send_boolean_split1__out[15];
X_UnInt32 _udp_send_boolean_split1__input;
X_Int32 _udp_send_data_type_conversion9__out;
X_Int32 _udp_send_data_type_conversion17__out;
X_Int32 _udp_send_data_type_conversion18__out;
float _f2_pcc_meas1_bus_join2__out[3];
float _f2_pcc_meas1_bus_join1__out[3];
float _f2_pcc_meas2_bus_join1__out[3];
float _f2_pcc_pcc_measurements_three_phase_pll1_sin__out;
float _f2_pcc_gain4__out;
float _f2_pcc_data_type_conversion1__out;
X_Int32 _udp_send_boolean_split3__out[3];
X_UnInt32 _udp_send_boolean_split3__input;
X_Int32 _udp_send_data_type_conversion6__out;
X_Int32 _udp_send_data_type_conversion10__out;
X_Int32 _udp_send_boolean_split2__out[16];
X_UnInt32 _udp_send_boolean_split2__input;
float _f3_pcc_meas1_bus_join2__out[3];
float _f3_pcc_meas1_bus_join1__out[3];
float _f3_pcc_meas2_bus_join1__out[3];
float _f3_pcc_pcc_measurements_three_phase_pll1_sin__out;
float _f3_pcc_gain4__out;
float _f3_pcc_data_type_conversion1__out;
X_Int32 _udp_send_boolean_split4__out[10];
X_UnInt32 _udp_send_boolean_split4__input;
X_Int32 _udp_send_data_type_conversion8__out;
X_Int32 _udp_send_data_type_conversion7__out[9];
X_Int32 _udp_send_data_type_conversion19__out[4];
float _f1_pcc_pcc_measurements_bus_split2__out;
float _f1_pcc_pcc_measurements_bus_split2__out1;
float _f1_pcc_pcc_measurements_bus_split2__out2;
float _f1_pcc_pcc_measurements_bus_split1__out;
float _f1_pcc_pcc_measurements_bus_split1__out1;
float _f1_pcc_pcc_measurements_bus_split1__out2;
float _f2_pcc_pcc_measurements_bus_split2__out;
float _f2_pcc_pcc_measurements_bus_split2__out1;
float _f2_pcc_pcc_measurements_bus_split2__out2;
float _f2_pcc_pcc_measurements_bus_split1__out;
float _f2_pcc_pcc_measurements_bus_split1__out1;
float _f2_pcc_pcc_measurements_bus_split1__out2;
float _f3_pcc_pcc_measurements_bus_split2__out;
float _f3_pcc_pcc_measurements_bus_split2__out1;
float _f3_pcc_pcc_measurements_bus_split2__out2;
float _f3_pcc_pcc_measurements_bus_split1__out;
float _f3_pcc_pcc_measurements_bus_split1__out1;
float _f3_pcc_pcc_measurements_bus_split1__out2;
float _f1_pcc_pcc_measurements_power_meter1__Pdc;
float _f1_pcc_pcc_measurements_power_meter1__Qdc;
float _f1_pcc_pcc_measurements_power_meter1__P0dc;
float _f1_pcc_pcc_measurements_power_meter1__Pac;
float _f1_pcc_pcc_measurements_power_meter1__Qac;
float _f1_pcc_pcc_measurements_power_meter1__P0ac;
float _f1_pcc_pcc_measurements_power_meter1__apparent;
float _f1_pcc_pcc_measurements_power_meter1__k_factor;
float _f1_pcc_pcc_measurements_power_meter1__v_alpha;
float _f1_pcc_pcc_measurements_power_meter1__v_beta;
float _f1_pcc_pcc_measurements_power_meter1__i_alpha;
float _f1_pcc_pcc_measurements_power_meter1__i_beta;
float _f1_pcc_pcc_measurements_power_meter1__v_zero;
float _f1_pcc_pcc_measurements_power_meter1__i_zero;
float _f1_pcc_pcc_measurements_power_meter1__filter_1_output;
float _f1_pcc_pcc_measurements_power_meter1__filter_1_outputQ;
float _f1_pcc_pcc_measurements_power_meter1__filter_1_outputP0;
float _f1_pcc_pcc_measurements_rms_value1__out;
float _f1_pcc_pcc_measurements_rms_value1__previous_value;
float _f1_pcc_pcc_measurements_rms_value1__previous_filtered_value;
float _f1_pcc_pcc_measurements_rms_value1__correction;
float _f1_pcc_pcc_measurements_rms_value1__previous_correction;
X_UnInt32 _f1_pcc_pcc_measurements_rms_value1__zc;
float _f1_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_abc_to_alpha_beta__alpha;
float _f1_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_abc_to_alpha_beta__beta;
float _f1_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_abc_to_alpha_beta__gamma;
float _f2_pcc_pcc_measurements_power_meter1__Pdc;
float _f2_pcc_pcc_measurements_power_meter1__Qdc;
float _f2_pcc_pcc_measurements_power_meter1__P0dc;
float _f2_pcc_pcc_measurements_power_meter1__Pac;
float _f2_pcc_pcc_measurements_power_meter1__Qac;
float _f2_pcc_pcc_measurements_power_meter1__P0ac;
float _f2_pcc_pcc_measurements_power_meter1__apparent;
float _f2_pcc_pcc_measurements_power_meter1__k_factor;
float _f2_pcc_pcc_measurements_power_meter1__v_alpha;
float _f2_pcc_pcc_measurements_power_meter1__v_beta;
float _f2_pcc_pcc_measurements_power_meter1__i_alpha;
float _f2_pcc_pcc_measurements_power_meter1__i_beta;
float _f2_pcc_pcc_measurements_power_meter1__v_zero;
float _f2_pcc_pcc_measurements_power_meter1__i_zero;
float _f2_pcc_pcc_measurements_power_meter1__filter_1_output;
float _f2_pcc_pcc_measurements_power_meter1__filter_1_outputQ;
float _f2_pcc_pcc_measurements_power_meter1__filter_1_outputP0;
float _f2_pcc_pcc_measurements_rms_value1__out;
float _f2_pcc_pcc_measurements_rms_value1__previous_value;
float _f2_pcc_pcc_measurements_rms_value1__previous_filtered_value;
float _f2_pcc_pcc_measurements_rms_value1__correction;
float _f2_pcc_pcc_measurements_rms_value1__previous_correction;
X_UnInt32 _f2_pcc_pcc_measurements_rms_value1__zc;
float _f2_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_abc_to_alpha_beta__alpha;
float _f2_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_abc_to_alpha_beta__beta;
float _f2_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_abc_to_alpha_beta__gamma;
float _f3_pcc_pcc_measurements_power_meter1__Pdc;
float _f3_pcc_pcc_measurements_power_meter1__Qdc;
float _f3_pcc_pcc_measurements_power_meter1__P0dc;
float _f3_pcc_pcc_measurements_power_meter1__Pac;
float _f3_pcc_pcc_measurements_power_meter1__Qac;
float _f3_pcc_pcc_measurements_power_meter1__P0ac;
float _f3_pcc_pcc_measurements_power_meter1__apparent;
float _f3_pcc_pcc_measurements_power_meter1__k_factor;
float _f3_pcc_pcc_measurements_power_meter1__v_alpha;
float _f3_pcc_pcc_measurements_power_meter1__v_beta;
float _f3_pcc_pcc_measurements_power_meter1__i_alpha;
float _f3_pcc_pcc_measurements_power_meter1__i_beta;
float _f3_pcc_pcc_measurements_power_meter1__v_zero;
float _f3_pcc_pcc_measurements_power_meter1__i_zero;
float _f3_pcc_pcc_measurements_power_meter1__filter_1_output;
float _f3_pcc_pcc_measurements_power_meter1__filter_1_outputQ;
float _f3_pcc_pcc_measurements_power_meter1__filter_1_outputP0;
float _f3_pcc_pcc_measurements_rms_value1__out;
float _f3_pcc_pcc_measurements_rms_value1__previous_value;
float _f3_pcc_pcc_measurements_rms_value1__previous_filtered_value;
float _f3_pcc_pcc_measurements_rms_value1__correction;
float _f3_pcc_pcc_measurements_rms_value1__previous_correction;
X_UnInt32 _f3_pcc_pcc_measurements_rms_value1__zc;
float _f3_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_abc_to_alpha_beta__alpha;
float _f3_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_abc_to_alpha_beta__beta;
float _f3_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_abc_to_alpha_beta__gamma;
float _f1_pcc_pcc_measurements_comparator1__out;
float _f1_pcc_pcc_measurements_comparator2__out;
float _f1_pcc_w____kw__out;
float _f1_pcc_var____kvar__out;
float _f1_pcc_gain3__out;
float _f1_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_alpha_beta_to_dq__d;
float _f1_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_alpha_beta_to_dq__q;
float _f1_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_alpha_beta_to_dq__k1;
float _f1_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_alpha_beta_to_dq__k2;
float _f2_pcc_pcc_measurements_comparator1__out;
float _f2_pcc_pcc_measurements_comparator2__out;
float _f2_pcc_w____kw__out;
float _f2_pcc_var____kvar__out;
float _f2_pcc_gain3__out;
float _f2_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_alpha_beta_to_dq__d;
float _f2_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_alpha_beta_to_dq__q;
float _f2_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_alpha_beta_to_dq__k1;
float _f2_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_alpha_beta_to_dq__k2;
float _f3_pcc_pcc_measurements_comparator1__out;
float _f3_pcc_pcc_measurements_comparator2__out;
float _f3_pcc_w____kw__out;
float _f3_pcc_var____kvar__out;
float _f3_pcc_gain3__out;
float _f3_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_alpha_beta_to_dq__d;
float _f3_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_alpha_beta_to_dq__q;
float _f3_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_alpha_beta_to_dq__k1;
float _f3_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_alpha_beta_to_dq__k2;
float _f1_pcc_gain1__out;
float _f1_pcc_gain2__out;
float _f1_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_d__out;
float _f1_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_d__b_coeff[2] = {0.06283185307, 0.06283185307};
float _f1_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_d__a_coeff[2] = {2.06283185307, -1.93716814693};
float _f1_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_d__a_sum;
float _f1_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_d__b_sum;
float _f1_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_d__delay_line_in;
X_UnInt32 _f1_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_d__i;
float _f1_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_q__out;
float _f1_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_q__b_coeff[2] = {0.06283185307, 0.06283185307};
float _f1_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_q__a_coeff[2] = {2.06283185307, -1.93716814693};
float _f1_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_q__a_sum;
float _f1_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_q__b_sum;
float _f1_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_q__delay_line_in;
X_UnInt32 _f1_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_q__i;
float _f2_pcc_gain1__out;
float _f2_pcc_gain2__out;
float _f2_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_d__out;
float _f2_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_d__b_coeff[2] = {0.06283185307, 0.06283185307};
float _f2_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_d__a_coeff[2] = {2.06283185307, -1.93716814693};
float _f2_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_d__a_sum;
float _f2_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_d__b_sum;
float _f2_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_d__delay_line_in;
X_UnInt32 _f2_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_d__i;
float _f2_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_q__out;
float _f2_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_q__b_coeff[2] = {0.06283185307, 0.06283185307};
float _f2_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_q__a_coeff[2] = {2.06283185307, -1.93716814693};
float _f2_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_q__a_sum;
float _f2_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_q__b_sum;
float _f2_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_q__delay_line_in;
X_UnInt32 _f2_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_q__i;
float _f3_pcc_gain1__out;
float _f3_pcc_gain2__out;
float _f3_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_d__out;
float _f3_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_d__b_coeff[2] = {0.06283185307, 0.06283185307};
float _f3_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_d__a_coeff[2] = {2.06283185307, -1.93716814693};
float _f3_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_d__a_sum;
float _f3_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_d__b_sum;
float _f3_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_d__delay_line_in;
X_UnInt32 _f3_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_d__i;
float _f3_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_q__out;
float _f3_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_q__b_coeff[2] = {0.06283185307, 0.06283185307};
float _f3_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_q__a_coeff[2] = {2.06283185307, -1.93716814693};
float _f3_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_q__a_sum;
float _f3_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_q__b_sum;
float _f3_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_q__delay_line_in;
X_UnInt32 _f3_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_q__i;
float _f1_pcc_bus_join1__out[8];
float _f1_pcc_pcc_measurements_three_phase_pll1_normalize__in1;
float _f1_pcc_pcc_measurements_three_phase_pll1_normalize__in2;


float _f1_pcc_pcc_measurements_three_phase_pll1_normalize__in2_pu;
float _f1_pcc_pcc_measurements_three_phase_pll1_normalize__pk;
float _f2_pcc_bus_join1__out[8];
float _f2_pcc_pcc_measurements_three_phase_pll1_normalize__in1;
float _f2_pcc_pcc_measurements_three_phase_pll1_normalize__in2;


float _f2_pcc_pcc_measurements_three_phase_pll1_normalize__in2_pu;
float _f2_pcc_pcc_measurements_three_phase_pll1_normalize__pk;
float _f3_pcc_bus_join1__out[8];
float _f3_pcc_pcc_measurements_three_phase_pll1_normalize__in1;
float _f3_pcc_pcc_measurements_three_phase_pll1_normalize__in2;


float _f3_pcc_pcc_measurements_three_phase_pll1_normalize__in2_pu;
float _f3_pcc_pcc_measurements_three_phase_pll1_normalize__pk;
float _udp_send_bus_split1__out;
float _udp_send_bus_split1__out1;
float _udp_send_bus_split1__out2;
float _udp_send_bus_split1__out3;
float _udp_send_bus_split1__out4;
float _udp_send_bus_split1__out5;
float _udp_send_bus_split1__out6;
float _udp_send_bus_split1__out7;
float _f1_pcc_pcc_measurements_three_phase_pll1_pid_kd__out;
float _f1_pcc_pcc_measurements_three_phase_pll1_pid_ki__out;
float _f1_pcc_pcc_measurements_three_phase_pll1_pid_kp__out;
float _udp_send_bus_split2__out;
float _udp_send_bus_split2__out1;
float _udp_send_bus_split2__out2;
float _udp_send_bus_split2__out3;
float _udp_send_bus_split2__out4;
float _udp_send_bus_split2__out5;
float _udp_send_bus_split2__out6;
float _udp_send_bus_split2__out7;
float _f2_pcc_pcc_measurements_three_phase_pll1_pid_kd__out;
float _f2_pcc_pcc_measurements_three_phase_pll1_pid_ki__out;
float _f2_pcc_pcc_measurements_three_phase_pll1_pid_kp__out;
float _udp_send_bus_split3__out;
float _udp_send_bus_split3__out1;
float _udp_send_bus_split3__out2;
float _udp_send_bus_split3__out3;
float _udp_send_bus_split3__out4;
float _udp_send_bus_split3__out5;
float _udp_send_bus_split3__out6;
float _udp_send_bus_split3__out7;
float _f3_pcc_pcc_measurements_three_phase_pll1_pid_kd__out;
float _f3_pcc_pcc_measurements_three_phase_pll1_pid_ki__out;
float _f3_pcc_pcc_measurements_three_phase_pll1_pid_kp__out;
X_Int32 _udp_send_data_type_conversion14__out;
float _f1_pcc_pcc_measurements_three_phase_pll1_pid_sum8__out;
X_Int32 _udp_send_data_type_conversion15__out;
float _f2_pcc_pcc_measurements_three_phase_pll1_pid_sum8__out;
X_Int32 _udp_send_data_type_conversion16__out;
float _udp_send_frequency_udp__out[47];
float _udp_send_import_export__out[3];
float _udp_send_lagging_leading__out[3];
float _udp_send_power_factor__out[3];
float _udp_send_p_reactive_udp__out[47];
float _udp_send_p_real_udp__out[47];
float _udp_send_voltage_udp__out[47];
float _f3_pcc_pcc_measurements_three_phase_pll1_pid_sum8__out;
float _f1_pcc_pcc_measurements_three_phase_pll1_pid_gain1__out;
float _f2_pcc_pcc_measurements_three_phase_pll1_pid_gain1__out;
X_Int32 _udp_send_breaker_udp__out[47];
X_Int32 _udp_send_data_type_conversion4__out[47];
X_Int32 _udp_send_data_type_conversion12__out[3];
X_Int32 _udp_send_data_type_conversion13__out[3];
X_Int32 _udp_send_data_type_conversion11__out[3];
X_Int32 _udp_send_data_type_conversion2__out[47];
X_Int32 _udp_send_data_type_conversion1__out[47];
X_Int32 _udp_send_data_type_conversion3__out[47];
float _f3_pcc_pcc_measurements_three_phase_pll1_pid_gain1__out;
float _f1_pcc_pcc_measurements_three_phase_pll1_pid_sum5__out;
float _f2_pcc_pcc_measurements_three_phase_pll1_pid_sum5__out;
X_Int32 _udp_send_data_type_conversion5__out[47];
float _f3_pcc_pcc_measurements_three_phase_pll1_pid_sum5__out;
float _f1_pcc_pcc_measurements_three_phase_pll1_pid_limit1__out;
float _f2_pcc_pcc_measurements_three_phase_pll1_pid_limit1__out;
X_Int32 _udp_send_udp_data__out[263];
float _f3_pcc_pcc_measurements_three_phase_pll1_pid_limit1__out;
float _f1_pcc_pcc_measurements_three_phase_pll1_pid_sum6__out;
float _f1_pcc_pcc_measurements_three_phase_pll1_rate_limiter1__in_rate;
float _f1_pcc_pcc_measurements_three_phase_pll1_integrator__in;


float _f1_pcc_pcc_measurements_three_phase_pll1_integrator__out;
float _f2_pcc_pcc_measurements_three_phase_pll1_pid_sum6__out;
float _f2_pcc_pcc_measurements_three_phase_pll1_rate_limiter1__in_rate;
float _f2_pcc_pcc_measurements_three_phase_pll1_integrator__in;


float _f2_pcc_pcc_measurements_three_phase_pll1_integrator__out;

struct _udp_send_eth_ve_send1_struct_ {

    int in[263];
} _udp_send_eth_ve_send1_struct_;
float _f3_pcc_pcc_measurements_three_phase_pll1_pid_sum6__out;
float _f3_pcc_pcc_measurements_three_phase_pll1_rate_limiter1__in_rate;
float _f3_pcc_pcc_measurements_three_phase_pll1_integrator__in;


float _f3_pcc_pcc_measurements_three_phase_pll1_integrator__out;
float _f1_pcc_pcc_measurements_three_phase_pll1_pid_kb__out;
float _f1_pcc_pcc_measurements_three_phase_pll1_lpf_lpf__out;
float _f1_pcc_pcc_measurements_three_phase_pll1_lpf_lpf__b_coeff[1] = {0.024674000736159996};
float _f1_pcc_pcc_measurements_three_phase_pll1_lpf_lpf__a_coeff[3] = {1.0, -1.7778894456, 0.8025634463361601};
float _f1_pcc_pcc_measurements_three_phase_pll1_lpf_lpf__a_sum;
float _f1_pcc_pcc_measurements_three_phase_pll1_lpf_lpf__b_sum;
float _f1_pcc_pcc_measurements_three_phase_pll1_lpf_lpf__delay_line_in;
X_UnInt32 _f1_pcc_pcc_measurements_three_phase_pll1_lpf_lpf__i;
float _f2_pcc_pcc_measurements_three_phase_pll1_pid_kb__out;
float _f2_pcc_pcc_measurements_three_phase_pll1_lpf_lpf__out;
float _f2_pcc_pcc_measurements_three_phase_pll1_lpf_lpf__b_coeff[1] = {0.024674000736159996};
float _f2_pcc_pcc_measurements_three_phase_pll1_lpf_lpf__a_coeff[3] = {1.0, -1.7778894456, 0.8025634463361601};
float _f2_pcc_pcc_measurements_three_phase_pll1_lpf_lpf__a_sum;
float _f2_pcc_pcc_measurements_three_phase_pll1_lpf_lpf__b_sum;
float _f2_pcc_pcc_measurements_three_phase_pll1_lpf_lpf__delay_line_in;
X_UnInt32 _f2_pcc_pcc_measurements_three_phase_pll1_lpf_lpf__i;
float _f3_pcc_pcc_measurements_three_phase_pll1_pid_kb__out;
float _f3_pcc_pcc_measurements_three_phase_pll1_lpf_lpf__out;
float _f3_pcc_pcc_measurements_three_phase_pll1_lpf_lpf__b_coeff[1] = {0.024674000736159996};
float _f3_pcc_pcc_measurements_three_phase_pll1_lpf_lpf__a_coeff[3] = {1.0, -1.7778894456, 0.8025634463361601};
float _f3_pcc_pcc_measurements_three_phase_pll1_lpf_lpf__a_sum;
float _f3_pcc_pcc_measurements_three_phase_pll1_lpf_lpf__b_sum;
float _f3_pcc_pcc_measurements_three_phase_pll1_lpf_lpf__delay_line_in;
X_UnInt32 _f3_pcc_pcc_measurements_three_phase_pll1_lpf_lpf__i;
float _f1_pcc_pcc_measurements_three_phase_pll1_pid_sum7__out;
float _f2_pcc_pcc_measurements_three_phase_pll1_pid_sum7__out;
float _f3_pcc_pcc_measurements_three_phase_pll1_pid_sum7__out;
//@cmp.var.end

//@cmp.svar.start
// state variables
float _dms_engine_device_transition1_output__out =  0.0;

float _dms_engine_device_transition2_output__out =  0.0;

float _dms_engine_device_transition3_output__out =  0.0;

float _dms_engine_device_transition4_output__out =  0.0;

float _f1_pcc_pcc_measurements_three_phase_pll1_pid_integrator1__state;
float _f1_pcc_pcc_measurements_three_phase_pll1_pid_integrator2__state;
float _f1_pcc_pcc_measurements_three_phase_pll1_unit_delay1__state;
X_UnInt32 _f1_pcc_sr_flip_flop1__state;
float _f1_relay_udp_stream_device_transition1_output__out[15] = { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0};

float _f1_relay_udp_stream_device_transition2_output__out[15] = { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0};

X_UnInt32 _f1_relay_udp_stream_device_transition3_output__out = (X_UnInt32) 0.0;

float _f1_relay_udp_stream_device_transition4_output__out[15] = { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0};

float _f1_relay_udp_stream_device_transition5_output__out[15] = { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0};

X_Int32 _f1_relay_udp_stream_device_transition7_output__out = (X_Int32) 0.0;

float _f1_relay_udp_stream_device_transition8_output__out =  0.0;

float _f1_relay_udp_stream_device_transition9_output__out =  0.0;

float _f2_pcc_pcc_measurements_three_phase_pll1_pid_integrator1__state;
float _f2_pcc_pcc_measurements_three_phase_pll1_pid_integrator2__state;
float _f2_pcc_pcc_measurements_three_phase_pll1_unit_delay1__state;
X_UnInt32 _f2_pcc_sr_flip_flop1__state;
float _f2_relay_udp_stream_device_transition1_output__out[16] = { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0};

X_UnInt32 _f2_relay_udp_stream_device_transition10_output__out = (X_UnInt32) 0.0;

float _f2_relay_udp_stream_device_transition11_output__out =  0.0;

float _f2_relay_udp_stream_device_transition12_output__out =  0.0;

float _f2_relay_udp_stream_device_transition2_output__out[16] = { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0};

X_UnInt32 _f2_relay_udp_stream_device_transition3_output__out = (X_UnInt32) 0.0;

float _f2_relay_udp_stream_device_transition4_output__out[16] = { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0};

float _f2_relay_udp_stream_device_transition5_output__out[16] = { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0};

float _f2_relay_udp_stream_device_transition6_output__out[3] = { 0.0, 0.0, 0.0};

float _f2_relay_udp_stream_device_transition7_output__out[3] = { 0.0, 0.0, 0.0};

float _f2_relay_udp_stream_device_transition8_output__out[3] = { 0.0, 0.0, 0.0};

float _f2_relay_udp_stream_device_transition9_output__out[3] = { 0.0, 0.0, 0.0};

float _f3_pcc_pcc_measurements_three_phase_pll1_pid_integrator1__state;
float _f3_pcc_pcc_measurements_three_phase_pll1_pid_integrator2__state;
float _f3_pcc_pcc_measurements_three_phase_pll1_unit_delay1__state;
X_UnInt32 _f3_pcc_sr_flip_flop3__state;
float _f3_relay_udp_stream_device_transition1_output__out[10] = { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0};

float _f3_relay_udp_stream_device_transition2_output__out[10] = { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0};

X_UnInt32 _f3_relay_udp_stream_device_transition3_output__out = (X_UnInt32) 0.0;

float _f3_relay_udp_stream_device_transition4_output__out[10] = { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0};

float _f3_relay_udp_stream_device_transition5_output__out[10] = { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0};

X_Int32 _f3_relay_udp_stream_device_transition7_output__out = (X_Int32) 0.0;

float _f3_relay_udp_stream_device_transition8_output__out[9] = { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0};

float _f1_pcc_pcc_measurements_power_meter1__filter_1_output_k_minus_1;
float _f1_pcc_pcc_measurements_power_meter1__filter_1_input_k_minus_1;
float _f1_pcc_pcc_measurements_power_meter1__filter_1_output_k_minus_1Q;
float _f1_pcc_pcc_measurements_power_meter1__filter_1_input_k_minus_1Q;
float _f1_pcc_pcc_measurements_power_meter1__filter_1_output_k_minus_1P0;
float _f1_pcc_pcc_measurements_power_meter1__filter_1_input_k_minus_1P0;
float _f1_pcc_pcc_measurements_rms_value1__square_sum;
float _f1_pcc_pcc_measurements_rms_value1__sample_cnt;
float _f1_pcc_pcc_measurements_rms_value1__filtered_value;
float _f1_pcc_pcc_measurements_rms_value1__out_state;
float _f2_pcc_pcc_measurements_power_meter1__filter_1_output_k_minus_1;
float _f2_pcc_pcc_measurements_power_meter1__filter_1_input_k_minus_1;
float _f2_pcc_pcc_measurements_power_meter1__filter_1_output_k_minus_1Q;
float _f2_pcc_pcc_measurements_power_meter1__filter_1_input_k_minus_1Q;
float _f2_pcc_pcc_measurements_power_meter1__filter_1_output_k_minus_1P0;
float _f2_pcc_pcc_measurements_power_meter1__filter_1_input_k_minus_1P0;
float _f2_pcc_pcc_measurements_rms_value1__square_sum;
float _f2_pcc_pcc_measurements_rms_value1__sample_cnt;
float _f2_pcc_pcc_measurements_rms_value1__filtered_value;
float _f2_pcc_pcc_measurements_rms_value1__out_state;
float _f3_pcc_pcc_measurements_power_meter1__filter_1_output_k_minus_1;
float _f3_pcc_pcc_measurements_power_meter1__filter_1_input_k_minus_1;
float _f3_pcc_pcc_measurements_power_meter1__filter_1_output_k_minus_1Q;
float _f3_pcc_pcc_measurements_power_meter1__filter_1_input_k_minus_1Q;
float _f3_pcc_pcc_measurements_power_meter1__filter_1_output_k_minus_1P0;
float _f3_pcc_pcc_measurements_power_meter1__filter_1_input_k_minus_1P0;
float _f3_pcc_pcc_measurements_rms_value1__square_sum;
float _f3_pcc_pcc_measurements_rms_value1__sample_cnt;
float _f3_pcc_pcc_measurements_rms_value1__filtered_value;
float _f3_pcc_pcc_measurements_rms_value1__out_state;
float _f1_pcc_pcc_measurements_comparator1__state;
float _f1_pcc_pcc_measurements_comparator2__state;
float _f2_pcc_pcc_measurements_comparator1__state;
float _f2_pcc_pcc_measurements_comparator2__state;
float _f3_pcc_pcc_measurements_comparator1__state;
float _f3_pcc_pcc_measurements_comparator2__state;
float _f1_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_d__states[1];
float _f1_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_q__states[1];
float _f2_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_d__states[1];
float _f2_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_q__states[1];
float _f3_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_d__states[1];
float _f3_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_q__states[1];
float _f1_pcc_pcc_measurements_three_phase_pll1_rate_limiter1__prev_out;
float _f1_pcc_pcc_measurements_three_phase_pll1_rate_limiter1__out;
int _f1_pcc_pcc_measurements_three_phase_pll1_rate_limiter1__first_step;
float _f2_pcc_pcc_measurements_three_phase_pll1_rate_limiter1__prev_out;
float _f2_pcc_pcc_measurements_three_phase_pll1_rate_limiter1__out;
int _f2_pcc_pcc_measurements_three_phase_pll1_rate_limiter1__first_step;
float _f3_pcc_pcc_measurements_three_phase_pll1_rate_limiter1__prev_out;
float _f3_pcc_pcc_measurements_three_phase_pll1_rate_limiter1__out;
int _f3_pcc_pcc_measurements_three_phase_pll1_rate_limiter1__first_step;
float _f1_pcc_pcc_measurements_three_phase_pll1_lpf_lpf__states[2];
float _f2_pcc_pcc_measurements_three_phase_pll1_lpf_lpf__states[2];
float _f3_pcc_pcc_measurements_three_phase_pll1_lpf_lpf__states[2];
//@cmp.svar.end



// generated using template: virtual_hil/custom_functions.template---------------------------------
void ReInit_user_sp_cpu_dev0() {
#if DEBUG_MODE
    printf("\n\rReInitTimer");
#endif
    //@cmp.init.block.start
    _dms_engine_device_transition1_output__out =  0.0;
    _dms_engine_device_transition2_output__out =  0.0;
    _dms_engine_device_transition3_output__out =  0.0;
    _dms_engine_device_transition4_output__out =  0.0;
    _f1_pcc_pcc_measurements_three_phase_pll1_pid_integrator1__state = 376.99111843;
    _f1_pcc_pcc_measurements_three_phase_pll1_pid_integrator2__state = 0.0;
    _f1_pcc_pcc_measurements_three_phase_pll1_unit_delay1__state = 0.0;
    _f1_pcc_sr_flip_flop1__state = (float) 0;
    _f1_relay_udp_stream_device_transition1_output__out[0] =  0.0;
    _f1_relay_udp_stream_device_transition1_output__out[1] =  0.0;
    _f1_relay_udp_stream_device_transition1_output__out[2] =  0.0;
    _f1_relay_udp_stream_device_transition1_output__out[3] =  0.0;
    _f1_relay_udp_stream_device_transition1_output__out[4] =  0.0;
    _f1_relay_udp_stream_device_transition1_output__out[5] =  0.0;
    _f1_relay_udp_stream_device_transition1_output__out[6] =  0.0;
    _f1_relay_udp_stream_device_transition1_output__out[7] =  0.0;
    _f1_relay_udp_stream_device_transition1_output__out[8] =  0.0;
    _f1_relay_udp_stream_device_transition1_output__out[9] =  0.0;
    _f1_relay_udp_stream_device_transition1_output__out[10] =  0.0;
    _f1_relay_udp_stream_device_transition1_output__out[11] =  0.0;
    _f1_relay_udp_stream_device_transition1_output__out[12] =  0.0;
    _f1_relay_udp_stream_device_transition1_output__out[13] =  0.0;
    _f1_relay_udp_stream_device_transition1_output__out[14] =  0.0;
    _f1_relay_udp_stream_device_transition2_output__out[0] =  0.0;
    _f1_relay_udp_stream_device_transition2_output__out[1] =  0.0;
    _f1_relay_udp_stream_device_transition2_output__out[2] =  0.0;
    _f1_relay_udp_stream_device_transition2_output__out[3] =  0.0;
    _f1_relay_udp_stream_device_transition2_output__out[4] =  0.0;
    _f1_relay_udp_stream_device_transition2_output__out[5] =  0.0;
    _f1_relay_udp_stream_device_transition2_output__out[6] =  0.0;
    _f1_relay_udp_stream_device_transition2_output__out[7] =  0.0;
    _f1_relay_udp_stream_device_transition2_output__out[8] =  0.0;
    _f1_relay_udp_stream_device_transition2_output__out[9] =  0.0;
    _f1_relay_udp_stream_device_transition2_output__out[10] =  0.0;
    _f1_relay_udp_stream_device_transition2_output__out[11] =  0.0;
    _f1_relay_udp_stream_device_transition2_output__out[12] =  0.0;
    _f1_relay_udp_stream_device_transition2_output__out[13] =  0.0;
    _f1_relay_udp_stream_device_transition2_output__out[14] =  0.0;
    _f1_relay_udp_stream_device_transition3_output__out = (X_UnInt32) 0.0;
    _f1_relay_udp_stream_device_transition4_output__out[0] =  0.0;
    _f1_relay_udp_stream_device_transition4_output__out[1] =  0.0;
    _f1_relay_udp_stream_device_transition4_output__out[2] =  0.0;
    _f1_relay_udp_stream_device_transition4_output__out[3] =  0.0;
    _f1_relay_udp_stream_device_transition4_output__out[4] =  0.0;
    _f1_relay_udp_stream_device_transition4_output__out[5] =  0.0;
    _f1_relay_udp_stream_device_transition4_output__out[6] =  0.0;
    _f1_relay_udp_stream_device_transition4_output__out[7] =  0.0;
    _f1_relay_udp_stream_device_transition4_output__out[8] =  0.0;
    _f1_relay_udp_stream_device_transition4_output__out[9] =  0.0;
    _f1_relay_udp_stream_device_transition4_output__out[10] =  0.0;
    _f1_relay_udp_stream_device_transition4_output__out[11] =  0.0;
    _f1_relay_udp_stream_device_transition4_output__out[12] =  0.0;
    _f1_relay_udp_stream_device_transition4_output__out[13] =  0.0;
    _f1_relay_udp_stream_device_transition4_output__out[14] =  0.0;
    _f1_relay_udp_stream_device_transition5_output__out[0] =  0.0;
    _f1_relay_udp_stream_device_transition5_output__out[1] =  0.0;
    _f1_relay_udp_stream_device_transition5_output__out[2] =  0.0;
    _f1_relay_udp_stream_device_transition5_output__out[3] =  0.0;
    _f1_relay_udp_stream_device_transition5_output__out[4] =  0.0;
    _f1_relay_udp_stream_device_transition5_output__out[5] =  0.0;
    _f1_relay_udp_stream_device_transition5_output__out[6] =  0.0;
    _f1_relay_udp_stream_device_transition5_output__out[7] =  0.0;
    _f1_relay_udp_stream_device_transition5_output__out[8] =  0.0;
    _f1_relay_udp_stream_device_transition5_output__out[9] =  0.0;
    _f1_relay_udp_stream_device_transition5_output__out[10] =  0.0;
    _f1_relay_udp_stream_device_transition5_output__out[11] =  0.0;
    _f1_relay_udp_stream_device_transition5_output__out[12] =  0.0;
    _f1_relay_udp_stream_device_transition5_output__out[13] =  0.0;
    _f1_relay_udp_stream_device_transition5_output__out[14] =  0.0;
    _f1_relay_udp_stream_device_transition7_output__out = (X_Int32) 0.0;
    _f1_relay_udp_stream_device_transition8_output__out =  0.0;
    _f1_relay_udp_stream_device_transition9_output__out =  0.0;
    _f2_pcc_pcc_measurements_three_phase_pll1_pid_integrator1__state = 376.99111843;
    _f2_pcc_pcc_measurements_three_phase_pll1_pid_integrator2__state = 0.0;
    _f2_pcc_pcc_measurements_three_phase_pll1_unit_delay1__state = 0.0;
    _f2_pcc_sr_flip_flop1__state = (float) 0;
    _f2_relay_udp_stream_device_transition1_output__out[0] =  0.0;
    _f2_relay_udp_stream_device_transition1_output__out[1] =  0.0;
    _f2_relay_udp_stream_device_transition1_output__out[2] =  0.0;
    _f2_relay_udp_stream_device_transition1_output__out[3] =  0.0;
    _f2_relay_udp_stream_device_transition1_output__out[4] =  0.0;
    _f2_relay_udp_stream_device_transition1_output__out[5] =  0.0;
    _f2_relay_udp_stream_device_transition1_output__out[6] =  0.0;
    _f2_relay_udp_stream_device_transition1_output__out[7] =  0.0;
    _f2_relay_udp_stream_device_transition1_output__out[8] =  0.0;
    _f2_relay_udp_stream_device_transition1_output__out[9] =  0.0;
    _f2_relay_udp_stream_device_transition1_output__out[10] =  0.0;
    _f2_relay_udp_stream_device_transition1_output__out[11] =  0.0;
    _f2_relay_udp_stream_device_transition1_output__out[12] =  0.0;
    _f2_relay_udp_stream_device_transition1_output__out[13] =  0.0;
    _f2_relay_udp_stream_device_transition1_output__out[14] =  0.0;
    _f2_relay_udp_stream_device_transition1_output__out[15] =  0.0;
    _f2_relay_udp_stream_device_transition10_output__out = (X_UnInt32) 0.0;
    _f2_relay_udp_stream_device_transition11_output__out =  0.0;
    _f2_relay_udp_stream_device_transition12_output__out =  0.0;
    _f2_relay_udp_stream_device_transition2_output__out[0] =  0.0;
    _f2_relay_udp_stream_device_transition2_output__out[1] =  0.0;
    _f2_relay_udp_stream_device_transition2_output__out[2] =  0.0;
    _f2_relay_udp_stream_device_transition2_output__out[3] =  0.0;
    _f2_relay_udp_stream_device_transition2_output__out[4] =  0.0;
    _f2_relay_udp_stream_device_transition2_output__out[5] =  0.0;
    _f2_relay_udp_stream_device_transition2_output__out[6] =  0.0;
    _f2_relay_udp_stream_device_transition2_output__out[7] =  0.0;
    _f2_relay_udp_stream_device_transition2_output__out[8] =  0.0;
    _f2_relay_udp_stream_device_transition2_output__out[9] =  0.0;
    _f2_relay_udp_stream_device_transition2_output__out[10] =  0.0;
    _f2_relay_udp_stream_device_transition2_output__out[11] =  0.0;
    _f2_relay_udp_stream_device_transition2_output__out[12] =  0.0;
    _f2_relay_udp_stream_device_transition2_output__out[13] =  0.0;
    _f2_relay_udp_stream_device_transition2_output__out[14] =  0.0;
    _f2_relay_udp_stream_device_transition2_output__out[15] =  0.0;
    _f2_relay_udp_stream_device_transition3_output__out = (X_UnInt32) 0.0;
    _f2_relay_udp_stream_device_transition4_output__out[0] =  0.0;
    _f2_relay_udp_stream_device_transition4_output__out[1] =  0.0;
    _f2_relay_udp_stream_device_transition4_output__out[2] =  0.0;
    _f2_relay_udp_stream_device_transition4_output__out[3] =  0.0;
    _f2_relay_udp_stream_device_transition4_output__out[4] =  0.0;
    _f2_relay_udp_stream_device_transition4_output__out[5] =  0.0;
    _f2_relay_udp_stream_device_transition4_output__out[6] =  0.0;
    _f2_relay_udp_stream_device_transition4_output__out[7] =  0.0;
    _f2_relay_udp_stream_device_transition4_output__out[8] =  0.0;
    _f2_relay_udp_stream_device_transition4_output__out[9] =  0.0;
    _f2_relay_udp_stream_device_transition4_output__out[10] =  0.0;
    _f2_relay_udp_stream_device_transition4_output__out[11] =  0.0;
    _f2_relay_udp_stream_device_transition4_output__out[12] =  0.0;
    _f2_relay_udp_stream_device_transition4_output__out[13] =  0.0;
    _f2_relay_udp_stream_device_transition4_output__out[14] =  0.0;
    _f2_relay_udp_stream_device_transition4_output__out[15] =  0.0;
    _f2_relay_udp_stream_device_transition5_output__out[0] =  0.0;
    _f2_relay_udp_stream_device_transition5_output__out[1] =  0.0;
    _f2_relay_udp_stream_device_transition5_output__out[2] =  0.0;
    _f2_relay_udp_stream_device_transition5_output__out[3] =  0.0;
    _f2_relay_udp_stream_device_transition5_output__out[4] =  0.0;
    _f2_relay_udp_stream_device_transition5_output__out[5] =  0.0;
    _f2_relay_udp_stream_device_transition5_output__out[6] =  0.0;
    _f2_relay_udp_stream_device_transition5_output__out[7] =  0.0;
    _f2_relay_udp_stream_device_transition5_output__out[8] =  0.0;
    _f2_relay_udp_stream_device_transition5_output__out[9] =  0.0;
    _f2_relay_udp_stream_device_transition5_output__out[10] =  0.0;
    _f2_relay_udp_stream_device_transition5_output__out[11] =  0.0;
    _f2_relay_udp_stream_device_transition5_output__out[12] =  0.0;
    _f2_relay_udp_stream_device_transition5_output__out[13] =  0.0;
    _f2_relay_udp_stream_device_transition5_output__out[14] =  0.0;
    _f2_relay_udp_stream_device_transition5_output__out[15] =  0.0;
    _f2_relay_udp_stream_device_transition6_output__out[0] =  0.0;
    _f2_relay_udp_stream_device_transition6_output__out[1] =  0.0;
    _f2_relay_udp_stream_device_transition6_output__out[2] =  0.0;
    _f2_relay_udp_stream_device_transition7_output__out[0] =  0.0;
    _f2_relay_udp_stream_device_transition7_output__out[1] =  0.0;
    _f2_relay_udp_stream_device_transition7_output__out[2] =  0.0;
    _f2_relay_udp_stream_device_transition8_output__out[0] =  0.0;
    _f2_relay_udp_stream_device_transition8_output__out[1] =  0.0;
    _f2_relay_udp_stream_device_transition8_output__out[2] =  0.0;
    _f2_relay_udp_stream_device_transition9_output__out[0] =  0.0;
    _f2_relay_udp_stream_device_transition9_output__out[1] =  0.0;
    _f2_relay_udp_stream_device_transition9_output__out[2] =  0.0;
    _f3_pcc_pcc_measurements_three_phase_pll1_pid_integrator1__state = 376.99111843;
    _f3_pcc_pcc_measurements_three_phase_pll1_pid_integrator2__state = 0.0;
    _f3_pcc_pcc_measurements_three_phase_pll1_unit_delay1__state = 0.0;
    _f3_pcc_sr_flip_flop3__state = (float) 0;
    _f3_relay_udp_stream_device_transition1_output__out[0] =  0.0;
    _f3_relay_udp_stream_device_transition1_output__out[1] =  0.0;
    _f3_relay_udp_stream_device_transition1_output__out[2] =  0.0;
    _f3_relay_udp_stream_device_transition1_output__out[3] =  0.0;
    _f3_relay_udp_stream_device_transition1_output__out[4] =  0.0;
    _f3_relay_udp_stream_device_transition1_output__out[5] =  0.0;
    _f3_relay_udp_stream_device_transition1_output__out[6] =  0.0;
    _f3_relay_udp_stream_device_transition1_output__out[7] =  0.0;
    _f3_relay_udp_stream_device_transition1_output__out[8] =  0.0;
    _f3_relay_udp_stream_device_transition1_output__out[9] =  0.0;
    _f3_relay_udp_stream_device_transition2_output__out[0] =  0.0;
    _f3_relay_udp_stream_device_transition2_output__out[1] =  0.0;
    _f3_relay_udp_stream_device_transition2_output__out[2] =  0.0;
    _f3_relay_udp_stream_device_transition2_output__out[3] =  0.0;
    _f3_relay_udp_stream_device_transition2_output__out[4] =  0.0;
    _f3_relay_udp_stream_device_transition2_output__out[5] =  0.0;
    _f3_relay_udp_stream_device_transition2_output__out[6] =  0.0;
    _f3_relay_udp_stream_device_transition2_output__out[7] =  0.0;
    _f3_relay_udp_stream_device_transition2_output__out[8] =  0.0;
    _f3_relay_udp_stream_device_transition2_output__out[9] =  0.0;
    _f3_relay_udp_stream_device_transition3_output__out = (X_UnInt32) 0.0;
    _f3_relay_udp_stream_device_transition4_output__out[0] =  0.0;
    _f3_relay_udp_stream_device_transition4_output__out[1] =  0.0;
    _f3_relay_udp_stream_device_transition4_output__out[2] =  0.0;
    _f3_relay_udp_stream_device_transition4_output__out[3] =  0.0;
    _f3_relay_udp_stream_device_transition4_output__out[4] =  0.0;
    _f3_relay_udp_stream_device_transition4_output__out[5] =  0.0;
    _f3_relay_udp_stream_device_transition4_output__out[6] =  0.0;
    _f3_relay_udp_stream_device_transition4_output__out[7] =  0.0;
    _f3_relay_udp_stream_device_transition4_output__out[8] =  0.0;
    _f3_relay_udp_stream_device_transition4_output__out[9] =  0.0;
    _f3_relay_udp_stream_device_transition5_output__out[0] =  0.0;
    _f3_relay_udp_stream_device_transition5_output__out[1] =  0.0;
    _f3_relay_udp_stream_device_transition5_output__out[2] =  0.0;
    _f3_relay_udp_stream_device_transition5_output__out[3] =  0.0;
    _f3_relay_udp_stream_device_transition5_output__out[4] =  0.0;
    _f3_relay_udp_stream_device_transition5_output__out[5] =  0.0;
    _f3_relay_udp_stream_device_transition5_output__out[6] =  0.0;
    _f3_relay_udp_stream_device_transition5_output__out[7] =  0.0;
    _f3_relay_udp_stream_device_transition5_output__out[8] =  0.0;
    _f3_relay_udp_stream_device_transition5_output__out[9] =  0.0;
    _f3_relay_udp_stream_device_transition7_output__out = (X_Int32) 0.0;
    _f3_relay_udp_stream_device_transition8_output__out[0] =  0.0;
    _f3_relay_udp_stream_device_transition8_output__out[1] =  0.0;
    _f3_relay_udp_stream_device_transition8_output__out[2] =  0.0;
    _f3_relay_udp_stream_device_transition8_output__out[3] =  0.0;
    _f3_relay_udp_stream_device_transition8_output__out[4] =  0.0;
    _f3_relay_udp_stream_device_transition8_output__out[5] =  0.0;
    _f3_relay_udp_stream_device_transition8_output__out[6] =  0.0;
    _f3_relay_udp_stream_device_transition8_output__out[7] =  0.0;
    _f3_relay_udp_stream_device_transition8_output__out[8] =  0.0;
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
    _f2_pcc_pcc_measurements_power_meter1__filter_1_output_k_minus_1 = 0.0;
    _f2_pcc_pcc_measurements_power_meter1__filter_1_input_k_minus_1 = 0.0;
    _f2_pcc_pcc_measurements_power_meter1__filter_1_output_k_minus_1Q = 0.0;
    _f2_pcc_pcc_measurements_power_meter1__filter_1_input_k_minus_1Q = 0.0;
    _f2_pcc_pcc_measurements_power_meter1__filter_1_output_k_minus_1P0 = 0.0;
    _f2_pcc_pcc_measurements_power_meter1__filter_1_input_k_minus_1P0 = 0.0;
    _f2_pcc_pcc_measurements_rms_value1__square_sum = 0x0;
    _f2_pcc_pcc_measurements_rms_value1__sample_cnt = 0x0;
    _f2_pcc_pcc_measurements_rms_value1__filtered_value = 0x0;
    _f2_pcc_pcc_measurements_rms_value1__out_state = 0x0;
    _f3_pcc_pcc_measurements_power_meter1__filter_1_output_k_minus_1 = 0.0;
    _f3_pcc_pcc_measurements_power_meter1__filter_1_input_k_minus_1 = 0.0;
    _f3_pcc_pcc_measurements_power_meter1__filter_1_output_k_minus_1Q = 0.0;
    _f3_pcc_pcc_measurements_power_meter1__filter_1_input_k_minus_1Q = 0.0;
    _f3_pcc_pcc_measurements_power_meter1__filter_1_output_k_minus_1P0 = 0.0;
    _f3_pcc_pcc_measurements_power_meter1__filter_1_input_k_minus_1P0 = 0.0;
    _f3_pcc_pcc_measurements_rms_value1__square_sum = 0x0;
    _f3_pcc_pcc_measurements_rms_value1__sample_cnt = 0x0;
    _f3_pcc_pcc_measurements_rms_value1__filtered_value = 0x0;
    _f3_pcc_pcc_measurements_rms_value1__out_state = 0x0;
    HIL_OutAO(0x4001, 0.0f);
    _f1_pcc_pcc_measurements_comparator1__state = 0.0f;
    _f1_pcc_pcc_measurements_comparator2__state = 0.0f;
    HIL_OutAO(0x4002, 0.0f);
    HIL_OutAO(0x4003, 0.0f);
    _f2_pcc_pcc_measurements_comparator1__state = 0.0f;
    _f2_pcc_pcc_measurements_comparator2__state = 0.0f;
    HIL_OutAO(0x4004, 0.0f);
    HIL_OutAO(0x4005, 0.0f);
    _f3_pcc_pcc_measurements_comparator1__state = 0.0f;
    _f3_pcc_pcc_measurements_comparator2__state = 0.0f;
    HIL_OutAO(0x4006, 0.0f);
    for (_f1_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_d__i = 0; _f1_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_d__i < 1; _f1_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_d__i++) {
        _f1_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_d__states[_f1_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_d__i] = 0.0;
    }
    for (_f1_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_q__i = 0; _f1_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_q__i < 1; _f1_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_q__i++) {
        _f1_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_q__states[_f1_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_q__i] = 0.0;
    }
    for (_f2_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_d__i = 0; _f2_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_d__i < 1; _f2_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_d__i++) {
        _f2_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_d__states[_f2_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_d__i] = 0.0;
    }
    for (_f2_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_q__i = 0; _f2_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_q__i < 1; _f2_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_q__i++) {
        _f2_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_q__states[_f2_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_q__i] = 0.0;
    }
    for (_f3_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_d__i = 0; _f3_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_d__i < 1; _f3_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_d__i++) {
        _f3_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_d__states[_f3_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_d__i] = 0.0;
    }
    for (_f3_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_q__i = 0; _f3_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_q__i < 1; _f3_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_q__i++) {
        _f3_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_q__states[_f3_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_q__i] = 0.0;
    }
    _f1_pcc_pcc_measurements_three_phase_pll1_normalize__in1 = 0;
    _f1_pcc_pcc_measurements_three_phase_pll1_normalize__in2 = 0;
    _f1_pcc_pcc_measurements_three_phase_pll1_normalize__pk = 0;
    _f2_pcc_pcc_measurements_three_phase_pll1_normalize__in1 = 0;
    _f2_pcc_pcc_measurements_three_phase_pll1_normalize__in2 = 0;
    _f2_pcc_pcc_measurements_three_phase_pll1_normalize__pk = 0;
    _f3_pcc_pcc_measurements_three_phase_pll1_normalize__in1 = 0;
    _f3_pcc_pcc_measurements_three_phase_pll1_normalize__in2 = 0;
    _f3_pcc_pcc_measurements_three_phase_pll1_normalize__pk = 0;
    _f1_pcc_pcc_measurements_three_phase_pll1_rate_limiter1__first_step = 1;
    _f1_pcc_pcc_measurements_three_phase_pll1_integrator__out = 0;
    _f1_pcc_pcc_measurements_three_phase_pll1_integrator__in = 0;
    _f2_pcc_pcc_measurements_three_phase_pll1_rate_limiter1__first_step = 1;
    _f2_pcc_pcc_measurements_three_phase_pll1_integrator__out = 0;
    _f2_pcc_pcc_measurements_three_phase_pll1_integrator__in = 0;
    for (int i_send = 0; i_send < 263; i_send++) {
        _udp_send_eth_ve_send1_struct_.in[i_send] = 0;
    }
    _f3_pcc_pcc_measurements_three_phase_pll1_rate_limiter1__first_step = 1;
    _f3_pcc_pcc_measurements_three_phase_pll1_integrator__out = 0;
    _f3_pcc_pcc_measurements_three_phase_pll1_integrator__in = 0;
    for (_f1_pcc_pcc_measurements_three_phase_pll1_lpf_lpf__i = 0; _f1_pcc_pcc_measurements_three_phase_pll1_lpf_lpf__i < 2; _f1_pcc_pcc_measurements_three_phase_pll1_lpf_lpf__i++) {
        _f1_pcc_pcc_measurements_three_phase_pll1_lpf_lpf__states[_f1_pcc_pcc_measurements_three_phase_pll1_lpf_lpf__i] = 15278.880894183112;
    }
    for (_f2_pcc_pcc_measurements_three_phase_pll1_lpf_lpf__i = 0; _f2_pcc_pcc_measurements_three_phase_pll1_lpf_lpf__i < 2; _f2_pcc_pcc_measurements_three_phase_pll1_lpf_lpf__i++) {
        _f2_pcc_pcc_measurements_three_phase_pll1_lpf_lpf__states[_f2_pcc_pcc_measurements_three_phase_pll1_lpf_lpf__i] = 15278.880894183112;
    }
    for (_f3_pcc_pcc_measurements_three_phase_pll1_lpf_lpf__i = 0; _f3_pcc_pcc_measurements_three_phase_pll1_lpf_lpf__i < 2; _f3_pcc_pcc_measurements_three_phase_pll1_lpf_lpf__i++) {
        _f3_pcc_pcc_measurements_three_phase_pll1_lpf_lpf__states[_f3_pcc_pcc_measurements_three_phase_pll1_lpf_lpf__i] = 15278.880894183112;
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
    // Generated from the component: DMS_ENGINE.Device Transition1.Output
    _dms_engine_device_transition1_output__out = HIL_InFloat(0x1f00200);
    // Generated from the component: DMS_ENGINE.Device Transition2.Output
    _dms_engine_device_transition2_output__out = HIL_InFloat(0x1f00210);
    // Generated from the component: DMS_ENGINE.Device Transition3.Output
    _dms_engine_device_transition3_output__out = HIL_InFloat(0x1f00220);
    // Generated from the component: DMS_ENGINE.Device Transition4.Output
    _dms_engine_device_transition4_output__out = HIL_InFloat(0x1f00230);
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
    _f1_pcc_meas1_ia_ia1__out = (HIL_InFloat(0xc80000 + 0x22));
    // Generated from the component: F1_PCC.Meas1.IB.Ia1
    _f1_pcc_meas1_ib_ia1__out = (HIL_InFloat(0xc80000 + 0x23));
    // Generated from the component: F1_PCC.Meas1.IC.Ia1
    _f1_pcc_meas1_ic_ia1__out = (HIL_InFloat(0xc80000 + 0x24));
    // Generated from the component: F1_PCC.Meas1.VA.Va1
    _f1_pcc_meas1_va_va1__out = (HIL_InFloat(0xc80000 + 0x15));
    // Generated from the component: F1_PCC.Meas1.VB.Va1
    _f1_pcc_meas1_vb_va1__out = (HIL_InFloat(0xc80000 + 0x16));
    // Generated from the component: F1_PCC.Meas1.VC.Va1
    _f1_pcc_meas1_vc_va1__out = (HIL_InFloat(0xc80000 + 0x17));
    // Generated from the component: F1_PCC.Meas2.VA.Va1
    _f1_pcc_meas2_va_va1__out = (HIL_InFloat(0xc80000 + 0x18));
    // Generated from the component: F1_PCC.Meas2.VB.Va1
    _f1_pcc_meas2_vb_va1__out = (HIL_InFloat(0xc80000 + 0x19));
    // Generated from the component: F1_PCC.Meas2.VC.Va1
    _f1_pcc_meas2_vc_va1__out = (HIL_InFloat(0xc80000 + 0x1a));
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
    // Generated from the component: F1_RELAY UDP Stream.Device Transition1.Output
    _f1_relay_udp_stream_device_transition1_output__out[0] = HIL_InFloat(0x1f00310);
    _f1_relay_udp_stream_device_transition1_output__out[1] = HIL_InFloat(0x1f00311);
    _f1_relay_udp_stream_device_transition1_output__out[2] = HIL_InFloat(0x1f00312);
    _f1_relay_udp_stream_device_transition1_output__out[3] = HIL_InFloat(0x1f00313);
    _f1_relay_udp_stream_device_transition1_output__out[4] = HIL_InFloat(0x1f00314);
    _f1_relay_udp_stream_device_transition1_output__out[5] = HIL_InFloat(0x1f00315);
    _f1_relay_udp_stream_device_transition1_output__out[6] = HIL_InFloat(0x1f00316);
    _f1_relay_udp_stream_device_transition1_output__out[7] = HIL_InFloat(0x1f00317);
    _f1_relay_udp_stream_device_transition1_output__out[8] = HIL_InFloat(0x1f00318);
    _f1_relay_udp_stream_device_transition1_output__out[9] = HIL_InFloat(0x1f00319);
    _f1_relay_udp_stream_device_transition1_output__out[10] = HIL_InFloat(0x1f0031a);
    _f1_relay_udp_stream_device_transition1_output__out[11] = HIL_InFloat(0x1f0031b);
    _f1_relay_udp_stream_device_transition1_output__out[12] = HIL_InFloat(0x1f0031c);
    _f1_relay_udp_stream_device_transition1_output__out[13] = HIL_InFloat(0x1f0031d);
    _f1_relay_udp_stream_device_transition1_output__out[14] = HIL_InFloat(0x1f0031e);
    // Generated from the component: F1_RELAY UDP Stream.Device Transition2.Output
    _f1_relay_udp_stream_device_transition2_output__out[0] = HIL_InFloat(0x1f00320);
    _f1_relay_udp_stream_device_transition2_output__out[1] = HIL_InFloat(0x1f00321);
    _f1_relay_udp_stream_device_transition2_output__out[2] = HIL_InFloat(0x1f00322);
    _f1_relay_udp_stream_device_transition2_output__out[3] = HIL_InFloat(0x1f00323);
    _f1_relay_udp_stream_device_transition2_output__out[4] = HIL_InFloat(0x1f00324);
    _f1_relay_udp_stream_device_transition2_output__out[5] = HIL_InFloat(0x1f00325);
    _f1_relay_udp_stream_device_transition2_output__out[6] = HIL_InFloat(0x1f00326);
    _f1_relay_udp_stream_device_transition2_output__out[7] = HIL_InFloat(0x1f00327);
    _f1_relay_udp_stream_device_transition2_output__out[8] = HIL_InFloat(0x1f00328);
    _f1_relay_udp_stream_device_transition2_output__out[9] = HIL_InFloat(0x1f00329);
    _f1_relay_udp_stream_device_transition2_output__out[10] = HIL_InFloat(0x1f0032a);
    _f1_relay_udp_stream_device_transition2_output__out[11] = HIL_InFloat(0x1f0032b);
    _f1_relay_udp_stream_device_transition2_output__out[12] = HIL_InFloat(0x1f0032c);
    _f1_relay_udp_stream_device_transition2_output__out[13] = HIL_InFloat(0x1f0032d);
    _f1_relay_udp_stream_device_transition2_output__out[14] = HIL_InFloat(0x1f0032e);
    // Generated from the component: F1_RELAY UDP Stream.Device Transition3.Output
    _f1_relay_udp_stream_device_transition3_output__out = HIL_InInt32(0x1f00330);
    // Generated from the component: F1_RELAY UDP Stream.Device Transition4.Output
    _f1_relay_udp_stream_device_transition4_output__out[0] = HIL_InFloat(0x1f00340);
    _f1_relay_udp_stream_device_transition4_output__out[1] = HIL_InFloat(0x1f00341);
    _f1_relay_udp_stream_device_transition4_output__out[2] = HIL_InFloat(0x1f00342);
    _f1_relay_udp_stream_device_transition4_output__out[3] = HIL_InFloat(0x1f00343);
    _f1_relay_udp_stream_device_transition4_output__out[4] = HIL_InFloat(0x1f00344);
    _f1_relay_udp_stream_device_transition4_output__out[5] = HIL_InFloat(0x1f00345);
    _f1_relay_udp_stream_device_transition4_output__out[6] = HIL_InFloat(0x1f00346);
    _f1_relay_udp_stream_device_transition4_output__out[7] = HIL_InFloat(0x1f00347);
    _f1_relay_udp_stream_device_transition4_output__out[8] = HIL_InFloat(0x1f00348);
    _f1_relay_udp_stream_device_transition4_output__out[9] = HIL_InFloat(0x1f00349);
    _f1_relay_udp_stream_device_transition4_output__out[10] = HIL_InFloat(0x1f0034a);
    _f1_relay_udp_stream_device_transition4_output__out[11] = HIL_InFloat(0x1f0034b);
    _f1_relay_udp_stream_device_transition4_output__out[12] = HIL_InFloat(0x1f0034c);
    _f1_relay_udp_stream_device_transition4_output__out[13] = HIL_InFloat(0x1f0034d);
    _f1_relay_udp_stream_device_transition4_output__out[14] = HIL_InFloat(0x1f0034e);
    // Generated from the component: F1_RELAY UDP Stream.Device Transition5.Output
    _f1_relay_udp_stream_device_transition5_output__out[0] = HIL_InFloat(0x1f00350);
    _f1_relay_udp_stream_device_transition5_output__out[1] = HIL_InFloat(0x1f00351);
    _f1_relay_udp_stream_device_transition5_output__out[2] = HIL_InFloat(0x1f00352);
    _f1_relay_udp_stream_device_transition5_output__out[3] = HIL_InFloat(0x1f00353);
    _f1_relay_udp_stream_device_transition5_output__out[4] = HIL_InFloat(0x1f00354);
    _f1_relay_udp_stream_device_transition5_output__out[5] = HIL_InFloat(0x1f00355);
    _f1_relay_udp_stream_device_transition5_output__out[6] = HIL_InFloat(0x1f00356);
    _f1_relay_udp_stream_device_transition5_output__out[7] = HIL_InFloat(0x1f00357);
    _f1_relay_udp_stream_device_transition5_output__out[8] = HIL_InFloat(0x1f00358);
    _f1_relay_udp_stream_device_transition5_output__out[9] = HIL_InFloat(0x1f00359);
    _f1_relay_udp_stream_device_transition5_output__out[10] = HIL_InFloat(0x1f0035a);
    _f1_relay_udp_stream_device_transition5_output__out[11] = HIL_InFloat(0x1f0035b);
    _f1_relay_udp_stream_device_transition5_output__out[12] = HIL_InFloat(0x1f0035c);
    _f1_relay_udp_stream_device_transition5_output__out[13] = HIL_InFloat(0x1f0035d);
    _f1_relay_udp_stream_device_transition5_output__out[14] = HIL_InFloat(0x1f0035e);
    // Generated from the component: F1_RELAY UDP Stream.Device Transition7.Output
    _f1_relay_udp_stream_device_transition7_output__out = HIL_InInt32(0x1f00370);
    // Generated from the component: F1_RELAY UDP Stream.Device Transition8.Output
    _f1_relay_udp_stream_device_transition8_output__out = HIL_InFloat(0x1f00300);
    // Generated from the component: F1_RELAY UDP Stream.Device Transition9.Output
    _f1_relay_udp_stream_device_transition9_output__out = HIL_InFloat(0x1f00360);
    // Generated from the component: F2_PCC.Digital Input Close
    _f2_pcc_digital_input_close__out = HIL_InInt32(0xf80207);
    if(_f2_pcc_digital_input_close__out == 0) {
        _f2_pcc_digital_input_close__out = 1;
    } else {
        _f2_pcc_digital_input_close__out = 0;
    }
    // Generated from the component: F2_PCC.Digital Input Trip
    _f2_pcc_digital_input_trip__out = HIL_InInt32(0xf80208);
    if(_f2_pcc_digital_input_trip__out == 0) {
        _f2_pcc_digital_input_trip__out = 1;
    } else {
        _f2_pcc_digital_input_trip__out = 0;
    }
    // Generated from the component: F2_PCC.Meas1.IA.Ia1
    _f2_pcc_meas1_ia_ia1__out = (HIL_InFloat(0xc80000 + 0x25));
    // Generated from the component: F2_PCC.Meas1.IB.Ia1
    _f2_pcc_meas1_ib_ia1__out = (HIL_InFloat(0xc80000 + 0x26));
    // Generated from the component: F2_PCC.Meas1.IC.Ia1
    _f2_pcc_meas1_ic_ia1__out = (HIL_InFloat(0xc80000 + 0x27));
    // Generated from the component: F2_PCC.Meas1.VA.Va1
    _f2_pcc_meas1_va_va1__out = (HIL_InFloat(0xc80000 + 0x1b));
    // Generated from the component: F2_PCC.Meas1.VB.Va1
    _f2_pcc_meas1_vb_va1__out = (HIL_InFloat(0xc80000 + 0x1c));
    // Generated from the component: F2_PCC.Meas1.VC.Va1
    _f2_pcc_meas1_vc_va1__out = (HIL_InFloat(0xc80000 + 0x1d));
    // Generated from the component: F2_PCC.Meas2.VA.Va1
    _f2_pcc_meas2_va_va1__out = (HIL_InFloat(0xc80000 + 0x1e));
    // Generated from the component: F2_PCC.Meas2.VB.Va1
    _f2_pcc_meas2_vb_va1__out = (HIL_InFloat(0xc80000 + 0x1f));
    // Generated from the component: F2_PCC.Meas2.VC.Va1
    _f2_pcc_meas2_vc_va1__out = (HIL_InFloat(0xc80000 + 0x20));
    // Generated from the component: F2_PCC.PCC Measurements.Constant1
    // Generated from the component: F2_PCC.PCC Measurements.Constant2
    // Generated from the component: F2_PCC.PCC Measurements.Three phase PLL1.PID.Integrator1
    _f2_pcc_pcc_measurements_three_phase_pll1_pid_integrator1__out = _f2_pcc_pcc_measurements_three_phase_pll1_pid_integrator1__state;
    // Generated from the component: F2_PCC.PCC Measurements.Three phase PLL1.PID.Integrator2
    _f2_pcc_pcc_measurements_three_phase_pll1_pid_integrator2__out = _f2_pcc_pcc_measurements_three_phase_pll1_pid_integrator2__state;
    // Generated from the component: F2_PCC.PCC Measurements.Three phase PLL1.Unit Delay1
    _f2_pcc_pcc_measurements_three_phase_pll1_unit_delay1__out = _f2_pcc_pcc_measurements_three_phase_pll1_unit_delay1__state;
    // Generated from the component: F2_PCC.PCC Measurements.Three phase PLL1.to_Hz
    _f2_pcc_pcc_measurements_three_phase_pll1_to_hz__out = 0.15915494309189535 * _f2_pcc_pcc_measurements_three_phase_pll1_lpf_lpf__out;
    // Generated from the component: F2_PCC.SR Flip Flop1
    _f2_pcc_sr_flip_flop1__out = _f2_pcc_sr_flip_flop1__state;
    _f2_pcc_sr_flip_flop1__out_n = _f2_pcc_sr_flip_flop1__state != -1 ? !_f2_pcc_sr_flip_flop1__state : -1;
    // Generated from the component: F2_RELAY UDP Stream.Device Transition1.Output
    _f2_relay_udp_stream_device_transition1_output__out[0] = HIL_InFloat(0x1f00120);
    _f2_relay_udp_stream_device_transition1_output__out[1] = HIL_InFloat(0x1f00121);
    _f2_relay_udp_stream_device_transition1_output__out[2] = HIL_InFloat(0x1f00122);
    _f2_relay_udp_stream_device_transition1_output__out[3] = HIL_InFloat(0x1f00123);
    _f2_relay_udp_stream_device_transition1_output__out[4] = HIL_InFloat(0x1f00124);
    _f2_relay_udp_stream_device_transition1_output__out[5] = HIL_InFloat(0x1f00125);
    _f2_relay_udp_stream_device_transition1_output__out[6] = HIL_InFloat(0x1f00126);
    _f2_relay_udp_stream_device_transition1_output__out[7] = HIL_InFloat(0x1f00127);
    _f2_relay_udp_stream_device_transition1_output__out[8] = HIL_InFloat(0x1f00128);
    _f2_relay_udp_stream_device_transition1_output__out[9] = HIL_InFloat(0x1f00129);
    _f2_relay_udp_stream_device_transition1_output__out[10] = HIL_InFloat(0x1f0012a);
    _f2_relay_udp_stream_device_transition1_output__out[11] = HIL_InFloat(0x1f0012b);
    _f2_relay_udp_stream_device_transition1_output__out[12] = HIL_InFloat(0x1f0012c);
    _f2_relay_udp_stream_device_transition1_output__out[13] = HIL_InFloat(0x1f0012d);
    _f2_relay_udp_stream_device_transition1_output__out[14] = HIL_InFloat(0x1f0012e);
    _f2_relay_udp_stream_device_transition1_output__out[15] = HIL_InFloat(0x1f0012f);
    // Generated from the component: F2_RELAY UDP Stream.Device Transition10.Output
    _f2_relay_udp_stream_device_transition10_output__out = HIL_InInt32(0x1f00110);
    // Generated from the component: F2_RELAY UDP Stream.Device Transition11.Output
    _f2_relay_udp_stream_device_transition11_output__out = HIL_InFloat(0x1f00170);
    // Generated from the component: F2_RELAY UDP Stream.Device Transition12.Output
    _f2_relay_udp_stream_device_transition12_output__out = HIL_InFloat(0x1f00180);
    // Generated from the component: F2_RELAY UDP Stream.Device Transition2.Output
    _f2_relay_udp_stream_device_transition2_output__out[0] = HIL_InFloat(0x1f00100);
    _f2_relay_udp_stream_device_transition2_output__out[1] = HIL_InFloat(0x1f00101);
    _f2_relay_udp_stream_device_transition2_output__out[2] = HIL_InFloat(0x1f00102);
    _f2_relay_udp_stream_device_transition2_output__out[3] = HIL_InFloat(0x1f00103);
    _f2_relay_udp_stream_device_transition2_output__out[4] = HIL_InFloat(0x1f00104);
    _f2_relay_udp_stream_device_transition2_output__out[5] = HIL_InFloat(0x1f00105);
    _f2_relay_udp_stream_device_transition2_output__out[6] = HIL_InFloat(0x1f00106);
    _f2_relay_udp_stream_device_transition2_output__out[7] = HIL_InFloat(0x1f00107);
    _f2_relay_udp_stream_device_transition2_output__out[8] = HIL_InFloat(0x1f00108);
    _f2_relay_udp_stream_device_transition2_output__out[9] = HIL_InFloat(0x1f00109);
    _f2_relay_udp_stream_device_transition2_output__out[10] = HIL_InFloat(0x1f0010a);
    _f2_relay_udp_stream_device_transition2_output__out[11] = HIL_InFloat(0x1f0010b);
    _f2_relay_udp_stream_device_transition2_output__out[12] = HIL_InFloat(0x1f0010c);
    _f2_relay_udp_stream_device_transition2_output__out[13] = HIL_InFloat(0x1f0010d);
    _f2_relay_udp_stream_device_transition2_output__out[14] = HIL_InFloat(0x1f0010e);
    _f2_relay_udp_stream_device_transition2_output__out[15] = HIL_InFloat(0x1f0010f);
    // Generated from the component: F2_RELAY UDP Stream.Device Transition3.Output
    _f2_relay_udp_stream_device_transition3_output__out = HIL_InInt32(0x1f00160);
    // Generated from the component: F2_RELAY UDP Stream.Device Transition4.Output
    _f2_relay_udp_stream_device_transition4_output__out[0] = HIL_InFloat(0x1f00190);
    _f2_relay_udp_stream_device_transition4_output__out[1] = HIL_InFloat(0x1f00191);
    _f2_relay_udp_stream_device_transition4_output__out[2] = HIL_InFloat(0x1f00192);
    _f2_relay_udp_stream_device_transition4_output__out[3] = HIL_InFloat(0x1f00193);
    _f2_relay_udp_stream_device_transition4_output__out[4] = HIL_InFloat(0x1f00194);
    _f2_relay_udp_stream_device_transition4_output__out[5] = HIL_InFloat(0x1f00195);
    _f2_relay_udp_stream_device_transition4_output__out[6] = HIL_InFloat(0x1f00196);
    _f2_relay_udp_stream_device_transition4_output__out[7] = HIL_InFloat(0x1f00197);
    _f2_relay_udp_stream_device_transition4_output__out[8] = HIL_InFloat(0x1f00198);
    _f2_relay_udp_stream_device_transition4_output__out[9] = HIL_InFloat(0x1f00199);
    _f2_relay_udp_stream_device_transition4_output__out[10] = HIL_InFloat(0x1f0019a);
    _f2_relay_udp_stream_device_transition4_output__out[11] = HIL_InFloat(0x1f0019b);
    _f2_relay_udp_stream_device_transition4_output__out[12] = HIL_InFloat(0x1f0019c);
    _f2_relay_udp_stream_device_transition4_output__out[13] = HIL_InFloat(0x1f0019d);
    _f2_relay_udp_stream_device_transition4_output__out[14] = HIL_InFloat(0x1f0019e);
    _f2_relay_udp_stream_device_transition4_output__out[15] = HIL_InFloat(0x1f0019f);
    // Generated from the component: F2_RELAY UDP Stream.Device Transition5.Output
    _f2_relay_udp_stream_device_transition5_output__out[0] = HIL_InFloat(0x1f001a0);
    _f2_relay_udp_stream_device_transition5_output__out[1] = HIL_InFloat(0x1f001a1);
    _f2_relay_udp_stream_device_transition5_output__out[2] = HIL_InFloat(0x1f001a2);
    _f2_relay_udp_stream_device_transition5_output__out[3] = HIL_InFloat(0x1f001a3);
    _f2_relay_udp_stream_device_transition5_output__out[4] = HIL_InFloat(0x1f001a4);
    _f2_relay_udp_stream_device_transition5_output__out[5] = HIL_InFloat(0x1f001a5);
    _f2_relay_udp_stream_device_transition5_output__out[6] = HIL_InFloat(0x1f001a6);
    _f2_relay_udp_stream_device_transition5_output__out[7] = HIL_InFloat(0x1f001a7);
    _f2_relay_udp_stream_device_transition5_output__out[8] = HIL_InFloat(0x1f001a8);
    _f2_relay_udp_stream_device_transition5_output__out[9] = HIL_InFloat(0x1f001a9);
    _f2_relay_udp_stream_device_transition5_output__out[10] = HIL_InFloat(0x1f001aa);
    _f2_relay_udp_stream_device_transition5_output__out[11] = HIL_InFloat(0x1f001ab);
    _f2_relay_udp_stream_device_transition5_output__out[12] = HIL_InFloat(0x1f001ac);
    _f2_relay_udp_stream_device_transition5_output__out[13] = HIL_InFloat(0x1f001ad);
    _f2_relay_udp_stream_device_transition5_output__out[14] = HIL_InFloat(0x1f001ae);
    _f2_relay_udp_stream_device_transition5_output__out[15] = HIL_InFloat(0x1f001af);
    // Generated from the component: F2_RELAY UDP Stream.Device Transition6.Output
    _f2_relay_udp_stream_device_transition6_output__out[0] = HIL_InFloat(0x1f00150);
    _f2_relay_udp_stream_device_transition6_output__out[1] = HIL_InFloat(0x1f00151);
    _f2_relay_udp_stream_device_transition6_output__out[2] = HIL_InFloat(0x1f00152);
    // Generated from the component: F2_RELAY UDP Stream.Device Transition7.Output
    _f2_relay_udp_stream_device_transition7_output__out[0] = HIL_InFloat(0x1f00130);
    _f2_relay_udp_stream_device_transition7_output__out[1] = HIL_InFloat(0x1f00131);
    _f2_relay_udp_stream_device_transition7_output__out[2] = HIL_InFloat(0x1f00132);
    // Generated from the component: F2_RELAY UDP Stream.Device Transition8.Output
    _f2_relay_udp_stream_device_transition8_output__out[0] = HIL_InFloat(0x1f001b0);
    _f2_relay_udp_stream_device_transition8_output__out[1] = HIL_InFloat(0x1f001b1);
    _f2_relay_udp_stream_device_transition8_output__out[2] = HIL_InFloat(0x1f001b2);
    // Generated from the component: F2_RELAY UDP Stream.Device Transition9.Output
    _f2_relay_udp_stream_device_transition9_output__out[0] = HIL_InFloat(0x1f00140);
    _f2_relay_udp_stream_device_transition9_output__out[1] = HIL_InFloat(0x1f00141);
    _f2_relay_udp_stream_device_transition9_output__out[2] = HIL_InFloat(0x1f00142);
    // Generated from the component: F3_PCC.Digital Input Close2
    _f3_pcc_digital_input_close2__out = HIL_InInt32(0xf8020a);
    if(_f3_pcc_digital_input_close2__out == 0) {
        _f3_pcc_digital_input_close2__out = 1;
    } else {
        _f3_pcc_digital_input_close2__out = 0;
    }
    // Generated from the component: F3_PCC.Digital Input Trip2
    _f3_pcc_digital_input_trip2__out = HIL_InInt32(0xf8020b);
    if(_f3_pcc_digital_input_trip2__out == 0) {
        _f3_pcc_digital_input_trip2__out = 1;
    } else {
        _f3_pcc_digital_input_trip2__out = 0;
    }
    // Generated from the component: F3_PCC.Meas1.IA.Ia1
    _f3_pcc_meas1_ia_ia1__out = (HIL_InFloat(0xc80000 + 0x20f));
    // Generated from the component: F3_PCC.Meas1.IB.Ia1
    _f3_pcc_meas1_ib_ia1__out = (HIL_InFloat(0xc80000 + 0x210));
    // Generated from the component: F3_PCC.Meas1.IC.Ia1
    _f3_pcc_meas1_ic_ia1__out = (HIL_InFloat(0xc80000 + 0x211));
    // Generated from the component: F3_PCC.Meas1.VA.Va1
    _f3_pcc_meas1_va_va1__out = (HIL_InFloat(0xc80000 + 0x209));
    // Generated from the component: F3_PCC.Meas1.VB.Va1
    _f3_pcc_meas1_vb_va1__out = (HIL_InFloat(0xc80000 + 0x20a));
    // Generated from the component: F3_PCC.Meas1.VC.Va1
    _f3_pcc_meas1_vc_va1__out = (HIL_InFloat(0xc80000 + 0x20b));
    // Generated from the component: F3_PCC.Meas2.VA.Va1
    _f3_pcc_meas2_va_va1__out = (HIL_InFloat(0xc80000 + 0x20c));
    // Generated from the component: F3_PCC.Meas2.VB.Va1
    _f3_pcc_meas2_vb_va1__out = (HIL_InFloat(0xc80000 + 0x20d));
    // Generated from the component: F3_PCC.Meas2.VC.Va1
    _f3_pcc_meas2_vc_va1__out = (HIL_InFloat(0xc80000 + 0x20e));
    // Generated from the component: F3_PCC.PCC Measurements.Constant1
    // Generated from the component: F3_PCC.PCC Measurements.Constant2
    // Generated from the component: F3_PCC.PCC Measurements.Three phase PLL1.PID.Integrator1
    _f3_pcc_pcc_measurements_three_phase_pll1_pid_integrator1__out = _f3_pcc_pcc_measurements_three_phase_pll1_pid_integrator1__state;
    // Generated from the component: F3_PCC.PCC Measurements.Three phase PLL1.PID.Integrator2
    _f3_pcc_pcc_measurements_three_phase_pll1_pid_integrator2__out = _f3_pcc_pcc_measurements_three_phase_pll1_pid_integrator2__state;
    // Generated from the component: F3_PCC.PCC Measurements.Three phase PLL1.Unit Delay1
    _f3_pcc_pcc_measurements_three_phase_pll1_unit_delay1__out = _f3_pcc_pcc_measurements_three_phase_pll1_unit_delay1__state;
    // Generated from the component: F3_PCC.PCC Measurements.Three phase PLL1.to_Hz
    _f3_pcc_pcc_measurements_three_phase_pll1_to_hz__out = 0.15915494309189535 * _f3_pcc_pcc_measurements_three_phase_pll1_lpf_lpf__out;
    // Generated from the component: F3_PCC.SR Flip Flop3
    _f3_pcc_sr_flip_flop3__out = _f3_pcc_sr_flip_flop3__state;
    _f3_pcc_sr_flip_flop3__out_n = _f3_pcc_sr_flip_flop3__state != -1 ? !_f3_pcc_sr_flip_flop3__state : -1;
    // Generated from the component: F3_RELAY UDP Stream.Device Transition1.Output
    _f3_relay_udp_stream_device_transition1_output__out[0] = HIL_InFloat(0x1f002a0);
    _f3_relay_udp_stream_device_transition1_output__out[1] = HIL_InFloat(0x1f002a1);
    _f3_relay_udp_stream_device_transition1_output__out[2] = HIL_InFloat(0x1f002a2);
    _f3_relay_udp_stream_device_transition1_output__out[3] = HIL_InFloat(0x1f002a3);
    _f3_relay_udp_stream_device_transition1_output__out[4] = HIL_InFloat(0x1f002a4);
    _f3_relay_udp_stream_device_transition1_output__out[5] = HIL_InFloat(0x1f002a5);
    _f3_relay_udp_stream_device_transition1_output__out[6] = HIL_InFloat(0x1f002a6);
    _f3_relay_udp_stream_device_transition1_output__out[7] = HIL_InFloat(0x1f002a7);
    _f3_relay_udp_stream_device_transition1_output__out[8] = HIL_InFloat(0x1f002a8);
    _f3_relay_udp_stream_device_transition1_output__out[9] = HIL_InFloat(0x1f002a9);
    // Generated from the component: F3_RELAY UDP Stream.Device Transition2.Output
    _f3_relay_udp_stream_device_transition2_output__out[0] = HIL_InFloat(0x1f00280);
    _f3_relay_udp_stream_device_transition2_output__out[1] = HIL_InFloat(0x1f00281);
    _f3_relay_udp_stream_device_transition2_output__out[2] = HIL_InFloat(0x1f00282);
    _f3_relay_udp_stream_device_transition2_output__out[3] = HIL_InFloat(0x1f00283);
    _f3_relay_udp_stream_device_transition2_output__out[4] = HIL_InFloat(0x1f00284);
    _f3_relay_udp_stream_device_transition2_output__out[5] = HIL_InFloat(0x1f00285);
    _f3_relay_udp_stream_device_transition2_output__out[6] = HIL_InFloat(0x1f00286);
    _f3_relay_udp_stream_device_transition2_output__out[7] = HIL_InFloat(0x1f00287);
    _f3_relay_udp_stream_device_transition2_output__out[8] = HIL_InFloat(0x1f00288);
    _f3_relay_udp_stream_device_transition2_output__out[9] = HIL_InFloat(0x1f00289);
    // Generated from the component: F3_RELAY UDP Stream.Device Transition3.Output
    _f3_relay_udp_stream_device_transition3_output__out = HIL_InInt32(0x1f00260);
    // Generated from the component: F3_RELAY UDP Stream.Device Transition4.Output
    _f3_relay_udp_stream_device_transition4_output__out[0] = HIL_InFloat(0x1f00270);
    _f3_relay_udp_stream_device_transition4_output__out[1] = HIL_InFloat(0x1f00271);
    _f3_relay_udp_stream_device_transition4_output__out[2] = HIL_InFloat(0x1f00272);
    _f3_relay_udp_stream_device_transition4_output__out[3] = HIL_InFloat(0x1f00273);
    _f3_relay_udp_stream_device_transition4_output__out[4] = HIL_InFloat(0x1f00274);
    _f3_relay_udp_stream_device_transition4_output__out[5] = HIL_InFloat(0x1f00275);
    _f3_relay_udp_stream_device_transition4_output__out[6] = HIL_InFloat(0x1f00276);
    _f3_relay_udp_stream_device_transition4_output__out[7] = HIL_InFloat(0x1f00277);
    _f3_relay_udp_stream_device_transition4_output__out[8] = HIL_InFloat(0x1f00278);
    _f3_relay_udp_stream_device_transition4_output__out[9] = HIL_InFloat(0x1f00279);
    // Generated from the component: F3_RELAY UDP Stream.Device Transition5.Output
    _f3_relay_udp_stream_device_transition5_output__out[0] = HIL_InFloat(0x1f00250);
    _f3_relay_udp_stream_device_transition5_output__out[1] = HIL_InFloat(0x1f00251);
    _f3_relay_udp_stream_device_transition5_output__out[2] = HIL_InFloat(0x1f00252);
    _f3_relay_udp_stream_device_transition5_output__out[3] = HIL_InFloat(0x1f00253);
    _f3_relay_udp_stream_device_transition5_output__out[4] = HIL_InFloat(0x1f00254);
    _f3_relay_udp_stream_device_transition5_output__out[5] = HIL_InFloat(0x1f00255);
    _f3_relay_udp_stream_device_transition5_output__out[6] = HIL_InFloat(0x1f00256);
    _f3_relay_udp_stream_device_transition5_output__out[7] = HIL_InFloat(0x1f00257);
    _f3_relay_udp_stream_device_transition5_output__out[8] = HIL_InFloat(0x1f00258);
    _f3_relay_udp_stream_device_transition5_output__out[9] = HIL_InFloat(0x1f00259);
    // Generated from the component: F3_RELAY UDP Stream.Device Transition7.Output
    _f3_relay_udp_stream_device_transition7_output__out = HIL_InInt32(0x1f00290);
    // Generated from the component: F3_RELAY UDP Stream.Device Transition8.Output
    _f3_relay_udp_stream_device_transition8_output__out[0] = HIL_InFloat(0x1f00240);
    _f3_relay_udp_stream_device_transition8_output__out[1] = HIL_InFloat(0x1f00241);
    _f3_relay_udp_stream_device_transition8_output__out[2] = HIL_InFloat(0x1f00242);
    _f3_relay_udp_stream_device_transition8_output__out[3] = HIL_InFloat(0x1f00243);
    _f3_relay_udp_stream_device_transition8_output__out[4] = HIL_InFloat(0x1f00244);
    _f3_relay_udp_stream_device_transition8_output__out[5] = HIL_InFloat(0x1f00245);
    _f3_relay_udp_stream_device_transition8_output__out[6] = HIL_InFloat(0x1f00246);
    _f3_relay_udp_stream_device_transition8_output__out[7] = HIL_InFloat(0x1f00247);
    _f3_relay_udp_stream_device_transition8_output__out[8] = HIL_InFloat(0x1f00248);
    // Generated from the component: DMS_ENGINE.Signal Device Marker2
    // Generated from the component: DMS_ENGINE.Signal Device Marker3
    // Generated from the component: DMS_ENGINE.Signal Device Marker5
    // Generated from the component: DMS_ENGINE.Signal Device Marker7
    // Generated from the component: UDP Send.DMS
    _udp_send_dms__out[0] = _dms_engine_device_transition1_output__out;
    _udp_send_dms__out[1] = _dms_engine_device_transition2_output__out;
    _udp_send_dms__out[2] = _dms_engine_device_transition3_output__out;
    _udp_send_dms__out[3] = _dms_engine_device_transition4_output__out;
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
    _f1_pcc_pcc_measurements_three_phase_pll1_sin__out = sinf(_f1_pcc_pcc_measurements_three_phase_pll1_unit_delay1__out);
    // Generated from the component: F1_PCC.Gain4
    _f1_pcc_gain4__out = 100.0 * _f1_pcc_pcc_measurements_three_phase_pll1_to_hz__out;
    // Generated from the component: Device Transition1.Input
    while(HIL_InInt32(31457284));
    HIL_OutInt32(0x1e80c00, _f1_pcc_sr_flip_flop1__out);
    HIL_OutInt32(31457280, 1);
    HIL_OutInt32(31457281, 0x3);
    HIL_OutInt32(31457282, 0x0);
    HIL_OutInt32(31457283, 1);
    // Generated from the component: F1_PCC.Data Type Conversion1
    _f1_pcc_data_type_conversion1__out = (float)_f1_pcc_sr_flip_flop1__out;
    // Generated from the component: F1_PCC.S1.CTC_Wrapper
    if (_f1_pcc_sr_flip_flop1__out == 0x0) {
        HIL_OutInt32(0x8240480, 0x0);
    }
    else {
        HIL_OutInt32(0x8240480, 0x1);
    }
    // Generated from the component: F1_RELAY UDP Stream.SDM8
    // Generated from the component: F1_RELAY UDP Stream.SDM11
    // Generated from the component: F1_RELAY UDP Stream.SDM12
    // Generated from the component: UDP Send.Boolean Split1
    _udp_send_boolean_split1__input = _f1_relay_udp_stream_device_transition3_output__out;
    _udp_send_boolean_split1__out[0] = _udp_send_boolean_split1__input & 0x01;
    _udp_send_boolean_split1__input >>= 1;
    _udp_send_boolean_split1__out[1] = _udp_send_boolean_split1__input & 0x01;
    _udp_send_boolean_split1__input >>= 1;
    _udp_send_boolean_split1__out[2] = _udp_send_boolean_split1__input & 0x01;
    _udp_send_boolean_split1__input >>= 1;
    _udp_send_boolean_split1__out[3] = _udp_send_boolean_split1__input & 0x01;
    _udp_send_boolean_split1__input >>= 1;
    _udp_send_boolean_split1__out[4] = _udp_send_boolean_split1__input & 0x01;
    _udp_send_boolean_split1__input >>= 1;
    _udp_send_boolean_split1__out[5] = _udp_send_boolean_split1__input & 0x01;
    _udp_send_boolean_split1__input >>= 1;
    _udp_send_boolean_split1__out[6] = _udp_send_boolean_split1__input & 0x01;
    _udp_send_boolean_split1__input >>= 1;
    _udp_send_boolean_split1__out[7] = _udp_send_boolean_split1__input & 0x01;
    _udp_send_boolean_split1__input >>= 1;
    _udp_send_boolean_split1__out[8] = _udp_send_boolean_split1__input & 0x01;
    _udp_send_boolean_split1__input >>= 1;
    _udp_send_boolean_split1__out[9] = _udp_send_boolean_split1__input & 0x01;
    _udp_send_boolean_split1__input >>= 1;
    _udp_send_boolean_split1__out[10] = _udp_send_boolean_split1__input & 0x01;
    _udp_send_boolean_split1__input >>= 1;
    _udp_send_boolean_split1__out[11] = _udp_send_boolean_split1__input & 0x01;
    _udp_send_boolean_split1__input >>= 1;
    _udp_send_boolean_split1__out[12] = _udp_send_boolean_split1__input & 0x01;
    _udp_send_boolean_split1__input >>= 1;
    _udp_send_boolean_split1__out[13] = _udp_send_boolean_split1__input & 0x01;
    _udp_send_boolean_split1__input >>= 1;
    _udp_send_boolean_split1__out[14] = _udp_send_boolean_split1__input & 0x01;
    _udp_send_boolean_split1__input >>= 1;
    // Generated from the component: F1_RELAY UDP Stream.SDM10
    // Generated from the component: F1_RELAY UDP Stream.SDM9
    // Generated from the component: F1_RELAY UDP Stream.SDM14
    // Generated from the component: UDP Send.Data Type Conversion9
    _udp_send_data_type_conversion9__out = (X_Int32)_f1_relay_udp_stream_device_transition7_output__out;
    // Generated from the component: F1_RELAY UDP Stream.SDM16
    // Generated from the component: UDP Send.Data Type Conversion17
    _udp_send_data_type_conversion17__out = (X_Int32)_f1_relay_udp_stream_device_transition8_output__out;
    // Generated from the component: F1_RELAY UDP Stream.SDM18
    // Generated from the component: UDP Send.Data Type Conversion18
    _udp_send_data_type_conversion18__out = (X_Int32)_f1_relay_udp_stream_device_transition9_output__out;
    // Generated from the component: F2_PCC.Meas1.Bus Join2
    _f2_pcc_meas1_bus_join2__out[0] = _f2_pcc_meas1_ia_ia1__out;
    _f2_pcc_meas1_bus_join2__out[1] = _f2_pcc_meas1_ib_ia1__out;
    _f2_pcc_meas1_bus_join2__out[2] = _f2_pcc_meas1_ic_ia1__out;
    // Generated from the component: F2_PCC.Meas1.Bus Join1
    _f2_pcc_meas1_bus_join1__out[0] = _f2_pcc_meas1_va_va1__out;
    _f2_pcc_meas1_bus_join1__out[1] = _f2_pcc_meas1_vb_va1__out;
    _f2_pcc_meas1_bus_join1__out[2] = _f2_pcc_meas1_vc_va1__out;
    // Generated from the component: F2_PCC.Meas2.Bus Join1
    _f2_pcc_meas2_bus_join1__out[0] = _f2_pcc_meas2_va_va1__out;
    _f2_pcc_meas2_bus_join1__out[1] = _f2_pcc_meas2_vb_va1__out;
    _f2_pcc_meas2_bus_join1__out[2] = _f2_pcc_meas2_vc_va1__out;
    // Generated from the component: F2_PCC.PCC Measurements.Termination4
    // Generated from the component: F2_PCC.PCC Measurements.Three phase PLL1.sin
    _f2_pcc_pcc_measurements_three_phase_pll1_sin__out = sinf(_f2_pcc_pcc_measurements_three_phase_pll1_unit_delay1__out);
    // Generated from the component: F2_PCC.Gain4
    _f2_pcc_gain4__out = 100.0 * _f2_pcc_pcc_measurements_three_phase_pll1_to_hz__out;
    // Generated from the component: F2_PCC.Data Type Conversion1
    _f2_pcc_data_type_conversion1__out = (float)_f2_pcc_sr_flip_flop1__out;
    // Generated from the component: F2_PCC.S1.CTC_Wrapper
    if (_f2_pcc_sr_flip_flop1__out == 0x0) {
        HIL_OutInt32(0x8240481, 0x0);
    }
    else {
        HIL_OutInt32(0x8240481, 0x1);
    }
    // Generated from the component: F2_RELAY UDP Stream.SDM3
    // Generated from the component: F2_RELAY UDP Stream.SDM22
    // Generated from the component: UDP Send.Boolean Split3
    _udp_send_boolean_split3__input = _f2_relay_udp_stream_device_transition10_output__out;
    _udp_send_boolean_split3__out[0] = _udp_send_boolean_split3__input & 0x01;
    _udp_send_boolean_split3__input >>= 1;
    _udp_send_boolean_split3__out[1] = _udp_send_boolean_split3__input & 0x01;
    _udp_send_boolean_split3__input >>= 1;
    _udp_send_boolean_split3__out[2] = _udp_send_boolean_split3__input & 0x01;
    _udp_send_boolean_split3__input >>= 1;
    // Generated from the component: F2_RELAY UDP Stream.SDM23
    // Generated from the component: UDP Send.Data Type Conversion6
    _udp_send_data_type_conversion6__out = (X_Int32)_f2_relay_udp_stream_device_transition11_output__out;
    // Generated from the component: F2_RELAY UDP Stream.SDM24
    // Generated from the component: UDP Send.Data Type Conversion10
    _udp_send_data_type_conversion10__out = (X_Int32)_f2_relay_udp_stream_device_transition12_output__out;
    // Generated from the component: F2_RELAY UDP Stream.SDM19
    // Generated from the component: F2_RELAY UDP Stream.SDM21
    // Generated from the component: UDP Send.Boolean Split2
    _udp_send_boolean_split2__input = _f2_relay_udp_stream_device_transition3_output__out;
    _udp_send_boolean_split2__out[0] = _udp_send_boolean_split2__input & 0x01;
    _udp_send_boolean_split2__input >>= 1;
    _udp_send_boolean_split2__out[1] = _udp_send_boolean_split2__input & 0x01;
    _udp_send_boolean_split2__input >>= 1;
    _udp_send_boolean_split2__out[2] = _udp_send_boolean_split2__input & 0x01;
    _udp_send_boolean_split2__input >>= 1;
    _udp_send_boolean_split2__out[3] = _udp_send_boolean_split2__input & 0x01;
    _udp_send_boolean_split2__input >>= 1;
    _udp_send_boolean_split2__out[4] = _udp_send_boolean_split2__input & 0x01;
    _udp_send_boolean_split2__input >>= 1;
    _udp_send_boolean_split2__out[5] = _udp_send_boolean_split2__input & 0x01;
    _udp_send_boolean_split2__input >>= 1;
    _udp_send_boolean_split2__out[6] = _udp_send_boolean_split2__input & 0x01;
    _udp_send_boolean_split2__input >>= 1;
    _udp_send_boolean_split2__out[7] = _udp_send_boolean_split2__input & 0x01;
    _udp_send_boolean_split2__input >>= 1;
    _udp_send_boolean_split2__out[8] = _udp_send_boolean_split2__input & 0x01;
    _udp_send_boolean_split2__input >>= 1;
    _udp_send_boolean_split2__out[9] = _udp_send_boolean_split2__input & 0x01;
    _udp_send_boolean_split2__input >>= 1;
    _udp_send_boolean_split2__out[10] = _udp_send_boolean_split2__input & 0x01;
    _udp_send_boolean_split2__input >>= 1;
    _udp_send_boolean_split2__out[11] = _udp_send_boolean_split2__input & 0x01;
    _udp_send_boolean_split2__input >>= 1;
    _udp_send_boolean_split2__out[12] = _udp_send_boolean_split2__input & 0x01;
    _udp_send_boolean_split2__input >>= 1;
    _udp_send_boolean_split2__out[13] = _udp_send_boolean_split2__input & 0x01;
    _udp_send_boolean_split2__input >>= 1;
    _udp_send_boolean_split2__out[14] = _udp_send_boolean_split2__input & 0x01;
    _udp_send_boolean_split2__input >>= 1;
    _udp_send_boolean_split2__out[15] = _udp_send_boolean_split2__input & 0x01;
    _udp_send_boolean_split2__input >>= 1;
    // Generated from the component: F2_RELAY UDP Stream.SDM17
    // Generated from the component: F2_RELAY UDP Stream.SDM15
    // Generated from the component: F2_RELAY UDP Stream.SDM16
    // Generated from the component: F2_RELAY UDP Stream.SDM18
    // Generated from the component: F2_RELAY UDP Stream.SDM4
    // Generated from the component: F2_RELAY UDP Stream.SDM20
    // Generated from the component: F3_PCC.Meas1.Bus Join2
    _f3_pcc_meas1_bus_join2__out[0] = _f3_pcc_meas1_ia_ia1__out;
    _f3_pcc_meas1_bus_join2__out[1] = _f3_pcc_meas1_ib_ia1__out;
    _f3_pcc_meas1_bus_join2__out[2] = _f3_pcc_meas1_ic_ia1__out;
    // Generated from the component: F3_PCC.Meas1.Bus Join1
    _f3_pcc_meas1_bus_join1__out[0] = _f3_pcc_meas1_va_va1__out;
    _f3_pcc_meas1_bus_join1__out[1] = _f3_pcc_meas1_vb_va1__out;
    _f3_pcc_meas1_bus_join1__out[2] = _f3_pcc_meas1_vc_va1__out;
    // Generated from the component: F3_PCC.Meas2.Bus Join1
    _f3_pcc_meas2_bus_join1__out[0] = _f3_pcc_meas2_va_va1__out;
    _f3_pcc_meas2_bus_join1__out[1] = _f3_pcc_meas2_vb_va1__out;
    _f3_pcc_meas2_bus_join1__out[2] = _f3_pcc_meas2_vc_va1__out;
    // Generated from the component: F3_PCC.PCC Measurements.Termination4
    // Generated from the component: F3_PCC.PCC Measurements.Three phase PLL1.sin
    _f3_pcc_pcc_measurements_three_phase_pll1_sin__out = sinf(_f3_pcc_pcc_measurements_three_phase_pll1_unit_delay1__out);
    // Generated from the component: F3_PCC.Gain4
    _f3_pcc_gain4__out = 100.0 * _f3_pcc_pcc_measurements_three_phase_pll1_to_hz__out;
    // Generated from the component: Device Transition2.Input
    while(HIL_InInt32(31457284));
    HIL_OutInt32(0x1e80800, _f3_pcc_sr_flip_flop3__out);
    HIL_OutInt32(31457280, 1);
    HIL_OutInt32(31457281, 0x2);
    HIL_OutInt32(31457282, 0x0);
    HIL_OutInt32(31457283, 1);
    // Generated from the component: F3_PCC.Data Type Conversion1
    _f3_pcc_data_type_conversion1__out = (float)_f3_pcc_sr_flip_flop3__out;
    // Generated from the component: F3_PCC.S1.CTC_Wrapper
    if (_f3_pcc_sr_flip_flop3__out == 0x0) {
        HIL_OutInt32(0x8640480, 0x0);
    }
    else {
        HIL_OutInt32(0x8640480, 0x1);
    }
    // Generated from the component: F3_RELAY UDP Stream.SDM2
    // Generated from the component: F3_RELAY UDP Stream.SDM9
    // Generated from the component: F3_RELAY UDP Stream.SDM10
    // Generated from the component: UDP Send.Boolean Split4
    _udp_send_boolean_split4__input = _f3_relay_udp_stream_device_transition3_output__out;
    _udp_send_boolean_split4__out[0] = _udp_send_boolean_split4__input & 0x01;
    _udp_send_boolean_split4__input >>= 1;
    _udp_send_boolean_split4__out[1] = _udp_send_boolean_split4__input & 0x01;
    _udp_send_boolean_split4__input >>= 1;
    _udp_send_boolean_split4__out[2] = _udp_send_boolean_split4__input & 0x01;
    _udp_send_boolean_split4__input >>= 1;
    _udp_send_boolean_split4__out[3] = _udp_send_boolean_split4__input & 0x01;
    _udp_send_boolean_split4__input >>= 1;
    _udp_send_boolean_split4__out[4] = _udp_send_boolean_split4__input & 0x01;
    _udp_send_boolean_split4__input >>= 1;
    _udp_send_boolean_split4__out[5] = _udp_send_boolean_split4__input & 0x01;
    _udp_send_boolean_split4__input >>= 1;
    _udp_send_boolean_split4__out[6] = _udp_send_boolean_split4__input & 0x01;
    _udp_send_boolean_split4__input >>= 1;
    _udp_send_boolean_split4__out[7] = _udp_send_boolean_split4__input & 0x01;
    _udp_send_boolean_split4__input >>= 1;
    _udp_send_boolean_split4__out[8] = _udp_send_boolean_split4__input & 0x01;
    _udp_send_boolean_split4__input >>= 1;
    _udp_send_boolean_split4__out[9] = _udp_send_boolean_split4__input & 0x01;
    _udp_send_boolean_split4__input >>= 1;
    // Generated from the component: F3_RELAY UDP Stream.SDM8
    // Generated from the component: F3_RELAY UDP Stream.SDM7
    // Generated from the component: F3_RELAY UDP Stream.SDM12
    // Generated from the component: UDP Send.Data Type Conversion8
    _udp_send_data_type_conversion8__out = (X_Int32)_f3_relay_udp_stream_device_transition7_output__out;
    // Generated from the component: F3_RELAY UDP Stream.SDM11
    // Generated from the component: UDP Send.Data Type Conversion7
    _udp_send_data_type_conversion7__out[0] = (X_Int32)_f3_relay_udp_stream_device_transition8_output__out[0];
    _udp_send_data_type_conversion7__out[1] = (X_Int32)_f3_relay_udp_stream_device_transition8_output__out[1];
    _udp_send_data_type_conversion7__out[2] = (X_Int32)_f3_relay_udp_stream_device_transition8_output__out[2];
    _udp_send_data_type_conversion7__out[3] = (X_Int32)_f3_relay_udp_stream_device_transition8_output__out[3];
    _udp_send_data_type_conversion7__out[4] = (X_Int32)_f3_relay_udp_stream_device_transition8_output__out[4];
    _udp_send_data_type_conversion7__out[5] = (X_Int32)_f3_relay_udp_stream_device_transition8_output__out[5];
    _udp_send_data_type_conversion7__out[6] = (X_Int32)_f3_relay_udp_stream_device_transition8_output__out[6];
    _udp_send_data_type_conversion7__out[7] = (X_Int32)_f3_relay_udp_stream_device_transition8_output__out[7];
    _udp_send_data_type_conversion7__out[8] = (X_Int32)_f3_relay_udp_stream_device_transition8_output__out[8];
    // Generated from the component: UDP Send.Data Type Conversion19
    _udp_send_data_type_conversion19__out[0] = (X_Int32)_udp_send_dms__out[0];
    _udp_send_data_type_conversion19__out[1] = (X_Int32)_udp_send_dms__out[1];
    _udp_send_data_type_conversion19__out[2] = (X_Int32)_udp_send_dms__out[2];
    _udp_send_data_type_conversion19__out[3] = (X_Int32)_udp_send_dms__out[3];
    // Generated from the component: F1_PCC.PCC Measurements.Bus Split2
    _f1_pcc_pcc_measurements_bus_split2__out = _f1_pcc_meas1_bus_join2__out[0];
    _f1_pcc_pcc_measurements_bus_split2__out1 = _f1_pcc_meas1_bus_join2__out[1];
    _f1_pcc_pcc_measurements_bus_split2__out2 = _f1_pcc_meas1_bus_join2__out[2];
    // Generated from the component: F1_PCC.PCC Measurements.Bus Split1
    _f1_pcc_pcc_measurements_bus_split1__out = _f1_pcc_meas1_bus_join1__out[0];
    _f1_pcc_pcc_measurements_bus_split1__out1 = _f1_pcc_meas1_bus_join1__out[1];
    _f1_pcc_pcc_measurements_bus_split1__out2 = _f1_pcc_meas1_bus_join1__out[2];
    // Generated from the component: F1_PCC.PCC Measurements.Termination5
    // Generated from the component: F2_PCC.PCC Measurements.Bus Split2
    _f2_pcc_pcc_measurements_bus_split2__out = _f2_pcc_meas1_bus_join2__out[0];
    _f2_pcc_pcc_measurements_bus_split2__out1 = _f2_pcc_meas1_bus_join2__out[1];
    _f2_pcc_pcc_measurements_bus_split2__out2 = _f2_pcc_meas1_bus_join2__out[2];
    // Generated from the component: F2_PCC.PCC Measurements.Bus Split1
    _f2_pcc_pcc_measurements_bus_split1__out = _f2_pcc_meas1_bus_join1__out[0];
    _f2_pcc_pcc_measurements_bus_split1__out1 = _f2_pcc_meas1_bus_join1__out[1];
    _f2_pcc_pcc_measurements_bus_split1__out2 = _f2_pcc_meas1_bus_join1__out[2];
    // Generated from the component: F2_PCC.PCC Measurements.Termination5
    // Generated from the component: F3_PCC.PCC Measurements.Bus Split2
    _f3_pcc_pcc_measurements_bus_split2__out = _f3_pcc_meas1_bus_join2__out[0];
    _f3_pcc_pcc_measurements_bus_split2__out1 = _f3_pcc_meas1_bus_join2__out[1];
    _f3_pcc_pcc_measurements_bus_split2__out2 = _f3_pcc_meas1_bus_join2__out[2];
    // Generated from the component: F3_PCC.PCC Measurements.Bus Split1
    _f3_pcc_pcc_measurements_bus_split1__out = _f3_pcc_meas1_bus_join1__out[0];
    _f3_pcc_pcc_measurements_bus_split1__out1 = _f3_pcc_meas1_bus_join1__out[1];
    _f3_pcc_pcc_measurements_bus_split1__out2 = _f3_pcc_meas1_bus_join1__out[2];
    // Generated from the component: F3_PCC.PCC Measurements.Termination5
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
    _f1_pcc_pcc_measurements_power_meter1__apparent = sqrtf(powf(_f1_pcc_pcc_measurements_power_meter1__Pdc, 2) + powf(_f1_pcc_pcc_measurements_power_meter1__Qdc, 2));
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
    // Generated from the component: F2_PCC.PCC Measurements.Power Meter1
    _f2_pcc_pcc_measurements_power_meter1__v_alpha = SQRT_2OVER3 * ( _f2_pcc_pcc_measurements_bus_split1__out - 0.5f * _f2_pcc_pcc_measurements_bus_split1__out1 - 0.5f * _f2_pcc_pcc_measurements_bus_split1__out2);
    _f2_pcc_pcc_measurements_power_meter1__v_beta = SQRT_2OVER3 * (SQRT3_OVER_2 * _f2_pcc_pcc_measurements_bus_split1__out1 - SQRT3_OVER_2 * _f2_pcc_pcc_measurements_bus_split1__out2);
    _f2_pcc_pcc_measurements_power_meter1__i_alpha = SQRT_2OVER3 * ( _f2_pcc_pcc_measurements_bus_split2__out - 0.5f * _f2_pcc_pcc_measurements_bus_split2__out1 - 0.5f * _f2_pcc_pcc_measurements_bus_split2__out2);
    _f2_pcc_pcc_measurements_power_meter1__i_beta = SQRT_2OVER3 * (SQRT3_OVER_2 * _f2_pcc_pcc_measurements_bus_split2__out1 - SQRT3_OVER_2 * _f2_pcc_pcc_measurements_bus_split2__out2);
    _f2_pcc_pcc_measurements_power_meter1__v_zero = ONE_DIV_BY_SQRT_3 * (_f2_pcc_pcc_measurements_bus_split1__out + _f2_pcc_pcc_measurements_bus_split1__out1 + _f2_pcc_pcc_measurements_bus_split1__out2);
    _f2_pcc_pcc_measurements_power_meter1__i_zero = ONE_DIV_BY_SQRT_3 * (_f2_pcc_pcc_measurements_bus_split2__out + _f2_pcc_pcc_measurements_bus_split2__out1 + _f2_pcc_pcc_measurements_bus_split2__out2);
    _f2_pcc_pcc_measurements_power_meter1__Pac = _f2_pcc_pcc_measurements_power_meter1__v_alpha * _f2_pcc_pcc_measurements_power_meter1__i_alpha + _f2_pcc_pcc_measurements_power_meter1__v_beta * _f2_pcc_pcc_measurements_power_meter1__i_beta;
    _f2_pcc_pcc_measurements_power_meter1__Qac = _f2_pcc_pcc_measurements_power_meter1__v_beta * _f2_pcc_pcc_measurements_power_meter1__i_alpha - _f2_pcc_pcc_measurements_power_meter1__v_alpha * _f2_pcc_pcc_measurements_power_meter1__i_beta;
    _f2_pcc_pcc_measurements_power_meter1__P0ac = _f2_pcc_pcc_measurements_power_meter1__v_zero * _f2_pcc_pcc_measurements_power_meter1__i_zero;
    _f2_pcc_pcc_measurements_power_meter1__filter_1_output = 0.08613019954354689 * (_f2_pcc_pcc_measurements_power_meter1__Pac + _f2_pcc_pcc_measurements_power_meter1__filter_1_input_k_minus_1) - (-0.8277396009129062) * _f2_pcc_pcc_measurements_power_meter1__filter_1_output_k_minus_1;
    _f2_pcc_pcc_measurements_power_meter1__filter_1_outputQ = 0.08613019954354689 * (_f2_pcc_pcc_measurements_power_meter1__Qac + _f2_pcc_pcc_measurements_power_meter1__filter_1_input_k_minus_1Q) - (-0.8277396009129062) * _f2_pcc_pcc_measurements_power_meter1__filter_1_output_k_minus_1Q;
    _f2_pcc_pcc_measurements_power_meter1__filter_1_outputP0 = 0.08613019954354689 * (_f2_pcc_pcc_measurements_power_meter1__P0ac + _f2_pcc_pcc_measurements_power_meter1__filter_1_input_k_minus_1P0) - (-0.8277396009129062) * _f2_pcc_pcc_measurements_power_meter1__filter_1_output_k_minus_1P0;
    _f2_pcc_pcc_measurements_power_meter1__filter_1_input_k_minus_1 = _f2_pcc_pcc_measurements_power_meter1__Pac;
    _f2_pcc_pcc_measurements_power_meter1__filter_1_output_k_minus_1 = _f2_pcc_pcc_measurements_power_meter1__filter_1_output;
    _f2_pcc_pcc_measurements_power_meter1__filter_1_input_k_minus_1Q = _f2_pcc_pcc_measurements_power_meter1__Qac;;
    _f2_pcc_pcc_measurements_power_meter1__filter_1_output_k_minus_1Q = _f2_pcc_pcc_measurements_power_meter1__filter_1_outputQ;
    _f2_pcc_pcc_measurements_power_meter1__filter_1_input_k_minus_1P0 = _f2_pcc_pcc_measurements_power_meter1__P0ac;
    _f2_pcc_pcc_measurements_power_meter1__filter_1_output_k_minus_1P0 = _f2_pcc_pcc_measurements_power_meter1__filter_1_outputP0;
    _f2_pcc_pcc_measurements_power_meter1__Pdc = _f2_pcc_pcc_measurements_power_meter1__filter_1_output;
    _f2_pcc_pcc_measurements_power_meter1__Qdc = _f2_pcc_pcc_measurements_power_meter1__filter_1_outputQ;
    _f2_pcc_pcc_measurements_power_meter1__P0dc = _f2_pcc_pcc_measurements_power_meter1__filter_1_outputP0;
    _f2_pcc_pcc_measurements_power_meter1__apparent = sqrtf(powf(_f2_pcc_pcc_measurements_power_meter1__Pdc, 2) + powf(_f2_pcc_pcc_measurements_power_meter1__Qdc, 2));
    if (_f2_pcc_pcc_measurements_power_meter1__apparent > 0)
        _f2_pcc_pcc_measurements_power_meter1__k_factor = _f2_pcc_pcc_measurements_power_meter1__Pdc / _f2_pcc_pcc_measurements_power_meter1__apparent;
    else
        _f2_pcc_pcc_measurements_power_meter1__k_factor = 0;
    // Generated from the component: F2_PCC.PCC Measurements.RMS value1
    _f2_pcc_pcc_measurements_rms_value1__previous_filtered_value = _f2_pcc_pcc_measurements_rms_value1__filtered_value;
    _f2_pcc_pcc_measurements_rms_value1__filtered_value = _f2_pcc_pcc_measurements_rms_value1__previous_filtered_value * 0.1 + _f2_pcc_pcc_measurements_bus_split1__out * 0.9;
    if( (_f2_pcc_pcc_measurements_rms_value1__filtered_value >= 0.0) && (_f2_pcc_pcc_measurements_rms_value1__previous_filtered_value < 0.0) )
        _f2_pcc_pcc_measurements_rms_value1__zc = 1;
    else
        _f2_pcc_pcc_measurements_rms_value1__zc = 0;
    _f2_pcc_pcc_measurements_rms_value1__out = _f2_pcc_pcc_measurements_rms_value1__out_state;
    // Generated from the component: F2_PCC.PCC Measurements.Three phase PLL1.abc to dq.abc to alpha beta
    _f2_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_abc_to_alpha_beta__alpha = (2.0 * _f2_pcc_pcc_measurements_bus_split1__out - _f2_pcc_pcc_measurements_bus_split1__out1 - _f2_pcc_pcc_measurements_bus_split1__out2) * 0.3333333333333333;
    _f2_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_abc_to_alpha_beta__beta = (_f2_pcc_pcc_measurements_bus_split1__out1 - _f2_pcc_pcc_measurements_bus_split1__out2) * 0.5773502691896258;
    _f2_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_abc_to_alpha_beta__gamma = (_f2_pcc_pcc_measurements_bus_split1__out + _f2_pcc_pcc_measurements_bus_split1__out1 + _f2_pcc_pcc_measurements_bus_split1__out2) * 0.3333333333333333;
    // Generated from the component: F3_PCC.PCC Measurements.Power Meter1
    _f3_pcc_pcc_measurements_power_meter1__v_alpha = SQRT_2OVER3 * ( _f3_pcc_pcc_measurements_bus_split1__out - 0.5f * _f3_pcc_pcc_measurements_bus_split1__out1 - 0.5f * _f3_pcc_pcc_measurements_bus_split1__out2);
    _f3_pcc_pcc_measurements_power_meter1__v_beta = SQRT_2OVER3 * (SQRT3_OVER_2 * _f3_pcc_pcc_measurements_bus_split1__out1 - SQRT3_OVER_2 * _f3_pcc_pcc_measurements_bus_split1__out2);
    _f3_pcc_pcc_measurements_power_meter1__i_alpha = SQRT_2OVER3 * ( _f3_pcc_pcc_measurements_bus_split2__out - 0.5f * _f3_pcc_pcc_measurements_bus_split2__out1 - 0.5f * _f3_pcc_pcc_measurements_bus_split2__out2);
    _f3_pcc_pcc_measurements_power_meter1__i_beta = SQRT_2OVER3 * (SQRT3_OVER_2 * _f3_pcc_pcc_measurements_bus_split2__out1 - SQRT3_OVER_2 * _f3_pcc_pcc_measurements_bus_split2__out2);
    _f3_pcc_pcc_measurements_power_meter1__v_zero = ONE_DIV_BY_SQRT_3 * (_f3_pcc_pcc_measurements_bus_split1__out + _f3_pcc_pcc_measurements_bus_split1__out1 + _f3_pcc_pcc_measurements_bus_split1__out2);
    _f3_pcc_pcc_measurements_power_meter1__i_zero = ONE_DIV_BY_SQRT_3 * (_f3_pcc_pcc_measurements_bus_split2__out + _f3_pcc_pcc_measurements_bus_split2__out1 + _f3_pcc_pcc_measurements_bus_split2__out2);
    _f3_pcc_pcc_measurements_power_meter1__Pac = _f3_pcc_pcc_measurements_power_meter1__v_alpha * _f3_pcc_pcc_measurements_power_meter1__i_alpha + _f3_pcc_pcc_measurements_power_meter1__v_beta * _f3_pcc_pcc_measurements_power_meter1__i_beta;
    _f3_pcc_pcc_measurements_power_meter1__Qac = _f3_pcc_pcc_measurements_power_meter1__v_beta * _f3_pcc_pcc_measurements_power_meter1__i_alpha - _f3_pcc_pcc_measurements_power_meter1__v_alpha * _f3_pcc_pcc_measurements_power_meter1__i_beta;
    _f3_pcc_pcc_measurements_power_meter1__P0ac = _f3_pcc_pcc_measurements_power_meter1__v_zero * _f3_pcc_pcc_measurements_power_meter1__i_zero;
    _f3_pcc_pcc_measurements_power_meter1__filter_1_output = 0.08613019954354689 * (_f3_pcc_pcc_measurements_power_meter1__Pac + _f3_pcc_pcc_measurements_power_meter1__filter_1_input_k_minus_1) - (-0.8277396009129062) * _f3_pcc_pcc_measurements_power_meter1__filter_1_output_k_minus_1;
    _f3_pcc_pcc_measurements_power_meter1__filter_1_outputQ = 0.08613019954354689 * (_f3_pcc_pcc_measurements_power_meter1__Qac + _f3_pcc_pcc_measurements_power_meter1__filter_1_input_k_minus_1Q) - (-0.8277396009129062) * _f3_pcc_pcc_measurements_power_meter1__filter_1_output_k_minus_1Q;
    _f3_pcc_pcc_measurements_power_meter1__filter_1_outputP0 = 0.08613019954354689 * (_f3_pcc_pcc_measurements_power_meter1__P0ac + _f3_pcc_pcc_measurements_power_meter1__filter_1_input_k_minus_1P0) - (-0.8277396009129062) * _f3_pcc_pcc_measurements_power_meter1__filter_1_output_k_minus_1P0;
    _f3_pcc_pcc_measurements_power_meter1__filter_1_input_k_minus_1 = _f3_pcc_pcc_measurements_power_meter1__Pac;
    _f3_pcc_pcc_measurements_power_meter1__filter_1_output_k_minus_1 = _f3_pcc_pcc_measurements_power_meter1__filter_1_output;
    _f3_pcc_pcc_measurements_power_meter1__filter_1_input_k_minus_1Q = _f3_pcc_pcc_measurements_power_meter1__Qac;;
    _f3_pcc_pcc_measurements_power_meter1__filter_1_output_k_minus_1Q = _f3_pcc_pcc_measurements_power_meter1__filter_1_outputQ;
    _f3_pcc_pcc_measurements_power_meter1__filter_1_input_k_minus_1P0 = _f3_pcc_pcc_measurements_power_meter1__P0ac;
    _f3_pcc_pcc_measurements_power_meter1__filter_1_output_k_minus_1P0 = _f3_pcc_pcc_measurements_power_meter1__filter_1_outputP0;
    _f3_pcc_pcc_measurements_power_meter1__Pdc = _f3_pcc_pcc_measurements_power_meter1__filter_1_output;
    _f3_pcc_pcc_measurements_power_meter1__Qdc = _f3_pcc_pcc_measurements_power_meter1__filter_1_outputQ;
    _f3_pcc_pcc_measurements_power_meter1__P0dc = _f3_pcc_pcc_measurements_power_meter1__filter_1_outputP0;
    _f3_pcc_pcc_measurements_power_meter1__apparent = sqrtf(powf(_f3_pcc_pcc_measurements_power_meter1__Pdc, 2) + powf(_f3_pcc_pcc_measurements_power_meter1__Qdc, 2));
    if (_f3_pcc_pcc_measurements_power_meter1__apparent > 0)
        _f3_pcc_pcc_measurements_power_meter1__k_factor = _f3_pcc_pcc_measurements_power_meter1__Pdc / _f3_pcc_pcc_measurements_power_meter1__apparent;
    else
        _f3_pcc_pcc_measurements_power_meter1__k_factor = 0;
    // Generated from the component: F3_PCC.PCC Measurements.RMS value1
    _f3_pcc_pcc_measurements_rms_value1__previous_filtered_value = _f3_pcc_pcc_measurements_rms_value1__filtered_value;
    _f3_pcc_pcc_measurements_rms_value1__filtered_value = _f3_pcc_pcc_measurements_rms_value1__previous_filtered_value * 0.1 + _f3_pcc_pcc_measurements_bus_split1__out * 0.9;
    if( (_f3_pcc_pcc_measurements_rms_value1__filtered_value >= 0.0) && (_f3_pcc_pcc_measurements_rms_value1__previous_filtered_value < 0.0) )
        _f3_pcc_pcc_measurements_rms_value1__zc = 1;
    else
        _f3_pcc_pcc_measurements_rms_value1__zc = 0;
    _f3_pcc_pcc_measurements_rms_value1__out = _f3_pcc_pcc_measurements_rms_value1__out_state;
    // Generated from the component: F3_PCC.PCC Measurements.Three phase PLL1.abc to dq.abc to alpha beta
    _f3_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_abc_to_alpha_beta__alpha = (2.0 * _f3_pcc_pcc_measurements_bus_split1__out - _f3_pcc_pcc_measurements_bus_split1__out1 - _f3_pcc_pcc_measurements_bus_split1__out2) * 0.3333333333333333;
    _f3_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_abc_to_alpha_beta__beta = (_f3_pcc_pcc_measurements_bus_split1__out1 - _f3_pcc_pcc_measurements_bus_split1__out2) * 0.5773502691896258;
    _f3_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_abc_to_alpha_beta__gamma = (_f3_pcc_pcc_measurements_bus_split1__out + _f3_pcc_pcc_measurements_bus_split1__out1 + _f3_pcc_pcc_measurements_bus_split1__out2) * 0.3333333333333333;
    // Generated from the component: F1_PCC.P
    HIL_OutAO(0x4001, _f1_pcc_pcc_measurements_power_meter1__Pdc);
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
    HIL_OutAO(0x4002, _f1_pcc_pcc_measurements_power_meter1__Qdc);
    // Generated from the component: F1_PCC.W -> kW
    _f1_pcc_w____kw__out = 0.001 * _f1_pcc_pcc_measurements_power_meter1__Pdc;
    // Generated from the component: F1_PCC.var -> kvar
    _f1_pcc_var____kvar__out = 0.001 * _f1_pcc_pcc_measurements_power_meter1__Qdc;
    // Generated from the component: F1_PCC.Gain3
    _f1_pcc_gain3__out = 100.0 * _f1_pcc_pcc_measurements_rms_value1__out;
    // Generated from the component: F1_PCC.PCC Measurements.Termination3
    // Generated from the component: F1_PCC.PCC Measurements.Three phase PLL1.abc to dq.alpha beta to dq
    _f1_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_alpha_beta_to_dq__k1 = cosf(_f1_pcc_pcc_measurements_three_phase_pll1_unit_delay1__out);
    _f1_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_alpha_beta_to_dq__k2 = sinf(_f1_pcc_pcc_measurements_three_phase_pll1_unit_delay1__out);
    _f1_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_alpha_beta_to_dq__d = _f1_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_alpha_beta_to_dq__k2 * _f1_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_abc_to_alpha_beta__alpha - _f1_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_alpha_beta_to_dq__k1 * _f1_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_abc_to_alpha_beta__beta;
    _f1_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_alpha_beta_to_dq__q = _f1_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_alpha_beta_to_dq__k1 * _f1_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_abc_to_alpha_beta__alpha + _f1_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_alpha_beta_to_dq__k2 * _f1_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_abc_to_alpha_beta__beta;
    // Generated from the component: F2_PCC.P
    HIL_OutAO(0x4003, _f2_pcc_pcc_measurements_power_meter1__Pdc);
    // Generated from the component: F2_PCC.PCC Measurements.Comparator1
    if (_f2_pcc_pcc_measurements_power_meter1__Pdc < _f2_pcc_pcc_measurements_constant1__out) {
        _f2_pcc_pcc_measurements_comparator1__out = 0;
    } else if (_f2_pcc_pcc_measurements_power_meter1__Pdc > _f2_pcc_pcc_measurements_constant1__out) {
        _f2_pcc_pcc_measurements_comparator1__out = 1;
    } else {
        _f2_pcc_pcc_measurements_comparator1__out = _f2_pcc_pcc_measurements_comparator1__state;
    }
    // Generated from the component: F2_PCC.PCC Measurements.Comparator2
    if (_f2_pcc_pcc_measurements_power_meter1__k_factor < _f2_pcc_pcc_measurements_constant2__out) {
        _f2_pcc_pcc_measurements_comparator2__out = 0;
    } else if (_f2_pcc_pcc_measurements_power_meter1__k_factor > _f2_pcc_pcc_measurements_constant2__out) {
        _f2_pcc_pcc_measurements_comparator2__out = 1;
    } else {
        _f2_pcc_pcc_measurements_comparator2__out = _f2_pcc_pcc_measurements_comparator2__state;
    }
    // Generated from the component: F2_PCC.PCC Measurements.Termination6
    // Generated from the component: F2_PCC.PCC Measurements.Termination7
    // Generated from the component: F2_PCC.PCC Measurements.Termination8
    // Generated from the component: F2_PCC.Q
    HIL_OutAO(0x4004, _f2_pcc_pcc_measurements_power_meter1__Qdc);
    // Generated from the component: F2_PCC.W -> kW
    _f2_pcc_w____kw__out = 0.001 * _f2_pcc_pcc_measurements_power_meter1__Pdc;
    // Generated from the component: F2_PCC.var -> kvar
    _f2_pcc_var____kvar__out = 0.001 * _f2_pcc_pcc_measurements_power_meter1__Qdc;
    // Generated from the component: F2_PCC.Gain3
    _f2_pcc_gain3__out = 100.0 * _f2_pcc_pcc_measurements_rms_value1__out;
    // Generated from the component: F2_PCC.PCC Measurements.Termination3
    // Generated from the component: F2_PCC.PCC Measurements.Three phase PLL1.abc to dq.alpha beta to dq
    _f2_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_alpha_beta_to_dq__k1 = cosf(_f2_pcc_pcc_measurements_three_phase_pll1_unit_delay1__out);
    _f2_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_alpha_beta_to_dq__k2 = sinf(_f2_pcc_pcc_measurements_three_phase_pll1_unit_delay1__out);
    _f2_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_alpha_beta_to_dq__d = _f2_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_alpha_beta_to_dq__k2 * _f2_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_abc_to_alpha_beta__alpha - _f2_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_alpha_beta_to_dq__k1 * _f2_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_abc_to_alpha_beta__beta;
    _f2_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_alpha_beta_to_dq__q = _f2_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_alpha_beta_to_dq__k1 * _f2_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_abc_to_alpha_beta__alpha + _f2_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_alpha_beta_to_dq__k2 * _f2_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_abc_to_alpha_beta__beta;
    // Generated from the component: F3_PCC.P
    HIL_OutAO(0x4005, _f3_pcc_pcc_measurements_power_meter1__Pdc);
    // Generated from the component: F3_PCC.PCC Measurements.Comparator1
    if (_f3_pcc_pcc_measurements_power_meter1__Pdc < _f3_pcc_pcc_measurements_constant1__out) {
        _f3_pcc_pcc_measurements_comparator1__out = 0;
    } else if (_f3_pcc_pcc_measurements_power_meter1__Pdc > _f3_pcc_pcc_measurements_constant1__out) {
        _f3_pcc_pcc_measurements_comparator1__out = 1;
    } else {
        _f3_pcc_pcc_measurements_comparator1__out = _f3_pcc_pcc_measurements_comparator1__state;
    }
    // Generated from the component: F3_PCC.PCC Measurements.Comparator2
    if (_f3_pcc_pcc_measurements_power_meter1__k_factor < _f3_pcc_pcc_measurements_constant2__out) {
        _f3_pcc_pcc_measurements_comparator2__out = 0;
    } else if (_f3_pcc_pcc_measurements_power_meter1__k_factor > _f3_pcc_pcc_measurements_constant2__out) {
        _f3_pcc_pcc_measurements_comparator2__out = 1;
    } else {
        _f3_pcc_pcc_measurements_comparator2__out = _f3_pcc_pcc_measurements_comparator2__state;
    }
    // Generated from the component: F3_PCC.PCC Measurements.Termination6
    // Generated from the component: F3_PCC.PCC Measurements.Termination7
    // Generated from the component: F3_PCC.PCC Measurements.Termination8
    // Generated from the component: F3_PCC.Q
    HIL_OutAO(0x4006, _f3_pcc_pcc_measurements_power_meter1__Qdc);
    // Generated from the component: F3_PCC.W -> kW
    _f3_pcc_w____kw__out = 0.001 * _f3_pcc_pcc_measurements_power_meter1__Pdc;
    // Generated from the component: F3_PCC.var -> kvar
    _f3_pcc_var____kvar__out = 0.001 * _f3_pcc_pcc_measurements_power_meter1__Qdc;
    // Generated from the component: F3_PCC.Gain3
    _f3_pcc_gain3__out = 100.0 * _f3_pcc_pcc_measurements_rms_value1__out;
    // Generated from the component: F3_PCC.PCC Measurements.Termination3
    // Generated from the component: F3_PCC.PCC Measurements.Three phase PLL1.abc to dq.alpha beta to dq
    _f3_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_alpha_beta_to_dq__k1 = cosf(_f3_pcc_pcc_measurements_three_phase_pll1_unit_delay1__out);
    _f3_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_alpha_beta_to_dq__k2 = sinf(_f3_pcc_pcc_measurements_three_phase_pll1_unit_delay1__out);
    _f3_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_alpha_beta_to_dq__d = _f3_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_alpha_beta_to_dq__k2 * _f3_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_abc_to_alpha_beta__alpha - _f3_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_alpha_beta_to_dq__k1 * _f3_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_abc_to_alpha_beta__beta;
    _f3_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_alpha_beta_to_dq__q = _f3_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_alpha_beta_to_dq__k1 * _f3_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_abc_to_alpha_beta__alpha + _f3_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_alpha_beta_to_dq__k2 * _f3_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_abc_to_alpha_beta__beta;
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
    // Generated from the component: F2_PCC.Gain1
    _f2_pcc_gain1__out = 10.0 * _f2_pcc_w____kw__out;
    // Generated from the component: F2_PCC.Gain2
    _f2_pcc_gain2__out = 10.0 * _f2_pcc_var____kvar__out;
    // Generated from the component: F2_PCC.PCC Measurements.Three phase PLL1.abc to dq.LPF_d
    _f2_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_d__a_sum = 0.0f;
    _f2_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_d__b_sum = 0.0f;
    _f2_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_d__delay_line_in = 0.0f;
    for (_f2_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_d__i = 0; _f2_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_d__i < 1; _f2_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_d__i++) {
        _f2_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_d__b_sum += _f2_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_d__b_coeff[_f2_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_d__i + 1] * _f2_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_d__states[_f2_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_d__i];
    }
    _f2_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_d__a_sum += _f2_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_d__states[0] * _f2_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_d__a_coeff[1];
    _f2_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_d__delay_line_in = (_f2_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_alpha_beta_to_dq__d - _f2_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_d__a_sum) / _f2_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_d__a_coeff[0];
    _f2_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_d__b_sum += _f2_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_d__b_coeff[0] * _f2_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_d__delay_line_in;
    _f2_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_d__out = _f2_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_d__b_sum;
    // Generated from the component: F2_PCC.PCC Measurements.Three phase PLL1.abc to dq.LPF_q
    _f2_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_q__a_sum = 0.0f;
    _f2_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_q__b_sum = 0.0f;
    _f2_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_q__delay_line_in = 0.0f;
    for (_f2_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_q__i = 0; _f2_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_q__i < 1; _f2_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_q__i++) {
        _f2_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_q__b_sum += _f2_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_q__b_coeff[_f2_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_q__i + 1] * _f2_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_q__states[_f2_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_q__i];
    }
    _f2_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_q__a_sum += _f2_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_q__states[0] * _f2_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_q__a_coeff[1];
    _f2_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_q__delay_line_in = (_f2_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_alpha_beta_to_dq__q - _f2_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_q__a_sum) / _f2_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_q__a_coeff[0];
    _f2_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_q__b_sum += _f2_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_q__b_coeff[0] * _f2_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_q__delay_line_in;
    _f2_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_q__out = _f2_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_q__b_sum;
    // Generated from the component: F3_PCC.Gain1
    _f3_pcc_gain1__out = 10.0 * _f3_pcc_w____kw__out;
    // Generated from the component: F3_PCC.Gain2
    _f3_pcc_gain2__out = 10.0 * _f3_pcc_var____kvar__out;
    // Generated from the component: F3_PCC.PCC Measurements.Three phase PLL1.abc to dq.LPF_d
    _f3_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_d__a_sum = 0.0f;
    _f3_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_d__b_sum = 0.0f;
    _f3_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_d__delay_line_in = 0.0f;
    for (_f3_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_d__i = 0; _f3_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_d__i < 1; _f3_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_d__i++) {
        _f3_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_d__b_sum += _f3_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_d__b_coeff[_f3_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_d__i + 1] * _f3_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_d__states[_f3_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_d__i];
    }
    _f3_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_d__a_sum += _f3_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_d__states[0] * _f3_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_d__a_coeff[1];
    _f3_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_d__delay_line_in = (_f3_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_alpha_beta_to_dq__d - _f3_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_d__a_sum) / _f3_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_d__a_coeff[0];
    _f3_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_d__b_sum += _f3_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_d__b_coeff[0] * _f3_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_d__delay_line_in;
    _f3_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_d__out = _f3_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_d__b_sum;
    // Generated from the component: F3_PCC.PCC Measurements.Three phase PLL1.abc to dq.LPF_q
    _f3_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_q__a_sum = 0.0f;
    _f3_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_q__b_sum = 0.0f;
    _f3_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_q__delay_line_in = 0.0f;
    for (_f3_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_q__i = 0; _f3_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_q__i < 1; _f3_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_q__i++) {
        _f3_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_q__b_sum += _f3_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_q__b_coeff[_f3_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_q__i + 1] * _f3_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_q__states[_f3_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_q__i];
    }
    _f3_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_q__a_sum += _f3_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_q__states[0] * _f3_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_q__a_coeff[1];
    _f3_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_q__delay_line_in = (_f3_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_alpha_beta_to_dq__q - _f3_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_q__a_sum) / _f3_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_q__a_coeff[0];
    _f3_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_q__b_sum += _f3_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_q__b_coeff[0] * _f3_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_q__delay_line_in;
    _f3_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_q__out = _f3_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_q__b_sum;
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
    // Generated from the component: F2_PCC.Bus Join1
    _f2_pcc_bus_join1__out[0] = _f2_pcc_gain1__out;
    _f2_pcc_bus_join1__out[1] = _f2_pcc_gain2__out;
    _f2_pcc_bus_join1__out[2] = _f2_pcc_gain3__out;
    _f2_pcc_bus_join1__out[3] = _f2_pcc_gain4__out;
    _f2_pcc_bus_join1__out[4] = _f2_pcc_data_type_conversion1__out;
    _f2_pcc_bus_join1__out[5] = _f2_pcc_pcc_measurements_power_meter1__k_factor;
    _f2_pcc_bus_join1__out[6] = _f2_pcc_pcc_measurements_comparator1__out;
    _f2_pcc_bus_join1__out[7] = _f2_pcc_pcc_measurements_comparator2__out;
    // Generated from the component: F2_PCC.PCC Measurements.Termination1
    // Generated from the component: F2_PCC.PCC Measurements.Termination2
    // Generated from the component: F2_PCC.PCC Measurements.Three phase PLL1.normalize
    _f2_pcc_pcc_measurements_three_phase_pll1_normalize__in1 = _f2_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_d__out;
    _f2_pcc_pcc_measurements_three_phase_pll1_normalize__in2 = _f2_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_q__out;
    _f2_pcc_pcc_measurements_three_phase_pll1_normalize__pk = (powf(_f2_pcc_pcc_measurements_three_phase_pll1_normalize__in1, 2.0) + powf(_f2_pcc_pcc_measurements_three_phase_pll1_normalize__in2, 2.0));
    _f2_pcc_pcc_measurements_three_phase_pll1_normalize__pk = sqrt(_f2_pcc_pcc_measurements_three_phase_pll1_normalize__pk);
    if (_f2_pcc_pcc_measurements_three_phase_pll1_normalize__pk < 0.1) {
        _f2_pcc_pcc_measurements_three_phase_pll1_normalize__in2_pu = _f2_pcc_pcc_measurements_three_phase_pll1_normalize__in2 / 0.1;
    }
    else {
        _f2_pcc_pcc_measurements_three_phase_pll1_normalize__in2_pu = _f2_pcc_pcc_measurements_three_phase_pll1_normalize__in2 / _f2_pcc_pcc_measurements_three_phase_pll1_normalize__pk;
    }
    // Generated from the component: F3_PCC.Bus Join1
    _f3_pcc_bus_join1__out[0] = _f3_pcc_gain1__out;
    _f3_pcc_bus_join1__out[1] = _f3_pcc_gain2__out;
    _f3_pcc_bus_join1__out[2] = _f3_pcc_gain3__out;
    _f3_pcc_bus_join1__out[3] = _f3_pcc_gain4__out;
    _f3_pcc_bus_join1__out[4] = _f3_pcc_data_type_conversion1__out;
    _f3_pcc_bus_join1__out[5] = _f3_pcc_pcc_measurements_power_meter1__k_factor;
    _f3_pcc_bus_join1__out[6] = _f3_pcc_pcc_measurements_comparator1__out;
    _f3_pcc_bus_join1__out[7] = _f3_pcc_pcc_measurements_comparator2__out;
    // Generated from the component: F3_PCC.PCC Measurements.Termination1
    // Generated from the component: F3_PCC.PCC Measurements.Termination2
    // Generated from the component: F3_PCC.PCC Measurements.Three phase PLL1.normalize
    _f3_pcc_pcc_measurements_three_phase_pll1_normalize__in1 = _f3_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_d__out;
    _f3_pcc_pcc_measurements_three_phase_pll1_normalize__in2 = _f3_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_q__out;
    _f3_pcc_pcc_measurements_three_phase_pll1_normalize__pk = (powf(_f3_pcc_pcc_measurements_three_phase_pll1_normalize__in1, 2.0) + powf(_f3_pcc_pcc_measurements_three_phase_pll1_normalize__in2, 2.0));
    _f3_pcc_pcc_measurements_three_phase_pll1_normalize__pk = sqrt(_f3_pcc_pcc_measurements_three_phase_pll1_normalize__pk);
    if (_f3_pcc_pcc_measurements_three_phase_pll1_normalize__pk < 0.1) {
        _f3_pcc_pcc_measurements_three_phase_pll1_normalize__in2_pu = _f3_pcc_pcc_measurements_three_phase_pll1_normalize__in2 / 0.1;
    }
    else {
        _f3_pcc_pcc_measurements_three_phase_pll1_normalize__in2_pu = _f3_pcc_pcc_measurements_three_phase_pll1_normalize__in2 / _f3_pcc_pcc_measurements_three_phase_pll1_normalize__pk;
    }
    // Generated from the component: UDP Send.Bus Split1
    _udp_send_bus_split1__out = _f1_pcc_bus_join1__out[0];
    _udp_send_bus_split1__out1 = _f1_pcc_bus_join1__out[1];
    _udp_send_bus_split1__out2 = _f1_pcc_bus_join1__out[2];
    _udp_send_bus_split1__out3 = _f1_pcc_bus_join1__out[3];
    _udp_send_bus_split1__out4 = _f1_pcc_bus_join1__out[4];
    _udp_send_bus_split1__out5 = _f1_pcc_bus_join1__out[5];
    _udp_send_bus_split1__out6 = _f1_pcc_bus_join1__out[6];
    _udp_send_bus_split1__out7 = _f1_pcc_bus_join1__out[7];
    // Generated from the component: F1_PCC.PCC Measurements.Three phase PLL1.PID.Kd
    _f1_pcc_pcc_measurements_three_phase_pll1_pid_kd__out = 1.0 * _f1_pcc_pcc_measurements_three_phase_pll1_normalize__in2_pu;
    // Generated from the component: F1_PCC.PCC Measurements.Three phase PLL1.PID.Ki
    _f1_pcc_pcc_measurements_three_phase_pll1_pid_ki__out = 3200.0 * _f1_pcc_pcc_measurements_three_phase_pll1_normalize__in2_pu;
    // Generated from the component: F1_PCC.PCC Measurements.Three phase PLL1.PID.Kp
    _f1_pcc_pcc_measurements_three_phase_pll1_pid_kp__out = 100.0 * _f1_pcc_pcc_measurements_three_phase_pll1_normalize__in2_pu;
    // Generated from the component: F1_PCC.PCC Measurements.Three phase PLL1.term_pk
    // Generated from the component: UDP Send.Bus Split2
    _udp_send_bus_split2__out = _f2_pcc_bus_join1__out[0];
    _udp_send_bus_split2__out1 = _f2_pcc_bus_join1__out[1];
    _udp_send_bus_split2__out2 = _f2_pcc_bus_join1__out[2];
    _udp_send_bus_split2__out3 = _f2_pcc_bus_join1__out[3];
    _udp_send_bus_split2__out4 = _f2_pcc_bus_join1__out[4];
    _udp_send_bus_split2__out5 = _f2_pcc_bus_join1__out[5];
    _udp_send_bus_split2__out6 = _f2_pcc_bus_join1__out[6];
    _udp_send_bus_split2__out7 = _f2_pcc_bus_join1__out[7];
    // Generated from the component: F2_PCC.PCC Measurements.Three phase PLL1.PID.Kd
    _f2_pcc_pcc_measurements_three_phase_pll1_pid_kd__out = 1.0 * _f2_pcc_pcc_measurements_three_phase_pll1_normalize__in2_pu;
    // Generated from the component: F2_PCC.PCC Measurements.Three phase PLL1.PID.Ki
    _f2_pcc_pcc_measurements_three_phase_pll1_pid_ki__out = 3200.0 * _f2_pcc_pcc_measurements_three_phase_pll1_normalize__in2_pu;
    // Generated from the component: F2_PCC.PCC Measurements.Three phase PLL1.PID.Kp
    _f2_pcc_pcc_measurements_three_phase_pll1_pid_kp__out = 100.0 * _f2_pcc_pcc_measurements_three_phase_pll1_normalize__in2_pu;
    // Generated from the component: F2_PCC.PCC Measurements.Three phase PLL1.term_pk
    // Generated from the component: UDP Send.Bus Split3
    _udp_send_bus_split3__out = _f3_pcc_bus_join1__out[0];
    _udp_send_bus_split3__out1 = _f3_pcc_bus_join1__out[1];
    _udp_send_bus_split3__out2 = _f3_pcc_bus_join1__out[2];
    _udp_send_bus_split3__out3 = _f3_pcc_bus_join1__out[3];
    _udp_send_bus_split3__out4 = _f3_pcc_bus_join1__out[4];
    _udp_send_bus_split3__out5 = _f3_pcc_bus_join1__out[5];
    _udp_send_bus_split3__out6 = _f3_pcc_bus_join1__out[6];
    _udp_send_bus_split3__out7 = _f3_pcc_bus_join1__out[7];
    // Generated from the component: F3_PCC.PCC Measurements.Three phase PLL1.PID.Kd
    _f3_pcc_pcc_measurements_three_phase_pll1_pid_kd__out = 1.0 * _f3_pcc_pcc_measurements_three_phase_pll1_normalize__in2_pu;
    // Generated from the component: F3_PCC.PCC Measurements.Three phase PLL1.PID.Ki
    _f3_pcc_pcc_measurements_three_phase_pll1_pid_ki__out = 3200.0 * _f3_pcc_pcc_measurements_three_phase_pll1_normalize__in2_pu;
    // Generated from the component: F3_PCC.PCC Measurements.Three phase PLL1.PID.Kp
    _f3_pcc_pcc_measurements_three_phase_pll1_pid_kp__out = 100.0 * _f3_pcc_pcc_measurements_three_phase_pll1_normalize__in2_pu;
    // Generated from the component: F3_PCC.PCC Measurements.Three phase PLL1.term_pk
    // Generated from the component: UDP Send.Data Type Conversion14
    _udp_send_data_type_conversion14__out = (X_Int32)_udp_send_bus_split1__out4;
    // Generated from the component: F1_PCC.PCC Measurements.Three phase PLL1.PID.Sum8
    _f1_pcc_pcc_measurements_three_phase_pll1_pid_sum8__out = _f1_pcc_pcc_measurements_three_phase_pll1_pid_kd__out - _f1_pcc_pcc_measurements_three_phase_pll1_pid_integrator2__out;
    // Generated from the component: UDP Send.Data Type Conversion15
    _udp_send_data_type_conversion15__out = (X_Int32)_udp_send_bus_split2__out4;
    // Generated from the component: F2_PCC.PCC Measurements.Three phase PLL1.PID.Sum8
    _f2_pcc_pcc_measurements_three_phase_pll1_pid_sum8__out = _f2_pcc_pcc_measurements_three_phase_pll1_pid_kd__out - _f2_pcc_pcc_measurements_three_phase_pll1_pid_integrator2__out;
    // Generated from the component: UDP Send.Data Type Conversion16
    _udp_send_data_type_conversion16__out = (X_Int32)_udp_send_bus_split3__out4;
    // Generated from the component: UDP Send.FREQUENCY_UDP
    _udp_send_frequency_udp__out[0] = _f1_relay_udp_stream_device_transition2_output__out[0];
    _udp_send_frequency_udp__out[1] = _f1_relay_udp_stream_device_transition2_output__out[1];
    _udp_send_frequency_udp__out[2] = _f1_relay_udp_stream_device_transition2_output__out[2];
    _udp_send_frequency_udp__out[3] = _f1_relay_udp_stream_device_transition2_output__out[3];
    _udp_send_frequency_udp__out[4] = _f1_relay_udp_stream_device_transition2_output__out[4];
    _udp_send_frequency_udp__out[5] = _f1_relay_udp_stream_device_transition2_output__out[5];
    _udp_send_frequency_udp__out[6] = _f1_relay_udp_stream_device_transition2_output__out[6];
    _udp_send_frequency_udp__out[7] = _f1_relay_udp_stream_device_transition2_output__out[7];
    _udp_send_frequency_udp__out[8] = _f1_relay_udp_stream_device_transition2_output__out[8];
    _udp_send_frequency_udp__out[9] = _f1_relay_udp_stream_device_transition2_output__out[9];
    _udp_send_frequency_udp__out[10] = _f1_relay_udp_stream_device_transition2_output__out[10];
    _udp_send_frequency_udp__out[11] = _f1_relay_udp_stream_device_transition2_output__out[11];
    _udp_send_frequency_udp__out[12] = _f1_relay_udp_stream_device_transition2_output__out[12];
    _udp_send_frequency_udp__out[13] = _f1_relay_udp_stream_device_transition2_output__out[13];
    _udp_send_frequency_udp__out[14] = _f1_relay_udp_stream_device_transition2_output__out[14];
    _udp_send_frequency_udp__out[15] = _f2_relay_udp_stream_device_transition2_output__out[0];
    _udp_send_frequency_udp__out[16] = _f2_relay_udp_stream_device_transition2_output__out[1];
    _udp_send_frequency_udp__out[17] = _f2_relay_udp_stream_device_transition2_output__out[2];
    _udp_send_frequency_udp__out[18] = _f2_relay_udp_stream_device_transition2_output__out[3];
    _udp_send_frequency_udp__out[19] = _f2_relay_udp_stream_device_transition2_output__out[4];
    _udp_send_frequency_udp__out[20] = _f2_relay_udp_stream_device_transition2_output__out[5];
    _udp_send_frequency_udp__out[21] = _f2_relay_udp_stream_device_transition2_output__out[6];
    _udp_send_frequency_udp__out[22] = _f2_relay_udp_stream_device_transition2_output__out[7];
    _udp_send_frequency_udp__out[23] = _f2_relay_udp_stream_device_transition2_output__out[8];
    _udp_send_frequency_udp__out[24] = _f2_relay_udp_stream_device_transition2_output__out[9];
    _udp_send_frequency_udp__out[25] = _f2_relay_udp_stream_device_transition2_output__out[10];
    _udp_send_frequency_udp__out[26] = _f2_relay_udp_stream_device_transition2_output__out[11];
    _udp_send_frequency_udp__out[27] = _f2_relay_udp_stream_device_transition2_output__out[12];
    _udp_send_frequency_udp__out[28] = _f2_relay_udp_stream_device_transition2_output__out[13];
    _udp_send_frequency_udp__out[29] = _f2_relay_udp_stream_device_transition2_output__out[14];
    _udp_send_frequency_udp__out[30] = _f2_relay_udp_stream_device_transition2_output__out[15];
    _udp_send_frequency_udp__out[31] = _f2_relay_udp_stream_device_transition9_output__out[0];
    _udp_send_frequency_udp__out[32] = _f2_relay_udp_stream_device_transition9_output__out[1];
    _udp_send_frequency_udp__out[33] = _f2_relay_udp_stream_device_transition9_output__out[2];
    _udp_send_frequency_udp__out[34] = _f3_relay_udp_stream_device_transition2_output__out[0];
    _udp_send_frequency_udp__out[35] = _f3_relay_udp_stream_device_transition2_output__out[1];
    _udp_send_frequency_udp__out[36] = _f3_relay_udp_stream_device_transition2_output__out[2];
    _udp_send_frequency_udp__out[37] = _f3_relay_udp_stream_device_transition2_output__out[3];
    _udp_send_frequency_udp__out[38] = _f3_relay_udp_stream_device_transition2_output__out[4];
    _udp_send_frequency_udp__out[39] = _f3_relay_udp_stream_device_transition2_output__out[5];
    _udp_send_frequency_udp__out[40] = _f3_relay_udp_stream_device_transition2_output__out[6];
    _udp_send_frequency_udp__out[41] = _f3_relay_udp_stream_device_transition2_output__out[7];
    _udp_send_frequency_udp__out[42] = _f3_relay_udp_stream_device_transition2_output__out[8];
    _udp_send_frequency_udp__out[43] = _f3_relay_udp_stream_device_transition2_output__out[9];
    _udp_send_frequency_udp__out[44] = _udp_send_bus_split1__out3;
    _udp_send_frequency_udp__out[45] = _udp_send_bus_split2__out3;
    _udp_send_frequency_udp__out[46] = _udp_send_bus_split3__out3;
    // Generated from the component: UDP Send.IMPORT_EXPORT
    _udp_send_import_export__out[0] = _udp_send_bus_split1__out6;
    _udp_send_import_export__out[1] = _udp_send_bus_split2__out6;
    _udp_send_import_export__out[2] = _udp_send_bus_split3__out6;
    // Generated from the component: UDP Send.LAGGING_LEADING
    _udp_send_lagging_leading__out[0] = _udp_send_bus_split1__out7;
    _udp_send_lagging_leading__out[1] = _udp_send_bus_split2__out7;
    _udp_send_lagging_leading__out[2] = _udp_send_bus_split3__out7;
    // Generated from the component: UDP Send.POWER_FACTOR
    _udp_send_power_factor__out[0] = _udp_send_bus_split1__out5;
    _udp_send_power_factor__out[1] = _udp_send_bus_split2__out5;
    _udp_send_power_factor__out[2] = _udp_send_bus_split3__out5;
    // Generated from the component: UDP Send.P_REACTIVE_UDP
    _udp_send_p_reactive_udp__out[0] = _f1_relay_udp_stream_device_transition5_output__out[0];
    _udp_send_p_reactive_udp__out[1] = _f1_relay_udp_stream_device_transition5_output__out[1];
    _udp_send_p_reactive_udp__out[2] = _f1_relay_udp_stream_device_transition5_output__out[2];
    _udp_send_p_reactive_udp__out[3] = _f1_relay_udp_stream_device_transition5_output__out[3];
    _udp_send_p_reactive_udp__out[4] = _f1_relay_udp_stream_device_transition5_output__out[4];
    _udp_send_p_reactive_udp__out[5] = _f1_relay_udp_stream_device_transition5_output__out[5];
    _udp_send_p_reactive_udp__out[6] = _f1_relay_udp_stream_device_transition5_output__out[6];
    _udp_send_p_reactive_udp__out[7] = _f1_relay_udp_stream_device_transition5_output__out[7];
    _udp_send_p_reactive_udp__out[8] = _f1_relay_udp_stream_device_transition5_output__out[8];
    _udp_send_p_reactive_udp__out[9] = _f1_relay_udp_stream_device_transition5_output__out[9];
    _udp_send_p_reactive_udp__out[10] = _f1_relay_udp_stream_device_transition5_output__out[10];
    _udp_send_p_reactive_udp__out[11] = _f1_relay_udp_stream_device_transition5_output__out[11];
    _udp_send_p_reactive_udp__out[12] = _f1_relay_udp_stream_device_transition5_output__out[12];
    _udp_send_p_reactive_udp__out[13] = _f1_relay_udp_stream_device_transition5_output__out[13];
    _udp_send_p_reactive_udp__out[14] = _f1_relay_udp_stream_device_transition5_output__out[14];
    _udp_send_p_reactive_udp__out[15] = _f2_relay_udp_stream_device_transition5_output__out[0];
    _udp_send_p_reactive_udp__out[16] = _f2_relay_udp_stream_device_transition5_output__out[1];
    _udp_send_p_reactive_udp__out[17] = _f2_relay_udp_stream_device_transition5_output__out[2];
    _udp_send_p_reactive_udp__out[18] = _f2_relay_udp_stream_device_transition5_output__out[3];
    _udp_send_p_reactive_udp__out[19] = _f2_relay_udp_stream_device_transition5_output__out[4];
    _udp_send_p_reactive_udp__out[20] = _f2_relay_udp_stream_device_transition5_output__out[5];
    _udp_send_p_reactive_udp__out[21] = _f2_relay_udp_stream_device_transition5_output__out[6];
    _udp_send_p_reactive_udp__out[22] = _f2_relay_udp_stream_device_transition5_output__out[7];
    _udp_send_p_reactive_udp__out[23] = _f2_relay_udp_stream_device_transition5_output__out[8];
    _udp_send_p_reactive_udp__out[24] = _f2_relay_udp_stream_device_transition5_output__out[9];
    _udp_send_p_reactive_udp__out[25] = _f2_relay_udp_stream_device_transition5_output__out[10];
    _udp_send_p_reactive_udp__out[26] = _f2_relay_udp_stream_device_transition5_output__out[11];
    _udp_send_p_reactive_udp__out[27] = _f2_relay_udp_stream_device_transition5_output__out[12];
    _udp_send_p_reactive_udp__out[28] = _f2_relay_udp_stream_device_transition5_output__out[13];
    _udp_send_p_reactive_udp__out[29] = _f2_relay_udp_stream_device_transition5_output__out[14];
    _udp_send_p_reactive_udp__out[30] = _f2_relay_udp_stream_device_transition5_output__out[15];
    _udp_send_p_reactive_udp__out[31] = _f2_relay_udp_stream_device_transition6_output__out[0];
    _udp_send_p_reactive_udp__out[32] = _f2_relay_udp_stream_device_transition6_output__out[1];
    _udp_send_p_reactive_udp__out[33] = _f2_relay_udp_stream_device_transition6_output__out[2];
    _udp_send_p_reactive_udp__out[34] = _f3_relay_udp_stream_device_transition5_output__out[0];
    _udp_send_p_reactive_udp__out[35] = _f3_relay_udp_stream_device_transition5_output__out[1];
    _udp_send_p_reactive_udp__out[36] = _f3_relay_udp_stream_device_transition5_output__out[2];
    _udp_send_p_reactive_udp__out[37] = _f3_relay_udp_stream_device_transition5_output__out[3];
    _udp_send_p_reactive_udp__out[38] = _f3_relay_udp_stream_device_transition5_output__out[4];
    _udp_send_p_reactive_udp__out[39] = _f3_relay_udp_stream_device_transition5_output__out[5];
    _udp_send_p_reactive_udp__out[40] = _f3_relay_udp_stream_device_transition5_output__out[6];
    _udp_send_p_reactive_udp__out[41] = _f3_relay_udp_stream_device_transition5_output__out[7];
    _udp_send_p_reactive_udp__out[42] = _f3_relay_udp_stream_device_transition5_output__out[8];
    _udp_send_p_reactive_udp__out[43] = _f3_relay_udp_stream_device_transition5_output__out[9];
    _udp_send_p_reactive_udp__out[44] = _udp_send_bus_split1__out1;
    _udp_send_p_reactive_udp__out[45] = _udp_send_bus_split2__out1;
    _udp_send_p_reactive_udp__out[46] = _udp_send_bus_split3__out1;
    // Generated from the component: UDP Send.P_REAL_UDP
    _udp_send_p_real_udp__out[0] = _f1_relay_udp_stream_device_transition1_output__out[0];
    _udp_send_p_real_udp__out[1] = _f1_relay_udp_stream_device_transition1_output__out[1];
    _udp_send_p_real_udp__out[2] = _f1_relay_udp_stream_device_transition1_output__out[2];
    _udp_send_p_real_udp__out[3] = _f1_relay_udp_stream_device_transition1_output__out[3];
    _udp_send_p_real_udp__out[4] = _f1_relay_udp_stream_device_transition1_output__out[4];
    _udp_send_p_real_udp__out[5] = _f1_relay_udp_stream_device_transition1_output__out[5];
    _udp_send_p_real_udp__out[6] = _f1_relay_udp_stream_device_transition1_output__out[6];
    _udp_send_p_real_udp__out[7] = _f1_relay_udp_stream_device_transition1_output__out[7];
    _udp_send_p_real_udp__out[8] = _f1_relay_udp_stream_device_transition1_output__out[8];
    _udp_send_p_real_udp__out[9] = _f1_relay_udp_stream_device_transition1_output__out[9];
    _udp_send_p_real_udp__out[10] = _f1_relay_udp_stream_device_transition1_output__out[10];
    _udp_send_p_real_udp__out[11] = _f1_relay_udp_stream_device_transition1_output__out[11];
    _udp_send_p_real_udp__out[12] = _f1_relay_udp_stream_device_transition1_output__out[12];
    _udp_send_p_real_udp__out[13] = _f1_relay_udp_stream_device_transition1_output__out[13];
    _udp_send_p_real_udp__out[14] = _f1_relay_udp_stream_device_transition1_output__out[14];
    _udp_send_p_real_udp__out[15] = _f2_relay_udp_stream_device_transition1_output__out[0];
    _udp_send_p_real_udp__out[16] = _f2_relay_udp_stream_device_transition1_output__out[1];
    _udp_send_p_real_udp__out[17] = _f2_relay_udp_stream_device_transition1_output__out[2];
    _udp_send_p_real_udp__out[18] = _f2_relay_udp_stream_device_transition1_output__out[3];
    _udp_send_p_real_udp__out[19] = _f2_relay_udp_stream_device_transition1_output__out[4];
    _udp_send_p_real_udp__out[20] = _f2_relay_udp_stream_device_transition1_output__out[5];
    _udp_send_p_real_udp__out[21] = _f2_relay_udp_stream_device_transition1_output__out[6];
    _udp_send_p_real_udp__out[22] = _f2_relay_udp_stream_device_transition1_output__out[7];
    _udp_send_p_real_udp__out[23] = _f2_relay_udp_stream_device_transition1_output__out[8];
    _udp_send_p_real_udp__out[24] = _f2_relay_udp_stream_device_transition1_output__out[9];
    _udp_send_p_real_udp__out[25] = _f2_relay_udp_stream_device_transition1_output__out[10];
    _udp_send_p_real_udp__out[26] = _f2_relay_udp_stream_device_transition1_output__out[11];
    _udp_send_p_real_udp__out[27] = _f2_relay_udp_stream_device_transition1_output__out[12];
    _udp_send_p_real_udp__out[28] = _f2_relay_udp_stream_device_transition1_output__out[13];
    _udp_send_p_real_udp__out[29] = _f2_relay_udp_stream_device_transition1_output__out[14];
    _udp_send_p_real_udp__out[30] = _f2_relay_udp_stream_device_transition1_output__out[15];
    _udp_send_p_real_udp__out[31] = _f2_relay_udp_stream_device_transition8_output__out[0];
    _udp_send_p_real_udp__out[32] = _f2_relay_udp_stream_device_transition8_output__out[1];
    _udp_send_p_real_udp__out[33] = _f2_relay_udp_stream_device_transition8_output__out[2];
    _udp_send_p_real_udp__out[34] = _f3_relay_udp_stream_device_transition1_output__out[0];
    _udp_send_p_real_udp__out[35] = _f3_relay_udp_stream_device_transition1_output__out[1];
    _udp_send_p_real_udp__out[36] = _f3_relay_udp_stream_device_transition1_output__out[2];
    _udp_send_p_real_udp__out[37] = _f3_relay_udp_stream_device_transition1_output__out[3];
    _udp_send_p_real_udp__out[38] = _f3_relay_udp_stream_device_transition1_output__out[4];
    _udp_send_p_real_udp__out[39] = _f3_relay_udp_stream_device_transition1_output__out[5];
    _udp_send_p_real_udp__out[40] = _f3_relay_udp_stream_device_transition1_output__out[6];
    _udp_send_p_real_udp__out[41] = _f3_relay_udp_stream_device_transition1_output__out[7];
    _udp_send_p_real_udp__out[42] = _f3_relay_udp_stream_device_transition1_output__out[8];
    _udp_send_p_real_udp__out[43] = _f3_relay_udp_stream_device_transition1_output__out[9];
    _udp_send_p_real_udp__out[44] = _udp_send_bus_split1__out;
    _udp_send_p_real_udp__out[45] = _udp_send_bus_split2__out;
    _udp_send_p_real_udp__out[46] = _udp_send_bus_split3__out;
    // Generated from the component: UDP Send.VOLTAGE_UDP
    _udp_send_voltage_udp__out[0] = _f1_relay_udp_stream_device_transition4_output__out[0];
    _udp_send_voltage_udp__out[1] = _f1_relay_udp_stream_device_transition4_output__out[1];
    _udp_send_voltage_udp__out[2] = _f1_relay_udp_stream_device_transition4_output__out[2];
    _udp_send_voltage_udp__out[3] = _f1_relay_udp_stream_device_transition4_output__out[3];
    _udp_send_voltage_udp__out[4] = _f1_relay_udp_stream_device_transition4_output__out[4];
    _udp_send_voltage_udp__out[5] = _f1_relay_udp_stream_device_transition4_output__out[5];
    _udp_send_voltage_udp__out[6] = _f1_relay_udp_stream_device_transition4_output__out[6];
    _udp_send_voltage_udp__out[7] = _f1_relay_udp_stream_device_transition4_output__out[7];
    _udp_send_voltage_udp__out[8] = _f1_relay_udp_stream_device_transition4_output__out[8];
    _udp_send_voltage_udp__out[9] = _f1_relay_udp_stream_device_transition4_output__out[9];
    _udp_send_voltage_udp__out[10] = _f1_relay_udp_stream_device_transition4_output__out[10];
    _udp_send_voltage_udp__out[11] = _f1_relay_udp_stream_device_transition4_output__out[11];
    _udp_send_voltage_udp__out[12] = _f1_relay_udp_stream_device_transition4_output__out[12];
    _udp_send_voltage_udp__out[13] = _f1_relay_udp_stream_device_transition4_output__out[13];
    _udp_send_voltage_udp__out[14] = _f1_relay_udp_stream_device_transition4_output__out[14];
    _udp_send_voltage_udp__out[15] = _f2_relay_udp_stream_device_transition4_output__out[0];
    _udp_send_voltage_udp__out[16] = _f2_relay_udp_stream_device_transition4_output__out[1];
    _udp_send_voltage_udp__out[17] = _f2_relay_udp_stream_device_transition4_output__out[2];
    _udp_send_voltage_udp__out[18] = _f2_relay_udp_stream_device_transition4_output__out[3];
    _udp_send_voltage_udp__out[19] = _f2_relay_udp_stream_device_transition4_output__out[4];
    _udp_send_voltage_udp__out[20] = _f2_relay_udp_stream_device_transition4_output__out[5];
    _udp_send_voltage_udp__out[21] = _f2_relay_udp_stream_device_transition4_output__out[6];
    _udp_send_voltage_udp__out[22] = _f2_relay_udp_stream_device_transition4_output__out[7];
    _udp_send_voltage_udp__out[23] = _f2_relay_udp_stream_device_transition4_output__out[8];
    _udp_send_voltage_udp__out[24] = _f2_relay_udp_stream_device_transition4_output__out[9];
    _udp_send_voltage_udp__out[25] = _f2_relay_udp_stream_device_transition4_output__out[10];
    _udp_send_voltage_udp__out[26] = _f2_relay_udp_stream_device_transition4_output__out[11];
    _udp_send_voltage_udp__out[27] = _f2_relay_udp_stream_device_transition4_output__out[12];
    _udp_send_voltage_udp__out[28] = _f2_relay_udp_stream_device_transition4_output__out[13];
    _udp_send_voltage_udp__out[29] = _f2_relay_udp_stream_device_transition4_output__out[14];
    _udp_send_voltage_udp__out[30] = _f2_relay_udp_stream_device_transition4_output__out[15];
    _udp_send_voltage_udp__out[31] = _f2_relay_udp_stream_device_transition7_output__out[0];
    _udp_send_voltage_udp__out[32] = _f2_relay_udp_stream_device_transition7_output__out[1];
    _udp_send_voltage_udp__out[33] = _f2_relay_udp_stream_device_transition7_output__out[2];
    _udp_send_voltage_udp__out[34] = _f3_relay_udp_stream_device_transition4_output__out[0];
    _udp_send_voltage_udp__out[35] = _f3_relay_udp_stream_device_transition4_output__out[1];
    _udp_send_voltage_udp__out[36] = _f3_relay_udp_stream_device_transition4_output__out[2];
    _udp_send_voltage_udp__out[37] = _f3_relay_udp_stream_device_transition4_output__out[3];
    _udp_send_voltage_udp__out[38] = _f3_relay_udp_stream_device_transition4_output__out[4];
    _udp_send_voltage_udp__out[39] = _f3_relay_udp_stream_device_transition4_output__out[5];
    _udp_send_voltage_udp__out[40] = _f3_relay_udp_stream_device_transition4_output__out[6];
    _udp_send_voltage_udp__out[41] = _f3_relay_udp_stream_device_transition4_output__out[7];
    _udp_send_voltage_udp__out[42] = _f3_relay_udp_stream_device_transition4_output__out[8];
    _udp_send_voltage_udp__out[43] = _f3_relay_udp_stream_device_transition4_output__out[9];
    _udp_send_voltage_udp__out[44] = _udp_send_bus_split1__out2;
    _udp_send_voltage_udp__out[45] = _udp_send_bus_split2__out2;
    _udp_send_voltage_udp__out[46] = _udp_send_bus_split3__out2;
    // Generated from the component: F3_PCC.PCC Measurements.Three phase PLL1.PID.Sum8
    _f3_pcc_pcc_measurements_three_phase_pll1_pid_sum8__out = _f3_pcc_pcc_measurements_three_phase_pll1_pid_kd__out - _f3_pcc_pcc_measurements_three_phase_pll1_pid_integrator2__out;
    // Generated from the component: F1_PCC.PCC Measurements.Three phase PLL1.PID.Gain1
    _f1_pcc_pcc_measurements_three_phase_pll1_pid_gain1__out = 714.2857 * _f1_pcc_pcc_measurements_three_phase_pll1_pid_sum8__out;
    // Generated from the component: F2_PCC.PCC Measurements.Three phase PLL1.PID.Gain1
    _f2_pcc_pcc_measurements_three_phase_pll1_pid_gain1__out = 714.2857 * _f2_pcc_pcc_measurements_three_phase_pll1_pid_sum8__out;
    // Generated from the component: UDP Send.BREAKER_UDP
    _udp_send_breaker_udp__out[0] = _udp_send_boolean_split1__out[0];
    _udp_send_breaker_udp__out[1] = _udp_send_boolean_split1__out[1];
    _udp_send_breaker_udp__out[2] = _udp_send_boolean_split1__out[2];
    _udp_send_breaker_udp__out[3] = _udp_send_boolean_split1__out[3];
    _udp_send_breaker_udp__out[4] = _udp_send_boolean_split1__out[4];
    _udp_send_breaker_udp__out[5] = _udp_send_boolean_split1__out[5];
    _udp_send_breaker_udp__out[6] = _udp_send_boolean_split1__out[6];
    _udp_send_breaker_udp__out[7] = _udp_send_boolean_split1__out[7];
    _udp_send_breaker_udp__out[8] = _udp_send_boolean_split1__out[8];
    _udp_send_breaker_udp__out[9] = _udp_send_boolean_split1__out[9];
    _udp_send_breaker_udp__out[10] = _udp_send_boolean_split1__out[10];
    _udp_send_breaker_udp__out[11] = _udp_send_boolean_split1__out[11];
    _udp_send_breaker_udp__out[12] = _udp_send_boolean_split1__out[12];
    _udp_send_breaker_udp__out[13] = _udp_send_boolean_split1__out[13];
    _udp_send_breaker_udp__out[14] = _udp_send_boolean_split1__out[14];
    _udp_send_breaker_udp__out[15] = _udp_send_boolean_split2__out[0];
    _udp_send_breaker_udp__out[16] = _udp_send_boolean_split2__out[1];
    _udp_send_breaker_udp__out[17] = _udp_send_boolean_split2__out[2];
    _udp_send_breaker_udp__out[18] = _udp_send_boolean_split2__out[3];
    _udp_send_breaker_udp__out[19] = _udp_send_boolean_split2__out[4];
    _udp_send_breaker_udp__out[20] = _udp_send_boolean_split2__out[5];
    _udp_send_breaker_udp__out[21] = _udp_send_boolean_split2__out[6];
    _udp_send_breaker_udp__out[22] = _udp_send_boolean_split2__out[7];
    _udp_send_breaker_udp__out[23] = _udp_send_boolean_split2__out[8];
    _udp_send_breaker_udp__out[24] = _udp_send_boolean_split2__out[9];
    _udp_send_breaker_udp__out[25] = _udp_send_boolean_split2__out[10];
    _udp_send_breaker_udp__out[26] = _udp_send_boolean_split2__out[11];
    _udp_send_breaker_udp__out[27] = _udp_send_boolean_split2__out[12];
    _udp_send_breaker_udp__out[28] = _udp_send_boolean_split2__out[13];
    _udp_send_breaker_udp__out[29] = _udp_send_boolean_split2__out[14];
    _udp_send_breaker_udp__out[30] = _udp_send_boolean_split2__out[15];
    _udp_send_breaker_udp__out[31] = _udp_send_boolean_split3__out[0];
    _udp_send_breaker_udp__out[32] = _udp_send_boolean_split3__out[1];
    _udp_send_breaker_udp__out[33] = _udp_send_boolean_split3__out[2];
    _udp_send_breaker_udp__out[34] = _udp_send_boolean_split4__out[0];
    _udp_send_breaker_udp__out[35] = _udp_send_boolean_split4__out[1];
    _udp_send_breaker_udp__out[36] = _udp_send_boolean_split4__out[2];
    _udp_send_breaker_udp__out[37] = _udp_send_boolean_split4__out[3];
    _udp_send_breaker_udp__out[38] = _udp_send_boolean_split4__out[4];
    _udp_send_breaker_udp__out[39] = _udp_send_boolean_split4__out[5];
    _udp_send_breaker_udp__out[40] = _udp_send_boolean_split4__out[6];
    _udp_send_breaker_udp__out[41] = _udp_send_boolean_split4__out[7];
    _udp_send_breaker_udp__out[42] = _udp_send_boolean_split4__out[8];
    _udp_send_breaker_udp__out[43] = _udp_send_boolean_split4__out[9];
    _udp_send_breaker_udp__out[44] = _udp_send_data_type_conversion14__out;
    _udp_send_breaker_udp__out[45] = _udp_send_data_type_conversion15__out;
    _udp_send_breaker_udp__out[46] = _udp_send_data_type_conversion16__out;
    // Generated from the component: UDP Send.Data Type Conversion4
    _udp_send_data_type_conversion4__out[0] = (X_Int32)_udp_send_frequency_udp__out[0];
    _udp_send_data_type_conversion4__out[1] = (X_Int32)_udp_send_frequency_udp__out[1];
    _udp_send_data_type_conversion4__out[2] = (X_Int32)_udp_send_frequency_udp__out[2];
    _udp_send_data_type_conversion4__out[3] = (X_Int32)_udp_send_frequency_udp__out[3];
    _udp_send_data_type_conversion4__out[4] = (X_Int32)_udp_send_frequency_udp__out[4];
    _udp_send_data_type_conversion4__out[5] = (X_Int32)_udp_send_frequency_udp__out[5];
    _udp_send_data_type_conversion4__out[6] = (X_Int32)_udp_send_frequency_udp__out[6];
    _udp_send_data_type_conversion4__out[7] = (X_Int32)_udp_send_frequency_udp__out[7];
    _udp_send_data_type_conversion4__out[8] = (X_Int32)_udp_send_frequency_udp__out[8];
    _udp_send_data_type_conversion4__out[9] = (X_Int32)_udp_send_frequency_udp__out[9];
    _udp_send_data_type_conversion4__out[10] = (X_Int32)_udp_send_frequency_udp__out[10];
    _udp_send_data_type_conversion4__out[11] = (X_Int32)_udp_send_frequency_udp__out[11];
    _udp_send_data_type_conversion4__out[12] = (X_Int32)_udp_send_frequency_udp__out[12];
    _udp_send_data_type_conversion4__out[13] = (X_Int32)_udp_send_frequency_udp__out[13];
    _udp_send_data_type_conversion4__out[14] = (X_Int32)_udp_send_frequency_udp__out[14];
    _udp_send_data_type_conversion4__out[15] = (X_Int32)_udp_send_frequency_udp__out[15];
    _udp_send_data_type_conversion4__out[16] = (X_Int32)_udp_send_frequency_udp__out[16];
    _udp_send_data_type_conversion4__out[17] = (X_Int32)_udp_send_frequency_udp__out[17];
    _udp_send_data_type_conversion4__out[18] = (X_Int32)_udp_send_frequency_udp__out[18];
    _udp_send_data_type_conversion4__out[19] = (X_Int32)_udp_send_frequency_udp__out[19];
    _udp_send_data_type_conversion4__out[20] = (X_Int32)_udp_send_frequency_udp__out[20];
    _udp_send_data_type_conversion4__out[21] = (X_Int32)_udp_send_frequency_udp__out[21];
    _udp_send_data_type_conversion4__out[22] = (X_Int32)_udp_send_frequency_udp__out[22];
    _udp_send_data_type_conversion4__out[23] = (X_Int32)_udp_send_frequency_udp__out[23];
    _udp_send_data_type_conversion4__out[24] = (X_Int32)_udp_send_frequency_udp__out[24];
    _udp_send_data_type_conversion4__out[25] = (X_Int32)_udp_send_frequency_udp__out[25];
    _udp_send_data_type_conversion4__out[26] = (X_Int32)_udp_send_frequency_udp__out[26];
    _udp_send_data_type_conversion4__out[27] = (X_Int32)_udp_send_frequency_udp__out[27];
    _udp_send_data_type_conversion4__out[28] = (X_Int32)_udp_send_frequency_udp__out[28];
    _udp_send_data_type_conversion4__out[29] = (X_Int32)_udp_send_frequency_udp__out[29];
    _udp_send_data_type_conversion4__out[30] = (X_Int32)_udp_send_frequency_udp__out[30];
    _udp_send_data_type_conversion4__out[31] = (X_Int32)_udp_send_frequency_udp__out[31];
    _udp_send_data_type_conversion4__out[32] = (X_Int32)_udp_send_frequency_udp__out[32];
    _udp_send_data_type_conversion4__out[33] = (X_Int32)_udp_send_frequency_udp__out[33];
    _udp_send_data_type_conversion4__out[34] = (X_Int32)_udp_send_frequency_udp__out[34];
    _udp_send_data_type_conversion4__out[35] = (X_Int32)_udp_send_frequency_udp__out[35];
    _udp_send_data_type_conversion4__out[36] = (X_Int32)_udp_send_frequency_udp__out[36];
    _udp_send_data_type_conversion4__out[37] = (X_Int32)_udp_send_frequency_udp__out[37];
    _udp_send_data_type_conversion4__out[38] = (X_Int32)_udp_send_frequency_udp__out[38];
    _udp_send_data_type_conversion4__out[39] = (X_Int32)_udp_send_frequency_udp__out[39];
    _udp_send_data_type_conversion4__out[40] = (X_Int32)_udp_send_frequency_udp__out[40];
    _udp_send_data_type_conversion4__out[41] = (X_Int32)_udp_send_frequency_udp__out[41];
    _udp_send_data_type_conversion4__out[42] = (X_Int32)_udp_send_frequency_udp__out[42];
    _udp_send_data_type_conversion4__out[43] = (X_Int32)_udp_send_frequency_udp__out[43];
    _udp_send_data_type_conversion4__out[44] = (X_Int32)_udp_send_frequency_udp__out[44];
    _udp_send_data_type_conversion4__out[45] = (X_Int32)_udp_send_frequency_udp__out[45];
    _udp_send_data_type_conversion4__out[46] = (X_Int32)_udp_send_frequency_udp__out[46];
    // Generated from the component: UDP Send.Data Type Conversion12
    _udp_send_data_type_conversion12__out[0] = (X_Int32)_udp_send_import_export__out[0];
    _udp_send_data_type_conversion12__out[1] = (X_Int32)_udp_send_import_export__out[1];
    _udp_send_data_type_conversion12__out[2] = (X_Int32)_udp_send_import_export__out[2];
    // Generated from the component: UDP Send.Data Type Conversion13
    _udp_send_data_type_conversion13__out[0] = (X_Int32)_udp_send_lagging_leading__out[0];
    _udp_send_data_type_conversion13__out[1] = (X_Int32)_udp_send_lagging_leading__out[1];
    _udp_send_data_type_conversion13__out[2] = (X_Int32)_udp_send_lagging_leading__out[2];
    // Generated from the component: UDP Send.Data Type Conversion11
    _udp_send_data_type_conversion11__out[0] = (X_Int32)_udp_send_power_factor__out[0];
    _udp_send_data_type_conversion11__out[1] = (X_Int32)_udp_send_power_factor__out[1];
    _udp_send_data_type_conversion11__out[2] = (X_Int32)_udp_send_power_factor__out[2];
    // Generated from the component: UDP Send.Data Type Conversion2
    _udp_send_data_type_conversion2__out[0] = (X_Int32)_udp_send_p_reactive_udp__out[0];
    _udp_send_data_type_conversion2__out[1] = (X_Int32)_udp_send_p_reactive_udp__out[1];
    _udp_send_data_type_conversion2__out[2] = (X_Int32)_udp_send_p_reactive_udp__out[2];
    _udp_send_data_type_conversion2__out[3] = (X_Int32)_udp_send_p_reactive_udp__out[3];
    _udp_send_data_type_conversion2__out[4] = (X_Int32)_udp_send_p_reactive_udp__out[4];
    _udp_send_data_type_conversion2__out[5] = (X_Int32)_udp_send_p_reactive_udp__out[5];
    _udp_send_data_type_conversion2__out[6] = (X_Int32)_udp_send_p_reactive_udp__out[6];
    _udp_send_data_type_conversion2__out[7] = (X_Int32)_udp_send_p_reactive_udp__out[7];
    _udp_send_data_type_conversion2__out[8] = (X_Int32)_udp_send_p_reactive_udp__out[8];
    _udp_send_data_type_conversion2__out[9] = (X_Int32)_udp_send_p_reactive_udp__out[9];
    _udp_send_data_type_conversion2__out[10] = (X_Int32)_udp_send_p_reactive_udp__out[10];
    _udp_send_data_type_conversion2__out[11] = (X_Int32)_udp_send_p_reactive_udp__out[11];
    _udp_send_data_type_conversion2__out[12] = (X_Int32)_udp_send_p_reactive_udp__out[12];
    _udp_send_data_type_conversion2__out[13] = (X_Int32)_udp_send_p_reactive_udp__out[13];
    _udp_send_data_type_conversion2__out[14] = (X_Int32)_udp_send_p_reactive_udp__out[14];
    _udp_send_data_type_conversion2__out[15] = (X_Int32)_udp_send_p_reactive_udp__out[15];
    _udp_send_data_type_conversion2__out[16] = (X_Int32)_udp_send_p_reactive_udp__out[16];
    _udp_send_data_type_conversion2__out[17] = (X_Int32)_udp_send_p_reactive_udp__out[17];
    _udp_send_data_type_conversion2__out[18] = (X_Int32)_udp_send_p_reactive_udp__out[18];
    _udp_send_data_type_conversion2__out[19] = (X_Int32)_udp_send_p_reactive_udp__out[19];
    _udp_send_data_type_conversion2__out[20] = (X_Int32)_udp_send_p_reactive_udp__out[20];
    _udp_send_data_type_conversion2__out[21] = (X_Int32)_udp_send_p_reactive_udp__out[21];
    _udp_send_data_type_conversion2__out[22] = (X_Int32)_udp_send_p_reactive_udp__out[22];
    _udp_send_data_type_conversion2__out[23] = (X_Int32)_udp_send_p_reactive_udp__out[23];
    _udp_send_data_type_conversion2__out[24] = (X_Int32)_udp_send_p_reactive_udp__out[24];
    _udp_send_data_type_conversion2__out[25] = (X_Int32)_udp_send_p_reactive_udp__out[25];
    _udp_send_data_type_conversion2__out[26] = (X_Int32)_udp_send_p_reactive_udp__out[26];
    _udp_send_data_type_conversion2__out[27] = (X_Int32)_udp_send_p_reactive_udp__out[27];
    _udp_send_data_type_conversion2__out[28] = (X_Int32)_udp_send_p_reactive_udp__out[28];
    _udp_send_data_type_conversion2__out[29] = (X_Int32)_udp_send_p_reactive_udp__out[29];
    _udp_send_data_type_conversion2__out[30] = (X_Int32)_udp_send_p_reactive_udp__out[30];
    _udp_send_data_type_conversion2__out[31] = (X_Int32)_udp_send_p_reactive_udp__out[31];
    _udp_send_data_type_conversion2__out[32] = (X_Int32)_udp_send_p_reactive_udp__out[32];
    _udp_send_data_type_conversion2__out[33] = (X_Int32)_udp_send_p_reactive_udp__out[33];
    _udp_send_data_type_conversion2__out[34] = (X_Int32)_udp_send_p_reactive_udp__out[34];
    _udp_send_data_type_conversion2__out[35] = (X_Int32)_udp_send_p_reactive_udp__out[35];
    _udp_send_data_type_conversion2__out[36] = (X_Int32)_udp_send_p_reactive_udp__out[36];
    _udp_send_data_type_conversion2__out[37] = (X_Int32)_udp_send_p_reactive_udp__out[37];
    _udp_send_data_type_conversion2__out[38] = (X_Int32)_udp_send_p_reactive_udp__out[38];
    _udp_send_data_type_conversion2__out[39] = (X_Int32)_udp_send_p_reactive_udp__out[39];
    _udp_send_data_type_conversion2__out[40] = (X_Int32)_udp_send_p_reactive_udp__out[40];
    _udp_send_data_type_conversion2__out[41] = (X_Int32)_udp_send_p_reactive_udp__out[41];
    _udp_send_data_type_conversion2__out[42] = (X_Int32)_udp_send_p_reactive_udp__out[42];
    _udp_send_data_type_conversion2__out[43] = (X_Int32)_udp_send_p_reactive_udp__out[43];
    _udp_send_data_type_conversion2__out[44] = (X_Int32)_udp_send_p_reactive_udp__out[44];
    _udp_send_data_type_conversion2__out[45] = (X_Int32)_udp_send_p_reactive_udp__out[45];
    _udp_send_data_type_conversion2__out[46] = (X_Int32)_udp_send_p_reactive_udp__out[46];
    // Generated from the component: UDP Send.Data Type Conversion1
    _udp_send_data_type_conversion1__out[0] = (X_Int32)_udp_send_p_real_udp__out[0];
    _udp_send_data_type_conversion1__out[1] = (X_Int32)_udp_send_p_real_udp__out[1];
    _udp_send_data_type_conversion1__out[2] = (X_Int32)_udp_send_p_real_udp__out[2];
    _udp_send_data_type_conversion1__out[3] = (X_Int32)_udp_send_p_real_udp__out[3];
    _udp_send_data_type_conversion1__out[4] = (X_Int32)_udp_send_p_real_udp__out[4];
    _udp_send_data_type_conversion1__out[5] = (X_Int32)_udp_send_p_real_udp__out[5];
    _udp_send_data_type_conversion1__out[6] = (X_Int32)_udp_send_p_real_udp__out[6];
    _udp_send_data_type_conversion1__out[7] = (X_Int32)_udp_send_p_real_udp__out[7];
    _udp_send_data_type_conversion1__out[8] = (X_Int32)_udp_send_p_real_udp__out[8];
    _udp_send_data_type_conversion1__out[9] = (X_Int32)_udp_send_p_real_udp__out[9];
    _udp_send_data_type_conversion1__out[10] = (X_Int32)_udp_send_p_real_udp__out[10];
    _udp_send_data_type_conversion1__out[11] = (X_Int32)_udp_send_p_real_udp__out[11];
    _udp_send_data_type_conversion1__out[12] = (X_Int32)_udp_send_p_real_udp__out[12];
    _udp_send_data_type_conversion1__out[13] = (X_Int32)_udp_send_p_real_udp__out[13];
    _udp_send_data_type_conversion1__out[14] = (X_Int32)_udp_send_p_real_udp__out[14];
    _udp_send_data_type_conversion1__out[15] = (X_Int32)_udp_send_p_real_udp__out[15];
    _udp_send_data_type_conversion1__out[16] = (X_Int32)_udp_send_p_real_udp__out[16];
    _udp_send_data_type_conversion1__out[17] = (X_Int32)_udp_send_p_real_udp__out[17];
    _udp_send_data_type_conversion1__out[18] = (X_Int32)_udp_send_p_real_udp__out[18];
    _udp_send_data_type_conversion1__out[19] = (X_Int32)_udp_send_p_real_udp__out[19];
    _udp_send_data_type_conversion1__out[20] = (X_Int32)_udp_send_p_real_udp__out[20];
    _udp_send_data_type_conversion1__out[21] = (X_Int32)_udp_send_p_real_udp__out[21];
    _udp_send_data_type_conversion1__out[22] = (X_Int32)_udp_send_p_real_udp__out[22];
    _udp_send_data_type_conversion1__out[23] = (X_Int32)_udp_send_p_real_udp__out[23];
    _udp_send_data_type_conversion1__out[24] = (X_Int32)_udp_send_p_real_udp__out[24];
    _udp_send_data_type_conversion1__out[25] = (X_Int32)_udp_send_p_real_udp__out[25];
    _udp_send_data_type_conversion1__out[26] = (X_Int32)_udp_send_p_real_udp__out[26];
    _udp_send_data_type_conversion1__out[27] = (X_Int32)_udp_send_p_real_udp__out[27];
    _udp_send_data_type_conversion1__out[28] = (X_Int32)_udp_send_p_real_udp__out[28];
    _udp_send_data_type_conversion1__out[29] = (X_Int32)_udp_send_p_real_udp__out[29];
    _udp_send_data_type_conversion1__out[30] = (X_Int32)_udp_send_p_real_udp__out[30];
    _udp_send_data_type_conversion1__out[31] = (X_Int32)_udp_send_p_real_udp__out[31];
    _udp_send_data_type_conversion1__out[32] = (X_Int32)_udp_send_p_real_udp__out[32];
    _udp_send_data_type_conversion1__out[33] = (X_Int32)_udp_send_p_real_udp__out[33];
    _udp_send_data_type_conversion1__out[34] = (X_Int32)_udp_send_p_real_udp__out[34];
    _udp_send_data_type_conversion1__out[35] = (X_Int32)_udp_send_p_real_udp__out[35];
    _udp_send_data_type_conversion1__out[36] = (X_Int32)_udp_send_p_real_udp__out[36];
    _udp_send_data_type_conversion1__out[37] = (X_Int32)_udp_send_p_real_udp__out[37];
    _udp_send_data_type_conversion1__out[38] = (X_Int32)_udp_send_p_real_udp__out[38];
    _udp_send_data_type_conversion1__out[39] = (X_Int32)_udp_send_p_real_udp__out[39];
    _udp_send_data_type_conversion1__out[40] = (X_Int32)_udp_send_p_real_udp__out[40];
    _udp_send_data_type_conversion1__out[41] = (X_Int32)_udp_send_p_real_udp__out[41];
    _udp_send_data_type_conversion1__out[42] = (X_Int32)_udp_send_p_real_udp__out[42];
    _udp_send_data_type_conversion1__out[43] = (X_Int32)_udp_send_p_real_udp__out[43];
    _udp_send_data_type_conversion1__out[44] = (X_Int32)_udp_send_p_real_udp__out[44];
    _udp_send_data_type_conversion1__out[45] = (X_Int32)_udp_send_p_real_udp__out[45];
    _udp_send_data_type_conversion1__out[46] = (X_Int32)_udp_send_p_real_udp__out[46];
    // Generated from the component: UDP Send.Data Type Conversion3
    _udp_send_data_type_conversion3__out[0] = (X_Int32)_udp_send_voltage_udp__out[0];
    _udp_send_data_type_conversion3__out[1] = (X_Int32)_udp_send_voltage_udp__out[1];
    _udp_send_data_type_conversion3__out[2] = (X_Int32)_udp_send_voltage_udp__out[2];
    _udp_send_data_type_conversion3__out[3] = (X_Int32)_udp_send_voltage_udp__out[3];
    _udp_send_data_type_conversion3__out[4] = (X_Int32)_udp_send_voltage_udp__out[4];
    _udp_send_data_type_conversion3__out[5] = (X_Int32)_udp_send_voltage_udp__out[5];
    _udp_send_data_type_conversion3__out[6] = (X_Int32)_udp_send_voltage_udp__out[6];
    _udp_send_data_type_conversion3__out[7] = (X_Int32)_udp_send_voltage_udp__out[7];
    _udp_send_data_type_conversion3__out[8] = (X_Int32)_udp_send_voltage_udp__out[8];
    _udp_send_data_type_conversion3__out[9] = (X_Int32)_udp_send_voltage_udp__out[9];
    _udp_send_data_type_conversion3__out[10] = (X_Int32)_udp_send_voltage_udp__out[10];
    _udp_send_data_type_conversion3__out[11] = (X_Int32)_udp_send_voltage_udp__out[11];
    _udp_send_data_type_conversion3__out[12] = (X_Int32)_udp_send_voltage_udp__out[12];
    _udp_send_data_type_conversion3__out[13] = (X_Int32)_udp_send_voltage_udp__out[13];
    _udp_send_data_type_conversion3__out[14] = (X_Int32)_udp_send_voltage_udp__out[14];
    _udp_send_data_type_conversion3__out[15] = (X_Int32)_udp_send_voltage_udp__out[15];
    _udp_send_data_type_conversion3__out[16] = (X_Int32)_udp_send_voltage_udp__out[16];
    _udp_send_data_type_conversion3__out[17] = (X_Int32)_udp_send_voltage_udp__out[17];
    _udp_send_data_type_conversion3__out[18] = (X_Int32)_udp_send_voltage_udp__out[18];
    _udp_send_data_type_conversion3__out[19] = (X_Int32)_udp_send_voltage_udp__out[19];
    _udp_send_data_type_conversion3__out[20] = (X_Int32)_udp_send_voltage_udp__out[20];
    _udp_send_data_type_conversion3__out[21] = (X_Int32)_udp_send_voltage_udp__out[21];
    _udp_send_data_type_conversion3__out[22] = (X_Int32)_udp_send_voltage_udp__out[22];
    _udp_send_data_type_conversion3__out[23] = (X_Int32)_udp_send_voltage_udp__out[23];
    _udp_send_data_type_conversion3__out[24] = (X_Int32)_udp_send_voltage_udp__out[24];
    _udp_send_data_type_conversion3__out[25] = (X_Int32)_udp_send_voltage_udp__out[25];
    _udp_send_data_type_conversion3__out[26] = (X_Int32)_udp_send_voltage_udp__out[26];
    _udp_send_data_type_conversion3__out[27] = (X_Int32)_udp_send_voltage_udp__out[27];
    _udp_send_data_type_conversion3__out[28] = (X_Int32)_udp_send_voltage_udp__out[28];
    _udp_send_data_type_conversion3__out[29] = (X_Int32)_udp_send_voltage_udp__out[29];
    _udp_send_data_type_conversion3__out[30] = (X_Int32)_udp_send_voltage_udp__out[30];
    _udp_send_data_type_conversion3__out[31] = (X_Int32)_udp_send_voltage_udp__out[31];
    _udp_send_data_type_conversion3__out[32] = (X_Int32)_udp_send_voltage_udp__out[32];
    _udp_send_data_type_conversion3__out[33] = (X_Int32)_udp_send_voltage_udp__out[33];
    _udp_send_data_type_conversion3__out[34] = (X_Int32)_udp_send_voltage_udp__out[34];
    _udp_send_data_type_conversion3__out[35] = (X_Int32)_udp_send_voltage_udp__out[35];
    _udp_send_data_type_conversion3__out[36] = (X_Int32)_udp_send_voltage_udp__out[36];
    _udp_send_data_type_conversion3__out[37] = (X_Int32)_udp_send_voltage_udp__out[37];
    _udp_send_data_type_conversion3__out[38] = (X_Int32)_udp_send_voltage_udp__out[38];
    _udp_send_data_type_conversion3__out[39] = (X_Int32)_udp_send_voltage_udp__out[39];
    _udp_send_data_type_conversion3__out[40] = (X_Int32)_udp_send_voltage_udp__out[40];
    _udp_send_data_type_conversion3__out[41] = (X_Int32)_udp_send_voltage_udp__out[41];
    _udp_send_data_type_conversion3__out[42] = (X_Int32)_udp_send_voltage_udp__out[42];
    _udp_send_data_type_conversion3__out[43] = (X_Int32)_udp_send_voltage_udp__out[43];
    _udp_send_data_type_conversion3__out[44] = (X_Int32)_udp_send_voltage_udp__out[44];
    _udp_send_data_type_conversion3__out[45] = (X_Int32)_udp_send_voltage_udp__out[45];
    _udp_send_data_type_conversion3__out[46] = (X_Int32)_udp_send_voltage_udp__out[46];
    // Generated from the component: F3_PCC.PCC Measurements.Three phase PLL1.PID.Gain1
    _f3_pcc_pcc_measurements_three_phase_pll1_pid_gain1__out = 714.2857 * _f3_pcc_pcc_measurements_three_phase_pll1_pid_sum8__out;
    // Generated from the component: F1_PCC.PCC Measurements.Three phase PLL1.PID.Sum5
    _f1_pcc_pcc_measurements_three_phase_pll1_pid_sum5__out = _f1_pcc_pcc_measurements_three_phase_pll1_pid_kp__out + _f1_pcc_pcc_measurements_three_phase_pll1_pid_gain1__out + _f1_pcc_pcc_measurements_three_phase_pll1_pid_integrator1__out;
    // Generated from the component: F2_PCC.PCC Measurements.Three phase PLL1.PID.Sum5
    _f2_pcc_pcc_measurements_three_phase_pll1_pid_sum5__out = _f2_pcc_pcc_measurements_three_phase_pll1_pid_kp__out + _f2_pcc_pcc_measurements_three_phase_pll1_pid_gain1__out + _f2_pcc_pcc_measurements_three_phase_pll1_pid_integrator1__out;
    // Generated from the component: UDP Send.Data Type Conversion5
    _udp_send_data_type_conversion5__out[0] = (X_Int32)_udp_send_breaker_udp__out[0];
    _udp_send_data_type_conversion5__out[1] = (X_Int32)_udp_send_breaker_udp__out[1];
    _udp_send_data_type_conversion5__out[2] = (X_Int32)_udp_send_breaker_udp__out[2];
    _udp_send_data_type_conversion5__out[3] = (X_Int32)_udp_send_breaker_udp__out[3];
    _udp_send_data_type_conversion5__out[4] = (X_Int32)_udp_send_breaker_udp__out[4];
    _udp_send_data_type_conversion5__out[5] = (X_Int32)_udp_send_breaker_udp__out[5];
    _udp_send_data_type_conversion5__out[6] = (X_Int32)_udp_send_breaker_udp__out[6];
    _udp_send_data_type_conversion5__out[7] = (X_Int32)_udp_send_breaker_udp__out[7];
    _udp_send_data_type_conversion5__out[8] = (X_Int32)_udp_send_breaker_udp__out[8];
    _udp_send_data_type_conversion5__out[9] = (X_Int32)_udp_send_breaker_udp__out[9];
    _udp_send_data_type_conversion5__out[10] = (X_Int32)_udp_send_breaker_udp__out[10];
    _udp_send_data_type_conversion5__out[11] = (X_Int32)_udp_send_breaker_udp__out[11];
    _udp_send_data_type_conversion5__out[12] = (X_Int32)_udp_send_breaker_udp__out[12];
    _udp_send_data_type_conversion5__out[13] = (X_Int32)_udp_send_breaker_udp__out[13];
    _udp_send_data_type_conversion5__out[14] = (X_Int32)_udp_send_breaker_udp__out[14];
    _udp_send_data_type_conversion5__out[15] = (X_Int32)_udp_send_breaker_udp__out[15];
    _udp_send_data_type_conversion5__out[16] = (X_Int32)_udp_send_breaker_udp__out[16];
    _udp_send_data_type_conversion5__out[17] = (X_Int32)_udp_send_breaker_udp__out[17];
    _udp_send_data_type_conversion5__out[18] = (X_Int32)_udp_send_breaker_udp__out[18];
    _udp_send_data_type_conversion5__out[19] = (X_Int32)_udp_send_breaker_udp__out[19];
    _udp_send_data_type_conversion5__out[20] = (X_Int32)_udp_send_breaker_udp__out[20];
    _udp_send_data_type_conversion5__out[21] = (X_Int32)_udp_send_breaker_udp__out[21];
    _udp_send_data_type_conversion5__out[22] = (X_Int32)_udp_send_breaker_udp__out[22];
    _udp_send_data_type_conversion5__out[23] = (X_Int32)_udp_send_breaker_udp__out[23];
    _udp_send_data_type_conversion5__out[24] = (X_Int32)_udp_send_breaker_udp__out[24];
    _udp_send_data_type_conversion5__out[25] = (X_Int32)_udp_send_breaker_udp__out[25];
    _udp_send_data_type_conversion5__out[26] = (X_Int32)_udp_send_breaker_udp__out[26];
    _udp_send_data_type_conversion5__out[27] = (X_Int32)_udp_send_breaker_udp__out[27];
    _udp_send_data_type_conversion5__out[28] = (X_Int32)_udp_send_breaker_udp__out[28];
    _udp_send_data_type_conversion5__out[29] = (X_Int32)_udp_send_breaker_udp__out[29];
    _udp_send_data_type_conversion5__out[30] = (X_Int32)_udp_send_breaker_udp__out[30];
    _udp_send_data_type_conversion5__out[31] = (X_Int32)_udp_send_breaker_udp__out[31];
    _udp_send_data_type_conversion5__out[32] = (X_Int32)_udp_send_breaker_udp__out[32];
    _udp_send_data_type_conversion5__out[33] = (X_Int32)_udp_send_breaker_udp__out[33];
    _udp_send_data_type_conversion5__out[34] = (X_Int32)_udp_send_breaker_udp__out[34];
    _udp_send_data_type_conversion5__out[35] = (X_Int32)_udp_send_breaker_udp__out[35];
    _udp_send_data_type_conversion5__out[36] = (X_Int32)_udp_send_breaker_udp__out[36];
    _udp_send_data_type_conversion5__out[37] = (X_Int32)_udp_send_breaker_udp__out[37];
    _udp_send_data_type_conversion5__out[38] = (X_Int32)_udp_send_breaker_udp__out[38];
    _udp_send_data_type_conversion5__out[39] = (X_Int32)_udp_send_breaker_udp__out[39];
    _udp_send_data_type_conversion5__out[40] = (X_Int32)_udp_send_breaker_udp__out[40];
    _udp_send_data_type_conversion5__out[41] = (X_Int32)_udp_send_breaker_udp__out[41];
    _udp_send_data_type_conversion5__out[42] = (X_Int32)_udp_send_breaker_udp__out[42];
    _udp_send_data_type_conversion5__out[43] = (X_Int32)_udp_send_breaker_udp__out[43];
    _udp_send_data_type_conversion5__out[44] = (X_Int32)_udp_send_breaker_udp__out[44];
    _udp_send_data_type_conversion5__out[45] = (X_Int32)_udp_send_breaker_udp__out[45];
    _udp_send_data_type_conversion5__out[46] = (X_Int32)_udp_send_breaker_udp__out[46];
    // Generated from the component: UDP Send.Signal Device Marker2
    // Generated from the component: F3_PCC.PCC Measurements.Three phase PLL1.PID.Sum5
    _f3_pcc_pcc_measurements_three_phase_pll1_pid_sum5__out = _f3_pcc_pcc_measurements_three_phase_pll1_pid_kp__out + _f3_pcc_pcc_measurements_three_phase_pll1_pid_gain1__out + _f3_pcc_pcc_measurements_three_phase_pll1_pid_integrator1__out;
    // Generated from the component: F1_PCC.PCC Measurements.Three phase PLL1.PID.Limit1
    if (_f1_pcc_pcc_measurements_three_phase_pll1_pid_sum5__out > 10000.0) {
        _f1_pcc_pcc_measurements_three_phase_pll1_pid_limit1__out = 10000.0;
    } else if (_f1_pcc_pcc_measurements_three_phase_pll1_pid_sum5__out < -10000.0) {
        _f1_pcc_pcc_measurements_three_phase_pll1_pid_limit1__out = -10000.0;
    } else {
        _f1_pcc_pcc_measurements_three_phase_pll1_pid_limit1__out = _f1_pcc_pcc_measurements_three_phase_pll1_pid_sum5__out;
    }
    // Generated from the component: F2_PCC.PCC Measurements.Three phase PLL1.PID.Limit1
    if (_f2_pcc_pcc_measurements_three_phase_pll1_pid_sum5__out > 10000.0) {
        _f2_pcc_pcc_measurements_three_phase_pll1_pid_limit1__out = 10000.0;
    } else if (_f2_pcc_pcc_measurements_three_phase_pll1_pid_sum5__out < -10000.0) {
        _f2_pcc_pcc_measurements_three_phase_pll1_pid_limit1__out = -10000.0;
    } else {
        _f2_pcc_pcc_measurements_three_phase_pll1_pid_limit1__out = _f2_pcc_pcc_measurements_three_phase_pll1_pid_sum5__out;
    }
    // Generated from the component: UDP Send.UDP data
    _udp_send_udp_data__out[0] = _udp_send_data_type_conversion1__out[0];
    _udp_send_udp_data__out[1] = _udp_send_data_type_conversion1__out[1];
    _udp_send_udp_data__out[2] = _udp_send_data_type_conversion1__out[2];
    _udp_send_udp_data__out[3] = _udp_send_data_type_conversion1__out[3];
    _udp_send_udp_data__out[4] = _udp_send_data_type_conversion1__out[4];
    _udp_send_udp_data__out[5] = _udp_send_data_type_conversion1__out[5];
    _udp_send_udp_data__out[6] = _udp_send_data_type_conversion1__out[6];
    _udp_send_udp_data__out[7] = _udp_send_data_type_conversion1__out[7];
    _udp_send_udp_data__out[8] = _udp_send_data_type_conversion1__out[8];
    _udp_send_udp_data__out[9] = _udp_send_data_type_conversion1__out[9];
    _udp_send_udp_data__out[10] = _udp_send_data_type_conversion1__out[10];
    _udp_send_udp_data__out[11] = _udp_send_data_type_conversion1__out[11];
    _udp_send_udp_data__out[12] = _udp_send_data_type_conversion1__out[12];
    _udp_send_udp_data__out[13] = _udp_send_data_type_conversion1__out[13];
    _udp_send_udp_data__out[14] = _udp_send_data_type_conversion1__out[14];
    _udp_send_udp_data__out[15] = _udp_send_data_type_conversion1__out[15];
    _udp_send_udp_data__out[16] = _udp_send_data_type_conversion1__out[16];
    _udp_send_udp_data__out[17] = _udp_send_data_type_conversion1__out[17];
    _udp_send_udp_data__out[18] = _udp_send_data_type_conversion1__out[18];
    _udp_send_udp_data__out[19] = _udp_send_data_type_conversion1__out[19];
    _udp_send_udp_data__out[20] = _udp_send_data_type_conversion1__out[20];
    _udp_send_udp_data__out[21] = _udp_send_data_type_conversion1__out[21];
    _udp_send_udp_data__out[22] = _udp_send_data_type_conversion1__out[22];
    _udp_send_udp_data__out[23] = _udp_send_data_type_conversion1__out[23];
    _udp_send_udp_data__out[24] = _udp_send_data_type_conversion1__out[24];
    _udp_send_udp_data__out[25] = _udp_send_data_type_conversion1__out[25];
    _udp_send_udp_data__out[26] = _udp_send_data_type_conversion1__out[26];
    _udp_send_udp_data__out[27] = _udp_send_data_type_conversion1__out[27];
    _udp_send_udp_data__out[28] = _udp_send_data_type_conversion1__out[28];
    _udp_send_udp_data__out[29] = _udp_send_data_type_conversion1__out[29];
    _udp_send_udp_data__out[30] = _udp_send_data_type_conversion1__out[30];
    _udp_send_udp_data__out[31] = _udp_send_data_type_conversion1__out[31];
    _udp_send_udp_data__out[32] = _udp_send_data_type_conversion1__out[32];
    _udp_send_udp_data__out[33] = _udp_send_data_type_conversion1__out[33];
    _udp_send_udp_data__out[34] = _udp_send_data_type_conversion1__out[34];
    _udp_send_udp_data__out[35] = _udp_send_data_type_conversion1__out[35];
    _udp_send_udp_data__out[36] = _udp_send_data_type_conversion1__out[36];
    _udp_send_udp_data__out[37] = _udp_send_data_type_conversion1__out[37];
    _udp_send_udp_data__out[38] = _udp_send_data_type_conversion1__out[38];
    _udp_send_udp_data__out[39] = _udp_send_data_type_conversion1__out[39];
    _udp_send_udp_data__out[40] = _udp_send_data_type_conversion1__out[40];
    _udp_send_udp_data__out[41] = _udp_send_data_type_conversion1__out[41];
    _udp_send_udp_data__out[42] = _udp_send_data_type_conversion1__out[42];
    _udp_send_udp_data__out[43] = _udp_send_data_type_conversion1__out[43];
    _udp_send_udp_data__out[44] = _udp_send_data_type_conversion1__out[44];
    _udp_send_udp_data__out[45] = _udp_send_data_type_conversion1__out[45];
    _udp_send_udp_data__out[46] = _udp_send_data_type_conversion1__out[46];
    _udp_send_udp_data__out[47] = _udp_send_data_type_conversion2__out[0];
    _udp_send_udp_data__out[48] = _udp_send_data_type_conversion2__out[1];
    _udp_send_udp_data__out[49] = _udp_send_data_type_conversion2__out[2];
    _udp_send_udp_data__out[50] = _udp_send_data_type_conversion2__out[3];
    _udp_send_udp_data__out[51] = _udp_send_data_type_conversion2__out[4];
    _udp_send_udp_data__out[52] = _udp_send_data_type_conversion2__out[5];
    _udp_send_udp_data__out[53] = _udp_send_data_type_conversion2__out[6];
    _udp_send_udp_data__out[54] = _udp_send_data_type_conversion2__out[7];
    _udp_send_udp_data__out[55] = _udp_send_data_type_conversion2__out[8];
    _udp_send_udp_data__out[56] = _udp_send_data_type_conversion2__out[9];
    _udp_send_udp_data__out[57] = _udp_send_data_type_conversion2__out[10];
    _udp_send_udp_data__out[58] = _udp_send_data_type_conversion2__out[11];
    _udp_send_udp_data__out[59] = _udp_send_data_type_conversion2__out[12];
    _udp_send_udp_data__out[60] = _udp_send_data_type_conversion2__out[13];
    _udp_send_udp_data__out[61] = _udp_send_data_type_conversion2__out[14];
    _udp_send_udp_data__out[62] = _udp_send_data_type_conversion2__out[15];
    _udp_send_udp_data__out[63] = _udp_send_data_type_conversion2__out[16];
    _udp_send_udp_data__out[64] = _udp_send_data_type_conversion2__out[17];
    _udp_send_udp_data__out[65] = _udp_send_data_type_conversion2__out[18];
    _udp_send_udp_data__out[66] = _udp_send_data_type_conversion2__out[19];
    _udp_send_udp_data__out[67] = _udp_send_data_type_conversion2__out[20];
    _udp_send_udp_data__out[68] = _udp_send_data_type_conversion2__out[21];
    _udp_send_udp_data__out[69] = _udp_send_data_type_conversion2__out[22];
    _udp_send_udp_data__out[70] = _udp_send_data_type_conversion2__out[23];
    _udp_send_udp_data__out[71] = _udp_send_data_type_conversion2__out[24];
    _udp_send_udp_data__out[72] = _udp_send_data_type_conversion2__out[25];
    _udp_send_udp_data__out[73] = _udp_send_data_type_conversion2__out[26];
    _udp_send_udp_data__out[74] = _udp_send_data_type_conversion2__out[27];
    _udp_send_udp_data__out[75] = _udp_send_data_type_conversion2__out[28];
    _udp_send_udp_data__out[76] = _udp_send_data_type_conversion2__out[29];
    _udp_send_udp_data__out[77] = _udp_send_data_type_conversion2__out[30];
    _udp_send_udp_data__out[78] = _udp_send_data_type_conversion2__out[31];
    _udp_send_udp_data__out[79] = _udp_send_data_type_conversion2__out[32];
    _udp_send_udp_data__out[80] = _udp_send_data_type_conversion2__out[33];
    _udp_send_udp_data__out[81] = _udp_send_data_type_conversion2__out[34];
    _udp_send_udp_data__out[82] = _udp_send_data_type_conversion2__out[35];
    _udp_send_udp_data__out[83] = _udp_send_data_type_conversion2__out[36];
    _udp_send_udp_data__out[84] = _udp_send_data_type_conversion2__out[37];
    _udp_send_udp_data__out[85] = _udp_send_data_type_conversion2__out[38];
    _udp_send_udp_data__out[86] = _udp_send_data_type_conversion2__out[39];
    _udp_send_udp_data__out[87] = _udp_send_data_type_conversion2__out[40];
    _udp_send_udp_data__out[88] = _udp_send_data_type_conversion2__out[41];
    _udp_send_udp_data__out[89] = _udp_send_data_type_conversion2__out[42];
    _udp_send_udp_data__out[90] = _udp_send_data_type_conversion2__out[43];
    _udp_send_udp_data__out[91] = _udp_send_data_type_conversion2__out[44];
    _udp_send_udp_data__out[92] = _udp_send_data_type_conversion2__out[45];
    _udp_send_udp_data__out[93] = _udp_send_data_type_conversion2__out[46];
    _udp_send_udp_data__out[94] = _udp_send_data_type_conversion3__out[0];
    _udp_send_udp_data__out[95] = _udp_send_data_type_conversion3__out[1];
    _udp_send_udp_data__out[96] = _udp_send_data_type_conversion3__out[2];
    _udp_send_udp_data__out[97] = _udp_send_data_type_conversion3__out[3];
    _udp_send_udp_data__out[98] = _udp_send_data_type_conversion3__out[4];
    _udp_send_udp_data__out[99] = _udp_send_data_type_conversion3__out[5];
    _udp_send_udp_data__out[100] = _udp_send_data_type_conversion3__out[6];
    _udp_send_udp_data__out[101] = _udp_send_data_type_conversion3__out[7];
    _udp_send_udp_data__out[102] = _udp_send_data_type_conversion3__out[8];
    _udp_send_udp_data__out[103] = _udp_send_data_type_conversion3__out[9];
    _udp_send_udp_data__out[104] = _udp_send_data_type_conversion3__out[10];
    _udp_send_udp_data__out[105] = _udp_send_data_type_conversion3__out[11];
    _udp_send_udp_data__out[106] = _udp_send_data_type_conversion3__out[12];
    _udp_send_udp_data__out[107] = _udp_send_data_type_conversion3__out[13];
    _udp_send_udp_data__out[108] = _udp_send_data_type_conversion3__out[14];
    _udp_send_udp_data__out[109] = _udp_send_data_type_conversion3__out[15];
    _udp_send_udp_data__out[110] = _udp_send_data_type_conversion3__out[16];
    _udp_send_udp_data__out[111] = _udp_send_data_type_conversion3__out[17];
    _udp_send_udp_data__out[112] = _udp_send_data_type_conversion3__out[18];
    _udp_send_udp_data__out[113] = _udp_send_data_type_conversion3__out[19];
    _udp_send_udp_data__out[114] = _udp_send_data_type_conversion3__out[20];
    _udp_send_udp_data__out[115] = _udp_send_data_type_conversion3__out[21];
    _udp_send_udp_data__out[116] = _udp_send_data_type_conversion3__out[22];
    _udp_send_udp_data__out[117] = _udp_send_data_type_conversion3__out[23];
    _udp_send_udp_data__out[118] = _udp_send_data_type_conversion3__out[24];
    _udp_send_udp_data__out[119] = _udp_send_data_type_conversion3__out[25];
    _udp_send_udp_data__out[120] = _udp_send_data_type_conversion3__out[26];
    _udp_send_udp_data__out[121] = _udp_send_data_type_conversion3__out[27];
    _udp_send_udp_data__out[122] = _udp_send_data_type_conversion3__out[28];
    _udp_send_udp_data__out[123] = _udp_send_data_type_conversion3__out[29];
    _udp_send_udp_data__out[124] = _udp_send_data_type_conversion3__out[30];
    _udp_send_udp_data__out[125] = _udp_send_data_type_conversion3__out[31];
    _udp_send_udp_data__out[126] = _udp_send_data_type_conversion3__out[32];
    _udp_send_udp_data__out[127] = _udp_send_data_type_conversion3__out[33];
    _udp_send_udp_data__out[128] = _udp_send_data_type_conversion3__out[34];
    _udp_send_udp_data__out[129] = _udp_send_data_type_conversion3__out[35];
    _udp_send_udp_data__out[130] = _udp_send_data_type_conversion3__out[36];
    _udp_send_udp_data__out[131] = _udp_send_data_type_conversion3__out[37];
    _udp_send_udp_data__out[132] = _udp_send_data_type_conversion3__out[38];
    _udp_send_udp_data__out[133] = _udp_send_data_type_conversion3__out[39];
    _udp_send_udp_data__out[134] = _udp_send_data_type_conversion3__out[40];
    _udp_send_udp_data__out[135] = _udp_send_data_type_conversion3__out[41];
    _udp_send_udp_data__out[136] = _udp_send_data_type_conversion3__out[42];
    _udp_send_udp_data__out[137] = _udp_send_data_type_conversion3__out[43];
    _udp_send_udp_data__out[138] = _udp_send_data_type_conversion3__out[44];
    _udp_send_udp_data__out[139] = _udp_send_data_type_conversion3__out[45];
    _udp_send_udp_data__out[140] = _udp_send_data_type_conversion3__out[46];
    _udp_send_udp_data__out[141] = _udp_send_data_type_conversion4__out[0];
    _udp_send_udp_data__out[142] = _udp_send_data_type_conversion4__out[1];
    _udp_send_udp_data__out[143] = _udp_send_data_type_conversion4__out[2];
    _udp_send_udp_data__out[144] = _udp_send_data_type_conversion4__out[3];
    _udp_send_udp_data__out[145] = _udp_send_data_type_conversion4__out[4];
    _udp_send_udp_data__out[146] = _udp_send_data_type_conversion4__out[5];
    _udp_send_udp_data__out[147] = _udp_send_data_type_conversion4__out[6];
    _udp_send_udp_data__out[148] = _udp_send_data_type_conversion4__out[7];
    _udp_send_udp_data__out[149] = _udp_send_data_type_conversion4__out[8];
    _udp_send_udp_data__out[150] = _udp_send_data_type_conversion4__out[9];
    _udp_send_udp_data__out[151] = _udp_send_data_type_conversion4__out[10];
    _udp_send_udp_data__out[152] = _udp_send_data_type_conversion4__out[11];
    _udp_send_udp_data__out[153] = _udp_send_data_type_conversion4__out[12];
    _udp_send_udp_data__out[154] = _udp_send_data_type_conversion4__out[13];
    _udp_send_udp_data__out[155] = _udp_send_data_type_conversion4__out[14];
    _udp_send_udp_data__out[156] = _udp_send_data_type_conversion4__out[15];
    _udp_send_udp_data__out[157] = _udp_send_data_type_conversion4__out[16];
    _udp_send_udp_data__out[158] = _udp_send_data_type_conversion4__out[17];
    _udp_send_udp_data__out[159] = _udp_send_data_type_conversion4__out[18];
    _udp_send_udp_data__out[160] = _udp_send_data_type_conversion4__out[19];
    _udp_send_udp_data__out[161] = _udp_send_data_type_conversion4__out[20];
    _udp_send_udp_data__out[162] = _udp_send_data_type_conversion4__out[21];
    _udp_send_udp_data__out[163] = _udp_send_data_type_conversion4__out[22];
    _udp_send_udp_data__out[164] = _udp_send_data_type_conversion4__out[23];
    _udp_send_udp_data__out[165] = _udp_send_data_type_conversion4__out[24];
    _udp_send_udp_data__out[166] = _udp_send_data_type_conversion4__out[25];
    _udp_send_udp_data__out[167] = _udp_send_data_type_conversion4__out[26];
    _udp_send_udp_data__out[168] = _udp_send_data_type_conversion4__out[27];
    _udp_send_udp_data__out[169] = _udp_send_data_type_conversion4__out[28];
    _udp_send_udp_data__out[170] = _udp_send_data_type_conversion4__out[29];
    _udp_send_udp_data__out[171] = _udp_send_data_type_conversion4__out[30];
    _udp_send_udp_data__out[172] = _udp_send_data_type_conversion4__out[31];
    _udp_send_udp_data__out[173] = _udp_send_data_type_conversion4__out[32];
    _udp_send_udp_data__out[174] = _udp_send_data_type_conversion4__out[33];
    _udp_send_udp_data__out[175] = _udp_send_data_type_conversion4__out[34];
    _udp_send_udp_data__out[176] = _udp_send_data_type_conversion4__out[35];
    _udp_send_udp_data__out[177] = _udp_send_data_type_conversion4__out[36];
    _udp_send_udp_data__out[178] = _udp_send_data_type_conversion4__out[37];
    _udp_send_udp_data__out[179] = _udp_send_data_type_conversion4__out[38];
    _udp_send_udp_data__out[180] = _udp_send_data_type_conversion4__out[39];
    _udp_send_udp_data__out[181] = _udp_send_data_type_conversion4__out[40];
    _udp_send_udp_data__out[182] = _udp_send_data_type_conversion4__out[41];
    _udp_send_udp_data__out[183] = _udp_send_data_type_conversion4__out[42];
    _udp_send_udp_data__out[184] = _udp_send_data_type_conversion4__out[43];
    _udp_send_udp_data__out[185] = _udp_send_data_type_conversion4__out[44];
    _udp_send_udp_data__out[186] = _udp_send_data_type_conversion4__out[45];
    _udp_send_udp_data__out[187] = _udp_send_data_type_conversion4__out[46];
    _udp_send_udp_data__out[188] = _udp_send_data_type_conversion5__out[0];
    _udp_send_udp_data__out[189] = _udp_send_data_type_conversion5__out[1];
    _udp_send_udp_data__out[190] = _udp_send_data_type_conversion5__out[2];
    _udp_send_udp_data__out[191] = _udp_send_data_type_conversion5__out[3];
    _udp_send_udp_data__out[192] = _udp_send_data_type_conversion5__out[4];
    _udp_send_udp_data__out[193] = _udp_send_data_type_conversion5__out[5];
    _udp_send_udp_data__out[194] = _udp_send_data_type_conversion5__out[6];
    _udp_send_udp_data__out[195] = _udp_send_data_type_conversion5__out[7];
    _udp_send_udp_data__out[196] = _udp_send_data_type_conversion5__out[8];
    _udp_send_udp_data__out[197] = _udp_send_data_type_conversion5__out[9];
    _udp_send_udp_data__out[198] = _udp_send_data_type_conversion5__out[10];
    _udp_send_udp_data__out[199] = _udp_send_data_type_conversion5__out[11];
    _udp_send_udp_data__out[200] = _udp_send_data_type_conversion5__out[12];
    _udp_send_udp_data__out[201] = _udp_send_data_type_conversion5__out[13];
    _udp_send_udp_data__out[202] = _udp_send_data_type_conversion5__out[14];
    _udp_send_udp_data__out[203] = _udp_send_data_type_conversion5__out[15];
    _udp_send_udp_data__out[204] = _udp_send_data_type_conversion5__out[16];
    _udp_send_udp_data__out[205] = _udp_send_data_type_conversion5__out[17];
    _udp_send_udp_data__out[206] = _udp_send_data_type_conversion5__out[18];
    _udp_send_udp_data__out[207] = _udp_send_data_type_conversion5__out[19];
    _udp_send_udp_data__out[208] = _udp_send_data_type_conversion5__out[20];
    _udp_send_udp_data__out[209] = _udp_send_data_type_conversion5__out[21];
    _udp_send_udp_data__out[210] = _udp_send_data_type_conversion5__out[22];
    _udp_send_udp_data__out[211] = _udp_send_data_type_conversion5__out[23];
    _udp_send_udp_data__out[212] = _udp_send_data_type_conversion5__out[24];
    _udp_send_udp_data__out[213] = _udp_send_data_type_conversion5__out[25];
    _udp_send_udp_data__out[214] = _udp_send_data_type_conversion5__out[26];
    _udp_send_udp_data__out[215] = _udp_send_data_type_conversion5__out[27];
    _udp_send_udp_data__out[216] = _udp_send_data_type_conversion5__out[28];
    _udp_send_udp_data__out[217] = _udp_send_data_type_conversion5__out[29];
    _udp_send_udp_data__out[218] = _udp_send_data_type_conversion5__out[30];
    _udp_send_udp_data__out[219] = _udp_send_data_type_conversion5__out[31];
    _udp_send_udp_data__out[220] = _udp_send_data_type_conversion5__out[32];
    _udp_send_udp_data__out[221] = _udp_send_data_type_conversion5__out[33];
    _udp_send_udp_data__out[222] = _udp_send_data_type_conversion5__out[34];
    _udp_send_udp_data__out[223] = _udp_send_data_type_conversion5__out[35];
    _udp_send_udp_data__out[224] = _udp_send_data_type_conversion5__out[36];
    _udp_send_udp_data__out[225] = _udp_send_data_type_conversion5__out[37];
    _udp_send_udp_data__out[226] = _udp_send_data_type_conversion5__out[38];
    _udp_send_udp_data__out[227] = _udp_send_data_type_conversion5__out[39];
    _udp_send_udp_data__out[228] = _udp_send_data_type_conversion5__out[40];
    _udp_send_udp_data__out[229] = _udp_send_data_type_conversion5__out[41];
    _udp_send_udp_data__out[230] = _udp_send_data_type_conversion5__out[42];
    _udp_send_udp_data__out[231] = _udp_send_data_type_conversion5__out[43];
    _udp_send_udp_data__out[232] = _udp_send_data_type_conversion5__out[44];
    _udp_send_udp_data__out[233] = _udp_send_data_type_conversion5__out[45];
    _udp_send_udp_data__out[234] = _udp_send_data_type_conversion5__out[46];
    _udp_send_udp_data__out[235] = _udp_send_data_type_conversion6__out;
    _udp_send_udp_data__out[236] = _udp_send_data_type_conversion17__out;
    _udp_send_udp_data__out[237] = _udp_send_data_type_conversion18__out;
    _udp_send_udp_data__out[238] = _udp_send_data_type_conversion7__out[0];
    _udp_send_udp_data__out[239] = _udp_send_data_type_conversion7__out[1];
    _udp_send_udp_data__out[240] = _udp_send_data_type_conversion7__out[2];
    _udp_send_udp_data__out[241] = _udp_send_data_type_conversion7__out[3];
    _udp_send_udp_data__out[242] = _udp_send_data_type_conversion7__out[4];
    _udp_send_udp_data__out[243] = _udp_send_data_type_conversion7__out[5];
    _udp_send_udp_data__out[244] = _udp_send_data_type_conversion7__out[6];
    _udp_send_udp_data__out[245] = _udp_send_data_type_conversion7__out[7];
    _udp_send_udp_data__out[246] = _udp_send_data_type_conversion7__out[8];
    _udp_send_udp_data__out[247] = _udp_send_data_type_conversion8__out;
    _udp_send_udp_data__out[248] = _udp_send_data_type_conversion9__out;
    _udp_send_udp_data__out[249] = _udp_send_data_type_conversion10__out;
    _udp_send_udp_data__out[250] = _udp_send_data_type_conversion11__out[0];
    _udp_send_udp_data__out[251] = _udp_send_data_type_conversion11__out[1];
    _udp_send_udp_data__out[252] = _udp_send_data_type_conversion11__out[2];
    _udp_send_udp_data__out[253] = _udp_send_data_type_conversion12__out[0];
    _udp_send_udp_data__out[254] = _udp_send_data_type_conversion12__out[1];
    _udp_send_udp_data__out[255] = _udp_send_data_type_conversion12__out[2];
    _udp_send_udp_data__out[256] = _udp_send_data_type_conversion13__out[0];
    _udp_send_udp_data__out[257] = _udp_send_data_type_conversion13__out[1];
    _udp_send_udp_data__out[258] = _udp_send_data_type_conversion13__out[2];
    _udp_send_udp_data__out[259] = _udp_send_data_type_conversion19__out[0];
    _udp_send_udp_data__out[260] = _udp_send_data_type_conversion19__out[1];
    _udp_send_udp_data__out[261] = _udp_send_data_type_conversion19__out[2];
    _udp_send_udp_data__out[262] = _udp_send_data_type_conversion19__out[3];
    // Generated from the component: F3_PCC.PCC Measurements.Three phase PLL1.PID.Limit1
    if (_f3_pcc_pcc_measurements_three_phase_pll1_pid_sum5__out > 10000.0) {
        _f3_pcc_pcc_measurements_three_phase_pll1_pid_limit1__out = 10000.0;
    } else if (_f3_pcc_pcc_measurements_three_phase_pll1_pid_sum5__out < -10000.0) {
        _f3_pcc_pcc_measurements_three_phase_pll1_pid_limit1__out = -10000.0;
    } else {
        _f3_pcc_pcc_measurements_three_phase_pll1_pid_limit1__out = _f3_pcc_pcc_measurements_three_phase_pll1_pid_sum5__out;
    }
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
    // Generated from the component: F2_PCC.PCC Measurements.Three phase PLL1.PID.Sum6
    _f2_pcc_pcc_measurements_three_phase_pll1_pid_sum6__out =  - _f2_pcc_pcc_measurements_three_phase_pll1_pid_sum5__out + _f2_pcc_pcc_measurements_three_phase_pll1_pid_limit1__out;
    // Generated from the component: F2_PCC.PCC Measurements.Three phase PLL1.Rate Limiter1
    if (_f2_pcc_pcc_measurements_three_phase_pll1_rate_limiter1__first_step) {
        _f2_pcc_pcc_measurements_three_phase_pll1_rate_limiter1__out = _f2_pcc_pcc_measurements_three_phase_pll1_pid_limit1__out;
    } else {
        _f2_pcc_pcc_measurements_three_phase_pll1_rate_limiter1__out = _f2_pcc_pcc_measurements_three_phase_pll1_pid_limit1__out;
        _f2_pcc_pcc_measurements_three_phase_pll1_rate_limiter1__in_rate = _f2_pcc_pcc_measurements_three_phase_pll1_pid_limit1__out - _f2_pcc_pcc_measurements_three_phase_pll1_rate_limiter1__prev_out;
        if (_f2_pcc_pcc_measurements_three_phase_pll1_rate_limiter1__in_rate > 0.07539822368615504) {
            _f2_pcc_pcc_measurements_three_phase_pll1_rate_limiter1__out = _f2_pcc_pcc_measurements_three_phase_pll1_rate_limiter1__prev_out + (0.07539822368615504);
        }
        if (_f2_pcc_pcc_measurements_three_phase_pll1_rate_limiter1__in_rate < -0.07539822368615504) {
            _f2_pcc_pcc_measurements_three_phase_pll1_rate_limiter1__out = _f2_pcc_pcc_measurements_three_phase_pll1_rate_limiter1__prev_out + (-0.07539822368615504);
        }
    }
    // Generated from the component: F2_PCC.PCC Measurements.Three phase PLL1.integrator
    _f2_pcc_pcc_measurements_three_phase_pll1_integrator__in = _f2_pcc_pcc_measurements_three_phase_pll1_pid_limit1__out;
    _f2_pcc_pcc_measurements_three_phase_pll1_integrator__out += 0.001 * _f2_pcc_pcc_measurements_three_phase_pll1_integrator__in;
    if (_f2_pcc_pcc_measurements_three_phase_pll1_integrator__in >= 0.0) {
        if (_f2_pcc_pcc_measurements_three_phase_pll1_integrator__out >= 6.283185307179586) {
            _f2_pcc_pcc_measurements_three_phase_pll1_integrator__out -= 6.283185307179586;
        }
    }
    else {
        if (_f2_pcc_pcc_measurements_three_phase_pll1_integrator__out <= -6.283185307179586) {
            _f2_pcc_pcc_measurements_three_phase_pll1_integrator__out += 6.283185307179586;
        }
    }
    // Generated from the component: UDP Send.ETH VE Send1.Struct
    for (int i_send = 0; i_send < 263; i_send++) {
        _udp_send_eth_ve_send1_struct_.in[i_send] = (int)_udp_send_udp_data__out[i_send];
    }
    // Generated from the component: UDP Send.Signal Device Marker3
    // Generated from the component: F3_PCC.PCC Measurements.Three phase PLL1.PID.Sum6
    _f3_pcc_pcc_measurements_three_phase_pll1_pid_sum6__out =  - _f3_pcc_pcc_measurements_three_phase_pll1_pid_sum5__out + _f3_pcc_pcc_measurements_three_phase_pll1_pid_limit1__out;
    // Generated from the component: F3_PCC.PCC Measurements.Three phase PLL1.Rate Limiter1
    if (_f3_pcc_pcc_measurements_three_phase_pll1_rate_limiter1__first_step) {
        _f3_pcc_pcc_measurements_three_phase_pll1_rate_limiter1__out = _f3_pcc_pcc_measurements_three_phase_pll1_pid_limit1__out;
    } else {
        _f3_pcc_pcc_measurements_three_phase_pll1_rate_limiter1__out = _f3_pcc_pcc_measurements_three_phase_pll1_pid_limit1__out;
        _f3_pcc_pcc_measurements_three_phase_pll1_rate_limiter1__in_rate = _f3_pcc_pcc_measurements_three_phase_pll1_pid_limit1__out - _f3_pcc_pcc_measurements_three_phase_pll1_rate_limiter1__prev_out;
        if (_f3_pcc_pcc_measurements_three_phase_pll1_rate_limiter1__in_rate > 0.07539822368615504) {
            _f3_pcc_pcc_measurements_three_phase_pll1_rate_limiter1__out = _f3_pcc_pcc_measurements_three_phase_pll1_rate_limiter1__prev_out + (0.07539822368615504);
        }
        if (_f3_pcc_pcc_measurements_three_phase_pll1_rate_limiter1__in_rate < -0.07539822368615504) {
            _f3_pcc_pcc_measurements_three_phase_pll1_rate_limiter1__out = _f3_pcc_pcc_measurements_three_phase_pll1_rate_limiter1__prev_out + (-0.07539822368615504);
        }
    }
    // Generated from the component: F3_PCC.PCC Measurements.Three phase PLL1.integrator
    _f3_pcc_pcc_measurements_three_phase_pll1_integrator__in = _f3_pcc_pcc_measurements_three_phase_pll1_pid_limit1__out;
    _f3_pcc_pcc_measurements_three_phase_pll1_integrator__out += 0.001 * _f3_pcc_pcc_measurements_three_phase_pll1_integrator__in;
    if (_f3_pcc_pcc_measurements_three_phase_pll1_integrator__in >= 0.0) {
        if (_f3_pcc_pcc_measurements_three_phase_pll1_integrator__out >= 6.283185307179586) {
            _f3_pcc_pcc_measurements_three_phase_pll1_integrator__out -= 6.283185307179586;
        }
    }
    else {
        if (_f3_pcc_pcc_measurements_three_phase_pll1_integrator__out <= -6.283185307179586) {
            _f3_pcc_pcc_measurements_three_phase_pll1_integrator__out += 6.283185307179586;
        }
    }
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
    // Generated from the component: F2_PCC.PCC Measurements.Three phase PLL1.PID.Kb
    _f2_pcc_pcc_measurements_three_phase_pll1_pid_kb__out = 1.0 * _f2_pcc_pcc_measurements_three_phase_pll1_pid_sum6__out;
    // Generated from the component: F2_PCC.PCC Measurements.Three phase PLL1.LPF.LPF
    _f2_pcc_pcc_measurements_three_phase_pll1_lpf_lpf__a_sum = 0.0f;
    _f2_pcc_pcc_measurements_three_phase_pll1_lpf_lpf__b_sum = 0.0f;
    _f2_pcc_pcc_measurements_three_phase_pll1_lpf_lpf__delay_line_in = 0.0f;
    for (_f2_pcc_pcc_measurements_three_phase_pll1_lpf_lpf__i = 0; _f2_pcc_pcc_measurements_three_phase_pll1_lpf_lpf__i < 1; _f2_pcc_pcc_measurements_three_phase_pll1_lpf_lpf__i++) {
        _f2_pcc_pcc_measurements_three_phase_pll1_lpf_lpf__b_sum += _f2_pcc_pcc_measurements_three_phase_pll1_lpf_lpf__b_coeff[_f2_pcc_pcc_measurements_three_phase_pll1_lpf_lpf__i] * _f2_pcc_pcc_measurements_three_phase_pll1_lpf_lpf__states[_f2_pcc_pcc_measurements_three_phase_pll1_lpf_lpf__i + 1];
    }
    for (_f2_pcc_pcc_measurements_three_phase_pll1_lpf_lpf__i = 1; _f2_pcc_pcc_measurements_three_phase_pll1_lpf_lpf__i > 0; _f2_pcc_pcc_measurements_three_phase_pll1_lpf_lpf__i--) {
        _f2_pcc_pcc_measurements_three_phase_pll1_lpf_lpf__a_sum += _f2_pcc_pcc_measurements_three_phase_pll1_lpf_lpf__a_coeff[_f2_pcc_pcc_measurements_three_phase_pll1_lpf_lpf__i + 1] * _f2_pcc_pcc_measurements_three_phase_pll1_lpf_lpf__states[_f2_pcc_pcc_measurements_three_phase_pll1_lpf_lpf__i];
    }
    _f2_pcc_pcc_measurements_three_phase_pll1_lpf_lpf__a_sum += _f2_pcc_pcc_measurements_three_phase_pll1_lpf_lpf__states[0] * _f2_pcc_pcc_measurements_three_phase_pll1_lpf_lpf__a_coeff[1];
    _f2_pcc_pcc_measurements_three_phase_pll1_lpf_lpf__delay_line_in = _f2_pcc_pcc_measurements_three_phase_pll1_rate_limiter1__out - _f2_pcc_pcc_measurements_three_phase_pll1_lpf_lpf__a_sum;
    _f2_pcc_pcc_measurements_three_phase_pll1_lpf_lpf__out = _f2_pcc_pcc_measurements_three_phase_pll1_lpf_lpf__b_sum;
    // Generated from the component: UDP Send.ETH VE Send1.sys_out
    // Generated from the component: F3_PCC.PCC Measurements.Three phase PLL1.PID.Kb
    _f3_pcc_pcc_measurements_three_phase_pll1_pid_kb__out = 1.0 * _f3_pcc_pcc_measurements_three_phase_pll1_pid_sum6__out;
    // Generated from the component: F3_PCC.PCC Measurements.Three phase PLL1.LPF.LPF
    _f3_pcc_pcc_measurements_three_phase_pll1_lpf_lpf__a_sum = 0.0f;
    _f3_pcc_pcc_measurements_three_phase_pll1_lpf_lpf__b_sum = 0.0f;
    _f3_pcc_pcc_measurements_three_phase_pll1_lpf_lpf__delay_line_in = 0.0f;
    for (_f3_pcc_pcc_measurements_three_phase_pll1_lpf_lpf__i = 0; _f3_pcc_pcc_measurements_three_phase_pll1_lpf_lpf__i < 1; _f3_pcc_pcc_measurements_three_phase_pll1_lpf_lpf__i++) {
        _f3_pcc_pcc_measurements_three_phase_pll1_lpf_lpf__b_sum += _f3_pcc_pcc_measurements_three_phase_pll1_lpf_lpf__b_coeff[_f3_pcc_pcc_measurements_three_phase_pll1_lpf_lpf__i] * _f3_pcc_pcc_measurements_three_phase_pll1_lpf_lpf__states[_f3_pcc_pcc_measurements_three_phase_pll1_lpf_lpf__i + 1];
    }
    for (_f3_pcc_pcc_measurements_three_phase_pll1_lpf_lpf__i = 1; _f3_pcc_pcc_measurements_three_phase_pll1_lpf_lpf__i > 0; _f3_pcc_pcc_measurements_three_phase_pll1_lpf_lpf__i--) {
        _f3_pcc_pcc_measurements_three_phase_pll1_lpf_lpf__a_sum += _f3_pcc_pcc_measurements_three_phase_pll1_lpf_lpf__a_coeff[_f3_pcc_pcc_measurements_three_phase_pll1_lpf_lpf__i + 1] * _f3_pcc_pcc_measurements_three_phase_pll1_lpf_lpf__states[_f3_pcc_pcc_measurements_three_phase_pll1_lpf_lpf__i];
    }
    _f3_pcc_pcc_measurements_three_phase_pll1_lpf_lpf__a_sum += _f3_pcc_pcc_measurements_three_phase_pll1_lpf_lpf__states[0] * _f3_pcc_pcc_measurements_three_phase_pll1_lpf_lpf__a_coeff[1];
    _f3_pcc_pcc_measurements_three_phase_pll1_lpf_lpf__delay_line_in = _f3_pcc_pcc_measurements_three_phase_pll1_rate_limiter1__out - _f3_pcc_pcc_measurements_three_phase_pll1_lpf_lpf__a_sum;
    _f3_pcc_pcc_measurements_three_phase_pll1_lpf_lpf__out = _f3_pcc_pcc_measurements_three_phase_pll1_lpf_lpf__b_sum;
    // Generated from the component: F1_PCC.PCC Measurements.Three phase PLL1.PID.Sum7
    _f1_pcc_pcc_measurements_three_phase_pll1_pid_sum7__out = _f1_pcc_pcc_measurements_three_phase_pll1_pid_ki__out + _f1_pcc_pcc_measurements_three_phase_pll1_pid_kb__out;
    // Generated from the component: F2_PCC.PCC Measurements.Three phase PLL1.PID.Sum7
    _f2_pcc_pcc_measurements_three_phase_pll1_pid_sum7__out = _f2_pcc_pcc_measurements_three_phase_pll1_pid_ki__out + _f2_pcc_pcc_measurements_three_phase_pll1_pid_kb__out;
    // Generated from the component: F3_PCC.PCC Measurements.Three phase PLL1.PID.Sum7
    _f3_pcc_pcc_measurements_three_phase_pll1_pid_sum7__out = _f3_pcc_pcc_measurements_three_phase_pll1_pid_ki__out + _f3_pcc_pcc_measurements_three_phase_pll1_pid_kb__out;
    //@cmp.out.block.end
    //////////////////////////////////////////////////////////////////////////
    // Update block
    //////////////////////////////////////////////////////////////////////////
    //@cmp.update.block.start
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
    // Generated from the component: F2_PCC.PCC Measurements.Three phase PLL1.PID.Integrator1
    _f2_pcc_pcc_measurements_three_phase_pll1_pid_integrator1__state += _f2_pcc_pcc_measurements_three_phase_pll1_pid_sum7__out * 0.001;
    // Generated from the component: F2_PCC.PCC Measurements.Three phase PLL1.PID.Integrator2
    _f2_pcc_pcc_measurements_three_phase_pll1_pid_integrator2__state += _f2_pcc_pcc_measurements_three_phase_pll1_pid_gain1__out * 0.001;
    // Generated from the component: F2_PCC.PCC Measurements.Three phase PLL1.Unit Delay1
    _f2_pcc_pcc_measurements_three_phase_pll1_unit_delay1__state = _f2_pcc_pcc_measurements_three_phase_pll1_integrator__out;
    // Generated from the component: F2_PCC.SR Flip Flop1
    if ((_f2_pcc_digital_input_close__out != 0x0) && (_f2_pcc_digital_input_trip__out == 0x0))
        _f2_pcc_sr_flip_flop1__state = 1;
    else if ((_f2_pcc_digital_input_close__out == 0x0) && (_f2_pcc_digital_input_trip__out != 0x0))
        _f2_pcc_sr_flip_flop1__state = 0;
    else if ((_f2_pcc_digital_input_close__out != 0x0) && (_f2_pcc_digital_input_trip__out != 0x0))
        _f2_pcc_sr_flip_flop1__state = -1;
    // Generated from the component: F3_PCC.PCC Measurements.Three phase PLL1.PID.Integrator1
    _f3_pcc_pcc_measurements_three_phase_pll1_pid_integrator1__state += _f3_pcc_pcc_measurements_three_phase_pll1_pid_sum7__out * 0.001;
    // Generated from the component: F3_PCC.PCC Measurements.Three phase PLL1.PID.Integrator2
    _f3_pcc_pcc_measurements_three_phase_pll1_pid_integrator2__state += _f3_pcc_pcc_measurements_three_phase_pll1_pid_gain1__out * 0.001;
    // Generated from the component: F3_PCC.PCC Measurements.Three phase PLL1.Unit Delay1
    _f3_pcc_pcc_measurements_three_phase_pll1_unit_delay1__state = _f3_pcc_pcc_measurements_three_phase_pll1_integrator__out;
    // Generated from the component: F3_PCC.SR Flip Flop3
    if ((_f3_pcc_digital_input_close2__out != 0x0) && (_f3_pcc_digital_input_trip2__out == 0x0))
        _f3_pcc_sr_flip_flop3__state = 1;
    else if ((_f3_pcc_digital_input_close2__out == 0x0) && (_f3_pcc_digital_input_trip2__out != 0x0))
        _f3_pcc_sr_flip_flop3__state = 0;
    else if ((_f3_pcc_digital_input_close2__out != 0x0) && (_f3_pcc_digital_input_trip2__out != 0x0))
        _f3_pcc_sr_flip_flop3__state = -1;
    // Generated from the component: F1_PCC.PCC Measurements.RMS value1
    if( _f1_pcc_pcc_measurements_rms_value1__zc ) {
        if (_f1_pcc_pcc_measurements_bus_split1__out != _f1_pcc_pcc_measurements_rms_value1__previous_value)
            _f1_pcc_pcc_measurements_rms_value1__correction = - _f1_pcc_pcc_measurements_rms_value1__previous_value / (_f1_pcc_pcc_measurements_bus_split1__out - _f1_pcc_pcc_measurements_rms_value1__previous_value);
        if (_f1_pcc_pcc_measurements_rms_value1__correction < 0)
            _f1_pcc_pcc_measurements_rms_value1__correction = 0;
        else
            _f1_pcc_pcc_measurements_rms_value1__correction = 0;
        _f1_pcc_pcc_measurements_rms_value1__sample_cnt += _f1_pcc_pcc_measurements_rms_value1__correction - _f1_pcc_pcc_measurements_rms_value1__previous_correction;
        _f1_pcc_pcc_measurements_rms_value1__out_state = sqrtf(_f1_pcc_pcc_measurements_rms_value1__square_sum / _f1_pcc_pcc_measurements_rms_value1__sample_cnt);
        _f1_pcc_pcc_measurements_rms_value1__sample_cnt = 0;
        _f1_pcc_pcc_measurements_rms_value1__previous_correction = _f1_pcc_pcc_measurements_rms_value1__correction;
        _f1_pcc_pcc_measurements_rms_value1__square_sum = 0;
    } else if ( _f1_pcc_pcc_measurements_rms_value1__sample_cnt >= 500 ) {
        _f1_pcc_pcc_measurements_rms_value1__out_state = sqrtf(_f1_pcc_pcc_measurements_rms_value1__square_sum / _f1_pcc_pcc_measurements_rms_value1__sample_cnt);
        _f1_pcc_pcc_measurements_rms_value1__sample_cnt = 0;
        _f1_pcc_pcc_measurements_rms_value1__square_sum = 0;
    }
    _f1_pcc_pcc_measurements_rms_value1__previous_value = _f1_pcc_pcc_measurements_bus_split1__out;
    _f1_pcc_pcc_measurements_rms_value1__square_sum += _f1_pcc_pcc_measurements_bus_split1__out * _f1_pcc_pcc_measurements_bus_split1__out;
    _f1_pcc_pcc_measurements_rms_value1__sample_cnt ++;
    // Generated from the component: F2_PCC.PCC Measurements.RMS value1
    if( _f2_pcc_pcc_measurements_rms_value1__zc ) {
        if (_f2_pcc_pcc_measurements_bus_split1__out != _f2_pcc_pcc_measurements_rms_value1__previous_value)
            _f2_pcc_pcc_measurements_rms_value1__correction = - _f2_pcc_pcc_measurements_rms_value1__previous_value / (_f2_pcc_pcc_measurements_bus_split1__out - _f2_pcc_pcc_measurements_rms_value1__previous_value);
        if (_f2_pcc_pcc_measurements_rms_value1__correction < 0)
            _f2_pcc_pcc_measurements_rms_value1__correction = 0;
        else
            _f2_pcc_pcc_measurements_rms_value1__correction = 0;
        _f2_pcc_pcc_measurements_rms_value1__sample_cnt += _f2_pcc_pcc_measurements_rms_value1__correction - _f2_pcc_pcc_measurements_rms_value1__previous_correction;
        _f2_pcc_pcc_measurements_rms_value1__out_state = sqrtf(_f2_pcc_pcc_measurements_rms_value1__square_sum / _f2_pcc_pcc_measurements_rms_value1__sample_cnt);
        _f2_pcc_pcc_measurements_rms_value1__sample_cnt = 0;
        _f2_pcc_pcc_measurements_rms_value1__previous_correction = _f2_pcc_pcc_measurements_rms_value1__correction;
        _f2_pcc_pcc_measurements_rms_value1__square_sum = 0;
    } else if ( _f2_pcc_pcc_measurements_rms_value1__sample_cnt >= 500 ) {
        _f2_pcc_pcc_measurements_rms_value1__out_state = sqrtf(_f2_pcc_pcc_measurements_rms_value1__square_sum / _f2_pcc_pcc_measurements_rms_value1__sample_cnt);
        _f2_pcc_pcc_measurements_rms_value1__sample_cnt = 0;
        _f2_pcc_pcc_measurements_rms_value1__square_sum = 0;
    }
    _f2_pcc_pcc_measurements_rms_value1__previous_value = _f2_pcc_pcc_measurements_bus_split1__out;
    _f2_pcc_pcc_measurements_rms_value1__square_sum += _f2_pcc_pcc_measurements_bus_split1__out * _f2_pcc_pcc_measurements_bus_split1__out;
    _f2_pcc_pcc_measurements_rms_value1__sample_cnt ++;
    // Generated from the component: F3_PCC.PCC Measurements.RMS value1
    if( _f3_pcc_pcc_measurements_rms_value1__zc ) {
        if (_f3_pcc_pcc_measurements_bus_split1__out != _f3_pcc_pcc_measurements_rms_value1__previous_value)
            _f3_pcc_pcc_measurements_rms_value1__correction = - _f3_pcc_pcc_measurements_rms_value1__previous_value / (_f3_pcc_pcc_measurements_bus_split1__out - _f3_pcc_pcc_measurements_rms_value1__previous_value);
        if (_f3_pcc_pcc_measurements_rms_value1__correction < 0)
            _f3_pcc_pcc_measurements_rms_value1__correction = 0;
        else
            _f3_pcc_pcc_measurements_rms_value1__correction = 0;
        _f3_pcc_pcc_measurements_rms_value1__sample_cnt += _f3_pcc_pcc_measurements_rms_value1__correction - _f3_pcc_pcc_measurements_rms_value1__previous_correction;
        _f3_pcc_pcc_measurements_rms_value1__out_state = sqrtf(_f3_pcc_pcc_measurements_rms_value1__square_sum / _f3_pcc_pcc_measurements_rms_value1__sample_cnt);
        _f3_pcc_pcc_measurements_rms_value1__sample_cnt = 0;
        _f3_pcc_pcc_measurements_rms_value1__previous_correction = _f3_pcc_pcc_measurements_rms_value1__correction;
        _f3_pcc_pcc_measurements_rms_value1__square_sum = 0;
    } else if ( _f3_pcc_pcc_measurements_rms_value1__sample_cnt >= 500 ) {
        _f3_pcc_pcc_measurements_rms_value1__out_state = sqrtf(_f3_pcc_pcc_measurements_rms_value1__square_sum / _f3_pcc_pcc_measurements_rms_value1__sample_cnt);
        _f3_pcc_pcc_measurements_rms_value1__sample_cnt = 0;
        _f3_pcc_pcc_measurements_rms_value1__square_sum = 0;
    }
    _f3_pcc_pcc_measurements_rms_value1__previous_value = _f3_pcc_pcc_measurements_bus_split1__out;
    _f3_pcc_pcc_measurements_rms_value1__square_sum += _f3_pcc_pcc_measurements_bus_split1__out * _f3_pcc_pcc_measurements_bus_split1__out;
    _f3_pcc_pcc_measurements_rms_value1__sample_cnt ++;
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
    // Generated from the component: F2_PCC.PCC Measurements.Comparator1
    if (_f2_pcc_pcc_measurements_power_meter1__Pdc < _f2_pcc_pcc_measurements_constant1__out) {
        _f2_pcc_pcc_measurements_comparator1__state = 0;
    } else if (_f2_pcc_pcc_measurements_power_meter1__Pdc > _f2_pcc_pcc_measurements_constant1__out) {
        _f2_pcc_pcc_measurements_comparator1__state = 1;
    }
    // Generated from the component: F2_PCC.PCC Measurements.Comparator2
    if (_f2_pcc_pcc_measurements_power_meter1__k_factor < _f2_pcc_pcc_measurements_constant2__out) {
        _f2_pcc_pcc_measurements_comparator2__state = 0;
    } else if (_f2_pcc_pcc_measurements_power_meter1__k_factor > _f2_pcc_pcc_measurements_constant2__out) {
        _f2_pcc_pcc_measurements_comparator2__state = 1;
    }
    // Generated from the component: F3_PCC.PCC Measurements.Comparator1
    if (_f3_pcc_pcc_measurements_power_meter1__Pdc < _f3_pcc_pcc_measurements_constant1__out) {
        _f3_pcc_pcc_measurements_comparator1__state = 0;
    } else if (_f3_pcc_pcc_measurements_power_meter1__Pdc > _f3_pcc_pcc_measurements_constant1__out) {
        _f3_pcc_pcc_measurements_comparator1__state = 1;
    }
    // Generated from the component: F3_PCC.PCC Measurements.Comparator2
    if (_f3_pcc_pcc_measurements_power_meter1__k_factor < _f3_pcc_pcc_measurements_constant2__out) {
        _f3_pcc_pcc_measurements_comparator2__state = 0;
    } else if (_f3_pcc_pcc_measurements_power_meter1__k_factor > _f3_pcc_pcc_measurements_constant2__out) {
        _f3_pcc_pcc_measurements_comparator2__state = 1;
    }
    // Generated from the component: F1_PCC.PCC Measurements.Three phase PLL1.abc to dq.LPF_d
    _f1_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_d__states[0] = _f1_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_d__delay_line_in;
    // Generated from the component: F1_PCC.PCC Measurements.Three phase PLL1.abc to dq.LPF_q
    _f1_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_q__states[0] = _f1_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_q__delay_line_in;
    // Generated from the component: F2_PCC.PCC Measurements.Three phase PLL1.abc to dq.LPF_d
    _f2_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_d__states[0] = _f2_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_d__delay_line_in;
    // Generated from the component: F2_PCC.PCC Measurements.Three phase PLL1.abc to dq.LPF_q
    _f2_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_q__states[0] = _f2_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_q__delay_line_in;
    // Generated from the component: F3_PCC.PCC Measurements.Three phase PLL1.abc to dq.LPF_d
    _f3_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_d__states[0] = _f3_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_d__delay_line_in;
    // Generated from the component: F3_PCC.PCC Measurements.Three phase PLL1.abc to dq.LPF_q
    _f3_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_q__states[0] = _f3_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_q__delay_line_in;
    // Generated from the component: F1_PCC.PCC Measurements.Three phase PLL1.normalize
    // Generated from the component: F2_PCC.PCC Measurements.Three phase PLL1.normalize
    // Generated from the component: F3_PCC.PCC Measurements.Three phase PLL1.normalize
    // Generated from the component: F1_PCC.PCC Measurements.Three phase PLL1.Rate Limiter1
    _f1_pcc_pcc_measurements_three_phase_pll1_rate_limiter1__prev_out = _f1_pcc_pcc_measurements_three_phase_pll1_rate_limiter1__out;
    _f1_pcc_pcc_measurements_three_phase_pll1_rate_limiter1__first_step = 0;
    // Generated from the component: F1_PCC.PCC Measurements.Three phase PLL1.integrator
    // Generated from the component: F2_PCC.PCC Measurements.Three phase PLL1.Rate Limiter1
    _f2_pcc_pcc_measurements_three_phase_pll1_rate_limiter1__prev_out = _f2_pcc_pcc_measurements_three_phase_pll1_rate_limiter1__out;
    _f2_pcc_pcc_measurements_three_phase_pll1_rate_limiter1__first_step = 0;
    // Generated from the component: F2_PCC.PCC Measurements.Three phase PLL1.integrator
    // Generated from the component: F3_PCC.PCC Measurements.Three phase PLL1.Rate Limiter1
    _f3_pcc_pcc_measurements_three_phase_pll1_rate_limiter1__prev_out = _f3_pcc_pcc_measurements_three_phase_pll1_rate_limiter1__out;
    _f3_pcc_pcc_measurements_three_phase_pll1_rate_limiter1__first_step = 0;
    // Generated from the component: F3_PCC.PCC Measurements.Three phase PLL1.integrator
    // Generated from the component: F1_PCC.PCC Measurements.Three phase PLL1.LPF.LPF
    for (_f1_pcc_pcc_measurements_three_phase_pll1_lpf_lpf__i = 1; _f1_pcc_pcc_measurements_three_phase_pll1_lpf_lpf__i > 0; _f1_pcc_pcc_measurements_three_phase_pll1_lpf_lpf__i--) {
        _f1_pcc_pcc_measurements_three_phase_pll1_lpf_lpf__states[_f1_pcc_pcc_measurements_three_phase_pll1_lpf_lpf__i] = _f1_pcc_pcc_measurements_three_phase_pll1_lpf_lpf__states[_f1_pcc_pcc_measurements_three_phase_pll1_lpf_lpf__i - 1];
    }
    _f1_pcc_pcc_measurements_three_phase_pll1_lpf_lpf__states[0] = _f1_pcc_pcc_measurements_three_phase_pll1_lpf_lpf__delay_line_in;
    // Generated from the component: F2_PCC.PCC Measurements.Three phase PLL1.LPF.LPF
    for (_f2_pcc_pcc_measurements_three_phase_pll1_lpf_lpf__i = 1; _f2_pcc_pcc_measurements_three_phase_pll1_lpf_lpf__i > 0; _f2_pcc_pcc_measurements_three_phase_pll1_lpf_lpf__i--) {
        _f2_pcc_pcc_measurements_three_phase_pll1_lpf_lpf__states[_f2_pcc_pcc_measurements_three_phase_pll1_lpf_lpf__i] = _f2_pcc_pcc_measurements_three_phase_pll1_lpf_lpf__states[_f2_pcc_pcc_measurements_three_phase_pll1_lpf_lpf__i - 1];
    }
    _f2_pcc_pcc_measurements_three_phase_pll1_lpf_lpf__states[0] = _f2_pcc_pcc_measurements_three_phase_pll1_lpf_lpf__delay_line_in;
    // Generated from the component: UDP Send.ETH VE Send1.sys_out
    //Xil_DCacheFlushRange((X_UnInt32) &eth_msg_buff[0][0], 4 * 1052 * sizeof(X_UnInt8));
    // Generated from the component: F3_PCC.PCC Measurements.Three phase PLL1.LPF.LPF
    for (_f3_pcc_pcc_measurements_three_phase_pll1_lpf_lpf__i = 1; _f3_pcc_pcc_measurements_three_phase_pll1_lpf_lpf__i > 0; _f3_pcc_pcc_measurements_three_phase_pll1_lpf_lpf__i--) {
        _f3_pcc_pcc_measurements_three_phase_pll1_lpf_lpf__states[_f3_pcc_pcc_measurements_three_phase_pll1_lpf_lpf__i] = _f3_pcc_pcc_measurements_three_phase_pll1_lpf_lpf__states[_f3_pcc_pcc_measurements_three_phase_pll1_lpf_lpf__i - 1];
    }
    _f3_pcc_pcc_measurements_three_phase_pll1_lpf_lpf__states[0] = _f3_pcc_pcc_measurements_three_phase_pll1_lpf_lpf__delay_line_in;
    //@cmp.update.block.end
}
// ----------------------------------------------------------------------------------------  //-----------------------------------------------------------------------------------------