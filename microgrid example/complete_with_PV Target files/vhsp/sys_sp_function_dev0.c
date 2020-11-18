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
float _home_battery_inverter__average_1_irms1_iinst_ia1__out;
float _home_battery_inverter__average_1_vrms1_vinst_va1__out;
float _home_lump1_irms1_iinst_ia1__out;
float _home_lump1_vrms1_vinst_va1__out;
float _home_natural_gas_genset_ia_gen_rms_iinst_ia1__out;
float _home_natural_gas_genset_ib_gen_rms_iinst_ia1__out;
float _home_natural_gas_genset_ic_gen_rms_iinst_ia1__out;
float _home_natural_gas_genset_vab_rms_vinst_va1__out;
float _home_natural_gas_genset_vbc_rms_vinst_va1__out;
float _home_natural_gas_genset_vca_rms_vinst_va1__out;
float _home_battery_inverter__average_1_irms1_rms_calc_fast__var_eff_s;
X_UnInt32 _home_battery_inverter__average_1_irms1_rms_calc_fast__period;
X_UnInt8 _home_battery_inverter__average_1_irms1_rms_calc_fast__var_zc;
float _home_battery_inverter__average_1_irms1_rms_calc_fast__var_filt_old;
float _home_battery_inverter__average_1_irms1_rms_calc_slow__var_rms;
float _home_battery_inverter__average_1_vrms1_rms_calc_fast__var_eff_s;
X_UnInt32 _home_battery_inverter__average_1_vrms1_rms_calc_fast__period;
X_UnInt8 _home_battery_inverter__average_1_vrms1_rms_calc_fast__var_zc;
float _home_battery_inverter__average_1_vrms1_rms_calc_fast__var_filt_old;
float _home_battery_inverter__average_1_vrms1_rms_calc_slow__var_rms;
float _home_lump1_irms1_rms_calc_fast__var_eff_s;
X_UnInt32 _home_lump1_irms1_rms_calc_fast__period;
X_UnInt8 _home_lump1_irms1_rms_calc_fast__var_zc;
float _home_lump1_irms1_rms_calc_fast__var_filt_old;
float _home_lump1_irms1_rms_calc_slow__var_rms;
float _home_lump1_vrms1_rms_calc_fast__var_eff_s;
X_UnInt32 _home_lump1_vrms1_rms_calc_fast__period;
X_UnInt8 _home_lump1_vrms1_rms_calc_fast__var_zc;
float _home_lump1_vrms1_rms_calc_fast__var_filt_old;
float _home_lump1_vrms1_rms_calc_slow__var_rms;
float _home_natural_gas_genset_ia_gen_rms_rms_calc_fast__var_eff_s;
X_UnInt32 _home_natural_gas_genset_ia_gen_rms_rms_calc_fast__period;
X_UnInt8 _home_natural_gas_genset_ia_gen_rms_rms_calc_fast__var_zc;
float _home_natural_gas_genset_ia_gen_rms_rms_calc_fast__var_filt_old;
float _home_natural_gas_genset_ia_gen_rms_rms_calc_slow__var_rms;
float _home_natural_gas_genset_ib_gen_rms_rms_calc_fast__var_eff_s;
X_UnInt32 _home_natural_gas_genset_ib_gen_rms_rms_calc_fast__period;
X_UnInt8 _home_natural_gas_genset_ib_gen_rms_rms_calc_fast__var_zc;
float _home_natural_gas_genset_ib_gen_rms_rms_calc_fast__var_filt_old;
float _home_natural_gas_genset_ib_gen_rms_rms_calc_slow__var_rms;
float _home_natural_gas_genset_ic_gen_rms_rms_calc_fast__var_eff_s;
X_UnInt32 _home_natural_gas_genset_ic_gen_rms_rms_calc_fast__period;
X_UnInt8 _home_natural_gas_genset_ic_gen_rms_rms_calc_fast__var_zc;
float _home_natural_gas_genset_ic_gen_rms_rms_calc_fast__var_filt_old;
float _home_natural_gas_genset_ic_gen_rms_rms_calc_slow__var_rms;
float _home_natural_gas_genset_vab_rms_rms_calc_fast__var_eff_s;
X_UnInt32 _home_natural_gas_genset_vab_rms_rms_calc_fast__period;
X_UnInt8 _home_natural_gas_genset_vab_rms_rms_calc_fast__var_zc;
float _home_natural_gas_genset_vab_rms_rms_calc_fast__var_filt_old;
float _home_natural_gas_genset_vab_rms_rms_calc_slow__var_rms;
float _home_natural_gas_genset_vbc_rms_rms_calc_fast__var_eff_s;
X_UnInt32 _home_natural_gas_genset_vbc_rms_rms_calc_fast__period;
X_UnInt8 _home_natural_gas_genset_vbc_rms_rms_calc_fast__var_zc;
float _home_natural_gas_genset_vbc_rms_rms_calc_fast__var_filt_old;
float _home_natural_gas_genset_vbc_rms_rms_calc_slow__var_rms;
float _home_natural_gas_genset_vca_rms_rms_calc_fast__var_eff_s;
X_UnInt32 _home_natural_gas_genset_vca_rms_rms_calc_fast__period;
X_UnInt8 _home_natural_gas_genset_vca_rms_rms_calc_fast__var_zc;
float _home_natural_gas_genset_vca_rms_rms_calc_fast__var_filt_old;
float _home_natural_gas_genset_vca_rms_rms_calc_slow__var_rms;
//@cmp.var.end

//@cmp.svar.start
// state variables
float _home_battery_inverter__average_1_irms1_rt1_output__out =  0.0;

float _home_battery_inverter__average_1_irms1_rt2_output__out =  0.0;

float _home_battery_inverter__average_1_vrms1_rt1_output__out =  0.0;

float _home_battery_inverter__average_1_vrms1_rt2_output__out =  0.0;

float _home_lump1_irms1_rt1_output__out =  0.0;

float _home_lump1_irms1_rt2_output__out =  0.0;

float _home_lump1_vrms1_rt1_output__out =  0.0;

float _home_lump1_vrms1_rt2_output__out =  0.0;

float _home_natural_gas_genset_ia_gen_rms_rt1_output__out =  0.0;

float _home_natural_gas_genset_ia_gen_rms_rt2_output__out =  0.0;

float _home_natural_gas_genset_ib_gen_rms_rt1_output__out =  0.0;

float _home_natural_gas_genset_ib_gen_rms_rt2_output__out =  0.0;

float _home_natural_gas_genset_ic_gen_rms_rt1_output__out =  0.0;

float _home_natural_gas_genset_ic_gen_rms_rt2_output__out =  0.0;

float _home_natural_gas_genset_vab_rms_rt1_output__out =  0.0;

float _home_natural_gas_genset_vab_rms_rt2_output__out =  0.0;

float _home_natural_gas_genset_vbc_rms_rt1_output__out =  0.0;

float _home_natural_gas_genset_vbc_rms_rt2_output__out =  0.0;

float _home_natural_gas_genset_vca_rms_rt1_output__out =  0.0;

float _home_natural_gas_genset_vca_rms_rt2_output__out =  0.0;

