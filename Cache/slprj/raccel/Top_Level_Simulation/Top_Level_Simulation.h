#ifndef RTW_HEADER_Top_Level_Simulation_h_
#define RTW_HEADER_Top_Level_Simulation_h_
#ifndef Top_Level_Simulation_COMMON_INCLUDES_
#define Top_Level_Simulation_COMMON_INCLUDES_
#include <stdlib.h>
#include <string.h>
#include "sl_AsyncioQueue/AsyncioQueueCAPI.h"
#include "rtwtypes.h"
#include "sigstream_rtw.h"
#include "simtarget/slSimTgtSigstreamRTW.h"
#include "simtarget/slSimTgtSlioCoreRTW.h"
#include "simtarget/slSimTgtSlioClientsRTW.h"
#include "simtarget/slSimTgtSlioSdiRTW.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "raccel.h"
#include "slsv_diagnostic_codegen_c_api.h"
#include "rt_logging_simtarget.h"
#include "dt_info.h"
#include "ext_work.h"
#include "collisioncodegen_api.hpp"
#include "coder_posix_time.h"
#include "nesl_rtw.h"
#include "Top_Level_Simulation_66cd9431_1_gateway.h"
#include "Top_Level_Simulation_66cd9431_3_gateway.h"
#include "Top_Level_Simulation_66cd9431_2_gateway.h"
#endif
#include "Top_Level_Simulation_types.h"
#include "mwmathutil.h"
#include "rt_nonfinite.h"
#include <stddef.h>
#include "rt_zcfcn.h"
#include "rtGetNaN.h"
#include "rtw_modelmap_simtarget.h"
#include "rt_defines.h"
#include "rtGetInf.h"
#include "zero_crossing_types.h"
#define MODEL_NAME Top_Level_Simulation
#define NSAMPLE_TIMES (5) 
#define NINPUTS (0)       
#define NOUTPUTS (0)     
#define NBLOCKIO (75) 
#define NUM_ZC_EVENTS (1) 
#ifndef NCSTATES
#define NCSTATES (68)   
#elif NCSTATES != 68
#error Invalid specification of NCSTATES defined in compiler command
#endif
#ifndef rtmGetDataMapInfo
#define rtmGetDataMapInfo(rtm) (*rt_dataMapInfoPtr)
#endif
#ifndef rtmSetDataMapInfo
#define rtmSetDataMapInfo(rtm, val) (rt_dataMapInfoPtr = &val)
#endif
#ifndef IN_RACCEL_MAIN
#endif
typedef struct { ikblock_info_bus cusv2amtca ; real_T g1wu31mqe4 [ 2 ] ;
real_T gn5waaat3n ; real_T j3ss00kqoe ; real_T g0s1jshae4 ; real_T ej15uvzzrp
; real_T g2h4dhsdez [ 3 ] ; real_T byypcdwj4t ; real_T oxggdt53bd ; real_T
a50c4odnnd ; real_T bxaujqvrbz [ 4 ] ; real_T be5mxu02ho [ 4 ] ; real_T
h0x3fs1esa [ 4 ] ; real_T frifao4c1u [ 4 ] ; real_T nwxytavutd [ 4 ] ; real_T
fstvfaddps ; real_T du4pvnugdj [ 4 ] ; real_T nmjwizdspm [ 4 ] ; real_T
f3me2yahaw [ 6 ] ; real_T n3i0rcd3y3 [ 3 ] ; real_T pybi00dpti [ 4 ] ; real_T
k4qxluudiw [ 4 ] ; real_T j1wjz4glfv [ 4 ] ; real_T h0tqkotieo [ 4 ] ; real_T
c3nacuiddy [ 4 ] ; real_T ir3dfvqqai [ 4 ] ; real_T otiyamgc4m ; real_T
gk45ehdeau ; real_T bocynmvqvn ; real_T ggvodvqytu ; real_T o0g21chvl4 [ 4 ]
; real_T pvn4sjrhtj [ 4 ] ; real_T bwhuqsvvko [ 26 ] ; real_T fslwmfbg4z [ 18
] ; real_T o5sctoydmq ; real_T i4wqff4ppm [ 2 ] ; real_T ar0mgehmqp ; real_T
aldmgrwo2q ; real_T bldctwoduh ; real_T co1eoce0xn ; real_T essvneazxf ;
real_T b2pkbgkxau ; real_T m52iku3bf5 ; real_T jgm1aa3nzs [ 6 ] ; real_T
h3wch0tcyi [ 3 ] ; real_T nbf5lo0qyp ; real_T d13ksp0l1g ; real_T cepepxzyrd
; real_T jwbu2gwvao ; real_T nd3aadcbcd ; real_T lgj2jc3pzo ; real_T
cegxra1hpr ; real_T h2wzsozxts [ 4 ] ; real_T f3wc3trxlm [ 3 ] ; real_T
ecditktabk [ 2 ] ; real_T ctfsa4jidw [ 4 ] ; real_T drqxmyuirf [ 4 ] ; real_T
f3dt3kwdyy [ 4 ] ; real_T e1eawrywww [ 3 ] ; real_T po2az4iybu [ 2 ] ; real_T
bylc4dlpa2 [ 4 ] ; real_T aj3oqjvikj [ 4 ] ; real_T jvci2lzjbx [ 2 ] ; real_T
dv0zdzo0z1 ; real_T ilhqhgwcym ; real_T nrzyl42xm5 ; real_T mz0xenb4ph [ 3 ]
; real_T jo2qwqwray [ 6 ] ; real_T fzezqxxuee [ 3 ] ; real_T eperym0ycj [ 6 ]
; real_T frj3sv0nur [ 6 ] ; real_T hthfcq14pv [ 6 ] ; real_T abmtpbtqen [ 16
] ; real_T ajucvwlofn [ 3 ] ; } B ; typedef struct { pd0uxzf3xo aurrx3wzjl ;
aivhh1v50g okj1p03aot ; real_T g32rtzaewg ; real_T gq5kmr5vn1 ; real_T
jkey2toi31 ; real_T bf53hkrvir ; real_T ki1145bcrm ; real_T h0arbssjyh ;
real_T omatls04hq ; real_T e5hdpgr2ka ; real_T inr1htksx0 ; real_T h4l15hdscn
; real_T f3dg4s3p0a ; real_T hrhmbgcbnf ; real_T kliragzquq ; real_T
aukxopp0nd ; real_T bx3fwsg2i1 [ 6 ] ; real_T l41spvcbdc ; real_T fnnnyc1uga
; real_T dwnerbwwhs ; real_T cond3vx0se ; real_T lpmlshwp0j ; real_T
mzjt1324lw ; real_T ntb1y3fl2p ; real_T imkh41nhlt ; real_T ngjgnzl4gl ;
real_T jrxplcb3hu ; real_T ktng2gyshq ; real_T am3m0kfq1x ; real_T p3bilm21pq
; real_T kck0lmeenj ; real_T biccrvyj3f ; real_T mlgn03udwf ; real_T
m5xagcm5xa ; real_T hdgzj3hwb1 ; real_T ddcwn3ttzc ; real_T dljj5a1cxt ;
real_T lsxh51j3mv [ 2 ] ; real_T bmvq5132uc [ 2 ] ; real_T odvklzp2rd ;
real_T fwcedxrxfk ; real_T f3ueebc3dc ; real_T gxo2umq0us [ 2 ] ; real_T
om5ijxdmex [ 2 ] ; real_T p03lurvs2x ; real_T ihlssyb2ha ; real_T d3ks3dcnzm
; real_T as5rdedmxo ; real_T fa5qdx3osn ; struct { void * TimePtr ; void *
DataPtr ; void * RSimInfoPtr ; } iyonscealb ; struct { void * AQHandles ; }
gcaetr4bcc ; struct { void * AQHandles ; } ajcidjpwry ; struct { void *
TimePtr ; void * DataPtr ; void * RSimInfoPtr ; } hfgna5tkoq ; struct { void
* LoggedData [ 2 ] ; } dc0irckuhj ; struct { void * TimePtr ; void * DataPtr
; void * RSimInfoPtr ; } lc4ovzpgpe ; struct { void * TimePtr ; void *
DataPtr ; void * RSimInfoPtr ; } begvxujstw ; void * lb3wyb2dez ; void *
g3ij452qky ; void * ladhvtfsgz ; void * a1eiefzojn ; void * byilrm3pqt ; void
* ccmnpib3ig ; void * cycsofdxfe ; void * exuhvzpgsm ; void * aarxkmfy55 ;
void * pzwvs2j5ee ; struct { void * LoggedData [ 2 ] ; } b5diue1uxm ; struct
{ void * TimePtr ; void * DataPtr ; void * RSimInfoPtr ; } kez14kn3ym ;
struct { void * AQHandles ; } opma5fwgxt ; struct { void * AQHandles ; }
i1b4erv544 ; struct { void * AQHandles ; } o25sxexqnc ; struct { void *
AQHandles ; } guynqgbksu ; void * cmjfgqom52 ; void * gpwzsvid1r ; void *
l0offn5pfw ; void * oees0agrqg ; void * bf5jp1t1je ; void * grwvqtecfq ; void
* pi2dmccavk ; void * jbztwjzszw ; void * eltday5bxn ; void * cg05uy0gaj ;
void * oreix54jo1 ; void * fmjokqk3g2 ; void * jbmhvkycuq ; void * gglgfvym2m
; void * pghjdm11ft ; void * etnlg20vgi ; void * d05ty02jkv ; void *
mc2c422l4v ; void * hvoi0laj4r ; void * koa5sf2w1y ; void * dw31xg4lxo ; void
* bvw2va0bpk ; void * fjba1nfx13 ; struct { void * LoggedData ; } d1xayk1tnu
; int32_T mre1zjqmyg ; int32_T c1xv4lavyx ; int32_T jl5ooysd2s ; uint32_T
eifup1x5cc ; uint32_T mm51shfpuc [ 2 ] ; uint32_T dky15kevds [ 625 ] ;
uint32_T lbdnrt5k2u ; uint32_T iad4zbxzgs ; uint32_T hyyf22gvlr [ 2 ] ;
j2cq0amibe b01cx0ynrl ; j2cq0amibe lmh145ati3 ; struct { int_T PrevIndex ; }
ah1glsmkae ; struct { int_T PrevIndex ; } dvzs4nrqov ; struct { int_T
PrevIndex ; } gh0oec1z5w ; struct { int_T PrevIndex ; } ahwnshb1lx ; int_T
aqvwut4gxx ; int_T gdmfsz4u3k ; struct { int_T PrevIndex ; } lo0wac2a2b ;
int_T fw5ooxnkzk ; int_T hsxcmjmtgd ; int_T pktaxkjkog ; int_T hydze1iruo ;
int_T nbd2ciowee ; int_T eisab1mvjn ; uint8_T aes52he5qp ; uint8_T iqfygxjppa
; boolean_T o4q5nva5zq ; boolean_T gphonxq0y5 ; boolean_T myukt1dkx2 ;
boolean_T jlomuqw2nj ; boolean_T anywdxjzfj ; boolean_T ikadmncmhw ;
boolean_T excyoskhit ; boolean_T jqluzytle2 ; boolean_T je2chgxwr3 ;
boolean_T gb0pu4b4jm ; boolean_T plsp5vol0y ; boolean_T ghd034ermt ;
boolean_T kjyys5fqrc ; boolean_T k2aa442psi ; boolean_T myznoztvgf ;
boolean_T oiqnpg1c2e ; boolean_T nm05ot5thg ; boolean_T k3ntuowunk ;
boolean_T pxlzvepeuu ; boolean_T m54kshliay ; } DW ; typedef struct { real_T
p3palrnzjz ; real_T gncr2kcfdc ; real_T jssdeyuydp ; real_T e2dw3elb2f ;
real_T gwlcka103e [ 2 ] ; real_T j0lveohajj [ 2 ] ; real_T lpgahzuqj5 [ 2 ] ;
real_T kedegwhd4y [ 2 ] ; real_T kuiemveww2 [ 2 ] ; real_T jdiyri4o3q ;
real_T cl4axnntag [ 2 ] ; real_T cgdarxxfhh [ 2 ] ; real_T njhi2kkb45 [ 2 ] ;
real_T enzife1153 [ 2 ] ; real_T m3ewvxkuda [ 2 ] ; real_T lmwqgrobiu [ 2 ] ;
real_T enbehpdbh2 [ 2 ] ; real_T pzt5vdq13u [ 2 ] ; real_T laucphmfyy ;
real_T hfsj1vb0zx [ 2 ] ; real_T jtwggrtgak [ 2 ] ; real_T dmqxelc4g5 [ 26 ]
; real_T h3eov1d0ks ; real_T gb2ewon1vo [ 2 ] ; real_T gnk4ve4l0j ; real_T
bka1w3yj3x [ 2 ] ; } X ; typedef struct { real_T p3palrnzjz ; real_T
gncr2kcfdc ; real_T jssdeyuydp ; real_T e2dw3elb2f ; real_T gwlcka103e [ 2 ]
; real_T j0lveohajj [ 2 ] ; real_T lpgahzuqj5 [ 2 ] ; real_T kedegwhd4y [ 2 ]
; real_T kuiemveww2 [ 2 ] ; real_T jdiyri4o3q ; real_T cl4axnntag [ 2 ] ;
real_T cgdarxxfhh [ 2 ] ; real_T njhi2kkb45 [ 2 ] ; real_T enzife1153 [ 2 ] ;
real_T m3ewvxkuda [ 2 ] ; real_T lmwqgrobiu [ 2 ] ; real_T enbehpdbh2 [ 2 ] ;
real_T pzt5vdq13u [ 2 ] ; real_T laucphmfyy ; real_T hfsj1vb0zx [ 2 ] ;
real_T jtwggrtgak [ 2 ] ; real_T dmqxelc4g5 [ 26 ] ; real_T h3eov1d0ks ;
real_T gb2ewon1vo [ 2 ] ; real_T gnk4ve4l0j ; real_T bka1w3yj3x [ 2 ] ; }
XDot ; typedef struct { boolean_T p3palrnzjz ; boolean_T gncr2kcfdc ;
boolean_T jssdeyuydp ; boolean_T e2dw3elb2f ; boolean_T gwlcka103e [ 2 ] ;
boolean_T j0lveohajj [ 2 ] ; boolean_T lpgahzuqj5 [ 2 ] ; boolean_T
kedegwhd4y [ 2 ] ; boolean_T kuiemveww2 [ 2 ] ; boolean_T jdiyri4o3q ;
boolean_T cl4axnntag [ 2 ] ; boolean_T cgdarxxfhh [ 2 ] ; boolean_T
njhi2kkb45 [ 2 ] ; boolean_T enzife1153 [ 2 ] ; boolean_T m3ewvxkuda [ 2 ] ;
boolean_T lmwqgrobiu [ 2 ] ; boolean_T enbehpdbh2 [ 2 ] ; boolean_T
pzt5vdq13u [ 2 ] ; boolean_T laucphmfyy ; boolean_T hfsj1vb0zx [ 2 ] ;
boolean_T jtwggrtgak [ 2 ] ; boolean_T dmqxelc4g5 [ 26 ] ; boolean_T
h3eov1d0ks ; boolean_T gb2ewon1vo [ 2 ] ; boolean_T gnk4ve4l0j ; boolean_T
bka1w3yj3x [ 2 ] ; } XDis ; typedef struct { real_T p3palrnzjz ; real_T
gncr2kcfdc ; real_T jssdeyuydp ; real_T e2dw3elb2f ; real_T gwlcka103e [ 2 ]
; real_T j0lveohajj [ 2 ] ; real_T lpgahzuqj5 [ 2 ] ; real_T kedegwhd4y [ 2 ]
; real_T kuiemveww2 [ 2 ] ; real_T jdiyri4o3q ; real_T cl4axnntag [ 2 ] ;
real_T cgdarxxfhh [ 2 ] ; real_T njhi2kkb45 [ 2 ] ; real_T enzife1153 [ 2 ] ;
real_T m3ewvxkuda [ 2 ] ; real_T lmwqgrobiu [ 2 ] ; real_T enbehpdbh2 [ 2 ] ;
real_T pzt5vdq13u [ 2 ] ; real_T laucphmfyy ; real_T hfsj1vb0zx [ 2 ] ;
real_T jtwggrtgak [ 2 ] ; real_T dmqxelc4g5 [ 26 ] ; real_T h3eov1d0ks ;
real_T gb2ewon1vo [ 2 ] ; real_T gnk4ve4l0j ; real_T bka1w3yj3x [ 2 ] ; }
CStateAbsTol ; typedef struct { real_T p3palrnzjz ; real_T gncr2kcfdc ;
real_T jssdeyuydp ; real_T e2dw3elb2f ; real_T gwlcka103e [ 2 ] ; real_T
j0lveohajj [ 2 ] ; real_T lpgahzuqj5 [ 2 ] ; real_T kedegwhd4y [ 2 ] ; real_T
kuiemveww2 [ 2 ] ; real_T jdiyri4o3q ; real_T cl4axnntag [ 2 ] ; real_T
cgdarxxfhh [ 2 ] ; real_T njhi2kkb45 [ 2 ] ; real_T enzife1153 [ 2 ] ; real_T
m3ewvxkuda [ 2 ] ; real_T lmwqgrobiu [ 2 ] ; real_T enbehpdbh2 [ 2 ] ; real_T
pzt5vdq13u [ 2 ] ; real_T laucphmfyy ; real_T hfsj1vb0zx [ 2 ] ; real_T
jtwggrtgak [ 2 ] ; real_T dmqxelc4g5 [ 26 ] ; real_T h3eov1d0ks ; real_T
gb2ewon1vo [ 2 ] ; real_T gnk4ve4l0j ; real_T bka1w3yj3x [ 2 ] ; } CXPtMin ;
typedef struct { real_T p3palrnzjz ; real_T gncr2kcfdc ; real_T jssdeyuydp ;
real_T e2dw3elb2f ; real_T gwlcka103e [ 2 ] ; real_T j0lveohajj [ 2 ] ;
real_T lpgahzuqj5 [ 2 ] ; real_T kedegwhd4y [ 2 ] ; real_T kuiemveww2 [ 2 ] ;
real_T jdiyri4o3q ; real_T cl4axnntag [ 2 ] ; real_T cgdarxxfhh [ 2 ] ;
real_T njhi2kkb45 [ 2 ] ; real_T enzife1153 [ 2 ] ; real_T m3ewvxkuda [ 2 ] ;
real_T lmwqgrobiu [ 2 ] ; real_T enbehpdbh2 [ 2 ] ; real_T pzt5vdq13u [ 2 ] ;
real_T laucphmfyy ; real_T hfsj1vb0zx [ 2 ] ; real_T jtwggrtgak [ 2 ] ;
real_T dmqxelc4g5 [ 26 ] ; real_T h3eov1d0ks ; real_T gb2ewon1vo [ 2 ] ;
real_T gnk4ve4l0j ; real_T bka1w3yj3x [ 2 ] ; } CXPtMax ; typedef struct {
real_T hzbd2de1cb ; real_T cslqht0fe5 ; real_T p1ngyb1tp3 ; real_T cpkiaik3yc
; real_T eloxqpt150 ; } ZCV ; typedef struct { ZCSigState hqy0cwoewc ; }
PrevZCX ; typedef struct { rtwCAPI_ModelMappingInfo mmi ; } DataMapInfo ;
struct P_ { struct_xGpzbZ0wN9eJPl253wr9RE cartParam ; real_T
DiscreteDerivative_ICPrevScaledInput ; real_T Constant2_Value [ 6 ] ; real_T
FromWorkspace1_Time0 [ 3101 ] ; real_T FromWorkspace1_Data0 [ 6202 ] ; real_T
Integrator2_IC ; real_T Integrator1_IC ; real_T Integrator3_IC ; real_T
Gain_Gain ; real_T FromWorkspace3_Time0 [ 3101 ] ; real_T
FromWorkspace3_Data0 [ 3101 ] ; real_T Integrator_IC ; real_T
Gain_Gain_jqosi22ou2 ; real_T Integrator_IC_isl5emljg2 ; real_T
UnitDelay_InitialCondition ; real_T FromWorkspace4_Time0 [ 3101 ] ; real_T
FromWorkspace4_Data0 [ 9303 ] ; real_T FromWorkspace5_Time0 [ 22 ] ; real_T
FromWorkspace5_Data0 [ 22 ] ; real_T Gain_Gain_ixhiatnuua ; real_T
Integrator_IC_pfyyjjaerm ; real_T Saturation_UpperSat ; real_T
Saturation_LowerSat ; real_T Gain_Gain_kg51a1y4n4 ; real_T Switch_Threshold ;
real_T Gain_Gain_gbc03uxe30 ; real_T FromWorkspace2_Time0 [ 3101 ] ; real_T
FromWorkspace2_Data0 [ 3101 ] ; real_T TSamp_WtEt ; real_T
Gain_Gain_fnyptoffgf ; real_T Constant1_Value [ 3 ] ; real_T Constant_Value [
3 ] ; real_T Constant_Value_m2yjzgvvms ; real_T Constant_Value_k5zgsdk1tk ; }
; extern const char_T * RT_MEMORY_ALLOCATION_ERROR ; extern B rtB ; extern X
rtX ; extern DW rtDW ; extern PrevZCX rtPrevZCX ; extern P rtP ; extern
mxArray * mr_Top_Level_Simulation_GetDWork ( ) ; extern void
mr_Top_Level_Simulation_SetDWork ( const mxArray * ssDW ) ; extern mxArray *
mr_Top_Level_Simulation_GetSimStateDisallowedBlocks ( ) ; extern const
rtwCAPI_ModelMappingStaticInfo * Top_Level_Simulation_GetCAPIStaticMap ( void
) ; extern SimStruct * const rtS ; extern const int_T gblNumToFiles ; extern
const int_T gblNumFrFiles ; extern const int_T gblNumFrWksBlocks ; extern
rtInportTUtable * gblInportTUtables ; extern const char * gblInportFileName ;
extern const int_T gblNumRootInportBlks ; extern const int_T
gblNumModelInputs ; extern const int_T gblInportDataTypeIdx [ ] ; extern
const int_T gblInportDims [ ] ; extern const int_T gblInportComplex [ ] ;
extern const int_T gblInportInterpoFlag [ ] ; extern const int_T
gblInportContinuous [ ] ; extern const int_T gblParameterTuningTid ; extern
DataMapInfo * rt_dataMapInfoPtr ; extern rtwCAPI_ModelMappingInfo *
rt_modelMapInfoPtr ; void MdlOutputs ( int_T tid ) ; void
MdlOutputsParameterSampleTime ( int_T tid ) ; void MdlUpdate ( int_T tid ) ;
void MdlTerminate ( void ) ; void MdlInitializeSizes ( void ) ; void
MdlInitializeSampleTimes ( void ) ; SimStruct * raccel_register_model (
ssExecutionInfo * executionInfo ) ;
#endif
