#include "rtw_capi.h"
#ifdef HOST_CAPI_BUILD
#include "Top_Level_Simulation_capi_host.h"
#define sizeof(s) ((size_t)(0xFFFF))
#undef rt_offsetof
#define rt_offsetof(s,el) ((uint16_T)(0xFFFF))
#define TARGET_CONST
#define TARGET_STRING(s) (s)
#ifndef SS_UINT64
#define SS_UINT64 30
#endif
#ifndef SS_INT64
#define SS_INT64 31
#endif
#else
#include "builtin_typeid_types.h"
#include "Top_Level_Simulation.h"
#include "Top_Level_Simulation_capi.h"
#include "Top_Level_Simulation_private.h"
#ifdef LIGHT_WEIGHT_CAPI
#define TARGET_CONST
#define TARGET_STRING(s)               ((NULL))
#else
#define TARGET_CONST                   const
#define TARGET_STRING(s)               (s)
#endif
#endif
static const rtwCAPI_Signals rtBlockSignals [ ] = { { 0 , 0 , TARGET_STRING (
"Top_Level_Simulation/From Workspace1" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 ,
0 , 0 } , { 1 , 0 , TARGET_STRING ( "Top_Level_Simulation/From Workspace3" )
, TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 2 , 0 , TARGET_STRING (
"Top_Level_Simulation/From Workspace4" ) , TARGET_STRING ( "" ) , 0 , 0 , 2 ,
0 , 1 } , { 3 , 5 , TARGET_STRING (
"Top_Level_Simulation/Simulation Environment/Arm Inverse Kinematics" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 1 } , { 4 , 0 , TARGET_STRING (
"Top_Level_Simulation/Simulation Environment/Gain" ) , TARGET_STRING ( "" ) ,
0 , 0 , 1 , 0 , 0 } , { 5 , 0 , TARGET_STRING (
"Top_Level_Simulation/Simulation Environment/Integrator" ) , TARGET_STRING (
"" ) , 0 , 0 , 1 , 0 , 2 } , { 6 , 0 , TARGET_STRING (
"Top_Level_Simulation/Simulation Environment/Saturation" ) , TARGET_STRING (
"" ) , 0 , 0 , 1 , 0 , 2 } , { 7 , 0 , TARGET_STRING (
"Top_Level_Simulation/Simulation Environment/Unit Delay" ) , TARGET_STRING (
"" ) , 0 , 0 , 4 , 0 , 1 } , { 8 , 0 , TARGET_STRING (
"Top_Level_Simulation/Simulation Environment/Arm Forward Kinematics/Gain" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 5 , 0 , 2 } , { 9 , 1 , TARGET_STRING (
 "Top_Level_Simulation/Simulation Environment/Arm Forward Kinematics/Coordinate Transformation Conversion"
) , TARGET_STRING ( "" ) , 0 , 0 , 5 , 0 , 2 } , { 10 , 5 , TARGET_STRING (
"Top_Level_Simulation/Simulation Environment/Arm Inverse Kinematics/Transpose"
) , TARGET_STRING ( "" ) , 0 , 0 , 6 , 0 , 1 } , { 11 , 3 , TARGET_STRING (
 "Top_Level_Simulation/Simulation Environment/Arm Inverse Kinematics/Coordinate Transformation Conversion"
) , TARGET_STRING ( "" ) , 0 , 0 , 7 , 0 , 1 } , { 12 , 0 , TARGET_STRING (
"Top_Level_Simulation/Simulation Environment/Incremental to Abolute (Cart)/Sum"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 2 } , { 13 , 4 , TARGET_STRING (
 "Top_Level_Simulation/Simulation Environment/Arm Inverse Kinematics/Inverse Kinematics/MATLAB System"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 1 } , { 14 , 4 , TARGET_STRING (
 "Top_Level_Simulation/Simulation Environment/Arm Inverse Kinematics/Inverse Kinematics/MATLAB System"
) , TARGET_STRING ( "" ) , 1 , 3 , 1 , 0 , 1 } , { 15 , 6 , TARGET_STRING (
 "Top_Level_Simulation/Simulation Environment/Cart Inverse Kinematics/cartTraj2Signal/cartTraj2Signal"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 16 , 6 , TARGET_STRING (
 "Top_Level_Simulation/Simulation Environment/Cart Inverse Kinematics/cartTraj2Signal/cartTraj2Signal"
) , TARGET_STRING ( "" ) , 1 , 0 , 1 , 0 , 0 } , { 17 , 0 , TARGET_STRING (
 "Top_Level_Simulation/Simulation Environment/Cart Inverse Kinematics/cartTraj2Signal/cartTraj2Signal/is_active_c1_Top_Level_Simulation"
) , TARGET_STRING ( "is_active_c1_Top_Level_Simulation" ) , 0 , 2 , 1 , 0 , 0
} , { 18 , 0 , TARGET_STRING (
 "Top_Level_Simulation/Simulation Environment/Cart Trajectory/Discrete Derivative/TSamp"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 19 , 0 , TARGET_STRING (
 "Top_Level_Simulation/Simulation Environment/Position Actuated Robot Environment/Environment_With_Physics/Abs"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 2 } , { 20 , 0 , TARGET_STRING (
 "Top_Level_Simulation/Simulation Environment/Position Actuated Robot Environment/Environment_With_Physics/Switch"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 21 , 0 , TARGET_STRING (
 "Top_Level_Simulation/Simulation Environment/Position Actuated Robot Environment/Position Actuated Manipulator/Gain"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 2 } , { 22 , 0 , TARGET_STRING (
 "Top_Level_Simulation/Simulation Environment/Position Actuated Robot Environment/Position Actuated Manipulator/Sum"
) , TARGET_STRING ( "grip_q" ) , 0 , 0 , 1 , 0 , 2 } , { 23 , 0 ,
TARGET_STRING (
 "Top_Level_Simulation/Simulation Environment/Position Actuated Robot Environment/Mobile Robot/Cart Forward Kinematics/Gain"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 2 } , { 24 , 0 , TARGET_STRING (
 "Top_Level_Simulation/Simulation Environment/Position Actuated Robot Environment/Mobile Robot/Cart Forward Kinematics/Integrator1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 2 } , { 25 , 0 , TARGET_STRING (
 "Top_Level_Simulation/Simulation Environment/Position Actuated Robot Environment/Mobile Robot/Cart Forward Kinematics/Integrator2"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 2 } , { 26 , 0 , TARGET_STRING (
 "Top_Level_Simulation/Simulation Environment/Position Actuated Robot Environment/Mobile Robot/Cart Forward Kinematics/Integrator3"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 2 } , { 27 , 0 , TARGET_STRING (
 "Top_Level_Simulation/Simulation Environment/Position Actuated Robot Environment/Mobile Robot/Cart Forward Kinematics/Product"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 2 } , { 28 , 0 , TARGET_STRING (
 "Top_Level_Simulation/Simulation Environment/Position Actuated Robot Environment/Mobile Robot/Cart Forward Kinematics/Product1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 2 } , { 29 , 0 , TARGET_STRING (
 "Top_Level_Simulation/Simulation Environment/Position Actuated Robot Environment/Mobile Robot/Left_Wheel/Gain"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 2 } , { 30 , 0 , TARGET_STRING (
 "Top_Level_Simulation/Simulation Environment/Position Actuated Robot Environment/Mobile Robot/Left_Wheel/Integrator"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 2 } , { 31 , 0 , TARGET_STRING (
 "Top_Level_Simulation/Simulation Environment/Position Actuated Robot Environment/Mobile Robot/Left_Wheel/Divide"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 2 } , { 32 , 0 , TARGET_STRING (
 "Top_Level_Simulation/Simulation Environment/Position Actuated Robot Environment/Mobile Robot/Left_Wheel/Sum"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 2 } , { 33 , 0 , TARGET_STRING (
 "Top_Level_Simulation/Simulation Environment/Position Actuated Robot Environment/Mobile Robot/Right_Wheel/Integrator"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 2 } , { 34 , 0 , TARGET_STRING (
 "Top_Level_Simulation/Simulation Environment/Position Actuated Robot Environment/Mobile Robot/Right_Wheel/Divide"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 2 } , { 35 , 0 , TARGET_STRING (
 "Top_Level_Simulation/Simulation Environment/Position Actuated Robot Environment/Mobile Robot/Right_Wheel/Sum"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 2 } , { 36 , 0 , TARGET_STRING (
 "Top_Level_Simulation/Simulation Environment/Position Actuated Robot Environment/Solver Configuration/EVAL_KEY/INPUT_10_1_1"
) , TARGET_STRING ( "" ) , 0 , 0 , 9 , 0 , 2 } , { 37 , 0 , TARGET_STRING (
 "Top_Level_Simulation/Simulation Environment/Position Actuated Robot Environment/Solver Configuration/EVAL_KEY/INPUT_11_1_1"
) , TARGET_STRING ( "" ) , 0 , 0 , 9 , 0 , 2 } , { 38 , 0 , TARGET_STRING (
 "Top_Level_Simulation/Simulation Environment/Position Actuated Robot Environment/Solver Configuration/EVAL_KEY/INPUT_12_1_1"
) , TARGET_STRING ( "" ) , 0 , 0 , 9 , 0 , 2 } , { 39 , 0 , TARGET_STRING (
 "Top_Level_Simulation/Simulation Environment/Position Actuated Robot Environment/Solver Configuration/EVAL_KEY/INPUT_13_1_1"
) , TARGET_STRING ( "" ) , 0 , 0 , 9 , 0 , 2 } , { 40 , 0 , TARGET_STRING (
 "Top_Level_Simulation/Simulation Environment/Position Actuated Robot Environment/Solver Configuration/EVAL_KEY/INPUT_13_2_1"
) , TARGET_STRING ( "" ) , 0 , 0 , 9 , 0 , 2 } , { 41 , 0 , TARGET_STRING (
 "Top_Level_Simulation/Simulation Environment/Position Actuated Robot Environment/Solver Configuration/EVAL_KEY/INPUT_1_1_1"
) , TARGET_STRING ( "" ) , 0 , 0 , 9 , 0 , 2 } , { 42 , 0 , TARGET_STRING (
 "Top_Level_Simulation/Simulation Environment/Position Actuated Robot Environment/Solver Configuration/EVAL_KEY/INPUT_2_1_1"
) , TARGET_STRING ( "" ) , 0 , 0 , 9 , 0 , 2 } , { 43 , 0 , TARGET_STRING (
 "Top_Level_Simulation/Simulation Environment/Position Actuated Robot Environment/Solver Configuration/EVAL_KEY/INPUT_3_1_1"
) , TARGET_STRING ( "" ) , 0 , 0 , 9 , 0 , 2 } , { 44 , 0 , TARGET_STRING (
 "Top_Level_Simulation/Simulation Environment/Position Actuated Robot Environment/Solver Configuration/EVAL_KEY/INPUT_3_2_1"
) , TARGET_STRING ( "" ) , 0 , 0 , 9 , 0 , 2 } , { 45 , 0 , TARGET_STRING (
 "Top_Level_Simulation/Simulation Environment/Position Actuated Robot Environment/Solver Configuration/EVAL_KEY/INPUT_4_1_1"
) , TARGET_STRING ( "" ) , 0 , 0 , 9 , 0 , 2 } , { 46 , 0 , TARGET_STRING (
 "Top_Level_Simulation/Simulation Environment/Position Actuated Robot Environment/Solver Configuration/EVAL_KEY/INPUT_5_1_1"
) , TARGET_STRING ( "" ) , 0 , 0 , 9 , 0 , 2 } , { 47 , 0 , TARGET_STRING (
 "Top_Level_Simulation/Simulation Environment/Position Actuated Robot Environment/Solver Configuration/EVAL_KEY/INPUT_6_1_1"
) , TARGET_STRING ( "" ) , 0 , 0 , 9 , 0 , 2 } , { 48 , 0 , TARGET_STRING (
 "Top_Level_Simulation/Simulation Environment/Position Actuated Robot Environment/Solver Configuration/EVAL_KEY/INPUT_7_1_1"
) , TARGET_STRING ( "" ) , 0 , 0 , 9 , 0 , 2 } , { 49 , 0 , TARGET_STRING (
 "Top_Level_Simulation/Simulation Environment/Position Actuated Robot Environment/Solver Configuration/EVAL_KEY/INPUT_8_1_1"
) , TARGET_STRING ( "" ) , 0 , 0 , 9 , 0 , 2 } , { 50 , 0 , TARGET_STRING (
 "Top_Level_Simulation/Simulation Environment/Position Actuated Robot Environment/Solver Configuration/EVAL_KEY/INPUT_9_1_1"
) , TARGET_STRING ( "" ) , 0 , 0 , 9 , 0 , 2 } , { 51 , 0 , TARGET_STRING (
 "Top_Level_Simulation/Simulation Environment/Position Actuated Robot Environment/Solver Configuration/EVAL_KEY/INTERNAL_1_1_1"
) , TARGET_STRING ( "" ) , 0 , 0 , 9 , 0 , 2 } , { 52 , 0 , TARGET_STRING (
 "Top_Level_Simulation/Simulation Environment/Position Actuated Robot Environment/Solver Configuration/EVAL_KEY/INTERNAL_2_1_1"
) , TARGET_STRING ( "" ) , 0 , 0 , 9 , 0 , 2 } , { 53 , 0 , TARGET_STRING (
 "Top_Level_Simulation/Simulation Environment/Position Actuated Robot Environment/Solver Configuration/EVAL_KEY/INTERNAL_3_1_1"
) , TARGET_STRING ( "" ) , 0 , 0 , 9 , 0 , 2 } , { 54 , 0 , TARGET_STRING (
 "Top_Level_Simulation/Simulation Environment/Position Actuated Robot Environment/Solver Configuration/EVAL_KEY/INTERNAL_4_1_1"
) , TARGET_STRING ( "" ) , 0 , 0 , 9 , 0 , 2 } , { 55 , 0 , TARGET_STRING (
 "Top_Level_Simulation/Simulation Environment/Position Actuated Robot Environment/Solver Configuration/EVAL_KEY/INTERNAL_5_1_1"
) , TARGET_STRING ( "" ) , 0 , 0 , 9 , 0 , 2 } , { 56 , 0 , TARGET_STRING (
 "Top_Level_Simulation/Simulation Environment/Position Actuated Robot Environment/Solver Configuration/EVAL_KEY/INTERNAL_6_1_1"
) , TARGET_STRING ( "" ) , 0 , 0 , 9 , 0 , 2 } , { 57 , 0 , TARGET_STRING (
 "Top_Level_Simulation/Simulation Environment/Position Actuated Robot Environment/Solver Configuration/EVAL_KEY/OUTPUT_1_0"
) , TARGET_STRING ( "" ) , 0 , 0 , 10 , 0 , 2 } , { 58 , 0 , TARGET_STRING (
 "Top_Level_Simulation/Simulation Environment/Position Actuated Robot Environment/Solver Configuration/EVAL_KEY/OUTPUT_2_0"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 59 , 0 , TARGET_STRING (
 "Top_Level_Simulation/Simulation Environment/Position Actuated Robot Environment/Solver Configuration/EVAL_KEY/OUTPUT_3_0"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 60 , 0 , TARGET_STRING (
 "Top_Level_Simulation/Simulation Environment/Position Actuated Robot Environment/Solver Configuration/EVAL_KEY/STATE_1"
) , TARGET_STRING ( "" ) , 0 , 0 , 11 , 0 , 2 } , { 61 , 0 , TARGET_STRING (
 "Top_Level_Simulation/Simulation Environment/Position Actuated Robot Environment/Solver Configuration/EVAL_KEY/STATE_2"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 2 } , { 62 , 0 , TARGET_STRING (
 "Top_Level_Simulation/Simulation Environment/Position Actuated Robot Environment/Solver Configuration/EVAL_KEY/STATE_3"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 2 } , { 63 , 7 , TARGET_STRING (
 "Top_Level_Simulation/Simulation Environment/Position Actuated Robot Environment/Mobile Robot/Cart Forward Kinematics/cartSignal2Traj/cartSignal2Traj"
) , TARGET_STRING ( "" ) , 1 , 0 , 1 , 0 , 2 } , { 64 , 0 , TARGET_STRING (
 "Top_Level_Simulation/Simulation Environment/Position Actuated Robot Environment/Mobile Robot/Cart Forward Kinematics/cartSignal2Traj/cartSignal2Traj/is_active_c5_Top_Level_Simulation"
) , TARGET_STRING ( "is_active_c5_Top_Level_Simulation" ) , 0 , 2 , 1 , 0 , 2
} , { 65 , 0 , TARGET_STRING (
 "Top_Level_Simulation/Simulation Environment/Position Actuated Robot Environment/Position Actuated Manipulator/PS-Simulink Converter/EVAL_KEY/RESHAPE"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 2 } , { 66 , 0 , TARGET_STRING (
 "Top_Level_Simulation/Simulation Environment/Position Actuated Robot Environment/Position Actuated Manipulator/PS-Simulink Converter1/EVAL_KEY/RESHAPE"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 2 } , { 67 , 0 , TARGET_STRING (
 "Top_Level_Simulation/Simulation Environment/Position Actuated Robot Environment/Position Actuated Manipulator/PS-Simulink Converter2/EVAL_KEY/RESHAPE"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 2 } , { 68 , 0 , TARGET_STRING (
 "Top_Level_Simulation/Simulation Environment/Position Actuated Robot Environment/Position Actuated Manipulator/PS-Simulink Converter3/EVAL_KEY/RESHAPE"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 2 } , { 69 , 0 , TARGET_STRING (
 "Top_Level_Simulation/Simulation Environment/Position Actuated Robot Environment/Position Actuated Manipulator/PS-Simulink Converter4/EVAL_KEY/RESHAPE"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 2 } , { 70 , 0 , TARGET_STRING (
 "Top_Level_Simulation/Simulation Environment/Position Actuated Robot Environment/Position Actuated Manipulator/PS-Simulink Converter5/EVAL_KEY/RESHAPE"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 2 } , { 0 , 0 , ( NULL ) , ( NULL
) , 0 , 0 , 0 , 0 , 0 } } ; static const rtwCAPI_BlockParameters
rtBlockParameters [ ] = { { 71 , TARGET_STRING (
"Top_Level_Simulation/Constant1" ) , TARGET_STRING ( "Value" ) , 0 , 12 , 0 }
, { 72 , TARGET_STRING ( "Top_Level_Simulation/From Workspace1" ) ,
TARGET_STRING ( "Time0" ) , 0 , 13 , 0 } , { 73 , TARGET_STRING (
"Top_Level_Simulation/From Workspace1" ) , TARGET_STRING ( "Data0" ) , 0 , 14
, 0 } , { 74 , TARGET_STRING ( "Top_Level_Simulation/From Workspace2" ) ,
TARGET_STRING ( "Time0" ) , 0 , 13 , 0 } , { 75 , TARGET_STRING (
"Top_Level_Simulation/From Workspace2" ) , TARGET_STRING ( "Data0" ) , 0 , 13
, 0 } , { 76 , TARGET_STRING ( "Top_Level_Simulation/From Workspace3" ) ,
TARGET_STRING ( "Time0" ) , 0 , 13 , 0 } , { 77 , TARGET_STRING (
"Top_Level_Simulation/From Workspace3" ) , TARGET_STRING ( "Data0" ) , 0 , 13
, 0 } , { 78 , TARGET_STRING ( "Top_Level_Simulation/From Workspace4" ) ,
TARGET_STRING ( "Time0" ) , 0 , 13 , 0 } , { 79 , TARGET_STRING (
"Top_Level_Simulation/From Workspace4" ) , TARGET_STRING ( "Data0" ) , 0 , 15
, 0 } , { 80 , TARGET_STRING ( "Top_Level_Simulation/From Workspace5" ) ,
TARGET_STRING ( "Time0" ) , 0 , 16 , 0 } , { 81 , TARGET_STRING (
"Top_Level_Simulation/From Workspace5" ) , TARGET_STRING ( "Data0" ) , 0 , 16
, 0 } , { 82 , TARGET_STRING (
"Top_Level_Simulation/Simulation Environment/Gain" ) , TARGET_STRING ( "Gain"
) , 0 , 1 , 0 } , { 83 , TARGET_STRING (
"Top_Level_Simulation/Simulation Environment/Integrator" ) , TARGET_STRING (
"InitialCondition" ) , 0 , 1 , 0 } , { 84 , TARGET_STRING (
"Top_Level_Simulation/Simulation Environment/Saturation" ) , TARGET_STRING (
"UpperLimit" ) , 0 , 1 , 0 } , { 85 , TARGET_STRING (
"Top_Level_Simulation/Simulation Environment/Saturation" ) , TARGET_STRING (
"LowerLimit" ) , 0 , 1 , 0 } , { 86 , TARGET_STRING (
"Top_Level_Simulation/Simulation Environment/Unit Delay" ) , TARGET_STRING (
"InitialCondition" ) , 0 , 1 , 0 } , { 87 , TARGET_STRING (
"Top_Level_Simulation/Simulation Environment/Arm Forward Kinematics/Gain" ) ,
TARGET_STRING ( "Gain" ) , 0 , 1 , 0 } , { 88 , TARGET_STRING (
"Top_Level_Simulation/Simulation Environment/Arm Inverse Kinematics/Constant2"
) , TARGET_STRING ( "Value" ) , 0 , 17 , 0 } , { 89 , TARGET_STRING (
 "Top_Level_Simulation/Simulation Environment/Cart Trajectory/Discrete Derivative"
) , TARGET_STRING ( "ICPrevScaledInput" ) , 0 , 1 , 0 } , { 90 ,
TARGET_STRING (
"Top_Level_Simulation/Simulation Environment/Cart Trajectory/Gain" ) ,
TARGET_STRING ( "Gain" ) , 0 , 1 , 0 } , { 91 , TARGET_STRING (
 "Top_Level_Simulation/Simulation Environment/Incremental to Abolute (Cart)/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 12 , 0 } , { 92 , TARGET_STRING (
 "Top_Level_Simulation/Simulation Environment/Cart Trajectory/Discrete Derivative/TSamp"
) , TARGET_STRING ( "WtEt" ) , 0 , 1 , 0 } , { 93 , TARGET_STRING (
 "Top_Level_Simulation/Simulation Environment/Position Actuated Robot Environment/Environment_With_Physics/Switch"
) , TARGET_STRING ( "Threshold" ) , 0 , 1 , 0 } , { 94 , TARGET_STRING (
 "Top_Level_Simulation/Simulation Environment/Position Actuated Robot Environment/Position Actuated Manipulator/Gain"
) , TARGET_STRING ( "Gain" ) , 0 , 1 , 0 } , { 95 , TARGET_STRING (
 "Top_Level_Simulation/Simulation Environment/Position Actuated Robot Environment/Mobile Robot/Cart Forward Kinematics/Gain"
) , TARGET_STRING ( "Gain" ) , 0 , 1 , 0 } , { 96 , TARGET_STRING (
 "Top_Level_Simulation/Simulation Environment/Position Actuated Robot Environment/Mobile Robot/Cart Forward Kinematics/Integrator1"
) , TARGET_STRING ( "InitialCondition" ) , 0 , 1 , 0 } , { 97 , TARGET_STRING
(
 "Top_Level_Simulation/Simulation Environment/Position Actuated Robot Environment/Mobile Robot/Cart Forward Kinematics/Integrator2"
) , TARGET_STRING ( "InitialCondition" ) , 0 , 1 , 0 } , { 98 , TARGET_STRING
(
 "Top_Level_Simulation/Simulation Environment/Position Actuated Robot Environment/Mobile Robot/Cart Forward Kinematics/Integrator3"
) , TARGET_STRING ( "InitialCondition" ) , 0 , 1 , 0 } , { 99 , TARGET_STRING
(
 "Top_Level_Simulation/Simulation Environment/Position Actuated Robot Environment/Mobile Robot/Left_Wheel/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 100 , TARGET_STRING (
 "Top_Level_Simulation/Simulation Environment/Position Actuated Robot Environment/Mobile Robot/Left_Wheel/Gain"
) , TARGET_STRING ( "Gain" ) , 0 , 1 , 0 } , { 101 , TARGET_STRING (
 "Top_Level_Simulation/Simulation Environment/Position Actuated Robot Environment/Mobile Robot/Left_Wheel/Integrator"
) , TARGET_STRING ( "InitialCondition" ) , 0 , 1 , 0 } , { 102 ,
TARGET_STRING (
 "Top_Level_Simulation/Simulation Environment/Position Actuated Robot Environment/Mobile Robot/Right_Wheel/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 103 , TARGET_STRING (
 "Top_Level_Simulation/Simulation Environment/Position Actuated Robot Environment/Mobile Robot/Right_Wheel/Integrator"
) , TARGET_STRING ( "InitialCondition" ) , 0 , 1 , 0 } , { 0 , ( NULL ) , (
NULL ) , 0 , 0 , 0 } } ; static int_T rt_LoggedStateIdxList [ ] = { - 1 } ;
static const rtwCAPI_Signals rtRootInputs [ ] = { { 0 , 0 , ( NULL ) , ( NULL
) , 0 , 0 , 0 , 0 , 0 } } ; static const rtwCAPI_Signals rtRootOutputs [ ] =
{ { 0 , 0 , ( NULL ) , ( NULL ) , 0 , 0 , 0 , 0 , 0 } } ; static const
rtwCAPI_ModelParameters rtModelParameters [ ] = { { 104 , TARGET_STRING (
"cartParam" ) , 5 , 1 , 0 } , { 0 , ( NULL ) , 0 , 0 , 0 } } ;
#ifndef HOST_CAPI_BUILD
static void * rtDataAddrMap [ ] = { & rtB . g1wu31mqe4 [ 0 ] , & rtB .
byypcdwj4t , & rtB . n3i0rcd3y3 [ 0 ] , & rtB . frj3sv0nur [ 0 ] , & rtB .
otiyamgc4m , & rtB . gk45ehdeau , & rtB . bocynmvqvn , & rtB . f3me2yahaw [ 0
] , & rtB . h3wch0tcyi [ 0 ] , & rtB . ajucvwlofn [ 0 ] , & rtB . eperym0ycj
[ 0 ] , & rtB . abmtpbtqen [ 0 ] , & rtB . g2h4dhsdez [ 0 ] , & rtB .
hthfcq14pv [ 0 ] , & rtB . cusv2amtca , & rtB . ilhqhgwcym , & rtB .
nrzyl42xm5 , & rtDW . iqfygxjppa , & rtB . nbf5lo0qyp , & rtB . o5sctoydmq ,
& rtB . i4wqff4ppm [ 0 ] , & rtB . ggvodvqytu , & rtB . ar0mgehmqp , & rtB .
ej15uvzzrp , & rtB . j3ss00kqoe , & rtB . gn5waaat3n , & rtB . g0s1jshae4 , &
rtB . lgj2jc3pzo , & rtB . cegxra1hpr , & rtB . a50c4odnnd , & rtB .
oxggdt53bd , & rtB . nd3aadcbcd , & rtB . jwbu2gwvao , & rtB . fstvfaddps , &
rtB . cepepxzyrd , & rtB . d13ksp0l1g , & rtB . c3nacuiddy [ 0 ] , & rtB .
pybi00dpti [ 0 ] , & rtB . ir3dfvqqai [ 0 ] , & rtB . o0g21chvl4 [ 0 ] , &
rtB . pvn4sjrhtj [ 0 ] , & rtB . be5mxu02ho [ 0 ] , & rtB . bxaujqvrbz [ 0 ]
, & rtB . du4pvnugdj [ 0 ] , & rtB . nmjwizdspm [ 0 ] , & rtB . h0x3fs1esa [
0 ] , & rtB . frifao4c1u [ 0 ] , & rtB . nwxytavutd [ 0 ] , & rtB .
k4qxluudiw [ 0 ] , & rtB . j1wjz4glfv [ 0 ] , & rtB . h0tqkotieo [ 0 ] , &
rtB . drqxmyuirf [ 0 ] , & rtB . ctfsa4jidw [ 0 ] , & rtB . h2wzsozxts [ 0 ]
, & rtB . aj3oqjvikj [ 0 ] , & rtB . bylc4dlpa2 [ 0 ] , & rtB . f3dt3kwdyy [
0 ] , & rtB . fslwmfbg4z [ 0 ] , & rtB . po2az4iybu [ 0 ] , & rtB .
ecditktabk [ 0 ] , & rtB . bwhuqsvvko [ 0 ] , & rtB . e1eawrywww [ 0 ] , &
rtB . f3wc3trxlm [ 0 ] , & rtB . dv0zdzo0z1 , & rtDW . aes52he5qp , & rtB .
aldmgrwo2q , & rtB . bldctwoduh , & rtB . co1eoce0xn , & rtB . essvneazxf , &
rtB . b2pkbgkxau , & rtB . m52iku3bf5 , & rtP . Constant1_Value [ 0 ] , & rtP
. FromWorkspace1_Time0 [ 0 ] , & rtP . FromWorkspace1_Data0 [ 0 ] , & rtP .
FromWorkspace2_Time0 [ 0 ] , & rtP . FromWorkspace2_Data0 [ 0 ] , & rtP .
FromWorkspace3_Time0 [ 0 ] , & rtP . FromWorkspace3_Data0 [ 0 ] , & rtP .
FromWorkspace4_Time0 [ 0 ] , & rtP . FromWorkspace4_Data0 [ 0 ] , & rtP .
FromWorkspace5_Time0 [ 0 ] , & rtP . FromWorkspace5_Data0 [ 0 ] , & rtP .
Gain_Gain_ixhiatnuua , & rtP . Integrator_IC_pfyyjjaerm , & rtP .
Saturation_UpperSat , & rtP . Saturation_LowerSat , & rtP .
UnitDelay_InitialCondition , & rtP . Gain_Gain_gbc03uxe30 , & rtP .
Constant2_Value [ 0 ] , & rtP . DiscreteDerivative_ICPrevScaledInput , & rtP
. Gain_Gain_fnyptoffgf , & rtP . Constant_Value [ 0 ] , & rtP . TSamp_WtEt ,
& rtP . Switch_Threshold , & rtP . Gain_Gain_kg51a1y4n4 , & rtP . Gain_Gain ,
& rtP . Integrator1_IC , & rtP . Integrator2_IC , & rtP . Integrator3_IC , &
rtP . Constant_Value_m2yjzgvvms , & rtP . Gain_Gain_jqosi22ou2 , & rtP .
Integrator_IC , & rtP . Constant_Value_k5zgsdk1tk , & rtP .
Integrator_IC_isl5emljg2 , & rtP . cartParam , } ; static int32_T *
rtVarDimsAddrMap [ ] = { ( NULL ) } ;
#endif
static TARGET_CONST rtwCAPI_DataTypeMap rtDataTypeMap [ ] = { { "double" ,
"real_T" , 0 , 0 , sizeof ( real_T ) , ( uint8_T ) SS_DOUBLE , 0 , 0 , 0 } ,
{ "unsigned short" , "uint16_T" , 0 , 0 , sizeof ( uint16_T ) , ( uint8_T )
SS_UINT16 , 0 , 0 , 0 } , { "unsigned char" , "uint8_T" , 0 , 0 , sizeof (
uint8_T ) , ( uint8_T ) SS_UINT8 , 0 , 0 , 0 } , { "struct" ,
"ikblock_info_bus" , 4 , 1 , sizeof ( ikblock_info_bus ) , ( uint8_T )
SS_STRUCT , 0 , 0 , 0 } , { "struct" , "struct_rvOi9M8Udcrol81BZGhD5E" , 3 ,
5 , sizeof ( struct_rvOi9M8Udcrol81BZGhD5E ) , ( uint8_T ) SS_STRUCT , 0 , 0
, 0 } , { "struct" , "struct_xGpzbZ0wN9eJPl253wr9RE" , 5 , 8 , sizeof (
struct_xGpzbZ0wN9eJPl253wr9RE ) , ( uint8_T ) SS_STRUCT , 0 , 0 , 0 } } ;
#ifdef HOST_CAPI_BUILD
#undef sizeof
#endif
static TARGET_CONST rtwCAPI_ElementMap rtElementMap [ ] = { { ( NULL ) , 0 ,
0 , 0 , 0 } , { "Iterations" , rt_offsetof ( ikblock_info_bus , Iterations )
, 0 , 8 , 0 } , { "PoseErrorNorm" , rt_offsetof ( ikblock_info_bus ,
PoseErrorNorm ) , 0 , 8 , 0 } , { "ExitFlag" , rt_offsetof ( ikblock_info_bus
, ExitFlag ) , 1 , 8 , 0 } , { "Status" , rt_offsetof ( ikblock_info_bus ,
Status ) , 2 , 8 , 0 } , { "X" , rt_offsetof ( struct_rvOi9M8Udcrol81BZGhD5E
, X ) , 0 , 8 , 0 } , { "Y" , rt_offsetof ( struct_rvOi9M8Udcrol81BZGhD5E , Y
) , 0 , 8 , 0 } , { "Phase" , rt_offsetof ( struct_rvOi9M8Udcrol81BZGhD5E ,
Phase ) , 0 , 8 , 0 } , { "TireRadius" , rt_offsetof (
struct_xGpzbZ0wN9eJPl253wr9RE , TireRadius ) , 0 , 8 , 0 } , {
"DistanceBwTires" , rt_offsetof ( struct_xGpzbZ0wN9eJPl253wr9RE ,
DistanceBwTires ) , 0 , 8 , 0 } , { "Height" , rt_offsetof (
struct_xGpzbZ0wN9eJPl253wr9RE , Height ) , 0 , 8 , 0 } , { "motorSpeed" ,
rt_offsetof ( struct_xGpzbZ0wN9eJPl253wr9RE , motorSpeed ) , 0 , 8 , 0 } , {
"Initial" , rt_offsetof ( struct_xGpzbZ0wN9eJPl253wr9RE , Initial ) , 4 , 8 ,
0 } } ; static const rtwCAPI_DimensionMap rtDimensionMap [ ] = { {
rtwCAPI_VECTOR , 0 , 2 , 0 } , { rtwCAPI_SCALAR , 2 , 2 , 0 } , {
rtwCAPI_VECTOR , 4 , 2 , 0 } , { rtwCAPI_MATRIX_COL_MAJOR , 6 , 2 , 0 } , {
rtwCAPI_VECTOR , 6 , 2 , 0 } , { rtwCAPI_MATRIX_COL_MAJOR , 4 , 2 , 0 } , {
rtwCAPI_MATRIX_COL_MAJOR , 8 , 2 , 0 } , { rtwCAPI_MATRIX_COL_MAJOR , 10 , 2
, 0 } , { rtwCAPI_MATRIX_COL_MAJOR , 2 , 2 , 0 } , { rtwCAPI_VECTOR , 12 , 2
, 0 } , { rtwCAPI_VECTOR , 14 , 2 , 0 } , { rtwCAPI_VECTOR , 16 , 2 , 0 } , {
rtwCAPI_VECTOR , 18 , 2 , 0 } , { rtwCAPI_VECTOR , 20 , 2 , 0 } , {
rtwCAPI_VECTOR , 22 , 2 , 0 } , { rtwCAPI_VECTOR , 24 , 2 , 0 } , {
rtwCAPI_VECTOR , 26 , 2 , 0 } , { rtwCAPI_VECTOR , 8 , 2 , 0 } } ; static
const uint_T rtDimensionArray [ ] = { 2 , 1 , 1 , 1 , 3 , 1 , 6 , 1 , 1 , 6 ,
4 , 4 , 4 , 1 , 18 , 1 , 26 , 1 , 1 , 3 , 3101 , 1 , 6202 , 1 , 9303 , 1 , 22
, 1 } ; static const real_T rtcapiStoredFloats [ ] = { 0.01 , 0.0 , 0.05 } ;
static const rtwCAPI_FixPtMap rtFixPtMap [ ] = { { ( NULL ) , ( NULL ) ,
rtwCAPI_FIX_RESERVED , 0 , 0 , ( boolean_T ) 0 } , } ; static const
rtwCAPI_SampleTimeMap rtSampleTimeMap [ ] = { { ( const void * ) &
rtcapiStoredFloats [ 0 ] , ( const void * ) & rtcapiStoredFloats [ 1 ] , (
int8_T ) 1 , ( uint8_T ) 0 } , { ( const void * ) & rtcapiStoredFloats [ 2 ]
, ( const void * ) & rtcapiStoredFloats [ 1 ] , ( int8_T ) 2 , ( uint8_T ) 0
} , { ( const void * ) & rtcapiStoredFloats [ 1 ] , ( const void * ) &
rtcapiStoredFloats [ 1 ] , ( int8_T ) 0 , ( uint8_T ) 0 } } ; static
rtwCAPI_ModelMappingStaticInfo mmiStatic = { { rtBlockSignals , 71 ,
rtRootInputs , 0 , rtRootOutputs , 0 } , { rtBlockParameters , 33 ,
rtModelParameters , 1 } , { ( NULL ) , 0 } , { rtDataTypeMap , rtDimensionMap
, rtFixPtMap , rtElementMap , rtSampleTimeMap , rtDimensionArray } , "float"
, { 131616093U , 3669568646U , 3704541709U , 242331221U } , ( NULL ) , 0 , (
boolean_T ) 0 , rt_LoggedStateIdxList } ; const
rtwCAPI_ModelMappingStaticInfo * Top_Level_Simulation_GetCAPIStaticMap ( void
) { return & mmiStatic ; }
#ifndef HOST_CAPI_BUILD
void Top_Level_Simulation_InitializeDataMapInfo ( void ) { rtwCAPI_SetVersion
( ( * rt_dataMapInfoPtr ) . mmi , 1 ) ; rtwCAPI_SetStaticMap ( ( *
rt_dataMapInfoPtr ) . mmi , & mmiStatic ) ; rtwCAPI_SetLoggingStaticMap ( ( *
rt_dataMapInfoPtr ) . mmi , ( NULL ) ) ; rtwCAPI_SetDataAddressMap ( ( *
rt_dataMapInfoPtr ) . mmi , rtDataAddrMap ) ; rtwCAPI_SetVarDimsAddressMap (
( * rt_dataMapInfoPtr ) . mmi , rtVarDimsAddrMap ) ;
rtwCAPI_SetInstanceLoggingInfo ( ( * rt_dataMapInfoPtr ) . mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArray ( ( * rt_dataMapInfoPtr ) . mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArrayLen ( ( * rt_dataMapInfoPtr ) . mmi , 0 ) ; }
#else
#ifdef __cplusplus
extern "C" {
#endif
void Top_Level_Simulation_host_InitializeDataMapInfo (
Top_Level_Simulation_host_DataMapInfo_T * dataMap , const char * path ) {
rtwCAPI_SetVersion ( dataMap -> mmi , 1 ) ; rtwCAPI_SetStaticMap ( dataMap ->
mmi , & mmiStatic ) ; rtwCAPI_SetDataAddressMap ( dataMap -> mmi , ( NULL ) )
; rtwCAPI_SetVarDimsAddressMap ( dataMap -> mmi , ( NULL ) ) ;
rtwCAPI_SetPath ( dataMap -> mmi , path ) ; rtwCAPI_SetFullPath ( dataMap ->
mmi , ( NULL ) ) ; rtwCAPI_SetChildMMIArray ( dataMap -> mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArrayLen ( dataMap -> mmi , 0 ) ; }
#ifdef __cplusplus
}
#endif
#endif
