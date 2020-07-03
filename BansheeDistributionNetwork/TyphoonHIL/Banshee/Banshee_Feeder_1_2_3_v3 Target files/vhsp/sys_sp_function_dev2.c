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
#include "../include/sp_functions_dev2.h"

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
float _vrms_bus301_vinst_va1__out;
float _vrms_bus302_vinst_va1__out;
float _vrms_bus303_vinst_va1__out;
float _vrms_bus304_vinst_va1__out;
float _vrms_bus305_vinst_va1__out;
float _vrms_bus306_vinst_va1__out;
float _vrms_bus307_vinst_va1__out;
float _vrms_bus301_rms_calc_fast__var_eff_s;
X_UnInt32 _vrms_bus301_rms_calc_fast__period;
float _vrms_bus301_rms_calc_slow__var_rms;
float _vrms_bus302_rms_calc_fast__var_eff_s;
X_UnInt32 _vrms_bus302_rms_calc_fast__period;
float _vrms_bus302_rms_calc_slow__var_rms;
float _vrms_bus303_rms_calc_fast__var_eff_s;
X_UnInt32 _vrms_bus303_rms_calc_fast__period;
float _vrms_bus303_rms_calc_slow__var_rms;
float _vrms_bus304_rms_calc_fast__var_eff_s;
X_UnInt32 _vrms_bus304_rms_calc_fast__period;
float _vrms_bus304_rms_calc_slow__var_rms;
float _vrms_bus305_rms_calc_fast__var_eff_s;
X_UnInt32 _vrms_bus305_rms_calc_fast__period;
float _vrms_bus305_rms_calc_slow__var_rms;
float _vrms_bus306_rms_calc_fast__var_eff_s;
X_UnInt32 _vrms_bus306_rms_calc_fast__period;
float _vrms_bus306_rms_calc_slow__var_rms;
float _vrms_bus307_rms_calc_fast__var_eff_s;
X_UnInt32 _vrms_bus307_rms_calc_fast__period;
float _vrms_bus307_rms_calc_slow__var_rms;
//@cmp.var.end

//@cmp.svar.start
// state variables
float _vrms_bus301_rt1_output__out =  0.0;

float _vrms_bus301_rt2_output__out =  0.0;

float _vrms_bus302_rt1_output__out =  0.0;

float _vrms_bus302_rt2_output__out =  0.0;

float _vrms_bus303_rt1_output__out =  0.0;

float _vrms_bus303_rt2_output__out =  0.0;

float _vrms_bus304_rt1_output__out =  0.0;

float _vrms_bus304_rt2_output__out =  0.0;

float _vrms_bus305_rt1_output__out =  0.0;

float _vrms_bus305_rt2_output__out =  0.0;

float _vrms_bus306_rt1_output__out =  0.0;

float _vrms_bus306_rt2_output__out =  0.0;

float _vrms_bus307_rt1_output__out =  0.0;

float _vrms_bus307_rt2_output__out =  0.0;

float _vrms_bus301_rms_calc_fast__v_sq_sum_state;
X_UnInt32 _vrms_bus301_rms_calc_fast__pc_cnt_1_state;
float _vrms_bus301_rms_calc_fast__var_filt;
float _vrms_bus302_rms_calc_fast__v_sq_sum_state;
X_UnInt32 _vrms_bus302_rms_calc_fast__pc_cnt_1_state;
float _vrms_bus302_rms_calc_fast__var_filt;
float _vrms_bus303_rms_calc_fast__v_sq_sum_state;
X_UnInt32 _vrms_bus303_rms_calc_fast__pc_cnt_1_state;
float _vrms_bus303_rms_calc_fast__var_filt;
float _vrms_bus304_rms_calc_fast__v_sq_sum_state;
X_UnInt32 _vrms_bus304_rms_calc_fast__pc_cnt_1_state;
float _vrms_bus304_rms_calc_fast__var_filt;
float _vrms_bus305_rms_calc_fast__v_sq_sum_state;
X_UnInt32 _vrms_bus305_rms_calc_fast__pc_cnt_1_state;
float _vrms_bus305_rms_calc_fast__var_filt;
float _vrms_bus306_rms_calc_fast__v_sq_sum_state;
X_UnInt32 _vrms_bus306_rms_calc_fast__pc_cnt_1_state;
float _vrms_bus306_rms_calc_fast__var_filt;
float _vrms_bus307_rms_calc_fast__v_sq_sum_state;
X_UnInt32 _vrms_bus307_rms_calc_fast__pc_cnt_1_state;
float _vrms_bus307_rms_calc_fast__var_filt;
//@cmp.svar.end


