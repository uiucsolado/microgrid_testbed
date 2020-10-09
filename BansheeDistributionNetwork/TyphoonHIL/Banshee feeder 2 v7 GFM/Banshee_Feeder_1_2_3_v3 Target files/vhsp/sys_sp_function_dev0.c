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
float _ess_grid_forming_inverter__averaged__vrms_vinst_va1__out;
float _pv_grid_feeding_inverter__averaged__vrms_vinst_va1__out;
float _vrms_bus201_vinst_va1__out;
float _vrms_bus202_vinst_va1__out;
float _vrms_bus203_vinst_va1__out;
float _vrms_bus204_vinst_va1__out;
float _vrms_bus205_vinst_va1__out;
float _vrms_bus206_vinst_va1__out;
float _vrms_bus207_vinst_va1__out;
float _vrms_bus208_vinst_va1__out;
float _vrms_bus209_vinst_va1__out;
float _vrms_bus210_vinst_va1__out;
float _ess_grid_forming_inverter__averaged__vrms_rms_calc_fast__var_eff_s;
X_UnInt32 _ess_grid_forming_inverter__averaged__vrms_rms_calc_fast__period;
float _ess_grid_forming_inverter__averaged__vrms_rms_calc_slow__var_rms;
float _pv_grid_feeding_inverter__averaged__vrms_rms_calc_fast__var_eff_s;
X_UnInt32 _pv_grid_feeding_inverter__averaged__vrms_rms_calc_fast__period;
float _pv_grid_feeding_inverter__averaged__vrms_rms_calc_slow__var_rms;
float _vrms_bus201_rms_calc_fast__var_eff_s;
X_UnInt32 _vrms_bus201_rms_calc_fast__period;
float _vrms_bus201_rms_calc_slow__var_rms;
float _vrms_bus202_rms_calc_fast__var_eff_s;
X_UnInt32 _vrms_bus202_rms_calc_fast__period;
float _vrms_bus202_rms_calc_slow__var_rms;
float _vrms_bus203_rms_calc_fast__var_eff_s;
X_UnInt32 _vrms_bus203_rms_calc_fast__period;
float _vrms_bus203_rms_calc_slow__var_rms;
float _vrms_bus204_rms_calc_fast__var_eff_s;
X_UnInt32 _vrms_bus204_rms_calc_fast__period;
float _vrms_bus204_rms_calc_slow__var_rms;
float _vrms_bus205_rms_calc_fast__var_eff_s;
X_UnInt32 _vrms_bus205_rms_calc_fast__period;
float _vrms_bus205_rms_calc_slow__var_rms;
float _vrms_bus206_rms_calc_fast__var_eff_s;
X_UnInt32 _vrms_bus206_rms_calc_fast__period;
float _vrms_bus206_rms_calc_slow__var_rms;
float _vrms_bus207_rms_calc_fast__var_eff_s;
X_UnInt32 _vrms_bus207_rms_calc_fast__period;
float _vrms_bus207_rms_calc_slow__var_rms;
float _vrms_bus208_rms_calc_fast__var_eff_s;
X_UnInt32 _vrms_bus208_rms_calc_fast__period;
float _vrms_bus208_rms_calc_slow__var_rms;
float _vrms_bus209_rms_calc_fast__var_eff_s;
X_UnInt32 _vrms_bus209_rms_calc_fast__period;
float _vrms_bus209_rms_calc_slow__var_rms;
float _vrms_bus210_rms_calc_fast__var_eff_s;
X_UnInt32 _vrms_bus210_rms_calc_fast__period;
float _vrms_bus210_rms_calc_slow__var_rms;
//@cmp.var.end

//@cmp.svar.start
// state variables
float _ess_grid_forming_inverter__averaged__vrms_rt1_output__out =  0.0;

float _ess_grid_forming_inverter__averaged__vrms_rt2_output__out =  0.0;

float _pv_grid_feeding_inverter__averaged__vrms_rt1_output__out =  0.0;

float _pv_grid_feeding_inverter__averaged__vrms_rt2_output__out =  0.0;

float _vrms_bus201_rt1_output__out =  0.0;

float _vrms_bus201_rt2_output__out =  0.0;

float _vrms_bus202_rt1_output__out =  0.0;

float _vrms_bus202_rt2_output__out =  0.0;

float _vrms_bus203_rt1_output__out =  0.0;

float _vrms_bus203_rt2_output__out =  0.0;

float _vrms_bus204_rt1_output__out =  0.0;

float _vrms_bus204_rt2_output__out =  0.0;

float _vrms_bus205_rt1_output__out =  0.0;

float _vrms_bus205_rt2_output__out =  0.0;

float _vrms_bus206_rt1_output__out =  0.0;

float _vrms_bus206_rt2_output__out =  0.0;

float _vrms_bus207_rt1_output__out =  0.0;

float _vrms_bus207_rt2_output__out =  0.0;

float _vrms_bus208_rt1_output__out =  0.0;

float _vrms_bus208_rt2_output__out =  0.0;

float _vrms_bus209_rt1_output__out =  0.0;

float _vrms_bus209_rt2_output__out =  0.0;

float _vrms_bus210_rt1_output__out =  0.0;

float _vrms_bus210_rt2_output__out =  0.0;

