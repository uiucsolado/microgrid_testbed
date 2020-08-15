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
X_UnInt32 _grid_feeding_inverter__averaged__connect_gfl__out;
double _grid_feeding_inverter__averaged__constant1__out = 900.0;
double _grid_feeding_inverter__averaged__controller_outer_power_loop___inner_current_loop_dq_to_abc_o_ref__out = 0.0;
X_Int32 _grid_feeding_inverter__averaged__controller_outer_power_loop___inner_current_loop_inner_current_control_loop_constant1__out = 0;
X_Int32 _grid_feeding_inverter__averaged__controller_outer_power_loop___inner_current_loop_inner_current_control_loop_constant2__out = 0;
X_Int32 _grid_feeding_inverter__averaged__controller_outer_power_loop___inner_current_loop_inner_current_control_loop_constant3__out = 0;
X_Int32 _grid_feeding_inverter__averaged__controller_outer_power_loop___inner_current_loop_inner_current_control_loop_constant4__out = 0;
double _grid_feeding_inverter__averaged__controller_outer_power_loop___inner_current_loop_inner_current_control_loop_limit_zero__out = 1e-06;
double _grid_feeding_inverter__averaged__controller_outer_power_loop___inner_current_loop_inner_current_control_loop_one__out = 1e-06;
double _grid_feeding_inverter__averaged__controller_outer_power_loop___inner_current_loop_outer_power_loop_limit_zero__out = 1e-06;
double _grid_feeding_inverter__averaged__controller_outer_power_loop___inner_current_loop_outer_power_loop_one__out = 1e-06;
X_Int32 _grid_feeding_inverter__averaged__controller_pll_pll1_constant1__out = 0;
double _grid_feeding_inverter__averaged__controller_pll_unit_delay2__out;
double _grid_feeding_inverter__averaged__controller_pll_abc_to_qd_constant2__out = 2.0943951023931953;
double _grid_feeding_inverter__averaged__controller_pll_abc_to_qd_constant3__out = 2.0943951023931953;
double _grid_feeding_inverter__averaged__ea1_va1__out;
double _grid_feeding_inverter__averaged__eb1_va1__out;
double _grid_feeding_inverter__averaged__ec1_va1__out;
double _grid_feeding_inverter__averaged__ia1_ia1__out;
double _grid_feeding_inverter__averaged__ib1_ia1__out;
double _grid_feeding_inverter__averaged__ic1_ia1__out;
double _grid_feeding_inverter__averaged__va2_va1__out;
double _grid_feeding_inverter__averaged__vb2_va1__out;
double _grid_feeding_inverter__averaged__vc2_va1__out;
double _grid_feeding_inverter__averaged__xi_a1_ia1__out;
double _grid_feeding_inverter__averaged__xi_b1_ia1__out;
double _grid_feeding_inverter__averaged__xi_c1_ia1__out;
double _pref__out;
double _qref__out;
double _sinusoidal_source1__out;
double _sinusoidal_source2__out;
double _sinusoidal_source3__out;
float _grid_feeding_inverter__averaged__gcb_on__tmp;
X_UnInt32 _grid_feeding_inverter__averaged__logical_operator3__out;
double _grid_feeding_inverter__averaged__gain1__out;
double _grid_feeding_inverter__averaged__controller_outer_power_loop___inner_current_loop_inner_current_control_loop_comparator1__out;
double _grid_feeding_inverter__averaged__controller_pll_abc_to_qd_trigonometric_function3__out;
double _grid_feeding_inverter__averaged__controller_pll_abc_to_qd_trigonometric_function5__out;
double _grid_feeding_inverter__averaged__controller_pll_abc_to_qd_sum2__out;
double _grid_feeding_inverter__averaged__controller_pll_abc_to_qd_sum4__out;
double _grid_feeding_inverter__averaged__controller_current_abc_to_dq4_abc_to_dq1_abc_to_alpha_beta__alpha;
double _grid_feeding_inverter__averaged__controller_current_abc_to_dq4_abc_to_dq1_abc_to_alpha_beta__beta;
double _grid_feeding_inverter__averaged__controller_current_abc_to_dq4_abc_to_dq1_abc_to_alpha_beta__gamma;
double _grid_feeding_inverter__averaged__controller_current_abc_to_dq_abc_to_dq1_abc_to_alpha_beta__alpha;
double _grid_feeding_inverter__averaged__controller_current_abc_to_dq_abc_to_dq1_abc_to_alpha_beta__beta;
double _grid_feeding_inverter__averaged__controller_current_abc_to_dq_abc_to_dq1_abc_to_alpha_beta__gamma;
double _grid_feeding_inverter__averaged__controller_outer_power_loop___inner_current_loop_gain7__out;
double _grid_feeding_inverter__averaged__controller_outer_power_loop___inner_current_loop_gain8__out;
double _gain3__out;
double _gain5__out;
double _gain4__out;
float _grid_feeding_inverter__averaged__gcb_off__tmp;
double _grid_feeding_inverter__averaged__controller_outer_power_loop___inner_current_loop_inner_current_control_loop_signal_switch1__out;
double _grid_feeding_inverter__averaged__controller_pll_abc_to_qd_product1__out;
double _grid_feeding_inverter__averaged__controller_pll_abc_to_qd_product4__out;
double _grid_feeding_inverter__averaged__controller_pll_abc_to_qd_trigonometric_function2__out;
double _grid_feeding_inverter__averaged__controller_pll_abc_to_qd_trigonometric_function6__out;
double _grid_feeding_inverter__averaged__controller_pll_abc_to_qd_trigonometric_function4__out;
double _grid_feeding_inverter__averaged__controller_pll_abc_to_qd_trigonometric_function7__out;
double _grid_feeding_inverter__averaged__controller_outer_power_loop___inner_current_loop_inner_current_control_loop_gain5__out;
double _grid_feeding_inverter__averaged__controller_pll_abc_to_qd_product2__out;
double _grid_feeding_inverter__averaged__controller_pll_abc_to_qd_product5__out;
double _grid_feeding_inverter__averaged__controller_pll_abc_to_qd_product3__out;
double _grid_feeding_inverter__averaged__controller_pll_abc_to_qd_product6__out;
double _grid_feeding_inverter__averaged__controller_pll_abc_to_qd_sum3__out;
double _grid_feeding_inverter__averaged__controller_pll_abc_to_qd_sum5__out;
double _grid_feeding_inverter__averaged__controller_pll_abc_to_qd_gain1__out;
double _grid_feeding_inverter__averaged__controller_pll_abc_to_qd_gain2__out;
double _grid_feeding_inverter__averaged__controller_gain5__out;
double _grid_feeding_inverter__averaged__controller_pll_gain6__out;
double _grid_feeding_inverter__averaged__controller_outer_power_loop___inner_current_loop_outer_power_loop_product4__out;
double _grid_feeding_inverter__averaged__controller_outer_power_loop___inner_current_loop_outer_power_loop_product5__out;
double _grid_feeding_inverter__averaged__controller_outer_power_loop___inner_current_loop_squared_vt2_product1__out;
double _grid_feeding_inverter__averaged__controller_gain8__out;
double _grid_feeding_inverter__averaged__controller_pll_pll1_signal_switch2__out;
double _grid_feeding_inverter__averaged__controller_outer_power_loop___inner_current_loop_outer_power_loop_product3__out;
double _grid_feeding_inverter__averaged__controller_outer_power_loop___inner_current_loop_outer_power_loop_product6__out;
double _grid_feeding_inverter__averaged__controller_outer_power_loop___inner_current_loop_squared_vt2_product2__out;
double _grid_feeding_inverter__averaged__controller_pll_pll1_pid_controller1__out;
double _grid_feeding_inverter__averaged__controller_pll_pll1_pid_controller1__pi_reg_out_int;
double _grid_feeding_inverter__averaged__controller_outer_power_loop___inner_current_loop_outer_power_loop_sum3__out;
double _grid_feeding_inverter__averaged__controller_outer_power_loop___inner_current_loop_outer_power_loop_sum4__out;
double _grid_feeding_inverter__averaged__controller_outer_power_loop___inner_current_loop_squared_vt2_sum3__out;
double _grid_feeding_inverter__averaged__controller_gain1__out;
double _grid_feeding_inverter__averaged__controller_outer_power_loop___inner_current_loop_inner_current_control_loop_gain8__out;
double _grid_feeding_inverter__averaged__controller_outer_power_loop___inner_current_loop_inner_current_control_loop_gain9__out;
double _grid_feeding_inverter__averaged__controller_pll_pll1_c_function1__in;


double _grid_feeding_inverter__averaged__controller_pll_pll1_c_function1__out;
double _grid_feeding_inverter__averaged__controller_outer_power_loop___inner_current_loop_mathematical_function1__out;
double _grid_feeding_inverter__averaged__controller_outer_power_loop___inner_current_loop_outer_power_loop_comparator1__out;

double _grid_feeding_inverter__averaged__controller_pll_pll1_confine_phase__in;


