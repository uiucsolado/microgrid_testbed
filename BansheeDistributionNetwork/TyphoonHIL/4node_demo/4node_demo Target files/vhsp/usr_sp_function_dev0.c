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
double _ec3_va2__out;
double _xi_c3_ia2__out;
double _vdc_4_va1__out;
double _ea3_va2__out;
double _xi_b3_ia2__out;
double _xi_a3_ia2__out;
double _eb3_va2__out;
double _vdc_va1__out;
double _vc_va2__out;
double _va_va2__out;
double _xi_c_ia2__out;
double _vb_va2__out;
double _xi_a_ia2__out;
double _ia_ia2__out;
double _eb_va2__out;
double _ic_ia2__out;
double _ec_va2__out;
double _ea_va2__out;
double _xi_b_ia2__out;
double _ib_ia2__out;
double _va12_va2__out;
double _xi_b1_ia2__out;
double _xi_c1_ia2__out;
double _ic12_ia2__out;
double _ib12_ia2__out;
double _eb1_va2__out;
double _ec1_va2__out;
double _xi_a1_ia2__out;
double _vc12_va2__out;
double _vdc_2_va1__out;
double _vb12_va2__out;
double _ia12_ia2__out;
double _ea1_va2__out;
double _xi_b2_ia2__out;
double _vdc_3_va1__out;
double _xi_c2_ia2__out;
double _xi_a2_ia2__out;
double _ec2_va2__out;
double _eb2_va2__out;
double _ea2_va2__out;
double _p_ref4_regd_sys_modbus_device4_comp_coil_out__out;
double _va_rms1_cpu_trans_output__out;
double _xi_d_ref4__out;
double _pll1_pll_pid_integrator2__out;
double _p_ref3_regd_sys_modbus_device3_comp_holding_out__out[2];
double _pll1_pll_unit_delay1__out;
double _p_ref2_regd_sys_constant7__out = 10000000.0;
double _current_ref2_limit_zero__out = 100.0;
double _p_ref1_regd_sys_constant1__out = 4.0;
double _p_ref1_capacity_min__out = 0.0;
X_UnInt32 _square_wave_source20__out;
double _xi_q_ref__out;
double _s_control_mode__out;
double _constant7__out = 479.778;
double _p_ref1_regd_sys_constant2__out = 2.0;
double _p_ref4_regd_sys_constant4__out = 5.0;
double _current_ref2_one__out = 100.0;
double _pll2_pll_pid_integrator2__out;
double _xi_q_ref2__out;
double _xi_q_ref1__out;
double _p_ref3_regd_sys_constant3__out = 4.0;
double _p_ref4_capacity_min__out = -5000.0;
double _q_ref4__out;
double _p_ref4_regd_sys_constant6__out = 4.0;
double _pll2_pll_unit_delay1__out;
double _p_ref2_regd_sys_constant2__out = 2.0;
X_UnInt32 _square_wave_source2__out;
double _dq_to_abc2_o_ref__out = 0.0;
double _va_rms_cpu_trans_output__out;
double _p_ref1_regd_sys_modbus_device1_comp_holding_out__out[2];
double _pll1_pll_to_hz__out;
double _pll_pll_pid_integrator1__out;
double _p_ref4_regd_sys_constant7__out = 10000000.0;
double _constant5__out = 1.0;
double _pll2_pll_to_hz__out;
double _xi_q_ref4__out;
double _p_ref1_regd_sys_constant4__out = 5.0;
double _p_ref4_regd_sys_constant2__out = 2.0;
X_UnInt32 _square_wave_source3__out;
double _pref_in__out;
X_UnInt32 _square_wave_source18__out;
double _modbus_device6_comp_coil_out__out;
double _pll2_pll_pid_integrator1__out;
double _xi_d_ref1__out;
double _pll1_pll_pid_integrator1__out;
double _xi_d_ref2__out;
double _pll3_pll_unit_delay1__out;
double _dq_to_abc_o_ref__out = 0.0;
X_UnInt32 _square_wave_source6__out;
X_UnInt32 _square_wave_source17__out;
X_UnInt32 _square_wave_source12__out;
double _p_ref2_regd_sys_constant6__out = 4.0;
double _pll3_pll_pid_integrator1__out;
X_UnInt32 _square_wave_source1__out;
double _p_ref4_capacity_max__out = 10000.0;
double _s_control_mode1__out;
double _p_ref3_regd_sys_constant7__out = 10000000.0;
double _c3__out = 1.0;
double _c1__out = 1.0;
X_UnInt32 _square_wave_source5__out;
double _p_ref1_regd_sys_modbus_device1_comp_coil_out__out;
double _p_ref2_regd_sys_constant3__out = 4.0;
double _p_ref1_regd_sys_constant7__out = 10000000.0;
double _pll_pll_to_hz__out;
double _p_ref1_regd_sys_constant3__out = 4.0;
X_UnInt32 _square_wave_source10__out;
double _p_ref2_regd_sys_modbus_device2_comp_coil_out__out;
double _pll3_pll_pid_integrator2__out;
double _current_ref_limit_zero__out = 100.0;
X_UnInt32 _square_wave_source8__out;
double _p_ref3_regd_sys_constant1__out = 4.0;
double _q_ref1__out;
X_UnInt32 _square_wave_source7__out;
double _p_ref4_regd_sys_modbus_device4_comp_holding_out__out[2];
double _p_ref3_regd_sys_constant6__out = 4.0;
X_UnInt32 _square_wave_source16__out;
double _current_ref3_limit_zero__out = 100.0;
double _p_ref3_regd_sys_modbus_device3_comp_coil_out__out;
double _s_control_mode2__out;
double _p_ref1_capacity_max__out = 5000.0;
double _p_ref3_regd_sys_constant4__out = 5.0;
double _p_ref2_regd_sys_modbus_device2_comp_holding_out__out[2];
double _current_ref1_limit_zero__out = 100.0;
double _dq_to_abc1_o_ref__out = 0.0;
double _q_ref3__out;
double _p_ref4_regd_sys_constant3__out = 4.0;
double _constant8__out = 0.0;
double _p_ref4_regd_sys_constant1__out = 4.0;
double _modbus_device6_comp_holding_out__out;
double _xi_d_ref__out;
X_UnInt32 _square_wave_source14__out;
X_UnInt32 _square_wave_source19__out;
X_UnInt32 _square_wave_source9__out;
double _pll3_pll_to_hz__out;
double _dq_to_abc3_o_ref__out = 0.0;
double _q_ref2__out;
double _p_ref2_regd_sys_constant4__out = 5.0;
double _s_control_mode4__out;
double _c__out = 1.0;
double _p_ref1_regd_sys_constant6__out = 4.0;
double _p_ref2_regd_sys_constant1__out = 4.0;
X_UnInt32 _square_wave_source15__out;
double _current_ref1_one__out = 100.0;
double _current_ref_one__out = 100.0;
X_UnInt32 _square_wave_source13__out;
double _p_ref3_regd_sys_constant2__out = 2.0;
double _constant9__out = 0.0;
double _pll_pll_pid_integrator2__out;
double _current_ref3_one__out = 100.0;
double _p_ref3_capacity_max__out = 5000.0;
X_UnInt32 _square_wave_source4__out;
double _p_ref2_capacity_max__out = 7000.0;
double _constant6__out = 1.0;
double _c2__out = 1.0;
double _p_ref2_capacity_min__out = 500.0;
double _p_ref3_capacity_min__out = 0.0;
double _pll_pll_unit_delay1__out;
X_UnInt32 _square_wave_source11__out;
double _input_register_ip__out;
double _subsystem4_gain3__out;
double _current_abc_to_dq3_abc_to_dq1_abc_to_alpha_beta__alpha;
double _current_abc_to_dq3_abc_to_dq1_abc_to_alpha_beta__beta;
double _current_abc_to_dq3_abc_to_dq1_abc_to_alpha_beta__gamma;
double _s_meas3_power_meter1__Pdc;
double _s_meas3_power_meter1__Qdc;
double _s_meas3_power_meter1__Pac;
double _s_meas3_power_meter1__Qac;
double _s_meas3_power_meter1__apparent;
double _s_meas3_power_meter1__k_factor;
double _s_meas3_power_meter1__v_alpha;
double _s_meas3_power_meter1__v_beta;
double _s_meas3_power_meter1__i_alpha;
double _s_meas3_power_meter1__i_beta;
double _s_meas3_power_meter1__v_zero;
double _s_meas3_power_meter1__i_zero;
double _s_meas3_power_meter1__P;
double _s_meas3_power_meter1__Q;
double _s_meas3_power_meter1__filter_1_output;
double _s_meas3_power_meter1__filter_1_outputQ;
double _s_meas3_power_meter1__filter_2_output;
double _s_meas3_power_meter1__filter_2_outputQ;
double _pll3_pll_abc_to_dq_abc_to_alpha_beta__alpha;
double _pll3_pll_abc_to_dq_abc_to_alpha_beta__beta;
double _pll3_pll_abc_to_dq_abc_to_alpha_beta__gamma;
double _subsystem1_gain3__out;
double _pll_pll_abc_to_dq_abc_to_alpha_beta__alpha;
double _pll_pll_abc_to_dq_abc_to_alpha_beta__beta;
double _pll_pll_abc_to_dq_abc_to_alpha_beta__gamma;
double _s_meas_power_meter1__Pdc;
double _s_meas_power_meter1__Qdc;
double _s_meas_power_meter1__Pac;
double _s_meas_power_meter1__Qac;
double _s_meas_power_meter1__apparent;
double _s_meas_power_meter1__k_factor;
double _s_meas_power_meter1__v_alpha;
double _s_meas_power_meter1__v_beta;
double _s_meas_power_meter1__i_alpha;
double _s_meas_power_meter1__i_beta;
double _s_meas_power_meter1__v_zero;
double _s_meas_power_meter1__i_zero;
double _s_meas_power_meter1__P;
double _s_meas_power_meter1__Q;
double _s_meas_power_meter1__filter_1_output;
double _s_meas_power_meter1__filter_1_outputQ;
double _s_meas_power_meter1__filter_2_output;
double _s_meas_power_meter1__filter_2_outputQ;
double _current_abc_to_dq_abc_to_dq1_abc_to_alpha_beta__alpha;
double _current_abc_to_dq_abc_to_dq1_abc_to_alpha_beta__beta;
double _current_abc_to_dq_abc_to_dq1_abc_to_alpha_beta__gamma;
double _s_meas_1_power_meter1__Pdc;
double _s_meas_1_power_meter1__Qdc;
double _s_meas_1_power_meter1__Pac;
double _s_meas_1_power_meter1__Qac;
double _s_meas_1_power_meter1__apparent;
double _s_meas_1_power_meter1__k_factor;
double _s_meas_1_power_meter1__v_alpha;
double _s_meas_1_power_meter1__v_beta;
double _s_meas_1_power_meter1__i_alpha;
double _s_meas_1_power_meter1__i_beta;
double _s_meas_1_power_meter1__v_zero;
double _s_meas_1_power_meter1__i_zero;
double _s_meas_1_power_meter1__P;
double _s_meas_1_power_meter1__Q;
double _s_meas_1_power_meter1__filter_1_output;
double _s_meas_1_power_meter1__filter_1_outputQ;
double _s_meas_1_power_meter1__filter_2_output;
double _s_meas_1_power_meter1__filter_2_outputQ;
double _current_abc_to_dq1_abc_to_dq1_abc_to_alpha_beta__alpha;
double _current_abc_to_dq1_abc_to_dq1_abc_to_alpha_beta__beta;
double _current_abc_to_dq1_abc_to_dq1_abc_to_alpha_beta__gamma;
double _subsystem2_gain3__out;
double _power_meter1__Pdc;
double _power_meter1__Qdc;
double _power_meter1__Pac;
double _power_meter1__Qac;
double _power_meter1__apparent;
double _power_meter1__k_factor;
double _power_meter1__v_alpha;
double _power_meter1__v_beta;
double _power_meter1__i_alpha;
double _power_meter1__i_beta;
double _power_meter1__v_zero;
double _power_meter1__i_zero;
double _power_meter1__P;
double _power_meter1__Q;
double _power_meter1__filter_1_output;
double _power_meter1__filter_1_outputQ;
double _power_meter1__filter_2_output;
double _power_meter1__filter_2_outputQ;
double _s_meas1_power_meter1__Pdc;
double _s_meas1_power_meter1__Qdc;
double _s_meas1_power_meter1__Pac;
double _s_meas1_power_meter1__Qac;
double _s_meas1_power_meter1__apparent;
double _s_meas1_power_meter1__k_factor;
double _s_meas1_power_meter1__v_alpha;
double _s_meas1_power_meter1__v_beta;
double _s_meas1_power_meter1__i_alpha;
double _s_meas1_power_meter1__i_beta;
double _s_meas1_power_meter1__v_zero;
double _s_meas1_power_meter1__i_zero;
double _s_meas1_power_meter1__P;
double _s_meas1_power_meter1__Q;
double _s_meas1_power_meter1__filter_1_output;
double _s_meas1_power_meter1__filter_1_outputQ;
double _s_meas1_power_meter1__filter_2_output;
double _s_meas1_power_meter1__filter_2_outputQ;
double _pll1_pll_abc_to_dq_abc_to_alpha_beta__alpha;
double _pll1_pll_abc_to_dq_abc_to_alpha_beta__beta;
double _pll1_pll_abc_to_dq_abc_to_alpha_beta__gamma;
double _subsystem3_gain3__out;
double _current_abc_to_dq2_abc_to_dq1_abc_to_alpha_beta__alpha;
double _current_abc_to_dq2_abc_to_dq1_abc_to_alpha_beta__beta;
double _current_abc_to_dq2_abc_to_dq1_abc_to_alpha_beta__gamma;
double _pll2_pll_abc_to_dq_abc_to_alpha_beta__alpha;
double _pll2_pll_abc_to_dq_abc_to_alpha_beta__beta;
double _pll2_pll_abc_to_dq_abc_to_alpha_beta__gamma;
double _s_meas2_power_meter1__Pdc;
double _s_meas2_power_meter1__Qdc;
double _s_meas2_power_meter1__Pac;
double _s_meas2_power_meter1__Qac;
double _s_meas2_power_meter1__apparent;
double _s_meas2_power_meter1__k_factor;
double _s_meas2_power_meter1__v_alpha;
double _s_meas2_power_meter1__v_beta;
double _s_meas2_power_meter1__i_alpha;
double _s_meas2_power_meter1__i_beta;
double _s_meas2_power_meter1__v_zero;
double _s_meas2_power_meter1__i_zero;
double _s_meas2_power_meter1__P;
double _s_meas2_power_meter1__Q;
double _s_meas2_power_meter1__filter_1_output;
double _s_meas2_power_meter1__filter_1_outputQ;
double _s_meas2_power_meter1__filter_2_output;
double _s_meas2_power_meter1__filter_2_outputQ;
double _p_ref3_regd_sys_bus_split2__out;
double _p_ref3_regd_sys_bus_split2__out1;
double _pll1_pll_sin__out;
float _led_19__tmp;
double _p_ref1_regd_sys_bus_join2__out[2];
double _pll2_pll_sin__out;
double _p_ref2_regd_sys_bus_join2__out[2];
float _led_2__tmp;
double _p_ref1_regd_sys_bus_split2__out;
double _p_ref1_regd_sys_bus_split2__out1;
double _pll1_2pi__out;
double _product1__out;
double _pll2_2pi__out;
double _p_ref4_regd_sys_bus_join2__out[2];
float _led_3__tmp;
float _led_20__tmp;
double _bus_split5__out;
double _pll3_pll_sin__out;
float _led_6__tmp;
float _led_14__tmp;
float _led_18__tmp;
float _led_1__tmp;
double _p_ref4_sum4__out;
double _p_ref4_sum8__out;
float _led_5__tmp;
double _pll_2pi__out;
float _led_10__tmp;
float _led_8__tmp;
float _led_7__tmp;
double _p_ref4_regd_sys_bus_split2__out;
double _p_ref4_regd_sys_bus_split2__out1;
double _p_ref3_regd_sys_bus_join1__out[2];
float _led_11__tmp;
double _p_ref1_sum8__out;
double _p_ref1_sum4__out;
double _p_ref2_regd_sys_bus_split2__out;
double _p_ref2_regd_sys_bus_split2__out1;
double _p_ref4_regd_sys_bus_join1__out[2];
float _led_13__tmp;
float _led_12__tmp;
float _led_9__tmp;
double _pll3_2pi__out;
double _p_ref1_regd_sys_bus_join1__out[2];
double _p_ref2_regd_sys_bus_join1__out[2];
float _led_17__tmp;
float _led_15__tmp;
double _p_ref3_regd_sys_bus_join2__out[2];
float _led_4__tmp;
double _product2__out;
double _p_ref2_sum8__out;
double _p_ref2_sum4__out;
double _p_ref3_sum4__out;
double _p_ref3_sum8__out;
double _pll_pll_sin__out;
float _led_16__tmp;
double _current_abc_to_dq3_abc_to_dq1_alpha_beta_to_dq__d;
double _current_abc_to_dq3_abc_to_dq1_alpha_beta_to_dq__q;
double _current_abc_to_dq3_abc_to_dq1_alpha_beta_to_dq__k1;
double _current_abc_to_dq3_abc_to_dq1_alpha_beta_to_dq__k2;
double _pll3_pll_abc_to_dq_alpha_beta_to_dq__d;
double _pll3_pll_abc_to_dq_alpha_beta_to_dq__q;
double _pll3_pll_abc_to_dq_alpha_beta_to_dq__k1;
double _pll3_pll_abc_to_dq_alpha_beta_to_dq__k2;
double _pll_pll_abc_to_dq_alpha_beta_to_dq__d;
double _pll_pll_abc_to_dq_alpha_beta_to_dq__q;
double _pll_pll_abc_to_dq_alpha_beta_to_dq__k1;
double _pll_pll_abc_to_dq_alpha_beta_to_dq__k2;
double _current_abc_to_dq_abc_to_dq1_alpha_beta_to_dq__d;
double _current_abc_to_dq_abc_to_dq1_alpha_beta_to_dq__q;
double _current_abc_to_dq_abc_to_dq1_alpha_beta_to_dq__k1;
double _current_abc_to_dq_abc_to_dq1_alpha_beta_to_dq__k2;
double _trigonometric_function2__out;
double _bus_join5__out[2];
double _current_abc_to_dq1_abc_to_dq1_alpha_beta_to_dq__d;
double _current_abc_to_dq1_abc_to_dq1_alpha_beta_to_dq__q;
double _current_abc_to_dq1_abc_to_dq1_alpha_beta_to_dq__k1;
double _current_abc_to_dq1_abc_to_dq1_alpha_beta_to_dq__k2;
double _trigonometric_function1__out;
double _pll1_pll_abc_to_dq_alpha_beta_to_dq__d;
double _pll1_pll_abc_to_dq_alpha_beta_to_dq__q;
double _pll1_pll_abc_to_dq_alpha_beta_to_dq__k1;
double _pll1_pll_abc_to_dq_alpha_beta_to_dq__k2;
double _current_abc_to_dq2_abc_to_dq1_alpha_beta_to_dq__d;
double _current_abc_to_dq2_abc_to_dq1_alpha_beta_to_dq__q;
double _current_abc_to_dq2_abc_to_dq1_alpha_beta_to_dq__k1;
double _current_abc_to_dq2_abc_to_dq1_alpha_beta_to_dq__k2;
double _pll2_pll_abc_to_dq_alpha_beta_to_dq__d;
double _pll2_pll_abc_to_dq_alpha_beta_to_dq__q;
double _pll2_pll_abc_to_dq_alpha_beta_to_dq__k1;
double _pll2_pll_abc_to_dq_alpha_beta_to_dq__k2;
double _sum2__out;
double _sum1__out;
X_Int32 _p_ref3_regd_sys_c_function3__temp;
double _p_ref3_regd_sys_c_function3__high;
double _p_ref3_regd_sys_c_function3__low;


double _p_ref3_regd_sys_c_function3__regD;
X_Int32 _p_ref1_regd_sys_c_function3__temp;
double _p_ref1_regd_sys_c_function3__high;
double _p_ref1_regd_sys_c_function3__low;


double _p_ref1_regd_sys_c_function3__regD;
double _p_ref4_gain1__out;
X_Int32 _p_ref4_regd_sys_c_function3__temp;
double _p_ref4_regd_sys_c_function3__high;
double _p_ref4_regd_sys_c_function3__low;


double _p_ref4_regd_sys_c_function3__regD;
double _p_ref1_gain1__out;
X_Int32 _p_ref2_regd_sys_c_function3__temp;
double _p_ref2_regd_sys_c_function3__high;
double _p_ref2_regd_sys_c_function3__low;


double _p_ref2_regd_sys_c_function3__regD;
double _p_ref2_gain1__out;
double _p_ref3_gain1__out;
double _subsystem4_gain1__out;
double _subsystem4_gain2__out;
double _pll3_pll_abc_to_dq_lpf_q__out;
double _pll3_pll_abc_to_dq_lpf_q__b_coeff[2] = {0.012566370614, 0.012566370614};
double _pll3_pll_abc_to_dq_lpf_q__a_coeff[2] = {2.012566370614, -1.987433629386};
double _pll3_pll_abc_to_dq_lpf_q__a_sum;
double _pll3_pll_abc_to_dq_lpf_q__b_sum;
double _pll3_pll_abc_to_dq_lpf_q__delay_line_in;
X_UnInt32 _pll3_pll_abc_to_dq_lpf_q__i;
double _pll3_pll_abc_to_dq_lpf_d__out;
double _pll3_pll_abc_to_dq_lpf_d__b_coeff[2] = {0.012566370614, 0.012566370614};
double _pll3_pll_abc_to_dq_lpf_d__a_coeff[2] = {2.012566370614, -1.987433629386};
double _pll3_pll_abc_to_dq_lpf_d__a_sum;
double _pll3_pll_abc_to_dq_lpf_d__b_sum;
double _pll3_pll_abc_to_dq_lpf_d__delay_line_in;
X_UnInt32 _pll3_pll_abc_to_dq_lpf_d__i;
double _pll_pll_abc_to_dq_lpf_d__out;
double _pll_pll_abc_to_dq_lpf_d__b_coeff[2] = {0.012566370614, 0.012566370614};
double _pll_pll_abc_to_dq_lpf_d__a_coeff[2] = {2.012566370614, -1.987433629386};
double _pll_pll_abc_to_dq_lpf_d__a_sum;
double _pll_pll_abc_to_dq_lpf_d__b_sum;
double _pll_pll_abc_to_dq_lpf_d__delay_line_in;
X_UnInt32 _pll_pll_abc_to_dq_lpf_d__i;
double _pll_pll_abc_to_dq_lpf_q__out;
double _pll_pll_abc_to_dq_lpf_q__b_coeff[2] = {0.012566370614, 0.012566370614};
double _pll_pll_abc_to_dq_lpf_q__a_coeff[2] = {2.012566370614, -1.987433629386};
double _pll_pll_abc_to_dq_lpf_q__a_sum;
double _pll_pll_abc_to_dq_lpf_q__b_sum;
double _pll_pll_abc_to_dq_lpf_q__delay_line_in;
X_UnInt32 _pll_pll_abc_to_dq_lpf_q__i;
double _subsystem1_gain2__out;
double _subsystem1_gain1__out;
double _subsystem2_gain2__out;
double _subsystem2_gain1__out;
double _pll1_pll_abc_to_dq_lpf_d__out;
double _pll1_pll_abc_to_dq_lpf_d__b_coeff[2] = {0.012566370614, 0.012566370614};
double _pll1_pll_abc_to_dq_lpf_d__a_coeff[2] = {2.012566370614, -1.987433629386};
double _pll1_pll_abc_to_dq_lpf_d__a_sum;
double _pll1_pll_abc_to_dq_lpf_d__b_sum;
double _pll1_pll_abc_to_dq_lpf_d__delay_line_in;
X_UnInt32 _pll1_pll_abc_to_dq_lpf_d__i;
double _pll1_pll_abc_to_dq_lpf_q__out;
double _pll1_pll_abc_to_dq_lpf_q__b_coeff[2] = {0.012566370614, 0.012566370614};
double _pll1_pll_abc_to_dq_lpf_q__a_coeff[2] = {2.012566370614, -1.987433629386};
double _pll1_pll_abc_to_dq_lpf_q__a_sum;
double _pll1_pll_abc_to_dq_lpf_q__b_sum;
double _pll1_pll_abc_to_dq_lpf_q__delay_line_in;
X_UnInt32 _pll1_pll_abc_to_dq_lpf_q__i;
double _subsystem3_gain2__out;
double _subsystem3_gain1__out;
double _pll2_pll_abc_to_dq_lpf_q__out;
double _pll2_pll_abc_to_dq_lpf_q__b_coeff[2] = {0.012566370614, 0.012566370614};
double _pll2_pll_abc_to_dq_lpf_q__a_coeff[2] = {2.012566370614, -1.987433629386};
double _pll2_pll_abc_to_dq_lpf_q__a_sum;
double _pll2_pll_abc_to_dq_lpf_q__b_sum;
double _pll2_pll_abc_to_dq_lpf_q__delay_line_in;
X_UnInt32 _pll2_pll_abc_to_dq_lpf_q__i;
double _pll2_pll_abc_to_dq_lpf_d__out;
double _pll2_pll_abc_to_dq_lpf_d__b_coeff[2] = {0.012566370614, 0.012566370614};
double _pll2_pll_abc_to_dq_lpf_d__a_coeff[2] = {2.012566370614, -1.987433629386};
double _pll2_pll_abc_to_dq_lpf_d__a_sum;
double _pll2_pll_abc_to_dq_lpf_d__b_sum;
double _pll2_pll_abc_to_dq_lpf_d__delay_line_in;
X_UnInt32 _pll2_pll_abc_to_dq_lpf_d__i;
double _p_ref3_regd_sys_product2__out;
double _p_ref1_regd_sys_product2__out;
double _p_ref4_regd_sys_product2__out;
double _p_ref2_regd_sys_product2__out;
double _subsystem4_product1__out;
double _subsystem4_product2__out;
double _squared_vt3_product2__out;
double _current_ref3_product6__out;
double _current_ref3_product4__out;
double _squared_vt3_product1__out;
double _pll3_pll_normalize__in1;
double _pll3_pll_normalize__in2;


double _pll3_pll_normalize__in2_pu;
double _pll3_pll_normalize__pk;
double _squared_vt_product1__out;
double _current_ref_product4__out;
double _pll_pll_normalize__in1;
double _pll_pll_normalize__in2;


double _pll_pll_normalize__in2_pu;
double _pll_pll_normalize__pk;
double _current_ref_product6__out;
double _squared_vt_product2__out;
double _subsystem1_product2__out;
double _subsystem1_product1__out;
double _subsystem2_product2__out;
double _subsystem2_product1__out;
double _squared_vt1_product1__out;
double _current_ref1_product4__out;
double _squared_vt1_product2__out;
double _pll1_pll_normalize__in1;
double _pll1_pll_normalize__in2;


double _pll1_pll_normalize__in2_pu;
double _pll1_pll_normalize__pk;
double _current_ref1_product6__out;
double _subsystem3_product2__out;
double _subsystem3_product1__out;
double _current_ref2_product6__out;
double _squared_vt2_product2__out;
double _pll2_pll_normalize__in1;
double _pll2_pll_normalize__in2;


double _pll2_pll_normalize__in2_pu;
double _pll2_pll_normalize__pk;
double _squared_vt2_product1__out;
double _current_ref2_product4__out;
double _p_ref3_product3__out;
double _p_ref1_product3__out;
double _p_ref4_product3__out;
double _p_ref2_product3__out;
double _subsystem4_sum5__out;
double _subsystem4_sum6__out;
double _squared_vt3_sum3__out;
double _pll3_pll_pid_kd__out;
double _pll3_pll_pid_kp__out;
double _pll3_pll_pid_ki__out;
double _pll_pll_pid_kd__out;
double _pll_pll_pid_kp__out;
double _pll_pll_pid_ki__out;
double _squared_vt_sum3__out;
double _subsystem1_sum6__out;
double _subsystem1_sum5__out;
double _subsystem2_sum6__out;
double _subsystem2_sum5__out;
double _squared_vt1_sum3__out;
double _pll1_pll_pid_ki__out;
double _pll1_pll_pid_kp__out;
double _pll1_pll_pid_kd__out;
double _subsystem3_sum6__out;
double _subsystem3_sum5__out;
double _pll2_pll_pid_kp__out;
double _pll2_pll_pid_ki__out;
double _pll2_pll_pid_kd__out;
double _squared_vt2_sum3__out;
double _p_ref3_hold_after_regulation__var;
X_Int32 _p_ref3_hold_after_regulation__regulate;


X_Int32 _p_ref3_hold_after_regulation__out;
double _p_ref3_sum7__out;
double _p_ref1_sum7__out;
double _p_ref1_hold_after_regulation__var;
X_Int32 _p_ref1_hold_after_regulation__regulate;


X_Int32 _p_ref1_hold_after_regulation__out;
double _p_ref4_hold_after_regulation__var;
X_Int32 _p_ref4_hold_after_regulation__regulate;


X_Int32 _p_ref4_hold_after_regulation__out;
double _p_ref4_sum7__out;
double _p_ref2_sum7__out;
double _p_ref2_hold_after_regulation__var;
X_Int32 _p_ref2_hold_after_regulation__regulate;


X_Int32 _p_ref2_hold_after_regulation__out;
double _subsystem4_product3__out;
double _subsystem4_product4__out;
double _current_ref3_comparator1__out;
double _pll3_pll_pid_sum8__out;
double _pll_pll_pid_sum8__out;
double _current_ref_comparator1__out;
double _subsystem1_product4__out;
double _subsystem1_product3__out;
double _subsystem2_product4__out;
double _subsystem2_product3__out;
double _current_ref1_comparator1__out;
double _pll1_pll_pid_sum8__out;
double _subsystem3_product4__out;
double _subsystem3_product3__out;
double _pll2_pll_pid_sum8__out;
double _current_ref2_comparator1__out;
double _p_ref3_limit_ramp_rate__var;
double _p_ref3_limit_ramp_rate__in;
double _p_ref3_limit_ramp_rate__initial;
X_Int32 _p_ref3_limit_ramp_rate__regulate;


double _p_ref3_limit_ramp_rate__out;
double _p_ref1_limit_ramp_rate__var;
double _p_ref1_limit_ramp_rate__in;
double _p_ref1_limit_ramp_rate__initial;
X_Int32 _p_ref1_limit_ramp_rate__regulate;


double _p_ref1_limit_ramp_rate__out;
double _p_ref4_limit_ramp_rate__var;
double _p_ref4_limit_ramp_rate__in;
double _p_ref4_limit_ramp_rate__initial;
X_Int32 _p_ref4_limit_ramp_rate__regulate;


double _p_ref4_limit_ramp_rate__out;
double _p_ref2_limit_ramp_rate__var;
double _p_ref2_limit_ramp_rate__in;
double _p_ref2_limit_ramp_rate__initial;
X_Int32 _p_ref2_limit_ramp_rate__regulate;


double _p_ref2_limit_ramp_rate__out;
double _current_ref3_signal_switch1__out;
double _pll3_pll_pid_gain1__out;
double _pll_pll_pid_gain1__out;
double _current_ref_signal_switch1__out;
double _current_ref1_signal_switch1__out;
double _pll1_pll_pid_gain1__out;
double _pll2_pll_pid_gain1__out;
double _current_ref2_signal_switch1__out;
double _current_ref2_product5__out;
double _current_ref2_product3__out;
double _current_ref_product3__out;
double _current_ref_product5__out;
double _current_ref3_product3__out;
double _current_ref3_product5__out;
double _current_ref1_product3__out;
double _current_ref1_product5__out;
double _pll3_pll_pid_sum5__out;
double _pll_pll_pid_sum5__out;
double _pll1_pll_pid_sum5__out;
double _pll2_pll_pid_sum5__out;
double _current_ref2_sum4__out;
double _current_ref2_sum3__out;
double _current_ref_sum3__out;
double _current_ref_sum4__out;
double _current_ref3_sum3__out;
double _current_ref3_sum4__out;
double _current_ref1_sum3__out;
double _current_ref1_sum4__out;
double _pll3_pll_pid_limit1__out;
double _pll_pll_pid_limit1__out;
double _pll1_pll_pid_limit1__out;
double _pll2_pll_pid_limit1__out;
double _current_ref2_product2__out;
double _current_ref2_product1__out;
double _current_ref_product1__out;
double _current_ref_product2__out;
double _current_ref3_product1__out;
double _current_ref3_product2__out;
double _current_ref1_product1__out;
double _current_ref1_product2__out;
double _pll3_pll_integrator__in;


double _pll3_pll_integrator__out;
double _pll3_pll_pid_sum6__out;
double _pll3_pll_rate_limiter1__in_rate;
double _pll_pll_pid_sum6__out;
double _pll_pll_rate_limiter1__in_rate;
double _pll_pll_integrator__in;


double _pll_pll_integrator__out;
double _pll1_pll_pid_sum6__out;
double _pll1_pll_integrator__in;


double _pll1_pll_integrator__out;
double _pll1_pll_rate_limiter1__in_rate;
double _pll2_pll_rate_limiter1__in_rate;
double _pll2_pll_integrator__in;


