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
double _modbus5_c_u11__out = 1.0;
double _u2__out;
double _modbus6_modbus_device6_comp_holding_out__out;
double _modbus5_modbus_device5_comp_coil_out__out;
double _modbus2_c_u13__out = 50.0;
double _modbus4_c_u11__out = 1.0;
double _modbus6_c_u12__out = 1.0;
double _modbus4_c_u12__out = 1.0;
double _modbus4_modbus_device4_comp_holding_out__out;
double _modbus3_modbus_device3_comp_coil_out__out;
double _u3__out;
double _modbus6_constant1__out = 10000.0;
double _modbus6_c_u11__out = 1.0;
double _modbus5_c_u12__out = 1.0;
double _modbus3_constant2__out = 0.0001;
double _modbus1_constant2__out = 0.0001;
double _modbus5_constant1__out = 10000.0;
double _modbus4_c_u13__out = 50.0;
double _modbus5_modbus_device5_comp_holding_out__out;
double _modbus2_constant1__out = 10000.0;
double _modbus3_c_u13__out = 50.0;
double _modbus3_modbus_device3_comp_holding_out__out;
double _modbus2_modbus_device2_comp_holding_out__out;
double _modbus2_c_u12__out = 1.0;
double _modbus1_c_u13__out = 50.0;
double _modbus3_constant1__out = 10000.0;
double _u1__out;
double _modbus5_c_u13__out = 50.0;
double _u5__out;
double _modbus1_constant1__out = 10000.0;
double _modbus1_c_u11__out = 1.0;
double _modbus2_c_u11__out = 1.0;
double _modbus1_c_u12__out = 1.0;
double _modbus1_modbus_device1_comp_holding_out__out;
double _u4__out;
double _modbus3_c_u11__out = 1.0;
double _modbus3_c_u12__out = 1.0;
double _modbus4_constant1__out = 10000.0;
double _modbus2_modbus_device2_comp_coil_out__out;
double _modbus1_modbus_device1_comp_coil_out__out;
double _modbus4_modbus_device4_comp_coil_out__out;
double _u6__out;
double _modbus2_constant2__out = 0.0001;
double _modbus6_modbus_device6_comp_coil_out__out;
double _modbus6_c_u13__out = 50.0;
double _modbus2_product1__out;
double _modbus2_product2__out;
double _modbus5_product1__out;
double _modbus1_product2__out;
double _modbus1_product1__out;
double _modbus4_product1__out;
double _modbus3_product2__out;
double _modbus3_product1__out;
double _modbus6_product1__out;
//@cmp.var.end

