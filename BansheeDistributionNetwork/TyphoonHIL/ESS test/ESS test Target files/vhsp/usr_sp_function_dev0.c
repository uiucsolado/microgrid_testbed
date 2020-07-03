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
double _ess_ia_ia1__out;
double _ess_ib_ia1__out;
double _ess_ic_ia1__out;
double _ess_start__out;
double _grid_feeding_inverter__averaged__constant1__out = 1900.0;
double _grid_feeding_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_dq_to_abc_o_ref__out = 0.0;
double _grid_feeding_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_limit_zero__out = 0.001;
double _grid_feeding_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_one__out = 0.001;
double _grid_feeding_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_outer_power_loop_limit_zero__out = 0.001;
double _grid_feeding_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_outer_power_loop_limit_zero1__out = 0.001;
double _grid_feeding_inverter__averaged__controller_pll2_pll_pid_integrator1__out;
double _grid_feeding_inverter__averaged__controller_pll2_pll_pid_integrator2__out;
double _grid_feeding_inverter__averaged__controller_pll2_pll_unit_delay1__out;
double _grid_feeding_inverter__averaged__controller_pll2_pll_to_hz__out;
double _grid_feeding_inverter__averaged__ea1_va1__out;
double _grid_feeding_inverter__averaged__eb1_va1__out;
double _grid_feeding_inverter__averaged__ec1_va1__out;
double _grid_feeding_inverter__averaged__ia1_ia1__out;
double _grid_feeding_inverter__averaged__ib1_ia1__out;
double _grid_feeding_inverter__averaged__ic1_ia1__out;
double _grid_feeding_inverter__averaged__va2_va1__out;
double _grid_feeding_inverter__averaged__vb2_va1__out;
double _grid_feeding_inverter__averaged__vc2_va1__out;
double _grid_feeding_inverter__averaged__vrms_cpu_trans_output__out;
double _grid_feeding_inverter__averaged__xi_a1_ia1__out;
double _grid_feeding_inverter__averaged__xi_b1_ia1__out;
double _grid_feeding_inverter__averaged__xi_c1_ia1__out;
double _p_ref_ess__out;
double _q_ref_ess__out;
double _va_va1__out;
double _vb_va1__out;
double _vc_va1__out;
double _grid_feeding_inverter__averaged__gain1__out;
double _grid_feeding_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_comparator1__out;
double _grid_feeding_inverter__averaged__controller_pll2_pll_sin__out;
double _grid_feeding_inverter__averaged__controller_pll2_2pi__out;
double _grid_feeding_inverter__averaged__controller_pll2_pll_abc_to_dq_abc_to_alpha_beta__alpha;
double _grid_feeding_inverter__averaged__controller_pll2_pll_abc_to_dq_abc_to_alpha_beta__beta;
double _grid_feeding_inverter__averaged__controller_pll2_pll_abc_to_dq_abc_to_alpha_beta__gamma;
double _grid_feeding_inverter__averaged__controller_current_abc_to_dq4_abc_to_dq1_abc_to_alpha_beta__alpha;
double _grid_feeding_inverter__averaged__controller_current_abc_to_dq4_abc_to_dq1_abc_to_alpha_beta__beta;
double _grid_feeding_inverter__averaged__controller_current_abc_to_dq4_abc_to_dq1_abc_to_alpha_beta__gamma;
double _grid_feeding_inverter__averaged__controller_current_abc_to_dq3_abc_to_dq1_abc_to_alpha_beta__alpha;
double _grid_feeding_inverter__averaged__controller_current_abc_to_dq3_abc_to_dq1_abc_to_alpha_beta__beta;
double _grid_feeding_inverter__averaged__controller_current_abc_to_dq3_abc_to_dq1_abc_to_alpha_beta__gamma;
double _grid_feeding_inverter__averaged__controller_current_abc_to_dq_abc_to_dq1_abc_to_alpha_beta__alpha;
double _grid_feeding_inverter__averaged__controller_current_abc_to_dq_abc_to_dq1_abc_to_alpha_beta__beta;
double _grid_feeding_inverter__averaged__controller_current_abc_to_dq_abc_to_dq1_abc_to_alpha_beta__gamma;
double _power_meter1__Pdc;
double _power_meter1__Qdc;
double _power_meter1__P0dc;
double _power_meter1__Pac;
double _power_meter1__Qac;
double _power_meter1__P0ac;
double _power_meter1__apparent;
double _power_meter1__k_factor;
double _power_meter1__v_alpha;
double _power_meter1__v_beta;
double _power_meter1__i_alpha;
double _power_meter1__i_beta;
double _power_meter1__v_zero;
double _power_meter1__i_zero;
double _power_meter1__filter_1_output;
double _power_meter1__filter_1_outputQ;
double _power_meter1__filter_1_outputP0;
double _grid_feeding_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_signal_switch1__out;
double _grid_feeding_inverter__averaged__controller_gain1__out;
double _grid_feeding_inverter__averaged__controller_pll2_pll_abc_to_dq_alpha_beta_to_dq__d;
double _grid_feeding_inverter__averaged__controller_pll2_pll_abc_to_dq_alpha_beta_to_dq__q;
double _grid_feeding_inverter__averaged__controller_pll2_pll_abc_to_dq_alpha_beta_to_dq__k1;
double _grid_feeding_inverter__averaged__controller_pll2_pll_abc_to_dq_alpha_beta_to_dq__k2;
double _grid_feeding_inverter__averaged__controller_current_abc_to_dq4_abc_to_dq1_alpha_beta_to_dq__d;
double _grid_feeding_inverter__averaged__controller_current_abc_to_dq4_abc_to_dq1_alpha_beta_to_dq__q;
double _grid_feeding_inverter__averaged__controller_current_abc_to_dq4_abc_to_dq1_alpha_beta_to_dq__k1;
double _grid_feeding_inverter__averaged__controller_current_abc_to_dq4_abc_to_dq1_alpha_beta_to_dq__k2;
double _grid_feeding_inverter__averaged__controller_current_abc_to_dq3_abc_to_dq1_alpha_beta_to_dq__d;
double _grid_feeding_inverter__averaged__controller_current_abc_to_dq3_abc_to_dq1_alpha_beta_to_dq__q;
double _grid_feeding_inverter__averaged__controller_current_abc_to_dq3_abc_to_dq1_alpha_beta_to_dq__k1;
double _grid_feeding_inverter__averaged__controller_current_abc_to_dq3_abc_to_dq1_alpha_beta_to_dq__k2;
double _grid_feeding_inverter__averaged__controller_current_abc_to_dq_abc_to_dq1_alpha_beta_to_dq__d;
double _grid_feeding_inverter__averaged__controller_current_abc_to_dq_abc_to_dq1_alpha_beta_to_dq__q;
double _grid_feeding_inverter__averaged__controller_current_abc_to_dq_abc_to_dq1_alpha_beta_to_dq__k1;
double _grid_feeding_inverter__averaged__controller_current_abc_to_dq_abc_to_dq1_alpha_beta_to_dq__k2;
double _grid_feeding_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_gain5__out;
double _grid_feeding_inverter__averaged__controller_pll2_pll_abc_to_dq_lpf_d__out;
double _grid_feeding_inverter__averaged__controller_pll2_pll_abc_to_dq_lpf_d__b_coeff[2] = {0.012566370614, 0.012566370614};
double _grid_feeding_inverter__averaged__controller_pll2_pll_abc_to_dq_lpf_d__a_coeff[2] = {2.012566370614, -1.987433629386};
double _grid_feeding_inverter__averaged__controller_pll2_pll_abc_to_dq_lpf_d__a_sum;
double _grid_feeding_inverter__averaged__controller_pll2_pll_abc_to_dq_lpf_d__b_sum;
double _grid_feeding_inverter__averaged__controller_pll2_pll_abc_to_dq_lpf_d__delay_line_in;
X_UnInt32 _grid_feeding_inverter__averaged__controller_pll2_pll_abc_to_dq_lpf_d__i;
double _grid_feeding_inverter__averaged__controller_pll2_pll_abc_to_dq_lpf_q__out;
double _grid_feeding_inverter__averaged__controller_pll2_pll_abc_to_dq_lpf_q__b_coeff[2] = {0.012566370614, 0.012566370614};
double _grid_feeding_inverter__averaged__controller_pll2_pll_abc_to_dq_lpf_q__a_coeff[2] = {2.012566370614, -1.987433629386};
double _grid_feeding_inverter__averaged__controller_pll2_pll_abc_to_dq_lpf_q__a_sum;
double _grid_feeding_inverter__averaged__controller_pll2_pll_abc_to_dq_lpf_q__b_sum;
double _grid_feeding_inverter__averaged__controller_pll2_pll_abc_to_dq_lpf_q__delay_line_in;
X_UnInt32 _grid_feeding_inverter__averaged__controller_pll2_pll_abc_to_dq_lpf_q__i;
double _grid_feeding_inverter__averaged__controller_gain11__out;
double _grid_feeding_inverter__averaged__controller_gain12__out;
double _grid_feeding_inverter__averaged__controller_gain10__out;
double _grid_feeding_inverter__averaged__controller_gain9__out;
double _grid_feeding_inverter__averaged__controller_gain6__out;
double _grid_feeding_inverter__averaged__controller_gain7__out;
double _grid_feeding_inverter__averaged__controller_gain5__out;
double _grid_feeding_inverter__averaged__controller_gain8__out;
double _grid_feeding_inverter__averaged__controller_pll2_pll_normalize__in1;
double _grid_feeding_inverter__averaged__controller_pll2_pll_normalize__in2;


double _grid_feeding_inverter__averaged__controller_pll2_pll_normalize__in2_pu;
double _grid_feeding_inverter__averaged__controller_pll2_pll_normalize__pk;
double _grid_feeding_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_gain7__out;
double _grid_feeding_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_gain6__out;
double _grid_feeding_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_squared_vt2_product1__out;
double _grid_feeding_inverter__averaged__controller_product111__out;
double _grid_feeding_inverter__averaged__controller_product12__out;
double _grid_feeding_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_squared_vt2_product2__out;
double _grid_feeding_inverter__averaged__controller_product10__out;
double _grid_feeding_inverter__averaged__controller_product13__out;
double _grid_feeding_inverter__averaged__controller_pll2_pll_pid_kd__out;
double _grid_feeding_inverter__averaged__controller_pll2_pll_pid_ki__out;
double _grid_feeding_inverter__averaged__controller_pll2_pll_pid_kp__out;
double _grid_feeding_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_product2__out;
double _grid_feeding_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_product1__out;
double _grid_feeding_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_squared_vt2_sum3__out;
double _grid_feeding_inverter__averaged__controller_sum2__out;
double _grid_feeding_inverter__averaged__controller_sum1__out;
double _grid_feeding_inverter__averaged__controller_pll2_pll_pid_sum8__out;
double _grid_feeding_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum6__out;
double _grid_feeding_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum5__out;
double _grid_feeding_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_outer_power_loop_comparator1__out;
double _grid_feeding_inverter__averaged__controller_gain16__out;
double _grid_feeding_inverter__averaged__controller_gain15__out;
double _grid_feeding_inverter__averaged__controller_pll2_pll_pid_gain1__out;
double _grid_feeding_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_product4__out;
double _grid_feeding_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_product3__out;
double _grid_feeding_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_outer_power_loop_signal_switch1__out;
double _grid_feeding_inverter__averaged__bus_join4__out[2];
double _grid_feeding_inverter__averaged__bus_join5__out[2];
double _grid_feeding_inverter__averaged__controller_pll2_pll_pid_sum5__out;
double _grid_feeding_inverter__averaged__c_function5__prev;
double _grid_feeding_inverter__averaged__c_function5__in[2];


double _grid_feeding_inverter__averaged__c_function5__out;
double _grid_feeding_inverter__averaged__c_function3__prev;
double _grid_feeding_inverter__averaged__c_function3__in[2];


