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
#include <stdint.h>

// x86 libraries:
#include "../include/sp_functions_dev0.h"

// H files from Advanced C Function components

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
X_Int32 _f2_pcc_f2_pcc__out;
double _f2_pcc_meas1_ia_ia1__out;
double _f2_pcc_meas1_ib_ia1__out;
double _f2_pcc_meas1_ic_ia1__out;
double _f2_pcc_meas1_va_va1__out;
double _f2_pcc_meas1_vb_va1__out;
double _f2_pcc_meas1_vc_va1__out;
double _f2_pcc_meas2_va_va1__out;
double _f2_pcc_meas2_vb_va1__out;
double _f2_pcc_meas2_vc_va1__out;
double _f2_pcc_pcc_measurements_constant1__out = 1.0;
double _f2_pcc_pcc_measurements_constant2__out = 1.0;
double _f2_pcc_pcc_measurements_three_phase_pll1_pid_integrator1__out;
double _f2_pcc_pcc_measurements_three_phase_pll1_pid_integrator2__out;
double _f2_pcc_pcc_measurements_three_phase_pll1_unit_delay1__out;
double _f2_pcc_pcc_measurements_three_phase_pll1_to_hz__out;
double _f2_pcc_data_type_conversion1__out;
double _f2_pcc_meas1_bus_join2__out[3];
double _f2_pcc_meas1_bus_join1__out[3];
double _f2_pcc_meas2_bus_join1__out[3];
double _f2_pcc_pcc_measurements_three_phase_pll1_sin__out;
double _f2_pcc_gain4__out;
double _f2_pcc_pcc_measurements_bus_split2__out;
double _f2_pcc_pcc_measurements_bus_split2__out1;
double _f2_pcc_pcc_measurements_bus_split2__out2;
double _f2_pcc_pcc_measurements_bus_split1__out;
double _f2_pcc_pcc_measurements_bus_split1__out1;
double _f2_pcc_pcc_measurements_bus_split1__out2;
double _f2_pcc_pcc_measurements_power_meter1__Pdc;
double _f2_pcc_pcc_measurements_power_meter1__Qdc;
double _f2_pcc_pcc_measurements_power_meter1__P0dc;
double _f2_pcc_pcc_measurements_power_meter1__Pac;
double _f2_pcc_pcc_measurements_power_meter1__Qac;
double _f2_pcc_pcc_measurements_power_meter1__P0ac;
double _f2_pcc_pcc_measurements_power_meter1__apparent;
double _f2_pcc_pcc_measurements_power_meter1__k_factor;
double _f2_pcc_pcc_measurements_power_meter1__v_alpha;
double _f2_pcc_pcc_measurements_power_meter1__v_beta;
double _f2_pcc_pcc_measurements_power_meter1__i_alpha;
double _f2_pcc_pcc_measurements_power_meter1__i_beta;
double _f2_pcc_pcc_measurements_power_meter1__v_zero;
double _f2_pcc_pcc_measurements_power_meter1__i_zero;
double _f2_pcc_pcc_measurements_power_meter1__filter_1_output;
double _f2_pcc_pcc_measurements_power_meter1__filter_1_outputQ;
double _f2_pcc_pcc_measurements_power_meter1__filter_1_outputP0;
double _f2_pcc_pcc_measurements_rms_value1__out;
double _f2_pcc_pcc_measurements_rms_value1__previous_value;
double _f2_pcc_pcc_measurements_rms_value1__previous_filtered_value;
double _f2_pcc_pcc_measurements_rms_value1__correction;
double _f2_pcc_pcc_measurements_rms_value1__previous_correction;
X_UnInt32 _f2_pcc_pcc_measurements_rms_value1__zc;
double _f2_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_abc_to_alpha_beta__alpha;
double _f2_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_abc_to_alpha_beta__beta;
double _f2_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_abc_to_alpha_beta__gamma;
double _f2_pcc_pcc_measurements_comparator1__out;
double _f2_pcc_pcc_measurements_comparator2__out;
double _f2_pcc_w____kw__out;
double _f2_pcc_var____kvar__out;
double _f2_pcc_gain3__out;
double _f2_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_alpha_beta_to_dq__d;
double _f2_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_alpha_beta_to_dq__q;
double _f2_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_alpha_beta_to_dq__k1;
double _f2_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_alpha_beta_to_dq__k2;
double _f2_pcc_gain1__out;
double _f2_pcc_gain2__out;
double _f2_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_d__out;
double _f2_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_d__b_coeff[2] = {0.056548667763, 0.056548667763};
double _f2_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_d__a_coeff[2] = {2.056548667763, -1.943451332237};
double _f2_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_d__a_sum;
double _f2_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_d__b_sum;
double _f2_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_d__delay_line_in;
X_UnInt32 _f2_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_d__i;
double _f2_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_q__out;
double _f2_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_q__b_coeff[2] = {0.056548667763, 0.056548667763};
double _f2_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_q__a_coeff[2] = {2.056548667763, -1.943451332237};
double _f2_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_q__a_sum;
double _f2_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_q__b_sum;
double _f2_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_q__delay_line_in;
X_UnInt32 _f2_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_q__i;
double _f2_pcc_bus_join1__out[8];

