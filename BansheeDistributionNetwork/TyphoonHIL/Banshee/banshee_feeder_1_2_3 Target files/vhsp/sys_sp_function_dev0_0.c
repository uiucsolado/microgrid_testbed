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













































































//@cmp.def.end


//-----------------------------------------------------------------------------------------
// generated using template: common_variables.template-------------------------------------
// true global variables


//@cmp.var.start
// variables
float _vrms_bus101_vinst_va1__out;
float _vrms_bus102_vinst_va1__out;
float _vrms_bus103_vinst_va1__out;
float _vrms_bus104_vinst_va1__out;
float _vrms_bus105_vinst_va1__out;
float _vrms_bus106_vinst_va1__out;
float _vrms_bus107_vinst_va1__out;
float _vrms_bus101_rms_calc_fast__var_eff_s;
float _vrms_bus101_rms_calc_fast__period;
float _vrms_bus101_rms_calc_slow__var_rms;
float _vrms_bus102_rms_calc_fast__var_eff_s;
float _vrms_bus102_rms_calc_fast__period;
float _vrms_bus102_rms_calc_slow__var_rms;
float _vrms_bus103_rms_calc_fast__var_eff_s;
float _vrms_bus103_rms_calc_fast__period;
float _vrms_bus103_rms_calc_slow__var_rms;
float _vrms_bus104_rms_calc_fast__var_eff_s;
float _vrms_bus104_rms_calc_fast__period;
float _vrms_bus104_rms_calc_slow__var_rms;
float _vrms_bus105_rms_calc_fast__var_eff_s;
float _vrms_bus105_rms_calc_fast__period;
float _vrms_bus105_rms_calc_slow__var_rms;
float _vrms_bus106_rms_calc_fast__var_eff_s;
float _vrms_bus106_rms_calc_fast__period;
float _vrms_bus106_rms_calc_slow__var_rms;
float _vrms_bus107_rms_calc_fast__var_eff_s;
float _vrms_bus107_rms_calc_fast__period;
float _vrms_bus107_rms_calc_slow__var_rms;
//@cmp.var.end

//@cmp.svar.start
// state variables
float _vrms_bus101_rt1_output__out =  0.0;
float _vrms_bus101_rt2_output__out =  0.0;
float _vrms_bus102_rt1_output__out =  0.0;
float _vrms_bus102_rt2_output__out =  0.0;
float _vrms_bus103_rt1_output__out =  0.0;
float _vrms_bus103_rt2_output__out =  0.0;
float _vrms_bus104_rt1_output__out =  0.0;
float _vrms_bus104_rt2_output__out =  0.0;
float _vrms_bus105_rt1_output__out =  0.0;
float _vrms_bus105_rt2_output__out =  0.0;
float _vrms_bus106_rt1_output__out =  0.0;
float _vrms_bus106_rt2_output__out =  0.0;
float _vrms_bus107_rt1_output__out =  0.0;
float _vrms_bus107_rt2_output__out =  0.0;
float _vrms_bus101_rms_calc_fast__v_sq_sum_state;
X_UnInt32 _vrms_bus101_rms_calc_fast__pc_cnt_1_state;
float _vrms_bus101_rms_calc_fast__var_filt;
float _vrms_bus102_rms_calc_fast__v_sq_sum_state;
X_UnInt32 _vrms_bus102_rms_calc_fast__pc_cnt_1_state;
float _vrms_bus102_rms_calc_fast__var_filt;
float _vrms_bus103_rms_calc_fast__v_sq_sum_state;
X_UnInt32 _vrms_bus103_rms_calc_fast__pc_cnt_1_state;
float _vrms_bus103_rms_calc_fast__var_filt;
float _vrms_bus104_rms_calc_fast__v_sq_sum_state;
X_UnInt32 _vrms_bus104_rms_calc_fast__pc_cnt_1_state;
float _vrms_bus104_rms_calc_fast__var_filt;
float _vrms_bus105_rms_calc_fast__v_sq_sum_state;
X_UnInt32 _vrms_bus105_rms_calc_fast__pc_cnt_1_state;
float _vrms_bus105_rms_calc_fast__var_filt;
float _vrms_bus106_rms_calc_fast__v_sq_sum_state;
X_UnInt32 _vrms_bus106_rms_calc_fast__pc_cnt_1_state;
float _vrms_bus106_rms_calc_fast__var_filt;
float _vrms_bus107_rms_calc_fast__v_sq_sum_state;
X_UnInt32 _vrms_bus107_rms_calc_fast__pc_cnt_1_state;
float _vrms_bus107_rms_calc_fast__var_filt;
//@cmp.svar.end


