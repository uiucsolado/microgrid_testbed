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
double _constant1__out = 1.0;
double _constant2__out = 1.0;
double _constant3__out = 50.0;
double _feedback_u_bus_split2__out;
double _feedback_u_bus_split2__out1;
double _feedback_u_bus_split2__out2;
double _feedback_u_constant1__out = 0.0001;
double _feedback_u_constant2__out = 0.0001;
double _feedback_u_constant3__out = 0.0001;
double _l4__out;
double _l5__out;
double _l6__out;
double _physical_model_average_frequency_error_calculation_dinv_sum__out = 0.5044645109216567;
double _physical_model_average_frequency_error_calculation_scale_const__out = 10000.0;
double _physical_model_gen___bus_1_b14__out = 2.919;
double _physical_model_gen___bus_1_b15__out = 6.685;
double _physical_model_gen___bus_1_d1inv__out = 4.444444444444445;
double _physical_model_gen___bus_1_integrator1__out;
double _physical_model_gen___bus_2_b24__out = 4.474;
double _physical_model_gen___bus_2_b26__out = 4.375;
double _physical_model_gen___bus_2_d2inv__out = 1.4727540500736376;
double _physical_model_gen___bus_2_integrator1__out;
double _physical_model_gen___bus_3_b35__out = 7.435;
double _physical_model_gen___bus_3_b36__out = 6.274;
double _physical_model_gen___bus_3_d3inv__out = 1.0526315789473684;
double _physical_model_gen___bus_3_integrator1__out;
double _physical_model_load___bus_4_b41__out = 2.919;
double _physical_model_load___bus_4_b42__out = 4.474;
double _physical_model_load___bus_4_d4inv__out = 80.0;
double _physical_model_load___bus_4_integrator1__out;
double _physical_model_load___bus_5_b51__out = 6.685;
double _physical_model_load___bus_5_b53__out = 7.435;
double _physical_model_load___bus_5_d5inv__out = 14.727540500736376;
double _physical_model_load___bus_5_integrator1__out;
double _physical_model_load___bus_6_b62__out = 4.375;
double _physical_model_load___bus_6_b63__out = 6.274;
double _physical_model_load___bus_6_d6inv__out = 20.876826722338205;
double _physical_model_load___bus_6_integrator1__out;
double _modbus_device1_comp_coil_in_out__out;
double _modbus_device1_comp_holding_in_out__out[3];
double _feedback_u_product1__out;
double _feedback_u_product2__out;
double _feedback_u_product3__out;
double _physical_model_average_frequency_error_calculation_sum2__out;
double _physical_model_gen___bus_1_sum3__out;
double _physical_model_gen___bus_2_sum2__out;
double _physical_model_load___bus_4_sum2__out;
double _physical_model_load___bus_4_sum3__out;
double _physical_model_gen___bus_1_sum2__out;
double _physical_model_gen___bus_3_sum3__out;
double _physical_model_load___bus_5_sum2__out;
double _physical_model_load___bus_5_sum3__out;
double _physical_model_gen___bus_2_sum3__out;
double _physical_model_gen___bus_3_sum2__out;
double _physical_model_load___bus_6_sum2__out;
double _physical_model_load___bus_6_sum3__out;

double _c_function1__U1;
double _c_function1__U2;
double _c_function1__U3;