double _grid_feeding_inverter__averaged__c_function3__out;
double _grid_feeding_inverter__averaged__controller_pll2_pll_pid_limit1__out;
double _grid_feeding_inverter__averaged__gain15__out;
double _grid_feeding_inverter__averaged__gain16__out;
double _grid_feeding_inverter__averaged__controller_pll2_pll_pid_sum6__out;
double _grid_feeding_inverter__averaged__controller_pll2_pll_rate_limiter1__in_rate;
double _grid_feeding_inverter__averaged__controller_pll2_pll_integrator__in;


double _grid_feeding_inverter__averaged__controller_pll2_pll_integrator__out;
double _grid_feeding_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_outer_power_loop_product4__out;
double _grid_feeding_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_outer_power_loop_product6__out;
double _grid_feeding_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_outer_power_loop_product3__out;
double _grid_feeding_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_outer_power_loop_product5__out;
double _grid_feeding_inverter__averaged__controller_pll2_pll_pid_kb__out;
double _grid_feeding_inverter__averaged__controller_pll2_pll_lpf_lpf__out;
double _grid_feeding_inverter__averaged__controller_pll2_pll_lpf_lpf__b_coeff[1] = {0.0009869600294464265};
double _grid_feeding_inverter__averaged__controller_pll2_pll_lpf_lpf__a_coeff[3] = {1.0, -1.95557788912, 0.9565648491494463};
double _grid_feeding_inverter__averaged__controller_pll2_pll_lpf_lpf__a_sum;
double _grid_feeding_inverter__averaged__controller_pll2_pll_lpf_lpf__b_sum;
double _grid_feeding_inverter__averaged__controller_pll2_pll_lpf_lpf__delay_line_in;
X_UnInt32 _grid_feeding_inverter__averaged__controller_pll2_pll_lpf_lpf__i;
double _grid_feeding_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_outer_power_loop_sum3__out;
double _grid_feeding_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_outer_power_loop_sum4__out;
double _grid_feeding_inverter__averaged__controller_pll2_pll_pid_sum7__out;
double _grid_feeding_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_outer_power_loop_product1__out;
double _grid_feeding_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_outer_power_loop_product2__out;
double _grid_feeding_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_outer_power_loop_gain1__out;
double _grid_feeding_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_outer_power_loop_gain2__out;
double _grid_feeding_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_gain8__out;
double _grid_feeding_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum9__out;
double _grid_feeding_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_gain7__out;
double _grid_feeding_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum8__out;
double _grid_feeding_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__out;
double _grid_feeding_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__pi_reg_out_int;
double _grid_feeding_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__out;
double _grid_feeding_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__pi_reg_out_int;
double _grid_feeding_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum7__out;
double _grid_feeding_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum3__out;
double _grid_feeding_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_gain6__out;
double _grid_feeding_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_gain5__out;
double _grid_feeding_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_dq_to_abc_dq_to_abc1_dq_to_alpha_beta__alpha;
double _grid_feeding_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_dq_to_abc_dq_to_abc1_dq_to_alpha_beta__beta;
double _grid_feeding_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_dq_to_abc_dq_to_abc1_dq_to_alpha_beta__k1;
double _grid_feeding_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_dq_to_abc_dq_to_abc1_dq_to_alpha_beta__k2;
double _grid_feeding_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_dq_to_abc_dq_to_abc1_alpha_beta_to_abc__A;
double _grid_feeding_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_dq_to_abc_dq_to_abc1_alpha_beta_to_abc__B;
double _grid_feeding_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_dq_to_abc_dq_to_abc1_alpha_beta_to_abc__C;
double _grid_feeding_inverter__averaged__controller_bus_join1__out[3];
double _grid_feeding_inverter__averaged__product1__out[3];
double _grid_feeding_inverter__averaged__bus_split1__out;
double _grid_feeding_inverter__averaged__bus_split1__out1;
double _grid_feeding_inverter__averaged__bus_split1__out2;     //@cmp.var.end

//@cmp.svar.start
// state variables
double _grid_feeding_inverter__averaged__controller_pll2_pll_pid_integrator1__state;
double _grid_feeding_inverter__averaged__controller_pll2_pll_pid_integrator2__state;
double _grid_feeding_inverter__averaged__controller_pll2_pll_unit_delay1__state;
double _grid_feeding_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_comparator1__state;
double _power_meter1__filter_1_output_k_minus_1;
double _power_meter1__filter_1_input_k_minus_1;
double _power_meter1__filter_1_output_k_minus_1Q;
double _power_meter1__filter_1_input_k_minus_1Q;
double _power_meter1__filter_1_output_k_minus_1P0;
double _power_meter1__filter_1_input_k_minus_1P0;
double _grid_feeding_inverter__averaged__controller_pll2_pll_abc_to_dq_lpf_d__states[1];
double _grid_feeding_inverter__averaged__controller_pll2_pll_abc_to_dq_lpf_q__states[1];
double _grid_feeding_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_outer_power_loop_comparator1__state;
double _grid_feeding_inverter__averaged__controller_pll2_pll_rate_limiter1__prev_out;
double _grid_feeding_inverter__averaged__controller_pll2_pll_rate_limiter1__out;
int _grid_feeding_inverter__averaged__controller_pll2_pll_rate_limiter1__first_step;
double _grid_feeding_inverter__averaged__controller_pll2_pll_lpf_lpf__states[2];
double _grid_feeding_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__integrator_state;
X_UnInt32 _grid_feeding_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__av_active;
double _grid_feeding_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__filter_state;
double _grid_feeding_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__integrator_state;
X_UnInt32 _grid_feeding_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__av_active;
double _grid_feeding_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__filter_state;
//@cmp.svar.end