double _f2_pcc_pcc_measurements_three_phase_pll1_normalize__in1;
double _f2_pcc_pcc_measurements_three_phase_pll1_normalize__in2;


double _f2_pcc_pcc_measurements_three_phase_pll1_normalize__in2_pu;
double _f2_pcc_pcc_measurements_three_phase_pll1_normalize__pk;
double _f2_pcc_pcc_measurements_three_phase_pll1_pid_kd__out;
double _f2_pcc_pcc_measurements_three_phase_pll1_pid_ki__out;
double _f2_pcc_pcc_measurements_three_phase_pll1_pid_kp__out;
double _f2_pcc_pcc_measurements_three_phase_pll1_pid_sum8__out;
double _f2_pcc_pcc_measurements_three_phase_pll1_pid_gain1__out;
double _f2_pcc_pcc_measurements_three_phase_pll1_pid_sum5__out;
double _f2_pcc_pcc_measurements_three_phase_pll1_pid_limit1__out;
double _f2_pcc_pcc_measurements_three_phase_pll1_pid_sum6__out;
double _f2_pcc_pcc_measurements_three_phase_pll1_rate_limiter1__out;

double _f2_pcc_pcc_measurements_three_phase_pll1_integrator__in;


double _f2_pcc_pcc_measurements_three_phase_pll1_integrator__out;
double _f2_pcc_pcc_measurements_three_phase_pll1_pid_kb__out;
double _f2_pcc_pcc_measurements_three_phase_pll1_lpf_lpf__out;
double _f2_pcc_pcc_measurements_three_phase_pll1_lpf_lpf__b_coeff[2] = {2.220446049250313e-16, 0.01998594059628933};
double _f2_pcc_pcc_measurements_three_phase_pll1_lpf_lpf__a_coeff[3] = {1.0, -1.8001005010400002, 0.8200864416362899};
double _f2_pcc_pcc_measurements_three_phase_pll1_lpf_lpf__a_sum;
double _f2_pcc_pcc_measurements_three_phase_pll1_lpf_lpf__b_sum;
double _f2_pcc_pcc_measurements_three_phase_pll1_lpf_lpf__delay_line_in;
X_UnInt32 _f2_pcc_pcc_measurements_three_phase_pll1_lpf_lpf__i;
double _f2_pcc_pcc_measurements_three_phase_pll1_pid_sum7__out;
//@cmp.var.end

//@cmp.svar.start
// state variables
double _f2_pcc_pcc_measurements_three_phase_pll1_pid_integrator1__state;
double _f2_pcc_pcc_measurements_three_phase_pll1_pid_integrator2__state;
double _f2_pcc_pcc_measurements_three_phase_pll1_unit_delay1__state;
double _f2_pcc_pcc_measurements_power_meter1__filter_1_output_k_minus_1;
double _f2_pcc_pcc_measurements_power_meter1__filter_1_input_k_minus_1;
double _f2_pcc_pcc_measurements_power_meter1__filter_1_output_k_minus_1Q;
double _f2_pcc_pcc_measurements_power_meter1__filter_1_input_k_minus_1Q;
double _f2_pcc_pcc_measurements_power_meter1__filter_1_output_k_minus_1P0;
double _f2_pcc_pcc_measurements_power_meter1__filter_1_input_k_minus_1P0;
double _f2_pcc_pcc_measurements_rms_value1__square_sum;
double _f2_pcc_pcc_measurements_rms_value1__sample_cnt;
double _f2_pcc_pcc_measurements_rms_value1__filtered_value;
double _f2_pcc_pcc_measurements_rms_value1__out_state;
double _f2_pcc_pcc_measurements_comparator1__state;
double _f2_pcc_pcc_measurements_comparator2__state;
double _f2_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_d__states[1];
double _f2_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_q__states[1];
double _f2_pcc_pcc_measurements_three_phase_pll1_rate_limiter1__state;
X_Int32 _f2_pcc_pcc_measurements_three_phase_pll1_rate_limiter1__first_step;
double _f2_pcc_pcc_measurements_three_phase_pll1_lpf_lpf__states[2];
//@cmp.svar.end