double _c_function1__OU1;
double _c_function1__OU2;
double _c_function1__OU3;
double _physical_model_gen___bus_1_sin1__out;
double _physical_model_gen___bus_2_sin__out;
double _physical_model_load___bus_4_sin__out;
double _physical_model_load___bus_4_sin1__out;
double _physical_model_gen___bus_1_sin__out;
double _physical_model_gen___bus_3_sin1__out;
double _physical_model_load___bus_5_sin__out;
double _physical_model_load___bus_5_sin1__out;
double _physical_model_gen___bus_2_sin1__out;
double _physical_model_gen___bus_3_sin__out;
double _physical_model_load___bus_6_sin__out;
double _physical_model_load___bus_6_sin1__out;
double _physical_model_average_frequency_error_calculation_sum1__out;
double _physical_model_gen___bus_1_prod1__out;
double _physical_model_gen___bus_2_prod__out;
double _physical_model_load___bus_4_prod__out;
double _physical_model_load___bus_4_prod1__out;
double _physical_model_gen___bus_1_prod__out;
double _physical_model_gen___bus_3_prod1__out;
double _physical_model_load___bus_5_prod__out;
double _physical_model_load___bus_5_prod1__out;
double _physical_model_gen___bus_2_prod1__out;
double _physical_model_gen___bus_3_prod__out;
double _physical_model_load___bus_6_prod__out;
double _physical_model_load___bus_6_prod1__out;
double _physical_model_average_frequency_error_calculation_sum3__out;
double _physical_model_load___bus_4_sum1__out;
double _physical_model_gen___bus_1_sum1__out;
double _physical_model_load___bus_5_sum1__out;
double _physical_model_gen___bus_2_sum1__out;
double _physical_model_gen___bus_3_sum1__out;
double _physical_model_load___bus_6_sum1__out;
double _physical_model_average_frequency_error_calculation_product1__out;
double _physical_model_load___bus_4_sum4__out;
double _physical_model_gen___bus_1_sum4__out;
double _physical_model_load___bus_5_sum4__out;
double _physical_model_gen___bus_2_sum4__out;
double _physical_model_gen___bus_3_sum4__out;
double _physical_model_load___bus_6_sum4__out;
double _physical_model_average_frequency_error_calculation_product2__out;
double _physical_model_load___bus_4_prod2__out;
double _physical_model_gen___bus_1_prod2__out;
double _physical_model_load___bus_5_prod2__out;
double _physical_model_gen___bus_2_prod2__out;
double _physical_model_gen___bus_3_prod2__out;
double _physical_model_load___bus_6_prod2__out;
//@cmp.var.end

//@cmp.svar.start
// state variables
double _l4__state;
double _l5__state;
double _l6__state;
double _physical_model_gen___bus_1_integrator1__state;
double _physical_model_gen___bus_2_integrator1__state;
double _physical_model_gen___bus_3_integrator1__state;
double _physical_model_load___bus_4_integrator1__state;
double _physical_model_load___bus_5_integrator1__state;
double _physical_model_load___bus_6_integrator1__state;
double _c_function1__var1;
double _c_function1__var2;
double _c_function1__var3;
//@cmp.svar.end