float _home_battery_inverter__average_1_irms1_rms_calc_fast__v_sq_sum_state;
X_UnInt32 _home_battery_inverter__average_1_irms1_rms_calc_fast__pc_cnt_1_state;
float _home_battery_inverter__average_1_irms1_rms_calc_fast__var_filt;
float _home_battery_inverter__average_1_vrms1_rms_calc_fast__v_sq_sum_state;
X_UnInt32 _home_battery_inverter__average_1_vrms1_rms_calc_fast__pc_cnt_1_state;
float _home_battery_inverter__average_1_vrms1_rms_calc_fast__var_filt;
float _home_lump1_irms1_rms_calc_fast__v_sq_sum_state;
X_UnInt32 _home_lump1_irms1_rms_calc_fast__pc_cnt_1_state;
float _home_lump1_irms1_rms_calc_fast__var_filt;
float _home_lump1_vrms1_rms_calc_fast__v_sq_sum_state;
X_UnInt32 _home_lump1_vrms1_rms_calc_fast__pc_cnt_1_state;
float _home_lump1_vrms1_rms_calc_fast__var_filt;
float _home_natural_gas_genset_ia_gen_rms_rms_calc_fast__v_sq_sum_state;
X_UnInt32 _home_natural_gas_genset_ia_gen_rms_rms_calc_fast__pc_cnt_1_state;
float _home_natural_gas_genset_ia_gen_rms_rms_calc_fast__var_filt;
float _home_natural_gas_genset_ib_gen_rms_rms_calc_fast__v_sq_sum_state;
X_UnInt32 _home_natural_gas_genset_ib_gen_rms_rms_calc_fast__pc_cnt_1_state;
float _home_natural_gas_genset_ib_gen_rms_rms_calc_fast__var_filt;
float _home_natural_gas_genset_ic_gen_rms_rms_calc_fast__v_sq_sum_state;
X_UnInt32 _home_natural_gas_genset_ic_gen_rms_rms_calc_fast__pc_cnt_1_state;
float _home_natural_gas_genset_ic_gen_rms_rms_calc_fast__var_filt;
float _home_natural_gas_genset_vab_rms_rms_calc_fast__v_sq_sum_state;
X_UnInt32 _home_natural_gas_genset_vab_rms_rms_calc_fast__pc_cnt_1_state;
float _home_natural_gas_genset_vab_rms_rms_calc_fast__var_filt;
float _home_natural_gas_genset_vbc_rms_rms_calc_fast__v_sq_sum_state;
X_UnInt32 _home_natural_gas_genset_vbc_rms_rms_calc_fast__pc_cnt_1_state;
float _home_natural_gas_genset_vbc_rms_rms_calc_fast__var_filt;
float _home_natural_gas_genset_vca_rms_rms_calc_fast__v_sq_sum_state;
X_UnInt32 _home_natural_gas_genset_vca_rms_rms_calc_fast__pc_cnt_1_state;
float _home_natural_gas_genset_vca_rms_rms_calc_fast__var_filt;
//@cmp.svar.end


