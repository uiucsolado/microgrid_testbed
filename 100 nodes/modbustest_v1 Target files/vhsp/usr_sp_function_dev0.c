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
double _constant3__out = 0.0;
double _modbus_device3_comp_coil_out__out;
X_Int32 _holding_register_ip__out;
double _input_register_ip__out;
double _constant4__out = 0.0;
double _modbus_device3_comp_holding_out__out;
double _bus_split1__out;         //@cmp.var.end

//@cmp.svar.start
// state variables
//@cmp.svar.end
// generated using template: virtual_hil/custom_functions.template---------------------------------
void ReInit_user_sp_cpu_dev0() {

#if DEBUG_MODE
    printf("\n\rReInitTimer");
#endif
    //@cmp.init.block.start

    XIo_OutFloat(0x55000108, 0.0);




    XIo_OutFloat(0x5500010c, 0.0);

    XIo_OutFloat(0x5500011c, 0.0f);

    HIL_OutAO(0x4002, 0.0f);

    XIo_OutFloat(0x55000114, 0.0f);

    HIL_OutAO(0x4001, 0.0f);


    HIL_OutAO(0x4003, 0.0f);

    HIL_OutAO(0x4000, 0.0f);

    XIo_OutFloat(0x55000110, 0.0f);


    XIo_OutInt32(0x55000118, 0);

    //@cmp.init.block.end
}

void ReInit_sp_scope_user_sp_cpu_dev0() {
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

void TimerCounterHandler_0_user_sp_cpu_dev0() {

#if DEBUG_MODE
    printf("\n\rTimerCounterHandler_0");
#endif

    //////////////////////////////////////////////////////////////////////////
    // Output block
    //////////////////////////////////////////////////////////////////////////
    //@cmp.out.block.start
    // Generated from the component: Constant3

    // Generated from the component: ModBus Device3.comp_coil_out
    _modbus_device3_comp_coil_out__out = XIo_InFloat(0x55000108);

    // Generated from the component: Holding Register IP
    _holding_register_ip__out = XIo_InInt32(0x55000100);

    // Generated from the component: Input Register IP
    _input_register_ip__out = XIo_InFloat(0x55000104);

    // Generated from the component: Constant4

    // Generated from the component: ModBus Device3.comp_holding_out
    _modbus_device3_comp_holding_out__out = XIo_InFloat(0x5500010c);

    // Generated from the component: ModBus Device3.comp_reg_in
    XIo_OutFloat(0x5500011c, _input_register_ip__out);

    // Generated from the component: coil_out3
    HIL_OutAO(0x4002, (float)_input_register_ip__out);

    // Generated from the component: ModBus Device3.comp_discrete_in
    XIo_OutFloat(0x55000114, _constant3__out);

    // Generated from the component: coil_out2
    HIL_OutAO(0x4001, (float)_holding_register_ip__out);

    // Generated from the component: Bus Split1
    _bus_split1__out = _modbus_device3_comp_coil_out__out;


    // Generated from the component: holding_out1
    HIL_OutAO(0x4003, (float)_modbus_device3_comp_holding_out__out);

    // Generated from the component: coil_out
    HIL_OutAO(0x4000, (float)_modbus_device3_comp_coil_out__out);

    // Generated from the component: ModBus Device3.comp_coil_in
    XIo_OutFloat(0x55000110, _constant4__out);

    // Generated from the component: Termination1


    // Generated from the component: ModBus Device3.comp_holding_in
    XIo_OutInt32(0x55000118, _holding_register_ip__out);
    //@cmp.out.block.end


    //////////////////////////////////////////////////////////////////////////
    // Update block
    //////////////////////////////////////////////////////////////////////////
    //@cmp.update.block.start
    //@cmp.update.block.end
}
// ----------------------------------------------------------------------------------------  //-----------------------------------------------------------------------------------------