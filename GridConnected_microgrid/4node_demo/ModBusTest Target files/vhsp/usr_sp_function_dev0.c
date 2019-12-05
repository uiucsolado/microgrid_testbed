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
double _modbus1_c_u11__out = 1.0;
double _modbus2_constant1__out = 1.0;
double _modbus4_modbus_device4_comp_holding_out__out[2];
double _modbus2_c_u11__out = 1.0;
double _node_1__out;
double _modbus3_c_u12__out = 1.0;
double _modbus2_modbus_device2_comp_holding_out__out[2];
double _modbus4_modbus_device4_comp_coil_out__out;
double _modbus3_c_u11__out = 1.0;
double _modbus2_c_u12__out = 1.0;
double _modbus4_constant1__out = 1.0;
double _modbus1_modbus_device1_comp_coil_out__out;
double _modbus1_c_u13__out = 50.0;
double _modbus4_c_u12__out = 1.0;
double _modbus1_modbus_device1_comp_holding_out__out[2];
double _node_4__out;
double _modbus2_c_u13__out = 50.0;
double _modbus3_constant1__out = 1.0;
double _modbus4_c_u13__out = 50.0;
double _modbus2_modbus_device2_comp_coil_out__out;
double _node_3__out;
double _modbus1_c_u12__out = 1.0;
double _node_2__out;
double _modbus1_constant1__out = 1.0;
double _modbus4_c_u11__out = 1.0;
double _modbus3_c_u13__out = 50.0;
double _modbus3_modbus_device3_comp_coil_out__out;
double _modbus3_modbus_device3_comp_holding_out__out[2];
double _modbus4_bus_split2__out;
double _modbus4_bus_split2__out1;
double _modbus2_bus_split2__out;
double _modbus2_bus_split2__out1;
double _modbus1_bus_split2__out;
double _modbus1_bus_split2__out1;
double _modbus4_product1__out;
double _modbus3_product1__out;
double _modbus2_product1__out;
double _modbus1_product1__out;
double _modbus3_bus_split2__out;
double _modbus3_bus_split2__out1;
X_Int32 _modbus4_c_function3__temp;
double _modbus4_c_function3__high;
double _modbus4_c_function3__low;


double _modbus4_c_function3__regD;
X_Int32 _modbus2_c_function3__temp;
double _modbus2_c_function3__high;
double _modbus2_c_function3__low;


double _modbus2_c_function3__regD;
X_Int32 _modbus1_c_function3__temp;
double _modbus1_c_function3__high;
double _modbus1_c_function3__low;


double _modbus1_c_function3__regD;
X_Int32 _modbus4_c_function1__in;


X_Int32 _modbus4_c_function1__out;
X_Int32 _modbus4_c_function1__sign;
X_Int32 _modbus3_c_function1__in;


X_Int32 _modbus3_c_function1__out;
X_Int32 _modbus3_c_function1__sign;
X_Int32 _modbus2_c_function1__in;


X_Int32 _modbus2_c_function1__out;
X_Int32 _modbus2_c_function1__sign;
X_Int32 _modbus1_c_function1__in;


X_Int32 _modbus1_c_function1__out;
X_Int32 _modbus1_c_function1__sign;
X_Int32 _modbus3_c_function3__temp;
double _modbus3_c_function3__high;
double _modbus3_c_function3__low;


double _modbus3_c_function3__regD;
double _modbus4_gain1__out;
double _modbus2_gain1__out;
double _modbus1_gain1__out;
X_Int32 _modbus4_bus_join1__out[2];
X_Int32 _modbus3_bus_join1__out[2];
X_Int32 _modbus2_bus_join1__out[2];
X_Int32 _modbus1_bus_join1__out[2];
double _modbus3_gain1__out;                //@cmp.var.end

