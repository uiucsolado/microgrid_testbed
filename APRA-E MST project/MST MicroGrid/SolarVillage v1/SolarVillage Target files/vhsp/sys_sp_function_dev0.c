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
float _measurement_vrms_vinst_va1__out;
float _microgrid_inverter_vdc_vinst_va1__out;
float _microgrid_inverter_vrms_vinst_va1__out;
float _microgrid_measurement_vrms_vinst_va1__out;
float _measurement_vrms_rms_calc_fast__var_eff_s;
X_UnInt32 _measurement_vrms_rms_calc_fast__period;
X_UnInt8 _measurement_vrms_rms_calc_fast__var_zc;
float _measurement_vrms_rms_calc_fast__var_filt_old;
float _measurement_vrms_rms_calc_slow__var_rms;
float _microgrid_inverter_vdc_rms_calc_fast__var_eff_s;
X_UnInt32 _microgrid_inverter_vdc_rms_calc_fast__period;
X_UnInt8 _microgrid_inverter_vdc_rms_calc_fast__var_zc;
float _microgrid_inverter_vdc_rms_calc_fast__var_filt_old;
float _microgrid_inverter_vdc_rms_calc_slow__var_rms;
float _microgrid_inverter_vrms_rms_calc_fast__var_eff_s;
X_UnInt32 _microgrid_inverter_vrms_rms_calc_fast__period;
X_UnInt8 _microgrid_inverter_vrms_rms_calc_fast__var_zc;
float _microgrid_inverter_vrms_rms_calc_fast__var_filt_old;
float _microgrid_inverter_vrms_rms_calc_slow__var_rms;
float _microgrid_measurement_vrms_rms_calc_fast__var_eff_s;
X_UnInt32 _microgrid_measurement_vrms_rms_calc_fast__period;
X_UnInt8 _microgrid_measurement_vrms_rms_calc_fast__var_zc;
float _microgrid_measurement_vrms_rms_calc_fast__var_filt_old;
float _microgrid_measurement_vrms_rms_calc_slow__var_rms;
//@cmp.var.end

//@cmp.svar.start
// state variables
float _measurement_vrms_rt1_output__out =  0.0;

float _measurement_vrms_rt2_output__out =  0.0;

float _microgrid_inverter_vdc_rt1_output__out =  0.0;

float _microgrid_inverter_vdc_rt2_output__out =  0.0;

float _microgrid_inverter_vrms_rt1_output__out =  0.0;

float _microgrid_inverter_vrms_rt2_output__out =  0.0;

float _microgrid_measurement_vrms_rt1_output__out =  0.0;

float _microgrid_measurement_vrms_rt2_output__out =  0.0;

float _measurement_vrms_rms_calc_fast__v_sq_sum_state;
X_UnInt32 _measurement_vrms_rms_calc_fast__pc_cnt_1_state;
float _measurement_vrms_rms_calc_fast__var_filt;
float _microgrid_inverter_vdc_rms_calc_fast__v_sq_sum_state;
X_UnInt32 _microgrid_inverter_vdc_rms_calc_fast__pc_cnt_1_state;
float _microgrid_inverter_vdc_rms_calc_fast__var_filt;
float _microgrid_inverter_vrms_rms_calc_fast__v_sq_sum_state;
X_UnInt32 _microgrid_inverter_vrms_rms_calc_fast__pc_cnt_1_state;
float _microgrid_inverter_vrms_rms_calc_fast__var_filt;
float _microgrid_measurement_vrms_rms_calc_fast__v_sq_sum_state;
X_UnInt32 _microgrid_measurement_vrms_rms_calc_fast__pc_cnt_1_state;
float _microgrid_measurement_vrms_rms_calc_fast__var_filt;
//@cmp.svar.end


