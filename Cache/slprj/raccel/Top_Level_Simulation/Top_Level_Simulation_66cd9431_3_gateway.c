#ifdef MATLAB_MEX_FILE
#include "tmwtypes.h"
#else
#include "rtwtypes.h"
#endif
#include "nesl_rtw.h"
#include "Top_Level_Simulation_66cd9431_3.h"
#include "Top_Level_Simulation_66cd9431_3_gateway.h"
void Top_Level_Simulation_66cd9431_3_gateway ( void ) { NeModelParameters
modelparams = { ( NeSolverType ) 1 , 0.001 , 0.001 , 0.001 , 1 , 0 , (
NeModifyAbsTol ) 0 , 0.001 , 0 , 0 , 0 , 0 , ( SscLoggingSetting ) 0 ,
612190689 , 0 , 0 , } ; NeSolverParameters solverparams = { 0 , (
NeMBLocalSolverChoice ) 0 , 0.001 , 0 , 0 , 1 , 0 , 0 , 0.001 , 0.001 , 1e-09
, 0 , 0 , 100 , 0 , 1 , ( NeConsistencySolver ) 2 , ( NeIndexReductionMethod
) 1 , 0 , 1e-09 , ( NeToleranceSource ) 1 , 0.001 , 0.001 , 0.001 , 0 , (
NeLocalSolverChoice ) 0 , 1 , 1 , 0.001 , 0 , 3 , 2 , 0 , 2 , (
NeLinearAlgebraChoice ) 1 , 0 , ( NeEquationFormulationChoice ) 0 , 10240 , 1
, 0.01 , ( NePartitionStorageMethod ) 0 , 1024 , ( NePartitionMethod ) 0 , }
; const NeOutputParameters * outputparameters = NULL ; NeDae * dae ; size_t
numOutputs = 0 ; int * rtpDaes = NULL ; int * rtwLogDaes = NULL ; { static
const NeOutputParameters outputparameters_init [ ] = { { 0 , 0 , } , } ;
outputparameters = outputparameters_init ; numOutputs = sizeof (
outputparameters_init ) / sizeof ( outputparameters_init [ 0 ] ) ; }
Top_Level_Simulation_66cd9431_3_dae ( & dae , & modelparams , & solverparams
) ; nesl_register_simulator_group (
 "Top_Level_Simulation/Simulation Environment/Position Actuated Robot Environment/Solver Configuration_3"
, 1 , & dae , & solverparams , & modelparams , numOutputs , outputparameters
, 0 , rtpDaes , 0 , rtwLogDaes ) ; }