// generated using template: virtual_hil/custom_functions.template---------------------------------
void ReInit_user_sp_cpu0_dev0() {
#if DEBUG_MODE
    printf("\n\rReInitTimer");
#endif
    //@cmp.init.block.start
    _l4__state = 0x0;
    _l5__state = 0x0;
    _l6__state = 0x0;
    _physical_model_gen___bus_1_integrator1__state = -0.052;
    _physical_model_gen___bus_2_integrator1__state = 0.05;
    _physical_model_gen___bus_3_integrator1__state = -0.05;
    _physical_model_load___bus_4_integrator1__state = -0.151;
    _physical_model_load___bus_5_integrator1__state = -0.14;
    _physical_model_load___bus_6_integrator1__state = -0.09481;
    HIL_OutAO(0x4008, 0.0f);
    HIL_OutAO(0x4009, 0.0f);
    HIL_OutAO(0x400a, 0.0f);
    HIL_OutAO(0x400b, 0.0f);
    HIL_OutAO(0x4011, 0.0f);
    HIL_OutAO(0x400c, 0.0f);
    HIL_OutAO(0x4012, 0.0f);
    HIL_OutAO(0x400d, 0.0f);
    HIL_OutAO(0x4013, 0.0f);
    HIL_OutAO(0x400e, 0.0f);
    HIL_OutAO(0x4014, 0.0f);
    HIL_OutAO(0x400f, 0.0f);
    HIL_OutAO(0x4015, 0.0f);
    HIL_OutAO(0x4010, 0.0f);
    HIL_OutAO(0x4016, 0.0f);
    HIL_OutAO(0x4000, 0.0f);
    HIL_OutAO(0x4001, 0.0f);
    HIL_OutAO(0x4002, 0.0f);
    HIL_OutAO(0x4005, 0.0f);
    HIL_OutAO(0x4006, 0.0f);
    HIL_OutAO(0x4007, 0.0f);
    HIL_OutAO(0x4017, 0.0f);
    HIL_OutAO(0x4018, 0.0f);
    HIL_OutAO(0x4019, 0.0f);
    HIL_OutAO(0x4004, 0.0f);
    HIL_OutAO(0x4003, 0.0f);
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
    // Generated from the component: Constant1
    // Generated from the component: Constant2
    // Generated from the component: Constant3
    // Generated from the component: Feedback U.Bus Split2
    _feedback_u_bus_split2__out = _modbus_device1_comp_holding_in_out__out[0];
    _feedback_u_bus_split2__out1 = _modbus_device1_comp_holding_in_out__out[1];
    _feedback_u_bus_split2__out2 = _modbus_device1_comp_holding_in_out__out[2];
    // Generated from the component: Feedback U.Constant1
    // Generated from the component: Feedback U.Constant2
    // Generated from the component: Feedback U.Constant3
    // Generated from the component: L4
    if (_l4__state < 30.0) {
        _l4__out = 1.15;
    } else {
        _l4__out = 1.2075;
    }
    // Generated from the component: L5
    if (_l5__state < 40.0) {
        _l5__out = 1.25;
    } else {
        _l5__out = 1.28;
    }
    // Generated from the component: L6
    if (_l6__state < 50.0) {
        _l6__out = 0.9;
    } else {
        _l6__out = 0.945;
    }
    // Generated from the component: Physical Model.Average Frequency Error Calculation.Dinv_Sum
    // Generated from the component: Physical Model.Average Frequency Error Calculation.scale_const
    // Generated from the component: Physical Model.Gen - Bus 1.B14
    // Generated from the component: Physical Model.Gen - Bus 1.B15
    // Generated from the component: Physical Model.Gen - Bus 1.D1Inv
    // Generated from the component: Physical Model.Gen - Bus 1.Integrator1
    _physical_model_gen___bus_1_integrator1__out = _physical_model_gen___bus_1_integrator1__state;
    // Generated from the component: Physical Model.Gen - Bus 2.B24
    // Generated from the component: Physical Model.Gen - Bus 2.B26
    // Generated from the component: Physical Model.Gen - Bus 2.D2Inv
    // Generated from the component: Physical Model.Gen - Bus 2.Integrator1
    _physical_model_gen___bus_2_integrator1__out = _physical_model_gen___bus_2_integrator1__state;
    // Generated from the component: Physical Model.Gen - Bus 3.B35
    // Generated from the component: Physical Model.Gen - Bus 3.B36
    // Generated from the component: Physical Model.Gen - Bus 3.D3Inv
    // Generated from the component: Physical Model.Gen - Bus 3.Integrator1
    _physical_model_gen___bus_3_integrator1__out = _physical_model_gen___bus_3_integrator1__state;
    // Generated from the component: Physical Model.Load - Bus 4.B41
    // Generated from the component: Physical Model.Load - Bus 4.B42
    // Generated from the component: Physical Model.Load - Bus 4.D4Inv
    // Generated from the component: Physical Model.Load - Bus 4.Integrator1
    _physical_model_load___bus_4_integrator1__out = _physical_model_load___bus_4_integrator1__state;
    // Generated from the component: Physical Model.Load - Bus 5.B51
    // Generated from the component: Physical Model.Load - Bus 5.B53
    // Generated from the component: Physical Model.Load - Bus 5.D5Inv
    // Generated from the component: Physical Model.Load - Bus 5.Integrator1
    _physical_model_load___bus_5_integrator1__out = _physical_model_load___bus_5_integrator1__state;
    // Generated from the component: Physical Model.Load - Bus 6.B62
    // Generated from the component: Physical Model.Load - Bus 6.B63
    // Generated from the component: Physical Model.Load - Bus 6.D6Inv
    // Generated from the component: Physical Model.Load - Bus 6.Integrator1
    _physical_model_load___bus_6_integrator1__out = _physical_model_load___bus_6_integrator1__state;
    // Generated from the component: Termination1
    // Generated from the component: ModBus Device1.comp_coil_in_out
    // Component not supported for this platform. Outputs are zeroed.
    _modbus_device1_comp_coil_in_out__out = 0;
    // Generated from the component: ModBus Device1.comp_discrete_in
    // Component not supported for this platform. Outputs are zeroed.
    // Generated from the component: ModBus Device1.comp_holding_in_out
    // Component not supported for this platform. Outputs are zeroed.
    _modbus_device1_comp_holding_in_out__out[0] = 0;
    _modbus_device1_comp_holding_in_out__out[1] = 0;
    _modbus_device1_comp_holding_in_out__out[2] = 0;
    // Generated from the component: Feedback U.Product1
    _feedback_u_product1__out = (_feedback_u_bus_split2__out * _feedback_u_constant1__out);
    // Generated from the component: Feedback U.Product2
    _feedback_u_product2__out = (_feedback_u_bus_split2__out1 * _feedback_u_constant2__out);
    // Generated from the component: Feedback U.Product3
    _feedback_u_product3__out = (_feedback_u_bus_split2__out2 * _feedback_u_constant3__out);
    // Generated from the component: Physical Model.Bus4 Load
    HIL_OutAO(0x4008, (float)_l4__out);
    // Generated from the component: Physical Model.Bus5 Load
    HIL_OutAO(0x4009, (float)_l5__out);
    // Generated from the component: Physical Model.Average Frequency Error Calculation.Sum2
    _physical_model_average_frequency_error_calculation_sum2__out = _l4__out + _l5__out + _l6__out;
    // Generated from the component: Physical Model.Bus6 Load
    HIL_OutAO(0x400a, (float)_l6__out);
    // Generated from the component: Physical Model.Gen - Bus 1.theta1
    HIL_OutAO(0x400b, (float)_physical_model_gen___bus_1_integrator1__out);
    // Generated from the component: Physical Model.theta1
    HIL_OutAO(0x4011, (float)_physical_model_gen___bus_1_integrator1__out);
    // Generated from the component: Physical Model.Gen - Bus 2.theta 2
    HIL_OutAO(0x400c, (float)_physical_model_gen___bus_2_integrator1__out);
    // Generated from the component: Physical Model.theta2
    HIL_OutAO(0x4012, (float)_physical_model_gen___bus_2_integrator1__out);
    // Generated from the component: Physical Model.Gen - Bus 3.theta3
    HIL_OutAO(0x400d, (float)_physical_model_gen___bus_3_integrator1__out);
    // Generated from the component: Physical Model.theta3
    HIL_OutAO(0x4013, (float)_physical_model_gen___bus_3_integrator1__out);
    // Generated from the component: Physical Model.Gen - Bus 1.Sum3
    _physical_model_gen___bus_1_sum3__out = _physical_model_gen___bus_1_integrator1__out - _physical_model_load___bus_4_integrator1__out;
    // Generated from the component: Physical Model.Gen - Bus 2.Sum2
    _physical_model_gen___bus_2_sum2__out = _physical_model_gen___bus_2_integrator1__out - _physical_model_load___bus_4_integrator1__out;
    // Generated from the component: Physical Model.Load - Bus 4.Sum2
    _physical_model_load___bus_4_sum2__out = _physical_model_load___bus_4_integrator1__out - _physical_model_gen___bus_1_integrator1__out;
    // Generated from the component: Physical Model.Load - Bus 4.Sum3
    _physical_model_load___bus_4_sum3__out = _physical_model_load___bus_4_integrator1__out - _physical_model_gen___bus_2_integrator1__out;
    // Generated from the component: Physical Model.Load - Bus 4.theta4
    HIL_OutAO(0x400e, (float)_physical_model_load___bus_4_integrator1__out);
    // Generated from the component: Physical Model.theta4
    HIL_OutAO(0x4014, (float)_physical_model_load___bus_4_integrator1__out);
    // Generated from the component: Physical Model.Gen - Bus 1.Sum2
    _physical_model_gen___bus_1_sum2__out = _physical_model_gen___bus_1_integrator1__out - _physical_model_load___bus_5_integrator1__out;
    // Generated from the component: Physical Model.Gen - Bus 3.Sum3
    _physical_model_gen___bus_3_sum3__out = _physical_model_gen___bus_3_integrator1__out - _physical_model_load___bus_5_integrator1__out;
    // Generated from the component: Physical Model.Load - Bus 5.Sum2
    _physical_model_load___bus_5_sum2__out = _physical_model_load___bus_5_integrator1__out - _physical_model_gen___bus_3_integrator1__out;
    // Generated from the component: Physical Model.Load - Bus 5.Sum3
    _physical_model_load___bus_5_sum3__out = _physical_model_load___bus_5_integrator1__out - _physical_model_gen___bus_1_integrator1__out;
    // Generated from the component: Physical Model.Load - Bus 5.theta5
    HIL_OutAO(0x400f, (float)_physical_model_load___bus_5_integrator1__out);
    // Generated from the component: Physical Model.theta5
    HIL_OutAO(0x4015, (float)_physical_model_load___bus_5_integrator1__out);
    // Generated from the component: Physical Model.Gen - Bus 2.Sum3
    _physical_model_gen___bus_2_sum3__out = _physical_model_gen___bus_2_integrator1__out - _physical_model_load___bus_6_integrator1__out;
    // Generated from the component: Physical Model.Gen - Bus 3.Sum2
    _physical_model_gen___bus_3_sum2__out = _physical_model_gen___bus_3_integrator1__out - _physical_model_load___bus_6_integrator1__out;
    // Generated from the component: Physical Model.Load - Bus 6.Sum2
    _physical_model_load___bus_6_sum2__out = _physical_model_load___bus_6_integrator1__out - _physical_model_gen___bus_3_integrator1__out;
    // Generated from the component: Physical Model.Load - Bus 6.Sum3
    _physical_model_load___bus_6_sum3__out = _physical_model_load___bus_6_integrator1__out - _physical_model_gen___bus_2_integrator1__out;
    // Generated from the component: Physical Model.Load - Bus 6.theta6
    HIL_OutAO(0x4010, (float)_physical_model_load___bus_6_integrator1__out);
    // Generated from the component: Physical Model.theta6
    HIL_OutAO(0x4016, (float)_physical_model_load___bus_6_integrator1__out);
    // Generated from the component: Feedback U.U 1
    HIL_OutAO(0x4000, (float)_feedback_u_product1__out);
    // Generated from the component: Feedback U.U 2
    HIL_OutAO(0x4001, (float)_feedback_u_product2__out);
    // Generated from the component: C function1
    _c_function1__U1 = _feedback_u_product1__out;
    _c_function1__U2 = _feedback_u_product2__out;
    _c_function1__U3 = _feedback_u_product3__out;
    if (_c_function1__U1 == 0)_c_function1__OU1 = 0.85;
    else _c_function1__OU1 = _c_function1__U1;
    if (_c_function1__U2 == 0)_c_function1__OU2 = 1.5;
    else _c_function1__OU2 = _c_function1__U2;
    if (_c_function1__U3 == 0)_c_function1__OU3 = 0.95;
    else _c_function1__OU3 = _c_function1__U3;
    // Generated from the component: Feedback U.U 3
    HIL_OutAO(0x4002, (float)_feedback_u_product3__out);
    // Generated from the component: Physical Model.Gen - Bus 1.Sin1
    _physical_model_gen___bus_1_sin1__out = sin(_physical_model_gen___bus_1_sum3__out);
    // Generated from the component: Physical Model.Gen - Bus 2.Sin
    _physical_model_gen___bus_2_sin__out = sin(_physical_model_gen___bus_2_sum2__out);
    // Generated from the component: Physical Model.Load - Bus 4.Sin
    _physical_model_load___bus_4_sin__out = sin(_physical_model_load___bus_4_sum2__out);
    // Generated from the component: Physical Model.Load - Bus 4.Sin1
    _physical_model_load___bus_4_sin1__out = sin(_physical_model_load___bus_4_sum3__out);
    // Generated from the component: Physical Model.Gen - Bus 1.Sin
    _physical_model_gen___bus_1_sin__out = sin(_physical_model_gen___bus_1_sum2__out);
    // Generated from the component: Physical Model.Gen - Bus 3.Sin1
    _physical_model_gen___bus_3_sin1__out = sin(_physical_model_gen___bus_3_sum3__out);
    // Generated from the component: Physical Model.Load - Bus 5.Sin
    _physical_model_load___bus_5_sin__out = sin(_physical_model_load___bus_5_sum2__out);
    // Generated from the component: Physical Model.Load - Bus 5.Sin1
    _physical_model_load___bus_5_sin1__out = sin(_physical_model_load___bus_5_sum3__out);
    // Generated from the component: Physical Model.Gen - Bus 2.Sin1
    _physical_model_gen___bus_2_sin1__out = sin(_physical_model_gen___bus_2_sum3__out);
    // Generated from the component: Physical Model.Gen - Bus 3.Sin
    _physical_model_gen___bus_3_sin__out = sin(_physical_model_gen___bus_3_sum2__out);
    // Generated from the component: Physical Model.Load - Bus 6.Sin
    _physical_model_load___bus_6_sin__out = sin(_physical_model_load___bus_6_sum2__out);
    // Generated from the component: Physical Model.Load - Bus 6.Sin1
    _physical_model_load___bus_6_sin1__out = sin(_physical_model_load___bus_6_sum3__out);
    // Generated from the component: Physical Model.Average Frequency Error Calculation.Sum1
    _physical_model_average_frequency_error_calculation_sum1__out = _c_function1__OU1 + _c_function1__OU2 + _c_function1__OU3;
    // Generated from the component: Physical Model.Average Frequency Error Calculation.U 1
    HIL_OutAO(0x4005, (float)_c_function1__OU1);
    // Generated from the component: Physical Model.Average Frequency Error Calculation.U 2
    HIL_OutAO(0x4006, (float)_c_function1__OU2);
    // Generated from the component: Physical Model.Average Frequency Error Calculation.U 3
    HIL_OutAO(0x4007, (float)_c_function1__OU3);
    // Generated from the component: u1
    HIL_OutAO(0x4017, (float)_c_function1__OU1);
    // Generated from the component: u2
    HIL_OutAO(0x4018, (float)_c_function1__OU2);
    // Generated from the component: u3
    HIL_OutAO(0x4019, (float)_c_function1__OU3);
    // Generated from the component: Physical Model.Gen - Bus 1.Prod1
    _physical_model_gen___bus_1_prod1__out = (_physical_model_gen___bus_1_sin1__out * _physical_model_gen___bus_1_b14__out);
    // Generated from the component: Physical Model.Gen - Bus 2.Prod
    _physical_model_gen___bus_2_prod__out = (_physical_model_gen___bus_2_sin__out * _physical_model_gen___bus_2_b24__out);
    // Generated from the component: Physical Model.Load - Bus 4.Prod
    _physical_model_load___bus_4_prod__out = (_physical_model_load___bus_4_sin__out * _physical_model_load___bus_4_b41__out);
    // Generated from the component: Physical Model.Load - Bus 4.Prod1
    _physical_model_load___bus_4_prod1__out = (_physical_model_load___bus_4_sin1__out * _physical_model_load___bus_4_b42__out);
    // Generated from the component: Physical Model.Gen - Bus 1.Prod
    _physical_model_gen___bus_1_prod__out = (_physical_model_gen___bus_1_sin__out * _physical_model_gen___bus_1_b15__out);
    // Generated from the component: Physical Model.Gen - Bus 3.Prod1
    _physical_model_gen___bus_3_prod1__out = (_physical_model_gen___bus_3_sin1__out * _physical_model_gen___bus_3_b35__out);
    // Generated from the component: Physical Model.Load - Bus 5.Prod
    _physical_model_load___bus_5_prod__out = (_physical_model_load___bus_5_sin__out * _physical_model_load___bus_5_b53__out);
    // Generated from the component: Physical Model.Load - Bus 5.Prod1
    _physical_model_load___bus_5_prod1__out = (_physical_model_load___bus_5_sin1__out * _physical_model_load___bus_5_b51__out);
    // Generated from the component: Physical Model.Gen - Bus 2.Prod1
    _physical_model_gen___bus_2_prod1__out = (_physical_model_gen___bus_2_sin1__out * _physical_model_gen___bus_2_b26__out);
    // Generated from the component: Physical Model.Gen - Bus 3.Prod
    _physical_model_gen___bus_3_prod__out = (_physical_model_gen___bus_3_sin__out * _physical_model_gen___bus_3_b36__out);
    // Generated from the component: Physical Model.Load - Bus 6.Prod
    _physical_model_load___bus_6_prod__out = (_physical_model_load___bus_6_sin__out * _physical_model_load___bus_6_b63__out);
    // Generated from the component: Physical Model.Load - Bus 6.Prod1
    _physical_model_load___bus_6_prod1__out = (_physical_model_load___bus_6_sin1__out * _physical_model_load___bus_6_b62__out);
    // Generated from the component: Physical Model.Average Frequency Error Calculation.Sum3
    _physical_model_average_frequency_error_calculation_sum3__out = _physical_model_average_frequency_error_calculation_sum1__out - _physical_model_average_frequency_error_calculation_sum2__out;
    // Generated from the component: Physical Model.Load - Bus 4.Sum1
    _physical_model_load___bus_4_sum1__out = _physical_model_load___bus_4_prod__out + _physical_model_load___bus_4_prod1__out;
    // Generated from the component: Physical Model.Gen - Bus 1.Sum1
    _physical_model_gen___bus_1_sum1__out = _physical_model_gen___bus_1_prod__out + _physical_model_gen___bus_1_prod1__out;
    // Generated from the component: Physical Model.Load - Bus 5.Sum1
    _physical_model_load___bus_5_sum1__out = _physical_model_load___bus_5_prod__out + _physical_model_load___bus_5_prod1__out;
    // Generated from the component: Physical Model.Gen - Bus 2.Sum1
    _physical_model_gen___bus_2_sum1__out = _physical_model_gen___bus_2_prod__out + _physical_model_gen___bus_2_prod1__out;
    // Generated from the component: Physical Model.Gen - Bus 3.Sum1
    _physical_model_gen___bus_3_sum1__out = _physical_model_gen___bus_3_prod__out + _physical_model_gen___bus_3_prod1__out;
    // Generated from the component: Physical Model.Load - Bus 6.Sum1
    _physical_model_load___bus_6_sum1__out = _physical_model_load___bus_6_prod__out + _physical_model_load___bus_6_prod1__out;
    // Generated from the component: Physical Model.Average Frequency Error Calculation.Product1
    _physical_model_average_frequency_error_calculation_product1__out = (_physical_model_average_frequency_error_calculation_sum3__out * _physical_model_average_frequency_error_calculation_dinv_sum__out);
    // Generated from the component: Physical Model.Load - Bus 4.Sum4
    _physical_model_load___bus_4_sum4__out =  - _l4__out - _physical_model_load___bus_4_sum1__out;
    // Generated from the component: Physical Model.Gen - Bus 1.Sum4
    _physical_model_gen___bus_1_sum4__out = _c_function1__OU1 - _physical_model_gen___bus_1_sum1__out;
    // Generated from the component: Physical Model.Load - Bus 5.Sum4
    _physical_model_load___bus_5_sum4__out =  - _l5__out - _physical_model_load___bus_5_sum1__out;
    // Generated from the component: Physical Model.Gen - Bus 2.Sum4
    _physical_model_gen___bus_2_sum4__out = _c_function1__OU2 - _physical_model_gen___bus_2_sum1__out;
    // Generated from the component: Physical Model.Gen - Bus 3.Sum4
    _physical_model_gen___bus_3_sum4__out = _c_function1__OU3 - _physical_model_gen___bus_3_sum1__out;
    // Generated from the component: Physical Model.Load - Bus 6.Sum4
    _physical_model_load___bus_6_sum4__out =  - _l6__out - _physical_model_load___bus_6_sum1__out;
    // Generated from the component: Physical Model.Average Frequency Error Calculation.Average Frequency Error
    HIL_OutAO(0x4004, (float)_physical_model_average_frequency_error_calculation_product1__out);
    // Generated from the component: Physical Model.Average Frequency Error Calculation.Product2
    _physical_model_average_frequency_error_calculation_product2__out = (_physical_model_average_frequency_error_calculation_product1__out * _physical_model_average_frequency_error_calculation_scale_const__out);
    // Generated from the component: Physical Model.Load - Bus 4.Prod2
    _physical_model_load___bus_4_prod2__out = (_physical_model_load___bus_4_sum4__out * _physical_model_load___bus_4_d4inv__out);
    // Generated from the component: Physical Model.Gen - Bus 1.Prod2
    _physical_model_gen___bus_1_prod2__out = (_physical_model_gen___bus_1_sum4__out * _physical_model_gen___bus_1_d1inv__out);
    // Generated from the component: Physical Model.Load - Bus 5.Prod2
    _physical_model_load___bus_5_prod2__out = (_physical_model_load___bus_5_sum4__out * _physical_model_load___bus_5_d5inv__out);
    // Generated from the component: Physical Model.Gen - Bus 2.Prod2
    _physical_model_gen___bus_2_prod2__out = (_physical_model_gen___bus_2_sum4__out * _physical_model_gen___bus_2_d2inv__out);
    // Generated from the component: Physical Model.Gen - Bus 3.Prod2
    _physical_model_gen___bus_3_prod2__out = (_physical_model_gen___bus_3_sum4__out * _physical_model_gen___bus_3_d3inv__out);
    // Generated from the component: Physical Model.Load - Bus 6.Prod2
    _physical_model_load___bus_6_prod2__out = (_physical_model_load___bus_6_sum4__out * _physical_model_load___bus_6_d6inv__out);
    // Generated from the component: IP Reg Out
    HIL_OutAO(0x4003, (float)_physical_model_average_frequency_error_calculation_product2__out);
    // Generated from the component: ModBus Device1.comp_reg_in
    // Component not supported for this platform. Outputs are zeroed.
    //@cmp.out.block.end
    //////////////////////////////////////////////////////////////////////////
    // Update block
    //////////////////////////////////////////////////////////////////////////
    //@cmp.update.block.start
    // Generated from the component: L4
    if (_l4__state <= 30.0)
        _l4__state += 0.0001;
    // Generated from the component: L5
    if (_l5__state <= 40.0)
        _l5__state += 0.0001;
    // Generated from the component: L6
    if (_l6__state <= 50.0)
        _l6__state += 0.0001;
    // Generated from the component: Physical Model.Gen - Bus 1.Integrator1
    _physical_model_gen___bus_1_integrator1__state += _physical_model_gen___bus_1_prod2__out * 0.0001;
    // Generated from the component: Physical Model.Gen - Bus 2.Integrator1
    _physical_model_gen___bus_2_integrator1__state += _physical_model_gen___bus_2_prod2__out * 0.0001;
    // Generated from the component: Physical Model.Gen - Bus 3.Integrator1
    _physical_model_gen___bus_3_integrator1__state += _physical_model_gen___bus_3_prod2__out * 0.0001;
    // Generated from the component: Physical Model.Load - Bus 4.Integrator1
    _physical_model_load___bus_4_integrator1__state += _physical_model_load___bus_4_prod2__out * 0.0001;
    // Generated from the component: Physical Model.Load - Bus 5.Integrator1
    _physical_model_load___bus_5_integrator1__state += _physical_model_load___bus_5_prod2__out * 0.0001;
    // Generated from the component: Physical Model.Load - Bus 6.Integrator1
    _physical_model_load___bus_6_integrator1__state += _physical_model_load___bus_6_prod2__out * 0.0001;
    // Generated from the component: C function1
    //@cmp.update.block.end
}
// ----------------------------------------------------------------------------------------
//-----------------------------------------------------------------------------------------