// generated using template: virtual_hil/custom_functions.template---------------------------------
void ReInit_sys_sp_cpu_dev0() {
#if DEBUG_MODE
    printf("\n\rReInitTimer");
#endif
    //@cmp.init.block.start
    _measurement_vrms_rt1_output__out =  0.0;
    _measurement_vrms_rt2_output__out =  0.0;
    _microgrid_inverter_vdc_rt1_output__out =  0.0;
    _microgrid_inverter_vdc_rt2_output__out =  0.0;
    _microgrid_inverter_vrms_rt1_output__out =  0.0;
    _microgrid_inverter_vrms_rt2_output__out =  0.0;
    _microgrid_measurement_vrms_rt1_output__out =  0.0;
    _microgrid_measurement_vrms_rt2_output__out =  0.0;
    _measurement_vrms_rms_calc_fast__var_eff_s = 0;
    _measurement_vrms_rms_calc_fast__period = 0;
    _measurement_vrms_rms_calc_fast__var_filt = 0.0f;
    _measurement_vrms_rms_calc_fast__v_sq_sum_state = 0.0f;
    _measurement_vrms_rms_calc_fast__pc_cnt_1_state = 0;
    _microgrid_inverter_vdc_rms_calc_fast__var_eff_s = 0;
    _microgrid_inverter_vdc_rms_calc_fast__period = 0;
    _microgrid_inverter_vdc_rms_calc_fast__var_filt = 0.0f;
    _microgrid_inverter_vdc_rms_calc_fast__v_sq_sum_state = 0.0f;
    _microgrid_inverter_vdc_rms_calc_fast__pc_cnt_1_state = 0;
    _microgrid_inverter_vrms_rms_calc_fast__var_eff_s = 0;
    _microgrid_inverter_vrms_rms_calc_fast__period = 0;
    _microgrid_inverter_vrms_rms_calc_fast__var_filt = 0.0f;
    _microgrid_inverter_vrms_rms_calc_fast__v_sq_sum_state = 0.0f;
    _microgrid_inverter_vrms_rms_calc_fast__pc_cnt_1_state = 0;
    _microgrid_measurement_vrms_rms_calc_fast__var_eff_s = 0;
    _microgrid_measurement_vrms_rms_calc_fast__period = 0;
    _microgrid_measurement_vrms_rms_calc_fast__var_filt = 0.0f;
    _microgrid_measurement_vrms_rms_calc_fast__v_sq_sum_state = 0.0f;
    _microgrid_measurement_vrms_rms_calc_fast__pc_cnt_1_state = 0;
    HIL_OutAO(0x4000, 0.0f);
    XIo_OutFloat(0x55000100, 0.0f);
    HIL_OutAO(0x4001, 0.0f);
    HIL_OutAO(0x4002, 0.0f);
    HIL_OutAO(0x4003, 0.0f);
    //@cmp.init.block.end
}