float _ess_grid_forming_inverter__averaged__vrms_rms_calc_fast__v_sq_sum_state;
X_UnInt32 _ess_grid_forming_inverter__averaged__vrms_rms_calc_fast__pc_cnt_1_state;
float _ess_grid_forming_inverter__averaged__vrms_rms_calc_fast__var_filt;
float _pv_grid_feeding_inverter__averaged__vrms_rms_calc_fast__v_sq_sum_state;
X_UnInt32 _pv_grid_feeding_inverter__averaged__vrms_rms_calc_fast__pc_cnt_1_state;
float _pv_grid_feeding_inverter__averaged__vrms_rms_calc_fast__var_filt;
float _vrms_bus201_rms_calc_fast__v_sq_sum_state;
X_UnInt32 _vrms_bus201_rms_calc_fast__pc_cnt_1_state;
float _vrms_bus201_rms_calc_fast__var_filt;
float _vrms_bus202_rms_calc_fast__v_sq_sum_state;
X_UnInt32 _vrms_bus202_rms_calc_fast__pc_cnt_1_state;
float _vrms_bus202_rms_calc_fast__var_filt;
float _vrms_bus203_rms_calc_fast__v_sq_sum_state;
X_UnInt32 _vrms_bus203_rms_calc_fast__pc_cnt_1_state;
float _vrms_bus203_rms_calc_fast__var_filt;
float _vrms_bus204_rms_calc_fast__v_sq_sum_state;
X_UnInt32 _vrms_bus204_rms_calc_fast__pc_cnt_1_state;
float _vrms_bus204_rms_calc_fast__var_filt;
float _vrms_bus205_rms_calc_fast__v_sq_sum_state;
X_UnInt32 _vrms_bus205_rms_calc_fast__pc_cnt_1_state;
float _vrms_bus205_rms_calc_fast__var_filt;
float _vrms_bus206_rms_calc_fast__v_sq_sum_state;
X_UnInt32 _vrms_bus206_rms_calc_fast__pc_cnt_1_state;
float _vrms_bus206_rms_calc_fast__var_filt;
float _vrms_bus207_rms_calc_fast__v_sq_sum_state;
X_UnInt32 _vrms_bus207_rms_calc_fast__pc_cnt_1_state;
float _vrms_bus207_rms_calc_fast__var_filt;
float _vrms_bus208_rms_calc_fast__v_sq_sum_state;
X_UnInt32 _vrms_bus208_rms_calc_fast__pc_cnt_1_state;
float _vrms_bus208_rms_calc_fast__var_filt;
float _vrms_bus209_rms_calc_fast__v_sq_sum_state;
X_UnInt32 _vrms_bus209_rms_calc_fast__pc_cnt_1_state;
float _vrms_bus209_rms_calc_fast__var_filt;
float _vrms_bus210_rms_calc_fast__v_sq_sum_state;
X_UnInt32 _vrms_bus210_rms_calc_fast__pc_cnt_1_state;
float _vrms_bus210_rms_calc_fast__var_filt;
//@cmp.svar.end


