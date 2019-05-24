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




















































































































































































































































//@cmp.def.end


//-----------------------------------------------------------------------------------------
// generated using template: common_variables.template-------------------------------------
// true global variables


//@cmp.var.start
// variables
float _vbc_rms3_vinst_va1__out;
float _vab_rms3_vinst_va1__out;
float _igb_rms3_iinst_ia1__out;
float _ground1_iinst_ia1__out;
float _igc_rms3_iinst_ia1__out;
float _iga_rms3_iinst_ia1__out;
float _ground2_iinst_ia1__out;
float _igb_rms1_iinst_ia1__out;
float _vab_rms1_vinst_va1__out;
float _vbc_rms1_vinst_va1__out;
float _igc_rms1_iinst_ia1__out;
float _iga_rms1_iinst_ia1__out;
float _iga_rms_iinst_ia1__out;
float _vbc_rms_vinst_va1__out;
float _igc_rms_iinst_ia1__out;
float _vab_rms_vinst_va1__out;
float _igb_rms_iinst_ia1__out;
float _iga_rms2_iinst_ia1__out;
float _igb_rms2_iinst_ia1__out;
float _igc_rms2_iinst_ia1__out;
float _vab_rms2_vinst_va1__out;
float _vbc_rms2_vinst_va1__out;
float _vbc_rms3_rms_calc_fast__var_eff_s;
X_UnInt32 _vbc_rms3_rms_calc_fast__period;
X_UnInt8 _vbc_rms3_rms_calc_fast__var_zc;
float _vbc_rms3_rms_calc_fast__var_filt_old;
float _vab_rms3_rms_calc_fast__var_eff_s;
X_UnInt32 _vab_rms3_rms_calc_fast__period;
X_UnInt8 _vab_rms3_rms_calc_fast__var_zc;
float _vab_rms3_rms_calc_fast__var_filt_old;
float _igb_rms3_rms_calc_fast__var_eff_s;
X_UnInt32 _igb_rms3_rms_calc_fast__period;
X_UnInt8 _igb_rms3_rms_calc_fast__var_zc;
float _igb_rms3_rms_calc_fast__var_filt_old;
float _ground1_rms_calc_fast__var_eff_s;
X_UnInt32 _ground1_rms_calc_fast__period;
X_UnInt8 _ground1_rms_calc_fast__var_zc;
float _ground1_rms_calc_fast__var_filt_old;
float _igc_rms3_rms_calc_fast__var_eff_s;
X_UnInt32 _igc_rms3_rms_calc_fast__period;
X_UnInt8 _igc_rms3_rms_calc_fast__var_zc;
float _igc_rms3_rms_calc_fast__var_filt_old;
float _iga_rms3_rms_calc_fast__var_eff_s;
X_UnInt32 _iga_rms3_rms_calc_fast__period;
X_UnInt8 _iga_rms3_rms_calc_fast__var_zc;
float _iga_rms3_rms_calc_fast__var_filt_old;
float _ground2_rms_calc_fast__var_eff_s;
X_UnInt32 _ground2_rms_calc_fast__period;
X_UnInt8 _ground2_rms_calc_fast__var_zc;
float _ground2_rms_calc_fast__var_filt_old;
float _igb_rms1_rms_calc_fast__var_eff_s;
X_UnInt32 _igb_rms1_rms_calc_fast__period;
X_UnInt8 _igb_rms1_rms_calc_fast__var_zc;
float _igb_rms1_rms_calc_fast__var_filt_old;
float _vab_rms1_rms_calc_fast__var_eff_s;
X_UnInt32 _vab_rms1_rms_calc_fast__period;
X_UnInt8 _vab_rms1_rms_calc_fast__var_zc;
float _vab_rms1_rms_calc_fast__var_filt_old;
float _vbc_rms1_rms_calc_fast__var_eff_s;
X_UnInt32 _vbc_rms1_rms_calc_fast__period;
X_UnInt8 _vbc_rms1_rms_calc_fast__var_zc;
float _vbc_rms1_rms_calc_fast__var_filt_old;
float _igc_rms1_rms_calc_fast__var_eff_s;
X_UnInt32 _igc_rms1_rms_calc_fast__period;
X_UnInt8 _igc_rms1_rms_calc_fast__var_zc;
float _igc_rms1_rms_calc_fast__var_filt_old;
float _iga_rms1_rms_calc_fast__var_eff_s;
X_UnInt32 _iga_rms1_rms_calc_fast__period;
X_UnInt8 _iga_rms1_rms_calc_fast__var_zc;
float _iga_rms1_rms_calc_fast__var_filt_old;
float _iga_rms_rms_calc_fast__var_eff_s;
X_UnInt32 _iga_rms_rms_calc_fast__period;
X_UnInt8 _iga_rms_rms_calc_fast__var_zc;
float _iga_rms_rms_calc_fast__var_filt_old;
float _vbc_rms_rms_calc_fast__var_eff_s;
X_UnInt32 _vbc_rms_rms_calc_fast__period;
X_UnInt8 _vbc_rms_rms_calc_fast__var_zc;
float _vbc_rms_rms_calc_fast__var_filt_old;
float _igc_rms_rms_calc_fast__var_eff_s;
X_UnInt32 _igc_rms_rms_calc_fast__period;
X_UnInt8 _igc_rms_rms_calc_fast__var_zc;
float _igc_rms_rms_calc_fast__var_filt_old;
float _vab_rms_rms_calc_fast__var_eff_s;
X_UnInt32 _vab_rms_rms_calc_fast__period;
X_UnInt8 _vab_rms_rms_calc_fast__var_zc;
float _vab_rms_rms_calc_fast__var_filt_old;
float _igb_rms_rms_calc_fast__var_eff_s;
X_UnInt32 _igb_rms_rms_calc_fast__period;
X_UnInt8 _igb_rms_rms_calc_fast__var_zc;
float _igb_rms_rms_calc_fast__var_filt_old;
float _iga_rms2_rms_calc_fast__var_eff_s;
X_UnInt32 _iga_rms2_rms_calc_fast__period;
X_UnInt8 _iga_rms2_rms_calc_fast__var_zc;
float _iga_rms2_rms_calc_fast__var_filt_old;
float _igb_rms2_rms_calc_fast__var_eff_s;
X_UnInt32 _igb_rms2_rms_calc_fast__period;
X_UnInt8 _igb_rms2_rms_calc_fast__var_zc;
float _igb_rms2_rms_calc_fast__var_filt_old;
float _igc_rms2_rms_calc_fast__var_eff_s;
X_UnInt32 _igc_rms2_rms_calc_fast__period;
X_UnInt8 _igc_rms2_rms_calc_fast__var_zc;
float _igc_rms2_rms_calc_fast__var_filt_old;
float _vab_rms2_rms_calc_fast__var_eff_s;
X_UnInt32 _vab_rms2_rms_calc_fast__period;
X_UnInt8 _vab_rms2_rms_calc_fast__var_zc;
float _vab_rms2_rms_calc_fast__var_filt_old;
float _vbc_rms2_rms_calc_fast__var_eff_s;
X_UnInt32 _vbc_rms2_rms_calc_fast__period;
X_UnInt8 _vbc_rms2_rms_calc_fast__var_zc;
float _vbc_rms2_rms_calc_fast__var_filt_old;
float _igc_rms3_rms_calc_slow__var_rms;
float _vbc_rms_rms_calc_slow__var_rms;
float _igb_rms3_rms_calc_slow__var_rms;
float _igb_rms_rms_calc_slow__var_rms;
float _igc_rms_rms_calc_slow__var_rms;
float _vab_rms1_rms_calc_slow__var_rms;
float _vbc_rms3_rms_calc_slow__var_rms;
float _vab_rms2_rms_calc_slow__var_rms;
float _igb_rms1_rms_calc_slow__var_rms;
float _igc_rms2_rms_calc_slow__var_rms;
float _iga_rms3_rms_calc_slow__var_rms;
float _iga_rms2_rms_calc_slow__var_rms;
float _vbc_rms1_rms_calc_slow__var_rms;
float _vab_rms3_rms_calc_slow__var_rms;
float _igb_rms2_rms_calc_slow__var_rms;
float _iga_rms1_rms_calc_slow__var_rms;
float _iga_rms_rms_calc_slow__var_rms;
float _vbc_rms2_rms_calc_slow__var_rms;
float _ground1_rms_calc_slow__var_rms;
float _ground2_rms_calc_slow__var_rms;
float _vab_rms_rms_calc_slow__var_rms;
float _igc_rms1_rms_calc_slow__var_rms;
//@cmp.var.end

//@cmp.svar.start
// state variables
float _vbc_rms3_rt1_output__out =  0.0;

float _vbc_rms1_rt2_output__out =  0.0;

float _igb_rms3_rt2_output__out =  0.0;

float _igb_rms_rt1_output__out =  0.0;

float _igc_rms2_rt1_output__out =  0.0;

float _igc_rms3_rt2_output__out =  0.0;

float _igc_rms3_rt1_output__out =  0.0;

float _iga_rms3_rt2_output__out =  0.0;

float _vab_rms1_rt2_output__out =  0.0;

float _vbc_rms_rt2_output__out =  0.0;

float _vbc_rms_rt1_output__out =  0.0;

float _igb_rms1_rt2_output__out =  0.0;

float _igb_rms3_rt1_output__out =  0.0;

float _igb_rms2_rt2_output__out =  0.0;

float _vab_rms3_rt1_output__out =  0.0;

float _ground1_rt1_output__out =  0.0;

float _iga_rms_rt1_output__out =  0.0;

float _vab_rms2_rt1_output__out =  0.0;

float _iga_rms2_rt2_output__out =  0.0;

float _igb_rms_rt2_output__out =  0.0;

float _vbc_rms2_rt1_output__out =  0.0;

float _igc_rms_rt1_output__out =  0.0;

float _igc_rms_rt2_output__out =  0.0;

float _vab_rms1_rt1_output__out =  0.0;

float _vbc_rms3_rt2_output__out =  0.0;

float _vab_rms2_rt2_output__out =  0.0;

float _igb_rms1_rt1_output__out =  0.0;

float _igc_rms2_rt2_output__out =  0.0;

float _vab_rms_rt1_output__out =  0.0;

float _iga_rms3_rt1_output__out =  0.0;

float _iga_rms2_rt1_output__out =  0.0;

float _vbc_rms1_rt1_output__out =  0.0;

float _iga_rms1_rt1_output__out =  0.0;

float _vab_rms3_rt2_output__out =  0.0;

float _igb_rms2_rt1_output__out =  0.0;

float _iga_rms1_rt2_output__out =  0.0;

float _iga_rms_rt2_output__out =  0.0;

float _vbc_rms2_rt2_output__out =  0.0;

float _ground2_rt1_output__out =  0.0;

float _igc_rms1_rt1_output__out =  0.0;

float _ground1_rt2_output__out =  0.0;

float _ground2_rt2_output__out =  0.0;

float _vab_rms_rt2_output__out =  0.0;

float _igc_rms1_rt2_output__out =  0.0;