//@cmp.svar.start
// state variables
//@cmp.svar.end
// generated using template: virtual_hil/custom_functions.template---------------------------------
void ReInit_user_sp_cpu_dev0() {

#if DEBUG_MODE
    printf("\n\rReInitTimer");
#endif
    //@cmp.init.block.start


    XIo_OutFloat(0x55000144, 0.0);

    XIo_OutFloat(0x55000138, 0.0);





    XIo_OutFloat(0x55000134, 0.0);

    XIo_OutFloat(0x55000128, 0.0);









    XIo_OutFloat(0x5500013c, 0.0);



    XIo_OutFloat(0x5500012c, 0.0);

    XIo_OutFloat(0x55000124, 0.0);











    XIo_OutFloat(0x5500011c, 0.0);





    XIo_OutFloat(0x55000120, 0.0);

    XIo_OutFloat(0x55000118, 0.0);

    XIo_OutFloat(0x55000130, 0.0);



    XIo_OutFloat(0x55000140, 0.0);



    XIo_OutFloat(0x55000164, 0.0f);



    XIo_OutFloat(0x55000178, 0.0f);


    HIL_OutAO(0x4008, 0.0f);

    HIL_OutAO(0x4005, 0.0f);



    XIo_OutFloat(0x55000150, 0.0f);

    HIL_OutAO(0x4003, 0.0f);

    XIo_OutFloat(0x55000188, 0.0f);

    HIL_OutAO(0x4002, 0.0f);

    XIo_OutFloat(0x55000160, 0.0f);






    HIL_OutAO(0x4000, 0.0f);

    HIL_OutAO(0x4009, 0.0f);

    XIo_OutFloat(0x550001a0, 0.0f);


    HIL_OutAO(0x4006, 0.0f);



    XIo_OutFloat(0x55000170, 0.0f);

    XIo_OutFloat(0x5500018c, 0.0f);

    HIL_OutAO(0x400b, 0.0f);

    HIL_OutAO(0x4001, 0.0f);


    HIL_OutAO(0x4004, 0.0f);


    XIo_OutFloat(0x55000184, 0.0f);

    XIo_OutFloat(0x55000180, 0.0f);


    XIo_OutFloat(0x5500017c, 0.0f);



    XIo_OutFloat(0x55000154, 0.0f);

    XIo_OutFloat(0x550001a4, 0.0f);

    HIL_OutAO(0x400a, 0.0f);

    XIo_OutFloat(0x55000198, 0.0f);

    XIo_OutFloat(0x5500014c, 0.0f);


    HIL_OutAO(0x4007, 0.0f);

    XIo_OutFloat(0x5500019c, 0.0f);

    XIo_OutFloat(0x5500015c, 0.0f);

    XIo_OutFloat(0x55000158, 0.0f);

    XIo_OutFloat(0x55000194, 0.0f);


    XIo_OutFloat(0x5500016c, 0.0f);

    XIo_OutFloat(0x55000168, 0.0f);

    XIo_OutFloat(0x55000148, 0.0f);

    XIo_OutFloat(0x55000190, 0.0f);

    XIo_OutFloat(0x55000174, 0.0f);

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
    // Generated from the component: Modbus5.C_u11

    // Generated from the component: U2
    _u2__out = XIo_InFloat(0x55000104);

    // Generated from the component: Modbus6.ModBus Device6.comp_holding_out
    _modbus6_modbus_device6_comp_holding_out__out = XIo_InFloat(0x55000144);

    // Generated from the component: Modbus5.ModBus Device5.comp_coil_out
    _modbus5_modbus_device5_comp_coil_out__out = XIo_InFloat(0x55000138);

    // Generated from the component: Modbus2.C_u13

    // Generated from the component: Modbus4.C_u11

    // Generated from the component: Modbus6.C_u12

    // Generated from the component: Modbus4.C_u12

    // Generated from the component: Modbus4.ModBus Device4.comp_holding_out
    _modbus4_modbus_device4_comp_holding_out__out = XIo_InFloat(0x55000134);

    // Generated from the component: Modbus3.ModBus Device3.comp_coil_out
    _modbus3_modbus_device3_comp_coil_out__out = XIo_InFloat(0x55000128);

    // Generated from the component: U3
    _u3__out = XIo_InFloat(0x55000108);

    // Generated from the component: Modbus6.Constant1

    // Generated from the component: Modbus6.C_u11

    // Generated from the component: Modbus5.C_u12

    // Generated from the component: Modbus3.Constant2

    // Generated from the component: Modbus1.Constant2

    // Generated from the component: Modbus5.Constant1

    // Generated from the component: Modbus4.C_u13

    // Generated from the component: Modbus5.ModBus Device5.comp_holding_out
    _modbus5_modbus_device5_comp_holding_out__out = XIo_InFloat(0x5500013c);

    // Generated from the component: Modbus2.Constant1

    // Generated from the component: Modbus3.C_u13

    // Generated from the component: Modbus3.ModBus Device3.comp_holding_out
    _modbus3_modbus_device3_comp_holding_out__out = XIo_InFloat(0x5500012c);

    // Generated from the component: Modbus2.ModBus Device2.comp_holding_out
    _modbus2_modbus_device2_comp_holding_out__out = XIo_InFloat(0x55000124);

    // Generated from the component: Modbus2.C_u12

    // Generated from the component: Modbus1.C_u13

    // Generated from the component: Modbus3.Constant1

    // Generated from the component: U1
    _u1__out = XIo_InFloat(0x55000100);

    // Generated from the component: Modbus5.C_u13

    // Generated from the component: U5
    _u5__out = XIo_InFloat(0x55000110);

    // Generated from the component: Modbus1.Constant1

    // Generated from the component: Modbus1.C_u11

    // Generated from the component: Modbus2.C_u11

    // Generated from the component: Modbus1.C_u12

    // Generated from the component: Modbus1.ModBus Device1.comp_holding_out
    _modbus1_modbus_device1_comp_holding_out__out = XIo_InFloat(0x5500011c);

    // Generated from the component: U4
    _u4__out = XIo_InFloat(0x5500010c);

    // Generated from the component: Modbus3.C_u11

    // Generated from the component: Modbus3.C_u12

    // Generated from the component: Modbus4.Constant1

    // Generated from the component: Modbus2.ModBus Device2.comp_coil_out
    _modbus2_modbus_device2_comp_coil_out__out = XIo_InFloat(0x55000120);

    // Generated from the component: Modbus1.ModBus Device1.comp_coil_out
    _modbus1_modbus_device1_comp_coil_out__out = XIo_InFloat(0x55000118);

    // Generated from the component: Modbus4.ModBus Device4.comp_coil_out
    _modbus4_modbus_device4_comp_coil_out__out = XIo_InFloat(0x55000130);

    // Generated from the component: U6
    _u6__out = XIo_InFloat(0x55000114);

    // Generated from the component: Modbus2.Constant2

    // Generated from the component: Modbus6.ModBus Device6.comp_coil_out
    _modbus6_modbus_device6_comp_coil_out__out = XIo_InFloat(0x55000140);

    // Generated from the component: Modbus6.C_u13

    // Generated from the component: Modbus2.Product1
    _modbus2_product1__out = (_u2__out * _modbus2_constant1__out);

    // Generated from the component: Modbus2.ModBus Device2.comp_reg_in
    XIo_OutFloat(0x55000164, _modbus2_product1__out);

    // Generated from the component: Modbus2.Product2
    _modbus2_product2__out = (_modbus2_modbus_device2_comp_holding_out__out * _modbus2_constant2__out);

    // Generated from the component: Termination2


    // Generated from the component: Modbus4.ModBus Device4.comp_coil_in
    XIo_OutFloat(0x55000178, _modbus4_c_u13__out);

    // Generated from the component: Modbus5.Product1
    _modbus5_product1__out = (_u5__out * _modbus5_constant1__out);

    // Generated from the component: Modbus5.Probe1
    HIL_OutAO(0x4008, (float)_modbus5_product1__out);

    // Generated from the component: Modbus3.Probe2
    HIL_OutAO(0x4005, (float)_modbus3_modbus_device3_comp_holding_out__out);

    // Generated from the component: Modbus3.Termination1


    // Generated from the component: Modbus6.Termination1


    // Generated from the component: Modbus1.ModBus Device1.comp_holding_in
    XIo_OutFloat(0x55000150, _modbus1_c_u13__out);

    // Generated from the component: Modbus2.Probe2
    HIL_OutAO(0x4003, (float)_modbus2_modbus_device2_comp_holding_out__out);

    // Generated from the component: Modbus5.ModBus Device5.comp_coil_in
    XIo_OutFloat(0x55000188, _modbus5_c_u12__out);

    // Generated from the component: Modbus2.Probe1
    HIL_OutAO(0x4002, (float)_modbus2_product1__out);

    // Generated from the component: Modbus2.ModBus Device2.comp_holding_in
    XIo_OutFloat(0x55000160, _modbus2_c_u13__out);

    // Generated from the component: Modbus1.Product2
    _modbus1_product2__out = (_modbus1_modbus_device1_comp_holding_out__out * _modbus1_constant2__out);

    // Generated from the component: Termination1


    // Generated from the component: Modbus5.Termination1


    // Generated from the component: Modbus2.Termination1


    // Generated from the component: Modbus1.Product1
    _modbus1_product1__out = (_u1__out * _modbus1_constant1__out);

    // Generated from the component: Modbus1.Probe1
    HIL_OutAO(0x4000, (float)_modbus1_product1__out);

    // Generated from the component: Modbus5.Probe2
    HIL_OutAO(0x4009, (float)_u5__out);

    // Generated from the component: Modbus6.ModBus Device6.comp_holding_in
    XIo_OutFloat(0x550001a0, _modbus6_c_u13__out);

    // Generated from the component: Modbus4.Product1
    _modbus4_product1__out = (_u4__out * _modbus4_constant1__out);

    // Generated from the component: Modbus4.Probe1
    HIL_OutAO(0x4006, (float)_modbus4_product1__out);

    // Generated from the component: Modbus3.Product2
    _modbus3_product2__out = (_modbus3_modbus_device3_comp_holding_out__out * _modbus3_constant2__out);

    // Generated from the component: Termination4


    // Generated from the component: Modbus3.ModBus Device3.comp_holding_in
    XIo_OutFloat(0x55000170, _modbus3_c_u13__out);

    // Generated from the component: Modbus5.ModBus Device5.comp_discrete_in
    XIo_OutFloat(0x5500018c, _modbus5_c_u13__out);

    // Generated from the component: Modbus6.Probe2
    HIL_OutAO(0x400b, (float)_u6__out);

    // Generated from the component: Modbus1.Probe2
    HIL_OutAO(0x4001, (float)_modbus1_modbus_device1_comp_holding_out__out);

    // Generated from the component: Modbus3.Product1
    _modbus3_product1__out = (_u3__out * _modbus3_constant1__out);

    // Generated from the component: Modbus3.Probe1
    HIL_OutAO(0x4004, (float)_modbus3_product1__out);

    // Generated from the component: Modbus5.Termination2


    // Generated from the component: Modbus4.ModBus Device4.comp_reg_in
    XIo_OutFloat(0x55000184, _modbus4_product1__out);

    // Generated from the component: Modbus4.ModBus Device4.comp_holding_in
    XIo_OutFloat(0x55000180, _modbus4_c_u11__out);

    // Generated from the component: Modbus4.Termination1


    // Generated from the component: Modbus4.ModBus Device4.comp_discrete_in
    XIo_OutFloat(0x5500017c, _modbus4_c_u12__out);

    // Generated from the component: Modbus6.Termination2


    // Generated from the component: Modbus6.Product1
    _modbus6_product1__out = (_u6__out * _modbus6_constant1__out);

    // Generated from the component: Modbus1.ModBus Device1.comp_reg_in
    XIo_OutFloat(0x55000154, _modbus1_product1__out);

    // Generated from the component: Modbus6.ModBus Device6.comp_reg_in
    XIo_OutFloat(0x550001a4, _modbus6_product1__out);

    // Generated from the component: Modbus6.Probe1
    HIL_OutAO(0x400a, (float)_modbus6_product1__out);

    // Generated from the component: Modbus6.ModBus Device6.comp_coil_in
    XIo_OutFloat(0x55000198, _modbus6_c_u11__out);

    // Generated from the component: Modbus1.ModBus Device1.comp_discrete_in
    XIo_OutFloat(0x5500014c, _modbus1_c_u12__out);

    // Generated from the component: Modbus4.Termination2


    // Generated from the component: Modbus4.Probe2
    HIL_OutAO(0x4007, (float)_u4__out);

    // Generated from the component: Modbus6.ModBus Device6.comp_discrete_in
    XIo_OutFloat(0x5500019c, _modbus6_c_u12__out);

    // Generated from the component: Modbus2.ModBus Device2.comp_discrete_in
    XIo_OutFloat(0x5500015c, _modbus2_c_u11__out);

    // Generated from the component: Modbus2.ModBus Device2.comp_coil_in
    XIo_OutFloat(0x55000158, _modbus2_c_u12__out);

    // Generated from the component: Modbus5.ModBus Device5.comp_reg_in
    XIo_OutFloat(0x55000194, _modbus5_product1__out);

    // Generated from the component: Modbus1.Termination1


    // Generated from the component: Modbus3.ModBus Device3.comp_discrete_in
    XIo_OutFloat(0x5500016c, _modbus3_c_u12__out);

    // Generated from the component: Modbus3.ModBus Device3.comp_coil_in
    XIo_OutFloat(0x55000168, _modbus3_c_u11__out);

    // Generated from the component: Modbus1.ModBus Device1.comp_coil_in
    XIo_OutFloat(0x55000148, _modbus1_c_u11__out);

    // Generated from the component: Modbus5.ModBus Device5.comp_holding_in
    XIo_OutFloat(0x55000190, _modbus5_c_u11__out);

    // Generated from the component: Modbus3.ModBus Device3.comp_reg_in
    XIo_OutFloat(0x55000174, _modbus3_product1__out);

    //@cmp.out.block.end


    //////////////////////////////////////////////////////////////////////////
    // Update block
    //////////////////////////////////////////////////////////////////////////
    //@cmp.update.block.start
    //@cmp.update.block.end
}
// ----------------------------------------------------------------------------------------  //-----------------------------------------------------------------------------------------