// generated using template: virtual_hil/custom_functions.template---------------------------------
void ReInit_sys_sp_cpu0_dev0() {
#if DEBUG_MODE
    printf("\n\rReInitTimer");
#endif
    //@cmp.init.block.start
    _vrms_bus101_rt1_output__out =  0.0;
    _vrms_bus101_rt2_output__out =  0.0;
    _vrms_bus102_rt1_output__out =  0.0;
    _vrms_bus102_rt2_output__out =  0.0;
    _vrms_bus103_rt1_output__out =  0.0;
    _vrms_bus103_rt2_output__out =  0.0;
    _vrms_bus104_rt1_output__out =  0.0;
    _vrms_bus104_rt2_output__out =  0.0;
    _vrms_bus105_rt1_output__out =  0.0;
    _vrms_bus105_rt2_output__out =  0.0;
    _vrms_bus106_rt1_output__out =  0.0;
    _vrms_bus106_rt2_output__out =  0.0;
    _vrms_bus107_rt1_output__out =  0.0;
    _vrms_bus107_rt2_output__out =  0.0;
    _vrms_bus101_rms_calc_fast__var_eff_s = 0;
    _vrms_bus101_rms_calc_fast__period = 0.0f;
    _vrms_bus101_rms_calc_fast__var_filt = 0.0f;
    _vrms_bus101_rms_calc_fast__v_sq_sum_state = 0.0f;
    _vrms_bus101_rms_calc_fast__pc_cnt_1_state = 0;
    _vrms_bus102_rms_calc_fast__var_eff_s = 0;
    _vrms_bus102_rms_calc_fast__period = 0.0f;
    _vrms_bus102_rms_calc_fast__var_filt = 0.0f;
    _vrms_bus102_rms_calc_fast__v_sq_sum_state = 0.0f;
    _vrms_bus102_rms_calc_fast__pc_cnt_1_state = 0;
    _vrms_bus103_rms_calc_fast__var_eff_s = 0;
    _vrms_bus103_rms_calc_fast__period = 0.0f;
    _vrms_bus103_rms_calc_fast__var_filt = 0.0f;
    _vrms_bus103_rms_calc_fast__v_sq_sum_state = 0.0f;
    _vrms_bus103_rms_calc_fast__pc_cnt_1_state = 0;
    _vrms_bus104_rms_calc_fast__var_eff_s = 0;
    _vrms_bus104_rms_calc_fast__period = 0.0f;
    _vrms_bus104_rms_calc_fast__var_filt = 0.0f;
    _vrms_bus104_rms_calc_fast__v_sq_sum_state = 0.0f;
    _vrms_bus104_rms_calc_fast__pc_cnt_1_state = 0;
    _vrms_bus105_rms_calc_fast__var_eff_s = 0;
    _vrms_bus105_rms_calc_fast__period = 0.0f;
    _vrms_bus105_rms_calc_fast__var_filt = 0.0f;
    _vrms_bus105_rms_calc_fast__v_sq_sum_state = 0.0f;
    _vrms_bus105_rms_calc_fast__pc_cnt_1_state = 0;
    _vrms_bus106_rms_calc_fast__var_eff_s = 0;
    _vrms_bus106_rms_calc_fast__period = 0.0f;
    _vrms_bus106_rms_calc_fast__var_filt = 0.0f;
    _vrms_bus106_rms_calc_fast__v_sq_sum_state = 0.0f;
    _vrms_bus106_rms_calc_fast__pc_cnt_1_state = 0;
    _vrms_bus107_rms_calc_fast__var_eff_s = 0;
    _vrms_bus107_rms_calc_fast__period = 0.0f;
    _vrms_bus107_rms_calc_fast__var_filt = 0.0f;
    _vrms_bus107_rms_calc_fast__v_sq_sum_state = 0.0f;
    _vrms_bus107_rms_calc_fast__pc_cnt_1_state = 0;
    HIL_OutAO(0x4000, 0.0f);
    HIL_OutAO(0x4001, 0.0f);
    HIL_OutAO(0x4002, 0.0f);
    HIL_OutAO(0x4003, 0.0f);
    HIL_OutAO(0x4004, 0.0f);
    HIL_OutAO(0x4005, 0.0f);
    HIL_OutAO(0x4006, 0.0f);
    //@cmp.init.block.end
}