double _grid_feeding_inverter__averaged__controller_pll_pll1_confine_phase__out;
double _grid_feeding_inverter__averaged__controller_outer_power_loop___inner_current_loop_gain9__out;
double _grid_feeding_inverter__averaged__controller_outer_power_loop___inner_current_loop_outer_power_loop_signal_switch1__out;
double _grid_feeding_inverter__averaged__controller_current_abc_to_dq_abc_to_dq1_alpha_beta_to_dq__d;
double _grid_feeding_inverter__averaged__controller_current_abc_to_dq_abc_to_dq1_alpha_beta_to_dq__q;
double _grid_feeding_inverter__averaged__controller_current_abc_to_dq_abc_to_dq1_alpha_beta_to_dq__k1;
double _grid_feeding_inverter__averaged__controller_current_abc_to_dq_abc_to_dq1_alpha_beta_to_dq__k2;
double _grid_feeding_inverter__averaged__controller_current_abc_to_dq4_abc_to_dq1_alpha_beta_to_dq__d;
double _grid_feeding_inverter__averaged__controller_current_abc_to_dq4_abc_to_dq1_alpha_beta_to_dq__q;
double _grid_feeding_inverter__averaged__controller_current_abc_to_dq4_abc_to_dq1_alpha_beta_to_dq__k1;
double _grid_feeding_inverter__averaged__controller_current_abc_to_dq4_abc_to_dq1_alpha_beta_to_dq__k2;
double _grid_feeding_inverter__averaged__controller_outer_power_loop___inner_current_loop_outer_power_loop_product1__out;
double _grid_feeding_inverter__averaged__controller_outer_power_loop___inner_current_loop_outer_power_loop_product2__out;
double _grid_feeding_inverter__averaged__controller_gain6__out;
double _grid_feeding_inverter__averaged__controller_gain7__out;
double _grid_feeding_inverter__averaged__controller_gain11__out;
double _grid_feeding_inverter__averaged__controller_gain12__out;
double _grid_feeding_inverter__averaged__controller_outer_power_loop___inner_current_loop_inner_current_control_loop_gain7__out;
double _grid_feeding_inverter__averaged__controller_outer_power_loop___inner_current_loop_inner_current_control_loop_sum8__out;
double _grid_feeding_inverter__averaged__controller_product10__out;
double _grid_feeding_inverter__averaged__controller_product111__out;
double _grid_feeding_inverter__averaged__controller_outer_power_loop___inner_current_loop_inner_current_control_loop_gain6__out;
double _grid_feeding_inverter__averaged__controller_outer_power_loop___inner_current_loop_inner_current_control_loop_sum9__out;
double _grid_feeding_inverter__averaged__controller_product12__out;
double _grid_feeding_inverter__averaged__controller_product13__out;
double _grid_feeding_inverter__averaged__controller_outer_power_loop___inner_current_loop_inner_current_control_loop_product2__out;
double _grid_feeding_inverter__averaged__controller_outer_power_loop___inner_current_loop_inner_current_control_loop_signal_switch2__out;
double _grid_feeding_inverter__averaged__controller_outer_power_loop___inner_current_loop_inner_current_control_loop_product1__out;
double _grid_feeding_inverter__averaged__controller_outer_power_loop___inner_current_loop_inner_current_control_loop_signal_switch3__out;
double _grid_feeding_inverter__averaged__controller_sum2__out;
double _grid_feeding_inverter__averaged__controller_sum1__out;
double _grid_feeding_inverter__averaged__controller_outer_power_loop___inner_current_loop_inner_current_control_loop_sum6__out;
double _grid_feeding_inverter__averaged__controller_outer_power_loop___inner_current_loop_inner_current_control_loop_pid_controller1__out;
double _grid_feeding_inverter__averaged__controller_outer_power_loop___inner_current_loop_inner_current_control_loop_pid_controller1__pi_reg_out_int;
double _grid_feeding_inverter__averaged__controller_outer_power_loop___inner_current_loop_inner_current_control_loop_sum5__out;
double _grid_feeding_inverter__averaged__controller_outer_power_loop___inner_current_loop_inner_current_control_loop_pid_controller2__out;
double _grid_feeding_inverter__averaged__controller_outer_power_loop___inner_current_loop_inner_current_control_loop_pid_controller2__pi_reg_out_int;
double _grid_feeding_inverter__averaged__controller_gain14__out;
double _grid_feeding_inverter__averaged__controller_gain15__out;
double _grid_feeding_inverter__averaged__controller_outer_power_loop___inner_current_loop_inner_current_control_loop_product4__out;
double _grid_feeding_inverter__averaged__controller_outer_power_loop___inner_current_loop_inner_current_control_loop_product3__out;
double _grid_feeding_inverter__averaged__controller_outer_power_loop___inner_current_loop_inner_current_control_loop_sum7__out;
double _grid_feeding_inverter__averaged__controller_outer_power_loop___inner_current_loop_inner_current_control_loop_sum3__out;
double _grid_feeding_inverter__averaged__controller_outer_power_loop___inner_current_loop_inner_current_control_loop_signal_switch5__out;
double _grid_feeding_inverter__averaged__controller_outer_power_loop___inner_current_loop_inner_current_control_loop_signal_switch4__out;
double _grid_feeding_inverter__averaged__controller_outer_power_loop___inner_current_loop_gain6__out;
double _grid_feeding_inverter__averaged__controller_outer_power_loop___inner_current_loop_gain5__out;
double _grid_feeding_inverter__averaged__controller_outer_power_loop___inner_current_loop_dq_to_abc_dq_to_abc1_dq_to_alpha_beta__alpha;
double _grid_feeding_inverter__averaged__controller_outer_power_loop___inner_current_loop_dq_to_abc_dq_to_abc1_dq_to_alpha_beta__beta;
double _grid_feeding_inverter__averaged__controller_outer_power_loop___inner_current_loop_dq_to_abc_dq_to_abc1_dq_to_alpha_beta__k1;
double _grid_feeding_inverter__averaged__controller_outer_power_loop___inner_current_loop_dq_to_abc_dq_to_abc1_dq_to_alpha_beta__k2;
double _grid_feeding_inverter__averaged__controller_outer_power_loop___inner_current_loop_dq_to_abc_dq_to_abc1_alpha_beta_to_abc__A;
double _grid_feeding_inverter__averaged__controller_outer_power_loop___inner_current_loop_dq_to_abc_dq_to_abc1_alpha_beta_to_abc__B;
double _grid_feeding_inverter__averaged__controller_outer_power_loop___inner_current_loop_dq_to_abc_dq_to_abc1_alpha_beta_to_abc__C;
double _grid_feeding_inverter__averaged__controller_bus_join1__out[3];
double _grid_feeding_inverter__averaged__product1__out[3];
double _grid_feeding_inverter__averaged__bus_split1__out;
double _grid_feeding_inverter__averaged__bus_split1__out1;
double _grid_feeding_inverter__averaged__bus_split1__out2;     //@cmp.var.end

//@cmp.svar.start
// state variables
double _grid_feeding_inverter__averaged__controller_pll_unit_delay2__state;
double _sinusoidal_source1__current_phase;
double _sinusoidal_source2__current_phase;
double _sinusoidal_source3__current_phase;
double _grid_feeding_inverter__averaged__controller_outer_power_loop___inner_current_loop_inner_current_control_loop_comparator1__state;
double _grid_feeding_inverter__averaged__controller_pll_pll1_pid_controller1__integrator_state;
X_UnInt32 _grid_feeding_inverter__averaged__controller_pll_pll1_pid_controller1__av_active;
double _grid_feeding_inverter__averaged__controller_pll_pll1_pid_controller1__filter_state;
double _grid_feeding_inverter__averaged__controller_pll_pll1_c_function1__var;
double _grid_feeding_inverter__averaged__controller_outer_power_loop___inner_current_loop_outer_power_loop_comparator1__state;
double _grid_feeding_inverter__averaged__controller_pll_pll1_confine_phase__x;
double _grid_feeding_inverter__averaged__controller_pll_pll1_confine_phase__floor_in;
double _grid_feeding_inverter__averaged__controller_outer_power_loop___inner_current_loop_inner_current_control_loop_pid_controller1__integrator_state;
X_UnInt32 _grid_feeding_inverter__averaged__controller_outer_power_loop___inner_current_loop_inner_current_control_loop_pid_controller1__av_active;
double _grid_feeding_inverter__averaged__controller_outer_power_loop___inner_current_loop_inner_current_control_loop_pid_controller1__filter_state;
double _grid_feeding_inverter__averaged__controller_outer_power_loop___inner_current_loop_inner_current_control_loop_pid_controller2__integrator_state;
X_UnInt32 _grid_feeding_inverter__averaged__controller_outer_power_loop___inner_current_loop_inner_current_control_loop_pid_controller2__av_active;
double _grid_feeding_inverter__averaged__controller_outer_power_loop___inner_current_loop_inner_current_control_loop_pid_controller2__filter_state;
//@cmp.svar.end





// generated using template: virtual_hil/custom_functions.template---------------------------------
void ReInit_user_sp_cpu0_dev0() {
#if DEBUG_MODE
    printf("\n\rReInitTimer");
#endif
    //@cmp.init.block.start
    _grid_feeding_inverter__averaged__controller_pll_unit_delay2__state = 0.0;
    _sinusoidal_source1__current_phase = 0.0 / 360.0f;
    _sinusoidal_source2__current_phase = -120.0 / 360.0f;
    _sinusoidal_source3__current_phase = 120.0 / 360.0f;
    _grid_feeding_inverter__averaged__controller_outer_power_loop___inner_current_loop_inner_current_control_loop_comparator1__state = 0.0f;
    HIL_OutFloat(137101315, 0.0);
    HIL_OutFloat(137101316, 0.0);
    HIL_OutFloat(137101317, 0.0);
    HIL_OutAO(0x4004, 0.0f);
    HIL_OutAO(0x4005, 0.0f);
    _grid_feeding_inverter__averaged__controller_pll_pll1_pid_controller1__integrator_state =  376.99111843077515;
    _grid_feeding_inverter__averaged__controller_pll_pll1_pid_controller1__filter_state =  0.0;
    _grid_feeding_inverter__averaged__controller_pll_pll1_c_function1__var = 0;
    _grid_feeding_inverter__averaged__controller_outer_power_loop___inner_current_loop_outer_power_loop_comparator1__state = 0.0f;
    HIL_OutAO(0x4007, 0.0f);
    _grid_feeding_inverter__averaged__controller_pll_pll1_confine_phase__floor_in = 0;
    HIL_OutAO(0x4002, 0.0f);
    _grid_feeding_inverter__averaged__controller_outer_power_loop___inner_current_loop_inner_current_control_loop_pid_controller1__integrator_state =  0.0;
    _grid_feeding_inverter__averaged__controller_outer_power_loop___inner_current_loop_inner_current_control_loop_pid_controller1__filter_state =  0.0;
    HIL_OutAO(0x4000, 0.0f);
    _grid_feeding_inverter__averaged__controller_outer_power_loop___inner_current_loop_inner_current_control_loop_pid_controller2__integrator_state =  0.0;
    _grid_feeding_inverter__averaged__controller_outer_power_loop___inner_current_loop_inner_current_control_loop_pid_controller2__filter_state =  0.0;
    HIL_OutAO(0x4001, 0.0f);
    HIL_OutAO(0x4006, 0.0f);
    HIL_OutAO(0x4003, 0.0f);
    HIL_OutFloat(137101312, 0.0);
    HIL_OutFloat(137101313, 0.0);
    HIL_OutFloat(137101314, 0.0);
    //@cmp.init.block.end
}

void ReInit_sp_scope_user_sp_cpu0_dev0() {
    // initialise SP Scope buffer pointer
}

void init_fmu_objects_cpu0_dev0(void) {
    return;
}


void terminate_fmu_objects_cpu0_dev0(void) {
    return;
}
// generated using template:generic_macros.template-----------------------------------------
/*********************** Macros (Inline Functions) Definitions ***************************/

// ----------------------------------------------------------------------------------------

