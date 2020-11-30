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
double _sinusoidal_source1__out;
double _sinusoidal_source2__out;
double _sinusoidal_source3__out;
double _unit_delay2__out;
double _va_va1__out;
double _vb_va1__out;
double _vc_va1__out;
double _abc_to_qd_constant2__out = 2.0943951023931953;
double _abc_to_qd_constant3__out = 2.0943951023931953;
X_Int32 _grid_connect__out;
double _gain3__out;
double _gain5__out;
double _gain4__out;
double _abc_to_qd_trigonometric_function3__out;
double _abc_to_qd_trigonometric_function5__out;
double _abc_to_qd_sum2__out;
double _abc_to_qd_sum4__out;
X_Int32 _logical_operator1__out;
float _grid_connect_on__tmp;
double _abc_to_qd_product1__out;
double _abc_to_qd_product4__out;
double _abc_to_qd_trigonometric_function2__out;
double _abc_to_qd_trigonometric_function6__out;
double _abc_to_qd_trigonometric_function4__out;
double _abc_to_qd_trigonometric_function7__out;
float _grid_connect_off__tmp;
double _abc_to_qd_product2__out;
double _abc_to_qd_product5__out;
double _abc_to_qd_product3__out;
double _abc_to_qd_product6__out;
double _abc_to_qd_sum3__out;
double _abc_to_qd_sum5__out;
double _abc_to_qd_gain1__out;
double _abc_to_qd_gain2__out;
double _gain7__out;
double _gain6__out;
double _pll_pid_controller1__out;
double _pll_pid_controller1__pi_reg_out_int;
double _gain13__out;
double _pll_c_function1__in;


double _pll_c_function1__out;

double _pll_confine_phase__in;


double _pll_confine_phase__out;
//@cmp.var.end

//@cmp.svar.start
// state variables
double _sinusoidal_source1__current_phase;
double _sinusoidal_source2__current_phase;
double _sinusoidal_source3__current_phase;
double _unit_delay2__state;
double _pll_pid_controller1__integrator_state;
X_UnInt32 _pll_pid_controller1__av_active;
double _pll_pid_controller1__filter_state;
double _pll_c_function1__var;
double _pll_confine_phase__x;
double _pll_confine_phase__floor_in;
//@cmp.svar.end




