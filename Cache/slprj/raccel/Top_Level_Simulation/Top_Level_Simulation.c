#include "Top_Level_Simulation.h"
#include "rtwtypes.h"
#include "Top_Level_Simulation_types.h"
#include <string.h>
#include "mwmathutil.h"
#include <emmintrin.h>
#include <stddef.h>
#include "Top_Level_Simulation_private.h"
#include "coder_posix_time.h"
#include <stdlib.h>
#include "rt_logging_mmi.h"
#include "Top_Level_Simulation_capi.h"
#include "zero_crossing_types.h"
#include "Top_Level_Simulation_dt.h"
extern void * CreateDiagnosticAsVoidPtr_wrapper ( const char * id , int nargs
, ... ) ; RTWExtModeInfo * gblRTWExtModeInfo = NULL ; void
raccelForceExtModeShutdown ( boolean_T extModeStartPktReceived ) { if ( !
extModeStartPktReceived ) { boolean_T stopRequested = false ;
rtExtModeWaitForStartPkt ( gblRTWExtModeInfo , 4 , & stopRequested ) ; }
rtExtModeShutdown ( 4 ) ; }
#include "slsv_diagnostic_codegen_c_api.h"
#include "slsa_sim_engine.h"
const int_T gblNumToFiles = 0 ; const int_T gblNumFrFiles = 0 ; const int_T
gblNumFrWksBlocks = 5 ;
#ifdef RSIM_WITH_SOLVER_MULTITASKING
boolean_T gbl_raccel_isMultitasking = 1 ;
#else
boolean_T gbl_raccel_isMultitasking = 0 ;
#endif
boolean_T gbl_raccel_tid01eq = 0 ; int_T gbl_raccel_NumST = 5 ; const char_T
* gbl_raccel_Version = "9.9 (R2023a) 19-Nov-2022" ; void
raccel_setup_MMIStateLog ( SimStruct * S ) {
#ifdef UseMMIDataLogging
rt_FillStateSigInfoFromMMI ( ssGetRTWLogInfo ( S ) , & ssGetErrorStatus ( S )
) ;
#else
UNUSED_PARAMETER ( S ) ;
#endif
} static DataMapInfo rt_dataMapInfo ; DataMapInfo * rt_dataMapInfoPtr = &
rt_dataMapInfo ; rtwCAPI_ModelMappingInfo * rt_modelMapInfoPtr = & (
rt_dataMapInfo . mmi ) ; const int_T gblNumRootInportBlks = 0 ; const int_T
gblNumModelInputs = 0 ; extern const char * gblInportFileName ; extern
rtInportTUtable * gblInportTUtables ; const int_T gblInportDataTypeIdx [ ] =
{ - 1 } ; const int_T gblInportDims [ ] = { - 1 } ; const int_T
gblInportComplex [ ] = { - 1 } ; const int_T gblInportInterpoFlag [ ] = { - 1
} ; const int_T gblInportContinuous [ ] = { - 1 } ; int_T enableFcnCallFlag [
] = { 1 , 1 , 1 , 1 , 1 } ; const char * raccelLoadInputsAndAperiodicHitTimes
( SimStruct * S , const char * inportFileName , int * matFileFormat ) {
return rt_RAccelReadInportsMatFile ( S , inportFileName , matFileFormat ) ; }
#include "simstruc.h"
#include "fixedpoint.h"
#include "slsa_sim_engine.h"
#include "simtarget/slSimTgtSLExecSimBridge.h"
#define nafxca1cr2 (-1)
B rtB ; X rtX ; DW rtDW ; PrevZCX rtPrevZCX ; static SimStruct model_S ;
SimStruct * const rtS = & model_S ; static void ek533x1it4 ( lg5jhfa1j5 * *
pEmxArray , int32_T numDimensions ) ; static void dini51be1gi ( cwp5dxx3gqu *
pStruct ) ; static void i0ncmbhzac ( e2t4yts01ix * * pEmxArray , int32_T
numDimensions ) ; static void dini51be1gin ( ejmcoi31fmi * pStruct ) ; static
void px5amfnxls ( ejmcoi31fmi pMatrix [ 15 ] ) ; static void jolvb3jiwj (
hnyeda4wkh * * pEmxArray , int32_T numDimensions ) ; static void a4cznrpw12 (
orkdduvnogx * pStruct ) ; static void foczdfh2ag ( orkdduvnogx pMatrix [ 15 ]
) ; static void px5amfnxlso ( cwp5dxx3gqu pMatrix [ 14 ] ) ; static void
dini51be1g ( fykx3ceulsm * pStruct ) ; static void dini51be1ginq ( fprravcitl
* pStruct ) ; static void dhhhk3qlth ( orkdduvnogx pMatrix [ 14 ] ) ; static
void px5amfnxlsoz ( cwp5dxx3gqu pMatrix [ 7 ] ) ; static void px5amfnxlsozz (
ejmcoi31fmi pMatrix [ 8 ] ) ; static void c1c2p4isa1 ( orkdduvnogx pMatrix [
8 ] ) ; static void dini51be1ginqj ( i5s4hgzi5z * pStruct ) ; static void
hwukur5g41 ( oy2a1akvcj * pStruct ) ; static void ns0wwfgupm ( grjfkdr5ak *
pStruct ) ; static void iyq5qy4rti ( pd0uxzf3xo * pStruct ) ; static void
gsven4ga0i ( lg5jhfa1j5 * emxArray , int32_T oldNumel ) ; static void
dqu5smbks1 ( lg5jhfa1j5 * * pEmxArray ) ; static void o4pyrzarz5 ( hnyeda4wkh
* emxArray , int32_T oldNumel ) ; static void fs3lm0fx5yx ( e2t4yts01ix *
emxArray , int32_T oldNumel ) ; static void fyinghe01v ( e2t4yts01ix * *
pEmxArray ) ; static ejmcoi31fmi * oosvd5bnheg ( ejmcoi31fmi * obj , real_T
maxElements ) ; static cwp5dxx3gqu * o2vdpxadfa ( cwp5dxx3gqu * obj ,
ejmcoi31fmi * iobj_0 , orkdduvnogx * iobj_1 ) ; static cwp5dxx3gqu *
jwk1ippo5j ( cwp5dxx3gqu * obj , ejmcoi31fmi * iobj_0 , orkdduvnogx * iobj_1
) ; static cwp5dxx3gqu * eaasm1dykq ( cwp5dxx3gqu * obj , ejmcoi31fmi *
iobj_0 , orkdduvnogx * iobj_1 ) ; static cwp5dxx3gqu * h10rtdjox1 (
cwp5dxx3gqu * obj , ejmcoi31fmi * iobj_0 , orkdduvnogx * iobj_1 ) ; static
cwp5dxx3gqu * pyoyrn1dx4 ( cwp5dxx3gqu * obj , ejmcoi31fmi * iobj_0 ,
orkdduvnogx * iobj_1 ) ; static cwp5dxx3gqu * fx2h4p5emg ( cwp5dxx3gqu * obj
, ejmcoi31fmi * iobj_0 , orkdduvnogx * iobj_1 ) ; static cwp5dxx3gqu *
jq00jcy14q ( cwp5dxx3gqu * obj , ejmcoi31fmi * iobj_0 , orkdduvnogx * iobj_1
) ; static cwp5dxx3gqu * nqakf1njg2 ( cwp5dxx3gqu * obj , ejmcoi31fmi *
iobj_0 , orkdduvnogx * iobj_1 ) ; static cwp5dxx3gqu * i4ef5xo4iv (
cwp5dxx3gqu * obj , ejmcoi31fmi * iobj_0 , orkdduvnogx * iobj_1 ) ; static
cwp5dxx3gqu * pvef0ss41c ( cwp5dxx3gqu * obj , ejmcoi31fmi * iobj_0 ,
orkdduvnogx * iobj_1 ) ; static cwp5dxx3gqu * othv5snbeo ( cwp5dxx3gqu * obj
, ejmcoi31fmi * iobj_0 , orkdduvnogx * iobj_1 ) ; static cwp5dxx3gqu *
k0veo1nxsu ( cwp5dxx3gqu * obj , ejmcoi31fmi * iobj_0 , orkdduvnogx * iobj_1
) ; static orkdduvnogx * jgx2lfyryv ( orkdduvnogx * obj , const lg5jhfa1j5 *
jname ) ; static fykx3ceulsm * lholsk5s1e ( fykx3ceulsm * obj ) ; static void
mmuhjsscra2 ( uint32_T mt [ 625 ] , uint32_T u [ 2 ] ) ; static boolean_T
hqcghxws2j ( const uint32_T mt [ 625 ] ) ; static void op4fr1mwv4 ( real_T r
[ 5 ] ) ; static boolean_T ndrymnz2f0 ( const lg5jhfa1j5 * a , const
lg5jhfa1j5 * b ) ; static real_T b3eyeozcmv ( i5s4hgzi5z * obj , const
lg5jhfa1j5 * bodyname ) ; static void jvu10fuanp ( hnyeda4wkh * * pEmxArray )
; static cwp5dxx3gqu * oqyznkjth4 ( cwp5dxx3gqu * obj , ejmcoi31fmi * iobj_0
, orkdduvnogx * iobj_1 , cwp5dxx3gqu * iobj_2 ) ; static void nl2gamam3g (
i5s4hgzi5z * obj , cwp5dxx3gqu * bodyin , const lg5jhfa1j5 * parentName ,
ejmcoi31fmi * iobj_0 , orkdduvnogx * iobj_1 , cwp5dxx3gqu * iobj_2 ) ; static
void lgtyg2ar0w ( grjfkdr5ak * obj , fykx3ceulsm * rigidbodytree ,
orkdduvnogx * iobj_0 , cwp5dxx3gqu * iobj_1 , ejmcoi31fmi * iobj_2 ,
i5s4hgzi5z * iobj_3 ) ; static void hhsrjmrs4eb ( pd0uxzf3xo * obj ) ; static
void aoaiqiehai ( orkdduvnog * pStruct ) ; static void i0ncmbhzacb (
e2t4yts01i * * pEmxArray , int32_T numDimensions ) ; static void ohoqjjlm0v (
ejmcoi31fm * pStruct ) ; static void ekbmduyfr3 ( cwp5dxx3gq * pStruct ) ;
static void px5amfnxlsozzl ( cwp5dxx3gq pMatrix [ 14 ] ) ; static void
dini51be1ginqjn ( fykx3ceuls * pStruct ) ; static void iyq5qy4rtit (
aivhh1v50g * pStruct ) ; static void fs3lm0fx5y ( e2t4yts01i * emxArray ,
int32_T oldNumel ) ; static void fyinghe01v5 ( e2t4yts01i * * pEmxArray ) ;
static ejmcoi31fm * oosvd5bnhe ( ejmcoi31fm * obj ) ; static cwp5dxx3gq *
bk5rrjfzpl ( cwp5dxx3gq * obj ) ; static cwp5dxx3gq * bk5rrjfzply (
cwp5dxx3gq * obj ) ; static cwp5dxx3gq * bk5rrjfzplyh ( cwp5dxx3gq * obj ) ;
static void afmkhidjlk ( fykx3ceuls * obj , cwp5dxx3gq * iobj_0 ) ; static
cwp5dxx3gq * bk5rrjfzplyhc ( cwp5dxx3gq * obj ) ; static cwp5dxx3gq *
bk5rrjfzplyhc0 ( cwp5dxx3gq * obj ) ; static cwp5dxx3gq * bk5rrjfzplyhc0n (
cwp5dxx3gq * obj ) ; static cwp5dxx3gq * fgvc0f5qwj ( cwp5dxx3gq * obj ) ;
static void hhsrjmrs4e ( aivhh1v50g * obj ) ; static void pydvmq1zho (
hohltwy3pn * * pEmxArray , int32_T numDimensions ) ; static void o1aul0u4rr (
hohltwy3pn * emxArray , int32_T oldNumel ) ; static void cxf0kehzkg (
hohltwy3pn * * pEmxArray ) ; static void hc1ry5yxnz ( i5s4hgzi5z * obj ,
hnyeda4wkh * limits ) ; static void jmui04zg1k ( boolean_T in1 [ 6 ] , const
real_T in2 [ 6 ] , const hnyeda4wkh * in3 ) ; static void epjk1yr5ig0n51u (
boolean_T in1 [ 6 ] , const real_T in2 [ 6 ] , const hnyeda4wkh * in3 ) ;
static void nrmihjhybi ( const boolean_T x [ 6 ] , int32_T i_data [ ] ,
int32_T * i_size ) ; static void ffbryqludb ( real_T * tstart_tv_sec , real_T
* tstart_tv_nsec ) ; static void d0w3001n1s ( i5s4hgzi5z * obj , cwp5dxx3gqu
* body , hnyeda4wkh * indices ) ; static void bf150obh1j ( i5s4hgzi5z * obj ,
cwp5dxx3gqu * body1 , cwp5dxx3gqu * body2 , hnyeda4wkh * indices ) ; static
void d20ewc4t52m ( const orkdduvnogx * obj , real_T ax [ 3 ] ) ; static void
l04ekjwzta ( real_T varargin_1 , real_T varargin_2 , real_T varargin_3 ,
real_T varargin_4 , real_T varargin_5 , real_T varargin_6 , real_T varargin_7
, real_T varargin_8 , real_T varargin_9 , real_T y [ 9 ] ) ; static void
g1ccfqf002 ( const real_T A [ 36 ] , const hnyeda4wkh * B_e , hnyeda4wkh * C
) ; static void g3hhstjumo ( i5s4hgzi5z * obj , const real_T qv [ 6 ] , const
lg5jhfa1j5 * body1Name , real_T T_data [ ] , int32_T T_size [ 2 ] ,
hnyeda4wkh * Jac ) ; static creal_T l4w5q3r2nf ( const creal_T x ) ; static
real_T jzgpahy5q0 ( int32_T n , const real_T x [ 9 ] , int32_T ix0 ) ; static
real_T iytcjtxacb ( int32_T n , const real_T x [ 9 ] , int32_T ix0 , const
real_T y [ 9 ] , int32_T iy0 ) ; static void fxplc5kfuy ( int32_T n , real_T
a , int32_T ix0 , const real_T y [ 9 ] , int32_T iy0 , real_T b_y [ 9 ] ) ;
static real_T jzgpahy5q0o ( const real_T x [ 3 ] , int32_T ix0 ) ; static
void fxplc5kfuy0dd ( int32_T n , real_T a , const real_T x [ 9 ] , int32_T
ix0 , real_T y [ 3 ] , int32_T iy0 ) ; static void fxplc5kfuy0d ( int32_T n ,
real_T a , const real_T x [ 3 ] , int32_T ix0 , const real_T y [ 9 ] ,
int32_T iy0 , real_T b_y [ 9 ] ) ; static void mwey5zjafr ( const real_T x [
9 ] , int32_T ix0 , int32_T iy0 , real_T b_x [ 9 ] ) ; static void puosmdyojh
( real_T a , real_T b , real_T * b_a , real_T * b_b , real_T * c , real_T * s
) ; static void bqymtfhzny ( const real_T x [ 9 ] , int32_T ix0 , int32_T iy0
, real_T c , real_T s , real_T b_x [ 9 ] ) ; static void jun2xcusfc ( const
real_T A [ 9 ] , real_T U [ 9 ] , real_T s [ 3 ] , real_T V [ 9 ] ) ; static
void jdyfpxqf0y ( const real_T x [ 6 ] , fprravcitl * args , real_T * cost ,
real_T W [ 36 ] , hnyeda4wkh * Jac , fprravcitl * * b_args ) ; static void
bob53arkio ( i2qqrhl1oe * * pEmxArray , int32_T numDimensions ) ; static void
drgklfcy43 ( nabfuq4qup * * pEmxArray , int32_T numDimensions ) ; static void
pyp4acmmkn ( i2qqrhl1oe * emxArray , int32_T oldNumel ) ; static void
g1ccfqf002d ( const hnyeda4wkh * A , const real_T B_i [ 6 ] , hnyeda4wkh * C
) ; static void epjk1yr5ig0n51 ( i2qqrhl1oe * in1 , const hnyeda4wkh * in2 ,
const oy2a1akvcj * in3 ) ; static void h4sw33p0mb ( nabfuq4qup * emxArray ,
int32_T oldNumel ) ; static void g1ccfqf002df ( const real_T A [ 36 ] , const
hnyeda4wkh * B_m , hnyeda4wkh * C ) ; static real_T e2fc0rh1xvp ( const
real_T x [ 6 ] ) ; static real_T eh4ajh14pa ( real_T tstart_tv_sec , real_T
tstart_tv_nsec ) ; static void g1ccfqf002dfl ( const hnyeda4wkh * A , const
hnyeda4wkh * B_i , hnyeda4wkh * C ) ; static real_T jzgpahy5q0ot ( int32_T n
, const hnyeda4wkh * x , int32_T ix0 ) ; static void lvpphjmwx4 ( nabfuq4qup
* * pEmxArray ) ; static void pyodapq0a4 ( const hnyeda4wkh * A , hnyeda4wkh
* b_A , hnyeda4wkh * tau , nabfuq4qup * jpvt ) ; static void pgkq5ie3re (
int32_T m , int32_T n , const hnyeda4wkh * A , int32_T lda , hnyeda4wkh * b_A
, nabfuq4qup * ipiv , int32_T * info ) ; static void jy11nl4vle ( int32_T m ,
int32_T n , const hnyeda4wkh * A , int32_T lda , const hnyeda4wkh * B_p ,
int32_T ldb , hnyeda4wkh * b_B ) ; static void pjivvek2mh ( const hnyeda4wkh
* A , const hnyeda4wkh * B_e , hnyeda4wkh * Y ) ; static void hknlcbnvzi (
const hnyeda4wkh * x , hnyeda4wkh * y ) ; static void hjt0i4ijtz ( const
hnyeda4wkh * x , real_T * ex , int32_T * idx ) ; static void epjk1yr5ig0n5 (
const hnyeda4wkh * in1 , const hnyeda4wkh * in2 , real_T * out1 , int32_T *
out2 ) ; static boolean_T jwl4kngeul ( const i2qqrhl1oe * x ) ; static void
epjk1yr5ig0n ( hnyeda4wkh * in1 , const hnyeda4wkh * in2 , const hnyeda4wkh *
in3 ) ; static void nrmihjhybi5 ( const i2qqrhl1oe * x , nabfuq4qup * i ) ;
static void nhs4l5nqsu ( const hnyeda4wkh * x , real_T * ex , int32_T * idx )
; static void e0vmbp53uio1 ( hnyeda4wkh * in1 , const hnyeda4wkh * in2 ) ;
static void epjk1yr5ig0 ( real_T in1 [ 36 ] , const real_T in2 [ 36 ] , const
real_T in3 [ 6 ] , const hnyeda4wkh * in4 , real_T in5 ) ; static boolean_T
pfrc22cnw4 ( const real_T B_f [ 36 ] ) ; static void g1ccfqf002dfli ( const
hnyeda4wkh * A , const hnyeda4wkh * B_j , hnyeda4wkh * C ) ; static void
e0vmbp53uio ( real_T in1 [ 36 ] , const hnyeda4wkh * in2 ) ; static void
kkefezl0wy ( i2qqrhl1oe * * pEmxArray ) ; static void ed4opnbslm ( oy2a1akvcj
* obj , real_T xSol [ 6 ] , ehzicop4dv * exitFlag , real_T * err , real_T *
iter ) ; static void j4po4dx30s ( const real_T varargin_1 [ 2 ] , hnyeda4wkh
* r ) ; static void e0vmbp53ui ( hnyeda4wkh * in1 , const hnyeda4wkh * in2 )
; static void fg5a5qqgee ( hnyeda4wkh * in1 , const hnyeda4wkh * in2 ) ;
static void op4fr1mwv4z ( real_T varargin_1 , hnyeda4wkh * r ) ; static void
epjk1yr5ig ( hnyeda4wkh * in1 , const hnyeda4wkh * in2 , const hnyeda4wkh *
in3 ) ; static void mjomgs30rz ( oy2a1akvcj * obj , const real_T seed [ 6 ] ,
real_T xSol [ 6 ] , real_T * solutionInfo_Iterations , real_T *
solutionInfo_RRAttempts , real_T * solutionInfo_Error , real_T *
solutionInfo_ExitFlag , char_T solutionInfo_Status_data [ ] , int32_T
solutionInfo_Status_size [ 2 ] ) ; static void o0lxk1boud ( netvxor230 * *
pEmxArray , int32_T numDimensions ) ; static void bndirxciwo ( netvxor230 *
emxArray , int32_T oldNumel ) ; static void ekfw4a23vn ( netvxor230 * *
pEmxArray ) ; static void j0n3cmv241e ( grjfkdr5ak * obj , real_T
initialGuess [ 6 ] , real_T * solutionInfo_Iterations , real_T *
solutionInfo_NumRandomRestarts , real_T * solutionInfo_PoseErrorNorm , real_T
* solutionInfo_ExitFlag , char_T solutionInfo_Status_data [ ] , int32_T
solutionInfo_Status_size [ 2 ] ) ; static void b5ffj5iztu ( grjfkdr5ak * obj
, const real_T tform [ 16 ] , const real_T weights [ 6 ] , const real_T
initialGuess [ 6 ] , real_T QSol [ 6 ] , real_T * solutionInfo_Iterations ,
real_T * solutionInfo_PoseErrorNorm , real_T * solutionInfo_ExitFlag , char_T
solutionInfo_Status_data [ ] , int32_T solutionInfo_Status_size [ 2 ] ) ;
static void pmm1khoijv ( kubhfbb3hs * * pEmxArray , int32_T numDimensions ) ;
static void plhqacaehj ( kubhfbb3hs * emxArray , int32_T oldNumel ) ; static
void d20ewc4t52 ( const orkdduvnog * obj , real_T ax [ 3 ] ) ; static void
cilf3n2fri ( kubhfbb3hs * * pEmxArray ) ; static void lhhuyseiyj ( const
real_T a_data [ ] , const int32_T a_size [ 3 ] , const real_T b_data [ ] ,
const int32_T b_size [ 3 ] , real_T c_data [ ] , int32_T c_size [ 3 ] ) ;
static void dpdmofhgjc ( cwp5dxx3gqu * pStruct ) ; static void dpdmofhgjcwg (
ejmcoi31fmi * pStruct ) ; static void gwxstyqisd ( ejmcoi31fmi pMatrix [ 15 ]
) ; static void mopmtabj5r ( orkdduvnogx * pStruct ) ; static void l4l53za0lc
( orkdduvnogx pMatrix [ 15 ] ) ; static void gwxstyqisdw ( cwp5dxx3gqu
pMatrix [ 14 ] ) ; static void dpdmofhgjcw ( fykx3ceulsm * pStruct ) ; static
void dpdmofhgjcwgx ( fprravcitl * pStruct ) ; static void aqejlilybx (
orkdduvnogx pMatrix [ 14 ] ) ; static void gwxstyqisdwa ( cwp5dxx3gqu pMatrix
[ 7 ] ) ; static void gwxstyqisdwaq ( ejmcoi31fmi pMatrix [ 8 ] ) ; static
void cpnizw4ibw ( orkdduvnogx pMatrix [ 8 ] ) ; static void dpdmofhgjcwgxl (
i5s4hgzi5z * pStruct ) ; static void fvg3bcbk3q ( oy2a1akvcj * pStruct ) ;
static void nt4vo22ypv ( grjfkdr5ak * pStruct ) ; static void f35545hcid (
pd0uxzf3xo * pStruct ) ; static void nissuvhw0c ( orkdduvnog * pStruct ) ;
static void djhzttpxwv ( ejmcoi31fm * pStruct ) ; static void dpdmofhgjcwgxla
( cwp5dxx3gq * pStruct ) ; static void gwxstyqisdwaqk ( cwp5dxx3gq pMatrix [
14 ] ) ; static void fivqzjsyyy ( fykx3ceuls * pStruct ) ; static void
f35545hcidc ( aivhh1v50g * pStruct ) ; int32_T div_s32 ( int32_T numerator ,
int32_T denominator ) { int32_T quotient ; uint32_T tempAbsQuotient ; if (
denominator == 0 ) { quotient = numerator >= 0 ? MAX_int32_T : MIN_int32_T ;
} else { tempAbsQuotient = ( numerator < 0 ? ~ ( uint32_T ) numerator + 1U :
( uint32_T ) numerator ) / ( denominator < 0 ? ~ ( uint32_T ) denominator +
1U : ( uint32_T ) denominator ) ; quotient = ( numerator < 0 ) != (
denominator < 0 ) ? - ( int32_T ) tempAbsQuotient : ( int32_T )
tempAbsQuotient ; } return quotient ; } int32_T div_nde_s32_floor ( int32_T
numerator , int32_T denominator ) { return ( ( ( numerator < 0 ) != (
denominator < 0 ) ) && ( numerator % denominator != 0 ) ? - 1 : 0 ) +
numerator / denominator ; } static void ek533x1it4 ( lg5jhfa1j5 * * pEmxArray
, int32_T numDimensions ) { lg5jhfa1j5 * emxArray ; int32_T i ; * pEmxArray =
( lg5jhfa1j5 * ) malloc ( sizeof ( lg5jhfa1j5 ) ) ; emxArray = * pEmxArray ;
emxArray -> data = ( char_T * ) NULL ; emxArray -> numDimensions =
numDimensions ; emxArray -> size = ( int32_T * ) malloc ( sizeof ( int32_T )
* ( uint32_T ) numDimensions ) ; emxArray -> allocatedSize = 0 ; emxArray ->
canFreeData = true ; for ( i = 0 ; i < numDimensions ; i ++ ) { emxArray ->
size [ i ] = 0 ; } } static void dini51be1gi ( cwp5dxx3gqu * pStruct ) {
ek533x1it4 ( & pStruct -> NameInternal , 2 ) ; } static void i0ncmbhzac (
e2t4yts01ix * * pEmxArray , int32_T numDimensions ) { e2t4yts01ix * emxArray
; int32_T i ; * pEmxArray = ( e2t4yts01ix * ) malloc ( sizeof ( e2t4yts01ix )
) ; emxArray = * pEmxArray ; emxArray -> data = ( jy5nolvw3ph * ) NULL ;
emxArray -> numDimensions = numDimensions ; emxArray -> size = ( int32_T * )
malloc ( sizeof ( int32_T ) * ( uint32_T ) numDimensions ) ; emxArray ->
allocatedSize = 0 ; emxArray -> canFreeData = true ; for ( i = 0 ; i <
numDimensions ; i ++ ) { emxArray -> size [ i ] = 0 ; } } static void
dini51be1gin ( ejmcoi31fmi * pStruct ) { i0ncmbhzac ( & pStruct ->
CollisionGeometries , 2 ) ; } static void px5amfnxls ( ejmcoi31fmi pMatrix [
15 ] ) { int32_T i ; for ( i = 0 ; i < 15 ; i ++ ) { dini51be1gin ( & pMatrix
[ i ] ) ; } } static void jolvb3jiwj ( hnyeda4wkh * * pEmxArray , int32_T
numDimensions ) { hnyeda4wkh * emxArray ; int32_T i ; * pEmxArray = (
hnyeda4wkh * ) malloc ( sizeof ( hnyeda4wkh ) ) ; emxArray = * pEmxArray ;
emxArray -> data = ( real_T * ) NULL ; emxArray -> numDimensions =
numDimensions ; emxArray -> size = ( int32_T * ) malloc ( sizeof ( int32_T )
* ( uint32_T ) numDimensions ) ; emxArray -> allocatedSize = 0 ; emxArray ->
canFreeData = true ; for ( i = 0 ; i < numDimensions ; i ++ ) { emxArray ->
size [ i ] = 0 ; } } static void a4cznrpw12 ( orkdduvnogx * pStruct ) {
ek533x1it4 ( & pStruct -> Type , 2 ) ; jolvb3jiwj ( & pStruct ->
MotionSubspace , 2 ) ; ek533x1it4 ( & pStruct -> NameInternal , 2 ) ;
jolvb3jiwj ( & pStruct -> PositionLimitsInternal , 2 ) ; jolvb3jiwj ( &
pStruct -> HomePositionInternal , 1 ) ; } static void foczdfh2ag (
orkdduvnogx pMatrix [ 15 ] ) { int32_T i ; for ( i = 0 ; i < 15 ; i ++ ) {
a4cznrpw12 ( & pMatrix [ i ] ) ; } } static void px5amfnxlso ( cwp5dxx3gqu
pMatrix [ 14 ] ) { int32_T i ; for ( i = 0 ; i < 14 ; i ++ ) { dini51be1gi (
& pMatrix [ i ] ) ; } } static void dini51be1g ( fykx3ceulsm * pStruct ) {
dini51be1gi ( & pStruct -> Base ) ; px5amfnxls ( pStruct -> _pobj0 ) ;
foczdfh2ag ( pStruct -> _pobj1 ) ; px5amfnxlso ( pStruct -> _pobj2 ) ; }
static void dini51be1ginq ( fprravcitl * pStruct ) { ek533x1it4 ( & pStruct
-> BodyName , 2 ) ; jolvb3jiwj ( & pStruct -> ErrTemp , 1 ) ; jolvb3jiwj ( &
pStruct -> GradTemp , 1 ) ; } static void dhhhk3qlth ( orkdduvnogx pMatrix [
14 ] ) { int32_T i ; for ( i = 0 ; i < 14 ; i ++ ) { a4cznrpw12 ( & pMatrix [
i ] ) ; } } static void px5amfnxlsoz ( cwp5dxx3gqu pMatrix [ 7 ] ) { int32_T
i ; for ( i = 0 ; i < 7 ; i ++ ) { dini51be1gi ( & pMatrix [ i ] ) ; } }
static void px5amfnxlsozz ( ejmcoi31fmi pMatrix [ 8 ] ) { int32_T i ; for ( i
= 0 ; i < 8 ; i ++ ) { dini51be1gin ( & pMatrix [ i ] ) ; } } static void
c1c2p4isa1 ( orkdduvnogx pMatrix [ 8 ] ) { int32_T i ; for ( i = 0 ; i < 8 ;
i ++ ) { a4cznrpw12 ( & pMatrix [ i ] ) ; } } static void dini51be1ginqj (
i5s4hgzi5z * pStruct ) { dini51be1gi ( & pStruct -> Base ) ; px5amfnxlsoz (
pStruct -> _pobj0 ) ; px5amfnxlsozz ( pStruct -> _pobj1 ) ; c1c2p4isa1 (
pStruct -> _pobj2 ) ; } static void hwukur5g41 ( oy2a1akvcj * pStruct ) {
jolvb3jiwj ( & pStruct -> ConstraintMatrix , 2 ) ; jolvb3jiwj ( & pStruct ->
ConstraintBound , 1 ) ; } static void ns0wwfgupm ( grjfkdr5ak * pStruct ) {
jolvb3jiwj ( & pStruct -> Limits , 2 ) ; dini51be1ginq ( & pStruct -> _pobj0
) ; dhhhk3qlth ( pStruct -> _pobj1 ) ; px5amfnxlsoz ( pStruct -> _pobj2 ) ;
px5amfnxls ( pStruct -> _pobj3 ) ; dini51be1ginqj ( & pStruct -> _pobj4 ) ;
hwukur5g41 ( & pStruct -> _pobj5 ) ; } static void iyq5qy4rti ( pd0uxzf3xo *
pStruct ) { dini51be1g ( & pStruct -> TreeInternal ) ; ns0wwfgupm ( & pStruct
-> IKInternal ) ; } static void gsven4ga0i ( lg5jhfa1j5 * emxArray , int32_T
oldNumel ) { int32_T i ; int32_T newNumel ; void * newData ; if ( oldNumel <
0 ) { oldNumel = 0 ; } newNumel = 1 ; for ( i = 0 ; i < emxArray ->
numDimensions ; i ++ ) { newNumel *= emxArray -> size [ i ] ; } if ( newNumel
> emxArray -> allocatedSize ) { i = emxArray -> allocatedSize ; if ( i < 16 )
{ i = 16 ; } while ( i < newNumel ) { if ( i > 1073741823 ) { i = MAX_int32_T
; } else { i <<= 1 ; } } newData = calloc ( ( uint32_T ) i , sizeof ( char_T
) ) ; if ( emxArray -> data != NULL ) { memcpy ( newData , emxArray -> data ,
sizeof ( char_T ) * ( uint32_T ) oldNumel ) ; if ( emxArray -> canFreeData )
{ free ( emxArray -> data ) ; } } emxArray -> data = ( char_T * ) newData ;
emxArray -> allocatedSize = i ; emxArray -> canFreeData = true ; } } static
void dqu5smbks1 ( lg5jhfa1j5 * * pEmxArray ) { if ( * pEmxArray != (
lg5jhfa1j5 * ) NULL ) { if ( ( ( * pEmxArray ) -> data != ( char_T * ) NULL )
&& ( * pEmxArray ) -> canFreeData ) { free ( ( * pEmxArray ) -> data ) ; }
free ( ( * pEmxArray ) -> size ) ; free ( * pEmxArray ) ; * pEmxArray = (
lg5jhfa1j5 * ) NULL ; } } static void o4pyrzarz5 ( hnyeda4wkh * emxArray ,
int32_T oldNumel ) { int32_T i ; int32_T newNumel ; void * newData ; if (
oldNumel < 0 ) { oldNumel = 0 ; } newNumel = 1 ; for ( i = 0 ; i < emxArray
-> numDimensions ; i ++ ) { newNumel *= emxArray -> size [ i ] ; } if (
newNumel > emxArray -> allocatedSize ) { i = emxArray -> allocatedSize ; if (
i < 16 ) { i = 16 ; } while ( i < newNumel ) { if ( i > 1073741823 ) { i =
MAX_int32_T ; } else { i <<= 1 ; } } newData = calloc ( ( uint32_T ) i ,
sizeof ( real_T ) ) ; if ( emxArray -> data != NULL ) { memcpy ( newData ,
emxArray -> data , sizeof ( real_T ) * ( uint32_T ) oldNumel ) ; if (
emxArray -> canFreeData ) { free ( emxArray -> data ) ; } } emxArray -> data
= ( real_T * ) newData ; emxArray -> allocatedSize = i ; emxArray ->
canFreeData = true ; } } static void fs3lm0fx5yx ( e2t4yts01ix * emxArray ,
int32_T oldNumel ) { int32_T i ; int32_T newNumel ; void * newData ; if (
oldNumel < 0 ) { oldNumel = 0 ; } newNumel = 1 ; for ( i = 0 ; i < emxArray
-> numDimensions ; i ++ ) { newNumel *= emxArray -> size [ i ] ; } if (
newNumel > emxArray -> allocatedSize ) { i = emxArray -> allocatedSize ; if (
i < 16 ) { i = 16 ; } while ( i < newNumel ) { if ( i > 1073741823 ) { i =
MAX_int32_T ; } else { i <<= 1 ; } } newData = calloc ( ( uint32_T ) i ,
sizeof ( jy5nolvw3ph ) ) ; if ( emxArray -> data != NULL ) { memcpy ( newData
, emxArray -> data , sizeof ( jy5nolvw3ph ) * ( uint32_T ) oldNumel ) ; if (
emxArray -> canFreeData ) { free ( emxArray -> data ) ; } } emxArray -> data
= ( jy5nolvw3ph * ) newData ; emxArray -> allocatedSize = i ; emxArray ->
canFreeData = true ; } } static void fyinghe01v ( e2t4yts01ix * * pEmxArray )
{ if ( * pEmxArray != ( e2t4yts01ix * ) NULL ) { if ( ( ( * pEmxArray ) ->
data != ( jy5nolvw3ph * ) NULL ) && ( * pEmxArray ) -> canFreeData ) { free (
( * pEmxArray ) -> data ) ; } free ( ( * pEmxArray ) -> size ) ; free ( *
pEmxArray ) ; * pEmxArray = ( e2t4yts01ix * ) NULL ; } } static ejmcoi31fmi *
oosvd5bnheg ( ejmcoi31fmi * obj , real_T maxElements ) { void *
defaultCollisionObj_GeometryInternal ; e2t4yts01ix * e ; ejmcoi31fmi * b_obj
; real_T c ; int32_T b_i ; int32_T d ; int8_T localPose [ 16 ] ; static const
int8_T tmp [ 16 ] = { 1 , 0 , 0 , 0 , 0 , 1 , 0 , 0 , 0 , 0 , 1 , 0 , 0 , 0 ,
0 , 1 } ; int32_T i ; obj -> Size = 0.0 ; b_obj = obj ; obj -> MaxElements =
maxElements ; i0ncmbhzac ( & e , 2 ) ; i = e -> size [ 0 ] * e -> size [ 1 ]
; e -> size [ 1 ] = ( int32_T ) obj -> MaxElements ; fs3lm0fx5yx ( e , i ) ;
i = obj -> CollisionGeometries -> size [ 0 ] * obj -> CollisionGeometries ->
size [ 1 ] ; obj -> CollisionGeometries -> size [ 0 ] = 1 ; obj ->
CollisionGeometries -> size [ 1 ] = e -> size [ 1 ] ; fyinghe01v ( & e ) ;
fs3lm0fx5yx ( obj -> CollisionGeometries , i ) ;
defaultCollisionObj_GeometryInternal = NULL ; for ( i = 0 ; i < 16 ; i ++ ) {
localPose [ i ] = tmp [ i ] ; } c = obj -> MaxElements ; d = ( int32_T ) c -
1 ; for ( b_i = 0 ; b_i <= d ; b_i ++ ) { obj -> CollisionGeometries -> data
[ b_i ] . CollisionPrimitive = defaultCollisionObj_GeometryInternal ; for ( i
= 0 ; i < 16 ; i ++ ) { obj -> CollisionGeometries -> data [ b_i ] .
LocalPose [ i ] = localPose [ i ] ; } for ( i = 0 ; i < 16 ; i ++ ) { obj ->
CollisionGeometries -> data [ b_i ] . WorldPose [ i ] = localPose [ i ] ; } }
obj -> matlabCodegenIsDeleted = false ; return b_obj ; } static cwp5dxx3gqu *
o2vdpxadfa ( cwp5dxx3gqu * obj , ejmcoi31fmi * iobj_0 , orkdduvnogx * iobj_1
) { cwp5dxx3gqu * b_obj ; lg5jhfa1j5 * switch_expression ; real_T poslim_data
[ 12 ] ; int32_T b_kstr ; int32_T loop_ub ; char_T b_p [ 9 ] ; char_T b [ 8 ]
; int8_T msubspace_data [ 36 ] ; int8_T b_I [ 9 ] ; int8_T tmp [ 6 ] ;
boolean_T b_bool ; static const char_T tmp_p [ 10 ] = { 'd' , 'u' , 'm' , 'm'
, 'y' , 'b' , 'o' , 'd' , 'y' , '1' } ; static const int8_T tmp_e [ 16 ] = {
1 , 0 , 0 , 0 , 0 , 1 , 0 , 0 , 0 , 0 , 1 , 0 , 0 , 0 , 0 , 1 } ; static
const char_T tmp_i [ 14 ] = { 'd' , 'u' , 'm' , 'm' , 'y' , 'b' , 'o' , 'd' ,
'y' , '1' , '_' , 'j' , 'n' , 't' } ; static const char_T tmp_m [ 5 ] = { 'f'
, 'i' , 'x' , 'e' , 'd' } ; static const char_T tmp_g [ 8 ] = { 'r' , 'e' ,
'v' , 'o' , 'l' , 'u' , 't' , 'e' } ; static const char_T tmp_j [ 9 ] = { 'p'
, 'r' , 'i' , 's' , 'm' , 'a' , 't' , 'i' , 'c' } ; int32_T exitg1 ; b_obj =
obj ; b_kstr = obj -> NameInternal -> size [ 0 ] * obj -> NameInternal ->
size [ 1 ] ; obj -> NameInternal -> size [ 0 ] = 1 ; obj -> NameInternal ->
size [ 1 ] = 10 ; gsven4ga0i ( obj -> NameInternal , b_kstr ) ; for ( b_kstr
= 0 ; b_kstr < 10 ; b_kstr ++ ) { obj -> NameInternal -> data [ b_kstr ] =
tmp_p [ b_kstr ] ; } iobj_1 -> InTree = false ; for ( b_kstr = 0 ; b_kstr <
16 ; b_kstr ++ ) { iobj_1 -> JointToParentTransform [ b_kstr ] = tmp_e [
b_kstr ] ; } for ( b_kstr = 0 ; b_kstr < 16 ; b_kstr ++ ) { iobj_1 ->
ChildToJointTransform [ b_kstr ] = tmp_e [ b_kstr ] ; } b_kstr = iobj_1 ->
NameInternal -> size [ 0 ] * iobj_1 -> NameInternal -> size [ 1 ] ; iobj_1 ->
NameInternal -> size [ 0 ] = 1 ; iobj_1 -> NameInternal -> size [ 1 ] = 14 ;
gsven4ga0i ( iobj_1 -> NameInternal , b_kstr ) ; for ( b_kstr = 0 ; b_kstr <
14 ; b_kstr ++ ) { iobj_1 -> NameInternal -> data [ b_kstr ] = tmp_i [ b_kstr
] ; } b_kstr = iobj_1 -> Type -> size [ 0 ] * iobj_1 -> Type -> size [ 1 ] ;
iobj_1 -> Type -> size [ 0 ] = 1 ; iobj_1 -> Type -> size [ 1 ] = 5 ;
gsven4ga0i ( iobj_1 -> Type , b_kstr ) ; for ( b_kstr = 0 ; b_kstr < 5 ;
b_kstr ++ ) { iobj_1 -> Type -> data [ b_kstr ] = tmp_m [ b_kstr ] ; }
ek533x1it4 ( & switch_expression , 2 ) ; b_kstr = switch_expression -> size [
0 ] * switch_expression -> size [ 1 ] ; switch_expression -> size [ 0 ] = 1 ;
switch_expression -> size [ 1 ] = iobj_1 -> Type -> size [ 1 ] ; gsven4ga0i (
switch_expression , b_kstr ) ; loop_ub = iobj_1 -> Type -> size [ 1 ] ; for (
b_kstr = 0 ; b_kstr < loop_ub ; b_kstr ++ ) { switch_expression -> data [
b_kstr ] = iobj_1 -> Type -> data [ b_kstr ] ; } for ( b_kstr = 0 ; b_kstr <
8 ; b_kstr ++ ) { b [ b_kstr ] = tmp_g [ b_kstr ] ; } b_bool = false ; if (
switch_expression -> size [ 1 ] != 8 ) { } else { b_kstr = 1 ; do { exitg1 =
0 ; if ( b_kstr - 1 < 8 ) { if ( switch_expression -> data [ b_kstr - 1 ] !=
b [ b_kstr - 1 ] ) { exitg1 = 1 ; } else { b_kstr ++ ; } } else { b_bool =
true ; exitg1 = 1 ; } } while ( exitg1 == 0 ) ; } if ( b_bool ) { b_kstr = 0
; } else { for ( b_kstr = 0 ; b_kstr < 9 ; b_kstr ++ ) { b_p [ b_kstr ] =
tmp_j [ b_kstr ] ; } if ( switch_expression -> size [ 1 ] != 9 ) { } else {
b_kstr = 1 ; do { exitg1 = 0 ; if ( b_kstr - 1 < 9 ) { if ( switch_expression
-> data [ b_kstr - 1 ] != b_p [ b_kstr - 1 ] ) { exitg1 = 1 ; } else { b_kstr
++ ; } } else { b_bool = true ; exitg1 = 1 ; } } while ( exitg1 == 0 ) ; } if
( b_bool ) { b_kstr = 1 ; } else { b_kstr = - 1 ; } } dqu5smbks1 ( &
switch_expression ) ; switch ( b_kstr ) { case 0 : tmp [ 0 ] = 0 ; tmp [ 1 ]
= 0 ; tmp [ 2 ] = 1 ; tmp [ 3 ] = 0 ; tmp [ 4 ] = 0 ; tmp [ 5 ] = 0 ; for (
b_kstr = 0 ; b_kstr < 6 ; b_kstr ++ ) { msubspace_data [ b_kstr ] = tmp [
b_kstr ] ; } poslim_data [ 0 ] = - 3.1415926535897931 ; poslim_data [ 1 ] =
3.1415926535897931 ; iobj_1 -> VelocityNumber = 1.0 ; iobj_1 ->
PositionNumber = 1.0 ; iobj_1 -> JointAxisInternal [ 0 ] = 0.0 ; iobj_1 ->
JointAxisInternal [ 1 ] = 0.0 ; iobj_1 -> JointAxisInternal [ 2 ] = 1.0 ;
break ; case 1 : tmp [ 0 ] = 0 ; tmp [ 1 ] = 0 ; tmp [ 2 ] = 0 ; tmp [ 3 ] =
0 ; tmp [ 4 ] = 0 ; tmp [ 5 ] = 1 ; for ( b_kstr = 0 ; b_kstr < 6 ; b_kstr ++
) { msubspace_data [ b_kstr ] = tmp [ b_kstr ] ; } poslim_data [ 0 ] = - 0.5
; poslim_data [ 1 ] = 0.5 ; iobj_1 -> VelocityNumber = 1.0 ; iobj_1 ->
PositionNumber = 1.0 ; iobj_1 -> JointAxisInternal [ 0 ] = 0.0 ; iobj_1 ->
JointAxisInternal [ 1 ] = 0.0 ; iobj_1 -> JointAxisInternal [ 2 ] = 1.0 ;
break ; default : for ( b_kstr = 0 ; b_kstr < 6 ; b_kstr ++ ) {
msubspace_data [ b_kstr ] = 0 ; } poslim_data [ 0 ] = 0.0 ; poslim_data [ 1 ]
= 0.0 ; iobj_1 -> VelocityNumber = 0.0 ; iobj_1 -> PositionNumber = 0.0 ;
iobj_1 -> JointAxisInternal [ 0 ] = 0.0 ; iobj_1 -> JointAxisInternal [ 1 ] =
0.0 ; iobj_1 -> JointAxisInternal [ 2 ] = 0.0 ; break ; } b_kstr = iobj_1 ->
MotionSubspace -> size [ 0 ] * iobj_1 -> MotionSubspace -> size [ 1 ] ;
iobj_1 -> MotionSubspace -> size [ 0 ] = 6 ; iobj_1 -> MotionSubspace -> size
[ 1 ] = 1 ; o4pyrzarz5 ( iobj_1 -> MotionSubspace , b_kstr ) ; for ( b_kstr =
0 ; b_kstr < 6 ; b_kstr ++ ) { iobj_1 -> MotionSubspace -> data [ b_kstr ] =
msubspace_data [ b_kstr ] ; } b_kstr = iobj_1 -> PositionLimitsInternal ->
size [ 0 ] * iobj_1 -> PositionLimitsInternal -> size [ 1 ] ; iobj_1 ->
PositionLimitsInternal -> size [ 0 ] = 1 ; iobj_1 -> PositionLimitsInternal
-> size [ 1 ] = 2 ; o4pyrzarz5 ( iobj_1 -> PositionLimitsInternal , b_kstr )
; for ( b_kstr = 0 ; b_kstr < 2 ; b_kstr ++ ) { iobj_1 ->
PositionLimitsInternal -> data [ b_kstr ] = poslim_data [ b_kstr ] ; } b_kstr
= iobj_1 -> HomePositionInternal -> size [ 0 ] ; iobj_1 ->
HomePositionInternal -> size [ 0 ] = 1 ; o4pyrzarz5 ( iobj_1 ->
HomePositionInternal , b_kstr ) ; iobj_1 -> HomePositionInternal -> data [ 0
] = 0.0 ; obj -> JointInternal = iobj_1 ; obj -> Index = - 1.0 ; obj ->
ParentIndex = - 1.0 ; obj -> MassInternal = 1.0 ; obj -> CenterOfMassInternal
[ 0 ] = 0.0 ; obj -> CenterOfMassInternal [ 1 ] = 0.0 ; obj ->
CenterOfMassInternal [ 2 ] = 0.0 ; for ( b_kstr = 0 ; b_kstr < 9 ; b_kstr ++
) { b_I [ b_kstr ] = 0 ; } b_I [ 0 ] = 1 ; b_I [ 4 ] = 1 ; b_I [ 8 ] = 1 ;
for ( b_kstr = 0 ; b_kstr < 9 ; b_kstr ++ ) { obj -> InertiaInternal [ b_kstr
] = b_I [ b_kstr ] ; } for ( b_kstr = 0 ; b_kstr < 36 ; b_kstr ++ ) {
msubspace_data [ b_kstr ] = 0 ; } for ( b_kstr = 0 ; b_kstr < 6 ; b_kstr ++ )
{ msubspace_data [ b_kstr + 6 * b_kstr ] = 1 ; } for ( b_kstr = 0 ; b_kstr <
36 ; b_kstr ++ ) { obj -> SpatialInertia [ b_kstr ] = msubspace_data [ b_kstr
] ; } obj -> CollisionsInternal = oosvd5bnheg ( iobj_0 , 0.0 ) ; obj ->
matlabCodegenIsDeleted = false ; return b_obj ; } static cwp5dxx3gqu *
jwk1ippo5j ( cwp5dxx3gqu * obj , ejmcoi31fmi * iobj_0 , orkdduvnogx * iobj_1
) { cwp5dxx3gqu * b_obj ; lg5jhfa1j5 * switch_expression ; real_T poslim_data
[ 12 ] ; int32_T b_kstr ; int32_T loop_ub ; char_T b_p [ 9 ] ; char_T b [ 8 ]
; int8_T msubspace_data [ 36 ] ; int8_T b_I [ 9 ] ; int8_T tmp [ 6 ] ;
boolean_T b_bool ; static const char_T tmp_p [ 10 ] = { 'd' , 'u' , 'm' , 'm'
, 'y' , 'b' , 'o' , 'd' , 'y' , '2' } ; static const int8_T tmp_e [ 16 ] = {
1 , 0 , 0 , 0 , 0 , 1 , 0 , 0 , 0 , 0 , 1 , 0 , 0 , 0 , 0 , 1 } ; static
const char_T tmp_i [ 14 ] = { 'd' , 'u' , 'm' , 'm' , 'y' , 'b' , 'o' , 'd' ,
'y' , '2' , '_' , 'j' , 'n' , 't' } ; static const char_T tmp_m [ 5 ] = { 'f'
, 'i' , 'x' , 'e' , 'd' } ; static const char_T tmp_g [ 8 ] = { 'r' , 'e' ,
'v' , 'o' , 'l' , 'u' , 't' , 'e' } ; static const char_T tmp_j [ 9 ] = { 'p'
, 'r' , 'i' , 's' , 'm' , 'a' , 't' , 'i' , 'c' } ; int32_T exitg1 ; b_obj =
obj ; b_kstr = obj -> NameInternal -> size [ 0 ] * obj -> NameInternal ->
size [ 1 ] ; obj -> NameInternal -> size [ 0 ] = 1 ; obj -> NameInternal ->
size [ 1 ] = 10 ; gsven4ga0i ( obj -> NameInternal , b_kstr ) ; for ( b_kstr
= 0 ; b_kstr < 10 ; b_kstr ++ ) { obj -> NameInternal -> data [ b_kstr ] =
tmp_p [ b_kstr ] ; } iobj_1 -> InTree = false ; for ( b_kstr = 0 ; b_kstr <
16 ; b_kstr ++ ) { iobj_1 -> JointToParentTransform [ b_kstr ] = tmp_e [
b_kstr ] ; } for ( b_kstr = 0 ; b_kstr < 16 ; b_kstr ++ ) { iobj_1 ->
ChildToJointTransform [ b_kstr ] = tmp_e [ b_kstr ] ; } b_kstr = iobj_1 ->
NameInternal -> size [ 0 ] * iobj_1 -> NameInternal -> size [ 1 ] ; iobj_1 ->
NameInternal -> size [ 0 ] = 1 ; iobj_1 -> NameInternal -> size [ 1 ] = 14 ;
gsven4ga0i ( iobj_1 -> NameInternal , b_kstr ) ; for ( b_kstr = 0 ; b_kstr <
14 ; b_kstr ++ ) { iobj_1 -> NameInternal -> data [ b_kstr ] = tmp_i [ b_kstr
] ; } b_kstr = iobj_1 -> Type -> size [ 0 ] * iobj_1 -> Type -> size [ 1 ] ;
iobj_1 -> Type -> size [ 0 ] = 1 ; iobj_1 -> Type -> size [ 1 ] = 5 ;
gsven4ga0i ( iobj_1 -> Type , b_kstr ) ; for ( b_kstr = 0 ; b_kstr < 5 ;
b_kstr ++ ) { iobj_1 -> Type -> data [ b_kstr ] = tmp_m [ b_kstr ] ; }
ek533x1it4 ( & switch_expression , 2 ) ; b_kstr = switch_expression -> size [
0 ] * switch_expression -> size [ 1 ] ; switch_expression -> size [ 0 ] = 1 ;
switch_expression -> size [ 1 ] = iobj_1 -> Type -> size [ 1 ] ; gsven4ga0i (
switch_expression , b_kstr ) ; loop_ub = iobj_1 -> Type -> size [ 1 ] ; for (
b_kstr = 0 ; b_kstr < loop_ub ; b_kstr ++ ) { switch_expression -> data [
b_kstr ] = iobj_1 -> Type -> data [ b_kstr ] ; } for ( b_kstr = 0 ; b_kstr <
8 ; b_kstr ++ ) { b [ b_kstr ] = tmp_g [ b_kstr ] ; } b_bool = false ; if (
switch_expression -> size [ 1 ] != 8 ) { } else { b_kstr = 1 ; do { exitg1 =
0 ; if ( b_kstr - 1 < 8 ) { if ( switch_expression -> data [ b_kstr - 1 ] !=
b [ b_kstr - 1 ] ) { exitg1 = 1 ; } else { b_kstr ++ ; } } else { b_bool =
true ; exitg1 = 1 ; } } while ( exitg1 == 0 ) ; } if ( b_bool ) { b_kstr = 0
; } else { for ( b_kstr = 0 ; b_kstr < 9 ; b_kstr ++ ) { b_p [ b_kstr ] =
tmp_j [ b_kstr ] ; } if ( switch_expression -> size [ 1 ] != 9 ) { } else {
b_kstr = 1 ; do { exitg1 = 0 ; if ( b_kstr - 1 < 9 ) { if ( switch_expression
-> data [ b_kstr - 1 ] != b_p [ b_kstr - 1 ] ) { exitg1 = 1 ; } else { b_kstr
++ ; } } else { b_bool = true ; exitg1 = 1 ; } } while ( exitg1 == 0 ) ; } if
( b_bool ) { b_kstr = 1 ; } else { b_kstr = - 1 ; } } dqu5smbks1 ( &
switch_expression ) ; switch ( b_kstr ) { case 0 : tmp [ 0 ] = 0 ; tmp [ 1 ]
= 0 ; tmp [ 2 ] = 1 ; tmp [ 3 ] = 0 ; tmp [ 4 ] = 0 ; tmp [ 5 ] = 0 ; for (
b_kstr = 0 ; b_kstr < 6 ; b_kstr ++ ) { msubspace_data [ b_kstr ] = tmp [
b_kstr ] ; } poslim_data [ 0 ] = - 3.1415926535897931 ; poslim_data [ 1 ] =
3.1415926535897931 ; iobj_1 -> VelocityNumber = 1.0 ; iobj_1 ->
PositionNumber = 1.0 ; iobj_1 -> JointAxisInternal [ 0 ] = 0.0 ; iobj_1 ->
JointAxisInternal [ 1 ] = 0.0 ; iobj_1 -> JointAxisInternal [ 2 ] = 1.0 ;
break ; case 1 : tmp [ 0 ] = 0 ; tmp [ 1 ] = 0 ; tmp [ 2 ] = 0 ; tmp [ 3 ] =
0 ; tmp [ 4 ] = 0 ; tmp [ 5 ] = 1 ; for ( b_kstr = 0 ; b_kstr < 6 ; b_kstr ++
) { msubspace_data [ b_kstr ] = tmp [ b_kstr ] ; } poslim_data [ 0 ] = - 0.5
; poslim_data [ 1 ] = 0.5 ; iobj_1 -> VelocityNumber = 1.0 ; iobj_1 ->
PositionNumber = 1.0 ; iobj_1 -> JointAxisInternal [ 0 ] = 0.0 ; iobj_1 ->
JointAxisInternal [ 1 ] = 0.0 ; iobj_1 -> JointAxisInternal [ 2 ] = 1.0 ;
break ; default : for ( b_kstr = 0 ; b_kstr < 6 ; b_kstr ++ ) {
msubspace_data [ b_kstr ] = 0 ; } poslim_data [ 0 ] = 0.0 ; poslim_data [ 1 ]
= 0.0 ; iobj_1 -> VelocityNumber = 0.0 ; iobj_1 -> PositionNumber = 0.0 ;
iobj_1 -> JointAxisInternal [ 0 ] = 0.0 ; iobj_1 -> JointAxisInternal [ 1 ] =
0.0 ; iobj_1 -> JointAxisInternal [ 2 ] = 0.0 ; break ; } b_kstr = iobj_1 ->
MotionSubspace -> size [ 0 ] * iobj_1 -> MotionSubspace -> size [ 1 ] ;
iobj_1 -> MotionSubspace -> size [ 0 ] = 6 ; iobj_1 -> MotionSubspace -> size
[ 1 ] = 1 ; o4pyrzarz5 ( iobj_1 -> MotionSubspace , b_kstr ) ; for ( b_kstr =
0 ; b_kstr < 6 ; b_kstr ++ ) { iobj_1 -> MotionSubspace -> data [ b_kstr ] =
msubspace_data [ b_kstr ] ; } b_kstr = iobj_1 -> PositionLimitsInternal ->
size [ 0 ] * iobj_1 -> PositionLimitsInternal -> size [ 1 ] ; iobj_1 ->
PositionLimitsInternal -> size [ 0 ] = 1 ; iobj_1 -> PositionLimitsInternal
-> size [ 1 ] = 2 ; o4pyrzarz5 ( iobj_1 -> PositionLimitsInternal , b_kstr )
; for ( b_kstr = 0 ; b_kstr < 2 ; b_kstr ++ ) { iobj_1 ->
PositionLimitsInternal -> data [ b_kstr ] = poslim_data [ b_kstr ] ; } b_kstr
= iobj_1 -> HomePositionInternal -> size [ 0 ] ; iobj_1 ->
HomePositionInternal -> size [ 0 ] = 1 ; o4pyrzarz5 ( iobj_1 ->
HomePositionInternal , b_kstr ) ; iobj_1 -> HomePositionInternal -> data [ 0
] = 0.0 ; obj -> JointInternal = iobj_1 ; obj -> Index = - 1.0 ; obj ->
ParentIndex = - 1.0 ; obj -> MassInternal = 1.0 ; obj -> CenterOfMassInternal
[ 0 ] = 0.0 ; obj -> CenterOfMassInternal [ 1 ] = 0.0 ; obj ->
CenterOfMassInternal [ 2 ] = 0.0 ; for ( b_kstr = 0 ; b_kstr < 9 ; b_kstr ++
) { b_I [ b_kstr ] = 0 ; } b_I [ 0 ] = 1 ; b_I [ 4 ] = 1 ; b_I [ 8 ] = 1 ;
for ( b_kstr = 0 ; b_kstr < 9 ; b_kstr ++ ) { obj -> InertiaInternal [ b_kstr
] = b_I [ b_kstr ] ; } for ( b_kstr = 0 ; b_kstr < 36 ; b_kstr ++ ) {
msubspace_data [ b_kstr ] = 0 ; } for ( b_kstr = 0 ; b_kstr < 6 ; b_kstr ++ )
{ msubspace_data [ b_kstr + 6 * b_kstr ] = 1 ; } for ( b_kstr = 0 ; b_kstr <
36 ; b_kstr ++ ) { obj -> SpatialInertia [ b_kstr ] = msubspace_data [ b_kstr
] ; } obj -> CollisionsInternal = oosvd5bnheg ( iobj_0 , 0.0 ) ; obj ->
matlabCodegenIsDeleted = false ; return b_obj ; } static cwp5dxx3gqu *
eaasm1dykq ( cwp5dxx3gqu * obj , ejmcoi31fmi * iobj_0 , orkdduvnogx * iobj_1
) { cwp5dxx3gqu * b_obj ; lg5jhfa1j5 * switch_expression ; real_T poslim_data
[ 12 ] ; int32_T b_kstr ; int32_T loop_ub ; char_T b_p [ 9 ] ; char_T b [ 8 ]
; int8_T msubspace_data [ 36 ] ; int8_T b_I [ 9 ] ; int8_T tmp [ 6 ] ;
boolean_T b_bool ; static const char_T tmp_p [ 10 ] = { 'd' , 'u' , 'm' , 'm'
, 'y' , 'b' , 'o' , 'd' , 'y' , '3' } ; static const int8_T tmp_e [ 16 ] = {
1 , 0 , 0 , 0 , 0 , 1 , 0 , 0 , 0 , 0 , 1 , 0 , 0 , 0 , 0 , 1 } ; static
const char_T tmp_i [ 14 ] = { 'd' , 'u' , 'm' , 'm' , 'y' , 'b' , 'o' , 'd' ,
'y' , '3' , '_' , 'j' , 'n' , 't' } ; static const char_T tmp_m [ 5 ] = { 'f'
, 'i' , 'x' , 'e' , 'd' } ; static const char_T tmp_g [ 8 ] = { 'r' , 'e' ,
'v' , 'o' , 'l' , 'u' , 't' , 'e' } ; static const char_T tmp_j [ 9 ] = { 'p'
, 'r' , 'i' , 's' , 'm' , 'a' , 't' , 'i' , 'c' } ; int32_T exitg1 ; b_obj =
obj ; b_kstr = obj -> NameInternal -> size [ 0 ] * obj -> NameInternal ->
size [ 1 ] ; obj -> NameInternal -> size [ 0 ] = 1 ; obj -> NameInternal ->
size [ 1 ] = 10 ; gsven4ga0i ( obj -> NameInternal , b_kstr ) ; for ( b_kstr
= 0 ; b_kstr < 10 ; b_kstr ++ ) { obj -> NameInternal -> data [ b_kstr ] =
tmp_p [ b_kstr ] ; } iobj_1 -> InTree = false ; for ( b_kstr = 0 ; b_kstr <
16 ; b_kstr ++ ) { iobj_1 -> JointToParentTransform [ b_kstr ] = tmp_e [
b_kstr ] ; } for ( b_kstr = 0 ; b_kstr < 16 ; b_kstr ++ ) { iobj_1 ->
ChildToJointTransform [ b_kstr ] = tmp_e [ b_kstr ] ; } b_kstr = iobj_1 ->
NameInternal -> size [ 0 ] * iobj_1 -> NameInternal -> size [ 1 ] ; iobj_1 ->
NameInternal -> size [ 0 ] = 1 ; iobj_1 -> NameInternal -> size [ 1 ] = 14 ;
gsven4ga0i ( iobj_1 -> NameInternal , b_kstr ) ; for ( b_kstr = 0 ; b_kstr <
14 ; b_kstr ++ ) { iobj_1 -> NameInternal -> data [ b_kstr ] = tmp_i [ b_kstr
] ; } b_kstr = iobj_1 -> Type -> size [ 0 ] * iobj_1 -> Type -> size [ 1 ] ;
iobj_1 -> Type -> size [ 0 ] = 1 ; iobj_1 -> Type -> size [ 1 ] = 5 ;
gsven4ga0i ( iobj_1 -> Type , b_kstr ) ; for ( b_kstr = 0 ; b_kstr < 5 ;
b_kstr ++ ) { iobj_1 -> Type -> data [ b_kstr ] = tmp_m [ b_kstr ] ; }
ek533x1it4 ( & switch_expression , 2 ) ; b_kstr = switch_expression -> size [
0 ] * switch_expression -> size [ 1 ] ; switch_expression -> size [ 0 ] = 1 ;
switch_expression -> size [ 1 ] = iobj_1 -> Type -> size [ 1 ] ; gsven4ga0i (
switch_expression , b_kstr ) ; loop_ub = iobj_1 -> Type -> size [ 1 ] ; for (
b_kstr = 0 ; b_kstr < loop_ub ; b_kstr ++ ) { switch_expression -> data [
b_kstr ] = iobj_1 -> Type -> data [ b_kstr ] ; } for ( b_kstr = 0 ; b_kstr <
8 ; b_kstr ++ ) { b [ b_kstr ] = tmp_g [ b_kstr ] ; } b_bool = false ; if (
switch_expression -> size [ 1 ] != 8 ) { } else { b_kstr = 1 ; do { exitg1 =
0 ; if ( b_kstr - 1 < 8 ) { if ( switch_expression -> data [ b_kstr - 1 ] !=
b [ b_kstr - 1 ] ) { exitg1 = 1 ; } else { b_kstr ++ ; } } else { b_bool =
true ; exitg1 = 1 ; } } while ( exitg1 == 0 ) ; } if ( b_bool ) { b_kstr = 0
; } else { for ( b_kstr = 0 ; b_kstr < 9 ; b_kstr ++ ) { b_p [ b_kstr ] =
tmp_j [ b_kstr ] ; } if ( switch_expression -> size [ 1 ] != 9 ) { } else {
b_kstr = 1 ; do { exitg1 = 0 ; if ( b_kstr - 1 < 9 ) { if ( switch_expression
-> data [ b_kstr - 1 ] != b_p [ b_kstr - 1 ] ) { exitg1 = 1 ; } else { b_kstr
++ ; } } else { b_bool = true ; exitg1 = 1 ; } } while ( exitg1 == 0 ) ; } if
( b_bool ) { b_kstr = 1 ; } else { b_kstr = - 1 ; } } dqu5smbks1 ( &
switch_expression ) ; switch ( b_kstr ) { case 0 : tmp [ 0 ] = 0 ; tmp [ 1 ]
= 0 ; tmp [ 2 ] = 1 ; tmp [ 3 ] = 0 ; tmp [ 4 ] = 0 ; tmp [ 5 ] = 0 ; for (
b_kstr = 0 ; b_kstr < 6 ; b_kstr ++ ) { msubspace_data [ b_kstr ] = tmp [
b_kstr ] ; } poslim_data [ 0 ] = - 3.1415926535897931 ; poslim_data [ 1 ] =
3.1415926535897931 ; iobj_1 -> VelocityNumber = 1.0 ; iobj_1 ->
PositionNumber = 1.0 ; iobj_1 -> JointAxisInternal [ 0 ] = 0.0 ; iobj_1 ->
JointAxisInternal [ 1 ] = 0.0 ; iobj_1 -> JointAxisInternal [ 2 ] = 1.0 ;
break ; case 1 : tmp [ 0 ] = 0 ; tmp [ 1 ] = 0 ; tmp [ 2 ] = 0 ; tmp [ 3 ] =
0 ; tmp [ 4 ] = 0 ; tmp [ 5 ] = 1 ; for ( b_kstr = 0 ; b_kstr < 6 ; b_kstr ++
) { msubspace_data [ b_kstr ] = tmp [ b_kstr ] ; } poslim_data [ 0 ] = - 0.5
; poslim_data [ 1 ] = 0.5 ; iobj_1 -> VelocityNumber = 1.0 ; iobj_1 ->
PositionNumber = 1.0 ; iobj_1 -> JointAxisInternal [ 0 ] = 0.0 ; iobj_1 ->
JointAxisInternal [ 1 ] = 0.0 ; iobj_1 -> JointAxisInternal [ 2 ] = 1.0 ;
break ; default : for ( b_kstr = 0 ; b_kstr < 6 ; b_kstr ++ ) {
msubspace_data [ b_kstr ] = 0 ; } poslim_data [ 0 ] = 0.0 ; poslim_data [ 1 ]
= 0.0 ; iobj_1 -> VelocityNumber = 0.0 ; iobj_1 -> PositionNumber = 0.0 ;
iobj_1 -> JointAxisInternal [ 0 ] = 0.0 ; iobj_1 -> JointAxisInternal [ 1 ] =
0.0 ; iobj_1 -> JointAxisInternal [ 2 ] = 0.0 ; break ; } b_kstr = iobj_1 ->
MotionSubspace -> size [ 0 ] * iobj_1 -> MotionSubspace -> size [ 1 ] ;
iobj_1 -> MotionSubspace -> size [ 0 ] = 6 ; iobj_1 -> MotionSubspace -> size
[ 1 ] = 1 ; o4pyrzarz5 ( iobj_1 -> MotionSubspace , b_kstr ) ; for ( b_kstr =
0 ; b_kstr < 6 ; b_kstr ++ ) { iobj_1 -> MotionSubspace -> data [ b_kstr ] =
msubspace_data [ b_kstr ] ; } b_kstr = iobj_1 -> PositionLimitsInternal ->
size [ 0 ] * iobj_1 -> PositionLimitsInternal -> size [ 1 ] ; iobj_1 ->
PositionLimitsInternal -> size [ 0 ] = 1 ; iobj_1 -> PositionLimitsInternal
-> size [ 1 ] = 2 ; o4pyrzarz5 ( iobj_1 -> PositionLimitsInternal , b_kstr )
; for ( b_kstr = 0 ; b_kstr < 2 ; b_kstr ++ ) { iobj_1 ->
PositionLimitsInternal -> data [ b_kstr ] = poslim_data [ b_kstr ] ; } b_kstr
= iobj_1 -> HomePositionInternal -> size [ 0 ] ; iobj_1 ->
HomePositionInternal -> size [ 0 ] = 1 ; o4pyrzarz5 ( iobj_1 ->
HomePositionInternal , b_kstr ) ; iobj_1 -> HomePositionInternal -> data [ 0
] = 0.0 ; obj -> JointInternal = iobj_1 ; obj -> Index = - 1.0 ; obj ->
ParentIndex = - 1.0 ; obj -> MassInternal = 1.0 ; obj -> CenterOfMassInternal
[ 0 ] = 0.0 ; obj -> CenterOfMassInternal [ 1 ] = 0.0 ; obj ->
CenterOfMassInternal [ 2 ] = 0.0 ; for ( b_kstr = 0 ; b_kstr < 9 ; b_kstr ++
) { b_I [ b_kstr ] = 0 ; } b_I [ 0 ] = 1 ; b_I [ 4 ] = 1 ; b_I [ 8 ] = 1 ;
for ( b_kstr = 0 ; b_kstr < 9 ; b_kstr ++ ) { obj -> InertiaInternal [ b_kstr
] = b_I [ b_kstr ] ; } for ( b_kstr = 0 ; b_kstr < 36 ; b_kstr ++ ) {
msubspace_data [ b_kstr ] = 0 ; } for ( b_kstr = 0 ; b_kstr < 6 ; b_kstr ++ )
{ msubspace_data [ b_kstr + 6 * b_kstr ] = 1 ; } for ( b_kstr = 0 ; b_kstr <
36 ; b_kstr ++ ) { obj -> SpatialInertia [ b_kstr ] = msubspace_data [ b_kstr
] ; } obj -> CollisionsInternal = oosvd5bnheg ( iobj_0 , 0.0 ) ; obj ->
matlabCodegenIsDeleted = false ; return b_obj ; } static cwp5dxx3gqu *
h10rtdjox1 ( cwp5dxx3gqu * obj , ejmcoi31fmi * iobj_0 , orkdduvnogx * iobj_1
) { cwp5dxx3gqu * b_obj ; lg5jhfa1j5 * switch_expression ; real_T poslim_data
[ 12 ] ; int32_T b_kstr ; int32_T loop_ub ; char_T b_p [ 9 ] ; char_T b [ 8 ]
; int8_T msubspace_data [ 36 ] ; int8_T b_I [ 9 ] ; int8_T tmp [ 6 ] ;
boolean_T b_bool ; static const char_T tmp_p [ 10 ] = { 'd' , 'u' , 'm' , 'm'
, 'y' , 'b' , 'o' , 'd' , 'y' , '4' } ; static const int8_T tmp_e [ 16 ] = {
1 , 0 , 0 , 0 , 0 , 1 , 0 , 0 , 0 , 0 , 1 , 0 , 0 , 0 , 0 , 1 } ; static
const char_T tmp_i [ 14 ] = { 'd' , 'u' , 'm' , 'm' , 'y' , 'b' , 'o' , 'd' ,
'y' , '4' , '_' , 'j' , 'n' , 't' } ; static const char_T tmp_m [ 5 ] = { 'f'
, 'i' , 'x' , 'e' , 'd' } ; static const char_T tmp_g [ 8 ] = { 'r' , 'e' ,
'v' , 'o' , 'l' , 'u' , 't' , 'e' } ; static const char_T tmp_j [ 9 ] = { 'p'
, 'r' , 'i' , 's' , 'm' , 'a' , 't' , 'i' , 'c' } ; int32_T exitg1 ; b_obj =
obj ; b_kstr = obj -> NameInternal -> size [ 0 ] * obj -> NameInternal ->
size [ 1 ] ; obj -> NameInternal -> size [ 0 ] = 1 ; obj -> NameInternal ->
size [ 1 ] = 10 ; gsven4ga0i ( obj -> NameInternal , b_kstr ) ; for ( b_kstr
= 0 ; b_kstr < 10 ; b_kstr ++ ) { obj -> NameInternal -> data [ b_kstr ] =
tmp_p [ b_kstr ] ; } iobj_1 -> InTree = false ; for ( b_kstr = 0 ; b_kstr <
16 ; b_kstr ++ ) { iobj_1 -> JointToParentTransform [ b_kstr ] = tmp_e [
b_kstr ] ; } for ( b_kstr = 0 ; b_kstr < 16 ; b_kstr ++ ) { iobj_1 ->
ChildToJointTransform [ b_kstr ] = tmp_e [ b_kstr ] ; } b_kstr = iobj_1 ->
NameInternal -> size [ 0 ] * iobj_1 -> NameInternal -> size [ 1 ] ; iobj_1 ->
NameInternal -> size [ 0 ] = 1 ; iobj_1 -> NameInternal -> size [ 1 ] = 14 ;
gsven4ga0i ( iobj_1 -> NameInternal , b_kstr ) ; for ( b_kstr = 0 ; b_kstr <
14 ; b_kstr ++ ) { iobj_1 -> NameInternal -> data [ b_kstr ] = tmp_i [ b_kstr
] ; } b_kstr = iobj_1 -> Type -> size [ 0 ] * iobj_1 -> Type -> size [ 1 ] ;
iobj_1 -> Type -> size [ 0 ] = 1 ; iobj_1 -> Type -> size [ 1 ] = 5 ;
gsven4ga0i ( iobj_1 -> Type , b_kstr ) ; for ( b_kstr = 0 ; b_kstr < 5 ;
b_kstr ++ ) { iobj_1 -> Type -> data [ b_kstr ] = tmp_m [ b_kstr ] ; }
ek533x1it4 ( & switch_expression , 2 ) ; b_kstr = switch_expression -> size [
0 ] * switch_expression -> size [ 1 ] ; switch_expression -> size [ 0 ] = 1 ;
switch_expression -> size [ 1 ] = iobj_1 -> Type -> size [ 1 ] ; gsven4ga0i (
switch_expression , b_kstr ) ; loop_ub = iobj_1 -> Type -> size [ 1 ] ; for (
b_kstr = 0 ; b_kstr < loop_ub ; b_kstr ++ ) { switch_expression -> data [
b_kstr ] = iobj_1 -> Type -> data [ b_kstr ] ; } for ( b_kstr = 0 ; b_kstr <
8 ; b_kstr ++ ) { b [ b_kstr ] = tmp_g [ b_kstr ] ; } b_bool = false ; if (
switch_expression -> size [ 1 ] != 8 ) { } else { b_kstr = 1 ; do { exitg1 =
0 ; if ( b_kstr - 1 < 8 ) { if ( switch_expression -> data [ b_kstr - 1 ] !=
b [ b_kstr - 1 ] ) { exitg1 = 1 ; } else { b_kstr ++ ; } } else { b_bool =
true ; exitg1 = 1 ; } } while ( exitg1 == 0 ) ; } if ( b_bool ) { b_kstr = 0
; } else { for ( b_kstr = 0 ; b_kstr < 9 ; b_kstr ++ ) { b_p [ b_kstr ] =
tmp_j [ b_kstr ] ; } if ( switch_expression -> size [ 1 ] != 9 ) { } else {
b_kstr = 1 ; do { exitg1 = 0 ; if ( b_kstr - 1 < 9 ) { if ( switch_expression
-> data [ b_kstr - 1 ] != b_p [ b_kstr - 1 ] ) { exitg1 = 1 ; } else { b_kstr
++ ; } } else { b_bool = true ; exitg1 = 1 ; } } while ( exitg1 == 0 ) ; } if
( b_bool ) { b_kstr = 1 ; } else { b_kstr = - 1 ; } } dqu5smbks1 ( &
switch_expression ) ; switch ( b_kstr ) { case 0 : tmp [ 0 ] = 0 ; tmp [ 1 ]
= 0 ; tmp [ 2 ] = 1 ; tmp [ 3 ] = 0 ; tmp [ 4 ] = 0 ; tmp [ 5 ] = 0 ; for (
b_kstr = 0 ; b_kstr < 6 ; b_kstr ++ ) { msubspace_data [ b_kstr ] = tmp [
b_kstr ] ; } poslim_data [ 0 ] = - 3.1415926535897931 ; poslim_data [ 1 ] =
3.1415926535897931 ; iobj_1 -> VelocityNumber = 1.0 ; iobj_1 ->
PositionNumber = 1.0 ; iobj_1 -> JointAxisInternal [ 0 ] = 0.0 ; iobj_1 ->
JointAxisInternal [ 1 ] = 0.0 ; iobj_1 -> JointAxisInternal [ 2 ] = 1.0 ;
break ; case 1 : tmp [ 0 ] = 0 ; tmp [ 1 ] = 0 ; tmp [ 2 ] = 0 ; tmp [ 3 ] =
0 ; tmp [ 4 ] = 0 ; tmp [ 5 ] = 1 ; for ( b_kstr = 0 ; b_kstr < 6 ; b_kstr ++
) { msubspace_data [ b_kstr ] = tmp [ b_kstr ] ; } poslim_data [ 0 ] = - 0.5
; poslim_data [ 1 ] = 0.5 ; iobj_1 -> VelocityNumber = 1.0 ; iobj_1 ->
PositionNumber = 1.0 ; iobj_1 -> JointAxisInternal [ 0 ] = 0.0 ; iobj_1 ->
JointAxisInternal [ 1 ] = 0.0 ; iobj_1 -> JointAxisInternal [ 2 ] = 1.0 ;
break ; default : for ( b_kstr = 0 ; b_kstr < 6 ; b_kstr ++ ) {
msubspace_data [ b_kstr ] = 0 ; } poslim_data [ 0 ] = 0.0 ; poslim_data [ 1 ]
= 0.0 ; iobj_1 -> VelocityNumber = 0.0 ; iobj_1 -> PositionNumber = 0.0 ;
iobj_1 -> JointAxisInternal [ 0 ] = 0.0 ; iobj_1 -> JointAxisInternal [ 1 ] =
0.0 ; iobj_1 -> JointAxisInternal [ 2 ] = 0.0 ; break ; } b_kstr = iobj_1 ->
MotionSubspace -> size [ 0 ] * iobj_1 -> MotionSubspace -> size [ 1 ] ;
iobj_1 -> MotionSubspace -> size [ 0 ] = 6 ; iobj_1 -> MotionSubspace -> size
[ 1 ] = 1 ; o4pyrzarz5 ( iobj_1 -> MotionSubspace , b_kstr ) ; for ( b_kstr =
0 ; b_kstr < 6 ; b_kstr ++ ) { iobj_1 -> MotionSubspace -> data [ b_kstr ] =
msubspace_data [ b_kstr ] ; } b_kstr = iobj_1 -> PositionLimitsInternal ->
size [ 0 ] * iobj_1 -> PositionLimitsInternal -> size [ 1 ] ; iobj_1 ->
PositionLimitsInternal -> size [ 0 ] = 1 ; iobj_1 -> PositionLimitsInternal
-> size [ 1 ] = 2 ; o4pyrzarz5 ( iobj_1 -> PositionLimitsInternal , b_kstr )
; for ( b_kstr = 0 ; b_kstr < 2 ; b_kstr ++ ) { iobj_1 ->
PositionLimitsInternal -> data [ b_kstr ] = poslim_data [ b_kstr ] ; } b_kstr
= iobj_1 -> HomePositionInternal -> size [ 0 ] ; iobj_1 ->
HomePositionInternal -> size [ 0 ] = 1 ; o4pyrzarz5 ( iobj_1 ->
HomePositionInternal , b_kstr ) ; iobj_1 -> HomePositionInternal -> data [ 0
] = 0.0 ; obj -> JointInternal = iobj_1 ; obj -> Index = - 1.0 ; obj ->
ParentIndex = - 1.0 ; obj -> MassInternal = 1.0 ; obj -> CenterOfMassInternal
[ 0 ] = 0.0 ; obj -> CenterOfMassInternal [ 1 ] = 0.0 ; obj ->
CenterOfMassInternal [ 2 ] = 0.0 ; for ( b_kstr = 0 ; b_kstr < 9 ; b_kstr ++
) { b_I [ b_kstr ] = 0 ; } b_I [ 0 ] = 1 ; b_I [ 4 ] = 1 ; b_I [ 8 ] = 1 ;
for ( b_kstr = 0 ; b_kstr < 9 ; b_kstr ++ ) { obj -> InertiaInternal [ b_kstr
] = b_I [ b_kstr ] ; } for ( b_kstr = 0 ; b_kstr < 36 ; b_kstr ++ ) {
msubspace_data [ b_kstr ] = 0 ; } for ( b_kstr = 0 ; b_kstr < 6 ; b_kstr ++ )
{ msubspace_data [ b_kstr + 6 * b_kstr ] = 1 ; } for ( b_kstr = 0 ; b_kstr <
36 ; b_kstr ++ ) { obj -> SpatialInertia [ b_kstr ] = msubspace_data [ b_kstr
] ; } obj -> CollisionsInternal = oosvd5bnheg ( iobj_0 , 0.0 ) ; obj ->
matlabCodegenIsDeleted = false ; return b_obj ; } static cwp5dxx3gqu *
pyoyrn1dx4 ( cwp5dxx3gqu * obj , ejmcoi31fmi * iobj_0 , orkdduvnogx * iobj_1
) { cwp5dxx3gqu * b_obj ; lg5jhfa1j5 * switch_expression ; real_T poslim_data
[ 12 ] ; int32_T b_kstr ; int32_T loop_ub ; char_T b_p [ 9 ] ; char_T b [ 8 ]
; int8_T msubspace_data [ 36 ] ; int8_T b_I [ 9 ] ; int8_T tmp [ 6 ] ;
boolean_T b_bool ; static const char_T tmp_p [ 10 ] = { 'd' , 'u' , 'm' , 'm'
, 'y' , 'b' , 'o' , 'd' , 'y' , '5' } ; static const int8_T tmp_e [ 16 ] = {
1 , 0 , 0 , 0 , 0 , 1 , 0 , 0 , 0 , 0 , 1 , 0 , 0 , 0 , 0 , 1 } ; static
const char_T tmp_i [ 14 ] = { 'd' , 'u' , 'm' , 'm' , 'y' , 'b' , 'o' , 'd' ,
'y' , '5' , '_' , 'j' , 'n' , 't' } ; static const char_T tmp_m [ 5 ] = { 'f'
, 'i' , 'x' , 'e' , 'd' } ; static const char_T tmp_g [ 8 ] = { 'r' , 'e' ,
'v' , 'o' , 'l' , 'u' , 't' , 'e' } ; static const char_T tmp_j [ 9 ] = { 'p'
, 'r' , 'i' , 's' , 'm' , 'a' , 't' , 'i' , 'c' } ; int32_T exitg1 ; b_obj =
obj ; b_kstr = obj -> NameInternal -> size [ 0 ] * obj -> NameInternal ->
size [ 1 ] ; obj -> NameInternal -> size [ 0 ] = 1 ; obj -> NameInternal ->
size [ 1 ] = 10 ; gsven4ga0i ( obj -> NameInternal , b_kstr ) ; for ( b_kstr
= 0 ; b_kstr < 10 ; b_kstr ++ ) { obj -> NameInternal -> data [ b_kstr ] =
tmp_p [ b_kstr ] ; } iobj_1 -> InTree = false ; for ( b_kstr = 0 ; b_kstr <
16 ; b_kstr ++ ) { iobj_1 -> JointToParentTransform [ b_kstr ] = tmp_e [
b_kstr ] ; } for ( b_kstr = 0 ; b_kstr < 16 ; b_kstr ++ ) { iobj_1 ->
ChildToJointTransform [ b_kstr ] = tmp_e [ b_kstr ] ; } b_kstr = iobj_1 ->
NameInternal -> size [ 0 ] * iobj_1 -> NameInternal -> size [ 1 ] ; iobj_1 ->
NameInternal -> size [ 0 ] = 1 ; iobj_1 -> NameInternal -> size [ 1 ] = 14 ;
gsven4ga0i ( iobj_1 -> NameInternal , b_kstr ) ; for ( b_kstr = 0 ; b_kstr <
14 ; b_kstr ++ ) { iobj_1 -> NameInternal -> data [ b_kstr ] = tmp_i [ b_kstr
] ; } b_kstr = iobj_1 -> Type -> size [ 0 ] * iobj_1 -> Type -> size [ 1 ] ;
iobj_1 -> Type -> size [ 0 ] = 1 ; iobj_1 -> Type -> size [ 1 ] = 5 ;
gsven4ga0i ( iobj_1 -> Type , b_kstr ) ; for ( b_kstr = 0 ; b_kstr < 5 ;
b_kstr ++ ) { iobj_1 -> Type -> data [ b_kstr ] = tmp_m [ b_kstr ] ; }
ek533x1it4 ( & switch_expression , 2 ) ; b_kstr = switch_expression -> size [
0 ] * switch_expression -> size [ 1 ] ; switch_expression -> size [ 0 ] = 1 ;
switch_expression -> size [ 1 ] = iobj_1 -> Type -> size [ 1 ] ; gsven4ga0i (
switch_expression , b_kstr ) ; loop_ub = iobj_1 -> Type -> size [ 1 ] ; for (
b_kstr = 0 ; b_kstr < loop_ub ; b_kstr ++ ) { switch_expression -> data [
b_kstr ] = iobj_1 -> Type -> data [ b_kstr ] ; } for ( b_kstr = 0 ; b_kstr <
8 ; b_kstr ++ ) { b [ b_kstr ] = tmp_g [ b_kstr ] ; } b_bool = false ; if (
switch_expression -> size [ 1 ] != 8 ) { } else { b_kstr = 1 ; do { exitg1 =
0 ; if ( b_kstr - 1 < 8 ) { if ( switch_expression -> data [ b_kstr - 1 ] !=
b [ b_kstr - 1 ] ) { exitg1 = 1 ; } else { b_kstr ++ ; } } else { b_bool =
true ; exitg1 = 1 ; } } while ( exitg1 == 0 ) ; } if ( b_bool ) { b_kstr = 0
; } else { for ( b_kstr = 0 ; b_kstr < 9 ; b_kstr ++ ) { b_p [ b_kstr ] =
tmp_j [ b_kstr ] ; } if ( switch_expression -> size [ 1 ] != 9 ) { } else {
b_kstr = 1 ; do { exitg1 = 0 ; if ( b_kstr - 1 < 9 ) { if ( switch_expression
-> data [ b_kstr - 1 ] != b_p [ b_kstr - 1 ] ) { exitg1 = 1 ; } else { b_kstr
++ ; } } else { b_bool = true ; exitg1 = 1 ; } } while ( exitg1 == 0 ) ; } if
( b_bool ) { b_kstr = 1 ; } else { b_kstr = - 1 ; } } dqu5smbks1 ( &
switch_expression ) ; switch ( b_kstr ) { case 0 : tmp [ 0 ] = 0 ; tmp [ 1 ]
= 0 ; tmp [ 2 ] = 1 ; tmp [ 3 ] = 0 ; tmp [ 4 ] = 0 ; tmp [ 5 ] = 0 ; for (
b_kstr = 0 ; b_kstr < 6 ; b_kstr ++ ) { msubspace_data [ b_kstr ] = tmp [
b_kstr ] ; } poslim_data [ 0 ] = - 3.1415926535897931 ; poslim_data [ 1 ] =
3.1415926535897931 ; iobj_1 -> VelocityNumber = 1.0 ; iobj_1 ->
PositionNumber = 1.0 ; iobj_1 -> JointAxisInternal [ 0 ] = 0.0 ; iobj_1 ->
JointAxisInternal [ 1 ] = 0.0 ; iobj_1 -> JointAxisInternal [ 2 ] = 1.0 ;
break ; case 1 : tmp [ 0 ] = 0 ; tmp [ 1 ] = 0 ; tmp [ 2 ] = 0 ; tmp [ 3 ] =
0 ; tmp [ 4 ] = 0 ; tmp [ 5 ] = 1 ; for ( b_kstr = 0 ; b_kstr < 6 ; b_kstr ++
) { msubspace_data [ b_kstr ] = tmp [ b_kstr ] ; } poslim_data [ 0 ] = - 0.5
; poslim_data [ 1 ] = 0.5 ; iobj_1 -> VelocityNumber = 1.0 ; iobj_1 ->
PositionNumber = 1.0 ; iobj_1 -> JointAxisInternal [ 0 ] = 0.0 ; iobj_1 ->
JointAxisInternal [ 1 ] = 0.0 ; iobj_1 -> JointAxisInternal [ 2 ] = 1.0 ;
break ; default : for ( b_kstr = 0 ; b_kstr < 6 ; b_kstr ++ ) {
msubspace_data [ b_kstr ] = 0 ; } poslim_data [ 0 ] = 0.0 ; poslim_data [ 1 ]
= 0.0 ; iobj_1 -> VelocityNumber = 0.0 ; iobj_1 -> PositionNumber = 0.0 ;
iobj_1 -> JointAxisInternal [ 0 ] = 0.0 ; iobj_1 -> JointAxisInternal [ 1 ] =
0.0 ; iobj_1 -> JointAxisInternal [ 2 ] = 0.0 ; break ; } b_kstr = iobj_1 ->
MotionSubspace -> size [ 0 ] * iobj_1 -> MotionSubspace -> size [ 1 ] ;
iobj_1 -> MotionSubspace -> size [ 0 ] = 6 ; iobj_1 -> MotionSubspace -> size
[ 1 ] = 1 ; o4pyrzarz5 ( iobj_1 -> MotionSubspace , b_kstr ) ; for ( b_kstr =
0 ; b_kstr < 6 ; b_kstr ++ ) { iobj_1 -> MotionSubspace -> data [ b_kstr ] =
msubspace_data [ b_kstr ] ; } b_kstr = iobj_1 -> PositionLimitsInternal ->
size [ 0 ] * iobj_1 -> PositionLimitsInternal -> size [ 1 ] ; iobj_1 ->
PositionLimitsInternal -> size [ 0 ] = 1 ; iobj_1 -> PositionLimitsInternal
-> size [ 1 ] = 2 ; o4pyrzarz5 ( iobj_1 -> PositionLimitsInternal , b_kstr )
; for ( b_kstr = 0 ; b_kstr < 2 ; b_kstr ++ ) { iobj_1 ->
PositionLimitsInternal -> data [ b_kstr ] = poslim_data [ b_kstr ] ; } b_kstr
= iobj_1 -> HomePositionInternal -> size [ 0 ] ; iobj_1 ->
HomePositionInternal -> size [ 0 ] = 1 ; o4pyrzarz5 ( iobj_1 ->
HomePositionInternal , b_kstr ) ; iobj_1 -> HomePositionInternal -> data [ 0
] = 0.0 ; obj -> JointInternal = iobj_1 ; obj -> Index = - 1.0 ; obj ->
ParentIndex = - 1.0 ; obj -> MassInternal = 1.0 ; obj -> CenterOfMassInternal
[ 0 ] = 0.0 ; obj -> CenterOfMassInternal [ 1 ] = 0.0 ; obj ->
CenterOfMassInternal [ 2 ] = 0.0 ; for ( b_kstr = 0 ; b_kstr < 9 ; b_kstr ++
) { b_I [ b_kstr ] = 0 ; } b_I [ 0 ] = 1 ; b_I [ 4 ] = 1 ; b_I [ 8 ] = 1 ;
for ( b_kstr = 0 ; b_kstr < 9 ; b_kstr ++ ) { obj -> InertiaInternal [ b_kstr
] = b_I [ b_kstr ] ; } for ( b_kstr = 0 ; b_kstr < 36 ; b_kstr ++ ) {
msubspace_data [ b_kstr ] = 0 ; } for ( b_kstr = 0 ; b_kstr < 6 ; b_kstr ++ )
{ msubspace_data [ b_kstr + 6 * b_kstr ] = 1 ; } for ( b_kstr = 0 ; b_kstr <
36 ; b_kstr ++ ) { obj -> SpatialInertia [ b_kstr ] = msubspace_data [ b_kstr
] ; } obj -> CollisionsInternal = oosvd5bnheg ( iobj_0 , 0.0 ) ; obj ->
matlabCodegenIsDeleted = false ; return b_obj ; } static cwp5dxx3gqu *
fx2h4p5emg ( cwp5dxx3gqu * obj , ejmcoi31fmi * iobj_0 , orkdduvnogx * iobj_1
) { cwp5dxx3gqu * b_obj ; lg5jhfa1j5 * switch_expression ; real_T poslim_data
[ 12 ] ; int32_T b_kstr ; int32_T loop_ub ; char_T b_p [ 9 ] ; char_T b [ 8 ]
; int8_T msubspace_data [ 36 ] ; int8_T b_I [ 9 ] ; int8_T tmp [ 6 ] ;
boolean_T b_bool ; static const char_T tmp_p [ 10 ] = { 'd' , 'u' , 'm' , 'm'
, 'y' , 'b' , 'o' , 'd' , 'y' , '6' } ; static const int8_T tmp_e [ 16 ] = {
1 , 0 , 0 , 0 , 0 , 1 , 0 , 0 , 0 , 0 , 1 , 0 , 0 , 0 , 0 , 1 } ; static
const char_T tmp_i [ 14 ] = { 'd' , 'u' , 'm' , 'm' , 'y' , 'b' , 'o' , 'd' ,
'y' , '6' , '_' , 'j' , 'n' , 't' } ; static const char_T tmp_m [ 5 ] = { 'f'
, 'i' , 'x' , 'e' , 'd' } ; static const char_T tmp_g [ 8 ] = { 'r' , 'e' ,
'v' , 'o' , 'l' , 'u' , 't' , 'e' } ; static const char_T tmp_j [ 9 ] = { 'p'
, 'r' , 'i' , 's' , 'm' , 'a' , 't' , 'i' , 'c' } ; int32_T exitg1 ; b_obj =
obj ; b_kstr = obj -> NameInternal -> size [ 0 ] * obj -> NameInternal ->
size [ 1 ] ; obj -> NameInternal -> size [ 0 ] = 1 ; obj -> NameInternal ->
size [ 1 ] = 10 ; gsven4ga0i ( obj -> NameInternal , b_kstr ) ; for ( b_kstr
= 0 ; b_kstr < 10 ; b_kstr ++ ) { obj -> NameInternal -> data [ b_kstr ] =
tmp_p [ b_kstr ] ; } iobj_1 -> InTree = false ; for ( b_kstr = 0 ; b_kstr <
16 ; b_kstr ++ ) { iobj_1 -> JointToParentTransform [ b_kstr ] = tmp_e [
b_kstr ] ; } for ( b_kstr = 0 ; b_kstr < 16 ; b_kstr ++ ) { iobj_1 ->
ChildToJointTransform [ b_kstr ] = tmp_e [ b_kstr ] ; } b_kstr = iobj_1 ->
NameInternal -> size [ 0 ] * iobj_1 -> NameInternal -> size [ 1 ] ; iobj_1 ->
NameInternal -> size [ 0 ] = 1 ; iobj_1 -> NameInternal -> size [ 1 ] = 14 ;
gsven4ga0i ( iobj_1 -> NameInternal , b_kstr ) ; for ( b_kstr = 0 ; b_kstr <
14 ; b_kstr ++ ) { iobj_1 -> NameInternal -> data [ b_kstr ] = tmp_i [ b_kstr
] ; } b_kstr = iobj_1 -> Type -> size [ 0 ] * iobj_1 -> Type -> size [ 1 ] ;
iobj_1 -> Type -> size [ 0 ] = 1 ; iobj_1 -> Type -> size [ 1 ] = 5 ;
gsven4ga0i ( iobj_1 -> Type , b_kstr ) ; for ( b_kstr = 0 ; b_kstr < 5 ;
b_kstr ++ ) { iobj_1 -> Type -> data [ b_kstr ] = tmp_m [ b_kstr ] ; }
ek533x1it4 ( & switch_expression , 2 ) ; b_kstr = switch_expression -> size [
0 ] * switch_expression -> size [ 1 ] ; switch_expression -> size [ 0 ] = 1 ;
switch_expression -> size [ 1 ] = iobj_1 -> Type -> size [ 1 ] ; gsven4ga0i (
switch_expression , b_kstr ) ; loop_ub = iobj_1 -> Type -> size [ 1 ] ; for (
b_kstr = 0 ; b_kstr < loop_ub ; b_kstr ++ ) { switch_expression -> data [
b_kstr ] = iobj_1 -> Type -> data [ b_kstr ] ; } for ( b_kstr = 0 ; b_kstr <
8 ; b_kstr ++ ) { b [ b_kstr ] = tmp_g [ b_kstr ] ; } b_bool = false ; if (
switch_expression -> size [ 1 ] != 8 ) { } else { b_kstr = 1 ; do { exitg1 =
0 ; if ( b_kstr - 1 < 8 ) { if ( switch_expression -> data [ b_kstr - 1 ] !=
b [ b_kstr - 1 ] ) { exitg1 = 1 ; } else { b_kstr ++ ; } } else { b_bool =
true ; exitg1 = 1 ; } } while ( exitg1 == 0 ) ; } if ( b_bool ) { b_kstr = 0
; } else { for ( b_kstr = 0 ; b_kstr < 9 ; b_kstr ++ ) { b_p [ b_kstr ] =
tmp_j [ b_kstr ] ; } if ( switch_expression -> size [ 1 ] != 9 ) { } else {
b_kstr = 1 ; do { exitg1 = 0 ; if ( b_kstr - 1 < 9 ) { if ( switch_expression
-> data [ b_kstr - 1 ] != b_p [ b_kstr - 1 ] ) { exitg1 = 1 ; } else { b_kstr
++ ; } } else { b_bool = true ; exitg1 = 1 ; } } while ( exitg1 == 0 ) ; } if
( b_bool ) { b_kstr = 1 ; } else { b_kstr = - 1 ; } } dqu5smbks1 ( &
switch_expression ) ; switch ( b_kstr ) { case 0 : tmp [ 0 ] = 0 ; tmp [ 1 ]
= 0 ; tmp [ 2 ] = 1 ; tmp [ 3 ] = 0 ; tmp [ 4 ] = 0 ; tmp [ 5 ] = 0 ; for (
b_kstr = 0 ; b_kstr < 6 ; b_kstr ++ ) { msubspace_data [ b_kstr ] = tmp [
b_kstr ] ; } poslim_data [ 0 ] = - 3.1415926535897931 ; poslim_data [ 1 ] =
3.1415926535897931 ; iobj_1 -> VelocityNumber = 1.0 ; iobj_1 ->
PositionNumber = 1.0 ; iobj_1 -> JointAxisInternal [ 0 ] = 0.0 ; iobj_1 ->
JointAxisInternal [ 1 ] = 0.0 ; iobj_1 -> JointAxisInternal [ 2 ] = 1.0 ;
break ; case 1 : tmp [ 0 ] = 0 ; tmp [ 1 ] = 0 ; tmp [ 2 ] = 0 ; tmp [ 3 ] =
0 ; tmp [ 4 ] = 0 ; tmp [ 5 ] = 1 ; for ( b_kstr = 0 ; b_kstr < 6 ; b_kstr ++
) { msubspace_data [ b_kstr ] = tmp [ b_kstr ] ; } poslim_data [ 0 ] = - 0.5
; poslim_data [ 1 ] = 0.5 ; iobj_1 -> VelocityNumber = 1.0 ; iobj_1 ->
PositionNumber = 1.0 ; iobj_1 -> JointAxisInternal [ 0 ] = 0.0 ; iobj_1 ->
JointAxisInternal [ 1 ] = 0.0 ; iobj_1 -> JointAxisInternal [ 2 ] = 1.0 ;
break ; default : for ( b_kstr = 0 ; b_kstr < 6 ; b_kstr ++ ) {
msubspace_data [ b_kstr ] = 0 ; } poslim_data [ 0 ] = 0.0 ; poslim_data [ 1 ]
= 0.0 ; iobj_1 -> VelocityNumber = 0.0 ; iobj_1 -> PositionNumber = 0.0 ;
iobj_1 -> JointAxisInternal [ 0 ] = 0.0 ; iobj_1 -> JointAxisInternal [ 1 ] =
0.0 ; iobj_1 -> JointAxisInternal [ 2 ] = 0.0 ; break ; } b_kstr = iobj_1 ->
MotionSubspace -> size [ 0 ] * iobj_1 -> MotionSubspace -> size [ 1 ] ;
iobj_1 -> MotionSubspace -> size [ 0 ] = 6 ; iobj_1 -> MotionSubspace -> size
[ 1 ] = 1 ; o4pyrzarz5 ( iobj_1 -> MotionSubspace , b_kstr ) ; for ( b_kstr =
0 ; b_kstr < 6 ; b_kstr ++ ) { iobj_1 -> MotionSubspace -> data [ b_kstr ] =
msubspace_data [ b_kstr ] ; } b_kstr = iobj_1 -> PositionLimitsInternal ->
size [ 0 ] * iobj_1 -> PositionLimitsInternal -> size [ 1 ] ; iobj_1 ->
PositionLimitsInternal -> size [ 0 ] = 1 ; iobj_1 -> PositionLimitsInternal
-> size [ 1 ] = 2 ; o4pyrzarz5 ( iobj_1 -> PositionLimitsInternal , b_kstr )
; for ( b_kstr = 0 ; b_kstr < 2 ; b_kstr ++ ) { iobj_1 ->
PositionLimitsInternal -> data [ b_kstr ] = poslim_data [ b_kstr ] ; } b_kstr
= iobj_1 -> HomePositionInternal -> size [ 0 ] ; iobj_1 ->
HomePositionInternal -> size [ 0 ] = 1 ; o4pyrzarz5 ( iobj_1 ->
HomePositionInternal , b_kstr ) ; iobj_1 -> HomePositionInternal -> data [ 0
] = 0.0 ; obj -> JointInternal = iobj_1 ; obj -> Index = - 1.0 ; obj ->
ParentIndex = - 1.0 ; obj -> MassInternal = 1.0 ; obj -> CenterOfMassInternal
[ 0 ] = 0.0 ; obj -> CenterOfMassInternal [ 1 ] = 0.0 ; obj ->
CenterOfMassInternal [ 2 ] = 0.0 ; for ( b_kstr = 0 ; b_kstr < 9 ; b_kstr ++
) { b_I [ b_kstr ] = 0 ; } b_I [ 0 ] = 1 ; b_I [ 4 ] = 1 ; b_I [ 8 ] = 1 ;
for ( b_kstr = 0 ; b_kstr < 9 ; b_kstr ++ ) { obj -> InertiaInternal [ b_kstr
] = b_I [ b_kstr ] ; } for ( b_kstr = 0 ; b_kstr < 36 ; b_kstr ++ ) {
msubspace_data [ b_kstr ] = 0 ; } for ( b_kstr = 0 ; b_kstr < 6 ; b_kstr ++ )
{ msubspace_data [ b_kstr + 6 * b_kstr ] = 1 ; } for ( b_kstr = 0 ; b_kstr <
36 ; b_kstr ++ ) { obj -> SpatialInertia [ b_kstr ] = msubspace_data [ b_kstr
] ; } obj -> CollisionsInternal = oosvd5bnheg ( iobj_0 , 0.0 ) ; obj ->
matlabCodegenIsDeleted = false ; return b_obj ; } static cwp5dxx3gqu *
jq00jcy14q ( cwp5dxx3gqu * obj , ejmcoi31fmi * iobj_0 , orkdduvnogx * iobj_1
) { cwp5dxx3gqu * b_obj ; lg5jhfa1j5 * switch_expression ; real_T poslim_data
[ 12 ] ; int32_T b_kstr ; int32_T loop_ub ; char_T b_p [ 9 ] ; char_T b [ 8 ]
; int8_T msubspace_data [ 36 ] ; int8_T b_I [ 9 ] ; int8_T tmp [ 6 ] ;
boolean_T b_bool ; static const char_T tmp_p [ 10 ] = { 'd' , 'u' , 'm' , 'm'
, 'y' , 'b' , 'o' , 'd' , 'y' , '7' } ; static const int8_T tmp_e [ 16 ] = {
1 , 0 , 0 , 0 , 0 , 1 , 0 , 0 , 0 , 0 , 1 , 0 , 0 , 0 , 0 , 1 } ; static
const char_T tmp_i [ 14 ] = { 'd' , 'u' , 'm' , 'm' , 'y' , 'b' , 'o' , 'd' ,
'y' , '7' , '_' , 'j' , 'n' , 't' } ; static const char_T tmp_m [ 5 ] = { 'f'
, 'i' , 'x' , 'e' , 'd' } ; static const char_T tmp_g [ 8 ] = { 'r' , 'e' ,
'v' , 'o' , 'l' , 'u' , 't' , 'e' } ; static const char_T tmp_j [ 9 ] = { 'p'
, 'r' , 'i' , 's' , 'm' , 'a' , 't' , 'i' , 'c' } ; int32_T exitg1 ; b_obj =
obj ; b_kstr = obj -> NameInternal -> size [ 0 ] * obj -> NameInternal ->
size [ 1 ] ; obj -> NameInternal -> size [ 0 ] = 1 ; obj -> NameInternal ->
size [ 1 ] = 10 ; gsven4ga0i ( obj -> NameInternal , b_kstr ) ; for ( b_kstr
= 0 ; b_kstr < 10 ; b_kstr ++ ) { obj -> NameInternal -> data [ b_kstr ] =
tmp_p [ b_kstr ] ; } iobj_1 -> InTree = false ; for ( b_kstr = 0 ; b_kstr <
16 ; b_kstr ++ ) { iobj_1 -> JointToParentTransform [ b_kstr ] = tmp_e [
b_kstr ] ; } for ( b_kstr = 0 ; b_kstr < 16 ; b_kstr ++ ) { iobj_1 ->
ChildToJointTransform [ b_kstr ] = tmp_e [ b_kstr ] ; } b_kstr = iobj_1 ->
NameInternal -> size [ 0 ] * iobj_1 -> NameInternal -> size [ 1 ] ; iobj_1 ->
NameInternal -> size [ 0 ] = 1 ; iobj_1 -> NameInternal -> size [ 1 ] = 14 ;
gsven4ga0i ( iobj_1 -> NameInternal , b_kstr ) ; for ( b_kstr = 0 ; b_kstr <
14 ; b_kstr ++ ) { iobj_1 -> NameInternal -> data [ b_kstr ] = tmp_i [ b_kstr
] ; } b_kstr = iobj_1 -> Type -> size [ 0 ] * iobj_1 -> Type -> size [ 1 ] ;
iobj_1 -> Type -> size [ 0 ] = 1 ; iobj_1 -> Type -> size [ 1 ] = 5 ;
gsven4ga0i ( iobj_1 -> Type , b_kstr ) ; for ( b_kstr = 0 ; b_kstr < 5 ;
b_kstr ++ ) { iobj_1 -> Type -> data [ b_kstr ] = tmp_m [ b_kstr ] ; }
ek533x1it4 ( & switch_expression , 2 ) ; b_kstr = switch_expression -> size [
0 ] * switch_expression -> size [ 1 ] ; switch_expression -> size [ 0 ] = 1 ;
switch_expression -> size [ 1 ] = iobj_1 -> Type -> size [ 1 ] ; gsven4ga0i (
switch_expression , b_kstr ) ; loop_ub = iobj_1 -> Type -> size [ 1 ] ; for (
b_kstr = 0 ; b_kstr < loop_ub ; b_kstr ++ ) { switch_expression -> data [
b_kstr ] = iobj_1 -> Type -> data [ b_kstr ] ; } for ( b_kstr = 0 ; b_kstr <
8 ; b_kstr ++ ) { b [ b_kstr ] = tmp_g [ b_kstr ] ; } b_bool = false ; if (
switch_expression -> size [ 1 ] != 8 ) { } else { b_kstr = 1 ; do { exitg1 =
0 ; if ( b_kstr - 1 < 8 ) { if ( switch_expression -> data [ b_kstr - 1 ] !=
b [ b_kstr - 1 ] ) { exitg1 = 1 ; } else { b_kstr ++ ; } } else { b_bool =
true ; exitg1 = 1 ; } } while ( exitg1 == 0 ) ; } if ( b_bool ) { b_kstr = 0
; } else { for ( b_kstr = 0 ; b_kstr < 9 ; b_kstr ++ ) { b_p [ b_kstr ] =
tmp_j [ b_kstr ] ; } if ( switch_expression -> size [ 1 ] != 9 ) { } else {
b_kstr = 1 ; do { exitg1 = 0 ; if ( b_kstr - 1 < 9 ) { if ( switch_expression
-> data [ b_kstr - 1 ] != b_p [ b_kstr - 1 ] ) { exitg1 = 1 ; } else { b_kstr
++ ; } } else { b_bool = true ; exitg1 = 1 ; } } while ( exitg1 == 0 ) ; } if
( b_bool ) { b_kstr = 1 ; } else { b_kstr = - 1 ; } } dqu5smbks1 ( &
switch_expression ) ; switch ( b_kstr ) { case 0 : tmp [ 0 ] = 0 ; tmp [ 1 ]
= 0 ; tmp [ 2 ] = 1 ; tmp [ 3 ] = 0 ; tmp [ 4 ] = 0 ; tmp [ 5 ] = 0 ; for (
b_kstr = 0 ; b_kstr < 6 ; b_kstr ++ ) { msubspace_data [ b_kstr ] = tmp [
b_kstr ] ; } poslim_data [ 0 ] = - 3.1415926535897931 ; poslim_data [ 1 ] =
3.1415926535897931 ; iobj_1 -> VelocityNumber = 1.0 ; iobj_1 ->
PositionNumber = 1.0 ; iobj_1 -> JointAxisInternal [ 0 ] = 0.0 ; iobj_1 ->
JointAxisInternal [ 1 ] = 0.0 ; iobj_1 -> JointAxisInternal [ 2 ] = 1.0 ;
break ; case 1 : tmp [ 0 ] = 0 ; tmp [ 1 ] = 0 ; tmp [ 2 ] = 0 ; tmp [ 3 ] =
0 ; tmp [ 4 ] = 0 ; tmp [ 5 ] = 1 ; for ( b_kstr = 0 ; b_kstr < 6 ; b_kstr ++
) { msubspace_data [ b_kstr ] = tmp [ b_kstr ] ; } poslim_data [ 0 ] = - 0.5
; poslim_data [ 1 ] = 0.5 ; iobj_1 -> VelocityNumber = 1.0 ; iobj_1 ->
PositionNumber = 1.0 ; iobj_1 -> JointAxisInternal [ 0 ] = 0.0 ; iobj_1 ->
JointAxisInternal [ 1 ] = 0.0 ; iobj_1 -> JointAxisInternal [ 2 ] = 1.0 ;
break ; default : for ( b_kstr = 0 ; b_kstr < 6 ; b_kstr ++ ) {
msubspace_data [ b_kstr ] = 0 ; } poslim_data [ 0 ] = 0.0 ; poslim_data [ 1 ]
= 0.0 ; iobj_1 -> VelocityNumber = 0.0 ; iobj_1 -> PositionNumber = 0.0 ;
iobj_1 -> JointAxisInternal [ 0 ] = 0.0 ; iobj_1 -> JointAxisInternal [ 1 ] =
0.0 ; iobj_1 -> JointAxisInternal [ 2 ] = 0.0 ; break ; } b_kstr = iobj_1 ->
MotionSubspace -> size [ 0 ] * iobj_1 -> MotionSubspace -> size [ 1 ] ;
iobj_1 -> MotionSubspace -> size [ 0 ] = 6 ; iobj_1 -> MotionSubspace -> size
[ 1 ] = 1 ; o4pyrzarz5 ( iobj_1 -> MotionSubspace , b_kstr ) ; for ( b_kstr =
0 ; b_kstr < 6 ; b_kstr ++ ) { iobj_1 -> MotionSubspace -> data [ b_kstr ] =
msubspace_data [ b_kstr ] ; } b_kstr = iobj_1 -> PositionLimitsInternal ->
size [ 0 ] * iobj_1 -> PositionLimitsInternal -> size [ 1 ] ; iobj_1 ->
PositionLimitsInternal -> size [ 0 ] = 1 ; iobj_1 -> PositionLimitsInternal
-> size [ 1 ] = 2 ; o4pyrzarz5 ( iobj_1 -> PositionLimitsInternal , b_kstr )
; for ( b_kstr = 0 ; b_kstr < 2 ; b_kstr ++ ) { iobj_1 ->
PositionLimitsInternal -> data [ b_kstr ] = poslim_data [ b_kstr ] ; } b_kstr
= iobj_1 -> HomePositionInternal -> size [ 0 ] ; iobj_1 ->
HomePositionInternal -> size [ 0 ] = 1 ; o4pyrzarz5 ( iobj_1 ->
HomePositionInternal , b_kstr ) ; iobj_1 -> HomePositionInternal -> data [ 0
] = 0.0 ; obj -> JointInternal = iobj_1 ; obj -> Index = - 1.0 ; obj ->
ParentIndex = - 1.0 ; obj -> MassInternal = 1.0 ; obj -> CenterOfMassInternal
[ 0 ] = 0.0 ; obj -> CenterOfMassInternal [ 1 ] = 0.0 ; obj ->
CenterOfMassInternal [ 2 ] = 0.0 ; for ( b_kstr = 0 ; b_kstr < 9 ; b_kstr ++
) { b_I [ b_kstr ] = 0 ; } b_I [ 0 ] = 1 ; b_I [ 4 ] = 1 ; b_I [ 8 ] = 1 ;
for ( b_kstr = 0 ; b_kstr < 9 ; b_kstr ++ ) { obj -> InertiaInternal [ b_kstr
] = b_I [ b_kstr ] ; } for ( b_kstr = 0 ; b_kstr < 36 ; b_kstr ++ ) {
msubspace_data [ b_kstr ] = 0 ; } for ( b_kstr = 0 ; b_kstr < 6 ; b_kstr ++ )
{ msubspace_data [ b_kstr + 6 * b_kstr ] = 1 ; } for ( b_kstr = 0 ; b_kstr <
36 ; b_kstr ++ ) { obj -> SpatialInertia [ b_kstr ] = msubspace_data [ b_kstr
] ; } obj -> CollisionsInternal = oosvd5bnheg ( iobj_0 , 0.0 ) ; obj ->
matlabCodegenIsDeleted = false ; return b_obj ; } static cwp5dxx3gqu *
nqakf1njg2 ( cwp5dxx3gqu * obj , ejmcoi31fmi * iobj_0 , orkdduvnogx * iobj_1
) { cwp5dxx3gqu * b_obj ; lg5jhfa1j5 * switch_expression ; real_T poslim_data
[ 12 ] ; int32_T b_kstr ; int32_T loop_ub ; char_T b_p [ 9 ] ; char_T b [ 8 ]
; int8_T msubspace_data [ 36 ] ; int8_T tmp [ 6 ] ; boolean_T b_bool ; static
const char_T tmp_p [ 5 ] = { 'B' , 'o' , 'd' , 'y' , '3' } ; static const
real_T tmp_e [ 9 ] = { 0.6112534351807184 , 0.23245673061570959 ,
0.30624758382981676 , 0.23245673061570959 , 0.90607120680081921 , -
0.16825415193426005 , 0.30624758382981676 , - 0.16825415193426005 ,
0.727668360820738 } ; static const real_T tmp_i [ 36 ] = { 0.6112534351807184
, 0.23245673061570959 , 0.30624758382981676 , 0.0 , 2.71205488767081 , -
1.399099306213214 , 0.23245673061570959 , 0.90607120680081921 , -
0.16825415193426005 , - 2.71205488767081 , 0.0 , - 2.5465048108121309 ,
0.30624758382981676 , - 0.16825415193426005 , 0.727668360820738 ,
1.399099306213214 , 2.5465048108121309 , 0.0 , 0.0 , - 2.71205488767081 ,
1.399099306213214 , 32.945118318379222 , 0.0 , 0.0 , 2.71205488767081 , 0.0 ,
2.5465048108121309 , 0.0 , 32.945118318379222 , 0.0 , - 1.399099306213214 , -
2.5465048108121309 , 0.0 , 0.0 , 0.0 , 32.945118318379222 } ; static const
int8_T tmp_m [ 16 ] = { 1 , 0 , 0 , 0 , 0 , 1 , 0 , 0 , 0 , 0 , 1 , 0 , 0 , 0
, 0 , 1 } ; static const char_T tmp_g [ 6 ] = { 'J' , 'o' , 'i' , 'n' , 't' ,
'3' } ; static const char_T tmp_j [ 8 ] = { 'r' , 'e' , 'v' , 'o' , 'l' , 'u'
, 't' , 'e' } ; static const char_T tmp_f [ 9 ] = { 'p' , 'r' , 'i' , 's' ,
'm' , 'a' , 't' , 'i' , 'c' } ; static const real_T tmp_c [ 16 ] = {
0.99887503989935389 , 0.047419981717248857 , - 0.0 , 0.0 ,
0.047419981717248857 , - 0.99887503989935389 , 1.2246467991473532E-16 , 0.0 ,
5.8072728825654825E-18 , - 1.2232691203609284E-16 , - 1.0 , 0.0 ,
0.082345474851098888 , - 0.80700970426109886 , 0.024195000000044813 , 1.0 } ;
static const real_T tmp_k [ 16 ] = { 1.0 , 0.0 , 0.0 , 0.0 , 0.0 , 1.0 , 0.0
, 0.0 , 0.0 , 0.0 , 1.0 , 0.0 , 0.0 , 0.0 , 0.0 , 1.0 } ; static const real_T
tmp_b [ 36 ] = { 0.0 , 0.0 , 1.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 ,
0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 ,
0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 }
; int32_T exitg1 ; b_obj = obj ; b_kstr = obj -> NameInternal -> size [ 0 ] *
obj -> NameInternal -> size [ 1 ] ; obj -> NameInternal -> size [ 0 ] = 1 ;
obj -> NameInternal -> size [ 1 ] = 5 ; gsven4ga0i ( obj -> NameInternal ,
b_kstr ) ; for ( b_kstr = 0 ; b_kstr < 5 ; b_kstr ++ ) { obj -> NameInternal
-> data [ b_kstr ] = tmp_p [ b_kstr ] ; } obj -> ParentIndex = 2.0 ; obj ->
MassInternal = 32.945118318379222 ; obj -> CenterOfMassInternal [ 0 ] =
0.077295360915170919 ; obj -> CenterOfMassInternal [ 1 ] = -
0.042467575702488616 ; obj -> CenterOfMassInternal [ 2 ] = -
0.082320386937503431 ; for ( b_kstr = 0 ; b_kstr < 9 ; b_kstr ++ ) { obj ->
InertiaInternal [ b_kstr ] = tmp_e [ b_kstr ] ; } for ( b_kstr = 0 ; b_kstr <
36 ; b_kstr ++ ) { obj -> SpatialInertia [ b_kstr ] = tmp_i [ b_kstr ] ; }
iobj_1 -> InTree = false ; for ( b_kstr = 0 ; b_kstr < 16 ; b_kstr ++ ) {
iobj_1 -> JointToParentTransform [ b_kstr ] = tmp_m [ b_kstr ] ; } for (
b_kstr = 0 ; b_kstr < 16 ; b_kstr ++ ) { iobj_1 -> ChildToJointTransform [
b_kstr ] = tmp_m [ b_kstr ] ; } b_kstr = iobj_1 -> NameInternal -> size [ 0 ]
* iobj_1 -> NameInternal -> size [ 1 ] ; iobj_1 -> NameInternal -> size [ 0 ]
= 1 ; iobj_1 -> NameInternal -> size [ 1 ] = 6 ; gsven4ga0i ( iobj_1 ->
NameInternal , b_kstr ) ; for ( b_kstr = 0 ; b_kstr < 6 ; b_kstr ++ ) {
iobj_1 -> NameInternal -> data [ b_kstr ] = tmp_g [ b_kstr ] ; } b_kstr =
iobj_1 -> Type -> size [ 0 ] * iobj_1 -> Type -> size [ 1 ] ; iobj_1 -> Type
-> size [ 0 ] = 1 ; iobj_1 -> Type -> size [ 1 ] = 8 ; gsven4ga0i ( iobj_1 ->
Type , b_kstr ) ; for ( b_kstr = 0 ; b_kstr < 8 ; b_kstr ++ ) { iobj_1 ->
Type -> data [ b_kstr ] = tmp_j [ b_kstr ] ; } ek533x1it4 ( &
switch_expression , 2 ) ; b_kstr = switch_expression -> size [ 0 ] *
switch_expression -> size [ 1 ] ; switch_expression -> size [ 0 ] = 1 ;
switch_expression -> size [ 1 ] = iobj_1 -> Type -> size [ 1 ] ; gsven4ga0i (
switch_expression , b_kstr ) ; loop_ub = iobj_1 -> Type -> size [ 1 ] ; for (
b_kstr = 0 ; b_kstr < loop_ub ; b_kstr ++ ) { switch_expression -> data [
b_kstr ] = iobj_1 -> Type -> data [ b_kstr ] ; } for ( b_kstr = 0 ; b_kstr <
8 ; b_kstr ++ ) { b [ b_kstr ] = tmp_j [ b_kstr ] ; } b_bool = false ; if (
switch_expression -> size [ 1 ] != 8 ) { } else { b_kstr = 1 ; do { exitg1 =
0 ; if ( b_kstr - 1 < 8 ) { if ( switch_expression -> data [ b_kstr - 1 ] !=
b [ b_kstr - 1 ] ) { exitg1 = 1 ; } else { b_kstr ++ ; } } else { b_bool =
true ; exitg1 = 1 ; } } while ( exitg1 == 0 ) ; } if ( b_bool ) { b_kstr = 0
; } else { for ( b_kstr = 0 ; b_kstr < 9 ; b_kstr ++ ) { b_p [ b_kstr ] =
tmp_f [ b_kstr ] ; } if ( switch_expression -> size [ 1 ] != 9 ) { } else {
b_kstr = 1 ; do { exitg1 = 0 ; if ( b_kstr - 1 < 9 ) { if ( switch_expression
-> data [ b_kstr - 1 ] != b_p [ b_kstr - 1 ] ) { exitg1 = 1 ; } else { b_kstr
++ ; } } else { b_bool = true ; exitg1 = 1 ; } } while ( exitg1 == 0 ) ; } if
( b_bool ) { b_kstr = 1 ; } else { b_kstr = - 1 ; } } dqu5smbks1 ( &
switch_expression ) ; switch ( b_kstr ) { case 0 : tmp [ 0 ] = 0 ; tmp [ 1 ]
= 0 ; tmp [ 2 ] = 1 ; tmp [ 3 ] = 0 ; tmp [ 4 ] = 0 ; tmp [ 5 ] = 0 ; for (
b_kstr = 0 ; b_kstr < 6 ; b_kstr ++ ) { msubspace_data [ b_kstr ] = tmp [
b_kstr ] ; } poslim_data [ 0 ] = - 3.1415926535897931 ; poslim_data [ 1 ] =
3.1415926535897931 ; iobj_1 -> VelocityNumber = 1.0 ; iobj_1 ->
PositionNumber = 1.0 ; iobj_1 -> JointAxisInternal [ 0 ] = 0.0 ; iobj_1 ->
JointAxisInternal [ 1 ] = 0.0 ; iobj_1 -> JointAxisInternal [ 2 ] = 1.0 ;
break ; case 1 : tmp [ 0 ] = 0 ; tmp [ 1 ] = 0 ; tmp [ 2 ] = 0 ; tmp [ 3 ] =
0 ; tmp [ 4 ] = 0 ; tmp [ 5 ] = 1 ; for ( b_kstr = 0 ; b_kstr < 6 ; b_kstr ++
) { msubspace_data [ b_kstr ] = tmp [ b_kstr ] ; } poslim_data [ 0 ] = - 0.5
; poslim_data [ 1 ] = 0.5 ; iobj_1 -> VelocityNumber = 1.0 ; iobj_1 ->
PositionNumber = 1.0 ; iobj_1 -> JointAxisInternal [ 0 ] = 0.0 ; iobj_1 ->
JointAxisInternal [ 1 ] = 0.0 ; iobj_1 -> JointAxisInternal [ 2 ] = 1.0 ;
break ; default : for ( b_kstr = 0 ; b_kstr < 6 ; b_kstr ++ ) {
msubspace_data [ b_kstr ] = 0 ; } poslim_data [ 0 ] = 0.0 ; poslim_data [ 1 ]
= 0.0 ; iobj_1 -> VelocityNumber = 0.0 ; iobj_1 -> PositionNumber = 0.0 ;
iobj_1 -> JointAxisInternal [ 0 ] = 0.0 ; iobj_1 -> JointAxisInternal [ 1 ] =
0.0 ; iobj_1 -> JointAxisInternal [ 2 ] = 0.0 ; break ; } b_kstr = iobj_1 ->
MotionSubspace -> size [ 0 ] * iobj_1 -> MotionSubspace -> size [ 1 ] ;
iobj_1 -> MotionSubspace -> size [ 0 ] = 6 ; iobj_1 -> MotionSubspace -> size
[ 1 ] = 1 ; o4pyrzarz5 ( iobj_1 -> MotionSubspace , b_kstr ) ; for ( b_kstr =
0 ; b_kstr < 6 ; b_kstr ++ ) { iobj_1 -> MotionSubspace -> data [ b_kstr ] =
msubspace_data [ b_kstr ] ; } b_kstr = iobj_1 -> PositionLimitsInternal ->
size [ 0 ] * iobj_1 -> PositionLimitsInternal -> size [ 1 ] ; iobj_1 ->
PositionLimitsInternal -> size [ 0 ] = 1 ; iobj_1 -> PositionLimitsInternal
-> size [ 1 ] = 2 ; o4pyrzarz5 ( iobj_1 -> PositionLimitsInternal , b_kstr )
; for ( b_kstr = 0 ; b_kstr < 2 ; b_kstr ++ ) { iobj_1 ->
PositionLimitsInternal -> data [ b_kstr ] = poslim_data [ b_kstr ] ; } b_kstr
= iobj_1 -> HomePositionInternal -> size [ 0 ] ; iobj_1 ->
HomePositionInternal -> size [ 0 ] = 1 ; o4pyrzarz5 ( iobj_1 ->
HomePositionInternal , b_kstr ) ; iobj_1 -> HomePositionInternal -> data [ 0
] = 0.0 ; obj -> JointInternal = iobj_1 ; for ( b_kstr = 0 ; b_kstr < 16 ;
b_kstr ++ ) { obj -> JointInternal -> JointToParentTransform [ b_kstr ] =
tmp_c [ b_kstr ] ; } for ( b_kstr = 0 ; b_kstr < 16 ; b_kstr ++ ) { obj ->
JointInternal -> ChildToJointTransform [ b_kstr ] = tmp_k [ b_kstr ] ; }
b_kstr = obj -> JointInternal -> MotionSubspace -> size [ 0 ] * obj ->
JointInternal -> MotionSubspace -> size [ 1 ] ; obj -> JointInternal ->
MotionSubspace -> size [ 0 ] = 6 ; obj -> JointInternal -> MotionSubspace ->
size [ 1 ] = 1 ; o4pyrzarz5 ( obj -> JointInternal -> MotionSubspace , b_kstr
) ; for ( b_kstr = 0 ; b_kstr < 6 ; b_kstr ++ ) { obj -> JointInternal ->
MotionSubspace -> data [ b_kstr ] = tmp_b [ b_kstr ] ; } obj -> JointInternal
-> InTree = true ; b_kstr = obj -> JointInternal -> PositionLimitsInternal ->
size [ 0 ] * obj -> JointInternal -> PositionLimitsInternal -> size [ 1 ] ;
obj -> JointInternal -> PositionLimitsInternal -> size [ 0 ] = 1 ; obj ->
JointInternal -> PositionLimitsInternal -> size [ 1 ] = 2 ; o4pyrzarz5 ( obj
-> JointInternal -> PositionLimitsInternal , b_kstr ) ; obj -> JointInternal
-> PositionLimitsInternal -> data [ 0 ] = - 3.1415926535897931 ; obj ->
JointInternal -> PositionLimitsInternal -> data [ obj -> JointInternal ->
PositionLimitsInternal -> size [ 0 ] ] = 3.1415926535897931 ; obj ->
JointInternal -> JointAxisInternal [ 0 ] = 0.0 ; obj -> JointInternal ->
JointAxisInternal [ 1 ] = 0.0 ; obj -> JointInternal -> JointAxisInternal [ 2
] = 1.0 ; b_kstr = obj -> JointInternal -> HomePositionInternal -> size [ 0 ]
; obj -> JointInternal -> HomePositionInternal -> size [ 0 ] = 1 ; o4pyrzarz5
( obj -> JointInternal -> HomePositionInternal , b_kstr ) ; obj ->
JointInternal -> HomePositionInternal -> data [ 0 ] = 0.0 ; obj ->
CollisionsInternal = oosvd5bnheg ( iobj_0 , 0.0 ) ; obj ->
matlabCodegenIsDeleted = false ; return b_obj ; } static cwp5dxx3gqu *
i4ef5xo4iv ( cwp5dxx3gqu * obj , ejmcoi31fmi * iobj_0 , orkdduvnogx * iobj_1
) { cwp5dxx3gqu * b_obj ; lg5jhfa1j5 * switch_expression ; real_T poslim_data
[ 12 ] ; int32_T b_kstr ; int32_T loop_ub ; char_T b_p [ 9 ] ; char_T b [ 8 ]
; int8_T msubspace_data [ 36 ] ; int8_T tmp [ 6 ] ; boolean_T b_bool ; static
const char_T tmp_p [ 5 ] = { 'B' , 'o' , 'd' , 'y' , '4' } ; static const
real_T tmp_e [ 9 ] = { 1.1935632910804839 , - 0.03208233273032908 ,
0.404264800180025 , - 0.03208233273032908 , 1.3442748382810747 ,
0.082463992816450074 , 0.404264800180025 , 0.082463992816450074 ,
0.22464431391629225 } ; static const real_T tmp_i [ 36 ] = {
1.1935632910804839 , - 0.03208233273032908 , 0.404264800180025 , 0.0 ,
2.6921198511491227 , 0.22305650975964122 , - 0.03208233273032908 ,
1.3442748382810747 , 0.082463992816450074 , - 2.6921198511491227 , 0.0 , -
1.0930299990157011 , 0.404264800180025 , 0.082463992816450074 ,
0.22464431391629225 , - 0.22305650975964122 , 1.0930299990157011 , 0.0 , 0.0
, - 2.6921198511491227 , - 0.22305650975964122 , 10.09694353188112 , 0.0 ,
0.0 , 2.6921198511491227 , 0.0 , 1.0930299990157011 , 0.0 , 10.09694353188112
, 0.0 , 0.22305650975964122 , - 1.0930299990157011 , 0.0 , 0.0 , 0.0 ,
10.09694353188112 } ; static const int8_T tmp_m [ 16 ] = { 1 , 0 , 0 , 0 , 0
, 1 , 0 , 0 , 0 , 0 , 1 , 0 , 0 , 0 , 0 , 1 } ; static const char_T tmp_g [ 6
] = { 'J' , 'o' , 'i' , 'n' , 't' , '4' } ; static const char_T tmp_j [ 8 ] =
{ 'r' , 'e' , 'v' , 'o' , 'l' , 'u' , 't' , 'e' } ; static const char_T tmp_f
[ 9 ] = { 'p' , 'r' , 'i' , 's' , 'm' , 'a' , 't' , 'i' , 'c' } ; static
const real_T tmp_c [ 16 ] = { 0.096500416960583826 , 0.17542938201214472 , -
0.97975109158054552 , 0.0 , - 0.47221398207965382 , - 0.85844403229432908 , -
0.20021937605219314 , 0.0 , - 0.87618583910886738 , 0.48197341767476154 ,
1.2259900900479928E-17 , 0.0 , 0.21742989269471785 , - 0.11960411114760211 ,
- 0.11998997562072158 , 1.0 } ; static const real_T tmp_k [ 16 ] = { 1.0 ,
0.0 , 0.0 , 0.0 , 0.0 , 1.0 , 0.0 , 0.0 , 0.0 , 0.0 , 1.0 , 0.0 , 0.0 , 0.0 ,
0.0 , 1.0 } ; static const real_T tmp_b [ 36 ] = { 0.0 , 0.0 , 1.0 , 0.0 ,
0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 ,
0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 ,
0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 } ; int32_T exitg1 ; b_obj = obj ; b_kstr =
obj -> NameInternal -> size [ 0 ] * obj -> NameInternal -> size [ 1 ] ; obj
-> NameInternal -> size [ 0 ] = 1 ; obj -> NameInternal -> size [ 1 ] = 5 ;
gsven4ga0i ( obj -> NameInternal , b_kstr ) ; for ( b_kstr = 0 ; b_kstr < 5 ;
b_kstr ++ ) { obj -> NameInternal -> data [ b_kstr ] = tmp_p [ b_kstr ] ; }
obj -> ParentIndex = 3.0 ; obj -> MassInternal = 10.09694353188112 ; obj ->
CenterOfMassInternal [ 0 ] = 0.1082535517371625 ; obj -> CenterOfMassInternal
[ 1 ] = 0.02209148828606794 ; obj -> CenterOfMassInternal [ 2 ] = -
0.266627206802608 ; for ( b_kstr = 0 ; b_kstr < 9 ; b_kstr ++ ) { obj ->
InertiaInternal [ b_kstr ] = tmp_e [ b_kstr ] ; } for ( b_kstr = 0 ; b_kstr <
36 ; b_kstr ++ ) { obj -> SpatialInertia [ b_kstr ] = tmp_i [ b_kstr ] ; }
iobj_1 -> InTree = false ; for ( b_kstr = 0 ; b_kstr < 16 ; b_kstr ++ ) {
iobj_1 -> JointToParentTransform [ b_kstr ] = tmp_m [ b_kstr ] ; } for (
b_kstr = 0 ; b_kstr < 16 ; b_kstr ++ ) { iobj_1 -> ChildToJointTransform [
b_kstr ] = tmp_m [ b_kstr ] ; } b_kstr = iobj_1 -> NameInternal -> size [ 0 ]
* iobj_1 -> NameInternal -> size [ 1 ] ; iobj_1 -> NameInternal -> size [ 0 ]
= 1 ; iobj_1 -> NameInternal -> size [ 1 ] = 6 ; gsven4ga0i ( iobj_1 ->
NameInternal , b_kstr ) ; for ( b_kstr = 0 ; b_kstr < 6 ; b_kstr ++ ) {
iobj_1 -> NameInternal -> data [ b_kstr ] = tmp_g [ b_kstr ] ; } b_kstr =
iobj_1 -> Type -> size [ 0 ] * iobj_1 -> Type -> size [ 1 ] ; iobj_1 -> Type
-> size [ 0 ] = 1 ; iobj_1 -> Type -> size [ 1 ] = 8 ; gsven4ga0i ( iobj_1 ->
Type , b_kstr ) ; for ( b_kstr = 0 ; b_kstr < 8 ; b_kstr ++ ) { iobj_1 ->
Type -> data [ b_kstr ] = tmp_j [ b_kstr ] ; } ek533x1it4 ( &
switch_expression , 2 ) ; b_kstr = switch_expression -> size [ 0 ] *
switch_expression -> size [ 1 ] ; switch_expression -> size [ 0 ] = 1 ;
switch_expression -> size [ 1 ] = iobj_1 -> Type -> size [ 1 ] ; gsven4ga0i (
switch_expression , b_kstr ) ; loop_ub = iobj_1 -> Type -> size [ 1 ] ; for (
b_kstr = 0 ; b_kstr < loop_ub ; b_kstr ++ ) { switch_expression -> data [
b_kstr ] = iobj_1 -> Type -> data [ b_kstr ] ; } for ( b_kstr = 0 ; b_kstr <
8 ; b_kstr ++ ) { b [ b_kstr ] = tmp_j [ b_kstr ] ; } b_bool = false ; if (
switch_expression -> size [ 1 ] != 8 ) { } else { b_kstr = 1 ; do { exitg1 =
0 ; if ( b_kstr - 1 < 8 ) { if ( switch_expression -> data [ b_kstr - 1 ] !=
b [ b_kstr - 1 ] ) { exitg1 = 1 ; } else { b_kstr ++ ; } } else { b_bool =
true ; exitg1 = 1 ; } } while ( exitg1 == 0 ) ; } if ( b_bool ) { b_kstr = 0
; } else { for ( b_kstr = 0 ; b_kstr < 9 ; b_kstr ++ ) { b_p [ b_kstr ] =
tmp_f [ b_kstr ] ; } if ( switch_expression -> size [ 1 ] != 9 ) { } else {
b_kstr = 1 ; do { exitg1 = 0 ; if ( b_kstr - 1 < 9 ) { if ( switch_expression
-> data [ b_kstr - 1 ] != b_p [ b_kstr - 1 ] ) { exitg1 = 1 ; } else { b_kstr
++ ; } } else { b_bool = true ; exitg1 = 1 ; } } while ( exitg1 == 0 ) ; } if
( b_bool ) { b_kstr = 1 ; } else { b_kstr = - 1 ; } } dqu5smbks1 ( &
switch_expression ) ; switch ( b_kstr ) { case 0 : tmp [ 0 ] = 0 ; tmp [ 1 ]
= 0 ; tmp [ 2 ] = 1 ; tmp [ 3 ] = 0 ; tmp [ 4 ] = 0 ; tmp [ 5 ] = 0 ; for (
b_kstr = 0 ; b_kstr < 6 ; b_kstr ++ ) { msubspace_data [ b_kstr ] = tmp [
b_kstr ] ; } poslim_data [ 0 ] = - 3.1415926535897931 ; poslim_data [ 1 ] =
3.1415926535897931 ; iobj_1 -> VelocityNumber = 1.0 ; iobj_1 ->
PositionNumber = 1.0 ; iobj_1 -> JointAxisInternal [ 0 ] = 0.0 ; iobj_1 ->
JointAxisInternal [ 1 ] = 0.0 ; iobj_1 -> JointAxisInternal [ 2 ] = 1.0 ;
break ; case 1 : tmp [ 0 ] = 0 ; tmp [ 1 ] = 0 ; tmp [ 2 ] = 0 ; tmp [ 3 ] =
0 ; tmp [ 4 ] = 0 ; tmp [ 5 ] = 1 ; for ( b_kstr = 0 ; b_kstr < 6 ; b_kstr ++
) { msubspace_data [ b_kstr ] = tmp [ b_kstr ] ; } poslim_data [ 0 ] = - 0.5
; poslim_data [ 1 ] = 0.5 ; iobj_1 -> VelocityNumber = 1.0 ; iobj_1 ->
PositionNumber = 1.0 ; iobj_1 -> JointAxisInternal [ 0 ] = 0.0 ; iobj_1 ->
JointAxisInternal [ 1 ] = 0.0 ; iobj_1 -> JointAxisInternal [ 2 ] = 1.0 ;
break ; default : for ( b_kstr = 0 ; b_kstr < 6 ; b_kstr ++ ) {
msubspace_data [ b_kstr ] = 0 ; } poslim_data [ 0 ] = 0.0 ; poslim_data [ 1 ]
= 0.0 ; iobj_1 -> VelocityNumber = 0.0 ; iobj_1 -> PositionNumber = 0.0 ;
iobj_1 -> JointAxisInternal [ 0 ] = 0.0 ; iobj_1 -> JointAxisInternal [ 1 ] =
0.0 ; iobj_1 -> JointAxisInternal [ 2 ] = 0.0 ; break ; } b_kstr = iobj_1 ->
MotionSubspace -> size [ 0 ] * iobj_1 -> MotionSubspace -> size [ 1 ] ;
iobj_1 -> MotionSubspace -> size [ 0 ] = 6 ; iobj_1 -> MotionSubspace -> size
[ 1 ] = 1 ; o4pyrzarz5 ( iobj_1 -> MotionSubspace , b_kstr ) ; for ( b_kstr =
0 ; b_kstr < 6 ; b_kstr ++ ) { iobj_1 -> MotionSubspace -> data [ b_kstr ] =
msubspace_data [ b_kstr ] ; } b_kstr = iobj_1 -> PositionLimitsInternal ->
size [ 0 ] * iobj_1 -> PositionLimitsInternal -> size [ 1 ] ; iobj_1 ->
PositionLimitsInternal -> size [ 0 ] = 1 ; iobj_1 -> PositionLimitsInternal
-> size [ 1 ] = 2 ; o4pyrzarz5 ( iobj_1 -> PositionLimitsInternal , b_kstr )
; for ( b_kstr = 0 ; b_kstr < 2 ; b_kstr ++ ) { iobj_1 ->
PositionLimitsInternal -> data [ b_kstr ] = poslim_data [ b_kstr ] ; } b_kstr
= iobj_1 -> HomePositionInternal -> size [ 0 ] ; iobj_1 ->
HomePositionInternal -> size [ 0 ] = 1 ; o4pyrzarz5 ( iobj_1 ->
HomePositionInternal , b_kstr ) ; iobj_1 -> HomePositionInternal -> data [ 0
] = 0.0 ; obj -> JointInternal = iobj_1 ; for ( b_kstr = 0 ; b_kstr < 16 ;
b_kstr ++ ) { obj -> JointInternal -> JointToParentTransform [ b_kstr ] =
tmp_c [ b_kstr ] ; } for ( b_kstr = 0 ; b_kstr < 16 ; b_kstr ++ ) { obj ->
JointInternal -> ChildToJointTransform [ b_kstr ] = tmp_k [ b_kstr ] ; }
b_kstr = obj -> JointInternal -> MotionSubspace -> size [ 0 ] * obj ->
JointInternal -> MotionSubspace -> size [ 1 ] ; obj -> JointInternal ->
MotionSubspace -> size [ 0 ] = 6 ; obj -> JointInternal -> MotionSubspace ->
size [ 1 ] = 1 ; o4pyrzarz5 ( obj -> JointInternal -> MotionSubspace , b_kstr
) ; for ( b_kstr = 0 ; b_kstr < 6 ; b_kstr ++ ) { obj -> JointInternal ->
MotionSubspace -> data [ b_kstr ] = tmp_b [ b_kstr ] ; } obj -> JointInternal
-> InTree = true ; b_kstr = obj -> JointInternal -> PositionLimitsInternal ->
size [ 0 ] * obj -> JointInternal -> PositionLimitsInternal -> size [ 1 ] ;
obj -> JointInternal -> PositionLimitsInternal -> size [ 0 ] = 1 ; obj ->
JointInternal -> PositionLimitsInternal -> size [ 1 ] = 2 ; o4pyrzarz5 ( obj
-> JointInternal -> PositionLimitsInternal , b_kstr ) ; obj -> JointInternal
-> PositionLimitsInternal -> data [ 0 ] = - 3.1415926535897931 ; obj ->
JointInternal -> PositionLimitsInternal -> data [ obj -> JointInternal ->
PositionLimitsInternal -> size [ 0 ] ] = 3.1415926535897931 ; obj ->
JointInternal -> JointAxisInternal [ 0 ] = 0.0 ; obj -> JointInternal ->
JointAxisInternal [ 1 ] = 0.0 ; obj -> JointInternal -> JointAxisInternal [ 2
] = 1.0 ; b_kstr = obj -> JointInternal -> HomePositionInternal -> size [ 0 ]
; obj -> JointInternal -> HomePositionInternal -> size [ 0 ] = 1 ; o4pyrzarz5
( obj -> JointInternal -> HomePositionInternal , b_kstr ) ; obj ->
JointInternal -> HomePositionInternal -> data [ 0 ] = 0.0 ; obj ->
CollisionsInternal = oosvd5bnheg ( iobj_0 , 0.0 ) ; obj ->
matlabCodegenIsDeleted = false ; return b_obj ; } static cwp5dxx3gqu *
pvef0ss41c ( cwp5dxx3gqu * obj , ejmcoi31fmi * iobj_0 , orkdduvnogx * iobj_1
) { cwp5dxx3gqu * b_obj ; lg5jhfa1j5 * switch_expression ; real_T poslim_data
[ 12 ] ; int32_T b_kstr ; int32_T loop_ub ; char_T b_p [ 9 ] ; char_T b [ 8 ]
; int8_T msubspace_data [ 36 ] ; int8_T tmp [ 6 ] ; boolean_T b_bool ; static
const char_T tmp_p [ 5 ] = { 'B' , 'o' , 'd' , 'y' , '5' } ; static const
real_T tmp_e [ 9 ] = { 0.30111198235333808 , - 0.011359260806530972 ,
0.00929994354367826 , - 0.011359260806530972 , 0.17437851942459445 ,
0.10478016371420321 , 0.00929994354367826 , 0.10478016371420321 ,
0.16846328851594453 } ; static const real_T tmp_i [ 36 ] = {
0.30111198235333808 , - 0.011359260806530972 , 0.00929994354367826 , 0.0 , -
1.2197797714503833 , - 0.89422327594540707 , - 0.011359260806530972 ,
0.17437851942459445 , 0.10478016371420321 , 1.2197797714503833 , 0.0 ,
0.079494612667573739 , 0.00929994354367826 , 0.10478016371420321 ,
0.16846328851594453 , 0.89422327594540707 , - 0.079494612667573739 , 0.0 ,
0.0 , 1.2197797714503833 , 0.89422327594540707 , 14.05841696800046 , 0.0 ,
0.0 , - 1.2197797714503833 , 0.0 , - 0.079494612667573739 , 0.0 ,
14.05841696800046 , 0.0 , - 0.89422327594540707 , 0.079494612667573739 , 0.0
, 0.0 , 0.0 , 14.05841696800046 } ; static const int8_T tmp_m [ 16 ] = { 1 ,
0 , 0 , 0 , 0 , 1 , 0 , 0 , 0 , 0 , 1 , 0 , 0 , 0 , 0 , 1 } ; static const
char_T tmp_g [ 6 ] = { 'J' , 'o' , 'i' , 'n' , 't' , '5' } ; static const
char_T tmp_j [ 8 ] = { 'r' , 'e' , 'v' , 'o' , 'l' , 'u' , 't' , 'e' } ;
static const char_T tmp_f [ 9 ] = { 'p' , 'r' , 'i' , 's' , 'm' , 'a' , 't' ,
'i' , 'c' } ; static const real_T tmp_c [ 16 ] = { 0.10332663435196174 , -
0.50561731232852969 , - 0.85654815399203921 , 0.0 , 0.17149753695106323 , -
0.83920398886497727 , 0.51606710793542143 , 0.0 , - 0.9797510915805171 , -
0.20021937605233242 , 3.1599996593917272E-17 , 0.0 , 0.12049958683154875 ,
0.024624981076611704 , - 0.63036996585545535 , 1.0 } ; static const real_T
tmp_k [ 16 ] = { 1.0 , 0.0 , 0.0 , 0.0 , 0.0 , 1.0 , 0.0 , 0.0 , 0.0 , 0.0 ,
1.0 , 0.0 , 0.0 , 0.0 , 0.0 , 1.0 } ; static const real_T tmp_b [ 36 ] = {
0.0 , 0.0 , 1.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 ,
0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 ,
0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 } ; int32_T exitg1
; b_obj = obj ; b_kstr = obj -> NameInternal -> size [ 0 ] * obj ->
NameInternal -> size [ 1 ] ; obj -> NameInternal -> size [ 0 ] = 1 ; obj ->
NameInternal -> size [ 1 ] = 5 ; gsven4ga0i ( obj -> NameInternal , b_kstr )
; for ( b_kstr = 0 ; b_kstr < 5 ; b_kstr ++ ) { obj -> NameInternal -> data [
b_kstr ] = tmp_p [ b_kstr ] ; } obj -> ParentIndex = 4.0 ; obj ->
MassInternal = 14.05841696800046 ; obj -> CenterOfMassInternal [ 0 ] = -
0.0056545920389556008 ; obj -> CenterOfMassInternal [ 1 ] = -
0.06360767915625376 ; obj -> CenterOfMassInternal [ 2 ] =
0.086765087009926245 ; for ( b_kstr = 0 ; b_kstr < 9 ; b_kstr ++ ) { obj ->
InertiaInternal [ b_kstr ] = tmp_e [ b_kstr ] ; } for ( b_kstr = 0 ; b_kstr <
36 ; b_kstr ++ ) { obj -> SpatialInertia [ b_kstr ] = tmp_i [ b_kstr ] ; }
iobj_1 -> InTree = false ; for ( b_kstr = 0 ; b_kstr < 16 ; b_kstr ++ ) {
iobj_1 -> JointToParentTransform [ b_kstr ] = tmp_m [ b_kstr ] ; } for (
b_kstr = 0 ; b_kstr < 16 ; b_kstr ++ ) { iobj_1 -> ChildToJointTransform [
b_kstr ] = tmp_m [ b_kstr ] ; } b_kstr = iobj_1 -> NameInternal -> size [ 0 ]
* iobj_1 -> NameInternal -> size [ 1 ] ; iobj_1 -> NameInternal -> size [ 0 ]
= 1 ; iobj_1 -> NameInternal -> size [ 1 ] = 6 ; gsven4ga0i ( iobj_1 ->
NameInternal , b_kstr ) ; for ( b_kstr = 0 ; b_kstr < 6 ; b_kstr ++ ) {
iobj_1 -> NameInternal -> data [ b_kstr ] = tmp_g [ b_kstr ] ; } b_kstr =
iobj_1 -> Type -> size [ 0 ] * iobj_1 -> Type -> size [ 1 ] ; iobj_1 -> Type
-> size [ 0 ] = 1 ; iobj_1 -> Type -> size [ 1 ] = 8 ; gsven4ga0i ( iobj_1 ->
Type , b_kstr ) ; for ( b_kstr = 0 ; b_kstr < 8 ; b_kstr ++ ) { iobj_1 ->
Type -> data [ b_kstr ] = tmp_j [ b_kstr ] ; } ek533x1it4 ( &
switch_expression , 2 ) ; b_kstr = switch_expression -> size [ 0 ] *
switch_expression -> size [ 1 ] ; switch_expression -> size [ 0 ] = 1 ;
switch_expression -> size [ 1 ] = iobj_1 -> Type -> size [ 1 ] ; gsven4ga0i (
switch_expression , b_kstr ) ; loop_ub = iobj_1 -> Type -> size [ 1 ] ; for (
b_kstr = 0 ; b_kstr < loop_ub ; b_kstr ++ ) { switch_expression -> data [
b_kstr ] = iobj_1 -> Type -> data [ b_kstr ] ; } for ( b_kstr = 0 ; b_kstr <
8 ; b_kstr ++ ) { b [ b_kstr ] = tmp_j [ b_kstr ] ; } b_bool = false ; if (
switch_expression -> size [ 1 ] != 8 ) { } else { b_kstr = 1 ; do { exitg1 =
0 ; if ( b_kstr - 1 < 8 ) { if ( switch_expression -> data [ b_kstr - 1 ] !=
b [ b_kstr - 1 ] ) { exitg1 = 1 ; } else { b_kstr ++ ; } } else { b_bool =
true ; exitg1 = 1 ; } } while ( exitg1 == 0 ) ; } if ( b_bool ) { b_kstr = 0
; } else { for ( b_kstr = 0 ; b_kstr < 9 ; b_kstr ++ ) { b_p [ b_kstr ] =
tmp_f [ b_kstr ] ; } if ( switch_expression -> size [ 1 ] != 9 ) { } else {
b_kstr = 1 ; do { exitg1 = 0 ; if ( b_kstr - 1 < 9 ) { if ( switch_expression
-> data [ b_kstr - 1 ] != b_p [ b_kstr - 1 ] ) { exitg1 = 1 ; } else { b_kstr
++ ; } } else { b_bool = true ; exitg1 = 1 ; } } while ( exitg1 == 0 ) ; } if
( b_bool ) { b_kstr = 1 ; } else { b_kstr = - 1 ; } } dqu5smbks1 ( &
switch_expression ) ; switch ( b_kstr ) { case 0 : tmp [ 0 ] = 0 ; tmp [ 1 ]
= 0 ; tmp [ 2 ] = 1 ; tmp [ 3 ] = 0 ; tmp [ 4 ] = 0 ; tmp [ 5 ] = 0 ; for (
b_kstr = 0 ; b_kstr < 6 ; b_kstr ++ ) { msubspace_data [ b_kstr ] = tmp [
b_kstr ] ; } poslim_data [ 0 ] = - 3.1415926535897931 ; poslim_data [ 1 ] =
3.1415926535897931 ; iobj_1 -> VelocityNumber = 1.0 ; iobj_1 ->
PositionNumber = 1.0 ; iobj_1 -> JointAxisInternal [ 0 ] = 0.0 ; iobj_1 ->
JointAxisInternal [ 1 ] = 0.0 ; iobj_1 -> JointAxisInternal [ 2 ] = 1.0 ;
break ; case 1 : tmp [ 0 ] = 0 ; tmp [ 1 ] = 0 ; tmp [ 2 ] = 0 ; tmp [ 3 ] =
0 ; tmp [ 4 ] = 0 ; tmp [ 5 ] = 1 ; for ( b_kstr = 0 ; b_kstr < 6 ; b_kstr ++
) { msubspace_data [ b_kstr ] = tmp [ b_kstr ] ; } poslim_data [ 0 ] = - 0.5
; poslim_data [ 1 ] = 0.5 ; iobj_1 -> VelocityNumber = 1.0 ; iobj_1 ->
PositionNumber = 1.0 ; iobj_1 -> JointAxisInternal [ 0 ] = 0.0 ; iobj_1 ->
JointAxisInternal [ 1 ] = 0.0 ; iobj_1 -> JointAxisInternal [ 2 ] = 1.0 ;
break ; default : for ( b_kstr = 0 ; b_kstr < 6 ; b_kstr ++ ) {
msubspace_data [ b_kstr ] = 0 ; } poslim_data [ 0 ] = 0.0 ; poslim_data [ 1 ]
= 0.0 ; iobj_1 -> VelocityNumber = 0.0 ; iobj_1 -> PositionNumber = 0.0 ;
iobj_1 -> JointAxisInternal [ 0 ] = 0.0 ; iobj_1 -> JointAxisInternal [ 1 ] =
0.0 ; iobj_1 -> JointAxisInternal [ 2 ] = 0.0 ; break ; } b_kstr = iobj_1 ->
MotionSubspace -> size [ 0 ] * iobj_1 -> MotionSubspace -> size [ 1 ] ;
iobj_1 -> MotionSubspace -> size [ 0 ] = 6 ; iobj_1 -> MotionSubspace -> size
[ 1 ] = 1 ; o4pyrzarz5 ( iobj_1 -> MotionSubspace , b_kstr ) ; for ( b_kstr =
0 ; b_kstr < 6 ; b_kstr ++ ) { iobj_1 -> MotionSubspace -> data [ b_kstr ] =
msubspace_data [ b_kstr ] ; } b_kstr = iobj_1 -> PositionLimitsInternal ->
size [ 0 ] * iobj_1 -> PositionLimitsInternal -> size [ 1 ] ; iobj_1 ->
PositionLimitsInternal -> size [ 0 ] = 1 ; iobj_1 -> PositionLimitsInternal
-> size [ 1 ] = 2 ; o4pyrzarz5 ( iobj_1 -> PositionLimitsInternal , b_kstr )
; for ( b_kstr = 0 ; b_kstr < 2 ; b_kstr ++ ) { iobj_1 ->
PositionLimitsInternal -> data [ b_kstr ] = poslim_data [ b_kstr ] ; } b_kstr
= iobj_1 -> HomePositionInternal -> size [ 0 ] ; iobj_1 ->
HomePositionInternal -> size [ 0 ] = 1 ; o4pyrzarz5 ( iobj_1 ->
HomePositionInternal , b_kstr ) ; iobj_1 -> HomePositionInternal -> data [ 0
] = 0.0 ; obj -> JointInternal = iobj_1 ; for ( b_kstr = 0 ; b_kstr < 16 ;
b_kstr ++ ) { obj -> JointInternal -> JointToParentTransform [ b_kstr ] =
tmp_c [ b_kstr ] ; } for ( b_kstr = 0 ; b_kstr < 16 ; b_kstr ++ ) { obj ->
JointInternal -> ChildToJointTransform [ b_kstr ] = tmp_k [ b_kstr ] ; }
b_kstr = obj -> JointInternal -> MotionSubspace -> size [ 0 ] * obj ->
JointInternal -> MotionSubspace -> size [ 1 ] ; obj -> JointInternal ->
MotionSubspace -> size [ 0 ] = 6 ; obj -> JointInternal -> MotionSubspace ->
size [ 1 ] = 1 ; o4pyrzarz5 ( obj -> JointInternal -> MotionSubspace , b_kstr
) ; for ( b_kstr = 0 ; b_kstr < 6 ; b_kstr ++ ) { obj -> JointInternal ->
MotionSubspace -> data [ b_kstr ] = tmp_b [ b_kstr ] ; } obj -> JointInternal
-> InTree = true ; b_kstr = obj -> JointInternal -> PositionLimitsInternal ->
size [ 0 ] * obj -> JointInternal -> PositionLimitsInternal -> size [ 1 ] ;
obj -> JointInternal -> PositionLimitsInternal -> size [ 0 ] = 1 ; obj ->
JointInternal -> PositionLimitsInternal -> size [ 1 ] = 2 ; o4pyrzarz5 ( obj
-> JointInternal -> PositionLimitsInternal , b_kstr ) ; obj -> JointInternal
-> PositionLimitsInternal -> data [ 0 ] = - 3.1415926535897931 ; obj ->
JointInternal -> PositionLimitsInternal -> data [ obj -> JointInternal ->
PositionLimitsInternal -> size [ 0 ] ] = 3.1415926535897931 ; obj ->
JointInternal -> JointAxisInternal [ 0 ] = 0.0 ; obj -> JointInternal ->
JointAxisInternal [ 1 ] = 0.0 ; obj -> JointInternal -> JointAxisInternal [ 2
] = 1.0 ; b_kstr = obj -> JointInternal -> HomePositionInternal -> size [ 0 ]
; obj -> JointInternal -> HomePositionInternal -> size [ 0 ] = 1 ; o4pyrzarz5
( obj -> JointInternal -> HomePositionInternal , b_kstr ) ; obj ->
JointInternal -> HomePositionInternal -> data [ 0 ] = 0.0 ; obj ->
CollisionsInternal = oosvd5bnheg ( iobj_0 , 0.0 ) ; obj ->
matlabCodegenIsDeleted = false ; return b_obj ; } static cwp5dxx3gqu *
othv5snbeo ( cwp5dxx3gqu * obj , ejmcoi31fmi * iobj_0 , orkdduvnogx * iobj_1
) { cwp5dxx3gqu * b_obj ; lg5jhfa1j5 * switch_expression ; real_T poslim_data
[ 12 ] ; int32_T b_kstr ; int32_T loop_ub ; char_T b_p [ 9 ] ; char_T b [ 8 ]
; int8_T msubspace_data [ 36 ] ; int8_T tmp [ 6 ] ; boolean_T b_bool ; static
const char_T tmp_p [ 5 ] = { 'B' , 'o' , 'd' , 'y' , '6' } ; static const
real_T tmp_e [ 9 ] = { 0.84173164146062152 , - 0.31951386306103857 ,
0.00095068857110633918 , - 0.31951386306103857 , 0.79424720923418346 ,
0.0010466045877502465 , 0.00095068857110633918 , 0.0010466045877502465 ,
0.83025529180417679 } ; static const real_T tmp_i [ 36 ] = {
0.84173164146062152 , - 0.31951386306103857 , 0.00095068857110633918 , 0.0 ,
1.8735312962809951 , 0.014586502985558464 , - 0.31951386306103857 ,
0.79424720923418346 , 0.0010466045877502465 , - 1.8735312962809951 , 0.0 , -
0.013233852298345365 , 0.00095068857110633918 , 0.0010466045877502465 ,
0.83025529180417679 , - 0.014586502985558464 , 0.013233852298345365 , 0.0 ,
0.0 , - 1.8735312962809951 , - 0.014586502985558464 , 11.401316724146994 ,
0.0 , 0.0 , 1.8735312962809951 , 0.0 , 0.013233852298345365 , 0.0 ,
11.401316724146994 , 0.0 , 0.014586502985558464 , - 0.013233852298345365 ,
0.0 , 0.0 , 0.0 , 11.401316724146994 } ; static const int8_T tmp_m [ 16 ] = {
1 , 0 , 0 , 0 , 0 , 1 , 0 , 0 , 0 , 0 , 1 , 0 , 0 , 0 , 0 , 1 } ; static
const char_T tmp_g [ 6 ] = { 'J' , 'o' , 'i' , 'n' , 't' , '6' } ; static
const char_T tmp_j [ 8 ] = { 'r' , 'e' , 'v' , 'o' , 'l' , 'u' , 't' , 'e' }
; static const char_T tmp_f [ 9 ] = { 'p' , 'r' , 'i' , 's' , 'm' , 'a' , 't'
, 'i' , 'c' } ; static const real_T tmp_c [ 16 ] = { - 0.72988089845754411 ,
0.065019410197615327 , 0.68047509165608888 , 0.0 , 0.67779105252954108 , -
0.060379131123754384 , 0.7327712123409581 , 0.0 , 0.0887308468217524 ,
0.99605563942095865 , 4.4869295985033991E-17 , 0.0 , - 0.015990185507606339 ,
- 0.17949918231066653 , 0.11660998821191004 , 1.0 } ; static const real_T
tmp_k [ 16 ] = { 1.0 , 0.0 , 0.0 , 0.0 , 0.0 , 1.0 , 0.0 , 0.0 , 0.0 , 0.0 ,
1.0 , 0.0 , 0.0 , 0.0 , 0.0 , 1.0 } ; static const real_T tmp_b [ 36 ] = {
0.0 , 0.0 , 1.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 ,
0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 ,
0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 } ; int32_T exitg1
; b_obj = obj ; b_kstr = obj -> NameInternal -> size [ 0 ] * obj ->
NameInternal -> size [ 1 ] ; obj -> NameInternal -> size [ 0 ] = 1 ; obj ->
NameInternal -> size [ 1 ] = 5 ; gsven4ga0i ( obj -> NameInternal , b_kstr )
; for ( b_kstr = 0 ; b_kstr < 5 ; b_kstr ++ ) { obj -> NameInternal -> data [
b_kstr ] = tmp_p [ b_kstr ] ; } obj -> ParentIndex = 5.0 ; obj ->
MassInternal = 11.401316724146994 ; obj -> CenterOfMassInternal [ 0 ] =
0.0011607301699037287 ; obj -> CenterOfMassInternal [ 1 ] =
0.0012793700358017003 ; obj -> CenterOfMassInternal [ 2 ] = -
0.16432587056484618 ; for ( b_kstr = 0 ; b_kstr < 9 ; b_kstr ++ ) { obj ->
InertiaInternal [ b_kstr ] = tmp_e [ b_kstr ] ; } for ( b_kstr = 0 ; b_kstr <
36 ; b_kstr ++ ) { obj -> SpatialInertia [ b_kstr ] = tmp_i [ b_kstr ] ; }
iobj_1 -> InTree = false ; for ( b_kstr = 0 ; b_kstr < 16 ; b_kstr ++ ) {
iobj_1 -> JointToParentTransform [ b_kstr ] = tmp_m [ b_kstr ] ; } for (
b_kstr = 0 ; b_kstr < 16 ; b_kstr ++ ) { iobj_1 -> ChildToJointTransform [
b_kstr ] = tmp_m [ b_kstr ] ; } b_kstr = iobj_1 -> NameInternal -> size [ 0 ]
* iobj_1 -> NameInternal -> size [ 1 ] ; iobj_1 -> NameInternal -> size [ 0 ]
= 1 ; iobj_1 -> NameInternal -> size [ 1 ] = 6 ; gsven4ga0i ( iobj_1 ->
NameInternal , b_kstr ) ; for ( b_kstr = 0 ; b_kstr < 6 ; b_kstr ++ ) {
iobj_1 -> NameInternal -> data [ b_kstr ] = tmp_g [ b_kstr ] ; } b_kstr =
iobj_1 -> Type -> size [ 0 ] * iobj_1 -> Type -> size [ 1 ] ; iobj_1 -> Type
-> size [ 0 ] = 1 ; iobj_1 -> Type -> size [ 1 ] = 8 ; gsven4ga0i ( iobj_1 ->
Type , b_kstr ) ; for ( b_kstr = 0 ; b_kstr < 8 ; b_kstr ++ ) { iobj_1 ->
Type -> data [ b_kstr ] = tmp_j [ b_kstr ] ; } ek533x1it4 ( &
switch_expression , 2 ) ; b_kstr = switch_expression -> size [ 0 ] *
switch_expression -> size [ 1 ] ; switch_expression -> size [ 0 ] = 1 ;
switch_expression -> size [ 1 ] = iobj_1 -> Type -> size [ 1 ] ; gsven4ga0i (
switch_expression , b_kstr ) ; loop_ub = iobj_1 -> Type -> size [ 1 ] ; for (
b_kstr = 0 ; b_kstr < loop_ub ; b_kstr ++ ) { switch_expression -> data [
b_kstr ] = iobj_1 -> Type -> data [ b_kstr ] ; } for ( b_kstr = 0 ; b_kstr <
8 ; b_kstr ++ ) { b [ b_kstr ] = tmp_j [ b_kstr ] ; } b_bool = false ; if (
switch_expression -> size [ 1 ] != 8 ) { } else { b_kstr = 1 ; do { exitg1 =
0 ; if ( b_kstr - 1 < 8 ) { if ( switch_expression -> data [ b_kstr - 1 ] !=
b [ b_kstr - 1 ] ) { exitg1 = 1 ; } else { b_kstr ++ ; } } else { b_bool =
true ; exitg1 = 1 ; } } while ( exitg1 == 0 ) ; } if ( b_bool ) { b_kstr = 0
; } else { for ( b_kstr = 0 ; b_kstr < 9 ; b_kstr ++ ) { b_p [ b_kstr ] =
tmp_f [ b_kstr ] ; } if ( switch_expression -> size [ 1 ] != 9 ) { } else {
b_kstr = 1 ; do { exitg1 = 0 ; if ( b_kstr - 1 < 9 ) { if ( switch_expression
-> data [ b_kstr - 1 ] != b_p [ b_kstr - 1 ] ) { exitg1 = 1 ; } else { b_kstr
++ ; } } else { b_bool = true ; exitg1 = 1 ; } } while ( exitg1 == 0 ) ; } if
( b_bool ) { b_kstr = 1 ; } else { b_kstr = - 1 ; } } dqu5smbks1 ( &
switch_expression ) ; switch ( b_kstr ) { case 0 : tmp [ 0 ] = 0 ; tmp [ 1 ]
= 0 ; tmp [ 2 ] = 1 ; tmp [ 3 ] = 0 ; tmp [ 4 ] = 0 ; tmp [ 5 ] = 0 ; for (
b_kstr = 0 ; b_kstr < 6 ; b_kstr ++ ) { msubspace_data [ b_kstr ] = tmp [
b_kstr ] ; } poslim_data [ 0 ] = - 3.1415926535897931 ; poslim_data [ 1 ] =
3.1415926535897931 ; iobj_1 -> VelocityNumber = 1.0 ; iobj_1 ->
PositionNumber = 1.0 ; iobj_1 -> JointAxisInternal [ 0 ] = 0.0 ; iobj_1 ->
JointAxisInternal [ 1 ] = 0.0 ; iobj_1 -> JointAxisInternal [ 2 ] = 1.0 ;
break ; case 1 : tmp [ 0 ] = 0 ; tmp [ 1 ] = 0 ; tmp [ 2 ] = 0 ; tmp [ 3 ] =
0 ; tmp [ 4 ] = 0 ; tmp [ 5 ] = 1 ; for ( b_kstr = 0 ; b_kstr < 6 ; b_kstr ++
) { msubspace_data [ b_kstr ] = tmp [ b_kstr ] ; } poslim_data [ 0 ] = - 0.5
; poslim_data [ 1 ] = 0.5 ; iobj_1 -> VelocityNumber = 1.0 ; iobj_1 ->
PositionNumber = 1.0 ; iobj_1 -> JointAxisInternal [ 0 ] = 0.0 ; iobj_1 ->
JointAxisInternal [ 1 ] = 0.0 ; iobj_1 -> JointAxisInternal [ 2 ] = 1.0 ;
break ; default : for ( b_kstr = 0 ; b_kstr < 6 ; b_kstr ++ ) {
msubspace_data [ b_kstr ] = 0 ; } poslim_data [ 0 ] = 0.0 ; poslim_data [ 1 ]
= 0.0 ; iobj_1 -> VelocityNumber = 0.0 ; iobj_1 -> PositionNumber = 0.0 ;
iobj_1 -> JointAxisInternal [ 0 ] = 0.0 ; iobj_1 -> JointAxisInternal [ 1 ] =
0.0 ; iobj_1 -> JointAxisInternal [ 2 ] = 0.0 ; break ; } b_kstr = iobj_1 ->
MotionSubspace -> size [ 0 ] * iobj_1 -> MotionSubspace -> size [ 1 ] ;
iobj_1 -> MotionSubspace -> size [ 0 ] = 6 ; iobj_1 -> MotionSubspace -> size
[ 1 ] = 1 ; o4pyrzarz5 ( iobj_1 -> MotionSubspace , b_kstr ) ; for ( b_kstr =
0 ; b_kstr < 6 ; b_kstr ++ ) { iobj_1 -> MotionSubspace -> data [ b_kstr ] =
msubspace_data [ b_kstr ] ; } b_kstr = iobj_1 -> PositionLimitsInternal ->
size [ 0 ] * iobj_1 -> PositionLimitsInternal -> size [ 1 ] ; iobj_1 ->
PositionLimitsInternal -> size [ 0 ] = 1 ; iobj_1 -> PositionLimitsInternal
-> size [ 1 ] = 2 ; o4pyrzarz5 ( iobj_1 -> PositionLimitsInternal , b_kstr )
; for ( b_kstr = 0 ; b_kstr < 2 ; b_kstr ++ ) { iobj_1 ->
PositionLimitsInternal -> data [ b_kstr ] = poslim_data [ b_kstr ] ; } b_kstr
= iobj_1 -> HomePositionInternal -> size [ 0 ] ; iobj_1 ->
HomePositionInternal -> size [ 0 ] = 1 ; o4pyrzarz5 ( iobj_1 ->
HomePositionInternal , b_kstr ) ; iobj_1 -> HomePositionInternal -> data [ 0
] = 0.0 ; obj -> JointInternal = iobj_1 ; for ( b_kstr = 0 ; b_kstr < 16 ;
b_kstr ++ ) { obj -> JointInternal -> JointToParentTransform [ b_kstr ] =
tmp_c [ b_kstr ] ; } for ( b_kstr = 0 ; b_kstr < 16 ; b_kstr ++ ) { obj ->
JointInternal -> ChildToJointTransform [ b_kstr ] = tmp_k [ b_kstr ] ; }
b_kstr = obj -> JointInternal -> MotionSubspace -> size [ 0 ] * obj ->
JointInternal -> MotionSubspace -> size [ 1 ] ; obj -> JointInternal ->
MotionSubspace -> size [ 0 ] = 6 ; obj -> JointInternal -> MotionSubspace ->
size [ 1 ] = 1 ; o4pyrzarz5 ( obj -> JointInternal -> MotionSubspace , b_kstr
) ; for ( b_kstr = 0 ; b_kstr < 6 ; b_kstr ++ ) { obj -> JointInternal ->
MotionSubspace -> data [ b_kstr ] = tmp_b [ b_kstr ] ; } obj -> JointInternal
-> InTree = true ; b_kstr = obj -> JointInternal -> PositionLimitsInternal ->
size [ 0 ] * obj -> JointInternal -> PositionLimitsInternal -> size [ 1 ] ;
obj -> JointInternal -> PositionLimitsInternal -> size [ 0 ] = 1 ; obj ->
JointInternal -> PositionLimitsInternal -> size [ 1 ] = 2 ; o4pyrzarz5 ( obj
-> JointInternal -> PositionLimitsInternal , b_kstr ) ; obj -> JointInternal
-> PositionLimitsInternal -> data [ 0 ] = - 3.1415926535897931 ; obj ->
JointInternal -> PositionLimitsInternal -> data [ obj -> JointInternal ->
PositionLimitsInternal -> size [ 0 ] ] = 3.1415926535897931 ; obj ->
JointInternal -> JointAxisInternal [ 0 ] = 0.0 ; obj -> JointInternal ->
JointAxisInternal [ 1 ] = 0.0 ; obj -> JointInternal -> JointAxisInternal [ 2
] = 1.0 ; b_kstr = obj -> JointInternal -> HomePositionInternal -> size [ 0 ]
; obj -> JointInternal -> HomePositionInternal -> size [ 0 ] = 1 ; o4pyrzarz5
( obj -> JointInternal -> HomePositionInternal , b_kstr ) ; obj ->
JointInternal -> HomePositionInternal -> data [ 0 ] = 0.0 ; obj ->
CollisionsInternal = oosvd5bnheg ( iobj_0 , 0.0 ) ; obj ->
matlabCodegenIsDeleted = false ; return b_obj ; } static cwp5dxx3gqu *
k0veo1nxsu ( cwp5dxx3gqu * obj , ejmcoi31fmi * iobj_0 , orkdduvnogx * iobj_1
) { cwp5dxx3gqu * b_obj ; lg5jhfa1j5 * switch_expression ; real_T poslim_data
[ 12 ] ; int32_T b_kstr ; int32_T loop_ub ; char_T b_p [ 9 ] ; char_T b [ 8 ]
; int8_T msubspace_data [ 36 ] ; int8_T tmp [ 6 ] ; boolean_T b_bool ; static
const char_T tmp_p [ 5 ] = { 'B' , 'o' , 'd' , 'y' , '7' } ; static const
real_T tmp_e [ 36 ] = { 0.0 } ; static const int8_T tmp_i [ 16 ] = { 1 , 0 ,
0 , 0 , 0 , 1 , 0 , 0 , 0 , 0 , 1 , 0 , 0 , 0 , 0 , 1 } ; static const char_T
tmp_m [ 6 ] = { 'J' , 'o' , 'i' , 'n' , 't' , '7' } ; static const char_T
tmp_g [ 5 ] = { 'f' , 'i' , 'x' , 'e' , 'd' } ; static const char_T tmp_j [ 8
] = { 'r' , 'e' , 'v' , 'o' , 'l' , 'u' , 't' , 'e' } ; static const char_T
tmp_f [ 9 ] = { 'p' , 'r' , 'i' , 's' , 'm' , 'a' , 't' , 'i' , 'c' } ;
static const real_T tmp_c [ 16 ] = { - 0.68047509165608866 , -
0.73277121234095821 , - 0.0 , 0.0 , 0.73277121234095821 , -
0.68047509165608866 , 0.0 , 0.0 , - 0.0 , 0.0 , 1.0 , 0.0 ,
2.6645352591003757E-15 , 1.2975731600306517E-15 , - 0.30703499999999911 , 1.0
} ; static const real_T tmp_k [ 16 ] = { 1.0 , 0.0 , 0.0 , 0.0 , 0.0 , 1.0 ,
0.0 , 0.0 , 0.0 , 0.0 , 1.0 , 0.0 , 0.0 , 0.0 , 0.0 , 1.0 } ; int32_T exitg1
; b_obj = obj ; b_kstr = obj -> NameInternal -> size [ 0 ] * obj ->
NameInternal -> size [ 1 ] ; obj -> NameInternal -> size [ 0 ] = 1 ; obj ->
NameInternal -> size [ 1 ] = 5 ; gsven4ga0i ( obj -> NameInternal , b_kstr )
; for ( b_kstr = 0 ; b_kstr < 5 ; b_kstr ++ ) { obj -> NameInternal -> data [
b_kstr ] = tmp_p [ b_kstr ] ; } obj -> ParentIndex = 6.0 ; obj ->
MassInternal = 0.0 ; obj -> CenterOfMassInternal [ 0 ] = - 0.0 ; obj ->
CenterOfMassInternal [ 1 ] = - 0.0 ; obj -> CenterOfMassInternal [ 2 ] = -
0.0 ; for ( b_kstr = 0 ; b_kstr < 9 ; b_kstr ++ ) { obj -> InertiaInternal [
b_kstr ] = 0.0 ; } for ( b_kstr = 0 ; b_kstr < 36 ; b_kstr ++ ) { obj ->
SpatialInertia [ b_kstr ] = tmp_e [ b_kstr ] ; } iobj_1 -> InTree = false ;
for ( b_kstr = 0 ; b_kstr < 16 ; b_kstr ++ ) { iobj_1 ->
JointToParentTransform [ b_kstr ] = tmp_i [ b_kstr ] ; } for ( b_kstr = 0 ;
b_kstr < 16 ; b_kstr ++ ) { iobj_1 -> ChildToJointTransform [ b_kstr ] =
tmp_i [ b_kstr ] ; } b_kstr = iobj_1 -> NameInternal -> size [ 0 ] * iobj_1
-> NameInternal -> size [ 1 ] ; iobj_1 -> NameInternal -> size [ 0 ] = 1 ;
iobj_1 -> NameInternal -> size [ 1 ] = 6 ; gsven4ga0i ( iobj_1 ->
NameInternal , b_kstr ) ; for ( b_kstr = 0 ; b_kstr < 6 ; b_kstr ++ ) {
iobj_1 -> NameInternal -> data [ b_kstr ] = tmp_m [ b_kstr ] ; } b_kstr =
iobj_1 -> Type -> size [ 0 ] * iobj_1 -> Type -> size [ 1 ] ; iobj_1 -> Type
-> size [ 0 ] = 1 ; iobj_1 -> Type -> size [ 1 ] = 5 ; gsven4ga0i ( iobj_1 ->
Type , b_kstr ) ; for ( b_kstr = 0 ; b_kstr < 5 ; b_kstr ++ ) { iobj_1 ->
Type -> data [ b_kstr ] = tmp_g [ b_kstr ] ; } ek533x1it4 ( &
switch_expression , 2 ) ; b_kstr = switch_expression -> size [ 0 ] *
switch_expression -> size [ 1 ] ; switch_expression -> size [ 0 ] = 1 ;
switch_expression -> size [ 1 ] = iobj_1 -> Type -> size [ 1 ] ; gsven4ga0i (
switch_expression , b_kstr ) ; loop_ub = iobj_1 -> Type -> size [ 1 ] ; for (
b_kstr = 0 ; b_kstr < loop_ub ; b_kstr ++ ) { switch_expression -> data [
b_kstr ] = iobj_1 -> Type -> data [ b_kstr ] ; } for ( b_kstr = 0 ; b_kstr <
8 ; b_kstr ++ ) { b [ b_kstr ] = tmp_j [ b_kstr ] ; } b_bool = false ; if (
switch_expression -> size [ 1 ] != 8 ) { } else { b_kstr = 1 ; do { exitg1 =
0 ; if ( b_kstr - 1 < 8 ) { if ( switch_expression -> data [ b_kstr - 1 ] !=
b [ b_kstr - 1 ] ) { exitg1 = 1 ; } else { b_kstr ++ ; } } else { b_bool =
true ; exitg1 = 1 ; } } while ( exitg1 == 0 ) ; } if ( b_bool ) { b_kstr = 0
; } else { for ( b_kstr = 0 ; b_kstr < 9 ; b_kstr ++ ) { b_p [ b_kstr ] =
tmp_f [ b_kstr ] ; } if ( switch_expression -> size [ 1 ] != 9 ) { } else {
b_kstr = 1 ; do { exitg1 = 0 ; if ( b_kstr - 1 < 9 ) { if ( switch_expression
-> data [ b_kstr - 1 ] != b_p [ b_kstr - 1 ] ) { exitg1 = 1 ; } else { b_kstr
++ ; } } else { b_bool = true ; exitg1 = 1 ; } } while ( exitg1 == 0 ) ; } if
( b_bool ) { b_kstr = 1 ; } else { b_kstr = - 1 ; } } dqu5smbks1 ( &
switch_expression ) ; switch ( b_kstr ) { case 0 : tmp [ 0 ] = 0 ; tmp [ 1 ]
= 0 ; tmp [ 2 ] = 1 ; tmp [ 3 ] = 0 ; tmp [ 4 ] = 0 ; tmp [ 5 ] = 0 ; for (
b_kstr = 0 ; b_kstr < 6 ; b_kstr ++ ) { msubspace_data [ b_kstr ] = tmp [
b_kstr ] ; } poslim_data [ 0 ] = - 3.1415926535897931 ; poslim_data [ 1 ] =
3.1415926535897931 ; iobj_1 -> VelocityNumber = 1.0 ; iobj_1 ->
PositionNumber = 1.0 ; iobj_1 -> JointAxisInternal [ 0 ] = 0.0 ; iobj_1 ->
JointAxisInternal [ 1 ] = 0.0 ; iobj_1 -> JointAxisInternal [ 2 ] = 1.0 ;
break ; case 1 : tmp [ 0 ] = 0 ; tmp [ 1 ] = 0 ; tmp [ 2 ] = 0 ; tmp [ 3 ] =
0 ; tmp [ 4 ] = 0 ; tmp [ 5 ] = 1 ; for ( b_kstr = 0 ; b_kstr < 6 ; b_kstr ++
) { msubspace_data [ b_kstr ] = tmp [ b_kstr ] ; } poslim_data [ 0 ] = - 0.5
; poslim_data [ 1 ] = 0.5 ; iobj_1 -> VelocityNumber = 1.0 ; iobj_1 ->
PositionNumber = 1.0 ; iobj_1 -> JointAxisInternal [ 0 ] = 0.0 ; iobj_1 ->
JointAxisInternal [ 1 ] = 0.0 ; iobj_1 -> JointAxisInternal [ 2 ] = 1.0 ;
break ; default : for ( b_kstr = 0 ; b_kstr < 6 ; b_kstr ++ ) {
msubspace_data [ b_kstr ] = 0 ; } poslim_data [ 0 ] = 0.0 ; poslim_data [ 1 ]
= 0.0 ; iobj_1 -> VelocityNumber = 0.0 ; iobj_1 -> PositionNumber = 0.0 ;
iobj_1 -> JointAxisInternal [ 0 ] = 0.0 ; iobj_1 -> JointAxisInternal [ 1 ] =
0.0 ; iobj_1 -> JointAxisInternal [ 2 ] = 0.0 ; break ; } b_kstr = iobj_1 ->
MotionSubspace -> size [ 0 ] * iobj_1 -> MotionSubspace -> size [ 1 ] ;
iobj_1 -> MotionSubspace -> size [ 0 ] = 6 ; iobj_1 -> MotionSubspace -> size
[ 1 ] = 1 ; o4pyrzarz5 ( iobj_1 -> MotionSubspace , b_kstr ) ; for ( b_kstr =
0 ; b_kstr < 6 ; b_kstr ++ ) { iobj_1 -> MotionSubspace -> data [ b_kstr ] =
msubspace_data [ b_kstr ] ; } b_kstr = iobj_1 -> PositionLimitsInternal ->
size [ 0 ] * iobj_1 -> PositionLimitsInternal -> size [ 1 ] ; iobj_1 ->
PositionLimitsInternal -> size [ 0 ] = 1 ; iobj_1 -> PositionLimitsInternal
-> size [ 1 ] = 2 ; o4pyrzarz5 ( iobj_1 -> PositionLimitsInternal , b_kstr )
; for ( b_kstr = 0 ; b_kstr < 2 ; b_kstr ++ ) { iobj_1 ->
PositionLimitsInternal -> data [ b_kstr ] = poslim_data [ b_kstr ] ; } b_kstr
= iobj_1 -> HomePositionInternal -> size [ 0 ] ; iobj_1 ->
HomePositionInternal -> size [ 0 ] = 1 ; o4pyrzarz5 ( iobj_1 ->
HomePositionInternal , b_kstr ) ; iobj_1 -> HomePositionInternal -> data [ 0
] = 0.0 ; obj -> JointInternal = iobj_1 ; for ( b_kstr = 0 ; b_kstr < 16 ;
b_kstr ++ ) { obj -> JointInternal -> JointToParentTransform [ b_kstr ] =
tmp_c [ b_kstr ] ; } for ( b_kstr = 0 ; b_kstr < 16 ; b_kstr ++ ) { obj ->
JointInternal -> ChildToJointTransform [ b_kstr ] = tmp_k [ b_kstr ] ; }
b_kstr = obj -> JointInternal -> MotionSubspace -> size [ 0 ] * obj ->
JointInternal -> MotionSubspace -> size [ 1 ] ; obj -> JointInternal ->
MotionSubspace -> size [ 0 ] = 6 ; obj -> JointInternal -> MotionSubspace ->
size [ 1 ] = 1 ; o4pyrzarz5 ( obj -> JointInternal -> MotionSubspace , b_kstr
) ; for ( b_kstr = 0 ; b_kstr < 6 ; b_kstr ++ ) { obj -> JointInternal ->
MotionSubspace -> data [ b_kstr ] = 0.0 ; } obj -> JointInternal -> InTree =
true ; b_kstr = obj -> JointInternal -> PositionLimitsInternal -> size [ 0 ]
* obj -> JointInternal -> PositionLimitsInternal -> size [ 1 ] ; obj ->
JointInternal -> PositionLimitsInternal -> size [ 0 ] = 1 ; obj ->
JointInternal -> PositionLimitsInternal -> size [ 1 ] = 2 ; o4pyrzarz5 ( obj
-> JointInternal -> PositionLimitsInternal , b_kstr ) ; obj -> JointInternal
-> PositionLimitsInternal -> data [ 0 ] = 0.0 ; obj -> JointInternal ->
PositionLimitsInternal -> data [ obj -> JointInternal ->
PositionLimitsInternal -> size [ 0 ] ] = 0.0 ; obj -> JointInternal ->
JointAxisInternal [ 0 ] = 0.0 ; obj -> JointInternal -> JointAxisInternal [ 1
] = 0.0 ; obj -> JointInternal -> JointAxisInternal [ 2 ] = 0.0 ; b_kstr =
obj -> JointInternal -> HomePositionInternal -> size [ 0 ] ; obj ->
JointInternal -> HomePositionInternal -> size [ 0 ] = 1 ; o4pyrzarz5 ( obj ->
JointInternal -> HomePositionInternal , b_kstr ) ; obj -> JointInternal ->
HomePositionInternal -> data [ 0 ] = 0.0 ; obj -> CollisionsInternal =
oosvd5bnheg ( iobj_0 , 0.0 ) ; obj -> matlabCodegenIsDeleted = false ; return
b_obj ; } static orkdduvnogx * jgx2lfyryv ( orkdduvnogx * obj , const
lg5jhfa1j5 * jname ) { lg5jhfa1j5 * switch_expression ; orkdduvnogx * b_obj ;
real_T poslim_data [ 12 ] ; int32_T b_kstr ; int32_T loop_ub ; char_T b_p [ 9
] ; char_T b [ 8 ] ; int8_T msubspace_data [ 36 ] ; int8_T tmp [ 6 ] ;
boolean_T b_bool ; static const int8_T tmp_p [ 16 ] = { 1 , 0 , 0 , 0 , 0 , 1
, 0 , 0 , 0 , 0 , 1 , 0 , 0 , 0 , 0 , 1 } ; static const char_T tmp_e [ 5 ] =
{ 'f' , 'i' , 'x' , 'e' , 'd' } ; static const char_T tmp_i [ 8 ] = { 'r' ,
'e' , 'v' , 'o' , 'l' , 'u' , 't' , 'e' } ; static const char_T tmp_m [ 9 ] =
{ 'p' , 'r' , 'i' , 's' , 'm' , 'a' , 't' , 'i' , 'c' } ; int32_T exitg1 ;
obj -> InTree = false ; for ( b_kstr = 0 ; b_kstr < 16 ; b_kstr ++ ) { obj ->
JointToParentTransform [ b_kstr ] = tmp_p [ b_kstr ] ; } for ( b_kstr = 0 ;
b_kstr < 16 ; b_kstr ++ ) { obj -> ChildToJointTransform [ b_kstr ] = tmp_p [
b_kstr ] ; } b_obj = obj ; b_kstr = obj -> NameInternal -> size [ 0 ] * obj
-> NameInternal -> size [ 1 ] ; obj -> NameInternal -> size [ 0 ] = 1 ; obj
-> NameInternal -> size [ 1 ] = jname -> size [ 1 ] ; gsven4ga0i ( obj ->
NameInternal , b_kstr ) ; loop_ub = jname -> size [ 1 ] - 1 ; for ( b_kstr =
0 ; b_kstr <= loop_ub ; b_kstr ++ ) { obj -> NameInternal -> data [ b_kstr ]
= jname -> data [ b_kstr ] ; } b_kstr = obj -> Type -> size [ 0 ] * obj ->
Type -> size [ 1 ] ; obj -> Type -> size [ 0 ] = 1 ; obj -> Type -> size [ 1
] = 5 ; gsven4ga0i ( obj -> Type , b_kstr ) ; for ( b_kstr = 0 ; b_kstr < 5 ;
b_kstr ++ ) { obj -> Type -> data [ b_kstr ] = tmp_e [ b_kstr ] ; }
ek533x1it4 ( & switch_expression , 2 ) ; b_kstr = switch_expression -> size [
0 ] * switch_expression -> size [ 1 ] ; switch_expression -> size [ 0 ] = 1 ;
switch_expression -> size [ 1 ] = obj -> Type -> size [ 1 ] ; gsven4ga0i (
switch_expression , b_kstr ) ; loop_ub = obj -> Type -> size [ 1 ] ; for (
b_kstr = 0 ; b_kstr < loop_ub ; b_kstr ++ ) { switch_expression -> data [
b_kstr ] = obj -> Type -> data [ b_kstr ] ; } for ( b_kstr = 0 ; b_kstr < 8 ;
b_kstr ++ ) { b [ b_kstr ] = tmp_i [ b_kstr ] ; } b_bool = false ; if (
switch_expression -> size [ 1 ] != 8 ) { } else { b_kstr = 1 ; do { exitg1 =
0 ; if ( b_kstr - 1 < 8 ) { if ( switch_expression -> data [ b_kstr - 1 ] !=
b [ b_kstr - 1 ] ) { exitg1 = 1 ; } else { b_kstr ++ ; } } else { b_bool =
true ; exitg1 = 1 ; } } while ( exitg1 == 0 ) ; } if ( b_bool ) { b_kstr = 0
; } else { for ( b_kstr = 0 ; b_kstr < 9 ; b_kstr ++ ) { b_p [ b_kstr ] =
tmp_m [ b_kstr ] ; } if ( switch_expression -> size [ 1 ] != 9 ) { } else {
b_kstr = 1 ; do { exitg1 = 0 ; if ( b_kstr - 1 < 9 ) { if ( switch_expression
-> data [ b_kstr - 1 ] != b_p [ b_kstr - 1 ] ) { exitg1 = 1 ; } else { b_kstr
++ ; } } else { b_bool = true ; exitg1 = 1 ; } } while ( exitg1 == 0 ) ; } if
( b_bool ) { b_kstr = 1 ; } else { b_kstr = - 1 ; } } dqu5smbks1 ( &
switch_expression ) ; switch ( b_kstr ) { case 0 : tmp [ 0 ] = 0 ; tmp [ 1 ]
= 0 ; tmp [ 2 ] = 1 ; tmp [ 3 ] = 0 ; tmp [ 4 ] = 0 ; tmp [ 5 ] = 0 ; for (
b_kstr = 0 ; b_kstr < 6 ; b_kstr ++ ) { msubspace_data [ b_kstr ] = tmp [
b_kstr ] ; } poslim_data [ 0 ] = - 3.1415926535897931 ; poslim_data [ 1 ] =
3.1415926535897931 ; obj -> VelocityNumber = 1.0 ; obj -> PositionNumber =
1.0 ; obj -> JointAxisInternal [ 0 ] = 0.0 ; obj -> JointAxisInternal [ 1 ] =
0.0 ; obj -> JointAxisInternal [ 2 ] = 1.0 ; break ; case 1 : tmp [ 0 ] = 0 ;
tmp [ 1 ] = 0 ; tmp [ 2 ] = 0 ; tmp [ 3 ] = 0 ; tmp [ 4 ] = 0 ; tmp [ 5 ] = 1
; for ( b_kstr = 0 ; b_kstr < 6 ; b_kstr ++ ) { msubspace_data [ b_kstr ] =
tmp [ b_kstr ] ; } poslim_data [ 0 ] = - 0.5 ; poslim_data [ 1 ] = 0.5 ; obj
-> VelocityNumber = 1.0 ; obj -> PositionNumber = 1.0 ; obj ->
JointAxisInternal [ 0 ] = 0.0 ; obj -> JointAxisInternal [ 1 ] = 0.0 ; obj ->
JointAxisInternal [ 2 ] = 1.0 ; break ; default : for ( b_kstr = 0 ; b_kstr <
6 ; b_kstr ++ ) { msubspace_data [ b_kstr ] = 0 ; } poslim_data [ 0 ] = 0.0 ;
poslim_data [ 1 ] = 0.0 ; obj -> VelocityNumber = 0.0 ; obj -> PositionNumber
= 0.0 ; obj -> JointAxisInternal [ 0 ] = 0.0 ; obj -> JointAxisInternal [ 1 ]
= 0.0 ; obj -> JointAxisInternal [ 2 ] = 0.0 ; break ; } b_kstr = obj ->
MotionSubspace -> size [ 0 ] * obj -> MotionSubspace -> size [ 1 ] ; obj ->
MotionSubspace -> size [ 0 ] = 6 ; obj -> MotionSubspace -> size [ 1 ] = 1 ;
o4pyrzarz5 ( obj -> MotionSubspace , b_kstr ) ; for ( b_kstr = 0 ; b_kstr < 6
; b_kstr ++ ) { obj -> MotionSubspace -> data [ b_kstr ] = msubspace_data [
b_kstr ] ; } b_kstr = obj -> PositionLimitsInternal -> size [ 0 ] * obj ->
PositionLimitsInternal -> size [ 1 ] ; obj -> PositionLimitsInternal -> size
[ 0 ] = 1 ; obj -> PositionLimitsInternal -> size [ 1 ] = 2 ; o4pyrzarz5 (
obj -> PositionLimitsInternal , b_kstr ) ; for ( b_kstr = 0 ; b_kstr < 2 ;
b_kstr ++ ) { obj -> PositionLimitsInternal -> data [ b_kstr ] = poslim_data
[ b_kstr ] ; } b_kstr = obj -> HomePositionInternal -> size [ 0 ] ; obj ->
HomePositionInternal -> size [ 0 ] = 1 ; o4pyrzarz5 ( obj ->
HomePositionInternal , b_kstr ) ; obj -> HomePositionInternal -> data [ 0 ] =
0.0 ; return b_obj ; } static fykx3ceulsm * lholsk5s1e ( fykx3ceulsm * obj )
{ fykx3ceulsm * b_obj ; lg5jhfa1j5 * jname ; real_T poslim_data [ 12 ] ;
int32_T b_kstr ; int32_T loop_ub ; char_T b_p [ 9 ] ; char_T b [ 8 ] ; int8_T
msubspace_data [ 36 ] ; int8_T tmp [ 6 ] ; boolean_T b_bool ; static const
char_T tmp_p [ 5 ] = { 'B' , 'o' , 'd' , 'y' , '1' } ; static const real_T
tmp_e [ 9 ] = { 3.7283131221130956 , 0.14734196970714092 , -
0.71270625187285419 , 0.14734196970714092 , 3.8707252237475256 ,
0.44799921633224543 , - 0.71270625187285419 , 0.44799921633224543 ,
0.9073753211438329 } ; static const real_T tmp_i [ 36 ] = {
3.7283131221130956 , 0.14734196970714092 , - 0.71270625187285419 , 0.0 ,
11.898111552581014 , 1.5387432848037215 , 0.14734196970714092 ,
3.8707252237475256 , 0.44799921633224543 , - 11.898111552581014 , 0.0 ,
2.4469388175205693 , - 0.71270625187285419 , 0.44799921633224543 ,
0.9073753211438329 , - 1.5387432848037215 , - 2.4469388175205693 , 0.0 , 0.0
, - 11.898111552581014 , - 1.5387432848037215 , 66.0277530923337 , 0.0 , 0.0
, 11.898111552581014 , 0.0 , - 2.4469388175205693 , 0.0 , 66.0277530923337 ,
0.0 , 1.5387432848037215 , 2.4469388175205693 , 0.0 , 0.0 , 0.0 ,
66.0277530923337 } ; static const int8_T tmp_m [ 16 ] = { 1 , 0 , 0 , 0 , 0 ,
1 , 0 , 0 , 0 , 0 , 1 , 0 , 0 , 0 , 0 , 1 } ; static const char_T tmp_g [ 6 ]
= { 'J' , 'o' , 'i' , 'n' , 't' , '1' } ; static const char_T tmp_j [ 8 ] = {
'r' , 'e' , 'v' , 'o' , 'l' , 'u' , 't' , 'e' } ; static const char_T tmp_f [
9 ] = { 'p' , 'r' , 'i' , 's' , 'm' , 'a' , 't' , 'i' , 'c' } ; static const
real_T tmp_c [ 16 ] = { 0.84692739772072112 , - 0.53170855079639956 , - 0.0 ,
0.0 , - 0.53170855079639956 , - 0.84692739772072112 , 1.2246467991473532E-16
, 0.0 , - 6.5115517481208857E-17 , - 1.0371869267288785E-16 , - 1.0 , 0.0 ,
0.0 , 0.0 , 0.129975000000001 , 1.0 } ; static const real_T tmp_k [ 16 ] = {
1.0 , 0.0 , 0.0 , 0.0 , 0.0 , 1.0 , 0.0 , 0.0 , 0.0 , 0.0 , 1.0 , 0.0 , 0.0 ,
0.0 , 0.0 , 1.0 } ; static const real_T tmp_b [ 36 ] = { 0.0 , 0.0 , 1.0 ,
0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 ,
0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 ,
0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 } ; static const char_T tmp_n [ 5 ] =
{ 'B' , 'o' , 'd' , 'y' , '2' } ; static const real_T tmp_l [ 9 ] = {
4.7024945426411984 , 0.45348088473271247 , 0.045893522033607428 ,
0.45348088473271247 , 0.30870459932230732 , - 0.44979498948729357 ,
0.045893522033607428 , - 0.44979498948729357 , 4.6998679939424681 } ; static
const real_T tmp_d [ 36 ] = { 4.7024945426411984 , 0.45348088473271247 ,
0.045893522033607428 , 0.0 , 1.4923137780005653 , - 7.6916829479703939 ,
0.45348088473271247 , 0.30870459932230732 , - 0.44979498948729357 , -
1.4923137780005653 , 0.0 , - 0.78512310105554284 , 0.045893522033607428 , -
0.44979498948729357 , 4.6998679939424681 , 7.6916829479703939 ,
0.78512310105554284 , 0.0 , 0.0 , - 1.4923137780005653 , 7.6916829479703939 ,
21.79104922806868 , 0.0 , 0.0 , 1.4923137780005653 , 0.0 ,
0.78512310105554284 , 0.0 , 21.79104922806868 , 0.0 , - 7.6916829479703939 ,
- 0.78512310105554284 , 0.0 , 0.0 , 0.0 , 21.79104922806868 } ; static const
char_T tmp_o [ 6 ] = { 'J' , 'o' , 'i' , 'n' , 't' , '2' } ; static const
real_T tmp_dz [ 16 ] = { 0.52921227710730678 , 0.84295122962804792 , -
0.096786312190625445 , 0.0 , 0.051462109791375082 , 0.081970979518861856 ,
0.99530518423875336 , 0.0 , 0.84692739772351189 , - 0.53170855079195445 ,
6.09448654026378E-17 , 0.0 , - 0.12855508881743644 , 0.080708027815108885 , -
0.28898998695028683 , 1.0 } ; int32_T exitg1 ; b_obj = obj ; obj -> NumBodies
= 7.0 ; obj -> Bodies [ 0 ] = o2vdpxadfa ( & ( & obj -> _pobj2 [ 0 ] ) [ 0 ]
, & ( & obj -> _pobj0 [ 0 ] ) [ 0 ] , & ( & obj -> _pobj1 [ 0 ] ) [ 0 ] ) ;
obj -> Bodies [ 1 ] = jwk1ippo5j ( & ( & obj -> _pobj2 [ 0 ] ) [ 1 ] , & ( &
obj -> _pobj0 [ 0 ] ) [ 1 ] , & ( & obj -> _pobj1 [ 0 ] ) [ 1 ] ) ; obj ->
Bodies [ 2 ] = eaasm1dykq ( & ( & obj -> _pobj2 [ 0 ] ) [ 2 ] , & ( & obj ->
_pobj0 [ 0 ] ) [ 2 ] , & ( & obj -> _pobj1 [ 0 ] ) [ 2 ] ) ; obj -> Bodies [
3 ] = h10rtdjox1 ( & ( & obj -> _pobj2 [ 0 ] ) [ 3 ] , & ( & obj -> _pobj0 [
0 ] ) [ 3 ] , & ( & obj -> _pobj1 [ 0 ] ) [ 3 ] ) ; obj -> Bodies [ 4 ] =
pyoyrn1dx4 ( & ( & obj -> _pobj2 [ 0 ] ) [ 4 ] , & ( & obj -> _pobj0 [ 0 ] )
[ 4 ] , & ( & obj -> _pobj1 [ 0 ] ) [ 4 ] ) ; obj -> Bodies [ 5 ] =
fx2h4p5emg ( & ( & obj -> _pobj2 [ 0 ] ) [ 5 ] , & ( & obj -> _pobj0 [ 0 ] )
[ 5 ] , & ( & obj -> _pobj1 [ 0 ] ) [ 5 ] ) ; obj -> Bodies [ 6 ] =
jq00jcy14q ( & ( & obj -> _pobj2 [ 0 ] ) [ 6 ] , & ( & obj -> _pobj0 [ 0 ] )
[ 6 ] , & ( & obj -> _pobj1 [ 0 ] ) [ 6 ] ) ; b_kstr = obj -> _pobj2 [ 7 ] .
NameInternal -> size [ 0 ] * obj -> _pobj2 [ 7 ] . NameInternal -> size [ 1 ]
; obj -> _pobj2 [ 7 ] . NameInternal -> size [ 0 ] = 1 ; obj -> _pobj2 [ 7 ]
. NameInternal -> size [ 1 ] = 5 ; gsven4ga0i ( obj -> _pobj2 [ 7 ] .
NameInternal , b_kstr ) ; for ( b_kstr = 0 ; b_kstr < 5 ; b_kstr ++ ) { obj
-> _pobj2 [ 7 ] . NameInternal -> data [ b_kstr ] = tmp_p [ b_kstr ] ; } obj
-> _pobj2 [ 7 ] . ParentIndex = 0.0 ; obj -> _pobj2 [ 7 ] . MassInternal =
66.0277530923337 ; obj -> _pobj2 [ 7 ] . CenterOfMassInternal [ 0 ] = -
0.037059247103240843 ; obj -> _pobj2 [ 7 ] . CenterOfMassInternal [ 1 ] =
0.023304492622245248 ; obj -> _pobj2 [ 7 ] . CenterOfMassInternal [ 2 ] = -
0.1801986436815835 ; for ( b_kstr = 0 ; b_kstr < 9 ; b_kstr ++ ) { obj ->
_pobj2 [ 7 ] . InertiaInternal [ b_kstr ] = tmp_e [ b_kstr ] ; } for ( b_kstr
= 0 ; b_kstr < 36 ; b_kstr ++ ) { obj -> _pobj2 [ 7 ] . SpatialInertia [
b_kstr ] = tmp_i [ b_kstr ] ; } obj -> _pobj1 [ 7 ] . InTree = false ; for (
b_kstr = 0 ; b_kstr < 16 ; b_kstr ++ ) { obj -> _pobj1 [ 7 ] .
JointToParentTransform [ b_kstr ] = tmp_m [ b_kstr ] ; } for ( b_kstr = 0 ;
b_kstr < 16 ; b_kstr ++ ) { obj -> _pobj1 [ 7 ] . ChildToJointTransform [
b_kstr ] = tmp_m [ b_kstr ] ; } b_kstr = obj -> _pobj1 [ 7 ] . NameInternal
-> size [ 0 ] * obj -> _pobj1 [ 7 ] . NameInternal -> size [ 1 ] ; obj ->
_pobj1 [ 7 ] . NameInternal -> size [ 0 ] = 1 ; obj -> _pobj1 [ 7 ] .
NameInternal -> size [ 1 ] = 6 ; gsven4ga0i ( obj -> _pobj1 [ 7 ] .
NameInternal , b_kstr ) ; for ( b_kstr = 0 ; b_kstr < 6 ; b_kstr ++ ) { obj
-> _pobj1 [ 7 ] . NameInternal -> data [ b_kstr ] = tmp_g [ b_kstr ] ; }
b_kstr = obj -> _pobj1 [ 7 ] . Type -> size [ 0 ] * obj -> _pobj1 [ 7 ] .
Type -> size [ 1 ] ; obj -> _pobj1 [ 7 ] . Type -> size [ 0 ] = 1 ; obj ->
_pobj1 [ 7 ] . Type -> size [ 1 ] = 8 ; gsven4ga0i ( obj -> _pobj1 [ 7 ] .
Type , b_kstr ) ; for ( b_kstr = 0 ; b_kstr < 8 ; b_kstr ++ ) { obj -> _pobj1
[ 7 ] . Type -> data [ b_kstr ] = tmp_j [ b_kstr ] ; } ek533x1it4 ( & jname ,
2 ) ; b_kstr = jname -> size [ 0 ] * jname -> size [ 1 ] ; jname -> size [ 0
] = 1 ; jname -> size [ 1 ] = obj -> _pobj1 [ 7 ] . Type -> size [ 1 ] ;
gsven4ga0i ( jname , b_kstr ) ; loop_ub = obj -> _pobj1 [ 7 ] . Type -> size
[ 1 ] ; for ( b_kstr = 0 ; b_kstr < loop_ub ; b_kstr ++ ) { jname -> data [
b_kstr ] = obj -> _pobj1 [ 7 ] . Type -> data [ b_kstr ] ; } for ( b_kstr = 0
; b_kstr < 8 ; b_kstr ++ ) { b [ b_kstr ] = tmp_j [ b_kstr ] ; } b_bool =
false ; if ( jname -> size [ 1 ] != 8 ) { } else { b_kstr = 1 ; do { exitg1 =
0 ; if ( b_kstr - 1 < 8 ) { if ( jname -> data [ b_kstr - 1 ] != b [ b_kstr -
1 ] ) { exitg1 = 1 ; } else { b_kstr ++ ; } } else { b_bool = true ; exitg1 =
1 ; } } while ( exitg1 == 0 ) ; } if ( b_bool ) { b_kstr = 0 ; } else { for (
b_kstr = 0 ; b_kstr < 9 ; b_kstr ++ ) { b_p [ b_kstr ] = tmp_f [ b_kstr ] ; }
if ( jname -> size [ 1 ] != 9 ) { } else { b_kstr = 1 ; do { exitg1 = 0 ; if
( b_kstr - 1 < 9 ) { if ( jname -> data [ b_kstr - 1 ] != b_p [ b_kstr - 1 ]
) { exitg1 = 1 ; } else { b_kstr ++ ; } } else { b_bool = true ; exitg1 = 1 ;
} } while ( exitg1 == 0 ) ; } if ( b_bool ) { b_kstr = 1 ; } else { b_kstr =
- 1 ; } } switch ( b_kstr ) { case 0 : tmp [ 0 ] = 0 ; tmp [ 1 ] = 0 ; tmp [
2 ] = 1 ; tmp [ 3 ] = 0 ; tmp [ 4 ] = 0 ; tmp [ 5 ] = 0 ; for ( b_kstr = 0 ;
b_kstr < 6 ; b_kstr ++ ) { msubspace_data [ b_kstr ] = tmp [ b_kstr ] ; }
poslim_data [ 0 ] = - 3.1415926535897931 ; poslim_data [ 1 ] =
3.1415926535897931 ; obj -> _pobj1 [ 7 ] . VelocityNumber = 1.0 ; obj ->
_pobj1 [ 7 ] . PositionNumber = 1.0 ; obj -> _pobj1 [ 7 ] . JointAxisInternal
[ 0 ] = 0.0 ; obj -> _pobj1 [ 7 ] . JointAxisInternal [ 1 ] = 0.0 ; obj ->
_pobj1 [ 7 ] . JointAxisInternal [ 2 ] = 1.0 ; break ; case 1 : tmp [ 0 ] = 0
; tmp [ 1 ] = 0 ; tmp [ 2 ] = 0 ; tmp [ 3 ] = 0 ; tmp [ 4 ] = 0 ; tmp [ 5 ] =
1 ; for ( b_kstr = 0 ; b_kstr < 6 ; b_kstr ++ ) { msubspace_data [ b_kstr ] =
tmp [ b_kstr ] ; } poslim_data [ 0 ] = - 0.5 ; poslim_data [ 1 ] = 0.5 ; obj
-> _pobj1 [ 7 ] . VelocityNumber = 1.0 ; obj -> _pobj1 [ 7 ] . PositionNumber
= 1.0 ; obj -> _pobj1 [ 7 ] . JointAxisInternal [ 0 ] = 0.0 ; obj -> _pobj1 [
7 ] . JointAxisInternal [ 1 ] = 0.0 ; obj -> _pobj1 [ 7 ] . JointAxisInternal
[ 2 ] = 1.0 ; break ; default : for ( b_kstr = 0 ; b_kstr < 6 ; b_kstr ++ ) {
msubspace_data [ b_kstr ] = 0 ; } poslim_data [ 0 ] = 0.0 ; poslim_data [ 1 ]
= 0.0 ; obj -> _pobj1 [ 7 ] . VelocityNumber = 0.0 ; obj -> _pobj1 [ 7 ] .
PositionNumber = 0.0 ; obj -> _pobj1 [ 7 ] . JointAxisInternal [ 0 ] = 0.0 ;
obj -> _pobj1 [ 7 ] . JointAxisInternal [ 1 ] = 0.0 ; obj -> _pobj1 [ 7 ] .
JointAxisInternal [ 2 ] = 0.0 ; break ; } b_kstr = obj -> _pobj1 [ 7 ] .
MotionSubspace -> size [ 0 ] * obj -> _pobj1 [ 7 ] . MotionSubspace -> size [
1 ] ; obj -> _pobj1 [ 7 ] . MotionSubspace -> size [ 0 ] = 6 ; obj -> _pobj1
[ 7 ] . MotionSubspace -> size [ 1 ] = 1 ; o4pyrzarz5 ( obj -> _pobj1 [ 7 ] .
MotionSubspace , b_kstr ) ; for ( b_kstr = 0 ; b_kstr < 6 ; b_kstr ++ ) { obj
-> _pobj1 [ 7 ] . MotionSubspace -> data [ b_kstr ] = msubspace_data [ b_kstr
] ; } b_kstr = obj -> _pobj1 [ 7 ] . PositionLimitsInternal -> size [ 0 ] *
obj -> _pobj1 [ 7 ] . PositionLimitsInternal -> size [ 1 ] ; obj -> _pobj1 [
7 ] . PositionLimitsInternal -> size [ 0 ] = 1 ; obj -> _pobj1 [ 7 ] .
PositionLimitsInternal -> size [ 1 ] = 2 ; o4pyrzarz5 ( obj -> _pobj1 [ 7 ] .
PositionLimitsInternal , b_kstr ) ; for ( b_kstr = 0 ; b_kstr < 2 ; b_kstr ++
) { obj -> _pobj1 [ 7 ] . PositionLimitsInternal -> data [ b_kstr ] =
poslim_data [ b_kstr ] ; } b_kstr = obj -> _pobj1 [ 7 ] .
HomePositionInternal -> size [ 0 ] ; obj -> _pobj1 [ 7 ] .
HomePositionInternal -> size [ 0 ] = 1 ; o4pyrzarz5 ( obj -> _pobj1 [ 7 ] .
HomePositionInternal , b_kstr ) ; for ( b_kstr = 0 ; b_kstr < 1 ; b_kstr ++ )
{ obj -> _pobj1 [ 7 ] . HomePositionInternal -> data [ 0 ] = 0.0 ; } obj ->
_pobj2 [ 7 ] . JointInternal = & obj -> _pobj1 [ 7 ] ; for ( b_kstr = 0 ;
b_kstr < 16 ; b_kstr ++ ) { obj -> _pobj2 [ 7 ] . JointInternal ->
JointToParentTransform [ b_kstr ] = tmp_c [ b_kstr ] ; } for ( b_kstr = 0 ;
b_kstr < 16 ; b_kstr ++ ) { obj -> _pobj2 [ 7 ] . JointInternal ->
ChildToJointTransform [ b_kstr ] = tmp_k [ b_kstr ] ; } b_kstr = obj ->
_pobj2 [ 7 ] . JointInternal -> MotionSubspace -> size [ 0 ] * obj -> _pobj2
[ 7 ] . JointInternal -> MotionSubspace -> size [ 1 ] ; obj -> _pobj2 [ 7 ] .
JointInternal -> MotionSubspace -> size [ 0 ] = 6 ; obj -> _pobj2 [ 7 ] .
JointInternal -> MotionSubspace -> size [ 1 ] = 1 ; o4pyrzarz5 ( obj ->
_pobj2 [ 7 ] . JointInternal -> MotionSubspace , b_kstr ) ; for ( b_kstr = 0
; b_kstr < 6 ; b_kstr ++ ) { obj -> _pobj2 [ 7 ] . JointInternal ->
MotionSubspace -> data [ b_kstr ] = tmp_b [ b_kstr ] ; } obj -> _pobj2 [ 7 ]
. JointInternal -> InTree = true ; b_kstr = obj -> _pobj2 [ 7 ] .
JointInternal -> PositionLimitsInternal -> size [ 0 ] * obj -> _pobj2 [ 7 ] .
JointInternal -> PositionLimitsInternal -> size [ 1 ] ; obj -> _pobj2 [ 7 ] .
JointInternal -> PositionLimitsInternal -> size [ 0 ] = 1 ; obj -> _pobj2 [ 7
] . JointInternal -> PositionLimitsInternal -> size [ 1 ] = 2 ; o4pyrzarz5 (
obj -> _pobj2 [ 7 ] . JointInternal -> PositionLimitsInternal , b_kstr ) ;
obj -> _pobj2 [ 7 ] . JointInternal -> PositionLimitsInternal -> data [ 0 ] =
- 3.1415926535897931 ; obj -> _pobj2 [ 7 ] . JointInternal ->
PositionLimitsInternal -> data [ obj -> _pobj2 [ 7 ] . JointInternal ->
PositionLimitsInternal -> size [ 0 ] ] = 3.1415926535897931 ; obj -> _pobj2 [
7 ] . JointInternal -> JointAxisInternal [ 0 ] = 0.0 ; obj -> _pobj2 [ 7 ] .
JointInternal -> JointAxisInternal [ 1 ] = 0.0 ; obj -> _pobj2 [ 7 ] .
JointInternal -> JointAxisInternal [ 2 ] = 1.0 ; b_kstr = obj -> _pobj2 [ 7 ]
. JointInternal -> HomePositionInternal -> size [ 0 ] ; obj -> _pobj2 [ 7 ] .
JointInternal -> HomePositionInternal -> size [ 0 ] = 1 ; o4pyrzarz5 ( obj ->
_pobj2 [ 7 ] . JointInternal -> HomePositionInternal , b_kstr ) ; obj ->
_pobj2 [ 7 ] . JointInternal -> HomePositionInternal -> data [ 0 ] = 0.0 ;
obj -> _pobj2 [ 7 ] . CollisionsInternal = oosvd5bnheg ( & obj -> _pobj0 [ 7
] , 0.0 ) ; obj -> _pobj2 [ 7 ] . matlabCodegenIsDeleted = false ; obj ->
Bodies [ 0 ] = & obj -> _pobj2 [ 7 ] ; obj -> Bodies [ 0 ] -> Index = 1.0 ;
b_kstr = obj -> _pobj2 [ 8 ] . NameInternal -> size [ 0 ] * obj -> _pobj2 [ 8
] . NameInternal -> size [ 1 ] ; obj -> _pobj2 [ 8 ] . NameInternal -> size [
0 ] = 1 ; obj -> _pobj2 [ 8 ] . NameInternal -> size [ 1 ] = 5 ; gsven4ga0i (
obj -> _pobj2 [ 8 ] . NameInternal , b_kstr ) ; for ( b_kstr = 0 ; b_kstr < 5
; b_kstr ++ ) { obj -> _pobj2 [ 8 ] . NameInternal -> data [ b_kstr ] = tmp_n
[ b_kstr ] ; } obj -> _pobj2 [ 8 ] . ParentIndex = 1.0 ; obj -> _pobj2 [ 8 ]
. MassInternal = 21.79104922806868 ; obj -> _pobj2 [ 8 ] .
CenterOfMassInternal [ 0 ] = 0.036029614399853638 ; obj -> _pobj2 [ 8 ] .
CenterOfMassInternal [ 1 ] = - 0.35297441933465362 ; obj -> _pobj2 [ 8 ] .
CenterOfMassInternal [ 2 ] = - 0.068482878560906624 ; for ( b_kstr = 0 ;
b_kstr < 9 ; b_kstr ++ ) { obj -> _pobj2 [ 8 ] . InertiaInternal [ b_kstr ] =
tmp_l [ b_kstr ] ; } for ( b_kstr = 0 ; b_kstr < 36 ; b_kstr ++ ) { obj ->
_pobj2 [ 8 ] . SpatialInertia [ b_kstr ] = tmp_d [ b_kstr ] ; } obj -> _pobj1
[ 8 ] . InTree = false ; for ( b_kstr = 0 ; b_kstr < 16 ; b_kstr ++ ) { obj
-> _pobj1 [ 8 ] . JointToParentTransform [ b_kstr ] = tmp_m [ b_kstr ] ; }
for ( b_kstr = 0 ; b_kstr < 16 ; b_kstr ++ ) { obj -> _pobj1 [ 8 ] .
ChildToJointTransform [ b_kstr ] = tmp_m [ b_kstr ] ; } b_kstr = obj ->
_pobj1 [ 8 ] . NameInternal -> size [ 0 ] * obj -> _pobj1 [ 8 ] .
NameInternal -> size [ 1 ] ; obj -> _pobj1 [ 8 ] . NameInternal -> size [ 0 ]
= 1 ; obj -> _pobj1 [ 8 ] . NameInternal -> size [ 1 ] = 6 ; gsven4ga0i ( obj
-> _pobj1 [ 8 ] . NameInternal , b_kstr ) ; for ( b_kstr = 0 ; b_kstr < 6 ;
b_kstr ++ ) { obj -> _pobj1 [ 8 ] . NameInternal -> data [ b_kstr ] = tmp_o [
b_kstr ] ; } b_kstr = obj -> _pobj1 [ 8 ] . Type -> size [ 0 ] * obj ->
_pobj1 [ 8 ] . Type -> size [ 1 ] ; obj -> _pobj1 [ 8 ] . Type -> size [ 0 ]
= 1 ; obj -> _pobj1 [ 8 ] . Type -> size [ 1 ] = 8 ; gsven4ga0i ( obj ->
_pobj1 [ 8 ] . Type , b_kstr ) ; for ( b_kstr = 0 ; b_kstr < 8 ; b_kstr ++ )
{ obj -> _pobj1 [ 8 ] . Type -> data [ b_kstr ] = tmp_j [ b_kstr ] ; } b_kstr
= jname -> size [ 0 ] * jname -> size [ 1 ] ; jname -> size [ 0 ] = 1 ; jname
-> size [ 1 ] = obj -> _pobj1 [ 8 ] . Type -> size [ 1 ] ; gsven4ga0i ( jname
, b_kstr ) ; loop_ub = obj -> _pobj1 [ 8 ] . Type -> size [ 1 ] ; for (
b_kstr = 0 ; b_kstr < loop_ub ; b_kstr ++ ) { jname -> data [ b_kstr ] = obj
-> _pobj1 [ 8 ] . Type -> data [ b_kstr ] ; } b_bool = false ; if ( jname ->
size [ 1 ] != 8 ) { } else { b_kstr = 1 ; do { exitg1 = 0 ; if ( b_kstr - 1 <
8 ) { if ( jname -> data [ b_kstr - 1 ] != b [ b_kstr - 1 ] ) { exitg1 = 1 ;
} else { b_kstr ++ ; } } else { b_bool = true ; exitg1 = 1 ; } } while (
exitg1 == 0 ) ; } if ( b_bool ) { b_kstr = 0 ; } else { for ( b_kstr = 0 ;
b_kstr < 9 ; b_kstr ++ ) { b_p [ b_kstr ] = tmp_f [ b_kstr ] ; } if ( jname
-> size [ 1 ] != 9 ) { } else { b_kstr = 1 ; do { exitg1 = 0 ; if ( b_kstr -
1 < 9 ) { if ( jname -> data [ b_kstr - 1 ] != b_p [ b_kstr - 1 ] ) { exitg1
= 1 ; } else { b_kstr ++ ; } } else { b_bool = true ; exitg1 = 1 ; } } while
( exitg1 == 0 ) ; } if ( b_bool ) { b_kstr = 1 ; } else { b_kstr = - 1 ; } }
switch ( b_kstr ) { case 0 : tmp [ 0 ] = 0 ; tmp [ 1 ] = 0 ; tmp [ 2 ] = 1 ;
tmp [ 3 ] = 0 ; tmp [ 4 ] = 0 ; tmp [ 5 ] = 0 ; for ( b_kstr = 0 ; b_kstr < 6
; b_kstr ++ ) { msubspace_data [ b_kstr ] = tmp [ b_kstr ] ; } poslim_data [
0 ] = - 3.1415926535897931 ; poslim_data [ 1 ] = 3.1415926535897931 ; obj ->
_pobj1 [ 8 ] . VelocityNumber = 1.0 ; obj -> _pobj1 [ 8 ] . PositionNumber =
1.0 ; obj -> _pobj1 [ 8 ] . JointAxisInternal [ 0 ] = 0.0 ; obj -> _pobj1 [ 8
] . JointAxisInternal [ 1 ] = 0.0 ; obj -> _pobj1 [ 8 ] . JointAxisInternal [
2 ] = 1.0 ; break ; case 1 : tmp [ 0 ] = 0 ; tmp [ 1 ] = 0 ; tmp [ 2 ] = 0 ;
tmp [ 3 ] = 0 ; tmp [ 4 ] = 0 ; tmp [ 5 ] = 1 ; for ( b_kstr = 0 ; b_kstr < 6
; b_kstr ++ ) { msubspace_data [ b_kstr ] = tmp [ b_kstr ] ; } poslim_data [
0 ] = - 0.5 ; poslim_data [ 1 ] = 0.5 ; obj -> _pobj1 [ 8 ] . VelocityNumber
= 1.0 ; obj -> _pobj1 [ 8 ] . PositionNumber = 1.0 ; obj -> _pobj1 [ 8 ] .
JointAxisInternal [ 0 ] = 0.0 ; obj -> _pobj1 [ 8 ] . JointAxisInternal [ 1 ]
= 0.0 ; obj -> _pobj1 [ 8 ] . JointAxisInternal [ 2 ] = 1.0 ; break ; default
: for ( b_kstr = 0 ; b_kstr < 6 ; b_kstr ++ ) { msubspace_data [ b_kstr ] = 0
; } poslim_data [ 0 ] = 0.0 ; poslim_data [ 1 ] = 0.0 ; obj -> _pobj1 [ 8 ] .
VelocityNumber = 0.0 ; obj -> _pobj1 [ 8 ] . PositionNumber = 0.0 ; obj ->
_pobj1 [ 8 ] . JointAxisInternal [ 0 ] = 0.0 ; obj -> _pobj1 [ 8 ] .
JointAxisInternal [ 1 ] = 0.0 ; obj -> _pobj1 [ 8 ] . JointAxisInternal [ 2 ]
= 0.0 ; break ; } b_kstr = obj -> _pobj1 [ 8 ] . MotionSubspace -> size [ 0 ]
* obj -> _pobj1 [ 8 ] . MotionSubspace -> size [ 1 ] ; obj -> _pobj1 [ 8 ] .
MotionSubspace -> size [ 0 ] = 6 ; obj -> _pobj1 [ 8 ] . MotionSubspace ->
size [ 1 ] = 1 ; o4pyrzarz5 ( obj -> _pobj1 [ 8 ] . MotionSubspace , b_kstr )
; for ( b_kstr = 0 ; b_kstr < 6 ; b_kstr ++ ) { obj -> _pobj1 [ 8 ] .
MotionSubspace -> data [ b_kstr ] = msubspace_data [ b_kstr ] ; } b_kstr =
obj -> _pobj1 [ 8 ] . PositionLimitsInternal -> size [ 0 ] * obj -> _pobj1 [
8 ] . PositionLimitsInternal -> size [ 1 ] ; obj -> _pobj1 [ 8 ] .
PositionLimitsInternal -> size [ 0 ] = 1 ; obj -> _pobj1 [ 8 ] .
PositionLimitsInternal -> size [ 1 ] = 2 ; o4pyrzarz5 ( obj -> _pobj1 [ 8 ] .
PositionLimitsInternal , b_kstr ) ; for ( b_kstr = 0 ; b_kstr < 2 ; b_kstr ++
) { obj -> _pobj1 [ 8 ] . PositionLimitsInternal -> data [ b_kstr ] =
poslim_data [ b_kstr ] ; } b_kstr = obj -> _pobj1 [ 8 ] .
HomePositionInternal -> size [ 0 ] ; obj -> _pobj1 [ 8 ] .
HomePositionInternal -> size [ 0 ] = 1 ; o4pyrzarz5 ( obj -> _pobj1 [ 8 ] .
HomePositionInternal , b_kstr ) ; for ( b_kstr = 0 ; b_kstr < 1 ; b_kstr ++ )
{ obj -> _pobj1 [ 8 ] . HomePositionInternal -> data [ 0 ] = 0.0 ; } obj ->
_pobj2 [ 8 ] . JointInternal = & obj -> _pobj1 [ 8 ] ; for ( b_kstr = 0 ;
b_kstr < 16 ; b_kstr ++ ) { obj -> _pobj2 [ 8 ] . JointInternal ->
JointToParentTransform [ b_kstr ] = tmp_dz [ b_kstr ] ; } for ( b_kstr = 0 ;
b_kstr < 16 ; b_kstr ++ ) { obj -> _pobj2 [ 8 ] . JointInternal ->
ChildToJointTransform [ b_kstr ] = tmp_k [ b_kstr ] ; } b_kstr = obj ->
_pobj2 [ 8 ] . JointInternal -> MotionSubspace -> size [ 0 ] * obj -> _pobj2
[ 8 ] . JointInternal -> MotionSubspace -> size [ 1 ] ; obj -> _pobj2 [ 8 ] .
JointInternal -> MotionSubspace -> size [ 0 ] = 6 ; obj -> _pobj2 [ 8 ] .
JointInternal -> MotionSubspace -> size [ 1 ] = 1 ; o4pyrzarz5 ( obj ->
_pobj2 [ 8 ] . JointInternal -> MotionSubspace , b_kstr ) ; for ( b_kstr = 0
; b_kstr < 6 ; b_kstr ++ ) { obj -> _pobj2 [ 8 ] . JointInternal ->
MotionSubspace -> data [ b_kstr ] = tmp_b [ b_kstr ] ; } obj -> _pobj2 [ 8 ]
. JointInternal -> InTree = true ; b_kstr = obj -> _pobj2 [ 8 ] .
JointInternal -> PositionLimitsInternal -> size [ 0 ] * obj -> _pobj2 [ 8 ] .
JointInternal -> PositionLimitsInternal -> size [ 1 ] ; obj -> _pobj2 [ 8 ] .
JointInternal -> PositionLimitsInternal -> size [ 0 ] = 1 ; obj -> _pobj2 [ 8
] . JointInternal -> PositionLimitsInternal -> size [ 1 ] = 2 ; o4pyrzarz5 (
obj -> _pobj2 [ 8 ] . JointInternal -> PositionLimitsInternal , b_kstr ) ;
obj -> _pobj2 [ 8 ] . JointInternal -> PositionLimitsInternal -> data [ 0 ] =
- 3.1415926535897931 ; obj -> _pobj2 [ 8 ] . JointInternal ->
PositionLimitsInternal -> data [ obj -> _pobj2 [ 8 ] . JointInternal ->
PositionLimitsInternal -> size [ 0 ] ] = 3.1415926535897931 ; obj -> _pobj2 [
8 ] . JointInternal -> JointAxisInternal [ 0 ] = 0.0 ; obj -> _pobj2 [ 8 ] .
JointInternal -> JointAxisInternal [ 1 ] = 0.0 ; obj -> _pobj2 [ 8 ] .
JointInternal -> JointAxisInternal [ 2 ] = 1.0 ; b_kstr = obj -> _pobj2 [ 8 ]
. JointInternal -> HomePositionInternal -> size [ 0 ] ; obj -> _pobj2 [ 8 ] .
JointInternal -> HomePositionInternal -> size [ 0 ] = 1 ; o4pyrzarz5 ( obj ->
_pobj2 [ 8 ] . JointInternal -> HomePositionInternal , b_kstr ) ; obj ->
_pobj2 [ 8 ] . JointInternal -> HomePositionInternal -> data [ 0 ] = 0.0 ;
obj -> _pobj2 [ 8 ] . CollisionsInternal = oosvd5bnheg ( & obj -> _pobj0 [ 8
] , 0.0 ) ; obj -> _pobj2 [ 8 ] . matlabCodegenIsDeleted = false ; obj ->
Bodies [ 1 ] = & obj -> _pobj2 [ 8 ] ; obj -> Bodies [ 1 ] -> Index = 2.0 ;
obj -> Bodies [ 2 ] = nqakf1njg2 ( & obj -> _pobj2 [ 9 ] , & obj -> _pobj0 [
9 ] , & obj -> _pobj1 [ 9 ] ) ; obj -> Bodies [ 2 ] -> Index = 3.0 ; obj ->
Bodies [ 3 ] = i4ef5xo4iv ( & obj -> _pobj2 [ 10 ] , & obj -> _pobj0 [ 10 ] ,
& obj -> _pobj1 [ 10 ] ) ; obj -> Bodies [ 3 ] -> Index = 4.0 ; obj -> Bodies
[ 4 ] = pvef0ss41c ( & obj -> _pobj2 [ 11 ] , & obj -> _pobj0 [ 11 ] , & obj
-> _pobj1 [ 11 ] ) ; obj -> Bodies [ 4 ] -> Index = 5.0 ; obj -> Bodies [ 5 ]
= othv5snbeo ( & obj -> _pobj2 [ 12 ] , & obj -> _pobj0 [ 12 ] , & obj ->
_pobj1 [ 12 ] ) ; obj -> Bodies [ 5 ] -> Index = 6.0 ; obj -> Bodies [ 6 ] =
k0veo1nxsu ( & obj -> _pobj2 [ 13 ] , & obj -> _pobj0 [ 13 ] , & obj ->
_pobj1 [ 13 ] ) ; obj -> Bodies [ 6 ] -> Index = 7.0 ; obj -> Gravity [ 0 ] =
0.0 ; obj -> Gravity [ 1 ] = 0.0 ; obj -> Gravity [ 2 ] = - 9.80665 ; b_kstr
= obj -> Base . NameInternal -> size [ 0 ] * obj -> Base . NameInternal ->
size [ 1 ] ; obj -> Base . NameInternal -> size [ 0 ] = 1 ; obj -> Base .
NameInternal -> size [ 1 ] = 4 ; gsven4ga0i ( obj -> Base . NameInternal ,
b_kstr ) ; obj -> Base . NameInternal -> data [ 0 ] = 'B' ; obj -> Base .
NameInternal -> data [ 1 ] = 'a' ; obj -> Base . NameInternal -> data [ 2 ] =
's' ; obj -> Base . NameInternal -> data [ 3 ] = 'e' ; obj -> Base .
ParentIndex = - 1.0 ; obj -> Base . MassInternal = 0.0 ; obj -> Base .
CenterOfMassInternal [ 0 ] = 0.0 ; obj -> Base . CenterOfMassInternal [ 1 ] =
0.0 ; obj -> Base . CenterOfMassInternal [ 2 ] = 0.0 ; for ( b_kstr = 0 ;
b_kstr < 9 ; b_kstr ++ ) { obj -> Base . InertiaInternal [ b_kstr ] = 0.0 ; }
for ( b_kstr = 0 ; b_kstr < 36 ; b_kstr ++ ) { obj -> Base . SpatialInertia [
b_kstr ] = 0.0 ; } b_kstr = jname -> size [ 0 ] * jname -> size [ 1 ] ; jname
-> size [ 0 ] = 1 ; jname -> size [ 1 ] = obj -> Base . NameInternal -> size
[ 1 ] + 4 ; gsven4ga0i ( jname , b_kstr ) ; loop_ub = obj -> Base .
NameInternal -> size [ 1 ] ; for ( b_kstr = 0 ; b_kstr < loop_ub ; b_kstr ++
) { jname -> data [ b_kstr ] = obj -> Base . NameInternal -> data [ b_kstr ]
; } jname -> data [ obj -> Base . NameInternal -> size [ 1 ] ] = '_' ; jname
-> data [ obj -> Base . NameInternal -> size [ 1 ] + 1 ] = 'j' ; jname ->
data [ obj -> Base . NameInternal -> size [ 1 ] + 2 ] = 'n' ; jname -> data [
obj -> Base . NameInternal -> size [ 1 ] + 3 ] = 't' ; obj -> Base .
JointInternal = jgx2lfyryv ( & obj -> _pobj1 [ 14 ] , jname ) ; dqu5smbks1 (
& jname ) ; obj -> Base . CollisionsInternal = oosvd5bnheg ( & obj -> _pobj0
[ 14 ] , 0.0 ) ; obj -> Base . matlabCodegenIsDeleted = false ; obj -> Base .
Index = 0.0 ; obj -> matlabCodegenIsDeleted = false ; return b_obj ; } static
void mmuhjsscra2 ( uint32_T mt [ 625 ] , uint32_T u [ 2 ] ) { int32_T b_j ;
int32_T b_kk ; uint32_T mti ; uint32_T y ; for ( b_j = 0 ; b_j < 2 ; b_j ++ )
{ mti = mt [ 624 ] + 1U ; if ( mt [ 624 ] + 1U >= 625U ) { for ( b_kk = 0 ;
b_kk < 227 ; b_kk ++ ) { y = ( mt [ b_kk + 1 ] & 2147483647U ) | ( mt [ b_kk
] & 2147483648U ) ; if ( ( y & 1U ) == 0U ) { mti = y >> 1U ; } else { mti =
y >> 1U ^ 2567483615U ; } mt [ b_kk ] = mt [ b_kk + 397 ] ^ mti ; } for (
b_kk = 0 ; b_kk < 396 ; b_kk ++ ) { y = ( mt [ b_kk + 227 ] & 2147483648U ) |
( mt [ b_kk + 228 ] & 2147483647U ) ; if ( ( y & 1U ) == 0U ) { mti = y >> 1U
; } else { mti = y >> 1U ^ 2567483615U ; } mt [ b_kk + 227 ] = mt [ b_kk ] ^
mti ; } y = ( mt [ 623 ] & 2147483648U ) | ( mt [ 0 ] & 2147483647U ) ; if (
( y & 1U ) == 0U ) { mti = y >> 1U ; } else { mti = y >> 1U ^ 2567483615U ; }
mt [ 623 ] = mt [ 396 ] ^ mti ; mti = 1U ; } y = mt [ ( int32_T ) mti - 1 ] ;
mt [ 624 ] = mti ; y ^= y >> 11U ; y ^= y << 7U & 2636928640U ; y ^= y << 15U
& 4022730752U ; u [ b_j ] = y >> 18U ^ y ; } } static boolean_T hqcghxws2j (
const uint32_T mt [ 625 ] ) { int32_T k ; boolean_T exitg1 ; boolean_T
isvalid ; if ( ( mt [ 624 ] >= 1U ) && ( mt [ 624 ] < 625U ) ) { isvalid =
false ; k = 0 ; exitg1 = false ; while ( ( ! exitg1 ) && ( k + 1 < 625 ) ) {
if ( mt [ k ] == 0U ) { k ++ ; } else { isvalid = true ; exitg1 = true ; } }
} else { isvalid = false ; } return isvalid ; } static void op4fr1mwv4 (
real_T r [ 5 ] ) { real_T b_r ; int32_T b_k ; int32_T exitg1 ; uint32_T b_u [
2 ] ; for ( b_k = 0 ; b_k < 5 ; b_k ++ ) { do { exitg1 = 0 ; mmuhjsscra2 (
rtDW . dky15kevds , b_u ) ; b_r = ( ( real_T ) ( b_u [ 0 ] >> 5U ) *
6.7108864E+7 + ( real_T ) ( b_u [ 1 ] >> 6U ) ) * 1.1102230246251565E-16 ; if
( b_r == 0.0 ) { if ( ! hqcghxws2j ( rtDW . dky15kevds ) ) { rtDW .
dky15kevds [ 0 ] = 5489U ; rtDW . dky15kevds [ 624 ] = 624U ; } } else {
exitg1 = 1 ; } } while ( exitg1 == 0 ) ; r [ b_k ] = b_r ; } } static
boolean_T ndrymnz2f0 ( const lg5jhfa1j5 * a , const lg5jhfa1j5 * b ) {
int32_T b_kstr ; int32_T exitg1 ; boolean_T b_bool ; boolean_T d ; b_bool =
false ; d = ( a -> size [ 1 ] == 0 ) ; if ( d && ( b -> size [ 1 ] == 0 ) ) {
b_bool = true ; } else if ( a -> size [ 1 ] != b -> size [ 1 ] ) { } else {
b_kstr = 1 ; do { exitg1 = 0 ; if ( b_kstr - 1 <= b -> size [ 1 ] - 1 ) { if
( a -> data [ b_kstr - 1 ] != b -> data [ b_kstr - 1 ] ) { exitg1 = 1 ; }
else { b_kstr ++ ; } } else { b_bool = true ; exitg1 = 1 ; } } while ( exitg1
== 0 ) ; } return b_bool ; } static real_T b3eyeozcmv ( i5s4hgzi5z * obj ,
const lg5jhfa1j5 * bodyname ) { cwp5dxx3gqu * obj_p ; lg5jhfa1j5 * bname ;
real_T b ; real_T bid ; int32_T b_i ; int32_T i ; int32_T loop_ub ; boolean_T
exitg1 ; bid = - 1.0 ; ek533x1it4 ( & bname , 2 ) ; i = bname -> size [ 0 ] *
bname -> size [ 1 ] ; bname -> size [ 0 ] = 1 ; bname -> size [ 1 ] = obj ->
Base . NameInternal -> size [ 1 ] ; gsven4ga0i ( bname , i ) ; loop_ub = obj
-> Base . NameInternal -> size [ 1 ] ; for ( i = 0 ; i < loop_ub ; i ++ ) {
bname -> data [ i ] = obj -> Base . NameInternal -> data [ i ] ; } if (
ndrymnz2f0 ( bname , bodyname ) ) { bid = 0.0 ; } else { b = obj -> NumBodies
; b_i = 0 ; exitg1 = false ; while ( ( ! exitg1 ) && ( b_i <= ( int32_T ) b -
1 ) ) { obj_p = obj -> Bodies [ b_i ] ; i = bname -> size [ 0 ] * bname ->
size [ 1 ] ; bname -> size [ 0 ] = 1 ; bname -> size [ 1 ] = obj_p ->
NameInternal -> size [ 1 ] ; gsven4ga0i ( bname , i ) ; loop_ub = obj_p ->
NameInternal -> size [ 1 ] ; for ( i = 0 ; i < loop_ub ; i ++ ) { bname ->
data [ i ] = obj_p -> NameInternal -> data [ i ] ; } if ( ndrymnz2f0 ( bname
, bodyname ) ) { bid = ( real_T ) b_i + 1.0 ; exitg1 = true ; } else { b_i ++
; } } } dqu5smbks1 ( & bname ) ; return bid ; } static void jvu10fuanp (
hnyeda4wkh * * pEmxArray ) { if ( * pEmxArray != ( hnyeda4wkh * ) NULL ) { if
( ( ( * pEmxArray ) -> data != ( real_T * ) NULL ) && ( * pEmxArray ) ->
canFreeData ) { free ( ( * pEmxArray ) -> data ) ; } free ( ( * pEmxArray )
-> size ) ; free ( * pEmxArray ) ; * pEmxArray = ( hnyeda4wkh * ) NULL ; } }
static cwp5dxx3gqu * oqyznkjth4 ( cwp5dxx3gqu * obj , ejmcoi31fmi * iobj_0 ,
orkdduvnogx * iobj_1 , cwp5dxx3gqu * iobj_2 ) { void * obj_CollisionPrimitive
; cwp5dxx3gqu * newbody ; ejmcoi31fmi * newObj ; ejmcoi31fmi * obj_e ;
hnyeda4wkh * obj_i ; lg5jhfa1j5 * jname ; lg5jhfa1j5 * jtype ; orkdduvnogx *
obj_p ; real_T obj_j [ 36 ] ; real_T obj_WorldPose [ 16 ] ; real_T obj_m [ 16
] ; real_T poslim_data [ 12 ] ; real_T obj_g [ 9 ] ; real_T obj_idx_1 ;
real_T obj_idx_2 ; real_T y ; int32_T b_k ; int32_T b_kstr ; int32_T minnanb
; char_T b_b_p [ 9 ] ; char_T b_vstr [ 9 ] ; char_T partial_match_data [ 9 ]
; char_T b_b [ 8 ] ; char_T vstr [ 8 ] ; char_T b_b_e [ 5 ] ; char_T c_vstr [
5 ] ; int8_T msubspace_data [ 36 ] ; int8_T b_I [ 9 ] ; int8_T tmp [ 6 ] ;
boolean_T b_bool ; boolean_T matched ; static const int8_T tmp_p [ 16 ] = { 1
, 0 , 0 , 0 , 0 , 1 , 0 , 0 , 0 , 0 , 1 , 0 , 0 , 0 , 0 , 1 } ; static const
char_T tmp_e [ 8 ] = { 'r' , 'e' , 'v' , 'o' , 'l' , 'u' , 't' , 'e' } ;
static const char_T tmp_i [ 9 ] = { 'p' , 'r' , 'i' , 's' , 'm' , 'a' , 't' ,
'i' , 'c' } ; static const char_T tmp_m [ 5 ] = { 'f' , 'i' , 'x' , 'e' , 'd'
} ; static const char_T tmp_g [ 128 ] = { '\x00' , '\x01' , '\x02' , '\x03' ,
'\x04' , '\x05' , '\x06' , '\a' , '\b' , '\t' , '\n' , '\v' , '\f' , '\r' ,
'\x0e' , '\x0f' , '\x10' , '\x11' , '\x12' , '\x13' , '\x14' , '\x15' ,
'\x16' , '\x17' , '\x18' , '\x19' , '\x1a' , '\x1b' , '\x1c' , '\x1d' ,
'\x1e' , '\x1f' , ' ' , '!' , '\"' , '#' , '$' , '%' , '&' , '\'' , '(' , ')'
, '*' , '+' , ',' , '-' , '.' , '/' , '0' , '1' , '2' , '3' , '4' , '5' , '6'
, '7' , '8' , '9' , ':' , ';' , '<' , '=' , '>' , '?' , '@' , 'a' , 'b' , 'c'
, 'd' , 'e' , 'f' , 'g' , 'h' , 'i' , 'j' , 'k' , 'l' , 'm' , 'n' , 'o' , 'p'
, 'q' , 'r' , 's' , 't' , 'u' , 'v' , 'w' , 'x' , 'y' , 'z' , '[' , '\\' ,
']' , '^' , '_' , '`' , 'a' , 'b' , 'c' , 'd' , 'e' , 'f' , 'g' , 'h' , 'i' ,
'j' , 'k' , 'l' , 'm' , 'n' , 'o' , 'p' , 'q' , 'r' , 's' , 't' , 'u' , 'v' ,
'w' , 'x' , 'y' , 'z' , '{' , '|' , '}' , '~' , '\x7f' } ; int32_T exitg1 ;
int32_T partial_match_size_idx_1 ; boolean_T guard1 = false ; boolean_T
guard11 = false ; boolean_T guard2 = false ; boolean_T guard3 = false ;
ek533x1it4 ( & jtype , 2 ) ; b_kstr = jtype -> size [ 0 ] * jtype -> size [ 1
] ; jtype -> size [ 0 ] = 1 ; jtype -> size [ 1 ] = obj -> NameInternal ->
size [ 1 ] ; gsven4ga0i ( jtype , b_kstr ) ; minnanb = obj -> NameInternal ->
size [ 1 ] ; for ( b_kstr = 0 ; b_kstr < minnanb ; b_kstr ++ ) { jtype ->
data [ b_kstr ] = obj -> NameInternal -> data [ b_kstr ] ; } newbody = iobj_2
; b_kstr = iobj_2 -> NameInternal -> size [ 0 ] * iobj_2 -> NameInternal ->
size [ 1 ] ; iobj_2 -> NameInternal -> size [ 0 ] = 1 ; iobj_2 ->
NameInternal -> size [ 1 ] = jtype -> size [ 1 ] ; gsven4ga0i ( iobj_2 ->
NameInternal , b_kstr ) ; minnanb = jtype -> size [ 1 ] - 1 ; for ( b_kstr =
0 ; b_kstr <= minnanb ; b_kstr ++ ) { iobj_2 -> NameInternal -> data [ b_kstr
] = jtype -> data [ b_kstr ] ; } ek533x1it4 ( & jname , 2 ) ; b_kstr = jname
-> size [ 0 ] * jname -> size [ 1 ] ; jname -> size [ 0 ] = 1 ; jname -> size
[ 1 ] = jtype -> size [ 1 ] + 4 ; gsven4ga0i ( jname , b_kstr ) ; minnanb =
jtype -> size [ 1 ] ; if ( minnanb - 1 >= 0 ) { memcpy ( & jname -> data [ 0
] , & jtype -> data [ 0 ] , ( uint32_T ) minnanb * sizeof ( char_T ) ) ; }
jname -> data [ jtype -> size [ 1 ] ] = '_' ; jname -> data [ jtype -> size [
1 ] + 1 ] = 'j' ; jname -> data [ jtype -> size [ 1 ] + 2 ] = 'n' ; jname ->
data [ jtype -> size [ 1 ] + 3 ] = 't' ; iobj_2 -> JointInternal = jgx2lfyryv
( & iobj_1 [ 0 ] , jname ) ; iobj_2 -> Index = - 1.0 ; iobj_2 -> ParentIndex
= - 1.0 ; iobj_2 -> MassInternal = 1.0 ; iobj_2 -> CenterOfMassInternal [ 0 ]
= 0.0 ; iobj_2 -> CenterOfMassInternal [ 1 ] = 0.0 ; iobj_2 ->
CenterOfMassInternal [ 2 ] = 0.0 ; for ( b_kstr = 0 ; b_kstr < 9 ; b_kstr ++
) { b_I [ b_kstr ] = 0 ; } b_I [ 0 ] = 1 ; b_I [ 4 ] = 1 ; b_I [ 8 ] = 1 ;
for ( b_kstr = 0 ; b_kstr < 9 ; b_kstr ++ ) { iobj_2 -> InertiaInternal [
b_kstr ] = b_I [ b_kstr ] ; } for ( b_kstr = 0 ; b_kstr < 36 ; b_kstr ++ ) {
msubspace_data [ b_kstr ] = 0 ; } for ( b_k = 0 ; b_k < 6 ; b_k ++ ) {
msubspace_data [ b_k + 6 * b_k ] = 1 ; } for ( b_kstr = 0 ; b_kstr < 36 ;
b_kstr ++ ) { iobj_2 -> SpatialInertia [ b_kstr ] = msubspace_data [ b_kstr ]
; } iobj_2 -> CollisionsInternal = oosvd5bnheg ( & iobj_0 [ 0 ] , 0.0 ) ;
iobj_2 -> matlabCodegenIsDeleted = false ; obj_p = obj -> JointInternal ;
b_kstr = jtype -> size [ 0 ] * jtype -> size [ 1 ] ; jtype -> size [ 0 ] = 1
; jtype -> size [ 1 ] = obj_p -> Type -> size [ 1 ] ; gsven4ga0i ( jtype ,
b_kstr ) ; minnanb = obj_p -> Type -> size [ 1 ] ; for ( b_kstr = 0 ; b_kstr
< minnanb ; b_kstr ++ ) { jtype -> data [ b_kstr ] = obj_p -> Type -> data [
b_kstr ] ; } b_kstr = jname -> size [ 0 ] * jname -> size [ 1 ] ; jname ->
size [ 0 ] = 1 ; jname -> size [ 1 ] = obj_p -> NameInternal -> size [ 1 ] ;
gsven4ga0i ( jname , b_kstr ) ; minnanb = obj_p -> NameInternal -> size [ 1 ]
; for ( b_kstr = 0 ; b_kstr < minnanb ; b_kstr ++ ) { jname -> data [ b_kstr
] = obj_p -> NameInternal -> data [ b_kstr ] ; } iobj_1 [ 1 ] . InTree =
false ; for ( b_kstr = 0 ; b_kstr < 16 ; b_kstr ++ ) { iobj_1 [ 1 ] .
JointToParentTransform [ b_kstr ] = tmp_p [ b_kstr ] ; } for ( b_kstr = 0 ;
b_kstr < 16 ; b_kstr ++ ) { iobj_1 [ 1 ] . ChildToJointTransform [ b_kstr ] =
tmp_p [ b_kstr ] ; } b_kstr = iobj_1 [ 1 ] . NameInternal -> size [ 0 ] *
iobj_1 [ 1 ] . NameInternal -> size [ 1 ] ; iobj_1 [ 1 ] . NameInternal ->
size [ 0 ] = 1 ; iobj_1 [ 1 ] . NameInternal -> size [ 1 ] = jname -> size [
1 ] ; gsven4ga0i ( iobj_1 [ 1 ] . NameInternal , b_kstr ) ; minnanb = jname
-> size [ 1 ] - 1 ; for ( b_kstr = 0 ; b_kstr <= minnanb ; b_kstr ++ ) {
iobj_1 [ 1 ] . NameInternal -> data [ b_kstr ] = jname -> data [ b_kstr ] ; }
dqu5smbks1 ( & jname ) ; partial_match_size_idx_1 = 8 ; b_k = 0 ; matched =
false ; for ( b_kstr = 0 ; b_kstr < 8 ; b_kstr ++ ) { partial_match_data [
b_kstr ] = ' ' ; vstr [ b_kstr ] = tmp_e [ b_kstr ] ; } guard1 = false ;
guard2 = false ; guard3 = false ; if ( jtype -> size [ 1 ] <= 8 ) { y = jtype
-> size [ 1 ] ; for ( b_kstr = 0 ; b_kstr < 8 ; b_kstr ++ ) { b_b [ b_kstr ]
= tmp_e [ b_kstr ] ; } b_bool = false ; minnanb = jtype -> size [ 1 ] ;
guard11 = false ; if ( ( int32_T ) y <= minnanb ) { b_kstr = ( int32_T ) y ;
minnanb = muIntScalarMin_sint32 ( minnanb , b_kstr ) ; guard11 = true ; }
else if ( jtype -> size [ 1 ] == 8 ) { minnanb = 8 ; guard11 = true ; } if (
guard11 ) { b_kstr = 1 ; do { exitg1 = 0 ; if ( b_kstr - 1 <= minnanb - 1 ) {
if ( tmp_g [ ( uint8_T ) jtype -> data [ b_kstr - 1 ] & 127 ] != tmp_g [ (
int32_T ) b_b [ b_kstr - 1 ] ] ) { exitg1 = 1 ; } else { b_kstr ++ ; } } else
{ b_bool = true ; exitg1 = 1 ; } } while ( exitg1 == 0 ) ; } if ( b_bool ) {
if ( jtype -> size [ 1 ] == 8 ) { b_k = 1 ; partial_match_size_idx_1 = 8 ;
for ( b_kstr = 0 ; b_kstr < 8 ; b_kstr ++ ) { b_b_p [ b_kstr ] = vstr [
b_kstr ] ; } } else { partial_match_size_idx_1 = 8 ; for ( b_kstr = 0 ;
b_kstr < 8 ; b_kstr ++ ) { partial_match_data [ b_kstr ] = vstr [ b_kstr ] ;
} matched = true ; b_k = 1 ; guard3 = true ; } } else { guard3 = true ; } }
else { guard3 = true ; } if ( guard3 ) { for ( b_kstr = 0 ; b_kstr < 9 ;
b_kstr ++ ) { b_vstr [ b_kstr ] = tmp_i [ b_kstr ] ; } if ( jtype -> size [ 1
] <= 9 ) { y = jtype -> size [ 1 ] ; for ( b_kstr = 0 ; b_kstr < 9 ; b_kstr
++ ) { b_b_p [ b_kstr ] = tmp_i [ b_kstr ] ; } b_bool = false ; minnanb =
jtype -> size [ 1 ] ; guard11 = false ; if ( ( int32_T ) y <= minnanb ) {
b_kstr = ( int32_T ) y ; minnanb = muIntScalarMin_sint32 ( minnanb , b_kstr )
; guard11 = true ; } else if ( jtype -> size [ 1 ] == 9 ) { minnanb = 9 ;
guard11 = true ; } if ( guard11 ) { b_kstr = 1 ; do { exitg1 = 0 ; if (
b_kstr - 1 <= minnanb - 1 ) { if ( tmp_g [ ( uint8_T ) jtype -> data [ b_kstr
- 1 ] & 127 ] != tmp_g [ ( int32_T ) b_b_p [ b_kstr - 1 ] ] ) { exitg1 = 1 ;
} else { b_kstr ++ ; } } else { b_bool = true ; exitg1 = 1 ; } } while (
exitg1 == 0 ) ; } if ( b_bool ) { if ( jtype -> size [ 1 ] == 9 ) { b_k = 1 ;
partial_match_size_idx_1 = 9 ; for ( b_kstr = 0 ; b_kstr < 9 ; b_kstr ++ ) {
b_b_p [ b_kstr ] = b_vstr [ b_kstr ] ; } } else { if ( ! matched ) {
partial_match_size_idx_1 = 9 ; for ( b_kstr = 0 ; b_kstr < 9 ; b_kstr ++ ) {
partial_match_data [ b_kstr ] = b_vstr [ b_kstr ] ; } } matched = true ; b_k
++ ; guard2 = true ; } } else { guard2 = true ; } } else { guard2 = true ; }
} if ( guard2 ) { for ( b_kstr = 0 ; b_kstr < 5 ; b_kstr ++ ) { c_vstr [
b_kstr ] = tmp_m [ b_kstr ] ; } if ( jtype -> size [ 1 ] <= 5 ) { y = jtype
-> size [ 1 ] ; for ( b_kstr = 0 ; b_kstr < 5 ; b_kstr ++ ) { b_b_e [ b_kstr
] = tmp_m [ b_kstr ] ; } b_bool = false ; minnanb = jtype -> size [ 1 ] ;
guard11 = false ; if ( ( int32_T ) y <= minnanb ) { b_kstr = ( int32_T ) y ;
minnanb = muIntScalarMin_sint32 ( minnanb , b_kstr ) ; guard11 = true ; }
else if ( jtype -> size [ 1 ] == 5 ) { minnanb = 5 ; guard11 = true ; } if (
guard11 ) { b_kstr = 1 ; do { exitg1 = 0 ; if ( b_kstr - 1 <= minnanb - 1 ) {
if ( tmp_g [ ( uint8_T ) jtype -> data [ b_kstr - 1 ] & 127 ] != tmp_g [ (
int32_T ) b_b_e [ b_kstr - 1 ] ] ) { exitg1 = 1 ; } else { b_kstr ++ ; } }
else { b_bool = true ; exitg1 = 1 ; } } while ( exitg1 == 0 ) ; } if ( b_bool
) { if ( jtype -> size [ 1 ] == 5 ) { b_k = 1 ; partial_match_size_idx_1 = 5
; for ( b_kstr = 0 ; b_kstr < 5 ; b_kstr ++ ) { b_b_p [ b_kstr ] = c_vstr [
b_kstr ] ; } } else { if ( ! matched ) { partial_match_size_idx_1 = 5 ; for (
b_kstr = 0 ; b_kstr < 5 ; b_kstr ++ ) { partial_match_data [ b_kstr ] =
c_vstr [ b_kstr ] ; } } b_k ++ ; guard1 = true ; } } else { guard1 = true ; }
} else { guard1 = true ; } } if ( guard1 ) { if ( b_k == 0 ) {
partial_match_size_idx_1 = 8 ; for ( b_kstr = 0 ; b_kstr < 8 ; b_kstr ++ ) {
b_b_p [ b_kstr ] = ' ' ; } } else { memcpy ( & b_b_p [ 0 ] , &
partial_match_data [ 0 ] , ( uint32_T ) partial_match_size_idx_1 * sizeof (
char_T ) ) ; } } if ( ( b_k == 0 ) || ( jtype -> size [ 1 ] == 0 ) ) {
partial_match_size_idx_1 = 8 ; for ( b_kstr = 0 ; b_kstr < 8 ; b_kstr ++ ) {
partial_match_data [ b_kstr ] = ' ' ; } } else { memcpy ( &
partial_match_data [ 0 ] , & b_b_p [ 0 ] , ( uint32_T )
partial_match_size_idx_1 * sizeof ( char_T ) ) ; } b_kstr = iobj_1 [ 1 ] .
Type -> size [ 0 ] * iobj_1 [ 1 ] . Type -> size [ 1 ] ; iobj_1 [ 1 ] . Type
-> size [ 0 ] = 1 ; iobj_1 [ 1 ] . Type -> size [ 1 ] =
partial_match_size_idx_1 ; gsven4ga0i ( iobj_1 [ 1 ] . Type , b_kstr ) ;
minnanb = partial_match_size_idx_1 - 1 ; for ( b_kstr = 0 ; b_kstr <= minnanb
; b_kstr ++ ) { iobj_1 [ 1 ] . Type -> data [ b_kstr ] = partial_match_data [
b_kstr ] ; } b_kstr = jtype -> size [ 0 ] * jtype -> size [ 1 ] ; jtype ->
size [ 0 ] = 1 ; jtype -> size [ 1 ] = iobj_1 [ 1 ] . Type -> size [ 1 ] ;
gsven4ga0i ( jtype , b_kstr ) ; minnanb = iobj_1 [ 1 ] . Type -> size [ 1 ] ;
for ( b_kstr = 0 ; b_kstr < minnanb ; b_kstr ++ ) { jtype -> data [ b_kstr ]
= iobj_1 [ 1 ] . Type -> data [ b_kstr ] ; } b_bool = false ; if ( jtype ->
size [ 1 ] != 8 ) { } else { b_kstr = 1 ; do { exitg1 = 0 ; if ( b_kstr - 1 <
8 ) { if ( jtype -> data [ b_kstr - 1 ] != vstr [ b_kstr - 1 ] ) { exitg1 = 1
; } else { b_kstr ++ ; } } else { b_bool = true ; exitg1 = 1 ; } } while (
exitg1 == 0 ) ; } if ( b_bool ) { y = 0.0 ; } else { for ( b_kstr = 0 ;
b_kstr < 9 ; b_kstr ++ ) { b_vstr [ b_kstr ] = tmp_i [ b_kstr ] ; } if (
jtype -> size [ 1 ] != 9 ) { } else { b_kstr = 1 ; do { exitg1 = 0 ; if (
b_kstr - 1 < 9 ) { if ( jtype -> data [ b_kstr - 1 ] != b_vstr [ b_kstr - 1 ]
) { exitg1 = 1 ; } else { b_kstr ++ ; } } else { b_bool = true ; exitg1 = 1 ;
} } while ( exitg1 == 0 ) ; } if ( b_bool ) { y = 1.0 ; } else { y = - 1.0 ;
} } switch ( ( int32_T ) y ) { case 0 : tmp [ 0 ] = 0 ; tmp [ 1 ] = 0 ; tmp [
2 ] = 1 ; tmp [ 3 ] = 0 ; tmp [ 4 ] = 0 ; tmp [ 5 ] = 0 ; for ( b_kstr = 0 ;
b_kstr < 6 ; b_kstr ++ ) { msubspace_data [ b_kstr ] = tmp [ b_kstr ] ; }
poslim_data [ 0 ] = - 3.1415926535897931 ; poslim_data [ 1 ] =
3.1415926535897931 ; iobj_1 [ 1 ] . VelocityNumber = 1.0 ; iobj_1 [ 1 ] .
PositionNumber = 1.0 ; iobj_1 [ 1 ] . JointAxisInternal [ 0 ] = 0.0 ; iobj_1
[ 1 ] . JointAxisInternal [ 1 ] = 0.0 ; iobj_1 [ 1 ] . JointAxisInternal [ 2
] = 1.0 ; break ; case 1 : tmp [ 0 ] = 0 ; tmp [ 1 ] = 0 ; tmp [ 2 ] = 0 ;
tmp [ 3 ] = 0 ; tmp [ 4 ] = 0 ; tmp [ 5 ] = 1 ; for ( b_kstr = 0 ; b_kstr < 6
; b_kstr ++ ) { msubspace_data [ b_kstr ] = tmp [ b_kstr ] ; } poslim_data [
0 ] = - 0.5 ; poslim_data [ 1 ] = 0.5 ; iobj_1 [ 1 ] . VelocityNumber = 1.0 ;
iobj_1 [ 1 ] . PositionNumber = 1.0 ; iobj_1 [ 1 ] . JointAxisInternal [ 0 ]
= 0.0 ; iobj_1 [ 1 ] . JointAxisInternal [ 1 ] = 0.0 ; iobj_1 [ 1 ] .
JointAxisInternal [ 2 ] = 1.0 ; break ; default : for ( b_kstr = 0 ; b_kstr <
6 ; b_kstr ++ ) { msubspace_data [ b_kstr ] = 0 ; } poslim_data [ 0 ] = 0.0 ;
poslim_data [ 1 ] = 0.0 ; iobj_1 [ 1 ] . VelocityNumber = 0.0 ; iobj_1 [ 1 ]
. PositionNumber = 0.0 ; iobj_1 [ 1 ] . JointAxisInternal [ 0 ] = 0.0 ;
iobj_1 [ 1 ] . JointAxisInternal [ 1 ] = 0.0 ; iobj_1 [ 1 ] .
JointAxisInternal [ 2 ] = 0.0 ; break ; } b_kstr = iobj_1 [ 1 ] .
MotionSubspace -> size [ 0 ] * iobj_1 [ 1 ] . MotionSubspace -> size [ 1 ] ;
iobj_1 [ 1 ] . MotionSubspace -> size [ 0 ] = 6 ; iobj_1 [ 1 ] .
MotionSubspace -> size [ 1 ] = 1 ; o4pyrzarz5 ( iobj_1 [ 1 ] . MotionSubspace
, b_kstr ) ; for ( b_kstr = 0 ; b_kstr < 6 ; b_kstr ++ ) { iobj_1 [ 1 ] .
MotionSubspace -> data [ b_kstr ] = msubspace_data [ b_kstr ] ; } b_kstr =
iobj_1 [ 1 ] . PositionLimitsInternal -> size [ 0 ] * iobj_1 [ 1 ] .
PositionLimitsInternal -> size [ 1 ] ; iobj_1 [ 1 ] . PositionLimitsInternal
-> size [ 0 ] = 1 ; iobj_1 [ 1 ] . PositionLimitsInternal -> size [ 1 ] = 2 ;
o4pyrzarz5 ( iobj_1 [ 1 ] . PositionLimitsInternal , b_kstr ) ; for ( b_kstr
= 0 ; b_kstr < 2 ; b_kstr ++ ) { iobj_1 [ 1 ] . PositionLimitsInternal ->
data [ b_kstr ] = poslim_data [ b_kstr ] ; } b_kstr = iobj_1 [ 1 ] .
HomePositionInternal -> size [ 0 ] ; iobj_1 [ 1 ] . HomePositionInternal ->
size [ 0 ] = 1 ; o4pyrzarz5 ( iobj_1 [ 1 ] . HomePositionInternal , b_kstr )
; iobj_1 [ 1 ] . HomePositionInternal -> data [ 0 ] = 0.0 ; b_kstr = jtype ->
size [ 0 ] * jtype -> size [ 1 ] ; jtype -> size [ 1 ] = obj_p ->
NameInternal -> size [ 1 ] ; gsven4ga0i ( jtype , b_kstr ) ; if ( jtype ->
size [ 1 ] != 0 ) { b_kstr = jtype -> size [ 0 ] * jtype -> size [ 1 ] ;
jtype -> size [ 0 ] = 1 ; jtype -> size [ 1 ] = obj_p -> NameInternal -> size
[ 1 ] ; gsven4ga0i ( jtype , b_kstr ) ; minnanb = obj_p -> NameInternal ->
size [ 1 ] ; for ( b_kstr = 0 ; b_kstr < minnanb ; b_kstr ++ ) { jtype ->
data [ b_kstr ] = obj_p -> NameInternal -> data [ b_kstr ] ; } if ( ! iobj_1
[ 1 ] . InTree ) { b_kstr = iobj_1 [ 1 ] . NameInternal -> size [ 0 ] *
iobj_1 [ 1 ] . NameInternal -> size [ 1 ] ; iobj_1 [ 1 ] . NameInternal ->
size [ 0 ] = 1 ; iobj_1 [ 1 ] . NameInternal -> size [ 1 ] = jtype -> size [
1 ] ; gsven4ga0i ( iobj_1 [ 1 ] . NameInternal , b_kstr ) ; minnanb = jtype
-> size [ 1 ] - 1 ; for ( b_kstr = 0 ; b_kstr <= minnanb ; b_kstr ++ ) {
iobj_1 [ 1 ] . NameInternal -> data [ b_kstr ] = jtype -> data [ b_kstr ] ; }
} } dqu5smbks1 ( & jtype ) ; b_k = obj_p -> PositionLimitsInternal -> size [
0 ] << 1 ; b_kstr = iobj_1 [ 1 ] . PositionLimitsInternal -> size [ 0 ] *
iobj_1 [ 1 ] . PositionLimitsInternal -> size [ 1 ] ; iobj_1 [ 1 ] .
PositionLimitsInternal -> size [ 0 ] = obj_p -> PositionLimitsInternal ->
size [ 0 ] ; iobj_1 [ 1 ] . PositionLimitsInternal -> size [ 1 ] = 2 ;
o4pyrzarz5 ( iobj_1 [ 1 ] . PositionLimitsInternal , b_kstr ) ; jolvb3jiwj (
& obj_i , 1 ) ; b_kstr = obj_i -> size [ 0 ] ; obj_i -> size [ 0 ] = b_k ;
o4pyrzarz5 ( obj_i , b_kstr ) ; for ( b_kstr = 0 ; b_kstr < b_k ; b_kstr ++ )
{ obj_i -> data [ b_kstr ] = obj_p -> PositionLimitsInternal -> data [ b_kstr
] ; } minnanb = obj_i -> size [ 0 ] ; for ( b_kstr = 0 ; b_kstr < minnanb ;
b_kstr ++ ) { iobj_1 [ 1 ] . PositionLimitsInternal -> data [ b_kstr ] =
obj_i -> data [ b_kstr ] ; } b_kstr = obj_i -> size [ 0 ] ; obj_i -> size [ 0
] = obj_p -> HomePositionInternal -> size [ 0 ] ; o4pyrzarz5 ( obj_i , b_kstr
) ; minnanb = obj_p -> HomePositionInternal -> size [ 0 ] ; for ( b_kstr = 0
; b_kstr < minnanb ; b_kstr ++ ) { obj_i -> data [ b_kstr ] = obj_p ->
HomePositionInternal -> data [ b_kstr ] ; } b_kstr = iobj_1 [ 1 ] .
HomePositionInternal -> size [ 0 ] ; iobj_1 [ 1 ] . HomePositionInternal ->
size [ 0 ] = obj_i -> size [ 0 ] ; o4pyrzarz5 ( iobj_1 [ 1 ] .
HomePositionInternal , b_kstr ) ; minnanb = obj_i -> size [ 0 ] ; for (
b_kstr = 0 ; b_kstr < minnanb ; b_kstr ++ ) { iobj_1 [ 1 ] .
HomePositionInternal -> data [ b_kstr ] = obj_i -> data [ b_kstr ] ; } y =
obj_p -> JointAxisInternal [ 0 ] ; obj_idx_1 = obj_p -> JointAxisInternal [ 1
] ; obj_idx_2 = obj_p -> JointAxisInternal [ 2 ] ; iobj_1 [ 1 ] .
JointAxisInternal [ 0 ] = y ; iobj_1 [ 1 ] . JointAxisInternal [ 1 ] =
obj_idx_1 ; iobj_1 [ 1 ] . JointAxisInternal [ 2 ] = obj_idx_2 ; b_k = 6 *
obj_p -> MotionSubspace -> size [ 1 ] ; b_kstr = iobj_1 [ 1 ] .
MotionSubspace -> size [ 0 ] * iobj_1 [ 1 ] . MotionSubspace -> size [ 1 ] ;
iobj_1 [ 1 ] . MotionSubspace -> size [ 0 ] = 6 ; iobj_1 [ 1 ] .
MotionSubspace -> size [ 1 ] = obj_p -> MotionSubspace -> size [ 1 ] ;
o4pyrzarz5 ( iobj_1 [ 1 ] . MotionSubspace , b_kstr ) ; b_kstr = obj_i ->
size [ 0 ] ; obj_i -> size [ 0 ] = b_k ; o4pyrzarz5 ( obj_i , b_kstr ) ; for
( b_kstr = 0 ; b_kstr < b_k ; b_kstr ++ ) { obj_i -> data [ b_kstr ] = obj_p
-> MotionSubspace -> data [ b_kstr ] ; } minnanb = obj_i -> size [ 0 ] ; for
( b_kstr = 0 ; b_kstr < minnanb ; b_kstr ++ ) { iobj_1 [ 1 ] . MotionSubspace
-> data [ b_kstr ] = obj_i -> data [ b_kstr ] ; } jvu10fuanp ( & obj_i ) ;
for ( b_kstr = 0 ; b_kstr < 16 ; b_kstr ++ ) { obj_m [ b_kstr ] = obj_p ->
JointToParentTransform [ b_kstr ] ; } for ( b_kstr = 0 ; b_kstr < 16 ; b_kstr
++ ) { iobj_1 [ 1 ] . JointToParentTransform [ b_kstr ] = obj_m [ b_kstr ] ;
} for ( b_kstr = 0 ; b_kstr < 16 ; b_kstr ++ ) { obj_m [ b_kstr ] = obj_p ->
ChildToJointTransform [ b_kstr ] ; } for ( b_kstr = 0 ; b_kstr < 16 ; b_kstr
++ ) { iobj_1 [ 1 ] . ChildToJointTransform [ b_kstr ] = obj_m [ b_kstr ] ; }
iobj_2 -> JointInternal = & iobj_1 [ 1 ] ; iobj_2 -> MassInternal = obj ->
MassInternal ; y = obj -> CenterOfMassInternal [ 0 ] ; obj_idx_1 = obj ->
CenterOfMassInternal [ 1 ] ; obj_idx_2 = obj -> CenterOfMassInternal [ 2 ] ;
iobj_2 -> CenterOfMassInternal [ 0 ] = y ; iobj_2 -> CenterOfMassInternal [ 1
] = obj_idx_1 ; iobj_2 -> CenterOfMassInternal [ 2 ] = obj_idx_2 ; for (
b_kstr = 0 ; b_kstr < 9 ; b_kstr ++ ) { obj_g [ b_kstr ] = obj ->
InertiaInternal [ b_kstr ] ; } for ( b_kstr = 0 ; b_kstr < 9 ; b_kstr ++ ) {
iobj_2 -> InertiaInternal [ b_kstr ] = obj_g [ b_kstr ] ; } for ( b_kstr = 0
; b_kstr < 36 ; b_kstr ++ ) { obj_j [ b_kstr ] = obj -> SpatialInertia [
b_kstr ] ; } for ( b_kstr = 0 ; b_kstr < 36 ; b_kstr ++ ) { iobj_2 ->
SpatialInertia [ b_kstr ] = obj_j [ b_kstr ] ; } obj_e = obj ->
CollisionsInternal ; newObj = oosvd5bnheg ( & iobj_0 [ 1 ] , obj_e ->
MaxElements ) ; newObj -> Size = obj_e -> Size ; y = obj_e -> Size ; minnanb
= ( int32_T ) y - 1 ; for ( b_k = 0 ; b_k <= minnanb ; b_k ++ ) {
obj_CollisionPrimitive = obj_e -> CollisionGeometries -> data [ b_k ] .
CollisionPrimitive ; for ( b_kstr = 0 ; b_kstr < 16 ; b_kstr ++ ) { obj_m [
b_kstr ] = obj_e -> CollisionGeometries -> data [ b_k ] . LocalPose [ b_kstr
] ; } for ( b_kstr = 0 ; b_kstr < 16 ; b_kstr ++ ) { obj_WorldPose [ b_kstr ]
= obj_e -> CollisionGeometries -> data [ b_k ] . WorldPose [ b_kstr ] ; }
obj_CollisionPrimitive = collisioncodegen_copyGeometry (
obj_CollisionPrimitive ) ; newObj -> CollisionGeometries -> data [ b_k ] .
CollisionPrimitive = obj_CollisionPrimitive ; for ( b_kstr = 0 ; b_kstr < 16
; b_kstr ++ ) { newObj -> CollisionGeometries -> data [ b_k ] . LocalPose [
b_kstr ] = obj_m [ b_kstr ] ; } for ( b_kstr = 0 ; b_kstr < 16 ; b_kstr ++ )
{ newObj -> CollisionGeometries -> data [ b_k ] . WorldPose [ b_kstr ] =
obj_WorldPose [ b_kstr ] ; } } iobj_2 -> CollisionsInternal = newObj ; return
newbody ; } static void nl2gamam3g ( i5s4hgzi5z * obj , cwp5dxx3gqu * bodyin
, const lg5jhfa1j5 * parentName , ejmcoi31fmi * iobj_0 , orkdduvnogx * iobj_1
, cwp5dxx3gqu * iobj_2 ) { cwp5dxx3gqu * body ; lg5jhfa1j5 * bname ;
orkdduvnogx * jnt ; real_T b_index ; real_T pid ; int32_T b_kstr ; int32_T
loop_ub ; char_T b [ 5 ] ; boolean_T b_bool ; static const char_T tmp [ 5 ] =
{ 'f' , 'i' , 'x' , 'e' , 'd' } ; int32_T exitg1 ; ek533x1it4 ( & bname , 2 )
; b_kstr = bname -> size [ 0 ] * bname -> size [ 1 ] ; bname -> size [ 0 ] =
1 ; bname -> size [ 1 ] = bodyin -> NameInternal -> size [ 1 ] ; gsven4ga0i (
bname , b_kstr ) ; loop_ub = bodyin -> NameInternal -> size [ 1 ] ; for (
b_kstr = 0 ; b_kstr < loop_ub ; b_kstr ++ ) { bname -> data [ b_kstr ] =
bodyin -> NameInternal -> data [ b_kstr ] ; } b3eyeozcmv ( obj , bname ) ;
pid = b3eyeozcmv ( obj , parentName ) ; b_index = obj -> NumBodies + 1.0 ;
body = oqyznkjth4 ( bodyin , & iobj_0 [ 0 ] , & iobj_1 [ 0 ] , iobj_2 ) ; obj
-> Bodies [ ( int32_T ) b_index - 1 ] = body ; body -> Index = b_index ; body
-> ParentIndex = pid ; body -> JointInternal -> InTree = true ; obj ->
NumBodies ++ ; jnt = body -> JointInternal ; b_kstr = bname -> size [ 0 ] *
bname -> size [ 1 ] ; bname -> size [ 0 ] = 1 ; bname -> size [ 1 ] = jnt ->
Type -> size [ 1 ] ; gsven4ga0i ( bname , b_kstr ) ; loop_ub = jnt -> Type ->
size [ 1 ] ; for ( b_kstr = 0 ; b_kstr < loop_ub ; b_kstr ++ ) { bname ->
data [ b_kstr ] = jnt -> Type -> data [ b_kstr ] ; } for ( b_kstr = 0 ;
b_kstr < 5 ; b_kstr ++ ) { b [ b_kstr ] = tmp [ b_kstr ] ; } b_bool = false ;
if ( bname -> size [ 1 ] != 5 ) { } else { b_kstr = 1 ; do { exitg1 = 0 ; if
( b_kstr - 1 < 5 ) { if ( bname -> data [ b_kstr - 1 ] != b [ b_kstr - 1 ] )
{ exitg1 = 1 ; } else { b_kstr ++ ; } } else { b_bool = true ; exitg1 = 1 ; }
} while ( exitg1 == 0 ) ; } dqu5smbks1 ( & bname ) ; if ( ! b_bool ) { obj ->
NumNonFixedBodies ++ ; jnt = body -> JointInternal ; b_kstr = ( int32_T )
body -> Index - 1 ; obj -> PositionDoFMap [ b_kstr ] = obj -> PositionNumber
+ 1.0 ; obj -> PositionDoFMap [ b_kstr + 7 ] = obj -> PositionNumber + jnt ->
PositionNumber ; jnt = body -> JointInternal ; b_kstr = ( int32_T ) body ->
Index - 1 ; obj -> VelocityDoFMap [ b_kstr ] = obj -> VelocityNumber + 1.0 ;
obj -> VelocityDoFMap [ b_kstr + 7 ] = obj -> VelocityNumber + jnt ->
VelocityNumber ; } else { b_kstr = ( int32_T ) body -> Index - 1 ; obj ->
PositionDoFMap [ b_kstr ] = 0.0 ; obj -> PositionDoFMap [ b_kstr + 7 ] = -
1.0 ; b_kstr = ( int32_T ) body -> Index - 1 ; obj -> VelocityDoFMap [ b_kstr
] = 0.0 ; obj -> VelocityDoFMap [ b_kstr + 7 ] = - 1.0 ; } jnt = body ->
JointInternal ; obj -> PositionNumber += jnt -> PositionNumber ; jnt = body
-> JointInternal ; obj -> VelocityNumber += jnt -> VelocityNumber ; } static
void lgtyg2ar0w ( grjfkdr5ak * obj , fykx3ceulsm * rigidbodytree ,
orkdduvnogx * iobj_0 , cwp5dxx3gqu * iobj_1 , ejmcoi31fmi * iobj_2 ,
i5s4hgzi5z * iobj_3 ) { void * obj_CollisionPrimitive ; cwp5dxx3gqu * body ;
cwp5dxx3gqu * parent ; ejmcoi31fmi * newObj ; ejmcoi31fmi * obj_p ;
lg5jhfa1j5 * bname ; lg5jhfa1j5 * switch_expression ; real_T obj_LocalPose [
16 ] ; real_T obj_WorldPose [ 16 ] ; real_T poslim_data [ 12 ] ; real_T b ;
real_T bid ; int32_T b_kstr ; int32_T loop_ub ; char_T b_e [ 9 ] ; char_T b_p
[ 8 ] ; int8_T msubspace_data [ 36 ] ; int8_T b_I [ 9 ] ; int8_T tmp [ 6 ] ;
boolean_T b_bool ; static const int8_T tmp_p [ 16 ] = { 1 , 0 , 0 , 0 , 0 , 1
, 0 , 0 , 0 , 0 , 1 , 0 , 0 , 0 , 0 , 1 } ; static const char_T tmp_e [ 8 ] =
{ 'b' , 'a' , 's' , 'e' , '_' , 'j' , 'n' , 't' } ; static const char_T tmp_i
[ 5 ] = { 'f' , 'i' , 'x' , 'e' , 'd' } ; static const char_T tmp_m [ 8 ] = {
'r' , 'e' , 'v' , 'o' , 'l' , 'u' , 't' , 'e' } ; static const char_T tmp_g [
9 ] = { 'p' , 'r' , 'i' , 's' , 'm' , 'a' , 't' , 'i' , 'c' } ; real_T
unusedExpr [ 5 ] ; int32_T exitg1 ; int32_T i ; boolean_T exitg2 ; i = iobj_3
-> Base . NameInternal -> size [ 0 ] * iobj_3 -> Base . NameInternal -> size
[ 1 ] ; iobj_3 -> Base . NameInternal -> size [ 0 ] = 1 ; iobj_3 -> Base .
NameInternal -> size [ 1 ] = 4 ; gsven4ga0i ( iobj_3 -> Base . NameInternal ,
i ) ; iobj_3 -> Base . NameInternal -> data [ 0 ] = 'b' ; iobj_3 -> Base .
NameInternal -> data [ 1 ] = 'a' ; iobj_3 -> Base . NameInternal -> data [ 2
] = 's' ; iobj_3 -> Base . NameInternal -> data [ 3 ] = 'e' ; iobj_3 ->
_pobj2 [ 0 ] . InTree = false ; for ( i = 0 ; i < 16 ; i ++ ) { iobj_3 ->
_pobj2 [ 0 ] . JointToParentTransform [ i ] = tmp_p [ i ] ; } for ( i = 0 ; i
< 16 ; i ++ ) { iobj_3 -> _pobj2 [ 0 ] . ChildToJointTransform [ i ] = tmp_p
[ i ] ; } i = iobj_3 -> _pobj2 [ 0 ] . NameInternal -> size [ 0 ] * iobj_3 ->
_pobj2 [ 0 ] . NameInternal -> size [ 1 ] ; iobj_3 -> _pobj2 [ 0 ] .
NameInternal -> size [ 0 ] = 1 ; iobj_3 -> _pobj2 [ 0 ] . NameInternal ->
size [ 1 ] = 8 ; gsven4ga0i ( iobj_3 -> _pobj2 [ 0 ] . NameInternal , i ) ;
for ( i = 0 ; i < 8 ; i ++ ) { iobj_3 -> _pobj2 [ 0 ] . NameInternal -> data
[ i ] = tmp_e [ i ] ; } i = iobj_3 -> _pobj2 [ 0 ] . Type -> size [ 0 ] *
iobj_3 -> _pobj2 [ 0 ] . Type -> size [ 1 ] ; iobj_3 -> _pobj2 [ 0 ] . Type
-> size [ 0 ] = 1 ; iobj_3 -> _pobj2 [ 0 ] . Type -> size [ 1 ] = 5 ;
gsven4ga0i ( iobj_3 -> _pobj2 [ 0 ] . Type , i ) ; for ( i = 0 ; i < 5 ; i ++
) { iobj_3 -> _pobj2 [ 0 ] . Type -> data [ i ] = tmp_i [ i ] ; } ek533x1it4
( & switch_expression , 2 ) ; i = switch_expression -> size [ 0 ] *
switch_expression -> size [ 1 ] ; switch_expression -> size [ 0 ] = 1 ;
switch_expression -> size [ 1 ] = iobj_3 -> _pobj2 [ 0 ] . Type -> size [ 1 ]
; gsven4ga0i ( switch_expression , i ) ; loop_ub = iobj_3 -> _pobj2 [ 0 ] .
Type -> size [ 1 ] ; for ( i = 0 ; i < loop_ub ; i ++ ) { switch_expression
-> data [ i ] = iobj_3 -> _pobj2 [ 0 ] . Type -> data [ i ] ; } for ( i = 0 ;
i < 8 ; i ++ ) { b_p [ i ] = tmp_m [ i ] ; } b_bool = false ; if (
switch_expression -> size [ 1 ] != 8 ) { } else { b_kstr = 1 ; do { exitg1 =
0 ; if ( b_kstr - 1 < 8 ) { if ( switch_expression -> data [ b_kstr - 1 ] !=
b_p [ b_kstr - 1 ] ) { exitg1 = 1 ; } else { b_kstr ++ ; } } else { b_bool =
true ; exitg1 = 1 ; } } while ( exitg1 == 0 ) ; } if ( b_bool ) { bid = 0.0 ;
} else { for ( i = 0 ; i < 9 ; i ++ ) { b_e [ i ] = tmp_g [ i ] ; } if (
switch_expression -> size [ 1 ] != 9 ) { } else { b_kstr = 1 ; do { exitg1 =
0 ; if ( b_kstr - 1 < 9 ) { if ( switch_expression -> data [ b_kstr - 1 ] !=
b_e [ b_kstr - 1 ] ) { exitg1 = 1 ; } else { b_kstr ++ ; } } else { b_bool =
true ; exitg1 = 1 ; } } while ( exitg1 == 0 ) ; } if ( b_bool ) { bid = 1.0 ;
} else { bid = - 1.0 ; } } switch ( ( int32_T ) bid ) { case 0 : tmp [ 0 ] =
0 ; tmp [ 1 ] = 0 ; tmp [ 2 ] = 1 ; tmp [ 3 ] = 0 ; tmp [ 4 ] = 0 ; tmp [ 5 ]
= 0 ; for ( i = 0 ; i < 6 ; i ++ ) { msubspace_data [ i ] = tmp [ i ] ; }
poslim_data [ 0 ] = - 3.1415926535897931 ; poslim_data [ 1 ] =
3.1415926535897931 ; iobj_3 -> _pobj2 [ 0 ] . VelocityNumber = 1.0 ; iobj_3
-> _pobj2 [ 0 ] . PositionNumber = 1.0 ; iobj_3 -> _pobj2 [ 0 ] .
JointAxisInternal [ 0 ] = 0.0 ; iobj_3 -> _pobj2 [ 0 ] . JointAxisInternal [
1 ] = 0.0 ; iobj_3 -> _pobj2 [ 0 ] . JointAxisInternal [ 2 ] = 1.0 ; break ;
case 1 : tmp [ 0 ] = 0 ; tmp [ 1 ] = 0 ; tmp [ 2 ] = 0 ; tmp [ 3 ] = 0 ; tmp
[ 4 ] = 0 ; tmp [ 5 ] = 1 ; for ( i = 0 ; i < 6 ; i ++ ) { msubspace_data [ i
] = tmp [ i ] ; } poslim_data [ 0 ] = - 0.5 ; poslim_data [ 1 ] = 0.5 ;
iobj_3 -> _pobj2 [ 0 ] . VelocityNumber = 1.0 ; iobj_3 -> _pobj2 [ 0 ] .
PositionNumber = 1.0 ; iobj_3 -> _pobj2 [ 0 ] . JointAxisInternal [ 0 ] = 0.0
; iobj_3 -> _pobj2 [ 0 ] . JointAxisInternal [ 1 ] = 0.0 ; iobj_3 -> _pobj2 [
0 ] . JointAxisInternal [ 2 ] = 1.0 ; break ; default : for ( i = 0 ; i < 6 ;
i ++ ) { msubspace_data [ i ] = 0 ; } poslim_data [ 0 ] = 0.0 ; poslim_data [
1 ] = 0.0 ; iobj_3 -> _pobj2 [ 0 ] . VelocityNumber = 0.0 ; iobj_3 -> _pobj2
[ 0 ] . PositionNumber = 0.0 ; iobj_3 -> _pobj2 [ 0 ] . JointAxisInternal [ 0
] = 0.0 ; iobj_3 -> _pobj2 [ 0 ] . JointAxisInternal [ 1 ] = 0.0 ; iobj_3 ->
_pobj2 [ 0 ] . JointAxisInternal [ 2 ] = 0.0 ; break ; } i = iobj_3 -> _pobj2
[ 0 ] . MotionSubspace -> size [ 0 ] * iobj_3 -> _pobj2 [ 0 ] .
MotionSubspace -> size [ 1 ] ; iobj_3 -> _pobj2 [ 0 ] . MotionSubspace ->
size [ 0 ] = 6 ; iobj_3 -> _pobj2 [ 0 ] . MotionSubspace -> size [ 1 ] = 1 ;
o4pyrzarz5 ( iobj_3 -> _pobj2 [ 0 ] . MotionSubspace , i ) ; for ( i = 0 ; i
< 6 ; i ++ ) { iobj_3 -> _pobj2 [ 0 ] . MotionSubspace -> data [ i ] =
msubspace_data [ i ] ; } i = iobj_3 -> _pobj2 [ 0 ] . PositionLimitsInternal
-> size [ 0 ] * iobj_3 -> _pobj2 [ 0 ] . PositionLimitsInternal -> size [ 1 ]
; iobj_3 -> _pobj2 [ 0 ] . PositionLimitsInternal -> size [ 0 ] = 1 ; iobj_3
-> _pobj2 [ 0 ] . PositionLimitsInternal -> size [ 1 ] = 2 ; o4pyrzarz5 (
iobj_3 -> _pobj2 [ 0 ] . PositionLimitsInternal , i ) ; for ( i = 0 ; i < 2 ;
i ++ ) { iobj_3 -> _pobj2 [ 0 ] . PositionLimitsInternal -> data [ i ] =
poslim_data [ i ] ; } i = iobj_3 -> _pobj2 [ 0 ] . HomePositionInternal ->
size [ 0 ] ; iobj_3 -> _pobj2 [ 0 ] . HomePositionInternal -> size [ 0 ] = 1
; o4pyrzarz5 ( iobj_3 -> _pobj2 [ 0 ] . HomePositionInternal , i ) ; for ( i
= 0 ; i < 1 ; i ++ ) { iobj_3 -> _pobj2 [ 0 ] . HomePositionInternal -> data
[ 0 ] = 0.0 ; } iobj_3 -> Base . JointInternal = & iobj_3 -> _pobj2 [ 0 ] ;
iobj_3 -> Base . Index = - 1.0 ; iobj_3 -> Base . ParentIndex = - 1.0 ;
iobj_3 -> Base . MassInternal = 1.0 ; iobj_3 -> Base . CenterOfMassInternal [
0 ] = 0.0 ; iobj_3 -> Base . CenterOfMassInternal [ 1 ] = 0.0 ; iobj_3 ->
Base . CenterOfMassInternal [ 2 ] = 0.0 ; for ( i = 0 ; i < 9 ; i ++ ) { b_I
[ i ] = 0 ; } b_I [ 0 ] = 1 ; b_I [ 4 ] = 1 ; b_I [ 8 ] = 1 ; for ( i = 0 ; i
< 9 ; i ++ ) { iobj_3 -> Base . InertiaInternal [ i ] = b_I [ i ] ; } for ( i
= 0 ; i < 36 ; i ++ ) { msubspace_data [ i ] = 0 ; } for ( b_kstr = 0 ;
b_kstr < 6 ; b_kstr ++ ) { msubspace_data [ b_kstr + 6 * b_kstr ] = 1 ; } for
( i = 0 ; i < 36 ; i ++ ) { iobj_3 -> Base . SpatialInertia [ i ] =
msubspace_data [ i ] ; } iobj_3 -> Base . CollisionsInternal = oosvd5bnheg (
& iobj_3 -> _pobj1 [ 0 ] , 0.0 ) ; iobj_3 -> Base . matlabCodegenIsDeleted =
false ; iobj_3 -> Base . Index = 0.0 ; op4fr1mwv4 ( unusedExpr ) ; iobj_3 ->
Bodies [ 0 ] = o2vdpxadfa ( & ( & ( & iobj_3 -> _pobj0 [ 0 ] ) [ 0 ] ) [ 0 ]
, & ( & ( & iobj_3 -> _pobj1 [ 1 ] ) [ 0 ] ) [ 0 ] , & ( & ( & iobj_3 ->
_pobj2 [ 1 ] ) [ 0 ] ) [ 0 ] ) ; iobj_3 -> Bodies [ 1 ] = jwk1ippo5j ( & ( &
( & iobj_3 -> _pobj0 [ 0 ] ) [ 0 ] ) [ 1 ] , & ( & ( & iobj_3 -> _pobj1 [ 1 ]
) [ 0 ] ) [ 1 ] , & ( & ( & iobj_3 -> _pobj2 [ 1 ] ) [ 0 ] ) [ 1 ] ) ; iobj_3
-> Bodies [ 2 ] = eaasm1dykq ( & ( & ( & iobj_3 -> _pobj0 [ 0 ] ) [ 0 ] ) [ 2
] , & ( & ( & iobj_3 -> _pobj1 [ 1 ] ) [ 0 ] ) [ 2 ] , & ( & ( & iobj_3 ->
_pobj2 [ 1 ] ) [ 0 ] ) [ 2 ] ) ; iobj_3 -> Bodies [ 3 ] = h10rtdjox1 ( & ( &
( & iobj_3 -> _pobj0 [ 0 ] ) [ 0 ] ) [ 3 ] , & ( & ( & iobj_3 -> _pobj1 [ 1 ]
) [ 0 ] ) [ 3 ] , & ( & ( & iobj_3 -> _pobj2 [ 1 ] ) [ 0 ] ) [ 3 ] ) ; iobj_3
-> Bodies [ 4 ] = pyoyrn1dx4 ( & ( & ( & iobj_3 -> _pobj0 [ 0 ] ) [ 0 ] ) [ 4
] , & ( & ( & iobj_3 -> _pobj1 [ 1 ] ) [ 0 ] ) [ 4 ] , & ( & ( & iobj_3 ->
_pobj2 [ 1 ] ) [ 0 ] ) [ 4 ] ) ; iobj_3 -> Bodies [ 5 ] = fx2h4p5emg ( & ( &
( & iobj_3 -> _pobj0 [ 0 ] ) [ 0 ] ) [ 5 ] , & ( & ( & iobj_3 -> _pobj1 [ 1 ]
) [ 0 ] ) [ 5 ] , & ( & ( & iobj_3 -> _pobj2 [ 1 ] ) [ 0 ] ) [ 5 ] ) ; iobj_3
-> Bodies [ 6 ] = jq00jcy14q ( & ( & ( & iobj_3 -> _pobj0 [ 0 ] ) [ 0 ] ) [ 6
] , & ( & ( & iobj_3 -> _pobj1 [ 1 ] ) [ 0 ] ) [ 6 ] , & ( & ( & iobj_3 ->
_pobj2 [ 1 ] ) [ 0 ] ) [ 6 ] ) ; iobj_3 -> NumBodies = 0.0 ; iobj_3 ->
NumNonFixedBodies = 0.0 ; iobj_3 -> PositionNumber = 0.0 ; iobj_3 ->
VelocityNumber = 0.0 ; op4fr1mwv4 ( unusedExpr ) ; for ( i = 0 ; i < 7 ; i ++
) { iobj_3 -> PositionDoFMap [ i ] = 0.0 ; } for ( i = 0 ; i < 7 ; i ++ ) {
iobj_3 -> PositionDoFMap [ i + 7 ] = - 1.0 ; } for ( i = 0 ; i < 7 ; i ++ ) {
iobj_3 -> VelocityDoFMap [ i ] = 0.0 ; } for ( i = 0 ; i < 7 ; i ++ ) {
iobj_3 -> VelocityDoFMap [ i + 7 ] = - 1.0 ; } iobj_3 ->
matlabCodegenIsDeleted = false ; i = switch_expression -> size [ 0 ] *
switch_expression -> size [ 1 ] ; switch_expression -> size [ 0 ] = 1 ;
switch_expression -> size [ 1 ] = rigidbodytree -> Base . NameInternal ->
size [ 1 ] ; gsven4ga0i ( switch_expression , i ) ; loop_ub = rigidbodytree
-> Base . NameInternal -> size [ 1 ] ; for ( i = 0 ; i < loop_ub ; i ++ ) {
switch_expression -> data [ i ] = rigidbodytree -> Base . NameInternal ->
data [ i ] ; } bid = - 1.0 ; ek533x1it4 ( & bname , 2 ) ; i = bname -> size [
0 ] * bname -> size [ 1 ] ; bname -> size [ 0 ] = 1 ; bname -> size [ 1 ] =
iobj_3 -> Base . NameInternal -> size [ 1 ] ; gsven4ga0i ( bname , i ) ;
loop_ub = iobj_3 -> Base . NameInternal -> size [ 1 ] ; for ( i = 0 ; i <
loop_ub ; i ++ ) { bname -> data [ i ] = iobj_3 -> Base . NameInternal ->
data [ i ] ; } if ( ndrymnz2f0 ( bname , switch_expression ) ) { bid = 0.0 ;
} else { b = iobj_3 -> NumBodies ; b_kstr = 0 ; exitg2 = false ; while ( ( !
exitg2 ) && ( b_kstr <= ( int32_T ) b - 1 ) ) { body = iobj_3 -> Bodies [
b_kstr ] ; i = bname -> size [ 0 ] * bname -> size [ 1 ] ; bname -> size [ 0
] = 1 ; bname -> size [ 1 ] = body -> NameInternal -> size [ 1 ] ; gsven4ga0i
( bname , i ) ; loop_ub = body -> NameInternal -> size [ 1 ] ; for ( i = 0 ;
i < loop_ub ; i ++ ) { bname -> data [ i ] = body -> NameInternal -> data [ i
] ; } if ( ndrymnz2f0 ( bname , switch_expression ) ) { bid = ( real_T )
b_kstr + 1.0 ; exitg2 = true ; } else { b_kstr ++ ; } } } if ( ( ! ( bid ==
0.0 ) ) && ( bid < 0.0 ) ) { i = iobj_3 -> Base . NameInternal -> size [ 0 ]
* iobj_3 -> Base . NameInternal -> size [ 1 ] ; iobj_3 -> Base . NameInternal
-> size [ 0 ] = 1 ; iobj_3 -> Base . NameInternal -> size [ 1 ] =
switch_expression -> size [ 1 ] ; gsven4ga0i ( iobj_3 -> Base . NameInternal
, i ) ; loop_ub = switch_expression -> size [ 1 ] - 1 ; for ( i = 0 ; i <=
loop_ub ; i ++ ) { iobj_3 -> Base . NameInternal -> data [ i ] =
switch_expression -> data [ i ] ; } } dqu5smbks1 ( & switch_expression ) ;
obj_p = rigidbodytree -> Base . CollisionsInternal ; newObj = oosvd5bnheg ( &
( & iobj_2 [ 0 ] ) [ 0 ] , obj_p -> MaxElements ) ; newObj -> Size = obj_p ->
Size ; b = obj_p -> Size ; loop_ub = ( int32_T ) b - 1 ; for ( b_kstr = 0 ;
b_kstr <= loop_ub ; b_kstr ++ ) { obj_CollisionPrimitive = obj_p ->
CollisionGeometries -> data [ b_kstr ] . CollisionPrimitive ; for ( i = 0 ; i
< 16 ; i ++ ) { obj_LocalPose [ i ] = obj_p -> CollisionGeometries -> data [
b_kstr ] . LocalPose [ i ] ; } for ( i = 0 ; i < 16 ; i ++ ) { obj_WorldPose
[ i ] = obj_p -> CollisionGeometries -> data [ b_kstr ] . WorldPose [ i ] ; }
obj_CollisionPrimitive = collisioncodegen_copyGeometry (
obj_CollisionPrimitive ) ; newObj -> CollisionGeometries -> data [ b_kstr ] .
CollisionPrimitive = obj_CollisionPrimitive ; for ( i = 0 ; i < 16 ; i ++ ) {
newObj -> CollisionGeometries -> data [ b_kstr ] . LocalPose [ i ] =
obj_LocalPose [ i ] ; } for ( i = 0 ; i < 16 ; i ++ ) { newObj ->
CollisionGeometries -> data [ b_kstr ] . WorldPose [ i ] = obj_WorldPose [ i
] ; } } iobj_3 -> Base . CollisionsInternal = newObj ; if ( rigidbodytree ->
NumBodies >= 1.0 ) { body = rigidbodytree -> Bodies [ 0 ] ; bid = body ->
ParentIndex ; if ( bid > 0.0 ) { parent = rigidbodytree -> Bodies [ ( int32_T
) bid - 1 ] ; } else { parent = & rigidbodytree -> Base ; } i = bname -> size
[ 0 ] * bname -> size [ 1 ] ; bname -> size [ 0 ] = 1 ; bname -> size [ 1 ] =
parent -> NameInternal -> size [ 1 ] ; gsven4ga0i ( bname , i ) ; loop_ub =
parent -> NameInternal -> size [ 1 ] ; for ( i = 0 ; i < loop_ub ; i ++ ) {
bname -> data [ i ] = parent -> NameInternal -> data [ i ] ; } nl2gamam3g (
iobj_3 , body , bname , & ( & iobj_2 [ 0 ] ) [ 1 ] , & ( & iobj_0 [ 0 ] ) [ 0
] , & ( & iobj_1 [ 0 ] ) [ 0 ] ) ; } if ( rigidbodytree -> NumBodies >= 2.0 )
{ body = rigidbodytree -> Bodies [ 1 ] ; bid = body -> ParentIndex ; if ( bid
> 0.0 ) { parent = rigidbodytree -> Bodies [ ( int32_T ) bid - 1 ] ; } else {
parent = & rigidbodytree -> Base ; } i = bname -> size [ 0 ] * bname -> size
[ 1 ] ; bname -> size [ 0 ] = 1 ; bname -> size [ 1 ] = parent ->
NameInternal -> size [ 1 ] ; gsven4ga0i ( bname , i ) ; loop_ub = parent ->
NameInternal -> size [ 1 ] ; for ( i = 0 ; i < loop_ub ; i ++ ) { bname ->
data [ i ] = parent -> NameInternal -> data [ i ] ; } nl2gamam3g ( iobj_3 ,
body , bname , & ( & iobj_2 [ 0 ] ) [ 3 ] , & ( & iobj_0 [ 0 ] ) [ 2 ] , & (
& iobj_1 [ 0 ] ) [ 1 ] ) ; } if ( rigidbodytree -> NumBodies >= 3.0 ) { body
= rigidbodytree -> Bodies [ 2 ] ; bid = body -> ParentIndex ; if ( bid > 0.0
) { parent = rigidbodytree -> Bodies [ ( int32_T ) bid - 1 ] ; } else {
parent = & rigidbodytree -> Base ; } i = bname -> size [ 0 ] * bname -> size
[ 1 ] ; bname -> size [ 0 ] = 1 ; bname -> size [ 1 ] = parent ->
NameInternal -> size [ 1 ] ; gsven4ga0i ( bname , i ) ; loop_ub = parent ->
NameInternal -> size [ 1 ] ; for ( i = 0 ; i < loop_ub ; i ++ ) { bname ->
data [ i ] = parent -> NameInternal -> data [ i ] ; } nl2gamam3g ( iobj_3 ,
body , bname , & ( & iobj_2 [ 0 ] ) [ 5 ] , & ( & iobj_0 [ 0 ] ) [ 4 ] , & (
& iobj_1 [ 0 ] ) [ 2 ] ) ; } if ( rigidbodytree -> NumBodies >= 4.0 ) { body
= rigidbodytree -> Bodies [ 3 ] ; bid = body -> ParentIndex ; if ( bid > 0.0
) { parent = rigidbodytree -> Bodies [ ( int32_T ) bid - 1 ] ; } else {
parent = & rigidbodytree -> Base ; } i = bname -> size [ 0 ] * bname -> size
[ 1 ] ; bname -> size [ 0 ] = 1 ; bname -> size [ 1 ] = parent ->
NameInternal -> size [ 1 ] ; gsven4ga0i ( bname , i ) ; loop_ub = parent ->
NameInternal -> size [ 1 ] ; for ( i = 0 ; i < loop_ub ; i ++ ) { bname ->
data [ i ] = parent -> NameInternal -> data [ i ] ; } nl2gamam3g ( iobj_3 ,
body , bname , & ( & iobj_2 [ 0 ] ) [ 7 ] , & ( & iobj_0 [ 0 ] ) [ 6 ] , & (
& iobj_1 [ 0 ] ) [ 3 ] ) ; } if ( rigidbodytree -> NumBodies >= 5.0 ) { body
= rigidbodytree -> Bodies [ 4 ] ; bid = body -> ParentIndex ; if ( bid > 0.0
) { parent = rigidbodytree -> Bodies [ ( int32_T ) bid - 1 ] ; } else {
parent = & rigidbodytree -> Base ; } i = bname -> size [ 0 ] * bname -> size
[ 1 ] ; bname -> size [ 0 ] = 1 ; bname -> size [ 1 ] = parent ->
NameInternal -> size [ 1 ] ; gsven4ga0i ( bname , i ) ; loop_ub = parent ->
NameInternal -> size [ 1 ] ; for ( i = 0 ; i < loop_ub ; i ++ ) { bname ->
data [ i ] = parent -> NameInternal -> data [ i ] ; } nl2gamam3g ( iobj_3 ,
body , bname , & ( & iobj_2 [ 0 ] ) [ 9 ] , & ( & iobj_0 [ 0 ] ) [ 8 ] , & (
& iobj_1 [ 0 ] ) [ 4 ] ) ; } if ( rigidbodytree -> NumBodies >= 6.0 ) { body
= rigidbodytree -> Bodies [ 5 ] ; bid = body -> ParentIndex ; if ( bid > 0.0
) { parent = rigidbodytree -> Bodies [ ( int32_T ) bid - 1 ] ; } else {
parent = & rigidbodytree -> Base ; } i = bname -> size [ 0 ] * bname -> size
[ 1 ] ; bname -> size [ 0 ] = 1 ; bname -> size [ 1 ] = parent ->
NameInternal -> size [ 1 ] ; gsven4ga0i ( bname , i ) ; loop_ub = parent ->
NameInternal -> size [ 1 ] ; for ( i = 0 ; i < loop_ub ; i ++ ) { bname ->
data [ i ] = parent -> NameInternal -> data [ i ] ; } nl2gamam3g ( iobj_3 ,
body , bname , & ( & iobj_2 [ 0 ] ) [ 11 ] , & ( & iobj_0 [ 0 ] ) [ 10 ] , &
( & iobj_1 [ 0 ] ) [ 5 ] ) ; } if ( rigidbodytree -> NumBodies >= 7.0 ) {
body = rigidbodytree -> Bodies [ 6 ] ; bid = body -> ParentIndex ; if ( bid >
0.0 ) { parent = rigidbodytree -> Bodies [ ( int32_T ) bid - 1 ] ; } else {
parent = & rigidbodytree -> Base ; } i = bname -> size [ 0 ] * bname -> size
[ 1 ] ; bname -> size [ 0 ] = 1 ; bname -> size [ 1 ] = parent ->
NameInternal -> size [ 1 ] ; gsven4ga0i ( bname , i ) ; loop_ub = parent ->
NameInternal -> size [ 1 ] ; for ( i = 0 ; i < loop_ub ; i ++ ) { bname ->
data [ i ] = parent -> NameInternal -> data [ i ] ; } nl2gamam3g ( iobj_3 ,
body , bname , & ( & iobj_2 [ 0 ] ) [ 13 ] , & ( & iobj_0 [ 0 ] ) [ 12 ] , &
( & iobj_1 [ 0 ] ) [ 6 ] ) ; } dqu5smbks1 ( & bname ) ; obj ->
RigidBodyTreeInternal = iobj_3 ; } static void hhsrjmrs4eb ( pd0uxzf3xo * obj
) { oy2a1akvcj * obj_p ; int32_T i ; static const char_T tmp [ 22 ] = { 'B' ,
'F' , 'G' , 'S' , 'G' , 'r' , 'a' , 'd' , 'i' , 'e' , 'n' , 't' , 'P' , 'r' ,
'o' , 'j' , 'e' , 'c' , 't' , 'i' , 'o' , 'n' } ; static const nm2ck2vibf
tmp_p = { 0.0 , 0.0 } ; obj -> isInitialized = 1 ; lholsk5s1e ( & obj ->
TreeInternal ) ; obj -> IKInternal . isInitialized = 0 ; lgtyg2ar0w ( & obj
-> IKInternal , & obj -> TreeInternal , & ( & ( & ( & obj -> IKInternal .
_pobj1 [ 0 ] ) [ 0 ] ) [ 0 ] ) [ 0 ] , & ( & ( & ( & obj -> IKInternal .
_pobj2 [ 0 ] ) [ 0 ] ) [ 0 ] ) [ 0 ] , & ( & ( & ( & obj -> IKInternal .
_pobj3 [ 0 ] ) [ 0 ] ) [ 0 ] ) [ 0 ] , & obj -> IKInternal . _pobj4 ) ; obj
-> IKInternal . _pobj5 . MaxNumIteration = 1500.0 ; obj -> IKInternal .
_pobj5 . MaxTime = 10.0 ; obj -> IKInternal . _pobj5 . GradientTolerance =
1.0E-7 ; obj -> IKInternal . _pobj5 . SolutionTolerance = 1.0E-6 ; obj ->
IKInternal . _pobj5 . ArmijoRuleBeta = 0.4 ; obj -> IKInternal . _pobj5 .
ArmijoRuleSigma = 1.0E-5 ; obj -> IKInternal . _pobj5 . ConstraintsOn = true
; obj -> IKInternal . _pobj5 . RandomRestart = true ; obj -> IKInternal .
_pobj5 . StepTolerance = 1.0E-14 ; for ( i = 0 ; i < 22 ; i ++ ) { obj ->
IKInternal . _pobj5 . Name [ i ] = tmp [ i ] ; } obj -> IKInternal . _pobj5 .
ConstraintMatrix -> size [ 0 ] = 0 ; obj -> IKInternal . _pobj5 .
ConstraintMatrix -> size [ 1 ] = 0 ; obj -> IKInternal . _pobj5 .
ConstraintBound -> size [ 0 ] = 0 ; obj -> IKInternal . _pobj5 . TimeObj .
StartTime = tmp_p ; obj -> IKInternal . _pobj5 . TimeObjInternal . StartTime
= tmp_p ; obj -> IKInternal . _pobj5 . matlabCodegenIsDeleted = false ; obj
-> IKInternal . Solver = & obj -> IKInternal . _pobj5 ; obj_p = obj ->
IKInternal . Solver ; obj_p -> MaxNumIteration = 50.0 ; obj_p -> MaxTime =
3.0 ; obj_p -> GradientTolerance = 1.0E-7 ; obj_p -> SolutionTolerance =
1.0E-6 ; obj_p -> ConstraintsOn = true ; obj_p -> RandomRestart = false ;
obj_p -> StepTolerance = 1.0E-12 ; obj -> IKInternal . matlabCodegenIsDeleted
= false ; } static void aoaiqiehai ( orkdduvnog * pStruct ) { ek533x1it4 ( &
pStruct -> Type , 2 ) ; } static void i0ncmbhzacb ( e2t4yts01i * * pEmxArray
, int32_T numDimensions ) { e2t4yts01i * emxArray ; int32_T i ; * pEmxArray =
( e2t4yts01i * ) malloc ( sizeof ( e2t4yts01i ) ) ; emxArray = * pEmxArray ;
emxArray -> data = ( jy5nolvw3p * ) NULL ; emxArray -> numDimensions =
numDimensions ; emxArray -> size = ( int32_T * ) malloc ( sizeof ( int32_T )
* ( uint32_T ) numDimensions ) ; emxArray -> allocatedSize = 0 ; emxArray ->
canFreeData = true ; for ( i = 0 ; i < numDimensions ; i ++ ) { emxArray ->
size [ i ] = 0 ; } } static void ohoqjjlm0v ( ejmcoi31fm * pStruct ) {
i0ncmbhzacb ( & pStruct -> CollisionGeometries , 2 ) ; } static void
ekbmduyfr3 ( cwp5dxx3gq * pStruct ) { ek533x1it4 ( & pStruct -> NameInternal
, 2 ) ; aoaiqiehai ( & pStruct -> JointInternal ) ; ohoqjjlm0v ( & pStruct ->
CollisionsInternal ) ; } static void px5amfnxlsozzl ( cwp5dxx3gq pMatrix [ 14
] ) { int32_T i ; for ( i = 0 ; i < 14 ; i ++ ) { ekbmduyfr3 ( & pMatrix [ i
] ) ; } } static void dini51be1ginqjn ( fykx3ceuls * pStruct ) { ekbmduyfr3 (
& pStruct -> Base ) ; px5amfnxlsozzl ( pStruct -> _pobj0 ) ; } static void
iyq5qy4rtit ( aivhh1v50g * pStruct ) { dini51be1ginqjn ( & pStruct ->
TreeInternal ) ; } static void fs3lm0fx5y ( e2t4yts01i * emxArray , int32_T
oldNumel ) { int32_T i ; int32_T newNumel ; void * newData ; if ( oldNumel <
0 ) { oldNumel = 0 ; } newNumel = 1 ; for ( i = 0 ; i < emxArray ->
numDimensions ; i ++ ) { newNumel *= emxArray -> size [ i ] ; } if ( newNumel
> emxArray -> allocatedSize ) { i = emxArray -> allocatedSize ; if ( i < 16 )
{ i = 16 ; } while ( i < newNumel ) { if ( i > 1073741823 ) { i = MAX_int32_T
; } else { i <<= 1 ; } } newData = calloc ( ( uint32_T ) i , sizeof (
jy5nolvw3p ) ) ; if ( emxArray -> data != NULL ) { memcpy ( newData ,
emxArray -> data , sizeof ( jy5nolvw3p ) * ( uint32_T ) oldNumel ) ; if (
emxArray -> canFreeData ) { free ( emxArray -> data ) ; } } emxArray -> data
= ( jy5nolvw3p * ) newData ; emxArray -> allocatedSize = i ; emxArray ->
canFreeData = true ; } } static void fyinghe01v5 ( e2t4yts01i * * pEmxArray )
{ if ( * pEmxArray != ( e2t4yts01i * ) NULL ) { if ( ( ( * pEmxArray ) ->
data != ( jy5nolvw3p * ) NULL ) && ( * pEmxArray ) -> canFreeData ) { free (
( * pEmxArray ) -> data ) ; } free ( ( * pEmxArray ) -> size ) ; free ( *
pEmxArray ) ; * pEmxArray = ( e2t4yts01i * ) NULL ; } } static ejmcoi31fm *
oosvd5bnhe ( ejmcoi31fm * obj ) { void * defaultCollisionObj_GeometryInternal
; e2t4yts01i * e ; ejmcoi31fm * b_obj ; real_T c ; int32_T b_i ; int32_T d ;
obj -> Size = 0.0 ; b_obj = obj ; obj -> MaxElements = 0.0 ; i0ncmbhzacb ( &
e , 2 ) ; b_i = e -> size [ 0 ] * e -> size [ 1 ] ; e -> size [ 1 ] = (
int32_T ) obj -> MaxElements ; fs3lm0fx5y ( e , b_i ) ; b_i = obj ->
CollisionGeometries -> size [ 0 ] * obj -> CollisionGeometries -> size [ 1 ]
; obj -> CollisionGeometries -> size [ 0 ] = 1 ; obj -> CollisionGeometries
-> size [ 1 ] = e -> size [ 1 ] ; fyinghe01v5 ( & e ) ; fs3lm0fx5y ( obj ->
CollisionGeometries , b_i ) ; defaultCollisionObj_GeometryInternal = NULL ; c
= obj -> MaxElements ; d = ( int32_T ) c - 1 ; for ( b_i = 0 ; b_i <= d ; b_i
++ ) { obj -> CollisionGeometries -> data [ b_i ] . CollisionPrimitive =
defaultCollisionObj_GeometryInternal ; } obj -> matlabCodegenIsDeleted =
false ; return b_obj ; } static cwp5dxx3gq * bk5rrjfzpl ( cwp5dxx3gq * obj )
{ cwp5dxx3gq * b_obj ; lg5jhfa1j5 * switch_expression ; int32_T b_kstr ;
int32_T loop_ub ; char_T b_p [ 9 ] ; char_T b [ 8 ] ; boolean_T b_bool ;
static const char_T tmp [ 10 ] = { 'd' , 'u' , 'm' , 'm' , 'y' , 'b' , 'o' ,
'd' , 'y' , '5' } ; static const char_T tmp_p [ 5 ] = { 'f' , 'i' , 'x' , 'e'
, 'd' } ; static const char_T tmp_e [ 8 ] = { 'r' , 'e' , 'v' , 'o' , 'l' ,
'u' , 't' , 'e' } ; static const char_T tmp_i [ 9 ] = { 'p' , 'r' , 'i' , 's'
, 'm' , 'a' , 't' , 'i' , 'c' } ; int32_T exitg1 ; b_obj = obj ; b_kstr = obj
-> NameInternal -> size [ 0 ] * obj -> NameInternal -> size [ 1 ] ; obj ->
NameInternal -> size [ 0 ] = 1 ; obj -> NameInternal -> size [ 1 ] = 10 ;
gsven4ga0i ( obj -> NameInternal , b_kstr ) ; for ( b_kstr = 0 ; b_kstr < 10
; b_kstr ++ ) { obj -> NameInternal -> data [ b_kstr ] = tmp [ b_kstr ] ; }
b_kstr = obj -> JointInternal . Type -> size [ 0 ] * obj -> JointInternal .
Type -> size [ 1 ] ; obj -> JointInternal . Type -> size [ 0 ] = 1 ; obj ->
JointInternal . Type -> size [ 1 ] = 5 ; gsven4ga0i ( obj -> JointInternal .
Type , b_kstr ) ; for ( b_kstr = 0 ; b_kstr < 5 ; b_kstr ++ ) { obj ->
JointInternal . Type -> data [ b_kstr ] = tmp_p [ b_kstr ] ; } ek533x1it4 ( &
switch_expression , 2 ) ; b_kstr = switch_expression -> size [ 0 ] *
switch_expression -> size [ 1 ] ; switch_expression -> size [ 0 ] = 1 ;
switch_expression -> size [ 1 ] = obj -> JointInternal . Type -> size [ 1 ] ;
gsven4ga0i ( switch_expression , b_kstr ) ; loop_ub = obj -> JointInternal .
Type -> size [ 1 ] ; for ( b_kstr = 0 ; b_kstr < loop_ub ; b_kstr ++ ) {
switch_expression -> data [ b_kstr ] = obj -> JointInternal . Type -> data [
b_kstr ] ; } for ( b_kstr = 0 ; b_kstr < 8 ; b_kstr ++ ) { b [ b_kstr ] =
tmp_e [ b_kstr ] ; } b_bool = false ; if ( switch_expression -> size [ 1 ] !=
8 ) { } else { b_kstr = 1 ; do { exitg1 = 0 ; if ( b_kstr - 1 < 8 ) { if (
switch_expression -> data [ b_kstr - 1 ] != b [ b_kstr - 1 ] ) { exitg1 = 1 ;
} else { b_kstr ++ ; } } else { b_bool = true ; exitg1 = 1 ; } } while (
exitg1 == 0 ) ; } if ( b_bool ) { b_kstr = 0 ; } else { for ( b_kstr = 0 ;
b_kstr < 9 ; b_kstr ++ ) { b_p [ b_kstr ] = tmp_i [ b_kstr ] ; } if (
switch_expression -> size [ 1 ] != 9 ) { } else { b_kstr = 1 ; do { exitg1 =
0 ; if ( b_kstr - 1 < 9 ) { if ( switch_expression -> data [ b_kstr - 1 ] !=
b_p [ b_kstr - 1 ] ) { exitg1 = 1 ; } else { b_kstr ++ ; } } else { b_bool =
true ; exitg1 = 1 ; } } while ( exitg1 == 0 ) ; } if ( b_bool ) { b_kstr = 1
; } else { b_kstr = - 1 ; } } dqu5smbks1 ( & switch_expression ) ; switch (
b_kstr ) { case 0 : obj -> JointInternal . PositionNumber = 1.0 ; obj ->
JointInternal . JointAxisInternal [ 0 ] = 0.0 ; obj -> JointInternal .
JointAxisInternal [ 1 ] = 0.0 ; obj -> JointInternal . JointAxisInternal [ 2
] = 1.0 ; break ; case 1 : obj -> JointInternal . PositionNumber = 1.0 ; obj
-> JointInternal . JointAxisInternal [ 0 ] = 0.0 ; obj -> JointInternal .
JointAxisInternal [ 1 ] = 0.0 ; obj -> JointInternal . JointAxisInternal [ 2
] = 1.0 ; break ; default : obj -> JointInternal . PositionNumber = 0.0 ; obj
-> JointInternal . JointAxisInternal [ 0 ] = 0.0 ; obj -> JointInternal .
JointAxisInternal [ 1 ] = 0.0 ; obj -> JointInternal . JointAxisInternal [ 2
] = 0.0 ; break ; } obj -> ParentIndex = - 1.0 ; oosvd5bnhe ( & obj ->
CollisionsInternal ) ; obj -> matlabCodegenIsDeleted = false ; return b_obj ;
} static cwp5dxx3gq * bk5rrjfzply ( cwp5dxx3gq * obj ) { cwp5dxx3gq * b_obj ;
lg5jhfa1j5 * switch_expression ; int32_T b_kstr ; int32_T loop_ub ; char_T
b_p [ 9 ] ; char_T b [ 8 ] ; boolean_T b_bool ; static const char_T tmp [ 10
] = { 'd' , 'u' , 'm' , 'm' , 'y' , 'b' , 'o' , 'd' , 'y' , '6' } ; static
const char_T tmp_p [ 5 ] = { 'f' , 'i' , 'x' , 'e' , 'd' } ; static const
char_T tmp_e [ 8 ] = { 'r' , 'e' , 'v' , 'o' , 'l' , 'u' , 't' , 'e' } ;
static const char_T tmp_i [ 9 ] = { 'p' , 'r' , 'i' , 's' , 'm' , 'a' , 't' ,
'i' , 'c' } ; int32_T exitg1 ; b_obj = obj ; b_kstr = obj -> NameInternal ->
size [ 0 ] * obj -> NameInternal -> size [ 1 ] ; obj -> NameInternal -> size
[ 0 ] = 1 ; obj -> NameInternal -> size [ 1 ] = 10 ; gsven4ga0i ( obj ->
NameInternal , b_kstr ) ; for ( b_kstr = 0 ; b_kstr < 10 ; b_kstr ++ ) { obj
-> NameInternal -> data [ b_kstr ] = tmp [ b_kstr ] ; } b_kstr = obj ->
JointInternal . Type -> size [ 0 ] * obj -> JointInternal . Type -> size [ 1
] ; obj -> JointInternal . Type -> size [ 0 ] = 1 ; obj -> JointInternal .
Type -> size [ 1 ] = 5 ; gsven4ga0i ( obj -> JointInternal . Type , b_kstr )
; for ( b_kstr = 0 ; b_kstr < 5 ; b_kstr ++ ) { obj -> JointInternal . Type
-> data [ b_kstr ] = tmp_p [ b_kstr ] ; } ek533x1it4 ( & switch_expression ,
2 ) ; b_kstr = switch_expression -> size [ 0 ] * switch_expression -> size [
1 ] ; switch_expression -> size [ 0 ] = 1 ; switch_expression -> size [ 1 ] =
obj -> JointInternal . Type -> size [ 1 ] ; gsven4ga0i ( switch_expression ,
b_kstr ) ; loop_ub = obj -> JointInternal . Type -> size [ 1 ] ; for ( b_kstr
= 0 ; b_kstr < loop_ub ; b_kstr ++ ) { switch_expression -> data [ b_kstr ] =
obj -> JointInternal . Type -> data [ b_kstr ] ; } for ( b_kstr = 0 ; b_kstr
< 8 ; b_kstr ++ ) { b [ b_kstr ] = tmp_e [ b_kstr ] ; } b_bool = false ; if (
switch_expression -> size [ 1 ] != 8 ) { } else { b_kstr = 1 ; do { exitg1 =
0 ; if ( b_kstr - 1 < 8 ) { if ( switch_expression -> data [ b_kstr - 1 ] !=
b [ b_kstr - 1 ] ) { exitg1 = 1 ; } else { b_kstr ++ ; } } else { b_bool =
true ; exitg1 = 1 ; } } while ( exitg1 == 0 ) ; } if ( b_bool ) { b_kstr = 0
; } else { for ( b_kstr = 0 ; b_kstr < 9 ; b_kstr ++ ) { b_p [ b_kstr ] =
tmp_i [ b_kstr ] ; } if ( switch_expression -> size [ 1 ] != 9 ) { } else {
b_kstr = 1 ; do { exitg1 = 0 ; if ( b_kstr - 1 < 9 ) { if ( switch_expression
-> data [ b_kstr - 1 ] != b_p [ b_kstr - 1 ] ) { exitg1 = 1 ; } else { b_kstr
++ ; } } else { b_bool = true ; exitg1 = 1 ; } } while ( exitg1 == 0 ) ; } if
( b_bool ) { b_kstr = 1 ; } else { b_kstr = - 1 ; } } dqu5smbks1 ( &
switch_expression ) ; switch ( b_kstr ) { case 0 : obj -> JointInternal .
PositionNumber = 1.0 ; obj -> JointInternal . JointAxisInternal [ 0 ] = 0.0 ;
obj -> JointInternal . JointAxisInternal [ 1 ] = 0.0 ; obj -> JointInternal .
JointAxisInternal [ 2 ] = 1.0 ; break ; case 1 : obj -> JointInternal .
PositionNumber = 1.0 ; obj -> JointInternal . JointAxisInternal [ 0 ] = 0.0 ;
obj -> JointInternal . JointAxisInternal [ 1 ] = 0.0 ; obj -> JointInternal .
JointAxisInternal [ 2 ] = 1.0 ; break ; default : obj -> JointInternal .
PositionNumber = 0.0 ; obj -> JointInternal . JointAxisInternal [ 0 ] = 0.0 ;
obj -> JointInternal . JointAxisInternal [ 1 ] = 0.0 ; obj -> JointInternal .
JointAxisInternal [ 2 ] = 0.0 ; break ; } obj -> ParentIndex = - 1.0 ;
oosvd5bnhe ( & obj -> CollisionsInternal ) ; obj -> matlabCodegenIsDeleted =
false ; return b_obj ; } static cwp5dxx3gq * bk5rrjfzplyh ( cwp5dxx3gq * obj
) { cwp5dxx3gq * b_obj ; lg5jhfa1j5 * switch_expression ; int32_T b_kstr ;
int32_T loop_ub ; char_T b_p [ 9 ] ; char_T b [ 8 ] ; boolean_T b_bool ;
static const char_T tmp [ 10 ] = { 'd' , 'u' , 'm' , 'm' , 'y' , 'b' , 'o' ,
'd' , 'y' , '7' } ; static const char_T tmp_p [ 5 ] = { 'f' , 'i' , 'x' , 'e'
, 'd' } ; static const char_T tmp_e [ 8 ] = { 'r' , 'e' , 'v' , 'o' , 'l' ,
'u' , 't' , 'e' } ; static const char_T tmp_i [ 9 ] = { 'p' , 'r' , 'i' , 's'
, 'm' , 'a' , 't' , 'i' , 'c' } ; int32_T exitg1 ; b_obj = obj ; b_kstr = obj
-> NameInternal -> size [ 0 ] * obj -> NameInternal -> size [ 1 ] ; obj ->
NameInternal -> size [ 0 ] = 1 ; obj -> NameInternal -> size [ 1 ] = 10 ;
gsven4ga0i ( obj -> NameInternal , b_kstr ) ; for ( b_kstr = 0 ; b_kstr < 10
; b_kstr ++ ) { obj -> NameInternal -> data [ b_kstr ] = tmp [ b_kstr ] ; }
b_kstr = obj -> JointInternal . Type -> size [ 0 ] * obj -> JointInternal .
Type -> size [ 1 ] ; obj -> JointInternal . Type -> size [ 0 ] = 1 ; obj ->
JointInternal . Type -> size [ 1 ] = 5 ; gsven4ga0i ( obj -> JointInternal .
Type , b_kstr ) ; for ( b_kstr = 0 ; b_kstr < 5 ; b_kstr ++ ) { obj ->
JointInternal . Type -> data [ b_kstr ] = tmp_p [ b_kstr ] ; } ek533x1it4 ( &
switch_expression , 2 ) ; b_kstr = switch_expression -> size [ 0 ] *
switch_expression -> size [ 1 ] ; switch_expression -> size [ 0 ] = 1 ;
switch_expression -> size [ 1 ] = obj -> JointInternal . Type -> size [ 1 ] ;
gsven4ga0i ( switch_expression , b_kstr ) ; loop_ub = obj -> JointInternal .
Type -> size [ 1 ] ; for ( b_kstr = 0 ; b_kstr < loop_ub ; b_kstr ++ ) {
switch_expression -> data [ b_kstr ] = obj -> JointInternal . Type -> data [
b_kstr ] ; } for ( b_kstr = 0 ; b_kstr < 8 ; b_kstr ++ ) { b [ b_kstr ] =
tmp_e [ b_kstr ] ; } b_bool = false ; if ( switch_expression -> size [ 1 ] !=
8 ) { } else { b_kstr = 1 ; do { exitg1 = 0 ; if ( b_kstr - 1 < 8 ) { if (
switch_expression -> data [ b_kstr - 1 ] != b [ b_kstr - 1 ] ) { exitg1 = 1 ;
} else { b_kstr ++ ; } } else { b_bool = true ; exitg1 = 1 ; } } while (
exitg1 == 0 ) ; } if ( b_bool ) { b_kstr = 0 ; } else { for ( b_kstr = 0 ;
b_kstr < 9 ; b_kstr ++ ) { b_p [ b_kstr ] = tmp_i [ b_kstr ] ; } if (
switch_expression -> size [ 1 ] != 9 ) { } else { b_kstr = 1 ; do { exitg1 =
0 ; if ( b_kstr - 1 < 9 ) { if ( switch_expression -> data [ b_kstr - 1 ] !=
b_p [ b_kstr - 1 ] ) { exitg1 = 1 ; } else { b_kstr ++ ; } } else { b_bool =
true ; exitg1 = 1 ; } } while ( exitg1 == 0 ) ; } if ( b_bool ) { b_kstr = 1
; } else { b_kstr = - 1 ; } } dqu5smbks1 ( & switch_expression ) ; switch (
b_kstr ) { case 0 : obj -> JointInternal . PositionNumber = 1.0 ; obj ->
JointInternal . JointAxisInternal [ 0 ] = 0.0 ; obj -> JointInternal .
JointAxisInternal [ 1 ] = 0.0 ; obj -> JointInternal . JointAxisInternal [ 2
] = 1.0 ; break ; case 1 : obj -> JointInternal . PositionNumber = 1.0 ; obj
-> JointInternal . JointAxisInternal [ 0 ] = 0.0 ; obj -> JointInternal .
JointAxisInternal [ 1 ] = 0.0 ; obj -> JointInternal . JointAxisInternal [ 2
] = 1.0 ; break ; default : obj -> JointInternal . PositionNumber = 0.0 ; obj
-> JointInternal . JointAxisInternal [ 0 ] = 0.0 ; obj -> JointInternal .
JointAxisInternal [ 1 ] = 0.0 ; obj -> JointInternal . JointAxisInternal [ 2
] = 0.0 ; break ; } obj -> ParentIndex = - 1.0 ; oosvd5bnhe ( & obj ->
CollisionsInternal ) ; obj -> matlabCodegenIsDeleted = false ; return b_obj ;
} static void afmkhidjlk ( fykx3ceuls * obj , cwp5dxx3gq * iobj_0 ) {
lg5jhfa1j5 * switch_expression ; int32_T b_kstr ; int32_T loop_ub ; char_T
b_p [ 9 ] ; char_T b [ 8 ] ; boolean_T b_bool ; static const char_T tmp [ 10
] = { 'd' , 'u' , 'm' , 'm' , 'y' , 'b' , 'o' , 'd' , 'y' , '1' } ; static
const char_T tmp_p [ 5 ] = { 'f' , 'i' , 'x' , 'e' , 'd' } ; static const
char_T tmp_e [ 8 ] = { 'r' , 'e' , 'v' , 'o' , 'l' , 'u' , 't' , 'e' } ;
static const char_T tmp_i [ 9 ] = { 'p' , 'r' , 'i' , 's' , 'm' , 'a' , 't' ,
'i' , 'c' } ; static const char_T tmp_m [ 10 ] = { 'd' , 'u' , 'm' , 'm' ,
'y' , 'b' , 'o' , 'd' , 'y' , '2' } ; static const char_T tmp_g [ 10 ] = {
'd' , 'u' , 'm' , 'm' , 'y' , 'b' , 'o' , 'd' , 'y' , '3' } ; static const
char_T tmp_j [ 10 ] = { 'd' , 'u' , 'm' , 'm' , 'y' , 'b' , 'o' , 'd' , 'y' ,
'4' } ; int32_T exitg1 ; b_kstr = iobj_0 [ 0 ] . NameInternal -> size [ 0 ] *
iobj_0 [ 0 ] . NameInternal -> size [ 1 ] ; iobj_0 [ 0 ] . NameInternal ->
size [ 0 ] = 1 ; iobj_0 [ 0 ] . NameInternal -> size [ 1 ] = 10 ; gsven4ga0i
( iobj_0 [ 0 ] . NameInternal , b_kstr ) ; for ( b_kstr = 0 ; b_kstr < 10 ;
b_kstr ++ ) { iobj_0 [ 0 ] . NameInternal -> data [ b_kstr ] = tmp [ b_kstr ]
; } b_kstr = iobj_0 [ 0 ] . JointInternal . Type -> size [ 0 ] * iobj_0 [ 0 ]
. JointInternal . Type -> size [ 1 ] ; iobj_0 [ 0 ] . JointInternal . Type ->
size [ 0 ] = 1 ; iobj_0 [ 0 ] . JointInternal . Type -> size [ 1 ] = 5 ;
gsven4ga0i ( iobj_0 [ 0 ] . JointInternal . Type , b_kstr ) ; for ( b_kstr =
0 ; b_kstr < 5 ; b_kstr ++ ) { iobj_0 [ 0 ] . JointInternal . Type -> data [
b_kstr ] = tmp_p [ b_kstr ] ; } ek533x1it4 ( & switch_expression , 2 ) ;
b_kstr = switch_expression -> size [ 0 ] * switch_expression -> size [ 1 ] ;
switch_expression -> size [ 0 ] = 1 ; switch_expression -> size [ 1 ] =
iobj_0 [ 0 ] . JointInternal . Type -> size [ 1 ] ; gsven4ga0i (
switch_expression , b_kstr ) ; loop_ub = iobj_0 [ 0 ] . JointInternal . Type
-> size [ 1 ] ; for ( b_kstr = 0 ; b_kstr < loop_ub ; b_kstr ++ ) {
switch_expression -> data [ b_kstr ] = iobj_0 [ 0 ] . JointInternal . Type ->
data [ b_kstr ] ; } for ( b_kstr = 0 ; b_kstr < 8 ; b_kstr ++ ) { b [ b_kstr
] = tmp_e [ b_kstr ] ; } b_bool = false ; if ( switch_expression -> size [ 1
] != 8 ) { } else { b_kstr = 1 ; do { exitg1 = 0 ; if ( b_kstr - 1 < 8 ) { if
( switch_expression -> data [ b_kstr - 1 ] != b [ b_kstr - 1 ] ) { exitg1 = 1
; } else { b_kstr ++ ; } } else { b_bool = true ; exitg1 = 1 ; } } while (
exitg1 == 0 ) ; } if ( b_bool ) { b_kstr = 0 ; } else { for ( b_kstr = 0 ;
b_kstr < 9 ; b_kstr ++ ) { b_p [ b_kstr ] = tmp_i [ b_kstr ] ; } if (
switch_expression -> size [ 1 ] != 9 ) { } else { b_kstr = 1 ; do { exitg1 =
0 ; if ( b_kstr - 1 < 9 ) { if ( switch_expression -> data [ b_kstr - 1 ] !=
b_p [ b_kstr - 1 ] ) { exitg1 = 1 ; } else { b_kstr ++ ; } } else { b_bool =
true ; exitg1 = 1 ; } } while ( exitg1 == 0 ) ; } if ( b_bool ) { b_kstr = 1
; } else { b_kstr = - 1 ; } } switch ( b_kstr ) { case 0 : iobj_0 [ 0 ] .
JointInternal . PositionNumber = 1.0 ; iobj_0 [ 0 ] . JointInternal .
JointAxisInternal [ 0 ] = 0.0 ; iobj_0 [ 0 ] . JointInternal .
JointAxisInternal [ 1 ] = 0.0 ; iobj_0 [ 0 ] . JointInternal .
JointAxisInternal [ 2 ] = 1.0 ; break ; case 1 : iobj_0 [ 0 ] . JointInternal
. PositionNumber = 1.0 ; iobj_0 [ 0 ] . JointInternal . JointAxisInternal [ 0
] = 0.0 ; iobj_0 [ 0 ] . JointInternal . JointAxisInternal [ 1 ] = 0.0 ;
iobj_0 [ 0 ] . JointInternal . JointAxisInternal [ 2 ] = 1.0 ; break ;
default : iobj_0 [ 0 ] . JointInternal . PositionNumber = 0.0 ; iobj_0 [ 0 ]
. JointInternal . JointAxisInternal [ 0 ] = 0.0 ; iobj_0 [ 0 ] .
JointInternal . JointAxisInternal [ 1 ] = 0.0 ; iobj_0 [ 0 ] . JointInternal
. JointAxisInternal [ 2 ] = 0.0 ; break ; } iobj_0 [ 0 ] . ParentIndex = -
1.0 ; oosvd5bnhe ( & iobj_0 [ 0 ] . CollisionsInternal ) ; iobj_0 [ 0 ] .
matlabCodegenIsDeleted = false ; obj -> Bodies [ 0 ] = & iobj_0 [ 0 ] ;
b_kstr = iobj_0 [ 1 ] . NameInternal -> size [ 0 ] * iobj_0 [ 1 ] .
NameInternal -> size [ 1 ] ; iobj_0 [ 1 ] . NameInternal -> size [ 0 ] = 1 ;
iobj_0 [ 1 ] . NameInternal -> size [ 1 ] = 10 ; gsven4ga0i ( iobj_0 [ 1 ] .
NameInternal , b_kstr ) ; for ( b_kstr = 0 ; b_kstr < 10 ; b_kstr ++ ) {
iobj_0 [ 1 ] . NameInternal -> data [ b_kstr ] = tmp_m [ b_kstr ] ; } b_kstr
= iobj_0 [ 1 ] . JointInternal . Type -> size [ 0 ] * iobj_0 [ 1 ] .
JointInternal . Type -> size [ 1 ] ; iobj_0 [ 1 ] . JointInternal . Type ->
size [ 0 ] = 1 ; iobj_0 [ 1 ] . JointInternal . Type -> size [ 1 ] = 5 ;
gsven4ga0i ( iobj_0 [ 1 ] . JointInternal . Type , b_kstr ) ; for ( b_kstr =
0 ; b_kstr < 5 ; b_kstr ++ ) { iobj_0 [ 1 ] . JointInternal . Type -> data [
b_kstr ] = tmp_p [ b_kstr ] ; } b_kstr = switch_expression -> size [ 0 ] *
switch_expression -> size [ 1 ] ; switch_expression -> size [ 0 ] = 1 ;
switch_expression -> size [ 1 ] = iobj_0 [ 1 ] . JointInternal . Type -> size
[ 1 ] ; gsven4ga0i ( switch_expression , b_kstr ) ; loop_ub = iobj_0 [ 1 ] .
JointInternal . Type -> size [ 1 ] ; for ( b_kstr = 0 ; b_kstr < loop_ub ;
b_kstr ++ ) { switch_expression -> data [ b_kstr ] = iobj_0 [ 1 ] .
JointInternal . Type -> data [ b_kstr ] ; } b_bool = false ; if (
switch_expression -> size [ 1 ] != 8 ) { } else { b_kstr = 1 ; do { exitg1 =
0 ; if ( b_kstr - 1 < 8 ) { if ( switch_expression -> data [ b_kstr - 1 ] !=
b [ b_kstr - 1 ] ) { exitg1 = 1 ; } else { b_kstr ++ ; } } else { b_bool =
true ; exitg1 = 1 ; } } while ( exitg1 == 0 ) ; } if ( b_bool ) { b_kstr = 0
; } else { for ( b_kstr = 0 ; b_kstr < 9 ; b_kstr ++ ) { b_p [ b_kstr ] =
tmp_i [ b_kstr ] ; } if ( switch_expression -> size [ 1 ] != 9 ) { } else {
b_kstr = 1 ; do { exitg1 = 0 ; if ( b_kstr - 1 < 9 ) { if ( switch_expression
-> data [ b_kstr - 1 ] != b_p [ b_kstr - 1 ] ) { exitg1 = 1 ; } else { b_kstr
++ ; } } else { b_bool = true ; exitg1 = 1 ; } } while ( exitg1 == 0 ) ; } if
( b_bool ) { b_kstr = 1 ; } else { b_kstr = - 1 ; } } switch ( b_kstr ) {
case 0 : iobj_0 [ 1 ] . JointInternal . PositionNumber = 1.0 ; iobj_0 [ 1 ] .
JointInternal . JointAxisInternal [ 0 ] = 0.0 ; iobj_0 [ 1 ] . JointInternal
. JointAxisInternal [ 1 ] = 0.0 ; iobj_0 [ 1 ] . JointInternal .
JointAxisInternal [ 2 ] = 1.0 ; break ; case 1 : iobj_0 [ 1 ] . JointInternal
. PositionNumber = 1.0 ; iobj_0 [ 1 ] . JointInternal . JointAxisInternal [ 0
] = 0.0 ; iobj_0 [ 1 ] . JointInternal . JointAxisInternal [ 1 ] = 0.0 ;
iobj_0 [ 1 ] . JointInternal . JointAxisInternal [ 2 ] = 1.0 ; break ;
default : iobj_0 [ 1 ] . JointInternal . PositionNumber = 0.0 ; iobj_0 [ 1 ]
. JointInternal . JointAxisInternal [ 0 ] = 0.0 ; iobj_0 [ 1 ] .
JointInternal . JointAxisInternal [ 1 ] = 0.0 ; iobj_0 [ 1 ] . JointInternal
. JointAxisInternal [ 2 ] = 0.0 ; break ; } iobj_0 [ 1 ] . ParentIndex = -
1.0 ; oosvd5bnhe ( & iobj_0 [ 1 ] . CollisionsInternal ) ; iobj_0 [ 1 ] .
matlabCodegenIsDeleted = false ; obj -> Bodies [ 1 ] = & iobj_0 [ 1 ] ;
b_kstr = iobj_0 [ 2 ] . NameInternal -> size [ 0 ] * iobj_0 [ 2 ] .
NameInternal -> size [ 1 ] ; iobj_0 [ 2 ] . NameInternal -> size [ 0 ] = 1 ;
iobj_0 [ 2 ] . NameInternal -> size [ 1 ] = 10 ; gsven4ga0i ( iobj_0 [ 2 ] .
NameInternal , b_kstr ) ; for ( b_kstr = 0 ; b_kstr < 10 ; b_kstr ++ ) {
iobj_0 [ 2 ] . NameInternal -> data [ b_kstr ] = tmp_g [ b_kstr ] ; } b_kstr
= iobj_0 [ 2 ] . JointInternal . Type -> size [ 0 ] * iobj_0 [ 2 ] .
JointInternal . Type -> size [ 1 ] ; iobj_0 [ 2 ] . JointInternal . Type ->
size [ 0 ] = 1 ; iobj_0 [ 2 ] . JointInternal . Type -> size [ 1 ] = 5 ;
gsven4ga0i ( iobj_0 [ 2 ] . JointInternal . Type , b_kstr ) ; for ( b_kstr =
0 ; b_kstr < 5 ; b_kstr ++ ) { iobj_0 [ 2 ] . JointInternal . Type -> data [
b_kstr ] = tmp_p [ b_kstr ] ; } b_kstr = switch_expression -> size [ 0 ] *
switch_expression -> size [ 1 ] ; switch_expression -> size [ 0 ] = 1 ;
switch_expression -> size [ 1 ] = iobj_0 [ 2 ] . JointInternal . Type -> size
[ 1 ] ; gsven4ga0i ( switch_expression , b_kstr ) ; loop_ub = iobj_0 [ 2 ] .
JointInternal . Type -> size [ 1 ] ; for ( b_kstr = 0 ; b_kstr < loop_ub ;
b_kstr ++ ) { switch_expression -> data [ b_kstr ] = iobj_0 [ 2 ] .
JointInternal . Type -> data [ b_kstr ] ; } b_bool = false ; if (
switch_expression -> size [ 1 ] != 8 ) { } else { b_kstr = 1 ; do { exitg1 =
0 ; if ( b_kstr - 1 < 8 ) { if ( switch_expression -> data [ b_kstr - 1 ] !=
b [ b_kstr - 1 ] ) { exitg1 = 1 ; } else { b_kstr ++ ; } } else { b_bool =
true ; exitg1 = 1 ; } } while ( exitg1 == 0 ) ; } if ( b_bool ) { b_kstr = 0
; } else { for ( b_kstr = 0 ; b_kstr < 9 ; b_kstr ++ ) { b_p [ b_kstr ] =
tmp_i [ b_kstr ] ; } if ( switch_expression -> size [ 1 ] != 9 ) { } else {
b_kstr = 1 ; do { exitg1 = 0 ; if ( b_kstr - 1 < 9 ) { if ( switch_expression
-> data [ b_kstr - 1 ] != b_p [ b_kstr - 1 ] ) { exitg1 = 1 ; } else { b_kstr
++ ; } } else { b_bool = true ; exitg1 = 1 ; } } while ( exitg1 == 0 ) ; } if
( b_bool ) { b_kstr = 1 ; } else { b_kstr = - 1 ; } } switch ( b_kstr ) {
case 0 : iobj_0 [ 2 ] . JointInternal . PositionNumber = 1.0 ; iobj_0 [ 2 ] .
JointInternal . JointAxisInternal [ 0 ] = 0.0 ; iobj_0 [ 2 ] . JointInternal
. JointAxisInternal [ 1 ] = 0.0 ; iobj_0 [ 2 ] . JointInternal .
JointAxisInternal [ 2 ] = 1.0 ; break ; case 1 : iobj_0 [ 2 ] . JointInternal
. PositionNumber = 1.0 ; iobj_0 [ 2 ] . JointInternal . JointAxisInternal [ 0
] = 0.0 ; iobj_0 [ 2 ] . JointInternal . JointAxisInternal [ 1 ] = 0.0 ;
iobj_0 [ 2 ] . JointInternal . JointAxisInternal [ 2 ] = 1.0 ; break ;
default : iobj_0 [ 2 ] . JointInternal . PositionNumber = 0.0 ; iobj_0 [ 2 ]
. JointInternal . JointAxisInternal [ 0 ] = 0.0 ; iobj_0 [ 2 ] .
JointInternal . JointAxisInternal [ 1 ] = 0.0 ; iobj_0 [ 2 ] . JointInternal
. JointAxisInternal [ 2 ] = 0.0 ; break ; } iobj_0 [ 2 ] . ParentIndex = -
1.0 ; oosvd5bnhe ( & iobj_0 [ 2 ] . CollisionsInternal ) ; iobj_0 [ 2 ] .
matlabCodegenIsDeleted = false ; obj -> Bodies [ 2 ] = & iobj_0 [ 2 ] ;
b_kstr = iobj_0 [ 3 ] . NameInternal -> size [ 0 ] * iobj_0 [ 3 ] .
NameInternal -> size [ 1 ] ; iobj_0 [ 3 ] . NameInternal -> size [ 0 ] = 1 ;
iobj_0 [ 3 ] . NameInternal -> size [ 1 ] = 10 ; gsven4ga0i ( iobj_0 [ 3 ] .
NameInternal , b_kstr ) ; for ( b_kstr = 0 ; b_kstr < 10 ; b_kstr ++ ) {
iobj_0 [ 3 ] . NameInternal -> data [ b_kstr ] = tmp_j [ b_kstr ] ; } b_kstr
= iobj_0 [ 3 ] . JointInternal . Type -> size [ 0 ] * iobj_0 [ 3 ] .
JointInternal . Type -> size [ 1 ] ; iobj_0 [ 3 ] . JointInternal . Type ->
size [ 0 ] = 1 ; iobj_0 [ 3 ] . JointInternal . Type -> size [ 1 ] = 5 ;
gsven4ga0i ( iobj_0 [ 3 ] . JointInternal . Type , b_kstr ) ; for ( b_kstr =
0 ; b_kstr < 5 ; b_kstr ++ ) { iobj_0 [ 3 ] . JointInternal . Type -> data [
b_kstr ] = tmp_p [ b_kstr ] ; } b_kstr = switch_expression -> size [ 0 ] *
switch_expression -> size [ 1 ] ; switch_expression -> size [ 0 ] = 1 ;
switch_expression -> size [ 1 ] = iobj_0 [ 3 ] . JointInternal . Type -> size
[ 1 ] ; gsven4ga0i ( switch_expression , b_kstr ) ; loop_ub = iobj_0 [ 3 ] .
JointInternal . Type -> size [ 1 ] ; for ( b_kstr = 0 ; b_kstr < loop_ub ;
b_kstr ++ ) { switch_expression -> data [ b_kstr ] = iobj_0 [ 3 ] .
JointInternal . Type -> data [ b_kstr ] ; } b_bool = false ; if (
switch_expression -> size [ 1 ] != 8 ) { } else { b_kstr = 1 ; do { exitg1 =
0 ; if ( b_kstr - 1 < 8 ) { if ( switch_expression -> data [ b_kstr - 1 ] !=
b [ b_kstr - 1 ] ) { exitg1 = 1 ; } else { b_kstr ++ ; } } else { b_bool =
true ; exitg1 = 1 ; } } while ( exitg1 == 0 ) ; } if ( b_bool ) { b_kstr = 0
; } else { for ( b_kstr = 0 ; b_kstr < 9 ; b_kstr ++ ) { b_p [ b_kstr ] =
tmp_i [ b_kstr ] ; } if ( switch_expression -> size [ 1 ] != 9 ) { } else {
b_kstr = 1 ; do { exitg1 = 0 ; if ( b_kstr - 1 < 9 ) { if ( switch_expression
-> data [ b_kstr - 1 ] != b_p [ b_kstr - 1 ] ) { exitg1 = 1 ; } else { b_kstr
++ ; } } else { b_bool = true ; exitg1 = 1 ; } } while ( exitg1 == 0 ) ; } if
( b_bool ) { b_kstr = 1 ; } else { b_kstr = - 1 ; } } dqu5smbks1 ( &
switch_expression ) ; switch ( b_kstr ) { case 0 : iobj_0 [ 3 ] .
JointInternal . PositionNumber = 1.0 ; iobj_0 [ 3 ] . JointInternal .
JointAxisInternal [ 0 ] = 0.0 ; iobj_0 [ 3 ] . JointInternal .
JointAxisInternal [ 1 ] = 0.0 ; iobj_0 [ 3 ] . JointInternal .
JointAxisInternal [ 2 ] = 1.0 ; break ; case 1 : iobj_0 [ 3 ] . JointInternal
. PositionNumber = 1.0 ; iobj_0 [ 3 ] . JointInternal . JointAxisInternal [ 0
] = 0.0 ; iobj_0 [ 3 ] . JointInternal . JointAxisInternal [ 1 ] = 0.0 ;
iobj_0 [ 3 ] . JointInternal . JointAxisInternal [ 2 ] = 1.0 ; break ;
default : iobj_0 [ 3 ] . JointInternal . PositionNumber = 0.0 ; iobj_0 [ 3 ]
. JointInternal . JointAxisInternal [ 0 ] = 0.0 ; iobj_0 [ 3 ] .
JointInternal . JointAxisInternal [ 1 ] = 0.0 ; iobj_0 [ 3 ] . JointInternal
. JointAxisInternal [ 2 ] = 0.0 ; break ; } iobj_0 [ 3 ] . ParentIndex = -
1.0 ; oosvd5bnhe ( & iobj_0 [ 3 ] . CollisionsInternal ) ; iobj_0 [ 3 ] .
matlabCodegenIsDeleted = false ; obj -> Bodies [ 3 ] = & iobj_0 [ 3 ] ; obj
-> Bodies [ 4 ] = bk5rrjfzpl ( & iobj_0 [ 4 ] ) ; obj -> Bodies [ 5 ] =
bk5rrjfzply ( & iobj_0 [ 5 ] ) ; obj -> Bodies [ 6 ] = bk5rrjfzplyh ( &
iobj_0 [ 6 ] ) ; } static cwp5dxx3gq * bk5rrjfzplyhc ( cwp5dxx3gq * obj ) {
cwp5dxx3gq * b_obj ; lg5jhfa1j5 * switch_expression ; int32_T b_kstr ;
int32_T loop_ub ; char_T b_p [ 9 ] ; char_T b [ 8 ] ; boolean_T b_bool ;
static const char_T tmp [ 5 ] = { 'B' , 'o' , 'd' , 'y' , '4' } ; static
const char_T tmp_p [ 8 ] = { 'r' , 'e' , 'v' , 'o' , 'l' , 'u' , 't' , 'e' }
; static const char_T tmp_e [ 9 ] = { 'p' , 'r' , 'i' , 's' , 'm' , 'a' , 't'
, 'i' , 'c' } ; static const real_T tmp_i [ 16 ] = { 0.096500416960583826 ,
0.17542938201214472 , - 0.97975109158054552 , 0.0 , - 0.47221398207965382 , -
0.85844403229432908 , - 0.20021937605219314 , 0.0 , - 0.87618583910886738 ,
0.48197341767476154 , 1.2259900900479928E-17 , 0.0 , 0.21742989269471785 , -
0.11960411114760211 , - 0.11998997562072158 , 1.0 } ; static const real_T
tmp_m [ 16 ] = { 1.0 , 0.0 , 0.0 , 0.0 , 0.0 , 1.0 , 0.0 , 0.0 , 0.0 , 0.0 ,
1.0 , 0.0 , 0.0 , 0.0 , 0.0 , 1.0 } ; int32_T exitg1 ; b_obj = obj ; b_kstr =
obj -> NameInternal -> size [ 0 ] * obj -> NameInternal -> size [ 1 ] ; obj
-> NameInternal -> size [ 0 ] = 1 ; obj -> NameInternal -> size [ 1 ] = 5 ;
gsven4ga0i ( obj -> NameInternal , b_kstr ) ; for ( b_kstr = 0 ; b_kstr < 5 ;
b_kstr ++ ) { obj -> NameInternal -> data [ b_kstr ] = tmp [ b_kstr ] ; } obj
-> ParentIndex = 3.0 ; b_kstr = obj -> JointInternal . Type -> size [ 0 ] *
obj -> JointInternal . Type -> size [ 1 ] ; obj -> JointInternal . Type ->
size [ 0 ] = 1 ; obj -> JointInternal . Type -> size [ 1 ] = 8 ; gsven4ga0i (
obj -> JointInternal . Type , b_kstr ) ; for ( b_kstr = 0 ; b_kstr < 8 ;
b_kstr ++ ) { obj -> JointInternal . Type -> data [ b_kstr ] = tmp_p [ b_kstr
] ; } ek533x1it4 ( & switch_expression , 2 ) ; b_kstr = switch_expression ->
size [ 0 ] * switch_expression -> size [ 1 ] ; switch_expression -> size [ 0
] = 1 ; switch_expression -> size [ 1 ] = obj -> JointInternal . Type -> size
[ 1 ] ; gsven4ga0i ( switch_expression , b_kstr ) ; loop_ub = obj ->
JointInternal . Type -> size [ 1 ] ; for ( b_kstr = 0 ; b_kstr < loop_ub ;
b_kstr ++ ) { switch_expression -> data [ b_kstr ] = obj -> JointInternal .
Type -> data [ b_kstr ] ; } for ( b_kstr = 0 ; b_kstr < 8 ; b_kstr ++ ) { b [
b_kstr ] = tmp_p [ b_kstr ] ; } b_bool = false ; if ( switch_expression ->
size [ 1 ] != 8 ) { } else { b_kstr = 1 ; do { exitg1 = 0 ; if ( b_kstr - 1 <
8 ) { if ( switch_expression -> data [ b_kstr - 1 ] != b [ b_kstr - 1 ] ) {
exitg1 = 1 ; } else { b_kstr ++ ; } } else { b_bool = true ; exitg1 = 1 ; } }
while ( exitg1 == 0 ) ; } if ( b_bool ) { b_kstr = 0 ; } else { for ( b_kstr
= 0 ; b_kstr < 9 ; b_kstr ++ ) { b_p [ b_kstr ] = tmp_e [ b_kstr ] ; } if (
switch_expression -> size [ 1 ] != 9 ) { } else { b_kstr = 1 ; do { exitg1 =
0 ; if ( b_kstr - 1 < 9 ) { if ( switch_expression -> data [ b_kstr - 1 ] !=
b_p [ b_kstr - 1 ] ) { exitg1 = 1 ; } else { b_kstr ++ ; } } else { b_bool =
true ; exitg1 = 1 ; } } while ( exitg1 == 0 ) ; } if ( b_bool ) { b_kstr = 1
; } else { b_kstr = - 1 ; } } dqu5smbks1 ( & switch_expression ) ; switch (
b_kstr ) { case 0 : obj -> JointInternal . PositionNumber = 1.0 ; obj ->
JointInternal . JointAxisInternal [ 0 ] = 0.0 ; obj -> JointInternal .
JointAxisInternal [ 1 ] = 0.0 ; obj -> JointInternal . JointAxisInternal [ 2
] = 1.0 ; break ; case 1 : obj -> JointInternal . PositionNumber = 1.0 ; obj
-> JointInternal . JointAxisInternal [ 0 ] = 0.0 ; obj -> JointInternal .
JointAxisInternal [ 1 ] = 0.0 ; obj -> JointInternal . JointAxisInternal [ 2
] = 1.0 ; break ; default : obj -> JointInternal . PositionNumber = 0.0 ; obj
-> JointInternal . JointAxisInternal [ 0 ] = 0.0 ; obj -> JointInternal .
JointAxisInternal [ 1 ] = 0.0 ; obj -> JointInternal . JointAxisInternal [ 2
] = 0.0 ; break ; } for ( b_kstr = 0 ; b_kstr < 16 ; b_kstr ++ ) { obj ->
JointInternal . JointToParentTransform [ b_kstr ] = tmp_i [ b_kstr ] ; } for
( b_kstr = 0 ; b_kstr < 16 ; b_kstr ++ ) { obj -> JointInternal .
ChildToJointTransform [ b_kstr ] = tmp_m [ b_kstr ] ; } obj -> JointInternal
. JointAxisInternal [ 0 ] = 0.0 ; obj -> JointInternal . JointAxisInternal [
1 ] = 0.0 ; obj -> JointInternal . JointAxisInternal [ 2 ] = 1.0 ; oosvd5bnhe
( & obj -> CollisionsInternal ) ; obj -> matlabCodegenIsDeleted = false ;
return b_obj ; } static cwp5dxx3gq * bk5rrjfzplyhc0 ( cwp5dxx3gq * obj ) {
cwp5dxx3gq * b_obj ; lg5jhfa1j5 * switch_expression ; int32_T b_kstr ;
int32_T loop_ub ; char_T b_p [ 9 ] ; char_T b [ 8 ] ; boolean_T b_bool ;
static const char_T tmp [ 5 ] = { 'B' , 'o' , 'd' , 'y' , '5' } ; static
const char_T tmp_p [ 8 ] = { 'r' , 'e' , 'v' , 'o' , 'l' , 'u' , 't' , 'e' }
; static const char_T tmp_e [ 9 ] = { 'p' , 'r' , 'i' , 's' , 'm' , 'a' , 't'
, 'i' , 'c' } ; static const real_T tmp_i [ 16 ] = { 0.10332663435196174 , -
0.50561731232852969 , - 0.85654815399203921 , 0.0 , 0.17149753695106323 , -
0.83920398886497727 , 0.51606710793542143 , 0.0 , - 0.9797510915805171 , -
0.20021937605233242 , 3.1599996593917272E-17 , 0.0 , 0.12049958683154875 ,
0.024624981076611704 , - 0.63036996585545535 , 1.0 } ; static const real_T
tmp_m [ 16 ] = { 1.0 , 0.0 , 0.0 , 0.0 , 0.0 , 1.0 , 0.0 , 0.0 , 0.0 , 0.0 ,
1.0 , 0.0 , 0.0 , 0.0 , 0.0 , 1.0 } ; int32_T exitg1 ; b_obj = obj ; b_kstr =
obj -> NameInternal -> size [ 0 ] * obj -> NameInternal -> size [ 1 ] ; obj
-> NameInternal -> size [ 0 ] = 1 ; obj -> NameInternal -> size [ 1 ] = 5 ;
gsven4ga0i ( obj -> NameInternal , b_kstr ) ; for ( b_kstr = 0 ; b_kstr < 5 ;
b_kstr ++ ) { obj -> NameInternal -> data [ b_kstr ] = tmp [ b_kstr ] ; } obj
-> ParentIndex = 4.0 ; b_kstr = obj -> JointInternal . Type -> size [ 0 ] *
obj -> JointInternal . Type -> size [ 1 ] ; obj -> JointInternal . Type ->
size [ 0 ] = 1 ; obj -> JointInternal . Type -> size [ 1 ] = 8 ; gsven4ga0i (
obj -> JointInternal . Type , b_kstr ) ; for ( b_kstr = 0 ; b_kstr < 8 ;
b_kstr ++ ) { obj -> JointInternal . Type -> data [ b_kstr ] = tmp_p [ b_kstr
] ; } ek533x1it4 ( & switch_expression , 2 ) ; b_kstr = switch_expression ->
size [ 0 ] * switch_expression -> size [ 1 ] ; switch_expression -> size [ 0
] = 1 ; switch_expression -> size [ 1 ] = obj -> JointInternal . Type -> size
[ 1 ] ; gsven4ga0i ( switch_expression , b_kstr ) ; loop_ub = obj ->
JointInternal . Type -> size [ 1 ] ; for ( b_kstr = 0 ; b_kstr < loop_ub ;
b_kstr ++ ) { switch_expression -> data [ b_kstr ] = obj -> JointInternal .
Type -> data [ b_kstr ] ; } for ( b_kstr = 0 ; b_kstr < 8 ; b_kstr ++ ) { b [
b_kstr ] = tmp_p [ b_kstr ] ; } b_bool = false ; if ( switch_expression ->
size [ 1 ] != 8 ) { } else { b_kstr = 1 ; do { exitg1 = 0 ; if ( b_kstr - 1 <
8 ) { if ( switch_expression -> data [ b_kstr - 1 ] != b [ b_kstr - 1 ] ) {
exitg1 = 1 ; } else { b_kstr ++ ; } } else { b_bool = true ; exitg1 = 1 ; } }
while ( exitg1 == 0 ) ; } if ( b_bool ) { b_kstr = 0 ; } else { for ( b_kstr
= 0 ; b_kstr < 9 ; b_kstr ++ ) { b_p [ b_kstr ] = tmp_e [ b_kstr ] ; } if (
switch_expression -> size [ 1 ] != 9 ) { } else { b_kstr = 1 ; do { exitg1 =
0 ; if ( b_kstr - 1 < 9 ) { if ( switch_expression -> data [ b_kstr - 1 ] !=
b_p [ b_kstr - 1 ] ) { exitg1 = 1 ; } else { b_kstr ++ ; } } else { b_bool =
true ; exitg1 = 1 ; } } while ( exitg1 == 0 ) ; } if ( b_bool ) { b_kstr = 1
; } else { b_kstr = - 1 ; } } dqu5smbks1 ( & switch_expression ) ; switch (
b_kstr ) { case 0 : obj -> JointInternal . PositionNumber = 1.0 ; obj ->
JointInternal . JointAxisInternal [ 0 ] = 0.0 ; obj -> JointInternal .
JointAxisInternal [ 1 ] = 0.0 ; obj -> JointInternal . JointAxisInternal [ 2
] = 1.0 ; break ; case 1 : obj -> JointInternal . PositionNumber = 1.0 ; obj
-> JointInternal . JointAxisInternal [ 0 ] = 0.0 ; obj -> JointInternal .
JointAxisInternal [ 1 ] = 0.0 ; obj -> JointInternal . JointAxisInternal [ 2
] = 1.0 ; break ; default : obj -> JointInternal . PositionNumber = 0.0 ; obj
-> JointInternal . JointAxisInternal [ 0 ] = 0.0 ; obj -> JointInternal .
JointAxisInternal [ 1 ] = 0.0 ; obj -> JointInternal . JointAxisInternal [ 2
] = 0.0 ; break ; } for ( b_kstr = 0 ; b_kstr < 16 ; b_kstr ++ ) { obj ->
JointInternal . JointToParentTransform [ b_kstr ] = tmp_i [ b_kstr ] ; } for
( b_kstr = 0 ; b_kstr < 16 ; b_kstr ++ ) { obj -> JointInternal .
ChildToJointTransform [ b_kstr ] = tmp_m [ b_kstr ] ; } obj -> JointInternal
. JointAxisInternal [ 0 ] = 0.0 ; obj -> JointInternal . JointAxisInternal [
1 ] = 0.0 ; obj -> JointInternal . JointAxisInternal [ 2 ] = 1.0 ; oosvd5bnhe
( & obj -> CollisionsInternal ) ; obj -> matlabCodegenIsDeleted = false ;
return b_obj ; } static cwp5dxx3gq * bk5rrjfzplyhc0n ( cwp5dxx3gq * obj ) {
cwp5dxx3gq * b_obj ; lg5jhfa1j5 * switch_expression ; int32_T b_kstr ;
int32_T loop_ub ; char_T b_p [ 9 ] ; char_T b [ 8 ] ; boolean_T b_bool ;
static const char_T tmp [ 5 ] = { 'B' , 'o' , 'd' , 'y' , '6' } ; static
const char_T tmp_p [ 8 ] = { 'r' , 'e' , 'v' , 'o' , 'l' , 'u' , 't' , 'e' }
; static const char_T tmp_e [ 9 ] = { 'p' , 'r' , 'i' , 's' , 'm' , 'a' , 't'
, 'i' , 'c' } ; static const real_T tmp_i [ 16 ] = { - 0.72988089845754411 ,
0.065019410197615327 , 0.68047509165608888 , 0.0 , 0.67779105252954108 , -
0.060379131123754384 , 0.7327712123409581 , 0.0 , 0.0887308468217524 ,
0.99605563942095865 , 4.4869295985033991E-17 , 0.0 , - 0.015990185507606339 ,
- 0.17949918231066653 , 0.11660998821191004 , 1.0 } ; static const real_T
tmp_m [ 16 ] = { 1.0 , 0.0 , 0.0 , 0.0 , 0.0 , 1.0 , 0.0 , 0.0 , 0.0 , 0.0 ,
1.0 , 0.0 , 0.0 , 0.0 , 0.0 , 1.0 } ; int32_T exitg1 ; b_obj = obj ; b_kstr =
obj -> NameInternal -> size [ 0 ] * obj -> NameInternal -> size [ 1 ] ; obj
-> NameInternal -> size [ 0 ] = 1 ; obj -> NameInternal -> size [ 1 ] = 5 ;
gsven4ga0i ( obj -> NameInternal , b_kstr ) ; for ( b_kstr = 0 ; b_kstr < 5 ;
b_kstr ++ ) { obj -> NameInternal -> data [ b_kstr ] = tmp [ b_kstr ] ; } obj
-> ParentIndex = 5.0 ; b_kstr = obj -> JointInternal . Type -> size [ 0 ] *
obj -> JointInternal . Type -> size [ 1 ] ; obj -> JointInternal . Type ->
size [ 0 ] = 1 ; obj -> JointInternal . Type -> size [ 1 ] = 8 ; gsven4ga0i (
obj -> JointInternal . Type , b_kstr ) ; for ( b_kstr = 0 ; b_kstr < 8 ;
b_kstr ++ ) { obj -> JointInternal . Type -> data [ b_kstr ] = tmp_p [ b_kstr
] ; } ek533x1it4 ( & switch_expression , 2 ) ; b_kstr = switch_expression ->
size [ 0 ] * switch_expression -> size [ 1 ] ; switch_expression -> size [ 0
] = 1 ; switch_expression -> size [ 1 ] = obj -> JointInternal . Type -> size
[ 1 ] ; gsven4ga0i ( switch_expression , b_kstr ) ; loop_ub = obj ->
JointInternal . Type -> size [ 1 ] ; for ( b_kstr = 0 ; b_kstr < loop_ub ;
b_kstr ++ ) { switch_expression -> data [ b_kstr ] = obj -> JointInternal .
Type -> data [ b_kstr ] ; } for ( b_kstr = 0 ; b_kstr < 8 ; b_kstr ++ ) { b [
b_kstr ] = tmp_p [ b_kstr ] ; } b_bool = false ; if ( switch_expression ->
size [ 1 ] != 8 ) { } else { b_kstr = 1 ; do { exitg1 = 0 ; if ( b_kstr - 1 <
8 ) { if ( switch_expression -> data [ b_kstr - 1 ] != b [ b_kstr - 1 ] ) {
exitg1 = 1 ; } else { b_kstr ++ ; } } else { b_bool = true ; exitg1 = 1 ; } }
while ( exitg1 == 0 ) ; } if ( b_bool ) { b_kstr = 0 ; } else { for ( b_kstr
= 0 ; b_kstr < 9 ; b_kstr ++ ) { b_p [ b_kstr ] = tmp_e [ b_kstr ] ; } if (
switch_expression -> size [ 1 ] != 9 ) { } else { b_kstr = 1 ; do { exitg1 =
0 ; if ( b_kstr - 1 < 9 ) { if ( switch_expression -> data [ b_kstr - 1 ] !=
b_p [ b_kstr - 1 ] ) { exitg1 = 1 ; } else { b_kstr ++ ; } } else { b_bool =
true ; exitg1 = 1 ; } } while ( exitg1 == 0 ) ; } if ( b_bool ) { b_kstr = 1
; } else { b_kstr = - 1 ; } } dqu5smbks1 ( & switch_expression ) ; switch (
b_kstr ) { case 0 : obj -> JointInternal . PositionNumber = 1.0 ; obj ->
JointInternal . JointAxisInternal [ 0 ] = 0.0 ; obj -> JointInternal .
JointAxisInternal [ 1 ] = 0.0 ; obj -> JointInternal . JointAxisInternal [ 2
] = 1.0 ; break ; case 1 : obj -> JointInternal . PositionNumber = 1.0 ; obj
-> JointInternal . JointAxisInternal [ 0 ] = 0.0 ; obj -> JointInternal .
JointAxisInternal [ 1 ] = 0.0 ; obj -> JointInternal . JointAxisInternal [ 2
] = 1.0 ; break ; default : obj -> JointInternal . PositionNumber = 0.0 ; obj
-> JointInternal . JointAxisInternal [ 0 ] = 0.0 ; obj -> JointInternal .
JointAxisInternal [ 1 ] = 0.0 ; obj -> JointInternal . JointAxisInternal [ 2
] = 0.0 ; break ; } for ( b_kstr = 0 ; b_kstr < 16 ; b_kstr ++ ) { obj ->
JointInternal . JointToParentTransform [ b_kstr ] = tmp_i [ b_kstr ] ; } for
( b_kstr = 0 ; b_kstr < 16 ; b_kstr ++ ) { obj -> JointInternal .
ChildToJointTransform [ b_kstr ] = tmp_m [ b_kstr ] ; } obj -> JointInternal
. JointAxisInternal [ 0 ] = 0.0 ; obj -> JointInternal . JointAxisInternal [
1 ] = 0.0 ; obj -> JointInternal . JointAxisInternal [ 2 ] = 1.0 ; oosvd5bnhe
( & obj -> CollisionsInternal ) ; obj -> matlabCodegenIsDeleted = false ;
return b_obj ; } static cwp5dxx3gq * fgvc0f5qwj ( cwp5dxx3gq * obj ) {
cwp5dxx3gq * b_obj ; lg5jhfa1j5 * switch_expression ; int32_T b_kstr ;
int32_T loop_ub ; char_T b_p [ 9 ] ; char_T b [ 8 ] ; boolean_T b_bool ;
static const char_T tmp [ 5 ] = { 'B' , 'o' , 'd' , 'y' , '7' } ; static
const char_T tmp_p [ 5 ] = { 'f' , 'i' , 'x' , 'e' , 'd' } ; static const
char_T tmp_e [ 8 ] = { 'r' , 'e' , 'v' , 'o' , 'l' , 'u' , 't' , 'e' } ;
static const char_T tmp_i [ 9 ] = { 'p' , 'r' , 'i' , 's' , 'm' , 'a' , 't' ,
'i' , 'c' } ; static const real_T tmp_m [ 16 ] = { - 0.68047509165608866 , -
0.73277121234095821 , - 0.0 , 0.0 , 0.73277121234095821 , -
0.68047509165608866 , 0.0 , 0.0 , - 0.0 , 0.0 , 1.0 , 0.0 ,
2.6645352591003757E-15 , 1.2975731600306517E-15 , - 0.30703499999999911 , 1.0
} ; static const real_T tmp_g [ 16 ] = { 1.0 , 0.0 , 0.0 , 0.0 , 0.0 , 1.0 ,
0.0 , 0.0 , 0.0 , 0.0 , 1.0 , 0.0 , 0.0 , 0.0 , 0.0 , 1.0 } ; int32_T exitg1
; b_obj = obj ; b_kstr = obj -> NameInternal -> size [ 0 ] * obj ->
NameInternal -> size [ 1 ] ; obj -> NameInternal -> size [ 0 ] = 1 ; obj ->
NameInternal -> size [ 1 ] = 5 ; gsven4ga0i ( obj -> NameInternal , b_kstr )
; for ( b_kstr = 0 ; b_kstr < 5 ; b_kstr ++ ) { obj -> NameInternal -> data [
b_kstr ] = tmp [ b_kstr ] ; } obj -> ParentIndex = 6.0 ; b_kstr = obj ->
JointInternal . Type -> size [ 0 ] * obj -> JointInternal . Type -> size [ 1
] ; obj -> JointInternal . Type -> size [ 0 ] = 1 ; obj -> JointInternal .
Type -> size [ 1 ] = 5 ; gsven4ga0i ( obj -> JointInternal . Type , b_kstr )
; for ( b_kstr = 0 ; b_kstr < 5 ; b_kstr ++ ) { obj -> JointInternal . Type
-> data [ b_kstr ] = tmp_p [ b_kstr ] ; } ek533x1it4 ( & switch_expression ,
2 ) ; b_kstr = switch_expression -> size [ 0 ] * switch_expression -> size [
1 ] ; switch_expression -> size [ 0 ] = 1 ; switch_expression -> size [ 1 ] =
obj -> JointInternal . Type -> size [ 1 ] ; gsven4ga0i ( switch_expression ,
b_kstr ) ; loop_ub = obj -> JointInternal . Type -> size [ 1 ] ; for ( b_kstr
= 0 ; b_kstr < loop_ub ; b_kstr ++ ) { switch_expression -> data [ b_kstr ] =
obj -> JointInternal . Type -> data [ b_kstr ] ; } for ( b_kstr = 0 ; b_kstr
< 8 ; b_kstr ++ ) { b [ b_kstr ] = tmp_e [ b_kstr ] ; } b_bool = false ; if (
switch_expression -> size [ 1 ] != 8 ) { } else { b_kstr = 1 ; do { exitg1 =
0 ; if ( b_kstr - 1 < 8 ) { if ( switch_expression -> data [ b_kstr - 1 ] !=
b [ b_kstr - 1 ] ) { exitg1 = 1 ; } else { b_kstr ++ ; } } else { b_bool =
true ; exitg1 = 1 ; } } while ( exitg1 == 0 ) ; } if ( b_bool ) { b_kstr = 0
; } else { for ( b_kstr = 0 ; b_kstr < 9 ; b_kstr ++ ) { b_p [ b_kstr ] =
tmp_i [ b_kstr ] ; } if ( switch_expression -> size [ 1 ] != 9 ) { } else {
b_kstr = 1 ; do { exitg1 = 0 ; if ( b_kstr - 1 < 9 ) { if ( switch_expression
-> data [ b_kstr - 1 ] != b_p [ b_kstr - 1 ] ) { exitg1 = 1 ; } else { b_kstr
++ ; } } else { b_bool = true ; exitg1 = 1 ; } } while ( exitg1 == 0 ) ; } if
( b_bool ) { b_kstr = 1 ; } else { b_kstr = - 1 ; } } dqu5smbks1 ( &
switch_expression ) ; switch ( b_kstr ) { case 0 : obj -> JointInternal .
PositionNumber = 1.0 ; obj -> JointInternal . JointAxisInternal [ 0 ] = 0.0 ;
obj -> JointInternal . JointAxisInternal [ 1 ] = 0.0 ; obj -> JointInternal .
JointAxisInternal [ 2 ] = 1.0 ; break ; case 1 : obj -> JointInternal .
PositionNumber = 1.0 ; obj -> JointInternal . JointAxisInternal [ 0 ] = 0.0 ;
obj -> JointInternal . JointAxisInternal [ 1 ] = 0.0 ; obj -> JointInternal .
JointAxisInternal [ 2 ] = 1.0 ; break ; default : obj -> JointInternal .
PositionNumber = 0.0 ; obj -> JointInternal . JointAxisInternal [ 0 ] = 0.0 ;
obj -> JointInternal . JointAxisInternal [ 1 ] = 0.0 ; obj -> JointInternal .
JointAxisInternal [ 2 ] = 0.0 ; break ; } for ( b_kstr = 0 ; b_kstr < 16 ;
b_kstr ++ ) { obj -> JointInternal . JointToParentTransform [ b_kstr ] =
tmp_m [ b_kstr ] ; } for ( b_kstr = 0 ; b_kstr < 16 ; b_kstr ++ ) { obj ->
JointInternal . ChildToJointTransform [ b_kstr ] = tmp_g [ b_kstr ] ; } obj
-> JointInternal . JointAxisInternal [ 0 ] = 0.0 ; obj -> JointInternal .
JointAxisInternal [ 1 ] = 0.0 ; obj -> JointInternal . JointAxisInternal [ 2
] = 0.0 ; oosvd5bnhe ( & obj -> CollisionsInternal ) ; obj ->
matlabCodegenIsDeleted = false ; return b_obj ; } static void hhsrjmrs4e (
aivhh1v50g * obj ) { lg5jhfa1j5 * switch_expression ; int32_T b_kstr ;
int32_T loop_ub ; char_T b_p [ 9 ] ; char_T b [ 8 ] ; boolean_T b_bool ;
static const char_T tmp [ 5 ] = { 'B' , 'o' , 'd' , 'y' , '1' } ; static
const char_T tmp_p [ 8 ] = { 'r' , 'e' , 'v' , 'o' , 'l' , 'u' , 't' , 'e' }
; static const char_T tmp_e [ 9 ] = { 'p' , 'r' , 'i' , 's' , 'm' , 'a' , 't'
, 'i' , 'c' } ; static const real_T tmp_i [ 16 ] = { 0.84692739772072112 , -
0.53170855079639956 , - 0.0 , 0.0 , - 0.53170855079639956 , -
0.84692739772072112 , 1.2246467991473532E-16 , 0.0 , - 6.5115517481208857E-17
, - 1.0371869267288785E-16 , - 1.0 , 0.0 , 0.0 , 0.0 , 0.129975000000001 ,
1.0 } ; static const real_T tmp_m [ 16 ] = { 1.0 , 0.0 , 0.0 , 0.0 , 0.0 ,
1.0 , 0.0 , 0.0 , 0.0 , 0.0 , 1.0 , 0.0 , 0.0 , 0.0 , 0.0 , 1.0 } ; static
const char_T tmp_g [ 5 ] = { 'B' , 'o' , 'd' , 'y' , '2' } ; static const
real_T tmp_j [ 16 ] = { 0.52921227710730678 , 0.84295122962804792 , -
0.096786312190625445 , 0.0 , 0.051462109791375082 , 0.081970979518861856 ,
0.99530518423875336 , 0.0 , 0.84692739772351189 , - 0.53170855079195445 ,
6.09448654026378E-17 , 0.0 , - 0.12855508881743644 , 0.080708027815108885 , -
0.28898998695028683 , 1.0 } ; static const char_T tmp_f [ 5 ] = { 'B' , 'o' ,
'd' , 'y' , '3' } ; static const real_T tmp_c [ 16 ] = { 0.99887503989935389
, 0.047419981717248857 , - 0.0 , 0.0 , 0.047419981717248857 , -
0.99887503989935389 , 1.2246467991473532E-16 , 0.0 , 5.8072728825654825E-18 ,
- 1.2232691203609284E-16 , - 1.0 , 0.0 , 0.082345474851098888 , -
0.80700970426109886 , 0.024195000000044813 , 1.0 } ; static const char_T
tmp_k [ 5 ] = { 'f' , 'i' , 'x' , 'e' , 'd' } ; int32_T exitg1 ; obj ->
isInitialized = 1 ; obj -> TreeInternal . NumBodies = 7.0 ; afmkhidjlk ( &
obj -> TreeInternal , & obj -> TreeInternal . _pobj0 [ 0 ] ) ; b_kstr = obj
-> TreeInternal . _pobj0 [ 7 ] . NameInternal -> size [ 0 ] * obj ->
TreeInternal . _pobj0 [ 7 ] . NameInternal -> size [ 1 ] ; obj ->
TreeInternal . _pobj0 [ 7 ] . NameInternal -> size [ 0 ] = 1 ; obj ->
TreeInternal . _pobj0 [ 7 ] . NameInternal -> size [ 1 ] = 5 ; gsven4ga0i (
obj -> TreeInternal . _pobj0 [ 7 ] . NameInternal , b_kstr ) ; for ( b_kstr =
0 ; b_kstr < 5 ; b_kstr ++ ) { obj -> TreeInternal . _pobj0 [ 7 ] .
NameInternal -> data [ b_kstr ] = tmp [ b_kstr ] ; } obj -> TreeInternal .
_pobj0 [ 7 ] . ParentIndex = 0.0 ; b_kstr = obj -> TreeInternal . _pobj0 [ 7
] . JointInternal . Type -> size [ 0 ] * obj -> TreeInternal . _pobj0 [ 7 ] .
JointInternal . Type -> size [ 1 ] ; obj -> TreeInternal . _pobj0 [ 7 ] .
JointInternal . Type -> size [ 0 ] = 1 ; obj -> TreeInternal . _pobj0 [ 7 ] .
JointInternal . Type -> size [ 1 ] = 8 ; gsven4ga0i ( obj -> TreeInternal .
_pobj0 [ 7 ] . JointInternal . Type , b_kstr ) ; for ( b_kstr = 0 ; b_kstr <
8 ; b_kstr ++ ) { obj -> TreeInternal . _pobj0 [ 7 ] . JointInternal . Type
-> data [ b_kstr ] = tmp_p [ b_kstr ] ; } ek533x1it4 ( & switch_expression ,
2 ) ; b_kstr = switch_expression -> size [ 0 ] * switch_expression -> size [
1 ] ; switch_expression -> size [ 0 ] = 1 ; switch_expression -> size [ 1 ] =
obj -> TreeInternal . _pobj0 [ 7 ] . JointInternal . Type -> size [ 1 ] ;
gsven4ga0i ( switch_expression , b_kstr ) ; loop_ub = obj -> TreeInternal .
_pobj0 [ 7 ] . JointInternal . Type -> size [ 1 ] ; for ( b_kstr = 0 ; b_kstr
< loop_ub ; b_kstr ++ ) { switch_expression -> data [ b_kstr ] = obj ->
TreeInternal . _pobj0 [ 7 ] . JointInternal . Type -> data [ b_kstr ] ; } for
( b_kstr = 0 ; b_kstr < 8 ; b_kstr ++ ) { b [ b_kstr ] = tmp_p [ b_kstr ] ; }
b_bool = false ; if ( switch_expression -> size [ 1 ] != 8 ) { } else {
b_kstr = 1 ; do { exitg1 = 0 ; if ( b_kstr - 1 < 8 ) { if ( switch_expression
-> data [ b_kstr - 1 ] != b [ b_kstr - 1 ] ) { exitg1 = 1 ; } else { b_kstr
++ ; } } else { b_bool = true ; exitg1 = 1 ; } } while ( exitg1 == 0 ) ; } if
( b_bool ) { b_kstr = 0 ; } else { for ( b_kstr = 0 ; b_kstr < 9 ; b_kstr ++
) { b_p [ b_kstr ] = tmp_e [ b_kstr ] ; } if ( switch_expression -> size [ 1
] != 9 ) { } else { b_kstr = 1 ; do { exitg1 = 0 ; if ( b_kstr - 1 < 9 ) { if
( switch_expression -> data [ b_kstr - 1 ] != b_p [ b_kstr - 1 ] ) { exitg1 =
1 ; } else { b_kstr ++ ; } } else { b_bool = true ; exitg1 = 1 ; } } while (
exitg1 == 0 ) ; } if ( b_bool ) { b_kstr = 1 ; } else { b_kstr = - 1 ; } }
switch ( b_kstr ) { case 0 : obj -> TreeInternal . _pobj0 [ 7 ] .
JointInternal . PositionNumber = 1.0 ; obj -> TreeInternal . _pobj0 [ 7 ] .
JointInternal . JointAxisInternal [ 0 ] = 0.0 ; obj -> TreeInternal . _pobj0
[ 7 ] . JointInternal . JointAxisInternal [ 1 ] = 0.0 ; obj -> TreeInternal .
_pobj0 [ 7 ] . JointInternal . JointAxisInternal [ 2 ] = 1.0 ; break ; case 1
: obj -> TreeInternal . _pobj0 [ 7 ] . JointInternal . PositionNumber = 1.0 ;
obj -> TreeInternal . _pobj0 [ 7 ] . JointInternal . JointAxisInternal [ 0 ]
= 0.0 ; obj -> TreeInternal . _pobj0 [ 7 ] . JointInternal .
JointAxisInternal [ 1 ] = 0.0 ; obj -> TreeInternal . _pobj0 [ 7 ] .
JointInternal . JointAxisInternal [ 2 ] = 1.0 ; break ; default : obj ->
TreeInternal . _pobj0 [ 7 ] . JointInternal . PositionNumber = 0.0 ; obj ->
TreeInternal . _pobj0 [ 7 ] . JointInternal . JointAxisInternal [ 0 ] = 0.0 ;
obj -> TreeInternal . _pobj0 [ 7 ] . JointInternal . JointAxisInternal [ 1 ]
= 0.0 ; obj -> TreeInternal . _pobj0 [ 7 ] . JointInternal .
JointAxisInternal [ 2 ] = 0.0 ; break ; } for ( b_kstr = 0 ; b_kstr < 16 ;
b_kstr ++ ) { obj -> TreeInternal . _pobj0 [ 7 ] . JointInternal .
JointToParentTransform [ b_kstr ] = tmp_i [ b_kstr ] ; } for ( b_kstr = 0 ;
b_kstr < 16 ; b_kstr ++ ) { obj -> TreeInternal . _pobj0 [ 7 ] .
JointInternal . ChildToJointTransform [ b_kstr ] = tmp_m [ b_kstr ] ; } obj
-> TreeInternal . _pobj0 [ 7 ] . JointInternal . JointAxisInternal [ 0 ] =
0.0 ; obj -> TreeInternal . _pobj0 [ 7 ] . JointInternal . JointAxisInternal
[ 1 ] = 0.0 ; obj -> TreeInternal . _pobj0 [ 7 ] . JointInternal .
JointAxisInternal [ 2 ] = 1.0 ; oosvd5bnhe ( & obj -> TreeInternal . _pobj0 [
7 ] . CollisionsInternal ) ; obj -> TreeInternal . _pobj0 [ 7 ] .
matlabCodegenIsDeleted = false ; obj -> TreeInternal . Bodies [ 0 ] = & obj
-> TreeInternal . _pobj0 [ 7 ] ; b_kstr = obj -> TreeInternal . _pobj0 [ 8 ]
. NameInternal -> size [ 0 ] * obj -> TreeInternal . _pobj0 [ 8 ] .
NameInternal -> size [ 1 ] ; obj -> TreeInternal . _pobj0 [ 8 ] .
NameInternal -> size [ 0 ] = 1 ; obj -> TreeInternal . _pobj0 [ 8 ] .
NameInternal -> size [ 1 ] = 5 ; gsven4ga0i ( obj -> TreeInternal . _pobj0 [
8 ] . NameInternal , b_kstr ) ; for ( b_kstr = 0 ; b_kstr < 5 ; b_kstr ++ ) {
obj -> TreeInternal . _pobj0 [ 8 ] . NameInternal -> data [ b_kstr ] = tmp_g
[ b_kstr ] ; } obj -> TreeInternal . _pobj0 [ 8 ] . ParentIndex = 1.0 ;
b_kstr = obj -> TreeInternal . _pobj0 [ 8 ] . JointInternal . Type -> size [
0 ] * obj -> TreeInternal . _pobj0 [ 8 ] . JointInternal . Type -> size [ 1 ]
; obj -> TreeInternal . _pobj0 [ 8 ] . JointInternal . Type -> size [ 0 ] = 1
; obj -> TreeInternal . _pobj0 [ 8 ] . JointInternal . Type -> size [ 1 ] = 8
; gsven4ga0i ( obj -> TreeInternal . _pobj0 [ 8 ] . JointInternal . Type ,
b_kstr ) ; for ( b_kstr = 0 ; b_kstr < 8 ; b_kstr ++ ) { obj -> TreeInternal
. _pobj0 [ 8 ] . JointInternal . Type -> data [ b_kstr ] = tmp_p [ b_kstr ] ;
} b_kstr = switch_expression -> size [ 0 ] * switch_expression -> size [ 1 ]
; switch_expression -> size [ 0 ] = 1 ; switch_expression -> size [ 1 ] = obj
-> TreeInternal . _pobj0 [ 8 ] . JointInternal . Type -> size [ 1 ] ;
gsven4ga0i ( switch_expression , b_kstr ) ; loop_ub = obj -> TreeInternal .
_pobj0 [ 8 ] . JointInternal . Type -> size [ 1 ] ; for ( b_kstr = 0 ; b_kstr
< loop_ub ; b_kstr ++ ) { switch_expression -> data [ b_kstr ] = obj ->
TreeInternal . _pobj0 [ 8 ] . JointInternal . Type -> data [ b_kstr ] ; }
b_bool = false ; if ( switch_expression -> size [ 1 ] != 8 ) { } else {
b_kstr = 1 ; do { exitg1 = 0 ; if ( b_kstr - 1 < 8 ) { if ( switch_expression
-> data [ b_kstr - 1 ] != b [ b_kstr - 1 ] ) { exitg1 = 1 ; } else { b_kstr
++ ; } } else { b_bool = true ; exitg1 = 1 ; } } while ( exitg1 == 0 ) ; } if
( b_bool ) { b_kstr = 0 ; } else { for ( b_kstr = 0 ; b_kstr < 9 ; b_kstr ++
) { b_p [ b_kstr ] = tmp_e [ b_kstr ] ; } if ( switch_expression -> size [ 1
] != 9 ) { } else { b_kstr = 1 ; do { exitg1 = 0 ; if ( b_kstr - 1 < 9 ) { if
( switch_expression -> data [ b_kstr - 1 ] != b_p [ b_kstr - 1 ] ) { exitg1 =
1 ; } else { b_kstr ++ ; } } else { b_bool = true ; exitg1 = 1 ; } } while (
exitg1 == 0 ) ; } if ( b_bool ) { b_kstr = 1 ; } else { b_kstr = - 1 ; } }
switch ( b_kstr ) { case 0 : obj -> TreeInternal . _pobj0 [ 8 ] .
JointInternal . PositionNumber = 1.0 ; obj -> TreeInternal . _pobj0 [ 8 ] .
JointInternal . JointAxisInternal [ 0 ] = 0.0 ; obj -> TreeInternal . _pobj0
[ 8 ] . JointInternal . JointAxisInternal [ 1 ] = 0.0 ; obj -> TreeInternal .
_pobj0 [ 8 ] . JointInternal . JointAxisInternal [ 2 ] = 1.0 ; break ; case 1
: obj -> TreeInternal . _pobj0 [ 8 ] . JointInternal . PositionNumber = 1.0 ;
obj -> TreeInternal . _pobj0 [ 8 ] . JointInternal . JointAxisInternal [ 0 ]
= 0.0 ; obj -> TreeInternal . _pobj0 [ 8 ] . JointInternal .
JointAxisInternal [ 1 ] = 0.0 ; obj -> TreeInternal . _pobj0 [ 8 ] .
JointInternal . JointAxisInternal [ 2 ] = 1.0 ; break ; default : obj ->
TreeInternal . _pobj0 [ 8 ] . JointInternal . PositionNumber = 0.0 ; obj ->
TreeInternal . _pobj0 [ 8 ] . JointInternal . JointAxisInternal [ 0 ] = 0.0 ;
obj -> TreeInternal . _pobj0 [ 8 ] . JointInternal . JointAxisInternal [ 1 ]
= 0.0 ; obj -> TreeInternal . _pobj0 [ 8 ] . JointInternal .
JointAxisInternal [ 2 ] = 0.0 ; break ; } for ( b_kstr = 0 ; b_kstr < 16 ;
b_kstr ++ ) { obj -> TreeInternal . _pobj0 [ 8 ] . JointInternal .
JointToParentTransform [ b_kstr ] = tmp_j [ b_kstr ] ; } for ( b_kstr = 0 ;
b_kstr < 16 ; b_kstr ++ ) { obj -> TreeInternal . _pobj0 [ 8 ] .
JointInternal . ChildToJointTransform [ b_kstr ] = tmp_m [ b_kstr ] ; } obj
-> TreeInternal . _pobj0 [ 8 ] . JointInternal . JointAxisInternal [ 0 ] =
0.0 ; obj -> TreeInternal . _pobj0 [ 8 ] . JointInternal . JointAxisInternal
[ 1 ] = 0.0 ; obj -> TreeInternal . _pobj0 [ 8 ] . JointInternal .
JointAxisInternal [ 2 ] = 1.0 ; oosvd5bnhe ( & obj -> TreeInternal . _pobj0 [
8 ] . CollisionsInternal ) ; obj -> TreeInternal . _pobj0 [ 8 ] .
matlabCodegenIsDeleted = false ; obj -> TreeInternal . Bodies [ 1 ] = & obj
-> TreeInternal . _pobj0 [ 8 ] ; b_kstr = obj -> TreeInternal . _pobj0 [ 9 ]
. NameInternal -> size [ 0 ] * obj -> TreeInternal . _pobj0 [ 9 ] .
NameInternal -> size [ 1 ] ; obj -> TreeInternal . _pobj0 [ 9 ] .
NameInternal -> size [ 0 ] = 1 ; obj -> TreeInternal . _pobj0 [ 9 ] .
NameInternal -> size [ 1 ] = 5 ; gsven4ga0i ( obj -> TreeInternal . _pobj0 [
9 ] . NameInternal , b_kstr ) ; for ( b_kstr = 0 ; b_kstr < 5 ; b_kstr ++ ) {
obj -> TreeInternal . _pobj0 [ 9 ] . NameInternal -> data [ b_kstr ] = tmp_f
[ b_kstr ] ; } obj -> TreeInternal . _pobj0 [ 9 ] . ParentIndex = 2.0 ;
b_kstr = obj -> TreeInternal . _pobj0 [ 9 ] . JointInternal . Type -> size [
0 ] * obj -> TreeInternal . _pobj0 [ 9 ] . JointInternal . Type -> size [ 1 ]
; obj -> TreeInternal . _pobj0 [ 9 ] . JointInternal . Type -> size [ 0 ] = 1
; obj -> TreeInternal . _pobj0 [ 9 ] . JointInternal . Type -> size [ 1 ] = 8
; gsven4ga0i ( obj -> TreeInternal . _pobj0 [ 9 ] . JointInternal . Type ,
b_kstr ) ; for ( b_kstr = 0 ; b_kstr < 8 ; b_kstr ++ ) { obj -> TreeInternal
. _pobj0 [ 9 ] . JointInternal . Type -> data [ b_kstr ] = tmp_p [ b_kstr ] ;
} b_kstr = switch_expression -> size [ 0 ] * switch_expression -> size [ 1 ]
; switch_expression -> size [ 0 ] = 1 ; switch_expression -> size [ 1 ] = obj
-> TreeInternal . _pobj0 [ 9 ] . JointInternal . Type -> size [ 1 ] ;
gsven4ga0i ( switch_expression , b_kstr ) ; loop_ub = obj -> TreeInternal .
_pobj0 [ 9 ] . JointInternal . Type -> size [ 1 ] ; for ( b_kstr = 0 ; b_kstr
< loop_ub ; b_kstr ++ ) { switch_expression -> data [ b_kstr ] = obj ->
TreeInternal . _pobj0 [ 9 ] . JointInternal . Type -> data [ b_kstr ] ; }
b_bool = false ; if ( switch_expression -> size [ 1 ] != 8 ) { } else {
b_kstr = 1 ; do { exitg1 = 0 ; if ( b_kstr - 1 < 8 ) { if ( switch_expression
-> data [ b_kstr - 1 ] != b [ b_kstr - 1 ] ) { exitg1 = 1 ; } else { b_kstr
++ ; } } else { b_bool = true ; exitg1 = 1 ; } } while ( exitg1 == 0 ) ; } if
( b_bool ) { b_kstr = 0 ; } else { for ( b_kstr = 0 ; b_kstr < 9 ; b_kstr ++
) { b_p [ b_kstr ] = tmp_e [ b_kstr ] ; } if ( switch_expression -> size [ 1
] != 9 ) { } else { b_kstr = 1 ; do { exitg1 = 0 ; if ( b_kstr - 1 < 9 ) { if
( switch_expression -> data [ b_kstr - 1 ] != b_p [ b_kstr - 1 ] ) { exitg1 =
1 ; } else { b_kstr ++ ; } } else { b_bool = true ; exitg1 = 1 ; } } while (
exitg1 == 0 ) ; } if ( b_bool ) { b_kstr = 1 ; } else { b_kstr = - 1 ; } }
switch ( b_kstr ) { case 0 : obj -> TreeInternal . _pobj0 [ 9 ] .
JointInternal . PositionNumber = 1.0 ; obj -> TreeInternal . _pobj0 [ 9 ] .
JointInternal . JointAxisInternal [ 0 ] = 0.0 ; obj -> TreeInternal . _pobj0
[ 9 ] . JointInternal . JointAxisInternal [ 1 ] = 0.0 ; obj -> TreeInternal .
_pobj0 [ 9 ] . JointInternal . JointAxisInternal [ 2 ] = 1.0 ; break ; case 1
: obj -> TreeInternal . _pobj0 [ 9 ] . JointInternal . PositionNumber = 1.0 ;
obj -> TreeInternal . _pobj0 [ 9 ] . JointInternal . JointAxisInternal [ 0 ]
= 0.0 ; obj -> TreeInternal . _pobj0 [ 9 ] . JointInternal .
JointAxisInternal [ 1 ] = 0.0 ; obj -> TreeInternal . _pobj0 [ 9 ] .
JointInternal . JointAxisInternal [ 2 ] = 1.0 ; break ; default : obj ->
TreeInternal . _pobj0 [ 9 ] . JointInternal . PositionNumber = 0.0 ; obj ->
TreeInternal . _pobj0 [ 9 ] . JointInternal . JointAxisInternal [ 0 ] = 0.0 ;
obj -> TreeInternal . _pobj0 [ 9 ] . JointInternal . JointAxisInternal [ 1 ]
= 0.0 ; obj -> TreeInternal . _pobj0 [ 9 ] . JointInternal .
JointAxisInternal [ 2 ] = 0.0 ; break ; } for ( b_kstr = 0 ; b_kstr < 16 ;
b_kstr ++ ) { obj -> TreeInternal . _pobj0 [ 9 ] . JointInternal .
JointToParentTransform [ b_kstr ] = tmp_c [ b_kstr ] ; } for ( b_kstr = 0 ;
b_kstr < 16 ; b_kstr ++ ) { obj -> TreeInternal . _pobj0 [ 9 ] .
JointInternal . ChildToJointTransform [ b_kstr ] = tmp_m [ b_kstr ] ; } obj
-> TreeInternal . _pobj0 [ 9 ] . JointInternal . JointAxisInternal [ 0 ] =
0.0 ; obj -> TreeInternal . _pobj0 [ 9 ] . JointInternal . JointAxisInternal
[ 1 ] = 0.0 ; obj -> TreeInternal . _pobj0 [ 9 ] . JointInternal .
JointAxisInternal [ 2 ] = 1.0 ; oosvd5bnhe ( & obj -> TreeInternal . _pobj0 [
9 ] . CollisionsInternal ) ; obj -> TreeInternal . _pobj0 [ 9 ] .
matlabCodegenIsDeleted = false ; obj -> TreeInternal . Bodies [ 2 ] = & obj
-> TreeInternal . _pobj0 [ 9 ] ; obj -> TreeInternal . Bodies [ 3 ] =
bk5rrjfzplyhc ( & obj -> TreeInternal . _pobj0 [ 10 ] ) ; obj -> TreeInternal
. Bodies [ 4 ] = bk5rrjfzplyhc0 ( & obj -> TreeInternal . _pobj0 [ 11 ] ) ;
obj -> TreeInternal . Bodies [ 5 ] = bk5rrjfzplyhc0n ( & obj -> TreeInternal
. _pobj0 [ 12 ] ) ; obj -> TreeInternal . Bodies [ 6 ] = fgvc0f5qwj ( & obj
-> TreeInternal . _pobj0 [ 13 ] ) ; obj -> TreeInternal . PositionNumber =
6.0 ; b_kstr = obj -> TreeInternal . Base . NameInternal -> size [ 0 ] * obj
-> TreeInternal . Base . NameInternal -> size [ 1 ] ; obj -> TreeInternal .
Base . NameInternal -> size [ 0 ] = 1 ; obj -> TreeInternal . Base .
NameInternal -> size [ 1 ] = 4 ; gsven4ga0i ( obj -> TreeInternal . Base .
NameInternal , b_kstr ) ; obj -> TreeInternal . Base . NameInternal -> data [
0 ] = 'B' ; obj -> TreeInternal . Base . NameInternal -> data [ 1 ] = 'a' ;
obj -> TreeInternal . Base . NameInternal -> data [ 2 ] = 's' ; obj ->
TreeInternal . Base . NameInternal -> data [ 3 ] = 'e' ; obj -> TreeInternal
. Base . ParentIndex = - 1.0 ; b_kstr = obj -> TreeInternal . Base .
JointInternal . Type -> size [ 0 ] * obj -> TreeInternal . Base .
JointInternal . Type -> size [ 1 ] ; obj -> TreeInternal . Base .
JointInternal . Type -> size [ 0 ] = 1 ; obj -> TreeInternal . Base .
JointInternal . Type -> size [ 1 ] = 5 ; gsven4ga0i ( obj -> TreeInternal .
Base . JointInternal . Type , b_kstr ) ; for ( b_kstr = 0 ; b_kstr < 5 ;
b_kstr ++ ) { obj -> TreeInternal . Base . JointInternal . Type -> data [
b_kstr ] = tmp_k [ b_kstr ] ; } b_kstr = switch_expression -> size [ 0 ] *
switch_expression -> size [ 1 ] ; switch_expression -> size [ 0 ] = 1 ;
switch_expression -> size [ 1 ] = obj -> TreeInternal . Base . JointInternal
. Type -> size [ 1 ] ; gsven4ga0i ( switch_expression , b_kstr ) ; loop_ub =
obj -> TreeInternal . Base . JointInternal . Type -> size [ 1 ] ; for (
b_kstr = 0 ; b_kstr < loop_ub ; b_kstr ++ ) { switch_expression -> data [
b_kstr ] = obj -> TreeInternal . Base . JointInternal . Type -> data [ b_kstr
] ; } b_bool = false ; if ( switch_expression -> size [ 1 ] != 8 ) { } else {
b_kstr = 1 ; do { exitg1 = 0 ; if ( b_kstr - 1 < 8 ) { if ( switch_expression
-> data [ b_kstr - 1 ] != b [ b_kstr - 1 ] ) { exitg1 = 1 ; } else { b_kstr
++ ; } } else { b_bool = true ; exitg1 = 1 ; } } while ( exitg1 == 0 ) ; } if
( b_bool ) { b_kstr = 0 ; } else { for ( b_kstr = 0 ; b_kstr < 9 ; b_kstr ++
) { b_p [ b_kstr ] = tmp_e [ b_kstr ] ; } if ( switch_expression -> size [ 1
] != 9 ) { } else { b_kstr = 1 ; do { exitg1 = 0 ; if ( b_kstr - 1 < 9 ) { if
( switch_expression -> data [ b_kstr - 1 ] != b_p [ b_kstr - 1 ] ) { exitg1 =
1 ; } else { b_kstr ++ ; } } else { b_bool = true ; exitg1 = 1 ; } } while (
exitg1 == 0 ) ; } if ( b_bool ) { b_kstr = 1 ; } else { b_kstr = - 1 ; } }
dqu5smbks1 ( & switch_expression ) ; switch ( b_kstr ) { case 0 : obj ->
TreeInternal . Base . JointInternal . PositionNumber = 1.0 ; obj ->
TreeInternal . Base . JointInternal . JointAxisInternal [ 0 ] = 0.0 ; obj ->
TreeInternal . Base . JointInternal . JointAxisInternal [ 1 ] = 0.0 ; obj ->
TreeInternal . Base . JointInternal . JointAxisInternal [ 2 ] = 1.0 ; break ;
case 1 : obj -> TreeInternal . Base . JointInternal . PositionNumber = 1.0 ;
obj -> TreeInternal . Base . JointInternal . JointAxisInternal [ 0 ] = 0.0 ;
obj -> TreeInternal . Base . JointInternal . JointAxisInternal [ 1 ] = 0.0 ;
obj -> TreeInternal . Base . JointInternal . JointAxisInternal [ 2 ] = 1.0 ;
break ; default : obj -> TreeInternal . Base . JointInternal . PositionNumber
= 0.0 ; obj -> TreeInternal . Base . JointInternal . JointAxisInternal [ 0 ]
= 0.0 ; obj -> TreeInternal . Base . JointInternal . JointAxisInternal [ 1 ]
= 0.0 ; obj -> TreeInternal . Base . JointInternal . JointAxisInternal [ 2 ]
= 0.0 ; break ; } oosvd5bnhe ( & obj -> TreeInternal . Base .
CollisionsInternal ) ; obj -> TreeInternal . Base . matlabCodegenIsDeleted =
false ; obj -> TreeInternal . matlabCodegenIsDeleted = false ; } static void
pydvmq1zho ( hohltwy3pn * * pEmxArray , int32_T numDimensions ) { hohltwy3pn
* emxArray ; int32_T i ; * pEmxArray = ( hohltwy3pn * ) malloc ( sizeof (
hohltwy3pn ) ) ; emxArray = * pEmxArray ; emxArray -> data = ( int8_T * )
NULL ; emxArray -> numDimensions = numDimensions ; emxArray -> size = (
int32_T * ) malloc ( sizeof ( int32_T ) * ( uint32_T ) numDimensions ) ;
emxArray -> allocatedSize = 0 ; emxArray -> canFreeData = true ; for ( i = 0
; i < numDimensions ; i ++ ) { emxArray -> size [ i ] = 0 ; } } static void
o1aul0u4rr ( hohltwy3pn * emxArray , int32_T oldNumel ) { int32_T i ; int32_T
newNumel ; void * newData ; if ( oldNumel < 0 ) { oldNumel = 0 ; } newNumel =
1 ; for ( i = 0 ; i < emxArray -> numDimensions ; i ++ ) { newNumel *=
emxArray -> size [ i ] ; } if ( newNumel > emxArray -> allocatedSize ) { i =
emxArray -> allocatedSize ; if ( i < 16 ) { i = 16 ; } while ( i < newNumel )
{ if ( i > 1073741823 ) { i = MAX_int32_T ; } else { i <<= 1 ; } } newData =
calloc ( ( uint32_T ) i , sizeof ( int8_T ) ) ; if ( emxArray -> data != NULL
) { memcpy ( newData , emxArray -> data , sizeof ( int8_T ) * ( uint32_T )
oldNumel ) ; if ( emxArray -> canFreeData ) { free ( emxArray -> data ) ; } }
emxArray -> data = ( int8_T * ) newData ; emxArray -> allocatedSize = i ;
emxArray -> canFreeData = true ; } } static void cxf0kehzkg ( hohltwy3pn * *
pEmxArray ) { if ( * pEmxArray != ( hohltwy3pn * ) NULL ) { if ( ( ( *
pEmxArray ) -> data != ( int8_T * ) NULL ) && ( * pEmxArray ) -> canFreeData
) { free ( ( * pEmxArray ) -> data ) ; } free ( ( * pEmxArray ) -> size ) ;
free ( * pEmxArray ) ; * pEmxArray = ( hohltwy3pn * ) NULL ; } } static void
hc1ry5yxnz ( i5s4hgzi5z * obj , hnyeda4wkh * limits ) { cwp5dxx3gqu * body ;
lg5jhfa1j5 * a ; orkdduvnogx * obj_p ; real_T k ; real_T pnum ; int32_T
b_kstr ; int32_T c ; int32_T i ; int32_T limits_p ; int32_T loop_ub ; char_T
b [ 5 ] ; boolean_T b_bool ; static const char_T tmp [ 5 ] = { 'f' , 'i' ,
'x' , 'e' , 'd' } ; int32_T exitg1 ; int32_T i_p ; i_p = limits -> size [ 0 ]
* limits -> size [ 1 ] ; limits -> size [ 0 ] = ( int32_T ) obj ->
PositionNumber ; limits -> size [ 1 ] = 2 ; o4pyrzarz5 ( limits , i_p ) ;
loop_ub = ( int32_T ) obj -> PositionNumber << 1 ; if ( loop_ub - 1 >= 0 ) {
memset ( & limits -> data [ 0 ] , 0 , ( uint32_T ) loop_ub * sizeof ( real_T
) ) ; } k = 1.0 ; pnum = obj -> NumBodies ; c = ( int32_T ) pnum - 1 ; if ( (
int32_T ) pnum - 1 >= 0 ) { for ( i_p = 0 ; i_p < 5 ; i_p ++ ) { b [ i_p ] =
tmp [ i_p ] ; } } ek533x1it4 ( & a , 2 ) ; for ( limits_p = 0 ; limits_p <= c
; limits_p ++ ) { body = obj -> Bodies [ limits_p ] ; i_p = a -> size [ 0 ] *
a -> size [ 1 ] ; a -> size [ 0 ] = 1 ; a -> size [ 1 ] = body ->
JointInternal -> Type -> size [ 1 ] ; gsven4ga0i ( a , i_p ) ; loop_ub = body
-> JointInternal -> Type -> size [ 1 ] ; for ( i_p = 0 ; i_p < loop_ub ; i_p
++ ) { a -> data [ i_p ] = body -> JointInternal -> Type -> data [ i_p ] ; }
b_bool = false ; if ( a -> size [ 1 ] != 5 ) { } else { b_kstr = 1 ; do {
exitg1 = 0 ; if ( b_kstr - 1 < 5 ) { if ( a -> data [ b_kstr - 1 ] != b [
b_kstr - 1 ] ) { exitg1 = 1 ; } else { b_kstr ++ ; } } else { b_bool = true ;
exitg1 = 1 ; } } while ( exitg1 == 0 ) ; } if ( ! b_bool ) { pnum = body ->
JointInternal -> PositionNumber ; if ( k > ( k + pnum ) - 1.0 ) { b_kstr = 0
; } else { b_kstr = ( int32_T ) k - 1 ; } obj_p = body -> JointInternal ;
loop_ub = obj_p -> PositionLimitsInternal -> size [ 0 ] ; for ( i_p = 0 ; i_p
< 2 ; i_p ++ ) { for ( i = 0 ; i < loop_ub ; i ++ ) { limits -> data [ (
b_kstr + i ) + limits -> size [ 0 ] * i_p ] = obj_p -> PositionLimitsInternal
-> data [ obj_p -> PositionLimitsInternal -> size [ 0 ] * i_p + i ] ; } } k
+= pnum ; } } dqu5smbks1 ( & a ) ; } static void jmui04zg1k ( boolean_T in1 [
6 ] , const real_T in2 [ 6 ] , const hnyeda4wkh * in3 ) { int32_T i ; int32_T
stride_0_0 ; stride_0_0 = ( in3 -> size [ 0 ] != 1 ) ; for ( i = 0 ; i < 6 ;
i ++ ) { in1 [ i ] = ( in2 [ i ] <= in3 -> data [ i * stride_0_0 + in3 ->
size [ 0 ] ] + 4.4408920985006262E-16 ) ; } } static void epjk1yr5ig0n51u (
boolean_T in1 [ 6 ] , const real_T in2 [ 6 ] , const hnyeda4wkh * in3 ) {
int32_T i ; int32_T stride_0_0 ; stride_0_0 = ( in3 -> size [ 0 ] != 1 ) ;
for ( i = 0 ; i < 6 ; i ++ ) { in1 [ i ] = ( in2 [ i ] >= in3 -> data [ i *
stride_0_0 ] - 4.4408920985006262E-16 ) ; } } static void nrmihjhybi ( const
boolean_T x [ 6 ] , int32_T i_data [ ] , int32_T * i_size ) { int32_T b_ii ;
int32_T idx ; boolean_T exitg1 ; idx = 0 ; b_ii = 1 ; exitg1 = false ; while
( ( ! exitg1 ) && ( b_ii - 1 < 6 ) ) { if ( x [ b_ii - 1 ] ) { idx ++ ;
i_data [ idx - 1 ] = b_ii ; if ( idx >= 6 ) { exitg1 = true ; } else { b_ii
++ ; } } else { b_ii ++ ; } } if ( idx < 1 ) { * i_size = 0 ; } else { *
i_size = idx ; } } static void ffbryqludb ( real_T * tstart_tv_sec , real_T *
tstart_tv_nsec ) { coderTimespec b_timespec ; if ( ! rtDW . k2aa442psi ) {
rtDW . k2aa442psi = true ; coderInitTimeFunctions ( & rtDW . fa5qdx3osn ) ; }
coderTimeClockGettimeMonotonic ( & b_timespec , rtDW . fa5qdx3osn ) ; *
tstart_tv_sec = b_timespec . tv_sec ; * tstart_tv_nsec = b_timespec . tv_nsec
; } static void d0w3001n1s ( i5s4hgzi5z * obj , cwp5dxx3gqu * body ,
hnyeda4wkh * indices ) { real_T i ; int32_T loop_ub ; loop_ub = indices ->
size [ 0 ] * indices -> size [ 1 ] ; indices -> size [ 0 ] = 1 ; indices ->
size [ 1 ] = ( int32_T ) ( obj -> NumBodies + 1.0 ) ; o4pyrzarz5 ( indices ,
loop_ub ) ; loop_ub = ( int32_T ) ( obj -> NumBodies + 1.0 ) ; if ( loop_ub -
1 >= 0 ) { memset ( & indices -> data [ 0 ] , 0 , ( uint32_T ) loop_ub *
sizeof ( real_T ) ) ; } i = 2.0 ; indices -> data [ 0 ] = body -> Index ;
while ( body -> ParentIndex > 0.0 ) { body = obj -> Bodies [ ( int32_T ) body
-> ParentIndex - 1 ] ; indices -> data [ ( int32_T ) i - 1 ] = body -> Index
; i ++ ; } if ( body -> Index > 0.0 ) { indices -> data [ ( int32_T ) i - 1 ]
= body -> ParentIndex ; i ++ ; } loop_ub = indices -> size [ 0 ] * indices ->
size [ 1 ] ; indices -> size [ 0 ] = 1 ; indices -> size [ 1 ] = ( int32_T )
( i - 1.0 ) ; o4pyrzarz5 ( indices , loop_ub ) ; } static void bf150obh1j (
i5s4hgzi5z * obj , cwp5dxx3gqu * body1 , cwp5dxx3gqu * body2 , hnyeda4wkh *
indices ) { hnyeda4wkh * ancestorIndices1 ; hnyeda4wkh * ancestorIndices2 ;
int32_T b_i ; int32_T d ; int32_T g ; int32_T h ; int32_T i ; int32_T
minPathLength ; boolean_T exitg1 ; jolvb3jiwj ( & ancestorIndices1 , 2 ) ;
d0w3001n1s ( obj , body1 , ancestorIndices1 ) ; jolvb3jiwj ( &
ancestorIndices2 , 2 ) ; d0w3001n1s ( obj , body2 , ancestorIndices2 ) ;
minPathLength = ( int32_T ) muDoubleScalarMin ( ancestorIndices1 -> size [ 1
] , ancestorIndices2 -> size [ 1 ] ) ; b_i = 0 ; exitg1 = false ; while ( ( !
exitg1 ) && ( b_i <= minPathLength - 2 ) ) { if ( ancestorIndices1 -> data [
( ancestorIndices1 -> size [ 1 ] - b_i ) - 2 ] != ancestorIndices2 -> data [
( ancestorIndices2 -> size [ 1 ] - b_i ) - 2 ] ) { minPathLength = b_i + 1 ;
exitg1 = true ; } else { b_i ++ ; } } d = ancestorIndices1 -> size [ 1 ] -
minPathLength ; if ( d < 1 ) { b_i = 0 ; } else { b_i = d ; } d =
ancestorIndices2 -> size [ 1 ] - minPathLength ; if ( d < 1 ) { d = 1 ; h = 1
; g = 0 ; } else { h = - 1 ; g = 1 ; } i = indices -> size [ 0 ] * indices ->
size [ 1 ] ; indices -> size [ 0 ] = 1 ; indices -> size [ 1 ] = ( div_s32 (
g - d , h ) + b_i ) + 2 ; o4pyrzarz5 ( indices , i ) ; if ( b_i - 1 >= 0 ) {
memcpy ( & indices -> data [ 0 ] , & ancestorIndices1 -> data [ 0 ] , (
uint32_T ) b_i * sizeof ( real_T ) ) ; } indices -> data [ b_i ] =
ancestorIndices1 -> data [ ancestorIndices1 -> size [ 1 ] - minPathLength ] ;
jvu10fuanp ( & ancestorIndices1 ) ; minPathLength = div_s32 ( g - d , h ) ;
for ( i = 0 ; i <= minPathLength ; i ++ ) { indices -> data [ ( i + b_i ) + 1
] = ancestorIndices2 -> data [ ( h * i + d ) - 1 ] ; } jvu10fuanp ( &
ancestorIndices2 ) ; } static void d20ewc4t52m ( const orkdduvnogx * obj ,
real_T ax [ 3 ] ) { int32_T b_kstr ; char_T b_p [ 9 ] ; char_T b [ 8 ] ;
boolean_T b_bool ; static const char_T tmp [ 8 ] = { 'r' , 'e' , 'v' , 'o' ,
'l' , 'u' , 't' , 'e' } ; static const char_T tmp_p [ 9 ] = { 'p' , 'r' , 'i'
, 's' , 'm' , 'a' , 't' , 'i' , 'c' } ; int32_T exitg1 ; boolean_T guard1 =
false ; for ( b_kstr = 0 ; b_kstr < 8 ; b_kstr ++ ) { b [ b_kstr ] = tmp [
b_kstr ] ; } b_bool = false ; if ( obj -> Type -> size [ 1 ] != 8 ) { } else
{ b_kstr = 1 ; do { exitg1 = 0 ; if ( b_kstr - 1 < 8 ) { if ( obj -> Type ->
data [ b_kstr - 1 ] != b [ b_kstr - 1 ] ) { exitg1 = 1 ; } else { b_kstr ++ ;
} } else { b_bool = true ; exitg1 = 1 ; } } while ( exitg1 == 0 ) ; } guard1
= false ; if ( b_bool ) { guard1 = true ; } else { for ( b_kstr = 0 ; b_kstr
< 9 ; b_kstr ++ ) { b_p [ b_kstr ] = tmp_p [ b_kstr ] ; } if ( obj -> Type ->
size [ 1 ] != 9 ) { } else { b_kstr = 1 ; do { exitg1 = 0 ; if ( b_kstr - 1 <
9 ) { if ( obj -> Type -> data [ b_kstr - 1 ] != b_p [ b_kstr - 1 ] ) {
exitg1 = 1 ; } else { b_kstr ++ ; } } else { b_bool = true ; exitg1 = 1 ; } }
while ( exitg1 == 0 ) ; } if ( b_bool ) { guard1 = true ; } else { ax [ 0 ] =
( rtNaN ) ; ax [ 1 ] = ( rtNaN ) ; ax [ 2 ] = ( rtNaN ) ; } } if ( guard1 ) {
ax [ 0 ] = obj -> JointAxisInternal [ 0 ] ; ax [ 1 ] = obj ->
JointAxisInternal [ 1 ] ; ax [ 2 ] = obj -> JointAxisInternal [ 2 ] ; } }
static void l04ekjwzta ( real_T varargin_1 , real_T varargin_2 , real_T
varargin_3 , real_T varargin_4 , real_T varargin_5 , real_T varargin_6 ,
real_T varargin_7 , real_T varargin_8 , real_T varargin_9 , real_T y [ 9 ] )
{ y [ 0 ] = varargin_1 ; y [ 1 ] = varargin_2 ; y [ 2 ] = varargin_3 ; y [ 3
] = varargin_4 ; y [ 4 ] = varargin_5 ; y [ 5 ] = varargin_6 ; y [ 6 ] =
varargin_7 ; y [ 7 ] = varargin_8 ; y [ 8 ] = varargin_9 ; } static void
g1ccfqf002 ( const real_T A [ 36 ] , const hnyeda4wkh * B_e , hnyeda4wkh * C
) { real_T s ; int32_T b_i ; int32_T b_j ; int32_T b_k ; int32_T boffset ;
int32_T coffset ; int32_T n ; n = B_e -> size [ 1 ] - 1 ; b_j = C -> size [ 0
] * C -> size [ 1 ] ; C -> size [ 0 ] = 6 ; C -> size [ 1 ] = B_e -> size [ 1
] ; o4pyrzarz5 ( C , b_j ) ; for ( b_j = 0 ; b_j <= n ; b_j ++ ) { coffset =
b_j * 6 - 1 ; boffset = b_j * 6 - 1 ; for ( b_i = 0 ; b_i < 6 ; b_i ++ ) { s
= 0.0 ; for ( b_k = 0 ; b_k < 6 ; b_k ++ ) { s += A [ b_k * 6 + b_i ] * B_e
-> data [ ( boffset + b_k ) + 1 ] ; } C -> data [ ( coffset + b_i ) + 1 ] = s
; } } } static void g3hhstjumo ( i5s4hgzi5z * obj , const real_T qv [ 6 ] ,
const lg5jhfa1j5 * body1Name , real_T T_data [ ] , int32_T T_size [ 2 ] ,
hnyeda4wkh * Jac ) { __m128d tmp_p ; cwp5dxx3gqu * body1 ; cwp5dxx3gqu *
body2 ; hnyeda4wkh * b ; hnyeda4wkh * kinematicPathIndices ; hnyeda4wkh * tmp
; lg5jhfa1j5 * body2Name ; orkdduvnogx * joint ; real_T Tj_e [ 36 ] ; real_T
T1 [ 16 ] ; real_T T1j [ 16 ] ; real_T Tc2p [ 16 ] ; real_T Tj [ 16 ] ;
real_T Tj_p [ 16 ] ; real_T b_e [ 16 ] ; real_T R [ 9 ] ; real_T tempR [ 9 ]
; real_T result_data [ 4 ] ; real_T v [ 3 ] ; real_T Tj_g ; real_T Tj_i ;
real_T Tj_j ; real_T Tj_m ; real_T bid1 ; real_T bid2 ; real_T qidx_idx_1 ;
int32_T Jac_p ; int32_T c ; int32_T f ; int32_T g ; int32_T i ; int32_T
loop_ub ; char_T b_i [ 8 ] ; char_T b_p [ 5 ] ; boolean_T b_bool ; boolean_T
nextBodyIsParent ; static const char_T tmp_e [ 5 ] = { 'f' , 'i' , 'x' , 'e'
, 'd' } ; static const char_T tmp_i [ 8 ] = { 'r' , 'e' , 'v' , 'o' , 'l' ,
'u' , 't' , 'e' } ; hnyeda4wkh * Jac_e ; int32_T exitg1 ; ek533x1it4 ( &
body2Name , 2 ) ; i = body2Name -> size [ 0 ] * body2Name -> size [ 1 ] ;
body2Name -> size [ 0 ] = 1 ; body2Name -> size [ 1 ] = obj -> Base .
NameInternal -> size [ 1 ] ; gsven4ga0i ( body2Name , i ) ; loop_ub = obj ->
Base . NameInternal -> size [ 1 ] ; for ( i = 0 ; i < loop_ub ; i ++ ) {
body2Name -> data [ i ] = obj -> Base . NameInternal -> data [ i ] ; } bid1 =
b3eyeozcmv ( obj , body1Name ) ; bid2 = b3eyeozcmv ( obj , body2Name ) ; if (
bid1 == 0.0 ) { body1 = & obj -> Base ; } else { body1 = obj -> Bodies [ (
int32_T ) bid1 - 1 ] ; } if ( bid2 == 0.0 ) { body2 = & obj -> Base ; } else
{ body2 = obj -> Bodies [ ( int32_T ) bid2 - 1 ] ; } jolvb3jiwj ( &
kinematicPathIndices , 2 ) ; bf150obh1j ( obj , body1 , body2 ,
kinematicPathIndices ) ; memset ( & T1 [ 0 ] , 0 , sizeof ( real_T ) << 4U )
; T1 [ 0 ] = 1.0 ; T1 [ 5 ] = 1.0 ; T1 [ 10 ] = 1.0 ; T1 [ 15 ] = 1.0 ; i =
Jac -> size [ 0 ] * Jac -> size [ 1 ] ; Jac -> size [ 0 ] = 6 ; Jac -> size [
1 ] = ( int32_T ) obj -> PositionNumber ; o4pyrzarz5 ( Jac , i ) ; loop_ub =
6 * ( int32_T ) obj -> PositionNumber ; if ( loop_ub - 1 >= 0 ) { memset ( &
Jac -> data [ 0 ] , 0 , ( uint32_T ) loop_ub * sizeof ( real_T ) ) ; } c =
kinematicPathIndices -> size [ 1 ] - 2 ; if ( kinematicPathIndices -> size [
1 ] - 2 >= 0 ) { for ( i = 0 ; i < 5 ; i ++ ) { b_p [ i ] = tmp_e [ i ] ; } }
jolvb3jiwj ( & b , 2 ) ; jolvb3jiwj ( & tmp , 2 ) ; for ( Jac_p = 0 ; Jac_p
<= c ; Jac_p ++ ) { bid1 = kinematicPathIndices -> data [ Jac_p ] ; if ( bid1
!= 0.0 ) { body1 = obj -> Bodies [ ( int32_T ) bid1 - 1 ] ; } else { body1 =
& obj -> Base ; } bid1 = kinematicPathIndices -> data [ Jac_p + 1 ] ; if (
bid1 != 0.0 ) { body2 = obj -> Bodies [ ( int32_T ) bid1 - 1 ] ; } else {
body2 = & obj -> Base ; } nextBodyIsParent = ( body2 -> Index == body1 ->
ParentIndex ) ; if ( nextBodyIsParent ) { body2 = body1 ; bid1 = 1.0 ; } else
{ bid1 = - 1.0 ; } joint = body2 -> JointInternal ; i = body2Name -> size [ 0
] * body2Name -> size [ 1 ] ; body2Name -> size [ 0 ] = 1 ; body2Name -> size
[ 1 ] = joint -> Type -> size [ 1 ] ; gsven4ga0i ( body2Name , i ) ; loop_ub
= joint -> Type -> size [ 1 ] ; for ( i = 0 ; i < loop_ub ; i ++ ) {
body2Name -> data [ i ] = joint -> Type -> data [ i ] ; } b_bool = false ; if
( body2Name -> size [ 1 ] != 5 ) { } else { i = 1 ; do { exitg1 = 0 ; if ( i
- 1 < 5 ) { if ( body2Name -> data [ i - 1 ] != b_p [ i - 1 ] ) { exitg1 = 1
; } else { i ++ ; } } else { b_bool = true ; exitg1 = 1 ; } } while ( exitg1
== 0 ) ; } if ( b_bool ) { for ( i = 0 ; i < 16 ; i ++ ) { Tj [ i ] = joint
-> JointToParentTransform [ i ] ; } i = body2Name -> size [ 0 ] * body2Name
-> size [ 1 ] ; body2Name -> size [ 0 ] = 1 ; body2Name -> size [ 1 ] = joint
-> Type -> size [ 1 ] ; gsven4ga0i ( body2Name , i ) ; loop_ub = joint ->
Type -> size [ 1 ] ; for ( i = 0 ; i < loop_ub ; i ++ ) { body2Name -> data [
i ] = joint -> Type -> data [ i ] ; } b_bool = false ; if ( body2Name -> size
[ 1 ] != 5 ) { } else { i = 1 ; do { exitg1 = 0 ; if ( i - 1 < 5 ) { if (
body2Name -> data [ i - 1 ] != b_p [ i - 1 ] ) { exitg1 = 1 ; } else { i ++ ;
} } else { b_bool = true ; exitg1 = 1 ; } } while ( exitg1 == 0 ) ; } if (
b_bool ) { bid2 = 0.0 ; } else { for ( i = 0 ; i < 8 ; i ++ ) { b_i [ i ] =
tmp_i [ i ] ; } if ( body2Name -> size [ 1 ] != 8 ) { } else { i = 1 ; do {
exitg1 = 0 ; if ( i - 1 < 8 ) { if ( body2Name -> data [ i - 1 ] != b_i [ i -
1 ] ) { exitg1 = 1 ; } else { i ++ ; } } else { b_bool = true ; exitg1 = 1 ;
} } while ( exitg1 == 0 ) ; } if ( b_bool ) { bid2 = 1.0 ; } else { bid2 = -
1.0 ; } } switch ( ( int32_T ) bid2 ) { case 0 : memset ( & T1j [ 0 ] , 0 ,
sizeof ( real_T ) << 4U ) ; T1j [ 0 ] = 1.0 ; T1j [ 5 ] = 1.0 ; T1j [ 10 ] =
1.0 ; T1j [ 15 ] = 1.0 ; break ; case 1 : d20ewc4t52m ( joint , v ) ; bid1 =
v [ 0 ] ; qidx_idx_1 = v [ 1 ] ; Tj_i = v [ 2 ] ; bid2 = 1.0 /
muDoubleScalarSqrt ( ( bid1 * bid1 + qidx_idx_1 * qidx_idx_1 ) + Tj_i * Tj_i
) ; v [ 0 ] = bid1 * bid2 ; v [ 1 ] = qidx_idx_1 * bid2 ; v [ 2 ] = Tj_i *
bid2 ; l04ekjwzta ( v [ 0 ] * v [ 0 ] * 0.0 + 1.0 , v [ 0 ] * v [ 1 ] * 0.0 -
v [ 2 ] * 0.0 , v [ 0 ] * v [ 2 ] * 0.0 + v [ 1 ] * 0.0 , v [ 0 ] * v [ 1 ] *
0.0 + v [ 2 ] * 0.0 , v [ 1 ] * v [ 1 ] * 0.0 + 1.0 , v [ 1 ] * v [ 2 ] * 0.0
- v [ 0 ] * 0.0 , v [ 0 ] * v [ 2 ] * 0.0 - v [ 1 ] * 0.0 , v [ 1 ] * v [ 2 ]
* 0.0 + v [ 0 ] * 0.0 , v [ 2 ] * v [ 2 ] * 0.0 + 1.0 , tempR ) ; for ( g = 0
; g < 3 ; g ++ ) { R [ g ] = tempR [ g * 3 ] ; R [ g + 3 ] = tempR [ g * 3 +
1 ] ; R [ g + 6 ] = tempR [ g * 3 + 2 ] ; } memset ( & T1j [ 0 ] , 0 , sizeof
( real_T ) << 4U ) ; for ( i = 0 ; i < 3 ; i ++ ) { T1j [ i << 2 ] = R [ 3 *
i ] ; T1j [ ( i << 2 ) + 1 ] = R [ 3 * i + 1 ] ; T1j [ ( i << 2 ) + 2 ] = R [
3 * i + 2 ] ; } T1j [ 15 ] = 1.0 ; break ; default : d20ewc4t52m ( joint , v
) ; memset ( & tempR [ 0 ] , 0 , 9U * sizeof ( real_T ) ) ; tempR [ 0 ] = 1.0
; tempR [ 4 ] = 1.0 ; tempR [ 8 ] = 1.0 ; for ( i = 0 ; i < 3 ; i ++ ) { T1j
[ i << 2 ] = tempR [ 3 * i ] ; T1j [ ( i << 2 ) + 1 ] = tempR [ 3 * i + 1 ] ;
T1j [ ( i << 2 ) + 2 ] = tempR [ 3 * i + 2 ] ; T1j [ i + 12 ] = v [ i ] * 0.0
; } T1j [ 3 ] = 0.0 ; T1j [ 7 ] = 0.0 ; T1j [ 11 ] = 0.0 ; T1j [ 15 ] = 1.0 ;
break ; } for ( i = 0 ; i < 16 ; i ++ ) { b_e [ i ] = joint ->
ChildToJointTransform [ i ] ; } for ( i = 0 ; i < 4 ; i ++ ) { Tj_i = Tj [ i
+ 4 ] ; Tj_m = Tj [ i ] ; Tj_g = Tj [ i + 8 ] ; Tj_j = Tj [ i + 12 ] ; for (
f = 0 ; f < 4 ; f ++ ) { Tj_p [ i + ( f << 2 ) ] = ( ( T1j [ ( f << 2 ) + 1 ]
* Tj_i + T1j [ f << 2 ] * Tj_m ) + T1j [ ( f << 2 ) + 2 ] * Tj_g ) + T1j [ (
f << 2 ) + 3 ] * Tj_j ; } Tj_i = Tj_p [ i + 4 ] ; Tj_m = Tj_p [ i ] ; Tj_g =
Tj_p [ i + 8 ] ; Tj_j = Tj_p [ i + 12 ] ; for ( f = 0 ; f < 4 ; f ++ ) { Tc2p
[ i + ( f << 2 ) ] = ( ( b_e [ ( f << 2 ) + 1 ] * Tj_i + b_e [ f << 2 ] *
Tj_m ) + b_e [ ( f << 2 ) + 2 ] * Tj_g ) + b_e [ ( f << 2 ) + 3 ] * Tj_j ; }
} } else { i = ( int32_T ) body2 -> Index ; bid2 = obj -> PositionDoFMap [ i
- 1 ] ; qidx_idx_1 = obj -> PositionDoFMap [ i + 6 ] ; if ( bid2 > qidx_idx_1
) { g = 0 ; f = 0 ; } else { g = ( int32_T ) bid2 - 1 ; f = ( int32_T )
qidx_idx_1 ; } for ( i = 0 ; i < 16 ; i ++ ) { Tj [ i ] = joint ->
JointToParentTransform [ i ] ; } i = body2Name -> size [ 0 ] * body2Name ->
size [ 1 ] ; body2Name -> size [ 0 ] = 1 ; body2Name -> size [ 1 ] = joint ->
Type -> size [ 1 ] ; gsven4ga0i ( body2Name , i ) ; loop_ub = joint -> Type
-> size [ 1 ] ; for ( i = 0 ; i < loop_ub ; i ++ ) { body2Name -> data [ i ]
= joint -> Type -> data [ i ] ; } if ( body2Name -> size [ 1 ] != 5 ) { }
else { i = 1 ; do { exitg1 = 0 ; if ( i - 1 < 5 ) { if ( body2Name -> data [
i - 1 ] != b_p [ i - 1 ] ) { exitg1 = 1 ; } else { i ++ ; } } else { b_bool =
true ; exitg1 = 1 ; } } while ( exitg1 == 0 ) ; } if ( b_bool ) { bid2 = 0.0
; } else { for ( i = 0 ; i < 8 ; i ++ ) { b_i [ i ] = tmp_i [ i ] ; } if (
body2Name -> size [ 1 ] != 8 ) { } else { i = 1 ; do { exitg1 = 0 ; if ( i -
1 < 8 ) { if ( body2Name -> data [ i - 1 ] != b_i [ i - 1 ] ) { exitg1 = 1 ;
} else { i ++ ; } } else { b_bool = true ; exitg1 = 1 ; } } while ( exitg1 ==
0 ) ; } if ( b_bool ) { bid2 = 1.0 ; } else { bid2 = - 1.0 ; } } switch ( (
int32_T ) bid2 ) { case 0 : memset ( & T1j [ 0 ] , 0 , sizeof ( real_T ) <<
4U ) ; T1j [ 0 ] = 1.0 ; T1j [ 5 ] = 1.0 ; T1j [ 10 ] = 1.0 ; T1j [ 15 ] =
1.0 ; break ; case 1 : d20ewc4t52m ( joint , v ) ; result_data [ 0 ] = v [ 0
] ; result_data [ 1 ] = v [ 1 ] ; result_data [ 2 ] = v [ 2 ] ; if ( ( f - g
!= 0 ) - 1 >= 0 ) { result_data [ 3 ] = qv [ g ] ; } bid2 = result_data [ 0 ]
; v [ 0 ] = bid2 * bid2 ; bid2 = result_data [ 1 ] ; v [ 1 ] = bid2 * bid2 ;
bid2 = result_data [ 2 ] ; bid2 = 1.0 / muDoubleScalarSqrt ( ( v [ 0 ] + v [
1 ] ) + bid2 * bid2 ) ; v [ 0 ] = result_data [ 0 ] * bid2 ; v [ 1 ] =
result_data [ 1 ] * bid2 ; v [ 2 ] = result_data [ 2 ] * bid2 ; qidx_idx_1 =
result_data [ 3 ] ; bid2 = muDoubleScalarCos ( qidx_idx_1 ) ; qidx_idx_1 =
muDoubleScalarSin ( qidx_idx_1 ) ; l04ekjwzta ( v [ 0 ] * v [ 0 ] * ( 1.0 -
bid2 ) + bid2 , v [ 0 ] * v [ 1 ] * ( 1.0 - bid2 ) - v [ 2 ] * qidx_idx_1 , v
[ 0 ] * v [ 2 ] * ( 1.0 - bid2 ) + v [ 1 ] * qidx_idx_1 , v [ 0 ] * v [ 1 ] *
( 1.0 - bid2 ) + v [ 2 ] * qidx_idx_1 , v [ 1 ] * v [ 1 ] * ( 1.0 - bid2 ) +
bid2 , v [ 1 ] * v [ 2 ] * ( 1.0 - bid2 ) - v [ 0 ] * qidx_idx_1 , v [ 0 ] *
v [ 2 ] * ( 1.0 - bid2 ) - v [ 1 ] * qidx_idx_1 , v [ 1 ] * v [ 2 ] * ( 1.0 -
bid2 ) + v [ 0 ] * qidx_idx_1 , v [ 2 ] * v [ 2 ] * ( 1.0 - bid2 ) + bid2 ,
tempR ) ; for ( g = 0 ; g < 3 ; g ++ ) { R [ g ] = tempR [ g * 3 ] ; R [ g +
3 ] = tempR [ g * 3 + 1 ] ; R [ g + 6 ] = tempR [ g * 3 + 2 ] ; } memset ( &
T1j [ 0 ] , 0 , sizeof ( real_T ) << 4U ) ; for ( i = 0 ; i < 3 ; i ++ ) {
T1j [ i << 2 ] = R [ 3 * i ] ; T1j [ ( i << 2 ) + 1 ] = R [ 3 * i + 1 ] ; T1j
[ ( i << 2 ) + 2 ] = R [ 3 * i + 2 ] ; } T1j [ 15 ] = 1.0 ; break ; default :
d20ewc4t52m ( joint , v ) ; memset ( & tempR [ 0 ] , 0 , 9U * sizeof ( real_T
) ) ; tempR [ 0 ] = 1.0 ; tempR [ 4 ] = 1.0 ; tempR [ 8 ] = 1.0 ; bid2 = qv [
g ] ; for ( i = 0 ; i < 3 ; i ++ ) { T1j [ i << 2 ] = tempR [ 3 * i ] ; T1j [
( i << 2 ) + 1 ] = tempR [ 3 * i + 1 ] ; T1j [ ( i << 2 ) + 2 ] = tempR [ 3 *
i + 2 ] ; T1j [ i + 12 ] = v [ i ] * bid2 ; } T1j [ 3 ] = 0.0 ; T1j [ 7 ] =
0.0 ; T1j [ 11 ] = 0.0 ; T1j [ 15 ] = 1.0 ; break ; } for ( i = 0 ; i < 16 ;
i ++ ) { b_e [ i ] = joint -> ChildToJointTransform [ i ] ; } for ( i = 0 ; i
< 4 ; i ++ ) { Tj_i = Tj [ i + 4 ] ; Tj_m = Tj [ i ] ; Tj_g = Tj [ i + 8 ] ;
Tj_j = Tj [ i + 12 ] ; for ( f = 0 ; f < 4 ; f ++ ) { Tj_p [ i + ( f << 2 ) ]
= ( ( T1j [ ( f << 2 ) + 1 ] * Tj_i + T1j [ f << 2 ] * Tj_m ) + T1j [ ( f <<
2 ) + 2 ] * Tj_g ) + T1j [ ( f << 2 ) + 3 ] * Tj_j ; } Tj_i = Tj_p [ i + 4 ]
; Tj_m = Tj_p [ i ] ; Tj_g = Tj_p [ i + 8 ] ; Tj_j = Tj_p [ i + 12 ] ; for (
f = 0 ; f < 4 ; f ++ ) { Tc2p [ i + ( f << 2 ) ] = ( ( b_e [ ( f << 2 ) + 1 ]
* Tj_i + b_e [ f << 2 ] * Tj_m ) + b_e [ ( f << 2 ) + 2 ] * Tj_g ) + b_e [ (
f << 2 ) + 3 ] * Tj_j ; } } i = ( int32_T ) body2 -> Index ; bid2 = obj ->
VelocityDoFMap [ i - 1 ] ; qidx_idx_1 = obj -> VelocityDoFMap [ i + 6 ] ; if
( nextBodyIsParent ) { for ( i = 0 ; i < 16 ; i ++ ) { Tj [ i ] = joint ->
ChildToJointTransform [ i ] ; } } else { for ( i = 0 ; i < 16 ; i ++ ) { T1j
[ i ] = joint -> JointToParentTransform [ i ] ; } for ( i = 0 ; i < 3 ; i ++
) { R [ 3 * i ] = T1j [ i ] ; R [ 3 * i + 1 ] = T1j [ i + 4 ] ; R [ 3 * i + 2
] = T1j [ i + 8 ] ; } for ( i = 0 ; i < 9 ; i ++ ) { tempR [ i ] = - R [ i ]
; } Tj_i = T1j [ 13 ] ; Tj_m = T1j [ 12 ] ; Tj_g = T1j [ 14 ] ; for ( i = 0 ;
i < 3 ; i ++ ) { Tj [ i << 2 ] = R [ 3 * i ] ; Tj [ ( i << 2 ) + 1 ] = R [ 3
* i + 1 ] ; Tj [ ( i << 2 ) + 2 ] = R [ 3 * i + 2 ] ; Tj [ i + 12 ] = ( tempR
[ i + 3 ] * Tj_i + tempR [ i ] * Tj_m ) + tempR [ i + 6 ] * Tj_g ; } Tj [ 3 ]
= 0.0 ; Tj [ 7 ] = 0.0 ; Tj [ 11 ] = 0.0 ; Tj [ 15 ] = 1.0 ; } for ( i = 0 ;
i < 4 ; i ++ ) { Tj_i = Tj [ i + 4 ] ; Tj_m = Tj [ i ] ; Tj_g = Tj [ i + 8 ]
; Tj_j = Tj [ i + 12 ] ; for ( f = 0 ; f < 4 ; f ++ ) { T1j [ i + ( f << 2 )
] = ( ( T1 [ ( f << 2 ) + 1 ] * Tj_i + T1 [ f << 2 ] * Tj_m ) + T1 [ ( f << 2
) + 2 ] * Tj_g ) + T1 [ ( f << 2 ) + 3 ] * Tj_j ; } } for ( i = 0 ; i < 3 ; i
++ ) { R [ 3 * i ] = T1j [ i ] ; R [ 3 * i + 1 ] = T1j [ i + 4 ] ; R [ 3 * i
+ 2 ] = T1j [ i + 8 ] ; } for ( i = 0 ; i < 9 ; i ++ ) { tempR [ i ] = - R [
i ] ; } Tj_i = T1j [ 13 ] ; Tj_m = T1j [ 12 ] ; Tj_g = T1j [ 14 ] ; for ( i =
0 ; i < 3 ; i ++ ) { Tj [ i << 2 ] = R [ 3 * i ] ; Tj [ ( i << 2 ) + 1 ] = R
[ 3 * i + 1 ] ; Tj [ ( i << 2 ) + 2 ] = R [ 3 * i + 2 ] ; Tj [ i + 12 ] = (
tempR [ i + 3 ] * Tj_i + tempR [ i ] * Tj_m ) + tempR [ i + 6 ] * Tj_g ; } Tj
[ 3 ] = 0.0 ; Tj [ 7 ] = 0.0 ; Tj [ 11 ] = 0.0 ; Tj [ 15 ] = 1.0 ; i = b ->
size [ 0 ] * b -> size [ 1 ] ; b -> size [ 0 ] = 6 ; b -> size [ 1 ] = joint
-> MotionSubspace -> size [ 1 ] ; o4pyrzarz5 ( b , i ) ; loop_ub = 6 * joint
-> MotionSubspace -> size [ 1 ] ; for ( i = 0 ; i < loop_ub ; i ++ ) { b ->
data [ i ] = joint -> MotionSubspace -> data [ i ] ; } if ( bid2 > qidx_idx_1
) { g = 0 ; } else { g = ( int32_T ) bid2 - 1 ; } R [ 0 ] = 0.0 ; R [ 3 ] = -
Tj [ 14 ] ; R [ 6 ] = Tj [ 13 ] ; R [ 1 ] = Tj [ 14 ] ; R [ 4 ] = 0.0 ; R [ 7
] = - Tj [ 12 ] ; R [ 2 ] = - Tj [ 13 ] ; R [ 5 ] = Tj [ 12 ] ; R [ 8 ] = 0.0
; for ( i = 0 ; i < 3 ; i ++ ) { bid2 = R [ i + 3 ] ; qidx_idx_1 = R [ i ] ;
Tj_i = R [ i + 6 ] ; for ( f = 0 ; f < 3 ; f ++ ) { tempR [ i + 3 * f ] = (
Tj [ ( f << 2 ) + 1 ] * bid2 + Tj [ f << 2 ] * qidx_idx_1 ) + Tj [ ( f << 2 )
+ 2 ] * Tj_i ; Tj_e [ f + 6 * i ] = Tj [ ( i << 2 ) + f ] ; Tj_e [ f + 6 * (
i + 3 ) ] = 0.0 ; } } for ( i = 0 ; i < 3 ; i ++ ) { Tj_e [ 6 * i + 3 ] =
tempR [ 3 * i ] ; Tj_e [ 6 * ( i + 3 ) + 3 ] = Tj [ i << 2 ] ; Tj_e [ 6 * i +
4 ] = tempR [ 3 * i + 1 ] ; Tj_e [ 6 * ( i + 3 ) + 4 ] = Tj [ ( i << 2 ) + 1
] ; Tj_e [ 6 * i + 5 ] = tempR [ 3 * i + 2 ] ; Tj_e [ 6 * ( i + 3 ) + 5 ] =
Tj [ ( i << 2 ) + 2 ] ; } g1ccfqf002 ( Tj_e , b , tmp ) ; loop_ub = tmp ->
size [ 1 ] ; for ( i = 0 ; i < loop_ub ; i ++ ) { for ( f = 0 ; f <= 4 ; f +=
2 ) { tmp_p = _mm_loadu_pd ( & tmp -> data [ 6 * i + f ] ) ; _mm_storeu_pd (
& Jac -> data [ f + 6 * ( g + i ) ] , _mm_mul_pd ( tmp_p , _mm_set1_pd ( bid1
) ) ) ; } } } if ( nextBodyIsParent ) { for ( i = 0 ; i < 4 ; i ++ ) { bid1 =
Tc2p [ i + 4 ] ; bid2 = Tc2p [ i ] ; qidx_idx_1 = Tc2p [ i + 8 ] ; Tj_i =
Tc2p [ i + 12 ] ; for ( f = 0 ; f < 4 ; f ++ ) { Tj [ i + ( f << 2 ) ] = ( (
T1 [ ( f << 2 ) + 1 ] * bid1 + T1 [ f << 2 ] * bid2 ) + T1 [ ( f << 2 ) + 2 ]
* qidx_idx_1 ) + T1 [ ( f << 2 ) + 3 ] * Tj_i ; } } memcpy ( & T1 [ 0 ] , &
Tj [ 0 ] , sizeof ( real_T ) << 4U ) ; } else { for ( i = 0 ; i < 3 ; i ++ )
{ R [ 3 * i ] = Tc2p [ i ] ; R [ 3 * i + 1 ] = Tc2p [ i + 4 ] ; R [ 3 * i + 2
] = Tc2p [ i + 8 ] ; } for ( i = 0 ; i < 9 ; i ++ ) { tempR [ i ] = - R [ i ]
; } bid1 = Tc2p [ 13 ] ; bid2 = Tc2p [ 12 ] ; qidx_idx_1 = Tc2p [ 14 ] ; for
( i = 0 ; i < 3 ; i ++ ) { Tc2p [ i << 2 ] = R [ 3 * i ] ; Tc2p [ ( i << 2 )
+ 1 ] = R [ 3 * i + 1 ] ; Tc2p [ ( i << 2 ) + 2 ] = R [ 3 * i + 2 ] ; Tc2p [
i + 12 ] = ( tempR [ i + 3 ] * bid1 + tempR [ i ] * bid2 ) + tempR [ i + 6 ]
* qidx_idx_1 ; } Tc2p [ 3 ] = 0.0 ; Tc2p [ 7 ] = 0.0 ; Tc2p [ 11 ] = 0.0 ;
Tc2p [ 15 ] = 1.0 ; for ( i = 0 ; i < 4 ; i ++ ) { bid1 = Tc2p [ i + 4 ] ;
bid2 = Tc2p [ i ] ; qidx_idx_1 = Tc2p [ i + 8 ] ; Tj_i = Tc2p [ i + 12 ] ;
for ( f = 0 ; f < 4 ; f ++ ) { Tj [ i + ( f << 2 ) ] = ( ( T1 [ ( f << 2 ) +
1 ] * bid1 + T1 [ f << 2 ] * bid2 ) + T1 [ ( f << 2 ) + 2 ] * qidx_idx_1 ) +
T1 [ ( f << 2 ) + 3 ] * Tj_i ; } } memcpy ( & T1 [ 0 ] , & Tj [ 0 ] , sizeof
( real_T ) << 4U ) ; } } jvu10fuanp ( & tmp ) ; jvu10fuanp ( & b ) ;
dqu5smbks1 ( & body2Name ) ; jvu10fuanp ( & kinematicPathIndices ) ; for ( i
= 0 ; i < 3 ; i ++ ) { bid1 = T1 [ i << 2 ] ; Tj_e [ 6 * i ] = bid1 ; Tj_e [
6 * ( i + 3 ) ] = 0.0 ; Tj_e [ 6 * i + 3 ] = 0.0 ; Tj_e [ 6 * ( i + 3 ) + 3 ]
= bid1 ; bid1 = T1 [ ( i << 2 ) + 1 ] ; Tj_e [ 6 * i + 1 ] = bid1 ; Tj_e [ 6
* ( i + 3 ) + 1 ] = 0.0 ; Tj_e [ 6 * i + 4 ] = 0.0 ; Tj_e [ 6 * ( i + 3 ) + 4
] = bid1 ; bid1 = T1 [ ( i << 2 ) + 2 ] ; Tj_e [ 6 * i + 2 ] = bid1 ; Tj_e [
6 * ( i + 3 ) + 2 ] = 0.0 ; Tj_e [ 6 * i + 5 ] = 0.0 ; Tj_e [ 6 * ( i + 3 ) +
5 ] = bid1 ; } jolvb3jiwj ( & Jac_e , 2 ) ; i = Jac_e -> size [ 0 ] * Jac_e
-> size [ 1 ] ; Jac_e -> size [ 0 ] = 6 ; Jac_e -> size [ 1 ] = Jac -> size [
1 ] ; o4pyrzarz5 ( Jac_e , i ) ; loop_ub = Jac -> size [ 0 ] * Jac -> size [
1 ] - 1 ; if ( loop_ub >= 0 ) { memcpy ( & Jac_e -> data [ 0 ] , & Jac ->
data [ 0 ] , ( uint32_T ) ( loop_ub + 1 ) * sizeof ( real_T ) ) ; }
g1ccfqf002 ( Tj_e , Jac_e , Jac ) ; jvu10fuanp ( & Jac_e ) ; T_size [ 0 ] = 4
; T_size [ 1 ] = 4 ; memcpy ( & T_data [ 0 ] , & T1 [ 0 ] , sizeof ( real_T )
<< 4U ) ; } static creal_T l4w5q3r2nf ( const creal_T x ) { creal_T b_x ;
real_T absxr ; real_T xr ; xr = x . re ; if ( x . im == 0.0 ) { if ( x . re <
0.0 ) { absxr = 0.0 ; xr = muDoubleScalarSqrt ( - x . re ) ; } else { absxr =
muDoubleScalarSqrt ( x . re ) ; xr = 0.0 ; } } else if ( x . re == 0.0 ) { if
( x . im < 0.0 ) { absxr = muDoubleScalarSqrt ( - x . im / 2.0 ) ; xr = -
absxr ; } else { absxr = muDoubleScalarSqrt ( x . im / 2.0 ) ; xr = absxr ; }
} else if ( muDoubleScalarIsNaN ( x . re ) ) { absxr = ( rtNaN ) ; } else if
( muDoubleScalarIsNaN ( x . im ) ) { absxr = ( rtNaN ) ; xr = ( rtNaN ) ; }
else if ( muDoubleScalarIsInf ( x . im ) ) { absxr = muDoubleScalarAbs ( x .
im ) ; xr = x . im ; } else if ( muDoubleScalarIsInf ( x . re ) ) { if ( x .
re < 0.0 ) { absxr = 0.0 ; xr = x . im * - x . re ; } else { absxr = x . re ;
xr = 0.0 ; } } else { absxr = muDoubleScalarAbs ( x . re ) ; xr =
muDoubleScalarAbs ( x . im ) ; if ( ( absxr > 4.4942328371557893E+307 ) || (
xr > 4.4942328371557893E+307 ) ) { absxr *= 0.5 ; xr *= 0.5 ; xr =
muDoubleScalarHypot ( absxr , xr ) ; if ( xr > absxr ) { absxr =
muDoubleScalarSqrt ( absxr / xr + 1.0 ) * muDoubleScalarSqrt ( xr ) ; } else
{ absxr = muDoubleScalarSqrt ( xr ) * 1.4142135623730951 ; } } else { absxr =
muDoubleScalarSqrt ( ( muDoubleScalarHypot ( absxr , xr ) + absxr ) * 0.5 ) ;
} if ( x . re > 0.0 ) { xr = x . im / absxr * 0.5 ; } else { if ( x . im <
0.0 ) { xr = - absxr ; } else { xr = absxr ; } absxr = x . im / xr * 0.5 ; }
} b_x . re = absxr ; b_x . im = xr ; return b_x ; } static real_T jzgpahy5q0
( int32_T n , const real_T x [ 9 ] , int32_T ix0 ) { real_T absxk ; real_T
scale ; real_T t ; real_T y ; int32_T k ; int32_T kend ; y = 0.0 ; scale =
3.3121686421112381E-170 ; kend = ix0 + n ; for ( k = ix0 ; k < kend ; k ++ )
{ absxk = muDoubleScalarAbs ( x [ k - 1 ] ) ; if ( absxk > scale ) { t =
scale / absxk ; y = y * t * t + 1.0 ; scale = absxk ; } else { t = absxk /
scale ; y += t * t ; } } return scale * muDoubleScalarSqrt ( y ) ; } static
real_T iytcjtxacb ( int32_T n , const real_T x [ 9 ] , int32_T ix0 , const
real_T y [ 9 ] , int32_T iy0 ) { real_T d ; int32_T b ; int32_T k ; d = 0.0 ;
b = ( uint8_T ) n ; for ( k = 0 ; k < b ; k ++ ) { d += x [ ( ix0 + k ) - 1 ]
* y [ ( iy0 + k ) - 1 ] ; } return d ; } static void fxplc5kfuy ( int32_T n ,
real_T a , int32_T ix0 , const real_T y [ 9 ] , int32_T iy0 , real_T b_y [ 9
] ) { int32_T k ; memcpy ( & b_y [ 0 ] , & y [ 0 ] , 9U * sizeof ( real_T ) )
; if ( ! ( a == 0.0 ) ) { for ( k = 0 ; k < n ; k ++ ) { b_y [ ( iy0 + k ) -
1 ] += b_y [ ( ix0 + k ) - 1 ] * a ; } } } static real_T jzgpahy5q0o ( const
real_T x [ 3 ] , int32_T ix0 ) { real_T absxk ; real_T scale ; real_T t ;
real_T y ; int32_T k ; y = 0.0 ; scale = 3.3121686421112381E-170 ; for ( k =
ix0 ; k <= ix0 + 1 ; k ++ ) { absxk = muDoubleScalarAbs ( x [ k - 1 ] ) ; if
( absxk > scale ) { t = scale / absxk ; y = y * t * t + 1.0 ; scale = absxk ;
} else { t = absxk / scale ; y += t * t ; } } return scale *
muDoubleScalarSqrt ( y ) ; } static void fxplc5kfuy0dd ( int32_T n , real_T a
, const real_T x [ 9 ] , int32_T ix0 , real_T y [ 3 ] , int32_T iy0 ) {
__m128d tmp ; int32_T k ; int32_T scalarLB ; int32_T vectorUB ; if ( ! ( a ==
0.0 ) ) { scalarLB = ( n / 2 ) << 1 ; vectorUB = scalarLB - 2 ; for ( k = 0 ;
k <= vectorUB ; k += 2 ) { tmp = _mm_loadu_pd ( & y [ ( iy0 + k ) - 1 ] ) ;
_mm_storeu_pd ( & y [ ( iy0 + k ) - 1 ] , _mm_add_pd ( _mm_mul_pd (
_mm_loadu_pd ( & x [ ( ix0 + k ) - 1 ] ) , _mm_set1_pd ( a ) ) , tmp ) ) ; }
for ( k = scalarLB ; k < n ; k ++ ) { y [ ( iy0 + k ) - 1 ] += x [ ( ix0 + k
) - 1 ] * a ; } } } static void fxplc5kfuy0d ( int32_T n , real_T a , const
real_T x [ 3 ] , int32_T ix0 , const real_T y [ 9 ] , int32_T iy0 , real_T
b_y [ 9 ] ) { __m128d tmp ; int32_T k ; int32_T scalarLB ; int32_T vectorUB ;
memcpy ( & b_y [ 0 ] , & y [ 0 ] , 9U * sizeof ( real_T ) ) ; if ( ! ( a ==
0.0 ) ) { scalarLB = ( n / 2 ) << 1 ; vectorUB = scalarLB - 2 ; for ( k = 0 ;
k <= vectorUB ; k += 2 ) { tmp = _mm_loadu_pd ( & b_y [ ( iy0 + k ) - 1 ] ) ;
_mm_storeu_pd ( & b_y [ ( iy0 + k ) - 1 ] , _mm_add_pd ( _mm_mul_pd (
_mm_loadu_pd ( & x [ ( ix0 + k ) - 1 ] ) , _mm_set1_pd ( a ) ) , tmp ) ) ; }
for ( k = scalarLB ; k < n ; k ++ ) { b_y [ ( iy0 + k ) - 1 ] += x [ ( ix0 +
k ) - 1 ] * a ; } } } static void mwey5zjafr ( const real_T x [ 9 ] , int32_T
ix0 , int32_T iy0 , real_T b_x [ 9 ] ) { real_T temp ; memcpy ( & b_x [ 0 ] ,
& x [ 0 ] , 9U * sizeof ( real_T ) ) ; temp = b_x [ ix0 - 1 ] ; b_x [ ix0 - 1
] = b_x [ iy0 - 1 ] ; b_x [ iy0 - 1 ] = temp ; temp = b_x [ ix0 ] ; b_x [ ix0
] = b_x [ iy0 ] ; b_x [ iy0 ] = temp ; temp = b_x [ ix0 + 1 ] ; b_x [ ix0 + 1
] = b_x [ iy0 + 1 ] ; b_x [ iy0 + 1 ] = temp ; } static void puosmdyojh (
real_T a , real_T b , real_T * b_a , real_T * b_b , real_T * c , real_T * s )
{ real_T absa ; real_T absb ; real_T ads ; real_T bds ; real_T roe ; real_T
scale ; roe = b ; absa = muDoubleScalarAbs ( a ) ; absb = muDoubleScalarAbs (
b ) ; if ( absa > absb ) { roe = a ; } scale = absa + absb ; if ( scale ==
0.0 ) { * s = 0.0 ; * c = 1.0 ; * b_a = 0.0 ; * b_b = 0.0 ; } else { ads =
absa / scale ; bds = absb / scale ; * b_a = muDoubleScalarSqrt ( ads * ads +
bds * bds ) * scale ; if ( roe < 0.0 ) { * b_a = - * b_a ; } * c = a / * b_a
; * s = b / * b_a ; if ( absa > absb ) { * b_b = * s ; } else if ( * c != 0.0
) { * b_b = 1.0 / * c ; } else { * b_b = 1.0 ; } } } static void bqymtfhzny (
const real_T x [ 9 ] , int32_T ix0 , int32_T iy0 , real_T c , real_T s ,
real_T b_x [ 9 ] ) { real_T temp ; memcpy ( & b_x [ 0 ] , & x [ 0 ] , 9U *
sizeof ( real_T ) ) ; temp = b_x [ ix0 - 1 ] * c + b_x [ iy0 - 1 ] * s ; b_x
[ iy0 - 1 ] = b_x [ iy0 - 1 ] * c - b_x [ ix0 - 1 ] * s ; b_x [ ix0 - 1 ] =
temp ; temp = b_x [ ix0 ] * c + b_x [ iy0 ] * s ; b_x [ iy0 ] = b_x [ iy0 ] *
c - b_x [ ix0 ] * s ; b_x [ ix0 ] = temp ; temp = b_x [ ix0 + 1 ] * c + b_x [
iy0 + 1 ] * s ; b_x [ iy0 + 1 ] = b_x [ iy0 + 1 ] * c - b_x [ ix0 + 1 ] * s ;
b_x [ ix0 + 1 ] = temp ; } static void jun2xcusfc ( const real_T A [ 9 ] ,
real_T U [ 9 ] , real_T s [ 3 ] , real_T V [ 9 ] ) { __m128d tmp ; real_T A_e
[ 9 ] ; real_T A_p [ 9 ] ; real_T e [ 3 ] ; real_T s_p [ 3 ] ; real_T work [
3 ] ; real_T emm1 ; real_T nrm ; real_T rt ; real_T shift ; real_T smm1 ;
real_T sqds ; real_T ztest ; real_T ztest0 ; int32_T b ; int32_T colqp1 ;
int32_T m ; int32_T qjj ; int32_T qp1 ; int32_T qq ; int32_T scalarLB ;
int32_T vectorUB ; boolean_T apply_transform ; boolean_T exitg1 ; s_p [ 0 ] =
0.0 ; e [ 0 ] = 0.0 ; work [ 0 ] = 0.0 ; s_p [ 1 ] = 0.0 ; e [ 1 ] = 0.0 ;
work [ 1 ] = 0.0 ; s_p [ 2 ] = 0.0 ; e [ 2 ] = 0.0 ; work [ 2 ] = 0.0 ; for (
m = 0 ; m < 9 ; m ++ ) { A_p [ m ] = A [ m ] ; U [ m ] = 0.0 ; V [ m ] = 0.0
; } for ( m = 0 ; m < 2 ; m ++ ) { colqp1 = m + 1 ; qp1 = m + 2 ; qq = ( m *
3 + m ) + 1 ; apply_transform = false ; nrm = jzgpahy5q0 ( 3 - m , A_p , qq )
; if ( nrm > 0.0 ) { apply_transform = true ; if ( A_p [ qq - 1 ] < 0.0 ) {
ztest0 = - nrm ; s_p [ m ] = - nrm ; } else { ztest0 = nrm ; s_p [ m ] = nrm
; } if ( muDoubleScalarAbs ( ztest0 ) >= 1.0020841800044864E-292 ) { nrm =
1.0 / ztest0 ; b = ( qq - m ) - 1 ; scalarLB = ( ( ( ( b - qq ) + 4 ) / 2 )
<< 1 ) + qq ; vectorUB = scalarLB - 2 ; for ( qjj = qq ; qjj <= vectorUB ;
qjj += 2 ) { tmp = _mm_loadu_pd ( & A_p [ qjj - 1 ] ) ; _mm_storeu_pd ( & A_p
[ qjj - 1 ] , _mm_mul_pd ( tmp , _mm_set1_pd ( nrm ) ) ) ; } for ( qjj =
scalarLB ; qjj <= b + 3 ; qjj ++ ) { A_p [ qjj - 1 ] *= nrm ; } } else { b =
( qq - m ) - 1 ; scalarLB = ( ( ( ( b - qq ) + 4 ) / 2 ) << 1 ) + qq ;
vectorUB = scalarLB - 2 ; for ( qjj = qq ; qjj <= vectorUB ; qjj += 2 ) { tmp
= _mm_loadu_pd ( & A_p [ qjj - 1 ] ) ; _mm_storeu_pd ( & A_p [ qjj - 1 ] ,
_mm_div_pd ( tmp , _mm_set1_pd ( s_p [ m ] ) ) ) ; } for ( qjj = scalarLB ;
qjj <= b + 3 ; qjj ++ ) { A_p [ qjj - 1 ] /= s_p [ m ] ; } } A_p [ qq - 1 ]
++ ; s_p [ m ] = - s_p [ m ] ; } else { s_p [ m ] = 0.0 ; } for ( b = qp1 ; b
< 4 ; b ++ ) { qjj = ( ( b - 1 ) * 3 + m ) + 1 ; if ( apply_transform ) {
memcpy ( & A_e [ 0 ] , & A_p [ 0 ] , 9U * sizeof ( real_T ) ) ; fxplc5kfuy (
3 - m , - ( iytcjtxacb ( 3 - m , A_p , qq , A_p , qjj ) / A_p [ m * 3 + m ] )
, qq , A_e , qjj , A_p ) ; } e [ b - 1 ] = A_p [ qjj - 1 ] ; } memcpy ( & U [
( m * 3 + colqp1 ) + - 1 ] , & A_p [ ( m * 3 + colqp1 ) + - 1 ] , ( uint32_T
) ( - colqp1 + 4 ) * sizeof ( real_T ) ) ; if ( m + 1 <= 1 ) { nrm =
jzgpahy5q0o ( e , 2 ) ; if ( nrm == 0.0 ) { e [ 0 ] = 0.0 ; } else { if ( e [
1 ] < 0.0 ) { rt = - nrm ; e [ 0 ] = - nrm ; } else { rt = nrm ; e [ 0 ] =
nrm ; } if ( muDoubleScalarAbs ( rt ) >= 1.0020841800044864E-292 ) { nrm =
1.0 / rt ; scalarLB = ( ( ( ( 2 - m ) / 2 ) << 1 ) + m ) + 2 ; vectorUB =
scalarLB - 2 ; for ( qjj = qp1 ; qjj <= vectorUB ; qjj += 2 ) { tmp =
_mm_loadu_pd ( & e [ qjj - 1 ] ) ; _mm_storeu_pd ( & e [ qjj - 1 ] ,
_mm_mul_pd ( tmp , _mm_set1_pd ( nrm ) ) ) ; } for ( qjj = scalarLB ; qjj < 4
; qjj ++ ) { e [ qjj - 1 ] *= nrm ; } } else { scalarLB = ( ( ( ( 2 - m ) / 2
) << 1 ) + m ) + 2 ; vectorUB = scalarLB - 2 ; for ( qjj = qp1 ; qjj <=
vectorUB ; qjj += 2 ) { tmp = _mm_loadu_pd ( & e [ qjj - 1 ] ) ;
_mm_storeu_pd ( & e [ qjj - 1 ] , _mm_div_pd ( tmp , _mm_set1_pd ( rt ) ) ) ;
} for ( qjj = scalarLB ; qjj < 4 ; qjj ++ ) { e [ qjj - 1 ] /= rt ; } } e [ 1
] ++ ; e [ 0 ] = - e [ 0 ] ; for ( qq = qp1 ; qq < 4 ; qq ++ ) { work [ qq -
1 ] = 0.0 ; } for ( qq = qp1 ; qq < 4 ; qq ++ ) { fxplc5kfuy0dd ( 2 , e [ qq
- 1 ] , A_p , 3 * ( qq - 1 ) + 2 , work , 2 ) ; } for ( qq = qp1 ; qq < 4 ;
qq ++ ) { memcpy ( & A_e [ 0 ] , & A_p [ 0 ] , 9U * sizeof ( real_T ) ) ;
fxplc5kfuy0d ( 2 , - e [ qq - 1 ] / e [ 1 ] , work , 2 , A_e , ( qq - 1 ) * 3
+ 2 , A_p ) ; } } for ( colqp1 = qp1 ; colqp1 < 4 ; colqp1 ++ ) { V [ colqp1
- 1 ] = e [ colqp1 - 1 ] ; } } } m = 2 ; s_p [ 2 ] = A_p [ 8 ] ; e [ 1 ] =
A_p [ 7 ] ; e [ 2 ] = 0.0 ; U [ 6 ] = 0.0 ; U [ 7 ] = 0.0 ; U [ 8 ] = 1.0 ;
for ( colqp1 = 1 ; colqp1 >= 0 ; colqp1 -- ) { qq = 3 * colqp1 + colqp1 ; if
( s_p [ colqp1 ] != 0.0 ) { for ( b = colqp1 + 2 ; b < 4 ; b ++ ) { qjj = ( (
b - 1 ) * 3 + colqp1 ) + 1 ; memcpy ( & A_p [ 0 ] , & U [ 0 ] , 9U * sizeof (
real_T ) ) ; fxplc5kfuy ( 3 - colqp1 , - ( iytcjtxacb ( 3 - colqp1 , U , qq +
1 , U , qjj ) / U [ qq ] ) , qq + 1 , A_p , qjj , U ) ; } for ( qp1 = colqp1
+ 1 ; qp1 < 4 ; qp1 ++ ) { U [ ( qp1 + 3 * colqp1 ) - 1 ] = - U [ ( 3 *
colqp1 + qp1 ) - 1 ] ; } U [ qq ] ++ ; if ( colqp1 - 1 >= 0 ) { U [ 3 *
colqp1 ] = 0.0 ; } } else { U [ 3 * colqp1 ] = 0.0 ; U [ 3 * colqp1 + 1 ] =
0.0 ; U [ 3 * colqp1 + 2 ] = 0.0 ; U [ qq ] = 1.0 ; } } for ( colqp1 = 2 ;
colqp1 >= 0 ; colqp1 -- ) { if ( ( colqp1 + 1 <= 1 ) && ( e [ 0 ] != 0.0 ) )
{ memcpy ( & A_p [ 0 ] , & V [ 0 ] , 9U * sizeof ( real_T ) ) ; fxplc5kfuy (
2 , - ( iytcjtxacb ( 2 , V , 2 , V , 5 ) / V [ 1 ] ) , 2 , A_p , 5 , V ) ;
memcpy ( & A_p [ 0 ] , & V [ 0 ] , 9U * sizeof ( real_T ) ) ; fxplc5kfuy ( 2
, - ( iytcjtxacb ( 2 , V , 2 , V , 8 ) / V [ 1 ] ) , 2 , A_p , 8 , V ) ; } V
[ 3 * colqp1 ] = 0.0 ; V [ 3 * colqp1 + 1 ] = 0.0 ; V [ 3 * colqp1 + 2 ] =
0.0 ; V [ colqp1 + 3 * colqp1 ] = 1.0 ; } for ( qp1 = 0 ; qp1 < 3 ; qp1 ++ )
{ ztest0 = s_p [ qp1 ] ; if ( ztest0 != 0.0 ) { rt = muDoubleScalarAbs (
ztest0 ) ; nrm = ztest0 / rt ; s_p [ qp1 ] = rt ; if ( qp1 + 1 < 3 ) { e [
qp1 ] /= nrm ; } qq = 3 * qp1 ; scalarLB = qq + 3 ; vectorUB = qq + 1 ; for (
qjj = qq + 1 ; qjj <= vectorUB ; qjj += 2 ) { tmp = _mm_loadu_pd ( & U [ qjj
- 1 ] ) ; _mm_storeu_pd ( & U [ qjj - 1 ] , _mm_mul_pd ( tmp , _mm_set1_pd (
nrm ) ) ) ; } for ( qjj = scalarLB ; qjj <= qq + 3 ; qjj ++ ) { U [ qjj - 1 ]
*= nrm ; } } if ( qp1 + 1 < 3 ) { ztest = e [ qp1 ] ; if ( ztest != 0.0 ) {
rt = muDoubleScalarAbs ( ztest ) ; nrm = rt / ztest ; e [ qp1 ] = rt ; s_p [
qp1 + 1 ] *= nrm ; colqp1 = ( qp1 + 1 ) * 3 ; scalarLB = colqp1 + 3 ;
vectorUB = colqp1 + 1 ; for ( qjj = colqp1 + 1 ; qjj <= vectorUB ; qjj += 2 )
{ tmp = _mm_loadu_pd ( & V [ qjj - 1 ] ) ; _mm_storeu_pd ( & V [ qjj - 1 ] ,
_mm_mul_pd ( tmp , _mm_set1_pd ( nrm ) ) ) ; } for ( qjj = scalarLB ; qjj <=
colqp1 + 3 ; qjj ++ ) { V [ qjj - 1 ] *= nrm ; } } } } rt = 0.0 ; nrm =
muDoubleScalarMax ( muDoubleScalarMax ( muDoubleScalarMax ( 0.0 ,
muDoubleScalarMax ( muDoubleScalarAbs ( s_p [ 0 ] ) , muDoubleScalarAbs ( e [
0 ] ) ) ) , muDoubleScalarMax ( muDoubleScalarAbs ( s_p [ 1 ] ) ,
muDoubleScalarAbs ( e [ 1 ] ) ) ) , muDoubleScalarMax ( muDoubleScalarAbs (
s_p [ 2 ] ) , muDoubleScalarAbs ( e [ 2 ] ) ) ) ; while ( ( m + 1 > 0 ) && (
! ( rt >= 75.0 ) ) ) { colqp1 = m ; qp1 = m ; exitg1 = false ; while ( ( !
exitg1 ) && ( qp1 > - 1 ) ) { colqp1 = qp1 ; if ( qp1 == 0 ) { exitg1 = true
; } else { ztest0 = muDoubleScalarAbs ( e [ qp1 - 1 ] ) ; if ( ( ztest0 <= (
muDoubleScalarAbs ( s_p [ qp1 - 1 ] ) + muDoubleScalarAbs ( s_p [ qp1 ] ) ) *
2.2204460492503131E-16 ) || ( ztest0 <= 1.0020841800044864E-292 ) || ( ( rt >
20.0 ) && ( ztest0 <= 2.2204460492503131E-16 * nrm ) ) ) { e [ qp1 - 1 ] =
0.0 ; exitg1 = true ; } else { qp1 -- ; } } } if ( colqp1 == m ) { ztest0 =
4.0 ; } else { qp1 = m + 1 ; qq = m + 1 ; exitg1 = false ; while ( ( ! exitg1
) && ( qq >= colqp1 ) ) { qp1 = qq ; if ( qq == colqp1 ) { exitg1 = true ; }
else { ztest0 = 0.0 ; if ( qq < m + 1 ) { ztest0 = muDoubleScalarAbs ( e [ qq
- 1 ] ) ; } if ( qq > colqp1 + 1 ) { ztest0 += muDoubleScalarAbs ( e [ qq - 2
] ) ; } ztest = muDoubleScalarAbs ( s_p [ qq - 1 ] ) ; if ( ( ztest <=
2.2204460492503131E-16 * ztest0 ) || ( ztest <= 1.0020841800044864E-292 ) ) {
s_p [ qq - 1 ] = 0.0 ; exitg1 = true ; } else { qq -- ; } } } if ( qp1 ==
colqp1 ) { ztest0 = 3.0 ; } else if ( m + 1 == qp1 ) { ztest0 = 1.0 ; } else
{ ztest0 = 2.0 ; colqp1 = qp1 ; } } switch ( ( int32_T ) ztest0 ) { case 1 :
ztest0 = e [ m - 1 ] ; e [ m - 1 ] = 0.0 ; for ( qq = m ; qq >= colqp1 + 1 ;
qq -- ) { puosmdyojh ( s_p [ qq - 1 ] , ztest0 , & s_p [ qq - 1 ] , & ztest0
, & ztest , & sqds ) ; if ( qq > colqp1 + 1 ) { ztest0 = - sqds * e [ 0 ] ; e
[ 0 ] *= ztest ; } memcpy ( & A_p [ 0 ] , & V [ 0 ] , 9U * sizeof ( real_T )
) ; bqymtfhzny ( A_p , ( qq - 1 ) * 3 + 1 , 3 * m + 1 , ztest , sqds , V ) ;
} break ; case 2 : ztest0 = e [ colqp1 - 1 ] ; e [ colqp1 - 1 ] = 0.0 ; for (
qp1 = colqp1 + 1 ; qp1 <= m + 1 ; qp1 ++ ) { puosmdyojh ( s_p [ qp1 - 1 ] ,
ztest0 , & s_p [ qp1 - 1 ] , & ztest , & sqds , & smm1 ) ; ztest = e [ qp1 -
1 ] ; ztest0 = - smm1 * ztest ; e [ qp1 - 1 ] = ztest * sqds ; memcpy ( & A_p
[ 0 ] , & U [ 0 ] , 9U * sizeof ( real_T ) ) ; bqymtfhzny ( A_p , ( qp1 - 1 )
* 3 + 1 , ( colqp1 - 1 ) * 3 + 1 , sqds , smm1 , U ) ; } break ; case 3 :
ztest = muDoubleScalarMax ( muDoubleScalarMax ( muDoubleScalarMax (
muDoubleScalarMax ( muDoubleScalarAbs ( s_p [ m ] ) , muDoubleScalarAbs ( s_p
[ m - 1 ] ) ) , muDoubleScalarAbs ( e [ m - 1 ] ) ) , muDoubleScalarAbs ( s_p
[ colqp1 ] ) ) , muDoubleScalarAbs ( e [ colqp1 ] ) ) ; ztest0 = s_p [ m ] /
ztest ; smm1 = s_p [ m - 1 ] / ztest ; emm1 = e [ m - 1 ] / ztest ; sqds =
s_p [ colqp1 ] / ztest ; smm1 = ( ( smm1 + ztest0 ) * ( smm1 - ztest0 ) +
emm1 * emm1 ) / 2.0 ; emm1 *= ztest0 ; emm1 *= emm1 ; if ( ( smm1 != 0.0 ) ||
( emm1 != 0.0 ) ) { shift = muDoubleScalarSqrt ( smm1 * smm1 + emm1 ) ; if (
smm1 < 0.0 ) { shift = - shift ; } shift = emm1 / ( smm1 + shift ) ; } else {
shift = 0.0 ; } ztest0 = ( sqds + ztest0 ) * ( sqds - ztest0 ) + shift ;
ztest = e [ colqp1 ] / ztest * sqds ; for ( qq = colqp1 + 1 ; qq <= m ; qq ++
) { puosmdyojh ( ztest0 , ztest , & sqds , & smm1 , & emm1 , & shift ) ; if (
qq > colqp1 + 1 ) { e [ 0 ] = sqds ; } ztest0 = s_p [ qq - 1 ] * emm1 + e [
qq - 1 ] * shift ; e [ qq - 1 ] = e [ qq - 1 ] * emm1 - s_p [ qq - 1 ] *
shift ; ztest = shift * s_p [ qq ] ; s_p [ qq ] *= emm1 ; memcpy ( & A_p [ 0
] , & V [ 0 ] , 9U * sizeof ( real_T ) ) ; bqymtfhzny ( A_p , ( qq - 1 ) * 3
+ 1 , 3 * qq + 1 , emm1 , shift , V ) ; puosmdyojh ( ztest0 , ztest , & s_p [
qq - 1 ] , & sqds , & smm1 , & emm1 ) ; ztest0 = e [ qq - 1 ] * smm1 + emm1 *
s_p [ qq ] ; s_p [ qq ] = e [ qq - 1 ] * - emm1 + smm1 * s_p [ qq ] ; ztest =
emm1 * e [ qq ] ; e [ qq ] *= smm1 ; memcpy ( & A_p [ 0 ] , & U [ 0 ] , 9U *
sizeof ( real_T ) ) ; bqymtfhzny ( A_p , ( qq - 1 ) * 3 + 1 , 3 * qq + 1 ,
smm1 , emm1 , U ) ; } e [ m - 1 ] = ztest0 ; rt ++ ; break ; default : if (
s_p [ colqp1 ] < 0.0 ) { s_p [ colqp1 ] = - s_p [ colqp1 ] ; qq = 3 * colqp1
; scalarLB = qq + 3 ; vectorUB = qq + 1 ; for ( qjj = qq + 1 ; qjj <=
vectorUB ; qjj += 2 ) { tmp = _mm_loadu_pd ( & V [ qjj - 1 ] ) ;
_mm_storeu_pd ( & V [ qjj - 1 ] , _mm_mul_pd ( tmp , _mm_set1_pd ( - 1.0 ) )
) ; } for ( qjj = scalarLB ; qjj <= qq + 3 ; qjj ++ ) { V [ qjj - 1 ] = - V [
qjj - 1 ] ; } } qp1 = colqp1 + 1 ; while ( ( colqp1 + 1 < 3 ) && ( s_p [
colqp1 ] < s_p [ qp1 ] ) ) { rt = s_p [ colqp1 ] ; s_p [ colqp1 ] = s_p [ qp1
] ; s_p [ qp1 ] = rt ; memcpy ( & A_p [ 0 ] , & V [ 0 ] , 9U * sizeof (
real_T ) ) ; mwey5zjafr ( A_p , 3 * colqp1 + 1 , ( colqp1 + 1 ) * 3 + 1 , V )
; memcpy ( & A_p [ 0 ] , & U [ 0 ] , 9U * sizeof ( real_T ) ) ; mwey5zjafr (
A_p , 3 * colqp1 + 1 , ( colqp1 + 1 ) * 3 + 1 , U ) ; colqp1 = qp1 ; qp1 ++ ;
} rt = 0.0 ; m -- ; break ; } } s [ 0 ] = s_p [ 0 ] ; s [ 1 ] = s_p [ 1 ] ; s
[ 2 ] = s_p [ 2 ] ; } static void jdyfpxqf0y ( const real_T x [ 6 ] ,
fprravcitl * args , real_T * cost , real_T W [ 36 ] , hnyeda4wkh * Jac ,
fprravcitl * * b_args ) { __m128d tmp_p ; hnyeda4wkh * J ; hnyeda4wkh * y_p ;
i5s4hgzi5z * treeInternal ; lg5jhfa1j5 * bodyName ; creal_T tmp ; creal_T u ;
creal_T u_p ; creal_T v_p ; real_T T_data [ 16 ] ; real_T Td [ 16 ] ; real_T
V [ 9 ] ; real_T b_I [ 9 ] ; real_T b_U [ 9 ] ; real_T y_e [ 9 ] ; real_T e [
6 ] ; real_T y [ 6 ] ; real_T b_s [ 3 ] ; real_T v [ 3 ] ; real_T
vspecial_data [ 3 ] ; real_T T ; real_T q ; real_T t4 ; int32_T T_size [ 2 ]
; int32_T boffset ; int32_T iy ; int32_T loop_ub ; int32_T n ; boolean_T
exitg1 ; boolean_T xneg ; * b_args = args ; treeInternal = args -> Robot ;
ek533x1it4 ( & bodyName , 2 ) ; loop_ub = bodyName -> size [ 0 ] * bodyName
-> size [ 1 ] ; bodyName -> size [ 0 ] = 1 ; bodyName -> size [ 1 ] = args ->
BodyName -> size [ 1 ] ; gsven4ga0i ( bodyName , loop_ub ) ; loop_ub = args
-> BodyName -> size [ 1 ] ; for ( iy = 0 ; iy < loop_ub ; iy ++ ) { bodyName
-> data [ iy ] = args -> BodyName -> data [ iy ] ; } for ( iy = 0 ; iy < 16 ;
iy ++ ) { Td [ iy ] = args -> Tform [ iy ] ; } for ( iy = 0 ; iy < 36 ; iy ++
) { W [ iy ] = args -> WeightMatrix [ iy ] ; } jolvb3jiwj ( & J , 2 ) ;
g3hhstjumo ( treeInternal , x , bodyName , T_data , T_size , J ) ; dqu5smbks1
( & bodyName ) ; loop_ub = Jac -> size [ 0 ] * Jac -> size [ 1 ] ; Jac ->
size [ 0 ] = 6 ; Jac -> size [ 1 ] = J -> size [ 1 ] ; o4pyrzarz5 ( Jac ,
loop_ub ) ; loop_ub = 6 * J -> size [ 1 ] ; boffset = ( loop_ub / 2 ) << 1 ;
n = boffset - 2 ; for ( iy = 0 ; iy <= n ; iy += 2 ) { tmp_p = _mm_loadu_pd (
& J -> data [ iy ] ) ; _mm_storeu_pd ( & Jac -> data [ iy ] , _mm_mul_pd (
tmp_p , _mm_set1_pd ( - 1.0 ) ) ) ; } for ( iy = boffset ; iy < loop_ub ; iy
++ ) { Jac -> data [ iy ] = - J -> data [ iy ] ; } jvu10fuanp ( & J ) ; for (
iy = 0 ; iy < 3 ; iy ++ ) { t4 = T_data [ iy ] ; q = T_data [ iy + T_size [ 0
] ] ; T = T_data [ ( T_size [ 0 ] << 1 ) + iy ] ; for ( loop_ub = 0 ; loop_ub
< 3 ; loop_ub ++ ) { y_e [ loop_ub + 3 * iy ] = ( Td [ loop_ub + 4 ] * q + t4
* Td [ loop_ub ] ) + Td [ loop_ub + 8 ] * T ; } } u . re = ( ( ( y_e [ 0 ] +
y_e [ 4 ] ) + y_e [ 8 ] ) - 1.0 ) * 0.5 ; if ( ! ( muDoubleScalarAbs ( u . re
) > 1.0 ) ) { v_p . re = muDoubleScalarAcos ( u . re ) ; } else { u_p . re =
u . re + 1.0 ; u_p . im = 0.0 ; tmp . re = 1.0 - u . re ; tmp . im = 0.0 ;
v_p . re = 2.0 * muDoubleScalarAtan2 ( ( l4w5q3r2nf ( tmp ) ) . re , (
l4w5q3r2nf ( u_p ) ) . re ) ; } t4 = 2.0 * muDoubleScalarSin ( v_p . re ) ; v
[ 0 ] = ( y_e [ 5 ] - y_e [ 7 ] ) / t4 ; v [ 1 ] = ( y_e [ 6 ] - y_e [ 2 ] )
/ t4 ; v [ 2 ] = ( y_e [ 1 ] - y_e [ 3 ] ) / t4 ; if ( muDoubleScalarIsNaN (
v_p . re ) || muDoubleScalarIsInf ( v_p . re ) ) { t4 = ( rtNaN ) ; } else if
( v_p . re == 0.0 ) { t4 = 0.0 ; } else { t4 = muDoubleScalarRem ( v_p . re ,
3.1415926535897931 ) ; xneg = ( t4 == 0.0 ) ; if ( ! xneg ) { q =
muDoubleScalarAbs ( v_p . re / 3.1415926535897931 ) ; xneg = ! (
muDoubleScalarAbs ( q - muDoubleScalarFloor ( q + 0.5 ) ) >
2.2204460492503131E-16 * q ) ; } if ( xneg ) { t4 = 0.0 ; } else if ( v_p .
re < 0.0 ) { t4 += 3.1415926535897931 ; } } xneg = true ; iy = 0 ; exitg1 =
false ; while ( ( ! exitg1 ) && ( iy < 3 ) ) { if ( ! ( v [ iy ] == 0.0 ) ) {
xneg = false ; exitg1 = true ; } else { iy ++ ; } } xneg = ( ( t4 == 0.0 ) ||
xneg ) ; if ( xneg ) { for ( iy = 0 ; iy < 3 ; iy ++ ) { vspecial_data [ iy ]
= 0.0 ; } n = 0 ; for ( loop_ub = 0 ; loop_ub < 1 ; loop_ub ++ ) { memset ( &
b_I [ 0 ] , 0 , 9U * sizeof ( real_T ) ) ; b_I [ 0 ] = 1.0 ; b_I [ 4 ] = 1.0
; b_I [ 8 ] = 1.0 ; for ( iy = 0 ; iy < 9 ; iy ++ ) { b_I [ iy ] -= y_e [ iy
] ; } xneg = true ; for ( iy = 0 ; iy < 9 ; iy ++ ) { if ( xneg ) { t4 = b_I
[ iy ] ; if ( ( ! muDoubleScalarIsInf ( t4 ) ) && ( ! muDoubleScalarIsNaN (
t4 ) ) ) { } else { xneg = false ; } } else { xneg = false ; } } if ( xneg )
{ jun2xcusfc ( b_I , b_U , b_s , V ) ; } else { for ( iy = 0 ; iy < 9 ; iy ++
) { V [ iy ] = ( rtNaN ) ; } } vspecial_data [ 0 ] = V [ 6 ] ; vspecial_data
[ 1 ] = V [ 7 ] ; vspecial_data [ 2 ] = V [ 8 ] ; n ++ ; } if ( n - 1 >= 0 )
{ v [ 0 ] = vspecial_data [ 0 ] ; v [ 1 ] = vspecial_data [ 1 ] ; v [ 2 ] =
vspecial_data [ 2 ] ; } } t4 = 1.0 / muDoubleScalarSqrt ( ( v [ 0 ] * v [ 0 ]
+ v [ 1 ] * v [ 1 ] ) + v [ 2 ] * v [ 2 ] ) ; v [ 0 ] *= t4 ; v [ 1 ] *= t4 ;
v [ 2 ] *= t4 ; e [ 0 ] = v_p . re * v [ 0 ] ; e [ 3 ] = Td [ 12 ] - T_data [
T_size [ 0 ] * 3 ] ; e [ 1 ] = v_p . re * v [ 1 ] ; e [ 4 ] = Td [ 13 ] -
T_data [ T_size [ 0 ] * 3 + 1 ] ; e [ 2 ] = v_p . re * v [ 2 ] ; e [ 5 ] = Td
[ 14 ] - T_data [ T_size [ 0 ] * 3 + 2 ] ; loop_ub = args -> ErrTemp -> size
[ 0 ] ; args -> ErrTemp -> size [ 0 ] = 6 ; o4pyrzarz5 ( args -> ErrTemp ,
loop_ub ) ; for ( iy = 0 ; iy < 6 ; iy ++ ) { args -> ErrTemp -> data [ iy ]
= e [ iy ] ; } t4 = 0.0 ; for ( iy = 0 ; iy < 6 ; iy ++ ) { q = 0.0 ; for (
loop_ub = 0 ; loop_ub < 6 ; loop_ub ++ ) { q += W [ 6 * iy + loop_ub ] * (
0.5 * e [ loop_ub ] ) ; } t4 += q * e [ iy ] ; } args -> CostTemp = t4 ; for
( iy = 0 ; iy < 6 ; iy ++ ) { t4 = 0.0 ; for ( loop_ub = 0 ; loop_ub < 6 ;
loop_ub ++ ) { t4 += W [ 6 * iy + loop_ub ] * e [ loop_ub ] ; } y [ iy ] = t4
; } n = Jac -> size [ 1 ] - 1 ; jolvb3jiwj ( & y_p , 2 ) ; loop_ub = y_p ->
size [ 0 ] * y_p -> size [ 1 ] ; y_p -> size [ 0 ] = 1 ; y_p -> size [ 1 ] =
Jac -> size [ 1 ] ; o4pyrzarz5 ( y_p , loop_ub ) ; for ( loop_ub = 0 ;
loop_ub <= n ; loop_ub ++ ) { boffset = loop_ub * 6 - 1 ; t4 = 0.0 ; for ( iy
= 0 ; iy < 6 ; iy ++ ) { t4 += Jac -> data [ ( boffset + iy ) + 1 ] * y [ iy
] ; } y_p -> data [ loop_ub ] = t4 ; } loop_ub = args -> GradTemp -> size [ 0
] ; args -> GradTemp -> size [ 0 ] = y_p -> size [ 1 ] ; o4pyrzarz5 ( args ->
GradTemp , loop_ub ) ; loop_ub = y_p -> size [ 1 ] ; for ( iy = 0 ; iy <
loop_ub ; iy ++ ) { args -> GradTemp -> data [ iy ] = y_p -> data [ iy ] ; }
jvu10fuanp ( & y_p ) ; * cost = args -> CostTemp ; } static void bob53arkio (
i2qqrhl1oe * * pEmxArray , int32_T numDimensions ) { i2qqrhl1oe * emxArray ;
int32_T i ; * pEmxArray = ( i2qqrhl1oe * ) malloc ( sizeof ( i2qqrhl1oe ) ) ;
emxArray = * pEmxArray ; emxArray -> data = ( boolean_T * ) NULL ; emxArray
-> numDimensions = numDimensions ; emxArray -> size = ( int32_T * ) malloc (
sizeof ( int32_T ) * ( uint32_T ) numDimensions ) ; emxArray -> allocatedSize
= 0 ; emxArray -> canFreeData = true ; for ( i = 0 ; i < numDimensions ; i ++
) { emxArray -> size [ i ] = 0 ; } } static void drgklfcy43 ( nabfuq4qup * *
pEmxArray , int32_T numDimensions ) { nabfuq4qup * emxArray ; int32_T i ; *
pEmxArray = ( nabfuq4qup * ) malloc ( sizeof ( nabfuq4qup ) ) ; emxArray = *
pEmxArray ; emxArray -> data = ( int32_T * ) NULL ; emxArray -> numDimensions
= numDimensions ; emxArray -> size = ( int32_T * ) malloc ( sizeof ( int32_T
) * ( uint32_T ) numDimensions ) ; emxArray -> allocatedSize = 0 ; emxArray
-> canFreeData = true ; for ( i = 0 ; i < numDimensions ; i ++ ) { emxArray
-> size [ i ] = 0 ; } } static void pyp4acmmkn ( i2qqrhl1oe * emxArray ,
int32_T oldNumel ) { int32_T i ; int32_T newNumel ; void * newData ; if (
oldNumel < 0 ) { oldNumel = 0 ; } newNumel = 1 ; for ( i = 0 ; i < emxArray
-> numDimensions ; i ++ ) { newNumel *= emxArray -> size [ i ] ; } if (
newNumel > emxArray -> allocatedSize ) { i = emxArray -> allocatedSize ; if (
i < 16 ) { i = 16 ; } while ( i < newNumel ) { if ( i > 1073741823 ) { i =
MAX_int32_T ; } else { i <<= 1 ; } } newData = calloc ( ( uint32_T ) i ,
sizeof ( boolean_T ) ) ; if ( emxArray -> data != NULL ) { memcpy ( newData ,
emxArray -> data , sizeof ( boolean_T ) * ( uint32_T ) oldNumel ) ; if (
emxArray -> canFreeData ) { free ( emxArray -> data ) ; } } emxArray -> data
= ( boolean_T * ) newData ; emxArray -> allocatedSize = i ; emxArray ->
canFreeData = true ; } } static void g1ccfqf002d ( const hnyeda4wkh * A ,
const real_T B_i [ 6 ] , hnyeda4wkh * C ) { int32_T b_i ; int32_T c_i ;
int32_T inner ; int32_T m ; m = A -> size [ 1 ] - 1 ; inner = A -> size [ 0 ]
- 1 ; b_i = C -> size [ 0 ] ; C -> size [ 0 ] = A -> size [ 1 ] ; o4pyrzarz5
( C , b_i ) ; if ( m >= 0 ) { memset ( & C -> data [ 0 ] , 0 , ( uint32_T ) (
m + 1 ) * sizeof ( real_T ) ) ; } for ( b_i = 0 ; b_i <= inner ; b_i ++ ) {
for ( c_i = 0 ; c_i <= m ; c_i ++ ) { C -> data [ c_i ] += A -> data [ c_i *
A -> size [ 0 ] + b_i ] * B_i [ b_i ] ; } } } static void epjk1yr5ig0n51 (
i2qqrhl1oe * in1 , const hnyeda4wkh * in2 , const oy2a1akvcj * in3 ) {
int32_T i ; int32_T loop_ub ; int32_T stride_0_0 ; int32_T stride_1_0 ; i =
in1 -> size [ 0 ] ; in1 -> size [ 0 ] = in3 -> ConstraintBound -> size [ 0 ]
== 1 ? in2 -> size [ 0 ] : in3 -> ConstraintBound -> size [ 0 ] ; pyp4acmmkn
( in1 , i ) ; stride_0_0 = ( in2 -> size [ 0 ] != 1 ) ; stride_1_0 = ( in3 ->
ConstraintBound -> size [ 0 ] != 1 ) ; loop_ub = in3 -> ConstraintBound ->
size [ 0 ] == 1 ? in2 -> size [ 0 ] : in3 -> ConstraintBound -> size [ 0 ] ;
for ( i = 0 ; i < loop_ub ; i ++ ) { in1 -> data [ i ] = ( in2 -> data [ i *
stride_0_0 ] >= in3 -> ConstraintBound -> data [ i * stride_1_0 ] ) ; } }
static void h4sw33p0mb ( nabfuq4qup * emxArray , int32_T oldNumel ) { int32_T
i ; int32_T newNumel ; void * newData ; if ( oldNumel < 0 ) { oldNumel = 0 ;
} newNumel = 1 ; for ( i = 0 ; i < emxArray -> numDimensions ; i ++ ) {
newNumel *= emxArray -> size [ i ] ; } if ( newNumel > emxArray ->
allocatedSize ) { i = emxArray -> allocatedSize ; if ( i < 16 ) { i = 16 ; }
while ( i < newNumel ) { if ( i > 1073741823 ) { i = MAX_int32_T ; } else { i
<<= 1 ; } } newData = calloc ( ( uint32_T ) i , sizeof ( int32_T ) ) ; if (
emxArray -> data != NULL ) { memcpy ( newData , emxArray -> data , sizeof (
int32_T ) * ( uint32_T ) oldNumel ) ; if ( emxArray -> canFreeData ) { free (
emxArray -> data ) ; } } emxArray -> data = ( int32_T * ) newData ; emxArray
-> allocatedSize = i ; emxArray -> canFreeData = true ; } } static void
g1ccfqf002df ( const real_T A [ 36 ] , const hnyeda4wkh * B_m , hnyeda4wkh *
C ) { real_T s ; int32_T b_i ; int32_T b_j ; int32_T b_k ; int32_T boffset ;
int32_T coffset ; int32_T n ; n = B_m -> size [ 1 ] - 1 ; b_j = C -> size [ 0
] * C -> size [ 1 ] ; C -> size [ 0 ] = 6 ; C -> size [ 1 ] = B_m -> size [ 1
] ; o4pyrzarz5 ( C , b_j ) ; for ( b_j = 0 ; b_j <= n ; b_j ++ ) { coffset =
b_j * 6 - 1 ; boffset = b_j * B_m -> size [ 0 ] - 1 ; for ( b_i = 0 ; b_i < 6
; b_i ++ ) { s = 0.0 ; for ( b_k = 0 ; b_k < 6 ; b_k ++ ) { s += A [ b_k * 6
+ b_i ] * B_m -> data [ ( boffset + b_k ) + 1 ] ; } C -> data [ ( coffset +
b_i ) + 1 ] = s ; } } } static real_T e2fc0rh1xvp ( const real_T x [ 6 ] ) {
real_T absxk ; real_T scale ; real_T t ; real_T y ; int32_T b_k ; y = 0.0 ;
scale = 3.3121686421112381E-170 ; for ( b_k = 0 ; b_k < 6 ; b_k ++ ) { absxk
= muDoubleScalarAbs ( x [ b_k ] ) ; if ( absxk > scale ) { t = scale / absxk
; y = y * t * t + 1.0 ; scale = absxk ; } else { t = absxk / scale ; y += t *
t ; } } return scale * muDoubleScalarSqrt ( y ) ; } static real_T eh4ajh14pa
( real_T tstart_tv_sec , real_T tstart_tv_nsec ) { coderTimespec b_timespec ;
if ( ! rtDW . k2aa442psi ) { rtDW . k2aa442psi = true ;
coderInitTimeFunctions ( & rtDW . fa5qdx3osn ) ; }
coderTimeClockGettimeMonotonic ( & b_timespec , rtDW . fa5qdx3osn ) ; return
( b_timespec . tv_nsec - tstart_tv_nsec ) / 1.0E+9 + ( b_timespec . tv_sec -
tstart_tv_sec ) ; } static void g1ccfqf002dfl ( const hnyeda4wkh * A , const
hnyeda4wkh * B_i , hnyeda4wkh * C ) { real_T bkj ; int32_T b_i ; int32_T b_j
; int32_T boffset ; int32_T c_i ; int32_T coffset ; int32_T inner ; int32_T m
; int32_T n ; m = A -> size [ 1 ] - 1 ; inner = A -> size [ 0 ] - 1 ; n = B_i
-> size [ 1 ] - 1 ; b_j = C -> size [ 0 ] * C -> size [ 1 ] ; C -> size [ 0 ]
= A -> size [ 1 ] ; C -> size [ 1 ] = B_i -> size [ 1 ] ; o4pyrzarz5 ( C ,
b_j ) ; for ( b_j = 0 ; b_j <= n ; b_j ++ ) { coffset = ( m + 1 ) * b_j - 1 ;
boffset = b_j * B_i -> size [ 0 ] - 1 ; if ( m >= 0 ) { memset ( & C -> data
[ coffset + 1 ] , 0 , ( uint32_T ) ( ( ( m + coffset ) - coffset ) + 1 ) *
sizeof ( real_T ) ) ; } for ( b_i = 0 ; b_i <= inner ; b_i ++ ) { bkj = B_i
-> data [ ( boffset + b_i ) + 1 ] ; for ( c_i = 0 ; c_i <= m ; c_i ++ ) { C
-> data [ ( coffset + c_i ) + 1 ] += A -> data [ c_i * A -> size [ 0 ] + b_i
] * bkj ; } } } } static real_T jzgpahy5q0ot ( int32_T n , const hnyeda4wkh *
x , int32_T ix0 ) { real_T absxk ; real_T scale ; real_T t ; real_T y ;
int32_T k ; int32_T kend ; y = 0.0 ; if ( n < 1 ) { } else if ( n == 1 ) { y
= muDoubleScalarAbs ( x -> data [ ix0 - 1 ] ) ; } else { scale =
3.3121686421112381E-170 ; kend = ix0 + n ; for ( k = ix0 ; k < kend ; k ++ )
{ absxk = muDoubleScalarAbs ( x -> data [ k - 1 ] ) ; if ( absxk > scale ) {
t = scale / absxk ; y = y * t * t + 1.0 ; scale = absxk ; } else { t = absxk
/ scale ; y += t * t ; } } y = scale * muDoubleScalarSqrt ( y ) ; } return y
; } static void lvpphjmwx4 ( nabfuq4qup * * pEmxArray ) { if ( * pEmxArray !=
( nabfuq4qup * ) NULL ) { if ( ( ( * pEmxArray ) -> data != ( int32_T * )
NULL ) && ( * pEmxArray ) -> canFreeData ) { free ( ( * pEmxArray ) -> data )
; } free ( ( * pEmxArray ) -> size ) ; free ( * pEmxArray ) ; * pEmxArray = (
nabfuq4qup * ) NULL ; } } static void pyodapq0a4 ( const hnyeda4wkh * A ,
hnyeda4wkh * b_A , hnyeda4wkh * tau , nabfuq4qup * jpvt ) { hnyeda4wkh * vn1
; hnyeda4wkh * vn2 ; hnyeda4wkh * work ; nabfuq4qup * b_jpvt ; nabfuq4qup *
b_jpvt_p ; real_T absxk ; real_T scale ; real_T smax ; real_T t ; int32_T
b_A_p ; int32_T d ; int32_T ix ; int32_T iy ; int32_T jy ; int32_T kend ;
int32_T knt ; int32_T lastv ; int32_T ma ; int32_T ma_p ; int32_T mmi ;
int32_T na ; int32_T na_p ; int32_T nmi ; int32_T pvt ; static const int32_T
offsets [ 4 ] = { 0 , 1 , 2 , 3 } ; __m128d tmp ; static const int32_T
offsets_p [ 4 ] = { 0 , 1 , 2 , 3 } ; int32_T exitg1 ; boolean_T exitg2 ; ma
= A -> size [ 0 ] ; na = A -> size [ 1 ] ; jy = b_A -> size [ 0 ] * b_A ->
size [ 1 ] ; b_A -> size [ 0 ] = A -> size [ 0 ] ; b_A -> size [ 1 ] = A ->
size [ 1 ] ; o4pyrzarz5 ( b_A , jy ) ; nmi = A -> size [ 0 ] * A -> size [ 1
] ; if ( nmi - 1 >= 0 ) { memcpy ( & b_A -> data [ 0 ] , & A -> data [ 0 ] ,
( uint32_T ) nmi * sizeof ( real_T ) ) ; } ma_p = A -> size [ 0 ] ; na_p = A
-> size [ 1 ] ; ma_p = muIntScalarMin_sint32 ( ma_p , na_p ) ; jy = tau ->
size [ 0 ] ; tau -> size [ 0 ] = ma_p ; o4pyrzarz5 ( tau , jy ) ; if ( ma_p -
1 >= 0 ) { memset ( & tau -> data [ 0 ] , 0 , ( uint32_T ) ma_p * sizeof (
real_T ) ) ; } drgklfcy43 ( & b_jpvt , 2 ) ; drgklfcy43 ( & b_jpvt_p , 2 ) ;
jolvb3jiwj ( & work , 1 ) ; jolvb3jiwj ( & vn1 , 1 ) ; jolvb3jiwj ( & vn2 , 1
) ; if ( ( A -> size [ 0 ] == 0 ) || ( A -> size [ 1 ] == 0 ) || (
muIntScalarMin_sint32 ( ma , na ) < 1 ) ) { jy = b_jpvt -> size [ 0 ] *
b_jpvt -> size [ 1 ] ; b_jpvt -> size [ 0 ] = 1 ; b_jpvt -> size [ 1 ] = A ->
size [ 1 ] ; h4sw33p0mb ( b_jpvt , jy ) ; nmi = A -> size [ 1 ] ; iy = ( A ->
size [ 1 ] / 4 ) << 2 ; jy = iy - 4 ; for ( b_A_p = 0 ; b_A_p <= jy ; b_A_p
+= 4 ) { _mm_storeu_si128 ( ( __m128i * ) & b_jpvt -> data [ b_A_p ] ,
_mm_add_epi32 ( _mm_add_epi32 ( _mm_set1_epi32 ( b_A_p ) , _mm_loadu_si128 (
( const __m128i * ) & offsets [ 0 ] ) ) , _mm_set1_epi32 ( 1 ) ) ) ; } for (
b_A_p = iy ; b_A_p < nmi ; b_A_p ++ ) { b_jpvt -> data [ b_A_p ] = b_A_p + 1
; } } else { jy = b_jpvt -> size [ 0 ] * b_jpvt -> size [ 1 ] ; b_jpvt ->
size [ 0 ] = 1 ; b_jpvt -> size [ 1 ] = A -> size [ 1 ] ; h4sw33p0mb ( b_jpvt
, jy ) ; nmi = A -> size [ 1 ] ; iy = ( A -> size [ 1 ] / 4 ) << 2 ; jy = iy
- 4 ; for ( na_p = 0 ; na_p <= jy ; na_p += 4 ) { _mm_storeu_si128 ( (
__m128i * ) & b_jpvt -> data [ na_p ] , _mm_add_epi32 ( _mm_add_epi32 (
_mm_set1_epi32 ( na_p ) , _mm_loadu_si128 ( ( const __m128i * ) & offsets_p [
0 ] ) ) , _mm_set1_epi32 ( 1 ) ) ) ; } for ( na_p = iy ; na_p < nmi ; na_p ++
) { b_jpvt -> data [ na_p ] = na_p + 1 ; } jy = b_jpvt_p -> size [ 0 ] *
b_jpvt_p -> size [ 1 ] ; b_jpvt_p -> size [ 0 ] = 1 ; b_jpvt_p -> size [ 1 ]
= b_jpvt -> size [ 1 ] ; h4sw33p0mb ( b_jpvt_p , jy ) ; nmi = b_jpvt -> size
[ 1 ] ; memcpy ( & b_jpvt_p -> data [ 0 ] , & b_jpvt -> data [ 0 ] , (
uint32_T ) nmi * sizeof ( int32_T ) ) ; jy = b_A -> size [ 0 ] * b_A -> size
[ 1 ] ; b_A -> size [ 0 ] = A -> size [ 0 ] ; b_A -> size [ 1 ] = A -> size [
1 ] ; o4pyrzarz5 ( b_A , jy ) ; nmi = A -> size [ 0 ] * A -> size [ 1 ] ; if
( nmi - 1 >= 0 ) { memcpy ( & b_A -> data [ 0 ] , & A -> data [ 0 ] , (
uint32_T ) nmi * sizeof ( real_T ) ) ; } ma_p = A -> size [ 0 ] ; na_p =
muIntScalarMin_sint32 ( ma , na ) - 1 ; jy = work -> size [ 0 ] ; work ->
size [ 0 ] = A -> size [ 1 ] ; o4pyrzarz5 ( work , jy ) ; nmi = A -> size [ 1
] ; jy = vn1 -> size [ 0 ] ; vn1 -> size [ 0 ] = A -> size [ 1 ] ; o4pyrzarz5
( vn1 , jy ) ; jy = vn2 -> size [ 0 ] ; vn2 -> size [ 0 ] = A -> size [ 1 ] ;
o4pyrzarz5 ( vn2 , jy ) ; for ( b_A_p = 0 ; b_A_p < nmi ; b_A_p ++ ) { work
-> data [ b_A_p ] = 0.0 ; vn1 -> data [ b_A_p ] = 0.0 ; vn2 -> data [ b_A_p ]
= 0.0 ; ix = b_A_p * ma_p ; smax = 0.0 ; if ( ma < 1 ) { } else if ( ma == 1
) { smax = muDoubleScalarAbs ( A -> data [ ix ] ) ; } else { scale =
3.3121686421112381E-170 ; kend = ix + ma ; for ( lastv = ix + 1 ; lastv <=
kend ; lastv ++ ) { absxk = muDoubleScalarAbs ( A -> data [ lastv - 1 ] ) ;
if ( absxk > scale ) { t = scale / absxk ; smax = smax * t * t + 1.0 ; scale
= absxk ; } else { t = absxk / scale ; smax += t * t ; } } smax = scale *
muDoubleScalarSqrt ( smax ) ; } vn1 -> data [ b_A_p ] = smax ; vn2 -> data [
b_A_p ] = smax ; } for ( b_A_p = 0 ; b_A_p <= na_p ; b_A_p ++ ) { kend =
b_A_p * ma_p + b_A_p ; nmi = ( na - b_A_p ) - 2 ; mmi = ( ma - b_A_p ) - 1 ;
if ( nmi + 2 < 1 ) { pvt = 0 ; } else { pvt = 1 ; if ( nmi + 2 > 1 ) { smax =
vn1 -> data [ b_A_p ] ; for ( lastv = 2 ; lastv <= nmi + 2 ; lastv ++ ) {
scale = vn1 -> data [ ( b_A_p + lastv ) - 1 ] ; if ( scale > smax ) { pvt =
lastv ; smax = scale ; } } } } pvt = ( b_A_p + pvt ) - 1 ; if ( pvt + 1 !=
b_A_p + 1 ) { ix = pvt * ma_p ; iy = b_A_p * ma_p ; for ( lastv = 0 ; lastv <
ma ; lastv ++ ) { scale = b_A -> data [ ix + lastv ] ; b_A -> data [ ix +
lastv ] = b_A -> data [ iy + lastv ] ; b_A -> data [ iy + lastv ] = scale ; }
ix = b_jpvt_p -> data [ pvt ] ; b_jpvt_p -> data [ pvt ] = b_jpvt_p -> data [
b_A_p ] ; b_jpvt_p -> data [ b_A_p ] = ix ; vn1 -> data [ pvt ] = vn1 -> data
[ b_A_p ] ; vn2 -> data [ pvt ] = vn2 -> data [ b_A_p ] ; } if ( b_A_p + 1 <
ma ) { ix = kend + 2 ; smax = b_A -> data [ kend ] ; tau -> data [ b_A_p ] =
0.0 ; if ( mmi + 1 > 0 ) { scale = jzgpahy5q0ot ( mmi , b_A , kend + 2 ) ; if
( scale != 0.0 ) { scale = muDoubleScalarHypot ( b_A -> data [ kend ] , scale
) ; if ( b_A -> data [ kend ] >= 0.0 ) { scale = - scale ; } if (
muDoubleScalarAbs ( scale ) < 1.0020841800044864E-292 ) { knt = - 1 ; do {
knt ++ ; pvt = ( kend + mmi ) + 1 ; iy = ( ( ( ( ( pvt - kend ) - 1 ) / 2 )
<< 1 ) + kend ) + 2 ; jy = iy - 2 ; for ( lastv = ix ; lastv <= jy ; lastv +=
2 ) { tmp = _mm_loadu_pd ( & b_A -> data [ lastv - 1 ] ) ; _mm_storeu_pd ( &
b_A -> data [ lastv - 1 ] , _mm_mul_pd ( tmp , _mm_set1_pd (
9.9792015476736E+291 ) ) ) ; } for ( lastv = iy ; lastv <= pvt ; lastv ++ ) {
b_A -> data [ lastv - 1 ] *= 9.9792015476736E+291 ; } scale *=
9.9792015476736E+291 ; smax *= 9.9792015476736E+291 ; } while ( (
muDoubleScalarAbs ( scale ) < 1.0020841800044864E-292 ) && ( knt + 1 < 20 ) )
; scale = muDoubleScalarHypot ( smax , jzgpahy5q0ot ( mmi , b_A , kend + 2 )
) ; if ( smax >= 0.0 ) { scale = - scale ; } tau -> data [ b_A_p ] = ( scale
- smax ) / scale ; smax = 1.0 / ( smax - scale ) ; iy = ( ( ( ( ( pvt - kend
) - 1 ) / 2 ) << 1 ) + kend ) + 2 ; jy = iy - 2 ; for ( lastv = ix ; lastv <=
jy ; lastv += 2 ) { tmp = _mm_loadu_pd ( & b_A -> data [ lastv - 1 ] ) ;
_mm_storeu_pd ( & b_A -> data [ lastv - 1 ] , _mm_mul_pd ( tmp , _mm_set1_pd
( smax ) ) ) ; } for ( lastv = iy ; lastv <= pvt ; lastv ++ ) { b_A -> data [
lastv - 1 ] *= smax ; } for ( lastv = 0 ; lastv <= knt ; lastv ++ ) { scale
*= 1.0020841800044864E-292 ; } smax = scale ; } else { tau -> data [ b_A_p ]
= ( scale - b_A -> data [ kend ] ) / scale ; smax = 1.0 / ( b_A -> data [
kend ] - scale ) ; pvt = ( kend + mmi ) + 1 ; iy = ( ( ( ( ( pvt - kend ) - 1
) / 2 ) << 1 ) + kend ) + 2 ; jy = iy - 2 ; for ( lastv = ix ; lastv <= jy ;
lastv += 2 ) { tmp = _mm_loadu_pd ( & b_A -> data [ lastv - 1 ] ) ;
_mm_storeu_pd ( & b_A -> data [ lastv - 1 ] , _mm_mul_pd ( tmp , _mm_set1_pd
( smax ) ) ) ; } for ( lastv = iy ; lastv <= pvt ; lastv ++ ) { b_A -> data [
lastv - 1 ] *= smax ; } smax = scale ; } } } b_A -> data [ kend ] = smax ; }
else { tau -> data [ b_A_p ] = 0.0 ; } if ( b_A_p + 1 < na ) { smax = b_A ->
data [ kend ] ; b_A -> data [ kend ] = 1.0 ; ix = ( kend + ma_p ) + 1 ; if (
tau -> data [ b_A_p ] != 0.0 ) { lastv = mmi ; pvt = kend + mmi ; while ( (
lastv + 1 > 0 ) && ( b_A -> data [ pvt ] == 0.0 ) ) { lastv -- ; pvt -- ; }
exitg2 = false ; while ( ( ! exitg2 ) && ( nmi + 1 > 0 ) ) { pvt = nmi * ma_p
+ ix ; jy = pvt ; do { exitg1 = 0 ; if ( jy <= pvt + lastv ) { if ( b_A ->
data [ jy - 1 ] != 0.0 ) { exitg1 = 1 ; } else { jy ++ ; } } else { nmi -- ;
exitg1 = 2 ; } } while ( exitg1 == 0 ) ; if ( exitg1 == 1 ) { exitg2 = true ;
} } } else { lastv = - 1 ; nmi = - 1 ; } if ( lastv + 1 > 0 ) { if ( nmi + 1
!= 0 ) { if ( nmi >= 0 ) { memset ( & work -> data [ 0 ] , 0 , ( uint32_T ) (
nmi + 1 ) * sizeof ( real_T ) ) ; } iy = 0 ; pvt = ma_p * nmi + ix ; for (
knt = ix ; ma_p < 0 ? knt >= pvt : knt <= pvt ; knt += ma_p ) { scale = 0.0 ;
d = knt + lastv ; for ( jy = knt ; jy <= d ; jy ++ ) { scale += b_A -> data [
( kend + jy ) - knt ] * b_A -> data [ jy - 1 ] ; } work -> data [ iy ] +=
scale ; iy ++ ; } } if ( ! ( - tau -> data [ b_A_p ] == 0.0 ) ) { iy = ix ;
for ( ix = 0 ; ix <= nmi ; ix ++ ) { scale = work -> data [ ix ] ; if ( scale
!= 0.0 ) { scale *= - tau -> data [ b_A_p ] ; knt = lastv + iy ; for ( d = iy
; d <= knt ; d ++ ) { b_A -> data [ d - 1 ] += b_A -> data [ ( kend + d ) -
iy ] * scale ; } } iy += ma_p ; } } } b_A -> data [ kend ] = smax ; } for (
nmi = b_A_p + 2 ; nmi <= na ; nmi ++ ) { kend = ( ( nmi - 1 ) * ma_p + b_A_p
) + 1 ; absxk = vn1 -> data [ nmi - 1 ] ; if ( absxk != 0.0 ) { smax =
muDoubleScalarAbs ( b_A -> data [ kend - 1 ] ) / absxk ; smax = 1.0 - smax *
smax ; if ( smax < 0.0 ) { smax = 0.0 ; } scale = absxk / vn2 -> data [ nmi -
1 ] ; scale = scale * scale * smax ; if ( scale <= 1.4901161193847656E-8 ) {
if ( b_A_p + 1 < ma ) { ix = kend ; smax = 0.0 ; if ( mmi < 1 ) { } else if (
mmi == 1 ) { smax = muDoubleScalarAbs ( b_A -> data [ kend ] ) ; } else {
scale = 3.3121686421112381E-170 ; kend += mmi ; for ( lastv = ix + 1 ; lastv
<= kend ; lastv ++ ) { absxk = muDoubleScalarAbs ( b_A -> data [ lastv - 1 ]
) ; if ( absxk > scale ) { t = scale / absxk ; smax = smax * t * t + 1.0 ;
scale = absxk ; } else { t = absxk / scale ; smax += t * t ; } } smax = scale
* muDoubleScalarSqrt ( smax ) ; } vn1 -> data [ nmi - 1 ] = smax ; vn2 ->
data [ nmi - 1 ] = smax ; } else { vn1 -> data [ nmi - 1 ] = 0.0 ; vn2 ->
data [ nmi - 1 ] = 0.0 ; } } else { vn1 -> data [ nmi - 1 ] = absxk *
muDoubleScalarSqrt ( smax ) ; } } } } jy = b_jpvt -> size [ 0 ] * b_jpvt ->
size [ 1 ] ; b_jpvt -> size [ 0 ] = 1 ; b_jpvt -> size [ 1 ] = b_jpvt_p ->
size [ 1 ] ; h4sw33p0mb ( b_jpvt , jy ) ; nmi = b_jpvt_p -> size [ 1 ] ;
memcpy ( & b_jpvt -> data [ 0 ] , & b_jpvt_p -> data [ 0 ] , ( uint32_T ) nmi
* sizeof ( int32_T ) ) ; } jvu10fuanp ( & vn2 ) ; jvu10fuanp ( & vn1 ) ;
jvu10fuanp ( & work ) ; lvpphjmwx4 ( & b_jpvt_p ) ; jy = jpvt -> size [ 0 ] *
jpvt -> size [ 1 ] ; jpvt -> size [ 0 ] = 1 ; jpvt -> size [ 1 ] = b_jpvt ->
size [ 1 ] ; h4sw33p0mb ( jpvt , jy ) ; nmi = b_jpvt -> size [ 1 ] ; if ( nmi
- 1 >= 0 ) { memcpy ( & jpvt -> data [ 0 ] , & b_jpvt -> data [ 0 ] , (
uint32_T ) nmi * sizeof ( int32_T ) ) ; } lvpphjmwx4 ( & b_jpvt ) ; } static
void pgkq5ie3re ( int32_T m , int32_T n , const hnyeda4wkh * A , int32_T lda
, hnyeda4wkh * b_A , nabfuq4qup * ipiv , int32_T * info ) { real_T s ; real_T
smax ; int32_T c ; int32_T ijA ; int32_T ix ; int32_T iy ; int32_T j ;
int32_T jj ; int32_T loop_ub ; int32_T mmj ; int32_T n_p ; int32_T yk ; yk =
b_A -> size [ 0 ] * b_A -> size [ 1 ] ; b_A -> size [ 0 ] = A -> size [ 0 ] ;
b_A -> size [ 1 ] = A -> size [ 1 ] ; o4pyrzarz5 ( b_A , yk ) ; loop_ub = A
-> size [ 0 ] * A -> size [ 1 ] ; if ( loop_ub - 1 >= 0 ) { memcpy ( & b_A ->
data [ 0 ] , & A -> data [ 0 ] , ( uint32_T ) loop_ub * sizeof ( real_T ) ) ;
} n_p = muIntScalarMin_sint32 ( m , n ) ; if ( n_p < 1 ) { n_p = 0 ; } yk =
ipiv -> size [ 0 ] * ipiv -> size [ 1 ] ; ipiv -> size [ 0 ] = 1 ; ipiv ->
size [ 1 ] = n_p ; h4sw33p0mb ( ipiv , yk ) ; if ( n_p > 0 ) { ipiv -> data [
0 ] = 1 ; yk = 1 ; for ( ix = 2 ; ix <= n_p ; ix ++ ) { yk ++ ; ipiv -> data
[ ix - 1 ] = yk ; } } * info = 0 ; if ( ( m < 1 ) || ( n < 1 ) ) { } else {
n_p = m - 1 ; n_p = muIntScalarMin_sint32 ( n_p , n ) - 1 ; for ( yk = 0 ; yk
<= n_p ; yk ++ ) { mmj = m - yk ; loop_ub = ( lda + 1 ) * yk + 2 ; jj = ( lda
+ 1 ) * yk ; if ( mmj < 1 ) { iy = 0 ; } else { iy = 1 ; if ( mmj > 1 ) {
smax = muDoubleScalarAbs ( b_A -> data [ jj ] ) ; for ( ix = 2 ; ix <= mmj ;
ix ++ ) { s = muDoubleScalarAbs ( b_A -> data [ ( loop_ub + ix ) - 3 ] ) ; if
( s > smax ) { iy = ix ; smax = s ; } } } } if ( b_A -> data [ ( loop_ub + iy
) - 3 ] != 0.0 ) { if ( iy - 1 != 0 ) { ipiv -> data [ yk ] = yk + iy ; iy =
( yk + iy ) - 1 ; for ( ix = 0 ; ix < n ; ix ++ ) { smax = b_A -> data [ ix *
lda + yk ] ; b_A -> data [ yk + ix * lda ] = b_A -> data [ ix * lda + iy ] ;
b_A -> data [ iy + ix * lda ] = smax ; } } iy = loop_ub + mmj ; for ( ix =
loop_ub ; ix <= iy - 2 ; ix ++ ) { b_A -> data [ ix - 1 ] /= b_A -> data [ jj
] ; } } else { * info = yk + 1 ; } iy = ( n - yk ) - 1 ; ix = ( jj + lda ) +
1 ; jj += lda ; for ( j = 0 ; j < iy ; j ++ ) { smax = b_A -> data [ j * lda
+ jj ] ; if ( b_A -> data [ j * lda + jj ] != 0.0 ) { c = ( mmj + ix ) - 1 ;
for ( ijA = ix + 1 ; ijA <= c ; ijA ++ ) { b_A -> data [ ijA - 1 ] += b_A ->
data [ ( ( loop_ub + ijA ) - ix ) - 2 ] * - smax ; } } ix += lda ; } } if ( (
* info == 0 ) && ( m <= n ) && ( ! ( b_A -> data [ ( ( m - 1 ) * b_A -> size
[ 0 ] + m ) - 1 ] != 0.0 ) ) ) { * info = m ; } } } static void jy11nl4vle (
int32_T m , int32_T n , const hnyeda4wkh * A , int32_T lda , const hnyeda4wkh
* B_p , int32_T ldb , hnyeda4wkh * b_B ) { int32_T b ; int32_T b_B_p ;
int32_T b_i ; int32_T jBcol ; int32_T kAcol ; int32_T loop_ub ; loop_ub = b_B
-> size [ 0 ] * b_B -> size [ 1 ] ; b_B -> size [ 0 ] = B_p -> size [ 0 ] ;
b_B -> size [ 1 ] = B_p -> size [ 1 ] ; o4pyrzarz5 ( b_B , loop_ub ) ;
loop_ub = B_p -> size [ 0 ] * B_p -> size [ 1 ] ; if ( loop_ub - 1 >= 0 ) {
memcpy ( & b_B -> data [ 0 ] , & B_p -> data [ 0 ] , ( uint32_T ) loop_ub *
sizeof ( real_T ) ) ; } if ( ( n == 0 ) || ( ( B_p -> size [ 0 ] == 0 ) || (
B_p -> size [ 1 ] == 0 ) ) ) { } else { for ( b_B_p = 0 ; b_B_p < n ; b_B_p
++ ) { jBcol = ldb * b_B_p - 1 ; for ( loop_ub = m ; loop_ub >= 1 ; loop_ub
-- ) { kAcol = ( loop_ub - 1 ) * lda - 1 ; if ( b_B -> data [ loop_ub + jBcol
] != 0.0 ) { b_B -> data [ loop_ub + jBcol ] /= A -> data [ loop_ub + kAcol ]
; b = loop_ub - 2 ; for ( b_i = 0 ; b_i <= b ; b_i ++ ) { b_B -> data [ ( b_i
+ jBcol ) + 1 ] -= A -> data [ ( b_i + kAcol ) + 1 ] * b_B -> data [ loop_ub
+ jBcol ] ; } } } } } } static void pjivvek2mh ( const hnyeda4wkh * A , const
hnyeda4wkh * B_e , hnyeda4wkh * Y ) { __m128d tmp ; __m128d tmp_p ;
hnyeda4wkh * B_g ; hnyeda4wkh * b_A ; hnyeda4wkh * tau ; nabfuq4qup * jpvt ;
real_T tol ; int32_T b ; int32_T m ; int32_T maxmn ; int32_T mb ; int32_T
minmn ; int32_T mn ; int32_T nb ; int32_T nb_p ; int32_T rankA ; int32_T
scalarLB ; int32_T vectorUB ; jolvb3jiwj ( & b_A , 2 ) ; jolvb3jiwj ( & tau ,
1 ) ; drgklfcy43 ( & jpvt , 2 ) ; jolvb3jiwj ( & B_g , 2 ) ; if ( ( A -> size
[ 0 ] == 0 ) || ( A -> size [ 1 ] == 0 ) || ( ( B_e -> size [ 0 ] == 0 ) || (
B_e -> size [ 1 ] == 0 ) ) ) { minmn = Y -> size [ 0 ] * Y -> size [ 1 ] ; Y
-> size [ 0 ] = A -> size [ 1 ] ; Y -> size [ 1 ] = B_e -> size [ 1 ] ;
o4pyrzarz5 ( Y , minmn ) ; mb = A -> size [ 1 ] * B_e -> size [ 1 ] ; if ( mb
- 1 >= 0 ) { memset ( & Y -> data [ 0 ] , 0 , ( uint32_T ) mb * sizeof (
real_T ) ) ; } } else if ( A -> size [ 0 ] == A -> size [ 1 ] ) { minmn = A
-> size [ 0 ] ; maxmn = A -> size [ 1 ] ; mb = B_e -> size [ 0 ] ; maxmn =
muIntScalarMin_sint32 ( minmn , maxmn ) ; rankA = muIntScalarMin_sint32 ( mb
, maxmn ) ; nb = B_e -> size [ 1 ] - 1 ; pgkq5ie3re ( rankA , rankA , A , A
-> size [ 0 ] , b_A , jpvt , & minmn ) ; minmn = B_g -> size [ 0 ] * B_g ->
size [ 1 ] ; B_g -> size [ 0 ] = B_e -> size [ 0 ] ; B_g -> size [ 1 ] = B_e
-> size [ 1 ] ; o4pyrzarz5 ( B_g , minmn ) ; mb = B_e -> size [ 0 ] * B_e ->
size [ 1 ] ; if ( mb - 1 >= 0 ) { memcpy ( & B_g -> data [ 0 ] , & B_e ->
data [ 0 ] , ( uint32_T ) mb * sizeof ( real_T ) ) ; } b = rankA - 2 ; for (
minmn = 0 ; minmn <= b ; minmn ++ ) { nb_p = jpvt -> data [ minmn ] ; if (
minmn + 1 != nb_p ) { for ( maxmn = 0 ; maxmn <= nb ; maxmn ++ ) { tol = B_g
-> data [ B_g -> size [ 0 ] * maxmn + minmn ] ; B_g -> data [ minmn + B_g ->
size [ 0 ] * maxmn ] = B_g -> data [ ( B_g -> size [ 0 ] * maxmn + nb_p ) - 1
] ; B_g -> data [ ( nb_p + B_g -> size [ 0 ] * maxmn ) - 1 ] = tol ; } } }
for ( maxmn = 0 ; maxmn <= nb ; maxmn ++ ) { m = B_e -> size [ 0 ] * maxmn -
1 ; for ( mb = 0 ; mb < rankA ; mb ++ ) { mn = b_A -> size [ 0 ] * mb - 1 ;
if ( B_g -> data [ ( mb + m ) + 1 ] != 0.0 ) { for ( minmn = mb + 2 ; minmn
<= rankA ; minmn ++ ) { B_g -> data [ minmn + m ] -= B_g -> data [ ( mb + m )
+ 1 ] * b_A -> data [ minmn + mn ] ; } } } } jy11nl4vle ( rankA , B_e -> size
[ 1 ] , b_A , b_A -> size [ 0 ] , B_g , B_e -> size [ 0 ] , Y ) ; } else {
pyodapq0a4 ( A , b_A , tau , jpvt ) ; rankA = 0 ; if ( b_A -> size [ 0 ] <
b_A -> size [ 1 ] ) { minmn = b_A -> size [ 0 ] ; maxmn = b_A -> size [ 1 ] ;
} else { minmn = b_A -> size [ 1 ] ; maxmn = b_A -> size [ 0 ] ; } if ( minmn
> 0 ) { tol = muDoubleScalarMin ( 1.4901161193847656E-8 ,
2.2204460492503131E-15 * ( real_T ) maxmn ) * muDoubleScalarAbs ( b_A -> data
[ 0 ] ) ; while ( ( rankA < minmn ) && ( ! ( muDoubleScalarAbs ( b_A -> data
[ b_A -> size [ 0 ] * rankA + rankA ] ) <= tol ) ) ) { rankA ++ ; } } nb =
B_e -> size [ 1 ] - 1 ; minmn = Y -> size [ 0 ] * Y -> size [ 1 ] ; Y -> size
[ 0 ] = b_A -> size [ 1 ] ; Y -> size [ 1 ] = B_e -> size [ 1 ] ; o4pyrzarz5
( Y , minmn ) ; mb = b_A -> size [ 1 ] * B_e -> size [ 1 ] ; if ( mb - 1 >= 0
) { memset ( & Y -> data [ 0 ] , 0 , ( uint32_T ) mb * sizeof ( real_T ) ) ;
} minmn = B_g -> size [ 0 ] * B_g -> size [ 1 ] ; B_g -> size [ 0 ] = B_e ->
size [ 0 ] ; B_g -> size [ 1 ] = B_e -> size [ 1 ] ; o4pyrzarz5 ( B_g , minmn
) ; mb = B_e -> size [ 0 ] * B_e -> size [ 1 ] ; if ( mb - 1 >= 0 ) { memcpy
( & B_g -> data [ 0 ] , & B_e -> data [ 0 ] , ( uint32_T ) mb * sizeof (
real_T ) ) ; } m = b_A -> size [ 0 ] ; nb_p = B_e -> size [ 1 ] - 1 ; maxmn =
b_A -> size [ 0 ] ; mb = b_A -> size [ 1 ] ; mn = muIntScalarMin_sint32 (
maxmn , mb ) - 1 ; for ( maxmn = 0 ; maxmn <= mn ; maxmn ++ ) { if ( tau ->
data [ maxmn ] != 0.0 ) { b = maxmn + 2 ; for ( mb = 0 ; mb <= nb_p ; mb ++ )
{ tol = B_g -> data [ B_g -> size [ 0 ] * mb + maxmn ] ; for ( minmn = b ;
minmn <= m ; minmn ++ ) { tol += b_A -> data [ ( b_A -> size [ 0 ] * maxmn +
minmn ) - 1 ] * B_g -> data [ ( B_g -> size [ 0 ] * mb + minmn ) - 1 ] ; }
tol *= tau -> data [ maxmn ] ; if ( tol != 0.0 ) { B_g -> data [ maxmn + B_g
-> size [ 0 ] * mb ] -= tol ; scalarLB = ( ( ( ( ( m - maxmn ) - 1 ) / 2 ) <<
1 ) + maxmn ) + 2 ; vectorUB = scalarLB - 2 ; for ( minmn = b ; minmn <=
vectorUB ; minmn += 2 ) { tmp = _mm_loadu_pd ( & b_A -> data [ ( b_A -> size
[ 0 ] * maxmn + minmn ) - 1 ] ) ; tmp_p = _mm_loadu_pd ( & B_g -> data [ (
B_g -> size [ 0 ] * mb + minmn ) - 1 ] ) ; _mm_storeu_pd ( & B_g -> data [ (
minmn + B_g -> size [ 0 ] * mb ) - 1 ] , _mm_sub_pd ( tmp_p , _mm_mul_pd (
tmp , _mm_set1_pd ( tol ) ) ) ) ; } for ( minmn = scalarLB ; minmn <= m ;
minmn ++ ) { B_g -> data [ ( minmn + B_g -> size [ 0 ] * mb ) - 1 ] -= b_A ->
data [ ( b_A -> size [ 0 ] * maxmn + minmn ) - 1 ] * tol ; } } } } } for ( mb
= 0 ; mb <= nb ; mb ++ ) { for ( minmn = 0 ; minmn < rankA ; minmn ++ ) { Y
-> data [ ( jpvt -> data [ minmn ] + Y -> size [ 0 ] * mb ) - 1 ] = B_g ->
data [ B_g -> size [ 0 ] * mb + minmn ] ; } for ( m = rankA ; m >= 1 ; m -- )
{ nb_p = jpvt -> data [ m - 1 ] ; Y -> data [ ( nb_p + Y -> size [ 0 ] * mb )
- 1 ] /= b_A -> data [ ( ( m - 1 ) * b_A -> size [ 0 ] + m ) - 1 ] ; b = m -
2 ; for ( maxmn = 0 ; maxmn <= b ; maxmn ++ ) { Y -> data [ ( jpvt -> data [
maxmn ] + Y -> size [ 0 ] * mb ) - 1 ] -= Y -> data [ ( jpvt -> data [ m - 1
] + Y -> size [ 0 ] * mb ) - 1 ] * b_A -> data [ ( m - 1 ) * b_A -> size [ 0
] + maxmn ] ; } } } } jvu10fuanp ( & B_g ) ; lvpphjmwx4 ( & jpvt ) ;
jvu10fuanp ( & tau ) ; jvu10fuanp ( & b_A ) ; } static void hknlcbnvzi (
const hnyeda4wkh * x , hnyeda4wkh * y ) { hnyeda4wkh * c_A ; hnyeda4wkh * y_p
; nabfuq4qup * b_ipiv ; nabfuq4qup * p ; int32_T b_ipiv_p ; int32_T n ;
int32_T n_p ; int32_T pipk ; int32_T yk ; if ( ( x -> size [ 0 ] == 0 ) || (
x -> size [ 1 ] == 0 ) ) { pipk = y -> size [ 0 ] * y -> size [ 1 ] ; y ->
size [ 0 ] = x -> size [ 0 ] ; y -> size [ 1 ] = x -> size [ 1 ] ; o4pyrzarz5
( y , pipk ) ; pipk = x -> size [ 0 ] * x -> size [ 1 ] ; if ( pipk - 1 >= 0
) { memcpy ( & y -> data [ 0 ] , & x -> data [ 0 ] , ( uint32_T ) pipk *
sizeof ( real_T ) ) ; } } else { n = x -> size [ 0 ] ; pipk = y -> size [ 0 ]
* y -> size [ 1 ] ; y -> size [ 0 ] = x -> size [ 0 ] ; y -> size [ 1 ] = x
-> size [ 1 ] ; o4pyrzarz5 ( y , pipk ) ; n_p = x -> size [ 1 ] ; pipk = x ->
size [ 0 ] * x -> size [ 1 ] ; if ( pipk - 1 >= 0 ) { memset ( & y -> data [
0 ] , 0 , ( uint32_T ) pipk * sizeof ( real_T ) ) ; } jolvb3jiwj ( & c_A , 2
) ; drgklfcy43 ( & b_ipiv , 2 ) ; pgkq5ie3re ( x -> size [ 0 ] , x -> size [
0 ] , x , x -> size [ 0 ] , c_A , b_ipiv , & n_p ) ; n_p = x -> size [ 0 ] ;
drgklfcy43 ( & p , 2 ) ; pipk = p -> size [ 0 ] * p -> size [ 1 ] ; p -> size
[ 0 ] = 1 ; p -> size [ 1 ] = x -> size [ 0 ] ; h4sw33p0mb ( p , pipk ) ; p
-> data [ 0 ] = 1 ; yk = 1 ; for ( pipk = 2 ; pipk <= n_p ; pipk ++ ) { yk ++
; p -> data [ pipk - 1 ] = yk ; } n_p = b_ipiv -> size [ 1 ] - 1 ; for ( yk =
0 ; yk <= n_p ; yk ++ ) { b_ipiv_p = b_ipiv -> data [ yk ] ; if ( b_ipiv_p >
yk + 1 ) { pipk = p -> data [ b_ipiv_p - 1 ] ; p -> data [ b_ipiv_p - 1 ] = p
-> data [ yk ] ; p -> data [ yk ] = pipk ; } } lvpphjmwx4 ( & b_ipiv ) ; for
( yk = 0 ; yk < n ; yk ++ ) { n_p = p -> data [ yk ] ; y -> data [ yk + y ->
size [ 0 ] * ( n_p - 1 ) ] = 1.0 ; for ( pipk = yk + 1 ; pipk <= n ; pipk ++
) { if ( y -> data [ ( ( n_p - 1 ) * y -> size [ 0 ] + pipk ) - 1 ] != 0.0 )
{ for ( b_ipiv_p = pipk + 1 ; b_ipiv_p <= n ; b_ipiv_p ++ ) { y -> data [ (
b_ipiv_p + y -> size [ 0 ] * ( n_p - 1 ) ) - 1 ] = y -> data [ ( ( n_p - 1 )
* y -> size [ 0 ] + b_ipiv_p ) - 1 ] - y -> data [ ( ( n_p - 1 ) * y -> size
[ 0 ] + pipk ) - 1 ] * c_A -> data [ ( ( pipk - 1 ) * c_A -> size [ 0 ] +
b_ipiv_p ) - 1 ] ; } } } } lvpphjmwx4 ( & p ) ; jolvb3jiwj ( & y_p , 2 ) ;
pipk = y_p -> size [ 0 ] * y_p -> size [ 1 ] ; y_p -> size [ 0 ] = y -> size
[ 0 ] ; y_p -> size [ 1 ] = y -> size [ 1 ] ; o4pyrzarz5 ( y_p , pipk ) ;
pipk = y -> size [ 0 ] * y -> size [ 1 ] - 1 ; if ( pipk >= 0 ) { memcpy ( &
y_p -> data [ 0 ] , & y -> data [ 0 ] , ( uint32_T ) ( pipk + 1 ) * sizeof (
real_T ) ) ; } jy11nl4vle ( x -> size [ 0 ] , x -> size [ 0 ] , c_A , x ->
size [ 0 ] , y_p , x -> size [ 0 ] , y ) ; jvu10fuanp ( & y_p ) ; jvu10fuanp
( & c_A ) ; } } static void hjt0i4ijtz ( const hnyeda4wkh * x , real_T * ex ,
int32_T * idx ) { real_T x_p ; int32_T b ; int32_T k ; int32_T last ;
boolean_T exitg1 ; last = x -> size [ 0 ] ; if ( x -> size [ 0 ] <= 2 ) { if
( x -> size [ 0 ] == 1 ) { * ex = x -> data [ 0 ] ; * idx = 1 ; } else if ( (
x -> data [ 0 ] < x -> data [ x -> size [ 0 ] - 1 ] ) || (
muDoubleScalarIsNaN ( x -> data [ 0 ] ) && ( ! muDoubleScalarIsNaN ( x ->
data [ x -> size [ 0 ] - 1 ] ) ) ) ) { * ex = x -> data [ x -> size [ 0 ] - 1
] ; * idx = x -> size [ 0 ] ; } else { * ex = x -> data [ 0 ] ; * idx = 1 ; }
} else { if ( ! muDoubleScalarIsNaN ( x -> data [ 0 ] ) ) { * idx = 1 ; }
else { * idx = 0 ; k = 2 ; exitg1 = false ; while ( ( ! exitg1 ) && ( k <=
last ) ) { if ( ! muDoubleScalarIsNaN ( x -> data [ k - 1 ] ) ) { * idx = k ;
exitg1 = true ; } else { k ++ ; } } } if ( * idx == 0 ) { * ex = x -> data [
0 ] ; * idx = 1 ; } else { * ex = x -> data [ * idx - 1 ] ; b = * idx ; for (
k = b + 1 ; k <= last ; k ++ ) { x_p = x -> data [ k - 1 ] ; if ( * ex < x_p
) { * ex = x_p ; * idx = k ; } } } } } static void epjk1yr5ig0n5 ( const
hnyeda4wkh * in1 , const hnyeda4wkh * in2 , real_T * out1 , int32_T * out2 )
{ hnyeda4wkh * in1_p ; int32_T i ; int32_T loop_ub ; int32_T stride_0_0 ;
int32_T stride_1_0 ; jolvb3jiwj ( & in1_p , 1 ) ; i = in1_p -> size [ 0 ] ;
in1_p -> size [ 0 ] = in2 -> size [ 0 ] == 1 ? in1 -> size [ 0 ] : in2 ->
size [ 0 ] ; o4pyrzarz5 ( in1_p , i ) ; stride_0_0 = ( in1 -> size [ 0 ] != 1
) ; stride_1_0 = ( in2 -> size [ 0 ] != 1 ) ; loop_ub = in2 -> size [ 0 ] ==
1 ? in1 -> size [ 0 ] : in2 -> size [ 0 ] ; for ( i = 0 ; i < loop_ub ; i ++
) { in1_p -> data [ i ] = in1 -> data [ i * stride_0_0 ] / in2 -> data [ i *
stride_1_0 ] ; } hjt0i4ijtz ( in1_p , out1 , out2 ) ; jvu10fuanp ( & in1_p )
; } static boolean_T jwl4kngeul ( const i2qqrhl1oe * x ) { int32_T ix ;
boolean_T exitg1 ; boolean_T y ; y = false ; ix = 0 ; exitg1 = false ; while
( ( ! exitg1 ) && ( ix + 1 <= x -> size [ 0 ] ) ) { if ( x -> data [ ix ] ) {
y = true ; exitg1 = true ; } else { ix ++ ; } } return y ; } static void
epjk1yr5ig0n ( hnyeda4wkh * in1 , const hnyeda4wkh * in2 , const hnyeda4wkh *
in3 ) { hnyeda4wkh * in1_p ; int32_T i ; int32_T loop_ub ; int32_T stride_0_0
; int32_T stride_1_0 ; int32_T stride_2_0 ; jolvb3jiwj ( & in1_p , 1 ) ; i =
in1_p -> size [ 0 ] ; in1_p -> size [ 0 ] = in3 -> size [ 0 ] == 1 ? in2 ->
size [ 0 ] == 1 ? in1 -> size [ 0 ] : in2 -> size [ 0 ] : in3 -> size [ 0 ] ;
o4pyrzarz5 ( in1_p , i ) ; stride_0_0 = ( in1 -> size [ 0 ] != 1 ) ;
stride_1_0 = ( in2 -> size [ 0 ] != 1 ) ; stride_2_0 = ( in3 -> size [ 0 ] !=
1 ) ; loop_ub = in3 -> size [ 0 ] == 1 ? in2 -> size [ 0 ] == 1 ? in1 -> size
[ 0 ] : in2 -> size [ 0 ] : in3 -> size [ 0 ] ; for ( i = 0 ; i < loop_ub ; i
++ ) { in1_p -> data [ i ] = ( in1 -> data [ i * stride_0_0 ] - in2 -> data [
i * stride_1_0 ] ) / in3 -> data [ i * stride_2_0 ] ; } i = in1 -> size [ 0 ]
; in1 -> size [ 0 ] = in1_p -> size [ 0 ] ; o4pyrzarz5 ( in1 , i ) ; loop_ub
= in1_p -> size [ 0 ] ; if ( loop_ub - 1 >= 0 ) { memcpy ( & in1 -> data [ 0
] , & in1_p -> data [ 0 ] , ( uint32_T ) loop_ub * sizeof ( real_T ) ) ; }
jvu10fuanp ( & in1_p ) ; } static void nrmihjhybi5 ( const i2qqrhl1oe * x ,
nabfuq4qup * i ) { int32_T b_ii ; int32_T idx ; int32_T nx ; boolean_T exitg1
; nx = x -> size [ 0 ] ; idx = 0 ; b_ii = i -> size [ 0 ] ; i -> size [ 0 ] =
x -> size [ 0 ] ; h4sw33p0mb ( i , b_ii ) ; b_ii = 1 ; exitg1 = false ; while
( ( ! exitg1 ) && ( b_ii - 1 <= nx - 1 ) ) { if ( x -> data [ b_ii - 1 ] ) {
idx ++ ; i -> data [ idx - 1 ] = b_ii ; if ( idx >= nx ) { exitg1 = true ; }
else { b_ii ++ ; } } else { b_ii ++ ; } } if ( x -> size [ 0 ] == 1 ) { if (
idx == 0 ) { i -> size [ 0 ] = 0 ; } } else if ( idx < 1 ) { i -> size [ 0 ]
= 0 ; } else { b_ii = i -> size [ 0 ] ; i -> size [ 0 ] = idx ; h4sw33p0mb (
i , b_ii ) ; } } static void nhs4l5nqsu ( const hnyeda4wkh * x , real_T * ex
, int32_T * idx ) { real_T x_p ; int32_T b ; int32_T k ; int32_T last ;
boolean_T exitg1 ; last = x -> size [ 0 ] ; if ( x -> size [ 0 ] <= 2 ) { if
( x -> size [ 0 ] == 1 ) { * ex = x -> data [ 0 ] ; * idx = 1 ; } else if ( (
x -> data [ 0 ] > x -> data [ x -> size [ 0 ] - 1 ] ) || (
muDoubleScalarIsNaN ( x -> data [ 0 ] ) && ( ! muDoubleScalarIsNaN ( x ->
data [ x -> size [ 0 ] - 1 ] ) ) ) ) { * ex = x -> data [ x -> size [ 0 ] - 1
] ; * idx = x -> size [ 0 ] ; } else { * ex = x -> data [ 0 ] ; * idx = 1 ; }
} else { if ( ! muDoubleScalarIsNaN ( x -> data [ 0 ] ) ) { * idx = 1 ; }
else { * idx = 0 ; k = 2 ; exitg1 = false ; while ( ( ! exitg1 ) && ( k <=
last ) ) { if ( ! muDoubleScalarIsNaN ( x -> data [ k - 1 ] ) ) { * idx = k ;
exitg1 = true ; } else { k ++ ; } } } if ( * idx == 0 ) { * ex = x -> data [
0 ] ; * idx = 1 ; } else { * ex = x -> data [ * idx - 1 ] ; b = * idx ; for (
k = b + 1 ; k <= last ; k ++ ) { x_p = x -> data [ k - 1 ] ; if ( * ex > x_p
) { * ex = x_p ; * idx = k ; } } } } } static void e0vmbp53uio1 ( hnyeda4wkh
* in1 , const hnyeda4wkh * in2 ) { hnyeda4wkh * in2_p ; int32_T i ; int32_T
loop_ub ; int32_T stride_0_0 ; int32_T stride_1_0 ; jolvb3jiwj ( & in2_p , 1
) ; i = in2_p -> size [ 0 ] ; in2_p -> size [ 0 ] = in1 -> size [ 0 ] == 1 ?
in2 -> size [ 0 ] : in1 -> size [ 0 ] ; o4pyrzarz5 ( in2_p , i ) ; stride_0_0
= ( in2 -> size [ 0 ] != 1 ) ; stride_1_0 = ( in1 -> size [ 0 ] != 1 ) ;
loop_ub = in1 -> size [ 0 ] == 1 ? in2 -> size [ 0 ] : in1 -> size [ 0 ] ;
for ( i = 0 ; i < loop_ub ; i ++ ) { in2_p -> data [ i ] = in2 -> data [ i *
stride_0_0 ] - in1 -> data [ i * stride_1_0 ] ; } i = in1 -> size [ 0 ] ; in1
-> size [ 0 ] = in2_p -> size [ 0 ] ; o4pyrzarz5 ( in1 , i ) ; loop_ub =
in2_p -> size [ 0 ] ; if ( loop_ub - 1 >= 0 ) { memcpy ( & in1 -> data [ 0 ]
, & in2_p -> data [ 0 ] , ( uint32_T ) loop_ub * sizeof ( real_T ) ) ; }
jvu10fuanp ( & in2_p ) ; } static void epjk1yr5ig0 ( real_T in1 [ 36 ] ,
const real_T in2 [ 36 ] , const real_T in3 [ 6 ] , const hnyeda4wkh * in4 ,
real_T in5 ) { __m128d tmp ; __m128d tmp_p ; hnyeda4wkh * in3_p ; int32_T
aux_0_1 ; int32_T i ; int32_T i_p ; int32_T loop_ub ; jolvb3jiwj ( & in3_p ,
2 ) ; i_p = in3_p -> size [ 0 ] * in3_p -> size [ 1 ] ; in3_p -> size [ 0 ] =
6 ; in3_p -> size [ 1 ] = in4 -> size [ 0 ] ; o4pyrzarz5 ( in3_p , i_p ) ;
loop_ub = in4 -> size [ 0 ] ; for ( i_p = 0 ; i_p < loop_ub ; i_p ++ ) { for
( i = 0 ; i <= 4 ; i += 2 ) { tmp_p = _mm_loadu_pd ( & in3 [ i ] ) ;
_mm_storeu_pd ( & in3_p -> data [ i + 6 * i_p ] , _mm_div_pd ( _mm_mul_pd (
tmp_p , _mm_set1_pd ( in4 -> data [ i_p ] ) ) , _mm_set1_pd ( in5 ) ) ) ; } }
loop_ub = ( in3_p -> size [ 1 ] != 1 ) ; aux_0_1 = 0 ; for ( i_p = 0 ; i_p <
6 ; i_p ++ ) { for ( i = 0 ; i <= 4 ; i += 2 ) { tmp_p = _mm_loadu_pd ( & in2
[ 6 * i_p + i ] ) ; tmp = _mm_loadu_pd ( & in3_p -> data [ 6 * aux_0_1 + i ]
) ; _mm_storeu_pd ( & in1 [ i + 6 * i_p ] , _mm_sub_pd ( tmp_p , tmp ) ) ; }
aux_0_1 += loop_ub ; } jvu10fuanp ( & in3_p ) ; } static boolean_T pfrc22cnw4
( const real_T B_f [ 36 ] ) { __m128d tmp ; real_T c_A [ 36 ] ; real_T c ;
real_T ssq ; int32_T b ; int32_T b_info ; int32_T b_j ; int32_T d ; int32_T
ia ; int32_T iac ; int32_T idxAjj ; int32_T idxAjp11 ; boolean_T exitg1 ;
memcpy ( & c_A [ 0 ] , & B_f [ 0 ] , 36U * sizeof ( real_T ) ) ; b_info = 0 ;
b_j = 1 ; exitg1 = false ; while ( ( ! exitg1 ) && ( b_j - 1 < 6 ) ) { idxAjj
= ( ( b_j - 1 ) * 6 + b_j ) - 1 ; ssq = 0.0 ; if ( b_j - 1 >= 1 ) { b = (
uint8_T ) ( b_j - 1 ) ; for ( idxAjp11 = 0 ; idxAjp11 < b ; idxAjp11 ++ ) {
ssq += c_A [ ( idxAjp11 * 6 + b_j ) - 1 ] * c_A [ ( idxAjp11 * 6 + b_j ) - 1
] ; } } ssq = c_A [ idxAjj ] - ssq ; if ( ssq > 0.0 ) { ssq =
muDoubleScalarSqrt ( ssq ) ; c_A [ idxAjj ] = ssq ; if ( b_j < 6 ) { idxAjp11
= b_j + 1 ; if ( b_j - 1 != 0 ) { b = ( b_j - 2 ) * 6 + b_j ; for ( iac =
idxAjp11 ; iac <= b + 1 ; iac += 6 ) { c = - c_A [ ( div_nde_s32_floor ( (
iac - b_j ) - 1 , 6 ) * 6 + b_j ) - 1 ] ; d = iac - b_j ; for ( ia = iac ; ia
<= d + 5 ; ia ++ ) { c_A [ ( ( idxAjj + ia ) - iac ) + 1 ] += c_A [ ia - 1 ]
* c ; } } } ssq = 1.0 / ssq ; b = idxAjj - b_j ; iac = ( ( ( ( ( b - idxAjj )
+ 6 ) / 2 ) << 1 ) + idxAjj ) + 2 ; d = iac - 2 ; for ( idxAjp11 = idxAjj + 2
; idxAjp11 <= d ; idxAjp11 += 2 ) { tmp = _mm_loadu_pd ( & c_A [ idxAjp11 - 1
] ) ; _mm_storeu_pd ( & c_A [ idxAjp11 - 1 ] , _mm_mul_pd ( tmp , _mm_set1_pd
( ssq ) ) ) ; } for ( idxAjp11 = iac ; idxAjp11 <= b + 7 ; idxAjp11 ++ ) {
c_A [ idxAjp11 - 1 ] *= ssq ; } } b_j ++ ; } else { b_info = b_j ; exitg1 =
true ; } } return b_info == 0 ; } static void g1ccfqf002dfli ( const
hnyeda4wkh * A , const hnyeda4wkh * B_j , hnyeda4wkh * C ) { __m128d tmp ;
real_T bkj ; int32_T aoffset ; int32_T b_i ; int32_T b_j ; int32_T boffset ;
int32_T coffset ; int32_T inner ; int32_T k ; int32_T m ; int32_T n ; int32_T
scalarLB ; int32_T vectorUB ; m = A -> size [ 0 ] - 1 ; inner = A -> size [ 1
] - 1 ; n = B_j -> size [ 1 ] - 1 ; b_j = C -> size [ 0 ] * C -> size [ 1 ] ;
C -> size [ 0 ] = A -> size [ 0 ] ; C -> size [ 1 ] = B_j -> size [ 1 ] ;
o4pyrzarz5 ( C , b_j ) ; for ( b_j = 0 ; b_j <= n ; b_j ++ ) { coffset = ( m
+ 1 ) * b_j - 1 ; boffset = b_j * B_j -> size [ 0 ] - 1 ; if ( m >= 0 ) {
memset ( & C -> data [ coffset + 1 ] , 0 , ( uint32_T ) ( ( ( m + coffset ) -
coffset ) + 1 ) * sizeof ( real_T ) ) ; } for ( b_i = 0 ; b_i <= inner ; b_i
++ ) { aoffset = b_i * A -> size [ 0 ] - 1 ; bkj = B_j -> data [ ( boffset +
b_i ) + 1 ] ; scalarLB = ( ( m + 1 ) / 2 ) << 1 ; vectorUB = scalarLB - 2 ;
for ( k = 0 ; k <= vectorUB ; k += 2 ) { tmp = _mm_loadu_pd ( & C -> data [ (
k + coffset ) + 1 ] ) ; _mm_storeu_pd ( & C -> data [ ( coffset + k ) + 1 ] ,
_mm_add_pd ( _mm_mul_pd ( _mm_loadu_pd ( & A -> data [ ( k + aoffset ) + 1 ]
) , _mm_set1_pd ( bkj ) ) , tmp ) ) ; } for ( k = scalarLB ; k <= m ; k ++ )
{ C -> data [ ( coffset + k ) + 1 ] += A -> data [ ( k + aoffset ) + 1 ] *
bkj ; } } } } static void e0vmbp53uio ( real_T in1 [ 36 ] , const hnyeda4wkh
* in2 ) { real_T in1_p [ 36 ] ; int32_T aux_0_1 ; int32_T i ; int32_T i_p ;
int32_T stride_0_0 ; int32_T stride_0_1 ; stride_0_0 = ( in2 -> size [ 0 ] !=
1 ) ; stride_0_1 = ( in2 -> size [ 1 ] != 1 ) ; aux_0_1 = 0 ; for ( i_p = 0 ;
i_p < 6 ; i_p ++ ) { for ( i = 0 ; i < 6 ; i ++ ) { in1_p [ i + 6 * i_p ] =
in1 [ 6 * i_p + i ] - in2 -> data [ i * stride_0_0 + in2 -> size [ 0 ] *
aux_0_1 ] ; } aux_0_1 += stride_0_1 ; } memcpy ( & in1 [ 0 ] , & in1_p [ 0 ]
, 36U * sizeof ( real_T ) ) ; } static void kkefezl0wy ( i2qqrhl1oe * *
pEmxArray ) { if ( * pEmxArray != ( i2qqrhl1oe * ) NULL ) { if ( ( ( *
pEmxArray ) -> data != ( boolean_T * ) NULL ) && ( * pEmxArray ) ->
canFreeData ) { free ( ( * pEmxArray ) -> data ) ; } free ( ( * pEmxArray )
-> size ) ; free ( * pEmxArray ) ; * pEmxArray = ( i2qqrhl1oe * ) NULL ; } }
static void ed4opnbslm ( oy2a1akvcj * obj , real_T xSol [ 6 ] , ehzicop4dv *
exitFlag , real_T * err , real_T * iter ) { __m128d tmp_f ; __m128d tmp_g ;
__m128d tmp_j ; fprravcitl * b ; hnyeda4wkh * A ; hnyeda4wkh * A_p ;
hnyeda4wkh * B_p ; hnyeda4wkh * L ; hnyeda4wkh * a__2 ; hnyeda4wkh * alpha ;
hnyeda4wkh * alpha_p ; hnyeda4wkh * grad ; hnyeda4wkh * y ; i2qqrhl1oe *
activeSet ; i2qqrhl1oe * x_p ; nabfuq4qup * tmp ; nabfuq4qup * tmp_e ;
nabfuq4qup * tmp_i ; nabfuq4qup * tmp_m ; nabfuq4qup * tmp_p ; real_T H [ 36
] ; real_T H_p [ 36 ] ; real_T P_p [ 36 ] ; real_T V [ 36 ] ; real_T idxl_p [
36 ] ; real_T Hg [ 6 ] ; real_T sNew [ 6 ] ; real_T x [ 6 ] ; real_T A_e ;
real_T b_gamma ; real_T beta ; real_T cost ; real_T costNew ; real_T idxl ;
real_T lambda ; real_T m ; real_T sigma ; real_T sigma_p ; int32_T aoffset ;
int32_T boffset ; int32_T coffset ; int32_T g_idx_0 ; int32_T i ; int32_T
inner ; int32_T m_p ; int32_T n ; int32_T nx ; int32_T scalarLB ; int32_T
vectorUB ; boolean_T flag ; static const int8_T tmp_c [ 36 ] = { 1 , 0 , 0 ,
0 , 0 , 0 , 0 , 1 , 0 , 0 , 0 , 0 , 0 , 0 , 1 , 0 , 0 , 0 , 0 , 0 , 0 , 1 , 0
, 0 , 0 , 0 , 0 , 0 , 1 , 0 , 0 , 0 , 0 , 0 , 0 , 1 } ; hnyeda4wkh * tmp_b ;
hnyeda4wkh * tmp_d ; hnyeda4wkh * tmp_l ; hnyeda4wkh * tmp_n ; nabfuq4qup *
tmp_k ; int32_T exitg1 ; int32_T exitg2 ; boolean_T exitg3 ; boolean_T guard1
= false ; boolean_T guard2 = false ; boolean_T guard3 = false ; boolean_T
guard4 = false ; for ( i = 0 ; i < 6 ; i ++ ) { x [ i ] = obj -> SeedInternal
[ i ] ; } ffbryqludb ( & obj -> TimeObjInternal . StartTime . tv_sec , & obj
-> TimeObjInternal . StartTime . tv_nsec ) ; jolvb3jiwj ( & a__2 , 2 ) ;
jdyfpxqf0y ( x , obj -> ExtraArgs , & cost , H , a__2 , & b ) ; obj ->
ExtraArgs = b ; b = obj -> ExtraArgs ; jolvb3jiwj ( & grad , 1 ) ; i = grad
-> size [ 0 ] ; grad -> size [ 0 ] = b -> GradTemp -> size [ 0 ] ; o4pyrzarz5
( grad , i ) ; m_p = b -> GradTemp -> size [ 0 ] ; for ( i = 0 ; i < m_p ; i
++ ) { grad -> data [ i ] = b -> GradTemp -> data [ i ] ; } memset ( & H [ 0
] , 0 , 36U * sizeof ( real_T ) ) ; for ( n = 0 ; n < 6 ; n ++ ) { H [ n + 6
* n ] = 1.0 ; } bob53arkio ( & activeSet , 1 ) ; jolvb3jiwj ( & A , 2 ) ;
jolvb3jiwj ( & L , 1 ) ; drgklfcy43 ( & tmp , 1 ) ; if ( obj -> ConstraintsOn
) { i = A -> size [ 0 ] * A -> size [ 1 ] ; A -> size [ 0 ] = obj ->
ConstraintMatrix -> size [ 0 ] ; A -> size [ 1 ] = obj -> ConstraintMatrix ->
size [ 1 ] ; o4pyrzarz5 ( A , i ) ; m_p = obj -> ConstraintMatrix -> size [ 0
] * obj -> ConstraintMatrix -> size [ 1 ] ; for ( i = 0 ; i < m_p ; i ++ ) {
A -> data [ i ] = obj -> ConstraintMatrix -> data [ i ] ; } g1ccfqf002d ( A ,
x , L ) ; if ( L -> size [ 0 ] == obj -> ConstraintBound -> size [ 0 ] ) { i
= activeSet -> size [ 0 ] ; activeSet -> size [ 0 ] = L -> size [ 0 ] ;
pyp4acmmkn ( activeSet , i ) ; m_p = L -> size [ 0 ] ; for ( i = 0 ; i < m_p
; i ++ ) { activeSet -> data [ i ] = ( L -> data [ i ] >= obj ->
ConstraintBound -> data [ i ] ) ; } } else { epjk1yr5ig0n51 ( activeSet , L ,
obj ) ; } n = activeSet -> size [ 0 ] - 1 ; m_p = 0 ; for ( i = 0 ; i <= n ;
i ++ ) { if ( activeSet -> data [ i ] ) { m_p ++ ; } } i = tmp -> size [ 0 ]
; tmp -> size [ 0 ] = m_p ; h4sw33p0mb ( tmp , i ) ; m_p = 0 ; for ( i = 0 ;
i <= n ; i ++ ) { if ( activeSet -> data [ i ] ) { tmp -> data [ m_p ] = i ;
m_p ++ ; } } i = A -> size [ 0 ] * A -> size [ 1 ] ; A -> size [ 0 ] = obj ->
ConstraintMatrix -> size [ 0 ] ; A -> size [ 1 ] = tmp -> size [ 0 ] ;
o4pyrzarz5 ( A , i ) ; m_p = tmp -> size [ 0 ] ; for ( i = 0 ; i < m_p ; i ++
) { n = obj -> ConstraintMatrix -> size [ 0 ] ; for ( inner = 0 ; inner < n ;
inner ++ ) { A -> data [ inner + A -> size [ 0 ] * i ] = obj ->
ConstraintMatrix -> data [ obj -> ConstraintMatrix -> size [ 0 ] * tmp ->
data [ i ] + inner ] ; } } } else { g_idx_0 = obj -> ConstraintBound -> size
[ 0 ] ; i = activeSet -> size [ 0 ] ; activeSet -> size [ 0 ] = g_idx_0 ;
pyp4acmmkn ( activeSet , i ) ; if ( g_idx_0 - 1 >= 0 ) { memset ( & activeSet
-> data [ 0 ] , 0 , ( uint32_T ) g_idx_0 * sizeof ( boolean_T ) ) ; } A ->
size [ 0 ] = 6 ; A -> size [ 1 ] = 0 ; } nx = A -> size [ 1 ] - 1 ;
jolvb3jiwj ( & A_p , 2 ) ; for ( n = 0 ; n <= nx ; n ++ ) { A_e = 0.0 ; for (
i = 0 ; i < 6 ; i ++ ) { costNew = 0.0 ; for ( inner = 0 ; inner < 6 ; inner
++ ) { costNew += H [ 6 * i + inner ] * A -> data [ A -> size [ 0 ] * n +
inner ] ; } A_e += A -> data [ A -> size [ 0 ] * n + i ] * costNew ; } idxl =
1.0 / A_e ; for ( i = 0 ; i <= 34 ; i += 2 ) { tmp_f = _mm_loadu_pd ( & H [ i
] ) ; _mm_storeu_pd ( & idxl_p [ i ] , _mm_mul_pd ( _mm_set1_pd ( idxl ) ,
tmp_f ) ) ; } g_idx_0 = A -> size [ 0 ] ; i = A_p -> size [ 0 ] * A_p -> size
[ 1 ] ; A_p -> size [ 0 ] = A -> size [ 0 ] ; A_p -> size [ 1 ] = A -> size [
0 ] ; o4pyrzarz5 ( A_p , i ) ; for ( i = 0 ; i < g_idx_0 ; i ++ ) { m_p = A
-> size [ 0 ] ; scalarLB = ( A -> size [ 0 ] / 2 ) << 1 ; vectorUB = scalarLB
- 2 ; for ( inner = 0 ; inner <= vectorUB ; inner += 2 ) { tmp_f =
_mm_loadu_pd ( & A -> data [ A -> size [ 0 ] * n + inner ] ) ; _mm_storeu_pd
( & A_p -> data [ inner + A_p -> size [ 0 ] * i ] , _mm_mul_pd ( tmp_f ,
_mm_set1_pd ( A -> data [ i + A -> size [ 0 ] * n ] ) ) ) ; } for ( inner =
scalarLB ; inner < m_p ; inner ++ ) { A_p -> data [ inner + A_p -> size [ 0 ]
* i ] = A -> data [ A -> size [ 0 ] * n + inner ] * A -> data [ A -> size [ 0
] * n + i ] ; } } g1ccfqf002df ( idxl_p , A_p , a__2 ) ; for ( i = 0 ; i < 6
; i ++ ) { for ( inner = 0 ; inner < 6 ; inner ++ ) { idxl = 0.0 ; for ( m_p
= 0 ; m_p < 6 ; m_p ++ ) { idxl += a__2 -> data [ 6 * m_p + i ] * H [ 6 *
inner + m_p ] ; } H_p [ i + 6 * inner ] = H [ 6 * inner + i ] - idxl ; } }
memcpy ( & H [ 0 ] , & H_p [ 0 ] , 36U * sizeof ( real_T ) ) ; } for ( i = 0
; i < 6 ; i ++ ) { xSol [ i ] = x [ i ] ; } A_e = obj ->
MaxNumIterationInternal ; g_idx_0 = 0 ; jolvb3jiwj ( & alpha , 1 ) ;
jolvb3jiwj ( & B_p , 2 ) ; jolvb3jiwj ( & y , 2 ) ; bob53arkio ( & x_p , 1 )
; drgklfcy43 ( & tmp_p , 1 ) ; drgklfcy43 ( & tmp_e , 1 ) ; drgklfcy43 ( &
tmp_i , 1 ) ; drgklfcy43 ( & tmp_m , 1 ) ; jolvb3jiwj ( & alpha_p , 1 ) ;
drgklfcy43 ( & tmp_k , 1 ) ; jolvb3jiwj ( & tmp_b , 2 ) ; jolvb3jiwj ( &
tmp_n , 2 ) ; jolvb3jiwj ( & tmp_l , 2 ) ; jolvb3jiwj ( & tmp_d , 2 ) ; do {
exitg2 = 0 ; if ( g_idx_0 <= ( int32_T ) A_e - 1 ) { costNew = eh4ajh14pa (
obj -> TimeObjInternal . StartTime . tv_sec , obj -> TimeObjInternal .
StartTime . tv_nsec ) ; flag = ( costNew > obj -> MaxTimeInternal ) ; if (
flag ) { * exitFlag =
robotics_core_internal_NLPSolverExitFlags_TimeLimitExceeded ; b = obj ->
ExtraArgs ; for ( i = 0 ; i < 36 ; i ++ ) { H [ i ] = b -> WeightMatrix [ i ]
; } i = grad -> size [ 0 ] ; grad -> size [ 0 ] = b -> ErrTemp -> size [ 0 ]
; o4pyrzarz5 ( grad , i ) ; m_p = b -> ErrTemp -> size [ 0 ] ; for ( i = 0 ;
i < m_p ; i ++ ) { grad -> data [ i ] = b -> ErrTemp -> data [ i ] ; } for (
i = 0 ; i < 6 ; i ++ ) { cost = 0.0 ; for ( inner = 0 ; inner < 6 ; inner ++
) { cost += H [ 6 * inner + i ] * grad -> data [ inner ] ; } x [ i ] = cost ;
} * err = e2fc0rh1xvp ( x ) ; * iter = ( real_T ) g_idx_0 + 1.0 ; exitg2 = 1
; } else { if ( ( A -> size [ 0 ] == 0 ) || ( A -> size [ 1 ] == 0 ) ) { i =
alpha -> size [ 0 ] ; alpha -> size [ 0 ] = 1 ; o4pyrzarz5 ( alpha , i ) ;
alpha -> data [ 0 ] = 0.0 ; } else { i = A_p -> size [ 0 ] * A_p -> size [ 1
] ; A_p -> size [ 0 ] = A -> size [ 1 ] ; A_p -> size [ 1 ] = A -> size [ 0 ]
; o4pyrzarz5 ( A_p , i ) ; m_p = A -> size [ 0 ] ; n = A -> size [ 1 ] ; for
( i = 0 ; i < m_p ; i ++ ) { for ( inner = 0 ; inner < n ; inner ++ ) { A_p
-> data [ inner + A_p -> size [ 0 ] * i ] = A -> data [ A -> size [ 0 ] *
inner + i ] ; } } g1ccfqf002dfl ( A , A , tmp_n ) ; pjivvek2mh ( tmp_n , A_p
, B_p ) ; m_p = B_p -> size [ 0 ] - 1 ; inner = B_p -> size [ 1 ] - 1 ; i =
alpha -> size [ 0 ] ; alpha -> size [ 0 ] = B_p -> size [ 0 ] ; o4pyrzarz5 (
alpha , i ) ; if ( m_p >= 0 ) { memset ( & alpha -> data [ 0 ] , 0 , (
uint32_T ) ( m_p + 1 ) * sizeof ( real_T ) ) ; } for ( n = 0 ; n <= inner ; n
++ ) { aoffset = n * B_p -> size [ 0 ] - 1 ; scalarLB = ( ( m_p + 1 ) / 2 )
<< 1 ; vectorUB = scalarLB - 2 ; for ( i = 0 ; i <= vectorUB ; i += 2 ) {
tmp_f = _mm_loadu_pd ( & B_p -> data [ ( aoffset + i ) + 1 ] ) ; tmp_j =
_mm_loadu_pd ( & alpha -> data [ i ] ) ; _mm_storeu_pd ( & alpha -> data [ i
] , _mm_add_pd ( _mm_mul_pd ( tmp_f , _mm_set1_pd ( grad -> data [ n ] ) ) ,
tmp_j ) ) ; } for ( i = scalarLB ; i <= m_p ; i ++ ) { alpha -> data [ i ] +=
B_p -> data [ ( aoffset + i ) + 1 ] * grad -> data [ n ] ; } } } for ( i = 0
; i < 6 ; i ++ ) { lambda = 0.0 ; for ( inner = 0 ; inner < 6 ; inner ++ ) {
lambda += H [ 6 * inner + i ] * grad -> data [ inner ] ; } Hg [ i ] = lambda
; } guard1 = false ; guard2 = false ; guard3 = false ; guard4 = false ; if (
e2fc0rh1xvp ( Hg ) < obj -> GradientTolerance ) { i = x_p -> size [ 0 ] ; x_p
-> size [ 0 ] = alpha -> size [ 0 ] ; pyp4acmmkn ( x_p , i ) ; m_p = alpha ->
size [ 0 ] ; for ( i = 0 ; i < m_p ; i ++ ) { x_p -> data [ i ] = ( alpha ->
data [ i ] <= 0.0 ) ; } flag = true ; n = 0 ; exitg3 = false ; while ( ( !
exitg3 ) && ( n + 1 <= x_p -> size [ 0 ] ) ) { if ( ! x_p -> data [ n ] ) {
flag = false ; exitg3 = true ; } else { n ++ ; } } if ( flag ) { * exitFlag =
robotics_core_internal_NLPSolverExitFlags_LocalMinimumFound ; b = obj ->
ExtraArgs ; for ( i = 0 ; i < 36 ; i ++ ) { H [ i ] = b -> WeightMatrix [ i ]
; } i = grad -> size [ 0 ] ; grad -> size [ 0 ] = b -> ErrTemp -> size [ 0 ]
; o4pyrzarz5 ( grad , i ) ; m_p = b -> ErrTemp -> size [ 0 ] ; for ( i = 0 ;
i < m_p ; i ++ ) { grad -> data [ i ] = b -> ErrTemp -> data [ i ] ; } for (
i = 0 ; i < 6 ; i ++ ) { cost = 0.0 ; for ( inner = 0 ; inner < 6 ; inner ++
) { cost += H [ 6 * inner + i ] * grad -> data [ inner ] ; } x [ i ] = cost ;
} * err = e2fc0rh1xvp ( x ) ; * iter = ( real_T ) g_idx_0 + 1.0 ; exitg2 = 1
; } else { guard4 = true ; } } else { guard4 = true ; } if ( guard4 ) { if (
obj -> ConstraintsOn && ( ( A -> size [ 0 ] != 0 ) && ( A -> size [ 1 ] != 0
) ) ) { g1ccfqf002dfl ( A , A , tmp_b ) ; hknlcbnvzi ( tmp_b , B_p ) ; if ( (
B_p -> size [ 0 ] == 1 ) && ( B_p -> size [ 1 ] == 1 ) ) { i = L -> size [ 0
] ; L -> size [ 0 ] = 1 ; o4pyrzarz5 ( L , i ) ; L -> data [ 0 ] = B_p ->
data [ 0 ] ; } else { m_p = B_p -> size [ 0 ] ; n = B_p -> size [ 1 ] ; if (
B_p -> size [ 1 ] > 0 ) { n = muIntScalarMin_sint32 ( m_p , n ) ; } else { n
= 0 ; } i = L -> size [ 0 ] ; L -> size [ 0 ] = n ; o4pyrzarz5 ( L , i ) ;
for ( nx = 0 ; nx < n ; nx ++ ) { L -> data [ nx ] = B_p -> data [ B_p ->
size [ 0 ] * nx + nx ] ; } } nx = L -> size [ 0 ] - 1 ; scalarLB = ( L ->
size [ 0 ] / 2 ) << 1 ; vectorUB = scalarLB - 2 ; for ( n = 0 ; n <= vectorUB
; n += 2 ) { tmp_f = _mm_loadu_pd ( & L -> data [ n ] ) ; _mm_storeu_pd ( & L
-> data [ n ] , _mm_sqrt_pd ( tmp_f ) ) ; } for ( n = scalarLB ; n <= nx ; n
++ ) { L -> data [ n ] = muDoubleScalarSqrt ( L -> data [ n ] ) ; } if (
alpha -> size [ 0 ] == L -> size [ 0 ] ) { i = alpha_p -> size [ 0 ] ;
alpha_p -> size [ 0 ] = alpha -> size [ 0 ] ; o4pyrzarz5 ( alpha_p , i ) ;
m_p = alpha -> size [ 0 ] ; scalarLB = ( alpha -> size [ 0 ] / 2 ) << 1 ;
vectorUB = scalarLB - 2 ; for ( i = 0 ; i <= vectorUB ; i += 2 ) { tmp_f =
_mm_loadu_pd ( & alpha -> data [ i ] ) ; tmp_j = _mm_loadu_pd ( & L -> data [
i ] ) ; _mm_storeu_pd ( & alpha_p -> data [ i ] , _mm_div_pd ( tmp_f , tmp_j
) ) ; } for ( i = scalarLB ; i < m_p ; i ++ ) { alpha_p -> data [ i ] = alpha
-> data [ i ] / L -> data [ i ] ; } hjt0i4ijtz ( alpha_p , & costNew , & nx )
; } else { epjk1yr5ig0n5 ( alpha , L , & costNew , & nx ) ; } if (
e2fc0rh1xvp ( Hg ) < 0.5 * costNew ) { nrmihjhybi5 ( activeSet , tmp ) ; i =
alpha -> size [ 0 ] ; alpha -> size [ 0 ] = tmp -> size [ 0 ] ; o4pyrzarz5 (
alpha , i ) ; m_p = tmp -> size [ 0 ] ; for ( i = 0 ; i < m_p ; i ++ ) {
alpha -> data [ i ] = tmp -> data [ i ] ; } activeSet -> data [ ( int32_T )
alpha -> data [ nx - 1 ] - 1 ] = false ; n = activeSet -> size [ 0 ] - 1 ;
m_p = 0 ; for ( i = 0 ; i <= n ; i ++ ) { if ( activeSet -> data [ i ] ) {
m_p ++ ; } } i = tmp_i -> size [ 0 ] ; tmp_i -> size [ 0 ] = m_p ; h4sw33p0mb
( tmp_i , i ) ; m_p = 0 ; for ( i = 0 ; i <= n ; i ++ ) { if ( activeSet ->
data [ i ] ) { tmp_i -> data [ m_p ] = i ; m_p ++ ; } } i = A -> size [ 0 ] *
A -> size [ 1 ] ; A -> size [ 0 ] = obj -> ConstraintMatrix -> size [ 0 ] ; A
-> size [ 1 ] = tmp_i -> size [ 0 ] ; o4pyrzarz5 ( A , i ) ; m_p = tmp_i ->
size [ 0 ] ; for ( i = 0 ; i < m_p ; i ++ ) { n = obj -> ConstraintMatrix ->
size [ 0 ] ; for ( inner = 0 ; inner < n ; inner ++ ) { A -> data [ inner + A
-> size [ 0 ] * i ] = obj -> ConstraintMatrix -> data [ obj ->
ConstraintMatrix -> size [ 0 ] * tmp_i -> data [ i ] + inner ] ; } } memset (
& P_p [ 0 ] , 0 , 36U * sizeof ( real_T ) ) ; for ( n = 0 ; n < 6 ; n ++ ) {
P_p [ n + 6 * n ] = 1.0 ; } i = A_p -> size [ 0 ] * A_p -> size [ 1 ] ; A_p
-> size [ 0 ] = A -> size [ 1 ] ; A_p -> size [ 1 ] = A -> size [ 0 ] ;
o4pyrzarz5 ( A_p , i ) ; m_p = A -> size [ 0 ] ; for ( i = 0 ; i < m_p ; i ++
) { n = A -> size [ 1 ] ; for ( inner = 0 ; inner < n ; inner ++ ) { A_p ->
data [ inner + A_p -> size [ 0 ] * i ] = A -> data [ A -> size [ 0 ] * inner
+ i ] ; } } g1ccfqf002dfl ( A , A , tmp_l ) ; pjivvek2mh ( tmp_l , A_p ,
tmp_d ) ; g1ccfqf002dfli ( A , tmp_d , B_p ) ; if ( ( B_p -> size [ 0 ] == 6
) && ( B_p -> size [ 1 ] == 6 ) ) { for ( i = 0 ; i <= 34 ; i += 2 ) { tmp_f
= _mm_loadu_pd ( & P_p [ i ] ) ; tmp_j = _mm_loadu_pd ( & B_p -> data [ i ] )
; _mm_storeu_pd ( & P_p [ i ] , _mm_sub_pd ( tmp_f , tmp_j ) ) ; } } else {
e0vmbp53uio ( P_p , B_p ) ; } nx = ( int32_T ) alpha -> data [ nx - 1 ] - 1 ;
i = alpha -> size [ 0 ] ; alpha -> size [ 0 ] = obj -> ConstraintMatrix ->
size [ 0 ] ; o4pyrzarz5 ( alpha , i ) ; m_p = obj -> ConstraintMatrix -> size
[ 0 ] ; for ( i = 0 ; i < m_p ; i ++ ) { alpha -> data [ i ] = obj ->
ConstraintMatrix -> data [ obj -> ConstraintMatrix -> size [ 0 ] * nx + i ] ;
} costNew = 0.0 ; for ( i = 0 ; i < 6 ; i ++ ) { idxl = 0.0 ; for ( inner = 0
; inner < 6 ; inner ++ ) { idxl += P_p [ 6 * i + inner ] * alpha -> data [
inner ] ; } costNew += idxl * alpha -> data [ i ] ; } idxl = 1.0 / costNew ;
for ( i = 0 ; i <= 34 ; i += 2 ) { tmp_f = _mm_loadu_pd ( & P_p [ i ] ) ;
_mm_storeu_pd ( & idxl_p [ i ] , _mm_mul_pd ( _mm_set1_pd ( idxl ) , tmp_f )
) ; } i = A_p -> size [ 0 ] * A_p -> size [ 1 ] ; A_p -> size [ 0 ] = alpha
-> size [ 0 ] ; A_p -> size [ 1 ] = alpha -> size [ 0 ] ; o4pyrzarz5 ( A_p ,
i ) ; m_p = alpha -> size [ 0 ] ; for ( i = 0 ; i < m_p ; i ++ ) { n = alpha
-> size [ 0 ] ; scalarLB = ( alpha -> size [ 0 ] / 2 ) << 1 ; vectorUB =
scalarLB - 2 ; for ( inner = 0 ; inner <= vectorUB ; inner += 2 ) { tmp_f =
_mm_loadu_pd ( & alpha -> data [ inner ] ) ; _mm_storeu_pd ( & A_p -> data [
inner + A_p -> size [ 0 ] * i ] , _mm_mul_pd ( tmp_f , _mm_set1_pd ( alpha ->
data [ i ] ) ) ) ; } for ( inner = scalarLB ; inner < n ; inner ++ ) { A_p ->
data [ inner + A_p -> size [ 0 ] * i ] = alpha -> data [ inner ] * alpha ->
data [ i ] ; } } g1ccfqf002df ( idxl_p , A_p , a__2 ) ; for ( i = 0 ; i < 6 ;
i ++ ) { for ( inner = 0 ; inner < 6 ; inner ++ ) { idxl = 0.0 ; for ( m_p =
0 ; m_p < 6 ; m_p ++ ) { idxl += a__2 -> data [ 6 * m_p + i ] * P_p [ 6 *
inner + m_p ] ; } H [ i + 6 * inner ] += idxl ; } } g_idx_0 ++ ; } else {
guard3 = true ; } } else { guard3 = true ; } } if ( guard3 ) { for ( i = 0 ;
i <= 4 ; i += 2 ) { tmp_f = _mm_loadu_pd ( & Hg [ i ] ) ; _mm_storeu_pd ( &
Hg [ i ] , _mm_mul_pd ( tmp_f , _mm_set1_pd ( - 1.0 ) ) ) ; } idxl = - 1.0 ;
if ( obj -> ConstraintsOn ) { i = x_p -> size [ 0 ] ; x_p -> size [ 0 ] =
activeSet -> size [ 0 ] ; pyp4acmmkn ( x_p , i ) ; m_p = activeSet -> size [
0 ] ; for ( i = 0 ; i < m_p ; i ++ ) { x_p -> data [ i ] = ! activeSet ->
data [ i ] ; } if ( jwl4kngeul ( x_p ) ) { n = activeSet -> size [ 0 ] - 1 ;
m_p = 0 ; for ( i = 0 ; i <= n ; i ++ ) { if ( ! activeSet -> data [ i ] ) {
m_p ++ ; } } i = alpha -> size [ 0 ] ; alpha -> size [ 0 ] = m_p ; o4pyrzarz5
( alpha , i ) ; m_p = 0 ; for ( i = 0 ; i <= n ; i ++ ) { if ( ! activeSet ->
data [ i ] ) { alpha -> data [ m_p ] = obj -> ConstraintBound -> data [ i ] ;
m_p ++ ; } } n = activeSet -> size [ 0 ] - 1 ; m_p = 0 ; for ( i = 0 ; i <= n
; i ++ ) { if ( ! activeSet -> data [ i ] ) { m_p ++ ; } } i = tmp_p -> size
[ 0 ] ; tmp_p -> size [ 0 ] = m_p ; h4sw33p0mb ( tmp_p , i ) ; m_p = 0 ; for
( i = 0 ; i <= n ; i ++ ) { if ( ! activeSet -> data [ i ] ) { tmp_p -> data
[ m_p ] = i ; m_p ++ ; } } i = B_p -> size [ 0 ] * B_p -> size [ 1 ] ; B_p ->
size [ 0 ] = obj -> ConstraintMatrix -> size [ 0 ] ; B_p -> size [ 1 ] =
tmp_p -> size [ 0 ] ; o4pyrzarz5 ( B_p , i ) ; m_p = tmp_p -> size [ 0 ] ;
for ( i = 0 ; i < m_p ; i ++ ) { n = obj -> ConstraintMatrix -> size [ 0 ] ;
for ( inner = 0 ; inner < n ; inner ++ ) { B_p -> data [ inner + B_p -> size
[ 0 ] * i ] = obj -> ConstraintMatrix -> data [ obj -> ConstraintMatrix ->
size [ 0 ] * tmp_p -> data [ i ] + inner ] ; } } g1ccfqf002d ( B_p , x , L )
; g1ccfqf002d ( B_p , Hg , alpha_p ) ; if ( ( alpha -> size [ 0 ] == L ->
size [ 0 ] ) && ( ( alpha -> size [ 0 ] == 1 ? L -> size [ 0 ] : alpha ->
size [ 0 ] ) == alpha_p -> size [ 0 ] ) ) { m_p = alpha -> size [ 0 ] ;
scalarLB = ( alpha -> size [ 0 ] / 2 ) << 1 ; vectorUB = scalarLB - 2 ; for (
i = 0 ; i <= vectorUB ; i += 2 ) { tmp_f = _mm_loadu_pd ( & alpha -> data [ i
] ) ; tmp_j = _mm_loadu_pd ( & L -> data [ i ] ) ; tmp_g = _mm_loadu_pd ( &
alpha_p -> data [ i ] ) ; _mm_storeu_pd ( & alpha -> data [ i ] , _mm_div_pd
( _mm_sub_pd ( tmp_f , tmp_j ) , tmp_g ) ) ; } for ( i = scalarLB ; i < m_p ;
i ++ ) { alpha -> data [ i ] = ( alpha -> data [ i ] - L -> data [ i ] ) /
alpha_p -> data [ i ] ; } } else { epjk1yr5ig0n ( alpha , L , alpha_p ) ; } i
= x_p -> size [ 0 ] ; x_p -> size [ 0 ] = alpha -> size [ 0 ] ; pyp4acmmkn (
x_p , i ) ; m_p = alpha -> size [ 0 ] ; for ( i = 0 ; i < m_p ; i ++ ) { x_p
-> data [ i ] = ( alpha -> data [ i ] > 0.0 ) ; } nrmihjhybi5 ( x_p , tmp ) ;
i = L -> size [ 0 ] ; L -> size [ 0 ] = tmp -> size [ 0 ] ; o4pyrzarz5 ( L ,
i ) ; m_p = tmp -> size [ 0 ] ; for ( i = 0 ; i < m_p ; i ++ ) { L -> data [
i ] = tmp -> data [ i ] ; } if ( L -> size [ 0 ] != 0 ) { n = alpha -> size [
0 ] - 1 ; m_p = 0 ; for ( i = 0 ; i <= n ; i ++ ) { if ( alpha -> data [ i ]
> 0.0 ) { m_p ++ ; } } i = tmp_e -> size [ 0 ] ; tmp_e -> size [ 0 ] = m_p ;
h4sw33p0mb ( tmp_e , i ) ; m_p = 0 ; for ( i = 0 ; i <= n ; i ++ ) { if (
alpha -> data [ i ] > 0.0 ) { tmp_e -> data [ m_p ] = i ; m_p ++ ; } } i =
alpha_p -> size [ 0 ] ; alpha_p -> size [ 0 ] = tmp_e -> size [ 0 ] ;
o4pyrzarz5 ( alpha_p , i ) ; m_p = tmp_e -> size [ 0 ] ; for ( i = 0 ; i <
m_p ; i ++ ) { alpha_p -> data [ i ] = alpha -> data [ tmp_e -> data [ i ] ]
; } nhs4l5nqsu ( alpha_p , & lambda , & nx ) ; i = x_p -> size [ 0 ] ; x_p ->
size [ 0 ] = activeSet -> size [ 0 ] ; pyp4acmmkn ( x_p , i ) ; m_p =
activeSet -> size [ 0 ] ; for ( i = 0 ; i < m_p ; i ++ ) { x_p -> data [ i ]
= ! activeSet -> data [ i ] ; } nrmihjhybi5 ( x_p , tmp_k ) ; idxl = tmp_k ->
data [ ( int32_T ) L -> data [ nx - 1 ] - 1 ] ; } else { lambda = 0.0 ; } }
else { lambda = 0.0 ; } } else { lambda = 0.0 ; } if ( lambda > 0.0 ) {
b_gamma = muDoubleScalarMin ( 1.0 , lambda ) ; } else { b_gamma = 1.0 ; }
beta = obj -> ArmijoRuleBeta ; sigma = obj -> ArmijoRuleSigma ; for ( i = 0 ;
i <= 4 ; i += 2 ) { tmp_f = _mm_loadu_pd ( & Hg [ i ] ) ; tmp_j =
_mm_loadu_pd ( & x [ i ] ) ; _mm_storeu_pd ( & sNew [ i ] , _mm_add_pd (
_mm_mul_pd ( _mm_set1_pd ( b_gamma ) , tmp_f ) , tmp_j ) ) ; } jdyfpxqf0y (
sNew , obj -> ExtraArgs , & costNew , P_p , a__2 , & b ) ; obj -> ExtraArgs =
b ; m = 0.0 ; do { exitg1 = 0 ; sigma_p = 0.0 ; for ( i = 0 ; i < 6 ; i ++ )
{ sigma_p += - sigma * grad -> data [ i ] * ( b_gamma * Hg [ i ] ) ; } if (
cost - costNew < sigma_p ) { flag = ( b_gamma < obj -> StepTolerance ) ; if (
flag ) { * exitFlag =
robotics_core_internal_NLPSolverExitFlags_StepSizeBelowMinimum ; b = obj ->
ExtraArgs ; for ( i = 0 ; i < 36 ; i ++ ) { H [ i ] = b -> WeightMatrix [ i ]
; } i = grad -> size [ 0 ] ; grad -> size [ 0 ] = b -> ErrTemp -> size [ 0 ]
; o4pyrzarz5 ( grad , i ) ; m_p = b -> ErrTemp -> size [ 0 ] ; for ( i = 0 ;
i < m_p ; i ++ ) { grad -> data [ i ] = b -> ErrTemp -> data [ i ] ; } for (
i = 0 ; i < 6 ; i ++ ) { cost = 0.0 ; for ( inner = 0 ; inner < 6 ; inner ++
) { cost += H [ 6 * inner + i ] * grad -> data [ inner ] ; } x [ i ] = cost ;
} * err = e2fc0rh1xvp ( x ) ; * iter = ( real_T ) g_idx_0 + 1.0 ; exitg1 = 1
; } else { b_gamma *= beta ; m ++ ; for ( i = 0 ; i <= 4 ; i += 2 ) { tmp_f =
_mm_loadu_pd ( & Hg [ i ] ) ; tmp_j = _mm_loadu_pd ( & x [ i ] ) ;
_mm_storeu_pd ( & sNew [ i ] , _mm_add_pd ( _mm_mul_pd ( _mm_set1_pd (
b_gamma ) , tmp_f ) , tmp_j ) ) ; } jdyfpxqf0y ( sNew , obj -> ExtraArgs , &
costNew , P_p , a__2 , & b ) ; obj -> ExtraArgs = b ; } } else { for ( i = 0
; i <= 4 ; i += 2 ) { tmp_f = _mm_loadu_pd ( & Hg [ i ] ) ; tmp_j =
_mm_loadu_pd ( & x [ i ] ) ; _mm_storeu_pd ( & xSol [ i ] , _mm_add_pd (
_mm_mul_pd ( _mm_set1_pd ( b_gamma ) , tmp_f ) , tmp_j ) ) ; } b = obj ->
ExtraArgs ; i = alpha -> size [ 0 ] ; alpha -> size [ 0 ] = b -> GradTemp ->
size [ 0 ] ; o4pyrzarz5 ( alpha , i ) ; m_p = b -> GradTemp -> size [ 0 ] ;
for ( i = 0 ; i < m_p ; i ++ ) { alpha -> data [ i ] = b -> GradTemp -> data
[ i ] ; } exitg1 = 2 ; } } while ( exitg1 == 0 ) ; if ( exitg1 == 1 ) {
exitg2 = 1 ; } else if ( ( m == 0.0 ) && ( muDoubleScalarAbs ( b_gamma -
lambda ) < 1.4901161193847656E-8 ) ) { nx = ( int32_T ) idxl ; i = grad ->
size [ 0 ] ; grad -> size [ 0 ] = obj -> ConstraintMatrix -> size [ 0 ] ;
o4pyrzarz5 ( grad , i ) ; m_p = obj -> ConstraintMatrix -> size [ 0 ] ; for (
i = 0 ; i < m_p ; i ++ ) { grad -> data [ i ] = obj -> ConstraintMatrix ->
data [ ( nx - 1 ) * obj -> ConstraintMatrix -> size [ 0 ] + i ] ; } activeSet
-> data [ ( int32_T ) idxl - 1 ] = true ; n = activeSet -> size [ 0 ] - 1 ;
m_p = 0 ; for ( i = 0 ; i <= n ; i ++ ) { if ( activeSet -> data [ i ] ) {
m_p ++ ; } } i = tmp_m -> size [ 0 ] ; tmp_m -> size [ 0 ] = m_p ; h4sw33p0mb
( tmp_m , i ) ; m_p = 0 ; for ( i = 0 ; i <= n ; i ++ ) { if ( activeSet ->
data [ i ] ) { tmp_m -> data [ m_p ] = i ; m_p ++ ; } } i = A -> size [ 0 ] *
A -> size [ 1 ] ; A -> size [ 0 ] = obj -> ConstraintMatrix -> size [ 0 ] ; A
-> size [ 1 ] = tmp_m -> size [ 0 ] ; o4pyrzarz5 ( A , i ) ; m_p = tmp_m ->
size [ 0 ] ; for ( i = 0 ; i < m_p ; i ++ ) { n = obj -> ConstraintMatrix ->
size [ 0 ] ; for ( inner = 0 ; inner < n ; inner ++ ) { A -> data [ inner + A
-> size [ 0 ] * i ] = obj -> ConstraintMatrix -> data [ obj ->
ConstraintMatrix -> size [ 0 ] * tmp_m -> data [ i ] + inner ] ; } } i = B_p
-> size [ 0 ] * B_p -> size [ 1 ] ; B_p -> size [ 0 ] = grad -> size [ 0 ] ;
B_p -> size [ 1 ] = grad -> size [ 0 ] ; o4pyrzarz5 ( B_p , i ) ; m_p = grad
-> size [ 0 ] ; for ( i = 0 ; i < m_p ; i ++ ) { n = grad -> size [ 0 ] ;
scalarLB = ( grad -> size [ 0 ] / 2 ) << 1 ; vectorUB = scalarLB - 2 ; for (
inner = 0 ; inner <= vectorUB ; inner += 2 ) { tmp_f = _mm_loadu_pd ( & grad
-> data [ inner ] ) ; _mm_storeu_pd ( & B_p -> data [ inner + B_p -> size [ 0
] * i ] , _mm_mul_pd ( tmp_f , _mm_set1_pd ( grad -> data [ i ] ) ) ) ; } for
( inner = scalarLB ; inner < n ; inner ++ ) { B_p -> data [ inner + B_p ->
size [ 0 ] * i ] = grad -> data [ inner ] * grad -> data [ i ] ; } } m_p =
B_p -> size [ 0 ] - 1 ; inner = B_p -> size [ 1 ] - 1 ; i = y -> size [ 0 ] *
y -> size [ 1 ] ; y -> size [ 0 ] = B_p -> size [ 0 ] ; y -> size [ 1 ] = 6 ;
o4pyrzarz5 ( y , i ) ; b_gamma = 0.0 ; for ( nx = 0 ; nx < 6 ; nx ++ ) {
coffset = ( m_p + 1 ) * nx - 1 ; boffset = nx * 6 - 1 ; if ( m_p >= 0 ) {
memset ( & y -> data [ coffset + 1 ] , 0 , ( uint32_T ) ( ( ( m_p + coffset )
- coffset ) + 1 ) * sizeof ( real_T ) ) ; } for ( n = 0 ; n <= inner ; n ++ )
{ aoffset = n * B_p -> size [ 0 ] - 1 ; cost = H [ ( boffset + n ) + 1 ] ;
scalarLB = ( ( m_p + 1 ) / 2 ) << 1 ; vectorUB = scalarLB - 2 ; for ( i = 0 ;
i <= vectorUB ; i += 2 ) { tmp_f = _mm_loadu_pd ( & B_p -> data [ ( i +
aoffset ) + 1 ] ) ; tmp_j = _mm_loadu_pd ( & y -> data [ ( i + coffset ) + 1
] ) ; _mm_storeu_pd ( & y -> data [ ( coffset + i ) + 1 ] , _mm_add_pd (
_mm_mul_pd ( tmp_f , _mm_set1_pd ( cost ) ) , tmp_j ) ) ; } for ( i =
scalarLB ; i <= m_p ; i ++ ) { y -> data [ ( coffset + i ) + 1 ] += B_p ->
data [ ( i + aoffset ) + 1 ] * cost ; } } sigma = 0.0 ; for ( i = 0 ; i < 6 ;
i ++ ) { sigma += H [ 6 * nx + i ] * grad -> data [ i ] ; } b_gamma += sigma
* grad -> data [ nx ] ; } idxl = 1.0 / b_gamma ; for ( i = 0 ; i < 6 ; i ++ )
{ for ( inner = 0 ; inner < 6 ; inner ++ ) { cost = 0.0 ; for ( m_p = 0 ; m_p
< 6 ; m_p ++ ) { cost += H [ 6 * m_p + i ] * y -> data [ 6 * inner + m_p ] ;
} H_p [ i + 6 * inner ] = cost ; } } for ( i = 0 ; i <= 34 ; i += 2 ) { tmp_f
= _mm_loadu_pd ( & H_p [ i ] ) ; tmp_j = _mm_loadu_pd ( & H [ i ] ) ;
_mm_storeu_pd ( & H [ i ] , _mm_sub_pd ( tmp_j , _mm_mul_pd ( _mm_set1_pd (
idxl ) , tmp_f ) ) ) ; } guard2 = true ; } else { if ( alpha -> size [ 0 ] ==
grad -> size [ 0 ] ) { i = grad -> size [ 0 ] ; grad -> size [ 0 ] = alpha ->
size [ 0 ] ; o4pyrzarz5 ( grad , i ) ; m_p = alpha -> size [ 0 ] ; scalarLB =
( alpha -> size [ 0 ] / 2 ) << 1 ; vectorUB = scalarLB - 2 ; for ( i = 0 ; i
<= vectorUB ; i += 2 ) { tmp_f = _mm_loadu_pd ( & alpha -> data [ i ] ) ;
tmp_j = _mm_loadu_pd ( & grad -> data [ i ] ) ; _mm_storeu_pd ( & grad ->
data [ i ] , _mm_sub_pd ( tmp_f , tmp_j ) ) ; } for ( i = scalarLB ; i < m_p
; i ++ ) { grad -> data [ i ] = alpha -> data [ i ] - grad -> data [ i ] ; }
} else { e0vmbp53uio1 ( grad , alpha ) ; } lambda = 0.0 ; idxl = 0.0 ; for (
i = 0 ; i < 6 ; i ++ ) { lambda += Hg [ i ] * grad -> data [ i ] ; beta = 0.0
; for ( inner = 0 ; inner < 6 ; inner ++ ) { beta += H [ 6 * i + inner ] * (
0.2 * grad -> data [ inner ] ) ; } idxl += beta * grad -> data [ i ] ; } if (
lambda < idxl ) { idxl = 0.0 ; b_gamma = 0.0 ; lambda = 0.0 ; for ( i = 0 ; i
< 6 ; i ++ ) { beta = 0.0 ; sigma = 0.0 ; for ( inner = 0 ; inner < 6 ; inner
++ ) { cost = H [ 6 * i + inner ] ; m = grad -> data [ inner ] ; beta += 0.8
* m * cost ; sigma += cost * m ; } m = grad -> data [ i ] ; idxl += beta * m
; b_gamma += sigma * m ; lambda += Hg [ i ] * m ; } cost = idxl / ( b_gamma -
lambda ) ; } else { cost = 1.0 ; } lambda = 0.0 ; for ( i = 0 ; i < 6 ; i ++
) { idxl = 0.0 ; for ( inner = 0 ; inner < 6 ; inner ++ ) { idxl += H [ 6 *
inner + i ] * ( 1.0 - cost ) * grad -> data [ inner ] ; } idxl += cost * Hg [
i ] ; sNew [ i ] = idxl ; lambda += idxl * grad -> data [ i ] ; } memset ( &
P_p [ 0 ] , 0 , 36U * sizeof ( real_T ) ) ; for ( n = 0 ; n < 6 ; n ++ ) {
P_p [ n + 6 * n ] = 1.0 ; } if ( grad -> size [ 0 ] == 6 ) { for ( i = 0 ; i
< 6 ; i ++ ) { for ( inner = 0 ; inner <= 4 ; inner += 2 ) { tmp_f =
_mm_loadu_pd ( & sNew [ inner ] ) ; tmp_j = _mm_loadu_pd ( & P_p [ 6 * i +
inner ] ) ; _mm_storeu_pd ( & V [ inner + 6 * i ] , _mm_sub_pd ( tmp_j ,
_mm_div_pd ( _mm_mul_pd ( tmp_f , _mm_set1_pd ( grad -> data [ i ] ) ) ,
_mm_set1_pd ( lambda ) ) ) ) ; } } } else { epjk1yr5ig0 ( V , P_p , sNew ,
grad , lambda ) ; } for ( i = 0 ; i < 6 ; i ++ ) { for ( inner = 0 ; inner <
6 ; inner ++ ) { cost = 0.0 ; for ( m_p = 0 ; m_p < 6 ; m_p ++ ) { cost += V
[ 6 * m_p + i ] * H [ 6 * inner + m_p ] ; } H_p [ i + 6 * inner ] = cost ; }
for ( inner = 0 ; inner < 6 ; inner ++ ) { cost = 0.0 ; for ( m_p = 0 ; m_p <
6 ; m_p ++ ) { cost += H_p [ 6 * m_p + i ] * V [ 6 * m_p + inner ] ; } idxl_p
[ i + 6 * inner ] = cost ; } for ( inner = 0 ; inner <= 4 ; inner += 2 ) {
tmp_f = _mm_loadu_pd ( & sNew [ inner ] ) ; _mm_storeu_pd ( & P_p [ inner + 6
* i ] , _mm_div_pd ( _mm_mul_pd ( tmp_f , _mm_set1_pd ( sNew [ i ] ) ) ,
_mm_set1_pd ( lambda ) ) ) ; } } for ( i = 0 ; i < 36 ; i ++ ) { cost =
idxl_p [ i ] + P_p [ i ] ; H [ i ] = cost ; H_p [ i ] = 1.4901161193847656E-8
* ( real_T ) tmp_c [ i ] + cost ; } if ( ! pfrc22cnw4 ( H_p ) ) { * exitFlag
= robotics_core_internal_NLPSolverExitFlags_HessianNotPositiveSemidefinite ;
b = obj -> ExtraArgs ; for ( i = 0 ; i < 36 ; i ++ ) { H [ i ] = b ->
WeightMatrix [ i ] ; } i = grad -> size [ 0 ] ; grad -> size [ 0 ] = b ->
ErrTemp -> size [ 0 ] ; o4pyrzarz5 ( grad , i ) ; m_p = b -> ErrTemp -> size
[ 0 ] ; for ( i = 0 ; i < m_p ; i ++ ) { grad -> data [ i ] = b -> ErrTemp ->
data [ i ] ; } for ( i = 0 ; i < 6 ; i ++ ) { cost = 0.0 ; for ( inner = 0 ;
inner < 6 ; inner ++ ) { cost += H [ 6 * inner + i ] * grad -> data [ inner ]
; } x [ i ] = cost ; } * err = e2fc0rh1xvp ( x ) ; * iter = ( real_T )
g_idx_0 + 1.0 ; exitg2 = 1 ; } else { guard2 = true ; } } } if ( guard2 ) {
if ( obj -> ConstraintsOn ) { i = B_p -> size [ 0 ] * B_p -> size [ 1 ] ; B_p
-> size [ 0 ] = obj -> ConstraintMatrix -> size [ 0 ] ; B_p -> size [ 1 ] =
obj -> ConstraintMatrix -> size [ 1 ] ; o4pyrzarz5 ( B_p , i ) ; m_p = obj ->
ConstraintMatrix -> size [ 0 ] * obj -> ConstraintMatrix -> size [ 1 ] ; for
( i = 0 ; i < m_p ; i ++ ) { B_p -> data [ i ] = obj -> ConstraintMatrix ->
data [ i ] ; } g1ccfqf002d ( B_p , xSol , L ) ; i = x_p -> size [ 0 ] ; x_p
-> size [ 0 ] = obj -> ConstraintBound -> size [ 0 ] == 1 ? L -> size [ 0 ] :
obj -> ConstraintBound -> size [ 0 ] ; pyp4acmmkn ( x_p , i ) ; nx = ( L ->
size [ 0 ] != 1 ) ; n = ( obj -> ConstraintBound -> size [ 0 ] != 1 ) ; m_p =
obj -> ConstraintBound -> size [ 0 ] == 1 ? L -> size [ 0 ] : obj ->
ConstraintBound -> size [ 0 ] ; for ( i = 0 ; i < m_p ; i ++ ) { x_p -> data
[ i ] = ( L -> data [ i * nx ] - obj -> ConstraintBound -> data [ i * n ] >
1.4901161193847656E-8 ) ; } if ( jwl4kngeul ( x_p ) ) { for ( i = 0 ; i < 6 ;
i ++ ) { xSol [ i ] = x [ i ] ; } * exitFlag =
robotics_core_internal_NLPSolverExitFlags_SearchDirectionInvalid ; b = obj ->
ExtraArgs ; for ( i = 0 ; i < 36 ; i ++ ) { H [ i ] = b -> WeightMatrix [ i ]
; } i = grad -> size [ 0 ] ; grad -> size [ 0 ] = b -> ErrTemp -> size [ 0 ]
; o4pyrzarz5 ( grad , i ) ; m_p = b -> ErrTemp -> size [ 0 ] ; for ( i = 0 ;
i < m_p ; i ++ ) { grad -> data [ i ] = b -> ErrTemp -> data [ i ] ; } for (
i = 0 ; i < 6 ; i ++ ) { cost = 0.0 ; for ( inner = 0 ; inner < 6 ; inner ++
) { cost += H [ 6 * inner + i ] * grad -> data [ inner ] ; } x [ i ] = cost ;
} * err = e2fc0rh1xvp ( x ) ; * iter = ( real_T ) g_idx_0 + 1.0 ; exitg2 = 1
; } else { guard1 = true ; } } else { guard1 = true ; } } if ( guard1 ) { for
( i = 0 ; i < 6 ; i ++ ) { x [ i ] = xSol [ i ] ; } i = grad -> size [ 0 ] ;
grad -> size [ 0 ] = alpha -> size [ 0 ] ; o4pyrzarz5 ( grad , i ) ; m_p =
alpha -> size [ 0 ] ; if ( m_p - 1 >= 0 ) { memcpy ( & grad -> data [ 0 ] , &
alpha -> data [ 0 ] , ( uint32_T ) m_p * sizeof ( real_T ) ) ; } cost =
costNew ; g_idx_0 ++ ; } } } else { * exitFlag =
robotics_core_internal_NLPSolverExitFlags_IterationLimitExceeded ; b = obj ->
ExtraArgs ; for ( i = 0 ; i < 36 ; i ++ ) { H [ i ] = b -> WeightMatrix [ i ]
; } i = grad -> size [ 0 ] ; grad -> size [ 0 ] = b -> ErrTemp -> size [ 0 ]
; o4pyrzarz5 ( grad , i ) ; m_p = b -> ErrTemp -> size [ 0 ] ; for ( i = 0 ;
i < m_p ; i ++ ) { grad -> data [ i ] = b -> ErrTemp -> data [ i ] ; } for (
i = 0 ; i < 6 ; i ++ ) { cost = 0.0 ; for ( inner = 0 ; inner < 6 ; inner ++
) { cost += H [ 6 * inner + i ] * grad -> data [ inner ] ; } x [ i ] = cost ;
} * err = e2fc0rh1xvp ( x ) ; * iter = obj -> MaxNumIterationInternal ;
exitg2 = 1 ; } } while ( exitg2 == 0 ) ; jvu10fuanp ( & tmp_d ) ; jvu10fuanp
( & tmp_l ) ; jvu10fuanp ( & tmp_n ) ; jvu10fuanp ( & tmp_b ) ; lvpphjmwx4 (
& tmp_k ) ; jvu10fuanp ( & alpha_p ) ; jvu10fuanp ( & A_p ) ; lvpphjmwx4 ( &
tmp_m ) ; lvpphjmwx4 ( & tmp_i ) ; lvpphjmwx4 ( & tmp_e ) ; lvpphjmwx4 ( &
tmp_p ) ; lvpphjmwx4 ( & tmp ) ; kkefezl0wy ( & x_p ) ; jvu10fuanp ( & y ) ;
jvu10fuanp ( & L ) ; jvu10fuanp ( & B_p ) ; jvu10fuanp ( & alpha ) ;
jvu10fuanp ( & A ) ; kkefezl0wy ( & activeSet ) ; jvu10fuanp ( & grad ) ;
jvu10fuanp ( & a__2 ) ; } static void j4po4dx30s ( const real_T varargin_1 [
2 ] , hnyeda4wkh * r ) { real_T xi [ 257 ] ; real_T b_r ; real_T d_u ; real_T
x ; int32_T b_k ; int32_T d ; int32_T i ; uint32_T u32 [ 2 ] ; static const
real_T tmp [ 257 ] = { 1.0 , 0.977101701267673 , 0.959879091800108 ,
0.9451989534423 , 0.932060075959231 , 0.919991505039348 , 0.908726440052131 ,
0.898095921898344 , 0.887984660755834 , 0.878309655808918 , 0.869008688036857
, 0.860033621196332 , 0.851346258458678 , 0.842915653112205 ,
0.834716292986884 , 0.826726833946222 , 0.818929191603703 , 0.811307874312656
, 0.803849483170964 , 0.796542330422959 , 0.789376143566025 ,
0.782341832654803 , 0.775431304981187 , 0.768637315798486 , 0.761953346836795
, 0.755373506507096 , 0.748892447219157 , 0.742505296340151 ,
0.736207598126863 , 0.729995264561476 , 0.72386453346863 , 0.717811932630722
, 0.711834248878248 , 0.705928501332754 , 0.700091918136512 ,
0.694321916126117 , 0.688616083004672 , 0.682972161644995 , 0.677388036218774
, 0.671861719897082 , 0.66639134390875 , 0.660975147776663 ,
0.655611470579697 , 0.650298743110817 , 0.645035480820822 , 0.639820277453057
, 0.634651799287624 , 0.629528779924837 , 0.624450015547027 ,
0.619414360605834 , 0.614420723888914 , 0.609468064925773 , 0.604555390697468
, 0.599681752619125 , 0.594846243767987 , 0.590047996332826 ,
0.585286179263371 , 0.580559996100791 , 0.575868682972354 , 0.571211506735253
, 0.566587763256165 , 0.561996775814525 , 0.557437893618766 ,
0.552910490425833 , 0.548413963255266 , 0.543947731190026 , 0.539511234256952
, 0.535103932380458 , 0.530725304403662 , 0.526374847171684 ,
0.522052074672322 , 0.517756517229756 , 0.513487720747327 , 0.509245245995748
, 0.505028667943468 , 0.500837575126149 , 0.49667156905249 ,
0.492530263643869 , 0.488413284705458 , 0.484320269426683 , 0.480250865909047
, 0.476204732719506 , 0.47218153846773 , 0.468180961405694 ,
0.464202689048174 , 0.460246417812843 , 0.456311852678716 , 0.452398706861849
, 0.448506701507203 , 0.444635565395739 , 0.440785034665804 ,
0.436954852547985 , 0.433144769112652 , 0.429354541029442 , 0.425583931338022
, 0.421832709229496 , 0.418100649837848 , 0.414387534040891 ,
0.410693148270188 , 0.407017284329473 , 0.403359739221114 , 0.399720314980197
, 0.396098818515832 , 0.392495061459315 , 0.388908860018789 ,
0.385340034840077 , 0.381788410873393 , 0.378253817245619 , 0.374736087137891
, 0.371235057668239 , 0.367750569779032 , 0.364282468129004 ,
0.360830600989648 , 0.357394820145781 , 0.353974980800077 , 0.350570941481406
, 0.347182563956794 , 0.343809713146851 , 0.340452257044522 ,
0.337110066637006 , 0.333783015830718 , 0.330470981379163 , 0.327173842813601
, 0.323891482376391 , 0.320623784956905 , 0.317370638029914 ,
0.314131931596337 , 0.310907558126286 , 0.307697412504292 , 0.30450139197665
, 0.301319396100803 , 0.298151326696685 , 0.294997087799962 ,
0.291856585617095 , 0.288729728482183 , 0.285616426815502 , 0.282516593083708
, 0.279430141761638 , 0.276356989295668 , 0.273297054068577 ,
0.270250256365875 , 0.267216518343561 , 0.264195763997261 , 0.261187919132721
, 0.258192911337619 , 0.255210669954662 , 0.252241126055942 ,
0.249284212418529 , 0.246339863501264 , 0.24340801542275 , 0.240488605940501
, 0.237581574431238 , 0.23468686187233 , 0.231804410824339 ,
0.228934165414681 , 0.226076071322381 , 0.223230075763918 , 0.220396127480152
, 0.217574176724331 , 0.214764175251174 , 0.211966076307031 ,
0.209179834621125 , 0.206405406397881 , 0.203642749310335 , 0.200891822494657
, 0.198152586545776 , 0.195425003514135 , 0.192709036903589 ,
0.190004651670465 , 0.187311814223801 , 0.1846304924268 , 0.181960655599523 ,
0.179302274522848 , 0.176655321443735 , 0.174019770081839 , 0.171395595637506
, 0.168782774801212 , 0.166181285764482 , 0.163591108232366 ,
0.161012223437511 , 0.158444614155925 , 0.15588826472448 , 0.153343161060263
, 0.150809290681846 , 0.148286642732575 , 0.145775208005994 ,
0.143274978973514 , 0.140785949814445 , 0.138308116448551 , 0.135841476571254
, 0.133386029691669 , 0.130941777173644 , 0.12850872228 , 0.126086870220186 ,
0.123676228201597 , 0.12127680548479 , 0.11888861344291 , 0.116511665625611 ,
0.114145977827839 , 0.111791568163838 , 0.109448457146812 , 0.107116667774684
, 0.104796225622487 , 0.102487158941935 , 0.10018949876881 ,
0.0979032790388625 , 0.095628536713009 , 0.093365311912691 ,
0.0911136480663738 , 0.0888735920682759 , 0.0866451944505581 ,
0.0844285095703535 , 0.082223595813203 , 0.0800305158146631 ,
0.0778493367020961 , 0.0756801303589272 , 0.0735229737139814 ,
0.0713779490588905 , 0.0692451443970068 , 0.0671246538277886 ,
0.065016577971243 , 0.0629210244377582 , 0.06083810834954 ,
0.0587679529209339 , 0.0567106901062031 , 0.0546664613248891 ,
0.0526354182767924 , 0.0506177238609479 , 0.0486135532158687 ,
0.0466230949019305 , 0.0446465522512946 , 0.0426841449164746 ,
0.0407361106559411 , 0.0388027074045262 , 0.0368842156885674 ,
0.0349809414617162 , 0.0330932194585786 , 0.0312214171919203 ,
0.0293659397581334 , 0.0275272356696031 , 0.0257058040085489 ,
0.0239022033057959 , 0.0221170627073089 , 0.0203510962300445 ,
0.0186051212757247 , 0.0168800831525432 , 0.0151770883079353 ,
0.0134974506017399 , 0.0118427578579079 , 0.0102149714397015 ,
0.00861658276939875 , 0.00705087547137324 , 0.00552240329925101 ,
0.00403797259336304 , 0.00260907274610216 , 0.0012602859304986 ,
0.000477467764609386 } ; const real_T * fitab ; int32_T exitg1 ; int32_T
exitg2 ; b_k = r -> size [ 0 ] ; r -> size [ 0 ] = ( int32_T ) varargin_1 [ 0
] ; o4pyrzarz5 ( r , b_k ) ; d = ( int32_T ) varargin_1 [ 0 ] - 1 ; if ( (
int32_T ) varargin_1 [ 0 ] - 1 >= 0 ) { xi [ 0 ] = 0.0 ; xi [ 1 ] =
0.215241895984875 ; xi [ 2 ] = 0.286174591792068 ; xi [ 3 ] =
0.335737519214422 ; xi [ 4 ] = 0.375121332878378 ; xi [ 5 ] =
0.408389134611989 ; xi [ 6 ] = 0.43751840220787 ; xi [ 7 ] = 0.46363433679088
; xi [ 8 ] = 0.487443966139235 ; xi [ 9 ] = 0.50942332960209 ; xi [ 10 ] =
0.529909720661557 ; xi [ 11 ] = 0.549151702327164 ; xi [ 12 ] =
0.567338257053817 ; xi [ 13 ] = 0.584616766106378 ; xi [ 14 ] =
0.601104617755991 ; xi [ 15 ] = 0.61689699000775 ; xi [ 16 ] =
0.63207223638606 ; xi [ 17 ] = 0.646695714894993 ; xi [ 18 ] =
0.660822574244419 ; xi [ 19 ] = 0.674499822837293 ; xi [ 20 ] =
0.687767892795788 ; xi [ 21 ] = 0.700661841106814 ; xi [ 22 ] =
0.713212285190975 ; xi [ 23 ] = 0.725446140909999 ; xi [ 24 ] =
0.737387211434295 ; xi [ 25 ] = 0.749056662017815 ; xi [ 26 ] =
0.760473406430107 ; xi [ 27 ] = 0.771654424224568 ; xi [ 28 ] =
0.782615023307232 ; xi [ 29 ] = 0.793369058840623 ; xi [ 30 ] =
0.80392911698997 ; xi [ 31 ] = 0.814306670135215 ; xi [ 32 ] =
0.824512208752291 ; xi [ 33 ] = 0.834555354086381 ; xi [ 34 ] =
0.844444954909153 ; xi [ 35 ] = 0.854189171008163 ; xi [ 36 ] =
0.863795545553308 ; xi [ 37 ] = 0.87327106808886 ; xi [ 38 ] =
0.882622229585165 ; xi [ 39 ] = 0.891855070732941 ; xi [ 40 ] =
0.900975224461221 ; xi [ 41 ] = 0.909987953496718 ; xi [ 42 ] =
0.91889818364959 ; xi [ 43 ] = 0.927710533401999 ; xi [ 44 ] =
0.936429340286575 ; xi [ 45 ] = 0.945058684468165 ; xi [ 46 ] =
0.953602409881086 ; xi [ 47 ] = 0.96206414322304 ; xi [ 48 ] =
0.970447311064224 ; xi [ 49 ] = 0.978755155294224 ; xi [ 50 ] =
0.986990747099062 ; xi [ 51 ] = 0.99515699963509 ; xi [ 52 ] =
1.00325667954467 ; xi [ 53 ] = 1.01129241744 ; xi [ 54 ] = 1.01926671746548 ;
xi [ 55 ] = 1.02718196603564 ; xi [ 56 ] = 1.03504043983344 ; xi [ 57 ] =
1.04284431314415 ; xi [ 58 ] = 1.05059566459093 ; xi [ 59 ] =
1.05829648333067 ; xi [ 60 ] = 1.06594867476212 ; xi [ 61 ] =
1.07355406579244 ; xi [ 62 ] = 1.0811144097034 ; xi [ 63 ] = 1.08863139065398
; xi [ 64 ] = 1.09610662785202 ; xi [ 65 ] = 1.10354167942464 ; xi [ 66 ] =
1.11093804601357 ; xi [ 67 ] = 1.11829717411934 ; xi [ 68 ] =
1.12562045921553 ; xi [ 69 ] = 1.13290924865253 ; xi [ 70 ] =
1.14016484436815 ; xi [ 71 ] = 1.14738850542085 ; xi [ 72 ] =
1.15458145035993 ; xi [ 73 ] = 1.16174485944561 ; xi [ 74 ] =
1.16887987673083 ; xi [ 75 ] = 1.17598761201545 ; xi [ 76 ] =
1.18306914268269 ; xi [ 77 ] = 1.19012551542669 ; xi [ 78 ] =
1.19715774787944 ; xi [ 79 ] = 1.20416683014438 ; xi [ 80 ] = 1.2111537262437
; xi [ 81 ] = 1.21811937548548 ; xi [ 82 ] = 1.22506469375653 ; xi [ 83 ] =
1.23199057474614 ; xi [ 84 ] = 1.23889789110569 ; xi [ 85 ] =
1.24578749554863 ; xi [ 86 ] = 1.2526602218949 ; xi [ 87 ] = 1.25951688606371
; xi [ 88 ] = 1.26635828701823 ; xi [ 89 ] = 1.27318520766536 ; xi [ 90 ] =
1.27999841571382 ; xi [ 91 ] = 1.28679866449324 ; xi [ 92 ] =
1.29358669373695 ; xi [ 93 ] = 1.30036323033084 ; xi [ 94 ] =
1.30712898903073 ; xi [ 95 ] = 1.31388467315022 ; xi [ 96 ] =
1.32063097522106 ; xi [ 97 ] = 1.32736857762793 ; xi [ 98 ] =
1.33409815321936 ; xi [ 99 ] = 1.3408203658964 ; xi [ 100 ] =
1.34753587118059 ; xi [ 101 ] = 1.35424531676263 ; xi [ 102 ] =
1.36094934303328 ; xi [ 103 ] = 1.36764858359748 ; xi [ 104 ] =
1.37434366577317 ; xi [ 105 ] = 1.38103521107586 ; xi [ 106 ] =
1.38772383568998 ; xi [ 107 ] = 1.39441015092814 ; xi [ 108 ] =
1.40109476367925 ; xi [ 109 ] = 1.4077782768464 ; xi [ 110 ] =
1.41446128977547 ; xi [ 111 ] = 1.42114439867531 ; xi [ 112 ] =
1.42782819703026 ; xi [ 113 ] = 1.43451327600589 ; xi [ 114 ] =
1.44120022484872 ; xi [ 115 ] = 1.44788963128058 ; xi [ 116 ] =
1.45458208188841 ; xi [ 117 ] = 1.46127816251028 ; xi [ 118 ] =
1.46797845861808 ; xi [ 119 ] = 1.47468355569786 ; xi [ 120 ] =
1.48139403962819 ; xi [ 121 ] = 1.48811049705745 ; xi [ 122 ] =
1.49483351578049 ; xi [ 123 ] = 1.50156368511546 ; xi [ 124 ] =
1.50830159628131 ; xi [ 125 ] = 1.51504784277671 ; xi [ 126 ] =
1.521803020761 ; xi [ 127 ] = 1.52856772943771 ; xi [ 128 ] =
1.53534257144151 ; xi [ 129 ] = 1.542128153229 ; xi [ 130 ] =
1.54892508547417 ; xi [ 131 ] = 1.55573398346918 ; xi [ 132 ] =
1.56255546753104 ; xi [ 133 ] = 1.56939016341512 ; xi [ 134 ] =
1.57623870273591 ; xi [ 135 ] = 1.58310172339603 ; xi [ 136 ] =
1.58997987002419 ; xi [ 137 ] = 1.59687379442279 ; xi [ 138 ] =
1.60378415602609 ; xi [ 139 ] = 1.61071162236983 ; xi [ 140 ] =
1.61765686957301 ; xi [ 141 ] = 1.62462058283303 ; xi [ 142 ] =
1.63160345693487 ; xi [ 143 ] = 1.63860619677555 ; xi [ 144 ] =
1.64562951790478 ; xi [ 145 ] = 1.65267414708306 ; xi [ 146 ] =
1.65974082285818 ; xi [ 147 ] = 1.66683029616166 ; xi [ 148 ] =
1.67394333092612 ; xi [ 149 ] = 1.68108070472517 ; xi [ 150 ] =
1.68824320943719 ; xi [ 151 ] = 1.69543165193456 ; xi [ 152 ] =
1.70264685479992 ; xi [ 153 ] = 1.7098896570713 ; xi [ 154 ] =
1.71716091501782 ; xi [ 155 ] = 1.72446150294804 ; xi [ 156 ] =
1.73179231405296 ; xi [ 157 ] = 1.73915426128591 ; xi [ 158 ] =
1.74654827828172 ; xi [ 159 ] = 1.75397532031767 ; xi [ 160 ] =
1.76143636531891 ; xi [ 161 ] = 1.76893241491127 ; xi [ 162 ] =
1.77646449552452 ; xi [ 163 ] = 1.78403365954944 ; xi [ 164 ] =
1.79164098655216 ; xi [ 165 ] = 1.79928758454972 ; xi [ 166 ] =
1.80697459135082 ; xi [ 167 ] = 1.81470317596628 ; xi [ 168 ] =
1.82247454009388 ; xi [ 169 ] = 1.83028991968276 ; xi [ 170 ] =
1.83815058658281 ; xi [ 171 ] = 1.84605785028518 ; xi [ 172 ] =
1.8540130597602 ; xi [ 173 ] = 1.86201760539967 ; xi [ 174 ] =
1.87007292107127 ; xi [ 175 ] = 1.878180486293 ; xi [ 176 ] =
1.88634182853678 ; xi [ 177 ] = 1.8945585256707 ; xi [ 178 ] =
1.90283220855043 ; xi [ 179 ] = 1.91116456377125 ; xi [ 180 ] =
1.91955733659319 ; xi [ 181 ] = 1.92801233405266 ; xi [ 182 ] =
1.93653142827569 ; xi [ 183 ] = 1.94511656000868 ; xi [ 184 ] =
1.95376974238465 ; xi [ 185 ] = 1.96249306494436 ; xi [ 186 ] =
1.97128869793366 ; xi [ 187 ] = 1.98015889690048 ; xi [ 188 ] =
1.98910600761744 ; xi [ 189 ] = 1.99813247135842 ; xi [ 190 ] =
2.00724083056053 ; xi [ 191 ] = 2.0164337349062 ; xi [ 192 ] =
2.02571394786385 ; xi [ 193 ] = 2.03508435372962 ; xi [ 194 ] =
2.04454796521753 ; xi [ 195 ] = 2.05410793165065 ; xi [ 196 ] =
2.06376754781173 ; xi [ 197 ] = 2.07353026351874 ; xi [ 198 ] =
2.0833996939983 ; xi [ 199 ] = 2.09337963113879 ; xi [ 200 ] =
2.10347405571488 ; xi [ 201 ] = 2.11368715068665 ; xi [ 202 ] =
2.12402331568952 ; xi [ 203 ] = 2.13448718284602 ; xi [ 204 ] =
2.14508363404789 ; xi [ 205 ] = 2.15581781987674 ; xi [ 206 ] =
2.16669518035431 ; xi [ 207 ] = 2.17772146774029 ; xi [ 208 ] =
2.18890277162636 ; xi [ 209 ] = 2.20024554661128 ; xi [ 210 ] =
2.21175664288416 ; xi [ 211 ] = 2.22344334009251 ; xi [ 212 ] =
2.23531338492992 ; xi [ 213 ] = 2.24737503294739 ; xi [ 214 ] =
2.25963709517379 ; xi [ 215 ] = 2.27210899022838 ; xi [ 216 ] =
2.28480080272449 ; xi [ 217 ] = 2.29772334890286 ; xi [ 218 ] =
2.31088825060137 ; xi [ 219 ] = 2.32430801887113 ; xi [ 220 ] =
2.33799614879653 ; xi [ 221 ] = 2.35196722737914 ; xi [ 222 ] =
2.36623705671729 ; xi [ 223 ] = 2.38082279517208 ; xi [ 224 ] =
2.39574311978193 ; xi [ 225 ] = 2.41101841390112 ; xi [ 226 ] =
2.42667098493715 ; xi [ 227 ] = 2.44272531820036 ; xi [ 228 ] =
2.4592083743347 ; xi [ 229 ] = 2.47614993967052 ; xi [ 230 ] =
2.49358304127105 ; xi [ 231 ] = 2.51154444162669 ; xi [ 232 ] =
2.53007523215985 ; xi [ 233 ] = 2.54922155032478 ; xi [ 234 ] =
2.56903545268184 ; xi [ 235 ] = 2.58957598670829 ; xi [ 236 ] =
2.61091051848882 ; xi [ 237 ] = 2.63311639363158 ; xi [ 238 ] =
2.65628303757674 ; xi [ 239 ] = 2.68051464328574 ; xi [ 240 ] =
2.70593365612306 ; xi [ 241 ] = 2.73268535904401 ; xi [ 242 ] =
2.76094400527999 ; xi [ 243 ] = 2.79092117400193 ; xi [ 244 ] =
2.82287739682644 ; xi [ 245 ] = 2.85713873087322 ; xi [ 246 ] =
2.89412105361341 ; xi [ 247 ] = 2.93436686720889 ; xi [ 248 ] =
2.97860327988184 ; xi [ 249 ] = 3.02783779176959 ; xi [ 250 ] =
3.08352613200214 ; xi [ 251 ] = 3.147889289518 ; xi [ 252 ] = 3.2245750520478
; xi [ 253 ] = 3.32024473383983 ; xi [ 254 ] = 3.44927829856143 ; xi [ 255 ]
= 3.65415288536101 ; xi [ 256 ] = 3.91075795952492 ; fitab = & tmp [ 0 ] ; }
for ( b_k = 0 ; b_k <= d ; b_k ++ ) { do { exitg1 = 0 ; mmuhjsscra2 ( rtDW .
dky15kevds , u32 ) ; i = ( int32_T ) ( ( u32 [ 1 ] >> 24U ) + 1U ) ; b_r = (
( ( real_T ) ( u32 [ 0 ] >> 3U ) * 1.6777216E+7 + ( real_T ) ( ( int32_T )
u32 [ 1 ] & 16777215 ) ) * 2.2204460492503131E-16 - 1.0 ) * xi [ i ] ; if (
muDoubleScalarAbs ( b_r ) <= xi [ i - 1 ] ) { exitg1 = 1 ; } else if ( i <
256 ) { do { exitg2 = 0 ; mmuhjsscra2 ( rtDW . dky15kevds , u32 ) ; x = ( (
real_T ) ( u32 [ 0 ] >> 5U ) * 6.7108864E+7 + ( real_T ) ( u32 [ 1 ] >> 6U )
) * 1.1102230246251565E-16 ; if ( x == 0.0 ) { if ( ! hqcghxws2j ( rtDW .
dky15kevds ) ) { rtDW . dky15kevds [ 0 ] = 5489U ; rtDW . dky15kevds [ 624 ]
= 624U ; } } else { exitg2 = 1 ; } } while ( exitg2 == 0 ) ; if ( ( fitab [ i
- 1 ] - fitab [ i ] ) * x + fitab [ i ] < muDoubleScalarExp ( - 0.5 * b_r *
b_r ) ) { exitg1 = 1 ; } } else { do { do { exitg2 = 0 ; mmuhjsscra2 ( rtDW .
dky15kevds , u32 ) ; x = ( ( real_T ) ( u32 [ 0 ] >> 5U ) * 6.7108864E+7 + (
real_T ) ( u32 [ 1 ] >> 6U ) ) * 1.1102230246251565E-16 ; if ( x == 0.0 ) {
if ( ! hqcghxws2j ( rtDW . dky15kevds ) ) { rtDW . dky15kevds [ 0 ] = 5489U ;
rtDW . dky15kevds [ 624 ] = 624U ; } } else { exitg2 = 1 ; } } while ( exitg2
== 0 ) ; x = muDoubleScalarLog ( x ) * 0.273661237329758 ; do { exitg2 = 0 ;
mmuhjsscra2 ( rtDW . dky15kevds , u32 ) ; d_u = ( ( real_T ) ( u32 [ 0 ] >>
5U ) * 6.7108864E+7 + ( real_T ) ( u32 [ 1 ] >> 6U ) ) *
1.1102230246251565E-16 ; if ( d_u == 0.0 ) { if ( ! hqcghxws2j ( rtDW .
dky15kevds ) ) { rtDW . dky15kevds [ 0 ] = 5489U ; rtDW . dky15kevds [ 624 ]
= 624U ; } } else { exitg2 = 1 ; } } while ( exitg2 == 0 ) ; } while ( ! ( -
2.0 * muDoubleScalarLog ( d_u ) > x * x ) ) ; if ( b_r < 0.0 ) { b_r = x -
3.65415288536101 ; } else { b_r = 3.65415288536101 - x ; } exitg1 = 1 ; } }
while ( exitg1 == 0 ) ; r -> data [ b_k ] = b_r ; } } static void e0vmbp53ui
( hnyeda4wkh * in1 , const hnyeda4wkh * in2 ) { hnyeda4wkh * in1_p ; int32_T
i ; int32_T loop_ub ; int32_T stride_0_0 ; int32_T stride_1_0 ; jolvb3jiwj (
& in1_p , 1 ) ; i = in1_p -> size [ 0 ] ; in1_p -> size [ 0 ] = in2 -> size [
0 ] == 1 ? in1 -> size [ 0 ] : in2 -> size [ 0 ] ; o4pyrzarz5 ( in1_p , i ) ;
stride_0_0 = ( in1 -> size [ 0 ] != 1 ) ; stride_1_0 = ( in2 -> size [ 0 ] !=
1 ) ; loop_ub = in2 -> size [ 0 ] == 1 ? in1 -> size [ 0 ] : in2 -> size [ 0
] ; for ( i = 0 ; i < loop_ub ; i ++ ) { in1_p -> data [ i ] = in1 -> data [
i * stride_0_0 ] - in2 -> data [ i * stride_1_0 ] ; } i = in1 -> size [ 0 ] ;
in1 -> size [ 0 ] = in1_p -> size [ 0 ] ; o4pyrzarz5 ( in1 , i ) ; loop_ub =
in1_p -> size [ 0 ] ; if ( loop_ub - 1 >= 0 ) { memcpy ( & in1 -> data [ 0 ]
, & in1_p -> data [ 0 ] , ( uint32_T ) loop_ub * sizeof ( real_T ) ) ; }
jvu10fuanp ( & in1_p ) ; } static void fg5a5qqgee ( hnyeda4wkh * in1 , const
hnyeda4wkh * in2 ) { hnyeda4wkh * in2_p ; int32_T i ; int32_T loop_ub ;
int32_T stride_0_0 ; int32_T stride_1_0 ; jolvb3jiwj ( & in2_p , 1 ) ; i =
in2_p -> size [ 0 ] ; in2_p -> size [ 0 ] = in1 -> size [ 0 ] == 1 ? in2 ->
size [ 0 ] : in1 -> size [ 0 ] ; o4pyrzarz5 ( in2_p , i ) ; stride_0_0 = (
in2 -> size [ 0 ] != 1 ) ; stride_1_0 = ( in1 -> size [ 0 ] != 1 ) ; loop_ub
= in1 -> size [ 0 ] == 1 ? in2 -> size [ 0 ] : in1 -> size [ 0 ] ; for ( i =
0 ; i < loop_ub ; i ++ ) { in2_p -> data [ i ] = in2 -> data [ i * stride_0_0
] + in1 -> data [ i * stride_1_0 ] ; } i = in1 -> size [ 0 ] ; in1 -> size [
0 ] = in2_p -> size [ 0 ] ; o4pyrzarz5 ( in1 , i ) ; loop_ub = in2_p -> size
[ 0 ] ; if ( loop_ub - 1 >= 0 ) { memcpy ( & in1 -> data [ 0 ] , & in2_p ->
data [ 0 ] , ( uint32_T ) loop_ub * sizeof ( real_T ) ) ; } jvu10fuanp ( &
in2_p ) ; } static void op4fr1mwv4z ( real_T varargin_1 , hnyeda4wkh * r ) {
real_T b_r ; int32_T b_k ; int32_T d ; int32_T exitg1 ; uint32_T b_u [ 2 ] ;
b_k = r -> size [ 0 ] ; r -> size [ 0 ] = ( int32_T ) varargin_1 ; o4pyrzarz5
( r , b_k ) ; d = ( int32_T ) varargin_1 - 1 ; for ( b_k = 0 ; b_k <= d ; b_k
++ ) { do { exitg1 = 0 ; mmuhjsscra2 ( rtDW . dky15kevds , b_u ) ; b_r = ( (
real_T ) ( b_u [ 0 ] >> 5U ) * 6.7108864E+7 + ( real_T ) ( b_u [ 1 ] >> 6U )
) * 1.1102230246251565E-16 ; if ( b_r == 0.0 ) { if ( ! hqcghxws2j ( rtDW .
dky15kevds ) ) { rtDW . dky15kevds [ 0 ] = 5489U ; rtDW . dky15kevds [ 624 ]
= 624U ; } } else { exitg1 = 1 ; } } while ( exitg1 == 0 ) ; r -> data [ b_k
] = b_r ; } } static void epjk1yr5ig ( hnyeda4wkh * in1 , const hnyeda4wkh *
in2 , const hnyeda4wkh * in3 ) { hnyeda4wkh * in2_p ; int32_T i ; int32_T
loop_ub ; int32_T stride_0_0 ; int32_T stride_1_0 ; int32_T stride_2_0 ;
int32_T stride_3_0 ; jolvb3jiwj ( & in2_p , 1 ) ; i = in2_p -> size [ 0 ] ;
in2_p -> size [ 0 ] = ( ( in2 -> size [ 0 ] == 1 ? in1 -> size [ 0 ] : in2 ->
size [ 0 ] ) == 1 ? in3 -> size [ 0 ] : in2 -> size [ 0 ] == 1 ? in1 -> size
[ 0 ] : in2 -> size [ 0 ] ) == 1 ? in2 -> size [ 0 ] : ( in2 -> size [ 0 ] ==
1 ? in1 -> size [ 0 ] : in2 -> size [ 0 ] ) == 1 ? in3 -> size [ 0 ] : in2 ->
size [ 0 ] == 1 ? in1 -> size [ 0 ] : in2 -> size [ 0 ] ; o4pyrzarz5 ( in2_p
, i ) ; stride_0_0 = ( in2 -> size [ 0 ] != 1 ) ; stride_1_0 = ( in3 -> size
[ 0 ] != 1 ) ; stride_2_0 = ( in1 -> size [ 0 ] != 1 ) ; stride_3_0 = ( in2
-> size [ 0 ] != 1 ) ; loop_ub = ( ( in2 -> size [ 0 ] == 1 ? in1 -> size [ 0
] : in2 -> size [ 0 ] ) == 1 ? in3 -> size [ 0 ] : in2 -> size [ 0 ] == 1 ?
in1 -> size [ 0 ] : in2 -> size [ 0 ] ) == 1 ? in2 -> size [ 0 ] : ( in2 ->
size [ 0 ] == 1 ? in1 -> size [ 0 ] : in2 -> size [ 0 ] ) == 1 ? in3 -> size
[ 0 ] : in2 -> size [ 0 ] == 1 ? in1 -> size [ 0 ] : in2 -> size [ 0 ] ; for
( i = 0 ; i < loop_ub ; i ++ ) { in2_p -> data [ i ] = ( in1 -> data [ i *
stride_2_0 ] - in2 -> data [ i * stride_3_0 ] ) * in3 -> data [ i *
stride_1_0 ] + in2 -> data [ i * stride_0_0 ] ; } i = in1 -> size [ 0 ] ; in1
-> size [ 0 ] = in2_p -> size [ 0 ] ; o4pyrzarz5 ( in1 , i ) ; loop_ub =
in2_p -> size [ 0 ] ; if ( loop_ub - 1 >= 0 ) { memcpy ( & in1 -> data [ 0 ]
, & in2_p -> data [ 0 ] , ( uint32_T ) loop_ub * sizeof ( real_T ) ) ; }
jvu10fuanp ( & in2_p ) ; } static void mjomgs30rz ( oy2a1akvcj * obj , const
real_T seed [ 6 ] , real_T xSol [ 6 ] , real_T * solutionInfo_Iterations ,
real_T * solutionInfo_RRAttempts , real_T * solutionInfo_Error , real_T *
solutionInfo_ExitFlag , char_T solutionInfo_Status_data [ ] , int32_T
solutionInfo_Status_size [ 2 ] ) { __m128d tmp ; __m128d tmp_e ; __m128d
tmp_p ; fprravcitl * args ; hnyeda4wkh * lb ; hnyeda4wkh * newseed ;
hnyeda4wkh * rn ; hnyeda4wkh * ub ; i2qqrhl1oe * b ; i5s4hgzi5z * obj_p ;
orkdduvnogx * obj_e ; real_T c_xSol [ 6 ] ; real_T ub_p [ 2 ] ; real_T err ;
real_T iter ; real_T lb_p ; real_T tol ; ehzicop4dv exitFlag ; ehzicop4dv
exitFlagPrev ; int32_T c ; int32_T i ; int32_T loop_ub ; int32_T nx ; int32_T
scalarLB ; int32_T vectorUB ; boolean_T y ; static const char_T tmp_i [ 14 ]
= { 'b' , 'e' , 's' , 't' , ' ' , 'a' , 'v' , 'a' , 'i' , 'l' , 'a' , 'b' ,
'l' , 'e' } ; static const char_T tmp_m [ 7 ] = { 's' , 'u' , 'c' , 'c' , 'e'
, 's' , 's' } ; boolean_T exitg1 ; boolean_T exitg2 ; boolean_T guard1 =
false ; boolean_T guard2 = false ; boolean_T guard3 = false ; obj ->
MaxNumIterationInternal = obj -> MaxNumIteration ; obj -> MaxTimeInternal =
obj -> MaxTime ; for ( i = 0 ; i < 6 ; i ++ ) { obj -> SeedInternal [ i ] =
seed [ i ] ; } tol = obj -> SolutionTolerance ; ffbryqludb ( & obj -> TimeObj
. StartTime . tv_sec , & obj -> TimeObj . StartTime . tv_nsec ) ; ed4opnbslm
( obj , xSol , & exitFlag , & err , & iter ) ; * solutionInfo_RRAttempts =
0.0 ; * solutionInfo_Iterations = iter ; * solutionInfo_Error = err ;
exitFlagPrev = exitFlag ; jolvb3jiwj ( & newseed , 1 ) ; jolvb3jiwj ( & ub ,
1 ) ; jolvb3jiwj ( & lb , 1 ) ; jolvb3jiwj ( & rn , 1 ) ; bob53arkio ( & b ,
1 ) ; exitg1 = false ; while ( ( ! exitg1 ) && ( obj -> RandomRestart && (
err > tol ) ) ) { obj -> MaxNumIterationInternal -= iter ; err = eh4ajh14pa (
obj -> TimeObj . StartTime . tv_sec , obj -> TimeObj . StartTime . tv_nsec )
; obj -> MaxTimeInternal = obj -> MaxTime - err ; if ( obj ->
MaxNumIterationInternal <= 0.0 ) { exitFlag =
robotics_core_internal_NLPSolverExitFlags_IterationLimitExceeded ; } if ( (
exitFlag == robotics_core_internal_NLPSolverExitFlags_IterationLimitExceeded
) || ( exitFlag ==
robotics_core_internal_NLPSolverExitFlags_TimeLimitExceeded ) ) {
exitFlagPrev = exitFlag ; exitg1 = true ; } else { args = obj -> ExtraArgs ;
obj_p = args -> Robot ; loop_ub = newseed -> size [ 0 ] ; newseed -> size [ 0
] = ( int32_T ) obj_p -> PositionNumber ; o4pyrzarz5 ( newseed , loop_ub ) ;
loop_ub = ( int32_T ) obj_p -> PositionNumber ; if ( loop_ub - 1 >= 0 ) {
memset ( & newseed -> data [ 0 ] , 0 , ( uint32_T ) loop_ub * sizeof ( real_T
) ) ; } err = obj_p -> NumBodies ; c = ( int32_T ) err - 1 ; for ( i = 0 ; i
<= c ; i ++ ) { err = obj_p -> PositionDoFMap [ i ] ; iter = obj_p ->
PositionDoFMap [ i + 7 ] ; if ( err <= iter ) { obj_e = obj_p -> Bodies [ i ]
-> JointInternal ; if ( ( int32_T ) obj_e -> PositionNumber == 0 ) { loop_ub
= ub -> size [ 0 ] ; ub -> size [ 0 ] = 1 ; o4pyrzarz5 ( ub , loop_ub ) ; ub
-> data [ 0 ] = ( rtNaN ) ; } else { loop_ub = ub -> size [ 0 ] ; ub -> size
[ 0 ] = obj_e -> PositionLimitsInternal -> size [ 0 ] ; o4pyrzarz5 ( ub ,
loop_ub ) ; loop_ub = obj_e -> PositionLimitsInternal -> size [ 0 ] ; for (
nx = 0 ; nx < loop_ub ; nx ++ ) { ub -> data [ nx ] = obj_e ->
PositionLimitsInternal -> data [ nx + obj_e -> PositionLimitsInternal -> size
[ 0 ] ] ; } loop_ub = lb -> size [ 0 ] ; lb -> size [ 0 ] = obj_e ->
PositionLimitsInternal -> size [ 0 ] ; o4pyrzarz5 ( lb , loop_ub ) ; loop_ub
= obj_e -> PositionLimitsInternal -> size [ 0 ] ; for ( nx = 0 ; nx < loop_ub
; nx ++ ) { lb -> data [ nx ] = obj_e -> PositionLimitsInternal -> data [ nx
] ; } loop_ub = b -> size [ 0 ] ; b -> size [ 0 ] = lb -> size [ 0 ] ;
pyp4acmmkn ( b , loop_ub ) ; loop_ub = lb -> size [ 0 ] ; for ( nx = 0 ; nx <
loop_ub ; nx ++ ) { lb_p = lb -> data [ nx ] ; b -> data [ nx ] = ( ( !
muDoubleScalarIsInf ( lb_p ) ) && ( ! muDoubleScalarIsNaN ( lb_p ) ) ) ; } y
= true ; loop_ub = 0 ; exitg2 = false ; while ( ( ! exitg2 ) && ( loop_ub + 1
<= b -> size [ 0 ] ) ) { if ( ! b -> data [ loop_ub ] ) { y = false ; exitg2
= true ; } else { loop_ub ++ ; } } guard1 = false ; guard2 = false ; guard3 =
false ; if ( y ) { loop_ub = b -> size [ 0 ] ; b -> size [ 0 ] = ub -> size [
0 ] ; pyp4acmmkn ( b , loop_ub ) ; loop_ub = ub -> size [ 0 ] ; for ( nx = 0
; nx < loop_ub ; nx ++ ) { lb_p = ub -> data [ nx ] ; b -> data [ nx ] = ( (
! muDoubleScalarIsInf ( lb_p ) ) && ( ! muDoubleScalarIsNaN ( lb_p ) ) ) ; }
loop_ub = 0 ; exitg2 = false ; while ( ( ! exitg2 ) && ( loop_ub + 1 <= b ->
size [ 0 ] ) ) { if ( ! b -> data [ loop_ub ] ) { y = false ; exitg2 = true ;
} else { loop_ub ++ ; } } if ( y ) { op4fr1mwv4z ( obj_e -> PositionNumber ,
rn ) ; if ( ( ub -> size [ 0 ] == lb -> size [ 0 ] ) && ( ( ub -> size [ 0 ]
== 1 ? lb -> size [ 0 ] : ub -> size [ 0 ] ) == rn -> size [ 0 ] ) && ( ( rn
-> size [ 0 ] == 1 ? ub -> size [ 0 ] == 1 ? lb -> size [ 0 ] : ub -> size [
0 ] : rn -> size [ 0 ] ) == lb -> size [ 0 ] ) ) { loop_ub = ub -> size [ 0 ]
; ub -> size [ 0 ] = lb -> size [ 0 ] ; o4pyrzarz5 ( ub , loop_ub ) ; loop_ub
= lb -> size [ 0 ] ; scalarLB = ( lb -> size [ 0 ] / 2 ) << 1 ; vectorUB =
scalarLB - 2 ; for ( nx = 0 ; nx <= vectorUB ; nx += 2 ) { tmp_p =
_mm_loadu_pd ( & ub -> data [ nx ] ) ; tmp_e = _mm_loadu_pd ( & lb -> data [
nx ] ) ; tmp = _mm_loadu_pd ( & rn -> data [ nx ] ) ; _mm_storeu_pd ( & ub ->
data [ nx ] , _mm_add_pd ( _mm_mul_pd ( _mm_sub_pd ( tmp_p , tmp_e ) , tmp )
, tmp_e ) ) ; } for ( nx = scalarLB ; nx < loop_ub ; nx ++ ) { lb_p = lb ->
data [ nx ] ; ub -> data [ nx ] = ( ub -> data [ nx ] - lb_p ) * rn -> data [
nx ] + lb_p ; } } else { epjk1yr5ig ( ub , lb , rn ) ; } } else { guard3 =
true ; } } else { guard3 = true ; } if ( guard3 ) { loop_ub = b -> size [ 0 ]
; b -> size [ 0 ] = lb -> size [ 0 ] ; pyp4acmmkn ( b , loop_ub ) ; loop_ub =
lb -> size [ 0 ] ; for ( nx = 0 ; nx < loop_ub ; nx ++ ) { lb_p = lb -> data
[ nx ] ; b -> data [ nx ] = ( ( ! muDoubleScalarIsInf ( lb_p ) ) && ( !
muDoubleScalarIsNaN ( lb_p ) ) ) ; } y = true ; loop_ub = 0 ; exitg2 = false
; while ( ( ! exitg2 ) && ( loop_ub + 1 <= b -> size [ 0 ] ) ) { if ( ! b ->
data [ loop_ub ] ) { y = false ; exitg2 = true ; } else { loop_ub ++ ; } } if
( y ) { loop_ub = b -> size [ 0 ] ; b -> size [ 0 ] = ub -> size [ 0 ] ;
pyp4acmmkn ( b , loop_ub ) ; loop_ub = ub -> size [ 0 ] ; for ( nx = 0 ; nx <
loop_ub ; nx ++ ) { lb_p = ub -> data [ nx ] ; b -> data [ nx ] = (
muDoubleScalarIsInf ( lb_p ) || muDoubleScalarIsNaN ( lb_p ) ) ; } if (
jwl4kngeul ( b ) ) { ub_p [ 0 ] = lb -> size [ 0 ] ; ub_p [ 1 ] = 1.0 ;
j4po4dx30s ( ub_p , rn ) ; nx = rn -> size [ 0 ] - 1 ; loop_ub = ub -> size [
0 ] ; ub -> size [ 0 ] = rn -> size [ 0 ] ; o4pyrzarz5 ( ub , loop_ub ) ; for
( loop_ub = 0 ; loop_ub <= nx ; loop_ub ++ ) { ub -> data [ loop_ub ] =
muDoubleScalarAbs ( rn -> data [ loop_ub ] ) ; } if ( lb -> size [ 0 ] == ub
-> size [ 0 ] ) { loop_ub = ub -> size [ 0 ] ; ub -> size [ 0 ] = lb -> size
[ 0 ] ; o4pyrzarz5 ( ub , loop_ub ) ; loop_ub = lb -> size [ 0 ] ; scalarLB =
( lb -> size [ 0 ] / 2 ) << 1 ; vectorUB = scalarLB - 2 ; for ( nx = 0 ; nx
<= vectorUB ; nx += 2 ) { tmp_p = _mm_loadu_pd ( & lb -> data [ nx ] ) ;
tmp_e = _mm_loadu_pd ( & ub -> data [ nx ] ) ; _mm_storeu_pd ( & ub -> data [
nx ] , _mm_add_pd ( tmp_p , tmp_e ) ) ; } for ( nx = scalarLB ; nx < loop_ub
; nx ++ ) { ub -> data [ nx ] += lb -> data [ nx ] ; } } else { fg5a5qqgee (
ub , lb ) ; } } else { guard2 = true ; } } else { guard2 = true ; } } if (
guard2 ) { loop_ub = b -> size [ 0 ] ; b -> size [ 0 ] = lb -> size [ 0 ] ;
pyp4acmmkn ( b , loop_ub ) ; loop_ub = lb -> size [ 0 ] ; for ( nx = 0 ; nx <
loop_ub ; nx ++ ) { lb_p = lb -> data [ nx ] ; b -> data [ nx ] = (
muDoubleScalarIsInf ( lb_p ) || muDoubleScalarIsNaN ( lb_p ) ) ; } if (
jwl4kngeul ( b ) ) { loop_ub = b -> size [ 0 ] ; b -> size [ 0 ] = ub -> size
[ 0 ] ; pyp4acmmkn ( b , loop_ub ) ; loop_ub = ub -> size [ 0 ] ; for ( nx =
0 ; nx < loop_ub ; nx ++ ) { lb_p = ub -> data [ nx ] ; b -> data [ nx ] = (
( ! muDoubleScalarIsInf ( lb_p ) ) && ( ! muDoubleScalarIsNaN ( lb_p ) ) ) ;
} y = true ; loop_ub = 0 ; exitg2 = false ; while ( ( ! exitg2 ) && ( loop_ub
+ 1 <= b -> size [ 0 ] ) ) { if ( ! b -> data [ loop_ub ] ) { y = false ;
exitg2 = true ; } else { loop_ub ++ ; } } if ( y ) { ub_p [ 0 ] = ub -> size
[ 0 ] ; ub_p [ 1 ] = 1.0 ; j4po4dx30s ( ub_p , rn ) ; nx = rn -> size [ 0 ] -
1 ; loop_ub = lb -> size [ 0 ] ; lb -> size [ 0 ] = rn -> size [ 0 ] ;
o4pyrzarz5 ( lb , loop_ub ) ; for ( loop_ub = 0 ; loop_ub <= nx ; loop_ub ++
) { lb -> data [ loop_ub ] = muDoubleScalarAbs ( rn -> data [ loop_ub ] ) ; }
if ( ub -> size [ 0 ] == lb -> size [ 0 ] ) { loop_ub = ub -> size [ 0 ] ;
scalarLB = ( ub -> size [ 0 ] / 2 ) << 1 ; vectorUB = scalarLB - 2 ; for ( nx
= 0 ; nx <= vectorUB ; nx += 2 ) { tmp_p = _mm_loadu_pd ( & ub -> data [ nx ]
) ; tmp_e = _mm_loadu_pd ( & lb -> data [ nx ] ) ; _mm_storeu_pd ( & ub ->
data [ nx ] , _mm_sub_pd ( tmp_p , tmp_e ) ) ; } for ( nx = scalarLB ; nx <
loop_ub ; nx ++ ) { ub -> data [ nx ] -= lb -> data [ nx ] ; } } else {
e0vmbp53ui ( ub , lb ) ; } } else { guard1 = true ; } } else { guard1 = true
; } } if ( guard1 ) { ub_p [ 0 ] = ub -> size [ 0 ] ; ub_p [ 1 ] = 1.0 ;
j4po4dx30s ( ub_p , ub ) ; } } if ( err > iter ) { loop_ub = 0 ; nx = 0 ; }
else { loop_ub = ( int32_T ) err - 1 ; nx = ( int32_T ) iter ; } scalarLB =
nx - loop_ub ; for ( nx = 0 ; nx < scalarLB ; nx ++ ) { newseed -> data [
loop_ub + nx ] = ub -> data [ nx ] ; } } } for ( nx = 0 ; nx < 6 ; nx ++ ) {
obj -> SeedInternal [ nx ] = newseed -> data [ nx ] ; } ed4opnbslm ( obj ,
c_xSol , & exitFlag , & err , & iter ) ; if ( err < * solutionInfo_Error ) {
for ( i = 0 ; i < 6 ; i ++ ) { xSol [ i ] = c_xSol [ i ] ; } *
solutionInfo_Error = err ; exitFlagPrev = exitFlag ; } ( *
solutionInfo_RRAttempts ) ++ ; * solutionInfo_Iterations += iter ; } }
kkefezl0wy ( & b ) ; jvu10fuanp ( & rn ) ; jvu10fuanp ( & lb ) ; jvu10fuanp (
& ub ) ; jvu10fuanp ( & newseed ) ; * solutionInfo_ExitFlag = exitFlagPrev ;
if ( * solutionInfo_Error < tol ) { solutionInfo_Status_size [ 0 ] = 1 ;
solutionInfo_Status_size [ 1 ] = 7 ; for ( nx = 0 ; nx < 7 ; nx ++ ) {
solutionInfo_Status_data [ nx ] = tmp_m [ nx ] ; } } else {
solutionInfo_Status_size [ 0 ] = 1 ; solutionInfo_Status_size [ 1 ] = 14 ;
for ( nx = 0 ; nx < 14 ; nx ++ ) { solutionInfo_Status_data [ nx ] = tmp_i [
nx ] ; } } } static void o0lxk1boud ( netvxor230 * * pEmxArray , int32_T
numDimensions ) { netvxor230 * emxArray ; int32_T i ; * pEmxArray = (
netvxor230 * ) malloc ( sizeof ( netvxor230 ) ) ; emxArray = * pEmxArray ;
emxArray -> data = ( uint32_T * ) NULL ; emxArray -> numDimensions =
numDimensions ; emxArray -> size = ( int32_T * ) malloc ( sizeof ( int32_T )
* ( uint32_T ) numDimensions ) ; emxArray -> allocatedSize = 0 ; emxArray ->
canFreeData = true ; for ( i = 0 ; i < numDimensions ; i ++ ) { emxArray ->
size [ i ] = 0 ; } } static void bndirxciwo ( netvxor230 * emxArray , int32_T
oldNumel ) { int32_T i ; int32_T newNumel ; void * newData ; if ( oldNumel <
0 ) { oldNumel = 0 ; } newNumel = 1 ; for ( i = 0 ; i < emxArray ->
numDimensions ; i ++ ) { newNumel *= emxArray -> size [ i ] ; } if ( newNumel
> emxArray -> allocatedSize ) { i = emxArray -> allocatedSize ; if ( i < 16 )
{ i = 16 ; } while ( i < newNumel ) { if ( i > 1073741823 ) { i = MAX_int32_T
; } else { i <<= 1 ; } } newData = calloc ( ( uint32_T ) i , sizeof (
uint32_T ) ) ; if ( emxArray -> data != NULL ) { memcpy ( newData , emxArray
-> data , sizeof ( uint32_T ) * ( uint32_T ) oldNumel ) ; if ( emxArray ->
canFreeData ) { free ( emxArray -> data ) ; } } emxArray -> data = ( uint32_T
* ) newData ; emxArray -> allocatedSize = i ; emxArray -> canFreeData = true
; } } static void ekfw4a23vn ( netvxor230 * * pEmxArray ) { if ( * pEmxArray
!= ( netvxor230 * ) NULL ) { if ( ( ( * pEmxArray ) -> data != ( uint32_T * )
NULL ) && ( * pEmxArray ) -> canFreeData ) { free ( ( * pEmxArray ) -> data )
; } free ( ( * pEmxArray ) -> size ) ; free ( * pEmxArray ) ; * pEmxArray = (
netvxor230 * ) NULL ; } } static void j0n3cmv241e ( grjfkdr5ak * obj , real_T
initialGuess [ 6 ] , real_T * solutionInfo_Iterations , real_T *
solutionInfo_NumRandomRestarts , real_T * solutionInfo_PoseErrorNorm , real_T
* solutionInfo_ExitFlag , char_T solutionInfo_Status_data [ ] , int32_T
solutionInfo_Status_size [ 2 ] ) { cwp5dxx3gqu * body ; hnyeda4wkh *
bodyIndices ; hnyeda4wkh * e ; hnyeda4wkh * limits ; hnyeda4wkh *
positionIndices ; i5s4hgzi5z * obj_p ; lg5jhfa1j5 * endEffectorName ;
nabfuq4qup * tmp ; netvxor230 * y ; real_T qvSolRaw [ 6 ] ; real_T apnd ;
real_T bid ; real_T cdiff ; real_T limits_e ; real_T limits_p ; real_T ndbl ;
real_T numPositions ; int32_T indicesUpperBoundViolation_data [ 6 ] ; int32_T
tmp_data [ 6 ] ; int32_T b_k ; int32_T c ; int32_T i ; int32_T
indicesUpperBoundViolation ; int32_T indicesUpperBoundViolation_size_idx_0 ;
int32_T nm1d2 ; int32_T tmp_size ; boolean_T lbOK [ 6 ] ; boolean_T ubOK [ 6
] ; boolean_T ubOK_p [ 6 ] ; boolean_T exitg1 ; boolean_T guard1 = false ;
boolean_T y_p ; obj_p = obj -> RigidBodyTreeInternal ; jolvb3jiwj ( & limits
, 2 ) ; hc1ry5yxnz ( obj_p , limits ) ; if ( limits -> size [ 0 ] == 6 ) {
for ( i = 0 ; i < 6 ; i ++ ) { ubOK [ i ] = ( initialGuess [ i ] <= limits ->
data [ i + limits -> size [ 0 ] ] + 4.4408920985006262E-16 ) ; } } else {
jmui04zg1k ( ubOK , initialGuess , limits ) ; } if ( limits -> size [ 0 ] ==
6 ) { for ( i = 0 ; i < 6 ; i ++ ) { lbOK [ i ] = ( initialGuess [ i ] >=
limits -> data [ i ] - 4.4408920985006262E-16 ) ; } } else { epjk1yr5ig0n51u
( lbOK , initialGuess , limits ) ; } y_p = true ; b_k = 0 ; exitg1 = false ;
while ( ( ! exitg1 ) && ( b_k < 6 ) ) { if ( ! ubOK [ b_k ] ) { y_p = false ;
exitg1 = true ; } else { b_k ++ ; } } guard1 = false ; if ( y_p ) { b_k = 0 ;
exitg1 = false ; while ( ( ! exitg1 ) && ( b_k < 6 ) ) { if ( ! lbOK [ b_k ]
) { y_p = false ; exitg1 = true ; } else { b_k ++ ; } } if ( y_p ) { } else {
guard1 = true ; } } else { guard1 = true ; } if ( guard1 ) { for ( i = 0 ; i
< 6 ; i ++ ) { ubOK_p [ i ] = ! ubOK [ i ] ; } nrmihjhybi ( ubOK_p , tmp_data
, & tmp_size ) ; indicesUpperBoundViolation_size_idx_0 = tmp_size ; b_k =
tmp_size ; if ( b_k - 1 >= 0 ) { memcpy ( & indicesUpperBoundViolation_data [
0 ] , & tmp_data [ 0 ] , ( uint32_T ) b_k * sizeof ( int32_T ) ) ; } for ( i
= 0 ; i < indicesUpperBoundViolation_size_idx_0 ; i ++ ) {
indicesUpperBoundViolation = indicesUpperBoundViolation_data [ i ] ;
initialGuess [ indicesUpperBoundViolation - 1 ] = limits -> data [ (
indicesUpperBoundViolation + limits -> size [ 0 ] ) - 1 ] ; } for ( i = 0 ; i
< 6 ; i ++ ) { ubOK [ i ] = ! lbOK [ i ] ; } nrmihjhybi ( ubOK , tmp_data , &
tmp_size ) ; indicesUpperBoundViolation_size_idx_0 = tmp_size ; b_k =
tmp_size ; if ( b_k - 1 >= 0 ) { memcpy ( & indicesUpperBoundViolation_data [
0 ] , & tmp_data [ 0 ] , ( uint32_T ) b_k * sizeof ( int32_T ) ) ; } for ( i
= 0 ; i < indicesUpperBoundViolation_size_idx_0 ; i ++ ) {
indicesUpperBoundViolation = indicesUpperBoundViolation_data [ i ] ;
initialGuess [ indicesUpperBoundViolation - 1 ] = limits -> data [
indicesUpperBoundViolation - 1 ] ; } } mjomgs30rz ( obj -> Solver ,
initialGuess , qvSolRaw , solutionInfo_Iterations ,
solutionInfo_NumRandomRestarts , solutionInfo_PoseErrorNorm ,
solutionInfo_ExitFlag , solutionInfo_Status_data , solutionInfo_Status_size )
; obj_p = obj -> RigidBodyTreeInternal ; ek533x1it4 ( & endEffectorName , 2 )
; nm1d2 = endEffectorName -> size [ 0 ] * endEffectorName -> size [ 1 ] ;
endEffectorName -> size [ 0 ] = 1 ; endEffectorName -> size [ 1 ] = obj ->
Solver -> ExtraArgs -> BodyName -> size [ 1 ] ; gsven4ga0i ( endEffectorName
, nm1d2 ) ; b_k = obj -> Solver -> ExtraArgs -> BodyName -> size [ 1 ] ; for
( i = 0 ; i < b_k ; i ++ ) { endEffectorName -> data [ i ] = obj -> Solver ->
ExtraArgs -> BodyName -> data [ i ] ; } jolvb3jiwj ( & bodyIndices , 1 ) ;
nm1d2 = bodyIndices -> size [ 0 ] ; bodyIndices -> size [ 0 ] = ( int32_T )
obj_p -> NumBodies ; o4pyrzarz5 ( bodyIndices , nm1d2 ) ; b_k = ( int32_T )
obj_p -> NumBodies ; if ( b_k - 1 >= 0 ) { memset ( & bodyIndices -> data [ 0
] , 0 , ( uint32_T ) b_k * sizeof ( real_T ) ) ; } bid = b3eyeozcmv ( obj_p ,
endEffectorName ) ; dqu5smbks1 ( & endEffectorName ) ; if ( bid == 0.0 ) {
nm1d2 = bodyIndices -> size [ 0 ] ; bodyIndices -> size [ 0 ] = 1 ;
o4pyrzarz5 ( bodyIndices , nm1d2 ) ; bodyIndices -> data [ 0 ] = 0.0 ; } else
{ body = obj_p -> Bodies [ ( int32_T ) bid - 1 ] ; bid = 1.0 ; while ( body
-> ParentIndex != 0.0 ) { bodyIndices -> data [ ( int32_T ) bid - 1 ] = body
-> Index ; body = obj_p -> Bodies [ ( int32_T ) body -> ParentIndex - 1 ] ;
bid ++ ; } if ( bid - 1.0 < 1.0 ) { indicesUpperBoundViolation_size_idx_0 = 0
; } else { indicesUpperBoundViolation_size_idx_0 = ( int32_T ) ( bid - 1.0 )
; } nm1d2 = bodyIndices -> size [ 0 ] ; bodyIndices -> size [ 0 ] =
indicesUpperBoundViolation_size_idx_0 + 2 ; o4pyrzarz5 ( bodyIndices , nm1d2
) ; bodyIndices -> data [ indicesUpperBoundViolation_size_idx_0 ] = body ->
Index ; bodyIndices -> data [ indicesUpperBoundViolation_size_idx_0 + 1 ] =
0.0 ; } obj_p = obj -> RigidBodyTreeInternal ; indicesUpperBoundViolation =
bodyIndices -> size [ 0 ] - 1 ; b_k = 0 ; for ( i = 0 ; i <=
indicesUpperBoundViolation ; i ++ ) { if ( bodyIndices -> data [ i ] != 0.0 )
{ b_k ++ ; } } drgklfcy43 ( & tmp , 1 ) ; nm1d2 = tmp -> size [ 0 ] ; tmp ->
size [ 0 ] = b_k ; h4sw33p0mb ( tmp , nm1d2 ) ; b_k = 0 ; for ( i = 0 ; i <=
indicesUpperBoundViolation ; i ++ ) { if ( bodyIndices -> data [ i ] != 0.0 )
{ tmp -> data [ b_k ] = i ; b_k ++ ; } } nm1d2 = limits -> size [ 0 ] *
limits -> size [ 1 ] ; limits -> size [ 0 ] = tmp -> size [ 0 ] ; limits ->
size [ 1 ] = 2 ; o4pyrzarz5 ( limits , nm1d2 ) ; b_k = tmp -> size [ 0 ] ;
for ( i = 0 ; i < 2 ; i ++ ) { for ( indicesUpperBoundViolation = 0 ;
indicesUpperBoundViolation < b_k ; indicesUpperBoundViolation ++ ) { limits
-> data [ indicesUpperBoundViolation + limits -> size [ 0 ] * i ] = obj_p ->
PositionDoFMap [ ( 7 * i + ( int32_T ) bodyIndices -> data [ tmp -> data [
indicesUpperBoundViolation ] ] ) - 1 ] ; } } lvpphjmwx4 ( & tmp ) ;
jvu10fuanp ( & bodyIndices ) ; jolvb3jiwj ( & positionIndices , 2 ) ; nm1d2 =
positionIndices -> size [ 0 ] * positionIndices -> size [ 1 ] ;
positionIndices -> size [ 0 ] = 1 ; positionIndices -> size [ 1 ] = ( int32_T
) obj_p -> PositionNumber ; o4pyrzarz5 ( positionIndices , nm1d2 ) ; b_k = (
int32_T ) obj_p -> PositionNumber ; if ( b_k - 1 >= 0 ) { memset ( &
positionIndices -> data [ 0 ] , 0 , ( uint32_T ) b_k * sizeof ( real_T ) ) ;
} bid = 0.0 ; indicesUpperBoundViolation_size_idx_0 = limits -> size [ 0 ] -
1 ; jolvb3jiwj ( & e , 2 ) ; o0lxk1boud ( & y , 2 ) ; for (
indicesUpperBoundViolation = 0 ; indicesUpperBoundViolation <=
indicesUpperBoundViolation_size_idx_0 ; indicesUpperBoundViolation ++ ) {
numPositions = ( limits -> data [ indicesUpperBoundViolation + limits -> size
[ 0 ] ] - limits -> data [ indicesUpperBoundViolation ] ) + 1.0 ; if (
numPositions > 0.0 ) { if ( numPositions < 1.0 ) { y -> size [ 0 ] = 1 ; y ->
size [ 1 ] = 0 ; } else { nm1d2 = y -> size [ 0 ] * y -> size [ 1 ] ; y ->
size [ 0 ] = 1 ; y -> size [ 1 ] = ( int32_T ) ( numPositions - 1.0 ) + 1 ;
bndirxciwo ( y , nm1d2 ) ; b_k = ( int32_T ) ( numPositions - 1.0 ) ; for ( i
= 0 ; i <= b_k ; i ++ ) { y -> data [ i ] = ( uint32_T ) i + 1U ; } }
limits_e = limits -> data [ indicesUpperBoundViolation ] ; limits_p = limits
-> data [ indicesUpperBoundViolation + limits -> size [ 0 ] ] ; if (
muDoubleScalarIsNaN ( limits_e ) || muDoubleScalarIsNaN ( limits_p ) ) {
nm1d2 = e -> size [ 0 ] * e -> size [ 1 ] ; e -> size [ 0 ] = 1 ; e -> size [
1 ] = 1 ; o4pyrzarz5 ( e , nm1d2 ) ; e -> data [ 0 ] = ( rtNaN ) ; } else if
( limits_p < limits_e ) { e -> size [ 0 ] = 1 ; e -> size [ 1 ] = 0 ; } else
if ( ( muDoubleScalarIsInf ( limits_e ) || muDoubleScalarIsInf ( limits_p ) )
&& ( limits_e == limits_p ) ) { nm1d2 = e -> size [ 0 ] * e -> size [ 1 ] ; e
-> size [ 0 ] = 1 ; e -> size [ 1 ] = 1 ; o4pyrzarz5 ( e , nm1d2 ) ; e ->
data [ 0 ] = ( rtNaN ) ; } else if ( muDoubleScalarFloor ( limits_e ) ==
limits_e ) { nm1d2 = e -> size [ 0 ] * e -> size [ 1 ] ; e -> size [ 0 ] = 1
; e -> size [ 1 ] = ( int32_T ) ( limits_p - limits_e ) + 1 ; o4pyrzarz5 ( e
, nm1d2 ) ; b_k = ( int32_T ) ( limits_p - limits_e ) ; for ( i = 0 ; i <=
b_k ; i ++ ) { e -> data [ i ] = limits_e + ( real_T ) i ; } } else { ndbl =
muDoubleScalarFloor ( ( limits_p - limits_e ) + 0.5 ) ; apnd = limits_e +
ndbl ; cdiff = apnd - limits_p ; if ( muDoubleScalarAbs ( cdiff ) <
4.4408920985006262E-16 * muDoubleScalarMax ( muDoubleScalarAbs ( limits_e ) ,
muDoubleScalarAbs ( limits_p ) ) ) { ndbl ++ ; apnd = limits_p ; } else if (
cdiff > 0.0 ) { apnd = ( ndbl - 1.0 ) + limits_e ; } else { ndbl ++ ; } if (
ndbl >= 0.0 ) { i = ( int32_T ) ndbl ; } else { i = 0 ; } nm1d2 = e -> size [
0 ] * e -> size [ 1 ] ; e -> size [ 0 ] = 1 ; e -> size [ 1 ] = i ;
o4pyrzarz5 ( e , nm1d2 ) ; if ( i > 0 ) { e -> data [ 0 ] = limits_e ; if ( i
> 1 ) { e -> data [ i - 1 ] = apnd ; nm1d2 = ( int32_T ) ( ( uint32_T ) ( i -
1 ) >> 1 ) ; c = nm1d2 - 2 ; for ( b_k = 0 ; b_k <= c ; b_k ++ ) { e -> data
[ b_k + 1 ] = ( real_T ) ( b_k + 1 ) + limits_e ; e -> data [ ( i - b_k ) - 2
] = apnd - ( real_T ) ( b_k + 1 ) ; } if ( nm1d2 << 1 == i - 1 ) { e -> data
[ nm1d2 ] = ( limits -> data [ indicesUpperBoundViolation ] + apnd ) / 2.0 ;
} else { e -> data [ nm1d2 ] = limits -> data [ indicesUpperBoundViolation ]
+ ( real_T ) nm1d2 ; e -> data [ nm1d2 + 1 ] = apnd - ( real_T ) nm1d2 ; } }
} } b_k = e -> size [ 1 ] ; for ( i = 0 ; i < b_k ; i ++ ) { positionIndices
-> data [ ( int32_T ) ( bid + ( real_T ) y -> data [ i ] ) - 1 ] = e -> data
[ i ] ; } bid += numPositions ; } } ekfw4a23vn ( & y ) ; jvu10fuanp ( & e ) ;
jvu10fuanp ( & limits ) ; if ( bid < 1.0 ) { positionIndices -> size [ 1 ] =
0 ; } else { nm1d2 = positionIndices -> size [ 0 ] * positionIndices -> size
[ 1 ] ; positionIndices -> size [ 1 ] = ( int32_T ) bid ; o4pyrzarz5 (
positionIndices , nm1d2 ) ; } b_k = positionIndices -> size [ 1 ] ; for ( i =
0 ; i < b_k ; i ++ ) { bid = positionIndices -> data [ i ] ; initialGuess [ (
int32_T ) bid - 1 ] = qvSolRaw [ ( int32_T ) bid - 1 ] ; } jvu10fuanp ( &
positionIndices ) ; } static void b5ffj5iztu ( grjfkdr5ak * obj , const
real_T tform [ 16 ] , const real_T weights [ 6 ] , const real_T initialGuess
[ 6 ] , real_T QSol [ 6 ] , real_T * solutionInfo_Iterations , real_T *
solutionInfo_PoseErrorNorm , real_T * solutionInfo_ExitFlag , char_T
solutionInfo_Status_data [ ] , int32_T solutionInfo_Status_size [ 2 ] ) {
fprravcitl * args ; real_T weightMatrix [ 36 ] ; real_T expl_temp ; int32_T i
; static const char_T tmp [ 5 ] = { 'B' , 'o' , 'd' , 'y' , '7' } ; memset (
& weightMatrix [ 0 ] , 0 , 36U * sizeof ( real_T ) ) ; for ( i = 0 ; i < 6 ;
i ++ ) { weightMatrix [ i + 6 * i ] = weights [ i ] ; } args = obj -> Solver
-> ExtraArgs ; for ( i = 0 ; i < 36 ; i ++ ) { args -> WeightMatrix [ i ] =
weightMatrix [ i ] ; } i = args -> BodyName -> size [ 0 ] * args -> BodyName
-> size [ 1 ] ; args -> BodyName -> size [ 0 ] = 1 ; args -> BodyName -> size
[ 1 ] = 5 ; gsven4ga0i ( args -> BodyName , i ) ; for ( i = 0 ; i < 5 ; i ++
) { args -> BodyName -> data [ i ] = tmp [ i ] ; } for ( i = 0 ; i < 16 ; i
++ ) { args -> Tform [ i ] = tform [ i ] ; } for ( i = 0 ; i < 6 ; i ++ ) {
QSol [ i ] = initialGuess [ i ] ; } j0n3cmv241e ( obj , QSol ,
solutionInfo_Iterations , & expl_temp , solutionInfo_PoseErrorNorm ,
solutionInfo_ExitFlag , solutionInfo_Status_data , solutionInfo_Status_size )
; } static void pmm1khoijv ( kubhfbb3hs * * pEmxArray , int32_T numDimensions
) { kubhfbb3hs * emxArray ; int32_T i ; * pEmxArray = ( kubhfbb3hs * ) malloc
( sizeof ( kubhfbb3hs ) ) ; emxArray = * pEmxArray ; emxArray -> data = (
kvqz32ufqp * ) NULL ; emxArray -> numDimensions = numDimensions ; emxArray ->
size = ( int32_T * ) malloc ( sizeof ( int32_T ) * ( uint32_T ) numDimensions
) ; emxArray -> allocatedSize = 0 ; emxArray -> canFreeData = true ; for ( i
= 0 ; i < numDimensions ; i ++ ) { emxArray -> size [ i ] = 0 ; } } static
void plhqacaehj ( kubhfbb3hs * emxArray , int32_T oldNumel ) { int32_T i ;
int32_T newNumel ; void * newData ; if ( oldNumel < 0 ) { oldNumel = 0 ; }
newNumel = 1 ; for ( i = 0 ; i < emxArray -> numDimensions ; i ++ ) {
newNumel *= emxArray -> size [ i ] ; } if ( newNumel > emxArray ->
allocatedSize ) { i = emxArray -> allocatedSize ; if ( i < 16 ) { i = 16 ; }
while ( i < newNumel ) { if ( i > 1073741823 ) { i = MAX_int32_T ; } else { i
<<= 1 ; } } newData = calloc ( ( uint32_T ) i , sizeof ( kvqz32ufqp ) ) ; if
( emxArray -> data != NULL ) { memcpy ( newData , emxArray -> data , sizeof (
kvqz32ufqp ) * ( uint32_T ) oldNumel ) ; if ( emxArray -> canFreeData ) {
free ( emxArray -> data ) ; } } emxArray -> data = ( kvqz32ufqp * ) newData ;
emxArray -> allocatedSize = i ; emxArray -> canFreeData = true ; } } static
void d20ewc4t52 ( const orkdduvnog * obj , real_T ax [ 3 ] ) { int32_T b_kstr
; char_T b_p [ 9 ] ; char_T b [ 8 ] ; boolean_T b_bool ; static const char_T
tmp [ 8 ] = { 'r' , 'e' , 'v' , 'o' , 'l' , 'u' , 't' , 'e' } ; static const
char_T tmp_p [ 9 ] = { 'p' , 'r' , 'i' , 's' , 'm' , 'a' , 't' , 'i' , 'c' }
; int32_T exitg1 ; boolean_T guard1 = false ; for ( b_kstr = 0 ; b_kstr < 8 ;
b_kstr ++ ) { b [ b_kstr ] = tmp [ b_kstr ] ; } b_bool = false ; if ( obj ->
Type -> size [ 1 ] != 8 ) { } else { b_kstr = 1 ; do { exitg1 = 0 ; if (
b_kstr - 1 < 8 ) { if ( obj -> Type -> data [ b_kstr - 1 ] != b [ b_kstr - 1
] ) { exitg1 = 1 ; } else { b_kstr ++ ; } } else { b_bool = true ; exitg1 = 1
; } } while ( exitg1 == 0 ) ; } guard1 = false ; if ( b_bool ) { guard1 =
true ; } else { for ( b_kstr = 0 ; b_kstr < 9 ; b_kstr ++ ) { b_p [ b_kstr ]
= tmp_p [ b_kstr ] ; } if ( obj -> Type -> size [ 1 ] != 9 ) { } else {
b_kstr = 1 ; do { exitg1 = 0 ; if ( b_kstr - 1 < 9 ) { if ( obj -> Type ->
data [ b_kstr - 1 ] != b_p [ b_kstr - 1 ] ) { exitg1 = 1 ; } else { b_kstr ++
; } } else { b_bool = true ; exitg1 = 1 ; } } while ( exitg1 == 0 ) ; } if (
b_bool ) { guard1 = true ; } else { ax [ 0 ] = ( rtNaN ) ; ax [ 1 ] = ( rtNaN
) ; ax [ 2 ] = ( rtNaN ) ; } } if ( guard1 ) { ax [ 0 ] = obj ->
JointAxisInternal [ 0 ] ; ax [ 1 ] = obj -> JointAxisInternal [ 1 ] ; ax [ 2
] = obj -> JointAxisInternal [ 2 ] ; } } static void cilf3n2fri ( kubhfbb3hs
* * pEmxArray ) { if ( * pEmxArray != ( kubhfbb3hs * ) NULL ) { if ( ( ( *
pEmxArray ) -> data != ( kvqz32ufqp * ) NULL ) && ( * pEmxArray ) ->
canFreeData ) { free ( ( * pEmxArray ) -> data ) ; } free ( ( * pEmxArray )
-> size ) ; free ( * pEmxArray ) ; * pEmxArray = ( kubhfbb3hs * ) NULL ; } }
static void lhhuyseiyj ( const real_T a_data [ ] , const int32_T a_size [ 3 ]
, const real_T b_data [ ] , const int32_T b_size [ 3 ] , real_T c_data [ ] ,
int32_T c_size [ 3 ] ) { int32_T tmp ; c_size [ 0 ] = 1 ; c_size [ 1 ] = 1 ;
if ( b_size [ 2 ] == 1 ) { c_size [ 2 ] = a_size [ 2 ] ; tmp = a_size [ 2 ] ;
} else { c_size [ 2 ] = 0 ; tmp = 0 ; } if ( tmp != 0 ) { c_data [ 0 ] =
muDoubleScalarAtan2 ( a_data [ 0 ] , b_data [ 0 ] ) ; } } static void
dpdmofhgjc ( cwp5dxx3gqu * pStruct ) { dqu5smbks1 ( & pStruct -> NameInternal
) ; } static void dpdmofhgjcwg ( ejmcoi31fmi * pStruct ) { fyinghe01v ( &
pStruct -> CollisionGeometries ) ; } static void gwxstyqisd ( ejmcoi31fmi
pMatrix [ 15 ] ) { int32_T i ; for ( i = 0 ; i < 15 ; i ++ ) { dpdmofhgjcwg (
& pMatrix [ i ] ) ; } } static void mopmtabj5r ( orkdduvnogx * pStruct ) {
dqu5smbks1 ( & pStruct -> Type ) ; jvu10fuanp ( & pStruct -> MotionSubspace )
; dqu5smbks1 ( & pStruct -> NameInternal ) ; jvu10fuanp ( & pStruct ->
PositionLimitsInternal ) ; jvu10fuanp ( & pStruct -> HomePositionInternal ) ;
} static void l4l53za0lc ( orkdduvnogx pMatrix [ 15 ] ) { int32_T i ; for ( i
= 0 ; i < 15 ; i ++ ) { mopmtabj5r ( & pMatrix [ i ] ) ; } } static void
gwxstyqisdw ( cwp5dxx3gqu pMatrix [ 14 ] ) { int32_T i ; for ( i = 0 ; i < 14
; i ++ ) { dpdmofhgjc ( & pMatrix [ i ] ) ; } } static void dpdmofhgjcw (
fykx3ceulsm * pStruct ) { dpdmofhgjc ( & pStruct -> Base ) ; gwxstyqisd (
pStruct -> _pobj0 ) ; l4l53za0lc ( pStruct -> _pobj1 ) ; gwxstyqisdw (
pStruct -> _pobj2 ) ; } static void dpdmofhgjcwgx ( fprravcitl * pStruct ) {
dqu5smbks1 ( & pStruct -> BodyName ) ; jvu10fuanp ( & pStruct -> ErrTemp ) ;
jvu10fuanp ( & pStruct -> GradTemp ) ; } static void aqejlilybx ( orkdduvnogx
pMatrix [ 14 ] ) { int32_T i ; for ( i = 0 ; i < 14 ; i ++ ) { mopmtabj5r ( &
pMatrix [ i ] ) ; } } static void gwxstyqisdwa ( cwp5dxx3gqu pMatrix [ 7 ] )
{ int32_T i ; for ( i = 0 ; i < 7 ; i ++ ) { dpdmofhgjc ( & pMatrix [ i ] ) ;
} } static void gwxstyqisdwaq ( ejmcoi31fmi pMatrix [ 8 ] ) { int32_T i ; for
( i = 0 ; i < 8 ; i ++ ) { dpdmofhgjcwg ( & pMatrix [ i ] ) ; } } static void
cpnizw4ibw ( orkdduvnogx pMatrix [ 8 ] ) { int32_T i ; for ( i = 0 ; i < 8 ;
i ++ ) { mopmtabj5r ( & pMatrix [ i ] ) ; } } static void dpdmofhgjcwgxl (
i5s4hgzi5z * pStruct ) { dpdmofhgjc ( & pStruct -> Base ) ; gwxstyqisdwa (
pStruct -> _pobj0 ) ; gwxstyqisdwaq ( pStruct -> _pobj1 ) ; cpnizw4ibw (
pStruct -> _pobj2 ) ; } static void fvg3bcbk3q ( oy2a1akvcj * pStruct ) {
jvu10fuanp ( & pStruct -> ConstraintMatrix ) ; jvu10fuanp ( & pStruct ->
ConstraintBound ) ; } static void nt4vo22ypv ( grjfkdr5ak * pStruct ) {
jvu10fuanp ( & pStruct -> Limits ) ; dpdmofhgjcwgx ( & pStruct -> _pobj0 ) ;
aqejlilybx ( pStruct -> _pobj1 ) ; gwxstyqisdwa ( pStruct -> _pobj2 ) ;
gwxstyqisd ( pStruct -> _pobj3 ) ; dpdmofhgjcwgxl ( & pStruct -> _pobj4 ) ;
fvg3bcbk3q ( & pStruct -> _pobj5 ) ; } static void f35545hcid ( pd0uxzf3xo *
pStruct ) { dpdmofhgjcw ( & pStruct -> TreeInternal ) ; nt4vo22ypv ( &
pStruct -> IKInternal ) ; } static void nissuvhw0c ( orkdduvnog * pStruct ) {
dqu5smbks1 ( & pStruct -> Type ) ; } static void djhzttpxwv ( ejmcoi31fm *
pStruct ) { fyinghe01v5 ( & pStruct -> CollisionGeometries ) ; } static void
dpdmofhgjcwgxla ( cwp5dxx3gq * pStruct ) { dqu5smbks1 ( & pStruct ->
NameInternal ) ; nissuvhw0c ( & pStruct -> JointInternal ) ; djhzttpxwv ( &
pStruct -> CollisionsInternal ) ; } static void gwxstyqisdwaqk ( cwp5dxx3gq
pMatrix [ 14 ] ) { int32_T i ; for ( i = 0 ; i < 14 ; i ++ ) {
dpdmofhgjcwgxla ( & pMatrix [ i ] ) ; } } static void fivqzjsyyy ( fykx3ceuls
* pStruct ) { dpdmofhgjcwgxla ( & pStruct -> Base ) ; gwxstyqisdwaqk (
pStruct -> _pobj0 ) ; } static void f35545hcidc ( aivhh1v50g * pStruct ) {
fivqzjsyyy ( & pStruct -> TreeInternal ) ; } void MdlInitialize ( void ) {
int32_T i ; rtX . p3palrnzjz = rtP . Integrator2_IC ; rtX . gncr2kcfdc = rtP
. Integrator1_IC ; rtX . jssdeyuydp = rtP . Integrator3_IC ; rtX . e2dw3elb2f
= rtP . Integrator_IC ; rtX . jdiyri4o3q = rtP . Integrator_IC_isl5emljg2 ;
for ( i = 0 ; i < 6 ; i ++ ) { rtDW . bx3fwsg2i1 [ i ] = rtP .
UnitDelay_InitialCondition ; } rtX . laucphmfyy = rtP .
Integrator_IC_pfyyjjaerm ; rtDW . m5xagcm5xa = rtP .
DiscreteDerivative_ICPrevScaledInput ; rtDW . c1xv4lavyx = nafxca1cr2 ; rtDW
. iqfygxjppa = 0U ; rtDW . mre1zjqmyg = nafxca1cr2 ; rtDW . aes52he5qp = 0U ;
} void MdlStart ( void ) { NeModelParameters modelParameters ;
NeModelParameters modelParameters_e ; NeModelParameters modelParameters_g ;
NeModelParameters modelParameters_i ; NeModelParameters modelParameters_m ;
NeModelParameters modelParameters_p ; NeslSimulationData * simulationData ;
NeslSimulator * tmp ; NeuDiagnosticManager * diagnosticManager ;
NeuDiagnosticTree * diagnosticTree ; NeuDiagnosticTree * diagnosticTree_c ;
NeuDiagnosticTree * diagnosticTree_e ; NeuDiagnosticTree * diagnosticTree_f ;
NeuDiagnosticTree * diagnosticTree_g ; NeuDiagnosticTree * diagnosticTree_i ;
NeuDiagnosticTree * diagnosticTree_j ; NeuDiagnosticTree * diagnosticTree_m ;
NeuDiagnosticTree * diagnosticTree_p ; char * msg ; char * msg_c ; char *
msg_e ; char * msg_f ; char * msg_g ; char * msg_i ; char * msg_j ; char *
msg_m ; char * msg_p ; real_T tmp_i [ 76 ] ; real_T tmp_f [ 4 ] ; real_T
tmp_g [ 4 ] ; real_T time ; real_T time_e ; real_T time_p ; real_T tmp_e ;
int32_T i ; int_T tmp_m [ 20 ] ; int_T tmp_c [ 2 ] ; int_T tmp_j [ 2 ] ;
boolean_T tmp_p ; boolean_T val ; static const uint32_T tmp_k [ 625 ] = {
5489U , 1301868182U , 2938499221U , 2950281878U , 1875628136U , 751856242U ,
944701696U , 2243192071U , 694061057U , 219885934U , 2066767472U ,
3182869408U , 485472502U , 2336857883U , 1071588843U , 3418470598U ,
951210697U , 3693558366U , 2923482051U , 1793174584U , 2982310801U ,
1586906132U , 1951078751U , 1808158765U , 1733897588U , 431328322U ,
4202539044U , 530658942U , 1714810322U , 3025256284U , 3342585396U ,
1937033938U , 2640572511U , 1654299090U , 3692403553U , 4233871309U ,
3497650794U , 862629010U , 2943236032U , 2426458545U , 1603307207U ,
1133453895U , 3099196360U , 2208657629U , 2747653927U , 931059398U ,
761573964U , 3157853227U , 785880413U , 730313442U , 124945756U , 2937117055U
, 3295982469U , 1724353043U , 3021675344U , 3884886417U , 4010150098U ,
4056961966U , 699635835U , 2681338818U , 1339167484U , 720757518U ,
2800161476U , 2376097373U , 1532957371U , 3902664099U , 1238982754U ,
3725394514U , 3449176889U , 3570962471U , 4287636090U , 4087307012U ,
3603343627U , 202242161U , 2995682783U , 1620962684U , 3704723357U ,
371613603U , 2814834333U , 2111005706U , 624778151U , 2094172212U ,
4284947003U , 1211977835U , 991917094U , 1570449747U , 2962370480U ,
1259410321U , 170182696U , 146300961U , 2836829791U , 619452428U ,
2723670296U , 1881399711U , 1161269684U , 1675188680U , 4132175277U ,
780088327U , 3409462821U , 1036518241U , 1834958505U , 3048448173U ,
161811569U , 618488316U , 44795092U , 3918322701U , 1924681712U , 3239478144U
, 383254043U , 4042306580U , 2146983041U , 3992780527U , 3518029708U ,
3545545436U , 3901231469U , 1896136409U , 2028528556U , 2339662006U ,
501326714U , 2060962201U , 2502746480U , 561575027U , 581893337U ,
3393774360U , 1778912547U , 3626131687U , 2175155826U , 319853231U ,
986875531U , 819755096U , 2915734330U , 2688355739U , 3482074849U , 2736559U
, 2296975761U , 1029741190U , 2876812646U , 690154749U , 579200347U ,
4027461746U , 1285330465U , 2701024045U , 4117700889U , 759495121U ,
3332270341U , 2313004527U , 2277067795U , 4131855432U , 2722057515U ,
1264804546U , 3848622725U , 2211267957U , 4100593547U , 959123777U ,
2130745407U , 3194437393U , 486673947U , 1377371204U , 17472727U , 352317554U
, 3955548058U , 159652094U , 1232063192U , 3835177280U , 49423123U ,
3083993636U , 733092U , 2120519771U , 2573409834U , 1112952433U , 3239502554U
, 761045320U , 1087580692U , 2540165110U , 641058802U , 1792435497U ,
2261799288U , 1579184083U , 627146892U , 2165744623U , 2200142389U ,
2167590760U , 2381418376U , 1793358889U , 3081659520U , 1663384067U ,
2009658756U , 2689600308U , 739136266U , 2304581039U , 3529067263U ,
591360555U , 525209271U , 3131882996U , 294230224U , 2076220115U ,
3113580446U , 1245621585U , 1386885462U , 3203270426U , 123512128U ,
12350217U , 354956375U , 4282398238U , 3356876605U , 3888857667U , 157639694U
, 2616064085U , 1563068963U , 2762125883U , 4045394511U , 4180452559U ,
3294769488U , 1684529556U , 1002945951U , 3181438866U , 22506664U ,
691783457U , 2685221343U , 171579916U , 3878728600U , 2475806724U ,
2030324028U , 3331164912U , 1708711359U , 1970023127U , 2859691344U ,
2588476477U , 2748146879U , 136111222U , 2967685492U , 909517429U ,
2835297809U , 3206906216U , 3186870716U , 341264097U , 2542035121U ,
3353277068U , 548223577U , 3170936588U , 1678403446U , 297435620U ,
2337555430U , 466603495U , 1132321815U , 1208589219U , 696392160U ,
894244439U , 2562678859U , 470224582U , 3306867480U , 201364898U ,
2075966438U , 1767227936U , 2929737987U , 3674877796U , 2654196643U ,
3692734598U , 3528895099U , 2796780123U , 3048728353U , 842329300U ,
191554730U , 2922459673U , 3489020079U , 3979110629U , 1022523848U ,
2202932467U , 3583655201U , 3565113719U , 587085778U , 4176046313U ,
3013713762U , 950944241U , 396426791U , 3784844662U , 3477431613U ,
3594592395U , 2782043838U , 3392093507U , 3106564952U , 2829419931U ,
1358665591U , 2206918825U , 3170783123U , 31522386U , 2988194168U ,
1782249537U , 1105080928U , 843500134U , 1225290080U , 1521001832U ,
3605886097U , 2802786495U , 2728923319U , 3996284304U , 903417639U ,
1171249804U , 1020374987U , 2824535874U , 423621996U , 1988534473U ,
2493544470U , 1008604435U , 1756003503U , 1488867287U , 1386808992U ,
732088248U , 1780630732U , 2482101014U , 976561178U , 1543448953U ,
2602866064U , 2021139923U , 1952599828U , 2360242564U , 2117959962U ,
2753061860U , 2388623612U , 4138193781U , 2962920654U , 2284970429U ,
766920861U , 3457264692U , 2879611383U , 815055854U , 2332929068U ,
1254853997U , 3740375268U , 3799380844U , 4091048725U , 2006331129U ,
1982546212U , 686850534U , 1907447564U , 2682801776U , 2780821066U ,
998290361U , 1342433871U , 4195430425U , 607905174U , 3902331779U ,
2454067926U , 1708133115U , 1170874362U , 2008609376U , 3260320415U ,
2211196135U , 433538229U , 2728786374U , 2189520818U , 262554063U ,
1182318347U , 3710237267U , 1221022450U , 715966018U , 2417068910U ,
2591870721U , 2870691989U , 3418190842U , 4238214053U , 1540704231U ,
1575580968U , 2095917976U , 4078310857U , 2313532447U , 2110690783U ,
4056346629U , 4061784526U , 1123218514U , 551538993U , 597148360U ,
4120175196U , 3581618160U , 3181170517U , 422862282U , 3227524138U ,
1713114790U , 662317149U , 1230418732U , 928171837U , 1324564878U ,
1928816105U , 1786535431U , 2878099422U , 3290185549U , 539474248U ,
1657512683U , 552370646U , 1671741683U , 3655312128U , 1552739510U ,
2605208763U , 1441755014U , 181878989U , 3124053868U , 1447103986U ,
3183906156U , 1728556020U , 3502241336U , 3055466967U , 1013272474U ,
818402132U , 1715099063U , 2900113506U , 397254517U , 4194863039U ,
1009068739U , 232864647U , 2540223708U , 2608288560U , 2415367765U ,
478404847U , 3455100648U , 3182600021U , 2115988978U , 434269567U ,
4117179324U , 3461774077U , 887256537U , 3545801025U , 286388911U ,
3451742129U , 1981164769U , 786667016U , 3310123729U , 3097811076U ,
2224235657U , 2959658883U , 3370969234U , 2514770915U , 3345656436U ,
2677010851U , 2206236470U , 271648054U , 2342188545U , 4292848611U ,
3646533909U , 3754009956U , 3803931226U , 4160647125U , 1477814055U ,
4043852216U , 1876372354U , 3133294443U , 3871104810U , 3177020907U ,
2074304428U , 3479393793U , 759562891U , 164128153U , 1839069216U ,
2114162633U , 3989947309U , 3611054956U , 1333547922U , 835429831U ,
494987340U , 171987910U , 1252001001U , 370809172U , 3508925425U ,
2535703112U , 1276855041U , 1922855120U , 835673414U , 3030664304U ,
613287117U , 171219893U , 3423096126U , 3376881639U , 2287770315U ,
1658692645U , 1262815245U , 3957234326U , 1168096164U , 2968737525U ,
2655813712U , 2132313144U , 3976047964U , 326516571U , 353088456U ,
3679188938U , 3205649712U , 2654036126U , 1249024881U , 880166166U ,
691800469U , 2229503665U , 1673458056U , 4032208375U , 1851778863U ,
2563757330U , 376742205U , 1794655231U , 340247333U , 1505873033U ,
396524441U , 879666767U , 3335579166U , 3260764261U , 3335999539U ,
506221798U , 4214658741U , 975887814U , 2080536343U , 3360539560U ,
571586418U , 138896374U , 4234352651U , 2737620262U , 3928362291U ,
1516365296U , 38056726U , 3599462320U , 3585007266U , 3850961033U ,
471667319U , 1536883193U , 2310166751U , 1861637689U , 2530999841U ,
4139843801U , 2710569485U , 827578615U , 2012334720U , 2907369459U ,
3029312804U , 2820112398U , 1965028045U , 35518606U , 2478379033U ,
643747771U , 1924139484U , 4123405127U , 3811735531U , 3429660832U ,
3285177704U , 1948416081U , 1311525291U , 1183517742U , 1739192232U ,
3979815115U , 2567840007U , 4116821529U , 213304419U , 4125718577U ,
1473064925U , 2442436592U , 1893310111U , 4195361916U , 3747569474U ,
828465101U , 2991227658U , 750582866U , 1205170309U , 1409813056U ,
678418130U , 1171531016U , 3821236156U , 354504587U , 4202874632U ,
3882511497U , 1893248677U , 1903078632U , 26340130U , 2069166240U ,
3657122492U , 3725758099U , 831344905U , 811453383U , 3447711422U ,
2434543565U , 4166886888U , 3358210805U , 4142984013U , 2988152326U ,
3527824853U , 982082992U , 2809155763U , 190157081U , 3340214818U ,
2365432395U , 2548636180U , 2894533366U , 3474657421U , 2372634704U ,
2845748389U , 43024175U , 2774226648U , 1987702864U , 3186502468U ,
453610222U , 4204736567U , 1392892630U , 2471323686U , 2470534280U ,
3541393095U , 4269885866U , 3909911300U , 759132955U , 1482612480U ,
667715263U , 1795580598U , 2337923983U , 3390586366U , 581426223U ,
1515718634U , 476374295U , 705213300U , 363062054U , 2084697697U ,
2407503428U , 2292957699U , 2426213835U , 2199989172U , 1987356470U ,
4026755612U , 2147252133U , 270400031U , 1367820199U , 2369854699U ,
2844269403U , 79981964U , 624U } ; CXPtMax * _rtXPerturbMax ; CXPtMin *
_rtXPerturbMin ; { bool externalInputIsInDatasetFormat = false ; void *
pISigstreamManager = rt_GetISigstreamManager ( rtS ) ;
rtwISigstreamManagerGetInputIsInDatasetFormat ( pISigstreamManager , &
externalInputIsInDatasetFormat ) ; if ( externalInputIsInDatasetFormat ) { }
} _rtXPerturbMax = ( ( CXPtMax * ) ssGetJacobianPerturbationBoundsMaxVec (
rtS ) ) ; _rtXPerturbMin = ( ( CXPtMin * )
ssGetJacobianPerturbationBoundsMinVec ( rtS ) ) ; { { { bool
isStreamoutAlreadyRegistered = false ; { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars ( "Simulation Environment:8" ) ;
sdiLabelU origSigName = sdiGetLabelFromChars ( "" ) ; sdiLabelU propName =
sdiGetLabelFromChars ( "Simulation Environment:8" ) ; sdiLabelU blockPath =
sdiGetLabelFromChars ( "Top_Level_Simulation/Cart Path" ) ; sdiLabelU
blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiLabelU sigName =
sdiGetLabelFromChars ( "Simulation Environment:8" ) ;
sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; { sdiComplexity sigComplexity = REAL ;
sdiSampleTimeContinuity stCont = SAMPLE_TIME_DISCRETE ; int_T sigDimsArray [
1 ] = { 1 } ; sigDims . nDims = 1 ; sigDims . dimensions = sigDimsArray ;
srcInfo . numBlockPathElems = 1 ; srcInfo . fullBlockPath = ( sdiFullBlkPathU
) & blockPath ; srcInfo . SID = ( sdiSignalIDU ) & blockSID ; srcInfo .
subPath = subPath ; srcInfo . portIndex = 0 + 1 ; srcInfo . signalName =
sigName ; srcInfo . sigSourceUUID = 0 ; rtDW . gcaetr4bcc . AQHandles =
sdiStartAsyncioQueueCreation ( hDT , & srcInfo , rt_dataMapInfo . mmi .
InstanceMap . fullPath , "d08718be-f530-4993-b911-e92e416354b7" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "" ) ;
sdiCompleteAsyncioQueueCreation ( rtDW . gcaetr4bcc . AQHandles , hDT , &
srcInfo ) ; if ( rtDW . gcaetr4bcc . AQHandles ) {
sdiSetSignalSampleTimeString ( rtDW . gcaetr4bcc . AQHandles , "0.01" , 0.01
, ssGetTFinal ( rtS ) ) ; sdiSetSignalRefRate ( rtDW . gcaetr4bcc . AQHandles
, 0.0 ) ; sdiSetRunStartTime ( rtDW . gcaetr4bcc . AQHandles , ssGetTaskTime
( rtS , 1 ) ) ; sdiAsyncRepoSetSignalExportSettings ( rtDW . gcaetr4bcc .
AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( rtDW . gcaetr4bcc .
AQHandles , loggedName , origSigName , propName ) ;
sdiAsyncRepoSetBlockPathDomain ( rtDW . gcaetr4bcc . AQHandles ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } if ( !
isStreamoutAlreadyRegistered ) { } } } } { { { bool
isStreamoutAlreadyRegistered = false ; { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars ( "Simulation Environment:9" ) ;
sdiLabelU origSigName = sdiGetLabelFromChars ( "" ) ; sdiLabelU propName =
sdiGetLabelFromChars ( "Simulation Environment:9" ) ; sdiLabelU blockPath =
sdiGetLabelFromChars ( "Top_Level_Simulation/Cart Path" ) ; sdiLabelU
blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiLabelU sigName =
sdiGetLabelFromChars ( "Simulation Environment:9" ) ;
sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; { sdiComplexity sigComplexity = REAL ;
sdiSampleTimeContinuity stCont = SAMPLE_TIME_DISCRETE ; int_T sigDimsArray [
1 ] = { 1 } ; sigDims . nDims = 1 ; sigDims . dimensions = sigDimsArray ;
srcInfo . numBlockPathElems = 1 ; srcInfo . fullBlockPath = ( sdiFullBlkPathU
) & blockPath ; srcInfo . SID = ( sdiSignalIDU ) & blockSID ; srcInfo .
subPath = subPath ; srcInfo . portIndex = 1 + 1 ; srcInfo . signalName =
sigName ; srcInfo . sigSourceUUID = 0 ; rtDW . ajcidjpwry . AQHandles =
sdiStartAsyncioQueueCreation ( hDT , & srcInfo , rt_dataMapInfo . mmi .
InstanceMap . fullPath , "3b132d34-a35b-4b68-a76e-e278cc4031a4" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "" ) ;
sdiCompleteAsyncioQueueCreation ( rtDW . ajcidjpwry . AQHandles , hDT , &
srcInfo ) ; if ( rtDW . ajcidjpwry . AQHandles ) {
sdiSetSignalSampleTimeString ( rtDW . ajcidjpwry . AQHandles , "0.01" , 0.01
, ssGetTFinal ( rtS ) ) ; sdiSetSignalRefRate ( rtDW . ajcidjpwry . AQHandles
, 0.0 ) ; sdiSetRunStartTime ( rtDW . ajcidjpwry . AQHandles , ssGetTaskTime
( rtS , 1 ) ) ; sdiAsyncRepoSetSignalExportSettings ( rtDW . ajcidjpwry .
AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( rtDW . ajcidjpwry .
AQHandles , loggedName , origSigName , propName ) ;
sdiAsyncRepoSetBlockPathDomain ( rtDW . ajcidjpwry . AQHandles ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } if ( !
isStreamoutAlreadyRegistered ) { } } } } { { { bool
isStreamoutAlreadyRegistered = false ; { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars ( "rightWeheelVelocity" ) ;
sdiLabelU origSigName = sdiGetLabelFromChars ( "rightWeheelVelocity" ) ;
sdiLabelU propName = sdiGetLabelFromChars ( "" ) ; sdiLabelU blockPath =
sdiGetLabelFromChars (
"Top_Level_Simulation/Simulation Environment/Cart Inverse Kinematics" ) ;
sdiLabelU blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiLabelU sigName =
sdiGetLabelFromChars ( "rightWeheelVelocity" ) ; sdiAsyncRepoDataTypeHandle
hDT = sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; {
sdiComplexity sigComplexity = REAL ; sdiSampleTimeContinuity stCont =
SAMPLE_TIME_DISCRETE ; int_T sigDimsArray [ 1 ] = { 1 } ; sigDims . nDims = 1
; sigDims . dimensions = sigDimsArray ; srcInfo . numBlockPathElems = 1 ;
srcInfo . fullBlockPath = ( sdiFullBlkPathU ) & blockPath ; srcInfo . SID = (
sdiSignalIDU ) & blockSID ; srcInfo . subPath = subPath ; srcInfo . portIndex
= 0 + 1 ; srcInfo . signalName = sigName ; srcInfo . sigSourceUUID = 0 ; rtDW
. opma5fwgxt . AQHandles = sdiStartAsyncioQueueCreation ( hDT , & srcInfo ,
rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"838fcd4a-f101-4ddf-9eb2-4304dd09a5fc" , sigComplexity , & sigDims ,
DIMENSIONS_MODE_FIXED , stCont , "" ) ; sdiCompleteAsyncioQueueCreation (
rtDW . opma5fwgxt . AQHandles , hDT , & srcInfo ) ; if ( rtDW . opma5fwgxt .
AQHandles ) { sdiSetSignalSampleTimeString ( rtDW . opma5fwgxt . AQHandles ,
"0.01" , 0.01 , ssGetTFinal ( rtS ) ) ; sdiSetSignalRefRate ( rtDW .
opma5fwgxt . AQHandles , 0.0 ) ; sdiSetRunStartTime ( rtDW . opma5fwgxt .
AQHandles , ssGetTaskTime ( rtS , 1 ) ) ; sdiAsyncRepoSetSignalExportSettings
( rtDW . opma5fwgxt . AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName (
rtDW . opma5fwgxt . AQHandles , loggedName , origSigName , propName ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } if ( !
isStreamoutAlreadyRegistered ) { } } } } { { { bool
isStreamoutAlreadyRegistered = false ; { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars ( "leftWheelVelocity" ) ;
sdiLabelU origSigName = sdiGetLabelFromChars ( "leftWheelVelocity" ) ;
sdiLabelU propName = sdiGetLabelFromChars ( "" ) ; sdiLabelU blockPath =
sdiGetLabelFromChars (
"Top_Level_Simulation/Simulation Environment/Cart Inverse Kinematics" ) ;
sdiLabelU blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiLabelU sigName =
sdiGetLabelFromChars ( "leftWheelVelocity" ) ; sdiAsyncRepoDataTypeHandle hDT
= sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; { sdiComplexity
sigComplexity = REAL ; sdiSampleTimeContinuity stCont = SAMPLE_TIME_DISCRETE
; int_T sigDimsArray [ 1 ] = { 1 } ; sigDims . nDims = 1 ; sigDims .
dimensions = sigDimsArray ; srcInfo . numBlockPathElems = 1 ; srcInfo .
fullBlockPath = ( sdiFullBlkPathU ) & blockPath ; srcInfo . SID = (
sdiSignalIDU ) & blockSID ; srcInfo . subPath = subPath ; srcInfo . portIndex
= 1 + 1 ; srcInfo . signalName = sigName ; srcInfo . sigSourceUUID = 0 ; rtDW
. i1b4erv544 . AQHandles = sdiStartAsyncioQueueCreation ( hDT , & srcInfo ,
rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"6eeb1562-1c42-47c1-be46-93744e52056c" , sigComplexity , & sigDims ,
DIMENSIONS_MODE_FIXED , stCont , "" ) ; sdiCompleteAsyncioQueueCreation (
rtDW . i1b4erv544 . AQHandles , hDT , & srcInfo ) ; if ( rtDW . i1b4erv544 .
AQHandles ) { sdiSetSignalSampleTimeString ( rtDW . i1b4erv544 . AQHandles ,
"0.01" , 0.01 , ssGetTFinal ( rtS ) ) ; sdiSetSignalRefRate ( rtDW .
i1b4erv544 . AQHandles , 0.0 ) ; sdiSetRunStartTime ( rtDW . i1b4erv544 .
AQHandles , ssGetTaskTime ( rtS , 1 ) ) ; sdiAsyncRepoSetSignalExportSettings
( rtDW . i1b4erv544 . AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName (
rtDW . i1b4erv544 . AQHandles , loggedName , origSigName , propName ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } if ( !
isStreamoutAlreadyRegistered ) { } } } } { { { bool
isStreamoutAlreadyRegistered = false ; { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars ( "" ) ; sdiLabelU origSigName =
sdiGetLabelFromChars ( "" ) ; sdiLabelU propName = sdiGetLabelFromChars ( ""
) ; sdiLabelU blockPath = sdiGetLabelFromChars (
"Top_Level_Simulation/Simulation Environment/Cart Trajectory" ) ; sdiLabelU
blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiLabelU sigName =
sdiGetLabelFromChars ( "" ) ; sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; { sdiComplexity
sigComplexity = REAL ; sdiSampleTimeContinuity stCont = SAMPLE_TIME_DISCRETE
; int_T sigDimsArray [ 1 ] = { 1 } ; sigDims . nDims = 1 ; sigDims .
dimensions = sigDimsArray ; srcInfo . numBlockPathElems = 1 ; srcInfo .
fullBlockPath = ( sdiFullBlkPathU ) & blockPath ; srcInfo . SID = (
sdiSignalIDU ) & blockSID ; srcInfo . subPath = subPath ; srcInfo . portIndex
= 0 + 1 ; srcInfo . signalName = sigName ; srcInfo . sigSourceUUID = 0 ; rtDW
. o25sxexqnc . AQHandles = sdiStartAsyncioQueueCreation ( hDT , & srcInfo ,
rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"97d2caea-30a5-495b-918d-3ffbc1ed3f10" , sigComplexity , & sigDims ,
DIMENSIONS_MODE_FIXED , stCont , "" ) ; sdiCompleteAsyncioQueueCreation (
rtDW . o25sxexqnc . AQHandles , hDT , & srcInfo ) ; if ( rtDW . o25sxexqnc .
AQHandles ) { sdiSetSignalSampleTimeString ( rtDW . o25sxexqnc . AQHandles ,
"0.01" , 0.01 , ssGetTFinal ( rtS ) ) ; sdiSetSignalRefRate ( rtDW .
o25sxexqnc . AQHandles , 0.0 ) ; sdiSetRunStartTime ( rtDW . o25sxexqnc .
AQHandles , ssGetTaskTime ( rtS , 1 ) ) ; sdiAsyncRepoSetSignalExportSettings
( rtDW . o25sxexqnc . AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName (
rtDW . o25sxexqnc . AQHandles , loggedName , origSigName , propName ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } if ( !
isStreamoutAlreadyRegistered ) { } } } } { { { bool
isStreamoutAlreadyRegistered = false ; { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars ( "" ) ; sdiLabelU origSigName =
sdiGetLabelFromChars ( "" ) ; sdiLabelU propName = sdiGetLabelFromChars ( ""
) ; sdiLabelU blockPath = sdiGetLabelFromChars (
"Top_Level_Simulation/Simulation Environment/Cart Trajectory" ) ; sdiLabelU
blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiLabelU sigName =
sdiGetLabelFromChars ( "" ) ; sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; { sdiComplexity
sigComplexity = REAL ; sdiSampleTimeContinuity stCont = SAMPLE_TIME_DISCRETE
; int_T sigDimsArray [ 1 ] = { 1 } ; sigDims . nDims = 1 ; sigDims .
dimensions = sigDimsArray ; srcInfo . numBlockPathElems = 1 ; srcInfo .
fullBlockPath = ( sdiFullBlkPathU ) & blockPath ; srcInfo . SID = (
sdiSignalIDU ) & blockSID ; srcInfo . subPath = subPath ; srcInfo . portIndex
= 1 + 1 ; srcInfo . signalName = sigName ; srcInfo . sigSourceUUID = 0 ; rtDW
. guynqgbksu . AQHandles = sdiStartAsyncioQueueCreation ( hDT , & srcInfo ,
rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"e2d013a7-5a79-41f1-ad2d-10a46c3ea61b" , sigComplexity , & sigDims ,
DIMENSIONS_MODE_FIXED , stCont , "" ) ; sdiCompleteAsyncioQueueCreation (
rtDW . guynqgbksu . AQHandles , hDT , & srcInfo ) ; if ( rtDW . guynqgbksu .
AQHandles ) { sdiSetSignalSampleTimeString ( rtDW . guynqgbksu . AQHandles ,
"0.01" , 0.01 , ssGetTFinal ( rtS ) ) ; sdiSetSignalRefRate ( rtDW .
guynqgbksu . AQHandles , 0.0 ) ; sdiSetRunStartTime ( rtDW . guynqgbksu .
AQHandles , ssGetTaskTime ( rtS , 1 ) ) ; sdiAsyncRepoSetSignalExportSettings
( rtDW . guynqgbksu . AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName (
rtDW . guynqgbksu . AQHandles , loggedName , origSigName , propName ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } if ( !
isStreamoutAlreadyRegistered ) { } } } } rtDW . k3ntuowunk = true ; rtDW .
b01cx0ynrl . isInitialized = 1 ; iyq5qy4rti ( & rtDW . aurrx3wzjl ) ; for ( i
= 0 ; i < 8 ; i ++ ) { rtDW . aurrx3wzjl . IKInternal . _pobj4 . _pobj1 [ i ]
. matlabCodegenIsDeleted = true ; } for ( i = 0 ; i < 15 ; i ++ ) { rtDW .
aurrx3wzjl . IKInternal . _pobj3 [ i ] . matlabCodegenIsDeleted = true ; }
for ( i = 0 ; i < 15 ; i ++ ) { rtDW . aurrx3wzjl . TreeInternal . _pobj0 [ i
] . matlabCodegenIsDeleted = true ; } for ( i = 0 ; i < 7 ; i ++ ) { rtDW .
aurrx3wzjl . IKInternal . _pobj4 . _pobj0 [ i ] . matlabCodegenIsDeleted =
true ; } rtDW . aurrx3wzjl . IKInternal . _pobj4 . Base .
matlabCodegenIsDeleted = true ; for ( i = 0 ; i < 7 ; i ++ ) { rtDW .
aurrx3wzjl . IKInternal . _pobj2 [ i ] . matlabCodegenIsDeleted = true ; }
for ( i = 0 ; i < 14 ; i ++ ) { rtDW . aurrx3wzjl . TreeInternal . _pobj2 [ i
] . matlabCodegenIsDeleted = true ; } rtDW . aurrx3wzjl . TreeInternal . Base
. matlabCodegenIsDeleted = true ; rtDW . aurrx3wzjl . TreeInternal .
matlabCodegenIsDeleted = true ; rtDW . aurrx3wzjl . IKInternal . _pobj4 .
matlabCodegenIsDeleted = true ; rtDW . aurrx3wzjl . IKInternal . _pobj0 .
matlabCodegenIsDeleted = true ; rtDW . aurrx3wzjl . IKInternal . _pobj5 .
matlabCodegenIsDeleted = true ; rtDW . aurrx3wzjl . IKInternal .
matlabCodegenIsDeleted = true ; rtDW . iad4zbxzgs = 7U ; rtDW . myznoztvgf =
true ; rtDW . eifup1x5cc = 1144108930U ; rtDW . plsp5vol0y = true ; rtDW .
mm51shfpuc [ 0 ] = 362436069U ; rtDW . mm51shfpuc [ 1 ] = 521288629U ; rtDW .
nm05ot5thg = true ; memcpy ( & rtDW . dky15kevds [ 0 ] , & tmp_k [ 0 ] , 625U
* sizeof ( uint32_T ) ) ; rtDW . oiqnpg1c2e = true ; rtDW . lbdnrt5k2u = 0U ;
rtDW . kjyys5fqrc = true ; rtDW . hyyf22gvlr [ 0 ] = 362436069U ; rtDW .
hyyf22gvlr [ 1 ] = 521288629U ; rtDW . ghd034ermt = true ; rtDW . aurrx3wzjl
. isInitialized = 0 ; rtDW . aurrx3wzjl . matlabCodegenIsDeleted = false ;
rtDW . gb0pu4b4jm = true ; hhsrjmrs4eb ( & rtDW . aurrx3wzjl ) ; { FWksInfo *
fromwksInfo ; if ( ( fromwksInfo = ( FWksInfo * ) calloc ( 1 , sizeof (
FWksInfo ) ) ) == ( NULL ) ) { ssSetErrorStatus ( rtS ,
"from workspace STRING(Name) memory allocation error" ) ; } else {
fromwksInfo -> origWorkspaceVarName = "[cart.traj.time' cart.traj.q']" ;
fromwksInfo -> origDataTypeId = 0 ; fromwksInfo -> origIsComplex = 0 ;
fromwksInfo -> origWidth = 2 ; fromwksInfo -> origElSize = sizeof ( real_T )
; fromwksInfo -> data = ( void * ) rtP . FromWorkspace1_Data0 ; fromwksInfo
-> nDataPoints = 3101 ; fromwksInfo -> time = ( double * ) rtP .
FromWorkspace1_Time0 ; rtDW . iyonscealb . TimePtr = fromwksInfo -> time ;
rtDW . iyonscealb . DataPtr = fromwksInfo -> data ; rtDW . iyonscealb .
RSimInfoPtr = fromwksInfo ; } rtDW . ah1glsmkae . PrevIndex = 0 ; } {
FWksInfo * fromwksInfo ; if ( ( fromwksInfo = ( FWksInfo * ) calloc ( 1 ,
sizeof ( FWksInfo ) ) ) == ( NULL ) ) { ssSetErrorStatus ( rtS ,
"from workspace STRING(Name) memory allocation error" ) ; } else {
fromwksInfo -> origWorkspaceVarName = "[cart.traj.time' cart.traj.th']" ;
fromwksInfo -> origDataTypeId = 0 ; fromwksInfo -> origIsComplex = 0 ;
fromwksInfo -> origWidth = 1 ; fromwksInfo -> origElSize = sizeof ( real_T )
; fromwksInfo -> data = ( void * ) rtP . FromWorkspace3_Data0 ; fromwksInfo
-> nDataPoints = 3101 ; fromwksInfo -> time = ( double * ) rtP .
FromWorkspace3_Time0 ; rtDW . hfgna5tkoq . TimePtr = fromwksInfo -> time ;
rtDW . hfgna5tkoq . DataPtr = fromwksInfo -> data ; rtDW . hfgna5tkoq .
RSimInfoPtr = fromwksInfo ; } rtDW . dvzs4nrqov . PrevIndex = 0 ; } {
FWksInfo * fromwksInfo ; if ( ( fromwksInfo = ( FWksInfo * ) calloc ( 1 ,
sizeof ( FWksInfo ) ) ) == ( NULL ) ) { ssSetErrorStatus ( rtS ,
"from workspace STRING(Name) memory allocation error" ) ; } else {
fromwksInfo -> origWorkspaceVarName = "[manip.traj.time' manip.traj.q.arm']"
; fromwksInfo -> origDataTypeId = 0 ; fromwksInfo -> origIsComplex = 0 ;
fromwksInfo -> origWidth = 3 ; fromwksInfo -> origElSize = sizeof ( real_T )
; fromwksInfo -> data = ( void * ) rtP . FromWorkspace4_Data0 ; fromwksInfo
-> nDataPoints = 3101 ; fromwksInfo -> time = ( double * ) rtP .
FromWorkspace4_Time0 ; rtDW . lc4ovzpgpe . TimePtr = fromwksInfo -> time ;
rtDW . lc4ovzpgpe . DataPtr = fromwksInfo -> data ; rtDW . lc4ovzpgpe .
RSimInfoPtr = fromwksInfo ; } rtDW . gh0oec1z5w . PrevIndex = 0 ; } {
FWksInfo * fromwksInfo ; if ( ( fromwksInfo = ( FWksInfo * ) calloc ( 1 ,
sizeof ( FWksInfo ) ) ) == ( NULL ) ) { ssSetErrorStatus ( rtS ,
"from workspace STRING(Name) memory allocation error" ) ; } else {
fromwksInfo -> origWorkspaceVarName = "[manip.traj.tp' manip.traj.grip']" ;
fromwksInfo -> origDataTypeId = 0 ; fromwksInfo -> origIsComplex = 0 ;
fromwksInfo -> origWidth = 1 ; fromwksInfo -> origElSize = sizeof ( real_T )
; fromwksInfo -> data = ( void * ) rtP . FromWorkspace5_Data0 ; fromwksInfo
-> nDataPoints = 22 ; fromwksInfo -> time = ( double * ) rtP .
FromWorkspace5_Time0 ; rtDW . begvxujstw . TimePtr = fromwksInfo -> time ;
rtDW . begvxujstw . DataPtr = fromwksInfo -> data ; rtDW . begvxujstw .
RSimInfoPtr = fromwksInfo ; } rtDW . ahwnshb1lx . PrevIndex = 0 ; } tmp =
nesl_lease_simulator (
 "Top_Level_Simulation/Simulation Environment/Position Actuated Robot Environment/Solver Configuration_1"
, 0 , 0 ) ; rtDW . lb3wyb2dez = ( void * ) tmp ; tmp_p = pointer_is_null (
rtDW . lb3wyb2dez ) ; if ( tmp_p ) { Top_Level_Simulation_66cd9431_1_gateway
( ) ; tmp = nesl_lease_simulator (
 "Top_Level_Simulation/Simulation Environment/Position Actuated Robot Environment/Solver Configuration_1"
, 0 , 0 ) ; rtDW . lb3wyb2dez = ( void * ) tmp ; }
slsaSaveRawMemoryForSimTargetOP ( rtS ,
 "Top_Level_Simulation/Simulation Environment/Position Actuated Robot Environment/Solver Configuration_100"
, ( void * * ) ( & rtDW . lb3wyb2dez ) , 0U * sizeof ( real_T ) ,
nesl_save_simdata , nesl_restore_simdata ) ; simulationData =
nesl_create_simulation_data ( ) ; rtDW . g3ij452qky = ( void * )
simulationData ; diagnosticManager = rtw_create_diagnostics ( ) ; rtDW .
ladhvtfsgz = ( void * ) diagnosticManager ; modelParameters . mSolverType =
NE_SOLVER_TYPE_ODE ; modelParameters . mSolverAbsTol = 0.001 ;
modelParameters . mSolverRelTol = 0.001 ; modelParameters .
mSolverModifyAbsTol = NE_MODIFY_ABS_TOL_NO ; modelParameters . mStartTime =
0.0 ; modelParameters . mLoadInitialState = false ; modelParameters .
mUseSimState = false ; modelParameters . mLinTrimCompile = false ;
modelParameters . mLoggingMode = SSC_LOGGING_OFF ; modelParameters .
mRTWModifiedTimeStamp = 6.12191066E+8 ; modelParameters . mZcDisabled = false
; modelParameters . mUseModelRefSolver = false ; tmp_e = 0.001 ;
modelParameters . mSolverTolerance = tmp_e ; tmp_e = 0.0 ; modelParameters .
mFixedStepSize = tmp_e ; tmp_p = true ; modelParameters . mVariableStepSolver
= tmp_p ; tmp_p = false ; modelParameters . mIsUsingODEN = tmp_p ; tmp_p =
slIsRapidAcceleratorSimulating ( ) ; val = ssGetGlobalInitialStatesAvailable
( rtS ) ; if ( tmp_p ) { val = ( val && ssIsFirstInitCond ( rtS ) ) ; }
modelParameters . mLoadInitialState = val ; modelParameters . mZcDisabled =
false ; diagnosticManager = ( NeuDiagnosticManager * ) rtDW . ladhvtfsgz ;
diagnosticTree = neu_diagnostic_manager_get_initial_tree ( diagnosticManager
) ; i = nesl_initialize_simulator ( ( NeslSimulator * ) rtDW . lb3wyb2dez , &
modelParameters , diagnosticManager ) ; if ( i != 0 ) { tmp_p =
error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp_p ) { msg =
rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } }
simulationData = ( NeslSimulationData * ) rtDW . g3ij452qky ; time = ssGetT (
rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData
-> mTime . mX = & time ; simulationData -> mData -> mContStates . mN = 26 ;
simulationData -> mData -> mContStates . mX = & rtX . dmqxelc4g5 [ 0 ] ;
simulationData -> mData -> mDiscStates . mN = 0 ; simulationData -> mData ->
mDiscStates . mX = & rtDW . p03lurvs2x ; simulationData -> mData ->
mModeVector . mN = 0 ; simulationData -> mData -> mModeVector . mX = & rtDW .
aqvwut4gxx ; tmp_p = ( ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo ( rtS
) -> foundContZcEvents ) ; simulationData -> mData -> mFoundZcEvents = tmp_p
; simulationData -> mData -> mIsMajorTimeStep = ssIsMajorTimeStep ( rtS ) ;
tmp_p = ( ssGetMdlInfoPtr ( rtS ) -> mdlFlags . solverAssertCheck == 1U ) ;
simulationData -> mData -> mIsSolverAssertCheck = tmp_p ; tmp_p =
ssIsSolverCheckingCIC ( rtS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = tmp_p ; tmp_p = ssIsSolverComputingJacobian ( rtS ) ;
simulationData -> mData -> mIsComputingJacobian = tmp_p ; simulationData ->
mData -> mIsEvaluatingF0 = ( ssGetEvaluatingF0ForJacobian ( rtS ) != 0 ) ;
tmp_p = ssIsSolverRequestingReset ( rtS ) ; simulationData -> mData ->
mIsSolverRequestingReset = tmp_p ; simulationData -> mData ->
mIsModeUpdateTimeStep = ssIsModeUpdateTimeStep ( rtS ) ; tmp_m [ 0 ] = 0 ;
tmp_i [ 0 ] = rtB . bxaujqvrbz [ 0 ] ; tmp_i [ 1 ] = rtB . bxaujqvrbz [ 1 ] ;
tmp_i [ 2 ] = rtB . bxaujqvrbz [ 2 ] ; tmp_i [ 3 ] = rtB . bxaujqvrbz [ 3 ] ;
tmp_m [ 1 ] = 4 ; tmp_i [ 4 ] = rtB . be5mxu02ho [ 0 ] ; tmp_i [ 5 ] = rtB .
be5mxu02ho [ 1 ] ; tmp_i [ 6 ] = rtB . be5mxu02ho [ 2 ] ; tmp_i [ 7 ] = rtB .
be5mxu02ho [ 3 ] ; tmp_m [ 2 ] = 8 ; tmp_i [ 8 ] = rtB . h0x3fs1esa [ 0 ] ;
tmp_i [ 9 ] = rtB . h0x3fs1esa [ 1 ] ; tmp_i [ 10 ] = rtB . h0x3fs1esa [ 2 ]
; tmp_i [ 11 ] = rtB . h0x3fs1esa [ 3 ] ; tmp_m [ 3 ] = 12 ; tmp_i [ 12 ] =
rtB . frifao4c1u [ 0 ] ; tmp_i [ 13 ] = rtB . frifao4c1u [ 1 ] ; tmp_i [ 14 ]
= rtB . frifao4c1u [ 2 ] ; tmp_i [ 15 ] = rtB . frifao4c1u [ 3 ] ; tmp_m [ 4
] = 16 ; tmp_i [ 16 ] = rtB . nwxytavutd [ 0 ] ; tmp_i [ 17 ] = rtB .
nwxytavutd [ 1 ] ; tmp_i [ 18 ] = rtB . nwxytavutd [ 2 ] ; tmp_i [ 19 ] = rtB
. nwxytavutd [ 3 ] ; tmp_m [ 5 ] = 20 ; tmp_i [ 20 ] = rtB . du4pvnugdj [ 0 ]
; tmp_i [ 21 ] = rtB . du4pvnugdj [ 1 ] ; tmp_i [ 22 ] = rtB . du4pvnugdj [ 2
] ; tmp_i [ 23 ] = rtB . du4pvnugdj [ 3 ] ; tmp_m [ 6 ] = 24 ; tmp_i [ 24 ] =
rtB . nmjwizdspm [ 0 ] ; tmp_i [ 25 ] = rtB . nmjwizdspm [ 1 ] ; tmp_i [ 26 ]
= rtB . nmjwizdspm [ 2 ] ; tmp_i [ 27 ] = rtB . nmjwizdspm [ 3 ] ; tmp_m [ 7
] = 28 ; tmp_i [ 28 ] = rtB . pybi00dpti [ 0 ] ; tmp_i [ 29 ] = rtB .
pybi00dpti [ 1 ] ; tmp_i [ 30 ] = rtB . pybi00dpti [ 2 ] ; tmp_i [ 31 ] = rtB
. pybi00dpti [ 3 ] ; tmp_m [ 8 ] = 32 ; tmp_i [ 32 ] = rtB . k4qxluudiw [ 0 ]
; tmp_i [ 33 ] = rtB . k4qxluudiw [ 1 ] ; tmp_i [ 34 ] = rtB . k4qxluudiw [ 2
] ; tmp_i [ 35 ] = rtB . k4qxluudiw [ 3 ] ; tmp_m [ 9 ] = 36 ; tmp_i [ 36 ] =
rtB . j1wjz4glfv [ 0 ] ; tmp_i [ 37 ] = rtB . j1wjz4glfv [ 1 ] ; tmp_i [ 38 ]
= rtB . j1wjz4glfv [ 2 ] ; tmp_i [ 39 ] = rtB . j1wjz4glfv [ 3 ] ; tmp_m [ 10
] = 40 ; tmp_i [ 40 ] = rtB . h0tqkotieo [ 0 ] ; tmp_i [ 41 ] = rtB .
h0tqkotieo [ 1 ] ; tmp_i [ 42 ] = rtB . h0tqkotieo [ 2 ] ; tmp_i [ 43 ] = rtB
. h0tqkotieo [ 3 ] ; tmp_m [ 11 ] = 44 ; tmp_i [ 44 ] = rtB . c3nacuiddy [ 0
] ; tmp_i [ 45 ] = rtB . c3nacuiddy [ 1 ] ; tmp_i [ 46 ] = rtB . c3nacuiddy [
2 ] ; tmp_i [ 47 ] = rtB . c3nacuiddy [ 3 ] ; tmp_m [ 12 ] = 48 ; tmp_i [ 48
] = rtB . ir3dfvqqai [ 0 ] ; tmp_i [ 49 ] = rtB . ir3dfvqqai [ 1 ] ; tmp_i [
50 ] = rtB . ir3dfvqqai [ 2 ] ; tmp_i [ 51 ] = rtB . ir3dfvqqai [ 3 ] ; tmp_m
[ 13 ] = 52 ; tmp_i [ 52 ] = rtB . o0g21chvl4 [ 0 ] ; tmp_i [ 53 ] = rtB .
o0g21chvl4 [ 1 ] ; tmp_i [ 54 ] = rtB . o0g21chvl4 [ 2 ] ; tmp_i [ 55 ] = rtB
. o0g21chvl4 [ 3 ] ; tmp_m [ 14 ] = 56 ; tmp_i [ 56 ] = rtB . pvn4sjrhtj [ 0
] ; tmp_i [ 57 ] = rtB . pvn4sjrhtj [ 1 ] ; tmp_i [ 58 ] = rtB . pvn4sjrhtj [
2 ] ; tmp_i [ 59 ] = rtB . pvn4sjrhtj [ 3 ] ; tmp_m [ 15 ] = 60 ; tmp_i [ 60
] = rtB . ctfsa4jidw [ 0 ] ; tmp_i [ 61 ] = rtB . ctfsa4jidw [ 1 ] ; tmp_i [
62 ] = rtB . ctfsa4jidw [ 2 ] ; tmp_i [ 63 ] = rtB . ctfsa4jidw [ 3 ] ; tmp_m
[ 16 ] = 64 ; tmp_i [ 64 ] = rtB . drqxmyuirf [ 0 ] ; tmp_i [ 65 ] = rtB .
drqxmyuirf [ 1 ] ; tmp_i [ 66 ] = rtB . drqxmyuirf [ 2 ] ; tmp_i [ 67 ] = rtB
. drqxmyuirf [ 3 ] ; tmp_m [ 17 ] = 68 ; tmp_i [ 68 ] = rtB . bylc4dlpa2 [ 0
] ; tmp_i [ 69 ] = rtB . bylc4dlpa2 [ 1 ] ; tmp_i [ 70 ] = rtB . bylc4dlpa2 [
2 ] ; tmp_i [ 71 ] = rtB . bylc4dlpa2 [ 3 ] ; tmp_m [ 18 ] = 72 ; tmp_i [ 72
] = rtB . aj3oqjvikj [ 0 ] ; tmp_i [ 73 ] = rtB . aj3oqjvikj [ 1 ] ; tmp_i [
74 ] = rtB . aj3oqjvikj [ 2 ] ; tmp_i [ 75 ] = rtB . aj3oqjvikj [ 3 ] ; tmp_m
[ 19 ] = 76 ; simulationData -> mData -> mInputValues . mN = 76 ;
simulationData -> mData -> mInputValues . mX = & tmp_i [ 0 ] ; simulationData
-> mData -> mInputOffsets . mN = 20 ; simulationData -> mData ->
mInputOffsets . mX = & tmp_m [ 0 ] ; simulationData -> mData -> mNumjacDxLo .
mN = 26 ; simulationData -> mData -> mNumjacDxLo . mX = & _rtXPerturbMin ->
dmqxelc4g5 [ 0 ] ; simulationData -> mData -> mNumjacDxHi . mN = 26 ;
simulationData -> mData -> mNumjacDxHi . mX = & _rtXPerturbMax -> dmqxelc4g5
[ 0 ] ; diagnosticManager = ( NeuDiagnosticManager * ) rtDW . ladhvtfsgz ;
diagnosticTree_p = neu_diagnostic_manager_get_initial_tree (
diagnosticManager ) ; i = ne_simulator_method ( ( NeslSimulator * ) rtDW .
lb3wyb2dez , NESL_SIM_NUMJAC_DX_BOUNDS , simulationData , diagnosticManager )
; if ( i != 0 ) { tmp_p = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) )
; if ( tmp_p ) { msg_p = rtw_diagnostics_msg ( diagnosticTree_p ) ;
ssSetErrorStatus ( rtS , msg_p ) ; } } tmp = nesl_lease_simulator (
 "Top_Level_Simulation/Simulation Environment/Position Actuated Robot Environment/Solver Configuration_1"
, 1 , 0 ) ; rtDW . ccmnpib3ig = ( void * ) tmp ; tmp_p = pointer_is_null (
rtDW . ccmnpib3ig ) ; if ( tmp_p ) { Top_Level_Simulation_66cd9431_1_gateway
( ) ; tmp = nesl_lease_simulator (
 "Top_Level_Simulation/Simulation Environment/Position Actuated Robot Environment/Solver Configuration_1"
, 1 , 0 ) ; rtDW . ccmnpib3ig = ( void * ) tmp ; }
slsaSaveRawMemoryForSimTargetOP ( rtS ,
 "Top_Level_Simulation/Simulation Environment/Position Actuated Robot Environment/Solver Configuration_110"
, ( void * * ) ( & rtDW . ccmnpib3ig ) , 0U * sizeof ( real_T ) ,
nesl_save_simdata , nesl_restore_simdata ) ; simulationData =
nesl_create_simulation_data ( ) ; rtDW . cycsofdxfe = ( void * )
simulationData ; diagnosticManager = rtw_create_diagnostics ( ) ; rtDW .
exuhvzpgsm = ( void * ) diagnosticManager ; modelParameters_p . mSolverType =
NE_SOLVER_TYPE_ODE ; modelParameters_p . mSolverAbsTol = 0.001 ;
modelParameters_p . mSolverRelTol = 0.001 ; modelParameters_p .
mSolverModifyAbsTol = NE_MODIFY_ABS_TOL_NO ; modelParameters_p . mStartTime =
0.0 ; modelParameters_p . mLoadInitialState = false ; modelParameters_p .
mUseSimState = false ; modelParameters_p . mLinTrimCompile = false ;
modelParameters_p . mLoggingMode = SSC_LOGGING_OFF ; modelParameters_p .
mRTWModifiedTimeStamp = 6.12191066E+8 ; modelParameters_p . mZcDisabled =
false ; modelParameters_p . mUseModelRefSolver = false ; tmp_e = 0.001 ;
modelParameters_p . mSolverTolerance = tmp_e ; tmp_e = 0.0 ;
modelParameters_p . mFixedStepSize = tmp_e ; tmp_p = true ; modelParameters_p
. mVariableStepSolver = tmp_p ; tmp_p = false ; modelParameters_p .
mIsUsingODEN = tmp_p ; tmp_p = slIsRapidAcceleratorSimulating ( ) ; val =
ssGetGlobalInitialStatesAvailable ( rtS ) ; if ( tmp_p ) { val = ( val &&
ssIsFirstInitCond ( rtS ) ) ; } modelParameters_p . mLoadInitialState = val ;
modelParameters_p . mZcDisabled = false ; diagnosticManager = (
NeuDiagnosticManager * ) rtDW . exuhvzpgsm ; diagnosticTree_e =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; i =
nesl_initialize_simulator ( ( NeslSimulator * ) rtDW . ccmnpib3ig , &
modelParameters_p , diagnosticManager ) ; if ( i != 0 ) { tmp_p =
error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp_p ) { msg_e =
rtw_diagnostics_msg ( diagnosticTree_e ) ; ssSetErrorStatus ( rtS , msg_e ) ;
} } iyq5qy4rtit ( & rtDW . okj1p03aot ) ; for ( i = 0 ; i < 14 ; i ++ ) {
rtDW . okj1p03aot . TreeInternal . _pobj0 [ i ] . CollisionsInternal .
matlabCodegenIsDeleted = true ; } rtDW . okj1p03aot . TreeInternal . Base .
CollisionsInternal . matlabCodegenIsDeleted = true ; for ( i = 0 ; i < 14 ; i
++ ) { rtDW . okj1p03aot . TreeInternal . _pobj0 [ i ] .
matlabCodegenIsDeleted = true ; } rtDW . okj1p03aot . TreeInternal . Base .
matlabCodegenIsDeleted = true ; rtDW . okj1p03aot . TreeInternal .
matlabCodegenIsDeleted = true ; rtDW . okj1p03aot . isInitialized = 0 ; rtDW
. okj1p03aot . matlabCodegenIsDeleted = false ; rtDW . pxlzvepeuu = true ;
hhsrjmrs4e ( & rtDW . okj1p03aot ) ; rtDW . m54kshliay = true ; rtDW .
lmh145ati3 . isInitialized = 1 ; { FWksInfo * fromwksInfo ; if ( (
fromwksInfo = ( FWksInfo * ) calloc ( 1 , sizeof ( FWksInfo ) ) ) == ( NULL )
) { ssSetErrorStatus ( rtS ,
"from workspace STRING(Name) memory allocation error" ) ; } else {
fromwksInfo -> origWorkspaceVarName = "[cart.traj.time' cart.traj.qd']" ;
fromwksInfo -> origDataTypeId = 0 ; fromwksInfo -> origIsComplex = 0 ;
fromwksInfo -> origWidth = 1 ; fromwksInfo -> origElSize = sizeof ( real_T )
; fromwksInfo -> data = ( void * ) rtP . FromWorkspace2_Data0 ; fromwksInfo
-> nDataPoints = 3101 ; fromwksInfo -> time = ( double * ) rtP .
FromWorkspace2_Time0 ; rtDW . kez14kn3ym . TimePtr = fromwksInfo -> time ;
rtDW . kez14kn3ym . DataPtr = fromwksInfo -> data ; rtDW . kez14kn3ym .
RSimInfoPtr = fromwksInfo ; } rtDW . lo0wac2a2b . PrevIndex = 0 ; } tmp =
nesl_lease_simulator (
 "Top_Level_Simulation/Simulation Environment/Position Actuated Robot Environment/Solver Configuration_3"
, 0 , 0 ) ; rtDW . cmjfgqom52 = ( void * ) tmp ; tmp_p = pointer_is_null (
rtDW . cmjfgqom52 ) ; if ( tmp_p ) { Top_Level_Simulation_66cd9431_3_gateway
( ) ; tmp = nesl_lease_simulator (
 "Top_Level_Simulation/Simulation Environment/Position Actuated Robot Environment/Solver Configuration_3"
, 0 , 0 ) ; rtDW . cmjfgqom52 = ( void * ) tmp ; }
slsaSaveRawMemoryForSimTargetOP ( rtS ,
 "Top_Level_Simulation/Simulation Environment/Position Actuated Robot Environment/Solver Configuration_300"
, ( void * * ) ( & rtDW . cmjfgqom52 ) , 0U * sizeof ( real_T ) ,
nesl_save_simdata , nesl_restore_simdata ) ; simulationData =
nesl_create_simulation_data ( ) ; rtDW . gpwzsvid1r = ( void * )
simulationData ; diagnosticManager = rtw_create_diagnostics ( ) ; rtDW .
l0offn5pfw = ( void * ) diagnosticManager ; modelParameters_e . mSolverType =
NE_SOLVER_TYPE_ODE ; modelParameters_e . mSolverAbsTol = 0.001 ;
modelParameters_e . mSolverRelTol = 0.001 ; modelParameters_e .
mSolverModifyAbsTol = NE_MODIFY_ABS_TOL_NO ; modelParameters_e . mStartTime =
0.0 ; modelParameters_e . mLoadInitialState = false ; modelParameters_e .
mUseSimState = false ; modelParameters_e . mLinTrimCompile = false ;
modelParameters_e . mLoggingMode = SSC_LOGGING_OFF ; modelParameters_e .
mRTWModifiedTimeStamp = 6.12190689E+8 ; modelParameters_e . mZcDisabled =
false ; modelParameters_e . mUseModelRefSolver = false ; tmp_e = 0.001 ;
modelParameters_e . mSolverTolerance = tmp_e ; tmp_e = 0.0 ;
modelParameters_e . mFixedStepSize = tmp_e ; tmp_p = true ; modelParameters_e
. mVariableStepSolver = tmp_p ; tmp_p = false ; modelParameters_e .
mIsUsingODEN = tmp_p ; tmp_p = slIsRapidAcceleratorSimulating ( ) ; val =
ssGetGlobalInitialStatesAvailable ( rtS ) ; if ( tmp_p ) { val = ( val &&
ssIsFirstInitCond ( rtS ) ) ; } modelParameters_e . mLoadInitialState = val ;
modelParameters_e . mZcDisabled = false ; diagnosticManager = (
NeuDiagnosticManager * ) rtDW . l0offn5pfw ; diagnosticTree_i =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; i =
nesl_initialize_simulator ( ( NeslSimulator * ) rtDW . cmjfgqom52 , &
modelParameters_e , diagnosticManager ) ; if ( i != 0 ) { tmp_p =
error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp_p ) { msg_i =
rtw_diagnostics_msg ( diagnosticTree_i ) ; ssSetErrorStatus ( rtS , msg_i ) ;
} } simulationData = ( NeslSimulationData * ) rtDW . gpwzsvid1r ; time_p =
ssGetT ( rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData
-> mData -> mTime . mX = & time_p ; simulationData -> mData -> mContStates .
mN = 2 ; simulationData -> mData -> mContStates . mX = & rtX . gb2ewon1vo [ 0
] ; simulationData -> mData -> mDiscStates . mN = 1 ; simulationData -> mData
-> mDiscStates . mX = & rtDW . dljj5a1cxt ; simulationData -> mData ->
mModeVector . mN = 0 ; simulationData -> mData -> mModeVector . mX = & rtDW .
fw5ooxnkzk ; tmp_p = ( ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo ( rtS
) -> foundContZcEvents ) ; simulationData -> mData -> mFoundZcEvents = tmp_p
; simulationData -> mData -> mIsMajorTimeStep = ssIsMajorTimeStep ( rtS ) ;
tmp_p = ( ssGetMdlInfoPtr ( rtS ) -> mdlFlags . solverAssertCheck == 1U ) ;
simulationData -> mData -> mIsSolverAssertCheck = tmp_p ; tmp_p =
ssIsSolverCheckingCIC ( rtS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = tmp_p ; tmp_p = ssIsSolverComputingJacobian ( rtS ) ;
simulationData -> mData -> mIsComputingJacobian = tmp_p ; simulationData ->
mData -> mIsEvaluatingF0 = ( ssGetEvaluatingF0ForJacobian ( rtS ) != 0 ) ;
tmp_p = ssIsSolverRequestingReset ( rtS ) ; simulationData -> mData ->
mIsSolverRequestingReset = tmp_p ; simulationData -> mData ->
mIsModeUpdateTimeStep = ssIsModeUpdateTimeStep ( rtS ) ; tmp_j [ 0 ] = 0 ;
tmp_g [ 0 ] = rtB . h2wzsozxts [ 0 ] ; tmp_g [ 1 ] = rtB . h2wzsozxts [ 1 ] ;
tmp_g [ 2 ] = rtB . h2wzsozxts [ 2 ] ; tmp_g [ 3 ] = rtB . h2wzsozxts [ 3 ] ;
tmp_j [ 1 ] = 4 ; simulationData -> mData -> mInputValues . mN = 4 ;
simulationData -> mData -> mInputValues . mX = & tmp_g [ 0 ] ; simulationData
-> mData -> mInputOffsets . mN = 2 ; simulationData -> mData -> mInputOffsets
. mX = & tmp_j [ 0 ] ; simulationData -> mData -> mNumjacDxLo . mN = 2 ;
simulationData -> mData -> mNumjacDxLo . mX = & _rtXPerturbMin -> gb2ewon1vo
[ 0 ] ; simulationData -> mData -> mNumjacDxHi . mN = 2 ; simulationData ->
mData -> mNumjacDxHi . mX = & _rtXPerturbMax -> gb2ewon1vo [ 0 ] ;
diagnosticManager = ( NeuDiagnosticManager * ) rtDW . l0offn5pfw ;
diagnosticTree_m = neu_diagnostic_manager_get_initial_tree (
diagnosticManager ) ; i = ne_simulator_method ( ( NeslSimulator * ) rtDW .
cmjfgqom52 , NESL_SIM_NUMJAC_DX_BOUNDS , simulationData , diagnosticManager )
; if ( i != 0 ) { tmp_p = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) )
; if ( tmp_p ) { msg_m = rtw_diagnostics_msg ( diagnosticTree_m ) ;
ssSetErrorStatus ( rtS , msg_m ) ; } } tmp = nesl_lease_simulator (
 "Top_Level_Simulation/Simulation Environment/Position Actuated Robot Environment/Solver Configuration_3"
, 1 , 0 ) ; rtDW . grwvqtecfq = ( void * ) tmp ; tmp_p = pointer_is_null (
rtDW . grwvqtecfq ) ; if ( tmp_p ) { Top_Level_Simulation_66cd9431_3_gateway
( ) ; tmp = nesl_lease_simulator (
 "Top_Level_Simulation/Simulation Environment/Position Actuated Robot Environment/Solver Configuration_3"
, 1 , 0 ) ; rtDW . grwvqtecfq = ( void * ) tmp ; }
slsaSaveRawMemoryForSimTargetOP ( rtS ,
 "Top_Level_Simulation/Simulation Environment/Position Actuated Robot Environment/Solver Configuration_310"
, ( void * * ) ( & rtDW . grwvqtecfq ) , 0U * sizeof ( real_T ) ,
nesl_save_simdata , nesl_restore_simdata ) ; simulationData =
nesl_create_simulation_data ( ) ; rtDW . pi2dmccavk = ( void * )
simulationData ; diagnosticManager = rtw_create_diagnostics ( ) ; rtDW .
jbztwjzszw = ( void * ) diagnosticManager ; modelParameters_i . mSolverType =
NE_SOLVER_TYPE_ODE ; modelParameters_i . mSolverAbsTol = 0.001 ;
modelParameters_i . mSolverRelTol = 0.001 ; modelParameters_i .
mSolverModifyAbsTol = NE_MODIFY_ABS_TOL_NO ; modelParameters_i . mStartTime =
0.0 ; modelParameters_i . mLoadInitialState = false ; modelParameters_i .
mUseSimState = false ; modelParameters_i . mLinTrimCompile = false ;
modelParameters_i . mLoggingMode = SSC_LOGGING_OFF ; modelParameters_i .
mRTWModifiedTimeStamp = 6.12190689E+8 ; modelParameters_i . mZcDisabled =
false ; modelParameters_i . mUseModelRefSolver = false ; tmp_e = 0.001 ;
modelParameters_i . mSolverTolerance = tmp_e ; tmp_e = 0.0 ;
modelParameters_i . mFixedStepSize = tmp_e ; tmp_p = true ; modelParameters_i
. mVariableStepSolver = tmp_p ; tmp_p = false ; modelParameters_i .
mIsUsingODEN = tmp_p ; tmp_p = slIsRapidAcceleratorSimulating ( ) ; val =
ssGetGlobalInitialStatesAvailable ( rtS ) ; if ( tmp_p ) { val = ( val &&
ssIsFirstInitCond ( rtS ) ) ; } modelParameters_i . mLoadInitialState = val ;
modelParameters_i . mZcDisabled = false ; diagnosticManager = (
NeuDiagnosticManager * ) rtDW . jbztwjzszw ; diagnosticTree_g =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; i =
nesl_initialize_simulator ( ( NeslSimulator * ) rtDW . grwvqtecfq , &
modelParameters_i , diagnosticManager ) ; if ( i != 0 ) { tmp_p =
error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp_p ) { msg_g =
rtw_diagnostics_msg ( diagnosticTree_g ) ; ssSetErrorStatus ( rtS , msg_g ) ;
} } tmp = nesl_lease_simulator (
 "Top_Level_Simulation/Simulation Environment/Position Actuated Robot Environment/Solver Configuration_2"
, 0 , 0 ) ; rtDW . oreix54jo1 = ( void * ) tmp ; tmp_p = pointer_is_null (
rtDW . oreix54jo1 ) ; if ( tmp_p ) { Top_Level_Simulation_66cd9431_2_gateway
( ) ; tmp = nesl_lease_simulator (
 "Top_Level_Simulation/Simulation Environment/Position Actuated Robot Environment/Solver Configuration_2"
, 0 , 0 ) ; rtDW . oreix54jo1 = ( void * ) tmp ; }
slsaSaveRawMemoryForSimTargetOP ( rtS ,
 "Top_Level_Simulation/Simulation Environment/Position Actuated Robot Environment/Solver Configuration_200"
, ( void * * ) ( & rtDW . oreix54jo1 ) , 0U * sizeof ( real_T ) ,
nesl_save_simdata , nesl_restore_simdata ) ; simulationData =
nesl_create_simulation_data ( ) ; rtDW . fmjokqk3g2 = ( void * )
simulationData ; diagnosticManager = rtw_create_diagnostics ( ) ; rtDW .
jbmhvkycuq = ( void * ) diagnosticManager ; modelParameters_m . mSolverType =
NE_SOLVER_TYPE_ODE ; modelParameters_m . mSolverAbsTol = 0.001 ;
modelParameters_m . mSolverRelTol = 0.001 ; modelParameters_m .
mSolverModifyAbsTol = NE_MODIFY_ABS_TOL_NO ; modelParameters_m . mStartTime =
0.0 ; modelParameters_m . mLoadInitialState = false ; modelParameters_m .
mUseSimState = false ; modelParameters_m . mLinTrimCompile = false ;
modelParameters_m . mLoggingMode = SSC_LOGGING_OFF ; modelParameters_m .
mRTWModifiedTimeStamp = 6.12190689E+8 ; modelParameters_m . mZcDisabled =
false ; modelParameters_m . mUseModelRefSolver = false ; tmp_e = 0.001 ;
modelParameters_m . mSolverTolerance = tmp_e ; tmp_e = 0.0 ;
modelParameters_m . mFixedStepSize = tmp_e ; tmp_p = true ; modelParameters_m
. mVariableStepSolver = tmp_p ; tmp_p = false ; modelParameters_m .
mIsUsingODEN = tmp_p ; tmp_p = slIsRapidAcceleratorSimulating ( ) ; val =
ssGetGlobalInitialStatesAvailable ( rtS ) ; if ( tmp_p ) { val = ( val &&
ssIsFirstInitCond ( rtS ) ) ; } modelParameters_m . mLoadInitialState = val ;
modelParameters_m . mZcDisabled = false ; diagnosticManager = (
NeuDiagnosticManager * ) rtDW . jbmhvkycuq ; diagnosticTree_j =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; i =
nesl_initialize_simulator ( ( NeslSimulator * ) rtDW . oreix54jo1 , &
modelParameters_m , diagnosticManager ) ; if ( i != 0 ) { tmp_p =
error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp_p ) { msg_j =
rtw_diagnostics_msg ( diagnosticTree_j ) ; ssSetErrorStatus ( rtS , msg_j ) ;
} } simulationData = ( NeslSimulationData * ) rtDW . fmjokqk3g2 ; time_e =
ssGetT ( rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData
-> mData -> mTime . mX = & time_e ; simulationData -> mData -> mContStates .
mN = 2 ; simulationData -> mData -> mContStates . mX = & rtX . bka1w3yj3x [ 0
] ; simulationData -> mData -> mDiscStates . mN = 1 ; simulationData -> mData
-> mDiscStates . mX = & rtDW . f3ueebc3dc ; simulationData -> mData ->
mModeVector . mN = 0 ; simulationData -> mData -> mModeVector . mX = & rtDW .
pktaxkjkog ; tmp_p = ( ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo ( rtS
) -> foundContZcEvents ) ; simulationData -> mData -> mFoundZcEvents = tmp_p
; simulationData -> mData -> mIsMajorTimeStep = ssIsMajorTimeStep ( rtS ) ;
tmp_p = ( ssGetMdlInfoPtr ( rtS ) -> mdlFlags . solverAssertCheck == 1U ) ;
simulationData -> mData -> mIsSolverAssertCheck = tmp_p ; tmp_p =
ssIsSolverCheckingCIC ( rtS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = tmp_p ; tmp_p = ssIsSolverComputingJacobian ( rtS ) ;
simulationData -> mData -> mIsComputingJacobian = tmp_p ; simulationData ->
mData -> mIsEvaluatingF0 = ( ssGetEvaluatingF0ForJacobian ( rtS ) != 0 ) ;
tmp_p = ssIsSolverRequestingReset ( rtS ) ; simulationData -> mData ->
mIsSolverRequestingReset = tmp_p ; simulationData -> mData ->
mIsModeUpdateTimeStep = ssIsModeUpdateTimeStep ( rtS ) ; tmp_c [ 0 ] = 0 ;
tmp_f [ 0 ] = rtB . f3dt3kwdyy [ 0 ] ; tmp_f [ 1 ] = rtB . f3dt3kwdyy [ 1 ] ;
tmp_f [ 2 ] = rtB . f3dt3kwdyy [ 2 ] ; tmp_f [ 3 ] = rtB . f3dt3kwdyy [ 3 ] ;
tmp_c [ 1 ] = 4 ; simulationData -> mData -> mInputValues . mN = 4 ;
simulationData -> mData -> mInputValues . mX = & tmp_f [ 0 ] ; simulationData
-> mData -> mInputOffsets . mN = 2 ; simulationData -> mData -> mInputOffsets
. mX = & tmp_c [ 0 ] ; simulationData -> mData -> mNumjacDxLo . mN = 2 ;
simulationData -> mData -> mNumjacDxLo . mX = & _rtXPerturbMin -> bka1w3yj3x
[ 0 ] ; simulationData -> mData -> mNumjacDxHi . mN = 2 ; simulationData ->
mData -> mNumjacDxHi . mX = & _rtXPerturbMax -> bka1w3yj3x [ 0 ] ;
diagnosticManager = ( NeuDiagnosticManager * ) rtDW . jbmhvkycuq ;
diagnosticTree_f = neu_diagnostic_manager_get_initial_tree (
diagnosticManager ) ; i = ne_simulator_method ( ( NeslSimulator * ) rtDW .
oreix54jo1 , NESL_SIM_NUMJAC_DX_BOUNDS , simulationData , diagnosticManager )
; if ( i != 0 ) { tmp_p = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) )
; if ( tmp_p ) { msg_f = rtw_diagnostics_msg ( diagnosticTree_f ) ;
ssSetErrorStatus ( rtS , msg_f ) ; } } tmp = nesl_lease_simulator (
 "Top_Level_Simulation/Simulation Environment/Position Actuated Robot Environment/Solver Configuration_2"
, 1 , 0 ) ; rtDW . etnlg20vgi = ( void * ) tmp ; tmp_p = pointer_is_null (
rtDW . etnlg20vgi ) ; if ( tmp_p ) { Top_Level_Simulation_66cd9431_2_gateway
( ) ; tmp = nesl_lease_simulator (
 "Top_Level_Simulation/Simulation Environment/Position Actuated Robot Environment/Solver Configuration_2"
, 1 , 0 ) ; rtDW . etnlg20vgi = ( void * ) tmp ; }
slsaSaveRawMemoryForSimTargetOP ( rtS ,
 "Top_Level_Simulation/Simulation Environment/Position Actuated Robot Environment/Solver Configuration_210"
, ( void * * ) ( & rtDW . etnlg20vgi ) , 0U * sizeof ( real_T ) ,
nesl_save_simdata , nesl_restore_simdata ) ; simulationData =
nesl_create_simulation_data ( ) ; rtDW . d05ty02jkv = ( void * )
simulationData ; diagnosticManager = rtw_create_diagnostics ( ) ; rtDW .
mc2c422l4v = ( void * ) diagnosticManager ; modelParameters_g . mSolverType =
NE_SOLVER_TYPE_ODE ; modelParameters_g . mSolverAbsTol = 0.001 ;
modelParameters_g . mSolverRelTol = 0.001 ; modelParameters_g .
mSolverModifyAbsTol = NE_MODIFY_ABS_TOL_NO ; modelParameters_g . mStartTime =
0.0 ; modelParameters_g . mLoadInitialState = false ; modelParameters_g .
mUseSimState = false ; modelParameters_g . mLinTrimCompile = false ;
modelParameters_g . mLoggingMode = SSC_LOGGING_OFF ; modelParameters_g .
mRTWModifiedTimeStamp = 6.12190689E+8 ; modelParameters_g . mZcDisabled =
false ; modelParameters_g . mUseModelRefSolver = false ; tmp_e = 0.001 ;
modelParameters_g . mSolverTolerance = tmp_e ; tmp_e = 0.0 ;
modelParameters_g . mFixedStepSize = tmp_e ; tmp_p = true ; modelParameters_g
. mVariableStepSolver = tmp_p ; tmp_p = false ; modelParameters_g .
mIsUsingODEN = tmp_p ; tmp_p = slIsRapidAcceleratorSimulating ( ) ; val =
ssGetGlobalInitialStatesAvailable ( rtS ) ; if ( tmp_p ) { val = ( val &&
ssIsFirstInitCond ( rtS ) ) ; } modelParameters_g . mLoadInitialState = val ;
modelParameters_g . mZcDisabled = false ; diagnosticManager = (
NeuDiagnosticManager * ) rtDW . mc2c422l4v ; diagnosticTree_c =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; i =
nesl_initialize_simulator ( ( NeslSimulator * ) rtDW . etnlg20vgi , &
modelParameters_g , diagnosticManager ) ; if ( i != 0 ) { tmp_p =
error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp_p ) { msg_c =
rtw_diagnostics_msg ( diagnosticTree_c ) ; ssSetErrorStatus ( rtS , msg_c ) ;
} } MdlInitialize ( ) ; } void MdlOutputs ( int_T tid ) { real_T lvb0va5rjx ;
real_T pad150qn4p ; __m128d tmp_d ; __m128d tmp_dz ; __m128d tmp_l ; __m128d
tmp_o ; NeslSimulationData * simulationData ; NeuDiagnosticManager *
diagnosticManager ; NeuDiagnosticTree * diagnosticTree ; NeuDiagnosticTree *
diagnosticTree_e ; NeuDiagnosticTree * diagnosticTree_g ; NeuDiagnosticTree *
diagnosticTree_i ; NeuDiagnosticTree * diagnosticTree_m ; NeuDiagnosticTree *
diagnosticTree_p ; char * msg ; char * msg_e ; char * msg_g ; char * msg_i ;
char * msg_m ; char * msg_p ; cwp5dxx3gq * body ; cwp5dxx3gqu * obj_e ;
fykx3ceuls * obj ; grjfkdr5ak * obj_p ; hnyeda4wkh * b_i ; hnyeda4wkh * e ;
hohltwy3pn * A ; hohltwy3pn * s ; kubhfbb3hs * Ttree ; kvqz32ufqp expl_temp ;
lg5jhfa1j5 * a ; orkdduvnogx * joint ; real_T tmp_e [ 102 ] ; real_T tmp [ 76
] ; real_T T2 [ 16 ] ; real_T akrwvfs40y [ 16 ] ; real_T out [ 16 ] ; real_T
out_p [ 16 ] ; real_T R [ 9 ] ; real_T tempR [ 9 ] ; real_T tmp_b [ 7 ] ;
real_T tmp_j [ 7 ] ; real_T u1 [ 6 ] ; real_T varargin_9 [ 6 ] ; real_T
result_data [ 4 ] ; real_T tmp_c [ 4 ] ; real_T tmp_m [ 4 ] ; real_T ct [ 3 ]
; real_T k_data ; real_T out_e ; real_T out_i ; real_T st_idx_0 ; real_T
st_idx_1 ; real_T st_idx_2 ; real_T t ; real_T time ; real_T time_b ; real_T
time_c ; real_T time_e ; real_T time_f ; real_T time_g ; real_T time_i ;
real_T time_j ; real_T time_k ; real_T time_m ; real_T time_n ; real_T time_p
; real_T varargin_1_data ; real_T varargin_2_data ; real_T y_data ; int32_T
A_p ; int32_T csz_idx_2 ; int32_T i ; int32_T j ; int32_T loop_ub ; int32_T
loop_ub_p ; int32_T m ; int32_T ntilecols ; int32_T p ; int_T tmp_i [ 21 ] ;
int_T tmp_p [ 20 ] ; int_T tmp_f [ 3 ] ; int_T tmp_n [ 3 ] ; int_T tmp_g [ 2
] ; int_T tmp_k [ 2 ] ; char_T b_varargout_2_Status_data [ 14 ] ; char_T b_p
[ 8 ] ; char_T b_e [ 7 ] ; char_T b_m [ 5 ] ; char_T b [ 4 ] ; boolean_T
singular ; ZCEventType zcEvent ; static const char_T tmp_fs [ 7 ] = { 's' ,
'u' , 'c' , 'c' , 'e' , 's' , 's' } ; static const char_T tmp_ck [ 5 ] = {
'f' , 'i' , 'x' , 'e' , 'd' } ; static const int8_T tmp_f2 [ 16 ] = { 1 , 0 ,
0 , 0 , 0 , 1 , 0 , 0 , 0 , 0 , 1 , 0 , 0 , 0 , 0 , 1 } ; static const char_T
tmp_kt [ 8 ] = { 'r' , 'e' , 'v' , 'o' , 'l' , 'u' , 't' , 'e' } ; static
const char_T tmp_lt [ 5 ] = { 'B' , 'o' , 'd' , 'y' , '7' } ; int32_T k_size
[ 3 ] ; int32_T varargin_2_size [ 3 ] ; int32_T y_size [ 3 ] ; int32_T
b_varargout_2_Status_size [ 2 ] ; int32_T exitg1 ; boolean_T exitg2 ; if (
ssIsSampleHit ( rtS , 1 , 0 ) ) { { real_T * pDataValues = ( real_T * ) rtDW
. iyonscealb . DataPtr ; real_T * pTimeValues = ( real_T * ) rtDW .
iyonscealb . TimePtr ; int_T currTimeIndex = rtDW . ah1glsmkae . PrevIndex ;
real_T t = ssGetTaskTime ( rtS , 1 ) ; if ( t >= pTimeValues [ 3100 ] ) { {
int_T elIdx ; for ( elIdx = 0 ; elIdx < 2 ; ++ elIdx ) { ( & rtB . g1wu31mqe4
[ 0 ] ) [ elIdx ] = pDataValues [ 3100 ] ; pDataValues += 3101 ; } } } else {
int numPoints , lastPoint ; FWksInfo * fromwksInfo = ( FWksInfo * ) rtDW .
iyonscealb . RSimInfoPtr ; numPoints = fromwksInfo -> nDataPoints ; lastPoint
= numPoints - 1 ; if ( t <= pTimeValues [ 0 ] ) { currTimeIndex = 0 ; } else
if ( t >= pTimeValues [ lastPoint ] ) { currTimeIndex = lastPoint - 1 ; }
else { if ( t < pTimeValues [ currTimeIndex ] ) { while ( t < pTimeValues [
currTimeIndex ] ) { currTimeIndex -- ; } } else { while ( t >= pTimeValues [
currTimeIndex + 1 ] ) { currTimeIndex ++ ; } } } rtDW . ah1glsmkae .
PrevIndex = currTimeIndex ; { real_T t1 = pTimeValues [ currTimeIndex ] ;
real_T t2 = pTimeValues [ currTimeIndex + 1 ] ; if ( t1 == t2 ) { if ( t < t1
) { { int_T elIdx ; for ( elIdx = 0 ; elIdx < 2 ; ++ elIdx ) { ( & rtB .
g1wu31mqe4 [ 0 ] ) [ elIdx ] = pDataValues [ currTimeIndex ] ; pDataValues +=
numPoints ; } } } else { { int_T elIdx ; for ( elIdx = 0 ; elIdx < 2 ; ++
elIdx ) { ( & rtB . g1wu31mqe4 [ 0 ] ) [ elIdx ] = pDataValues [
currTimeIndex + 1 ] ; pDataValues += numPoints ; } } } } else { real_T f1 = (
t2 - t ) / ( t2 - t1 ) ; real_T f2 = 1.0 - f1 ; real_T d1 ; real_T d2 ; int_T
TimeIndex = currTimeIndex ; { int_T elIdx ; for ( elIdx = 0 ; elIdx < 2 ; ++
elIdx ) { d1 = pDataValues [ TimeIndex ] ; d2 = pDataValues [ TimeIndex + 1 ]
; ( & rtB . g1wu31mqe4 [ 0 ] ) [ elIdx ] = ( real_T ) rtInterpolate ( d1 , d2
, f1 , f2 ) ; pDataValues += numPoints ; } } } } } } { if ( rtDW . gcaetr4bcc
. AQHandles && ssGetLogOutput ( rtS ) ) { sdiWriteSignal ( rtDW . gcaetr4bcc
. AQHandles , ssGetTaskTime ( rtS , 1 ) , ( char * ) & rtB . g1wu31mqe4 [ 0 ]
+ 0 ) ; } } { if ( rtDW . ajcidjpwry . AQHandles && ssGetLogOutput ( rtS ) )
{ sdiWriteSignal ( rtDW . ajcidjpwry . AQHandles , ssGetTaskTime ( rtS , 1 )
, ( char * ) & rtB . g1wu31mqe4 [ 1 ] + 0 ) ; } } } rtB . gn5waaat3n = rtX .
p3palrnzjz ; rtB . j3ss00kqoe = rtX . gncr2kcfdc ; rtB . g0s1jshae4 = rtX .
jssdeyuydp ; rtB . ej15uvzzrp = rtP . Gain_Gain * rtB . g0s1jshae4 ; rtB .
g2h4dhsdez [ 0 ] = rtB . gn5waaat3n + rtP . Constant_Value [ 0 ] ; rtB .
g2h4dhsdez [ 1 ] = rtB . j3ss00kqoe + rtP . Constant_Value [ 1 ] ; rtB .
g2h4dhsdez [ 2 ] = rtB . ej15uvzzrp + rtP . Constant_Value [ 2 ] ; if (
ssIsSampleHit ( rtS , 1 , 0 ) ) { { real_T * pDataValues = ( real_T * ) rtDW
. hfgna5tkoq . DataPtr ; real_T * pTimeValues = ( real_T * ) rtDW .
hfgna5tkoq . TimePtr ; int_T currTimeIndex = rtDW . dvzs4nrqov . PrevIndex ;
real_T t = ssGetTaskTime ( rtS , 1 ) ; if ( t >= pTimeValues [ 3100 ] ) { rtB
. byypcdwj4t = pDataValues [ 3100 ] ; } else { int numPoints , lastPoint ;
FWksInfo * fromwksInfo = ( FWksInfo * ) rtDW . hfgna5tkoq . RSimInfoPtr ;
numPoints = fromwksInfo -> nDataPoints ; lastPoint = numPoints - 1 ; if ( t
<= pTimeValues [ 0 ] ) { currTimeIndex = 0 ; } else if ( t >= pTimeValues [
lastPoint ] ) { currTimeIndex = lastPoint - 1 ; } else { if ( t < pTimeValues
[ currTimeIndex ] ) { while ( t < pTimeValues [ currTimeIndex ] ) {
currTimeIndex -- ; } } else { while ( t >= pTimeValues [ currTimeIndex + 1 ]
) { currTimeIndex ++ ; } } } rtDW . dvzs4nrqov . PrevIndex = currTimeIndex ;
{ real_T t1 = pTimeValues [ currTimeIndex ] ; real_T t2 = pTimeValues [
currTimeIndex + 1 ] ; if ( t1 == t2 ) { if ( t < t1 ) { rtB . byypcdwj4t =
pDataValues [ currTimeIndex ] ; } else { rtB . byypcdwj4t = pDataValues [
currTimeIndex + 1 ] ; } } else { real_T f1 = ( t2 - t ) / ( t2 - t1 ) ;
real_T f2 = 1.0 - f1 ; real_T d1 ; real_T d2 ; int_T TimeIndex =
currTimeIndex ; d1 = pDataValues [ TimeIndex ] ; d2 = pDataValues [ TimeIndex
+ 1 ] ; rtB . byypcdwj4t = ( real_T ) rtInterpolate ( d1 , d2 , f1 , f2 ) ;
pDataValues += numPoints ; } } } } } rtB . oxggdt53bd = rtX . e2dw3elb2f ;
rtB . a50c4odnnd = rtP . Gain_Gain_jqosi22ou2 * rtB . oxggdt53bd ; if ( rtDW
. gq5kmr5vn1 == 0.0 ) { rtDW . gq5kmr5vn1 = 1.0 ; rtX . gwlcka103e [ 0 ] =
rtB . a50c4odnnd ; rtX . gwlcka103e [ 1 ] = 0.0 ; } rtB . bxaujqvrbz [ 0 ] =
rtX . gwlcka103e [ 0 ] ; rtB . bxaujqvrbz [ 1 ] = rtX . gwlcka103e [ 1 ] ;
rtB . bxaujqvrbz [ 2 ] = ( ( rtB . a50c4odnnd - rtX . gwlcka103e [ 0 ] ) *
1000.0 - 2.0 * rtX . gwlcka103e [ 1 ] ) * 1000.0 ; rtB . bxaujqvrbz [ 3 ] =
0.0 ; if ( rtDW . bf53hkrvir == 0.0 ) { rtDW . bf53hkrvir = 1.0 ; rtX .
j0lveohajj [ 0 ] = rtB . a50c4odnnd ; rtX . j0lveohajj [ 1 ] = 0.0 ; } rtB .
be5mxu02ho [ 0 ] = rtX . j0lveohajj [ 0 ] ; rtB . be5mxu02ho [ 1 ] = rtX .
j0lveohajj [ 1 ] ; rtB . be5mxu02ho [ 2 ] = ( ( rtB . a50c4odnnd - rtX .
j0lveohajj [ 0 ] ) * 1000.0 - 2.0 * rtX . j0lveohajj [ 1 ] ) * 1000.0 ; rtB .
be5mxu02ho [ 3 ] = 0.0 ; if ( rtDW . h0arbssjyh == 0.0 ) { rtDW . h0arbssjyh
= 1.0 ; rtX . lpgahzuqj5 [ 0 ] = rtB . gn5waaat3n ; rtX . lpgahzuqj5 [ 1 ] =
0.0 ; } rtB . h0x3fs1esa [ 0 ] = rtX . lpgahzuqj5 [ 0 ] ; rtB . h0x3fs1esa [
1 ] = rtX . lpgahzuqj5 [ 1 ] ; rtB . h0x3fs1esa [ 2 ] = ( ( rtB . gn5waaat3n
- rtX . lpgahzuqj5 [ 0 ] ) * 1000.0 - 2.0 * rtX . lpgahzuqj5 [ 1 ] ) * 1000.0
; rtB . h0x3fs1esa [ 3 ] = 0.0 ; if ( rtDW . e5hdpgr2ka == 0.0 ) { rtDW .
e5hdpgr2ka = 1.0 ; rtX . kedegwhd4y [ 0 ] = rtB . j3ss00kqoe ; rtX .
kedegwhd4y [ 1 ] = 0.0 ; } rtB . frifao4c1u [ 0 ] = rtX . kedegwhd4y [ 0 ] ;
rtB . frifao4c1u [ 1 ] = rtX . kedegwhd4y [ 1 ] ; rtB . frifao4c1u [ 2 ] = (
( rtB . j3ss00kqoe - rtX . kedegwhd4y [ 0 ] ) * 1000.0 - 2.0 * rtX .
kedegwhd4y [ 1 ] ) * 1000.0 ; rtB . frifao4c1u [ 3 ] = 0.0 ; if ( rtDW .
h4l15hdscn == 0.0 ) { rtDW . h4l15hdscn = 1.0 ; rtX . kuiemveww2 [ 0 ] = rtB
. ej15uvzzrp ; rtX . kuiemveww2 [ 1 ] = 0.0 ; } rtB . nwxytavutd [ 0 ] = rtX
. kuiemveww2 [ 0 ] ; rtB . nwxytavutd [ 1 ] = rtX . kuiemveww2 [ 1 ] ; rtB .
nwxytavutd [ 2 ] = ( ( rtB . ej15uvzzrp - rtX . kuiemveww2 [ 0 ] ) * 1000.0 -
2.0 * rtX . kuiemveww2 [ 1 ] ) * 1000.0 ; rtB . nwxytavutd [ 3 ] = 0.0 ; rtB
. fstvfaddps = rtX . jdiyri4o3q ; if ( rtDW . hrhmbgcbnf == 0.0 ) { rtDW .
hrhmbgcbnf = 1.0 ; rtX . cl4axnntag [ 0 ] = rtB . fstvfaddps ; rtX .
cl4axnntag [ 1 ] = 0.0 ; } rtB . du4pvnugdj [ 0 ] = rtX . cl4axnntag [ 0 ] ;
rtB . du4pvnugdj [ 1 ] = rtX . cl4axnntag [ 1 ] ; rtB . du4pvnugdj [ 2 ] = (
( rtB . fstvfaddps - rtX . cl4axnntag [ 0 ] ) * 1000.0 - 2.0 * rtX .
cl4axnntag [ 1 ] ) * 1000.0 ; rtB . du4pvnugdj [ 3 ] = 0.0 ; if ( rtDW .
aukxopp0nd == 0.0 ) { rtDW . aukxopp0nd = 1.0 ; rtX . cgdarxxfhh [ 0 ] = rtB
. fstvfaddps ; rtX . cgdarxxfhh [ 1 ] = 0.0 ; } rtB . nmjwizdspm [ 0 ] = rtX
. cgdarxxfhh [ 0 ] ; rtB . nmjwizdspm [ 1 ] = rtX . cgdarxxfhh [ 1 ] ; rtB .
nmjwizdspm [ 2 ] = ( ( rtB . fstvfaddps - rtX . cgdarxxfhh [ 0 ] ) * 1000.0 -
2.0 * rtX . cgdarxxfhh [ 1 ] ) * 1000.0 ; rtB . nmjwizdspm [ 3 ] = 0.0 ;
ek533x1it4 ( & a , 2 ) ; if ( ssIsSampleHit ( rtS , 2 , 0 ) ) { for ( i = 0 ;
i < 6 ; i ++ ) { rtB . f3me2yahaw [ i ] = rtDW . bx3fwsg2i1 [ i ] ; } {
real_T * pDataValues = ( real_T * ) rtDW . lc4ovzpgpe . DataPtr ; real_T *
pTimeValues = ( real_T * ) rtDW . lc4ovzpgpe . TimePtr ; int_T currTimeIndex
= rtDW . gh0oec1z5w . PrevIndex ; real_T t = ssGetTaskTime ( rtS , 2 ) ; if (
t >= pTimeValues [ 3100 ] ) { { int_T elIdx ; for ( elIdx = 0 ; elIdx < 3 ;
++ elIdx ) { ( & rtB . n3i0rcd3y3 [ 0 ] ) [ elIdx ] = pDataValues [ 3100 ] ;
pDataValues += 3101 ; } } } else { int numPoints , lastPoint ; FWksInfo *
fromwksInfo = ( FWksInfo * ) rtDW . lc4ovzpgpe . RSimInfoPtr ; numPoints =
fromwksInfo -> nDataPoints ; lastPoint = numPoints - 1 ; if ( t <=
pTimeValues [ 0 ] ) { currTimeIndex = 0 ; } else if ( t >= pTimeValues [
lastPoint ] ) { currTimeIndex = lastPoint - 1 ; } else { if ( t < pTimeValues
[ currTimeIndex ] ) { while ( t < pTimeValues [ currTimeIndex ] ) {
currTimeIndex -- ; } } else { while ( t >= pTimeValues [ currTimeIndex + 1 ]
) { currTimeIndex ++ ; } } } rtDW . gh0oec1z5w . PrevIndex = currTimeIndex ;
{ real_T t1 = pTimeValues [ currTimeIndex ] ; real_T t2 = pTimeValues [
currTimeIndex + 1 ] ; if ( t1 == t2 ) { if ( t < t1 ) { { int_T elIdx ; for (
elIdx = 0 ; elIdx < 3 ; ++ elIdx ) { ( & rtB . n3i0rcd3y3 [ 0 ] ) [ elIdx ] =
pDataValues [ currTimeIndex ] ; pDataValues += numPoints ; } } } else { {
int_T elIdx ; for ( elIdx = 0 ; elIdx < 3 ; ++ elIdx ) { ( & rtB . n3i0rcd3y3
[ 0 ] ) [ elIdx ] = pDataValues [ currTimeIndex + 1 ] ; pDataValues +=
numPoints ; } } } } else { real_T f1 = ( t2 - t ) / ( t2 - t1 ) ; real_T f2 =
1.0 - f1 ; real_T d1 ; real_T d2 ; int_T TimeIndex = currTimeIndex ; { int_T
elIdx ; for ( elIdx = 0 ; elIdx < 3 ; ++ elIdx ) { d1 = pDataValues [
TimeIndex ] ; d2 = pDataValues [ TimeIndex + 1 ] ; ( & rtB . n3i0rcd3y3 [ 0 ]
) [ elIdx ] = ( real_T ) rtInterpolate ( d1 , d2 , f1 , f2 ) ; pDataValues +=
numPoints ; } } } } } } rtB . mz0xenb4ph [ 0 ] = rtB . n3i0rcd3y3 [ 0 ] ; rtB
. mz0xenb4ph [ 1 ] = rtB . n3i0rcd3y3 [ 1 ] ; rtB . mz0xenb4ph [ 2 ] = rtB .
n3i0rcd3y3 [ 2 ] ; for ( i = 0 ; i < 6 ; i ++ ) { rtB . jo2qwqwray [ i ] =
rtB . f3me2yahaw [ i ] ; } rtB . fzezqxxuee [ 0 ] = rtP . Constant1_Value [ 0
] ; rtB . fzezqxxuee [ 1 ] = rtP . Constant1_Value [ 1 ] ; rtB . fzezqxxuee [
2 ] = rtP . Constant1_Value [ 2 ] ; ct [ 0 ] = muDoubleScalarCos ( rtP .
Constant1_Value [ 0 ] ) ; ct [ 1 ] = muDoubleScalarCos ( rtP .
Constant1_Value [ 1 ] ) ; ct [ 2 ] = muDoubleScalarCos ( rtP .
Constant1_Value [ 2 ] ) ; st_idx_0 = muDoubleScalarSin ( rtB . fzezqxxuee [ 0
] ) ; st_idx_1 = muDoubleScalarSin ( rtB . fzezqxxuee [ 1 ] ) ; st_idx_2 =
muDoubleScalarSin ( rtB . fzezqxxuee [ 2 ] ) ; R [ 0 ] = ct [ 1 ] * ct [ 2 ]
; R [ 3 ] = - ct [ 1 ] * st_idx_2 ; R [ 6 ] = st_idx_1 ; R [ 1 ] = st_idx_0 *
ct [ 2 ] * st_idx_1 + ct [ 0 ] * st_idx_2 ; R [ 4 ] = ct [ 0 ] * ct [ 2 ] -
st_idx_0 * st_idx_1 * st_idx_2 ; R [ 7 ] = - ct [ 1 ] * st_idx_0 ; R [ 2 ] =
st_idx_0 * st_idx_2 - ct [ 0 ] * ct [ 2 ] * st_idx_1 ; R [ 5 ] = ct [ 0 ] *
st_idx_1 * st_idx_2 + st_idx_0 * ct [ 2 ] ; R [ 8 ] = ct [ 0 ] * ct [ 1 ] ;
memset ( & out [ 0 ] , 0 , sizeof ( real_T ) << 4U ) ; out [ 15 ] = 1.0 ; for
( i = 0 ; i < 3 ; i ++ ) { out [ i << 2 ] = R [ 3 * i ] ; out [ ( i << 2 ) +
1 ] = R [ 3 * i + 1 ] ; out [ ( i << 2 ) + 2 ] = R [ 3 * i + 2 ] ; out [ i +
12 ] = rtB . mz0xenb4ph [ i ] ; } memcpy ( & rtB . abmtpbtqen [ 0 ] , & out [
0 ] , sizeof ( real_T ) << 4U ) ; for ( i = 0 ; i < 6 ; i ++ ) { rtB .
eperym0ycj [ i ] = rtB . jo2qwqwray [ i ] ; } memcpy ( & out [ 0 ] , & rtB .
abmtpbtqen [ 0 ] , sizeof ( real_T ) << 4U ) ; for ( i = 0 ; i < 6 ; i ++ ) {
u1 [ i ] = rtP . Constant2_Value [ i ] ; varargin_9 [ i ] = rtB . eperym0ycj
[ i ] ; } obj_p = & rtDW . aurrx3wzjl . IKInternal ; if ( rtDW . aurrx3wzjl .
IKInternal . isInitialized != 1 ) { rtDW . aurrx3wzjl . IKInternal .
isSetupComplete = false ; rtDW . aurrx3wzjl . IKInternal . isInitialized = 1
; st_idx_1 = rtDW . aurrx3wzjl . IKInternal . RigidBodyTreeInternal ->
PositionNumber ; pydvmq1zho ( & A , 2 ) ; csz_idx_2 = A -> size [ 0 ] * A ->
size [ 1 ] ; A -> size [ 0 ] = ( int32_T ) st_idx_1 ; A -> size [ 1 ] = (
int32_T ) ( 2.0 * st_idx_1 ) ; o1aul0u4rr ( A , csz_idx_2 ) ; loop_ub = (
int32_T ) ( 2.0 * st_idx_1 ) * ( int32_T ) st_idx_1 ; if ( loop_ub - 1 >= 0 )
{ memset ( & A -> data [ 0 ] , 0 , ( uint32_T ) loop_ub * sizeof ( int8_T ) )
; } jolvb3jiwj ( & b_i , 1 ) ; csz_idx_2 = b_i -> size [ 0 ] ; b_i -> size [
0 ] = ( int32_T ) ( 2.0 * st_idx_1 ) ; o4pyrzarz5 ( b_i , csz_idx_2 ) ;
loop_ub = ( int32_T ) ( 2.0 * st_idx_1 ) ; if ( loop_ub - 1 >= 0 ) { memset (
& b_i -> data [ 0 ] , 0 , ( uint32_T ) loop_ub * sizeof ( real_T ) ) ; }
st_idx_0 = 1.0 ; st_idx_2 = 1.0 ; t = rtDW . aurrx3wzjl . IKInternal .
RigidBodyTreeInternal -> NumBodies ; i = ( int32_T ) t - 1 ; if ( ( int32_T )
t - 1 >= 0 ) { for ( ntilecols = 0 ; ntilecols < 5 ; ntilecols ++ ) { b_m [
ntilecols ] = tmp_ck [ ntilecols ] ; } } jolvb3jiwj ( & e , 2 ) ; pydvmq1zho
( & s , 2 ) ; for ( A_p = 0 ; A_p <= i ; A_p ++ ) { obj_e = obj_p ->
RigidBodyTreeInternal -> Bodies [ A_p ] ; joint = obj_e -> JointInternal ;
st_idx_1 = joint -> PositionNumber ; csz_idx_2 = a -> size [ 0 ] * a -> size
[ 1 ] ; a -> size [ 0 ] = 1 ; a -> size [ 1 ] = joint -> Type -> size [ 1 ] ;
gsven4ga0i ( a , csz_idx_2 ) ; loop_ub = joint -> Type -> size [ 1 ] ; for (
ntilecols = 0 ; ntilecols < loop_ub ; ntilecols ++ ) { a -> data [ ntilecols
] = joint -> Type -> data [ ntilecols ] ; } singular = false ; if ( a -> size
[ 1 ] != 5 ) { } else { ntilecols = 1 ; do { exitg1 = 0 ; if ( ntilecols - 1
< 5 ) { if ( a -> data [ ntilecols - 1 ] != b_m [ ntilecols - 1 ] ) { exitg1
= 1 ; } else { ntilecols ++ ; } } else { singular = true ; exitg1 = 1 ; } }
while ( exitg1 == 0 ) ; } if ( ! singular ) { if ( st_idx_0 > ( st_idx_0 +
st_idx_1 ) - 1.0 ) { j = 0 ; } else { j = ( int32_T ) st_idx_0 - 1 ; } if (
st_idx_2 > ( st_idx_2 + st_idx_1 ) - 1.0 ) { p = 0 ; } else { p = ( int32_T )
st_idx_2 - 1 ; } if ( st_idx_1 < 0.0 ) { t = 0.0 ; out_e = 0.0 ; } else { t =
st_idx_1 ; out_e = st_idx_1 ; } m = ( int32_T ) out_e - 1 ; csz_idx_2 = s ->
size [ 0 ] * s -> size [ 1 ] ; s -> size [ 0 ] = ( int32_T ) t ; s -> size [
1 ] = ( int32_T ) t ; o1aul0u4rr ( s , csz_idx_2 ) ; loop_ub = ( int32_T ) t
* ( int32_T ) t ; if ( loop_ub - 1 >= 0 ) { memset ( & s -> data [ 0 ] , 0 ,
( uint32_T ) loop_ub * sizeof ( int8_T ) ) ; } if ( ( int32_T ) t > 0 ) { for
( ntilecols = 0 ; ntilecols <= m ; ntilecols ++ ) { s -> data [ ntilecols + s
-> size [ 0 ] * ntilecols ] = 1 ; } } loop_ub = s -> size [ 1 ] ; for (
ntilecols = 0 ; ntilecols < loop_ub ; ntilecols ++ ) { loop_ub_p = s -> size
[ 0 ] ; for ( csz_idx_2 = 0 ; csz_idx_2 < loop_ub_p ; csz_idx_2 ++ ) { A ->
data [ ( j + csz_idx_2 ) + A -> size [ 0 ] * ( p + ntilecols ) ] = s -> data
[ s -> size [ 0 ] * ntilecols + csz_idx_2 ] ; } } if ( st_idx_0 > ( st_idx_0
+ st_idx_1 ) - 1.0 ) { j = 0 ; } else { j = ( int32_T ) st_idx_0 - 1 ; } t =
st_idx_2 + st_idx_1 ; if ( t > ( 2.0 * st_idx_1 + st_idx_2 ) - 1.0 ) { p = 0
; } else { p = ( int32_T ) t - 1 ; } if ( st_idx_1 < 0.0 ) { t = 0.0 ; } else
{ t = st_idx_1 ; } csz_idx_2 = s -> size [ 0 ] * s -> size [ 1 ] ; s -> size
[ 0 ] = ( int32_T ) t ; s -> size [ 1 ] = ( int32_T ) t ; o1aul0u4rr ( s ,
csz_idx_2 ) ; loop_ub = ( int32_T ) t * ( int32_T ) t ; if ( loop_ub - 1 >= 0
) { memset ( & s -> data [ 0 ] , 0 , ( uint32_T ) loop_ub * sizeof ( int8_T )
) ; } if ( ( int32_T ) t > 0 ) { for ( ntilecols = 0 ; ntilecols <= m ;
ntilecols ++ ) { s -> data [ ntilecols + s -> size [ 0 ] * ntilecols ] = 1 ;
} } loop_ub = s -> size [ 1 ] ; for ( ntilecols = 0 ; ntilecols < loop_ub ;
ntilecols ++ ) { loop_ub_p = s -> size [ 0 ] ; for ( csz_idx_2 = 0 ;
csz_idx_2 < loop_ub_p ; csz_idx_2 ++ ) { A -> data [ ( j + csz_idx_2 ) + A ->
size [ 0 ] * ( p + ntilecols ) ] = ( int8_T ) - s -> data [ s -> size [ 0 ] *
ntilecols + csz_idx_2 ] ; } } csz_idx_2 = e -> size [ 0 ] * e -> size [ 1 ] ;
e -> size [ 0 ] = joint -> PositionLimitsInternal -> size [ 0 ] ; e -> size [
1 ] = 2 ; o4pyrzarz5 ( e , csz_idx_2 ) ; loop_ub = joint ->
PositionLimitsInternal -> size [ 0 ] << 1 ; for ( ntilecols = 0 ; ntilecols <
loop_ub ; ntilecols ++ ) { e -> data [ ntilecols ] = joint ->
PositionLimitsInternal -> data [ ntilecols ] ; } b_i -> data [ ( int32_T )
st_idx_2 - 1 ] = e -> data [ 1 ] ; csz_idx_2 = e -> size [ 0 ] * e -> size [
1 ] ; e -> size [ 0 ] = joint -> PositionLimitsInternal -> size [ 0 ] ; e ->
size [ 1 ] = 2 ; o4pyrzarz5 ( e , csz_idx_2 ) ; loop_ub = joint ->
PositionLimitsInternal -> size [ 0 ] << 1 ; for ( ntilecols = 0 ; ntilecols <
loop_ub ; ntilecols ++ ) { e -> data [ ntilecols ] = joint ->
PositionLimitsInternal -> data [ ntilecols ] ; } b_i -> data [ ( int32_T ) (
st_idx_2 + 1.0 ) - 1 ] = - e -> data [ 0 ] ; st_idx_2 += 2.0 * st_idx_1 ; }
st_idx_0 += st_idx_1 ; } cxf0kehzkg ( & s ) ; jvu10fuanp ( & e ) ; csz_idx_2
= rtDW . aurrx3wzjl . IKInternal . Solver -> ConstraintMatrix -> size [ 0 ] *
rtDW . aurrx3wzjl . IKInternal . Solver -> ConstraintMatrix -> size [ 1 ] ;
rtDW . aurrx3wzjl . IKInternal . Solver -> ConstraintMatrix -> size [ 0 ] = A
-> size [ 0 ] ; rtDW . aurrx3wzjl . IKInternal . Solver -> ConstraintMatrix
-> size [ 1 ] = A -> size [ 1 ] ; o4pyrzarz5 ( rtDW . aurrx3wzjl . IKInternal
. Solver -> ConstraintMatrix , csz_idx_2 ) ; loop_ub = A -> size [ 0 ] * A ->
size [ 1 ] ; for ( csz_idx_2 = 0 ; csz_idx_2 < loop_ub ; csz_idx_2 ++ ) {
rtDW . aurrx3wzjl . IKInternal . Solver -> ConstraintMatrix -> data [
csz_idx_2 ] = A -> data [ csz_idx_2 ] ; } cxf0kehzkg ( & A ) ; csz_idx_2 =
rtDW . aurrx3wzjl . IKInternal . Solver -> ConstraintBound -> size [ 0 ] ;
rtDW . aurrx3wzjl . IKInternal . Solver -> ConstraintBound -> size [ 0 ] =
b_i -> size [ 0 ] ; o4pyrzarz5 ( rtDW . aurrx3wzjl . IKInternal . Solver ->
ConstraintBound , csz_idx_2 ) ; loop_ub = b_i -> size [ 0 ] ; for ( i = 0 ; i
< loop_ub ; i ++ ) { rtDW . aurrx3wzjl . IKInternal . Solver ->
ConstraintBound -> data [ i ] = b_i -> data [ i ] ; } hc1ry5yxnz ( rtDW .
aurrx3wzjl . IKInternal . RigidBodyTreeInternal , rtDW . aurrx3wzjl .
IKInternal . Limits ) ; obj_p -> _pobj0 . matlabCodegenIsDeleted = false ;
rtDW . aurrx3wzjl . IKInternal . Solver -> ExtraArgs = & obj_p -> _pobj0 ;
for ( i = 0 ; i < 36 ; i ++ ) { rtDW . aurrx3wzjl . IKInternal . Solver ->
ExtraArgs -> WeightMatrix [ i ] = 0.0 ; } rtDW . aurrx3wzjl . IKInternal .
Solver -> ExtraArgs -> Robot = rtDW . aurrx3wzjl . IKInternal .
RigidBodyTreeInternal ; memset ( & T2 [ 0 ] , 0 , sizeof ( real_T ) << 4U ) ;
T2 [ 0 ] = 1.0 ; T2 [ 5 ] = 1.0 ; T2 [ 10 ] = 1.0 ; T2 [ 15 ] = 1.0 ; for ( i
= 0 ; i < 16 ; i ++ ) { rtDW . aurrx3wzjl . IKInternal . Solver -> ExtraArgs
-> Tform [ i ] = T2 [ i ] ; } rtDW . aurrx3wzjl . IKInternal . Solver ->
ExtraArgs -> BodyName -> size [ 0 ] = 1 ; rtDW . aurrx3wzjl . IKInternal .
Solver -> ExtraArgs -> BodyName -> size [ 1 ] = 0 ; csz_idx_2 = rtDW .
aurrx3wzjl . IKInternal . Solver -> ExtraArgs -> ErrTemp -> size [ 0 ] ; rtDW
. aurrx3wzjl . IKInternal . Solver -> ExtraArgs -> ErrTemp -> size [ 0 ] = 6
; o4pyrzarz5 ( rtDW . aurrx3wzjl . IKInternal . Solver -> ExtraArgs ->
ErrTemp , csz_idx_2 ) ; for ( i = 0 ; i < 6 ; i ++ ) { rtDW . aurrx3wzjl .
IKInternal . Solver -> ExtraArgs -> ErrTemp -> data [ i ] = 0.0 ; } rtDW .
aurrx3wzjl . IKInternal . Solver -> ExtraArgs -> CostTemp = 0.0 ; csz_idx_2 =
b_i -> size [ 0 ] ; b_i -> size [ 0 ] = ( int32_T ) rtDW . aurrx3wzjl .
IKInternal . RigidBodyTreeInternal -> PositionNumber ; o4pyrzarz5 ( b_i ,
csz_idx_2 ) ; loop_ub = ( int32_T ) rtDW . aurrx3wzjl . IKInternal .
RigidBodyTreeInternal -> PositionNumber ; if ( loop_ub - 1 >= 0 ) { memset (
& b_i -> data [ 0 ] , 0 , ( uint32_T ) loop_ub * sizeof ( real_T ) ) ; }
csz_idx_2 = rtDW . aurrx3wzjl . IKInternal . Solver -> ExtraArgs -> GradTemp
-> size [ 0 ] ; rtDW . aurrx3wzjl . IKInternal . Solver -> ExtraArgs ->
GradTemp -> size [ 0 ] = b_i -> size [ 0 ] ; o4pyrzarz5 ( rtDW . aurrx3wzjl .
IKInternal . Solver -> ExtraArgs -> GradTemp , csz_idx_2 ) ; loop_ub = b_i ->
size [ 0 ] ; jvu10fuanp ( & b_i ) ; for ( i = 0 ; i < loop_ub ; i ++ ) { rtDW
. aurrx3wzjl . IKInternal . Solver -> ExtraArgs -> GradTemp -> data [ i ] =
0.0 ; } rtDW . aurrx3wzjl . IKInternal . isSetupComplete = true ; }
b5ffj5iztu ( & rtDW . aurrx3wzjl . IKInternal , out , u1 , varargin_9 , rtB .
hthfcq14pv , & rtB . cusv2amtca . Iterations , & rtB . cusv2amtca .
PoseErrorNorm , & st_idx_0 , b_varargout_2_Status_data ,
b_varargout_2_Status_size ) ; for ( i = 0 ; i < 7 ; i ++ ) { b_e [ i ] =
tmp_fs [ i ] ; } singular = false ; if ( b_varargout_2_Status_size [ 1 ] != 7
) { } else { ntilecols = 1 ; do { exitg1 = 0 ; if ( ntilecols - 1 < 7 ) { if
( b_varargout_2_Status_data [ ntilecols - 1 ] != b_e [ ntilecols - 1 ] ) {
exitg1 = 1 ; } else { ntilecols ++ ; } } else { singular = true ; exitg1 = 1
; } } while ( exitg1 == 0 ) ; } out_e = muDoubleScalarRound ( st_idx_0 ) ; if
( out_e < 65536.0 ) { if ( out_e >= 0.0 ) { rtB . cusv2amtca . ExitFlag = (
uint16_T ) out_e ; } else { rtB . cusv2amtca . ExitFlag = 0U ; } } else if (
out_e >= 65536.0 ) { rtB . cusv2amtca . ExitFlag = MAX_uint16_T ; } else {
rtB . cusv2amtca . ExitFlag = 0U ; } if ( singular ) { rtB . cusv2amtca .
Status = 1U ; } else { rtB . cusv2amtca . Status = 2U ; } for ( i = 0 ; i < 6
; i ++ ) { rtB . frj3sv0nur [ i ] = rtB . hthfcq14pv [ i ] ; } } if (
ssIsMajorTimeStep ( rtS ) ) { rtDW . l41spvcbdc = rtB . frj3sv0nur [ 0 ] ; }
if ( rtDW . fnnnyc1uga == 0.0 ) { rtDW . fnnnyc1uga = 1.0 ; rtX . njhi2kkb45
[ 0 ] = rtDW . l41spvcbdc ; rtX . njhi2kkb45 [ 1 ] = 0.0 ; } rtB . pybi00dpti
[ 0 ] = rtX . njhi2kkb45 [ 0 ] ; rtB . pybi00dpti [ 1 ] = rtX . njhi2kkb45 [
1 ] ; rtB . pybi00dpti [ 2 ] = ( ( rtDW . l41spvcbdc - rtX . njhi2kkb45 [ 0 ]
) * 100.0 - 2.0 * rtX . njhi2kkb45 [ 1 ] ) * 100.0 ; rtB . pybi00dpti [ 3 ] =
0.0 ; if ( ssIsMajorTimeStep ( rtS ) ) { rtDW . dwnerbwwhs = rtB . frj3sv0nur
[ 1 ] ; } if ( rtDW . cond3vx0se == 0.0 ) { rtDW . cond3vx0se = 1.0 ; rtX .
enzife1153 [ 0 ] = rtDW . dwnerbwwhs ; rtX . enzife1153 [ 1 ] = 0.0 ; } rtB .
k4qxluudiw [ 0 ] = rtX . enzife1153 [ 0 ] ; rtB . k4qxluudiw [ 1 ] = rtX .
enzife1153 [ 1 ] ; rtB . k4qxluudiw [ 2 ] = ( ( rtDW . dwnerbwwhs - rtX .
enzife1153 [ 0 ] ) * 100.0 - 2.0 * rtX . enzife1153 [ 1 ] ) * 100.0 ; rtB .
k4qxluudiw [ 3 ] = 0.0 ; if ( ssIsMajorTimeStep ( rtS ) ) { rtDW . lpmlshwp0j
= rtB . frj3sv0nur [ 2 ] ; } if ( rtDW . mzjt1324lw == 0.0 ) { rtDW .
mzjt1324lw = 1.0 ; rtX . m3ewvxkuda [ 0 ] = rtDW . lpmlshwp0j ; rtX .
m3ewvxkuda [ 1 ] = 0.0 ; } rtB . j1wjz4glfv [ 0 ] = rtX . m3ewvxkuda [ 0 ] ;
rtB . j1wjz4glfv [ 1 ] = rtX . m3ewvxkuda [ 1 ] ; rtB . j1wjz4glfv [ 2 ] = (
( rtDW . lpmlshwp0j - rtX . m3ewvxkuda [ 0 ] ) * 100.0 - 2.0 * rtX .
m3ewvxkuda [ 1 ] ) * 100.0 ; rtB . j1wjz4glfv [ 3 ] = 0.0 ; if (
ssIsMajorTimeStep ( rtS ) ) { rtDW . ntb1y3fl2p = rtB . frj3sv0nur [ 3 ] ; }
if ( rtDW . imkh41nhlt == 0.0 ) { rtDW . imkh41nhlt = 1.0 ; rtX . lmwqgrobiu
[ 0 ] = rtDW . ntb1y3fl2p ; rtX . lmwqgrobiu [ 1 ] = 0.0 ; } rtB . h0tqkotieo
[ 0 ] = rtX . lmwqgrobiu [ 0 ] ; rtB . h0tqkotieo [ 1 ] = rtX . lmwqgrobiu [
1 ] ; rtB . h0tqkotieo [ 2 ] = ( ( rtDW . ntb1y3fl2p - rtX . lmwqgrobiu [ 0 ]
) * 100.0 - 2.0 * rtX . lmwqgrobiu [ 1 ] ) * 100.0 ; rtB . h0tqkotieo [ 3 ] =
0.0 ; if ( ssIsMajorTimeStep ( rtS ) ) { rtDW . ngjgnzl4gl = rtB . frj3sv0nur
[ 4 ] ; } if ( rtDW . jrxplcb3hu == 0.0 ) { rtDW . jrxplcb3hu = 1.0 ; rtX .
enbehpdbh2 [ 0 ] = rtDW . ngjgnzl4gl ; rtX . enbehpdbh2 [ 1 ] = 0.0 ; } rtB .
c3nacuiddy [ 0 ] = rtX . enbehpdbh2 [ 0 ] ; rtB . c3nacuiddy [ 1 ] = rtX .
enbehpdbh2 [ 1 ] ; rtB . c3nacuiddy [ 2 ] = ( ( rtDW . ngjgnzl4gl - rtX .
enbehpdbh2 [ 0 ] ) * 100.0 - 2.0 * rtX . enbehpdbh2 [ 1 ] ) * 100.0 ; rtB .
c3nacuiddy [ 3 ] = 0.0 ; if ( ssIsMajorTimeStep ( rtS ) ) { rtDW . ktng2gyshq
= rtB . frj3sv0nur [ 5 ] ; } if ( rtDW . am3m0kfq1x == 0.0 ) { rtDW .
am3m0kfq1x = 1.0 ; rtX . pzt5vdq13u [ 0 ] = rtDW . ktng2gyshq ; rtX .
pzt5vdq13u [ 1 ] = 0.0 ; } rtB . ir3dfvqqai [ 0 ] = rtX . pzt5vdq13u [ 0 ] ;
rtB . ir3dfvqqai [ 1 ] = rtX . pzt5vdq13u [ 1 ] ; rtB . ir3dfvqqai [ 2 ] = (
( rtDW . ktng2gyshq - rtX . pzt5vdq13u [ 0 ] ) * 100.0 - 2.0 * rtX .
pzt5vdq13u [ 1 ] ) * 100.0 ; rtB . ir3dfvqqai [ 3 ] = 0.0 ; if (
ssIsSampleHit ( rtS , 1 , 0 ) ) { { real_T t = ssGetTaskTime ( rtS , 1 ) ;
real_T * pTimeValues = ( real_T * ) rtDW . begvxujstw . TimePtr ; real_T *
pDataValues = ( real_T * ) rtDW . begvxujstw . DataPtr ; int numPoints ,
lastPoint ; FWksInfo * fromwksInfo = ( FWksInfo * ) rtDW . begvxujstw .
RSimInfoPtr ; numPoints = fromwksInfo -> nDataPoints ; lastPoint = numPoints
- 1 ; if ( t < pTimeValues [ 0 ] ) { lvb0va5rjx = 0.0 ; } else if ( t ==
pTimeValues [ lastPoint ] ) { lvb0va5rjx = pDataValues [ lastPoint ] ; } else
if ( t > pTimeValues [ lastPoint ] ) { lvb0va5rjx = 0.0 ; } else { int_T
currTimeIndex = rtDW . ahwnshb1lx . PrevIndex ; if ( t < pTimeValues [
currTimeIndex ] ) { while ( t < pTimeValues [ currTimeIndex ] ) {
currTimeIndex -- ; } } else { while ( t >= pTimeValues [ currTimeIndex + 1 ]
) { currTimeIndex ++ ; } } lvb0va5rjx = pDataValues [ currTimeIndex ] ; rtDW
. ahwnshb1lx . PrevIndex = currTimeIndex ; } } rtB . otiyamgc4m = rtP .
Gain_Gain_ixhiatnuua * lvb0va5rjx ; } if ( ssIsModeUpdateTimeStep ( rtS ) ) {
zcEvent = rt_ZCFcn ( FALLING_ZERO_CROSSING , & rtPrevZCX . hqy0cwoewc , ( rtB
. otiyamgc4m ) ) ; if ( zcEvent != NO_ZCEVENT ) { singular = ( rtX .
laucphmfyy != rtP . Integrator_IC_pfyyjjaerm ) ; rtX . laucphmfyy = rtP .
Integrator_IC_pfyyjjaerm ; if ( singular ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; } } rtB . gk45ehdeau =
rtX . laucphmfyy ; rtDW . nbd2ciowee = rtB . gk45ehdeau >= rtP .
Saturation_UpperSat ? 1 : rtB . gk45ehdeau > rtP . Saturation_LowerSat ? 0 :
- 1 ; } else { rtB . gk45ehdeau = rtX . laucphmfyy ; } rtB . bocynmvqvn =
rtDW . nbd2ciowee == 1 ? rtP . Saturation_UpperSat : rtDW . nbd2ciowee == - 1
? rtP . Saturation_LowerSat : rtB . gk45ehdeau ; rtB . ggvodvqytu = rtP .
Gain_Gain_kg51a1y4n4 * rtB . bocynmvqvn ; if ( rtDW . kck0lmeenj == 0.0 ) {
rtDW . kck0lmeenj = 1.0 ; rtX . hfsj1vb0zx [ 0 ] = rtB . ggvodvqytu ; rtX .
hfsj1vb0zx [ 1 ] = 0.0 ; } rtB . o0g21chvl4 [ 0 ] = rtX . hfsj1vb0zx [ 0 ] ;
rtB . o0g21chvl4 [ 1 ] = rtX . hfsj1vb0zx [ 1 ] ; rtB . o0g21chvl4 [ 2 ] = (
( rtB . ggvodvqytu - rtX . hfsj1vb0zx [ 0 ] ) * 100.0 - 2.0 * rtX .
hfsj1vb0zx [ 1 ] ) * 100.0 ; rtB . o0g21chvl4 [ 3 ] = 0.0 ; if ( rtDW .
mlgn03udwf == 0.0 ) { rtDW . mlgn03udwf = 1.0 ; rtX . jtwggrtgak [ 0 ] = rtB
. ggvodvqytu ; rtX . jtwggrtgak [ 1 ] = 0.0 ; } rtB . pvn4sjrhtj [ 0 ] = rtX
. jtwggrtgak [ 0 ] ; rtB . pvn4sjrhtj [ 1 ] = rtX . jtwggrtgak [ 1 ] ; rtB .
pvn4sjrhtj [ 2 ] = ( ( rtB . ggvodvqytu - rtX . jtwggrtgak [ 0 ] ) * 100.0 -
2.0 * rtX . jtwggrtgak [ 1 ] ) * 100.0 ; rtB . pvn4sjrhtj [ 3 ] = 0.0 ;
simulationData = ( NeslSimulationData * ) rtDW . g3ij452qky ; time = ssGetT (
rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData
-> mTime . mX = & time ; simulationData -> mData -> mContStates . mN = 26 ;
simulationData -> mData -> mContStates . mX = & rtX . dmqxelc4g5 [ 0 ] ;
simulationData -> mData -> mDiscStates . mN = 0 ; simulationData -> mData ->
mDiscStates . mX = & rtDW . p03lurvs2x ; simulationData -> mData ->
mModeVector . mN = 0 ; simulationData -> mData -> mModeVector . mX = & rtDW .
aqvwut4gxx ; singular = ( ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo (
rtS ) -> foundContZcEvents ) ; simulationData -> mData -> mFoundZcEvents =
singular ; simulationData -> mData -> mIsMajorTimeStep = ssIsMajorTimeStep (
rtS ) ; singular = ( ssGetMdlInfoPtr ( rtS ) -> mdlFlags . solverAssertCheck
== 1U ) ; simulationData -> mData -> mIsSolverAssertCheck = singular ;
singular = ssIsSolverCheckingCIC ( rtS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = singular ; singular = ssIsSolverComputingJacobian (
rtS ) ; simulationData -> mData -> mIsComputingJacobian = singular ;
simulationData -> mData -> mIsEvaluatingF0 = ( ssGetEvaluatingF0ForJacobian (
rtS ) != 0 ) ; singular = ssIsSolverRequestingReset ( rtS ) ; simulationData
-> mData -> mIsSolverRequestingReset = singular ; simulationData -> mData ->
mIsModeUpdateTimeStep = ssIsModeUpdateTimeStep ( rtS ) ; tmp_p [ 0 ] = 0 ;
tmp [ 0 ] = rtB . bxaujqvrbz [ 0 ] ; tmp [ 1 ] = rtB . bxaujqvrbz [ 1 ] ; tmp
[ 2 ] = rtB . bxaujqvrbz [ 2 ] ; tmp [ 3 ] = rtB . bxaujqvrbz [ 3 ] ; tmp_p [
1 ] = 4 ; tmp [ 4 ] = rtB . be5mxu02ho [ 0 ] ; tmp [ 5 ] = rtB . be5mxu02ho [
1 ] ; tmp [ 6 ] = rtB . be5mxu02ho [ 2 ] ; tmp [ 7 ] = rtB . be5mxu02ho [ 3 ]
; tmp_p [ 2 ] = 8 ; tmp [ 8 ] = rtB . h0x3fs1esa [ 0 ] ; tmp [ 9 ] = rtB .
h0x3fs1esa [ 1 ] ; tmp [ 10 ] = rtB . h0x3fs1esa [ 2 ] ; tmp [ 11 ] = rtB .
h0x3fs1esa [ 3 ] ; tmp_p [ 3 ] = 12 ; tmp [ 12 ] = rtB . frifao4c1u [ 0 ] ;
tmp [ 13 ] = rtB . frifao4c1u [ 1 ] ; tmp [ 14 ] = rtB . frifao4c1u [ 2 ] ;
tmp [ 15 ] = rtB . frifao4c1u [ 3 ] ; tmp_p [ 4 ] = 16 ; tmp [ 16 ] = rtB .
nwxytavutd [ 0 ] ; tmp [ 17 ] = rtB . nwxytavutd [ 1 ] ; tmp [ 18 ] = rtB .
nwxytavutd [ 2 ] ; tmp [ 19 ] = rtB . nwxytavutd [ 3 ] ; tmp_p [ 5 ] = 20 ;
tmp [ 20 ] = rtB . du4pvnugdj [ 0 ] ; tmp [ 21 ] = rtB . du4pvnugdj [ 1 ] ;
tmp [ 22 ] = rtB . du4pvnugdj [ 2 ] ; tmp [ 23 ] = rtB . du4pvnugdj [ 3 ] ;
tmp_p [ 6 ] = 24 ; tmp [ 24 ] = rtB . nmjwizdspm [ 0 ] ; tmp [ 25 ] = rtB .
nmjwizdspm [ 1 ] ; tmp [ 26 ] = rtB . nmjwizdspm [ 2 ] ; tmp [ 27 ] = rtB .
nmjwizdspm [ 3 ] ; tmp_p [ 7 ] = 28 ; tmp [ 28 ] = rtB . pybi00dpti [ 0 ] ;
tmp [ 29 ] = rtB . pybi00dpti [ 1 ] ; tmp [ 30 ] = rtB . pybi00dpti [ 2 ] ;
tmp [ 31 ] = rtB . pybi00dpti [ 3 ] ; tmp_p [ 8 ] = 32 ; tmp [ 32 ] = rtB .
k4qxluudiw [ 0 ] ; tmp [ 33 ] = rtB . k4qxluudiw [ 1 ] ; tmp [ 34 ] = rtB .
k4qxluudiw [ 2 ] ; tmp [ 35 ] = rtB . k4qxluudiw [ 3 ] ; tmp_p [ 9 ] = 36 ;
tmp [ 36 ] = rtB . j1wjz4glfv [ 0 ] ; tmp [ 37 ] = rtB . j1wjz4glfv [ 1 ] ;
tmp [ 38 ] = rtB . j1wjz4glfv [ 2 ] ; tmp [ 39 ] = rtB . j1wjz4glfv [ 3 ] ;
tmp_p [ 10 ] = 40 ; tmp [ 40 ] = rtB . h0tqkotieo [ 0 ] ; tmp [ 41 ] = rtB .
h0tqkotieo [ 1 ] ; tmp [ 42 ] = rtB . h0tqkotieo [ 2 ] ; tmp [ 43 ] = rtB .
h0tqkotieo [ 3 ] ; tmp_p [ 11 ] = 44 ; tmp [ 44 ] = rtB . c3nacuiddy [ 0 ] ;
tmp [ 45 ] = rtB . c3nacuiddy [ 1 ] ; tmp [ 46 ] = rtB . c3nacuiddy [ 2 ] ;
tmp [ 47 ] = rtB . c3nacuiddy [ 3 ] ; tmp_p [ 12 ] = 48 ; tmp [ 48 ] = rtB .
ir3dfvqqai [ 0 ] ; tmp [ 49 ] = rtB . ir3dfvqqai [ 1 ] ; tmp [ 50 ] = rtB .
ir3dfvqqai [ 2 ] ; tmp [ 51 ] = rtB . ir3dfvqqai [ 3 ] ; tmp_p [ 13 ] = 52 ;
tmp [ 52 ] = rtB . o0g21chvl4 [ 0 ] ; tmp [ 53 ] = rtB . o0g21chvl4 [ 1 ] ;
tmp [ 54 ] = rtB . o0g21chvl4 [ 2 ] ; tmp [ 55 ] = rtB . o0g21chvl4 [ 3 ] ;
tmp_p [ 14 ] = 56 ; tmp [ 56 ] = rtB . pvn4sjrhtj [ 0 ] ; tmp [ 57 ] = rtB .
pvn4sjrhtj [ 1 ] ; tmp [ 58 ] = rtB . pvn4sjrhtj [ 2 ] ; tmp [ 59 ] = rtB .
pvn4sjrhtj [ 3 ] ; tmp_p [ 15 ] = 60 ; tmp [ 60 ] = rtB . ctfsa4jidw [ 0 ] ;
tmp [ 61 ] = rtB . ctfsa4jidw [ 1 ] ; tmp [ 62 ] = rtB . ctfsa4jidw [ 2 ] ;
tmp [ 63 ] = rtB . ctfsa4jidw [ 3 ] ; tmp_p [ 16 ] = 64 ; tmp [ 64 ] = rtB .
drqxmyuirf [ 0 ] ; tmp [ 65 ] = rtB . drqxmyuirf [ 1 ] ; tmp [ 66 ] = rtB .
drqxmyuirf [ 2 ] ; tmp [ 67 ] = rtB . drqxmyuirf [ 3 ] ; tmp_p [ 17 ] = 68 ;
tmp [ 68 ] = rtB . bylc4dlpa2 [ 0 ] ; tmp [ 69 ] = rtB . bylc4dlpa2 [ 1 ] ;
tmp [ 70 ] = rtB . bylc4dlpa2 [ 2 ] ; tmp [ 71 ] = rtB . bylc4dlpa2 [ 3 ] ;
tmp_p [ 18 ] = 72 ; tmp [ 72 ] = rtB . aj3oqjvikj [ 0 ] ; tmp [ 73 ] = rtB .
aj3oqjvikj [ 1 ] ; tmp [ 74 ] = rtB . aj3oqjvikj [ 2 ] ; tmp [ 75 ] = rtB .
aj3oqjvikj [ 3 ] ; tmp_p [ 19 ] = 76 ; simulationData -> mData ->
mInputValues . mN = 76 ; simulationData -> mData -> mInputValues . mX = & tmp
[ 0 ] ; simulationData -> mData -> mInputOffsets . mN = 20 ; simulationData
-> mData -> mInputOffsets . mX = & tmp_p [ 0 ] ; simulationData -> mData ->
mOutputs . mN = 26 ; simulationData -> mData -> mOutputs . mX = & rtB .
bwhuqsvvko [ 0 ] ; simulationData -> mData -> mTolerances . mN = 0 ;
simulationData -> mData -> mTolerances . mX = NULL ; simulationData -> mData
-> mCstateHasChanged = false ; time_p = ssGetTaskTime ( rtS , 0 ) ;
simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData -> mTime
. mX = & time_p ; simulationData -> mData -> mSampleHits . mN = 0 ;
simulationData -> mData -> mSampleHits . mX = NULL ; simulationData -> mData
-> mIsFundamentalSampleHit = false ; diagnosticManager = (
NeuDiagnosticManager * ) rtDW . ladhvtfsgz ; diagnosticTree =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; A_p =
ne_simulator_method ( ( NeslSimulator * ) rtDW . lb3wyb2dez ,
NESL_SIM_OUTPUTS , simulationData , diagnosticManager ) ; if ( A_p != 0 ) {
singular = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( singular
) { msg = rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS ,
msg ) ; } } if ( ssIsMajorTimeStep ( rtS ) && simulationData -> mData ->
mCstateHasChanged ) { ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; }
simulationData = ( NeslSimulationData * ) rtDW . cycsofdxfe ; time_e = ssGetT
( rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData
-> mTime . mX = & time_e ; simulationData -> mData -> mContStates . mN = 0 ;
simulationData -> mData -> mContStates . mX = NULL ; simulationData -> mData
-> mDiscStates . mN = 0 ; simulationData -> mData -> mDiscStates . mX = &
rtDW . ihlssyb2ha ; simulationData -> mData -> mModeVector . mN = 0 ;
simulationData -> mData -> mModeVector . mX = & rtDW . gdmfsz4u3k ; singular
= ( ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo ( rtS ) ->
foundContZcEvents ) ; simulationData -> mData -> mFoundZcEvents = singular ;
simulationData -> mData -> mIsMajorTimeStep = ssIsMajorTimeStep ( rtS ) ;
singular = ( ssGetMdlInfoPtr ( rtS ) -> mdlFlags . solverAssertCheck == 1U )
; simulationData -> mData -> mIsSolverAssertCheck = singular ; singular =
ssIsSolverCheckingCIC ( rtS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = singular ; simulationData -> mData ->
mIsComputingJacobian = false ; simulationData -> mData -> mIsEvaluatingF0 =
false ; singular = ssIsSolverRequestingReset ( rtS ) ; simulationData ->
mData -> mIsSolverRequestingReset = singular ; simulationData -> mData ->
mIsModeUpdateTimeStep = ssIsModeUpdateTimeStep ( rtS ) ; tmp_i [ 0 ] = 0 ;
tmp_e [ 0 ] = rtB . bxaujqvrbz [ 0 ] ; tmp_e [ 1 ] = rtB . bxaujqvrbz [ 1 ] ;
tmp_e [ 2 ] = rtB . bxaujqvrbz [ 2 ] ; tmp_e [ 3 ] = rtB . bxaujqvrbz [ 3 ] ;
tmp_i [ 1 ] = 4 ; tmp_e [ 4 ] = rtB . be5mxu02ho [ 0 ] ; tmp_e [ 5 ] = rtB .
be5mxu02ho [ 1 ] ; tmp_e [ 6 ] = rtB . be5mxu02ho [ 2 ] ; tmp_e [ 7 ] = rtB .
be5mxu02ho [ 3 ] ; tmp_i [ 2 ] = 8 ; tmp_e [ 8 ] = rtB . h0x3fs1esa [ 0 ] ;
tmp_e [ 9 ] = rtB . h0x3fs1esa [ 1 ] ; tmp_e [ 10 ] = rtB . h0x3fs1esa [ 2 ]
; tmp_e [ 11 ] = rtB . h0x3fs1esa [ 3 ] ; tmp_i [ 3 ] = 12 ; tmp_e [ 12 ] =
rtB . frifao4c1u [ 0 ] ; tmp_e [ 13 ] = rtB . frifao4c1u [ 1 ] ; tmp_e [ 14 ]
= rtB . frifao4c1u [ 2 ] ; tmp_e [ 15 ] = rtB . frifao4c1u [ 3 ] ; tmp_i [ 4
] = 16 ; tmp_e [ 16 ] = rtB . nwxytavutd [ 0 ] ; tmp_e [ 17 ] = rtB .
nwxytavutd [ 1 ] ; tmp_e [ 18 ] = rtB . nwxytavutd [ 2 ] ; tmp_e [ 19 ] = rtB
. nwxytavutd [ 3 ] ; tmp_i [ 5 ] = 20 ; tmp_e [ 20 ] = rtB . du4pvnugdj [ 0 ]
; tmp_e [ 21 ] = rtB . du4pvnugdj [ 1 ] ; tmp_e [ 22 ] = rtB . du4pvnugdj [ 2
] ; tmp_e [ 23 ] = rtB . du4pvnugdj [ 3 ] ; tmp_i [ 6 ] = 24 ; tmp_e [ 24 ] =
rtB . nmjwizdspm [ 0 ] ; tmp_e [ 25 ] = rtB . nmjwizdspm [ 1 ] ; tmp_e [ 26 ]
= rtB . nmjwizdspm [ 2 ] ; tmp_e [ 27 ] = rtB . nmjwizdspm [ 3 ] ; tmp_i [ 7
] = 28 ; tmp_e [ 28 ] = rtB . pybi00dpti [ 0 ] ; tmp_e [ 29 ] = rtB .
pybi00dpti [ 1 ] ; tmp_e [ 30 ] = rtB . pybi00dpti [ 2 ] ; tmp_e [ 31 ] = rtB
. pybi00dpti [ 3 ] ; tmp_i [ 8 ] = 32 ; tmp_e [ 32 ] = rtB . k4qxluudiw [ 0 ]
; tmp_e [ 33 ] = rtB . k4qxluudiw [ 1 ] ; tmp_e [ 34 ] = rtB . k4qxluudiw [ 2
] ; tmp_e [ 35 ] = rtB . k4qxluudiw [ 3 ] ; tmp_i [ 9 ] = 36 ; tmp_e [ 36 ] =
rtB . j1wjz4glfv [ 0 ] ; tmp_e [ 37 ] = rtB . j1wjz4glfv [ 1 ] ; tmp_e [ 38 ]
= rtB . j1wjz4glfv [ 2 ] ; tmp_e [ 39 ] = rtB . j1wjz4glfv [ 3 ] ; tmp_i [ 10
] = 40 ; tmp_e [ 40 ] = rtB . h0tqkotieo [ 0 ] ; tmp_e [ 41 ] = rtB .
h0tqkotieo [ 1 ] ; tmp_e [ 42 ] = rtB . h0tqkotieo [ 2 ] ; tmp_e [ 43 ] = rtB
. h0tqkotieo [ 3 ] ; tmp_i [ 11 ] = 44 ; tmp_e [ 44 ] = rtB . c3nacuiddy [ 0
] ; tmp_e [ 45 ] = rtB . c3nacuiddy [ 1 ] ; tmp_e [ 46 ] = rtB . c3nacuiddy [
2 ] ; tmp_e [ 47 ] = rtB . c3nacuiddy [ 3 ] ; tmp_i [ 12 ] = 48 ; tmp_e [ 48
] = rtB . ir3dfvqqai [ 0 ] ; tmp_e [ 49 ] = rtB . ir3dfvqqai [ 1 ] ; tmp_e [
50 ] = rtB . ir3dfvqqai [ 2 ] ; tmp_e [ 51 ] = rtB . ir3dfvqqai [ 3 ] ; tmp_i
[ 13 ] = 52 ; tmp_e [ 52 ] = rtB . o0g21chvl4 [ 0 ] ; tmp_e [ 53 ] = rtB .
o0g21chvl4 [ 1 ] ; tmp_e [ 54 ] = rtB . o0g21chvl4 [ 2 ] ; tmp_e [ 55 ] = rtB
. o0g21chvl4 [ 3 ] ; tmp_i [ 14 ] = 56 ; tmp_e [ 56 ] = rtB . pvn4sjrhtj [ 0
] ; tmp_e [ 57 ] = rtB . pvn4sjrhtj [ 1 ] ; tmp_e [ 58 ] = rtB . pvn4sjrhtj [
2 ] ; tmp_e [ 59 ] = rtB . pvn4sjrhtj [ 3 ] ; tmp_i [ 15 ] = 60 ; tmp_e [ 60
] = rtB . ctfsa4jidw [ 0 ] ; tmp_e [ 61 ] = rtB . ctfsa4jidw [ 1 ] ; tmp_e [
62 ] = rtB . ctfsa4jidw [ 2 ] ; tmp_e [ 63 ] = rtB . ctfsa4jidw [ 3 ] ; tmp_i
[ 16 ] = 64 ; tmp_e [ 64 ] = rtB . drqxmyuirf [ 0 ] ; tmp_e [ 65 ] = rtB .
drqxmyuirf [ 1 ] ; tmp_e [ 66 ] = rtB . drqxmyuirf [ 2 ] ; tmp_e [ 67 ] = rtB
. drqxmyuirf [ 3 ] ; tmp_i [ 17 ] = 68 ; tmp_e [ 68 ] = rtB . bylc4dlpa2 [ 0
] ; tmp_e [ 69 ] = rtB . bylc4dlpa2 [ 1 ] ; tmp_e [ 70 ] = rtB . bylc4dlpa2 [
2 ] ; tmp_e [ 71 ] = rtB . bylc4dlpa2 [ 3 ] ; tmp_i [ 18 ] = 72 ; tmp_e [ 72
] = rtB . aj3oqjvikj [ 0 ] ; tmp_e [ 73 ] = rtB . aj3oqjvikj [ 1 ] ; tmp_e [
74 ] = rtB . aj3oqjvikj [ 2 ] ; tmp_e [ 75 ] = rtB . aj3oqjvikj [ 3 ] ; tmp_i
[ 19 ] = 76 ; memcpy ( & tmp_e [ 76 ] , & rtB . bwhuqsvvko [ 0 ] , 26U *
sizeof ( real_T ) ) ; tmp_i [ 20 ] = 102 ; simulationData -> mData ->
mInputValues . mN = 102 ; simulationData -> mData -> mInputValues . mX = &
tmp_e [ 0 ] ; simulationData -> mData -> mInputOffsets . mN = 21 ;
simulationData -> mData -> mInputOffsets . mX = & tmp_i [ 0 ] ;
simulationData -> mData -> mOutputs . mN = 18 ; simulationData -> mData ->
mOutputs . mX = & rtB . fslwmfbg4z [ 0 ] ; simulationData -> mData ->
mTolerances . mN = 0 ; simulationData -> mData -> mTolerances . mX = NULL ;
simulationData -> mData -> mCstateHasChanged = false ; time_i = ssGetTaskTime
( rtS , 0 ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData ->
mData -> mTime . mX = & time_i ; simulationData -> mData -> mSampleHits . mN
= 0 ; simulationData -> mData -> mSampleHits . mX = NULL ; simulationData ->
mData -> mIsFundamentalSampleHit = false ; diagnosticManager = (
NeuDiagnosticManager * ) rtDW . exuhvzpgsm ; diagnosticTree_p =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; A_p =
ne_simulator_method ( ( NeslSimulator * ) rtDW . ccmnpib3ig ,
NESL_SIM_OUTPUTS , simulationData , diagnosticManager ) ; if ( A_p != 0 ) {
singular = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( singular
) { msg_p = rtw_diagnostics_msg ( diagnosticTree_p ) ; ssSetErrorStatus ( rtS
, msg_p ) ; } } if ( ssIsMajorTimeStep ( rtS ) && simulationData -> mData ->
mCstateHasChanged ) { ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; }
if ( ssIsModeUpdateTimeStep ( rtS ) ) { rtDW . eisab1mvjn = ( rtB .
fslwmfbg4z [ 13 ] >= 0.0 ) ; } rtB . o5sctoydmq = rtDW . eisab1mvjn > 0 ? rtB
. fslwmfbg4z [ 13 ] : - rtB . fslwmfbg4z [ 13 ] ; if ( ssIsModeUpdateTimeStep
( rtS ) ) { rtDW . myukt1dkx2 = ( rtB . o5sctoydmq > rtP . Switch_Threshold )
; } if ( rtDW . myukt1dkx2 ) { rtB . i4wqff4ppm [ 0 ] = rtB . fslwmfbg4z [ 12
] ; rtB . i4wqff4ppm [ 1 ] = rtB . fslwmfbg4z [ 13 ] ; } else { rtB .
i4wqff4ppm [ 0 ] = rtB . fslwmfbg4z [ 14 ] ; rtB . i4wqff4ppm [ 1 ] = rtB .
fslwmfbg4z [ 15 ] ; } rtB . ar0mgehmqp = rtB . fslwmfbg4z [ 10 ] + rtB .
fslwmfbg4z [ 11 ] ; rtB . aldmgrwo2q = rtB . fslwmfbg4z [ 4 ] ; rtB .
bldctwoduh = rtB . fslwmfbg4z [ 5 ] ; rtB . co1eoce0xn = rtB . fslwmfbg4z [ 6
] ; rtB . essvneazxf = rtB . fslwmfbg4z [ 7 ] ; rtB . b2pkbgkxau = rtB .
fslwmfbg4z [ 8 ] ; rtB . m52iku3bf5 = rtB . fslwmfbg4z [ 9 ] ; rtB .
jgm1aa3nzs [ 0 ] = rtB . aldmgrwo2q ; rtB . jgm1aa3nzs [ 1 ] = rtB .
bldctwoduh ; rtB . jgm1aa3nzs [ 2 ] = rtB . co1eoce0xn ; rtB . jgm1aa3nzs [ 3
] = rtB . essvneazxf ; rtB . jgm1aa3nzs [ 4 ] = rtB . b2pkbgkxau ; rtB .
jgm1aa3nzs [ 5 ] = rtB . m52iku3bf5 ; obj = & rtDW . okj1p03aot .
TreeInternal ; st_idx_1 = rtDW . okj1p03aot . TreeInternal . NumBodies ; for
( i = 0 ; i < 16 ; i ++ ) { expl_temp . f1 [ i ] = tmp_f2 [ i ] ; }
pmm1khoijv ( & Ttree , 2 ) ; csz_idx_2 = Ttree -> size [ 0 ] * Ttree -> size
[ 1 ] ; Ttree -> size [ 0 ] = 1 ; Ttree -> size [ 1 ] = ( int32_T ) st_idx_1
; plhqacaehj ( Ttree , csz_idx_2 ) ; if ( ( int32_T ) st_idx_1 != 0 ) {
ntilecols = ( int32_T ) st_idx_1 - 1 ; for ( A_p = 0 ; A_p <= ntilecols ; A_p
++ ) { Ttree -> data [ A_p ] = expl_temp ; } } st_idx_0 = 1.0 ; m = ( int32_T
) st_idx_1 - 1 ; if ( ( int32_T ) st_idx_1 - 1 >= 0 ) { for ( i = 0 ; i < 5 ;
i ++ ) { b_m [ i ] = tmp_ck [ i ] ; } } for ( A_p = 0 ; A_p <= m ; A_p ++ ) {
body = obj -> Bodies [ A_p ] ; st_idx_1 = body -> JointInternal .
PositionNumber ; t = ( st_idx_0 + st_idx_1 ) - 1.0 ; if ( st_idx_0 > t ) { j
= 0 ; i = 0 ; } else { j = ( int32_T ) st_idx_0 - 1 ; i = ( int32_T ) t ; }
for ( ntilecols = 0 ; ntilecols < 16 ; ntilecols ++ ) { out [ ntilecols ] =
body -> JointInternal . JointToParentTransform [ ntilecols ] ; } csz_idx_2 =
a -> size [ 0 ] * a -> size [ 1 ] ; a -> size [ 0 ] = 1 ; a -> size [ 1 ] =
body -> JointInternal . Type -> size [ 1 ] ; gsven4ga0i ( a , csz_idx_2 ) ;
loop_ub = body -> JointInternal . Type -> size [ 1 ] ; for ( ntilecols = 0 ;
ntilecols < loop_ub ; ntilecols ++ ) { a -> data [ ntilecols ] = body ->
JointInternal . Type -> data [ ntilecols ] ; } singular = false ; if ( a ->
size [ 1 ] != 5 ) { } else { ntilecols = 1 ; do { exitg1 = 0 ; if ( ntilecols
- 1 < 5 ) { if ( a -> data [ ntilecols - 1 ] != b_m [ ntilecols - 1 ] ) {
exitg1 = 1 ; } else { ntilecols ++ ; } } else { singular = true ; exitg1 = 1
; } } while ( exitg1 == 0 ) ; } if ( singular ) { st_idx_2 = 0.0 ; } else {
for ( ntilecols = 0 ; ntilecols < 8 ; ntilecols ++ ) { b_p [ ntilecols ] =
tmp_kt [ ntilecols ] ; } if ( a -> size [ 1 ] != 8 ) { } else { ntilecols = 1
; do { exitg1 = 0 ; if ( ntilecols - 1 < 8 ) { if ( a -> data [ ntilecols - 1
] != b_p [ ntilecols - 1 ] ) { exitg1 = 1 ; } else { ntilecols ++ ; } } else
{ singular = true ; exitg1 = 1 ; } } while ( exitg1 == 0 ) ; } if ( singular
) { st_idx_2 = 1.0 ; } else { st_idx_2 = - 1.0 ; } } switch ( ( int32_T )
st_idx_2 ) { case 0 : memset ( & T2 [ 0 ] , 0 , sizeof ( real_T ) << 4U ) ;
T2 [ 0 ] = 1.0 ; T2 [ 5 ] = 1.0 ; T2 [ 10 ] = 1.0 ; T2 [ 15 ] = 1.0 ; break ;
case 1 : d20ewc4t52 ( & body -> JointInternal , ct ) ; result_data [ 0 ] = ct
[ 0 ] ; result_data [ 1 ] = ct [ 1 ] ; result_data [ 2 ] = ct [ 2 ] ; if ( (
i - j != 0 ) - 1 >= 0 ) { result_data [ 3 ] = rtB . jgm1aa3nzs [ j ] ; }
st_idx_2 = result_data [ 0 ] ; ct [ 0 ] = st_idx_2 * st_idx_2 ; st_idx_2 =
result_data [ 1 ] ; ct [ 1 ] = st_idx_2 * st_idx_2 ; st_idx_2 = result_data [
2 ] ; st_idx_2 = 1.0 / muDoubleScalarSqrt ( ( ct [ 0 ] + ct [ 1 ] ) +
st_idx_2 * st_idx_2 ) ; ct [ 0 ] = result_data [ 0 ] * st_idx_2 ; ct [ 1 ] =
result_data [ 1 ] * st_idx_2 ; ct [ 2 ] = result_data [ 2 ] * st_idx_2 ; t =
result_data [ 3 ] ; st_idx_2 = muDoubleScalarCos ( t ) ; t =
muDoubleScalarSin ( t ) ; tempR [ 0 ] = ct [ 0 ] * ct [ 0 ] * ( 1.0 -
st_idx_2 ) + st_idx_2 ; tempR [ 1 ] = ct [ 0 ] * ct [ 1 ] * ( 1.0 - st_idx_2
) - ct [ 2 ] * t ; tempR [ 2 ] = ct [ 0 ] * ct [ 2 ] * ( 1.0 - st_idx_2 ) +
ct [ 1 ] * t ; tempR [ 3 ] = ct [ 0 ] * ct [ 1 ] * ( 1.0 - st_idx_2 ) + ct [
2 ] * t ; tempR [ 4 ] = ct [ 1 ] * ct [ 1 ] * ( 1.0 - st_idx_2 ) + st_idx_2 ;
tempR [ 5 ] = ct [ 1 ] * ct [ 2 ] * ( 1.0 - st_idx_2 ) - ct [ 0 ] * t ; tempR
[ 6 ] = ct [ 0 ] * ct [ 2 ] * ( 1.0 - st_idx_2 ) - ct [ 1 ] * t ; tempR [ 7 ]
= ct [ 1 ] * ct [ 2 ] * ( 1.0 - st_idx_2 ) + ct [ 0 ] * t ; tempR [ 8 ] = ct
[ 2 ] * ct [ 2 ] * ( 1.0 - st_idx_2 ) + st_idx_2 ; for ( ntilecols = 0 ;
ntilecols < 3 ; ntilecols ++ ) { R [ ntilecols ] = tempR [ ntilecols * 3 ] ;
R [ ntilecols + 3 ] = tempR [ ntilecols * 3 + 1 ] ; R [ ntilecols + 6 ] =
tempR [ ntilecols * 3 + 2 ] ; } memset ( & T2 [ 0 ] , 0 , sizeof ( real_T )
<< 4U ) ; for ( i = 0 ; i < 3 ; i ++ ) { T2 [ i << 2 ] = R [ 3 * i ] ; T2 [ (
i << 2 ) + 1 ] = R [ 3 * i + 1 ] ; T2 [ ( i << 2 ) + 2 ] = R [ 3 * i + 2 ] ;
} T2 [ 15 ] = 1.0 ; break ; default : d20ewc4t52 ( & body -> JointInternal ,
ct ) ; memset ( & tempR [ 0 ] , 0 , 9U * sizeof ( real_T ) ) ; tempR [ 0 ] =
1.0 ; tempR [ 4 ] = 1.0 ; tempR [ 8 ] = 1.0 ; out_e = rtB . jgm1aa3nzs [ j ]
; for ( i = 0 ; i < 3 ; i ++ ) { T2 [ i << 2 ] = tempR [ 3 * i ] ; T2 [ ( i
<< 2 ) + 1 ] = tempR [ 3 * i + 1 ] ; T2 [ ( i << 2 ) + 2 ] = tempR [ 3 * i +
2 ] ; T2 [ i + 12 ] = ct [ i ] * out_e ; } T2 [ 3 ] = 0.0 ; T2 [ 7 ] = 0.0 ;
T2 [ 11 ] = 0.0 ; T2 [ 15 ] = 1.0 ; break ; } for ( i = 0 ; i < 16 ; i ++ ) {
akrwvfs40y [ i ] = body -> JointInternal . ChildToJointTransform [ i ] ; }
for ( i = 0 ; i < 4 ; i ++ ) { st_idx_2 = out [ i + 4 ] ; t = out [ i ] ;
out_e = out [ i + 8 ] ; out_i = out [ i + 12 ] ; for ( ntilecols = 0 ;
ntilecols < 4 ; ntilecols ++ ) { out_p [ i + ( ntilecols << 2 ) ] = ( ( T2 [
( ntilecols << 2 ) + 1 ] * st_idx_2 + T2 [ ntilecols << 2 ] * t ) + T2 [ (
ntilecols << 2 ) + 2 ] * out_e ) + T2 [ ( ntilecols << 2 ) + 3 ] * out_i ; }
st_idx_2 = out_p [ i + 4 ] ; t = out_p [ i ] ; out_e = out_p [ i + 8 ] ;
out_i = out_p [ i + 12 ] ; for ( ntilecols = 0 ; ntilecols < 4 ; ntilecols ++
) { Ttree -> data [ A_p ] . f1 [ i + ( ntilecols << 2 ) ] = ( ( akrwvfs40y [
( ntilecols << 2 ) + 1 ] * st_idx_2 + akrwvfs40y [ ntilecols << 2 ] * t ) +
akrwvfs40y [ ( ntilecols << 2 ) + 2 ] * out_e ) + akrwvfs40y [ ( ntilecols <<
2 ) + 3 ] * out_i ; } } st_idx_0 += st_idx_1 ; if ( body -> ParentIndex > 0.0
) { for ( i = 0 ; i < 16 ; i ++ ) { out [ i ] = Ttree -> data [ ( int32_T )
body -> ParentIndex - 1 ] . f1 [ i ] ; } for ( i = 0 ; i < 4 ; i ++ ) {
st_idx_2 = out [ i + 4 ] ; t = out [ i ] ; out_e = out [ i + 8 ] ; out_i =
out [ i + 12 ] ; for ( ntilecols = 0 ; ntilecols < 4 ; ntilecols ++ ) { out_p
[ i + ( ntilecols << 2 ) ] = ( ( Ttree -> data [ A_p ] . f1 [ ( ntilecols <<
2 ) + 1 ] * st_idx_2 + Ttree -> data [ A_p ] . f1 [ ntilecols << 2 ] * t ) +
Ttree -> data [ A_p ] . f1 [ ( ntilecols << 2 ) + 2 ] * out_e ) + Ttree ->
data [ A_p ] . f1 [ ( ntilecols << 2 ) + 3 ] * out_i ; } } memcpy ( & Ttree
-> data [ A_p ] . f1 [ 0 ] , & out_p [ 0 ] , sizeof ( real_T ) << 4U ) ; } }
st_idx_0 = - 1.0 ; csz_idx_2 = a -> size [ 0 ] * a -> size [ 1 ] ; a -> size
[ 0 ] = 1 ; a -> size [ 1 ] = obj -> Base . NameInternal -> size [ 1 ] ;
gsven4ga0i ( a , csz_idx_2 ) ; loop_ub = obj -> Base . NameInternal -> size [
1 ] ; for ( i = 0 ; i < loop_ub ; i ++ ) { a -> data [ i ] = obj -> Base .
NameInternal -> data [ i ] ; } b [ 0 ] = 'B' ; b [ 1 ] = 'a' ; b [ 2 ] = 's'
; b [ 3 ] = 'e' ; singular = false ; if ( a -> size [ 1 ] != 4 ) { } else {
ntilecols = 1 ; do { exitg1 = 0 ; if ( ntilecols - 1 < 4 ) { if ( a -> data [
ntilecols - 1 ] != b [ ntilecols - 1 ] ) { exitg1 = 1 ; } else { ntilecols ++
; } } else { singular = true ; exitg1 = 1 ; } } while ( exitg1 == 0 ) ; } if
( singular ) { st_idx_0 = 0.0 ; } else { st_idx_2 = rtDW . okj1p03aot .
TreeInternal . NumBodies ; A_p = 0 ; exitg2 = false ; while ( ( ! exitg2 ) &&
( A_p <= ( int32_T ) st_idx_2 - 1 ) ) { body = obj -> Bodies [ A_p ] ;
csz_idx_2 = a -> size [ 0 ] * a -> size [ 1 ] ; a -> size [ 0 ] = 1 ; a ->
size [ 1 ] = body -> NameInternal -> size [ 1 ] ; gsven4ga0i ( a , csz_idx_2
) ; loop_ub = body -> NameInternal -> size [ 1 ] ; for ( i = 0 ; i < loop_ub
; i ++ ) { a -> data [ i ] = body -> NameInternal -> data [ i ] ; } b [ 0 ] =
'B' ; b [ 1 ] = 'a' ; b [ 2 ] = 's' ; b [ 3 ] = 'e' ; if ( a -> size [ 1 ] !=
4 ) { } else { ntilecols = 1 ; do { exitg1 = 0 ; if ( ntilecols - 1 < 4 ) {
if ( a -> data [ ntilecols - 1 ] != b [ ntilecols - 1 ] ) { exitg1 = 1 ; }
else { ntilecols ++ ; } } else { singular = true ; exitg1 = 1 ; } } while (
exitg1 == 0 ) ; } if ( singular ) { st_idx_0 = ( real_T ) A_p + 1.0 ; exitg2
= true ; } else { A_p ++ ; } } } if ( st_idx_0 == 0.0 ) { memset ( & out [ 0
] , 0 , sizeof ( real_T ) << 4U ) ; out [ 0 ] = 1.0 ; out [ 5 ] = 1.0 ; out [
10 ] = 1.0 ; out [ 15 ] = 1.0 ; } else { for ( i = 0 ; i < 16 ; i ++ ) { out
[ i ] = Ttree -> data [ ( int32_T ) st_idx_0 - 1 ] . f1 [ i ] ; } } st_idx_0
= - 1.0 ; csz_idx_2 = a -> size [ 0 ] * a -> size [ 1 ] ; a -> size [ 0 ] = 1
; a -> size [ 1 ] = obj -> Base . NameInternal -> size [ 1 ] ; gsven4ga0i ( a
, csz_idx_2 ) ; loop_ub = obj -> Base . NameInternal -> size [ 1 ] ; for ( i
= 0 ; i < loop_ub ; i ++ ) { a -> data [ i ] = obj -> Base . NameInternal ->
data [ i ] ; } for ( i = 0 ; i < 5 ; i ++ ) { b_m [ i ] = tmp_lt [ i ] ; }
singular = false ; if ( a -> size [ 1 ] != 5 ) { } else { ntilecols = 1 ; do
{ exitg1 = 0 ; if ( ntilecols - 1 < 5 ) { if ( a -> data [ ntilecols - 1 ] !=
b_m [ ntilecols - 1 ] ) { exitg1 = 1 ; } else { ntilecols ++ ; } } else {
singular = true ; exitg1 = 1 ; } } while ( exitg1 == 0 ) ; } if ( singular )
{ st_idx_0 = 0.0 ; } else { st_idx_2 = rtDW . okj1p03aot . TreeInternal .
NumBodies ; A_p = 0 ; exitg2 = false ; while ( ( ! exitg2 ) && ( A_p <= (
int32_T ) st_idx_2 - 1 ) ) { body = obj -> Bodies [ A_p ] ; csz_idx_2 = a ->
size [ 0 ] * a -> size [ 1 ] ; a -> size [ 0 ] = 1 ; a -> size [ 1 ] = body
-> NameInternal -> size [ 1 ] ; gsven4ga0i ( a , csz_idx_2 ) ; loop_ub = body
-> NameInternal -> size [ 1 ] ; for ( i = 0 ; i < loop_ub ; i ++ ) { a ->
data [ i ] = body -> NameInternal -> data [ i ] ; } for ( i = 0 ; i < 5 ; i
++ ) { b_m [ i ] = tmp_lt [ i ] ; } if ( a -> size [ 1 ] != 5 ) { } else {
ntilecols = 1 ; do { exitg1 = 0 ; if ( ntilecols - 1 < 5 ) { if ( a -> data [
ntilecols - 1 ] != b_m [ ntilecols - 1 ] ) { exitg1 = 1 ; } else { ntilecols
++ ; } } else { singular = true ; exitg1 = 1 ; } } while ( exitg1 == 0 ) ; }
if ( singular ) { st_idx_0 = ( real_T ) A_p + 1.0 ; exitg2 = true ; } else {
A_p ++ ; } } } dqu5smbks1 ( & a ) ; if ( st_idx_0 == 0.0 ) { memset ( & T2 [
0 ] , 0 , sizeof ( real_T ) << 4U ) ; T2 [ 0 ] = 1.0 ; T2 [ 5 ] = 1.0 ; T2 [
10 ] = 1.0 ; T2 [ 15 ] = 1.0 ; } else { for ( i = 0 ; i < 16 ; i ++ ) { T2 [
i ] = Ttree -> data [ ( int32_T ) st_idx_0 - 1 ] . f1 [ i ] ; } } cilf3n2fri
( & Ttree ) ; for ( i = 0 ; i < 3 ; i ++ ) { R [ 3 * i ] = T2 [ i ] ; R [ 3 *
i + 1 ] = T2 [ i + 4 ] ; R [ 3 * i + 2 ] = T2 [ i + 8 ] ; } for ( i = 0 ; i <
9 ; i ++ ) { tempR [ i ] = - R [ i ] ; } st_idx_0 = T2 [ 13 ] ; st_idx_1 = T2
[ 12 ] ; st_idx_2 = T2 [ 14 ] ; for ( i = 0 ; i < 3 ; i ++ ) { T2 [ i << 2 ]
= R [ 3 * i ] ; T2 [ ( i << 2 ) + 1 ] = R [ 3 * i + 1 ] ; T2 [ ( i << 2 ) + 2
] = R [ 3 * i + 2 ] ; T2 [ i + 12 ] = ( tempR [ i + 3 ] * st_idx_0 + tempR [
i ] * st_idx_1 ) + tempR [ i + 6 ] * st_idx_2 ; } T2 [ 3 ] = 0.0 ; T2 [ 7 ] =
0.0 ; T2 [ 11 ] = 0.0 ; T2 [ 15 ] = 1.0 ; for ( i = 0 ; i < 4 ; i ++ ) {
st_idx_2 = out [ ( i << 2 ) + 1 ] ; t = out [ i << 2 ] ; out_e = out [ ( i <<
2 ) + 2 ] ; out_i = out [ ( i << 2 ) + 3 ] ; for ( ntilecols = 0 ; ntilecols
<= 2 ; ntilecols += 2 ) { tmp_l = _mm_loadu_pd ( & T2 [ ntilecols + 4 ] ) ;
tmp_d = _mm_loadu_pd ( & T2 [ ntilecols ] ) ; tmp_o = _mm_loadu_pd ( & T2 [
ntilecols + 8 ] ) ; tmp_dz = _mm_loadu_pd ( & T2 [ ntilecols + 12 ] ) ;
_mm_storeu_pd ( & akrwvfs40y [ ntilecols + ( i << 2 ) ] , _mm_add_pd (
_mm_add_pd ( _mm_add_pd ( _mm_mul_pd ( _mm_set1_pd ( st_idx_2 ) , tmp_l ) ,
_mm_mul_pd ( _mm_set1_pd ( t ) , tmp_d ) ) , _mm_mul_pd ( _mm_set1_pd ( out_e
) , tmp_o ) ) , _mm_mul_pd ( _mm_set1_pd ( out_i ) , tmp_dz ) ) ) ; } }
st_idx_0 = akrwvfs40y [ 10 ] * akrwvfs40y [ 10 ] + akrwvfs40y [ 9 ] *
akrwvfs40y [ 9 ] ; singular = ( st_idx_0 < 2.2204460492503131E-15 ) ;
st_idx_0 = muDoubleScalarSqrt ( st_idx_0 ) ; ct [ 0 ] = muDoubleScalarAtan2 (
akrwvfs40y [ 4 ] , akrwvfs40y [ 0 ] ) ; ct [ 1 ] = muDoubleScalarAtan2 ( -
akrwvfs40y [ 8 ] , st_idx_0 ) ; ct [ 2 ] = muDoubleScalarAtan2 ( akrwvfs40y [
9 ] , akrwvfs40y [ 10 ] ) ; if ( singular ) { A_p = 0 ; for ( i = 0 ; i < 1 ;
i ++ ) { A_p ++ ; } ntilecols = A_p ; A_p = 0 ; for ( i = 0 ; i < 1 ; i ++ )
{ A_p ++ ; } csz_idx_2 = A_p ; if ( A_p - 1 >= 0 ) { y_data = - akrwvfs40y [
1 ] ; } A_p = 0 ; for ( i = 0 ; i < 1 ; i ++ ) { A_p ++ ; } if ( csz_idx_2 <=
A_p ) { } else { csz_idx_2 = 0 ; } if ( csz_idx_2 - 1 >= 0 ) {
varargin_1_data = muDoubleScalarAtan2 ( y_data , akrwvfs40y [ 5 ] ) ; } A_p =
0 ; for ( i = 0 ; i < 1 ; i ++ ) { A_p ++ ; } y_size [ 0 ] = 1 ; y_size [ 1 ]
= 1 ; y_size [ 2 ] = A_p ; if ( A_p - 1 >= 0 ) { y_data = - akrwvfs40y [ 8 ]
; } if ( ntilecols == A_p ) { varargin_2_size [ 2 ] = A_p ; if ( A_p - 1 >= 0
) { varargin_2_data = muDoubleScalarAtan2 ( y_data , st_idx_0 ) ; } } else {
k_size [ 0 ] = 1 ; k_size [ 1 ] = 1 ; k_size [ 2 ] = ntilecols ; if (
ntilecols - 1 >= 0 ) { k_data = st_idx_0 ; } lhhuyseiyj ( & y_data , y_size ,
& k_data , k_size , & varargin_2_data , varargin_2_size ) ; } if ( csz_idx_2
- 1 >= 0 ) { ct [ 0 ] = varargin_1_data ; } if ( varargin_2_size [ 2 ] - 1 >=
0 ) { ct [ 1 ] = varargin_2_data ; } ct [ 2 ] = 0.0 ; } ct [ 0 ] = - ct [ 0 ]
; ct [ 1 ] = - ct [ 1 ] ; ct [ 2 ] = - ct [ 2 ] ; rtB . ajucvwlofn [ 0 ] = ct
[ 2 ] ; rtB . h3wch0tcyi [ 0 ] = akrwvfs40y [ 12 ] / akrwvfs40y [ 15 ] * rtP
. Gain_Gain_gbc03uxe30 ; rtB . ajucvwlofn [ 1 ] = ct [ 1 ] ; rtB . h3wch0tcyi
[ 1 ] = akrwvfs40y [ 13 ] / akrwvfs40y [ 15 ] * rtP . Gain_Gain_gbc03uxe30 ;
rtB . ajucvwlofn [ 2 ] = ct [ 0 ] ; rtB . h3wch0tcyi [ 2 ] = akrwvfs40y [ 14
] / akrwvfs40y [ 15 ] * rtP . Gain_Gain_gbc03uxe30 ; if ( ssIsSampleHit ( rtS
, 1 , 0 ) ) { { real_T * pDataValues = ( real_T * ) rtDW . kez14kn3ym .
DataPtr ; real_T * pTimeValues = ( real_T * ) rtDW . kez14kn3ym . TimePtr ;
int_T currTimeIndex = rtDW . lo0wac2a2b . PrevIndex ; real_T t =
ssGetTaskTime ( rtS , 1 ) ; if ( t >= pTimeValues [ 3100 ] ) { pad150qn4p =
pDataValues [ 3100 ] ; } else { int numPoints , lastPoint ; FWksInfo *
fromwksInfo = ( FWksInfo * ) rtDW . kez14kn3ym . RSimInfoPtr ; numPoints =
fromwksInfo -> nDataPoints ; lastPoint = numPoints - 1 ; if ( t <=
pTimeValues [ 0 ] ) { currTimeIndex = 0 ; } else if ( t >= pTimeValues [
lastPoint ] ) { currTimeIndex = lastPoint - 1 ; } else { if ( t < pTimeValues
[ currTimeIndex ] ) { while ( t < pTimeValues [ currTimeIndex ] ) {
currTimeIndex -- ; } } else { while ( t >= pTimeValues [ currTimeIndex + 1 ]
) { currTimeIndex ++ ; } } } rtDW . lo0wac2a2b . PrevIndex = currTimeIndex ;
{ real_T t1 = pTimeValues [ currTimeIndex ] ; real_T t2 = pTimeValues [
currTimeIndex + 1 ] ; if ( t1 == t2 ) { if ( t < t1 ) { pad150qn4p =
pDataValues [ currTimeIndex ] ; } else { pad150qn4p = pDataValues [
currTimeIndex + 1 ] ; } } else { real_T f1 = ( t2 - t ) / ( t2 - t1 ) ;
real_T f2 = 1.0 - f1 ; real_T d1 ; real_T d2 ; int_T TimeIndex =
currTimeIndex ; d1 = pDataValues [ TimeIndex ] ; d2 = pDataValues [ TimeIndex
+ 1 ] ; pad150qn4p = ( real_T ) rtInterpolate ( d1 , d2 , f1 , f2 ) ;
pDataValues += numPoints ; } } } } rtB . nbf5lo0qyp = rtB . byypcdwj4t * rtP
. TSamp_WtEt ; st_idx_0 = ( rtB . nbf5lo0qyp - rtDW . m5xagcm5xa ) * rtP .
Gain_Gain_fnyptoffgf ; rtDW . c1xv4lavyx = nafxca1cr2 ; st_idx_1 = ( 2.0 *
pad150qn4p / rtP . cartParam . TireRadius + st_idx_0 * rtP . cartParam .
DistanceBwTires / rtP . cartParam . TireRadius ) / 2.0 ; rtB . nrzyl42xm5 =
2.0 * pad150qn4p / rtP . cartParam . TireRadius - st_idx_1 ; rtB . ilhqhgwcym
= st_idx_1 ; { if ( rtDW . opma5fwgxt . AQHandles && ssGetLogOutput ( rtS ) )
{ sdiWriteSignal ( rtDW . opma5fwgxt . AQHandles , ssGetTaskTime ( rtS , 1 )
, ( char * ) & rtB . ilhqhgwcym + 0 ) ; } } { if ( rtDW . i1b4erv544 .
AQHandles && ssGetLogOutput ( rtS ) ) { sdiWriteSignal ( rtDW . i1b4erv544 .
AQHandles , ssGetTaskTime ( rtS , 1 ) , ( char * ) & rtB . nrzyl42xm5 + 0 ) ;
} } { if ( rtDW . o25sxexqnc . AQHandles && ssGetLogOutput ( rtS ) ) {
sdiWriteSignal ( rtDW . o25sxexqnc . AQHandles , ssGetTaskTime ( rtS , 1 ) ,
( char * ) & pad150qn4p + 0 ) ; } } { if ( rtDW . guynqgbksu . AQHandles &&
ssGetLogOutput ( rtS ) ) { sdiWriteSignal ( rtDW . guynqgbksu . AQHandles ,
ssGetTaskTime ( rtS , 1 ) , ( char * ) & st_idx_0 + 0 ) ; } } } st_idx_0 =
rtB . fslwmfbg4z [ 3 ] ; st_idx_1 = rtB . fslwmfbg4z [ 2 ] ; rtB . d13ksp0l1g
= st_idx_0 + st_idx_1 ; rtB . cepepxzyrd = rtB . d13ksp0l1g / rtP .
Constant_Value_k5zgsdk1tk ; st_idx_0 = rtB . fslwmfbg4z [ 1 ] ; st_idx_1 =
rtB . fslwmfbg4z [ 0 ] ; rtB . jwbu2gwvao = st_idx_0 + st_idx_1 ; rtB .
nd3aadcbcd = rtB . jwbu2gwvao / rtP . Constant_Value_m2yjzgvvms ; rtB .
jvci2lzjbx [ 0 ] = rtB . cepepxzyrd ; rtB . jvci2lzjbx [ 1 ] = rtB .
nd3aadcbcd ; rtDW . mre1zjqmyg = nafxca1cr2 ; st_idx_0 = ( rtB . jvci2lzjbx [
0 ] + rtB . jvci2lzjbx [ 1 ] ) * rtP . cartParam . TireRadius / 2.0 ; rtB .
dv0zdzo0z1 = ( rtB . jvci2lzjbx [ 0 ] - rtB . jvci2lzjbx [ 1 ] ) * rtP .
cartParam . TireRadius / rtP . cartParam . DistanceBwTires ; rtB . lgj2jc3pzo
= st_idx_0 * muDoubleScalarCos ( rtB . g0s1jshae4 ) ; rtB . cegxra1hpr =
st_idx_0 * muDoubleScalarSin ( rtB . g0s1jshae4 ) ; if ( rtDW . ddcwn3ttzc ==
0.0 ) { rtDW . ddcwn3ttzc = 1.0 ; rtX . h3eov1d0ks = rtB . fslwmfbg4z [ 16 ]
; } rtB . h2wzsozxts [ 0 ] = rtX . h3eov1d0ks ; rtB . h2wzsozxts [ 1 ] = (
rtB . fslwmfbg4z [ 16 ] - rtX . h3eov1d0ks ) * 100.0 ; rtB . h2wzsozxts [ 2 ]
= 0.0 ; rtB . h2wzsozxts [ 3 ] = 0.0 ; simulationData = ( NeslSimulationData
* ) rtDW . gpwzsvid1r ; time_m = ssGetT ( rtS ) ; simulationData -> mData ->
mTime . mN = 1 ; simulationData -> mData -> mTime . mX = & time_m ;
simulationData -> mData -> mContStates . mN = 2 ; simulationData -> mData ->
mContStates . mX = & rtX . gb2ewon1vo [ 0 ] ; simulationData -> mData ->
mDiscStates . mN = 1 ; simulationData -> mData -> mDiscStates . mX = & rtDW .
dljj5a1cxt ; simulationData -> mData -> mModeVector . mN = 0 ; simulationData
-> mData -> mModeVector . mX = & rtDW . fw5ooxnkzk ; singular = (
ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo ( rtS ) -> foundContZcEvents
) ; simulationData -> mData -> mFoundZcEvents = singular ; simulationData ->
mData -> mIsMajorTimeStep = ssIsMajorTimeStep ( rtS ) ; singular = (
ssGetMdlInfoPtr ( rtS ) -> mdlFlags . solverAssertCheck == 1U ) ;
simulationData -> mData -> mIsSolverAssertCheck = singular ; singular =
ssIsSolverCheckingCIC ( rtS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = singular ; singular = ssIsSolverComputingJacobian (
rtS ) ; simulationData -> mData -> mIsComputingJacobian = singular ;
simulationData -> mData -> mIsEvaluatingF0 = ( ssGetEvaluatingF0ForJacobian (
rtS ) != 0 ) ; singular = ssIsSolverRequestingReset ( rtS ) ; simulationData
-> mData -> mIsSolverRequestingReset = singular ; simulationData -> mData ->
mIsModeUpdateTimeStep = ssIsModeUpdateTimeStep ( rtS ) ; tmp_g [ 0 ] = 0 ;
tmp_m [ 0 ] = rtB . h2wzsozxts [ 0 ] ; tmp_m [ 1 ] = rtB . h2wzsozxts [ 1 ] ;
tmp_m [ 2 ] = rtB . h2wzsozxts [ 2 ] ; tmp_m [ 3 ] = rtB . h2wzsozxts [ 3 ] ;
tmp_g [ 1 ] = 4 ; simulationData -> mData -> mInputValues . mN = 4 ;
simulationData -> mData -> mInputValues . mX = & tmp_m [ 0 ] ; simulationData
-> mData -> mInputOffsets . mN = 2 ; simulationData -> mData -> mInputOffsets
. mX = & tmp_g [ 0 ] ; simulationData -> mData -> mOutputs . mN = 3 ;
simulationData -> mData -> mOutputs . mX = & rtB . f3wc3trxlm [ 0 ] ;
simulationData -> mData -> mTolerances . mN = 0 ; simulationData -> mData ->
mTolerances . mX = NULL ; simulationData -> mData -> mCstateHasChanged =
false ; time_g = ssGetTaskTime ( rtS , 0 ) ; simulationData -> mData -> mTime
. mN = 1 ; simulationData -> mData -> mTime . mX = & time_g ; simulationData
-> mData -> mSampleHits . mN = 0 ; simulationData -> mData -> mSampleHits .
mX = NULL ; simulationData -> mData -> mIsFundamentalSampleHit = false ;
diagnosticManager = ( NeuDiagnosticManager * ) rtDW . l0offn5pfw ;
diagnosticTree_e = neu_diagnostic_manager_get_initial_tree (
diagnosticManager ) ; A_p = ne_simulator_method ( ( NeslSimulator * ) rtDW .
cmjfgqom52 , NESL_SIM_OUTPUTS , simulationData , diagnosticManager ) ; if (
A_p != 0 ) { singular = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ;
if ( singular ) { msg_e = rtw_diagnostics_msg ( diagnosticTree_e ) ;
ssSetErrorStatus ( rtS , msg_e ) ; } } if ( ssIsMajorTimeStep ( rtS ) &&
simulationData -> mData -> mCstateHasChanged ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; } simulationData = (
NeslSimulationData * ) rtDW . pi2dmccavk ; time_j = ssGetT ( rtS ) ;
simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData -> mTime
. mX = & time_j ; simulationData -> mData -> mContStates . mN = 0 ;
simulationData -> mData -> mContStates . mX = NULL ; simulationData -> mData
-> mDiscStates . mN = 0 ; simulationData -> mData -> mDiscStates . mX = &
rtDW . d3ks3dcnzm ; simulationData -> mData -> mModeVector . mN = 0 ;
simulationData -> mData -> mModeVector . mX = & rtDW . hsxcmjmtgd ; singular
= ( ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo ( rtS ) ->
foundContZcEvents ) ; simulationData -> mData -> mFoundZcEvents = singular ;
simulationData -> mData -> mIsMajorTimeStep = ssIsMajorTimeStep ( rtS ) ;
singular = ( ssGetMdlInfoPtr ( rtS ) -> mdlFlags . solverAssertCheck == 1U )
; simulationData -> mData -> mIsSolverAssertCheck = singular ; singular =
ssIsSolverCheckingCIC ( rtS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = singular ; simulationData -> mData ->
mIsComputingJacobian = false ; simulationData -> mData -> mIsEvaluatingF0 =
false ; singular = ssIsSolverRequestingReset ( rtS ) ; simulationData ->
mData -> mIsSolverRequestingReset = singular ; simulationData -> mData ->
mIsModeUpdateTimeStep = ssIsModeUpdateTimeStep ( rtS ) ; tmp_f [ 0 ] = 0 ;
tmp_j [ 0 ] = rtB . h2wzsozxts [ 0 ] ; tmp_j [ 1 ] = rtB . h2wzsozxts [ 1 ] ;
tmp_j [ 2 ] = rtB . h2wzsozxts [ 2 ] ; tmp_j [ 3 ] = rtB . h2wzsozxts [ 3 ] ;
tmp_f [ 1 ] = 4 ; tmp_j [ 4 ] = rtB . f3wc3trxlm [ 0 ] ; tmp_j [ 5 ] = rtB .
f3wc3trxlm [ 1 ] ; tmp_j [ 6 ] = rtB . f3wc3trxlm [ 2 ] ; tmp_f [ 2 ] = 7 ;
simulationData -> mData -> mInputValues . mN = 7 ; simulationData -> mData ->
mInputValues . mX = & tmp_j [ 0 ] ; simulationData -> mData -> mInputOffsets
. mN = 3 ; simulationData -> mData -> mInputOffsets . mX = & tmp_f [ 0 ] ;
simulationData -> mData -> mOutputs . mN = 2 ; simulationData -> mData ->
mOutputs . mX = & rtB . ecditktabk [ 0 ] ; simulationData -> mData ->
mTolerances . mN = 0 ; simulationData -> mData -> mTolerances . mX = NULL ;
simulationData -> mData -> mCstateHasChanged = false ; time_f = ssGetTaskTime
( rtS , 0 ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData ->
mData -> mTime . mX = & time_f ; simulationData -> mData -> mSampleHits . mN
= 0 ; simulationData -> mData -> mSampleHits . mX = NULL ; simulationData ->
mData -> mIsFundamentalSampleHit = false ; diagnosticManager = (
NeuDiagnosticManager * ) rtDW . jbztwjzszw ; diagnosticTree_i =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; A_p =
ne_simulator_method ( ( NeslSimulator * ) rtDW . grwvqtecfq ,
NESL_SIM_OUTPUTS , simulationData , diagnosticManager ) ; if ( A_p != 0 ) {
singular = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( singular
) { msg_i = rtw_diagnostics_msg ( diagnosticTree_i ) ; ssSetErrorStatus ( rtS
, msg_i ) ; } } if ( ssIsMajorTimeStep ( rtS ) && simulationData -> mData ->
mCstateHasChanged ) { ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; }
rtB . ctfsa4jidw [ 0 ] = rtB . ecditktabk [ 1 ] ; rtB . ctfsa4jidw [ 1 ] =
0.0 ; rtB . ctfsa4jidw [ 2 ] = 0.0 ; rtB . ctfsa4jidw [ 3 ] = 0.0 ; rtB .
drqxmyuirf [ 0 ] = rtB . ecditktabk [ 0 ] ; rtB . drqxmyuirf [ 1 ] = 0.0 ;
rtB . drqxmyuirf [ 2 ] = 0.0 ; rtB . drqxmyuirf [ 3 ] = 0.0 ; if ( rtDW .
fwcedxrxfk == 0.0 ) { rtDW . fwcedxrxfk = 1.0 ; rtX . gnk4ve4l0j = rtB .
fslwmfbg4z [ 17 ] ; } rtB . f3dt3kwdyy [ 0 ] = rtX . gnk4ve4l0j ; rtB .
f3dt3kwdyy [ 1 ] = ( rtB . fslwmfbg4z [ 17 ] - rtX . gnk4ve4l0j ) * 100.0 ;
rtB . f3dt3kwdyy [ 2 ] = 0.0 ; rtB . f3dt3kwdyy [ 3 ] = 0.0 ; simulationData
= ( NeslSimulationData * ) rtDW . fmjokqk3g2 ; time_c = ssGetT ( rtS ) ;
simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData -> mTime
. mX = & time_c ; simulationData -> mData -> mContStates . mN = 2 ;
simulationData -> mData -> mContStates . mX = & rtX . bka1w3yj3x [ 0 ] ;
simulationData -> mData -> mDiscStates . mN = 1 ; simulationData -> mData ->
mDiscStates . mX = & rtDW . f3ueebc3dc ; simulationData -> mData ->
mModeVector . mN = 0 ; simulationData -> mData -> mModeVector . mX = & rtDW .
pktaxkjkog ; singular = ( ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo (
rtS ) -> foundContZcEvents ) ; simulationData -> mData -> mFoundZcEvents =
singular ; simulationData -> mData -> mIsMajorTimeStep = ssIsMajorTimeStep (
rtS ) ; singular = ( ssGetMdlInfoPtr ( rtS ) -> mdlFlags . solverAssertCheck
== 1U ) ; simulationData -> mData -> mIsSolverAssertCheck = singular ;
singular = ssIsSolverCheckingCIC ( rtS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = singular ; singular = ssIsSolverComputingJacobian (
rtS ) ; simulationData -> mData -> mIsComputingJacobian = singular ;
simulationData -> mData -> mIsEvaluatingF0 = ( ssGetEvaluatingF0ForJacobian (
rtS ) != 0 ) ; singular = ssIsSolverRequestingReset ( rtS ) ; simulationData
-> mData -> mIsSolverRequestingReset = singular ; simulationData -> mData ->
mIsModeUpdateTimeStep = ssIsModeUpdateTimeStep ( rtS ) ; tmp_k [ 0 ] = 0 ;
tmp_c [ 0 ] = rtB . f3dt3kwdyy [ 0 ] ; tmp_c [ 1 ] = rtB . f3dt3kwdyy [ 1 ] ;
tmp_c [ 2 ] = rtB . f3dt3kwdyy [ 2 ] ; tmp_c [ 3 ] = rtB . f3dt3kwdyy [ 3 ] ;
tmp_k [ 1 ] = 4 ; simulationData -> mData -> mInputValues . mN = 4 ;
simulationData -> mData -> mInputValues . mX = & tmp_c [ 0 ] ; simulationData
-> mData -> mInputOffsets . mN = 2 ; simulationData -> mData -> mInputOffsets
. mX = & tmp_k [ 0 ] ; simulationData -> mData -> mOutputs . mN = 3 ;
simulationData -> mData -> mOutputs . mX = & rtB . e1eawrywww [ 0 ] ;
simulationData -> mData -> mTolerances . mN = 0 ; simulationData -> mData ->
mTolerances . mX = NULL ; simulationData -> mData -> mCstateHasChanged =
false ; time_k = ssGetTaskTime ( rtS , 0 ) ; simulationData -> mData -> mTime
. mN = 1 ; simulationData -> mData -> mTime . mX = & time_k ; simulationData
-> mData -> mSampleHits . mN = 0 ; simulationData -> mData -> mSampleHits .
mX = NULL ; simulationData -> mData -> mIsFundamentalSampleHit = false ;
diagnosticManager = ( NeuDiagnosticManager * ) rtDW . jbmhvkycuq ;
diagnosticTree_m = neu_diagnostic_manager_get_initial_tree (
diagnosticManager ) ; A_p = ne_simulator_method ( ( NeslSimulator * ) rtDW .
oreix54jo1 , NESL_SIM_OUTPUTS , simulationData , diagnosticManager ) ; if (
A_p != 0 ) { singular = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ;
if ( singular ) { msg_m = rtw_diagnostics_msg ( diagnosticTree_m ) ;
ssSetErrorStatus ( rtS , msg_m ) ; } } if ( ssIsMajorTimeStep ( rtS ) &&
simulationData -> mData -> mCstateHasChanged ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; } simulationData = (
NeslSimulationData * ) rtDW . d05ty02jkv ; time_b = ssGetT ( rtS ) ;
simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData -> mTime
. mX = & time_b ; simulationData -> mData -> mContStates . mN = 0 ;
simulationData -> mData -> mContStates . mX = NULL ; simulationData -> mData
-> mDiscStates . mN = 0 ; simulationData -> mData -> mDiscStates . mX = &
rtDW . as5rdedmxo ; simulationData -> mData -> mModeVector . mN = 0 ;
simulationData -> mData -> mModeVector . mX = & rtDW . hydze1iruo ; singular
= ( ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo ( rtS ) ->
foundContZcEvents ) ; simulationData -> mData -> mFoundZcEvents = singular ;
simulationData -> mData -> mIsMajorTimeStep = ssIsMajorTimeStep ( rtS ) ;
singular = ( ssGetMdlInfoPtr ( rtS ) -> mdlFlags . solverAssertCheck == 1U )
; simulationData -> mData -> mIsSolverAssertCheck = singular ; singular =
ssIsSolverCheckingCIC ( rtS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = singular ; simulationData -> mData ->
mIsComputingJacobian = false ; simulationData -> mData -> mIsEvaluatingF0 =
false ; singular = ssIsSolverRequestingReset ( rtS ) ; simulationData ->
mData -> mIsSolverRequestingReset = singular ; simulationData -> mData ->
mIsModeUpdateTimeStep = ssIsModeUpdateTimeStep ( rtS ) ; tmp_n [ 0 ] = 0 ;
tmp_b [ 0 ] = rtB . f3dt3kwdyy [ 0 ] ; tmp_b [ 1 ] = rtB . f3dt3kwdyy [ 1 ] ;
tmp_b [ 2 ] = rtB . f3dt3kwdyy [ 2 ] ; tmp_b [ 3 ] = rtB . f3dt3kwdyy [ 3 ] ;
tmp_n [ 1 ] = 4 ; tmp_b [ 4 ] = rtB . e1eawrywww [ 0 ] ; tmp_b [ 5 ] = rtB .
e1eawrywww [ 1 ] ; tmp_b [ 6 ] = rtB . e1eawrywww [ 2 ] ; tmp_n [ 2 ] = 7 ;
simulationData -> mData -> mInputValues . mN = 7 ; simulationData -> mData ->
mInputValues . mX = & tmp_b [ 0 ] ; simulationData -> mData -> mInputOffsets
. mN = 3 ; simulationData -> mData -> mInputOffsets . mX = & tmp_n [ 0 ] ;
simulationData -> mData -> mOutputs . mN = 2 ; simulationData -> mData ->
mOutputs . mX = & rtB . po2az4iybu [ 0 ] ; simulationData -> mData ->
mTolerances . mN = 0 ; simulationData -> mData -> mTolerances . mX = NULL ;
simulationData -> mData -> mCstateHasChanged = false ; time_n = ssGetTaskTime
( rtS , 0 ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData ->
mData -> mTime . mX = & time_n ; simulationData -> mData -> mSampleHits . mN
= 0 ; simulationData -> mData -> mSampleHits . mX = NULL ; simulationData ->
mData -> mIsFundamentalSampleHit = false ; diagnosticManager = (
NeuDiagnosticManager * ) rtDW . mc2c422l4v ; diagnosticTree_g =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; A_p =
ne_simulator_method ( ( NeslSimulator * ) rtDW . etnlg20vgi ,
NESL_SIM_OUTPUTS , simulationData , diagnosticManager ) ; if ( A_p != 0 ) {
singular = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( singular
) { msg_g = rtw_diagnostics_msg ( diagnosticTree_g ) ; ssSetErrorStatus ( rtS
, msg_g ) ; } } if ( ssIsMajorTimeStep ( rtS ) && simulationData -> mData ->
mCstateHasChanged ) { ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; }
rtB . bylc4dlpa2 [ 0 ] = rtB . po2az4iybu [ 1 ] ; rtB . bylc4dlpa2 [ 1 ] =
0.0 ; rtB . bylc4dlpa2 [ 2 ] = 0.0 ; rtB . bylc4dlpa2 [ 3 ] = 0.0 ; rtB .
aj3oqjvikj [ 0 ] = rtB . po2az4iybu [ 0 ] ; rtB . aj3oqjvikj [ 1 ] = 0.0 ;
rtB . aj3oqjvikj [ 2 ] = 0.0 ; rtB . aj3oqjvikj [ 3 ] = 0.0 ;
UNUSED_PARAMETER ( tid ) ; } void MdlOutputsTID4 ( int_T tid ) {
UNUSED_PARAMETER ( tid ) ; } void MdlUpdate ( int_T tid ) {
NeslSimulationData * simulationData ; NeuDiagnosticManager *
diagnosticManager ; NeuDiagnosticTree * diagnosticTree ; NeuDiagnosticTree *
diagnosticTree_e ; NeuDiagnosticTree * diagnosticTree_p ; char * msg ; char *
msg_e ; char * msg_p ; real_T tmp_p [ 76 ] ; real_T tmp_j [ 4 ] ; real_T
tmp_m [ 4 ] ; real_T time ; real_T time_e ; real_T time_p ; int32_T tmp_i ;
int_T tmp_e [ 20 ] ; int_T tmp_f [ 2 ] ; int_T tmp_g [ 2 ] ; boolean_T tmp ;
if ( ssIsSampleHit ( rtS , 2 , 0 ) ) { rtDW . bx3fwsg2i1 [ 0 ] = rtB .
aldmgrwo2q ; rtDW . bx3fwsg2i1 [ 1 ] = rtB . bldctwoduh ; rtDW . bx3fwsg2i1 [
2 ] = rtB . co1eoce0xn ; rtDW . bx3fwsg2i1 [ 3 ] = rtB . essvneazxf ; rtDW .
bx3fwsg2i1 [ 4 ] = rtB . b2pkbgkxau ; rtDW . bx3fwsg2i1 [ 5 ] = rtB .
m52iku3bf5 ; } simulationData = ( NeslSimulationData * ) rtDW . g3ij452qky ;
time = ssGetT ( rtS ) ; simulationData -> mData -> mTime . mN = 1 ;
simulationData -> mData -> mTime . mX = & time ; simulationData -> mData ->
mContStates . mN = 26 ; simulationData -> mData -> mContStates . mX = & rtX .
dmqxelc4g5 [ 0 ] ; simulationData -> mData -> mDiscStates . mN = 0 ;
simulationData -> mData -> mDiscStates . mX = & rtDW . p03lurvs2x ;
simulationData -> mData -> mModeVector . mN = 0 ; simulationData -> mData ->
mModeVector . mX = & rtDW . aqvwut4gxx ; tmp = ( ssIsMajorTimeStep ( rtS ) &&
ssGetRTWSolverInfo ( rtS ) -> foundContZcEvents ) ; simulationData -> mData
-> mFoundZcEvents = tmp ; simulationData -> mData -> mIsMajorTimeStep =
ssIsMajorTimeStep ( rtS ) ; tmp = ( ssGetMdlInfoPtr ( rtS ) -> mdlFlags .
solverAssertCheck == 1U ) ; simulationData -> mData -> mIsSolverAssertCheck =
tmp ; tmp = ssIsSolverCheckingCIC ( rtS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = tmp ; tmp = ssIsSolverComputingJacobian ( rtS ) ;
simulationData -> mData -> mIsComputingJacobian = tmp ; simulationData ->
mData -> mIsEvaluatingF0 = ( ssGetEvaluatingF0ForJacobian ( rtS ) != 0 ) ;
tmp = ssIsSolverRequestingReset ( rtS ) ; simulationData -> mData ->
mIsSolverRequestingReset = tmp ; simulationData -> mData ->
mIsModeUpdateTimeStep = ssIsModeUpdateTimeStep ( rtS ) ; tmp_e [ 0 ] = 0 ;
tmp_p [ 0 ] = rtB . bxaujqvrbz [ 0 ] ; tmp_p [ 1 ] = rtB . bxaujqvrbz [ 1 ] ;
tmp_p [ 2 ] = rtB . bxaujqvrbz [ 2 ] ; tmp_p [ 3 ] = rtB . bxaujqvrbz [ 3 ] ;
tmp_e [ 1 ] = 4 ; tmp_p [ 4 ] = rtB . be5mxu02ho [ 0 ] ; tmp_p [ 5 ] = rtB .
be5mxu02ho [ 1 ] ; tmp_p [ 6 ] = rtB . be5mxu02ho [ 2 ] ; tmp_p [ 7 ] = rtB .
be5mxu02ho [ 3 ] ; tmp_e [ 2 ] = 8 ; tmp_p [ 8 ] = rtB . h0x3fs1esa [ 0 ] ;
tmp_p [ 9 ] = rtB . h0x3fs1esa [ 1 ] ; tmp_p [ 10 ] = rtB . h0x3fs1esa [ 2 ]
; tmp_p [ 11 ] = rtB . h0x3fs1esa [ 3 ] ; tmp_e [ 3 ] = 12 ; tmp_p [ 12 ] =
rtB . frifao4c1u [ 0 ] ; tmp_p [ 13 ] = rtB . frifao4c1u [ 1 ] ; tmp_p [ 14 ]
= rtB . frifao4c1u [ 2 ] ; tmp_p [ 15 ] = rtB . frifao4c1u [ 3 ] ; tmp_e [ 4
] = 16 ; tmp_p [ 16 ] = rtB . nwxytavutd [ 0 ] ; tmp_p [ 17 ] = rtB .
nwxytavutd [ 1 ] ; tmp_p [ 18 ] = rtB . nwxytavutd [ 2 ] ; tmp_p [ 19 ] = rtB
. nwxytavutd [ 3 ] ; tmp_e [ 5 ] = 20 ; tmp_p [ 20 ] = rtB . du4pvnugdj [ 0 ]
; tmp_p [ 21 ] = rtB . du4pvnugdj [ 1 ] ; tmp_p [ 22 ] = rtB . du4pvnugdj [ 2
] ; tmp_p [ 23 ] = rtB . du4pvnugdj [ 3 ] ; tmp_e [ 6 ] = 24 ; tmp_p [ 24 ] =
rtB . nmjwizdspm [ 0 ] ; tmp_p [ 25 ] = rtB . nmjwizdspm [ 1 ] ; tmp_p [ 26 ]
= rtB . nmjwizdspm [ 2 ] ; tmp_p [ 27 ] = rtB . nmjwizdspm [ 3 ] ; tmp_e [ 7
] = 28 ; tmp_p [ 28 ] = rtB . pybi00dpti [ 0 ] ; tmp_p [ 29 ] = rtB .
pybi00dpti [ 1 ] ; tmp_p [ 30 ] = rtB . pybi00dpti [ 2 ] ; tmp_p [ 31 ] = rtB
. pybi00dpti [ 3 ] ; tmp_e [ 8 ] = 32 ; tmp_p [ 32 ] = rtB . k4qxluudiw [ 0 ]
; tmp_p [ 33 ] = rtB . k4qxluudiw [ 1 ] ; tmp_p [ 34 ] = rtB . k4qxluudiw [ 2
] ; tmp_p [ 35 ] = rtB . k4qxluudiw [ 3 ] ; tmp_e [ 9 ] = 36 ; tmp_p [ 36 ] =
rtB . j1wjz4glfv [ 0 ] ; tmp_p [ 37 ] = rtB . j1wjz4glfv [ 1 ] ; tmp_p [ 38 ]
= rtB . j1wjz4glfv [ 2 ] ; tmp_p [ 39 ] = rtB . j1wjz4glfv [ 3 ] ; tmp_e [ 10
] = 40 ; tmp_p [ 40 ] = rtB . h0tqkotieo [ 0 ] ; tmp_p [ 41 ] = rtB .
h0tqkotieo [ 1 ] ; tmp_p [ 42 ] = rtB . h0tqkotieo [ 2 ] ; tmp_p [ 43 ] = rtB
. h0tqkotieo [ 3 ] ; tmp_e [ 11 ] = 44 ; tmp_p [ 44 ] = rtB . c3nacuiddy [ 0
] ; tmp_p [ 45 ] = rtB . c3nacuiddy [ 1 ] ; tmp_p [ 46 ] = rtB . c3nacuiddy [
2 ] ; tmp_p [ 47 ] = rtB . c3nacuiddy [ 3 ] ; tmp_e [ 12 ] = 48 ; tmp_p [ 48
] = rtB . ir3dfvqqai [ 0 ] ; tmp_p [ 49 ] = rtB . ir3dfvqqai [ 1 ] ; tmp_p [
50 ] = rtB . ir3dfvqqai [ 2 ] ; tmp_p [ 51 ] = rtB . ir3dfvqqai [ 3 ] ; tmp_e
[ 13 ] = 52 ; tmp_p [ 52 ] = rtB . o0g21chvl4 [ 0 ] ; tmp_p [ 53 ] = rtB .
o0g21chvl4 [ 1 ] ; tmp_p [ 54 ] = rtB . o0g21chvl4 [ 2 ] ; tmp_p [ 55 ] = rtB
. o0g21chvl4 [ 3 ] ; tmp_e [ 14 ] = 56 ; tmp_p [ 56 ] = rtB . pvn4sjrhtj [ 0
] ; tmp_p [ 57 ] = rtB . pvn4sjrhtj [ 1 ] ; tmp_p [ 58 ] = rtB . pvn4sjrhtj [
2 ] ; tmp_p [ 59 ] = rtB . pvn4sjrhtj [ 3 ] ; tmp_e [ 15 ] = 60 ; tmp_p [ 60
] = rtB . ctfsa4jidw [ 0 ] ; tmp_p [ 61 ] = rtB . ctfsa4jidw [ 1 ] ; tmp_p [
62 ] = rtB . ctfsa4jidw [ 2 ] ; tmp_p [ 63 ] = rtB . ctfsa4jidw [ 3 ] ; tmp_e
[ 16 ] = 64 ; tmp_p [ 64 ] = rtB . drqxmyuirf [ 0 ] ; tmp_p [ 65 ] = rtB .
drqxmyuirf [ 1 ] ; tmp_p [ 66 ] = rtB . drqxmyuirf [ 2 ] ; tmp_p [ 67 ] = rtB
. drqxmyuirf [ 3 ] ; tmp_e [ 17 ] = 68 ; tmp_p [ 68 ] = rtB . bylc4dlpa2 [ 0
] ; tmp_p [ 69 ] = rtB . bylc4dlpa2 [ 1 ] ; tmp_p [ 70 ] = rtB . bylc4dlpa2 [
2 ] ; tmp_p [ 71 ] = rtB . bylc4dlpa2 [ 3 ] ; tmp_e [ 18 ] = 72 ; tmp_p [ 72
] = rtB . aj3oqjvikj [ 0 ] ; tmp_p [ 73 ] = rtB . aj3oqjvikj [ 1 ] ; tmp_p [
74 ] = rtB . aj3oqjvikj [ 2 ] ; tmp_p [ 75 ] = rtB . aj3oqjvikj [ 3 ] ; tmp_e
[ 19 ] = 76 ; simulationData -> mData -> mInputValues . mN = 76 ;
simulationData -> mData -> mInputValues . mX = & tmp_p [ 0 ] ; simulationData
-> mData -> mInputOffsets . mN = 20 ; simulationData -> mData ->
mInputOffsets . mX = & tmp_e [ 0 ] ; diagnosticManager = (
NeuDiagnosticManager * ) rtDW . ladhvtfsgz ; diagnosticTree =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; tmp_i =
ne_simulator_method ( ( NeslSimulator * ) rtDW . lb3wyb2dez , NESL_SIM_UPDATE
, simulationData , diagnosticManager ) ; if ( tmp_i != 0 ) { tmp =
error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp ) { msg =
rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } }
if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { rtDW . m5xagcm5xa = rtB . nbf5lo0qyp ;
} simulationData = ( NeslSimulationData * ) rtDW . gpwzsvid1r ; time_p =
ssGetT ( rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData
-> mData -> mTime . mX = & time_p ; simulationData -> mData -> mContStates .
mN = 2 ; simulationData -> mData -> mContStates . mX = & rtX . gb2ewon1vo [ 0
] ; simulationData -> mData -> mDiscStates . mN = 1 ; simulationData -> mData
-> mDiscStates . mX = & rtDW . dljj5a1cxt ; simulationData -> mData ->
mModeVector . mN = 0 ; simulationData -> mData -> mModeVector . mX = & rtDW .
fw5ooxnkzk ; tmp = ( ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo ( rtS )
-> foundContZcEvents ) ; simulationData -> mData -> mFoundZcEvents = tmp ;
simulationData -> mData -> mIsMajorTimeStep = ssIsMajorTimeStep ( rtS ) ; tmp
= ( ssGetMdlInfoPtr ( rtS ) -> mdlFlags . solverAssertCheck == 1U ) ;
simulationData -> mData -> mIsSolverAssertCheck = tmp ; tmp =
ssIsSolverCheckingCIC ( rtS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = tmp ; tmp = ssIsSolverComputingJacobian ( rtS ) ;
simulationData -> mData -> mIsComputingJacobian = tmp ; simulationData ->
mData -> mIsEvaluatingF0 = ( ssGetEvaluatingF0ForJacobian ( rtS ) != 0 ) ;
tmp = ssIsSolverRequestingReset ( rtS ) ; simulationData -> mData ->
mIsSolverRequestingReset = tmp ; simulationData -> mData ->
mIsModeUpdateTimeStep = ssIsModeUpdateTimeStep ( rtS ) ; tmp_g [ 0 ] = 0 ;
tmp_m [ 0 ] = rtB . h2wzsozxts [ 0 ] ; tmp_m [ 1 ] = rtB . h2wzsozxts [ 1 ] ;
tmp_m [ 2 ] = rtB . h2wzsozxts [ 2 ] ; tmp_m [ 3 ] = rtB . h2wzsozxts [ 3 ] ;
tmp_g [ 1 ] = 4 ; simulationData -> mData -> mInputValues . mN = 4 ;
simulationData -> mData -> mInputValues . mX = & tmp_m [ 0 ] ; simulationData
-> mData -> mInputOffsets . mN = 2 ; simulationData -> mData -> mInputOffsets
. mX = & tmp_g [ 0 ] ; diagnosticManager = ( NeuDiagnosticManager * ) rtDW .
l0offn5pfw ; diagnosticTree_p = neu_diagnostic_manager_get_initial_tree (
diagnosticManager ) ; tmp_i = ne_simulator_method ( ( NeslSimulator * ) rtDW
. cmjfgqom52 , NESL_SIM_UPDATE , simulationData , diagnosticManager ) ; if (
tmp_i != 0 ) { tmp = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if
( tmp ) { msg_p = rtw_diagnostics_msg ( diagnosticTree_p ) ; ssSetErrorStatus
( rtS , msg_p ) ; } } simulationData = ( NeslSimulationData * ) rtDW .
fmjokqk3g2 ; time_e = ssGetT ( rtS ) ; simulationData -> mData -> mTime . mN
= 1 ; simulationData -> mData -> mTime . mX = & time_e ; simulationData ->
mData -> mContStates . mN = 2 ; simulationData -> mData -> mContStates . mX =
& rtX . bka1w3yj3x [ 0 ] ; simulationData -> mData -> mDiscStates . mN = 1 ;
simulationData -> mData -> mDiscStates . mX = & rtDW . f3ueebc3dc ;
simulationData -> mData -> mModeVector . mN = 0 ; simulationData -> mData ->
mModeVector . mX = & rtDW . pktaxkjkog ; tmp = ( ssIsMajorTimeStep ( rtS ) &&
ssGetRTWSolverInfo ( rtS ) -> foundContZcEvents ) ; simulationData -> mData
-> mFoundZcEvents = tmp ; simulationData -> mData -> mIsMajorTimeStep =
ssIsMajorTimeStep ( rtS ) ; tmp = ( ssGetMdlInfoPtr ( rtS ) -> mdlFlags .
solverAssertCheck == 1U ) ; simulationData -> mData -> mIsSolverAssertCheck =
tmp ; tmp = ssIsSolverCheckingCIC ( rtS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = tmp ; tmp = ssIsSolverComputingJacobian ( rtS ) ;
simulationData -> mData -> mIsComputingJacobian = tmp ; simulationData ->
mData -> mIsEvaluatingF0 = ( ssGetEvaluatingF0ForJacobian ( rtS ) != 0 ) ;
tmp = ssIsSolverRequestingReset ( rtS ) ; simulationData -> mData ->
mIsSolverRequestingReset = tmp ; simulationData -> mData ->
mIsModeUpdateTimeStep = ssIsModeUpdateTimeStep ( rtS ) ; tmp_f [ 0 ] = 0 ;
tmp_j [ 0 ] = rtB . f3dt3kwdyy [ 0 ] ; tmp_j [ 1 ] = rtB . f3dt3kwdyy [ 1 ] ;
tmp_j [ 2 ] = rtB . f3dt3kwdyy [ 2 ] ; tmp_j [ 3 ] = rtB . f3dt3kwdyy [ 3 ] ;
tmp_f [ 1 ] = 4 ; simulationData -> mData -> mInputValues . mN = 4 ;
simulationData -> mData -> mInputValues . mX = & tmp_j [ 0 ] ; simulationData
-> mData -> mInputOffsets . mN = 2 ; simulationData -> mData -> mInputOffsets
. mX = & tmp_f [ 0 ] ; diagnosticManager = ( NeuDiagnosticManager * ) rtDW .
jbmhvkycuq ; diagnosticTree_e = neu_diagnostic_manager_get_initial_tree (
diagnosticManager ) ; tmp_i = ne_simulator_method ( ( NeslSimulator * ) rtDW
. oreix54jo1 , NESL_SIM_UPDATE , simulationData , diagnosticManager ) ; if (
tmp_i != 0 ) { tmp = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if
( tmp ) { msg_e = rtw_diagnostics_msg ( diagnosticTree_e ) ; ssSetErrorStatus
( rtS , msg_e ) ; } } UNUSED_PARAMETER ( tid ) ; } void MdlUpdateTID4 ( int_T
tid ) { UNUSED_PARAMETER ( tid ) ; } void MdlDerivatives ( void ) {
NeslSimulationData * simulationData ; NeuDiagnosticManager *
diagnosticManager ; NeuDiagnosticTree * diagnosticTree ; NeuDiagnosticTree *
diagnosticTree_e ; NeuDiagnosticTree * diagnosticTree_p ; XDot * _rtXdot ;
char * msg ; char * msg_e ; char * msg_p ; real_T tmp_p [ 76 ] ; real_T tmp_j
[ 4 ] ; real_T tmp_m [ 4 ] ; real_T time ; real_T time_e ; real_T time_p ;
int32_T tmp_i ; int_T tmp_e [ 20 ] ; int_T tmp_f [ 2 ] ; int_T tmp_g [ 2 ] ;
boolean_T tmp ; _rtXdot = ( ( XDot * ) ssGetdX ( rtS ) ) ; _rtXdot ->
p3palrnzjz = rtB . cegxra1hpr ; _rtXdot -> gncr2kcfdc = rtB . lgj2jc3pzo ;
_rtXdot -> jssdeyuydp = rtB . dv0zdzo0z1 ; _rtXdot -> e2dw3elb2f = rtB .
nrzyl42xm5 ; _rtXdot -> gwlcka103e [ 0 ] = rtX . gwlcka103e [ 1 ] ; _rtXdot
-> gwlcka103e [ 1 ] = ( ( rtB . a50c4odnnd - rtX . gwlcka103e [ 0 ] ) *
1000.0 - 2.0 * rtX . gwlcka103e [ 1 ] ) * 1000.0 ; _rtXdot -> j0lveohajj [ 0
] = rtX . j0lveohajj [ 1 ] ; _rtXdot -> j0lveohajj [ 1 ] = ( ( rtB .
a50c4odnnd - rtX . j0lveohajj [ 0 ] ) * 1000.0 - 2.0 * rtX . j0lveohajj [ 1 ]
) * 1000.0 ; _rtXdot -> lpgahzuqj5 [ 0 ] = rtX . lpgahzuqj5 [ 1 ] ; _rtXdot
-> lpgahzuqj5 [ 1 ] = ( ( rtB . gn5waaat3n - rtX . lpgahzuqj5 [ 0 ] ) *
1000.0 - 2.0 * rtX . lpgahzuqj5 [ 1 ] ) * 1000.0 ; _rtXdot -> kedegwhd4y [ 0
] = rtX . kedegwhd4y [ 1 ] ; _rtXdot -> kedegwhd4y [ 1 ] = ( ( rtB .
j3ss00kqoe - rtX . kedegwhd4y [ 0 ] ) * 1000.0 - 2.0 * rtX . kedegwhd4y [ 1 ]
) * 1000.0 ; _rtXdot -> kuiemveww2 [ 0 ] = rtX . kuiemveww2 [ 1 ] ; _rtXdot
-> kuiemveww2 [ 1 ] = ( ( rtB . ej15uvzzrp - rtX . kuiemveww2 [ 0 ] ) *
1000.0 - 2.0 * rtX . kuiemveww2 [ 1 ] ) * 1000.0 ; _rtXdot -> jdiyri4o3q =
rtB . ilhqhgwcym ; _rtXdot -> cl4axnntag [ 0 ] = rtX . cl4axnntag [ 1 ] ;
_rtXdot -> cl4axnntag [ 1 ] = ( ( rtB . fstvfaddps - rtX . cl4axnntag [ 0 ] )
* 1000.0 - 2.0 * rtX . cl4axnntag [ 1 ] ) * 1000.0 ; _rtXdot -> cgdarxxfhh [
0 ] = rtX . cgdarxxfhh [ 1 ] ; _rtXdot -> cgdarxxfhh [ 1 ] = ( ( rtB .
fstvfaddps - rtX . cgdarxxfhh [ 0 ] ) * 1000.0 - 2.0 * rtX . cgdarxxfhh [ 1 ]
) * 1000.0 ; _rtXdot -> njhi2kkb45 [ 0 ] = rtX . njhi2kkb45 [ 1 ] ; _rtXdot
-> njhi2kkb45 [ 1 ] = ( ( rtDW . l41spvcbdc - rtX . njhi2kkb45 [ 0 ] ) *
100.0 - 2.0 * rtX . njhi2kkb45 [ 1 ] ) * 100.0 ; _rtXdot -> enzife1153 [ 0 ]
= rtX . enzife1153 [ 1 ] ; _rtXdot -> enzife1153 [ 1 ] = ( ( rtDW .
dwnerbwwhs - rtX . enzife1153 [ 0 ] ) * 100.0 - 2.0 * rtX . enzife1153 [ 1 ]
) * 100.0 ; _rtXdot -> m3ewvxkuda [ 0 ] = rtX . m3ewvxkuda [ 1 ] ; _rtXdot ->
m3ewvxkuda [ 1 ] = ( ( rtDW . lpmlshwp0j - rtX . m3ewvxkuda [ 0 ] ) * 100.0 -
2.0 * rtX . m3ewvxkuda [ 1 ] ) * 100.0 ; _rtXdot -> lmwqgrobiu [ 0 ] = rtX .
lmwqgrobiu [ 1 ] ; _rtXdot -> lmwqgrobiu [ 1 ] = ( ( rtDW . ntb1y3fl2p - rtX
. lmwqgrobiu [ 0 ] ) * 100.0 - 2.0 * rtX . lmwqgrobiu [ 1 ] ) * 100.0 ;
_rtXdot -> enbehpdbh2 [ 0 ] = rtX . enbehpdbh2 [ 1 ] ; _rtXdot -> enbehpdbh2
[ 1 ] = ( ( rtDW . ngjgnzl4gl - rtX . enbehpdbh2 [ 0 ] ) * 100.0 - 2.0 * rtX
. enbehpdbh2 [ 1 ] ) * 100.0 ; _rtXdot -> pzt5vdq13u [ 0 ] = rtX . pzt5vdq13u
[ 1 ] ; _rtXdot -> pzt5vdq13u [ 1 ] = ( ( rtDW . ktng2gyshq - rtX .
pzt5vdq13u [ 0 ] ) * 100.0 - 2.0 * rtX . pzt5vdq13u [ 1 ] ) * 100.0 ; _rtXdot
-> laucphmfyy = rtB . otiyamgc4m ; _rtXdot -> hfsj1vb0zx [ 0 ] = rtX .
hfsj1vb0zx [ 1 ] ; _rtXdot -> hfsj1vb0zx [ 1 ] = ( ( rtB . ggvodvqytu - rtX .
hfsj1vb0zx [ 0 ] ) * 100.0 - 2.0 * rtX . hfsj1vb0zx [ 1 ] ) * 100.0 ; _rtXdot
-> jtwggrtgak [ 0 ] = rtX . jtwggrtgak [ 1 ] ; _rtXdot -> jtwggrtgak [ 1 ] =
( ( rtB . ggvodvqytu - rtX . jtwggrtgak [ 0 ] ) * 100.0 - 2.0 * rtX .
jtwggrtgak [ 1 ] ) * 100.0 ; simulationData = ( NeslSimulationData * ) rtDW .
g3ij452qky ; time = ssGetT ( rtS ) ; simulationData -> mData -> mTime . mN =
1 ; simulationData -> mData -> mTime . mX = & time ; simulationData -> mData
-> mContStates . mN = 26 ; simulationData -> mData -> mContStates . mX = &
rtX . dmqxelc4g5 [ 0 ] ; simulationData -> mData -> mDiscStates . mN = 0 ;
simulationData -> mData -> mDiscStates . mX = & rtDW . p03lurvs2x ;
simulationData -> mData -> mModeVector . mN = 0 ; simulationData -> mData ->
mModeVector . mX = & rtDW . aqvwut4gxx ; tmp = ( ssIsMajorTimeStep ( rtS ) &&
ssGetRTWSolverInfo ( rtS ) -> foundContZcEvents ) ; simulationData -> mData
-> mFoundZcEvents = tmp ; simulationData -> mData -> mIsMajorTimeStep =
ssIsMajorTimeStep ( rtS ) ; tmp = ( ssGetMdlInfoPtr ( rtS ) -> mdlFlags .
solverAssertCheck == 1U ) ; simulationData -> mData -> mIsSolverAssertCheck =
tmp ; tmp = ssIsSolverCheckingCIC ( rtS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = tmp ; tmp = ssIsSolverComputingJacobian ( rtS ) ;
simulationData -> mData -> mIsComputingJacobian = tmp ; simulationData ->
mData -> mIsEvaluatingF0 = ( ssGetEvaluatingF0ForJacobian ( rtS ) != 0 ) ;
tmp = ssIsSolverRequestingReset ( rtS ) ; simulationData -> mData ->
mIsSolverRequestingReset = tmp ; simulationData -> mData ->
mIsModeUpdateTimeStep = ssIsModeUpdateTimeStep ( rtS ) ; tmp_e [ 0 ] = 0 ;
tmp_p [ 0 ] = rtB . bxaujqvrbz [ 0 ] ; tmp_p [ 1 ] = rtB . bxaujqvrbz [ 1 ] ;
tmp_p [ 2 ] = rtB . bxaujqvrbz [ 2 ] ; tmp_p [ 3 ] = rtB . bxaujqvrbz [ 3 ] ;
tmp_e [ 1 ] = 4 ; tmp_p [ 4 ] = rtB . be5mxu02ho [ 0 ] ; tmp_p [ 5 ] = rtB .
be5mxu02ho [ 1 ] ; tmp_p [ 6 ] = rtB . be5mxu02ho [ 2 ] ; tmp_p [ 7 ] = rtB .
be5mxu02ho [ 3 ] ; tmp_e [ 2 ] = 8 ; tmp_p [ 8 ] = rtB . h0x3fs1esa [ 0 ] ;
tmp_p [ 9 ] = rtB . h0x3fs1esa [ 1 ] ; tmp_p [ 10 ] = rtB . h0x3fs1esa [ 2 ]
; tmp_p [ 11 ] = rtB . h0x3fs1esa [ 3 ] ; tmp_e [ 3 ] = 12 ; tmp_p [ 12 ] =
rtB . frifao4c1u [ 0 ] ; tmp_p [ 13 ] = rtB . frifao4c1u [ 1 ] ; tmp_p [ 14 ]
= rtB . frifao4c1u [ 2 ] ; tmp_p [ 15 ] = rtB . frifao4c1u [ 3 ] ; tmp_e [ 4
] = 16 ; tmp_p [ 16 ] = rtB . nwxytavutd [ 0 ] ; tmp_p [ 17 ] = rtB .
nwxytavutd [ 1 ] ; tmp_p [ 18 ] = rtB . nwxytavutd [ 2 ] ; tmp_p [ 19 ] = rtB
. nwxytavutd [ 3 ] ; tmp_e [ 5 ] = 20 ; tmp_p [ 20 ] = rtB . du4pvnugdj [ 0 ]
; tmp_p [ 21 ] = rtB . du4pvnugdj [ 1 ] ; tmp_p [ 22 ] = rtB . du4pvnugdj [ 2
] ; tmp_p [ 23 ] = rtB . du4pvnugdj [ 3 ] ; tmp_e [ 6 ] = 24 ; tmp_p [ 24 ] =
rtB . nmjwizdspm [ 0 ] ; tmp_p [ 25 ] = rtB . nmjwizdspm [ 1 ] ; tmp_p [ 26 ]
= rtB . nmjwizdspm [ 2 ] ; tmp_p [ 27 ] = rtB . nmjwizdspm [ 3 ] ; tmp_e [ 7
] = 28 ; tmp_p [ 28 ] = rtB . pybi00dpti [ 0 ] ; tmp_p [ 29 ] = rtB .
pybi00dpti [ 1 ] ; tmp_p [ 30 ] = rtB . pybi00dpti [ 2 ] ; tmp_p [ 31 ] = rtB
. pybi00dpti [ 3 ] ; tmp_e [ 8 ] = 32 ; tmp_p [ 32 ] = rtB . k4qxluudiw [ 0 ]
; tmp_p [ 33 ] = rtB . k4qxluudiw [ 1 ] ; tmp_p [ 34 ] = rtB . k4qxluudiw [ 2
] ; tmp_p [ 35 ] = rtB . k4qxluudiw [ 3 ] ; tmp_e [ 9 ] = 36 ; tmp_p [ 36 ] =
rtB . j1wjz4glfv [ 0 ] ; tmp_p [ 37 ] = rtB . j1wjz4glfv [ 1 ] ; tmp_p [ 38 ]
= rtB . j1wjz4glfv [ 2 ] ; tmp_p [ 39 ] = rtB . j1wjz4glfv [ 3 ] ; tmp_e [ 10
] = 40 ; tmp_p [ 40 ] = rtB . h0tqkotieo [ 0 ] ; tmp_p [ 41 ] = rtB .
h0tqkotieo [ 1 ] ; tmp_p [ 42 ] = rtB . h0tqkotieo [ 2 ] ; tmp_p [ 43 ] = rtB
. h0tqkotieo [ 3 ] ; tmp_e [ 11 ] = 44 ; tmp_p [ 44 ] = rtB . c3nacuiddy [ 0
] ; tmp_p [ 45 ] = rtB . c3nacuiddy [ 1 ] ; tmp_p [ 46 ] = rtB . c3nacuiddy [
2 ] ; tmp_p [ 47 ] = rtB . c3nacuiddy [ 3 ] ; tmp_e [ 12 ] = 48 ; tmp_p [ 48
] = rtB . ir3dfvqqai [ 0 ] ; tmp_p [ 49 ] = rtB . ir3dfvqqai [ 1 ] ; tmp_p [
50 ] = rtB . ir3dfvqqai [ 2 ] ; tmp_p [ 51 ] = rtB . ir3dfvqqai [ 3 ] ; tmp_e
[ 13 ] = 52 ; tmp_p [ 52 ] = rtB . o0g21chvl4 [ 0 ] ; tmp_p [ 53 ] = rtB .
o0g21chvl4 [ 1 ] ; tmp_p [ 54 ] = rtB . o0g21chvl4 [ 2 ] ; tmp_p [ 55 ] = rtB
. o0g21chvl4 [ 3 ] ; tmp_e [ 14 ] = 56 ; tmp_p [ 56 ] = rtB . pvn4sjrhtj [ 0
] ; tmp_p [ 57 ] = rtB . pvn4sjrhtj [ 1 ] ; tmp_p [ 58 ] = rtB . pvn4sjrhtj [
2 ] ; tmp_p [ 59 ] = rtB . pvn4sjrhtj [ 3 ] ; tmp_e [ 15 ] = 60 ; tmp_p [ 60
] = rtB . ctfsa4jidw [ 0 ] ; tmp_p [ 61 ] = rtB . ctfsa4jidw [ 1 ] ; tmp_p [
62 ] = rtB . ctfsa4jidw [ 2 ] ; tmp_p [ 63 ] = rtB . ctfsa4jidw [ 3 ] ; tmp_e
[ 16 ] = 64 ; tmp_p [ 64 ] = rtB . drqxmyuirf [ 0 ] ; tmp_p [ 65 ] = rtB .
drqxmyuirf [ 1 ] ; tmp_p [ 66 ] = rtB . drqxmyuirf [ 2 ] ; tmp_p [ 67 ] = rtB
. drqxmyuirf [ 3 ] ; tmp_e [ 17 ] = 68 ; tmp_p [ 68 ] = rtB . bylc4dlpa2 [ 0
] ; tmp_p [ 69 ] = rtB . bylc4dlpa2 [ 1 ] ; tmp_p [ 70 ] = rtB . bylc4dlpa2 [
2 ] ; tmp_p [ 71 ] = rtB . bylc4dlpa2 [ 3 ] ; tmp_e [ 18 ] = 72 ; tmp_p [ 72
] = rtB . aj3oqjvikj [ 0 ] ; tmp_p [ 73 ] = rtB . aj3oqjvikj [ 1 ] ; tmp_p [
74 ] = rtB . aj3oqjvikj [ 2 ] ; tmp_p [ 75 ] = rtB . aj3oqjvikj [ 3 ] ; tmp_e
[ 19 ] = 76 ; simulationData -> mData -> mInputValues . mN = 76 ;
simulationData -> mData -> mInputValues . mX = & tmp_p [ 0 ] ; simulationData
-> mData -> mInputOffsets . mN = 20 ; simulationData -> mData ->
mInputOffsets . mX = & tmp_e [ 0 ] ; simulationData -> mData -> mDx . mN = 26
; simulationData -> mData -> mDx . mX = & _rtXdot -> dmqxelc4g5 [ 0 ] ;
diagnosticManager = ( NeuDiagnosticManager * ) rtDW . ladhvtfsgz ;
diagnosticTree = neu_diagnostic_manager_get_initial_tree ( diagnosticManager
) ; tmp_i = ne_simulator_method ( ( NeslSimulator * ) rtDW . lb3wyb2dez ,
NESL_SIM_DERIVATIVES , simulationData , diagnosticManager ) ; if ( tmp_i != 0
) { tmp = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp ) {
msg = rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg )
; } } _rtXdot -> h3eov1d0ks = ( rtB . fslwmfbg4z [ 16 ] - rtX . h3eov1d0ks )
* 100.0 ; simulationData = ( NeslSimulationData * ) rtDW . gpwzsvid1r ;
time_p = ssGetT ( rtS ) ; simulationData -> mData -> mTime . mN = 1 ;
simulationData -> mData -> mTime . mX = & time_p ; simulationData -> mData ->
mContStates . mN = 2 ; simulationData -> mData -> mContStates . mX = & rtX .
gb2ewon1vo [ 0 ] ; simulationData -> mData -> mDiscStates . mN = 1 ;
simulationData -> mData -> mDiscStates . mX = & rtDW . dljj5a1cxt ;
simulationData -> mData -> mModeVector . mN = 0 ; simulationData -> mData ->
mModeVector . mX = & rtDW . fw5ooxnkzk ; tmp = ( ssIsMajorTimeStep ( rtS ) &&
ssGetRTWSolverInfo ( rtS ) -> foundContZcEvents ) ; simulationData -> mData
-> mFoundZcEvents = tmp ; simulationData -> mData -> mIsMajorTimeStep =
ssIsMajorTimeStep ( rtS ) ; tmp = ( ssGetMdlInfoPtr ( rtS ) -> mdlFlags .
solverAssertCheck == 1U ) ; simulationData -> mData -> mIsSolverAssertCheck =
tmp ; tmp = ssIsSolverCheckingCIC ( rtS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = tmp ; tmp = ssIsSolverComputingJacobian ( rtS ) ;
simulationData -> mData -> mIsComputingJacobian = tmp ; simulationData ->
mData -> mIsEvaluatingF0 = ( ssGetEvaluatingF0ForJacobian ( rtS ) != 0 ) ;
tmp = ssIsSolverRequestingReset ( rtS ) ; simulationData -> mData ->
mIsSolverRequestingReset = tmp ; simulationData -> mData ->
mIsModeUpdateTimeStep = ssIsModeUpdateTimeStep ( rtS ) ; tmp_g [ 0 ] = 0 ;
tmp_m [ 0 ] = rtB . h2wzsozxts [ 0 ] ; tmp_m [ 1 ] = rtB . h2wzsozxts [ 1 ] ;
tmp_m [ 2 ] = rtB . h2wzsozxts [ 2 ] ; tmp_m [ 3 ] = rtB . h2wzsozxts [ 3 ] ;
tmp_g [ 1 ] = 4 ; simulationData -> mData -> mInputValues . mN = 4 ;
simulationData -> mData -> mInputValues . mX = & tmp_m [ 0 ] ; simulationData
-> mData -> mInputOffsets . mN = 2 ; simulationData -> mData -> mInputOffsets
. mX = & tmp_g [ 0 ] ; simulationData -> mData -> mDx . mN = 2 ;
simulationData -> mData -> mDx . mX = & _rtXdot -> gb2ewon1vo [ 0 ] ;
diagnosticManager = ( NeuDiagnosticManager * ) rtDW . l0offn5pfw ;
diagnosticTree_p = neu_diagnostic_manager_get_initial_tree (
diagnosticManager ) ; tmp_i = ne_simulator_method ( ( NeslSimulator * ) rtDW
. cmjfgqom52 , NESL_SIM_DERIVATIVES , simulationData , diagnosticManager ) ;
if ( tmp_i != 0 ) { tmp = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) )
; if ( tmp ) { msg_p = rtw_diagnostics_msg ( diagnosticTree_p ) ;
ssSetErrorStatus ( rtS , msg_p ) ; } } _rtXdot -> gnk4ve4l0j = ( rtB .
fslwmfbg4z [ 17 ] - rtX . gnk4ve4l0j ) * 100.0 ; simulationData = (
NeslSimulationData * ) rtDW . fmjokqk3g2 ; time_e = ssGetT ( rtS ) ;
simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData -> mTime
. mX = & time_e ; simulationData -> mData -> mContStates . mN = 2 ;
simulationData -> mData -> mContStates . mX = & rtX . bka1w3yj3x [ 0 ] ;
simulationData -> mData -> mDiscStates . mN = 1 ; simulationData -> mData ->
mDiscStates . mX = & rtDW . f3ueebc3dc ; simulationData -> mData ->
mModeVector . mN = 0 ; simulationData -> mData -> mModeVector . mX = & rtDW .
pktaxkjkog ; tmp = ( ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo ( rtS )
-> foundContZcEvents ) ; simulationData -> mData -> mFoundZcEvents = tmp ;
simulationData -> mData -> mIsMajorTimeStep = ssIsMajorTimeStep ( rtS ) ; tmp
= ( ssGetMdlInfoPtr ( rtS ) -> mdlFlags . solverAssertCheck == 1U ) ;
simulationData -> mData -> mIsSolverAssertCheck = tmp ; tmp =
ssIsSolverCheckingCIC ( rtS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = tmp ; tmp = ssIsSolverComputingJacobian ( rtS ) ;
simulationData -> mData -> mIsComputingJacobian = tmp ; simulationData ->
mData -> mIsEvaluatingF0 = ( ssGetEvaluatingF0ForJacobian ( rtS ) != 0 ) ;
tmp = ssIsSolverRequestingReset ( rtS ) ; simulationData -> mData ->
mIsSolverRequestingReset = tmp ; simulationData -> mData ->
mIsModeUpdateTimeStep = ssIsModeUpdateTimeStep ( rtS ) ; tmp_f [ 0 ] = 0 ;
tmp_j [ 0 ] = rtB . f3dt3kwdyy [ 0 ] ; tmp_j [ 1 ] = rtB . f3dt3kwdyy [ 1 ] ;
tmp_j [ 2 ] = rtB . f3dt3kwdyy [ 2 ] ; tmp_j [ 3 ] = rtB . f3dt3kwdyy [ 3 ] ;
tmp_f [ 1 ] = 4 ; simulationData -> mData -> mInputValues . mN = 4 ;
simulationData -> mData -> mInputValues . mX = & tmp_j [ 0 ] ; simulationData
-> mData -> mInputOffsets . mN = 2 ; simulationData -> mData -> mInputOffsets
. mX = & tmp_f [ 0 ] ; simulationData -> mData -> mDx . mN = 2 ;
simulationData -> mData -> mDx . mX = & _rtXdot -> bka1w3yj3x [ 0 ] ;
diagnosticManager = ( NeuDiagnosticManager * ) rtDW . jbmhvkycuq ;
diagnosticTree_e = neu_diagnostic_manager_get_initial_tree (
diagnosticManager ) ; tmp_i = ne_simulator_method ( ( NeslSimulator * ) rtDW
. oreix54jo1 , NESL_SIM_DERIVATIVES , simulationData , diagnosticManager ) ;
if ( tmp_i != 0 ) { tmp = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) )
; if ( tmp ) { msg_e = rtw_diagnostics_msg ( diagnosticTree_e ) ;
ssSetErrorStatus ( rtS , msg_e ) ; } } } void MdlProjection ( void ) {
NeslSimulationData * simulationData ; NeuDiagnosticManager *
diagnosticManager ; NeuDiagnosticTree * diagnosticTree ; NeuDiagnosticTree *
diagnosticTree_e ; NeuDiagnosticTree * diagnosticTree_p ; char * msg ; char *
msg_e ; char * msg_p ; real_T tmp_p [ 76 ] ; real_T tmp_j [ 4 ] ; real_T
tmp_m [ 4 ] ; real_T time ; real_T time_e ; real_T time_p ; int32_T tmp_i ;
int_T tmp_e [ 20 ] ; int_T tmp_f [ 2 ] ; int_T tmp_g [ 2 ] ; boolean_T tmp ;
simulationData = ( NeslSimulationData * ) rtDW . g3ij452qky ; time = ssGetT (
rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData
-> mTime . mX = & time ; simulationData -> mData -> mContStates . mN = 26 ;
simulationData -> mData -> mContStates . mX = & rtX . dmqxelc4g5 [ 0 ] ;
simulationData -> mData -> mDiscStates . mN = 0 ; simulationData -> mData ->
mDiscStates . mX = & rtDW . p03lurvs2x ; simulationData -> mData ->
mModeVector . mN = 0 ; simulationData -> mData -> mModeVector . mX = & rtDW .
aqvwut4gxx ; tmp = ( ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo ( rtS )
-> foundContZcEvents ) ; simulationData -> mData -> mFoundZcEvents = tmp ;
simulationData -> mData -> mIsMajorTimeStep = ssIsMajorTimeStep ( rtS ) ; tmp
= ( ssGetMdlInfoPtr ( rtS ) -> mdlFlags . solverAssertCheck == 1U ) ;
simulationData -> mData -> mIsSolverAssertCheck = tmp ; tmp =
ssIsSolverCheckingCIC ( rtS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = tmp ; tmp = ssIsSolverComputingJacobian ( rtS ) ;
simulationData -> mData -> mIsComputingJacobian = tmp ; simulationData ->
mData -> mIsEvaluatingF0 = ( ssGetEvaluatingF0ForJacobian ( rtS ) != 0 ) ;
tmp = ssIsSolverRequestingReset ( rtS ) ; simulationData -> mData ->
mIsSolverRequestingReset = tmp ; simulationData -> mData ->
mIsModeUpdateTimeStep = ssIsModeUpdateTimeStep ( rtS ) ; tmp_e [ 0 ] = 0 ;
tmp_p [ 0 ] = rtB . bxaujqvrbz [ 0 ] ; tmp_p [ 1 ] = rtB . bxaujqvrbz [ 1 ] ;
tmp_p [ 2 ] = rtB . bxaujqvrbz [ 2 ] ; tmp_p [ 3 ] = rtB . bxaujqvrbz [ 3 ] ;
tmp_e [ 1 ] = 4 ; tmp_p [ 4 ] = rtB . be5mxu02ho [ 0 ] ; tmp_p [ 5 ] = rtB .
be5mxu02ho [ 1 ] ; tmp_p [ 6 ] = rtB . be5mxu02ho [ 2 ] ; tmp_p [ 7 ] = rtB .
be5mxu02ho [ 3 ] ; tmp_e [ 2 ] = 8 ; tmp_p [ 8 ] = rtB . h0x3fs1esa [ 0 ] ;
tmp_p [ 9 ] = rtB . h0x3fs1esa [ 1 ] ; tmp_p [ 10 ] = rtB . h0x3fs1esa [ 2 ]
; tmp_p [ 11 ] = rtB . h0x3fs1esa [ 3 ] ; tmp_e [ 3 ] = 12 ; tmp_p [ 12 ] =
rtB . frifao4c1u [ 0 ] ; tmp_p [ 13 ] = rtB . frifao4c1u [ 1 ] ; tmp_p [ 14 ]
= rtB . frifao4c1u [ 2 ] ; tmp_p [ 15 ] = rtB . frifao4c1u [ 3 ] ; tmp_e [ 4
] = 16 ; tmp_p [ 16 ] = rtB . nwxytavutd [ 0 ] ; tmp_p [ 17 ] = rtB .
nwxytavutd [ 1 ] ; tmp_p [ 18 ] = rtB . nwxytavutd [ 2 ] ; tmp_p [ 19 ] = rtB
. nwxytavutd [ 3 ] ; tmp_e [ 5 ] = 20 ; tmp_p [ 20 ] = rtB . du4pvnugdj [ 0 ]
; tmp_p [ 21 ] = rtB . du4pvnugdj [ 1 ] ; tmp_p [ 22 ] = rtB . du4pvnugdj [ 2
] ; tmp_p [ 23 ] = rtB . du4pvnugdj [ 3 ] ; tmp_e [ 6 ] = 24 ; tmp_p [ 24 ] =
rtB . nmjwizdspm [ 0 ] ; tmp_p [ 25 ] = rtB . nmjwizdspm [ 1 ] ; tmp_p [ 26 ]
= rtB . nmjwizdspm [ 2 ] ; tmp_p [ 27 ] = rtB . nmjwizdspm [ 3 ] ; tmp_e [ 7
] = 28 ; tmp_p [ 28 ] = rtB . pybi00dpti [ 0 ] ; tmp_p [ 29 ] = rtB .
pybi00dpti [ 1 ] ; tmp_p [ 30 ] = rtB . pybi00dpti [ 2 ] ; tmp_p [ 31 ] = rtB
. pybi00dpti [ 3 ] ; tmp_e [ 8 ] = 32 ; tmp_p [ 32 ] = rtB . k4qxluudiw [ 0 ]
; tmp_p [ 33 ] = rtB . k4qxluudiw [ 1 ] ; tmp_p [ 34 ] = rtB . k4qxluudiw [ 2
] ; tmp_p [ 35 ] = rtB . k4qxluudiw [ 3 ] ; tmp_e [ 9 ] = 36 ; tmp_p [ 36 ] =
rtB . j1wjz4glfv [ 0 ] ; tmp_p [ 37 ] = rtB . j1wjz4glfv [ 1 ] ; tmp_p [ 38 ]
= rtB . j1wjz4glfv [ 2 ] ; tmp_p [ 39 ] = rtB . j1wjz4glfv [ 3 ] ; tmp_e [ 10
] = 40 ; tmp_p [ 40 ] = rtB . h0tqkotieo [ 0 ] ; tmp_p [ 41 ] = rtB .
h0tqkotieo [ 1 ] ; tmp_p [ 42 ] = rtB . h0tqkotieo [ 2 ] ; tmp_p [ 43 ] = rtB
. h0tqkotieo [ 3 ] ; tmp_e [ 11 ] = 44 ; tmp_p [ 44 ] = rtB . c3nacuiddy [ 0
] ; tmp_p [ 45 ] = rtB . c3nacuiddy [ 1 ] ; tmp_p [ 46 ] = rtB . c3nacuiddy [
2 ] ; tmp_p [ 47 ] = rtB . c3nacuiddy [ 3 ] ; tmp_e [ 12 ] = 48 ; tmp_p [ 48
] = rtB . ir3dfvqqai [ 0 ] ; tmp_p [ 49 ] = rtB . ir3dfvqqai [ 1 ] ; tmp_p [
50 ] = rtB . ir3dfvqqai [ 2 ] ; tmp_p [ 51 ] = rtB . ir3dfvqqai [ 3 ] ; tmp_e
[ 13 ] = 52 ; tmp_p [ 52 ] = rtB . o0g21chvl4 [ 0 ] ; tmp_p [ 53 ] = rtB .
o0g21chvl4 [ 1 ] ; tmp_p [ 54 ] = rtB . o0g21chvl4 [ 2 ] ; tmp_p [ 55 ] = rtB
. o0g21chvl4 [ 3 ] ; tmp_e [ 14 ] = 56 ; tmp_p [ 56 ] = rtB . pvn4sjrhtj [ 0
] ; tmp_p [ 57 ] = rtB . pvn4sjrhtj [ 1 ] ; tmp_p [ 58 ] = rtB . pvn4sjrhtj [
2 ] ; tmp_p [ 59 ] = rtB . pvn4sjrhtj [ 3 ] ; tmp_e [ 15 ] = 60 ; tmp_p [ 60
] = rtB . ctfsa4jidw [ 0 ] ; tmp_p [ 61 ] = rtB . ctfsa4jidw [ 1 ] ; tmp_p [
62 ] = rtB . ctfsa4jidw [ 2 ] ; tmp_p [ 63 ] = rtB . ctfsa4jidw [ 3 ] ; tmp_e
[ 16 ] = 64 ; tmp_p [ 64 ] = rtB . drqxmyuirf [ 0 ] ; tmp_p [ 65 ] = rtB .
drqxmyuirf [ 1 ] ; tmp_p [ 66 ] = rtB . drqxmyuirf [ 2 ] ; tmp_p [ 67 ] = rtB
. drqxmyuirf [ 3 ] ; tmp_e [ 17 ] = 68 ; tmp_p [ 68 ] = rtB . bylc4dlpa2 [ 0
] ; tmp_p [ 69 ] = rtB . bylc4dlpa2 [ 1 ] ; tmp_p [ 70 ] = rtB . bylc4dlpa2 [
2 ] ; tmp_p [ 71 ] = rtB . bylc4dlpa2 [ 3 ] ; tmp_e [ 18 ] = 72 ; tmp_p [ 72
] = rtB . aj3oqjvikj [ 0 ] ; tmp_p [ 73 ] = rtB . aj3oqjvikj [ 1 ] ; tmp_p [
74 ] = rtB . aj3oqjvikj [ 2 ] ; tmp_p [ 75 ] = rtB . aj3oqjvikj [ 3 ] ; tmp_e
[ 19 ] = 76 ; simulationData -> mData -> mInputValues . mN = 76 ;
simulationData -> mData -> mInputValues . mX = & tmp_p [ 0 ] ; simulationData
-> mData -> mInputOffsets . mN = 20 ; simulationData -> mData ->
mInputOffsets . mX = & tmp_e [ 0 ] ; diagnosticManager = (
NeuDiagnosticManager * ) rtDW . ladhvtfsgz ; diagnosticTree =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; tmp_i =
ne_simulator_method ( ( NeslSimulator * ) rtDW . lb3wyb2dez ,
NESL_SIM_PROJECTION , simulationData , diagnosticManager ) ; if ( tmp_i != 0
) { tmp = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp ) {
msg = rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg )
; } } simulationData = ( NeslSimulationData * ) rtDW . gpwzsvid1r ; time_p =
ssGetT ( rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData
-> mData -> mTime . mX = & time_p ; simulationData -> mData -> mContStates .
mN = 2 ; simulationData -> mData -> mContStates . mX = & rtX . gb2ewon1vo [ 0
] ; simulationData -> mData -> mDiscStates . mN = 1 ; simulationData -> mData
-> mDiscStates . mX = & rtDW . dljj5a1cxt ; simulationData -> mData ->
mModeVector . mN = 0 ; simulationData -> mData -> mModeVector . mX = & rtDW .
fw5ooxnkzk ; tmp = ( ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo ( rtS )
-> foundContZcEvents ) ; simulationData -> mData -> mFoundZcEvents = tmp ;
simulationData -> mData -> mIsMajorTimeStep = ssIsMajorTimeStep ( rtS ) ; tmp
= ( ssGetMdlInfoPtr ( rtS ) -> mdlFlags . solverAssertCheck == 1U ) ;
simulationData -> mData -> mIsSolverAssertCheck = tmp ; tmp =
ssIsSolverCheckingCIC ( rtS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = tmp ; tmp = ssIsSolverComputingJacobian ( rtS ) ;
simulationData -> mData -> mIsComputingJacobian = tmp ; simulationData ->
mData -> mIsEvaluatingF0 = ( ssGetEvaluatingF0ForJacobian ( rtS ) != 0 ) ;
tmp = ssIsSolverRequestingReset ( rtS ) ; simulationData -> mData ->
mIsSolverRequestingReset = tmp ; simulationData -> mData ->
mIsModeUpdateTimeStep = ssIsModeUpdateTimeStep ( rtS ) ; tmp_g [ 0 ] = 0 ;
tmp_m [ 0 ] = rtB . h2wzsozxts [ 0 ] ; tmp_m [ 1 ] = rtB . h2wzsozxts [ 1 ] ;
tmp_m [ 2 ] = rtB . h2wzsozxts [ 2 ] ; tmp_m [ 3 ] = rtB . h2wzsozxts [ 3 ] ;
tmp_g [ 1 ] = 4 ; simulationData -> mData -> mInputValues . mN = 4 ;
simulationData -> mData -> mInputValues . mX = & tmp_m [ 0 ] ; simulationData
-> mData -> mInputOffsets . mN = 2 ; simulationData -> mData -> mInputOffsets
. mX = & tmp_g [ 0 ] ; diagnosticManager = ( NeuDiagnosticManager * ) rtDW .
l0offn5pfw ; diagnosticTree_p = neu_diagnostic_manager_get_initial_tree (
diagnosticManager ) ; tmp_i = ne_simulator_method ( ( NeslSimulator * ) rtDW
. cmjfgqom52 , NESL_SIM_PROJECTION , simulationData , diagnosticManager ) ;
if ( tmp_i != 0 ) { tmp = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) )
; if ( tmp ) { msg_p = rtw_diagnostics_msg ( diagnosticTree_p ) ;
ssSetErrorStatus ( rtS , msg_p ) ; } } simulationData = ( NeslSimulationData
* ) rtDW . fmjokqk3g2 ; time_e = ssGetT ( rtS ) ; simulationData -> mData ->
mTime . mN = 1 ; simulationData -> mData -> mTime . mX = & time_e ;
simulationData -> mData -> mContStates . mN = 2 ; simulationData -> mData ->
mContStates . mX = & rtX . bka1w3yj3x [ 0 ] ; simulationData -> mData ->
mDiscStates . mN = 1 ; simulationData -> mData -> mDiscStates . mX = & rtDW .
f3ueebc3dc ; simulationData -> mData -> mModeVector . mN = 0 ; simulationData
-> mData -> mModeVector . mX = & rtDW . pktaxkjkog ; tmp = (
ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo ( rtS ) -> foundContZcEvents
) ; simulationData -> mData -> mFoundZcEvents = tmp ; simulationData -> mData
-> mIsMajorTimeStep = ssIsMajorTimeStep ( rtS ) ; tmp = ( ssGetMdlInfoPtr (
rtS ) -> mdlFlags . solverAssertCheck == 1U ) ; simulationData -> mData ->
mIsSolverAssertCheck = tmp ; tmp = ssIsSolverCheckingCIC ( rtS ) ;
simulationData -> mData -> mIsSolverCheckingCIC = tmp ; tmp =
ssIsSolverComputingJacobian ( rtS ) ; simulationData -> mData ->
mIsComputingJacobian = tmp ; simulationData -> mData -> mIsEvaluatingF0 = (
ssGetEvaluatingF0ForJacobian ( rtS ) != 0 ) ; tmp = ssIsSolverRequestingReset
( rtS ) ; simulationData -> mData -> mIsSolverRequestingReset = tmp ;
simulationData -> mData -> mIsModeUpdateTimeStep = ssIsModeUpdateTimeStep (
rtS ) ; tmp_f [ 0 ] = 0 ; tmp_j [ 0 ] = rtB . f3dt3kwdyy [ 0 ] ; tmp_j [ 1 ]
= rtB . f3dt3kwdyy [ 1 ] ; tmp_j [ 2 ] = rtB . f3dt3kwdyy [ 2 ] ; tmp_j [ 3 ]
= rtB . f3dt3kwdyy [ 3 ] ; tmp_f [ 1 ] = 4 ; simulationData -> mData ->
mInputValues . mN = 4 ; simulationData -> mData -> mInputValues . mX = &
tmp_j [ 0 ] ; simulationData -> mData -> mInputOffsets . mN = 2 ;
simulationData -> mData -> mInputOffsets . mX = & tmp_f [ 0 ] ;
diagnosticManager = ( NeuDiagnosticManager * ) rtDW . jbmhvkycuq ;
diagnosticTree_e = neu_diagnostic_manager_get_initial_tree (
diagnosticManager ) ; tmp_i = ne_simulator_method ( ( NeslSimulator * ) rtDW
. oreix54jo1 , NESL_SIM_PROJECTION , simulationData , diagnosticManager ) ;
if ( tmp_i != 0 ) { tmp = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) )
; if ( tmp ) { msg_e = rtw_diagnostics_msg ( diagnosticTree_e ) ;
ssSetErrorStatus ( rtS , msg_e ) ; } } } void MdlZeroCrossings ( void ) { ZCV
* _rtZCSV ; _rtZCSV = ( ( ZCV * ) ssGetSolverZcSignalVector ( rtS ) ) ;
_rtZCSV -> cslqht0fe5 = rtB . gk45ehdeau - rtP . Saturation_UpperSat ;
_rtZCSV -> p1ngyb1tp3 = rtB . gk45ehdeau - rtP . Saturation_LowerSat ;
_rtZCSV -> cpkiaik3yc = rtB . fslwmfbg4z [ 13 ] ; _rtZCSV -> eloxqpt150 = rtB
. o5sctoydmq - rtP . Switch_Threshold ; } void MdlTerminate ( void ) {
cwp5dxx3gq * obj_p ; cwp5dxx3gqu * obj_k ; ejmcoi31fm * obj_e ; ejmcoi31fmi *
obj_b ; fprravcitl * obj_j ; fykx3ceuls * obj ; fykx3ceulsm * obj_c ;
grjfkdr5ak * obj_m ; i5s4hgzi5z * obj_f ; jy5nolvw3p obj_i ; jy5nolvw3ph
obj_n ; oy2a1akvcj * obj_g ; real_T b_p ; int32_T b ; int32_T b_i ; int32_T e
; if ( ! rtDW . aurrx3wzjl . matlabCodegenIsDeleted ) { rtDW . aurrx3wzjl .
matlabCodegenIsDeleted = true ; } obj_m = & rtDW . aurrx3wzjl . IKInternal ;
if ( ! obj_m -> matlabCodegenIsDeleted ) { obj_m -> matlabCodegenIsDeleted =
true ; if ( obj_m -> isInitialized == 1 ) { obj_m -> isInitialized = 2 ; } }
obj_g = & rtDW . aurrx3wzjl . IKInternal . _pobj5 ; if ( ! obj_g ->
matlabCodegenIsDeleted ) { obj_g -> matlabCodegenIsDeleted = true ; } obj_j =
& rtDW . aurrx3wzjl . IKInternal . _pobj0 ; if ( ! obj_j ->
matlabCodegenIsDeleted ) { obj_j -> matlabCodegenIsDeleted = true ; } obj_f =
& rtDW . aurrx3wzjl . IKInternal . _pobj4 ; if ( ! obj_f ->
matlabCodegenIsDeleted ) { obj_f -> matlabCodegenIsDeleted = true ; } obj_c =
& rtDW . aurrx3wzjl . TreeInternal ; if ( ! obj_c -> matlabCodegenIsDeleted )
{ obj_c -> matlabCodegenIsDeleted = true ; } obj_k = & rtDW . aurrx3wzjl .
TreeInternal . Base ; if ( ! obj_k -> matlabCodegenIsDeleted ) { obj_k ->
matlabCodegenIsDeleted = true ; } for ( b = 0 ; b < 14 ; b ++ ) { obj_k = &
rtDW . aurrx3wzjl . TreeInternal . _pobj2 [ b ] ; if ( ! obj_k ->
matlabCodegenIsDeleted ) { obj_k -> matlabCodegenIsDeleted = true ; } } for (
b = 0 ; b < 7 ; b ++ ) { obj_k = & rtDW . aurrx3wzjl . IKInternal . _pobj2 [
b ] ; if ( ! obj_k -> matlabCodegenIsDeleted ) { obj_k ->
matlabCodegenIsDeleted = true ; } } obj_k = & rtDW . aurrx3wzjl . IKInternal
. _pobj4 . Base ; if ( ! obj_k -> matlabCodegenIsDeleted ) { obj_k ->
matlabCodegenIsDeleted = true ; } for ( b = 0 ; b < 7 ; b ++ ) { obj_k = &
rtDW . aurrx3wzjl . IKInternal . _pobj4 . _pobj0 [ b ] ; if ( ! obj_k ->
matlabCodegenIsDeleted ) { obj_k -> matlabCodegenIsDeleted = true ; } } for (
e = 0 ; e < 15 ; e ++ ) { obj_b = & rtDW . aurrx3wzjl . TreeInternal . _pobj0
[ e ] ; if ( ! obj_b -> matlabCodegenIsDeleted ) { obj_b ->
matlabCodegenIsDeleted = true ; b_p = obj_b -> Size ; b = ( int32_T ) b_p - 1
; for ( b_i = 0 ; b_i <= b ; b_i ++ ) { obj_n = obj_b -> CollisionGeometries
-> data [ b_i ] ; collisioncodegen_destructGeometry ( & obj_n .
CollisionPrimitive ) ; obj_b -> CollisionGeometries -> data [ b_i ] = obj_n ;
} } } for ( e = 0 ; e < 15 ; e ++ ) { obj_b = & rtDW . aurrx3wzjl .
IKInternal . _pobj3 [ e ] ; if ( ! obj_b -> matlabCodegenIsDeleted ) { obj_b
-> matlabCodegenIsDeleted = true ; b_p = obj_b -> Size ; b = ( int32_T ) b_p
- 1 ; for ( b_i = 0 ; b_i <= b ; b_i ++ ) { obj_n = obj_b ->
CollisionGeometries -> data [ b_i ] ; collisioncodegen_destructGeometry ( &
obj_n . CollisionPrimitive ) ; obj_b -> CollisionGeometries -> data [ b_i ] =
obj_n ; } } } for ( e = 0 ; e < 8 ; e ++ ) { obj_b = & rtDW . aurrx3wzjl .
IKInternal . _pobj4 . _pobj1 [ e ] ; if ( ! obj_b -> matlabCodegenIsDeleted )
{ obj_b -> matlabCodegenIsDeleted = true ; b_p = obj_b -> Size ; b = (
int32_T ) b_p - 1 ; for ( b_i = 0 ; b_i <= b ; b_i ++ ) { obj_n = obj_b ->
CollisionGeometries -> data [ b_i ] ; collisioncodegen_destructGeometry ( &
obj_n . CollisionPrimitive ) ; obj_b -> CollisionGeometries -> data [ b_i ] =
obj_n ; } } } f35545hcid ( & rtDW . aurrx3wzjl ) ; rt_FREE ( rtDW .
iyonscealb . RSimInfoPtr ) ; rt_FREE ( rtDW . hfgna5tkoq . RSimInfoPtr ) ;
rt_FREE ( rtDW . lc4ovzpgpe . RSimInfoPtr ) ; rt_FREE ( rtDW . begvxujstw .
RSimInfoPtr ) ; neu_destroy_diagnostic_manager ( ( NeuDiagnosticManager * )
rtDW . ladhvtfsgz ) ; nesl_destroy_simulation_data ( ( NeslSimulationData * )
rtDW . g3ij452qky ) ; nesl_erase_simulator (
 "Top_Level_Simulation/Simulation Environment/Position Actuated Robot Environment/Solver Configuration_1"
) ; nesl_destroy_registry ( ) ; neu_destroy_diagnostic_manager ( (
NeuDiagnosticManager * ) rtDW . exuhvzpgsm ) ; nesl_destroy_simulation_data (
( NeslSimulationData * ) rtDW . cycsofdxfe ) ; nesl_erase_simulator (
 "Top_Level_Simulation/Simulation Environment/Position Actuated Robot Environment/Solver Configuration_1"
) ; nesl_destroy_registry ( ) ; if ( ! rtDW . okj1p03aot .
matlabCodegenIsDeleted ) { rtDW . okj1p03aot . matlabCodegenIsDeleted = true
; } obj = & rtDW . okj1p03aot . TreeInternal ; if ( ! obj ->
matlabCodegenIsDeleted ) { obj -> matlabCodegenIsDeleted = true ; } obj_p = &
rtDW . okj1p03aot . TreeInternal . Base ; if ( ! obj_p ->
matlabCodegenIsDeleted ) { obj_p -> matlabCodegenIsDeleted = true ; } for ( b
= 0 ; b < 14 ; b ++ ) { obj_p = & rtDW . okj1p03aot . TreeInternal . _pobj0 [
b ] ; if ( ! obj_p -> matlabCodegenIsDeleted ) { obj_p ->
matlabCodegenIsDeleted = true ; } } obj_e = & rtDW . okj1p03aot .
TreeInternal . Base . CollisionsInternal ; if ( ! obj_e ->
matlabCodegenIsDeleted ) { obj_e -> matlabCodegenIsDeleted = true ; b_p =
obj_e -> Size ; b = ( int32_T ) b_p - 1 ; for ( b_i = 0 ; b_i <= b ; b_i ++ )
{ obj_i = obj_e -> CollisionGeometries -> data [ b_i ] ;
collisioncodegen_destructGeometry ( & obj_i . CollisionPrimitive ) ; obj_e ->
CollisionGeometries -> data [ b_i ] = obj_i ; } } for ( b = 0 ; b < 14 ; b ++
) { obj_e = & rtDW . okj1p03aot . TreeInternal . _pobj0 [ b ] .
CollisionsInternal ; if ( ! obj_e -> matlabCodegenIsDeleted ) { obj_e ->
matlabCodegenIsDeleted = true ; b_p = obj_e -> Size ; e = ( int32_T ) b_p - 1
; for ( b_i = 0 ; b_i <= e ; b_i ++ ) { obj_i = obj_e -> CollisionGeometries
-> data [ b_i ] ; collisioncodegen_destructGeometry ( & obj_i .
CollisionPrimitive ) ; obj_e -> CollisionGeometries -> data [ b_i ] = obj_i ;
} } } f35545hcidc ( & rtDW . okj1p03aot ) ; rt_FREE ( rtDW . kez14kn3ym .
RSimInfoPtr ) ; neu_destroy_diagnostic_manager ( ( NeuDiagnosticManager * )
rtDW . l0offn5pfw ) ; nesl_destroy_simulation_data ( ( NeslSimulationData * )
rtDW . gpwzsvid1r ) ; nesl_erase_simulator (
 "Top_Level_Simulation/Simulation Environment/Position Actuated Robot Environment/Solver Configuration_3"
) ; nesl_destroy_registry ( ) ; neu_destroy_diagnostic_manager ( (
NeuDiagnosticManager * ) rtDW . jbztwjzszw ) ; nesl_destroy_simulation_data (
( NeslSimulationData * ) rtDW . pi2dmccavk ) ; nesl_erase_simulator (
 "Top_Level_Simulation/Simulation Environment/Position Actuated Robot Environment/Solver Configuration_3"
) ; nesl_destroy_registry ( ) ; neu_destroy_diagnostic_manager ( (
NeuDiagnosticManager * ) rtDW . jbmhvkycuq ) ; nesl_destroy_simulation_data (
( NeslSimulationData * ) rtDW . fmjokqk3g2 ) ; nesl_erase_simulator (
 "Top_Level_Simulation/Simulation Environment/Position Actuated Robot Environment/Solver Configuration_2"
) ; nesl_destroy_registry ( ) ; neu_destroy_diagnostic_manager ( (
NeuDiagnosticManager * ) rtDW . mc2c422l4v ) ; nesl_destroy_simulation_data (
( NeslSimulationData * ) rtDW . d05ty02jkv ) ; nesl_erase_simulator (
 "Top_Level_Simulation/Simulation Environment/Position Actuated Robot Environment/Solver Configuration_2"
) ; nesl_destroy_registry ( ) ; { if ( rtDW . gcaetr4bcc . AQHandles ) {
sdiTerminateStreaming ( & rtDW . gcaetr4bcc . AQHandles ) ; } } { if ( rtDW .
ajcidjpwry . AQHandles ) { sdiTerminateStreaming ( & rtDW . ajcidjpwry .
AQHandles ) ; } } { if ( rtDW . opma5fwgxt . AQHandles ) {
sdiTerminateStreaming ( & rtDW . opma5fwgxt . AQHandles ) ; } } { if ( rtDW .
i1b4erv544 . AQHandles ) { sdiTerminateStreaming ( & rtDW . i1b4erv544 .
AQHandles ) ; } } { if ( rtDW . o25sxexqnc . AQHandles ) {
sdiTerminateStreaming ( & rtDW . o25sxexqnc . AQHandles ) ; } } { if ( rtDW .
guynqgbksu . AQHandles ) { sdiTerminateStreaming ( & rtDW . guynqgbksu .
AQHandles ) ; } } } static void mr_Top_Level_Simulation_cacheDataAsMxArray (
mxArray * destArray , mwIndex i , int j , const void * srcData , size_t
numBytes ) ; static void mr_Top_Level_Simulation_cacheDataAsMxArray ( mxArray
* destArray , mwIndex i , int j , const void * srcData , size_t numBytes ) {
mxArray * newArray = mxCreateUninitNumericMatrix ( ( size_t ) 1 , numBytes ,
mxUINT8_CLASS , mxREAL ) ; memcpy ( ( uint8_T * ) mxGetData ( newArray ) , (
const uint8_T * ) srcData , numBytes ) ; mxSetFieldByNumber ( destArray , i ,
j , newArray ) ; } static void mr_Top_Level_Simulation_restoreDataFromMxArray
( void * destData , const mxArray * srcArray , mwIndex i , int j , size_t
numBytes ) ; static void mr_Top_Level_Simulation_restoreDataFromMxArray (
void * destData , const mxArray * srcArray , mwIndex i , int j , size_t
numBytes ) { memcpy ( ( uint8_T * ) destData , ( const uint8_T * ) mxGetData
( mxGetFieldByNumber ( srcArray , i , j ) ) , numBytes ) ; } static void
mr_Top_Level_Simulation_cacheBitFieldToMxArray ( mxArray * destArray ,
mwIndex i , int j , uint_T bitVal ) ; static void
mr_Top_Level_Simulation_cacheBitFieldToMxArray ( mxArray * destArray ,
mwIndex i , int j , uint_T bitVal ) { mxSetFieldByNumber ( destArray , i , j
, mxCreateDoubleScalar ( ( real_T ) bitVal ) ) ; } static uint_T
mr_Top_Level_Simulation_extractBitFieldFromMxArray ( const mxArray * srcArray
, mwIndex i , int j , uint_T numBits ) ; static uint_T
mr_Top_Level_Simulation_extractBitFieldFromMxArray ( const mxArray * srcArray
, mwIndex i , int j , uint_T numBits ) { const uint_T varVal = ( uint_T )
mxGetScalar ( mxGetFieldByNumber ( srcArray , i , j ) ) ; return varVal & ( (
1u << numBits ) - 1u ) ; } static void
mr_Top_Level_Simulation_cacheDataToMxArrayWithOffset ( mxArray * destArray ,
mwIndex i , int j , mwIndex offset , const void * srcData , size_t numBytes )
; static void mr_Top_Level_Simulation_cacheDataToMxArrayWithOffset ( mxArray
* destArray , mwIndex i , int j , mwIndex offset , const void * srcData ,
size_t numBytes ) { uint8_T * varData = ( uint8_T * ) mxGetData (
mxGetFieldByNumber ( destArray , i , j ) ) ; memcpy ( ( uint8_T * ) & varData
[ offset * numBytes ] , ( const uint8_T * ) srcData , numBytes ) ; } static
void mr_Top_Level_Simulation_restoreDataFromMxArrayWithOffset ( void *
destData , const mxArray * srcArray , mwIndex i , int j , mwIndex offset ,
size_t numBytes ) ; static void
mr_Top_Level_Simulation_restoreDataFromMxArrayWithOffset ( void * destData ,
const mxArray * srcArray , mwIndex i , int j , mwIndex offset , size_t
numBytes ) { const uint8_T * varData = ( const uint8_T * ) mxGetData (
mxGetFieldByNumber ( srcArray , i , j ) ) ; memcpy ( ( uint8_T * ) destData ,
( const uint8_T * ) & varData [ offset * numBytes ] , numBytes ) ; } static
void mr_Top_Level_Simulation_cacheBitFieldToCellArrayWithOffset ( mxArray *
destArray , mwIndex i , int j , mwIndex offset , uint_T fieldVal ) ; static
void mr_Top_Level_Simulation_cacheBitFieldToCellArrayWithOffset ( mxArray *
destArray , mwIndex i , int j , mwIndex offset , uint_T fieldVal ) {
mxSetCell ( mxGetFieldByNumber ( destArray , i , j ) , offset ,
mxCreateDoubleScalar ( ( real_T ) fieldVal ) ) ; } static uint_T
mr_Top_Level_Simulation_extractBitFieldFromCellArrayWithOffset ( const
mxArray * srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) ;
static uint_T mr_Top_Level_Simulation_extractBitFieldFromCellArrayWithOffset
( const mxArray * srcArray , mwIndex i , int j , mwIndex offset , uint_T
numBits ) { const uint_T fieldVal = ( uint_T ) mxGetScalar ( mxGetCell (
mxGetFieldByNumber ( srcArray , i , j ) , offset ) ) ; return fieldVal & ( (
1u << numBits ) - 1u ) ; } mxArray * mr_Top_Level_Simulation_GetDWork ( ) {
static const char_T * ssDWFieldNames [ 3 ] = { "rtB" , "rtDW" , "rtPrevZCX" ,
} ; mxArray * ssDW = mxCreateStructMatrix ( 1 , 1 , 3 , ssDWFieldNames ) ;
mr_Top_Level_Simulation_cacheDataAsMxArray ( ssDW , 0 , 0 , ( const void * )
& ( rtB ) , sizeof ( rtB ) ) ; { static const char_T * rtdwDataFieldNames [
95 ] = { "rtDW.aurrx3wzjl" , "rtDW.okj1p03aot" , "rtDW.g32rtzaewg" ,
"rtDW.gq5kmr5vn1" , "rtDW.jkey2toi31" , "rtDW.bf53hkrvir" , "rtDW.ki1145bcrm"
, "rtDW.h0arbssjyh" , "rtDW.omatls04hq" , "rtDW.e5hdpgr2ka" ,
"rtDW.inr1htksx0" , "rtDW.h4l15hdscn" , "rtDW.f3dg4s3p0a" , "rtDW.hrhmbgcbnf"
, "rtDW.kliragzquq" , "rtDW.aukxopp0nd" , "rtDW.bx3fwsg2i1" ,
"rtDW.l41spvcbdc" , "rtDW.fnnnyc1uga" , "rtDW.dwnerbwwhs" , "rtDW.cond3vx0se"
, "rtDW.lpmlshwp0j" , "rtDW.mzjt1324lw" , "rtDW.ntb1y3fl2p" ,
"rtDW.imkh41nhlt" , "rtDW.ngjgnzl4gl" , "rtDW.jrxplcb3hu" , "rtDW.ktng2gyshq"
, "rtDW.am3m0kfq1x" , "rtDW.p3bilm21pq" , "rtDW.kck0lmeenj" ,
"rtDW.biccrvyj3f" , "rtDW.mlgn03udwf" , "rtDW.m5xagcm5xa" , "rtDW.hdgzj3hwb1"
, "rtDW.ddcwn3ttzc" , "rtDW.dljj5a1cxt" , "rtDW.lsxh51j3mv" ,
"rtDW.bmvq5132uc" , "rtDW.odvklzp2rd" , "rtDW.fwcedxrxfk" , "rtDW.f3ueebc3dc"
, "rtDW.gxo2umq0us" , "rtDW.om5ijxdmex" , "rtDW.p03lurvs2x" ,
"rtDW.ihlssyb2ha" , "rtDW.d3ks3dcnzm" , "rtDW.as5rdedmxo" , "rtDW.fa5qdx3osn"
, "rtDW.mre1zjqmyg" , "rtDW.c1xv4lavyx" , "rtDW.jl5ooysd2s" ,
"rtDW.eifup1x5cc" , "rtDW.mm51shfpuc" , "rtDW.dky15kevds" , "rtDW.lbdnrt5k2u"
, "rtDW.iad4zbxzgs" , "rtDW.hyyf22gvlr" , "rtDW.b01cx0ynrl" ,
"rtDW.lmh145ati3" , "rtDW.ah1glsmkae" , "rtDW.dvzs4nrqov" , "rtDW.gh0oec1z5w"
, "rtDW.ahwnshb1lx" , "rtDW.aqvwut4gxx" , "rtDW.gdmfsz4u3k" ,
"rtDW.lo0wac2a2b" , "rtDW.fw5ooxnkzk" , "rtDW.hsxcmjmtgd" , "rtDW.pktaxkjkog"
, "rtDW.hydze1iruo" , "rtDW.nbd2ciowee" , "rtDW.eisab1mvjn" ,
"rtDW.aes52he5qp" , "rtDW.iqfygxjppa" , "rtDW.o4q5nva5zq" , "rtDW.gphonxq0y5"
, "rtDW.myukt1dkx2" , "rtDW.jlomuqw2nj" , "rtDW.anywdxjzfj" ,
"rtDW.ikadmncmhw" , "rtDW.excyoskhit" , "rtDW.jqluzytle2" , "rtDW.je2chgxwr3"
, "rtDW.gb0pu4b4jm" , "rtDW.plsp5vol0y" , "rtDW.ghd034ermt" ,
"rtDW.kjyys5fqrc" , "rtDW.k2aa442psi" , "rtDW.myznoztvgf" , "rtDW.oiqnpg1c2e"
, "rtDW.nm05ot5thg" , "rtDW.k3ntuowunk" , "rtDW.pxlzvepeuu" ,
"rtDW.m54kshliay" , } ; mxArray * rtdwData = mxCreateStructMatrix ( 1 , 1 ,
95 , rtdwDataFieldNames ) ; mr_Top_Level_Simulation_cacheDataAsMxArray (
rtdwData , 0 , 0 , ( const void * ) & ( rtDW . aurrx3wzjl ) , sizeof ( rtDW .
aurrx3wzjl ) ) ; mr_Top_Level_Simulation_cacheDataAsMxArray ( rtdwData , 0 ,
1 , ( const void * ) & ( rtDW . okj1p03aot ) , sizeof ( rtDW . okj1p03aot ) )
; mr_Top_Level_Simulation_cacheDataAsMxArray ( rtdwData , 0 , 2 , ( const
void * ) & ( rtDW . g32rtzaewg ) , sizeof ( rtDW . g32rtzaewg ) ) ;
mr_Top_Level_Simulation_cacheDataAsMxArray ( rtdwData , 0 , 3 , ( const void
* ) & ( rtDW . gq5kmr5vn1 ) , sizeof ( rtDW . gq5kmr5vn1 ) ) ;
mr_Top_Level_Simulation_cacheDataAsMxArray ( rtdwData , 0 , 4 , ( const void
* ) & ( rtDW . jkey2toi31 ) , sizeof ( rtDW . jkey2toi31 ) ) ;
mr_Top_Level_Simulation_cacheDataAsMxArray ( rtdwData , 0 , 5 , ( const void
* ) & ( rtDW . bf53hkrvir ) , sizeof ( rtDW . bf53hkrvir ) ) ;
mr_Top_Level_Simulation_cacheDataAsMxArray ( rtdwData , 0 , 6 , ( const void
* ) & ( rtDW . ki1145bcrm ) , sizeof ( rtDW . ki1145bcrm ) ) ;
mr_Top_Level_Simulation_cacheDataAsMxArray ( rtdwData , 0 , 7 , ( const void
* ) & ( rtDW . h0arbssjyh ) , sizeof ( rtDW . h0arbssjyh ) ) ;
mr_Top_Level_Simulation_cacheDataAsMxArray ( rtdwData , 0 , 8 , ( const void
* ) & ( rtDW . omatls04hq ) , sizeof ( rtDW . omatls04hq ) ) ;
mr_Top_Level_Simulation_cacheDataAsMxArray ( rtdwData , 0 , 9 , ( const void
* ) & ( rtDW . e5hdpgr2ka ) , sizeof ( rtDW . e5hdpgr2ka ) ) ;
mr_Top_Level_Simulation_cacheDataAsMxArray ( rtdwData , 0 , 10 , ( const void
* ) & ( rtDW . inr1htksx0 ) , sizeof ( rtDW . inr1htksx0 ) ) ;
mr_Top_Level_Simulation_cacheDataAsMxArray ( rtdwData , 0 , 11 , ( const void
* ) & ( rtDW . h4l15hdscn ) , sizeof ( rtDW . h4l15hdscn ) ) ;
mr_Top_Level_Simulation_cacheDataAsMxArray ( rtdwData , 0 , 12 , ( const void
* ) & ( rtDW . f3dg4s3p0a ) , sizeof ( rtDW . f3dg4s3p0a ) ) ;
mr_Top_Level_Simulation_cacheDataAsMxArray ( rtdwData , 0 , 13 , ( const void
* ) & ( rtDW . hrhmbgcbnf ) , sizeof ( rtDW . hrhmbgcbnf ) ) ;
mr_Top_Level_Simulation_cacheDataAsMxArray ( rtdwData , 0 , 14 , ( const void
* ) & ( rtDW . kliragzquq ) , sizeof ( rtDW . kliragzquq ) ) ;
mr_Top_Level_Simulation_cacheDataAsMxArray ( rtdwData , 0 , 15 , ( const void
* ) & ( rtDW . aukxopp0nd ) , sizeof ( rtDW . aukxopp0nd ) ) ;
mr_Top_Level_Simulation_cacheDataAsMxArray ( rtdwData , 0 , 16 , ( const void
* ) & ( rtDW . bx3fwsg2i1 ) , sizeof ( rtDW . bx3fwsg2i1 ) ) ;
mr_Top_Level_Simulation_cacheDataAsMxArray ( rtdwData , 0 , 17 , ( const void
* ) & ( rtDW . l41spvcbdc ) , sizeof ( rtDW . l41spvcbdc ) ) ;
mr_Top_Level_Simulation_cacheDataAsMxArray ( rtdwData , 0 , 18 , ( const void
* ) & ( rtDW . fnnnyc1uga ) , sizeof ( rtDW . fnnnyc1uga ) ) ;
mr_Top_Level_Simulation_cacheDataAsMxArray ( rtdwData , 0 , 19 , ( const void
* ) & ( rtDW . dwnerbwwhs ) , sizeof ( rtDW . dwnerbwwhs ) ) ;
mr_Top_Level_Simulation_cacheDataAsMxArray ( rtdwData , 0 , 20 , ( const void
* ) & ( rtDW . cond3vx0se ) , sizeof ( rtDW . cond3vx0se ) ) ;
mr_Top_Level_Simulation_cacheDataAsMxArray ( rtdwData , 0 , 21 , ( const void
* ) & ( rtDW . lpmlshwp0j ) , sizeof ( rtDW . lpmlshwp0j ) ) ;
mr_Top_Level_Simulation_cacheDataAsMxArray ( rtdwData , 0 , 22 , ( const void
* ) & ( rtDW . mzjt1324lw ) , sizeof ( rtDW . mzjt1324lw ) ) ;
mr_Top_Level_Simulation_cacheDataAsMxArray ( rtdwData , 0 , 23 , ( const void
* ) & ( rtDW . ntb1y3fl2p ) , sizeof ( rtDW . ntb1y3fl2p ) ) ;
mr_Top_Level_Simulation_cacheDataAsMxArray ( rtdwData , 0 , 24 , ( const void
* ) & ( rtDW . imkh41nhlt ) , sizeof ( rtDW . imkh41nhlt ) ) ;
mr_Top_Level_Simulation_cacheDataAsMxArray ( rtdwData , 0 , 25 , ( const void
* ) & ( rtDW . ngjgnzl4gl ) , sizeof ( rtDW . ngjgnzl4gl ) ) ;
mr_Top_Level_Simulation_cacheDataAsMxArray ( rtdwData , 0 , 26 , ( const void
* ) & ( rtDW . jrxplcb3hu ) , sizeof ( rtDW . jrxplcb3hu ) ) ;
mr_Top_Level_Simulation_cacheDataAsMxArray ( rtdwData , 0 , 27 , ( const void
* ) & ( rtDW . ktng2gyshq ) , sizeof ( rtDW . ktng2gyshq ) ) ;
mr_Top_Level_Simulation_cacheDataAsMxArray ( rtdwData , 0 , 28 , ( const void
* ) & ( rtDW . am3m0kfq1x ) , sizeof ( rtDW . am3m0kfq1x ) ) ;
mr_Top_Level_Simulation_cacheDataAsMxArray ( rtdwData , 0 , 29 , ( const void
* ) & ( rtDW . p3bilm21pq ) , sizeof ( rtDW . p3bilm21pq ) ) ;
mr_Top_Level_Simulation_cacheDataAsMxArray ( rtdwData , 0 , 30 , ( const void
* ) & ( rtDW . kck0lmeenj ) , sizeof ( rtDW . kck0lmeenj ) ) ;
mr_Top_Level_Simulation_cacheDataAsMxArray ( rtdwData , 0 , 31 , ( const void
* ) & ( rtDW . biccrvyj3f ) , sizeof ( rtDW . biccrvyj3f ) ) ;
mr_Top_Level_Simulation_cacheDataAsMxArray ( rtdwData , 0 , 32 , ( const void
* ) & ( rtDW . mlgn03udwf ) , sizeof ( rtDW . mlgn03udwf ) ) ;
mr_Top_Level_Simulation_cacheDataAsMxArray ( rtdwData , 0 , 33 , ( const void
* ) & ( rtDW . m5xagcm5xa ) , sizeof ( rtDW . m5xagcm5xa ) ) ;
mr_Top_Level_Simulation_cacheDataAsMxArray ( rtdwData , 0 , 34 , ( const void
* ) & ( rtDW . hdgzj3hwb1 ) , sizeof ( rtDW . hdgzj3hwb1 ) ) ;
mr_Top_Level_Simulation_cacheDataAsMxArray ( rtdwData , 0 , 35 , ( const void
* ) & ( rtDW . ddcwn3ttzc ) , sizeof ( rtDW . ddcwn3ttzc ) ) ;
mr_Top_Level_Simulation_cacheDataAsMxArray ( rtdwData , 0 , 36 , ( const void
* ) & ( rtDW . dljj5a1cxt ) , sizeof ( rtDW . dljj5a1cxt ) ) ;
mr_Top_Level_Simulation_cacheDataAsMxArray ( rtdwData , 0 , 37 , ( const void
* ) & ( rtDW . lsxh51j3mv ) , sizeof ( rtDW . lsxh51j3mv ) ) ;
mr_Top_Level_Simulation_cacheDataAsMxArray ( rtdwData , 0 , 38 , ( const void
* ) & ( rtDW . bmvq5132uc ) , sizeof ( rtDW . bmvq5132uc ) ) ;
mr_Top_Level_Simulation_cacheDataAsMxArray ( rtdwData , 0 , 39 , ( const void
* ) & ( rtDW . odvklzp2rd ) , sizeof ( rtDW . odvklzp2rd ) ) ;
mr_Top_Level_Simulation_cacheDataAsMxArray ( rtdwData , 0 , 40 , ( const void
* ) & ( rtDW . fwcedxrxfk ) , sizeof ( rtDW . fwcedxrxfk ) ) ;
mr_Top_Level_Simulation_cacheDataAsMxArray ( rtdwData , 0 , 41 , ( const void
* ) & ( rtDW . f3ueebc3dc ) , sizeof ( rtDW . f3ueebc3dc ) ) ;
mr_Top_Level_Simulation_cacheDataAsMxArray ( rtdwData , 0 , 42 , ( const void
* ) & ( rtDW . gxo2umq0us ) , sizeof ( rtDW . gxo2umq0us ) ) ;
mr_Top_Level_Simulation_cacheDataAsMxArray ( rtdwData , 0 , 43 , ( const void
* ) & ( rtDW . om5ijxdmex ) , sizeof ( rtDW . om5ijxdmex ) ) ;
mr_Top_Level_Simulation_cacheDataAsMxArray ( rtdwData , 0 , 44 , ( const void
* ) & ( rtDW . p03lurvs2x ) , sizeof ( rtDW . p03lurvs2x ) ) ;
mr_Top_Level_Simulation_cacheDataAsMxArray ( rtdwData , 0 , 45 , ( const void
* ) & ( rtDW . ihlssyb2ha ) , sizeof ( rtDW . ihlssyb2ha ) ) ;
mr_Top_Level_Simulation_cacheDataAsMxArray ( rtdwData , 0 , 46 , ( const void
* ) & ( rtDW . d3ks3dcnzm ) , sizeof ( rtDW . d3ks3dcnzm ) ) ;
mr_Top_Level_Simulation_cacheDataAsMxArray ( rtdwData , 0 , 47 , ( const void
* ) & ( rtDW . as5rdedmxo ) , sizeof ( rtDW . as5rdedmxo ) ) ;
mr_Top_Level_Simulation_cacheDataAsMxArray ( rtdwData , 0 , 48 , ( const void
* ) & ( rtDW . fa5qdx3osn ) , sizeof ( rtDW . fa5qdx3osn ) ) ;
mr_Top_Level_Simulation_cacheDataAsMxArray ( rtdwData , 0 , 49 , ( const void
* ) & ( rtDW . mre1zjqmyg ) , sizeof ( rtDW . mre1zjqmyg ) ) ;
mr_Top_Level_Simulation_cacheDataAsMxArray ( rtdwData , 0 , 50 , ( const void
* ) & ( rtDW . c1xv4lavyx ) , sizeof ( rtDW . c1xv4lavyx ) ) ;
mr_Top_Level_Simulation_cacheDataAsMxArray ( rtdwData , 0 , 51 , ( const void
* ) & ( rtDW . jl5ooysd2s ) , sizeof ( rtDW . jl5ooysd2s ) ) ;
mr_Top_Level_Simulation_cacheDataAsMxArray ( rtdwData , 0 , 52 , ( const void
* ) & ( rtDW . eifup1x5cc ) , sizeof ( rtDW . eifup1x5cc ) ) ;
mr_Top_Level_Simulation_cacheDataAsMxArray ( rtdwData , 0 , 53 , ( const void
* ) & ( rtDW . mm51shfpuc ) , sizeof ( rtDW . mm51shfpuc ) ) ;
mr_Top_Level_Simulation_cacheDataAsMxArray ( rtdwData , 0 , 54 , ( const void
* ) & ( rtDW . dky15kevds ) , sizeof ( rtDW . dky15kevds ) ) ;
mr_Top_Level_Simulation_cacheDataAsMxArray ( rtdwData , 0 , 55 , ( const void
* ) & ( rtDW . lbdnrt5k2u ) , sizeof ( rtDW . lbdnrt5k2u ) ) ;
mr_Top_Level_Simulation_cacheDataAsMxArray ( rtdwData , 0 , 56 , ( const void
* ) & ( rtDW . iad4zbxzgs ) , sizeof ( rtDW . iad4zbxzgs ) ) ;
mr_Top_Level_Simulation_cacheDataAsMxArray ( rtdwData , 0 , 57 , ( const void
* ) & ( rtDW . hyyf22gvlr ) , sizeof ( rtDW . hyyf22gvlr ) ) ;
mr_Top_Level_Simulation_cacheDataAsMxArray ( rtdwData , 0 , 58 , ( const void
* ) & ( rtDW . b01cx0ynrl ) , sizeof ( rtDW . b01cx0ynrl ) ) ;
mr_Top_Level_Simulation_cacheDataAsMxArray ( rtdwData , 0 , 59 , ( const void
* ) & ( rtDW . lmh145ati3 ) , sizeof ( rtDW . lmh145ati3 ) ) ;
mr_Top_Level_Simulation_cacheDataAsMxArray ( rtdwData , 0 , 60 , ( const void
* ) & ( rtDW . ah1glsmkae ) , sizeof ( rtDW . ah1glsmkae ) ) ;
mr_Top_Level_Simulation_cacheDataAsMxArray ( rtdwData , 0 , 61 , ( const void
* ) & ( rtDW . dvzs4nrqov ) , sizeof ( rtDW . dvzs4nrqov ) ) ;
mr_Top_Level_Simulation_cacheDataAsMxArray ( rtdwData , 0 , 62 , ( const void
* ) & ( rtDW . gh0oec1z5w ) , sizeof ( rtDW . gh0oec1z5w ) ) ;
mr_Top_Level_Simulation_cacheDataAsMxArray ( rtdwData , 0 , 63 , ( const void
* ) & ( rtDW . ahwnshb1lx ) , sizeof ( rtDW . ahwnshb1lx ) ) ;
mr_Top_Level_Simulation_cacheDataAsMxArray ( rtdwData , 0 , 64 , ( const void
* ) & ( rtDW . aqvwut4gxx ) , sizeof ( rtDW . aqvwut4gxx ) ) ;
mr_Top_Level_Simulation_cacheDataAsMxArray ( rtdwData , 0 , 65 , ( const void
* ) & ( rtDW . gdmfsz4u3k ) , sizeof ( rtDW . gdmfsz4u3k ) ) ;
mr_Top_Level_Simulation_cacheDataAsMxArray ( rtdwData , 0 , 66 , ( const void
* ) & ( rtDW . lo0wac2a2b ) , sizeof ( rtDW . lo0wac2a2b ) ) ;
mr_Top_Level_Simulation_cacheDataAsMxArray ( rtdwData , 0 , 67 , ( const void
* ) & ( rtDW . fw5ooxnkzk ) , sizeof ( rtDW . fw5ooxnkzk ) ) ;
mr_Top_Level_Simulation_cacheDataAsMxArray ( rtdwData , 0 , 68 , ( const void
* ) & ( rtDW . hsxcmjmtgd ) , sizeof ( rtDW . hsxcmjmtgd ) ) ;
mr_Top_Level_Simulation_cacheDataAsMxArray ( rtdwData , 0 , 69 , ( const void
* ) & ( rtDW . pktaxkjkog ) , sizeof ( rtDW . pktaxkjkog ) ) ;
mr_Top_Level_Simulation_cacheDataAsMxArray ( rtdwData , 0 , 70 , ( const void
* ) & ( rtDW . hydze1iruo ) , sizeof ( rtDW . hydze1iruo ) ) ;
mr_Top_Level_Simulation_cacheDataAsMxArray ( rtdwData , 0 , 71 , ( const void
* ) & ( rtDW . nbd2ciowee ) , sizeof ( rtDW . nbd2ciowee ) ) ;
mr_Top_Level_Simulation_cacheDataAsMxArray ( rtdwData , 0 , 72 , ( const void
* ) & ( rtDW . eisab1mvjn ) , sizeof ( rtDW . eisab1mvjn ) ) ;
mr_Top_Level_Simulation_cacheDataAsMxArray ( rtdwData , 0 , 73 , ( const void
* ) & ( rtDW . aes52he5qp ) , sizeof ( rtDW . aes52he5qp ) ) ;
mr_Top_Level_Simulation_cacheDataAsMxArray ( rtdwData , 0 , 74 , ( const void
* ) & ( rtDW . iqfygxjppa ) , sizeof ( rtDW . iqfygxjppa ) ) ;
mr_Top_Level_Simulation_cacheDataAsMxArray ( rtdwData , 0 , 75 , ( const void
* ) & ( rtDW . o4q5nva5zq ) , sizeof ( rtDW . o4q5nva5zq ) ) ;
mr_Top_Level_Simulation_cacheDataAsMxArray ( rtdwData , 0 , 76 , ( const void
* ) & ( rtDW . gphonxq0y5 ) , sizeof ( rtDW . gphonxq0y5 ) ) ;
mr_Top_Level_Simulation_cacheDataAsMxArray ( rtdwData , 0 , 77 , ( const void
* ) & ( rtDW . myukt1dkx2 ) , sizeof ( rtDW . myukt1dkx2 ) ) ;
mr_Top_Level_Simulation_cacheDataAsMxArray ( rtdwData , 0 , 78 , ( const void
* ) & ( rtDW . jlomuqw2nj ) , sizeof ( rtDW . jlomuqw2nj ) ) ;
mr_Top_Level_Simulation_cacheDataAsMxArray ( rtdwData , 0 , 79 , ( const void
* ) & ( rtDW . anywdxjzfj ) , sizeof ( rtDW . anywdxjzfj ) ) ;
mr_Top_Level_Simulation_cacheDataAsMxArray ( rtdwData , 0 , 80 , ( const void
* ) & ( rtDW . ikadmncmhw ) , sizeof ( rtDW . ikadmncmhw ) ) ;
mr_Top_Level_Simulation_cacheDataAsMxArray ( rtdwData , 0 , 81 , ( const void
* ) & ( rtDW . excyoskhit ) , sizeof ( rtDW . excyoskhit ) ) ;
mr_Top_Level_Simulation_cacheDataAsMxArray ( rtdwData , 0 , 82 , ( const void
* ) & ( rtDW . jqluzytle2 ) , sizeof ( rtDW . jqluzytle2 ) ) ;
mr_Top_Level_Simulation_cacheDataAsMxArray ( rtdwData , 0 , 83 , ( const void
* ) & ( rtDW . je2chgxwr3 ) , sizeof ( rtDW . je2chgxwr3 ) ) ;
mr_Top_Level_Simulation_cacheDataAsMxArray ( rtdwData , 0 , 84 , ( const void
* ) & ( rtDW . gb0pu4b4jm ) , sizeof ( rtDW . gb0pu4b4jm ) ) ;
mr_Top_Level_Simulation_cacheDataAsMxArray ( rtdwData , 0 , 85 , ( const void
* ) & ( rtDW . plsp5vol0y ) , sizeof ( rtDW . plsp5vol0y ) ) ;
mr_Top_Level_Simulation_cacheDataAsMxArray ( rtdwData , 0 , 86 , ( const void
* ) & ( rtDW . ghd034ermt ) , sizeof ( rtDW . ghd034ermt ) ) ;
mr_Top_Level_Simulation_cacheDataAsMxArray ( rtdwData , 0 , 87 , ( const void
* ) & ( rtDW . kjyys5fqrc ) , sizeof ( rtDW . kjyys5fqrc ) ) ;
mr_Top_Level_Simulation_cacheDataAsMxArray ( rtdwData , 0 , 88 , ( const void
* ) & ( rtDW . k2aa442psi ) , sizeof ( rtDW . k2aa442psi ) ) ;
mr_Top_Level_Simulation_cacheDataAsMxArray ( rtdwData , 0 , 89 , ( const void
* ) & ( rtDW . myznoztvgf ) , sizeof ( rtDW . myznoztvgf ) ) ;
mr_Top_Level_Simulation_cacheDataAsMxArray ( rtdwData , 0 , 90 , ( const void
* ) & ( rtDW . oiqnpg1c2e ) , sizeof ( rtDW . oiqnpg1c2e ) ) ;
mr_Top_Level_Simulation_cacheDataAsMxArray ( rtdwData , 0 , 91 , ( const void
* ) & ( rtDW . nm05ot5thg ) , sizeof ( rtDW . nm05ot5thg ) ) ;
mr_Top_Level_Simulation_cacheDataAsMxArray ( rtdwData , 0 , 92 , ( const void
* ) & ( rtDW . k3ntuowunk ) , sizeof ( rtDW . k3ntuowunk ) ) ;
mr_Top_Level_Simulation_cacheDataAsMxArray ( rtdwData , 0 , 93 , ( const void
* ) & ( rtDW . pxlzvepeuu ) , sizeof ( rtDW . pxlzvepeuu ) ) ;
mr_Top_Level_Simulation_cacheDataAsMxArray ( rtdwData , 0 , 94 , ( const void
* ) & ( rtDW . m54kshliay ) , sizeof ( rtDW . m54kshliay ) ) ;
mxSetFieldByNumber ( ssDW , 0 , 1 , rtdwData ) ; }
mr_Top_Level_Simulation_cacheDataAsMxArray ( ssDW , 0 , 2 , ( const void * )
& ( rtPrevZCX ) , sizeof ( rtPrevZCX ) ) ; return ssDW ; } void
mr_Top_Level_Simulation_SetDWork ( const mxArray * ssDW ) { ( void ) ssDW ;
mr_Top_Level_Simulation_restoreDataFromMxArray ( ( void * ) & ( rtB ) , ssDW
, 0 , 0 , sizeof ( rtB ) ) ; { const mxArray * rtdwData = mxGetFieldByNumber
( ssDW , 0 , 1 ) ; mr_Top_Level_Simulation_restoreDataFromMxArray ( ( void *
) & ( rtDW . aurrx3wzjl ) , rtdwData , 0 , 0 , sizeof ( rtDW . aurrx3wzjl ) )
; mr_Top_Level_Simulation_restoreDataFromMxArray ( ( void * ) & ( rtDW .
okj1p03aot ) , rtdwData , 0 , 1 , sizeof ( rtDW . okj1p03aot ) ) ;
mr_Top_Level_Simulation_restoreDataFromMxArray ( ( void * ) & ( rtDW .
g32rtzaewg ) , rtdwData , 0 , 2 , sizeof ( rtDW . g32rtzaewg ) ) ;
mr_Top_Level_Simulation_restoreDataFromMxArray ( ( void * ) & ( rtDW .
gq5kmr5vn1 ) , rtdwData , 0 , 3 , sizeof ( rtDW . gq5kmr5vn1 ) ) ;
mr_Top_Level_Simulation_restoreDataFromMxArray ( ( void * ) & ( rtDW .
jkey2toi31 ) , rtdwData , 0 , 4 , sizeof ( rtDW . jkey2toi31 ) ) ;
mr_Top_Level_Simulation_restoreDataFromMxArray ( ( void * ) & ( rtDW .
bf53hkrvir ) , rtdwData , 0 , 5 , sizeof ( rtDW . bf53hkrvir ) ) ;
mr_Top_Level_Simulation_restoreDataFromMxArray ( ( void * ) & ( rtDW .
ki1145bcrm ) , rtdwData , 0 , 6 , sizeof ( rtDW . ki1145bcrm ) ) ;
mr_Top_Level_Simulation_restoreDataFromMxArray ( ( void * ) & ( rtDW .
h0arbssjyh ) , rtdwData , 0 , 7 , sizeof ( rtDW . h0arbssjyh ) ) ;
mr_Top_Level_Simulation_restoreDataFromMxArray ( ( void * ) & ( rtDW .
omatls04hq ) , rtdwData , 0 , 8 , sizeof ( rtDW . omatls04hq ) ) ;
mr_Top_Level_Simulation_restoreDataFromMxArray ( ( void * ) & ( rtDW .
e5hdpgr2ka ) , rtdwData , 0 , 9 , sizeof ( rtDW . e5hdpgr2ka ) ) ;
mr_Top_Level_Simulation_restoreDataFromMxArray ( ( void * ) & ( rtDW .
inr1htksx0 ) , rtdwData , 0 , 10 , sizeof ( rtDW . inr1htksx0 ) ) ;
mr_Top_Level_Simulation_restoreDataFromMxArray ( ( void * ) & ( rtDW .
h4l15hdscn ) , rtdwData , 0 , 11 , sizeof ( rtDW . h4l15hdscn ) ) ;
mr_Top_Level_Simulation_restoreDataFromMxArray ( ( void * ) & ( rtDW .
f3dg4s3p0a ) , rtdwData , 0 , 12 , sizeof ( rtDW . f3dg4s3p0a ) ) ;
mr_Top_Level_Simulation_restoreDataFromMxArray ( ( void * ) & ( rtDW .
hrhmbgcbnf ) , rtdwData , 0 , 13 , sizeof ( rtDW . hrhmbgcbnf ) ) ;
mr_Top_Level_Simulation_restoreDataFromMxArray ( ( void * ) & ( rtDW .
kliragzquq ) , rtdwData , 0 , 14 , sizeof ( rtDW . kliragzquq ) ) ;
mr_Top_Level_Simulation_restoreDataFromMxArray ( ( void * ) & ( rtDW .
aukxopp0nd ) , rtdwData , 0 , 15 , sizeof ( rtDW . aukxopp0nd ) ) ;
mr_Top_Level_Simulation_restoreDataFromMxArray ( ( void * ) & ( rtDW .
bx3fwsg2i1 ) , rtdwData , 0 , 16 , sizeof ( rtDW . bx3fwsg2i1 ) ) ;
mr_Top_Level_Simulation_restoreDataFromMxArray ( ( void * ) & ( rtDW .
l41spvcbdc ) , rtdwData , 0 , 17 , sizeof ( rtDW . l41spvcbdc ) ) ;
mr_Top_Level_Simulation_restoreDataFromMxArray ( ( void * ) & ( rtDW .
fnnnyc1uga ) , rtdwData , 0 , 18 , sizeof ( rtDW . fnnnyc1uga ) ) ;
mr_Top_Level_Simulation_restoreDataFromMxArray ( ( void * ) & ( rtDW .
dwnerbwwhs ) , rtdwData , 0 , 19 , sizeof ( rtDW . dwnerbwwhs ) ) ;
mr_Top_Level_Simulation_restoreDataFromMxArray ( ( void * ) & ( rtDW .
cond3vx0se ) , rtdwData , 0 , 20 , sizeof ( rtDW . cond3vx0se ) ) ;
mr_Top_Level_Simulation_restoreDataFromMxArray ( ( void * ) & ( rtDW .
lpmlshwp0j ) , rtdwData , 0 , 21 , sizeof ( rtDW . lpmlshwp0j ) ) ;
mr_Top_Level_Simulation_restoreDataFromMxArray ( ( void * ) & ( rtDW .
mzjt1324lw ) , rtdwData , 0 , 22 , sizeof ( rtDW . mzjt1324lw ) ) ;
mr_Top_Level_Simulation_restoreDataFromMxArray ( ( void * ) & ( rtDW .
ntb1y3fl2p ) , rtdwData , 0 , 23 , sizeof ( rtDW . ntb1y3fl2p ) ) ;
mr_Top_Level_Simulation_restoreDataFromMxArray ( ( void * ) & ( rtDW .
imkh41nhlt ) , rtdwData , 0 , 24 , sizeof ( rtDW . imkh41nhlt ) ) ;
mr_Top_Level_Simulation_restoreDataFromMxArray ( ( void * ) & ( rtDW .
ngjgnzl4gl ) , rtdwData , 0 , 25 , sizeof ( rtDW . ngjgnzl4gl ) ) ;
mr_Top_Level_Simulation_restoreDataFromMxArray ( ( void * ) & ( rtDW .
jrxplcb3hu ) , rtdwData , 0 , 26 , sizeof ( rtDW . jrxplcb3hu ) ) ;
mr_Top_Level_Simulation_restoreDataFromMxArray ( ( void * ) & ( rtDW .
ktng2gyshq ) , rtdwData , 0 , 27 , sizeof ( rtDW . ktng2gyshq ) ) ;
mr_Top_Level_Simulation_restoreDataFromMxArray ( ( void * ) & ( rtDW .
am3m0kfq1x ) , rtdwData , 0 , 28 , sizeof ( rtDW . am3m0kfq1x ) ) ;
mr_Top_Level_Simulation_restoreDataFromMxArray ( ( void * ) & ( rtDW .
p3bilm21pq ) , rtdwData , 0 , 29 , sizeof ( rtDW . p3bilm21pq ) ) ;
mr_Top_Level_Simulation_restoreDataFromMxArray ( ( void * ) & ( rtDW .
kck0lmeenj ) , rtdwData , 0 , 30 , sizeof ( rtDW . kck0lmeenj ) ) ;
mr_Top_Level_Simulation_restoreDataFromMxArray ( ( void * ) & ( rtDW .
biccrvyj3f ) , rtdwData , 0 , 31 , sizeof ( rtDW . biccrvyj3f ) ) ;
mr_Top_Level_Simulation_restoreDataFromMxArray ( ( void * ) & ( rtDW .
mlgn03udwf ) , rtdwData , 0 , 32 , sizeof ( rtDW . mlgn03udwf ) ) ;
mr_Top_Level_Simulation_restoreDataFromMxArray ( ( void * ) & ( rtDW .
m5xagcm5xa ) , rtdwData , 0 , 33 , sizeof ( rtDW . m5xagcm5xa ) ) ;
mr_Top_Level_Simulation_restoreDataFromMxArray ( ( void * ) & ( rtDW .
hdgzj3hwb1 ) , rtdwData , 0 , 34 , sizeof ( rtDW . hdgzj3hwb1 ) ) ;
mr_Top_Level_Simulation_restoreDataFromMxArray ( ( void * ) & ( rtDW .
ddcwn3ttzc ) , rtdwData , 0 , 35 , sizeof ( rtDW . ddcwn3ttzc ) ) ;
mr_Top_Level_Simulation_restoreDataFromMxArray ( ( void * ) & ( rtDW .
dljj5a1cxt ) , rtdwData , 0 , 36 , sizeof ( rtDW . dljj5a1cxt ) ) ;
mr_Top_Level_Simulation_restoreDataFromMxArray ( ( void * ) & ( rtDW .
lsxh51j3mv ) , rtdwData , 0 , 37 , sizeof ( rtDW . lsxh51j3mv ) ) ;
mr_Top_Level_Simulation_restoreDataFromMxArray ( ( void * ) & ( rtDW .
bmvq5132uc ) , rtdwData , 0 , 38 , sizeof ( rtDW . bmvq5132uc ) ) ;
mr_Top_Level_Simulation_restoreDataFromMxArray ( ( void * ) & ( rtDW .
odvklzp2rd ) , rtdwData , 0 , 39 , sizeof ( rtDW . odvklzp2rd ) ) ;
mr_Top_Level_Simulation_restoreDataFromMxArray ( ( void * ) & ( rtDW .
fwcedxrxfk ) , rtdwData , 0 , 40 , sizeof ( rtDW . fwcedxrxfk ) ) ;
mr_Top_Level_Simulation_restoreDataFromMxArray ( ( void * ) & ( rtDW .
f3ueebc3dc ) , rtdwData , 0 , 41 , sizeof ( rtDW . f3ueebc3dc ) ) ;
mr_Top_Level_Simulation_restoreDataFromMxArray ( ( void * ) & ( rtDW .
gxo2umq0us ) , rtdwData , 0 , 42 , sizeof ( rtDW . gxo2umq0us ) ) ;
mr_Top_Level_Simulation_restoreDataFromMxArray ( ( void * ) & ( rtDW .
om5ijxdmex ) , rtdwData , 0 , 43 , sizeof ( rtDW . om5ijxdmex ) ) ;
mr_Top_Level_Simulation_restoreDataFromMxArray ( ( void * ) & ( rtDW .
p03lurvs2x ) , rtdwData , 0 , 44 , sizeof ( rtDW . p03lurvs2x ) ) ;
mr_Top_Level_Simulation_restoreDataFromMxArray ( ( void * ) & ( rtDW .
ihlssyb2ha ) , rtdwData , 0 , 45 , sizeof ( rtDW . ihlssyb2ha ) ) ;
mr_Top_Level_Simulation_restoreDataFromMxArray ( ( void * ) & ( rtDW .
d3ks3dcnzm ) , rtdwData , 0 , 46 , sizeof ( rtDW . d3ks3dcnzm ) ) ;
mr_Top_Level_Simulation_restoreDataFromMxArray ( ( void * ) & ( rtDW .
as5rdedmxo ) , rtdwData , 0 , 47 , sizeof ( rtDW . as5rdedmxo ) ) ;
mr_Top_Level_Simulation_restoreDataFromMxArray ( ( void * ) & ( rtDW .
fa5qdx3osn ) , rtdwData , 0 , 48 , sizeof ( rtDW . fa5qdx3osn ) ) ;
mr_Top_Level_Simulation_restoreDataFromMxArray ( ( void * ) & ( rtDW .
mre1zjqmyg ) , rtdwData , 0 , 49 , sizeof ( rtDW . mre1zjqmyg ) ) ;
mr_Top_Level_Simulation_restoreDataFromMxArray ( ( void * ) & ( rtDW .
c1xv4lavyx ) , rtdwData , 0 , 50 , sizeof ( rtDW . c1xv4lavyx ) ) ;
mr_Top_Level_Simulation_restoreDataFromMxArray ( ( void * ) & ( rtDW .
jl5ooysd2s ) , rtdwData , 0 , 51 , sizeof ( rtDW . jl5ooysd2s ) ) ;
mr_Top_Level_Simulation_restoreDataFromMxArray ( ( void * ) & ( rtDW .
eifup1x5cc ) , rtdwData , 0 , 52 , sizeof ( rtDW . eifup1x5cc ) ) ;
mr_Top_Level_Simulation_restoreDataFromMxArray ( ( void * ) & ( rtDW .
mm51shfpuc ) , rtdwData , 0 , 53 , sizeof ( rtDW . mm51shfpuc ) ) ;
mr_Top_Level_Simulation_restoreDataFromMxArray ( ( void * ) & ( rtDW .
dky15kevds ) , rtdwData , 0 , 54 , sizeof ( rtDW . dky15kevds ) ) ;
mr_Top_Level_Simulation_restoreDataFromMxArray ( ( void * ) & ( rtDW .
lbdnrt5k2u ) , rtdwData , 0 , 55 , sizeof ( rtDW . lbdnrt5k2u ) ) ;
mr_Top_Level_Simulation_restoreDataFromMxArray ( ( void * ) & ( rtDW .
iad4zbxzgs ) , rtdwData , 0 , 56 , sizeof ( rtDW . iad4zbxzgs ) ) ;
mr_Top_Level_Simulation_restoreDataFromMxArray ( ( void * ) & ( rtDW .
hyyf22gvlr ) , rtdwData , 0 , 57 , sizeof ( rtDW . hyyf22gvlr ) ) ;
mr_Top_Level_Simulation_restoreDataFromMxArray ( ( void * ) & ( rtDW .
b01cx0ynrl ) , rtdwData , 0 , 58 , sizeof ( rtDW . b01cx0ynrl ) ) ;
mr_Top_Level_Simulation_restoreDataFromMxArray ( ( void * ) & ( rtDW .
lmh145ati3 ) , rtdwData , 0 , 59 , sizeof ( rtDW . lmh145ati3 ) ) ;
mr_Top_Level_Simulation_restoreDataFromMxArray ( ( void * ) & ( rtDW .
ah1glsmkae ) , rtdwData , 0 , 60 , sizeof ( rtDW . ah1glsmkae ) ) ;
mr_Top_Level_Simulation_restoreDataFromMxArray ( ( void * ) & ( rtDW .
dvzs4nrqov ) , rtdwData , 0 , 61 , sizeof ( rtDW . dvzs4nrqov ) ) ;
mr_Top_Level_Simulation_restoreDataFromMxArray ( ( void * ) & ( rtDW .
gh0oec1z5w ) , rtdwData , 0 , 62 , sizeof ( rtDW . gh0oec1z5w ) ) ;
mr_Top_Level_Simulation_restoreDataFromMxArray ( ( void * ) & ( rtDW .
ahwnshb1lx ) , rtdwData , 0 , 63 , sizeof ( rtDW . ahwnshb1lx ) ) ;
mr_Top_Level_Simulation_restoreDataFromMxArray ( ( void * ) & ( rtDW .
aqvwut4gxx ) , rtdwData , 0 , 64 , sizeof ( rtDW . aqvwut4gxx ) ) ;
mr_Top_Level_Simulation_restoreDataFromMxArray ( ( void * ) & ( rtDW .
gdmfsz4u3k ) , rtdwData , 0 , 65 , sizeof ( rtDW . gdmfsz4u3k ) ) ;
mr_Top_Level_Simulation_restoreDataFromMxArray ( ( void * ) & ( rtDW .
lo0wac2a2b ) , rtdwData , 0 , 66 , sizeof ( rtDW . lo0wac2a2b ) ) ;
mr_Top_Level_Simulation_restoreDataFromMxArray ( ( void * ) & ( rtDW .
fw5ooxnkzk ) , rtdwData , 0 , 67 , sizeof ( rtDW . fw5ooxnkzk ) ) ;
mr_Top_Level_Simulation_restoreDataFromMxArray ( ( void * ) & ( rtDW .
hsxcmjmtgd ) , rtdwData , 0 , 68 , sizeof ( rtDW . hsxcmjmtgd ) ) ;
mr_Top_Level_Simulation_restoreDataFromMxArray ( ( void * ) & ( rtDW .
pktaxkjkog ) , rtdwData , 0 , 69 , sizeof ( rtDW . pktaxkjkog ) ) ;
mr_Top_Level_Simulation_restoreDataFromMxArray ( ( void * ) & ( rtDW .
hydze1iruo ) , rtdwData , 0 , 70 , sizeof ( rtDW . hydze1iruo ) ) ;
mr_Top_Level_Simulation_restoreDataFromMxArray ( ( void * ) & ( rtDW .
nbd2ciowee ) , rtdwData , 0 , 71 , sizeof ( rtDW . nbd2ciowee ) ) ;
mr_Top_Level_Simulation_restoreDataFromMxArray ( ( void * ) & ( rtDW .
eisab1mvjn ) , rtdwData , 0 , 72 , sizeof ( rtDW . eisab1mvjn ) ) ;
mr_Top_Level_Simulation_restoreDataFromMxArray ( ( void * ) & ( rtDW .
aes52he5qp ) , rtdwData , 0 , 73 , sizeof ( rtDW . aes52he5qp ) ) ;
mr_Top_Level_Simulation_restoreDataFromMxArray ( ( void * ) & ( rtDW .
iqfygxjppa ) , rtdwData , 0 , 74 , sizeof ( rtDW . iqfygxjppa ) ) ;
mr_Top_Level_Simulation_restoreDataFromMxArray ( ( void * ) & ( rtDW .
o4q5nva5zq ) , rtdwData , 0 , 75 , sizeof ( rtDW . o4q5nva5zq ) ) ;
mr_Top_Level_Simulation_restoreDataFromMxArray ( ( void * ) & ( rtDW .
gphonxq0y5 ) , rtdwData , 0 , 76 , sizeof ( rtDW . gphonxq0y5 ) ) ;
mr_Top_Level_Simulation_restoreDataFromMxArray ( ( void * ) & ( rtDW .
myukt1dkx2 ) , rtdwData , 0 , 77 , sizeof ( rtDW . myukt1dkx2 ) ) ;
mr_Top_Level_Simulation_restoreDataFromMxArray ( ( void * ) & ( rtDW .
jlomuqw2nj ) , rtdwData , 0 , 78 , sizeof ( rtDW . jlomuqw2nj ) ) ;
mr_Top_Level_Simulation_restoreDataFromMxArray ( ( void * ) & ( rtDW .
anywdxjzfj ) , rtdwData , 0 , 79 , sizeof ( rtDW . anywdxjzfj ) ) ;
mr_Top_Level_Simulation_restoreDataFromMxArray ( ( void * ) & ( rtDW .
ikadmncmhw ) , rtdwData , 0 , 80 , sizeof ( rtDW . ikadmncmhw ) ) ;
mr_Top_Level_Simulation_restoreDataFromMxArray ( ( void * ) & ( rtDW .
excyoskhit ) , rtdwData , 0 , 81 , sizeof ( rtDW . excyoskhit ) ) ;
mr_Top_Level_Simulation_restoreDataFromMxArray ( ( void * ) & ( rtDW .
jqluzytle2 ) , rtdwData , 0 , 82 , sizeof ( rtDW . jqluzytle2 ) ) ;
mr_Top_Level_Simulation_restoreDataFromMxArray ( ( void * ) & ( rtDW .
je2chgxwr3 ) , rtdwData , 0 , 83 , sizeof ( rtDW . je2chgxwr3 ) ) ;
mr_Top_Level_Simulation_restoreDataFromMxArray ( ( void * ) & ( rtDW .
gb0pu4b4jm ) , rtdwData , 0 , 84 , sizeof ( rtDW . gb0pu4b4jm ) ) ;
mr_Top_Level_Simulation_restoreDataFromMxArray ( ( void * ) & ( rtDW .
plsp5vol0y ) , rtdwData , 0 , 85 , sizeof ( rtDW . plsp5vol0y ) ) ;
mr_Top_Level_Simulation_restoreDataFromMxArray ( ( void * ) & ( rtDW .
ghd034ermt ) , rtdwData , 0 , 86 , sizeof ( rtDW . ghd034ermt ) ) ;
mr_Top_Level_Simulation_restoreDataFromMxArray ( ( void * ) & ( rtDW .
kjyys5fqrc ) , rtdwData , 0 , 87 , sizeof ( rtDW . kjyys5fqrc ) ) ;
mr_Top_Level_Simulation_restoreDataFromMxArray ( ( void * ) & ( rtDW .
k2aa442psi ) , rtdwData , 0 , 88 , sizeof ( rtDW . k2aa442psi ) ) ;
mr_Top_Level_Simulation_restoreDataFromMxArray ( ( void * ) & ( rtDW .
myznoztvgf ) , rtdwData , 0 , 89 , sizeof ( rtDW . myznoztvgf ) ) ;
mr_Top_Level_Simulation_restoreDataFromMxArray ( ( void * ) & ( rtDW .
oiqnpg1c2e ) , rtdwData , 0 , 90 , sizeof ( rtDW . oiqnpg1c2e ) ) ;
mr_Top_Level_Simulation_restoreDataFromMxArray ( ( void * ) & ( rtDW .
nm05ot5thg ) , rtdwData , 0 , 91 , sizeof ( rtDW . nm05ot5thg ) ) ;
mr_Top_Level_Simulation_restoreDataFromMxArray ( ( void * ) & ( rtDW .
k3ntuowunk ) , rtdwData , 0 , 92 , sizeof ( rtDW . k3ntuowunk ) ) ;
mr_Top_Level_Simulation_restoreDataFromMxArray ( ( void * ) & ( rtDW .
pxlzvepeuu ) , rtdwData , 0 , 93 , sizeof ( rtDW . pxlzvepeuu ) ) ;
mr_Top_Level_Simulation_restoreDataFromMxArray ( ( void * ) & ( rtDW .
m54kshliay ) , rtdwData , 0 , 94 , sizeof ( rtDW . m54kshliay ) ) ; }
mr_Top_Level_Simulation_restoreDataFromMxArray ( ( void * ) & ( rtPrevZCX ) ,
ssDW , 0 , 2 , sizeof ( rtPrevZCX ) ) ; } mxArray *
mr_Top_Level_Simulation_GetSimStateDisallowedBlocks ( ) { mxArray * data =
mxCreateCellMatrix ( 10 , 3 ) ; mwIndex subs [ 2 ] , offset ; { static const
char_T * blockType [ 10 ] = { "Scope" , "SimscapeExecutionBlock" ,
"SimscapeExecutionBlock" , "Scope" , "SimscapeExecutionBlock" ,
"SimscapeExecutionBlock" , "SimscapeExecutionBlock" ,
"SimscapeExecutionBlock" , "SimscapeSinkBlock" , "Scope" , } ; static const
char_T * blockPath [ 10 ] = { "Top_Level_Simulation/Cart State" ,
 "Top_Level_Simulation/Simulation Environment/Position Actuated Robot Environment/Solver Configuration/EVAL_KEY/STATE_1"
,
 "Top_Level_Simulation/Simulation Environment/Position Actuated Robot Environment/Solver Configuration/EVAL_KEY/OUTPUT_1_0"
, "Top_Level_Simulation/Manipulator Pos" ,
 "Top_Level_Simulation/Simulation Environment/Position Actuated Robot Environment/Solver Configuration/EVAL_KEY/STATE_3"
,
 "Top_Level_Simulation/Simulation Environment/Position Actuated Robot Environment/Solver Configuration/EVAL_KEY/OUTPUT_3_0"
,
 "Top_Level_Simulation/Simulation Environment/Position Actuated Robot Environment/Solver Configuration/EVAL_KEY/STATE_2"
,
 "Top_Level_Simulation/Simulation Environment/Position Actuated Robot Environment/Solver Configuration/EVAL_KEY/OUTPUT_2_0"
,
 "Top_Level_Simulation/Simulation Environment/Position Actuated Robot Environment/Solver Configuration/EVAL_KEY/SINK_1"
, "Top_Level_Simulation/Manipulator State" , } ; static const int reason [ 10
] = { 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , } ; for ( subs [ 0 ] = 0 ; subs
[ 0 ] < 10 ; ++ ( subs [ 0 ] ) ) { subs [ 1 ] = 0 ; offset =
mxCalcSingleSubscript ( data , 2 , subs ) ; mxSetCell ( data , offset ,
mxCreateString ( blockType [ subs [ 0 ] ] ) ) ; subs [ 1 ] = 1 ; offset =
mxCalcSingleSubscript ( data , 2 , subs ) ; mxSetCell ( data , offset ,
mxCreateString ( blockPath [ subs [ 0 ] ] ) ) ; subs [ 1 ] = 2 ; offset =
mxCalcSingleSubscript ( data , 2 , subs ) ; mxSetCell ( data , offset ,
mxCreateDoubleScalar ( ( real_T ) reason [ subs [ 0 ] ] ) ) ; } } return data
; } void MdlInitializeSizes ( void ) { ssSetNumContStates ( rtS , 68 ) ;
ssSetNumPeriodicContStates ( rtS , 0 ) ; ssSetNumY ( rtS , 0 ) ; ssSetNumU (
rtS , 0 ) ; ssSetDirectFeedThrough ( rtS , 0 ) ; ssSetNumSampleTimes ( rtS ,
4 ) ; ssSetNumBlocks ( rtS , 428 ) ; ssSetNumBlockIO ( rtS , 75 ) ;
ssSetNumBlockParams ( rtS , 34188 ) ; } void MdlInitializeSampleTimes ( void
) { ssSetSampleTime ( rtS , 0 , 0.0 ) ; ssSetSampleTime ( rtS , 1 , 0.01 ) ;
ssSetSampleTime ( rtS , 2 , 0.05 ) ; ssSetSampleTime ( rtS , 3 , 0.1 ) ;
ssSetOffsetTime ( rtS , 0 , 0.0 ) ; ssSetOffsetTime ( rtS , 1 , 0.0 ) ;
ssSetOffsetTime ( rtS , 2 , 0.0 ) ; ssSetOffsetTime ( rtS , 3 , 0.0 ) ; }
void raccel_set_checksum ( ) { ssSetChecksumVal ( rtS , 0 , 131616093U ) ;
ssSetChecksumVal ( rtS , 1 , 3669568646U ) ; ssSetChecksumVal ( rtS , 2 ,
3704541709U ) ; ssSetChecksumVal ( rtS , 3 , 242331221U ) ; }
#if defined(_MSC_VER)
#pragma optimize( "", off )
#endif
SimStruct * raccel_register_model ( ssExecutionInfo * executionInfo ) {
static struct _ssMdlInfo mdlInfo ; static struct _ssBlkInfo2 blkInfo2 ;
static struct _ssBlkInfoSLSize blkInfoSLSize ; ( void ) memset ( ( char_T * )
rtS , 0 , sizeof ( SimStruct ) ) ; ( void ) memset ( ( char_T * ) & mdlInfo ,
0 , sizeof ( struct _ssMdlInfo ) ) ; ( void ) memset ( ( char_T * ) &
blkInfo2 , 0 , sizeof ( struct _ssBlkInfo2 ) ) ; ( void ) memset ( ( char_T *
) & blkInfoSLSize , 0 , sizeof ( struct _ssBlkInfoSLSize ) ) ;
ssSetBlkInfo2Ptr ( rtS , & blkInfo2 ) ; ssSetBlkInfoSLSizePtr ( rtS , &
blkInfoSLSize ) ; ssSetMdlInfoPtr ( rtS , & mdlInfo ) ; ssSetExecutionInfo (
rtS , executionInfo ) ; slsaAllocOPModelData ( rtS ) ; { static time_T
mdlPeriod [ NSAMPLE_TIMES ] ; static time_T mdlOffset [ NSAMPLE_TIMES ] ;
static time_T mdlTaskTimes [ NSAMPLE_TIMES ] ; static int_T mdlTsMap [
NSAMPLE_TIMES ] ; static int_T mdlSampleHits [ NSAMPLE_TIMES ] ; static
boolean_T mdlTNextWasAdjustedPtr [ NSAMPLE_TIMES ] ; static int_T
mdlPerTaskSampleHits [ NSAMPLE_TIMES * NSAMPLE_TIMES ] ; static time_T
mdlTimeOfNextSampleHit [ NSAMPLE_TIMES ] ; { int_T i ; for ( i = 0 ; i <
NSAMPLE_TIMES ; i ++ ) { mdlPeriod [ i ] = 0.0 ; mdlOffset [ i ] = 0.0 ;
mdlTaskTimes [ i ] = 0.0 ; mdlTsMap [ i ] = i ; mdlSampleHits [ i ] = 1 ; } }
ssSetSampleTimePtr ( rtS , & mdlPeriod [ 0 ] ) ; ssSetOffsetTimePtr ( rtS , &
mdlOffset [ 0 ] ) ; ssSetSampleTimeTaskIDPtr ( rtS , & mdlTsMap [ 0 ] ) ;
ssSetTPtr ( rtS , & mdlTaskTimes [ 0 ] ) ; ssSetSampleHitPtr ( rtS , &
mdlSampleHits [ 0 ] ) ; ssSetTNextWasAdjustedPtr ( rtS , &
mdlTNextWasAdjustedPtr [ 0 ] ) ; ssSetPerTaskSampleHitsPtr ( rtS , &
mdlPerTaskSampleHits [ 0 ] ) ; ssSetTimeOfNextSampleHitPtr ( rtS , &
mdlTimeOfNextSampleHit [ 0 ] ) ; } ssSetSolverMode ( rtS ,
SOLVER_MODE_SINGLETASKING ) ; { ssSetBlockIO ( rtS , ( ( void * ) & rtB ) ) ;
( void ) memset ( ( ( void * ) & rtB ) , 0 , sizeof ( B ) ) ; } { real_T * x
= ( real_T * ) & rtX ; ssSetContStates ( rtS , x ) ; ( void ) memset ( ( void
* ) x , 0 , sizeof ( X ) ) ; } { void * dwork = ( void * ) & rtDW ;
ssSetRootDWork ( rtS , dwork ) ; ( void ) memset ( dwork , 0 , sizeof ( DW )
) ; } { static DataTypeTransInfo dtInfo ; ( void ) memset ( ( char_T * ) &
dtInfo , 0 , sizeof ( dtInfo ) ) ; ssSetModelMappingInfo ( rtS , & dtInfo ) ;
dtInfo . numDataTypes = 36 ; dtInfo . dataTypeSizes = & rtDataTypeSizes [ 0 ]
; dtInfo . dataTypeNames = & rtDataTypeNames [ 0 ] ; dtInfo . BTransTable = &
rtBTransTable ; dtInfo . PTransTable = & rtPTransTable ; dtInfo .
dataTypeInfoTable = rtDataTypeInfoTable ; }
Top_Level_Simulation_InitializeDataMapInfo ( ) ;
ssSetIsRapidAcceleratorActive ( rtS , true ) ; ssSetRootSS ( rtS , rtS ) ;
ssSetVersion ( rtS , SIMSTRUCT_VERSION_LEVEL2 ) ; ssSetModelName ( rtS ,
"Top_Level_Simulation" ) ; ssSetPath ( rtS , "Top_Level_Simulation" ) ;
ssSetTStart ( rtS , 0.0 ) ; ssSetTFinal ( rtS , 31.0 ) ; { static RTWLogInfo
rt_DataLoggingInfo ; rt_DataLoggingInfo . loggingInterval = ( NULL ) ;
ssSetRTWLogInfo ( rtS , & rt_DataLoggingInfo ) ; } { { static int_T
rt_LoggedStateWidths [ ] = { 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 ,
1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1
, 1 , 1 , 1 , 1 , 1 , 1 , 1 , 4 , 1 , 1 , 1 , 3 , 1 , 1 , 1 , 4 , 1 , 1 , 1 ,
3 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1
, 1 , 6 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 ,
1 , 1 , 1 , 2 , 2 , 1 , 1 , 1 , 2 , 2 } ; static int_T
rt_LoggedStateNumDimensions [ ] = { 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1
, 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 ,
1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1
, 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 ,
1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1
, 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 } ; static int_T
rt_LoggedStateDimensions [ ] = { 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 ,
1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1
, 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 4 , 1 , 1 , 1 , 3 , 1 , 1 , 1 , 4 , 1 , 1 ,
1 , 3 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1
, 1 , 1 , 6 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 ,
1 , 1 , 1 , 1 , 2 , 2 , 1 , 1 , 1 , 2 , 2 } ; static boolean_T
rt_LoggedStateIsVarDims [ ] = { 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0
, 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0
, 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0
, 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 } ; static BuiltInDTypeId
rt_LoggedStateDataTypeIds [ ] = { SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE } ; static int_T rt_LoggedStateComplexSignals [ ] = { 0 , 0 , 0 , 0
, 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0
, 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0
, 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 } ;
static RTWPreprocessingFcnPtr rt_LoggingStatePreprocessingFcnPtrs [ ] = { (
NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , (
NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , (
NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , (
NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , (
NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , (
NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , (
NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , (
NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , (
NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , (
NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , (
NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , (
NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , (
NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , (
NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , (
NULL ) , ( NULL ) } ; static const char_T * rt_LoggedStateLabels [ ] = {
"CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" ,
"CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" ,
"CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" ,
"CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" ,
"CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" ,
"CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" ,
"CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" ,
"CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" ,
"CSTATE" , "CSTATE" , "Discrete" , "FirstOutput" , "Discrete" , "FirstOutput"
, "Discrete" , "FirstOutput" , "Discrete" , "FirstOutput" , "Discrete" ,
"FirstOutput" , "Discrete" , "FirstOutput" , "Discrete" , "FirstOutput" ,
"DSTATE" , "Discrete" , "FirstOutput" , "Discrete" , "FirstOutput" ,
"Discrete" , "FirstOutput" , "Discrete" , "FirstOutput" , "Discrete" ,
"FirstOutput" , "Discrete" , "FirstOutput" , "Discrete" , "FirstOutput" ,
"Discrete" , "FirstOutput" , "DSTATE" , "Discrete" , "FirstOutput" ,
"Discrete" , "Discrete" , "Discrete" , "Discrete" , "FirstOutput" ,
"Discrete" , "Discrete" , "Discrete" } ; static const char_T *
rt_LoggedStateBlockNames [ ] = {
 "Top_Level_Simulation/Simulation Environment/Position Actuated Robot Environment/Mobile Robot/Cart Forward Kinematics/Integrator2"
,
 "Top_Level_Simulation/Simulation Environment/Position Actuated Robot Environment/Mobile Robot/Cart Forward Kinematics/Integrator1"
,
 "Top_Level_Simulation/Simulation Environment/Position Actuated Robot Environment/Mobile Robot/Cart Forward Kinematics/Integrator3"
,
 "Top_Level_Simulation/Simulation Environment/Position Actuated Robot Environment/Mobile Robot/Left_Wheel/Integrator"
,
 "Top_Level_Simulation/Simulation Environment/Position Actuated Robot Environment/Mobile Robot/Left_Wheel/Simulink-PS\nConverter1"
,
 "Top_Level_Simulation/Simulation Environment/Position Actuated Robot Environment/Mobile Robot/Left_Wheel/Simulink-PS\nConverter1"
,
 "Top_Level_Simulation/Simulation Environment/Position Actuated Robot Environment/Mobile Robot/Left_Wheel/Simulink-PS\nConverter"
,
 "Top_Level_Simulation/Simulation Environment/Position Actuated Robot Environment/Mobile Robot/Left_Wheel/Simulink-PS\nConverter"
,
 "Top_Level_Simulation/Simulation Environment/Position Actuated Robot Environment/Mobile Robot/Simulink-PS\nConverter"
,
 "Top_Level_Simulation/Simulation Environment/Position Actuated Robot Environment/Mobile Robot/Simulink-PS\nConverter"
,
 "Top_Level_Simulation/Simulation Environment/Position Actuated Robot Environment/Mobile Robot/Simulink-PS\nConverter1"
,
 "Top_Level_Simulation/Simulation Environment/Position Actuated Robot Environment/Mobile Robot/Simulink-PS\nConverter1"
,
 "Top_Level_Simulation/Simulation Environment/Position Actuated Robot Environment/Mobile Robot/Simulink-PS\nConverter2"
,
 "Top_Level_Simulation/Simulation Environment/Position Actuated Robot Environment/Mobile Robot/Simulink-PS\nConverter2"
,
 "Top_Level_Simulation/Simulation Environment/Position Actuated Robot Environment/Mobile Robot/Right_Wheel/Integrator"
,
 "Top_Level_Simulation/Simulation Environment/Position Actuated Robot Environment/Mobile Robot/Right_Wheel/Simulink-PS\nConverter1"
,
 "Top_Level_Simulation/Simulation Environment/Position Actuated Robot Environment/Mobile Robot/Right_Wheel/Simulink-PS\nConverter1"
,
 "Top_Level_Simulation/Simulation Environment/Position Actuated Robot Environment/Mobile Robot/Right_Wheel/Simulink-PS\nConverter1"
,
 "Top_Level_Simulation/Simulation Environment/Position Actuated Robot Environment/Mobile Robot/Right_Wheel/Simulink-PS\nConverter1"
,
 "Top_Level_Simulation/Simulation Environment/Position Actuated Robot Environment/Position Actuated Manipulator/Simulink-PS\nConverter5"
,
 "Top_Level_Simulation/Simulation Environment/Position Actuated Robot Environment/Position Actuated Manipulator/Simulink-PS\nConverter5"
,
 "Top_Level_Simulation/Simulation Environment/Position Actuated Robot Environment/Position Actuated Manipulator/Simulink-PS\nConverter1"
,
 "Top_Level_Simulation/Simulation Environment/Position Actuated Robot Environment/Position Actuated Manipulator/Simulink-PS\nConverter1"
,
 "Top_Level_Simulation/Simulation Environment/Position Actuated Robot Environment/Position Actuated Manipulator/Simulink-PS\nConverter2"
,
 "Top_Level_Simulation/Simulation Environment/Position Actuated Robot Environment/Position Actuated Manipulator/Simulink-PS\nConverter2"
,
 "Top_Level_Simulation/Simulation Environment/Position Actuated Robot Environment/Position Actuated Manipulator/Simulink-PS\nConverter3"
,
 "Top_Level_Simulation/Simulation Environment/Position Actuated Robot Environment/Position Actuated Manipulator/Simulink-PS\nConverter3"
,
 "Top_Level_Simulation/Simulation Environment/Position Actuated Robot Environment/Position Actuated Manipulator/Simulink-PS\nConverter4"
,
 "Top_Level_Simulation/Simulation Environment/Position Actuated Robot Environment/Position Actuated Manipulator/Simulink-PS\nConverter4"
,
 "Top_Level_Simulation/Simulation Environment/Position Actuated Robot Environment/Position Actuated Manipulator/Simulink-PS\nConverter6"
,
 "Top_Level_Simulation/Simulation Environment/Position Actuated Robot Environment/Position Actuated Manipulator/Simulink-PS\nConverter6"
, "Top_Level_Simulation/Simulation Environment/Integrator" ,
 "Top_Level_Simulation/Simulation Environment/Position Actuated Robot Environment/Position Actuated Manipulator/Simulink-PS\nConverter7"
,
 "Top_Level_Simulation/Simulation Environment/Position Actuated Robot Environment/Position Actuated Manipulator/Simulink-PS\nConverter7"
,
 "Top_Level_Simulation/Simulation Environment/Position Actuated Robot Environment/Position Actuated Manipulator/Simulink-PS\nConverter7"
,
 "Top_Level_Simulation/Simulation Environment/Position Actuated Robot Environment/Position Actuated Manipulator/Simulink-PS\nConverter7"
,
 "Top_Level_Simulation/Simulation Environment/Position Actuated Robot Environment/Environment_With_Physics/6-DOF Joint"
,
 "Top_Level_Simulation/Simulation Environment/Position Actuated Robot Environment/Environment_With_Physics/6-DOF Joint"
,
 "Top_Level_Simulation/Simulation Environment/Position Actuated Robot Environment/Environment_With_Physics/6-DOF Joint"
,
 "Top_Level_Simulation/Simulation Environment/Position Actuated Robot Environment/Environment_With_Physics/6-DOF Joint"
,
 "Top_Level_Simulation/Simulation Environment/Position Actuated Robot Environment/Environment_With_Physics/6-DOF Joint"
,
 "Top_Level_Simulation/Simulation Environment/Position Actuated Robot Environment/Environment_With_Physics/6-DOF Joint"
,
 "Top_Level_Simulation/Simulation Environment/Position Actuated Robot Environment/Environment_With_Physics/6-DOF Joint"
,
 "Top_Level_Simulation/Simulation Environment/Position Actuated Robot Environment/Environment_With_Physics/6-DOF Joint"
,
 "Top_Level_Simulation/Simulation Environment/Position Actuated Robot Environment/Environment_With_Physics/6-DOF Joint1"
,
 "Top_Level_Simulation/Simulation Environment/Position Actuated Robot Environment/Environment_With_Physics/6-DOF Joint1"
,
 "Top_Level_Simulation/Simulation Environment/Position Actuated Robot Environment/Environment_With_Physics/6-DOF Joint1"
,
 "Top_Level_Simulation/Simulation Environment/Position Actuated Robot Environment/Environment_With_Physics/6-DOF Joint1"
,
 "Top_Level_Simulation/Simulation Environment/Position Actuated Robot Environment/Environment_With_Physics/6-DOF Joint1"
,
 "Top_Level_Simulation/Simulation Environment/Position Actuated Robot Environment/Environment_With_Physics/6-DOF Joint1"
,
 "Top_Level_Simulation/Simulation Environment/Position Actuated Robot Environment/Environment_With_Physics/6-DOF Joint1"
,
 "Top_Level_Simulation/Simulation Environment/Position Actuated Robot Environment/Environment_With_Physics/6-DOF Joint1"
,
 "Top_Level_Simulation/Simulation Environment/Position Actuated Robot Environment/Solver\nConfiguration"
,
 "Top_Level_Simulation/Simulation Environment/Position Actuated Robot Environment/Position Actuated Manipulator/Translational Hard Stop2"
,
 "Top_Level_Simulation/Simulation Environment/Position Actuated Robot Environment/Position Actuated Manipulator/Translational Hard Stop2"
,
 "Top_Level_Simulation/Simulation Environment/Position Actuated Robot Environment/Solver\nConfiguration"
,
 "Top_Level_Simulation/Simulation Environment/Position Actuated Robot Environment/Position Actuated Manipulator/Translational Hard Stop1"
,
 "Top_Level_Simulation/Simulation Environment/Position Actuated Robot Environment/Position Actuated Manipulator/Translational Hard Stop1"
,
 "Top_Level_Simulation/Simulation Environment/Position Actuated Robot Environment/Solver\nConfiguration/EVAL_KEY/INPUT_2_1_1"
,
 "Top_Level_Simulation/Simulation Environment/Position Actuated Robot Environment/Solver\nConfiguration/EVAL_KEY/INPUT_2_1_1"
,
 "Top_Level_Simulation/Simulation Environment/Position Actuated Robot Environment/Solver\nConfiguration/EVAL_KEY/INPUT_1_1_1"
,
 "Top_Level_Simulation/Simulation Environment/Position Actuated Robot Environment/Solver\nConfiguration/EVAL_KEY/INPUT_1_1_1"
,
 "Top_Level_Simulation/Simulation Environment/Position Actuated Robot Environment/Solver\nConfiguration/EVAL_KEY/INPUT_4_1_1"
,
 "Top_Level_Simulation/Simulation Environment/Position Actuated Robot Environment/Solver\nConfiguration/EVAL_KEY/INPUT_4_1_1"
,
 "Top_Level_Simulation/Simulation Environment/Position Actuated Robot Environment/Solver\nConfiguration/EVAL_KEY/INPUT_5_1_1"
,
 "Top_Level_Simulation/Simulation Environment/Position Actuated Robot Environment/Solver\nConfiguration/EVAL_KEY/INPUT_5_1_1"
,
 "Top_Level_Simulation/Simulation Environment/Position Actuated Robot Environment/Solver\nConfiguration/EVAL_KEY/INPUT_6_1_1"
,
 "Top_Level_Simulation/Simulation Environment/Position Actuated Robot Environment/Solver\nConfiguration/EVAL_KEY/INPUT_6_1_1"
,
 "Top_Level_Simulation/Simulation Environment/Position Actuated Robot Environment/Solver\nConfiguration/EVAL_KEY/INPUT_3_1_1"
,
 "Top_Level_Simulation/Simulation Environment/Position Actuated Robot Environment/Solver\nConfiguration/EVAL_KEY/INPUT_3_1_1"
,
 "Top_Level_Simulation/Simulation Environment/Position Actuated Robot Environment/Solver\nConfiguration/EVAL_KEY/INPUT_3_2_1"
,
 "Top_Level_Simulation/Simulation Environment/Position Actuated Robot Environment/Solver\nConfiguration/EVAL_KEY/INPUT_3_2_1"
, "Top_Level_Simulation/Simulation Environment/Unit Delay" ,
 "Top_Level_Simulation/Simulation Environment/Position Actuated Robot Environment/Solver\nConfiguration/EVAL_KEY/INPUT_11_1_1"
,
 "Top_Level_Simulation/Simulation Environment/Position Actuated Robot Environment/Solver\nConfiguration/EVAL_KEY/INPUT_11_1_1"
,
 "Top_Level_Simulation/Simulation Environment/Position Actuated Robot Environment/Solver\nConfiguration/EVAL_KEY/INPUT_7_1_1"
,
 "Top_Level_Simulation/Simulation Environment/Position Actuated Robot Environment/Solver\nConfiguration/EVAL_KEY/INPUT_7_1_1"
,
 "Top_Level_Simulation/Simulation Environment/Position Actuated Robot Environment/Solver\nConfiguration/EVAL_KEY/INPUT_8_1_1"
,
 "Top_Level_Simulation/Simulation Environment/Position Actuated Robot Environment/Solver\nConfiguration/EVAL_KEY/INPUT_8_1_1"
,
 "Top_Level_Simulation/Simulation Environment/Position Actuated Robot Environment/Solver\nConfiguration/EVAL_KEY/INPUT_9_1_1"
,
 "Top_Level_Simulation/Simulation Environment/Position Actuated Robot Environment/Solver\nConfiguration/EVAL_KEY/INPUT_9_1_1"
,
 "Top_Level_Simulation/Simulation Environment/Position Actuated Robot Environment/Solver\nConfiguration/EVAL_KEY/INPUT_10_1_1"
,
 "Top_Level_Simulation/Simulation Environment/Position Actuated Robot Environment/Solver\nConfiguration/EVAL_KEY/INPUT_10_1_1"
,
 "Top_Level_Simulation/Simulation Environment/Position Actuated Robot Environment/Solver\nConfiguration/EVAL_KEY/INPUT_12_1_1"
,
 "Top_Level_Simulation/Simulation Environment/Position Actuated Robot Environment/Solver\nConfiguration/EVAL_KEY/INPUT_12_1_1"
,
 "Top_Level_Simulation/Simulation Environment/Position Actuated Robot Environment/Solver\nConfiguration/EVAL_KEY/INPUT_13_1_1"
,
 "Top_Level_Simulation/Simulation Environment/Position Actuated Robot Environment/Solver\nConfiguration/EVAL_KEY/INPUT_13_1_1"
,
 "Top_Level_Simulation/Simulation Environment/Position Actuated Robot Environment/Solver\nConfiguration/EVAL_KEY/INPUT_13_2_1"
,
 "Top_Level_Simulation/Simulation Environment/Position Actuated Robot Environment/Solver\nConfiguration/EVAL_KEY/INPUT_13_2_1"
,
 "Top_Level_Simulation/Simulation Environment/Cart Trajectory/Discrete Derivative/UD"
,
 "Top_Level_Simulation/Simulation Environment/Position Actuated Robot Environment/Solver\nConfiguration/EVAL_KEY/INTERNAL_3_1_1"
,
 "Top_Level_Simulation/Simulation Environment/Position Actuated Robot Environment/Solver\nConfiguration/EVAL_KEY/INTERNAL_3_1_1"
,
 "Top_Level_Simulation/Simulation Environment/Position Actuated Robot Environment/Solver\nConfiguration/EVAL_KEY/STATE_3"
,
 "Top_Level_Simulation/Simulation Environment/Position Actuated Robot Environment/Solver\nConfiguration/EVAL_KEY/INTERNAL_2_1_1"
,
 "Top_Level_Simulation/Simulation Environment/Position Actuated Robot Environment/Solver\nConfiguration/EVAL_KEY/INTERNAL_1_1_1"
,
 "Top_Level_Simulation/Simulation Environment/Position Actuated Robot Environment/Solver\nConfiguration/EVAL_KEY/INTERNAL_6_1_1"
,
 "Top_Level_Simulation/Simulation Environment/Position Actuated Robot Environment/Solver\nConfiguration/EVAL_KEY/INTERNAL_6_1_1"
,
 "Top_Level_Simulation/Simulation Environment/Position Actuated Robot Environment/Solver\nConfiguration/EVAL_KEY/STATE_2"
,
 "Top_Level_Simulation/Simulation Environment/Position Actuated Robot Environment/Solver\nConfiguration/EVAL_KEY/INTERNAL_5_1_1"
,
 "Top_Level_Simulation/Simulation Environment/Position Actuated Robot Environment/Solver\nConfiguration/EVAL_KEY/INTERNAL_4_1_1"
} ; static const char_T * rt_LoggedStateNames [ ] = { "" , "" , "" , "" ,
 "Top_Level_Simulation.Simulation_Environment.Position_Actuated_Robot_Environment.Mobile_Robot.Left_Wheel.Simulink_PS_Converter1.outputFiltered_1382096151_0"
,
 "Top_Level_Simulation.Simulation_Environment.Position_Actuated_Robot_Environment.Mobile_Robot.Left_Wheel.Simulink_PS_Converter1.outputFiltered_1382096151_1"
,
 "Top_Level_Simulation.Simulation_Environment.Position_Actuated_Robot_Environment.Mobile_Robot.Left_Wheel.Simulink_PS_Converter.outputFiltered_364996551_0"
,
 "Top_Level_Simulation.Simulation_Environment.Position_Actuated_Robot_Environment.Mobile_Robot.Left_Wheel.Simulink_PS_Converter.outputFiltered_364996551_1"
,
 "Top_Level_Simulation.Simulation_Environment.Position_Actuated_Robot_Environment.Mobile_Robot.Simulink_PS_Converter.outputFiltered_3709986999_0"
,
 "Top_Level_Simulation.Simulation_Environment.Position_Actuated_Robot_Environment.Mobile_Robot.Simulink_PS_Converter.outputFiltered_3709986999_1"
,
 "Top_Level_Simulation.Simulation_Environment.Position_Actuated_Robot_Environment.Mobile_Robot.Simulink_PS_Converter1.outputFiltered_3762405639_0"
,
 "Top_Level_Simulation.Simulation_Environment.Position_Actuated_Robot_Environment.Mobile_Robot.Simulink_PS_Converter1.outputFiltered_3762405639_1"
,
 "Top_Level_Simulation.Simulation_Environment.Position_Actuated_Robot_Environment.Mobile_Robot.Simulink_PS_Converter2.outputFiltered_2816588759_0"
,
 "Top_Level_Simulation.Simulation_Environment.Position_Actuated_Robot_Environment.Mobile_Robot.Simulink_PS_Converter2.outputFiltered_2816588759_1"
, "" ,
 "Top_Level_Simulation.Simulation_Environment.Position_Actuated_Robot_Environment.Mobile_Robot.Right_Wheel.Simulink_PS_Converter1.outputFiltered_1862349991_0"
,
 "Top_Level_Simulation.Simulation_Environment.Position_Actuated_Robot_Environment.Mobile_Robot.Right_Wheel.Simulink_PS_Converter1.outputFiltered_1862349991_1"
,
 "Top_Level_Simulation.Simulation_Environment.Position_Actuated_Robot_Environment.Mobile_Robot.Right_Wheel.Simulink_PS_Converter1.outputFiltered_1833405182_0"
,
 "Top_Level_Simulation.Simulation_Environment.Position_Actuated_Robot_Environment.Mobile_Robot.Right_Wheel.Simulink_PS_Converter1.outputFiltered_1833405182_1"
,
 "Top_Level_Simulation.Simulation_Environment.Position_Actuated_Robot_Environment.Position_Actuated_Manipulator.Simulink_PS_Converter5.outputFiltered_268926801_0"
,
 "Top_Level_Simulation.Simulation_Environment.Position_Actuated_Robot_Environment.Position_Actuated_Manipulator.Simulink_PS_Converter5.outputFiltered_268926801_1"
,
 "Top_Level_Simulation.Simulation_Environment.Position_Actuated_Robot_Environment.Position_Actuated_Manipulator.Simulink_PS_Converter1.outputFiltered_2592182887_0"
,
 "Top_Level_Simulation.Simulation_Environment.Position_Actuated_Robot_Environment.Position_Actuated_Manipulator.Simulink_PS_Converter1.outputFiltered_2592182887_1"
,
 "Top_Level_Simulation.Simulation_Environment.Position_Actuated_Robot_Environment.Position_Actuated_Manipulator.Simulink_PS_Converter2.outputFiltered_416351670_0"
,
 "Top_Level_Simulation.Simulation_Environment.Position_Actuated_Robot_Environment.Position_Actuated_Manipulator.Simulink_PS_Converter2.outputFiltered_416351670_1"
,
 "Top_Level_Simulation.Simulation_Environment.Position_Actuated_Robot_Environment.Position_Actuated_Manipulator.Simulink_PS_Converter3.outputFiltered_632368134_0"
,
 "Top_Level_Simulation.Simulation_Environment.Position_Actuated_Robot_Environment.Position_Actuated_Manipulator.Simulink_PS_Converter3.outputFiltered_632368134_1"
,
 "Top_Level_Simulation.Simulation_Environment.Position_Actuated_Robot_Environment.Position_Actuated_Manipulator.Simulink_PS_Converter4.outputFiltered_761747169_0"
,
 "Top_Level_Simulation.Simulation_Environment.Position_Actuated_Robot_Environment.Position_Actuated_Manipulator.Simulink_PS_Converter4.outputFiltered_761747169_1"
,
 "Top_Level_Simulation.Simulation_Environment.Position_Actuated_Robot_Environment.Position_Actuated_Manipulator.Simulink_PS_Converter6.outputFiltered_1470563713_0"
,
 "Top_Level_Simulation.Simulation_Environment.Position_Actuated_Robot_Environment.Position_Actuated_Manipulator.Simulink_PS_Converter6.outputFiltered_1470563713_1"
, "" ,
 "Top_Level_Simulation.Simulation_Environment.Position_Actuated_Robot_Environment.Position_Actuated_Manipulator.Simulink_PS_Converter7.outputFiltered_1791437873_0"
,
 "Top_Level_Simulation.Simulation_Environment.Position_Actuated_Robot_Environment.Position_Actuated_Manipulator.Simulink_PS_Converter7.outputFiltered_1791437873_1"
,
 "Top_Level_Simulation.Simulation_Environment.Position_Actuated_Robot_Environment.Position_Actuated_Manipulator.Simulink_PS_Converter7.outputFiltered_1753322088_0"
,
 "Top_Level_Simulation.Simulation_Environment.Position_Actuated_Robot_Environment.Position_Actuated_Manipulator.Simulink_PS_Converter7.outputFiltered_1753322088_1"
,
 "Top_Level_Simulation.Simulation_Environment.Position_Actuated_Robot_Environment.Environment_With_Physics.x6_DOF_Joint.Px.p"
,
 "Top_Level_Simulation.Simulation_Environment.Position_Actuated_Robot_Environment.Environment_With_Physics.x6_DOF_Joint.Py.p"
,
 "Top_Level_Simulation.Simulation_Environment.Position_Actuated_Robot_Environment.Environment_With_Physics.x6_DOF_Joint.Pz.p"
,
 "Top_Level_Simulation.Simulation_Environment.Position_Actuated_Robot_Environment.Environment_With_Physics.x6_DOF_Joint.S.Q"
,
 "Top_Level_Simulation.Simulation_Environment.Position_Actuated_Robot_Environment.Environment_With_Physics.x6_DOF_Joint.Px.v"
,
 "Top_Level_Simulation.Simulation_Environment.Position_Actuated_Robot_Environment.Environment_With_Physics.x6_DOF_Joint.Py.v"
,
 "Top_Level_Simulation.Simulation_Environment.Position_Actuated_Robot_Environment.Environment_With_Physics.x6_DOF_Joint.Pz.v"
,
 "Top_Level_Simulation.Simulation_Environment.Position_Actuated_Robot_Environment.Environment_With_Physics.x6_DOF_Joint.S.w"
,
 "Top_Level_Simulation.Simulation_Environment.Position_Actuated_Robot_Environment.Environment_With_Physics.x6_DOF_Joint1.Px.p"
,
 "Top_Level_Simulation.Simulation_Environment.Position_Actuated_Robot_Environment.Environment_With_Physics.x6_DOF_Joint1.Py.p"
,
 "Top_Level_Simulation.Simulation_Environment.Position_Actuated_Robot_Environment.Environment_With_Physics.x6_DOF_Joint1.Pz.p"
,
 "Top_Level_Simulation.Simulation_Environment.Position_Actuated_Robot_Environment.Environment_With_Physics.x6_DOF_Joint1.S.Q"
,
 "Top_Level_Simulation.Simulation_Environment.Position_Actuated_Robot_Environment.Environment_With_Physics.x6_DOF_Joint1.Px.v"
,
 "Top_Level_Simulation.Simulation_Environment.Position_Actuated_Robot_Environment.Environment_With_Physics.x6_DOF_Joint1.Py.v"
,
 "Top_Level_Simulation.Simulation_Environment.Position_Actuated_Robot_Environment.Environment_With_Physics.x6_DOF_Joint1.Pz.v"
,
 "Top_Level_Simulation.Simulation_Environment.Position_Actuated_Robot_Environment.Environment_With_Physics.x6_DOF_Joint1.S.w"
, "Top_Level_Simulation.outputFiltered_1335753668_0" ,
 "Top_Level_Simulation.Simulation_Environment.Position_Actuated_Robot_Environment.Position_Actuated_Manipulator.Translational_Hard_Stop2.x"
,
 "Top_Level_Simulation.Simulation_Environment.Position_Actuated_Robot_Environment.Position_Actuated_Manipulator.Translational_Hard_Stop2.f"
, "Top_Level_Simulation.outputFiltered_2273146036_0" ,
 "Top_Level_Simulation.Simulation_Environment.Position_Actuated_Robot_Environment.Position_Actuated_Manipulator.Translational_Hard_Stop1.x"
,
 "Top_Level_Simulation.Simulation_Environment.Position_Actuated_Robot_Environment.Position_Actuated_Manipulator.Translational_Hard_Stop1.f"
, "Discrete" , "FirstOutput" , "Discrete" , "FirstOutput" , "Discrete" ,
"FirstOutput" , "Discrete" , "FirstOutput" , "Discrete" , "FirstOutput" ,
"Discrete" , "FirstOutput" , "Discrete" , "FirstOutput" , "DSTATE" ,
"Discrete" , "FirstOutput" , "Discrete" , "FirstOutput" , "Discrete" ,
"FirstOutput" , "Discrete" , "FirstOutput" , "Discrete" , "FirstOutput" ,
"Discrete" , "FirstOutput" , "Discrete" , "FirstOutput" , "Discrete" ,
"FirstOutput" , "DSTATE" , "Discrete" , "FirstOutput" , "Discrete" ,
"Discrete" , "Discrete" , "Discrete" , "FirstOutput" , "Discrete" ,
"Discrete" , "Discrete" } ; static boolean_T rt_LoggedStateCrossMdlRef [ ] =
{ 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0
, 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0
, 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 0 , 0 } ; static RTWLogDataTypeConvert rt_RTWLogDataTypeConvert [ ] = { {
0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } } ; static
int_T rt_LoggedStateIdxList [ ] = { 0 , 1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9 ,
10 , 11 , 12 , 13 , 14 , 15 , 16 , 17 , 18 , 19 , 20 , 21 , 22 , 23 , 24 , 25
, 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9 , 10 , 11 , 12 , 13 , 14 , 15 , 16 , 17 , 18
, 19 , 20 , 21 , 22 , 23 , 24 , 25 , 26 , 27 , 28 , 29 , 30 , 31 , 32 , 33 ,
34 , 35 , 36 , 37 , 38 , 39 , 40 , 41 , 42 , 43 } ; static RTWLogSignalInfo
rt_LoggedStateSignalInfo = { 100 , rt_LoggedStateWidths ,
rt_LoggedStateNumDimensions , rt_LoggedStateDimensions ,
rt_LoggedStateIsVarDims , ( NULL ) , ( NULL ) , rt_LoggedStateDataTypeIds ,
rt_LoggedStateComplexSignals , ( NULL ) , rt_LoggingStatePreprocessingFcnPtrs
, { rt_LoggedStateLabels } , ( NULL ) , ( NULL ) , ( NULL ) , {
rt_LoggedStateBlockNames } , { rt_LoggedStateNames } ,
rt_LoggedStateCrossMdlRef , rt_RTWLogDataTypeConvert , rt_LoggedStateIdxList
} ; static void * rt_LoggedStateSignalPtrs [ 100 ] ; rtliSetLogXSignalPtrs (
ssGetRTWLogInfo ( rtS ) , ( LogSignalPtrsType ) rt_LoggedStateSignalPtrs ) ;
rtliSetLogXSignalInfo ( ssGetRTWLogInfo ( rtS ) , & rt_LoggedStateSignalInfo
) ; rt_LoggedStateSignalPtrs [ 0 ] = ( void * ) & rtX . p3palrnzjz ;
rt_LoggedStateSignalPtrs [ 1 ] = ( void * ) & rtX . gncr2kcfdc ;
rt_LoggedStateSignalPtrs [ 2 ] = ( void * ) & rtX . jssdeyuydp ;
rt_LoggedStateSignalPtrs [ 3 ] = ( void * ) & rtX . e2dw3elb2f ;
rt_LoggedStateSignalPtrs [ 4 ] = ( void * ) & rtX . gwlcka103e [ 0 ] ;
rt_LoggedStateSignalPtrs [ 5 ] = ( void * ) & rtX . gwlcka103e [ 1 ] ;
rt_LoggedStateSignalPtrs [ 6 ] = ( void * ) & rtX . j0lveohajj [ 0 ] ;
rt_LoggedStateSignalPtrs [ 7 ] = ( void * ) & rtX . j0lveohajj [ 1 ] ;
rt_LoggedStateSignalPtrs [ 8 ] = ( void * ) & rtX . lpgahzuqj5 [ 0 ] ;
rt_LoggedStateSignalPtrs [ 9 ] = ( void * ) & rtX . lpgahzuqj5 [ 1 ] ;
rt_LoggedStateSignalPtrs [ 10 ] = ( void * ) & rtX . kedegwhd4y [ 0 ] ;
rt_LoggedStateSignalPtrs [ 11 ] = ( void * ) & rtX . kedegwhd4y [ 1 ] ;
rt_LoggedStateSignalPtrs [ 12 ] = ( void * ) & rtX . kuiemveww2 [ 0 ] ;
rt_LoggedStateSignalPtrs [ 13 ] = ( void * ) & rtX . kuiemveww2 [ 1 ] ;
rt_LoggedStateSignalPtrs [ 14 ] = ( void * ) & rtX . jdiyri4o3q ;
rt_LoggedStateSignalPtrs [ 15 ] = ( void * ) & rtX . cl4axnntag [ 0 ] ;
rt_LoggedStateSignalPtrs [ 16 ] = ( void * ) & rtX . cl4axnntag [ 1 ] ;
rt_LoggedStateSignalPtrs [ 17 ] = ( void * ) & rtX . cgdarxxfhh [ 0 ] ;
rt_LoggedStateSignalPtrs [ 18 ] = ( void * ) & rtX . cgdarxxfhh [ 1 ] ;
rt_LoggedStateSignalPtrs [ 19 ] = ( void * ) & rtX . njhi2kkb45 [ 0 ] ;
rt_LoggedStateSignalPtrs [ 20 ] = ( void * ) & rtX . njhi2kkb45 [ 1 ] ;
rt_LoggedStateSignalPtrs [ 21 ] = ( void * ) & rtX . enzife1153 [ 0 ] ;
rt_LoggedStateSignalPtrs [ 22 ] = ( void * ) & rtX . enzife1153 [ 1 ] ;
rt_LoggedStateSignalPtrs [ 23 ] = ( void * ) & rtX . m3ewvxkuda [ 0 ] ;
rt_LoggedStateSignalPtrs [ 24 ] = ( void * ) & rtX . m3ewvxkuda [ 1 ] ;
rt_LoggedStateSignalPtrs [ 25 ] = ( void * ) & rtX . lmwqgrobiu [ 0 ] ;
rt_LoggedStateSignalPtrs [ 26 ] = ( void * ) & rtX . lmwqgrobiu [ 1 ] ;
rt_LoggedStateSignalPtrs [ 27 ] = ( void * ) & rtX . enbehpdbh2 [ 0 ] ;
rt_LoggedStateSignalPtrs [ 28 ] = ( void * ) & rtX . enbehpdbh2 [ 1 ] ;
rt_LoggedStateSignalPtrs [ 29 ] = ( void * ) & rtX . pzt5vdq13u [ 0 ] ;
rt_LoggedStateSignalPtrs [ 30 ] = ( void * ) & rtX . pzt5vdq13u [ 1 ] ;
rt_LoggedStateSignalPtrs [ 31 ] = ( void * ) & rtX . laucphmfyy ;
rt_LoggedStateSignalPtrs [ 32 ] = ( void * ) & rtX . hfsj1vb0zx [ 0 ] ;
rt_LoggedStateSignalPtrs [ 33 ] = ( void * ) & rtX . hfsj1vb0zx [ 1 ] ;
rt_LoggedStateSignalPtrs [ 34 ] = ( void * ) & rtX . jtwggrtgak [ 0 ] ;
rt_LoggedStateSignalPtrs [ 35 ] = ( void * ) & rtX . jtwggrtgak [ 1 ] ;
rt_LoggedStateSignalPtrs [ 36 ] = ( void * ) & rtX . dmqxelc4g5 [ 0 ] ;
rt_LoggedStateSignalPtrs [ 37 ] = ( void * ) & rtX . dmqxelc4g5 [ 1 ] ;
rt_LoggedStateSignalPtrs [ 38 ] = ( void * ) & rtX . dmqxelc4g5 [ 2 ] ;
rt_LoggedStateSignalPtrs [ 39 ] = ( void * ) & rtX . dmqxelc4g5 [ 3 ] ;
rt_LoggedStateSignalPtrs [ 40 ] = ( void * ) & rtX . dmqxelc4g5 [ 7 ] ;
rt_LoggedStateSignalPtrs [ 41 ] = ( void * ) & rtX . dmqxelc4g5 [ 8 ] ;
rt_LoggedStateSignalPtrs [ 42 ] = ( void * ) & rtX . dmqxelc4g5 [ 9 ] ;
rt_LoggedStateSignalPtrs [ 43 ] = ( void * ) & rtX . dmqxelc4g5 [ 10 ] ;
rt_LoggedStateSignalPtrs [ 44 ] = ( void * ) & rtX . dmqxelc4g5 [ 13 ] ;
rt_LoggedStateSignalPtrs [ 45 ] = ( void * ) & rtX . dmqxelc4g5 [ 14 ] ;
rt_LoggedStateSignalPtrs [ 46 ] = ( void * ) & rtX . dmqxelc4g5 [ 15 ] ;
rt_LoggedStateSignalPtrs [ 47 ] = ( void * ) & rtX . dmqxelc4g5 [ 16 ] ;
rt_LoggedStateSignalPtrs [ 48 ] = ( void * ) & rtX . dmqxelc4g5 [ 20 ] ;
rt_LoggedStateSignalPtrs [ 49 ] = ( void * ) & rtX . dmqxelc4g5 [ 21 ] ;
rt_LoggedStateSignalPtrs [ 50 ] = ( void * ) & rtX . dmqxelc4g5 [ 22 ] ;
rt_LoggedStateSignalPtrs [ 51 ] = ( void * ) & rtX . dmqxelc4g5 [ 23 ] ;
rt_LoggedStateSignalPtrs [ 52 ] = ( void * ) & rtX . h3eov1d0ks ;
rt_LoggedStateSignalPtrs [ 53 ] = ( void * ) & rtX . gb2ewon1vo [ 0 ] ;
rt_LoggedStateSignalPtrs [ 54 ] = ( void * ) & rtX . gb2ewon1vo [ 1 ] ;
rt_LoggedStateSignalPtrs [ 55 ] = ( void * ) & rtX . gnk4ve4l0j ;
rt_LoggedStateSignalPtrs [ 56 ] = ( void * ) & rtX . bka1w3yj3x [ 0 ] ;
rt_LoggedStateSignalPtrs [ 57 ] = ( void * ) & rtX . bka1w3yj3x [ 1 ] ;
rt_LoggedStateSignalPtrs [ 58 ] = ( void * ) & rtDW . g32rtzaewg ;
rt_LoggedStateSignalPtrs [ 59 ] = ( void * ) & rtDW . gq5kmr5vn1 ;
rt_LoggedStateSignalPtrs [ 60 ] = ( void * ) & rtDW . jkey2toi31 ;
rt_LoggedStateSignalPtrs [ 61 ] = ( void * ) & rtDW . bf53hkrvir ;
rt_LoggedStateSignalPtrs [ 62 ] = ( void * ) & rtDW . ki1145bcrm ;
rt_LoggedStateSignalPtrs [ 63 ] = ( void * ) & rtDW . h0arbssjyh ;
rt_LoggedStateSignalPtrs [ 64 ] = ( void * ) & rtDW . omatls04hq ;
rt_LoggedStateSignalPtrs [ 65 ] = ( void * ) & rtDW . e5hdpgr2ka ;
rt_LoggedStateSignalPtrs [ 66 ] = ( void * ) & rtDW . inr1htksx0 ;
rt_LoggedStateSignalPtrs [ 67 ] = ( void * ) & rtDW . h4l15hdscn ;
rt_LoggedStateSignalPtrs [ 68 ] = ( void * ) & rtDW . f3dg4s3p0a ;
rt_LoggedStateSignalPtrs [ 69 ] = ( void * ) & rtDW . hrhmbgcbnf ;
rt_LoggedStateSignalPtrs [ 70 ] = ( void * ) & rtDW . kliragzquq ;
rt_LoggedStateSignalPtrs [ 71 ] = ( void * ) & rtDW . aukxopp0nd ;
rt_LoggedStateSignalPtrs [ 72 ] = ( void * ) rtDW . bx3fwsg2i1 ;
rt_LoggedStateSignalPtrs [ 73 ] = ( void * ) & rtDW . l41spvcbdc ;
rt_LoggedStateSignalPtrs [ 74 ] = ( void * ) & rtDW . fnnnyc1uga ;
rt_LoggedStateSignalPtrs [ 75 ] = ( void * ) & rtDW . dwnerbwwhs ;
rt_LoggedStateSignalPtrs [ 76 ] = ( void * ) & rtDW . cond3vx0se ;
rt_LoggedStateSignalPtrs [ 77 ] = ( void * ) & rtDW . lpmlshwp0j ;
rt_LoggedStateSignalPtrs [ 78 ] = ( void * ) & rtDW . mzjt1324lw ;
rt_LoggedStateSignalPtrs [ 79 ] = ( void * ) & rtDW . ntb1y3fl2p ;
rt_LoggedStateSignalPtrs [ 80 ] = ( void * ) & rtDW . imkh41nhlt ;
rt_LoggedStateSignalPtrs [ 81 ] = ( void * ) & rtDW . ngjgnzl4gl ;
rt_LoggedStateSignalPtrs [ 82 ] = ( void * ) & rtDW . jrxplcb3hu ;
rt_LoggedStateSignalPtrs [ 83 ] = ( void * ) & rtDW . ktng2gyshq ;
rt_LoggedStateSignalPtrs [ 84 ] = ( void * ) & rtDW . am3m0kfq1x ;
rt_LoggedStateSignalPtrs [ 85 ] = ( void * ) & rtDW . p3bilm21pq ;
rt_LoggedStateSignalPtrs [ 86 ] = ( void * ) & rtDW . kck0lmeenj ;
rt_LoggedStateSignalPtrs [ 87 ] = ( void * ) & rtDW . biccrvyj3f ;
rt_LoggedStateSignalPtrs [ 88 ] = ( void * ) & rtDW . mlgn03udwf ;
rt_LoggedStateSignalPtrs [ 89 ] = ( void * ) & rtDW . m5xagcm5xa ;
rt_LoggedStateSignalPtrs [ 90 ] = ( void * ) & rtDW . hdgzj3hwb1 ;
rt_LoggedStateSignalPtrs [ 91 ] = ( void * ) & rtDW . ddcwn3ttzc ;
rt_LoggedStateSignalPtrs [ 92 ] = ( void * ) & rtDW . dljj5a1cxt ;
rt_LoggedStateSignalPtrs [ 93 ] = ( void * ) rtDW . lsxh51j3mv ;
rt_LoggedStateSignalPtrs [ 94 ] = ( void * ) rtDW . bmvq5132uc ;
rt_LoggedStateSignalPtrs [ 95 ] = ( void * ) & rtDW . odvklzp2rd ;
rt_LoggedStateSignalPtrs [ 96 ] = ( void * ) & rtDW . fwcedxrxfk ;
rt_LoggedStateSignalPtrs [ 97 ] = ( void * ) & rtDW . f3ueebc3dc ;
rt_LoggedStateSignalPtrs [ 98 ] = ( void * ) rtDW . gxo2umq0us ;
rt_LoggedStateSignalPtrs [ 99 ] = ( void * ) rtDW . om5ijxdmex ; }
rtliSetLogT ( ssGetRTWLogInfo ( rtS ) , "tout" ) ; rtliSetLogX (
ssGetRTWLogInfo ( rtS ) , "" ) ; rtliSetLogXFinal ( ssGetRTWLogInfo ( rtS ) ,
"xFinal" ) ; rtliSetLogVarNameModifier ( ssGetRTWLogInfo ( rtS ) , "none" ) ;
rtliSetLogFormat ( ssGetRTWLogInfo ( rtS ) , 4 ) ; rtliSetLogMaxRows (
ssGetRTWLogInfo ( rtS ) , 0 ) ; rtliSetLogDecimation ( ssGetRTWLogInfo ( rtS
) , 1 ) ; rtliSetLogY ( ssGetRTWLogInfo ( rtS ) , "" ) ;
rtliSetLogYSignalInfo ( ssGetRTWLogInfo ( rtS ) , ( NULL ) ) ;
rtliSetLogYSignalPtrs ( ssGetRTWLogInfo ( rtS ) , ( NULL ) ) ; } { static
struct _ssStatesInfo2 statesInfo2 ; ssSetStatesInfo2 ( rtS , & statesInfo2 )
; } { static ssPeriodicStatesInfo periodicStatesInfo ;
ssSetPeriodicStatesInfo ( rtS , & periodicStatesInfo ) ; } { static
ssJacobianPerturbationBounds jacobianPerturbationBounds ;
ssSetJacobianPerturbationBounds ( rtS , & jacobianPerturbationBounds ) ; } {
static ssSolverInfo slvrInfo ; static struct _ssSFcnModelMethods3 mdlMethods3
; static struct _ssSFcnModelMethods2 mdlMethods2 ; static boolean_T
contStatesDisabled [ 68 ] ; static real_T absTol [ 68 ] = { 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 } ; static uint8_T absTolControl [ 68 ] = { 0U , 0U , 0U , 0U
, 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U ,
0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U
, 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U ,
0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U
, 0U , 0U } ; static real_T contStateJacPerturbBoundMinVec [ 68 ] ; static
real_T contStateJacPerturbBoundMaxVec [ 68 ] ; static uint8_T zcAttributes [
5 ] = { ( 0xc0 | ZC_EVENT_ALL_DN ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , (
ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) } ; static ssNonContDerivSigInfo
nonContDerivSigInfo [ 4 ] = { { 1 * sizeof ( real_T ) , ( char * ) ( & rtB .
otiyamgc4m ) , ( NULL ) } , { 1 * sizeof ( real_T ) , ( char * ) ( & rtB .
nrzyl42xm5 ) , ( NULL ) } , { 1 * sizeof ( real_T ) , ( char * ) ( & rtB .
ilhqhgwcym ) , ( NULL ) } , { 6 * sizeof ( real_T ) , ( char * ) ( & rtB .
frj3sv0nur [ 0 ] ) , ( NULL ) } } ; { int i ; for ( i = 0 ; i < 68 ; ++ i ) {
contStateJacPerturbBoundMinVec [ i ] = 0 ; contStateJacPerturbBoundMaxVec [ i
] = rtGetInf ( ) ; } } ssSetSolverRelTol ( rtS , 0.001 ) ; ssSetStepSize (
rtS , 0.0 ) ; ssSetMinStepSize ( rtS , 0.0 ) ; ssSetMaxNumMinSteps ( rtS , -
1 ) ; ssSetMinStepViolatedError ( rtS , 0 ) ; ssSetMaxStepSize ( rtS , 0.01 )
; ssSetSolverMaxOrder ( rtS , - 1 ) ; ssSetSolverRefineFactor ( rtS , 1 ) ;
ssSetOutputTimes ( rtS , ( NULL ) ) ; ssSetNumOutputTimes ( rtS , 0 ) ;
ssSetOutputTimesOnly ( rtS , 0 ) ; ssSetOutputTimesIndex ( rtS , 0 ) ;
ssSetZCCacheNeedsReset ( rtS , 1 ) ; ssSetDerivCacheNeedsReset ( rtS , 0 ) ;
ssSetNumNonContDerivSigInfos ( rtS , 4 ) ; ssSetNonContDerivSigInfos ( rtS ,
nonContDerivSigInfo ) ; ssSetSolverInfo ( rtS , & slvrInfo ) ;
ssSetSolverName ( rtS , "ode23tb" ) ; ssSetVariableStepSolver ( rtS , 1 ) ;
ssSetSolverConsistencyChecking ( rtS , 0 ) ; ssSetSolverAdaptiveZcDetection (
rtS , 0 ) ; ssSetSolverRobustResetMethod ( rtS , 0 ) ;
_ssSetSolverUpdateJacobianAtReset ( rtS , true ) ; ssSetAbsTolVector ( rtS ,
absTol ) ; ssSetAbsTolControlVector ( rtS , absTolControl ) ;
ssSetSolverAbsTol_Obsolete ( rtS , absTol ) ;
ssSetSolverAbsTolControl_Obsolete ( rtS , absTolControl ) ;
ssSetJacobianPerturbationBoundsMinVec ( rtS , contStateJacPerturbBoundMinVec
) ; ssSetJacobianPerturbationBoundsMaxVec ( rtS ,
contStateJacPerturbBoundMaxVec ) ; ssSetSolverStateProjection ( rtS , 1 ) ; (
void ) memset ( ( void * ) & mdlMethods2 , 0 , sizeof ( mdlMethods2 ) ) ;
ssSetModelMethods2 ( rtS , & mdlMethods2 ) ; ( void ) memset ( ( void * ) &
mdlMethods3 , 0 , sizeof ( mdlMethods3 ) ) ; ssSetModelMethods3 ( rtS , &
mdlMethods3 ) ; ssSetModelProjection ( rtS , MdlProjection ) ;
ssSetSolverMassMatrixType ( rtS , ( ssMatrixType ) 0 ) ;
ssSetSolverMassMatrixNzMax ( rtS , 0 ) ; ssSetModelOutputs ( rtS , MdlOutputs
) ; ssSetModelUpdate ( rtS , MdlUpdate ) ; ssSetModelDerivatives ( rtS ,
MdlDerivatives ) ; ssSetSolverZcSignalAttrib ( rtS , zcAttributes ) ;
ssSetSolverNumZcSignals ( rtS , 5 ) ; ssSetModelZeroCrossings ( rtS ,
MdlZeroCrossings ) ; ssSetSolverConsecutiveZCsStepRelTol ( rtS ,
2.8421709430404007E-13 ) ; ssSetSolverMaxConsecutiveZCs ( rtS , 1000 ) ;
ssSetSolverConsecutiveZCsError ( rtS , 2 ) ; ssSetSolverMaskedZcDiagnostic (
rtS , 1 ) ; ssSetSolverIgnoredZcDiagnostic ( rtS , 1 ) ;
ssSetSolverMaxConsecutiveMinStep ( rtS , 1 ) ;
ssSetSolverShapePreserveControl ( rtS , 2 ) ; ssSetTNextTid ( rtS , INT_MIN )
; ssSetTNext ( rtS , rtMinusInf ) ; ssSetSolverNeedsReset ( rtS ) ;
ssSetNumNonsampledZCs ( rtS , 4 ) ; ssSetContStateDisabled ( rtS ,
contStatesDisabled ) ; ssSetSolverMaxConsecutiveMinStep ( rtS , 1 ) ; } {
ZCSigState * zc = ( ZCSigState * ) & rtPrevZCX ; ssSetPrevZCSigState ( rtS ,
zc ) ; } { rtPrevZCX . hqy0cwoewc = UNINITIALIZED_ZCSIG ; } ssSetChecksumVal
( rtS , 0 , 131616093U ) ; ssSetChecksumVal ( rtS , 1 , 3669568646U ) ;
ssSetChecksumVal ( rtS , 2 , 3704541709U ) ; ssSetChecksumVal ( rtS , 3 ,
242331221U ) ; { static const sysRanDType rtAlwaysEnabled =
SUBSYS_RAN_BC_ENABLE ; static RTWExtModeInfo rt_ExtModeInfo ; static const
sysRanDType * systemRan [ 8 ] ; gblRTWExtModeInfo = & rt_ExtModeInfo ;
ssSetRTWExtModeInfo ( rtS , & rt_ExtModeInfo ) ;
rteiSetSubSystemActiveVectorAddresses ( & rt_ExtModeInfo , systemRan ) ;
systemRan [ 0 ] = & rtAlwaysEnabled ; systemRan [ 1 ] = & rtAlwaysEnabled ;
systemRan [ 2 ] = & rtAlwaysEnabled ; systemRan [ 3 ] = & rtAlwaysEnabled ;
systemRan [ 4 ] = & rtAlwaysEnabled ; systemRan [ 5 ] = & rtAlwaysEnabled ;
systemRan [ 6 ] = & rtAlwaysEnabled ; systemRan [ 7 ] = & rtAlwaysEnabled ;
rteiSetModelMappingInfoPtr ( ssGetRTWExtModeInfo ( rtS ) , &
ssGetModelMappingInfo ( rtS ) ) ; rteiSetChecksumsPtr ( ssGetRTWExtModeInfo (
rtS ) , ssGetChecksums ( rtS ) ) ; rteiSetTPtr ( ssGetRTWExtModeInfo ( rtS )
, ssGetTPtr ( rtS ) ) ; } slsaDisallowedBlocksForSimTargetOP ( rtS ,
mr_Top_Level_Simulation_GetSimStateDisallowedBlocks ) ;
slsaGetWorkFcnForSimTargetOP ( rtS , mr_Top_Level_Simulation_GetDWork ) ;
slsaSetWorkFcnForSimTargetOP ( rtS , mr_Top_Level_Simulation_SetDWork ) ;
rt_RapidReadMatFileAndUpdateParams ( rtS ) ; if ( ssGetErrorStatus ( rtS ) )
{ return rtS ; } return rtS ; }
#if defined(_MSC_VER)
#pragma optimize( "", on )
#endif
const int_T gblParameterTuningTid = 4 ; void MdlOutputsParameterSampleTime (
int_T tid ) { MdlOutputsTID4 ( tid ) ; }