// generated using template: virtual_hil/custom_functions.template---------------------------------
void ReInit_sys_sp_cpu_dev2() {
#if DEBUG_MODE
    printf("\n\rReInitTimer");
#endif
    //@cmp.init.block.start
    _vrms_bus301_rt1_output__out =  0.0;
    _vrms_bus301_rt2_output__out =  0.0;
    _vrms_bus302_rt1_output__out =  0.0;
    _vrms_bus302_rt2_output__out =  0.0;
    _vrms_bus303_rt1_output__out =  0.0;
    _vrms_bus303_rt2_output__out =  0.0;
    _vrms_bus304_rt1_output__out =  0.0;
    _vrms_bus304_rt2_output__out =  0.0;
    _vrms_bus305_rt1_output__out =  0.0;
    _vrms_bus305_rt2_output__out =  0.0;
    _vrms_bus306_rt1_output__out =  0.0;
    _vrms_bus306_rt2_output__out =  0.0;
    _vrms_bus307_rt1_output__out =  0.0;
    _vrms_bus307_rt2_output__out =  0.0;
    _vrms_bus301_rms_calc_fast__var_eff_s = 0;
    _vrms_bus301_rms_calc_fast__period = 0;
    _vrms_bus301_rms_calc_fast__var_filt = 0.0f;
    _vrms_bus301_rms_calc_fast__v_sq_sum_state = 0.0f;
    _vrms_bus301_rms_calc_fast__pc_cnt_1_state = 0;
    _vrms_bus302_rms_calc_fast__var_eff_s = 0;
    _vrms_bus302_rms_calc_fast__period = 0;
    _vrms_bus302_rms_calc_fast__var_filt = 0.0f;
    _vrms_bus302_rms_calc_fast__v_sq_sum_state = 0.0f;
    _vrms_bus302_rms_calc_fast__pc_cnt_1_state = 0;
    _vrms_bus303_rms_calc_fast__var_eff_s = 0;
    _vrms_bus303_rms_calc_fast__period = 0;
    _vrms_bus303_rms_calc_fast__var_filt = 0.0f;
    _vrms_bus303_rms_calc_fast__v_sq_sum_state = 0.0f;
    _vrms_bus303_rms_calc_fast__pc_cnt_1_state = 0;
    _vrms_bus304_rms_calc_fast__var_eff_s = 0;
    _vrms_bus304_rms_calc_fast__period = 0;
    _vrms_bus304_rms_calc_fast__var_filt = 0.0f;
    _vrms_bus304_rms_calc_fast__v_sq_sum_state = 0.0f;
    _vrms_bus304_rms_calc_fast__pc_cnt_1_state = 0;
    _vrms_bus305_rms_calc_fast__var_eff_s = 0;
    _vrms_bus305_rms_calc_fast__period = 0;
    _vrms_bus305_rms_calc_fast__var_filt = 0.0f;
    _vrms_bus305_rms_calc_fast__v_sq_sum_state = 0.0f;
    _vrms_bus305_rms_calc_fast__pc_cnt_1_state = 0;
    _vrms_bus306_rms_calc_fast__var_eff_s = 0;
    _vrms_bus306_rms_calc_fast__period = 0;
    _vrms_bus306_rms_calc_fast__var_filt = 0.0f;
    _vrms_bus306_rms_calc_fast__v_sq_sum_state = 0.0f;
    _vrms_bus306_rms_calc_fast__pc_cnt_1_state = 0;
    _vrms_bus307_rms_calc_fast__var_eff_s = 0;
    _vrms_bus307_rms_calc_fast__period = 0;
    _vrms_bus307_rms_calc_fast__var_filt = 0.0f;
    _vrms_bus307_rms_calc_fast__v_sq_sum_state = 0.0f;
    _vrms_bus307_rms_calc_fast__pc_cnt_1_state = 0;
    HIL_OutAO(0x4000, 0.0f);
    HIL_OutAO(0x4001, 0.0f);
    HIL_OutAO(0x4002, 0.0f);
    HIL_OutAO(0x4003, 0.0f);
    HIL_OutAO(0x4004, 0.0f);
    HIL_OutAO(0x4005, 0.0f);
    HIL_OutAO(0x4006, 0.0f);
    //@cmp.init.block.end
}