//@cmp.svar.start
// state variables
//@cmp.svar.end
// generated using template: virtual_hil/custom_functions.template---------------------------------
void ReInit_user_sp_cpu_dev0() {
#if DEBUG_MODE
    printf("\n\rReInitTimer");
#endif
    //@cmp.init.block.start
    XIo_OutFloat(0x55000140, 0.0f);
    HIL_OutAO(0x4011, 0.0f);
    HIL_OutAO(0x4012, 0.0f);
    XIo_OutFloat(0x55000158, 0.0f);
    XIo_OutFloat(0x5500016c, 0.0f);
    HIL_OutAO(0x4007, 0.0f);
    HIL_OutAO(0x4008, 0.0f);
    XIo_OutFloat(0x55000168, 0.0f);
    XIo_OutFloat(0x55000154, 0.0f);
    XIo_OutFloat(0x55000148, 0.0f);
    XIo_OutFloat(0x55000180, 0.0f);
    HIL_OutAO(0x4002, 0.0f);
    HIL_OutAO(0x4003, 0.0f);
    XIo_OutFloat(0x5500015c, 0.0f);
    XIo_OutFloat(0x55000184, 0.0f);
    XIo_OutFloat(0x55000144, 0.0f);
    XIo_OutFloat(0x5500017c, 0.0f);
    XIo_OutFloat(0x55000170, 0.0f);
    HIL_OutAO(0x400c, 0.0f);
    HIL_OutAO(0x400d, 0.0f);
    HIL_OutAO(0x400f, 0.0f);
    HIL_OutAO(0x400a, 0.0f);
    HIL_OutAO(0x4005, 0.0f);
    HIL_OutAO(0x4000, 0.0f);
    HIL_OutAO(0x4010, 0.0f);
    HIL_OutAO(0x4006, 0.0f);
    HIL_OutAO(0x4001, 0.0f);
    HIL_OutAO(0x400b, 0.0f);
    HIL_OutAO(0x4017, 0.0f);
    HIL_OutAO(0x4013, 0.0f);
    HIL_OutAO(0x4015, 0.0f);
    HIL_OutAO(0x4009, 0.0f);
    HIL_OutAO(0x4004, 0.0f);
    HIL_OutAO(0x4014, 0.0f);
    XIo_OutInt32(0x55000188, 0);
    XIo_OutInt32(0x55000174, 0);
    XIo_OutInt32(0x55000160, 0);
    XIo_OutInt32(0x5500014c, 0);
    HIL_OutAO(0x4016, 0.0f);
    HIL_OutAO(0x400e, 0.0f);
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
    // Generated from the component: Modbus1.C_u11
    // Generated from the component: Modbus2.Constant1
    // Generated from the component: Modbus4.ModBus Device4.comp_holding_out
    _modbus4_modbus_device4_comp_holding_out__out[0] = XIo_InFloat(0x55000138);
    _modbus4_modbus_device4_comp_holding_out__out[1] = XIo_InFloat(0x5500013c);
    // Generated from the component: Modbus2.C_u11
    // Generated from the component: Node 1
    _node_1__out = XIo_InFloat(0x55000100);
    // Generated from the component: Modbus3.C_u12
    // Generated from the component: Modbus2.ModBus Device2.comp_holding_out
    _modbus2_modbus_device2_comp_holding_out__out[0] = XIo_InFloat(0x55000120);
    _modbus2_modbus_device2_comp_holding_out__out[1] = XIo_InFloat(0x55000124);
    // Generated from the component: Modbus4.ModBus Device4.comp_coil_out
    _modbus4_modbus_device4_comp_coil_out__out = XIo_InFloat(0x55000134);
    // Generated from the component: Modbus3.C_u11
    // Generated from the component: Modbus2.C_u12
    // Generated from the component: Modbus4.Constant1
    // Generated from the component: Modbus1.ModBus Device1.comp_coil_out
    _modbus1_modbus_device1_comp_coil_out__out = XIo_InFloat(0x55000110);
    // Generated from the component: Modbus1.C_u13
    // Generated from the component: Modbus4.C_u12
    // Generated from the component: Modbus1.ModBus Device1.comp_holding_out
    _modbus1_modbus_device1_comp_holding_out__out[0] = XIo_InFloat(0x55000114);
    _modbus1_modbus_device1_comp_holding_out__out[1] = XIo_InFloat(0x55000118);
    // Generated from the component: Node 4
    _node_4__out = XIo_InFloat(0x5500010c);
    // Generated from the component: Modbus2.C_u13
    // Generated from the component: Modbus3.Constant1
    // Generated from the component: Modbus4.C_u13
    // Generated from the component: Modbus2.ModBus Device2.comp_coil_out
    _modbus2_modbus_device2_comp_coil_out__out = XIo_InFloat(0x5500011c);
    // Generated from the component: Node 3
    _node_3__out = XIo_InFloat(0x55000108);
    // Generated from the component: Modbus1.C_u12
    // Generated from the component: Node 2
    _node_2__out = XIo_InFloat(0x55000104);
    // Generated from the component: Modbus1.Constant1
    // Generated from the component: Modbus4.C_u11
    // Generated from the component: Modbus3.C_u13
    // Generated from the component: Modbus3.ModBus Device3.comp_coil_out
    _modbus3_modbus_device3_comp_coil_out__out = XIo_InFloat(0x55000128);
    // Generated from the component: Modbus3.ModBus Device3.comp_holding_out
    _modbus3_modbus_device3_comp_holding_out__out[0] = XIo_InFloat(0x5500012c);
    _modbus3_modbus_device3_comp_holding_out__out[1] = XIo_InFloat(0x55000130);
    // Generated from the component: Modbus1.ModBus Device1.comp_coil_in
    XIo_OutFloat(0x55000140, _modbus1_c_u11__out);
    // Generated from the component: Modbus4.Probe3
    HIL_OutAO(0x4011, (float)_modbus4_modbus_device4_comp_holding_out__out[0]);
    HIL_OutAO(0x4012, (float)_modbus4_modbus_device4_comp_holding_out__out[1]);
    // Generated from the component: Modbus4.Bus Split2
    _modbus4_bus_split2__out = _modbus4_modbus_device4_comp_holding_out__out[0];
    _modbus4_bus_split2__out1 = _modbus4_modbus_device4_comp_holding_out__out[1];
    // Generated from the component: Modbus2.ModBus Device2.comp_discrete_in
    XIo_OutFloat(0x55000158, _modbus2_c_u11__out);
    // Generated from the component: Modbus3.ModBus Device3.comp_discrete_in
    XIo_OutFloat(0x5500016c, _modbus3_c_u12__out);
    // Generated from the component: Modbus2.Bus Split2
    _modbus2_bus_split2__out = _modbus2_modbus_device2_comp_holding_out__out[0];
    _modbus2_bus_split2__out1 = _modbus2_modbus_device2_comp_holding_out__out[1];
    // Generated from the component: Modbus2.Probe4
    HIL_OutAO(0x4007, (float)_modbus2_modbus_device2_comp_holding_out__out[0]);
    HIL_OutAO(0x4008, (float)_modbus2_modbus_device2_comp_holding_out__out[1]);
    // Generated from the component: Modbus4.Termination1
    // Generated from the component: Modbus3.ModBus Device3.comp_coil_in
    XIo_OutFloat(0x55000168, _modbus3_c_u11__out);
    // Generated from the component: Modbus2.ModBus Device2.comp_coil_in
    XIo_OutFloat(0x55000154, _modbus2_c_u12__out);
    // Generated from the component: Modbus1.Termination1
    // Generated from the component: Modbus1.ModBus Device1.comp_holding_in
    XIo_OutFloat(0x55000148, _modbus1_c_u13__out);
    // Generated from the component: Modbus4.ModBus Device4.comp_discrete_in
    XIo_OutFloat(0x55000180, _modbus4_c_u12__out);
    // Generated from the component: Modbus1.Probe3
    HIL_OutAO(0x4002, (float)_modbus1_modbus_device1_comp_holding_out__out[0]);
    HIL_OutAO(0x4003, (float)_modbus1_modbus_device1_comp_holding_out__out[1]);
    // Generated from the component: Modbus1.Bus Split2
    _modbus1_bus_split2__out = _modbus1_modbus_device1_comp_holding_out__out[0];
    _modbus1_bus_split2__out1 = _modbus1_modbus_device1_comp_holding_out__out[1];
    // Generated from the component: Modbus4.Product1
    _modbus4_product1__out = (_node_4__out * _modbus4_constant1__out);
    // Generated from the component: Modbus2.ModBus Device2.comp_holding_in
    XIo_OutFloat(0x5500015c, _modbus2_c_u13__out);
    // Generated from the component: Modbus4.ModBus Device4.comp_holding_in
    XIo_OutFloat(0x55000184, _modbus4_c_u13__out);
    // Generated from the component: Modbus2.Termination1
    // Generated from the component: Modbus3.Product1
    _modbus3_product1__out = (_node_3__out * _modbus3_constant1__out);
    // Generated from the component: Modbus1.ModBus Device1.comp_discrete_in
    XIo_OutFloat(0x55000144, _modbus1_c_u12__out);
    // Generated from the component: Modbus2.Product1
    _modbus2_product1__out = (_node_2__out * _modbus2_constant1__out);
    // Generated from the component: Modbus1.Product1
    _modbus1_product1__out = (_node_1__out * _modbus1_constant1__out);
    // Generated from the component: Modbus4.ModBus Device4.comp_coil_in
    XIo_OutFloat(0x5500017c, _modbus4_c_u11__out);
    // Generated from the component: Modbus3.ModBus Device3.comp_holding_in
    XIo_OutFloat(0x55000170, _modbus3_c_u13__out);
    // Generated from the component: Modbus3.Termination1
    // Generated from the component: Modbus3.Probe3
    HIL_OutAO(0x400c, (float)_modbus3_modbus_device3_comp_holding_out__out[0]);
    HIL_OutAO(0x400d, (float)_modbus3_modbus_device3_comp_holding_out__out[1]);
    // Generated from the component: Modbus3.Bus Split2
    _modbus3_bus_split2__out = _modbus3_modbus_device3_comp_holding_out__out[0];
    _modbus3_bus_split2__out1 = _modbus3_modbus_device3_comp_holding_out__out[1];
    // Generated from the component: Modbus4.C function3
    _modbus4_c_function3__high = _modbus4_bus_split2__out;
    _modbus4_c_function3__low = _modbus4_bus_split2__out1;
    _modbus4_c_function3__temp = (((X_Int32)_modbus4_c_function3__high << 16) & -65536) | ((X_Int32)_modbus4_c_function3__low & 65535);
    if (_modbus4_c_function3__temp < 1e7 && _modbus4_c_function3__temp > -1e7)_modbus4_c_function3__regD = _modbus4_c_function3__temp;
    else if (_modbus4_c_function3__temp == 1e7)_modbus4_c_function3__regD = 1e7;
    else if (_modbus4_c_function3__temp == -1e7)_modbus4_c_function3__regD = -1e7;
    else if (_modbus4_c_function3__temp > 1e7)_modbus4_c_function3__regD = 2e7;
    else if (_modbus4_c_function3__temp < -1e7)_modbus4_c_function3__regD = -2e7;
    // Generated from the component: Modbus2.C function3
    _modbus2_c_function3__high = _modbus2_bus_split2__out;
    _modbus2_c_function3__low = _modbus2_bus_split2__out1;
    _modbus2_c_function3__temp = (((X_Int32)_modbus2_c_function3__high << 16) & -65536) | ((X_Int32)_modbus2_c_function3__low & 65535);
    if (_modbus2_c_function3__temp < 1e7 && _modbus2_c_function3__temp > -1e7)_modbus2_c_function3__regD = _modbus2_c_function3__temp;
    else if (_modbus2_c_function3__temp == 1e7)_modbus2_c_function3__regD = 1e7;
    else if (_modbus2_c_function3__temp == -1e7)_modbus2_c_function3__regD = -1e7;
    else if (_modbus2_c_function3__temp > 1e7)_modbus2_c_function3__regD = 2e7;
    else if (_modbus2_c_function3__temp < -1e7)_modbus2_c_function3__regD = -2e7;
    // Generated from the component: Modbus1.C function3
    _modbus1_c_function3__high = _modbus1_bus_split2__out;
    _modbus1_c_function3__low = _modbus1_bus_split2__out1;
    _modbus1_c_function3__temp = (((X_Int32)_modbus1_c_function3__high << 16) & -65536) | ((X_Int32)_modbus1_c_function3__low & 65535);
    if (_modbus1_c_function3__temp < 1e7 && _modbus1_c_function3__temp > -1e7)_modbus1_c_function3__regD = _modbus1_c_function3__temp;
    else if (_modbus1_c_function3__temp == 1e7)_modbus1_c_function3__regD = 1e7;
    else if (_modbus1_c_function3__temp == -1e7)_modbus1_c_function3__regD = -1e7;
    else if (_modbus1_c_function3__temp > 1e7)_modbus1_c_function3__regD = 2e7;
    else if (_modbus1_c_function3__temp < -1e7)_modbus1_c_function3__regD = -2e7;
    // Generated from the component: Modbus4.C function1
    _modbus4_c_function1__in = _modbus4_product1__out;
    if (_modbus4_c_function1__in >= 0) {
        _modbus4_c_function1__out = _modbus4_c_function1__in;
        _modbus4_c_function1__sign = 0;
    }
    else {
        _modbus4_c_function1__out = _modbus4_c_function1__in * -1;
        _modbus4_c_function1__sign = 1;
    }
    // Generated from the component: Modbus4.Probe1
    HIL_OutAO(0x400f, (float)_modbus4_product1__out);
    // Generated from the component: Modbus3.C function1
    _modbus3_c_function1__in = _modbus3_product1__out;
    if (_modbus3_c_function1__in >= 0) {
        _modbus3_c_function1__out = _modbus3_c_function1__in;
        _modbus3_c_function1__sign = 0;
    }
    else {
        _modbus3_c_function1__out = _modbus3_c_function1__in * -1;
        _modbus3_c_function1__sign = 1;
    }
    // Generated from the component: Modbus3.Probe1
    HIL_OutAO(0x400a, (float)_modbus3_product1__out);
    // Generated from the component: Modbus2.Probe1
    HIL_OutAO(0x4005, (float)_modbus2_product1__out);
    // Generated from the component: Modbus2.C function1
    _modbus2_c_function1__in = _modbus2_product1__out;
    if (_modbus2_c_function1__in >= 0) {
        _modbus2_c_function1__out = _modbus2_c_function1__in;
        _modbus2_c_function1__sign = 0;
    }
    else {
        _modbus2_c_function1__out = _modbus2_c_function1__in * -1;
        _modbus2_c_function1__sign = 1;
    }
    // Generated from the component: Modbus1.Probe1
    HIL_OutAO(0x4000, (float)_modbus1_product1__out);
    // Generated from the component: Modbus1.C function1
    _modbus1_c_function1__in = _modbus1_product1__out;
    if (_modbus1_c_function1__in >= 0) {
        _modbus1_c_function1__out = _modbus1_c_function1__in;
        _modbus1_c_function1__sign = 0;
    }
    else {
        _modbus1_c_function1__out = _modbus1_c_function1__in * -1;
        _modbus1_c_function1__sign = 1;
    }
    // Generated from the component: Modbus3.C function3
    _modbus3_c_function3__high = _modbus3_bus_split2__out;
    _modbus3_c_function3__low = _modbus3_bus_split2__out1;
    _modbus3_c_function3__temp = (((X_Int32)_modbus3_c_function3__high << 16) & -65536) | ((X_Int32)_modbus3_c_function3__low & 65535);
    if (_modbus3_c_function3__temp < 1e7 && _modbus3_c_function3__temp > -1e7)_modbus3_c_function3__regD = _modbus3_c_function3__temp;
    else if (_modbus3_c_function3__temp == 1e7)_modbus3_c_function3__regD = 1e7;
    else if (_modbus3_c_function3__temp == -1e7)_modbus3_c_function3__regD = -1e7;
    else if (_modbus3_c_function3__temp > 1e7)_modbus3_c_function3__regD = 2e7;
    else if (_modbus3_c_function3__temp < -1e7)_modbus3_c_function3__regD = -2e7;
    // Generated from the component: Modbus4.Gain1
    _modbus4_gain1__out = 1e-07 * _modbus4_c_function3__regD;
    // Generated from the component: Modbus4.Probe2
    HIL_OutAO(0x4010, (float)_modbus4_c_function3__regD);
    // Generated from the component: Modbus2.Probe3
    HIL_OutAO(0x4006, (float)_modbus2_c_function3__regD);
    // Generated from the component: Modbus2.Gain1
    _modbus2_gain1__out = 1e-07 * _modbus2_c_function3__regD;
    // Generated from the component: Modbus1.Gain1
    _modbus1_gain1__out = 1e-07 * _modbus1_c_function3__regD;
    // Generated from the component: Modbus1.Probe2
    HIL_OutAO(0x4001, (float)_modbus1_c_function3__regD);
    // Generated from the component: Modbus4.Bus Join1
    _modbus4_bus_join1__out[0] = _modbus4_c_function1__out;
    _modbus4_bus_join1__out[1] = _modbus4_c_function1__sign;
    // Generated from the component: Modbus3.Bus Join1
    _modbus3_bus_join1__out[0] = _modbus3_c_function1__out;
    _modbus3_bus_join1__out[1] = _modbus3_c_function1__sign;
    // Generated from the component: Modbus2.Bus Join1
    _modbus2_bus_join1__out[0] = _modbus2_c_function1__out;
    _modbus2_bus_join1__out[1] = _modbus2_c_function1__sign;
    // Generated from the component: Modbus1.Bus Join1
    _modbus1_bus_join1__out[0] = _modbus1_c_function1__out;
    _modbus1_bus_join1__out[1] = _modbus1_c_function1__sign;
    // Generated from the component: Modbus3.Probe2
    HIL_OutAO(0x400b, (float)_modbus3_c_function3__regD);
    // Generated from the component: Modbus3.Gain1
    _modbus3_gain1__out = 1e-07 * _modbus3_c_function3__regD;
    // Generated from the component: u4
    HIL_OutAO(0x4017, (float)_modbus4_gain1__out);
    // Generated from the component: Modbus4.ProbeX
    HIL_OutAO(0x4013, (float)_modbus4_gain1__out);
    // Generated from the component: u2
    HIL_OutAO(0x4015, (float)_modbus2_gain1__out);
    // Generated from the component: Modbus2.ProbeX
    HIL_OutAO(0x4009, (float)_modbus2_gain1__out);
    // Generated from the component: Modbus1.ProbeX
    HIL_OutAO(0x4004, (float)_modbus1_gain1__out);
    // Generated from the component: u1
    HIL_OutAO(0x4014, (float)_modbus1_gain1__out);
    // Generated from the component: Modbus4.ModBus Device4.comp_reg_in
    XIo_OutInt32(0x55000188, _modbus4_bus_join1__out[0]);
    XIo_OutInt32(0x5500018c, _modbus4_bus_join1__out[1]);
    // Generated from the component: Modbus3.ModBus Device3.comp_reg_in
    XIo_OutInt32(0x55000174, _modbus3_bus_join1__out[0]);
    XIo_OutInt32(0x55000178, _modbus3_bus_join1__out[1]);
    // Generated from the component: Modbus2.ModBus Device2.comp_reg_in
    XIo_OutInt32(0x55000160, _modbus2_bus_join1__out[0]);
    XIo_OutInt32(0x55000164, _modbus2_bus_join1__out[1]);
    // Generated from the component: Modbus1.ModBus Device1.comp_reg_in
    XIo_OutInt32(0x5500014c, _modbus1_bus_join1__out[0]);
    XIo_OutInt32(0x55000150, _modbus1_bus_join1__out[1]);
    // Generated from the component: u3
    HIL_OutAO(0x4016, (float)_modbus3_gain1__out);
    // Generated from the component: Modbus3.ProbeX
    HIL_OutAO(0x400e, (float)_modbus3_gain1__out);
    //@cmp.out.block.end
    //////////////////////////////////////////////////////////////////////////
    // Update block
    //////////////////////////////////////////////////////////////////////////
    //@cmp.update.block.start
    // Generated from the component: Modbus4.ModBus Device4.comp_holding_out
    // Generated from the component: Modbus2.ModBus Device2.comp_holding_out
    // Generated from the component: Modbus4.ModBus Device4.comp_coil_out
    // Generated from the component: Modbus1.ModBus Device1.comp_coil_out
    // Generated from the component: Modbus1.ModBus Device1.comp_holding_out
    // Generated from the component: Modbus2.ModBus Device2.comp_coil_out
    // Generated from the component: Modbus3.ModBus Device3.comp_coil_out
    // Generated from the component: Modbus3.ModBus Device3.comp_holding_out
    // Generated from the component: Modbus1.ModBus Device1.comp_coil_in
    // Generated from the component: Modbus2.ModBus Device2.comp_discrete_in
    // Generated from the component: Modbus3.ModBus Device3.comp_discrete_in
    // Generated from the component: Modbus3.ModBus Device3.comp_coil_in
    // Generated from the component: Modbus2.ModBus Device2.comp_coil_in
    // Generated from the component: Modbus1.ModBus Device1.comp_holding_in
    // Generated from the component: Modbus4.ModBus Device4.comp_discrete_in
    // Generated from the component: Modbus2.ModBus Device2.comp_holding_in
    // Generated from the component: Modbus4.ModBus Device4.comp_holding_in
    // Generated from the component: Modbus1.ModBus Device1.comp_discrete_in
    // Generated from the component: Modbus4.ModBus Device4.comp_coil_in
    // Generated from the component: Modbus3.ModBus Device3.comp_holding_in
    // Generated from the component: Modbus4.C function3
    // Generated from the component: Modbus2.C function3
    // Generated from the component: Modbus1.C function3
    // Generated from the component: Modbus4.C function1
    // Generated from the component: Modbus3.C function1
    // Generated from the component: Modbus2.C function1
    // Generated from the component: Modbus1.C function1
    // Generated from the component: Modbus3.C function3
    // Generated from the component: Modbus4.ModBus Device4.comp_reg_in
    // Generated from the component: Modbus3.ModBus Device3.comp_reg_in
    // Generated from the component: Modbus2.ModBus Device2.comp_reg_in
    // Generated from the component: Modbus1.ModBus Device1.comp_reg_in
    //@cmp.update.block.end
}
// ----------------------------------------------------------------------------------------  //-----------------------------------------------------------------------------------------