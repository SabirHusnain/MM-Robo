#include <math.h>
#include <string.h>
#include "pm_std.h"
#include "sm_std.h"
#include "ne_std.h"
#include "ne_dae.h"
#include "sm_ssci_run_time_errors.h"
#include "sm_RuntimeDerivedValuesBundle.h"
const sm_core_compiler_Cylinder * Top_Level_Simulation_66cd9431_1_geometry_0
( const RuntimeDerivedValuesBundle * rtdv ) { static const
sm_core_compiler_Cylinder cylinder = { 0.18288 , 0.6096 } ; ( void ) rtdv ;
return & cylinder ; } const sm_core_compiler_Brick *
Top_Level_Simulation_66cd9431_1_geometry_1 ( const RuntimeDerivedValuesBundle
* rtdv ) { static const sm_core_compiler_Brick brick = { 20.0 , 20.0 , 1.0e-3
} ; ( void ) rtdv ; return & brick ; } const sm_core_compiler_Brick *
Top_Level_Simulation_66cd9431_1_geometry_2 ( const RuntimeDerivedValuesBundle
* rtdv ) { static const sm_core_compiler_Brick brick = { 0.2291800575 ,
0.6096 , 0.01 } ; ( void ) rtdv ; return & brick ; } void
Top_Level_Simulation_66cd9431_1_initializeGeometries ( const struct
RuntimeDerivedValuesBundleTag * rtdv ) {
Top_Level_Simulation_66cd9431_1_geometry_0 ( rtdv ) ;
Top_Level_Simulation_66cd9431_1_geometry_1 ( rtdv ) ;
Top_Level_Simulation_66cd9431_1_geometry_2 ( rtdv ) ; }