void ReInit_sp_scope_sys_sp_cpu_dev0() {
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

void TimerCounterHandler_0_sys_sp_cpu_dev0() {
#if DEBUG_MODE
    printf("\n\rTimerCounterHandler_0");
#endif
    //////////////////////////////////////////////////////////////////////////
    // Output block
    //////////////////////////////////////////////////////////////////////////
    //@cmp.out.block.start
    // Generated from the component: Measurement.Vrms.Vinst.Va1
    _measurement_vrms_vinst_va1__out = (HIL_InFloat(0xc80000 + 0x2));
    // Generated from the component: Microgrid.Inverter.VDC.Vinst.Va1
    _microgrid_inverter_vdc_vinst_va1__out = (HIL_InFloat(0xc80000 + 0x206));
    // Generated from the component: Microgrid.Inverter.Vrms.Vinst.Va1
    _microgrid_inverter_vrms_vinst_va1__out = (HIL_InFloat(0xc80000 + 0x207));
    // Generated from the component: Microgrid.Measurement.Vrms.Vinst.Va1
    _microgrid_measurement_vrms_vinst_va1__out = (HIL_InFloat(0xc80000 + 0x209));
    // Generated from the component: Measurement.Vrms.rms_calc_fast
    _measurement_vrms_rms_calc_fast__v_sq_sum_state = _measurement_vrms_rms_calc_fast__v_sq_sum_state + _measurement_vrms_vinst_va1__out * _measurement_vrms_vinst_va1__out;
    _measurement_vrms_rms_calc_fast__var_filt_old = _measurement_vrms_rms_calc_fast__var_filt;
    _measurement_vrms_rms_calc_fast__var_filt = (_measurement_vrms_rms_calc_fast__var_filt_old * 0.909 + _measurement_vrms_vinst_va1__out * 0.0909);
    if((_measurement_vrms_rms_calc_fast__var_filt >= 0.0f) && (_measurement_vrms_rms_calc_fast__var_filt_old < 0.0f)) {
        _measurement_vrms_rms_calc_fast__var_zc = 1;
    }
    else {
        _measurement_vrms_rms_calc_fast__var_zc = 0;
    }
    //square sum and period update on signal zero cross
    if ((_measurement_vrms_rms_calc_fast__var_zc == 1) || (10000 == _measurement_vrms_rms_calc_fast__pc_cnt_1_state)) {
        _measurement_vrms_rms_calc_fast__var_eff_s = _measurement_vrms_rms_calc_fast__v_sq_sum_state;
        _measurement_vrms_rms_calc_fast__period = (float)_measurement_vrms_rms_calc_fast__pc_cnt_1_state;
        _measurement_vrms_rms_calc_fast__v_sq_sum_state = 0.0f;
    }
    // Generated from the component: Measurement.Vrms.sys1
    // Generated from the component: Microgrid.Inverter.VDC.rms_calc_fast
    _microgrid_inverter_vdc_rms_calc_fast__v_sq_sum_state = _microgrid_inverter_vdc_rms_calc_fast__v_sq_sum_state + _microgrid_inverter_vdc_vinst_va1__out * _microgrid_inverter_vdc_vinst_va1__out;
    _microgrid_inverter_vdc_rms_calc_fast__var_filt_old = _microgrid_inverter_vdc_rms_calc_fast__var_filt;
    _microgrid_inverter_vdc_rms_calc_fast__var_filt = (_microgrid_inverter_vdc_rms_calc_fast__var_filt_old * 0.909 + _microgrid_inverter_vdc_vinst_va1__out * 0.0909);
    if((_microgrid_inverter_vdc_rms_calc_fast__var_filt >= 0.0f) && (_microgrid_inverter_vdc_rms_calc_fast__var_filt_old < 0.0f)) {
        _microgrid_inverter_vdc_rms_calc_fast__var_zc = 1;
    }
    else {
        _microgrid_inverter_vdc_rms_calc_fast__var_zc = 0;
    }
    //square sum and period update on signal zero cross
    if ((_microgrid_inverter_vdc_rms_calc_fast__var_zc == 1) || (10000 == _microgrid_inverter_vdc_rms_calc_fast__pc_cnt_1_state)) {
        _microgrid_inverter_vdc_rms_calc_fast__var_eff_s = _microgrid_inverter_vdc_rms_calc_fast__v_sq_sum_state;
        _microgrid_inverter_vdc_rms_calc_fast__period = (float)_microgrid_inverter_vdc_rms_calc_fast__pc_cnt_1_state;
        _microgrid_inverter_vdc_rms_calc_fast__v_sq_sum_state = 0.0f;
    }
    // Generated from the component: Microgrid.Inverter.VDC.sys1
    // Generated from the component: Microgrid.Inverter.Vrms.rms_calc_fast
    _microgrid_inverter_vrms_rms_calc_fast__v_sq_sum_state = _microgrid_inverter_vrms_rms_calc_fast__v_sq_sum_state + _microgrid_inverter_vrms_vinst_va1__out * _microgrid_inverter_vrms_vinst_va1__out;
    _microgrid_inverter_vrms_rms_calc_fast__var_filt_old = _microgrid_inverter_vrms_rms_calc_fast__var_filt;
    _microgrid_inverter_vrms_rms_calc_fast__var_filt = (_microgrid_inverter_vrms_rms_calc_fast__var_filt_old * 0.909 + _microgrid_inverter_vrms_vinst_va1__out * 0.0909);
    if((_microgrid_inverter_vrms_rms_calc_fast__var_filt >= 0.0f) && (_microgrid_inverter_vrms_rms_calc_fast__var_filt_old < 0.0f)) {
        _microgrid_inverter_vrms_rms_calc_fast__var_zc = 1;
    }
    else {
        _microgrid_inverter_vrms_rms_calc_fast__var_zc = 0;
    }
    //square sum and period update on signal zero cross
    if ((_microgrid_inverter_vrms_rms_calc_fast__var_zc == 1) || (10000 == _microgrid_inverter_vrms_rms_calc_fast__pc_cnt_1_state)) {
        _microgrid_inverter_vrms_rms_calc_fast__var_eff_s = _microgrid_inverter_vrms_rms_calc_fast__v_sq_sum_state;
        _microgrid_inverter_vrms_rms_calc_fast__period = (float)_microgrid_inverter_vrms_rms_calc_fast__pc_cnt_1_state;
        _microgrid_inverter_vrms_rms_calc_fast__v_sq_sum_state = 0.0f;
    }
    // Generated from the component: Microgrid.Inverter.Vrms.sys1
    // Generated from the component: Microgrid.Measurement.Vrms.rms_calc_fast
    _microgrid_measurement_vrms_rms_calc_fast__v_sq_sum_state = _microgrid_measurement_vrms_rms_calc_fast__v_sq_sum_state + _microgrid_measurement_vrms_vinst_va1__out * _microgrid_measurement_vrms_vinst_va1__out;
    _microgrid_measurement_vrms_rms_calc_fast__var_filt_old = _microgrid_measurement_vrms_rms_calc_fast__var_filt;
    _microgrid_measurement_vrms_rms_calc_fast__var_filt = (_microgrid_measurement_vrms_rms_calc_fast__var_filt_old * 0.909 + _microgrid_measurement_vrms_vinst_va1__out * 0.0909);
    if((_microgrid_measurement_vrms_rms_calc_fast__var_filt >= 0.0f) && (_microgrid_measurement_vrms_rms_calc_fast__var_filt_old < 0.0f)) {
        _microgrid_measurement_vrms_rms_calc_fast__var_zc = 1;
    }
    else {
        _microgrid_measurement_vrms_rms_calc_fast__var_zc = 0;
    }
    //square sum and period update on signal zero cross
    if ((_microgrid_measurement_vrms_rms_calc_fast__var_zc == 1) || (10000 == _microgrid_measurement_vrms_rms_calc_fast__pc_cnt_1_state)) {
        _microgrid_measurement_vrms_rms_calc_fast__var_eff_s = _microgrid_measurement_vrms_rms_calc_fast__v_sq_sum_state;
        _microgrid_measurement_vrms_rms_calc_fast__period = (float)_microgrid_measurement_vrms_rms_calc_fast__pc_cnt_1_state;
        _microgrid_measurement_vrms_rms_calc_fast__v_sq_sum_state = 0.0f;
    }
    // Generated from the component: Microgrid.Measurement.Vrms.sys1
    // Generated from the component: Measurement.Vrms.rt1.Input
    _measurement_vrms_rt1_output__out = _measurement_vrms_rms_calc_fast__var_eff_s;
    // Generated from the component: Measurement.Vrms.rt2.Input
    _measurement_vrms_rt2_output__out = _measurement_vrms_rms_calc_fast__period;
    // Generated from the component: Measurement.Vrms.t1
    // Generated from the component: Microgrid.Inverter.VDC.rt1.Input
    _microgrid_inverter_vdc_rt1_output__out = _microgrid_inverter_vdc_rms_calc_fast__var_eff_s;
    // Generated from the component: Microgrid.Inverter.VDC.rt2.Input
    _microgrid_inverter_vdc_rt2_output__out = _microgrid_inverter_vdc_rms_calc_fast__period;
    // Generated from the component: Microgrid.Inverter.VDC.t1
    // Generated from the component: Microgrid.Inverter.Vrms.rt1.Input
    _microgrid_inverter_vrms_rt1_output__out = _microgrid_inverter_vrms_rms_calc_fast__var_eff_s;
    // Generated from the component: Microgrid.Inverter.Vrms.rt2.Input
    _microgrid_inverter_vrms_rt2_output__out = _microgrid_inverter_vrms_rms_calc_fast__period;
    // Generated from the component: Microgrid.Inverter.Vrms.t1
    // Generated from the component: Microgrid.Measurement.Vrms.rt1.Input
    _microgrid_measurement_vrms_rt1_output__out = _microgrid_measurement_vrms_rms_calc_fast__var_eff_s;
    // Generated from the component: Microgrid.Measurement.Vrms.rt2.Input
    _microgrid_measurement_vrms_rt2_output__out = _microgrid_measurement_vrms_rms_calc_fast__period;
    // Generated from the component: Microgrid.Measurement.Vrms.t1
    //@cmp.out.block.end
    //////////////////////////////////////////////////////////////////////////
    // Update block
    //////////////////////////////////////////////////////////////////////////
    //@cmp.update.block.start
    // Generated from the component: Measurement.Vrms.rms_calc_fast
    if ((_measurement_vrms_rms_calc_fast__var_zc == 1) || (10000 == _measurement_vrms_rms_calc_fast__pc_cnt_1_state)) {
        _measurement_vrms_rms_calc_fast__pc_cnt_1_state = 0;
    }
    _measurement_vrms_rms_calc_fast__pc_cnt_1_state ++;
    // Generated from the component: Microgrid.Inverter.VDC.rms_calc_fast
    if ((_microgrid_inverter_vdc_rms_calc_fast__var_zc == 1) || (10000 == _microgrid_inverter_vdc_rms_calc_fast__pc_cnt_1_state)) {
        _microgrid_inverter_vdc_rms_calc_fast__pc_cnt_1_state = 0;
    }
    _microgrid_inverter_vdc_rms_calc_fast__pc_cnt_1_state ++;
    // Generated from the component: Microgrid.Inverter.Vrms.rms_calc_fast
    if ((_microgrid_inverter_vrms_rms_calc_fast__var_zc == 1) || (10000 == _microgrid_inverter_vrms_rms_calc_fast__pc_cnt_1_state)) {
        _microgrid_inverter_vrms_rms_calc_fast__pc_cnt_1_state = 0;
    }
    _microgrid_inverter_vrms_rms_calc_fast__pc_cnt_1_state ++;
    // Generated from the component: Microgrid.Measurement.Vrms.rms_calc_fast
    if ((_microgrid_measurement_vrms_rms_calc_fast__var_zc == 1) || (10000 == _microgrid_measurement_vrms_rms_calc_fast__pc_cnt_1_state)) {
        _microgrid_measurement_vrms_rms_calc_fast__pc_cnt_1_state = 0;
    }
    _microgrid_measurement_vrms_rms_calc_fast__pc_cnt_1_state ++;
    //@cmp.update.block.end
}
void TimerCounterHandler_1_sys_sp_cpu_dev0() {
#if DEBUG_MODE
    printf("\n\rTimerCounterHandler_1");
#endif
    //////////////////////////////////////////////////////////////////////////
    // Output block
    //////////////////////////////////////////////////////////////////////////
    //@cmp.out.block.start
    // Generated from the component: Measurement.Vrms.rt1.Output
    // Generated from the component: Measurement.Vrms.rt2.Output
    // Generated from the component: Microgrid.Inverter.VDC.rt1.Output
    // Generated from the component: Microgrid.Inverter.VDC.rt2.Output
    // Generated from the component: Microgrid.Inverter.Vrms.rt1.Output
    // Generated from the component: Microgrid.Inverter.Vrms.rt2.Output
    // Generated from the component: Microgrid.Measurement.Vrms.rt1.Output
    // Generated from the component: Microgrid.Measurement.Vrms.rt2.Output
    // Generated from the component: Measurement.Vrms.rms_calc_slow
    if(_measurement_vrms_rt2_output__out > 0.0f) {
        _measurement_vrms_rms_calc_slow__var_rms = sqrtf(_measurement_vrms_rt1_output__out / _measurement_vrms_rt2_output__out);
    }
    else {
        _measurement_vrms_rms_calc_slow__var_rms = 0.0f;
    }
    // Generated from the component: Microgrid.Inverter.VDC.rms_calc_slow
    if(_microgrid_inverter_vdc_rt2_output__out > 0.0f) {
        _microgrid_inverter_vdc_rms_calc_slow__var_rms = sqrtf(_microgrid_inverter_vdc_rt1_output__out / _microgrid_inverter_vdc_rt2_output__out);
    }
    else {
        _microgrid_inverter_vdc_rms_calc_slow__var_rms = 0.0f;
    }
    // Generated from the component: Microgrid.Inverter.Vrms.rms_calc_slow
    if(_microgrid_inverter_vrms_rt2_output__out > 0.0f) {
        _microgrid_inverter_vrms_rms_calc_slow__var_rms = sqrtf(_microgrid_inverter_vrms_rt1_output__out / _microgrid_inverter_vrms_rt2_output__out);
    }
    else {
        _microgrid_inverter_vrms_rms_calc_slow__var_rms = 0.0f;
    }
    // Generated from the component: Microgrid.Measurement.Vrms.rms_calc_slow
    if(_microgrid_measurement_vrms_rt2_output__out > 0.0f) {
        _microgrid_measurement_vrms_rms_calc_slow__var_rms = sqrtf(_microgrid_measurement_vrms_rt1_output__out / _microgrid_measurement_vrms_rt2_output__out);
    }
    else {
        _microgrid_measurement_vrms_rms_calc_slow__var_rms = 0.0f;
    }
    // Generated from the component: Measurement.Vrms.rms
    HIL_OutAO(0x4000, _measurement_vrms_rms_calc_slow__var_rms);
    // Generated from the component: Measurement.Vrms.sys2
    // Generated from the component: Microgrid.Inverter.VDC.cpu_trans.Input
    XIo_OutFloat(0x55000100, _microgrid_inverter_vdc_rms_calc_slow__var_rms);
    // Generated from the component: Microgrid.Inverter.VDC.rms
    HIL_OutAO(0x4001, _microgrid_inverter_vdc_rms_calc_slow__var_rms);
    // Generated from the component: Microgrid.Inverter.VDC.sys2
    // Generated from the component: Microgrid.Inverter.Vrms.rms
    HIL_OutAO(0x4002, _microgrid_inverter_vrms_rms_calc_slow__var_rms);
    // Generated from the component: Microgrid.Inverter.Vrms.sys2
    // Generated from the component: Microgrid.Measurement.Vrms.rms
    HIL_OutAO(0x4003, _microgrid_measurement_vrms_rms_calc_slow__var_rms);
    // Generated from the component: Microgrid.Measurement.Vrms.sys2
    //@cmp.out.block.end
    //////////////////////////////////////////////////////////////////////////
    // Update block
    //////////////////////////////////////////////////////////////////////////
    //@cmp.update.block.start
    //@cmp.update.block.end
}
// ----------------------------------------------------------------------------------------  //-----------------------------------------------------------------------------------------