// generated using template: virtual_hil/custom_functions.template---------------------------------
void ReInit_user_sp_cpu0_dev0() {
#if DEBUG_MODE
    printf("\n\rReInitTimer");
#endif
    //@cmp.init.block.start
    _f2_pcc_pcc_measurements_three_phase_pll1_pid_integrator1__state = 376.99111843;
    _f2_pcc_pcc_measurements_three_phase_pll1_pid_integrator2__state = 0.0;
    _f2_pcc_pcc_measurements_three_phase_pll1_unit_delay1__state = 0.0;
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
    HIL_OutAO(0x4001, 0.0f);
    _f2_pcc_pcc_measurements_comparator1__state = 0.0f;
    _f2_pcc_pcc_measurements_comparator2__state = 0.0f;
    HIL_OutAO(0x4002, 0.0f);
    for (_f2_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_d__i = 0; _f2_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_d__i < 1; _f2_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_d__i++) {
        _f2_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_d__states[_f2_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_d__i] = 0;
    }
    for (_f2_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_q__i = 0; _f2_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_q__i < 1; _f2_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_q__i++) {
        _f2_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_q__states[_f2_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_q__i] = 0;
    }
    _f2_pcc_pcc_measurements_three_phase_pll1_normalize__in1 = 0;
    _f2_pcc_pcc_measurements_three_phase_pll1_normalize__in2 = 0;
    _f2_pcc_pcc_measurements_three_phase_pll1_normalize__pk = 0;
    _f2_pcc_pcc_measurements_three_phase_pll1_rate_limiter1__state = 0;
    _f2_pcc_pcc_measurements_three_phase_pll1_rate_limiter1__first_step = 1;
    _f2_pcc_pcc_measurements_three_phase_pll1_integrator__out = 0;
    _f2_pcc_pcc_measurements_three_phase_pll1_integrator__in = 0;
    for (_f2_pcc_pcc_measurements_three_phase_pll1_lpf_lpf__i = 0; _f2_pcc_pcc_measurements_three_phase_pll1_lpf_lpf__i < 2; _f2_pcc_pcc_measurements_three_phase_pll1_lpf_lpf__i++) {
        _f2_pcc_pcc_measurements_three_phase_pll1_lpf_lpf__states[_f2_pcc_pcc_measurements_three_phase_pll1_lpf_lpf__i] = 0;
    }
    //@cmp.init.block.end
}

void ReInit_sp_scope_user_sp_cpu0_dev0() {
    // initialise SP Scope buffer pointer
}

void user_terminate_fmu_objects_cpu0_dev0(void) {
    return;
}

// generated using template:generic_macros.template-----------------------------------------
/*********************** Macros (Inline Functions) Definitions ***************************/

// ----------------------------------------------------------------------------------------

#ifndef MAX
#define MAX(value, limit) (((value) > (limit)) ? (value) : (limit))
#endif
#ifndef MIN
#define MIN(value, limit) (((value) < (limit)) ? (value) : (limit))
#endif

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