#ifndef MAX
#define MAX(value, limit) ((value > limit) ? value : limit)
#endif
#ifndef MIN
#define MIN(value, limit) ((value < limit) ? value : limit)
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
    // Generated from the component: Grid feeding inverter (averaged).Connect GFL
    _grid_feeding_inverter__averaged__connect_gfl__out = XIo_InInt32(0x55000100);
    // Generated from the component: Grid feeding inverter (averaged).Constant1
    // Generated from the component: Grid feeding inverter (averaged).Controller.Outer Power Loop + Inner Current Loop.dq to abc.o_ref
    // Generated from the component: Grid feeding inverter (averaged).Controller.Outer Power Loop + Inner Current Loop.inner current control loop.Constant1
    // Generated from the component: Grid feeding inverter (averaged).Controller.Outer Power Loop + Inner Current Loop.inner current control loop.Constant2
    // Generated from the component: Grid feeding inverter (averaged).Controller.Outer Power Loop + Inner Current Loop.inner current control loop.Constant3
    // Generated from the component: Grid feeding inverter (averaged).Controller.Outer Power Loop + Inner Current Loop.inner current control loop.Constant4
    // Generated from the component: Grid feeding inverter (averaged).Controller.Outer Power Loop + Inner Current Loop.inner current control loop.Limit_zero
    // Generated from the component: Grid feeding inverter (averaged).Controller.Outer Power Loop + Inner Current Loop.inner current control loop.one
    // Generated from the component: Grid feeding inverter (averaged).Controller.Outer Power Loop + Inner Current Loop.outer power loop.Limit_zero
    // Generated from the component: Grid feeding inverter (averaged).Controller.Outer Power Loop + Inner Current Loop.outer power loop.one
    // Generated from the component: Grid feeding inverter (averaged).Controller.PLL.PLL1.Constant1
    // Generated from the component: Grid feeding inverter (averaged).Controller.PLL.Unit Delay2
    _grid_feeding_inverter__averaged__controller_pll_unit_delay2__out = _grid_feeding_inverter__averaged__controller_pll_unit_delay2__state;
    // Generated from the component: Grid feeding inverter (averaged).Controller.PLL.abc to qd.Constant2
    // Generated from the component: Grid feeding inverter (averaged).Controller.PLL.abc to qd.Constant3
    // Generated from the component: Grid feeding inverter (averaged).Ea1.Va1
    _grid_feeding_inverter__averaged__ea1_va1__out = (HIL_InFloat(0xc80000 + 0xb));
    // Generated from the component: Grid feeding inverter (averaged).Eb1.Va1
    _grid_feeding_inverter__averaged__eb1_va1__out = (HIL_InFloat(0xc80000 + 0xc));
    // Generated from the component: Grid feeding inverter (averaged).Ec1.Va1
    _grid_feeding_inverter__averaged__ec1_va1__out = (HIL_InFloat(0xc80000 + 0xd));
    // Generated from the component: Grid feeding inverter (averaged).Ia1.Ia1
    _grid_feeding_inverter__averaged__ia1_ia1__out = (HIL_InFloat(0xc80000 + 0x14));
    // Generated from the component: Grid feeding inverter (averaged).Ib1.Ia1
    _grid_feeding_inverter__averaged__ib1_ia1__out = (HIL_InFloat(0xc80000 + 0x15));
    // Generated from the component: Grid feeding inverter (averaged).Ic1.Ia1
    _grid_feeding_inverter__averaged__ic1_ia1__out = (HIL_InFloat(0xc80000 + 0x16));
    // Generated from the component: Grid feeding inverter (averaged).Va2.Va1
    _grid_feeding_inverter__averaged__va2_va1__out = (HIL_InFloat(0xc80000 + 0xe));
    // Generated from the component: Grid feeding inverter (averaged).Vb2.Va1
    _grid_feeding_inverter__averaged__vb2_va1__out = (HIL_InFloat(0xc80000 + 0xf));
    // Generated from the component: Grid feeding inverter (averaged).Vc2.Va1
    _grid_feeding_inverter__averaged__vc2_va1__out = (HIL_InFloat(0xc80000 + 0x10));
    // Generated from the component: Grid feeding inverter (averaged).Xi_a1.Ia1
    _grid_feeding_inverter__averaged__xi_a1_ia1__out = (HIL_InFloat(0xc80000 + 0x17));
    // Generated from the component: Grid feeding inverter (averaged).Xi_b1.Ia1
    _grid_feeding_inverter__averaged__xi_b1_ia1__out = (HIL_InFloat(0xc80000 + 0x18));
    // Generated from the component: Grid feeding inverter (averaged).Xi_c1.Ia1
    _grid_feeding_inverter__averaged__xi_c1_ia1__out = (HIL_InFloat(0xc80000 + 0x19));
    // Generated from the component: Pref
    _pref__out = XIo_InFloat(0x55000104);
    // Generated from the component: Qref
    _qref__out = XIo_InFloat(0x55000108);
    // Generated from the component: Sinusoidal Source1
    _sinusoidal_source1__out = (1.0 * sin(2.0f * M_PI * _sinusoidal_source1__current_phase) + 0.0);
    // Generated from the component: Sinusoidal Source2
    _sinusoidal_source2__out = (1.0 * sin(2.0f * M_PI * _sinusoidal_source2__current_phase) + 0.0);
    // Generated from the component: Sinusoidal Source3
    _sinusoidal_source3__out = (1.0 * sin(2.0f * M_PI * _sinusoidal_source3__current_phase) + 0.0);
    // Generated from the component: Grid feeding inverter (averaged).GCB ON
    HIL_OutInt32(0xf00401, _grid_feeding_inverter__averaged__connect_gfl__out != 0x0);
    // Generated from the component: Grid feeding inverter (averaged).Logical operator3
    _grid_feeding_inverter__averaged__logical_operator3__out = !_grid_feeding_inverter__averaged__connect_gfl__out;
    // Generated from the component: Grid feeding inverter (averaged).S1.CTC_Wrapper
    if (_grid_feeding_inverter__averaged__connect_gfl__out == 0x0) {
        HIL_OutInt32(0x8240480, 0x0);
    }
    else {
        HIL_OutInt32(0x8240480, 0x1);
    }
    // Generated from the component: Grid feeding inverter (averaged).Gain1
    _grid_feeding_inverter__averaged__gain1__out = 0.5 * _grid_feeding_inverter__averaged__constant1__out;
    // Generated from the component: Grid feeding inverter (averaged).Controller.Outer Power Loop + Inner Current Loop.inner current control loop.Comparator1
    if (_grid_feeding_inverter__averaged__constant1__out < _grid_feeding_inverter__averaged__controller_outer_power_loop___inner_current_loop_inner_current_control_loop_limit_zero__out) {
        _grid_feeding_inverter__averaged__controller_outer_power_loop___inner_current_loop_inner_current_control_loop_comparator1__out = 0;
    } else if (_grid_feeding_inverter__averaged__constant1__out > _grid_feeding_inverter__averaged__controller_outer_power_loop___inner_current_loop_inner_current_control_loop_limit_zero__out) {
        _grid_feeding_inverter__averaged__controller_outer_power_loop___inner_current_loop_inner_current_control_loop_comparator1__out = 1;
    } else {
        _grid_feeding_inverter__averaged__controller_outer_power_loop___inner_current_loop_inner_current_control_loop_comparator1__out = _grid_feeding_inverter__averaged__controller_outer_power_loop___inner_current_loop_inner_current_control_loop_comparator1__state;
    }
    // Generated from the component: Grid feeding inverter (averaged).Controller.PLL.abc to qd.Trigonometric function3
    _grid_feeding_inverter__averaged__controller_pll_abc_to_qd_trigonometric_function3__out = cos(_grid_feeding_inverter__averaged__controller_pll_unit_delay2__out);
    // Generated from the component: Grid feeding inverter (averaged).Controller.PLL.abc to qd.Trigonometric function5
    _grid_feeding_inverter__averaged__controller_pll_abc_to_qd_trigonometric_function5__out = sin(_grid_feeding_inverter__averaged__controller_pll_unit_delay2__out);
    // Generated from the component: Grid feeding inverter (averaged).Controller.PLL.abc to qd.Sum2
    _grid_feeding_inverter__averaged__controller_pll_abc_to_qd_sum2__out = _grid_feeding_inverter__averaged__controller_pll_unit_delay2__out - _grid_feeding_inverter__averaged__controller_pll_abc_to_qd_constant2__out;
    // Generated from the component: Grid feeding inverter (averaged).Controller.PLL.abc to qd.Sum4
    _grid_feeding_inverter__averaged__controller_pll_abc_to_qd_sum4__out = _grid_feeding_inverter__averaged__controller_pll_unit_delay2__out + _grid_feeding_inverter__averaged__controller_pll_abc_to_qd_constant3__out;
    // Generated from the component: Grid feeding inverter (averaged).Controller.Current_abc_to_dq4.abc to dq1.abc to alpha beta
    _grid_feeding_inverter__averaged__controller_current_abc_to_dq4_abc_to_dq1_abc_to_alpha_beta__alpha = (2.0 * _grid_feeding_inverter__averaged__ia1_ia1__out - _grid_feeding_inverter__averaged__ib1_ia1__out - _grid_feeding_inverter__averaged__ic1_ia1__out) * 0.3333333333333333;
    _grid_feeding_inverter__averaged__controller_current_abc_to_dq4_abc_to_dq1_abc_to_alpha_beta__beta = (_grid_feeding_inverter__averaged__ib1_ia1__out - _grid_feeding_inverter__averaged__ic1_ia1__out) * 0.5773502691896258;
    _grid_feeding_inverter__averaged__controller_current_abc_to_dq4_abc_to_dq1_abc_to_alpha_beta__gamma = (_grid_feeding_inverter__averaged__ia1_ia1__out + _grid_feeding_inverter__averaged__ib1_ia1__out + _grid_feeding_inverter__averaged__ic1_ia1__out) * 0.3333333333333333;
    // Generated from the component: Grid feeding inverter (averaged).Controller.Current_abc_to_dq.abc to dq1.abc to alpha beta
    _grid_feeding_inverter__averaged__controller_current_abc_to_dq_abc_to_dq1_abc_to_alpha_beta__alpha = (2.0 * _grid_feeding_inverter__averaged__xi_a1_ia1__out - _grid_feeding_inverter__averaged__xi_b1_ia1__out - _grid_feeding_inverter__averaged__xi_c1_ia1__out) * 0.3333333333333333;
    _grid_feeding_inverter__averaged__controller_current_abc_to_dq_abc_to_dq1_abc_to_alpha_beta__beta = (_grid_feeding_inverter__averaged__xi_b1_ia1__out - _grid_feeding_inverter__averaged__xi_c1_ia1__out) * 0.5773502691896258;
    _grid_feeding_inverter__averaged__controller_current_abc_to_dq_abc_to_dq1_abc_to_alpha_beta__gamma = (_grid_feeding_inverter__averaged__xi_a1_ia1__out + _grid_feeding_inverter__averaged__xi_b1_ia1__out + _grid_feeding_inverter__averaged__xi_c1_ia1__out) * 0.3333333333333333;
    // Generated from the component: Grid feeding inverter (averaged).Controller.Outer Power Loop + Inner Current Loop.Gain7
    _grid_feeding_inverter__averaged__controller_outer_power_loop___inner_current_loop_gain7__out = 6.451612903225807e-08 * _pref__out;
    // Generated from the component: Grid feeding inverter (averaged).Controller.Outer Power Loop + Inner Current Loop.Gain8
    _grid_feeding_inverter__averaged__controller_outer_power_loop___inner_current_loop_gain8__out = 6.451612903225807e-08 * _qref__out;
    // Generated from the component: Gain3
    _gain3__out = 391.91835884530855 * _sinusoidal_source1__out;
    // Generated from the component: Gain5
    _gain5__out = 391.91835884530855 * _sinusoidal_source2__out;
    // Generated from the component: Gain4
    _gain4__out = 391.91835884530855 * _sinusoidal_source3__out;
    // Generated from the component: Grid feeding inverter (averaged).GCB OFF
    HIL_OutInt32(0xf00400, _grid_feeding_inverter__averaged__logical_operator3__out != 0x0);
    // Generated from the component: Grid feeding inverter (averaged).Controller.Outer Power Loop + Inner Current Loop.inner current control loop.Signal switch1
    _grid_feeding_inverter__averaged__controller_outer_power_loop___inner_current_loop_inner_current_control_loop_signal_switch1__out = (_grid_feeding_inverter__averaged__controller_outer_power_loop___inner_current_loop_inner_current_control_loop_comparator1__out < 0.5f) ? _grid_feeding_inverter__averaged__controller_outer_power_loop___inner_current_loop_inner_current_control_loop_one__out : _grid_feeding_inverter__averaged__constant1__out;
    // Generated from the component: Grid feeding inverter (averaged).Controller.PLL.abc to qd.Product1
    _grid_feeding_inverter__averaged__controller_pll_abc_to_qd_product1__out = (_grid_feeding_inverter__averaged__ea1_va1__out * _grid_feeding_inverter__averaged__controller_pll_abc_to_qd_trigonometric_function3__out);
    // Generated from the component: Grid feeding inverter (averaged).Controller.PLL.abc to qd.Product4
    _grid_feeding_inverter__averaged__controller_pll_abc_to_qd_product4__out = (_grid_feeding_inverter__averaged__ea1_va1__out * _grid_feeding_inverter__averaged__controller_pll_abc_to_qd_trigonometric_function5__out);
    // Generated from the component: Grid feeding inverter (averaged).Controller.PLL.abc to qd.Trigonometric function2
    _grid_feeding_inverter__averaged__controller_pll_abc_to_qd_trigonometric_function2__out = cos(_grid_feeding_inverter__averaged__controller_pll_abc_to_qd_sum2__out);
    // Generated from the component: Grid feeding inverter (averaged).Controller.PLL.abc to qd.Trigonometric function6
    _grid_feeding_inverter__averaged__controller_pll_abc_to_qd_trigonometric_function6__out = sin(_grid_feeding_inverter__averaged__controller_pll_abc_to_qd_sum2__out);
    // Generated from the component: Grid feeding inverter (averaged).Controller.PLL.abc to qd.Trigonometric function4
    _grid_feeding_inverter__averaged__controller_pll_abc_to_qd_trigonometric_function4__out = cos(_grid_feeding_inverter__averaged__controller_pll_abc_to_qd_sum4__out);
    // Generated from the component: Grid feeding inverter (averaged).Controller.PLL.abc to qd.Trigonometric function7
    _grid_feeding_inverter__averaged__controller_pll_abc_to_qd_trigonometric_function7__out = sin(_grid_feeding_inverter__averaged__controller_pll_abc_to_qd_sum4__out);
    // Generated from the component: Grid feeding inverter (averaged).Controller.Current_abc_to_dq4.Termination1
    // Generated from the component: Grid feeding inverter (averaged).Controller.Current_abc_to_dq.Termination1
    // Generated from the component: Va_G.Vs1
    HIL_OutFloat(137101315, (float) _gain3__out);
    // Generated from the component: Vb_G.Vs1
    HIL_OutFloat(137101316, (float) _gain5__out);
    // Generated from the component: Vc_G.Vs1
    HIL_OutFloat(137101317, (float) _gain4__out);
    // Generated from the component: Grid feeding inverter (averaged).Controller.Outer Power Loop + Inner Current Loop.inner current control loop.Gain5
    _grid_feeding_inverter__averaged__controller_outer_power_loop___inner_current_loop_inner_current_control_loop_gain5__out = 0.5 * _grid_feeding_inverter__averaged__controller_outer_power_loop___inner_current_loop_inner_current_control_loop_signal_switch1__out;
    // Generated from the component: Grid feeding inverter (averaged).Controller.PLL.abc to qd.Product2
    _grid_feeding_inverter__averaged__controller_pll_abc_to_qd_product2__out = (_grid_feeding_inverter__averaged__eb1_va1__out * _grid_feeding_inverter__averaged__controller_pll_abc_to_qd_trigonometric_function2__out);
    // Generated from the component: Grid feeding inverter (averaged).Controller.PLL.abc to qd.Product5
    _grid_feeding_inverter__averaged__controller_pll_abc_to_qd_product5__out = (_grid_feeding_inverter__averaged__eb1_va1__out * _grid_feeding_inverter__averaged__controller_pll_abc_to_qd_trigonometric_function6__out);
    // Generated from the component: Grid feeding inverter (averaged).Controller.PLL.abc to qd.Product3
    _grid_feeding_inverter__averaged__controller_pll_abc_to_qd_product3__out = (_grid_feeding_inverter__averaged__ec1_va1__out * _grid_feeding_inverter__averaged__controller_pll_abc_to_qd_trigonometric_function4__out);
    // Generated from the component: Grid feeding inverter (averaged).Controller.PLL.abc to qd.Product6
    _grid_feeding_inverter__averaged__controller_pll_abc_to_qd_product6__out = (_grid_feeding_inverter__averaged__ec1_va1__out * _grid_feeding_inverter__averaged__controller_pll_abc_to_qd_trigonometric_function7__out);
    // Generated from the component: Grid feeding inverter (averaged).Controller.PLL.abc to qd.Sum3
    _grid_feeding_inverter__averaged__controller_pll_abc_to_qd_sum3__out = _grid_feeding_inverter__averaged__controller_pll_abc_to_qd_product1__out + _grid_feeding_inverter__averaged__controller_pll_abc_to_qd_product2__out + _grid_feeding_inverter__averaged__controller_pll_abc_to_qd_product3__out;
    // Generated from the component: Grid feeding inverter (averaged).Controller.PLL.abc to qd.Sum5
    _grid_feeding_inverter__averaged__controller_pll_abc_to_qd_sum5__out = _grid_feeding_inverter__averaged__controller_pll_abc_to_qd_product4__out + _grid_feeding_inverter__averaged__controller_pll_abc_to_qd_product5__out + _grid_feeding_inverter__averaged__controller_pll_abc_to_qd_product6__out;
    // Generated from the component: Grid feeding inverter (averaged).Controller.PLL.abc to qd.Gain1
    _grid_feeding_inverter__averaged__controller_pll_abc_to_qd_gain1__out = 0.6666666666666666 * _grid_feeding_inverter__averaged__controller_pll_abc_to_qd_sum3__out;
    // Generated from the component: Grid feeding inverter (averaged).Controller.PLL.abc to qd.Gain2
    _grid_feeding_inverter__averaged__controller_pll_abc_to_qd_gain2__out = 0.6666666666666666 * _grid_feeding_inverter__averaged__controller_pll_abc_to_qd_sum5__out;
    // Generated from the component: Grid feeding inverter (averaged).Controller.Gain5
    _grid_feeding_inverter__averaged__controller_gain5__out = 0.0025515518153991436 * _grid_feeding_inverter__averaged__controller_pll_abc_to_qd_gain1__out;
    // Generated from the component: Grid feeding inverter (averaged).Controller.PLL.E_d
    HIL_OutAO(0x4004, (float)_grid_feeding_inverter__averaged__controller_pll_abc_to_qd_gain1__out);
    // Generated from the component: Grid feeding inverter (averaged).Controller.PLL.Gain6
    _grid_feeding_inverter__averaged__controller_pll_gain6__out = -0.0025515518153991436 * _grid_feeding_inverter__averaged__controller_pll_abc_to_qd_gain2__out;
    // Generated from the component: Grid feeding inverter (averaged).Controller.Outer Power Loop + Inner Current Loop.outer power loop.Product4
    _grid_feeding_inverter__averaged__controller_outer_power_loop___inner_current_loop_outer_power_loop_product4__out = (_grid_feeding_inverter__averaged__controller_gain5__out * _grid_feeding_inverter__averaged__controller_outer_power_loop___inner_current_loop_gain8__out);
    // Generated from the component: Grid feeding inverter (averaged).Controller.Outer Power Loop + Inner Current Loop.outer power loop.Product5
    _grid_feeding_inverter__averaged__controller_outer_power_loop___inner_current_loop_outer_power_loop_product5__out = (_grid_feeding_inverter__averaged__controller_outer_power_loop___inner_current_loop_gain7__out * _grid_feeding_inverter__averaged__controller_gain5__out);
    // Generated from the component: Grid feeding inverter (averaged).Controller.Outer Power Loop + Inner Current Loop.squared_Vt2.Product1
    _grid_feeding_inverter__averaged__controller_outer_power_loop___inner_current_loop_squared_vt2_product1__out = (_grid_feeding_inverter__averaged__controller_gain5__out * _grid_feeding_inverter__averaged__controller_gain5__out);
    // Generated from the component: Grid feeding inverter (averaged).Controller.Gain8
    _grid_feeding_inverter__averaged__controller_gain8__out = 0.0025515518153991436 * _grid_feeding_inverter__averaged__controller_pll_gain6__out;
    // Generated from the component: Grid feeding inverter (averaged).Controller.PLL.E_q
    HIL_OutAO(0x4005, (float)_grid_feeding_inverter__averaged__controller_pll_gain6__out);
    // Generated from the component: Grid feeding inverter (averaged).Controller.PLL.PLL1.Signal switch2
    _grid_feeding_inverter__averaged__controller_pll_pll1_signal_switch2__out = (_grid_feeding_inverter__averaged__connect_gfl__out > 0.5) ? _grid_feeding_inverter__averaged__controller_pll_gain6__out : _grid_feeding_inverter__averaged__controller_pll_pll1_constant1__out;
    // Generated from the component: Grid feeding inverter (averaged).Controller.Outer Power Loop + Inner Current Loop.outer power loop.Product3
    _grid_feeding_inverter__averaged__controller_outer_power_loop___inner_current_loop_outer_power_loop_product3__out = (_grid_feeding_inverter__averaged__controller_gain8__out * _grid_feeding_inverter__averaged__controller_outer_power_loop___inner_current_loop_gain7__out);
    // Generated from the component: Grid feeding inverter (averaged).Controller.Outer Power Loop + Inner Current Loop.outer power loop.Product6
    _grid_feeding_inverter__averaged__controller_outer_power_loop___inner_current_loop_outer_power_loop_product6__out = (_grid_feeding_inverter__averaged__controller_outer_power_loop___inner_current_loop_gain8__out * _grid_feeding_inverter__averaged__controller_gain8__out);
    // Generated from the component: Grid feeding inverter (averaged).Controller.Outer Power Loop + Inner Current Loop.squared_Vt2.Product2
    _grid_feeding_inverter__averaged__controller_outer_power_loop___inner_current_loop_squared_vt2_product2__out = (_grid_feeding_inverter__averaged__controller_gain8__out * _grid_feeding_inverter__averaged__controller_gain8__out);
    // Generated from the component: Grid feeding inverter (averaged).Controller.PLL.PLL1.PID controller1
    _grid_feeding_inverter__averaged__controller_pll_pll1_pid_controller1__pi_reg_out_int = _grid_feeding_inverter__averaged__controller_pll_pll1_pid_controller1__integrator_state + 5.0 * _grid_feeding_inverter__averaged__controller_pll_pll1_signal_switch2__out;
    if (_grid_feeding_inverter__averaged__controller_pll_pll1_pid_controller1__pi_reg_out_int < 358.1415625092364)
        _grid_feeding_inverter__averaged__controller_pll_pll1_pid_controller1__av_active = 1;
    else if (_grid_feeding_inverter__averaged__controller_pll_pll1_pid_controller1__pi_reg_out_int > 395.84067435231395)
        _grid_feeding_inverter__averaged__controller_pll_pll1_pid_controller1__av_active = 1;
    else
        _grid_feeding_inverter__averaged__controller_pll_pll1_pid_controller1__av_active = 0;
    _grid_feeding_inverter__averaged__controller_pll_pll1_pid_controller1__out = MIN(MAX(_grid_feeding_inverter__averaged__controller_pll_pll1_pid_controller1__pi_reg_out_int, 358.1415625092364), 395.84067435231395);
    // Generated from the component: Grid feeding inverter (averaged).Controller.Outer Power Loop + Inner Current Loop.outer power loop.Sum3
    _grid_feeding_inverter__averaged__controller_outer_power_loop___inner_current_loop_outer_power_loop_sum3__out = _grid_feeding_inverter__averaged__controller_outer_power_loop___inner_current_loop_outer_power_loop_product3__out - _grid_feeding_inverter__averaged__controller_outer_power_loop___inner_current_loop_outer_power_loop_product4__out;
    // Generated from the component: Grid feeding inverter (averaged).Controller.Outer Power Loop + Inner Current Loop.outer power loop.Sum4
    _grid_feeding_inverter__averaged__controller_outer_power_loop___inner_current_loop_outer_power_loop_sum4__out = _grid_feeding_inverter__averaged__controller_outer_power_loop___inner_current_loop_outer_power_loop_product5__out + _grid_feeding_inverter__averaged__controller_outer_power_loop___inner_current_loop_outer_power_loop_product6__out;
    // Generated from the component: Grid feeding inverter (averaged).Controller.Outer Power Loop + Inner Current Loop.squared_Vt2.Sum3
    _grid_feeding_inverter__averaged__controller_outer_power_loop___inner_current_loop_squared_vt2_sum3__out = _grid_feeding_inverter__averaged__controller_outer_power_loop___inner_current_loop_squared_vt2_product1__out + _grid_feeding_inverter__averaged__controller_outer_power_loop___inner_current_loop_squared_vt2_product2__out;
    // Generated from the component: Grid feeding inverter (averaged).Controller.Gain1
    _grid_feeding_inverter__averaged__controller_gain1__out = 0.15915494309189535 * _grid_feeding_inverter__averaged__controller_pll_pll1_pid_controller1__out;
    // Generated from the component: Grid feeding inverter (averaged).Controller.Outer Power Loop + Inner Current Loop.inner current control loop.Gain8
    _grid_feeding_inverter__averaged__controller_outer_power_loop___inner_current_loop_inner_current_control_loop_gain8__out = 0.0026525823848649226 * _grid_feeding_inverter__averaged__controller_pll_pll1_pid_controller1__out;
    // Generated from the component: Grid feeding inverter (averaged).Controller.Outer Power Loop + Inner Current Loop.inner current control loop.Gain9
    _grid_feeding_inverter__averaged__controller_outer_power_loop___inner_current_loop_inner_current_control_loop_gain9__out = 0.0026525823848649226 * _grid_feeding_inverter__averaged__controller_pll_pll1_pid_controller1__out;
    // Generated from the component: Grid feeding inverter (averaged).Controller.PLL.PLL1.C function1
    _grid_feeding_inverter__averaged__controller_pll_pll1_c_function1__in = _grid_feeding_inverter__averaged__controller_pll_pll1_pid_controller1__out;
    _grid_feeding_inverter__averaged__controller_pll_pll1_c_function1__out = _grid_feeding_inverter__averaged__controller_pll_pll1_c_function1__var;
    // Generated from the component: Grid feeding inverter (averaged).Controller.Outer Power Loop + Inner Current Loop.Mathematical function1
    _grid_feeding_inverter__averaged__controller_outer_power_loop___inner_current_loop_mathematical_function1__out = sqrt(_grid_feeding_inverter__averaged__controller_outer_power_loop___inner_current_loop_squared_vt2_sum3__out);
    // Generated from the component: Grid feeding inverter (averaged).Controller.Outer Power Loop + Inner Current Loop.outer power loop.Comparator1
    if (_grid_feeding_inverter__averaged__controller_outer_power_loop___inner_current_loop_squared_vt2_sum3__out < _grid_feeding_inverter__averaged__controller_outer_power_loop___inner_current_loop_outer_power_loop_limit_zero__out) {
        _grid_feeding_inverter__averaged__controller_outer_power_loop___inner_current_loop_outer_power_loop_comparator1__out = 0;
    } else if (_grid_feeding_inverter__averaged__controller_outer_power_loop___inner_current_loop_squared_vt2_sum3__out > _grid_feeding_inverter__averaged__controller_outer_power_loop___inner_current_loop_outer_power_loop_limit_zero__out) {
        _grid_feeding_inverter__averaged__controller_outer_power_loop___inner_current_loop_outer_power_loop_comparator1__out = 1;
    } else {
        _grid_feeding_inverter__averaged__controller_outer_power_loop___inner_current_loop_outer_power_loop_comparator1__out = _grid_feeding_inverter__averaged__controller_outer_power_loop___inner_current_loop_outer_power_loop_comparator1__state;
    }
    // Generated from the component: Grid feeding inverter (averaged).Controller.f1
    HIL_OutAO(0x4007, (float)_grid_feeding_inverter__averaged__controller_gain1__out);
    // Generated from the component: Grid feeding inverter (averaged).Controller.PLL.PLL1.confine phase
    _grid_feeding_inverter__averaged__controller_pll_pll1_confine_phase__in = _grid_feeding_inverter__averaged__controller_pll_pll1_c_function1__out;
    _grid_feeding_inverter__averaged__controller_pll_pll1_confine_phase__x = _grid_feeding_inverter__averaged__controller_pll_pll1_confine_phase__in / 6.283185307179586;
    _grid_feeding_inverter__averaged__controller_pll_pll1_confine_phase__floor_in = floor(_grid_feeding_inverter__averaged__controller_pll_pll1_confine_phase__x);
    _grid_feeding_inverter__averaged__controller_pll_pll1_confine_phase__out = _grid_feeding_inverter__averaged__controller_pll_pll1_confine_phase__in - (6.283185307179586 * _grid_feeding_inverter__averaged__controller_pll_pll1_confine_phase__floor_in);
    // Generated from the component: Grid feeding inverter (averaged).Controller.Outer Power Loop + Inner Current Loop.Gain9
    _grid_feeding_inverter__averaged__controller_outer_power_loop___inner_current_loop_gain9__out = 480.0 * _grid_feeding_inverter__averaged__controller_outer_power_loop___inner_current_loop_mathematical_function1__out;
    // Generated from the component: Grid feeding inverter (averaged).Controller.Outer Power Loop + Inner Current Loop.outer power loop.Signal switch1
    _grid_feeding_inverter__averaged__controller_outer_power_loop___inner_current_loop_outer_power_loop_signal_switch1__out = (_grid_feeding_inverter__averaged__controller_outer_power_loop___inner_current_loop_outer_power_loop_comparator1__out < 0.5f) ? _grid_feeding_inverter__averaged__controller_outer_power_loop___inner_current_loop_outer_power_loop_one__out : _grid_feeding_inverter__averaged__controller_outer_power_loop___inner_current_loop_squared_vt2_sum3__out;
    // Generated from the component: Grid feeding inverter (averaged).Controller.Current_abc_to_dq.abc to dq1.alpha beta to dq
    _grid_feeding_inverter__averaged__controller_current_abc_to_dq_abc_to_dq1_alpha_beta_to_dq__k1 = cos(_grid_feeding_inverter__averaged__controller_pll_pll1_confine_phase__out);
    _grid_feeding_inverter__averaged__controller_current_abc_to_dq_abc_to_dq1_alpha_beta_to_dq__k2 = sin(_grid_feeding_inverter__averaged__controller_pll_pll1_confine_phase__out);
    _grid_feeding_inverter__averaged__controller_current_abc_to_dq_abc_to_dq1_alpha_beta_to_dq__d = _grid_feeding_inverter__averaged__controller_current_abc_to_dq_abc_to_dq1_alpha_beta_to_dq__k2 * _grid_feeding_inverter__averaged__controller_current_abc_to_dq_abc_to_dq1_abc_to_alpha_beta__alpha - _grid_feeding_inverter__averaged__controller_current_abc_to_dq_abc_to_dq1_alpha_beta_to_dq__k1 * _grid_feeding_inverter__averaged__controller_current_abc_to_dq_abc_to_dq1_abc_to_alpha_beta__beta;
    _grid_feeding_inverter__averaged__controller_current_abc_to_dq_abc_to_dq1_alpha_beta_to_dq__q = _grid_feeding_inverter__averaged__controller_current_abc_to_dq_abc_to_dq1_alpha_beta_to_dq__k1 * _grid_feeding_inverter__averaged__controller_current_abc_to_dq_abc_to_dq1_abc_to_alpha_beta__alpha + _grid_feeding_inverter__averaged__controller_current_abc_to_dq_abc_to_dq1_alpha_beta_to_dq__k2 * _grid_feeding_inverter__averaged__controller_current_abc_to_dq_abc_to_dq1_abc_to_alpha_beta__beta;
    // Generated from the component: Grid feeding inverter (averaged).Controller.Current_abc_to_dq4.abc to dq1.alpha beta to dq
    _grid_feeding_inverter__averaged__controller_current_abc_to_dq4_abc_to_dq1_alpha_beta_to_dq__k1 = cos(_grid_feeding_inverter__averaged__controller_pll_pll1_confine_phase__out);
    _grid_feeding_inverter__averaged__controller_current_abc_to_dq4_abc_to_dq1_alpha_beta_to_dq__k2 = sin(_grid_feeding_inverter__averaged__controller_pll_pll1_confine_phase__out);
    _grid_feeding_inverter__averaged__controller_current_abc_to_dq4_abc_to_dq1_alpha_beta_to_dq__d = _grid_feeding_inverter__averaged__controller_current_abc_to_dq4_abc_to_dq1_alpha_beta_to_dq__k2 * _grid_feeding_inverter__averaged__controller_current_abc_to_dq4_abc_to_dq1_abc_to_alpha_beta__alpha - _grid_feeding_inverter__averaged__controller_current_abc_to_dq4_abc_to_dq1_alpha_beta_to_dq__k1 * _grid_feeding_inverter__averaged__controller_current_abc_to_dq4_abc_to_dq1_abc_to_alpha_beta__beta;
    _grid_feeding_inverter__averaged__controller_current_abc_to_dq4_abc_to_dq1_alpha_beta_to_dq__q = _grid_feeding_inverter__averaged__controller_current_abc_to_dq4_abc_to_dq1_alpha_beta_to_dq__k1 * _grid_feeding_inverter__averaged__controller_current_abc_to_dq4_abc_to_dq1_abc_to_alpha_beta__alpha + _grid_feeding_inverter__averaged__controller_current_abc_to_dq4_abc_to_dq1_alpha_beta_to_dq__k2 * _grid_feeding_inverter__averaged__controller_current_abc_to_dq4_abc_to_dq1_abc_to_alpha_beta__beta;
    // Generated from the component: Grid feeding inverter (averaged).Controller.Outer Power Loop + Inner Current Loop.|E|
    HIL_OutAO(0x4002, (float)_grid_feeding_inverter__averaged__controller_outer_power_loop___inner_current_loop_gain9__out);
    // Generated from the component: Grid feeding inverter (averaged).Controller.Outer Power Loop + Inner Current Loop.outer power loop.Product1
    _grid_feeding_inverter__averaged__controller_outer_power_loop___inner_current_loop_outer_power_loop_product1__out = (_grid_feeding_inverter__averaged__controller_outer_power_loop___inner_current_loop_outer_power_loop_sum3__out) * 1.0 / (_grid_feeding_inverter__averaged__controller_outer_power_loop___inner_current_loop_outer_power_loop_signal_switch1__out);
    // Generated from the component: Grid feeding inverter (averaged).Controller.Outer Power Loop + Inner Current Loop.outer power loop.Product2
    _grid_feeding_inverter__averaged__controller_outer_power_loop___inner_current_loop_outer_power_loop_product2__out = (_grid_feeding_inverter__averaged__controller_outer_power_loop___inner_current_loop_outer_power_loop_sum4__out) * 1.0 / (_grid_feeding_inverter__averaged__controller_outer_power_loop___inner_current_loop_outer_power_loop_signal_switch1__out);
    // Generated from the component: Grid feeding inverter (averaged).Controller.Gain6
    _grid_feeding_inverter__averaged__controller_gain6__out = 3.792758311406212e-05 * _grid_feeding_inverter__averaged__controller_current_abc_to_dq_abc_to_dq1_alpha_beta_to_dq__d;
    // Generated from the component: Grid feeding inverter (averaged).Controller.Gain7
    _grid_feeding_inverter__averaged__controller_gain7__out = 3.792758311406212e-05 * _grid_feeding_inverter__averaged__controller_current_abc_to_dq_abc_to_dq1_alpha_beta_to_dq__q;
    // Generated from the component: Grid feeding inverter (averaged).Controller.Gain11
    _grid_feeding_inverter__averaged__controller_gain11__out = 3.792758311406212e-05 * _grid_feeding_inverter__averaged__controller_current_abc_to_dq4_abc_to_dq1_alpha_beta_to_dq__d;
    // Generated from the component: Grid feeding inverter (averaged).Controller.Gain12
    _grid_feeding_inverter__averaged__controller_gain12__out = 3.792758311406212e-05 * _grid_feeding_inverter__averaged__controller_current_abc_to_dq4_abc_to_dq1_alpha_beta_to_dq__q;
    // Generated from the component: Grid feeding inverter (averaged).Controller.Outer Power Loop + Inner Current Loop.inner current control loop.Gain7
    _grid_feeding_inverter__averaged__controller_outer_power_loop___inner_current_loop_inner_current_control_loop_gain7__out = 0.17753270985129815 * _grid_feeding_inverter__averaged__controller_gain6__out;
    // Generated from the component: Grid feeding inverter (averaged).Controller.Outer Power Loop + Inner Current Loop.inner current control loop.Sum8
    _grid_feeding_inverter__averaged__controller_outer_power_loop___inner_current_loop_inner_current_control_loop_sum8__out = _grid_feeding_inverter__averaged__controller_outer_power_loop___inner_current_loop_outer_power_loop_product2__out - _grid_feeding_inverter__averaged__controller_gain6__out;
    // Generated from the component: Grid feeding inverter (averaged).Controller.Product10
    _grid_feeding_inverter__averaged__controller_product10__out = (_grid_feeding_inverter__averaged__controller_gain6__out * _grid_feeding_inverter__averaged__controller_gain8__out);
    // Generated from the component: Grid feeding inverter (averaged).Controller.Product111
    _grid_feeding_inverter__averaged__controller_product111__out = (_grid_feeding_inverter__averaged__controller_gain5__out * _grid_feeding_inverter__averaged__controller_gain6__out);
    // Generated from the component: Grid feeding inverter (averaged).Controller.Outer Power Loop + Inner Current Loop.inner current control loop.Gain6
    _grid_feeding_inverter__averaged__controller_outer_power_loop___inner_current_loop_inner_current_control_loop_gain6__out = 0.17753270985129815 * _grid_feeding_inverter__averaged__controller_gain7__out;
    // Generated from the component: Grid feeding inverter (averaged).Controller.Outer Power Loop + Inner Current Loop.inner current control loop.Sum9
    _grid_feeding_inverter__averaged__controller_outer_power_loop___inner_current_loop_inner_current_control_loop_sum9__out = _grid_feeding_inverter__averaged__controller_outer_power_loop___inner_current_loop_outer_power_loop_product1__out - _grid_feeding_inverter__averaged__controller_gain7__out;
    // Generated from the component: Grid feeding inverter (averaged).Controller.Product12
    _grid_feeding_inverter__averaged__controller_product12__out = (_grid_feeding_inverter__averaged__controller_gain5__out * _grid_feeding_inverter__averaged__controller_gain7__out);
    // Generated from the component: Grid feeding inverter (averaged).Controller.Product13
    _grid_feeding_inverter__averaged__controller_product13__out = (_grid_feeding_inverter__averaged__controller_gain8__out * _grid_feeding_inverter__averaged__controller_gain7__out);
    // Generated from the component: Grid feeding inverter (averaged).Controller.Outer Power Loop + Inner Current Loop.inner current control loop.Product2
    _grid_feeding_inverter__averaged__controller_outer_power_loop___inner_current_loop_inner_current_control_loop_product2__out = (_grid_feeding_inverter__averaged__controller_outer_power_loop___inner_current_loop_inner_current_control_loop_gain8__out * _grid_feeding_inverter__averaged__controller_outer_power_loop___inner_current_loop_inner_current_control_loop_gain7__out);
    // Generated from the component: Grid feeding inverter (averaged).Controller.Outer Power Loop + Inner Current Loop.inner current control loop.Signal switch2
    _grid_feeding_inverter__averaged__controller_outer_power_loop___inner_current_loop_inner_current_control_loop_signal_switch2__out = (_grid_feeding_inverter__averaged__connect_gfl__out > 0.5) ? _grid_feeding_inverter__averaged__controller_outer_power_loop___inner_current_loop_inner_current_control_loop_sum8__out : _grid_feeding_inverter__averaged__controller_outer_power_loop___inner_current_loop_inner_current_control_loop_constant1__out;
    // Generated from the component: Grid feeding inverter (averaged).Controller.Outer Power Loop + Inner Current Loop.inner current control loop.Product1
    _grid_feeding_inverter__averaged__controller_outer_power_loop___inner_current_loop_inner_current_control_loop_product1__out = (_grid_feeding_inverter__averaged__controller_outer_power_loop___inner_current_loop_inner_current_control_loop_gain9__out * _grid_feeding_inverter__averaged__controller_outer_power_loop___inner_current_loop_inner_current_control_loop_gain6__out);
    // Generated from the component: Grid feeding inverter (averaged).Controller.Outer Power Loop + Inner Current Loop.inner current control loop.Signal switch3
    _grid_feeding_inverter__averaged__controller_outer_power_loop___inner_current_loop_inner_current_control_loop_signal_switch3__out = (_grid_feeding_inverter__averaged__connect_gfl__out > 0.5) ? _grid_feeding_inverter__averaged__controller_outer_power_loop___inner_current_loop_inner_current_control_loop_sum9__out : _grid_feeding_inverter__averaged__controller_outer_power_loop___inner_current_loop_inner_current_control_loop_constant2__out;
    // Generated from the component: Grid feeding inverter (averaged).Controller.Sum2
    _grid_feeding_inverter__averaged__controller_sum2__out = _grid_feeding_inverter__averaged__controller_product10__out - _grid_feeding_inverter__averaged__controller_product12__out;
    // Generated from the component: Grid feeding inverter (averaged).Controller.Sum1
    _grid_feeding_inverter__averaged__controller_sum1__out = _grid_feeding_inverter__averaged__controller_product111__out + _grid_feeding_inverter__averaged__controller_product13__out;
    // Generated from the component: Grid feeding inverter (averaged).Controller.Outer Power Loop + Inner Current Loop.inner current control loop.Sum6
    _grid_feeding_inverter__averaged__controller_outer_power_loop___inner_current_loop_inner_current_control_loop_sum6__out = _grid_feeding_inverter__averaged__controller_gain8__out + _grid_feeding_inverter__averaged__controller_outer_power_loop___inner_current_loop_inner_current_control_loop_product2__out;
    // Generated from the component: Grid feeding inverter (averaged).Controller.Outer Power Loop + Inner Current Loop.inner current control loop.PID controller1
    _grid_feeding_inverter__averaged__controller_outer_power_loop___inner_current_loop_inner_current_control_loop_pid_controller1__pi_reg_out_int = _grid_feeding_inverter__averaged__controller_outer_power_loop___inner_current_loop_inner_current_control_loop_pid_controller1__integrator_state + 0.007 * _grid_feeding_inverter__averaged__controller_outer_power_loop___inner_current_loop_inner_current_control_loop_signal_switch2__out;
    if (_grid_feeding_inverter__averaged__controller_outer_power_loop___inner_current_loop_inner_current_control_loop_pid_controller1__pi_reg_out_int < -1.0)
        _grid_feeding_inverter__averaged__controller_outer_power_loop___inner_current_loop_inner_current_control_loop_pid_controller1__av_active = 1;
    else if (_grid_feeding_inverter__averaged__controller_outer_power_loop___inner_current_loop_inner_current_control_loop_pid_controller1__pi_reg_out_int > 1.0)
        _grid_feeding_inverter__averaged__controller_outer_power_loop___inner_current_loop_inner_current_control_loop_pid_controller1__av_active = 1;
    else
        _grid_feeding_inverter__averaged__controller_outer_power_loop___inner_current_loop_inner_current_control_loop_pid_controller1__av_active = 0;
    _grid_feeding_inverter__averaged__controller_outer_power_loop___inner_current_loop_inner_current_control_loop_pid_controller1__out = MIN(MAX(_grid_feeding_inverter__averaged__controller_outer_power_loop___inner_current_loop_inner_current_control_loop_pid_controller1__pi_reg_out_int, -1.0), 1.0);
    // Generated from the component: Grid feeding inverter (averaged).Controller.Outer Power Loop + Inner Current Loop.inner current control loop.Xi_d_ERR
    HIL_OutAO(0x4000, (float)_grid_feeding_inverter__averaged__controller_outer_power_loop___inner_current_loop_inner_current_control_loop_signal_switch2__out);
    // Generated from the component: Grid feeding inverter (averaged).Controller.Outer Power Loop + Inner Current Loop.inner current control loop.Sum5
    _grid_feeding_inverter__averaged__controller_outer_power_loop___inner_current_loop_inner_current_control_loop_sum5__out = _grid_feeding_inverter__averaged__controller_gain5__out - _grid_feeding_inverter__averaged__controller_outer_power_loop___inner_current_loop_inner_current_control_loop_product1__out;
    // Generated from the component: Grid feeding inverter (averaged).Controller.Outer Power Loop + Inner Current Loop.inner current control loop.PID controller2
    _grid_feeding_inverter__averaged__controller_outer_power_loop___inner_current_loop_inner_current_control_loop_pid_controller2__pi_reg_out_int = _grid_feeding_inverter__averaged__controller_outer_power_loop___inner_current_loop_inner_current_control_loop_pid_controller2__integrator_state + 0.007 * _grid_feeding_inverter__averaged__controller_outer_power_loop___inner_current_loop_inner_current_control_loop_signal_switch3__out;
    if (_grid_feeding_inverter__averaged__controller_outer_power_loop___inner_current_loop_inner_current_control_loop_pid_controller2__pi_reg_out_int < -1.0)
        _grid_feeding_inverter__averaged__controller_outer_power_loop___inner_current_loop_inner_current_control_loop_pid_controller2__av_active = 1;
    else if (_grid_feeding_inverter__averaged__controller_outer_power_loop___inner_current_loop_inner_current_control_loop_pid_controller2__pi_reg_out_int > 1.0)
        _grid_feeding_inverter__averaged__controller_outer_power_loop___inner_current_loop_inner_current_control_loop_pid_controller2__av_active = 1;
    else
        _grid_feeding_inverter__averaged__controller_outer_power_loop___inner_current_loop_inner_current_control_loop_pid_controller2__av_active = 0;
    _grid_feeding_inverter__averaged__controller_outer_power_loop___inner_current_loop_inner_current_control_loop_pid_controller2__out = MIN(MAX(_grid_feeding_inverter__averaged__controller_outer_power_loop___inner_current_loop_inner_current_control_loop_pid_controller2__pi_reg_out_int, -1.0), 1.0);
    // Generated from the component: Grid feeding inverter (averaged).Controller.Outer Power Loop + Inner Current Loop.inner current control loop.Xi_q_ERR
    HIL_OutAO(0x4001, (float)_grid_feeding_inverter__averaged__controller_outer_power_loop___inner_current_loop_inner_current_control_loop_signal_switch3__out);
    // Generated from the component: Grid feeding inverter (averaged).Controller.Gain14
    _grid_feeding_inverter__averaged__controller_gain14__out = 15500000.0 * _grid_feeding_inverter__averaged__controller_sum2__out;
    // Generated from the component: Grid feeding inverter (averaged).Controller.Gain15
    _grid_feeding_inverter__averaged__controller_gain15__out = 15500000.0 * _grid_feeding_inverter__averaged__controller_sum1__out;
    // Generated from the component: Grid feeding inverter (averaged).Controller.Outer Power Loop + Inner Current Loop.inner current control loop.Product4
    _grid_feeding_inverter__averaged__controller_outer_power_loop___inner_current_loop_inner_current_control_loop_product4__out = (_grid_feeding_inverter__averaged__controller_outer_power_loop___inner_current_loop_inner_current_control_loop_sum6__out) * 1.0 / (_grid_feeding_inverter__averaged__controller_outer_power_loop___inner_current_loop_inner_current_control_loop_gain5__out);
    // Generated from the component: Grid feeding inverter (averaged).Controller.Outer Power Loop + Inner Current Loop.inner current control loop.Product3
    _grid_feeding_inverter__averaged__controller_outer_power_loop___inner_current_loop_inner_current_control_loop_product3__out = (_grid_feeding_inverter__averaged__controller_outer_power_loop___inner_current_loop_inner_current_control_loop_sum5__out) * 1.0 / (_grid_feeding_inverter__averaged__controller_outer_power_loop___inner_current_loop_inner_current_control_loop_gain5__out);
    // Generated from the component: Grid feeding inverter (averaged).Controller.Q1
    HIL_OutAO(0x4006, (float)_grid_feeding_inverter__averaged__controller_gain14__out);
    // Generated from the component: Grid feeding inverter (averaged).Controller.P1
    HIL_OutAO(0x4003, (float)_grid_feeding_inverter__averaged__controller_gain15__out);
    // Generated from the component: Grid feeding inverter (averaged).Controller.Outer Power Loop + Inner Current Loop.inner current control loop.Sum7
    _grid_feeding_inverter__averaged__controller_outer_power_loop___inner_current_loop_inner_current_control_loop_sum7__out = _grid_feeding_inverter__averaged__controller_outer_power_loop___inner_current_loop_inner_current_control_loop_pid_controller2__out + _grid_feeding_inverter__averaged__controller_outer_power_loop___inner_current_loop_inner_current_control_loop_product4__out;
    // Generated from the component: Grid feeding inverter (averaged).Controller.Outer Power Loop + Inner Current Loop.inner current control loop.Sum3
    _grid_feeding_inverter__averaged__controller_outer_power_loop___inner_current_loop_inner_current_control_loop_sum3__out = _grid_feeding_inverter__averaged__controller_outer_power_loop___inner_current_loop_inner_current_control_loop_pid_controller1__out + _grid_feeding_inverter__averaged__controller_outer_power_loop___inner_current_loop_inner_current_control_loop_product3__out;
    // Generated from the component: Grid feeding inverter (averaged).Controller.Outer Power Loop + Inner Current Loop.inner current control loop.Signal switch5
    _grid_feeding_inverter__averaged__controller_outer_power_loop___inner_current_loop_inner_current_control_loop_signal_switch5__out = (_grid_feeding_inverter__averaged__connect_gfl__out > 0.5) ? _grid_feeding_inverter__averaged__controller_outer_power_loop___inner_current_loop_inner_current_control_loop_sum7__out : _grid_feeding_inverter__averaged__controller_outer_power_loop___inner_current_loop_inner_current_control_loop_constant4__out;
    // Generated from the component: Grid feeding inverter (averaged).Controller.Outer Power Loop + Inner Current Loop.inner current control loop.Signal switch4
    _grid_feeding_inverter__averaged__controller_outer_power_loop___inner_current_loop_inner_current_control_loop_signal_switch4__out = (_grid_feeding_inverter__averaged__connect_gfl__out > 0.5) ? _grid_feeding_inverter__averaged__controller_outer_power_loop___inner_current_loop_inner_current_control_loop_sum3__out : _grid_feeding_inverter__averaged__controller_outer_power_loop___inner_current_loop_inner_current_control_loop_constant3__out;
    // Generated from the component: Grid feeding inverter (averaged).Controller.Outer Power Loop + Inner Current Loop.Gain6
    _grid_feeding_inverter__averaged__controller_outer_power_loop___inner_current_loop_gain6__out = 391.91835884530855 * _grid_feeding_inverter__averaged__controller_outer_power_loop___inner_current_loop_inner_current_control_loop_signal_switch5__out;
    // Generated from the component: Grid feeding inverter (averaged).Controller.Outer Power Loop + Inner Current Loop.Gain5
    _grid_feeding_inverter__averaged__controller_outer_power_loop___inner_current_loop_gain5__out = 391.91835884530855 * _grid_feeding_inverter__averaged__controller_outer_power_loop___inner_current_loop_inner_current_control_loop_signal_switch4__out;
    // Generated from the component: Grid feeding inverter (averaged).Controller.Outer Power Loop + Inner Current Loop.dq to abc.dq to abc1.dq to alpha beta
    _grid_feeding_inverter__averaged__controller_outer_power_loop___inner_current_loop_dq_to_abc_dq_to_abc1_dq_to_alpha_beta__k1 = cos(_grid_feeding_inverter__averaged__controller_pll_pll1_confine_phase__out);
    _grid_feeding_inverter__averaged__controller_outer_power_loop___inner_current_loop_dq_to_abc_dq_to_abc1_dq_to_alpha_beta__k2 = sin(_grid_feeding_inverter__averaged__controller_pll_pll1_confine_phase__out);
    _grid_feeding_inverter__averaged__controller_outer_power_loop___inner_current_loop_dq_to_abc_dq_to_abc1_dq_to_alpha_beta__alpha = _grid_feeding_inverter__averaged__controller_outer_power_loop___inner_current_loop_dq_to_abc_dq_to_abc1_dq_to_alpha_beta__k2 * _grid_feeding_inverter__averaged__controller_outer_power_loop___inner_current_loop_gain5__out + _grid_feeding_inverter__averaged__controller_outer_power_loop___inner_current_loop_dq_to_abc_dq_to_abc1_dq_to_alpha_beta__k1 * _grid_feeding_inverter__averaged__controller_outer_power_loop___inner_current_loop_gain6__out;
    _grid_feeding_inverter__averaged__controller_outer_power_loop___inner_current_loop_dq_to_abc_dq_to_abc1_dq_to_alpha_beta__beta = _grid_feeding_inverter__averaged__controller_outer_power_loop___inner_current_loop_dq_to_abc_dq_to_abc1_dq_to_alpha_beta__k2 * _grid_feeding_inverter__averaged__controller_outer_power_loop___inner_current_loop_gain6__out - _grid_feeding_inverter__averaged__controller_outer_power_loop___inner_current_loop_dq_to_abc_dq_to_abc1_dq_to_alpha_beta__k1 * _grid_feeding_inverter__averaged__controller_outer_power_loop___inner_current_loop_gain5__out;
    // Generated from the component: Grid feeding inverter (averaged).Controller.Outer Power Loop + Inner Current Loop.dq to abc.dq to abc1.alpha beta to abc
    _grid_feeding_inverter__averaged__controller_outer_power_loop___inner_current_loop_dq_to_abc_dq_to_abc1_alpha_beta_to_abc__A = 1 * _grid_feeding_inverter__averaged__controller_outer_power_loop___inner_current_loop_dq_to_abc_o_ref__out;
    _grid_feeding_inverter__averaged__controller_outer_power_loop___inner_current_loop_dq_to_abc_dq_to_abc1_alpha_beta_to_abc__B = _grid_feeding_inverter__averaged__controller_outer_power_loop___inner_current_loop_dq_to_abc_dq_to_abc1_alpha_beta_to_abc__A - 0.5 * _grid_feeding_inverter__averaged__controller_outer_power_loop___inner_current_loop_dq_to_abc_dq_to_abc1_dq_to_alpha_beta__alpha;
    _grid_feeding_inverter__averaged__controller_outer_power_loop___inner_current_loop_dq_to_abc_dq_to_abc1_alpha_beta_to_abc__C = _grid_feeding_inverter__averaged__controller_outer_power_loop___inner_current_loop_dq_to_abc_dq_to_abc1_alpha_beta_to_abc__B - 0.8660254037844386 * _grid_feeding_inverter__averaged__controller_outer_power_loop___inner_current_loop_dq_to_abc_dq_to_abc1_dq_to_alpha_beta__beta;
    _grid_feeding_inverter__averaged__controller_outer_power_loop___inner_current_loop_dq_to_abc_dq_to_abc1_alpha_beta_to_abc__B += 0.8660254037844386 * _grid_feeding_inverter__averaged__controller_outer_power_loop___inner_current_loop_dq_to_abc_dq_to_abc1_dq_to_alpha_beta__beta;
    _grid_feeding_inverter__averaged__controller_outer_power_loop___inner_current_loop_dq_to_abc_dq_to_abc1_alpha_beta_to_abc__A += 1 * _grid_feeding_inverter__averaged__controller_outer_power_loop___inner_current_loop_dq_to_abc_dq_to_abc1_dq_to_alpha_beta__alpha;
    // Generated from the component: Grid feeding inverter (averaged).Controller.Bus Join1
    _grid_feeding_inverter__averaged__controller_bus_join1__out[0] = _grid_feeding_inverter__averaged__controller_outer_power_loop___inner_current_loop_dq_to_abc_dq_to_abc1_alpha_beta_to_abc__A;
    _grid_feeding_inverter__averaged__controller_bus_join1__out[1] = _grid_feeding_inverter__averaged__controller_outer_power_loop___inner_current_loop_dq_to_abc_dq_to_abc1_alpha_beta_to_abc__B;
    _grid_feeding_inverter__averaged__controller_bus_join1__out[2] = _grid_feeding_inverter__averaged__controller_outer_power_loop___inner_current_loop_dq_to_abc_dq_to_abc1_alpha_beta_to_abc__C;
    // Generated from the component: Grid feeding inverter (averaged).Product1
    _grid_feeding_inverter__averaged__product1__out[0] = (_grid_feeding_inverter__averaged__controller_bus_join1__out[0]) * (_grid_feeding_inverter__averaged__gain1__out);
    _grid_feeding_inverter__averaged__product1__out[1] = (_grid_feeding_inverter__averaged__controller_bus_join1__out[1]) * (_grid_feeding_inverter__averaged__gain1__out);
    _grid_feeding_inverter__averaged__product1__out[2] = (_grid_feeding_inverter__averaged__controller_bus_join1__out[2]) * (_grid_feeding_inverter__averaged__gain1__out);
    // Generated from the component: Grid feeding inverter (averaged).Bus Split1
    _grid_feeding_inverter__averaged__bus_split1__out = _grid_feeding_inverter__averaged__product1__out[0];
    _grid_feeding_inverter__averaged__bus_split1__out1 = _grid_feeding_inverter__averaged__product1__out[1];
    _grid_feeding_inverter__averaged__bus_split1__out2 = _grid_feeding_inverter__averaged__product1__out[2];
    // Generated from the component: Grid feeding inverter (averaged).Va_inv.Vs1
    HIL_OutFloat(137101312, (float) _grid_feeding_inverter__averaged__bus_split1__out);
    // Generated from the component: Grid feeding inverter (averaged).Vb_inv.Vs1
    HIL_OutFloat(137101313, (float) _grid_feeding_inverter__averaged__bus_split1__out1);
    // Generated from the component: Grid feeding inverter (averaged).Vc_inv.Vs1
    HIL_OutFloat(137101314, (float) _grid_feeding_inverter__averaged__bus_split1__out2);
    //@cmp.out.block.end
    //////////////////////////////////////////////////////////////////////////
    // Update block
    //////////////////////////////////////////////////////////////////////////
    //@cmp.update.block.start
    // Generated from the component: Grid feeding inverter (averaged).Controller.PLL.Unit Delay2
    _grid_feeding_inverter__averaged__controller_pll_unit_delay2__state = _grid_feeding_inverter__averaged__controller_pll_pll1_confine_phase__out;
    // Generated from the component: Sinusoidal Source1
    _sinusoidal_source1__current_phase += 60.0 * 0.001;
    if (_sinusoidal_source1__current_phase >= 1.0f) {
        _sinusoidal_source1__current_phase -= 1.0f;
    }
    // Generated from the component: Sinusoidal Source2
    _sinusoidal_source2__current_phase += 60.0 * 0.001;
    if (_sinusoidal_source2__current_phase >= 1.0f) {
        _sinusoidal_source2__current_phase -= 1.0f;
    }
    // Generated from the component: Sinusoidal Source3
    _sinusoidal_source3__current_phase += 60.0 * 0.001;
    if (_sinusoidal_source3__current_phase >= 1.0f) {
        _sinusoidal_source3__current_phase -= 1.0f;
    }
    // Generated from the component: Grid feeding inverter (averaged).Controller.Outer Power Loop + Inner Current Loop.inner current control loop.Comparator1
    if (_grid_feeding_inverter__averaged__constant1__out < _grid_feeding_inverter__averaged__controller_outer_power_loop___inner_current_loop_inner_current_control_loop_limit_zero__out) {
        _grid_feeding_inverter__averaged__controller_outer_power_loop___inner_current_loop_inner_current_control_loop_comparator1__state = 0;
    } else if (_grid_feeding_inverter__averaged__constant1__out > _grid_feeding_inverter__averaged__controller_outer_power_loop___inner_current_loop_inner_current_control_loop_limit_zero__out) {
        _grid_feeding_inverter__averaged__controller_outer_power_loop___inner_current_loop_inner_current_control_loop_comparator1__state = 1;
    }
    // Generated from the component: Grid feeding inverter (averaged).Controller.PLL.PLL1.PID controller1
    if (!_grid_feeding_inverter__averaged__controller_pll_pll1_pid_controller1__av_active) {
        _grid_feeding_inverter__averaged__controller_pll_pll1_pid_controller1__integrator_state += 2.0 * _grid_feeding_inverter__averaged__controller_pll_pll1_signal_switch2__out * 0.001;
    }
    // Generated from the component: Grid feeding inverter (averaged).Controller.PLL.PLL1.C function1
    _grid_feeding_inverter__averaged__controller_pll_pll1_c_function1__var += (0.001 * _grid_feeding_inverter__averaged__controller_pll_pll1_c_function1__in);
    // Generated from the component: Grid feeding inverter (averaged).Controller.Outer Power Loop + Inner Current Loop.outer power loop.Comparator1
    if (_grid_feeding_inverter__averaged__controller_outer_power_loop___inner_current_loop_squared_vt2_sum3__out < _grid_feeding_inverter__averaged__controller_outer_power_loop___inner_current_loop_outer_power_loop_limit_zero__out) {
        _grid_feeding_inverter__averaged__controller_outer_power_loop___inner_current_loop_outer_power_loop_comparator1__state = 0;
    } else if (_grid_feeding_inverter__averaged__controller_outer_power_loop___inner_current_loop_squared_vt2_sum3__out > _grid_feeding_inverter__averaged__controller_outer_power_loop___inner_current_loop_outer_power_loop_limit_zero__out) {
        _grid_feeding_inverter__averaged__controller_outer_power_loop___inner_current_loop_outer_power_loop_comparator1__state = 1;
    }
    // Generated from the component: Grid feeding inverter (averaged).Controller.PLL.PLL1.confine phase
    // Generated from the component: Grid feeding inverter (averaged).Controller.Outer Power Loop + Inner Current Loop.inner current control loop.PID controller1
    if (!_grid_feeding_inverter__averaged__controller_outer_power_loop___inner_current_loop_inner_current_control_loop_pid_controller1__av_active) {
        _grid_feeding_inverter__averaged__controller_outer_power_loop___inner_current_loop_inner_current_control_loop_pid_controller1__integrator_state += 1.0 * _grid_feeding_inverter__averaged__controller_outer_power_loop___inner_current_loop_inner_current_control_loop_signal_switch2__out * 0.001;
    }
    // Generated from the component: Grid feeding inverter (averaged).Controller.Outer Power Loop + Inner Current Loop.inner current control loop.PID controller2
    if (!_grid_feeding_inverter__averaged__controller_outer_power_loop___inner_current_loop_inner_current_control_loop_pid_controller2__av_active) {
        _grid_feeding_inverter__averaged__controller_outer_power_loop___inner_current_loop_inner_current_control_loop_pid_controller2__integrator_state += 1.0 * _grid_feeding_inverter__averaged__controller_outer_power_loop___inner_current_loop_inner_current_control_loop_signal_switch3__out * 0.001;
    }
    //@cmp.update.block.end
}
// ----------------------------------------------------------------------------------------
//-----------------------------------------------------------------------------------------