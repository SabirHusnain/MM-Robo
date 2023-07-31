#include "ne_std.h"
#include "pm_default_allocator.h"
#include "ne_dae.h"
#include "ne_solverparameters.h"
#include "sm_ssci_NeDaePrivateData.h"
NeDae * sm_ssci_constructDae ( NeDaePrivateData * smData ) ; void
Top_Level_Simulation_66cd9431_1_NeDaePrivateData_create ( NeDaePrivateData *
smData ) ; void Top_Level_Simulation_66cd9431_1_dae ( NeDae * * dae , const
NeModelParameters * modelParams , const NeSolverParameters * solverParams ) {
PmAllocator * alloc = pm_default_allocator ( ) ; NeDaePrivateData * smData =
( NeDaePrivateData * ) alloc -> mCallocFcn ( alloc , sizeof (
NeDaePrivateData ) , 1 ) ; ( void ) modelParams ; ( void ) solverParams ;
Top_Level_Simulation_66cd9431_1_NeDaePrivateData_create ( smData ) ; * dae =
sm_ssci_constructDae ( smData ) ; }
