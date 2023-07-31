#include <math.h>
#include <string.h>
#include "pm_std.h"
#include "sm_std.h"
#include "ne_std.h"
#include "ne_dae.h"
#include "sm_ssci_run_time_errors.h"
#include "sm_RuntimeDerivedValuesBundle.h"
#include "Top_Level_Simulation_66cd9431_1_geometries.h"
PmfMessageId Top_Level_Simulation_66cd9431_1_compOutputs ( const
RuntimeDerivedValuesBundle * rtdv , const double * state , const int *
modeVector , const double * input , const double * inputDot , const double *
inputDdot , const double * discreteState , double * output ,
NeuDiagnosticManager * neDiagMgr ) { const double * rtdvd = rtdv -> mDoubles
. mValues ; const int * rtdvi = rtdv -> mInts . mValues ; boolean_T bb [ 1 ]
; double xx [ 156 ] ; ( void ) rtdvd ; ( void ) rtdvi ; ( void ) modeVector ;
( void ) inputDdot ; ( void ) discreteState ; ( void ) neDiagMgr ; xx [ 0 ] =
- 0.9998828595337176 ; xx [ 1 ] = 0.01527435878691359 ; xx [ 2 ] =
4.045007731647784e-4 ; xx [ 3 ] = 8.930584803650332e-4 ; xx [ 4 ] = 0.5 ; xx
[ 5 ] = xx [ 4 ] * input [ 4 ] ; xx [ 6 ] = 8.361885708047793e-4 ; xx [ 7 ] =
sin ( xx [ 5 ] ) ; xx [ 8 ] = 0.03054441659711467 ; xx [ 9 ] =
0.9995330606855463 ; xx [ 10 ] = cos ( xx [ 5 ] ) ; xx [ 11 ] = xx [ 6 ] * xx
[ 7 ] ; xx [ 12 ] = - ( xx [ 8 ] * xx [ 7 ] ) ; xx [ 13 ] = xx [ 9 ] * xx [ 7
] ; pm_math_Quaternion_compose_ra ( xx + 0 , xx + 10 , xx + 14 ) ; xx [ 0 ] =
- 0.01543385393603001 ; xx [ 1 ] = 0.983150349850048 ; xx [ 2 ] = -
3.253268334045489e-3 ; xx [ 3 ] = 0.1821170008196838 ; xx [ 5 ] = xx [ 4 ] *
input [ 7 ] ; xx [ 7 ] = 0.3589770026115218 ; xx [ 18 ] = sin ( xx [ 5 ] ) ;
xx [ 19 ] = 9.892548527733469e-4 ; xx [ 20 ] = 0.9333458806738709 ; xx [ 21 ]
= cos ( xx [ 5 ] ) ; xx [ 22 ] = - ( xx [ 7 ] * xx [ 18 ] ) ; xx [ 23 ] = xx
[ 19 ] * xx [ 18 ] ; xx [ 24 ] = xx [ 20 ] * xx [ 18 ] ;
pm_math_Quaternion_compose_ra ( xx + 0 , xx + 21 , xx + 25 ) ;
pm_math_Quaternion_compose_ra ( xx + 14 , xx + 25 , xx + 0 ) ; xx [ 21 ] = -
0.5907570559882269 ; xx [ 22 ] = - 0.3892899547148866 ; xx [ 23 ] = -
0.3861224701070733 ; xx [ 24 ] = - 0.5919196482941048 ; xx [ 5 ] = xx [ 4 ] *
input [ 8 ] ; xx [ 18 ] = 1.293953311379162e-4 ; xx [ 29 ] = sin ( xx [ 5 ] )
; xx [ 30 ] = 0.04294162101203882 ; xx [ 31 ] = 0.9990775747867163 ; xx [ 32
] = cos ( xx [ 5 ] ) ; xx [ 33 ] = xx [ 18 ] * xx [ 29 ] ; xx [ 34 ] = - ( xx
[ 30 ] * xx [ 29 ] ) ; xx [ 35 ] = xx [ 31 ] * xx [ 29 ] ;
pm_math_Quaternion_compose_ra ( xx + 21 , xx + 32 , xx + 36 ) ;
pm_math_Quaternion_compose_ra ( xx + 0 , xx + 36 , xx + 21 ) ; xx [ 32 ] = -
0.06622677910401652 ; xx [ 33 ] = 0.9539399189003807 ; xx [ 34 ] =
0.2139330882669903 ; xx [ 35 ] = 0.199612821738461 ; xx [ 5 ] = xx [ 4 ] *
input [ 9 ] ; xx [ 29 ] = 0.3925116432615775 ; xx [ 40 ] = sin ( xx [ 5 ] ) ;
xx [ 41 ] = 2.216869444640626e-3 ; xx [ 42 ] = 0.9197443641544979 ; xx [ 43 ]
= cos ( xx [ 5 ] ) ; xx [ 44 ] = - ( xx [ 29 ] * xx [ 40 ] ) ; xx [ 45 ] = xx
[ 41 ] * xx [ 40 ] ; xx [ 46 ] = xx [ 42 ] * xx [ 40 ] ;
pm_math_Quaternion_compose_ra ( xx + 32 , xx + 43 , xx + 47 ) ;
pm_math_Quaternion_compose_ra ( xx + 21 , xx + 47 , xx + 32 ) ; xx [ 43 ] =
9.789968004908292e-4 ; xx [ 44 ] = 0.7494484480579273 ; xx [ 45 ] = -
6.342871115585375e-4 ; xx [ 46 ] = - 0.6620616760912004 ; xx [ 5 ] = xx [ 4 ]
* input [ 10 ] ; xx [ 40 ] = 0.2760653533109761 ; xx [ 51 ] = sin ( xx [ 5 ]
) ; xx [ 52 ] = 9.638253277342509e-5 ; xx [ 53 ] = 0.9611388616696827 ; xx [
54 ] = cos ( xx [ 5 ] ) ; xx [ 55 ] = xx [ 40 ] * xx [ 51 ] ; xx [ 56 ] = - (
xx [ 52 ] * xx [ 51 ] ) ; xx [ 57 ] = xx [ 53 ] * xx [ 51 ] ;
pm_math_Quaternion_compose_ra ( xx + 43 , xx + 54 , xx + 58 ) ;
pm_math_Quaternion_compose_ra ( xx + 32 , xx + 58 , xx + 43 ) ; xx [ 54 ] = -
0.3054946078288459 ; xx [ 55 ] = - 0.5320313095226306 ; xx [ 56 ] = -
0.04142366843456229 ; xx [ 57 ] = 0.7886062452000734 ; xx [ 5 ] = xx [ 4 ] *
input [ 11 ] ; xx [ 51 ] = 9.161469241983772e-4 ; xx [ 62 ] = sin ( xx [ 5 ]
) ; xx [ 63 ] = 0.433580475613033 ; xx [ 64 ] = 0.90111438332877 ; xx [ 65 ]
= cos ( xx [ 5 ] ) ; xx [ 66 ] = - ( xx [ 51 ] * xx [ 62 ] ) ; xx [ 67 ] = -
( xx [ 63 ] * xx [ 62 ] ) ; xx [ 68 ] = xx [ 64 ] * xx [ 62 ] ;
pm_math_Quaternion_compose_ra ( xx + 54 , xx + 65 , xx + 69 ) ;
pm_math_Quaternion_compose_ra ( xx + 43 , xx + 69 , xx + 54 ) ; xx [ 65 ] = -
0.5982360757232992 ; xx [ 66 ] = 0.3774792463138235 ; xx [ 67 ] = -
0.3769690834319327 ; xx [ 68 ] = - 0.5979275260782232 ; xx [ 5 ] = xx [ 4 ] *
input [ 12 ] ; xx [ 62 ] = 3.074892580994291e-3 ; xx [ 73 ] = sin ( xx [ 5 ]
) ; xx [ 74 ] = 1.687433921535961e-4 ; xx [ 75 ] = 0.9999952582693995 ; xx [
76 ] = cos ( xx [ 5 ] ) ; xx [ 77 ] = - ( xx [ 62 ] * xx [ 73 ] ) ; xx [ 78 ]
= - ( xx [ 74 ] * xx [ 73 ] ) ; xx [ 79 ] = xx [ 75 ] * xx [ 73 ] ;
pm_math_Quaternion_compose_ra ( xx + 65 , xx + 76 , xx + 80 ) ;
pm_math_Quaternion_compose_ra ( xx + 54 , xx + 80 , xx + 65 ) ; xx [ 76 ] =
0.4113003470668337 ; xx [ 77 ] = - 0.5751095009164958 ; xx [ 78 ] =
0.5752712250837967 ; xx [ 79 ] = - 0.4112713265581123 ;
pm_math_Quaternion_compose_ra ( xx + 65 , xx + 76 , xx + 84 ) ; xx [ 5 ] =
0.701091276903692 ; xx [ 73 ] = - 0.09203078003209308 ; xx [ 88 ] =
0.09203030447537697 ; xx [ 89 ] = 0.7010932748460824 ; xx [ 90 ] = xx [ 5 ] ;
xx [ 91 ] = xx [ 73 ] ; xx [ 92 ] = xx [ 88 ] ; xx [ 93 ] = xx [ 89 ] ;
pm_math_Quaternion_compose_ra ( xx + 84 , xx + 90 , xx + 94 ) ; xx [ 98 ] = -
2.137267994443221e-7 ; xx [ 99 ] = 0.07388757764255981 ; xx [ 100 ] =
8.842161779899979e-4 ; pm_math_Quaternion_xform_ra ( xx + 84 , xx + 98 , xx +
101 ) ; xx [ 84 ] = 0.9999952592507191 * input [ 14 ] ; xx [ 85 ] =
1.633437862456066e-4 * input [ 14 ] ; xx [ 86 ] = 3.074865020693984e-3 *
input [ 14 ] ; xx [ 104 ] = 0.2828615154169883 + xx [ 84 ] ; xx [ 105 ] =
1.494812213461273e-5 - xx [ 85 ] ; xx [ 106 ] = xx [ 86 ] -
0.2312964910558012 ; pm_math_Quaternion_xform_ra ( xx + 65 , xx + 104 , xx +
107 ) ; xx [ 110 ] = 1.37482914105299e-3 ; xx [ 111 ] = -
1.083137629248106e-6 ; xx [ 112 ] = 0.1363766576540157 ;
pm_math_Quaternion_xform_ra ( xx + 80 , xx + 110 , xx + 113 ) ; xx [ 110 ] =
- ( 1.446398300596931e-5 + xx [ 113 ] ) ; xx [ 111 ] = - ( 0.1177861997136561
+ xx [ 114 ] ) ; xx [ 112 ] = - ( 0.02355406698009013 + xx [ 115 ] ) ;
pm_math_Quaternion_xform_ra ( xx + 54 , xx + 110 , xx + 113 ) ; xx [ 54 ] =
5.433876886669093e-5 ; xx [ 55 ] = 0.09516351305204601 ; xx [ 56 ] = -
0.05049746937722007 ; pm_math_Quaternion_xform_ra ( xx + 69 , xx + 54 , xx +
116 ) ; xx [ 54 ] = - ( 0.08839742977844355 + xx [ 116 ] ) ; xx [ 55 ] =
6.82383889298345e-5 - xx [ 117 ] ; xx [ 56 ] = - ( 0.3530595820491463 + xx [
118 ] ) ; pm_math_Quaternion_xform_ra ( xx + 43 , xx + 54 , xx + 116 ) ; xx [
43 ] = - 0.03258458927695737 ; xx [ 44 ] = - 2.085412120766961e-5 ; xx [ 45 ]
= 0.286766763821267 ; pm_math_Quaternion_xform_ra ( xx + 58 , xx + 43 , xx +
119 ) ; xx [ 43 ] = 0.1619100124162477 - xx [ 119 ] ; xx [ 44 ] =
5.196394139830862e-5 - xx [ 120 ] ; xx [ 45 ] = 0.02814027697500968 - xx [
121 ] ; pm_math_Quaternion_xform_ra ( xx + 32 , xx + 43 , xx + 119 ) ; xx [
32 ] = - 0.1134272676054903 ; xx [ 33 ] = 3.826993029653475e-5 ; xx [ 34 ] =
0.04109704867211692 ; pm_math_Quaternion_xform_ra ( xx + 47 , xx + 32 , xx +
122 ) ; xx [ 32 ] = - ( 8.809224580636627e-5 + xx [ 122 ] ) ; xx [ 33 ] = - (
0.4599502421099514 + xx [ 123 ] ) ; xx [ 34 ] = 0.07299421268079627 - xx [
124 ] ; pm_math_Quaternion_xform_ra ( xx + 21 , xx + 32 , xx + 122 ) ; xx [
21 ] = 6.387658930220863e-5 ; xx [ 22 ] = 0.3515404519103449 ; xx [ 23 ] =
0.08365575332801509 ; pm_math_Quaternion_xform_ra ( xx + 36 , xx + 21 , xx +
125 ) ; xx [ 21 ] = - ( 0.06175894467427824 + xx [ 125 ] ) ; xx [ 22 ] =
1.35108195633428e-4 - xx [ 126 ] ; xx [ 23 ] = - ( 0.1403140255723968 + xx [
127 ] ) ; pm_math_Quaternion_xform_ra ( xx + 0 , xx + 21 , xx + 125 ) ; xx [
0 ] = - 0.02382768371459375 ; xx [ 1 ] = 3.421823533909102e-5 ; xx [ 2 ] =
0.1839029055638635 ; pm_math_Quaternion_xform_ra ( xx + 25 , xx + 0 , xx +
128 ) ; xx [ 0 ] = 2.946570268760443e-4 - xx [ 128 ] ; xx [ 1 ] = - (
0.1935621699833146 + xx [ 129 ] ) ; xx [ 2 ] = 0.3271620966035795 - xx [ 130
] ; pm_math_Quaternion_xform_ra ( xx + 14 , xx + 0 , xx + 128 ) ; xx [ 131 ]
= 1.74412095883791e-4 ; xx [ 132 ] = - 0.01351270086500039 ; xx [ 133 ] = -
0.2034547061116934 ; pm_math_Quaternion_xform_ra ( xx + 14 , xx + 131 , xx +
134 ) ; xx [ 3 ] = xx [ 113 ] + xx [ 116 ] + xx [ 119 ] + xx [ 122 ] + xx [
125 ] + xx [ 128 ] + input [ 2 ] + xx [ 134 ] + 10.0 ; xx [ 14 ] = xx [ 114 ]
+ xx [ 117 ] + xx [ 120 ] + xx [ 123 ] + xx [ 126 ] + xx [ 129 ] + input [ 3
] + xx [ 135 ] + 19.0 ; xx [ 15 ] = xx [ 115 ] + xx [ 118 ] + xx [ 121 ] + xx
[ 124 ] + xx [ 127 ] + xx [ 130 ] + xx [ 136 ] + 0.75253249 ; xx [ 113 ] = xx
[ 94 ] ; xx [ 114 ] = xx [ 95 ] ; xx [ 115 ] = xx [ 96 ] ; xx [ 116 ] = xx [
97 ] ; xx [ 117 ] = xx [ 101 ] + xx [ 107 ] + xx [ 3 ] ; xx [ 118 ] = xx [
102 ] + xx [ 108 ] + xx [ 14 ] ; xx [ 119 ] = xx [ 103 ] + xx [ 109 ] + xx [
15 ] ; xx [ 16 ] = 0.7071067811865476 ; xx [ 17 ] = xx [ 16 ] * state [ 5 ] ;
xx [ 24 ] = xx [ 16 ] * state [ 3 ] ; xx [ 35 ] = - ( xx [ 17 ] + xx [ 24 ] )
; xx [ 46 ] = xx [ 16 ] * state [ 4 ] ; xx [ 57 ] = xx [ 16 ] * state [ 6 ] ;
xx [ 87 ] = - ( xx [ 46 ] - xx [ 57 ] ) ; xx [ 94 ] = - ( xx [ 17 ] - xx [ 24
] ) ; xx [ 17 ] = - ( xx [ 46 ] + xx [ 57 ] ) ; xx [ 24 ] = 2.0 ; xx [ 46 ] =
xx [ 16 ] * xx [ 16 ] * state [ 2 ] ; xx [ 57 ] = xx [ 16 ] * xx [ 16 ] *
state [ 0 ] ; xx [ 95 ] = 0.18288 ; xx [ 120 ] = xx [ 35 ] ; xx [ 121 ] = xx
[ 87 ] ; xx [ 122 ] = xx [ 94 ] ; xx [ 123 ] = xx [ 17 ] ; xx [ 124 ] = state
[ 0 ] - xx [ 24 ] * ( xx [ 46 ] + xx [ 57 ] ) + 3.0 ; xx [ 125 ] = state [ 1
] + 7.0 ; xx [ 126 ] = state [ 2 ] - ( xx [ 46 ] - xx [ 57 ] ) * xx [ 24 ] +
xx [ 95 ] ; bb [ 0 ] = sm_core_compiler_computeProximityInfoBrickCylinder (
Top_Level_Simulation_66cd9431_1_geometry_2 ( NULL ) ,
Top_Level_Simulation_66cd9431_1_geometry_0 ( NULL ) , ( pm_math_Transform3 *
) ( xx + 113 ) , ( pm_math_Transform3 * ) ( xx + 120 ) , xx + 46 , (
pm_math_Vector3 * ) ( xx + 101 ) , ( pm_math_Vector3 * ) ( xx + 107 ) , (
pm_math_Vector3 * ) ( xx + 127 ) , ( pm_math_Vector3 * ) ( xx + 130 ) ) ; xx
[ 133 ] = xx [ 5 ] ; xx [ 134 ] = xx [ 73 ] ; xx [ 135 ] = xx [ 88 ] ; xx [
136 ] = xx [ 89 ] ; xx [ 137 ] = xx [ 98 ] ; xx [ 138 ] = xx [ 99 ] ; xx [
139 ] = xx [ 100 ] ; xx [ 5 ] = 0.0 ; xx [ 140 ] = 1.0 ; xx [ 141 ] = xx [ 5
] ; xx [ 142 ] = xx [ 5 ] ; xx [ 143 ] = xx [ 5 ] ; xx [ 144 ] = xx [ 5 ] ;
xx [ 145 ] = xx [ 5 ] ; xx [ 146 ] = xx [ 5 ] ; xx [ 147 ] = xx [ 6 ] *
inputDot [ 4 ] ; xx [ 148 ] = - ( xx [ 8 ] * inputDot [ 4 ] ) ; xx [ 149 ] =
xx [ 9 ] * inputDot [ 4 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 25 , xx
+ 147 , xx + 150 ) ; xx [ 153 ] = xx [ 150 ] - xx [ 7 ] * inputDot [ 7 ] ; xx
[ 154 ] = xx [ 151 ] + xx [ 19 ] * inputDot [ 7 ] ; xx [ 155 ] = xx [ 152 ] +
xx [ 20 ] * inputDot [ 7 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 36 ,
xx + 153 , xx + 6 ) ; xx [ 150 ] = xx [ 6 ] + xx [ 18 ] * inputDot [ 8 ] ; xx
[ 151 ] = xx [ 7 ] - xx [ 30 ] * inputDot [ 8 ] ; xx [ 152 ] = xx [ 8 ] + xx
[ 31 ] * inputDot [ 8 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 47 , xx +
150 , xx + 6 ) ; xx [ 18 ] = xx [ 6 ] - xx [ 29 ] * inputDot [ 9 ] ; xx [ 19
] = xx [ 7 ] + xx [ 41 ] * inputDot [ 9 ] ; xx [ 20 ] = xx [ 8 ] + xx [ 42 ]
* inputDot [ 9 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 58 , xx + 18 ,
xx + 6 ) ; xx [ 29 ] = xx [ 6 ] + xx [ 40 ] * inputDot [ 10 ] ; xx [ 30 ] =
xx [ 7 ] - xx [ 52 ] * inputDot [ 10 ] ; xx [ 31 ] = xx [ 8 ] + xx [ 53 ] *
inputDot [ 10 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 69 , xx + 29 , xx
+ 6 ) ; xx [ 40 ] = xx [ 6 ] - xx [ 51 ] * inputDot [ 11 ] ; xx [ 41 ] = xx [
7 ] - xx [ 63 ] * inputDot [ 11 ] ; xx [ 42 ] = xx [ 8 ] + xx [ 64 ] *
inputDot [ 11 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 80 , xx + 40 , xx
+ 6 ) ; xx [ 51 ] = xx [ 6 ] - xx [ 62 ] * inputDot [ 12 ] ; xx [ 52 ] = xx [
7 ] - xx [ 74 ] * inputDot [ 12 ] ; xx [ 53 ] = xx [ 8 ] + xx [ 75 ] *
inputDot [ 12 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 76 , xx + 51 , xx
+ 6 ) ; pm_math_Vector3_cross_ra ( xx + 51 , xx + 104 , xx + 62 ) ;
pm_math_Vector3_cross_ra ( xx + 40 , xx + 110 , xx + 73 ) ;
pm_math_Vector3_cross_ra ( xx + 29 , xx + 54 , xx + 40 ) ;
pm_math_Vector3_cross_ra ( xx + 18 , xx + 43 , xx + 29 ) ;
pm_math_Vector3_cross_ra ( xx + 150 , xx + 32 , xx + 18 ) ;
pm_math_Vector3_cross_ra ( xx + 153 , xx + 21 , xx + 32 ) ;
pm_math_Vector3_cross_ra ( xx + 147 , xx + 0 , xx + 21 ) ; xx [ 0 ] =
0.9999980776513503 * inputDot [ 2 ] - 1.773550754278646e-3 * inputDot [ 3 ] ;
xx [ 1 ] = 1.798264714034257e-3 * inputDot [ 2 ] + 0.9995317928203986 *
inputDot [ 3 ] ; xx [ 2 ] = 0.03054586156849783 * inputDot [ 3 ] -
7.816249882176138e-4 * inputDot [ 2 ] ; pm_math_Quaternion_inverseXform_ra (
xx + 10 , xx + 0 , xx + 43 ) ; xx [ 0 ] = xx [ 21 ] + 0.01972079655584117 *
inputDot [ 4 ] + xx [ 43 ] ; xx [ 1 ] = xx [ 22 ] + 3.444571559463499e-4 *
inputDot [ 4 ] + xx [ 44 ] ; xx [ 2 ] = xx [ 23 ] + xx [ 45 ] -
5.971850307766764e-6 * inputDot [ 4 ] ; pm_math_Quaternion_inverseXform_ra (
xx + 25 , xx + 0 , xx + 9 ) ; xx [ 0 ] = xx [ 32 ] + xx [ 9 ] -
1.499893927705008e-4 * inputDot [ 7 ] ; xx [ 1 ] = xx [ 33 ] + xx [ 10 ] -
0.04377744336984951 * inputDot [ 7 ] ; xx [ 2 ] = xx [ 34 ] + xx [ 11 ] -
1.128809218832778e-5 * inputDot [ 7 ] ; pm_math_Quaternion_inverseXform_ra (
xx + 36 , xx + 0 , xx + 9 ) ; xx [ 0 ] = xx [ 18 ] + xx [ 9 ] +
0.3548084957889019 * inputDot [ 8 ] ; xx [ 1 ] = xx [ 19 ] + xx [ 10 ] -
5.299300402222736e-5 * inputDot [ 8 ] ; xx [ 2 ] = xx [ 20 ] + xx [ 11 ] -
4.823065747266888e-5 * inputDot [ 8 ] ; pm_math_Quaternion_inverseXform_ra (
xx + 47 , xx + 0 , xx + 9 ) ; xx [ 0 ] = xx [ 29 ] + xx [ 9 ] -
5.590823875930131e-5 * inputDot [ 9 ] ; xx [ 1 ] = xx [ 30 ] + xx [ 10 ] +
0.08819302001410009 * inputDot [ 9 ] ; xx [ 2 ] = xx [ 31 ] + xx [ 11 ] -
2.364320505154881e-4 * inputDot [ 9 ] ; pm_math_Quaternion_inverseXform_ra (
xx + 58 , xx + 0 , xx + 9 ) ; xx [ 0 ] = xx [ 40 ] + xx [ 9 ] +
7.595600693671167e-6 * inputDot [ 10 ] ; xx [ 1 ] = xx [ 41 ] + xx [ 10 ] +
0.1104846830177923 * inputDot [ 10 ] ; xx [ 2 ] = xx [ 42 ] + xx [ 11 ] +
8.897685583080171e-6 * inputDot [ 10 ] ; pm_math_Quaternion_inverseXform_ra (
xx + 69 , xx + 0 , xx + 9 ) ; xx [ 0 ] = xx [ 73 ] + xx [ 9 ] +
0.06385849358946416 * inputDot [ 11 ] ; xx [ 1 ] = xx [ 74 ] + xx [ 10 ] -
2.702344948410855e-6 * inputDot [ 11 ] ; xx [ 2 ] = xx [ 75 ] + xx [ 11 ] +
6.362353052909755e-5 * inputDot [ 11 ] ; pm_math_Quaternion_inverseXform_ra (
xx + 80 , xx + 0 , xx + 9 ) ; xx [ 0 ] = xx [ 9 ] + 2.192952732980704e-5 *
inputDot [ 12 ] ; xx [ 1 ] = xx [ 10 ] - 1.794166194824713e-3 * inputDot [ 12
] ; xx [ 2 ] = xx [ 11 ] - 2.353238647532672e-7 * inputDot [ 12 ] ; xx [ 9 ]
= xx [ 62 ] + xx [ 0 ] ; xx [ 10 ] = xx [ 63 ] + xx [ 1 ] ; xx [ 11 ] = xx [
64 ] + xx [ 2 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 76 , xx + 9 , xx
+ 18 ) ; xx [ 9 ] = 6.599324214527274e-7 ; xx [ 10 ] = xx [ 18 ] + xx [ 9 ] *
inputDot [ 14 ] ; xx [ 11 ] = 0.3262839711907557 ; xx [ 12 ] = xx [ 19 ] - xx
[ 11 ] * inputDot [ 14 ] ; xx [ 13 ] = 0.9452717969682342 ; xx [ 18 ] = xx [
20 ] + xx [ 13 ] * inputDot [ 14 ] ; xx [ 25 ] = xx [ 6 ] ; xx [ 26 ] = xx [
7 ] ; xx [ 27 ] = xx [ 8 ] ; xx [ 28 ] = xx [ 10 ] ; xx [ 29 ] = xx [ 12 ] ;
xx [ 30 ] = xx [ 18 ] ; xx [ 19 ] = xx [ 35 ] ; xx [ 20 ] = xx [ 87 ] ; xx [
21 ] = xx [ 94 ] ; xx [ 22 ] = xx [ 17 ] ; xx [ 17 ] = xx [ 16 ] * xx [ 16 ]
* state [ 9 ] ; xx [ 23 ] = xx [ 16 ] * xx [ 16 ] * state [ 7 ] ; xx [ 31 ] =
state [ 7 ] - xx [ 24 ] * ( xx [ 17 ] + xx [ 23 ] ) ; xx [ 32 ] = state [ 8 ]
; xx [ 33 ] = state [ 9 ] - ( xx [ 17 ] - xx [ 23 ] ) * xx [ 24 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 19 , xx + 31 , xx + 34 ) ; xx [ 37
] = state [ 10 ] ; xx [ 38 ] = state [ 11 ] ; xx [ 39 ] = state [ 12 ] ; xx [
40 ] = xx [ 34 ] ; xx [ 41 ] = xx [ 35 ] ; xx [ 42 ] = xx [ 36 ] ; xx [ 16 ]
= 2000.0 ; xx [ 17 ] = 200.0 ; xx [ 19 ] = 1.0e-4 ; xx [ 20 ] = 0.92 ; xx [
21 ] = 0.0433083178744532 ; xx [ 22 ] = 0.7201068497247313 ;
sm_core_compiler_computeContactOutputs ( 1 , 0 , xx [ 46 ] , xx + 101 , xx +
107 , xx + 127 , xx + 130 , xx + 133 , xx + 140 , xx + 113 , xx + 120 , xx +
25 , xx + 37 , 0 , 1 , xx [ 16 ] , xx [ 17 ] , xx [ 19 ] , xx [ 20 ] , xx [
21 ] , xx [ 22 ] , NULL , NULL , NULL , NULL , NULL , NULL , NULL , NULL , xx
+ 23 , NULL ) ; xx [ 31 ] = 0.4095980497005858 ; xx [ 32 ] = -
0.5764638023696377 ; xx [ 33 ] = - 0.5764407932687463 ; xx [ 34 ] =
0.4094324536412745 ; pm_math_Quaternion_compose_ra ( xx + 65 , xx + 31 , xx +
43 ) ; pm_math_Quaternion_compose_ra ( xx + 43 , xx + 90 , xx + 47 ) ;
pm_math_Quaternion_xform_ra ( xx + 43 , xx + 98 , xx + 54 ) ; xx [ 35 ] =
0.9999952592507189 * input [ 13 ] ; xx [ 36 ] = 1.633437862453846e-4 * input
[ 13 ] ; xx [ 43 ] = 3.07486502069354e-3 * input [ 13 ] ; xx [ 44 ] = - (
0.2788414501321849 + xx [ 35 ] ) ; xx [ 45 ] = 1.07424646342255e-4 + xx [ 36
] ; xx [ 46 ] = - ( 0.2330236599222386 + xx [ 43 ] ) ;
pm_math_Quaternion_xform_ra ( xx + 65 , xx + 44 , xx + 57 ) ; xx [ 60 ] = xx
[ 47 ] ; xx [ 61 ] = xx [ 48 ] ; xx [ 62 ] = xx [ 49 ] ; xx [ 63 ] = xx [ 50
] ; xx [ 64 ] = xx [ 54 ] + xx [ 57 ] + xx [ 3 ] ; xx [ 65 ] = xx [ 55 ] + xx
[ 58 ] + xx [ 14 ] ; xx [ 66 ] = xx [ 56 ] + xx [ 59 ] + xx [ 15 ] ; bb [ 0 ]
= sm_core_compiler_computeProximityInfoBrickCylinder (
Top_Level_Simulation_66cd9431_1_geometry_2 ( NULL ) ,
Top_Level_Simulation_66cd9431_1_geometry_0 ( NULL ) , ( pm_math_Transform3 *
) ( xx + 60 ) , ( pm_math_Transform3 * ) ( xx + 120 ) , xx + 3 , (
pm_math_Vector3 * ) ( xx + 47 ) , ( pm_math_Vector3 * ) ( xx + 54 ) , (
pm_math_Vector3 * ) ( xx + 57 ) , ( pm_math_Vector3 * ) ( xx + 67 ) ) ;
pm_math_Quaternion_inverseXform_ra ( xx + 31 , xx + 51 , xx + 70 ) ;
pm_math_Vector3_cross_ra ( xx + 51 , xx + 44 , xx + 73 ) ; xx [ 44 ] = xx [
73 ] + xx [ 0 ] ; xx [ 45 ] = xx [ 74 ] + xx [ 1 ] ; xx [ 46 ] = xx [ 75 ] +
xx [ 2 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 31 , xx + 44 , xx + 73 )
; xx [ 14 ] = xx [ 73 ] + xx [ 9 ] * inputDot [ 13 ] ; xx [ 9 ] = xx [ 74 ] -
xx [ 11 ] * inputDot [ 13 ] ; xx [ 11 ] = xx [ 75 ] + xx [ 13 ] * inputDot [
13 ] ; xx [ 73 ] = xx [ 70 ] ; xx [ 74 ] = xx [ 71 ] ; xx [ 75 ] = xx [ 72 ]
; xx [ 76 ] = xx [ 14 ] ; xx [ 77 ] = xx [ 9 ] ; xx [ 78 ] = xx [ 11 ] ;
sm_core_compiler_computeContactOutputs ( 1 , 0 , xx [ 3 ] , xx + 47 , xx + 54
, xx + 57 , xx + 67 , xx + 133 , xx + 140 , xx + 60 , xx + 120 , xx + 73 , xx
+ 37 , 0 , 1 , xx [ 16 ] , xx [ 17 ] , xx [ 19 ] , xx [ 20 ] , xx [ 21 ] , xx
[ 22 ] , NULL , NULL , NULL , NULL , NULL , NULL , NULL , NULL , xx + 13 ,
NULL ) ; xx [ 31 ] = xx [ 4 ] ; xx [ 32 ] = xx [ 4 ] ; xx [ 33 ] = - xx [ 4 ]
; xx [ 34 ] = xx [ 4 ] ; xx [ 37 ] = - state [ 16 ] ; xx [ 38 ] = - state [
17 ] ; xx [ 39 ] = - state [ 18 ] ; xx [ 40 ] = - state [ 19 ] ;
pm_math_Quaternion_compose_ra ( xx + 31 , xx + 37 , xx + 44 ) ; xx [ 37 ] =
state [ 13 ] ; xx [ 38 ] = state [ 14 ] ; xx [ 39 ] = state [ 15 ] ;
pm_math_Quaternion_xform_ra ( xx + 31 , xx + 37 , xx + 40 ) ; xx [ 87 ] = xx
[ 44 ] ; xx [ 88 ] = xx [ 45 ] ; xx [ 89 ] = xx [ 46 ] ; xx [ 90 ] = xx [ 47
] ; xx [ 91 ] = xx [ 40 ] + 15.0 ; xx [ 92 ] = xx [ 41 ] + 13.0 ; xx [ 93 ] =
xx [ 42 ] + xx [ 95 ] ; bb [ 0 ] =
sm_core_compiler_computeProximityInfoBrickCylinder (
Top_Level_Simulation_66cd9431_1_geometry_2 ( NULL ) ,
Top_Level_Simulation_66cd9431_1_geometry_0 ( NULL ) , ( pm_math_Transform3 *
) ( xx + 60 ) , ( pm_math_Transform3 * ) ( xx + 87 ) , xx + 3 , (
pm_math_Vector3 * ) ( xx + 37 ) , ( pm_math_Vector3 * ) ( xx + 40 ) , (
pm_math_Vector3 * ) ( xx + 48 ) , ( pm_math_Vector3 * ) ( xx + 54 ) ) ; xx [
57 ] = state [ 20 ] ; xx [ 58 ] = state [ 21 ] ; xx [ 59 ] = state [ 22 ] ;
pm_math_Quaternion_xform_ra ( xx + 31 , xx + 57 , xx + 67 ) ;
pm_math_Quaternion_inverseXform_ra ( xx + 44 , xx + 67 , xx + 31 ) ; xx [ 94
] = state [ 23 ] ; xx [ 95 ] = state [ 24 ] ; xx [ 96 ] = state [ 25 ] ; xx [
97 ] = xx [ 31 ] ; xx [ 98 ] = xx [ 32 ] ; xx [ 99 ] = xx [ 33 ] ;
sm_core_compiler_computeContactOutputs ( 1 , 0 , xx [ 3 ] , xx + 37 , xx + 40
, xx + 48 , xx + 54 , xx + 133 , xx + 140 , xx + 60 , xx + 87 , xx + 73 , xx
+ 94 , 0 , 1 , xx [ 16 ] , xx [ 17 ] , xx [ 19 ] , xx [ 20 ] , xx [ 21 ] , xx
[ 22 ] , NULL , NULL , NULL , NULL , NULL , NULL , NULL , NULL , xx + 4 ,
NULL ) ; bb [ 0 ] = sm_core_compiler_computeProximityInfoBrickCylinder (
Top_Level_Simulation_66cd9431_1_geometry_2 ( NULL ) ,
Top_Level_Simulation_66cd9431_1_geometry_0 ( NULL ) , ( pm_math_Transform3 *
) ( xx + 113 ) , ( pm_math_Transform3 * ) ( xx + 87 ) , xx + 3 , (
pm_math_Vector3 * ) ( xx + 31 ) , ( pm_math_Vector3 * ) ( xx + 37 ) , (
pm_math_Vector3 * ) ( xx + 40 ) , ( pm_math_Vector3 * ) ( xx + 44 ) ) ;
sm_core_compiler_computeContactOutputs ( 1 , 0 , xx [ 3 ] , xx + 31 , xx + 37
, xx + 40 , xx + 44 , xx + 133 , xx + 140 , xx + 113 , xx + 87 , xx + 25 , xx
+ 94 , 0 , 1 , xx [ 16 ] , xx [ 17 ] , xx [ 19 ] , xx [ 20 ] , xx [ 21 ] , xx
[ 22 ] , NULL , NULL , NULL , NULL , NULL , NULL , NULL , NULL , xx + 15 ,
NULL ) ; xx [ 19 ] = - 0.9862230470243618 ; xx [ 20 ] = - 0.1654209826952873
; xx [ 21 ] = - 9.14746377392524e-8 ; xx [ 22 ] = - 1.449343431911186e-6 ; xx
[ 25 ] = 2.086798527400656e-7 ; xx [ 26 ] = - 0.1991388678921879 ; xx [ 27 ]
= 0.01315849550164749 ; pm_math_Vector3_cross_ra ( xx + 6 , xx + 25 , xx + 28
) ; xx [ 5 ] = xx [ 10 ] + xx [ 28 ] ; xx [ 6 ] = xx [ 12 ] + xx [ 29 ] ; xx
[ 7 ] = xx [ 18 ] + xx [ 30 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 19
, xx + 5 , xx + 16 ) ; xx [ 3 ] = 1.110223024625157e-16 ; xx [ 5 ] =
2.775557561562891e-17 ; xx [ 25 ] = 0.5007696037761021 ; xx [ 26 ] = -
0.4991476653853508 ; xx [ 27 ] = 0.4993137046286701 ; xx [ 28 ] = -
0.500766648694053 ; xx [ 6 ] = 0.3597097066877266 ; xx [ 7 ] = -
2.837413455315395e-5 ; xx [ 8 ] = - 0.04711237575024396 ;
pm_math_Vector3_cross_ra ( xx + 51 , xx + 6 , xx + 29 ) ; xx [ 6 ] = xx [ 0 ]
+ xx [ 29 ] ; xx [ 7 ] = xx [ 1 ] + xx [ 30 ] ; xx [ 8 ] = xx [ 2 ] + xx [ 31
] ; pm_math_Quaternion_inverseXform_ra ( xx + 25 , xx + 6 , xx + 29 ) ;
pm_math_Quaternion_inverseXform_ra ( xx + 25 , xx + 51 , xx + 6 ) ; xx [ 10 ]
= 6.938893903907228e-18 ; xx [ 32 ] = xx [ 84 ] ; xx [ 33 ] = - xx [ 85 ] ;
xx [ 34 ] = xx [ 86 ] - xx [ 10 ] ; pm_math_Quaternion_inverseXform_ra ( xx +
25 , xx + 32 , xx + 37 ) ; pm_math_Vector3_cross_ra ( xx + 6 , xx + 37 , xx +
25 ) ; xx [ 6 ] = 2.090989099387106e-7 ; xx [ 7 ] = - 0.1993460582138941 ; xx
[ 8 ] = 0.01375874309272238 ; pm_math_Vector3_cross_ra ( xx + 70 , xx + 6 ,
xx + 28 ) ; xx [ 6 ] = xx [ 14 ] + xx [ 28 ] ; xx [ 7 ] = xx [ 9 ] + xx [ 29
] ; xx [ 8 ] = xx [ 11 ] + xx [ 30 ] ; pm_math_Quaternion_inverseXform_ra (
xx + 19 , xx + 6 , xx + 28 ) ; xx [ 6 ] = 5.551115123125783e-17 ; xx [ 7 ] =
xx [ 5 ] ; xx [ 8 ] = - xx [ 5 ] ; xx [ 9 ] = xx [ 6 ] ;
pm_math_Vector3_cross_ra ( xx + 7 , xx + 28 , xx + 19 ) ;
pm_math_Vector3_cross_ra ( xx + 7 , xx + 19 , xx + 32 ) ; xx [ 37 ] =
0.4993137046286703 ; xx [ 38 ] = - 0.5007666486940525 ; xx [ 39 ] = -
0.500769603776102 ; xx [ 40 ] = 0.4991476653853509 ; xx [ 7 ] = -
0.3574558726121369 ; xx [ 8 ] = 8.877096191845226e-5 ; xx [ 9 ] = -
0.04931757355835089 ; pm_math_Vector3_cross_ra ( xx + 51 , xx + 7 , xx + 44 )
; xx [ 7 ] = xx [ 0 ] + xx [ 44 ] ; xx [ 8 ] = xx [ 1 ] + xx [ 45 ] ; xx [ 9
] = xx [ 2 ] + xx [ 46 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 37 , xx
+ 7 , xx + 0 ) ; pm_math_Quaternion_inverseXform_ra ( xx + 37 , xx + 51 , xx
+ 7 ) ; xx [ 44 ] = xx [ 6 ] - xx [ 35 ] ; xx [ 45 ] = xx [ 36 ] ; xx [ 46 ]
= - ( xx [ 43 ] + xx [ 10 ] ) ; pm_math_Quaternion_inverseXform_ra ( xx + 37
, xx + 44 , xx + 10 ) ; pm_math_Vector3_cross_ra ( xx + 7 , xx + 10 , xx + 35
) ; output [ 0 ] = inputDot [ 0 ] ; output [ 1 ] = inputDot [ 1 ] ; output [
2 ] = inputDot [ 5 ] ; output [ 3 ] = inputDot [ 6 ] ; output [ 4 ] = input [
7 ] ; output [ 5 ] = input [ 8 ] ; output [ 6 ] = input [ 9 ] ; output [ 7 ]
= input [ 10 ] ; output [ 8 ] = input [ 11 ] ; output [ 9 ] = input [ 12 ] ;
output [ 10 ] = input [ 13 ] ; output [ 11 ] = input [ 14 ] ; output [ 12 ] =
xx [ 23 ] ; output [ 13 ] = xx [ 13 ] ; output [ 14 ] = xx [ 4 ] ; output [
15 ] = xx [ 15 ] ; output [ 16 ] = xx [ 18 ] - ( 1.110223024625157e-16 * xx [
17 ] + xx [ 3 ] * ( xx [ 3 ] * xx [ 18 ] - xx [ 5 ] * xx [ 16 ] ) ) * xx [ 24
] - xx [ 31 ] - xx [ 27 ] ; output [ 17 ] = xx [ 30 ] + ( xx [ 21 ] + xx [ 34
] ) * xx [ 24 ] - xx [ 2 ] - xx [ 37 ] ; return NULL ; }