// generated using template: virtual_hil/custom_functions.template---------------------------------
void ReInit_user_sp_cpu_dev0() {
#if DEBUG_MODE
    printf("\n\rReInitTimer");
#endif
    //@cmp.init.block.start
    _grid_feeding_inverter__averaged__controller_pll2_pll_pid_integrator1__state = 376.99111843;
    _grid_feeding_inverter__averaged__controller_pll2_pll_pid_integrator2__state = 0.0;
    _grid_feeding_inverter__averaged__controller_pll2_pll_unit_delay1__state = 0.0;
    _grid_feeding_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_comparator1__state = 0.0f;
    HIL_OutAO(0x400d, 0.0f);
    HIL_OutAO(0x400e, 0.0f);
    HIL_OutAO(0x400f, 0.0f);
    HIL_OutAO(0x4012, 0.0f);
    _power_meter1__filter_1_output_k_minus_1 = 0.0;
    _power_meter1__filter_1_input_k_minus_1 = 0.0;
    _power_meter1__filter_1_output_k_minus_1Q = 0.0;
    _power_meter1__filter_1_input_k_minus_1Q = 0.0;
    _power_meter1__filter_1_output_k_minus_1P0 = 0.0;
    _power_meter1__filter_1_input_k_minus_1P0 = 0.0;
    HIL_OutAO(0x4013, 0.0f);
    HIL_OutAO(0x4014, 0.0f);
    HIL_OutAO(0x400c, 0.0f);
    for (_grid_feeding_inverter__averaged__controller_pll2_pll_abc_to_dq_lpf_d__i = 0; _grid_feeding_inverter__averaged__controller_pll2_pll_abc_to_dq_lpf_d__i < 1; _grid_feeding_inverter__averaged__controller_pll2_pll_abc_to_dq_lpf_d__i++) {
        _grid_feeding_inverter__averaged__controller_pll2_pll_abc_to_dq_lpf_d__states[_grid_feeding_inverter__averaged__controller_pll2_pll_abc_to_dq_lpf_d__i] = 0.0;
    }
    for (_grid_feeding_inverter__averaged__controller_pll2_pll_abc_to_dq_lpf_q__i = 0; _grid_feeding_inverter__averaged__controller_pll2_pll_abc_to_dq_lpf_q__i < 1; _grid_feeding_inverter__averaged__controller_pll2_pll_abc_to_dq_lpf_q__i++) {
        _grid_feeding_inverter__averaged__controller_pll2_pll_abc_to_dq_lpf_q__states[_grid_feeding_inverter__averaged__controller_pll2_pll_abc_to_dq_lpf_q__i] = 0.0;
    }
    HIL_OutAO(0x400a, 0.0f);
    HIL_OutAO(0x400b, 0.0f);
    _grid_feeding_inverter__averaged__controller_pll2_pll_normalize__in1 = 0;
    _grid_feeding_inverter__averaged__controller_pll2_pll_normalize__in2 = 0;
    _grid_feeding_inverter__averaged__controller_pll2_pll_normalize__pk = 0;
    _grid_feeding_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_outer_power_loop_comparator1__state = 0.0f;
    HIL_OutAO(0x4006, 0.0f);
    HIL_OutAO(0x4009, 0.0f);
    HIL_OutAO(0x4008, 0.0f);
    HIL_OutAO(0x4007, 0.0f);
    _grid_feeding_inverter__averaged__c_function5__prev = 5.0;
    _grid_feeding_inverter__averaged__c_function3__prev = 5.0;
    HIL_OutAO(0x4011, 0.0f);
    HIL_OutAO(0x4010, 0.0f);
    _grid_feeding_inverter__averaged__controller_pll2_pll_rate_limiter1__first_step = 1;
    _grid_feeding_inverter__averaged__controller_pll2_pll_integrator__out = 0;
    _grid_feeding_inverter__averaged__controller_pll2_pll_integrator__in = 0;
    for (_grid_feeding_inverter__averaged__controller_pll2_pll_lpf_lpf__i = 0; _grid_feeding_inverter__averaged__controller_pll2_pll_lpf_lpf__i < 2; _grid_feeding_inverter__averaged__controller_pll2_pll_lpf_lpf__i++) {
        _grid_feeding_inverter__averaged__controller_pll2_pll_lpf_lpf__states[_grid_feeding_inverter__averaged__controller_pll2_pll_lpf_lpf__i] = 381972.0223545779;
    }
    HIL_OutAO(0x4005, 0.0f);
    _grid_feeding_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__integrator_state =  0.0;
    _grid_feeding_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__filter_state =  0.0;
    HIL_OutAO(0x4004, 0.0f);
    _grid_feeding_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__integrator_state =  0.0;
    _grid_feeding_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__filter_state =  0.0;
    HIL_OutAO(0x4003, 0.0f);
    HIL_OutAO(0x4002, 0.0f);
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
    // Generated from the component: ESS_start
    _ess_start__out = XIo_InFloat(0x55000104);
    // Generated from the component: Grid feeding inverter (averaged).Constant1
    // Generated from the component: Grid feeding inverter (averaged).Controller.Outer Voltage Loop + Inner Current Loop.dq to abc.o_ref
    // Generated from the component: Grid feeding inverter (averaged).Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Limit_zero
    // Generated from the component: Grid feeding inverter (averaged).Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.one
    // Generated from the component: Grid feeding inverter (averaged).Controller.Outer Voltage Loop + Inner Current Loop.outer power loop.Limit_zero
    // Generated from the component: Grid feeding inverter (averaged).Controller.Outer Voltage Loop + Inner Current Loop.outer power loop.Limit_zero1
    // Generated from the component: Grid feeding inverter (averaged).Controller.PLL2.PLL.PID.Integrator1
    _grid_feeding_inverter__averaged__controller_pll2_pll_pid_integrator1__out = _grid_feeding_inverter__averaged__controller_pll2_pll_pid_integrator1__state;
    // Generated from the component: Grid feeding inverter (averaged).Controller.PLL2.PLL.PID.Integrator2
    _grid_feeding_inverter__averaged__controller_pll2_pll_pid_integrator2__out = _grid_feeding_inverter__averaged__controller_pll2_pll_pid_integrator2__state;
    // Generated from the component: Grid feeding inverter (averaged).Controller.PLL2.PLL.Unit Delay1
    _grid_feeding_inverter__averaged__controller_pll2_pll_unit_delay1__out = _grid_feeding_inverter__averaged__controller_pll2_pll_unit_delay1__state;
    // Generated from the component: Grid feeding inverter (averaged).Controller.PLL2.PLL.to_Hz
    _grid_feeding_inverter__averaged__controller_pll2_pll_to_hz__out = 0.15915494309189535 * _grid_feeding_inverter__averaged__controller_pll2_pll_lpf_lpf__out;
    // Generated from the component: Grid feeding inverter (averaged).Ea1.Va1
    _grid_feeding_inverter__averaged__ea1_va1__out = (HIL_InFloat(0xc80000 + 0xe));
    // Generated from the component: Grid feeding inverter (averaged).Eb1.Va1
    _grid_feeding_inverter__averaged__eb1_va1__out = (HIL_InFloat(0xc80000 + 0xf));
    // Generated from the component: Grid feeding inverter (averaged).Ec1.Va1
    _grid_feeding_inverter__averaged__ec1_va1__out = (HIL_InFloat(0xc80000 + 0x10));
    // Generated from the component: Grid feeding inverter (averaged).Ia1.Ia1
    _grid_feeding_inverter__averaged__ia1_ia1__out = (HIL_InFloat(0xc80000 + 0x15));
    // Generated from the component: Grid feeding inverter (averaged).Ib1.Ia1
    _grid_feeding_inverter__averaged__ib1_ia1__out = (HIL_InFloat(0xc80000 + 0x16));
    // Generated from the component: Grid feeding inverter (averaged).Ic1.Ia1
    _grid_feeding_inverter__averaged__ic1_ia1__out = (HIL_InFloat(0xc80000 + 0x17));
    // Generated from the component: Grid feeding inverter (averaged).Va2.Va1
    _grid_feeding_inverter__averaged__va2_va1__out = (HIL_InFloat(0xc80000 + 0x11));
    // Generated from the component: Grid feeding inverter (averaged).Vb2.Va1
    _grid_feeding_inverter__averaged__vb2_va1__out = (HIL_InFloat(0xc80000 + 0x12));
    // Generated from the component: Grid feeding inverter (averaged).Vc2.Va1
    _grid_feeding_inverter__averaged__vc2_va1__out = (HIL_InFloat(0xc80000 + 0x13));
    // Generated from the component: Grid feeding inverter (averaged).Xi_a1.Ia1
    _grid_feeding_inverter__averaged__xi_a1_ia1__out = (HIL_InFloat(0xc80000 + 0x18));
    // Generated from the component: Grid feeding inverter (averaged).Xi_b1.Ia1
    _grid_feeding_inverter__averaged__xi_b1_ia1__out = (HIL_InFloat(0xc80000 + 0x19));
    // Generated from the component: Grid feeding inverter (averaged).Xi_c1.Ia1
    _grid_feeding_inverter__averaged__xi_c1_ia1__out = (HIL_InFloat(0xc80000 + 0x1a));
    // Generated from the component: P_ref_ess
    _p_ref_ess__out = XIo_InFloat(0x55000108);
    // Generated from the component: Q_ref_ess
    _q_ref_ess__out = XIo_InFloat(0x5500010c);
    // Generated from the component: MX1.CTC_Wrapper
    if (_ess_start__out == 0x0) {
        HIL_OutInt32(0x8640480, 0x0);
    }
    else {
        HIL_OutInt32(0x8640480, 0x1);
    }
    // Generated from the component: Grid feeding inverter (averaged).Gain1
    _grid_feeding_inverter__averaged__gain1__out = 0.5 * _grid_feeding_inverter__averaged__constant1__out;
    // Generated from the component: Grid feeding inverter (averaged).Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Comparator1
    if (_grid_feeding_inverter__averaged__constant1__out < _grid_feeding_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_limit_zero__out) {
        _grid_feeding_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_comparator1__out = 0;
    } else if (_grid_feeding_inverter__averaged__constant1__out > _grid_feeding_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_limit_zero__out) {
        _grid_feeding_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_comparator1__out = 1;
    } else {
        _grid_feeding_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_comparator1__out = _grid_feeding_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_comparator1__state;
    }
    // Generated from the component: Grid feeding inverter (averaged).Controller.PLL2.PLL.sin
    _grid_feeding_inverter__averaged__controller_pll2_pll_sin__out = sin(_grid_feeding_inverter__averaged__controller_pll2_pll_unit_delay1__out);
    // Generated from the component: Grid feeding inverter (averaged).Controller.PLL2.2pi
    _grid_feeding_inverter__averaged__controller_pll2_2pi__out = 6.28318530718 * _grid_feeding_inverter__averaged__controller_pll2_pll_to_hz__out;
    // Generated from the component: Grid feeding inverter (averaged).Ea_1
    HIL_OutAO(0x400d, (float)_grid_feeding_inverter__averaged__ea1_va1__out);
    // Generated from the component: Grid feeding inverter (averaged).Eb_1
    HIL_OutAO(0x400e, (float)_grid_feeding_inverter__averaged__eb1_va1__out);
    // Generated from the component: Grid feeding inverter (averaged).Controller.PLL2.PLL.abc to dq.abc to alpha beta
    _grid_feeding_inverter__averaged__controller_pll2_pll_abc_to_dq_abc_to_alpha_beta__alpha = (2.0 * _grid_feeding_inverter__averaged__ea1_va1__out - _grid_feeding_inverter__averaged__eb1_va1__out - _grid_feeding_inverter__averaged__ec1_va1__out) * 0.3333333333333333;
    _grid_feeding_inverter__averaged__controller_pll2_pll_abc_to_dq_abc_to_alpha_beta__beta = (_grid_feeding_inverter__averaged__eb1_va1__out - _grid_feeding_inverter__averaged__ec1_va1__out) * 0.5773502691896258;
    _grid_feeding_inverter__averaged__controller_pll2_pll_abc_to_dq_abc_to_alpha_beta__gamma = (_grid_feeding_inverter__averaged__ea1_va1__out + _grid_feeding_inverter__averaged__eb1_va1__out + _grid_feeding_inverter__averaged__ec1_va1__out) * 0.3333333333333333;
    // Generated from the component: Grid feeding inverter (averaged).Ec_1
    HIL_OutAO(0x400f, (float)_grid_feeding_inverter__averaged__ec1_va1__out);
    // Generated from the component: Grid feeding inverter (averaged).Controller.Current_abc_to_dq4.abc to dq1.abc to alpha beta
    _grid_feeding_inverter__averaged__controller_current_abc_to_dq4_abc_to_dq1_abc_to_alpha_beta__alpha = (2.0 * _grid_feeding_inverter__averaged__ia1_ia1__out - _grid_feeding_inverter__averaged__ib1_ia1__out - _grid_feeding_inverter__averaged__ic1_ia1__out) * 0.3333333333333333;
    _grid_feeding_inverter__averaged__controller_current_abc_to_dq4_abc_to_dq1_abc_to_alpha_beta__beta = (_grid_feeding_inverter__averaged__ib1_ia1__out - _grid_feeding_inverter__averaged__ic1_ia1__out) * 0.5773502691896258;
    _grid_feeding_inverter__averaged__controller_current_abc_to_dq4_abc_to_dq1_abc_to_alpha_beta__gamma = (_grid_feeding_inverter__averaged__ia1_ia1__out + _grid_feeding_inverter__averaged__ib1_ia1__out + _grid_feeding_inverter__averaged__ic1_ia1__out) * 0.3333333333333333;
    // Generated from the component: Grid feeding inverter (averaged).Controller.Current_abc_to_dq3.abc to dq1.abc to alpha beta
    _grid_feeding_inverter__averaged__controller_current_abc_to_dq3_abc_to_dq1_abc_to_alpha_beta__alpha = (2.0 * _grid_feeding_inverter__averaged__va2_va1__out - _grid_feeding_inverter__averaged__vb2_va1__out - _grid_feeding_inverter__averaged__vc2_va1__out) * 0.3333333333333333;
    _grid_feeding_inverter__averaged__controller_current_abc_to_dq3_abc_to_dq1_abc_to_alpha_beta__beta = (_grid_feeding_inverter__averaged__vb2_va1__out - _grid_feeding_inverter__averaged__vc2_va1__out) * 0.5773502691896258;
    _grid_feeding_inverter__averaged__controller_current_abc_to_dq3_abc_to_dq1_abc_to_alpha_beta__gamma = (_grid_feeding_inverter__averaged__va2_va1__out + _grid_feeding_inverter__averaged__vb2_va1__out + _grid_feeding_inverter__averaged__vc2_va1__out) * 0.3333333333333333;
    // Generated from the component: Grid feeding inverter (averaged).Controller.Current_abc_to_dq.abc to dq1.abc to alpha beta
    _grid_feeding_inverter__averaged__controller_current_abc_to_dq_abc_to_dq1_abc_to_alpha_beta__alpha = (2.0 * _grid_feeding_inverter__averaged__xi_a1_ia1__out - _grid_feeding_inverter__averaged__xi_b1_ia1__out - _grid_feeding_inverter__averaged__xi_c1_ia1__out) * 0.3333333333333333;
    _grid_feeding_inverter__averaged__controller_current_abc_to_dq_abc_to_dq1_abc_to_alpha_beta__beta = (_grid_feeding_inverter__averaged__xi_b1_ia1__out - _grid_feeding_inverter__averaged__xi_c1_ia1__out) * 0.5773502691896258;
    _grid_feeding_inverter__averaged__controller_current_abc_to_dq_abc_to_dq1_abc_to_alpha_beta__gamma = (_grid_feeding_inverter__averaged__xi_a1_ia1__out + _grid_feeding_inverter__averaged__xi_b1_ia1__out + _grid_feeding_inverter__averaged__xi_c1_ia1__out) * 0.3333333333333333;
    // Generated from the component: Grid feeding inverter (averaged).Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Signal switch1
    _grid_feeding_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_signal_switch1__out = (_grid_feeding_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_comparator1__out < 0.5f) ? _grid_feeding_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_one__out : _grid_feeding_inverter__averaged__constant1__out;
    // Generated from the component: Grid feeding inverter (averaged).Controller.PLL2.Termination3
    // Generated from the component: Grid feeding inverter (averaged).Controller.Gain1
    _grid_feeding_inverter__averaged__controller_gain1__out = 0.15915494309189535 * _grid_feeding_inverter__averaged__controller_pll2_2pi__out;
    // Generated from the component: Grid feeding inverter (averaged).Controller.PLL2.PLL.abc to dq.alpha beta to dq
    _grid_feeding_inverter__averaged__controller_pll2_pll_abc_to_dq_alpha_beta_to_dq__k1 = cos(_grid_feeding_inverter__averaged__controller_pll2_pll_unit_delay1__out);
    _grid_feeding_inverter__averaged__controller_pll2_pll_abc_to_dq_alpha_beta_to_dq__k2 = sin(_grid_feeding_inverter__averaged__controller_pll2_pll_unit_delay1__out);
    _grid_feeding_inverter__averaged__controller_pll2_pll_abc_to_dq_alpha_beta_to_dq__d = _grid_feeding_inverter__averaged__controller_pll2_pll_abc_to_dq_alpha_beta_to_dq__k2 * _grid_feeding_inverter__averaged__controller_pll2_pll_abc_to_dq_abc_to_alpha_beta__alpha - _grid_feeding_inverter__averaged__controller_pll2_pll_abc_to_dq_alpha_beta_to_dq__k1 * _grid_feeding_inverter__averaged__controller_pll2_pll_abc_to_dq_abc_to_alpha_beta__beta;
    _grid_feeding_inverter__averaged__controller_pll2_pll_abc_to_dq_alpha_beta_to_dq__q = _grid_feeding_inverter__averaged__controller_pll2_pll_abc_to_dq_alpha_beta_to_dq__k1 * _grid_feeding_inverter__averaged__controller_pll2_pll_abc_to_dq_abc_to_alpha_beta__alpha + _grid_feeding_inverter__averaged__controller_pll2_pll_abc_to_dq_alpha_beta_to_dq__k2 * _grid_feeding_inverter__averaged__controller_pll2_pll_abc_to_dq_abc_to_alpha_beta__beta;
    // Generated from the component: Grid feeding inverter (averaged).Controller.PLL2.Termination1
    // Generated from the component: Grid feeding inverter (averaged).Controller.Current_abc_to_dq4.Termination1
    // Generated from the component: Grid feeding inverter (averaged).Controller.Current_abc_to_dq4.abc to dq1.alpha beta to dq
    _grid_feeding_inverter__averaged__controller_current_abc_to_dq4_abc_to_dq1_alpha_beta_to_dq__k1 = cos(_grid_feeding_inverter__averaged__controller_pll2_pll_unit_delay1__out);
    _grid_feeding_inverter__averaged__controller_current_abc_to_dq4_abc_to_dq1_alpha_beta_to_dq__k2 = sin(_grid_feeding_inverter__averaged__controller_pll2_pll_unit_delay1__out);
    _grid_feeding_inverter__averaged__controller_current_abc_to_dq4_abc_to_dq1_alpha_beta_to_dq__d = _grid_feeding_inverter__averaged__controller_current_abc_to_dq4_abc_to_dq1_alpha_beta_to_dq__k2 * _grid_feeding_inverter__averaged__controller_current_abc_to_dq4_abc_to_dq1_abc_to_alpha_beta__alpha - _grid_feeding_inverter__averaged__controller_current_abc_to_dq4_abc_to_dq1_alpha_beta_to_dq__k1 * _grid_feeding_inverter__averaged__controller_current_abc_to_dq4_abc_to_dq1_abc_to_alpha_beta__beta;
    _grid_feeding_inverter__averaged__controller_current_abc_to_dq4_abc_to_dq1_alpha_beta_to_dq__q = _grid_feeding_inverter__averaged__controller_current_abc_to_dq4_abc_to_dq1_alpha_beta_to_dq__k1 * _grid_feeding_inverter__averaged__controller_current_abc_to_dq4_abc_to_dq1_abc_to_alpha_beta__alpha + _grid_feeding_inverter__averaged__controller_current_abc_to_dq4_abc_to_dq1_alpha_beta_to_dq__k2 * _grid_feeding_inverter__averaged__controller_current_abc_to_dq4_abc_to_dq1_abc_to_alpha_beta__beta;
    // Generated from the component: Grid feeding inverter (averaged).Controller.Current_abc_to_dq3.Termination1
    // Generated from the component: Grid feeding inverter (averaged).Controller.Current_abc_to_dq3.abc to dq1.alpha beta to dq
    _grid_feeding_inverter__averaged__controller_current_abc_to_dq3_abc_to_dq1_alpha_beta_to_dq__k1 = cos(_grid_feeding_inverter__averaged__controller_pll2_pll_unit_delay1__out);
    _grid_feeding_inverter__averaged__controller_current_abc_to_dq3_abc_to_dq1_alpha_beta_to_dq__k2 = sin(_grid_feeding_inverter__averaged__controller_pll2_pll_unit_delay1__out);
    _grid_feeding_inverter__averaged__controller_current_abc_to_dq3_abc_to_dq1_alpha_beta_to_dq__d = _grid_feeding_inverter__averaged__controller_current_abc_to_dq3_abc_to_dq1_alpha_beta_to_dq__k2 * _grid_feeding_inverter__averaged__controller_current_abc_to_dq3_abc_to_dq1_abc_to_alpha_beta__alpha - _grid_feeding_inverter__averaged__controller_current_abc_to_dq3_abc_to_dq1_alpha_beta_to_dq__k1 * _grid_feeding_inverter__averaged__controller_current_abc_to_dq3_abc_to_dq1_abc_to_alpha_beta__beta;
    _grid_feeding_inverter__averaged__controller_current_abc_to_dq3_abc_to_dq1_alpha_beta_to_dq__q = _grid_feeding_inverter__averaged__controller_current_abc_to_dq3_abc_to_dq1_alpha_beta_to_dq__k1 * _grid_feeding_inverter__averaged__controller_current_abc_to_dq3_abc_to_dq1_abc_to_alpha_beta__alpha + _grid_feeding_inverter__averaged__controller_current_abc_to_dq3_abc_to_dq1_alpha_beta_to_dq__k2 * _grid_feeding_inverter__averaged__controller_current_abc_to_dq3_abc_to_dq1_abc_to_alpha_beta__beta;
    // Generated from the component: Grid feeding inverter (averaged).Controller.Current_abc_to_dq.Termination1
    // Generated from the component: Grid feeding inverter (averaged).Controller.Current_abc_to_dq.abc to dq1.alpha beta to dq
    _grid_feeding_inverter__averaged__controller_current_abc_to_dq_abc_to_dq1_alpha_beta_to_dq__k1 = cos(_grid_feeding_inverter__averaged__controller_pll2_pll_unit_delay1__out);
    _grid_feeding_inverter__averaged__controller_current_abc_to_dq_abc_to_dq1_alpha_beta_to_dq__k2 = sin(_grid_feeding_inverter__averaged__controller_pll2_pll_unit_delay1__out);
    _grid_feeding_inverter__averaged__controller_current_abc_to_dq_abc_to_dq1_alpha_beta_to_dq__d = _grid_feeding_inverter__averaged__controller_current_abc_to_dq_abc_to_dq1_alpha_beta_to_dq__k2 * _grid_feeding_inverter__averaged__controller_current_abc_to_dq_abc_to_dq1_abc_to_alpha_beta__alpha - _grid_feeding_inverter__averaged__controller_current_abc_to_dq_abc_to_dq1_alpha_beta_to_dq__k1 * _grid_feeding_inverter__averaged__controller_current_abc_to_dq_abc_to_dq1_abc_to_alpha_beta__beta;
    _grid_feeding_inverter__averaged__controller_current_abc_to_dq_abc_to_dq1_alpha_beta_to_dq__q = _grid_feeding_inverter__averaged__controller_current_abc_to_dq_abc_to_dq1_alpha_beta_to_dq__k1 * _grid_feeding_inverter__averaged__controller_current_abc_to_dq_abc_to_dq1_abc_to_alpha_beta__alpha + _grid_feeding_inverter__averaged__controller_current_abc_to_dq_abc_to_dq1_alpha_beta_to_dq__k2 * _grid_feeding_inverter__averaged__controller_current_abc_to_dq_abc_to_dq1_abc_to_alpha_beta__beta;
    // Generated from the component: Grid feeding inverter (averaged).Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Gain5
    _grid_feeding_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_gain5__out = 0.5 * _grid_feeding_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_signal_switch1__out;
    // Generated from the component: Grid feeding inverter (averaged).Controller.f1
    HIL_OutAO(0x400c, (float)_grid_feeding_inverter__averaged__controller_gain1__out);
    // Generated from the component: Grid feeding inverter (averaged).Controller.PLL2.PLL.abc to dq.LPF_d
    _grid_feeding_inverter__averaged__controller_pll2_pll_abc_to_dq_lpf_d__a_sum = 0.0f;
    _grid_feeding_inverter__averaged__controller_pll2_pll_abc_to_dq_lpf_d__b_sum = 0.0f;
    _grid_feeding_inverter__averaged__controller_pll2_pll_abc_to_dq_lpf_d__delay_line_in = 0.0f;
    for (_grid_feeding_inverter__averaged__controller_pll2_pll_abc_to_dq_lpf_d__i = 0; _grid_feeding_inverter__averaged__controller_pll2_pll_abc_to_dq_lpf_d__i < 1; _grid_feeding_inverter__averaged__controller_pll2_pll_abc_to_dq_lpf_d__i++) {
        _grid_feeding_inverter__averaged__controller_pll2_pll_abc_to_dq_lpf_d__b_sum += _grid_feeding_inverter__averaged__controller_pll2_pll_abc_to_dq_lpf_d__b_coeff[_grid_feeding_inverter__averaged__controller_pll2_pll_abc_to_dq_lpf_d__i + 1] * _grid_feeding_inverter__averaged__controller_pll2_pll_abc_to_dq_lpf_d__states[_grid_feeding_inverter__averaged__controller_pll2_pll_abc_to_dq_lpf_d__i];
    }
    _grid_feeding_inverter__averaged__controller_pll2_pll_abc_to_dq_lpf_d__a_sum += _grid_feeding_inverter__averaged__controller_pll2_pll_abc_to_dq_lpf_d__states[0] * _grid_feeding_inverter__averaged__controller_pll2_pll_abc_to_dq_lpf_d__a_coeff[1];
    _grid_feeding_inverter__averaged__controller_pll2_pll_abc_to_dq_lpf_d__delay_line_in = (_grid_feeding_inverter__averaged__controller_pll2_pll_abc_to_dq_alpha_beta_to_dq__d - _grid_feeding_inverter__averaged__controller_pll2_pll_abc_to_dq_lpf_d__a_sum) / _grid_feeding_inverter__averaged__controller_pll2_pll_abc_to_dq_lpf_d__a_coeff[0];
    _grid_feeding_inverter__averaged__controller_pll2_pll_abc_to_dq_lpf_d__b_sum += _grid_feeding_inverter__averaged__controller_pll2_pll_abc_to_dq_lpf_d__b_coeff[0] * _grid_feeding_inverter__averaged__controller_pll2_pll_abc_to_dq_lpf_d__delay_line_in;
    _grid_feeding_inverter__averaged__controller_pll2_pll_abc_to_dq_lpf_d__out = _grid_feeding_inverter__averaged__controller_pll2_pll_abc_to_dq_lpf_d__b_sum;
    // Generated from the component: Grid feeding inverter (averaged).Controller.PLL2.PLL.abc to dq.LPF_q
    _grid_feeding_inverter__averaged__controller_pll2_pll_abc_to_dq_lpf_q__a_sum = 0.0f;
    _grid_feeding_inverter__averaged__controller_pll2_pll_abc_to_dq_lpf_q__b_sum = 0.0f;
    _grid_feeding_inverter__averaged__controller_pll2_pll_abc_to_dq_lpf_q__delay_line_in = 0.0f;
    for (_grid_feeding_inverter__averaged__controller_pll2_pll_abc_to_dq_lpf_q__i = 0; _grid_feeding_inverter__averaged__controller_pll2_pll_abc_to_dq_lpf_q__i < 1; _grid_feeding_inverter__averaged__controller_pll2_pll_abc_to_dq_lpf_q__i++) {
        _grid_feeding_inverter__averaged__controller_pll2_pll_abc_to_dq_lpf_q__b_sum += _grid_feeding_inverter__averaged__controller_pll2_pll_abc_to_dq_lpf_q__b_coeff[_grid_feeding_inverter__averaged__controller_pll2_pll_abc_to_dq_lpf_q__i + 1] * _grid_feeding_inverter__averaged__controller_pll2_pll_abc_to_dq_lpf_q__states[_grid_feeding_inverter__averaged__controller_pll2_pll_abc_to_dq_lpf_q__i];
    }
    _grid_feeding_inverter__averaged__controller_pll2_pll_abc_to_dq_lpf_q__a_sum += _grid_feeding_inverter__averaged__controller_pll2_pll_abc_to_dq_lpf_q__states[0] * _grid_feeding_inverter__averaged__controller_pll2_pll_abc_to_dq_lpf_q__a_coeff[1];
    _grid_feeding_inverter__averaged__controller_pll2_pll_abc_to_dq_lpf_q__delay_line_in = (_grid_feeding_inverter__averaged__controller_pll2_pll_abc_to_dq_alpha_beta_to_dq__q - _grid_feeding_inverter__averaged__controller_pll2_pll_abc_to_dq_lpf_q__a_sum) / _grid_feeding_inverter__averaged__controller_pll2_pll_abc_to_dq_lpf_q__a_coeff[0];
    _grid_feeding_inverter__averaged__controller_pll2_pll_abc_to_dq_lpf_q__b_sum += _grid_feeding_inverter__averaged__controller_pll2_pll_abc_to_dq_lpf_q__b_coeff[0] * _grid_feeding_inverter__averaged__controller_pll2_pll_abc_to_dq_lpf_q__delay_line_in;
    _grid_feeding_inverter__averaged__controller_pll2_pll_abc_to_dq_lpf_q__out = _grid_feeding_inverter__averaged__controller_pll2_pll_abc_to_dq_lpf_q__b_sum;
    // Generated from the component: Grid feeding inverter (averaged).Controller.Gain11
    _grid_feeding_inverter__averaged__controller_gain11__out = 0.0019586857838867367 * _grid_feeding_inverter__averaged__controller_current_abc_to_dq4_abc_to_dq1_alpha_beta_to_dq__d;
    // Generated from the component: Grid feeding inverter (averaged).Controller.Gain12
    _grid_feeding_inverter__averaged__controller_gain12__out = 0.0019586857838867367 * _grid_feeding_inverter__averaged__controller_current_abc_to_dq4_abc_to_dq1_alpha_beta_to_dq__q;
    // Generated from the component: Grid feeding inverter (averaged).Controller.Gain10
    _grid_feeding_inverter__averaged__controller_gain10__out = 0.0025527320620452976 * _grid_feeding_inverter__averaged__controller_current_abc_to_dq3_abc_to_dq1_alpha_beta_to_dq__q;
    // Generated from the component: Grid feeding inverter (averaged).Controller.Gain9
    _grid_feeding_inverter__averaged__controller_gain9__out = 0.0025527320620452976 * _grid_feeding_inverter__averaged__controller_current_abc_to_dq3_abc_to_dq1_alpha_beta_to_dq__d;
    // Generated from the component: Grid feeding inverter (averaged).Controller.Gain6
    _grid_feeding_inverter__averaged__controller_gain6__out = 0.0019586857838867367 * _grid_feeding_inverter__averaged__controller_current_abc_to_dq_abc_to_dq1_alpha_beta_to_dq__d;
    // Generated from the component: Grid feeding inverter (averaged).Controller.Gain7
    _grid_feeding_inverter__averaged__controller_gain7__out = 0.0019586857838867367 * _grid_feeding_inverter__averaged__controller_current_abc_to_dq_abc_to_dq1_alpha_beta_to_dq__q;
    // Generated from the component: Grid feeding inverter (averaged).Controller.Xi_d
    HIL_OutAO(0x400a, (float)_grid_feeding_inverter__averaged__controller_current_abc_to_dq_abc_to_dq1_alpha_beta_to_dq__d);
    // Generated from the component: Grid feeding inverter (averaged).Controller.Xi_q
    HIL_OutAO(0x400b, (float)_grid_feeding_inverter__averaged__controller_current_abc_to_dq_abc_to_dq1_alpha_beta_to_dq__q);
    // Generated from the component: Grid feeding inverter (averaged).Controller.Gain5
    _grid_feeding_inverter__averaged__controller_gain5__out = 0.0025527320620452976 * _grid_feeding_inverter__averaged__controller_pll2_pll_abc_to_dq_lpf_d__out;
    // Generated from the component: Grid feeding inverter (averaged).Controller.Gain8
    _grid_feeding_inverter__averaged__controller_gain8__out = 0.0025527320620452976 * _grid_feeding_inverter__averaged__controller_pll2_pll_abc_to_dq_lpf_q__out;
    // Generated from the component: Grid feeding inverter (averaged).Controller.PLL2.PLL.normalize
    _grid_feeding_inverter__averaged__controller_pll2_pll_normalize__in1 = _grid_feeding_inverter__averaged__controller_pll2_pll_abc_to_dq_lpf_d__out;
    _grid_feeding_inverter__averaged__controller_pll2_pll_normalize__in2 = _grid_feeding_inverter__averaged__controller_pll2_pll_abc_to_dq_lpf_q__out;
    _grid_feeding_inverter__averaged__controller_pll2_pll_normalize__pk = (powf(_grid_feeding_inverter__averaged__controller_pll2_pll_normalize__in1, 2.0) + powf(_grid_feeding_inverter__averaged__controller_pll2_pll_normalize__in2, 2.0));
    _grid_feeding_inverter__averaged__controller_pll2_pll_normalize__pk = sqrt(_grid_feeding_inverter__averaged__controller_pll2_pll_normalize__pk);
    if (_grid_feeding_inverter__averaged__controller_pll2_pll_normalize__pk < 0.1) {
        _grid_feeding_inverter__averaged__controller_pll2_pll_normalize__in2_pu = _grid_feeding_inverter__averaged__controller_pll2_pll_normalize__in2 / 0.1;
    }
    else {
        _grid_feeding_inverter__averaged__controller_pll2_pll_normalize__in2_pu = _grid_feeding_inverter__averaged__controller_pll2_pll_normalize__in2 / _grid_feeding_inverter__averaged__controller_pll2_pll_normalize__pk;
    }
    // Generated from the component: Grid feeding inverter (averaged).Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Gain7
    _grid_feeding_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_gain7__out = 0.006 * _grid_feeding_inverter__averaged__controller_gain6__out;
    // Generated from the component: Grid feeding inverter (averaged).Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Gain6
    _grid_feeding_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_gain6__out = 0.006 * _grid_feeding_inverter__averaged__controller_gain7__out;
    // Generated from the component: Grid feeding inverter (averaged).Controller.Outer Voltage Loop + Inner Current Loop.squared_Vt2.Product1
    _grid_feeding_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_squared_vt2_product1__out = (_grid_feeding_inverter__averaged__controller_gain5__out * _grid_feeding_inverter__averaged__controller_gain5__out);
    // Generated from the component: Grid feeding inverter (averaged).Controller.Product111
    _grid_feeding_inverter__averaged__controller_product111__out = (_grid_feeding_inverter__averaged__controller_gain5__out * _grid_feeding_inverter__averaged__controller_gain11__out);
    // Generated from the component: Grid feeding inverter (averaged).Controller.Product12
    _grid_feeding_inverter__averaged__controller_product12__out = (_grid_feeding_inverter__averaged__controller_gain5__out * _grid_feeding_inverter__averaged__controller_gain12__out);
    // Generated from the component: Grid feeding inverter (averaged).Controller.Outer Voltage Loop + Inner Current Loop.squared_Vt2.Product2
    _grid_feeding_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_squared_vt2_product2__out = (_grid_feeding_inverter__averaged__controller_gain8__out * _grid_feeding_inverter__averaged__controller_gain8__out);
    // Generated from the component: Grid feeding inverter (averaged).Controller.Product10
    _grid_feeding_inverter__averaged__controller_product10__out = (_grid_feeding_inverter__averaged__controller_gain11__out * _grid_feeding_inverter__averaged__controller_gain8__out);
    // Generated from the component: Grid feeding inverter (averaged).Controller.Product13
    _grid_feeding_inverter__averaged__controller_product13__out = (_grid_feeding_inverter__averaged__controller_gain8__out * _grid_feeding_inverter__averaged__controller_gain12__out);
    // Generated from the component: Grid feeding inverter (averaged).Controller.PLL2.PLL.PID.Kd
    _grid_feeding_inverter__averaged__controller_pll2_pll_pid_kd__out = 1.0 * _grid_feeding_inverter__averaged__controller_pll2_pll_normalize__in2_pu;
    // Generated from the component: Grid feeding inverter (averaged).Controller.PLL2.PLL.PID.Ki
    _grid_feeding_inverter__averaged__controller_pll2_pll_pid_ki__out = 3200.0 * _grid_feeding_inverter__averaged__controller_pll2_pll_normalize__in2_pu;
    // Generated from the component: Grid feeding inverter (averaged).Controller.PLL2.PLL.PID.Kp
    _grid_feeding_inverter__averaged__controller_pll2_pll_pid_kp__out = 100.0 * _grid_feeding_inverter__averaged__controller_pll2_pll_normalize__in2_pu;
    // Generated from the component: Grid feeding inverter (averaged).Controller.PLL2.PLL.term_pk
    // Generated from the component: Grid feeding inverter (averaged).Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Product2
    _grid_feeding_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_product2__out = (_grid_feeding_inverter__averaged__controller_pll2_2pi__out * _grid_feeding_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_gain7__out);
    // Generated from the component: Grid feeding inverter (averaged).Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Product1
    _grid_feeding_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_product1__out = (_grid_feeding_inverter__averaged__controller_pll2_2pi__out * _grid_feeding_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_gain6__out);
    // Generated from the component: Grid feeding inverter (averaged).Controller.Outer Voltage Loop + Inner Current Loop.squared_Vt2.Sum3
    _grid_feeding_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_squared_vt2_sum3__out = _grid_feeding_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_squared_vt2_product1__out + _grid_feeding_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_squared_vt2_product2__out;
    // Generated from the component: Grid feeding inverter (averaged).Controller.Sum2
    _grid_feeding_inverter__averaged__controller_sum2__out = _grid_feeding_inverter__averaged__controller_product10__out - _grid_feeding_inverter__averaged__controller_product12__out;
    // Generated from the component: Grid feeding inverter (averaged).Controller.Sum1
    _grid_feeding_inverter__averaged__controller_sum1__out = _grid_feeding_inverter__averaged__controller_product111__out + _grid_feeding_inverter__averaged__controller_product13__out;
    // Generated from the component: Grid feeding inverter (averaged).Controller.PLL2.PLL.PID.Sum8
    _grid_feeding_inverter__averaged__controller_pll2_pll_pid_sum8__out = _grid_feeding_inverter__averaged__controller_pll2_pll_pid_kd__out - _grid_feeding_inverter__averaged__controller_pll2_pll_pid_integrator2__out;
    // Generated from the component: Grid feeding inverter (averaged).Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Sum6
    _grid_feeding_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum6__out = _grid_feeding_inverter__averaged__controller_gain8__out + _grid_feeding_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_product2__out;
    // Generated from the component: Grid feeding inverter (averaged).Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Sum5
    _grid_feeding_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum5__out = _grid_feeding_inverter__averaged__controller_gain5__out - _grid_feeding_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_product1__out;
    // Generated from the component: Grid feeding inverter (averaged).Controller.Outer Voltage Loop + Inner Current Loop.outer power loop.Comparator1
    if (_grid_feeding_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_squared_vt2_sum3__out < _grid_feeding_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_outer_power_loop_limit_zero__out) {
        _grid_feeding_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_outer_power_loop_comparator1__out = 0;
    } else if (_grid_feeding_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_squared_vt2_sum3__out > _grid_feeding_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_outer_power_loop_limit_zero__out) {
        _grid_feeding_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_outer_power_loop_comparator1__out = 1;
    } else {
        _grid_feeding_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_outer_power_loop_comparator1__out = _grid_feeding_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_outer_power_loop_comparator1__state;
    }
    // Generated from the component: Grid feeding inverter (averaged).Controller.Outer Voltage Loop + Inner Current Loop.outer power loop.Et_sqr
    HIL_OutAO(0x4006, (float)_grid_feeding_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_squared_vt2_sum3__out);
    // Generated from the component: Grid feeding inverter (averaged).Controller.Gain16
    _grid_feeding_inverter__averaged__controller_gain16__out = 300000.0 * _grid_feeding_inverter__averaged__controller_sum2__out;
    // Generated from the component: Grid feeding inverter (averaged).Controller.Gain15
    _grid_feeding_inverter__averaged__controller_gain15__out = 300000.0 * _grid_feeding_inverter__averaged__controller_sum1__out;
    // Generated from the component: Grid feeding inverter (averaged).Controller.PLL2.PLL.PID.Gain1
    _grid_feeding_inverter__averaged__controller_pll2_pll_pid_gain1__out = 714.2857 * _grid_feeding_inverter__averaged__controller_pll2_pll_pid_sum8__out;
    // Generated from the component: Grid feeding inverter (averaged).Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Product4
    _grid_feeding_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_product4__out = (_grid_feeding_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum6__out) * 1.0 / (_grid_feeding_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_gain5__out);
    // Generated from the component: Grid feeding inverter (averaged).Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Product3
    _grid_feeding_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_product3__out = (_grid_feeding_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum5__out) * 1.0 / (_grid_feeding_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_gain5__out);
    // Generated from the component: Grid feeding inverter (averaged).Controller.Outer Voltage Loop + Inner Current Loop.outer power loop.Signal switch1
    _grid_feeding_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_outer_power_loop_signal_switch1__out = (_grid_feeding_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_outer_power_loop_comparator1__out < 0.5f) ? _grid_feeding_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_outer_power_loop_limit_zero1__out : _grid_feeding_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_squared_vt2_sum3__out;
    // Generated from the component: Grid feeding inverter (averaged).Bus Join4
    _grid_feeding_inverter__averaged__bus_join4__out[0] = _q_ref_ess__out;
    _grid_feeding_inverter__averaged__bus_join4__out[1] = _grid_feeding_inverter__averaged__controller_gain16__out;
    // Generated from the component: Grid feeding inverter (averaged).Controller.Q1
    HIL_OutAO(0x4009, (float)_grid_feeding_inverter__averaged__controller_gain16__out);
    // Generated from the component: Grid feeding inverter (averaged).Bus Join5
    _grid_feeding_inverter__averaged__bus_join5__out[0] = _p_ref_ess__out;
    _grid_feeding_inverter__averaged__bus_join5__out[1] = _grid_feeding_inverter__averaged__controller_gain15__out;
    // Generated from the component: Grid feeding inverter (averaged).Controller.P1
    HIL_OutAO(0x4008, (float)_grid_feeding_inverter__averaged__controller_gain15__out);
    // Generated from the component: Grid feeding inverter (averaged).Controller.PLL2.PLL.PID.Sum5
    _grid_feeding_inverter__averaged__controller_pll2_pll_pid_sum5__out = _grid_feeding_inverter__averaged__controller_pll2_pll_pid_kp__out + _grid_feeding_inverter__averaged__controller_pll2_pll_pid_gain1__out + _grid_feeding_inverter__averaged__controller_pll2_pll_pid_integrator1__out;
    // Generated from the component: Grid feeding inverter (averaged).Controller.Outer Voltage Loop + Inner Current Loop.outer power loop.Et_sqr_res
    HIL_OutAO(0x4007, (float)_grid_feeding_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_outer_power_loop_signal_switch1__out);
    // Generated from the component: Grid feeding inverter (averaged).C function5
    _grid_feeding_inverter__averaged__c_function5__in[0] = _grid_feeding_inverter__averaged__bus_join4__out[0];
    _grid_feeding_inverter__averaged__c_function5__in[1] = _grid_feeding_inverter__averaged__bus_join4__out[1];
    _grid_feeding_inverter__averaged__c_function5__out = 1000 * _grid_feeding_inverter__averaged__c_function5__prev;
    // Generated from the component: Grid feeding inverter (averaged).C function3
    _grid_feeding_inverter__averaged__c_function3__in[0] = _grid_feeding_inverter__averaged__bus_join5__out[0];
    _grid_feeding_inverter__averaged__c_function3__in[1] = _grid_feeding_inverter__averaged__bus_join5__out[1];
    _grid_feeding_inverter__averaged__c_function3__out = 1000 * _grid_feeding_inverter__averaged__c_function3__prev;
    // Generated from the component: Grid feeding inverter (averaged).Controller.PLL2.PLL.PID.Limit1
    if (_grid_feeding_inverter__averaged__controller_pll2_pll_pid_sum5__out > 10000.0) {
        _grid_feeding_inverter__averaged__controller_pll2_pll_pid_limit1__out = 10000.0;
    } else if (_grid_feeding_inverter__averaged__controller_pll2_pll_pid_sum5__out < -10000.0) {
        _grid_feeding_inverter__averaged__controller_pll2_pll_pid_limit1__out = -10000.0;
    } else {
        _grid_feeding_inverter__averaged__controller_pll2_pll_pid_limit1__out = _grid_feeding_inverter__averaged__controller_pll2_pll_pid_sum5__out;
    }
    // Generated from the component: Grid feeding inverter (averaged).Gain15
    _grid_feeding_inverter__averaged__gain15__out = 5e-06 * _grid_feeding_inverter__averaged__c_function5__out;
    // Generated from the component: Grid feeding inverter (averaged).Qref_probe
    HIL_OutAO(0x4011, (float)_grid_feeding_inverter__averaged__c_function5__out);
    // Generated from the component: Grid feeding inverter (averaged).Gain16
    _grid_feeding_inverter__averaged__gain16__out = 5e-06 * _grid_feeding_inverter__averaged__c_function3__out;
    // Generated from the component: Grid feeding inverter (averaged).Pref_probe
    HIL_OutAO(0x4010, (float)_grid_feeding_inverter__averaged__c_function3__out);
    // Generated from the component: Grid feeding inverter (averaged).Controller.PLL2.PLL.PID.Sum6
    _grid_feeding_inverter__averaged__controller_pll2_pll_pid_sum6__out =  - _grid_feeding_inverter__averaged__controller_pll2_pll_pid_sum5__out + _grid_feeding_inverter__averaged__controller_pll2_pll_pid_limit1__out;
    // Generated from the component: Grid feeding inverter (averaged).Controller.PLL2.PLL.Rate Limiter1
    if (_grid_feeding_inverter__averaged__controller_pll2_pll_rate_limiter1__first_step) {
        _grid_feeding_inverter__averaged__controller_pll2_pll_rate_limiter1__out = _grid_feeding_inverter__averaged__controller_pll2_pll_pid_limit1__out;
    } else {
        _grid_feeding_inverter__averaged__controller_pll2_pll_rate_limiter1__out = _grid_feeding_inverter__averaged__controller_pll2_pll_pid_limit1__out;
        _grid_feeding_inverter__averaged__controller_pll2_pll_rate_limiter1__in_rate = _grid_feeding_inverter__averaged__controller_pll2_pll_pid_limit1__out - _grid_feeding_inverter__averaged__controller_pll2_pll_rate_limiter1__prev_out;
        if (_grid_feeding_inverter__averaged__controller_pll2_pll_rate_limiter1__in_rate > 0.015079644737231007) {
            _grid_feeding_inverter__averaged__controller_pll2_pll_rate_limiter1__out = _grid_feeding_inverter__averaged__controller_pll2_pll_rate_limiter1__prev_out + (0.015079644737231007);
        }
        if (_grid_feeding_inverter__averaged__controller_pll2_pll_rate_limiter1__in_rate < -0.015079644737231007) {
            _grid_feeding_inverter__averaged__controller_pll2_pll_rate_limiter1__out = _grid_feeding_inverter__averaged__controller_pll2_pll_rate_limiter1__prev_out + (-0.015079644737231007);
        }
    }
    // Generated from the component: Grid feeding inverter (averaged).Controller.PLL2.PLL.integrator
    _grid_feeding_inverter__averaged__controller_pll2_pll_integrator__in = _grid_feeding_inverter__averaged__controller_pll2_pll_pid_limit1__out;
    _grid_feeding_inverter__averaged__controller_pll2_pll_integrator__out += 0.0002 * _grid_feeding_inverter__averaged__controller_pll2_pll_integrator__in;
    if (_grid_feeding_inverter__averaged__controller_pll2_pll_integrator__in >= 0.0) {
        if (_grid_feeding_inverter__averaged__controller_pll2_pll_integrator__out >= 6.283185307179586) {
            _grid_feeding_inverter__averaged__controller_pll2_pll_integrator__out -= 6.283185307179586;
        }
    }
    else {
        if (_grid_feeding_inverter__averaged__controller_pll2_pll_integrator__out <= -6.283185307179586) {
            _grid_feeding_inverter__averaged__controller_pll2_pll_integrator__out += 6.283185307179586;
        }
    }
    // Generated from the component: Grid feeding inverter (averaged).Controller.Outer Voltage Loop + Inner Current Loop.outer power loop.Product4
    _grid_feeding_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_outer_power_loop_product4__out = (_grid_feeding_inverter__averaged__controller_gain8__out * _grid_feeding_inverter__averaged__gain15__out);
    // Generated from the component: Grid feeding inverter (averaged).Controller.Outer Voltage Loop + Inner Current Loop.outer power loop.Product6
    _grid_feeding_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_outer_power_loop_product6__out = (_grid_feeding_inverter__averaged__gain15__out * _grid_feeding_inverter__averaged__controller_gain5__out);
    // Generated from the component: Grid feeding inverter (averaged).Controller.Outer Voltage Loop + Inner Current Loop.outer power loop.Product3
    _grid_feeding_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_outer_power_loop_product3__out = (_grid_feeding_inverter__averaged__controller_gain5__out * _grid_feeding_inverter__averaged__gain16__out);
    // Generated from the component: Grid feeding inverter (averaged).Controller.Outer Voltage Loop + Inner Current Loop.outer power loop.Product5
    _grid_feeding_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_outer_power_loop_product5__out = (_grid_feeding_inverter__averaged__gain16__out * _grid_feeding_inverter__averaged__controller_gain8__out);
    // Generated from the component: Grid feeding inverter (averaged).Controller.PLL2.PLL.PID.Kb
    _grid_feeding_inverter__averaged__controller_pll2_pll_pid_kb__out = 1.0 * _grid_feeding_inverter__averaged__controller_pll2_pll_pid_sum6__out;
    // Generated from the component: Grid feeding inverter (averaged).Controller.PLL2.PLL.LPF.LPF
    _grid_feeding_inverter__averaged__controller_pll2_pll_lpf_lpf__a_sum = 0.0f;
    _grid_feeding_inverter__averaged__controller_pll2_pll_lpf_lpf__b_sum = 0.0f;
    _grid_feeding_inverter__averaged__controller_pll2_pll_lpf_lpf__delay_line_in = 0.0f;
    for (_grid_feeding_inverter__averaged__controller_pll2_pll_lpf_lpf__i = 0; _grid_feeding_inverter__averaged__controller_pll2_pll_lpf_lpf__i < 1; _grid_feeding_inverter__averaged__controller_pll2_pll_lpf_lpf__i++) {
        _grid_feeding_inverter__averaged__controller_pll2_pll_lpf_lpf__b_sum += _grid_feeding_inverter__averaged__controller_pll2_pll_lpf_lpf__b_coeff[_grid_feeding_inverter__averaged__controller_pll2_pll_lpf_lpf__i] * _grid_feeding_inverter__averaged__controller_pll2_pll_lpf_lpf__states[_grid_feeding_inverter__averaged__controller_pll2_pll_lpf_lpf__i + 1];
    }
    for (_grid_feeding_inverter__averaged__controller_pll2_pll_lpf_lpf__i = 1; _grid_feeding_inverter__averaged__controller_pll2_pll_lpf_lpf__i > 0; _grid_feeding_inverter__averaged__controller_pll2_pll_lpf_lpf__i--) {
        _grid_feeding_inverter__averaged__controller_pll2_pll_lpf_lpf__a_sum += _grid_feeding_inverter__averaged__controller_pll2_pll_lpf_lpf__a_coeff[_grid_feeding_inverter__averaged__controller_pll2_pll_lpf_lpf__i + 1] * _grid_feeding_inverter__averaged__controller_pll2_pll_lpf_lpf__states[_grid_feeding_inverter__averaged__controller_pll2_pll_lpf_lpf__i];
    }
    _grid_feeding_inverter__averaged__controller_pll2_pll_lpf_lpf__a_sum += _grid_feeding_inverter__averaged__controller_pll2_pll_lpf_lpf__states[0] * _grid_feeding_inverter__averaged__controller_pll2_pll_lpf_lpf__a_coeff[1];
    _grid_feeding_inverter__averaged__controller_pll2_pll_lpf_lpf__delay_line_in = _grid_feeding_inverter__averaged__controller_pll2_pll_rate_limiter1__out - _grid_feeding_inverter__averaged__controller_pll2_pll_lpf_lpf__a_sum;
    _grid_feeding_inverter__averaged__controller_pll2_pll_lpf_lpf__out = _grid_feeding_inverter__averaged__controller_pll2_pll_lpf_lpf__b_sum;
    // Generated from the component: Grid feeding inverter (averaged).Controller.Outer Voltage Loop + Inner Current Loop.outer power loop.Sum3
    _grid_feeding_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_outer_power_loop_sum3__out = _grid_feeding_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_outer_power_loop_product3__out - _grid_feeding_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_outer_power_loop_product4__out;
    // Generated from the component: Grid feeding inverter (averaged).Controller.Outer Voltage Loop + Inner Current Loop.outer power loop.Sum4
    _grid_feeding_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_outer_power_loop_sum4__out = _grid_feeding_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_outer_power_loop_product5__out + _grid_feeding_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_outer_power_loop_product6__out;
    // Generated from the component: Grid feeding inverter (averaged).Controller.PLL2.PLL.PID.Sum7
    _grid_feeding_inverter__averaged__controller_pll2_pll_pid_sum7__out = _grid_feeding_inverter__averaged__controller_pll2_pll_pid_ki__out + _grid_feeding_inverter__averaged__controller_pll2_pll_pid_kb__out;
    // Generated from the component: Grid feeding inverter (averaged).Controller.Outer Voltage Loop + Inner Current Loop.outer power loop.Product1
    _grid_feeding_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_outer_power_loop_product1__out = (_grid_feeding_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_outer_power_loop_sum3__out) * 1.0 / (_grid_feeding_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_outer_power_loop_signal_switch1__out);
    // Generated from the component: Grid feeding inverter (averaged).Controller.Outer Voltage Loop + Inner Current Loop.outer power loop.Product2
    _grid_feeding_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_outer_power_loop_product2__out = (_grid_feeding_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_outer_power_loop_sum4__out) * 1.0 / (_grid_feeding_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_outer_power_loop_signal_switch1__out);
    // Generated from the component: Grid feeding inverter (averaged).Controller.Outer Voltage Loop + Inner Current Loop.outer power loop.Gain1
    _grid_feeding_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_outer_power_loop_gain1__out = 0.6666666666666666 * _grid_feeding_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_outer_power_loop_product1__out;
    // Generated from the component: Grid feeding inverter (averaged).Controller.Outer Voltage Loop + Inner Current Loop.outer power loop.Gain2
    _grid_feeding_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_outer_power_loop_gain2__out = 0.6666666666666666 * _grid_feeding_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_outer_power_loop_product2__out;
    // Generated from the component: Grid feeding inverter (averaged).Controller.Outer Voltage Loop + Inner Current Loop.Gain8
    _grid_feeding_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_gain8__out = 510.54641240905954 * _grid_feeding_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_outer_power_loop_gain1__out;
    // Generated from the component: Grid feeding inverter (averaged).Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Sum9
    _grid_feeding_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum9__out = _grid_feeding_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_outer_power_loop_gain1__out - _grid_feeding_inverter__averaged__controller_gain7__out;
    // Generated from the component: Grid feeding inverter (averaged).Controller.Outer Voltage Loop + Inner Current Loop.Gain7
    _grid_feeding_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_gain7__out = 510.54641240905954 * _grid_feeding_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_outer_power_loop_gain2__out;
    // Generated from the component: Grid feeding inverter (averaged).Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Sum8
    _grid_feeding_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum8__out = _grid_feeding_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_outer_power_loop_gain2__out - _grid_feeding_inverter__averaged__controller_gain6__out;
    // Generated from the component: Grid feeding inverter (averaged).Controller.Outer Voltage Loop + Inner Current Loop.Xi_q_ref
    HIL_OutAO(0x4005, (float)_grid_feeding_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_gain8__out);
    // Generated from the component: Grid feeding inverter (averaged).Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.PID controller2
    _grid_feeding_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__pi_reg_out_int = _grid_feeding_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__integrator_state + 0.015 * _grid_feeding_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum9__out;
    if (_grid_feeding_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__pi_reg_out_int < -1.0) {
        _grid_feeding_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__out = -1.0;
        _grid_feeding_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__av_active = 1;
    } else if (_grid_feeding_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__pi_reg_out_int > 1.0) {
        _grid_feeding_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__out = 1.0;
        _grid_feeding_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__av_active = 1;
    } else {
        _grid_feeding_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__out = _grid_feeding_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__pi_reg_out_int;
        _grid_feeding_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__av_active = 0;
    }
    // Generated from the component: Grid feeding inverter (averaged).Controller.Outer Voltage Loop + Inner Current Loop.Xi_d_ref
    HIL_OutAO(0x4004, (float)_grid_feeding_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_gain7__out);
    // Generated from the component: Grid feeding inverter (averaged).Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.PID controller1
    _grid_feeding_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__pi_reg_out_int = _grid_feeding_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__integrator_state + 0.015 * _grid_feeding_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum8__out;
    if (_grid_feeding_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__pi_reg_out_int < -1.0) {
        _grid_feeding_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__out = -1.0;
        _grid_feeding_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__av_active = 1;
    } else if (_grid_feeding_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__pi_reg_out_int > 1.0) {
        _grid_feeding_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__out = 1.0;
        _grid_feeding_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__av_active = 1;
    } else {
        _grid_feeding_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__out = _grid_feeding_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__pi_reg_out_int;
        _grid_feeding_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__av_active = 0;
    }
    // Generated from the component: Grid feeding inverter (averaged).Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Sum7
    _grid_feeding_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum7__out = _grid_feeding_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__out + _grid_feeding_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_product4__out;
    // Generated from the component: Grid feeding inverter (averaged).Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Sum3
    _grid_feeding_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum3__out = _grid_feeding_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__out + _grid_feeding_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_product3__out;
    // Generated from the component: Grid feeding inverter (averaged).Controller.Outer Voltage Loop + Inner Current Loop.Gain6
    _grid_feeding_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_gain6__out = 391.73715677734737 * _grid_feeding_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum7__out;
    // Generated from the component: Grid feeding inverter (averaged).Controller.Outer Voltage Loop + Inner Current Loop.Gain5
    _grid_feeding_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_gain5__out = 391.73715677734737 * _grid_feeding_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum3__out;
    // Generated from the component: Grid feeding inverter (averaged).Controller.Outer Voltage Loop + Inner Current Loop.Uq
    HIL_OutAO(0x4003, (float)_grid_feeding_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_gain6__out);
    // Generated from the component: Grid feeding inverter (averaged).Controller.Outer Voltage Loop + Inner Current Loop.Ud
    HIL_OutAO(0x4002, (float)_grid_feeding_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_gain5__out);
    // Generated from the component: Grid feeding inverter (averaged).Controller.Outer Voltage Loop + Inner Current Loop.dq to abc.dq to abc1.dq to alpha beta
    _grid_feeding_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_dq_to_abc_dq_to_abc1_dq_to_alpha_beta__k1 = cos(_grid_feeding_inverter__averaged__controller_pll2_pll_unit_delay1__out);
    _grid_feeding_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_dq_to_abc_dq_to_abc1_dq_to_alpha_beta__k2 = sin(_grid_feeding_inverter__averaged__controller_pll2_pll_unit_delay1__out);
    _grid_feeding_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_dq_to_abc_dq_to_abc1_dq_to_alpha_beta__alpha = _grid_feeding_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_dq_to_abc_dq_to_abc1_dq_to_alpha_beta__k2 * _grid_feeding_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_gain5__out + _grid_feeding_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_dq_to_abc_dq_to_abc1_dq_to_alpha_beta__k1 * _grid_feeding_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_gain6__out;
    _grid_feeding_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_dq_to_abc_dq_to_abc1_dq_to_alpha_beta__beta = _grid_feeding_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_dq_to_abc_dq_to_abc1_dq_to_alpha_beta__k2 * _grid_feeding_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_gain6__out - _grid_feeding_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_dq_to_abc_dq_to_abc1_dq_to_alpha_beta__k1 * _grid_feeding_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_gain5__out;
    // Generated from the component: Grid feeding inverter (averaged).Controller.Outer Voltage Loop + Inner Current Loop.dq to abc.dq to abc1.alpha beta to abc
    _grid_feeding_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_dq_to_abc_dq_to_abc1_alpha_beta_to_abc__A = 1 * _grid_feeding_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_dq_to_abc_o_ref__out;
    _grid_feeding_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_dq_to_abc_dq_to_abc1_alpha_beta_to_abc__B = _grid_feeding_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_dq_to_abc_dq_to_abc1_alpha_beta_to_abc__A - 0.5 * _grid_feeding_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_dq_to_abc_dq_to_abc1_dq_to_alpha_beta__alpha;
    _grid_feeding_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_dq_to_abc_dq_to_abc1_alpha_beta_to_abc__C = _grid_feeding_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_dq_to_abc_dq_to_abc1_alpha_beta_to_abc__B - 0.8660254037844386 * _grid_feeding_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_dq_to_abc_dq_to_abc1_dq_to_alpha_beta__beta;
    _grid_feeding_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_dq_to_abc_dq_to_abc1_alpha_beta_to_abc__B += 0.8660254037844386 * _grid_feeding_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_dq_to_abc_dq_to_abc1_dq_to_alpha_beta__beta;
    _grid_feeding_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_dq_to_abc_dq_to_abc1_alpha_beta_to_abc__A += 1 * _grid_feeding_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_dq_to_abc_dq_to_abc1_dq_to_alpha_beta__alpha;
    // Generated from the component: Grid feeding inverter (averaged).Controller.Bus Join1
    _grid_feeding_inverter__averaged__controller_bus_join1__out[0] = _grid_feeding_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_dq_to_abc_dq_to_abc1_alpha_beta_to_abc__A;
    _grid_feeding_inverter__averaged__controller_bus_join1__out[1] = _grid_feeding_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_dq_to_abc_dq_to_abc1_alpha_beta_to_abc__B;
    _grid_feeding_inverter__averaged__controller_bus_join1__out[2] = _grid_feeding_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_dq_to_abc_dq_to_abc1_alpha_beta_to_abc__C;
    // Generated from the component: Grid feeding inverter (averaged).Product1
    _grid_feeding_inverter__averaged__product1__out[0] = (_grid_feeding_inverter__averaged__controller_bus_join1__out[0]) * (_grid_feeding_inverter__averaged__gain1__out);
    _grid_feeding_inverter__averaged__product1__out[1] = (_grid_feeding_inverter__averaged__controller_bus_join1__out[1]) * (_grid_feeding_inverter__averaged__gain1__out);
    _grid_feeding_inverter__averaged__product1__out[2] = (_grid_feeding_inverter__averaged__controller_bus_join1__out[2]) * (_grid_feeding_inverter__averaged__gain1__out);
    // Generated from the component: Grid feeding inverter (averaged).Bus Split1
    _grid_feeding_inverter__averaged__bus_split1__out = _grid_feeding_inverter__averaged__product1__out[0];
    _grid_feeding_inverter__averaged__bus_split1__out1 = _grid_feeding_inverter__averaged__product1__out[1];
    _grid_feeding_inverter__averaged__bus_split1__out2 = _grid_feeding_inverter__averaged__product1__out[2];
    // Generated from the component: Grid feeding inverter (averaged).Va_inv.Vs1
    HIL_OutFloat(137101312, (float) _grid_feeding_inverter__averaged__bus_split1__out);
    // Generated from the component: Grid feeding inverter (averaged).Vb_inv.Vs1
    HIL_OutFloat(137101313, (float) _grid_feeding_inverter__averaged__bus_split1__out1);
    // Generated from the component: Grid feeding inverter (averaged).Vc_inv.Vs1
    HIL_OutFloat(137101314, (float) _grid_feeding_inverter__averaged__bus_split1__out2);
    //@cmp.out.block.end
    //////////////////////////////////////////////////////////////////////////
    // Update block
    //////////////////////////////////////////////////////////////////////////
    //@cmp.update.block.start
    // Generated from the component: Grid feeding inverter (averaged).Controller.PLL2.PLL.PID.Integrator1
    _grid_feeding_inverter__averaged__controller_pll2_pll_pid_integrator1__state += _grid_feeding_inverter__averaged__controller_pll2_pll_pid_sum7__out * 0.0002;
    // Generated from the component: Grid feeding inverter (averaged).Controller.PLL2.PLL.PID.Integrator2
    _grid_feeding_inverter__averaged__controller_pll2_pll_pid_integrator2__state += _grid_feeding_inverter__averaged__controller_pll2_pll_pid_gain1__out * 0.0002;
    // Generated from the component: Grid feeding inverter (averaged).Controller.PLL2.PLL.Unit Delay1
    _grid_feeding_inverter__averaged__controller_pll2_pll_unit_delay1__state = _grid_feeding_inverter__averaged__controller_pll2_pll_integrator__out;
    // Generated from the component: Grid feeding inverter (averaged).Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Comparator1
    if (_grid_feeding_inverter__averaged__constant1__out < _grid_feeding_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_limit_zero__out) {
        _grid_feeding_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_comparator1__state = 0;
    } else if (_grid_feeding_inverter__averaged__constant1__out > _grid_feeding_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_limit_zero__out) {
        _grid_feeding_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_comparator1__state = 1;
    }
    // Generated from the component: Grid feeding inverter (averaged).Controller.PLL2.PLL.abc to dq.LPF_d
    _grid_feeding_inverter__averaged__controller_pll2_pll_abc_to_dq_lpf_d__states[0] = _grid_feeding_inverter__averaged__controller_pll2_pll_abc_to_dq_lpf_d__delay_line_in;
    // Generated from the component: Grid feeding inverter (averaged).Controller.PLL2.PLL.abc to dq.LPF_q
    _grid_feeding_inverter__averaged__controller_pll2_pll_abc_to_dq_lpf_q__states[0] = _grid_feeding_inverter__averaged__controller_pll2_pll_abc_to_dq_lpf_q__delay_line_in;
    // Generated from the component: Grid feeding inverter (averaged).Controller.PLL2.PLL.normalize
    // Generated from the component: Grid feeding inverter (averaged).Controller.Outer Voltage Loop + Inner Current Loop.outer power loop.Comparator1
    if (_grid_feeding_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_squared_vt2_sum3__out < _grid_feeding_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_outer_power_loop_limit_zero__out) {
        _grid_feeding_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_outer_power_loop_comparator1__state = 0;
    } else if (_grid_feeding_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_squared_vt2_sum3__out > _grid_feeding_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_outer_power_loop_limit_zero__out) {
        _grid_feeding_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_outer_power_loop_comparator1__state = 1;
    }
    // Generated from the component: Grid feeding inverter (averaged).C function5
    if (_grid_feeding_inverter__averaged__c_function5__out - _grid_feeding_inverter__averaged__c_function5__in[1] < 40 && _grid_feeding_inverter__averaged__c_function5__out - _grid_feeding_inverter__averaged__c_function5__in[1] > -40) {
        _grid_feeding_inverter__averaged__c_function5__prev = _grid_feeding_inverter__averaged__c_function5__prev + 3e-8 * (_grid_feeding_inverter__averaged__c_function5__in[0] - _grid_feeding_inverter__averaged__c_function5__prev);
    }
    // Generated from the component: Grid feeding inverter (averaged).C function3
    if (_grid_feeding_inverter__averaged__c_function3__out - _grid_feeding_inverter__averaged__c_function3__in[1] < 40 && _grid_feeding_inverter__averaged__c_function3__out - _grid_feeding_inverter__averaged__c_function3__in[1] > -40) {
        _grid_feeding_inverter__averaged__c_function3__prev = _grid_feeding_inverter__averaged__c_function3__prev + 3e-8 * (_grid_feeding_inverter__averaged__c_function3__in[0] - _grid_feeding_inverter__averaged__c_function3__prev);
    }
    // Generated from the component: Grid feeding inverter (averaged).Controller.PLL2.PLL.Rate Limiter1
    _grid_feeding_inverter__averaged__controller_pll2_pll_rate_limiter1__prev_out = _grid_feeding_inverter__averaged__controller_pll2_pll_rate_limiter1__out;
    _grid_feeding_inverter__averaged__controller_pll2_pll_rate_limiter1__first_step = 0;
    // Generated from the component: Grid feeding inverter (averaged).Controller.PLL2.PLL.integrator
    // Generated from the component: Grid feeding inverter (averaged).Controller.PLL2.PLL.LPF.LPF
    for (_grid_feeding_inverter__averaged__controller_pll2_pll_lpf_lpf__i = 1; _grid_feeding_inverter__averaged__controller_pll2_pll_lpf_lpf__i > 0; _grid_feeding_inverter__averaged__controller_pll2_pll_lpf_lpf__i--) {
        _grid_feeding_inverter__averaged__controller_pll2_pll_lpf_lpf__states[_grid_feeding_inverter__averaged__controller_pll2_pll_lpf_lpf__i] = _grid_feeding_inverter__averaged__controller_pll2_pll_lpf_lpf__states[_grid_feeding_inverter__averaged__controller_pll2_pll_lpf_lpf__i - 1];
    }
    _grid_feeding_inverter__averaged__controller_pll2_pll_lpf_lpf__states[0] = _grid_feeding_inverter__averaged__controller_pll2_pll_lpf_lpf__delay_line_in;
    // Generated from the component: Grid feeding inverter (averaged).Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.PID controller2
    if (!_grid_feeding_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__av_active) {
        _grid_feeding_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__integrator_state += 0.1 * _grid_feeding_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum9__out * 0.0002;
    }
    // Generated from the component: Grid feeding inverter (averaged).Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.PID controller1
    if (!_grid_feeding_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__av_active) {
        _grid_feeding_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__integrator_state += 0.1 * _grid_feeding_inverter__averaged__controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum8__out * 0.0002;
    }
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
    // Generated from the component: ESS_Ia.Ia1
    _ess_ia_ia1__out = (HIL_InFloat(0xc80000 + 0x207));
    // Generated from the component: ESS_Ib.Ia1
    _ess_ib_ia1__out = (HIL_InFloat(0xc80000 + 0x208));
    // Generated from the component: ESS_Ic.Ia1
    _ess_ic_ia1__out = (HIL_InFloat(0xc80000 + 0x209));
    // Generated from the component: Va.Va1
    _va_va1__out = (HIL_InFloat(0xc80000 + 0x203));
    // Generated from the component: Vb.Va1
    _vb_va1__out = (HIL_InFloat(0xc80000 + 0x204));
    // Generated from the component: Vc.Va1
    _vc_va1__out = (HIL_InFloat(0xc80000 + 0x205));
    // Generated from the component: Power Meter1
    _power_meter1__v_alpha = SQRT_2OVER3 * ( _va_va1__out - 0.5f * _vb_va1__out - 0.5f * _vc_va1__out);
    _power_meter1__v_beta = SQRT_2OVER3 * (SQRT3_OVER_2 * _vb_va1__out - SQRT3_OVER_2 * _vc_va1__out);
    _power_meter1__i_alpha = SQRT_2OVER3 * ( _ess_ia_ia1__out - 0.5f * _ess_ib_ia1__out - 0.5f * _ess_ic_ia1__out);
    _power_meter1__i_beta = SQRT_2OVER3 * (SQRT3_OVER_2 * _ess_ib_ia1__out - SQRT3_OVER_2 * _ess_ic_ia1__out);
    _power_meter1__v_zero = ONE_DIV_BY_SQRT_3 * (_va_va1__out + _vb_va1__out + _vc_va1__out);
    _power_meter1__i_zero = ONE_DIV_BY_SQRT_3 * (_ess_ia_ia1__out + _ess_ib_ia1__out + _ess_ic_ia1__out);
    _power_meter1__Pac = _power_meter1__v_alpha * _power_meter1__i_alpha + _power_meter1__v_beta * _power_meter1__i_beta;
    _power_meter1__Qac = _power_meter1__v_beta * _power_meter1__i_alpha - _power_meter1__v_alpha * _power_meter1__i_beta;
    _power_meter1__P0ac = _power_meter1__v_zero * _power_meter1__i_zero;
    _power_meter1__filter_1_output = 0.08613019954354689 * (_power_meter1__Pac + _power_meter1__filter_1_input_k_minus_1) - (-0.8277396009129062) * _power_meter1__filter_1_output_k_minus_1;
    _power_meter1__filter_1_outputQ = 0.08613019954354689 * (_power_meter1__Qac + _power_meter1__filter_1_input_k_minus_1Q) - (-0.8277396009129062) * _power_meter1__filter_1_output_k_minus_1Q;
    _power_meter1__filter_1_outputP0 = 0.08613019954354689 * (_power_meter1__P0ac + _power_meter1__filter_1_input_k_minus_1P0) - (-0.8277396009129062) * _power_meter1__filter_1_output_k_minus_1P0;
    _power_meter1__filter_1_input_k_minus_1 = _power_meter1__Pac;
    _power_meter1__filter_1_output_k_minus_1 = _power_meter1__filter_1_output;
    _power_meter1__filter_1_input_k_minus_1Q = _power_meter1__Qac;;
    _power_meter1__filter_1_output_k_minus_1Q = _power_meter1__filter_1_outputQ;
    _power_meter1__filter_1_input_k_minus_1P0 = _power_meter1__P0ac;
    _power_meter1__filter_1_output_k_minus_1P0 = _power_meter1__filter_1_outputP0;
    _power_meter1__Pdc = _power_meter1__filter_1_output;
    _power_meter1__Qdc = _power_meter1__filter_1_outputQ;
    _power_meter1__P0dc = _power_meter1__filter_1_outputP0;
    _power_meter1__apparent = sqrt(pow(_power_meter1__Pdc, 2) + pow(_power_meter1__Qdc, 2));
    if (_power_meter1__apparent > 0)
        _power_meter1__k_factor = _power_meter1__Pdc / _power_meter1__apparent;
    else
        _power_meter1__k_factor = 0;
    // Generated from the component: P
    HIL_OutAO(0x4013, (float)_power_meter1__Pdc);
    // Generated from the component: Q
    HIL_OutAO(0x4014, (float)_power_meter1__Qdc);
    //@cmp.out.block.end
    //////////////////////////////////////////////////////////////////////////
    // Update block
    //////////////////////////////////////////////////////////////////////////
    //@cmp.update.block.start
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
    // Generated from the component: Grid feeding inverter (averaged).Vrms.cpu_trans.Output
    _grid_feeding_inverter__averaged__vrms_cpu_trans_output__out = XIo_InFloat(0x55000100);
    // Generated from the component: Grid feeding inverter (averaged).Vrms_ess
    HIL_OutAO(0x4012, (float)_grid_feeding_inverter__averaged__vrms_cpu_trans_output__out);
    //@cmp.out.block.end
    //////////////////////////////////////////////////////////////////////////
    // Update block
    //////////////////////////////////////////////////////////////////////////
    //@cmp.update.block.start
    //@cmp.update.block.end
}
// ----------------------------------------------------------------------------------------  //-----------------------------------------------------------------------------------------