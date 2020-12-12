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
X_Int32 _f3_pcc_f3_pcc__out;
double _f3_pcc_meas1_ia_ia1__out;
double _f3_pcc_meas1_ib_ia1__out;
double _f3_pcc_meas1_ic_ia1__out;
double _f3_pcc_meas1_va_va1__out;
double _f3_pcc_meas1_vb_va1__out;
double _f3_pcc_meas1_vc_va1__out;
double _f3_pcc_meas2_va_va1__out;
double _f3_pcc_meas2_vb_va1__out;
double _f3_pcc_meas2_vc_va1__out;
double _f3_pcc_meas1_bus_join2__out[3];
double _f3_pcc_meas1_bus_join1__out[3];
double _f3_pcc_pcc_measurements_bus_split2__out;
double _f3_pcc_pcc_measurements_bus_split2__out1;
double _f3_pcc_pcc_measurements_bus_split2__out2;
double _f3_pcc_pcc_measurements_bus_split1__out;
double _f3_pcc_pcc_measurements_bus_split1__out1;
double _f3_pcc_pcc_measurements_bus_split1__out2;
double _f3_pcc_pcc_measurements_power_meter1__Pdc;
double _f3_pcc_pcc_measurements_power_meter1__Qdc;
double _f3_pcc_pcc_measurements_power_meter1__P0dc;
double _f3_pcc_pcc_measurements_power_meter1__Pac;
double _f3_pcc_pcc_measurements_power_meter1__Qac;
double _f3_pcc_pcc_measurements_power_meter1__P0ac;
double _f3_pcc_pcc_measurements_power_meter1__apparent;
double _f3_pcc_pcc_measurements_power_meter1__k_factor;
double _f3_pcc_pcc_measurements_power_meter1__v_alpha;
double _f3_pcc_pcc_measurements_power_meter1__v_beta;
double _f3_pcc_pcc_measurements_power_meter1__i_alpha;
double _f3_pcc_pcc_measurements_power_meter1__i_beta;
double _f3_pcc_pcc_measurements_power_meter1__v_zero;
double _f3_pcc_pcc_measurements_power_meter1__i_zero;
double _f3_pcc_pcc_measurements_power_meter1__filter_1_output;
double _f3_pcc_pcc_measurements_power_meter1__filter_1_outputQ;
double _f3_pcc_pcc_measurements_power_meter1__filter_1_outputP0;
//@cmp.var.end

//@cmp.svar.start
// state variables
double _f3_pcc_pcc_measurements_power_meter1__filter_1_output_k_minus_1;
double _f3_pcc_pcc_measurements_power_meter1__filter_1_input_k_minus_1;
double _f3_pcc_pcc_measurements_power_meter1__filter_1_output_k_minus_1Q;
double _f3_pcc_pcc_measurements_power_meter1__filter_1_input_k_minus_1Q;
double _f3_pcc_pcc_measurements_power_meter1__filter_1_output_k_minus_1P0;
double _f3_pcc_pcc_measurements_power_meter1__filter_1_input_k_minus_1P0;         //@cmp.svar.end




