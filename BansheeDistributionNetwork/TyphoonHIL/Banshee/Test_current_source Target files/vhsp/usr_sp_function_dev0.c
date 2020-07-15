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
double _sinusoidal_source1__out;
X_Int32 _switch__out;
//@cmp.var.end

//@cmp.svar.start
// state variables
double _sinusoidal_source1__current_phase;
//@cmp.svar.end



// generated using template: virtual_hil/custom_functions.template---------------------------------
void ReInit_user_sp_cpu_dev0() {
#if DEBUG_MODE
    printf("\n\rReInitTimer");
#endif
    //@cmp.init.block.start
    _sinusoidal_source1__current_phase = 0.0 / 360.0f;
    HIL_OutFloat(137101312, 0.0);
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
    // Generated from the component: Sinusoidal Source1
    _sinusoidal_source1__out = (13800.0 * sin(2.0f * M_PI * _sinusoidal_source1__current_phase) + 0.0);
    // Generated from the component: switch
    _switch__out = XIo_InInt32(0x55000100);
    // Generated from the component: Isp1.Is1
    HIL_OutFloat(137101312, (float) _sinusoidal_source1__out);
    // Generated from the component: S1.CTC_Wrapper
    if (_switch__out == 0x0) {
        HIL_OutInt32(0x8240480, 0x0);
    }
    else {
        HIL_OutInt32(0x8240480, 0x1);
    }
    //@cmp.out.block.end
    //////////////////////////////////////////////////////////////////////////
    // Update block
    //////////////////////////////////////////////////////////////////////////
    //@cmp.update.block.start
    // Generated from the component: Sinusoidal Source1
    _sinusoidal_source1__current_phase += 60.0 * 2e-05;
    if (_sinusoidal_source1__current_phase >= 1.0f) {
        _sinusoidal_source1__current_phase -= 1.0f;
    }
    //@cmp.update.block.end
}
// ----------------------------------------------------------------------------------------  //-----------------------------------------------------------------------------------------