void TimerCounterHandler_0_user_sp_cpu0_dev0() {
#if DEBUG_MODE
    printf("\n\rTimerCounterHandler_0");
#endif
    //////////////////////////////////////////////////////////////////////////
    // Output block
    //////////////////////////////////////////////////////////////////////////
    //@cmp.out.block.start
    // Generated from the component: F2_PCC.F2_PCC
    _f2_pcc_f2_pcc__out = XIo_InInt32(0x55000108);
    // Generated from the component: F2_PCC.Meas1.IA.Ia1
    _f2_pcc_meas1_ia_ia1__out = (HIL_InFloat(0xc80000 + 0x10));
    // Generated from the component: F2_PCC.Meas1.IB.Ia1
    _f2_pcc_meas1_ib_ia1__out = (HIL_InFloat(0xc80000 + 0x11));
    // Generated from the component: F2_PCC.Meas1.IC.Ia1
    _f2_pcc_meas1_ic_ia1__out = (HIL_InFloat(0xc80000 + 0x12));
    // Generated from the component: F2_PCC.Meas1.VA.Va1
    _f2_pcc_meas1_va_va1__out = (HIL_InFloat(0xc80000 + 0x9));
    // Generated from the component: F2_PCC.Meas1.VB.Va1
    _f2_pcc_meas1_vb_va1__out = (HIL_InFloat(0xc80000 + 0xa));
    // Generated from the component: F2_PCC.Meas1.VC.Va1
    _f2_pcc_meas1_vc_va1__out = (HIL_InFloat(0xc80000 + 0xb));
    // Generated from the component: F2_PCC.Meas2.VA.Va1
    _f2_pcc_meas2_va_va1__out = (HIL_InFloat(0xc80000 + 0xc));
    // Generated from the component: F2_PCC.Meas2.VB.Va1
    _f2_pcc_meas2_vb_va1__out = (HIL_InFloat(0xc80000 + 0xd));
    // Generated from the component: F2_PCC.Meas2.VC.Va1
    _f2_pcc_meas2_vc_va1__out = (HIL_InFloat(0xc80000 + 0xe));
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
    // Generated from the component: F2_PCC.Data Type Conversion1
    _f2_pcc_data_type_conversion1__out = (double)_f2_pcc_f2_pcc__out;
    // Generated from the component: F2_PCC.S1.CTC_Wrapper
    if (_f2_pcc_f2_pcc__out == 0x0) {
        HIL_OutInt32(0x8240480, 0x0);
    }
    else {
        HIL_OutInt32(0x8240480, 0x1);
    }
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
    _f2_pcc_pcc_measurements_three_phase_pll1_sin__out = sin(_f2_pcc_pcc_measurements_three_phase_pll1_unit_delay1__out);
    // Generated from the component: F2_PCC.Gain4
    _f2_pcc_gain4__out = 100.0 * _f2_pcc_pcc_measurements_three_phase_pll1_to_hz__out;
    // Generated from the component: F2_PCC.PCC Measurements.Bus Split2
    _f2_pcc_pcc_measurements_bus_split2__out = _f2_pcc_meas1_bus_join2__out[0];
    _f2_pcc_pcc_measurements_bus_split2__out1 = _f2_pcc_meas1_bus_join2__out[1];
    _f2_pcc_pcc_measurements_bus_split2__out2 = _f2_pcc_meas1_bus_join2__out[2];
    // Generated from the component: F2_PCC.PCC Measurements.Bus Split1
    _f2_pcc_pcc_measurements_bus_split1__out = _f2_pcc_meas1_bus_join1__out[0];
    _f2_pcc_pcc_measurements_bus_split1__out1 = _f2_pcc_meas1_bus_join1__out[1];
    _f2_pcc_pcc_measurements_bus_split1__out2 = _f2_pcc_meas1_bus_join1__out[2];
    // Generated from the component: F2_PCC.Termination5
    // Generated from the component: F2_PCC.PCC Measurements.Termination5
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
    _f2_pcc_pcc_measurements_power_meter1__filter_1_output = 0.07819063710683709 * (_f2_pcc_pcc_measurements_power_meter1__Pac + _f2_pcc_pcc_measurements_power_meter1__filter_1_input_k_minus_1) - (-0.8436187257863258) * _f2_pcc_pcc_measurements_power_meter1__filter_1_output_k_minus_1;
    _f2_pcc_pcc_measurements_power_meter1__filter_1_outputQ = 0.07819063710683709 * (_f2_pcc_pcc_measurements_power_meter1__Qac + _f2_pcc_pcc_measurements_power_meter1__filter_1_input_k_minus_1Q) - (-0.8436187257863258) * _f2_pcc_pcc_measurements_power_meter1__filter_1_output_k_minus_1Q;
    _f2_pcc_pcc_measurements_power_meter1__filter_1_outputP0 = 0.07819063710683709 * (_f2_pcc_pcc_measurements_power_meter1__P0ac + _f2_pcc_pcc_measurements_power_meter1__filter_1_input_k_minus_1P0) - (-0.8436187257863258) * _f2_pcc_pcc_measurements_power_meter1__filter_1_output_k_minus_1P0;
    _f2_pcc_pcc_measurements_power_meter1__filter_1_input_k_minus_1 = _f2_pcc_pcc_measurements_power_meter1__Pac;
    _f2_pcc_pcc_measurements_power_meter1__filter_1_output_k_minus_1 = _f2_pcc_pcc_measurements_power_meter1__filter_1_output;
    _f2_pcc_pcc_measurements_power_meter1__filter_1_input_k_minus_1Q = _f2_pcc_pcc_measurements_power_meter1__Qac;;
    _f2_pcc_pcc_measurements_power_meter1__filter_1_output_k_minus_1Q = _f2_pcc_pcc_measurements_power_meter1__filter_1_outputQ;
    _f2_pcc_pcc_measurements_power_meter1__filter_1_input_k_minus_1P0 = _f2_pcc_pcc_measurements_power_meter1__P0ac;
    _f2_pcc_pcc_measurements_power_meter1__filter_1_output_k_minus_1P0 = _f2_pcc_pcc_measurements_power_meter1__filter_1_outputP0;
    _f2_pcc_pcc_measurements_power_meter1__Pdc = _f2_pcc_pcc_measurements_power_meter1__filter_1_output;
    _f2_pcc_pcc_measurements_power_meter1__Qdc = _f2_pcc_pcc_measurements_power_meter1__filter_1_outputQ;
    _f2_pcc_pcc_measurements_power_meter1__P0dc = _f2_pcc_pcc_measurements_power_meter1__filter_1_outputP0;
    _f2_pcc_pcc_measurements_power_meter1__apparent = sqrt(pow(_f2_pcc_pcc_measurements_power_meter1__Pdc, 2) + pow(_f2_pcc_pcc_measurements_power_meter1__Qdc, 2));
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
    // Generated from the component: F2_PCC.P
    HIL_OutAO(0x4001, (float)_f2_pcc_pcc_measurements_power_meter1__Pdc);
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
    HIL_OutAO(0x4002, (float)_f2_pcc_pcc_measurements_power_meter1__Qdc);
    // Generated from the component: F2_PCC.W -> kW
    _f2_pcc_w____kw__out = 0.001 * _f2_pcc_pcc_measurements_power_meter1__Pdc;
    // Generated from the component: F2_PCC.var -> kvar
    _f2_pcc_var____kvar__out = 0.001 * _f2_pcc_pcc_measurements_power_meter1__Qdc;
    // Generated from the component: F2_PCC.Gain3
    _f2_pcc_gain3__out = 100.0 * _f2_pcc_pcc_measurements_rms_value1__out;
    // Generated from the component: F2_PCC.PCC Measurements.Termination3
    // Generated from the component: F2_PCC.PCC Measurements.Three phase PLL1.abc to dq.alpha beta to dq
    _f2_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_alpha_beta_to_dq__k1 = cos(_f2_pcc_pcc_measurements_three_phase_pll1_unit_delay1__out);
    _f2_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_alpha_beta_to_dq__k2 = sin(_f2_pcc_pcc_measurements_three_phase_pll1_unit_delay1__out);
    _f2_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_alpha_beta_to_dq__d = _f2_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_alpha_beta_to_dq__k2 * _f2_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_abc_to_alpha_beta__alpha - _f2_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_alpha_beta_to_dq__k1 * _f2_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_abc_to_alpha_beta__beta;
    _f2_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_alpha_beta_to_dq__q = _f2_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_alpha_beta_to_dq__k1 * _f2_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_abc_to_alpha_beta__alpha + _f2_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_alpha_beta_to_dq__k2 * _f2_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_abc_to_alpha_beta__beta;
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
    // Generated from the component: F2_PCC.Termination1
    // Generated from the component: F2_PCC.PCC Measurements.Three phase PLL1.PID.Kd
    _f2_pcc_pcc_measurements_three_phase_pll1_pid_kd__out = 1.0 * _f2_pcc_pcc_measurements_three_phase_pll1_normalize__in2_pu;
    // Generated from the component: F2_PCC.PCC Measurements.Three phase PLL1.PID.Ki
    _f2_pcc_pcc_measurements_three_phase_pll1_pid_ki__out = 3200.0 * _f2_pcc_pcc_measurements_three_phase_pll1_normalize__in2_pu;
    // Generated from the component: F2_PCC.PCC Measurements.Three phase PLL1.PID.Kp
    _f2_pcc_pcc_measurements_three_phase_pll1_pid_kp__out = 100.0 * _f2_pcc_pcc_measurements_three_phase_pll1_normalize__in2_pu;
    // Generated from the component: F2_PCC.PCC Measurements.Three phase PLL1.term_pk
    // Generated from the component: F2_PCC.PCC Measurements.Three phase PLL1.PID.Sum8
    _f2_pcc_pcc_measurements_three_phase_pll1_pid_sum8__out = _f2_pcc_pcc_measurements_three_phase_pll1_pid_kd__out - _f2_pcc_pcc_measurements_three_phase_pll1_pid_integrator2__out;
    // Generated from the component: F2_PCC.PCC Measurements.Three phase PLL1.PID.Gain1
    _f2_pcc_pcc_measurements_three_phase_pll1_pid_gain1__out = 714.2857 * _f2_pcc_pcc_measurements_three_phase_pll1_pid_sum8__out;
    // Generated from the component: F2_PCC.PCC Measurements.Three phase PLL1.PID.Sum5
    _f2_pcc_pcc_measurements_three_phase_pll1_pid_sum5__out = _f2_pcc_pcc_measurements_three_phase_pll1_pid_kp__out + _f2_pcc_pcc_measurements_three_phase_pll1_pid_gain1__out + _f2_pcc_pcc_measurements_three_phase_pll1_pid_integrator1__out;
    // Generated from the component: F2_PCC.PCC Measurements.Three phase PLL1.PID.Limit1
    _f2_pcc_pcc_measurements_three_phase_pll1_pid_limit1__out = MIN(MAX(_f2_pcc_pcc_measurements_three_phase_pll1_pid_sum5__out, -10000.0), 10000.0);
    // Generated from the component: F2_PCC.PCC Measurements.Three phase PLL1.PID.Sum6
    _f2_pcc_pcc_measurements_three_phase_pll1_pid_sum6__out =  - _f2_pcc_pcc_measurements_three_phase_pll1_pid_sum5__out + _f2_pcc_pcc_measurements_three_phase_pll1_pid_limit1__out;
    // Generated from the component: F2_PCC.PCC Measurements.Three phase PLL1.Rate Limiter1
    if (_f2_pcc_pcc_measurements_three_phase_pll1_rate_limiter1__first_step) {
        _f2_pcc_pcc_measurements_three_phase_pll1_rate_limiter1__out = _f2_pcc_pcc_measurements_three_phase_pll1_pid_limit1__out;
        _f2_pcc_pcc_measurements_three_phase_pll1_rate_limiter1__state = _f2_pcc_pcc_measurements_three_phase_pll1_pid_limit1__out;
    } else {
        _f2_pcc_pcc_measurements_three_phase_pll1_rate_limiter1__out = _f2_pcc_pcc_measurements_three_phase_pll1_pid_limit1__out;
        if (_f2_pcc_pcc_measurements_three_phase_pll1_pid_limit1__out - _f2_pcc_pcc_measurements_three_phase_pll1_rate_limiter1__state > 0.06785840131753954)
            _f2_pcc_pcc_measurements_three_phase_pll1_rate_limiter1__out = _f2_pcc_pcc_measurements_three_phase_pll1_rate_limiter1__state + (0.06785840131753954);
        if (_f2_pcc_pcc_measurements_three_phase_pll1_pid_limit1__out - _f2_pcc_pcc_measurements_three_phase_pll1_rate_limiter1__state < -0.06785840131753954)
            _f2_pcc_pcc_measurements_three_phase_pll1_rate_limiter1__out = _f2_pcc_pcc_measurements_three_phase_pll1_rate_limiter1__state + (-0.06785840131753954);
    }
    // Generated from the component: F2_PCC.PCC Measurements.Three phase PLL1.integrator
    _f2_pcc_pcc_measurements_three_phase_pll1_integrator__in = _f2_pcc_pcc_measurements_three_phase_pll1_pid_limit1__out;
    _f2_pcc_pcc_measurements_three_phase_pll1_integrator__out += 0.0009 * _f2_pcc_pcc_measurements_three_phase_pll1_integrator__in;
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
    // Generated from the component: F2_PCC.PCC Measurements.Three phase PLL1.PID.Kb
    _f2_pcc_pcc_measurements_three_phase_pll1_pid_kb__out = 1.0 * _f2_pcc_pcc_measurements_three_phase_pll1_pid_sum6__out;
    // Generated from the component: F2_PCC.PCC Measurements.Three phase PLL1.LPF.LPF
    _f2_pcc_pcc_measurements_three_phase_pll1_lpf_lpf__a_sum = 0.0f;
    _f2_pcc_pcc_measurements_three_phase_pll1_lpf_lpf__b_sum = 0.0f;
    _f2_pcc_pcc_measurements_three_phase_pll1_lpf_lpf__delay_line_in = 0.0f;
    for (_f2_pcc_pcc_measurements_three_phase_pll1_lpf_lpf__i = 0; _f2_pcc_pcc_measurements_three_phase_pll1_lpf_lpf__i < 2; _f2_pcc_pcc_measurements_three_phase_pll1_lpf_lpf__i++) {
        _f2_pcc_pcc_measurements_three_phase_pll1_lpf_lpf__b_sum += _f2_pcc_pcc_measurements_three_phase_pll1_lpf_lpf__b_coeff[_f2_pcc_pcc_measurements_three_phase_pll1_lpf_lpf__i] * _f2_pcc_pcc_measurements_three_phase_pll1_lpf_lpf__states[_f2_pcc_pcc_measurements_three_phase_pll1_lpf_lpf__i + 0];
    }
    for (_f2_pcc_pcc_measurements_three_phase_pll1_lpf_lpf__i = 1; _f2_pcc_pcc_measurements_three_phase_pll1_lpf_lpf__i > 0; _f2_pcc_pcc_measurements_three_phase_pll1_lpf_lpf__i--) {
        _f2_pcc_pcc_measurements_three_phase_pll1_lpf_lpf__a_sum += _f2_pcc_pcc_measurements_three_phase_pll1_lpf_lpf__a_coeff[_f2_pcc_pcc_measurements_three_phase_pll1_lpf_lpf__i + 1] * _f2_pcc_pcc_measurements_three_phase_pll1_lpf_lpf__states[_f2_pcc_pcc_measurements_three_phase_pll1_lpf_lpf__i];
    }
    _f2_pcc_pcc_measurements_three_phase_pll1_lpf_lpf__a_sum += _f2_pcc_pcc_measurements_three_phase_pll1_lpf_lpf__states[0] * _f2_pcc_pcc_measurements_three_phase_pll1_lpf_lpf__a_coeff[1];
    _f2_pcc_pcc_measurements_three_phase_pll1_lpf_lpf__delay_line_in = _f2_pcc_pcc_measurements_three_phase_pll1_rate_limiter1__out - _f2_pcc_pcc_measurements_three_phase_pll1_lpf_lpf__a_sum;
    _f2_pcc_pcc_measurements_three_phase_pll1_lpf_lpf__out = _f2_pcc_pcc_measurements_three_phase_pll1_lpf_lpf__b_sum;
    // Generated from the component: F2_PCC.PCC Measurements.Three phase PLL1.PID.Sum7
    _f2_pcc_pcc_measurements_three_phase_pll1_pid_sum7__out = _f2_pcc_pcc_measurements_three_phase_pll1_pid_ki__out + _f2_pcc_pcc_measurements_three_phase_pll1_pid_kb__out;
    //@cmp.out.block.end
    //////////////////////////////////////////////////////////////////////////
    // Update block
    //////////////////////////////////////////////////////////////////////////
    //@cmp.update.block.start
    // Generated from the component: F2_PCC.PCC Measurements.Three phase PLL1.PID.Integrator1
    _f2_pcc_pcc_measurements_three_phase_pll1_pid_integrator1__state += _f2_pcc_pcc_measurements_three_phase_pll1_pid_sum7__out * 0.0009;
    // Generated from the component: F2_PCC.PCC Measurements.Three phase PLL1.PID.Integrator2
    _f2_pcc_pcc_measurements_three_phase_pll1_pid_integrator2__state += _f2_pcc_pcc_measurements_three_phase_pll1_pid_gain1__out * 0.0009;
    // Generated from the component: F2_PCC.PCC Measurements.Three phase PLL1.Unit Delay1
    _f2_pcc_pcc_measurements_three_phase_pll1_unit_delay1__state = _f2_pcc_pcc_measurements_three_phase_pll1_integrator__out;
    // Generated from the component: F2_PCC.PCC Measurements.RMS value1
    if( _f2_pcc_pcc_measurements_rms_value1__zc ) {
        if (_f2_pcc_pcc_measurements_bus_split1__out != _f2_pcc_pcc_measurements_rms_value1__previous_value)
            _f2_pcc_pcc_measurements_rms_value1__correction = - _f2_pcc_pcc_measurements_rms_value1__previous_value / (_f2_pcc_pcc_measurements_bus_split1__out - _f2_pcc_pcc_measurements_rms_value1__previous_value);
        if (_f2_pcc_pcc_measurements_rms_value1__correction < 0)
            _f2_pcc_pcc_measurements_rms_value1__correction = 0;
        else
            _f2_pcc_pcc_measurements_rms_value1__correction = 0;
        _f2_pcc_pcc_measurements_rms_value1__sample_cnt += _f2_pcc_pcc_measurements_rms_value1__correction - _f2_pcc_pcc_measurements_rms_value1__previous_correction;
        _f2_pcc_pcc_measurements_rms_value1__out_state = sqrt(_f2_pcc_pcc_measurements_rms_value1__square_sum / _f2_pcc_pcc_measurements_rms_value1__sample_cnt);
        _f2_pcc_pcc_measurements_rms_value1__sample_cnt = 0;
        _f2_pcc_pcc_measurements_rms_value1__previous_correction = _f2_pcc_pcc_measurements_rms_value1__correction;
        _f2_pcc_pcc_measurements_rms_value1__square_sum = 0;
    } else if ( _f2_pcc_pcc_measurements_rms_value1__sample_cnt >= 556 ) {
        _f2_pcc_pcc_measurements_rms_value1__out_state = sqrt(_f2_pcc_pcc_measurements_rms_value1__square_sum / _f2_pcc_pcc_measurements_rms_value1__sample_cnt);
        _f2_pcc_pcc_measurements_rms_value1__sample_cnt = 0;
        _f2_pcc_pcc_measurements_rms_value1__square_sum = 0;
    }
    _f2_pcc_pcc_measurements_rms_value1__previous_value = _f2_pcc_pcc_measurements_bus_split1__out;
    _f2_pcc_pcc_measurements_rms_value1__square_sum += _f2_pcc_pcc_measurements_bus_split1__out * _f2_pcc_pcc_measurements_bus_split1__out;
    _f2_pcc_pcc_measurements_rms_value1__sample_cnt ++;
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
    // Generated from the component: F2_PCC.PCC Measurements.Three phase PLL1.abc to dq.LPF_d
    _f2_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_d__states[0] = _f2_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_d__delay_line_in;
    // Generated from the component: F2_PCC.PCC Measurements.Three phase PLL1.abc to dq.LPF_q
    _f2_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_q__states[0] = _f2_pcc_pcc_measurements_three_phase_pll1_abc_to_dq_lpf_q__delay_line_in;
    // Generated from the component: F2_PCC.PCC Measurements.Three phase PLL1.normalize
    // Generated from the component: F2_PCC.PCC Measurements.Three phase PLL1.Rate Limiter1
    if (_f2_pcc_pcc_measurements_three_phase_pll1_pid_limit1__out - _f2_pcc_pcc_measurements_three_phase_pll1_rate_limiter1__state > 0.06785840131753954)
        _f2_pcc_pcc_measurements_three_phase_pll1_rate_limiter1__state += (0.06785840131753954);
    else  if (_f2_pcc_pcc_measurements_three_phase_pll1_pid_limit1__out - _f2_pcc_pcc_measurements_three_phase_pll1_rate_limiter1__state < -0.06785840131753954)
        _f2_pcc_pcc_measurements_three_phase_pll1_rate_limiter1__state += (-0.06785840131753954);
    else
        _f2_pcc_pcc_measurements_three_phase_pll1_rate_limiter1__state = _f2_pcc_pcc_measurements_three_phase_pll1_pid_limit1__out;
    _f2_pcc_pcc_measurements_three_phase_pll1_rate_limiter1__first_step = 0;
    // Generated from the component: F2_PCC.PCC Measurements.Three phase PLL1.integrator
    // Generated from the component: F2_PCC.PCC Measurements.Three phase PLL1.LPF.LPF
    for (_f2_pcc_pcc_measurements_three_phase_pll1_lpf_lpf__i = 1; _f2_pcc_pcc_measurements_three_phase_pll1_lpf_lpf__i > 0; _f2_pcc_pcc_measurements_three_phase_pll1_lpf_lpf__i--) {
        _f2_pcc_pcc_measurements_three_phase_pll1_lpf_lpf__states[_f2_pcc_pcc_measurements_three_phase_pll1_lpf_lpf__i] = _f2_pcc_pcc_measurements_three_phase_pll1_lpf_lpf__states[_f2_pcc_pcc_measurements_three_phase_pll1_lpf_lpf__i - 1];
    }
    _f2_pcc_pcc_measurements_three_phase_pll1_lpf_lpf__states[0] = _f2_pcc_pcc_measurements_three_phase_pll1_lpf_lpf__delay_line_in;
    //@cmp.update.block.end
}
// ----------------------------------------------------------------------------------------
//-----------------------------------------------------------------------------------------