// generated using template: virtual_hil/custom_functions.template---------------------------------
void ReInit_user_sp_cpu0_dev0() {
#if DEBUG_MODE
    printf("\n\rReInitTimer");
#endif
    //@cmp.init.block.start
    _f3_pcc_pcc_measurements_power_meter1__filter_1_output_k_minus_1 = 0.0;
    _f3_pcc_pcc_measurements_power_meter1__filter_1_input_k_minus_1 = 0.0;
    _f3_pcc_pcc_measurements_power_meter1__filter_1_output_k_minus_1Q = 0.0;
    _f3_pcc_pcc_measurements_power_meter1__filter_1_input_k_minus_1Q = 0.0;
    _f3_pcc_pcc_measurements_power_meter1__filter_1_output_k_minus_1P0 = 0.0;
    _f3_pcc_pcc_measurements_power_meter1__filter_1_input_k_minus_1P0 = 0.0;
    HIL_OutAO(0x4001, 0.0f);
    HIL_OutAO(0x4002, 0.0f);
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
    // Generated from the component: F3_PCC.F3_PCC
    _f3_pcc_f3_pcc__out = XIo_InInt32(0x55000108);
    // Generated from the component: F3_PCC.Meas1.IA.Ia1
    _f3_pcc_meas1_ia_ia1__out = (HIL_InFloat(0xc80000 + 0xf));
    // Generated from the component: F3_PCC.Meas1.IB.Ia1
    _f3_pcc_meas1_ib_ia1__out = (HIL_InFloat(0xc80000 + 0x10));
    // Generated from the component: F3_PCC.Meas1.IC.Ia1
    _f3_pcc_meas1_ic_ia1__out = (HIL_InFloat(0xc80000 + 0x11));
    // Generated from the component: F3_PCC.Meas1.VA.Va1
    _f3_pcc_meas1_va_va1__out = (HIL_InFloat(0xc80000 + 0x9));
    // Generated from the component: F3_PCC.Meas1.VB.Va1
    _f3_pcc_meas1_vb_va1__out = (HIL_InFloat(0xc80000 + 0xa));
    // Generated from the component: F3_PCC.Meas1.VC.Va1
    _f3_pcc_meas1_vc_va1__out = (HIL_InFloat(0xc80000 + 0xb));
    // Generated from the component: F3_PCC.Meas2.VA.Va1
    _f3_pcc_meas2_va_va1__out = (HIL_InFloat(0xc80000 + 0xc));
    // Generated from the component: F3_PCC.Meas2.VB.Va1
    _f3_pcc_meas2_vb_va1__out = (HIL_InFloat(0xc80000 + 0xd));
    // Generated from the component: F3_PCC.Meas2.VC.Va1
    _f3_pcc_meas2_vc_va1__out = (HIL_InFloat(0xc80000 + 0xe));
    // Generated from the component: F3_PCC.S1.CTC_Wrapper
    if (_f3_pcc_f3_pcc__out == 0x0) {
        HIL_OutInt32(0x8240480, 0x0);
    }
    else {
        HIL_OutInt32(0x8240480, 0x1);
    }
    // Generated from the component: F3_PCC.Meas1.Bus Join2
    _f3_pcc_meas1_bus_join2__out[0] = _f3_pcc_meas1_ia_ia1__out;
    _f3_pcc_meas1_bus_join2__out[1] = _f3_pcc_meas1_ib_ia1__out;
    _f3_pcc_meas1_bus_join2__out[2] = _f3_pcc_meas1_ic_ia1__out;
    // Generated from the component: F3_PCC.Meas1.Bus Join1
    _f3_pcc_meas1_bus_join1__out[0] = _f3_pcc_meas1_va_va1__out;
    _f3_pcc_meas1_bus_join1__out[1] = _f3_pcc_meas1_vb_va1__out;
    _f3_pcc_meas1_bus_join1__out[2] = _f3_pcc_meas1_vc_va1__out;
    // Generated from the component: F3_PCC.Meas2.Termination4
    // Generated from the component: F3_PCC.Meas2.Termination5
    // Generated from the component: F3_PCC.Meas2.Termination6
    // Generated from the component: F3_PCC.PCC Measurements.Bus Split2
    _f3_pcc_pcc_measurements_bus_split2__out = _f3_pcc_meas1_bus_join2__out[0];
    _f3_pcc_pcc_measurements_bus_split2__out1 = _f3_pcc_meas1_bus_join2__out[1];
    _f3_pcc_pcc_measurements_bus_split2__out2 = _f3_pcc_meas1_bus_join2__out[2];
    // Generated from the component: F3_PCC.PCC Measurements.Bus Split1
    _f3_pcc_pcc_measurements_bus_split1__out = _f3_pcc_meas1_bus_join1__out[0];
    _f3_pcc_pcc_measurements_bus_split1__out1 = _f3_pcc_meas1_bus_join1__out[1];
    _f3_pcc_pcc_measurements_bus_split1__out2 = _f3_pcc_meas1_bus_join1__out[2];
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
    _f3_pcc_pcc_measurements_power_meter1__apparent = sqrt(pow(_f3_pcc_pcc_measurements_power_meter1__Pdc, 2) + pow(_f3_pcc_pcc_measurements_power_meter1__Qdc, 2));
    if (_f3_pcc_pcc_measurements_power_meter1__apparent > 0)
        _f3_pcc_pcc_measurements_power_meter1__k_factor = _f3_pcc_pcc_measurements_power_meter1__Pdc / _f3_pcc_pcc_measurements_power_meter1__apparent;
    else
        _f3_pcc_pcc_measurements_power_meter1__k_factor = 0;
    // Generated from the component: F3_PCC.P
    HIL_OutAO(0x4001, (float)_f3_pcc_pcc_measurements_power_meter1__Pdc);
    // Generated from the component: F3_PCC.PCC Measurements.Termination6
    // Generated from the component: F3_PCC.PCC Measurements.Termination7
    // Generated from the component: F3_PCC.PCC Measurements.Termination8
    // Generated from the component: F3_PCC.PCC Measurements.Termination9
    // Generated from the component: F3_PCC.Q
    HIL_OutAO(0x4002, (float)_f3_pcc_pcc_measurements_power_meter1__Qdc);
    //@cmp.out.block.end
    //////////////////////////////////////////////////////////////////////////
    // Update block
    //////////////////////////////////////////////////////////////////////////
    //@cmp.update.block.start
    //@cmp.update.block.end
}
// ----------------------------------------------------------------------------------------
//-----------------------------------------------------------------------------------------