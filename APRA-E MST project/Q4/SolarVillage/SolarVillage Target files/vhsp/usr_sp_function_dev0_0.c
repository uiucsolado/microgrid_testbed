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



















































































































































































































































































































































#define _grid_vs_tdf_sg_ctrl_sine1__no_of_points 1000
#define _grid_vs_tdf_sg_ctrl_sine1__max_int40 (1099511627775)
#define _grid_vs_tdf_sg_ctrl_sine1__max_int32 (4294967295)




























































































































































































































































































































































































//@cmp.def.end


//-----------------------------------------------------------------------------------------
// generated using template: common_variables.template-------------------------------------
// true global variables


//@cmp.var.start
// variables
double _ess_dynamic_table1_clock1__out;



double _ess_inverter_controller_c_function3__Pref;
double _ess_inverter_controller_constant2__out = 1.0;
double _ess_inverter_controller_constant3__out = 3.141592653589793;
double _ess_inverter_controller_constant4__out = 0.0002;
double _ess_inverter_controller_constant5__out = 0.0;
double _ess_inverter_controller_constant6__out = 376.99111843077515;
double _ess_inverter_controller_gain23__out;
double _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__out;
double _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__b_coeff[2] = {0.0006279239944363413, 0.0006279239944364523};
double _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__a_coeff[2] = {1.0, -0.9987441520111273};
double _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__a_sum;
double _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__b_sum;
double _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__delay_line_in;
double _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_limit3__out;
double _ess_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_limit_zero__out = 0.1;
double _ess_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_one__out = 1.0;
X_Int32 _ess_inverter_controller_charge__out;
double _ess_inverter_e_va1__out;
double _ess_inverter_i_ia1__out;
double _ess_inverter_io_ia1__out;
double _ess_inverter_power_meas_gain4__out;
double _ess_inverter_power_meas_gain5__out;
double _ess_inverter_power_meas_power_meas_dqpu_s_and_pf__P;
double _ess_inverter_power_meas_power_meas_dqpu_s_and_pf__Q;


double _ess_inverter_power_meas_power_meas_dqpu_s_and_pf__S;
double _ess_inverter_power_meas_power_meas_dqpu_s_and_pf__pf;
double _ess_inverter_vdc_va1__out;
double _ess_modbus_bus_split1__out;
double _ess_modbus_bus_split1__out1;
double _ess_modbus_c_u11__out = 1.0;
double _ess_modbus_c_u12__out = 1.0;
double _ess_modbus_c_u13__out = 50.0;
double _grid_constant1__out = 240.0;
double _grid_constant2__out = 60.0;
double _grid_constant3__out = 0.0;
double _measurement_bpf_hpf__out;
double _measurement_bpf_hpf__b_coeff[2] = {0.9814991763877352, -0.9814991763877352};
double _measurement_bpf_hpf__a_coeff[2] = {1.0, -0.9629983527754703};
double _measurement_bpf_hpf__a_sum;
double _measurement_bpf_hpf__b_sum;
double _measurement_bpf_hpf__delay_line_in;
double _measurement_bpf1_hpf__out;
double _measurement_bpf1_hpf__b_coeff[2] = {0.9814991763877352, -0.9814991763877352};
double _measurement_bpf1_hpf__a_coeff[2] = {1.0, -0.9629983527754703};
double _measurement_bpf1_hpf__a_sum;
double _measurement_bpf1_hpf__b_sum;
double _measurement_bpf1_hpf__delay_line_in;
double _measurement_ia_ia1__out;
double _measurement_va_va1__out;



double _solarhouse1_inverter_controller_c_function3__Pref;
double _solarhouse1_inverter_controller_constant2__out = 1.0;
double _solarhouse1_inverter_controller_constant3__out = 3.141592653589793;
double _solarhouse1_inverter_controller_constant4__out = 0.0002;
double _solarhouse1_inverter_controller_constant5__out = 0.0;
double _solarhouse1_inverter_controller_constant6__out = 376.99111843077515;
double _solarhouse1_inverter_controller_gain23__out;
double _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__out;
double _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__b_coeff[2] = {0.0006279239944363413, 0.0006279239944364523};
double _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__a_coeff[2] = {1.0, -0.9987441520111273};
double _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__a_sum;
double _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__b_sum;
double _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__delay_line_in;
double _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_limit3__out;
double _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_limit_zero__out = 0.1;
double _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_one__out = 1.0;
X_Int32 _solarhouse1_inverter_controller_charge__out;
double _solarhouse1_inverter_e_va1__out;
double _solarhouse1_inverter_i_ia1__out;
double _solarhouse1_inverter_io_ia1__out;
double _solarhouse1_inverter_power_meas_gain4__out;
double _solarhouse1_inverter_power_meas_gain5__out;
double _solarhouse1_inverter_power_meas_power_meas_dqpu_s_and_pf__P;
double _solarhouse1_inverter_power_meas_power_meas_dqpu_s_and_pf__Q;


double _solarhouse1_inverter_power_meas_power_meas_dqpu_s_and_pf__S;
double _solarhouse1_inverter_power_meas_power_meas_dqpu_s_and_pf__pf;
double _solarhouse1_inverter_vdc_va1__out;
double _solarhouse1_measurement_bpf_hpf__out;
double _solarhouse1_measurement_bpf_hpf__b_coeff[2] = {0.9814991763877352, -0.9814991763877352};
double _solarhouse1_measurement_bpf_hpf__a_coeff[2] = {1.0, -0.9629983527754703};
double _solarhouse1_measurement_bpf_hpf__a_sum;
double _solarhouse1_measurement_bpf_hpf__b_sum;
double _solarhouse1_measurement_bpf_hpf__delay_line_in;
double _solarhouse1_measurement_bpf1_hpf__out;
double _solarhouse1_measurement_bpf1_hpf__b_coeff[2] = {0.9814991763877352, -0.9814991763877352};
double _solarhouse1_measurement_bpf1_hpf__a_coeff[2] = {1.0, -0.9629983527754703};
double _solarhouse1_measurement_bpf1_hpf__a_sum;
double _solarhouse1_measurement_bpf1_hpf__b_sum;
double _solarhouse1_measurement_bpf1_hpf__delay_line_in;
double _solarhouse1_measurement_ia_ia1__out;
double _solarhouse1_measurement_va_va1__out;
double _solarhouse1_modbus_bus_split1__out;
double _solarhouse1_modbus_bus_split1__out1;
double _solarhouse1_modbus_c_u11__out = 1.0;
double _solarhouse1_modbus_c_u12__out = 1.0;
double _solarhouse1_modbus_c_u13__out = 50.0;



double _solarhouse2_inverter_controller_c_function3__Pref;
double _solarhouse2_inverter_controller_constant2__out = 1.0;
double _solarhouse2_inverter_controller_constant3__out = 3.141592653589793;
double _solarhouse2_inverter_controller_constant4__out = 0.0002;
double _solarhouse2_inverter_controller_constant5__out = 0.0;
double _solarhouse2_inverter_controller_constant6__out = 376.99111843077515;
double _solarhouse2_inverter_controller_gain23__out;
double _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__out;
double _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__b_coeff[2] = {0.0006279239944363413, 0.0006279239944364523};
double _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__a_coeff[2] = {1.0, -0.9987441520111273};
double _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__a_sum;
double _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__b_sum;
double _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__delay_line_in;
double _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_limit3__out;
double _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_limit_zero__out = 0.1;
double _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_one__out = 1.0;
X_Int32 _solarhouse2_inverter_controller_charge__out;
double _solarhouse2_inverter_e_va1__out;
double _solarhouse2_inverter_i_ia1__out;
double _solarhouse2_inverter_io_ia1__out;
double _solarhouse2_inverter_power_meas_gain4__out;
double _solarhouse2_inverter_power_meas_gain5__out;
double _solarhouse2_inverter_power_meas_power_meas_dqpu_s_and_pf__P;
double _solarhouse2_inverter_power_meas_power_meas_dqpu_s_and_pf__Q;


double _solarhouse2_inverter_power_meas_power_meas_dqpu_s_and_pf__S;
double _solarhouse2_inverter_power_meas_power_meas_dqpu_s_and_pf__pf;
double _solarhouse2_inverter_vdc_va1__out;
double _solarhouse2_measurement_bpf_hpf__out;
double _solarhouse2_measurement_bpf_hpf__b_coeff[2] = {0.9814991763877352, -0.9814991763877352};
double _solarhouse2_measurement_bpf_hpf__a_coeff[2] = {1.0, -0.9629983527754703};
double _solarhouse2_measurement_bpf_hpf__a_sum;
double _solarhouse2_measurement_bpf_hpf__b_sum;
double _solarhouse2_measurement_bpf_hpf__delay_line_in;
double _solarhouse2_measurement_bpf1_hpf__out;
double _solarhouse2_measurement_bpf1_hpf__b_coeff[2] = {0.9814991763877352, -0.9814991763877352};
double _solarhouse2_measurement_bpf1_hpf__a_coeff[2] = {1.0, -0.9629983527754703};
double _solarhouse2_measurement_bpf1_hpf__a_sum;
double _solarhouse2_measurement_bpf1_hpf__b_sum;
double _solarhouse2_measurement_bpf1_hpf__delay_line_in;
double _solarhouse2_measurement_ia_ia1__out;
double _solarhouse2_measurement_va_va1__out;
double _solarhouse2_modbus_bus_split1__out;
double _solarhouse2_modbus_bus_split1__out1;
double _solarhouse2_modbus_c_u11__out = 1.0;
double _solarhouse2_modbus_c_u12__out = 1.0;
double _solarhouse2_modbus_c_u13__out = 50.0;



double _solarhouse3_inverter_controller_c_function3__Pref;
double _solarhouse3_inverter_controller_constant2__out = 1.0;
double _solarhouse3_inverter_controller_constant3__out = 3.141592653589793;
double _solarhouse3_inverter_controller_constant4__out = 0.0002;
double _solarhouse3_inverter_controller_constant5__out = 0.0;
double _solarhouse3_inverter_controller_constant6__out = 376.99111843077515;
double _solarhouse3_inverter_controller_gain23__out;
double _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__out;
double _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__b_coeff[2] = {0.0006279239944363413, 0.0006279239944364523};
double _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__a_coeff[2] = {1.0, -0.9987441520111273};
double _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__a_sum;
double _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__b_sum;
double _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__delay_line_in;
double _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_limit3__out;
double _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_limit_zero__out = 0.1;
double _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_one__out = 1.0;
X_Int32 _solarhouse3_inverter_controller_charge__out;
double _solarhouse3_inverter_e_va1__out;
double _solarhouse3_inverter_i_ia1__out;
double _solarhouse3_inverter_io_ia1__out;
double _solarhouse3_inverter_power_meas_gain4__out;
double _solarhouse3_inverter_power_meas_gain5__out;
double _solarhouse3_inverter_power_meas_power_meas_dqpu_s_and_pf__P;
double _solarhouse3_inverter_power_meas_power_meas_dqpu_s_and_pf__Q;


double _solarhouse3_inverter_power_meas_power_meas_dqpu_s_and_pf__S;
double _solarhouse3_inverter_power_meas_power_meas_dqpu_s_and_pf__pf;
double _solarhouse3_inverter_vdc_va1__out;
double _solarhouse3_measurement_bpf_hpf__out;
double _solarhouse3_measurement_bpf_hpf__b_coeff[2] = {0.9814991763877352, -0.9814991763877352};
double _solarhouse3_measurement_bpf_hpf__a_coeff[2] = {1.0, -0.9629983527754703};
double _solarhouse3_measurement_bpf_hpf__a_sum;
double _solarhouse3_measurement_bpf_hpf__b_sum;
double _solarhouse3_measurement_bpf_hpf__delay_line_in;
double _solarhouse3_measurement_bpf1_hpf__out;
double _solarhouse3_measurement_bpf1_hpf__b_coeff[2] = {0.9814991763877352, -0.9814991763877352};
double _solarhouse3_measurement_bpf1_hpf__a_coeff[2] = {1.0, -0.9629983527754703};
double _solarhouse3_measurement_bpf1_hpf__a_sum;
double _solarhouse3_measurement_bpf1_hpf__b_sum;
double _solarhouse3_measurement_bpf1_hpf__delay_line_in;
double _solarhouse3_measurement_ia_ia1__out;
double _solarhouse3_measurement_va_va1__out;
double _solarhouse3_modbus_bus_split1__out;
double _solarhouse3_modbus_bus_split1__out1;
double _solarhouse3_modbus_c_u11__out = 1.0;
double _solarhouse3_modbus_c_u12__out = 1.0;
double _solarhouse3_modbus_c_u13__out = 50.0;



double _solarhouse4_inverter_controller_c_function3__Pref;
double _solarhouse4_inverter_controller_constant2__out = 1.0;
double _solarhouse4_inverter_controller_constant3__out = 3.141592653589793;
double _solarhouse4_inverter_controller_constant4__out = 0.0002;
double _solarhouse4_inverter_controller_constant5__out = 0.0;
double _solarhouse4_inverter_controller_constant6__out = 376.99111843077515;
double _solarhouse4_inverter_controller_gain23__out;
double _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__out;
double _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__b_coeff[2] = {0.0006279239944363413, 0.0006279239944364523};
double _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__a_coeff[2] = {1.0, -0.9987441520111273};
double _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__a_sum;
double _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__b_sum;
double _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__delay_line_in;
double _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_limit3__out;
double _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_limit_zero__out = 0.1;
double _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_one__out = 1.0;
X_Int32 _solarhouse4_inverter_controller_charge__out;
double _solarhouse4_inverter_e_va1__out;
double _solarhouse4_inverter_i_ia1__out;
double _solarhouse4_inverter_io_ia1__out;
double _solarhouse4_inverter_power_meas_gain4__out;
double _solarhouse4_inverter_power_meas_gain5__out;
double _solarhouse4_inverter_power_meas_power_meas_dqpu_s_and_pf__P;
double _solarhouse4_inverter_power_meas_power_meas_dqpu_s_and_pf__Q;


double _solarhouse4_inverter_power_meas_power_meas_dqpu_s_and_pf__S;
double _solarhouse4_inverter_power_meas_power_meas_dqpu_s_and_pf__pf;
double _solarhouse4_inverter_vdc_va1__out;
double _solarhouse4_measurement_bpf_hpf__out;
double _solarhouse4_measurement_bpf_hpf__b_coeff[2] = {0.9814991763877352, -0.9814991763877352};
double _solarhouse4_measurement_bpf_hpf__a_coeff[2] = {1.0, -0.9629983527754703};
double _solarhouse4_measurement_bpf_hpf__a_sum;
double _solarhouse4_measurement_bpf_hpf__b_sum;
double _solarhouse4_measurement_bpf_hpf__delay_line_in;
double _solarhouse4_measurement_bpf1_hpf__out;
double _solarhouse4_measurement_bpf1_hpf__b_coeff[2] = {0.9814991763877352, -0.9814991763877352};
double _solarhouse4_measurement_bpf1_hpf__a_coeff[2] = {1.0, -0.9629983527754703};
double _solarhouse4_measurement_bpf1_hpf__a_sum;
double _solarhouse4_measurement_bpf1_hpf__b_sum;
double _solarhouse4_measurement_bpf1_hpf__delay_line_in;
double _solarhouse4_measurement_ia_ia1__out;
double _solarhouse4_measurement_va_va1__out;
double _solarhouse4_modbus_bus_split1__out;
double _solarhouse4_modbus_bus_split1__out1;
double _solarhouse4_modbus_c_u11__out = 1.0;
double _solarhouse4_modbus_c_u12__out = 1.0;
double _solarhouse4_modbus_c_u13__out = 50.0;
double _ess_dynamic_table1_1d_look_up_table1__lut_table[1201] = { 25.0, 25.0, -17.0, -75.0, -173.0, -286.0, -399.0, -524.0, -654.0, -784.0, -914.0, -1044.0, -1174.0, -1304.0, -1397.0, -1477.0, -1556.0, -1607.0, -1647.0, -1687.0, -1727.0, -1737.0, -1737.0, -1736.0, -1698.0, -1645.0, -1592.0, -1540.0, -1487.0, -1434.0, -1381.0, -1308.0, -1228.0, -1147.0, -1066.0, -1044.0, -995.0, -929.0, -863.0, -796.0, -745.0, -699.0, -644.0, -586.0, -540.0, -500.0, -459.0, -418.0, -377.0, -314.0, -244.0, -173.0, -102.0, -32.0, 38.0, 108.0, 179.0, 263.0, 353.0, 443.0, 533.0, 626.0, 721.0, 816.0, 910.0, 974.0, 1026.0, 1078.0, 1129.0, 1171.0, 1208.0, 1246.0, 1283.0, 1320.0, 1380.0, 1449.0, 1517.0, 1586.0, 1684.0, 1793.0, 1902.0, 1980.0, 2062.0, 2176.0, 2288.0, 2399.0, 2509.0, 2642.0, 2784.0, 2925.0, 3067.0, 3209.0, 3312.0, 3401.0, 3490.0, 3563.0, 3630.0, 3697.0, 3764.0, 3831.0, 3898.0, 3965.0, 3983.0, 3982.0, 3981.0, 3981.0, 3980.0, 3979.0, 3979.0, 3978.0, 3977.0, 3977.0, 3976.0, 3975.0, 3975.0, 3974.0, 3973.0, 3973.0, 3944.0, 3904.0, 3865.0, 3805.0, 3737.0, 3670.0, 3602.0, 3535.0, 3467.0, 3399.0, 3332.0, 3264.0, 3197.0, 3131.0, 3064.0, 2998.0, 2931.0, 2865.0, 2798.0, 2732.0, 2666.0, 2599.0, 2533.0, 2465.0, 2396.0, 2328.0, 2260.0, 2191.0, 2123.0, 2076.0, 2038.0, 2001.0, 1963.0, 1925.0, 1887.0, 1864.0, 1846.0, 1829.0, 1812.0, 1794.0, 1777.0, 1760.0, 1742.0, 1742.0, 1749.0, 1756.0, 1763.0, 1770.0, 1777.0, 1784.0, 1786.0, 1787.0, 1787.0, 1787.0, 1787.0, 1788.0, 1788.0, 1788.0, 1789.0, 1816.0, 1854.0, 1891.0, 1928.0, 1977.0, 2029.0, 2081.0, 2133.0, 2186.0, 2213.0, 2232.0, 2250.0, 2269.0, 2288.0, 2306.0, 2325.0, 2343.0, 2362.0, 2363.0, 2358.0, 2353.0, 2322.0, 2282.0, 2242.0, 2184.0, 2119.0, 2054.0, 1989.0, 1924.0, 1859.0, 1794.0, 1729.0, 1688.0, 1655.0, 1621.0, 1598.0, 1577.0, 1557.0, 1537.0, 1511.0, 1484.0, 1456.0, 1429.0, 1427.0, 1434.0, 1489.0, 1563.0, 1637.0, 1728.0, 1827.0, 1925.0, 2024.0, 2122.0, 2220.0, 2319.0, 2417.0, 2514.0, 2610.0, 2706.0, 2802.0, 2899.0, 2995.0, 3091.0, 3161.0, 3221.0, 3281.0, 3341.0, 3401.0, 3461.0, 3521.0, 3581.0, 3641.0, 3670.0, 3688.0, 3706.0, 3685.0, 3650.0, 3615.0, 3555.0, 3487.0, 3419.0, 3350.0, 3254.0, 3147.0, 3040.0, 2932.0, 2816.0, 2697.0, 2578.0, 2458.0, 2339.0, 2220.0, 2124.0, 2037.0, 1950.0, 1899.0, 1863.0, 1858.0, 1867.0, 1964.0, 2094.0, 2224.0, 2260.0, 2380.0, 2546.0, 2735.0, 2931.0, 3211.0, 3368.0, 3466.0, 3565.0, 3630.0, 3683.0, 3736.0, 3789.0, 3818.0, 3838.0, 3858.0, 3879.0, 3899.0, 3919.0, 3939.0, 3948.0, 3952.0, 3956.0, 3960.0, 3964.0, 3968.0, 3972.0, 3976.0, 3980.0, 3984.0, 3988.0, 3992.0, 3993.0, 3993.0, 3993.0, 3993.0, 3993.0, 3993.0, 3993.0, 3993.0, 3993.0, 3993.0, 3993.0, 3993.0, 3993.0, 3993.0, 3993.0, 3993.0, 3993.0, 3993.0, 3993.0, 3993.0, 3993.0, 3993.0, 3993.0, 3993.0, 3993.0, 3993.0, 3993.0, 3993.0, 3993.0, 3993.0, 3993.0, 3993.0, 3993.0, 3993.0, 3993.0, 3993.0, 3993.0, 3993.0, 3993.0, 3993.0, 3993.0, 3993.0, 3993.0, 3993.0, 3993.0, 3993.0, 3993.0, 3993.0, 3993.0, 3993.0, 3993.0, 3993.0, 3993.0, 3993.0, 3993.0, 3993.0, 3993.0, 3993.0, 3993.0, 3993.0, 3993.0, 3993.0, 3993.0, 3993.0, 3993.0, 3961.0, 3917.0, 3833.0, 3734.0, 3636.0, 3517.0, 3392.0, 3266.0, 3140.0, 3015.0, 2914.0, 2823.0, 2732.0, 2647.0, 2565.0, 2484.0, 2402.0, 2307.0, 2208.0, 2109.0, 2041.0, 1985.0, 1929.0, 1886.0, 1848.0, 1810.0, 1772.0, 1705.0, 1627.0, 1550.0, 1433.0, 1301.0, 1169.0, 1024.0, 682.0, 341.0, 0.0, 0.0, -162.0, -324.0, -487.0, -649.0, -649.0, -829.0, -1010.0, -1176.0, -1336.0, -1496.0, -1657.0, -1817.0, -1952.0, -2076.0, -2200.0, -2324.0, -2444.0, -2561.0, -2678.0, -2800.0, -2924.0, -3049.0, -3173.0, -3263.0, -3339.0, -3415.0, -3461.0, -3496.0, -3471.0, -3422.0, -3353.0, -3274.0, -3196.0, -3118.0, -3040.0, -2961.0, -2883.0, -2805.0, -2726.0, -2648.0, -2596.0, -2554.0, -2512.0, -2470.0, -2428.0, -2386.0, -2356.0, -2331.0, -2306.0, -2322.0, -2353.0, -2419.0, -2497.0, -2601.0, -2715.0, -2829.0, -2944.0, -3058.0, -3172.0, -3286.0, -3383.0, -3472.0, -3562.0, -3651.0, -3741.0, -3819.0, -3893.0, -3966.0, -3987.0, -3987.0, -3986.0, -3986.0, -3985.0, -3985.0, -3984.0, -3984.0, -3984.0, -3983.0, -3983.0, -3982.0, -3982.0, -3981.0, -3981.0, -3980.0, -3980.0, -3979.0, -3979.0, -3978.0, -3978.0, -3977.0, -3977.0, -3976.0, -3976.0, -3975.0, -3975.0, -3974.0, -3974.0, -3973.0, -3973.0, -3972.0, -3972.0, -3971.0, -3971.0, -3971.0, -3970.0, -3970.0, -3969.0, -3969.0, -3968.0, -3968.0, -3967.0, -3943.0, -3909.0, -3876.0, -3842.0, -3809.0, -3775.0, -3742.0, -3708.0, -3689.0, -3675.0, -3661.0, -3647.0, -3633.0, -3619.0, -3605.0, -3602.0, -3603.0, -3604.0, -3605.0, -3573.0, -3528.0, -3482.0, -3436.0, -3353.0, -3255.0, -3156.0, -3058.0, -2996.0, -2948.0, -2900.0, -2860.0, -2823.0, -2786.0, -2749.0, -2712.0, -2675.0, -2638.0, -2593.0, -2546.0, -2526.0, -2518.0, -2509.0, -2541.0, -2589.0, -2666.0, -2755.0, -2867.0, -2987.0, -3108.0, -3229.0, -3349.0, -3464.0, -3577.0, -3690.0, -3802.0, -3915.0, -3985.0, -3999.0, -3999.0, -3999.0, -3998.0, -3998.0, -3998.0, -3997.0, -3997.0, -3997.0, -3996.0, -3996.0, -3996.0, -3920.0, -3814.0, -3531.0, -3293.0, -3103.0, -2913.0, -2722.0, -2532.0, -2342.0, -2151.0, -1961.0, -1797.0, -1643.0, -1489.0, -1372.0, -1270.0, -1202.0, -1147.0, -1134.0, -1138.0, -1177.0, -1230.0, -1283.0, -1366.0, -1462.0, -1558.0, -1654.0, -1743.0, -1829.0, -1915.0, -2001.0, -2068.0, -2128.0, -2188.0, -2248.0, -2308.0, -2367.0, -2406.0, -2437.0, -2468.0, -2498.0, -2529.0, -2560.0, -2590.0, -2589.0, -2574.0, -2559.0, -2519.0, -2469.0, -2419.0, -2368.0, -2318.0, -2268.0, -2226.0, -2188.0, -2149.0, -2111.0, -2073.0, -2034.0, -2037.0, -2056.0, -2074.0, -2093.0, -2117.0, -2142.0, -2168.0, -2193.0, -2219.0, -2277.0, -2296.0, -2427.0, -2561.0, -2676.0, -2791.0, -2906.0, -3057.0, -3223.0, -3388.0, -3554.0, -3720.0, -3885.0, -3981.0, -3999.0, -3999.0, -3999.0, -3999.0, -3999.0, -3999.0, -3999.0, -3999.0, -3999.0, -3999.0, -3999.0, -3999.0, -4000.0, -4000.0, -4000.0, -4000.0, -4000.0, -4000.0, -4000.0, -4000.0, -4000.0, -4000.0, -4000.0, -4000.0, -4000.0, -4000.0, -4000.0, -4000.0, -4000.0, -4000.0, -4000.0, -4000.0, -4000.0, -4000.0, -4000.0, -4000.0, -4000.0, -4000.0, -4000.0, -4000.0, -4000.0, -4000.0, -4000.0, -4000.0, -4000.0, -4000.0, -4000.0, -4000.0, -4000.0, -4000.0, -4000.0, -4000.0, -4000.0, -4000.0, -4000.0, -4000.0, -4000.0, -4000.0, -4000.0, -3973.0, -3901.0, -3766.0, -3731.0, -3435.0, -3171.0, -2944.0, -2681.0, -2408.0, -2097.0, -1776.0, -1434.0, -1087.0, -739.0, -392.0, -44.0, 302.0, 650.0, 997.0, 1312.0, 1616.0, 1685.0, 2091.0, 2393.0, 2625.0, 2939.0, 3133.0, 3282.0, 3398.0, 3503.0, 3473.0, 3555.0, 3618.0, 3661.0, 3705.0, 3748.0, 3792.0, 3835.0, 3858.0, 3873.0, 3889.0, 3905.0, 3921.0, 3937.0, 3953.0, 3959.0, 3962.0, 3925.0, 3875.0, 3797.0, 3710.0, 3624.0, 3537.0, 3451.0, 3431.0, 3261.0, 3100.0, 2956.0, 2813.0, 2669.0, 2526.0, 2382.0, 2239.0, 2095.0, 1952.0, 1830.0, 1714.0, 1599.0, 1523.0, 1459.0, 1395.0, 1330.0, 1266.0, 1202.0, 1104.0, 997.0, 889.0, 782.0, 661.0, 537.0, 413.0, 385.0, 197.0, 48.0, -70.0, -189.0, -308.0, -336.0, -481.0, -573.0, -636.0, -699.0, -762.0, -803.0, -837.0, -871.0, -905.0, -940.0, -961.0, -979.0, -997.0, -1015.0, -1033.0, -1050.0, -1032.0, -1001.0, -971.0, -896.0, -808.0, -720.0, -596.0, -562.0, -308.0, -86.0, -368.0, -390.0, -367.0, -345.0, -323.0, -300.0, -278.0, -256.0, -244.0, -270.0, -295.0, -321.0, -346.0, -372.0, -398.0, -421.0, -436.0, -452.0, -455.0, -418.0, -380.0, -343.0, -306.0, -268.0, -238.0, -233.0, -238.0, -278.0, -317.0, -356.0, -391.0, -407.0, -424.0, -445.0, -478.0, -511.0, -544.0, -577.0, -605.0, -613.0, -622.0, -630.0, -630.0, -600.0, -563.0, -497.0, -431.0, -365.0, -300.0, -237.0, -173.0, -110.0, -46.0, 16.0, 80.0, 133.0, 150.0, 166.0, 175.0, 157.0, 138.0, 120.0, 92.0, 31.0, -30.0, -90.0, -145.0, -199.0, -254.0, -308.0, -362.0, -417.0, -471.0, -517.0, -530.0, -543.0, -556.0, -570.0, -578.0, -568.0, -558.0, -548.0, -538.0, -528.0, -518.0, -508.0, -498.0, -489.0, -479.0, -478.0, -512.0, -545.0, -578.0, -617.0, -674.0, -731.0, -788.0, -846.0, -903.0, -960.0, -1017.0, -1074.0, -1145.0, -1236.0, -1252.0, -1326.0, -1407.0, -1488.0, -1570.0, -1651.0, -1732.0, -1813.0, -1894.0, -1966.0, -2007.0, -2048.0, -2075.0, -2055.0, -2023.0, -1946.0, -1854.0, -1709.0, -1548.0, -1331.0, -1115.0, -898.0, -674.0, -426.0, -178.0, 80.0, 375.0, 670.0, 1032.0, 1502.0, 1565.0, 1844.0, 2124.0, 2388.0, 2587.0, 2719.0, 2785.0, 2851.0, 2918.0, 2971.0, 2977.0, 2983.0, 2978.0, 2933.0, 2877.0, 2780.0, 2683.0, 2585.0, 2488.0, 2391.0, 2294.0, 2196.0, 2099.0, 2002.0, 1911.0, 1844.0, 1776.0, 1709.0, 1641.0, 1587.0, 1582.0, 1576.0, 1579.0, 1612.0, 1657.0, 1745.0, 1832.0, 1920.0, 2008.0, 2096.0, 2184.0, 2272.0, 2361.0, 2449.0, 2537.0, 2625.0, 2714.0, 2802.0, 2890.0, 2979.0, 3062.0, 3129.0, 3196.0, 3251.0, 3265.0, 3271.0, 3245.0, 3220.0, 3180.0, 3110.0, 3096.0, 3036.0, 2961.0, 2833.0, 2705.0, 2577.0, 2448.0, 2320.0, 2192.0, 2058.0, 1906.0, 1753.0, 1600.0, 1451.0, 1316.0, 1182.0, 1047.0, 919.0, 812.0, 705.0, 598.0, 491.0, 384.0, 277.0, 179.0, 112.0, 45.0, -8.0, -17.0, -27.0, -25.0, 11.0, 58.0, 139.0, 219.0, 310.0, 438.0, 565.0, 692.0, 817.0, 930.0, 1044.0, 1146.0, 1206.0, 1266.0, 1313.0, 1315.0, 1316.0, 1317.0, 1319.0, 1320.0, 1321.0, 1323.0, 1324.0, 1326.0, 1327.0, 1328.0, 1330.0, 1327.0, 1310.0, 1282.0, 1220.0, 1158.0, 1095.0, 1023.0, 889.0, 782.0, 661.0, 537.0, 413.0, 385.0, 197.0, 48.0, -70.0, -189.0, -308.0, -336.0, -481.0, -573.0, -636.0, -699.0, -762.0, -803.0, -837.0, -871.0, -905.0, -940.0, -961.0, -979.0, -997.0, -1015.0, -1033.0, -1050.0, -1032.0, -1001.0, -971.0, -896.0, -808.0, -720.0, -596.0, -562.0, -308.0, -86.0, 98.0, 283.0, 468.0, 653.0, 838.0, 1023.0, 1208.0, 1380.0, 1547.0, 1715.0, 1882.0, 2020.0, 2150.0, 2279.0, 2378.0, 2467.0, 2556.0, 2645.0, 2700.0, 2744.0, 2789.0, 2831.0, 2873.0, 2915.0, 2957.0, 3020.0, 3090.0, 3107.0, 3209.0, 3275.0, 3320.0, 3365.0, 3410.0, 3405.0, 3383.0, 3327.0, 3259.0, 3167.0, 3067.0, 2967.0, 2902.0, 2850.0, 2839.0, 2841.0, 2844.0, 2891.0, 2953.0, 3015.0, 3077.0, 3161.0, 3252.0, 3343.0, 3433.0, 3524.0, 3615.0 };
double _ess_dynamic_table1_1d_look_up_table1__value;
double _ess_dynamic_table1_1d_look_up_table1__lut_addrs[1201] = { 0.0, 4.0, 8.0, 12.0, 16.0, 20.0, 24.0, 28.0, 32.0, 36.0, 40.0, 44.0, 48.0, 52.0, 56.0, 60.0, 64.0, 68.0, 72.0, 76.0, 80.0, 84.0, 88.0, 92.0, 96.0, 100.0, 104.0, 108.0, 112.0, 116.0, 120.0, 124.0, 128.0, 132.0, 136.0, 140.0, 144.0, 148.0, 152.0, 156.0, 160.0, 164.0, 168.0, 172.0, 176.0, 180.0, 184.0, 188.0, 192.0, 196.0, 200.0, 204.0, 208.0, 212.0, 216.0, 220.0, 224.0, 228.0, 232.0, 236.0, 240.0, 244.0, 248.0, 252.0, 256.0, 260.0, 264.0, 268.0, 272.0, 276.0, 280.0, 284.0, 288.0, 292.0, 296.0, 300.0, 304.0, 308.0, 312.0, 316.0, 320.0, 324.0, 328.0, 332.0, 336.0, 340.0, 344.0, 348.0, 352.0, 356.0, 360.0, 364.0, 368.0, 372.0, 376.0, 380.0, 384.0, 388.0, 392.0, 396.0, 400.0, 404.0, 408.0, 412.0, 416.0, 420.0, 424.0, 428.0, 432.0, 436.0, 440.0, 444.0, 448.0, 452.0, 456.0, 460.0, 464.0, 468.0, 472.0, 476.0, 480.0, 484.0, 488.0, 492.0, 496.0, 500.0, 504.0, 508.0, 512.0, 516.0, 520.0, 524.0, 528.0, 532.0, 536.0, 540.0, 544.0, 548.0, 552.0, 556.0, 560.0, 564.0, 568.0, 572.0, 576.0, 580.0, 584.0, 588.0, 592.0, 596.0, 600.0, 604.0, 608.0, 612.0, 616.0, 620.0, 624.0, 628.0, 632.0, 636.0, 640.0, 644.0, 648.0, 652.0, 656.0, 660.0, 664.0, 668.0, 672.0, 676.0, 680.0, 684.0, 688.0, 692.0, 696.0, 700.0, 704.0, 708.0, 712.0, 716.0, 720.0, 724.0, 728.0, 732.0, 736.0, 740.0, 744.0, 748.0, 752.0, 756.0, 760.0, 764.0, 768.0, 772.0, 776.0, 780.0, 784.0, 788.0, 792.0, 796.0, 800.0, 804.0, 808.0, 812.0, 816.0, 820.0, 824.0, 828.0, 832.0, 836.0, 840.0, 844.0, 848.0, 852.0, 856.0, 860.0, 864.0, 868.0, 872.0, 876.0, 880.0, 884.0, 888.0, 892.0, 896.0, 900.0, 904.0, 908.0, 912.0, 916.0, 920.0, 924.0, 928.0, 932.0, 936.0, 940.0, 944.0, 948.0, 952.0, 956.0, 960.0, 964.0, 968.0, 972.0, 976.0, 980.0, 984.0, 988.0, 992.0, 996.0, 1000.0, 1004.0, 1008.0, 1012.0, 1016.0, 1020.0, 1024.0, 1028.0, 1032.0, 1036.0, 1040.0, 1044.0, 1048.0, 1052.0, 1056.0, 1060.0, 1064.0, 1068.0, 1072.0, 1076.0, 1080.0, 1084.0, 1088.0, 1092.0, 1096.0, 1100.0, 1104.0, 1108.0, 1112.0, 1116.0, 1120.0, 1124.0, 1128.0, 1132.0, 1136.0, 1140.0, 1144.0, 1148.0, 1152.0, 1156.0, 1160.0, 1164.0, 1168.0, 1172.0, 1176.0, 1180.0, 1184.0, 1188.0, 1192.0, 1196.0, 1200.0, 1204.0, 1208.0, 1212.0, 1216.0, 1220.0, 1224.0, 1228.0, 1232.0, 1236.0, 1240.0, 1244.0, 1248.0, 1252.0, 1256.0, 1260.0, 1264.0, 1268.0, 1272.0, 1276.0, 1280.0, 1284.0, 1288.0, 1292.0, 1296.0, 1300.0, 1304.0, 1308.0, 1312.0, 1316.0, 1320.0, 1324.0, 1328.0, 1332.0, 1336.0, 1340.0, 1344.0, 1348.0, 1352.0, 1356.0, 1360.0, 1364.0, 1368.0, 1372.0, 1376.0, 1380.0, 1384.0, 1388.0, 1392.0, 1396.0, 1400.0, 1404.0, 1408.0, 1412.0, 1416.0, 1420.0, 1424.0, 1428.0, 1432.0, 1436.0, 1440.0, 1444.0, 1448.0, 1452.0, 1456.0, 1460.0, 1464.0, 1468.0, 1472.0, 1476.0, 1480.0, 1484.0, 1488.0, 1492.0, 1496.0, 1500.0, 1504.0, 1508.0, 1512.0, 1516.0, 1520.0, 1524.0, 1528.0, 1532.0, 1536.0, 1540.0, 1544.0, 1548.0, 1552.0, 1556.0, 1560.0, 1564.0, 1568.0, 1572.0, 1576.0, 1580.0, 1584.0, 1588.0, 1592.0, 1596.0, 1600.0, 1604.0, 1608.0, 1612.0, 1616.0, 1620.0, 1624.0, 1628.0, 1632.0, 1636.0, 1640.0, 1644.0, 1648.0, 1652.0, 1656.0, 1660.0, 1664.0, 1668.0, 1672.0, 1676.0, 1680.0, 1684.0, 1688.0, 1692.0, 1696.0, 1700.0, 1704.0, 1708.0, 1712.0, 1716.0, 1720.0, 1724.0, 1728.0, 1732.0, 1736.0, 1740.0, 1744.0, 1748.0, 1752.0, 1756.0, 1760.0, 1764.0, 1768.0, 1772.0, 1776.0, 1780.0, 1784.0, 1788.0, 1792.0, 1796.0, 1800.0, 1804.0, 1808.0, 1812.0, 1816.0, 1820.0, 1824.0, 1828.0, 1832.0, 1836.0, 1840.0, 1844.0, 1848.0, 1852.0, 1856.0, 1860.0, 1864.0, 1868.0, 1872.0, 1876.0, 1880.0, 1884.0, 1888.0, 1892.0, 1896.0, 1900.0, 1904.0, 1908.0, 1912.0, 1916.0, 1920.0, 1924.0, 1928.0, 1932.0, 1936.0, 1940.0, 1944.0, 1948.0, 1952.0, 1956.0, 1960.0, 1964.0, 1968.0, 1972.0, 1976.0, 1980.0, 1984.0, 1988.0, 1992.0, 1996.0, 2000.0, 2004.0, 2008.0, 2012.0, 2016.0, 2020.0, 2024.0, 2028.0, 2032.0, 2036.0, 2040.0, 2044.0, 2048.0, 2052.0, 2056.0, 2060.0, 2064.0, 2068.0, 2072.0, 2076.0, 2080.0, 2084.0, 2088.0, 2092.0, 2096.0, 2100.0, 2104.0, 2108.0, 2112.0, 2116.0, 2120.0, 2124.0, 2128.0, 2132.0, 2136.0, 2140.0, 2144.0, 2148.0, 2152.0, 2156.0, 2160.0, 2164.0, 2168.0, 2172.0, 2176.0, 2180.0, 2184.0, 2188.0, 2192.0, 2196.0, 2200.0, 2204.0, 2208.0, 2212.0, 2216.0, 2220.0, 2224.0, 2228.0, 2232.0, 2236.0, 2240.0, 2244.0, 2248.0, 2252.0, 2256.0, 2260.0, 2264.0, 2268.0, 2272.0, 2276.0, 2280.0, 2284.0, 2288.0, 2292.0, 2296.0, 2300.0, 2304.0, 2308.0, 2312.0, 2316.0, 2320.0, 2324.0, 2328.0, 2332.0, 2336.0, 2340.0, 2344.0, 2348.0, 2352.0, 2356.0, 2360.0, 2364.0, 2368.0, 2372.0, 2376.0, 2380.0, 2384.0, 2388.0, 2392.0, 2396.0, 2400.0, 2404.0, 2408.0, 2412.0, 2416.0, 2420.0, 2424.0, 2428.0, 2432.0, 2436.0, 2440.0, 2444.0, 2448.0, 2452.0, 2456.0, 2460.0, 2464.0, 2468.0, 2472.0, 2476.0, 2480.0, 2484.0, 2488.0, 2492.0, 2496.0, 2500.0, 2504.0, 2508.0, 2512.0, 2516.0, 2520.0, 2524.0, 2528.0, 2532.0, 2536.0, 2540.0, 2544.0, 2548.0, 2552.0, 2556.0, 2560.0, 2564.0, 2568.0, 2572.0, 2576.0, 2580.0, 2584.0, 2588.0, 2592.0, 2596.0, 2600.0, 2604.0, 2608.0, 2612.0, 2616.0, 2620.0, 2624.0, 2628.0, 2632.0, 2636.0, 2640.0, 2644.0, 2648.0, 2652.0, 2656.0, 2660.0, 2664.0, 2668.0, 2672.0, 2676.0, 2680.0, 2684.0, 2688.0, 2692.0, 2696.0, 2700.0, 2704.0, 2708.0, 2712.0, 2716.0, 2720.0, 2724.0, 2728.0, 2732.0, 2736.0, 2740.0, 2744.0, 2748.0, 2752.0, 2756.0, 2760.0, 2764.0, 2768.0, 2772.0, 2776.0, 2780.0, 2784.0, 2788.0, 2792.0, 2796.0, 2800.0, 2804.0, 2808.0, 2812.0, 2816.0, 2820.0, 2824.0, 2828.0, 2832.0, 2836.0, 2840.0, 2844.0, 2848.0, 2852.0, 2856.0, 2860.0, 2864.0, 2868.0, 2872.0, 2876.0, 2880.0, 2884.0, 2888.0, 2892.0, 2896.0, 2900.0, 2904.0, 2908.0, 2912.0, 2916.0, 2920.0, 2924.0, 2928.0, 2932.0, 2936.0, 2940.0, 2944.0, 2948.0, 2952.0, 2956.0, 2960.0, 2964.0, 2968.0, 2972.0, 2976.0, 2980.0, 2984.0, 2988.0, 2992.0, 2996.0, 3000.0, 3004.0, 3008.0, 3012.0, 3016.0, 3020.0, 3024.0, 3028.0, 3032.0, 3036.0, 3040.0, 3044.0, 3048.0, 3052.0, 3056.0, 3060.0, 3064.0, 3068.0, 3072.0, 3076.0, 3080.0, 3084.0, 3088.0, 3092.0, 3096.0, 3100.0, 3104.0, 3108.0, 3112.0, 3116.0, 3120.0, 3124.0, 3128.0, 3132.0, 3136.0, 3140.0, 3144.0, 3148.0, 3152.0, 3156.0, 3160.0, 3164.0, 3168.0, 3172.0, 3176.0, 3180.0, 3184.0, 3188.0, 3192.0, 3196.0, 3200.0, 3204.0, 3208.0, 3212.0, 3216.0, 3220.0, 3224.0, 3228.0, 3232.0, 3236.0, 3240.0, 3244.0, 3248.0, 3252.0, 3256.0, 3260.0, 3264.0, 3268.0, 3272.0, 3276.0, 3280.0, 3284.0, 3288.0, 3292.0, 3296.0, 3300.0, 3304.0, 3308.0, 3312.0, 3316.0, 3320.0, 3324.0, 3328.0, 3332.0, 3336.0, 3340.0, 3344.0, 3348.0, 3352.0, 3356.0, 3360.0, 3364.0, 3368.0, 3372.0, 3376.0, 3380.0, 3384.0, 3388.0, 3392.0, 3396.0, 3400.0, 3404.0, 3408.0, 3412.0, 3416.0, 3420.0, 3424.0, 3428.0, 3432.0, 3436.0, 3440.0, 3444.0, 3448.0, 3452.0, 3456.0, 3460.0, 3464.0, 3468.0, 3472.0, 3476.0, 3480.0, 3484.0, 3488.0, 3492.0, 3496.0, 3500.0, 3504.0, 3508.0, 3512.0, 3516.0, 3520.0, 3524.0, 3528.0, 3532.0, 3536.0, 3540.0, 3544.0, 3548.0, 3552.0, 3556.0, 3560.0, 3564.0, 3568.0, 3572.0, 3576.0, 3580.0, 3584.0, 3588.0, 3592.0, 3596.0, 3600.0, 3604.0, 3608.0, 3612.0, 3616.0, 3620.0, 3624.0, 3628.0, 3632.0, 3636.0, 3640.0, 3644.0, 3648.0, 3652.0, 3656.0, 3660.0, 3664.0, 3668.0, 3672.0, 3676.0, 3680.0, 3684.0, 3688.0, 3692.0, 3696.0, 3700.0, 3704.0, 3708.0, 3712.0, 3716.0, 3720.0, 3724.0, 3728.0, 3732.0, 3736.0, 3740.0, 3744.0, 3748.0, 3752.0, 3756.0, 3760.0, 3764.0, 3768.0, 3772.0, 3776.0, 3780.0, 3784.0, 3788.0, 3792.0, 3796.0, 3800.0, 3804.0, 3808.0, 3812.0, 3816.0, 3820.0, 3824.0, 3828.0, 3832.0, 3836.0, 3840.0, 3844.0, 3848.0, 3852.0, 3856.0, 3860.0, 3864.0, 3868.0, 3872.0, 3876.0, 3880.0, 3884.0, 3888.0, 3892.0, 3896.0, 3900.0, 3904.0, 3908.0, 3912.0, 3916.0, 3920.0, 3924.0, 3928.0, 3932.0, 3936.0, 3940.0, 3944.0, 3948.0, 3952.0, 3956.0, 3960.0, 3964.0, 3968.0, 3972.0, 3976.0, 3980.0, 3984.0, 3988.0, 3992.0, 3996.0, 4000.0, 4004.0, 4008.0, 4012.0, 4016.0, 4020.0, 4024.0, 4028.0, 4032.0, 4036.0, 4040.0, 4044.0, 4048.0, 4052.0, 4056.0, 4060.0, 4064.0, 4068.0, 4072.0, 4076.0, 4080.0, 4084.0, 4088.0, 4092.0, 4096.0, 4100.0, 4104.0, 4108.0, 4112.0, 4116.0, 4120.0, 4124.0, 4128.0, 4132.0, 4136.0, 4140.0, 4144.0, 4148.0, 4152.0, 4156.0, 4160.0, 4164.0, 4168.0, 4172.0, 4176.0, 4180.0, 4184.0, 4188.0, 4192.0, 4196.0, 4200.0, 4204.0, 4208.0, 4212.0, 4216.0, 4220.0, 4224.0, 4228.0, 4232.0, 4236.0, 4240.0, 4244.0, 4248.0, 4252.0, 4256.0, 4260.0, 4264.0, 4268.0, 4272.0, 4276.0, 4280.0, 4284.0, 4288.0, 4292.0, 4296.0, 4300.0, 4304.0, 4308.0, 4312.0, 4316.0, 4320.0, 4324.0, 4328.0, 4332.0, 4336.0, 4340.0, 4344.0, 4348.0, 4352.0, 4356.0, 4360.0, 4364.0, 4368.0, 4372.0, 4376.0, 4380.0, 4384.0, 4388.0, 4392.0, 4396.0, 4400.0, 4404.0, 4408.0, 4412.0, 4416.0, 4420.0, 4424.0, 4428.0, 4432.0, 4436.0, 4440.0, 4444.0, 4448.0, 4452.0, 4456.0, 4460.0, 4464.0, 4468.0, 4472.0, 4476.0, 4480.0, 4484.0, 4488.0, 4492.0, 4496.0, 4500.0, 4504.0, 4508.0, 4512.0, 4516.0, 4520.0, 4524.0, 4528.0, 4532.0, 4536.0, 4540.0, 4544.0, 4548.0, 4552.0, 4556.0, 4560.0, 4564.0, 4568.0, 4572.0, 4576.0, 4580.0, 4584.0, 4588.0, 4592.0, 4596.0, 4600.0, 4604.0, 4608.0, 4612.0, 4616.0, 4620.0, 4624.0, 4628.0, 4632.0, 4636.0, 4640.0, 4644.0, 4648.0, 4652.0, 4656.0, 4660.0, 4664.0, 4668.0, 4672.0, 4676.0, 4680.0, 4684.0, 4688.0, 4692.0, 4696.0, 4700.0, 4704.0, 4708.0, 4712.0, 4716.0, 4720.0, 4724.0, 4728.0, 4732.0, 4736.0, 4740.0, 4744.0, 4748.0, 4752.0, 4756.0, 4760.0, 4764.0, 4768.0, 4772.0, 4776.0, 4780.0, 4784.0, 4788.0, 4792.0, 4796.0, 4800.0 };
X_Int32 _ess_dynamic_table1_1d_look_up_table1__leftIndex;
X_Int32 _ess_dynamic_table1_1d_look_up_table1__rightIndex;
X_Int32 _ess_dynamic_table1_1d_look_up_table1__curAddr;
double _ess_dynamic_table1_1d_look_up_table1__fraction;


double _ess_inverter_controller_c_function4__Ts;
double _ess_inverter_controller_c_function4__in;
double _ess_inverter_controller_c_function4__pi;


double _ess_inverter_controller_c_function4__out;
double _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_gain5__out;
X_Int32 _ess_inverter_controller_c_function1__charge;
double _ess_inverter_controller_c_function1__ref;


double _ess_inverter_controller_c_function1__out;
double _ess_inverter_controller_hilbert_transform__out;
double _ess_inverter_controller_hilbert_transform__b_coeff[2] = { -0.9273409576767984, 1.0};
double _ess_inverter_controller_hilbert_transform__a_coeff[2] = {1.0, -0.9273409576767981};
double _ess_inverter_controller_hilbert_transform__a_sum;
double _ess_inverter_controller_hilbert_transform__b_sum;
double _ess_inverter_controller_hilbert_transform__delay_line_in;
double _ess_inverter_controller_hilbert_transform1__out;
double _ess_inverter_controller_hilbert_transform1__b_coeff[2] = { -0.9273409576767984, 1.0};
double _ess_inverter_controller_hilbert_transform1__a_coeff[2] = {1.0, -0.9273409576767981};
double _ess_inverter_controller_hilbert_transform1__a_sum;
double _ess_inverter_controller_hilbert_transform1__b_sum;
double _ess_inverter_controller_hilbert_transform1__delay_line_in;
double _ess_inverter_power_meas_gain6__out;
double _ess_inverter_lpf_dc__out;
double _ess_inverter_lpf_dc__b_coeff[2] = {0.0006279239944363413, 0.0006279239944364523};
double _ess_inverter_lpf_dc__a_coeff[2] = {1.0, -0.9987441520111273};
double _ess_inverter_lpf_dc__a_sum;
double _ess_inverter_lpf_dc__b_sum;
double _ess_inverter_lpf_dc__delay_line_in;
double _ess_sum1__out;
double _ess_modbus_modbus_device__config__comp_coil_in_out__out;
double _ess_modbus_modbus_device__config__comp_holding_in_out__out[2];
double _ess_modbus_bus_join1__out[3];
double _ess_inverter_controller_gain32__out;
double _ess_c_function3__RegD;


double _ess_c_function3__reg;
double _ess_c_function3__time;
double _grid_vs_limit1__out;
double _grid_vs_limit2__out;
double _measurement_bpf_gain__out;
double _measurement_bpf1_gain__out;
double _measurement_bpf_lpf__out;
double _measurement_bpf_lpf__b_coeff[2] = {0.0701119101979838, 0.0701119101979838};
double _measurement_bpf_lpf__a_coeff[2] = {1.0, -0.8597761796040324};
double _measurement_bpf_lpf__a_sum;
double _measurement_bpf_lpf__b_sum;
double _measurement_bpf_lpf__delay_line_in;
double _measurement_bpf1_lpf__out;
double _measurement_bpf1_lpf__b_coeff[2] = {0.0701119101979838, 0.0701119101979838};
double _measurement_bpf1_lpf__a_coeff[2] = {1.0, -0.8597761796040324};
double _measurement_bpf1_lpf__a_sum;
double _measurement_bpf1_lpf__b_sum;
double _measurement_bpf1_lpf__delay_line_in;
double _solarhouse1_inverter_controller_c_function4__Ts;
double _solarhouse1_inverter_controller_c_function4__in;
double _solarhouse1_inverter_controller_c_function4__pi;


double _solarhouse1_inverter_controller_c_function4__out;
double _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_gain5__out;
X_Int32 _solarhouse1_inverter_controller_c_function1__charge;
double _solarhouse1_inverter_controller_c_function1__ref;


double _solarhouse1_inverter_controller_c_function1__out;
double _solarhouse1_inverter_controller_hilbert_transform__out;
double _solarhouse1_inverter_controller_hilbert_transform__b_coeff[2] = { -0.9273409576767984, 1.0};
double _solarhouse1_inverter_controller_hilbert_transform__a_coeff[2] = {1.0, -0.9273409576767981};
double _solarhouse1_inverter_controller_hilbert_transform__a_sum;
double _solarhouse1_inverter_controller_hilbert_transform__b_sum;
double _solarhouse1_inverter_controller_hilbert_transform__delay_line_in;
double _solarhouse1_inverter_controller_hilbert_transform1__out;
double _solarhouse1_inverter_controller_hilbert_transform1__b_coeff[2] = { -0.9273409576767984, 1.0};
double _solarhouse1_inverter_controller_hilbert_transform1__a_coeff[2] = {1.0, -0.9273409576767981};
double _solarhouse1_inverter_controller_hilbert_transform1__a_sum;
double _solarhouse1_inverter_controller_hilbert_transform1__b_sum;
double _solarhouse1_inverter_controller_hilbert_transform1__delay_line_in;
double _solarhouse1_inverter_power_meas_gain6__out;
double _solarhouse1_inverter_lpf_dc__out;
double _solarhouse1_inverter_lpf_dc__b_coeff[2] = {0.0006279239944363413, 0.0006279239944364523};
double _solarhouse1_inverter_lpf_dc__a_coeff[2] = {1.0, -0.9987441520111273};
double _solarhouse1_inverter_lpf_dc__a_sum;
double _solarhouse1_inverter_lpf_dc__b_sum;
double _solarhouse1_inverter_lpf_dc__delay_line_in;
double _solarhouse1_measurement_bpf_gain__out;
double _solarhouse1_measurement_bpf1_gain__out;
double _solarhouse1_measurement_bpf_lpf__out;
double _solarhouse1_measurement_bpf_lpf__b_coeff[2] = {0.0701119101979838, 0.0701119101979838};
double _solarhouse1_measurement_bpf_lpf__a_coeff[2] = {1.0, -0.8597761796040324};
double _solarhouse1_measurement_bpf_lpf__a_sum;
double _solarhouse1_measurement_bpf_lpf__b_sum;
double _solarhouse1_measurement_bpf_lpf__delay_line_in;
double _solarhouse1_measurement_bpf1_lpf__out;
double _solarhouse1_measurement_bpf1_lpf__b_coeff[2] = {0.0701119101979838, 0.0701119101979838};
double _solarhouse1_measurement_bpf1_lpf__a_coeff[2] = {1.0, -0.8597761796040324};
double _solarhouse1_measurement_bpf1_lpf__a_sum;
double _solarhouse1_measurement_bpf1_lpf__b_sum;
double _solarhouse1_measurement_bpf1_lpf__delay_line_in;
double _solarhouse1_sum1__out;
double _solarhouse1_modbus_modbus_device1__config1__comp_coil_in_out__out;
double _solarhouse1_modbus_modbus_device1__config1__comp_holding_in_out__out[2];
double _solarhouse1_modbus_bus_join1__out[2];
double _solarhouse1_inverter_controller_gain32__out;
double _solarhouse2_inverter_controller_c_function4__Ts;
double _solarhouse2_inverter_controller_c_function4__in;
double _solarhouse2_inverter_controller_c_function4__pi;


double _solarhouse2_inverter_controller_c_function4__out;
double _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_gain5__out;
X_Int32 _solarhouse2_inverter_controller_c_function1__charge;
double _solarhouse2_inverter_controller_c_function1__ref;


double _solarhouse2_inverter_controller_c_function1__out;
double _solarhouse2_inverter_controller_hilbert_transform__out;
double _solarhouse2_inverter_controller_hilbert_transform__b_coeff[2] = { -0.9273409576767984, 1.0};
double _solarhouse2_inverter_controller_hilbert_transform__a_coeff[2] = {1.0, -0.9273409576767981};
double _solarhouse2_inverter_controller_hilbert_transform__a_sum;
double _solarhouse2_inverter_controller_hilbert_transform__b_sum;
double _solarhouse2_inverter_controller_hilbert_transform__delay_line_in;
double _solarhouse2_inverter_controller_hilbert_transform1__out;
double _solarhouse2_inverter_controller_hilbert_transform1__b_coeff[2] = { -0.9273409576767984, 1.0};
double _solarhouse2_inverter_controller_hilbert_transform1__a_coeff[2] = {1.0, -0.9273409576767981};
double _solarhouse2_inverter_controller_hilbert_transform1__a_sum;
double _solarhouse2_inverter_controller_hilbert_transform1__b_sum;
double _solarhouse2_inverter_controller_hilbert_transform1__delay_line_in;
double _solarhouse2_inverter_power_meas_gain6__out;
double _solarhouse2_inverter_lpf_dc__out;
double _solarhouse2_inverter_lpf_dc__b_coeff[2] = {0.0006279239944363413, 0.0006279239944364523};
double _solarhouse2_inverter_lpf_dc__a_coeff[2] = {1.0, -0.9987441520111273};
double _solarhouse2_inverter_lpf_dc__a_sum;
double _solarhouse2_inverter_lpf_dc__b_sum;
double _solarhouse2_inverter_lpf_dc__delay_line_in;
double _solarhouse2_measurement_bpf_gain__out;
double _solarhouse2_measurement_bpf1_gain__out;
double _solarhouse2_measurement_bpf_lpf__out;
double _solarhouse2_measurement_bpf_lpf__b_coeff[2] = {0.0701119101979838, 0.0701119101979838};
double _solarhouse2_measurement_bpf_lpf__a_coeff[2] = {1.0, -0.8597761796040324};
double _solarhouse2_measurement_bpf_lpf__a_sum;
double _solarhouse2_measurement_bpf_lpf__b_sum;
double _solarhouse2_measurement_bpf_lpf__delay_line_in;
double _solarhouse2_measurement_bpf1_lpf__out;
double _solarhouse2_measurement_bpf1_lpf__b_coeff[2] = {0.0701119101979838, 0.0701119101979838};
double _solarhouse2_measurement_bpf1_lpf__a_coeff[2] = {1.0, -0.8597761796040324};
double _solarhouse2_measurement_bpf1_lpf__a_sum;
double _solarhouse2_measurement_bpf1_lpf__b_sum;
double _solarhouse2_measurement_bpf1_lpf__delay_line_in;
double _solarhouse2_sum1__out;
double _solarhouse2_modbus_modbus_device2__config2__comp_coil_in_out__out;
double _solarhouse2_modbus_modbus_device2__config2__comp_holding_in_out__out[2];
double _solarhouse2_modbus_bus_join1__out[2];
double _solarhouse2_inverter_controller_gain32__out;
double _solarhouse3_inverter_controller_c_function4__Ts;
double _solarhouse3_inverter_controller_c_function4__in;
double _solarhouse3_inverter_controller_c_function4__pi;


double _solarhouse3_inverter_controller_c_function4__out;
double _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_gain5__out;
X_Int32 _solarhouse3_inverter_controller_c_function1__charge;
double _solarhouse3_inverter_controller_c_function1__ref;


double _solarhouse3_inverter_controller_c_function1__out;
double _solarhouse3_inverter_controller_hilbert_transform__out;
double _solarhouse3_inverter_controller_hilbert_transform__b_coeff[2] = { -0.9273409576767984, 1.0};
double _solarhouse3_inverter_controller_hilbert_transform__a_coeff[2] = {1.0, -0.9273409576767981};
double _solarhouse3_inverter_controller_hilbert_transform__a_sum;
double _solarhouse3_inverter_controller_hilbert_transform__b_sum;
double _solarhouse3_inverter_controller_hilbert_transform__delay_line_in;
double _solarhouse3_inverter_controller_hilbert_transform1__out;
double _solarhouse3_inverter_controller_hilbert_transform1__b_coeff[2] = { -0.9273409576767984, 1.0};
double _solarhouse3_inverter_controller_hilbert_transform1__a_coeff[2] = {1.0, -0.9273409576767981};
double _solarhouse3_inverter_controller_hilbert_transform1__a_sum;
double _solarhouse3_inverter_controller_hilbert_transform1__b_sum;
double _solarhouse3_inverter_controller_hilbert_transform1__delay_line_in;
double _solarhouse3_inverter_power_meas_gain6__out;
double _solarhouse3_inverter_lpf_dc__out;
double _solarhouse3_inverter_lpf_dc__b_coeff[2] = {0.0006279239944363413, 0.0006279239944364523};
double _solarhouse3_inverter_lpf_dc__a_coeff[2] = {1.0, -0.9987441520111273};
double _solarhouse3_inverter_lpf_dc__a_sum;
double _solarhouse3_inverter_lpf_dc__b_sum;
double _solarhouse3_inverter_lpf_dc__delay_line_in;
double _solarhouse3_measurement_bpf_gain__out;
double _solarhouse3_measurement_bpf1_gain__out;
double _solarhouse3_measurement_bpf_lpf__out;
double _solarhouse3_measurement_bpf_lpf__b_coeff[2] = {0.0701119101979838, 0.0701119101979838};
double _solarhouse3_measurement_bpf_lpf__a_coeff[2] = {1.0, -0.8597761796040324};
double _solarhouse3_measurement_bpf_lpf__a_sum;
double _solarhouse3_measurement_bpf_lpf__b_sum;
double _solarhouse3_measurement_bpf_lpf__delay_line_in;
double _solarhouse3_measurement_bpf1_lpf__out;
double _solarhouse3_measurement_bpf1_lpf__b_coeff[2] = {0.0701119101979838, 0.0701119101979838};
double _solarhouse3_measurement_bpf1_lpf__a_coeff[2] = {1.0, -0.8597761796040324};
double _solarhouse3_measurement_bpf1_lpf__a_sum;
double _solarhouse3_measurement_bpf1_lpf__b_sum;
double _solarhouse3_measurement_bpf1_lpf__delay_line_in;
double _solarhouse3_sum1__out;
double _solarhouse3_modbus_modbus_device3__config3__comp_coil_in_out__out;
double _solarhouse3_modbus_modbus_device3__config3__comp_holding_in_out__out[2];
double _solarhouse3_modbus_bus_join1__out[2];
double _solarhouse3_inverter_controller_gain32__out;
double _solarhouse4_inverter_controller_c_function4__Ts;
double _solarhouse4_inverter_controller_c_function4__in;
double _solarhouse4_inverter_controller_c_function4__pi;


double _solarhouse4_inverter_controller_c_function4__out;
double _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_gain5__out;
X_Int32 _solarhouse4_inverter_controller_c_function1__charge;
double _solarhouse4_inverter_controller_c_function1__ref;


double _solarhouse4_inverter_controller_c_function1__out;
double _solarhouse4_inverter_controller_hilbert_transform__out;
double _solarhouse4_inverter_controller_hilbert_transform__b_coeff[2] = { -0.9273409576767984, 1.0};
double _solarhouse4_inverter_controller_hilbert_transform__a_coeff[2] = {1.0, -0.9273409576767981};
double _solarhouse4_inverter_controller_hilbert_transform__a_sum;
double _solarhouse4_inverter_controller_hilbert_transform__b_sum;
double _solarhouse4_inverter_controller_hilbert_transform__delay_line_in;
double _solarhouse4_inverter_controller_hilbert_transform1__out;
double _solarhouse4_inverter_controller_hilbert_transform1__b_coeff[2] = { -0.9273409576767984, 1.0};
double _solarhouse4_inverter_controller_hilbert_transform1__a_coeff[2] = {1.0, -0.9273409576767981};
double _solarhouse4_inverter_controller_hilbert_transform1__a_sum;
double _solarhouse4_inverter_controller_hilbert_transform1__b_sum;
double _solarhouse4_inverter_controller_hilbert_transform1__delay_line_in;
double _solarhouse4_inverter_power_meas_gain6__out;
double _solarhouse4_inverter_lpf_dc__out;
double _solarhouse4_inverter_lpf_dc__b_coeff[2] = {0.0006279239944363413, 0.0006279239944364523};
double _solarhouse4_inverter_lpf_dc__a_coeff[2] = {1.0, -0.9987441520111273};
double _solarhouse4_inverter_lpf_dc__a_sum;
double _solarhouse4_inverter_lpf_dc__b_sum;
double _solarhouse4_inverter_lpf_dc__delay_line_in;
double _solarhouse4_measurement_bpf_gain__out;
double _solarhouse4_measurement_bpf1_gain__out;
double _solarhouse4_measurement_bpf_lpf__out;
double _solarhouse4_measurement_bpf_lpf__b_coeff[2] = {0.0701119101979838, 0.0701119101979838};
double _solarhouse4_measurement_bpf_lpf__a_coeff[2] = {1.0, -0.8597761796040324};
double _solarhouse4_measurement_bpf_lpf__a_sum;
double _solarhouse4_measurement_bpf_lpf__b_sum;
double _solarhouse4_measurement_bpf_lpf__delay_line_in;
double _solarhouse4_measurement_bpf1_lpf__out;
double _solarhouse4_measurement_bpf1_lpf__b_coeff[2] = {0.0701119101979838, 0.0701119101979838};
double _solarhouse4_measurement_bpf1_lpf__a_coeff[2] = {1.0, -0.8597761796040324};
double _solarhouse4_measurement_bpf1_lpf__a_sum;
double _solarhouse4_measurement_bpf1_lpf__b_sum;
double _solarhouse4_measurement_bpf1_lpf__delay_line_in;
double _solarhouse4_sum1__out;
double _solarhouse4_modbus_modbus_device4__config4__comp_coil_in_out__out;
double _solarhouse4_modbus_modbus_device4__config4__comp_holding_in_out__out[2];
double _solarhouse4_modbus_bus_join1__out[2];
double _solarhouse4_inverter_controller_gain32__out;
double _ess_inverter_controller_gain22__out;
double _ess_inverter_controller_alpha_beta_to_dq1__d;
double _ess_inverter_controller_alpha_beta_to_dq1__q;
double _ess_inverter_controller_alpha_beta_to_dq1__k1;
double _ess_inverter_controller_alpha_beta_to_dq1__k2;
double _ess_inverter_controller_alpha_beta_to_dq2__d;
double _ess_inverter_controller_alpha_beta_to_dq2__q;
double _ess_inverter_controller_alpha_beta_to_dq2__k1;
double _ess_inverter_controller_alpha_beta_to_dq2__k2;
X_UnInt32 _grid_vs_tdf_sg_ctrl_sine1__channels[1] = {0};
double _grid_vs_tdf_sg_ctrl_sine1__gain;
double _grid_vs_tdf_sg_ctrl_sine1__period;
double _grid_vs_tdf_sg_ctrl_sine1__shift;
double _grid_vs_tdf_sg_ctrl_sine1__phase_pu;
double _grid_vs_tdf_sg_ctrl_sine1__offset;
X_UnInt32 _grid_vs_tdf_sg_ctrl_sine1__offset_uint;
X_UnInt32 _grid_vs_tdf_sg_ctrl_sine1__sample_cnt_inc_lo;
X_UnInt32 _grid_vs_tdf_sg_ctrl_sine1__sample_cnt_inc_hi;
double _grid_vs_tdf_sg_ctrl_sine1__sample_cnt_inc_real;
X_UnInt32 _grid_vs_tdf_sg_ctrl_sine1__sg_update_value;
double _grid_vs_tdf_sg_ctrl_sine1__xn;
double _grid_vs_tdf_sg_ctrl_sine1__xn_1;
double _grid_vs_tdf_sg_ctrl_sine1__yn;
double _grid_vs_tdf_sg_ctrl_sine1__yn_1;
double _grid_vs_tdf_sg_ctrl_sine1__k;
double _measurement_hilbert_transform1__out;
double _measurement_hilbert_transform1__b_coeff[2] = { -0.9273409576767984, 1.0};
double _measurement_hilbert_transform1__a_coeff[2] = {1.0, -0.9273409576767981};
double _measurement_hilbert_transform1__a_sum;
double _measurement_hilbert_transform1__b_sum;
double _measurement_hilbert_transform1__delay_line_in;
double _measurement_hilbert_transform__out;
double _measurement_hilbert_transform__b_coeff[2] = { -0.9273409576767984, 1.0};
double _measurement_hilbert_transform__a_coeff[2] = {1.0, -0.9273409576767981};
double _measurement_hilbert_transform__a_sum;
double _measurement_hilbert_transform__b_sum;
double _measurement_hilbert_transform__delay_line_in;
double _measurement_product1__out;
double _solarhouse1_inverter_controller_gain22__out;
double _solarhouse1_inverter_controller_alpha_beta_to_dq1__d;
double _solarhouse1_inverter_controller_alpha_beta_to_dq1__q;
double _solarhouse1_inverter_controller_alpha_beta_to_dq1__k1;
double _solarhouse1_inverter_controller_alpha_beta_to_dq1__k2;
double _solarhouse1_inverter_controller_alpha_beta_to_dq2__d;
double _solarhouse1_inverter_controller_alpha_beta_to_dq2__q;
double _solarhouse1_inverter_controller_alpha_beta_to_dq2__k1;
double _solarhouse1_inverter_controller_alpha_beta_to_dq2__k2;
double _solarhouse1_measurement_hilbert_transform1__out;
double _solarhouse1_measurement_hilbert_transform1__b_coeff[2] = { -0.9273409576767984, 1.0};
double _solarhouse1_measurement_hilbert_transform1__a_coeff[2] = {1.0, -0.9273409576767981};
double _solarhouse1_measurement_hilbert_transform1__a_sum;
double _solarhouse1_measurement_hilbert_transform1__b_sum;
double _solarhouse1_measurement_hilbert_transform1__delay_line_in;
double _solarhouse1_measurement_hilbert_transform__out;
double _solarhouse1_measurement_hilbert_transform__b_coeff[2] = { -0.9273409576767984, 1.0};
double _solarhouse1_measurement_hilbert_transform__a_coeff[2] = {1.0, -0.9273409576767981};
double _solarhouse1_measurement_hilbert_transform__a_sum;
double _solarhouse1_measurement_hilbert_transform__b_sum;
double _solarhouse1_measurement_hilbert_transform__delay_line_in;
double _solarhouse1_measurement_product1__out;
double _solarhouse2_inverter_controller_gain22__out;
double _solarhouse2_inverter_controller_alpha_beta_to_dq1__d;
double _solarhouse2_inverter_controller_alpha_beta_to_dq1__q;
double _solarhouse2_inverter_controller_alpha_beta_to_dq1__k1;
double _solarhouse2_inverter_controller_alpha_beta_to_dq1__k2;
double _solarhouse2_inverter_controller_alpha_beta_to_dq2__d;
double _solarhouse2_inverter_controller_alpha_beta_to_dq2__q;
double _solarhouse2_inverter_controller_alpha_beta_to_dq2__k1;
double _solarhouse2_inverter_controller_alpha_beta_to_dq2__k2;
double _solarhouse2_measurement_hilbert_transform1__out;
double _solarhouse2_measurement_hilbert_transform1__b_coeff[2] = { -0.9273409576767984, 1.0};
double _solarhouse2_measurement_hilbert_transform1__a_coeff[2] = {1.0, -0.9273409576767981};
double _solarhouse2_measurement_hilbert_transform1__a_sum;
double _solarhouse2_measurement_hilbert_transform1__b_sum;
double _solarhouse2_measurement_hilbert_transform1__delay_line_in;
double _solarhouse2_measurement_hilbert_transform__out;
double _solarhouse2_measurement_hilbert_transform__b_coeff[2] = { -0.9273409576767984, 1.0};
double _solarhouse2_measurement_hilbert_transform__a_coeff[2] = {1.0, -0.9273409576767981};
double _solarhouse2_measurement_hilbert_transform__a_sum;
double _solarhouse2_measurement_hilbert_transform__b_sum;
double _solarhouse2_measurement_hilbert_transform__delay_line_in;
double _solarhouse2_measurement_product1__out;
double _solarhouse3_inverter_controller_gain22__out;
double _solarhouse3_inverter_controller_alpha_beta_to_dq1__d;
double _solarhouse3_inverter_controller_alpha_beta_to_dq1__q;
double _solarhouse3_inverter_controller_alpha_beta_to_dq1__k1;
double _solarhouse3_inverter_controller_alpha_beta_to_dq1__k2;
double _solarhouse3_inverter_controller_alpha_beta_to_dq2__d;
double _solarhouse3_inverter_controller_alpha_beta_to_dq2__q;
double _solarhouse3_inverter_controller_alpha_beta_to_dq2__k1;
double _solarhouse3_inverter_controller_alpha_beta_to_dq2__k2;
double _solarhouse3_measurement_hilbert_transform1__out;
double _solarhouse3_measurement_hilbert_transform1__b_coeff[2] = { -0.9273409576767984, 1.0};
double _solarhouse3_measurement_hilbert_transform1__a_coeff[2] = {1.0, -0.9273409576767981};
double _solarhouse3_measurement_hilbert_transform1__a_sum;
double _solarhouse3_measurement_hilbert_transform1__b_sum;
double _solarhouse3_measurement_hilbert_transform1__delay_line_in;
double _solarhouse3_measurement_hilbert_transform__out;
double _solarhouse3_measurement_hilbert_transform__b_coeff[2] = { -0.9273409576767984, 1.0};
double _solarhouse3_measurement_hilbert_transform__a_coeff[2] = {1.0, -0.9273409576767981};
double _solarhouse3_measurement_hilbert_transform__a_sum;
double _solarhouse3_measurement_hilbert_transform__b_sum;
double _solarhouse3_measurement_hilbert_transform__delay_line_in;
double _solarhouse3_measurement_product1__out;
double _solarhouse4_inverter_controller_gain22__out;
double _solarhouse4_inverter_controller_alpha_beta_to_dq1__d;
double _solarhouse4_inverter_controller_alpha_beta_to_dq1__q;
double _solarhouse4_inverter_controller_alpha_beta_to_dq1__k1;
double _solarhouse4_inverter_controller_alpha_beta_to_dq1__k2;
double _solarhouse4_inverter_controller_alpha_beta_to_dq2__d;
double _solarhouse4_inverter_controller_alpha_beta_to_dq2__q;
double _solarhouse4_inverter_controller_alpha_beta_to_dq2__k1;
double _solarhouse4_inverter_controller_alpha_beta_to_dq2__k2;
double _solarhouse4_measurement_hilbert_transform1__out;
double _solarhouse4_measurement_hilbert_transform1__b_coeff[2] = { -0.9273409576767984, 1.0};
double _solarhouse4_measurement_hilbert_transform1__a_coeff[2] = {1.0, -0.9273409576767981};
double _solarhouse4_measurement_hilbert_transform1__a_sum;
double _solarhouse4_measurement_hilbert_transform1__b_sum;
double _solarhouse4_measurement_hilbert_transform1__delay_line_in;
double _solarhouse4_measurement_hilbert_transform__out;
double _solarhouse4_measurement_hilbert_transform__b_coeff[2] = { -0.9273409576767984, 1.0};
double _solarhouse4_measurement_hilbert_transform__a_coeff[2] = {1.0, -0.9273409576767981};
double _solarhouse4_measurement_hilbert_transform__a_sum;
double _solarhouse4_measurement_hilbert_transform__b_sum;
double _solarhouse4_measurement_hilbert_transform__delay_line_in;
double _solarhouse4_measurement_product1__out;
double _ess_inverter_controller_gain28__out;
double _ess_inverter_controller_gain29__out;
double _ess_inverter_controller_gain30__out;
double _ess_inverter_controller_gain31__out;
double _measurement_product2__out;
double _solarhouse1_inverter_controller_gain28__out;
double _solarhouse1_inverter_controller_gain29__out;
double _solarhouse1_inverter_controller_gain30__out;
double _solarhouse1_inverter_controller_gain31__out;
double _solarhouse1_measurement_product2__out;
double _solarhouse2_inverter_controller_gain28__out;
double _solarhouse2_inverter_controller_gain29__out;
double _solarhouse2_inverter_controller_gain30__out;
double _solarhouse2_inverter_controller_gain31__out;
double _solarhouse2_measurement_product2__out;
double _solarhouse3_inverter_controller_gain28__out;
double _solarhouse3_inverter_controller_gain29__out;
double _solarhouse3_inverter_controller_gain30__out;
double _solarhouse3_inverter_controller_gain31__out;
double _solarhouse3_measurement_product2__out;
double _solarhouse4_inverter_controller_gain28__out;
double _solarhouse4_inverter_controller_gain29__out;
double _solarhouse4_inverter_controller_gain30__out;
double _solarhouse4_inverter_controller_gain31__out;
double _solarhouse4_measurement_product2__out;
double _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__out;
double _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__b_coeff[2] = {0.0006279239944363413, 0.0006279239944364523};
double _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__a_coeff[2] = {1.0, -0.9987441520111273};
double _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__a_sum;
double _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__b_sum;
double _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__delay_line_in;
double _ess_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_product4__out;
double _ess_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_product5__out;
double _ess_inverter_controller_outer_voltage_loop___inner_current_loop_squared_vt2_product1__out;
double _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__out;
double _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__b_coeff[2] = {0.0006279239944363413, 0.0006279239944364523};
double _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__a_coeff[2] = {1.0, -0.9987441520111273};
double _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__a_sum;
double _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__b_sum;
double _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__delay_line_in;
double _ess_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_product3__out;
double _ess_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_product6__out;
double _ess_inverter_controller_outer_voltage_loop___inner_current_loop_squared_vt2_product2__out;
double _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_gain7__out;
double _ess_inverter_power_meas_power_meas_dqpu_product1__out;
double _ess_inverter_power_meas_power_meas_dqpu_product4__out;
double _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_gain6__out;
double _ess_inverter_power_meas_power_meas_dqpu_product2__out;
double _ess_inverter_power_meas_power_meas_dqpu_product3__out;
double _measurement_sum1__out;
double _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__out;
double _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__b_coeff[2] = {0.0006279239944363413, 0.0006279239944364523};
double _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__a_coeff[2] = {1.0, -0.9987441520111273};
double _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__a_sum;
double _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__b_sum;
double _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__delay_line_in;
double _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_product4__out;
double _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_product5__out;
double _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_squared_vt2_product1__out;
double _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__out;
double _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__b_coeff[2] = {0.0006279239944363413, 0.0006279239944364523};
double _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__a_coeff[2] = {1.0, -0.9987441520111273};
double _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__a_sum;
double _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__b_sum;
double _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__delay_line_in;
double _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_product3__out;
double _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_product6__out;
double _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_squared_vt2_product2__out;
double _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_gain7__out;
double _solarhouse1_inverter_power_meas_power_meas_dqpu_product1__out;
double _solarhouse1_inverter_power_meas_power_meas_dqpu_product4__out;
double _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_gain6__out;
double _solarhouse1_inverter_power_meas_power_meas_dqpu_product2__out;
double _solarhouse1_inverter_power_meas_power_meas_dqpu_product3__out;
double _solarhouse1_measurement_sum1__out;
double _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__out;
double _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__b_coeff[2] = {0.0006279239944363413, 0.0006279239944364523};
double _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__a_coeff[2] = {1.0, -0.9987441520111273};
double _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__a_sum;
double _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__b_sum;
double _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__delay_line_in;
double _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_product4__out;
double _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_product5__out;
double _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_squared_vt2_product1__out;
double _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__out;
double _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__b_coeff[2] = {0.0006279239944363413, 0.0006279239944364523};
double _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__a_coeff[2] = {1.0, -0.9987441520111273};
double _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__a_sum;
double _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__b_sum;
double _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__delay_line_in;
double _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_product3__out;
double _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_product6__out;
double _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_squared_vt2_product2__out;
double _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_gain7__out;
double _solarhouse2_inverter_power_meas_power_meas_dqpu_product1__out;
double _solarhouse2_inverter_power_meas_power_meas_dqpu_product4__out;
double _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_gain6__out;
double _solarhouse2_inverter_power_meas_power_meas_dqpu_product2__out;
double _solarhouse2_inverter_power_meas_power_meas_dqpu_product3__out;
double _solarhouse2_measurement_sum1__out;
double _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__out;
double _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__b_coeff[2] = {0.0006279239944363413, 0.0006279239944364523};
double _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__a_coeff[2] = {1.0, -0.9987441520111273};
double _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__a_sum;
double _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__b_sum;
double _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__delay_line_in;
double _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_product4__out;
double _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_product5__out;
double _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_squared_vt2_product1__out;
double _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__out;
double _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__b_coeff[2] = {0.0006279239944363413, 0.0006279239944364523};
double _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__a_coeff[2] = {1.0, -0.9987441520111273};
double _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__a_sum;
double _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__b_sum;
double _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__delay_line_in;
double _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_product3__out;
double _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_product6__out;
double _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_squared_vt2_product2__out;
double _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_gain7__out;
double _solarhouse3_inverter_power_meas_power_meas_dqpu_product1__out;
double _solarhouse3_inverter_power_meas_power_meas_dqpu_product4__out;
double _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_gain6__out;
double _solarhouse3_inverter_power_meas_power_meas_dqpu_product2__out;
double _solarhouse3_inverter_power_meas_power_meas_dqpu_product3__out;
double _solarhouse3_measurement_sum1__out;
double _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__out;
double _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__b_coeff[2] = {0.0006279239944363413, 0.0006279239944364523};
double _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__a_coeff[2] = {1.0, -0.9987441520111273};
double _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__a_sum;
double _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__b_sum;
double _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__delay_line_in;
double _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_product4__out;
double _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_product5__out;
double _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_squared_vt2_product1__out;
double _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__out;
double _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__b_coeff[2] = {0.0006279239944363413, 0.0006279239944364523};
double _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__a_coeff[2] = {1.0, -0.9987441520111273};
double _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__a_sum;
double _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__b_sum;
double _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__delay_line_in;
double _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_product3__out;
double _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_product6__out;
double _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_squared_vt2_product2__out;
double _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_gain7__out;
double _solarhouse4_inverter_power_meas_power_meas_dqpu_product1__out;
double _solarhouse4_inverter_power_meas_power_meas_dqpu_product4__out;
double _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_gain6__out;
double _solarhouse4_inverter_power_meas_power_meas_dqpu_product2__out;
double _solarhouse4_inverter_power_meas_power_meas_dqpu_product3__out;
double _solarhouse4_measurement_sum1__out;
double _ess_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_sum3__out;
double _ess_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_sum4__out;
double _ess_inverter_controller_outer_voltage_loop___inner_current_loop_squared_vt2_sum3__out;
double _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_product2__out;
double _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_product1__out;
double _ess_inverter_power_meas_power_meas_dqpu_sum1__out;
double _ess_inverter_power_meas_power_meas_dqpu_sum2__out;
double _measurement_gain1__out;
double _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_sum3__out;
double _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_sum4__out;
double _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_squared_vt2_sum3__out;
double _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_product2__out;
double _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_product1__out;
double _solarhouse1_inverter_power_meas_power_meas_dqpu_sum1__out;
double _solarhouse1_inverter_power_meas_power_meas_dqpu_sum2__out;
double _solarhouse1_measurement_gain1__out;
double _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_sum3__out;
double _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_sum4__out;
double _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_squared_vt2_sum3__out;
double _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_product2__out;
double _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_product1__out;
double _solarhouse2_inverter_power_meas_power_meas_dqpu_sum1__out;
double _solarhouse2_inverter_power_meas_power_meas_dqpu_sum2__out;
double _solarhouse2_measurement_gain1__out;
double _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_sum3__out;
double _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_sum4__out;
double _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_squared_vt2_sum3__out;
double _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_product2__out;
double _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_product1__out;
double _solarhouse3_inverter_power_meas_power_meas_dqpu_sum1__out;
double _solarhouse3_inverter_power_meas_power_meas_dqpu_sum2__out;
double _solarhouse3_measurement_gain1__out;
double _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_sum3__out;
double _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_sum4__out;
double _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_squared_vt2_sum3__out;
double _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_product2__out;
double _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_product1__out;
double _solarhouse4_inverter_power_meas_power_meas_dqpu_sum1__out;
double _solarhouse4_inverter_power_meas_power_meas_dqpu_sum2__out;
double _solarhouse4_measurement_gain1__out;
double _ess_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_comparator1__out;
double _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum6__out;
double _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum5__out;
double _ess_inverter_power_meas_power_meas_dqpu_lpf_p__out;
double _ess_inverter_power_meas_power_meas_dqpu_lpf_p__b_coeff[2] = {0.0006279239944363413, 0.0006279239944364523};
double _ess_inverter_power_meas_power_meas_dqpu_lpf_p__a_coeff[2] = {1.0, -0.9987441520111273};
double _ess_inverter_power_meas_power_meas_dqpu_lpf_p__a_sum;
double _ess_inverter_power_meas_power_meas_dqpu_lpf_p__b_sum;
double _ess_inverter_power_meas_power_meas_dqpu_lpf_p__delay_line_in;
double _ess_inverter_power_meas_power_meas_dqpu_lpf_q__out;
double _ess_inverter_power_meas_power_meas_dqpu_lpf_q__b_coeff[2] = {0.0006279239944363413, 0.0006279239944364523};
double _ess_inverter_power_meas_power_meas_dqpu_lpf_q__a_coeff[2] = {1.0, -0.9987441520111273};
double _ess_inverter_power_meas_power_meas_dqpu_lpf_q__a_sum;
double _ess_inverter_power_meas_power_meas_dqpu_lpf_q__b_sum;
double _ess_inverter_power_meas_power_meas_dqpu_lpf_q__delay_line_in;
double _measurement_lpf_p__out;
double _measurement_lpf_p__b_coeff[2] = {0.0006279239944363413, 0.0006279239944364523};
double _measurement_lpf_p__a_coeff[2] = {1.0, -0.9987441520111273};
double _measurement_lpf_p__a_sum;
double _measurement_lpf_p__b_sum;
double _measurement_lpf_p__delay_line_in;
double _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_comparator1__out;
double _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum6__out;
double _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum5__out;
double _solarhouse1_inverter_power_meas_power_meas_dqpu_lpf_p__out;
double _solarhouse1_inverter_power_meas_power_meas_dqpu_lpf_p__b_coeff[2] = {0.0006279239944363413, 0.0006279239944364523};
double _solarhouse1_inverter_power_meas_power_meas_dqpu_lpf_p__a_coeff[2] = {1.0, -0.9987441520111273};
double _solarhouse1_inverter_power_meas_power_meas_dqpu_lpf_p__a_sum;
double _solarhouse1_inverter_power_meas_power_meas_dqpu_lpf_p__b_sum;
double _solarhouse1_inverter_power_meas_power_meas_dqpu_lpf_p__delay_line_in;
double _solarhouse1_inverter_power_meas_power_meas_dqpu_lpf_q__out;
double _solarhouse1_inverter_power_meas_power_meas_dqpu_lpf_q__b_coeff[2] = {0.0006279239944363413, 0.0006279239944364523};
double _solarhouse1_inverter_power_meas_power_meas_dqpu_lpf_q__a_coeff[2] = {1.0, -0.9987441520111273};
double _solarhouse1_inverter_power_meas_power_meas_dqpu_lpf_q__a_sum;
double _solarhouse1_inverter_power_meas_power_meas_dqpu_lpf_q__b_sum;
double _solarhouse1_inverter_power_meas_power_meas_dqpu_lpf_q__delay_line_in;
double _solarhouse1_measurement_lpf_p__out;
double _solarhouse1_measurement_lpf_p__b_coeff[2] = {0.0006279239944363413, 0.0006279239944364523};
double _solarhouse1_measurement_lpf_p__a_coeff[2] = {1.0, -0.9987441520111273};
double _solarhouse1_measurement_lpf_p__a_sum;
double _solarhouse1_measurement_lpf_p__b_sum;
double _solarhouse1_measurement_lpf_p__delay_line_in;
double _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_comparator1__out;
double _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum6__out;
double _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum5__out;
double _solarhouse2_inverter_power_meas_power_meas_dqpu_lpf_p__out;
double _solarhouse2_inverter_power_meas_power_meas_dqpu_lpf_p__b_coeff[2] = {0.0006279239944363413, 0.0006279239944364523};
double _solarhouse2_inverter_power_meas_power_meas_dqpu_lpf_p__a_coeff[2] = {1.0, -0.9987441520111273};
double _solarhouse2_inverter_power_meas_power_meas_dqpu_lpf_p__a_sum;
double _solarhouse2_inverter_power_meas_power_meas_dqpu_lpf_p__b_sum;
double _solarhouse2_inverter_power_meas_power_meas_dqpu_lpf_p__delay_line_in;
double _solarhouse2_inverter_power_meas_power_meas_dqpu_lpf_q__out;
double _solarhouse2_inverter_power_meas_power_meas_dqpu_lpf_q__b_coeff[2] = {0.0006279239944363413, 0.0006279239944364523};
double _solarhouse2_inverter_power_meas_power_meas_dqpu_lpf_q__a_coeff[2] = {1.0, -0.9987441520111273};
double _solarhouse2_inverter_power_meas_power_meas_dqpu_lpf_q__a_sum;
double _solarhouse2_inverter_power_meas_power_meas_dqpu_lpf_q__b_sum;
double _solarhouse2_inverter_power_meas_power_meas_dqpu_lpf_q__delay_line_in;
double _solarhouse2_measurement_lpf_p__out;
double _solarhouse2_measurement_lpf_p__b_coeff[2] = {0.0006279239944363413, 0.0006279239944364523};
double _solarhouse2_measurement_lpf_p__a_coeff[2] = {1.0, -0.9987441520111273};
double _solarhouse2_measurement_lpf_p__a_sum;
double _solarhouse2_measurement_lpf_p__b_sum;
double _solarhouse2_measurement_lpf_p__delay_line_in;
double _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_comparator1__out;
double _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum6__out;
double _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum5__out;
double _solarhouse3_inverter_power_meas_power_meas_dqpu_lpf_p__out;
double _solarhouse3_inverter_power_meas_power_meas_dqpu_lpf_p__b_coeff[2] = {0.0006279239944363413, 0.0006279239944364523};
double _solarhouse3_inverter_power_meas_power_meas_dqpu_lpf_p__a_coeff[2] = {1.0, -0.9987441520111273};
double _solarhouse3_inverter_power_meas_power_meas_dqpu_lpf_p__a_sum;
double _solarhouse3_inverter_power_meas_power_meas_dqpu_lpf_p__b_sum;
double _solarhouse3_inverter_power_meas_power_meas_dqpu_lpf_p__delay_line_in;
double _solarhouse3_inverter_power_meas_power_meas_dqpu_lpf_q__out;
double _solarhouse3_inverter_power_meas_power_meas_dqpu_lpf_q__b_coeff[2] = {0.0006279239944363413, 0.0006279239944364523};
double _solarhouse3_inverter_power_meas_power_meas_dqpu_lpf_q__a_coeff[2] = {1.0, -0.9987441520111273};
double _solarhouse3_inverter_power_meas_power_meas_dqpu_lpf_q__a_sum;
double _solarhouse3_inverter_power_meas_power_meas_dqpu_lpf_q__b_sum;
double _solarhouse3_inverter_power_meas_power_meas_dqpu_lpf_q__delay_line_in;
double _solarhouse3_measurement_lpf_p__out;
double _solarhouse3_measurement_lpf_p__b_coeff[2] = {0.0006279239944363413, 0.0006279239944364523};
double _solarhouse3_measurement_lpf_p__a_coeff[2] = {1.0, -0.9987441520111273};
double _solarhouse3_measurement_lpf_p__a_sum;
double _solarhouse3_measurement_lpf_p__b_sum;
double _solarhouse3_measurement_lpf_p__delay_line_in;
double _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_comparator1__out;
double _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum6__out;
double _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum5__out;
double _solarhouse4_inverter_power_meas_power_meas_dqpu_lpf_p__out;
double _solarhouse4_inverter_power_meas_power_meas_dqpu_lpf_p__b_coeff[2] = {0.0006279239944363413, 0.0006279239944364523};
double _solarhouse4_inverter_power_meas_power_meas_dqpu_lpf_p__a_coeff[2] = {1.0, -0.9987441520111273};
double _solarhouse4_inverter_power_meas_power_meas_dqpu_lpf_p__a_sum;
double _solarhouse4_inverter_power_meas_power_meas_dqpu_lpf_p__b_sum;
double _solarhouse4_inverter_power_meas_power_meas_dqpu_lpf_p__delay_line_in;
double _solarhouse4_inverter_power_meas_power_meas_dqpu_lpf_q__out;
double _solarhouse4_inverter_power_meas_power_meas_dqpu_lpf_q__b_coeff[2] = {0.0006279239944363413, 0.0006279239944364523};
double _solarhouse4_inverter_power_meas_power_meas_dqpu_lpf_q__a_coeff[2] = {1.0, -0.9987441520111273};
double _solarhouse4_inverter_power_meas_power_meas_dqpu_lpf_q__a_sum;
double _solarhouse4_inverter_power_meas_power_meas_dqpu_lpf_q__b_sum;
double _solarhouse4_inverter_power_meas_power_meas_dqpu_lpf_q__delay_line_in;
double _solarhouse4_measurement_lpf_p__out;
double _solarhouse4_measurement_lpf_p__b_coeff[2] = {0.0006279239944363413, 0.0006279239944364523};
double _solarhouse4_measurement_lpf_p__a_coeff[2] = {1.0, -0.9987441520111273};
double _solarhouse4_measurement_lpf_p__a_sum;
double _solarhouse4_measurement_lpf_p__b_sum;
double _solarhouse4_measurement_lpf_p__delay_line_in;
double _ess_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_signal_switch1__out;
double _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_signal_switch1__out;
double _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_signal_switch1__out;
double _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_signal_switch1__out;
double _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_signal_switch1__out;
double _ess_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_product1__out;
double _ess_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_product2__out;
double _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_product1__out;
double _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_product2__out;
double _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_product1__out;
double _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_product2__out;
double _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_product1__out;
double _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_product2__out;
double _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_product1__out;
double _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_product2__out;
double _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum9__out;
double _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum8__out;
double _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum9__out;
double _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum8__out;
double _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum9__out;
double _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum8__out;
double _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum9__out;
double _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum8__out;
double _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum9__out;
double _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum8__out;
double _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__out;
double _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__pi_reg_out_int;
double _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__out;
double _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__pi_reg_out_int;
double _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__out;
double _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__pi_reg_out_int;
double _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__out;
double _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__pi_reg_out_int;
double _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__out;
double _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__pi_reg_out_int;
double _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__out;
double _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__pi_reg_out_int;
double _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__out;
double _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__pi_reg_out_int;
double _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__out;
double _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__pi_reg_out_int;
double _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__out;
double _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__pi_reg_out_int;
double _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__out;
double _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__pi_reg_out_int;
double _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum7__out;
double _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum3__out;
double _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum7__out;
double _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum3__out;
double _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum7__out;
double _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum3__out;
double _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum7__out;
double _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum3__out;
double _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum7__out;
double _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum3__out;
double _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_product6__out;
double _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_product5__out;
double _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_product6__out;
double _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_product5__out;
double _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_product6__out;
double _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_product5__out;
double _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_product6__out;
double _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_product5__out;
double _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_product6__out;
double _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_product5__out;
double _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_limit2__out;
double _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_limit1__out;
double _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_limit2__out;
double _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_limit1__out;
double _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_limit2__out;
double _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_limit1__out;
double _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_limit2__out;
double _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_limit1__out;
double _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_limit2__out;
double _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_limit1__out;
double _ess_inverter_controller_outer_voltage_loop___inner_current_loop_gain6__out;
double _ess_inverter_controller_outer_voltage_loop___inner_current_loop_gain5__out;
double _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_gain6__out;
double _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_gain5__out;
double _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_gain6__out;
double _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_gain5__out;
double _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_gain6__out;
double _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_gain5__out;
double _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_gain6__out;
double _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_gain5__out;
double _ess_inverter_controller_outer_voltage_loop___inner_current_loop_dq_to_alpha_beta__alpha;
double _ess_inverter_controller_outer_voltage_loop___inner_current_loop_dq_to_alpha_beta__beta;
double _ess_inverter_controller_outer_voltage_loop___inner_current_loop_dq_to_alpha_beta__k1;
double _ess_inverter_controller_outer_voltage_loop___inner_current_loop_dq_to_alpha_beta__k2;
double _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_dq_to_alpha_beta__alpha;
double _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_dq_to_alpha_beta__beta;
double _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_dq_to_alpha_beta__k1;
double _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_dq_to_alpha_beta__k2;
double _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_dq_to_alpha_beta__alpha;
double _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_dq_to_alpha_beta__beta;
double _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_dq_to_alpha_beta__k1;
double _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_dq_to_alpha_beta__k2;
double _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_dq_to_alpha_beta__alpha;
double _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_dq_to_alpha_beta__beta;
double _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_dq_to_alpha_beta__k1;
double _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_dq_to_alpha_beta__k2;
double _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_dq_to_alpha_beta__alpha;
double _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_dq_to_alpha_beta__beta;
double _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_dq_to_alpha_beta__k1;
double _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_dq_to_alpha_beta__k2;
double _ess_inverter_controller_bus_join1__out[2];
double _solarhouse1_inverter_controller_bus_join1__out[2];
double _solarhouse2_inverter_controller_bus_join1__out[2];
double _solarhouse3_inverter_controller_bus_join1__out[2];
double _solarhouse4_inverter_controller_bus_join1__out[2];
double _ess_inverter_controller_bus_split1__out;
double _ess_inverter_controller_bus_split1__out1;
double _solarhouse1_inverter_controller_bus_split1__out;
double _solarhouse1_inverter_controller_bus_split1__out1;
double _solarhouse2_inverter_controller_bus_split1__out;
double _solarhouse2_inverter_controller_bus_split1__out1;
double _solarhouse3_inverter_controller_bus_split1__out;
double _solarhouse3_inverter_controller_bus_split1__out1;
double _solarhouse4_inverter_controller_bus_split1__out;
double _solarhouse4_inverter_controller_bus_split1__out1;
double _ess_inverter_controller_gain20__out;
double _solarhouse1_inverter_controller_gain20__out;
double _solarhouse2_inverter_controller_gain20__out;
double _solarhouse3_inverter_controller_gain20__out;
double _solarhouse4_inverter_controller_gain20__out;
X_UnInt32 _ess_inverter_single_phase_inverter1_pwm_modulator__channels[2] = {0, 1};
double _ess_inverter_single_phase_inverter1_pwm_modulator__limited_in[2];
X_UnInt32 _ess_inverter_single_phase_inverter1_pwm_modulator__update_mask;
X_UnInt32 _ess_inverter_single_phase_inverter1_pwm_modulator__sig_dir[2];

X_UnInt32 _solarhouse1_inverter_single_phase_inverter1_pwm_modulator__channels[2] = {2, 3};
double _solarhouse1_inverter_single_phase_inverter1_pwm_modulator__limited_in[2];
X_UnInt32 _solarhouse1_inverter_single_phase_inverter1_pwm_modulator__update_mask;
X_UnInt32 _solarhouse1_inverter_single_phase_inverter1_pwm_modulator__sig_dir[2];

X_UnInt32 _solarhouse2_inverter_single_phase_inverter1_pwm_modulator__channels[2] = {4, 5};
double _solarhouse2_inverter_single_phase_inverter1_pwm_modulator__limited_in[2];
X_UnInt32 _solarhouse2_inverter_single_phase_inverter1_pwm_modulator__update_mask;
X_UnInt32 _solarhouse2_inverter_single_phase_inverter1_pwm_modulator__sig_dir[2];

X_UnInt32 _solarhouse3_inverter_single_phase_inverter1_pwm_modulator__channels[2] = {6, 7};
double _solarhouse3_inverter_single_phase_inverter1_pwm_modulator__limited_in[2];
X_UnInt32 _solarhouse3_inverter_single_phase_inverter1_pwm_modulator__update_mask;
X_UnInt32 _solarhouse3_inverter_single_phase_inverter1_pwm_modulator__sig_dir[2];

X_UnInt32 _solarhouse4_inverter_single_phase_inverter1_pwm_modulator__channels[2] = {8, 9};
double _solarhouse4_inverter_single_phase_inverter1_pwm_modulator__limited_in[2];
X_UnInt32 _solarhouse4_inverter_single_phase_inverter1_pwm_modulator__update_mask;
X_UnInt32 _solarhouse4_inverter_single_phase_inverter1_pwm_modulator__sig_dir[2];

//@cmp.var.end

//@cmp.svar.start
// state variables
double _ess_dynamic_table1_clock1__state;
X_Int32 _ess_inverter_controller_c_function3__k;
double _ess_inverter_controller_c_function3__t;
double _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__states[1];
X_Int32 _ess_inverter_controller_rate_transition8_output__out = (X_Int32) 0.0;
double _ess_inverter_controller_rate_transition9_output__out =  0.0;
double _ess_modbus_rate_transition2_output__out =  0.0;
double _ess_modbus_rate_transition3_output__out =  0.0;
double _ess_modbus_rate_transition4_output__out =  0.0;
double _ess_rate_transition1_output__out =  0.0;
double _ess_rate_transition2_output__out =  0.0;
double _measurement_bpf_hpf__states[1];
double _measurement_bpf1_hpf__states[1];
X_Int32 _solarhouse1_inverter_controller_c_function3__k;
double _solarhouse1_inverter_controller_c_function3__t;
double _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__states[1];
X_Int32 _solarhouse1_inverter_controller_rate_transition8_output__out = (X_Int32) 0.0;
double _solarhouse1_inverter_controller_rate_transition9_output__out =  0.0;
double _solarhouse1_measurement_bpf_hpf__states[1];
double _solarhouse1_measurement_bpf1_hpf__states[1];
double _solarhouse1_modbus_rate_transition1_output__out =  0.0;
double _solarhouse1_modbus_rate_transition4_output__out =  0.0;
double _solarhouse1_rate_transition1_output__out =  0.0;
X_Int32 _solarhouse2_inverter_controller_c_function3__k;
double _solarhouse2_inverter_controller_c_function3__t;
double _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__states[1];
X_Int32 _solarhouse2_inverter_controller_rate_transition8_output__out = (X_Int32) 0.0;
double _solarhouse2_inverter_controller_rate_transition9_output__out =  0.0;
double _solarhouse2_measurement_bpf_hpf__states[1];
double _solarhouse2_measurement_bpf1_hpf__states[1];
double _solarhouse2_modbus_rate_transition1_output__out =  0.0;
double _solarhouse2_modbus_rate_transition4_output__out =  0.0;
double _solarhouse2_rate_transition1_output__out =  0.0;
X_Int32 _solarhouse3_inverter_controller_c_function3__k;
double _solarhouse3_inverter_controller_c_function3__t;
double _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__states[1];
X_Int32 _solarhouse3_inverter_controller_rate_transition8_output__out = (X_Int32) 0.0;
double _solarhouse3_inverter_controller_rate_transition9_output__out =  0.0;
double _solarhouse3_measurement_bpf_hpf__states[1];
double _solarhouse3_measurement_bpf1_hpf__states[1];
double _solarhouse3_modbus_rate_transition1_output__out =  0.0;
double _solarhouse3_modbus_rate_transition4_output__out =  0.0;
double _solarhouse3_rate_transition1_output__out =  0.0;
X_Int32 _solarhouse4_inverter_controller_c_function3__k;
double _solarhouse4_inverter_controller_c_function3__t;
double _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__states[1];
X_Int32 _solarhouse4_inverter_controller_rate_transition8_output__out = (X_Int32) 0.0;
double _solarhouse4_inverter_controller_rate_transition9_output__out =  0.0;
double _solarhouse4_measurement_bpf_hpf__states[1];
double _solarhouse4_measurement_bpf1_hpf__states[1];
double _solarhouse4_modbus_rate_transition1_output__out =  0.0;
double _solarhouse4_modbus_rate_transition4_output__out =  0.0;
double _solarhouse4_rate_transition1_output__out =  0.0;
double _ess_inverter_controller_hilbert_transform__states[1];
double _ess_inverter_controller_hilbert_transform1__states[1];
double _ess_inverter_lpf_dc__states[1];
X_Int32 _ess_c_function3__t;
double _measurement_bpf_lpf__states[1];
double _measurement_bpf1_lpf__states[1];
double _solarhouse1_inverter_controller_hilbert_transform__states[1];
double _solarhouse1_inverter_controller_hilbert_transform1__states[1];
double _solarhouse1_inverter_lpf_dc__states[1];
double _solarhouse1_measurement_bpf_lpf__states[1];
double _solarhouse1_measurement_bpf1_lpf__states[1];
double _solarhouse2_inverter_controller_hilbert_transform__states[1];
double _solarhouse2_inverter_controller_hilbert_transform1__states[1];
double _solarhouse2_inverter_lpf_dc__states[1];
double _solarhouse2_measurement_bpf_lpf__states[1];
double _solarhouse2_measurement_bpf1_lpf__states[1];
double _solarhouse3_inverter_controller_hilbert_transform__states[1];
double _solarhouse3_inverter_controller_hilbert_transform1__states[1];
double _solarhouse3_inverter_lpf_dc__states[1];
double _solarhouse3_measurement_bpf_lpf__states[1];
double _solarhouse3_measurement_bpf1_lpf__states[1];
double _solarhouse4_inverter_controller_hilbert_transform__states[1];
double _solarhouse4_inverter_controller_hilbert_transform1__states[1];
double _solarhouse4_inverter_lpf_dc__states[1];
double _solarhouse4_measurement_bpf_lpf__states[1];
double _solarhouse4_measurement_bpf1_lpf__states[1];
double _measurement_hilbert_transform1__states[1];
double _measurement_hilbert_transform__states[1];
double _solarhouse1_measurement_hilbert_transform1__states[1];
double _solarhouse1_measurement_hilbert_transform__states[1];
double _solarhouse2_measurement_hilbert_transform1__states[1];
double _solarhouse2_measurement_hilbert_transform__states[1];
double _solarhouse3_measurement_hilbert_transform1__states[1];
double _solarhouse3_measurement_hilbert_transform__states[1];
double _solarhouse4_measurement_hilbert_transform1__states[1];
double _solarhouse4_measurement_hilbert_transform__states[1];
double _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__states[1];
double _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__states[1];
double _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__states[1];
double _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__states[1];
double _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__states[1];
double _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__states[1];
double _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__states[1];
double _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__states[1];
double _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__states[1];
double _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__states[1];
double _ess_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_comparator1__state;
double _ess_inverter_power_meas_power_meas_dqpu_lpf_p__states[1];
double _ess_inverter_power_meas_power_meas_dqpu_lpf_q__states[1];
double _measurement_lpf_p__states[1];
double _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_comparator1__state;
double _solarhouse1_inverter_power_meas_power_meas_dqpu_lpf_p__states[1];
double _solarhouse1_inverter_power_meas_power_meas_dqpu_lpf_q__states[1];
double _solarhouse1_measurement_lpf_p__states[1];
double _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_comparator1__state;
double _solarhouse2_inverter_power_meas_power_meas_dqpu_lpf_p__states[1];
double _solarhouse2_inverter_power_meas_power_meas_dqpu_lpf_q__states[1];
double _solarhouse2_measurement_lpf_p__states[1];
double _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_comparator1__state;
double _solarhouse3_inverter_power_meas_power_meas_dqpu_lpf_p__states[1];
double _solarhouse3_inverter_power_meas_power_meas_dqpu_lpf_q__states[1];
double _solarhouse3_measurement_lpf_p__states[1];
double _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_comparator1__state;
double _solarhouse4_inverter_power_meas_power_meas_dqpu_lpf_p__states[1];
double _solarhouse4_inverter_power_meas_power_meas_dqpu_lpf_q__states[1];
double _solarhouse4_measurement_lpf_p__states[1];
double _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__integrator_state;
X_UnInt32 _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__av_active;
double _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__filter_state;
double _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__integrator_state;
X_UnInt32 _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__av_active;
double _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__filter_state;
double _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__integrator_state;
X_UnInt32 _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__av_active;
double _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__filter_state;
double _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__integrator_state;
X_UnInt32 _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__av_active;
double _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__filter_state;
double _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__integrator_state;
X_UnInt32 _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__av_active;
double _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__filter_state;
double _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__integrator_state;
X_UnInt32 _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__av_active;
double _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__filter_state;
double _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__integrator_state;
X_UnInt32 _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__av_active;
double _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__filter_state;
double _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__integrator_state;
X_UnInt32 _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__av_active;
double _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__filter_state;
double _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__integrator_state;
X_UnInt32 _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__av_active;
double _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__filter_state;
double _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__integrator_state;
X_UnInt32 _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__av_active;
double _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__filter_state;//@cmp.svar.end





// generated using template: virtual_hil/custom_functions.template---------------------------------
void ReInit_user_sp_cpu0_dev0() {
#if DEBUG_MODE
    printf("\n\rReInitTimer");
#endif
    //@cmp.init.block.start
    _ess_dynamic_table1_clock1__state = 0.0f;
    _ess_inverter_controller_c_function3__k = 0;
    _ess_inverter_controller_c_function3__t = 1;
    X_UnInt32 _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__i;
    for (_ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__i = 0; _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__i < 1; _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__i++) {
        _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__states[_ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__i] = 0;
    }
    _ess_inverter_controller_rate_transition8_output__out = (X_Int32) 0.0;
    _ess_inverter_controller_rate_transition9_output__out =  0.0;
    _ess_inverter_power_meas_power_meas_dqpu_s_and_pf__P = 0;
    _ess_inverter_power_meas_power_meas_dqpu_s_and_pf__Q = 0;
    _ess_inverter_power_meas_power_meas_dqpu_s_and_pf__S = 0;
    _ess_inverter_power_meas_power_meas_dqpu_s_and_pf__pf = 0;
    _ess_modbus_rate_transition2_output__out =  0.0;
    _ess_modbus_rate_transition3_output__out =  0.0;
    _ess_modbus_rate_transition4_output__out =  0.0;
    _ess_rate_transition1_output__out =  0.0;
    _ess_rate_transition2_output__out =  0.0;
    X_UnInt32 _measurement_bpf_hpf__i;
    for (_measurement_bpf_hpf__i = 0; _measurement_bpf_hpf__i < 1; _measurement_bpf_hpf__i++) {
        _measurement_bpf_hpf__states[_measurement_bpf_hpf__i] = 0;
    }
    X_UnInt32 _measurement_bpf1_hpf__i;
    for (_measurement_bpf1_hpf__i = 0; _measurement_bpf1_hpf__i < 1; _measurement_bpf1_hpf__i++) {
        _measurement_bpf1_hpf__states[_measurement_bpf1_hpf__i] = 0;
    }
    HIL_OutAO(0x401e, 0.0f);
    _solarhouse1_inverter_controller_c_function3__k = 0;
    _solarhouse1_inverter_controller_c_function3__t = 1;
    X_UnInt32 _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__i;
    for (_solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__i = 0; _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__i < 1; _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__i++) {
        _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__states[_solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__i] = 0;
    }
    _solarhouse1_inverter_controller_rate_transition8_output__out = (X_Int32) 0.0;
    _solarhouse1_inverter_controller_rate_transition9_output__out =  0.0;
    _solarhouse1_inverter_power_meas_power_meas_dqpu_s_and_pf__P = 0;
    _solarhouse1_inverter_power_meas_power_meas_dqpu_s_and_pf__Q = 0;
    _solarhouse1_inverter_power_meas_power_meas_dqpu_s_and_pf__S = 0;
    _solarhouse1_inverter_power_meas_power_meas_dqpu_s_and_pf__pf = 0;
    X_UnInt32 _solarhouse1_measurement_bpf_hpf__i;
    for (_solarhouse1_measurement_bpf_hpf__i = 0; _solarhouse1_measurement_bpf_hpf__i < 1; _solarhouse1_measurement_bpf_hpf__i++) {
        _solarhouse1_measurement_bpf_hpf__states[_solarhouse1_measurement_bpf_hpf__i] = 0;
    }
    X_UnInt32 _solarhouse1_measurement_bpf1_hpf__i;
    for (_solarhouse1_measurement_bpf1_hpf__i = 0; _solarhouse1_measurement_bpf1_hpf__i < 1; _solarhouse1_measurement_bpf1_hpf__i++) {
        _solarhouse1_measurement_bpf1_hpf__states[_solarhouse1_measurement_bpf1_hpf__i] = 0;
    }
    HIL_OutAO(0x4034, 0.0f);
    HIL_OutAO(0x4035, 0.0f);
    _solarhouse1_modbus_rate_transition1_output__out =  0.0;
    _solarhouse1_modbus_rate_transition4_output__out =  0.0;
    _solarhouse1_rate_transition1_output__out =  0.0;
    _solarhouse2_inverter_controller_c_function3__k = 0;
    _solarhouse2_inverter_controller_c_function3__t = 1;
    X_UnInt32 _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__i;
    for (_solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__i = 0; _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__i < 1; _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__i++) {
        _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__states[_solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__i] = 0;
    }
    _solarhouse2_inverter_controller_rate_transition8_output__out = (X_Int32) 0.0;
    _solarhouse2_inverter_controller_rate_transition9_output__out =  0.0;
    _solarhouse2_inverter_power_meas_power_meas_dqpu_s_and_pf__P = 0;
    _solarhouse2_inverter_power_meas_power_meas_dqpu_s_and_pf__Q = 0;
    _solarhouse2_inverter_power_meas_power_meas_dqpu_s_and_pf__S = 0;
    _solarhouse2_inverter_power_meas_power_meas_dqpu_s_and_pf__pf = 0;
    X_UnInt32 _solarhouse2_measurement_bpf_hpf__i;
    for (_solarhouse2_measurement_bpf_hpf__i = 0; _solarhouse2_measurement_bpf_hpf__i < 1; _solarhouse2_measurement_bpf_hpf__i++) {
        _solarhouse2_measurement_bpf_hpf__states[_solarhouse2_measurement_bpf_hpf__i] = 0;
    }
    X_UnInt32 _solarhouse2_measurement_bpf1_hpf__i;
    for (_solarhouse2_measurement_bpf1_hpf__i = 0; _solarhouse2_measurement_bpf1_hpf__i < 1; _solarhouse2_measurement_bpf1_hpf__i++) {
        _solarhouse2_measurement_bpf1_hpf__states[_solarhouse2_measurement_bpf1_hpf__i] = 0;
    }
    HIL_OutAO(0x404d, 0.0f);
    HIL_OutAO(0x404e, 0.0f);
    _solarhouse2_modbus_rate_transition1_output__out =  0.0;
    _solarhouse2_modbus_rate_transition4_output__out =  0.0;
    _solarhouse2_rate_transition1_output__out =  0.0;
    _solarhouse3_inverter_controller_c_function3__k = 0;
    _solarhouse3_inverter_controller_c_function3__t = 1;
    X_UnInt32 _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__i;
    for (_solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__i = 0; _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__i < 1; _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__i++) {
        _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__states[_solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__i] = 0;
    }
    _solarhouse3_inverter_controller_rate_transition8_output__out = (X_Int32) 0.0;
    _solarhouse3_inverter_controller_rate_transition9_output__out =  0.0;
    _solarhouse3_inverter_power_meas_power_meas_dqpu_s_and_pf__P = 0;
    _solarhouse3_inverter_power_meas_power_meas_dqpu_s_and_pf__Q = 0;
    _solarhouse3_inverter_power_meas_power_meas_dqpu_s_and_pf__S = 0;
    _solarhouse3_inverter_power_meas_power_meas_dqpu_s_and_pf__pf = 0;
    X_UnInt32 _solarhouse3_measurement_bpf_hpf__i;
    for (_solarhouse3_measurement_bpf_hpf__i = 0; _solarhouse3_measurement_bpf_hpf__i < 1; _solarhouse3_measurement_bpf_hpf__i++) {
        _solarhouse3_measurement_bpf_hpf__states[_solarhouse3_measurement_bpf_hpf__i] = 0;
    }
    X_UnInt32 _solarhouse3_measurement_bpf1_hpf__i;
    for (_solarhouse3_measurement_bpf1_hpf__i = 0; _solarhouse3_measurement_bpf1_hpf__i < 1; _solarhouse3_measurement_bpf1_hpf__i++) {
        _solarhouse3_measurement_bpf1_hpf__states[_solarhouse3_measurement_bpf1_hpf__i] = 0;
    }
    HIL_OutAO(0x4066, 0.0f);
    HIL_OutAO(0x4067, 0.0f);
    _solarhouse3_modbus_rate_transition1_output__out =  0.0;
    _solarhouse3_modbus_rate_transition4_output__out =  0.0;
    _solarhouse3_rate_transition1_output__out =  0.0;
    _solarhouse4_inverter_controller_c_function3__k = 0;
    _solarhouse4_inverter_controller_c_function3__t = 1;
    X_UnInt32 _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__i;
    for (_solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__i = 0; _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__i < 1; _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__i++) {
        _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__states[_solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__i] = 0;
    }
    _solarhouse4_inverter_controller_rate_transition8_output__out = (X_Int32) 0.0;
    _solarhouse4_inverter_controller_rate_transition9_output__out =  0.0;
    _solarhouse4_inverter_power_meas_power_meas_dqpu_s_and_pf__P = 0;
    _solarhouse4_inverter_power_meas_power_meas_dqpu_s_and_pf__Q = 0;
    _solarhouse4_inverter_power_meas_power_meas_dqpu_s_and_pf__S = 0;
    _solarhouse4_inverter_power_meas_power_meas_dqpu_s_and_pf__pf = 0;
    X_UnInt32 _solarhouse4_measurement_bpf_hpf__i;
    for (_solarhouse4_measurement_bpf_hpf__i = 0; _solarhouse4_measurement_bpf_hpf__i < 1; _solarhouse4_measurement_bpf_hpf__i++) {
        _solarhouse4_measurement_bpf_hpf__states[_solarhouse4_measurement_bpf_hpf__i] = 0;
    }
    X_UnInt32 _solarhouse4_measurement_bpf1_hpf__i;
    for (_solarhouse4_measurement_bpf1_hpf__i = 0; _solarhouse4_measurement_bpf1_hpf__i < 1; _solarhouse4_measurement_bpf1_hpf__i++) {
        _solarhouse4_measurement_bpf1_hpf__states[_solarhouse4_measurement_bpf1_hpf__i] = 0;
    }
    HIL_OutAO(0x407f, 0.0f);
    HIL_OutAO(0x4080, 0.0f);
    _solarhouse4_modbus_rate_transition1_output__out =  0.0;
    _solarhouse4_modbus_rate_transition4_output__out =  0.0;
    _solarhouse4_rate_transition1_output__out =  0.0;
    HIL_OutAO(0x4011, 0.0f);
    X_UnInt32 _ess_inverter_controller_hilbert_transform__i;
    for (_ess_inverter_controller_hilbert_transform__i = 0; _ess_inverter_controller_hilbert_transform__i < 1; _ess_inverter_controller_hilbert_transform__i++) {
        _ess_inverter_controller_hilbert_transform__states[_ess_inverter_controller_hilbert_transform__i] = 0;
    }
    HIL_OutAO(0x4018, 0.0f);
    X_UnInt32 _ess_inverter_controller_hilbert_transform1__i;
    for (_ess_inverter_controller_hilbert_transform1__i = 0; _ess_inverter_controller_hilbert_transform1__i < 1; _ess_inverter_controller_hilbert_transform1__i++) {
        _ess_inverter_controller_hilbert_transform1__states[_ess_inverter_controller_hilbert_transform1__i] = 0;
    }
    HIL_OutAO(0x4014, 0.0f);
    HIL_OutAO(0x4016, 0.0f);
    HIL_OutAO(0x4019, 0.0f);
    X_UnInt32 _ess_inverter_lpf_dc__i;
    for (_ess_inverter_lpf_dc__i = 0; _ess_inverter_lpf_dc__i < 1; _ess_inverter_lpf_dc__i++) {
        _ess_inverter_lpf_dc__states[_ess_inverter_lpf_dc__i] = 0;
    }
    HIL_OutAO(0x401c, 0.0f);
    HIL_OutAO(0x401d, 0.0f);
    HIL_OutAO(0x401a, 0.0f);
    HIL_OutAO(0x401b, 0.0f);
    HIL_OutAO(0x4015, 0.0f);
    _ess_c_function3__t = 0;
    _ess_c_function3__time = 1;
    _ess_c_function3__reg = _ess_c_function3__RegD;
    X_UnInt32 _measurement_bpf_lpf__i;
    for (_measurement_bpf_lpf__i = 0; _measurement_bpf_lpf__i < 1; _measurement_bpf_lpf__i++) {
        _measurement_bpf_lpf__states[_measurement_bpf_lpf__i] = 0;
    }
    X_UnInt32 _measurement_bpf1_lpf__i;
    for (_measurement_bpf1_lpf__i = 0; _measurement_bpf1_lpf__i < 1; _measurement_bpf1_lpf__i++) {
        _measurement_bpf1_lpf__states[_measurement_bpf1_lpf__i] = 0;
    }
    HIL_OutAO(0x402b, 0.0f);
    X_UnInt32 _solarhouse1_inverter_controller_hilbert_transform__i;
    for (_solarhouse1_inverter_controller_hilbert_transform__i = 0; _solarhouse1_inverter_controller_hilbert_transform__i < 1; _solarhouse1_inverter_controller_hilbert_transform__i++) {
        _solarhouse1_inverter_controller_hilbert_transform__states[_solarhouse1_inverter_controller_hilbert_transform__i] = 0;
    }
    HIL_OutAO(0x4032, 0.0f);
    X_UnInt32 _solarhouse1_inverter_controller_hilbert_transform1__i;
    for (_solarhouse1_inverter_controller_hilbert_transform1__i = 0; _solarhouse1_inverter_controller_hilbert_transform1__i < 1; _solarhouse1_inverter_controller_hilbert_transform1__i++) {
        _solarhouse1_inverter_controller_hilbert_transform1__states[_solarhouse1_inverter_controller_hilbert_transform1__i] = 0;
    }
    HIL_OutAO(0x402e, 0.0f);
    HIL_OutAO(0x4030, 0.0f);
    HIL_OutAO(0x4033, 0.0f);
    X_UnInt32 _solarhouse1_inverter_lpf_dc__i;
    for (_solarhouse1_inverter_lpf_dc__i = 0; _solarhouse1_inverter_lpf_dc__i < 1; _solarhouse1_inverter_lpf_dc__i++) {
        _solarhouse1_inverter_lpf_dc__states[_solarhouse1_inverter_lpf_dc__i] = 0;
    }
    X_UnInt32 _solarhouse1_measurement_bpf_lpf__i;
    for (_solarhouse1_measurement_bpf_lpf__i = 0; _solarhouse1_measurement_bpf_lpf__i < 1; _solarhouse1_measurement_bpf_lpf__i++) {
        _solarhouse1_measurement_bpf_lpf__states[_solarhouse1_measurement_bpf_lpf__i] = 0;
    }
    X_UnInt32 _solarhouse1_measurement_bpf1_lpf__i;
    for (_solarhouse1_measurement_bpf1_lpf__i = 0; _solarhouse1_measurement_bpf1_lpf__i < 1; _solarhouse1_measurement_bpf1_lpf__i++) {
        _solarhouse1_measurement_bpf1_lpf__states[_solarhouse1_measurement_bpf1_lpf__i] = 0;
    }
    HIL_OutAO(0x4036, 0.0f);
    HIL_OutAO(0x4037, 0.0f);
    HIL_OutAO(0x402f, 0.0f);
    HIL_OutAO(0x4044, 0.0f);
    X_UnInt32 _solarhouse2_inverter_controller_hilbert_transform__i;
    for (_solarhouse2_inverter_controller_hilbert_transform__i = 0; _solarhouse2_inverter_controller_hilbert_transform__i < 1; _solarhouse2_inverter_controller_hilbert_transform__i++) {
        _solarhouse2_inverter_controller_hilbert_transform__states[_solarhouse2_inverter_controller_hilbert_transform__i] = 0;
    }
    HIL_OutAO(0x404b, 0.0f);
    X_UnInt32 _solarhouse2_inverter_controller_hilbert_transform1__i;
    for (_solarhouse2_inverter_controller_hilbert_transform1__i = 0; _solarhouse2_inverter_controller_hilbert_transform1__i < 1; _solarhouse2_inverter_controller_hilbert_transform1__i++) {
        _solarhouse2_inverter_controller_hilbert_transform1__states[_solarhouse2_inverter_controller_hilbert_transform1__i] = 0;
    }
    HIL_OutAO(0x4047, 0.0f);
    HIL_OutAO(0x4049, 0.0f);
    HIL_OutAO(0x404c, 0.0f);
    X_UnInt32 _solarhouse2_inverter_lpf_dc__i;
    for (_solarhouse2_inverter_lpf_dc__i = 0; _solarhouse2_inverter_lpf_dc__i < 1; _solarhouse2_inverter_lpf_dc__i++) {
        _solarhouse2_inverter_lpf_dc__states[_solarhouse2_inverter_lpf_dc__i] = 0;
    }
    X_UnInt32 _solarhouse2_measurement_bpf_lpf__i;
    for (_solarhouse2_measurement_bpf_lpf__i = 0; _solarhouse2_measurement_bpf_lpf__i < 1; _solarhouse2_measurement_bpf_lpf__i++) {
        _solarhouse2_measurement_bpf_lpf__states[_solarhouse2_measurement_bpf_lpf__i] = 0;
    }
    X_UnInt32 _solarhouse2_measurement_bpf1_lpf__i;
    for (_solarhouse2_measurement_bpf1_lpf__i = 0; _solarhouse2_measurement_bpf1_lpf__i < 1; _solarhouse2_measurement_bpf1_lpf__i++) {
        _solarhouse2_measurement_bpf1_lpf__states[_solarhouse2_measurement_bpf1_lpf__i] = 0;
    }
    HIL_OutAO(0x404f, 0.0f);
    HIL_OutAO(0x4050, 0.0f);
    HIL_OutAO(0x4048, 0.0f);
    HIL_OutAO(0x405d, 0.0f);
    X_UnInt32 _solarhouse3_inverter_controller_hilbert_transform__i;
    for (_solarhouse3_inverter_controller_hilbert_transform__i = 0; _solarhouse3_inverter_controller_hilbert_transform__i < 1; _solarhouse3_inverter_controller_hilbert_transform__i++) {
        _solarhouse3_inverter_controller_hilbert_transform__states[_solarhouse3_inverter_controller_hilbert_transform__i] = 0;
    }
    HIL_OutAO(0x4064, 0.0f);
    X_UnInt32 _solarhouse3_inverter_controller_hilbert_transform1__i;
    for (_solarhouse3_inverter_controller_hilbert_transform1__i = 0; _solarhouse3_inverter_controller_hilbert_transform1__i < 1; _solarhouse3_inverter_controller_hilbert_transform1__i++) {
        _solarhouse3_inverter_controller_hilbert_transform1__states[_solarhouse3_inverter_controller_hilbert_transform1__i] = 0;
    }
    HIL_OutAO(0x4060, 0.0f);
    HIL_OutAO(0x4062, 0.0f);
    HIL_OutAO(0x4065, 0.0f);
    X_UnInt32 _solarhouse3_inverter_lpf_dc__i;
    for (_solarhouse3_inverter_lpf_dc__i = 0; _solarhouse3_inverter_lpf_dc__i < 1; _solarhouse3_inverter_lpf_dc__i++) {
        _solarhouse3_inverter_lpf_dc__states[_solarhouse3_inverter_lpf_dc__i] = 0;
    }
    X_UnInt32 _solarhouse3_measurement_bpf_lpf__i;
    for (_solarhouse3_measurement_bpf_lpf__i = 0; _solarhouse3_measurement_bpf_lpf__i < 1; _solarhouse3_measurement_bpf_lpf__i++) {
        _solarhouse3_measurement_bpf_lpf__states[_solarhouse3_measurement_bpf_lpf__i] = 0;
    }
    X_UnInt32 _solarhouse3_measurement_bpf1_lpf__i;
    for (_solarhouse3_measurement_bpf1_lpf__i = 0; _solarhouse3_measurement_bpf1_lpf__i < 1; _solarhouse3_measurement_bpf1_lpf__i++) {
        _solarhouse3_measurement_bpf1_lpf__states[_solarhouse3_measurement_bpf1_lpf__i] = 0;
    }
    HIL_OutAO(0x4068, 0.0f);
    HIL_OutAO(0x4069, 0.0f);
    HIL_OutAO(0x4061, 0.0f);
    HIL_OutAO(0x4076, 0.0f);
    X_UnInt32 _solarhouse4_inverter_controller_hilbert_transform__i;
    for (_solarhouse4_inverter_controller_hilbert_transform__i = 0; _solarhouse4_inverter_controller_hilbert_transform__i < 1; _solarhouse4_inverter_controller_hilbert_transform__i++) {
        _solarhouse4_inverter_controller_hilbert_transform__states[_solarhouse4_inverter_controller_hilbert_transform__i] = 0;
    }
    HIL_OutAO(0x407d, 0.0f);
    X_UnInt32 _solarhouse4_inverter_controller_hilbert_transform1__i;
    for (_solarhouse4_inverter_controller_hilbert_transform1__i = 0; _solarhouse4_inverter_controller_hilbert_transform1__i < 1; _solarhouse4_inverter_controller_hilbert_transform1__i++) {
        _solarhouse4_inverter_controller_hilbert_transform1__states[_solarhouse4_inverter_controller_hilbert_transform1__i] = 0;
    }
    HIL_OutAO(0x4079, 0.0f);
    HIL_OutAO(0x407b, 0.0f);
    HIL_OutAO(0x407e, 0.0f);
    X_UnInt32 _solarhouse4_inverter_lpf_dc__i;
    for (_solarhouse4_inverter_lpf_dc__i = 0; _solarhouse4_inverter_lpf_dc__i < 1; _solarhouse4_inverter_lpf_dc__i++) {
        _solarhouse4_inverter_lpf_dc__states[_solarhouse4_inverter_lpf_dc__i] = 0;
    }
    X_UnInt32 _solarhouse4_measurement_bpf_lpf__i;
    for (_solarhouse4_measurement_bpf_lpf__i = 0; _solarhouse4_measurement_bpf_lpf__i < 1; _solarhouse4_measurement_bpf_lpf__i++) {
        _solarhouse4_measurement_bpf_lpf__states[_solarhouse4_measurement_bpf_lpf__i] = 0;
    }
    X_UnInt32 _solarhouse4_measurement_bpf1_lpf__i;
    for (_solarhouse4_measurement_bpf1_lpf__i = 0; _solarhouse4_measurement_bpf1_lpf__i < 1; _solarhouse4_measurement_bpf1_lpf__i++) {
        _solarhouse4_measurement_bpf1_lpf__states[_solarhouse4_measurement_bpf1_lpf__i] = 0;
    }
    HIL_OutAO(0x4081, 0.0f);
    HIL_OutAO(0x4082, 0.0f);
    HIL_OutAO(0x407a, 0.0f);
    HIL_OutAO(0x4017, 0.0f);
    // write initial SG parameters
    X_UnInt32 _grid_vs_tdf_sg_ctrl_sine1__i;
    X_UnInt32 _grid_vs_tdf_sg_ctrl_sine1__j;
    for (_grid_vs_tdf_sg_ctrl_sine1__i = 0; _grid_vs_tdf_sg_ctrl_sine1__i < 1; _grid_vs_tdf_sg_ctrl_sine1__i++) {
        HIL_OutFloat(0x400200 + _grid_vs_tdf_sg_ctrl_sine1__channels[_grid_vs_tdf_sg_ctrl_sine1__i], 0.0f);  // set gain to 0 (initial value)
        HIL_OutInt32(0x400180 + _grid_vs_tdf_sg_ctrl_sine1__channels[_grid_vs_tdf_sg_ctrl_sine1__i], 0);      // set offset to 0 (initial value)
        HIL_OutInt32(0x400000 + _grid_vs_tdf_sg_ctrl_sine1__channels[_grid_vs_tdf_sg_ctrl_sine1__i], 1);
        HIL_OutInt32(0x400280 + _grid_vs_tdf_sg_ctrl_sine1__channels[_grid_vs_tdf_sg_ctrl_sine1__i], 0);
        HIL_OutFloat(0x400100 + _grid_vs_tdf_sg_ctrl_sine1__channels[_grid_vs_tdf_sg_ctrl_sine1__i], 2.0f);
        HIL_OutInt32(0x400300 + _grid_vs_tdf_sg_ctrl_sine1__channels[_grid_vs_tdf_sg_ctrl_sine1__i], 1);   // enable wave update
        _grid_vs_tdf_sg_ctrl_sine1__sg_update_value += 1 << _grid_vs_tdf_sg_ctrl_sine1__channels[_grid_vs_tdf_sg_ctrl_sine1__i];
    }
    // calculate and write waveform data
    _grid_vs_tdf_sg_ctrl_sine1__k = 2.0f * M_PI / _grid_vs_tdf_sg_ctrl_sine1__no_of_points;
    // oscillator based sine implementation
    // oscillator init
    _grid_vs_tdf_sg_ctrl_sine1__xn_1 = sin(0.0f);
    _grid_vs_tdf_sg_ctrl_sine1__yn_1 = cos(0.0f);
    // oscillator
    for (_grid_vs_tdf_sg_ctrl_sine1__i = 0; _grid_vs_tdf_sg_ctrl_sine1__i < _grid_vs_tdf_sg_ctrl_sine1__no_of_points; _grid_vs_tdf_sg_ctrl_sine1__i++) {
        _grid_vs_tdf_sg_ctrl_sine1__xn = _grid_vs_tdf_sg_ctrl_sine1__xn_1 + _grid_vs_tdf_sg_ctrl_sine1__k * _grid_vs_tdf_sg_ctrl_sine1__yn_1;
        _grid_vs_tdf_sg_ctrl_sine1__yn = _grid_vs_tdf_sg_ctrl_sine1__yn_1 - _grid_vs_tdf_sg_ctrl_sine1__k * _grid_vs_tdf_sg_ctrl_sine1__xn;
        // write the same data to all the channels
        for (_grid_vs_tdf_sg_ctrl_sine1__j = 0; _grid_vs_tdf_sg_ctrl_sine1__j < 1; _grid_vs_tdf_sg_ctrl_sine1__j++) {
            HIL_OutFloat(0x600000 + _grid_vs_tdf_sg_ctrl_sine1__channels[_grid_vs_tdf_sg_ctrl_sine1__j] * 0x800 + _grid_vs_tdf_sg_ctrl_sine1__i, (float) _grid_vs_tdf_sg_ctrl_sine1__xn_1);
        }
        _grid_vs_tdf_sg_ctrl_sine1__xn_1 = _grid_vs_tdf_sg_ctrl_sine1__xn;
        _grid_vs_tdf_sg_ctrl_sine1__yn_1 = _grid_vs_tdf_sg_ctrl_sine1__yn;
    }
    HIL_OutInt32(0x400080, _grid_vs_tdf_sg_ctrl_sine1__sg_update_value);  // update both parameters and waveforms on all channels
    X_UnInt32 _measurement_hilbert_transform1__i;
    for (_measurement_hilbert_transform1__i = 0; _measurement_hilbert_transform1__i < 1; _measurement_hilbert_transform1__i++) {
        _measurement_hilbert_transform1__states[_measurement_hilbert_transform1__i] = 0;
    }
    X_UnInt32 _measurement_hilbert_transform__i;
    for (_measurement_hilbert_transform__i = 0; _measurement_hilbert_transform__i < 1; _measurement_hilbert_transform__i++) {
        _measurement_hilbert_transform__states[_measurement_hilbert_transform__i] = 0;
    }
    HIL_OutAO(0x4031, 0.0f);
    X_UnInt32 _solarhouse1_measurement_hilbert_transform1__i;
    for (_solarhouse1_measurement_hilbert_transform1__i = 0; _solarhouse1_measurement_hilbert_transform1__i < 1; _solarhouse1_measurement_hilbert_transform1__i++) {
        _solarhouse1_measurement_hilbert_transform1__states[_solarhouse1_measurement_hilbert_transform1__i] = 0;
    }
    X_UnInt32 _solarhouse1_measurement_hilbert_transform__i;
    for (_solarhouse1_measurement_hilbert_transform__i = 0; _solarhouse1_measurement_hilbert_transform__i < 1; _solarhouse1_measurement_hilbert_transform__i++) {
        _solarhouse1_measurement_hilbert_transform__states[_solarhouse1_measurement_hilbert_transform__i] = 0;
    }
    HIL_OutAO(0x404a, 0.0f);
    X_UnInt32 _solarhouse2_measurement_hilbert_transform1__i;
    for (_solarhouse2_measurement_hilbert_transform1__i = 0; _solarhouse2_measurement_hilbert_transform1__i < 1; _solarhouse2_measurement_hilbert_transform1__i++) {
        _solarhouse2_measurement_hilbert_transform1__states[_solarhouse2_measurement_hilbert_transform1__i] = 0;
    }
    X_UnInt32 _solarhouse2_measurement_hilbert_transform__i;
    for (_solarhouse2_measurement_hilbert_transform__i = 0; _solarhouse2_measurement_hilbert_transform__i < 1; _solarhouse2_measurement_hilbert_transform__i++) {
        _solarhouse2_measurement_hilbert_transform__states[_solarhouse2_measurement_hilbert_transform__i] = 0;
    }
    HIL_OutAO(0x4063, 0.0f);
    X_UnInt32 _solarhouse3_measurement_hilbert_transform1__i;
    for (_solarhouse3_measurement_hilbert_transform1__i = 0; _solarhouse3_measurement_hilbert_transform1__i < 1; _solarhouse3_measurement_hilbert_transform1__i++) {
        _solarhouse3_measurement_hilbert_transform1__states[_solarhouse3_measurement_hilbert_transform1__i] = 0;
    }
    X_UnInt32 _solarhouse3_measurement_hilbert_transform__i;
    for (_solarhouse3_measurement_hilbert_transform__i = 0; _solarhouse3_measurement_hilbert_transform__i < 1; _solarhouse3_measurement_hilbert_transform__i++) {
        _solarhouse3_measurement_hilbert_transform__states[_solarhouse3_measurement_hilbert_transform__i] = 0;
    }
    HIL_OutAO(0x407c, 0.0f);
    X_UnInt32 _solarhouse4_measurement_hilbert_transform1__i;
    for (_solarhouse4_measurement_hilbert_transform1__i = 0; _solarhouse4_measurement_hilbert_transform1__i < 1; _solarhouse4_measurement_hilbert_transform1__i++) {
        _solarhouse4_measurement_hilbert_transform1__states[_solarhouse4_measurement_hilbert_transform1__i] = 0;
    }
    X_UnInt32 _solarhouse4_measurement_hilbert_transform__i;
    for (_solarhouse4_measurement_hilbert_transform__i = 0; _solarhouse4_measurement_hilbert_transform__i < 1; _solarhouse4_measurement_hilbert_transform__i++) {
        _solarhouse4_measurement_hilbert_transform__states[_solarhouse4_measurement_hilbert_transform__i] = 0;
    }
    X_UnInt32 _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__i;
    for (_ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__i = 0; _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__i < 1; _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__i++) {
        _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__states[_ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__i] = 0;
    }
    HIL_OutAO(0x4012, 0.0f);
    X_UnInt32 _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__i;
    for (_ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__i = 0; _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__i < 1; _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__i++) {
        _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__states[_ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__i] = 0;
    }
    HIL_OutAO(0x4013, 0.0f);
    HIL_OutAO(0x4005, 0.0f);
    HIL_OutAO(0x4006, 0.0f);
    X_UnInt32 _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__i;
    for (_solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__i = 0; _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__i < 1; _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__i++) {
        _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__states[_solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__i] = 0;
    }
    HIL_OutAO(0x402c, 0.0f);
    X_UnInt32 _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__i;
    for (_solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__i = 0; _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__i < 1; _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__i++) {
        _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__states[_solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__i] = 0;
    }
    HIL_OutAO(0x402d, 0.0f);
    HIL_OutAO(0x401f, 0.0f);
    HIL_OutAO(0x4020, 0.0f);
    X_UnInt32 _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__i;
    for (_solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__i = 0; _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__i < 1; _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__i++) {
        _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__states[_solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__i] = 0;
    }
    HIL_OutAO(0x4045, 0.0f);
    X_UnInt32 _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__i;
    for (_solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__i = 0; _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__i < 1; _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__i++) {
        _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__states[_solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__i] = 0;
    }
    HIL_OutAO(0x4046, 0.0f);
    HIL_OutAO(0x4038, 0.0f);
    HIL_OutAO(0x4039, 0.0f);
    X_UnInt32 _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__i;
    for (_solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__i = 0; _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__i < 1; _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__i++) {
        _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__states[_solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__i] = 0;
    }
    HIL_OutAO(0x405e, 0.0f);
    X_UnInt32 _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__i;
    for (_solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__i = 0; _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__i < 1; _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__i++) {
        _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__states[_solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__i] = 0;
    }
    HIL_OutAO(0x405f, 0.0f);
    HIL_OutAO(0x4051, 0.0f);
    HIL_OutAO(0x4052, 0.0f);
    X_UnInt32 _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__i;
    for (_solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__i = 0; _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__i < 1; _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__i++) {
        _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__states[_solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__i] = 0;
    }
    HIL_OutAO(0x4077, 0.0f);
    X_UnInt32 _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__i;
    for (_solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__i = 0; _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__i < 1; _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__i++) {
        _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__states[_solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__i] = 0;
    }
    HIL_OutAO(0x4078, 0.0f);
    HIL_OutAO(0x406a, 0.0f);
    HIL_OutAO(0x406b, 0.0f);
    HIL_OutAO(0x4007, 0.0f);
    _ess_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_comparator1__state = 0.0f;
    X_UnInt32 _ess_inverter_power_meas_power_meas_dqpu_lpf_p__i;
    for (_ess_inverter_power_meas_power_meas_dqpu_lpf_p__i = 0; _ess_inverter_power_meas_power_meas_dqpu_lpf_p__i < 1; _ess_inverter_power_meas_power_meas_dqpu_lpf_p__i++) {
        _ess_inverter_power_meas_power_meas_dqpu_lpf_p__states[_ess_inverter_power_meas_power_meas_dqpu_lpf_p__i] = 0;
    }
    X_UnInt32 _ess_inverter_power_meas_power_meas_dqpu_lpf_q__i;
    for (_ess_inverter_power_meas_power_meas_dqpu_lpf_q__i = 0; _ess_inverter_power_meas_power_meas_dqpu_lpf_q__i < 1; _ess_inverter_power_meas_power_meas_dqpu_lpf_q__i++) {
        _ess_inverter_power_meas_power_meas_dqpu_lpf_q__states[_ess_inverter_power_meas_power_meas_dqpu_lpf_q__i] = 0;
    }
    X_UnInt32 _measurement_lpf_p__i;
    for (_measurement_lpf_p__i = 0; _measurement_lpf_p__i < 1; _measurement_lpf_p__i++) {
        _measurement_lpf_p__states[_measurement_lpf_p__i] = 0;
    }
    HIL_OutAO(0x4021, 0.0f);
    _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_comparator1__state = 0.0f;
    X_UnInt32 _solarhouse1_inverter_power_meas_power_meas_dqpu_lpf_p__i;
    for (_solarhouse1_inverter_power_meas_power_meas_dqpu_lpf_p__i = 0; _solarhouse1_inverter_power_meas_power_meas_dqpu_lpf_p__i < 1; _solarhouse1_inverter_power_meas_power_meas_dqpu_lpf_p__i++) {
        _solarhouse1_inverter_power_meas_power_meas_dqpu_lpf_p__states[_solarhouse1_inverter_power_meas_power_meas_dqpu_lpf_p__i] = 0;
    }
    X_UnInt32 _solarhouse1_inverter_power_meas_power_meas_dqpu_lpf_q__i;
    for (_solarhouse1_inverter_power_meas_power_meas_dqpu_lpf_q__i = 0; _solarhouse1_inverter_power_meas_power_meas_dqpu_lpf_q__i < 1; _solarhouse1_inverter_power_meas_power_meas_dqpu_lpf_q__i++) {
        _solarhouse1_inverter_power_meas_power_meas_dqpu_lpf_q__states[_solarhouse1_inverter_power_meas_power_meas_dqpu_lpf_q__i] = 0;
    }
    X_UnInt32 _solarhouse1_measurement_lpf_p__i;
    for (_solarhouse1_measurement_lpf_p__i = 0; _solarhouse1_measurement_lpf_p__i < 1; _solarhouse1_measurement_lpf_p__i++) {
        _solarhouse1_measurement_lpf_p__states[_solarhouse1_measurement_lpf_p__i] = 0;
    }
    HIL_OutAO(0x403a, 0.0f);
    _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_comparator1__state = 0.0f;
    X_UnInt32 _solarhouse2_inverter_power_meas_power_meas_dqpu_lpf_p__i;
    for (_solarhouse2_inverter_power_meas_power_meas_dqpu_lpf_p__i = 0; _solarhouse2_inverter_power_meas_power_meas_dqpu_lpf_p__i < 1; _solarhouse2_inverter_power_meas_power_meas_dqpu_lpf_p__i++) {
        _solarhouse2_inverter_power_meas_power_meas_dqpu_lpf_p__states[_solarhouse2_inverter_power_meas_power_meas_dqpu_lpf_p__i] = 0;
    }
    X_UnInt32 _solarhouse2_inverter_power_meas_power_meas_dqpu_lpf_q__i;
    for (_solarhouse2_inverter_power_meas_power_meas_dqpu_lpf_q__i = 0; _solarhouse2_inverter_power_meas_power_meas_dqpu_lpf_q__i < 1; _solarhouse2_inverter_power_meas_power_meas_dqpu_lpf_q__i++) {
        _solarhouse2_inverter_power_meas_power_meas_dqpu_lpf_q__states[_solarhouse2_inverter_power_meas_power_meas_dqpu_lpf_q__i] = 0;
    }
    X_UnInt32 _solarhouse2_measurement_lpf_p__i;
    for (_solarhouse2_measurement_lpf_p__i = 0; _solarhouse2_measurement_lpf_p__i < 1; _solarhouse2_measurement_lpf_p__i++) {
        _solarhouse2_measurement_lpf_p__states[_solarhouse2_measurement_lpf_p__i] = 0;
    }
    HIL_OutAO(0x4053, 0.0f);
    _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_comparator1__state = 0.0f;
    X_UnInt32 _solarhouse3_inverter_power_meas_power_meas_dqpu_lpf_p__i;
    for (_solarhouse3_inverter_power_meas_power_meas_dqpu_lpf_p__i = 0; _solarhouse3_inverter_power_meas_power_meas_dqpu_lpf_p__i < 1; _solarhouse3_inverter_power_meas_power_meas_dqpu_lpf_p__i++) {
        _solarhouse3_inverter_power_meas_power_meas_dqpu_lpf_p__states[_solarhouse3_inverter_power_meas_power_meas_dqpu_lpf_p__i] = 0;
    }
    X_UnInt32 _solarhouse3_inverter_power_meas_power_meas_dqpu_lpf_q__i;
    for (_solarhouse3_inverter_power_meas_power_meas_dqpu_lpf_q__i = 0; _solarhouse3_inverter_power_meas_power_meas_dqpu_lpf_q__i < 1; _solarhouse3_inverter_power_meas_power_meas_dqpu_lpf_q__i++) {
        _solarhouse3_inverter_power_meas_power_meas_dqpu_lpf_q__states[_solarhouse3_inverter_power_meas_power_meas_dqpu_lpf_q__i] = 0;
    }
    X_UnInt32 _solarhouse3_measurement_lpf_p__i;
    for (_solarhouse3_measurement_lpf_p__i = 0; _solarhouse3_measurement_lpf_p__i < 1; _solarhouse3_measurement_lpf_p__i++) {
        _solarhouse3_measurement_lpf_p__states[_solarhouse3_measurement_lpf_p__i] = 0;
    }
    HIL_OutAO(0x406c, 0.0f);
    _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_comparator1__state = 0.0f;
    X_UnInt32 _solarhouse4_inverter_power_meas_power_meas_dqpu_lpf_p__i;
    for (_solarhouse4_inverter_power_meas_power_meas_dqpu_lpf_p__i = 0; _solarhouse4_inverter_power_meas_power_meas_dqpu_lpf_p__i < 1; _solarhouse4_inverter_power_meas_power_meas_dqpu_lpf_p__i++) {
        _solarhouse4_inverter_power_meas_power_meas_dqpu_lpf_p__states[_solarhouse4_inverter_power_meas_power_meas_dqpu_lpf_p__i] = 0;
    }
    X_UnInt32 _solarhouse4_inverter_power_meas_power_meas_dqpu_lpf_q__i;
    for (_solarhouse4_inverter_power_meas_power_meas_dqpu_lpf_q__i = 0; _solarhouse4_inverter_power_meas_power_meas_dqpu_lpf_q__i < 1; _solarhouse4_inverter_power_meas_power_meas_dqpu_lpf_q__i++) {
        _solarhouse4_inverter_power_meas_power_meas_dqpu_lpf_q__states[_solarhouse4_inverter_power_meas_power_meas_dqpu_lpf_q__i] = 0;
    }
    X_UnInt32 _solarhouse4_measurement_lpf_p__i;
    for (_solarhouse4_measurement_lpf_p__i = 0; _solarhouse4_measurement_lpf_p__i < 1; _solarhouse4_measurement_lpf_p__i++) {
        _solarhouse4_measurement_lpf_p__states[_solarhouse4_measurement_lpf_p__i] = 0;
    }
    HIL_OutAO(0x400e, 0.0f);
    HIL_OutAO(0x4028, 0.0f);
    HIL_OutAO(0x4041, 0.0f);
    HIL_OutAO(0x405a, 0.0f);
    HIL_OutAO(0x4073, 0.0f);
    HIL_OutAO(0x4009, 0.0f);
    HIL_OutAO(0x4008, 0.0f);
    HIL_OutAO(0x4023, 0.0f);
    HIL_OutAO(0x4022, 0.0f);
    HIL_OutAO(0x403c, 0.0f);
    HIL_OutAO(0x403b, 0.0f);
    HIL_OutAO(0x4055, 0.0f);
    HIL_OutAO(0x4054, 0.0f);
    HIL_OutAO(0x406e, 0.0f);
    HIL_OutAO(0x406d, 0.0f);
    _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__integrator_state =  0.0;
    _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__filter_state =  0.0;
    HIL_OutAO(0x400d, 0.0f);
    _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__integrator_state =  0.0;
    _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__filter_state =  0.0;
    HIL_OutAO(0x400c, 0.0f);
    _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__integrator_state =  0.0;
    _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__filter_state =  0.0;
    HIL_OutAO(0x4027, 0.0f);
    _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__integrator_state =  0.0;
    _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__filter_state =  0.0;
    HIL_OutAO(0x4026, 0.0f);
    _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__integrator_state =  0.0;
    _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__filter_state =  0.0;
    HIL_OutAO(0x4040, 0.0f);
    _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__integrator_state =  0.0;
    _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__filter_state =  0.0;
    HIL_OutAO(0x403f, 0.0f);
    _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__integrator_state =  0.0;
    _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__filter_state =  0.0;
    HIL_OutAO(0x4059, 0.0f);
    _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__integrator_state =  0.0;
    _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__filter_state =  0.0;
    HIL_OutAO(0x4058, 0.0f);
    _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__integrator_state =  0.0;
    _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__filter_state =  0.0;
    HIL_OutAO(0x4072, 0.0f);
    _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__integrator_state =  0.0;
    _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__filter_state =  0.0;
    HIL_OutAO(0x4071, 0.0f);
    HIL_OutAO(0x4010, 0.0f);
    HIL_OutAO(0x400f, 0.0f);
    HIL_OutAO(0x402a, 0.0f);
    HIL_OutAO(0x4029, 0.0f);
    HIL_OutAO(0x4043, 0.0f);
    HIL_OutAO(0x4042, 0.0f);
    HIL_OutAO(0x405c, 0.0f);
    HIL_OutAO(0x405b, 0.0f);
    HIL_OutAO(0x4075, 0.0f);
    HIL_OutAO(0x4074, 0.0f);
    HIL_OutAO(0x400b, 0.0f);
    HIL_OutAO(0x400a, 0.0f);
    HIL_OutAO(0x4025, 0.0f);
    HIL_OutAO(0x4024, 0.0f);
    HIL_OutAO(0x403e, 0.0f);
    HIL_OutAO(0x403d, 0.0f);
    HIL_OutAO(0x4057, 0.0f);
    HIL_OutAO(0x4056, 0.0f);
    HIL_OutAO(0x4070, 0.0f);
    HIL_OutAO(0x406f, 0.0f);
    _ess_inverter_single_phase_inverter1_pwm_modulator__update_mask = 3;
    HIL_OutInt32(0x2000080 + _ess_inverter_single_phase_inverter1_pwm_modulator__channels[0], 2500);// divide by 2 is already implemented in hw
    HIL_OutInt32(0x20000c0 + _ess_inverter_single_phase_inverter1_pwm_modulator__channels[0], 250);
    HIL_OutInt32(0x2000080 + _ess_inverter_single_phase_inverter1_pwm_modulator__channels[1], 2500);// divide by 2 is already implemented in hw
    HIL_OutInt32(0x20000c0 + _ess_inverter_single_phase_inverter1_pwm_modulator__channels[1], 250);
    HIL_OutInt32(0x20001c0 + _ess_inverter_single_phase_inverter1_pwm_modulator__channels[0], 0);
    HIL_OutInt32(0x2000200 + _ess_inverter_single_phase_inverter1_pwm_modulator__channels[0], 0);
    HIL_OutInt32(0x20001c0 + _ess_inverter_single_phase_inverter1_pwm_modulator__channels[1], 2500);
    HIL_OutInt32(0x2000200 + _ess_inverter_single_phase_inverter1_pwm_modulator__channels[1], 1);
    HIL_OutInt32(0x2000240 + _ess_inverter_single_phase_inverter1_pwm_modulator__channels[0], 0);
    HIL_OutInt32(0x2000240 + _ess_inverter_single_phase_inverter1_pwm_modulator__channels[1], 0);
    HIL_OutInt32(0x2000300 + _ess_inverter_single_phase_inverter1_pwm_modulator__channels[0], 1);
    HIL_OutInt32(0x2000300 + _ess_inverter_single_phase_inverter1_pwm_modulator__channels[1], 1);
    HIL_OutInt32(0x2000140, _ess_inverter_single_phase_inverter1_pwm_modulator__update_mask);
    _solarhouse1_inverter_single_phase_inverter1_pwm_modulator__update_mask = 12;
    HIL_OutInt32(0x2000080 + _solarhouse1_inverter_single_phase_inverter1_pwm_modulator__channels[0], 2500);// divide by 2 is already implemented in hw
    HIL_OutInt32(0x20000c0 + _solarhouse1_inverter_single_phase_inverter1_pwm_modulator__channels[0], 250);
    HIL_OutInt32(0x2000080 + _solarhouse1_inverter_single_phase_inverter1_pwm_modulator__channels[1], 2500);// divide by 2 is already implemented in hw
    HIL_OutInt32(0x20000c0 + _solarhouse1_inverter_single_phase_inverter1_pwm_modulator__channels[1], 250);
    HIL_OutInt32(0x20001c0 + _solarhouse1_inverter_single_phase_inverter1_pwm_modulator__channels[0], 0);
    HIL_OutInt32(0x2000200 + _solarhouse1_inverter_single_phase_inverter1_pwm_modulator__channels[0], 0);
    HIL_OutInt32(0x20001c0 + _solarhouse1_inverter_single_phase_inverter1_pwm_modulator__channels[1], 2500);
    HIL_OutInt32(0x2000200 + _solarhouse1_inverter_single_phase_inverter1_pwm_modulator__channels[1], 1);
    HIL_OutInt32(0x2000240 + _solarhouse1_inverter_single_phase_inverter1_pwm_modulator__channels[0], 0);
    HIL_OutInt32(0x2000240 + _solarhouse1_inverter_single_phase_inverter1_pwm_modulator__channels[1], 0);
    HIL_OutInt32(0x2000300 + _solarhouse1_inverter_single_phase_inverter1_pwm_modulator__channels[0], 1);
    HIL_OutInt32(0x2000300 + _solarhouse1_inverter_single_phase_inverter1_pwm_modulator__channels[1], 1);
    HIL_OutInt32(0x2000140, _solarhouse1_inverter_single_phase_inverter1_pwm_modulator__update_mask);
    _solarhouse2_inverter_single_phase_inverter1_pwm_modulator__update_mask = 48;
    HIL_OutInt32(0x2000080 + _solarhouse2_inverter_single_phase_inverter1_pwm_modulator__channels[0], 2500);// divide by 2 is already implemented in hw
    HIL_OutInt32(0x20000c0 + _solarhouse2_inverter_single_phase_inverter1_pwm_modulator__channels[0], 250);
    HIL_OutInt32(0x2000080 + _solarhouse2_inverter_single_phase_inverter1_pwm_modulator__channels[1], 2500);// divide by 2 is already implemented in hw
    HIL_OutInt32(0x20000c0 + _solarhouse2_inverter_single_phase_inverter1_pwm_modulator__channels[1], 250);
    HIL_OutInt32(0x20001c0 + _solarhouse2_inverter_single_phase_inverter1_pwm_modulator__channels[0], 0);
    HIL_OutInt32(0x2000200 + _solarhouse2_inverter_single_phase_inverter1_pwm_modulator__channels[0], 0);
    HIL_OutInt32(0x20001c0 + _solarhouse2_inverter_single_phase_inverter1_pwm_modulator__channels[1], 2500);
    HIL_OutInt32(0x2000200 + _solarhouse2_inverter_single_phase_inverter1_pwm_modulator__channels[1], 1);
    HIL_OutInt32(0x2000240 + _solarhouse2_inverter_single_phase_inverter1_pwm_modulator__channels[0], 0);
    HIL_OutInt32(0x2000240 + _solarhouse2_inverter_single_phase_inverter1_pwm_modulator__channels[1], 0);
    HIL_OutInt32(0x2000300 + _solarhouse2_inverter_single_phase_inverter1_pwm_modulator__channels[0], 1);
    HIL_OutInt32(0x2000300 + _solarhouse2_inverter_single_phase_inverter1_pwm_modulator__channels[1], 1);
    HIL_OutInt32(0x2000140, _solarhouse2_inverter_single_phase_inverter1_pwm_modulator__update_mask);
    _solarhouse3_inverter_single_phase_inverter1_pwm_modulator__update_mask = 192;
    HIL_OutInt32(0x2000080 + _solarhouse3_inverter_single_phase_inverter1_pwm_modulator__channels[0], 2500);// divide by 2 is already implemented in hw
    HIL_OutInt32(0x20000c0 + _solarhouse3_inverter_single_phase_inverter1_pwm_modulator__channels[0], 250);
    HIL_OutInt32(0x2000080 + _solarhouse3_inverter_single_phase_inverter1_pwm_modulator__channels[1], 2500);// divide by 2 is already implemented in hw
    HIL_OutInt32(0x20000c0 + _solarhouse3_inverter_single_phase_inverter1_pwm_modulator__channels[1], 250);
    HIL_OutInt32(0x20001c0 + _solarhouse3_inverter_single_phase_inverter1_pwm_modulator__channels[0], 0);
    HIL_OutInt32(0x2000200 + _solarhouse3_inverter_single_phase_inverter1_pwm_modulator__channels[0], 0);
    HIL_OutInt32(0x20001c0 + _solarhouse3_inverter_single_phase_inverter1_pwm_modulator__channels[1], 2500);
    HIL_OutInt32(0x2000200 + _solarhouse3_inverter_single_phase_inverter1_pwm_modulator__channels[1], 1);
    HIL_OutInt32(0x2000240 + _solarhouse3_inverter_single_phase_inverter1_pwm_modulator__channels[0], 0);
    HIL_OutInt32(0x2000240 + _solarhouse3_inverter_single_phase_inverter1_pwm_modulator__channels[1], 0);
    HIL_OutInt32(0x2000300 + _solarhouse3_inverter_single_phase_inverter1_pwm_modulator__channels[0], 1);
    HIL_OutInt32(0x2000300 + _solarhouse3_inverter_single_phase_inverter1_pwm_modulator__channels[1], 1);
    HIL_OutInt32(0x2000140, _solarhouse3_inverter_single_phase_inverter1_pwm_modulator__update_mask);
    _solarhouse4_inverter_single_phase_inverter1_pwm_modulator__update_mask = 768;
    HIL_OutInt32(0x2000080 + _solarhouse4_inverter_single_phase_inverter1_pwm_modulator__channels[0], 2500);// divide by 2 is already implemented in hw
    HIL_OutInt32(0x20000c0 + _solarhouse4_inverter_single_phase_inverter1_pwm_modulator__channels[0], 250);
    HIL_OutInt32(0x2000080 + _solarhouse4_inverter_single_phase_inverter1_pwm_modulator__channels[1], 2500);// divide by 2 is already implemented in hw
    HIL_OutInt32(0x20000c0 + _solarhouse4_inverter_single_phase_inverter1_pwm_modulator__channels[1], 250);
    HIL_OutInt32(0x20001c0 + _solarhouse4_inverter_single_phase_inverter1_pwm_modulator__channels[0], 0);
    HIL_OutInt32(0x2000200 + _solarhouse4_inverter_single_phase_inverter1_pwm_modulator__channels[0], 0);
    HIL_OutInt32(0x20001c0 + _solarhouse4_inverter_single_phase_inverter1_pwm_modulator__channels[1], 2500);
    HIL_OutInt32(0x2000200 + _solarhouse4_inverter_single_phase_inverter1_pwm_modulator__channels[1], 1);
    HIL_OutInt32(0x2000240 + _solarhouse4_inverter_single_phase_inverter1_pwm_modulator__channels[0], 0);
    HIL_OutInt32(0x2000240 + _solarhouse4_inverter_single_phase_inverter1_pwm_modulator__channels[1], 0);
    HIL_OutInt32(0x2000300 + _solarhouse4_inverter_single_phase_inverter1_pwm_modulator__channels[0], 1);
    HIL_OutInt32(0x2000300 + _solarhouse4_inverter_single_phase_inverter1_pwm_modulator__channels[1], 1);
    HIL_OutInt32(0x2000140, _solarhouse4_inverter_single_phase_inverter1_pwm_modulator__update_mask);
    //@cmp.init.block.end
}

void ReInit_sp_scope_user_sp_cpu0_dev0() {
    // initialise SP Scope buffer pointer
}

void load_fmi_libraries_user_sp_cpu0_dev0(void) {
#if defined(_WIN64)
#else
#endif
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
    // Generated from the component: ESS.Dynamic Table1.Clock1
    _ess_dynamic_table1_clock1__out = _ess_dynamic_table1_clock1__state;
    // Generated from the component: ESS.Modbus.Bus Split1
    _ess_modbus_bus_split1__out = _ess_modbus_modbus_device__config__comp_holding_in_out__out[0];
    _ess_modbus_bus_split1__out1 = _ess_modbus_modbus_device__config__comp_holding_in_out__out[1];
    // Generated from the component: ESS.Modbus.C_u11
    // Generated from the component: ESS.Modbus.C_u12
    // Generated from the component: ESS.Modbus.C_u13
    // Generated from the component: ESS.Modbus.Termination1
    // Generated from the component: Grid.Constant1
    // Generated from the component: Grid.Constant2
    // Generated from the component: Grid.Constant3
    // Generated from the component: SolarHouse1.Modbus.Bus Split1
    _solarhouse1_modbus_bus_split1__out = _solarhouse1_modbus_modbus_device1__config1__comp_holding_in_out__out[0];
    _solarhouse1_modbus_bus_split1__out1 = _solarhouse1_modbus_modbus_device1__config1__comp_holding_in_out__out[1];
    // Generated from the component: SolarHouse1.Modbus.C_u11
    // Generated from the component: SolarHouse1.Modbus.C_u12
    // Generated from the component: SolarHouse1.Modbus.C_u13
    // Generated from the component: SolarHouse1.Modbus.Termination1
    // Generated from the component: SolarHouse2.Modbus.Bus Split1
    _solarhouse2_modbus_bus_split1__out = _solarhouse2_modbus_modbus_device2__config2__comp_holding_in_out__out[0];
    _solarhouse2_modbus_bus_split1__out1 = _solarhouse2_modbus_modbus_device2__config2__comp_holding_in_out__out[1];
    // Generated from the component: SolarHouse2.Modbus.C_u11
    // Generated from the component: SolarHouse2.Modbus.C_u12
    // Generated from the component: SolarHouse2.Modbus.C_u13
    // Generated from the component: SolarHouse2.Modbus.Termination1
    // Generated from the component: SolarHouse3.Modbus.Bus Split1
    _solarhouse3_modbus_bus_split1__out = _solarhouse3_modbus_modbus_device3__config3__comp_holding_in_out__out[0];
    _solarhouse3_modbus_bus_split1__out1 = _solarhouse3_modbus_modbus_device3__config3__comp_holding_in_out__out[1];
    // Generated from the component: SolarHouse3.Modbus.C_u11
    // Generated from the component: SolarHouse3.Modbus.C_u12
    // Generated from the component: SolarHouse3.Modbus.C_u13
    // Generated from the component: SolarHouse3.Modbus.Termination1
    // Generated from the component: SolarHouse4.Modbus.Bus Split1
    _solarhouse4_modbus_bus_split1__out = _solarhouse4_modbus_modbus_device4__config4__comp_holding_in_out__out[0];
    _solarhouse4_modbus_bus_split1__out1 = _solarhouse4_modbus_modbus_device4__config4__comp_holding_in_out__out[1];
    // Generated from the component: SolarHouse4.Modbus.C_u11
    // Generated from the component: SolarHouse4.Modbus.C_u12
    // Generated from the component: SolarHouse4.Modbus.C_u13
    // Generated from the component: SolarHouse4.Modbus.Termination1
    // Generated from the component: ESS.Dynamic Table1.1D look-up table1
    if(_ess_dynamic_table1_clock1__out <= _ess_dynamic_table1_1d_look_up_table1__lut_addrs[0]) {
        _ess_dynamic_table1_1d_look_up_table1__fraction = 0.0;
        _ess_dynamic_table1_1d_look_up_table1__leftIndex = 0;
    }
    else if(_ess_dynamic_table1_clock1__out < _ess_dynamic_table1_1d_look_up_table1__lut_addrs[1200]) {
        _ess_dynamic_table1_1d_look_up_table1__curAddr = 1200 >> 1;
        _ess_dynamic_table1_1d_look_up_table1__leftIndex = 0;
        _ess_dynamic_table1_1d_look_up_table1__rightIndex = 1200;
        while (1 < _ess_dynamic_table1_1d_look_up_table1__rightIndex - _ess_dynamic_table1_1d_look_up_table1__leftIndex) {
            if (_ess_dynamic_table1_clock1__out < _ess_dynamic_table1_1d_look_up_table1__lut_addrs[_ess_dynamic_table1_1d_look_up_table1__curAddr]) {
                _ess_dynamic_table1_1d_look_up_table1__rightIndex = _ess_dynamic_table1_1d_look_up_table1__curAddr;
            }
            else {
                _ess_dynamic_table1_1d_look_up_table1__leftIndex = _ess_dynamic_table1_1d_look_up_table1__curAddr;
            }
            _ess_dynamic_table1_1d_look_up_table1__curAddr = (_ess_dynamic_table1_1d_look_up_table1__leftIndex + _ess_dynamic_table1_1d_look_up_table1__rightIndex) >> 1;
        }
        _ess_dynamic_table1_1d_look_up_table1__fraction = (_ess_dynamic_table1_clock1__out - _ess_dynamic_table1_1d_look_up_table1__lut_addrs[_ess_dynamic_table1_1d_look_up_table1__leftIndex])
                / (_ess_dynamic_table1_1d_look_up_table1__lut_addrs[_ess_dynamic_table1_1d_look_up_table1__leftIndex + 1] - _ess_dynamic_table1_1d_look_up_table1__lut_addrs[_ess_dynamic_table1_1d_look_up_table1__leftIndex]);
    }
    else {
        _ess_dynamic_table1_1d_look_up_table1__fraction = 1.0;
        _ess_dynamic_table1_1d_look_up_table1__leftIndex = 1199;
    }
    _ess_dynamic_table1_1d_look_up_table1__value = (_ess_dynamic_table1_1d_look_up_table1__lut_table[_ess_dynamic_table1_1d_look_up_table1__leftIndex + 1] - _ess_dynamic_table1_1d_look_up_table1__lut_table[_ess_dynamic_table1_1d_look_up_table1__leftIndex])
            * _ess_dynamic_table1_1d_look_up_table1__fraction + _ess_dynamic_table1_1d_look_up_table1__lut_table[_ess_dynamic_table1_1d_look_up_table1__leftIndex];
    // Generated from the component: ESS.Pref_ed
    HIL_OutAO(0x401c, (float)_ess_modbus_bus_split1__out);
    // Generated from the component: ESS.Pref_reg
    HIL_OutAO(0x401d, (float)_ess_modbus_bus_split1__out1);
    // Generated from the component: ESS.Sum1
    _ess_sum1__out = _ess_modbus_bus_split1__out1 + _ess_modbus_bus_split1__out;
    // Generated from the component: ESS.Modbus.ModBus Device (config).comp_coil_in_out
    // Component not supported for this platform. Outputs are zeroed.
    _ess_modbus_modbus_device__config__comp_coil_in_out__out = 0;
    // Generated from the component: ESS.Modbus.ModBus Device (config).comp_discrete_in
    // Component not supported for this platform. Outputs are zeroed.
    // Generated from the component: ESS.Modbus.ModBus Device (config).comp_holding_in_out
    // Component not supported for this platform. Outputs are zeroed.
    _ess_modbus_modbus_device__config__comp_holding_in_out__out[0] = 0;
    _ess_modbus_modbus_device__config__comp_holding_in_out__out[1] = 0;
    // Generated from the component: ESS.Modbus.RegD_probe
    HIL_OutAO(0x401a, (float)_ess_modbus_rate_transition2_output__out);
    // Generated from the component: ESS.Modbus.Time_probe
    HIL_OutAO(0x401b, (float)_ess_modbus_rate_transition3_output__out);
    // Generated from the component: ESS.Modbus.Bus Join1
    _ess_modbus_bus_join1__out[0] = _ess_modbus_rate_transition2_output__out;
    _ess_modbus_bus_join1__out[1] = _ess_modbus_rate_transition3_output__out;
    _ess_modbus_bus_join1__out[2] = _ess_modbus_rate_transition4_output__out;
    // Generated from the component: Grid.Vs.Limit1
    _grid_vs_limit1__out = MAX(_grid_constant1__out, 0.0);
    // Generated from the component: Grid.Vs.Limit2
    _grid_vs_limit2__out = MIN(MAX(_grid_constant2__out, 0.1), 10000.0);
    // Generated from the component: SolarHouse1.Pref_ed
    HIL_OutAO(0x4036, (float)_solarhouse1_modbus_bus_split1__out);
    // Generated from the component: SolarHouse1.Pref_reg
    HIL_OutAO(0x4037, (float)_solarhouse1_modbus_bus_split1__out1);
    // Generated from the component: SolarHouse1.Sum1
    _solarhouse1_sum1__out = _solarhouse1_modbus_bus_split1__out1 + _solarhouse1_modbus_bus_split1__out;
    // Generated from the component: SolarHouse1.Modbus.ModBus Device1 (config1).comp_coil_in_out
    // Component not supported for this platform. Outputs are zeroed.
    _solarhouse1_modbus_modbus_device1__config1__comp_coil_in_out__out = 0;
    // Generated from the component: SolarHouse1.Modbus.ModBus Device1 (config1).comp_discrete_in
    // Component not supported for this platform. Outputs are zeroed.
    // Generated from the component: SolarHouse1.Modbus.ModBus Device1 (config1).comp_holding_in_out
    // Component not supported for this platform. Outputs are zeroed.
    _solarhouse1_modbus_modbus_device1__config1__comp_holding_in_out__out[0] = 0;
    _solarhouse1_modbus_modbus_device1__config1__comp_holding_in_out__out[1] = 0;
    // Generated from the component: SolarHouse1.Modbus.Bus Join1
    _solarhouse1_modbus_bus_join1__out[0] = _solarhouse1_modbus_rate_transition1_output__out;
    _solarhouse1_modbus_bus_join1__out[1] = _solarhouse1_modbus_rate_transition4_output__out;
    // Generated from the component: SolarHouse2.Pref_ed
    HIL_OutAO(0x404f, (float)_solarhouse2_modbus_bus_split1__out);
    // Generated from the component: SolarHouse2.Pref_reg
    HIL_OutAO(0x4050, (float)_solarhouse2_modbus_bus_split1__out1);
    // Generated from the component: SolarHouse2.Sum1
    _solarhouse2_sum1__out = _solarhouse2_modbus_bus_split1__out1 + _solarhouse2_modbus_bus_split1__out;
    // Generated from the component: SolarHouse2.Modbus.ModBus Device2 (config2).comp_coil_in_out
    // Component not supported for this platform. Outputs are zeroed.
    _solarhouse2_modbus_modbus_device2__config2__comp_coil_in_out__out = 0;
    // Generated from the component: SolarHouse2.Modbus.ModBus Device2 (config2).comp_discrete_in
    // Component not supported for this platform. Outputs are zeroed.
    // Generated from the component: SolarHouse2.Modbus.ModBus Device2 (config2).comp_holding_in_out
    // Component not supported for this platform. Outputs are zeroed.
    _solarhouse2_modbus_modbus_device2__config2__comp_holding_in_out__out[0] = 0;
    _solarhouse2_modbus_modbus_device2__config2__comp_holding_in_out__out[1] = 0;
    // Generated from the component: SolarHouse2.Modbus.Bus Join1
    _solarhouse2_modbus_bus_join1__out[0] = _solarhouse2_modbus_rate_transition1_output__out;
    _solarhouse2_modbus_bus_join1__out[1] = _solarhouse2_modbus_rate_transition4_output__out;
    // Generated from the component: SolarHouse3.Pref_ed
    HIL_OutAO(0x4068, (float)_solarhouse3_modbus_bus_split1__out);
    // Generated from the component: SolarHouse3.Pref_reg
    HIL_OutAO(0x4069, (float)_solarhouse3_modbus_bus_split1__out1);
    // Generated from the component: SolarHouse3.Sum1
    _solarhouse3_sum1__out = _solarhouse3_modbus_bus_split1__out1 + _solarhouse3_modbus_bus_split1__out;
    // Generated from the component: SolarHouse3.Modbus.ModBus Device3 (config3).comp_coil_in_out
    // Component not supported for this platform. Outputs are zeroed.
    _solarhouse3_modbus_modbus_device3__config3__comp_coil_in_out__out = 0;
    // Generated from the component: SolarHouse3.Modbus.ModBus Device3 (config3).comp_discrete_in
    // Component not supported for this platform. Outputs are zeroed.
    // Generated from the component: SolarHouse3.Modbus.ModBus Device3 (config3).comp_holding_in_out
    // Component not supported for this platform. Outputs are zeroed.
    _solarhouse3_modbus_modbus_device3__config3__comp_holding_in_out__out[0] = 0;
    _solarhouse3_modbus_modbus_device3__config3__comp_holding_in_out__out[1] = 0;
    // Generated from the component: SolarHouse3.Modbus.Bus Join1
    _solarhouse3_modbus_bus_join1__out[0] = _solarhouse3_modbus_rate_transition1_output__out;
    _solarhouse3_modbus_bus_join1__out[1] = _solarhouse3_modbus_rate_transition4_output__out;
    // Generated from the component: SolarHouse4.Pref_ed
    HIL_OutAO(0x4081, (float)_solarhouse4_modbus_bus_split1__out);
    // Generated from the component: SolarHouse4.Pref_reg
    HIL_OutAO(0x4082, (float)_solarhouse4_modbus_bus_split1__out1);
    // Generated from the component: SolarHouse4.Sum1
    _solarhouse4_sum1__out = _solarhouse4_modbus_bus_split1__out1 + _solarhouse4_modbus_bus_split1__out;
    // Generated from the component: SolarHouse4.Modbus.ModBus Device4 (config4).comp_coil_in_out
    // Component not supported for this platform. Outputs are zeroed.
    _solarhouse4_modbus_modbus_device4__config4__comp_coil_in_out__out = 0;
    // Generated from the component: SolarHouse4.Modbus.ModBus Device4 (config4).comp_discrete_in
    // Component not supported for this platform. Outputs are zeroed.
    // Generated from the component: SolarHouse4.Modbus.ModBus Device4 (config4).comp_holding_in_out
    // Component not supported for this platform. Outputs are zeroed.
    _solarhouse4_modbus_modbus_device4__config4__comp_holding_in_out__out[0] = 0;
    _solarhouse4_modbus_modbus_device4__config4__comp_holding_in_out__out[1] = 0;
    // Generated from the component: SolarHouse4.Modbus.Bus Join1
    _solarhouse4_modbus_bus_join1__out[0] = _solarhouse4_modbus_rate_transition1_output__out;
    _solarhouse4_modbus_bus_join1__out[1] = _solarhouse4_modbus_rate_transition4_output__out;
    // Generated from the component: ESS.Rate Transition2.Input
    _ess_rate_transition2_output__out = _ess_dynamic_table1_1d_look_up_table1__value;
    // Generated from the component: ESS.Rate Transition1.Input
    _ess_rate_transition1_output__out = _ess_sum1__out;
    // Generated from the component: ESS.Modbus.ModBus Device (config).comp_reg_in
    // Component not supported for this platform. Outputs are zeroed.
    // Generated from the component: Grid.Vs.tdf_sg_ctrl_sine1
    // calculate and write SG parameters
    // calculate amplitude
    _grid_vs_tdf_sg_ctrl_sine1__gain = _grid_vs_limit1__out * M_SQRT2;
    // calculate period
    _grid_vs_tdf_sg_ctrl_sine1__period = 1.0f / _grid_vs_limit2__out;
    // calculate sample_cnt increment value
    _grid_vs_tdf_sg_ctrl_sine1__sample_cnt_inc_real = _grid_vs_tdf_sg_ctrl_sine1__max_int40 / (_grid_vs_tdf_sg_ctrl_sine1__period / 4e-06);
    _grid_vs_tdf_sg_ctrl_sine1__sample_cnt_inc_lo = (X_UnInt32)(fmod(_grid_vs_tdf_sg_ctrl_sine1__sample_cnt_inc_real, _grid_vs_tdf_sg_ctrl_sine1__max_int32));
    _grid_vs_tdf_sg_ctrl_sine1__sample_cnt_inc_hi = (X_UnInt32)(_grid_vs_tdf_sg_ctrl_sine1__sample_cnt_inc_real / _grid_vs_tdf_sg_ctrl_sine1__max_int32);
    _grid_vs_tdf_sg_ctrl_sine1__sg_update_value = 0;
    X_UnInt32 _grid_vs_tdf_sg_ctrl_sine1__i;
    for (_grid_vs_tdf_sg_ctrl_sine1__i = 0; _grid_vs_tdf_sg_ctrl_sine1__i < 1; _grid_vs_tdf_sg_ctrl_sine1__i++) {
        //calculate offset for each channel
        _grid_vs_tdf_sg_ctrl_sine1__shift = (double)(_grid_vs_tdf_sg_ctrl_sine1__i) * 0.0;
        _grid_vs_tdf_sg_ctrl_sine1__phase_pu = fmod((_grid_constant3__out / 360.0f + _grid_vs_tdf_sg_ctrl_sine1__shift / (2.0f * M_PI)), 1.0f);
        if (_grid_vs_tdf_sg_ctrl_sine1__phase_pu < 0.0f) {
            _grid_vs_tdf_sg_ctrl_sine1__phase_pu = _grid_vs_tdf_sg_ctrl_sine1__phase_pu + 1.0f;
        }
        _grid_vs_tdf_sg_ctrl_sine1__offset = (_grid_vs_tdf_sg_ctrl_sine1__max_int32 * _grid_vs_tdf_sg_ctrl_sine1__phase_pu);  // offset in SP
        _grid_vs_tdf_sg_ctrl_sine1__offset_uint = (X_UnInt32)_grid_vs_tdf_sg_ctrl_sine1__offset;  // offset in fp32
        // write parameters
        HIL_OutFloat(0x400200 + _grid_vs_tdf_sg_ctrl_sine1__channels[_grid_vs_tdf_sg_ctrl_sine1__i], (float) _grid_vs_tdf_sg_ctrl_sine1__gain);
        HIL_OutInt32(0x400180 + _grid_vs_tdf_sg_ctrl_sine1__channels[_grid_vs_tdf_sg_ctrl_sine1__i], _grid_vs_tdf_sg_ctrl_sine1__offset_uint); // offset in fp32
        HIL_OutInt32(0x400000 + _grid_vs_tdf_sg_ctrl_sine1__channels[_grid_vs_tdf_sg_ctrl_sine1__i], _grid_vs_tdf_sg_ctrl_sine1__sample_cnt_inc_lo);
        HIL_OutInt32(0x400280 + _grid_vs_tdf_sg_ctrl_sine1__channels[_grid_vs_tdf_sg_ctrl_sine1__i], _grid_vs_tdf_sg_ctrl_sine1__sample_cnt_inc_hi);
        HIL_OutFloat(0x400100 + _grid_vs_tdf_sg_ctrl_sine1__channels[_grid_vs_tdf_sg_ctrl_sine1__i], (float) _grid_vs_tdf_sg_ctrl_sine1__no_of_points);
        _grid_vs_tdf_sg_ctrl_sine1__sg_update_value += 1 << _grid_vs_tdf_sg_ctrl_sine1__channels[_grid_vs_tdf_sg_ctrl_sine1__i];
    }
    HIL_OutInt32(0x400080, _grid_vs_tdf_sg_ctrl_sine1__sg_update_value);  // update SG parameters for all channels
    // Generated from the component: SolarHouse1.Rate Transition1.Input
    _solarhouse1_rate_transition1_output__out = _solarhouse1_sum1__out;
    // Generated from the component: SolarHouse1.Modbus.ModBus Device1 (config1).comp_reg_in
    // Component not supported for this platform. Outputs are zeroed.
    // Generated from the component: SolarHouse2.Rate Transition1.Input
    _solarhouse2_rate_transition1_output__out = _solarhouse2_sum1__out;
    // Generated from the component: SolarHouse2.Modbus.ModBus Device2 (config2).comp_reg_in
    // Component not supported for this platform. Outputs are zeroed.
    // Generated from the component: SolarHouse3.Rate Transition1.Input
    _solarhouse3_rate_transition1_output__out = _solarhouse3_sum1__out;
    // Generated from the component: SolarHouse3.Modbus.ModBus Device3 (config3).comp_reg_in
    // Component not supported for this platform. Outputs are zeroed.
    // Generated from the component: SolarHouse4.Rate Transition1.Input
    _solarhouse4_rate_transition1_output__out = _solarhouse4_sum1__out;
    // Generated from the component: SolarHouse4.Modbus.ModBus Device4 (config4).comp_reg_in
    // Component not supported for this platform. Outputs are zeroed.
    //@cmp.out.block.end
    //////////////////////////////////////////////////////////////////////////
    // Update block
    //////////////////////////////////////////////////////////////////////////
    //@cmp.update.block.start
    // Generated from the component: ESS.Dynamic Table1.Clock1
    _ess_dynamic_table1_clock1__state += 0.0001;
    if (_ess_dynamic_table1_clock1__state >= 4800.0)
        _ess_dynamic_table1_clock1__state = 0.0f;
    //@cmp.update.block.end
}
void TimerCounterHandler_1_user_sp_cpu0_dev0() {
#if DEBUG_MODE
    printf("\n\rTimerCounterHandler_1");
#endif
    //////////////////////////////////////////////////////////////////////////
    // Output block
    //////////////////////////////////////////////////////////////////////////
    //@cmp.out.block.start
    // Generated from the component: ESS.Inverter.Controller.Constant2
    // Generated from the component: ESS.Inverter.Controller.Constant3
    // Generated from the component: ESS.Inverter.Controller.Constant4
    // Generated from the component: ESS.Inverter.Controller.Constant5
    // Generated from the component: ESS.Inverter.Controller.Constant6
    // Generated from the component: ESS.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.LPF_dc
    X_UnInt32 _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__i;
    _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__a_sum = 0.0f;
    _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__b_sum = 0.0f;
    _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__delay_line_in = 0.0f;
    for (_ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__i = 0; _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__i < 1; _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__i++) {
        _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__b_sum += _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__b_coeff[_ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__i + 1] * _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__states[_ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__i];
    }
    _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__a_sum += _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__states[0] * _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__a_coeff[1];
    _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__delay_line_in = _ess_inverter_lpf_dc__out - _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__a_sum;
    _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__b_sum += _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__b_coeff[0] * _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__delay_line_in;
    _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__out = _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__b_sum;
    // Generated from the component: ESS.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Limit3
    _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_limit3__out = MAX(_ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__out, 10.0);
    // Generated from the component: ESS.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.outer power loop1.Limit_zero
    // Generated from the component: ESS.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.outer power loop1.one
    // Generated from the component: ESS.Inverter.Controller.charge
    _ess_inverter_controller_charge__out = XIo_InInt32(0x55000128);
    // Generated from the component: ESS.Inverter.E.Va1
    _ess_inverter_e_va1__out = (HIL_InFloat(0xc80000 + 0x202));
    // Generated from the component: ESS.Inverter.I.Ia1
    _ess_inverter_i_ia1__out = (HIL_InFloat(0xc80000 + 0x205));
    // Generated from the component: ESS.Inverter.Io.Ia1
    _ess_inverter_io_ia1__out = (HIL_InFloat(0xc80000 + 0x206));
    // Generated from the component: ESS.Inverter.Power_Meas.Gain4
    _ess_inverter_power_meas_gain4__out = 50000.0 * _ess_inverter_power_meas_power_meas_dqpu_lpf_p__out;
    // Generated from the component: ESS.Inverter.Power_Meas.Gain5
    _ess_inverter_power_meas_gain5__out = 50000.0 * _ess_inverter_power_meas_power_meas_dqpu_lpf_q__out;
    // Generated from the component: ESS.Inverter.Power_Meas.Power_Meas_DQpu.S_and_pf
    _ess_inverter_power_meas_power_meas_dqpu_s_and_pf__P = _ess_inverter_power_meas_power_meas_dqpu_lpf_p__out;
    _ess_inverter_power_meas_power_meas_dqpu_s_and_pf__Q = _ess_inverter_power_meas_power_meas_dqpu_lpf_q__out;
    _ess_inverter_power_meas_power_meas_dqpu_s_and_pf__S = sqrt(_ess_inverter_power_meas_power_meas_dqpu_s_and_pf__P * _ess_inverter_power_meas_power_meas_dqpu_s_and_pf__P + _ess_inverter_power_meas_power_meas_dqpu_s_and_pf__Q * _ess_inverter_power_meas_power_meas_dqpu_s_and_pf__Q);
    if (_ess_inverter_power_meas_power_meas_dqpu_s_and_pf__S > 0) {
        _ess_inverter_power_meas_power_meas_dqpu_s_and_pf__pf = _ess_inverter_power_meas_power_meas_dqpu_s_and_pf__P / _ess_inverter_power_meas_power_meas_dqpu_s_and_pf__S;
    }
    else {
        _ess_inverter_power_meas_power_meas_dqpu_s_and_pf__pf = 0;
    }
    // Generated from the component: ESS.Inverter.VDC.Va1
    _ess_inverter_vdc_va1__out = (HIL_InFloat(0xc80000 + 0x203));
    // Generated from the component: Measurement.BPF.HPF
    X_UnInt32 _measurement_bpf_hpf__i;
    _measurement_bpf_hpf__a_sum = 0.0f;
    _measurement_bpf_hpf__b_sum = 0.0f;
    _measurement_bpf_hpf__delay_line_in = 0.0f;
    for (_measurement_bpf_hpf__i = 0; _measurement_bpf_hpf__i < 1; _measurement_bpf_hpf__i++) {
        _measurement_bpf_hpf__b_sum += _measurement_bpf_hpf__b_coeff[_measurement_bpf_hpf__i + 1] * _measurement_bpf_hpf__states[_measurement_bpf_hpf__i];
    }
    _measurement_bpf_hpf__a_sum += _measurement_bpf_hpf__states[0] * _measurement_bpf_hpf__a_coeff[1];
    _measurement_bpf_hpf__delay_line_in = _measurement_bpf_lpf__out - _measurement_bpf_hpf__a_sum;
    _measurement_bpf_hpf__b_sum += _measurement_bpf_hpf__b_coeff[0] * _measurement_bpf_hpf__delay_line_in;
    _measurement_bpf_hpf__out = _measurement_bpf_hpf__b_sum;
    // Generated from the component: Measurement.BPF1.HPF
    X_UnInt32 _measurement_bpf1_hpf__i;
    _measurement_bpf1_hpf__a_sum = 0.0f;
    _measurement_bpf1_hpf__b_sum = 0.0f;
    _measurement_bpf1_hpf__delay_line_in = 0.0f;
    for (_measurement_bpf1_hpf__i = 0; _measurement_bpf1_hpf__i < 1; _measurement_bpf1_hpf__i++) {
        _measurement_bpf1_hpf__b_sum += _measurement_bpf1_hpf__b_coeff[_measurement_bpf1_hpf__i + 1] * _measurement_bpf1_hpf__states[_measurement_bpf1_hpf__i];
    }
    _measurement_bpf1_hpf__a_sum += _measurement_bpf1_hpf__states[0] * _measurement_bpf1_hpf__a_coeff[1];
    _measurement_bpf1_hpf__delay_line_in = _measurement_bpf1_lpf__out - _measurement_bpf1_hpf__a_sum;
    _measurement_bpf1_hpf__b_sum += _measurement_bpf1_hpf__b_coeff[0] * _measurement_bpf1_hpf__delay_line_in;
    _measurement_bpf1_hpf__out = _measurement_bpf1_hpf__b_sum;
    // Generated from the component: Measurement.Ia.Ia1
    _measurement_ia_ia1__out = (HIL_InFloat(0xc80000 + 0x6));
    // Generated from the component: Measurement.P
    HIL_OutAO(0x401e, (float)_measurement_lpf_p__out);
    // Generated from the component: Measurement.Va.Va1
    _measurement_va_va1__out = (HIL_InFloat(0xc80000 + 0x5));
    // Generated from the component: SolarHouse1.Inverter.Controller.Constant2
    // Generated from the component: SolarHouse1.Inverter.Controller.Constant3
    // Generated from the component: SolarHouse1.Inverter.Controller.Constant4
    // Generated from the component: SolarHouse1.Inverter.Controller.Constant5
    // Generated from the component: SolarHouse1.Inverter.Controller.Constant6
    // Generated from the component: SolarHouse1.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.LPF_dc
    X_UnInt32 _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__i;
    _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__a_sum = 0.0f;
    _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__b_sum = 0.0f;
    _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__delay_line_in = 0.0f;
    for (_solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__i = 0; _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__i < 1; _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__i++) {
        _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__b_sum += _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__b_coeff[_solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__i + 1] * _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__states[_solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__i];
    }
    _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__a_sum += _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__states[0] * _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__a_coeff[1];
    _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__delay_line_in = _solarhouse1_inverter_lpf_dc__out - _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__a_sum;
    _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__b_sum += _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__b_coeff[0] * _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__delay_line_in;
    _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__out = _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__b_sum;
    // Generated from the component: SolarHouse1.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Limit3
    _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_limit3__out = MAX(_solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__out, 10.0);
    // Generated from the component: SolarHouse1.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.outer power loop1.Limit_zero
    // Generated from the component: SolarHouse1.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.outer power loop1.one
    // Generated from the component: SolarHouse1.Inverter.Controller.charge
    _solarhouse1_inverter_controller_charge__out = XIo_InInt32(0x5500012c);
    // Generated from the component: SolarHouse1.Inverter.E.Va1
    _solarhouse1_inverter_e_va1__out = (HIL_InFloat(0xc80000 + 0x404));
    // Generated from the component: SolarHouse1.Inverter.I.Ia1
    _solarhouse1_inverter_i_ia1__out = (HIL_InFloat(0xc80000 + 0x408));
    // Generated from the component: SolarHouse1.Inverter.Io.Ia1
    _solarhouse1_inverter_io_ia1__out = (HIL_InFloat(0xc80000 + 0x409));
    // Generated from the component: SolarHouse1.Inverter.Power_Meas.Gain4
    _solarhouse1_inverter_power_meas_gain4__out = 50000.0 * _solarhouse1_inverter_power_meas_power_meas_dqpu_lpf_p__out;
    // Generated from the component: SolarHouse1.Inverter.Power_Meas.Gain5
    _solarhouse1_inverter_power_meas_gain5__out = 50000.0 * _solarhouse1_inverter_power_meas_power_meas_dqpu_lpf_q__out;
    // Generated from the component: SolarHouse1.Inverter.Power_Meas.Power_Meas_DQpu.S_and_pf
    _solarhouse1_inverter_power_meas_power_meas_dqpu_s_and_pf__P = _solarhouse1_inverter_power_meas_power_meas_dqpu_lpf_p__out;
    _solarhouse1_inverter_power_meas_power_meas_dqpu_s_and_pf__Q = _solarhouse1_inverter_power_meas_power_meas_dqpu_lpf_q__out;
    _solarhouse1_inverter_power_meas_power_meas_dqpu_s_and_pf__S = sqrt(_solarhouse1_inverter_power_meas_power_meas_dqpu_s_and_pf__P * _solarhouse1_inverter_power_meas_power_meas_dqpu_s_and_pf__P + _solarhouse1_inverter_power_meas_power_meas_dqpu_s_and_pf__Q * _solarhouse1_inverter_power_meas_power_meas_dqpu_s_and_pf__Q);
    if (_solarhouse1_inverter_power_meas_power_meas_dqpu_s_and_pf__S > 0) {
        _solarhouse1_inverter_power_meas_power_meas_dqpu_s_and_pf__pf = _solarhouse1_inverter_power_meas_power_meas_dqpu_s_and_pf__P / _solarhouse1_inverter_power_meas_power_meas_dqpu_s_and_pf__S;
    }
    else {
        _solarhouse1_inverter_power_meas_power_meas_dqpu_s_and_pf__pf = 0;
    }
    // Generated from the component: SolarHouse1.Inverter.VDC.Va1
    _solarhouse1_inverter_vdc_va1__out = (HIL_InFloat(0xc80000 + 0x405));
    // Generated from the component: SolarHouse1.Measurement.BPF.HPF
    X_UnInt32 _solarhouse1_measurement_bpf_hpf__i;
    _solarhouse1_measurement_bpf_hpf__a_sum = 0.0f;
    _solarhouse1_measurement_bpf_hpf__b_sum = 0.0f;
    _solarhouse1_measurement_bpf_hpf__delay_line_in = 0.0f;
    for (_solarhouse1_measurement_bpf_hpf__i = 0; _solarhouse1_measurement_bpf_hpf__i < 1; _solarhouse1_measurement_bpf_hpf__i++) {
        _solarhouse1_measurement_bpf_hpf__b_sum += _solarhouse1_measurement_bpf_hpf__b_coeff[_solarhouse1_measurement_bpf_hpf__i + 1] * _solarhouse1_measurement_bpf_hpf__states[_solarhouse1_measurement_bpf_hpf__i];
    }
    _solarhouse1_measurement_bpf_hpf__a_sum += _solarhouse1_measurement_bpf_hpf__states[0] * _solarhouse1_measurement_bpf_hpf__a_coeff[1];
    _solarhouse1_measurement_bpf_hpf__delay_line_in = _solarhouse1_measurement_bpf_lpf__out - _solarhouse1_measurement_bpf_hpf__a_sum;
    _solarhouse1_measurement_bpf_hpf__b_sum += _solarhouse1_measurement_bpf_hpf__b_coeff[0] * _solarhouse1_measurement_bpf_hpf__delay_line_in;
    _solarhouse1_measurement_bpf_hpf__out = _solarhouse1_measurement_bpf_hpf__b_sum;
    // Generated from the component: SolarHouse1.Measurement.BPF1.HPF
    X_UnInt32 _solarhouse1_measurement_bpf1_hpf__i;
    _solarhouse1_measurement_bpf1_hpf__a_sum = 0.0f;
    _solarhouse1_measurement_bpf1_hpf__b_sum = 0.0f;
    _solarhouse1_measurement_bpf1_hpf__delay_line_in = 0.0f;
    for (_solarhouse1_measurement_bpf1_hpf__i = 0; _solarhouse1_measurement_bpf1_hpf__i < 1; _solarhouse1_measurement_bpf1_hpf__i++) {
        _solarhouse1_measurement_bpf1_hpf__b_sum += _solarhouse1_measurement_bpf1_hpf__b_coeff[_solarhouse1_measurement_bpf1_hpf__i + 1] * _solarhouse1_measurement_bpf1_hpf__states[_solarhouse1_measurement_bpf1_hpf__i];
    }
    _solarhouse1_measurement_bpf1_hpf__a_sum += _solarhouse1_measurement_bpf1_hpf__states[0] * _solarhouse1_measurement_bpf1_hpf__a_coeff[1];
    _solarhouse1_measurement_bpf1_hpf__delay_line_in = _solarhouse1_measurement_bpf1_lpf__out - _solarhouse1_measurement_bpf1_hpf__a_sum;
    _solarhouse1_measurement_bpf1_hpf__b_sum += _solarhouse1_measurement_bpf1_hpf__b_coeff[0] * _solarhouse1_measurement_bpf1_hpf__delay_line_in;
    _solarhouse1_measurement_bpf1_hpf__out = _solarhouse1_measurement_bpf1_hpf__b_sum;
    // Generated from the component: SolarHouse1.Measurement.Ia.Ia1
    _solarhouse1_measurement_ia_ia1__out = (HIL_InFloat(0xc80000 + 0x40a));
    // Generated from the component: SolarHouse1.Measurement.P
    HIL_OutAO(0x4034, (float)_solarhouse1_measurement_lpf_p__out);
    // Generated from the component: SolarHouse1.Measurement.Va.Va1
    _solarhouse1_measurement_va_va1__out = (HIL_InFloat(0xc80000 + 0x407));
    // Generated from the component: SolarHouse1.Modbus.P_probe
    HIL_OutAO(0x4035, (float)_solarhouse1_measurement_lpf_p__out);
    // Generated from the component: SolarHouse1.Modbus.Rate Transition1.Input
    _solarhouse1_modbus_rate_transition1_output__out = _solarhouse1_measurement_lpf_p__out;
    // Generated from the component: SolarHouse2.Inverter.Controller.Constant2
    // Generated from the component: SolarHouse2.Inverter.Controller.Constant3
    // Generated from the component: SolarHouse2.Inverter.Controller.Constant4
    // Generated from the component: SolarHouse2.Inverter.Controller.Constant5
    // Generated from the component: SolarHouse2.Inverter.Controller.Constant6
    // Generated from the component: SolarHouse2.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.LPF_dc
    X_UnInt32 _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__i;
    _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__a_sum = 0.0f;
    _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__b_sum = 0.0f;
    _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__delay_line_in = 0.0f;
    for (_solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__i = 0; _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__i < 1; _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__i++) {
        _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__b_sum += _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__b_coeff[_solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__i + 1] * _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__states[_solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__i];
    }
    _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__a_sum += _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__states[0] * _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__a_coeff[1];
    _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__delay_line_in = _solarhouse2_inverter_lpf_dc__out - _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__a_sum;
    _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__b_sum += _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__b_coeff[0] * _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__delay_line_in;
    _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__out = _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__b_sum;
    // Generated from the component: SolarHouse2.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Limit3
    _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_limit3__out = MAX(_solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__out, 10.0);
    // Generated from the component: SolarHouse2.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.outer power loop1.Limit_zero
    // Generated from the component: SolarHouse2.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.outer power loop1.one
    // Generated from the component: SolarHouse2.Inverter.Controller.charge
    _solarhouse2_inverter_controller_charge__out = XIo_InInt32(0x55000130);
    // Generated from the component: SolarHouse2.Inverter.E.Va1
    _solarhouse2_inverter_e_va1__out = (HIL_InFloat(0xc80000 + 0x604));
    // Generated from the component: SolarHouse2.Inverter.I.Ia1
    _solarhouse2_inverter_i_ia1__out = (HIL_InFloat(0xc80000 + 0x608));
    // Generated from the component: SolarHouse2.Inverter.Io.Ia1
    _solarhouse2_inverter_io_ia1__out = (HIL_InFloat(0xc80000 + 0x609));
    // Generated from the component: SolarHouse2.Inverter.Power_Meas.Gain4
    _solarhouse2_inverter_power_meas_gain4__out = 50000.0 * _solarhouse2_inverter_power_meas_power_meas_dqpu_lpf_p__out;
    // Generated from the component: SolarHouse2.Inverter.Power_Meas.Gain5
    _solarhouse2_inverter_power_meas_gain5__out = 50000.0 * _solarhouse2_inverter_power_meas_power_meas_dqpu_lpf_q__out;
    // Generated from the component: SolarHouse2.Inverter.Power_Meas.Power_Meas_DQpu.S_and_pf
    _solarhouse2_inverter_power_meas_power_meas_dqpu_s_and_pf__P = _solarhouse2_inverter_power_meas_power_meas_dqpu_lpf_p__out;
    _solarhouse2_inverter_power_meas_power_meas_dqpu_s_and_pf__Q = _solarhouse2_inverter_power_meas_power_meas_dqpu_lpf_q__out;
    _solarhouse2_inverter_power_meas_power_meas_dqpu_s_and_pf__S = sqrt(_solarhouse2_inverter_power_meas_power_meas_dqpu_s_and_pf__P * _solarhouse2_inverter_power_meas_power_meas_dqpu_s_and_pf__P + _solarhouse2_inverter_power_meas_power_meas_dqpu_s_and_pf__Q * _solarhouse2_inverter_power_meas_power_meas_dqpu_s_and_pf__Q);
    if (_solarhouse2_inverter_power_meas_power_meas_dqpu_s_and_pf__S > 0) {
        _solarhouse2_inverter_power_meas_power_meas_dqpu_s_and_pf__pf = _solarhouse2_inverter_power_meas_power_meas_dqpu_s_and_pf__P / _solarhouse2_inverter_power_meas_power_meas_dqpu_s_and_pf__S;
    }
    else {
        _solarhouse2_inverter_power_meas_power_meas_dqpu_s_and_pf__pf = 0;
    }
    // Generated from the component: SolarHouse2.Inverter.VDC.Va1
    _solarhouse2_inverter_vdc_va1__out = (HIL_InFloat(0xc80000 + 0x605));
    // Generated from the component: SolarHouse2.Measurement.BPF.HPF
    X_UnInt32 _solarhouse2_measurement_bpf_hpf__i;
    _solarhouse2_measurement_bpf_hpf__a_sum = 0.0f;
    _solarhouse2_measurement_bpf_hpf__b_sum = 0.0f;
    _solarhouse2_measurement_bpf_hpf__delay_line_in = 0.0f;
    for (_solarhouse2_measurement_bpf_hpf__i = 0; _solarhouse2_measurement_bpf_hpf__i < 1; _solarhouse2_measurement_bpf_hpf__i++) {
        _solarhouse2_measurement_bpf_hpf__b_sum += _solarhouse2_measurement_bpf_hpf__b_coeff[_solarhouse2_measurement_bpf_hpf__i + 1] * _solarhouse2_measurement_bpf_hpf__states[_solarhouse2_measurement_bpf_hpf__i];
    }
    _solarhouse2_measurement_bpf_hpf__a_sum += _solarhouse2_measurement_bpf_hpf__states[0] * _solarhouse2_measurement_bpf_hpf__a_coeff[1];
    _solarhouse2_measurement_bpf_hpf__delay_line_in = _solarhouse2_measurement_bpf_lpf__out - _solarhouse2_measurement_bpf_hpf__a_sum;
    _solarhouse2_measurement_bpf_hpf__b_sum += _solarhouse2_measurement_bpf_hpf__b_coeff[0] * _solarhouse2_measurement_bpf_hpf__delay_line_in;
    _solarhouse2_measurement_bpf_hpf__out = _solarhouse2_measurement_bpf_hpf__b_sum;
    // Generated from the component: SolarHouse2.Measurement.BPF1.HPF
    X_UnInt32 _solarhouse2_measurement_bpf1_hpf__i;
    _solarhouse2_measurement_bpf1_hpf__a_sum = 0.0f;
    _solarhouse2_measurement_bpf1_hpf__b_sum = 0.0f;
    _solarhouse2_measurement_bpf1_hpf__delay_line_in = 0.0f;
    for (_solarhouse2_measurement_bpf1_hpf__i = 0; _solarhouse2_measurement_bpf1_hpf__i < 1; _solarhouse2_measurement_bpf1_hpf__i++) {
        _solarhouse2_measurement_bpf1_hpf__b_sum += _solarhouse2_measurement_bpf1_hpf__b_coeff[_solarhouse2_measurement_bpf1_hpf__i + 1] * _solarhouse2_measurement_bpf1_hpf__states[_solarhouse2_measurement_bpf1_hpf__i];
    }
    _solarhouse2_measurement_bpf1_hpf__a_sum += _solarhouse2_measurement_bpf1_hpf__states[0] * _solarhouse2_measurement_bpf1_hpf__a_coeff[1];
    _solarhouse2_measurement_bpf1_hpf__delay_line_in = _solarhouse2_measurement_bpf1_lpf__out - _solarhouse2_measurement_bpf1_hpf__a_sum;
    _solarhouse2_measurement_bpf1_hpf__b_sum += _solarhouse2_measurement_bpf1_hpf__b_coeff[0] * _solarhouse2_measurement_bpf1_hpf__delay_line_in;
    _solarhouse2_measurement_bpf1_hpf__out = _solarhouse2_measurement_bpf1_hpf__b_sum;
    // Generated from the component: SolarHouse2.Measurement.Ia.Ia1
    _solarhouse2_measurement_ia_ia1__out = (HIL_InFloat(0xc80000 + 0x60a));
    // Generated from the component: SolarHouse2.Measurement.P
    HIL_OutAO(0x404d, (float)_solarhouse2_measurement_lpf_p__out);
    // Generated from the component: SolarHouse2.Measurement.Va.Va1
    _solarhouse2_measurement_va_va1__out = (HIL_InFloat(0xc80000 + 0x607));
    // Generated from the component: SolarHouse2.Modbus.P_probe
    HIL_OutAO(0x404e, (float)_solarhouse2_measurement_lpf_p__out);
    // Generated from the component: SolarHouse2.Modbus.Rate Transition1.Input
    _solarhouse2_modbus_rate_transition1_output__out = _solarhouse2_measurement_lpf_p__out;
    // Generated from the component: SolarHouse3.Inverter.Controller.Constant2
    // Generated from the component: SolarHouse3.Inverter.Controller.Constant3
    // Generated from the component: SolarHouse3.Inverter.Controller.Constant4
    // Generated from the component: SolarHouse3.Inverter.Controller.Constant5
    // Generated from the component: SolarHouse3.Inverter.Controller.Constant6
    // Generated from the component: SolarHouse3.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.LPF_dc
    X_UnInt32 _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__i;
    _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__a_sum = 0.0f;
    _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__b_sum = 0.0f;
    _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__delay_line_in = 0.0f;
    for (_solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__i = 0; _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__i < 1; _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__i++) {
        _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__b_sum += _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__b_coeff[_solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__i + 1] * _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__states[_solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__i];
    }
    _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__a_sum += _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__states[0] * _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__a_coeff[1];
    _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__delay_line_in = _solarhouse3_inverter_lpf_dc__out - _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__a_sum;
    _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__b_sum += _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__b_coeff[0] * _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__delay_line_in;
    _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__out = _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__b_sum;
    // Generated from the component: SolarHouse3.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Limit3
    _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_limit3__out = MAX(_solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__out, 10.0);
    // Generated from the component: SolarHouse3.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.outer power loop1.Limit_zero
    // Generated from the component: SolarHouse3.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.outer power loop1.one
    // Generated from the component: SolarHouse3.Inverter.Controller.charge
    _solarhouse3_inverter_controller_charge__out = XIo_InInt32(0x55000134);
    // Generated from the component: SolarHouse3.Inverter.E.Va1
    _solarhouse3_inverter_e_va1__out = (HIL_InFloat(0xc80000 + 0x804));
    // Generated from the component: SolarHouse3.Inverter.I.Ia1
    _solarhouse3_inverter_i_ia1__out = (HIL_InFloat(0xc80000 + 0x808));
    // Generated from the component: SolarHouse3.Inverter.Io.Ia1
    _solarhouse3_inverter_io_ia1__out = (HIL_InFloat(0xc80000 + 0x809));
    // Generated from the component: SolarHouse3.Inverter.Power_Meas.Gain4
    _solarhouse3_inverter_power_meas_gain4__out = 50000.0 * _solarhouse3_inverter_power_meas_power_meas_dqpu_lpf_p__out;
    // Generated from the component: SolarHouse3.Inverter.Power_Meas.Gain5
    _solarhouse3_inverter_power_meas_gain5__out = 50000.0 * _solarhouse3_inverter_power_meas_power_meas_dqpu_lpf_q__out;
    // Generated from the component: SolarHouse3.Inverter.Power_Meas.Power_Meas_DQpu.S_and_pf
    _solarhouse3_inverter_power_meas_power_meas_dqpu_s_and_pf__P = _solarhouse3_inverter_power_meas_power_meas_dqpu_lpf_p__out;
    _solarhouse3_inverter_power_meas_power_meas_dqpu_s_and_pf__Q = _solarhouse3_inverter_power_meas_power_meas_dqpu_lpf_q__out;
    _solarhouse3_inverter_power_meas_power_meas_dqpu_s_and_pf__S = sqrt(_solarhouse3_inverter_power_meas_power_meas_dqpu_s_and_pf__P * _solarhouse3_inverter_power_meas_power_meas_dqpu_s_and_pf__P + _solarhouse3_inverter_power_meas_power_meas_dqpu_s_and_pf__Q * _solarhouse3_inverter_power_meas_power_meas_dqpu_s_and_pf__Q);
    if (_solarhouse3_inverter_power_meas_power_meas_dqpu_s_and_pf__S > 0) {
        _solarhouse3_inverter_power_meas_power_meas_dqpu_s_and_pf__pf = _solarhouse3_inverter_power_meas_power_meas_dqpu_s_and_pf__P / _solarhouse3_inverter_power_meas_power_meas_dqpu_s_and_pf__S;
    }
    else {
        _solarhouse3_inverter_power_meas_power_meas_dqpu_s_and_pf__pf = 0;
    }
    // Generated from the component: SolarHouse3.Inverter.VDC.Va1
    _solarhouse3_inverter_vdc_va1__out = (HIL_InFloat(0xc80000 + 0x805));
    // Generated from the component: SolarHouse3.Measurement.BPF.HPF
    X_UnInt32 _solarhouse3_measurement_bpf_hpf__i;
    _solarhouse3_measurement_bpf_hpf__a_sum = 0.0f;
    _solarhouse3_measurement_bpf_hpf__b_sum = 0.0f;
    _solarhouse3_measurement_bpf_hpf__delay_line_in = 0.0f;
    for (_solarhouse3_measurement_bpf_hpf__i = 0; _solarhouse3_measurement_bpf_hpf__i < 1; _solarhouse3_measurement_bpf_hpf__i++) {
        _solarhouse3_measurement_bpf_hpf__b_sum += _solarhouse3_measurement_bpf_hpf__b_coeff[_solarhouse3_measurement_bpf_hpf__i + 1] * _solarhouse3_measurement_bpf_hpf__states[_solarhouse3_measurement_bpf_hpf__i];
    }
    _solarhouse3_measurement_bpf_hpf__a_sum += _solarhouse3_measurement_bpf_hpf__states[0] * _solarhouse3_measurement_bpf_hpf__a_coeff[1];
    _solarhouse3_measurement_bpf_hpf__delay_line_in = _solarhouse3_measurement_bpf_lpf__out - _solarhouse3_measurement_bpf_hpf__a_sum;
    _solarhouse3_measurement_bpf_hpf__b_sum += _solarhouse3_measurement_bpf_hpf__b_coeff[0] * _solarhouse3_measurement_bpf_hpf__delay_line_in;
    _solarhouse3_measurement_bpf_hpf__out = _solarhouse3_measurement_bpf_hpf__b_sum;
    // Generated from the component: SolarHouse3.Measurement.BPF1.HPF
    X_UnInt32 _solarhouse3_measurement_bpf1_hpf__i;
    _solarhouse3_measurement_bpf1_hpf__a_sum = 0.0f;
    _solarhouse3_measurement_bpf1_hpf__b_sum = 0.0f;
    _solarhouse3_measurement_bpf1_hpf__delay_line_in = 0.0f;
    for (_solarhouse3_measurement_bpf1_hpf__i = 0; _solarhouse3_measurement_bpf1_hpf__i < 1; _solarhouse3_measurement_bpf1_hpf__i++) {
        _solarhouse3_measurement_bpf1_hpf__b_sum += _solarhouse3_measurement_bpf1_hpf__b_coeff[_solarhouse3_measurement_bpf1_hpf__i + 1] * _solarhouse3_measurement_bpf1_hpf__states[_solarhouse3_measurement_bpf1_hpf__i];
    }
    _solarhouse3_measurement_bpf1_hpf__a_sum += _solarhouse3_measurement_bpf1_hpf__states[0] * _solarhouse3_measurement_bpf1_hpf__a_coeff[1];
    _solarhouse3_measurement_bpf1_hpf__delay_line_in = _solarhouse3_measurement_bpf1_lpf__out - _solarhouse3_measurement_bpf1_hpf__a_sum;
    _solarhouse3_measurement_bpf1_hpf__b_sum += _solarhouse3_measurement_bpf1_hpf__b_coeff[0] * _solarhouse3_measurement_bpf1_hpf__delay_line_in;
    _solarhouse3_measurement_bpf1_hpf__out = _solarhouse3_measurement_bpf1_hpf__b_sum;
    // Generated from the component: SolarHouse3.Measurement.Ia.Ia1
    _solarhouse3_measurement_ia_ia1__out = (HIL_InFloat(0xc80000 + 0x80a));
    // Generated from the component: SolarHouse3.Measurement.P
    HIL_OutAO(0x4066, (float)_solarhouse3_measurement_lpf_p__out);
    // Generated from the component: SolarHouse3.Measurement.Va.Va1
    _solarhouse3_measurement_va_va1__out = (HIL_InFloat(0xc80000 + 0x807));
    // Generated from the component: SolarHouse3.Modbus.P_probe
    HIL_OutAO(0x4067, (float)_solarhouse3_measurement_lpf_p__out);
    // Generated from the component: SolarHouse3.Modbus.Rate Transition1.Input
    _solarhouse3_modbus_rate_transition1_output__out = _solarhouse3_measurement_lpf_p__out;
    // Generated from the component: SolarHouse4.Inverter.Controller.Constant2
    // Generated from the component: SolarHouse4.Inverter.Controller.Constant3
    // Generated from the component: SolarHouse4.Inverter.Controller.Constant4
    // Generated from the component: SolarHouse4.Inverter.Controller.Constant5
    // Generated from the component: SolarHouse4.Inverter.Controller.Constant6
    // Generated from the component: SolarHouse4.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.LPF_dc
    X_UnInt32 _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__i;
    _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__a_sum = 0.0f;
    _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__b_sum = 0.0f;
    _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__delay_line_in = 0.0f;
    for (_solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__i = 0; _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__i < 1; _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__i++) {
        _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__b_sum += _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__b_coeff[_solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__i + 1] * _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__states[_solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__i];
    }
    _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__a_sum += _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__states[0] * _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__a_coeff[1];
    _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__delay_line_in = _solarhouse4_inverter_lpf_dc__out - _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__a_sum;
    _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__b_sum += _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__b_coeff[0] * _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__delay_line_in;
    _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__out = _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__b_sum;
    // Generated from the component: SolarHouse4.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Limit3
    _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_limit3__out = MAX(_solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__out, 10.0);
    // Generated from the component: SolarHouse4.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.outer power loop1.Limit_zero
    // Generated from the component: SolarHouse4.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.outer power loop1.one
    // Generated from the component: SolarHouse4.Inverter.Controller.charge
    _solarhouse4_inverter_controller_charge__out = XIo_InInt32(0x55000138);
    // Generated from the component: SolarHouse4.Inverter.E.Va1
    _solarhouse4_inverter_e_va1__out = (HIL_InFloat(0xc80000 + 0xa04));
    // Generated from the component: SolarHouse4.Inverter.I.Ia1
    _solarhouse4_inverter_i_ia1__out = (HIL_InFloat(0xc80000 + 0xa08));
    // Generated from the component: SolarHouse4.Inverter.Io.Ia1
    _solarhouse4_inverter_io_ia1__out = (HIL_InFloat(0xc80000 + 0xa09));
    // Generated from the component: SolarHouse4.Inverter.Power_Meas.Gain4
    _solarhouse4_inverter_power_meas_gain4__out = 50000.0 * _solarhouse4_inverter_power_meas_power_meas_dqpu_lpf_p__out;
    // Generated from the component: SolarHouse4.Inverter.Power_Meas.Gain5
    _solarhouse4_inverter_power_meas_gain5__out = 50000.0 * _solarhouse4_inverter_power_meas_power_meas_dqpu_lpf_q__out;
    // Generated from the component: SolarHouse4.Inverter.Power_Meas.Power_Meas_DQpu.S_and_pf
    _solarhouse4_inverter_power_meas_power_meas_dqpu_s_and_pf__P = _solarhouse4_inverter_power_meas_power_meas_dqpu_lpf_p__out;
    _solarhouse4_inverter_power_meas_power_meas_dqpu_s_and_pf__Q = _solarhouse4_inverter_power_meas_power_meas_dqpu_lpf_q__out;
    _solarhouse4_inverter_power_meas_power_meas_dqpu_s_and_pf__S = sqrt(_solarhouse4_inverter_power_meas_power_meas_dqpu_s_and_pf__P * _solarhouse4_inverter_power_meas_power_meas_dqpu_s_and_pf__P + _solarhouse4_inverter_power_meas_power_meas_dqpu_s_and_pf__Q * _solarhouse4_inverter_power_meas_power_meas_dqpu_s_and_pf__Q);
    if (_solarhouse4_inverter_power_meas_power_meas_dqpu_s_and_pf__S > 0) {
        _solarhouse4_inverter_power_meas_power_meas_dqpu_s_and_pf__pf = _solarhouse4_inverter_power_meas_power_meas_dqpu_s_and_pf__P / _solarhouse4_inverter_power_meas_power_meas_dqpu_s_and_pf__S;
    }
    else {
        _solarhouse4_inverter_power_meas_power_meas_dqpu_s_and_pf__pf = 0;
    }
    // Generated from the component: SolarHouse4.Inverter.VDC.Va1
    _solarhouse4_inverter_vdc_va1__out = (HIL_InFloat(0xc80000 + 0xa05));
    // Generated from the component: SolarHouse4.Measurement.BPF.HPF
    X_UnInt32 _solarhouse4_measurement_bpf_hpf__i;
    _solarhouse4_measurement_bpf_hpf__a_sum = 0.0f;
    _solarhouse4_measurement_bpf_hpf__b_sum = 0.0f;
    _solarhouse4_measurement_bpf_hpf__delay_line_in = 0.0f;
    for (_solarhouse4_measurement_bpf_hpf__i = 0; _solarhouse4_measurement_bpf_hpf__i < 1; _solarhouse4_measurement_bpf_hpf__i++) {
        _solarhouse4_measurement_bpf_hpf__b_sum += _solarhouse4_measurement_bpf_hpf__b_coeff[_solarhouse4_measurement_bpf_hpf__i + 1] * _solarhouse4_measurement_bpf_hpf__states[_solarhouse4_measurement_bpf_hpf__i];
    }
    _solarhouse4_measurement_bpf_hpf__a_sum += _solarhouse4_measurement_bpf_hpf__states[0] * _solarhouse4_measurement_bpf_hpf__a_coeff[1];
    _solarhouse4_measurement_bpf_hpf__delay_line_in = _solarhouse4_measurement_bpf_lpf__out - _solarhouse4_measurement_bpf_hpf__a_sum;
    _solarhouse4_measurement_bpf_hpf__b_sum += _solarhouse4_measurement_bpf_hpf__b_coeff[0] * _solarhouse4_measurement_bpf_hpf__delay_line_in;
    _solarhouse4_measurement_bpf_hpf__out = _solarhouse4_measurement_bpf_hpf__b_sum;
    // Generated from the component: SolarHouse4.Measurement.BPF1.HPF
    X_UnInt32 _solarhouse4_measurement_bpf1_hpf__i;
    _solarhouse4_measurement_bpf1_hpf__a_sum = 0.0f;
    _solarhouse4_measurement_bpf1_hpf__b_sum = 0.0f;
    _solarhouse4_measurement_bpf1_hpf__delay_line_in = 0.0f;
    for (_solarhouse4_measurement_bpf1_hpf__i = 0; _solarhouse4_measurement_bpf1_hpf__i < 1; _solarhouse4_measurement_bpf1_hpf__i++) {
        _solarhouse4_measurement_bpf1_hpf__b_sum += _solarhouse4_measurement_bpf1_hpf__b_coeff[_solarhouse4_measurement_bpf1_hpf__i + 1] * _solarhouse4_measurement_bpf1_hpf__states[_solarhouse4_measurement_bpf1_hpf__i];
    }
    _solarhouse4_measurement_bpf1_hpf__a_sum += _solarhouse4_measurement_bpf1_hpf__states[0] * _solarhouse4_measurement_bpf1_hpf__a_coeff[1];
    _solarhouse4_measurement_bpf1_hpf__delay_line_in = _solarhouse4_measurement_bpf1_lpf__out - _solarhouse4_measurement_bpf1_hpf__a_sum;
    _solarhouse4_measurement_bpf1_hpf__b_sum += _solarhouse4_measurement_bpf1_hpf__b_coeff[0] * _solarhouse4_measurement_bpf1_hpf__delay_line_in;
    _solarhouse4_measurement_bpf1_hpf__out = _solarhouse4_measurement_bpf1_hpf__b_sum;
    // Generated from the component: SolarHouse4.Measurement.Ia.Ia1
    _solarhouse4_measurement_ia_ia1__out = (HIL_InFloat(0xc80000 + 0xa0a));
    // Generated from the component: SolarHouse4.Measurement.P
    HIL_OutAO(0x407f, (float)_solarhouse4_measurement_lpf_p__out);
    // Generated from the component: SolarHouse4.Measurement.Va.Va1
    _solarhouse4_measurement_va_va1__out = (HIL_InFloat(0xc80000 + 0xa07));
    // Generated from the component: SolarHouse4.Modbus.P_probe
    HIL_OutAO(0x4080, (float)_solarhouse4_measurement_lpf_p__out);
    // Generated from the component: SolarHouse4.Modbus.Rate Transition1.Input
    _solarhouse4_modbus_rate_transition1_output__out = _solarhouse4_measurement_lpf_p__out;
    // Generated from the component: ESS.Inverter.Controller.C function4
    _ess_inverter_controller_c_function4__Ts = _ess_inverter_controller_constant4__out;
    _ess_inverter_controller_c_function4__in = _ess_inverter_controller_constant6__out;
    _ess_inverter_controller_c_function4__pi = _ess_inverter_controller_constant3__out;
    _ess_inverter_controller_c_function4__out = _ess_inverter_controller_c_function4__out + _ess_inverter_controller_c_function4__in * _ess_inverter_controller_c_function4__Ts;
    if (_ess_inverter_controller_c_function4__out >= 2 * _ess_inverter_controller_c_function4__pi) {
        _ess_inverter_controller_c_function4__out = _ess_inverter_controller_c_function4__out - 2 * _ess_inverter_controller_c_function4__pi;
    }
    // Generated from the component: ESS.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Gain5
    _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_gain5__out = 1.0 * _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_limit3__out;
    // Generated from the component: ESS.Inverter.Controller.C function1
    _ess_inverter_controller_c_function1__charge = _ess_inverter_controller_rate_transition8_output__out;
    _ess_inverter_controller_c_function1__ref = _ess_inverter_controller_rate_transition9_output__out;
    if (_ess_inverter_controller_c_function1__charge > 0)_ess_inverter_controller_c_function1__out = -1;
    else _ess_inverter_controller_c_function1__out = _ess_inverter_controller_c_function1__ref;
    // Generated from the component: ESS.Inverter.Controller.Rate Transition8.Input
    _ess_inverter_controller_rate_transition8_output__out = _ess_inverter_controller_charge__out;
    // Generated from the component: ESS.Inverter.Controller.Hilbert Transform
    X_UnInt32 _ess_inverter_controller_hilbert_transform__i;
    _ess_inverter_controller_hilbert_transform__a_sum = 0.0f;
    _ess_inverter_controller_hilbert_transform__b_sum = 0.0f;
    _ess_inverter_controller_hilbert_transform__delay_line_in = 0.0f;
    for (_ess_inverter_controller_hilbert_transform__i = 0; _ess_inverter_controller_hilbert_transform__i < 1; _ess_inverter_controller_hilbert_transform__i++) {
        _ess_inverter_controller_hilbert_transform__b_sum += _ess_inverter_controller_hilbert_transform__b_coeff[_ess_inverter_controller_hilbert_transform__i + 1] * _ess_inverter_controller_hilbert_transform__states[_ess_inverter_controller_hilbert_transform__i];
    }
    _ess_inverter_controller_hilbert_transform__a_sum += _ess_inverter_controller_hilbert_transform__states[0] * _ess_inverter_controller_hilbert_transform__a_coeff[1];
    _ess_inverter_controller_hilbert_transform__delay_line_in = _ess_inverter_e_va1__out - _ess_inverter_controller_hilbert_transform__a_sum;
    _ess_inverter_controller_hilbert_transform__b_sum += _ess_inverter_controller_hilbert_transform__b_coeff[0] * _ess_inverter_controller_hilbert_transform__delay_line_in;
    _ess_inverter_controller_hilbert_transform__out = _ess_inverter_controller_hilbert_transform__b_sum;
    // Generated from the component: ESS.Inverter.V
    HIL_OutAO(0x4018, (float)_ess_inverter_e_va1__out);
    // Generated from the component: ESS.Inverter.Controller.Hilbert Transform1
    X_UnInt32 _ess_inverter_controller_hilbert_transform1__i;
    _ess_inverter_controller_hilbert_transform1__a_sum = 0.0f;
    _ess_inverter_controller_hilbert_transform1__b_sum = 0.0f;
    _ess_inverter_controller_hilbert_transform1__delay_line_in = 0.0f;
    for (_ess_inverter_controller_hilbert_transform1__i = 0; _ess_inverter_controller_hilbert_transform1__i < 1; _ess_inverter_controller_hilbert_transform1__i++) {
        _ess_inverter_controller_hilbert_transform1__b_sum += _ess_inverter_controller_hilbert_transform1__b_coeff[_ess_inverter_controller_hilbert_transform1__i + 1] * _ess_inverter_controller_hilbert_transform1__states[_ess_inverter_controller_hilbert_transform1__i];
    }
    _ess_inverter_controller_hilbert_transform1__a_sum += _ess_inverter_controller_hilbert_transform1__states[0] * _ess_inverter_controller_hilbert_transform1__a_coeff[1];
    _ess_inverter_controller_hilbert_transform1__delay_line_in = _ess_inverter_i_ia1__out - _ess_inverter_controller_hilbert_transform1__a_sum;
    _ess_inverter_controller_hilbert_transform1__b_sum += _ess_inverter_controller_hilbert_transform1__b_coeff[0] * _ess_inverter_controller_hilbert_transform1__delay_line_in;
    _ess_inverter_controller_hilbert_transform1__out = _ess_inverter_controller_hilbert_transform1__b_sum;
    // Generated from the component: ESS.Inverter.P
    HIL_OutAO(0x4014, (float)_ess_inverter_power_meas_gain4__out);
    // Generated from the component: ESS.Modbus.Rate Transition4.Input
    _ess_modbus_rate_transition4_output__out = _ess_inverter_power_meas_gain4__out;
    // Generated from the component: ESS.Inverter.Q
    HIL_OutAO(0x4016, (float)_ess_inverter_power_meas_gain5__out);
    // Generated from the component: ESS.Inverter.Power_Meas.Gain6
    _ess_inverter_power_meas_gain6__out = 50000.0 * _ess_inverter_power_meas_power_meas_dqpu_s_and_pf__S;
    // Generated from the component: ESS.Inverter.pf
    HIL_OutAO(0x4019, (float)_ess_inverter_power_meas_power_meas_dqpu_s_and_pf__pf);
    // Generated from the component: ESS.Inverter.LPF_dc
    X_UnInt32 _ess_inverter_lpf_dc__i;
    _ess_inverter_lpf_dc__a_sum = 0.0f;
    _ess_inverter_lpf_dc__b_sum = 0.0f;
    _ess_inverter_lpf_dc__delay_line_in = 0.0f;
    for (_ess_inverter_lpf_dc__i = 0; _ess_inverter_lpf_dc__i < 1; _ess_inverter_lpf_dc__i++) {
        _ess_inverter_lpf_dc__b_sum += _ess_inverter_lpf_dc__b_coeff[_ess_inverter_lpf_dc__i + 1] * _ess_inverter_lpf_dc__states[_ess_inverter_lpf_dc__i];
    }
    _ess_inverter_lpf_dc__a_sum += _ess_inverter_lpf_dc__states[0] * _ess_inverter_lpf_dc__a_coeff[1];
    _ess_inverter_lpf_dc__delay_line_in = _ess_inverter_vdc_va1__out - _ess_inverter_lpf_dc__a_sum;
    _ess_inverter_lpf_dc__b_sum += _ess_inverter_lpf_dc__b_coeff[0] * _ess_inverter_lpf_dc__delay_line_in;
    _ess_inverter_lpf_dc__out = _ess_inverter_lpf_dc__b_sum;
    // Generated from the component: ESS.Inverter.Controller.Gain32
    _ess_inverter_controller_gain32__out = 2e-05 * _ess_rate_transition1_output__out;
    // Generated from the component: ESS.Inverter.Pref_probe
    HIL_OutAO(0x4015, (float)_ess_rate_transition1_output__out);
    // Generated from the component: Measurement.BPF.Gain
    _measurement_bpf_gain__out = 1.2500000000000002 * _measurement_bpf_hpf__out;
    // Generated from the component: Measurement.BPF1.Gain
    _measurement_bpf1_gain__out = 1.2500000000000002 * _measurement_bpf1_hpf__out;
    // Generated from the component: Measurement.BPF.LPF
    X_UnInt32 _measurement_bpf_lpf__i;
    _measurement_bpf_lpf__a_sum = 0.0f;
    _measurement_bpf_lpf__b_sum = 0.0f;
    _measurement_bpf_lpf__delay_line_in = 0.0f;
    for (_measurement_bpf_lpf__i = 0; _measurement_bpf_lpf__i < 1; _measurement_bpf_lpf__i++) {
        _measurement_bpf_lpf__b_sum += _measurement_bpf_lpf__b_coeff[_measurement_bpf_lpf__i + 1] * _measurement_bpf_lpf__states[_measurement_bpf_lpf__i];
    }
    _measurement_bpf_lpf__a_sum += _measurement_bpf_lpf__states[0] * _measurement_bpf_lpf__a_coeff[1];
    _measurement_bpf_lpf__delay_line_in = _measurement_ia_ia1__out - _measurement_bpf_lpf__a_sum;
    _measurement_bpf_lpf__b_sum += _measurement_bpf_lpf__b_coeff[0] * _measurement_bpf_lpf__delay_line_in;
    _measurement_bpf_lpf__out = _measurement_bpf_lpf__b_sum;
    // Generated from the component: Measurement.BPF1.LPF
    X_UnInt32 _measurement_bpf1_lpf__i;
    _measurement_bpf1_lpf__a_sum = 0.0f;
    _measurement_bpf1_lpf__b_sum = 0.0f;
    _measurement_bpf1_lpf__delay_line_in = 0.0f;
    for (_measurement_bpf1_lpf__i = 0; _measurement_bpf1_lpf__i < 1; _measurement_bpf1_lpf__i++) {
        _measurement_bpf1_lpf__b_sum += _measurement_bpf1_lpf__b_coeff[_measurement_bpf1_lpf__i + 1] * _measurement_bpf1_lpf__states[_measurement_bpf1_lpf__i];
    }
    _measurement_bpf1_lpf__a_sum += _measurement_bpf1_lpf__states[0] * _measurement_bpf1_lpf__a_coeff[1];
    _measurement_bpf1_lpf__delay_line_in = _measurement_va_va1__out - _measurement_bpf1_lpf__a_sum;
    _measurement_bpf1_lpf__b_sum += _measurement_bpf1_lpf__b_coeff[0] * _measurement_bpf1_lpf__delay_line_in;
    _measurement_bpf1_lpf__out = _measurement_bpf1_lpf__b_sum;
    // Generated from the component: SolarHouse1.Inverter.Controller.C function4
    _solarhouse1_inverter_controller_c_function4__Ts = _solarhouse1_inverter_controller_constant4__out;
    _solarhouse1_inverter_controller_c_function4__in = _solarhouse1_inverter_controller_constant6__out;
    _solarhouse1_inverter_controller_c_function4__pi = _solarhouse1_inverter_controller_constant3__out;
    _solarhouse1_inverter_controller_c_function4__out = _solarhouse1_inverter_controller_c_function4__out + _solarhouse1_inverter_controller_c_function4__in * _solarhouse1_inverter_controller_c_function4__Ts;
    if (_solarhouse1_inverter_controller_c_function4__out >= 2 * _solarhouse1_inverter_controller_c_function4__pi) {
        _solarhouse1_inverter_controller_c_function4__out = _solarhouse1_inverter_controller_c_function4__out - 2 * _solarhouse1_inverter_controller_c_function4__pi;
    }
    // Generated from the component: SolarHouse1.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Gain5
    _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_gain5__out = 1.0 * _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_limit3__out;
    // Generated from the component: SolarHouse1.Inverter.Controller.C function1
    _solarhouse1_inverter_controller_c_function1__charge = _solarhouse1_inverter_controller_rate_transition8_output__out;
    _solarhouse1_inverter_controller_c_function1__ref = _solarhouse1_inverter_controller_rate_transition9_output__out;
    if (_solarhouse1_inverter_controller_c_function1__charge > 0)_solarhouse1_inverter_controller_c_function1__out = -1;
    else _solarhouse1_inverter_controller_c_function1__out = _solarhouse1_inverter_controller_c_function1__ref;
    // Generated from the component: SolarHouse1.Inverter.Controller.Rate Transition8.Input
    _solarhouse1_inverter_controller_rate_transition8_output__out = _solarhouse1_inverter_controller_charge__out;
    // Generated from the component: SolarHouse1.Inverter.Controller.Hilbert Transform
    X_UnInt32 _solarhouse1_inverter_controller_hilbert_transform__i;
    _solarhouse1_inverter_controller_hilbert_transform__a_sum = 0.0f;
    _solarhouse1_inverter_controller_hilbert_transform__b_sum = 0.0f;
    _solarhouse1_inverter_controller_hilbert_transform__delay_line_in = 0.0f;
    for (_solarhouse1_inverter_controller_hilbert_transform__i = 0; _solarhouse1_inverter_controller_hilbert_transform__i < 1; _solarhouse1_inverter_controller_hilbert_transform__i++) {
        _solarhouse1_inverter_controller_hilbert_transform__b_sum += _solarhouse1_inverter_controller_hilbert_transform__b_coeff[_solarhouse1_inverter_controller_hilbert_transform__i + 1] * _solarhouse1_inverter_controller_hilbert_transform__states[_solarhouse1_inverter_controller_hilbert_transform__i];
    }
    _solarhouse1_inverter_controller_hilbert_transform__a_sum += _solarhouse1_inverter_controller_hilbert_transform__states[0] * _solarhouse1_inverter_controller_hilbert_transform__a_coeff[1];
    _solarhouse1_inverter_controller_hilbert_transform__delay_line_in = _solarhouse1_inverter_e_va1__out - _solarhouse1_inverter_controller_hilbert_transform__a_sum;
    _solarhouse1_inverter_controller_hilbert_transform__b_sum += _solarhouse1_inverter_controller_hilbert_transform__b_coeff[0] * _solarhouse1_inverter_controller_hilbert_transform__delay_line_in;
    _solarhouse1_inverter_controller_hilbert_transform__out = _solarhouse1_inverter_controller_hilbert_transform__b_sum;
    // Generated from the component: SolarHouse1.Inverter.V
    HIL_OutAO(0x4032, (float)_solarhouse1_inverter_e_va1__out);
    // Generated from the component: SolarHouse1.Inverter.Controller.Hilbert Transform1
    X_UnInt32 _solarhouse1_inverter_controller_hilbert_transform1__i;
    _solarhouse1_inverter_controller_hilbert_transform1__a_sum = 0.0f;
    _solarhouse1_inverter_controller_hilbert_transform1__b_sum = 0.0f;
    _solarhouse1_inverter_controller_hilbert_transform1__delay_line_in = 0.0f;
    for (_solarhouse1_inverter_controller_hilbert_transform1__i = 0; _solarhouse1_inverter_controller_hilbert_transform1__i < 1; _solarhouse1_inverter_controller_hilbert_transform1__i++) {
        _solarhouse1_inverter_controller_hilbert_transform1__b_sum += _solarhouse1_inverter_controller_hilbert_transform1__b_coeff[_solarhouse1_inverter_controller_hilbert_transform1__i + 1] * _solarhouse1_inverter_controller_hilbert_transform1__states[_solarhouse1_inverter_controller_hilbert_transform1__i];
    }
    _solarhouse1_inverter_controller_hilbert_transform1__a_sum += _solarhouse1_inverter_controller_hilbert_transform1__states[0] * _solarhouse1_inverter_controller_hilbert_transform1__a_coeff[1];
    _solarhouse1_inverter_controller_hilbert_transform1__delay_line_in = _solarhouse1_inverter_i_ia1__out - _solarhouse1_inverter_controller_hilbert_transform1__a_sum;
    _solarhouse1_inverter_controller_hilbert_transform1__b_sum += _solarhouse1_inverter_controller_hilbert_transform1__b_coeff[0] * _solarhouse1_inverter_controller_hilbert_transform1__delay_line_in;
    _solarhouse1_inverter_controller_hilbert_transform1__out = _solarhouse1_inverter_controller_hilbert_transform1__b_sum;
    // Generated from the component: SolarHouse1.Inverter.P
    HIL_OutAO(0x402e, (float)_solarhouse1_inverter_power_meas_gain4__out);
    // Generated from the component: SolarHouse1.Modbus.Rate Transition4.Input
    _solarhouse1_modbus_rate_transition4_output__out = _solarhouse1_inverter_power_meas_gain4__out;
    // Generated from the component: SolarHouse1.Inverter.Q
    HIL_OutAO(0x4030, (float)_solarhouse1_inverter_power_meas_gain5__out);
    // Generated from the component: SolarHouse1.Inverter.Power_Meas.Gain6
    _solarhouse1_inverter_power_meas_gain6__out = 50000.0 * _solarhouse1_inverter_power_meas_power_meas_dqpu_s_and_pf__S;
    // Generated from the component: SolarHouse1.Inverter.pf
    HIL_OutAO(0x4033, (float)_solarhouse1_inverter_power_meas_power_meas_dqpu_s_and_pf__pf);
    // Generated from the component: SolarHouse1.Inverter.LPF_dc
    X_UnInt32 _solarhouse1_inverter_lpf_dc__i;
    _solarhouse1_inverter_lpf_dc__a_sum = 0.0f;
    _solarhouse1_inverter_lpf_dc__b_sum = 0.0f;
    _solarhouse1_inverter_lpf_dc__delay_line_in = 0.0f;
    for (_solarhouse1_inverter_lpf_dc__i = 0; _solarhouse1_inverter_lpf_dc__i < 1; _solarhouse1_inverter_lpf_dc__i++) {
        _solarhouse1_inverter_lpf_dc__b_sum += _solarhouse1_inverter_lpf_dc__b_coeff[_solarhouse1_inverter_lpf_dc__i + 1] * _solarhouse1_inverter_lpf_dc__states[_solarhouse1_inverter_lpf_dc__i];
    }
    _solarhouse1_inverter_lpf_dc__a_sum += _solarhouse1_inverter_lpf_dc__states[0] * _solarhouse1_inverter_lpf_dc__a_coeff[1];
    _solarhouse1_inverter_lpf_dc__delay_line_in = _solarhouse1_inverter_vdc_va1__out - _solarhouse1_inverter_lpf_dc__a_sum;
    _solarhouse1_inverter_lpf_dc__b_sum += _solarhouse1_inverter_lpf_dc__b_coeff[0] * _solarhouse1_inverter_lpf_dc__delay_line_in;
    _solarhouse1_inverter_lpf_dc__out = _solarhouse1_inverter_lpf_dc__b_sum;
    // Generated from the component: SolarHouse1.Measurement.BPF.Gain
    _solarhouse1_measurement_bpf_gain__out = 1.2500000000000002 * _solarhouse1_measurement_bpf_hpf__out;
    // Generated from the component: SolarHouse1.Measurement.BPF1.Gain
    _solarhouse1_measurement_bpf1_gain__out = 1.2500000000000002 * _solarhouse1_measurement_bpf1_hpf__out;
    // Generated from the component: SolarHouse1.Measurement.BPF.LPF
    X_UnInt32 _solarhouse1_measurement_bpf_lpf__i;
    _solarhouse1_measurement_bpf_lpf__a_sum = 0.0f;
    _solarhouse1_measurement_bpf_lpf__b_sum = 0.0f;
    _solarhouse1_measurement_bpf_lpf__delay_line_in = 0.0f;
    for (_solarhouse1_measurement_bpf_lpf__i = 0; _solarhouse1_measurement_bpf_lpf__i < 1; _solarhouse1_measurement_bpf_lpf__i++) {
        _solarhouse1_measurement_bpf_lpf__b_sum += _solarhouse1_measurement_bpf_lpf__b_coeff[_solarhouse1_measurement_bpf_lpf__i + 1] * _solarhouse1_measurement_bpf_lpf__states[_solarhouse1_measurement_bpf_lpf__i];
    }
    _solarhouse1_measurement_bpf_lpf__a_sum += _solarhouse1_measurement_bpf_lpf__states[0] * _solarhouse1_measurement_bpf_lpf__a_coeff[1];
    _solarhouse1_measurement_bpf_lpf__delay_line_in = _solarhouse1_measurement_ia_ia1__out - _solarhouse1_measurement_bpf_lpf__a_sum;
    _solarhouse1_measurement_bpf_lpf__b_sum += _solarhouse1_measurement_bpf_lpf__b_coeff[0] * _solarhouse1_measurement_bpf_lpf__delay_line_in;
    _solarhouse1_measurement_bpf_lpf__out = _solarhouse1_measurement_bpf_lpf__b_sum;
    // Generated from the component: SolarHouse1.Measurement.BPF1.LPF
    X_UnInt32 _solarhouse1_measurement_bpf1_lpf__i;
    _solarhouse1_measurement_bpf1_lpf__a_sum = 0.0f;
    _solarhouse1_measurement_bpf1_lpf__b_sum = 0.0f;
    _solarhouse1_measurement_bpf1_lpf__delay_line_in = 0.0f;
    for (_solarhouse1_measurement_bpf1_lpf__i = 0; _solarhouse1_measurement_bpf1_lpf__i < 1; _solarhouse1_measurement_bpf1_lpf__i++) {
        _solarhouse1_measurement_bpf1_lpf__b_sum += _solarhouse1_measurement_bpf1_lpf__b_coeff[_solarhouse1_measurement_bpf1_lpf__i + 1] * _solarhouse1_measurement_bpf1_lpf__states[_solarhouse1_measurement_bpf1_lpf__i];
    }
    _solarhouse1_measurement_bpf1_lpf__a_sum += _solarhouse1_measurement_bpf1_lpf__states[0] * _solarhouse1_measurement_bpf1_lpf__a_coeff[1];
    _solarhouse1_measurement_bpf1_lpf__delay_line_in = _solarhouse1_measurement_va_va1__out - _solarhouse1_measurement_bpf1_lpf__a_sum;
    _solarhouse1_measurement_bpf1_lpf__b_sum += _solarhouse1_measurement_bpf1_lpf__b_coeff[0] * _solarhouse1_measurement_bpf1_lpf__delay_line_in;
    _solarhouse1_measurement_bpf1_lpf__out = _solarhouse1_measurement_bpf1_lpf__b_sum;
    // Generated from the component: SolarHouse1.Inverter.Controller.Gain32
    _solarhouse1_inverter_controller_gain32__out = 2e-05 * _solarhouse1_rate_transition1_output__out;
    // Generated from the component: SolarHouse1.Inverter.Pref_probe
    HIL_OutAO(0x402f, (float)_solarhouse1_rate_transition1_output__out);
    // Generated from the component: SolarHouse2.Inverter.Controller.C function4
    _solarhouse2_inverter_controller_c_function4__Ts = _solarhouse2_inverter_controller_constant4__out;
    _solarhouse2_inverter_controller_c_function4__in = _solarhouse2_inverter_controller_constant6__out;
    _solarhouse2_inverter_controller_c_function4__pi = _solarhouse2_inverter_controller_constant3__out;
    _solarhouse2_inverter_controller_c_function4__out = _solarhouse2_inverter_controller_c_function4__out + _solarhouse2_inverter_controller_c_function4__in * _solarhouse2_inverter_controller_c_function4__Ts;
    if (_solarhouse2_inverter_controller_c_function4__out >= 2 * _solarhouse2_inverter_controller_c_function4__pi) {
        _solarhouse2_inverter_controller_c_function4__out = _solarhouse2_inverter_controller_c_function4__out - 2 * _solarhouse2_inverter_controller_c_function4__pi;
    }
    // Generated from the component: SolarHouse2.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Gain5
    _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_gain5__out = 1.0 * _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_limit3__out;
    // Generated from the component: SolarHouse2.Inverter.Controller.C function1
    _solarhouse2_inverter_controller_c_function1__charge = _solarhouse2_inverter_controller_rate_transition8_output__out;
    _solarhouse2_inverter_controller_c_function1__ref = _solarhouse2_inverter_controller_rate_transition9_output__out;
    if (_solarhouse2_inverter_controller_c_function1__charge > 0)_solarhouse2_inverter_controller_c_function1__out = -1;
    else _solarhouse2_inverter_controller_c_function1__out = _solarhouse2_inverter_controller_c_function1__ref;
    // Generated from the component: SolarHouse2.Inverter.Controller.Rate Transition8.Input
    _solarhouse2_inverter_controller_rate_transition8_output__out = _solarhouse2_inverter_controller_charge__out;
    // Generated from the component: SolarHouse2.Inverter.Controller.Hilbert Transform
    X_UnInt32 _solarhouse2_inverter_controller_hilbert_transform__i;
    _solarhouse2_inverter_controller_hilbert_transform__a_sum = 0.0f;
    _solarhouse2_inverter_controller_hilbert_transform__b_sum = 0.0f;
    _solarhouse2_inverter_controller_hilbert_transform__delay_line_in = 0.0f;
    for (_solarhouse2_inverter_controller_hilbert_transform__i = 0; _solarhouse2_inverter_controller_hilbert_transform__i < 1; _solarhouse2_inverter_controller_hilbert_transform__i++) {
        _solarhouse2_inverter_controller_hilbert_transform__b_sum += _solarhouse2_inverter_controller_hilbert_transform__b_coeff[_solarhouse2_inverter_controller_hilbert_transform__i + 1] * _solarhouse2_inverter_controller_hilbert_transform__states[_solarhouse2_inverter_controller_hilbert_transform__i];
    }
    _solarhouse2_inverter_controller_hilbert_transform__a_sum += _solarhouse2_inverter_controller_hilbert_transform__states[0] * _solarhouse2_inverter_controller_hilbert_transform__a_coeff[1];
    _solarhouse2_inverter_controller_hilbert_transform__delay_line_in = _solarhouse2_inverter_e_va1__out - _solarhouse2_inverter_controller_hilbert_transform__a_sum;
    _solarhouse2_inverter_controller_hilbert_transform__b_sum += _solarhouse2_inverter_controller_hilbert_transform__b_coeff[0] * _solarhouse2_inverter_controller_hilbert_transform__delay_line_in;
    _solarhouse2_inverter_controller_hilbert_transform__out = _solarhouse2_inverter_controller_hilbert_transform__b_sum;
    // Generated from the component: SolarHouse2.Inverter.V
    HIL_OutAO(0x404b, (float)_solarhouse2_inverter_e_va1__out);
    // Generated from the component: SolarHouse2.Inverter.Controller.Hilbert Transform1
    X_UnInt32 _solarhouse2_inverter_controller_hilbert_transform1__i;
    _solarhouse2_inverter_controller_hilbert_transform1__a_sum = 0.0f;
    _solarhouse2_inverter_controller_hilbert_transform1__b_sum = 0.0f;
    _solarhouse2_inverter_controller_hilbert_transform1__delay_line_in = 0.0f;
    for (_solarhouse2_inverter_controller_hilbert_transform1__i = 0; _solarhouse2_inverter_controller_hilbert_transform1__i < 1; _solarhouse2_inverter_controller_hilbert_transform1__i++) {
        _solarhouse2_inverter_controller_hilbert_transform1__b_sum += _solarhouse2_inverter_controller_hilbert_transform1__b_coeff[_solarhouse2_inverter_controller_hilbert_transform1__i + 1] * _solarhouse2_inverter_controller_hilbert_transform1__states[_solarhouse2_inverter_controller_hilbert_transform1__i];
    }
    _solarhouse2_inverter_controller_hilbert_transform1__a_sum += _solarhouse2_inverter_controller_hilbert_transform1__states[0] * _solarhouse2_inverter_controller_hilbert_transform1__a_coeff[1];
    _solarhouse2_inverter_controller_hilbert_transform1__delay_line_in = _solarhouse2_inverter_i_ia1__out - _solarhouse2_inverter_controller_hilbert_transform1__a_sum;
    _solarhouse2_inverter_controller_hilbert_transform1__b_sum += _solarhouse2_inverter_controller_hilbert_transform1__b_coeff[0] * _solarhouse2_inverter_controller_hilbert_transform1__delay_line_in;
    _solarhouse2_inverter_controller_hilbert_transform1__out = _solarhouse2_inverter_controller_hilbert_transform1__b_sum;
    // Generated from the component: SolarHouse2.Inverter.P
    HIL_OutAO(0x4047, (float)_solarhouse2_inverter_power_meas_gain4__out);
    // Generated from the component: SolarHouse2.Modbus.Rate Transition4.Input
    _solarhouse2_modbus_rate_transition4_output__out = _solarhouse2_inverter_power_meas_gain4__out;
    // Generated from the component: SolarHouse2.Inverter.Q
    HIL_OutAO(0x4049, (float)_solarhouse2_inverter_power_meas_gain5__out);
    // Generated from the component: SolarHouse2.Inverter.Power_Meas.Gain6
    _solarhouse2_inverter_power_meas_gain6__out = 50000.0 * _solarhouse2_inverter_power_meas_power_meas_dqpu_s_and_pf__S;
    // Generated from the component: SolarHouse2.Inverter.pf
    HIL_OutAO(0x404c, (float)_solarhouse2_inverter_power_meas_power_meas_dqpu_s_and_pf__pf);
    // Generated from the component: SolarHouse2.Inverter.LPF_dc
    X_UnInt32 _solarhouse2_inverter_lpf_dc__i;
    _solarhouse2_inverter_lpf_dc__a_sum = 0.0f;
    _solarhouse2_inverter_lpf_dc__b_sum = 0.0f;
    _solarhouse2_inverter_lpf_dc__delay_line_in = 0.0f;
    for (_solarhouse2_inverter_lpf_dc__i = 0; _solarhouse2_inverter_lpf_dc__i < 1; _solarhouse2_inverter_lpf_dc__i++) {
        _solarhouse2_inverter_lpf_dc__b_sum += _solarhouse2_inverter_lpf_dc__b_coeff[_solarhouse2_inverter_lpf_dc__i + 1] * _solarhouse2_inverter_lpf_dc__states[_solarhouse2_inverter_lpf_dc__i];
    }
    _solarhouse2_inverter_lpf_dc__a_sum += _solarhouse2_inverter_lpf_dc__states[0] * _solarhouse2_inverter_lpf_dc__a_coeff[1];
    _solarhouse2_inverter_lpf_dc__delay_line_in = _solarhouse2_inverter_vdc_va1__out - _solarhouse2_inverter_lpf_dc__a_sum;
    _solarhouse2_inverter_lpf_dc__b_sum += _solarhouse2_inverter_lpf_dc__b_coeff[0] * _solarhouse2_inverter_lpf_dc__delay_line_in;
    _solarhouse2_inverter_lpf_dc__out = _solarhouse2_inverter_lpf_dc__b_sum;
    // Generated from the component: SolarHouse2.Measurement.BPF.Gain
    _solarhouse2_measurement_bpf_gain__out = 1.2500000000000002 * _solarhouse2_measurement_bpf_hpf__out;
    // Generated from the component: SolarHouse2.Measurement.BPF1.Gain
    _solarhouse2_measurement_bpf1_gain__out = 1.2500000000000002 * _solarhouse2_measurement_bpf1_hpf__out;
    // Generated from the component: SolarHouse2.Measurement.BPF.LPF
    X_UnInt32 _solarhouse2_measurement_bpf_lpf__i;
    _solarhouse2_measurement_bpf_lpf__a_sum = 0.0f;
    _solarhouse2_measurement_bpf_lpf__b_sum = 0.0f;
    _solarhouse2_measurement_bpf_lpf__delay_line_in = 0.0f;
    for (_solarhouse2_measurement_bpf_lpf__i = 0; _solarhouse2_measurement_bpf_lpf__i < 1; _solarhouse2_measurement_bpf_lpf__i++) {
        _solarhouse2_measurement_bpf_lpf__b_sum += _solarhouse2_measurement_bpf_lpf__b_coeff[_solarhouse2_measurement_bpf_lpf__i + 1] * _solarhouse2_measurement_bpf_lpf__states[_solarhouse2_measurement_bpf_lpf__i];
    }
    _solarhouse2_measurement_bpf_lpf__a_sum += _solarhouse2_measurement_bpf_lpf__states[0] * _solarhouse2_measurement_bpf_lpf__a_coeff[1];
    _solarhouse2_measurement_bpf_lpf__delay_line_in = _solarhouse2_measurement_ia_ia1__out - _solarhouse2_measurement_bpf_lpf__a_sum;
    _solarhouse2_measurement_bpf_lpf__b_sum += _solarhouse2_measurement_bpf_lpf__b_coeff[0] * _solarhouse2_measurement_bpf_lpf__delay_line_in;
    _solarhouse2_measurement_bpf_lpf__out = _solarhouse2_measurement_bpf_lpf__b_sum;
    // Generated from the component: SolarHouse2.Measurement.BPF1.LPF
    X_UnInt32 _solarhouse2_measurement_bpf1_lpf__i;
    _solarhouse2_measurement_bpf1_lpf__a_sum = 0.0f;
    _solarhouse2_measurement_bpf1_lpf__b_sum = 0.0f;
    _solarhouse2_measurement_bpf1_lpf__delay_line_in = 0.0f;
    for (_solarhouse2_measurement_bpf1_lpf__i = 0; _solarhouse2_measurement_bpf1_lpf__i < 1; _solarhouse2_measurement_bpf1_lpf__i++) {
        _solarhouse2_measurement_bpf1_lpf__b_sum += _solarhouse2_measurement_bpf1_lpf__b_coeff[_solarhouse2_measurement_bpf1_lpf__i + 1] * _solarhouse2_measurement_bpf1_lpf__states[_solarhouse2_measurement_bpf1_lpf__i];
    }
    _solarhouse2_measurement_bpf1_lpf__a_sum += _solarhouse2_measurement_bpf1_lpf__states[0] * _solarhouse2_measurement_bpf1_lpf__a_coeff[1];
    _solarhouse2_measurement_bpf1_lpf__delay_line_in = _solarhouse2_measurement_va_va1__out - _solarhouse2_measurement_bpf1_lpf__a_sum;
    _solarhouse2_measurement_bpf1_lpf__b_sum += _solarhouse2_measurement_bpf1_lpf__b_coeff[0] * _solarhouse2_measurement_bpf1_lpf__delay_line_in;
    _solarhouse2_measurement_bpf1_lpf__out = _solarhouse2_measurement_bpf1_lpf__b_sum;
    // Generated from the component: SolarHouse2.Inverter.Controller.Gain32
    _solarhouse2_inverter_controller_gain32__out = 2e-05 * _solarhouse2_rate_transition1_output__out;
    // Generated from the component: SolarHouse2.Inverter.Pref_probe
    HIL_OutAO(0x4048, (float)_solarhouse2_rate_transition1_output__out);
    // Generated from the component: SolarHouse3.Inverter.Controller.C function4
    _solarhouse3_inverter_controller_c_function4__Ts = _solarhouse3_inverter_controller_constant4__out;
    _solarhouse3_inverter_controller_c_function4__in = _solarhouse3_inverter_controller_constant6__out;
    _solarhouse3_inverter_controller_c_function4__pi = _solarhouse3_inverter_controller_constant3__out;
    _solarhouse3_inverter_controller_c_function4__out = _solarhouse3_inverter_controller_c_function4__out + _solarhouse3_inverter_controller_c_function4__in * _solarhouse3_inverter_controller_c_function4__Ts;
    if (_solarhouse3_inverter_controller_c_function4__out >= 2 * _solarhouse3_inverter_controller_c_function4__pi) {
        _solarhouse3_inverter_controller_c_function4__out = _solarhouse3_inverter_controller_c_function4__out - 2 * _solarhouse3_inverter_controller_c_function4__pi;
    }
    // Generated from the component: SolarHouse3.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Gain5
    _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_gain5__out = 1.0 * _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_limit3__out;
    // Generated from the component: SolarHouse3.Inverter.Controller.C function1
    _solarhouse3_inverter_controller_c_function1__charge = _solarhouse3_inverter_controller_rate_transition8_output__out;
    _solarhouse3_inverter_controller_c_function1__ref = _solarhouse3_inverter_controller_rate_transition9_output__out;
    if (_solarhouse3_inverter_controller_c_function1__charge > 0)_solarhouse3_inverter_controller_c_function1__out = -1;
    else _solarhouse3_inverter_controller_c_function1__out = _solarhouse3_inverter_controller_c_function1__ref;
    // Generated from the component: SolarHouse3.Inverter.Controller.Rate Transition8.Input
    _solarhouse3_inverter_controller_rate_transition8_output__out = _solarhouse3_inverter_controller_charge__out;
    // Generated from the component: SolarHouse3.Inverter.Controller.Hilbert Transform
    X_UnInt32 _solarhouse3_inverter_controller_hilbert_transform__i;
    _solarhouse3_inverter_controller_hilbert_transform__a_sum = 0.0f;
    _solarhouse3_inverter_controller_hilbert_transform__b_sum = 0.0f;
    _solarhouse3_inverter_controller_hilbert_transform__delay_line_in = 0.0f;
    for (_solarhouse3_inverter_controller_hilbert_transform__i = 0; _solarhouse3_inverter_controller_hilbert_transform__i < 1; _solarhouse3_inverter_controller_hilbert_transform__i++) {
        _solarhouse3_inverter_controller_hilbert_transform__b_sum += _solarhouse3_inverter_controller_hilbert_transform__b_coeff[_solarhouse3_inverter_controller_hilbert_transform__i + 1] * _solarhouse3_inverter_controller_hilbert_transform__states[_solarhouse3_inverter_controller_hilbert_transform__i];
    }
    _solarhouse3_inverter_controller_hilbert_transform__a_sum += _solarhouse3_inverter_controller_hilbert_transform__states[0] * _solarhouse3_inverter_controller_hilbert_transform__a_coeff[1];
    _solarhouse3_inverter_controller_hilbert_transform__delay_line_in = _solarhouse3_inverter_e_va1__out - _solarhouse3_inverter_controller_hilbert_transform__a_sum;
    _solarhouse3_inverter_controller_hilbert_transform__b_sum += _solarhouse3_inverter_controller_hilbert_transform__b_coeff[0] * _solarhouse3_inverter_controller_hilbert_transform__delay_line_in;
    _solarhouse3_inverter_controller_hilbert_transform__out = _solarhouse3_inverter_controller_hilbert_transform__b_sum;
    // Generated from the component: SolarHouse3.Inverter.V
    HIL_OutAO(0x4064, (float)_solarhouse3_inverter_e_va1__out);
    // Generated from the component: SolarHouse3.Inverter.Controller.Hilbert Transform1
    X_UnInt32 _solarhouse3_inverter_controller_hilbert_transform1__i;
    _solarhouse3_inverter_controller_hilbert_transform1__a_sum = 0.0f;
    _solarhouse3_inverter_controller_hilbert_transform1__b_sum = 0.0f;
    _solarhouse3_inverter_controller_hilbert_transform1__delay_line_in = 0.0f;
    for (_solarhouse3_inverter_controller_hilbert_transform1__i = 0; _solarhouse3_inverter_controller_hilbert_transform1__i < 1; _solarhouse3_inverter_controller_hilbert_transform1__i++) {
        _solarhouse3_inverter_controller_hilbert_transform1__b_sum += _solarhouse3_inverter_controller_hilbert_transform1__b_coeff[_solarhouse3_inverter_controller_hilbert_transform1__i + 1] * _solarhouse3_inverter_controller_hilbert_transform1__states[_solarhouse3_inverter_controller_hilbert_transform1__i];
    }
    _solarhouse3_inverter_controller_hilbert_transform1__a_sum += _solarhouse3_inverter_controller_hilbert_transform1__states[0] * _solarhouse3_inverter_controller_hilbert_transform1__a_coeff[1];
    _solarhouse3_inverter_controller_hilbert_transform1__delay_line_in = _solarhouse3_inverter_i_ia1__out - _solarhouse3_inverter_controller_hilbert_transform1__a_sum;
    _solarhouse3_inverter_controller_hilbert_transform1__b_sum += _solarhouse3_inverter_controller_hilbert_transform1__b_coeff[0] * _solarhouse3_inverter_controller_hilbert_transform1__delay_line_in;
    _solarhouse3_inverter_controller_hilbert_transform1__out = _solarhouse3_inverter_controller_hilbert_transform1__b_sum;
    // Generated from the component: SolarHouse3.Inverter.P
    HIL_OutAO(0x4060, (float)_solarhouse3_inverter_power_meas_gain4__out);
    // Generated from the component: SolarHouse3.Modbus.Rate Transition4.Input
    _solarhouse3_modbus_rate_transition4_output__out = _solarhouse3_inverter_power_meas_gain4__out;
    // Generated from the component: SolarHouse3.Inverter.Q
    HIL_OutAO(0x4062, (float)_solarhouse3_inverter_power_meas_gain5__out);
    // Generated from the component: SolarHouse3.Inverter.Power_Meas.Gain6
    _solarhouse3_inverter_power_meas_gain6__out = 50000.0 * _solarhouse3_inverter_power_meas_power_meas_dqpu_s_and_pf__S;
    // Generated from the component: SolarHouse3.Inverter.pf
    HIL_OutAO(0x4065, (float)_solarhouse3_inverter_power_meas_power_meas_dqpu_s_and_pf__pf);
    // Generated from the component: SolarHouse3.Inverter.LPF_dc
    X_UnInt32 _solarhouse3_inverter_lpf_dc__i;
    _solarhouse3_inverter_lpf_dc__a_sum = 0.0f;
    _solarhouse3_inverter_lpf_dc__b_sum = 0.0f;
    _solarhouse3_inverter_lpf_dc__delay_line_in = 0.0f;
    for (_solarhouse3_inverter_lpf_dc__i = 0; _solarhouse3_inverter_lpf_dc__i < 1; _solarhouse3_inverter_lpf_dc__i++) {
        _solarhouse3_inverter_lpf_dc__b_sum += _solarhouse3_inverter_lpf_dc__b_coeff[_solarhouse3_inverter_lpf_dc__i + 1] * _solarhouse3_inverter_lpf_dc__states[_solarhouse3_inverter_lpf_dc__i];
    }
    _solarhouse3_inverter_lpf_dc__a_sum += _solarhouse3_inverter_lpf_dc__states[0] * _solarhouse3_inverter_lpf_dc__a_coeff[1];
    _solarhouse3_inverter_lpf_dc__delay_line_in = _solarhouse3_inverter_vdc_va1__out - _solarhouse3_inverter_lpf_dc__a_sum;
    _solarhouse3_inverter_lpf_dc__b_sum += _solarhouse3_inverter_lpf_dc__b_coeff[0] * _solarhouse3_inverter_lpf_dc__delay_line_in;
    _solarhouse3_inverter_lpf_dc__out = _solarhouse3_inverter_lpf_dc__b_sum;
    // Generated from the component: SolarHouse3.Measurement.BPF.Gain
    _solarhouse3_measurement_bpf_gain__out = 1.2500000000000002 * _solarhouse3_measurement_bpf_hpf__out;
    // Generated from the component: SolarHouse3.Measurement.BPF1.Gain
    _solarhouse3_measurement_bpf1_gain__out = 1.2500000000000002 * _solarhouse3_measurement_bpf1_hpf__out;
    // Generated from the component: SolarHouse3.Measurement.BPF.LPF
    X_UnInt32 _solarhouse3_measurement_bpf_lpf__i;
    _solarhouse3_measurement_bpf_lpf__a_sum = 0.0f;
    _solarhouse3_measurement_bpf_lpf__b_sum = 0.0f;
    _solarhouse3_measurement_bpf_lpf__delay_line_in = 0.0f;
    for (_solarhouse3_measurement_bpf_lpf__i = 0; _solarhouse3_measurement_bpf_lpf__i < 1; _solarhouse3_measurement_bpf_lpf__i++) {
        _solarhouse3_measurement_bpf_lpf__b_sum += _solarhouse3_measurement_bpf_lpf__b_coeff[_solarhouse3_measurement_bpf_lpf__i + 1] * _solarhouse3_measurement_bpf_lpf__states[_solarhouse3_measurement_bpf_lpf__i];
    }
    _solarhouse3_measurement_bpf_lpf__a_sum += _solarhouse3_measurement_bpf_lpf__states[0] * _solarhouse3_measurement_bpf_lpf__a_coeff[1];
    _solarhouse3_measurement_bpf_lpf__delay_line_in = _solarhouse3_measurement_ia_ia1__out - _solarhouse3_measurement_bpf_lpf__a_sum;
    _solarhouse3_measurement_bpf_lpf__b_sum += _solarhouse3_measurement_bpf_lpf__b_coeff[0] * _solarhouse3_measurement_bpf_lpf__delay_line_in;
    _solarhouse3_measurement_bpf_lpf__out = _solarhouse3_measurement_bpf_lpf__b_sum;
    // Generated from the component: SolarHouse3.Measurement.BPF1.LPF
    X_UnInt32 _solarhouse3_measurement_bpf1_lpf__i;
    _solarhouse3_measurement_bpf1_lpf__a_sum = 0.0f;
    _solarhouse3_measurement_bpf1_lpf__b_sum = 0.0f;
    _solarhouse3_measurement_bpf1_lpf__delay_line_in = 0.0f;
    for (_solarhouse3_measurement_bpf1_lpf__i = 0; _solarhouse3_measurement_bpf1_lpf__i < 1; _solarhouse3_measurement_bpf1_lpf__i++) {
        _solarhouse3_measurement_bpf1_lpf__b_sum += _solarhouse3_measurement_bpf1_lpf__b_coeff[_solarhouse3_measurement_bpf1_lpf__i + 1] * _solarhouse3_measurement_bpf1_lpf__states[_solarhouse3_measurement_bpf1_lpf__i];
    }
    _solarhouse3_measurement_bpf1_lpf__a_sum += _solarhouse3_measurement_bpf1_lpf__states[0] * _solarhouse3_measurement_bpf1_lpf__a_coeff[1];
    _solarhouse3_measurement_bpf1_lpf__delay_line_in = _solarhouse3_measurement_va_va1__out - _solarhouse3_measurement_bpf1_lpf__a_sum;
    _solarhouse3_measurement_bpf1_lpf__b_sum += _solarhouse3_measurement_bpf1_lpf__b_coeff[0] * _solarhouse3_measurement_bpf1_lpf__delay_line_in;
    _solarhouse3_measurement_bpf1_lpf__out = _solarhouse3_measurement_bpf1_lpf__b_sum;
    // Generated from the component: SolarHouse3.Inverter.Controller.Gain32
    _solarhouse3_inverter_controller_gain32__out = 2e-05 * _solarhouse3_rate_transition1_output__out;
    // Generated from the component: SolarHouse3.Inverter.Pref_probe
    HIL_OutAO(0x4061, (float)_solarhouse3_rate_transition1_output__out);
    // Generated from the component: SolarHouse4.Inverter.Controller.C function4
    _solarhouse4_inverter_controller_c_function4__Ts = _solarhouse4_inverter_controller_constant4__out;
    _solarhouse4_inverter_controller_c_function4__in = _solarhouse4_inverter_controller_constant6__out;
    _solarhouse4_inverter_controller_c_function4__pi = _solarhouse4_inverter_controller_constant3__out;
    _solarhouse4_inverter_controller_c_function4__out = _solarhouse4_inverter_controller_c_function4__out + _solarhouse4_inverter_controller_c_function4__in * _solarhouse4_inverter_controller_c_function4__Ts;
    if (_solarhouse4_inverter_controller_c_function4__out >= 2 * _solarhouse4_inverter_controller_c_function4__pi) {
        _solarhouse4_inverter_controller_c_function4__out = _solarhouse4_inverter_controller_c_function4__out - 2 * _solarhouse4_inverter_controller_c_function4__pi;
    }
    // Generated from the component: SolarHouse4.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Gain5
    _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_gain5__out = 1.0 * _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_limit3__out;
    // Generated from the component: SolarHouse4.Inverter.Controller.C function1
    _solarhouse4_inverter_controller_c_function1__charge = _solarhouse4_inverter_controller_rate_transition8_output__out;
    _solarhouse4_inverter_controller_c_function1__ref = _solarhouse4_inverter_controller_rate_transition9_output__out;
    if (_solarhouse4_inverter_controller_c_function1__charge > 0)_solarhouse4_inverter_controller_c_function1__out = -1;
    else _solarhouse4_inverter_controller_c_function1__out = _solarhouse4_inverter_controller_c_function1__ref;
    // Generated from the component: SolarHouse4.Inverter.Controller.Rate Transition8.Input
    _solarhouse4_inverter_controller_rate_transition8_output__out = _solarhouse4_inverter_controller_charge__out;
    // Generated from the component: SolarHouse4.Inverter.Controller.Hilbert Transform
    X_UnInt32 _solarhouse4_inverter_controller_hilbert_transform__i;
    _solarhouse4_inverter_controller_hilbert_transform__a_sum = 0.0f;
    _solarhouse4_inverter_controller_hilbert_transform__b_sum = 0.0f;
    _solarhouse4_inverter_controller_hilbert_transform__delay_line_in = 0.0f;
    for (_solarhouse4_inverter_controller_hilbert_transform__i = 0; _solarhouse4_inverter_controller_hilbert_transform__i < 1; _solarhouse4_inverter_controller_hilbert_transform__i++) {
        _solarhouse4_inverter_controller_hilbert_transform__b_sum += _solarhouse4_inverter_controller_hilbert_transform__b_coeff[_solarhouse4_inverter_controller_hilbert_transform__i + 1] * _solarhouse4_inverter_controller_hilbert_transform__states[_solarhouse4_inverter_controller_hilbert_transform__i];
    }
    _solarhouse4_inverter_controller_hilbert_transform__a_sum += _solarhouse4_inverter_controller_hilbert_transform__states[0] * _solarhouse4_inverter_controller_hilbert_transform__a_coeff[1];
    _solarhouse4_inverter_controller_hilbert_transform__delay_line_in = _solarhouse4_inverter_e_va1__out - _solarhouse4_inverter_controller_hilbert_transform__a_sum;
    _solarhouse4_inverter_controller_hilbert_transform__b_sum += _solarhouse4_inverter_controller_hilbert_transform__b_coeff[0] * _solarhouse4_inverter_controller_hilbert_transform__delay_line_in;
    _solarhouse4_inverter_controller_hilbert_transform__out = _solarhouse4_inverter_controller_hilbert_transform__b_sum;
    // Generated from the component: SolarHouse4.Inverter.V
    HIL_OutAO(0x407d, (float)_solarhouse4_inverter_e_va1__out);
    // Generated from the component: SolarHouse4.Inverter.Controller.Hilbert Transform1
    X_UnInt32 _solarhouse4_inverter_controller_hilbert_transform1__i;
    _solarhouse4_inverter_controller_hilbert_transform1__a_sum = 0.0f;
    _solarhouse4_inverter_controller_hilbert_transform1__b_sum = 0.0f;
    _solarhouse4_inverter_controller_hilbert_transform1__delay_line_in = 0.0f;
    for (_solarhouse4_inverter_controller_hilbert_transform1__i = 0; _solarhouse4_inverter_controller_hilbert_transform1__i < 1; _solarhouse4_inverter_controller_hilbert_transform1__i++) {
        _solarhouse4_inverter_controller_hilbert_transform1__b_sum += _solarhouse4_inverter_controller_hilbert_transform1__b_coeff[_solarhouse4_inverter_controller_hilbert_transform1__i + 1] * _solarhouse4_inverter_controller_hilbert_transform1__states[_solarhouse4_inverter_controller_hilbert_transform1__i];
    }
    _solarhouse4_inverter_controller_hilbert_transform1__a_sum += _solarhouse4_inverter_controller_hilbert_transform1__states[0] * _solarhouse4_inverter_controller_hilbert_transform1__a_coeff[1];
    _solarhouse4_inverter_controller_hilbert_transform1__delay_line_in = _solarhouse4_inverter_i_ia1__out - _solarhouse4_inverter_controller_hilbert_transform1__a_sum;
    _solarhouse4_inverter_controller_hilbert_transform1__b_sum += _solarhouse4_inverter_controller_hilbert_transform1__b_coeff[0] * _solarhouse4_inverter_controller_hilbert_transform1__delay_line_in;
    _solarhouse4_inverter_controller_hilbert_transform1__out = _solarhouse4_inverter_controller_hilbert_transform1__b_sum;
    // Generated from the component: SolarHouse4.Inverter.P
    HIL_OutAO(0x4079, (float)_solarhouse4_inverter_power_meas_gain4__out);
    // Generated from the component: SolarHouse4.Modbus.Rate Transition4.Input
    _solarhouse4_modbus_rate_transition4_output__out = _solarhouse4_inverter_power_meas_gain4__out;
    // Generated from the component: SolarHouse4.Inverter.Q
    HIL_OutAO(0x407b, (float)_solarhouse4_inverter_power_meas_gain5__out);
    // Generated from the component: SolarHouse4.Inverter.Power_Meas.Gain6
    _solarhouse4_inverter_power_meas_gain6__out = 50000.0 * _solarhouse4_inverter_power_meas_power_meas_dqpu_s_and_pf__S;
    // Generated from the component: SolarHouse4.Inverter.pf
    HIL_OutAO(0x407e, (float)_solarhouse4_inverter_power_meas_power_meas_dqpu_s_and_pf__pf);
    // Generated from the component: SolarHouse4.Inverter.LPF_dc
    X_UnInt32 _solarhouse4_inverter_lpf_dc__i;
    _solarhouse4_inverter_lpf_dc__a_sum = 0.0f;
    _solarhouse4_inverter_lpf_dc__b_sum = 0.0f;
    _solarhouse4_inverter_lpf_dc__delay_line_in = 0.0f;
    for (_solarhouse4_inverter_lpf_dc__i = 0; _solarhouse4_inverter_lpf_dc__i < 1; _solarhouse4_inverter_lpf_dc__i++) {
        _solarhouse4_inverter_lpf_dc__b_sum += _solarhouse4_inverter_lpf_dc__b_coeff[_solarhouse4_inverter_lpf_dc__i + 1] * _solarhouse4_inverter_lpf_dc__states[_solarhouse4_inverter_lpf_dc__i];
    }
    _solarhouse4_inverter_lpf_dc__a_sum += _solarhouse4_inverter_lpf_dc__states[0] * _solarhouse4_inverter_lpf_dc__a_coeff[1];
    _solarhouse4_inverter_lpf_dc__delay_line_in = _solarhouse4_inverter_vdc_va1__out - _solarhouse4_inverter_lpf_dc__a_sum;
    _solarhouse4_inverter_lpf_dc__b_sum += _solarhouse4_inverter_lpf_dc__b_coeff[0] * _solarhouse4_inverter_lpf_dc__delay_line_in;
    _solarhouse4_inverter_lpf_dc__out = _solarhouse4_inverter_lpf_dc__b_sum;
    // Generated from the component: SolarHouse4.Measurement.BPF.Gain
    _solarhouse4_measurement_bpf_gain__out = 1.2500000000000002 * _solarhouse4_measurement_bpf_hpf__out;
    // Generated from the component: SolarHouse4.Measurement.BPF1.Gain
    _solarhouse4_measurement_bpf1_gain__out = 1.2500000000000002 * _solarhouse4_measurement_bpf1_hpf__out;
    // Generated from the component: SolarHouse4.Measurement.BPF.LPF
    X_UnInt32 _solarhouse4_measurement_bpf_lpf__i;
    _solarhouse4_measurement_bpf_lpf__a_sum = 0.0f;
    _solarhouse4_measurement_bpf_lpf__b_sum = 0.0f;
    _solarhouse4_measurement_bpf_lpf__delay_line_in = 0.0f;
    for (_solarhouse4_measurement_bpf_lpf__i = 0; _solarhouse4_measurement_bpf_lpf__i < 1; _solarhouse4_measurement_bpf_lpf__i++) {
        _solarhouse4_measurement_bpf_lpf__b_sum += _solarhouse4_measurement_bpf_lpf__b_coeff[_solarhouse4_measurement_bpf_lpf__i + 1] * _solarhouse4_measurement_bpf_lpf__states[_solarhouse4_measurement_bpf_lpf__i];
    }
    _solarhouse4_measurement_bpf_lpf__a_sum += _solarhouse4_measurement_bpf_lpf__states[0] * _solarhouse4_measurement_bpf_lpf__a_coeff[1];
    _solarhouse4_measurement_bpf_lpf__delay_line_in = _solarhouse4_measurement_ia_ia1__out - _solarhouse4_measurement_bpf_lpf__a_sum;
    _solarhouse4_measurement_bpf_lpf__b_sum += _solarhouse4_measurement_bpf_lpf__b_coeff[0] * _solarhouse4_measurement_bpf_lpf__delay_line_in;
    _solarhouse4_measurement_bpf_lpf__out = _solarhouse4_measurement_bpf_lpf__b_sum;
    // Generated from the component: SolarHouse4.Measurement.BPF1.LPF
    X_UnInt32 _solarhouse4_measurement_bpf1_lpf__i;
    _solarhouse4_measurement_bpf1_lpf__a_sum = 0.0f;
    _solarhouse4_measurement_bpf1_lpf__b_sum = 0.0f;
    _solarhouse4_measurement_bpf1_lpf__delay_line_in = 0.0f;
    for (_solarhouse4_measurement_bpf1_lpf__i = 0; _solarhouse4_measurement_bpf1_lpf__i < 1; _solarhouse4_measurement_bpf1_lpf__i++) {
        _solarhouse4_measurement_bpf1_lpf__b_sum += _solarhouse4_measurement_bpf1_lpf__b_coeff[_solarhouse4_measurement_bpf1_lpf__i + 1] * _solarhouse4_measurement_bpf1_lpf__states[_solarhouse4_measurement_bpf1_lpf__i];
    }
    _solarhouse4_measurement_bpf1_lpf__a_sum += _solarhouse4_measurement_bpf1_lpf__states[0] * _solarhouse4_measurement_bpf1_lpf__a_coeff[1];
    _solarhouse4_measurement_bpf1_lpf__delay_line_in = _solarhouse4_measurement_va_va1__out - _solarhouse4_measurement_bpf1_lpf__a_sum;
    _solarhouse4_measurement_bpf1_lpf__b_sum += _solarhouse4_measurement_bpf1_lpf__b_coeff[0] * _solarhouse4_measurement_bpf1_lpf__delay_line_in;
    _solarhouse4_measurement_bpf1_lpf__out = _solarhouse4_measurement_bpf1_lpf__b_sum;
    // Generated from the component: SolarHouse4.Inverter.Controller.Gain32
    _solarhouse4_inverter_controller_gain32__out = 2e-05 * _solarhouse4_rate_transition1_output__out;
    // Generated from the component: SolarHouse4.Inverter.Pref_probe
    HIL_OutAO(0x407a, (float)_solarhouse4_rate_transition1_output__out);
    // Generated from the component: ESS.Inverter.Controller.Gain22
    _ess_inverter_controller_gain22__out = 0.02 * _ess_inverter_controller_c_function1__out;
    // Generated from the component: ESS.Inverter.Controller.alpha beta to dq1
    _ess_inverter_controller_alpha_beta_to_dq1__k1 = cos(_ess_inverter_controller_c_function4__out);
    _ess_inverter_controller_alpha_beta_to_dq1__k2 = sin(_ess_inverter_controller_c_function4__out);
    _ess_inverter_controller_alpha_beta_to_dq1__d = _ess_inverter_controller_alpha_beta_to_dq1__k2 * _ess_inverter_e_va1__out - _ess_inverter_controller_alpha_beta_to_dq1__k1 * _ess_inverter_controller_hilbert_transform__out;
    _ess_inverter_controller_alpha_beta_to_dq1__q = _ess_inverter_controller_alpha_beta_to_dq1__k1 * _ess_inverter_e_va1__out + _ess_inverter_controller_alpha_beta_to_dq1__k2 * _ess_inverter_controller_hilbert_transform__out;
    // Generated from the component: ESS.Inverter.Controller.alpha beta to dq2
    _ess_inverter_controller_alpha_beta_to_dq2__k1 = cos(_ess_inverter_controller_c_function4__out);
    _ess_inverter_controller_alpha_beta_to_dq2__k2 = sin(_ess_inverter_controller_c_function4__out);
    _ess_inverter_controller_alpha_beta_to_dq2__d = _ess_inverter_controller_alpha_beta_to_dq2__k2 * _ess_inverter_i_ia1__out - _ess_inverter_controller_alpha_beta_to_dq2__k1 * _ess_inverter_controller_hilbert_transform1__out;
    _ess_inverter_controller_alpha_beta_to_dq2__q = _ess_inverter_controller_alpha_beta_to_dq2__k1 * _ess_inverter_i_ia1__out + _ess_inverter_controller_alpha_beta_to_dq2__k2 * _ess_inverter_controller_hilbert_transform1__out;
    // Generated from the component: ESS.Inverter.S
    HIL_OutAO(0x4017, (float)_ess_inverter_power_meas_gain6__out);
    // Generated from the component: Measurement.Hilbert Transform1
    X_UnInt32 _measurement_hilbert_transform1__i;
    _measurement_hilbert_transform1__a_sum = 0.0f;
    _measurement_hilbert_transform1__b_sum = 0.0f;
    _measurement_hilbert_transform1__delay_line_in = 0.0f;
    for (_measurement_hilbert_transform1__i = 0; _measurement_hilbert_transform1__i < 1; _measurement_hilbert_transform1__i++) {
        _measurement_hilbert_transform1__b_sum += _measurement_hilbert_transform1__b_coeff[_measurement_hilbert_transform1__i + 1] * _measurement_hilbert_transform1__states[_measurement_hilbert_transform1__i];
    }
    _measurement_hilbert_transform1__a_sum += _measurement_hilbert_transform1__states[0] * _measurement_hilbert_transform1__a_coeff[1];
    _measurement_hilbert_transform1__delay_line_in = _measurement_bpf_gain__out - _measurement_hilbert_transform1__a_sum;
    _measurement_hilbert_transform1__b_sum += _measurement_hilbert_transform1__b_coeff[0] * _measurement_hilbert_transform1__delay_line_in;
    _measurement_hilbert_transform1__out = _measurement_hilbert_transform1__b_sum;
    // Generated from the component: Measurement.Hilbert Transform
    X_UnInt32 _measurement_hilbert_transform__i;
    _measurement_hilbert_transform__a_sum = 0.0f;
    _measurement_hilbert_transform__b_sum = 0.0f;
    _measurement_hilbert_transform__delay_line_in = 0.0f;
    for (_measurement_hilbert_transform__i = 0; _measurement_hilbert_transform__i < 1; _measurement_hilbert_transform__i++) {
        _measurement_hilbert_transform__b_sum += _measurement_hilbert_transform__b_coeff[_measurement_hilbert_transform__i + 1] * _measurement_hilbert_transform__states[_measurement_hilbert_transform__i];
    }
    _measurement_hilbert_transform__a_sum += _measurement_hilbert_transform__states[0] * _measurement_hilbert_transform__a_coeff[1];
    _measurement_hilbert_transform__delay_line_in = _measurement_bpf1_gain__out - _measurement_hilbert_transform__a_sum;
    _measurement_hilbert_transform__b_sum += _measurement_hilbert_transform__b_coeff[0] * _measurement_hilbert_transform__delay_line_in;
    _measurement_hilbert_transform__out = _measurement_hilbert_transform__b_sum;
    // Generated from the component: Measurement.Product1
    _measurement_product1__out = (_measurement_bpf1_gain__out * _measurement_bpf_gain__out);
    // Generated from the component: SolarHouse1.Inverter.Controller.Gain22
    _solarhouse1_inverter_controller_gain22__out = 0.02 * _solarhouse1_inverter_controller_c_function1__out;
    // Generated from the component: SolarHouse1.Inverter.Controller.alpha beta to dq1
    _solarhouse1_inverter_controller_alpha_beta_to_dq1__k1 = cos(_solarhouse1_inverter_controller_c_function4__out);
    _solarhouse1_inverter_controller_alpha_beta_to_dq1__k2 = sin(_solarhouse1_inverter_controller_c_function4__out);
    _solarhouse1_inverter_controller_alpha_beta_to_dq1__d = _solarhouse1_inverter_controller_alpha_beta_to_dq1__k2 * _solarhouse1_inverter_e_va1__out - _solarhouse1_inverter_controller_alpha_beta_to_dq1__k1 * _solarhouse1_inverter_controller_hilbert_transform__out;
    _solarhouse1_inverter_controller_alpha_beta_to_dq1__q = _solarhouse1_inverter_controller_alpha_beta_to_dq1__k1 * _solarhouse1_inverter_e_va1__out + _solarhouse1_inverter_controller_alpha_beta_to_dq1__k2 * _solarhouse1_inverter_controller_hilbert_transform__out;
    // Generated from the component: SolarHouse1.Inverter.Controller.alpha beta to dq2
    _solarhouse1_inverter_controller_alpha_beta_to_dq2__k1 = cos(_solarhouse1_inverter_controller_c_function4__out);
    _solarhouse1_inverter_controller_alpha_beta_to_dq2__k2 = sin(_solarhouse1_inverter_controller_c_function4__out);
    _solarhouse1_inverter_controller_alpha_beta_to_dq2__d = _solarhouse1_inverter_controller_alpha_beta_to_dq2__k2 * _solarhouse1_inverter_i_ia1__out - _solarhouse1_inverter_controller_alpha_beta_to_dq2__k1 * _solarhouse1_inverter_controller_hilbert_transform1__out;
    _solarhouse1_inverter_controller_alpha_beta_to_dq2__q = _solarhouse1_inverter_controller_alpha_beta_to_dq2__k1 * _solarhouse1_inverter_i_ia1__out + _solarhouse1_inverter_controller_alpha_beta_to_dq2__k2 * _solarhouse1_inverter_controller_hilbert_transform1__out;
    // Generated from the component: SolarHouse1.Inverter.S
    HIL_OutAO(0x4031, (float)_solarhouse1_inverter_power_meas_gain6__out);
    // Generated from the component: SolarHouse1.Measurement.Hilbert Transform1
    X_UnInt32 _solarhouse1_measurement_hilbert_transform1__i;
    _solarhouse1_measurement_hilbert_transform1__a_sum = 0.0f;
    _solarhouse1_measurement_hilbert_transform1__b_sum = 0.0f;
    _solarhouse1_measurement_hilbert_transform1__delay_line_in = 0.0f;
    for (_solarhouse1_measurement_hilbert_transform1__i = 0; _solarhouse1_measurement_hilbert_transform1__i < 1; _solarhouse1_measurement_hilbert_transform1__i++) {
        _solarhouse1_measurement_hilbert_transform1__b_sum += _solarhouse1_measurement_hilbert_transform1__b_coeff[_solarhouse1_measurement_hilbert_transform1__i + 1] * _solarhouse1_measurement_hilbert_transform1__states[_solarhouse1_measurement_hilbert_transform1__i];
    }
    _solarhouse1_measurement_hilbert_transform1__a_sum += _solarhouse1_measurement_hilbert_transform1__states[0] * _solarhouse1_measurement_hilbert_transform1__a_coeff[1];
    _solarhouse1_measurement_hilbert_transform1__delay_line_in = _solarhouse1_measurement_bpf_gain__out - _solarhouse1_measurement_hilbert_transform1__a_sum;
    _solarhouse1_measurement_hilbert_transform1__b_sum += _solarhouse1_measurement_hilbert_transform1__b_coeff[0] * _solarhouse1_measurement_hilbert_transform1__delay_line_in;
    _solarhouse1_measurement_hilbert_transform1__out = _solarhouse1_measurement_hilbert_transform1__b_sum;
    // Generated from the component: SolarHouse1.Measurement.Hilbert Transform
    X_UnInt32 _solarhouse1_measurement_hilbert_transform__i;
    _solarhouse1_measurement_hilbert_transform__a_sum = 0.0f;
    _solarhouse1_measurement_hilbert_transform__b_sum = 0.0f;
    _solarhouse1_measurement_hilbert_transform__delay_line_in = 0.0f;
    for (_solarhouse1_measurement_hilbert_transform__i = 0; _solarhouse1_measurement_hilbert_transform__i < 1; _solarhouse1_measurement_hilbert_transform__i++) {
        _solarhouse1_measurement_hilbert_transform__b_sum += _solarhouse1_measurement_hilbert_transform__b_coeff[_solarhouse1_measurement_hilbert_transform__i + 1] * _solarhouse1_measurement_hilbert_transform__states[_solarhouse1_measurement_hilbert_transform__i];
    }
    _solarhouse1_measurement_hilbert_transform__a_sum += _solarhouse1_measurement_hilbert_transform__states[0] * _solarhouse1_measurement_hilbert_transform__a_coeff[1];
    _solarhouse1_measurement_hilbert_transform__delay_line_in = _solarhouse1_measurement_bpf1_gain__out - _solarhouse1_measurement_hilbert_transform__a_sum;
    _solarhouse1_measurement_hilbert_transform__b_sum += _solarhouse1_measurement_hilbert_transform__b_coeff[0] * _solarhouse1_measurement_hilbert_transform__delay_line_in;
    _solarhouse1_measurement_hilbert_transform__out = _solarhouse1_measurement_hilbert_transform__b_sum;
    // Generated from the component: SolarHouse1.Measurement.Product1
    _solarhouse1_measurement_product1__out = (_solarhouse1_measurement_bpf1_gain__out * _solarhouse1_measurement_bpf_gain__out);
    // Generated from the component: SolarHouse2.Inverter.Controller.Gain22
    _solarhouse2_inverter_controller_gain22__out = 0.02 * _solarhouse2_inverter_controller_c_function1__out;
    // Generated from the component: SolarHouse2.Inverter.Controller.alpha beta to dq1
    _solarhouse2_inverter_controller_alpha_beta_to_dq1__k1 = cos(_solarhouse2_inverter_controller_c_function4__out);
    _solarhouse2_inverter_controller_alpha_beta_to_dq1__k2 = sin(_solarhouse2_inverter_controller_c_function4__out);
    _solarhouse2_inverter_controller_alpha_beta_to_dq1__d = _solarhouse2_inverter_controller_alpha_beta_to_dq1__k2 * _solarhouse2_inverter_e_va1__out - _solarhouse2_inverter_controller_alpha_beta_to_dq1__k1 * _solarhouse2_inverter_controller_hilbert_transform__out;
    _solarhouse2_inverter_controller_alpha_beta_to_dq1__q = _solarhouse2_inverter_controller_alpha_beta_to_dq1__k1 * _solarhouse2_inverter_e_va1__out + _solarhouse2_inverter_controller_alpha_beta_to_dq1__k2 * _solarhouse2_inverter_controller_hilbert_transform__out;
    // Generated from the component: SolarHouse2.Inverter.Controller.alpha beta to dq2
    _solarhouse2_inverter_controller_alpha_beta_to_dq2__k1 = cos(_solarhouse2_inverter_controller_c_function4__out);
    _solarhouse2_inverter_controller_alpha_beta_to_dq2__k2 = sin(_solarhouse2_inverter_controller_c_function4__out);
    _solarhouse2_inverter_controller_alpha_beta_to_dq2__d = _solarhouse2_inverter_controller_alpha_beta_to_dq2__k2 * _solarhouse2_inverter_i_ia1__out - _solarhouse2_inverter_controller_alpha_beta_to_dq2__k1 * _solarhouse2_inverter_controller_hilbert_transform1__out;
    _solarhouse2_inverter_controller_alpha_beta_to_dq2__q = _solarhouse2_inverter_controller_alpha_beta_to_dq2__k1 * _solarhouse2_inverter_i_ia1__out + _solarhouse2_inverter_controller_alpha_beta_to_dq2__k2 * _solarhouse2_inverter_controller_hilbert_transform1__out;
    // Generated from the component: SolarHouse2.Inverter.S
    HIL_OutAO(0x404a, (float)_solarhouse2_inverter_power_meas_gain6__out);
    // Generated from the component: SolarHouse2.Measurement.Hilbert Transform1
    X_UnInt32 _solarhouse2_measurement_hilbert_transform1__i;
    _solarhouse2_measurement_hilbert_transform1__a_sum = 0.0f;
    _solarhouse2_measurement_hilbert_transform1__b_sum = 0.0f;
    _solarhouse2_measurement_hilbert_transform1__delay_line_in = 0.0f;
    for (_solarhouse2_measurement_hilbert_transform1__i = 0; _solarhouse2_measurement_hilbert_transform1__i < 1; _solarhouse2_measurement_hilbert_transform1__i++) {
        _solarhouse2_measurement_hilbert_transform1__b_sum += _solarhouse2_measurement_hilbert_transform1__b_coeff[_solarhouse2_measurement_hilbert_transform1__i + 1] * _solarhouse2_measurement_hilbert_transform1__states[_solarhouse2_measurement_hilbert_transform1__i];
    }
    _solarhouse2_measurement_hilbert_transform1__a_sum += _solarhouse2_measurement_hilbert_transform1__states[0] * _solarhouse2_measurement_hilbert_transform1__a_coeff[1];
    _solarhouse2_measurement_hilbert_transform1__delay_line_in = _solarhouse2_measurement_bpf_gain__out - _solarhouse2_measurement_hilbert_transform1__a_sum;
    _solarhouse2_measurement_hilbert_transform1__b_sum += _solarhouse2_measurement_hilbert_transform1__b_coeff[0] * _solarhouse2_measurement_hilbert_transform1__delay_line_in;
    _solarhouse2_measurement_hilbert_transform1__out = _solarhouse2_measurement_hilbert_transform1__b_sum;
    // Generated from the component: SolarHouse2.Measurement.Hilbert Transform
    X_UnInt32 _solarhouse2_measurement_hilbert_transform__i;
    _solarhouse2_measurement_hilbert_transform__a_sum = 0.0f;
    _solarhouse2_measurement_hilbert_transform__b_sum = 0.0f;
    _solarhouse2_measurement_hilbert_transform__delay_line_in = 0.0f;
    for (_solarhouse2_measurement_hilbert_transform__i = 0; _solarhouse2_measurement_hilbert_transform__i < 1; _solarhouse2_measurement_hilbert_transform__i++) {
        _solarhouse2_measurement_hilbert_transform__b_sum += _solarhouse2_measurement_hilbert_transform__b_coeff[_solarhouse2_measurement_hilbert_transform__i + 1] * _solarhouse2_measurement_hilbert_transform__states[_solarhouse2_measurement_hilbert_transform__i];
    }
    _solarhouse2_measurement_hilbert_transform__a_sum += _solarhouse2_measurement_hilbert_transform__states[0] * _solarhouse2_measurement_hilbert_transform__a_coeff[1];
    _solarhouse2_measurement_hilbert_transform__delay_line_in = _solarhouse2_measurement_bpf1_gain__out - _solarhouse2_measurement_hilbert_transform__a_sum;
    _solarhouse2_measurement_hilbert_transform__b_sum += _solarhouse2_measurement_hilbert_transform__b_coeff[0] * _solarhouse2_measurement_hilbert_transform__delay_line_in;
    _solarhouse2_measurement_hilbert_transform__out = _solarhouse2_measurement_hilbert_transform__b_sum;
    // Generated from the component: SolarHouse2.Measurement.Product1
    _solarhouse2_measurement_product1__out = (_solarhouse2_measurement_bpf1_gain__out * _solarhouse2_measurement_bpf_gain__out);
    // Generated from the component: SolarHouse3.Inverter.Controller.Gain22
    _solarhouse3_inverter_controller_gain22__out = 0.02 * _solarhouse3_inverter_controller_c_function1__out;
    // Generated from the component: SolarHouse3.Inverter.Controller.alpha beta to dq1
    _solarhouse3_inverter_controller_alpha_beta_to_dq1__k1 = cos(_solarhouse3_inverter_controller_c_function4__out);
    _solarhouse3_inverter_controller_alpha_beta_to_dq1__k2 = sin(_solarhouse3_inverter_controller_c_function4__out);
    _solarhouse3_inverter_controller_alpha_beta_to_dq1__d = _solarhouse3_inverter_controller_alpha_beta_to_dq1__k2 * _solarhouse3_inverter_e_va1__out - _solarhouse3_inverter_controller_alpha_beta_to_dq1__k1 * _solarhouse3_inverter_controller_hilbert_transform__out;
    _solarhouse3_inverter_controller_alpha_beta_to_dq1__q = _solarhouse3_inverter_controller_alpha_beta_to_dq1__k1 * _solarhouse3_inverter_e_va1__out + _solarhouse3_inverter_controller_alpha_beta_to_dq1__k2 * _solarhouse3_inverter_controller_hilbert_transform__out;
    // Generated from the component: SolarHouse3.Inverter.Controller.alpha beta to dq2
    _solarhouse3_inverter_controller_alpha_beta_to_dq2__k1 = cos(_solarhouse3_inverter_controller_c_function4__out);
    _solarhouse3_inverter_controller_alpha_beta_to_dq2__k2 = sin(_solarhouse3_inverter_controller_c_function4__out);
    _solarhouse3_inverter_controller_alpha_beta_to_dq2__d = _solarhouse3_inverter_controller_alpha_beta_to_dq2__k2 * _solarhouse3_inverter_i_ia1__out - _solarhouse3_inverter_controller_alpha_beta_to_dq2__k1 * _solarhouse3_inverter_controller_hilbert_transform1__out;
    _solarhouse3_inverter_controller_alpha_beta_to_dq2__q = _solarhouse3_inverter_controller_alpha_beta_to_dq2__k1 * _solarhouse3_inverter_i_ia1__out + _solarhouse3_inverter_controller_alpha_beta_to_dq2__k2 * _solarhouse3_inverter_controller_hilbert_transform1__out;
    // Generated from the component: SolarHouse3.Inverter.S
    HIL_OutAO(0x4063, (float)_solarhouse3_inverter_power_meas_gain6__out);
    // Generated from the component: SolarHouse3.Measurement.Hilbert Transform1
    X_UnInt32 _solarhouse3_measurement_hilbert_transform1__i;
    _solarhouse3_measurement_hilbert_transform1__a_sum = 0.0f;
    _solarhouse3_measurement_hilbert_transform1__b_sum = 0.0f;
    _solarhouse3_measurement_hilbert_transform1__delay_line_in = 0.0f;
    for (_solarhouse3_measurement_hilbert_transform1__i = 0; _solarhouse3_measurement_hilbert_transform1__i < 1; _solarhouse3_measurement_hilbert_transform1__i++) {
        _solarhouse3_measurement_hilbert_transform1__b_sum += _solarhouse3_measurement_hilbert_transform1__b_coeff[_solarhouse3_measurement_hilbert_transform1__i + 1] * _solarhouse3_measurement_hilbert_transform1__states[_solarhouse3_measurement_hilbert_transform1__i];
    }
    _solarhouse3_measurement_hilbert_transform1__a_sum += _solarhouse3_measurement_hilbert_transform1__states[0] * _solarhouse3_measurement_hilbert_transform1__a_coeff[1];
    _solarhouse3_measurement_hilbert_transform1__delay_line_in = _solarhouse3_measurement_bpf_gain__out - _solarhouse3_measurement_hilbert_transform1__a_sum;
    _solarhouse3_measurement_hilbert_transform1__b_sum += _solarhouse3_measurement_hilbert_transform1__b_coeff[0] * _solarhouse3_measurement_hilbert_transform1__delay_line_in;
    _solarhouse3_measurement_hilbert_transform1__out = _solarhouse3_measurement_hilbert_transform1__b_sum;
    // Generated from the component: SolarHouse3.Measurement.Hilbert Transform
    X_UnInt32 _solarhouse3_measurement_hilbert_transform__i;
    _solarhouse3_measurement_hilbert_transform__a_sum = 0.0f;
    _solarhouse3_measurement_hilbert_transform__b_sum = 0.0f;
    _solarhouse3_measurement_hilbert_transform__delay_line_in = 0.0f;
    for (_solarhouse3_measurement_hilbert_transform__i = 0; _solarhouse3_measurement_hilbert_transform__i < 1; _solarhouse3_measurement_hilbert_transform__i++) {
        _solarhouse3_measurement_hilbert_transform__b_sum += _solarhouse3_measurement_hilbert_transform__b_coeff[_solarhouse3_measurement_hilbert_transform__i + 1] * _solarhouse3_measurement_hilbert_transform__states[_solarhouse3_measurement_hilbert_transform__i];
    }
    _solarhouse3_measurement_hilbert_transform__a_sum += _solarhouse3_measurement_hilbert_transform__states[0] * _solarhouse3_measurement_hilbert_transform__a_coeff[1];
    _solarhouse3_measurement_hilbert_transform__delay_line_in = _solarhouse3_measurement_bpf1_gain__out - _solarhouse3_measurement_hilbert_transform__a_sum;
    _solarhouse3_measurement_hilbert_transform__b_sum += _solarhouse3_measurement_hilbert_transform__b_coeff[0] * _solarhouse3_measurement_hilbert_transform__delay_line_in;
    _solarhouse3_measurement_hilbert_transform__out = _solarhouse3_measurement_hilbert_transform__b_sum;
    // Generated from the component: SolarHouse3.Measurement.Product1
    _solarhouse3_measurement_product1__out = (_solarhouse3_measurement_bpf1_gain__out * _solarhouse3_measurement_bpf_gain__out);
    // Generated from the component: SolarHouse4.Inverter.Controller.Gain22
    _solarhouse4_inverter_controller_gain22__out = 0.02 * _solarhouse4_inverter_controller_c_function1__out;
    // Generated from the component: SolarHouse4.Inverter.Controller.alpha beta to dq1
    _solarhouse4_inverter_controller_alpha_beta_to_dq1__k1 = cos(_solarhouse4_inverter_controller_c_function4__out);
    _solarhouse4_inverter_controller_alpha_beta_to_dq1__k2 = sin(_solarhouse4_inverter_controller_c_function4__out);
    _solarhouse4_inverter_controller_alpha_beta_to_dq1__d = _solarhouse4_inverter_controller_alpha_beta_to_dq1__k2 * _solarhouse4_inverter_e_va1__out - _solarhouse4_inverter_controller_alpha_beta_to_dq1__k1 * _solarhouse4_inverter_controller_hilbert_transform__out;
    _solarhouse4_inverter_controller_alpha_beta_to_dq1__q = _solarhouse4_inverter_controller_alpha_beta_to_dq1__k1 * _solarhouse4_inverter_e_va1__out + _solarhouse4_inverter_controller_alpha_beta_to_dq1__k2 * _solarhouse4_inverter_controller_hilbert_transform__out;
    // Generated from the component: SolarHouse4.Inverter.Controller.alpha beta to dq2
    _solarhouse4_inverter_controller_alpha_beta_to_dq2__k1 = cos(_solarhouse4_inverter_controller_c_function4__out);
    _solarhouse4_inverter_controller_alpha_beta_to_dq2__k2 = sin(_solarhouse4_inverter_controller_c_function4__out);
    _solarhouse4_inverter_controller_alpha_beta_to_dq2__d = _solarhouse4_inverter_controller_alpha_beta_to_dq2__k2 * _solarhouse4_inverter_i_ia1__out - _solarhouse4_inverter_controller_alpha_beta_to_dq2__k1 * _solarhouse4_inverter_controller_hilbert_transform1__out;
    _solarhouse4_inverter_controller_alpha_beta_to_dq2__q = _solarhouse4_inverter_controller_alpha_beta_to_dq2__k1 * _solarhouse4_inverter_i_ia1__out + _solarhouse4_inverter_controller_alpha_beta_to_dq2__k2 * _solarhouse4_inverter_controller_hilbert_transform1__out;
    // Generated from the component: SolarHouse4.Inverter.S
    HIL_OutAO(0x407c, (float)_solarhouse4_inverter_power_meas_gain6__out);
    // Generated from the component: SolarHouse4.Measurement.Hilbert Transform1
    X_UnInt32 _solarhouse4_measurement_hilbert_transform1__i;
    _solarhouse4_measurement_hilbert_transform1__a_sum = 0.0f;
    _solarhouse4_measurement_hilbert_transform1__b_sum = 0.0f;
    _solarhouse4_measurement_hilbert_transform1__delay_line_in = 0.0f;
    for (_solarhouse4_measurement_hilbert_transform1__i = 0; _solarhouse4_measurement_hilbert_transform1__i < 1; _solarhouse4_measurement_hilbert_transform1__i++) {
        _solarhouse4_measurement_hilbert_transform1__b_sum += _solarhouse4_measurement_hilbert_transform1__b_coeff[_solarhouse4_measurement_hilbert_transform1__i + 1] * _solarhouse4_measurement_hilbert_transform1__states[_solarhouse4_measurement_hilbert_transform1__i];
    }
    _solarhouse4_measurement_hilbert_transform1__a_sum += _solarhouse4_measurement_hilbert_transform1__states[0] * _solarhouse4_measurement_hilbert_transform1__a_coeff[1];
    _solarhouse4_measurement_hilbert_transform1__delay_line_in = _solarhouse4_measurement_bpf_gain__out - _solarhouse4_measurement_hilbert_transform1__a_sum;
    _solarhouse4_measurement_hilbert_transform1__b_sum += _solarhouse4_measurement_hilbert_transform1__b_coeff[0] * _solarhouse4_measurement_hilbert_transform1__delay_line_in;
    _solarhouse4_measurement_hilbert_transform1__out = _solarhouse4_measurement_hilbert_transform1__b_sum;
    // Generated from the component: SolarHouse4.Measurement.Hilbert Transform
    X_UnInt32 _solarhouse4_measurement_hilbert_transform__i;
    _solarhouse4_measurement_hilbert_transform__a_sum = 0.0f;
    _solarhouse4_measurement_hilbert_transform__b_sum = 0.0f;
    _solarhouse4_measurement_hilbert_transform__delay_line_in = 0.0f;
    for (_solarhouse4_measurement_hilbert_transform__i = 0; _solarhouse4_measurement_hilbert_transform__i < 1; _solarhouse4_measurement_hilbert_transform__i++) {
        _solarhouse4_measurement_hilbert_transform__b_sum += _solarhouse4_measurement_hilbert_transform__b_coeff[_solarhouse4_measurement_hilbert_transform__i + 1] * _solarhouse4_measurement_hilbert_transform__states[_solarhouse4_measurement_hilbert_transform__i];
    }
    _solarhouse4_measurement_hilbert_transform__a_sum += _solarhouse4_measurement_hilbert_transform__states[0] * _solarhouse4_measurement_hilbert_transform__a_coeff[1];
    _solarhouse4_measurement_hilbert_transform__delay_line_in = _solarhouse4_measurement_bpf1_gain__out - _solarhouse4_measurement_hilbert_transform__a_sum;
    _solarhouse4_measurement_hilbert_transform__b_sum += _solarhouse4_measurement_hilbert_transform__b_coeff[0] * _solarhouse4_measurement_hilbert_transform__delay_line_in;
    _solarhouse4_measurement_hilbert_transform__out = _solarhouse4_measurement_hilbert_transform__b_sum;
    // Generated from the component: SolarHouse4.Measurement.Product1
    _solarhouse4_measurement_product1__out = (_solarhouse4_measurement_bpf1_gain__out * _solarhouse4_measurement_bpf_gain__out);
    // Generated from the component: ESS.Inverter.Controller.Gain28
    _ess_inverter_controller_gain28__out = 0.002946278254943948 * _ess_inverter_controller_alpha_beta_to_dq1__d;
    // Generated from the component: ESS.Inverter.Controller.Gain29
    _ess_inverter_controller_gain29__out = 0.002946278254943948 * _ess_inverter_controller_alpha_beta_to_dq1__q;
    // Generated from the component: ESS.Inverter.Controller.Gain30
    _ess_inverter_controller_gain30__out = 0.003394112549695428 * _ess_inverter_controller_alpha_beta_to_dq2__d;
    // Generated from the component: ESS.Inverter.Controller.Gain31
    _ess_inverter_controller_gain31__out = 0.003394112549695428 * _ess_inverter_controller_alpha_beta_to_dq2__q;
    // Generated from the component: Measurement.Product2
    _measurement_product2__out = (_measurement_hilbert_transform__out * _measurement_hilbert_transform1__out);
    // Generated from the component: SolarHouse1.Inverter.Controller.Gain28
    _solarhouse1_inverter_controller_gain28__out = 0.002946278254943948 * _solarhouse1_inverter_controller_alpha_beta_to_dq1__d;
    // Generated from the component: SolarHouse1.Inverter.Controller.Gain29
    _solarhouse1_inverter_controller_gain29__out = 0.002946278254943948 * _solarhouse1_inverter_controller_alpha_beta_to_dq1__q;
    // Generated from the component: SolarHouse1.Inverter.Controller.Gain30
    _solarhouse1_inverter_controller_gain30__out = 0.003394112549695428 * _solarhouse1_inverter_controller_alpha_beta_to_dq2__d;
    // Generated from the component: SolarHouse1.Inverter.Controller.Gain31
    _solarhouse1_inverter_controller_gain31__out = 0.003394112549695428 * _solarhouse1_inverter_controller_alpha_beta_to_dq2__q;
    // Generated from the component: SolarHouse1.Measurement.Product2
    _solarhouse1_measurement_product2__out = (_solarhouse1_measurement_hilbert_transform__out * _solarhouse1_measurement_hilbert_transform1__out);
    // Generated from the component: SolarHouse2.Inverter.Controller.Gain28
    _solarhouse2_inverter_controller_gain28__out = 0.002946278254943948 * _solarhouse2_inverter_controller_alpha_beta_to_dq1__d;
    // Generated from the component: SolarHouse2.Inverter.Controller.Gain29
    _solarhouse2_inverter_controller_gain29__out = 0.002946278254943948 * _solarhouse2_inverter_controller_alpha_beta_to_dq1__q;
    // Generated from the component: SolarHouse2.Inverter.Controller.Gain30
    _solarhouse2_inverter_controller_gain30__out = 0.003394112549695428 * _solarhouse2_inverter_controller_alpha_beta_to_dq2__d;
    // Generated from the component: SolarHouse2.Inverter.Controller.Gain31
    _solarhouse2_inverter_controller_gain31__out = 0.003394112549695428 * _solarhouse2_inverter_controller_alpha_beta_to_dq2__q;
    // Generated from the component: SolarHouse2.Measurement.Product2
    _solarhouse2_measurement_product2__out = (_solarhouse2_measurement_hilbert_transform__out * _solarhouse2_measurement_hilbert_transform1__out);
    // Generated from the component: SolarHouse3.Inverter.Controller.Gain28
    _solarhouse3_inverter_controller_gain28__out = 0.002946278254943948 * _solarhouse3_inverter_controller_alpha_beta_to_dq1__d;
    // Generated from the component: SolarHouse3.Inverter.Controller.Gain29
    _solarhouse3_inverter_controller_gain29__out = 0.002946278254943948 * _solarhouse3_inverter_controller_alpha_beta_to_dq1__q;
    // Generated from the component: SolarHouse3.Inverter.Controller.Gain30
    _solarhouse3_inverter_controller_gain30__out = 0.003394112549695428 * _solarhouse3_inverter_controller_alpha_beta_to_dq2__d;
    // Generated from the component: SolarHouse3.Inverter.Controller.Gain31
    _solarhouse3_inverter_controller_gain31__out = 0.003394112549695428 * _solarhouse3_inverter_controller_alpha_beta_to_dq2__q;
    // Generated from the component: SolarHouse3.Measurement.Product2
    _solarhouse3_measurement_product2__out = (_solarhouse3_measurement_hilbert_transform__out * _solarhouse3_measurement_hilbert_transform1__out);
    // Generated from the component: SolarHouse4.Inverter.Controller.Gain28
    _solarhouse4_inverter_controller_gain28__out = 0.002946278254943948 * _solarhouse4_inverter_controller_alpha_beta_to_dq1__d;
    // Generated from the component: SolarHouse4.Inverter.Controller.Gain29
    _solarhouse4_inverter_controller_gain29__out = 0.002946278254943948 * _solarhouse4_inverter_controller_alpha_beta_to_dq1__q;
    // Generated from the component: SolarHouse4.Inverter.Controller.Gain30
    _solarhouse4_inverter_controller_gain30__out = 0.003394112549695428 * _solarhouse4_inverter_controller_alpha_beta_to_dq2__d;
    // Generated from the component: SolarHouse4.Inverter.Controller.Gain31
    _solarhouse4_inverter_controller_gain31__out = 0.003394112549695428 * _solarhouse4_inverter_controller_alpha_beta_to_dq2__q;
    // Generated from the component: SolarHouse4.Measurement.Product2
    _solarhouse4_measurement_product2__out = (_solarhouse4_measurement_hilbert_transform__out * _solarhouse4_measurement_hilbert_transform1__out);
    // Generated from the component: ESS.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.LPF_dc2
    X_UnInt32 _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__i;
    _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__a_sum = 0.0f;
    _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__b_sum = 0.0f;
    _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__delay_line_in = 0.0f;
    for (_ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__i = 0; _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__i < 1; _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__i++) {
        _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__b_sum += _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__b_coeff[_ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__i + 1] * _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__states[_ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__i];
    }
    _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__a_sum += _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__states[0] * _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__a_coeff[1];
    _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__delay_line_in = _ess_inverter_controller_gain28__out - _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__a_sum;
    _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__b_sum += _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__b_coeff[0] * _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__delay_line_in;
    _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__out = _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__b_sum;
    // Generated from the component: ESS.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.outer power loop1.Product4
    _ess_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_product4__out = (_ess_inverter_controller_gain28__out * _ess_inverter_controller_constant5__out);
    // Generated from the component: ESS.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.outer power loop1.Product5
    _ess_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_product5__out = (_ess_inverter_controller_gain32__out * _ess_inverter_controller_gain28__out);
    // Generated from the component: ESS.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.squared_Vt2.Product1
    _ess_inverter_controller_outer_voltage_loop___inner_current_loop_squared_vt2_product1__out = (_ess_inverter_controller_gain28__out * _ess_inverter_controller_gain28__out);
    // Generated from the component: ESS.Inverter.Controller.Vd
    HIL_OutAO(0x4012, (float)_ess_inverter_controller_gain28__out);
    // Generated from the component: ESS.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.LPF_dc1
    X_UnInt32 _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__i;
    _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__a_sum = 0.0f;
    _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__b_sum = 0.0f;
    _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__delay_line_in = 0.0f;
    for (_ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__i = 0; _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__i < 1; _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__i++) {
        _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__b_sum += _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__b_coeff[_ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__i + 1] * _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__states[_ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__i];
    }
    _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__a_sum += _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__states[0] * _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__a_coeff[1];
    _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__delay_line_in = _ess_inverter_controller_gain29__out - _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__a_sum;
    _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__b_sum += _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__b_coeff[0] * _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__delay_line_in;
    _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__out = _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__b_sum;
    // Generated from the component: ESS.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.outer power loop1.Product3
    _ess_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_product3__out = (_ess_inverter_controller_gain29__out * _ess_inverter_controller_gain32__out);
    // Generated from the component: ESS.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.outer power loop1.Product6
    _ess_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_product6__out = (_ess_inverter_controller_constant5__out * _ess_inverter_controller_gain29__out);
    // Generated from the component: ESS.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.squared_Vt2.Product2
    _ess_inverter_controller_outer_voltage_loop___inner_current_loop_squared_vt2_product2__out = (_ess_inverter_controller_gain29__out * _ess_inverter_controller_gain29__out);
    // Generated from the component: ESS.Inverter.Controller.Vq
    HIL_OutAO(0x4013, (float)_ess_inverter_controller_gain29__out);
    // Generated from the component: ESS.Inverter.Controller.Id
    HIL_OutAO(0x4005, (float)_ess_inverter_controller_gain30__out);
    // Generated from the component: ESS.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Gain7
    _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_gain7__out = 0.005772569444444445 * _ess_inverter_controller_gain30__out;
    // Generated from the component: ESS.Inverter.Power_Meas.Power_Meas_DQpu.Product1
    _ess_inverter_power_meas_power_meas_dqpu_product1__out = (_ess_inverter_controller_gain28__out * _ess_inverter_controller_gain30__out);
    // Generated from the component: ESS.Inverter.Power_Meas.Power_Meas_DQpu.Product4
    _ess_inverter_power_meas_power_meas_dqpu_product4__out = (_ess_inverter_controller_gain29__out * _ess_inverter_controller_gain30__out);
    // Generated from the component: ESS.Inverter.Controller.Iq
    HIL_OutAO(0x4006, (float)_ess_inverter_controller_gain31__out);
    // Generated from the component: ESS.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Gain6
    _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_gain6__out = 0.005772569444444445 * _ess_inverter_controller_gain31__out;
    // Generated from the component: ESS.Inverter.Power_Meas.Power_Meas_DQpu.Product2
    _ess_inverter_power_meas_power_meas_dqpu_product2__out = (_ess_inverter_controller_gain29__out * _ess_inverter_controller_gain31__out);
    // Generated from the component: ESS.Inverter.Power_Meas.Power_Meas_DQpu.Product3
    _ess_inverter_power_meas_power_meas_dqpu_product3__out = (_ess_inverter_controller_gain28__out * _ess_inverter_controller_gain31__out);
    // Generated from the component: Measurement.Sum1
    _measurement_sum1__out = _measurement_product1__out + _measurement_product2__out;
    // Generated from the component: SolarHouse1.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.LPF_dc2
    X_UnInt32 _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__i;
    _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__a_sum = 0.0f;
    _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__b_sum = 0.0f;
    _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__delay_line_in = 0.0f;
    for (_solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__i = 0; _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__i < 1; _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__i++) {
        _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__b_sum += _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__b_coeff[_solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__i + 1] * _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__states[_solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__i];
    }
    _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__a_sum += _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__states[0] * _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__a_coeff[1];
    _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__delay_line_in = _solarhouse1_inverter_controller_gain28__out - _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__a_sum;
    _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__b_sum += _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__b_coeff[0] * _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__delay_line_in;
    _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__out = _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__b_sum;
    // Generated from the component: SolarHouse1.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.outer power loop1.Product4
    _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_product4__out = (_solarhouse1_inverter_controller_gain28__out * _solarhouse1_inverter_controller_constant5__out);
    // Generated from the component: SolarHouse1.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.outer power loop1.Product5
    _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_product5__out = (_solarhouse1_inverter_controller_gain32__out * _solarhouse1_inverter_controller_gain28__out);
    // Generated from the component: SolarHouse1.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.squared_Vt2.Product1
    _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_squared_vt2_product1__out = (_solarhouse1_inverter_controller_gain28__out * _solarhouse1_inverter_controller_gain28__out);
    // Generated from the component: SolarHouse1.Inverter.Controller.Vd
    HIL_OutAO(0x402c, (float)_solarhouse1_inverter_controller_gain28__out);
    // Generated from the component: SolarHouse1.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.LPF_dc1
    X_UnInt32 _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__i;
    _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__a_sum = 0.0f;
    _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__b_sum = 0.0f;
    _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__delay_line_in = 0.0f;
    for (_solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__i = 0; _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__i < 1; _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__i++) {
        _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__b_sum += _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__b_coeff[_solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__i + 1] * _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__states[_solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__i];
    }
    _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__a_sum += _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__states[0] * _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__a_coeff[1];
    _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__delay_line_in = _solarhouse1_inverter_controller_gain29__out - _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__a_sum;
    _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__b_sum += _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__b_coeff[0] * _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__delay_line_in;
    _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__out = _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__b_sum;
    // Generated from the component: SolarHouse1.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.outer power loop1.Product3
    _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_product3__out = (_solarhouse1_inverter_controller_gain29__out * _solarhouse1_inverter_controller_gain32__out);
    // Generated from the component: SolarHouse1.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.outer power loop1.Product6
    _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_product6__out = (_solarhouse1_inverter_controller_constant5__out * _solarhouse1_inverter_controller_gain29__out);
    // Generated from the component: SolarHouse1.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.squared_Vt2.Product2
    _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_squared_vt2_product2__out = (_solarhouse1_inverter_controller_gain29__out * _solarhouse1_inverter_controller_gain29__out);
    // Generated from the component: SolarHouse1.Inverter.Controller.Vq
    HIL_OutAO(0x402d, (float)_solarhouse1_inverter_controller_gain29__out);
    // Generated from the component: SolarHouse1.Inverter.Controller.Id
    HIL_OutAO(0x401f, (float)_solarhouse1_inverter_controller_gain30__out);
    // Generated from the component: SolarHouse1.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Gain7
    _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_gain7__out = 0.005772569444444445 * _solarhouse1_inverter_controller_gain30__out;
    // Generated from the component: SolarHouse1.Inverter.Power_Meas.Power_Meas_DQpu.Product1
    _solarhouse1_inverter_power_meas_power_meas_dqpu_product1__out = (_solarhouse1_inverter_controller_gain28__out * _solarhouse1_inverter_controller_gain30__out);
    // Generated from the component: SolarHouse1.Inverter.Power_Meas.Power_Meas_DQpu.Product4
    _solarhouse1_inverter_power_meas_power_meas_dqpu_product4__out = (_solarhouse1_inverter_controller_gain29__out * _solarhouse1_inverter_controller_gain30__out);
    // Generated from the component: SolarHouse1.Inverter.Controller.Iq
    HIL_OutAO(0x4020, (float)_solarhouse1_inverter_controller_gain31__out);
    // Generated from the component: SolarHouse1.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Gain6
    _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_gain6__out = 0.005772569444444445 * _solarhouse1_inverter_controller_gain31__out;
    // Generated from the component: SolarHouse1.Inverter.Power_Meas.Power_Meas_DQpu.Product2
    _solarhouse1_inverter_power_meas_power_meas_dqpu_product2__out = (_solarhouse1_inverter_controller_gain29__out * _solarhouse1_inverter_controller_gain31__out);
    // Generated from the component: SolarHouse1.Inverter.Power_Meas.Power_Meas_DQpu.Product3
    _solarhouse1_inverter_power_meas_power_meas_dqpu_product3__out = (_solarhouse1_inverter_controller_gain28__out * _solarhouse1_inverter_controller_gain31__out);
    // Generated from the component: SolarHouse1.Measurement.Sum1
    _solarhouse1_measurement_sum1__out = _solarhouse1_measurement_product1__out + _solarhouse1_measurement_product2__out;
    // Generated from the component: SolarHouse2.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.LPF_dc2
    X_UnInt32 _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__i;
    _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__a_sum = 0.0f;
    _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__b_sum = 0.0f;
    _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__delay_line_in = 0.0f;
    for (_solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__i = 0; _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__i < 1; _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__i++) {
        _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__b_sum += _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__b_coeff[_solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__i + 1] * _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__states[_solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__i];
    }
    _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__a_sum += _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__states[0] * _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__a_coeff[1];
    _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__delay_line_in = _solarhouse2_inverter_controller_gain28__out - _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__a_sum;
    _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__b_sum += _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__b_coeff[0] * _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__delay_line_in;
    _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__out = _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__b_sum;
    // Generated from the component: SolarHouse2.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.outer power loop1.Product4
    _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_product4__out = (_solarhouse2_inverter_controller_gain28__out * _solarhouse2_inverter_controller_constant5__out);
    // Generated from the component: SolarHouse2.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.outer power loop1.Product5
    _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_product5__out = (_solarhouse2_inverter_controller_gain32__out * _solarhouse2_inverter_controller_gain28__out);
    // Generated from the component: SolarHouse2.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.squared_Vt2.Product1
    _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_squared_vt2_product1__out = (_solarhouse2_inverter_controller_gain28__out * _solarhouse2_inverter_controller_gain28__out);
    // Generated from the component: SolarHouse2.Inverter.Controller.Vd
    HIL_OutAO(0x4045, (float)_solarhouse2_inverter_controller_gain28__out);
    // Generated from the component: SolarHouse2.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.LPF_dc1
    X_UnInt32 _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__i;
    _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__a_sum = 0.0f;
    _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__b_sum = 0.0f;
    _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__delay_line_in = 0.0f;
    for (_solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__i = 0; _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__i < 1; _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__i++) {
        _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__b_sum += _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__b_coeff[_solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__i + 1] * _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__states[_solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__i];
    }
    _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__a_sum += _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__states[0] * _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__a_coeff[1];
    _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__delay_line_in = _solarhouse2_inverter_controller_gain29__out - _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__a_sum;
    _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__b_sum += _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__b_coeff[0] * _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__delay_line_in;
    _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__out = _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__b_sum;
    // Generated from the component: SolarHouse2.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.outer power loop1.Product3
    _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_product3__out = (_solarhouse2_inverter_controller_gain29__out * _solarhouse2_inverter_controller_gain32__out);
    // Generated from the component: SolarHouse2.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.outer power loop1.Product6
    _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_product6__out = (_solarhouse2_inverter_controller_constant5__out * _solarhouse2_inverter_controller_gain29__out);
    // Generated from the component: SolarHouse2.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.squared_Vt2.Product2
    _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_squared_vt2_product2__out = (_solarhouse2_inverter_controller_gain29__out * _solarhouse2_inverter_controller_gain29__out);
    // Generated from the component: SolarHouse2.Inverter.Controller.Vq
    HIL_OutAO(0x4046, (float)_solarhouse2_inverter_controller_gain29__out);
    // Generated from the component: SolarHouse2.Inverter.Controller.Id
    HIL_OutAO(0x4038, (float)_solarhouse2_inverter_controller_gain30__out);
    // Generated from the component: SolarHouse2.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Gain7
    _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_gain7__out = 0.005772569444444445 * _solarhouse2_inverter_controller_gain30__out;
    // Generated from the component: SolarHouse2.Inverter.Power_Meas.Power_Meas_DQpu.Product1
    _solarhouse2_inverter_power_meas_power_meas_dqpu_product1__out = (_solarhouse2_inverter_controller_gain28__out * _solarhouse2_inverter_controller_gain30__out);
    // Generated from the component: SolarHouse2.Inverter.Power_Meas.Power_Meas_DQpu.Product4
    _solarhouse2_inverter_power_meas_power_meas_dqpu_product4__out = (_solarhouse2_inverter_controller_gain29__out * _solarhouse2_inverter_controller_gain30__out);
    // Generated from the component: SolarHouse2.Inverter.Controller.Iq
    HIL_OutAO(0x4039, (float)_solarhouse2_inverter_controller_gain31__out);
    // Generated from the component: SolarHouse2.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Gain6
    _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_gain6__out = 0.005772569444444445 * _solarhouse2_inverter_controller_gain31__out;
    // Generated from the component: SolarHouse2.Inverter.Power_Meas.Power_Meas_DQpu.Product2
    _solarhouse2_inverter_power_meas_power_meas_dqpu_product2__out = (_solarhouse2_inverter_controller_gain29__out * _solarhouse2_inverter_controller_gain31__out);
    // Generated from the component: SolarHouse2.Inverter.Power_Meas.Power_Meas_DQpu.Product3
    _solarhouse2_inverter_power_meas_power_meas_dqpu_product3__out = (_solarhouse2_inverter_controller_gain28__out * _solarhouse2_inverter_controller_gain31__out);
    // Generated from the component: SolarHouse2.Measurement.Sum1
    _solarhouse2_measurement_sum1__out = _solarhouse2_measurement_product1__out + _solarhouse2_measurement_product2__out;
    // Generated from the component: SolarHouse3.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.LPF_dc2
    X_UnInt32 _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__i;
    _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__a_sum = 0.0f;
    _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__b_sum = 0.0f;
    _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__delay_line_in = 0.0f;
    for (_solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__i = 0; _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__i < 1; _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__i++) {
        _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__b_sum += _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__b_coeff[_solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__i + 1] * _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__states[_solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__i];
    }
    _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__a_sum += _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__states[0] * _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__a_coeff[1];
    _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__delay_line_in = _solarhouse3_inverter_controller_gain28__out - _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__a_sum;
    _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__b_sum += _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__b_coeff[0] * _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__delay_line_in;
    _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__out = _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__b_sum;
    // Generated from the component: SolarHouse3.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.outer power loop1.Product4
    _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_product4__out = (_solarhouse3_inverter_controller_gain28__out * _solarhouse3_inverter_controller_constant5__out);
    // Generated from the component: SolarHouse3.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.outer power loop1.Product5
    _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_product5__out = (_solarhouse3_inverter_controller_gain32__out * _solarhouse3_inverter_controller_gain28__out);
    // Generated from the component: SolarHouse3.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.squared_Vt2.Product1
    _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_squared_vt2_product1__out = (_solarhouse3_inverter_controller_gain28__out * _solarhouse3_inverter_controller_gain28__out);
    // Generated from the component: SolarHouse3.Inverter.Controller.Vd
    HIL_OutAO(0x405e, (float)_solarhouse3_inverter_controller_gain28__out);
    // Generated from the component: SolarHouse3.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.LPF_dc1
    X_UnInt32 _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__i;
    _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__a_sum = 0.0f;
    _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__b_sum = 0.0f;
    _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__delay_line_in = 0.0f;
    for (_solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__i = 0; _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__i < 1; _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__i++) {
        _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__b_sum += _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__b_coeff[_solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__i + 1] * _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__states[_solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__i];
    }
    _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__a_sum += _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__states[0] * _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__a_coeff[1];
    _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__delay_line_in = _solarhouse3_inverter_controller_gain29__out - _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__a_sum;
    _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__b_sum += _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__b_coeff[0] * _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__delay_line_in;
    _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__out = _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__b_sum;
    // Generated from the component: SolarHouse3.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.outer power loop1.Product3
    _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_product3__out = (_solarhouse3_inverter_controller_gain29__out * _solarhouse3_inverter_controller_gain32__out);
    // Generated from the component: SolarHouse3.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.outer power loop1.Product6
    _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_product6__out = (_solarhouse3_inverter_controller_constant5__out * _solarhouse3_inverter_controller_gain29__out);
    // Generated from the component: SolarHouse3.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.squared_Vt2.Product2
    _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_squared_vt2_product2__out = (_solarhouse3_inverter_controller_gain29__out * _solarhouse3_inverter_controller_gain29__out);
    // Generated from the component: SolarHouse3.Inverter.Controller.Vq
    HIL_OutAO(0x405f, (float)_solarhouse3_inverter_controller_gain29__out);
    // Generated from the component: SolarHouse3.Inverter.Controller.Id
    HIL_OutAO(0x4051, (float)_solarhouse3_inverter_controller_gain30__out);
    // Generated from the component: SolarHouse3.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Gain7
    _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_gain7__out = 0.005772569444444445 * _solarhouse3_inverter_controller_gain30__out;
    // Generated from the component: SolarHouse3.Inverter.Power_Meas.Power_Meas_DQpu.Product1
    _solarhouse3_inverter_power_meas_power_meas_dqpu_product1__out = (_solarhouse3_inverter_controller_gain28__out * _solarhouse3_inverter_controller_gain30__out);
    // Generated from the component: SolarHouse3.Inverter.Power_Meas.Power_Meas_DQpu.Product4
    _solarhouse3_inverter_power_meas_power_meas_dqpu_product4__out = (_solarhouse3_inverter_controller_gain29__out * _solarhouse3_inverter_controller_gain30__out);
    // Generated from the component: SolarHouse3.Inverter.Controller.Iq
    HIL_OutAO(0x4052, (float)_solarhouse3_inverter_controller_gain31__out);
    // Generated from the component: SolarHouse3.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Gain6
    _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_gain6__out = 0.005772569444444445 * _solarhouse3_inverter_controller_gain31__out;
    // Generated from the component: SolarHouse3.Inverter.Power_Meas.Power_Meas_DQpu.Product2
    _solarhouse3_inverter_power_meas_power_meas_dqpu_product2__out = (_solarhouse3_inverter_controller_gain29__out * _solarhouse3_inverter_controller_gain31__out);
    // Generated from the component: SolarHouse3.Inverter.Power_Meas.Power_Meas_DQpu.Product3
    _solarhouse3_inverter_power_meas_power_meas_dqpu_product3__out = (_solarhouse3_inverter_controller_gain28__out * _solarhouse3_inverter_controller_gain31__out);
    // Generated from the component: SolarHouse3.Measurement.Sum1
    _solarhouse3_measurement_sum1__out = _solarhouse3_measurement_product1__out + _solarhouse3_measurement_product2__out;
    // Generated from the component: SolarHouse4.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.LPF_dc2
    X_UnInt32 _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__i;
    _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__a_sum = 0.0f;
    _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__b_sum = 0.0f;
    _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__delay_line_in = 0.0f;
    for (_solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__i = 0; _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__i < 1; _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__i++) {
        _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__b_sum += _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__b_coeff[_solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__i + 1] * _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__states[_solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__i];
    }
    _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__a_sum += _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__states[0] * _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__a_coeff[1];
    _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__delay_line_in = _solarhouse4_inverter_controller_gain28__out - _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__a_sum;
    _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__b_sum += _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__b_coeff[0] * _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__delay_line_in;
    _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__out = _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__b_sum;
    // Generated from the component: SolarHouse4.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.outer power loop1.Product4
    _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_product4__out = (_solarhouse4_inverter_controller_gain28__out * _solarhouse4_inverter_controller_constant5__out);
    // Generated from the component: SolarHouse4.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.outer power loop1.Product5
    _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_product5__out = (_solarhouse4_inverter_controller_gain32__out * _solarhouse4_inverter_controller_gain28__out);
    // Generated from the component: SolarHouse4.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.squared_Vt2.Product1
    _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_squared_vt2_product1__out = (_solarhouse4_inverter_controller_gain28__out * _solarhouse4_inverter_controller_gain28__out);
    // Generated from the component: SolarHouse4.Inverter.Controller.Vd
    HIL_OutAO(0x4077, (float)_solarhouse4_inverter_controller_gain28__out);
    // Generated from the component: SolarHouse4.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.LPF_dc1
    X_UnInt32 _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__i;
    _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__a_sum = 0.0f;
    _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__b_sum = 0.0f;
    _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__delay_line_in = 0.0f;
    for (_solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__i = 0; _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__i < 1; _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__i++) {
        _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__b_sum += _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__b_coeff[_solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__i + 1] * _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__states[_solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__i];
    }
    _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__a_sum += _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__states[0] * _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__a_coeff[1];
    _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__delay_line_in = _solarhouse4_inverter_controller_gain29__out - _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__a_sum;
    _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__b_sum += _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__b_coeff[0] * _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__delay_line_in;
    _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__out = _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__b_sum;
    // Generated from the component: SolarHouse4.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.outer power loop1.Product3
    _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_product3__out = (_solarhouse4_inverter_controller_gain29__out * _solarhouse4_inverter_controller_gain32__out);
    // Generated from the component: SolarHouse4.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.outer power loop1.Product6
    _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_product6__out = (_solarhouse4_inverter_controller_constant5__out * _solarhouse4_inverter_controller_gain29__out);
    // Generated from the component: SolarHouse4.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.squared_Vt2.Product2
    _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_squared_vt2_product2__out = (_solarhouse4_inverter_controller_gain29__out * _solarhouse4_inverter_controller_gain29__out);
    // Generated from the component: SolarHouse4.Inverter.Controller.Vq
    HIL_OutAO(0x4078, (float)_solarhouse4_inverter_controller_gain29__out);
    // Generated from the component: SolarHouse4.Inverter.Controller.Id
    HIL_OutAO(0x406a, (float)_solarhouse4_inverter_controller_gain30__out);
    // Generated from the component: SolarHouse4.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Gain7
    _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_gain7__out = 0.005772569444444445 * _solarhouse4_inverter_controller_gain30__out;
    // Generated from the component: SolarHouse4.Inverter.Power_Meas.Power_Meas_DQpu.Product1
    _solarhouse4_inverter_power_meas_power_meas_dqpu_product1__out = (_solarhouse4_inverter_controller_gain28__out * _solarhouse4_inverter_controller_gain30__out);
    // Generated from the component: SolarHouse4.Inverter.Power_Meas.Power_Meas_DQpu.Product4
    _solarhouse4_inverter_power_meas_power_meas_dqpu_product4__out = (_solarhouse4_inverter_controller_gain29__out * _solarhouse4_inverter_controller_gain30__out);
    // Generated from the component: SolarHouse4.Inverter.Controller.Iq
    HIL_OutAO(0x406b, (float)_solarhouse4_inverter_controller_gain31__out);
    // Generated from the component: SolarHouse4.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Gain6
    _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_gain6__out = 0.005772569444444445 * _solarhouse4_inverter_controller_gain31__out;
    // Generated from the component: SolarHouse4.Inverter.Power_Meas.Power_Meas_DQpu.Product2
    _solarhouse4_inverter_power_meas_power_meas_dqpu_product2__out = (_solarhouse4_inverter_controller_gain29__out * _solarhouse4_inverter_controller_gain31__out);
    // Generated from the component: SolarHouse4.Inverter.Power_Meas.Power_Meas_DQpu.Product3
    _solarhouse4_inverter_power_meas_power_meas_dqpu_product3__out = (_solarhouse4_inverter_controller_gain28__out * _solarhouse4_inverter_controller_gain31__out);
    // Generated from the component: SolarHouse4.Measurement.Sum1
    _solarhouse4_measurement_sum1__out = _solarhouse4_measurement_product1__out + _solarhouse4_measurement_product2__out;
    // Generated from the component: ESS.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.outer power loop1.Sum3
    _ess_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_sum3__out = _ess_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_product3__out - _ess_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_product4__out;
    // Generated from the component: ESS.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.outer power loop1.Sum4
    _ess_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_sum4__out = _ess_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_product5__out + _ess_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_product6__out;
    // Generated from the component: ESS.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.squared_Vt2.Sum3
    _ess_inverter_controller_outer_voltage_loop___inner_current_loop_squared_vt2_sum3__out = _ess_inverter_controller_outer_voltage_loop___inner_current_loop_squared_vt2_product1__out + _ess_inverter_controller_outer_voltage_loop___inner_current_loop_squared_vt2_product2__out;
    // Generated from the component: ESS.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Product2
    _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_product2__out = (_ess_inverter_controller_constant6__out * _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_gain7__out);
    // Generated from the component: ESS.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Product1
    _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_product1__out = (_ess_inverter_controller_constant6__out * _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_gain6__out);
    // Generated from the component: ESS.Inverter.Power_Meas.Power_Meas_DQpu.Sum1
    _ess_inverter_power_meas_power_meas_dqpu_sum1__out = _ess_inverter_power_meas_power_meas_dqpu_product1__out + _ess_inverter_power_meas_power_meas_dqpu_product2__out;
    // Generated from the component: ESS.Inverter.Power_Meas.Power_Meas_DQpu.Sum2
    _ess_inverter_power_meas_power_meas_dqpu_sum2__out = _ess_inverter_power_meas_power_meas_dqpu_product4__out - _ess_inverter_power_meas_power_meas_dqpu_product3__out;
    // Generated from the component: Measurement.Gain1
    _measurement_gain1__out = 0.5 * _measurement_sum1__out;
    // Generated from the component: SolarHouse1.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.outer power loop1.Sum3
    _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_sum3__out = _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_product3__out - _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_product4__out;
    // Generated from the component: SolarHouse1.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.outer power loop1.Sum4
    _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_sum4__out = _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_product5__out + _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_product6__out;
    // Generated from the component: SolarHouse1.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.squared_Vt2.Sum3
    _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_squared_vt2_sum3__out = _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_squared_vt2_product1__out + _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_squared_vt2_product2__out;
    // Generated from the component: SolarHouse1.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Product2
    _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_product2__out = (_solarhouse1_inverter_controller_constant6__out * _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_gain7__out);
    // Generated from the component: SolarHouse1.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Product1
    _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_product1__out = (_solarhouse1_inverter_controller_constant6__out * _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_gain6__out);
    // Generated from the component: SolarHouse1.Inverter.Power_Meas.Power_Meas_DQpu.Sum1
    _solarhouse1_inverter_power_meas_power_meas_dqpu_sum1__out = _solarhouse1_inverter_power_meas_power_meas_dqpu_product1__out + _solarhouse1_inverter_power_meas_power_meas_dqpu_product2__out;
    // Generated from the component: SolarHouse1.Inverter.Power_Meas.Power_Meas_DQpu.Sum2
    _solarhouse1_inverter_power_meas_power_meas_dqpu_sum2__out = _solarhouse1_inverter_power_meas_power_meas_dqpu_product4__out - _solarhouse1_inverter_power_meas_power_meas_dqpu_product3__out;
    // Generated from the component: SolarHouse1.Measurement.Gain1
    _solarhouse1_measurement_gain1__out = 0.5 * _solarhouse1_measurement_sum1__out;
    // Generated from the component: SolarHouse2.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.outer power loop1.Sum3
    _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_sum3__out = _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_product3__out - _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_product4__out;
    // Generated from the component: SolarHouse2.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.outer power loop1.Sum4
    _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_sum4__out = _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_product5__out + _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_product6__out;
    // Generated from the component: SolarHouse2.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.squared_Vt2.Sum3
    _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_squared_vt2_sum3__out = _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_squared_vt2_product1__out + _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_squared_vt2_product2__out;
    // Generated from the component: SolarHouse2.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Product2
    _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_product2__out = (_solarhouse2_inverter_controller_constant6__out * _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_gain7__out);
    // Generated from the component: SolarHouse2.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Product1
    _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_product1__out = (_solarhouse2_inverter_controller_constant6__out * _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_gain6__out);
    // Generated from the component: SolarHouse2.Inverter.Power_Meas.Power_Meas_DQpu.Sum1
    _solarhouse2_inverter_power_meas_power_meas_dqpu_sum1__out = _solarhouse2_inverter_power_meas_power_meas_dqpu_product1__out + _solarhouse2_inverter_power_meas_power_meas_dqpu_product2__out;
    // Generated from the component: SolarHouse2.Inverter.Power_Meas.Power_Meas_DQpu.Sum2
    _solarhouse2_inverter_power_meas_power_meas_dqpu_sum2__out = _solarhouse2_inverter_power_meas_power_meas_dqpu_product4__out - _solarhouse2_inverter_power_meas_power_meas_dqpu_product3__out;
    // Generated from the component: SolarHouse2.Measurement.Gain1
    _solarhouse2_measurement_gain1__out = 0.5 * _solarhouse2_measurement_sum1__out;
    // Generated from the component: SolarHouse3.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.outer power loop1.Sum3
    _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_sum3__out = _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_product3__out - _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_product4__out;
    // Generated from the component: SolarHouse3.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.outer power loop1.Sum4
    _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_sum4__out = _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_product5__out + _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_product6__out;
    // Generated from the component: SolarHouse3.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.squared_Vt2.Sum3
    _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_squared_vt2_sum3__out = _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_squared_vt2_product1__out + _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_squared_vt2_product2__out;
    // Generated from the component: SolarHouse3.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Product2
    _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_product2__out = (_solarhouse3_inverter_controller_constant6__out * _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_gain7__out);
    // Generated from the component: SolarHouse3.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Product1
    _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_product1__out = (_solarhouse3_inverter_controller_constant6__out * _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_gain6__out);
    // Generated from the component: SolarHouse3.Inverter.Power_Meas.Power_Meas_DQpu.Sum1
    _solarhouse3_inverter_power_meas_power_meas_dqpu_sum1__out = _solarhouse3_inverter_power_meas_power_meas_dqpu_product1__out + _solarhouse3_inverter_power_meas_power_meas_dqpu_product2__out;
    // Generated from the component: SolarHouse3.Inverter.Power_Meas.Power_Meas_DQpu.Sum2
    _solarhouse3_inverter_power_meas_power_meas_dqpu_sum2__out = _solarhouse3_inverter_power_meas_power_meas_dqpu_product4__out - _solarhouse3_inverter_power_meas_power_meas_dqpu_product3__out;
    // Generated from the component: SolarHouse3.Measurement.Gain1
    _solarhouse3_measurement_gain1__out = 0.5 * _solarhouse3_measurement_sum1__out;
    // Generated from the component: SolarHouse4.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.outer power loop1.Sum3
    _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_sum3__out = _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_product3__out - _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_product4__out;
    // Generated from the component: SolarHouse4.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.outer power loop1.Sum4
    _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_sum4__out = _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_product5__out + _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_product6__out;
    // Generated from the component: SolarHouse4.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.squared_Vt2.Sum3
    _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_squared_vt2_sum3__out = _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_squared_vt2_product1__out + _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_squared_vt2_product2__out;
    // Generated from the component: SolarHouse4.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Product2
    _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_product2__out = (_solarhouse4_inverter_controller_constant6__out * _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_gain7__out);
    // Generated from the component: SolarHouse4.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Product1
    _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_product1__out = (_solarhouse4_inverter_controller_constant6__out * _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_gain6__out);
    // Generated from the component: SolarHouse4.Inverter.Power_Meas.Power_Meas_DQpu.Sum1
    _solarhouse4_inverter_power_meas_power_meas_dqpu_sum1__out = _solarhouse4_inverter_power_meas_power_meas_dqpu_product1__out + _solarhouse4_inverter_power_meas_power_meas_dqpu_product2__out;
    // Generated from the component: SolarHouse4.Inverter.Power_Meas.Power_Meas_DQpu.Sum2
    _solarhouse4_inverter_power_meas_power_meas_dqpu_sum2__out = _solarhouse4_inverter_power_meas_power_meas_dqpu_product4__out - _solarhouse4_inverter_power_meas_power_meas_dqpu_product3__out;
    // Generated from the component: SolarHouse4.Measurement.Gain1
    _solarhouse4_measurement_gain1__out = 0.5 * _solarhouse4_measurement_sum1__out;
    // Generated from the component: ESS.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.Edq_sq
    HIL_OutAO(0x4007, (float)_ess_inverter_controller_outer_voltage_loop___inner_current_loop_squared_vt2_sum3__out);
    // Generated from the component: ESS.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.outer power loop1.Comparator1
    if (_ess_inverter_controller_outer_voltage_loop___inner_current_loop_squared_vt2_sum3__out < _ess_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_limit_zero__out) {
        _ess_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_comparator1__out = 0;
    } else if (_ess_inverter_controller_outer_voltage_loop___inner_current_loop_squared_vt2_sum3__out > _ess_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_limit_zero__out) {
        _ess_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_comparator1__out = 1;
    } else {
        _ess_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_comparator1__out = _ess_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_comparator1__state;
    }
    // Generated from the component: ESS.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Sum6
    _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum6__out = _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__out + _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_product2__out;
    // Generated from the component: ESS.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Sum5
    _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum5__out = _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__out - _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_product1__out;
    // Generated from the component: ESS.Inverter.Power_Meas.Power_Meas_DQpu.LPF_P
    X_UnInt32 _ess_inverter_power_meas_power_meas_dqpu_lpf_p__i;
    _ess_inverter_power_meas_power_meas_dqpu_lpf_p__a_sum = 0.0f;
    _ess_inverter_power_meas_power_meas_dqpu_lpf_p__b_sum = 0.0f;
    _ess_inverter_power_meas_power_meas_dqpu_lpf_p__delay_line_in = 0.0f;
    for (_ess_inverter_power_meas_power_meas_dqpu_lpf_p__i = 0; _ess_inverter_power_meas_power_meas_dqpu_lpf_p__i < 1; _ess_inverter_power_meas_power_meas_dqpu_lpf_p__i++) {
        _ess_inverter_power_meas_power_meas_dqpu_lpf_p__b_sum += _ess_inverter_power_meas_power_meas_dqpu_lpf_p__b_coeff[_ess_inverter_power_meas_power_meas_dqpu_lpf_p__i + 1] * _ess_inverter_power_meas_power_meas_dqpu_lpf_p__states[_ess_inverter_power_meas_power_meas_dqpu_lpf_p__i];
    }
    _ess_inverter_power_meas_power_meas_dqpu_lpf_p__a_sum += _ess_inverter_power_meas_power_meas_dqpu_lpf_p__states[0] * _ess_inverter_power_meas_power_meas_dqpu_lpf_p__a_coeff[1];
    _ess_inverter_power_meas_power_meas_dqpu_lpf_p__delay_line_in = _ess_inverter_power_meas_power_meas_dqpu_sum1__out - _ess_inverter_power_meas_power_meas_dqpu_lpf_p__a_sum;
    _ess_inverter_power_meas_power_meas_dqpu_lpf_p__b_sum += _ess_inverter_power_meas_power_meas_dqpu_lpf_p__b_coeff[0] * _ess_inverter_power_meas_power_meas_dqpu_lpf_p__delay_line_in;
    _ess_inverter_power_meas_power_meas_dqpu_lpf_p__out = _ess_inverter_power_meas_power_meas_dqpu_lpf_p__b_sum;
    // Generated from the component: ESS.Inverter.Power_Meas.Power_Meas_DQpu.LPF_Q
    X_UnInt32 _ess_inverter_power_meas_power_meas_dqpu_lpf_q__i;
    _ess_inverter_power_meas_power_meas_dqpu_lpf_q__a_sum = 0.0f;
    _ess_inverter_power_meas_power_meas_dqpu_lpf_q__b_sum = 0.0f;
    _ess_inverter_power_meas_power_meas_dqpu_lpf_q__delay_line_in = 0.0f;
    for (_ess_inverter_power_meas_power_meas_dqpu_lpf_q__i = 0; _ess_inverter_power_meas_power_meas_dqpu_lpf_q__i < 1; _ess_inverter_power_meas_power_meas_dqpu_lpf_q__i++) {
        _ess_inverter_power_meas_power_meas_dqpu_lpf_q__b_sum += _ess_inverter_power_meas_power_meas_dqpu_lpf_q__b_coeff[_ess_inverter_power_meas_power_meas_dqpu_lpf_q__i + 1] * _ess_inverter_power_meas_power_meas_dqpu_lpf_q__states[_ess_inverter_power_meas_power_meas_dqpu_lpf_q__i];
    }
    _ess_inverter_power_meas_power_meas_dqpu_lpf_q__a_sum += _ess_inverter_power_meas_power_meas_dqpu_lpf_q__states[0] * _ess_inverter_power_meas_power_meas_dqpu_lpf_q__a_coeff[1];
    _ess_inverter_power_meas_power_meas_dqpu_lpf_q__delay_line_in = _ess_inverter_power_meas_power_meas_dqpu_sum2__out - _ess_inverter_power_meas_power_meas_dqpu_lpf_q__a_sum;
    _ess_inverter_power_meas_power_meas_dqpu_lpf_q__b_sum += _ess_inverter_power_meas_power_meas_dqpu_lpf_q__b_coeff[0] * _ess_inverter_power_meas_power_meas_dqpu_lpf_q__delay_line_in;
    _ess_inverter_power_meas_power_meas_dqpu_lpf_q__out = _ess_inverter_power_meas_power_meas_dqpu_lpf_q__b_sum;
    // Generated from the component: Measurement.LPF_P
    X_UnInt32 _measurement_lpf_p__i;
    _measurement_lpf_p__a_sum = 0.0f;
    _measurement_lpf_p__b_sum = 0.0f;
    _measurement_lpf_p__delay_line_in = 0.0f;
    for (_measurement_lpf_p__i = 0; _measurement_lpf_p__i < 1; _measurement_lpf_p__i++) {
        _measurement_lpf_p__b_sum += _measurement_lpf_p__b_coeff[_measurement_lpf_p__i + 1] * _measurement_lpf_p__states[_measurement_lpf_p__i];
    }
    _measurement_lpf_p__a_sum += _measurement_lpf_p__states[0] * _measurement_lpf_p__a_coeff[1];
    _measurement_lpf_p__delay_line_in = _measurement_gain1__out - _measurement_lpf_p__a_sum;
    _measurement_lpf_p__b_sum += _measurement_lpf_p__b_coeff[0] * _measurement_lpf_p__delay_line_in;
    _measurement_lpf_p__out = _measurement_lpf_p__b_sum;
    // Generated from the component: SolarHouse1.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.Edq_sq
    HIL_OutAO(0x4021, (float)_solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_squared_vt2_sum3__out);
    // Generated from the component: SolarHouse1.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.outer power loop1.Comparator1
    if (_solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_squared_vt2_sum3__out < _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_limit_zero__out) {
        _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_comparator1__out = 0;
    } else if (_solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_squared_vt2_sum3__out > _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_limit_zero__out) {
        _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_comparator1__out = 1;
    } else {
        _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_comparator1__out = _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_comparator1__state;
    }
    // Generated from the component: SolarHouse1.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Sum6
    _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum6__out = _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__out + _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_product2__out;
    // Generated from the component: SolarHouse1.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Sum5
    _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum5__out = _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__out - _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_product1__out;
    // Generated from the component: SolarHouse1.Inverter.Power_Meas.Power_Meas_DQpu.LPF_P
    X_UnInt32 _solarhouse1_inverter_power_meas_power_meas_dqpu_lpf_p__i;
    _solarhouse1_inverter_power_meas_power_meas_dqpu_lpf_p__a_sum = 0.0f;
    _solarhouse1_inverter_power_meas_power_meas_dqpu_lpf_p__b_sum = 0.0f;
    _solarhouse1_inverter_power_meas_power_meas_dqpu_lpf_p__delay_line_in = 0.0f;
    for (_solarhouse1_inverter_power_meas_power_meas_dqpu_lpf_p__i = 0; _solarhouse1_inverter_power_meas_power_meas_dqpu_lpf_p__i < 1; _solarhouse1_inverter_power_meas_power_meas_dqpu_lpf_p__i++) {
        _solarhouse1_inverter_power_meas_power_meas_dqpu_lpf_p__b_sum += _solarhouse1_inverter_power_meas_power_meas_dqpu_lpf_p__b_coeff[_solarhouse1_inverter_power_meas_power_meas_dqpu_lpf_p__i + 1] * _solarhouse1_inverter_power_meas_power_meas_dqpu_lpf_p__states[_solarhouse1_inverter_power_meas_power_meas_dqpu_lpf_p__i];
    }
    _solarhouse1_inverter_power_meas_power_meas_dqpu_lpf_p__a_sum += _solarhouse1_inverter_power_meas_power_meas_dqpu_lpf_p__states[0] * _solarhouse1_inverter_power_meas_power_meas_dqpu_lpf_p__a_coeff[1];
    _solarhouse1_inverter_power_meas_power_meas_dqpu_lpf_p__delay_line_in = _solarhouse1_inverter_power_meas_power_meas_dqpu_sum1__out - _solarhouse1_inverter_power_meas_power_meas_dqpu_lpf_p__a_sum;
    _solarhouse1_inverter_power_meas_power_meas_dqpu_lpf_p__b_sum += _solarhouse1_inverter_power_meas_power_meas_dqpu_lpf_p__b_coeff[0] * _solarhouse1_inverter_power_meas_power_meas_dqpu_lpf_p__delay_line_in;
    _solarhouse1_inverter_power_meas_power_meas_dqpu_lpf_p__out = _solarhouse1_inverter_power_meas_power_meas_dqpu_lpf_p__b_sum;
    // Generated from the component: SolarHouse1.Inverter.Power_Meas.Power_Meas_DQpu.LPF_Q
    X_UnInt32 _solarhouse1_inverter_power_meas_power_meas_dqpu_lpf_q__i;
    _solarhouse1_inverter_power_meas_power_meas_dqpu_lpf_q__a_sum = 0.0f;
    _solarhouse1_inverter_power_meas_power_meas_dqpu_lpf_q__b_sum = 0.0f;
    _solarhouse1_inverter_power_meas_power_meas_dqpu_lpf_q__delay_line_in = 0.0f;
    for (_solarhouse1_inverter_power_meas_power_meas_dqpu_lpf_q__i = 0; _solarhouse1_inverter_power_meas_power_meas_dqpu_lpf_q__i < 1; _solarhouse1_inverter_power_meas_power_meas_dqpu_lpf_q__i++) {
        _solarhouse1_inverter_power_meas_power_meas_dqpu_lpf_q__b_sum += _solarhouse1_inverter_power_meas_power_meas_dqpu_lpf_q__b_coeff[_solarhouse1_inverter_power_meas_power_meas_dqpu_lpf_q__i + 1] * _solarhouse1_inverter_power_meas_power_meas_dqpu_lpf_q__states[_solarhouse1_inverter_power_meas_power_meas_dqpu_lpf_q__i];
    }
    _solarhouse1_inverter_power_meas_power_meas_dqpu_lpf_q__a_sum += _solarhouse1_inverter_power_meas_power_meas_dqpu_lpf_q__states[0] * _solarhouse1_inverter_power_meas_power_meas_dqpu_lpf_q__a_coeff[1];
    _solarhouse1_inverter_power_meas_power_meas_dqpu_lpf_q__delay_line_in = _solarhouse1_inverter_power_meas_power_meas_dqpu_sum2__out - _solarhouse1_inverter_power_meas_power_meas_dqpu_lpf_q__a_sum;
    _solarhouse1_inverter_power_meas_power_meas_dqpu_lpf_q__b_sum += _solarhouse1_inverter_power_meas_power_meas_dqpu_lpf_q__b_coeff[0] * _solarhouse1_inverter_power_meas_power_meas_dqpu_lpf_q__delay_line_in;
    _solarhouse1_inverter_power_meas_power_meas_dqpu_lpf_q__out = _solarhouse1_inverter_power_meas_power_meas_dqpu_lpf_q__b_sum;
    // Generated from the component: SolarHouse1.Measurement.LPF_P
    X_UnInt32 _solarhouse1_measurement_lpf_p__i;
    _solarhouse1_measurement_lpf_p__a_sum = 0.0f;
    _solarhouse1_measurement_lpf_p__b_sum = 0.0f;
    _solarhouse1_measurement_lpf_p__delay_line_in = 0.0f;
    for (_solarhouse1_measurement_lpf_p__i = 0; _solarhouse1_measurement_lpf_p__i < 1; _solarhouse1_measurement_lpf_p__i++) {
        _solarhouse1_measurement_lpf_p__b_sum += _solarhouse1_measurement_lpf_p__b_coeff[_solarhouse1_measurement_lpf_p__i + 1] * _solarhouse1_measurement_lpf_p__states[_solarhouse1_measurement_lpf_p__i];
    }
    _solarhouse1_measurement_lpf_p__a_sum += _solarhouse1_measurement_lpf_p__states[0] * _solarhouse1_measurement_lpf_p__a_coeff[1];
    _solarhouse1_measurement_lpf_p__delay_line_in = _solarhouse1_measurement_gain1__out - _solarhouse1_measurement_lpf_p__a_sum;
    _solarhouse1_measurement_lpf_p__b_sum += _solarhouse1_measurement_lpf_p__b_coeff[0] * _solarhouse1_measurement_lpf_p__delay_line_in;
    _solarhouse1_measurement_lpf_p__out = _solarhouse1_measurement_lpf_p__b_sum;
    // Generated from the component: SolarHouse2.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.Edq_sq
    HIL_OutAO(0x403a, (float)_solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_squared_vt2_sum3__out);
    // Generated from the component: SolarHouse2.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.outer power loop1.Comparator1
    if (_solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_squared_vt2_sum3__out < _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_limit_zero__out) {
        _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_comparator1__out = 0;
    } else if (_solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_squared_vt2_sum3__out > _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_limit_zero__out) {
        _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_comparator1__out = 1;
    } else {
        _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_comparator1__out = _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_comparator1__state;
    }
    // Generated from the component: SolarHouse2.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Sum6
    _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum6__out = _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__out + _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_product2__out;
    // Generated from the component: SolarHouse2.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Sum5
    _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum5__out = _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__out - _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_product1__out;
    // Generated from the component: SolarHouse2.Inverter.Power_Meas.Power_Meas_DQpu.LPF_P
    X_UnInt32 _solarhouse2_inverter_power_meas_power_meas_dqpu_lpf_p__i;
    _solarhouse2_inverter_power_meas_power_meas_dqpu_lpf_p__a_sum = 0.0f;
    _solarhouse2_inverter_power_meas_power_meas_dqpu_lpf_p__b_sum = 0.0f;
    _solarhouse2_inverter_power_meas_power_meas_dqpu_lpf_p__delay_line_in = 0.0f;
    for (_solarhouse2_inverter_power_meas_power_meas_dqpu_lpf_p__i = 0; _solarhouse2_inverter_power_meas_power_meas_dqpu_lpf_p__i < 1; _solarhouse2_inverter_power_meas_power_meas_dqpu_lpf_p__i++) {
        _solarhouse2_inverter_power_meas_power_meas_dqpu_lpf_p__b_sum += _solarhouse2_inverter_power_meas_power_meas_dqpu_lpf_p__b_coeff[_solarhouse2_inverter_power_meas_power_meas_dqpu_lpf_p__i + 1] * _solarhouse2_inverter_power_meas_power_meas_dqpu_lpf_p__states[_solarhouse2_inverter_power_meas_power_meas_dqpu_lpf_p__i];
    }
    _solarhouse2_inverter_power_meas_power_meas_dqpu_lpf_p__a_sum += _solarhouse2_inverter_power_meas_power_meas_dqpu_lpf_p__states[0] * _solarhouse2_inverter_power_meas_power_meas_dqpu_lpf_p__a_coeff[1];
    _solarhouse2_inverter_power_meas_power_meas_dqpu_lpf_p__delay_line_in = _solarhouse2_inverter_power_meas_power_meas_dqpu_sum1__out - _solarhouse2_inverter_power_meas_power_meas_dqpu_lpf_p__a_sum;
    _solarhouse2_inverter_power_meas_power_meas_dqpu_lpf_p__b_sum += _solarhouse2_inverter_power_meas_power_meas_dqpu_lpf_p__b_coeff[0] * _solarhouse2_inverter_power_meas_power_meas_dqpu_lpf_p__delay_line_in;
    _solarhouse2_inverter_power_meas_power_meas_dqpu_lpf_p__out = _solarhouse2_inverter_power_meas_power_meas_dqpu_lpf_p__b_sum;
    // Generated from the component: SolarHouse2.Inverter.Power_Meas.Power_Meas_DQpu.LPF_Q
    X_UnInt32 _solarhouse2_inverter_power_meas_power_meas_dqpu_lpf_q__i;
    _solarhouse2_inverter_power_meas_power_meas_dqpu_lpf_q__a_sum = 0.0f;
    _solarhouse2_inverter_power_meas_power_meas_dqpu_lpf_q__b_sum = 0.0f;
    _solarhouse2_inverter_power_meas_power_meas_dqpu_lpf_q__delay_line_in = 0.0f;
    for (_solarhouse2_inverter_power_meas_power_meas_dqpu_lpf_q__i = 0; _solarhouse2_inverter_power_meas_power_meas_dqpu_lpf_q__i < 1; _solarhouse2_inverter_power_meas_power_meas_dqpu_lpf_q__i++) {
        _solarhouse2_inverter_power_meas_power_meas_dqpu_lpf_q__b_sum += _solarhouse2_inverter_power_meas_power_meas_dqpu_lpf_q__b_coeff[_solarhouse2_inverter_power_meas_power_meas_dqpu_lpf_q__i + 1] * _solarhouse2_inverter_power_meas_power_meas_dqpu_lpf_q__states[_solarhouse2_inverter_power_meas_power_meas_dqpu_lpf_q__i];
    }
    _solarhouse2_inverter_power_meas_power_meas_dqpu_lpf_q__a_sum += _solarhouse2_inverter_power_meas_power_meas_dqpu_lpf_q__states[0] * _solarhouse2_inverter_power_meas_power_meas_dqpu_lpf_q__a_coeff[1];
    _solarhouse2_inverter_power_meas_power_meas_dqpu_lpf_q__delay_line_in = _solarhouse2_inverter_power_meas_power_meas_dqpu_sum2__out - _solarhouse2_inverter_power_meas_power_meas_dqpu_lpf_q__a_sum;
    _solarhouse2_inverter_power_meas_power_meas_dqpu_lpf_q__b_sum += _solarhouse2_inverter_power_meas_power_meas_dqpu_lpf_q__b_coeff[0] * _solarhouse2_inverter_power_meas_power_meas_dqpu_lpf_q__delay_line_in;
    _solarhouse2_inverter_power_meas_power_meas_dqpu_lpf_q__out = _solarhouse2_inverter_power_meas_power_meas_dqpu_lpf_q__b_sum;
    // Generated from the component: SolarHouse2.Measurement.LPF_P
    X_UnInt32 _solarhouse2_measurement_lpf_p__i;
    _solarhouse2_measurement_lpf_p__a_sum = 0.0f;
    _solarhouse2_measurement_lpf_p__b_sum = 0.0f;
    _solarhouse2_measurement_lpf_p__delay_line_in = 0.0f;
    for (_solarhouse2_measurement_lpf_p__i = 0; _solarhouse2_measurement_lpf_p__i < 1; _solarhouse2_measurement_lpf_p__i++) {
        _solarhouse2_measurement_lpf_p__b_sum += _solarhouse2_measurement_lpf_p__b_coeff[_solarhouse2_measurement_lpf_p__i + 1] * _solarhouse2_measurement_lpf_p__states[_solarhouse2_measurement_lpf_p__i];
    }
    _solarhouse2_measurement_lpf_p__a_sum += _solarhouse2_measurement_lpf_p__states[0] * _solarhouse2_measurement_lpf_p__a_coeff[1];
    _solarhouse2_measurement_lpf_p__delay_line_in = _solarhouse2_measurement_gain1__out - _solarhouse2_measurement_lpf_p__a_sum;
    _solarhouse2_measurement_lpf_p__b_sum += _solarhouse2_measurement_lpf_p__b_coeff[0] * _solarhouse2_measurement_lpf_p__delay_line_in;
    _solarhouse2_measurement_lpf_p__out = _solarhouse2_measurement_lpf_p__b_sum;
    // Generated from the component: SolarHouse3.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.Edq_sq
    HIL_OutAO(0x4053, (float)_solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_squared_vt2_sum3__out);
    // Generated from the component: SolarHouse3.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.outer power loop1.Comparator1
    if (_solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_squared_vt2_sum3__out < _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_limit_zero__out) {
        _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_comparator1__out = 0;
    } else if (_solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_squared_vt2_sum3__out > _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_limit_zero__out) {
        _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_comparator1__out = 1;
    } else {
        _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_comparator1__out = _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_comparator1__state;
    }
    // Generated from the component: SolarHouse3.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Sum6
    _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum6__out = _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__out + _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_product2__out;
    // Generated from the component: SolarHouse3.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Sum5
    _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum5__out = _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__out - _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_product1__out;
    // Generated from the component: SolarHouse3.Inverter.Power_Meas.Power_Meas_DQpu.LPF_P
    X_UnInt32 _solarhouse3_inverter_power_meas_power_meas_dqpu_lpf_p__i;
    _solarhouse3_inverter_power_meas_power_meas_dqpu_lpf_p__a_sum = 0.0f;
    _solarhouse3_inverter_power_meas_power_meas_dqpu_lpf_p__b_sum = 0.0f;
    _solarhouse3_inverter_power_meas_power_meas_dqpu_lpf_p__delay_line_in = 0.0f;
    for (_solarhouse3_inverter_power_meas_power_meas_dqpu_lpf_p__i = 0; _solarhouse3_inverter_power_meas_power_meas_dqpu_lpf_p__i < 1; _solarhouse3_inverter_power_meas_power_meas_dqpu_lpf_p__i++) {
        _solarhouse3_inverter_power_meas_power_meas_dqpu_lpf_p__b_sum += _solarhouse3_inverter_power_meas_power_meas_dqpu_lpf_p__b_coeff[_solarhouse3_inverter_power_meas_power_meas_dqpu_lpf_p__i + 1] * _solarhouse3_inverter_power_meas_power_meas_dqpu_lpf_p__states[_solarhouse3_inverter_power_meas_power_meas_dqpu_lpf_p__i];
    }
    _solarhouse3_inverter_power_meas_power_meas_dqpu_lpf_p__a_sum += _solarhouse3_inverter_power_meas_power_meas_dqpu_lpf_p__states[0] * _solarhouse3_inverter_power_meas_power_meas_dqpu_lpf_p__a_coeff[1];
    _solarhouse3_inverter_power_meas_power_meas_dqpu_lpf_p__delay_line_in = _solarhouse3_inverter_power_meas_power_meas_dqpu_sum1__out - _solarhouse3_inverter_power_meas_power_meas_dqpu_lpf_p__a_sum;
    _solarhouse3_inverter_power_meas_power_meas_dqpu_lpf_p__b_sum += _solarhouse3_inverter_power_meas_power_meas_dqpu_lpf_p__b_coeff[0] * _solarhouse3_inverter_power_meas_power_meas_dqpu_lpf_p__delay_line_in;
    _solarhouse3_inverter_power_meas_power_meas_dqpu_lpf_p__out = _solarhouse3_inverter_power_meas_power_meas_dqpu_lpf_p__b_sum;
    // Generated from the component: SolarHouse3.Inverter.Power_Meas.Power_Meas_DQpu.LPF_Q
    X_UnInt32 _solarhouse3_inverter_power_meas_power_meas_dqpu_lpf_q__i;
    _solarhouse3_inverter_power_meas_power_meas_dqpu_lpf_q__a_sum = 0.0f;
    _solarhouse3_inverter_power_meas_power_meas_dqpu_lpf_q__b_sum = 0.0f;
    _solarhouse3_inverter_power_meas_power_meas_dqpu_lpf_q__delay_line_in = 0.0f;
    for (_solarhouse3_inverter_power_meas_power_meas_dqpu_lpf_q__i = 0; _solarhouse3_inverter_power_meas_power_meas_dqpu_lpf_q__i < 1; _solarhouse3_inverter_power_meas_power_meas_dqpu_lpf_q__i++) {
        _solarhouse3_inverter_power_meas_power_meas_dqpu_lpf_q__b_sum += _solarhouse3_inverter_power_meas_power_meas_dqpu_lpf_q__b_coeff[_solarhouse3_inverter_power_meas_power_meas_dqpu_lpf_q__i + 1] * _solarhouse3_inverter_power_meas_power_meas_dqpu_lpf_q__states[_solarhouse3_inverter_power_meas_power_meas_dqpu_lpf_q__i];
    }
    _solarhouse3_inverter_power_meas_power_meas_dqpu_lpf_q__a_sum += _solarhouse3_inverter_power_meas_power_meas_dqpu_lpf_q__states[0] * _solarhouse3_inverter_power_meas_power_meas_dqpu_lpf_q__a_coeff[1];
    _solarhouse3_inverter_power_meas_power_meas_dqpu_lpf_q__delay_line_in = _solarhouse3_inverter_power_meas_power_meas_dqpu_sum2__out - _solarhouse3_inverter_power_meas_power_meas_dqpu_lpf_q__a_sum;
    _solarhouse3_inverter_power_meas_power_meas_dqpu_lpf_q__b_sum += _solarhouse3_inverter_power_meas_power_meas_dqpu_lpf_q__b_coeff[0] * _solarhouse3_inverter_power_meas_power_meas_dqpu_lpf_q__delay_line_in;
    _solarhouse3_inverter_power_meas_power_meas_dqpu_lpf_q__out = _solarhouse3_inverter_power_meas_power_meas_dqpu_lpf_q__b_sum;
    // Generated from the component: SolarHouse3.Measurement.LPF_P
    X_UnInt32 _solarhouse3_measurement_lpf_p__i;
    _solarhouse3_measurement_lpf_p__a_sum = 0.0f;
    _solarhouse3_measurement_lpf_p__b_sum = 0.0f;
    _solarhouse3_measurement_lpf_p__delay_line_in = 0.0f;
    for (_solarhouse3_measurement_lpf_p__i = 0; _solarhouse3_measurement_lpf_p__i < 1; _solarhouse3_measurement_lpf_p__i++) {
        _solarhouse3_measurement_lpf_p__b_sum += _solarhouse3_measurement_lpf_p__b_coeff[_solarhouse3_measurement_lpf_p__i + 1] * _solarhouse3_measurement_lpf_p__states[_solarhouse3_measurement_lpf_p__i];
    }
    _solarhouse3_measurement_lpf_p__a_sum += _solarhouse3_measurement_lpf_p__states[0] * _solarhouse3_measurement_lpf_p__a_coeff[1];
    _solarhouse3_measurement_lpf_p__delay_line_in = _solarhouse3_measurement_gain1__out - _solarhouse3_measurement_lpf_p__a_sum;
    _solarhouse3_measurement_lpf_p__b_sum += _solarhouse3_measurement_lpf_p__b_coeff[0] * _solarhouse3_measurement_lpf_p__delay_line_in;
    _solarhouse3_measurement_lpf_p__out = _solarhouse3_measurement_lpf_p__b_sum;
    // Generated from the component: SolarHouse4.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.Edq_sq
    HIL_OutAO(0x406c, (float)_solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_squared_vt2_sum3__out);
    // Generated from the component: SolarHouse4.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.outer power loop1.Comparator1
    if (_solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_squared_vt2_sum3__out < _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_limit_zero__out) {
        _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_comparator1__out = 0;
    } else if (_solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_squared_vt2_sum3__out > _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_limit_zero__out) {
        _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_comparator1__out = 1;
    } else {
        _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_comparator1__out = _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_comparator1__state;
    }
    // Generated from the component: SolarHouse4.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Sum6
    _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum6__out = _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__out + _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_product2__out;
    // Generated from the component: SolarHouse4.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Sum5
    _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum5__out = _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__out - _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_product1__out;
    // Generated from the component: SolarHouse4.Inverter.Power_Meas.Power_Meas_DQpu.LPF_P
    X_UnInt32 _solarhouse4_inverter_power_meas_power_meas_dqpu_lpf_p__i;
    _solarhouse4_inverter_power_meas_power_meas_dqpu_lpf_p__a_sum = 0.0f;
    _solarhouse4_inverter_power_meas_power_meas_dqpu_lpf_p__b_sum = 0.0f;
    _solarhouse4_inverter_power_meas_power_meas_dqpu_lpf_p__delay_line_in = 0.0f;
    for (_solarhouse4_inverter_power_meas_power_meas_dqpu_lpf_p__i = 0; _solarhouse4_inverter_power_meas_power_meas_dqpu_lpf_p__i < 1; _solarhouse4_inverter_power_meas_power_meas_dqpu_lpf_p__i++) {
        _solarhouse4_inverter_power_meas_power_meas_dqpu_lpf_p__b_sum += _solarhouse4_inverter_power_meas_power_meas_dqpu_lpf_p__b_coeff[_solarhouse4_inverter_power_meas_power_meas_dqpu_lpf_p__i + 1] * _solarhouse4_inverter_power_meas_power_meas_dqpu_lpf_p__states[_solarhouse4_inverter_power_meas_power_meas_dqpu_lpf_p__i];
    }
    _solarhouse4_inverter_power_meas_power_meas_dqpu_lpf_p__a_sum += _solarhouse4_inverter_power_meas_power_meas_dqpu_lpf_p__states[0] * _solarhouse4_inverter_power_meas_power_meas_dqpu_lpf_p__a_coeff[1];
    _solarhouse4_inverter_power_meas_power_meas_dqpu_lpf_p__delay_line_in = _solarhouse4_inverter_power_meas_power_meas_dqpu_sum1__out - _solarhouse4_inverter_power_meas_power_meas_dqpu_lpf_p__a_sum;
    _solarhouse4_inverter_power_meas_power_meas_dqpu_lpf_p__b_sum += _solarhouse4_inverter_power_meas_power_meas_dqpu_lpf_p__b_coeff[0] * _solarhouse4_inverter_power_meas_power_meas_dqpu_lpf_p__delay_line_in;
    _solarhouse4_inverter_power_meas_power_meas_dqpu_lpf_p__out = _solarhouse4_inverter_power_meas_power_meas_dqpu_lpf_p__b_sum;
    // Generated from the component: SolarHouse4.Inverter.Power_Meas.Power_Meas_DQpu.LPF_Q
    X_UnInt32 _solarhouse4_inverter_power_meas_power_meas_dqpu_lpf_q__i;
    _solarhouse4_inverter_power_meas_power_meas_dqpu_lpf_q__a_sum = 0.0f;
    _solarhouse4_inverter_power_meas_power_meas_dqpu_lpf_q__b_sum = 0.0f;
    _solarhouse4_inverter_power_meas_power_meas_dqpu_lpf_q__delay_line_in = 0.0f;
    for (_solarhouse4_inverter_power_meas_power_meas_dqpu_lpf_q__i = 0; _solarhouse4_inverter_power_meas_power_meas_dqpu_lpf_q__i < 1; _solarhouse4_inverter_power_meas_power_meas_dqpu_lpf_q__i++) {
        _solarhouse4_inverter_power_meas_power_meas_dqpu_lpf_q__b_sum += _solarhouse4_inverter_power_meas_power_meas_dqpu_lpf_q__b_coeff[_solarhouse4_inverter_power_meas_power_meas_dqpu_lpf_q__i + 1] * _solarhouse4_inverter_power_meas_power_meas_dqpu_lpf_q__states[_solarhouse4_inverter_power_meas_power_meas_dqpu_lpf_q__i];
    }
    _solarhouse4_inverter_power_meas_power_meas_dqpu_lpf_q__a_sum += _solarhouse4_inverter_power_meas_power_meas_dqpu_lpf_q__states[0] * _solarhouse4_inverter_power_meas_power_meas_dqpu_lpf_q__a_coeff[1];
    _solarhouse4_inverter_power_meas_power_meas_dqpu_lpf_q__delay_line_in = _solarhouse4_inverter_power_meas_power_meas_dqpu_sum2__out - _solarhouse4_inverter_power_meas_power_meas_dqpu_lpf_q__a_sum;
    _solarhouse4_inverter_power_meas_power_meas_dqpu_lpf_q__b_sum += _solarhouse4_inverter_power_meas_power_meas_dqpu_lpf_q__b_coeff[0] * _solarhouse4_inverter_power_meas_power_meas_dqpu_lpf_q__delay_line_in;
    _solarhouse4_inverter_power_meas_power_meas_dqpu_lpf_q__out = _solarhouse4_inverter_power_meas_power_meas_dqpu_lpf_q__b_sum;
    // Generated from the component: SolarHouse4.Measurement.LPF_P
    X_UnInt32 _solarhouse4_measurement_lpf_p__i;
    _solarhouse4_measurement_lpf_p__a_sum = 0.0f;
    _solarhouse4_measurement_lpf_p__b_sum = 0.0f;
    _solarhouse4_measurement_lpf_p__delay_line_in = 0.0f;
    for (_solarhouse4_measurement_lpf_p__i = 0; _solarhouse4_measurement_lpf_p__i < 1; _solarhouse4_measurement_lpf_p__i++) {
        _solarhouse4_measurement_lpf_p__b_sum += _solarhouse4_measurement_lpf_p__b_coeff[_solarhouse4_measurement_lpf_p__i + 1] * _solarhouse4_measurement_lpf_p__states[_solarhouse4_measurement_lpf_p__i];
    }
    _solarhouse4_measurement_lpf_p__a_sum += _solarhouse4_measurement_lpf_p__states[0] * _solarhouse4_measurement_lpf_p__a_coeff[1];
    _solarhouse4_measurement_lpf_p__delay_line_in = _solarhouse4_measurement_gain1__out - _solarhouse4_measurement_lpf_p__a_sum;
    _solarhouse4_measurement_lpf_p__b_sum += _solarhouse4_measurement_lpf_p__b_coeff[0] * _solarhouse4_measurement_lpf_p__delay_line_in;
    _solarhouse4_measurement_lpf_p__out = _solarhouse4_measurement_lpf_p__b_sum;
    // Generated from the component: ESS.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.outer power loop1.Signal switch1
    _ess_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_signal_switch1__out = (_ess_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_comparator1__out < 0.5f) ? _ess_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_one__out : _ess_inverter_controller_outer_voltage_loop___inner_current_loop_squared_vt2_sum3__out;
    // Generated from the component: SolarHouse1.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.outer power loop1.Signal switch1
    _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_signal_switch1__out = (_solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_comparator1__out < 0.5f) ? _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_one__out : _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_squared_vt2_sum3__out;
    // Generated from the component: SolarHouse2.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.outer power loop1.Signal switch1
    _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_signal_switch1__out = (_solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_comparator1__out < 0.5f) ? _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_one__out : _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_squared_vt2_sum3__out;
    // Generated from the component: SolarHouse3.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.outer power loop1.Signal switch1
    _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_signal_switch1__out = (_solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_comparator1__out < 0.5f) ? _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_one__out : _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_squared_vt2_sum3__out;
    // Generated from the component: SolarHouse4.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.outer power loop1.Signal switch1
    _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_signal_switch1__out = (_solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_comparator1__out < 0.5f) ? _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_one__out : _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_squared_vt2_sum3__out;
    // Generated from the component: ESS.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.outer power loop1.Et_sqr_res
    HIL_OutAO(0x400e, (float)_ess_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_signal_switch1__out);
    // Generated from the component: ESS.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.outer power loop1.Product1
    _ess_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_product1__out = (_ess_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_sum3__out) * 1.0 / (_ess_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_signal_switch1__out);
    // Generated from the component: ESS.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.outer power loop1.Product2
    _ess_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_product2__out = (_ess_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_sum4__out) * 1.0 / (_ess_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_signal_switch1__out);
    // Generated from the component: SolarHouse1.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.outer power loop1.Et_sqr_res
    HIL_OutAO(0x4028, (float)_solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_signal_switch1__out);
    // Generated from the component: SolarHouse1.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.outer power loop1.Product1
    _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_product1__out = (_solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_sum3__out) * 1.0 / (_solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_signal_switch1__out);
    // Generated from the component: SolarHouse1.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.outer power loop1.Product2
    _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_product2__out = (_solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_sum4__out) * 1.0 / (_solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_signal_switch1__out);
    // Generated from the component: SolarHouse2.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.outer power loop1.Et_sqr_res
    HIL_OutAO(0x4041, (float)_solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_signal_switch1__out);
    // Generated from the component: SolarHouse2.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.outer power loop1.Product1
    _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_product1__out = (_solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_sum3__out) * 1.0 / (_solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_signal_switch1__out);
    // Generated from the component: SolarHouse2.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.outer power loop1.Product2
    _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_product2__out = (_solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_sum4__out) * 1.0 / (_solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_signal_switch1__out);
    // Generated from the component: SolarHouse3.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.outer power loop1.Et_sqr_res
    HIL_OutAO(0x405a, (float)_solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_signal_switch1__out);
    // Generated from the component: SolarHouse3.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.outer power loop1.Product1
    _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_product1__out = (_solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_sum3__out) * 1.0 / (_solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_signal_switch1__out);
    // Generated from the component: SolarHouse3.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.outer power loop1.Product2
    _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_product2__out = (_solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_sum4__out) * 1.0 / (_solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_signal_switch1__out);
    // Generated from the component: SolarHouse4.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.outer power loop1.Et_sqr_res
    HIL_OutAO(0x4073, (float)_solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_signal_switch1__out);
    // Generated from the component: SolarHouse4.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.outer power loop1.Product1
    _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_product1__out = (_solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_sum3__out) * 1.0 / (_solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_signal_switch1__out);
    // Generated from the component: SolarHouse4.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.outer power loop1.Product2
    _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_product2__out = (_solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_sum4__out) * 1.0 / (_solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_signal_switch1__out);
    // Generated from the component: ESS.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.Iq_ref
    HIL_OutAO(0x4009, (float)_ess_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_product1__out);
    // Generated from the component: ESS.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Sum9
    _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum9__out = _ess_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_product1__out - _ess_inverter_controller_gain31__out;
    // Generated from the component: ESS.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.Id_ref
    HIL_OutAO(0x4008, (float)_ess_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_product2__out);
    // Generated from the component: ESS.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Sum8
    _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum8__out = _ess_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_product2__out - _ess_inverter_controller_gain30__out;
    // Generated from the component: SolarHouse1.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.Iq_ref
    HIL_OutAO(0x4023, (float)_solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_product1__out);
    // Generated from the component: SolarHouse1.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Sum9
    _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum9__out = _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_product1__out - _solarhouse1_inverter_controller_gain31__out;
    // Generated from the component: SolarHouse1.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.Id_ref
    HIL_OutAO(0x4022, (float)_solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_product2__out);
    // Generated from the component: SolarHouse1.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Sum8
    _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum8__out = _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_product2__out - _solarhouse1_inverter_controller_gain30__out;
    // Generated from the component: SolarHouse2.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.Iq_ref
    HIL_OutAO(0x403c, (float)_solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_product1__out);
    // Generated from the component: SolarHouse2.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Sum9
    _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum9__out = _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_product1__out - _solarhouse2_inverter_controller_gain31__out;
    // Generated from the component: SolarHouse2.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.Id_ref
    HIL_OutAO(0x403b, (float)_solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_product2__out);
    // Generated from the component: SolarHouse2.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Sum8
    _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum8__out = _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_product2__out - _solarhouse2_inverter_controller_gain30__out;
    // Generated from the component: SolarHouse3.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.Iq_ref
    HIL_OutAO(0x4055, (float)_solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_product1__out);
    // Generated from the component: SolarHouse3.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Sum9
    _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum9__out = _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_product1__out - _solarhouse3_inverter_controller_gain31__out;
    // Generated from the component: SolarHouse3.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.Id_ref
    HIL_OutAO(0x4054, (float)_solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_product2__out);
    // Generated from the component: SolarHouse3.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Sum8
    _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum8__out = _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_product2__out - _solarhouse3_inverter_controller_gain30__out;
    // Generated from the component: SolarHouse4.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.Iq_ref
    HIL_OutAO(0x406e, (float)_solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_product1__out);
    // Generated from the component: SolarHouse4.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Sum9
    _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum9__out = _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_product1__out - _solarhouse4_inverter_controller_gain31__out;
    // Generated from the component: SolarHouse4.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.Id_ref
    HIL_OutAO(0x406d, (float)_solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_product2__out);
    // Generated from the component: SolarHouse4.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Sum8
    _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum8__out = _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_product2__out - _solarhouse4_inverter_controller_gain30__out;
    // Generated from the component: ESS.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.PID controller2
    _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__pi_reg_out_int = _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__integrator_state + 1.3194444444444446 * _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum9__out;
    if (_ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__pi_reg_out_int < -1.0)
        _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__av_active = 1;
    else if (_ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__pi_reg_out_int > 1.0)
        _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__av_active = 1;
    else
        _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__av_active = 0;
    _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__out = MIN(MAX(_ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__pi_reg_out_int, -1.0), 1.0);
    // Generated from the component: ESS.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.iq_err
    HIL_OutAO(0x400d, (float)_ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum9__out);
    // Generated from the component: ESS.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.PID controller1
    _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__pi_reg_out_int = _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__integrator_state + 1.3194444444444446 * _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum8__out;
    if (_ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__pi_reg_out_int < -1.0)
        _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__av_active = 1;
    else if (_ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__pi_reg_out_int > 1.0)
        _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__av_active = 1;
    else
        _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__av_active = 0;
    _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__out = MIN(MAX(_ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__pi_reg_out_int, -1.0), 1.0);
    // Generated from the component: ESS.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.id_err
    HIL_OutAO(0x400c, (float)_ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum8__out);
    // Generated from the component: SolarHouse1.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.PID controller2
    _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__pi_reg_out_int = _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__integrator_state + 1.3194444444444446 * _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum9__out;
    if (_solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__pi_reg_out_int < -1.0)
        _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__av_active = 1;
    else if (_solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__pi_reg_out_int > 1.0)
        _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__av_active = 1;
    else
        _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__av_active = 0;
    _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__out = MIN(MAX(_solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__pi_reg_out_int, -1.0), 1.0);
    // Generated from the component: SolarHouse1.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.iq_err
    HIL_OutAO(0x4027, (float)_solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum9__out);
    // Generated from the component: SolarHouse1.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.PID controller1
    _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__pi_reg_out_int = _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__integrator_state + 1.3194444444444446 * _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum8__out;
    if (_solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__pi_reg_out_int < -1.0)
        _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__av_active = 1;
    else if (_solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__pi_reg_out_int > 1.0)
        _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__av_active = 1;
    else
        _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__av_active = 0;
    _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__out = MIN(MAX(_solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__pi_reg_out_int, -1.0), 1.0);
    // Generated from the component: SolarHouse1.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.id_err
    HIL_OutAO(0x4026, (float)_solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum8__out);
    // Generated from the component: SolarHouse2.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.PID controller2
    _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__pi_reg_out_int = _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__integrator_state + 1.3194444444444446 * _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum9__out;
    if (_solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__pi_reg_out_int < -1.0)
        _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__av_active = 1;
    else if (_solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__pi_reg_out_int > 1.0)
        _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__av_active = 1;
    else
        _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__av_active = 0;
    _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__out = MIN(MAX(_solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__pi_reg_out_int, -1.0), 1.0);
    // Generated from the component: SolarHouse2.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.iq_err
    HIL_OutAO(0x4040, (float)_solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum9__out);
    // Generated from the component: SolarHouse2.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.PID controller1
    _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__pi_reg_out_int = _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__integrator_state + 1.3194444444444446 * _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum8__out;
    if (_solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__pi_reg_out_int < -1.0)
        _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__av_active = 1;
    else if (_solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__pi_reg_out_int > 1.0)
        _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__av_active = 1;
    else
        _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__av_active = 0;
    _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__out = MIN(MAX(_solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__pi_reg_out_int, -1.0), 1.0);
    // Generated from the component: SolarHouse2.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.id_err
    HIL_OutAO(0x403f, (float)_solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum8__out);
    // Generated from the component: SolarHouse3.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.PID controller2
    _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__pi_reg_out_int = _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__integrator_state + 1.3194444444444446 * _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum9__out;
    if (_solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__pi_reg_out_int < -1.0)
        _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__av_active = 1;
    else if (_solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__pi_reg_out_int > 1.0)
        _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__av_active = 1;
    else
        _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__av_active = 0;
    _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__out = MIN(MAX(_solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__pi_reg_out_int, -1.0), 1.0);
    // Generated from the component: SolarHouse3.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.iq_err
    HIL_OutAO(0x4059, (float)_solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum9__out);
    // Generated from the component: SolarHouse3.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.PID controller1
    _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__pi_reg_out_int = _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__integrator_state + 1.3194444444444446 * _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum8__out;
    if (_solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__pi_reg_out_int < -1.0)
        _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__av_active = 1;
    else if (_solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__pi_reg_out_int > 1.0)
        _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__av_active = 1;
    else
        _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__av_active = 0;
    _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__out = MIN(MAX(_solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__pi_reg_out_int, -1.0), 1.0);
    // Generated from the component: SolarHouse3.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.id_err
    HIL_OutAO(0x4058, (float)_solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum8__out);
    // Generated from the component: SolarHouse4.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.PID controller2
    _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__pi_reg_out_int = _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__integrator_state + 1.3194444444444446 * _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum9__out;
    if (_solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__pi_reg_out_int < -1.0)
        _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__av_active = 1;
    else if (_solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__pi_reg_out_int > 1.0)
        _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__av_active = 1;
    else
        _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__av_active = 0;
    _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__out = MIN(MAX(_solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__pi_reg_out_int, -1.0), 1.0);
    // Generated from the component: SolarHouse4.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.iq_err
    HIL_OutAO(0x4072, (float)_solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum9__out);
    // Generated from the component: SolarHouse4.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.PID controller1
    _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__pi_reg_out_int = _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__integrator_state + 1.3194444444444446 * _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum8__out;
    if (_solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__pi_reg_out_int < -1.0)
        _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__av_active = 1;
    else if (_solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__pi_reg_out_int > 1.0)
        _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__av_active = 1;
    else
        _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__av_active = 0;
    _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__out = MIN(MAX(_solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__pi_reg_out_int, -1.0), 1.0);
    // Generated from the component: SolarHouse4.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.id_err
    HIL_OutAO(0x4071, (float)_solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum8__out);
    // Generated from the component: ESS.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Sum7
    _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum7__out = _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__out + _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum6__out;
    // Generated from the component: ESS.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Sum3
    _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum3__out = _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__out + _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum5__out;
    // Generated from the component: SolarHouse1.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Sum7
    _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum7__out = _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__out + _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum6__out;
    // Generated from the component: SolarHouse1.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Sum3
    _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum3__out = _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__out + _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum5__out;
    // Generated from the component: SolarHouse2.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Sum7
    _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum7__out = _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__out + _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum6__out;
    // Generated from the component: SolarHouse2.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Sum3
    _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum3__out = _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__out + _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum5__out;
    // Generated from the component: SolarHouse3.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Sum7
    _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum7__out = _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__out + _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum6__out;
    // Generated from the component: SolarHouse3.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Sum3
    _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum3__out = _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__out + _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum5__out;
    // Generated from the component: SolarHouse4.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Sum7
    _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum7__out = _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__out + _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum6__out;
    // Generated from the component: SolarHouse4.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Sum3
    _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum3__out = _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__out + _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum5__out;
    // Generated from the component: ESS.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Product6
    _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_product6__out = (_ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum7__out) * 1.0 / (_ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_gain5__out);
    // Generated from the component: ESS.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Product5
    _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_product5__out = (_ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum3__out) * 1.0 / (_ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_gain5__out);
    // Generated from the component: SolarHouse1.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Product6
    _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_product6__out = (_solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum7__out) * 1.0 / (_solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_gain5__out);
    // Generated from the component: SolarHouse1.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Product5
    _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_product5__out = (_solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum3__out) * 1.0 / (_solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_gain5__out);
    // Generated from the component: SolarHouse2.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Product6
    _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_product6__out = (_solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum7__out) * 1.0 / (_solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_gain5__out);
    // Generated from the component: SolarHouse2.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Product5
    _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_product5__out = (_solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum3__out) * 1.0 / (_solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_gain5__out);
    // Generated from the component: SolarHouse3.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Product6
    _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_product6__out = (_solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum7__out) * 1.0 / (_solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_gain5__out);
    // Generated from the component: SolarHouse3.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Product5
    _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_product5__out = (_solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum3__out) * 1.0 / (_solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_gain5__out);
    // Generated from the component: SolarHouse4.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Product6
    _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_product6__out = (_solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum7__out) * 1.0 / (_solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_gain5__out);
    // Generated from the component: SolarHouse4.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Product5
    _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_product5__out = (_solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum3__out) * 1.0 / (_solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_gain5__out);
    // Generated from the component: ESS.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Limit2
    _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_limit2__out = MIN(MAX(_ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_product6__out, -1.0), 1.0);
    // Generated from the component: ESS.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Limit1
    _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_limit1__out = MIN(MAX(_ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_product5__out, -1.0), 1.0);
    // Generated from the component: SolarHouse1.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Limit2
    _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_limit2__out = MIN(MAX(_solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_product6__out, -1.0), 1.0);
    // Generated from the component: SolarHouse1.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Limit1
    _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_limit1__out = MIN(MAX(_solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_product5__out, -1.0), 1.0);
    // Generated from the component: SolarHouse2.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Limit2
    _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_limit2__out = MIN(MAX(_solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_product6__out, -1.0), 1.0);
    // Generated from the component: SolarHouse2.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Limit1
    _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_limit1__out = MIN(MAX(_solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_product5__out, -1.0), 1.0);
    // Generated from the component: SolarHouse3.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Limit2
    _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_limit2__out = MIN(MAX(_solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_product6__out, -1.0), 1.0);
    // Generated from the component: SolarHouse3.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Limit1
    _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_limit1__out = MIN(MAX(_solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_product5__out, -1.0), 1.0);
    // Generated from the component: SolarHouse4.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Limit2
    _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_limit2__out = MIN(MAX(_solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_product6__out, -1.0), 1.0);
    // Generated from the component: SolarHouse4.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Limit1
    _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_limit1__out = MIN(MAX(_solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_product5__out, -1.0), 1.0);
    // Generated from the component: ESS.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.Gain6
    _ess_inverter_controller_outer_voltage_loop___inner_current_loop_gain6__out = 339.4112549695428 * _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_limit2__out;
    // Generated from the component: ESS.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.uq
    HIL_OutAO(0x4010, (float)_ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_limit2__out);
    // Generated from the component: ESS.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.Gain5
    _ess_inverter_controller_outer_voltage_loop___inner_current_loop_gain5__out = 339.4112549695428 * _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_limit1__out;
    // Generated from the component: ESS.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.ud
    HIL_OutAO(0x400f, (float)_ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_limit1__out);
    // Generated from the component: SolarHouse1.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.Gain6
    _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_gain6__out = 339.4112549695428 * _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_limit2__out;
    // Generated from the component: SolarHouse1.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.uq
    HIL_OutAO(0x402a, (float)_solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_limit2__out);
    // Generated from the component: SolarHouse1.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.Gain5
    _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_gain5__out = 339.4112549695428 * _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_limit1__out;
    // Generated from the component: SolarHouse1.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.ud
    HIL_OutAO(0x4029, (float)_solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_limit1__out);
    // Generated from the component: SolarHouse2.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.Gain6
    _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_gain6__out = 339.4112549695428 * _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_limit2__out;
    // Generated from the component: SolarHouse2.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.uq
    HIL_OutAO(0x4043, (float)_solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_limit2__out);
    // Generated from the component: SolarHouse2.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.Gain5
    _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_gain5__out = 339.4112549695428 * _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_limit1__out;
    // Generated from the component: SolarHouse2.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.ud
    HIL_OutAO(0x4042, (float)_solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_limit1__out);
    // Generated from the component: SolarHouse3.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.Gain6
    _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_gain6__out = 339.4112549695428 * _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_limit2__out;
    // Generated from the component: SolarHouse3.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.uq
    HIL_OutAO(0x405c, (float)_solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_limit2__out);
    // Generated from the component: SolarHouse3.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.Gain5
    _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_gain5__out = 339.4112549695428 * _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_limit1__out;
    // Generated from the component: SolarHouse3.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.ud
    HIL_OutAO(0x405b, (float)_solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_limit1__out);
    // Generated from the component: SolarHouse4.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.Gain6
    _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_gain6__out = 339.4112549695428 * _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_limit2__out;
    // Generated from the component: SolarHouse4.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.uq
    HIL_OutAO(0x4075, (float)_solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_limit2__out);
    // Generated from the component: SolarHouse4.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.Gain5
    _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_gain5__out = 339.4112549695428 * _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_limit1__out;
    // Generated from the component: SolarHouse4.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.ud
    HIL_OutAO(0x4074, (float)_solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_limit1__out);
    // Generated from the component: ESS.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.Uq
    HIL_OutAO(0x400b, (float)_ess_inverter_controller_outer_voltage_loop___inner_current_loop_gain6__out);
    // Generated from the component: ESS.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.Ud
    HIL_OutAO(0x400a, (float)_ess_inverter_controller_outer_voltage_loop___inner_current_loop_gain5__out);
    // Generated from the component: ESS.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.dq to alpha beta
    _ess_inverter_controller_outer_voltage_loop___inner_current_loop_dq_to_alpha_beta__k1 = cos(_ess_inverter_controller_c_function4__out);
    _ess_inverter_controller_outer_voltage_loop___inner_current_loop_dq_to_alpha_beta__k2 = sin(_ess_inverter_controller_c_function4__out);
    _ess_inverter_controller_outer_voltage_loop___inner_current_loop_dq_to_alpha_beta__alpha = _ess_inverter_controller_outer_voltage_loop___inner_current_loop_dq_to_alpha_beta__k2 * _ess_inverter_controller_outer_voltage_loop___inner_current_loop_gain5__out + _ess_inverter_controller_outer_voltage_loop___inner_current_loop_dq_to_alpha_beta__k1 * _ess_inverter_controller_outer_voltage_loop___inner_current_loop_gain6__out;
    _ess_inverter_controller_outer_voltage_loop___inner_current_loop_dq_to_alpha_beta__beta = _ess_inverter_controller_outer_voltage_loop___inner_current_loop_dq_to_alpha_beta__k2 * _ess_inverter_controller_outer_voltage_loop___inner_current_loop_gain6__out - _ess_inverter_controller_outer_voltage_loop___inner_current_loop_dq_to_alpha_beta__k1 * _ess_inverter_controller_outer_voltage_loop___inner_current_loop_gain5__out;
    // Generated from the component: SolarHouse1.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.Uq
    HIL_OutAO(0x4025, (float)_solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_gain6__out);
    // Generated from the component: SolarHouse1.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.Ud
    HIL_OutAO(0x4024, (float)_solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_gain5__out);
    // Generated from the component: SolarHouse1.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.dq to alpha beta
    _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_dq_to_alpha_beta__k1 = cos(_solarhouse1_inverter_controller_c_function4__out);
    _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_dq_to_alpha_beta__k2 = sin(_solarhouse1_inverter_controller_c_function4__out);
    _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_dq_to_alpha_beta__alpha = _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_dq_to_alpha_beta__k2 * _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_gain5__out + _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_dq_to_alpha_beta__k1 * _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_gain6__out;
    _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_dq_to_alpha_beta__beta = _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_dq_to_alpha_beta__k2 * _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_gain6__out - _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_dq_to_alpha_beta__k1 * _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_gain5__out;
    // Generated from the component: SolarHouse2.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.Uq
    HIL_OutAO(0x403e, (float)_solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_gain6__out);
    // Generated from the component: SolarHouse2.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.Ud
    HIL_OutAO(0x403d, (float)_solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_gain5__out);
    // Generated from the component: SolarHouse2.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.dq to alpha beta
    _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_dq_to_alpha_beta__k1 = cos(_solarhouse2_inverter_controller_c_function4__out);
    _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_dq_to_alpha_beta__k2 = sin(_solarhouse2_inverter_controller_c_function4__out);
    _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_dq_to_alpha_beta__alpha = _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_dq_to_alpha_beta__k2 * _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_gain5__out + _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_dq_to_alpha_beta__k1 * _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_gain6__out;
    _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_dq_to_alpha_beta__beta = _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_dq_to_alpha_beta__k2 * _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_gain6__out - _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_dq_to_alpha_beta__k1 * _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_gain5__out;
    // Generated from the component: SolarHouse3.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.Uq
    HIL_OutAO(0x4057, (float)_solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_gain6__out);
    // Generated from the component: SolarHouse3.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.Ud
    HIL_OutAO(0x4056, (float)_solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_gain5__out);
    // Generated from the component: SolarHouse3.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.dq to alpha beta
    _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_dq_to_alpha_beta__k1 = cos(_solarhouse3_inverter_controller_c_function4__out);
    _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_dq_to_alpha_beta__k2 = sin(_solarhouse3_inverter_controller_c_function4__out);
    _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_dq_to_alpha_beta__alpha = _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_dq_to_alpha_beta__k2 * _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_gain5__out + _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_dq_to_alpha_beta__k1 * _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_gain6__out;
    _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_dq_to_alpha_beta__beta = _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_dq_to_alpha_beta__k2 * _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_gain6__out - _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_dq_to_alpha_beta__k1 * _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_gain5__out;
    // Generated from the component: SolarHouse4.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.Uq
    HIL_OutAO(0x4070, (float)_solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_gain6__out);
    // Generated from the component: SolarHouse4.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.Ud
    HIL_OutAO(0x406f, (float)_solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_gain5__out);
    // Generated from the component: SolarHouse4.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.dq to alpha beta
    _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_dq_to_alpha_beta__k1 = cos(_solarhouse4_inverter_controller_c_function4__out);
    _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_dq_to_alpha_beta__k2 = sin(_solarhouse4_inverter_controller_c_function4__out);
    _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_dq_to_alpha_beta__alpha = _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_dq_to_alpha_beta__k2 * _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_gain5__out + _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_dq_to_alpha_beta__k1 * _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_gain6__out;
    _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_dq_to_alpha_beta__beta = _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_dq_to_alpha_beta__k2 * _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_gain6__out - _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_dq_to_alpha_beta__k1 * _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_gain5__out;
    // Generated from the component: ESS.Inverter.Controller.Bus Join1
    _ess_inverter_controller_bus_join1__out[0] = _ess_inverter_controller_outer_voltage_loop___inner_current_loop_dq_to_alpha_beta__alpha;
    _ess_inverter_controller_bus_join1__out[1] = _ess_inverter_controller_outer_voltage_loop___inner_current_loop_dq_to_alpha_beta__beta;
    // Generated from the component: SolarHouse1.Inverter.Controller.Bus Join1
    _solarhouse1_inverter_controller_bus_join1__out[0] = _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_dq_to_alpha_beta__alpha;
    _solarhouse1_inverter_controller_bus_join1__out[1] = _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_dq_to_alpha_beta__beta;
    // Generated from the component: SolarHouse2.Inverter.Controller.Bus Join1
    _solarhouse2_inverter_controller_bus_join1__out[0] = _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_dq_to_alpha_beta__alpha;
    _solarhouse2_inverter_controller_bus_join1__out[1] = _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_dq_to_alpha_beta__beta;
    // Generated from the component: SolarHouse3.Inverter.Controller.Bus Join1
    _solarhouse3_inverter_controller_bus_join1__out[0] = _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_dq_to_alpha_beta__alpha;
    _solarhouse3_inverter_controller_bus_join1__out[1] = _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_dq_to_alpha_beta__beta;
    // Generated from the component: SolarHouse4.Inverter.Controller.Bus Join1
    _solarhouse4_inverter_controller_bus_join1__out[0] = _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_dq_to_alpha_beta__alpha;
    _solarhouse4_inverter_controller_bus_join1__out[1] = _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_dq_to_alpha_beta__beta;
    // Generated from the component: ESS.Inverter.Controller.Bus Split1
    _ess_inverter_controller_bus_split1__out = _ess_inverter_controller_bus_join1__out[0];
    _ess_inverter_controller_bus_split1__out1 = _ess_inverter_controller_bus_join1__out[1];
    // Generated from the component: SolarHouse1.Inverter.Controller.Bus Split1
    _solarhouse1_inverter_controller_bus_split1__out = _solarhouse1_inverter_controller_bus_join1__out[0];
    _solarhouse1_inverter_controller_bus_split1__out1 = _solarhouse1_inverter_controller_bus_join1__out[1];
    // Generated from the component: SolarHouse2.Inverter.Controller.Bus Split1
    _solarhouse2_inverter_controller_bus_split1__out = _solarhouse2_inverter_controller_bus_join1__out[0];
    _solarhouse2_inverter_controller_bus_split1__out1 = _solarhouse2_inverter_controller_bus_join1__out[1];
    // Generated from the component: SolarHouse3.Inverter.Controller.Bus Split1
    _solarhouse3_inverter_controller_bus_split1__out = _solarhouse3_inverter_controller_bus_join1__out[0];
    _solarhouse3_inverter_controller_bus_split1__out1 = _solarhouse3_inverter_controller_bus_join1__out[1];
    // Generated from the component: SolarHouse4.Inverter.Controller.Bus Split1
    _solarhouse4_inverter_controller_bus_split1__out = _solarhouse4_inverter_controller_bus_join1__out[0];
    _solarhouse4_inverter_controller_bus_split1__out1 = _solarhouse4_inverter_controller_bus_join1__out[1];
    // Generated from the component: ESS.Inverter.Controller.Gain20
    _ess_inverter_controller_gain20__out = -1.0 * _ess_inverter_controller_bus_split1__out;
    // Generated from the component: SolarHouse1.Inverter.Controller.Gain20
    _solarhouse1_inverter_controller_gain20__out = -1.0 * _solarhouse1_inverter_controller_bus_split1__out;
    // Generated from the component: SolarHouse2.Inverter.Controller.Gain20
    _solarhouse2_inverter_controller_gain20__out = -1.0 * _solarhouse2_inverter_controller_bus_split1__out;
    // Generated from the component: SolarHouse3.Inverter.Controller.Gain20
    _solarhouse3_inverter_controller_gain20__out = -1.0 * _solarhouse3_inverter_controller_bus_split1__out;
    // Generated from the component: SolarHouse4.Inverter.Controller.Gain20
    _solarhouse4_inverter_controller_gain20__out = -1.0 * _solarhouse4_inverter_controller_bus_split1__out;
    // Generated from the component: ESS.Inverter.Single Phase Inverter1.PWM_Modulator
    _ess_inverter_single_phase_inverter1_pwm_modulator__limited_in[0] = MIN(MAX(_ess_inverter_controller_bus_split1__out, -1.0), 1.0);
    HIL_OutInt32(0x2000040 + _ess_inverter_single_phase_inverter1_pwm_modulator__channels[0], ((unsigned)((_ess_inverter_single_phase_inverter1_pwm_modulator__limited_in[0] - (-1.0)) * 1250.0)));
    _ess_inverter_single_phase_inverter1_pwm_modulator__limited_in[1] = MIN(MAX(_ess_inverter_controller_gain20__out, -1.0), 1.0);
    HIL_OutInt32(0x2000040 + _ess_inverter_single_phase_inverter1_pwm_modulator__channels[1], ((unsigned)((_ess_inverter_single_phase_inverter1_pwm_modulator__limited_in[1] - (-1.0)) * 1250.0)));
    if (_ess_inverter_controller_constant2__out == 0x0) {
        // pwm_modulator_en
        HIL_OutInt32(0x2000000 + _ess_inverter_single_phase_inverter1_pwm_modulator__channels[0], 0x0);
        HIL_OutInt32(0x2000000 + _ess_inverter_single_phase_inverter1_pwm_modulator__channels[1], 0x0);
    }
    else {
        // pwm_modulator_en
        HIL_OutInt32(0x2000000 + _ess_inverter_single_phase_inverter1_pwm_modulator__channels[0], 0x1);
        HIL_OutInt32(0x2000000 + _ess_inverter_single_phase_inverter1_pwm_modulator__channels[1], 0x1);
    }
    HIL_OutInt32(0x2000140, _ess_inverter_single_phase_inverter1_pwm_modulator__update_mask);
    // Generated from the component: SolarHouse1.Inverter.Single Phase Inverter1.PWM_Modulator
    _solarhouse1_inverter_single_phase_inverter1_pwm_modulator__limited_in[0] = MIN(MAX(_solarhouse1_inverter_controller_bus_split1__out, -1.0), 1.0);
    HIL_OutInt32(0x2000040 + _solarhouse1_inverter_single_phase_inverter1_pwm_modulator__channels[0], ((unsigned)((_solarhouse1_inverter_single_phase_inverter1_pwm_modulator__limited_in[0] - (-1.0)) * 1250.0)));
    _solarhouse1_inverter_single_phase_inverter1_pwm_modulator__limited_in[1] = MIN(MAX(_solarhouse1_inverter_controller_gain20__out, -1.0), 1.0);
    HIL_OutInt32(0x2000040 + _solarhouse1_inverter_single_phase_inverter1_pwm_modulator__channels[1], ((unsigned)((_solarhouse1_inverter_single_phase_inverter1_pwm_modulator__limited_in[1] - (-1.0)) * 1250.0)));
    if (_solarhouse1_inverter_controller_constant2__out == 0x0) {
        // pwm_modulator_en
        HIL_OutInt32(0x2000000 + _solarhouse1_inverter_single_phase_inverter1_pwm_modulator__channels[0], 0x0);
        HIL_OutInt32(0x2000000 + _solarhouse1_inverter_single_phase_inverter1_pwm_modulator__channels[1], 0x0);
    }
    else {
        // pwm_modulator_en
        HIL_OutInt32(0x2000000 + _solarhouse1_inverter_single_phase_inverter1_pwm_modulator__channels[0], 0x1);
        HIL_OutInt32(0x2000000 + _solarhouse1_inverter_single_phase_inverter1_pwm_modulator__channels[1], 0x1);
    }
    HIL_OutInt32(0x2000140, _solarhouse1_inverter_single_phase_inverter1_pwm_modulator__update_mask);
    // Generated from the component: SolarHouse2.Inverter.Single Phase Inverter1.PWM_Modulator
    _solarhouse2_inverter_single_phase_inverter1_pwm_modulator__limited_in[0] = MIN(MAX(_solarhouse2_inverter_controller_bus_split1__out, -1.0), 1.0);
    HIL_OutInt32(0x2000040 + _solarhouse2_inverter_single_phase_inverter1_pwm_modulator__channels[0], ((unsigned)((_solarhouse2_inverter_single_phase_inverter1_pwm_modulator__limited_in[0] - (-1.0)) * 1250.0)));
    _solarhouse2_inverter_single_phase_inverter1_pwm_modulator__limited_in[1] = MIN(MAX(_solarhouse2_inverter_controller_gain20__out, -1.0), 1.0);
    HIL_OutInt32(0x2000040 + _solarhouse2_inverter_single_phase_inverter1_pwm_modulator__channels[1], ((unsigned)((_solarhouse2_inverter_single_phase_inverter1_pwm_modulator__limited_in[1] - (-1.0)) * 1250.0)));
    if (_solarhouse2_inverter_controller_constant2__out == 0x0) {
        // pwm_modulator_en
        HIL_OutInt32(0x2000000 + _solarhouse2_inverter_single_phase_inverter1_pwm_modulator__channels[0], 0x0);
        HIL_OutInt32(0x2000000 + _solarhouse2_inverter_single_phase_inverter1_pwm_modulator__channels[1], 0x0);
    }
    else {
        // pwm_modulator_en
        HIL_OutInt32(0x2000000 + _solarhouse2_inverter_single_phase_inverter1_pwm_modulator__channels[0], 0x1);
        HIL_OutInt32(0x2000000 + _solarhouse2_inverter_single_phase_inverter1_pwm_modulator__channels[1], 0x1);
    }
    HIL_OutInt32(0x2000140, _solarhouse2_inverter_single_phase_inverter1_pwm_modulator__update_mask);
    // Generated from the component: SolarHouse3.Inverter.Single Phase Inverter1.PWM_Modulator
    _solarhouse3_inverter_single_phase_inverter1_pwm_modulator__limited_in[0] = MIN(MAX(_solarhouse3_inverter_controller_bus_split1__out, -1.0), 1.0);
    HIL_OutInt32(0x2000040 + _solarhouse3_inverter_single_phase_inverter1_pwm_modulator__channels[0], ((unsigned)((_solarhouse3_inverter_single_phase_inverter1_pwm_modulator__limited_in[0] - (-1.0)) * 1250.0)));
    _solarhouse3_inverter_single_phase_inverter1_pwm_modulator__limited_in[1] = MIN(MAX(_solarhouse3_inverter_controller_gain20__out, -1.0), 1.0);
    HIL_OutInt32(0x2000040 + _solarhouse3_inverter_single_phase_inverter1_pwm_modulator__channels[1], ((unsigned)((_solarhouse3_inverter_single_phase_inverter1_pwm_modulator__limited_in[1] - (-1.0)) * 1250.0)));
    if (_solarhouse3_inverter_controller_constant2__out == 0x0) {
        // pwm_modulator_en
        HIL_OutInt32(0x2000000 + _solarhouse3_inverter_single_phase_inverter1_pwm_modulator__channels[0], 0x0);
        HIL_OutInt32(0x2000000 + _solarhouse3_inverter_single_phase_inverter1_pwm_modulator__channels[1], 0x0);
    }
    else {
        // pwm_modulator_en
        HIL_OutInt32(0x2000000 + _solarhouse3_inverter_single_phase_inverter1_pwm_modulator__channels[0], 0x1);
        HIL_OutInt32(0x2000000 + _solarhouse3_inverter_single_phase_inverter1_pwm_modulator__channels[1], 0x1);
    }
    HIL_OutInt32(0x2000140, _solarhouse3_inverter_single_phase_inverter1_pwm_modulator__update_mask);
    // Generated from the component: SolarHouse4.Inverter.Single Phase Inverter1.PWM_Modulator
    _solarhouse4_inverter_single_phase_inverter1_pwm_modulator__limited_in[0] = MIN(MAX(_solarhouse4_inverter_controller_bus_split1__out, -1.0), 1.0);
    HIL_OutInt32(0x2000040 + _solarhouse4_inverter_single_phase_inverter1_pwm_modulator__channels[0], ((unsigned)((_solarhouse4_inverter_single_phase_inverter1_pwm_modulator__limited_in[0] - (-1.0)) * 1250.0)));
    _solarhouse4_inverter_single_phase_inverter1_pwm_modulator__limited_in[1] = MIN(MAX(_solarhouse4_inverter_controller_gain20__out, -1.0), 1.0);
    HIL_OutInt32(0x2000040 + _solarhouse4_inverter_single_phase_inverter1_pwm_modulator__channels[1], ((unsigned)((_solarhouse4_inverter_single_phase_inverter1_pwm_modulator__limited_in[1] - (-1.0)) * 1250.0)));
    if (_solarhouse4_inverter_controller_constant2__out == 0x0) {
        // pwm_modulator_en
        HIL_OutInt32(0x2000000 + _solarhouse4_inverter_single_phase_inverter1_pwm_modulator__channels[0], 0x0);
        HIL_OutInt32(0x2000000 + _solarhouse4_inverter_single_phase_inverter1_pwm_modulator__channels[1], 0x0);
    }
    else {
        // pwm_modulator_en
        HIL_OutInt32(0x2000000 + _solarhouse4_inverter_single_phase_inverter1_pwm_modulator__channels[0], 0x1);
        HIL_OutInt32(0x2000000 + _solarhouse4_inverter_single_phase_inverter1_pwm_modulator__channels[1], 0x1);
    }
    HIL_OutInt32(0x2000140, _solarhouse4_inverter_single_phase_inverter1_pwm_modulator__update_mask);
    //@cmp.out.block.end
    //////////////////////////////////////////////////////////////////////////
    // Update block
    //////////////////////////////////////////////////////////////////////////
    //@cmp.update.block.start
    // Generated from the component: ESS.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.LPF_dc
    _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__states[0] = _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__delay_line_in;
    // Generated from the component: ESS.Inverter.Power_Meas.Power_Meas_DQpu.S_and_pf
    // Generated from the component: Measurement.BPF.HPF
    _measurement_bpf_hpf__states[0] = _measurement_bpf_hpf__delay_line_in;
    // Generated from the component: Measurement.BPF1.HPF
    _measurement_bpf1_hpf__states[0] = _measurement_bpf1_hpf__delay_line_in;
    // Generated from the component: SolarHouse1.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.LPF_dc
    _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__states[0] = _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__delay_line_in;
    // Generated from the component: SolarHouse1.Inverter.Power_Meas.Power_Meas_DQpu.S_and_pf
    // Generated from the component: SolarHouse1.Measurement.BPF.HPF
    _solarhouse1_measurement_bpf_hpf__states[0] = _solarhouse1_measurement_bpf_hpf__delay_line_in;
    // Generated from the component: SolarHouse1.Measurement.BPF1.HPF
    _solarhouse1_measurement_bpf1_hpf__states[0] = _solarhouse1_measurement_bpf1_hpf__delay_line_in;
    // Generated from the component: SolarHouse2.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.LPF_dc
    _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__states[0] = _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__delay_line_in;
    // Generated from the component: SolarHouse2.Inverter.Power_Meas.Power_Meas_DQpu.S_and_pf
    // Generated from the component: SolarHouse2.Measurement.BPF.HPF
    _solarhouse2_measurement_bpf_hpf__states[0] = _solarhouse2_measurement_bpf_hpf__delay_line_in;
    // Generated from the component: SolarHouse2.Measurement.BPF1.HPF
    _solarhouse2_measurement_bpf1_hpf__states[0] = _solarhouse2_measurement_bpf1_hpf__delay_line_in;
    // Generated from the component: SolarHouse3.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.LPF_dc
    _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__states[0] = _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__delay_line_in;
    // Generated from the component: SolarHouse3.Inverter.Power_Meas.Power_Meas_DQpu.S_and_pf
    // Generated from the component: SolarHouse3.Measurement.BPF.HPF
    _solarhouse3_measurement_bpf_hpf__states[0] = _solarhouse3_measurement_bpf_hpf__delay_line_in;
    // Generated from the component: SolarHouse3.Measurement.BPF1.HPF
    _solarhouse3_measurement_bpf1_hpf__states[0] = _solarhouse3_measurement_bpf1_hpf__delay_line_in;
    // Generated from the component: SolarHouse4.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.LPF_dc
    _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__states[0] = _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__delay_line_in;
    // Generated from the component: SolarHouse4.Inverter.Power_Meas.Power_Meas_DQpu.S_and_pf
    // Generated from the component: SolarHouse4.Measurement.BPF.HPF
    _solarhouse4_measurement_bpf_hpf__states[0] = _solarhouse4_measurement_bpf_hpf__delay_line_in;
    // Generated from the component: SolarHouse4.Measurement.BPF1.HPF
    _solarhouse4_measurement_bpf1_hpf__states[0] = _solarhouse4_measurement_bpf1_hpf__delay_line_in;
    // Generated from the component: ESS.Inverter.Controller.C function4
    // Generated from the component: ESS.Inverter.Controller.C function1
    // Generated from the component: ESS.Inverter.Controller.Hilbert Transform
    _ess_inverter_controller_hilbert_transform__states[0] = _ess_inverter_controller_hilbert_transform__delay_line_in;
    // Generated from the component: ESS.Inverter.Controller.Hilbert Transform1
    _ess_inverter_controller_hilbert_transform1__states[0] = _ess_inverter_controller_hilbert_transform1__delay_line_in;
    // Generated from the component: ESS.Inverter.LPF_dc
    _ess_inverter_lpf_dc__states[0] = _ess_inverter_lpf_dc__delay_line_in;
    // Generated from the component: Measurement.BPF.LPF
    _measurement_bpf_lpf__states[0] = _measurement_bpf_lpf__delay_line_in;
    // Generated from the component: Measurement.BPF1.LPF
    _measurement_bpf1_lpf__states[0] = _measurement_bpf1_lpf__delay_line_in;
    // Generated from the component: SolarHouse1.Inverter.Controller.C function4
    // Generated from the component: SolarHouse1.Inverter.Controller.C function1
    // Generated from the component: SolarHouse1.Inverter.Controller.Hilbert Transform
    _solarhouse1_inverter_controller_hilbert_transform__states[0] = _solarhouse1_inverter_controller_hilbert_transform__delay_line_in;
    // Generated from the component: SolarHouse1.Inverter.Controller.Hilbert Transform1
    _solarhouse1_inverter_controller_hilbert_transform1__states[0] = _solarhouse1_inverter_controller_hilbert_transform1__delay_line_in;
    // Generated from the component: SolarHouse1.Inverter.LPF_dc
    _solarhouse1_inverter_lpf_dc__states[0] = _solarhouse1_inverter_lpf_dc__delay_line_in;
    // Generated from the component: SolarHouse1.Measurement.BPF.LPF
    _solarhouse1_measurement_bpf_lpf__states[0] = _solarhouse1_measurement_bpf_lpf__delay_line_in;
    // Generated from the component: SolarHouse1.Measurement.BPF1.LPF
    _solarhouse1_measurement_bpf1_lpf__states[0] = _solarhouse1_measurement_bpf1_lpf__delay_line_in;
    // Generated from the component: SolarHouse2.Inverter.Controller.C function4
    // Generated from the component: SolarHouse2.Inverter.Controller.C function1
    // Generated from the component: SolarHouse2.Inverter.Controller.Hilbert Transform
    _solarhouse2_inverter_controller_hilbert_transform__states[0] = _solarhouse2_inverter_controller_hilbert_transform__delay_line_in;
    // Generated from the component: SolarHouse2.Inverter.Controller.Hilbert Transform1
    _solarhouse2_inverter_controller_hilbert_transform1__states[0] = _solarhouse2_inverter_controller_hilbert_transform1__delay_line_in;
    // Generated from the component: SolarHouse2.Inverter.LPF_dc
    _solarhouse2_inverter_lpf_dc__states[0] = _solarhouse2_inverter_lpf_dc__delay_line_in;
    // Generated from the component: SolarHouse2.Measurement.BPF.LPF
    _solarhouse2_measurement_bpf_lpf__states[0] = _solarhouse2_measurement_bpf_lpf__delay_line_in;
    // Generated from the component: SolarHouse2.Measurement.BPF1.LPF
    _solarhouse2_measurement_bpf1_lpf__states[0] = _solarhouse2_measurement_bpf1_lpf__delay_line_in;
    // Generated from the component: SolarHouse3.Inverter.Controller.C function4
    // Generated from the component: SolarHouse3.Inverter.Controller.C function1
    // Generated from the component: SolarHouse3.Inverter.Controller.Hilbert Transform
    _solarhouse3_inverter_controller_hilbert_transform__states[0] = _solarhouse3_inverter_controller_hilbert_transform__delay_line_in;
    // Generated from the component: SolarHouse3.Inverter.Controller.Hilbert Transform1
    _solarhouse3_inverter_controller_hilbert_transform1__states[0] = _solarhouse3_inverter_controller_hilbert_transform1__delay_line_in;
    // Generated from the component: SolarHouse3.Inverter.LPF_dc
    _solarhouse3_inverter_lpf_dc__states[0] = _solarhouse3_inverter_lpf_dc__delay_line_in;
    // Generated from the component: SolarHouse3.Measurement.BPF.LPF
    _solarhouse3_measurement_bpf_lpf__states[0] = _solarhouse3_measurement_bpf_lpf__delay_line_in;
    // Generated from the component: SolarHouse3.Measurement.BPF1.LPF
    _solarhouse3_measurement_bpf1_lpf__states[0] = _solarhouse3_measurement_bpf1_lpf__delay_line_in;
    // Generated from the component: SolarHouse4.Inverter.Controller.C function4
    // Generated from the component: SolarHouse4.Inverter.Controller.C function1
    // Generated from the component: SolarHouse4.Inverter.Controller.Hilbert Transform
    _solarhouse4_inverter_controller_hilbert_transform__states[0] = _solarhouse4_inverter_controller_hilbert_transform__delay_line_in;
    // Generated from the component: SolarHouse4.Inverter.Controller.Hilbert Transform1
    _solarhouse4_inverter_controller_hilbert_transform1__states[0] = _solarhouse4_inverter_controller_hilbert_transform1__delay_line_in;
    // Generated from the component: SolarHouse4.Inverter.LPF_dc
    _solarhouse4_inverter_lpf_dc__states[0] = _solarhouse4_inverter_lpf_dc__delay_line_in;
    // Generated from the component: SolarHouse4.Measurement.BPF.LPF
    _solarhouse4_measurement_bpf_lpf__states[0] = _solarhouse4_measurement_bpf_lpf__delay_line_in;
    // Generated from the component: SolarHouse4.Measurement.BPF1.LPF
    _solarhouse4_measurement_bpf1_lpf__states[0] = _solarhouse4_measurement_bpf1_lpf__delay_line_in;
    // Generated from the component: Measurement.Hilbert Transform1
    _measurement_hilbert_transform1__states[0] = _measurement_hilbert_transform1__delay_line_in;
    // Generated from the component: Measurement.Hilbert Transform
    _measurement_hilbert_transform__states[0] = _measurement_hilbert_transform__delay_line_in;
    // Generated from the component: SolarHouse1.Measurement.Hilbert Transform1
    _solarhouse1_measurement_hilbert_transform1__states[0] = _solarhouse1_measurement_hilbert_transform1__delay_line_in;
    // Generated from the component: SolarHouse1.Measurement.Hilbert Transform
    _solarhouse1_measurement_hilbert_transform__states[0] = _solarhouse1_measurement_hilbert_transform__delay_line_in;
    // Generated from the component: SolarHouse2.Measurement.Hilbert Transform1
    _solarhouse2_measurement_hilbert_transform1__states[0] = _solarhouse2_measurement_hilbert_transform1__delay_line_in;
    // Generated from the component: SolarHouse2.Measurement.Hilbert Transform
    _solarhouse2_measurement_hilbert_transform__states[0] = _solarhouse2_measurement_hilbert_transform__delay_line_in;
    // Generated from the component: SolarHouse3.Measurement.Hilbert Transform1
    _solarhouse3_measurement_hilbert_transform1__states[0] = _solarhouse3_measurement_hilbert_transform1__delay_line_in;
    // Generated from the component: SolarHouse3.Measurement.Hilbert Transform
    _solarhouse3_measurement_hilbert_transform__states[0] = _solarhouse3_measurement_hilbert_transform__delay_line_in;
    // Generated from the component: SolarHouse4.Measurement.Hilbert Transform1
    _solarhouse4_measurement_hilbert_transform1__states[0] = _solarhouse4_measurement_hilbert_transform1__delay_line_in;
    // Generated from the component: SolarHouse4.Measurement.Hilbert Transform
    _solarhouse4_measurement_hilbert_transform__states[0] = _solarhouse4_measurement_hilbert_transform__delay_line_in;
    // Generated from the component: ESS.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.LPF_dc2
    _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__states[0] = _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__delay_line_in;
    // Generated from the component: ESS.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.LPF_dc1
    _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__states[0] = _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__delay_line_in;
    // Generated from the component: SolarHouse1.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.LPF_dc2
    _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__states[0] = _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__delay_line_in;
    // Generated from the component: SolarHouse1.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.LPF_dc1
    _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__states[0] = _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__delay_line_in;
    // Generated from the component: SolarHouse2.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.LPF_dc2
    _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__states[0] = _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__delay_line_in;
    // Generated from the component: SolarHouse2.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.LPF_dc1
    _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__states[0] = _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__delay_line_in;
    // Generated from the component: SolarHouse3.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.LPF_dc2
    _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__states[0] = _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__delay_line_in;
    // Generated from the component: SolarHouse3.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.LPF_dc1
    _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__states[0] = _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__delay_line_in;
    // Generated from the component: SolarHouse4.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.LPF_dc2
    _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__states[0] = _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__delay_line_in;
    // Generated from the component: SolarHouse4.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.LPF_dc1
    _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__states[0] = _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__delay_line_in;
    // Generated from the component: ESS.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.outer power loop1.Comparator1
    if (_ess_inverter_controller_outer_voltage_loop___inner_current_loop_squared_vt2_sum3__out < _ess_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_limit_zero__out) {
        _ess_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_comparator1__state = 0;
    } else if (_ess_inverter_controller_outer_voltage_loop___inner_current_loop_squared_vt2_sum3__out > _ess_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_limit_zero__out) {
        _ess_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_comparator1__state = 1;
    }
    // Generated from the component: ESS.Inverter.Power_Meas.Power_Meas_DQpu.LPF_P
    _ess_inverter_power_meas_power_meas_dqpu_lpf_p__states[0] = _ess_inverter_power_meas_power_meas_dqpu_lpf_p__delay_line_in;
    // Generated from the component: ESS.Inverter.Power_Meas.Power_Meas_DQpu.LPF_Q
    _ess_inverter_power_meas_power_meas_dqpu_lpf_q__states[0] = _ess_inverter_power_meas_power_meas_dqpu_lpf_q__delay_line_in;
    // Generated from the component: Measurement.LPF_P
    _measurement_lpf_p__states[0] = _measurement_lpf_p__delay_line_in;
    // Generated from the component: SolarHouse1.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.outer power loop1.Comparator1
    if (_solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_squared_vt2_sum3__out < _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_limit_zero__out) {
        _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_comparator1__state = 0;
    } else if (_solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_squared_vt2_sum3__out > _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_limit_zero__out) {
        _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_comparator1__state = 1;
    }
    // Generated from the component: SolarHouse1.Inverter.Power_Meas.Power_Meas_DQpu.LPF_P
    _solarhouse1_inverter_power_meas_power_meas_dqpu_lpf_p__states[0] = _solarhouse1_inverter_power_meas_power_meas_dqpu_lpf_p__delay_line_in;
    // Generated from the component: SolarHouse1.Inverter.Power_Meas.Power_Meas_DQpu.LPF_Q
    _solarhouse1_inverter_power_meas_power_meas_dqpu_lpf_q__states[0] = _solarhouse1_inverter_power_meas_power_meas_dqpu_lpf_q__delay_line_in;
    // Generated from the component: SolarHouse1.Measurement.LPF_P
    _solarhouse1_measurement_lpf_p__states[0] = _solarhouse1_measurement_lpf_p__delay_line_in;
    // Generated from the component: SolarHouse2.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.outer power loop1.Comparator1
    if (_solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_squared_vt2_sum3__out < _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_limit_zero__out) {
        _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_comparator1__state = 0;
    } else if (_solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_squared_vt2_sum3__out > _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_limit_zero__out) {
        _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_comparator1__state = 1;
    }
    // Generated from the component: SolarHouse2.Inverter.Power_Meas.Power_Meas_DQpu.LPF_P
    _solarhouse2_inverter_power_meas_power_meas_dqpu_lpf_p__states[0] = _solarhouse2_inverter_power_meas_power_meas_dqpu_lpf_p__delay_line_in;
    // Generated from the component: SolarHouse2.Inverter.Power_Meas.Power_Meas_DQpu.LPF_Q
    _solarhouse2_inverter_power_meas_power_meas_dqpu_lpf_q__states[0] = _solarhouse2_inverter_power_meas_power_meas_dqpu_lpf_q__delay_line_in;
    // Generated from the component: SolarHouse2.Measurement.LPF_P
    _solarhouse2_measurement_lpf_p__states[0] = _solarhouse2_measurement_lpf_p__delay_line_in;
    // Generated from the component: SolarHouse3.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.outer power loop1.Comparator1
    if (_solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_squared_vt2_sum3__out < _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_limit_zero__out) {
        _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_comparator1__state = 0;
    } else if (_solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_squared_vt2_sum3__out > _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_limit_zero__out) {
        _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_comparator1__state = 1;
    }
    // Generated from the component: SolarHouse3.Inverter.Power_Meas.Power_Meas_DQpu.LPF_P
    _solarhouse3_inverter_power_meas_power_meas_dqpu_lpf_p__states[0] = _solarhouse3_inverter_power_meas_power_meas_dqpu_lpf_p__delay_line_in;
    // Generated from the component: SolarHouse3.Inverter.Power_Meas.Power_Meas_DQpu.LPF_Q
    _solarhouse3_inverter_power_meas_power_meas_dqpu_lpf_q__states[0] = _solarhouse3_inverter_power_meas_power_meas_dqpu_lpf_q__delay_line_in;
    // Generated from the component: SolarHouse3.Measurement.LPF_P
    _solarhouse3_measurement_lpf_p__states[0] = _solarhouse3_measurement_lpf_p__delay_line_in;
    // Generated from the component: SolarHouse4.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.outer power loop1.Comparator1
    if (_solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_squared_vt2_sum3__out < _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_limit_zero__out) {
        _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_comparator1__state = 0;
    } else if (_solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_squared_vt2_sum3__out > _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_limit_zero__out) {
        _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_comparator1__state = 1;
    }
    // Generated from the component: SolarHouse4.Inverter.Power_Meas.Power_Meas_DQpu.LPF_P
    _solarhouse4_inverter_power_meas_power_meas_dqpu_lpf_p__states[0] = _solarhouse4_inverter_power_meas_power_meas_dqpu_lpf_p__delay_line_in;
    // Generated from the component: SolarHouse4.Inverter.Power_Meas.Power_Meas_DQpu.LPF_Q
    _solarhouse4_inverter_power_meas_power_meas_dqpu_lpf_q__states[0] = _solarhouse4_inverter_power_meas_power_meas_dqpu_lpf_q__delay_line_in;
    // Generated from the component: SolarHouse4.Measurement.LPF_P
    _solarhouse4_measurement_lpf_p__states[0] = _solarhouse4_measurement_lpf_p__delay_line_in;
    // Generated from the component: ESS.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.PID controller2
    if (!_ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__av_active) {
        _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__integrator_state += 69.44444444444444 * _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum9__out * 0.0002;
    }
    // Generated from the component: ESS.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.PID controller1
    if (!_ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__av_active) {
        _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__integrator_state += 69.44444444444444 * _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum8__out * 0.0002;
    }
    // Generated from the component: SolarHouse1.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.PID controller2
    if (!_solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__av_active) {
        _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__integrator_state += 69.44444444444444 * _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum9__out * 0.0002;
    }
    // Generated from the component: SolarHouse1.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.PID controller1
    if (!_solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__av_active) {
        _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__integrator_state += 69.44444444444444 * _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum8__out * 0.0002;
    }
    // Generated from the component: SolarHouse2.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.PID controller2
    if (!_solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__av_active) {
        _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__integrator_state += 69.44444444444444 * _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum9__out * 0.0002;
    }
    // Generated from the component: SolarHouse2.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.PID controller1
    if (!_solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__av_active) {
        _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__integrator_state += 69.44444444444444 * _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum8__out * 0.0002;
    }
    // Generated from the component: SolarHouse3.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.PID controller2
    if (!_solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__av_active) {
        _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__integrator_state += 69.44444444444444 * _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum9__out * 0.0002;
    }
    // Generated from the component: SolarHouse3.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.PID controller1
    if (!_solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__av_active) {
        _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__integrator_state += 69.44444444444444 * _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum8__out * 0.0002;
    }
    // Generated from the component: SolarHouse4.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.PID controller2
    if (!_solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__av_active) {
        _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__integrator_state += 69.44444444444444 * _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum9__out * 0.0002;
    }
    // Generated from the component: SolarHouse4.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.PID controller1
    if (!_solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__av_active) {
        _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__integrator_state += 69.44444444444444 * _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum8__out * 0.0002;
    }
    //@cmp.update.block.end
}
void TimerCounterHandler_2_user_sp_cpu0_dev0() {
#if DEBUG_MODE
    printf("\n\rTimerCounterHandler_2");
#endif
    //////////////////////////////////////////////////////////////////////////
    // Output block
    //////////////////////////////////////////////////////////////////////////
    //@cmp.out.block.start
    // Generated from the component: ESS.Inverter.Controller.C function3
    _ess_inverter_controller_c_function3__Pref = 0.2;
    if (_ess_inverter_controller_c_function3__k > 12)_ess_inverter_controller_c_function3__k = 0;
    if (_ess_inverter_controller_c_function3__t > 3)_ess_inverter_controller_c_function3__t = 0;
    if (_ess_inverter_controller_c_function3__k == 0) {
        _ess_inverter_controller_c_function3__Pref = 0.7;
    }
    else if (_ess_inverter_controller_c_function3__k == 1) {
        _ess_inverter_controller_c_function3__Pref = 0.8;
    }
    else if (_ess_inverter_controller_c_function3__k == 2) {
        _ess_inverter_controller_c_function3__Pref = 0.6;
    }
    else if (_ess_inverter_controller_c_function3__k == 3) {
        _ess_inverter_controller_c_function3__Pref = 0.5;
    }
    else if (_ess_inverter_controller_c_function3__k == 4) {
        _ess_inverter_controller_c_function3__Pref = 0.2;
    }
    else if (_ess_inverter_controller_c_function3__k == 5) {
        _ess_inverter_controller_c_function3__Pref = 0.8;
    }
    else if (_ess_inverter_controller_c_function3__k == 6) {
        _ess_inverter_controller_c_function3__Pref = 0.7;
    }
    else if (_ess_inverter_controller_c_function3__k == 7) {
        _ess_inverter_controller_c_function3__Pref = 0.5;
    }
    else if (_ess_inverter_controller_c_function3__k == 8) {
        _ess_inverter_controller_c_function3__Pref = 0.66;
    }
    else if (_ess_inverter_controller_c_function3__k == 9) {
        _ess_inverter_controller_c_function3__Pref = 0.75;
    }
    else if (_ess_inverter_controller_c_function3__k == 10) {
        _ess_inverter_controller_c_function3__Pref = 0.54;
    }
    else if (_ess_inverter_controller_c_function3__k == 11) {
        _ess_inverter_controller_c_function3__Pref = 0.30;
    }
    else if (_ess_inverter_controller_c_function3__k == 12) {
        _ess_inverter_controller_c_function3__Pref = 0.45;
    }
    if (_ess_inverter_controller_c_function3__t >= 3)_ess_inverter_controller_c_function3__k += 1;
    _ess_inverter_controller_c_function3__t += 1;
    // Generated from the component: ESS.Inverter.Controller.Gain23
    _ess_inverter_controller_gain23__out = 1000.0 * _ess_inverter_controller_c_function3__Pref;
    // Generated from the component: ESS.Inverter.Controller.Rate Transition9.Input
    _ess_inverter_controller_rate_transition9_output__out = _ess_inverter_controller_c_function3__Pref;
    // Generated from the component: SolarHouse1.Inverter.Controller.C function3
    _solarhouse1_inverter_controller_c_function3__Pref = 0.2;
    if (_solarhouse1_inverter_controller_c_function3__k > 12)_solarhouse1_inverter_controller_c_function3__k = 0;
    if (_solarhouse1_inverter_controller_c_function3__t > 3)_solarhouse1_inverter_controller_c_function3__t = 0;
    if (_solarhouse1_inverter_controller_c_function3__k == 0) {
        _solarhouse1_inverter_controller_c_function3__Pref = 0.7;
    }
    else if (_solarhouse1_inverter_controller_c_function3__k == 1) {
        _solarhouse1_inverter_controller_c_function3__Pref = 0.8;
    }
    else if (_solarhouse1_inverter_controller_c_function3__k == 2) {
        _solarhouse1_inverter_controller_c_function3__Pref = 0.6;
    }
    else if (_solarhouse1_inverter_controller_c_function3__k == 3) {
        _solarhouse1_inverter_controller_c_function3__Pref = 0.5;
    }
    else if (_solarhouse1_inverter_controller_c_function3__k == 4) {
        _solarhouse1_inverter_controller_c_function3__Pref = 0.2;
    }
    else if (_solarhouse1_inverter_controller_c_function3__k == 5) {
        _solarhouse1_inverter_controller_c_function3__Pref = 0.8;
    }
    else if (_solarhouse1_inverter_controller_c_function3__k == 6) {
        _solarhouse1_inverter_controller_c_function3__Pref = 0.7;
    }
    else if (_solarhouse1_inverter_controller_c_function3__k == 7) {
        _solarhouse1_inverter_controller_c_function3__Pref = 0.5;
    }
    else if (_solarhouse1_inverter_controller_c_function3__k == 8) {
        _solarhouse1_inverter_controller_c_function3__Pref = 0.66;
    }
    else if (_solarhouse1_inverter_controller_c_function3__k == 9) {
        _solarhouse1_inverter_controller_c_function3__Pref = 0.75;
    }
    else if (_solarhouse1_inverter_controller_c_function3__k == 10) {
        _solarhouse1_inverter_controller_c_function3__Pref = 0.54;
    }
    else if (_solarhouse1_inverter_controller_c_function3__k == 11) {
        _solarhouse1_inverter_controller_c_function3__Pref = 0.30;
    }
    else if (_solarhouse1_inverter_controller_c_function3__k == 12) {
        _solarhouse1_inverter_controller_c_function3__Pref = 0.45;
    }
    if (_solarhouse1_inverter_controller_c_function3__t >= 3)_solarhouse1_inverter_controller_c_function3__k += 1;
    _solarhouse1_inverter_controller_c_function3__t += 1;
    // Generated from the component: SolarHouse1.Inverter.Controller.Gain23
    _solarhouse1_inverter_controller_gain23__out = 1000.0 * _solarhouse1_inverter_controller_c_function3__Pref;
    // Generated from the component: SolarHouse1.Inverter.Controller.Rate Transition9.Input
    _solarhouse1_inverter_controller_rate_transition9_output__out = _solarhouse1_inverter_controller_c_function3__Pref;
    // Generated from the component: SolarHouse2.Inverter.Controller.C function3
    _solarhouse2_inverter_controller_c_function3__Pref = 0.2;
    if (_solarhouse2_inverter_controller_c_function3__k > 12)_solarhouse2_inverter_controller_c_function3__k = 0;
    if (_solarhouse2_inverter_controller_c_function3__t > 3)_solarhouse2_inverter_controller_c_function3__t = 0;
    if (_solarhouse2_inverter_controller_c_function3__k == 0) {
        _solarhouse2_inverter_controller_c_function3__Pref = 0.7;
    }
    else if (_solarhouse2_inverter_controller_c_function3__k == 1) {
        _solarhouse2_inverter_controller_c_function3__Pref = 0.8;
    }
    else if (_solarhouse2_inverter_controller_c_function3__k == 2) {
        _solarhouse2_inverter_controller_c_function3__Pref = 0.6;
    }
    else if (_solarhouse2_inverter_controller_c_function3__k == 3) {
        _solarhouse2_inverter_controller_c_function3__Pref = 0.5;
    }
    else if (_solarhouse2_inverter_controller_c_function3__k == 4) {
        _solarhouse2_inverter_controller_c_function3__Pref = 0.2;
    }
    else if (_solarhouse2_inverter_controller_c_function3__k == 5) {
        _solarhouse2_inverter_controller_c_function3__Pref = 0.8;
    }
    else if (_solarhouse2_inverter_controller_c_function3__k == 6) {
        _solarhouse2_inverter_controller_c_function3__Pref = 0.7;
    }
    else if (_solarhouse2_inverter_controller_c_function3__k == 7) {
        _solarhouse2_inverter_controller_c_function3__Pref = 0.5;
    }
    else if (_solarhouse2_inverter_controller_c_function3__k == 8) {
        _solarhouse2_inverter_controller_c_function3__Pref = 0.66;
    }
    else if (_solarhouse2_inverter_controller_c_function3__k == 9) {
        _solarhouse2_inverter_controller_c_function3__Pref = 0.75;
    }
    else if (_solarhouse2_inverter_controller_c_function3__k == 10) {
        _solarhouse2_inverter_controller_c_function3__Pref = 0.54;
    }
    else if (_solarhouse2_inverter_controller_c_function3__k == 11) {
        _solarhouse2_inverter_controller_c_function3__Pref = 0.30;
    }
    else if (_solarhouse2_inverter_controller_c_function3__k == 12) {
        _solarhouse2_inverter_controller_c_function3__Pref = 0.45;
    }
    if (_solarhouse2_inverter_controller_c_function3__t >= 3)_solarhouse2_inverter_controller_c_function3__k += 1;
    _solarhouse2_inverter_controller_c_function3__t += 1;
    // Generated from the component: SolarHouse2.Inverter.Controller.Gain23
    _solarhouse2_inverter_controller_gain23__out = 1000.0 * _solarhouse2_inverter_controller_c_function3__Pref;
    // Generated from the component: SolarHouse2.Inverter.Controller.Rate Transition9.Input
    _solarhouse2_inverter_controller_rate_transition9_output__out = _solarhouse2_inverter_controller_c_function3__Pref;
    // Generated from the component: SolarHouse3.Inverter.Controller.C function3
    _solarhouse3_inverter_controller_c_function3__Pref = 0.2;
    if (_solarhouse3_inverter_controller_c_function3__k > 12)_solarhouse3_inverter_controller_c_function3__k = 0;
    if (_solarhouse3_inverter_controller_c_function3__t > 3)_solarhouse3_inverter_controller_c_function3__t = 0;
    if (_solarhouse3_inverter_controller_c_function3__k == 0) {
        _solarhouse3_inverter_controller_c_function3__Pref = 0.7;
    }
    else if (_solarhouse3_inverter_controller_c_function3__k == 1) {
        _solarhouse3_inverter_controller_c_function3__Pref = 0.8;
    }
    else if (_solarhouse3_inverter_controller_c_function3__k == 2) {
        _solarhouse3_inverter_controller_c_function3__Pref = 0.6;
    }
    else if (_solarhouse3_inverter_controller_c_function3__k == 3) {
        _solarhouse3_inverter_controller_c_function3__Pref = 0.5;
    }
    else if (_solarhouse3_inverter_controller_c_function3__k == 4) {
        _solarhouse3_inverter_controller_c_function3__Pref = 0.2;
    }
    else if (_solarhouse3_inverter_controller_c_function3__k == 5) {
        _solarhouse3_inverter_controller_c_function3__Pref = 0.8;
    }
    else if (_solarhouse3_inverter_controller_c_function3__k == 6) {
        _solarhouse3_inverter_controller_c_function3__Pref = 0.7;
    }
    else if (_solarhouse3_inverter_controller_c_function3__k == 7) {
        _solarhouse3_inverter_controller_c_function3__Pref = 0.5;
    }
    else if (_solarhouse3_inverter_controller_c_function3__k == 8) {
        _solarhouse3_inverter_controller_c_function3__Pref = 0.66;
    }
    else if (_solarhouse3_inverter_controller_c_function3__k == 9) {
        _solarhouse3_inverter_controller_c_function3__Pref = 0.75;
    }
    else if (_solarhouse3_inverter_controller_c_function3__k == 10) {
        _solarhouse3_inverter_controller_c_function3__Pref = 0.54;
    }
    else if (_solarhouse3_inverter_controller_c_function3__k == 11) {
        _solarhouse3_inverter_controller_c_function3__Pref = 0.30;
    }
    else if (_solarhouse3_inverter_controller_c_function3__k == 12) {
        _solarhouse3_inverter_controller_c_function3__Pref = 0.45;
    }
    if (_solarhouse3_inverter_controller_c_function3__t >= 3)_solarhouse3_inverter_controller_c_function3__k += 1;
    _solarhouse3_inverter_controller_c_function3__t += 1;
    // Generated from the component: SolarHouse3.Inverter.Controller.Gain23
    _solarhouse3_inverter_controller_gain23__out = 1000.0 * _solarhouse3_inverter_controller_c_function3__Pref;
    // Generated from the component: SolarHouse3.Inverter.Controller.Rate Transition9.Input
    _solarhouse3_inverter_controller_rate_transition9_output__out = _solarhouse3_inverter_controller_c_function3__Pref;
    // Generated from the component: SolarHouse4.Inverter.Controller.C function3
    _solarhouse4_inverter_controller_c_function3__Pref = 0.2;
    if (_solarhouse4_inverter_controller_c_function3__k > 12)_solarhouse4_inverter_controller_c_function3__k = 0;
    if (_solarhouse4_inverter_controller_c_function3__t > 3)_solarhouse4_inverter_controller_c_function3__t = 0;
    if (_solarhouse4_inverter_controller_c_function3__k == 0) {
        _solarhouse4_inverter_controller_c_function3__Pref = 0.7;
    }
    else if (_solarhouse4_inverter_controller_c_function3__k == 1) {
        _solarhouse4_inverter_controller_c_function3__Pref = 0.8;
    }
    else if (_solarhouse4_inverter_controller_c_function3__k == 2) {
        _solarhouse4_inverter_controller_c_function3__Pref = 0.6;
    }
    else if (_solarhouse4_inverter_controller_c_function3__k == 3) {
        _solarhouse4_inverter_controller_c_function3__Pref = 0.5;
    }
    else if (_solarhouse4_inverter_controller_c_function3__k == 4) {
        _solarhouse4_inverter_controller_c_function3__Pref = 0.2;
    }
    else if (_solarhouse4_inverter_controller_c_function3__k == 5) {
        _solarhouse4_inverter_controller_c_function3__Pref = 0.8;
    }
    else if (_solarhouse4_inverter_controller_c_function3__k == 6) {
        _solarhouse4_inverter_controller_c_function3__Pref = 0.7;
    }
    else if (_solarhouse4_inverter_controller_c_function3__k == 7) {
        _solarhouse4_inverter_controller_c_function3__Pref = 0.5;
    }
    else if (_solarhouse4_inverter_controller_c_function3__k == 8) {
        _solarhouse4_inverter_controller_c_function3__Pref = 0.66;
    }
    else if (_solarhouse4_inverter_controller_c_function3__k == 9) {
        _solarhouse4_inverter_controller_c_function3__Pref = 0.75;
    }
    else if (_solarhouse4_inverter_controller_c_function3__k == 10) {
        _solarhouse4_inverter_controller_c_function3__Pref = 0.54;
    }
    else if (_solarhouse4_inverter_controller_c_function3__k == 11) {
        _solarhouse4_inverter_controller_c_function3__Pref = 0.30;
    }
    else if (_solarhouse4_inverter_controller_c_function3__k == 12) {
        _solarhouse4_inverter_controller_c_function3__Pref = 0.45;
    }
    if (_solarhouse4_inverter_controller_c_function3__t >= 3)_solarhouse4_inverter_controller_c_function3__k += 1;
    _solarhouse4_inverter_controller_c_function3__t += 1;
    // Generated from the component: SolarHouse4.Inverter.Controller.Gain23
    _solarhouse4_inverter_controller_gain23__out = 1000.0 * _solarhouse4_inverter_controller_c_function3__Pref;
    // Generated from the component: SolarHouse4.Inverter.Controller.Rate Transition9.Input
    _solarhouse4_inverter_controller_rate_transition9_output__out = _solarhouse4_inverter_controller_c_function3__Pref;
    // Generated from the component: ESS.Inverter.Controller.Pref
    HIL_OutAO(0x4011, (float)_ess_inverter_controller_gain23__out);
    // Generated from the component: ESS.C function3
    _ess_c_function3__RegD = _ess_rate_transition2_output__out;
    if (_ess_c_function3__t > 3) {
        _ess_c_function3__t = 0;
        _ess_c_function3__time += 1;
        _ess_c_function3__reg = _ess_c_function3__RegD;
    }
    _ess_c_function3__t += 1;
    // Generated from the component: SolarHouse1.Inverter.Controller.Pref
    HIL_OutAO(0x402b, (float)_solarhouse1_inverter_controller_gain23__out);
    // Generated from the component: SolarHouse2.Inverter.Controller.Pref
    HIL_OutAO(0x4044, (float)_solarhouse2_inverter_controller_gain23__out);
    // Generated from the component: SolarHouse3.Inverter.Controller.Pref
    HIL_OutAO(0x405d, (float)_solarhouse3_inverter_controller_gain23__out);
    // Generated from the component: SolarHouse4.Inverter.Controller.Pref
    HIL_OutAO(0x4076, (float)_solarhouse4_inverter_controller_gain23__out);
    // Generated from the component: ESS.Modbus.Rate Transition2.Input
    _ess_modbus_rate_transition2_output__out = _ess_c_function3__reg;
    // Generated from the component: ESS.Modbus.Rate Transition3.Input
    _ess_modbus_rate_transition3_output__out = _ess_c_function3__time;
    //@cmp.out.block.end
    //////////////////////////////////////////////////////////////////////////
    // Update block
    //////////////////////////////////////////////////////////////////////////
    //@cmp.update.block.start
    // Generated from the component: ESS.Inverter.Controller.C function3
    // Generated from the component: SolarHouse1.Inverter.Controller.C function3
    // Generated from the component: SolarHouse2.Inverter.Controller.C function3
    // Generated from the component: SolarHouse3.Inverter.Controller.C function3
    // Generated from the component: SolarHouse4.Inverter.Controller.C function3
    // Generated from the component: ESS.C function3
    //@cmp.update.block.end
}
// ----------------------------------------------------------------------------------------
//-----------------------------------------------------------------------------------------