float _vbc_rms3_rms_calc_fast__v_sq_sum_state;
X_UnInt32 _vbc_rms3_rms_calc_fast__pc_cnt_1_state;
float _vbc_rms3_rms_calc_fast__var_filt;
float _vab_rms3_rms_calc_fast__v_sq_sum_state;
X_UnInt32 _vab_rms3_rms_calc_fast__pc_cnt_1_state;
float _vab_rms3_rms_calc_fast__var_filt;
float _igb_rms3_rms_calc_fast__v_sq_sum_state;
X_UnInt32 _igb_rms3_rms_calc_fast__pc_cnt_1_state;
float _igb_rms3_rms_calc_fast__var_filt;
float _ground1_rms_calc_fast__v_sq_sum_state;
X_UnInt32 _ground1_rms_calc_fast__pc_cnt_1_state;
float _ground1_rms_calc_fast__var_filt;
float _igc_rms3_rms_calc_fast__v_sq_sum_state;
X_UnInt32 _igc_rms3_rms_calc_fast__pc_cnt_1_state;
float _igc_rms3_rms_calc_fast__var_filt;
float _iga_rms3_rms_calc_fast__v_sq_sum_state;
X_UnInt32 _iga_rms3_rms_calc_fast__pc_cnt_1_state;
float _iga_rms3_rms_calc_fast__var_filt;
float _ground2_rms_calc_fast__v_sq_sum_state;
X_UnInt32 _ground2_rms_calc_fast__pc_cnt_1_state;
float _ground2_rms_calc_fast__var_filt;
float _igb_rms1_rms_calc_fast__v_sq_sum_state;
X_UnInt32 _igb_rms1_rms_calc_fast__pc_cnt_1_state;
float _igb_rms1_rms_calc_fast__var_filt;
float _vab_rms1_rms_calc_fast__v_sq_sum_state;
X_UnInt32 _vab_rms1_rms_calc_fast__pc_cnt_1_state;
float _vab_rms1_rms_calc_fast__var_filt;
float _vbc_rms1_rms_calc_fast__v_sq_sum_state;
X_UnInt32 _vbc_rms1_rms_calc_fast__pc_cnt_1_state;
float _vbc_rms1_rms_calc_fast__var_filt;
float _igc_rms1_rms_calc_fast__v_sq_sum_state;
X_UnInt32 _igc_rms1_rms_calc_fast__pc_cnt_1_state;
float _igc_rms1_rms_calc_fast__var_filt;
float _iga_rms1_rms_calc_fast__v_sq_sum_state;
X_UnInt32 _iga_rms1_rms_calc_fast__pc_cnt_1_state;
float _iga_rms1_rms_calc_fast__var_filt;
float _iga_rms_rms_calc_fast__v_sq_sum_state;
X_UnInt32 _iga_rms_rms_calc_fast__pc_cnt_1_state;
float _iga_rms_rms_calc_fast__var_filt;
float _vbc_rms_rms_calc_fast__v_sq_sum_state;
X_UnInt32 _vbc_rms_rms_calc_fast__pc_cnt_1_state;
float _vbc_rms_rms_calc_fast__var_filt;
float _igc_rms_rms_calc_fast__v_sq_sum_state;
X_UnInt32 _igc_rms_rms_calc_fast__pc_cnt_1_state;
float _igc_rms_rms_calc_fast__var_filt;
float _vab_rms_rms_calc_fast__v_sq_sum_state;
X_UnInt32 _vab_rms_rms_calc_fast__pc_cnt_1_state;
float _vab_rms_rms_calc_fast__var_filt;
float _igb_rms_rms_calc_fast__v_sq_sum_state;
X_UnInt32 _igb_rms_rms_calc_fast__pc_cnt_1_state;
float _igb_rms_rms_calc_fast__var_filt;
float _iga_rms2_rms_calc_fast__v_sq_sum_state;
X_UnInt32 _iga_rms2_rms_calc_fast__pc_cnt_1_state;
float _iga_rms2_rms_calc_fast__var_filt;
float _igb_rms2_rms_calc_fast__v_sq_sum_state;
X_UnInt32 _igb_rms2_rms_calc_fast__pc_cnt_1_state;
float _igb_rms2_rms_calc_fast__var_filt;
float _igc_rms2_rms_calc_fast__v_sq_sum_state;
X_UnInt32 _igc_rms2_rms_calc_fast__pc_cnt_1_state;
float _igc_rms2_rms_calc_fast__var_filt;
float _vab_rms2_rms_calc_fast__v_sq_sum_state;
X_UnInt32 _vab_rms2_rms_calc_fast__pc_cnt_1_state;
float _vab_rms2_rms_calc_fast__var_filt;
float _vbc_rms2_rms_calc_fast__v_sq_sum_state;
X_UnInt32 _vbc_rms2_rms_calc_fast__pc_cnt_1_state;
float _vbc_rms2_rms_calc_fast__var_filt;
//@cmp.svar.end
// generated using template: virtual_hil/custom_functions.template---------------------------------
void ReInit_sys_sp_cpu_dev0() {
#if DEBUG_MODE
    printf("\n\rReInitTimer");
#endif
    //@cmp.init.block.start
    _vbc_rms3_rt1_output__out =  0.0;
    _vbc_rms1_rt2_output__out =  0.0;
    _igb_rms3_rt2_output__out =  0.0;
    _igb_rms_rt1_output__out =  0.0;
    _igc_rms2_rt1_output__out =  0.0;
    _igc_rms3_rt2_output__out =  0.0;
    _igc_rms3_rt1_output__out =  0.0;
    _iga_rms3_rt2_output__out =  0.0;
    _vab_rms1_rt2_output__out =  0.0;
    _vbc_rms_rt2_output__out =  0.0;
    _vbc_rms_rt1_output__out =  0.0;
    _igb_rms1_rt2_output__out =  0.0;
    _igb_rms3_rt1_output__out =  0.0;
    _igb_rms2_rt2_output__out =  0.0;
    _vab_rms3_rt1_output__out =  0.0;
    _ground1_rt1_output__out =  0.0;
    _iga_rms_rt1_output__out =  0.0;
    _vab_rms2_rt1_output__out =  0.0;
    _iga_rms2_rt2_output__out =  0.0;
    _igb_rms_rt2_output__out =  0.0;
    _vbc_rms2_rt1_output__out =  0.0;
    _igc_rms_rt1_output__out =  0.0;
    _igc_rms_rt2_output__out =  0.0;
    _vab_rms1_rt1_output__out =  0.0;
    _vbc_rms3_rt2_output__out =  0.0;
    _vab_rms2_rt2_output__out =  0.0;
    _igb_rms1_rt1_output__out =  0.0;
    _igc_rms2_rt2_output__out =  0.0;
    _vab_rms_rt1_output__out =  0.0;
    _iga_rms3_rt1_output__out =  0.0;
    _iga_rms2_rt1_output__out =  0.0;
    _vbc_rms1_rt1_output__out =  0.0;
    _iga_rms1_rt1_output__out =  0.0;
    _vab_rms3_rt2_output__out =  0.0;
    _igb_rms2_rt1_output__out =  0.0;
    _iga_rms1_rt2_output__out =  0.0;
    _iga_rms_rt2_output__out =  0.0;
    _vbc_rms2_rt2_output__out =  0.0;
    _ground2_rt1_output__out =  0.0;
    _igc_rms1_rt1_output__out =  0.0;
    _ground1_rt2_output__out =  0.0;
    _ground2_rt2_output__out =  0.0;
    _vab_rms_rt2_output__out =  0.0;
    _igc_rms1_rt2_output__out =  0.0;
    _vbc_rms3_rms_calc_fast__var_eff_s = 0;
    _vbc_rms3_rms_calc_fast__period = 0;
    _vbc_rms3_rms_calc_fast__var_filt = 0.0f;
    _vbc_rms3_rms_calc_fast__v_sq_sum_state = 0.0f;
    _vbc_rms3_rms_calc_fast__pc_cnt_1_state = 0;
    _vab_rms3_rms_calc_fast__var_eff_s = 0;
    _vab_rms3_rms_calc_fast__period = 0;
    _vab_rms3_rms_calc_fast__var_filt = 0.0f;
    _vab_rms3_rms_calc_fast__v_sq_sum_state = 0.0f;
    _vab_rms3_rms_calc_fast__pc_cnt_1_state = 0;
    _igb_rms3_rms_calc_fast__var_eff_s = 0;
    _igb_rms3_rms_calc_fast__period = 0;
    _igb_rms3_rms_calc_fast__var_filt = 0.0f;
    _igb_rms3_rms_calc_fast__v_sq_sum_state = 0.0f;
    _igb_rms3_rms_calc_fast__pc_cnt_1_state = 0;
    _ground1_rms_calc_fast__var_eff_s = 0;
    _ground1_rms_calc_fast__period = 0;
    _ground1_rms_calc_fast__var_filt = 0.0f;
    _ground1_rms_calc_fast__v_sq_sum_state = 0.0f;
    _ground1_rms_calc_fast__pc_cnt_1_state = 0;
    _igc_rms3_rms_calc_fast__var_eff_s = 0;
    _igc_rms3_rms_calc_fast__period = 0;
    _igc_rms3_rms_calc_fast__var_filt = 0.0f;
    _igc_rms3_rms_calc_fast__v_sq_sum_state = 0.0f;
    _igc_rms3_rms_calc_fast__pc_cnt_1_state = 0;
    _iga_rms3_rms_calc_fast__var_eff_s = 0;
    _iga_rms3_rms_calc_fast__period = 0;
    _iga_rms3_rms_calc_fast__var_filt = 0.0f;
    _iga_rms3_rms_calc_fast__v_sq_sum_state = 0.0f;
    _iga_rms3_rms_calc_fast__pc_cnt_1_state = 0;
    _ground2_rms_calc_fast__var_eff_s = 0;
    _ground2_rms_calc_fast__period = 0;
    _ground2_rms_calc_fast__var_filt = 0.0f;
    _ground2_rms_calc_fast__v_sq_sum_state = 0.0f;
    _ground2_rms_calc_fast__pc_cnt_1_state = 0;
    _igb_rms1_rms_calc_fast__var_eff_s = 0;
    _igb_rms1_rms_calc_fast__period = 0;
    _igb_rms1_rms_calc_fast__var_filt = 0.0f;
    _igb_rms1_rms_calc_fast__v_sq_sum_state = 0.0f;
    _igb_rms1_rms_calc_fast__pc_cnt_1_state = 0;
    _vab_rms1_rms_calc_fast__var_eff_s = 0;
    _vab_rms1_rms_calc_fast__period = 0;
    _vab_rms1_rms_calc_fast__var_filt = 0.0f;
    _vab_rms1_rms_calc_fast__v_sq_sum_state = 0.0f;
    _vab_rms1_rms_calc_fast__pc_cnt_1_state = 0;
    _vbc_rms1_rms_calc_fast__var_eff_s = 0;
    _vbc_rms1_rms_calc_fast__period = 0;
    _vbc_rms1_rms_calc_fast__var_filt = 0.0f;
    _vbc_rms1_rms_calc_fast__v_sq_sum_state = 0.0f;
    _vbc_rms1_rms_calc_fast__pc_cnt_1_state = 0;
    _igc_rms1_rms_calc_fast__var_eff_s = 0;
    _igc_rms1_rms_calc_fast__period = 0;
    _igc_rms1_rms_calc_fast__var_filt = 0.0f;
    _igc_rms1_rms_calc_fast__v_sq_sum_state = 0.0f;
    _igc_rms1_rms_calc_fast__pc_cnt_1_state = 0;
    _iga_rms1_rms_calc_fast__var_eff_s = 0;
    _iga_rms1_rms_calc_fast__period = 0;
    _iga_rms1_rms_calc_fast__var_filt = 0.0f;
    _iga_rms1_rms_calc_fast__v_sq_sum_state = 0.0f;
    _iga_rms1_rms_calc_fast__pc_cnt_1_state = 0;
    _iga_rms_rms_calc_fast__var_eff_s = 0;
    _iga_rms_rms_calc_fast__period = 0;
    _iga_rms_rms_calc_fast__var_filt = 0.0f;
    _iga_rms_rms_calc_fast__v_sq_sum_state = 0.0f;
    _iga_rms_rms_calc_fast__pc_cnt_1_state = 0;
    _vbc_rms_rms_calc_fast__var_eff_s = 0;
    _vbc_rms_rms_calc_fast__period = 0;
    _vbc_rms_rms_calc_fast__var_filt = 0.0f;
    _vbc_rms_rms_calc_fast__v_sq_sum_state = 0.0f;
    _vbc_rms_rms_calc_fast__pc_cnt_1_state = 0;
    _igc_rms_rms_calc_fast__var_eff_s = 0;
    _igc_rms_rms_calc_fast__period = 0;
    _igc_rms_rms_calc_fast__var_filt = 0.0f;
    _igc_rms_rms_calc_fast__v_sq_sum_state = 0.0f;
    _igc_rms_rms_calc_fast__pc_cnt_1_state = 0;
    _vab_rms_rms_calc_fast__var_eff_s = 0;
    _vab_rms_rms_calc_fast__period = 0;
    _vab_rms_rms_calc_fast__var_filt = 0.0f;
    _vab_rms_rms_calc_fast__v_sq_sum_state = 0.0f;
    _vab_rms_rms_calc_fast__pc_cnt_1_state = 0;
    _igb_rms_rms_calc_fast__var_eff_s = 0;
    _igb_rms_rms_calc_fast__period = 0;
    _igb_rms_rms_calc_fast__var_filt = 0.0f;
    _igb_rms_rms_calc_fast__v_sq_sum_state = 0.0f;
    _igb_rms_rms_calc_fast__pc_cnt_1_state = 0;
    _iga_rms2_rms_calc_fast__var_eff_s = 0;
    _iga_rms2_rms_calc_fast__period = 0;
    _iga_rms2_rms_calc_fast__var_filt = 0.0f;
    _iga_rms2_rms_calc_fast__v_sq_sum_state = 0.0f;
    _iga_rms2_rms_calc_fast__pc_cnt_1_state = 0;
    _igb_rms2_rms_calc_fast__var_eff_s = 0;
    _igb_rms2_rms_calc_fast__period = 0;
    _igb_rms2_rms_calc_fast__var_filt = 0.0f;
    _igb_rms2_rms_calc_fast__v_sq_sum_state = 0.0f;
    _igb_rms2_rms_calc_fast__pc_cnt_1_state = 0;
    _igc_rms2_rms_calc_fast__var_eff_s = 0;
    _igc_rms2_rms_calc_fast__period = 0;
    _igc_rms2_rms_calc_fast__var_filt = 0.0f;
    _igc_rms2_rms_calc_fast__v_sq_sum_state = 0.0f;
    _igc_rms2_rms_calc_fast__pc_cnt_1_state = 0;
    _vab_rms2_rms_calc_fast__var_eff_s = 0;
    _vab_rms2_rms_calc_fast__period = 0;
    _vab_rms2_rms_calc_fast__var_filt = 0.0f;
    _vab_rms2_rms_calc_fast__v_sq_sum_state = 0.0f;
    _vab_rms2_rms_calc_fast__pc_cnt_1_state = 0;
    _vbc_rms2_rms_calc_fast__var_eff_s = 0;
    _vbc_rms2_rms_calc_fast__period = 0;
    _vbc_rms2_rms_calc_fast__var_filt = 0.0f;
    _vbc_rms2_rms_calc_fast__v_sq_sum_state = 0.0f;
    _vbc_rms2_rms_calc_fast__pc_cnt_1_state = 0;
    HIL_OutAO(0x400d, 0.0f);
    HIL_OutAO(0x4012, 0.0f);
    HIL_OutAO(0x4009, 0.0f);
    HIL_OutAO(0x4006, 0.0f);
    HIL_OutAO(0x400a, 0.0f);
    HIL_OutAO(0x400f, 0.0f);
    XIo_OutFloat(0x55000104, 0.0f);
    HIL_OutAO(0x4015, 0.0f);
    HIL_OutAO(0x4010, 0.0f);
    HIL_OutAO(0x4007, 0.0f);
    HIL_OutAO(0x400c, 0.0f);
    HIL_OutAO(0x4005, 0.0f);
    HIL_OutAO(0x4004, 0.0f);
    HIL_OutAO(0x4013, 0.0f);
    HIL_OutAO(0x4011, 0.0f);
    HIL_OutAO(0x4008, 0.0f);
    HIL_OutAO(0x4003, 0.0f);
    HIL_OutAO(0x4002, 0.0f);
    HIL_OutAO(0x4014, 0.0f);
    HIL_OutAO(0x4000, 0.0f);
    HIL_OutAO(0x4001, 0.0f);
    XIo_OutFloat(0x55000100, 0.0f);
    HIL_OutAO(0x400e, 0.0f);
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
    // Generated from the component: Vbc_rms3.Vinst.Va1
    _vbc_rms3_vinst_va1__out = HIL_InAO(0x1f);
    // Generated from the component: Vab_rms3.Vinst.Va1
    _vab_rms3_vinst_va1__out = HIL_InAO(0x1d);
    // Generated from the component: Igb_rms3.Iinst.Ia1
    _igb_rms3_iinst_ia1__out = HIL_InAO(0x28);
    // Generated from the component: Ground1.Iinst.Ia1
    _ground1_iinst_ia1__out = HIL_InAO(0x24);
    // Generated from the component: Igc_rms3.Iinst.Ia1
    _igc_rms3_iinst_ia1__out = HIL_InAO(0x29);
    // Generated from the component: Iga_rms3.Iinst.Ia1
    _iga_rms3_iinst_ia1__out = HIL_InAO(0x27);
    // Generated from the component: Ground2.Iinst.Ia1
    _ground2_iinst_ia1__out = HIL_InAO(0x25);
    // Generated from the component: Igb_rms1.Iinst.Ia1
    _igb_rms1_iinst_ia1__out = HIL_InAO(0x22c);
    // Generated from the component: Vab_rms1.Vinst.Va1
    _vab_rms1_vinst_va1__out = HIL_InAO(0x21c);
    // Generated from the component: Vbc_rms1.Vinst.Va1
    _vbc_rms1_vinst_va1__out = HIL_InAO(0x220);
    // Generated from the component: Igc_rms1.Iinst.Ia1
    _igc_rms1_iinst_ia1__out = HIL_InAO(0x22d);
    // Generated from the component: Iga_rms1.Iinst.Ia1
    _iga_rms1_iinst_ia1__out = HIL_InAO(0x22b);
    // Generated from the component: Iga_rms.Iinst.Ia1
    _iga_rms_iinst_ia1__out = HIL_InAO(0x42b);
    // Generated from the component: Vbc_rms.Vinst.Va1
    _vbc_rms_vinst_va1__out = HIL_InAO(0x420);
    // Generated from the component: Igc_rms.Iinst.Ia1
    _igc_rms_iinst_ia1__out = HIL_InAO(0x42d);
    // Generated from the component: Vab_rms.Vinst.Va1
    _vab_rms_vinst_va1__out = HIL_InAO(0x41c);
    // Generated from the component: Igb_rms.Iinst.Ia1
    _igb_rms_iinst_ia1__out = HIL_InAO(0x42c);
    // Generated from the component: Iga_rms2.Iinst.Ia1
    _iga_rms2_iinst_ia1__out = HIL_InAO(0x61c);
    // Generated from the component: Igb_rms2.Iinst.Ia1
    _igb_rms2_iinst_ia1__out = HIL_InAO(0x61d);
    // Generated from the component: Igc_rms2.Iinst.Ia1
    _igc_rms2_iinst_ia1__out = HIL_InAO(0x61e);
    // Generated from the component: Vab_rms2.Vinst.Va1
    _vab_rms2_vinst_va1__out = HIL_InAO(0x617);
    // Generated from the component: Vbc_rms2.Vinst.Va1
    _vbc_rms2_vinst_va1__out = HIL_InAO(0x619);
    // Generated from the component: Vbc_rms3.rms_calc_fast
    _vbc_rms3_rms_calc_fast__v_sq_sum_state = _vbc_rms3_rms_calc_fast__v_sq_sum_state + _vbc_rms3_vinst_va1__out * _vbc_rms3_vinst_va1__out;
    _vbc_rms3_rms_calc_fast__var_filt_old = _vbc_rms3_rms_calc_fast__var_filt;
    _vbc_rms3_rms_calc_fast__var_filt = (_vbc_rms3_rms_calc_fast__var_filt_old * 0.909 + _vbc_rms3_vinst_va1__out * 0.0909);
    if((_vbc_rms3_rms_calc_fast__var_filt >= 0.0f) && (_vbc_rms3_rms_calc_fast__var_filt_old < 0.0f)) {
        _vbc_rms3_rms_calc_fast__var_zc = 1;
    }
    else {
        _vbc_rms3_rms_calc_fast__var_zc = 0;
    }
    //square sum and period update on signal zero cross
    if ((_vbc_rms3_rms_calc_fast__var_zc == 1) || (5000 == _vbc_rms3_rms_calc_fast__pc_cnt_1_state)) {
        _vbc_rms3_rms_calc_fast__var_eff_s = _vbc_rms3_rms_calc_fast__v_sq_sum_state;
        _vbc_rms3_rms_calc_fast__period = (float)_vbc_rms3_rms_calc_fast__pc_cnt_1_state;
        _vbc_rms3_rms_calc_fast__v_sq_sum_state = 0.0f;
    }
    // Generated from the component: Vbc_rms3.sys1
    // Generated from the component: Vab_rms3.rms_calc_fast
    _vab_rms3_rms_calc_fast__v_sq_sum_state = _vab_rms3_rms_calc_fast__v_sq_sum_state + _vab_rms3_vinst_va1__out * _vab_rms3_vinst_va1__out;
    _vab_rms3_rms_calc_fast__var_filt_old = _vab_rms3_rms_calc_fast__var_filt;
    _vab_rms3_rms_calc_fast__var_filt = (_vab_rms3_rms_calc_fast__var_filt_old * 0.909 + _vab_rms3_vinst_va1__out * 0.0909);
    if((_vab_rms3_rms_calc_fast__var_filt >= 0.0f) && (_vab_rms3_rms_calc_fast__var_filt_old < 0.0f)) {
        _vab_rms3_rms_calc_fast__var_zc = 1;
    }
    else {
        _vab_rms3_rms_calc_fast__var_zc = 0;
    }
    //square sum and period update on signal zero cross
    if ((_vab_rms3_rms_calc_fast__var_zc == 1) || (5000 == _vab_rms3_rms_calc_fast__pc_cnt_1_state)) {
        _vab_rms3_rms_calc_fast__var_eff_s = _vab_rms3_rms_calc_fast__v_sq_sum_state;
        _vab_rms3_rms_calc_fast__period = (float)_vab_rms3_rms_calc_fast__pc_cnt_1_state;
        _vab_rms3_rms_calc_fast__v_sq_sum_state = 0.0f;
    }
    // Generated from the component: Vab_rms3.sys1
    // Generated from the component: Igb_rms3.sys1
    // Generated from the component: Igb_rms3.rms_calc_fast
    _igb_rms3_rms_calc_fast__v_sq_sum_state = _igb_rms3_rms_calc_fast__v_sq_sum_state + _igb_rms3_iinst_ia1__out * _igb_rms3_iinst_ia1__out;
    _igb_rms3_rms_calc_fast__var_filt_old = _igb_rms3_rms_calc_fast__var_filt;
    _igb_rms3_rms_calc_fast__var_filt = (_igb_rms3_rms_calc_fast__var_filt_old * 0.909 + _igb_rms3_iinst_ia1__out * 0.0909);
    if((_igb_rms3_rms_calc_fast__var_filt >= 0.0f) && (_igb_rms3_rms_calc_fast__var_filt_old < 0.0f)) {
        _igb_rms3_rms_calc_fast__var_zc = 1;
    }
    else {
        _igb_rms3_rms_calc_fast__var_zc = 0;
    }
    //square sum and period update on signal zero cross
    if ((_igb_rms3_rms_calc_fast__var_zc == 1) || (5000 == _igb_rms3_rms_calc_fast__pc_cnt_1_state)) {
        _igb_rms3_rms_calc_fast__var_eff_s = _igb_rms3_rms_calc_fast__v_sq_sum_state;
        _igb_rms3_rms_calc_fast__period = (float)_igb_rms3_rms_calc_fast__pc_cnt_1_state;
        _igb_rms3_rms_calc_fast__v_sq_sum_state = 0.0f;
    }
    // Generated from the component: Ground1.sys1
    // Generated from the component: Ground1.rms_calc_fast
    _ground1_rms_calc_fast__v_sq_sum_state = _ground1_rms_calc_fast__v_sq_sum_state + _ground1_iinst_ia1__out * _ground1_iinst_ia1__out;
    _ground1_rms_calc_fast__var_filt_old = _ground1_rms_calc_fast__var_filt;
    _ground1_rms_calc_fast__var_filt = (_ground1_rms_calc_fast__var_filt_old * 0.909 + _ground1_iinst_ia1__out * 0.0909);
    if((_ground1_rms_calc_fast__var_filt >= 0.0f) && (_ground1_rms_calc_fast__var_filt_old < 0.0f)) {
        _ground1_rms_calc_fast__var_zc = 1;
    }
    else {
        _ground1_rms_calc_fast__var_zc = 0;
    }
    //square sum and period update on signal zero cross
    if ((_ground1_rms_calc_fast__var_zc == 1) || (5000 == _ground1_rms_calc_fast__pc_cnt_1_state)) {
        _ground1_rms_calc_fast__var_eff_s = _ground1_rms_calc_fast__v_sq_sum_state;
        _ground1_rms_calc_fast__period = (float)_ground1_rms_calc_fast__pc_cnt_1_state;
        _ground1_rms_calc_fast__v_sq_sum_state = 0.0f;
    }
    // Generated from the component: Igc_rms3.rms_calc_fast
    _igc_rms3_rms_calc_fast__v_sq_sum_state = _igc_rms3_rms_calc_fast__v_sq_sum_state + _igc_rms3_iinst_ia1__out * _igc_rms3_iinst_ia1__out;
    _igc_rms3_rms_calc_fast__var_filt_old = _igc_rms3_rms_calc_fast__var_filt;
    _igc_rms3_rms_calc_fast__var_filt = (_igc_rms3_rms_calc_fast__var_filt_old * 0.909 + _igc_rms3_iinst_ia1__out * 0.0909);
    if((_igc_rms3_rms_calc_fast__var_filt >= 0.0f) && (_igc_rms3_rms_calc_fast__var_filt_old < 0.0f)) {
        _igc_rms3_rms_calc_fast__var_zc = 1;
    }
    else {
        _igc_rms3_rms_calc_fast__var_zc = 0;
    }
    //square sum and period update on signal zero cross
    if ((_igc_rms3_rms_calc_fast__var_zc == 1) || (5000 == _igc_rms3_rms_calc_fast__pc_cnt_1_state)) {
        _igc_rms3_rms_calc_fast__var_eff_s = _igc_rms3_rms_calc_fast__v_sq_sum_state;
        _igc_rms3_rms_calc_fast__period = (float)_igc_rms3_rms_calc_fast__pc_cnt_1_state;
        _igc_rms3_rms_calc_fast__v_sq_sum_state = 0.0f;
    }
    // Generated from the component: Igc_rms3.sys1
    // Generated from the component: Iga_rms3.rms_calc_fast
    _iga_rms3_rms_calc_fast__v_sq_sum_state = _iga_rms3_rms_calc_fast__v_sq_sum_state + _iga_rms3_iinst_ia1__out * _iga_rms3_iinst_ia1__out;
    _iga_rms3_rms_calc_fast__var_filt_old = _iga_rms3_rms_calc_fast__var_filt;
    _iga_rms3_rms_calc_fast__var_filt = (_iga_rms3_rms_calc_fast__var_filt_old * 0.909 + _iga_rms3_iinst_ia1__out * 0.0909);
    if((_iga_rms3_rms_calc_fast__var_filt >= 0.0f) && (_iga_rms3_rms_calc_fast__var_filt_old < 0.0f)) {
        _iga_rms3_rms_calc_fast__var_zc = 1;
    }
    else {
        _iga_rms3_rms_calc_fast__var_zc = 0;
    }
    //square sum and period update on signal zero cross
    if ((_iga_rms3_rms_calc_fast__var_zc == 1) || (5000 == _iga_rms3_rms_calc_fast__pc_cnt_1_state)) {
        _iga_rms3_rms_calc_fast__var_eff_s = _iga_rms3_rms_calc_fast__v_sq_sum_state;
        _iga_rms3_rms_calc_fast__period = (float)_iga_rms3_rms_calc_fast__pc_cnt_1_state;
        _iga_rms3_rms_calc_fast__v_sq_sum_state = 0.0f;
    }
    // Generated from the component: Iga_rms3.sys1
    // Generated from the component: Ground2.sys1
    // Generated from the component: Ground2.rms_calc_fast
    _ground2_rms_calc_fast__v_sq_sum_state = _ground2_rms_calc_fast__v_sq_sum_state + _ground2_iinst_ia1__out * _ground2_iinst_ia1__out;
    _ground2_rms_calc_fast__var_filt_old = _ground2_rms_calc_fast__var_filt;
    _ground2_rms_calc_fast__var_filt = (_ground2_rms_calc_fast__var_filt_old * 0.909 + _ground2_iinst_ia1__out * 0.0909);
    if((_ground2_rms_calc_fast__var_filt >= 0.0f) && (_ground2_rms_calc_fast__var_filt_old < 0.0f)) {
        _ground2_rms_calc_fast__var_zc = 1;
    }
    else {
        _ground2_rms_calc_fast__var_zc = 0;
    }
    //square sum and period update on signal zero cross
    if ((_ground2_rms_calc_fast__var_zc == 1) || (5000 == _ground2_rms_calc_fast__pc_cnt_1_state)) {
        _ground2_rms_calc_fast__var_eff_s = _ground2_rms_calc_fast__v_sq_sum_state;
        _ground2_rms_calc_fast__period = (float)_ground2_rms_calc_fast__pc_cnt_1_state;
        _ground2_rms_calc_fast__v_sq_sum_state = 0.0f;
    }
    // Generated from the component: Igb_rms1.sys1
    // Generated from the component: Igb_rms1.rms_calc_fast
    _igb_rms1_rms_calc_fast__v_sq_sum_state = _igb_rms1_rms_calc_fast__v_sq_sum_state + _igb_rms1_iinst_ia1__out * _igb_rms1_iinst_ia1__out;
    _igb_rms1_rms_calc_fast__var_filt_old = _igb_rms1_rms_calc_fast__var_filt;
    _igb_rms1_rms_calc_fast__var_filt = (_igb_rms1_rms_calc_fast__var_filt_old * 0.909 + _igb_rms1_iinst_ia1__out * 0.0909);
    if((_igb_rms1_rms_calc_fast__var_filt >= 0.0f) && (_igb_rms1_rms_calc_fast__var_filt_old < 0.0f)) {
        _igb_rms1_rms_calc_fast__var_zc = 1;
    }
    else {
        _igb_rms1_rms_calc_fast__var_zc = 0;
    }
    //square sum and period update on signal zero cross
    if ((_igb_rms1_rms_calc_fast__var_zc == 1) || (5000 == _igb_rms1_rms_calc_fast__pc_cnt_1_state)) {
        _igb_rms1_rms_calc_fast__var_eff_s = _igb_rms1_rms_calc_fast__v_sq_sum_state;
        _igb_rms1_rms_calc_fast__period = (float)_igb_rms1_rms_calc_fast__pc_cnt_1_state;
        _igb_rms1_rms_calc_fast__v_sq_sum_state = 0.0f;
    }
    // Generated from the component: Vab_rms1.rms_calc_fast
    _vab_rms1_rms_calc_fast__v_sq_sum_state = _vab_rms1_rms_calc_fast__v_sq_sum_state + _vab_rms1_vinst_va1__out * _vab_rms1_vinst_va1__out;
    _vab_rms1_rms_calc_fast__var_filt_old = _vab_rms1_rms_calc_fast__var_filt;
    _vab_rms1_rms_calc_fast__var_filt = (_vab_rms1_rms_calc_fast__var_filt_old * 0.909 + _vab_rms1_vinst_va1__out * 0.0909);
    if((_vab_rms1_rms_calc_fast__var_filt >= 0.0f) && (_vab_rms1_rms_calc_fast__var_filt_old < 0.0f)) {
        _vab_rms1_rms_calc_fast__var_zc = 1;
    }
    else {
        _vab_rms1_rms_calc_fast__var_zc = 0;
    }
    //square sum and period update on signal zero cross
    if ((_vab_rms1_rms_calc_fast__var_zc == 1) || (5000 == _vab_rms1_rms_calc_fast__pc_cnt_1_state)) {
        _vab_rms1_rms_calc_fast__var_eff_s = _vab_rms1_rms_calc_fast__v_sq_sum_state;
        _vab_rms1_rms_calc_fast__period = (float)_vab_rms1_rms_calc_fast__pc_cnt_1_state;
        _vab_rms1_rms_calc_fast__v_sq_sum_state = 0.0f;
    }
    // Generated from the component: Vab_rms1.sys1
    // Generated from the component: Vbc_rms1.sys1
    // Generated from the component: Vbc_rms1.rms_calc_fast
    _vbc_rms1_rms_calc_fast__v_sq_sum_state = _vbc_rms1_rms_calc_fast__v_sq_sum_state + _vbc_rms1_vinst_va1__out * _vbc_rms1_vinst_va1__out;
    _vbc_rms1_rms_calc_fast__var_filt_old = _vbc_rms1_rms_calc_fast__var_filt;
    _vbc_rms1_rms_calc_fast__var_filt = (_vbc_rms1_rms_calc_fast__var_filt_old * 0.909 + _vbc_rms1_vinst_va1__out * 0.0909);
    if((_vbc_rms1_rms_calc_fast__var_filt >= 0.0f) && (_vbc_rms1_rms_calc_fast__var_filt_old < 0.0f)) {
        _vbc_rms1_rms_calc_fast__var_zc = 1;
    }
    else {
        _vbc_rms1_rms_calc_fast__var_zc = 0;
    }
    //square sum and period update on signal zero cross
    if ((_vbc_rms1_rms_calc_fast__var_zc == 1) || (5000 == _vbc_rms1_rms_calc_fast__pc_cnt_1_state)) {
        _vbc_rms1_rms_calc_fast__var_eff_s = _vbc_rms1_rms_calc_fast__v_sq_sum_state;
        _vbc_rms1_rms_calc_fast__period = (float)_vbc_rms1_rms_calc_fast__pc_cnt_1_state;
        _vbc_rms1_rms_calc_fast__v_sq_sum_state = 0.0f;
    }
    // Generated from the component: Igc_rms1.sys1
    // Generated from the component: Igc_rms1.rms_calc_fast
    _igc_rms1_rms_calc_fast__v_sq_sum_state = _igc_rms1_rms_calc_fast__v_sq_sum_state + _igc_rms1_iinst_ia1__out * _igc_rms1_iinst_ia1__out;
    _igc_rms1_rms_calc_fast__var_filt_old = _igc_rms1_rms_calc_fast__var_filt;
    _igc_rms1_rms_calc_fast__var_filt = (_igc_rms1_rms_calc_fast__var_filt_old * 0.909 + _igc_rms1_iinst_ia1__out * 0.0909);
    if((_igc_rms1_rms_calc_fast__var_filt >= 0.0f) && (_igc_rms1_rms_calc_fast__var_filt_old < 0.0f)) {
        _igc_rms1_rms_calc_fast__var_zc = 1;
    }
    else {
        _igc_rms1_rms_calc_fast__var_zc = 0;
    }
    //square sum and period update on signal zero cross
    if ((_igc_rms1_rms_calc_fast__var_zc == 1) || (5000 == _igc_rms1_rms_calc_fast__pc_cnt_1_state)) {
        _igc_rms1_rms_calc_fast__var_eff_s = _igc_rms1_rms_calc_fast__v_sq_sum_state;
        _igc_rms1_rms_calc_fast__period = (float)_igc_rms1_rms_calc_fast__pc_cnt_1_state;
        _igc_rms1_rms_calc_fast__v_sq_sum_state = 0.0f;
    }
    // Generated from the component: Iga_rms1.sys1
    // Generated from the component: Iga_rms1.rms_calc_fast
    _iga_rms1_rms_calc_fast__v_sq_sum_state = _iga_rms1_rms_calc_fast__v_sq_sum_state + _iga_rms1_iinst_ia1__out * _iga_rms1_iinst_ia1__out;
    _iga_rms1_rms_calc_fast__var_filt_old = _iga_rms1_rms_calc_fast__var_filt;
    _iga_rms1_rms_calc_fast__var_filt = (_iga_rms1_rms_calc_fast__var_filt_old * 0.909 + _iga_rms1_iinst_ia1__out * 0.0909);
    if((_iga_rms1_rms_calc_fast__var_filt >= 0.0f) && (_iga_rms1_rms_calc_fast__var_filt_old < 0.0f)) {
        _iga_rms1_rms_calc_fast__var_zc = 1;
    }
    else {
        _iga_rms1_rms_calc_fast__var_zc = 0;
    }
    //square sum and period update on signal zero cross
    if ((_iga_rms1_rms_calc_fast__var_zc == 1) || (5000 == _iga_rms1_rms_calc_fast__pc_cnt_1_state)) {
        _iga_rms1_rms_calc_fast__var_eff_s = _iga_rms1_rms_calc_fast__v_sq_sum_state;
        _iga_rms1_rms_calc_fast__period = (float)_iga_rms1_rms_calc_fast__pc_cnt_1_state;
        _iga_rms1_rms_calc_fast__v_sq_sum_state = 0.0f;
    }
    // Generated from the component: Iga_rms.rms_calc_fast
    _iga_rms_rms_calc_fast__v_sq_sum_state = _iga_rms_rms_calc_fast__v_sq_sum_state + _iga_rms_iinst_ia1__out * _iga_rms_iinst_ia1__out;
    _iga_rms_rms_calc_fast__var_filt_old = _iga_rms_rms_calc_fast__var_filt;
    _iga_rms_rms_calc_fast__var_filt = (_iga_rms_rms_calc_fast__var_filt_old * 0.909 + _iga_rms_iinst_ia1__out * 0.0909);
    if((_iga_rms_rms_calc_fast__var_filt >= 0.0f) && (_iga_rms_rms_calc_fast__var_filt_old < 0.0f)) {
        _iga_rms_rms_calc_fast__var_zc = 1;
    }
    else {
        _iga_rms_rms_calc_fast__var_zc = 0;
    }
    //square sum and period update on signal zero cross
    if ((_iga_rms_rms_calc_fast__var_zc == 1) || (5000 == _iga_rms_rms_calc_fast__pc_cnt_1_state)) {
        _iga_rms_rms_calc_fast__var_eff_s = _iga_rms_rms_calc_fast__v_sq_sum_state;
        _iga_rms_rms_calc_fast__period = (float)_iga_rms_rms_calc_fast__pc_cnt_1_state;
        _iga_rms_rms_calc_fast__v_sq_sum_state = 0.0f;
    }
    // Generated from the component: Iga_rms.sys1
    // Generated from the component: Vbc_rms.rms_calc_fast
    _vbc_rms_rms_calc_fast__v_sq_sum_state = _vbc_rms_rms_calc_fast__v_sq_sum_state + _vbc_rms_vinst_va1__out * _vbc_rms_vinst_va1__out;
    _vbc_rms_rms_calc_fast__var_filt_old = _vbc_rms_rms_calc_fast__var_filt;
    _vbc_rms_rms_calc_fast__var_filt = (_vbc_rms_rms_calc_fast__var_filt_old * 0.909 + _vbc_rms_vinst_va1__out * 0.0909);
    if((_vbc_rms_rms_calc_fast__var_filt >= 0.0f) && (_vbc_rms_rms_calc_fast__var_filt_old < 0.0f)) {
        _vbc_rms_rms_calc_fast__var_zc = 1;
    }
    else {
        _vbc_rms_rms_calc_fast__var_zc = 0;
    }
    //square sum and period update on signal zero cross
    if ((_vbc_rms_rms_calc_fast__var_zc == 1) || (5000 == _vbc_rms_rms_calc_fast__pc_cnt_1_state)) {
        _vbc_rms_rms_calc_fast__var_eff_s = _vbc_rms_rms_calc_fast__v_sq_sum_state;
        _vbc_rms_rms_calc_fast__period = (float)_vbc_rms_rms_calc_fast__pc_cnt_1_state;
        _vbc_rms_rms_calc_fast__v_sq_sum_state = 0.0f;
    }
    // Generated from the component: Vbc_rms.sys1
    // Generated from the component: Igc_rms.rms_calc_fast
    _igc_rms_rms_calc_fast__v_sq_sum_state = _igc_rms_rms_calc_fast__v_sq_sum_state + _igc_rms_iinst_ia1__out * _igc_rms_iinst_ia1__out;
    _igc_rms_rms_calc_fast__var_filt_old = _igc_rms_rms_calc_fast__var_filt;
    _igc_rms_rms_calc_fast__var_filt = (_igc_rms_rms_calc_fast__var_filt_old * 0.909 + _igc_rms_iinst_ia1__out * 0.0909);
    if((_igc_rms_rms_calc_fast__var_filt >= 0.0f) && (_igc_rms_rms_calc_fast__var_filt_old < 0.0f)) {
        _igc_rms_rms_calc_fast__var_zc = 1;
    }
    else {
        _igc_rms_rms_calc_fast__var_zc = 0;
    }
    //square sum and period update on signal zero cross
    if ((_igc_rms_rms_calc_fast__var_zc == 1) || (5000 == _igc_rms_rms_calc_fast__pc_cnt_1_state)) {
        _igc_rms_rms_calc_fast__var_eff_s = _igc_rms_rms_calc_fast__v_sq_sum_state;
        _igc_rms_rms_calc_fast__period = (float)_igc_rms_rms_calc_fast__pc_cnt_1_state;
        _igc_rms_rms_calc_fast__v_sq_sum_state = 0.0f;
    }
    // Generated from the component: Igc_rms.sys1
    // Generated from the component: Vab_rms.rms_calc_fast
    _vab_rms_rms_calc_fast__v_sq_sum_state = _vab_rms_rms_calc_fast__v_sq_sum_state + _vab_rms_vinst_va1__out * _vab_rms_vinst_va1__out;
    _vab_rms_rms_calc_fast__var_filt_old = _vab_rms_rms_calc_fast__var_filt;
    _vab_rms_rms_calc_fast__var_filt = (_vab_rms_rms_calc_fast__var_filt_old * 0.909 + _vab_rms_vinst_va1__out * 0.0909);
    if((_vab_rms_rms_calc_fast__var_filt >= 0.0f) && (_vab_rms_rms_calc_fast__var_filt_old < 0.0f)) {
        _vab_rms_rms_calc_fast__var_zc = 1;
    }
    else {
        _vab_rms_rms_calc_fast__var_zc = 0;
    }
    //square sum and period update on signal zero cross
    if ((_vab_rms_rms_calc_fast__var_zc == 1) || (5000 == _vab_rms_rms_calc_fast__pc_cnt_1_state)) {
        _vab_rms_rms_calc_fast__var_eff_s = _vab_rms_rms_calc_fast__v_sq_sum_state;
        _vab_rms_rms_calc_fast__period = (float)_vab_rms_rms_calc_fast__pc_cnt_1_state;
        _vab_rms_rms_calc_fast__v_sq_sum_state = 0.0f;
    }
    // Generated from the component: Vab_rms.sys1
    // Generated from the component: Igb_rms.rms_calc_fast
    _igb_rms_rms_calc_fast__v_sq_sum_state = _igb_rms_rms_calc_fast__v_sq_sum_state + _igb_rms_iinst_ia1__out * _igb_rms_iinst_ia1__out;
    _igb_rms_rms_calc_fast__var_filt_old = _igb_rms_rms_calc_fast__var_filt;
    _igb_rms_rms_calc_fast__var_filt = (_igb_rms_rms_calc_fast__var_filt_old * 0.909 + _igb_rms_iinst_ia1__out * 0.0909);
    if((_igb_rms_rms_calc_fast__var_filt >= 0.0f) && (_igb_rms_rms_calc_fast__var_filt_old < 0.0f)) {
        _igb_rms_rms_calc_fast__var_zc = 1;
    }
    else {
        _igb_rms_rms_calc_fast__var_zc = 0;
    }
    //square sum and period update on signal zero cross
    if ((_igb_rms_rms_calc_fast__var_zc == 1) || (5000 == _igb_rms_rms_calc_fast__pc_cnt_1_state)) {
        _igb_rms_rms_calc_fast__var_eff_s = _igb_rms_rms_calc_fast__v_sq_sum_state;
        _igb_rms_rms_calc_fast__period = (float)_igb_rms_rms_calc_fast__pc_cnt_1_state;
        _igb_rms_rms_calc_fast__v_sq_sum_state = 0.0f;
    }
    // Generated from the component: Igb_rms.sys1
    // Generated from the component: Iga_rms2.sys1
    // Generated from the component: Iga_rms2.rms_calc_fast
    _iga_rms2_rms_calc_fast__v_sq_sum_state = _iga_rms2_rms_calc_fast__v_sq_sum_state + _iga_rms2_iinst_ia1__out * _iga_rms2_iinst_ia1__out;
    _iga_rms2_rms_calc_fast__var_filt_old = _iga_rms2_rms_calc_fast__var_filt;
    _iga_rms2_rms_calc_fast__var_filt = (_iga_rms2_rms_calc_fast__var_filt_old * 0.909 + _iga_rms2_iinst_ia1__out * 0.0909);
    if((_iga_rms2_rms_calc_fast__var_filt >= 0.0f) && (_iga_rms2_rms_calc_fast__var_filt_old < 0.0f)) {
        _iga_rms2_rms_calc_fast__var_zc = 1;
    }
    else {
        _iga_rms2_rms_calc_fast__var_zc = 0;
    }
    //square sum and period update on signal zero cross
    if ((_iga_rms2_rms_calc_fast__var_zc == 1) || (5000 == _iga_rms2_rms_calc_fast__pc_cnt_1_state)) {
        _iga_rms2_rms_calc_fast__var_eff_s = _iga_rms2_rms_calc_fast__v_sq_sum_state;
        _iga_rms2_rms_calc_fast__period = (float)_iga_rms2_rms_calc_fast__pc_cnt_1_state;
        _iga_rms2_rms_calc_fast__v_sq_sum_state = 0.0f;
    }
    // Generated from the component: Igb_rms2.sys1
    // Generated from the component: Igb_rms2.rms_calc_fast
    _igb_rms2_rms_calc_fast__v_sq_sum_state = _igb_rms2_rms_calc_fast__v_sq_sum_state + _igb_rms2_iinst_ia1__out * _igb_rms2_iinst_ia1__out;
    _igb_rms2_rms_calc_fast__var_filt_old = _igb_rms2_rms_calc_fast__var_filt;
    _igb_rms2_rms_calc_fast__var_filt = (_igb_rms2_rms_calc_fast__var_filt_old * 0.909 + _igb_rms2_iinst_ia1__out * 0.0909);
    if((_igb_rms2_rms_calc_fast__var_filt >= 0.0f) && (_igb_rms2_rms_calc_fast__var_filt_old < 0.0f)) {
        _igb_rms2_rms_calc_fast__var_zc = 1;
    }
    else {
        _igb_rms2_rms_calc_fast__var_zc = 0;
    }
    //square sum and period update on signal zero cross
    if ((_igb_rms2_rms_calc_fast__var_zc == 1) || (5000 == _igb_rms2_rms_calc_fast__pc_cnt_1_state)) {
        _igb_rms2_rms_calc_fast__var_eff_s = _igb_rms2_rms_calc_fast__v_sq_sum_state;
        _igb_rms2_rms_calc_fast__period = (float)_igb_rms2_rms_calc_fast__pc_cnt_1_state;
        _igb_rms2_rms_calc_fast__v_sq_sum_state = 0.0f;
    }
    // Generated from the component: Igc_rms2.rms_calc_fast
    _igc_rms2_rms_calc_fast__v_sq_sum_state = _igc_rms2_rms_calc_fast__v_sq_sum_state + _igc_rms2_iinst_ia1__out * _igc_rms2_iinst_ia1__out;
    _igc_rms2_rms_calc_fast__var_filt_old = _igc_rms2_rms_calc_fast__var_filt;
    _igc_rms2_rms_calc_fast__var_filt = (_igc_rms2_rms_calc_fast__var_filt_old * 0.909 + _igc_rms2_iinst_ia1__out * 0.0909);
    if((_igc_rms2_rms_calc_fast__var_filt >= 0.0f) && (_igc_rms2_rms_calc_fast__var_filt_old < 0.0f)) {
        _igc_rms2_rms_calc_fast__var_zc = 1;
    }
    else {
        _igc_rms2_rms_calc_fast__var_zc = 0;
    }
    //square sum and period update on signal zero cross
    if ((_igc_rms2_rms_calc_fast__var_zc == 1) || (5000 == _igc_rms2_rms_calc_fast__pc_cnt_1_state)) {
        _igc_rms2_rms_calc_fast__var_eff_s = _igc_rms2_rms_calc_fast__v_sq_sum_state;
        _igc_rms2_rms_calc_fast__period = (float)_igc_rms2_rms_calc_fast__pc_cnt_1_state;
        _igc_rms2_rms_calc_fast__v_sq_sum_state = 0.0f;
    }
    // Generated from the component: Igc_rms2.sys1
    // Generated from the component: Vab_rms2.sys1
    // Generated from the component: Vab_rms2.rms_calc_fast
    _vab_rms2_rms_calc_fast__v_sq_sum_state = _vab_rms2_rms_calc_fast__v_sq_sum_state + _vab_rms2_vinst_va1__out * _vab_rms2_vinst_va1__out;
    _vab_rms2_rms_calc_fast__var_filt_old = _vab_rms2_rms_calc_fast__var_filt;
    _vab_rms2_rms_calc_fast__var_filt = (_vab_rms2_rms_calc_fast__var_filt_old * 0.909 + _vab_rms2_vinst_va1__out * 0.0909);
    if((_vab_rms2_rms_calc_fast__var_filt >= 0.0f) && (_vab_rms2_rms_calc_fast__var_filt_old < 0.0f)) {
        _vab_rms2_rms_calc_fast__var_zc = 1;
    }
    else {
        _vab_rms2_rms_calc_fast__var_zc = 0;
    }
    //square sum and period update on signal zero cross
    if ((_vab_rms2_rms_calc_fast__var_zc == 1) || (5000 == _vab_rms2_rms_calc_fast__pc_cnt_1_state)) {
        _vab_rms2_rms_calc_fast__var_eff_s = _vab_rms2_rms_calc_fast__v_sq_sum_state;
        _vab_rms2_rms_calc_fast__period = (float)_vab_rms2_rms_calc_fast__pc_cnt_1_state;
        _vab_rms2_rms_calc_fast__v_sq_sum_state = 0.0f;
    }
    // Generated from the component: Vbc_rms2.rms_calc_fast
    _vbc_rms2_rms_calc_fast__v_sq_sum_state = _vbc_rms2_rms_calc_fast__v_sq_sum_state + _vbc_rms2_vinst_va1__out * _vbc_rms2_vinst_va1__out;
    _vbc_rms2_rms_calc_fast__var_filt_old = _vbc_rms2_rms_calc_fast__var_filt;
    _vbc_rms2_rms_calc_fast__var_filt = (_vbc_rms2_rms_calc_fast__var_filt_old * 0.909 + _vbc_rms2_vinst_va1__out * 0.0909);
    if((_vbc_rms2_rms_calc_fast__var_filt >= 0.0f) && (_vbc_rms2_rms_calc_fast__var_filt_old < 0.0f)) {
        _vbc_rms2_rms_calc_fast__var_zc = 1;
    }
    else {
        _vbc_rms2_rms_calc_fast__var_zc = 0;
    }
    //square sum and period update on signal zero cross
    if ((_vbc_rms2_rms_calc_fast__var_zc == 1) || (5000 == _vbc_rms2_rms_calc_fast__pc_cnt_1_state)) {
        _vbc_rms2_rms_calc_fast__var_eff_s = _vbc_rms2_rms_calc_fast__v_sq_sum_state;
        _vbc_rms2_rms_calc_fast__period = (float)_vbc_rms2_rms_calc_fast__pc_cnt_1_state;
        _vbc_rms2_rms_calc_fast__v_sq_sum_state = 0.0f;
    }
    // Generated from the component: Vbc_rms2.sys1
    // Generated from the component: Vbc_rms3.rt1.Input
    _vbc_rms3_rt1_output__out = _vbc_rms3_rms_calc_fast__var_eff_s;
    // Generated from the component: Vbc_rms3.rt2.Input
    _vbc_rms3_rt2_output__out = _vbc_rms3_rms_calc_fast__period;
    // Generated from the component: Vbc_rms3.t1
    // Generated from the component: Vab_rms3.rt2.Input
    _vab_rms3_rt2_output__out = _vab_rms3_rms_calc_fast__period;
    // Generated from the component: Vab_rms3.rt1.Input
    _vab_rms3_rt1_output__out = _vab_rms3_rms_calc_fast__var_eff_s;
    // Generated from the component: Vab_rms3.t1
    // Generated from the component: Igb_rms3.rt2.Input
    _igb_rms3_rt2_output__out = _igb_rms3_rms_calc_fast__period;
    // Generated from the component: Igb_rms3.rt1.Input
    _igb_rms3_rt1_output__out = _igb_rms3_rms_calc_fast__var_eff_s;
    // Generated from the component: Igb_rms3.t1
    // Generated from the component: Ground1.rt2.Input
    _ground1_rt2_output__out = _ground1_rms_calc_fast__period;
    // Generated from the component: Ground1.t1
    // Generated from the component: Ground1.rt1.Input
    _ground1_rt1_output__out = _ground1_rms_calc_fast__var_eff_s;
    // Generated from the component: Igc_rms3.rt1.Input
    _igc_rms3_rt1_output__out = _igc_rms3_rms_calc_fast__var_eff_s;
    // Generated from the component: Igc_rms3.rt2.Input
    _igc_rms3_rt2_output__out = _igc_rms3_rms_calc_fast__period;
    // Generated from the component: Igc_rms3.t1
    // Generated from the component: Iga_rms3.rt2.Input
    _iga_rms3_rt2_output__out = _iga_rms3_rms_calc_fast__period;
    // Generated from the component: Iga_rms3.rt1.Input
    _iga_rms3_rt1_output__out = _iga_rms3_rms_calc_fast__var_eff_s;
    // Generated from the component: Iga_rms3.t1
    // Generated from the component: Ground2.t1
    // Generated from the component: Ground2.rt2.Input
    _ground2_rt2_output__out = _ground2_rms_calc_fast__period;
    // Generated from the component: Ground2.rt1.Input
    _ground2_rt1_output__out = _ground2_rms_calc_fast__var_eff_s;
    // Generated from the component: Igb_rms1.rt2.Input
    _igb_rms1_rt2_output__out = _igb_rms1_rms_calc_fast__period;
    // Generated from the component: Igb_rms1.rt1.Input
    _igb_rms1_rt1_output__out = _igb_rms1_rms_calc_fast__var_eff_s;
    // Generated from the component: Igb_rms1.t1
    // Generated from the component: Vab_rms1.rt1.Input
    _vab_rms1_rt1_output__out = _vab_rms1_rms_calc_fast__var_eff_s;
    // Generated from the component: Vab_rms1.t1
    // Generated from the component: Vab_rms1.rt2.Input
    _vab_rms1_rt2_output__out = _vab_rms1_rms_calc_fast__period;
    // Generated from the component: Vbc_rms1.rt2.Input
    _vbc_rms1_rt2_output__out = _vbc_rms1_rms_calc_fast__period;
    // Generated from the component: Vbc_rms1.t1
    // Generated from the component: Vbc_rms1.rt1.Input
    _vbc_rms1_rt1_output__out = _vbc_rms1_rms_calc_fast__var_eff_s;
    // Generated from the component: Igc_rms1.rt1.Input
    _igc_rms1_rt1_output__out = _igc_rms1_rms_calc_fast__var_eff_s;
    // Generated from the component: Igc_rms1.t1
    // Generated from the component: Igc_rms1.rt2.Input
    _igc_rms1_rt2_output__out = _igc_rms1_rms_calc_fast__period;
    // Generated from the component: Iga_rms1.rt1.Input
    _iga_rms1_rt1_output__out = _iga_rms1_rms_calc_fast__var_eff_s;
    // Generated from the component: Iga_rms1.rt2.Input
    _iga_rms1_rt2_output__out = _iga_rms1_rms_calc_fast__period;
    // Generated from the component: Iga_rms1.t1
    // Generated from the component: Iga_rms.rt1.Input
    _iga_rms_rt1_output__out = _iga_rms_rms_calc_fast__var_eff_s;
    // Generated from the component: Iga_rms.rt2.Input
    _iga_rms_rt2_output__out = _iga_rms_rms_calc_fast__period;
    // Generated from the component: Iga_rms.t1
    // Generated from the component: Vbc_rms.rt2.Input
    _vbc_rms_rt2_output__out = _vbc_rms_rms_calc_fast__period;
    // Generated from the component: Vbc_rms.rt1.Input
    _vbc_rms_rt1_output__out = _vbc_rms_rms_calc_fast__var_eff_s;
    // Generated from the component: Vbc_rms.t1
    // Generated from the component: Igc_rms.rt1.Input
    _igc_rms_rt1_output__out = _igc_rms_rms_calc_fast__var_eff_s;
    // Generated from the component: Igc_rms.t1
    // Generated from the component: Igc_rms.rt2.Input
    _igc_rms_rt2_output__out = _igc_rms_rms_calc_fast__period;
    // Generated from the component: Vab_rms.rt1.Input
    _vab_rms_rt1_output__out = _vab_rms_rms_calc_fast__var_eff_s;
    // Generated from the component: Vab_rms.rt2.Input
    _vab_rms_rt2_output__out = _vab_rms_rms_calc_fast__period;
    // Generated from the component: Vab_rms.t1
    // Generated from the component: Igb_rms.rt2.Input
    _igb_rms_rt2_output__out = _igb_rms_rms_calc_fast__period;
    // Generated from the component: Igb_rms.rt1.Input
    _igb_rms_rt1_output__out = _igb_rms_rms_calc_fast__var_eff_s;
    // Generated from the component: Igb_rms.t1
    // Generated from the component: Iga_rms2.t1
    // Generated from the component: Iga_rms2.rt2.Input
    _iga_rms2_rt2_output__out = _iga_rms2_rms_calc_fast__period;
    // Generated from the component: Iga_rms2.rt1.Input
    _iga_rms2_rt1_output__out = _iga_rms2_rms_calc_fast__var_eff_s;
    // Generated from the component: Igb_rms2.t1
    // Generated from the component: Igb_rms2.rt1.Input
    _igb_rms2_rt1_output__out = _igb_rms2_rms_calc_fast__var_eff_s;
    // Generated from the component: Igb_rms2.rt2.Input
    _igb_rms2_rt2_output__out = _igb_rms2_rms_calc_fast__period;
    // Generated from the component: Igc_rms2.t1
    // Generated from the component: Igc_rms2.rt1.Input
    _igc_rms2_rt1_output__out = _igc_rms2_rms_calc_fast__var_eff_s;
    // Generated from the component: Igc_rms2.rt2.Input
    _igc_rms2_rt2_output__out = _igc_rms2_rms_calc_fast__period;
    // Generated from the component: Vab_rms2.rt1.Input
    _vab_rms2_rt1_output__out = _vab_rms2_rms_calc_fast__var_eff_s;
    // Generated from the component: Vab_rms2.t1
    // Generated from the component: Vab_rms2.rt2.Input
    _vab_rms2_rt2_output__out = _vab_rms2_rms_calc_fast__period;
    // Generated from the component: Vbc_rms2.rt2.Input
    _vbc_rms2_rt2_output__out = _vbc_rms2_rms_calc_fast__period;
    // Generated from the component: Vbc_rms2.rt1.Input
    _vbc_rms2_rt1_output__out = _vbc_rms2_rms_calc_fast__var_eff_s;
    // Generated from the component: Vbc_rms2.t1
    //@cmp.out.block.end
    //////////////////////////////////////////////////////////////////////////
    // Update block
    //////////////////////////////////////////////////////////////////////////
    //@cmp.update.block.start
    // Generated from the component: Vbc_rms3.rms_calc_fast
    if ((_vbc_rms3_rms_calc_fast__var_zc == 1) || (5000 == _vbc_rms3_rms_calc_fast__pc_cnt_1_state)) {
        _vbc_rms3_rms_calc_fast__pc_cnt_1_state = 0;
    }
    _vbc_rms3_rms_calc_fast__pc_cnt_1_state ++;
    // Generated from the component: Vab_rms3.rms_calc_fast
    if ((_vab_rms3_rms_calc_fast__var_zc == 1) || (5000 == _vab_rms3_rms_calc_fast__pc_cnt_1_state)) {
        _vab_rms3_rms_calc_fast__pc_cnt_1_state = 0;
    }
    _vab_rms3_rms_calc_fast__pc_cnt_1_state ++;
    // Generated from the component: Igb_rms3.rms_calc_fast
    if ((_igb_rms3_rms_calc_fast__var_zc == 1) || (5000 == _igb_rms3_rms_calc_fast__pc_cnt_1_state)) {
        _igb_rms3_rms_calc_fast__pc_cnt_1_state = 0;
    }
    _igb_rms3_rms_calc_fast__pc_cnt_1_state ++;
    // Generated from the component: Ground1.rms_calc_fast
    if ((_ground1_rms_calc_fast__var_zc == 1) || (5000 == _ground1_rms_calc_fast__pc_cnt_1_state)) {
        _ground1_rms_calc_fast__pc_cnt_1_state = 0;
    }
    _ground1_rms_calc_fast__pc_cnt_1_state ++;
    // Generated from the component: Igc_rms3.rms_calc_fast
    if ((_igc_rms3_rms_calc_fast__var_zc == 1) || (5000 == _igc_rms3_rms_calc_fast__pc_cnt_1_state)) {
        _igc_rms3_rms_calc_fast__pc_cnt_1_state = 0;
    }
    _igc_rms3_rms_calc_fast__pc_cnt_1_state ++;
    // Generated from the component: Iga_rms3.rms_calc_fast
    if ((_iga_rms3_rms_calc_fast__var_zc == 1) || (5000 == _iga_rms3_rms_calc_fast__pc_cnt_1_state)) {
        _iga_rms3_rms_calc_fast__pc_cnt_1_state = 0;
    }
    _iga_rms3_rms_calc_fast__pc_cnt_1_state ++;
    // Generated from the component: Ground2.rms_calc_fast
    if ((_ground2_rms_calc_fast__var_zc == 1) || (5000 == _ground2_rms_calc_fast__pc_cnt_1_state)) {
        _ground2_rms_calc_fast__pc_cnt_1_state = 0;
    }
    _ground2_rms_calc_fast__pc_cnt_1_state ++;
    // Generated from the component: Igb_rms1.rms_calc_fast
    if ((_igb_rms1_rms_calc_fast__var_zc == 1) || (5000 == _igb_rms1_rms_calc_fast__pc_cnt_1_state)) {
        _igb_rms1_rms_calc_fast__pc_cnt_1_state = 0;
    }
    _igb_rms1_rms_calc_fast__pc_cnt_1_state ++;
    // Generated from the component: Vab_rms1.rms_calc_fast
    if ((_vab_rms1_rms_calc_fast__var_zc == 1) || (5000 == _vab_rms1_rms_calc_fast__pc_cnt_1_state)) {
        _vab_rms1_rms_calc_fast__pc_cnt_1_state = 0;
    }
    _vab_rms1_rms_calc_fast__pc_cnt_1_state ++;
    // Generated from the component: Vbc_rms1.rms_calc_fast
    if ((_vbc_rms1_rms_calc_fast__var_zc == 1) || (5000 == _vbc_rms1_rms_calc_fast__pc_cnt_1_state)) {
        _vbc_rms1_rms_calc_fast__pc_cnt_1_state = 0;
    }
    _vbc_rms1_rms_calc_fast__pc_cnt_1_state ++;
    // Generated from the component: Igc_rms1.rms_calc_fast
    if ((_igc_rms1_rms_calc_fast__var_zc == 1) || (5000 == _igc_rms1_rms_calc_fast__pc_cnt_1_state)) {
        _igc_rms1_rms_calc_fast__pc_cnt_1_state = 0;
    }
    _igc_rms1_rms_calc_fast__pc_cnt_1_state ++;
    // Generated from the component: Iga_rms1.rms_calc_fast
    if ((_iga_rms1_rms_calc_fast__var_zc == 1) || (5000 == _iga_rms1_rms_calc_fast__pc_cnt_1_state)) {
        _iga_rms1_rms_calc_fast__pc_cnt_1_state = 0;
    }
    _iga_rms1_rms_calc_fast__pc_cnt_1_state ++;
    // Generated from the component: Iga_rms.rms_calc_fast
    if ((_iga_rms_rms_calc_fast__var_zc == 1) || (5000 == _iga_rms_rms_calc_fast__pc_cnt_1_state)) {
        _iga_rms_rms_calc_fast__pc_cnt_1_state = 0;
    }
    _iga_rms_rms_calc_fast__pc_cnt_1_state ++;
    // Generated from the component: Vbc_rms.rms_calc_fast
    if ((_vbc_rms_rms_calc_fast__var_zc == 1) || (5000 == _vbc_rms_rms_calc_fast__pc_cnt_1_state)) {
        _vbc_rms_rms_calc_fast__pc_cnt_1_state = 0;
    }
    _vbc_rms_rms_calc_fast__pc_cnt_1_state ++;
    // Generated from the component: Igc_rms.rms_calc_fast
    if ((_igc_rms_rms_calc_fast__var_zc == 1) || (5000 == _igc_rms_rms_calc_fast__pc_cnt_1_state)) {
        _igc_rms_rms_calc_fast__pc_cnt_1_state = 0;
    }
    _igc_rms_rms_calc_fast__pc_cnt_1_state ++;
    // Generated from the component: Vab_rms.rms_calc_fast
    if ((_vab_rms_rms_calc_fast__var_zc == 1) || (5000 == _vab_rms_rms_calc_fast__pc_cnt_1_state)) {
        _vab_rms_rms_calc_fast__pc_cnt_1_state = 0;
    }
    _vab_rms_rms_calc_fast__pc_cnt_1_state ++;
    // Generated from the component: Igb_rms.rms_calc_fast
    if ((_igb_rms_rms_calc_fast__var_zc == 1) || (5000 == _igb_rms_rms_calc_fast__pc_cnt_1_state)) {
        _igb_rms_rms_calc_fast__pc_cnt_1_state = 0;
    }
    _igb_rms_rms_calc_fast__pc_cnt_1_state ++;
    // Generated from the component: Iga_rms2.rms_calc_fast
    if ((_iga_rms2_rms_calc_fast__var_zc == 1) || (5000 == _iga_rms2_rms_calc_fast__pc_cnt_1_state)) {
        _iga_rms2_rms_calc_fast__pc_cnt_1_state = 0;
    }
    _iga_rms2_rms_calc_fast__pc_cnt_1_state ++;
    // Generated from the component: Igb_rms2.rms_calc_fast
    if ((_igb_rms2_rms_calc_fast__var_zc == 1) || (5000 == _igb_rms2_rms_calc_fast__pc_cnt_1_state)) {
        _igb_rms2_rms_calc_fast__pc_cnt_1_state = 0;
    }
    _igb_rms2_rms_calc_fast__pc_cnt_1_state ++;
    // Generated from the component: Igc_rms2.rms_calc_fast
    if ((_igc_rms2_rms_calc_fast__var_zc == 1) || (5000 == _igc_rms2_rms_calc_fast__pc_cnt_1_state)) {
        _igc_rms2_rms_calc_fast__pc_cnt_1_state = 0;
    }
    _igc_rms2_rms_calc_fast__pc_cnt_1_state ++;
    // Generated from the component: Vab_rms2.rms_calc_fast
    if ((_vab_rms2_rms_calc_fast__var_zc == 1) || (5000 == _vab_rms2_rms_calc_fast__pc_cnt_1_state)) {
        _vab_rms2_rms_calc_fast__pc_cnt_1_state = 0;
    }
    _vab_rms2_rms_calc_fast__pc_cnt_1_state ++;
    // Generated from the component: Vbc_rms2.rms_calc_fast
    if ((_vbc_rms2_rms_calc_fast__var_zc == 1) || (5000 == _vbc_rms2_rms_calc_fast__pc_cnt_1_state)) {
        _vbc_rms2_rms_calc_fast__pc_cnt_1_state = 0;
    }
    _vbc_rms2_rms_calc_fast__pc_cnt_1_state ++;
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
    // Generated from the component: Vbc_rms3.rt1.Output
    // Generated from the component: Vbc_rms1.rt2.Output
    // Generated from the component: Igb_rms3.rt2.Output
    // Generated from the component: Igb_rms.rt1.Output
    // Generated from the component: Igc_rms2.rt1.Output
    // Generated from the component: Igc_rms3.rt2.Output
    // Generated from the component: Igc_rms3.rt1.Output
    // Generated from the component: Iga_rms3.rt2.Output
    // Generated from the component: Vab_rms1.rt2.Output
    // Generated from the component: Vbc_rms.rt2.Output
    // Generated from the component: Vbc_rms.rt1.Output
    // Generated from the component: Igb_rms1.rt2.Output
    // Generated from the component: Igb_rms3.rt1.Output
    // Generated from the component: Igb_rms2.rt2.Output
    // Generated from the component: Vab_rms3.rt1.Output
    // Generated from the component: Ground1.rt1.Output
    // Generated from the component: Iga_rms.rt1.Output
    // Generated from the component: Vab_rms2.rt1.Output
    // Generated from the component: Iga_rms2.rt2.Output
    // Generated from the component: Igb_rms.rt2.Output
    // Generated from the component: Vbc_rms2.rt1.Output
    // Generated from the component: Igc_rms.rt1.Output
    // Generated from the component: Igc_rms.rt2.Output
    // Generated from the component: Vab_rms1.rt1.Output
    // Generated from the component: Vbc_rms3.rt2.Output
    // Generated from the component: Vab_rms2.rt2.Output
    // Generated from the component: Igb_rms1.rt1.Output
    // Generated from the component: Igc_rms2.rt2.Output
    // Generated from the component: Vab_rms.rt1.Output
    // Generated from the component: Iga_rms3.rt1.Output
    // Generated from the component: Iga_rms2.rt1.Output
    // Generated from the component: Vbc_rms1.rt1.Output
    // Generated from the component: Iga_rms1.rt1.Output
    // Generated from the component: Vab_rms3.rt2.Output
    // Generated from the component: Igb_rms2.rt1.Output
    // Generated from the component: Iga_rms1.rt2.Output
    // Generated from the component: Iga_rms.rt2.Output
    // Generated from the component: Vbc_rms2.rt2.Output
    // Generated from the component: Ground2.rt1.Output
    // Generated from the component: Igc_rms1.rt1.Output
    // Generated from the component: Ground1.rt2.Output
    // Generated from the component: Ground2.rt2.Output
    // Generated from the component: Vab_rms.rt2.Output
    // Generated from the component: Igc_rms1.rt2.Output
    // Generated from the component: Igc_rms3.rms_calc_slow
    if(_igc_rms3_rt2_output__out > 0.0f) {
        _igc_rms3_rms_calc_slow__var_rms = sqrtf(_igc_rms3_rt1_output__out / _igc_rms3_rt2_output__out);
    }
    else {
        _igc_rms3_rms_calc_slow__var_rms = 0.0f;
    }
    // Generated from the component: Vbc_rms.rms_calc_slow
    if(_vbc_rms_rt2_output__out > 0.0f) {
        _vbc_rms_rms_calc_slow__var_rms = sqrtf(_vbc_rms_rt1_output__out / _vbc_rms_rt2_output__out);
    }
    else {
        _vbc_rms_rms_calc_slow__var_rms = 0.0f;
    }
    // Generated from the component: Igb_rms3.rms_calc_slow
    if(_igb_rms3_rt2_output__out > 0.0f) {
        _igb_rms3_rms_calc_slow__var_rms = sqrtf(_igb_rms3_rt1_output__out / _igb_rms3_rt2_output__out);
    }
    else {
        _igb_rms3_rms_calc_slow__var_rms = 0.0f;
    }
    // Generated from the component: Igb_rms.rms_calc_slow
    if(_igb_rms_rt2_output__out > 0.0f) {
        _igb_rms_rms_calc_slow__var_rms = sqrtf(_igb_rms_rt1_output__out / _igb_rms_rt2_output__out);
    }
    else {
        _igb_rms_rms_calc_slow__var_rms = 0.0f;
    }
    // Generated from the component: Igc_rms.rms_calc_slow
    if(_igc_rms_rt2_output__out > 0.0f) {
        _igc_rms_rms_calc_slow__var_rms = sqrtf(_igc_rms_rt1_output__out / _igc_rms_rt2_output__out);
    }
    else {
        _igc_rms_rms_calc_slow__var_rms = 0.0f;
    }
    // Generated from the component: Vab_rms1.rms_calc_slow
    if(_vab_rms1_rt2_output__out > 0.0f) {
        _vab_rms1_rms_calc_slow__var_rms = sqrtf(_vab_rms1_rt1_output__out / _vab_rms1_rt2_output__out);
    }
    else {
        _vab_rms1_rms_calc_slow__var_rms = 0.0f;
    }
    // Generated from the component: Vbc_rms3.rms_calc_slow
    if(_vbc_rms3_rt2_output__out > 0.0f) {
        _vbc_rms3_rms_calc_slow__var_rms = sqrtf(_vbc_rms3_rt1_output__out / _vbc_rms3_rt2_output__out);
    }
    else {
        _vbc_rms3_rms_calc_slow__var_rms = 0.0f;
    }
    // Generated from the component: Vab_rms2.rms_calc_slow
    if(_vab_rms2_rt2_output__out > 0.0f) {
        _vab_rms2_rms_calc_slow__var_rms = sqrtf(_vab_rms2_rt1_output__out / _vab_rms2_rt2_output__out);
    }
    else {
        _vab_rms2_rms_calc_slow__var_rms = 0.0f;
    }
    // Generated from the component: Igb_rms1.rms_calc_slow
    if(_igb_rms1_rt2_output__out > 0.0f) {
        _igb_rms1_rms_calc_slow__var_rms = sqrtf(_igb_rms1_rt1_output__out / _igb_rms1_rt2_output__out);
    }
    else {
        _igb_rms1_rms_calc_slow__var_rms = 0.0f;
    }
    // Generated from the component: Igc_rms2.rms_calc_slow
    if(_igc_rms2_rt2_output__out > 0.0f) {
        _igc_rms2_rms_calc_slow__var_rms = sqrtf(_igc_rms2_rt1_output__out / _igc_rms2_rt2_output__out);
    }
    else {
        _igc_rms2_rms_calc_slow__var_rms = 0.0f;
    }
    // Generated from the component: Iga_rms3.rms_calc_slow
    if(_iga_rms3_rt2_output__out > 0.0f) {
        _iga_rms3_rms_calc_slow__var_rms = sqrtf(_iga_rms3_rt1_output__out / _iga_rms3_rt2_output__out);
    }
    else {
        _iga_rms3_rms_calc_slow__var_rms = 0.0f;
    }
    // Generated from the component: Iga_rms2.rms_calc_slow
    if(_iga_rms2_rt2_output__out > 0.0f) {
        _iga_rms2_rms_calc_slow__var_rms = sqrtf(_iga_rms2_rt1_output__out / _iga_rms2_rt2_output__out);
    }
    else {
        _iga_rms2_rms_calc_slow__var_rms = 0.0f;
    }
    // Generated from the component: Vbc_rms1.rms_calc_slow
    if(_vbc_rms1_rt2_output__out > 0.0f) {
        _vbc_rms1_rms_calc_slow__var_rms = sqrtf(_vbc_rms1_rt1_output__out / _vbc_rms1_rt2_output__out);
    }
    else {
        _vbc_rms1_rms_calc_slow__var_rms = 0.0f;
    }
    // Generated from the component: Vab_rms3.rms_calc_slow
    if(_vab_rms3_rt2_output__out > 0.0f) {
        _vab_rms3_rms_calc_slow__var_rms = sqrtf(_vab_rms3_rt1_output__out / _vab_rms3_rt2_output__out);
    }
    else {
        _vab_rms3_rms_calc_slow__var_rms = 0.0f;
    }
    // Generated from the component: Igb_rms2.rms_calc_slow
    if(_igb_rms2_rt2_output__out > 0.0f) {
        _igb_rms2_rms_calc_slow__var_rms = sqrtf(_igb_rms2_rt1_output__out / _igb_rms2_rt2_output__out);
    }
    else {
        _igb_rms2_rms_calc_slow__var_rms = 0.0f;
    }
    // Generated from the component: Iga_rms1.rms_calc_slow
    if(_iga_rms1_rt2_output__out > 0.0f) {
        _iga_rms1_rms_calc_slow__var_rms = sqrtf(_iga_rms1_rt1_output__out / _iga_rms1_rt2_output__out);
    }
    else {
        _iga_rms1_rms_calc_slow__var_rms = 0.0f;
    }
    // Generated from the component: Iga_rms.rms_calc_slow
    if(_iga_rms_rt2_output__out > 0.0f) {
        _iga_rms_rms_calc_slow__var_rms = sqrtf(_iga_rms_rt1_output__out / _iga_rms_rt2_output__out);
    }
    else {
        _iga_rms_rms_calc_slow__var_rms = 0.0f;
    }
    // Generated from the component: Vbc_rms2.rms_calc_slow
    if(_vbc_rms2_rt2_output__out > 0.0f) {
        _vbc_rms2_rms_calc_slow__var_rms = sqrtf(_vbc_rms2_rt1_output__out / _vbc_rms2_rt2_output__out);
    }
    else {
        _vbc_rms2_rms_calc_slow__var_rms = 0.0f;
    }
    // Generated from the component: Ground1.rms_calc_slow
    if(_ground1_rt2_output__out > 0.0f) {
        _ground1_rms_calc_slow__var_rms = sqrtf(_ground1_rt1_output__out / _ground1_rt2_output__out);
    }
    else {
        _ground1_rms_calc_slow__var_rms = 0.0f;
    }
    // Generated from the component: Ground2.rms_calc_slow
    if(_ground2_rt2_output__out > 0.0f) {
        _ground2_rms_calc_slow__var_rms = sqrtf(_ground2_rt1_output__out / _ground2_rt2_output__out);
    }
    else {
        _ground2_rms_calc_slow__var_rms = 0.0f;
    }
    // Generated from the component: Vab_rms.rms_calc_slow
    if(_vab_rms_rt2_output__out > 0.0f) {
        _vab_rms_rms_calc_slow__var_rms = sqrtf(_vab_rms_rt1_output__out / _vab_rms_rt2_output__out);
    }
    else {
        _vab_rms_rms_calc_slow__var_rms = 0.0f;
    }
    // Generated from the component: Igc_rms1.rms_calc_slow
    if(_igc_rms1_rt2_output__out > 0.0f) {
        _igc_rms1_rms_calc_slow__var_rms = sqrtf(_igc_rms1_rt1_output__out / _igc_rms1_rt2_output__out);
    }
    else {
        _igc_rms1_rms_calc_slow__var_rms = 0.0f;
    }
    // Generated from the component: Igc_rms3.sys2
    // Generated from the component: Igc_rms3.rms
    HIL_OutAO(0x400d, _igc_rms3_rms_calc_slow__var_rms);
    // Generated from the component: Vbc_rms.sys2
    // Generated from the component: Vbc_rms.rms
    HIL_OutAO(0x4012, _vbc_rms_rms_calc_slow__var_rms);
    // Generated from the component: Igb_rms3.sys2
    // Generated from the component: Igb_rms3.rms
    HIL_OutAO(0x4009, _igb_rms3_rms_calc_slow__var_rms);
    // Generated from the component: Igb_rms.sys2
    // Generated from the component: Igb_rms.rms
    HIL_OutAO(0x4006, _igb_rms_rms_calc_slow__var_rms);
    // Generated from the component: Igc_rms.rms
    HIL_OutAO(0x400a, _igc_rms_rms_calc_slow__var_rms);
    // Generated from the component: Igc_rms.sys2
    // Generated from the component: Vab_rms1.rms
    HIL_OutAO(0x400f, _vab_rms1_rms_calc_slow__var_rms);
    // Generated from the component: Vab_rms1.cpu_trans.Input
    XIo_OutFloat(0x55000104, _vab_rms1_rms_calc_slow__var_rms);
    // Generated from the component: Vab_rms1.sys2
    // Generated from the component: Vbc_rms3.rms
    HIL_OutAO(0x4015, _vbc_rms3_rms_calc_slow__var_rms);
    // Generated from the component: Vbc_rms3.sys2
    // Generated from the component: Vab_rms2.rms
    HIL_OutAO(0x4010, _vab_rms2_rms_calc_slow__var_rms);
    // Generated from the component: Vab_rms2.sys2
    // Generated from the component: Igb_rms1.sys2
    // Generated from the component: Igb_rms1.rms
    HIL_OutAO(0x4007, _igb_rms1_rms_calc_slow__var_rms);
    // Generated from the component: Igc_rms2.sys2
    // Generated from the component: Igc_rms2.rms
    HIL_OutAO(0x400c, _igc_rms2_rms_calc_slow__var_rms);
    // Generated from the component: Iga_rms3.rms
    HIL_OutAO(0x4005, _iga_rms3_rms_calc_slow__var_rms);
    // Generated from the component: Iga_rms3.sys2
    // Generated from the component: Iga_rms2.sys2
    // Generated from the component: Iga_rms2.rms
    HIL_OutAO(0x4004, _iga_rms2_rms_calc_slow__var_rms);
    // Generated from the component: Vbc_rms1.sys2
    // Generated from the component: Vbc_rms1.rms
    HIL_OutAO(0x4013, _vbc_rms1_rms_calc_slow__var_rms);
    // Generated from the component: Vab_rms3.sys2
    // Generated from the component: Vab_rms3.rms
    HIL_OutAO(0x4011, _vab_rms3_rms_calc_slow__var_rms);
    // Generated from the component: Igb_rms2.rms
    HIL_OutAO(0x4008, _igb_rms2_rms_calc_slow__var_rms);
    // Generated from the component: Igb_rms2.sys2
    // Generated from the component: Iga_rms1.sys2
    // Generated from the component: Iga_rms1.rms
    HIL_OutAO(0x4003, _iga_rms1_rms_calc_slow__var_rms);
    // Generated from the component: Iga_rms.rms
    HIL_OutAO(0x4002, _iga_rms_rms_calc_slow__var_rms);
    // Generated from the component: Iga_rms.sys2
    // Generated from the component: Vbc_rms2.sys2
    // Generated from the component: Vbc_rms2.rms
    HIL_OutAO(0x4014, _vbc_rms2_rms_calc_slow__var_rms);
    // Generated from the component: Ground1.sys2
    // Generated from the component: Ground1.rms
    HIL_OutAO(0x4000, _ground1_rms_calc_slow__var_rms);
    // Generated from the component: Ground2.sys2
    // Generated from the component: Ground2.rms
    HIL_OutAO(0x4001, _ground2_rms_calc_slow__var_rms);
    // Generated from the component: Vab_rms.cpu_trans.Input
    XIo_OutFloat(0x55000100, _vab_rms_rms_calc_slow__var_rms);
    // Generated from the component: Vab_rms.sys2
    // Generated from the component: Vab_rms.rms
    HIL_OutAO(0x400e, _vab_rms_rms_calc_slow__var_rms);
    // Generated from the component: Igc_rms1.sys2
    // Generated from the component: Igc_rms1.rms
    HIL_OutAO(0x400b, _igc_rms1_rms_calc_slow__var_rms);
    //@cmp.out.block.end
    //////////////////////////////////////////////////////////////////////////
    // Update block
    //////////////////////////////////////////////////////////////////////////
    //@cmp.update.block.start
    //@cmp.update.block.end
}
// ----------------------------------------------------------------------------------------  //-----------------------------------------------------------------------------------------