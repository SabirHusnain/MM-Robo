#include <math.h>
#include <string.h>
#include "pm_std.h"
#include "sm_std.h"
#include "ne_std.h"
#include "ne_dae.h"
#include "sm_ssci_run_time_errors.h"
#include "sm_RuntimeDerivedValuesBundle.h"
#include "sm_CTarget.h"
void Top_Level_Simulation_66cd9431_1_setTargets ( const
RuntimeDerivedValuesBundle * rtdv , CTarget * targets ) { ( void ) rtdv ; (
void ) targets ; } void Top_Level_Simulation_66cd9431_1_resetAsmStateVector (
const void * mech , double * state ) { double xx [ 2 ] ; ( void ) mech ; xx [
0 ] = 0.0 ; xx [ 1 ] = 1.0 ; state [ 0 ] = xx [ 0 ] ; state [ 1 ] = xx [ 0 ]
; state [ 2 ] = xx [ 0 ] ; state [ 3 ] = xx [ 0 ] ; state [ 4 ] = xx [ 0 ] ;
state [ 5 ] = xx [ 0 ] ; state [ 6 ] = xx [ 0 ] ; state [ 7 ] = xx [ 0 ] ;
state [ 8 ] = xx [ 0 ] ; state [ 9 ] = xx [ 0 ] ; state [ 10 ] = xx [ 0 ] ;
state [ 11 ] = xx [ 0 ] ; state [ 12 ] = xx [ 0 ] ; state [ 13 ] = xx [ 0 ] ;
state [ 14 ] = xx [ 0 ] ; state [ 15 ] = xx [ 0 ] ; state [ 16 ] = xx [ 0 ] ;
state [ 17 ] = xx [ 0 ] ; state [ 18 ] = xx [ 0 ] ; state [ 19 ] = xx [ 0 ] ;
state [ 20 ] = xx [ 0 ] ; state [ 21 ] = xx [ 0 ] ; state [ 22 ] = xx [ 0 ] ;
state [ 23 ] = xx [ 0 ] ; state [ 24 ] = xx [ 0 ] ; state [ 25 ] = xx [ 0 ] ;
state [ 26 ] = xx [ 0 ] ; state [ 27 ] = xx [ 0 ] ; state [ 28 ] = xx [ 0 ] ;
state [ 29 ] = xx [ 0 ] ; state [ 30 ] = xx [ 0 ] ; state [ 31 ] = xx [ 0 ] ;
state [ 32 ] = xx [ 0 ] ; state [ 33 ] = xx [ 1 ] ; state [ 34 ] = xx [ 0 ] ;
state [ 35 ] = xx [ 0 ] ; state [ 36 ] = xx [ 0 ] ; state [ 37 ] = xx [ 0 ] ;
state [ 38 ] = xx [ 0 ] ; state [ 39 ] = xx [ 0 ] ; state [ 40 ] = xx [ 0 ] ;
state [ 41 ] = xx [ 0 ] ; state [ 42 ] = xx [ 0 ] ; state [ 43 ] = xx [ 0 ] ;
state [ 44 ] = xx [ 0 ] ; state [ 45 ] = xx [ 0 ] ; state [ 46 ] = xx [ 1 ] ;
state [ 47 ] = xx [ 0 ] ; state [ 48 ] = xx [ 0 ] ; state [ 49 ] = xx [ 0 ] ;
state [ 50 ] = xx [ 0 ] ; state [ 51 ] = xx [ 0 ] ; state [ 52 ] = xx [ 0 ] ;
state [ 53 ] = xx [ 0 ] ; state [ 54 ] = xx [ 0 ] ; state [ 55 ] = xx [ 0 ] ;
} void Top_Level_Simulation_66cd9431_1_initializeTrackedAngleState ( const
void * mech , const RuntimeDerivedValuesBundle * rtdv , const int *
modeVector , const double * motionData , double * state ) { const double *
rtdvd = rtdv -> mDoubles . mValues ; const int * rtdvi = rtdv -> mInts .
mValues ; ( void ) mech ; ( void ) rtdvd ; ( void ) rtdvi ; ( void ) state ;
( void ) modeVector ; ( void ) motionData ; } void
Top_Level_Simulation_66cd9431_1_computeDiscreteState ( const void * mech ,
const RuntimeDerivedValuesBundle * rtdv , double * state ) { const double *
rtdvd = rtdv -> mDoubles . mValues ; const int * rtdvi = rtdv -> mInts .
mValues ; ( void ) mech ; ( void ) rtdvd ; ( void ) rtdvi ; ( void ) state ;
} void Top_Level_Simulation_66cd9431_1_adjustPosition ( const void * mech ,
const double * dofDeltas , double * state ) { double xx [ 17 ] ; ( void )
mech ; xx [ 0 ] = state [ 33 ] ; xx [ 1 ] = state [ 34 ] ; xx [ 2 ] = state [
35 ] ; xx [ 3 ] = state [ 36 ] ; xx [ 4 ] = dofDeltas [ 18 ] ; xx [ 5 ] =
dofDeltas [ 19 ] ; xx [ 6 ] = dofDeltas [ 20 ] ;
pm_math_Quaternion_compDeriv_ra ( xx + 0 , xx + 4 , xx + 7 ) ; xx [ 0 ] =
state [ 33 ] + xx [ 7 ] ; xx [ 1 ] = state [ 34 ] + xx [ 8 ] ; xx [ 2 ] =
state [ 35 ] + xx [ 9 ] ; xx [ 3 ] = state [ 36 ] + xx [ 10 ] ; xx [ 4 ] =
1.0e-64 ; xx [ 5 ] = sqrt ( xx [ 0 ] * xx [ 0 ] + xx [ 1 ] * xx [ 1 ] + xx [
2 ] * xx [ 2 ] + xx [ 3 ] * xx [ 3 ] ) ; if ( xx [ 4 ] > xx [ 5 ] ) xx [ 5 ]
= xx [ 4 ] ; xx [ 6 ] = state [ 46 ] ; xx [ 7 ] = state [ 47 ] ; xx [ 8 ] =
state [ 48 ] ; xx [ 9 ] = state [ 49 ] ; xx [ 10 ] = dofDeltas [ 24 ] ; xx [
11 ] = dofDeltas [ 25 ] ; xx [ 12 ] = dofDeltas [ 26 ] ;
pm_math_Quaternion_compDeriv_ra ( xx + 6 , xx + 10 , xx + 13 ) ; xx [ 6 ] =
state [ 46 ] + xx [ 13 ] ; xx [ 7 ] = state [ 47 ] + xx [ 14 ] ; xx [ 8 ] =
state [ 48 ] + xx [ 15 ] ; xx [ 9 ] = state [ 49 ] + xx [ 16 ] ; xx [ 10 ] =
sqrt ( xx [ 6 ] * xx [ 6 ] + xx [ 7 ] * xx [ 7 ] + xx [ 8 ] * xx [ 8 ] + xx [
9 ] * xx [ 9 ] ) ; if ( xx [ 4 ] > xx [ 10 ] ) xx [ 10 ] = xx [ 4 ] ; state [
0 ] = state [ 0 ] + dofDeltas [ 0 ] ; state [ 1 ] = state [ 1 ] + dofDeltas [
1 ] ; state [ 2 ] = state [ 2 ] + dofDeltas [ 2 ] ; state [ 6 ] = state [ 6 ]
+ dofDeltas [ 3 ] ; state [ 8 ] = state [ 8 ] + dofDeltas [ 4 ] ; state [ 10
] = state [ 10 ] + dofDeltas [ 5 ] ; state [ 12 ] = state [ 12 ] + dofDeltas
[ 6 ] ; state [ 14 ] = state [ 14 ] + dofDeltas [ 7 ] ; state [ 16 ] = state
[ 16 ] + dofDeltas [ 8 ] ; state [ 18 ] = state [ 18 ] + dofDeltas [ 9 ] ;
state [ 20 ] = state [ 20 ] + dofDeltas [ 10 ] ; state [ 22 ] = state [ 22 ]
+ dofDeltas [ 11 ] ; state [ 24 ] = state [ 24 ] + dofDeltas [ 12 ] ; state [
26 ] = state [ 26 ] + dofDeltas [ 13 ] ; state [ 28 ] = state [ 28 ] +
dofDeltas [ 14 ] ; state [ 30 ] = state [ 30 ] + dofDeltas [ 15 ] ; state [
31 ] = state [ 31 ] + dofDeltas [ 16 ] ; state [ 32 ] = state [ 32 ] +
dofDeltas [ 17 ] ; state [ 33 ] = xx [ 0 ] / xx [ 5 ] ; state [ 34 ] = xx [ 1
] / xx [ 5 ] ; state [ 35 ] = xx [ 2 ] / xx [ 5 ] ; state [ 36 ] = xx [ 3 ] /
xx [ 5 ] ; state [ 43 ] = state [ 43 ] + dofDeltas [ 21 ] ; state [ 44 ] =
state [ 44 ] + dofDeltas [ 22 ] ; state [ 45 ] = state [ 45 ] + dofDeltas [
23 ] ; state [ 46 ] = xx [ 6 ] / xx [ 10 ] ; state [ 47 ] = xx [ 7 ] / xx [
10 ] ; state [ 48 ] = xx [ 8 ] / xx [ 10 ] ; state [ 49 ] = xx [ 9 ] / xx [
10 ] ; } static void perturbAsmJointPrimitiveState_0_0 ( double mag , double
* state ) { state [ 0 ] = state [ 0 ] + mag ; } static void
perturbAsmJointPrimitiveState_0_0v ( double mag , double * state ) { state [
0 ] = state [ 0 ] + mag ; state [ 3 ] = state [ 3 ] - 0.875 * mag ; } static
void perturbAsmJointPrimitiveState_0_1 ( double mag , double * state ) {
state [ 1 ] = state [ 1 ] + mag ; } static void
perturbAsmJointPrimitiveState_0_1v ( double mag , double * state ) { state [
1 ] = state [ 1 ] + mag ; state [ 4 ] = state [ 4 ] - 0.875 * mag ; } static
void perturbAsmJointPrimitiveState_0_2 ( double mag , double * state ) {
state [ 2 ] = state [ 2 ] + mag ; } static void
perturbAsmJointPrimitiveState_0_2v ( double mag , double * state ) { state [
2 ] = state [ 2 ] + mag ; state [ 5 ] = state [ 5 ] - 0.875 * mag ; } static
void perturbAsmJointPrimitiveState_1_0 ( double mag , double * state ) {
state [ 6 ] = state [ 6 ] + mag ; } static void
perturbAsmJointPrimitiveState_1_0v ( double mag , double * state ) { state [
6 ] = state [ 6 ] + mag ; state [ 7 ] = state [ 7 ] - 0.875 * mag ; } static
void perturbAsmJointPrimitiveState_2_0 ( double mag , double * state ) {
state [ 8 ] = state [ 8 ] + mag ; } static void
perturbAsmJointPrimitiveState_2_0v ( double mag , double * state ) { state [
8 ] = state [ 8 ] + mag ; state [ 9 ] = state [ 9 ] - 0.875 * mag ; } static
void perturbAsmJointPrimitiveState_3_0 ( double mag , double * state ) {
state [ 10 ] = state [ 10 ] + mag ; } static void
perturbAsmJointPrimitiveState_3_0v ( double mag , double * state ) { state [
10 ] = state [ 10 ] + mag ; state [ 11 ] = state [ 11 ] - 0.875 * mag ; }
static void perturbAsmJointPrimitiveState_4_0 ( double mag , double * state )
{ state [ 12 ] = state [ 12 ] + mag ; } static void
perturbAsmJointPrimitiveState_4_0v ( double mag , double * state ) { state [
12 ] = state [ 12 ] + mag ; state [ 13 ] = state [ 13 ] - 0.875 * mag ; }
static void perturbAsmJointPrimitiveState_5_0 ( double mag , double * state )
{ state [ 14 ] = state [ 14 ] + mag ; } static void
perturbAsmJointPrimitiveState_5_0v ( double mag , double * state ) { state [
14 ] = state [ 14 ] + mag ; state [ 15 ] = state [ 15 ] - 0.875 * mag ; }
static void perturbAsmJointPrimitiveState_6_0 ( double mag , double * state )
{ state [ 16 ] = state [ 16 ] + mag ; } static void
perturbAsmJointPrimitiveState_6_0v ( double mag , double * state ) { state [
16 ] = state [ 16 ] + mag ; state [ 17 ] = state [ 17 ] - 0.875 * mag ; }
static void perturbAsmJointPrimitiveState_7_0 ( double mag , double * state )
{ state [ 18 ] = state [ 18 ] + mag ; } static void
perturbAsmJointPrimitiveState_7_0v ( double mag , double * state ) { state [
18 ] = state [ 18 ] + mag ; state [ 19 ] = state [ 19 ] - 0.875 * mag ; }
static void perturbAsmJointPrimitiveState_8_0 ( double mag , double * state )
{ state [ 20 ] = state [ 20 ] + mag ; } static void
perturbAsmJointPrimitiveState_8_0v ( double mag , double * state ) { state [
20 ] = state [ 20 ] + mag ; state [ 21 ] = state [ 21 ] - 0.875 * mag ; }
static void perturbAsmJointPrimitiveState_9_0 ( double mag , double * state )
{ state [ 22 ] = state [ 22 ] + mag ; } static void
perturbAsmJointPrimitiveState_9_0v ( double mag , double * state ) { state [
22 ] = state [ 22 ] + mag ; state [ 23 ] = state [ 23 ] - 0.875 * mag ; }
static void perturbAsmJointPrimitiveState_10_0 ( double mag , double * state
) { state [ 24 ] = state [ 24 ] + mag ; } static void
perturbAsmJointPrimitiveState_10_0v ( double mag , double * state ) { state [
24 ] = state [ 24 ] + mag ; state [ 25 ] = state [ 25 ] - 0.875 * mag ; }
static void perturbAsmJointPrimitiveState_11_0 ( double mag , double * state
) { state [ 26 ] = state [ 26 ] + mag ; } static void
perturbAsmJointPrimitiveState_11_0v ( double mag , double * state ) { state [
26 ] = state [ 26 ] + mag ; state [ 27 ] = state [ 27 ] - 0.875 * mag ; }
static void perturbAsmJointPrimitiveState_12_0 ( double mag , double * state
) { state [ 28 ] = state [ 28 ] + mag ; } static void
perturbAsmJointPrimitiveState_12_0v ( double mag , double * state ) { state [
28 ] = state [ 28 ] + mag ; state [ 29 ] = state [ 29 ] - 0.875 * mag ; }
static void perturbAsmJointPrimitiveState_14_0 ( double mag , double * state
) { state [ 30 ] = state [ 30 ] + mag ; } static void
perturbAsmJointPrimitiveState_14_0v ( double mag , double * state ) { state [
30 ] = state [ 30 ] + mag ; state [ 37 ] = state [ 37 ] - 0.875 * mag ; }
static void perturbAsmJointPrimitiveState_14_1 ( double mag , double * state
) { state [ 31 ] = state [ 31 ] + mag ; } static void
perturbAsmJointPrimitiveState_14_1v ( double mag , double * state ) { state [
31 ] = state [ 31 ] + mag ; state [ 38 ] = state [ 38 ] - 0.875 * mag ; }
static void perturbAsmJointPrimitiveState_14_2 ( double mag , double * state
) { state [ 32 ] = state [ 32 ] + mag ; } static void
perturbAsmJointPrimitiveState_14_2v ( double mag , double * state ) { state [
32 ] = state [ 32 ] + mag ; state [ 39 ] = state [ 39 ] - 0.875 * mag ; }
static void perturbAsmJointPrimitiveState_14_3 ( double mag , double * state
) { double xx [ 15 ] ; xx [ 0 ] = 1.0 ; xx [ 1 ] = fabs ( mag ) ; xx [ 2 ] =
xx [ 0 ] / ( xx [ 1 ] - floor ( xx [ 1 ] ) + 1.0e-9 ) ; xx [ 1 ] = sin ( xx [
2 ] ) ; xx [ 3 ] = 0.0 ; xx [ 4 ] = cos ( xx [ 2 ] ) ; xx [ 5 ] = sin ( 2.0 *
xx [ 2 ] ) ; xx [ 2 ] = 0.5 * mag ; xx [ 6 ] = sqrt ( xx [ 1 ] * xx [ 1 ] +
xx [ 4 ] * xx [ 4 ] + xx [ 5 ] * xx [ 5 ] ) ; xx [ 7 ] = xx [ 6 ] == 0.0 ?
0.0 : xx [ 1 ] / xx [ 6 ] ; xx [ 8 ] = sin ( xx [ 2 ] ) ; xx [ 9 ] = xx [ 6 ]
== 0.0 ? 0.0 : xx [ 4 ] / xx [ 6 ] ; xx [ 10 ] = xx [ 6 ] == 0.0 ? 0.0 : xx [
5 ] / xx [ 6 ] ; xx [ 11 ] = xx [ 1 ] == xx [ 3 ] && xx [ 4 ] == xx [ 3 ] &&
xx [ 5 ] == xx [ 3 ] ? xx [ 0 ] : cos ( xx [ 2 ] ) ; xx [ 12 ] = xx [ 7 ] *
xx [ 8 ] ; xx [ 13 ] = xx [ 9 ] * xx [ 8 ] ; xx [ 14 ] = xx [ 10 ] * xx [ 8 ]
; xx [ 0 ] = state [ 33 ] ; xx [ 1 ] = state [ 34 ] ; xx [ 2 ] = state [ 35 ]
; xx [ 3 ] = state [ 36 ] ; pm_math_Quaternion_compose_ra ( xx + 11 , xx + 0
, xx + 4 ) ; state [ 33 ] = xx [ 4 ] ; state [ 34 ] = xx [ 5 ] ; state [ 35 ]
= xx [ 6 ] ; state [ 36 ] = xx [ 7 ] ; } static void
perturbAsmJointPrimitiveState_14_3v ( double mag , double * state ) { double
xx [ 15 ] ; xx [ 0 ] = 1.0 ; xx [ 1 ] = fabs ( mag ) ; xx [ 2 ] = xx [ 0 ] /
( xx [ 1 ] - floor ( xx [ 1 ] ) + 1.0e-9 ) ; xx [ 1 ] = sin ( xx [ 2 ] ) ; xx
[ 3 ] = 0.0 ; xx [ 4 ] = cos ( xx [ 2 ] ) ; xx [ 5 ] = sin ( 2.0 * xx [ 2 ] )
; xx [ 2 ] = 0.5 * mag ; xx [ 6 ] = sqrt ( xx [ 1 ] * xx [ 1 ] + xx [ 4 ] *
xx [ 4 ] + xx [ 5 ] * xx [ 5 ] ) ; xx [ 7 ] = xx [ 6 ] == 0.0 ? 0.0 : xx [ 1
] / xx [ 6 ] ; xx [ 8 ] = sin ( xx [ 2 ] ) ; xx [ 9 ] = xx [ 6 ] == 0.0 ? 0.0
: xx [ 4 ] / xx [ 6 ] ; xx [ 10 ] = xx [ 6 ] == 0.0 ? 0.0 : xx [ 5 ] / xx [ 6
] ; xx [ 11 ] = xx [ 1 ] == xx [ 3 ] && xx [ 4 ] == xx [ 3 ] && xx [ 5 ] ==
xx [ 3 ] ? xx [ 0 ] : cos ( xx [ 2 ] ) ; xx [ 12 ] = xx [ 7 ] * xx [ 8 ] ; xx
[ 13 ] = xx [ 9 ] * xx [ 8 ] ; xx [ 14 ] = xx [ 10 ] * xx [ 8 ] ; xx [ 3 ] =
state [ 33 ] ; xx [ 4 ] = state [ 34 ] ; xx [ 5 ] = state [ 35 ] ; xx [ 6 ] =
state [ 36 ] ; pm_math_Quaternion_compose_ra ( xx + 11 , xx + 3 , xx + 7 ) ;
state [ 33 ] = xx [ 7 ] ; state [ 34 ] = xx [ 8 ] ; state [ 35 ] = xx [ 9 ] ;
state [ 36 ] = xx [ 10 ] ; state [ 40 ] = state [ 40 ] + 1.2 * mag ; state [
41 ] = state [ 41 ] - xx [ 2 ] ; state [ 42 ] = state [ 42 ] + 0.9 * mag ; }
static void perturbAsmJointPrimitiveState_15_0 ( double mag , double * state
) { state [ 43 ] = state [ 43 ] + mag ; } static void
perturbAsmJointPrimitiveState_15_0v ( double mag , double * state ) { state [
43 ] = state [ 43 ] + mag ; state [ 50 ] = state [ 50 ] - 0.875 * mag ; }
static void perturbAsmJointPrimitiveState_15_1 ( double mag , double * state
) { state [ 44 ] = state [ 44 ] + mag ; } static void
perturbAsmJointPrimitiveState_15_1v ( double mag , double * state ) { state [
44 ] = state [ 44 ] + mag ; state [ 51 ] = state [ 51 ] - 0.875 * mag ; }
static void perturbAsmJointPrimitiveState_15_2 ( double mag , double * state
) { state [ 45 ] = state [ 45 ] + mag ; } static void
perturbAsmJointPrimitiveState_15_2v ( double mag , double * state ) { state [
45 ] = state [ 45 ] + mag ; state [ 52 ] = state [ 52 ] - 0.875 * mag ; }
static void perturbAsmJointPrimitiveState_15_3 ( double mag , double * state
) { double xx [ 15 ] ; xx [ 0 ] = 1.0 ; xx [ 1 ] = fabs ( mag ) ; xx [ 2 ] =
xx [ 0 ] / ( xx [ 1 ] - floor ( xx [ 1 ] ) + 1.0e-9 ) ; xx [ 1 ] = sin ( xx [
2 ] ) ; xx [ 3 ] = 0.0 ; xx [ 4 ] = cos ( xx [ 2 ] ) ; xx [ 5 ] = sin ( 2.0 *
xx [ 2 ] ) ; xx [ 2 ] = 0.5 * mag ; xx [ 6 ] = sqrt ( xx [ 1 ] * xx [ 1 ] +
xx [ 4 ] * xx [ 4 ] + xx [ 5 ] * xx [ 5 ] ) ; xx [ 7 ] = xx [ 6 ] == 0.0 ?
0.0 : xx [ 1 ] / xx [ 6 ] ; xx [ 8 ] = sin ( xx [ 2 ] ) ; xx [ 9 ] = xx [ 6 ]
== 0.0 ? 0.0 : xx [ 4 ] / xx [ 6 ] ; xx [ 10 ] = xx [ 6 ] == 0.0 ? 0.0 : xx [
5 ] / xx [ 6 ] ; xx [ 11 ] = xx [ 1 ] == xx [ 3 ] && xx [ 4 ] == xx [ 3 ] &&
xx [ 5 ] == xx [ 3 ] ? xx [ 0 ] : cos ( xx [ 2 ] ) ; xx [ 12 ] = xx [ 7 ] *
xx [ 8 ] ; xx [ 13 ] = xx [ 9 ] * xx [ 8 ] ; xx [ 14 ] = xx [ 10 ] * xx [ 8 ]
; xx [ 0 ] = state [ 46 ] ; xx [ 1 ] = state [ 47 ] ; xx [ 2 ] = state [ 48 ]
; xx [ 3 ] = state [ 49 ] ; pm_math_Quaternion_compose_ra ( xx + 11 , xx + 0
, xx + 4 ) ; state [ 46 ] = xx [ 4 ] ; state [ 47 ] = xx [ 5 ] ; state [ 48 ]
= xx [ 6 ] ; state [ 49 ] = xx [ 7 ] ; } static void
perturbAsmJointPrimitiveState_15_3v ( double mag , double * state ) { double
xx [ 15 ] ; xx [ 0 ] = 1.0 ; xx [ 1 ] = fabs ( mag ) ; xx [ 2 ] = xx [ 0 ] /
( xx [ 1 ] - floor ( xx [ 1 ] ) + 1.0e-9 ) ; xx [ 1 ] = sin ( xx [ 2 ] ) ; xx
[ 3 ] = 0.0 ; xx [ 4 ] = cos ( xx [ 2 ] ) ; xx [ 5 ] = sin ( 2.0 * xx [ 2 ] )
; xx [ 2 ] = 0.5 * mag ; xx [ 6 ] = sqrt ( xx [ 1 ] * xx [ 1 ] + xx [ 4 ] *
xx [ 4 ] + xx [ 5 ] * xx [ 5 ] ) ; xx [ 7 ] = xx [ 6 ] == 0.0 ? 0.0 : xx [ 1
] / xx [ 6 ] ; xx [ 8 ] = sin ( xx [ 2 ] ) ; xx [ 9 ] = xx [ 6 ] == 0.0 ? 0.0
: xx [ 4 ] / xx [ 6 ] ; xx [ 10 ] = xx [ 6 ] == 0.0 ? 0.0 : xx [ 5 ] / xx [ 6
] ; xx [ 11 ] = xx [ 1 ] == xx [ 3 ] && xx [ 4 ] == xx [ 3 ] && xx [ 5 ] ==
xx [ 3 ] ? xx [ 0 ] : cos ( xx [ 2 ] ) ; xx [ 12 ] = xx [ 7 ] * xx [ 8 ] ; xx
[ 13 ] = xx [ 9 ] * xx [ 8 ] ; xx [ 14 ] = xx [ 10 ] * xx [ 8 ] ; xx [ 3 ] =
state [ 46 ] ; xx [ 4 ] = state [ 47 ] ; xx [ 5 ] = state [ 48 ] ; xx [ 6 ] =
state [ 49 ] ; pm_math_Quaternion_compose_ra ( xx + 11 , xx + 3 , xx + 7 ) ;
state [ 46 ] = xx [ 7 ] ; state [ 47 ] = xx [ 8 ] ; state [ 48 ] = xx [ 9 ] ;
state [ 49 ] = xx [ 10 ] ; state [ 53 ] = state [ 53 ] + 1.2 * mag ; state [
54 ] = state [ 54 ] - xx [ 2 ] ; state [ 55 ] = state [ 55 ] + 0.9 * mag ; }
void Top_Level_Simulation_66cd9431_1_perturbAsmJointPrimitiveState ( const
void * mech , size_t stageIdx , size_t primIdx , double mag , boolean_T
doPerturbVelocity , double * state ) { ( void ) mech ; ( void ) stageIdx ; (
void ) primIdx ; ( void ) mag ; ( void ) doPerturbVelocity ; ( void ) state ;
switch ( ( stageIdx * 6 + primIdx ) * 2 + ( doPerturbVelocity ? 1 : 0 ) ) {
case 0 : perturbAsmJointPrimitiveState_0_0 ( mag , state ) ; break ; case 1 :
perturbAsmJointPrimitiveState_0_0v ( mag , state ) ; break ; case 2 :
perturbAsmJointPrimitiveState_0_1 ( mag , state ) ; break ; case 3 :
perturbAsmJointPrimitiveState_0_1v ( mag , state ) ; break ; case 4 :
perturbAsmJointPrimitiveState_0_2 ( mag , state ) ; break ; case 5 :
perturbAsmJointPrimitiveState_0_2v ( mag , state ) ; break ; case 12 :
perturbAsmJointPrimitiveState_1_0 ( mag , state ) ; break ; case 13 :
perturbAsmJointPrimitiveState_1_0v ( mag , state ) ; break ; case 24 :
perturbAsmJointPrimitiveState_2_0 ( mag , state ) ; break ; case 25 :
perturbAsmJointPrimitiveState_2_0v ( mag , state ) ; break ; case 36 :
perturbAsmJointPrimitiveState_3_0 ( mag , state ) ; break ; case 37 :
perturbAsmJointPrimitiveState_3_0v ( mag , state ) ; break ; case 48 :
perturbAsmJointPrimitiveState_4_0 ( mag , state ) ; break ; case 49 :
perturbAsmJointPrimitiveState_4_0v ( mag , state ) ; break ; case 60 :
perturbAsmJointPrimitiveState_5_0 ( mag , state ) ; break ; case 61 :
perturbAsmJointPrimitiveState_5_0v ( mag , state ) ; break ; case 72 :
perturbAsmJointPrimitiveState_6_0 ( mag , state ) ; break ; case 73 :
perturbAsmJointPrimitiveState_6_0v ( mag , state ) ; break ; case 84 :
perturbAsmJointPrimitiveState_7_0 ( mag , state ) ; break ; case 85 :
perturbAsmJointPrimitiveState_7_0v ( mag , state ) ; break ; case 96 :
perturbAsmJointPrimitiveState_8_0 ( mag , state ) ; break ; case 97 :
perturbAsmJointPrimitiveState_8_0v ( mag , state ) ; break ; case 108 :
perturbAsmJointPrimitiveState_9_0 ( mag , state ) ; break ; case 109 :
perturbAsmJointPrimitiveState_9_0v ( mag , state ) ; break ; case 120 :
perturbAsmJointPrimitiveState_10_0 ( mag , state ) ; break ; case 121 :
perturbAsmJointPrimitiveState_10_0v ( mag , state ) ; break ; case 132 :
perturbAsmJointPrimitiveState_11_0 ( mag , state ) ; break ; case 133 :
perturbAsmJointPrimitiveState_11_0v ( mag , state ) ; break ; case 144 :
perturbAsmJointPrimitiveState_12_0 ( mag , state ) ; break ; case 145 :
perturbAsmJointPrimitiveState_12_0v ( mag , state ) ; break ; case 168 :
perturbAsmJointPrimitiveState_14_0 ( mag , state ) ; break ; case 169 :
perturbAsmJointPrimitiveState_14_0v ( mag , state ) ; break ; case 170 :
perturbAsmJointPrimitiveState_14_1 ( mag , state ) ; break ; case 171 :
perturbAsmJointPrimitiveState_14_1v ( mag , state ) ; break ; case 172 :
perturbAsmJointPrimitiveState_14_2 ( mag , state ) ; break ; case 173 :
perturbAsmJointPrimitiveState_14_2v ( mag , state ) ; break ; case 174 :
perturbAsmJointPrimitiveState_14_3 ( mag , state ) ; break ; case 175 :
perturbAsmJointPrimitiveState_14_3v ( mag , state ) ; break ; case 180 :
perturbAsmJointPrimitiveState_15_0 ( mag , state ) ; break ; case 181 :
perturbAsmJointPrimitiveState_15_0v ( mag , state ) ; break ; case 182 :
perturbAsmJointPrimitiveState_15_1 ( mag , state ) ; break ; case 183 :
perturbAsmJointPrimitiveState_15_1v ( mag , state ) ; break ; case 184 :
perturbAsmJointPrimitiveState_15_2 ( mag , state ) ; break ; case 185 :
perturbAsmJointPrimitiveState_15_2v ( mag , state ) ; break ; case 186 :
perturbAsmJointPrimitiveState_15_3 ( mag , state ) ; break ; case 187 :
perturbAsmJointPrimitiveState_15_3v ( mag , state ) ; break ; } } static void
computePosDofBlendMatrix_14_3 ( const double * state , int partialType ,
double * matrix ) { double xx [ 20 ] ; xx [ 0 ] = 9.87654321 ; xx [ 1 ] = 2.0
; xx [ 2 ] = xx [ 1 ] * ( state [ 34 ] * state [ 35 ] - state [ 33 ] * state
[ 36 ] ) ; xx [ 3 ] = xx [ 2 ] * xx [ 2 ] ; xx [ 4 ] = 1.0 ; xx [ 5 ] = (
state [ 33 ] * state [ 33 ] + state [ 34 ] * state [ 34 ] ) * xx [ 1 ] - xx [
4 ] ; xx [ 6 ] = xx [ 5 ] * xx [ 5 ] ; xx [ 7 ] = sqrt ( xx [ 3 ] + xx [ 6 ]
) ; xx [ 8 ] = xx [ 7 ] == 0.0 ? 0.0 : - xx [ 2 ] / xx [ 7 ] ; xx [ 9 ] = xx
[ 6 ] + xx [ 3 ] ; xx [ 3 ] = sqrt ( xx [ 9 ] ) ; xx [ 6 ] = xx [ 3 ] == 0.0
? 0.0 : xx [ 5 ] / xx [ 3 ] ; xx [ 10 ] = 0.0 ; xx [ 11 ] = ( state [ 34 ] *
state [ 36 ] + state [ 33 ] * state [ 35 ] ) * xx [ 1 ] ; xx [ 1 ] = sqrt (
xx [ 9 ] + xx [ 11 ] * xx [ 11 ] ) ; xx [ 12 ] = xx [ 1 ] == 0.0 ? 0.0 : xx [
5 ] / xx [ 1 ] ; xx [ 14 ] = xx [ 8 ] ; xx [ 15 ] = xx [ 6 ] ; xx [ 16 ] = xx
[ 10 ] ; xx [ 17 ] = xx [ 8 ] ; xx [ 18 ] = xx [ 8 ] ; xx [ 19 ] = xx [ 12 ]
; xx [ 6 ] = xx [ 13 + ( partialType ) ] ; xx [ 8 ] = xx [ 7 ] == 0.0 ? 0.0 :
xx [ 5 ] / xx [ 7 ] ; xx [ 7 ] = xx [ 3 ] == 0.0 ? 0.0 : xx [ 2 ] / xx [ 3 ]
; xx [ 3 ] = xx [ 1 ] == 0.0 ? 0.0 : xx [ 2 ] / xx [ 1 ] ; xx [ 13 ] = xx [ 8
] ; xx [ 14 ] = xx [ 7 ] ; xx [ 15 ] = xx [ 10 ] ; xx [ 16 ] = xx [ 8 ] ; xx
[ 17 ] = xx [ 8 ] ; xx [ 18 ] = xx [ 3 ] ; xx [ 2 ] = xx [ 12 + ( partialType
) ] ; xx [ 3 ] = xx [ 1 ] == 0.0 ? 0.0 : xx [ 11 ] / xx [ 1 ] ; xx [ 13 ] =
xx [ 10 ] ; xx [ 14 ] = xx [ 10 ] ; xx [ 15 ] = xx [ 4 ] ; xx [ 16 ] = xx [
10 ] ; xx [ 17 ] = xx [ 10 ] ; xx [ 18 ] = xx [ 3 ] ; xx [ 1 ] = xx [ 12 + (
partialType ) ] ; xx [ 3 ] = xx [ 11 ] * xx [ 5 ] ; xx [ 5 ] = sqrt ( xx [ 9
] * xx [ 9 ] + xx [ 3 ] * xx [ 3 ] ) ; xx [ 7 ] = xx [ 5 ] == 0.0 ? 0.0 : xx
[ 9 ] / xx [ 5 ] ; xx [ 12 ] = xx [ 10 ] ; xx [ 13 ] = xx [ 10 ] ; xx [ 14 ]
= xx [ 10 ] ; xx [ 15 ] = xx [ 7 ] ; xx [ 16 ] = xx [ 10 ] ; xx [ 17 ] = xx [
10 ] ; xx [ 7 ] = xx [ 11 + ( partialType ) ] ; xx [ 12 ] = xx [ 10 ] ; xx [
13 ] = xx [ 10 ] ; xx [ 14 ] = xx [ 10 ] ; xx [ 15 ] = xx [ 10 ] ; xx [ 16 ]
= xx [ 10 ] ; xx [ 17 ] = xx [ 10 ] ; xx [ 8 ] = xx [ 11 + ( partialType ) ]
; xx [ 9 ] = xx [ 5 ] == 0.0 ? 0.0 : xx [ 3 ] / xx [ 5 ] ; xx [ 12 ] = xx [ 4
] ; xx [ 13 ] = xx [ 4 ] ; xx [ 14 ] = xx [ 10 ] ; xx [ 15 ] = xx [ 9 ] ; xx
[ 16 ] = xx [ 10 ] ; xx [ 17 ] = xx [ 10 ] ; xx [ 0 ] = xx [ 11 + (
partialType ) ] ; matrix [ 0 ] = xx [ 6 ] ; matrix [ 1 ] = xx [ 2 ] ; matrix
[ 2 ] = xx [ 1 ] ; matrix [ 3 ] = xx [ 7 ] ; matrix [ 4 ] = xx [ 8 ] ; matrix
[ 5 ] = xx [ 0 ] ; matrix [ 6 ] = xx [ 8 ] ; matrix [ 7 ] = xx [ 8 ] ; matrix
[ 8 ] = xx [ 8 ] ; } static void computePosDofBlendMatrix_15_3 ( const double
* state , int partialType , double * matrix ) { double xx [ 20 ] ; xx [ 0 ] =
9.87654321 ; xx [ 1 ] = 2.0 ; xx [ 2 ] = xx [ 1 ] * ( state [ 47 ] * state [
48 ] - state [ 46 ] * state [ 49 ] ) ; xx [ 3 ] = xx [ 2 ] * xx [ 2 ] ; xx [
4 ] = 1.0 ; xx [ 5 ] = ( state [ 46 ] * state [ 46 ] + state [ 47 ] * state [
47 ] ) * xx [ 1 ] - xx [ 4 ] ; xx [ 6 ] = xx [ 5 ] * xx [ 5 ] ; xx [ 7 ] =
sqrt ( xx [ 3 ] + xx [ 6 ] ) ; xx [ 8 ] = xx [ 7 ] == 0.0 ? 0.0 : - xx [ 2 ]
/ xx [ 7 ] ; xx [ 9 ] = xx [ 6 ] + xx [ 3 ] ; xx [ 3 ] = sqrt ( xx [ 9 ] ) ;
xx [ 6 ] = xx [ 3 ] == 0.0 ? 0.0 : xx [ 5 ] / xx [ 3 ] ; xx [ 10 ] = 0.0 ; xx
[ 11 ] = ( state [ 47 ] * state [ 49 ] + state [ 46 ] * state [ 48 ] ) * xx [
1 ] ; xx [ 1 ] = sqrt ( xx [ 9 ] + xx [ 11 ] * xx [ 11 ] ) ; xx [ 12 ] = xx [
1 ] == 0.0 ? 0.0 : xx [ 5 ] / xx [ 1 ] ; xx [ 14 ] = xx [ 8 ] ; xx [ 15 ] =
xx [ 6 ] ; xx [ 16 ] = xx [ 10 ] ; xx [ 17 ] = xx [ 8 ] ; xx [ 18 ] = xx [ 8
] ; xx [ 19 ] = xx [ 12 ] ; xx [ 6 ] = xx [ 13 + ( partialType ) ] ; xx [ 8 ]
= xx [ 7 ] == 0.0 ? 0.0 : xx [ 5 ] / xx [ 7 ] ; xx [ 7 ] = xx [ 3 ] == 0.0 ?
0.0 : xx [ 2 ] / xx [ 3 ] ; xx [ 3 ] = xx [ 1 ] == 0.0 ? 0.0 : xx [ 2 ] / xx
[ 1 ] ; xx [ 13 ] = xx [ 8 ] ; xx [ 14 ] = xx [ 7 ] ; xx [ 15 ] = xx [ 10 ] ;
xx [ 16 ] = xx [ 8 ] ; xx [ 17 ] = xx [ 8 ] ; xx [ 18 ] = xx [ 3 ] ; xx [ 2 ]
= xx [ 12 + ( partialType ) ] ; xx [ 3 ] = xx [ 1 ] == 0.0 ? 0.0 : xx [ 11 ]
/ xx [ 1 ] ; xx [ 13 ] = xx [ 10 ] ; xx [ 14 ] = xx [ 10 ] ; xx [ 15 ] = xx [
4 ] ; xx [ 16 ] = xx [ 10 ] ; xx [ 17 ] = xx [ 10 ] ; xx [ 18 ] = xx [ 3 ] ;
xx [ 1 ] = xx [ 12 + ( partialType ) ] ; xx [ 3 ] = xx [ 11 ] * xx [ 5 ] ; xx
[ 5 ] = sqrt ( xx [ 9 ] * xx [ 9 ] + xx [ 3 ] * xx [ 3 ] ) ; xx [ 7 ] = xx [
5 ] == 0.0 ? 0.0 : xx [ 9 ] / xx [ 5 ] ; xx [ 12 ] = xx [ 10 ] ; xx [ 13 ] =
xx [ 10 ] ; xx [ 14 ] = xx [ 10 ] ; xx [ 15 ] = xx [ 7 ] ; xx [ 16 ] = xx [
10 ] ; xx [ 17 ] = xx [ 10 ] ; xx [ 7 ] = xx [ 11 + ( partialType ) ] ; xx [
12 ] = xx [ 10 ] ; xx [ 13 ] = xx [ 10 ] ; xx [ 14 ] = xx [ 10 ] ; xx [ 15 ]
= xx [ 10 ] ; xx [ 16 ] = xx [ 10 ] ; xx [ 17 ] = xx [ 10 ] ; xx [ 8 ] = xx [
11 + ( partialType ) ] ; xx [ 9 ] = xx [ 5 ] == 0.0 ? 0.0 : xx [ 3 ] / xx [ 5
] ; xx [ 12 ] = xx [ 4 ] ; xx [ 13 ] = xx [ 4 ] ; xx [ 14 ] = xx [ 10 ] ; xx
[ 15 ] = xx [ 9 ] ; xx [ 16 ] = xx [ 10 ] ; xx [ 17 ] = xx [ 10 ] ; xx [ 0 ]
= xx [ 11 + ( partialType ) ] ; matrix [ 0 ] = xx [ 6 ] ; matrix [ 1 ] = xx [
2 ] ; matrix [ 2 ] = xx [ 1 ] ; matrix [ 3 ] = xx [ 7 ] ; matrix [ 4 ] = xx [
8 ] ; matrix [ 5 ] = xx [ 0 ] ; matrix [ 6 ] = xx [ 8 ] ; matrix [ 7 ] = xx [
8 ] ; matrix [ 8 ] = xx [ 8 ] ; } void
Top_Level_Simulation_66cd9431_1_computePosDofBlendMatrix ( const void * mech
, size_t stageIdx , size_t primIdx , const double * state , int partialType ,
double * matrix ) { ( void ) mech ; ( void ) stageIdx ; ( void ) primIdx ; (
void ) state ; ( void ) partialType ; ( void ) matrix ; switch ( ( stageIdx *
6 + primIdx ) ) { case 87 : computePosDofBlendMatrix_14_3 ( state ,
partialType , matrix ) ; break ; case 93 : computePosDofBlendMatrix_15_3 (
state , partialType , matrix ) ; break ; } } static void
computeVelDofBlendMatrix_14_3 ( const double * state , int partialType ,
double * matrix ) { double xx [ 15 ] ; ( void ) state ; xx [ 0 ] = 9.87654321
; xx [ 1 ] = 0.0 ; xx [ 2 ] = 1.0 ; xx [ 4 ] = xx [ 1 ] ; xx [ 5 ] = xx [ 2 ]
; xx [ 6 ] = xx [ 1 ] ; xx [ 7 ] = xx [ 2 ] ; xx [ 8 ] = xx [ 1 ] ; xx [ 9 ]
= xx [ 2 ] ; xx [ 10 ] = xx [ 3 + ( partialType ) ] ; xx [ 4 ] = xx [ 2 ] ;
xx [ 5 ] = xx [ 1 ] ; xx [ 6 ] = xx [ 1 ] ; xx [ 7 ] = xx [ 1 ] ; xx [ 8 ] =
xx [ 2 ] ; xx [ 9 ] = xx [ 1 ] ; xx [ 11 ] = xx [ 3 + ( partialType ) ] ; xx
[ 4 ] = xx [ 1 ] ; xx [ 5 ] = xx [ 1 ] ; xx [ 6 ] = xx [ 2 ] ; xx [ 7 ] = xx
[ 1 ] ; xx [ 8 ] = xx [ 1 ] ; xx [ 9 ] = xx [ 1 ] ; xx [ 12 ] = xx [ 3 + (
partialType ) ] ; xx [ 4 ] = xx [ 1 ] ; xx [ 5 ] = xx [ 1 ] ; xx [ 6 ] = xx [
1 ] ; xx [ 7 ] = xx [ 1 ] ; xx [ 8 ] = xx [ 1 ] ; xx [ 9 ] = xx [ 1 ] ; xx [
13 ] = xx [ 3 + ( partialType ) ] ; xx [ 4 ] = xx [ 1 ] ; xx [ 5 ] = xx [ 1 ]
; xx [ 6 ] = xx [ 1 ] ; xx [ 7 ] = xx [ 2 ] ; xx [ 8 ] = xx [ 1 ] ; xx [ 9 ]
= xx [ 1 ] ; xx [ 14 ] = xx [ 3 + ( partialType ) ] ; xx [ 4 ] = xx [ 2 ] ;
xx [ 5 ] = xx [ 2 ] ; xx [ 6 ] = xx [ 1 ] ; xx [ 7 ] = xx [ 1 ] ; xx [ 8 ] =
xx [ 1 ] ; xx [ 9 ] = xx [ 1 ] ; xx [ 0 ] = xx [ 3 + ( partialType ) ] ;
matrix [ 0 ] = xx [ 10 ] ; matrix [ 1 ] = xx [ 11 ] ; matrix [ 2 ] = xx [ 12
] ; matrix [ 3 ] = xx [ 13 ] ; matrix [ 4 ] = xx [ 14 ] ; matrix [ 5 ] = xx [
0 ] ; matrix [ 6 ] = xx [ 13 ] ; matrix [ 7 ] = xx [ 13 ] ; matrix [ 8 ] = xx
[ 13 ] ; } static void computeVelDofBlendMatrix_15_3 ( const double * state ,
int partialType , double * matrix ) { double xx [ 15 ] ; ( void ) state ; xx
[ 0 ] = 9.87654321 ; xx [ 1 ] = 0.0 ; xx [ 2 ] = 1.0 ; xx [ 4 ] = xx [ 1 ] ;
xx [ 5 ] = xx [ 2 ] ; xx [ 6 ] = xx [ 1 ] ; xx [ 7 ] = xx [ 2 ] ; xx [ 8 ] =
xx [ 1 ] ; xx [ 9 ] = xx [ 2 ] ; xx [ 10 ] = xx [ 3 + ( partialType ) ] ; xx
[ 4 ] = xx [ 2 ] ; xx [ 5 ] = xx [ 1 ] ; xx [ 6 ] = xx [ 1 ] ; xx [ 7 ] = xx
[ 1 ] ; xx [ 8 ] = xx [ 2 ] ; xx [ 9 ] = xx [ 1 ] ; xx [ 11 ] = xx [ 3 + (
partialType ) ] ; xx [ 4 ] = xx [ 1 ] ; xx [ 5 ] = xx [ 1 ] ; xx [ 6 ] = xx [
2 ] ; xx [ 7 ] = xx [ 1 ] ; xx [ 8 ] = xx [ 1 ] ; xx [ 9 ] = xx [ 1 ] ; xx [
12 ] = xx [ 3 + ( partialType ) ] ; xx [ 4 ] = xx [ 1 ] ; xx [ 5 ] = xx [ 1 ]
; xx [ 6 ] = xx [ 1 ] ; xx [ 7 ] = xx [ 1 ] ; xx [ 8 ] = xx [ 1 ] ; xx [ 9 ]
= xx [ 1 ] ; xx [ 13 ] = xx [ 3 + ( partialType ) ] ; xx [ 4 ] = xx [ 1 ] ;
xx [ 5 ] = xx [ 1 ] ; xx [ 6 ] = xx [ 1 ] ; xx [ 7 ] = xx [ 2 ] ; xx [ 8 ] =
xx [ 1 ] ; xx [ 9 ] = xx [ 1 ] ; xx [ 14 ] = xx [ 3 + ( partialType ) ] ; xx
[ 4 ] = xx [ 2 ] ; xx [ 5 ] = xx [ 2 ] ; xx [ 6 ] = xx [ 1 ] ; xx [ 7 ] = xx
[ 1 ] ; xx [ 8 ] = xx [ 1 ] ; xx [ 9 ] = xx [ 1 ] ; xx [ 0 ] = xx [ 3 + (
partialType ) ] ; matrix [ 0 ] = xx [ 10 ] ; matrix [ 1 ] = xx [ 11 ] ;
matrix [ 2 ] = xx [ 12 ] ; matrix [ 3 ] = xx [ 13 ] ; matrix [ 4 ] = xx [ 14
] ; matrix [ 5 ] = xx [ 0 ] ; matrix [ 6 ] = xx [ 13 ] ; matrix [ 7 ] = xx [
13 ] ; matrix [ 8 ] = xx [ 13 ] ; } void
Top_Level_Simulation_66cd9431_1_computeVelDofBlendMatrix ( const void * mech
, size_t stageIdx , size_t primIdx , const double * state , int partialType ,
double * matrix ) { ( void ) mech ; ( void ) stageIdx ; ( void ) primIdx ; (
void ) state ; ( void ) partialType ; ( void ) matrix ; switch ( ( stageIdx *
6 + primIdx ) ) { case 87 : computeVelDofBlendMatrix_14_3 ( state ,
partialType , matrix ) ; break ; case 93 : computeVelDofBlendMatrix_15_3 (
state , partialType , matrix ) ; break ; } } static void
projectPartiallyTargetedPos_14_3 ( const double * origState , int partialType
, double * state ) { boolean_T bb [ 2 ] ; double xx [ 17 ] ; xx [ 0 ] = 2.0 ;
xx [ 1 ] = ( state [ 34 ] * state [ 36 ] + state [ 33 ] * state [ 35 ] ) * xx
[ 0 ] ; xx [ 2 ] = 0.99999999999999 ; bb [ 0 ] = fabs ( xx [ 1 ] ) > xx [ 2 ]
; xx [ 3 ] = 1.570796326794897 ; if ( xx [ 1 ] < 0.0 ) xx [ 4 ] = - 1.0 ;
else if ( xx [ 1 ] > 0.0 ) xx [ 4 ] = + 1.0 ; else xx [ 4 ] = 0.0 ; xx [ 5 ]
= fabs ( xx [ 1 ] ) > 1.0 ? atan2 ( xx [ 1 ] , 0.0 ) : asin ( xx [ 1 ] ) ; xx
[ 1 ] = bb [ 0 ] ? xx [ 3 ] * xx [ 4 ] : xx [ 5 ] ; xx [ 5 ] = ( origState [
34 ] * origState [ 36 ] + origState [ 33 ] * origState [ 35 ] ) * xx [ 0 ] ;
bb [ 1 ] = fabs ( xx [ 5 ] ) > xx [ 2 ] ; if ( xx [ 5 ] < 0.0 ) xx [ 2 ] = -
1.0 ; else if ( xx [ 5 ] > 0.0 ) xx [ 2 ] = + 1.0 ; else xx [ 2 ] = 0.0 ; xx
[ 6 ] = fabs ( xx [ 5 ] ) > 1.0 ? atan2 ( xx [ 5 ] , 0.0 ) : asin ( xx [ 5 ]
) ; xx [ 5 ] = bb [ 1 ] ? xx [ 3 ] * xx [ 2 ] : xx [ 6 ] ; xx [ 6 ] = xx [ 1
] ; xx [ 7 ] = xx [ 1 ] ; xx [ 8 ] = xx [ 5 ] ; xx [ 9 ] = xx [ 5 ] ; xx [ 10
] = xx [ 1 ] ; xx [ 11 ] = xx [ 1 ] ; xx [ 12 ] = xx [ 5 ] ; xx [ 1 ] = xx [
6 + ( partialType ) ] ; xx [ 3 ] = cos ( xx [ 1 ] ) ; xx [ 5 ] = 0.5 ; xx [ 6
] = state [ 35 ] * state [ 36 ] ; xx [ 7 ] = state [ 33 ] * state [ 34 ] ; xx
[ 8 ] = state [ 33 ] * state [ 33 ] ; xx [ 9 ] = 1.0 ; xx [ 10 ] = ( xx [ 8 ]
+ state [ 35 ] * state [ 35 ] ) * xx [ 0 ] - xx [ 9 ] ; xx [ 11 ] = ( xx [ 6
] + xx [ 7 ] ) * xx [ 0 ] ; xx [ 10 ] = ( xx [ 11 ] == 0.0 && xx [ 10 ] ==
0.0 ) ? 0.0 : atan2 ( xx [ 11 ] , xx [ 10 ] ) ; xx [ 11 ] = ( xx [ 8 ] +
state [ 36 ] * state [ 36 ] ) * xx [ 0 ] - xx [ 9 ] ; xx [ 12 ] = - ( xx [ 0
] * ( xx [ 6 ] - xx [ 7 ] ) ) ; xx [ 11 ] = ( xx [ 12 ] == 0.0 && xx [ 11 ]
== 0.0 ) ? 0.0 : atan2 ( xx [ 12 ] , xx [ 11 ] ) ; xx [ 6 ] = bb [ 0 ] ? xx [
5 ] * xx [ 10 ] : xx [ 11 ] ; xx [ 7 ] = ( xx [ 8 ] + state [ 34 ] * state [
34 ] ) * xx [ 0 ] - xx [ 9 ] ; xx [ 10 ] = - ( xx [ 0 ] * ( state [ 34 ] *
state [ 35 ] - state [ 33 ] * state [ 36 ] ) ) ; xx [ 7 ] = ( xx [ 10 ] ==
0.0 && xx [ 7 ] == 0.0 ) ? 0.0 : atan2 ( xx [ 10 ] , xx [ 7 ] ) ; xx [ 8 ] =
bb [ 0 ] ? xx [ 4 ] * xx [ 6 ] : xx [ 7 ] ; xx [ 4 ] = origState [ 35 ] *
origState [ 36 ] ; xx [ 7 ] = origState [ 33 ] * origState [ 34 ] ; xx [ 10 ]
= origState [ 33 ] * origState [ 33 ] ; xx [ 11 ] = ( xx [ 10 ] + origState [
35 ] * origState [ 35 ] ) * xx [ 0 ] - xx [ 9 ] ; xx [ 12 ] = ( xx [ 4 ] + xx
[ 7 ] ) * xx [ 0 ] ; xx [ 11 ] = ( xx [ 12 ] == 0.0 && xx [ 11 ] == 0.0 ) ?
0.0 : atan2 ( xx [ 12 ] , xx [ 11 ] ) ; xx [ 12 ] = ( xx [ 10 ] + origState [
36 ] * origState [ 36 ] ) * xx [ 0 ] - xx [ 9 ] ; xx [ 13 ] = - ( xx [ 0 ] *
( xx [ 4 ] - xx [ 7 ] ) ) ; xx [ 12 ] = ( xx [ 13 ] == 0.0 && xx [ 12 ] ==
0.0 ) ? 0.0 : atan2 ( xx [ 13 ] , xx [ 12 ] ) ; xx [ 4 ] = bb [ 1 ] ? xx [ 5
] * xx [ 11 ] : xx [ 12 ] ; xx [ 5 ] = ( xx [ 10 ] + origState [ 34 ] *
origState [ 34 ] ) * xx [ 0 ] - xx [ 9 ] ; xx [ 7 ] = - ( xx [ 0 ] * (
origState [ 34 ] * origState [ 35 ] - origState [ 33 ] * origState [ 36 ] ) )
; xx [ 5 ] = ( xx [ 7 ] == 0.0 && xx [ 5 ] == 0.0 ) ? 0.0 : atan2 ( xx [ 7 ]
, xx [ 5 ] ) ; xx [ 0 ] = bb [ 1 ] ? xx [ 2 ] * xx [ 4 ] : xx [ 5 ] ; xx [ 9
] = xx [ 8 ] ; xx [ 10 ] = xx [ 8 ] ; xx [ 11 ] = xx [ 8 ] ; xx [ 12 ] = xx [
8 ] ; xx [ 13 ] = xx [ 0 ] ; xx [ 14 ] = xx [ 0 ] ; xx [ 15 ] = xx [ 0 ] ; xx
[ 0 ] = xx [ 9 + ( partialType ) ] ; xx [ 2 ] = cos ( xx [ 0 ] ) ; xx [ 5 ] =
sin ( xx [ 0 ] ) ; xx [ 0 ] = sin ( xx [ 1 ] ) ; xx [ 7 ] = xx [ 6 ] ; xx [ 8
] = xx [ 4 ] ; xx [ 9 ] = xx [ 6 ] ; xx [ 10 ] = xx [ 4 ] ; xx [ 11 ] = xx [
6 ] ; xx [ 12 ] = xx [ 4 ] ; xx [ 13 ] = xx [ 6 ] ; xx [ 1 ] = xx [ 7 + (
partialType ) ] ; xx [ 4 ] = cos ( xx [ 1 ] ) ; xx [ 6 ] = sin ( xx [ 1 ] ) ;
xx [ 1 ] = xx [ 2 ] * xx [ 6 ] ; xx [ 7 ] = xx [ 4 ] * xx [ 2 ] ; xx [ 8 ] =
xx [ 3 ] * xx [ 2 ] ; xx [ 9 ] = - ( xx [ 3 ] * xx [ 5 ] ) ; xx [ 10 ] = xx [
0 ] ; xx [ 11 ] = xx [ 4 ] * xx [ 5 ] + xx [ 1 ] * xx [ 0 ] ; xx [ 12 ] = xx
[ 7 ] - xx [ 6 ] * xx [ 0 ] * xx [ 5 ] ; xx [ 13 ] = - ( xx [ 3 ] * xx [ 6 ]
) ; xx [ 14 ] = xx [ 6 ] * xx [ 5 ] - xx [ 7 ] * xx [ 0 ] ; xx [ 15 ] = xx [
1 ] + xx [ 4 ] * xx [ 0 ] * xx [ 5 ] ; xx [ 16 ] = xx [ 4 ] * xx [ 3 ] ;
pm_math_Quaternion_Matrix3x3Ctor_ra ( xx + 8 , xx + 0 ) ; state [ 33 ] = xx [
0 ] ; state [ 34 ] = xx [ 1 ] ; state [ 35 ] = xx [ 2 ] ; state [ 36 ] = xx [
3 ] ; } static void projectPartiallyTargetedPos_15_3 ( const double *
origState , int partialType , double * state ) { boolean_T bb [ 2 ] ; double
xx [ 17 ] ; xx [ 0 ] = 2.0 ; xx [ 1 ] = ( state [ 47 ] * state [ 49 ] + state
[ 46 ] * state [ 48 ] ) * xx [ 0 ] ; xx [ 2 ] = 0.99999999999999 ; bb [ 0 ] =
fabs ( xx [ 1 ] ) > xx [ 2 ] ; xx [ 3 ] = 1.570796326794897 ; if ( xx [ 1 ] <
0.0 ) xx [ 4 ] = - 1.0 ; else if ( xx [ 1 ] > 0.0 ) xx [ 4 ] = + 1.0 ; else
xx [ 4 ] = 0.0 ; xx [ 5 ] = fabs ( xx [ 1 ] ) > 1.0 ? atan2 ( xx [ 1 ] , 0.0
) : asin ( xx [ 1 ] ) ; xx [ 1 ] = bb [ 0 ] ? xx [ 3 ] * xx [ 4 ] : xx [ 5 ]
; xx [ 5 ] = ( origState [ 47 ] * origState [ 49 ] + origState [ 46 ] *
origState [ 48 ] ) * xx [ 0 ] ; bb [ 1 ] = fabs ( xx [ 5 ] ) > xx [ 2 ] ; if
( xx [ 5 ] < 0.0 ) xx [ 2 ] = - 1.0 ; else if ( xx [ 5 ] > 0.0 ) xx [ 2 ] = +
1.0 ; else xx [ 2 ] = 0.0 ; xx [ 6 ] = fabs ( xx [ 5 ] ) > 1.0 ? atan2 ( xx [
5 ] , 0.0 ) : asin ( xx [ 5 ] ) ; xx [ 5 ] = bb [ 1 ] ? xx [ 3 ] * xx [ 2 ] :
xx [ 6 ] ; xx [ 6 ] = xx [ 1 ] ; xx [ 7 ] = xx [ 1 ] ; xx [ 8 ] = xx [ 5 ] ;
xx [ 9 ] = xx [ 5 ] ; xx [ 10 ] = xx [ 1 ] ; xx [ 11 ] = xx [ 1 ] ; xx [ 12 ]
= xx [ 5 ] ; xx [ 1 ] = xx [ 6 + ( partialType ) ] ; xx [ 3 ] = cos ( xx [ 1
] ) ; xx [ 5 ] = 0.5 ; xx [ 6 ] = state [ 48 ] * state [ 49 ] ; xx [ 7 ] =
state [ 46 ] * state [ 47 ] ; xx [ 8 ] = state [ 46 ] * state [ 46 ] ; xx [ 9
] = 1.0 ; xx [ 10 ] = ( xx [ 8 ] + state [ 48 ] * state [ 48 ] ) * xx [ 0 ] -
xx [ 9 ] ; xx [ 11 ] = ( xx [ 6 ] + xx [ 7 ] ) * xx [ 0 ] ; xx [ 10 ] = ( xx
[ 11 ] == 0.0 && xx [ 10 ] == 0.0 ) ? 0.0 : atan2 ( xx [ 11 ] , xx [ 10 ] ) ;
xx [ 11 ] = ( xx [ 8 ] + state [ 49 ] * state [ 49 ] ) * xx [ 0 ] - xx [ 9 ]
; xx [ 12 ] = - ( xx [ 0 ] * ( xx [ 6 ] - xx [ 7 ] ) ) ; xx [ 11 ] = ( xx [
12 ] == 0.0 && xx [ 11 ] == 0.0 ) ? 0.0 : atan2 ( xx [ 12 ] , xx [ 11 ] ) ;
xx [ 6 ] = bb [ 0 ] ? xx [ 5 ] * xx [ 10 ] : xx [ 11 ] ; xx [ 7 ] = ( xx [ 8
] + state [ 47 ] * state [ 47 ] ) * xx [ 0 ] - xx [ 9 ] ; xx [ 10 ] = - ( xx
[ 0 ] * ( state [ 47 ] * state [ 48 ] - state [ 46 ] * state [ 49 ] ) ) ; xx
[ 7 ] = ( xx [ 10 ] == 0.0 && xx [ 7 ] == 0.0 ) ? 0.0 : atan2 ( xx [ 10 ] ,
xx [ 7 ] ) ; xx [ 8 ] = bb [ 0 ] ? xx [ 4 ] * xx [ 6 ] : xx [ 7 ] ; xx [ 4 ]
= origState [ 48 ] * origState [ 49 ] ; xx [ 7 ] = origState [ 46 ] *
origState [ 47 ] ; xx [ 10 ] = origState [ 46 ] * origState [ 46 ] ; xx [ 11
] = ( xx [ 10 ] + origState [ 48 ] * origState [ 48 ] ) * xx [ 0 ] - xx [ 9 ]
; xx [ 12 ] = ( xx [ 4 ] + xx [ 7 ] ) * xx [ 0 ] ; xx [ 11 ] = ( xx [ 12 ] ==
0.0 && xx [ 11 ] == 0.0 ) ? 0.0 : atan2 ( xx [ 12 ] , xx [ 11 ] ) ; xx [ 12 ]
= ( xx [ 10 ] + origState [ 49 ] * origState [ 49 ] ) * xx [ 0 ] - xx [ 9 ] ;
xx [ 13 ] = - ( xx [ 0 ] * ( xx [ 4 ] - xx [ 7 ] ) ) ; xx [ 12 ] = ( xx [ 13
] == 0.0 && xx [ 12 ] == 0.0 ) ? 0.0 : atan2 ( xx [ 13 ] , xx [ 12 ] ) ; xx [
4 ] = bb [ 1 ] ? xx [ 5 ] * xx [ 11 ] : xx [ 12 ] ; xx [ 5 ] = ( xx [ 10 ] +
origState [ 47 ] * origState [ 47 ] ) * xx [ 0 ] - xx [ 9 ] ; xx [ 7 ] = - (
xx [ 0 ] * ( origState [ 47 ] * origState [ 48 ] - origState [ 46 ] *
origState [ 49 ] ) ) ; xx [ 5 ] = ( xx [ 7 ] == 0.0 && xx [ 5 ] == 0.0 ) ?
0.0 : atan2 ( xx [ 7 ] , xx [ 5 ] ) ; xx [ 0 ] = bb [ 1 ] ? xx [ 2 ] * xx [ 4
] : xx [ 5 ] ; xx [ 9 ] = xx [ 8 ] ; xx [ 10 ] = xx [ 8 ] ; xx [ 11 ] = xx [
8 ] ; xx [ 12 ] = xx [ 8 ] ; xx [ 13 ] = xx [ 0 ] ; xx [ 14 ] = xx [ 0 ] ; xx
[ 15 ] = xx [ 0 ] ; xx [ 0 ] = xx [ 9 + ( partialType ) ] ; xx [ 2 ] = cos (
xx [ 0 ] ) ; xx [ 5 ] = sin ( xx [ 0 ] ) ; xx [ 0 ] = sin ( xx [ 1 ] ) ; xx [
7 ] = xx [ 6 ] ; xx [ 8 ] = xx [ 4 ] ; xx [ 9 ] = xx [ 6 ] ; xx [ 10 ] = xx [
4 ] ; xx [ 11 ] = xx [ 6 ] ; xx [ 12 ] = xx [ 4 ] ; xx [ 13 ] = xx [ 6 ] ; xx
[ 1 ] = xx [ 7 + ( partialType ) ] ; xx [ 4 ] = cos ( xx [ 1 ] ) ; xx [ 6 ] =
sin ( xx [ 1 ] ) ; xx [ 1 ] = xx [ 2 ] * xx [ 6 ] ; xx [ 7 ] = xx [ 4 ] * xx
[ 2 ] ; xx [ 8 ] = xx [ 3 ] * xx [ 2 ] ; xx [ 9 ] = - ( xx [ 3 ] * xx [ 5 ] )
; xx [ 10 ] = xx [ 0 ] ; xx [ 11 ] = xx [ 4 ] * xx [ 5 ] + xx [ 1 ] * xx [ 0
] ; xx [ 12 ] = xx [ 7 ] - xx [ 6 ] * xx [ 0 ] * xx [ 5 ] ; xx [ 13 ] = - (
xx [ 3 ] * xx [ 6 ] ) ; xx [ 14 ] = xx [ 6 ] * xx [ 5 ] - xx [ 7 ] * xx [ 0 ]
; xx [ 15 ] = xx [ 1 ] + xx [ 4 ] * xx [ 0 ] * xx [ 5 ] ; xx [ 16 ] = xx [ 4
] * xx [ 3 ] ; pm_math_Quaternion_Matrix3x3Ctor_ra ( xx + 8 , xx + 0 ) ;
state [ 46 ] = xx [ 0 ] ; state [ 47 ] = xx [ 1 ] ; state [ 48 ] = xx [ 2 ] ;
state [ 49 ] = xx [ 3 ] ; } void
Top_Level_Simulation_66cd9431_1_projectPartiallyTargetedPos ( const void *
mech , size_t stageIdx , size_t primIdx , const double * origState , int
partialType , double * state ) { ( void ) mech ; ( void ) stageIdx ; ( void )
primIdx ; ( void ) origState ; ( void ) partialType ; ( void ) state ; switch
( ( stageIdx * 6 + primIdx ) ) { case 87 : projectPartiallyTargetedPos_14_3 (
origState , partialType , state ) ; break ; case 93 :
projectPartiallyTargetedPos_15_3 ( origState , partialType , state ) ; break
; } } void Top_Level_Simulation_66cd9431_1_propagateMotion ( const void *
mech , const RuntimeDerivedValuesBundle * rtdv , const double * state ,
double * motionData ) { const double * rtdvd = rtdv -> mDoubles . mValues ;
const int * rtdvi = rtdv -> mInts . mValues ; double xx [ 280 ] ; ( void )
mech ; ( void ) rtdvd ; ( void ) rtdvi ; xx [ 0 ] = - 0.9998828595337176 ; xx
[ 1 ] = 0.01527435878691359 ; xx [ 2 ] = 4.045007731647784e-4 ; xx [ 3 ] =
8.930584803650332e-4 ; xx [ 4 ] = 0.5 ; xx [ 5 ] = xx [ 4 ] * state [ 2 ] ;
xx [ 6 ] = 8.361885708047793e-4 ; xx [ 7 ] = sin ( xx [ 5 ] ) ; xx [ 8 ] =
0.03054441659711467 ; xx [ 9 ] = 0.9995330606855463 ; xx [ 10 ] = cos ( xx [
5 ] ) ; xx [ 11 ] = xx [ 6 ] * xx [ 7 ] ; xx [ 12 ] = - ( xx [ 8 ] * xx [ 7 ]
) ; xx [ 13 ] = xx [ 9 ] * xx [ 7 ] ; pm_math_Quaternion_compose_ra ( xx + 0
, xx + 10 , xx + 14 ) ; xx [ 0 ] = 1.74412095883791e-4 ; xx [ 1 ] = -
0.01351270086500039 ; xx [ 2 ] = - 0.2034547061116934 ;
pm_math_Quaternion_xform_ra ( xx + 14 , xx + 0 , xx + 18 ) ; xx [ 0 ] = 10.0
+ state [ 0 ] + xx [ 18 ] ; xx [ 1 ] = 19.0 + state [ 1 ] + xx [ 19 ] ; xx [
2 ] = 0.75253249 + xx [ 20 ] ; xx [ 18 ] = - 0.7028135602909749 ; xx [ 19 ] =
0.07669988561372969 ; xx [ 20 ] = - 0.7031991790424147 ; xx [ 21 ] =
0.07537334815463297 ; xx [ 3 ] = xx [ 4 ] * state [ 6 ] ; xx [ 5 ] =
3.859510765112818e-5 ; xx [ 7 ] = sin ( xx [ 3 ] ) ; xx [ 22 ] =
3.147330559368674e-8 ; xx [ 23 ] = 0.9999999992552083 ; xx [ 24 ] = cos ( xx
[ 3 ] ) ; xx [ 25 ] = xx [ 5 ] * xx [ 7 ] ; xx [ 26 ] = xx [ 22 ] * xx [ 7 ]
; xx [ 27 ] = xx [ 23 ] * xx [ 7 ] ; pm_math_Quaternion_compose_ra ( xx + 18
, xx + 24 , xx + 28 ) ; xx [ 18 ] = - 1.968287986067516e-5 ; xx [ 19 ] =
1.314780058148822e-7 ; xx [ 20 ] = 0.02748439753190126 ;
pm_math_Quaternion_xform_ra ( xx + 28 , xx + 18 , xx + 24 ) ; xx [ 3 ] =
0.6685874001840346 - xx [ 24 ] ; xx [ 7 ] = - ( 0.5570945207153138 + xx [ 25
] ) ; xx [ 18 ] = - ( 0.2499975940834365 + xx [ 26 ] ) ; xx [ 24 ] = -
0.702813560295885 ; xx [ 25 ] = 0.07669988556792312 ; xx [ 26 ] = -
0.7031991790474109 ; xx [ 27 ] = 0.07537334810884856 ; xx [ 19 ] = xx [ 4 ] *
state [ 8 ] ; xx [ 20 ] = 3.859510765187883e-5 ; xx [ 21 ] = sin ( xx [ 19 ]
) ; xx [ 32 ] = 3.147329712194357e-8 ; xx [ 33 ] = cos ( xx [ 19 ] ) ; xx [
34 ] = xx [ 20 ] * xx [ 21 ] ; xx [ 35 ] = xx [ 32 ] * xx [ 21 ] ; xx [ 36 ]
= xx [ 23 ] * xx [ 21 ] ; pm_math_Quaternion_compose_ra ( xx + 24 , xx + 33 ,
xx + 37 ) ; xx [ 24 ] = - 1.968287986070961e-5 ; xx [ 25 ] =
1.314780081294412e-7 ; xx [ 26 ] = 0.02748439753190079 ;
pm_math_Quaternion_xform_ra ( xx + 37 , xx + 24 , xx + 33 ) ; xx [ 19 ] =
0.6735121923585472 - xx [ 33 ] ; xx [ 21 ] = 0.6119801982481101 - xx [ 34 ] ;
xx [ 24 ] = - ( 0.2153409199312133 + xx [ 35 ] ) ; xx [ 33 ] = -
0.7007036234213749 ; xx [ 34 ] = - 0.09806435809566162 ; xx [ 35 ] =
0.7000079553913778 ; xx [ 36 ] = 0.09688486044901386 ; xx [ 25 ] = xx [ 4 ] *
state [ 10 ] ; xx [ 26 ] = 3.859510765194473e-5 ; xx [ 27 ] = sin ( xx [ 25 ]
) ; xx [ 41 ] = 3.147330091282344e-8 ; xx [ 42 ] = cos ( xx [ 25 ] ) ; xx [
43 ] = xx [ 26 ] * xx [ 27 ] ; xx [ 44 ] = xx [ 41 ] * xx [ 27 ] ; xx [ 45 ]
= xx [ 23 ] * xx [ 27 ] ; pm_math_Quaternion_compose_ra ( xx + 33 , xx + 42 ,
xx + 46 ) ; xx [ 33 ] = - 1.968287986110078e-5 ; xx [ 34 ] =
1.314780061281844e-7 ; xx [ 35 ] = 0.02748439753190142 ;
pm_math_Quaternion_xform_ra ( xx + 46 , xx + 33 , xx + 42 ) ; xx [ 25 ] = - (
0.6745907024342732 + xx [ 42 ] ) ; xx [ 27 ] = - ( 0.5583007254114289 + xx [
43 ] ) ; xx [ 33 ] = - ( 0.2499753719535159 + xx [ 44 ] ) ; xx [ 42 ] = -
0.7007036234193814 ; xx [ 43 ] = - 0.0980643581100574 ; xx [ 44 ] =
0.7000079553893624 ; xx [ 45 ] = 0.09688486046342419 ; xx [ 34 ] = xx [ 4 ] *
state [ 12 ] ; xx [ 35 ] = 3.859510765245116e-5 ; xx [ 36 ] = sin ( xx [ 34 ]
) ; xx [ 50 ] = 3.147330178338442e-8 ; xx [ 51 ] = cos ( xx [ 34 ] ) ; xx [
52 ] = xx [ 35 ] * xx [ 36 ] ; xx [ 53 ] = xx [ 50 ] * xx [ 36 ] ; xx [ 54 ]
= xx [ 23 ] * xx [ 36 ] ; pm_math_Quaternion_compose_ra ( xx + 42 , xx + 51 ,
xx + 55 ) ; xx [ 42 ] = - 1.968287986097872e-5 ; xx [ 43 ] =
1.314780056206076e-7 ; xx [ 44 ] = 0.0274843975319011 ;
pm_math_Quaternion_xform_ra ( xx + 55 , xx + 42 , xx + 51 ) ; xx [ 34 ] = - (
0.6696641306905931 + xx [ 51 ] ) ; xx [ 36 ] = 0.6107089891930354 - xx [ 52 ]
; xx [ 42 ] = - ( 0.2131915003260572 + xx [ 53 ] ) ; xx [ 51 ] = -
0.01543385393603001 ; xx [ 52 ] = 0.983150349850048 ; xx [ 53 ] = -
3.253268334045489e-3 ; xx [ 54 ] = 0.1821170008196838 ; xx [ 43 ] = xx [ 4 ]
* state [ 14 ] ; xx [ 44 ] = 0.3589770026115218 ; xx [ 45 ] = sin ( xx [ 43 ]
) ; xx [ 59 ] = 9.892548527733469e-4 ; xx [ 60 ] = 0.9333458806738709 ; xx [
61 ] = cos ( xx [ 43 ] ) ; xx [ 62 ] = - ( xx [ 44 ] * xx [ 45 ] ) ; xx [ 63
] = xx [ 59 ] * xx [ 45 ] ; xx [ 64 ] = xx [ 60 ] * xx [ 45 ] ;
pm_math_Quaternion_compose_ra ( xx + 51 , xx + 61 , xx + 65 ) ; xx [ 51 ] = -
0.02382768371459375 ; xx [ 52 ] = 3.421823533909102e-5 ; xx [ 53 ] =
0.1839029055638635 ; pm_math_Quaternion_xform_ra ( xx + 65 , xx + 51 , xx +
61 ) ; xx [ 43 ] = 2.946570268760443e-4 - xx [ 61 ] ; xx [ 45 ] = - (
0.1935621699833146 + xx [ 62 ] ) ; xx [ 51 ] = 0.3271620966035795 - xx [ 63 ]
; xx [ 61 ] = - 0.5907570559882269 ; xx [ 62 ] = - 0.3892899547148866 ; xx [
63 ] = - 0.3861224701070733 ; xx [ 64 ] = - 0.5919196482941048 ; xx [ 52 ] =
xx [ 4 ] * state [ 16 ] ; xx [ 53 ] = 1.293953311379162e-4 ; xx [ 54 ] = sin
( xx [ 52 ] ) ; xx [ 69 ] = 0.04294162101203882 ; xx [ 70 ] =
0.9990775747867163 ; xx [ 71 ] = cos ( xx [ 52 ] ) ; xx [ 72 ] = xx [ 53 ] *
xx [ 54 ] ; xx [ 73 ] = - ( xx [ 69 ] * xx [ 54 ] ) ; xx [ 74 ] = xx [ 70 ] *
xx [ 54 ] ; pm_math_Quaternion_compose_ra ( xx + 61 , xx + 71 , xx + 75 ) ;
xx [ 61 ] = 6.387658930220863e-5 ; xx [ 62 ] = 0.3515404519103449 ; xx [ 63 ]
= 0.08365575332801509 ; pm_math_Quaternion_xform_ra ( xx + 75 , xx + 61 , xx
+ 71 ) ; xx [ 52 ] = - ( 0.06175894467427824 + xx [ 71 ] ) ; xx [ 54 ] =
1.35108195633428e-4 - xx [ 72 ] ; xx [ 61 ] = - ( 0.1403140255723968 + xx [
73 ] ) ; xx [ 71 ] = - 0.06622677910401652 ; xx [ 72 ] = 0.9539399189003807 ;
xx [ 73 ] = 0.2139330882669903 ; xx [ 74 ] = 0.199612821738461 ; xx [ 62 ] =
xx [ 4 ] * state [ 18 ] ; xx [ 63 ] = 0.3925116432615775 ; xx [ 64 ] = sin (
xx [ 62 ] ) ; xx [ 79 ] = 2.216869444640626e-3 ; xx [ 80 ] =
0.9197443641544979 ; xx [ 81 ] = cos ( xx [ 62 ] ) ; xx [ 82 ] = - ( xx [ 63
] * xx [ 64 ] ) ; xx [ 83 ] = xx [ 79 ] * xx [ 64 ] ; xx [ 84 ] = xx [ 80 ] *
xx [ 64 ] ; pm_math_Quaternion_compose_ra ( xx + 71 , xx + 81 , xx + 85 ) ;
xx [ 71 ] = - 0.1134272676054903 ; xx [ 72 ] = 3.826993029653475e-5 ; xx [ 73
] = 0.04109704867211692 ; pm_math_Quaternion_xform_ra ( xx + 85 , xx + 71 ,
xx + 81 ) ; xx [ 62 ] = - ( 8.809224580636627e-5 + xx [ 81 ] ) ; xx [ 64 ] =
- ( 0.4599502421099514 + xx [ 82 ] ) ; xx [ 71 ] = 0.07299421268079627 - xx [
83 ] ; xx [ 81 ] = 9.789968004908292e-4 ; xx [ 82 ] = 0.7494484480579273 ; xx
[ 83 ] = - 6.342871115585375e-4 ; xx [ 84 ] = - 0.6620616760912004 ; xx [ 72
] = xx [ 4 ] * state [ 20 ] ; xx [ 73 ] = 0.2760653533109761 ; xx [ 74 ] =
sin ( xx [ 72 ] ) ; xx [ 89 ] = 9.638253277342509e-5 ; xx [ 90 ] =
0.9611388616696827 ; xx [ 91 ] = cos ( xx [ 72 ] ) ; xx [ 92 ] = xx [ 73 ] *
xx [ 74 ] ; xx [ 93 ] = - ( xx [ 89 ] * xx [ 74 ] ) ; xx [ 94 ] = xx [ 90 ] *
xx [ 74 ] ; pm_math_Quaternion_compose_ra ( xx + 81 , xx + 91 , xx + 95 ) ;
xx [ 81 ] = - 0.03258458927695737 ; xx [ 82 ] = - 2.085412120766961e-5 ; xx [
83 ] = 0.286766763821267 ; pm_math_Quaternion_xform_ra ( xx + 95 , xx + 81 ,
xx + 91 ) ; xx [ 72 ] = 0.1619100124162477 - xx [ 91 ] ; xx [ 74 ] =
5.196394139830862e-5 - xx [ 92 ] ; xx [ 81 ] = 0.02814027697500968 - xx [ 93
] ; xx [ 91 ] = - 0.3054946078288459 ; xx [ 92 ] = - 0.5320313095226306 ; xx
[ 93 ] = - 0.04142366843456229 ; xx [ 94 ] = 0.7886062452000734 ; xx [ 82 ] =
xx [ 4 ] * state [ 22 ] ; xx [ 83 ] = 9.161469241983772e-4 ; xx [ 84 ] = sin
( xx [ 82 ] ) ; xx [ 99 ] = 0.433580475613033 ; xx [ 100 ] = 0.90111438332877
; xx [ 101 ] = cos ( xx [ 82 ] ) ; xx [ 102 ] = - ( xx [ 83 ] * xx [ 84 ] ) ;
xx [ 103 ] = - ( xx [ 99 ] * xx [ 84 ] ) ; xx [ 104 ] = xx [ 100 ] * xx [ 84
] ; pm_math_Quaternion_compose_ra ( xx + 91 , xx + 101 , xx + 105 ) ; xx [ 91
] = 5.433876886669093e-5 ; xx [ 92 ] = 0.09516351305204601 ; xx [ 93 ] = -
0.05049746937722007 ; pm_math_Quaternion_xform_ra ( xx + 105 , xx + 91 , xx +
101 ) ; xx [ 82 ] = - ( 0.08839742977844355 + xx [ 101 ] ) ; xx [ 84 ] =
6.82383889298345e-5 - xx [ 102 ] ; xx [ 91 ] = - ( 0.3530595820491463 + xx [
103 ] ) ; xx [ 101 ] = - 0.5982360757232992 ; xx [ 102 ] = 0.3774792463138235
; xx [ 103 ] = - 0.3769690834319327 ; xx [ 104 ] = - 0.5979275260782232 ; xx
[ 92 ] = xx [ 4 ] * state [ 24 ] ; xx [ 93 ] = 3.074892580994291e-3 ; xx [ 94
] = sin ( xx [ 92 ] ) ; xx [ 109 ] = 1.687433921535961e-4 ; xx [ 110 ] =
0.9999952582693995 ; xx [ 111 ] = cos ( xx [ 92 ] ) ; xx [ 112 ] = - ( xx [
93 ] * xx [ 94 ] ) ; xx [ 113 ] = - ( xx [ 109 ] * xx [ 94 ] ) ; xx [ 114 ] =
xx [ 110 ] * xx [ 94 ] ; pm_math_Quaternion_compose_ra ( xx + 101 , xx + 111
, xx + 115 ) ; xx [ 101 ] = 1.37482914105299e-3 ; xx [ 102 ] = -
1.083137629248106e-6 ; xx [ 103 ] = 0.1363766576540157 ;
pm_math_Quaternion_xform_ra ( xx + 115 , xx + 101 , xx + 111 ) ; xx [ 92 ] =
- ( 1.446398300596931e-5 + xx [ 111 ] ) ; xx [ 94 ] = - ( 0.1177861997136561
+ xx [ 112 ] ) ; xx [ 101 ] = - ( 0.02355406698009013 + xx [ 113 ] ) ; xx [
102 ] = 0.4113003470668337 ; xx [ 103 ] = - 0.5751095009164958 ; xx [ 104 ] =
0.5752712250837967 ; xx [ 111 ] = - 0.4112713265581123 ; xx [ 112 ] =
0.2828615154169883 + 0.9999952592507191 * state [ 26 ] ; xx [ 113 ] =
1.494812213461273e-5 - 1.633437862456066e-4 * state [ 26 ] ; xx [ 114 ] =
3.074865020693984e-3 * state [ 26 ] - 0.2312964910558012 ; xx [ 119 ] =
0.4095980497005858 ; xx [ 120 ] = - 0.5764638023696377 ; xx [ 121 ] = -
0.5764407932687463 ; xx [ 122 ] = 0.4094324536412745 ; xx [ 123 ] = - (
0.2788414501321849 + 0.9999952592507189 * state [ 28 ] ) ; xx [ 124 ] =
1.07424646342255e-4 + 1.633437862453846e-4 * state [ 28 ] ; xx [ 125 ] = - (
0.2330236599222386 + 3.07486502069354e-3 * state [ 28 ] ) ; xx [ 126 ] = -
0.999998811242088 ; xx [ 127 ] = - 8.449716268362357e-5 ; xx [ 128 ] =
1.537441228067385e-3 ; xx [ 129 ] = 8.154208065465675e-5 ; xx [ 130 ] =
2.318928784655947e-3 ; xx [ 131 ] = 5.072698978156454e-5 ; xx [ 132 ] = -
0.1706568864687283 ; xx [ 133 ] = 0.7071067811865476 ; xx [ 134 ] = xx [ 133
] * state [ 35 ] ; xx [ 135 ] = xx [ 133 ] * state [ 33 ] ; xx [ 136 ] = - (
xx [ 134 ] + xx [ 135 ] ) ; xx [ 137 ] = xx [ 133 ] * state [ 34 ] ; xx [ 138
] = xx [ 133 ] * state [ 36 ] ; xx [ 139 ] = - ( xx [ 137 ] - xx [ 138 ] ) ;
xx [ 140 ] = - ( xx [ 134 ] - xx [ 135 ] ) ; xx [ 134 ] = - ( xx [ 137 ] + xx
[ 138 ] ) ; xx [ 135 ] = 2.0 ; xx [ 137 ] = xx [ 133 ] * xx [ 133 ] * state [
32 ] ; xx [ 138 ] = xx [ 133 ] * xx [ 133 ] * state [ 30 ] ; xx [ 141 ] =
0.18288 ; xx [ 142 ] = xx [ 4 ] ; xx [ 143 ] = xx [ 4 ] ; xx [ 144 ] = - xx [
4 ] ; xx [ 145 ] = xx [ 4 ] ; xx [ 146 ] = - state [ 46 ] ; xx [ 147 ] = -
state [ 47 ] ; xx [ 148 ] = - state [ 48 ] ; xx [ 149 ] = - state [ 49 ] ;
pm_math_Quaternion_compose_ra ( xx + 142 , xx + 146 , xx + 150 ) ; xx [ 146 ]
= state [ 43 ] ; xx [ 147 ] = state [ 44 ] ; xx [ 148 ] = state [ 45 ] ;
pm_math_Quaternion_xform_ra ( xx + 142 , xx + 146 , xx + 154 ) ;
pm_math_Quaternion_compose_ra ( xx + 14 , xx + 65 , xx + 146 ) ; xx [ 157 ] =
xx [ 43 ] ; xx [ 158 ] = xx [ 45 ] ; xx [ 159 ] = xx [ 51 ] ;
pm_math_Quaternion_xform_ra ( xx + 14 , xx + 157 , xx + 160 ) ; xx [ 4 ] = xx
[ 160 ] + xx [ 0 ] ; xx [ 163 ] = xx [ 161 ] + xx [ 1 ] ; xx [ 160 ] = xx [
162 ] + xx [ 2 ] ; pm_math_Quaternion_compose_ra ( xx + 146 , xx + 75 , xx +
164 ) ; xx [ 168 ] = xx [ 52 ] ; xx [ 169 ] = xx [ 54 ] ; xx [ 170 ] = xx [
61 ] ; pm_math_Quaternion_xform_ra ( xx + 146 , xx + 168 , xx + 171 ) ; xx [
161 ] = xx [ 171 ] + xx [ 4 ] ; xx [ 162 ] = xx [ 172 ] + xx [ 163 ] ; xx [
171 ] = xx [ 173 ] + xx [ 160 ] ; pm_math_Quaternion_compose_ra ( xx + 164 ,
xx + 85 , xx + 172 ) ; xx [ 176 ] = xx [ 62 ] ; xx [ 177 ] = xx [ 64 ] ; xx [
178 ] = xx [ 71 ] ; pm_math_Quaternion_xform_ra ( xx + 164 , xx + 176 , xx +
179 ) ; xx [ 182 ] = xx [ 179 ] + xx [ 161 ] ; xx [ 183 ] = xx [ 180 ] + xx [
162 ] ; xx [ 179 ] = xx [ 181 ] + xx [ 171 ] ; pm_math_Quaternion_compose_ra
( xx + 172 , xx + 95 , xx + 184 ) ; xx [ 188 ] = xx [ 72 ] ; xx [ 189 ] = xx
[ 74 ] ; xx [ 190 ] = xx [ 81 ] ; pm_math_Quaternion_xform_ra ( xx + 172 , xx
+ 188 , xx + 191 ) ; xx [ 180 ] = xx [ 191 ] + xx [ 182 ] ; xx [ 181 ] = xx [
192 ] + xx [ 183 ] ; xx [ 191 ] = xx [ 193 ] + xx [ 179 ] ;
pm_math_Quaternion_compose_ra ( xx + 184 , xx + 105 , xx + 192 ) ; xx [ 196 ]
= xx [ 82 ] ; xx [ 197 ] = xx [ 84 ] ; xx [ 198 ] = xx [ 91 ] ;
pm_math_Quaternion_xform_ra ( xx + 184 , xx + 196 , xx + 199 ) ; xx [ 202 ] =
xx [ 199 ] + xx [ 180 ] ; xx [ 203 ] = xx [ 200 ] + xx [ 181 ] ; xx [ 199 ] =
xx [ 201 ] + xx [ 191 ] ; pm_math_Quaternion_compose_ra ( xx + 192 , xx + 115
, xx + 204 ) ; xx [ 208 ] = xx [ 92 ] ; xx [ 209 ] = xx [ 94 ] ; xx [ 210 ] =
xx [ 101 ] ; pm_math_Quaternion_xform_ra ( xx + 192 , xx + 208 , xx + 211 ) ;
xx [ 200 ] = xx [ 211 ] + xx [ 202 ] ; xx [ 201 ] = xx [ 212 ] + xx [ 203 ] ;
xx [ 211 ] = xx [ 213 ] + xx [ 199 ] ; xx [ 212 ] = xx [ 102 ] ; xx [ 213 ] =
xx [ 103 ] ; xx [ 214 ] = xx [ 104 ] ; xx [ 215 ] = xx [ 111 ] ;
pm_math_Quaternion_compose_ra ( xx + 204 , xx + 212 , xx + 216 ) ;
pm_math_Quaternion_xform_ra ( xx + 204 , xx + 112 , xx + 220 ) ;
pm_math_Quaternion_compose_ra ( xx + 204 , xx + 119 , xx + 223 ) ;
pm_math_Quaternion_xform_ra ( xx + 204 , xx + 123 , xx + 227 ) ; xx [ 230 ] =
xx [ 6 ] * state [ 5 ] ; xx [ 6 ] = - ( xx [ 8 ] * state [ 5 ] ) ; xx [ 8 ] =
xx [ 9 ] * state [ 5 ] ; xx [ 231 ] = 0.9999980776513503 * state [ 3 ] -
1.773550754278646e-3 * state [ 4 ] ; xx [ 232 ] = 1.798264714034257e-3 *
state [ 3 ] + 0.9995317928203986 * state [ 4 ] ; xx [ 233 ] =
0.03054586156849783 * state [ 4 ] - 7.816249882176138e-4 * state [ 3 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 10 , xx + 231 , xx + 234 ) ; xx [ 9
] = 0.01972079655584117 * state [ 5 ] + xx [ 234 ] ; xx [ 10 ] =
3.444571559463499e-4 * state [ 5 ] + xx [ 235 ] ; xx [ 11 ] = xx [ 236 ] -
5.971850307766764e-6 * state [ 5 ] ; xx [ 231 ] = xx [ 230 ] ; xx [ 232 ] =
xx [ 6 ] ; xx [ 233 ] = xx [ 8 ] ; pm_math_Quaternion_inverseXform_ra ( xx +
28 , xx + 231 , xx + 234 ) ; xx [ 237 ] = xx [ 3 ] ; xx [ 238 ] = xx [ 7 ] ;
xx [ 239 ] = xx [ 18 ] ; pm_math_Vector3_cross_ra ( xx + 231 , xx + 237 , xx
+ 240 ) ; xx [ 237 ] = xx [ 240 ] + xx [ 9 ] ; xx [ 238 ] = xx [ 241 ] + xx [
10 ] ; xx [ 239 ] = xx [ 242 ] + xx [ 11 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 28 , xx + 237 , xx + 240 ) ;
pm_math_Quaternion_inverseXform_ra ( xx + 37 , xx + 231 , xx + 237 ) ; xx [
243 ] = xx [ 19 ] ; xx [ 244 ] = xx [ 21 ] ; xx [ 245 ] = xx [ 24 ] ;
pm_math_Vector3_cross_ra ( xx + 231 , xx + 243 , xx + 246 ) ; xx [ 243 ] = xx
[ 246 ] + xx [ 9 ] ; xx [ 244 ] = xx [ 247 ] + xx [ 10 ] ; xx [ 245 ] = xx [
248 ] + xx [ 11 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 37 , xx + 243 ,
xx + 246 ) ; pm_math_Quaternion_inverseXform_ra ( xx + 46 , xx + 231 , xx +
243 ) ; xx [ 249 ] = xx [ 25 ] ; xx [ 250 ] = xx [ 27 ] ; xx [ 251 ] = xx [
33 ] ; pm_math_Vector3_cross_ra ( xx + 231 , xx + 249 , xx + 252 ) ; xx [ 249
] = xx [ 252 ] + xx [ 9 ] ; xx [ 250 ] = xx [ 253 ] + xx [ 10 ] ; xx [ 251 ]
= xx [ 254 ] + xx [ 11 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 46 , xx
+ 249 , xx + 252 ) ; pm_math_Quaternion_inverseXform_ra ( xx + 55 , xx + 231
, xx + 249 ) ; xx [ 255 ] = xx [ 34 ] ; xx [ 256 ] = xx [ 36 ] ; xx [ 257 ] =
xx [ 42 ] ; pm_math_Vector3_cross_ra ( xx + 231 , xx + 255 , xx + 258 ) ; xx
[ 255 ] = xx [ 258 ] + xx [ 9 ] ; xx [ 256 ] = xx [ 259 ] + xx [ 10 ] ; xx [
257 ] = xx [ 260 ] + xx [ 11 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 55
, xx + 255 , xx + 258 ) ; pm_math_Quaternion_inverseXform_ra ( xx + 65 , xx +
231 , xx + 255 ) ; xx [ 12 ] = xx [ 255 ] - xx [ 44 ] * state [ 15 ] ; xx [
13 ] = xx [ 256 ] + xx [ 59 ] * state [ 15 ] ; xx [ 44 ] = xx [ 257 ] + xx [
60 ] * state [ 15 ] ; pm_math_Vector3_cross_ra ( xx + 231 , xx + 157 , xx +
255 ) ; xx [ 157 ] = xx [ 255 ] + xx [ 9 ] ; xx [ 158 ] = xx [ 256 ] + xx [
10 ] ; xx [ 159 ] = xx [ 257 ] + xx [ 11 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 65 , xx + 157 , xx + 231 ) ; xx [
59 ] = xx [ 231 ] - 1.499893927705008e-4 * state [ 15 ] ; xx [ 60 ] = xx [
232 ] - 0.04377744336984951 * state [ 15 ] ; xx [ 157 ] = xx [ 233 ] -
1.128809218832778e-5 * state [ 15 ] ; xx [ 231 ] = xx [ 12 ] ; xx [ 232 ] =
xx [ 13 ] ; xx [ 233 ] = xx [ 44 ] ; pm_math_Quaternion_inverseXform_ra ( xx
+ 75 , xx + 231 , xx + 255 ) ; xx [ 158 ] = xx [ 255 ] + xx [ 53 ] * state [
17 ] ; xx [ 53 ] = xx [ 256 ] - xx [ 69 ] * state [ 17 ] ; xx [ 69 ] = xx [
257 ] + xx [ 70 ] * state [ 17 ] ; pm_math_Vector3_cross_ra ( xx + 231 , xx +
168 , xx + 255 ) ; xx [ 168 ] = xx [ 255 ] + xx [ 59 ] ; xx [ 169 ] = xx [
256 ] + xx [ 60 ] ; xx [ 170 ] = xx [ 257 ] + xx [ 157 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 75 , xx + 168 , xx + 231 ) ; xx [
70 ] = xx [ 231 ] + 0.3548084957889019 * state [ 17 ] ; xx [ 159 ] = xx [ 232
] - 5.299300402222736e-5 * state [ 17 ] ; xx [ 168 ] = xx [ 233 ] -
4.823065747266888e-5 * state [ 17 ] ; xx [ 231 ] = xx [ 158 ] ; xx [ 232 ] =
xx [ 53 ] ; xx [ 233 ] = xx [ 69 ] ; pm_math_Quaternion_inverseXform_ra ( xx
+ 85 , xx + 231 , xx + 255 ) ; xx [ 169 ] = xx [ 255 ] - xx [ 63 ] * state [
19 ] ; xx [ 63 ] = xx [ 256 ] + xx [ 79 ] * state [ 19 ] ; xx [ 79 ] = xx [
257 ] + xx [ 80 ] * state [ 19 ] ; pm_math_Vector3_cross_ra ( xx + 231 , xx +
176 , xx + 255 ) ; xx [ 176 ] = xx [ 255 ] + xx [ 70 ] ; xx [ 177 ] = xx [
256 ] + xx [ 159 ] ; xx [ 178 ] = xx [ 257 ] + xx [ 168 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 85 , xx + 176 , xx + 231 ) ; xx [
80 ] = xx [ 231 ] - 5.590823875930131e-5 * state [ 19 ] ; xx [ 170 ] = xx [
232 ] + 0.08819302001410009 * state [ 19 ] ; xx [ 176 ] = xx [ 233 ] -
2.364320505154881e-4 * state [ 19 ] ; xx [ 231 ] = xx [ 169 ] ; xx [ 232 ] =
xx [ 63 ] ; xx [ 233 ] = xx [ 79 ] ; pm_math_Quaternion_inverseXform_ra ( xx
+ 95 , xx + 231 , xx + 255 ) ; xx [ 177 ] = xx [ 255 ] + xx [ 73 ] * state [
21 ] ; xx [ 73 ] = xx [ 256 ] - xx [ 89 ] * state [ 21 ] ; xx [ 89 ] = xx [
257 ] + xx [ 90 ] * state [ 21 ] ; pm_math_Vector3_cross_ra ( xx + 231 , xx +
188 , xx + 255 ) ; xx [ 188 ] = xx [ 255 ] + xx [ 80 ] ; xx [ 189 ] = xx [
256 ] + xx [ 170 ] ; xx [ 190 ] = xx [ 257 ] + xx [ 176 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 95 , xx + 188 , xx + 231 ) ; xx [
90 ] = xx [ 231 ] + 7.595600693671167e-6 * state [ 21 ] ; xx [ 178 ] = xx [
232 ] + 0.1104846830177923 * state [ 21 ] ; xx [ 188 ] = xx [ 233 ] +
8.897685583080171e-6 * state [ 21 ] ; xx [ 231 ] = xx [ 177 ] ; xx [ 232 ] =
xx [ 73 ] ; xx [ 233 ] = xx [ 89 ] ; pm_math_Quaternion_inverseXform_ra ( xx
+ 105 , xx + 231 , xx + 255 ) ; xx [ 189 ] = xx [ 255 ] - xx [ 83 ] * state [
23 ] ; xx [ 83 ] = xx [ 256 ] - xx [ 99 ] * state [ 23 ] ; xx [ 99 ] = xx [
257 ] + xx [ 100 ] * state [ 23 ] ; pm_math_Vector3_cross_ra ( xx + 231 , xx
+ 196 , xx + 255 ) ; xx [ 196 ] = xx [ 255 ] + xx [ 90 ] ; xx [ 197 ] = xx [
256 ] + xx [ 178 ] ; xx [ 198 ] = xx [ 257 ] + xx [ 188 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 105 , xx + 196 , xx + 231 ) ; xx [
100 ] = xx [ 231 ] + 0.06385849358946416 * state [ 23 ] ; xx [ 190 ] = xx [
232 ] - 2.702344948410855e-6 * state [ 23 ] ; xx [ 196 ] = xx [ 233 ] +
6.362353052909755e-5 * state [ 23 ] ; xx [ 231 ] = xx [ 189 ] ; xx [ 232 ] =
xx [ 83 ] ; xx [ 233 ] = xx [ 99 ] ; pm_math_Quaternion_inverseXform_ra ( xx
+ 115 , xx + 231 , xx + 255 ) ; xx [ 197 ] = xx [ 255 ] - xx [ 93 ] * state [
25 ] ; xx [ 93 ] = xx [ 256 ] - xx [ 109 ] * state [ 25 ] ; xx [ 109 ] = xx [
257 ] + xx [ 110 ] * state [ 25 ] ; pm_math_Vector3_cross_ra ( xx + 231 , xx
+ 208 , xx + 255 ) ; xx [ 208 ] = xx [ 255 ] + xx [ 100 ] ; xx [ 209 ] = xx [
256 ] + xx [ 190 ] ; xx [ 210 ] = xx [ 257 ] + xx [ 196 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 115 , xx + 208 , xx + 231 ) ; xx [
110 ] = xx [ 231 ] + 2.192952732980704e-5 * state [ 25 ] ; xx [ 198 ] = xx [
232 ] - 1.794166194824713e-3 * state [ 25 ] ; xx [ 208 ] = xx [ 233 ] -
2.353238647532672e-7 * state [ 25 ] ; xx [ 231 ] = xx [ 197 ] ; xx [ 232 ] =
xx [ 93 ] ; xx [ 233 ] = xx [ 109 ] ; pm_math_Quaternion_inverseXform_ra ( xx
+ 212 , xx + 231 , xx + 255 ) ; pm_math_Vector3_cross_ra ( xx + 231 , xx +
112 , xx + 261 ) ; xx [ 264 ] = xx [ 261 ] + xx [ 110 ] ; xx [ 265 ] = xx [
262 ] + xx [ 198 ] ; xx [ 266 ] = xx [ 263 ] + xx [ 208 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 212 , xx + 264 , xx + 261 ) ; xx [
209 ] = 6.599324214527274e-7 ; xx [ 210 ] = 0.3262839711907557 ; xx [ 212 ] =
0.9452717969682342 ; pm_math_Quaternion_inverseXform_ra ( xx + 119 , xx + 231
, xx + 213 ) ; pm_math_Vector3_cross_ra ( xx + 231 , xx + 123 , xx + 264 ) ;
xx [ 267 ] = xx [ 264 ] + xx [ 110 ] ; xx [ 268 ] = xx [ 265 ] + xx [ 198 ] ;
xx [ 269 ] = xx [ 266 ] + xx [ 208 ] ; pm_math_Quaternion_inverseXform_ra (
xx + 119 , xx + 267 , xx + 264 ) ; pm_math_Quaternion_inverseXform_ra ( xx +
126 , xx + 231 , xx + 267 ) ; pm_math_Vector3_cross_ra ( xx + 231 , xx + 130
, xx + 270 ) ; xx [ 231 ] = xx [ 270 ] + xx [ 110 ] ; xx [ 232 ] = xx [ 271 ]
+ xx [ 198 ] ; xx [ 233 ] = xx [ 272 ] + xx [ 208 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 126 , xx + 231 , xx + 270 ) ; xx [
273 ] = xx [ 136 ] ; xx [ 274 ] = xx [ 139 ] ; xx [ 275 ] = xx [ 140 ] ; xx [
276 ] = xx [ 134 ] ; xx [ 231 ] = xx [ 133 ] * xx [ 133 ] * state [ 39 ] ; xx
[ 232 ] = xx [ 133 ] * xx [ 133 ] * state [ 37 ] ; xx [ 277 ] = state [ 37 ]
- xx [ 135 ] * ( xx [ 231 ] + xx [ 232 ] ) ; xx [ 278 ] = state [ 38 ] ; xx [
279 ] = state [ 39 ] - ( xx [ 231 ] - xx [ 232 ] ) * xx [ 135 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 273 , xx + 277 , xx + 231 ) ; xx [
273 ] = state [ 50 ] ; xx [ 274 ] = state [ 51 ] ; xx [ 275 ] = state [ 52 ]
; pm_math_Quaternion_xform_ra ( xx + 142 , xx + 273 , xx + 276 ) ;
pm_math_Quaternion_inverseXform_ra ( xx + 150 , xx + 276 , xx + 142 ) ;
motionData [ 0 ] = xx [ 14 ] ; motionData [ 1 ] = xx [ 15 ] ; motionData [ 2
] = xx [ 16 ] ; motionData [ 3 ] = xx [ 17 ] ; motionData [ 4 ] = xx [ 0 ] ;
motionData [ 5 ] = xx [ 1 ] ; motionData [ 6 ] = xx [ 2 ] ; motionData [ 7 ]
= xx [ 28 ] ; motionData [ 8 ] = xx [ 29 ] ; motionData [ 9 ] = xx [ 30 ] ;
motionData [ 10 ] = xx [ 31 ] ; motionData [ 11 ] = xx [ 3 ] ; motionData [
12 ] = xx [ 7 ] ; motionData [ 13 ] = xx [ 18 ] ; motionData [ 14 ] = xx [ 37
] ; motionData [ 15 ] = xx [ 38 ] ; motionData [ 16 ] = xx [ 39 ] ;
motionData [ 17 ] = xx [ 40 ] ; motionData [ 18 ] = xx [ 19 ] ; motionData [
19 ] = xx [ 21 ] ; motionData [ 20 ] = xx [ 24 ] ; motionData [ 21 ] = xx [
46 ] ; motionData [ 22 ] = xx [ 47 ] ; motionData [ 23 ] = xx [ 48 ] ;
motionData [ 24 ] = xx [ 49 ] ; motionData [ 25 ] = xx [ 25 ] ; motionData [
26 ] = xx [ 27 ] ; motionData [ 27 ] = xx [ 33 ] ; motionData [ 28 ] = xx [
55 ] ; motionData [ 29 ] = xx [ 56 ] ; motionData [ 30 ] = xx [ 57 ] ;
motionData [ 31 ] = xx [ 58 ] ; motionData [ 32 ] = xx [ 34 ] ; motionData [
33 ] = xx [ 36 ] ; motionData [ 34 ] = xx [ 42 ] ; motionData [ 35 ] = xx [
65 ] ; motionData [ 36 ] = xx [ 66 ] ; motionData [ 37 ] = xx [ 67 ] ;
motionData [ 38 ] = xx [ 68 ] ; motionData [ 39 ] = xx [ 43 ] ; motionData [
40 ] = xx [ 45 ] ; motionData [ 41 ] = xx [ 51 ] ; motionData [ 42 ] = xx [
75 ] ; motionData [ 43 ] = xx [ 76 ] ; motionData [ 44 ] = xx [ 77 ] ;
motionData [ 45 ] = xx [ 78 ] ; motionData [ 46 ] = xx [ 52 ] ; motionData [
47 ] = xx [ 54 ] ; motionData [ 48 ] = xx [ 61 ] ; motionData [ 49 ] = xx [
85 ] ; motionData [ 50 ] = xx [ 86 ] ; motionData [ 51 ] = xx [ 87 ] ;
motionData [ 52 ] = xx [ 88 ] ; motionData [ 53 ] = xx [ 62 ] ; motionData [
54 ] = xx [ 64 ] ; motionData [ 55 ] = xx [ 71 ] ; motionData [ 56 ] = xx [
95 ] ; motionData [ 57 ] = xx [ 96 ] ; motionData [ 58 ] = xx [ 97 ] ;
motionData [ 59 ] = xx [ 98 ] ; motionData [ 60 ] = xx [ 72 ] ; motionData [
61 ] = xx [ 74 ] ; motionData [ 62 ] = xx [ 81 ] ; motionData [ 63 ] = xx [
105 ] ; motionData [ 64 ] = xx [ 106 ] ; motionData [ 65 ] = xx [ 107 ] ;
motionData [ 66 ] = xx [ 108 ] ; motionData [ 67 ] = xx [ 82 ] ; motionData [
68 ] = xx [ 84 ] ; motionData [ 69 ] = xx [ 91 ] ; motionData [ 70 ] = xx [
115 ] ; motionData [ 71 ] = xx [ 116 ] ; motionData [ 72 ] = xx [ 117 ] ;
motionData [ 73 ] = xx [ 118 ] ; motionData [ 74 ] = xx [ 92 ] ; motionData [
75 ] = xx [ 94 ] ; motionData [ 76 ] = xx [ 101 ] ; motionData [ 77 ] = xx [
102 ] ; motionData [ 78 ] = xx [ 103 ] ; motionData [ 79 ] = xx [ 104 ] ;
motionData [ 80 ] = xx [ 111 ] ; motionData [ 81 ] = xx [ 112 ] ; motionData
[ 82 ] = xx [ 113 ] ; motionData [ 83 ] = xx [ 114 ] ; motionData [ 84 ] = xx
[ 119 ] ; motionData [ 85 ] = xx [ 120 ] ; motionData [ 86 ] = xx [ 121 ] ;
motionData [ 87 ] = xx [ 122 ] ; motionData [ 88 ] = xx [ 123 ] ; motionData
[ 89 ] = xx [ 124 ] ; motionData [ 90 ] = xx [ 125 ] ; motionData [ 91 ] = xx
[ 126 ] ; motionData [ 92 ] = xx [ 127 ] ; motionData [ 93 ] = xx [ 128 ] ;
motionData [ 94 ] = xx [ 129 ] ; motionData [ 95 ] = xx [ 130 ] ; motionData
[ 96 ] = xx [ 131 ] ; motionData [ 97 ] = xx [ 132 ] ; motionData [ 98 ] = xx
[ 136 ] ; motionData [ 99 ] = xx [ 139 ] ; motionData [ 100 ] = xx [ 140 ] ;
motionData [ 101 ] = xx [ 134 ] ; motionData [ 102 ] = state [ 30 ] - xx [
135 ] * ( xx [ 137 ] + xx [ 138 ] ) + 3.0 ; motionData [ 103 ] = state [ 31 ]
+ 7.0 ; motionData [ 104 ] = state [ 32 ] - ( xx [ 137 ] - xx [ 138 ] ) * xx
[ 135 ] + xx [ 141 ] ; motionData [ 105 ] = xx [ 150 ] ; motionData [ 106 ] =
xx [ 151 ] ; motionData [ 107 ] = xx [ 152 ] ; motionData [ 108 ] = xx [ 153
] ; motionData [ 109 ] = xx [ 154 ] + 15.0 ; motionData [ 110 ] = xx [ 155 ]
+ 13.0 ; motionData [ 111 ] = xx [ 156 ] + xx [ 141 ] ; motionData [ 112 ] =
xx [ 146 ] ; motionData [ 113 ] = xx [ 147 ] ; motionData [ 114 ] = xx [ 148
] ; motionData [ 115 ] = xx [ 149 ] ; motionData [ 116 ] = xx [ 4 ] ;
motionData [ 117 ] = xx [ 163 ] ; motionData [ 118 ] = xx [ 160 ] ;
motionData [ 119 ] = xx [ 164 ] ; motionData [ 120 ] = xx [ 165 ] ;
motionData [ 121 ] = xx [ 166 ] ; motionData [ 122 ] = xx [ 167 ] ;
motionData [ 123 ] = xx [ 161 ] ; motionData [ 124 ] = xx [ 162 ] ;
motionData [ 125 ] = xx [ 171 ] ; motionData [ 126 ] = xx [ 172 ] ;
motionData [ 127 ] = xx [ 173 ] ; motionData [ 128 ] = xx [ 174 ] ;
motionData [ 129 ] = xx [ 175 ] ; motionData [ 130 ] = xx [ 182 ] ;
motionData [ 131 ] = xx [ 183 ] ; motionData [ 132 ] = xx [ 179 ] ;
motionData [ 133 ] = xx [ 184 ] ; motionData [ 134 ] = xx [ 185 ] ;
motionData [ 135 ] = xx [ 186 ] ; motionData [ 136 ] = xx [ 187 ] ;
motionData [ 137 ] = xx [ 180 ] ; motionData [ 138 ] = xx [ 181 ] ;
motionData [ 139 ] = xx [ 191 ] ; motionData [ 140 ] = xx [ 192 ] ;
motionData [ 141 ] = xx [ 193 ] ; motionData [ 142 ] = xx [ 194 ] ;
motionData [ 143 ] = xx [ 195 ] ; motionData [ 144 ] = xx [ 202 ] ;
motionData [ 145 ] = xx [ 203 ] ; motionData [ 146 ] = xx [ 199 ] ;
motionData [ 147 ] = xx [ 204 ] ; motionData [ 148 ] = xx [ 205 ] ;
motionData [ 149 ] = xx [ 206 ] ; motionData [ 150 ] = xx [ 207 ] ;
motionData [ 151 ] = xx [ 200 ] ; motionData [ 152 ] = xx [ 201 ] ;
motionData [ 153 ] = xx [ 211 ] ; motionData [ 154 ] = xx [ 216 ] ;
motionData [ 155 ] = xx [ 217 ] ; motionData [ 156 ] = xx [ 218 ] ;
motionData [ 157 ] = xx [ 219 ] ; motionData [ 158 ] = xx [ 220 ] + xx [ 200
] ; motionData [ 159 ] = xx [ 221 ] + xx [ 201 ] ; motionData [ 160 ] = xx [
222 ] + xx [ 211 ] ; motionData [ 161 ] = xx [ 223 ] ; motionData [ 162 ] =
xx [ 224 ] ; motionData [ 163 ] = xx [ 225 ] ; motionData [ 164 ] = xx [ 226
] ; motionData [ 165 ] = xx [ 227 ] + xx [ 200 ] ; motionData [ 166 ] = xx [
228 ] + xx [ 201 ] ; motionData [ 167 ] = xx [ 229 ] + xx [ 211 ] ;
motionData [ 168 ] = xx [ 230 ] ; motionData [ 169 ] = xx [ 6 ] ; motionData
[ 170 ] = xx [ 8 ] ; motionData [ 171 ] = xx [ 9 ] ; motionData [ 172 ] = xx
[ 10 ] ; motionData [ 173 ] = xx [ 11 ] ; motionData [ 174 ] = xx [ 234 ] +
xx [ 5 ] * state [ 7 ] ; motionData [ 175 ] = xx [ 235 ] + xx [ 22 ] * state
[ 7 ] ; motionData [ 176 ] = xx [ 236 ] + xx [ 23 ] * state [ 7 ] ;
motionData [ 177 ] = xx [ 240 ] + 1.306129808743786e-7 * state [ 7 ] ;
motionData [ 178 ] = xx [ 241 ] + 2.074364312748564e-5 * state [ 7 ] ;
motionData [ 179 ] = xx [ 242 ] - 5.693893080999888e-12 * state [ 7 ] ;
motionData [ 180 ] = xx [ 237 ] + xx [ 20 ] * state [ 9 ] ; motionData [ 181
] = xx [ 238 ] + xx [ 32 ] * state [ 9 ] ; motionData [ 182 ] = xx [ 239 ] +
xx [ 23 ] * state [ 9 ] ; motionData [ 183 ] = xx [ 246 ] +
1.306129834217784e-7 * state [ 9 ] ; motionData [ 184 ] = xx [ 247 ] +
2.07436431275407e-5 * state [ 9 ] ; motionData [ 185 ] = xx [ 248 ] -
5.693893003682017e-12 * state [ 9 ] ; motionData [ 186 ] = xx [ 243 ] + xx [
26 ] * state [ 11 ] ; motionData [ 187 ] = xx [ 244 ] + xx [ 41 ] * state [
11 ] ; motionData [ 188 ] = xx [ 245 ] + xx [ 23 ] * state [ 11 ] ;
motionData [ 189 ] = xx [ 252 ] + 1.306129813163315e-7 * state [ 11 ] ;
motionData [ 190 ] = xx [ 253 ] + 2.074364312793371e-5 * state [ 11 ] ;
motionData [ 191 ] = xx [ 254 ] - 5.693893001079705e-12 * state [ 11 ] ;
motionData [ 192 ] = xx [ 249 ] + xx [ 35 ] * state [ 13 ] ; motionData [ 193
] = xx [ 250 ] + xx [ 50 ] * state [ 13 ] ; motionData [ 194 ] = xx [ 251 ] +
xx [ 23 ] * state [ 13 ] ; motionData [ 195 ] = xx [ 258 ] +
1.306129807848278e-7 * state [ 13 ] ; motionData [ 196 ] = xx [ 259 ] +
2.074364312782556e-5 * state [ 13 ] ; motionData [ 197 ] = xx [ 260 ] -
5.693892998687611e-12 * state [ 13 ] ; motionData [ 198 ] = xx [ 12 ] ;
motionData [ 199 ] = xx [ 13 ] ; motionData [ 200 ] = xx [ 44 ] ; motionData
[ 201 ] = xx [ 59 ] ; motionData [ 202 ] = xx [ 60 ] ; motionData [ 203 ] =
xx [ 157 ] ; motionData [ 204 ] = xx [ 158 ] ; motionData [ 205 ] = xx [ 53 ]
; motionData [ 206 ] = xx [ 69 ] ; motionData [ 207 ] = xx [ 70 ] ;
motionData [ 208 ] = xx [ 159 ] ; motionData [ 209 ] = xx [ 168 ] ;
motionData [ 210 ] = xx [ 169 ] ; motionData [ 211 ] = xx [ 63 ] ; motionData
[ 212 ] = xx [ 79 ] ; motionData [ 213 ] = xx [ 80 ] ; motionData [ 214 ] =
xx [ 170 ] ; motionData [ 215 ] = xx [ 176 ] ; motionData [ 216 ] = xx [ 177
] ; motionData [ 217 ] = xx [ 73 ] ; motionData [ 218 ] = xx [ 89 ] ;
motionData [ 219 ] = xx [ 90 ] ; motionData [ 220 ] = xx [ 178 ] ; motionData
[ 221 ] = xx [ 188 ] ; motionData [ 222 ] = xx [ 189 ] ; motionData [ 223 ] =
xx [ 83 ] ; motionData [ 224 ] = xx [ 99 ] ; motionData [ 225 ] = xx [ 100 ]
; motionData [ 226 ] = xx [ 190 ] ; motionData [ 227 ] = xx [ 196 ] ;
motionData [ 228 ] = xx [ 197 ] ; motionData [ 229 ] = xx [ 93 ] ; motionData
[ 230 ] = xx [ 109 ] ; motionData [ 231 ] = xx [ 110 ] ; motionData [ 232 ] =
xx [ 198 ] ; motionData [ 233 ] = xx [ 208 ] ; motionData [ 234 ] = xx [ 255
] ; motionData [ 235 ] = xx [ 256 ] ; motionData [ 236 ] = xx [ 257 ] ;
motionData [ 237 ] = xx [ 261 ] + xx [ 209 ] * state [ 27 ] ; motionData [
238 ] = xx [ 262 ] - xx [ 210 ] * state [ 27 ] ; motionData [ 239 ] = xx [
263 ] + xx [ 212 ] * state [ 27 ] ; motionData [ 240 ] = xx [ 213 ] ;
motionData [ 241 ] = xx [ 214 ] ; motionData [ 242 ] = xx [ 215 ] ;
motionData [ 243 ] = xx [ 264 ] + xx [ 209 ] * state [ 29 ] ; motionData [
244 ] = xx [ 265 ] - xx [ 210 ] * state [ 29 ] ; motionData [ 245 ] = xx [
266 ] + xx [ 212 ] * state [ 29 ] ; motionData [ 246 ] = xx [ 267 ] ;
motionData [ 247 ] = xx [ 268 ] ; motionData [ 248 ] = xx [ 269 ] ;
motionData [ 249 ] = xx [ 270 ] ; motionData [ 250 ] = xx [ 271 ] ;
motionData [ 251 ] = xx [ 272 ] ; motionData [ 252 ] = state [ 40 ] ;
motionData [ 253 ] = state [ 41 ] ; motionData [ 254 ] = state [ 42 ] ;
motionData [ 255 ] = xx [ 231 ] ; motionData [ 256 ] = xx [ 232 ] ;
motionData [ 257 ] = xx [ 233 ] ; motionData [ 258 ] = state [ 53 ] ;
motionData [ 259 ] = state [ 54 ] ; motionData [ 260 ] = state [ 55 ] ;
motionData [ 261 ] = xx [ 142 ] ; motionData [ 262 ] = xx [ 143 ] ;
motionData [ 263 ] = xx [ 144 ] ; } size_t
Top_Level_Simulation_66cd9431_1_computeAssemblyError ( const void * mech ,
const RuntimeDerivedValuesBundle * rtdv , size_t constraintIdx , const int *
modeVector , const double * motionData , double * error ) { ( void ) mech ; (
void ) rtdv ; ( void ) modeVector ; ( void ) motionData ; ( void ) error ;
switch ( constraintIdx ) { } return 0 ; } size_t
Top_Level_Simulation_66cd9431_1_computeAssemblyJacobian ( const void * mech ,
const RuntimeDerivedValuesBundle * rtdv , size_t constraintIdx , boolean_T
forVelocitySatisfaction , const double * state , const int * modeVector ,
const double * motionData , double * J ) { ( void ) mech ; ( void ) rtdv ; (
void ) state ; ( void ) modeVector ; ( void ) forVelocitySatisfaction ; (
void ) motionData ; ( void ) J ; switch ( constraintIdx ) { } return 0 ; }
size_t Top_Level_Simulation_66cd9431_1_computeFullAssemblyJacobian ( const
void * mech , const RuntimeDerivedValuesBundle * rtdv , const double * state
, const int * modeVector , const double * motionData , double * J ) { const
double * rtdvd = rtdv -> mDoubles . mValues ; const int * rtdvi = rtdv ->
mInts . mValues ; ( void ) mech ; ( void ) rtdvd ; ( void ) rtdvi ; ( void )
state ; ( void ) modeVector ; ( void ) motionData ; ( void ) J ; return 0 ; }
boolean_T Top_Level_Simulation_66cd9431_1_isInKinematicSingularity ( const
void * mech , const RuntimeDerivedValuesBundle * rtdv , size_t constraintIdx
, const int * modeVector , const double * motionData ) { ( void ) mech ; (
void ) rtdv ; ( void ) modeVector ; ( void ) motionData ; switch (
constraintIdx ) { } return 0 ; } void
Top_Level_Simulation_66cd9431_1_convertStateVector ( const void * asmMech ,
const RuntimeDerivedValuesBundle * rtdv , const void * simMech , const double
* asmState , const int * asmModeVector , const int * simModeVector , double *
simState ) { const double * rtdvd = rtdv -> mDoubles . mValues ; const int *
rtdvi = rtdv -> mInts . mValues ; ( void ) asmMech ; ( void ) rtdvd ; ( void
) rtdvi ; ( void ) simMech ; ( void ) asmModeVector ; ( void ) simModeVector
; simState [ 0 ] = asmState [ 0 ] ; simState [ 1 ] = asmState [ 1 ] ;
simState [ 2 ] = asmState [ 2 ] ; simState [ 3 ] = asmState [ 3 ] ; simState
[ 4 ] = asmState [ 4 ] ; simState [ 5 ] = asmState [ 5 ] ; simState [ 6 ] =
asmState [ 6 ] ; simState [ 7 ] = asmState [ 7 ] ; simState [ 8 ] = asmState
[ 8 ] ; simState [ 9 ] = asmState [ 9 ] ; simState [ 10 ] = asmState [ 10 ] ;
simState [ 11 ] = asmState [ 11 ] ; simState [ 12 ] = asmState [ 12 ] ;
simState [ 13 ] = asmState [ 13 ] ; simState [ 14 ] = asmState [ 14 ] ;
simState [ 15 ] = asmState [ 15 ] ; simState [ 16 ] = asmState [ 16 ] ;
simState [ 17 ] = asmState [ 17 ] ; simState [ 18 ] = asmState [ 18 ] ;
simState [ 19 ] = asmState [ 19 ] ; simState [ 20 ] = asmState [ 20 ] ;
simState [ 21 ] = asmState [ 21 ] ; simState [ 22 ] = asmState [ 22 ] ;
simState [ 23 ] = asmState [ 23 ] ; simState [ 24 ] = asmState [ 24 ] ;
simState [ 25 ] = asmState [ 25 ] ; simState [ 26 ] = asmState [ 26 ] ;
simState [ 27 ] = asmState [ 27 ] ; simState [ 28 ] = asmState [ 28 ] ;
simState [ 29 ] = asmState [ 29 ] ; simState [ 30 ] = asmState [ 30 ] ;
simState [ 31 ] = asmState [ 31 ] ; simState [ 32 ] = asmState [ 32 ] ;
simState [ 33 ] = asmState [ 33 ] ; simState [ 34 ] = asmState [ 34 ] ;
simState [ 35 ] = asmState [ 35 ] ; simState [ 36 ] = asmState [ 36 ] ;
simState [ 37 ] = asmState [ 37 ] ; simState [ 38 ] = asmState [ 38 ] ;
simState [ 39 ] = asmState [ 39 ] ; simState [ 40 ] = asmState [ 40 ] ;
simState [ 41 ] = asmState [ 41 ] ; simState [ 42 ] = asmState [ 42 ] ;
simState [ 43 ] = asmState [ 43 ] ; simState [ 44 ] = asmState [ 44 ] ;
simState [ 45 ] = asmState [ 45 ] ; simState [ 46 ] = asmState [ 46 ] ;
simState [ 47 ] = asmState [ 47 ] ; simState [ 48 ] = asmState [ 48 ] ;
simState [ 49 ] = asmState [ 49 ] ; simState [ 50 ] = asmState [ 50 ] ;
simState [ 51 ] = asmState [ 51 ] ; simState [ 52 ] = asmState [ 52 ] ;
simState [ 53 ] = asmState [ 53 ] ; simState [ 54 ] = asmState [ 54 ] ;
simState [ 55 ] = asmState [ 55 ] ; }
