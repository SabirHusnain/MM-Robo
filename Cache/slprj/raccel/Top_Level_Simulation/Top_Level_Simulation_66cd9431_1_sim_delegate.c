#include <math.h>
#include <string.h>
#include "pm_std.h"
#include "sm_std.h"
#include "ne_std.h"
#include "ne_dae.h"
#include "sm_ssci_run_time_errors.h"
#include "sm_RuntimeDerivedValuesBundle.h"
void Top_Level_Simulation_66cd9431_1_resetSimStateVector ( const void * mech
, double * state ) { double xx [ 2 ] ; ( void ) mech ; xx [ 0 ] = 0.0 ; xx [
1 ] = 1.0 ; state [ 0 ] = xx [ 0 ] ; state [ 1 ] = xx [ 0 ] ; state [ 2 ] =
xx [ 0 ] ; state [ 3 ] = xx [ 0 ] ; state [ 4 ] = xx [ 0 ] ; state [ 5 ] = xx
[ 0 ] ; state [ 6 ] = xx [ 0 ] ; state [ 7 ] = xx [ 0 ] ; state [ 8 ] = xx [
0 ] ; state [ 9 ] = xx [ 0 ] ; state [ 10 ] = xx [ 0 ] ; state [ 11 ] = xx [
0 ] ; state [ 12 ] = xx [ 0 ] ; state [ 13 ] = xx [ 0 ] ; state [ 14 ] = xx [
0 ] ; state [ 15 ] = xx [ 0 ] ; state [ 16 ] = xx [ 0 ] ; state [ 17 ] = xx [
0 ] ; state [ 18 ] = xx [ 0 ] ; state [ 19 ] = xx [ 0 ] ; state [ 20 ] = xx [
0 ] ; state [ 21 ] = xx [ 0 ] ; state [ 22 ] = xx [ 0 ] ; state [ 23 ] = xx [
0 ] ; state [ 24 ] = xx [ 0 ] ; state [ 25 ] = xx [ 0 ] ; state [ 26 ] = xx [
0 ] ; state [ 27 ] = xx [ 0 ] ; state [ 28 ] = xx [ 0 ] ; state [ 29 ] = xx [
0 ] ; state [ 30 ] = xx [ 0 ] ; state [ 31 ] = xx [ 0 ] ; state [ 32 ] = xx [
0 ] ; state [ 33 ] = xx [ 1 ] ; state [ 34 ] = xx [ 0 ] ; state [ 35 ] = xx [
0 ] ; state [ 36 ] = xx [ 0 ] ; state [ 37 ] = xx [ 0 ] ; state [ 38 ] = xx [
0 ] ; state [ 39 ] = xx [ 0 ] ; state [ 40 ] = xx [ 0 ] ; state [ 41 ] = xx [
0 ] ; state [ 42 ] = xx [ 0 ] ; state [ 43 ] = xx [ 0 ] ; state [ 44 ] = xx [
0 ] ; state [ 45 ] = xx [ 0 ] ; state [ 46 ] = xx [ 1 ] ; state [ 47 ] = xx [
0 ] ; state [ 48 ] = xx [ 0 ] ; state [ 49 ] = xx [ 0 ] ; state [ 50 ] = xx [
0 ] ; state [ 51 ] = xx [ 0 ] ; state [ 52 ] = xx [ 0 ] ; state [ 53 ] = xx [
0 ] ; state [ 54 ] = xx [ 0 ] ; state [ 55 ] = xx [ 0 ] ; } static void
perturbSimJointPrimitiveState_0_0 ( double mag , double * state ) { state [ 0
] = state [ 0 ] + mag ; } static void perturbSimJointPrimitiveState_0_0v (
double mag , double * state ) { state [ 0 ] = state [ 0 ] + mag ; state [ 3 ]
= state [ 3 ] - 0.875 * mag ; } static void perturbSimJointPrimitiveState_0_1
( double mag , double * state ) { state [ 1 ] = state [ 1 ] + mag ; } static
void perturbSimJointPrimitiveState_0_1v ( double mag , double * state ) {
state [ 1 ] = state [ 1 ] + mag ; state [ 4 ] = state [ 4 ] - 0.875 * mag ; }
static void perturbSimJointPrimitiveState_0_2 ( double mag , double * state )
{ state [ 2 ] = state [ 2 ] + mag ; } static void
perturbSimJointPrimitiveState_0_2v ( double mag , double * state ) { state [
2 ] = state [ 2 ] + mag ; state [ 5 ] = state [ 5 ] - 0.875 * mag ; } static
void perturbSimJointPrimitiveState_1_0 ( double mag , double * state ) {
state [ 6 ] = state [ 6 ] + mag ; } static void
perturbSimJointPrimitiveState_1_0v ( double mag , double * state ) { state [
6 ] = state [ 6 ] + mag ; state [ 7 ] = state [ 7 ] - 0.875 * mag ; } static
void perturbSimJointPrimitiveState_2_0 ( double mag , double * state ) {
state [ 8 ] = state [ 8 ] + mag ; } static void
perturbSimJointPrimitiveState_2_0v ( double mag , double * state ) { state [
8 ] = state [ 8 ] + mag ; state [ 9 ] = state [ 9 ] - 0.875 * mag ; } static
void perturbSimJointPrimitiveState_3_0 ( double mag , double * state ) {
state [ 10 ] = state [ 10 ] + mag ; } static void
perturbSimJointPrimitiveState_3_0v ( double mag , double * state ) { state [
10 ] = state [ 10 ] + mag ; state [ 11 ] = state [ 11 ] - 0.875 * mag ; }
static void perturbSimJointPrimitiveState_4_0 ( double mag , double * state )
{ state [ 12 ] = state [ 12 ] + mag ; } static void
perturbSimJointPrimitiveState_4_0v ( double mag , double * state ) { state [
12 ] = state [ 12 ] + mag ; state [ 13 ] = state [ 13 ] - 0.875 * mag ; }
static void perturbSimJointPrimitiveState_5_0 ( double mag , double * state )
{ state [ 14 ] = state [ 14 ] + mag ; } static void
perturbSimJointPrimitiveState_5_0v ( double mag , double * state ) { state [
14 ] = state [ 14 ] + mag ; state [ 15 ] = state [ 15 ] - 0.875 * mag ; }
static void perturbSimJointPrimitiveState_6_0 ( double mag , double * state )
{ state [ 16 ] = state [ 16 ] + mag ; } static void
perturbSimJointPrimitiveState_6_0v ( double mag , double * state ) { state [
16 ] = state [ 16 ] + mag ; state [ 17 ] = state [ 17 ] - 0.875 * mag ; }
static void perturbSimJointPrimitiveState_7_0 ( double mag , double * state )
{ state [ 18 ] = state [ 18 ] + mag ; } static void
perturbSimJointPrimitiveState_7_0v ( double mag , double * state ) { state [
18 ] = state [ 18 ] + mag ; state [ 19 ] = state [ 19 ] - 0.875 * mag ; }
static void perturbSimJointPrimitiveState_8_0 ( double mag , double * state )
{ state [ 20 ] = state [ 20 ] + mag ; } static void
perturbSimJointPrimitiveState_8_0v ( double mag , double * state ) { state [
20 ] = state [ 20 ] + mag ; state [ 21 ] = state [ 21 ] - 0.875 * mag ; }
static void perturbSimJointPrimitiveState_9_0 ( double mag , double * state )
{ state [ 22 ] = state [ 22 ] + mag ; } static void
perturbSimJointPrimitiveState_9_0v ( double mag , double * state ) { state [
22 ] = state [ 22 ] + mag ; state [ 23 ] = state [ 23 ] - 0.875 * mag ; }
static void perturbSimJointPrimitiveState_10_0 ( double mag , double * state
) { state [ 24 ] = state [ 24 ] + mag ; } static void
perturbSimJointPrimitiveState_10_0v ( double mag , double * state ) { state [
24 ] = state [ 24 ] + mag ; state [ 25 ] = state [ 25 ] - 0.875 * mag ; }
static void perturbSimJointPrimitiveState_11_0 ( double mag , double * state
) { state [ 26 ] = state [ 26 ] + mag ; } static void
perturbSimJointPrimitiveState_11_0v ( double mag , double * state ) { state [
26 ] = state [ 26 ] + mag ; state [ 27 ] = state [ 27 ] - 0.875 * mag ; }
static void perturbSimJointPrimitiveState_12_0 ( double mag , double * state
) { state [ 28 ] = state [ 28 ] + mag ; } static void
perturbSimJointPrimitiveState_12_0v ( double mag , double * state ) { state [
28 ] = state [ 28 ] + mag ; state [ 29 ] = state [ 29 ] - 0.875 * mag ; }
static void perturbSimJointPrimitiveState_14_0 ( double mag , double * state
) { state [ 30 ] = state [ 30 ] + mag ; } static void
perturbSimJointPrimitiveState_14_0v ( double mag , double * state ) { state [
30 ] = state [ 30 ] + mag ; state [ 37 ] = state [ 37 ] - 0.875 * mag ; }
static void perturbSimJointPrimitiveState_14_1 ( double mag , double * state
) { state [ 31 ] = state [ 31 ] + mag ; } static void
perturbSimJointPrimitiveState_14_1v ( double mag , double * state ) { state [
31 ] = state [ 31 ] + mag ; state [ 38 ] = state [ 38 ] - 0.875 * mag ; }
static void perturbSimJointPrimitiveState_14_2 ( double mag , double * state
) { state [ 32 ] = state [ 32 ] + mag ; } static void
perturbSimJointPrimitiveState_14_2v ( double mag , double * state ) { state [
32 ] = state [ 32 ] + mag ; state [ 39 ] = state [ 39 ] - 0.875 * mag ; }
static void perturbSimJointPrimitiveState_14_3 ( double mag , double * state
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
perturbSimJointPrimitiveState_14_3v ( double mag , double * state ) { double
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
static void perturbSimJointPrimitiveState_15_0 ( double mag , double * state
) { state [ 43 ] = state [ 43 ] + mag ; } static void
perturbSimJointPrimitiveState_15_0v ( double mag , double * state ) { state [
43 ] = state [ 43 ] + mag ; state [ 50 ] = state [ 50 ] - 0.875 * mag ; }
static void perturbSimJointPrimitiveState_15_1 ( double mag , double * state
) { state [ 44 ] = state [ 44 ] + mag ; } static void
perturbSimJointPrimitiveState_15_1v ( double mag , double * state ) { state [
44 ] = state [ 44 ] + mag ; state [ 51 ] = state [ 51 ] - 0.875 * mag ; }
static void perturbSimJointPrimitiveState_15_2 ( double mag , double * state
) { state [ 45 ] = state [ 45 ] + mag ; } static void
perturbSimJointPrimitiveState_15_2v ( double mag , double * state ) { state [
45 ] = state [ 45 ] + mag ; state [ 52 ] = state [ 52 ] - 0.875 * mag ; }
static void perturbSimJointPrimitiveState_15_3 ( double mag , double * state
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
perturbSimJointPrimitiveState_15_3v ( double mag , double * state ) { double
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
void Top_Level_Simulation_66cd9431_1_perturbSimJointPrimitiveState ( const
void * mech , size_t stageIdx , size_t primIdx , double mag , boolean_T
doPerturbVelocity , double * state ) { ( void ) mech ; ( void ) stageIdx ; (
void ) primIdx ; ( void ) mag ; ( void ) doPerturbVelocity ; ( void ) state ;
switch ( ( stageIdx * 6 + primIdx ) * 2 + ( doPerturbVelocity ? 1 : 0 ) ) {
case 0 : perturbSimJointPrimitiveState_0_0 ( mag , state ) ; break ; case 1 :
perturbSimJointPrimitiveState_0_0v ( mag , state ) ; break ; case 2 :
perturbSimJointPrimitiveState_0_1 ( mag , state ) ; break ; case 3 :
perturbSimJointPrimitiveState_0_1v ( mag , state ) ; break ; case 4 :
perturbSimJointPrimitiveState_0_2 ( mag , state ) ; break ; case 5 :
perturbSimJointPrimitiveState_0_2v ( mag , state ) ; break ; case 12 :
perturbSimJointPrimitiveState_1_0 ( mag , state ) ; break ; case 13 :
perturbSimJointPrimitiveState_1_0v ( mag , state ) ; break ; case 24 :
perturbSimJointPrimitiveState_2_0 ( mag , state ) ; break ; case 25 :
perturbSimJointPrimitiveState_2_0v ( mag , state ) ; break ; case 36 :
perturbSimJointPrimitiveState_3_0 ( mag , state ) ; break ; case 37 :
perturbSimJointPrimitiveState_3_0v ( mag , state ) ; break ; case 48 :
perturbSimJointPrimitiveState_4_0 ( mag , state ) ; break ; case 49 :
perturbSimJointPrimitiveState_4_0v ( mag , state ) ; break ; case 60 :
perturbSimJointPrimitiveState_5_0 ( mag , state ) ; break ; case 61 :
perturbSimJointPrimitiveState_5_0v ( mag , state ) ; break ; case 72 :
perturbSimJointPrimitiveState_6_0 ( mag , state ) ; break ; case 73 :
perturbSimJointPrimitiveState_6_0v ( mag , state ) ; break ; case 84 :
perturbSimJointPrimitiveState_7_0 ( mag , state ) ; break ; case 85 :
perturbSimJointPrimitiveState_7_0v ( mag , state ) ; break ; case 96 :
perturbSimJointPrimitiveState_8_0 ( mag , state ) ; break ; case 97 :
perturbSimJointPrimitiveState_8_0v ( mag , state ) ; break ; case 108 :
perturbSimJointPrimitiveState_9_0 ( mag , state ) ; break ; case 109 :
perturbSimJointPrimitiveState_9_0v ( mag , state ) ; break ; case 120 :
perturbSimJointPrimitiveState_10_0 ( mag , state ) ; break ; case 121 :
perturbSimJointPrimitiveState_10_0v ( mag , state ) ; break ; case 132 :
perturbSimJointPrimitiveState_11_0 ( mag , state ) ; break ; case 133 :
perturbSimJointPrimitiveState_11_0v ( mag , state ) ; break ; case 144 :
perturbSimJointPrimitiveState_12_0 ( mag , state ) ; break ; case 145 :
perturbSimJointPrimitiveState_12_0v ( mag , state ) ; break ; case 168 :
perturbSimJointPrimitiveState_14_0 ( mag , state ) ; break ; case 169 :
perturbSimJointPrimitiveState_14_0v ( mag , state ) ; break ; case 170 :
perturbSimJointPrimitiveState_14_1 ( mag , state ) ; break ; case 171 :
perturbSimJointPrimitiveState_14_1v ( mag , state ) ; break ; case 172 :
perturbSimJointPrimitiveState_14_2 ( mag , state ) ; break ; case 173 :
perturbSimJointPrimitiveState_14_2v ( mag , state ) ; break ; case 174 :
perturbSimJointPrimitiveState_14_3 ( mag , state ) ; break ; case 175 :
perturbSimJointPrimitiveState_14_3v ( mag , state ) ; break ; case 180 :
perturbSimJointPrimitiveState_15_0 ( mag , state ) ; break ; case 181 :
perturbSimJointPrimitiveState_15_0v ( mag , state ) ; break ; case 182 :
perturbSimJointPrimitiveState_15_1 ( mag , state ) ; break ; case 183 :
perturbSimJointPrimitiveState_15_1v ( mag , state ) ; break ; case 184 :
perturbSimJointPrimitiveState_15_2 ( mag , state ) ; break ; case 185 :
perturbSimJointPrimitiveState_15_2v ( mag , state ) ; break ; case 186 :
perturbSimJointPrimitiveState_15_3 ( mag , state ) ; break ; case 187 :
perturbSimJointPrimitiveState_15_3v ( mag , state ) ; break ; } } void
Top_Level_Simulation_66cd9431_1_perturbFlexibleBodyState ( const void * mech
, size_t stageIdx , double mag , boolean_T doPerturbVelocity , double * state
) { ( void ) mech ; ( void ) stageIdx ; ( void ) mag ; ( void )
doPerturbVelocity ; ( void ) state ; switch ( stageIdx * 2 + (
doPerturbVelocity ? 1 : 0 ) ) { } } void
Top_Level_Simulation_66cd9431_1_constructStateVector ( const void * mech ,
const double * solverState , const double * u , const double * uDot , double
* discreteState , double * fullState ) { ( void ) mech ; ( void )
discreteState ; fullState [ 0 ] = u [ 2 ] ; fullState [ 1 ] = u [ 3 ] ;
fullState [ 2 ] = u [ 4 ] ; fullState [ 3 ] = uDot [ 2 ] ; fullState [ 4 ] =
uDot [ 3 ] ; fullState [ 5 ] = uDot [ 4 ] ; fullState [ 6 ] = u [ 0 ] ;
fullState [ 7 ] = uDot [ 0 ] ; fullState [ 8 ] = u [ 1 ] ; fullState [ 9 ] =
uDot [ 1 ] ; fullState [ 10 ] = u [ 5 ] ; fullState [ 11 ] = uDot [ 5 ] ;
fullState [ 12 ] = u [ 6 ] ; fullState [ 13 ] = uDot [ 6 ] ; fullState [ 14 ]
= u [ 7 ] ; fullState [ 15 ] = uDot [ 7 ] ; fullState [ 16 ] = u [ 8 ] ;
fullState [ 17 ] = uDot [ 8 ] ; fullState [ 18 ] = u [ 9 ] ; fullState [ 19 ]
= uDot [ 9 ] ; fullState [ 20 ] = u [ 10 ] ; fullState [ 21 ] = uDot [ 10 ] ;
fullState [ 22 ] = u [ 11 ] ; fullState [ 23 ] = uDot [ 11 ] ; fullState [ 24
] = u [ 12 ] ; fullState [ 25 ] = uDot [ 12 ] ; fullState [ 26 ] = u [ 14 ] ;
fullState [ 27 ] = uDot [ 14 ] ; fullState [ 28 ] = u [ 13 ] ; fullState [ 29
] = uDot [ 13 ] ; fullState [ 30 ] = solverState [ 0 ] ; fullState [ 31 ] =
solverState [ 1 ] ; fullState [ 32 ] = solverState [ 2 ] ; fullState [ 33 ] =
solverState [ 3 ] ; fullState [ 34 ] = solverState [ 4 ] ; fullState [ 35 ] =
solverState [ 5 ] ; fullState [ 36 ] = solverState [ 6 ] ; fullState [ 37 ] =
solverState [ 7 ] ; fullState [ 38 ] = solverState [ 8 ] ; fullState [ 39 ] =
solverState [ 9 ] ; fullState [ 40 ] = solverState [ 10 ] ; fullState [ 41 ]
= solverState [ 11 ] ; fullState [ 42 ] = solverState [ 12 ] ; fullState [ 43
] = solverState [ 13 ] ; fullState [ 44 ] = solverState [ 14 ] ; fullState [
45 ] = solverState [ 15 ] ; fullState [ 46 ] = solverState [ 16 ] ; fullState
[ 47 ] = solverState [ 17 ] ; fullState [ 48 ] = solverState [ 18 ] ;
fullState [ 49 ] = solverState [ 19 ] ; fullState [ 50 ] = solverState [ 20 ]
; fullState [ 51 ] = solverState [ 21 ] ; fullState [ 52 ] = solverState [ 22
] ; fullState [ 53 ] = solverState [ 23 ] ; fullState [ 54 ] = solverState [
24 ] ; fullState [ 55 ] = solverState [ 25 ] ; } void
Top_Level_Simulation_66cd9431_1_extractSolverStateVector ( const void * mech
, const double * fullState , double * solverState ) { ( void ) mech ;
solverState [ 0 ] = fullState [ 30 ] ; solverState [ 1 ] = fullState [ 31 ] ;
solverState [ 2 ] = fullState [ 32 ] ; solverState [ 3 ] = fullState [ 33 ] ;
solverState [ 4 ] = fullState [ 34 ] ; solverState [ 5 ] = fullState [ 35 ] ;
solverState [ 6 ] = fullState [ 36 ] ; solverState [ 7 ] = fullState [ 37 ] ;
solverState [ 8 ] = fullState [ 38 ] ; solverState [ 9 ] = fullState [ 39 ] ;
solverState [ 10 ] = fullState [ 40 ] ; solverState [ 11 ] = fullState [ 41 ]
; solverState [ 12 ] = fullState [ 42 ] ; solverState [ 13 ] = fullState [ 43
] ; solverState [ 14 ] = fullState [ 44 ] ; solverState [ 15 ] = fullState [
45 ] ; solverState [ 16 ] = fullState [ 46 ] ; solverState [ 17 ] = fullState
[ 47 ] ; solverState [ 18 ] = fullState [ 48 ] ; solverState [ 19 ] =
fullState [ 49 ] ; solverState [ 20 ] = fullState [ 50 ] ; solverState [ 21 ]
= fullState [ 51 ] ; solverState [ 22 ] = fullState [ 52 ] ; solverState [ 23
] = fullState [ 53 ] ; solverState [ 24 ] = fullState [ 54 ] ; solverState [
25 ] = fullState [ 55 ] ; } boolean_T
Top_Level_Simulation_66cd9431_1_isPositionViolation ( const void * mech ,
const RuntimeDerivedValuesBundle * rtdv , const int * eqnEnableFlags , const
double * state , const int * modeVector ) { const double * rtdvd = rtdv ->
mDoubles . mValues ; const int * rtdvi = rtdv -> mInts . mValues ; ( void )
mech ; ( void ) rtdvd ; ( void ) rtdvi ; ( void ) eqnEnableFlags ; ( void )
state ; ( void ) modeVector ; return 0 ; } boolean_T
Top_Level_Simulation_66cd9431_1_isVelocityViolation ( const void * mech ,
const RuntimeDerivedValuesBundle * rtdv , const int * eqnEnableFlags , const
double * state , const int * modeVector ) { const double * rtdvd = rtdv ->
mDoubles . mValues ; const int * rtdvi = rtdv -> mInts . mValues ; ( void )
mech ; ( void ) rtdvd ; ( void ) rtdvi ; ( void ) eqnEnableFlags ; ( void )
state ; ( void ) modeVector ; return 0 ; } PmfMessageId
Top_Level_Simulation_66cd9431_1_projectStateSim ( const void * mech , const
RuntimeDerivedValuesBundle * rtdv , const int * eqnEnableFlags , const int *
modeVector , double * state , void * neDiagMgr0 ) { const double * rtdvd =
rtdv -> mDoubles . mValues ; const int * rtdvi = rtdv -> mInts . mValues ;
NeuDiagnosticManager * neDiagMgr = ( NeuDiagnosticManager * ) neDiagMgr0 ;
double xx [ 2 ] ; ( void ) mech ; ( void ) rtdvd ; ( void ) rtdvi ; ( void )
eqnEnableFlags ; ( void ) modeVector ; ( void ) neDiagMgr ; xx [ 0 ] = sqrt (
state [ 33 ] * state [ 33 ] + state [ 34 ] * state [ 34 ] + state [ 35 ] *
state [ 35 ] + state [ 36 ] * state [ 36 ] ) ; xx [ 1 ] = sqrt ( state [ 46 ]
* state [ 46 ] + state [ 47 ] * state [ 47 ] + state [ 48 ] * state [ 48 ] +
state [ 49 ] * state [ 49 ] ) ; state [ 33 ] = state [ 33 ] / xx [ 0 ] ;
state [ 34 ] = state [ 34 ] / xx [ 0 ] ; state [ 35 ] = state [ 35 ] / xx [ 0
] ; state [ 36 ] = state [ 36 ] / xx [ 0 ] ; state [ 46 ] = state [ 46 ] / xx
[ 1 ] ; state [ 47 ] = state [ 47 ] / xx [ 1 ] ; state [ 48 ] = state [ 48 ]
/ xx [ 1 ] ; state [ 49 ] = state [ 49 ] / xx [ 1 ] ; return NULL ; } void
Top_Level_Simulation_66cd9431_1_computeConstraintError ( const void * mech ,
const RuntimeDerivedValuesBundle * rtdv , const double * state , const int *
modeVector , double * error ) { const double * rtdvd = rtdv -> mDoubles .
mValues ; const int * rtdvi = rtdv -> mInts . mValues ; ( void ) mech ; (
void ) rtdvd ; ( void ) rtdvi ; ( void ) state ; ( void ) modeVector ; ( void
) error ; } void Top_Level_Simulation_66cd9431_1_resetModeVector ( const void
* mech , int * modeVector ) { ( void ) mech ; ( void ) modeVector ; }
boolean_T Top_Level_Simulation_66cd9431_1_hasJointDisToNormModeChange ( const
void * mech , const int * prevModeVector , const int * modeVector ) { ( void
) mech ; ( void ) prevModeVector ; ( void ) modeVector ; return 0 ; }
PmfMessageId Top_Level_Simulation_66cd9431_1_performJointDisToNormModeChange
( const void * mech , const RuntimeDerivedValuesBundle * rtdv , const int *
eqnEnableFlags , const int * prevModeVector , const int * modeVector , const
double * input , double * state , void * neDiagMgr0 ) { const double * rtdvd
= rtdv -> mDoubles . mValues ; const int * rtdvi = rtdv -> mInts . mValues ;
NeuDiagnosticManager * neDiagMgr = ( NeuDiagnosticManager * ) neDiagMgr0 ; (
void ) mech ; ( void ) rtdvd ; ( void ) rtdvi ; ( void ) eqnEnableFlags ; (
void ) prevModeVector ; ( void ) modeVector ; ( void ) input ; ( void ) state
; ( void ) neDiagMgr ; return NULL ; } void
Top_Level_Simulation_66cd9431_1_onModeChangedCutJoints ( const void * mech ,
const int * prevModeVector , const int * modeVector , double * state ) { (
void ) mech ; ( void ) prevModeVector ; ( void ) modeVector ; ( void ) state
; }