void ReInit_sp_scope_sys_sp_cpu_dev2() {
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

void TimerCounterHandler_0_sys_sp_cpu_dev2() {
#if DEBUG_MODE
    printf("\n\rTimerCounterHandler_0");
#endif
    //////////////////////////////////////////////////////////////////////////
    // Output block
    //////////////////////////////////////////////////////////////////////////
    //@cmp.out.block.start
    // Generated from the component: Vrms_bus301.Vinst.Va1
    _vrms_bus301_vinst_va1__out = (HIL_InFloat(0xc80000 + 0x2));
    // Generated from the component: Vrms_bus302.Vinst.Va1
    _vrms_bus302_vinst_va1__out = (HIL_InFloat(0xc80000 + 0x23b));
    // Generated from the component: Vrms_bus303.Vinst.Va1
    _vrms_bus303_vinst_va1__out = (HIL_InFloat(0xc80000 + 0x23c));
    // Generated from the component: Vrms_bus304.Vinst.Va1
    _vrms_bus304_vinst_va1__out = (HIL_InFloat(0xc80000 + 0x23d));
    // Generated from the component: Vrms_bus305.Vinst.Va1
    _vrms_bus305_vinst_va1__out = (HIL_InFloat(0xc80000 + 0x61b));
    // Generated from the component: Vrms_bus306.Vinst.Va1
    _vrms_bus306_vinst_va1__out = (HIL_InFloat(0xc80000 + 0x426));
    // Generated from the component: Vrms_bus307.Vinst.Va1
    _vrms_bus307_vinst_va1__out = (HIL_InFloat(0xc80000 + 0x826));
    // Generated from the component: Vrms_bus301.rms_calc_fast
    _vrms_bus301_rms_calc_fast__v_sq_sum_state = _vrms_bus301_rms_calc_fast__v_sq_sum_state + _vrms_bus301_vinst_va1__out * _vrms_bus301_vinst_va1__out;
    //square sum and period update on period end
    if (333 == _vrms_bus301_rms_calc_fast__pc_cnt_1_state) {
        _vrms_bus301_rms_calc_fast__var_eff_s = _vrms_bus301_rms_calc_fast__v_sq_sum_state;
        _vrms_bus301_rms_calc_fast__period = (float)333;
        _vrms_bus301_rms_calc_fast__v_sq_sum_state = 0.0f;
    }
    // Generated from the component: Vrms_bus301.sys1
    // Generated from the component: Vrms_bus302.rms_calc_fast
    _vrms_bus302_rms_calc_fast__v_sq_sum_state = _vrms_bus302_rms_calc_fast__v_sq_sum_state + _vrms_bus302_vinst_va1__out * _vrms_bus302_vinst_va1__out;
    //square sum and period update on period end
    if (333 == _vrms_bus302_rms_calc_fast__pc_cnt_1_state) {
        _vrms_bus302_rms_calc_fast__var_eff_s = _vrms_bus302_rms_calc_fast__v_sq_sum_state;
        _vrms_bus302_rms_calc_fast__period = (float)333;
        _vrms_bus302_rms_calc_fast__v_sq_sum_state = 0.0f;
    }
    // Generated from the component: Vrms_bus302.sys1
    // Generated from the component: Vrms_bus303.rms_calc_fast
    _vrms_bus303_rms_calc_fast__v_sq_sum_state = _vrms_bus303_rms_calc_fast__v_sq_sum_state + _vrms_bus303_vinst_va1__out * _vrms_bus303_vinst_va1__out;
    //square sum and period update on period end
    if (333 == _vrms_bus303_rms_calc_fast__pc_cnt_1_state) {
        _vrms_bus303_rms_calc_fast__var_eff_s = _vrms_bus303_rms_calc_fast__v_sq_sum_state;
        _vrms_bus303_rms_calc_fast__period = (float)333;
        _vrms_bus303_rms_calc_fast__v_sq_sum_state = 0.0f;
    }
    // Generated from the component: Vrms_bus303.sys1
    // Generated from the component: Vrms_bus304.rms_calc_fast
    _vrms_bus304_rms_calc_fast__v_sq_sum_state = _vrms_bus304_rms_calc_fast__v_sq_sum_state + _vrms_bus304_vinst_va1__out * _vrms_bus304_vinst_va1__out;
    //square sum and period update on period end
    if (333 == _vrms_bus304_rms_calc_fast__pc_cnt_1_state) {
        _vrms_bus304_rms_calc_fast__var_eff_s = _vrms_bus304_rms_calc_fast__v_sq_sum_state;
        _vrms_bus304_rms_calc_fast__period = (float)333;
        _vrms_bus304_rms_calc_fast__v_sq_sum_state = 0.0f;
    }
    // Generated from the component: Vrms_bus304.sys1
    // Generated from the component: Vrms_bus305.rms_calc_fast
    _vrms_bus305_rms_calc_fast__v_sq_sum_state = _vrms_bus305_rms_calc_fast__v_sq_sum_state + _vrms_bus305_vinst_va1__out * _vrms_bus305_vinst_va1__out;
    //square sum and period update on period end
    if (333 == _vrms_bus305_rms_calc_fast__pc_cnt_1_state) {
        _vrms_bus305_rms_calc_fast__var_eff_s = _vrms_bus305_rms_calc_fast__v_sq_sum_state;
        _vrms_bus305_rms_calc_fast__period = (float)333;
        _vrms_bus305_rms_calc_fast__v_sq_sum_state = 0.0f;
    }
    // Generated from the component: Vrms_bus305.sys1
    // Generated from the component: Vrms_bus306.rms_calc_fast
    _vrms_bus306_rms_calc_fast__v_sq_sum_state = _vrms_bus306_rms_calc_fast__v_sq_sum_state + _vrms_bus306_vinst_va1__out * _vrms_bus306_vinst_va1__out;
    //square sum and period update on period end
    if (333 == _vrms_bus306_rms_calc_fast__pc_cnt_1_state) {
        _vrms_bus306_rms_calc_fast__var_eff_s = _vrms_bus306_rms_calc_fast__v_sq_sum_state;
        _vrms_bus306_rms_calc_fast__period = (float)333;
        _vrms_bus306_rms_calc_fast__v_sq_sum_state = 0.0f;
    }
    // Generated from the component: Vrms_bus306.sys1
    // Generated from the component: Vrms_bus307.rms_calc_fast
    _vrms_bus307_rms_calc_fast__v_sq_sum_state = _vrms_bus307_rms_calc_fast__v_sq_sum_state + _vrms_bus307_vinst_va1__out * _vrms_bus307_vinst_va1__out;
    //square sum and period update on period end
    if (333 == _vrms_bus307_rms_calc_fast__pc_cnt_1_state) {
        _vrms_bus307_rms_calc_fast__var_eff_s = _vrms_bus307_rms_calc_fast__v_sq_sum_state;
        _vrms_bus307_rms_calc_fast__period = (float)333;
        _vrms_bus307_rms_calc_fast__v_sq_sum_state = 0.0f;
    }
    // Generated from the component: Vrms_bus307.sys1
    // Generated from the component: Vrms_bus301.rt1.Input
    _vrms_bus301_rt1_output__out = _vrms_bus301_rms_calc_fast__var_eff_s;
    // Generated from the component: Vrms_bus301.rt2.Input
    _vrms_bus301_rt2_output__out = _vrms_bus301_rms_calc_fast__period;
    // Generated from the component: Vrms_bus301.t1
    // Generated from the component: Vrms_bus302.rt1.Input
    _vrms_bus302_rt1_output__out = _vrms_bus302_rms_calc_fast__var_eff_s;
    // Generated from the component: Vrms_bus302.rt2.Input
    _vrms_bus302_rt2_output__out = _vrms_bus302_rms_calc_fast__period;
    // Generated from the component: Vrms_bus302.t1
    // Generated from the component: Vrms_bus303.rt1.Input
    _vrms_bus303_rt1_output__out = _vrms_bus303_rms_calc_fast__var_eff_s;
    // Generated from the component: Vrms_bus303.rt2.Input
    _vrms_bus303_rt2_output__out = _vrms_bus303_rms_calc_fast__period;
    // Generated from the component: Vrms_bus303.t1
    // Generated from the component: Vrms_bus304.rt1.Input
    _vrms_bus304_rt1_output__out = _vrms_bus304_rms_calc_fast__var_eff_s;
    // Generated from the component: Vrms_bus304.rt2.Input
    _vrms_bus304_rt2_output__out = _vrms_bus304_rms_calc_fast__period;
    // Generated from the component: Vrms_bus304.t1
    // Generated from the component: Vrms_bus305.rt1.Input
    _vrms_bus305_rt1_output__out = _vrms_bus305_rms_calc_fast__var_eff_s;
    // Generated from the component: Vrms_bus305.rt2.Input
    _vrms_bus305_rt2_output__out = _vrms_bus305_rms_calc_fast__period;
    // Generated from the component: Vrms_bus305.t1
    // Generated from the component: Vrms_bus306.rt1.Input
    _vrms_bus306_rt1_output__out = _vrms_bus306_rms_calc_fast__var_eff_s;
    // Generated from the component: Vrms_bus306.rt2.Input
    _vrms_bus306_rt2_output__out = _vrms_bus306_rms_calc_fast__period;
    // Generated from the component: Vrms_bus306.t1
    // Generated from the component: Vrms_bus307.rt1.Input
    _vrms_bus307_rt1_output__out = _vrms_bus307_rms_calc_fast__var_eff_s;
    // Generated from the component: Vrms_bus307.rt2.Input
    _vrms_bus307_rt2_output__out = _vrms_bus307_rms_calc_fast__period;
    // Generated from the component: Vrms_bus307.t1
    //@cmp.out.block.end
    //////////////////////////////////////////////////////////////////////////
    // Update block
    //////////////////////////////////////////////////////////////////////////
    //@cmp.update.block.start
    // Generated from the component: Vrms_bus301.rms_calc_fast
    if (333 == _vrms_bus301_rms_calc_fast__pc_cnt_1_state) {
        _vrms_bus301_rms_calc_fast__pc_cnt_1_state = 0;
    }
    _vrms_bus301_rms_calc_fast__pc_cnt_1_state ++;
    // Generated from the component: Vrms_bus302.rms_calc_fast
    if (333 == _vrms_bus302_rms_calc_fast__pc_cnt_1_state) {
        _vrms_bus302_rms_calc_fast__pc_cnt_1_state = 0;
    }
    _vrms_bus302_rms_calc_fast__pc_cnt_1_state ++;
    // Generated from the component: Vrms_bus303.rms_calc_fast
    if (333 == _vrms_bus303_rms_calc_fast__pc_cnt_1_state) {
        _vrms_bus303_rms_calc_fast__pc_cnt_1_state = 0;
    }
    _vrms_bus303_rms_calc_fast__pc_cnt_1_state ++;
    // Generated from the component: Vrms_bus304.rms_calc_fast
    if (333 == _vrms_bus304_rms_calc_fast__pc_cnt_1_state) {
        _vrms_bus304_rms_calc_fast__pc_cnt_1_state = 0;
    }
    _vrms_bus304_rms_calc_fast__pc_cnt_1_state ++;
    // Generated from the component: Vrms_bus305.rms_calc_fast
    if (333 == _vrms_bus305_rms_calc_fast__pc_cnt_1_state) {
        _vrms_bus305_rms_calc_fast__pc_cnt_1_state = 0;
    }
    _vrms_bus305_rms_calc_fast__pc_cnt_1_state ++;
    // Generated from the component: Vrms_bus306.rms_calc_fast
    if (333 == _vrms_bus306_rms_calc_fast__pc_cnt_1_state) {
        _vrms_bus306_rms_calc_fast__pc_cnt_1_state = 0;
    }
    _vrms_bus306_rms_calc_fast__pc_cnt_1_state ++;
    // Generated from the component: Vrms_bus307.rms_calc_fast
    if (333 == _vrms_bus307_rms_calc_fast__pc_cnt_1_state) {
        _vrms_bus307_rms_calc_fast__pc_cnt_1_state = 0;
    }
    _vrms_bus307_rms_calc_fast__pc_cnt_1_state ++;
    //@cmp.update.block.end
}
void TimerCounterHandler_1_sys_sp_cpu_dev2() {
#if DEBUG_MODE
    printf("\n\rTimerCounterHandler_1");
#endif
    //////////////////////////////////////////////////////////////////////////
    // Output block
    //////////////////////////////////////////////////////////////////////////
    //@cmp.out.block.start
    // Generated from the component: Vrms_bus301.rt1.Output
    // Generated from the component: Vrms_bus301.rt2.Output
    // Generated from the component: Vrms_bus302.rt1.Output
    // Generated from the component: Vrms_bus302.rt2.Output
    // Generated from the component: Vrms_bus303.rt1.Output
    // Generated from the component: Vrms_bus303.rt2.Output
    // Generated from the component: Vrms_bus304.rt1.Output
    // Generated from the component: Vrms_bus304.rt2.Output
    // Generated from the component: Vrms_bus305.rt1.Output
    // Generated from the component: Vrms_bus305.rt2.Output
    // Generated from the component: Vrms_bus306.rt1.Output
    // Generated from the component: Vrms_bus306.rt2.Output
    // Generated from the component: Vrms_bus307.rt1.Output
    // Generated from the component: Vrms_bus307.rt2.Output
    // Generated from the component: Vrms_bus301.rms_calc_slow
    if(_vrms_bus301_rt2_output__out > 0.0f) {
        _vrms_bus301_rms_calc_slow__var_rms = sqrtf(_vrms_bus301_rt1_output__out / _vrms_bus301_rt2_output__out);
    }
    else {
        _vrms_bus301_rms_calc_slow__var_rms = 0.0f;
    }
    // Generated from the component: Vrms_bus302.rms_calc_slow
    if(_vrms_bus302_rt2_output__out > 0.0f) {
        _vrms_bus302_rms_calc_slow__var_rms = sqrtf(_vrms_bus302_rt1_output__out / _vrms_bus302_rt2_output__out);
    }
    else {
        _vrms_bus302_rms_calc_slow__var_rms = 0.0f;
    }
    // Generated from the component: Vrms_bus303.rms_calc_slow
    if(_vrms_bus303_rt2_output__out > 0.0f) {
        _vrms_bus303_rms_calc_slow__var_rms = sqrtf(_vrms_bus303_rt1_output__out / _vrms_bus303_rt2_output__out);
    }
    else {
        _vrms_bus303_rms_calc_slow__var_rms = 0.0f;
    }
    // Generated from the component: Vrms_bus304.rms_calc_slow
    if(_vrms_bus304_rt2_output__out > 0.0f) {
        _vrms_bus304_rms_calc_slow__var_rms = sqrtf(_vrms_bus304_rt1_output__out / _vrms_bus304_rt2_output__out);
    }
    else {
        _vrms_bus304_rms_calc_slow__var_rms = 0.0f;
    }
    // Generated from the component: Vrms_bus305.rms_calc_slow
    if(_vrms_bus305_rt2_output__out > 0.0f) {
        _vrms_bus305_rms_calc_slow__var_rms = sqrtf(_vrms_bus305_rt1_output__out / _vrms_bus305_rt2_output__out);
    }
    else {
        _vrms_bus305_rms_calc_slow__var_rms = 0.0f;
    }
    // Generated from the component: Vrms_bus306.rms_calc_slow
    if(_vrms_bus306_rt2_output__out > 0.0f) {
        _vrms_bus306_rms_calc_slow__var_rms = sqrtf(_vrms_bus306_rt1_output__out / _vrms_bus306_rt2_output__out);
    }
    else {
        _vrms_bus306_rms_calc_slow__var_rms = 0.0f;
    }
    // Generated from the component: Vrms_bus307.rms_calc_slow
    if(_vrms_bus307_rt2_output__out > 0.0f) {
        _vrms_bus307_rms_calc_slow__var_rms = sqrtf(_vrms_bus307_rt1_output__out / _vrms_bus307_rt2_output__out);
    }
    else {
        _vrms_bus307_rms_calc_slow__var_rms = 0.0f;
    }
    // Generated from the component: Vrms_bus301.rms
    HIL_OutAO(0x4000, _vrms_bus301_rms_calc_slow__var_rms);
    // Generated from the component: Vrms_bus301.sys2
    // Generated from the component: Vrms_bus302.rms
    HIL_OutAO(0x4001, _vrms_bus302_rms_calc_slow__var_rms);
    // Generated from the component: Vrms_bus302.sys2
    // Generated from the component: Vrms_bus303.rms
    HIL_OutAO(0x4002, _vrms_bus303_rms_calc_slow__var_rms);
    // Generated from the component: Vrms_bus303.sys2
    // Generated from the component: Vrms_bus304.rms
    HIL_OutAO(0x4003, _vrms_bus304_rms_calc_slow__var_rms);
    // Generated from the component: Vrms_bus304.sys2
    // Generated from the component: Vrms_bus305.rms
    HIL_OutAO(0x4004, _vrms_bus305_rms_calc_slow__var_rms);
    // Generated from the component: Vrms_bus305.sys2
    // Generated from the component: Vrms_bus306.rms
    HIL_OutAO(0x4005, _vrms_bus306_rms_calc_slow__var_rms);
    // Generated from the component: Vrms_bus306.sys2
    // Generated from the component: Vrms_bus307.rms
    HIL_OutAO(0x4006, _vrms_bus307_rms_calc_slow__var_rms);
    // Generated from the component: Vrms_bus307.sys2
    //@cmp.out.block.end
    //////////////////////////////////////////////////////////////////////////
    // Update block
    //////////////////////////////////////////////////////////////////////////
    //@cmp.update.block.start
    //@cmp.update.block.end
}
// ----------------------------------------------------------------------------------------  //-----------------------------------------------------------------------------------------