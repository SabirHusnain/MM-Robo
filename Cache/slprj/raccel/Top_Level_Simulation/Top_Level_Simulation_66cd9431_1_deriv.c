#include <math.h>
#include <string.h>
#include "pm_std.h"
#include "sm_std.h"
#include "ne_std.h"
#include "ne_dae.h"
#include "sm_ssci_run_time_errors.h"
#include "sm_RuntimeDerivedValuesBundle.h"
#include "Top_Level_Simulation_66cd9431_1_geometries.h"
PmfMessageId Top_Level_Simulation_66cd9431_1_compDerivs ( const
RuntimeDerivedValuesBundle * rtdv , const int * eqnEnableFlags , const double
* state , const int * modeVector , const double * input , const double *
inputDot , const double * inputDdot , const double * discreteState , double *
deriv , double * errorResult , NeuDiagnosticManager * neDiagMgr ) { const
double * rtdvd = rtdv -> mDoubles . mValues ; const int * rtdvi = rtdv ->
mInts . mValues ; boolean_T bb [ 1 ] ; int ii [ 1 ] ; double xx [ 317 ] ; (
void ) rtdvd ; ( void ) rtdvi ; ( void ) eqnEnableFlags ; ( void ) modeVector
; ( void ) inputDdot ; ( void ) discreteState ; ( void ) neDiagMgr ; xx [ 0 ]
= state [ 3 ] ; xx [ 1 ] = state [ 4 ] ; xx [ 2 ] = state [ 5 ] ; xx [ 3 ] =
state [ 6 ] ; xx [ 4 ] = state [ 10 ] ; xx [ 5 ] = state [ 11 ] ; xx [ 6 ] =
state [ 12 ] ; pm_math_Quaternion_compDeriv_ra ( xx + 0 , xx + 4 , xx + 7 ) ;
xx [ 0 ] = 2.0 ; xx [ 1 ] = 0.7071067811865476 ; xx [ 2 ] = xx [ 1 ] * state
[ 4 ] ; xx [ 3 ] = xx [ 1 ] * state [ 6 ] ; xx [ 11 ] = xx [ 2 ] - xx [ 3 ] ;
xx [ 12 ] = xx [ 2 ] + xx [ 3 ] ; xx [ 2 ] = xx [ 11 ] * xx [ 12 ] ; xx [ 3 ]
= xx [ 1 ] * state [ 5 ] ; xx [ 13 ] = xx [ 1 ] * state [ 3 ] ; xx [ 14 ] =
xx [ 3 ] - xx [ 13 ] ; xx [ 15 ] = xx [ 3 ] + xx [ 13 ] ; xx [ 3 ] = xx [ 14
] * xx [ 15 ] ; xx [ 13 ] = xx [ 0 ] * ( xx [ 2 ] - xx [ 3 ] ) ; xx [ 16 ] =
xx [ 11 ] * xx [ 15 ] ; xx [ 17 ] = xx [ 14 ] * xx [ 12 ] ; xx [ 18 ] = ( xx
[ 16 ] + xx [ 17 ] ) * xx [ 0 ] ; xx [ 19 ] = 1.0 ; xx [ 20 ] = xx [ 11 ] *
xx [ 11 ] ; xx [ 21 ] = xx [ 14 ] * xx [ 14 ] ; xx [ 22 ] = xx [ 19 ] - ( xx
[ 20 ] + xx [ 21 ] ) * xx [ 0 ] ; xx [ 23 ] = xx [ 13 ] ; xx [ 24 ] = xx [ 18
] ; xx [ 25 ] = xx [ 22 ] ; xx [ 26 ] = 0.01 ; xx [ 27 ] = xx [ 26 ] * xx [
13 ] ; xx [ 13 ] = xx [ 26 ] * xx [ 18 ] ; xx [ 18 ] = xx [ 26 ] * xx [ 22 ]
; xx [ 28 ] = xx [ 27 ] ; xx [ 29 ] = xx [ 13 ] ; xx [ 30 ] = xx [ 18 ] ; xx
[ 22 ] = xx [ 12 ] * xx [ 15 ] ; xx [ 31 ] = xx [ 11 ] * xx [ 14 ] ; xx [ 32
] = ( xx [ 22 ] + xx [ 31 ] ) * xx [ 0 ] ; xx [ 33 ] = xx [ 26 ] * xx [ 32 ]
; xx [ 34 ] = xx [ 12 ] * xx [ 12 ] ; xx [ 35 ] = xx [ 19 ] - ( xx [ 34 ] +
xx [ 20 ] ) * xx [ 0 ] ; xx [ 20 ] = xx [ 26 ] * xx [ 35 ] ; xx [ 36 ] = xx [
0 ] * ( xx [ 17 ] - xx [ 16 ] ) ; xx [ 16 ] = xx [ 26 ] * xx [ 36 ] ; xx [ 37
] = xx [ 33 ] ; xx [ 38 ] = xx [ 20 ] ; xx [ 39 ] = xx [ 16 ] ; xx [ 17 ] =
pm_math_Vector3_dot_ra ( xx + 23 , xx + 37 ) ; xx [ 40 ] = ( xx [ 21 ] + xx [
34 ] ) * xx [ 0 ] - xx [ 19 ] ; xx [ 21 ] = xx [ 40 ] * xx [ 26 ] ; xx [ 34 ]
= xx [ 0 ] * ( xx [ 22 ] - xx [ 31 ] ) ; xx [ 22 ] = xx [ 26 ] * xx [ 34 ] ;
xx [ 31 ] = ( xx [ 3 ] + xx [ 2 ] ) * xx [ 0 ] ; xx [ 2 ] = - ( xx [ 26 ] *
xx [ 31 ] ) ; xx [ 41 ] = xx [ 21 ] ; xx [ 42 ] = xx [ 22 ] ; xx [ 43 ] = xx
[ 2 ] ; xx [ 3 ] = pm_math_Vector3_dot_ra ( xx + 23 , xx + 41 ) ; xx [ 44 ] =
0.0 ; xx [ 45 ] = xx [ 32 ] ; xx [ 46 ] = xx [ 35 ] ; xx [ 47 ] = xx [ 36 ] ;
xx [ 32 ] = pm_math_Vector3_dot_ra ( xx + 45 , xx + 41 ) ; xx [ 48 ] = xx [
40 ] ; xx [ 49 ] = xx [ 34 ] ; xx [ 50 ] = - xx [ 31 ] ; xx [ 31 ] =
3.93289536e-4 ; xx [ 34 ] = 1.67225472e-4 ; xx [ 51 ] =
pm_math_Vector3_dot_ra ( xx + 23 , xx + 28 ) ; xx [ 52 ] = xx [ 17 ] ; xx [
53 ] = xx [ 3 ] ; xx [ 54 ] = xx [ 44 ] ; xx [ 55 ] = xx [ 44 ] ; xx [ 56 ] =
xx [ 44 ] ; xx [ 57 ] = xx [ 17 ] ; xx [ 58 ] = pm_math_Vector3_dot_ra ( xx +
45 , xx + 37 ) ; xx [ 59 ] = xx [ 32 ] ; xx [ 60 ] = xx [ 44 ] ; xx [ 61 ] =
xx [ 44 ] ; xx [ 62 ] = xx [ 44 ] ; xx [ 63 ] = xx [ 3 ] ; xx [ 64 ] = xx [
32 ] ; xx [ 65 ] = pm_math_Vector3_dot_ra ( xx + 48 , xx + 41 ) ; xx [ 66 ] =
xx [ 44 ] ; xx [ 67 ] = xx [ 44 ] ; xx [ 68 ] = xx [ 44 ] ; xx [ 69 ] = xx [
44 ] ; xx [ 70 ] = xx [ 44 ] ; xx [ 71 ] = xx [ 44 ] ; xx [ 72 ] = xx [ 31 ]
; xx [ 73 ] = xx [ 44 ] ; xx [ 74 ] = xx [ 44 ] ; xx [ 75 ] = xx [ 44 ] ; xx
[ 76 ] = xx [ 44 ] ; xx [ 77 ] = xx [ 44 ] ; xx [ 78 ] = xx [ 44 ] ; xx [ 79
] = xx [ 31 ] ; xx [ 80 ] = xx [ 44 ] ; xx [ 81 ] = xx [ 44 ] ; xx [ 82 ] =
xx [ 44 ] ; xx [ 83 ] = xx [ 44 ] ; xx [ 84 ] = xx [ 44 ] ; xx [ 85 ] = xx [
44 ] ; xx [ 86 ] = xx [ 34 ] ; ii [ 0 ] = factorSymmetricPosDef ( xx + 51 , 6
, xx + 35 ) ; if ( ii [ 0 ] != 0 ) { return sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:mechanism:mechanism:degenerateMassFoll" ,
 "'Top_Level_Simulation/Simulation Environment/Position Actuated Robot Environment/Environment_With_Physics/6-DOF Joint' has a degenerate mass distribution on its follower side."
, neDiagMgr ) ; } xx [ 3 ] = - xx [ 15 ] ; xx [ 17 ] = - xx [ 11 ] ; xx [ 28
] = - xx [ 14 ] ; xx [ 29 ] = - xx [ 12 ] ; xx [ 35 ] = xx [ 3 ] ; xx [ 36 ]
= xx [ 17 ] ; xx [ 37 ] = xx [ 28 ] ; xx [ 38 ] = xx [ 29 ] ; xx [ 30 ] = xx
[ 1 ] * xx [ 1 ] * state [ 9 ] ; xx [ 32 ] = xx [ 1 ] * xx [ 1 ] * state [ 7
] ; xx [ 39 ] = state [ 7 ] - xx [ 0 ] * ( xx [ 30 ] + xx [ 32 ] ) ; xx [ 40
] = state [ 8 ] ; xx [ 41 ] = state [ 9 ] - ( xx [ 30 ] - xx [ 32 ] ) * xx [
0 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 35 , xx + 39 , xx + 87 ) ;
pm_math_Vector3_cross_ra ( xx + 4 , xx + 87 , xx + 35 ) ; xx [ 38 ] = - xx [
87 ] ; xx [ 39 ] = - xx [ 88 ] ; xx [ 40 ] = - xx [ 89 ] ;
pm_math_Vector3_cross_ra ( xx + 4 , xx + 38 , xx + 41 ) ; xx [ 30 ] = 10.0 ;
xx [ 90 ] = - xx [ 19 ] ; xx [ 91 ] = xx [ 44 ] ; xx [ 92 ] = xx [ 44 ] ; xx
[ 93 ] = xx [ 44 ] ; xx [ 94 ] = xx [ 30 ] ; xx [ 95 ] = xx [ 30 ] ; xx [ 96
] = - 5.0e-4 ; xx [ 32 ] = xx [ 1 ] * xx [ 1 ] * state [ 2 ] ; xx [ 38 ] = xx
[ 1 ] * xx [ 1 ] * state [ 0 ] ; xx [ 1 ] = 0.18288 ; xx [ 97 ] = xx [ 3 ] ;
xx [ 98 ] = xx [ 17 ] ; xx [ 99 ] = xx [ 28 ] ; xx [ 100 ] = xx [ 29 ] ; xx [
101 ] = state [ 0 ] - xx [ 0 ] * ( xx [ 32 ] + xx [ 38 ] ) + 3.0 ; xx [ 102 ]
= state [ 1 ] + 7.0 ; xx [ 103 ] = state [ 2 ] - ( xx [ 32 ] - xx [ 38 ] ) *
xx [ 0 ] + xx [ 1 ] ; bb [ 0 ] =
sm_core_compiler_computeProximityInfoBrickCylinder (
Top_Level_Simulation_66cd9431_1_geometry_1 ( NULL ) ,
Top_Level_Simulation_66cd9431_1_geometry_0 ( NULL ) , ( pm_math_Transform3 *
) ( xx + 90 ) , ( pm_math_Transform3 * ) ( xx + 97 ) , xx + 3 , (
pm_math_Vector3 * ) ( xx + 38 ) , ( pm_math_Vector3 * ) ( xx + 104 ) , (
pm_math_Vector3 * ) ( xx + 107 ) , ( pm_math_Vector3 * ) ( xx + 110 ) ) ; xx
[ 113 ] = xx [ 19 ] ; xx [ 114 ] = xx [ 44 ] ; xx [ 115 ] = xx [ 44 ] ; xx [
116 ] = xx [ 44 ] ; xx [ 117 ] = xx [ 44 ] ; xx [ 118 ] = xx [ 44 ] ; xx [
119 ] = xx [ 44 ] ; xx [ 120 ] = state [ 10 ] ; xx [ 121 ] = state [ 11 ] ;
xx [ 122 ] = state [ 12 ] ; xx [ 123 ] = xx [ 87 ] ; xx [ 124 ] = xx [ 88 ] ;
xx [ 125 ] = xx [ 89 ] ; xx [ 17 ] = 1000.0 ; xx [ 28 ] = 100.0 ; xx [ 29 ] =
1.0e-4 ; xx [ 32 ] = 0.025 ; xx [ 87 ] = 0.07708420022544268 ; xx [ 88 ] =
9.526338830198333e-4 ; sm_core_compiler_computeContactWrenches ( 0 , 1 , bb [
0 ] , xx + 3 , ( const pm_math_Vector3 * ) ( xx + 38 ) , ( const
pm_math_Vector3 * ) ( xx + 104 ) , ( const pm_math_Vector3 * ) ( xx + 107 ) ,
( const pm_math_Vector3 * ) ( xx + 110 ) , ( const pm_math_Transform3 * ) (
xx + 90 ) , ( const pm_math_Transform3 * ) ( xx + 113 ) , ( const
pm_math_Transform3 * ) ( xx + 90 ) , ( const pm_math_Transform3 * ) ( xx + 97
) , NULL , ( const pm_math_SpatialVector * ) ( xx + 120 ) , 0 , 1 , xx [ 17 ]
, xx [ 28 ] , xx [ 29 ] , xx [ 32 ] , xx [ 87 ] , xx [ 88 ] , NULL , NULL ,
NULL , ( pm_math_SpatialVector * ) ( xx + 126 ) ) ; xx [ 104 ] = -
0.9998828595337176 ; xx [ 105 ] = 0.01527435878691359 ; xx [ 106 ] =
4.045007731647784e-4 ; xx [ 107 ] = 8.930584803650332e-4 ; xx [ 3 ] = 0.5 ;
xx [ 38 ] = xx [ 3 ] * input [ 4 ] ; xx [ 39 ] = 8.361885708047793e-4 ; xx [
40 ] = sin ( xx [ 38 ] ) ; xx [ 89 ] = 0.03054441659711467 ; xx [ 108 ] =
0.9995330606855463 ; xx [ 109 ] = cos ( xx [ 38 ] ) ; xx [ 110 ] = xx [ 39 ]
* xx [ 40 ] ; xx [ 111 ] = - ( xx [ 89 ] * xx [ 40 ] ) ; xx [ 112 ] = xx [
108 ] * xx [ 40 ] ; pm_math_Quaternion_compose_ra ( xx + 104 , xx + 109 , xx
+ 132 ) ; xx [ 104 ] = - 0.01543385393603001 ; xx [ 105 ] = 0.983150349850048
; xx [ 106 ] = - 3.253268334045489e-3 ; xx [ 107 ] = 0.1821170008196838 ; xx
[ 38 ] = xx [ 3 ] * input [ 7 ] ; xx [ 40 ] = 0.3589770026115218 ; xx [ 136 ]
= sin ( xx [ 38 ] ) ; xx [ 137 ] = 9.892548527733469e-4 ; xx [ 138 ] =
0.9333458806738709 ; xx [ 139 ] = cos ( xx [ 38 ] ) ; xx [ 140 ] = - ( xx [
40 ] * xx [ 136 ] ) ; xx [ 141 ] = xx [ 137 ] * xx [ 136 ] ; xx [ 142 ] = xx
[ 138 ] * xx [ 136 ] ; pm_math_Quaternion_compose_ra ( xx + 104 , xx + 139 ,
xx + 143 ) ; pm_math_Quaternion_compose_ra ( xx + 132 , xx + 143 , xx + 104 )
; xx [ 139 ] = - 0.5907570559882269 ; xx [ 140 ] = - 0.3892899547148866 ; xx
[ 141 ] = - 0.3861224701070733 ; xx [ 142 ] = - 0.5919196482941048 ; xx [ 38
] = xx [ 3 ] * input [ 8 ] ; xx [ 136 ] = 1.293953311379162e-4 ; xx [ 147 ] =
sin ( xx [ 38 ] ) ; xx [ 148 ] = 0.04294162101203882 ; xx [ 149 ] =
0.9990775747867163 ; xx [ 150 ] = cos ( xx [ 38 ] ) ; xx [ 151 ] = xx [ 136 ]
* xx [ 147 ] ; xx [ 152 ] = - ( xx [ 148 ] * xx [ 147 ] ) ; xx [ 153 ] = xx [
149 ] * xx [ 147 ] ; pm_math_Quaternion_compose_ra ( xx + 139 , xx + 150 , xx
+ 154 ) ; pm_math_Quaternion_compose_ra ( xx + 104 , xx + 154 , xx + 139 ) ;
xx [ 150 ] = - 0.06622677910401652 ; xx [ 151 ] = 0.9539399189003807 ; xx [
152 ] = 0.2139330882669903 ; xx [ 153 ] = 0.199612821738461 ; xx [ 38 ] = xx
[ 3 ] * input [ 9 ] ; xx [ 147 ] = 0.3925116432615775 ; xx [ 158 ] = sin ( xx
[ 38 ] ) ; xx [ 159 ] = 2.216869444640626e-3 ; xx [ 160 ] =
0.9197443641544979 ; xx [ 161 ] = cos ( xx [ 38 ] ) ; xx [ 162 ] = - ( xx [
147 ] * xx [ 158 ] ) ; xx [ 163 ] = xx [ 159 ] * xx [ 158 ] ; xx [ 164 ] = xx
[ 160 ] * xx [ 158 ] ; pm_math_Quaternion_compose_ra ( xx + 150 , xx + 161 ,
xx + 165 ) ; pm_math_Quaternion_compose_ra ( xx + 139 , xx + 165 , xx + 150 )
; xx [ 161 ] = 9.789968004908292e-4 ; xx [ 162 ] = 0.7494484480579273 ; xx [
163 ] = - 6.342871115585375e-4 ; xx [ 164 ] = - 0.6620616760912004 ; xx [ 38
] = xx [ 3 ] * input [ 10 ] ; xx [ 158 ] = 0.2760653533109761 ; xx [ 169 ] =
sin ( xx [ 38 ] ) ; xx [ 170 ] = 9.638253277342509e-5 ; xx [ 171 ] =
0.9611388616696827 ; xx [ 172 ] = cos ( xx [ 38 ] ) ; xx [ 173 ] = xx [ 158 ]
* xx [ 169 ] ; xx [ 174 ] = - ( xx [ 170 ] * xx [ 169 ] ) ; xx [ 175 ] = xx [
171 ] * xx [ 169 ] ; pm_math_Quaternion_compose_ra ( xx + 161 , xx + 172 , xx
+ 176 ) ; pm_math_Quaternion_compose_ra ( xx + 150 , xx + 176 , xx + 161 ) ;
xx [ 172 ] = - 0.3054946078288459 ; xx [ 173 ] = - 0.5320313095226306 ; xx [
174 ] = - 0.04142366843456229 ; xx [ 175 ] = 0.7886062452000734 ; xx [ 38 ] =
xx [ 3 ] * input [ 11 ] ; xx [ 169 ] = 9.161469241983772e-4 ; xx [ 180 ] =
sin ( xx [ 38 ] ) ; xx [ 181 ] = 0.433580475613033 ; xx [ 182 ] =
0.90111438332877 ; xx [ 183 ] = cos ( xx [ 38 ] ) ; xx [ 184 ] = - ( xx [ 169
] * xx [ 180 ] ) ; xx [ 185 ] = - ( xx [ 181 ] * xx [ 180 ] ) ; xx [ 186 ] =
xx [ 182 ] * xx [ 180 ] ; pm_math_Quaternion_compose_ra ( xx + 172 , xx + 183
, xx + 187 ) ; pm_math_Quaternion_compose_ra ( xx + 161 , xx + 187 , xx + 172
) ; xx [ 183 ] = - 0.5982360757232992 ; xx [ 184 ] = 0.3774792463138235 ; xx
[ 185 ] = - 0.3769690834319327 ; xx [ 186 ] = - 0.5979275260782232 ; xx [ 38
] = xx [ 3 ] * input [ 12 ] ; xx [ 180 ] = 3.074892580994291e-3 ; xx [ 191 ]
= sin ( xx [ 38 ] ) ; xx [ 192 ] = 1.687433921535961e-4 ; xx [ 193 ] =
0.9999952582693995 ; xx [ 194 ] = cos ( xx [ 38 ] ) ; xx [ 195 ] = - ( xx [
180 ] * xx [ 191 ] ) ; xx [ 196 ] = - ( xx [ 192 ] * xx [ 191 ] ) ; xx [ 197
] = xx [ 193 ] * xx [ 191 ] ; pm_math_Quaternion_compose_ra ( xx + 183 , xx +
194 , xx + 198 ) ; pm_math_Quaternion_compose_ra ( xx + 172 , xx + 198 , xx +
183 ) ; xx [ 194 ] = 0.4113003470668337 ; xx [ 195 ] = - 0.5751095009164958 ;
xx [ 196 ] = 0.5752712250837967 ; xx [ 197 ] = - 0.4112713265581123 ;
pm_math_Quaternion_compose_ra ( xx + 183 , xx + 194 , xx + 202 ) ; xx [ 38 ]
= 0.701091276903692 ; xx [ 191 ] = - 0.09203078003209308 ; xx [ 206 ] =
0.09203030447537697 ; xx [ 207 ] = 0.7010932748460824 ; xx [ 208 ] = xx [ 38
] ; xx [ 209 ] = xx [ 191 ] ; xx [ 210 ] = xx [ 206 ] ; xx [ 211 ] = xx [ 207
] ; pm_math_Quaternion_compose_ra ( xx + 202 , xx + 208 , xx + 212 ) ; xx [
216 ] = - 2.137267994443221e-7 ; xx [ 217 ] = 0.07388757764255981 ; xx [ 218
] = 8.842161779899979e-4 ; pm_math_Quaternion_xform_ra ( xx + 202 , xx + 216
, xx + 219 ) ; xx [ 202 ] = 0.2828615154169883 + 0.9999952592507191 * input [
14 ] ; xx [ 203 ] = 1.494812213461273e-5 - 1.633437862456066e-4 * input [ 14
] ; xx [ 204 ] = 3.074865020693984e-3 * input [ 14 ] - 0.2312964910558012 ;
pm_math_Quaternion_xform_ra ( xx + 183 , xx + 202 , xx + 222 ) ; xx [ 225 ] =
1.37482914105299e-3 ; xx [ 226 ] = - 1.083137629248106e-6 ; xx [ 227 ] =
0.1363766576540157 ; pm_math_Quaternion_xform_ra ( xx + 198 , xx + 225 , xx +
228 ) ; xx [ 225 ] = - ( 1.446398300596931e-5 + xx [ 228 ] ) ; xx [ 226 ] = -
( 0.1177861997136561 + xx [ 229 ] ) ; xx [ 227 ] = - ( 0.02355406698009013 +
xx [ 230 ] ) ; pm_math_Quaternion_xform_ra ( xx + 172 , xx + 225 , xx + 228 )
; xx [ 172 ] = 5.433876886669093e-5 ; xx [ 173 ] = 0.09516351305204601 ; xx [
174 ] = - 0.05049746937722007 ; pm_math_Quaternion_xform_ra ( xx + 187 , xx +
172 , xx + 231 ) ; xx [ 172 ] = - ( 0.08839742977844355 + xx [ 231 ] ) ; xx [
173 ] = 6.82383889298345e-5 - xx [ 232 ] ; xx [ 174 ] = - (
0.3530595820491463 + xx [ 233 ] ) ; pm_math_Quaternion_xform_ra ( xx + 161 ,
xx + 172 , xx + 231 ) ; xx [ 161 ] = - 0.03258458927695737 ; xx [ 162 ] = -
2.085412120766961e-5 ; xx [ 163 ] = 0.286766763821267 ;
pm_math_Quaternion_xform_ra ( xx + 176 , xx + 161 , xx + 234 ) ; xx [ 161 ] =
0.1619100124162477 - xx [ 234 ] ; xx [ 162 ] = 5.196394139830862e-5 - xx [
235 ] ; xx [ 163 ] = 0.02814027697500968 - xx [ 236 ] ;
pm_math_Quaternion_xform_ra ( xx + 150 , xx + 161 , xx + 234 ) ; xx [ 150 ] =
- 0.1134272676054903 ; xx [ 151 ] = 3.826993029653475e-5 ; xx [ 152 ] =
0.04109704867211692 ; pm_math_Quaternion_xform_ra ( xx + 165 , xx + 150 , xx
+ 237 ) ; xx [ 150 ] = - ( 8.809224580636627e-5 + xx [ 237 ] ) ; xx [ 151 ] =
- ( 0.4599502421099514 + xx [ 238 ] ) ; xx [ 152 ] = 0.07299421268079627 - xx
[ 239 ] ; pm_math_Quaternion_xform_ra ( xx + 139 , xx + 150 , xx + 237 ) ; xx
[ 139 ] = 6.387658930220863e-5 ; xx [ 140 ] = 0.3515404519103449 ; xx [ 141 ]
= 0.08365575332801509 ; pm_math_Quaternion_xform_ra ( xx + 154 , xx + 139 ,
xx + 240 ) ; xx [ 139 ] = - ( 0.06175894467427824 + xx [ 240 ] ) ; xx [ 140 ]
= 1.35108195633428e-4 - xx [ 241 ] ; xx [ 141 ] = - ( 0.1403140255723968 + xx
[ 242 ] ) ; pm_math_Quaternion_xform_ra ( xx + 104 , xx + 139 , xx + 240 ) ;
xx [ 104 ] = - 0.02382768371459375 ; xx [ 105 ] = 3.421823533909102e-5 ; xx [
106 ] = 0.1839029055638635 ; pm_math_Quaternion_xform_ra ( xx + 143 , xx +
104 , xx + 243 ) ; xx [ 104 ] = 2.946570268760443e-4 - xx [ 243 ] ; xx [ 105
] = - ( 0.1935621699833146 + xx [ 244 ] ) ; xx [ 106 ] = 0.3271620966035795 -
xx [ 245 ] ; pm_math_Quaternion_xform_ra ( xx + 132 , xx + 104 , xx + 243 ) ;
xx [ 246 ] = 1.74412095883791e-4 ; xx [ 247 ] = - 0.01351270086500039 ; xx [
248 ] = - 0.2034547061116934 ; pm_math_Quaternion_xform_ra ( xx + 132 , xx +
246 , xx + 249 ) ; xx [ 107 ] = xx [ 228 ] + xx [ 231 ] + xx [ 234 ] + xx [
237 ] + xx [ 240 ] + xx [ 243 ] + input [ 2 ] + xx [ 249 ] + xx [ 30 ] ; xx [
30 ] = xx [ 229 ] + xx [ 232 ] + xx [ 235 ] + xx [ 238 ] + xx [ 241 ] + xx [
244 ] + input [ 3 ] + xx [ 250 ] + 19.0 ; xx [ 132 ] = xx [ 230 ] + xx [ 233
] + xx [ 236 ] + xx [ 239 ] + xx [ 242 ] + xx [ 245 ] + xx [ 251 ] +
0.75253249 ; xx [ 228 ] = xx [ 212 ] ; xx [ 229 ] = xx [ 213 ] ; xx [ 230 ] =
xx [ 214 ] ; xx [ 231 ] = xx [ 215 ] ; xx [ 232 ] = xx [ 219 ] + xx [ 222 ] +
xx [ 107 ] ; xx [ 233 ] = xx [ 220 ] + xx [ 223 ] + xx [ 30 ] ; xx [ 234 ] =
xx [ 221 ] + xx [ 224 ] + xx [ 132 ] ; bb [ 0 ] =
sm_core_compiler_computeProximityInfoBrickCylinder (
Top_Level_Simulation_66cd9431_1_geometry_2 ( NULL ) ,
Top_Level_Simulation_66cd9431_1_geometry_0 ( NULL ) , ( pm_math_Transform3 *
) ( xx + 228 ) , ( pm_math_Transform3 * ) ( xx + 97 ) , xx + 133 , (
pm_math_Vector3 * ) ( xx + 212 ) , ( pm_math_Vector3 * ) ( xx + 219 ) , (
pm_math_Vector3 * ) ( xx + 222 ) , ( pm_math_Vector3 * ) ( xx + 235 ) ) ; xx
[ 238 ] = xx [ 38 ] ; xx [ 239 ] = xx [ 191 ] ; xx [ 240 ] = xx [ 206 ] ; xx
[ 241 ] = xx [ 207 ] ; xx [ 242 ] = xx [ 216 ] ; xx [ 243 ] = xx [ 217 ] ; xx
[ 244 ] = xx [ 218 ] ; xx [ 205 ] = xx [ 39 ] * inputDot [ 4 ] ; xx [ 206 ] =
- ( xx [ 89 ] * inputDot [ 4 ] ) ; xx [ 207 ] = xx [ 108 ] * inputDot [ 4 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 143 , xx + 205 , xx + 245 ) ; xx [
248 ] = xx [ 245 ] - xx [ 40 ] * inputDot [ 7 ] ; xx [ 249 ] = xx [ 246 ] +
xx [ 137 ] * inputDot [ 7 ] ; xx [ 250 ] = xx [ 247 ] + xx [ 138 ] * inputDot
[ 7 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 154 , xx + 248 , xx + 38 )
; xx [ 245 ] = xx [ 38 ] + xx [ 136 ] * inputDot [ 8 ] ; xx [ 246 ] = xx [ 39
] - xx [ 148 ] * inputDot [ 8 ] ; xx [ 247 ] = xx [ 40 ] + xx [ 149 ] *
inputDot [ 8 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 165 , xx + 245 ,
xx + 38 ) ; xx [ 134 ] = xx [ 38 ] - xx [ 147 ] * inputDot [ 9 ] ; xx [ 135 ]
= xx [ 39 ] + xx [ 159 ] * inputDot [ 9 ] ; xx [ 136 ] = xx [ 40 ] + xx [ 160
] * inputDot [ 9 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 176 , xx + 134
, xx + 38 ) ; xx [ 147 ] = xx [ 38 ] + xx [ 158 ] * inputDot [ 10 ] ; xx [
148 ] = xx [ 39 ] - xx [ 170 ] * inputDot [ 10 ] ; xx [ 149 ] = xx [ 40 ] +
xx [ 171 ] * inputDot [ 10 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 187
, xx + 147 , xx + 38 ) ; xx [ 158 ] = xx [ 38 ] - xx [ 169 ] * inputDot [ 11
] ; xx [ 159 ] = xx [ 39 ] - xx [ 181 ] * inputDot [ 11 ] ; xx [ 160 ] = xx [
40 ] + xx [ 182 ] * inputDot [ 11 ] ; pm_math_Quaternion_inverseXform_ra ( xx
+ 198 , xx + 158 , xx + 38 ) ; xx [ 89 ] = xx [ 38 ] - xx [ 180 ] * inputDot
[ 12 ] ; xx [ 108 ] = xx [ 39 ] - xx [ 192 ] * inputDot [ 12 ] ; xx [ 38 ] =
xx [ 40 ] + xx [ 193 ] * inputDot [ 12 ] ; xx [ 169 ] = xx [ 89 ] ; xx [ 170
] = xx [ 108 ] ; xx [ 171 ] = xx [ 38 ] ; pm_math_Quaternion_inverseXform_ra
( xx + 194 , xx + 169 , xx + 180 ) ; pm_math_Vector3_cross_ra ( xx + 169 , xx
+ 202 , xx + 191 ) ; pm_math_Vector3_cross_ra ( xx + 158 , xx + 225 , xx +
202 ) ; pm_math_Vector3_cross_ra ( xx + 147 , xx + 172 , xx + 158 ) ;
pm_math_Vector3_cross_ra ( xx + 134 , xx + 161 , xx + 147 ) ;
pm_math_Vector3_cross_ra ( xx + 245 , xx + 150 , xx + 134 ) ;
pm_math_Vector3_cross_ra ( xx + 248 , xx + 139 , xx + 150 ) ;
pm_math_Vector3_cross_ra ( xx + 205 , xx + 104 , xx + 137 ) ; xx [ 104 ] =
0.9999980776513503 * inputDot [ 2 ] - 1.773550754278646e-3 * inputDot [ 3 ] ;
xx [ 105 ] = 1.798264714034257e-3 * inputDot [ 2 ] + 0.9995317928203986 *
inputDot [ 3 ] ; xx [ 106 ] = 0.03054586156849783 * inputDot [ 3 ] -
7.816249882176138e-4 * inputDot [ 2 ] ; pm_math_Quaternion_inverseXform_ra (
xx + 109 , xx + 104 , xx + 140 ) ; xx [ 104 ] = xx [ 137 ] +
0.01972079655584117 * inputDot [ 4 ] + xx [ 140 ] ; xx [ 105 ] = xx [ 138 ] +
3.444571559463499e-4 * inputDot [ 4 ] + xx [ 141 ] ; xx [ 106 ] = xx [ 139 ]
+ xx [ 142 ] - 5.971850307766764e-6 * inputDot [ 4 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 143 , xx + 104 , xx + 109 ) ; xx [
104 ] = xx [ 150 ] + xx [ 109 ] - 1.499893927705008e-4 * inputDot [ 7 ] ; xx
[ 105 ] = xx [ 151 ] + xx [ 110 ] - 0.04377744336984951 * inputDot [ 7 ] ; xx
[ 106 ] = xx [ 152 ] + xx [ 111 ] - 1.128809218832778e-5 * inputDot [ 7 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 154 , xx + 104 , xx + 109 ) ; xx [
104 ] = xx [ 134 ] + xx [ 109 ] + 0.3548084957889019 * inputDot [ 8 ] ; xx [
105 ] = xx [ 135 ] + xx [ 110 ] - 5.299300402222736e-5 * inputDot [ 8 ] ; xx
[ 106 ] = xx [ 136 ] + xx [ 111 ] - 4.823065747266888e-5 * inputDot [ 8 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 165 , xx + 104 , xx + 109 ) ; xx [
104 ] = xx [ 147 ] + xx [ 109 ] - 5.590823875930131e-5 * inputDot [ 9 ] ; xx
[ 105 ] = xx [ 148 ] + xx [ 110 ] + 0.08819302001410009 * inputDot [ 9 ] ; xx
[ 106 ] = xx [ 149 ] + xx [ 111 ] - 2.364320505154881e-4 * inputDot [ 9 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 176 , xx + 104 , xx + 109 ) ; xx [
104 ] = xx [ 158 ] + xx [ 109 ] + 7.595600693671167e-6 * inputDot [ 10 ] ; xx
[ 105 ] = xx [ 159 ] + xx [ 110 ] + 0.1104846830177923 * inputDot [ 10 ] ; xx
[ 106 ] = xx [ 160 ] + xx [ 111 ] + 8.897685583080171e-6 * inputDot [ 10 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 187 , xx + 104 , xx + 109 ) ; xx [
104 ] = xx [ 202 ] + xx [ 109 ] + 0.06385849358946416 * inputDot [ 11 ] ; xx
[ 105 ] = xx [ 203 ] + xx [ 110 ] - 2.702344948410855e-6 * inputDot [ 11 ] ;
xx [ 106 ] = xx [ 204 ] + xx [ 111 ] + 6.362353052909755e-5 * inputDot [ 11 ]
; pm_math_Quaternion_inverseXform_ra ( xx + 198 , xx + 104 , xx + 109 ) ; xx
[ 39 ] = xx [ 109 ] + 2.192952732980704e-5 * inputDot [ 12 ] ; xx [ 40 ] = xx
[ 110 ] - 1.794166194824713e-3 * inputDot [ 12 ] ; xx [ 104 ] = xx [ 111 ] -
2.353238647532672e-7 * inputDot [ 12 ] ; xx [ 109 ] = xx [ 191 ] + xx [ 39 ]
; xx [ 110 ] = xx [ 192 ] + xx [ 40 ] ; xx [ 111 ] = xx [ 193 ] + xx [ 104 ]
; pm_math_Quaternion_inverseXform_ra ( xx + 194 , xx + 109 , xx + 134 ) ; xx
[ 105 ] = 6.599324214527274e-7 ; xx [ 106 ] = 0.3262839711907557 ; xx [ 109 ]
= 0.9452717969682342 ; xx [ 137 ] = xx [ 180 ] ; xx [ 138 ] = xx [ 181 ] ; xx
[ 139 ] = xx [ 182 ] ; xx [ 140 ] = xx [ 134 ] + xx [ 105 ] * inputDot [ 14 ]
; xx [ 141 ] = xx [ 135 ] - xx [ 106 ] * inputDot [ 14 ] ; xx [ 142 ] = xx [
136 ] + xx [ 109 ] * inputDot [ 14 ] ; xx [ 110 ] = 2000.0 ; xx [ 111 ] =
200.0 ; xx [ 112 ] = 0.92 ; xx [ 134 ] = 0.0433083178744532 ; xx [ 135 ] =
0.7201068497247313 ; sm_core_compiler_computeContactWrenches ( 0 , 1 , bb [ 0
] , xx + 133 , ( const pm_math_Vector3 * ) ( xx + 212 ) , ( const
pm_math_Vector3 * ) ( xx + 219 ) , ( const pm_math_Vector3 * ) ( xx + 222 ) ,
( const pm_math_Vector3 * ) ( xx + 235 ) , ( const pm_math_Transform3 * ) (
xx + 238 ) , ( const pm_math_Transform3 * ) ( xx + 113 ) , ( const
pm_math_Transform3 * ) ( xx + 228 ) , ( const pm_math_Transform3 * ) ( xx +
97 ) , ( const pm_math_SpatialVector * ) ( xx + 137 ) , ( const
pm_math_SpatialVector * ) ( xx + 120 ) , 0 , 1 , xx [ 110 ] , xx [ 111 ] , xx
[ 29 ] , xx [ 112 ] , xx [ 134 ] , xx [ 135 ] , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 143 ) , ( pm_math_SpatialVector * ) ( xx +
149 ) ) ; xx [ 155 ] = 0.4095980497005858 ; xx [ 156 ] = - 0.5764638023696377
; xx [ 157 ] = - 0.5764407932687463 ; xx [ 158 ] = 0.4094324536412745 ;
pm_math_Quaternion_compose_ra ( xx + 183 , xx + 155 , xx + 159 ) ;
pm_math_Quaternion_compose_ra ( xx + 159 , xx + 208 , xx + 163 ) ;
pm_math_Quaternion_xform_ra ( xx + 159 , xx + 216 , xx + 172 ) ; xx [ 159 ] =
- ( 0.2788414501321849 + 0.9999952592507189 * input [ 13 ] ) ; xx [ 160 ] =
1.07424646342255e-4 + 1.633437862453846e-4 * input [ 13 ] ; xx [ 161 ] = - (
0.2330236599222386 + 3.07486502069354e-3 * input [ 13 ] ) ;
pm_math_Quaternion_xform_ra ( xx + 183 , xx + 159 , xx + 175 ) ; xx [ 187 ] =
xx [ 163 ] ; xx [ 188 ] = xx [ 164 ] ; xx [ 189 ] = xx [ 165 ] ; xx [ 190 ] =
xx [ 166 ] ; xx [ 191 ] = xx [ 172 ] + xx [ 175 ] + xx [ 107 ] ; xx [ 192 ] =
xx [ 173 ] + xx [ 176 ] + xx [ 30 ] ; xx [ 193 ] = xx [ 174 ] + xx [ 177 ] +
xx [ 132 ] ; bb [ 0 ] = sm_core_compiler_computeProximityInfoBrickCylinder (
Top_Level_Simulation_66cd9431_1_geometry_2 ( NULL ) ,
Top_Level_Simulation_66cd9431_1_geometry_0 ( NULL ) , ( pm_math_Transform3 *
) ( xx + 187 ) , ( pm_math_Transform3 * ) ( xx + 97 ) , xx + 133 , (
pm_math_Vector3 * ) ( xx + 162 ) , ( pm_math_Vector3 * ) ( xx + 165 ) , (
pm_math_Vector3 * ) ( xx + 172 ) , ( pm_math_Vector3 * ) ( xx + 175 ) ) ;
pm_math_Quaternion_inverseXform_ra ( xx + 155 , xx + 169 , xx + 178 ) ;
pm_math_Vector3_cross_ra ( xx + 169 , xx + 159 , xx + 194 ) ; xx [ 159 ] = xx
[ 194 ] + xx [ 39 ] ; xx [ 160 ] = xx [ 195 ] + xx [ 40 ] ; xx [ 161 ] = xx [
196 ] + xx [ 104 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 155 , xx + 159
, xx + 168 ) ; xx [ 155 ] = xx [ 178 ] ; xx [ 156 ] = xx [ 179 ] ; xx [ 157 ]
= xx [ 180 ] ; xx [ 158 ] = xx [ 168 ] + xx [ 105 ] * inputDot [ 13 ] ; xx [
159 ] = xx [ 169 ] - xx [ 106 ] * inputDot [ 13 ] ; xx [ 160 ] = xx [ 170 ] +
xx [ 109 ] * inputDot [ 13 ] ; sm_core_compiler_computeContactWrenches ( 0 ,
1 , bb [ 0 ] , xx + 133 , ( const pm_math_Vector3 * ) ( xx + 162 ) , ( const
pm_math_Vector3 * ) ( xx + 165 ) , ( const pm_math_Vector3 * ) ( xx + 172 ) ,
( const pm_math_Vector3 * ) ( xx + 175 ) , ( const pm_math_Transform3 * ) (
xx + 238 ) , ( const pm_math_Transform3 * ) ( xx + 113 ) , ( const
pm_math_Transform3 * ) ( xx + 187 ) , ( const pm_math_Transform3 * ) ( xx +
97 ) , ( const pm_math_SpatialVector * ) ( xx + 155 ) , ( const
pm_math_SpatialVector * ) ( xx + 120 ) , 0 , 1 , xx [ 110 ] , xx [ 111 ] , xx
[ 29 ] , xx [ 112 ] , xx [ 134 ] , xx [ 135 ] , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 194 ) , ( pm_math_SpatialVector * ) ( xx +
200 ) ) ; xx [ 105 ] = 0.999998811242088 ; xx [ 106 ] = 8.449716268362357e-5
; xx [ 109 ] = - 1.537441228067385e-3 ; xx [ 133 ] = - 8.154208065465675e-5 ;
xx [ 161 ] = xx [ 105 ] ; xx [ 162 ] = xx [ 106 ] ; xx [ 163 ] = xx [ 109 ] ;
xx [ 164 ] = xx [ 133 ] ; pm_math_Quaternion_compose_ra ( xx + 183 , xx + 161
, xx + 165 ) ; xx [ 136 ] = 1.949941674936807e-3 ; xx [ 161 ] =
3.047778272228485e-5 ; xx [ 162 ] = - 0.05065745547640037 ; xx [ 169 ] = xx [
136 ] ; xx [ 170 ] = xx [ 161 ] ; xx [ 171 ] = xx [ 162 ] ;
pm_math_Quaternion_xform_ra ( xx + 183 , xx + 169 , xx + 172 ) ; xx [ 175 ] =
xx [ 165 ] ; xx [ 176 ] = xx [ 166 ] ; xx [ 177 ] = xx [ 167 ] ; xx [ 178 ] =
xx [ 168 ] ; xx [ 179 ] = xx [ 172 ] + xx [ 107 ] ; xx [ 180 ] = xx [ 173 ] +
xx [ 30 ] ; xx [ 181 ] = xx [ 174 ] + xx [ 132 ] ; bb [ 0 ] =
sm_core_compiler_computeProximityInfoBrickCylinder (
Top_Level_Simulation_66cd9431_1_geometry_2 ( NULL ) ,
Top_Level_Simulation_66cd9431_1_geometry_0 ( NULL ) , ( pm_math_Transform3 *
) ( xx + 175 ) , ( pm_math_Transform3 * ) ( xx + 97 ) , xx + 30 , (
pm_math_Vector3 * ) ( xx + 163 ) , ( pm_math_Vector3 * ) ( xx + 166 ) , (
pm_math_Vector3 * ) ( xx + 169 ) , ( pm_math_Vector3 * ) ( xx + 172 ) ) ; xx
[ 206 ] = xx [ 105 ] ; xx [ 207 ] = xx [ 106 ] ; xx [ 208 ] = xx [ 109 ] ; xx
[ 209 ] = xx [ 133 ] ; xx [ 210 ] = xx [ 136 ] ; xx [ 211 ] = xx [ 161 ] ; xx
[ 212 ] = xx [ 162 ] ; xx [ 213 ] = xx [ 89 ] ; xx [ 214 ] = xx [ 108 ] ; xx
[ 215 ] = xx [ 38 ] ; xx [ 216 ] = xx [ 39 ] ; xx [ 217 ] = xx [ 40 ] ; xx [
218 ] = xx [ 104 ] ; xx [ 38 ] = 4.0e4 ; xx [ 39 ] = 4000.0 ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , bb [ 0 ] , xx + 30 , (
const pm_math_Vector3 * ) ( xx + 163 ) , ( const pm_math_Vector3 * ) ( xx +
166 ) , ( const pm_math_Vector3 * ) ( xx + 169 ) , ( const pm_math_Vector3 *
) ( xx + 172 ) , ( const pm_math_Transform3 * ) ( xx + 206 ) , ( const
pm_math_Transform3 * ) ( xx + 113 ) , ( const pm_math_Transform3 * ) ( xx +
175 ) , ( const pm_math_Transform3 * ) ( xx + 97 ) , ( const
pm_math_SpatialVector * ) ( xx + 213 ) , ( const pm_math_SpatialVector * ) (
xx + 120 ) , 0 , 1 , xx [ 38 ] , xx [ 39 ] , xx [ 29 ] , xx [ 112 ] , xx [
134 ] , xx [ 135 ] , NULL , NULL , ( pm_math_SpatialVector * ) ( xx + 104 ) ,
( pm_math_SpatialVector * ) ( xx + 219 ) ) ; xx [ 97 ] = ( xx [ 35 ] + xx [
41 ] ) * xx [ 26 ] - ( xx [ 129 ] + xx [ 152 ] + xx [ 203 ] + xx [ 222 ] ) ;
xx [ 98 ] = ( xx [ 36 ] + xx [ 42 ] ) * xx [ 26 ] - ( xx [ 130 ] + xx [ 153 ]
+ xx [ 204 ] + xx [ 223 ] ) ; xx [ 99 ] = ( xx [ 37 ] + xx [ 43 ] ) * xx [ 26
] - ( xx [ 131 ] + xx [ 154 ] + xx [ 205 ] + xx [ 224 ] ) ; xx [ 35 ] = xx [
31 ] * state [ 10 ] ; xx [ 36 ] = xx [ 31 ] * state [ 11 ] ; xx [ 37 ] = xx [
34 ] * state [ 12 ] ; pm_math_Vector3_cross_ra ( xx + 4 , xx + 35 , xx + 40 )
; xx [ 100 ] = - pm_math_Vector3_dot_ra ( xx + 23 , xx + 97 ) ; xx [ 101 ] =
- pm_math_Vector3_dot_ra ( xx + 45 , xx + 97 ) ; xx [ 102 ] = -
pm_math_Vector3_dot_ra ( xx + 48 , xx + 97 ) ; xx [ 103 ] = xx [ 219 ] - ( xx
[ 40 ] - xx [ 126 ] - xx [ 149 ] - xx [ 200 ] ) ; xx [ 104 ] = xx [ 220 ] - (
xx [ 41 ] - xx [ 127 ] - xx [ 150 ] - xx [ 201 ] ) ; xx [ 105 ] = xx [ 221 ]
- ( xx [ 42 ] - xx [ 128 ] - xx [ 151 ] - xx [ 202 ] ) ; solveSymmetricPosDef
( xx + 51 , xx + 100 , 6 , 1 , xx + 45 , xx + 120 ) ; xx [ 245 ] = xx [ 44 ]
; xx [ 246 ] = xx [ 44 ] ; xx [ 247 ] = xx [ 44 ] ; xx [ 248 ] = xx [ 31 ] ;
xx [ 249 ] = xx [ 44 ] ; xx [ 250 ] = xx [ 44 ] ; xx [ 251 ] = xx [ 44 ] ; xx
[ 252 ] = xx [ 44 ] ; xx [ 253 ] = xx [ 44 ] ; xx [ 254 ] = xx [ 44 ] ; xx [
255 ] = xx [ 31 ] ; xx [ 256 ] = xx [ 44 ] ; xx [ 257 ] = xx [ 44 ] ; xx [
258 ] = xx [ 44 ] ; xx [ 259 ] = xx [ 44 ] ; xx [ 260 ] = xx [ 44 ] ; xx [
261 ] = xx [ 44 ] ; xx [ 262 ] = xx [ 34 ] ; xx [ 263 ] = xx [ 27 ] ; xx [
264 ] = xx [ 33 ] ; xx [ 265 ] = xx [ 21 ] ; xx [ 266 ] = xx [ 44 ] ; xx [
267 ] = xx [ 44 ] ; xx [ 268 ] = xx [ 44 ] ; xx [ 269 ] = xx [ 13 ] ; xx [
270 ] = xx [ 20 ] ; xx [ 271 ] = xx [ 22 ] ; xx [ 272 ] = xx [ 44 ] ; xx [
273 ] = xx [ 44 ] ; xx [ 274 ] = xx [ 44 ] ; xx [ 275 ] = xx [ 18 ] ; xx [
276 ] = xx [ 16 ] ; xx [ 277 ] = xx [ 2 ] ; xx [ 278 ] = xx [ 44 ] ; xx [ 279
] = xx [ 44 ] ; xx [ 280 ] = xx [ 44 ] ; solveSymmetricPosDef ( xx + 51 , xx
+ 245 , 6 , 6 , xx + 281 , xx + 20 ) ; xx [ 4 ] = xx [ 299 ] ; xx [ 5 ] = xx
[ 305 ] ; xx [ 6 ] = xx [ 311 ] ; xx [ 2 ] = 9.806649999999999 ; xx [ 13 ] =
xx [ 11 ] * xx [ 2 ] ; xx [ 16 ] = xx [ 14 ] * xx [ 2 ] ; xx [ 20 ] = xx [ 0
] * ( xx [ 13 ] * xx [ 12 ] - xx [ 16 ] * xx [ 15 ] ) ; xx [ 21 ] = ( xx [ 13
] * xx [ 15 ] + xx [ 16 ] * xx [ 12 ] ) * xx [ 0 ] ; xx [ 22 ] = xx [ 2 ] - (
xx [ 11 ] * xx [ 13 ] + xx [ 14 ] * xx [ 16 ] ) * xx [ 0 ] ; xx [ 11 ] = xx [
300 ] ; xx [ 12 ] = xx [ 306 ] ; xx [ 13 ] = xx [ 312 ] ; xx [ 14 ] = xx [
301 ] ; xx [ 15 ] = xx [ 307 ] ; xx [ 16 ] = xx [ 313 ] ; xx [ 23 ] = xx [
302 ] ; xx [ 24 ] = xx [ 308 ] ; xx [ 25 ] = xx [ 314 ] ; xx [ 35 ] = xx [
303 ] ; xx [ 36 ] = xx [ 309 ] ; xx [ 37 ] = xx [ 315 ] ; xx [ 40 ] = xx [
304 ] ; xx [ 41 ] = xx [ 310 ] ; xx [ 42 ] = xx [ 316 ] ; xx [ 51 ] = state [
16 ] ; xx [ 52 ] = state [ 17 ] ; xx [ 53 ] = state [ 18 ] ; xx [ 54 ] =
state [ 19 ] ; xx [ 55 ] = state [ 23 ] ; xx [ 56 ] = state [ 24 ] ; xx [ 57
] = state [ 25 ] ; pm_math_Quaternion_compDeriv_ra ( xx + 51 , xx + 55 , xx +
58 ) ; xx [ 51 ] = xx [ 3 ] ; xx [ 52 ] = xx [ 3 ] ; xx [ 53 ] = - xx [ 3 ] ;
xx [ 54 ] = xx [ 3 ] ; xx [ 62 ] = - state [ 16 ] ; xx [ 63 ] = - state [ 17
] ; xx [ 64 ] = - state [ 18 ] ; xx [ 65 ] = - state [ 19 ] ;
pm_math_Quaternion_compose_ra ( xx + 51 , xx + 62 , xx + 66 ) ; xx [ 3 ] = xx
[ 67 ] * xx [ 69 ] ; xx [ 18 ] = xx [ 66 ] * xx [ 68 ] ; xx [ 27 ] = xx [ 0 ]
* ( xx [ 3 ] - xx [ 18 ] ) ; xx [ 30 ] = xx [ 66 ] * xx [ 67 ] ; xx [ 33 ] =
xx [ 68 ] * xx [ 69 ] ; xx [ 43 ] = ( xx [ 30 ] + xx [ 33 ] ) * xx [ 0 ] ; xx
[ 62 ] = xx [ 67 ] * xx [ 67 ] ; xx [ 63 ] = xx [ 68 ] * xx [ 68 ] ; xx [ 64
] = xx [ 19 ] - ( xx [ 62 ] + xx [ 63 ] ) * xx [ 0 ] ; xx [ 70 ] = xx [ 27 ]
; xx [ 71 ] = xx [ 43 ] ; xx [ 72 ] = xx [ 64 ] ; xx [ 65 ] = xx [ 26 ] * xx
[ 27 ] ; xx [ 27 ] = xx [ 26 ] * xx [ 43 ] ; xx [ 43 ] = xx [ 26 ] * xx [ 64
] ; xx [ 73 ] = xx [ 65 ] ; xx [ 74 ] = xx [ 27 ] ; xx [ 75 ] = xx [ 43 ] ;
xx [ 64 ] = xx [ 69 ] * xx [ 69 ] ; xx [ 76 ] = ( xx [ 63 ] + xx [ 64 ] ) *
xx [ 0 ] - xx [ 19 ] ; xx [ 63 ] = xx [ 76 ] * xx [ 26 ] ; xx [ 77 ] = xx [
66 ] * xx [ 69 ] ; xx [ 78 ] = xx [ 67 ] * xx [ 68 ] ; xx [ 79 ] = xx [ 0 ] *
( xx [ 77 ] - xx [ 78 ] ) ; xx [ 80 ] = xx [ 26 ] * xx [ 79 ] ; xx [ 81 ] = (
xx [ 18 ] + xx [ 3 ] ) * xx [ 0 ] ; xx [ 3 ] = - ( xx [ 26 ] * xx [ 81 ] ) ;
xx [ 82 ] = xx [ 63 ] ; xx [ 83 ] = xx [ 80 ] ; xx [ 84 ] = xx [ 3 ] ; xx [
18 ] = pm_math_Vector3_dot_ra ( xx + 70 , xx + 82 ) ; xx [ 85 ] = ( xx [ 77 ]
+ xx [ 78 ] ) * xx [ 0 ] ; xx [ 77 ] = - ( xx [ 26 ] * xx [ 85 ] ) ; xx [ 78
] = ( xx [ 64 ] + xx [ 62 ] ) * xx [ 0 ] - xx [ 19 ] ; xx [ 19 ] = xx [ 78 ]
* xx [ 26 ] ; xx [ 62 ] = xx [ 0 ] * ( xx [ 30 ] - xx [ 33 ] ) ; xx [ 30 ] =
xx [ 26 ] * xx [ 62 ] ; xx [ 97 ] = xx [ 77 ] ; xx [ 98 ] = xx [ 19 ] ; xx [
99 ] = xx [ 30 ] ; xx [ 33 ] = pm_math_Vector3_dot_ra ( xx + 70 , xx + 97 ) ;
xx [ 100 ] = xx [ 76 ] ; xx [ 101 ] = xx [ 79 ] ; xx [ 102 ] = - xx [ 81 ] ;
xx [ 64 ] = pm_math_Vector3_dot_ra ( xx + 100 , xx + 97 ) ; xx [ 103 ] = - xx
[ 85 ] ; xx [ 104 ] = xx [ 78 ] ; xx [ 105 ] = xx [ 62 ] ; xx [ 245 ] =
pm_math_Vector3_dot_ra ( xx + 70 , xx + 73 ) ; xx [ 246 ] = xx [ 18 ] ; xx [
247 ] = xx [ 33 ] ; xx [ 248 ] = xx [ 44 ] ; xx [ 249 ] = xx [ 44 ] ; xx [
250 ] = xx [ 44 ] ; xx [ 251 ] = xx [ 18 ] ; xx [ 252 ] =
pm_math_Vector3_dot_ra ( xx + 100 , xx + 82 ) ; xx [ 253 ] = xx [ 64 ] ; xx [
254 ] = xx [ 44 ] ; xx [ 255 ] = xx [ 44 ] ; xx [ 256 ] = xx [ 44 ] ; xx [
257 ] = xx [ 33 ] ; xx [ 258 ] = xx [ 64 ] ; xx [ 259 ] =
pm_math_Vector3_dot_ra ( xx + 103 , xx + 97 ) ; xx [ 260 ] = xx [ 44 ] ; xx [
261 ] = xx [ 44 ] ; xx [ 262 ] = xx [ 44 ] ; xx [ 263 ] = xx [ 44 ] ; xx [
264 ] = xx [ 44 ] ; xx [ 265 ] = xx [ 44 ] ; xx [ 266 ] = xx [ 31 ] ; xx [
267 ] = xx [ 44 ] ; xx [ 268 ] = xx [ 44 ] ; xx [ 269 ] = xx [ 44 ] ; xx [
270 ] = xx [ 44 ] ; xx [ 271 ] = xx [ 44 ] ; xx [ 272 ] = xx [ 44 ] ; xx [
273 ] = xx [ 31 ] ; xx [ 274 ] = xx [ 44 ] ; xx [ 275 ] = xx [ 44 ] ; xx [
276 ] = xx [ 44 ] ; xx [ 277 ] = xx [ 44 ] ; xx [ 278 ] = xx [ 44 ] ; xx [
279 ] = xx [ 44 ] ; xx [ 280 ] = xx [ 34 ] ; ii [ 0 ] = factorSymmetricPosDef
( xx + 245 , 6 , xx + 81 ) ; if ( ii [ 0 ] != 0 ) { return
sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:mechanism:mechanism:degenerateMassFoll" ,
 "'Top_Level_Simulation/Simulation Environment/Position Actuated Robot Environment/Environment_With_Physics/6-DOF Joint1' has a degenerate mass distribution on its follower side."
, neDiagMgr ) ; } xx [ 73 ] = state [ 20 ] ; xx [ 74 ] = state [ 21 ] ; xx [
75 ] = state [ 22 ] ; pm_math_Quaternion_xform_ra ( xx + 51 , xx + 73 , xx +
81 ) ; pm_math_Quaternion_inverseXform_ra ( xx + 66 , xx + 81 , xx + 73 ) ;
pm_math_Vector3_cross_ra ( xx + 55 , xx + 73 , xx + 81 ) ; xx [ 84 ] = - xx [
73 ] ; xx [ 85 ] = - xx [ 74 ] ; xx [ 86 ] = - xx [ 75 ] ;
pm_math_Vector3_cross_ra ( xx + 55 , xx + 84 , xx + 97 ) ; xx [ 84 ] = state
[ 13 ] ; xx [ 85 ] = state [ 14 ] ; xx [ 86 ] = state [ 15 ] ;
pm_math_Quaternion_xform_ra ( xx + 51 , xx + 84 , xx + 106 ) ; xx [ 120 ] =
xx [ 66 ] ; xx [ 121 ] = xx [ 67 ] ; xx [ 122 ] = xx [ 68 ] ; xx [ 123 ] = xx
[ 69 ] ; xx [ 124 ] = xx [ 106 ] + 15.0 ; xx [ 125 ] = xx [ 107 ] + 13.0 ; xx
[ 126 ] = xx [ 108 ] + xx [ 1 ] ; bb [ 0 ] =
sm_core_compiler_computeProximityInfoBrickCylinder (
Top_Level_Simulation_66cd9431_1_geometry_2 ( NULL ) ,
Top_Level_Simulation_66cd9431_1_geometry_0 ( NULL ) , ( pm_math_Transform3 *
) ( xx + 187 ) , ( pm_math_Transform3 * ) ( xx + 120 ) , xx + 1 , (
pm_math_Vector3 * ) ( xx + 51 ) , ( pm_math_Vector3 * ) ( xx + 84 ) , (
pm_math_Vector3 * ) ( xx + 106 ) , ( pm_math_Vector3 * ) ( xx + 127 ) ) ; xx
[ 143 ] = state [ 23 ] ; xx [ 144 ] = state [ 24 ] ; xx [ 145 ] = state [ 25
] ; xx [ 146 ] = xx [ 73 ] ; xx [ 147 ] = xx [ 74 ] ; xx [ 148 ] = xx [ 75 ]
; sm_core_compiler_computeContactWrenches ( 0 , 1 , bb [ 0 ] , xx + 1 , (
const pm_math_Vector3 * ) ( xx + 51 ) , ( const pm_math_Vector3 * ) ( xx + 84
) , ( const pm_math_Vector3 * ) ( xx + 106 ) , ( const pm_math_Vector3 * ) (
xx + 127 ) , ( const pm_math_Transform3 * ) ( xx + 238 ) , ( const
pm_math_Transform3 * ) ( xx + 113 ) , ( const pm_math_Transform3 * ) ( xx +
187 ) , ( const pm_math_Transform3 * ) ( xx + 120 ) , ( const
pm_math_SpatialVector * ) ( xx + 155 ) , ( const pm_math_SpatialVector * ) (
xx + 143 ) , 0 , 1 , xx [ 110 ] , xx [ 111 ] , xx [ 29 ] , xx [ 112 ] , xx [
134 ] , xx [ 135 ] , NULL , NULL , ( pm_math_SpatialVector * ) ( xx + 149 ) ,
( pm_math_SpatialVector * ) ( xx + 161 ) ) ; bb [ 0 ] =
sm_core_compiler_computeProximityInfoBrickCylinder (
Top_Level_Simulation_66cd9431_1_geometry_2 ( NULL ) ,
Top_Level_Simulation_66cd9431_1_geometry_0 ( NULL ) , ( pm_math_Transform3 *
) ( xx + 228 ) , ( pm_math_Transform3 * ) ( xx + 120 ) , xx + 1 , (
pm_math_Vector3 * ) ( xx + 51 ) , ( pm_math_Vector3 * ) ( xx + 73 ) , (
pm_math_Vector3 * ) ( xx + 84 ) , ( pm_math_Vector3 * ) ( xx + 106 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , bb [ 0 ] , xx + 1 , ( const
pm_math_Vector3 * ) ( xx + 51 ) , ( const pm_math_Vector3 * ) ( xx + 73 ) , (
const pm_math_Vector3 * ) ( xx + 84 ) , ( const pm_math_Vector3 * ) ( xx +
106 ) , ( const pm_math_Transform3 * ) ( xx + 238 ) , ( const
pm_math_Transform3 * ) ( xx + 113 ) , ( const pm_math_Transform3 * ) ( xx +
228 ) , ( const pm_math_Transform3 * ) ( xx + 120 ) , ( const
pm_math_SpatialVector * ) ( xx + 137 ) , ( const pm_math_SpatialVector * ) (
xx + 143 ) , 0 , 1 , xx [ 110 ] , xx [ 111 ] , xx [ 29 ] , xx [ 112 ] , xx [
134 ] , xx [ 135 ] , NULL , NULL , ( pm_math_SpatialVector * ) ( xx + 127 ) ,
( pm_math_SpatialVector * ) ( xx + 155 ) ) ; bb [ 0 ] =
sm_core_compiler_computeProximityInfoBrickCylinder (
Top_Level_Simulation_66cd9431_1_geometry_1 ( NULL ) ,
Top_Level_Simulation_66cd9431_1_geometry_0 ( NULL ) , ( pm_math_Transform3 *
) ( xx + 90 ) , ( pm_math_Transform3 * ) ( xx + 120 ) , xx + 1 , (
pm_math_Vector3 * ) ( xx + 51 ) , ( pm_math_Vector3 * ) ( xx + 73 ) , (
pm_math_Vector3 * ) ( xx + 84 ) , ( pm_math_Vector3 * ) ( xx + 106 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , bb [ 0 ] , xx + 1 , ( const
pm_math_Vector3 * ) ( xx + 51 ) , ( const pm_math_Vector3 * ) ( xx + 73 ) , (
const pm_math_Vector3 * ) ( xx + 84 ) , ( const pm_math_Vector3 * ) ( xx +
106 ) , ( const pm_math_Transform3 * ) ( xx + 90 ) , ( const
pm_math_Transform3 * ) ( xx + 113 ) , ( const pm_math_Transform3 * ) ( xx +
90 ) , ( const pm_math_Transform3 * ) ( xx + 120 ) , NULL , ( const
pm_math_SpatialVector * ) ( xx + 143 ) , 0 , 1 , xx [ 17 ] , xx [ 28 ] , xx [
29 ] , xx [ 32 ] , xx [ 87 ] , xx [ 88 ] , NULL , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 136 ) ) ; bb [ 0 ] =
sm_core_compiler_computeProximityInfoBrickCylinder (
Top_Level_Simulation_66cd9431_1_geometry_2 ( NULL ) ,
Top_Level_Simulation_66cd9431_1_geometry_0 ( NULL ) , ( pm_math_Transform3 *
) ( xx + 175 ) , ( pm_math_Transform3 * ) ( xx + 120 ) , xx + 1 , (
pm_math_Vector3 * ) ( xx + 51 ) , ( pm_math_Vector3 * ) ( xx + 73 ) , (
pm_math_Vector3 * ) ( xx + 84 ) , ( pm_math_Vector3 * ) ( xx + 87 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , bb [ 0 ] , xx + 1 , ( const
pm_math_Vector3 * ) ( xx + 51 ) , ( const pm_math_Vector3 * ) ( xx + 73 ) , (
const pm_math_Vector3 * ) ( xx + 84 ) , ( const pm_math_Vector3 * ) ( xx + 87
) , ( const pm_math_Transform3 * ) ( xx + 206 ) , ( const pm_math_Transform3
* ) ( xx + 113 ) , ( const pm_math_Transform3 * ) ( xx + 175 ) , ( const
pm_math_Transform3 * ) ( xx + 120 ) , ( const pm_math_SpatialVector * ) ( xx
+ 213 ) , ( const pm_math_SpatialVector * ) ( xx + 143 ) , 0 , 1 , xx [ 38 ]
, xx [ 39 ] , xx [ 29 ] , xx [ 112 ] , xx [ 134 ] , xx [ 135 ] , NULL , NULL
, ( pm_math_SpatialVector * ) ( xx + 90 ) , ( pm_math_SpatialVector * ) ( xx
+ 106 ) ) ; xx [ 51 ] = ( xx [ 81 ] + xx [ 97 ] ) * xx [ 26 ] - ( xx [ 164 ]
+ xx [ 158 ] + xx [ 139 ] + xx [ 109 ] ) ; xx [ 52 ] = ( xx [ 82 ] + xx [ 98
] ) * xx [ 26 ] - ( xx [ 165 ] + xx [ 159 ] + xx [ 140 ] + xx [ 110 ] ) ; xx
[ 53 ] = ( xx [ 83 ] + xx [ 99 ] ) * xx [ 26 ] - ( xx [ 166 ] + xx [ 160 ] +
xx [ 141 ] + xx [ 111 ] ) ; xx [ 73 ] = xx [ 31 ] * state [ 23 ] ; xx [ 74 ]
= xx [ 31 ] * state [ 24 ] ; xx [ 75 ] = xx [ 34 ] * state [ 25 ] ;
pm_math_Vector3_cross_ra ( xx + 55 , xx + 73 , xx + 81 ) ; xx [ 84 ] = -
pm_math_Vector3_dot_ra ( xx + 70 , xx + 51 ) ; xx [ 85 ] = -
pm_math_Vector3_dot_ra ( xx + 100 , xx + 51 ) ; xx [ 86 ] = -
pm_math_Vector3_dot_ra ( xx + 103 , xx + 51 ) ; xx [ 87 ] = xx [ 106 ] - ( xx
[ 81 ] - xx [ 161 ] - xx [ 155 ] - xx [ 136 ] ) ; xx [ 88 ] = xx [ 107 ] - (
xx [ 82 ] - xx [ 162 ] - xx [ 156 ] - xx [ 137 ] ) ; xx [ 89 ] = xx [ 108 ] -
( xx [ 83 ] - xx [ 163 ] - xx [ 157 ] - xx [ 138 ] ) ; solveSymmetricPosDef (
xx + 245 , xx + 84 , 6 , 1 , xx + 51 , xx + 70 ) ; xx [ 81 ] = xx [ 44 ] ; xx
[ 82 ] = xx [ 44 ] ; xx [ 83 ] = xx [ 44 ] ; xx [ 84 ] = xx [ 31 ] ; xx [ 85
] = xx [ 44 ] ; xx [ 86 ] = xx [ 44 ] ; xx [ 87 ] = xx [ 44 ] ; xx [ 88 ] =
xx [ 44 ] ; xx [ 89 ] = xx [ 44 ] ; xx [ 90 ] = xx [ 44 ] ; xx [ 91 ] = xx [
31 ] ; xx [ 92 ] = xx [ 44 ] ; xx [ 93 ] = xx [ 44 ] ; xx [ 94 ] = xx [ 44 ]
; xx [ 95 ] = xx [ 44 ] ; xx [ 96 ] = xx [ 44 ] ; xx [ 97 ] = xx [ 44 ] ; xx
[ 98 ] = xx [ 34 ] ; xx [ 99 ] = xx [ 65 ] ; xx [ 100 ] = xx [ 63 ] ; xx [
101 ] = xx [ 77 ] ; xx [ 102 ] = xx [ 44 ] ; xx [ 103 ] = xx [ 44 ] ; xx [
104 ] = xx [ 44 ] ; xx [ 105 ] = xx [ 27 ] ; xx [ 106 ] = xx [ 80 ] ; xx [
107 ] = xx [ 19 ] ; xx [ 108 ] = xx [ 44 ] ; xx [ 109 ] = xx [ 44 ] ; xx [
110 ] = xx [ 44 ] ; xx [ 111 ] = xx [ 43 ] ; xx [ 112 ] = xx [ 3 ] ; xx [ 113
] = xx [ 30 ] ; xx [ 114 ] = xx [ 44 ] ; xx [ 115 ] = xx [ 44 ] ; xx [ 116 ]
= xx [ 44 ] ; solveSymmetricPosDef ( xx + 245 , xx + 81 , 6 , 6 , xx + 117 ,
xx + 26 ) ; xx [ 17 ] = xx [ 135 ] ; xx [ 18 ] = xx [ 141 ] ; xx [ 19 ] = xx
[ 147 ] ; xx [ 1 ] = xx [ 2 ] * xx [ 67 ] ; xx [ 3 ] = xx [ 2 ] * xx [ 68 ] ;
xx [ 26 ] = xx [ 0 ] * ( xx [ 69 ] * xx [ 1 ] - xx [ 66 ] * xx [ 3 ] ) ; xx [
27 ] = ( xx [ 66 ] * xx [ 1 ] + xx [ 69 ] * xx [ 3 ] ) * xx [ 0 ] ; xx [ 28 ]
= xx [ 2 ] - ( xx [ 67 ] * xx [ 1 ] + xx [ 68 ] * xx [ 3 ] ) * xx [ 0 ] ; xx
[ 0 ] = xx [ 136 ] ; xx [ 1 ] = xx [ 142 ] ; xx [ 2 ] = xx [ 148 ] ; xx [ 29
] = xx [ 137 ] ; xx [ 30 ] = xx [ 143 ] ; xx [ 31 ] = xx [ 149 ] ; xx [ 32 ]
= xx [ 138 ] ; xx [ 33 ] = xx [ 144 ] ; xx [ 34 ] = xx [ 150 ] ; xx [ 62 ] =
xx [ 139 ] ; xx [ 63 ] = xx [ 145 ] ; xx [ 64 ] = xx [ 151 ] ; xx [ 65 ] = xx
[ 140 ] ; xx [ 66 ] = xx [ 146 ] ; xx [ 67 ] = xx [ 152 ] ; deriv [ 0 ] =
state [ 7 ] ; deriv [ 1 ] = state [ 8 ] ; deriv [ 2 ] = state [ 9 ] ; deriv [
3 ] = xx [ 7 ] ; deriv [ 4 ] = xx [ 8 ] ; deriv [ 5 ] = xx [ 9 ] ; deriv [ 6
] = xx [ 10 ] ; deriv [ 7 ] = xx [ 45 ] - pm_math_Vector3_dot_ra ( xx + 4 ,
xx + 20 ) ; deriv [ 8 ] = xx [ 46 ] - pm_math_Vector3_dot_ra ( xx + 11 , xx +
20 ) ; deriv [ 9 ] = xx [ 47 ] - pm_math_Vector3_dot_ra ( xx + 14 , xx + 20 )
; deriv [ 10 ] = xx [ 48 ] - pm_math_Vector3_dot_ra ( xx + 23 , xx + 20 ) ;
deriv [ 11 ] = xx [ 49 ] - pm_math_Vector3_dot_ra ( xx + 35 , xx + 20 ) ;
deriv [ 12 ] = xx [ 50 ] - pm_math_Vector3_dot_ra ( xx + 40 , xx + 20 ) ;
deriv [ 13 ] = state [ 20 ] ; deriv [ 14 ] = state [ 21 ] ; deriv [ 15 ] =
state [ 22 ] ; deriv [ 16 ] = xx [ 58 ] ; deriv [ 17 ] = xx [ 59 ] ; deriv [
18 ] = xx [ 60 ] ; deriv [ 19 ] = xx [ 61 ] ; deriv [ 20 ] = xx [ 51 ] -
pm_math_Vector3_dot_ra ( xx + 17 , xx + 26 ) ; deriv [ 21 ] = xx [ 52 ] -
pm_math_Vector3_dot_ra ( xx + 0 , xx + 26 ) ; deriv [ 22 ] = xx [ 53 ] -
pm_math_Vector3_dot_ra ( xx + 29 , xx + 26 ) ; deriv [ 23 ] = xx [ 54 ] -
pm_math_Vector3_dot_ra ( xx + 32 , xx + 26 ) ; deriv [ 24 ] = xx [ 55 ] -
pm_math_Vector3_dot_ra ( xx + 62 , xx + 26 ) ; deriv [ 25 ] = xx [ 56 ] -
pm_math_Vector3_dot_ra ( xx + 65 , xx + 26 ) ; errorResult [ 0 ] = xx [ 44 ]
; return NULL ; } PmfMessageId
Top_Level_Simulation_66cd9431_1_numJacPerturbLoBounds ( const
RuntimeDerivedValuesBundle * rtdv , const int * eqnEnableFlags , const double
* state , const int * modeVector , const double * input , const double *
inputDot , const double * inputDdot , const double * discreteState , double *
bounds , double * errorResult , NeuDiagnosticManager * neDiagMgr ) { const
double * rtdvd = rtdv -> mDoubles . mValues ; const int * rtdvi = rtdv ->
mInts . mValues ; double xx [ 2 ] ; ( void ) rtdvd ; ( void ) rtdvi ; ( void
) eqnEnableFlags ; ( void ) state ; ( void ) modeVector ; ( void ) input ; (
void ) inputDot ; ( void ) inputDdot ; ( void ) discreteState ; ( void )
neDiagMgr ; xx [ 0 ] = 1.0e-9 ; xx [ 1 ] = 1.0e-8 ; bounds [ 0 ] = xx [ 0 ] ;
bounds [ 1 ] = xx [ 0 ] ; bounds [ 2 ] = xx [ 0 ] ; bounds [ 3 ] = xx [ 1 ] ;
bounds [ 4 ] = xx [ 1 ] ; bounds [ 5 ] = xx [ 1 ] ; bounds [ 6 ] = xx [ 1 ] ;
bounds [ 7 ] = xx [ 0 ] ; bounds [ 8 ] = xx [ 0 ] ; bounds [ 9 ] = xx [ 0 ] ;
bounds [ 10 ] = xx [ 1 ] ; bounds [ 11 ] = xx [ 1 ] ; bounds [ 12 ] = xx [ 1
] ; bounds [ 13 ] = xx [ 0 ] ; bounds [ 14 ] = xx [ 0 ] ; bounds [ 15 ] = xx
[ 0 ] ; bounds [ 16 ] = xx [ 1 ] ; bounds [ 17 ] = xx [ 1 ] ; bounds [ 18 ] =
xx [ 1 ] ; bounds [ 19 ] = xx [ 1 ] ; bounds [ 20 ] = xx [ 0 ] ; bounds [ 21
] = xx [ 0 ] ; bounds [ 22 ] = xx [ 0 ] ; bounds [ 23 ] = xx [ 1 ] ; bounds [
24 ] = xx [ 1 ] ; bounds [ 25 ] = xx [ 1 ] ; errorResult [ 0 ] = 0.0 ; return
NULL ; } PmfMessageId Top_Level_Simulation_66cd9431_1_numJacPerturbHiBounds (
const RuntimeDerivedValuesBundle * rtdv , const int * eqnEnableFlags , const
double * state , const int * modeVector , const double * input , const double
* inputDot , const double * inputDdot , const double * discreteState , double
* bounds , double * errorResult , NeuDiagnosticManager * neDiagMgr ) { const
double * rtdvd = rtdv -> mDoubles . mValues ; const int * rtdvi = rtdv ->
mInts . mValues ; double xx [ 2 ] ; ( void ) rtdvd ; ( void ) rtdvi ; ( void
) eqnEnableFlags ; ( void ) state ; ( void ) modeVector ; ( void ) input ; (
void ) inputDot ; ( void ) inputDdot ; ( void ) discreteState ; ( void )
neDiagMgr ; xx [ 0 ] = + pmf_get_inf ( ) ; xx [ 1 ] = 0.1 ; bounds [ 0 ] = xx
[ 0 ] ; bounds [ 1 ] = xx [ 0 ] ; bounds [ 2 ] = xx [ 0 ] ; bounds [ 3 ] = xx
[ 1 ] ; bounds [ 4 ] = xx [ 1 ] ; bounds [ 5 ] = xx [ 1 ] ; bounds [ 6 ] = xx
[ 1 ] ; bounds [ 7 ] = xx [ 0 ] ; bounds [ 8 ] = xx [ 0 ] ; bounds [ 9 ] = xx
[ 0 ] ; bounds [ 10 ] = xx [ 0 ] ; bounds [ 11 ] = xx [ 0 ] ; bounds [ 12 ] =
xx [ 0 ] ; bounds [ 13 ] = xx [ 0 ] ; bounds [ 14 ] = xx [ 0 ] ; bounds [ 15
] = xx [ 0 ] ; bounds [ 16 ] = xx [ 1 ] ; bounds [ 17 ] = xx [ 1 ] ; bounds [
18 ] = xx [ 1 ] ; bounds [ 19 ] = xx [ 1 ] ; bounds [ 20 ] = xx [ 0 ] ;
bounds [ 21 ] = xx [ 0 ] ; bounds [ 22 ] = xx [ 0 ] ; bounds [ 23 ] = xx [ 0
] ; bounds [ 24 ] = xx [ 0 ] ; bounds [ 25 ] = xx [ 0 ] ; errorResult [ 0 ] =
0.0 ; return NULL ; }
