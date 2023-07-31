#include <math.h>
#include <string.h>
#include "pm_std.h"
#include "sm_std.h"
#include "ne_std.h"
#include "ne_dae.h"
#include "sm_ssci_run_time_errors.h"
#include "sm_RuntimeDerivedValuesBundle.h"
#include "Top_Level_Simulation_66cd9431_1_geometries.h"
PmfMessageId Top_Level_Simulation_66cd9431_1_recordLog ( const
RuntimeDerivedValuesBundle * rtdv , const int * eqnEnableFlags , const double
* state , const int * modeVector , const double * input , const double *
inputDot , const double * inputDdot , double * logVector , double *
errorResult , NeuDiagnosticManager * neDiagMgr ) { const double * rtdvd =
rtdv -> mDoubles . mValues ; const int * rtdvi = rtdv -> mInts . mValues ;
boolean_T bb [ 1 ] ; int ii [ 1 ] ; double xx [ 314 ] ; ( void ) rtdvd ; (
void ) rtdvi ; ( void ) eqnEnableFlags ; ( void ) modeVector ; ( void ) input
; ( void ) inputDot ; ( void ) neDiagMgr ; xx [ 0 ] = 57.29577951308232 ; xx
[ 1 ] = 2.0 ; xx [ 2 ] = 0.7071067811865476 ; xx [ 3 ] = xx [ 2 ] * state [
34 ] ; xx [ 4 ] = xx [ 2 ] * state [ 36 ] ; xx [ 5 ] = xx [ 3 ] - xx [ 4 ] ;
xx [ 6 ] = xx [ 3 ] + xx [ 4 ] ; xx [ 3 ] = xx [ 5 ] * xx [ 6 ] ; xx [ 4 ] =
xx [ 2 ] * state [ 35 ] ; xx [ 7 ] = xx [ 2 ] * state [ 33 ] ; xx [ 8 ] = xx
[ 4 ] - xx [ 7 ] ; xx [ 9 ] = xx [ 4 ] + xx [ 7 ] ; xx [ 4 ] = xx [ 8 ] * xx
[ 9 ] ; xx [ 7 ] = xx [ 1 ] * ( xx [ 3 ] - xx [ 4 ] ) ; xx [ 10 ] = xx [ 5 ]
* xx [ 9 ] ; xx [ 11 ] = xx [ 8 ] * xx [ 6 ] ; xx [ 12 ] = ( xx [ 10 ] + xx [
11 ] ) * xx [ 1 ] ; xx [ 13 ] = 1.0 ; xx [ 14 ] = xx [ 5 ] * xx [ 5 ] ; xx [
15 ] = xx [ 8 ] * xx [ 8 ] ; xx [ 16 ] = xx [ 13 ] - ( xx [ 14 ] + xx [ 15 ]
) * xx [ 1 ] ; xx [ 17 ] = xx [ 7 ] ; xx [ 18 ] = xx [ 12 ] ; xx [ 19 ] = xx
[ 16 ] ; xx [ 20 ] = 0.01 ; xx [ 21 ] = xx [ 20 ] * xx [ 7 ] ; xx [ 7 ] = xx
[ 20 ] * xx [ 12 ] ; xx [ 12 ] = xx [ 20 ] * xx [ 16 ] ; xx [ 22 ] = xx [ 21
] ; xx [ 23 ] = xx [ 7 ] ; xx [ 24 ] = xx [ 12 ] ; xx [ 16 ] = xx [ 6 ] * xx
[ 9 ] ; xx [ 25 ] = xx [ 5 ] * xx [ 8 ] ; xx [ 26 ] = ( xx [ 16 ] + xx [ 25 ]
) * xx [ 1 ] ; xx [ 27 ] = xx [ 20 ] * xx [ 26 ] ; xx [ 28 ] = xx [ 6 ] * xx
[ 6 ] ; xx [ 29 ] = xx [ 13 ] - ( xx [ 28 ] + xx [ 14 ] ) * xx [ 1 ] ; xx [
14 ] = xx [ 20 ] * xx [ 29 ] ; xx [ 30 ] = xx [ 1 ] * ( xx [ 11 ] - xx [ 10 ]
) ; xx [ 10 ] = xx [ 20 ] * xx [ 30 ] ; xx [ 31 ] = xx [ 27 ] ; xx [ 32 ] =
xx [ 14 ] ; xx [ 33 ] = xx [ 10 ] ; xx [ 11 ] = pm_math_Vector3_dot_ra ( xx +
17 , xx + 31 ) ; xx [ 34 ] = ( xx [ 15 ] + xx [ 28 ] ) * xx [ 1 ] - xx [ 13 ]
; xx [ 15 ] = xx [ 34 ] * xx [ 20 ] ; xx [ 28 ] = xx [ 1 ] * ( xx [ 16 ] - xx
[ 25 ] ) ; xx [ 16 ] = xx [ 20 ] * xx [ 28 ] ; xx [ 25 ] = ( xx [ 4 ] + xx [
3 ] ) * xx [ 1 ] ; xx [ 3 ] = - ( xx [ 20 ] * xx [ 25 ] ) ; xx [ 35 ] = xx [
15 ] ; xx [ 36 ] = xx [ 16 ] ; xx [ 37 ] = xx [ 3 ] ; xx [ 4 ] =
pm_math_Vector3_dot_ra ( xx + 17 , xx + 35 ) ; xx [ 38 ] = 0.0 ; xx [ 39 ] =
xx [ 26 ] ; xx [ 40 ] = xx [ 29 ] ; xx [ 41 ] = xx [ 30 ] ; xx [ 26 ] =
pm_math_Vector3_dot_ra ( xx + 39 , xx + 35 ) ; xx [ 42 ] = xx [ 34 ] ; xx [
43 ] = xx [ 28 ] ; xx [ 44 ] = - xx [ 25 ] ; xx [ 25 ] = 3.93289536e-4 ; xx [
28 ] = 1.67225472e-4 ; xx [ 45 ] = pm_math_Vector3_dot_ra ( xx + 17 , xx + 22
) ; xx [ 46 ] = xx [ 11 ] ; xx [ 47 ] = xx [ 4 ] ; xx [ 48 ] = xx [ 38 ] ; xx
[ 49 ] = xx [ 38 ] ; xx [ 50 ] = xx [ 38 ] ; xx [ 51 ] = xx [ 11 ] ; xx [ 52
] = pm_math_Vector3_dot_ra ( xx + 39 , xx + 31 ) ; xx [ 53 ] = xx [ 26 ] ; xx
[ 54 ] = xx [ 38 ] ; xx [ 55 ] = xx [ 38 ] ; xx [ 56 ] = xx [ 38 ] ; xx [ 57
] = xx [ 4 ] ; xx [ 58 ] = xx [ 26 ] ; xx [ 59 ] = pm_math_Vector3_dot_ra (
xx + 42 , xx + 35 ) ; xx [ 60 ] = xx [ 38 ] ; xx [ 61 ] = xx [ 38 ] ; xx [ 62
] = xx [ 38 ] ; xx [ 63 ] = xx [ 38 ] ; xx [ 64 ] = xx [ 38 ] ; xx [ 65 ] =
xx [ 38 ] ; xx [ 66 ] = xx [ 25 ] ; xx [ 67 ] = xx [ 38 ] ; xx [ 68 ] = xx [
38 ] ; xx [ 69 ] = xx [ 38 ] ; xx [ 70 ] = xx [ 38 ] ; xx [ 71 ] = xx [ 38 ]
; xx [ 72 ] = xx [ 38 ] ; xx [ 73 ] = xx [ 25 ] ; xx [ 74 ] = xx [ 38 ] ; xx
[ 75 ] = xx [ 38 ] ; xx [ 76 ] = xx [ 38 ] ; xx [ 77 ] = xx [ 38 ] ; xx [ 78
] = xx [ 38 ] ; xx [ 79 ] = xx [ 38 ] ; xx [ 80 ] = xx [ 28 ] ; ii [ 0 ] =
factorSymmetricPosDef ( xx + 45 , 6 , xx + 29 ) ; if ( ii [ 0 ] != 0 ) {
return sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:mechanism:mechanism:degenerateMassFoll" ,
 "'Top_Level_Simulation/Simulation Environment/Position Actuated Robot Environment/Environment_With_Physics/6-DOF Joint' has a degenerate mass distribution on its follower side."
, neDiagMgr ) ; } xx [ 22 ] = state [ 40 ] ; xx [ 23 ] = state [ 41 ] ; xx [
24 ] = state [ 42 ] ; xx [ 4 ] = - xx [ 9 ] ; xx [ 11 ] = - xx [ 5 ] ; xx [
26 ] = - xx [ 8 ] ; xx [ 29 ] = - xx [ 6 ] ; xx [ 30 ] = xx [ 4 ] ; xx [ 31 ]
= xx [ 11 ] ; xx [ 32 ] = xx [ 26 ] ; xx [ 33 ] = xx [ 29 ] ; xx [ 34 ] = xx
[ 2 ] * xx [ 2 ] * state [ 39 ] ; xx [ 35 ] = xx [ 2 ] * xx [ 2 ] * state [
37 ] ; xx [ 81 ] = state [ 37 ] - xx [ 1 ] * ( xx [ 34 ] + xx [ 35 ] ) ; xx [
82 ] = state [ 38 ] ; xx [ 83 ] = state [ 39 ] - ( xx [ 34 ] - xx [ 35 ] ) *
xx [ 1 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 30 , xx + 81 , xx + 34 )
; pm_math_Vector3_cross_ra ( xx + 22 , xx + 34 , xx + 30 ) ; xx [ 81 ] = - xx
[ 34 ] ; xx [ 82 ] = - xx [ 35 ] ; xx [ 83 ] = - xx [ 36 ] ;
pm_math_Vector3_cross_ra ( xx + 22 , xx + 81 , xx + 84 ) ; xx [ 33 ] = 10.0 ;
xx [ 87 ] = - xx [ 13 ] ; xx [ 88 ] = xx [ 38 ] ; xx [ 89 ] = xx [ 38 ] ; xx
[ 90 ] = xx [ 38 ] ; xx [ 91 ] = xx [ 33 ] ; xx [ 92 ] = xx [ 33 ] ; xx [ 93
] = - 5.0e-4 ; xx [ 37 ] = xx [ 2 ] * xx [ 2 ] * state [ 32 ] ; xx [ 81 ] =
xx [ 2 ] * xx [ 2 ] * state [ 30 ] ; xx [ 2 ] = 0.18288 ; xx [ 94 ] = xx [ 4
] ; xx [ 95 ] = xx [ 11 ] ; xx [ 96 ] = xx [ 26 ] ; xx [ 97 ] = xx [ 29 ] ;
xx [ 98 ] = state [ 30 ] - xx [ 1 ] * ( xx [ 37 ] + xx [ 81 ] ) + 3.0 ; xx [
99 ] = state [ 31 ] + 7.0 ; xx [ 100 ] = state [ 32 ] - ( xx [ 37 ] - xx [ 81
] ) * xx [ 1 ] + xx [ 2 ] ; bb [ 0 ] =
sm_core_compiler_computeProximityInfoBrickCylinder (
Top_Level_Simulation_66cd9431_1_geometry_1 ( NULL ) ,
Top_Level_Simulation_66cd9431_1_geometry_0 ( NULL ) , ( pm_math_Transform3 *
) ( xx + 87 ) , ( pm_math_Transform3 * ) ( xx + 94 ) , xx + 4 , (
pm_math_Vector3 * ) ( xx + 81 ) , ( pm_math_Vector3 * ) ( xx + 101 ) , (
pm_math_Vector3 * ) ( xx + 104 ) , ( pm_math_Vector3 * ) ( xx + 107 ) ) ; xx
[ 110 ] = xx [ 13 ] ; xx [ 111 ] = xx [ 38 ] ; xx [ 112 ] = xx [ 38 ] ; xx [
113 ] = xx [ 38 ] ; xx [ 114 ] = xx [ 38 ] ; xx [ 115 ] = xx [ 38 ] ; xx [
116 ] = xx [ 38 ] ; xx [ 117 ] = state [ 40 ] ; xx [ 118 ] = state [ 41 ] ;
xx [ 119 ] = state [ 42 ] ; xx [ 120 ] = xx [ 34 ] ; xx [ 121 ] = xx [ 35 ] ;
xx [ 122 ] = xx [ 36 ] ; xx [ 11 ] = 1000.0 ; xx [ 26 ] = 100.0 ; xx [ 29 ] =
1.0e-4 ; xx [ 34 ] = 0.025 ; xx [ 35 ] = 0.07708420022544268 ; xx [ 36 ] =
9.526338830198333e-4 ; sm_core_compiler_computeContactWrenches ( 0 , 1 , bb [
0 ] , xx + 4 , ( const pm_math_Vector3 * ) ( xx + 81 ) , ( const
pm_math_Vector3 * ) ( xx + 101 ) , ( const pm_math_Vector3 * ) ( xx + 104 ) ,
( const pm_math_Vector3 * ) ( xx + 107 ) , ( const pm_math_Transform3 * ) (
xx + 87 ) , ( const pm_math_Transform3 * ) ( xx + 110 ) , ( const
pm_math_Transform3 * ) ( xx + 87 ) , ( const pm_math_Transform3 * ) ( xx + 94
) , NULL , ( const pm_math_SpatialVector * ) ( xx + 117 ) , 0 , 1 , xx [ 11 ]
, xx [ 26 ] , xx [ 29 ] , xx [ 34 ] , xx [ 35 ] , xx [ 36 ] , NULL , NULL ,
NULL , ( pm_math_SpatialVector * ) ( xx + 123 ) ) ; xx [ 101 ] = -
0.9998828595337176 ; xx [ 102 ] = 0.01527435878691359 ; xx [ 103 ] =
4.045007731647784e-4 ; xx [ 104 ] = 8.930584803650332e-4 ; xx [ 4 ] = 0.5 ;
xx [ 37 ] = xx [ 4 ] * state [ 2 ] ; xx [ 81 ] = 8.361885708047793e-4 ; xx [
82 ] = sin ( xx [ 37 ] ) ; xx [ 83 ] = 0.03054441659711467 ; xx [ 105 ] =
0.9995330606855463 ; xx [ 106 ] = cos ( xx [ 37 ] ) ; xx [ 107 ] = xx [ 81 ]
* xx [ 82 ] ; xx [ 108 ] = - ( xx [ 83 ] * xx [ 82 ] ) ; xx [ 109 ] = xx [
105 ] * xx [ 82 ] ; pm_math_Quaternion_compose_ra ( xx + 101 , xx + 106 , xx
+ 129 ) ; xx [ 101 ] = - 0.01543385393603001 ; xx [ 102 ] = 0.983150349850048
; xx [ 103 ] = - 3.253268334045489e-3 ; xx [ 104 ] = 0.1821170008196838 ; xx
[ 37 ] = xx [ 4 ] * state [ 14 ] ; xx [ 82 ] = 0.3589770026115218 ; xx [ 133
] = sin ( xx [ 37 ] ) ; xx [ 134 ] = 9.892548527733469e-4 ; xx [ 135 ] =
0.9333458806738709 ; xx [ 136 ] = cos ( xx [ 37 ] ) ; xx [ 137 ] = - ( xx [
82 ] * xx [ 133 ] ) ; xx [ 138 ] = xx [ 134 ] * xx [ 133 ] ; xx [ 139 ] = xx
[ 135 ] * xx [ 133 ] ; pm_math_Quaternion_compose_ra ( xx + 101 , xx + 136 ,
xx + 140 ) ; pm_math_Quaternion_compose_ra ( xx + 129 , xx + 140 , xx + 101 )
; xx [ 136 ] = - 0.5907570559882269 ; xx [ 137 ] = - 0.3892899547148866 ; xx
[ 138 ] = - 0.3861224701070733 ; xx [ 139 ] = - 0.5919196482941048 ; xx [ 37
] = xx [ 4 ] * state [ 16 ] ; xx [ 133 ] = 1.293953311379162e-4 ; xx [ 144 ]
= sin ( xx [ 37 ] ) ; xx [ 145 ] = 0.04294162101203882 ; xx [ 146 ] =
0.9990775747867163 ; xx [ 147 ] = cos ( xx [ 37 ] ) ; xx [ 148 ] = xx [ 133 ]
* xx [ 144 ] ; xx [ 149 ] = - ( xx [ 145 ] * xx [ 144 ] ) ; xx [ 150 ] = xx [
146 ] * xx [ 144 ] ; pm_math_Quaternion_compose_ra ( xx + 136 , xx + 147 , xx
+ 151 ) ; pm_math_Quaternion_compose_ra ( xx + 101 , xx + 151 , xx + 136 ) ;
xx [ 147 ] = - 0.06622677910401652 ; xx [ 148 ] = 0.9539399189003807 ; xx [
149 ] = 0.2139330882669903 ; xx [ 150 ] = 0.199612821738461 ; xx [ 37 ] = xx
[ 4 ] * state [ 18 ] ; xx [ 144 ] = 0.3925116432615775 ; xx [ 155 ] = sin (
xx [ 37 ] ) ; xx [ 156 ] = 2.216869444640626e-3 ; xx [ 157 ] =
0.9197443641544979 ; xx [ 158 ] = cos ( xx [ 37 ] ) ; xx [ 159 ] = - ( xx [
144 ] * xx [ 155 ] ) ; xx [ 160 ] = xx [ 156 ] * xx [ 155 ] ; xx [ 161 ] = xx
[ 157 ] * xx [ 155 ] ; pm_math_Quaternion_compose_ra ( xx + 147 , xx + 158 ,
xx + 162 ) ; pm_math_Quaternion_compose_ra ( xx + 136 , xx + 162 , xx + 147 )
; xx [ 158 ] = 9.789968004908292e-4 ; xx [ 159 ] = 0.7494484480579273 ; xx [
160 ] = - 6.342871115585375e-4 ; xx [ 161 ] = - 0.6620616760912004 ; xx [ 37
] = xx [ 4 ] * state [ 20 ] ; xx [ 155 ] = 0.2760653533109761 ; xx [ 166 ] =
sin ( xx [ 37 ] ) ; xx [ 167 ] = 9.638253277342509e-5 ; xx [ 168 ] =
0.9611388616696827 ; xx [ 169 ] = cos ( xx [ 37 ] ) ; xx [ 170 ] = xx [ 155 ]
* xx [ 166 ] ; xx [ 171 ] = - ( xx [ 167 ] * xx [ 166 ] ) ; xx [ 172 ] = xx [
168 ] * xx [ 166 ] ; pm_math_Quaternion_compose_ra ( xx + 158 , xx + 169 , xx
+ 173 ) ; pm_math_Quaternion_compose_ra ( xx + 147 , xx + 173 , xx + 158 ) ;
xx [ 169 ] = - 0.3054946078288459 ; xx [ 170 ] = - 0.5320313095226306 ; xx [
171 ] = - 0.04142366843456229 ; xx [ 172 ] = 0.7886062452000734 ; xx [ 37 ] =
xx [ 4 ] * state [ 22 ] ; xx [ 166 ] = 9.161469241983772e-4 ; xx [ 177 ] =
sin ( xx [ 37 ] ) ; xx [ 178 ] = 0.433580475613033 ; xx [ 179 ] =
0.90111438332877 ; xx [ 180 ] = cos ( xx [ 37 ] ) ; xx [ 181 ] = - ( xx [ 166
] * xx [ 177 ] ) ; xx [ 182 ] = - ( xx [ 178 ] * xx [ 177 ] ) ; xx [ 183 ] =
xx [ 179 ] * xx [ 177 ] ; pm_math_Quaternion_compose_ra ( xx + 169 , xx + 180
, xx + 184 ) ; pm_math_Quaternion_compose_ra ( xx + 158 , xx + 184 , xx + 169
) ; xx [ 180 ] = - 0.5982360757232992 ; xx [ 181 ] = 0.3774792463138235 ; xx
[ 182 ] = - 0.3769690834319327 ; xx [ 183 ] = - 0.5979275260782232 ; xx [ 37
] = xx [ 4 ] * state [ 24 ] ; xx [ 177 ] = 3.074892580994291e-3 ; xx [ 188 ]
= sin ( xx [ 37 ] ) ; xx [ 189 ] = 1.687433921535961e-4 ; xx [ 190 ] =
0.9999952582693995 ; xx [ 191 ] = cos ( xx [ 37 ] ) ; xx [ 192 ] = - ( xx [
177 ] * xx [ 188 ] ) ; xx [ 193 ] = - ( xx [ 189 ] * xx [ 188 ] ) ; xx [ 194
] = xx [ 190 ] * xx [ 188 ] ; pm_math_Quaternion_compose_ra ( xx + 180 , xx +
191 , xx + 195 ) ; pm_math_Quaternion_compose_ra ( xx + 169 , xx + 195 , xx +
180 ) ; xx [ 191 ] = 0.4113003470668337 ; xx [ 192 ] = - 0.5751095009164958 ;
xx [ 193 ] = 0.5752712250837967 ; xx [ 194 ] = - 0.4112713265581123 ;
pm_math_Quaternion_compose_ra ( xx + 180 , xx + 191 , xx + 199 ) ; xx [ 37 ]
= 0.701091276903692 ; xx [ 188 ] = - 0.09203078003209308 ; xx [ 203 ] =
0.09203030447537697 ; xx [ 204 ] = 0.7010932748460824 ; xx [ 205 ] = xx [ 37
] ; xx [ 206 ] = xx [ 188 ] ; xx [ 207 ] = xx [ 203 ] ; xx [ 208 ] = xx [ 204
] ; pm_math_Quaternion_compose_ra ( xx + 199 , xx + 205 , xx + 209 ) ; xx [
213 ] = - 2.137267994443221e-7 ; xx [ 214 ] = 0.07388757764255981 ; xx [ 215
] = 8.842161779899979e-4 ; pm_math_Quaternion_xform_ra ( xx + 199 , xx + 213
, xx + 216 ) ; xx [ 199 ] = 0.2828615154169883 + 0.9999952592507191 * state [
26 ] ; xx [ 200 ] = 1.494812213461273e-5 - 1.633437862456066e-4 * state [ 26
] ; xx [ 201 ] = 3.074865020693984e-3 * state [ 26 ] - 0.2312964910558012 ;
pm_math_Quaternion_xform_ra ( xx + 180 , xx + 199 , xx + 219 ) ; xx [ 222 ] =
1.37482914105299e-3 ; xx [ 223 ] = - 1.083137629248106e-6 ; xx [ 224 ] =
0.1363766576540157 ; pm_math_Quaternion_xform_ra ( xx + 195 , xx + 222 , xx +
225 ) ; xx [ 222 ] = - ( 1.446398300596931e-5 + xx [ 225 ] ) ; xx [ 223 ] = -
( 0.1177861997136561 + xx [ 226 ] ) ; xx [ 224 ] = - ( 0.02355406698009013 +
xx [ 227 ] ) ; pm_math_Quaternion_xform_ra ( xx + 169 , xx + 222 , xx + 225 )
; xx [ 169 ] = 5.433876886669093e-5 ; xx [ 170 ] = 0.09516351305204601 ; xx [
171 ] = - 0.05049746937722007 ; pm_math_Quaternion_xform_ra ( xx + 184 , xx +
169 , xx + 228 ) ; xx [ 169 ] = - ( 0.08839742977844355 + xx [ 228 ] ) ; xx [
170 ] = 6.82383889298345e-5 - xx [ 229 ] ; xx [ 171 ] = - (
0.3530595820491463 + xx [ 230 ] ) ; pm_math_Quaternion_xform_ra ( xx + 158 ,
xx + 169 , xx + 228 ) ; xx [ 158 ] = - 0.03258458927695737 ; xx [ 159 ] = -
2.085412120766961e-5 ; xx [ 160 ] = 0.286766763821267 ;
pm_math_Quaternion_xform_ra ( xx + 173 , xx + 158 , xx + 231 ) ; xx [ 158 ] =
0.1619100124162477 - xx [ 231 ] ; xx [ 159 ] = 5.196394139830862e-5 - xx [
232 ] ; xx [ 160 ] = 0.02814027697500968 - xx [ 233 ] ;
pm_math_Quaternion_xform_ra ( xx + 147 , xx + 158 , xx + 231 ) ; xx [ 147 ] =
- 0.1134272676054903 ; xx [ 148 ] = 3.826993029653475e-5 ; xx [ 149 ] =
0.04109704867211692 ; pm_math_Quaternion_xform_ra ( xx + 162 , xx + 147 , xx
+ 234 ) ; xx [ 147 ] = - ( 8.809224580636627e-5 + xx [ 234 ] ) ; xx [ 148 ] =
- ( 0.4599502421099514 + xx [ 235 ] ) ; xx [ 149 ] = 0.07299421268079627 - xx
[ 236 ] ; pm_math_Quaternion_xform_ra ( xx + 136 , xx + 147 , xx + 234 ) ; xx
[ 136 ] = 6.387658930220863e-5 ; xx [ 137 ] = 0.3515404519103449 ; xx [ 138 ]
= 0.08365575332801509 ; pm_math_Quaternion_xform_ra ( xx + 151 , xx + 136 ,
xx + 237 ) ; xx [ 136 ] = - ( 0.06175894467427824 + xx [ 237 ] ) ; xx [ 137 ]
= 1.35108195633428e-4 - xx [ 238 ] ; xx [ 138 ] = - ( 0.1403140255723968 + xx
[ 239 ] ) ; pm_math_Quaternion_xform_ra ( xx + 101 , xx + 136 , xx + 237 ) ;
xx [ 101 ] = - 0.02382768371459375 ; xx [ 102 ] = 3.421823533909102e-5 ; xx [
103 ] = 0.1839029055638635 ; pm_math_Quaternion_xform_ra ( xx + 140 , xx +
101 , xx + 240 ) ; xx [ 101 ] = 2.946570268760443e-4 - xx [ 240 ] ; xx [ 102
] = - ( 0.1935621699833146 + xx [ 241 ] ) ; xx [ 103 ] = 0.3271620966035795 -
xx [ 242 ] ; pm_math_Quaternion_xform_ra ( xx + 129 , xx + 101 , xx + 240 ) ;
xx [ 243 ] = 1.74412095883791e-4 ; xx [ 244 ] = - 0.01351270086500039 ; xx [
245 ] = - 0.2034547061116934 ; pm_math_Quaternion_xform_ra ( xx + 129 , xx +
243 , xx + 246 ) ; xx [ 104 ] = xx [ 225 ] + xx [ 228 ] + xx [ 231 ] + xx [
234 ] + xx [ 237 ] + xx [ 240 ] + state [ 0 ] + xx [ 246 ] + xx [ 33 ] ; xx [
33 ] = xx [ 226 ] + xx [ 229 ] + xx [ 232 ] + xx [ 235 ] + xx [ 238 ] + xx [
241 ] + state [ 1 ] + xx [ 247 ] + 19.0 ; xx [ 129 ] = xx [ 227 ] + xx [ 230
] + xx [ 233 ] + xx [ 236 ] + xx [ 239 ] + xx [ 242 ] + xx [ 248 ] +
0.75253249 ; xx [ 225 ] = xx [ 209 ] ; xx [ 226 ] = xx [ 210 ] ; xx [ 227 ] =
xx [ 211 ] ; xx [ 228 ] = xx [ 212 ] ; xx [ 229 ] = xx [ 216 ] + xx [ 219 ] +
xx [ 104 ] ; xx [ 230 ] = xx [ 217 ] + xx [ 220 ] + xx [ 33 ] ; xx [ 231 ] =
xx [ 218 ] + xx [ 221 ] + xx [ 129 ] ; bb [ 0 ] =
sm_core_compiler_computeProximityInfoBrickCylinder (
Top_Level_Simulation_66cd9431_1_geometry_2 ( NULL ) ,
Top_Level_Simulation_66cd9431_1_geometry_0 ( NULL ) , ( pm_math_Transform3 *
) ( xx + 225 ) , ( pm_math_Transform3 * ) ( xx + 94 ) , xx + 130 , (
pm_math_Vector3 * ) ( xx + 209 ) , ( pm_math_Vector3 * ) ( xx + 216 ) , (
pm_math_Vector3 * ) ( xx + 219 ) , ( pm_math_Vector3 * ) ( xx + 232 ) ) ; xx
[ 235 ] = xx [ 37 ] ; xx [ 236 ] = xx [ 188 ] ; xx [ 237 ] = xx [ 203 ] ; xx
[ 238 ] = xx [ 204 ] ; xx [ 239 ] = xx [ 213 ] ; xx [ 240 ] = xx [ 214 ] ; xx
[ 241 ] = xx [ 215 ] ; xx [ 202 ] = xx [ 81 ] * state [ 5 ] ; xx [ 203 ] = -
( xx [ 83 ] * state [ 5 ] ) ; xx [ 204 ] = xx [ 105 ] * state [ 5 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 140 , xx + 202 , xx + 242 ) ; xx [
245 ] = xx [ 242 ] - xx [ 82 ] * state [ 15 ] ; xx [ 246 ] = xx [ 243 ] + xx
[ 134 ] * state [ 15 ] ; xx [ 247 ] = xx [ 244 ] + xx [ 135 ] * state [ 15 ]
; pm_math_Quaternion_inverseXform_ra ( xx + 151 , xx + 245 , xx + 81 ) ; xx [
242 ] = xx [ 81 ] + xx [ 133 ] * state [ 17 ] ; xx [ 243 ] = xx [ 82 ] - xx [
145 ] * state [ 17 ] ; xx [ 244 ] = xx [ 83 ] + xx [ 146 ] * state [ 17 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 162 , xx + 242 , xx + 81 ) ; xx [
131 ] = xx [ 81 ] - xx [ 144 ] * state [ 19 ] ; xx [ 132 ] = xx [ 82 ] + xx [
156 ] * state [ 19 ] ; xx [ 133 ] = xx [ 83 ] + xx [ 157 ] * state [ 19 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 173 , xx + 131 , xx + 81 ) ; xx [
144 ] = xx [ 81 ] + xx [ 155 ] * state [ 21 ] ; xx [ 145 ] = xx [ 82 ] - xx [
167 ] * state [ 21 ] ; xx [ 146 ] = xx [ 83 ] + xx [ 168 ] * state [ 21 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 184 , xx + 144 , xx + 81 ) ; xx [
155 ] = xx [ 81 ] - xx [ 166 ] * state [ 23 ] ; xx [ 156 ] = xx [ 82 ] - xx [
178 ] * state [ 23 ] ; xx [ 157 ] = xx [ 83 ] + xx [ 179 ] * state [ 23 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 195 , xx + 155 , xx + 81 ) ; xx [
37 ] = xx [ 81 ] - xx [ 177 ] * state [ 25 ] ; xx [ 105 ] = xx [ 82 ] - xx [
189 ] * state [ 25 ] ; xx [ 81 ] = xx [ 83 ] + xx [ 190 ] * state [ 25 ] ; xx
[ 166 ] = xx [ 37 ] ; xx [ 167 ] = xx [ 105 ] ; xx [ 168 ] = xx [ 81 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 191 , xx + 166 , xx + 177 ) ;
pm_math_Vector3_cross_ra ( xx + 166 , xx + 199 , xx + 188 ) ;
pm_math_Vector3_cross_ra ( xx + 155 , xx + 222 , xx + 199 ) ;
pm_math_Vector3_cross_ra ( xx + 144 , xx + 169 , xx + 155 ) ;
pm_math_Vector3_cross_ra ( xx + 131 , xx + 158 , xx + 144 ) ;
pm_math_Vector3_cross_ra ( xx + 242 , xx + 147 , xx + 131 ) ;
pm_math_Vector3_cross_ra ( xx + 245 , xx + 136 , xx + 147 ) ;
pm_math_Vector3_cross_ra ( xx + 202 , xx + 101 , xx + 134 ) ; xx [ 101 ] =
0.9999980776513503 * state [ 3 ] - 1.773550754278646e-3 * state [ 4 ] ; xx [
102 ] = 1.798264714034257e-3 * state [ 3 ] + 0.9995317928203986 * state [ 4 ]
; xx [ 103 ] = 0.03054586156849783 * state [ 4 ] - 7.816249882176138e-4 *
state [ 3 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 106 , xx + 101 , xx +
137 ) ; xx [ 101 ] = xx [ 134 ] + 0.01972079655584117 * state [ 5 ] + xx [
137 ] ; xx [ 102 ] = xx [ 135 ] + 3.444571559463499e-4 * state [ 5 ] + xx [
138 ] ; xx [ 103 ] = xx [ 136 ] + xx [ 139 ] - 5.971850307766764e-6 * state [
5 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 140 , xx + 101 , xx + 106 ) ;
xx [ 101 ] = xx [ 147 ] + xx [ 106 ] - 1.499893927705008e-4 * state [ 15 ] ;
xx [ 102 ] = xx [ 148 ] + xx [ 107 ] - 0.04377744336984951 * state [ 15 ] ;
xx [ 103 ] = xx [ 149 ] + xx [ 108 ] - 1.128809218832778e-5 * state [ 15 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 151 , xx + 101 , xx + 106 ) ; xx [
101 ] = xx [ 131 ] + xx [ 106 ] + 0.3548084957889019 * state [ 17 ] ; xx [
102 ] = xx [ 132 ] + xx [ 107 ] - 5.299300402222736e-5 * state [ 17 ] ; xx [
103 ] = xx [ 133 ] + xx [ 108 ] - 4.823065747266888e-5 * state [ 17 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 162 , xx + 101 , xx + 106 ) ; xx [
101 ] = xx [ 144 ] + xx [ 106 ] - 5.590823875930131e-5 * state [ 19 ] ; xx [
102 ] = xx [ 145 ] + xx [ 107 ] + 0.08819302001410009 * state [ 19 ] ; xx [
103 ] = xx [ 146 ] + xx [ 108 ] - 2.364320505154881e-4 * state [ 19 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 173 , xx + 101 , xx + 106 ) ; xx [
101 ] = xx [ 155 ] + xx [ 106 ] + 7.595600693671167e-6 * state [ 21 ] ; xx [
102 ] = xx [ 156 ] + xx [ 107 ] + 0.1104846830177923 * state [ 21 ] ; xx [
103 ] = xx [ 157 ] + xx [ 108 ] + 8.897685583080171e-6 * state [ 21 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 184 , xx + 101 , xx + 106 ) ; xx [
101 ] = xx [ 199 ] + xx [ 106 ] + 0.06385849358946416 * state [ 23 ] ; xx [
102 ] = xx [ 200 ] + xx [ 107 ] - 2.702344948410855e-6 * state [ 23 ] ; xx [
103 ] = xx [ 201 ] + xx [ 108 ] + 6.362353052909755e-5 * state [ 23 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 195 , xx + 101 , xx + 106 ) ; xx [
82 ] = xx [ 106 ] + 2.192952732980704e-5 * state [ 25 ] ; xx [ 83 ] = xx [
107 ] - 1.794166194824713e-3 * state [ 25 ] ; xx [ 101 ] = xx [ 108 ] -
2.353238647532672e-7 * state [ 25 ] ; xx [ 106 ] = xx [ 188 ] + xx [ 82 ] ;
xx [ 107 ] = xx [ 189 ] + xx [ 83 ] ; xx [ 108 ] = xx [ 190 ] + xx [ 101 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 191 , xx + 106 , xx + 131 ) ; xx [
102 ] = 6.599324214527274e-7 ; xx [ 103 ] = 0.3262839711907557 ; xx [ 106 ] =
0.9452717969682342 ; xx [ 134 ] = xx [ 177 ] ; xx [ 135 ] = xx [ 178 ] ; xx [
136 ] = xx [ 179 ] ; xx [ 137 ] = xx [ 131 ] + xx [ 102 ] * state [ 27 ] ; xx
[ 138 ] = xx [ 132 ] - xx [ 103 ] * state [ 27 ] ; xx [ 139 ] = xx [ 133 ] +
xx [ 106 ] * state [ 27 ] ; xx [ 107 ] = 2000.0 ; xx [ 108 ] = 200.0 ; xx [
109 ] = 0.92 ; xx [ 131 ] = 0.0433083178744532 ; xx [ 132 ] =
0.7201068497247313 ; sm_core_compiler_computeContactWrenches ( 0 , 1 , bb [ 0
] , xx + 130 , ( const pm_math_Vector3 * ) ( xx + 209 ) , ( const
pm_math_Vector3 * ) ( xx + 216 ) , ( const pm_math_Vector3 * ) ( xx + 219 ) ,
( const pm_math_Vector3 * ) ( xx + 232 ) , ( const pm_math_Transform3 * ) (
xx + 235 ) , ( const pm_math_Transform3 * ) ( xx + 110 ) , ( const
pm_math_Transform3 * ) ( xx + 225 ) , ( const pm_math_Transform3 * ) ( xx +
94 ) , ( const pm_math_SpatialVector * ) ( xx + 134 ) , ( const
pm_math_SpatialVector * ) ( xx + 117 ) , 0 , 1 , xx [ 107 ] , xx [ 108 ] , xx
[ 29 ] , xx [ 109 ] , xx [ 131 ] , xx [ 132 ] , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 140 ) , ( pm_math_SpatialVector * ) ( xx +
146 ) ) ; xx [ 152 ] = 0.4095980497005858 ; xx [ 153 ] = - 0.5764638023696377
; xx [ 154 ] = - 0.5764407932687463 ; xx [ 155 ] = 0.4094324536412745 ;
pm_math_Quaternion_compose_ra ( xx + 180 , xx + 152 , xx + 156 ) ;
pm_math_Quaternion_compose_ra ( xx + 156 , xx + 205 , xx + 160 ) ;
pm_math_Quaternion_xform_ra ( xx + 156 , xx + 213 , xx + 169 ) ; xx [ 156 ] =
- ( 0.2788414501321849 + 0.9999952592507189 * state [ 28 ] ) ; xx [ 157 ] =
1.07424646342255e-4 + 1.633437862453846e-4 * state [ 28 ] ; xx [ 158 ] = - (
0.2330236599222386 + 3.07486502069354e-3 * state [ 28 ] ) ;
pm_math_Quaternion_xform_ra ( xx + 180 , xx + 156 , xx + 172 ) ; xx [ 184 ] =
xx [ 160 ] ; xx [ 185 ] = xx [ 161 ] ; xx [ 186 ] = xx [ 162 ] ; xx [ 187 ] =
xx [ 163 ] ; xx [ 188 ] = xx [ 169 ] + xx [ 172 ] + xx [ 104 ] ; xx [ 189 ] =
xx [ 170 ] + xx [ 173 ] + xx [ 33 ] ; xx [ 190 ] = xx [ 171 ] + xx [ 174 ] +
xx [ 129 ] ; bb [ 0 ] = sm_core_compiler_computeProximityInfoBrickCylinder (
Top_Level_Simulation_66cd9431_1_geometry_2 ( NULL ) ,
Top_Level_Simulation_66cd9431_1_geometry_0 ( NULL ) , ( pm_math_Transform3 *
) ( xx + 184 ) , ( pm_math_Transform3 * ) ( xx + 94 ) , xx + 130 , (
pm_math_Vector3 * ) ( xx + 159 ) , ( pm_math_Vector3 * ) ( xx + 162 ) , (
pm_math_Vector3 * ) ( xx + 169 ) , ( pm_math_Vector3 * ) ( xx + 172 ) ) ;
pm_math_Quaternion_inverseXform_ra ( xx + 152 , xx + 166 , xx + 175 ) ;
pm_math_Vector3_cross_ra ( xx + 166 , xx + 156 , xx + 191 ) ; xx [ 156 ] = xx
[ 191 ] + xx [ 82 ] ; xx [ 157 ] = xx [ 192 ] + xx [ 83 ] ; xx [ 158 ] = xx [
193 ] + xx [ 101 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 152 , xx + 156
, xx + 165 ) ; xx [ 152 ] = xx [ 175 ] ; xx [ 153 ] = xx [ 176 ] ; xx [ 154 ]
= xx [ 177 ] ; xx [ 155 ] = xx [ 165 ] + xx [ 102 ] * state [ 29 ] ; xx [ 156
] = xx [ 166 ] - xx [ 103 ] * state [ 29 ] ; xx [ 157 ] = xx [ 167 ] + xx [
106 ] * state [ 29 ] ; sm_core_compiler_computeContactWrenches ( 0 , 1 , bb [
0 ] , xx + 130 , ( const pm_math_Vector3 * ) ( xx + 159 ) , ( const
pm_math_Vector3 * ) ( xx + 162 ) , ( const pm_math_Vector3 * ) ( xx + 169 ) ,
( const pm_math_Vector3 * ) ( xx + 172 ) , ( const pm_math_Transform3 * ) (
xx + 235 ) , ( const pm_math_Transform3 * ) ( xx + 110 ) , ( const
pm_math_Transform3 * ) ( xx + 184 ) , ( const pm_math_Transform3 * ) ( xx +
94 ) , ( const pm_math_SpatialVector * ) ( xx + 152 ) , ( const
pm_math_SpatialVector * ) ( xx + 117 ) , 0 , 1 , xx [ 107 ] , xx [ 108 ] , xx
[ 29 ] , xx [ 109 ] , xx [ 131 ] , xx [ 132 ] , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 191 ) , ( pm_math_SpatialVector * ) ( xx +
197 ) ) ; xx [ 102 ] = 0.999998811242088 ; xx [ 103 ] = 8.449716268362357e-5
; xx [ 106 ] = - 1.537441228067385e-3 ; xx [ 130 ] = - 8.154208065465675e-5 ;
xx [ 158 ] = xx [ 102 ] ; xx [ 159 ] = xx [ 103 ] ; xx [ 160 ] = xx [ 106 ] ;
xx [ 161 ] = xx [ 130 ] ; pm_math_Quaternion_compose_ra ( xx + 180 , xx + 158
, xx + 162 ) ; xx [ 133 ] = 1.949941674936807e-3 ; xx [ 158 ] =
3.047778272228485e-5 ; xx [ 159 ] = - 0.05065745547640037 ; xx [ 166 ] = xx [
133 ] ; xx [ 167 ] = xx [ 158 ] ; xx [ 168 ] = xx [ 159 ] ;
pm_math_Quaternion_xform_ra ( xx + 180 , xx + 166 , xx + 169 ) ; xx [ 172 ] =
xx [ 162 ] ; xx [ 173 ] = xx [ 163 ] ; xx [ 174 ] = xx [ 164 ] ; xx [ 175 ] =
xx [ 165 ] ; xx [ 176 ] = xx [ 169 ] + xx [ 104 ] ; xx [ 177 ] = xx [ 170 ] +
xx [ 33 ] ; xx [ 178 ] = xx [ 171 ] + xx [ 129 ] ; bb [ 0 ] =
sm_core_compiler_computeProximityInfoBrickCylinder (
Top_Level_Simulation_66cd9431_1_geometry_2 ( NULL ) ,
Top_Level_Simulation_66cd9431_1_geometry_0 ( NULL ) , ( pm_math_Transform3 *
) ( xx + 172 ) , ( pm_math_Transform3 * ) ( xx + 94 ) , xx + 33 , (
pm_math_Vector3 * ) ( xx + 160 ) , ( pm_math_Vector3 * ) ( xx + 163 ) , (
pm_math_Vector3 * ) ( xx + 166 ) , ( pm_math_Vector3 * ) ( xx + 169 ) ) ; xx
[ 203 ] = xx [ 102 ] ; xx [ 204 ] = xx [ 103 ] ; xx [ 205 ] = xx [ 106 ] ; xx
[ 206 ] = xx [ 130 ] ; xx [ 207 ] = xx [ 133 ] ; xx [ 208 ] = xx [ 158 ] ; xx
[ 209 ] = xx [ 159 ] ; xx [ 210 ] = xx [ 37 ] ; xx [ 211 ] = xx [ 105 ] ; xx
[ 212 ] = xx [ 81 ] ; xx [ 213 ] = xx [ 82 ] ; xx [ 214 ] = xx [ 83 ] ; xx [
215 ] = xx [ 101 ] ; xx [ 37 ] = 4.0e4 ; xx [ 81 ] = 4000.0 ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , bb [ 0 ] , xx + 33 , (
const pm_math_Vector3 * ) ( xx + 160 ) , ( const pm_math_Vector3 * ) ( xx +
163 ) , ( const pm_math_Vector3 * ) ( xx + 166 ) , ( const pm_math_Vector3 *
) ( xx + 169 ) , ( const pm_math_Transform3 * ) ( xx + 203 ) , ( const
pm_math_Transform3 * ) ( xx + 110 ) , ( const pm_math_Transform3 * ) ( xx +
172 ) , ( const pm_math_Transform3 * ) ( xx + 94 ) , ( const
pm_math_SpatialVector * ) ( xx + 210 ) , ( const pm_math_SpatialVector * ) (
xx + 117 ) , 0 , 1 , xx [ 37 ] , xx [ 81 ] , xx [ 29 ] , xx [ 109 ] , xx [
131 ] , xx [ 132 ] , NULL , NULL , ( pm_math_SpatialVector * ) ( xx + 101 ) ,
( pm_math_SpatialVector * ) ( xx + 216 ) ) ; xx [ 94 ] = ( xx [ 30 ] + xx [
84 ] ) * xx [ 20 ] - ( xx [ 126 ] + xx [ 149 ] + xx [ 200 ] + xx [ 219 ] ) ;
xx [ 95 ] = ( xx [ 31 ] + xx [ 85 ] ) * xx [ 20 ] - ( xx [ 127 ] + xx [ 150 ]
+ xx [ 201 ] + xx [ 220 ] ) ; xx [ 96 ] = ( xx [ 32 ] + xx [ 86 ] ) * xx [ 20
] - ( xx [ 128 ] + xx [ 151 ] + xx [ 202 ] + xx [ 221 ] ) ; xx [ 30 ] = xx [
25 ] * state [ 40 ] ; xx [ 31 ] = xx [ 25 ] * state [ 41 ] ; xx [ 32 ] = xx [
28 ] * state [ 42 ] ; pm_math_Vector3_cross_ra ( xx + 22 , xx + 30 , xx + 82
) ; xx [ 97 ] = - pm_math_Vector3_dot_ra ( xx + 17 , xx + 94 ) ; xx [ 98 ] =
- pm_math_Vector3_dot_ra ( xx + 39 , xx + 94 ) ; xx [ 99 ] = -
pm_math_Vector3_dot_ra ( xx + 42 , xx + 94 ) ; xx [ 100 ] = xx [ 216 ] - ( xx
[ 82 ] - xx [ 123 ] - xx [ 146 ] - xx [ 197 ] ) ; xx [ 101 ] = xx [ 217 ] - (
xx [ 83 ] - xx [ 124 ] - xx [ 147 ] - xx [ 198 ] ) ; xx [ 102 ] = xx [ 218 ]
- ( xx [ 84 ] - xx [ 125 ] - xx [ 148 ] - xx [ 199 ] ) ; solveSymmetricPosDef
( xx + 45 , xx + 97 , 6 , 1 , xx + 39 , xx + 117 ) ; xx [ 242 ] = xx [ 38 ] ;
xx [ 243 ] = xx [ 38 ] ; xx [ 244 ] = xx [ 38 ] ; xx [ 245 ] = xx [ 25 ] ; xx
[ 246 ] = xx [ 38 ] ; xx [ 247 ] = xx [ 38 ] ; xx [ 248 ] = xx [ 38 ] ; xx [
249 ] = xx [ 38 ] ; xx [ 250 ] = xx [ 38 ] ; xx [ 251 ] = xx [ 38 ] ; xx [
252 ] = xx [ 25 ] ; xx [ 253 ] = xx [ 38 ] ; xx [ 254 ] = xx [ 38 ] ; xx [
255 ] = xx [ 38 ] ; xx [ 256 ] = xx [ 38 ] ; xx [ 257 ] = xx [ 38 ] ; xx [
258 ] = xx [ 38 ] ; xx [ 259 ] = xx [ 28 ] ; xx [ 260 ] = xx [ 21 ] ; xx [
261 ] = xx [ 27 ] ; xx [ 262 ] = xx [ 15 ] ; xx [ 263 ] = xx [ 38 ] ; xx [
264 ] = xx [ 38 ] ; xx [ 265 ] = xx [ 38 ] ; xx [ 266 ] = xx [ 7 ] ; xx [ 267
] = xx [ 14 ] ; xx [ 268 ] = xx [ 16 ] ; xx [ 269 ] = xx [ 38 ] ; xx [ 270 ]
= xx [ 38 ] ; xx [ 271 ] = xx [ 38 ] ; xx [ 272 ] = xx [ 12 ] ; xx [ 273 ] =
xx [ 10 ] ; xx [ 274 ] = xx [ 3 ] ; xx [ 275 ] = xx [ 38 ] ; xx [ 276 ] = xx
[ 38 ] ; xx [ 277 ] = xx [ 38 ] ; solveSymmetricPosDef ( xx + 45 , xx + 242 ,
6 , 6 , xx + 278 , xx + 14 ) ; xx [ 14 ] = xx [ 296 ] ; xx [ 15 ] = xx [ 302
] ; xx [ 16 ] = xx [ 308 ] ; xx [ 3 ] = 9.806649999999999 ; xx [ 7 ] = xx [ 5
] * xx [ 3 ] ; xx [ 10 ] = xx [ 8 ] * xx [ 3 ] ; xx [ 17 ] = xx [ 1 ] * ( xx
[ 7 ] * xx [ 6 ] - xx [ 10 ] * xx [ 9 ] ) ; xx [ 18 ] = ( xx [ 7 ] * xx [ 9 ]
+ xx [ 10 ] * xx [ 6 ] ) * xx [ 1 ] ; xx [ 19 ] = xx [ 3 ] - ( xx [ 5 ] * xx
[ 7 ] + xx [ 8 ] * xx [ 10 ] ) * xx [ 1 ] ; xx [ 5 ] = xx [ 297 ] ; xx [ 6 ]
= xx [ 303 ] ; xx [ 7 ] = xx [ 309 ] ; xx [ 8 ] = xx [ 298 ] ; xx [ 9 ] = xx
[ 304 ] ; xx [ 10 ] = xx [ 310 ] ; xx [ 21 ] = xx [ 299 ] ; xx [ 22 ] = xx [
305 ] ; xx [ 23 ] = xx [ 311 ] ; xx [ 30 ] = xx [ 300 ] ; xx [ 31 ] = xx [
306 ] ; xx [ 32 ] = xx [ 312 ] ; xx [ 45 ] = xx [ 301 ] ; xx [ 46 ] = xx [
307 ] ; xx [ 47 ] = xx [ 313 ] ; xx [ 48 ] = xx [ 4 ] ; xx [ 49 ] = xx [ 4 ]
; xx [ 50 ] = - xx [ 4 ] ; xx [ 51 ] = xx [ 4 ] ; xx [ 52 ] = - state [ 46 ]
; xx [ 53 ] = - state [ 47 ] ; xx [ 54 ] = - state [ 48 ] ; xx [ 55 ] = -
state [ 49 ] ; pm_math_Quaternion_compose_ra ( xx + 48 , xx + 52 , xx + 56 )
; xx [ 4 ] = xx [ 57 ] * xx [ 59 ] ; xx [ 12 ] = xx [ 56 ] * xx [ 58 ] ; xx [
24 ] = xx [ 1 ] * ( xx [ 4 ] - xx [ 12 ] ) ; xx [ 27 ] = xx [ 56 ] * xx [ 57
] ; xx [ 33 ] = xx [ 58 ] * xx [ 59 ] ; xx [ 52 ] = ( xx [ 27 ] + xx [ 33 ] )
* xx [ 1 ] ; xx [ 53 ] = xx [ 57 ] * xx [ 57 ] ; xx [ 54 ] = xx [ 58 ] * xx [
58 ] ; xx [ 55 ] = xx [ 13 ] - ( xx [ 53 ] + xx [ 54 ] ) * xx [ 1 ] ; xx [ 60
] = xx [ 24 ] ; xx [ 61 ] = xx [ 52 ] ; xx [ 62 ] = xx [ 55 ] ; xx [ 63 ] =
xx [ 20 ] * xx [ 24 ] ; xx [ 24 ] = xx [ 20 ] * xx [ 52 ] ; xx [ 52 ] = xx [
20 ] * xx [ 55 ] ; xx [ 64 ] = xx [ 63 ] ; xx [ 65 ] = xx [ 24 ] ; xx [ 66 ]
= xx [ 52 ] ; xx [ 55 ] = xx [ 59 ] * xx [ 59 ] ; xx [ 67 ] = ( xx [ 54 ] +
xx [ 55 ] ) * xx [ 1 ] - xx [ 13 ] ; xx [ 54 ] = xx [ 67 ] * xx [ 20 ] ; xx [
68 ] = xx [ 56 ] * xx [ 59 ] ; xx [ 69 ] = xx [ 57 ] * xx [ 58 ] ; xx [ 70 ]
= xx [ 1 ] * ( xx [ 68 ] - xx [ 69 ] ) ; xx [ 71 ] = xx [ 20 ] * xx [ 70 ] ;
xx [ 72 ] = ( xx [ 12 ] + xx [ 4 ] ) * xx [ 1 ] ; xx [ 4 ] = - ( xx [ 20 ] *
xx [ 72 ] ) ; xx [ 73 ] = xx [ 54 ] ; xx [ 74 ] = xx [ 71 ] ; xx [ 75 ] = xx
[ 4 ] ; xx [ 12 ] = pm_math_Vector3_dot_ra ( xx + 60 , xx + 73 ) ; xx [ 76 ]
= ( xx [ 68 ] + xx [ 69 ] ) * xx [ 1 ] ; xx [ 68 ] = - ( xx [ 20 ] * xx [ 76
] ) ; xx [ 69 ] = ( xx [ 55 ] + xx [ 53 ] ) * xx [ 1 ] - xx [ 13 ] ; xx [ 13
] = xx [ 69 ] * xx [ 20 ] ; xx [ 53 ] = xx [ 1 ] * ( xx [ 27 ] - xx [ 33 ] )
; xx [ 27 ] = xx [ 20 ] * xx [ 53 ] ; xx [ 77 ] = xx [ 68 ] ; xx [ 78 ] = xx
[ 13 ] ; xx [ 79 ] = xx [ 27 ] ; xx [ 33 ] = pm_math_Vector3_dot_ra ( xx + 60
, xx + 77 ) ; xx [ 82 ] = xx [ 67 ] ; xx [ 83 ] = xx [ 70 ] ; xx [ 84 ] = -
xx [ 72 ] ; xx [ 55 ] = pm_math_Vector3_dot_ra ( xx + 82 , xx + 77 ) ; xx [
94 ] = - xx [ 76 ] ; xx [ 95 ] = xx [ 69 ] ; xx [ 96 ] = xx [ 53 ] ; xx [ 242
] = pm_math_Vector3_dot_ra ( xx + 60 , xx + 64 ) ; xx [ 243 ] = xx [ 12 ] ;
xx [ 244 ] = xx [ 33 ] ; xx [ 245 ] = xx [ 38 ] ; xx [ 246 ] = xx [ 38 ] ; xx
[ 247 ] = xx [ 38 ] ; xx [ 248 ] = xx [ 12 ] ; xx [ 249 ] =
pm_math_Vector3_dot_ra ( xx + 82 , xx + 73 ) ; xx [ 250 ] = xx [ 55 ] ; xx [
251 ] = xx [ 38 ] ; xx [ 252 ] = xx [ 38 ] ; xx [ 253 ] = xx [ 38 ] ; xx [
254 ] = xx [ 33 ] ; xx [ 255 ] = xx [ 55 ] ; xx [ 256 ] =
pm_math_Vector3_dot_ra ( xx + 94 , xx + 77 ) ; xx [ 257 ] = xx [ 38 ] ; xx [
258 ] = xx [ 38 ] ; xx [ 259 ] = xx [ 38 ] ; xx [ 260 ] = xx [ 38 ] ; xx [
261 ] = xx [ 38 ] ; xx [ 262 ] = xx [ 38 ] ; xx [ 263 ] = xx [ 25 ] ; xx [
264 ] = xx [ 38 ] ; xx [ 265 ] = xx [ 38 ] ; xx [ 266 ] = xx [ 38 ] ; xx [
267 ] = xx [ 38 ] ; xx [ 268 ] = xx [ 38 ] ; xx [ 269 ] = xx [ 38 ] ; xx [
270 ] = xx [ 25 ] ; xx [ 271 ] = xx [ 38 ] ; xx [ 272 ] = xx [ 38 ] ; xx [
273 ] = xx [ 38 ] ; xx [ 274 ] = xx [ 38 ] ; xx [ 275 ] = xx [ 38 ] ; xx [
276 ] = xx [ 38 ] ; xx [ 277 ] = xx [ 28 ] ; ii [ 0 ] = factorSymmetricPosDef
( xx + 242 , 6 , xx + 72 ) ; if ( ii [ 0 ] != 0 ) { return
sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:mechanism:mechanism:degenerateMassFoll" ,
 "'Top_Level_Simulation/Simulation Environment/Position Actuated Robot Environment/Environment_With_Physics/6-DOF Joint1' has a degenerate mass distribution on its follower side."
, neDiagMgr ) ; } xx [ 64 ] = state [ 53 ] ; xx [ 65 ] = state [ 54 ] ; xx [
66 ] = state [ 55 ] ; xx [ 72 ] = state [ 50 ] ; xx [ 73 ] = state [ 51 ] ;
xx [ 74 ] = state [ 52 ] ; pm_math_Quaternion_xform_ra ( xx + 48 , xx + 72 ,
xx + 75 ) ; pm_math_Quaternion_inverseXform_ra ( xx + 56 , xx + 75 , xx + 72
) ; pm_math_Vector3_cross_ra ( xx + 64 , xx + 72 , xx + 75 ) ; xx [ 78 ] = -
xx [ 72 ] ; xx [ 79 ] = - xx [ 73 ] ; xx [ 80 ] = - xx [ 74 ] ;
pm_math_Vector3_cross_ra ( xx + 64 , xx + 78 , xx + 97 ) ; xx [ 78 ] = state
[ 43 ] ; xx [ 79 ] = state [ 44 ] ; xx [ 80 ] = state [ 45 ] ;
pm_math_Quaternion_xform_ra ( xx + 48 , xx + 78 , xx + 100 ) ; xx [ 117 ] =
xx [ 56 ] ; xx [ 118 ] = xx [ 57 ] ; xx [ 119 ] = xx [ 58 ] ; xx [ 120 ] = xx
[ 59 ] ; xx [ 121 ] = xx [ 100 ] + 15.0 ; xx [ 122 ] = xx [ 101 ] + 13.0 ; xx
[ 123 ] = xx [ 102 ] + xx [ 2 ] ; bb [ 0 ] =
sm_core_compiler_computeProximityInfoBrickCylinder (
Top_Level_Simulation_66cd9431_1_geometry_2 ( NULL ) ,
Top_Level_Simulation_66cd9431_1_geometry_0 ( NULL ) , ( pm_math_Transform3 *
) ( xx + 184 ) , ( pm_math_Transform3 * ) ( xx + 117 ) , xx + 2 , (
pm_math_Vector3 * ) ( xx + 48 ) , ( pm_math_Vector3 * ) ( xx + 78 ) , (
pm_math_Vector3 * ) ( xx + 100 ) , ( pm_math_Vector3 * ) ( xx + 103 ) ) ; xx
[ 124 ] = state [ 53 ] ; xx [ 125 ] = state [ 54 ] ; xx [ 126 ] = state [ 55
] ; xx [ 127 ] = xx [ 72 ] ; xx [ 128 ] = xx [ 73 ] ; xx [ 129 ] = xx [ 74 ]
; sm_core_compiler_computeContactWrenches ( 0 , 1 , bb [ 0 ] , xx + 2 , (
const pm_math_Vector3 * ) ( xx + 48 ) , ( const pm_math_Vector3 * ) ( xx + 78
) , ( const pm_math_Vector3 * ) ( xx + 100 ) , ( const pm_math_Vector3 * ) (
xx + 103 ) , ( const pm_math_Transform3 * ) ( xx + 235 ) , ( const
pm_math_Transform3 * ) ( xx + 110 ) , ( const pm_math_Transform3 * ) ( xx +
184 ) , ( const pm_math_Transform3 * ) ( xx + 117 ) , ( const
pm_math_SpatialVector * ) ( xx + 152 ) , ( const pm_math_SpatialVector * ) (
xx + 124 ) , 0 , 1 , xx [ 107 ] , xx [ 108 ] , xx [ 29 ] , xx [ 109 ] , xx [
131 ] , xx [ 132 ] , NULL , NULL , ( pm_math_SpatialVector * ) ( xx + 140 ) ,
( pm_math_SpatialVector * ) ( xx + 146 ) ) ; bb [ 0 ] =
sm_core_compiler_computeProximityInfoBrickCylinder (
Top_Level_Simulation_66cd9431_1_geometry_2 ( NULL ) ,
Top_Level_Simulation_66cd9431_1_geometry_0 ( NULL ) , ( pm_math_Transform3 *
) ( xx + 225 ) , ( pm_math_Transform3 * ) ( xx + 117 ) , xx + 2 , (
pm_math_Vector3 * ) ( xx + 48 ) , ( pm_math_Vector3 * ) ( xx + 72 ) , (
pm_math_Vector3 * ) ( xx + 78 ) , ( pm_math_Vector3 * ) ( xx + 100 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , bb [ 0 ] , xx + 2 , ( const
pm_math_Vector3 * ) ( xx + 48 ) , ( const pm_math_Vector3 * ) ( xx + 72 ) , (
const pm_math_Vector3 * ) ( xx + 78 ) , ( const pm_math_Vector3 * ) ( xx +
100 ) , ( const pm_math_Transform3 * ) ( xx + 235 ) , ( const
pm_math_Transform3 * ) ( xx + 110 ) , ( const pm_math_Transform3 * ) ( xx +
225 ) , ( const pm_math_Transform3 * ) ( xx + 117 ) , ( const
pm_math_SpatialVector * ) ( xx + 134 ) , ( const pm_math_SpatialVector * ) (
xx + 124 ) , 0 , 1 , xx [ 107 ] , xx [ 108 ] , xx [ 29 ] , xx [ 109 ] , xx [
131 ] , xx [ 132 ] , NULL , NULL , ( pm_math_SpatialVector * ) ( xx + 152 ) ,
( pm_math_SpatialVector * ) ( xx + 158 ) ) ; bb [ 0 ] =
sm_core_compiler_computeProximityInfoBrickCylinder (
Top_Level_Simulation_66cd9431_1_geometry_1 ( NULL ) ,
Top_Level_Simulation_66cd9431_1_geometry_0 ( NULL ) , ( pm_math_Transform3 *
) ( xx + 87 ) , ( pm_math_Transform3 * ) ( xx + 117 ) , xx + 2 , (
pm_math_Vector3 * ) ( xx + 48 ) , ( pm_math_Vector3 * ) ( xx + 72 ) , (
pm_math_Vector3 * ) ( xx + 78 ) , ( pm_math_Vector3 * ) ( xx + 100 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , bb [ 0 ] , xx + 2 , ( const
pm_math_Vector3 * ) ( xx + 48 ) , ( const pm_math_Vector3 * ) ( xx + 72 ) , (
const pm_math_Vector3 * ) ( xx + 78 ) , ( const pm_math_Vector3 * ) ( xx +
100 ) , ( const pm_math_Transform3 * ) ( xx + 87 ) , ( const
pm_math_Transform3 * ) ( xx + 110 ) , ( const pm_math_Transform3 * ) ( xx +
87 ) , ( const pm_math_Transform3 * ) ( xx + 117 ) , NULL , ( const
pm_math_SpatialVector * ) ( xx + 124 ) , 0 , 1 , xx [ 11 ] , xx [ 26 ] , xx [
29 ] , xx [ 34 ] , xx [ 35 ] , xx [ 36 ] , NULL , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 103 ) ) ; bb [ 0 ] =
sm_core_compiler_computeProximityInfoBrickCylinder (
Top_Level_Simulation_66cd9431_1_geometry_2 ( NULL ) ,
Top_Level_Simulation_66cd9431_1_geometry_0 ( NULL ) , ( pm_math_Transform3 *
) ( xx + 172 ) , ( pm_math_Transform3 * ) ( xx + 117 ) , xx + 2 , (
pm_math_Vector3 * ) ( xx + 33 ) , ( pm_math_Vector3 * ) ( xx + 48 ) , (
pm_math_Vector3 * ) ( xx + 72 ) , ( pm_math_Vector3 * ) ( xx + 78 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , bb [ 0 ] , xx + 2 , ( const
pm_math_Vector3 * ) ( xx + 33 ) , ( const pm_math_Vector3 * ) ( xx + 48 ) , (
const pm_math_Vector3 * ) ( xx + 72 ) , ( const pm_math_Vector3 * ) ( xx + 78
) , ( const pm_math_Transform3 * ) ( xx + 203 ) , ( const pm_math_Transform3
* ) ( xx + 110 ) , ( const pm_math_Transform3 * ) ( xx + 172 ) , ( const
pm_math_Transform3 * ) ( xx + 117 ) , ( const pm_math_SpatialVector * ) ( xx
+ 210 ) , ( const pm_math_SpatialVector * ) ( xx + 124 ) , 0 , 1 , xx [ 37 ]
, xx [ 81 ] , xx [ 29 ] , xx [ 109 ] , xx [ 131 ] , xx [ 132 ] , NULL , NULL
, ( pm_math_SpatialVector * ) ( xx + 85 ) , ( pm_math_SpatialVector * ) ( xx
+ 133 ) ) ; xx [ 33 ] = ( xx [ 75 ] + xx [ 97 ] ) * xx [ 20 ] - ( xx [ 149 ]
+ xx [ 161 ] + xx [ 106 ] + xx [ 136 ] ) ; xx [ 34 ] = ( xx [ 76 ] + xx [ 98
] ) * xx [ 20 ] - ( xx [ 150 ] + xx [ 162 ] + xx [ 107 ] + xx [ 137 ] ) ; xx
[ 35 ] = ( xx [ 77 ] + xx [ 99 ] ) * xx [ 20 ] - ( xx [ 151 ] + xx [ 163 ] +
xx [ 108 ] + xx [ 138 ] ) ; xx [ 48 ] = xx [ 25 ] * state [ 53 ] ; xx [ 49 ]
= xx [ 25 ] * state [ 54 ] ; xx [ 50 ] = xx [ 28 ] * state [ 55 ] ;
pm_math_Vector3_cross_ra ( xx + 64 , xx + 48 , xx + 72 ) ; xx [ 75 ] = -
pm_math_Vector3_dot_ra ( xx + 60 , xx + 33 ) ; xx [ 76 ] = -
pm_math_Vector3_dot_ra ( xx + 82 , xx + 33 ) ; xx [ 77 ] = -
pm_math_Vector3_dot_ra ( xx + 94 , xx + 33 ) ; xx [ 78 ] = xx [ 133 ] - ( xx
[ 72 ] - xx [ 146 ] - xx [ 158 ] - xx [ 103 ] ) ; xx [ 79 ] = xx [ 134 ] - (
xx [ 73 ] - xx [ 147 ] - xx [ 159 ] - xx [ 104 ] ) ; xx [ 80 ] = xx [ 135 ] -
( xx [ 74 ] - xx [ 148 ] - xx [ 160 ] - xx [ 105 ] ) ; solveSymmetricPosDef (
xx + 242 , xx + 75 , 6 , 1 , xx + 81 , xx + 87 ) ; xx [ 87 ] = xx [ 38 ] ; xx
[ 88 ] = xx [ 38 ] ; xx [ 89 ] = xx [ 38 ] ; xx [ 90 ] = xx [ 25 ] ; xx [ 91
] = xx [ 38 ] ; xx [ 92 ] = xx [ 38 ] ; xx [ 93 ] = xx [ 38 ] ; xx [ 94 ] =
xx [ 38 ] ; xx [ 95 ] = xx [ 38 ] ; xx [ 96 ] = xx [ 38 ] ; xx [ 97 ] = xx [
25 ] ; xx [ 98 ] = xx [ 38 ] ; xx [ 99 ] = xx [ 38 ] ; xx [ 100 ] = xx [ 38 ]
; xx [ 101 ] = xx [ 38 ] ; xx [ 102 ] = xx [ 38 ] ; xx [ 103 ] = xx [ 38 ] ;
xx [ 104 ] = xx [ 28 ] ; xx [ 105 ] = xx [ 63 ] ; xx [ 106 ] = xx [ 54 ] ; xx
[ 107 ] = xx [ 68 ] ; xx [ 108 ] = xx [ 38 ] ; xx [ 109 ] = xx [ 38 ] ; xx [
110 ] = xx [ 38 ] ; xx [ 111 ] = xx [ 24 ] ; xx [ 112 ] = xx [ 71 ] ; xx [
113 ] = xx [ 13 ] ; xx [ 114 ] = xx [ 38 ] ; xx [ 115 ] = xx [ 38 ] ; xx [
116 ] = xx [ 38 ] ; xx [ 117 ] = xx [ 52 ] ; xx [ 118 ] = xx [ 4 ] ; xx [ 119
] = xx [ 27 ] ; xx [ 120 ] = xx [ 38 ] ; xx [ 121 ] = xx [ 38 ] ; xx [ 122 ]
= xx [ 38 ] ; solveSymmetricPosDef ( xx + 242 , xx + 87 , 6 , 6 , xx + 123 ,
xx + 24 ) ; xx [ 11 ] = xx [ 141 ] ; xx [ 12 ] = xx [ 147 ] ; xx [ 13 ] = xx
[ 153 ] ; xx [ 2 ] = xx [ 3 ] * xx [ 57 ] ; xx [ 4 ] = xx [ 3 ] * xx [ 58 ] ;
xx [ 24 ] = xx [ 1 ] * ( xx [ 59 ] * xx [ 2 ] - xx [ 56 ] * xx [ 4 ] ) ; xx [
25 ] = ( xx [ 56 ] * xx [ 2 ] + xx [ 59 ] * xx [ 4 ] ) * xx [ 1 ] ; xx [ 26 ]
= xx [ 3 ] - ( xx [ 57 ] * xx [ 2 ] + xx [ 58 ] * xx [ 4 ] ) * xx [ 1 ] ; xx
[ 1 ] = xx [ 142 ] ; xx [ 2 ] = xx [ 148 ] ; xx [ 3 ] = xx [ 154 ] ; xx [ 27
] = xx [ 143 ] ; xx [ 28 ] = xx [ 149 ] ; xx [ 29 ] = xx [ 155 ] ; xx [ 33 ]
= xx [ 144 ] ; xx [ 34 ] = xx [ 150 ] ; xx [ 35 ] = xx [ 156 ] ; xx [ 48 ] =
xx [ 145 ] ; xx [ 49 ] = xx [ 151 ] ; xx [ 50 ] = xx [ 157 ] ; xx [ 51 ] = xx
[ 146 ] ; xx [ 52 ] = xx [ 152 ] ; xx [ 53 ] = xx [ 158 ] ; logVector [ 0 ] =
state [ 0 ] ; logVector [ 1 ] = state [ 1 ] ; logVector [ 2 ] = xx [ 0 ] *
state [ 2 ] ; logVector [ 3 ] = state [ 3 ] ; logVector [ 4 ] = state [ 4 ] ;
logVector [ 5 ] = xx [ 0 ] * state [ 5 ] ; logVector [ 6 ] = xx [ 0 ] * state
[ 6 ] ; logVector [ 7 ] = xx [ 0 ] * state [ 7 ] ; logVector [ 8 ] = xx [ 0 ]
* state [ 8 ] ; logVector [ 9 ] = xx [ 0 ] * state [ 9 ] ; logVector [ 10 ] =
xx [ 0 ] * state [ 10 ] ; logVector [ 11 ] = xx [ 0 ] * state [ 11 ] ;
logVector [ 12 ] = xx [ 0 ] * state [ 12 ] ; logVector [ 13 ] = xx [ 0 ] *
state [ 13 ] ; logVector [ 14 ] = xx [ 0 ] * state [ 14 ] ; logVector [ 15 ]
= xx [ 0 ] * state [ 15 ] ; logVector [ 16 ] = xx [ 0 ] * state [ 16 ] ;
logVector [ 17 ] = xx [ 0 ] * state [ 17 ] ; logVector [ 18 ] = xx [ 0 ] *
state [ 18 ] ; logVector [ 19 ] = xx [ 0 ] * state [ 19 ] ; logVector [ 20 ]
= xx [ 0 ] * state [ 20 ] ; logVector [ 21 ] = xx [ 0 ] * state [ 21 ] ;
logVector [ 22 ] = xx [ 0 ] * state [ 22 ] ; logVector [ 23 ] = xx [ 0 ] *
state [ 23 ] ; logVector [ 24 ] = xx [ 0 ] * state [ 24 ] ; logVector [ 25 ]
= xx [ 0 ] * state [ 25 ] ; logVector [ 26 ] = state [ 26 ] ; logVector [ 27
] = state [ 27 ] ; logVector [ 28 ] = state [ 28 ] ; logVector [ 29 ] = state
[ 29 ] ; logVector [ 30 ] = state [ 30 ] ; logVector [ 31 ] = state [ 31 ] ;
logVector [ 32 ] = state [ 32 ] ; logVector [ 33 ] = state [ 33 ] ; logVector
[ 34 ] = state [ 34 ] ; logVector [ 35 ] = state [ 35 ] ; logVector [ 36 ] =
state [ 36 ] ; logVector [ 37 ] = state [ 37 ] ; logVector [ 38 ] = state [
38 ] ; logVector [ 39 ] = state [ 39 ] ; logVector [ 40 ] = xx [ 0 ] * state
[ 40 ] ; logVector [ 41 ] = xx [ 0 ] * state [ 41 ] ; logVector [ 42 ] = xx [
0 ] * state [ 42 ] ; logVector [ 43 ] = state [ 43 ] ; logVector [ 44 ] =
state [ 44 ] ; logVector [ 45 ] = state [ 45 ] ; logVector [ 46 ] = state [
46 ] ; logVector [ 47 ] = state [ 47 ] ; logVector [ 48 ] = state [ 48 ] ;
logVector [ 49 ] = state [ 49 ] ; logVector [ 50 ] = state [ 50 ] ; logVector
[ 51 ] = state [ 51 ] ; logVector [ 52 ] = state [ 52 ] ; logVector [ 53 ] =
xx [ 0 ] * state [ 53 ] ; logVector [ 54 ] = xx [ 0 ] * state [ 54 ] ;
logVector [ 55 ] = xx [ 0 ] * state [ 55 ] ; logVector [ 56 ] = inputDdot [ 2
] ; logVector [ 57 ] = inputDdot [ 3 ] ; logVector [ 58 ] = xx [ 0 ] *
inputDdot [ 4 ] ; logVector [ 59 ] = xx [ 0 ] * inputDdot [ 0 ] ; logVector [
60 ] = xx [ 0 ] * inputDdot [ 1 ] ; logVector [ 61 ] = xx [ 0 ] * inputDdot [
5 ] ; logVector [ 62 ] = xx [ 0 ] * inputDdot [ 6 ] ; logVector [ 63 ] = xx [
0 ] * inputDdot [ 7 ] ; logVector [ 64 ] = xx [ 0 ] * inputDdot [ 8 ] ;
logVector [ 65 ] = xx [ 0 ] * inputDdot [ 9 ] ; logVector [ 66 ] = xx [ 0 ] *
inputDdot [ 10 ] ; logVector [ 67 ] = xx [ 0 ] * inputDdot [ 11 ] ; logVector
[ 68 ] = xx [ 0 ] * inputDdot [ 12 ] ; logVector [ 69 ] = inputDdot [ 14 ] ;
logVector [ 70 ] = inputDdot [ 13 ] ; logVector [ 71 ] = xx [ 39 ] -
pm_math_Vector3_dot_ra ( xx + 14 , xx + 17 ) ; logVector [ 72 ] = xx [ 40 ] -
pm_math_Vector3_dot_ra ( xx + 5 , xx + 17 ) ; logVector [ 73 ] = xx [ 41 ] -
pm_math_Vector3_dot_ra ( xx + 8 , xx + 17 ) ; logVector [ 74 ] = xx [ 0 ] * (
xx [ 42 ] - pm_math_Vector3_dot_ra ( xx + 21 , xx + 17 ) ) ; logVector [ 75 ]
= xx [ 0 ] * ( xx [ 43 ] - pm_math_Vector3_dot_ra ( xx + 30 , xx + 17 ) ) ;
logVector [ 76 ] = xx [ 0 ] * ( xx [ 44 ] - pm_math_Vector3_dot_ra ( xx + 45
, xx + 17 ) ) ; logVector [ 77 ] = xx [ 81 ] - pm_math_Vector3_dot_ra ( xx +
11 , xx + 24 ) ; logVector [ 78 ] = xx [ 82 ] - pm_math_Vector3_dot_ra ( xx +
1 , xx + 24 ) ; logVector [ 79 ] = xx [ 83 ] - pm_math_Vector3_dot_ra ( xx +
27 , xx + 24 ) ; logVector [ 80 ] = xx [ 0 ] * ( xx [ 84 ] -
pm_math_Vector3_dot_ra ( xx + 33 , xx + 24 ) ) ; logVector [ 81 ] = xx [ 0 ]
* ( xx [ 85 ] - pm_math_Vector3_dot_ra ( xx + 48 , xx + 24 ) ) ; logVector [
82 ] = xx [ 0 ] * ( xx [ 86 ] - pm_math_Vector3_dot_ra ( xx + 51 , xx + 24 )
) ; errorResult [ 0 ] = xx [ 38 ] ; return NULL ; }