double _pll2_pll_integrator__out;
double _pll2_pll_pid_sum6__out;
double _current_ref2_gain2__out;
double _current_ref2_gain1__out;
double _current_ref_gain1__out;
double _current_ref_gain2__out;
double _current_ref3_gain1__out;
double _current_ref3_gain2__out;
double _current_ref1_gain1__out;
double _current_ref1_gain2__out;
double _pll3_pll_pid_kb__out;
double _pll3_pll_lpf_lpf__out;
double _pll3_pll_lpf_lpf__b_coeff[1] = {0.0009869600294464265};
double _pll3_pll_lpf_lpf__a_coeff[3] = {1.0, -1.95557788912, 0.9565648491494463};
double _pll3_pll_lpf_lpf__a_sum;
double _pll3_pll_lpf_lpf__b_sum;
double _pll3_pll_lpf_lpf__delay_line_in;
X_UnInt32 _pll3_pll_lpf_lpf__i;
double _pll_pll_pid_kb__out;
double _pll_pll_lpf_lpf__out;
double _pll_pll_lpf_lpf__b_coeff[1] = {0.0009869600294464265};
double _pll_pll_lpf_lpf__a_coeff[3] = {1.0, -1.95557788912, 0.9565648491494463};
double _pll_pll_lpf_lpf__a_sum;
double _pll_pll_lpf_lpf__b_sum;
double _pll_pll_lpf_lpf__delay_line_in;
X_UnInt32 _pll_pll_lpf_lpf__i;
double _pll1_pll_pid_kb__out;
double _pll1_pll_lpf_lpf__out;
double _pll1_pll_lpf_lpf__b_coeff[1] = {0.0009869600294464265};
double _pll1_pll_lpf_lpf__a_coeff[3] = {1.0, -1.95557788912, 0.9565648491494463};
double _pll1_pll_lpf_lpf__a_sum;
double _pll1_pll_lpf_lpf__b_sum;
double _pll1_pll_lpf_lpf__delay_line_in;
X_UnInt32 _pll1_pll_lpf_lpf__i;
double _pll2_pll_lpf_lpf__out;
double _pll2_pll_lpf_lpf__b_coeff[1] = {0.0009869600294464265};
double _pll2_pll_lpf_lpf__a_coeff[3] = {1.0, -1.95557788912, 0.9565648491494463};
double _pll2_pll_lpf_lpf__a_sum;
double _pll2_pll_lpf_lpf__b_sum;
double _pll2_pll_lpf_lpf__delay_line_in;
X_UnInt32 _pll2_pll_lpf_lpf__i;
double _pll2_pll_pid_kb__out;
double _signal_switch6__out;
double _signal_switch5__out;
double _signal_switch2__out;
double _signal_switch1__out;
double _signal_switch7__out;
double _signal_switch8__out;
double _signal_switch3__out;
double _signal_switch4__out;
double _pll3_pll_pid_sum7__out;
double _pll_pll_pid_sum7__out;
double _pll1_pll_pid_sum7__out;
double _pll2_pll_pid_sum7__out;
double _subsystem3_sum1__out;
double _subsystem3_sum2__out;
double _subsystem1_sum2__out;
double _subsystem1_sum8__out;
double _subsystem4_sum2__out;
double _subsystem4_sum1__out;
double _subsystem2_sum2__out;
double _subsystem2_sum1__out;
double _subsystem3_pid_controller1__out;
double _subsystem3_pid_controller1__pi_reg_out_int;
double _subsystem3_pid_controller2__out;
double _subsystem3_pid_controller2__pi_reg_out_int;
double _subsystem1_pid_controller2__out;
double _subsystem1_pid_controller2__pi_reg_out_int;
double _subsystem1_pid_controller3__out;
double _subsystem1_pid_controller3__pi_reg_out_int;
double _subsystem4_pid_controller2__out;
double _subsystem4_pid_controller2__pi_reg_out_int;
double _subsystem4_pid_controller1__out;
double _subsystem4_pid_controller1__pi_reg_out_int;
double _subsystem2_pid_controller2__out;
double _subsystem2_pid_controller2__pi_reg_out_int;
double _subsystem2_pid_controller1__out;
double _subsystem2_pid_controller1__pi_reg_out_int;
double _subsystem3_sum3__out;
double _subsystem3_sum7__out;
double _subsystem1_sum7__out;
double _subsystem1_sum3__out;
double _subsystem4_sum7__out;
double _subsystem4_sum3__out;
double _subsystem2_sum7__out;
double _subsystem2_sum3__out;
double _dq_to_abc2_dq_to_abc1_dq_to_alpha_beta__alpha;
double _dq_to_abc2_dq_to_abc1_dq_to_alpha_beta__beta;
double _dq_to_abc2_dq_to_abc1_dq_to_alpha_beta__k1;
double _dq_to_abc2_dq_to_abc1_dq_to_alpha_beta__k2;
double _dq_to_abc_dq_to_abc1_dq_to_alpha_beta__alpha;
double _dq_to_abc_dq_to_abc1_dq_to_alpha_beta__beta;
double _dq_to_abc_dq_to_abc1_dq_to_alpha_beta__k1;
double _dq_to_abc_dq_to_abc1_dq_to_alpha_beta__k2;
double _dq_to_abc3_dq_to_abc1_dq_to_alpha_beta__alpha;
double _dq_to_abc3_dq_to_abc1_dq_to_alpha_beta__beta;
double _dq_to_abc3_dq_to_abc1_dq_to_alpha_beta__k1;
double _dq_to_abc3_dq_to_abc1_dq_to_alpha_beta__k2;
double _dq_to_abc1_dq_to_abc1_dq_to_alpha_beta__alpha;
double _dq_to_abc1_dq_to_abc1_dq_to_alpha_beta__beta;
double _dq_to_abc1_dq_to_abc1_dq_to_alpha_beta__k1;
double _dq_to_abc1_dq_to_abc1_dq_to_alpha_beta__k2;
double _dq_to_abc2_dq_to_abc1_alpha_beta_to_abc__A;
double _dq_to_abc2_dq_to_abc1_alpha_beta_to_abc__B;
double _dq_to_abc2_dq_to_abc1_alpha_beta_to_abc__C;
double _dq_to_abc_dq_to_abc1_alpha_beta_to_abc__A;
double _dq_to_abc_dq_to_abc1_alpha_beta_to_abc__B;
double _dq_to_abc_dq_to_abc1_alpha_beta_to_abc__C;
double _dq_to_abc3_dq_to_abc1_alpha_beta_to_abc__A;
double _dq_to_abc3_dq_to_abc1_alpha_beta_to_abc__B;
double _dq_to_abc3_dq_to_abc1_alpha_beta_to_abc__C;
double _dq_to_abc1_dq_to_abc1_alpha_beta_to_abc__A;
double _dq_to_abc1_dq_to_abc1_alpha_beta_to_abc__B;
double _dq_to_abc1_dq_to_abc1_alpha_beta_to_abc__C;
double _bus_join3__out[3];
double _bus_join1__out[3];
double _bus_join4__out[3];
double _bus_join2__out[3];
double _bus_split3__out;
double _bus_split3__out1;
double _bus_split3__out2;
double _bus_split1__out;
double _bus_split1__out1;
double _bus_split1__out2;
double _bus_split4__out;
double _bus_split4__out1;
double _bus_split4__out2;
double _bus_split2__out;
double _bus_split2__out1;
double _bus_split2__out2;
X_UnInt32 _three_phase_inverter3_igbt_leg2_pwm_modulator__channels[1] = {8};
double _three_phase_inverter3_igbt_leg2_pwm_modulator__limited_in[1];
X_UnInt32 _three_phase_inverter3_igbt_leg2_pwm_modulator__update_mask;
X_UnInt32 _three_phase_inverter3_igbt_leg2_pwm_modulator__sig_dir[1];

X_UnInt32 _three_phase_inverter3_igbt_leg1_pwm_modulator__channels[1] = {0};
double _three_phase_inverter3_igbt_leg1_pwm_modulator__limited_in[1];
X_UnInt32 _three_phase_inverter3_igbt_leg1_pwm_modulator__update_mask;
X_UnInt32 _three_phase_inverter3_igbt_leg1_pwm_modulator__sig_dir[1];

X_UnInt32 _three_phase_inverter3_igbt_leg3_pwm_modulator__channels[1] = {4};
double _three_phase_inverter3_igbt_leg3_pwm_modulator__limited_in[1];
X_UnInt32 _three_phase_inverter3_igbt_leg3_pwm_modulator__update_mask;
X_UnInt32 _three_phase_inverter3_igbt_leg3_pwm_modulator__sig_dir[1];

X_UnInt32 _three_phase_inverter1_igbt_leg2_pwm_modulator__channels[1] = {9};
double _three_phase_inverter1_igbt_leg2_pwm_modulator__limited_in[1];
X_UnInt32 _three_phase_inverter1_igbt_leg2_pwm_modulator__update_mask;
X_UnInt32 _three_phase_inverter1_igbt_leg2_pwm_modulator__sig_dir[1];

X_UnInt32 _three_phase_inverter1_igbt_leg3_pwm_modulator__channels[1] = {3};
double _three_phase_inverter1_igbt_leg3_pwm_modulator__limited_in[1];
X_UnInt32 _three_phase_inverter1_igbt_leg3_pwm_modulator__update_mask;
X_UnInt32 _three_phase_inverter1_igbt_leg3_pwm_modulator__sig_dir[1];

X_UnInt32 _three_phase_inverter1_igbt_leg1_pwm_modulator__channels[1] = {5};
double _three_phase_inverter1_igbt_leg1_pwm_modulator__limited_in[1];
X_UnInt32 _three_phase_inverter1_igbt_leg1_pwm_modulator__update_mask;
X_UnInt32 _three_phase_inverter1_igbt_leg1_pwm_modulator__sig_dir[1];

X_UnInt32 _three_phase_inverter4_igbt_leg2_pwm_modulator__channels[1] = {7};
double _three_phase_inverter4_igbt_leg2_pwm_modulator__limited_in[1];
X_UnInt32 _three_phase_inverter4_igbt_leg2_pwm_modulator__update_mask;
X_UnInt32 _three_phase_inverter4_igbt_leg2_pwm_modulator__sig_dir[1];

X_UnInt32 _three_phase_inverter4_igbt_leg3_pwm_modulator__channels[1] = {6};
double _three_phase_inverter4_igbt_leg3_pwm_modulator__limited_in[1];
X_UnInt32 _three_phase_inverter4_igbt_leg3_pwm_modulator__update_mask;
X_UnInt32 _three_phase_inverter4_igbt_leg3_pwm_modulator__sig_dir[1];

X_UnInt32 _three_phase_inverter4_igbt_leg1_pwm_modulator__channels[1] = {2};
double _three_phase_inverter4_igbt_leg1_pwm_modulator__limited_in[1];
X_UnInt32 _three_phase_inverter4_igbt_leg1_pwm_modulator__update_mask;
X_UnInt32 _three_phase_inverter4_igbt_leg1_pwm_modulator__sig_dir[1];

X_UnInt32 _three_phase_inverter2_igbt_leg1_pwm_modulator__channels[1] = {1};
double _three_phase_inverter2_igbt_leg1_pwm_modulator__limited_in[1];
X_UnInt32 _three_phase_inverter2_igbt_leg1_pwm_modulator__update_mask;
X_UnInt32 _three_phase_inverter2_igbt_leg1_pwm_modulator__sig_dir[1];

X_UnInt32 _three_phase_inverter2_igbt_leg3_pwm_modulator__channels[1] = {10};
double _three_phase_inverter2_igbt_leg3_pwm_modulator__limited_in[1];
X_UnInt32 _three_phase_inverter2_igbt_leg3_pwm_modulator__update_mask;
X_UnInt32 _three_phase_inverter2_igbt_leg3_pwm_modulator__sig_dir[1];

X_UnInt32 _three_phase_inverter2_igbt_leg2_pwm_modulator__channels[1] = {11};
double _three_phase_inverter2_igbt_leg2_pwm_modulator__limited_in[1];
X_UnInt32 _three_phase_inverter2_igbt_leg2_pwm_modulator__update_mask;
X_UnInt32 _three_phase_inverter2_igbt_leg2_pwm_modulator__sig_dir[1];

//@cmp.var.end

//@cmp.svar.start
// state variables
double _pll1_pll_pid_integrator2__state;
double _pll1_pll_unit_delay1__state;
double _square_wave_source20__current_phase;
double _pll2_pll_pid_integrator2__state;
double _pll2_pll_unit_delay1__state;
double _square_wave_source2__current_phase;
double _pll_pll_pid_integrator1__state;
double _square_wave_source3__current_phase;
double _square_wave_source18__current_phase;
double _pll2_pll_pid_integrator1__state;
double _pll1_pll_pid_integrator1__state;
double _pll3_pll_unit_delay1__state;
double _square_wave_source6__current_phase;
double _square_wave_source17__current_phase;
double _square_wave_source12__current_phase;
double _pll3_pll_pid_integrator1__state;
double _square_wave_source1__current_phase;
double _square_wave_source5__current_phase;
double _square_wave_source10__current_phase;
double _pll3_pll_pid_integrator2__state;
double _square_wave_source8__current_phase;
double _square_wave_source7__current_phase;
double _square_wave_source16__current_phase;
double _square_wave_source14__current_phase;
double _square_wave_source19__current_phase;
double _square_wave_source9__current_phase;
double _square_wave_source15__current_phase;
double _square_wave_source13__current_phase;
double _pll_pll_pid_integrator2__state;
double _square_wave_source4__current_phase;
double _pll_pll_unit_delay1__state;
double _square_wave_source11__current_phase;
double _s_meas3_power_meter1__filter_1_output_k_minus_1;
double _s_meas3_power_meter1__filter_1_input_k_minus_1;
double _s_meas3_power_meter1__filter_1_output_k_minus_1Q;
double _s_meas3_power_meter1__filter_1_input_k_minus_1Q;
double _s_meas3_power_meter1__filter_2_output_k_minus_1;
double _s_meas3_power_meter1__filter_2_input_k_minus_1;
double _s_meas3_power_meter1__filter_2_output_k_minus_1Q;
double _s_meas3_power_meter1__filter_2_input_k_minus_1Q;
double _s_meas_power_meter1__filter_1_output_k_minus_1;
double _s_meas_power_meter1__filter_1_input_k_minus_1;
double _s_meas_power_meter1__filter_1_output_k_minus_1Q;
double _s_meas_power_meter1__filter_1_input_k_minus_1Q;
double _s_meas_power_meter1__filter_2_output_k_minus_1;
double _s_meas_power_meter1__filter_2_input_k_minus_1;
double _s_meas_power_meter1__filter_2_output_k_minus_1Q;
double _s_meas_power_meter1__filter_2_input_k_minus_1Q;
double _s_meas_1_power_meter1__filter_1_output_k_minus_1;
double _s_meas_1_power_meter1__filter_1_input_k_minus_1;
double _s_meas_1_power_meter1__filter_1_output_k_minus_1Q;
double _s_meas_1_power_meter1__filter_1_input_k_minus_1Q;
double _s_meas_1_power_meter1__filter_2_output_k_minus_1;
double _s_meas_1_power_meter1__filter_2_input_k_minus_1;
double _s_meas_1_power_meter1__filter_2_output_k_minus_1Q;
double _s_meas_1_power_meter1__filter_2_input_k_minus_1Q;
double _power_meter1__filter_1_output_k_minus_1;
double _power_meter1__filter_1_input_k_minus_1;
double _power_meter1__filter_1_output_k_minus_1Q;
double _power_meter1__filter_1_input_k_minus_1Q;
double _power_meter1__filter_2_output_k_minus_1;
double _power_meter1__filter_2_input_k_minus_1;
double _power_meter1__filter_2_output_k_minus_1Q;
double _power_meter1__filter_2_input_k_minus_1Q;
double _s_meas1_power_meter1__filter_1_output_k_minus_1;
double _s_meas1_power_meter1__filter_1_input_k_minus_1;
double _s_meas1_power_meter1__filter_1_output_k_minus_1Q;
double _s_meas1_power_meter1__filter_1_input_k_minus_1Q;
double _s_meas1_power_meter1__filter_2_output_k_minus_1;
double _s_meas1_power_meter1__filter_2_input_k_minus_1;
double _s_meas1_power_meter1__filter_2_output_k_minus_1Q;
double _s_meas1_power_meter1__filter_2_input_k_minus_1Q;
double _s_meas2_power_meter1__filter_1_output_k_minus_1;
double _s_meas2_power_meter1__filter_1_input_k_minus_1;
double _s_meas2_power_meter1__filter_1_output_k_minus_1Q;
double _s_meas2_power_meter1__filter_1_input_k_minus_1Q;
double _s_meas2_power_meter1__filter_2_output_k_minus_1;
double _s_meas2_power_meter1__filter_2_input_k_minus_1;
double _s_meas2_power_meter1__filter_2_output_k_minus_1Q;
double _s_meas2_power_meter1__filter_2_input_k_minus_1Q;
double _pll3_pll_abc_to_dq_lpf_q__states[1];
double _pll3_pll_abc_to_dq_lpf_d__states[1];
double _pll_pll_abc_to_dq_lpf_d__states[1];
double _pll_pll_abc_to_dq_lpf_q__states[1];
double _pll1_pll_abc_to_dq_lpf_d__states[1];
double _pll1_pll_abc_to_dq_lpf_q__states[1];
double _pll2_pll_abc_to_dq_lpf_q__states[1];
double _pll2_pll_abc_to_dq_lpf_d__states[1];
double _current_ref3_comparator1__state;
double _current_ref_comparator1__state;
double _current_ref1_comparator1__state;
double _current_ref2_comparator1__state;
double _pll3_pll_rate_limiter1__prev_out;
double _pll3_pll_rate_limiter1__out;
int _pll3_pll_rate_limiter1__first_step;
double _pll_pll_rate_limiter1__prev_out;
double _pll_pll_rate_limiter1__out;
int _pll_pll_rate_limiter1__first_step;
double _pll1_pll_rate_limiter1__prev_out;
double _pll1_pll_rate_limiter1__out;
int _pll1_pll_rate_limiter1__first_step;
double _pll2_pll_rate_limiter1__prev_out;
double _pll2_pll_rate_limiter1__out;
int _pll2_pll_rate_limiter1__first_step;
double _pll3_pll_lpf_lpf__states[2];
double _pll_pll_lpf_lpf__states[2];
double _pll1_pll_lpf_lpf__states[2];
double _pll2_pll_lpf_lpf__states[2];
double _subsystem3_pid_controller1__integrator_state;
X_UnInt32 _subsystem3_pid_controller1__av_active;
double _subsystem3_pid_controller1__filter_state;
double _subsystem3_pid_controller2__integrator_state;
X_UnInt32 _subsystem3_pid_controller2__av_active;
double _subsystem3_pid_controller2__filter_state;
double _subsystem1_pid_controller2__integrator_state;
X_UnInt32 _subsystem1_pid_controller2__av_active;
double _subsystem1_pid_controller2__filter_state;
double _subsystem1_pid_controller3__integrator_state;
X_UnInt32 _subsystem1_pid_controller3__av_active;
double _subsystem1_pid_controller3__filter_state;
double _subsystem4_pid_controller2__integrator_state;
X_UnInt32 _subsystem4_pid_controller2__av_active;
double _subsystem4_pid_controller2__filter_state;
double _subsystem4_pid_controller1__integrator_state;
X_UnInt32 _subsystem4_pid_controller1__av_active;
double _subsystem4_pid_controller1__filter_state;
double _subsystem2_pid_controller2__integrator_state;
X_UnInt32 _subsystem2_pid_controller2__av_active;
double _subsystem2_pid_controller2__filter_state;
double _subsystem2_pid_controller1__integrator_state;
X_UnInt32 _subsystem2_pid_controller1__av_active;
double _subsystem2_pid_controller1__filter_state;
//@cmp.svar.end
// generated using template: virtual_hil/custom_functions.template---------------------------------
void ReInit_user_sp_cpu_dev0() {
#if DEBUG_MODE
    printf("\n\rReInitTimer");
#endif
    //@cmp.init.block.start
    _pll1_pll_pid_integrator2__state = 0.0;
    _pll1_pll_unit_delay1__state = 0.0;
    _square_wave_source20__current_phase = 0.9;
    _pll2_pll_pid_integrator2__state = 0.0;
    _pll2_pll_unit_delay1__state = 0.0;
    _square_wave_source2__current_phase = 0.33;
    _pll_pll_pid_integrator1__state = 376.99111843;
    _square_wave_source3__current_phase = 0.66;
    _square_wave_source18__current_phase = 0.0;
    _pll2_pll_pid_integrator1__state = 376.99111843;
    _pll1_pll_pid_integrator1__state = 376.99111843;
    _pll3_pll_unit_delay1__state = 0.0;
    _square_wave_source6__current_phase = 0.5;
    _square_wave_source17__current_phase = 0.4;
    _square_wave_source12__current_phase = 0.8;
    _pll3_pll_pid_integrator1__state = 376.99111843;
    _square_wave_source1__current_phase = 0.0;
    _square_wave_source5__current_phase = 0.4;
    _square_wave_source10__current_phase = 0.9;
    _pll3_pll_pid_integrator2__state = 0.0;
    _square_wave_source8__current_phase = 0.7;
    _square_wave_source7__current_phase = 0.6;
    _square_wave_source16__current_phase = 0.1;
    _square_wave_source14__current_phase = 0.3;
    _square_wave_source19__current_phase = 0.2;
    _square_wave_source9__current_phase = 0.8;
    _square_wave_source15__current_phase = 0.7;
    _square_wave_source13__current_phase = 0.5;
    _pll_pll_pid_integrator2__state = 0.0;
    _square_wave_source4__current_phase = 0.3;
    _pll_pll_unit_delay1__state = 0.0;
    _square_wave_source11__current_phase = 0.6;
    _s_meas3_power_meter1__filter_1_output_k_minus_1 = 0.0;
    _s_meas3_power_meter1__filter_1_input_k_minus_1 = 0.0;
    _s_meas3_power_meter1__filter_1_output_k_minus_1Q = 0.0;
    _s_meas3_power_meter1__filter_1_input_k_minus_1Q = 0.0;
    _s_meas_power_meter1__filter_1_output_k_minus_1 = 0.0;
    _s_meas_power_meter1__filter_1_input_k_minus_1 = 0.0;
    _s_meas_power_meter1__filter_1_output_k_minus_1Q = 0.0;
    _s_meas_power_meter1__filter_1_input_k_minus_1Q = 0.0;
    _s_meas_1_power_meter1__filter_1_output_k_minus_1 = 0.0;
    _s_meas_1_power_meter1__filter_1_input_k_minus_1 = 0.0;
    _s_meas_1_power_meter1__filter_1_output_k_minus_1Q = 0.0;
    _s_meas_1_power_meter1__filter_1_input_k_minus_1Q = 0.0;
    _power_meter1__filter_1_output_k_minus_1 = 0.0;
    _power_meter1__filter_1_input_k_minus_1 = 0.0;
    _power_meter1__filter_1_output_k_minus_1Q = 0.0;
    _power_meter1__filter_1_input_k_minus_1Q = 0.0;
    _s_meas1_power_meter1__filter_1_output_k_minus_1 = 0.0;
    _s_meas1_power_meter1__filter_1_input_k_minus_1 = 0.0;
    _s_meas1_power_meter1__filter_1_output_k_minus_1Q = 0.0;
    _s_meas1_power_meter1__filter_1_input_k_minus_1Q = 0.0;
    _s_meas2_power_meter1__filter_1_output_k_minus_1 = 0.0;
    _s_meas2_power_meter1__filter_1_input_k_minus_1 = 0.0;
    _s_meas2_power_meter1__filter_1_output_k_minus_1Q = 0.0;
    _s_meas2_power_meter1__filter_1_input_k_minus_1Q = 0.0;
    HIL_OutAO(0x403b, 0.0f);
    HIL_OutAO(0x403c, 0.0f);
    HIL_OutAO(0x407a, 0.0f);
    HIL_OutAO(0x4062, 0.0f);
    XIo_OutFloat(0x550001e4, 0.0f);
    XIo_OutFloat(0x550001d0, 0.0f);
    HIL_OutAO(0x407b, 0.0f);
    HIL_OutAO(0x4031, 0.0f);
    HIL_OutAO(0x4032, 0.0f);
    XIo_OutFloat(0x5500019c, 0.0f);
    HIL_OutAO(0x404a, 0.0f);
    HIL_OutAO(0x407c, 0.0f);
    XIo_OutFloat(0x550001b8, 0.0f);
    XIo_OutFloat(0x550001a0, 0.0f);
    HIL_OutAO(0x4040, 0.0f);
    HIL_OutAO(0x4041, 0.0f);
    XIo_OutFloat(0x550001cc, 0.0f);
    HIL_OutAO(0x4036, 0.0f);
    HIL_OutAO(0x4037, 0.0f);
    XIo_OutFloat(0x550001e8, 0.0f);
    XIo_OutFloat(0x55000188, 0.0f);
    HIL_OutAO(0x406b, 0.0f);
    XIo_OutFloat(0x550001b4, 0.0f);
    XIo_OutFloat(0x5500018c, 0.0f);
    HIL_OutAO(0x4079, 0.0f);
    XIo_OutFloat(0x55000198, 0.0f);
    HIL_OutAO(0x4077, 0.0f);
    HIL_OutAO(0x402e, 0.0f);
    HIL_OutAO(0x4050, 0.0f);
    HIL_OutAO(0x4055, 0.0f);
    HIL_OutAO(0x4074, 0.0f);
    HIL_OutAO(0x402a, 0.0f);
    HIL_OutAO(0x4052, 0.0f);
    HIL_OutAO(0x404c, 0.0f);
    HIL_OutAO(0x4056, 0.0f);
    HIL_OutAO(0x4051, 0.0f);
    HIL_OutAO(0x402f, 0.0f);
    HIL_OutAO(0x4078, 0.0f);
    HIL_OutAO(0x404d, 0.0f);
    HIL_OutAO(0x402b, 0.0f);
    HIL_OutAO(0x4075, 0.0f);
    HIL_OutAO(0x402c, 0.0f);
    HIL_OutAO(0x404e, 0.0f);
    HIL_OutAO(0x4053, 0.0f);
    HIL_OutAO(0x4054, 0.0f);
    HIL_OutAO(0x402d, 0.0f);
    HIL_OutAO(0x404f, 0.0f);
    HIL_OutAO(0x4076, 0.0f);
    XIo_OutFloat(0x550001a4, 0.0f);
    XIo_OutFloat(0x550001bc, 0.0f);
    HIL_OutAO(0x4060, 0.0f);
    XIo_OutFloat(0x550001ec, 0.0f);
    XIo_OutFloat(0x550001dc, 0.0f);
    XIo_OutFloat(0x550001f4, 0.0f);
    XIo_OutFloat(0x550001ac, 0.0f);
    XIo_OutFloat(0x550001c4, 0.0f);
    XIo_OutFloat(0x550001d4, 0.0f);
    HIL_OutAO(0x4061, 0.0f);
    HIL_OutAO(0x4073, 0.0f);
    HIL_OutAO(0x406f, 0.0f);
    for (_pll3_pll_abc_to_dq_lpf_q__i = 0; _pll3_pll_abc_to_dq_lpf_q__i < 1; _pll3_pll_abc_to_dq_lpf_q__i++) {
        _pll3_pll_abc_to_dq_lpf_q__states[_pll3_pll_abc_to_dq_lpf_q__i] = 0.0;
    }
    for (_pll3_pll_abc_to_dq_lpf_d__i = 0; _pll3_pll_abc_to_dq_lpf_d__i < 1; _pll3_pll_abc_to_dq_lpf_d__i++) {
        _pll3_pll_abc_to_dq_lpf_d__states[_pll3_pll_abc_to_dq_lpf_d__i] = 0.0;
    }
    for (_pll_pll_abc_to_dq_lpf_d__i = 0; _pll_pll_abc_to_dq_lpf_d__i < 1; _pll_pll_abc_to_dq_lpf_d__i++) {
        _pll_pll_abc_to_dq_lpf_d__states[_pll_pll_abc_to_dq_lpf_d__i] = 0.0;
    }
    for (_pll_pll_abc_to_dq_lpf_q__i = 0; _pll_pll_abc_to_dq_lpf_q__i < 1; _pll_pll_abc_to_dq_lpf_q__i++) {
        _pll_pll_abc_to_dq_lpf_q__states[_pll_pll_abc_to_dq_lpf_q__i] = 0.0;
    }
    HIL_OutAO(0x406c, 0.0f);
    HIL_OutAO(0x4070, 0.0f);
    HIL_OutAO(0x4045, 0.0f);
    XIo_OutFloat(0x55000190, 0.0f);
    HIL_OutAO(0x4071, 0.0f);
    HIL_OutAO(0x406d, 0.0f);
    HIL_OutAO(0x4044, 0.0f);
    for (_pll1_pll_abc_to_dq_lpf_d__i = 0; _pll1_pll_abc_to_dq_lpf_d__i < 1; _pll1_pll_abc_to_dq_lpf_d__i++) {
        _pll1_pll_abc_to_dq_lpf_d__states[_pll1_pll_abc_to_dq_lpf_d__i] = 0.0;
    }
    for (_pll1_pll_abc_to_dq_lpf_q__i = 0; _pll1_pll_abc_to_dq_lpf_q__i < 1; _pll1_pll_abc_to_dq_lpf_q__i++) {
        _pll1_pll_abc_to_dq_lpf_q__states[_pll1_pll_abc_to_dq_lpf_q__i] = 0.0;
    }
    HIL_OutAO(0x406e, 0.0f);
    HIL_OutAO(0x4072, 0.0f);
    for (_pll2_pll_abc_to_dq_lpf_q__i = 0; _pll2_pll_abc_to_dq_lpf_q__i < 1; _pll2_pll_abc_to_dq_lpf_q__i++) {
        _pll2_pll_abc_to_dq_lpf_q__states[_pll2_pll_abc_to_dq_lpf_q__i] = 0.0;
    }
    for (_pll2_pll_abc_to_dq_lpf_d__i = 0; _pll2_pll_abc_to_dq_lpf_d__i < 1; _pll2_pll_abc_to_dq_lpf_d__i++) {
        _pll2_pll_abc_to_dq_lpf_d__states[_pll2_pll_abc_to_dq_lpf_d__i] = 0.0;
    }
    HIL_OutAO(0x4057, 0.0f);
    HIL_OutAO(0x404b, 0.0f);
    HIL_OutAO(0x403d, 0.0f);
    HIL_OutAO(0x4033, 0.0f);
    HIL_OutAO(0x4042, 0.0f);
    HIL_OutAO(0x4038, 0.0f);
    HIL_OutAO(0x4029, 0.0f);
    HIL_OutAO(0x4025, 0.0f);
    _pll3_pll_normalize__in1 = 0;
    _pll3_pll_normalize__in2 = 0;
    _pll3_pll_normalize__pk = 0;
    HIL_OutAO(0x4022, 0.0f);
    HIL_OutAO(0x4026, 0.0f);
    _pll_pll_normalize__in1 = 0;
    _pll_pll_normalize__in2 = 0;
    _pll_pll_normalize__pk = 0;
    HIL_OutAO(0x4023, 0.0f);
    HIL_OutAO(0x4027, 0.0f);
    _pll1_pll_normalize__in1 = 0;
    _pll1_pll_normalize__in2 = 0;
    _pll1_pll_normalize__pk = 0;
    HIL_OutAO(0x4028, 0.0f);
    _pll2_pll_normalize__in1 = 0;
    _pll2_pll_normalize__in2 = 0;
    _pll2_pll_normalize__pk = 0;
    HIL_OutAO(0x4024, 0.0f);
    HIL_OutAO(0x403e, 0.0f);
    HIL_OutAO(0x403a, 0.0f);
    HIL_OutAO(0x4034, 0.0f);
    HIL_OutAO(0x4030, 0.0f);
    HIL_OutAO(0x403f, 0.0f);
    HIL_OutAO(0x4043, 0.0f);
    HIL_OutAO(0x4039, 0.0f);
    HIL_OutAO(0x4035, 0.0f);
    _p_ref3_hold_after_regulation__var = 0;
    _p_ref1_hold_after_regulation__var = 0;
    _p_ref4_hold_after_regulation__var = 0;
    _p_ref2_hold_after_regulation__var = 0;
    _current_ref3_comparator1__state = 0.0f;
    HIL_OutAO(0x401f, 0.0f);
    HIL_OutAO(0x4016, 0.0f);
    _current_ref_comparator1__state = 0.0f;
    _current_ref1_comparator1__state = 0.0f;
    HIL_OutAO(0x4019, 0.0f);
    HIL_OutAO(0x401c, 0.0f);
    _current_ref2_comparator1__state = 0.0f;
    _p_ref3_limit_ramp_rate__var = 0;
    _p_ref1_limit_ramp_rate__var = 0;
    _p_ref4_limit_ramp_rate__var = 0;
    _p_ref2_limit_ramp_rate__var = 0;
    HIL_OutAO(0x4048, 0.0f);
    HIL_OutAO(0x401e, 0.0f);
    HIL_OutAO(0x4018, 0.0f);
    HIL_OutAO(0x4046, 0.0f);
    HIL_OutAO(0x4049, 0.0f);
    HIL_OutAO(0x4021, 0.0f);
    HIL_OutAO(0x4047, 0.0f);
    HIL_OutAO(0x401b, 0.0f);
    HIL_OutAO(0x4020, 0.0f);
    HIL_OutAO(0x4017, 0.0f);
    HIL_OutAO(0x401a, 0.0f);
    HIL_OutAO(0x401d, 0.0f);
    _pll3_pll_integrator__out = 0;
    _pll3_pll_integrator__in = 0;
    _pll3_pll_rate_limiter1__first_step = 1;
    _pll_pll_rate_limiter1__first_step = 1;
    _pll_pll_integrator__out = 0;
    _pll_pll_integrator__in = 0;
    _pll1_pll_integrator__out = 0;
    _pll1_pll_integrator__in = 0;
    _pll1_pll_rate_limiter1__first_step = 1;
    _pll2_pll_rate_limiter1__first_step = 1;
    _pll2_pll_integrator__out = 0;
    _pll2_pll_integrator__in = 0;
    for (_pll3_pll_lpf_lpf__i = 0; _pll3_pll_lpf_lpf__i < 2; _pll3_pll_lpf_lpf__i++) {
        _pll3_pll_lpf_lpf__states[_pll3_pll_lpf_lpf__i] = 381972.0223545779;
    }
    for (_pll_pll_lpf_lpf__i = 0; _pll_pll_lpf_lpf__i < 2; _pll_pll_lpf_lpf__i++) {
        _pll_pll_lpf_lpf__states[_pll_pll_lpf_lpf__i] = 381972.0223545779;
    }
    for (_pll1_pll_lpf_lpf__i = 0; _pll1_pll_lpf_lpf__i < 2; _pll1_pll_lpf_lpf__i++) {
        _pll1_pll_lpf_lpf__states[_pll1_pll_lpf_lpf__i] = 381972.0223545779;
    }
    for (_pll2_pll_lpf_lpf__i = 0; _pll2_pll_lpf_lpf__i < 2; _pll2_pll_lpf_lpf__i++) {
        _pll2_pll_lpf_lpf__states[_pll2_pll_lpf_lpf__i] = 381972.0223545779;
    }
    HIL_OutAO(0x4065, 0.0f);
    HIL_OutAO(0x4069, 0.0f);
    HIL_OutAO(0x4067, 0.0f);
    HIL_OutAO(0x4063, 0.0f);
    HIL_OutAO(0x406a, 0.0f);
    HIL_OutAO(0x4066, 0.0f);
    HIL_OutAO(0x4068, 0.0f);
    HIL_OutAO(0x4064, 0.0f);
    _subsystem3_pid_controller1__integrator_state =  0.0;
    _subsystem3_pid_controller1__filter_state =  0.0;
    _subsystem3_pid_controller2__integrator_state =  0.0;
    _subsystem3_pid_controller2__filter_state =  0.0;
    _subsystem1_pid_controller2__integrator_state =  0.0;
    _subsystem1_pid_controller2__filter_state =  0.0;
    _subsystem1_pid_controller3__integrator_state =  0.0;
    _subsystem1_pid_controller3__filter_state =  0.0;
    _subsystem4_pid_controller2__integrator_state =  0.0;
    _subsystem4_pid_controller2__filter_state =  0.0;
    _subsystem4_pid_controller1__integrator_state =  0.0;
    _subsystem4_pid_controller1__filter_state =  0.0;
    _subsystem2_pid_controller2__integrator_state =  0.0;
    _subsystem2_pid_controller2__filter_state =  0.0;
    _subsystem2_pid_controller1__integrator_state =  0.0;
    _subsystem2_pid_controller1__filter_state =  0.0;
    HIL_OutAO(0x405a, 0.0f);
    HIL_OutAO(0x405e, 0.0f);
    HIL_OutAO(0x405c, 0.0f);
    HIL_OutAO(0x4058, 0.0f);
    HIL_OutAO(0x405f, 0.0f);
    HIL_OutAO(0x405b, 0.0f);
    HIL_OutAO(0x405d, 0.0f);
    HIL_OutAO(0x4059, 0.0f);
    _three_phase_inverter3_igbt_leg2_pwm_modulator__update_mask = 256;
    HIL_OutInt32(0x2000080 + _three_phase_inverter3_igbt_leg2_pwm_modulator__channels[0], 2500);// divide by 2 is already implemented in hw
    HIL_OutInt32(0x20000c0 + _three_phase_inverter3_igbt_leg2_pwm_modulator__channels[0], 25);
    HIL_OutInt32(0x20001c0 + _three_phase_inverter3_igbt_leg2_pwm_modulator__channels[0], 0);
    HIL_OutInt32(0x2000200 + _three_phase_inverter3_igbt_leg2_pwm_modulator__channels[0], 0);
    HIL_OutInt32(0x2000240 + _three_phase_inverter3_igbt_leg2_pwm_modulator__channels[0], 0);
    HIL_OutInt32(0x2000140, _three_phase_inverter3_igbt_leg2_pwm_modulator__update_mask);
    _three_phase_inverter3_igbt_leg1_pwm_modulator__update_mask = 1;
    HIL_OutInt32(0x2000080 + _three_phase_inverter3_igbt_leg1_pwm_modulator__channels[0], 2500);// divide by 2 is already implemented in hw
    HIL_OutInt32(0x20000c0 + _three_phase_inverter3_igbt_leg1_pwm_modulator__channels[0], 25);
    HIL_OutInt32(0x20001c0 + _three_phase_inverter3_igbt_leg1_pwm_modulator__channels[0], 0);
    HIL_OutInt32(0x2000200 + _three_phase_inverter3_igbt_leg1_pwm_modulator__channels[0], 0);
    HIL_OutInt32(0x2000240 + _three_phase_inverter3_igbt_leg1_pwm_modulator__channels[0], 0);
    HIL_OutInt32(0x2000140, _three_phase_inverter3_igbt_leg1_pwm_modulator__update_mask);
    _three_phase_inverter3_igbt_leg3_pwm_modulator__update_mask = 16;
    HIL_OutInt32(0x2000080 + _three_phase_inverter3_igbt_leg3_pwm_modulator__channels[0], 2500);// divide by 2 is already implemented in hw
    HIL_OutInt32(0x20000c0 + _three_phase_inverter3_igbt_leg3_pwm_modulator__channels[0], 25);
    HIL_OutInt32(0x20001c0 + _three_phase_inverter3_igbt_leg3_pwm_modulator__channels[0], 0);
    HIL_OutInt32(0x2000200 + _three_phase_inverter3_igbt_leg3_pwm_modulator__channels[0], 0);
    HIL_OutInt32(0x2000240 + _three_phase_inverter3_igbt_leg3_pwm_modulator__channels[0], 0);
    HIL_OutInt32(0x2000140, _three_phase_inverter3_igbt_leg3_pwm_modulator__update_mask);
    _three_phase_inverter1_igbt_leg2_pwm_modulator__update_mask = 512;
    HIL_OutInt32(0x2000080 + _three_phase_inverter1_igbt_leg2_pwm_modulator__channels[0], 2500);// divide by 2 is already implemented in hw
    HIL_OutInt32(0x20000c0 + _three_phase_inverter1_igbt_leg2_pwm_modulator__channels[0], 25);
    HIL_OutInt32(0x20001c0 + _three_phase_inverter1_igbt_leg2_pwm_modulator__channels[0], 0);
    HIL_OutInt32(0x2000200 + _three_phase_inverter1_igbt_leg2_pwm_modulator__channels[0], 0);
    HIL_OutInt32(0x2000240 + _three_phase_inverter1_igbt_leg2_pwm_modulator__channels[0], 0);
    HIL_OutInt32(0x2000140, _three_phase_inverter1_igbt_leg2_pwm_modulator__update_mask);
    _three_phase_inverter1_igbt_leg3_pwm_modulator__update_mask = 8;
    HIL_OutInt32(0x2000080 + _three_phase_inverter1_igbt_leg3_pwm_modulator__channels[0], 2500);// divide by 2 is already implemented in hw
    HIL_OutInt32(0x20000c0 + _three_phase_inverter1_igbt_leg3_pwm_modulator__channels[0], 25);
    HIL_OutInt32(0x20001c0 + _three_phase_inverter1_igbt_leg3_pwm_modulator__channels[0], 0);
    HIL_OutInt32(0x2000200 + _three_phase_inverter1_igbt_leg3_pwm_modulator__channels[0], 0);
    HIL_OutInt32(0x2000240 + _three_phase_inverter1_igbt_leg3_pwm_modulator__channels[0], 0);
    HIL_OutInt32(0x2000140, _three_phase_inverter1_igbt_leg3_pwm_modulator__update_mask);
    _three_phase_inverter1_igbt_leg1_pwm_modulator__update_mask = 32;
    HIL_OutInt32(0x2000080 + _three_phase_inverter1_igbt_leg1_pwm_modulator__channels[0], 2500);// divide by 2 is already implemented in hw
    HIL_OutInt32(0x20000c0 + _three_phase_inverter1_igbt_leg1_pwm_modulator__channels[0], 25);
    HIL_OutInt32(0x20001c0 + _three_phase_inverter1_igbt_leg1_pwm_modulator__channels[0], 0);
    HIL_OutInt32(0x2000200 + _three_phase_inverter1_igbt_leg1_pwm_modulator__channels[0], 0);
    HIL_OutInt32(0x2000240 + _three_phase_inverter1_igbt_leg1_pwm_modulator__channels[0], 0);
    HIL_OutInt32(0x2000140, _three_phase_inverter1_igbt_leg1_pwm_modulator__update_mask);
    _three_phase_inverter4_igbt_leg2_pwm_modulator__update_mask = 128;
    HIL_OutInt32(0x2000080 + _three_phase_inverter4_igbt_leg2_pwm_modulator__channels[0], 2500);// divide by 2 is already implemented in hw
    HIL_OutInt32(0x20000c0 + _three_phase_inverter4_igbt_leg2_pwm_modulator__channels[0], 25);
    HIL_OutInt32(0x20001c0 + _three_phase_inverter4_igbt_leg2_pwm_modulator__channels[0], 0);
    HIL_OutInt32(0x2000200 + _three_phase_inverter4_igbt_leg2_pwm_modulator__channels[0], 0);
    HIL_OutInt32(0x2000240 + _three_phase_inverter4_igbt_leg2_pwm_modulator__channels[0], 0);
    HIL_OutInt32(0x2000140, _three_phase_inverter4_igbt_leg2_pwm_modulator__update_mask);
    _three_phase_inverter4_igbt_leg3_pwm_modulator__update_mask = 64;
    HIL_OutInt32(0x2000080 + _three_phase_inverter4_igbt_leg3_pwm_modulator__channels[0], 2500);// divide by 2 is already implemented in hw
    HIL_OutInt32(0x20000c0 + _three_phase_inverter4_igbt_leg3_pwm_modulator__channels[0], 25);
    HIL_OutInt32(0x20001c0 + _three_phase_inverter4_igbt_leg3_pwm_modulator__channels[0], 0);
    HIL_OutInt32(0x2000200 + _three_phase_inverter4_igbt_leg3_pwm_modulator__channels[0], 0);
    HIL_OutInt32(0x2000240 + _three_phase_inverter4_igbt_leg3_pwm_modulator__channels[0], 0);
    HIL_OutInt32(0x2000140, _three_phase_inverter4_igbt_leg3_pwm_modulator__update_mask);
    _three_phase_inverter4_igbt_leg1_pwm_modulator__update_mask = 4;
    HIL_OutInt32(0x2000080 + _three_phase_inverter4_igbt_leg1_pwm_modulator__channels[0], 2500);// divide by 2 is already implemented in hw
    HIL_OutInt32(0x20000c0 + _three_phase_inverter4_igbt_leg1_pwm_modulator__channels[0], 25);
    HIL_OutInt32(0x20001c0 + _three_phase_inverter4_igbt_leg1_pwm_modulator__channels[0], 0);
    HIL_OutInt32(0x2000200 + _three_phase_inverter4_igbt_leg1_pwm_modulator__channels[0], 0);
    HIL_OutInt32(0x2000240 + _three_phase_inverter4_igbt_leg1_pwm_modulator__channels[0], 0);
    HIL_OutInt32(0x2000140, _three_phase_inverter4_igbt_leg1_pwm_modulator__update_mask);
    _three_phase_inverter2_igbt_leg1_pwm_modulator__update_mask = 2;
    HIL_OutInt32(0x2000080 + _three_phase_inverter2_igbt_leg1_pwm_modulator__channels[0], 2500);// divide by 2 is already implemented in hw
    HIL_OutInt32(0x20000c0 + _three_phase_inverter2_igbt_leg1_pwm_modulator__channels[0], 25);
    HIL_OutInt32(0x20001c0 + _three_phase_inverter2_igbt_leg1_pwm_modulator__channels[0], 0);
    HIL_OutInt32(0x2000200 + _three_phase_inverter2_igbt_leg1_pwm_modulator__channels[0], 0);
    HIL_OutInt32(0x2000240 + _three_phase_inverter2_igbt_leg1_pwm_modulator__channels[0], 0);
    HIL_OutInt32(0x2000140, _three_phase_inverter2_igbt_leg1_pwm_modulator__update_mask);
    _three_phase_inverter2_igbt_leg3_pwm_modulator__update_mask = 1024;
    HIL_OutInt32(0x2000080 + _three_phase_inverter2_igbt_leg3_pwm_modulator__channels[0], 2500);// divide by 2 is already implemented in hw
    HIL_OutInt32(0x20000c0 + _three_phase_inverter2_igbt_leg3_pwm_modulator__channels[0], 25);
    HIL_OutInt32(0x20001c0 + _three_phase_inverter2_igbt_leg3_pwm_modulator__channels[0], 0);
    HIL_OutInt32(0x2000200 + _three_phase_inverter2_igbt_leg3_pwm_modulator__channels[0], 0);
    HIL_OutInt32(0x2000240 + _three_phase_inverter2_igbt_leg3_pwm_modulator__channels[0], 0);
    HIL_OutInt32(0x2000140, _three_phase_inverter2_igbt_leg3_pwm_modulator__update_mask);
    _three_phase_inverter2_igbt_leg2_pwm_modulator__update_mask = 2048;
    HIL_OutInt32(0x2000080 + _three_phase_inverter2_igbt_leg2_pwm_modulator__channels[0], 2500);// divide by 2 is already implemented in hw
    HIL_OutInt32(0x20000c0 + _three_phase_inverter2_igbt_leg2_pwm_modulator__channels[0], 25);
    HIL_OutInt32(0x20001c0 + _three_phase_inverter2_igbt_leg2_pwm_modulator__channels[0], 0);
    HIL_OutInt32(0x2000200 + _three_phase_inverter2_igbt_leg2_pwm_modulator__channels[0], 0);
    HIL_OutInt32(0x2000240 + _three_phase_inverter2_igbt_leg2_pwm_modulator__channels[0], 0);
    HIL_OutInt32(0x2000140, _three_phase_inverter2_igbt_leg2_pwm_modulator__update_mask);
    //@cmp.init.block.end
}

