#include "ext_types.h"
static DataTypeInfo rtDataTypeInfoTable [ ] = { { "real_T" , 0 , 8 } , {
"real32_T" , 1 , 4 } , { "int8_T" , 2 , 1 } , { "uint8_T" , 3 , 1 } , {
"int16_T" , 4 , 2 } , { "uint16_T" , 5 , 2 } , { "int32_T" , 6 , 4 } , {
"uint32_T" , 7 , 4 } , { "boolean_T" , 8 , 1 } , { "fcn_call_T" , 9 , 0 } , {
"int_T" , 10 , 4 } , { "pointer_T" , 11 , 8 } , { "action_T" , 12 , 8 } , {
"timer_uint32_pair_T" , 13 , 8 } , { "physical_connection" , 14 , 8 } , {
"int64_T" , 15 , 8 } , { "uint64_T" , 16 , 8 } , {
"struct_MH1icwhz7mkMseeLmnjXIE" , 17 , 48 } , {
"struct_HjWznGQfRTNID7KXnowNiG" , 18 , 24 } , {
"struct_2hBrgz1Av1YQD2HwLOwlBD" , 19 , 16 } , {
"struct_uL0pxdA9CLhg9KUiqLmMTE" , 20 , 48 } , {
"struct_a4uJcCPwLYNP0Eo2tJy9BG" , 21 , 40 } , {
"struct_5lMvj1bEcICoYHM5NMKgmC" , 22 , 80 } , {
"struct_OkHeu9eK3mB6g0h8z1nbJG" , 23 , 32 } , {
"struct_rvOi9M8Udcrol81BZGhD5E" , 24 , 24 } , {
"struct_xGpzbZ0wN9eJPl253wr9RE" , 25 , 56 } , { "ikblock_info_bus" , 26 , 24
} , { "j2cq0amibe" , 27 , 4 } , { "aivhh1v50g" , 28 , 5368 } , { "pd0uxzf3xo"
, 29 , 28296 } , { "uint64_T" , 30 , 8 } , { "int64_T" , 31 , 8 } , {
"uint_T" , 32 , 32 } , { "char_T" , 33 , 8 } , { "uchar_T" , 34 , 8 } , {
"time_T" , 35 , 8 } } ; static uint_T rtDataTypeSizes [ ] = { sizeof ( real_T
) , sizeof ( real32_T ) , sizeof ( int8_T ) , sizeof ( uint8_T ) , sizeof (
int16_T ) , sizeof ( uint16_T ) , sizeof ( int32_T ) , sizeof ( uint32_T ) ,
sizeof ( boolean_T ) , sizeof ( fcn_call_T ) , sizeof ( int_T ) , sizeof (
pointer_T ) , sizeof ( action_T ) , 2 * sizeof ( uint32_T ) , sizeof (
int32_T ) , sizeof ( int64_T ) , sizeof ( uint64_T ) , sizeof (
struct_MH1icwhz7mkMseeLmnjXIE ) , sizeof ( struct_HjWznGQfRTNID7KXnowNiG ) ,
sizeof ( struct_2hBrgz1Av1YQD2HwLOwlBD ) , sizeof (
struct_uL0pxdA9CLhg9KUiqLmMTE ) , sizeof ( struct_a4uJcCPwLYNP0Eo2tJy9BG ) ,
sizeof ( struct_5lMvj1bEcICoYHM5NMKgmC ) , sizeof (
struct_OkHeu9eK3mB6g0h8z1nbJG ) , sizeof ( struct_rvOi9M8Udcrol81BZGhD5E ) ,
sizeof ( struct_xGpzbZ0wN9eJPl253wr9RE ) , sizeof ( ikblock_info_bus ) ,
sizeof ( j2cq0amibe ) , sizeof ( aivhh1v50g ) , sizeof ( pd0uxzf3xo ) ,
sizeof ( uint64_T ) , sizeof ( int64_T ) , sizeof ( uint_T ) , sizeof (
char_T ) , sizeof ( uchar_T ) , sizeof ( time_T ) } ; static const char_T *
rtDataTypeNames [ ] = { "real_T" , "real32_T" , "int8_T" , "uint8_T" ,
"int16_T" , "uint16_T" , "int32_T" , "uint32_T" , "boolean_T" , "fcn_call_T"
, "int_T" , "pointer_T" , "action_T" , "timer_uint32_pair_T" ,
"physical_connection" , "int64_T" , "uint64_T" ,
"struct_MH1icwhz7mkMseeLmnjXIE" , "struct_HjWznGQfRTNID7KXnowNiG" ,
"struct_2hBrgz1Av1YQD2HwLOwlBD" , "struct_uL0pxdA9CLhg9KUiqLmMTE" ,
"struct_a4uJcCPwLYNP0Eo2tJy9BG" , "struct_5lMvj1bEcICoYHM5NMKgmC" ,
"struct_OkHeu9eK3mB6g0h8z1nbJG" , "struct_rvOi9M8Udcrol81BZGhD5E" ,
"struct_xGpzbZ0wN9eJPl253wr9RE" , "ikblock_info_bus" , "j2cq0amibe" ,
"aivhh1v50g" , "pd0uxzf3xo" , "uint64_T" , "int64_T" , "uint_T" , "char_T" ,
"uchar_T" , "time_T" } ; static DataTypeTransition rtBTransitions [ ] = { { (
char_T * ) ( & rtB . cusv2amtca ) , 26 , 0 , 1 } , { ( char_T * ) ( & rtB .
g1wu31mqe4 [ 0 ] ) , 0 , 0 , 244 } , { ( char_T * ) ( & rtDW . aurrx3wzjl ) ,
29 , 0 , 1 } , { ( char_T * ) ( & rtDW . okj1p03aot ) , 28 , 0 , 1 } , { (
char_T * ) ( & rtDW . g32rtzaewg ) , 0 , 0 , 56 } , { ( char_T * ) ( & rtDW .
iyonscealb . TimePtr ) , 11 , 0 , 49 } , { ( char_T * ) ( & rtDW . mre1zjqmyg
) , 6 , 0 , 3 } , { ( char_T * ) ( & rtDW . eifup1x5cc ) , 7 , 0 , 632 } , {
( char_T * ) ( & rtDW . b01cx0ynrl ) , 27 , 0 , 2 } , { ( char_T * ) ( & rtDW
. ah1glsmkae . PrevIndex ) , 10 , 0 , 13 } , { ( char_T * ) ( & rtDW .
aes52he5qp ) , 3 , 0 , 2 } , { ( char_T * ) ( & rtDW . o4q5nva5zq ) , 8 , 0 ,
20 } } ; static DataTypeTransitionTable rtBTransTable = { 12U ,
rtBTransitions } ; static DataTypeTransition rtPTransitions [ ] = { { (
char_T * ) ( & rtP . cartParam ) , 25 , 0 , 1 } , { ( char_T * ) ( & rtP .
DiscreteDerivative_ICPrevScaledInput ) , 0 , 0 , 34187 } } ; static
DataTypeTransitionTable rtPTransTable = { 2U , rtPTransitions } ;