// generated using template: virtual_hil/custom_functions.template---------------------------------
void ReInit_sys_sp_cpu_dev0() {
#if DEBUG_MODE
    printf("\n\rReInitTimer");
#endif
    //@cmp.init.block.start
    _home_battery_inverter__average_1_irms1_rt1_output__out =  0.0;
    _home_battery_inverter__average_1_irms1_rt2_output__out =  0.0;
    _home_battery_inverter__average_1_vrms1_rt1_output__out =  0.0;
    _home_battery_inverter__average_1_vrms1_rt2_output__out =  0.0;
    _home_lump1_irms1_rt1_output__out =  0.0;
    _home_lump1_irms1_rt2_output__out =  0.0;
    _home_lump1_vrms1_rt1_output__out =  0.0;
    _home_lump1_vrms1_rt2_output__out =  0.0;
    _home_natural_gas_genset_ia_gen_rms_rt1_output__out =  0.0;
    _home_natural_gas_genset_ia_gen_rms_rt2_output__out =  0.0;
    _home_natural_gas_genset_ib_gen_rms_rt1_output__out =  0.0;
    _home_natural_gas_genset_ib_gen_rms_rt2_output__out =  0.0;
    _home_natural_gas_genset_ic_gen_rms_rt1_output__out =  0.0;
    _home_natural_gas_genset_ic_gen_rms_rt2_output__out =  0.0;
    _home_natural_gas_genset_vab_rms_rt1_output__out =  0.0;
    _home_natural_gas_genset_vab_rms_rt2_output__out =  0.0;
    _home_natural_gas_genset_vbc_rms_rt1_output__out =  0.0;
    _home_natural_gas_genset_vbc_rms_rt2_output__out =  0.0;
    _home_natural_gas_genset_vca_rms_rt1_output__out =  0.0;
    _home_natural_gas_genset_vca_rms_rt2_output__out =  0.0;
    _home_battery_inverter__average_1_irms1_rms_calc_fast__var_eff_s = 0;
    _home_battery_inverter__average_1_irms1_rms_calc_fast__period = 0;
    _home_battery_inverter__average_1_irms1_rms_calc_fast__var_filt = 0.0f;
    _home_battery_inverter__average_1_irms1_rms_calc_fast__v_sq_sum_state = 0.0f;
    _home_battery_inverter__average_1_irms1_rms_calc_fast__pc_cnt_1_state = 0;
    _home_battery_inverter__average_1_vrms1_rms_calc_fast__var_eff_s = 0;
    _home_battery_inverter__average_1_vrms1_rms_calc_fast__period = 0;
    _home_battery_inverter__average_1_vrms1_rms_calc_fast__var_filt = 0.0f;
    _home_battery_inverter__average_1_vrms1_rms_calc_fast__v_sq_sum_state = 0.0f;
    _home_battery_inverter__average_1_vrms1_rms_calc_fast__pc_cnt_1_state = 0;
    _home_lump1_irms1_rms_calc_fast__var_eff_s = 0;
    _home_lump1_irms1_rms_calc_fast__period = 0;
    _home_lump1_irms1_rms_calc_fast__var_filt = 0.0f;
    _home_lump1_irms1_rms_calc_fast__v_sq_sum_state = 0.0f;
    _home_lump1_irms1_rms_calc_fast__pc_cnt_1_state = 0;
    _home_lump1_vrms1_rms_calc_fast__var_eff_s = 0;
    _home_lump1_vrms1_rms_calc_fast__period = 0;
    _home_lump1_vrms1_rms_calc_fast__var_filt = 0.0f;
    _home_lump1_vrms1_rms_calc_fast__v_sq_sum_state = 0.0f;
    _home_lump1_vrms1_rms_calc_fast__pc_cnt_1_state = 0;
    _home_natural_gas_genset_ia_gen_rms_rms_calc_fast__var_eff_s = 0;
    _home_natural_gas_genset_ia_gen_rms_rms_calc_fast__period = 0;
    _home_natural_gas_genset_ia_gen_rms_rms_calc_fast__var_filt = 0.0f;
    _home_natural_gas_genset_ia_gen_rms_rms_calc_fast__v_sq_sum_state = 0.0f;
    _home_natural_gas_genset_ia_gen_rms_rms_calc_fast__pc_cnt_1_state = 0;
    _home_natural_gas_genset_ib_gen_rms_rms_calc_fast__var_eff_s = 0;
    _home_natural_gas_genset_ib_gen_rms_rms_calc_fast__period = 0;
    _home_natural_gas_genset_ib_gen_rms_rms_calc_fast__var_filt = 0.0f;
    _home_natural_gas_genset_ib_gen_rms_rms_calc_fast__v_sq_sum_state = 0.0f;
    _home_natural_gas_genset_ib_gen_rms_rms_calc_fast__pc_cnt_1_state = 0;
    _home_natural_gas_genset_ic_gen_rms_rms_calc_fast__var_eff_s = 0;
    _home_natural_gas_genset_ic_gen_rms_rms_calc_fast__period = 0;
    _home_natural_gas_genset_ic_gen_rms_rms_calc_fast__var_filt = 0.0f;
    _home_natural_gas_genset_ic_gen_rms_rms_calc_fast__v_sq_sum_state = 0.0f;
    _home_natural_gas_genset_ic_gen_rms_rms_calc_fast__pc_cnt_1_state = 0;
    _home_natural_gas_genset_vab_rms_rms_calc_fast__var_eff_s = 0;
    _home_natural_gas_genset_vab_rms_rms_calc_fast__period = 0;
    _home_natural_gas_genset_vab_rms_rms_calc_fast__var_filt = 0.0f;
    _home_natural_gas_genset_vab_rms_rms_calc_fast__v_sq_sum_state = 0.0f;
    _home_natural_gas_genset_vab_rms_rms_calc_fast__pc_cnt_1_state = 0;
    _home_natural_gas_genset_vbc_rms_rms_calc_fast__var_eff_s = 0;
    _home_natural_gas_genset_vbc_rms_rms_calc_fast__period = 0;
    _home_natural_gas_genset_vbc_rms_rms_calc_fast__var_filt = 0.0f;
    _home_natural_gas_genset_vbc_rms_rms_calc_fast__v_sq_sum_state = 0.0f;
    _home_natural_gas_genset_vbc_rms_rms_calc_fast__pc_cnt_1_state = 0;
    _home_natural_gas_genset_vca_rms_rms_calc_fast__var_eff_s = 0;
    _home_natural_gas_genset_vca_rms_rms_calc_fast__period = 0;
    _home_natural_gas_genset_vca_rms_rms_calc_fast__var_filt = 0.0f;
    _home_natural_gas_genset_vca_rms_rms_calc_fast__v_sq_sum_state = 0.0f;
    _home_natural_gas_genset_vca_rms_rms_calc_fast__pc_cnt_1_state = 0;
    HIL_OutAO(0x4000, 0.0f);
    HIL_OutAO(0x4001, 0.0f);
    HIL_OutAO(0x4002, 0.0f);
    HIL_OutAO(0x4003, 0.0f);
    HIL_OutAO(0x4004, 0.0f);
    HIL_OutAO(0x4005, 0.0f);
    HIL_OutAO(0x4006, 0.0f);
    HIL_OutAO(0x4007, 0.0f);
    HIL_OutAO(0x4008, 0.0f);
    HIL_OutAO(0x4009, 0.0f);
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
    // Generated from the component: Home.Battery inverter (Average)1.Irms1.Iinst.Ia1
    _home_battery_inverter__average_1_irms1_iinst_ia1__out = (HIL_InFloat(0xc80000 + 0x24c));
    // Generated from the component: Home.Battery inverter (Average)1.Vrms1.Vinst.Va1
    _home_battery_inverter__average_1_vrms1_vinst_va1__out = (HIL_InFloat(0xc80000 + 0x21d));
    // Generated from the component: Home.Lump1.Irms1.Iinst.Ia1
    _home_lump1_irms1_iinst_ia1__out = (HIL_InFloat(0xc80000 + 0x256));
    // Generated from the component: Home.Lump1.Vrms1.Vinst.Va1
    _home_lump1_vrms1_vinst_va1__out = (HIL_InFloat(0xc80000 + 0x22d));
    // Generated from the component: Home.Natural Gas Genset.Ia_gen_rms.Iinst.Ia1
    _home_natural_gas_genset_ia_gen_rms_iinst_ia1__out = (HIL_InFloat(0xc80000 + 0x263));
    // Generated from the component: Home.Natural Gas Genset.Ib_gen_rms.Iinst.Ia1
    _home_natural_gas_genset_ib_gen_rms_iinst_ia1__out = (HIL_InFloat(0xc80000 + 0x265));
    // Generated from the component: Home.Natural Gas Genset.Ic_gen_rms.Iinst.Ia1
    _home_natural_gas_genset_ic_gen_rms_iinst_ia1__out = (HIL_InFloat(0xc80000 + 0x267));
    // Generated from the component: Home.Natural Gas Genset.vab_rms.Vinst.Va1
    _home_natural_gas_genset_vab_rms_vinst_va1__out = (HIL_InFloat(0xc80000 + 0x23d));
    // Generated from the component: Home.Natural Gas Genset.vbc_rms.Vinst.Va1
    _home_natural_gas_genset_vbc_rms_vinst_va1__out = (HIL_InFloat(0xc80000 + 0x23e));
    // Generated from the component: Home.Natural Gas Genset.vca_rms.Vinst.Va1
    _home_natural_gas_genset_vca_rms_vinst_va1__out = (HIL_InFloat(0xc80000 + 0x23f));
    // Generated from the component: Home.Battery inverter (Average)1.Irms1.rms_calc_fast
    _home_battery_inverter__average_1_irms1_rms_calc_fast__v_sq_sum_state = _home_battery_inverter__average_1_irms1_rms_calc_fast__v_sq_sum_state + _home_battery_inverter__average_1_irms1_iinst_ia1__out * _home_battery_inverter__average_1_irms1_iinst_ia1__out;
    _home_battery_inverter__average_1_irms1_rms_calc_fast__var_filt_old = _home_battery_inverter__average_1_irms1_rms_calc_fast__var_filt;
    _home_battery_inverter__average_1_irms1_rms_calc_fast__var_filt = (_home_battery_inverter__average_1_irms1_rms_calc_fast__var_filt_old * 0.909 + _home_battery_inverter__average_1_irms1_iinst_ia1__out * 0.0909);
    if((_home_battery_inverter__average_1_irms1_rms_calc_fast__var_filt >= 0.0f) && (_home_battery_inverter__average_1_irms1_rms_calc_fast__var_filt_old < 0.0f)) {
        _home_battery_inverter__average_1_irms1_rms_calc_fast__var_zc = 1;
    }
    else {
        _home_battery_inverter__average_1_irms1_rms_calc_fast__var_zc = 0;
    }
    //square sum and period update on signal zero cross
    if ((_home_battery_inverter__average_1_irms1_rms_calc_fast__var_zc == 1) || (5000 == _home_battery_inverter__average_1_irms1_rms_calc_fast__pc_cnt_1_state)) {
        _home_battery_inverter__average_1_irms1_rms_calc_fast__var_eff_s = _home_battery_inverter__average_1_irms1_rms_calc_fast__v_sq_sum_state;
        _home_battery_inverter__average_1_irms1_rms_calc_fast__period = (float)_home_battery_inverter__average_1_irms1_rms_calc_fast__pc_cnt_1_state;
        _home_battery_inverter__average_1_irms1_rms_calc_fast__v_sq_sum_state = 0.0f;
    }
    // Generated from the component: Home.Battery inverter (Average)1.Irms1.sys1
    // Generated from the component: Home.Battery inverter (Average)1.Vrms1.rms_calc_fast
    _home_battery_inverter__average_1_vrms1_rms_calc_fast__v_sq_sum_state = _home_battery_inverter__average_1_vrms1_rms_calc_fast__v_sq_sum_state + _home_battery_inverter__average_1_vrms1_vinst_va1__out * _home_battery_inverter__average_1_vrms1_vinst_va1__out;
    _home_battery_inverter__average_1_vrms1_rms_calc_fast__var_filt_old = _home_battery_inverter__average_1_vrms1_rms_calc_fast__var_filt;
    _home_battery_inverter__average_1_vrms1_rms_calc_fast__var_filt = (_home_battery_inverter__average_1_vrms1_rms_calc_fast__var_filt_old * 0.909 + _home_battery_inverter__average_1_vrms1_vinst_va1__out * 0.0909);
    if((_home_battery_inverter__average_1_vrms1_rms_calc_fast__var_filt >= 0.0f) && (_home_battery_inverter__average_1_vrms1_rms_calc_fast__var_filt_old < 0.0f)) {
        _home_battery_inverter__average_1_vrms1_rms_calc_fast__var_zc = 1;
    }
    else {
        _home_battery_inverter__average_1_vrms1_rms_calc_fast__var_zc = 0;
    }
    //square sum and period update on signal zero cross
    if ((_home_battery_inverter__average_1_vrms1_rms_calc_fast__var_zc == 1) || (5000 == _home_battery_inverter__average_1_vrms1_rms_calc_fast__pc_cnt_1_state)) {
        _home_battery_inverter__average_1_vrms1_rms_calc_fast__var_eff_s = _home_battery_inverter__average_1_vrms1_rms_calc_fast__v_sq_sum_state;
        _home_battery_inverter__average_1_vrms1_rms_calc_fast__period = (float)_home_battery_inverter__average_1_vrms1_rms_calc_fast__pc_cnt_1_state;
        _home_battery_inverter__average_1_vrms1_rms_calc_fast__v_sq_sum_state = 0.0f;
    }
    // Generated from the component: Home.Battery inverter (Average)1.Vrms1.sys1
    // Generated from the component: Home.Lump1.Irms1.rms_calc_fast
    _home_lump1_irms1_rms_calc_fast__v_sq_sum_state = _home_lump1_irms1_rms_calc_fast__v_sq_sum_state + _home_lump1_irms1_iinst_ia1__out * _home_lump1_irms1_iinst_ia1__out;
    _home_lump1_irms1_rms_calc_fast__var_filt_old = _home_lump1_irms1_rms_calc_fast__var_filt;
    _home_lump1_irms1_rms_calc_fast__var_filt = (_home_lump1_irms1_rms_calc_fast__var_filt_old * 0.909 + _home_lump1_irms1_iinst_ia1__out * 0.0909);
    if((_home_lump1_irms1_rms_calc_fast__var_filt >= 0.0f) && (_home_lump1_irms1_rms_calc_fast__var_filt_old < 0.0f)) {
        _home_lump1_irms1_rms_calc_fast__var_zc = 1;
    }
    else {
        _home_lump1_irms1_rms_calc_fast__var_zc = 0;
    }
    //square sum and period update on signal zero cross
    if ((_home_lump1_irms1_rms_calc_fast__var_zc == 1) || (5000 == _home_lump1_irms1_rms_calc_fast__pc_cnt_1_state)) {
        _home_lump1_irms1_rms_calc_fast__var_eff_s = _home_lump1_irms1_rms_calc_fast__v_sq_sum_state;
        _home_lump1_irms1_rms_calc_fast__period = (float)_home_lump1_irms1_rms_calc_fast__pc_cnt_1_state;
        _home_lump1_irms1_rms_calc_fast__v_sq_sum_state = 0.0f;
    }
    // Generated from the component: Home.Lump1.Irms1.sys1
    // Generated from the component: Home.Lump1.Vrms1.rms_calc_fast
    _home_lump1_vrms1_rms_calc_fast__v_sq_sum_state = _home_lump1_vrms1_rms_calc_fast__v_sq_sum_state + _home_lump1_vrms1_vinst_va1__out * _home_lump1_vrms1_vinst_va1__out;
    _home_lump1_vrms1_rms_calc_fast__var_filt_old = _home_lump1_vrms1_rms_calc_fast__var_filt;
    _home_lump1_vrms1_rms_calc_fast__var_filt = (_home_lump1_vrms1_rms_calc_fast__var_filt_old * 0.909 + _home_lump1_vrms1_vinst_va1__out * 0.0909);
    if((_home_lump1_vrms1_rms_calc_fast__var_filt >= 0.0f) && (_home_lump1_vrms1_rms_calc_fast__var_filt_old < 0.0f)) {
        _home_lump1_vrms1_rms_calc_fast__var_zc = 1;
    }
    else {
        _home_lump1_vrms1_rms_calc_fast__var_zc = 0;
    }
    //square sum and period update on signal zero cross
    if ((_home_lump1_vrms1_rms_calc_fast__var_zc == 1) || (5000 == _home_lump1_vrms1_rms_calc_fast__pc_cnt_1_state)) {
        _home_lump1_vrms1_rms_calc_fast__var_eff_s = _home_lump1_vrms1_rms_calc_fast__v_sq_sum_state;
        _home_lump1_vrms1_rms_calc_fast__period = (float)_home_lump1_vrms1_rms_calc_fast__pc_cnt_1_state;
        _home_lump1_vrms1_rms_calc_fast__v_sq_sum_state = 0.0f;
    }
    // Generated from the component: Home.Lump1.Vrms1.sys1
    // Generated from the component: Home.Natural Gas Genset.Ia_gen_rms.rms_calc_fast
    _home_natural_gas_genset_ia_gen_rms_rms_calc_fast__v_sq_sum_state = _home_natural_gas_genset_ia_gen_rms_rms_calc_fast__v_sq_sum_state + _home_natural_gas_genset_ia_gen_rms_iinst_ia1__out * _home_natural_gas_genset_ia_gen_rms_iinst_ia1__out;
    _home_natural_gas_genset_ia_gen_rms_rms_calc_fast__var_filt_old = _home_natural_gas_genset_ia_gen_rms_rms_calc_fast__var_filt;
    _home_natural_gas_genset_ia_gen_rms_rms_calc_fast__var_filt = (_home_natural_gas_genset_ia_gen_rms_rms_calc_fast__var_filt_old * 0.909 + _home_natural_gas_genset_ia_gen_rms_iinst_ia1__out * 0.0909);
    if((_home_natural_gas_genset_ia_gen_rms_rms_calc_fast__var_filt >= 0.0f) && (_home_natural_gas_genset_ia_gen_rms_rms_calc_fast__var_filt_old < 0.0f)) {
        _home_natural_gas_genset_ia_gen_rms_rms_calc_fast__var_zc = 1;
    }
    else {
        _home_natural_gas_genset_ia_gen_rms_rms_calc_fast__var_zc = 0;
    }
    //square sum and period update on signal zero cross
    if ((_home_natural_gas_genset_ia_gen_rms_rms_calc_fast__var_zc == 1) || (5000 == _home_natural_gas_genset_ia_gen_rms_rms_calc_fast__pc_cnt_1_state)) {
        _home_natural_gas_genset_ia_gen_rms_rms_calc_fast__var_eff_s = _home_natural_gas_genset_ia_gen_rms_rms_calc_fast__v_sq_sum_state;
        _home_natural_gas_genset_ia_gen_rms_rms_calc_fast__period = (float)_home_natural_gas_genset_ia_gen_rms_rms_calc_fast__pc_cnt_1_state;
        _home_natural_gas_genset_ia_gen_rms_rms_calc_fast__v_sq_sum_state = 0.0f;
    }
    // Generated from the component: Home.Natural Gas Genset.Ia_gen_rms.sys1
    // Generated from the component: Home.Natural Gas Genset.Ib_gen_rms.rms_calc_fast
    _home_natural_gas_genset_ib_gen_rms_rms_calc_fast__v_sq_sum_state = _home_natural_gas_genset_ib_gen_rms_rms_calc_fast__v_sq_sum_state + _home_natural_gas_genset_ib_gen_rms_iinst_ia1__out * _home_natural_gas_genset_ib_gen_rms_iinst_ia1__out;
    _home_natural_gas_genset_ib_gen_rms_rms_calc_fast__var_filt_old = _home_natural_gas_genset_ib_gen_rms_rms_calc_fast__var_filt;
    _home_natural_gas_genset_ib_gen_rms_rms_calc_fast__var_filt = (_home_natural_gas_genset_ib_gen_rms_rms_calc_fast__var_filt_old * 0.909 + _home_natural_gas_genset_ib_gen_rms_iinst_ia1__out * 0.0909);
    if((_home_natural_gas_genset_ib_gen_rms_rms_calc_fast__var_filt >= 0.0f) && (_home_natural_gas_genset_ib_gen_rms_rms_calc_fast__var_filt_old < 0.0f)) {
        _home_natural_gas_genset_ib_gen_rms_rms_calc_fast__var_zc = 1;
    }
    else {
        _home_natural_gas_genset_ib_gen_rms_rms_calc_fast__var_zc = 0;
    }
    //square sum and period update on signal zero cross
    if ((_home_natural_gas_genset_ib_gen_rms_rms_calc_fast__var_zc == 1) || (5000 == _home_natural_gas_genset_ib_gen_rms_rms_calc_fast__pc_cnt_1_state)) {
        _home_natural_gas_genset_ib_gen_rms_rms_calc_fast__var_eff_s = _home_natural_gas_genset_ib_gen_rms_rms_calc_fast__v_sq_sum_state;
        _home_natural_gas_genset_ib_gen_rms_rms_calc_fast__period = (float)_home_natural_gas_genset_ib_gen_rms_rms_calc_fast__pc_cnt_1_state;
        _home_natural_gas_genset_ib_gen_rms_rms_calc_fast__v_sq_sum_state = 0.0f;
    }
    // Generated from the component: Home.Natural Gas Genset.Ib_gen_rms.sys1
    // Generated from the component: Home.Natural Gas Genset.Ic_gen_rms.rms_calc_fast
    _home_natural_gas_genset_ic_gen_rms_rms_calc_fast__v_sq_sum_state = _home_natural_gas_genset_ic_gen_rms_rms_calc_fast__v_sq_sum_state + _home_natural_gas_genset_ic_gen_rms_iinst_ia1__out * _home_natural_gas_genset_ic_gen_rms_iinst_ia1__out;
    _home_natural_gas_genset_ic_gen_rms_rms_calc_fast__var_filt_old = _home_natural_gas_genset_ic_gen_rms_rms_calc_fast__var_filt;
    _home_natural_gas_genset_ic_gen_rms_rms_calc_fast__var_filt = (_home_natural_gas_genset_ic_gen_rms_rms_calc_fast__var_filt_old * 0.909 + _home_natural_gas_genset_ic_gen_rms_iinst_ia1__out * 0.0909);
    if((_home_natural_gas_genset_ic_gen_rms_rms_calc_fast__var_filt >= 0.0f) && (_home_natural_gas_genset_ic_gen_rms_rms_calc_fast__var_filt_old < 0.0f)) {
        _home_natural_gas_genset_ic_gen_rms_rms_calc_fast__var_zc = 1;
    }
    else {
        _home_natural_gas_genset_ic_gen_rms_rms_calc_fast__var_zc = 0;
    }
    //square sum and period update on signal zero cross
    if ((_home_natural_gas_genset_ic_gen_rms_rms_calc_fast__var_zc == 1) || (5000 == _home_natural_gas_genset_ic_gen_rms_rms_calc_fast__pc_cnt_1_state)) {
        _home_natural_gas_genset_ic_gen_rms_rms_calc_fast__var_eff_s = _home_natural_gas_genset_ic_gen_rms_rms_calc_fast__v_sq_sum_state;
        _home_natural_gas_genset_ic_gen_rms_rms_calc_fast__period = (float)_home_natural_gas_genset_ic_gen_rms_rms_calc_fast__pc_cnt_1_state;
        _home_natural_gas_genset_ic_gen_rms_rms_calc_fast__v_sq_sum_state = 0.0f;
    }
    // Generated from the component: Home.Natural Gas Genset.Ic_gen_rms.sys1
    // Generated from the component: Home.Natural Gas Genset.vab_rms.rms_calc_fast
    _home_natural_gas_genset_vab_rms_rms_calc_fast__v_sq_sum_state = _home_natural_gas_genset_vab_rms_rms_calc_fast__v_sq_sum_state + _home_natural_gas_genset_vab_rms_vinst_va1__out * _home_natural_gas_genset_vab_rms_vinst_va1__out;
    _home_natural_gas_genset_vab_rms_rms_calc_fast__var_filt_old = _home_natural_gas_genset_vab_rms_rms_calc_fast__var_filt;
    _home_natural_gas_genset_vab_rms_rms_calc_fast__var_filt = (_home_natural_gas_genset_vab_rms_rms_calc_fast__var_filt_old * 0.909 + _home_natural_gas_genset_vab_rms_vinst_va1__out * 0.0909);
    if((_home_natural_gas_genset_vab_rms_rms_calc_fast__var_filt >= 0.0f) && (_home_natural_gas_genset_vab_rms_rms_calc_fast__var_filt_old < 0.0f)) {
        _home_natural_gas_genset_vab_rms_rms_calc_fast__var_zc = 1;
    }
    else {
        _home_natural_gas_genset_vab_rms_rms_calc_fast__var_zc = 0;
    }
    //square sum and period update on signal zero cross
    if ((_home_natural_gas_genset_vab_rms_rms_calc_fast__var_zc == 1) || (5000 == _home_natural_gas_genset_vab_rms_rms_calc_fast__pc_cnt_1_state)) {
        _home_natural_gas_genset_vab_rms_rms_calc_fast__var_eff_s = _home_natural_gas_genset_vab_rms_rms_calc_fast__v_sq_sum_state;
        _home_natural_gas_genset_vab_rms_rms_calc_fast__period = (float)_home_natural_gas_genset_vab_rms_rms_calc_fast__pc_cnt_1_state;
        _home_natural_gas_genset_vab_rms_rms_calc_fast__v_sq_sum_state = 0.0f;
    }
    // Generated from the component: Home.Natural Gas Genset.vab_rms.sys1
    // Generated from the component: Home.Natural Gas Genset.vbc_rms.rms_calc_fast
    _home_natural_gas_genset_vbc_rms_rms_calc_fast__v_sq_sum_state = _home_natural_gas_genset_vbc_rms_rms_calc_fast__v_sq_sum_state + _home_natural_gas_genset_vbc_rms_vinst_va1__out * _home_natural_gas_genset_vbc_rms_vinst_va1__out;
    _home_natural_gas_genset_vbc_rms_rms_calc_fast__var_filt_old = _home_natural_gas_genset_vbc_rms_rms_calc_fast__var_filt;
    _home_natural_gas_genset_vbc_rms_rms_calc_fast__var_filt = (_home_natural_gas_genset_vbc_rms_rms_calc_fast__var_filt_old * 0.909 + _home_natural_gas_genset_vbc_rms_vinst_va1__out * 0.0909);
    if((_home_natural_gas_genset_vbc_rms_rms_calc_fast__var_filt >= 0.0f) && (_home_natural_gas_genset_vbc_rms_rms_calc_fast__var_filt_old < 0.0f)) {
        _home_natural_gas_genset_vbc_rms_rms_calc_fast__var_zc = 1;
    }
    else {
        _home_natural_gas_genset_vbc_rms_rms_calc_fast__var_zc = 0;
    }
    //square sum and period update on signal zero cross
    if ((_home_natural_gas_genset_vbc_rms_rms_calc_fast__var_zc == 1) || (5000 == _home_natural_gas_genset_vbc_rms_rms_calc_fast__pc_cnt_1_state)) {
        _home_natural_gas_genset_vbc_rms_rms_calc_fast__var_eff_s = _home_natural_gas_genset_vbc_rms_rms_calc_fast__v_sq_sum_state;
        _home_natural_gas_genset_vbc_rms_rms_calc_fast__period = (float)_home_natural_gas_genset_vbc_rms_rms_calc_fast__pc_cnt_1_state;
        _home_natural_gas_genset_vbc_rms_rms_calc_fast__v_sq_sum_state = 0.0f;
    }
    // Generated from the component: Home.Natural Gas Genset.vbc_rms.sys1
    // Generated from the component: Home.Natural Gas Genset.vca_rms.rms_calc_fast
    _home_natural_gas_genset_vca_rms_rms_calc_fast__v_sq_sum_state = _home_natural_gas_genset_vca_rms_rms_calc_fast__v_sq_sum_state + _home_natural_gas_genset_vca_rms_vinst_va1__out * _home_natural_gas_genset_vca_rms_vinst_va1__out;
    _home_natural_gas_genset_vca_rms_rms_calc_fast__var_filt_old = _home_natural_gas_genset_vca_rms_rms_calc_fast__var_filt;
    _home_natural_gas_genset_vca_rms_rms_calc_fast__var_filt = (_home_natural_gas_genset_vca_rms_rms_calc_fast__var_filt_old * 0.909 + _home_natural_gas_genset_vca_rms_vinst_va1__out * 0.0909);
    if((_home_natural_gas_genset_vca_rms_rms_calc_fast__var_filt >= 0.0f) && (_home_natural_gas_genset_vca_rms_rms_calc_fast__var_filt_old < 0.0f)) {
        _home_natural_gas_genset_vca_rms_rms_calc_fast__var_zc = 1;
    }
    else {
        _home_natural_gas_genset_vca_rms_rms_calc_fast__var_zc = 0;
    }
    //square sum and period update on signal zero cross
    if ((_home_natural_gas_genset_vca_rms_rms_calc_fast__var_zc == 1) || (5000 == _home_natural_gas_genset_vca_rms_rms_calc_fast__pc_cnt_1_state)) {
        _home_natural_gas_genset_vca_rms_rms_calc_fast__var_eff_s = _home_natural_gas_genset_vca_rms_rms_calc_fast__v_sq_sum_state;
        _home_natural_gas_genset_vca_rms_rms_calc_fast__period = (float)_home_natural_gas_genset_vca_rms_rms_calc_fast__pc_cnt_1_state;
        _home_natural_gas_genset_vca_rms_rms_calc_fast__v_sq_sum_state = 0.0f;
    }
    // Generated from the component: Home.Natural Gas Genset.vca_rms.sys1
    // Generated from the component: Home.Battery inverter (Average)1.Irms1.rt1.Input
    _home_battery_inverter__average_1_irms1_rt1_output__out = _home_battery_inverter__average_1_irms1_rms_calc_fast__var_eff_s;
    // Generated from the component: Home.Battery inverter (Average)1.Irms1.rt2.Input
    _home_battery_inverter__average_1_irms1_rt2_output__out = _home_battery_inverter__average_1_irms1_rms_calc_fast__period;
    // Generated from the component: Home.Battery inverter (Average)1.Irms1.t1
    // Generated from the component: Home.Battery inverter (Average)1.Vrms1.rt1.Input
    _home_battery_inverter__average_1_vrms1_rt1_output__out = _home_battery_inverter__average_1_vrms1_rms_calc_fast__var_eff_s;
    // Generated from the component: Home.Battery inverter (Average)1.Vrms1.rt2.Input
    _home_battery_inverter__average_1_vrms1_rt2_output__out = _home_battery_inverter__average_1_vrms1_rms_calc_fast__period;
    // Generated from the component: Home.Battery inverter (Average)1.Vrms1.t1
    // Generated from the component: Home.Lump1.Irms1.rt1.Input
    _home_lump1_irms1_rt1_output__out = _home_lump1_irms1_rms_calc_fast__var_eff_s;
    // Generated from the component: Home.Lump1.Irms1.rt2.Input
    _home_lump1_irms1_rt2_output__out = _home_lump1_irms1_rms_calc_fast__period;
    // Generated from the component: Home.Lump1.Irms1.t1
    // Generated from the component: Home.Lump1.Vrms1.rt1.Input
    _home_lump1_vrms1_rt1_output__out = _home_lump1_vrms1_rms_calc_fast__var_eff_s;
    // Generated from the component: Home.Lump1.Vrms1.rt2.Input
    _home_lump1_vrms1_rt2_output__out = _home_lump1_vrms1_rms_calc_fast__period;
    // Generated from the component: Home.Lump1.Vrms1.t1
    // Generated from the component: Home.Natural Gas Genset.Ia_gen_rms.rt1.Input
    _home_natural_gas_genset_ia_gen_rms_rt1_output__out = _home_natural_gas_genset_ia_gen_rms_rms_calc_fast__var_eff_s;
    // Generated from the component: Home.Natural Gas Genset.Ia_gen_rms.rt2.Input
    _home_natural_gas_genset_ia_gen_rms_rt2_output__out = _home_natural_gas_genset_ia_gen_rms_rms_calc_fast__period;
    // Generated from the component: Home.Natural Gas Genset.Ia_gen_rms.t1
    // Generated from the component: Home.Natural Gas Genset.Ib_gen_rms.rt1.Input
    _home_natural_gas_genset_ib_gen_rms_rt1_output__out = _home_natural_gas_genset_ib_gen_rms_rms_calc_fast__var_eff_s;
    // Generated from the component: Home.Natural Gas Genset.Ib_gen_rms.rt2.Input
    _home_natural_gas_genset_ib_gen_rms_rt2_output__out = _home_natural_gas_genset_ib_gen_rms_rms_calc_fast__period;
    // Generated from the component: Home.Natural Gas Genset.Ib_gen_rms.t1
    // Generated from the component: Home.Natural Gas Genset.Ic_gen_rms.rt1.Input
    _home_natural_gas_genset_ic_gen_rms_rt1_output__out = _home_natural_gas_genset_ic_gen_rms_rms_calc_fast__var_eff_s;
    // Generated from the component: Home.Natural Gas Genset.Ic_gen_rms.rt2.Input
    _home_natural_gas_genset_ic_gen_rms_rt2_output__out = _home_natural_gas_genset_ic_gen_rms_rms_calc_fast__period;
    // Generated from the component: Home.Natural Gas Genset.Ic_gen_rms.t1
    // Generated from the component: Home.Natural Gas Genset.vab_rms.rt1.Input
    _home_natural_gas_genset_vab_rms_rt1_output__out = _home_natural_gas_genset_vab_rms_rms_calc_fast__var_eff_s;
    // Generated from the component: Home.Natural Gas Genset.vab_rms.rt2.Input
    _home_natural_gas_genset_vab_rms_rt2_output__out = _home_natural_gas_genset_vab_rms_rms_calc_fast__period;
    // Generated from the component: Home.Natural Gas Genset.vab_rms.t1
    // Generated from the component: Home.Natural Gas Genset.vbc_rms.rt1.Input
    _home_natural_gas_genset_vbc_rms_rt1_output__out = _home_natural_gas_genset_vbc_rms_rms_calc_fast__var_eff_s;
    // Generated from the component: Home.Natural Gas Genset.vbc_rms.rt2.Input
    _home_natural_gas_genset_vbc_rms_rt2_output__out = _home_natural_gas_genset_vbc_rms_rms_calc_fast__period;
    // Generated from the component: Home.Natural Gas Genset.vbc_rms.t1
    // Generated from the component: Home.Natural Gas Genset.vca_rms.rt1.Input
    _home_natural_gas_genset_vca_rms_rt1_output__out = _home_natural_gas_genset_vca_rms_rms_calc_fast__var_eff_s;
    // Generated from the component: Home.Natural Gas Genset.vca_rms.rt2.Input
    _home_natural_gas_genset_vca_rms_rt2_output__out = _home_natural_gas_genset_vca_rms_rms_calc_fast__period;
    // Generated from the component: Home.Natural Gas Genset.vca_rms.t1
    //@cmp.out.block.end
    //////////////////////////////////////////////////////////////////////////
    // Update block
    //////////////////////////////////////////////////////////////////////////
    //@cmp.update.block.start
    // Generated from the component: Home.Battery inverter (Average)1.Irms1.rms_calc_fast
    if ((_home_battery_inverter__average_1_irms1_rms_calc_fast__var_zc == 1) || (5000 == _home_battery_inverter__average_1_irms1_rms_calc_fast__pc_cnt_1_state)) {
        _home_battery_inverter__average_1_irms1_rms_calc_fast__pc_cnt_1_state = 0;
    }
    _home_battery_inverter__average_1_irms1_rms_calc_fast__pc_cnt_1_state ++;
    // Generated from the component: Home.Battery inverter (Average)1.Vrms1.rms_calc_fast
    if ((_home_battery_inverter__average_1_vrms1_rms_calc_fast__var_zc == 1) || (5000 == _home_battery_inverter__average_1_vrms1_rms_calc_fast__pc_cnt_1_state)) {
        _home_battery_inverter__average_1_vrms1_rms_calc_fast__pc_cnt_1_state = 0;
    }
    _home_battery_inverter__average_1_vrms1_rms_calc_fast__pc_cnt_1_state ++;
    // Generated from the component: Home.Lump1.Irms1.rms_calc_fast
    if ((_home_lump1_irms1_rms_calc_fast__var_zc == 1) || (5000 == _home_lump1_irms1_rms_calc_fast__pc_cnt_1_state)) {
        _home_lump1_irms1_rms_calc_fast__pc_cnt_1_state = 0;
    }
    _home_lump1_irms1_rms_calc_fast__pc_cnt_1_state ++;
    // Generated from the component: Home.Lump1.Vrms1.rms_calc_fast
    if ((_home_lump1_vrms1_rms_calc_fast__var_zc == 1) || (5000 == _home_lump1_vrms1_rms_calc_fast__pc_cnt_1_state)) {
        _home_lump1_vrms1_rms_calc_fast__pc_cnt_1_state = 0;
    }
    _home_lump1_vrms1_rms_calc_fast__pc_cnt_1_state ++;
    // Generated from the component: Home.Natural Gas Genset.Ia_gen_rms.rms_calc_fast
    if ((_home_natural_gas_genset_ia_gen_rms_rms_calc_fast__var_zc == 1) || (5000 == _home_natural_gas_genset_ia_gen_rms_rms_calc_fast__pc_cnt_1_state)) {
        _home_natural_gas_genset_ia_gen_rms_rms_calc_fast__pc_cnt_1_state = 0;
    }
    _home_natural_gas_genset_ia_gen_rms_rms_calc_fast__pc_cnt_1_state ++;
    // Generated from the component: Home.Natural Gas Genset.Ib_gen_rms.rms_calc_fast
    if ((_home_natural_gas_genset_ib_gen_rms_rms_calc_fast__var_zc == 1) || (5000 == _home_natural_gas_genset_ib_gen_rms_rms_calc_fast__pc_cnt_1_state)) {
        _home_natural_gas_genset_ib_gen_rms_rms_calc_fast__pc_cnt_1_state = 0;
    }
    _home_natural_gas_genset_ib_gen_rms_rms_calc_fast__pc_cnt_1_state ++;
    // Generated from the component: Home.Natural Gas Genset.Ic_gen_rms.rms_calc_fast
    if ((_home_natural_gas_genset_ic_gen_rms_rms_calc_fast__var_zc == 1) || (5000 == _home_natural_gas_genset_ic_gen_rms_rms_calc_fast__pc_cnt_1_state)) {
        _home_natural_gas_genset_ic_gen_rms_rms_calc_fast__pc_cnt_1_state = 0;
    }
    _home_natural_gas_genset_ic_gen_rms_rms_calc_fast__pc_cnt_1_state ++;
    // Generated from the component: Home.Natural Gas Genset.vab_rms.rms_calc_fast
    if ((_home_natural_gas_genset_vab_rms_rms_calc_fast__var_zc == 1) || (5000 == _home_natural_gas_genset_vab_rms_rms_calc_fast__pc_cnt_1_state)) {
        _home_natural_gas_genset_vab_rms_rms_calc_fast__pc_cnt_1_state = 0;
    }
    _home_natural_gas_genset_vab_rms_rms_calc_fast__pc_cnt_1_state ++;
    // Generated from the component: Home.Natural Gas Genset.vbc_rms.rms_calc_fast
    if ((_home_natural_gas_genset_vbc_rms_rms_calc_fast__var_zc == 1) || (5000 == _home_natural_gas_genset_vbc_rms_rms_calc_fast__pc_cnt_1_state)) {
        _home_natural_gas_genset_vbc_rms_rms_calc_fast__pc_cnt_1_state = 0;
    }
    _home_natural_gas_genset_vbc_rms_rms_calc_fast__pc_cnt_1_state ++;
    // Generated from the component: Home.Natural Gas Genset.vca_rms.rms_calc_fast
    if ((_home_natural_gas_genset_vca_rms_rms_calc_fast__var_zc == 1) || (5000 == _home_natural_gas_genset_vca_rms_rms_calc_fast__pc_cnt_1_state)) {
        _home_natural_gas_genset_vca_rms_rms_calc_fast__pc_cnt_1_state = 0;
    }
    _home_natural_gas_genset_vca_rms_rms_calc_fast__pc_cnt_1_state ++;
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
    // Generated from the component: Home.Battery inverter (Average)1.Irms1.rt1.Output
    // Generated from the component: Home.Battery inverter (Average)1.Irms1.rt2.Output
    // Generated from the component: Home.Battery inverter (Average)1.Vrms1.rt1.Output
    // Generated from the component: Home.Battery inverter (Average)1.Vrms1.rt2.Output
    // Generated from the component: Home.Lump1.Irms1.rt1.Output
    // Generated from the component: Home.Lump1.Irms1.rt2.Output
    // Generated from the component: Home.Lump1.Vrms1.rt1.Output
    // Generated from the component: Home.Lump1.Vrms1.rt2.Output
    // Generated from the component: Home.Natural Gas Genset.Ia_gen_rms.rt1.Output
    // Generated from the component: Home.Natural Gas Genset.Ia_gen_rms.rt2.Output
    // Generated from the component: Home.Natural Gas Genset.Ib_gen_rms.rt1.Output
    // Generated from the component: Home.Natural Gas Genset.Ib_gen_rms.rt2.Output
    // Generated from the component: Home.Natural Gas Genset.Ic_gen_rms.rt1.Output
    // Generated from the component: Home.Natural Gas Genset.Ic_gen_rms.rt2.Output
    // Generated from the component: Home.Natural Gas Genset.vab_rms.rt1.Output
    // Generated from the component: Home.Natural Gas Genset.vab_rms.rt2.Output
    // Generated from the component: Home.Natural Gas Genset.vbc_rms.rt1.Output
    // Generated from the component: Home.Natural Gas Genset.vbc_rms.rt2.Output
    // Generated from the component: Home.Natural Gas Genset.vca_rms.rt1.Output
    // Generated from the component: Home.Natural Gas Genset.vca_rms.rt2.Output
    // Generated from the component: Home.Battery inverter (Average)1.Irms1.rms_calc_slow
    if(_home_battery_inverter__average_1_irms1_rt2_output__out > 0.0f) {
        _home_battery_inverter__average_1_irms1_rms_calc_slow__var_rms = sqrtf(_home_battery_inverter__average_1_irms1_rt1_output__out / _home_battery_inverter__average_1_irms1_rt2_output__out);
    }
    else {
        _home_battery_inverter__average_1_irms1_rms_calc_slow__var_rms = 0.0f;
    }
    // Generated from the component: Home.Battery inverter (Average)1.Vrms1.rms_calc_slow
    if(_home_battery_inverter__average_1_vrms1_rt2_output__out > 0.0f) {
        _home_battery_inverter__average_1_vrms1_rms_calc_slow__var_rms = sqrtf(_home_battery_inverter__average_1_vrms1_rt1_output__out / _home_battery_inverter__average_1_vrms1_rt2_output__out);
    }
    else {
        _home_battery_inverter__average_1_vrms1_rms_calc_slow__var_rms = 0.0f;
    }
    // Generated from the component: Home.Lump1.Irms1.rms_calc_slow
    if(_home_lump1_irms1_rt2_output__out > 0.0f) {
        _home_lump1_irms1_rms_calc_slow__var_rms = sqrtf(_home_lump1_irms1_rt1_output__out / _home_lump1_irms1_rt2_output__out);
    }
    else {
        _home_lump1_irms1_rms_calc_slow__var_rms = 0.0f;
    }
    // Generated from the component: Home.Lump1.Vrms1.rms_calc_slow
    if(_home_lump1_vrms1_rt2_output__out > 0.0f) {
        _home_lump1_vrms1_rms_calc_slow__var_rms = sqrtf(_home_lump1_vrms1_rt1_output__out / _home_lump1_vrms1_rt2_output__out);
    }
    else {
        _home_lump1_vrms1_rms_calc_slow__var_rms = 0.0f;
    }
    // Generated from the component: Home.Natural Gas Genset.Ia_gen_rms.rms_calc_slow
    if(_home_natural_gas_genset_ia_gen_rms_rt2_output__out > 0.0f) {
        _home_natural_gas_genset_ia_gen_rms_rms_calc_slow__var_rms = sqrtf(_home_natural_gas_genset_ia_gen_rms_rt1_output__out / _home_natural_gas_genset_ia_gen_rms_rt2_output__out);
    }
    else {
        _home_natural_gas_genset_ia_gen_rms_rms_calc_slow__var_rms = 0.0f;
    }
    // Generated from the component: Home.Natural Gas Genset.Ib_gen_rms.rms_calc_slow
    if(_home_natural_gas_genset_ib_gen_rms_rt2_output__out > 0.0f) {
        _home_natural_gas_genset_ib_gen_rms_rms_calc_slow__var_rms = sqrtf(_home_natural_gas_genset_ib_gen_rms_rt1_output__out / _home_natural_gas_genset_ib_gen_rms_rt2_output__out);
    }
    else {
        _home_natural_gas_genset_ib_gen_rms_rms_calc_slow__var_rms = 0.0f;
    }
    // Generated from the component: Home.Natural Gas Genset.Ic_gen_rms.rms_calc_slow
    if(_home_natural_gas_genset_ic_gen_rms_rt2_output__out > 0.0f) {
        _home_natural_gas_genset_ic_gen_rms_rms_calc_slow__var_rms = sqrtf(_home_natural_gas_genset_ic_gen_rms_rt1_output__out / _home_natural_gas_genset_ic_gen_rms_rt2_output__out);
    }
    else {
        _home_natural_gas_genset_ic_gen_rms_rms_calc_slow__var_rms = 0.0f;
    }
    // Generated from the component: Home.Natural Gas Genset.vab_rms.rms_calc_slow
    if(_home_natural_gas_genset_vab_rms_rt2_output__out > 0.0f) {
        _home_natural_gas_genset_vab_rms_rms_calc_slow__var_rms = sqrtf(_home_natural_gas_genset_vab_rms_rt1_output__out / _home_natural_gas_genset_vab_rms_rt2_output__out);
    }
    else {
        _home_natural_gas_genset_vab_rms_rms_calc_slow__var_rms = 0.0f;
    }
    // Generated from the component: Home.Natural Gas Genset.vbc_rms.rms_calc_slow
    if(_home_natural_gas_genset_vbc_rms_rt2_output__out > 0.0f) {
        _home_natural_gas_genset_vbc_rms_rms_calc_slow__var_rms = sqrtf(_home_natural_gas_genset_vbc_rms_rt1_output__out / _home_natural_gas_genset_vbc_rms_rt2_output__out);
    }
    else {
        _home_natural_gas_genset_vbc_rms_rms_calc_slow__var_rms = 0.0f;
    }
    // Generated from the component: Home.Natural Gas Genset.vca_rms.rms_calc_slow
    if(_home_natural_gas_genset_vca_rms_rt2_output__out > 0.0f) {
        _home_natural_gas_genset_vca_rms_rms_calc_slow__var_rms = sqrtf(_home_natural_gas_genset_vca_rms_rt1_output__out / _home_natural_gas_genset_vca_rms_rt2_output__out);
    }
    else {
        _home_natural_gas_genset_vca_rms_rms_calc_slow__var_rms = 0.0f;
    }
    // Generated from the component: Home.Battery inverter (Average)1.Irms1.rms
    HIL_OutAO(0x4000, _home_battery_inverter__average_1_irms1_rms_calc_slow__var_rms);
    // Generated from the component: Home.Battery inverter (Average)1.Irms1.sys2
    // Generated from the component: Home.Battery inverter (Average)1.Vrms1.rms
    HIL_OutAO(0x4001, _home_battery_inverter__average_1_vrms1_rms_calc_slow__var_rms);
    // Generated from the component: Home.Battery inverter (Average)1.Vrms1.sys2
    // Generated from the component: Home.Lump1.Irms1.rms
    HIL_OutAO(0x4002, _home_lump1_irms1_rms_calc_slow__var_rms);
    // Generated from the component: Home.Lump1.Irms1.sys2
    // Generated from the component: Home.Lump1.Vrms1.rms
    HIL_OutAO(0x4003, _home_lump1_vrms1_rms_calc_slow__var_rms);
    // Generated from the component: Home.Lump1.Vrms1.sys2
    // Generated from the component: Home.Natural Gas Genset.Ia_gen_rms.rms
    HIL_OutAO(0x4004, _home_natural_gas_genset_ia_gen_rms_rms_calc_slow__var_rms);
    // Generated from the component: Home.Natural Gas Genset.Ia_gen_rms.sys2
    // Generated from the component: Home.Natural Gas Genset.Ib_gen_rms.rms
    HIL_OutAO(0x4005, _home_natural_gas_genset_ib_gen_rms_rms_calc_slow__var_rms);
    // Generated from the component: Home.Natural Gas Genset.Ib_gen_rms.sys2
    // Generated from the component: Home.Natural Gas Genset.Ic_gen_rms.rms
    HIL_OutAO(0x4006, _home_natural_gas_genset_ic_gen_rms_rms_calc_slow__var_rms);
    // Generated from the component: Home.Natural Gas Genset.Ic_gen_rms.sys2
    // Generated from the component: Home.Natural Gas Genset.vab_rms.rms
    HIL_OutAO(0x4007, _home_natural_gas_genset_vab_rms_rms_calc_slow__var_rms);
    // Generated from the component: Home.Natural Gas Genset.vab_rms.sys2
    // Generated from the component: Home.Natural Gas Genset.vbc_rms.rms
    HIL_OutAO(0x4008, _home_natural_gas_genset_vbc_rms_rms_calc_slow__var_rms);
    // Generated from the component: Home.Natural Gas Genset.vbc_rms.sys2
    // Generated from the component: Home.Natural Gas Genset.vca_rms.rms
    HIL_OutAO(0x4009, _home_natural_gas_genset_vca_rms_rms_calc_slow__var_rms);
    // Generated from the component: Home.Natural Gas Genset.vca_rms.sys2
    //@cmp.out.block.end
    //////////////////////////////////////////////////////////////////////////
    // Update block
    //////////////////////////////////////////////////////////////////////////
    //@cmp.update.block.start
    //@cmp.update.block.end
}
// ----------------------------------------------------------------------------------------  //-----------------------------------------------------------------------------------------