void ReInit_sp_scope_user_sp_cpu_dev0() {
    // initialise SP Scope buffer pointer
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
    // Generated from the component: Square Wave Source20
    if (_square_wave_source20__current_phase < 0.1) {
        _square_wave_source20__out = 1;
    } else {
        _square_wave_source20__out = 0;
    }
    // Generated from the component: Square Wave Source2
    if (_square_wave_source2__current_phase < 0.33) {
        _square_wave_source2__out = 1;
    } else {
        _square_wave_source2__out = 0;
    }
    // Generated from the component: Square Wave Source3
    if (_square_wave_source3__current_phase < 0.33) {
        _square_wave_source3__out = 1;
    } else {
        _square_wave_source3__out = 0;
    }
    // Generated from the component: Square Wave Source18
    if (_square_wave_source18__current_phase < 0.1) {
        _square_wave_source18__out = 1;
    } else {
        _square_wave_source18__out = 0;
    }
    // Generated from the component: Square Wave Source6
    if (_square_wave_source6__current_phase < 0.1) {
        _square_wave_source6__out = 1;
    } else {
        _square_wave_source6__out = 0;
    }
    // Generated from the component: Square Wave Source17
    if (_square_wave_source17__current_phase < 0.1) {
        _square_wave_source17__out = 1;
    } else {
        _square_wave_source17__out = 0;
    }
    // Generated from the component: Square Wave Source12
    if (_square_wave_source12__current_phase < 0.1) {
        _square_wave_source12__out = 1;
    } else {
        _square_wave_source12__out = 0;
    }
    // Generated from the component: Square Wave Source1
    if (_square_wave_source1__current_phase < 0.33) {
        _square_wave_source1__out = 1;
    } else {
        _square_wave_source1__out = 0;
    }
    // Generated from the component: Square Wave Source5
    if (_square_wave_source5__current_phase < 0.1) {
        _square_wave_source5__out = 1;
    } else {
        _square_wave_source5__out = 0;
    }
    // Generated from the component: Square Wave Source10
    if (_square_wave_source10__current_phase < 0.1) {
        _square_wave_source10__out = 1;
    } else {
        _square_wave_source10__out = 0;
    }
    // Generated from the component: Square Wave Source8
    if (_square_wave_source8__current_phase < 0.1) {
        _square_wave_source8__out = 1;
    } else {
        _square_wave_source8__out = 0;
    }
    // Generated from the component: Square Wave Source7
    if (_square_wave_source7__current_phase < 0.1) {
        _square_wave_source7__out = 1;
    } else {
        _square_wave_source7__out = 0;
    }
    // Generated from the component: Square Wave Source16
    if (_square_wave_source16__current_phase < 0.1) {
        _square_wave_source16__out = 1;
    } else {
        _square_wave_source16__out = 0;
    }
    // Generated from the component: Constant8
    // Generated from the component: Square Wave Source14
    if (_square_wave_source14__current_phase < 0.1) {
        _square_wave_source14__out = 1;
    } else {
        _square_wave_source14__out = 0;
    }
    // Generated from the component: Square Wave Source19
    if (_square_wave_source19__current_phase < 0.1) {
        _square_wave_source19__out = 1;
    } else {
        _square_wave_source19__out = 0;
    }
    // Generated from the component: Square Wave Source9
    if (_square_wave_source9__current_phase < 0.1) {
        _square_wave_source9__out = 1;
    } else {
        _square_wave_source9__out = 0;
    }
    // Generated from the component: Square Wave Source15
    if (_square_wave_source15__current_phase < 0.1) {
        _square_wave_source15__out = 1;
    } else {
        _square_wave_source15__out = 0;
    }
    // Generated from the component: Square Wave Source13
    if (_square_wave_source13__current_phase < 0.1) {
        _square_wave_source13__out = 1;
    } else {
        _square_wave_source13__out = 0;
    }
    // Generated from the component: Constant9
    // Generated from the component: Square Wave Source4
    if (_square_wave_source4__current_phase < 0.1) {
        _square_wave_source4__out = 1;
    } else {
        _square_wave_source4__out = 0;
    }
    // Generated from the component: Square Wave Source11
    if (_square_wave_source11__current_phase < 0.1) {
        _square_wave_source11__out = 1;
    } else {
        _square_wave_source11__out = 0;
    }
    // Generated from the component: Input Register IP
    _input_register_ip__out = XIo_InFloat(0x55000108);
    // Generated from the component: LED 19
    HIL_OutInt32(0xf0040a, _square_wave_source20__out != 0x0);
    // Generated from the component: LED 2
    HIL_OutInt32(0xf0040b, _square_wave_source2__out != 0x0);
    // Generated from the component: LED 3
    HIL_OutInt32(0xf0040d, _square_wave_source3__out != 0x0);
    // Generated from the component: LED 20
    HIL_OutInt32(0xf0040c, _square_wave_source18__out != 0x0);
    // Generated from the component: LED 6
    HIL_OutInt32(0xf00410, _square_wave_source6__out != 0x0);
    // Generated from the component: LED 14
    HIL_OutInt32(0xf00405, _square_wave_source17__out != 0x0);
    // Generated from the component: LED 18
    HIL_OutInt32(0xf00409, _square_wave_source12__out != 0x0);
    // Generated from the component: LED 1
    HIL_OutInt32(0xf00400, _square_wave_source1__out != 0x0);
    // Generated from the component: LED 5
    HIL_OutInt32(0xf0040f, _square_wave_source5__out != 0x0);
    // Generated from the component: LED 10
    HIL_OutInt32(0xf00401, _square_wave_source10__out != 0x0);
    // Generated from the component: LED 8
    HIL_OutInt32(0xf00412, _square_wave_source8__out != 0x0);
    // Generated from the component: LED 7
    HIL_OutInt32(0xf00411, _square_wave_source7__out != 0x0);
    // Generated from the component: LED 11
    HIL_OutInt32(0xf00402, _square_wave_source16__out != 0x0);
    // Generated from the component: ModBus Device6.comp_coil_in
    XIo_OutFloat(0x55000188, _constant8__out);
    // Generated from the component: LED 13
    HIL_OutInt32(0xf00404, _square_wave_source14__out != 0x0);
    // Generated from the component: LED 12
    HIL_OutInt32(0xf00403, _square_wave_source19__out != 0x0);
    // Generated from the component: LED 9
    HIL_OutInt32(0xf00413, _square_wave_source9__out != 0x0);
    // Generated from the component: LED 17
    HIL_OutInt32(0xf00408, _square_wave_source15__out != 0x0);
    // Generated from the component: LED 15
    HIL_OutInt32(0xf00406, _square_wave_source13__out != 0x0);
    // Generated from the component: ModBus Device6.comp_discrete_in
    XIo_OutFloat(0x5500018c, _constant9__out);
    // Generated from the component: LED 4
    HIL_OutInt32(0xf0040e, _square_wave_source4__out != 0x0);
    // Generated from the component: LED 16
    HIL_OutInt32(0xf00407, _square_wave_source11__out != 0x0);
    // Generated from the component: ModBus Device6.comp_reg_in
    XIo_OutFloat(0x55000198, _input_register_ip__out);
    //@cmp.out.block.end
    //////////////////////////////////////////////////////////////////////////
    // Update block
    //////////////////////////////////////////////////////////////////////////
    //@cmp.update.block.start
    // Generated from the component: Square Wave Source20
    _square_wave_source20__current_phase += 0.4 * 0.0001;
    if (_square_wave_source20__current_phase >= 1.0f) {
        _square_wave_source20__current_phase -= 1.0f;
    }
    // Generated from the component: Square Wave Source2
    _square_wave_source2__current_phase += 1.33 * 0.0001;
    if (_square_wave_source2__current_phase >= 1.0f) {
        _square_wave_source2__current_phase -= 1.0f;
    }
    // Generated from the component: Square Wave Source3
    _square_wave_source3__current_phase += 1.33 * 0.0001;
    if (_square_wave_source3__current_phase >= 1.0f) {
        _square_wave_source3__current_phase -= 1.0f;
    }
    // Generated from the component: Square Wave Source18
    _square_wave_source18__current_phase += 0.4 * 0.0001;
    if (_square_wave_source18__current_phase >= 1.0f) {
        _square_wave_source18__current_phase -= 1.0f;
    }
    // Generated from the component: Square Wave Source6
    _square_wave_source6__current_phase += 0.4 * 0.0001;
    if (_square_wave_source6__current_phase >= 1.0f) {
        _square_wave_source6__current_phase -= 1.0f;
    }
    // Generated from the component: Square Wave Source17
    _square_wave_source17__current_phase += 0.4 * 0.0001;
    if (_square_wave_source17__current_phase >= 1.0f) {
        _square_wave_source17__current_phase -= 1.0f;
    }
    // Generated from the component: Square Wave Source12
    _square_wave_source12__current_phase += 0.4 * 0.0001;
    if (_square_wave_source12__current_phase >= 1.0f) {
        _square_wave_source12__current_phase -= 1.0f;
    }
    // Generated from the component: Square Wave Source1
    _square_wave_source1__current_phase += 1.33 * 0.0001;
    if (_square_wave_source1__current_phase >= 1.0f) {
        _square_wave_source1__current_phase -= 1.0f;
    }
    // Generated from the component: Square Wave Source5
    _square_wave_source5__current_phase += 0.4 * 0.0001;
    if (_square_wave_source5__current_phase >= 1.0f) {
        _square_wave_source5__current_phase -= 1.0f;
    }
    // Generated from the component: Square Wave Source10
    _square_wave_source10__current_phase += 0.4 * 0.0001;
    if (_square_wave_source10__current_phase >= 1.0f) {
        _square_wave_source10__current_phase -= 1.0f;
    }
    // Generated from the component: Square Wave Source8
    _square_wave_source8__current_phase += 0.4 * 0.0001;
    if (_square_wave_source8__current_phase >= 1.0f) {
        _square_wave_source8__current_phase -= 1.0f;
    }
    // Generated from the component: Square Wave Source7
    _square_wave_source7__current_phase += 0.4 * 0.0001;
    if (_square_wave_source7__current_phase >= 1.0f) {
        _square_wave_source7__current_phase -= 1.0f;
    }
    // Generated from the component: Square Wave Source16
    _square_wave_source16__current_phase += 0.4 * 0.0001;
    if (_square_wave_source16__current_phase >= 1.0f) {
        _square_wave_source16__current_phase -= 1.0f;
    }
    // Generated from the component: Square Wave Source14
    _square_wave_source14__current_phase += 0.4 * 0.0001;
    if (_square_wave_source14__current_phase >= 1.0f) {
        _square_wave_source14__current_phase -= 1.0f;
    }
    // Generated from the component: Square Wave Source19
    _square_wave_source19__current_phase += 0.4 * 0.0001;
    if (_square_wave_source19__current_phase >= 1.0f) {
        _square_wave_source19__current_phase -= 1.0f;
    }
    // Generated from the component: Square Wave Source9
    _square_wave_source9__current_phase += 0.4 * 0.0001;
    if (_square_wave_source9__current_phase >= 1.0f) {
        _square_wave_source9__current_phase -= 1.0f;
    }
    // Generated from the component: Square Wave Source15
    _square_wave_source15__current_phase += 0.4 * 0.0001;
    if (_square_wave_source15__current_phase >= 1.0f) {
        _square_wave_source15__current_phase -= 1.0f;
    }
    // Generated from the component: Square Wave Source13
    _square_wave_source13__current_phase += 0.4 * 0.0001;
    if (_square_wave_source13__current_phase >= 1.0f) {
        _square_wave_source13__current_phase -= 1.0f;
    }
    // Generated from the component: Square Wave Source4
    _square_wave_source4__current_phase += 0.4 * 0.0001;
    if (_square_wave_source4__current_phase >= 1.0f) {
        _square_wave_source4__current_phase -= 1.0f;
    }
    // Generated from the component: Square Wave Source11
    _square_wave_source11__current_phase += 0.4 * 0.0001;
    if (_square_wave_source11__current_phase >= 1.0f) {
        _square_wave_source11__current_phase -= 1.0f;
    }
    // Generated from the component: ModBus Device6.comp_coil_in
    // Generated from the component: ModBus Device6.comp_discrete_in
    // Generated from the component: ModBus Device6.comp_reg_in
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
    // Generated from the component: Ec3.Va2
    _ec3_va2__out = HIL_InAO(0x14);
    // Generated from the component: Xi_c3.Ia2
    _xi_c3_ia2__out = HIL_InAO(0x2f);
    // Generated from the component: VDC_4.Va1
    _vdc_4_va1__out = HIL_InAO(0x1b);
    // Generated from the component: Ea3.Va2
    _ea3_va2__out = HIL_InAO(0x10);
    // Generated from the component: Xi_b3.Ia2
    _xi_b3_ia2__out = HIL_InAO(0x2d);
    // Generated from the component: Xi_a3.Ia2
    _xi_a3_ia2__out = HIL_InAO(0x2b);
    // Generated from the component: Eb3.Va2
    _eb3_va2__out = HIL_InAO(0x12);
    // Generated from the component: VDC.Va1
    _vdc_va1__out = HIL_InAO(0x218);
    // Generated from the component: Vc.Va2
    _vc_va2__out = HIL_InAO(0x222);
    // Generated from the component: Va.Va2
    _va_va2__out = HIL_InAO(0x21a);
    // Generated from the component: Xi_c.Ia2
    _xi_c_ia2__out = HIL_InAO(0x233);
    // Generated from the component: Vb.Va2
    _vb_va2__out = HIL_InAO(0x21e);
    // Generated from the component: Xi_a.Ia2
    _xi_a_ia2__out = HIL_InAO(0x22f);
    // Generated from the component: Ia.Ia2
    _ia_ia2__out = HIL_InAO(0x225);
    // Generated from the component: Eb.Va2
    _eb_va2__out = HIL_InAO(0x215);
    // Generated from the component: Ic.Ia2
    _ic_ia2__out = HIL_InAO(0x229);
    // Generated from the component: Ec.Va2
    _ec_va2__out = HIL_InAO(0x217);
    // Generated from the component: Ea.Va2
    _ea_va2__out = HIL_InAO(0x213);
    // Generated from the component: Xi_b.Ia2
    _xi_b_ia2__out = HIL_InAO(0x231);
    // Generated from the component: Ib.Ia2
    _ib_ia2__out = HIL_InAO(0x227);
    // Generated from the component: Va12.Va2
    _va12_va2__out = HIL_InAO(0x41a);
    // Generated from the component: Xi_b1.Ia2
    _xi_b1_ia2__out = HIL_InAO(0x431);
    // Generated from the component: Xi_c1.Ia2
    _xi_c1_ia2__out = HIL_InAO(0x433);
    // Generated from the component: Ic12.Ia2
    _ic12_ia2__out = HIL_InAO(0x429);
    // Generated from the component: Ib12.Ia2
    _ib12_ia2__out = HIL_InAO(0x427);
    // Generated from the component: Eb1.Va2
    _eb1_va2__out = HIL_InAO(0x415);
    // Generated from the component: Ec1.Va2
    _ec1_va2__out = HIL_InAO(0x417);
    // Generated from the component: Xi_a1.Ia2
    _xi_a1_ia2__out = HIL_InAO(0x42f);
    // Generated from the component: Vc12.Va2
    _vc12_va2__out = HIL_InAO(0x422);
    // Generated from the component: VDC_2.Va1
    _vdc_2_va1__out = HIL_InAO(0x418);
    // Generated from the component: Vb12.Va2
    _vb12_va2__out = HIL_InAO(0x41e);
    // Generated from the component: Ia12.Ia2
    _ia12_ia2__out = HIL_InAO(0x425);
    // Generated from the component: Ea1.Va2
    _ea1_va2__out = HIL_InAO(0x413);
    // Generated from the component: Xi_b2.Ia2
    _xi_b2_ia2__out = HIL_InAO(0x622);
    // Generated from the component: VDC_3.Va1
    _vdc_3_va1__out = HIL_InAO(0x615);
    // Generated from the component: Xi_c2.Ia2
    _xi_c2_ia2__out = HIL_InAO(0x624);
    // Generated from the component: Xi_a2.Ia2
    _xi_a2_ia2__out = HIL_InAO(0x620);
    // Generated from the component: Ec2.Va2
    _ec2_va2__out = HIL_InAO(0x614);
    // Generated from the component: Eb2.Va2
    _eb2_va2__out = HIL_InAO(0x612);
    // Generated from the component: Ea2.Va2
    _ea2_va2__out = HIL_InAO(0x610);
    // Generated from the component: P_ref4.RegD_sys.ModBus Device4.comp_coil_out
    _p_ref4_regd_sys_modbus_device4_comp_coil_out__out = XIo_InFloat(0x5500017c);
    // Generated from the component: Va_rms1.cpu_trans.Output
    _va_rms1_cpu_trans_output__out = XIo_InFloat(0x55000104);
    // Generated from the component: Xi_d_ref4
    _xi_d_ref4__out = XIo_InFloat(0x5500013c);
    // Generated from the component: PLL1.PLL.PID.Integrator2
    _pll1_pll_pid_integrator2__out = _pll1_pll_pid_integrator2__state;
    // Generated from the component: P_ref3.RegD_sys.ModBus Device3.comp_holding_out
    _p_ref3_regd_sys_modbus_device3_comp_holding_out__out[0] = XIo_InFloat(0x55000174);
    _p_ref3_regd_sys_modbus_device3_comp_holding_out__out[1] = XIo_InFloat(0x55000178);
    // Generated from the component: PLL1.PLL.Unit Delay1
    _pll1_pll_unit_delay1__out = _pll1_pll_unit_delay1__state;
    // Generated from the component: P_ref2.RegD_sys.Constant7
    // Generated from the component: Current_ref2.Limit_zero
    // Generated from the component: P_ref1.RegD_sys.Constant1
    // Generated from the component: P_ref1.capacity_min
    // Generated from the component: Xi_q_ref
    _xi_q_ref__out = XIo_InFloat(0x55000140);
    // Generated from the component: S_control_mode
    _s_control_mode__out = XIo_InFloat(0x55000120);
    // Generated from the component: Constant7
    // Generated from the component: P_ref1.RegD_sys.Constant2
    // Generated from the component: P_ref4.RegD_sys.Constant4
    // Generated from the component: Current_ref2.one
    // Generated from the component: PLL2.PLL.PID.Integrator2
    _pll2_pll_pid_integrator2__out = _pll2_pll_pid_integrator2__state;
    // Generated from the component: Xi_q_ref2
    _xi_q_ref2__out = XIo_InFloat(0x55000148);
    // Generated from the component: Xi_q_ref1
    _xi_q_ref1__out = XIo_InFloat(0x55000144);
    // Generated from the component: P_ref3.RegD_sys.Constant3
    // Generated from the component: P_ref4.capacity_min
    // Generated from the component: Q_ref4
    _q_ref4__out = XIo_InFloat(0x5500011c);
    // Generated from the component: P_ref4.RegD_sys.Constant6
    // Generated from the component: PLL2.PLL.Unit Delay1
    _pll2_pll_unit_delay1__out = _pll2_pll_unit_delay1__state;
    // Generated from the component: P_ref2.RegD_sys.Constant2
    // Generated from the component: dq to abc2.o_ref
    // Generated from the component: Va_rms.cpu_trans.Output
    _va_rms_cpu_trans_output__out = XIo_InFloat(0x55000100);
    // Generated from the component: P_ref1.RegD_sys.ModBus Device1.comp_holding_out
    _p_ref1_regd_sys_modbus_device1_comp_holding_out__out[0] = XIo_InFloat(0x5500015c);
    _p_ref1_regd_sys_modbus_device1_comp_holding_out__out[1] = XIo_InFloat(0x55000160);
    // Generated from the component: PLL1.PLL.to_Hz
    _pll1_pll_to_hz__out = 0.15915494309189535 * _pll1_pll_lpf_lpf__out;
    // Generated from the component: PLL.PLL.PID.Integrator1
    _pll_pll_pid_integrator1__out = _pll_pll_pid_integrator1__state;
    // Generated from the component: P_ref4.RegD_sys.Constant7
    // Generated from the component: Constant5
    // Generated from the component: PLL2.PLL.to_Hz
    _pll2_pll_to_hz__out = 0.15915494309189535 * _pll2_pll_lpf_lpf__out;
    // Generated from the component: Xi_q_ref4
    _xi_q_ref4__out = XIo_InFloat(0x5500014c);
    // Generated from the component: P_ref1.RegD_sys.Constant4
    // Generated from the component: P_ref4.RegD_sys.Constant2
    // Generated from the component: Pref_in
    _pref_in__out = XIo_InFloat(0x5500010c);
    // Generated from the component: ModBus Device6.comp_coil_out
    _modbus_device6_comp_coil_out__out = XIo_InFloat(0x55000150);
    // Generated from the component: PLL2.PLL.PID.Integrator1
    _pll2_pll_pid_integrator1__out = _pll2_pll_pid_integrator1__state;
    // Generated from the component: Xi_d_ref1
    _xi_d_ref1__out = XIo_InFloat(0x55000134);
    // Generated from the component: PLL1.PLL.PID.Integrator1
    _pll1_pll_pid_integrator1__out = _pll1_pll_pid_integrator1__state;
    // Generated from the component: Xi_d_ref2
    _xi_d_ref2__out = XIo_InFloat(0x55000138);
    // Generated from the component: PLL3.PLL.Unit Delay1
    _pll3_pll_unit_delay1__out = _pll3_pll_unit_delay1__state;
    // Generated from the component: dq to abc.o_ref
    // Generated from the component: P_ref2.RegD_sys.Constant6
    // Generated from the component: PLL3.PLL.PID.Integrator1
    _pll3_pll_pid_integrator1__out = _pll3_pll_pid_integrator1__state;
    // Generated from the component: P_ref4.capacity_max
    // Generated from the component: S_control_mode1
    _s_control_mode1__out = XIo_InFloat(0x55000124);
    // Generated from the component: P_ref3.RegD_sys.Constant7
    // Generated from the component: C3
    // Generated from the component: C1
    // Generated from the component: P_ref1.RegD_sys.ModBus Device1.comp_coil_out
    _p_ref1_regd_sys_modbus_device1_comp_coil_out__out = XIo_InFloat(0x55000158);
    // Generated from the component: P_ref2.RegD_sys.Constant3
    // Generated from the component: P_ref1.RegD_sys.Constant7
    // Generated from the component: PLL.PLL.to_Hz
    _pll_pll_to_hz__out = 0.15915494309189535 * _pll_pll_lpf_lpf__out;
    // Generated from the component: P_ref1.RegD_sys.Constant3
    // Generated from the component: P_ref2.RegD_sys.ModBus Device2.comp_coil_out
    _p_ref2_regd_sys_modbus_device2_comp_coil_out__out = XIo_InFloat(0x55000164);
    // Generated from the component: PLL3.PLL.PID.Integrator2
    _pll3_pll_pid_integrator2__out = _pll3_pll_pid_integrator2__state;
    // Generated from the component: Current_ref.Limit_zero
    // Generated from the component: P_ref3.RegD_sys.Constant1
    // Generated from the component: Q_ref1
    _q_ref1__out = XIo_InFloat(0x55000110);
    // Generated from the component: P_ref4.RegD_sys.ModBus Device4.comp_holding_out
    _p_ref4_regd_sys_modbus_device4_comp_holding_out__out[0] = XIo_InFloat(0x55000180);
    _p_ref4_regd_sys_modbus_device4_comp_holding_out__out[1] = XIo_InFloat(0x55000184);
    // Generated from the component: P_ref3.RegD_sys.Constant6
    // Generated from the component: Current_ref3.Limit_zero
    // Generated from the component: P_ref3.RegD_sys.ModBus Device3.comp_coil_out
    _p_ref3_regd_sys_modbus_device3_comp_coil_out__out = XIo_InFloat(0x55000170);
    // Generated from the component: S_control_mode2
    _s_control_mode2__out = XIo_InFloat(0x55000128);
    // Generated from the component: P_ref1.capacity_max
    // Generated from the component: P_ref3.RegD_sys.Constant4
    // Generated from the component: P_ref2.RegD_sys.ModBus Device2.comp_holding_out
    _p_ref2_regd_sys_modbus_device2_comp_holding_out__out[0] = XIo_InFloat(0x55000168);
    _p_ref2_regd_sys_modbus_device2_comp_holding_out__out[1] = XIo_InFloat(0x5500016c);
    // Generated from the component: Current_ref1.Limit_zero
    // Generated from the component: dq to abc1.o_ref
    // Generated from the component: Q_ref3
    _q_ref3__out = XIo_InFloat(0x55000118);
    // Generated from the component: P_ref4.RegD_sys.Constant3
    // Generated from the component: P_ref4.RegD_sys.Constant1
    // Generated from the component: ModBus Device6.comp_holding_out
    _modbus_device6_comp_holding_out__out = XIo_InFloat(0x55000154);
    // Generated from the component: Xi_d_ref
    _xi_d_ref__out = XIo_InFloat(0x55000130);
    // Generated from the component: PLL3.PLL.to_Hz
    _pll3_pll_to_hz__out = 0.15915494309189535 * _pll3_pll_lpf_lpf__out;
    // Generated from the component: dq to abc3.o_ref
    // Generated from the component: Q_ref2
    _q_ref2__out = XIo_InFloat(0x55000114);
    // Generated from the component: P_ref2.RegD_sys.Constant4
    // Generated from the component: S_control_mode4
    _s_control_mode4__out = XIo_InFloat(0x5500012c);
    // Generated from the component: C
    // Generated from the component: P_ref1.RegD_sys.Constant6
    // Generated from the component: P_ref2.RegD_sys.Constant1
    // Generated from the component: Current_ref1.one
    // Generated from the component: Current_ref.one
    // Generated from the component: P_ref3.RegD_sys.Constant2
    // Generated from the component: PLL.PLL.PID.Integrator2
    _pll_pll_pid_integrator2__out = _pll_pll_pid_integrator2__state;
    // Generated from the component: Current_ref3.one
    // Generated from the component: P_ref3.capacity_max
    // Generated from the component: P_ref2.capacity_max
    // Generated from the component: Constant6
    // Generated from the component: C2
    // Generated from the component: P_ref2.capacity_min
    // Generated from the component: P_ref3.capacity_min
    // Generated from the component: PLL.PLL.Unit Delay1
    _pll_pll_unit_delay1__out = _pll_pll_unit_delay1__state;
    // Generated from the component: Subsystem4.Gain3
    _subsystem4_gain3__out = 0.5 * _vdc_4_va1__out;
    // Generated from the component: Current_abc_to_dq3.abc to dq1.abc to alpha beta
    _current_abc_to_dq3_abc_to_dq1_abc_to_alpha_beta__alpha = (2.0 * _xi_a3_ia2__out - _xi_b3_ia2__out - _xi_c3_ia2__out) * 0.3333333333333333;
    _current_abc_to_dq3_abc_to_dq1_abc_to_alpha_beta__beta = (_xi_b3_ia2__out - _xi_c3_ia2__out) * 0.5773502691896258;
    _current_abc_to_dq3_abc_to_dq1_abc_to_alpha_beta__gamma = (_xi_a3_ia2__out + _xi_b3_ia2__out + _xi_c3_ia2__out) * 0.3333333333333333;
    // Generated from the component: S_meas3.Power Meter1
    _s_meas3_power_meter1__v_alpha = SQRT_2OVER3 * ( _ea3_va2__out - 0.5f * _eb3_va2__out - 0.5f * _ec3_va2__out);
    _s_meas3_power_meter1__v_beta = SQRT_2OVER3 * (SQRT3_OVER_2 * _eb3_va2__out - SQRT3_OVER_2 * _ec3_va2__out);
    _s_meas3_power_meter1__i_alpha = SQRT_2OVER3 * ( _xi_a3_ia2__out - 0.5f * _xi_b3_ia2__out - 0.5f * _xi_c3_ia2__out);
    _s_meas3_power_meter1__i_beta = SQRT_2OVER3 * (SQRT3_OVER_2 * _xi_b3_ia2__out - SQRT3_OVER_2 * _xi_c3_ia2__out);
    _s_meas3_power_meter1__v_zero = ONE_DIV_BY_SQRT_3 * (_ea3_va2__out + _eb3_va2__out + _ec3_va2__out);
    _s_meas3_power_meter1__i_zero = ONE_DIV_BY_SQRT_3 * (_xi_a3_ia2__out + _xi_b3_ia2__out + _xi_c3_ia2__out);
    _s_meas3_power_meter1__P = _s_meas3_power_meter1__v_alpha * _s_meas3_power_meter1__i_alpha + _s_meas3_power_meter1__v_beta * _s_meas3_power_meter1__i_beta + _s_meas3_power_meter1__v_zero * _s_meas3_power_meter1__i_zero;
    _s_meas3_power_meter1__Q = _s_meas3_power_meter1__v_beta * _s_meas3_power_meter1__i_alpha - _s_meas3_power_meter1__v_alpha * _s_meas3_power_meter1__i_beta;
    _s_meas3_power_meter1__filter_1_output = 0.003131753958361355 * (_s_meas3_power_meter1__P + _s_meas3_power_meter1__filter_1_input_k_minus_1) - (-0.9937364920832773) * _s_meas3_power_meter1__filter_1_output_k_minus_1;
    _s_meas3_power_meter1__filter_1_outputQ = 0.003131753958361355 * (_s_meas3_power_meter1__Q + _s_meas3_power_meter1__filter_1_input_k_minus_1Q) - (-0.9937364920832773) * _s_meas3_power_meter1__filter_1_output_k_minus_1Q;
    _s_meas3_power_meter1__filter_1_input_k_minus_1 = _s_meas3_power_meter1__P;
    _s_meas3_power_meter1__filter_1_output_k_minus_1 = _s_meas3_power_meter1__filter_1_output;
    _s_meas3_power_meter1__filter_1_input_k_minus_1Q = _s_meas3_power_meter1__Q;;
    _s_meas3_power_meter1__filter_1_output_k_minus_1Q = _s_meas3_power_meter1__filter_1_outputQ;
    _s_meas3_power_meter1__filter_2_output = 0.003131753958361355 * (_s_meas3_power_meter1__filter_1_output + _s_meas3_power_meter1__filter_2_input_k_minus_1) - (-0.9937364920832773) * _s_meas3_power_meter1__filter_2_output_k_minus_1;
    _s_meas3_power_meter1__filter_2_outputQ = 0.003131753958361355 * (_s_meas3_power_meter1__Q + _s_meas3_power_meter1__filter_2_input_k_minus_1Q) - (-0.9937364920832773) * _s_meas3_power_meter1__filter_2_output_k_minus_1Q;
    _s_meas3_power_meter1__filter_2_input_k_minus_1 = _s_meas3_power_meter1__filter_1_output;
    _s_meas3_power_meter1__filter_2_output_k_minus_1 = _s_meas3_power_meter1__filter_2_output;
    _s_meas3_power_meter1__filter_2_input_k_minus_1Q = _s_meas3_power_meter1__Q;
    _s_meas3_power_meter1__filter_2_output_k_minus_1Q = _s_meas3_power_meter1__filter_2_outputQ;
    _s_meas3_power_meter1__Pdc = _s_meas3_power_meter1__filter_2_output;
    _s_meas3_power_meter1__Qdc = _s_meas3_power_meter1__filter_2_outputQ;
    _s_meas3_power_meter1__apparent = sqrt(pow(_s_meas3_power_meter1__Pdc, 2) + pow(_s_meas3_power_meter1__Qdc, 2));
    if (_s_meas3_power_meter1__apparent > 0)
        _s_meas3_power_meter1__k_factor = _s_meas3_power_meter1__Pdc / _s_meas3_power_meter1__apparent;
    else
        _s_meas3_power_meter1__k_factor = 0;
    _s_meas3_power_meter1__Pac = _s_meas3_power_meter1__P;
    _s_meas3_power_meter1__Qac = _s_meas3_power_meter1__Q;
    // Generated from the component: PLL3.PLL.abc to dq.abc to alpha beta
    _pll3_pll_abc_to_dq_abc_to_alpha_beta__alpha = (2.0 * _ea3_va2__out - _eb3_va2__out - _ec3_va2__out) * 0.3333333333333333;
    _pll3_pll_abc_to_dq_abc_to_alpha_beta__beta = (_eb3_va2__out - _ec3_va2__out) * 0.5773502691896258;
    _pll3_pll_abc_to_dq_abc_to_alpha_beta__gamma = (_ea3_va2__out + _eb3_va2__out + _ec3_va2__out) * 0.3333333333333333;
    // Generated from the component: Subsystem1.Gain3
    _subsystem1_gain3__out = 0.5 * _vdc_va1__out;
    // Generated from the component: PLL.PLL.abc to dq.abc to alpha beta
    _pll_pll_abc_to_dq_abc_to_alpha_beta__alpha = (2.0 * _ea_va2__out - _eb_va2__out - _ec_va2__out) * 0.3333333333333333;
    _pll_pll_abc_to_dq_abc_to_alpha_beta__beta = (_eb_va2__out - _ec_va2__out) * 0.5773502691896258;
    _pll_pll_abc_to_dq_abc_to_alpha_beta__gamma = (_ea_va2__out + _eb_va2__out + _ec_va2__out) * 0.3333333333333333;
    // Generated from the component: S_meas.Power Meter1
    _s_meas_power_meter1__v_alpha = SQRT_2OVER3 * ( _ea_va2__out - 0.5f * _eb_va2__out - 0.5f * _ec_va2__out);
    _s_meas_power_meter1__v_beta = SQRT_2OVER3 * (SQRT3_OVER_2 * _eb_va2__out - SQRT3_OVER_2 * _ec_va2__out);
    _s_meas_power_meter1__i_alpha = SQRT_2OVER3 * ( _xi_a_ia2__out - 0.5f * _xi_b_ia2__out - 0.5f * _xi_c_ia2__out);
    _s_meas_power_meter1__i_beta = SQRT_2OVER3 * (SQRT3_OVER_2 * _xi_b_ia2__out - SQRT3_OVER_2 * _xi_c_ia2__out);
    _s_meas_power_meter1__v_zero = ONE_DIV_BY_SQRT_3 * (_ea_va2__out + _eb_va2__out + _ec_va2__out);
    _s_meas_power_meter1__i_zero = ONE_DIV_BY_SQRT_3 * (_xi_a_ia2__out + _xi_b_ia2__out + _xi_c_ia2__out);
    _s_meas_power_meter1__P = _s_meas_power_meter1__v_alpha * _s_meas_power_meter1__i_alpha + _s_meas_power_meter1__v_beta * _s_meas_power_meter1__i_beta + _s_meas_power_meter1__v_zero * _s_meas_power_meter1__i_zero;
    _s_meas_power_meter1__Q = _s_meas_power_meter1__v_beta * _s_meas_power_meter1__i_alpha - _s_meas_power_meter1__v_alpha * _s_meas_power_meter1__i_beta;
    _s_meas_power_meter1__filter_1_output = 0.003131753958361355 * (_s_meas_power_meter1__P + _s_meas_power_meter1__filter_1_input_k_minus_1) - (-0.9937364920832773) * _s_meas_power_meter1__filter_1_output_k_minus_1;
    _s_meas_power_meter1__filter_1_outputQ = 0.003131753958361355 * (_s_meas_power_meter1__Q + _s_meas_power_meter1__filter_1_input_k_minus_1Q) - (-0.9937364920832773) * _s_meas_power_meter1__filter_1_output_k_minus_1Q;
    _s_meas_power_meter1__filter_1_input_k_minus_1 = _s_meas_power_meter1__P;
    _s_meas_power_meter1__filter_1_output_k_minus_1 = _s_meas_power_meter1__filter_1_output;
    _s_meas_power_meter1__filter_1_input_k_minus_1Q = _s_meas_power_meter1__Q;;
    _s_meas_power_meter1__filter_1_output_k_minus_1Q = _s_meas_power_meter1__filter_1_outputQ;
    _s_meas_power_meter1__filter_2_output = 0.003131753958361355 * (_s_meas_power_meter1__filter_1_output + _s_meas_power_meter1__filter_2_input_k_minus_1) - (-0.9937364920832773) * _s_meas_power_meter1__filter_2_output_k_minus_1;
    _s_meas_power_meter1__filter_2_outputQ = 0.003131753958361355 * (_s_meas_power_meter1__Q + _s_meas_power_meter1__filter_2_input_k_minus_1Q) - (-0.9937364920832773) * _s_meas_power_meter1__filter_2_output_k_minus_1Q;
    _s_meas_power_meter1__filter_2_input_k_minus_1 = _s_meas_power_meter1__filter_1_output;
    _s_meas_power_meter1__filter_2_output_k_minus_1 = _s_meas_power_meter1__filter_2_output;
    _s_meas_power_meter1__filter_2_input_k_minus_1Q = _s_meas_power_meter1__Q;
    _s_meas_power_meter1__filter_2_output_k_minus_1Q = _s_meas_power_meter1__filter_2_outputQ;
    _s_meas_power_meter1__Pdc = _s_meas_power_meter1__filter_2_output;
    _s_meas_power_meter1__Qdc = _s_meas_power_meter1__filter_2_outputQ;
    _s_meas_power_meter1__apparent = sqrt(pow(_s_meas_power_meter1__Pdc, 2) + pow(_s_meas_power_meter1__Qdc, 2));
    if (_s_meas_power_meter1__apparent > 0)
        _s_meas_power_meter1__k_factor = _s_meas_power_meter1__Pdc / _s_meas_power_meter1__apparent;
    else
        _s_meas_power_meter1__k_factor = 0;
    _s_meas_power_meter1__Pac = _s_meas_power_meter1__P;
    _s_meas_power_meter1__Qac = _s_meas_power_meter1__Q;
    // Generated from the component: Current_abc_to_dq.abc to dq1.abc to alpha beta
    _current_abc_to_dq_abc_to_dq1_abc_to_alpha_beta__alpha = (2.0 * _xi_a_ia2__out - _xi_b_ia2__out - _xi_c_ia2__out) * 0.3333333333333333;
    _current_abc_to_dq_abc_to_dq1_abc_to_alpha_beta__beta = (_xi_b_ia2__out - _xi_c_ia2__out) * 0.5773502691896258;
    _current_abc_to_dq_abc_to_dq1_abc_to_alpha_beta__gamma = (_xi_a_ia2__out + _xi_b_ia2__out + _xi_c_ia2__out) * 0.3333333333333333;
    // Generated from the component: S_meas_1.Power Meter1
    _s_meas_1_power_meter1__v_alpha = SQRT_2OVER3 * ( _va_va2__out - 0.5f * _vb_va2__out - 0.5f * _vc_va2__out);
    _s_meas_1_power_meter1__v_beta = SQRT_2OVER3 * (SQRT3_OVER_2 * _vb_va2__out - SQRT3_OVER_2 * _vc_va2__out);
    _s_meas_1_power_meter1__i_alpha = SQRT_2OVER3 * ( _ia_ia2__out - 0.5f * _ib_ia2__out - 0.5f * _ic_ia2__out);
    _s_meas_1_power_meter1__i_beta = SQRT_2OVER3 * (SQRT3_OVER_2 * _ib_ia2__out - SQRT3_OVER_2 * _ic_ia2__out);
    _s_meas_1_power_meter1__v_zero = ONE_DIV_BY_SQRT_3 * (_va_va2__out + _vb_va2__out + _vc_va2__out);
    _s_meas_1_power_meter1__i_zero = ONE_DIV_BY_SQRT_3 * (_ia_ia2__out + _ib_ia2__out + _ic_ia2__out);
    _s_meas_1_power_meter1__P = _s_meas_1_power_meter1__v_alpha * _s_meas_1_power_meter1__i_alpha + _s_meas_1_power_meter1__v_beta * _s_meas_1_power_meter1__i_beta + _s_meas_1_power_meter1__v_zero * _s_meas_1_power_meter1__i_zero;
    _s_meas_1_power_meter1__Q = _s_meas_1_power_meter1__v_beta * _s_meas_1_power_meter1__i_alpha - _s_meas_1_power_meter1__v_alpha * _s_meas_1_power_meter1__i_beta;
    _s_meas_1_power_meter1__filter_1_output = 0.003131753958361355 * (_s_meas_1_power_meter1__P + _s_meas_1_power_meter1__filter_1_input_k_minus_1) - (-0.9937364920832773) * _s_meas_1_power_meter1__filter_1_output_k_minus_1;
    _s_meas_1_power_meter1__filter_1_outputQ = 0.003131753958361355 * (_s_meas_1_power_meter1__Q + _s_meas_1_power_meter1__filter_1_input_k_minus_1Q) - (-0.9937364920832773) * _s_meas_1_power_meter1__filter_1_output_k_minus_1Q;
    _s_meas_1_power_meter1__filter_1_input_k_minus_1 = _s_meas_1_power_meter1__P;
    _s_meas_1_power_meter1__filter_1_output_k_minus_1 = _s_meas_1_power_meter1__filter_1_output;
    _s_meas_1_power_meter1__filter_1_input_k_minus_1Q = _s_meas_1_power_meter1__Q;;
    _s_meas_1_power_meter1__filter_1_output_k_minus_1Q = _s_meas_1_power_meter1__filter_1_outputQ;
    _s_meas_1_power_meter1__filter_2_output = 0.003131753958361355 * (_s_meas_1_power_meter1__filter_1_output + _s_meas_1_power_meter1__filter_2_input_k_minus_1) - (-0.9937364920832773) * _s_meas_1_power_meter1__filter_2_output_k_minus_1;
    _s_meas_1_power_meter1__filter_2_outputQ = 0.003131753958361355 * (_s_meas_1_power_meter1__Q + _s_meas_1_power_meter1__filter_2_input_k_minus_1Q) - (-0.9937364920832773) * _s_meas_1_power_meter1__filter_2_output_k_minus_1Q;
    _s_meas_1_power_meter1__filter_2_input_k_minus_1 = _s_meas_1_power_meter1__filter_1_output;
    _s_meas_1_power_meter1__filter_2_output_k_minus_1 = _s_meas_1_power_meter1__filter_2_output;
    _s_meas_1_power_meter1__filter_2_input_k_minus_1Q = _s_meas_1_power_meter1__Q;
    _s_meas_1_power_meter1__filter_2_output_k_minus_1Q = _s_meas_1_power_meter1__filter_2_outputQ;
    _s_meas_1_power_meter1__Pdc = _s_meas_1_power_meter1__filter_2_output;
    _s_meas_1_power_meter1__Qdc = _s_meas_1_power_meter1__filter_2_outputQ;
    _s_meas_1_power_meter1__apparent = sqrt(pow(_s_meas_1_power_meter1__Pdc, 2) + pow(_s_meas_1_power_meter1__Qdc, 2));
    if (_s_meas_1_power_meter1__apparent > 0)
        _s_meas_1_power_meter1__k_factor = _s_meas_1_power_meter1__Pdc / _s_meas_1_power_meter1__apparent;
    else
        _s_meas_1_power_meter1__k_factor = 0;
    _s_meas_1_power_meter1__Pac = _s_meas_1_power_meter1__P;
    _s_meas_1_power_meter1__Qac = _s_meas_1_power_meter1__Q;
    // Generated from the component: Current_abc_to_dq1.abc to dq1.abc to alpha beta
    _current_abc_to_dq1_abc_to_dq1_abc_to_alpha_beta__alpha = (2.0 * _xi_a1_ia2__out - _xi_b1_ia2__out - _xi_c1_ia2__out) * 0.3333333333333333;
    _current_abc_to_dq1_abc_to_dq1_abc_to_alpha_beta__beta = (_xi_b1_ia2__out - _xi_c1_ia2__out) * 0.5773502691896258;
    _current_abc_to_dq1_abc_to_dq1_abc_to_alpha_beta__gamma = (_xi_a1_ia2__out + _xi_b1_ia2__out + _xi_c1_ia2__out) * 0.3333333333333333;
    // Generated from the component: Subsystem2.Gain3
    _subsystem2_gain3__out = 0.5 * _vdc_2_va1__out;
    // Generated from the component: Power Meter1
    _power_meter1__v_alpha = SQRT_2OVER3 * ( _va12_va2__out - 0.5f * _vb12_va2__out - 0.5f * _vc12_va2__out);
    _power_meter1__v_beta = SQRT_2OVER3 * (SQRT3_OVER_2 * _vb12_va2__out - SQRT3_OVER_2 * _vc12_va2__out);
    _power_meter1__i_alpha = SQRT_2OVER3 * ( _ia12_ia2__out - 0.5f * _ib12_ia2__out - 0.5f * _ic12_ia2__out);
    _power_meter1__i_beta = SQRT_2OVER3 * (SQRT3_OVER_2 * _ib12_ia2__out - SQRT3_OVER_2 * _ic12_ia2__out);
    _power_meter1__v_zero = ONE_DIV_BY_SQRT_3 * (_va12_va2__out + _vb12_va2__out + _vc12_va2__out);
    _power_meter1__i_zero = ONE_DIV_BY_SQRT_3 * (_ia12_ia2__out + _ib12_ia2__out + _ic12_ia2__out);
    _power_meter1__P = _power_meter1__v_alpha * _power_meter1__i_alpha + _power_meter1__v_beta * _power_meter1__i_beta + _power_meter1__v_zero * _power_meter1__i_zero;
    _power_meter1__Q = _power_meter1__v_beta * _power_meter1__i_alpha - _power_meter1__v_alpha * _power_meter1__i_beta;
    _power_meter1__filter_1_output = 0.003131753958361355 * (_power_meter1__P + _power_meter1__filter_1_input_k_minus_1) - (-0.9937364920832773) * _power_meter1__filter_1_output_k_minus_1;
    _power_meter1__filter_1_outputQ = 0.003131753958361355 * (_power_meter1__Q + _power_meter1__filter_1_input_k_minus_1Q) - (-0.9937364920832773) * _power_meter1__filter_1_output_k_minus_1Q;
    _power_meter1__filter_1_input_k_minus_1 = _power_meter1__P;
    _power_meter1__filter_1_output_k_minus_1 = _power_meter1__filter_1_output;
    _power_meter1__filter_1_input_k_minus_1Q = _power_meter1__Q;;
    _power_meter1__filter_1_output_k_minus_1Q = _power_meter1__filter_1_outputQ;
    _power_meter1__filter_2_output = 0.003131753958361355 * (_power_meter1__filter_1_output + _power_meter1__filter_2_input_k_minus_1) - (-0.9937364920832773) * _power_meter1__filter_2_output_k_minus_1;
    _power_meter1__filter_2_outputQ = 0.003131753958361355 * (_power_meter1__Q + _power_meter1__filter_2_input_k_minus_1Q) - (-0.9937364920832773) * _power_meter1__filter_2_output_k_minus_1Q;
    _power_meter1__filter_2_input_k_minus_1 = _power_meter1__filter_1_output;
    _power_meter1__filter_2_output_k_minus_1 = _power_meter1__filter_2_output;
    _power_meter1__filter_2_input_k_minus_1Q = _power_meter1__Q;
    _power_meter1__filter_2_output_k_minus_1Q = _power_meter1__filter_2_outputQ;
    _power_meter1__Pdc = _power_meter1__filter_2_output;
    _power_meter1__Qdc = _power_meter1__filter_2_outputQ;
    _power_meter1__apparent = sqrt(pow(_power_meter1__Pdc, 2) + pow(_power_meter1__Qdc, 2));
    if (_power_meter1__apparent > 0)
        _power_meter1__k_factor = _power_meter1__Pdc / _power_meter1__apparent;
    else
        _power_meter1__k_factor = 0;
    _power_meter1__Pac = _power_meter1__P;
    _power_meter1__Qac = _power_meter1__Q;
    // Generated from the component: S_meas1.Power Meter1
    _s_meas1_power_meter1__v_alpha = SQRT_2OVER3 * ( _ea1_va2__out - 0.5f * _eb1_va2__out - 0.5f * _ec1_va2__out);
    _s_meas1_power_meter1__v_beta = SQRT_2OVER3 * (SQRT3_OVER_2 * _eb1_va2__out - SQRT3_OVER_2 * _ec1_va2__out);
    _s_meas1_power_meter1__i_alpha = SQRT_2OVER3 * ( _xi_a1_ia2__out - 0.5f * _xi_b1_ia2__out - 0.5f * _xi_c1_ia2__out);
    _s_meas1_power_meter1__i_beta = SQRT_2OVER3 * (SQRT3_OVER_2 * _xi_b1_ia2__out - SQRT3_OVER_2 * _xi_c1_ia2__out);
    _s_meas1_power_meter1__v_zero = ONE_DIV_BY_SQRT_3 * (_ea1_va2__out + _eb1_va2__out + _ec1_va2__out);
    _s_meas1_power_meter1__i_zero = ONE_DIV_BY_SQRT_3 * (_xi_a1_ia2__out + _xi_b1_ia2__out + _xi_c1_ia2__out);
    _s_meas1_power_meter1__P = _s_meas1_power_meter1__v_alpha * _s_meas1_power_meter1__i_alpha + _s_meas1_power_meter1__v_beta * _s_meas1_power_meter1__i_beta + _s_meas1_power_meter1__v_zero * _s_meas1_power_meter1__i_zero;
    _s_meas1_power_meter1__Q = _s_meas1_power_meter1__v_beta * _s_meas1_power_meter1__i_alpha - _s_meas1_power_meter1__v_alpha * _s_meas1_power_meter1__i_beta;
    _s_meas1_power_meter1__filter_1_output = 0.003131753958361355 * (_s_meas1_power_meter1__P + _s_meas1_power_meter1__filter_1_input_k_minus_1) - (-0.9937364920832773) * _s_meas1_power_meter1__filter_1_output_k_minus_1;
    _s_meas1_power_meter1__filter_1_outputQ = 0.003131753958361355 * (_s_meas1_power_meter1__Q + _s_meas1_power_meter1__filter_1_input_k_minus_1Q) - (-0.9937364920832773) * _s_meas1_power_meter1__filter_1_output_k_minus_1Q;
    _s_meas1_power_meter1__filter_1_input_k_minus_1 = _s_meas1_power_meter1__P;
    _s_meas1_power_meter1__filter_1_output_k_minus_1 = _s_meas1_power_meter1__filter_1_output;
    _s_meas1_power_meter1__filter_1_input_k_minus_1Q = _s_meas1_power_meter1__Q;;
    _s_meas1_power_meter1__filter_1_output_k_minus_1Q = _s_meas1_power_meter1__filter_1_outputQ;
    _s_meas1_power_meter1__filter_2_output = 0.003131753958361355 * (_s_meas1_power_meter1__filter_1_output + _s_meas1_power_meter1__filter_2_input_k_minus_1) - (-0.9937364920832773) * _s_meas1_power_meter1__filter_2_output_k_minus_1;
    _s_meas1_power_meter1__filter_2_outputQ = 0.003131753958361355 * (_s_meas1_power_meter1__Q + _s_meas1_power_meter1__filter_2_input_k_minus_1Q) - (-0.9937364920832773) * _s_meas1_power_meter1__filter_2_output_k_minus_1Q;
    _s_meas1_power_meter1__filter_2_input_k_minus_1 = _s_meas1_power_meter1__filter_1_output;
    _s_meas1_power_meter1__filter_2_output_k_minus_1 = _s_meas1_power_meter1__filter_2_output;
    _s_meas1_power_meter1__filter_2_input_k_minus_1Q = _s_meas1_power_meter1__Q;
    _s_meas1_power_meter1__filter_2_output_k_minus_1Q = _s_meas1_power_meter1__filter_2_outputQ;
    _s_meas1_power_meter1__Pdc = _s_meas1_power_meter1__filter_2_output;
    _s_meas1_power_meter1__Qdc = _s_meas1_power_meter1__filter_2_outputQ;
    _s_meas1_power_meter1__apparent = sqrt(pow(_s_meas1_power_meter1__Pdc, 2) + pow(_s_meas1_power_meter1__Qdc, 2));
    if (_s_meas1_power_meter1__apparent > 0)
        _s_meas1_power_meter1__k_factor = _s_meas1_power_meter1__Pdc / _s_meas1_power_meter1__apparent;
    else
        _s_meas1_power_meter1__k_factor = 0;
    _s_meas1_power_meter1__Pac = _s_meas1_power_meter1__P;
    _s_meas1_power_meter1__Qac = _s_meas1_power_meter1__Q;
    // Generated from the component: PLL1.PLL.abc to dq.abc to alpha beta
    _pll1_pll_abc_to_dq_abc_to_alpha_beta__alpha = (2.0 * _ea1_va2__out - _eb1_va2__out - _ec1_va2__out) * 0.3333333333333333;
    _pll1_pll_abc_to_dq_abc_to_alpha_beta__beta = (_eb1_va2__out - _ec1_va2__out) * 0.5773502691896258;
    _pll1_pll_abc_to_dq_abc_to_alpha_beta__gamma = (_ea1_va2__out + _eb1_va2__out + _ec1_va2__out) * 0.3333333333333333;
    // Generated from the component: Subsystem3.Gain3
    _subsystem3_gain3__out = 0.5 * _vdc_3_va1__out;
    // Generated from the component: Current_abc_to_dq2.abc to dq1.abc to alpha beta
    _current_abc_to_dq2_abc_to_dq1_abc_to_alpha_beta__alpha = (2.0 * _xi_a2_ia2__out - _xi_b2_ia2__out - _xi_c2_ia2__out) * 0.3333333333333333;
    _current_abc_to_dq2_abc_to_dq1_abc_to_alpha_beta__beta = (_xi_b2_ia2__out - _xi_c2_ia2__out) * 0.5773502691896258;
    _current_abc_to_dq2_abc_to_dq1_abc_to_alpha_beta__gamma = (_xi_a2_ia2__out + _xi_b2_ia2__out + _xi_c2_ia2__out) * 0.3333333333333333;
    // Generated from the component: PLL2.PLL.abc to dq.abc to alpha beta
    _pll2_pll_abc_to_dq_abc_to_alpha_beta__alpha = (2.0 * _ea2_va2__out - _eb2_va2__out - _ec2_va2__out) * 0.3333333333333333;
    _pll2_pll_abc_to_dq_abc_to_alpha_beta__beta = (_eb2_va2__out - _ec2_va2__out) * 0.5773502691896258;
    _pll2_pll_abc_to_dq_abc_to_alpha_beta__gamma = (_ea2_va2__out + _eb2_va2__out + _ec2_va2__out) * 0.3333333333333333;
    // Generated from the component: S_meas2.Power Meter1
    _s_meas2_power_meter1__v_alpha = SQRT_2OVER3 * ( _ea2_va2__out - 0.5f * _eb2_va2__out - 0.5f * _ec2_va2__out);
    _s_meas2_power_meter1__v_beta = SQRT_2OVER3 * (SQRT3_OVER_2 * _eb2_va2__out - SQRT3_OVER_2 * _ec2_va2__out);
    _s_meas2_power_meter1__i_alpha = SQRT_2OVER3 * ( _xi_a2_ia2__out - 0.5f * _xi_b2_ia2__out - 0.5f * _xi_c2_ia2__out);
    _s_meas2_power_meter1__i_beta = SQRT_2OVER3 * (SQRT3_OVER_2 * _xi_b2_ia2__out - SQRT3_OVER_2 * _xi_c2_ia2__out);
    _s_meas2_power_meter1__v_zero = ONE_DIV_BY_SQRT_3 * (_ea2_va2__out + _eb2_va2__out + _ec2_va2__out);
    _s_meas2_power_meter1__i_zero = ONE_DIV_BY_SQRT_3 * (_xi_a2_ia2__out + _xi_b2_ia2__out + _xi_c2_ia2__out);
    _s_meas2_power_meter1__P = _s_meas2_power_meter1__v_alpha * _s_meas2_power_meter1__i_alpha + _s_meas2_power_meter1__v_beta * _s_meas2_power_meter1__i_beta + _s_meas2_power_meter1__v_zero * _s_meas2_power_meter1__i_zero;
    _s_meas2_power_meter1__Q = _s_meas2_power_meter1__v_beta * _s_meas2_power_meter1__i_alpha - _s_meas2_power_meter1__v_alpha * _s_meas2_power_meter1__i_beta;
    _s_meas2_power_meter1__filter_1_output = 0.003131753958361355 * (_s_meas2_power_meter1__P + _s_meas2_power_meter1__filter_1_input_k_minus_1) - (-0.9937364920832773) * _s_meas2_power_meter1__filter_1_output_k_minus_1;
    _s_meas2_power_meter1__filter_1_outputQ = 0.003131753958361355 * (_s_meas2_power_meter1__Q + _s_meas2_power_meter1__filter_1_input_k_minus_1Q) - (-0.9937364920832773) * _s_meas2_power_meter1__filter_1_output_k_minus_1Q;
    _s_meas2_power_meter1__filter_1_input_k_minus_1 = _s_meas2_power_meter1__P;
    _s_meas2_power_meter1__filter_1_output_k_minus_1 = _s_meas2_power_meter1__filter_1_output;
    _s_meas2_power_meter1__filter_1_input_k_minus_1Q = _s_meas2_power_meter1__Q;;
    _s_meas2_power_meter1__filter_1_output_k_minus_1Q = _s_meas2_power_meter1__filter_1_outputQ;
    _s_meas2_power_meter1__filter_2_output = 0.003131753958361355 * (_s_meas2_power_meter1__filter_1_output + _s_meas2_power_meter1__filter_2_input_k_minus_1) - (-0.9937364920832773) * _s_meas2_power_meter1__filter_2_output_k_minus_1;
    _s_meas2_power_meter1__filter_2_outputQ = 0.003131753958361355 * (_s_meas2_power_meter1__Q + _s_meas2_power_meter1__filter_2_input_k_minus_1Q) - (-0.9937364920832773) * _s_meas2_power_meter1__filter_2_output_k_minus_1Q;
    _s_meas2_power_meter1__filter_2_input_k_minus_1 = _s_meas2_power_meter1__filter_1_output;
    _s_meas2_power_meter1__filter_2_output_k_minus_1 = _s_meas2_power_meter1__filter_2_output;
    _s_meas2_power_meter1__filter_2_input_k_minus_1Q = _s_meas2_power_meter1__Q;
    _s_meas2_power_meter1__filter_2_output_k_minus_1Q = _s_meas2_power_meter1__filter_2_outputQ;
    _s_meas2_power_meter1__Pdc = _s_meas2_power_meter1__filter_2_output;
    _s_meas2_power_meter1__Qdc = _s_meas2_power_meter1__filter_2_outputQ;
    _s_meas2_power_meter1__apparent = sqrt(pow(_s_meas2_power_meter1__Pdc, 2) + pow(_s_meas2_power_meter1__Qdc, 2));
    if (_s_meas2_power_meter1__apparent > 0)
        _s_meas2_power_meter1__k_factor = _s_meas2_power_meter1__Pdc / _s_meas2_power_meter1__apparent;
    else
        _s_meas2_power_meter1__k_factor = 0;
    _s_meas2_power_meter1__Pac = _s_meas2_power_meter1__P;
    _s_meas2_power_meter1__Qac = _s_meas2_power_meter1__Q;
    // Generated from the component: P_ref4.RegD_sys.Termination1
    // Generated from the component: P_ref3.RegD_sys.Bus Split2
    _p_ref3_regd_sys_bus_split2__out = _p_ref3_regd_sys_modbus_device3_comp_holding_out__out[0];
    _p_ref3_regd_sys_bus_split2__out1 = _p_ref3_regd_sys_modbus_device3_comp_holding_out__out[1];
    // Generated from the component: P_ref3.RegD_sys.Probe3
    HIL_OutAO(0x403b, (float)_p_ref3_regd_sys_modbus_device3_comp_holding_out__out[0]);
    HIL_OutAO(0x403c, (float)_p_ref3_regd_sys_modbus_device3_comp_holding_out__out[1]);
    // Generated from the component: wt_pll1
    HIL_OutAO(0x407a, (float)_pll1_pll_unit_delay1__out);
    // Generated from the component: PLL1.PLL.sin
    _pll1_pll_sin__out = sin(_pll1_pll_unit_delay1__out);
    // Generated from the component: V3
    HIL_OutAO(0x4062, (float)_constant7__out);
    // Generated from the component: P_ref1.RegD_sys.Bus Join2
    _p_ref1_regd_sys_bus_join2__out[0] = _p_ref1_regd_sys_constant2__out;
    _p_ref1_regd_sys_bus_join2__out[1] = _p_ref1_regd_sys_constant2__out;
    // Generated from the component: P_ref4.RegD_sys.ModBus Device4.comp_coil_in
    XIo_OutFloat(0x550001e4, _p_ref4_regd_sys_constant4__out);
    // Generated from the component: P_ref3.RegD_sys.ModBus Device3.comp_discrete_in
    XIo_OutFloat(0x550001d0, _p_ref3_regd_sys_constant3__out);
    // Generated from the component: PLL2.PLL.sin
    _pll2_pll_sin__out = sin(_pll2_pll_unit_delay1__out);
    // Generated from the component: wt_pll2
    HIL_OutAO(0x407b, (float)_pll2_pll_unit_delay1__out);
    // Generated from the component: P_ref2.RegD_sys.Bus Join2
    _p_ref2_regd_sys_bus_join2__out[0] = _p_ref2_regd_sys_constant2__out;
    _p_ref2_regd_sys_bus_join2__out[1] = _p_ref2_regd_sys_constant2__out;
    // Generated from the component: P_ref1.RegD_sys.Bus Split2
    _p_ref1_regd_sys_bus_split2__out = _p_ref1_regd_sys_modbus_device1_comp_holding_out__out[0];
    _p_ref1_regd_sys_bus_split2__out1 = _p_ref1_regd_sys_modbus_device1_comp_holding_out__out[1];
    // Generated from the component: P_ref1.RegD_sys.Probe3
    HIL_OutAO(0x4031, (float)_p_ref1_regd_sys_modbus_device1_comp_holding_out__out[0]);
    HIL_OutAO(0x4032, (float)_p_ref1_regd_sys_modbus_device1_comp_holding_out__out[1]);
    // Generated from the component: PLL1.2pi
    _pll1_2pi__out = 6.28318530718 * _pll1_pll_to_hz__out;
    // Generated from the component: Product1
    _product1__out = (_va_rms1_cpu_trans_output__out) * 1.0 / (_constant5__out);
    // Generated from the component: PLL2.2pi
    _pll2_2pi__out = 6.28318530718 * _pll2_pll_to_hz__out;
    // Generated from the component: P_ref1.RegD_sys.ModBus Device1.comp_coil_in
    XIo_OutFloat(0x5500019c, _p_ref1_regd_sys_constant4__out);
    // Generated from the component: P_ref4.RegD_sys.Bus Join2
    _p_ref4_regd_sys_bus_join2__out[0] = _p_ref4_regd_sys_constant2__out;
    _p_ref4_regd_sys_bus_join2__out[1] = _p_ref4_regd_sys_constant2__out;
    // Generated from the component: Termination1
    // Generated from the component: Pref_out
    HIL_OutAO(0x404a, (float)_pref_in__out);
    // Generated from the component: Bus Split5
    _bus_split5__out = _modbus_device6_comp_coil_out__out;
    // Generated from the component: PLL3.PLL.sin
    _pll3_pll_sin__out = sin(_pll3_pll_unit_delay1__out);
    // Generated from the component: wt_pll4
    HIL_OutAO(0x407c, (float)_pll3_pll_unit_delay1__out);
    // Generated from the component: P_ref4.Sum4
    _p_ref4_sum4__out =  - _p_ref4_capacity_min__out + _p_ref4_capacity_max__out;
    // Generated from the component: P_ref4.Sum8
    _p_ref4_sum8__out = _p_ref4_capacity_min__out + _p_ref4_capacity_max__out;
    // Generated from the component: P_ref1.RegD_sys.Termination1
    // Generated from the component: P_ref2.RegD_sys.ModBus Device2.comp_discrete_in
    XIo_OutFloat(0x550001b8, _p_ref2_regd_sys_constant3__out);
    // Generated from the component: PLL.2pi
    _pll_2pi__out = 6.28318530718 * _pll_pll_to_hz__out;
    // Generated from the component: P_ref1.RegD_sys.ModBus Device1.comp_discrete_in
    XIo_OutFloat(0x550001a0, _p_ref1_regd_sys_constant3__out);
    // Generated from the component: P_ref2.RegD_sys.Termination1
    // Generated from the component: P_ref4.RegD_sys.Probe3
    HIL_OutAO(0x4040, (float)_p_ref4_regd_sys_modbus_device4_comp_holding_out__out[0]);
    HIL_OutAO(0x4041, (float)_p_ref4_regd_sys_modbus_device4_comp_holding_out__out[1]);
    // Generated from the component: P_ref4.RegD_sys.Bus Split2
    _p_ref4_regd_sys_bus_split2__out = _p_ref4_regd_sys_modbus_device4_comp_holding_out__out[0];
    _p_ref4_regd_sys_bus_split2__out1 = _p_ref4_regd_sys_modbus_device4_comp_holding_out__out[1];
    // Generated from the component: P_ref3.RegD_sys.Bus Join1
    _p_ref3_regd_sys_bus_join1__out[0] = _p_ref3_regd_sys_constant1__out;
    _p_ref3_regd_sys_bus_join1__out[1] = _p_ref3_regd_sys_constant6__out;
    // Generated from the component: P_ref3.RegD_sys.Termination1
    // Generated from the component: P_ref1.Sum8
    _p_ref1_sum8__out = _p_ref1_capacity_min__out + _p_ref1_capacity_max__out;
    // Generated from the component: P_ref1.Sum4
    _p_ref1_sum4__out =  - _p_ref1_capacity_min__out + _p_ref1_capacity_max__out;
    // Generated from the component: P_ref3.RegD_sys.ModBus Device3.comp_coil_in
    XIo_OutFloat(0x550001cc, _p_ref3_regd_sys_constant4__out);
    // Generated from the component: P_ref2.RegD_sys.Probe3
    HIL_OutAO(0x4036, (float)_p_ref2_regd_sys_modbus_device2_comp_holding_out__out[0]);
    HIL_OutAO(0x4037, (float)_p_ref2_regd_sys_modbus_device2_comp_holding_out__out[1]);
    // Generated from the component: P_ref2.RegD_sys.Bus Split2
    _p_ref2_regd_sys_bus_split2__out = _p_ref2_regd_sys_modbus_device2_comp_holding_out__out[0];
    _p_ref2_regd_sys_bus_split2__out1 = _p_ref2_regd_sys_modbus_device2_comp_holding_out__out[1];
    // Generated from the component: P_ref4.RegD_sys.ModBus Device4.comp_discrete_in
    XIo_OutFloat(0x550001e8, _p_ref4_regd_sys_constant3__out);
    // Generated from the component: P_ref4.RegD_sys.Bus Join1
    _p_ref4_regd_sys_bus_join1__out[0] = _p_ref4_regd_sys_constant1__out;
    _p_ref4_regd_sys_bus_join1__out[1] = _p_ref4_regd_sys_constant6__out;
    // Generated from the component: holding_out1
    HIL_OutAO(0x406b, (float)_modbus_device6_comp_holding_out__out);
    // Generated from the component: PLL3.2pi
    _pll3_2pi__out = 6.28318530718 * _pll3_pll_to_hz__out;
    // Generated from the component: P_ref2.RegD_sys.ModBus Device2.comp_coil_in
    XIo_OutFloat(0x550001b4, _p_ref2_regd_sys_constant4__out);
    // Generated from the component: P_ref1.RegD_sys.Bus Join1
    _p_ref1_regd_sys_bus_join1__out[0] = _p_ref1_regd_sys_constant1__out;
    _p_ref1_regd_sys_bus_join1__out[1] = _p_ref1_regd_sys_constant6__out;
    // Generated from the component: P_ref2.RegD_sys.Bus Join1
    _p_ref2_regd_sys_bus_join1__out[0] = _p_ref2_regd_sys_constant1__out;
    _p_ref2_regd_sys_bus_join1__out[1] = _p_ref2_regd_sys_constant6__out;
    // Generated from the component: P_ref3.RegD_sys.Bus Join2
    _p_ref3_regd_sys_bus_join2__out[0] = _p_ref3_regd_sys_constant2__out;
    _p_ref3_regd_sys_bus_join2__out[1] = _p_ref3_regd_sys_constant2__out;
    // Generated from the component: Product2
    _product2__out = (_va_rms_cpu_trans_output__out) * 1.0 / (_constant6__out);
    // Generated from the component: P_ref2.Sum8
    _p_ref2_sum8__out = _p_ref2_capacity_min__out + _p_ref2_capacity_max__out;
    // Generated from the component: P_ref2.Sum4
    _p_ref2_sum4__out =  - _p_ref2_capacity_min__out + _p_ref2_capacity_max__out;
    // Generated from the component: P_ref3.Sum4
    _p_ref3_sum4__out =  - _p_ref3_capacity_min__out + _p_ref3_capacity_max__out;
    // Generated from the component: P_ref3.Sum8
    _p_ref3_sum8__out = _p_ref3_capacity_min__out + _p_ref3_capacity_max__out;
    // Generated from the component: PLL.PLL.sin
    _pll_pll_sin__out = sin(_pll_pll_unit_delay1__out);
    // Generated from the component: wt_pll
    HIL_OutAO(0x4079, (float)_pll_pll_unit_delay1__out);
    // Generated from the component: Current_abc_to_dq3.Termination1
    // Generated from the component: Current_abc_to_dq3.abc to dq1.alpha beta to dq
    _current_abc_to_dq3_abc_to_dq1_alpha_beta_to_dq__k1 = cos(_pll3_pll_unit_delay1__out);
    _current_abc_to_dq3_abc_to_dq1_alpha_beta_to_dq__k2 = sin(_pll3_pll_unit_delay1__out);
    _current_abc_to_dq3_abc_to_dq1_alpha_beta_to_dq__d = _current_abc_to_dq3_abc_to_dq1_alpha_beta_to_dq__k2 * _current_abc_to_dq3_abc_to_dq1_abc_to_alpha_beta__alpha - _current_abc_to_dq3_abc_to_dq1_alpha_beta_to_dq__k1 * _current_abc_to_dq3_abc_to_dq1_abc_to_alpha_beta__beta;
    _current_abc_to_dq3_abc_to_dq1_alpha_beta_to_dq__q = _current_abc_to_dq3_abc_to_dq1_alpha_beta_to_dq__k1 * _current_abc_to_dq3_abc_to_dq1_abc_to_alpha_beta__alpha + _current_abc_to_dq3_abc_to_dq1_alpha_beta_to_dq__k2 * _current_abc_to_dq3_abc_to_dq1_abc_to_alpha_beta__beta;
    // Generated from the component: pf4
    HIL_OutAO(0x4077, (float)_s_meas3_power_meter1__k_factor);
    // Generated from the component: P4
    HIL_OutAO(0x402e, (float)_s_meas3_power_meter1__Pdc);
    // Generated from the component: S_meas3.Termination1
    // Generated from the component: S_meas3.Termination2
    // Generated from the component: Q4
    HIL_OutAO(0x4050, (float)_s_meas3_power_meter1__Qdc);
    // Generated from the component: S4
    HIL_OutAO(0x4055, (float)_s_meas3_power_meter1__apparent);
    // Generated from the component: PLL3.Termination1
    // Generated from the component: PLL3.PLL.abc to dq.alpha beta to dq
    _pll3_pll_abc_to_dq_alpha_beta_to_dq__k1 = cos(_pll3_pll_unit_delay1__out);
    _pll3_pll_abc_to_dq_alpha_beta_to_dq__k2 = sin(_pll3_pll_unit_delay1__out);
    _pll3_pll_abc_to_dq_alpha_beta_to_dq__d = _pll3_pll_abc_to_dq_alpha_beta_to_dq__k2 * _pll3_pll_abc_to_dq_abc_to_alpha_beta__alpha - _pll3_pll_abc_to_dq_alpha_beta_to_dq__k1 * _pll3_pll_abc_to_dq_abc_to_alpha_beta__beta;
    _pll3_pll_abc_to_dq_alpha_beta_to_dq__q = _pll3_pll_abc_to_dq_alpha_beta_to_dq__k1 * _pll3_pll_abc_to_dq_abc_to_alpha_beta__alpha + _pll3_pll_abc_to_dq_alpha_beta_to_dq__k2 * _pll3_pll_abc_to_dq_abc_to_alpha_beta__beta;
    // Generated from the component: PLL.Termination1
    // Generated from the component: PLL.PLL.abc to dq.alpha beta to dq
    _pll_pll_abc_to_dq_alpha_beta_to_dq__k1 = cos(_pll_pll_unit_delay1__out);
    _pll_pll_abc_to_dq_alpha_beta_to_dq__k2 = sin(_pll_pll_unit_delay1__out);
    _pll_pll_abc_to_dq_alpha_beta_to_dq__d = _pll_pll_abc_to_dq_alpha_beta_to_dq__k2 * _pll_pll_abc_to_dq_abc_to_alpha_beta__alpha - _pll_pll_abc_to_dq_alpha_beta_to_dq__k1 * _pll_pll_abc_to_dq_abc_to_alpha_beta__beta;
    _pll_pll_abc_to_dq_alpha_beta_to_dq__q = _pll_pll_abc_to_dq_alpha_beta_to_dq__k1 * _pll_pll_abc_to_dq_abc_to_alpha_beta__alpha + _pll_pll_abc_to_dq_alpha_beta_to_dq__k2 * _pll_pll_abc_to_dq_abc_to_alpha_beta__beta;
    // Generated from the component: pf1
    HIL_OutAO(0x4074, (float)_s_meas_power_meter1__k_factor);
    // Generated from the component: P1
    HIL_OutAO(0x402a, (float)_s_meas_power_meter1__Pdc);
    // Generated from the component: S1
    HIL_OutAO(0x4052, (float)_s_meas_power_meter1__apparent);
    // Generated from the component: S_meas.Termination2
    // Generated from the component: S_meas.Termination1
    // Generated from the component: Q1
    HIL_OutAO(0x404c, (float)_s_meas_power_meter1__Qdc);
    // Generated from the component: Current_abc_to_dq.abc to dq1.alpha beta to dq
    _current_abc_to_dq_abc_to_dq1_alpha_beta_to_dq__k1 = cos(_pll_pll_unit_delay1__out);
    _current_abc_to_dq_abc_to_dq1_alpha_beta_to_dq__k2 = sin(_pll_pll_unit_delay1__out);
    _current_abc_to_dq_abc_to_dq1_alpha_beta_to_dq__d = _current_abc_to_dq_abc_to_dq1_alpha_beta_to_dq__k2 * _current_abc_to_dq_abc_to_dq1_abc_to_alpha_beta__alpha - _current_abc_to_dq_abc_to_dq1_alpha_beta_to_dq__k1 * _current_abc_to_dq_abc_to_dq1_abc_to_alpha_beta__beta;
    _current_abc_to_dq_abc_to_dq1_alpha_beta_to_dq__q = _current_abc_to_dq_abc_to_dq1_alpha_beta_to_dq__k1 * _current_abc_to_dq_abc_to_dq1_abc_to_alpha_beta__alpha + _current_abc_to_dq_abc_to_dq1_alpha_beta_to_dq__k2 * _current_abc_to_dq_abc_to_dq1_abc_to_alpha_beta__beta;
    // Generated from the component: Current_abc_to_dq.Termination1
    // Generated from the component: S_bus
    HIL_OutAO(0x4056, (float)_s_meas_1_power_meter1__apparent);
    // Generated from the component: Trigonometric function2
    _trigonometric_function2__out = acos(_s_meas_1_power_meter1__k_factor);
    // Generated from the component: Bus Join5
    _bus_join5__out[0] = _s_meas_1_power_meter1__Pdc;
    _bus_join5__out[1] = _s_meas_1_power_meter1__Qdc;
    // Generated from the component: S_meas_1.Termination2
    // Generated from the component: S_meas_1.Termination1
    // Generated from the component: Q_bus
    HIL_OutAO(0x4051, (float)_s_meas_1_power_meter1__Qdc);
    // Generated from the component: P_bus
    HIL_OutAO(0x402f, (float)_s_meas_1_power_meter1__Pdc);
    // Generated from the component: pf_bus
    HIL_OutAO(0x4078, (float)_s_meas_1_power_meter1__k_factor);
    // Generated from the component: Current_abc_to_dq1.Termination1
    // Generated from the component: Current_abc_to_dq1.abc to dq1.alpha beta to dq
    _current_abc_to_dq1_abc_to_dq1_alpha_beta_to_dq__k1 = cos(_pll1_pll_unit_delay1__out);
    _current_abc_to_dq1_abc_to_dq1_alpha_beta_to_dq__k2 = sin(_pll1_pll_unit_delay1__out);
    _current_abc_to_dq1_abc_to_dq1_alpha_beta_to_dq__d = _current_abc_to_dq1_abc_to_dq1_alpha_beta_to_dq__k2 * _current_abc_to_dq1_abc_to_dq1_abc_to_alpha_beta__alpha - _current_abc_to_dq1_abc_to_dq1_alpha_beta_to_dq__k1 * _current_abc_to_dq1_abc_to_dq1_abc_to_alpha_beta__beta;
    _current_abc_to_dq1_abc_to_dq1_alpha_beta_to_dq__q = _current_abc_to_dq1_abc_to_dq1_alpha_beta_to_dq__k1 * _current_abc_to_dq1_abc_to_dq1_abc_to_alpha_beta__alpha + _current_abc_to_dq1_abc_to_dq1_alpha_beta_to_dq__k2 * _current_abc_to_dq1_abc_to_dq1_abc_to_alpha_beta__beta;
    // Generated from the component: Q12
    HIL_OutAO(0x404d, (float)_power_meter1__Qdc);
    // Generated from the component: Trigonometric function1
    _trigonometric_function1__out = acos(_power_meter1__k_factor);
    // Generated from the component: Termination3
    // Generated from the component: Termination4
    // Generated from the component: P12
    HIL_OutAO(0x402b, (float)_power_meter1__Pdc);
    // Generated from the component: Termination5
    // Generated from the component: pf2
    HIL_OutAO(0x4075, (float)_s_meas1_power_meter1__k_factor);
    // Generated from the component: S_meas1.Termination2
    // Generated from the component: P2
    HIL_OutAO(0x402c, (float)_s_meas1_power_meter1__Pdc);
    // Generated from the component: Q2
    HIL_OutAO(0x404e, (float)_s_meas1_power_meter1__Qdc);
    // Generated from the component: S2
    HIL_OutAO(0x4053, (float)_s_meas1_power_meter1__apparent);
    // Generated from the component: S_meas1.Termination1
    // Generated from the component: PLL1.Termination1
    // Generated from the component: PLL1.PLL.abc to dq.alpha beta to dq
    _pll1_pll_abc_to_dq_alpha_beta_to_dq__k1 = cos(_pll1_pll_unit_delay1__out);
    _pll1_pll_abc_to_dq_alpha_beta_to_dq__k2 = sin(_pll1_pll_unit_delay1__out);
    _pll1_pll_abc_to_dq_alpha_beta_to_dq__d = _pll1_pll_abc_to_dq_alpha_beta_to_dq__k2 * _pll1_pll_abc_to_dq_abc_to_alpha_beta__alpha - _pll1_pll_abc_to_dq_alpha_beta_to_dq__k1 * _pll1_pll_abc_to_dq_abc_to_alpha_beta__beta;
    _pll1_pll_abc_to_dq_alpha_beta_to_dq__q = _pll1_pll_abc_to_dq_alpha_beta_to_dq__k1 * _pll1_pll_abc_to_dq_abc_to_alpha_beta__alpha + _pll1_pll_abc_to_dq_alpha_beta_to_dq__k2 * _pll1_pll_abc_to_dq_abc_to_alpha_beta__beta;
    // Generated from the component: Current_abc_to_dq2.Termination1
    // Generated from the component: Current_abc_to_dq2.abc to dq1.alpha beta to dq
    _current_abc_to_dq2_abc_to_dq1_alpha_beta_to_dq__k1 = cos(_pll2_pll_unit_delay1__out);
    _current_abc_to_dq2_abc_to_dq1_alpha_beta_to_dq__k2 = sin(_pll2_pll_unit_delay1__out);
    _current_abc_to_dq2_abc_to_dq1_alpha_beta_to_dq__d = _current_abc_to_dq2_abc_to_dq1_alpha_beta_to_dq__k2 * _current_abc_to_dq2_abc_to_dq1_abc_to_alpha_beta__alpha - _current_abc_to_dq2_abc_to_dq1_alpha_beta_to_dq__k1 * _current_abc_to_dq2_abc_to_dq1_abc_to_alpha_beta__beta;
    _current_abc_to_dq2_abc_to_dq1_alpha_beta_to_dq__q = _current_abc_to_dq2_abc_to_dq1_alpha_beta_to_dq__k1 * _current_abc_to_dq2_abc_to_dq1_abc_to_alpha_beta__alpha + _current_abc_to_dq2_abc_to_dq1_alpha_beta_to_dq__k2 * _current_abc_to_dq2_abc_to_dq1_abc_to_alpha_beta__beta;
    // Generated from the component: PLL2.Termination1
    // Generated from the component: PLL2.PLL.abc to dq.alpha beta to dq
    _pll2_pll_abc_to_dq_alpha_beta_to_dq__k1 = cos(_pll2_pll_unit_delay1__out);
    _pll2_pll_abc_to_dq_alpha_beta_to_dq__k2 = sin(_pll2_pll_unit_delay1__out);
    _pll2_pll_abc_to_dq_alpha_beta_to_dq__d = _pll2_pll_abc_to_dq_alpha_beta_to_dq__k2 * _pll2_pll_abc_to_dq_abc_to_alpha_beta__alpha - _pll2_pll_abc_to_dq_alpha_beta_to_dq__k1 * _pll2_pll_abc_to_dq_abc_to_alpha_beta__beta;
    _pll2_pll_abc_to_dq_alpha_beta_to_dq__q = _pll2_pll_abc_to_dq_alpha_beta_to_dq__k1 * _pll2_pll_abc_to_dq_abc_to_alpha_beta__alpha + _pll2_pll_abc_to_dq_alpha_beta_to_dq__k2 * _pll2_pll_abc_to_dq_abc_to_alpha_beta__beta;
    // Generated from the component: S3
    HIL_OutAO(0x4054, (float)_s_meas2_power_meter1__apparent);
    // Generated from the component: Sum2
    _sum2__out = _s_meas_power_meter1__apparent + _s_meas1_power_meter1__apparent + _s_meas2_power_meter1__apparent + _s_meas3_power_meter1__apparent;
    // Generated from the component: Sum1
    _sum1__out = _s_meas_power_meter1__Pdc + _s_meas1_power_meter1__Pdc + _s_meas2_power_meter1__Pdc + _s_meas3_power_meter1__Pdc;
    // Generated from the component: P3
    HIL_OutAO(0x402d, (float)_s_meas2_power_meter1__Pdc);
    // Generated from the component: Q3
    HIL_OutAO(0x404f, (float)_s_meas2_power_meter1__Qdc);
    // Generated from the component: S_meas2.Termination2
    // Generated from the component: pf3
    HIL_OutAO(0x4076, (float)_s_meas2_power_meter1__k_factor);
    // Generated from the component: S_meas2.Termination1
    // Generated from the component: P_ref3.RegD_sys.C function3
    _p_ref3_regd_sys_c_function3__high = _p_ref3_regd_sys_bus_split2__out;
    _p_ref3_regd_sys_c_function3__low = _p_ref3_regd_sys_bus_split2__out1;
    _p_ref3_regd_sys_c_function3__temp = (((X_Int32)_p_ref3_regd_sys_c_function3__high << 16) & -65536) | ((X_Int32)_p_ref3_regd_sys_c_function3__low & 65535);
    if (_p_ref3_regd_sys_c_function3__temp < 1e7 && _p_ref3_regd_sys_c_function3__temp > -1e7)_p_ref3_regd_sys_c_function3__regD = _p_ref3_regd_sys_c_function3__temp;
    else if (_p_ref3_regd_sys_c_function3__temp == 1e7)_p_ref3_regd_sys_c_function3__regD = 1e7;
    else if (_p_ref3_regd_sys_c_function3__temp == -1e7)_p_ref3_regd_sys_c_function3__regD = -1e7;
    else if (_p_ref3_regd_sys_c_function3__temp > 1e7)_p_ref3_regd_sys_c_function3__regD = 2e7;
    else if (_p_ref3_regd_sys_c_function3__temp < -1e7)_p_ref3_regd_sys_c_function3__regD = -2e7;
    // Generated from the component: PLL1.Termination3
    // Generated from the component: P_ref1.RegD_sys.ModBus Device1.comp_holding_in
    XIo_OutFloat(0x550001a4, _p_ref1_regd_sys_bus_join2__out[0]);
    XIo_OutFloat(0x550001a8, _p_ref1_regd_sys_bus_join2__out[1]);
    // Generated from the component: PLL2.Termination3
    // Generated from the component: P_ref2.RegD_sys.ModBus Device2.comp_holding_in
    XIo_OutFloat(0x550001bc, _p_ref2_regd_sys_bus_join2__out[0]);
    XIo_OutFloat(0x550001c0, _p_ref2_regd_sys_bus_join2__out[1]);
    // Generated from the component: P_ref1.RegD_sys.C function3
    _p_ref1_regd_sys_c_function3__high = _p_ref1_regd_sys_bus_split2__out;
    _p_ref1_regd_sys_c_function3__low = _p_ref1_regd_sys_bus_split2__out1;
    _p_ref1_regd_sys_c_function3__temp = (((X_Int32)_p_ref1_regd_sys_c_function3__high << 16) & -65536) | ((X_Int32)_p_ref1_regd_sys_c_function3__low & 65535);
    if (_p_ref1_regd_sys_c_function3__temp < 1e7 && _p_ref1_regd_sys_c_function3__temp > -1e7)_p_ref1_regd_sys_c_function3__regD = _p_ref1_regd_sys_c_function3__temp;
    else if (_p_ref1_regd_sys_c_function3__temp == 1e7)_p_ref1_regd_sys_c_function3__regD = 1e7;
    else if (_p_ref1_regd_sys_c_function3__temp == -1e7)_p_ref1_regd_sys_c_function3__regD = -1e7;
    else if (_p_ref1_regd_sys_c_function3__temp > 1e7)_p_ref1_regd_sys_c_function3__regD = 2e7;
    else if (_p_ref1_regd_sys_c_function3__temp < -1e7)_p_ref1_regd_sys_c_function3__regD = -2e7;
    // Generated from the component: V1
    HIL_OutAO(0x4060, (float)_product1__out);
    // Generated from the component: P_ref4.RegD_sys.ModBus Device4.comp_holding_in
    XIo_OutFloat(0x550001ec, _p_ref4_regd_sys_bus_join2__out[0]);
    XIo_OutFloat(0x550001f0, _p_ref4_regd_sys_bus_join2__out[1]);
    // Generated from the component: Termination6
    // Generated from the component: PLL3.Termination3
    // Generated from the component: P_ref4.Gain1
    _p_ref4_gain1__out = 0.5 * _p_ref4_sum8__out;
    // Generated from the component: P_ref4.RegD_sys.C function3
    _p_ref4_regd_sys_c_function3__high = _p_ref4_regd_sys_bus_split2__out;
    _p_ref4_regd_sys_c_function3__low = _p_ref4_regd_sys_bus_split2__out1;
    _p_ref4_regd_sys_c_function3__temp = (((X_Int32)_p_ref4_regd_sys_c_function3__high << 16) & -65536) | ((X_Int32)_p_ref4_regd_sys_c_function3__low & 65535);
    if (_p_ref4_regd_sys_c_function3__temp < 1e7 && _p_ref4_regd_sys_c_function3__temp > -1e7)_p_ref4_regd_sys_c_function3__regD = _p_ref4_regd_sys_c_function3__temp;
    else if (_p_ref4_regd_sys_c_function3__temp == 1e7)_p_ref4_regd_sys_c_function3__regD = 1e7;
    else if (_p_ref4_regd_sys_c_function3__temp == -1e7)_p_ref4_regd_sys_c_function3__regD = -1e7;
    else if (_p_ref4_regd_sys_c_function3__temp > 1e7)_p_ref4_regd_sys_c_function3__regD = 2e7;
    else if (_p_ref4_regd_sys_c_function3__temp < -1e7)_p_ref4_regd_sys_c_function3__regD = -2e7;
    // Generated from the component: P_ref3.RegD_sys.ModBus Device3.comp_reg_in
    XIo_OutFloat(0x550001dc, _p_ref3_regd_sys_bus_join1__out[0]);
    XIo_OutFloat(0x550001e0, _p_ref3_regd_sys_bus_join1__out[1]);
    // Generated from the component: P_ref1.Gain1
    _p_ref1_gain1__out = 0.5 * _p_ref1_sum8__out;
    // Generated from the component: P_ref2.RegD_sys.C function3
    _p_ref2_regd_sys_c_function3__high = _p_ref2_regd_sys_bus_split2__out;
    _p_ref2_regd_sys_c_function3__low = _p_ref2_regd_sys_bus_split2__out1;
    _p_ref2_regd_sys_c_function3__temp = (((X_Int32)_p_ref2_regd_sys_c_function3__high << 16) & -65536) | ((X_Int32)_p_ref2_regd_sys_c_function3__low & 65535);
    if (_p_ref2_regd_sys_c_function3__temp < 1e7 && _p_ref2_regd_sys_c_function3__temp > -1e7)_p_ref2_regd_sys_c_function3__regD = _p_ref2_regd_sys_c_function3__temp;
    else if (_p_ref2_regd_sys_c_function3__temp == 1e7)_p_ref2_regd_sys_c_function3__regD = 1e7;
    else if (_p_ref2_regd_sys_c_function3__temp == -1e7)_p_ref2_regd_sys_c_function3__regD = -1e7;
    else if (_p_ref2_regd_sys_c_function3__temp > 1e7)_p_ref2_regd_sys_c_function3__regD = 2e7;
    else if (_p_ref2_regd_sys_c_function3__temp < -1e7)_p_ref2_regd_sys_c_function3__regD = -2e7;
    // Generated from the component: P_ref4.RegD_sys.ModBus Device4.comp_reg_in
    XIo_OutFloat(0x550001f4, _p_ref4_regd_sys_bus_join1__out[0]);
    XIo_OutFloat(0x550001f8, _p_ref4_regd_sys_bus_join1__out[1]);
    // Generated from the component: P_ref1.RegD_sys.ModBus Device1.comp_reg_in
    XIo_OutFloat(0x550001ac, _p_ref1_regd_sys_bus_join1__out[0]);
    XIo_OutFloat(0x550001b0, _p_ref1_regd_sys_bus_join1__out[1]);
    // Generated from the component: P_ref2.RegD_sys.ModBus Device2.comp_reg_in
    XIo_OutFloat(0x550001c4, _p_ref2_regd_sys_bus_join1__out[0]);
    XIo_OutFloat(0x550001c8, _p_ref2_regd_sys_bus_join1__out[1]);
    // Generated from the component: P_ref3.RegD_sys.ModBus Device3.comp_holding_in
    XIo_OutFloat(0x550001d4, _p_ref3_regd_sys_bus_join2__out[0]);
    XIo_OutFloat(0x550001d8, _p_ref3_regd_sys_bus_join2__out[1]);
    // Generated from the component: V2
    HIL_OutAO(0x4061, (float)_product2__out);
    // Generated from the component: P_ref2.Gain1
    _p_ref2_gain1__out = 0.5 * _p_ref2_sum8__out;
    // Generated from the component: P_ref3.Gain1
    _p_ref3_gain1__out = 0.5 * _p_ref3_sum8__out;
    // Generated from the component: PLL.Termination3
    // Generated from the component: Subsystem4.Gain1
    _subsystem4_gain1__out = 0.00206374 * _current_abc_to_dq3_abc_to_dq1_alpha_beta_to_dq__q;
    // Generated from the component: Subsystem4.Gain2
    _subsystem4_gain2__out = 0.00206374 * _current_abc_to_dq3_abc_to_dq1_alpha_beta_to_dq__d;
    // Generated from the component: iq4
    HIL_OutAO(0x4073, (float)_current_abc_to_dq3_abc_to_dq1_alpha_beta_to_dq__q);
    // Generated from the component: id4
    HIL_OutAO(0x406f, (float)_current_abc_to_dq3_abc_to_dq1_alpha_beta_to_dq__d);
    // Generated from the component: PLL3.PLL.abc to dq.LPF_q
    _pll3_pll_abc_to_dq_lpf_q__a_sum = 0.0f;
    _pll3_pll_abc_to_dq_lpf_q__b_sum = 0.0f;
    _pll3_pll_abc_to_dq_lpf_q__delay_line_in = 0.0f;
    for (_pll3_pll_abc_to_dq_lpf_q__i = 0; _pll3_pll_abc_to_dq_lpf_q__i < 1; _pll3_pll_abc_to_dq_lpf_q__i++) {
        _pll3_pll_abc_to_dq_lpf_q__b_sum += _pll3_pll_abc_to_dq_lpf_q__b_coeff[_pll3_pll_abc_to_dq_lpf_q__i + 1] * _pll3_pll_abc_to_dq_lpf_q__states[_pll3_pll_abc_to_dq_lpf_q__i];
    }
    _pll3_pll_abc_to_dq_lpf_q__a_sum += _pll3_pll_abc_to_dq_lpf_q__states[0] * _pll3_pll_abc_to_dq_lpf_q__a_coeff[1];
    _pll3_pll_abc_to_dq_lpf_q__delay_line_in = (_pll3_pll_abc_to_dq_alpha_beta_to_dq__q - _pll3_pll_abc_to_dq_lpf_q__a_sum) / _pll3_pll_abc_to_dq_lpf_q__a_coeff[0];
    _pll3_pll_abc_to_dq_lpf_q__b_sum += _pll3_pll_abc_to_dq_lpf_q__b_coeff[0] * _pll3_pll_abc_to_dq_lpf_q__delay_line_in;
    _pll3_pll_abc_to_dq_lpf_q__out = _pll3_pll_abc_to_dq_lpf_q__b_sum;
    // Generated from the component: PLL3.PLL.abc to dq.LPF_d
    _pll3_pll_abc_to_dq_lpf_d__a_sum = 0.0f;
    _pll3_pll_abc_to_dq_lpf_d__b_sum = 0.0f;
    _pll3_pll_abc_to_dq_lpf_d__delay_line_in = 0.0f;
    for (_pll3_pll_abc_to_dq_lpf_d__i = 0; _pll3_pll_abc_to_dq_lpf_d__i < 1; _pll3_pll_abc_to_dq_lpf_d__i++) {
        _pll3_pll_abc_to_dq_lpf_d__b_sum += _pll3_pll_abc_to_dq_lpf_d__b_coeff[_pll3_pll_abc_to_dq_lpf_d__i + 1] * _pll3_pll_abc_to_dq_lpf_d__states[_pll3_pll_abc_to_dq_lpf_d__i];
    }
    _pll3_pll_abc_to_dq_lpf_d__a_sum += _pll3_pll_abc_to_dq_lpf_d__states[0] * _pll3_pll_abc_to_dq_lpf_d__a_coeff[1];
    _pll3_pll_abc_to_dq_lpf_d__delay_line_in = (_pll3_pll_abc_to_dq_alpha_beta_to_dq__d - _pll3_pll_abc_to_dq_lpf_d__a_sum) / _pll3_pll_abc_to_dq_lpf_d__a_coeff[0];
    _pll3_pll_abc_to_dq_lpf_d__b_sum += _pll3_pll_abc_to_dq_lpf_d__b_coeff[0] * _pll3_pll_abc_to_dq_lpf_d__delay_line_in;
    _pll3_pll_abc_to_dq_lpf_d__out = _pll3_pll_abc_to_dq_lpf_d__b_sum;
    // Generated from the component: PLL.PLL.abc to dq.LPF_d
    _pll_pll_abc_to_dq_lpf_d__a_sum = 0.0f;
    _pll_pll_abc_to_dq_lpf_d__b_sum = 0.0f;
    _pll_pll_abc_to_dq_lpf_d__delay_line_in = 0.0f;
    for (_pll_pll_abc_to_dq_lpf_d__i = 0; _pll_pll_abc_to_dq_lpf_d__i < 1; _pll_pll_abc_to_dq_lpf_d__i++) {
        _pll_pll_abc_to_dq_lpf_d__b_sum += _pll_pll_abc_to_dq_lpf_d__b_coeff[_pll_pll_abc_to_dq_lpf_d__i + 1] * _pll_pll_abc_to_dq_lpf_d__states[_pll_pll_abc_to_dq_lpf_d__i];
    }
    _pll_pll_abc_to_dq_lpf_d__a_sum += _pll_pll_abc_to_dq_lpf_d__states[0] * _pll_pll_abc_to_dq_lpf_d__a_coeff[1];
    _pll_pll_abc_to_dq_lpf_d__delay_line_in = (_pll_pll_abc_to_dq_alpha_beta_to_dq__d - _pll_pll_abc_to_dq_lpf_d__a_sum) / _pll_pll_abc_to_dq_lpf_d__a_coeff[0];
    _pll_pll_abc_to_dq_lpf_d__b_sum += _pll_pll_abc_to_dq_lpf_d__b_coeff[0] * _pll_pll_abc_to_dq_lpf_d__delay_line_in;
    _pll_pll_abc_to_dq_lpf_d__out = _pll_pll_abc_to_dq_lpf_d__b_sum;
    // Generated from the component: PLL.PLL.abc to dq.LPF_q
    _pll_pll_abc_to_dq_lpf_q__a_sum = 0.0f;
    _pll_pll_abc_to_dq_lpf_q__b_sum = 0.0f;
    _pll_pll_abc_to_dq_lpf_q__delay_line_in = 0.0f;
    for (_pll_pll_abc_to_dq_lpf_q__i = 0; _pll_pll_abc_to_dq_lpf_q__i < 1; _pll_pll_abc_to_dq_lpf_q__i++) {
        _pll_pll_abc_to_dq_lpf_q__b_sum += _pll_pll_abc_to_dq_lpf_q__b_coeff[_pll_pll_abc_to_dq_lpf_q__i + 1] * _pll_pll_abc_to_dq_lpf_q__states[_pll_pll_abc_to_dq_lpf_q__i];
    }
    _pll_pll_abc_to_dq_lpf_q__a_sum += _pll_pll_abc_to_dq_lpf_q__states[0] * _pll_pll_abc_to_dq_lpf_q__a_coeff[1];
    _pll_pll_abc_to_dq_lpf_q__delay_line_in = (_pll_pll_abc_to_dq_alpha_beta_to_dq__q - _pll_pll_abc_to_dq_lpf_q__a_sum) / _pll_pll_abc_to_dq_lpf_q__a_coeff[0];
    _pll_pll_abc_to_dq_lpf_q__b_sum += _pll_pll_abc_to_dq_lpf_q__b_coeff[0] * _pll_pll_abc_to_dq_lpf_q__delay_line_in;
    _pll_pll_abc_to_dq_lpf_q__out = _pll_pll_abc_to_dq_lpf_q__b_sum;
    // Generated from the component: id
    HIL_OutAO(0x406c, (float)_current_abc_to_dq_abc_to_dq1_alpha_beta_to_dq__d);
    // Generated from the component: Subsystem1.Gain2
    _subsystem1_gain2__out = 0.00206374 * _current_abc_to_dq_abc_to_dq1_alpha_beta_to_dq__d;
    // Generated from the component: iq
    HIL_OutAO(0x4070, (float)_current_abc_to_dq_abc_to_dq1_alpha_beta_to_dq__q);
    // Generated from the component: Subsystem1.Gain1
    _subsystem1_gain1__out = 0.00206374 * _current_abc_to_dq_abc_to_dq1_alpha_beta_to_dq__q;
    // Generated from the component: Phase2
    HIL_OutAO(0x4045, (float)_trigonometric_function2__out);
    // Generated from the component: ModBus Device6.comp_holding_in
    XIo_OutFloat(0x55000190, _bus_join5__out[0]);
    XIo_OutFloat(0x55000194, _bus_join5__out[1]);
    // Generated from the component: Subsystem2.Gain2
    _subsystem2_gain2__out = 0.00206374 * _current_abc_to_dq1_abc_to_dq1_alpha_beta_to_dq__d;
    // Generated from the component: iq1
    HIL_OutAO(0x4071, (float)_current_abc_to_dq1_abc_to_dq1_alpha_beta_to_dq__q);
    // Generated from the component: Subsystem2.Gain1
    _subsystem2_gain1__out = 0.00206374 * _current_abc_to_dq1_abc_to_dq1_alpha_beta_to_dq__q;
    // Generated from the component: id1
    HIL_OutAO(0x406d, (float)_current_abc_to_dq1_abc_to_dq1_alpha_beta_to_dq__d);
    // Generated from the component: Phase1
    HIL_OutAO(0x4044, (float)_trigonometric_function1__out);
    // Generated from the component: PLL1.PLL.abc to dq.LPF_d
    _pll1_pll_abc_to_dq_lpf_d__a_sum = 0.0f;
    _pll1_pll_abc_to_dq_lpf_d__b_sum = 0.0f;
    _pll1_pll_abc_to_dq_lpf_d__delay_line_in = 0.0f;
    for (_pll1_pll_abc_to_dq_lpf_d__i = 0; _pll1_pll_abc_to_dq_lpf_d__i < 1; _pll1_pll_abc_to_dq_lpf_d__i++) {
        _pll1_pll_abc_to_dq_lpf_d__b_sum += _pll1_pll_abc_to_dq_lpf_d__b_coeff[_pll1_pll_abc_to_dq_lpf_d__i + 1] * _pll1_pll_abc_to_dq_lpf_d__states[_pll1_pll_abc_to_dq_lpf_d__i];
    }
    _pll1_pll_abc_to_dq_lpf_d__a_sum += _pll1_pll_abc_to_dq_lpf_d__states[0] * _pll1_pll_abc_to_dq_lpf_d__a_coeff[1];
    _pll1_pll_abc_to_dq_lpf_d__delay_line_in = (_pll1_pll_abc_to_dq_alpha_beta_to_dq__d - _pll1_pll_abc_to_dq_lpf_d__a_sum) / _pll1_pll_abc_to_dq_lpf_d__a_coeff[0];
    _pll1_pll_abc_to_dq_lpf_d__b_sum += _pll1_pll_abc_to_dq_lpf_d__b_coeff[0] * _pll1_pll_abc_to_dq_lpf_d__delay_line_in;
    _pll1_pll_abc_to_dq_lpf_d__out = _pll1_pll_abc_to_dq_lpf_d__b_sum;
    // Generated from the component: PLL1.PLL.abc to dq.LPF_q
    _pll1_pll_abc_to_dq_lpf_q__a_sum = 0.0f;
    _pll1_pll_abc_to_dq_lpf_q__b_sum = 0.0f;
    _pll1_pll_abc_to_dq_lpf_q__delay_line_in = 0.0f;
    for (_pll1_pll_abc_to_dq_lpf_q__i = 0; _pll1_pll_abc_to_dq_lpf_q__i < 1; _pll1_pll_abc_to_dq_lpf_q__i++) {
        _pll1_pll_abc_to_dq_lpf_q__b_sum += _pll1_pll_abc_to_dq_lpf_q__b_coeff[_pll1_pll_abc_to_dq_lpf_q__i + 1] * _pll1_pll_abc_to_dq_lpf_q__states[_pll1_pll_abc_to_dq_lpf_q__i];
    }
    _pll1_pll_abc_to_dq_lpf_q__a_sum += _pll1_pll_abc_to_dq_lpf_q__states[0] * _pll1_pll_abc_to_dq_lpf_q__a_coeff[1];
    _pll1_pll_abc_to_dq_lpf_q__delay_line_in = (_pll1_pll_abc_to_dq_alpha_beta_to_dq__q - _pll1_pll_abc_to_dq_lpf_q__a_sum) / _pll1_pll_abc_to_dq_lpf_q__a_coeff[0];
    _pll1_pll_abc_to_dq_lpf_q__b_sum += _pll1_pll_abc_to_dq_lpf_q__b_coeff[0] * _pll1_pll_abc_to_dq_lpf_q__delay_line_in;
    _pll1_pll_abc_to_dq_lpf_q__out = _pll1_pll_abc_to_dq_lpf_q__b_sum;
    // Generated from the component: Subsystem3.Gain2
    _subsystem3_gain2__out = 0.00206374 * _current_abc_to_dq2_abc_to_dq1_alpha_beta_to_dq__d;
    // Generated from the component: id2
    HIL_OutAO(0x406e, (float)_current_abc_to_dq2_abc_to_dq1_alpha_beta_to_dq__d);
    // Generated from the component: iq2
    HIL_OutAO(0x4072, (float)_current_abc_to_dq2_abc_to_dq1_alpha_beta_to_dq__q);
    // Generated from the component: Subsystem3.Gain1
    _subsystem3_gain1__out = 0.00206374 * _current_abc_to_dq2_abc_to_dq1_alpha_beta_to_dq__q;
    // Generated from the component: PLL2.PLL.abc to dq.LPF_q
    _pll2_pll_abc_to_dq_lpf_q__a_sum = 0.0f;
    _pll2_pll_abc_to_dq_lpf_q__b_sum = 0.0f;
    _pll2_pll_abc_to_dq_lpf_q__delay_line_in = 0.0f;
    for (_pll2_pll_abc_to_dq_lpf_q__i = 0; _pll2_pll_abc_to_dq_lpf_q__i < 1; _pll2_pll_abc_to_dq_lpf_q__i++) {
        _pll2_pll_abc_to_dq_lpf_q__b_sum += _pll2_pll_abc_to_dq_lpf_q__b_coeff[_pll2_pll_abc_to_dq_lpf_q__i + 1] * _pll2_pll_abc_to_dq_lpf_q__states[_pll2_pll_abc_to_dq_lpf_q__i];
    }
    _pll2_pll_abc_to_dq_lpf_q__a_sum += _pll2_pll_abc_to_dq_lpf_q__states[0] * _pll2_pll_abc_to_dq_lpf_q__a_coeff[1];
    _pll2_pll_abc_to_dq_lpf_q__delay_line_in = (_pll2_pll_abc_to_dq_alpha_beta_to_dq__q - _pll2_pll_abc_to_dq_lpf_q__a_sum) / _pll2_pll_abc_to_dq_lpf_q__a_coeff[0];
    _pll2_pll_abc_to_dq_lpf_q__b_sum += _pll2_pll_abc_to_dq_lpf_q__b_coeff[0] * _pll2_pll_abc_to_dq_lpf_q__delay_line_in;
    _pll2_pll_abc_to_dq_lpf_q__out = _pll2_pll_abc_to_dq_lpf_q__b_sum;
    // Generated from the component: PLL2.PLL.abc to dq.LPF_d
    _pll2_pll_abc_to_dq_lpf_d__a_sum = 0.0f;
    _pll2_pll_abc_to_dq_lpf_d__b_sum = 0.0f;
    _pll2_pll_abc_to_dq_lpf_d__delay_line_in = 0.0f;
    for (_pll2_pll_abc_to_dq_lpf_d__i = 0; _pll2_pll_abc_to_dq_lpf_d__i < 1; _pll2_pll_abc_to_dq_lpf_d__i++) {
        _pll2_pll_abc_to_dq_lpf_d__b_sum += _pll2_pll_abc_to_dq_lpf_d__b_coeff[_pll2_pll_abc_to_dq_lpf_d__i + 1] * _pll2_pll_abc_to_dq_lpf_d__states[_pll2_pll_abc_to_dq_lpf_d__i];
    }
    _pll2_pll_abc_to_dq_lpf_d__a_sum += _pll2_pll_abc_to_dq_lpf_d__states[0] * _pll2_pll_abc_to_dq_lpf_d__a_coeff[1];
    _pll2_pll_abc_to_dq_lpf_d__delay_line_in = (_pll2_pll_abc_to_dq_alpha_beta_to_dq__d - _pll2_pll_abc_to_dq_lpf_d__a_sum) / _pll2_pll_abc_to_dq_lpf_d__a_coeff[0];
    _pll2_pll_abc_to_dq_lpf_d__b_sum += _pll2_pll_abc_to_dq_lpf_d__b_coeff[0] * _pll2_pll_abc_to_dq_lpf_d__delay_line_in;
    _pll2_pll_abc_to_dq_lpf_d__out = _pll2_pll_abc_to_dq_lpf_d__b_sum;
    // Generated from the component: Stotal
    HIL_OutAO(0x4057, (float)_sum2__out);
    // Generated from the component: Ptotal
    HIL_OutAO(0x404b, (float)_sum1__out);
    // Generated from the component: P_ref3.RegD_sys.Regulation Data
    HIL_OutAO(0x403d, (float)_p_ref3_regd_sys_c_function3__regD);
    // Generated from the component: P_ref3.RegD_sys.Product2
    _p_ref3_regd_sys_product2__out = (_p_ref3_regd_sys_c_function3__regD) * 1.0 / (_p_ref3_regd_sys_constant7__out);
    // Generated from the component: P_ref1.RegD_sys.Regulation Data
    HIL_OutAO(0x4033, (float)_p_ref1_regd_sys_c_function3__regD);
    // Generated from the component: P_ref1.RegD_sys.Product2
    _p_ref1_regd_sys_product2__out = (_p_ref1_regd_sys_c_function3__regD) * 1.0 / (_p_ref1_regd_sys_constant7__out);
    // Generated from the component: P_ref4.RegD_sys.Product2
    _p_ref4_regd_sys_product2__out = (_p_ref4_regd_sys_c_function3__regD) * 1.0 / (_p_ref4_regd_sys_constant7__out);
    // Generated from the component: P_ref4.RegD_sys.Regulation Data
    HIL_OutAO(0x4042, (float)_p_ref4_regd_sys_c_function3__regD);
    // Generated from the component: P_ref2.RegD_sys.Product2
    _p_ref2_regd_sys_product2__out = (_p_ref2_regd_sys_c_function3__regD) * 1.0 / (_p_ref2_regd_sys_constant7__out);
    // Generated from the component: P_ref2.RegD_sys.Regulation Data
    HIL_OutAO(0x4038, (float)_p_ref2_regd_sys_c_function3__regD);
    // Generated from the component: Subsystem4.Product1
    _subsystem4_product1__out = (_pll3_2pi__out * _subsystem4_gain1__out);
    // Generated from the component: Subsystem4.Product2
    _subsystem4_product2__out = (_pll3_2pi__out * _subsystem4_gain2__out);
    // Generated from the component: Eq4
    HIL_OutAO(0x4029, (float)_pll3_pll_abc_to_dq_lpf_q__out);
    // Generated from the component: squared_Vt3.Product2
    _squared_vt3_product2__out = (_pll3_pll_abc_to_dq_lpf_q__out * _pll3_pll_abc_to_dq_lpf_q__out);
    // Generated from the component: Current_ref3.Product6
    _current_ref3_product6__out = (_q_ref4__out * _pll3_pll_abc_to_dq_lpf_q__out);
    // Generated from the component: Current_ref3.Product4
    _current_ref3_product4__out = (_pll3_pll_abc_to_dq_lpf_d__out * _q_ref4__out);
    // Generated from the component: squared_Vt3.Product1
    _squared_vt3_product1__out = (_pll3_pll_abc_to_dq_lpf_d__out * _pll3_pll_abc_to_dq_lpf_d__out);
    // Generated from the component: Ed4
    HIL_OutAO(0x4025, (float)_pll3_pll_abc_to_dq_lpf_d__out);
    // Generated from the component: PLL3.PLL.normalize
    _pll3_pll_normalize__in1 = _pll3_pll_abc_to_dq_lpf_d__out;
    _pll3_pll_normalize__in2 = _pll3_pll_abc_to_dq_lpf_q__out;
    _pll3_pll_normalize__pk = (powf(_pll3_pll_normalize__in1, 2.0) + powf(_pll3_pll_normalize__in2, 2.0));
    _pll3_pll_normalize__pk = sqrt(_pll3_pll_normalize__pk);
    if (_pll3_pll_normalize__pk < 0.1) {
        _pll3_pll_normalize__in2_pu = _pll3_pll_normalize__in2 / 0.1;
    }
    else {
        _pll3_pll_normalize__in2_pu = _pll3_pll_normalize__in2 / _pll3_pll_normalize__pk;
    }
    // Generated from the component: squared_Vt.Product1
    _squared_vt_product1__out = (_pll_pll_abc_to_dq_lpf_d__out * _pll_pll_abc_to_dq_lpf_d__out);
    // Generated from the component: Ed
    HIL_OutAO(0x4022, (float)_pll_pll_abc_to_dq_lpf_d__out);
    // Generated from the component: Current_ref.Product4
    _current_ref_product4__out = (_pll_pll_abc_to_dq_lpf_d__out * _q_ref1__out);
    // Generated from the component: Eq
    HIL_OutAO(0x4026, (float)_pll_pll_abc_to_dq_lpf_q__out);
    // Generated from the component: PLL.PLL.normalize
    _pll_pll_normalize__in1 = _pll_pll_abc_to_dq_lpf_d__out;
    _pll_pll_normalize__in2 = _pll_pll_abc_to_dq_lpf_q__out;
    _pll_pll_normalize__pk = (powf(_pll_pll_normalize__in1, 2.0) + powf(_pll_pll_normalize__in2, 2.0));
    _pll_pll_normalize__pk = sqrt(_pll_pll_normalize__pk);
    if (_pll_pll_normalize__pk < 0.1) {
        _pll_pll_normalize__in2_pu = _pll_pll_normalize__in2 / 0.1;
    }
    else {
        _pll_pll_normalize__in2_pu = _pll_pll_normalize__in2 / _pll_pll_normalize__pk;
    }
    // Generated from the component: Current_ref.Product6
    _current_ref_product6__out = (_q_ref1__out * _pll_pll_abc_to_dq_lpf_q__out);
    // Generated from the component: squared_Vt.Product2
    _squared_vt_product2__out = (_pll_pll_abc_to_dq_lpf_q__out * _pll_pll_abc_to_dq_lpf_q__out);
    // Generated from the component: Subsystem1.Product2
    _subsystem1_product2__out = (_pll_2pi__out * _subsystem1_gain2__out);
    // Generated from the component: Subsystem1.Product1
    _subsystem1_product1__out = (_pll_2pi__out * _subsystem1_gain1__out);
    // Generated from the component: Subsystem2.Product2
    _subsystem2_product2__out = (_pll1_2pi__out * _subsystem2_gain2__out);
    // Generated from the component: Subsystem2.Product1
    _subsystem2_product1__out = (_pll1_2pi__out * _subsystem2_gain1__out);
    // Generated from the component: Ed1
    HIL_OutAO(0x4023, (float)_pll1_pll_abc_to_dq_lpf_d__out);
    // Generated from the component: squared_Vt1.Product1
    _squared_vt1_product1__out = (_pll1_pll_abc_to_dq_lpf_d__out * _pll1_pll_abc_to_dq_lpf_d__out);
    // Generated from the component: Current_ref1.Product4
    _current_ref1_product4__out = (_pll1_pll_abc_to_dq_lpf_d__out * _q_ref2__out);
    // Generated from the component: Eq1
    HIL_OutAO(0x4027, (float)_pll1_pll_abc_to_dq_lpf_q__out);
    // Generated from the component: squared_Vt1.Product2
    _squared_vt1_product2__out = (_pll1_pll_abc_to_dq_lpf_q__out * _pll1_pll_abc_to_dq_lpf_q__out);
    // Generated from the component: PLL1.PLL.normalize
    _pll1_pll_normalize__in1 = _pll1_pll_abc_to_dq_lpf_d__out;
    _pll1_pll_normalize__in2 = _pll1_pll_abc_to_dq_lpf_q__out;
    _pll1_pll_normalize__pk = (powf(_pll1_pll_normalize__in1, 2.0) + powf(_pll1_pll_normalize__in2, 2.0));
    _pll1_pll_normalize__pk = sqrt(_pll1_pll_normalize__pk);
    if (_pll1_pll_normalize__pk < 0.1) {
        _pll1_pll_normalize__in2_pu = _pll1_pll_normalize__in2 / 0.1;
    }
    else {
        _pll1_pll_normalize__in2_pu = _pll1_pll_normalize__in2 / _pll1_pll_normalize__pk;
    }
    // Generated from the component: Current_ref1.Product6
    _current_ref1_product6__out = (_q_ref2__out * _pll1_pll_abc_to_dq_lpf_q__out);
    // Generated from the component: Subsystem3.Product2
    _subsystem3_product2__out = (_pll2_2pi__out * _subsystem3_gain2__out);
    // Generated from the component: Subsystem3.Product1
    _subsystem3_product1__out = (_pll2_2pi__out * _subsystem3_gain1__out);
    // Generated from the component: Current_ref2.Product6
    _current_ref2_product6__out = (_q_ref3__out * _pll2_pll_abc_to_dq_lpf_q__out);
    // Generated from the component: Eq2
    HIL_OutAO(0x4028, (float)_pll2_pll_abc_to_dq_lpf_q__out);
    // Generated from the component: squared_Vt2.Product2
    _squared_vt2_product2__out = (_pll2_pll_abc_to_dq_lpf_q__out * _pll2_pll_abc_to_dq_lpf_q__out);
    // Generated from the component: PLL2.PLL.normalize
    _pll2_pll_normalize__in1 = _pll2_pll_abc_to_dq_lpf_d__out;
    _pll2_pll_normalize__in2 = _pll2_pll_abc_to_dq_lpf_q__out;
    _pll2_pll_normalize__pk = (powf(_pll2_pll_normalize__in1, 2.0) + powf(_pll2_pll_normalize__in2, 2.0));
    _pll2_pll_normalize__pk = sqrt(_pll2_pll_normalize__pk);
    if (_pll2_pll_normalize__pk < 0.1) {
        _pll2_pll_normalize__in2_pu = _pll2_pll_normalize__in2 / 0.1;
    }
    else {
        _pll2_pll_normalize__in2_pu = _pll2_pll_normalize__in2 / _pll2_pll_normalize__pk;
    }
    // Generated from the component: squared_Vt2.Product1
    _squared_vt2_product1__out = (_pll2_pll_abc_to_dq_lpf_d__out * _pll2_pll_abc_to_dq_lpf_d__out);
    // Generated from the component: Current_ref2.Product4
    _current_ref2_product4__out = (_pll2_pll_abc_to_dq_lpf_d__out * _q_ref3__out);
    // Generated from the component: Ed2
    HIL_OutAO(0x4024, (float)_pll2_pll_abc_to_dq_lpf_d__out);
    // Generated from the component: P_ref3.RegD_sys.regD
    HIL_OutAO(0x403e, (float)_p_ref3_regd_sys_product2__out);
    // Generated from the component: P_ref3.RegD_act3
    HIL_OutAO(0x403a, (float)_p_ref3_regd_sys_product2__out);
    // Generated from the component: P_ref3.Product3
    _p_ref3_product3__out = (_p_ref3_regd_sys_product2__out * _p_ref3_sum4__out);
    // Generated from the component: P_ref1.Product3
    _p_ref1_product3__out = (_p_ref1_regd_sys_product2__out * _p_ref1_sum4__out);
    // Generated from the component: P_ref1.RegD_sys.regD
    HIL_OutAO(0x4034, (float)_p_ref1_regd_sys_product2__out);
    // Generated from the component: P_ref1.RegD_act1
    HIL_OutAO(0x4030, (float)_p_ref1_regd_sys_product2__out);
    // Generated from the component: P_ref4.RegD_act4
    HIL_OutAO(0x403f, (float)_p_ref4_regd_sys_product2__out);
    // Generated from the component: P_ref4.Product3
    _p_ref4_product3__out = (_p_ref4_regd_sys_product2__out * _p_ref4_sum4__out);
    // Generated from the component: P_ref4.RegD_sys.regD
    HIL_OutAO(0x4043, (float)_p_ref4_regd_sys_product2__out);
    // Generated from the component: P_ref2.RegD_sys.regD
    HIL_OutAO(0x4039, (float)_p_ref2_regd_sys_product2__out);
    // Generated from the component: P_ref2.RegD_act2
    HIL_OutAO(0x4035, (float)_p_ref2_regd_sys_product2__out);
    // Generated from the component: P_ref2.Product3
    _p_ref2_product3__out = (_p_ref2_regd_sys_product2__out * _p_ref2_sum4__out);
    // Generated from the component: Subsystem4.Sum5
    _subsystem4_sum5__out = _pll3_pll_abc_to_dq_lpf_d__out - _subsystem4_product1__out;
    // Generated from the component: Subsystem4.Sum6
    _subsystem4_sum6__out = _pll3_pll_abc_to_dq_lpf_q__out + _subsystem4_product2__out;
    // Generated from the component: squared_Vt3.Sum3
    _squared_vt3_sum3__out = _squared_vt3_product1__out + _squared_vt3_product2__out;
    // Generated from the component: PLL3.PLL.PID.Kd
    _pll3_pll_pid_kd__out = 1.0 * _pll3_pll_normalize__in2_pu;
    // Generated from the component: PLL3.PLL.PID.Kp
    _pll3_pll_pid_kp__out = 100.0 * _pll3_pll_normalize__in2_pu;
    // Generated from the component: PLL3.PLL.PID.Ki
    _pll3_pll_pid_ki__out = 3200.0 * _pll3_pll_normalize__in2_pu;
    // Generated from the component: PLL3.PLL.term_pk
    // Generated from the component: PLL.PLL.PID.Kd
    _pll_pll_pid_kd__out = 1.0 * _pll_pll_normalize__in2_pu;
    // Generated from the component: PLL.PLL.PID.Kp
    _pll_pll_pid_kp__out = 100.0 * _pll_pll_normalize__in2_pu;
    // Generated from the component: PLL.PLL.PID.Ki
    _pll_pll_pid_ki__out = 3200.0 * _pll_pll_normalize__in2_pu;
    // Generated from the component: PLL.PLL.term_pk
    // Generated from the component: squared_Vt.Sum3
    _squared_vt_sum3__out = _squared_vt_product1__out + _squared_vt_product2__out;
    // Generated from the component: Subsystem1.Sum6
    _subsystem1_sum6__out = _pll_pll_abc_to_dq_lpf_q__out + _subsystem1_product2__out;
    // Generated from the component: Subsystem1.Sum5
    _subsystem1_sum5__out = _pll_pll_abc_to_dq_lpf_d__out - _subsystem1_product1__out;
    // Generated from the component: Subsystem2.Sum6
    _subsystem2_sum6__out = _pll1_pll_abc_to_dq_lpf_q__out + _subsystem2_product2__out;
    // Generated from the component: Subsystem2.Sum5
    _subsystem2_sum5__out = _pll1_pll_abc_to_dq_lpf_d__out - _subsystem2_product1__out;
    // Generated from the component: squared_Vt1.Sum3
    _squared_vt1_sum3__out = _squared_vt1_product1__out + _squared_vt1_product2__out;
    // Generated from the component: PLL1.PLL.PID.Ki
    _pll1_pll_pid_ki__out = 3200.0 * _pll1_pll_normalize__in2_pu;
    // Generated from the component: PLL1.PLL.PID.Kp
    _pll1_pll_pid_kp__out = 100.0 * _pll1_pll_normalize__in2_pu;
    // Generated from the component: PLL1.PLL.PID.Kd
    _pll1_pll_pid_kd__out = 1.0 * _pll1_pll_normalize__in2_pu;
    // Generated from the component: PLL1.PLL.term_pk
    // Generated from the component: Subsystem3.Sum6
    _subsystem3_sum6__out = _pll2_pll_abc_to_dq_lpf_q__out + _subsystem3_product2__out;
    // Generated from the component: Subsystem3.Sum5
    _subsystem3_sum5__out = _pll2_pll_abc_to_dq_lpf_d__out - _subsystem3_product1__out;
    // Generated from the component: PLL2.PLL.PID.Kp
    _pll2_pll_pid_kp__out = 100.0 * _pll2_pll_normalize__in2_pu;
    // Generated from the component: PLL2.PLL.term_pk
    // Generated from the component: PLL2.PLL.PID.Ki
    _pll2_pll_pid_ki__out = 3200.0 * _pll2_pll_normalize__in2_pu;
    // Generated from the component: PLL2.PLL.PID.Kd
    _pll2_pll_pid_kd__out = 1.0 * _pll2_pll_normalize__in2_pu;
    // Generated from the component: squared_Vt2.Sum3
    _squared_vt2_sum3__out = _squared_vt2_product1__out + _squared_vt2_product2__out;
    // Generated from the component: P_ref3.Hold after regulation
    _p_ref3_hold_after_regulation__regulate = _p_ref3_product3__out;
    _p_ref3_hold_after_regulation__out = _p_ref3_hold_after_regulation__var;
    // Generated from the component: P_ref3.Sum7
    _p_ref3_sum7__out = _p_ref3_product3__out + _p_ref3_capacity_min__out;
    // Generated from the component: P_ref1.Sum7
    _p_ref1_sum7__out = _p_ref1_product3__out + _p_ref1_capacity_min__out;
    // Generated from the component: P_ref1.Hold after regulation
    _p_ref1_hold_after_regulation__regulate = _p_ref1_product3__out;
    _p_ref1_hold_after_regulation__out = _p_ref1_hold_after_regulation__var;
    // Generated from the component: P_ref4.Hold after regulation
    _p_ref4_hold_after_regulation__regulate = _p_ref4_product3__out;
    _p_ref4_hold_after_regulation__out = _p_ref4_hold_after_regulation__var;
    // Generated from the component: P_ref4.Sum7
    _p_ref4_sum7__out = _p_ref4_product3__out + _p_ref4_capacity_min__out;
    // Generated from the component: P_ref2.Sum7
    _p_ref2_sum7__out = _p_ref2_product3__out + _p_ref2_capacity_min__out;
    // Generated from the component: P_ref2.Hold after regulation
    _p_ref2_hold_after_regulation__regulate = _p_ref2_product3__out;
    _p_ref2_hold_after_regulation__out = _p_ref2_hold_after_regulation__var;
    // Generated from the component: Subsystem4.Product3
    _subsystem4_product3__out = (_subsystem4_sum5__out) * 1.0 / (_subsystem4_gain3__out);
    // Generated from the component: Subsystem4.Product4
    _subsystem4_product4__out = (_subsystem4_sum6__out) * 1.0 / (_subsystem4_gain3__out);
    // Generated from the component: Current_ref3.Comparator1
    if (_squared_vt3_sum3__out < _current_ref3_limit_zero__out) {
        _current_ref3_comparator1__out = 0;
    } else if (_squared_vt3_sum3__out > _current_ref3_limit_zero__out) {
        _current_ref3_comparator1__out = 1;
    } else {
        _current_ref3_comparator1__out = _current_ref3_comparator1__state;
    }
    // Generated from the component: Current_ref3.Et_sqr
    HIL_OutAO(0x401f, (float)_squared_vt3_sum3__out);
    // Generated from the component: PLL3.PLL.PID.Sum8
    _pll3_pll_pid_sum8__out = _pll3_pll_pid_kd__out - _pll3_pll_pid_integrator2__out;
    // Generated from the component: PLL.PLL.PID.Sum8
    _pll_pll_pid_sum8__out = _pll_pll_pid_kd__out - _pll_pll_pid_integrator2__out;
    // Generated from the component: Current_ref.Et_sqr
    HIL_OutAO(0x4016, (float)_squared_vt_sum3__out);
    // Generated from the component: Current_ref.Comparator1
    if (_squared_vt_sum3__out < _current_ref_limit_zero__out) {
        _current_ref_comparator1__out = 0;
    } else if (_squared_vt_sum3__out > _current_ref_limit_zero__out) {
        _current_ref_comparator1__out = 1;
    } else {
        _current_ref_comparator1__out = _current_ref_comparator1__state;
    }
    // Generated from the component: Subsystem1.Product4
    _subsystem1_product4__out = (_subsystem1_sum6__out) * 1.0 / (_subsystem1_gain3__out);
    // Generated from the component: Subsystem1.Product3
    _subsystem1_product3__out = (_subsystem1_sum5__out) * 1.0 / (_subsystem1_gain3__out);
    // Generated from the component: Subsystem2.Product4
    _subsystem2_product4__out = (_subsystem2_sum6__out) * 1.0 / (_subsystem2_gain3__out);
    // Generated from the component: Subsystem2.Product3
    _subsystem2_product3__out = (_subsystem2_sum5__out) * 1.0 / (_subsystem2_gain3__out);
    // Generated from the component: Current_ref1.Comparator1
    if (_squared_vt1_sum3__out < _current_ref1_limit_zero__out) {
        _current_ref1_comparator1__out = 0;
    } else if (_squared_vt1_sum3__out > _current_ref1_limit_zero__out) {
        _current_ref1_comparator1__out = 1;
    } else {
        _current_ref1_comparator1__out = _current_ref1_comparator1__state;
    }
    // Generated from the component: Current_ref1.Et_sqr
    HIL_OutAO(0x4019, (float)_squared_vt1_sum3__out);
    // Generated from the component: PLL1.PLL.PID.Sum8
    _pll1_pll_pid_sum8__out = _pll1_pll_pid_kd__out - _pll1_pll_pid_integrator2__out;
    // Generated from the component: Subsystem3.Product4
    _subsystem3_product4__out = (_subsystem3_sum6__out) * 1.0 / (_subsystem3_gain3__out);
    // Generated from the component: Subsystem3.Product3
    _subsystem3_product3__out = (_subsystem3_sum5__out) * 1.0 / (_subsystem3_gain3__out);
    // Generated from the component: PLL2.PLL.PID.Sum8
    _pll2_pll_pid_sum8__out = _pll2_pll_pid_kd__out - _pll2_pll_pid_integrator2__out;
    // Generated from the component: Current_ref2.Et_sqr
    HIL_OutAO(0x401c, (float)_squared_vt2_sum3__out);
    // Generated from the component: Current_ref2.Comparator1
    if (_squared_vt2_sum3__out < _current_ref2_limit_zero__out) {
        _current_ref2_comparator1__out = 0;
    } else if (_squared_vt2_sum3__out > _current_ref2_limit_zero__out) {
        _current_ref2_comparator1__out = 1;
    } else {
        _current_ref2_comparator1__out = _current_ref2_comparator1__state;
    }
    // Generated from the component: P_ref3.limit ramp rate
    _p_ref3_limit_ramp_rate__in = _p_ref3_sum7__out;
    _p_ref3_limit_ramp_rate__initial = _p_ref3_gain1__out;
    _p_ref3_limit_ramp_rate__regulate = _p_ref3_hold_after_regulation__out;
    _p_ref3_limit_ramp_rate__out = _p_ref3_limit_ramp_rate__var;
    // Generated from the component: P_ref1.limit ramp rate
    _p_ref1_limit_ramp_rate__in = _p_ref1_sum7__out;
    _p_ref1_limit_ramp_rate__initial = _p_ref1_gain1__out;
    _p_ref1_limit_ramp_rate__regulate = _p_ref1_hold_after_regulation__out;
    _p_ref1_limit_ramp_rate__out = _p_ref1_limit_ramp_rate__var;
    // Generated from the component: P_ref4.limit ramp rate
    _p_ref4_limit_ramp_rate__in = _p_ref4_sum7__out;
    _p_ref4_limit_ramp_rate__initial = _p_ref4_gain1__out;
    _p_ref4_limit_ramp_rate__regulate = _p_ref4_hold_after_regulation__out;
    _p_ref4_limit_ramp_rate__out = _p_ref4_limit_ramp_rate__var;
    // Generated from the component: P_ref2.limit ramp rate
    _p_ref2_limit_ramp_rate__in = _p_ref2_sum7__out;
    _p_ref2_limit_ramp_rate__initial = _p_ref2_gain1__out;
    _p_ref2_limit_ramp_rate__regulate = _p_ref2_hold_after_regulation__out;
    _p_ref2_limit_ramp_rate__out = _p_ref2_limit_ramp_rate__var;
    // Generated from the component: Current_ref3.Signal switch1
    _current_ref3_signal_switch1__out = (_current_ref3_comparator1__out < 0.5f) ? _current_ref3_one__out : _squared_vt3_sum3__out;
    // Generated from the component: PLL3.PLL.PID.Gain1
    _pll3_pll_pid_gain1__out = 714.2857 * _pll3_pll_pid_sum8__out;
    // Generated from the component: PLL.PLL.PID.Gain1
    _pll_pll_pid_gain1__out = 714.2857 * _pll_pll_pid_sum8__out;
    // Generated from the component: Current_ref.Signal switch1
    _current_ref_signal_switch1__out = (_current_ref_comparator1__out < 0.5f) ? _current_ref_one__out : _squared_vt_sum3__out;
    // Generated from the component: Current_ref1.Signal switch1
    _current_ref1_signal_switch1__out = (_current_ref1_comparator1__out < 0.5f) ? _current_ref1_one__out : _squared_vt1_sum3__out;
    // Generated from the component: PLL1.PLL.PID.Gain1
    _pll1_pll_pid_gain1__out = 714.2857 * _pll1_pll_pid_sum8__out;
    // Generated from the component: PLL2.PLL.PID.Gain1
    _pll2_pll_pid_gain1__out = 714.2857 * _pll2_pll_pid_sum8__out;
    // Generated from the component: Current_ref2.Signal switch1
    _current_ref2_signal_switch1__out = (_current_ref2_comparator1__out < 0.5f) ? _current_ref2_one__out : _squared_vt2_sum3__out;
    // Generated from the component: Current_ref2.Product5
    _current_ref2_product5__out = (_p_ref3_limit_ramp_rate__out * _pll2_pll_abc_to_dq_lpf_d__out);
    // Generated from the component: Pref3
    HIL_OutAO(0x4048, (float)_p_ref3_limit_ramp_rate__out);
    // Generated from the component: Current_ref2.Pref_probe
    HIL_OutAO(0x401e, (float)_p_ref3_limit_ramp_rate__out);
    // Generated from the component: Current_ref2.Product3
    _current_ref2_product3__out = (_pll2_pll_abc_to_dq_lpf_q__out * _p_ref3_limit_ramp_rate__out);
    // Generated from the component: Current_ref.Pref_probe
    HIL_OutAO(0x4018, (float)_p_ref1_limit_ramp_rate__out);
    // Generated from the component: Current_ref.Product3
    _current_ref_product3__out = (_pll_pll_abc_to_dq_lpf_q__out * _p_ref1_limit_ramp_rate__out);
    // Generated from the component: Pref1
    HIL_OutAO(0x4046, (float)_p_ref1_limit_ramp_rate__out);
    // Generated from the component: Current_ref.Product5
    _current_ref_product5__out = (_p_ref1_limit_ramp_rate__out * _pll_pll_abc_to_dq_lpf_d__out);
    // Generated from the component: Pref4
    HIL_OutAO(0x4049, (float)_p_ref4_limit_ramp_rate__out);
    // Generated from the component: Current_ref3.Product3
    _current_ref3_product3__out = (_pll3_pll_abc_to_dq_lpf_q__out * _p_ref4_limit_ramp_rate__out);
    // Generated from the component: Current_ref3.Product5
    _current_ref3_product5__out = (_p_ref4_limit_ramp_rate__out * _pll3_pll_abc_to_dq_lpf_d__out);
    // Generated from the component: Current_ref3.Pref_probe
    HIL_OutAO(0x4021, (float)_p_ref4_limit_ramp_rate__out);
    // Generated from the component: Current_ref1.Product3
    _current_ref1_product3__out = (_pll1_pll_abc_to_dq_lpf_q__out * _p_ref2_limit_ramp_rate__out);
    // Generated from the component: Pref2
    HIL_OutAO(0x4047, (float)_p_ref2_limit_ramp_rate__out);
    // Generated from the component: Current_ref1.Product5
    _current_ref1_product5__out = (_p_ref2_limit_ramp_rate__out * _pll1_pll_abc_to_dq_lpf_d__out);
    // Generated from the component: Current_ref1.Pref_probe
    HIL_OutAO(0x401b, (float)_p_ref2_limit_ramp_rate__out);
    // Generated from the component: Current_ref3.Et_sqr_res
    HIL_OutAO(0x4020, (float)_current_ref3_signal_switch1__out);
    // Generated from the component: PLL3.PLL.PID.Sum5
    _pll3_pll_pid_sum5__out = _pll3_pll_pid_kp__out + _pll3_pll_pid_gain1__out + _pll3_pll_pid_integrator1__out;
    // Generated from the component: PLL.PLL.PID.Sum5
    _pll_pll_pid_sum5__out = _pll_pll_pid_kp__out + _pll_pll_pid_gain1__out + _pll_pll_pid_integrator1__out;
    // Generated from the component: Current_ref.Et_sqr_res
    HIL_OutAO(0x4017, (float)_current_ref_signal_switch1__out);
    // Generated from the component: Current_ref1.Et_sqr_res
    HIL_OutAO(0x401a, (float)_current_ref1_signal_switch1__out);
    // Generated from the component: PLL1.PLL.PID.Sum5
    _pll1_pll_pid_sum5__out = _pll1_pll_pid_kp__out + _pll1_pll_pid_gain1__out + _pll1_pll_pid_integrator1__out;
    // Generated from the component: PLL2.PLL.PID.Sum5
    _pll2_pll_pid_sum5__out = _pll2_pll_pid_kp__out + _pll2_pll_pid_gain1__out + _pll2_pll_pid_integrator1__out;
    // Generated from the component: Current_ref2.Et_sqr_res
    HIL_OutAO(0x401d, (float)_current_ref2_signal_switch1__out);
    // Generated from the component: Current_ref2.Sum4
    _current_ref2_sum4__out = _current_ref2_product5__out + _current_ref2_product6__out;
    // Generated from the component: Current_ref2.Sum3
    _current_ref2_sum3__out = _current_ref2_product3__out - _current_ref2_product4__out;
    // Generated from the component: Current_ref.Sum3
    _current_ref_sum3__out = _current_ref_product3__out - _current_ref_product4__out;
    // Generated from the component: Current_ref.Sum4
    _current_ref_sum4__out = _current_ref_product5__out + _current_ref_product6__out;
    // Generated from the component: Current_ref3.Sum3
    _current_ref3_sum3__out = _current_ref3_product3__out - _current_ref3_product4__out;
    // Generated from the component: Current_ref3.Sum4
    _current_ref3_sum4__out = _current_ref3_product5__out + _current_ref3_product6__out;
    // Generated from the component: Current_ref1.Sum3
    _current_ref1_sum3__out = _current_ref1_product3__out - _current_ref1_product4__out;
    // Generated from the component: Current_ref1.Sum4
    _current_ref1_sum4__out = _current_ref1_product5__out + _current_ref1_product6__out;
    // Generated from the component: PLL3.PLL.PID.Limit1
    if (_pll3_pll_pid_sum5__out > 10000.0) {
        _pll3_pll_pid_limit1__out = 10000.0;
    } else if (_pll3_pll_pid_sum5__out < -10000.0) {
        _pll3_pll_pid_limit1__out = -10000.0;
    } else {
        _pll3_pll_pid_limit1__out = _pll3_pll_pid_sum5__out;
    }
    // Generated from the component: PLL.PLL.PID.Limit1
    if (_pll_pll_pid_sum5__out > 10000.0) {
        _pll_pll_pid_limit1__out = 10000.0;
    } else if (_pll_pll_pid_sum5__out < -10000.0) {
        _pll_pll_pid_limit1__out = -10000.0;
    } else {
        _pll_pll_pid_limit1__out = _pll_pll_pid_sum5__out;
    }
    // Generated from the component: PLL1.PLL.PID.Limit1
    if (_pll1_pll_pid_sum5__out > 10000.0) {
        _pll1_pll_pid_limit1__out = 10000.0;
    } else if (_pll1_pll_pid_sum5__out < -10000.0) {
        _pll1_pll_pid_limit1__out = -10000.0;
    } else {
        _pll1_pll_pid_limit1__out = _pll1_pll_pid_sum5__out;
    }
    // Generated from the component: PLL2.PLL.PID.Limit1
    if (_pll2_pll_pid_sum5__out > 10000.0) {
        _pll2_pll_pid_limit1__out = 10000.0;
    } else if (_pll2_pll_pid_sum5__out < -10000.0) {
        _pll2_pll_pid_limit1__out = -10000.0;
    } else {
        _pll2_pll_pid_limit1__out = _pll2_pll_pid_sum5__out;
    }
    // Generated from the component: Current_ref2.Product2
    _current_ref2_product2__out = (_current_ref2_sum4__out) * 1.0 / (_current_ref2_signal_switch1__out);
    // Generated from the component: Current_ref2.Product1
    _current_ref2_product1__out = (_current_ref2_sum3__out) * 1.0 / (_current_ref2_signal_switch1__out);
    // Generated from the component: Current_ref.Product1
    _current_ref_product1__out = (_current_ref_sum3__out) * 1.0 / (_current_ref_signal_switch1__out);
    // Generated from the component: Current_ref.Product2
    _current_ref_product2__out = (_current_ref_sum4__out) * 1.0 / (_current_ref_signal_switch1__out);
    // Generated from the component: Current_ref3.Product1
    _current_ref3_product1__out = (_current_ref3_sum3__out) * 1.0 / (_current_ref3_signal_switch1__out);
    // Generated from the component: Current_ref3.Product2
    _current_ref3_product2__out = (_current_ref3_sum4__out) * 1.0 / (_current_ref3_signal_switch1__out);
    // Generated from the component: Current_ref1.Product1
    _current_ref1_product1__out = (_current_ref1_sum3__out) * 1.0 / (_current_ref1_signal_switch1__out);
    // Generated from the component: Current_ref1.Product2
    _current_ref1_product2__out = (_current_ref1_sum4__out) * 1.0 / (_current_ref1_signal_switch1__out);
    // Generated from the component: PLL3.PLL.integrator
    _pll3_pll_integrator__in = _pll3_pll_pid_limit1__out;
    _pll3_pll_integrator__out += 0.0002 * _pll3_pll_integrator__in;
    if (_pll3_pll_integrator__in >= 0.0) {
        if (_pll3_pll_integrator__out >= 6.283185307179586) {
            _pll3_pll_integrator__out -= 6.283185307179586;
        }
    }
    else {
        if (_pll3_pll_integrator__out <= -6.283185307179586) {
            _pll3_pll_integrator__out += 6.283185307179586;
        }
    }
    // Generated from the component: PLL3.PLL.PID.Sum6
    _pll3_pll_pid_sum6__out =  - _pll3_pll_pid_sum5__out + _pll3_pll_pid_limit1__out;
    // Generated from the component: PLL3.PLL.Rate Limiter1
    if (_pll3_pll_rate_limiter1__first_step) {
        _pll3_pll_rate_limiter1__out = _pll3_pll_pid_limit1__out;
    } else {
        _pll3_pll_rate_limiter1__out = _pll3_pll_pid_limit1__out;
        _pll3_pll_rate_limiter1__in_rate = _pll3_pll_pid_limit1__out - _pll3_pll_rate_limiter1__prev_out;
        if (_pll3_pll_rate_limiter1__in_rate > 0.015079644737231007) {
            _pll3_pll_rate_limiter1__out = _pll3_pll_rate_limiter1__prev_out + (0.015079644737231007);
        }
        if (_pll3_pll_rate_limiter1__in_rate < -0.015079644737231007) {
            _pll3_pll_rate_limiter1__out = _pll3_pll_rate_limiter1__prev_out + (-0.015079644737231007);
        }
    }
    // Generated from the component: PLL.PLL.PID.Sum6
    _pll_pll_pid_sum6__out =  - _pll_pll_pid_sum5__out + _pll_pll_pid_limit1__out;
    // Generated from the component: PLL.PLL.Rate Limiter1
    if (_pll_pll_rate_limiter1__first_step) {
        _pll_pll_rate_limiter1__out = _pll_pll_pid_limit1__out;
    } else {
        _pll_pll_rate_limiter1__out = _pll_pll_pid_limit1__out;
        _pll_pll_rate_limiter1__in_rate = _pll_pll_pid_limit1__out - _pll_pll_rate_limiter1__prev_out;
        if (_pll_pll_rate_limiter1__in_rate > 0.015079644737231007) {
            _pll_pll_rate_limiter1__out = _pll_pll_rate_limiter1__prev_out + (0.015079644737231007);
        }
        if (_pll_pll_rate_limiter1__in_rate < -0.015079644737231007) {
            _pll_pll_rate_limiter1__out = _pll_pll_rate_limiter1__prev_out + (-0.015079644737231007);
        }
    }
    // Generated from the component: PLL.PLL.integrator
    _pll_pll_integrator__in = _pll_pll_pid_limit1__out;
    _pll_pll_integrator__out += 0.0002 * _pll_pll_integrator__in;
    if (_pll_pll_integrator__in >= 0.0) {
        if (_pll_pll_integrator__out >= 6.283185307179586) {
            _pll_pll_integrator__out -= 6.283185307179586;
        }
    }
    else {
        if (_pll_pll_integrator__out <= -6.283185307179586) {
            _pll_pll_integrator__out += 6.283185307179586;
        }
    }
    // Generated from the component: PLL1.PLL.PID.Sum6
    _pll1_pll_pid_sum6__out =  - _pll1_pll_pid_sum5__out + _pll1_pll_pid_limit1__out;
    // Generated from the component: PLL1.PLL.integrator
    _pll1_pll_integrator__in = _pll1_pll_pid_limit1__out;
    _pll1_pll_integrator__out += 0.0002 * _pll1_pll_integrator__in;
    if (_pll1_pll_integrator__in >= 0.0) {
        if (_pll1_pll_integrator__out >= 6.283185307179586) {
            _pll1_pll_integrator__out -= 6.283185307179586;
        }
    }
    else {
        if (_pll1_pll_integrator__out <= -6.283185307179586) {
            _pll1_pll_integrator__out += 6.283185307179586;
        }
    }
    // Generated from the component: PLL1.PLL.Rate Limiter1
    if (_pll1_pll_rate_limiter1__first_step) {
        _pll1_pll_rate_limiter1__out = _pll1_pll_pid_limit1__out;
    } else {
        _pll1_pll_rate_limiter1__out = _pll1_pll_pid_limit1__out;
        _pll1_pll_rate_limiter1__in_rate = _pll1_pll_pid_limit1__out - _pll1_pll_rate_limiter1__prev_out;
        if (_pll1_pll_rate_limiter1__in_rate > 0.015079644737231007) {
            _pll1_pll_rate_limiter1__out = _pll1_pll_rate_limiter1__prev_out + (0.015079644737231007);
        }
        if (_pll1_pll_rate_limiter1__in_rate < -0.015079644737231007) {
            _pll1_pll_rate_limiter1__out = _pll1_pll_rate_limiter1__prev_out + (-0.015079644737231007);
        }
    }
    // Generated from the component: PLL2.PLL.Rate Limiter1
    if (_pll2_pll_rate_limiter1__first_step) {
        _pll2_pll_rate_limiter1__out = _pll2_pll_pid_limit1__out;
    } else {
        _pll2_pll_rate_limiter1__out = _pll2_pll_pid_limit1__out;
        _pll2_pll_rate_limiter1__in_rate = _pll2_pll_pid_limit1__out - _pll2_pll_rate_limiter1__prev_out;
        if (_pll2_pll_rate_limiter1__in_rate > 0.015079644737231007) {
            _pll2_pll_rate_limiter1__out = _pll2_pll_rate_limiter1__prev_out + (0.015079644737231007);
        }
        if (_pll2_pll_rate_limiter1__in_rate < -0.015079644737231007) {
            _pll2_pll_rate_limiter1__out = _pll2_pll_rate_limiter1__prev_out + (-0.015079644737231007);
        }
    }
    // Generated from the component: PLL2.PLL.integrator
    _pll2_pll_integrator__in = _pll2_pll_pid_limit1__out;
    _pll2_pll_integrator__out += 0.0002 * _pll2_pll_integrator__in;
    if (_pll2_pll_integrator__in >= 0.0) {
        if (_pll2_pll_integrator__out >= 6.283185307179586) {
            _pll2_pll_integrator__out -= 6.283185307179586;
        }
    }
    else {
        if (_pll2_pll_integrator__out <= -6.283185307179586) {
            _pll2_pll_integrator__out += 6.283185307179586;
        }
    }
    // Generated from the component: PLL2.PLL.PID.Sum6
    _pll2_pll_pid_sum6__out =  - _pll2_pll_pid_sum5__out + _pll2_pll_pid_limit1__out;
    // Generated from the component: Current_ref2.Gain2
    _current_ref2_gain2__out = 0.6666666666666666 * _current_ref2_product2__out;
    // Generated from the component: Current_ref2.Gain1
    _current_ref2_gain1__out = 0.6666666666666666 * _current_ref2_product1__out;
    // Generated from the component: Current_ref.Gain1
    _current_ref_gain1__out = 0.6666666666666666 * _current_ref_product1__out;
    // Generated from the component: Current_ref.Gain2
    _current_ref_gain2__out = 0.6666666666666666 * _current_ref_product2__out;
    // Generated from the component: Current_ref3.Gain1
    _current_ref3_gain1__out = 0.6666666666666666 * _current_ref3_product1__out;
    // Generated from the component: Current_ref3.Gain2
    _current_ref3_gain2__out = 0.6666666666666666 * _current_ref3_product2__out;
    // Generated from the component: Current_ref1.Gain1
    _current_ref1_gain1__out = 0.6666666666666666 * _current_ref1_product1__out;
    // Generated from the component: Current_ref1.Gain2
    _current_ref1_gain2__out = 0.6666666666666666 * _current_ref1_product2__out;
    // Generated from the component: PLL3.PLL.PID.Kb
    _pll3_pll_pid_kb__out = 1.0 * _pll3_pll_pid_sum6__out;
    // Generated from the component: PLL3.PLL.LPF.LPF
    _pll3_pll_lpf_lpf__a_sum = 0.0f;
    _pll3_pll_lpf_lpf__b_sum = 0.0f;
    _pll3_pll_lpf_lpf__delay_line_in = 0.0f;
    for (_pll3_pll_lpf_lpf__i = 0; _pll3_pll_lpf_lpf__i < 1; _pll3_pll_lpf_lpf__i++) {
        _pll3_pll_lpf_lpf__b_sum += _pll3_pll_lpf_lpf__b_coeff[_pll3_pll_lpf_lpf__i] * _pll3_pll_lpf_lpf__states[_pll3_pll_lpf_lpf__i + 1];
    }
    for (_pll3_pll_lpf_lpf__i = 1; _pll3_pll_lpf_lpf__i > 0; _pll3_pll_lpf_lpf__i--) {
        _pll3_pll_lpf_lpf__a_sum += _pll3_pll_lpf_lpf__a_coeff[_pll3_pll_lpf_lpf__i + 1] * _pll3_pll_lpf_lpf__states[_pll3_pll_lpf_lpf__i];
    }
    _pll3_pll_lpf_lpf__a_sum += _pll3_pll_lpf_lpf__states[0] * _pll3_pll_lpf_lpf__a_coeff[1];
    _pll3_pll_lpf_lpf__delay_line_in = _pll3_pll_rate_limiter1__out - _pll3_pll_lpf_lpf__a_sum;
    _pll3_pll_lpf_lpf__out = _pll3_pll_lpf_lpf__b_sum;
    // Generated from the component: PLL.PLL.PID.Kb
    _pll_pll_pid_kb__out = 1.0 * _pll_pll_pid_sum6__out;
    // Generated from the component: PLL.PLL.LPF.LPF
    _pll_pll_lpf_lpf__a_sum = 0.0f;
    _pll_pll_lpf_lpf__b_sum = 0.0f;
    _pll_pll_lpf_lpf__delay_line_in = 0.0f;
    for (_pll_pll_lpf_lpf__i = 0; _pll_pll_lpf_lpf__i < 1; _pll_pll_lpf_lpf__i++) {
        _pll_pll_lpf_lpf__b_sum += _pll_pll_lpf_lpf__b_coeff[_pll_pll_lpf_lpf__i] * _pll_pll_lpf_lpf__states[_pll_pll_lpf_lpf__i + 1];
    }
    for (_pll_pll_lpf_lpf__i = 1; _pll_pll_lpf_lpf__i > 0; _pll_pll_lpf_lpf__i--) {
        _pll_pll_lpf_lpf__a_sum += _pll_pll_lpf_lpf__a_coeff[_pll_pll_lpf_lpf__i + 1] * _pll_pll_lpf_lpf__states[_pll_pll_lpf_lpf__i];
    }
    _pll_pll_lpf_lpf__a_sum += _pll_pll_lpf_lpf__states[0] * _pll_pll_lpf_lpf__a_coeff[1];
    _pll_pll_lpf_lpf__delay_line_in = _pll_pll_rate_limiter1__out - _pll_pll_lpf_lpf__a_sum;
    _pll_pll_lpf_lpf__out = _pll_pll_lpf_lpf__b_sum;
    // Generated from the component: PLL1.PLL.PID.Kb
    _pll1_pll_pid_kb__out = 1.0 * _pll1_pll_pid_sum6__out;
    // Generated from the component: PLL1.PLL.LPF.LPF
    _pll1_pll_lpf_lpf__a_sum = 0.0f;
    _pll1_pll_lpf_lpf__b_sum = 0.0f;
    _pll1_pll_lpf_lpf__delay_line_in = 0.0f;
    for (_pll1_pll_lpf_lpf__i = 0; _pll1_pll_lpf_lpf__i < 1; _pll1_pll_lpf_lpf__i++) {
        _pll1_pll_lpf_lpf__b_sum += _pll1_pll_lpf_lpf__b_coeff[_pll1_pll_lpf_lpf__i] * _pll1_pll_lpf_lpf__states[_pll1_pll_lpf_lpf__i + 1];
    }
    for (_pll1_pll_lpf_lpf__i = 1; _pll1_pll_lpf_lpf__i > 0; _pll1_pll_lpf_lpf__i--) {
        _pll1_pll_lpf_lpf__a_sum += _pll1_pll_lpf_lpf__a_coeff[_pll1_pll_lpf_lpf__i + 1] * _pll1_pll_lpf_lpf__states[_pll1_pll_lpf_lpf__i];
    }
    _pll1_pll_lpf_lpf__a_sum += _pll1_pll_lpf_lpf__states[0] * _pll1_pll_lpf_lpf__a_coeff[1];
    _pll1_pll_lpf_lpf__delay_line_in = _pll1_pll_rate_limiter1__out - _pll1_pll_lpf_lpf__a_sum;
    _pll1_pll_lpf_lpf__out = _pll1_pll_lpf_lpf__b_sum;
    // Generated from the component: PLL2.PLL.LPF.LPF
    _pll2_pll_lpf_lpf__a_sum = 0.0f;
    _pll2_pll_lpf_lpf__b_sum = 0.0f;
    _pll2_pll_lpf_lpf__delay_line_in = 0.0f;
    for (_pll2_pll_lpf_lpf__i = 0; _pll2_pll_lpf_lpf__i < 1; _pll2_pll_lpf_lpf__i++) {
        _pll2_pll_lpf_lpf__b_sum += _pll2_pll_lpf_lpf__b_coeff[_pll2_pll_lpf_lpf__i] * _pll2_pll_lpf_lpf__states[_pll2_pll_lpf_lpf__i + 1];
    }
    for (_pll2_pll_lpf_lpf__i = 1; _pll2_pll_lpf_lpf__i > 0; _pll2_pll_lpf_lpf__i--) {
        _pll2_pll_lpf_lpf__a_sum += _pll2_pll_lpf_lpf__a_coeff[_pll2_pll_lpf_lpf__i + 1] * _pll2_pll_lpf_lpf__states[_pll2_pll_lpf_lpf__i];
    }
    _pll2_pll_lpf_lpf__a_sum += _pll2_pll_lpf_lpf__states[0] * _pll2_pll_lpf_lpf__a_coeff[1];
    _pll2_pll_lpf_lpf__delay_line_in = _pll2_pll_rate_limiter1__out - _pll2_pll_lpf_lpf__a_sum;
    _pll2_pll_lpf_lpf__out = _pll2_pll_lpf_lpf__b_sum;
    // Generated from the component: PLL2.PLL.PID.Kb
    _pll2_pll_pid_kb__out = 1.0 * _pll2_pll_pid_sum6__out;
    // Generated from the component: Signal switch6
    _signal_switch6__out = (_s_control_mode2__out < 0.5f) ? _xi_d_ref2__out : _current_ref2_gain2__out;
    // Generated from the component: Signal switch5
    _signal_switch5__out = (_s_control_mode2__out < 0.5f) ? _xi_q_ref2__out : _current_ref2_gain1__out;
    // Generated from the component: Signal switch2
    _signal_switch2__out = (_s_control_mode__out < 0.5f) ? _xi_q_ref__out : _current_ref_gain1__out;
    // Generated from the component: Signal switch1
    _signal_switch1__out = (_s_control_mode__out < 0.5f) ? _xi_d_ref__out : _current_ref_gain2__out;
    // Generated from the component: Signal switch7
    _signal_switch7__out = (_s_control_mode4__out < 0.5f) ? _xi_q_ref4__out : _current_ref3_gain1__out;
    // Generated from the component: Signal switch8
    _signal_switch8__out = (_s_control_mode4__out < 0.5f) ? _xi_d_ref4__out : _current_ref3_gain2__out;
    // Generated from the component: Signal switch3
    _signal_switch3__out = (_s_control_mode1__out < 0.5f) ? _xi_q_ref1__out : _current_ref1_gain1__out;
    // Generated from the component: Signal switch4
    _signal_switch4__out = (_s_control_mode1__out < 0.5f) ? _xi_d_ref1__out : _current_ref1_gain2__out;
    // Generated from the component: PLL3.PLL.PID.Sum7
    _pll3_pll_pid_sum7__out = _pll3_pll_pid_ki__out + _pll3_pll_pid_kb__out;
    // Generated from the component: PLL.PLL.PID.Sum7
    _pll_pll_pid_sum7__out = _pll_pll_pid_ki__out + _pll_pll_pid_kb__out;
    // Generated from the component: PLL1.PLL.PID.Sum7
    _pll1_pll_pid_sum7__out = _pll1_pll_pid_ki__out + _pll1_pll_pid_kb__out;
    // Generated from the component: PLL2.PLL.PID.Sum7
    _pll2_pll_pid_sum7__out = _pll2_pll_pid_ki__out + _pll2_pll_pid_kb__out;
    // Generated from the component: Subsystem3.Sum1
    _subsystem3_sum1__out =  - _current_abc_to_dq2_abc_to_dq1_alpha_beta_to_dq__d + _signal_switch6__out;
    // Generated from the component: Xi_d_ref_res2
    HIL_OutAO(0x4065, (float)_signal_switch6__out);
    // Generated from the component: Subsystem3.Sum2
    _subsystem3_sum2__out =  - _current_abc_to_dq2_abc_to_dq1_alpha_beta_to_dq__q + _signal_switch5__out;
    // Generated from the component: Xi_q_ref_res2
    HIL_OutAO(0x4069, (float)_signal_switch5__out);
    // Generated from the component: Xi_q_ref_res
    HIL_OutAO(0x4067, (float)_signal_switch2__out);
    // Generated from the component: Subsystem1.Sum2
    _subsystem1_sum2__out =  - _current_abc_to_dq_abc_to_dq1_alpha_beta_to_dq__q + _signal_switch2__out;
    // Generated from the component: Xi_d_ref_res
    HIL_OutAO(0x4063, (float)_signal_switch1__out);
    // Generated from the component: Subsystem1.Sum8
    _subsystem1_sum8__out = _signal_switch1__out - _current_abc_to_dq_abc_to_dq1_alpha_beta_to_dq__d;
    // Generated from the component: Subsystem4.Sum2
    _subsystem4_sum2__out =  - _current_abc_to_dq3_abc_to_dq1_alpha_beta_to_dq__q + _signal_switch7__out;
    // Generated from the component: Xi_q_ref_res4
    HIL_OutAO(0x406a, (float)_signal_switch7__out);
    // Generated from the component: Subsystem4.Sum1
    _subsystem4_sum1__out =  - _current_abc_to_dq3_abc_to_dq1_alpha_beta_to_dq__d + _signal_switch8__out;
    // Generated from the component: Xi_d_ref_res4
    HIL_OutAO(0x4066, (float)_signal_switch8__out);
    // Generated from the component: Xi_q_ref_res1
    HIL_OutAO(0x4068, (float)_signal_switch3__out);
    // Generated from the component: Subsystem2.Sum2
    _subsystem2_sum2__out =  - _current_abc_to_dq1_abc_to_dq1_alpha_beta_to_dq__q + _signal_switch3__out;
    // Generated from the component: Xi_d_ref_res1
    HIL_OutAO(0x4064, (float)_signal_switch4__out);
    // Generated from the component: Subsystem2.Sum1
    _subsystem2_sum1__out =  - _current_abc_to_dq1_abc_to_dq1_alpha_beta_to_dq__d + _signal_switch4__out;
    // Generated from the component: Subsystem3.PID controller1
    _subsystem3_pid_controller1__pi_reg_out_int = _subsystem3_pid_controller1__integrator_state + 0.015 * _subsystem3_sum1__out;
    if (_subsystem3_pid_controller1__pi_reg_out_int < -1.0) {
        _subsystem3_pid_controller1__out = -1.0;
        _subsystem3_pid_controller1__av_active = 1;
    } else if (_subsystem3_pid_controller1__pi_reg_out_int > 1.0) {
        _subsystem3_pid_controller1__out = 1.0;
        _subsystem3_pid_controller1__av_active = 1;
    } else {
        _subsystem3_pid_controller1__out = _subsystem3_pid_controller1__pi_reg_out_int;
        _subsystem3_pid_controller1__av_active = 0;
    }
    // Generated from the component: Subsystem3.PID controller2
    _subsystem3_pid_controller2__pi_reg_out_int = _subsystem3_pid_controller2__integrator_state + 0.015 * _subsystem3_sum2__out;
    if (_subsystem3_pid_controller2__pi_reg_out_int < -1.0) {
        _subsystem3_pid_controller2__out = -1.0;
        _subsystem3_pid_controller2__av_active = 1;
    } else if (_subsystem3_pid_controller2__pi_reg_out_int > 1.0) {
        _subsystem3_pid_controller2__out = 1.0;
        _subsystem3_pid_controller2__av_active = 1;
    } else {
        _subsystem3_pid_controller2__out = _subsystem3_pid_controller2__pi_reg_out_int;
        _subsystem3_pid_controller2__av_active = 0;
    }
    // Generated from the component: Subsystem1.PID controller2
    _subsystem1_pid_controller2__pi_reg_out_int = _subsystem1_pid_controller2__integrator_state + 0.015 * _subsystem1_sum2__out;
    if (_subsystem1_pid_controller2__pi_reg_out_int < -1.0) {
        _subsystem1_pid_controller2__out = -1.0;
        _subsystem1_pid_controller2__av_active = 1;
    } else if (_subsystem1_pid_controller2__pi_reg_out_int > 1.0) {
        _subsystem1_pid_controller2__out = 1.0;
        _subsystem1_pid_controller2__av_active = 1;
    } else {
        _subsystem1_pid_controller2__out = _subsystem1_pid_controller2__pi_reg_out_int;
        _subsystem1_pid_controller2__av_active = 0;
    }
    // Generated from the component: Subsystem1.PID controller3
    _subsystem1_pid_controller3__pi_reg_out_int = _subsystem1_pid_controller3__integrator_state + 0.015 * _subsystem1_sum8__out;
    if (_subsystem1_pid_controller3__pi_reg_out_int < -1.0) {
        _subsystem1_pid_controller3__out = -1.0;
        _subsystem1_pid_controller3__av_active = 1;
    } else if (_subsystem1_pid_controller3__pi_reg_out_int > 1.0) {
        _subsystem1_pid_controller3__out = 1.0;
        _subsystem1_pid_controller3__av_active = 1;
    } else {
        _subsystem1_pid_controller3__out = _subsystem1_pid_controller3__pi_reg_out_int;
        _subsystem1_pid_controller3__av_active = 0;
    }
    // Generated from the component: Subsystem4.PID controller2
    _subsystem4_pid_controller2__pi_reg_out_int = _subsystem4_pid_controller2__integrator_state + 0.015 * _subsystem4_sum2__out;
    if (_subsystem4_pid_controller2__pi_reg_out_int < -1.0) {
        _subsystem4_pid_controller2__out = -1.0;
        _subsystem4_pid_controller2__av_active = 1;
    } else if (_subsystem4_pid_controller2__pi_reg_out_int > 1.0) {
        _subsystem4_pid_controller2__out = 1.0;
        _subsystem4_pid_controller2__av_active = 1;
    } else {
        _subsystem4_pid_controller2__out = _subsystem4_pid_controller2__pi_reg_out_int;
        _subsystem4_pid_controller2__av_active = 0;
    }
    // Generated from the component: Subsystem4.PID controller1
    _subsystem4_pid_controller1__pi_reg_out_int = _subsystem4_pid_controller1__integrator_state + 0.015 * _subsystem4_sum1__out;
    if (_subsystem4_pid_controller1__pi_reg_out_int < -1.0) {
        _subsystem4_pid_controller1__out = -1.0;
        _subsystem4_pid_controller1__av_active = 1;
    } else if (_subsystem4_pid_controller1__pi_reg_out_int > 1.0) {
        _subsystem4_pid_controller1__out = 1.0;
        _subsystem4_pid_controller1__av_active = 1;
    } else {
        _subsystem4_pid_controller1__out = _subsystem4_pid_controller1__pi_reg_out_int;
        _subsystem4_pid_controller1__av_active = 0;
    }
    // Generated from the component: Subsystem2.PID controller2
    _subsystem2_pid_controller2__pi_reg_out_int = _subsystem2_pid_controller2__integrator_state + 0.015 * _subsystem2_sum2__out;
    if (_subsystem2_pid_controller2__pi_reg_out_int < -1.0) {
        _subsystem2_pid_controller2__out = -1.0;
        _subsystem2_pid_controller2__av_active = 1;
    } else if (_subsystem2_pid_controller2__pi_reg_out_int > 1.0) {
        _subsystem2_pid_controller2__out = 1.0;
        _subsystem2_pid_controller2__av_active = 1;
    } else {
        _subsystem2_pid_controller2__out = _subsystem2_pid_controller2__pi_reg_out_int;
        _subsystem2_pid_controller2__av_active = 0;
    }
    // Generated from the component: Subsystem2.PID controller1
    _subsystem2_pid_controller1__pi_reg_out_int = _subsystem2_pid_controller1__integrator_state + 0.015 * _subsystem2_sum1__out;
    if (_subsystem2_pid_controller1__pi_reg_out_int < -1.0) {
        _subsystem2_pid_controller1__out = -1.0;
        _subsystem2_pid_controller1__av_active = 1;
    } else if (_subsystem2_pid_controller1__pi_reg_out_int > 1.0) {
        _subsystem2_pid_controller1__out = 1.0;
        _subsystem2_pid_controller1__av_active = 1;
    } else {
        _subsystem2_pid_controller1__out = _subsystem2_pid_controller1__pi_reg_out_int;
        _subsystem2_pid_controller1__av_active = 0;
    }
    // Generated from the component: Subsystem3.Sum3
    _subsystem3_sum3__out = _subsystem3_pid_controller1__out + _subsystem3_product3__out;
    // Generated from the component: Subsystem3.Sum7
    _subsystem3_sum7__out = _subsystem3_pid_controller2__out + _subsystem3_product4__out;
    // Generated from the component: Subsystem1.Sum7
    _subsystem1_sum7__out = _subsystem1_pid_controller2__out + _subsystem1_product4__out;
    // Generated from the component: Subsystem1.Sum3
    _subsystem1_sum3__out = _subsystem1_pid_controller3__out + _subsystem1_product3__out;
    // Generated from the component: Subsystem4.Sum7
    _subsystem4_sum7__out = _subsystem4_pid_controller2__out + _subsystem4_product4__out;
    // Generated from the component: Subsystem4.Sum3
    _subsystem4_sum3__out = _subsystem4_pid_controller1__out + _subsystem4_product3__out;
    // Generated from the component: Subsystem2.Sum7
    _subsystem2_sum7__out = _subsystem2_pid_controller2__out + _subsystem2_product4__out;
    // Generated from the component: Subsystem2.Sum3
    _subsystem2_sum3__out = _subsystem2_pid_controller1__out + _subsystem2_product3__out;
    // Generated from the component: Ud2
    HIL_OutAO(0x405a, (float)_subsystem3_sum3__out);
    // Generated from the component: dq to abc2.dq to abc1.dq to alpha beta
    _dq_to_abc2_dq_to_abc1_dq_to_alpha_beta__k1 = cos(_pll2_pll_unit_delay1__out);
    _dq_to_abc2_dq_to_abc1_dq_to_alpha_beta__k2 = sin(_pll2_pll_unit_delay1__out);
    _dq_to_abc2_dq_to_abc1_dq_to_alpha_beta__alpha = _dq_to_abc2_dq_to_abc1_dq_to_alpha_beta__k2 * _subsystem3_sum3__out + _dq_to_abc2_dq_to_abc1_dq_to_alpha_beta__k1 * _subsystem3_sum7__out;
    _dq_to_abc2_dq_to_abc1_dq_to_alpha_beta__beta = _dq_to_abc2_dq_to_abc1_dq_to_alpha_beta__k2 * _subsystem3_sum7__out - _dq_to_abc2_dq_to_abc1_dq_to_alpha_beta__k1 * _subsystem3_sum3__out;
    // Generated from the component: Uq2
    HIL_OutAO(0x405e, (float)_subsystem3_sum7__out);
    // Generated from the component: Uq
    HIL_OutAO(0x405c, (float)_subsystem1_sum7__out);
    // Generated from the component: Ud
    HIL_OutAO(0x4058, (float)_subsystem1_sum3__out);
    // Generated from the component: dq to abc.dq to abc1.dq to alpha beta
    _dq_to_abc_dq_to_abc1_dq_to_alpha_beta__k1 = cos(_pll_pll_unit_delay1__out);
    _dq_to_abc_dq_to_abc1_dq_to_alpha_beta__k2 = sin(_pll_pll_unit_delay1__out);
    _dq_to_abc_dq_to_abc1_dq_to_alpha_beta__alpha = _dq_to_abc_dq_to_abc1_dq_to_alpha_beta__k2 * _subsystem1_sum3__out + _dq_to_abc_dq_to_abc1_dq_to_alpha_beta__k1 * _subsystem1_sum7__out;
    _dq_to_abc_dq_to_abc1_dq_to_alpha_beta__beta = _dq_to_abc_dq_to_abc1_dq_to_alpha_beta__k2 * _subsystem1_sum7__out - _dq_to_abc_dq_to_abc1_dq_to_alpha_beta__k1 * _subsystem1_sum3__out;
    // Generated from the component: Uq4
    HIL_OutAO(0x405f, (float)_subsystem4_sum7__out);
    // Generated from the component: Ud4
    HIL_OutAO(0x405b, (float)_subsystem4_sum3__out);
    // Generated from the component: dq to abc3.dq to abc1.dq to alpha beta
    _dq_to_abc3_dq_to_abc1_dq_to_alpha_beta__k1 = cos(_pll3_pll_unit_delay1__out);
    _dq_to_abc3_dq_to_abc1_dq_to_alpha_beta__k2 = sin(_pll3_pll_unit_delay1__out);
    _dq_to_abc3_dq_to_abc1_dq_to_alpha_beta__alpha = _dq_to_abc3_dq_to_abc1_dq_to_alpha_beta__k2 * _subsystem4_sum3__out + _dq_to_abc3_dq_to_abc1_dq_to_alpha_beta__k1 * _subsystem4_sum7__out;
    _dq_to_abc3_dq_to_abc1_dq_to_alpha_beta__beta = _dq_to_abc3_dq_to_abc1_dq_to_alpha_beta__k2 * _subsystem4_sum7__out - _dq_to_abc3_dq_to_abc1_dq_to_alpha_beta__k1 * _subsystem4_sum3__out;
    // Generated from the component: Uq1
    HIL_OutAO(0x405d, (float)_subsystem2_sum7__out);
    // Generated from the component: dq to abc1.dq to abc1.dq to alpha beta
    _dq_to_abc1_dq_to_abc1_dq_to_alpha_beta__k1 = cos(_pll1_pll_unit_delay1__out);
    _dq_to_abc1_dq_to_abc1_dq_to_alpha_beta__k2 = sin(_pll1_pll_unit_delay1__out);
    _dq_to_abc1_dq_to_abc1_dq_to_alpha_beta__alpha = _dq_to_abc1_dq_to_abc1_dq_to_alpha_beta__k2 * _subsystem2_sum3__out + _dq_to_abc1_dq_to_abc1_dq_to_alpha_beta__k1 * _subsystem2_sum7__out;
    _dq_to_abc1_dq_to_abc1_dq_to_alpha_beta__beta = _dq_to_abc1_dq_to_abc1_dq_to_alpha_beta__k2 * _subsystem2_sum7__out - _dq_to_abc1_dq_to_abc1_dq_to_alpha_beta__k1 * _subsystem2_sum3__out;
    // Generated from the component: Ud1
    HIL_OutAO(0x4059, (float)_subsystem2_sum3__out);
    // Generated from the component: dq to abc2.dq to abc1.alpha beta to abc
    _dq_to_abc2_dq_to_abc1_alpha_beta_to_abc__A = 1 * _dq_to_abc2_o_ref__out;
    _dq_to_abc2_dq_to_abc1_alpha_beta_to_abc__B = _dq_to_abc2_dq_to_abc1_alpha_beta_to_abc__A - 0.5 * _dq_to_abc2_dq_to_abc1_dq_to_alpha_beta__alpha;
    _dq_to_abc2_dq_to_abc1_alpha_beta_to_abc__C = _dq_to_abc2_dq_to_abc1_alpha_beta_to_abc__B - 0.8660254037844386 * _dq_to_abc2_dq_to_abc1_dq_to_alpha_beta__beta;
    _dq_to_abc2_dq_to_abc1_alpha_beta_to_abc__B += 0.8660254037844386 * _dq_to_abc2_dq_to_abc1_dq_to_alpha_beta__beta;
    _dq_to_abc2_dq_to_abc1_alpha_beta_to_abc__A += 1 * _dq_to_abc2_dq_to_abc1_dq_to_alpha_beta__alpha;
    // Generated from the component: dq to abc.dq to abc1.alpha beta to abc
    _dq_to_abc_dq_to_abc1_alpha_beta_to_abc__A = 1 * _dq_to_abc_o_ref__out;
    _dq_to_abc_dq_to_abc1_alpha_beta_to_abc__B = _dq_to_abc_dq_to_abc1_alpha_beta_to_abc__A - 0.5 * _dq_to_abc_dq_to_abc1_dq_to_alpha_beta__alpha;
    _dq_to_abc_dq_to_abc1_alpha_beta_to_abc__C = _dq_to_abc_dq_to_abc1_alpha_beta_to_abc__B - 0.8660254037844386 * _dq_to_abc_dq_to_abc1_dq_to_alpha_beta__beta;
    _dq_to_abc_dq_to_abc1_alpha_beta_to_abc__B += 0.8660254037844386 * _dq_to_abc_dq_to_abc1_dq_to_alpha_beta__beta;
    _dq_to_abc_dq_to_abc1_alpha_beta_to_abc__A += 1 * _dq_to_abc_dq_to_abc1_dq_to_alpha_beta__alpha;
    // Generated from the component: dq to abc3.dq to abc1.alpha beta to abc
    _dq_to_abc3_dq_to_abc1_alpha_beta_to_abc__A = 1 * _dq_to_abc3_o_ref__out;
    _dq_to_abc3_dq_to_abc1_alpha_beta_to_abc__B = _dq_to_abc3_dq_to_abc1_alpha_beta_to_abc__A - 0.5 * _dq_to_abc3_dq_to_abc1_dq_to_alpha_beta__alpha;
    _dq_to_abc3_dq_to_abc1_alpha_beta_to_abc__C = _dq_to_abc3_dq_to_abc1_alpha_beta_to_abc__B - 0.8660254037844386 * _dq_to_abc3_dq_to_abc1_dq_to_alpha_beta__beta;
    _dq_to_abc3_dq_to_abc1_alpha_beta_to_abc__B += 0.8660254037844386 * _dq_to_abc3_dq_to_abc1_dq_to_alpha_beta__beta;
    _dq_to_abc3_dq_to_abc1_alpha_beta_to_abc__A += 1 * _dq_to_abc3_dq_to_abc1_dq_to_alpha_beta__alpha;
    // Generated from the component: dq to abc1.dq to abc1.alpha beta to abc
    _dq_to_abc1_dq_to_abc1_alpha_beta_to_abc__A = 1 * _dq_to_abc1_o_ref__out;
    _dq_to_abc1_dq_to_abc1_alpha_beta_to_abc__B = _dq_to_abc1_dq_to_abc1_alpha_beta_to_abc__A - 0.5 * _dq_to_abc1_dq_to_abc1_dq_to_alpha_beta__alpha;
    _dq_to_abc1_dq_to_abc1_alpha_beta_to_abc__C = _dq_to_abc1_dq_to_abc1_alpha_beta_to_abc__B - 0.8660254037844386 * _dq_to_abc1_dq_to_abc1_dq_to_alpha_beta__beta;
    _dq_to_abc1_dq_to_abc1_alpha_beta_to_abc__B += 0.8660254037844386 * _dq_to_abc1_dq_to_abc1_dq_to_alpha_beta__beta;
    _dq_to_abc1_dq_to_abc1_alpha_beta_to_abc__A += 1 * _dq_to_abc1_dq_to_abc1_dq_to_alpha_beta__alpha;
    // Generated from the component: Bus Join3
    _bus_join3__out[0] = _dq_to_abc2_dq_to_abc1_alpha_beta_to_abc__A;
    _bus_join3__out[1] = _dq_to_abc2_dq_to_abc1_alpha_beta_to_abc__B;
    _bus_join3__out[2] = _dq_to_abc2_dq_to_abc1_alpha_beta_to_abc__C;
    // Generated from the component: Bus Join1
    _bus_join1__out[0] = _dq_to_abc_dq_to_abc1_alpha_beta_to_abc__A;
    _bus_join1__out[1] = _dq_to_abc_dq_to_abc1_alpha_beta_to_abc__B;
    _bus_join1__out[2] = _dq_to_abc_dq_to_abc1_alpha_beta_to_abc__C;
    // Generated from the component: Bus Join4
    _bus_join4__out[0] = _dq_to_abc3_dq_to_abc1_alpha_beta_to_abc__A;
    _bus_join4__out[1] = _dq_to_abc3_dq_to_abc1_alpha_beta_to_abc__B;
    _bus_join4__out[2] = _dq_to_abc3_dq_to_abc1_alpha_beta_to_abc__C;
    // Generated from the component: Bus Join2
    _bus_join2__out[0] = _dq_to_abc1_dq_to_abc1_alpha_beta_to_abc__A;
    _bus_join2__out[1] = _dq_to_abc1_dq_to_abc1_alpha_beta_to_abc__B;
    _bus_join2__out[2] = _dq_to_abc1_dq_to_abc1_alpha_beta_to_abc__C;
    // Generated from the component: Bus Split3
    _bus_split3__out = _bus_join3__out[0];
    _bus_split3__out1 = _bus_join3__out[1];
    _bus_split3__out2 = _bus_join3__out[2];
    // Generated from the component: Bus Split1
    _bus_split1__out = _bus_join1__out[0];
    _bus_split1__out1 = _bus_join1__out[1];
    _bus_split1__out2 = _bus_join1__out[2];
    // Generated from the component: Bus Split4
    _bus_split4__out = _bus_join4__out[0];
    _bus_split4__out1 = _bus_join4__out[1];
    _bus_split4__out2 = _bus_join4__out[2];
    // Generated from the component: Bus Split2
    _bus_split2__out = _bus_join2__out[0];
    _bus_split2__out1 = _bus_join2__out[1];
    _bus_split2__out2 = _bus_join2__out[2];
    // Generated from the component: Three Phase Inverter3.IGBT Leg2.PWM_Modulator
    if (_bus_split3__out1 < -1.0)
        _three_phase_inverter3_igbt_leg2_pwm_modulator__limited_in[0] = -1.0;
    else if (_bus_split3__out1 > 1.0)
        _three_phase_inverter3_igbt_leg2_pwm_modulator__limited_in[0] = 1.0;
    else
        _three_phase_inverter3_igbt_leg2_pwm_modulator__limited_in[0] = _bus_split3__out1;
    HIL_OutInt32(0x2000040 + _three_phase_inverter3_igbt_leg2_pwm_modulator__channels[0], ((unsigned)((_three_phase_inverter3_igbt_leg2_pwm_modulator__limited_in[0] - (-1.0)) * 1250.0)));
    if (_c2__out == 0x0) {
        // pwm_modulator_en
        HIL_OutInt32(0x2000000 + _three_phase_inverter3_igbt_leg2_pwm_modulator__channels[0], 0x0);
    }
    else {
        // pwm_modulator_en
        HIL_OutInt32(0x2000000 + _three_phase_inverter3_igbt_leg2_pwm_modulator__channels[0], 0x1);
    }
    HIL_OutInt32(0x2000140, _three_phase_inverter3_igbt_leg2_pwm_modulator__update_mask);
    // Generated from the component: Three Phase Inverter3.IGBT Leg1.PWM_Modulator
    if (_bus_split3__out < -1.0)
        _three_phase_inverter3_igbt_leg1_pwm_modulator__limited_in[0] = -1.0;
    else if (_bus_split3__out > 1.0)
        _three_phase_inverter3_igbt_leg1_pwm_modulator__limited_in[0] = 1.0;
    else
        _three_phase_inverter3_igbt_leg1_pwm_modulator__limited_in[0] = _bus_split3__out;
    HIL_OutInt32(0x2000040 + _three_phase_inverter3_igbt_leg1_pwm_modulator__channels[0], ((unsigned)((_three_phase_inverter3_igbt_leg1_pwm_modulator__limited_in[0] - (-1.0)) * 1250.0)));
    if (_c2__out == 0x0) {
        // pwm_modulator_en
        HIL_OutInt32(0x2000000 + _three_phase_inverter3_igbt_leg1_pwm_modulator__channels[0], 0x0);
    }
    else {
        // pwm_modulator_en
        HIL_OutInt32(0x2000000 + _three_phase_inverter3_igbt_leg1_pwm_modulator__channels[0], 0x1);
    }
    HIL_OutInt32(0x2000140, _three_phase_inverter3_igbt_leg1_pwm_modulator__update_mask);
    // Generated from the component: Three Phase Inverter3.IGBT Leg3.PWM_Modulator
    if (_bus_split3__out2 < -1.0)
        _three_phase_inverter3_igbt_leg3_pwm_modulator__limited_in[0] = -1.0;
    else if (_bus_split3__out2 > 1.0)
        _three_phase_inverter3_igbt_leg3_pwm_modulator__limited_in[0] = 1.0;
    else
        _three_phase_inverter3_igbt_leg3_pwm_modulator__limited_in[0] = _bus_split3__out2;
    HIL_OutInt32(0x2000040 + _three_phase_inverter3_igbt_leg3_pwm_modulator__channels[0], ((unsigned)((_three_phase_inverter3_igbt_leg3_pwm_modulator__limited_in[0] - (-1.0)) * 1250.0)));
    if (_c2__out == 0x0) {
        // pwm_modulator_en
        HIL_OutInt32(0x2000000 + _three_phase_inverter3_igbt_leg3_pwm_modulator__channels[0], 0x0);
    }
    else {
        // pwm_modulator_en
        HIL_OutInt32(0x2000000 + _three_phase_inverter3_igbt_leg3_pwm_modulator__channels[0], 0x1);
    }
    HIL_OutInt32(0x2000140, _three_phase_inverter3_igbt_leg3_pwm_modulator__update_mask);
    // Generated from the component: Three Phase Inverter1.IGBT Leg2.PWM_Modulator
    if (_bus_split1__out1 < -1.0)
        _three_phase_inverter1_igbt_leg2_pwm_modulator__limited_in[0] = -1.0;
    else if (_bus_split1__out1 > 1.0)
        _three_phase_inverter1_igbt_leg2_pwm_modulator__limited_in[0] = 1.0;
    else
        _three_phase_inverter1_igbt_leg2_pwm_modulator__limited_in[0] = _bus_split1__out1;
    HIL_OutInt32(0x2000040 + _three_phase_inverter1_igbt_leg2_pwm_modulator__channels[0], ((unsigned)((_three_phase_inverter1_igbt_leg2_pwm_modulator__limited_in[0] - (-1.0)) * 1250.0)));
    if (_c__out == 0x0) {
        // pwm_modulator_en
        HIL_OutInt32(0x2000000 + _three_phase_inverter1_igbt_leg2_pwm_modulator__channels[0], 0x0);
    }
    else {
        // pwm_modulator_en
        HIL_OutInt32(0x2000000 + _three_phase_inverter1_igbt_leg2_pwm_modulator__channels[0], 0x1);
    }
    HIL_OutInt32(0x2000140, _three_phase_inverter1_igbt_leg2_pwm_modulator__update_mask);
    // Generated from the component: Three Phase Inverter1.IGBT Leg3.PWM_Modulator
    if (_bus_split1__out2 < -1.0)
        _three_phase_inverter1_igbt_leg3_pwm_modulator__limited_in[0] = -1.0;
    else if (_bus_split1__out2 > 1.0)
        _three_phase_inverter1_igbt_leg3_pwm_modulator__limited_in[0] = 1.0;
    else
        _three_phase_inverter1_igbt_leg3_pwm_modulator__limited_in[0] = _bus_split1__out2;
    HIL_OutInt32(0x2000040 + _three_phase_inverter1_igbt_leg3_pwm_modulator__channels[0], ((unsigned)((_three_phase_inverter1_igbt_leg3_pwm_modulator__limited_in[0] - (-1.0)) * 1250.0)));
    if (_c__out == 0x0) {
        // pwm_modulator_en
        HIL_OutInt32(0x2000000 + _three_phase_inverter1_igbt_leg3_pwm_modulator__channels[0], 0x0);
    }
    else {
        // pwm_modulator_en
        HIL_OutInt32(0x2000000 + _three_phase_inverter1_igbt_leg3_pwm_modulator__channels[0], 0x1);
    }
    HIL_OutInt32(0x2000140, _three_phase_inverter1_igbt_leg3_pwm_modulator__update_mask);
    // Generated from the component: Three Phase Inverter1.IGBT Leg1.PWM_Modulator
    if (_bus_split1__out < -1.0)
        _three_phase_inverter1_igbt_leg1_pwm_modulator__limited_in[0] = -1.0;
    else if (_bus_split1__out > 1.0)
        _three_phase_inverter1_igbt_leg1_pwm_modulator__limited_in[0] = 1.0;
    else
        _three_phase_inverter1_igbt_leg1_pwm_modulator__limited_in[0] = _bus_split1__out;
    HIL_OutInt32(0x2000040 + _three_phase_inverter1_igbt_leg1_pwm_modulator__channels[0], ((unsigned)((_three_phase_inverter1_igbt_leg1_pwm_modulator__limited_in[0] - (-1.0)) * 1250.0)));
    if (_c__out == 0x0) {
        // pwm_modulator_en
        HIL_OutInt32(0x2000000 + _three_phase_inverter1_igbt_leg1_pwm_modulator__channels[0], 0x0);
    }
    else {
        // pwm_modulator_en
        HIL_OutInt32(0x2000000 + _three_phase_inverter1_igbt_leg1_pwm_modulator__channels[0], 0x1);
    }
    HIL_OutInt32(0x2000140, _three_phase_inverter1_igbt_leg1_pwm_modulator__update_mask);
    // Generated from the component: Three Phase Inverter4.IGBT Leg2.PWM_Modulator
    if (_bus_split4__out1 < -1.0)
        _three_phase_inverter4_igbt_leg2_pwm_modulator__limited_in[0] = -1.0;
    else if (_bus_split4__out1 > 1.0)
        _three_phase_inverter4_igbt_leg2_pwm_modulator__limited_in[0] = 1.0;
    else
        _three_phase_inverter4_igbt_leg2_pwm_modulator__limited_in[0] = _bus_split4__out1;
    HIL_OutInt32(0x2000040 + _three_phase_inverter4_igbt_leg2_pwm_modulator__channels[0], ((unsigned)((_three_phase_inverter4_igbt_leg2_pwm_modulator__limited_in[0] - (-1.0)) * 1250.0)));
    if (_c3__out == 0x0) {
        // pwm_modulator_en
        HIL_OutInt32(0x2000000 + _three_phase_inverter4_igbt_leg2_pwm_modulator__channels[0], 0x0);
    }
    else {
        // pwm_modulator_en
        HIL_OutInt32(0x2000000 + _three_phase_inverter4_igbt_leg2_pwm_modulator__channels[0], 0x1);
    }
    HIL_OutInt32(0x2000140, _three_phase_inverter4_igbt_leg2_pwm_modulator__update_mask);
    // Generated from the component: Three Phase Inverter4.IGBT Leg3.PWM_Modulator
    if (_bus_split4__out2 < -1.0)
        _three_phase_inverter4_igbt_leg3_pwm_modulator__limited_in[0] = -1.0;
    else if (_bus_split4__out2 > 1.0)
        _three_phase_inverter4_igbt_leg3_pwm_modulator__limited_in[0] = 1.0;
    else
        _three_phase_inverter4_igbt_leg3_pwm_modulator__limited_in[0] = _bus_split4__out2;
    HIL_OutInt32(0x2000040 + _three_phase_inverter4_igbt_leg3_pwm_modulator__channels[0], ((unsigned)((_three_phase_inverter4_igbt_leg3_pwm_modulator__limited_in[0] - (-1.0)) * 1250.0)));
    if (_c3__out == 0x0) {
        // pwm_modulator_en
        HIL_OutInt32(0x2000000 + _three_phase_inverter4_igbt_leg3_pwm_modulator__channels[0], 0x0);
    }
    else {
        // pwm_modulator_en
        HIL_OutInt32(0x2000000 + _three_phase_inverter4_igbt_leg3_pwm_modulator__channels[0], 0x1);
    }
    HIL_OutInt32(0x2000140, _three_phase_inverter4_igbt_leg3_pwm_modulator__update_mask);
    // Generated from the component: Three Phase Inverter4.IGBT Leg1.PWM_Modulator
    if (_bus_split4__out < -1.0)
        _three_phase_inverter4_igbt_leg1_pwm_modulator__limited_in[0] = -1.0;
    else if (_bus_split4__out > 1.0)
        _three_phase_inverter4_igbt_leg1_pwm_modulator__limited_in[0] = 1.0;
    else
        _three_phase_inverter4_igbt_leg1_pwm_modulator__limited_in[0] = _bus_split4__out;
    HIL_OutInt32(0x2000040 + _three_phase_inverter4_igbt_leg1_pwm_modulator__channels[0], ((unsigned)((_three_phase_inverter4_igbt_leg1_pwm_modulator__limited_in[0] - (-1.0)) * 1250.0)));
    if (_c3__out == 0x0) {
        // pwm_modulator_en
        HIL_OutInt32(0x2000000 + _three_phase_inverter4_igbt_leg1_pwm_modulator__channels[0], 0x0);
    }
    else {
        // pwm_modulator_en
        HIL_OutInt32(0x2000000 + _three_phase_inverter4_igbt_leg1_pwm_modulator__channels[0], 0x1);
    }
    HIL_OutInt32(0x2000140, _three_phase_inverter4_igbt_leg1_pwm_modulator__update_mask);
    // Generated from the component: Three Phase Inverter2.IGBT Leg1.PWM_Modulator
    if (_bus_split2__out < -1.0)
        _three_phase_inverter2_igbt_leg1_pwm_modulator__limited_in[0] = -1.0;
    else if (_bus_split2__out > 1.0)
        _three_phase_inverter2_igbt_leg1_pwm_modulator__limited_in[0] = 1.0;
    else
        _three_phase_inverter2_igbt_leg1_pwm_modulator__limited_in[0] = _bus_split2__out;
    HIL_OutInt32(0x2000040 + _three_phase_inverter2_igbt_leg1_pwm_modulator__channels[0], ((unsigned)((_three_phase_inverter2_igbt_leg1_pwm_modulator__limited_in[0] - (-1.0)) * 1250.0)));
    if (_c1__out == 0x0) {
        // pwm_modulator_en
        HIL_OutInt32(0x2000000 + _three_phase_inverter2_igbt_leg1_pwm_modulator__channels[0], 0x0);
    }
    else {
        // pwm_modulator_en
        HIL_OutInt32(0x2000000 + _three_phase_inverter2_igbt_leg1_pwm_modulator__channels[0], 0x1);
    }
    HIL_OutInt32(0x2000140, _three_phase_inverter2_igbt_leg1_pwm_modulator__update_mask);
    // Generated from the component: Three Phase Inverter2.IGBT Leg3.PWM_Modulator
    if (_bus_split2__out2 < -1.0)
        _three_phase_inverter2_igbt_leg3_pwm_modulator__limited_in[0] = -1.0;
    else if (_bus_split2__out2 > 1.0)
        _three_phase_inverter2_igbt_leg3_pwm_modulator__limited_in[0] = 1.0;
    else
        _three_phase_inverter2_igbt_leg3_pwm_modulator__limited_in[0] = _bus_split2__out2;
    HIL_OutInt32(0x2000040 + _three_phase_inverter2_igbt_leg3_pwm_modulator__channels[0], ((unsigned)((_three_phase_inverter2_igbt_leg3_pwm_modulator__limited_in[0] - (-1.0)) * 1250.0)));
    if (_c1__out == 0x0) {
        // pwm_modulator_en
        HIL_OutInt32(0x2000000 + _three_phase_inverter2_igbt_leg3_pwm_modulator__channels[0], 0x0);
    }
    else {
        // pwm_modulator_en
        HIL_OutInt32(0x2000000 + _three_phase_inverter2_igbt_leg3_pwm_modulator__channels[0], 0x1);
    }
    HIL_OutInt32(0x2000140, _three_phase_inverter2_igbt_leg3_pwm_modulator__update_mask);
    // Generated from the component: Three Phase Inverter2.IGBT Leg2.PWM_Modulator
    if (_bus_split2__out1 < -1.0)
        _three_phase_inverter2_igbt_leg2_pwm_modulator__limited_in[0] = -1.0;
    else if (_bus_split2__out1 > 1.0)
        _three_phase_inverter2_igbt_leg2_pwm_modulator__limited_in[0] = 1.0;
    else
        _three_phase_inverter2_igbt_leg2_pwm_modulator__limited_in[0] = _bus_split2__out1;
    HIL_OutInt32(0x2000040 + _three_phase_inverter2_igbt_leg2_pwm_modulator__channels[0], ((unsigned)((_three_phase_inverter2_igbt_leg2_pwm_modulator__limited_in[0] - (-1.0)) * 1250.0)));
    if (_c1__out == 0x0) {
        // pwm_modulator_en
        HIL_OutInt32(0x2000000 + _three_phase_inverter2_igbt_leg2_pwm_modulator__channels[0], 0x0);
    }
    else {
        // pwm_modulator_en
        HIL_OutInt32(0x2000000 + _three_phase_inverter2_igbt_leg2_pwm_modulator__channels[0], 0x1);
    }
    HIL_OutInt32(0x2000140, _three_phase_inverter2_igbt_leg2_pwm_modulator__update_mask);
    //@cmp.out.block.end
    //////////////////////////////////////////////////////////////////////////
    // Update block
    //////////////////////////////////////////////////////////////////////////
    //@cmp.update.block.start
    // Generated from the component: P_ref4.RegD_sys.ModBus Device4.comp_coil_out
    // Generated from the component: PLL1.PLL.PID.Integrator2
    _pll1_pll_pid_integrator2__state += _pll1_pll_pid_gain1__out * 0.0002;
    // Generated from the component: P_ref3.RegD_sys.ModBus Device3.comp_holding_out
    // Generated from the component: PLL1.PLL.Unit Delay1
    _pll1_pll_unit_delay1__state = _pll1_pll_integrator__out;
    // Generated from the component: PLL2.PLL.PID.Integrator2
    _pll2_pll_pid_integrator2__state += _pll2_pll_pid_gain1__out * 0.0002;
    // Generated from the component: PLL2.PLL.Unit Delay1
    _pll2_pll_unit_delay1__state = _pll2_pll_integrator__out;
    // Generated from the component: P_ref1.RegD_sys.ModBus Device1.comp_holding_out
    // Generated from the component: PLL.PLL.PID.Integrator1
    _pll_pll_pid_integrator1__state += _pll_pll_pid_sum7__out * 0.0002;
    // Generated from the component: ModBus Device6.comp_coil_out
    // Generated from the component: PLL2.PLL.PID.Integrator1
    _pll2_pll_pid_integrator1__state += _pll2_pll_pid_sum7__out * 0.0002;
    // Generated from the component: PLL1.PLL.PID.Integrator1
    _pll1_pll_pid_integrator1__state += _pll1_pll_pid_sum7__out * 0.0002;
    // Generated from the component: PLL3.PLL.Unit Delay1
    _pll3_pll_unit_delay1__state = _pll3_pll_integrator__out;
    // Generated from the component: PLL3.PLL.PID.Integrator1
    _pll3_pll_pid_integrator1__state += _pll3_pll_pid_sum7__out * 0.0002;
    // Generated from the component: P_ref1.RegD_sys.ModBus Device1.comp_coil_out
    // Generated from the component: P_ref2.RegD_sys.ModBus Device2.comp_coil_out
    // Generated from the component: PLL3.PLL.PID.Integrator2
    _pll3_pll_pid_integrator2__state += _pll3_pll_pid_gain1__out * 0.0002;
    // Generated from the component: P_ref4.RegD_sys.ModBus Device4.comp_holding_out
    // Generated from the component: P_ref3.RegD_sys.ModBus Device3.comp_coil_out
    // Generated from the component: P_ref2.RegD_sys.ModBus Device2.comp_holding_out
    // Generated from the component: ModBus Device6.comp_holding_out
    // Generated from the component: PLL.PLL.PID.Integrator2
    _pll_pll_pid_integrator2__state += _pll_pll_pid_gain1__out * 0.0002;
    // Generated from the component: PLL.PLL.Unit Delay1
    _pll_pll_unit_delay1__state = _pll_pll_integrator__out;
    // Generated from the component: P_ref4.RegD_sys.ModBus Device4.comp_coil_in
    // Generated from the component: P_ref3.RegD_sys.ModBus Device3.comp_discrete_in
    // Generated from the component: P_ref1.RegD_sys.ModBus Device1.comp_coil_in
    // Generated from the component: P_ref2.RegD_sys.ModBus Device2.comp_discrete_in
    // Generated from the component: P_ref1.RegD_sys.ModBus Device1.comp_discrete_in
    // Generated from the component: P_ref3.RegD_sys.ModBus Device3.comp_coil_in
    // Generated from the component: P_ref4.RegD_sys.ModBus Device4.comp_discrete_in
    // Generated from the component: P_ref2.RegD_sys.ModBus Device2.comp_coil_in
    // Generated from the component: P_ref3.RegD_sys.C function3
    // Generated from the component: P_ref1.RegD_sys.ModBus Device1.comp_holding_in
    // Generated from the component: P_ref2.RegD_sys.ModBus Device2.comp_holding_in
    // Generated from the component: P_ref1.RegD_sys.C function3
    // Generated from the component: P_ref4.RegD_sys.ModBus Device4.comp_holding_in
    // Generated from the component: P_ref4.RegD_sys.C function3
    // Generated from the component: P_ref3.RegD_sys.ModBus Device3.comp_reg_in
    // Generated from the component: P_ref2.RegD_sys.C function3
    // Generated from the component: P_ref4.RegD_sys.ModBus Device4.comp_reg_in
    // Generated from the component: P_ref1.RegD_sys.ModBus Device1.comp_reg_in
    // Generated from the component: P_ref2.RegD_sys.ModBus Device2.comp_reg_in
    // Generated from the component: P_ref3.RegD_sys.ModBus Device3.comp_holding_in
    // Generated from the component: PLL3.PLL.abc to dq.LPF_q
    _pll3_pll_abc_to_dq_lpf_q__states[0] = _pll3_pll_abc_to_dq_lpf_q__delay_line_in;
    // Generated from the component: PLL3.PLL.abc to dq.LPF_d
    _pll3_pll_abc_to_dq_lpf_d__states[0] = _pll3_pll_abc_to_dq_lpf_d__delay_line_in;
    // Generated from the component: PLL.PLL.abc to dq.LPF_d
    _pll_pll_abc_to_dq_lpf_d__states[0] = _pll_pll_abc_to_dq_lpf_d__delay_line_in;
    // Generated from the component: PLL.PLL.abc to dq.LPF_q
    _pll_pll_abc_to_dq_lpf_q__states[0] = _pll_pll_abc_to_dq_lpf_q__delay_line_in;
    // Generated from the component: ModBus Device6.comp_holding_in
    // Generated from the component: PLL1.PLL.abc to dq.LPF_d
    _pll1_pll_abc_to_dq_lpf_d__states[0] = _pll1_pll_abc_to_dq_lpf_d__delay_line_in;
    // Generated from the component: PLL1.PLL.abc to dq.LPF_q
    _pll1_pll_abc_to_dq_lpf_q__states[0] = _pll1_pll_abc_to_dq_lpf_q__delay_line_in;
    // Generated from the component: PLL2.PLL.abc to dq.LPF_q
    _pll2_pll_abc_to_dq_lpf_q__states[0] = _pll2_pll_abc_to_dq_lpf_q__delay_line_in;
    // Generated from the component: PLL2.PLL.abc to dq.LPF_d
    _pll2_pll_abc_to_dq_lpf_d__states[0] = _pll2_pll_abc_to_dq_lpf_d__delay_line_in;
    // Generated from the component: PLL3.PLL.normalize
    // Generated from the component: PLL.PLL.normalize
    // Generated from the component: PLL1.PLL.normalize
    // Generated from the component: PLL2.PLL.normalize
    // Generated from the component: P_ref3.Hold after regulation
    if (_p_ref3_hold_after_regulation__regulate != 0)_p_ref3_hold_after_regulation__var = 1;
    // Generated from the component: P_ref1.Hold after regulation
    if (_p_ref1_hold_after_regulation__regulate != 0)_p_ref1_hold_after_regulation__var = 1;
    // Generated from the component: P_ref4.Hold after regulation
    if (_p_ref4_hold_after_regulation__regulate != 0)_p_ref4_hold_after_regulation__var = 1;
    // Generated from the component: P_ref2.Hold after regulation
    if (_p_ref2_hold_after_regulation__regulate != 0)_p_ref2_hold_after_regulation__var = 1;
    // Generated from the component: Current_ref3.Comparator1
    if (_squared_vt3_sum3__out < _current_ref3_limit_zero__out) {
        _current_ref3_comparator1__state = 0;
    } else if (_squared_vt3_sum3__out > _current_ref3_limit_zero__out) {
        _current_ref3_comparator1__state = 1;
    }
    // Generated from the component: Current_ref.Comparator1
    if (_squared_vt_sum3__out < _current_ref_limit_zero__out) {
        _current_ref_comparator1__state = 0;
    } else if (_squared_vt_sum3__out > _current_ref_limit_zero__out) {
        _current_ref_comparator1__state = 1;
    }
    // Generated from the component: Current_ref1.Comparator1
    if (_squared_vt1_sum3__out < _current_ref1_limit_zero__out) {
        _current_ref1_comparator1__state = 0;
    } else if (_squared_vt1_sum3__out > _current_ref1_limit_zero__out) {
        _current_ref1_comparator1__state = 1;
    }
    // Generated from the component: Current_ref2.Comparator1
    if (_squared_vt2_sum3__out < _current_ref2_limit_zero__out) {
        _current_ref2_comparator1__state = 0;
    } else if (_squared_vt2_sum3__out > _current_ref2_limit_zero__out) {
        _current_ref2_comparator1__state = 1;
    }
    // Generated from the component: P_ref3.limit ramp rate
    if (_p_ref3_limit_ramp_rate__regulate == 0)_p_ref3_limit_ramp_rate__var = _p_ref3_limit_ramp_rate__initial;
    else {
        if (fabs(_p_ref3_limit_ramp_rate__in - _p_ref3_limit_ramp_rate__var) <= 50)_p_ref3_limit_ramp_rate__var = _p_ref3_limit_ramp_rate__in;
        else if ((fabs(_p_ref3_limit_ramp_rate__in - _p_ref3_limit_ramp_rate__var) > 50) && ((_p_ref3_limit_ramp_rate__in - _p_ref3_limit_ramp_rate__var) > 0))_p_ref3_limit_ramp_rate__var += 50;
        else if ((fabs(_p_ref3_limit_ramp_rate__in - _p_ref3_limit_ramp_rate__var) > 50) && ((_p_ref3_limit_ramp_rate__in - _p_ref3_limit_ramp_rate__var) < 0))_p_ref3_limit_ramp_rate__var -= 50;
    }
    // Generated from the component: P_ref1.limit ramp rate
    if (_p_ref1_limit_ramp_rate__regulate == 0)_p_ref1_limit_ramp_rate__var = _p_ref1_limit_ramp_rate__initial;
    else {
        if (fabs(_p_ref1_limit_ramp_rate__in - _p_ref1_limit_ramp_rate__var) <= 50)_p_ref1_limit_ramp_rate__var = _p_ref1_limit_ramp_rate__in;
        else if ((fabs(_p_ref1_limit_ramp_rate__in - _p_ref1_limit_ramp_rate__var) > 50) && ((_p_ref1_limit_ramp_rate__in - _p_ref1_limit_ramp_rate__var) > 0))_p_ref1_limit_ramp_rate__var += 50;
        else if ((fabs(_p_ref1_limit_ramp_rate__in - _p_ref1_limit_ramp_rate__var) > 50) && ((_p_ref1_limit_ramp_rate__in - _p_ref1_limit_ramp_rate__var) < 0))_p_ref1_limit_ramp_rate__var -= 50;
    }
    // Generated from the component: P_ref4.limit ramp rate
    if (_p_ref4_limit_ramp_rate__regulate == 0)_p_ref4_limit_ramp_rate__var = _p_ref4_limit_ramp_rate__initial;
    else {
        if (fabs(_p_ref4_limit_ramp_rate__in - _p_ref4_limit_ramp_rate__var) <= 50)_p_ref4_limit_ramp_rate__var = _p_ref4_limit_ramp_rate__in;
        else if ((fabs(_p_ref4_limit_ramp_rate__in - _p_ref4_limit_ramp_rate__var) > 50) && ((_p_ref4_limit_ramp_rate__in - _p_ref4_limit_ramp_rate__var) > 0))_p_ref4_limit_ramp_rate__var += 50;
        else if ((fabs(_p_ref4_limit_ramp_rate__in - _p_ref4_limit_ramp_rate__var) > 50) && ((_p_ref4_limit_ramp_rate__in - _p_ref4_limit_ramp_rate__var) < 0))_p_ref4_limit_ramp_rate__var -= 50;
    }
    // Generated from the component: P_ref2.limit ramp rate
    if (_p_ref2_limit_ramp_rate__regulate == 0)_p_ref2_limit_ramp_rate__var = _p_ref2_limit_ramp_rate__initial;
    else {
        if (fabs(_p_ref2_limit_ramp_rate__in - _p_ref2_limit_ramp_rate__var) <= 50)_p_ref2_limit_ramp_rate__var = _p_ref2_limit_ramp_rate__in;
        else if ((fabs(_p_ref2_limit_ramp_rate__in - _p_ref2_limit_ramp_rate__var) > 50) && ((_p_ref2_limit_ramp_rate__in - _p_ref2_limit_ramp_rate__var) > 0))_p_ref2_limit_ramp_rate__var += 50;
        else if ((fabs(_p_ref2_limit_ramp_rate__in - _p_ref2_limit_ramp_rate__var) > 50) && ((_p_ref2_limit_ramp_rate__in - _p_ref2_limit_ramp_rate__var) < 0))_p_ref2_limit_ramp_rate__var -= 50;
    }
    // Generated from the component: PLL3.PLL.integrator
    // Generated from the component: PLL3.PLL.Rate Limiter1
    _pll3_pll_rate_limiter1__prev_out = _pll3_pll_rate_limiter1__out;
    _pll3_pll_rate_limiter1__first_step = 0;
    // Generated from the component: PLL.PLL.Rate Limiter1
    _pll_pll_rate_limiter1__prev_out = _pll_pll_rate_limiter1__out;
    _pll_pll_rate_limiter1__first_step = 0;
    // Generated from the component: PLL.PLL.integrator
    // Generated from the component: PLL1.PLL.integrator
    // Generated from the component: PLL1.PLL.Rate Limiter1
    _pll1_pll_rate_limiter1__prev_out = _pll1_pll_rate_limiter1__out;
    _pll1_pll_rate_limiter1__first_step = 0;
    // Generated from the component: PLL2.PLL.Rate Limiter1
    _pll2_pll_rate_limiter1__prev_out = _pll2_pll_rate_limiter1__out;
    _pll2_pll_rate_limiter1__first_step = 0;
    // Generated from the component: PLL2.PLL.integrator
    // Generated from the component: PLL3.PLL.LPF.LPF
    for (_pll3_pll_lpf_lpf__i = 1; _pll3_pll_lpf_lpf__i > 0; _pll3_pll_lpf_lpf__i--) {
        _pll3_pll_lpf_lpf__states[_pll3_pll_lpf_lpf__i] = _pll3_pll_lpf_lpf__states[_pll3_pll_lpf_lpf__i - 1];
    }
    _pll3_pll_lpf_lpf__states[0] = _pll3_pll_lpf_lpf__delay_line_in;
    // Generated from the component: PLL.PLL.LPF.LPF
    for (_pll_pll_lpf_lpf__i = 1; _pll_pll_lpf_lpf__i > 0; _pll_pll_lpf_lpf__i--) {
        _pll_pll_lpf_lpf__states[_pll_pll_lpf_lpf__i] = _pll_pll_lpf_lpf__states[_pll_pll_lpf_lpf__i - 1];
    }
    _pll_pll_lpf_lpf__states[0] = _pll_pll_lpf_lpf__delay_line_in;
    // Generated from the component: PLL1.PLL.LPF.LPF
    for (_pll1_pll_lpf_lpf__i = 1; _pll1_pll_lpf_lpf__i > 0; _pll1_pll_lpf_lpf__i--) {
        _pll1_pll_lpf_lpf__states[_pll1_pll_lpf_lpf__i] = _pll1_pll_lpf_lpf__states[_pll1_pll_lpf_lpf__i - 1];
    }
    _pll1_pll_lpf_lpf__states[0] = _pll1_pll_lpf_lpf__delay_line_in;
    // Generated from the component: PLL2.PLL.LPF.LPF
    for (_pll2_pll_lpf_lpf__i = 1; _pll2_pll_lpf_lpf__i > 0; _pll2_pll_lpf_lpf__i--) {
        _pll2_pll_lpf_lpf__states[_pll2_pll_lpf_lpf__i] = _pll2_pll_lpf_lpf__states[_pll2_pll_lpf_lpf__i - 1];
    }
    _pll2_pll_lpf_lpf__states[0] = _pll2_pll_lpf_lpf__delay_line_in;
    // Generated from the component: Subsystem3.PID controller1
    if (!_subsystem3_pid_controller1__av_active) {
        _subsystem3_pid_controller1__integrator_state += 0.1 * _subsystem3_sum1__out * 0.0002;
    }
    // Generated from the component: Subsystem3.PID controller2
    if (!_subsystem3_pid_controller2__av_active) {
        _subsystem3_pid_controller2__integrator_state += 0.1 * _subsystem3_sum2__out * 0.0002;
    }
    // Generated from the component: Subsystem1.PID controller2
    if (!_subsystem1_pid_controller2__av_active) {
        _subsystem1_pid_controller2__integrator_state += 0.1 * _subsystem1_sum2__out * 0.0002;
    }
    // Generated from the component: Subsystem1.PID controller3
    _subsystem1_pid_controller3__integrator_state += 0.1 * _subsystem1_sum8__out * 0.0002;
    // Generated from the component: Subsystem4.PID controller2
    if (!_subsystem4_pid_controller2__av_active) {
        _subsystem4_pid_controller2__integrator_state += 0.1 * _subsystem4_sum2__out * 0.0002;
    }
    // Generated from the component: Subsystem4.PID controller1
    if (!_subsystem4_pid_controller1__av_active) {
        _subsystem4_pid_controller1__integrator_state += 0.1 * _subsystem4_sum1__out * 0.0002;
    }
    // Generated from the component: Subsystem2.PID controller2
    if (!_subsystem2_pid_controller2__av_active) {
        _subsystem2_pid_controller2__integrator_state += 0.1 * _subsystem2_sum2__out * 0.0002;
    }
    // Generated from the component: Subsystem2.PID controller1
    if (!_subsystem2_pid_controller1__av_active) {
        _subsystem2_pid_controller1__integrator_state += 0.1 * _subsystem2_sum1__out * 0.0002;
    }
    //@cmp.update.block.end
}
// ----------------------------------------------------------------------------------------  //-----------------------------------------------------------------------------------------