// generated using template: virtual_hil/custom_functions.template---------------------------------
void ReInit_sys_sp_cpu_dev0() {
#if DEBUG_MODE
    printf("\n\rReInitTimer");
#endif
    //@cmp.init.block.start
    _ess_grid_forming_inverter__averaged__vrms_rt1_output__out =  0.0;
    _ess_grid_forming_inverter__averaged__vrms_rt2_output__out =  0.0;
    _pv_grid_feeding_inverter__averaged__vrms_rt1_output__out =  0.0;
    _pv_grid_feeding_inverter__averaged__vrms_rt2_output__out =  0.0;
    _vrms_bus201_rt1_output__out =  0.0;
    _vrms_bus201_rt2_output__out =  0.0;
    _vrms_bus202_rt1_output__out =  0.0;
    _vrms_bus202_rt2_output__out =  0.0;
    _vrms_bus203_rt1_output__out =  0.0;
    _vrms_bus203_rt2_output__out =  0.0;
    _vrms_bus204_rt1_output__out =  0.0;
    _vrms_bus204_rt2_output__out =  0.0;
    _vrms_bus205_rt1_output__out =  0.0;
    _vrms_bus205_rt2_output__out =  0.0;
    _vrms_bus206_rt1_output__out =  0.0;
    _vrms_bus206_rt2_output__out =  0.0;
    _vrms_bus207_rt1_output__out =  0.0;
    _vrms_bus207_rt2_output__out =  0.0;
    _vrms_bus208_rt1_output__out =  0.0;
    _vrms_bus208_rt2_output__out =  0.0;
    _vrms_bus209_rt1_output__out =  0.0;
    _vrms_bus209_rt2_output__out =  0.0;
    _vrms_bus210_rt1_output__out =  0.0;
    _vrms_bus210_rt2_output__out =  0.0;
    _ess_grid_forming_inverter__averaged__vrms_rms_calc_fast__var_eff_s = 0;
    _ess_grid_forming_inverter__averaged__vrms_rms_calc_fast__period = 0;
    _ess_grid_forming_inverter__averaged__vrms_rms_calc_fast__var_filt = 0.0f;
    _ess_grid_forming_inverter__averaged__vrms_rms_calc_fast__v_sq_sum_state = 0.0f;
    _ess_grid_forming_inverter__averaged__vrms_rms_calc_fast__pc_cnt_1_state = 0;
    _pv_grid_feeding_inverter__averaged__vrms_rms_calc_fast__var_eff_s = 0;
    _pv_grid_feeding_inverter__averaged__vrms_rms_calc_fast__period = 0;
    _pv_grid_feeding_inverter__averaged__vrms_rms_calc_fast__var_filt = 0.0f;
    _pv_grid_feeding_inverter__averaged__vrms_rms_calc_fast__v_sq_sum_state = 0.0f;
    _pv_grid_feeding_inverter__averaged__vrms_rms_calc_fast__pc_cnt_1_state = 0;
    _vrms_bus201_rms_calc_fast__var_eff_s = 0;
    _vrms_bus201_rms_calc_fast__period = 0;
    _vrms_bus201_rms_calc_fast__var_filt = 0.0f;
    _vrms_bus201_rms_calc_fast__v_sq_sum_state = 0.0f;
    _vrms_bus201_rms_calc_fast__pc_cnt_1_state = 0;
    _vrms_bus202_rms_calc_fast__var_eff_s = 0;
    _vrms_bus202_rms_calc_fast__period = 0;
    _vrms_bus202_rms_calc_fast__var_filt = 0.0f;
    _vrms_bus202_rms_calc_fast__v_sq_sum_state = 0.0f;
    _vrms_bus202_rms_calc_fast__pc_cnt_1_state = 0;
    _vrms_bus203_rms_calc_fast__var_eff_s = 0;
    _vrms_bus203_rms_calc_fast__period = 0;
    _vrms_bus203_rms_calc_fast__var_filt = 0.0f;
    _vrms_bus203_rms_calc_fast__v_sq_sum_state = 0.0f;
    _vrms_bus203_rms_calc_fast__pc_cnt_1_state = 0;
    _vrms_bus204_rms_calc_fast__var_eff_s = 0;
    _vrms_bus204_rms_calc_fast__period = 0;
    _vrms_bus204_rms_calc_fast__var_filt = 0.0f;
    _vrms_bus204_rms_calc_fast__v_sq_sum_state = 0.0f;
    _vrms_bus204_rms_calc_fast__pc_cnt_1_state = 0;
    _vrms_bus205_rms_calc_fast__var_eff_s = 0;
    _vrms_bus205_rms_calc_fast__period = 0;
    _vrms_bus205_rms_calc_fast__var_filt = 0.0f;
    _vrms_bus205_rms_calc_fast__v_sq_sum_state = 0.0f;
    _vrms_bus205_rms_calc_fast__pc_cnt_1_state = 0;
    _vrms_bus206_rms_calc_fast__var_eff_s = 0;
    _vrms_bus206_rms_calc_fast__period = 0;
    _vrms_bus206_rms_calc_fast__var_filt = 0.0f;
    _vrms_bus206_rms_calc_fast__v_sq_sum_state = 0.0f;
    _vrms_bus206_rms_calc_fast__pc_cnt_1_state = 0;
    _vrms_bus207_rms_calc_fast__var_eff_s = 0;
    _vrms_bus207_rms_calc_fast__period = 0;
    _vrms_bus207_rms_calc_fast__var_filt = 0.0f;
    _vrms_bus207_rms_calc_fast__v_sq_sum_state = 0.0f;
    _vrms_bus207_rms_calc_fast__pc_cnt_1_state = 0;
    _vrms_bus208_rms_calc_fast__var_eff_s = 0;
    _vrms_bus208_rms_calc_fast__period = 0;
    _vrms_bus208_rms_calc_fast__var_filt = 0.0f;
    _vrms_bus208_rms_calc_fast__v_sq_sum_state = 0.0f;
    _vrms_bus208_rms_calc_fast__pc_cnt_1_state = 0;
    _vrms_bus209_rms_calc_fast__var_eff_s = 0;
    _vrms_bus209_rms_calc_fast__period = 0;
    _vrms_bus209_rms_calc_fast__var_filt = 0.0f;
    _vrms_bus209_rms_calc_fast__v_sq_sum_state = 0.0f;
    _vrms_bus209_rms_calc_fast__pc_cnt_1_state = 0;
    _vrms_bus210_rms_calc_fast__var_eff_s = 0;
    _vrms_bus210_rms_calc_fast__period = 0;
    _vrms_bus210_rms_calc_fast__var_filt = 0.0f;
    _vrms_bus210_rms_calc_fast__v_sq_sum_state = 0.0f;
    _vrms_bus210_rms_calc_fast__pc_cnt_1_state = 0;
    XIo_OutFloat(0x55000100, 0.0f);
    HIL_OutAO(0x4000, 0.0f);
    XIo_OutFloat(0x55000104, 0.0f);
    HIL_OutAO(0x4001, 0.0f);
    HIL_OutAO(0x4002, 0.0f);
    HIL_OutAO(0x4003, 0.0f);
    HIL_OutAO(0x4004, 0.0f);
    HIL_OutAO(0x4005, 0.0f);
    HIL_OutAO(0x4006, 0.0f);
    HIL_OutAO(0x4007, 0.0f);
    HIL_OutAO(0x4008, 0.0f);
    HIL_OutAO(0x4009, 0.0f);
    HIL_OutAO(0x400a, 0.0f);
    HIL_OutAO(0x400b, 0.0f);
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
    // Generated from the component: ESS.Grid forming inverter (averaged).Vrms.Vinst.Va1
    _ess_grid_forming_inverter__averaged__vrms_vinst_va1__out = (HIL_InFloat(0xc80000 + 0xe1a));
    // Generated from the component: PV.Grid feeding inverter (averaged).Vrms.Vinst.Va1
    _pv_grid_feeding_inverter__averaged__vrms_vinst_va1__out = (HIL_InFloat(0xc80000 + 0xc14));
    // Generated from the component: Vrms_bus201.Vinst.Va1
    _vrms_bus201_vinst_va1__out = (HIL_InFloat(0xc80000 + 0x216));
    // Generated from the component: Vrms_bus202.Vinst.Va1
    _vrms_bus202_vinst_va1__out = (HIL_InFloat(0xc80000 + 0x29));
    // Generated from the component: Vrms_bus203.Vinst.Va1
    _vrms_bus203_vinst_va1__out = (HIL_InFloat(0xc80000 + 0x625));
    // Generated from the component: Vrms_bus204.Vinst.Va1
    _vrms_bus204_vinst_va1__out = (HIL_InFloat(0xc80000 + 0x2a));
    // Generated from the component: Vrms_bus205.Vinst.Va1
    _vrms_bus205_vinst_va1__out = (HIL_InFloat(0xc80000 + 0x42a));
    // Generated from the component: Vrms_bus206.Vinst.Va1
    _vrms_bus206_vinst_va1__out = (HIL_InFloat(0xc80000 + 0x822));
    // Generated from the component: Vrms_bus207.Vinst.Va1
    _vrms_bus207_vinst_va1__out = (HIL_InFloat(0xc80000 + 0x626));
    // Generated from the component: Vrms_bus208.Vinst.Va1
    _vrms_bus208_vinst_va1__out = (HIL_InFloat(0xc80000 + 0x217));
    // Generated from the component: Vrms_bus209.Vinst.Va1
    _vrms_bus209_vinst_va1__out = (HIL_InFloat(0xc80000 + 0x218));
    // Generated from the component: Vrms_bus210.Vinst.Va1
    _vrms_bus210_vinst_va1__out = (HIL_InFloat(0xc80000 + 0xa16));
    // Generated from the component: ESS.Grid forming inverter (averaged).Vrms.rms_calc_fast
    _ess_grid_forming_inverter__averaged__vrms_rms_calc_fast__v_sq_sum_state = _ess_grid_forming_inverter__averaged__vrms_rms_calc_fast__v_sq_sum_state + _ess_grid_forming_inverter__averaged__vrms_vinst_va1__out * _ess_grid_forming_inverter__averaged__vrms_vinst_va1__out;
    //square sum and period update on period end
    if (333 == _ess_grid_forming_inverter__averaged__vrms_rms_calc_fast__pc_cnt_1_state) {
        _ess_grid_forming_inverter__averaged__vrms_rms_calc_fast__var_eff_s = _ess_grid_forming_inverter__averaged__vrms_rms_calc_fast__v_sq_sum_state;
        _ess_grid_forming_inverter__averaged__vrms_rms_calc_fast__period = (float)333;
        _ess_grid_forming_inverter__averaged__vrms_rms_calc_fast__v_sq_sum_state = 0.0f;
    }
    // Generated from the component: ESS.Grid forming inverter (averaged).Vrms.sys1
    // Generated from the component: PV.Grid feeding inverter (averaged).Vrms.rms_calc_fast
    _pv_grid_feeding_inverter__averaged__vrms_rms_calc_fast__v_sq_sum_state = _pv_grid_feeding_inverter__averaged__vrms_rms_calc_fast__v_sq_sum_state + _pv_grid_feeding_inverter__averaged__vrms_vinst_va1__out * _pv_grid_feeding_inverter__averaged__vrms_vinst_va1__out;
    //square sum and period update on period end
    if (333 == _pv_grid_feeding_inverter__averaged__vrms_rms_calc_fast__pc_cnt_1_state) {
        _pv_grid_feeding_inverter__averaged__vrms_rms_calc_fast__var_eff_s = _pv_grid_feeding_inverter__averaged__vrms_rms_calc_fast__v_sq_sum_state;
        _pv_grid_feeding_inverter__averaged__vrms_rms_calc_fast__period = (float)333;
        _pv_grid_feeding_inverter__averaged__vrms_rms_calc_fast__v_sq_sum_state = 0.0f;
    }
    // Generated from the component: PV.Grid feeding inverter (averaged).Vrms.sys1
    // Generated from the component: Vrms_bus201.rms_calc_fast
    _vrms_bus201_rms_calc_fast__v_sq_sum_state = _vrms_bus201_rms_calc_fast__v_sq_sum_state + _vrms_bus201_vinst_va1__out * _vrms_bus201_vinst_va1__out;
    //square sum and period update on period end
    if (333 == _vrms_bus201_rms_calc_fast__pc_cnt_1_state) {
        _vrms_bus201_rms_calc_fast__var_eff_s = _vrms_bus201_rms_calc_fast__v_sq_sum_state;
        _vrms_bus201_rms_calc_fast__period = (float)333;
        _vrms_bus201_rms_calc_fast__v_sq_sum_state = 0.0f;
    }
    // Generated from the component: Vrms_bus201.sys1
    // Generated from the component: Vrms_bus202.rms_calc_fast
    _vrms_bus202_rms_calc_fast__v_sq_sum_state = _vrms_bus202_rms_calc_fast__v_sq_sum_state + _vrms_bus202_vinst_va1__out * _vrms_bus202_vinst_va1__out;
    //square sum and period update on period end
    if (333 == _vrms_bus202_rms_calc_fast__pc_cnt_1_state) {
        _vrms_bus202_rms_calc_fast__var_eff_s = _vrms_bus202_rms_calc_fast__v_sq_sum_state;
        _vrms_bus202_rms_calc_fast__period = (float)333;
        _vrms_bus202_rms_calc_fast__v_sq_sum_state = 0.0f;
    }
    // Generated from the component: Vrms_bus202.sys1
    // Generated from the component: Vrms_bus203.rms_calc_fast
    _vrms_bus203_rms_calc_fast__v_sq_sum_state = _vrms_bus203_rms_calc_fast__v_sq_sum_state + _vrms_bus203_vinst_va1__out * _vrms_bus203_vinst_va1__out;
    //square sum and period update on period end
    if (333 == _vrms_bus203_rms_calc_fast__pc_cnt_1_state) {
        _vrms_bus203_rms_calc_fast__var_eff_s = _vrms_bus203_rms_calc_fast__v_sq_sum_state;
        _vrms_bus203_rms_calc_fast__period = (float)333;
        _vrms_bus203_rms_calc_fast__v_sq_sum_state = 0.0f;
    }
    // Generated from the component: Vrms_bus203.sys1
    // Generated from the component: Vrms_bus204.rms_calc_fast
    _vrms_bus204_rms_calc_fast__v_sq_sum_state = _vrms_bus204_rms_calc_fast__v_sq_sum_state + _vrms_bus204_vinst_va1__out * _vrms_bus204_vinst_va1__out;
    //square sum and period update on period end
    if (333 == _vrms_bus204_rms_calc_fast__pc_cnt_1_state) {
        _vrms_bus204_rms_calc_fast__var_eff_s = _vrms_bus204_rms_calc_fast__v_sq_sum_state;
        _vrms_bus204_rms_calc_fast__period = (float)333;
        _vrms_bus204_rms_calc_fast__v_sq_sum_state = 0.0f;
    }
    // Generated from the component: Vrms_bus204.sys1
    // Generated from the component: Vrms_bus205.rms_calc_fast
    _vrms_bus205_rms_calc_fast__v_sq_sum_state = _vrms_bus205_rms_calc_fast__v_sq_sum_state + _vrms_bus205_vinst_va1__out * _vrms_bus205_vinst_va1__out;
    //square sum and period update on period end
    if (333 == _vrms_bus205_rms_calc_fast__pc_cnt_1_state) {
        _vrms_bus205_rms_calc_fast__var_eff_s = _vrms_bus205_rms_calc_fast__v_sq_sum_state;
        _vrms_bus205_rms_calc_fast__period = (float)333;
        _vrms_bus205_rms_calc_fast__v_sq_sum_state = 0.0f;
    }
    // Generated from the component: Vrms_bus205.sys1
    // Generated from the component: Vrms_bus206.rms_calc_fast
    _vrms_bus206_rms_calc_fast__v_sq_sum_state = _vrms_bus206_rms_calc_fast__v_sq_sum_state + _vrms_bus206_vinst_va1__out * _vrms_bus206_vinst_va1__out;
    //square sum and period update on period end
    if (333 == _vrms_bus206_rms_calc_fast__pc_cnt_1_state) {
        _vrms_bus206_rms_calc_fast__var_eff_s = _vrms_bus206_rms_calc_fast__v_sq_sum_state;
        _vrms_bus206_rms_calc_fast__period = (float)333;
        _vrms_bus206_rms_calc_fast__v_sq_sum_state = 0.0f;
    }
    // Generated from the component: Vrms_bus206.sys1
    // Generated from the component: Vrms_bus207.rms_calc_fast
    _vrms_bus207_rms_calc_fast__v_sq_sum_state = _vrms_bus207_rms_calc_fast__v_sq_sum_state + _vrms_bus207_vinst_va1__out * _vrms_bus207_vinst_va1__out;
    //square sum and period update on period end
    if (333 == _vrms_bus207_rms_calc_fast__pc_cnt_1_state) {
        _vrms_bus207_rms_calc_fast__var_eff_s = _vrms_bus207_rms_calc_fast__v_sq_sum_state;
        _vrms_bus207_rms_calc_fast__period = (float)333;
        _vrms_bus207_rms_calc_fast__v_sq_sum_state = 0.0f;
    }
    // Generated from the component: Vrms_bus207.sys1
    // Generated from the component: Vrms_bus208.rms_calc_fast
    _vrms_bus208_rms_calc_fast__v_sq_sum_state = _vrms_bus208_rms_calc_fast__v_sq_sum_state + _vrms_bus208_vinst_va1__out * _vrms_bus208_vinst_va1__out;
    //square sum and period update on period end
    if (333 == _vrms_bus208_rms_calc_fast__pc_cnt_1_state) {
        _vrms_bus208_rms_calc_fast__var_eff_s = _vrms_bus208_rms_calc_fast__v_sq_sum_state;
        _vrms_bus208_rms_calc_fast__period = (float)333;
        _vrms_bus208_rms_calc_fast__v_sq_sum_state = 0.0f;
    }
    // Generated from the component: Vrms_bus208.sys1
    // Generated from the component: Vrms_bus209.rms_calc_fast
    _vrms_bus209_rms_calc_fast__v_sq_sum_state = _vrms_bus209_rms_calc_fast__v_sq_sum_state + _vrms_bus209_vinst_va1__out * _vrms_bus209_vinst_va1__out;
    //square sum and period update on period end
    if (333 == _vrms_bus209_rms_calc_fast__pc_cnt_1_state) {
        _vrms_bus209_rms_calc_fast__var_eff_s = _vrms_bus209_rms_calc_fast__v_sq_sum_state;
        _vrms_bus209_rms_calc_fast__period = (float)333;
        _vrms_bus209_rms_calc_fast__v_sq_sum_state = 0.0f;
    }
    // Generated from the component: Vrms_bus209.sys1
    // Generated from the component: Vrms_bus210.rms_calc_fast
    _vrms_bus210_rms_calc_fast__v_sq_sum_state = _vrms_bus210_rms_calc_fast__v_sq_sum_state + _vrms_bus210_vinst_va1__out * _vrms_bus210_vinst_va1__out;
    //square sum and period update on period end
    if (333 == _vrms_bus210_rms_calc_fast__pc_cnt_1_state) {
        _vrms_bus210_rms_calc_fast__var_eff_s = _vrms_bus210_rms_calc_fast__v_sq_sum_state;
        _vrms_bus210_rms_calc_fast__period = (float)333;
        _vrms_bus210_rms_calc_fast__v_sq_sum_state = 0.0f;
    }
    // Generated from the component: Vrms_bus210.sys1
    // Generated from the component: ESS.Grid forming inverter (averaged).Vrms.rt1.Input
    _ess_grid_forming_inverter__averaged__vrms_rt1_output__out = _ess_grid_forming_inverter__averaged__vrms_rms_calc_fast__var_eff_s;
    // Generated from the component: ESS.Grid forming inverter (averaged).Vrms.rt2.Input
    _ess_grid_forming_inverter__averaged__vrms_rt2_output__out = _ess_grid_forming_inverter__averaged__vrms_rms_calc_fast__period;
    // Generated from the component: ESS.Grid forming inverter (averaged).Vrms.t1
    // Generated from the component: PV.Grid feeding inverter (averaged).Vrms.rt1.Input
    _pv_grid_feeding_inverter__averaged__vrms_rt1_output__out = _pv_grid_feeding_inverter__averaged__vrms_rms_calc_fast__var_eff_s;
    // Generated from the component: PV.Grid feeding inverter (averaged).Vrms.rt2.Input
    _pv_grid_feeding_inverter__averaged__vrms_rt2_output__out = _pv_grid_feeding_inverter__averaged__vrms_rms_calc_fast__period;
    // Generated from the component: PV.Grid feeding inverter (averaged).Vrms.t1
    // Generated from the component: Vrms_bus201.rt1.Input
    _vrms_bus201_rt1_output__out = _vrms_bus201_rms_calc_fast__var_eff_s;
    // Generated from the component: Vrms_bus201.rt2.Input
    _vrms_bus201_rt2_output__out = _vrms_bus201_rms_calc_fast__period;
    // Generated from the component: Vrms_bus201.t1
    // Generated from the component: Vrms_bus202.rt1.Input
    _vrms_bus202_rt1_output__out = _vrms_bus202_rms_calc_fast__var_eff_s;
    // Generated from the component: Vrms_bus202.rt2.Input
    _vrms_bus202_rt2_output__out = _vrms_bus202_rms_calc_fast__period;
    // Generated from the component: Vrms_bus202.t1
    // Generated from the component: Vrms_bus203.rt1.Input
    _vrms_bus203_rt1_output__out = _vrms_bus203_rms_calc_fast__var_eff_s;
    // Generated from the component: Vrms_bus203.rt2.Input
    _vrms_bus203_rt2_output__out = _vrms_bus203_rms_calc_fast__period;
    // Generated from the component: Vrms_bus203.t1
    // Generated from the component: Vrms_bus204.rt1.Input
    _vrms_bus204_rt1_output__out = _vrms_bus204_rms_calc_fast__var_eff_s;
    // Generated from the component: Vrms_bus204.rt2.Input
    _vrms_bus204_rt2_output__out = _vrms_bus204_rms_calc_fast__period;
    // Generated from the component: Vrms_bus204.t1
    // Generated from the component: Vrms_bus205.rt1.Input
    _vrms_bus205_rt1_output__out = _vrms_bus205_rms_calc_fast__var_eff_s;
    // Generated from the component: Vrms_bus205.rt2.Input
    _vrms_bus205_rt2_output__out = _vrms_bus205_rms_calc_fast__period;
    // Generated from the component: Vrms_bus205.t1
    // Generated from the component: Vrms_bus206.rt1.Input
    _vrms_bus206_rt1_output__out = _vrms_bus206_rms_calc_fast__var_eff_s;
    // Generated from the component: Vrms_bus206.rt2.Input
    _vrms_bus206_rt2_output__out = _vrms_bus206_rms_calc_fast__period;
    // Generated from the component: Vrms_bus206.t1
    // Generated from the component: Vrms_bus207.rt1.Input
    _vrms_bus207_rt1_output__out = _vrms_bus207_rms_calc_fast__var_eff_s;
    // Generated from the component: Vrms_bus207.rt2.Input
    _vrms_bus207_rt2_output__out = _vrms_bus207_rms_calc_fast__period;
    // Generated from the component: Vrms_bus207.t1
    // Generated from the component: Vrms_bus208.rt1.Input
    _vrms_bus208_rt1_output__out = _vrms_bus208_rms_calc_fast__var_eff_s;
    // Generated from the component: Vrms_bus208.rt2.Input
    _vrms_bus208_rt2_output__out = _vrms_bus208_rms_calc_fast__period;
    // Generated from the component: Vrms_bus208.t1
    // Generated from the component: Vrms_bus209.rt1.Input
    _vrms_bus209_rt1_output__out = _vrms_bus209_rms_calc_fast__var_eff_s;
    // Generated from the component: Vrms_bus209.rt2.Input
    _vrms_bus209_rt2_output__out = _vrms_bus209_rms_calc_fast__period;
    // Generated from the component: Vrms_bus209.t1
    // Generated from the component: Vrms_bus210.rt1.Input
    _vrms_bus210_rt1_output__out = _vrms_bus210_rms_calc_fast__var_eff_s;
    // Generated from the component: Vrms_bus210.rt2.Input
    _vrms_bus210_rt2_output__out = _vrms_bus210_rms_calc_fast__period;
    // Generated from the component: Vrms_bus210.t1
    //@cmp.out.block.end
    //////////////////////////////////////////////////////////////////////////
    // Update block
    //////////////////////////////////////////////////////////////////////////
    //@cmp.update.block.start
    // Generated from the component: ESS.Grid forming inverter (averaged).Vrms.rms_calc_fast
    if (333 == _ess_grid_forming_inverter__averaged__vrms_rms_calc_fast__pc_cnt_1_state) {
        _ess_grid_forming_inverter__averaged__vrms_rms_calc_fast__pc_cnt_1_state = 0;
    }
    _ess_grid_forming_inverter__averaged__vrms_rms_calc_fast__pc_cnt_1_state ++;
    // Generated from the component: PV.Grid feeding inverter (averaged).Vrms.rms_calc_fast
    if (333 == _pv_grid_feeding_inverter__averaged__vrms_rms_calc_fast__pc_cnt_1_state) {
        _pv_grid_feeding_inverter__averaged__vrms_rms_calc_fast__pc_cnt_1_state = 0;
    }
    _pv_grid_feeding_inverter__averaged__vrms_rms_calc_fast__pc_cnt_1_state ++;
    // Generated from the component: Vrms_bus201.rms_calc_fast
    if (333 == _vrms_bus201_rms_calc_fast__pc_cnt_1_state) {
        _vrms_bus201_rms_calc_fast__pc_cnt_1_state = 0;
    }
    _vrms_bus201_rms_calc_fast__pc_cnt_1_state ++;
    // Generated from the component: Vrms_bus202.rms_calc_fast
    if (333 == _vrms_bus202_rms_calc_fast__pc_cnt_1_state) {
        _vrms_bus202_rms_calc_fast__pc_cnt_1_state = 0;
    }
    _vrms_bus202_rms_calc_fast__pc_cnt_1_state ++;
    // Generated from the component: Vrms_bus203.rms_calc_fast
    if (333 == _vrms_bus203_rms_calc_fast__pc_cnt_1_state) {
        _vrms_bus203_rms_calc_fast__pc_cnt_1_state = 0;
    }
    _vrms_bus203_rms_calc_fast__pc_cnt_1_state ++;
    // Generated from the component: Vrms_bus204.rms_calc_fast
    if (333 == _vrms_bus204_rms_calc_fast__pc_cnt_1_state) {
        _vrms_bus204_rms_calc_fast__pc_cnt_1_state = 0;
    }
    _vrms_bus204_rms_calc_fast__pc_cnt_1_state ++;
    // Generated from the component: Vrms_bus205.rms_calc_fast
    if (333 == _vrms_bus205_rms_calc_fast__pc_cnt_1_state) {
        _vrms_bus205_rms_calc_fast__pc_cnt_1_state = 0;
    }
    _vrms_bus205_rms_calc_fast__pc_cnt_1_state ++;
    // Generated from the component: Vrms_bus206.rms_calc_fast
    if (333 == _vrms_bus206_rms_calc_fast__pc_cnt_1_state) {
        _vrms_bus206_rms_calc_fast__pc_cnt_1_state = 0;
    }
    _vrms_bus206_rms_calc_fast__pc_cnt_1_state ++;
    // Generated from the component: Vrms_bus207.rms_calc_fast
    if (333 == _vrms_bus207_rms_calc_fast__pc_cnt_1_state) {
        _vrms_bus207_rms_calc_fast__pc_cnt_1_state = 0;
    }
    _vrms_bus207_rms_calc_fast__pc_cnt_1_state ++;
    // Generated from the component: Vrms_bus208.rms_calc_fast
    if (333 == _vrms_bus208_rms_calc_fast__pc_cnt_1_state) {
        _vrms_bus208_rms_calc_fast__pc_cnt_1_state = 0;
    }
    _vrms_bus208_rms_calc_fast__pc_cnt_1_state ++;
    // Generated from the component: Vrms_bus209.rms_calc_fast
    if (333 == _vrms_bus209_rms_calc_fast__pc_cnt_1_state) {
        _vrms_bus209_rms_calc_fast__pc_cnt_1_state = 0;
    }
    _vrms_bus209_rms_calc_fast__pc_cnt_1_state ++;
    // Generated from the component: Vrms_bus210.rms_calc_fast
    if (333 == _vrms_bus210_rms_calc_fast__pc_cnt_1_state) {
        _vrms_bus210_rms_calc_fast__pc_cnt_1_state = 0;
    }
    _vrms_bus210_rms_calc_fast__pc_cnt_1_state ++;
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
    // Generated from the component: ESS.Grid forming inverter (averaged).Vrms.rt1.Output
    // Generated from the component: ESS.Grid forming inverter (averaged).Vrms.rt2.Output
    // Generated from the component: PV.Grid feeding inverter (averaged).Vrms.rt1.Output
    // Generated from the component: PV.Grid feeding inverter (averaged).Vrms.rt2.Output
    // Generated from the component: Vrms_bus201.rt1.Output
    // Generated from the component: Vrms_bus201.rt2.Output
    // Generated from the component: Vrms_bus202.rt1.Output
    // Generated from the component: Vrms_bus202.rt2.Output
    // Generated from the component: Vrms_bus203.rt1.Output
    // Generated from the component: Vrms_bus203.rt2.Output
    // Generated from the component: Vrms_bus204.rt1.Output
    // Generated from the component: Vrms_bus204.rt2.Output
    // Generated from the component: Vrms_bus205.rt1.Output
    // Generated from the component: Vrms_bus205.rt2.Output
    // Generated from the component: Vrms_bus206.rt1.Output
    // Generated from the component: Vrms_bus206.rt2.Output
    // Generated from the component: Vrms_bus207.rt1.Output
    // Generated from the component: Vrms_bus207.rt2.Output
    // Generated from the component: Vrms_bus208.rt1.Output
    // Generated from the component: Vrms_bus208.rt2.Output
    // Generated from the component: Vrms_bus209.rt1.Output
    // Generated from the component: Vrms_bus209.rt2.Output
    // Generated from the component: Vrms_bus210.rt1.Output
    // Generated from the component: Vrms_bus210.rt2.Output
    // Generated from the component: ESS.Grid forming inverter (averaged).Vrms.rms_calc_slow
    if(_ess_grid_forming_inverter__averaged__vrms_rt2_output__out > 0.0f) {
        _ess_grid_forming_inverter__averaged__vrms_rms_calc_slow__var_rms = sqrtf(_ess_grid_forming_inverter__averaged__vrms_rt1_output__out / _ess_grid_forming_inverter__averaged__vrms_rt2_output__out);
    }
    else {
        _ess_grid_forming_inverter__averaged__vrms_rms_calc_slow__var_rms = 0.0f;
    }
    // Generated from the component: PV.Grid feeding inverter (averaged).Vrms.rms_calc_slow
    if(_pv_grid_feeding_inverter__averaged__vrms_rt2_output__out > 0.0f) {
        _pv_grid_feeding_inverter__averaged__vrms_rms_calc_slow__var_rms = sqrtf(_pv_grid_feeding_inverter__averaged__vrms_rt1_output__out / _pv_grid_feeding_inverter__averaged__vrms_rt2_output__out);
    }
    else {
        _pv_grid_feeding_inverter__averaged__vrms_rms_calc_slow__var_rms = 0.0f;
    }
    // Generated from the component: Vrms_bus201.rms_calc_slow
    if(_vrms_bus201_rt2_output__out > 0.0f) {
        _vrms_bus201_rms_calc_slow__var_rms = sqrtf(_vrms_bus201_rt1_output__out / _vrms_bus201_rt2_output__out);
    }
    else {
        _vrms_bus201_rms_calc_slow__var_rms = 0.0f;
    }
    // Generated from the component: Vrms_bus202.rms_calc_slow
    if(_vrms_bus202_rt2_output__out > 0.0f) {
        _vrms_bus202_rms_calc_slow__var_rms = sqrtf(_vrms_bus202_rt1_output__out / _vrms_bus202_rt2_output__out);
    }
    else {
        _vrms_bus202_rms_calc_slow__var_rms = 0.0f;
    }
    // Generated from the component: Vrms_bus203.rms_calc_slow
    if(_vrms_bus203_rt2_output__out > 0.0f) {
        _vrms_bus203_rms_calc_slow__var_rms = sqrtf(_vrms_bus203_rt1_output__out / _vrms_bus203_rt2_output__out);
    }
    else {
        _vrms_bus203_rms_calc_slow__var_rms = 0.0f;
    }
    // Generated from the component: Vrms_bus204.rms_calc_slow
    if(_vrms_bus204_rt2_output__out > 0.0f) {
        _vrms_bus204_rms_calc_slow__var_rms = sqrtf(_vrms_bus204_rt1_output__out / _vrms_bus204_rt2_output__out);
    }
    else {
        _vrms_bus204_rms_calc_slow__var_rms = 0.0f;
    }
    // Generated from the component: Vrms_bus205.rms_calc_slow
    if(_vrms_bus205_rt2_output__out > 0.0f) {
        _vrms_bus205_rms_calc_slow__var_rms = sqrtf(_vrms_bus205_rt1_output__out / _vrms_bus205_rt2_output__out);
    }
    else {
        _vrms_bus205_rms_calc_slow__var_rms = 0.0f;
    }
    // Generated from the component: Vrms_bus206.rms_calc_slow
    if(_vrms_bus206_rt2_output__out > 0.0f) {
        _vrms_bus206_rms_calc_slow__var_rms = sqrtf(_vrms_bus206_rt1_output__out / _vrms_bus206_rt2_output__out);
    }
    else {
        _vrms_bus206_rms_calc_slow__var_rms = 0.0f;
    }
    // Generated from the component: Vrms_bus207.rms_calc_slow
    if(_vrms_bus207_rt2_output__out > 0.0f) {
        _vrms_bus207_rms_calc_slow__var_rms = sqrtf(_vrms_bus207_rt1_output__out / _vrms_bus207_rt2_output__out);
    }
    else {
        _vrms_bus207_rms_calc_slow__var_rms = 0.0f;
    }
    // Generated from the component: Vrms_bus208.rms_calc_slow
    if(_vrms_bus208_rt2_output__out > 0.0f) {
        _vrms_bus208_rms_calc_slow__var_rms = sqrtf(_vrms_bus208_rt1_output__out / _vrms_bus208_rt2_output__out);
    }
    else {
        _vrms_bus208_rms_calc_slow__var_rms = 0.0f;
    }
    // Generated from the component: Vrms_bus209.rms_calc_slow
    if(_vrms_bus209_rt2_output__out > 0.0f) {
        _vrms_bus209_rms_calc_slow__var_rms = sqrtf(_vrms_bus209_rt1_output__out / _vrms_bus209_rt2_output__out);
    }
    else {
        _vrms_bus209_rms_calc_slow__var_rms = 0.0f;
    }
    // Generated from the component: Vrms_bus210.rms_calc_slow
    if(_vrms_bus210_rt2_output__out > 0.0f) {
        _vrms_bus210_rms_calc_slow__var_rms = sqrtf(_vrms_bus210_rt1_output__out / _vrms_bus210_rt2_output__out);
    }
    else {
        _vrms_bus210_rms_calc_slow__var_rms = 0.0f;
    }
    // Generated from the component: ESS.Grid forming inverter (averaged).Vrms.cpu_trans.Input
    XIo_OutFloat(0x55000100, _ess_grid_forming_inverter__averaged__vrms_rms_calc_slow__var_rms);
    // Generated from the component: ESS.Grid forming inverter (averaged).Vrms.rms
    HIL_OutAO(0x4000, _ess_grid_forming_inverter__averaged__vrms_rms_calc_slow__var_rms);
    // Generated from the component: ESS.Grid forming inverter (averaged).Vrms.sys2
    // Generated from the component: PV.Grid feeding inverter (averaged).Vrms.cpu_trans.Input
    XIo_OutFloat(0x55000104, _pv_grid_feeding_inverter__averaged__vrms_rms_calc_slow__var_rms);
    // Generated from the component: PV.Grid feeding inverter (averaged).Vrms.rms
    HIL_OutAO(0x4001, _pv_grid_feeding_inverter__averaged__vrms_rms_calc_slow__var_rms);
    // Generated from the component: PV.Grid feeding inverter (averaged).Vrms.sys2
    // Generated from the component: Vrms_bus201.rms
    HIL_OutAO(0x4002, _vrms_bus201_rms_calc_slow__var_rms);
    // Generated from the component: Vrms_bus201.sys2
    // Generated from the component: Vrms_bus202.rms
    HIL_OutAO(0x4003, _vrms_bus202_rms_calc_slow__var_rms);
    // Generated from the component: Vrms_bus202.sys2
    // Generated from the component: Vrms_bus203.rms
    HIL_OutAO(0x4004, _vrms_bus203_rms_calc_slow__var_rms);
    // Generated from the component: Vrms_bus203.sys2
    // Generated from the component: Vrms_bus204.rms
    HIL_OutAO(0x4005, _vrms_bus204_rms_calc_slow__var_rms);
    // Generated from the component: Vrms_bus204.sys2
    // Generated from the component: Vrms_bus205.rms
    HIL_OutAO(0x4006, _vrms_bus205_rms_calc_slow__var_rms);
    // Generated from the component: Vrms_bus205.sys2
    // Generated from the component: Vrms_bus206.rms
    HIL_OutAO(0x4007, _vrms_bus206_rms_calc_slow__var_rms);
    // Generated from the component: Vrms_bus206.sys2
    // Generated from the component: Vrms_bus207.rms
    HIL_OutAO(0x4008, _vrms_bus207_rms_calc_slow__var_rms);
    // Generated from the component: Vrms_bus207.sys2
    // Generated from the component: Vrms_bus208.rms
    HIL_OutAO(0x4009, _vrms_bus208_rms_calc_slow__var_rms);
    // Generated from the component: Vrms_bus208.sys2
    // Generated from the component: Vrms_bus209.rms
    HIL_OutAO(0x400a, _vrms_bus209_rms_calc_slow__var_rms);
    // Generated from the component: Vrms_bus209.sys2
    // Generated from the component: Vrms_bus210.rms
    HIL_OutAO(0x400b, _vrms_bus210_rms_calc_slow__var_rms);
    // Generated from the component: Vrms_bus210.sys2
    //@cmp.out.block.end
    //////////////////////////////////////////////////////////////////////////
    // Update block
    //////////////////////////////////////////////////////////////////////////
    //@cmp.update.block.start
    //@cmp.update.block.end
}
// ----------------------------------------------------------------------------------------  //-----------------------------------------------------------------------------------------