// generated using template: virtual_hil/custom_functions.template---------------------------------
void ReInit_user_sp_cpu0_dev0() {
#if DEBUG_MODE
    printf("\n\rReInitTimer");
#endif
    //@cmp.init.block.start
    _sinusoidal_source1__current_phase = 0.0 / 360.0f;
    _sinusoidal_source2__current_phase = -120.0 / 360.0f;
    _sinusoidal_source3__current_phase = 120.0 / 360.0f;
    _unit_delay2__state = 0.0;
    HIL_OutAO(0x4003, 0.0f);
    HIL_OutFloat(137101312, 0.0);
    HIL_OutFloat(137101313, 0.0);
    HIL_OutFloat(137101314, 0.0);
    HIL_OutAO(0x4000, 0.0f);
    _pll_pid_controller1__integrator_state =  376.99111843077515;
    _pll_pid_controller1__filter_state =  0.0;
    HIL_OutAO(0x4001, 0.0f);
    _pll_c_function1__var = 0;
    HIL_OutAO(0x4002, 0.0f);
    _pll_confine_phase__floor_in = 0;
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
    // Generated from the component: Sinusoidal Source1
    _sinusoidal_source1__out = (1.0 * sin(2.0f * M_PI * _sinusoidal_source1__current_phase) + 0.0);
    // Generated from the component: Sinusoidal Source2
    _sinusoidal_source2__out = (1.0 * sin(2.0f * M_PI * _sinusoidal_source2__current_phase) + 0.0);
    // Generated from the component: Sinusoidal Source3
    _sinusoidal_source3__out = (1.0 * sin(2.0f * M_PI * _sinusoidal_source3__current_phase) + 0.0);
    // Generated from the component: Unit Delay2
    _unit_delay2__out = _unit_delay2__state;
    // Generated from the component: Va.Va1
    _va_va1__out = (HIL_InFloat(0xc80000 + 0x3));
    // Generated from the component: Vb.Va1
    _vb_va1__out = (HIL_InFloat(0xc80000 + 0x4));
    // Generated from the component: Vc.Va1
    _vc_va1__out = (HIL_InFloat(0xc80000 + 0x5));
    // Generated from the component: abc to qd.Constant2
    // Generated from the component: abc to qd.Constant3
    // Generated from the component: grid_connect
    _grid_connect__out = XIo_InInt32(0x55000100);
    // Generated from the component: Gain3
    _gain3__out = 391.91835884530855 * _sinusoidal_source1__out;
    // Generated from the component: Gain5
    _gain5__out = 391.91835884530855 * _sinusoidal_source2__out;
    // Generated from the component: Gain4
    _gain4__out = 391.91835884530855 * _sinusoidal_source3__out;
    // Generated from the component: abc to qd.Trigonometric function3
    _abc_to_qd_trigonometric_function3__out = cos(_unit_delay2__out);
    // Generated from the component: abc to qd.Trigonometric function5
    _abc_to_qd_trigonometric_function5__out = sin(_unit_delay2__out);
    // Generated from the component: thetaPLL
    HIL_OutAO(0x4003, (float)_unit_delay2__out);
    // Generated from the component: abc to qd.Sum2
    _abc_to_qd_sum2__out = _unit_delay2__out - _abc_to_qd_constant2__out;
    // Generated from the component: abc to qd.Sum4
    _abc_to_qd_sum4__out = _unit_delay2__out + _abc_to_qd_constant3__out;
    // Generated from the component: Logical operator1
    _logical_operator1__out = !_grid_connect__out;
    // Generated from the component: S4.CTC_Wrapper
    if (_grid_connect__out == 0x0) {
        HIL_OutInt32(0x8240480, 0x0);
    }
    else {
        HIL_OutInt32(0x8240480, 0x1);
    }
    // Generated from the component: grid_connect ON
    HIL_OutInt32(0xf00401, _grid_connect__out != 0x0);
    // Generated from the component: Va_G.Vs1
    HIL_OutFloat(137101312, (float) _gain3__out);
    // Generated from the component: Vb_G.Vs1
    HIL_OutFloat(137101313, (float) _gain5__out);
    // Generated from the component: Vc_G.Vs1
    HIL_OutFloat(137101314, (float) _gain4__out);
    // Generated from the component: abc to qd.Product1
    _abc_to_qd_product1__out = (_va_va1__out * _abc_to_qd_trigonometric_function3__out);
    // Generated from the component: abc to qd.Product4
    _abc_to_qd_product4__out = (_va_va1__out * _abc_to_qd_trigonometric_function5__out);
    // Generated from the component: abc to qd.Trigonometric function2
    _abc_to_qd_trigonometric_function2__out = cos(_abc_to_qd_sum2__out);
    // Generated from the component: abc to qd.Trigonometric function6
    _abc_to_qd_trigonometric_function6__out = sin(_abc_to_qd_sum2__out);
    // Generated from the component: abc to qd.Trigonometric function4
    _abc_to_qd_trigonometric_function4__out = cos(_abc_to_qd_sum4__out);
    // Generated from the component: abc to qd.Trigonometric function7
    _abc_to_qd_trigonometric_function7__out = sin(_abc_to_qd_sum4__out);
    // Generated from the component: grid_connect OFF
    HIL_OutInt32(0xf00400, _logical_operator1__out != 0x0);
    // Generated from the component: abc to qd.Product2
    _abc_to_qd_product2__out = (_vb_va1__out * _abc_to_qd_trigonometric_function2__out);
    // Generated from the component: abc to qd.Product5
    _abc_to_qd_product5__out = (_vb_va1__out * _abc_to_qd_trigonometric_function6__out);
    // Generated from the component: abc to qd.Product3
    _abc_to_qd_product3__out = (_vc_va1__out * _abc_to_qd_trigonometric_function4__out);
    // Generated from the component: abc to qd.Product6
    _abc_to_qd_product6__out = (_vc_va1__out * _abc_to_qd_trigonometric_function7__out);
    // Generated from the component: abc to qd.Sum3
    _abc_to_qd_sum3__out = _abc_to_qd_product1__out + _abc_to_qd_product2__out + _abc_to_qd_product3__out;
    // Generated from the component: abc to qd.Sum5
    _abc_to_qd_sum5__out = _abc_to_qd_product4__out + _abc_to_qd_product5__out + _abc_to_qd_product6__out;
    // Generated from the component: abc to qd.Gain1
    _abc_to_qd_gain1__out = 0.6666666666666666 * _abc_to_qd_sum3__out;
    // Generated from the component: abc to qd.Gain2
    _abc_to_qd_gain2__out = 0.6666666666666666 * _abc_to_qd_sum5__out;
    // Generated from the component: Gain7
    _gain7__out = 0.0025515518153991436 * _abc_to_qd_gain1__out;
    // Generated from the component: Gain6
    _gain6__out = -0.0025515518153991436 * _abc_to_qd_gain2__out;
    // Generated from the component: Vd_G
    HIL_OutAO(0x4000, (float)_gain7__out);
    // Generated from the component: PLL.PID controller1
    _pll_pid_controller1__pi_reg_out_int = _pll_pid_controller1__integrator_state + 5.0 * _gain6__out;
    if (_pll_pid_controller1__pi_reg_out_int < 358.1415625092364)
        _pll_pid_controller1__av_active = 1;
    else if (_pll_pid_controller1__pi_reg_out_int > 395.84067435231395)
        _pll_pid_controller1__av_active = 1;
    else
        _pll_pid_controller1__av_active = 0;
    _pll_pid_controller1__out = MIN(MAX(_pll_pid_controller1__pi_reg_out_int, 358.1415625092364), 395.84067435231395);
    // Generated from the component: Vq_G
    HIL_OutAO(0x4001, (float)_gain6__out);
    // Generated from the component: Gain13
    _gain13__out = 0.0026525823848649226 * _pll_pid_controller1__out;
    // Generated from the component: PLL.C function1
    _pll_c_function1__in = _pll_pid_controller1__out;
    _pll_c_function1__out = _pll_c_function1__var;
    // Generated from the component: omegaPLL
    HIL_OutAO(0x4002, (float)_gain13__out);
    // Generated from the component: PLL.confine phase
    _pll_confine_phase__in = _pll_c_function1__out;
    _pll_confine_phase__x = _pll_confine_phase__in / 6.283185307179586;
    _pll_confine_phase__floor_in = floor(_pll_confine_phase__x);
    _pll_confine_phase__out = _pll_confine_phase__in - (6.283185307179586 * _pll_confine_phase__floor_in);
    //@cmp.out.block.end
    //////////////////////////////////////////////////////////////////////////
    // Update block
    //////////////////////////////////////////////////////////////////////////
    //@cmp.update.block.start
    // Generated from the component: Sinusoidal Source1
    _sinusoidal_source1__current_phase += 60.0 * 3e-05;
    if (_sinusoidal_source1__current_phase >= 1.0f) {
        _sinusoidal_source1__current_phase -= 1.0f;
    }
    // Generated from the component: Sinusoidal Source2
    _sinusoidal_source2__current_phase += 60.0 * 3e-05;
    if (_sinusoidal_source2__current_phase >= 1.0f) {
        _sinusoidal_source2__current_phase -= 1.0f;
    }
    // Generated from the component: Sinusoidal Source3
    _sinusoidal_source3__current_phase += 60.0 * 3e-05;
    if (_sinusoidal_source3__current_phase >= 1.0f) {
        _sinusoidal_source3__current_phase -= 1.0f;
    }
    // Generated from the component: Unit Delay2
    _unit_delay2__state = _pll_confine_phase__out;
    // Generated from the component: PLL.PID controller1
    if (!_pll_pid_controller1__av_active) {
        _pll_pid_controller1__integrator_state += 2.0 * _gain6__out * 3e-05;
    }
    // Generated from the component: PLL.C function1
    _pll_c_function1__var += (3e-05 * _pll_c_function1__in);
    // Generated from the component: PLL.confine phase
    //@cmp.update.block.end
}
// ----------------------------------------------------------------------------------------
//-----------------------------------------------------------------------------------------