void ReInit_sp_scope_sys_sp_cpu0_dev0() {
    // initialise SP Scope buffer pointer
}

// generated using template:generic_macros.template-----------------------------------------
/*********************** Macros (Inline Functions) Definitions ***************************/

// ----------------------------------------------------------------------------------------

#ifndef MAX
#define MAX(value, limit) ((value > limit) ? value : limit)
#endif
#ifndef MIN
#define MIN(value, limit) ((value < limit) ? value : limit)
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

void TimerCounterHandler_0_sys_sp_cpu0_dev0() {
#if DEBUG_MODE
    printf("\n\rTimerCounterHandler_0");
#endif
    //////////////////////////////////////////////////////////////////////////
    // Output block
    //////////////////////////////////////////////////////////////////////////
    //@cmp.out.block.start
    // Generated from the component: Vrms_bus101.Vinst.Va1
    _vrms_bus101_vinst_va1__out = (HIL_InFloat(0xc80000 + 0xa0c));
    // Generated from the component: Vrms_bus102.Vinst.Va1
    _vrms_bus102_vinst_va1__out = (HIL_InFloat(0xc80000 + 0x42f));
    // Generated from the component: Vrms_bus103.Vinst.Va1
    _vrms_bus103_vinst_va1__out = (HIL_InFloat(0xc80000 + 0x29));
    // Generated from the component: Vrms_bus104.Vinst.Va1
    _vrms_bus104_vinst_va1__out = (HIL_InFloat(0xc80000 + 0x430));
    // Generated from the component: Vrms_bus105.Vinst.Va1
    _vrms_bus105_vinst_va1__out = (HIL_InFloat(0xc80000 + 0x62a));
    // Generated from the component: Vrms_bus106.Vinst.Va1
    _vrms_bus106_vinst_va1__out = (HIL_InFloat(0xc80000 + 0x22a));
    // Generated from the component: Vrms_bus107.Vinst.Va1
    _vrms_bus107_vinst_va1__out = (HIL_InFloat(0xc80000 + 0x812));
    // Generated from the component: Vrms_bus101.rms_calc_fast
    _vrms_bus101_rms_calc_fast__v_sq_sum_state = _vrms_bus101_rms_calc_fast__v_sq_sum_state + _vrms_bus101_vinst_va1__out * _vrms_bus101_vinst_va1__out;
    //square sum and period update on period end
    if (333 == _vrms_bus101_rms_calc_fast__pc_cnt_1_state) {
        _vrms_bus101_rms_calc_fast__var_eff_s = _vrms_bus101_rms_calc_fast__v_sq_sum_state;
        _vrms_bus101_rms_calc_fast__period = (float)333;
        _vrms_bus101_rms_calc_fast__v_sq_sum_state = 0.0f;
    }
    // Generated from the component: Vrms_bus101.sys1
    // Generated from the component: Vrms_bus102.rms_calc_fast
    _vrms_bus102_rms_calc_fast__v_sq_sum_state = _vrms_bus102_rms_calc_fast__v_sq_sum_state + _vrms_bus102_vinst_va1__out * _vrms_bus102_vinst_va1__out;
    //square sum and period update on period end
    if (333 == _vrms_bus102_rms_calc_fast__pc_cnt_1_state) {
        _vrms_bus102_rms_calc_fast__var_eff_s = _vrms_bus102_rms_calc_fast__v_sq_sum_state;
        _vrms_bus102_rms_calc_fast__period = (float)333;
        _vrms_bus102_rms_calc_fast__v_sq_sum_state = 0.0f;
    }
    // Generated from the component: Vrms_bus102.sys1
    // Generated from the component: Vrms_bus103.rms_calc_fast
    _vrms_bus103_rms_calc_fast__v_sq_sum_state = _vrms_bus103_rms_calc_fast__v_sq_sum_state + _vrms_bus103_vinst_va1__out * _vrms_bus103_vinst_va1__out;
    //square sum and period update on period end
    if (333 == _vrms_bus103_rms_calc_fast__pc_cnt_1_state) {
        _vrms_bus103_rms_calc_fast__var_eff_s = _vrms_bus103_rms_calc_fast__v_sq_sum_state;
        _vrms_bus103_rms_calc_fast__period = (float)333;
        _vrms_bus103_rms_calc_fast__v_sq_sum_state = 0.0f;
    }
    // Generated from the component: Vrms_bus103.sys1
    // Generated from the component: Vrms_bus104.rms_calc_fast
    _vrms_bus104_rms_calc_fast__v_sq_sum_state = _vrms_bus104_rms_calc_fast__v_sq_sum_state + _vrms_bus104_vinst_va1__out * _vrms_bus104_vinst_va1__out;
    //square sum and period update on period end
    if (333 == _vrms_bus104_rms_calc_fast__pc_cnt_1_state) {
        _vrms_bus104_rms_calc_fast__var_eff_s = _vrms_bus104_rms_calc_fast__v_sq_sum_state;
        _vrms_bus104_rms_calc_fast__period = (float)333;
        _vrms_bus104_rms_calc_fast__v_sq_sum_state = 0.0f;
    }
    // Generated from the component: Vrms_bus104.sys1
    // Generated from the component: Vrms_bus105.rms_calc_fast
    _vrms_bus105_rms_calc_fast__v_sq_sum_state = _vrms_bus105_rms_calc_fast__v_sq_sum_state + _vrms_bus105_vinst_va1__out * _vrms_bus105_vinst_va1__out;
    //square sum and period update on period end
    if (333 == _vrms_bus105_rms_calc_fast__pc_cnt_1_state) {
        _vrms_bus105_rms_calc_fast__var_eff_s = _vrms_bus105_rms_calc_fast__v_sq_sum_state;
        _vrms_bus105_rms_calc_fast__period = (float)333;
        _vrms_bus105_rms_calc_fast__v_sq_sum_state = 0.0f;
    }
    // Generated from the component: Vrms_bus105.sys1
    // Generated from the component: Vrms_bus106.rms_calc_fast
    _vrms_bus106_rms_calc_fast__v_sq_sum_state = _vrms_bus106_rms_calc_fast__v_sq_sum_state + _vrms_bus106_vinst_va1__out * _vrms_bus106_vinst_va1__out;
    //square sum and period update on period end
    if (333 == _vrms_bus106_rms_calc_fast__pc_cnt_1_state) {
        _vrms_bus106_rms_calc_fast__var_eff_s = _vrms_bus106_rms_calc_fast__v_sq_sum_state;
        _vrms_bus106_rms_calc_fast__period = (float)333;
        _vrms_bus106_rms_calc_fast__v_sq_sum_state = 0.0f;
    }
    // Generated from the component: Vrms_bus106.sys1
    // Generated from the component: Vrms_bus107.rms_calc_fast
    _vrms_bus107_rms_calc_fast__v_sq_sum_state = _vrms_bus107_rms_calc_fast__v_sq_sum_state + _vrms_bus107_vinst_va1__out * _vrms_bus107_vinst_va1__out;
    //square sum and period update on period end
    if (333 == _vrms_bus107_rms_calc_fast__pc_cnt_1_state) {
        _vrms_bus107_rms_calc_fast__var_eff_s = _vrms_bus107_rms_calc_fast__v_sq_sum_state;
        _vrms_bus107_rms_calc_fast__period = (float)333;
        _vrms_bus107_rms_calc_fast__v_sq_sum_state = 0.0f;
    }
    // Generated from the component: Vrms_bus107.sys1
    // Generated from the component: Vrms_bus101.rt1.Input
    _vrms_bus101_rt1_output__out = _vrms_bus101_rms_calc_fast__var_eff_s;
    // Generated from the component: Vrms_bus101.rt2.Input
    _vrms_bus101_rt2_output__out = _vrms_bus101_rms_calc_fast__period;
    // Generated from the component: Vrms_bus101.t1
    // Generated from the component: Vrms_bus102.rt1.Input
    _vrms_bus102_rt1_output__out = _vrms_bus102_rms_calc_fast__var_eff_s;
    // Generated from the component: Vrms_bus102.rt2.Input
    _vrms_bus102_rt2_output__out = _vrms_bus102_rms_calc_fast__period;
    // Generated from the component: Vrms_bus102.t1
    // Generated from the component: Vrms_bus103.rt1.Input
    _vrms_bus103_rt1_output__out = _vrms_bus103_rms_calc_fast__var_eff_s;
    // Generated from the component: Vrms_bus103.rt2.Input
    _vrms_bus103_rt2_output__out = _vrms_bus103_rms_calc_fast__period;
    // Generated from the component: Vrms_bus103.t1
    // Generated from the component: Vrms_bus104.rt1.Input
    _vrms_bus104_rt1_output__out = _vrms_bus104_rms_calc_fast__var_eff_s;
    // Generated from the component: Vrms_bus104.rt2.Input
    _vrms_bus104_rt2_output__out = _vrms_bus104_rms_calc_fast__period;
    // Generated from the component: Vrms_bus104.t1
    // Generated from the component: Vrms_bus105.rt1.Input
    _vrms_bus105_rt1_output__out = _vrms_bus105_rms_calc_fast__var_eff_s;
    // Generated from the component: Vrms_bus105.rt2.Input
    _vrms_bus105_rt2_output__out = _vrms_bus105_rms_calc_fast__period;
    // Generated from the component: Vrms_bus105.t1
    // Generated from the component: Vrms_bus106.rt1.Input
    _vrms_bus106_rt1_output__out = _vrms_bus106_rms_calc_fast__var_eff_s;
    // Generated from the component: Vrms_bus106.rt2.Input
    _vrms_bus106_rt2_output__out = _vrms_bus106_rms_calc_fast__period;
    // Generated from the component: Vrms_bus106.t1
    // Generated from the component: Vrms_bus107.rt1.Input
    _vrms_bus107_rt1_output__out = _vrms_bus107_rms_calc_fast__var_eff_s;
    // Generated from the component: Vrms_bus107.rt2.Input
    _vrms_bus107_rt2_output__out = _vrms_bus107_rms_calc_fast__period;
    // Generated from the component: Vrms_bus107.t1
    //@cmp.out.block.end
    //////////////////////////////////////////////////////////////////////////
    // Update block
    //////////////////////////////////////////////////////////////////////////
    //@cmp.update.block.start
    // Generated from the component: Vrms_bus101.rms_calc_fast
    if (333 == _vrms_bus101_rms_calc_fast__pc_cnt_1_state) {
        _vrms_bus101_rms_calc_fast__pc_cnt_1_state = 0;
    }
    _vrms_bus101_rms_calc_fast__pc_cnt_1_state ++;
    // Generated from the component: Vrms_bus102.rms_calc_fast
    if (333 == _vrms_bus102_rms_calc_fast__pc_cnt_1_state) {
        _vrms_bus102_rms_calc_fast__pc_cnt_1_state = 0;
    }
    _vrms_bus102_rms_calc_fast__pc_cnt_1_state ++;
    // Generated from the component: Vrms_bus103.rms_calc_fast
    if (333 == _vrms_bus103_rms_calc_fast__pc_cnt_1_state) {
        _vrms_bus103_rms_calc_fast__pc_cnt_1_state = 0;
    }
    _vrms_bus103_rms_calc_fast__pc_cnt_1_state ++;
    // Generated from the component: Vrms_bus104.rms_calc_fast
    if (333 == _vrms_bus104_rms_calc_fast__pc_cnt_1_state) {
        _vrms_bus104_rms_calc_fast__pc_cnt_1_state = 0;
    }
    _vrms_bus104_rms_calc_fast__pc_cnt_1_state ++;
    // Generated from the component: Vrms_bus105.rms_calc_fast
    if (333 == _vrms_bus105_rms_calc_fast__pc_cnt_1_state) {
        _vrms_bus105_rms_calc_fast__pc_cnt_1_state = 0;
    }
    _vrms_bus105_rms_calc_fast__pc_cnt_1_state ++;
    // Generated from the component: Vrms_bus106.rms_calc_fast
    if (333 == _vrms_bus106_rms_calc_fast__pc_cnt_1_state) {
        _vrms_bus106_rms_calc_fast__pc_cnt_1_state = 0;
    }
    _vrms_bus106_rms_calc_fast__pc_cnt_1_state ++;
    // Generated from the component: Vrms_bus107.rms_calc_fast
    if (333 == _vrms_bus107_rms_calc_fast__pc_cnt_1_state) {
        _vrms_bus107_rms_calc_fast__pc_cnt_1_state = 0;
    }
    _vrms_bus107_rms_calc_fast__pc_cnt_1_state ++;
    //@cmp.update.block.end
}
void TimerCounterHandler_1_sys_sp_cpu0_dev0() {
#if DEBUG_MODE
    printf("\n\rTimerCounterHandler_1");
#endif
    //////////////////////////////////////////////////////////////////////////
    // Output block
    //////////////////////////////////////////////////////////////////////////
    //@cmp.out.block.start
    // Generated from the component: Vrms_bus101.rms_calc_slow
    if(_vrms_bus101_rt2_output__out > 0.0f) {
        _vrms_bus101_rms_calc_slow__var_rms = sqrtf(_vrms_bus101_rt1_output__out / _vrms_bus101_rt2_output__out);
    }
    else {
        _vrms_bus101_rms_calc_slow__var_rms = 0.0f;
    }
    // Generated from the component: Vrms_bus102.rms_calc_slow
    if(_vrms_bus102_rt2_output__out > 0.0f) {
        _vrms_bus102_rms_calc_slow__var_rms = sqrtf(_vrms_bus102_rt1_output__out / _vrms_bus102_rt2_output__out);
    }
    else {
        _vrms_bus102_rms_calc_slow__var_rms = 0.0f;
    }
    // Generated from the component: Vrms_bus103.rms_calc_slow
    if(_vrms_bus103_rt2_output__out > 0.0f) {
        _vrms_bus103_rms_calc_slow__var_rms = sqrtf(_vrms_bus103_rt1_output__out / _vrms_bus103_rt2_output__out);
    }
    else {
        _vrms_bus103_rms_calc_slow__var_rms = 0.0f;
    }
    // Generated from the component: Vrms_bus104.rms_calc_slow
    if(_vrms_bus104_rt2_output__out > 0.0f) {
        _vrms_bus104_rms_calc_slow__var_rms = sqrtf(_vrms_bus104_rt1_output__out / _vrms_bus104_rt2_output__out);
    }
    else {
        _vrms_bus104_rms_calc_slow__var_rms = 0.0f;
    }
    // Generated from the component: Vrms_bus105.rms_calc_slow
    if(_vrms_bus105_rt2_output__out > 0.0f) {
        _vrms_bus105_rms_calc_slow__var_rms = sqrtf(_vrms_bus105_rt1_output__out / _vrms_bus105_rt2_output__out);
    }
    else {
        _vrms_bus105_rms_calc_slow__var_rms = 0.0f;
    }
    // Generated from the component: Vrms_bus106.rms_calc_slow
    if(_vrms_bus106_rt2_output__out > 0.0f) {
        _vrms_bus106_rms_calc_slow__var_rms = sqrtf(_vrms_bus106_rt1_output__out / _vrms_bus106_rt2_output__out);
    }
    else {
        _vrms_bus106_rms_calc_slow__var_rms = 0.0f;
    }
    // Generated from the component: Vrms_bus107.rms_calc_slow
    if(_vrms_bus107_rt2_output__out > 0.0f) {
        _vrms_bus107_rms_calc_slow__var_rms = sqrtf(_vrms_bus107_rt1_output__out / _vrms_bus107_rt2_output__out);
    }
    else {
        _vrms_bus107_rms_calc_slow__var_rms = 0.0f;
    }
    // Generated from the component: Vrms_bus101.rms
    HIL_OutAO(0x4000, _vrms_bus101_rms_calc_slow__var_rms);
    // Generated from the component: Vrms_bus101.sys2
    // Generated from the component: Vrms_bus102.rms
    HIL_OutAO(0x4001, _vrms_bus102_rms_calc_slow__var_rms);
    // Generated from the component: Vrms_bus102.sys2
    // Generated from the component: Vrms_bus103.rms
    HIL_OutAO(0x4002, _vrms_bus103_rms_calc_slow__var_rms);
    // Generated from the component: Vrms_bus103.sys2
    // Generated from the component: Vrms_bus104.rms
    HIL_OutAO(0x4003, _vrms_bus104_rms_calc_slow__var_rms);
    // Generated from the component: Vrms_bus104.sys2
    // Generated from the component: Vrms_bus105.rms
    HIL_OutAO(0x4004, _vrms_bus105_rms_calc_slow__var_rms);
    // Generated from the component: Vrms_bus105.sys2
    // Generated from the component: Vrms_bus106.rms
    HIL_OutAO(0x4005, _vrms_bus106_rms_calc_slow__var_rms);
    // Generated from the component: Vrms_bus106.sys2
    // Generated from the component: Vrms_bus107.rms
    HIL_OutAO(0x4006, _vrms_bus107_rms_calc_slow__var_rms);
    // Generated from the component: Vrms_bus107.sys2
    //@cmp.out.block.end
    //////////////////////////////////////////////////////////////////////////
    // Update block
    //////////////////////////////////////////////////////////////////////////
    //@cmp.update.block.start
    //@cmp.update.block.end
}
// ----------------------------------------------------------------------------------------
//-----------------------------------------------------------------------------------------