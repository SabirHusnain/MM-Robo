#include "pm_std.h"
#include "ne_std.h"
#include "ne_dae.h"
#include "pm_default_allocator.h"
#include "sm_ssci_NeDaePrivateData.h"
#include "sm_CTarget.h"
PmfMessageId sm_ssci_recordRunTimeError ( const char * errorId , const char *
errorMsg , NeuDiagnosticManager * mgr ) ;
#define pm_allocator_alloc(_allocator, _m, _n) ((_allocator)->mCallocFcn((_allocator), (_m), (_n)))
#define PM_ALLOCATE_ARRAY(_name, _type, _size, _allocator)\
 _name = (_type *) pm_allocator_alloc(_allocator, sizeof(_type), _size)
#define pm_size_to_int(_size)          ((int32_T) (_size))
PmIntVector * pm_create_int_vector ( size_t , PmAllocator * ) ; int_T
pm_create_int_vector_fields ( PmIntVector * , size_t , PmAllocator * ) ;
int_T pm_create_real_vector_fields ( PmRealVector * , size_t , PmAllocator *
) ; int_T pm_create_char_vector_fields ( PmCharVector * , size_t ,
PmAllocator * ) ; int_T pm_create_bool_vector_fields ( PmBoolVector * ,
size_t , PmAllocator * ) ; void pm_rv_equals_rv ( const PmRealVector * ,
const PmRealVector * ) ; extern const NeAssertData
Top_Level_Simulation_66cd9431_1_assertData [ ] ; extern const NeZCData
Top_Level_Simulation_66cd9431_1_ZCData [ ] ; void
Top_Level_Simulation_66cd9431_1_computeRuntimeParameters ( const double *
runtimeRootVariables , double * runtimeParameters ) ; void
Top_Level_Simulation_66cd9431_1_validateRuntimeParameters ( const double *
runtimeParameters , int32_T * assertSatisfactionFlags ) ; void
Top_Level_Simulation_66cd9431_1_computeAsmRuntimeDerivedValues ( const double
* runtimeParameters , RuntimeDerivedValuesBundle * runtimeDerivedValuesBundle
) ; void Top_Level_Simulation_66cd9431_1_computeSimRuntimeDerivedValues (
const double * runtimeParameters , RuntimeDerivedValuesBundle *
runtimeDerivedValuesBundle ) ; void
Top_Level_Simulation_66cd9431_1_initializeGeometries ( const
RuntimeDerivedValuesBundle * runtimeDerivedValuesBundle ) ; PmfMessageId
Top_Level_Simulation_66cd9431_1_compDerivs ( const RuntimeDerivedValuesBundle
* , const int * , const double * , const int * , const double * , const
double * , const double * , const double * , double * , double * ,
NeuDiagnosticManager * neDiagMgr ) ; PmfMessageId
Top_Level_Simulation_66cd9431_1_numJacPerturbLoBounds ( const
RuntimeDerivedValuesBundle * , const int * , const double * , const int * ,
const double * , const double * , const double * , const double * , double *
, double * , NeuDiagnosticManager * neDiagMgr ) ; PmfMessageId
Top_Level_Simulation_66cd9431_1_numJacPerturbHiBounds ( const
RuntimeDerivedValuesBundle * , const int * , const double * , const int * ,
const double * , const double * , const double * , const double * , double *
, double * , NeuDiagnosticManager * neDiagMgr ) ; PmfMessageId
Top_Level_Simulation_66cd9431_1_checkDynamics ( const
RuntimeDerivedValuesBundle * , const double * , const double * , const double
* , const double * , const double * , const int * , double * ,
NeuDiagnosticManager * neDiagMgr ) ; PmfMessageId
Top_Level_Simulation_66cd9431_1_compOutputsDyn ( const
RuntimeDerivedValuesBundle * , const int * , const double * , const int * ,
const double * , const double * , const double * , const double * , double *
, double * , int * , double * , NeuDiagnosticManager * neDiagMgr ) ;
PmfMessageId Top_Level_Simulation_66cd9431_1_compOutputsKin ( const
RuntimeDerivedValuesBundle * , const double * , const int * , const double *
, const double * , const double * , const double * , double * ,
NeuDiagnosticManager * neDiagMgr ) ; PmfMessageId
Top_Level_Simulation_66cd9431_1_compOutputs ( const
RuntimeDerivedValuesBundle * , const double * , const int * , const double *
, const double * , const double * , const double * , double * ,
NeuDiagnosticManager * neDiagMgr ) ; PmfMessageId
Top_Level_Simulation_66cd9431_1_computeAsmModeVector ( const double * , const
double * , const double * , int * , double * , NeuDiagnosticManager *
neDiagMgr ) ; PmfMessageId
Top_Level_Simulation_66cd9431_1_computeSimModeVector ( const double * , const
double * , const double * , int * , double * , NeuDiagnosticManager *
neDiagMgr ) ; PmfMessageId
Top_Level_Simulation_66cd9431_1_computeZeroCrossings ( const
RuntimeDerivedValuesBundle * , const double * , const double * , const double
* , const double * , const double * , double * , double * ,
NeuDiagnosticManager * neDiagMgr ) ; PmfMessageId
Top_Level_Simulation_66cd9431_1_recordLog ( const RuntimeDerivedValuesBundle
* , const int * , const double * , const int * , const double * , const
double * , const double * , double * , double * , NeuDiagnosticManager *
neDiagMgr ) ; void Top_Level_Simulation_66cd9431_1_setTargets ( const
RuntimeDerivedValuesBundle * runtimeDerivedValuesBundle , CTarget * targets )
; void Top_Level_Simulation_66cd9431_1_resetAsmStateVector ( const void *
mech , double * stateVector ) ; void
Top_Level_Simulation_66cd9431_1_resetSimStateVector ( const void * mech ,
double * stateVector ) ; void
Top_Level_Simulation_66cd9431_1_initializeTrackedAngleState ( const void *
mech , const RuntimeDerivedValuesBundle * runtimeDerivedValuesBundle , const
int * modeVector , const double * motionData , double * stateVector ) ; void
Top_Level_Simulation_66cd9431_1_computeDiscreteState ( const void * mech ,
const RuntimeDerivedValuesBundle * runtimeDerivedValuesBundle , double *
stateVector ) ; void Top_Level_Simulation_66cd9431_1_adjustPosition ( const
void * mech , const double * dofDeltas , double * stateVector ) ; void
Top_Level_Simulation_66cd9431_1_perturbAsmJointPrimitiveState ( const void *
mech , size_t stageIdx , size_t primitiveIdx , double magnitude , boolean_T
doPerturbVelocity , double * stateVector ) ; void
Top_Level_Simulation_66cd9431_1_perturbSimJointPrimitiveState ( const void *
mech , size_t stageIdx , size_t primitiveIdx , double magnitude , boolean_T
doPerturbVelocity , double * stateVector ) ; void
Top_Level_Simulation_66cd9431_1_perturbFlexibleBodyState ( const void * mech
, size_t stageIdx , double magnitude , boolean_T doPerturbVelocity , double *
stateVector ) ; void Top_Level_Simulation_66cd9431_1_computePosDofBlendMatrix
( const void * mech , size_t stageIdx , size_t primitiveIdx , const double *
stateVector , int partialType , double * matrix ) ; void
Top_Level_Simulation_66cd9431_1_computeVelDofBlendMatrix ( const void * mech
, size_t stageIdx , size_t primitiveIdx , const double * stateVector , int
partialType , double * matrix ) ; void
Top_Level_Simulation_66cd9431_1_projectPartiallyTargetedPos ( const void *
mech , size_t stageIdx , size_t primitiveIdx , const double * origStateVector
, int partialType , double * stateVector ) ; void
Top_Level_Simulation_66cd9431_1_propagateMotion ( const void * mech , const
RuntimeDerivedValuesBundle * runtimeDerivedValuesBundle , const double *
stateVector , double * motionData ) ; size_t
Top_Level_Simulation_66cd9431_1_computeAssemblyError ( const void * mech ,
const RuntimeDerivedValuesBundle * runtimeDerivedValuesBundle , size_t
constraintIdx , const int * modeVector , const double * motionData , double *
error ) ; size_t Top_Level_Simulation_66cd9431_1_computeAssemblyJacobian (
const void * mech , const RuntimeDerivedValuesBundle *
runtimeDerivedValuesBundle , size_t constraintIdx , boolean_T
forVelocitySatisfaction , const double * stateVector , const int * modeVector
, const double * motionData , double * J ) ; size_t
Top_Level_Simulation_66cd9431_1_computeFullAssemblyJacobian ( const void *
mech , const RuntimeDerivedValuesBundle * runtimeDerivedValuesBundle , const
double * stateVector , const int * modeVector , const double * motionData ,
double * J ) ; boolean_T
Top_Level_Simulation_66cd9431_1_isInKinematicSingularity ( const void * mech
, const RuntimeDerivedValuesBundle * runtimeDerivedValuesBundle , size_t
constraintIdx , const int * modeVector , const double * motionData ) ; void
Top_Level_Simulation_66cd9431_1_convertStateVector ( const void * asmMech ,
const RuntimeDerivedValuesBundle * asmRuntimeDerivedValuesBundle , const void
* simMech , const double * asmStateVector , const int * asmModeVector , const
int * simModeVector , double * simStateVector ) ; void
Top_Level_Simulation_66cd9431_1_constructStateVector ( const void * mech ,
const double * solverStateVector , const double * u , const double * uDot ,
const double * discreteStateVector , double * fullStateVector ) ; void
Top_Level_Simulation_66cd9431_1_extractSolverStateVector ( const void * mech
, const double * fullStateVector , double * solverStateVector ) ; boolean_T
Top_Level_Simulation_66cd9431_1_isPositionViolation ( const void * mech ,
const RuntimeDerivedValuesBundle * runtimeDerivedValuesBundle , const int *
constraintEqnEnableFlags , const double * stateVector , const int *
modeVector ) ; boolean_T Top_Level_Simulation_66cd9431_1_isVelocityViolation
( const void * mech , const RuntimeDerivedValuesBundle *
runtimeDerivedValuesBundle , const int * constraintEqnEnableFlags , const
double * stateVector , const int * modeVector ) ; PmfMessageId
Top_Level_Simulation_66cd9431_1_projectStateSim ( const void * mech , const
RuntimeDerivedValuesBundle * runtimeDerivedValuesBundle , const int *
constraintEqnEnableFlags , const int * modeVector , double * stateVector ,
void * neDiagMgr ) ; void
Top_Level_Simulation_66cd9431_1_computeConstraintError ( const void * mech ,
const RuntimeDerivedValuesBundle * runtimeDerivedValuesBundle , const double
* stateVector , const int * modeVector , double * error ) ; void
Top_Level_Simulation_66cd9431_1_resetModeVector ( const void * mech , int *
modeVector ) ; boolean_T
Top_Level_Simulation_66cd9431_1_hasJointDisToNormModeChange ( const void *
mech , const int * prevModeVector , const int * modeVector ) ; PmfMessageId
Top_Level_Simulation_66cd9431_1_performJointDisToNormModeChange ( const void
* mech , const RuntimeDerivedValuesBundle * runtimeDerivedValuesBundle ,
const int * constraintEqnEnableFlags , const int * prevModeVector , const int
* modeVector , const double * inputVector , double * stateVector , void *
neDiagMgr ) ; void Top_Level_Simulation_66cd9431_1_onModeChangedCutJoints (
const void * mech , const int * prevModeVector , const int * modeVector ,
double * stateVector ) ; PmfMessageId
Top_Level_Simulation_66cd9431_1_assemble ( const double * u , double * udot ,
double * x , NeuDiagnosticManager * neDiagMgr ) { ( void ) x ; ( void ) u ; (
void ) udot ; ( void ) neDiagMgr ; return NULL ; } static void
dae_cg_setParameters_function ( const NeDae * dae , const NeParameterBundle *
paramBundle ) { const NeDaePrivateData * smData = dae -> mPrivateData ; const
double * runtimeRootVariables = paramBundle -> mRealParameters . mX ; if (
smData -> mRuntimeParameterScalars . mN == 0 ) return ;
Top_Level_Simulation_66cd9431_1_computeRuntimeParameters (
runtimeRootVariables , smData -> mRuntimeParameterScalars . mX ) ;
Top_Level_Simulation_66cd9431_1_computeAsmRuntimeDerivedValues ( smData ->
mRuntimeParameterScalars . mX , & dae -> mPrivateData ->
mAsmRuntimeDerivedValuesBundle ) ;
Top_Level_Simulation_66cd9431_1_computeSimRuntimeDerivedValues ( smData ->
mRuntimeParameterScalars . mX , & dae -> mPrivateData ->
mSimRuntimeDerivedValuesBundle ) ;
Top_Level_Simulation_66cd9431_1_initializeGeometries ( & smData ->
mSimRuntimeDerivedValuesBundle ) ;
sm_core_computeRedundantConstraintEquations ( & dae -> mPrivateData ->
mSimulationDelegate , & smData -> mSimRuntimeDerivedValuesBundle ) ;
#if 0
{ size_t i ; const size_t n = smData -> mSimulationDelegate .
mRunTimeEnabledEquations . mSize ; pmf_printf (
"\nRuntime Enabled Equations (%lu)\n" , n ) ; for ( i = 0 ; i < n ; ++ i )
pmf_printf ( "  %2lu:  %d\n" , i , smData -> mSimulationDelegate .
mRunTimeEnabledEquations . mValues [ i ] ) ; }
#endif
} static PmfMessageId dae_cg_pAssert_method ( const NeDae * dae , const
NeSystemInput * systemInput , NeDaeMethodOutput * daeMethodOutput ,
NeuDiagnosticManager * neDiagMgr ) { const NeDaePrivateData * smData = dae ->
mPrivateData ; const double * runtimeParams = smData ->
mRuntimeParameterScalars . mX ; int32_T * assertSatisfactionFlags =
daeMethodOutput -> mPASSERT . mX ; ( void ) systemInput ; ( void ) neDiagMgr
; Top_Level_Simulation_66cd9431_1_validateRuntimeParameters ( runtimeParams ,
assertSatisfactionFlags ) ; return NULL ; } static PmfMessageId
dae_cg_deriv_method ( const NeDae * dae , const NeSystemInput * systemInput ,
NeDaeMethodOutput * daeMethodOutput , NeuDiagnosticManager * neDiagMgr ) {
const NeDaePrivateData * smData = dae -> mPrivateData ; PmfMessageId errorId
= NULL ; double errorResult = 0.0 ; if ( smData ->
mCachedDerivativesAvailable ) memcpy ( daeMethodOutput -> mXP0 . mX , smData
-> mCachedDerivatives . mX , 26 * sizeof ( real_T ) ) ; else errorId =
Top_Level_Simulation_66cd9431_1_compDerivs ( & smData ->
mSimRuntimeDerivedValuesBundle , smData -> mSimulationDelegate .
mRunTimeEnabledEquations . mValues , systemInput -> mX . mX , systemInput ->
mM . mX , systemInput -> mU . mX , systemInput -> mU . mX + 19 , systemInput
-> mV . mX + 19 , systemInput -> mD . mX , daeMethodOutput -> mXP0 . mX , &
errorResult , neDiagMgr ) ; return errorId ; } static PmfMessageId
dae_cg_numJacPerturbLoBounds_method ( const NeDae * dae , const NeSystemInput
* systemInput , NeDaeMethodOutput * daeMethodOutput , NeuDiagnosticManager *
neDiagMgr ) { const NeDaePrivateData * smData = dae -> mPrivateData ;
PmfMessageId errorId = NULL ; double errorResult = 0.0 ; errorId =
Top_Level_Simulation_66cd9431_1_numJacPerturbLoBounds ( & smData ->
mSimRuntimeDerivedValuesBundle , smData -> mSimulationDelegate .
mRunTimeEnabledEquations . mValues , systemInput -> mX . mX , systemInput ->
mM . mX , systemInput -> mU . mX , systemInput -> mU . mX + 19 , systemInput
-> mV . mX + 19 , systemInput -> mD . mX , daeMethodOutput -> mNUMJAC_DX_LO .
mX , & errorResult , neDiagMgr ) ; return errorId ; } static PmfMessageId
dae_cg_numJacPerturbHiBounds_method ( const NeDae * dae , const NeSystemInput
* systemInput , NeDaeMethodOutput * daeMethodOutput , NeuDiagnosticManager *
neDiagMgr ) { const NeDaePrivateData * smData = dae -> mPrivateData ;
PmfMessageId errorId = NULL ; double errorResult = 0.0 ; errorId =
Top_Level_Simulation_66cd9431_1_numJacPerturbHiBounds ( & smData ->
mSimRuntimeDerivedValuesBundle , smData -> mSimulationDelegate .
mRunTimeEnabledEquations . mValues , systemInput -> mX . mX , systemInput ->
mM . mX , systemInput -> mU . mX , systemInput -> mU . mX + 19 , systemInput
-> mV . mX + 19 , systemInput -> mD . mX , daeMethodOutput -> mNUMJAC_DX_HI .
mX , & errorResult , neDiagMgr ) ; return errorId ; } static PmfMessageId
dae_cg_compOutputs_method ( const NeDae * dae , const NeSystemInput *
systemInput , NeDaeMethodOutput * daeMethodOutput , NeuDiagnosticManager *
neDiagMgr ) { PmfMessageId errorId = NULL ; NeDaePrivateData * smData = dae
-> mPrivateData ; errorId = Top_Level_Simulation_66cd9431_1_compOutputs ( &
smData -> mSimRuntimeDerivedValuesBundle , systemInput -> mX . mX ,
systemInput -> mM . mX , systemInput -> mU . mX , systemInput -> mU . mX + 19
, systemInput -> mV . mX + 19 , systemInput -> mD . mX , daeMethodOutput ->
mY . mX , neDiagMgr ) ; return errorId ; } static PmfMessageId
dae_cg_mode_method ( const NeDae * dae , const NeSystemInput * systemInput ,
NeDaeMethodOutput * daeMethodOutput , NeuDiagnosticManager * neDiagMgr ) {
const NeDaePrivateData * smData = dae -> mPrivateData ; PmfMessageId errorId
= NULL ; double errorResult = 0.0 ; errorId =
Top_Level_Simulation_66cd9431_1_computeSimModeVector ( systemInput -> mU . mX
, systemInput -> mU . mX + 19 , systemInput -> mV . mX + 19 , daeMethodOutput
-> mMODE . mX , & errorResult , neDiagMgr ) ; memcpy ( smData ->
mCachedModeVector . mX , daeMethodOutput -> mMODE . mX , 0 * sizeof ( int32_T
) ) ; return errorId ; } static PmfMessageId dae_cg_zeroCrossing_method (
const NeDae * dae , const NeSystemInput * systemInput , NeDaeMethodOutput *
daeMethodOutput , NeuDiagnosticManager * neDiagMgr ) { const NeDaePrivateData
* smData = dae -> mPrivateData ; double errorResult = 0.0 ; return
Top_Level_Simulation_66cd9431_1_computeZeroCrossings ( & smData ->
mSimRuntimeDerivedValuesBundle , systemInput -> mX . mX , systemInput -> mU .
mX , systemInput -> mU . mX + 19 , systemInput -> mV . mX + 19 , systemInput
-> mD . mX , daeMethodOutput -> mZC . mX , & errorResult , neDiagMgr ) ; }
static void dae_cg_setupLoggerFcn ( const NeDae * dae , NeLoggerBuilder *
neLoggerBuilder ) { ( void ) dae ; ( void ) neLoggerBuilder ; } static
PmfMessageId dae_cg_recordLog_method ( const NeDae * dae , const
NeSystemInput * systemInput , PmRealVector * output , NeuDiagnosticManager *
neDiagMgr ) { const NeDaePrivateData * smData = dae -> mPrivateData ;
PmfMessageId errorId = NULL ; double errorResult = 0.0 ; double *
fullStateVector = smData -> mSimulationFullStateVector . mX ;
Top_Level_Simulation_66cd9431_1_constructStateVector ( NULL , systemInput ->
mX . mX , systemInput -> mU . mX , systemInput -> mU . mX + 19 , systemInput
-> mD . mX , fullStateVector ) ; errorId =
Top_Level_Simulation_66cd9431_1_recordLog ( & smData ->
mSimRuntimeDerivedValuesBundle , smData -> mSimulationDelegate .
mRunTimeEnabledEquations . mValues , fullStateVector , systemInput -> mM . mX
, systemInput -> mU . mX , systemInput -> mU . mX + 19 , systemInput -> mV .
mX + 19 , output -> mX , & errorResult , neDiagMgr ) ; return errorId ; }
static PmfMessageId dae_cg_project_solve ( const NeDae * dae , const
NeSystemInput * systemInput , NeuDiagnosticManager * neDiagMgr ) {
NeDaePrivateData * smData = dae -> mPrivateData ; return sm_core_projectState
( false , & smData -> mSimulationDelegate , & smData ->
mSimRuntimeDerivedValuesBundle , systemInput -> mM . mX , systemInput -> mU .
mX , systemInput -> mU . mX + 19 , systemInput -> mD . mX , systemInput -> mX
. mX , neDiagMgr ) ; } static PmfMessageId dae_cg_check_solve ( const NeDae *
dae , const NeSystemInput * systemInput , NeuDiagnosticManager * neDiagMgr )
{ NeDaePrivateData * smData = dae -> mPrivateData ; PmfMessageId errorId =
NULL ; if ( smData -> mNumConstraintEqns > 0 ) errorId = sm_core_projectState
( false , & smData -> mSimulationDelegate , & smData ->
mSimRuntimeDerivedValuesBundle , systemInput -> mM . mX , systemInput -> mU .
mX , systemInput -> mU . mX + 19 , systemInput -> mD . mX , systemInput -> mX
. mX , neDiagMgr ) ; if ( errorId == NULL ) { double result = 0.0 ; errorId =
Top_Level_Simulation_66cd9431_1_checkDynamics ( & smData ->
mSimRuntimeDerivedValuesBundle , systemInput -> mX . mX , systemInput -> mU .
mX , systemInput -> mU . mX + 19 , systemInput -> mV . mX + 19 , systemInput
-> mD . mX , systemInput -> mM . mX , & result , neDiagMgr ) ; } return
errorId ; } static PmfMessageId dae_cg_CIC_MODE_solve ( const NeDae * dae ,
const NeSystemInput * systemInput , NeuDiagnosticManager * neDiagMgr ) {
NeDaePrivateData * smData = dae -> mPrivateData ; PmfMessageId errorId = NULL
; double errorResult = 0.0 ; const size_t mvSize = smData -> mModeVectorSize
; boolean_T modeChanged = false ; if ( mvSize > 0 ) { errorId =
Top_Level_Simulation_66cd9431_1_computeSimModeVector ( systemInput -> mU . mX
, systemInput -> mU . mX + 19 , systemInput -> mV . mX + 19 , systemInput ->
mM . mX , & errorResult , neDiagMgr ) ; if ( errorId != NULL ) return errorId
; { size_t i ; for ( i = 0 ; i < mvSize ; ++ i ) if ( systemInput -> mM . mX
[ i ] != smData -> mCachedModeVector . mX [ i ] ) { modeChanged = true ;
break ; } } } if ( modeChanged ) { errorId = sm_core_onModeChanged ( & smData
-> mSimulationDelegate , & smData -> mSimRuntimeDerivedValuesBundle ,
systemInput -> mU . mX , systemInput -> mU . mX + 19 , systemInput -> mD . mX
, smData -> mCachedModeVector . mX , systemInput -> mM . mX , systemInput ->
mX . mX , neDiagMgr ) ; if ( errorId != NULL ) return errorId ; memcpy (
smData -> mCachedModeVector . mX , systemInput -> mM . mX , 0 * sizeof (
int32_T ) ) ; } errorId = sm_core_projectState ( true , & smData ->
mSimulationDelegate , & smData -> mSimRuntimeDerivedValuesBundle ,
systemInput -> mM . mX , systemInput -> mU . mX , systemInput -> mU . mX + 19
, systemInput -> mD . mX , systemInput -> mX . mX , neDiagMgr ) ; return
errorId ; } static PmfMessageId dae_cg_assemble_solve ( const NeDae * dae ,
const NeSystemInput * systemInput , NeuDiagnosticManager * neDiagMgr ) {
NeDaePrivateData * smData = dae -> mPrivateData ; const SmMechanismDelegate *
delegate = & smData -> mAssemblyDelegate ; const RuntimeDerivedValuesBundle *
runtimeDerivedValuesBundle = & smData -> mAsmRuntimeDerivedValuesBundle ;
PmfMessageId errorId = NULL ; size_t i ; double errorResult = 0.0 ; const
size_t numTargets = 76 ; unsigned int asmStatus = 0 ; double *
assemblyFullStateVector = smData -> mAssemblyFullStateVector . mX ; double *
simulationFullStateVector = smData -> mSimulationFullStateVector . mX ; ( *
delegate -> mSetTargets ) ( runtimeDerivedValuesBundle , smData -> mTargets )
; { const double * u = systemInput -> mU . mX ; const double * uDot = u +
smData -> mInputVectorSize ; CTarget * target = smData -> mTargets + smData
-> mNumInternalTargets ; for ( i = 0 ; i < smData ->
mNumInputMotionPrimitives ; ++ i ) { const size_t inputOffset = smData ->
mMotionInputOffsets . mX [ i ] ; ( target ++ ) -> mValue [ 0 ] = u [
inputOffset ] ; ( target ++ ) -> mValue [ 0 ] = uDot [ inputOffset ] ; } } if
( smData -> mAssemblyModeVector . mN > 0 ) { errorId =
Top_Level_Simulation_66cd9431_1_computeAsmModeVector ( systemInput -> mU . mX
, systemInput -> mU . mX + 19 , systemInput -> mV . mX + 19 , smData ->
mAssemblyModeVector . mX , & errorResult , neDiagMgr ) ; if ( errorId != NULL
) return errorId ; } sm_core_computeStateVector ( delegate ,
runtimeDerivedValuesBundle , smData -> mAssemblyModeVector . mX , numTargets
, smData -> mTargets , assemblyFullStateVector ) ; asmStatus =
sm_core_checkAssembly ( delegate , runtimeDerivedValuesBundle ,
assemblyFullStateVector , smData -> mAssemblyModeVector . mX , NULL , NULL ,
NULL ) ; if ( asmStatus != 1 ) { return sm_ssci_recordRunTimeError (
"physmod:sm:ssci:core:dae:dae:assemblyFailure" , asmStatus == 2 ?
 "Model not assembled. The following violation occurred: Position Violation. The failure occurred during the attempt to assemble all joints in the system and satisfy any motion inputs. If an Update Diagram operation completes successfully, the failure is likely caused by motion inputs. Consider adjusting the motion inputs to specify a different starting configuration. Also consider adjusting or adding joint targets to better guide the assembly."
: ( asmStatus == 3 ?
 "Model not assembled. The following violation occurred: Velocity Violation. The failure occurred during the attempt to assemble all joints in the system and satisfy any motion inputs. If an Update Diagram operation completes successfully, the failure is likely caused by motion inputs. Consider adjusting the motion inputs to specify a different starting configuration. Also consider adjusting or adding joint targets to better guide the assembly."
:
 "Model not assembled. The following violation occurred: Singularity Violation. The failure occurred during the attempt to assemble all joints in the system and satisfy any motion inputs. If an Update Diagram operation completes successfully, the failure is likely caused by motion inputs. Consider adjusting the motion inputs to specify a different starting configuration. Also consider adjusting or adding joint targets to better guide the assembly."
) , neDiagMgr ) ; }
#if 0
Top_Level_Simulation_66cd9431_1_checkTargets ( & smData ->
mSimRuntimeDerivedValuesBundle , assemblyFullStateVector ) ;
#endif
if ( smData -> mModeVectorSize > 0 ) { errorId =
Top_Level_Simulation_66cd9431_1_computeSimModeVector ( systemInput -> mU . mX
, systemInput -> mU . mX + 19 , systemInput -> mV . mX + 19 , systemInput ->
mM . mX , & errorResult , neDiagMgr ) ; if ( errorId != NULL ) return errorId
; memcpy ( smData -> mCachedModeVector . mX , systemInput -> mM . mX , 0 *
sizeof ( int32_T ) ) ; } ( * delegate -> mConvertStateVector ) ( NULL ,
runtimeDerivedValuesBundle , NULL , assemblyFullStateVector , smData ->
mAssemblyModeVector . mX , systemInput -> mM . mX , simulationFullStateVector
) ; for ( i = 0 ; i < smData -> mStateVectorSize ; ++ i ) systemInput -> mX .
mX [ i ] = simulationFullStateVector [ smData -> mStateVectorMap . mX [ i ] ]
; memcpy ( systemInput -> mD . mX , simulationFullStateVector + smData ->
mFullStateVectorSize - smData -> mDiscreteStateSize , smData ->
mDiscreteStateSize * sizeof ( double ) ) ; return errorId ; } typedef struct
{ size_t first ; size_t second ; } SizePair ; static void checkMemAllocStatus
( int_T status ) { ( void ) status ; } static PmCharVector
cStringToCharVector ( const char * src ) { const size_t n = strlen ( src ) ;
PmCharVector charVect ; const int_T status = pm_create_char_vector_fields ( &
charVect , n + 1 , pm_default_allocator ( ) ) ; checkMemAllocStatus ( status
) ; strcpy ( charVect . mX , src ) ; return charVect ; } static void
initBasicAttributes ( NeDaePrivateData * smData ) { size_t i ; smData ->
mStateVectorSize = 26 ; smData -> mFullStateVectorSize = 56 ; smData ->
mDiscreteStateSize = 0 ; smData -> mModeVectorSize = 0 ; smData ->
mNumZeroCrossings = 0 ; smData -> mInputVectorSize = 19 ; smData ->
mOutputVectorSize = 18 ; smData -> mNumConstraintEqns = 0 ; for ( i = 0 ; i <
4 ; ++ i ) smData -> mChecksum [ i ] = 0 ; } static void initStateVector (
NeDaePrivateData * smData ) { PmAllocator * alloc = pm_default_allocator ( )
; const int32_T stateVectorMap [ 26 ] = { 30 , 31 , 32 , 33 , 34 , 35 , 36 ,
37 , 38 , 39 , 40 , 41 , 42 , 43 , 44 , 45 , 46 , 47 , 48 , 49 , 50 , 51 , 52
, 53 , 54 , 55 } ; const CTarget targets [ 76 ] = { { 0 , 68 , 0 , false , 0
, 0 , "1" , false , false , + 1.000000000000000000e+00 , false , 1 , { +
0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 68 , 0 , false , 0 , 0 , "1" , true ,
false , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 68 , 1
, false , 0 , 0 , "1" , false , false , + 1.000000000000000000e+00 , false ,
1 , { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 68 , 1 , false , 0 , 0 , "1" , true ,
false , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 68 , 2
, false , 0 , 0 , "1" , false , false , + 1.000000000000000000e+00 , false ,
1 , { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 68 , 2 , false , 0 , 0 , "1" , true ,
false , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 1 , 68 , 3
, false , 0 , 0 , "1" , false , false , + 1.000000000000000000e+00 , false ,
4 , { + 1.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 2 , 68 , 3 , false , 0 , 0 , "1" , true ,
false , + 1.000000000000000000e+00 , false , 3 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 69 , 0
, false , 0 , 0 , "1" , false , false , + 1.000000000000000000e+00 , false ,
1 , { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 69 , 0 , false , 0 , 0 , "1" , true ,
false , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 69 , 1
, false , 0 , 0 , "1" , false , false , + 1.000000000000000000e+00 , false ,
1 , { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 69 , 1 , false , 0 , 0 , "1" , true ,
false , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 69 , 2
, false , 0 , 0 , "1" , false , false , + 1.000000000000000000e+00 , false ,
1 , { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 69 , 2 , false , 0 , 0 , "1" , true ,
false , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 1 , 69 , 3
, false , 0 , 0 , "1" , false , false , + 1.000000000000000000e+00 , false ,
4 , { + 1.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 2 , 69 , 3 , false , 0 , 0 , "1" , true ,
false , + 1.000000000000000000e+00 , false , 3 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 119 , 0
, false , 0 , 0 , "1" , false , true , + 1.000000000000000000e+00 , false , 1
, { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 119 , 0 , false , 0 , 0 , "1" , true ,
true , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 120 , 0
, false , 0 , 0 , "1" , false , true , + 1.000000000000000000e+00 , false , 1
, { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 120 , 0 , false , 0 , 0 , "1" , true ,
true , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 121 , 0
, false , 0 , 0 , "1" , false , false , + 1.000000000000000000e+00 , false ,
1 , { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 121 , 0 , false , 0 , 0 , "1" , true ,
false , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 121 , 1
, false , 0 , 0 , "1" , false , false , + 1.000000000000000000e+00 , false ,
1 , { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 121 , 1 , false , 0 , 0 , "1" , true ,
false , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 121 , 2
, false , 0 , 0 , "1" , false , true , + 1.000000000000000000e+00 , false , 1
, { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 121 , 2 , false , 0 , 0 , "1" , true ,
true , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 159 , 0
, false , 0 , 0 , "1" , false , true , + 1.000000000000000000e+00 , false , 1
, { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 159 , 0 , false , 0 , 0 , "1" , true ,
true , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 160 , 0
, false , 0 , 0 , "1" , false , true , + 1.000000000000000000e+00 , false , 1
, { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 160 , 0 , false , 0 , 0 , "1" , true ,
true , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 295 , 0
, false , 0 , 0 , "1" , false , true , + 1.000000000000000000e+00 , false , 1
, { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 295 , 0 , false , 0 , 0 , "1" , true ,
true , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 296 , 0
, false , 0 , 0 , "1" , false , true , + 1.000000000000000000e+00 , false , 1
, { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 296 , 0 , false , 0 , 0 , "1" , true ,
true , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 297 , 0
, false , 0 , 0 , "1" , false , true , + 1.000000000000000000e+00 , false , 1
, { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 297 , 0 , false , 0 , 0 , "1" , true ,
true , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 298 , 0
, false , 0 , 0 , "1" , false , true , + 1.000000000000000000e+00 , false , 1
, { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 298 , 0 , false , 0 , 0 , "1" , true ,
true , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 299 , 0
, false , 0 , 0 , "1" , false , true , + 1.000000000000000000e+00 , false , 1
, { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 299 , 0 , false , 0 , 0 , "1" , true ,
true , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 300 , 0
, false , 0 , 0 , "1" , false , true , + 1.000000000000000000e+00 , false , 1
, { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 300 , 0 , false , 0 , 0 , "1" , true ,
true , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 445 , 0
, false , 0 , 0 , "1" , false , false , + 1.000000000000000000e+00 , false ,
1 , { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 445 , 0 , false , 0 , 0 , "1" , true ,
false , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 446 , 0
, false , 0 , 0 , "1" , false , false , + 1.000000000000000000e+00 , false ,
1 , { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 446 , 0 , false , 0 , 0 , "1" , true ,
false , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 121 , 0
, false , 0 , 3 , "" , false , false , + 1.000000000000000000e+00 , false , 1
, { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 121 , 0 , false , 0 , 3 , "" , true ,
false , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 121 , 1
, false , 0 , 3 , "" , false , false , + 1.000000000000000000e+00 , false , 1
, { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 121 , 1 , false , 0 , 3 , "" , true ,
false , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 121 , 2
, false , 0 , 3 , "" , false , false , + 1.000000000000000000e+00 , false , 1
, { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 121 , 2 , false , 0 , 3 , "" , true ,
false , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 119 , 0
, false , 0 , 3 , "" , false , false , + 1.000000000000000000e+00 , false , 1
, { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 119 , 0 , false , 0 , 3 , "" , true ,
false , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 120 , 0
, false , 0 , 3 , "" , false , false , + 1.000000000000000000e+00 , false , 1
, { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 120 , 0 , false , 0 , 3 , "" , true ,
false , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 159 , 0
, false , 0 , 3 , "" , false , false , + 1.000000000000000000e+00 , false , 1
, { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 159 , 0 , false , 0 , 3 , "" , true ,
false , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 160 , 0
, false , 0 , 3 , "" , false , false , + 1.000000000000000000e+00 , false , 1
, { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 160 , 0 , false , 0 , 3 , "" , true ,
false , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 295 , 0
, false , 0 , 3 , "" , false , false , + 1.000000000000000000e+00 , false , 1
, { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 295 , 0 , false , 0 , 3 , "" , true ,
false , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 296 , 0
, false , 0 , 3 , "" , false , false , + 1.000000000000000000e+00 , false , 1
, { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 296 , 0 , false , 0 , 3 , "" , true ,
false , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 297 , 0
, false , 0 , 3 , "" , false , false , + 1.000000000000000000e+00 , false , 1
, { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 297 , 0 , false , 0 , 3 , "" , true ,
false , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 298 , 0
, false , 0 , 3 , "" , false , false , + 1.000000000000000000e+00 , false , 1
, { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 298 , 0 , false , 0 , 3 , "" , true ,
false , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 299 , 0
, false , 0 , 3 , "" , false , false , + 1.000000000000000000e+00 , false , 1
, { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 299 , 0 , false , 0 , 3 , "" , true ,
false , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 300 , 0
, false , 0 , 3 , "" , false , false , + 1.000000000000000000e+00 , false , 1
, { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 300 , 0 , false , 0 , 3 , "" , true ,
false , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 446 , 0
, false , 0 , 3 , "" , false , false , + 1.000000000000000000e+00 , false , 1
, { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 446 , 0 , false , 0 , 3 , "" , true ,
false , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 445 , 0
, false , 0 , 3 , "" , false , false , + 1.000000000000000000e+00 , false , 1
, { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 445 , 0 , false , 0 , 3 , "" , true ,
false , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } } ; const
size_t numTargets = 76 ; int_T status ; size_t i ; status =
pm_create_real_vector_fields ( & smData -> mAssemblyFullStateVector , 56 ,
alloc ) ; checkMemAllocStatus ( status ) ; status =
pm_create_real_vector_fields ( & smData -> mSimulationFullStateVector , 56 ,
alloc ) ; checkMemAllocStatus ( status ) ; status =
pm_create_int_vector_fields ( & smData -> mStateVectorMap , smData ->
mStateVectorSize , alloc ) ; checkMemAllocStatus ( status ) ; memcpy ( smData
-> mStateVectorMap . mX , stateVectorMap , smData -> mStateVectorSize *
sizeof ( int32_T ) ) ; smData -> mNumInternalTargets = 46 ; smData ->
mNumInputMotionPrimitives = 15 ; PM_ALLOCATE_ARRAY ( smData -> mTargets ,
CTarget , numTargets , alloc ) ; for ( i = 0 ; i < numTargets ; ++ i )
sm_compiler_CTarget_copy ( targets + i , smData -> mTargets + i ) ; } static
void initAsserts ( NeDaePrivateData * smData ) { PmAllocator * alloc =
pm_default_allocator ( ) ; int_T status = 0 ; smData -> mNumParamAsserts = 0
; smData -> mParamAssertObjects = NULL ; smData -> mParamAssertPaths = NULL ;
smData -> mParamAssertDescriptors = NULL ; smData -> mParamAssertMessages =
NULL ; smData -> mParamAssertMessageIds = NULL ; status =
pm_create_bool_vector_fields ( & smData -> mParamAssertIsWarnings , smData ->
mNumParamAsserts , alloc ) ; checkMemAllocStatus ( status ) ; if ( smData ->
mNumParamAsserts > 0 ) { const NeAssertData * ad =
Top_Level_Simulation_66cd9431_1_assertData ; size_t i ; PM_ALLOCATE_ARRAY (
smData -> mParamAssertObjects , PmCharVector , 0 , alloc ) ;
PM_ALLOCATE_ARRAY ( smData -> mParamAssertPaths , PmCharVector , 0 , alloc )
; PM_ALLOCATE_ARRAY ( smData -> mParamAssertDescriptors , PmCharVector , 0 ,
alloc ) ; PM_ALLOCATE_ARRAY ( smData -> mParamAssertMessages , PmCharVector ,
0 , alloc ) ; PM_ALLOCATE_ARRAY ( smData -> mParamAssertMessageIds ,
PmCharVector , 0 , alloc ) ; for ( i = 0 ; i < smData -> mNumParamAsserts ;
++ i , ++ ad ) { smData -> mParamAssertObjects [ i ] = cStringToCharVector (
ad -> mObject ) ; smData -> mParamAssertPaths [ i ] = cStringToCharVector (
ad -> mPath ) ; smData -> mParamAssertDescriptors [ i ] = cStringToCharVector
( ad -> mDescriptor ) ; smData -> mParamAssertMessages [ i ] =
cStringToCharVector ( ad -> mMessage ) ; smData -> mParamAssertMessageIds [ i
] = cStringToCharVector ( ad -> mMessageID ) ; smData ->
mParamAssertIsWarnings . mX [ i ] = ad -> mIsWarn ; } } } static void
initModeVector ( NeDaePrivateData * smData ) { { size_t i ; const int_T
status = pm_create_int_vector_fields ( & smData -> mAssemblyModeVector , 0 ,
pm_default_allocator ( ) ) ; checkMemAllocStatus ( status ) ; for ( i = 0 ; i
< smData -> mAssemblyModeVector . mN ; ++ i ) smData -> mAssemblyModeVector .
mX [ i ] = 0 ; } { size_t i ; const int_T status =
pm_create_int_vector_fields ( & smData -> mCachedModeVector , 0 ,
pm_default_allocator ( ) ) ; checkMemAllocStatus ( status ) ; for ( i = 0 ; i
< smData -> mModeVectorSize ; ++ i ) smData -> mCachedModeVector . mX [ i ] =
0 ; } } static void initZeroCrossings ( NeDaePrivateData * smData ) {
PmAllocator * alloc = pm_default_allocator ( ) ; int_T status = 0 ; smData ->
mZeroCrossingObjects = NULL ; smData -> mZeroCrossingPaths = NULL ; smData ->
mZeroCrossingDescriptors = NULL ; status = pm_create_int_vector_fields ( &
smData -> mZeroCrossingTypes , 0 , alloc ) ; checkMemAllocStatus ( status ) ;
if ( smData -> mNumZeroCrossings > 0 ) { const NeZCData * zcd =
Top_Level_Simulation_66cd9431_1_ZCData ; size_t i ; PM_ALLOCATE_ARRAY (
smData -> mZeroCrossingObjects , PmCharVector , 0 , alloc ) ;
PM_ALLOCATE_ARRAY ( smData -> mZeroCrossingPaths , PmCharVector , 0 , alloc )
; PM_ALLOCATE_ARRAY ( smData -> mZeroCrossingDescriptors , PmCharVector , 0 ,
alloc ) ; for ( i = 0 ; i < smData -> mNumZeroCrossings ; ++ i , ++ zcd ) {
smData -> mZeroCrossingObjects [ i ] = cStringToCharVector ( zcd -> mObject )
; smData -> mZeroCrossingPaths [ i ] = cStringToCharVector ( zcd -> mPath ) ;
smData -> mZeroCrossingDescriptors [ i ] = cStringToCharVector ( zcd ->
mDescriptor ) ; smData -> mZeroCrossingTypes . mX [ i ] = zcd -> mType ; } }
} static void initVariables ( NeDaePrivateData * smData ) { const char *
varFullPaths [ 26 ] = {
 "Simulation_Environment.Position_Actuated_Robot_Environment.Environment_With_Physics.x6_DOF_Joint.Px.p"
,
 "Simulation_Environment.Position_Actuated_Robot_Environment.Environment_With_Physics.x6_DOF_Joint.Py.p"
,
 "Simulation_Environment.Position_Actuated_Robot_Environment.Environment_With_Physics.x6_DOF_Joint.Pz.p"
,
 "Simulation_Environment.Position_Actuated_Robot_Environment.Environment_With_Physics.x6_DOF_Joint.S.Q"
,
 "Simulation_Environment.Position_Actuated_Robot_Environment.Environment_With_Physics.x6_DOF_Joint.S.Q"
,
 "Simulation_Environment.Position_Actuated_Robot_Environment.Environment_With_Physics.x6_DOF_Joint.S.Q"
,
 "Simulation_Environment.Position_Actuated_Robot_Environment.Environment_With_Physics.x6_DOF_Joint.S.Q"
,
 "Simulation_Environment.Position_Actuated_Robot_Environment.Environment_With_Physics.x6_DOF_Joint.Px.v"
,
 "Simulation_Environment.Position_Actuated_Robot_Environment.Environment_With_Physics.x6_DOF_Joint.Py.v"
,
 "Simulation_Environment.Position_Actuated_Robot_Environment.Environment_With_Physics.x6_DOF_Joint.Pz.v"
,
 "Simulation_Environment.Position_Actuated_Robot_Environment.Environment_With_Physics.x6_DOF_Joint.S.w"
,
 "Simulation_Environment.Position_Actuated_Robot_Environment.Environment_With_Physics.x6_DOF_Joint.S.w"
,
 "Simulation_Environment.Position_Actuated_Robot_Environment.Environment_With_Physics.x6_DOF_Joint.S.w"
,
 "Simulation_Environment.Position_Actuated_Robot_Environment.Environment_With_Physics.x6_DOF_Joint1.Px.p"
,
 "Simulation_Environment.Position_Actuated_Robot_Environment.Environment_With_Physics.x6_DOF_Joint1.Py.p"
,
 "Simulation_Environment.Position_Actuated_Robot_Environment.Environment_With_Physics.x6_DOF_Joint1.Pz.p"
,
 "Simulation_Environment.Position_Actuated_Robot_Environment.Environment_With_Physics.x6_DOF_Joint1.S.Q"
,
 "Simulation_Environment.Position_Actuated_Robot_Environment.Environment_With_Physics.x6_DOF_Joint1.S.Q"
,
 "Simulation_Environment.Position_Actuated_Robot_Environment.Environment_With_Physics.x6_DOF_Joint1.S.Q"
,
 "Simulation_Environment.Position_Actuated_Robot_Environment.Environment_With_Physics.x6_DOF_Joint1.S.Q"
,
 "Simulation_Environment.Position_Actuated_Robot_Environment.Environment_With_Physics.x6_DOF_Joint1.Px.v"
,
 "Simulation_Environment.Position_Actuated_Robot_Environment.Environment_With_Physics.x6_DOF_Joint1.Py.v"
,
 "Simulation_Environment.Position_Actuated_Robot_Environment.Environment_With_Physics.x6_DOF_Joint1.Pz.v"
,
 "Simulation_Environment.Position_Actuated_Robot_Environment.Environment_With_Physics.x6_DOF_Joint1.S.w"
,
 "Simulation_Environment.Position_Actuated_Robot_Environment.Environment_With_Physics.x6_DOF_Joint1.S.w"
,
 "Simulation_Environment.Position_Actuated_Robot_Environment.Environment_With_Physics.x6_DOF_Joint1.S.w"
} ; const char * varObjects [ 26 ] = {
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
 "Top_Level_Simulation/Simulation Environment/Position Actuated Robot Environment/Environment_With_Physics/6-DOF Joint1"
,
 "Top_Level_Simulation/Simulation Environment/Position Actuated Robot Environment/Environment_With_Physics/6-DOF Joint1"
,
 "Top_Level_Simulation/Simulation Environment/Position Actuated Robot Environment/Environment_With_Physics/6-DOF Joint1"
,
 "Top_Level_Simulation/Simulation Environment/Position Actuated Robot Environment/Environment_With_Physics/6-DOF Joint1"
,
 "Top_Level_Simulation/Simulation Environment/Position Actuated Robot Environment/Environment_With_Physics/6-DOF Joint1"
} ; smData -> mNumVarScalars = 26 ; smData -> mVarFullPaths = NULL ; smData
-> mVarObjects = NULL ; if ( smData -> mNumVarScalars > 0 ) { size_t s ;
PmAllocator * alloc = pm_default_allocator ( ) ; PM_ALLOCATE_ARRAY ( smData
-> mVarFullPaths , PmCharVector , 26 , alloc ) ; PM_ALLOCATE_ARRAY ( smData
-> mVarObjects , PmCharVector , 26 , alloc ) ; for ( s = 0 ; s < smData ->
mNumVarScalars ; ++ s ) { smData -> mVarFullPaths [ s ] = cStringToCharVector
( varFullPaths [ s ] ) ; smData -> mVarObjects [ s ] = cStringToCharVector (
varObjects [ s ] ) ; } } } static void initRuntimeParameters (
NeDaePrivateData * smData ) { PmAllocator * alloc = pm_default_allocator ( )
; int_T status = 0 ; size_t i = 0 ; const int32_T * rtpRootVarRows = NULL ;
const int32_T * rtpRootVarCols = NULL ; const char * * rtpFullPaths = NULL ;
smData -> mNumRtpRootVars = 0 ; status = pm_create_int_vector_fields ( &
smData -> mRtpRootVarRows , smData -> mNumRtpRootVars , alloc ) ;
checkMemAllocStatus ( status ) ; memcpy ( smData -> mRtpRootVarRows . mX ,
rtpRootVarRows , smData -> mNumRtpRootVars * sizeof ( int32_T ) ) ; status =
pm_create_int_vector_fields ( & smData -> mRtpRootVarCols , smData ->
mNumRtpRootVars , alloc ) ; checkMemAllocStatus ( status ) ; memcpy ( smData
-> mRtpRootVarCols . mX , rtpRootVarCols , smData -> mNumRtpRootVars * sizeof
( int32_T ) ) ; smData -> mRtpFullPaths = NULL ; if ( smData ->
mNumRtpRootVars > 0 ) { size_t v ; PM_ALLOCATE_ARRAY ( smData ->
mRtpFullPaths , PmCharVector , 0 , alloc ) ; for ( v = 0 ; v < smData ->
mNumRtpRootVars ; ++ v ) { smData -> mRtpFullPaths [ v ] =
cStringToCharVector ( rtpFullPaths [ v ] ) ; } } smData ->
mNumRuntimeRootVarScalars = 0 ; status = pm_create_real_vector_fields ( &
smData -> mRuntimeParameterScalars , 0 , alloc ) ; checkMemAllocStatus (
status ) ; for ( i = 0 ; i < smData -> mRuntimeParameterScalars . mN ; ++ i )
smData -> mRuntimeParameterScalars . mX [ i ] = 0.0 ;
sm_core_RuntimeDerivedValuesBundle_create ( & smData ->
mAsmRuntimeDerivedValuesBundle , 0 , 0 ) ;
sm_core_RuntimeDerivedValuesBundle_create ( & smData ->
mSimRuntimeDerivedValuesBundle , 0 , 0 ) ; } static void initIoInfoHelper (
size_t n , const char * portPathsSource [ ] , const char * unitsSource [ ] ,
const SizePair dimensions [ ] , boolean_T doInputs , NeDaePrivateData *
smData ) { PmCharVector * portPaths = NULL ; PmCharVector * units = NULL ;
SscIoInfo * infos = NULL ; if ( n > 0 ) { size_t s ; PmAllocator * alloc =
pm_default_allocator ( ) ; PM_ALLOCATE_ARRAY ( portPaths , PmCharVector , n ,
alloc ) ; PM_ALLOCATE_ARRAY ( units , PmCharVector , n , alloc ) ;
PM_ALLOCATE_ARRAY ( infos , SscIoInfo , n , alloc ) ; for ( s = 0 ; s < n ;
++ s ) { portPaths [ s ] = cStringToCharVector ( portPathsSource [ s ] ) ;
units [ s ] = cStringToCharVector ( unitsSource [ s ] ) ; { SscIoInfo * info
= infos + s ; info -> mName = info -> mIdentifier = portPaths [ s ] . mX ;
ssc_array_size_set_scalar ( & info -> mSize ) ; ssc_array_size_set_dim ( &
info -> mSize , 0 , dimensions [ s ] . first ) ; ssc_array_size_set_dim ( &
info -> mSize , 1 , dimensions [ s ] . second ) ; info -> mUnit = units [ s ]
. mX ; } } } if ( doInputs ) { smData -> mNumInputs = n ; smData ->
mInputPortPaths = portPaths ; smData -> mInputUnits = units ; smData ->
mInputInfos = infos ; } else { smData -> mNumOutputs = n ; smData ->
mOutputPortPaths = portPaths ; smData -> mOutputUnits = units ; smData ->
mOutputInfos = infos ; } } static void initIoInfo ( NeDaePrivateData * smData
) { const char * inputPortPaths [ 19 ] = {
 "Simulation_Environment.Position_Actuated_Robot_Environment.Mobile_Robot.Left_Wheel.x3.qi"
,
 "Simulation_Environment.Position_Actuated_Robot_Environment.Mobile_Robot.Left_Wheel.x4.qi"
,
 "Simulation_Environment.Position_Actuated_Robot_Environment.Mobile_Robot.Planar_Joint.pxi"
,
 "Simulation_Environment.Position_Actuated_Robot_Environment.Mobile_Robot.Planar_Joint.pyi"
,
 "Simulation_Environment.Position_Actuated_Robot_Environment.Mobile_Robot.Planar_Joint.qzi"
,
 "Simulation_Environment.Position_Actuated_Robot_Environment.Mobile_Robot.Right_Wheel.x3.qi"
,
 "Simulation_Environment.Position_Actuated_Robot_Environment.Mobile_Robot.Right_Wheel.x4.qi"
,
 "Simulation_Environment.Position_Actuated_Robot_Environment.Position_Actuated_Manipulator.Joint_1.qi"
,
 "Simulation_Environment.Position_Actuated_Robot_Environment.Position_Actuated_Manipulator.Joint_2.qi"
,
 "Simulation_Environment.Position_Actuated_Robot_Environment.Position_Actuated_Manipulator.Joint_3.qi"
,
 "Simulation_Environment.Position_Actuated_Robot_Environment.Position_Actuated_Manipulator.Joint_4.qi"
,
 "Simulation_Environment.Position_Actuated_Robot_Environment.Position_Actuated_Manipulator.Joint_5.qi"
,
 "Simulation_Environment.Position_Actuated_Robot_Environment.Position_Actuated_Manipulator.Joint_6.qi"
,
 "Simulation_Environment.Position_Actuated_Robot_Environment.Position_Actuated_Manipulator.Prismatic_Joint.pi"
,
 "Simulation_Environment.Position_Actuated_Robot_Environment.Position_Actuated_Manipulator.Prismatic_Joint1.pi"
,
 "Simulation_Environment.Position_Actuated_Robot_Environment.Position_Actuated_Manipulator.Translational_Simscape_Multibody1.External_Force_and_Torque_B.fz"
,
 "Simulation_Environment.Position_Actuated_Robot_Environment.Position_Actuated_Manipulator.Translational_Simscape_Multibody1.External_Force_and_Torque_F.fz"
,
 "Simulation_Environment.Position_Actuated_Robot_Environment.Position_Actuated_Manipulator.Translational_Simscape_Multibody2.External_Force_and_Torque_B.fz"
,
 "Simulation_Environment.Position_Actuated_Robot_Environment.Position_Actuated_Manipulator.Translational_Simscape_Multibody2.External_Force_and_Torque_F.fz"
} ; const char * inputUnits [ 19 ] = { "rad" , "rad" , "m" , "m" , "rad" ,
"rad" , "rad" , "rad" , "rad" , "rad" , "rad" , "rad" , "rad" , "m" , "m" ,
"kg*m/s^2" , "kg*m/s^2" , "kg*m/s^2" , "kg*m/s^2" } ; const SizePair
inputDimensions [ 19 ] = { { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , {
1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1
} , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , {
1 , 1 } , { 1 , 1 } } ; const char * outputPortPaths [ 18 ] = {
 "Simulation_Environment.Position_Actuated_Robot_Environment.Mobile_Robot.Left_Wheel.x3.w"
,
 "Simulation_Environment.Position_Actuated_Robot_Environment.Mobile_Robot.Left_Wheel.x4.w"
,
 "Simulation_Environment.Position_Actuated_Robot_Environment.Mobile_Robot.Right_Wheel.x3.w"
,
 "Simulation_Environment.Position_Actuated_Robot_Environment.Mobile_Robot.Right_Wheel.x4.w"
,
 "Simulation_Environment.Position_Actuated_Robot_Environment.Position_Actuated_Manipulator.Joint_1.q"
,
 "Simulation_Environment.Position_Actuated_Robot_Environment.Position_Actuated_Manipulator.Joint_2.q"
,
 "Simulation_Environment.Position_Actuated_Robot_Environment.Position_Actuated_Manipulator.Joint_3.q"
,
 "Simulation_Environment.Position_Actuated_Robot_Environment.Position_Actuated_Manipulator.Joint_4.q"
,
 "Simulation_Environment.Position_Actuated_Robot_Environment.Position_Actuated_Manipulator.Joint_5.q"
,
 "Simulation_Environment.Position_Actuated_Robot_Environment.Position_Actuated_Manipulator.Joint_6.q"
,
 "Simulation_Environment.Position_Actuated_Robot_Environment.Position_Actuated_Manipulator.Prismatic_Joint.p"
,
 "Simulation_Environment.Position_Actuated_Robot_Environment.Position_Actuated_Manipulator.Prismatic_Joint1.p"
,
 "Simulation_Environment.Position_Actuated_Robot_Environment.Environment_With_Physics.Spatial_Contact_Force1.fn"
,
 "Simulation_Environment.Position_Actuated_Robot_Environment.Environment_With_Physics.Spatial_Contact_Force2.fn"
,
 "Simulation_Environment.Position_Actuated_Robot_Environment.Environment_With_Physics.Spatial_Contact_Force3.fn"
,
 "Simulation_Environment.Position_Actuated_Robot_Environment.Environment_With_Physics.Spatial_Contact_Force4.fn"
,
 "Simulation_Environment.Position_Actuated_Robot_Environment.Position_Actuated_Manipulator.Translational_Simscape_Multibody1.Transform_Sensor.vz"
,
 "Simulation_Environment.Position_Actuated_Robot_Environment.Position_Actuated_Manipulator.Translational_Simscape_Multibody2.Transform_Sensor.vz"
} ; const char * outputUnits [ 18 ] = { "rad/s" , "rad/s" , "rad/s" , "rad/s"
, "rad" , "rad" , "rad" , "rad" , "rad" , "rad" , "m" , "m" , "kg*m/s^2" ,
"kg*m/s^2" , "kg*m/s^2" , "kg*m/s^2" , "m/s" , "m/s" } ; const SizePair
outputDimensions [ 18 ] = { { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , {
1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1
} , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , {
1 , 1 } } ; initIoInfoHelper ( 19 , inputPortPaths , inputUnits ,
inputDimensions , true , smData ) ; initIoInfoHelper ( 18 , outputPortPaths ,
outputUnits , outputDimensions , false , smData ) ; } static void
initInputDerivs ( NeDaePrivateData * smData ) { const int32_T numInputDerivs
[ 19 ] = { 2 , 2 , 2 , 2 , 2 , 2 , 2 , 2 , 2 , 2 , 2 , 2 , 2 , 2 , 2 , 0 , 0
, 0 , 0 } ; PmAllocator * alloc = pm_default_allocator ( ) ; const int_T
status = pm_create_int_vector_fields ( & smData -> mNumInputDerivs , smData
-> mInputVectorSize , alloc ) ; checkMemAllocStatus ( status ) ; memcpy (
smData -> mNumInputDerivs . mX , numInputDerivs , 19 * sizeof ( int32_T ) ) ;
smData -> mInputOrder = 2 ; } static void initDirectFeedthrough (
NeDaePrivateData * smData ) { const boolean_T directFeedthroughVector [ 19 ]
= { true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , false , false , false , false } ; const
boolean_T directFeedthroughMatrix [ 684 ] = { true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false } ; PmAllocator
* alloc = pm_default_allocator ( ) ; { const int_T status =
pm_create_bool_vector_fields ( & smData -> mDirectFeedthroughVector , 19 ,
alloc ) ; checkMemAllocStatus ( status ) ; memcpy ( smData ->
mDirectFeedthroughVector . mX , directFeedthroughVector , 19 * sizeof (
boolean_T ) ) ; } { const int_T status = pm_create_bool_vector_fields ( &
smData -> mDirectFeedthroughMatrix , 684 , alloc ) ; checkMemAllocStatus (
status ) ; memcpy ( smData -> mDirectFeedthroughMatrix . mX ,
directFeedthroughMatrix , 684 * sizeof ( boolean_T ) ) ; } } static void
initOutputDerivProc ( NeDaePrivateData * smData ) { PmAllocator * alloc =
pm_default_allocator ( ) ; const int32_T outputFunctionMap [ 18 ] = { 0 , 0 ,
0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 } ; smData ->
mOutputFunctionMap = pm_create_int_vector ( 18 , alloc ) ; memcpy ( smData ->
mOutputFunctionMap -> mX , outputFunctionMap , 18 * sizeof ( int32_T ) ) ;
smData -> mNumOutputClasses = 1 ; smData -> mHasKinematicOutputs = true ;
smData -> mHasDynamicOutputs = false ; smData -> mIsOutputClass0Dynamic =
false ; smData -> mDoComputeDynamicOutputs = false ; smData ->
mCachedDerivativesAvailable = false ; { size_t i = 0 ; const int_T status =
pm_create_real_vector_fields ( & smData -> mCachedDerivatives , 0 ,
pm_default_allocator ( ) ) ; checkMemAllocStatus ( status ) ; for ( i = 0 ; i
< smData -> mCachedDerivatives . mN ; ++ i ) smData -> mCachedDerivatives .
mX [ i ] = 0.0 ; } }
#if 0
static void initializeSizePairVector ( const SmSizePair * data ,
SmSizePairVector * vector ) { const size_t n = sm_core_SmSizePairVector_size
( vector ) ; size_t i ; for ( i = 0 ; i < n ; ++ i , ++ data )
sm_core_SmSizePairVector_setValue ( vector , i , data ++ ) ; }
#endif
static void initAssemblyDelegate ( SmMechanismDelegate * delegate ) {
SmMechanismDelegateScratchpad * scratchpad = NULL ; const SmSizePair
jointToStageIdx [ 16 ] = { { 68 , 14 } , { 69 , 15 } , { 119 , 1 } , { 120 ,
2 } , { 121 , 0 } , { 159 , 3 } , { 160 , 4 } , { 295 , 5 } , { 296 , 6 } , {
297 , 7 } , { 298 , 8 } , { 299 , 9 } , { 300 , 10 } , { 445 , 12 } , { 446 ,
11 } , { 486 , 13 } } ; const size_t primitiveIndices [ 16 + 1 ] = { 0 , 3 ,
4 , 5 , 6 , 7 , 8 , 9 , 10 , 11 , 12 , 13 , 14 , 15 , 15 , 19 , 23 } ; const
SmSizePair stateOffsets [ 23 ] = { { 0 , 3 } , { 1 , 4 } , { 2 , 5 } , { 6 ,
7 } , { 8 , 9 } , { 10 , 11 } , { 12 , 13 } , { 14 , 15 } , { 16 , 17 } , {
18 , 19 } , { 20 , 21 } , { 22 , 23 } , { 24 , 25 } , { 26 , 27 } , { 28 , 29
} , { 30 , 37 } , { 31 , 38 } , { 32 , 39 } , { 33 , 40 } , { 43 , 50 } , {
44 , 51 } , { 45 , 52 } , { 46 , 53 } } ; const SmSizePair dofOffsets [ 23 ]
= { { 0 , 1 } , { 1 , 2 } , { 2 , 3 } , { 3 , 4 } , { 4 , 5 } , { 5 , 6 } , {
6 , 7 } , { 7 , 8 } , { 8 , 9 } , { 9 , 10 } , { 10 , 11 } , { 11 , 12 } , {
12 , 13 } , { 13 , 14 } , { 14 , 15 } , { 15 , 16 } , { 16 , 17 } , { 17 , 18
} , { 18 , 21 } , { 21 , 22 } , { 22 , 23 } , { 23 , 24 } , { 24 , 27 } } ;
const size_t * flexibleStages = NULL ; const size_t remodIndices [ 11 ] = { 2
, 6 , 8 , 10 , 12 , 14 , 16 , 18 , 20 , 22 , 24 } ; const size_t *
equationsPerConstraint = NULL ; const int32_T *
hasAllVelocityDisabledEquations = NULL ; const int32_T *
runtimeEnabledEquations = NULL ; const size_t dofToVelSlot [ 27 ] = { 3 , 4 ,
5 , 7 , 9 , 11 , 13 , 15 , 17 , 19 , 21 , 23 , 25 , 27 , 29 , 37 , 38 , 39 ,
40 , 41 , 42 , 50 , 51 , 52 , 53 , 54 , 55 } ; const size_t * constraintDofs
= NULL ; const size_t constraintDofOffsets [ 0 + 1 ] = { 0 } ; const size_t
Jm = 0 ; const size_t Jn = 27 ; SmSizePair zeroSizePair ; zeroSizePair .
mFirst = zeroSizePair . mSecond = 0 ;
sm_core_MechanismDelegate_allocScratchpad ( delegate ) ; scratchpad =
delegate -> mScratchpad ; delegate -> mTargetStrengthFree = 0 ; delegate ->
mTargetStrengthSuggested = 1 ; delegate -> mTargetStrengthDesired = 2 ;
delegate -> mTargetStrengthRequired = 3 ; delegate -> mConsistencyTol = +
1.000000000000000062e-09 ; delegate -> mTreeJointDof = 27 ; delegate -> mDof
= 27 ; delegate -> mStateSize = 56 ; delegate -> mContinuousStateSize = 56 ;
delegate -> mModeVectorSize = 0 ; delegate -> mNumStages = 16 ; delegate ->
mNumConstraints = 0 ; delegate -> mNumAllConstraintEquations = 0 ;
sm_core_SmSizePairVector_create ( & delegate -> mJointToStageIdx , 16 , &
zeroSizePair ) ; memcpy ( sm_core_SmSizePairVector_nonConstValues ( &
delegate -> mJointToStageIdx ) , jointToStageIdx , 16 * sizeof ( SmSizePair )
) ; sm_core_SmSizeTVector_create ( & delegate -> mPrimitiveIndices , delegate
-> mNumStages + 1 , 0 ) ; memcpy ( sm_core_SmSizeTVector_nonConstValues ( &
delegate -> mPrimitiveIndices ) , primitiveIndices , ( delegate -> mNumStages
+ 1 ) * sizeof ( size_t ) ) ; sm_core_SmSizePairVector_create ( & delegate ->
mStateOffsets , 23 , & zeroSizePair ) ; memcpy (
sm_core_SmSizePairVector_nonConstValues ( & delegate -> mStateOffsets ) ,
stateOffsets , 23 * sizeof ( SmSizePair ) ) ; sm_core_SmSizePairVector_create
( & delegate -> mDofOffsets , 23 , & zeroSizePair ) ; memcpy (
sm_core_SmSizePairVector_nonConstValues ( & delegate -> mDofOffsets ) ,
dofOffsets , 23 * sizeof ( SmSizePair ) ) ; sm_core_SmSizeTVector_create ( &
delegate -> mFlexibleStages , 0 , 0 ) ; memcpy (
sm_core_SmSizeTVector_nonConstValues ( & delegate -> mFlexibleStages ) ,
flexibleStages , 0 * sizeof ( size_t ) ) ; sm_core_SmSizeTVector_create ( &
delegate -> mRemodIndices , 11 , 0 ) ; memcpy (
sm_core_SmSizeTVector_nonConstValues ( & delegate -> mRemodIndices ) ,
remodIndices , 11 * sizeof ( size_t ) ) ; sm_core_SmSizeTVector_create ( &
delegate -> mEquationsPerConstraint , delegate -> mNumConstraints , 0 ) ;
memcpy ( sm_core_SmSizeTVector_nonConstValues ( & delegate ->
mEquationsPerConstraint ) , equationsPerConstraint , delegate ->
mNumConstraints * sizeof ( size_t ) ) ; sm_core_SmIntVector_create ( &
delegate -> mHasAllVelocityDisabledEquations , delegate -> mNumConstraints ,
0 ) ; memcpy ( sm_core_SmIntVector_nonConstValues ( & delegate ->
mHasAllVelocityDisabledEquations ) , hasAllVelocityDisabledEquations ,
delegate -> mNumConstraints * sizeof ( int32_T ) ) ;
sm_core_SmIntVector_create ( & delegate -> mRunTimeEnabledEquations ,
delegate -> mNumAllConstraintEquations , 0 ) ; memcpy (
sm_core_SmIntVector_nonConstValues ( & delegate -> mRunTimeEnabledEquations )
, runtimeEnabledEquations , delegate -> mNumAllConstraintEquations * sizeof (
int32_T ) ) ; sm_core_SmSizeTVector_create ( & delegate -> mDofToVelSlot ,
delegate -> mDof , 0 ) ; memcpy ( sm_core_SmSizeTVector_nonConstValues ( &
delegate -> mDofToVelSlot ) , dofToVelSlot , delegate -> mDof * sizeof (
size_t ) ) ; sm_core_SmSizeTVector_create ( & delegate -> mConstraintDofs , 0
, 0 ) ; memcpy ( sm_core_SmSizeTVector_nonConstValues ( & delegate ->
mConstraintDofs ) , constraintDofs , 0 * sizeof ( size_t ) ) ;
sm_core_SmSizeTVector_create ( & delegate -> mConstraintDofOffsets , delegate
-> mNumConstraints + 1 , 0 ) ; memcpy ( sm_core_SmSizeTVector_nonConstValues
( & delegate -> mConstraintDofOffsets ) , constraintDofOffsets , ( delegate
-> mNumConstraints + 1 ) * sizeof ( size_t ) ) ; sm_core_SmBoundedSet_create
( & scratchpad -> mPosRequired , 27 ) ; sm_core_SmBoundedSet_create ( &
scratchpad -> mPosDesired , 27 ) ; sm_core_SmBoundedSet_create ( & scratchpad
-> mPosSuggested , 27 ) ; sm_core_SmBoundedSet_create ( & scratchpad ->
mPosFree , 27 ) ; sm_core_SmBoundedSet_create ( & scratchpad ->
mPosNonRequired , 27 ) ; sm_core_SmBoundedSet_create ( & scratchpad ->
mPosSuggAndFree , 27 ) ; sm_core_SmBoundedSet_create ( & scratchpad ->
mVelRequired , 27 ) ; sm_core_SmBoundedSet_create ( & scratchpad ->
mVelDesired , 27 ) ; sm_core_SmBoundedSet_create ( & scratchpad ->
mVelSuggested , 27 ) ; sm_core_SmBoundedSet_create ( & scratchpad -> mVelFree
, 27 ) ; sm_core_SmBoundedSet_create ( & scratchpad -> mVelNonRequired , 27 )
; sm_core_SmBoundedSet_create ( & scratchpad -> mVelSuggAndFree , 27 ) ;
sm_core_SmBoundedSet_create ( & scratchpad -> mConstraintFilter , 0 ) ;
sm_core_SmBoundedSet_create ( & scratchpad -> mActiveConstraints , 0 ) ;
sm_core_SmBoundedSet_create ( & scratchpad -> mActiveDofs , 27 ) ;
sm_core_SmBoundedSet_create ( & scratchpad -> mActiveDofs0 , 27 ) ;
sm_core_SmBoundedSet_create ( & scratchpad -> mNewConstraints , 0 ) ;
sm_core_SmBoundedSet_create ( & scratchpad -> mNewDofs , 27 ) ;
sm_core_SmBoundedSet_create ( & scratchpad -> mUnsatisfiedConstraints , 0 ) ;
sm_core_SmSizeTVector_create ( & scratchpad -> mActiveConstraintsVect , 0 , 0
) ; sm_core_SmSizeTVector_create ( & scratchpad -> mActiveDofsVect , 27 , 0 )
; sm_core_SmSizeTVector_create ( & scratchpad -> mFullDofToActiveDof , 27 , 0
) ; sm_core_SmSizePairVector_create ( & scratchpad ->
mPartiallyPosTargetedPrims , 23 , & zeroSizePair ) ;
sm_core_SmSizePairVector_create ( & scratchpad -> mPartiallyVelTargetedPrims
, 23 , & zeroSizePair ) ; sm_core_SmSizeTVector_create ( & scratchpad ->
mPosPartialTypes , 23 , 0 ) ; sm_core_SmSizeTVector_create ( & scratchpad ->
mVelPartialTypes , 23 , 0 ) ; sm_core_SmSizeTVector_create ( & scratchpad ->
mPartiallyActivePrims , 23 , 0 ) ; sm_core_SmSizePairVector_create ( &
scratchpad -> mBaseFrameVelOffsets , 2 , & zeroSizePair ) ;
sm_core_SmSizePairVector_create ( & scratchpad -> mCvQuaternionVelOffsets , 0
, & zeroSizePair ) ; sm_core_SmRealVector_create ( & scratchpad ->
mCvQuaternionAzimuthValues , 0 , 0.0 ) ; sm_core_SmRealVector_create ( &
scratchpad -> mInitialState , 56 , 0.0 ) ; sm_core_SmRealVector_create ( &
scratchpad -> mStartState , 56 , 0.0 ) ; sm_core_SmRealVector_create ( &
scratchpad -> mTestState , 56 , 0.0 ) ; sm_core_SmRealVector_create ( &
scratchpad -> mFullStateVector , 56 , 0.0 ) ; sm_core_SmIntVector_create ( &
scratchpad -> mModeVector , 0 , 0 ) ; sm_core_SmRealVector_create ( &
scratchpad -> mJacobianRowMaj , Jm * Jn , 0.0 ) ; sm_core_SmRealVector_create
( & scratchpad -> mJacobian , Jm * Jn , 0.0 ) ; sm_core_SmRealVector_create (
& scratchpad -> mJacobianPrimSubmatrix , Jm * 6 , 0.0 ) ;
sm_core_SmRealVector_create ( & scratchpad -> mConstraintNonhomoTerms , Jm ,
0.0 ) ; sm_core_SmRealVector_create ( & scratchpad -> mConstraintError , Jm ,
0.0 ) ; sm_core_SmRealVector_create ( & scratchpad -> mBestConstraintError ,
Jm , 0.0 ) ; sm_core_SmRealVector_create ( & scratchpad -> mDeltas , Jn * (
Jm <= Jn ? Jm : Jn ) , 0.0 ) ; sm_core_SmRealVector_create ( & scratchpad ->
mSvdWork , 784 , 0.0 ) ; sm_core_SmRealVector_create ( & scratchpad ->
mLineSearchScaledDeltaVect , 27 , 0.0 ) ; sm_core_SmRealVector_create ( &
scratchpad -> mLineSearchTestStateVect , 56 , 0.0 ) ;
sm_core_SmRealVector_create ( & scratchpad -> mLineSearchErrorVect , Jm , 0.0
) ; sm_core_SmRealVector_create ( & scratchpad -> mActiveDofVelsVect , 27 ,
0.0 ) ; sm_core_SmRealVector_create ( & scratchpad -> mVelSystemRhs , Jm ,
0.0 ) ; sm_core_SmRealVector_create ( & scratchpad -> mMotionData , 264 , 0.0
) ; delegate -> mSetTargets = Top_Level_Simulation_66cd9431_1_setTargets ;
delegate -> mResetStateVector =
Top_Level_Simulation_66cd9431_1_resetAsmStateVector ; delegate ->
mInitializeTrackedAngleState =
Top_Level_Simulation_66cd9431_1_initializeTrackedAngleState ; delegate ->
mComputeDiscreteState = Top_Level_Simulation_66cd9431_1_computeDiscreteState
; delegate -> mAdjustPosition =
Top_Level_Simulation_66cd9431_1_adjustPosition ; delegate ->
mPerturbJointPrimitiveState =
Top_Level_Simulation_66cd9431_1_perturbAsmJointPrimitiveState ; delegate ->
mPerturbFlexibleBodyState = NULL ; delegate -> mComputePosDofBlendMatrix =
Top_Level_Simulation_66cd9431_1_computePosDofBlendMatrix ; delegate ->
mComputeVelDofBlendMatrix =
Top_Level_Simulation_66cd9431_1_computeVelDofBlendMatrix ; delegate ->
mProjectPartiallyTargetedPos =
Top_Level_Simulation_66cd9431_1_projectPartiallyTargetedPos ; delegate ->
mPropagateMotion = Top_Level_Simulation_66cd9431_1_propagateMotion ; delegate
-> mComputeAssemblyError =
Top_Level_Simulation_66cd9431_1_computeAssemblyError ; delegate ->
mComputeAssemblyJacobian =
Top_Level_Simulation_66cd9431_1_computeAssemblyJacobian ; delegate ->
mComputeFullAssemblyJacobian =
Top_Level_Simulation_66cd9431_1_computeFullAssemblyJacobian ; delegate ->
mIsInKinematicSingularity =
Top_Level_Simulation_66cd9431_1_isInKinematicSingularity ; delegate ->
mConvertStateVector = Top_Level_Simulation_66cd9431_1_convertStateVector ;
delegate -> mConstructStateVector = NULL ; delegate ->
mExtractSolverStateVector = NULL ; delegate -> mIsPositionViolation = NULL ;
delegate -> mIsVelocityViolation = NULL ; delegate -> mProjectStateSim = NULL
; delegate -> mComputeConstraintError = NULL ; delegate -> mResetModeVector =
NULL ; delegate -> mHasJointDisToNormModeChange = NULL ; delegate ->
mPerformJointDisToNormModeChange = NULL ; delegate -> mOnModeChangedCutJoints
= NULL ; delegate -> mMech = NULL ; } static void initSimulationDelegate (
SmMechanismDelegate * delegate ) { SmMechanismDelegateScratchpad * scratchpad
= NULL ; const SmSizePair jointToStageIdx [ 16 ] = { { 68 , 14 } , { 69 , 15
} , { 119 , 1 } , { 120 , 2 } , { 121 , 0 } , { 159 , 3 } , { 160 , 4 } , {
295 , 5 } , { 296 , 6 } , { 297 , 7 } , { 298 , 8 } , { 299 , 9 } , { 300 ,
10 } , { 445 , 12 } , { 446 , 11 } , { 486 , 13 } } ; const size_t
primitiveIndices [ 16 + 1 ] = { 0 , 3 , 4 , 5 , 6 , 7 , 8 , 9 , 10 , 11 , 12
, 13 , 14 , 15 , 15 , 19 , 23 } ; const SmSizePair stateOffsets [ 23 ] = { {
0 , 3 } , { 1 , 4 } , { 2 , 5 } , { 6 , 7 } , { 8 , 9 } , { 10 , 11 } , { 12
, 13 } , { 14 , 15 } , { 16 , 17 } , { 18 , 19 } , { 20 , 21 } , { 22 , 23 }
, { 24 , 25 } , { 26 , 27 } , { 28 , 29 } , { 30 , 37 } , { 31 , 38 } , { 32
, 39 } , { 33 , 40 } , { 43 , 50 } , { 44 , 51 } , { 45 , 52 } , { 46 , 53 }
} ; const SmSizePair dofOffsets [ 23 ] = { { 0 , 1 } , { 1 , 2 } , { 2 , 3 }
, { 3 , 4 } , { 4 , 5 } , { 5 , 6 } , { 6 , 7 } , { 7 , 8 } , { 8 , 9 } , { 9
, 10 } , { 10 , 11 } , { 11 , 12 } , { 12 , 13 } , { 13 , 14 } , { 14 , 15 }
, { 15 , 16 } , { 16 , 17 } , { 17 , 18 } , { 18 , 21 } , { 21 , 22 } , { 22
, 23 } , { 23 , 24 } , { 24 , 27 } } ; const size_t * flexibleStages = NULL ;
const size_t remodIndices [ 11 ] = { 2 , 6 , 8 , 10 , 12 , 14 , 16 , 18 , 20
, 22 , 24 } ; const size_t * equationsPerConstraint = NULL ; const int32_T *
hasAllVelocityDisabledEquations = NULL ; const int32_T *
runtimeEnabledEquations = NULL ; const size_t dofToVelSlot [ 27 ] = { 3 , 4 ,
5 , 7 , 9 , 11 , 13 , 15 , 17 , 19 , 21 , 23 , 25 , 27 , 29 , 37 , 38 , 39 ,
40 , 41 , 42 , 50 , 51 , 52 , 53 , 54 , 55 } ; const size_t * constraintDofs
= NULL ; const size_t constraintDofOffsets [ 0 + 1 ] = { 0 } ; const size_t
Jm = 0 ; const size_t Jn = 27 ; SmSizePair zeroSizePair ; zeroSizePair .
mFirst = zeroSizePair . mSecond = 0 ;
sm_core_MechanismDelegate_allocScratchpad ( delegate ) ; scratchpad =
delegate -> mScratchpad ; delegate -> mTargetStrengthFree = 0 ; delegate ->
mTargetStrengthSuggested = 1 ; delegate -> mTargetStrengthDesired = 2 ;
delegate -> mTargetStrengthRequired = 3 ; delegate -> mConsistencyTol = +
1.000000000000000062e-09 ; delegate -> mTreeJointDof = 27 ; delegate -> mDof
= 27 ; delegate -> mStateSize = 56 ; delegate -> mContinuousStateSize = 56 ;
delegate -> mModeVectorSize = 0 ; delegate -> mNumStages = 16 ; delegate ->
mNumConstraints = 0 ; delegate -> mNumAllConstraintEquations = 0 ;
sm_core_SmSizePairVector_create ( & delegate -> mJointToStageIdx , 16 , &
zeroSizePair ) ; memcpy ( sm_core_SmSizePairVector_nonConstValues ( &
delegate -> mJointToStageIdx ) , jointToStageIdx , 16 * sizeof ( SmSizePair )
) ; sm_core_SmSizeTVector_create ( & delegate -> mPrimitiveIndices , delegate
-> mNumStages + 1 , 0 ) ; memcpy ( sm_core_SmSizeTVector_nonConstValues ( &
delegate -> mPrimitiveIndices ) , primitiveIndices , ( delegate -> mNumStages
+ 1 ) * sizeof ( size_t ) ) ; sm_core_SmSizePairVector_create ( & delegate ->
mStateOffsets , 23 , & zeroSizePair ) ; memcpy (
sm_core_SmSizePairVector_nonConstValues ( & delegate -> mStateOffsets ) ,
stateOffsets , 23 * sizeof ( SmSizePair ) ) ; sm_core_SmSizePairVector_create
( & delegate -> mDofOffsets , 23 , & zeroSizePair ) ; memcpy (
sm_core_SmSizePairVector_nonConstValues ( & delegate -> mDofOffsets ) ,
dofOffsets , 23 * sizeof ( SmSizePair ) ) ; sm_core_SmSizeTVector_create ( &
delegate -> mFlexibleStages , 0 , 0 ) ; memcpy (
sm_core_SmSizeTVector_nonConstValues ( & delegate -> mFlexibleStages ) ,
flexibleStages , 0 * sizeof ( size_t ) ) ; sm_core_SmSizeTVector_create ( &
delegate -> mRemodIndices , 11 , 0 ) ; memcpy (
sm_core_SmSizeTVector_nonConstValues ( & delegate -> mRemodIndices ) ,
remodIndices , 11 * sizeof ( size_t ) ) ; sm_core_SmSizeTVector_create ( &
delegate -> mEquationsPerConstraint , delegate -> mNumConstraints , 0 ) ;
memcpy ( sm_core_SmSizeTVector_nonConstValues ( & delegate ->
mEquationsPerConstraint ) , equationsPerConstraint , delegate ->
mNumConstraints * sizeof ( size_t ) ) ; sm_core_SmIntVector_create ( &
delegate -> mHasAllVelocityDisabledEquations , delegate -> mNumConstraints ,
0 ) ; memcpy ( sm_core_SmIntVector_nonConstValues ( & delegate ->
mHasAllVelocityDisabledEquations ) , hasAllVelocityDisabledEquations ,
delegate -> mNumConstraints * sizeof ( int32_T ) ) ;
sm_core_SmIntVector_create ( & delegate -> mRunTimeEnabledEquations ,
delegate -> mNumAllConstraintEquations , 0 ) ; memcpy (
sm_core_SmIntVector_nonConstValues ( & delegate -> mRunTimeEnabledEquations )
, runtimeEnabledEquations , delegate -> mNumAllConstraintEquations * sizeof (
int32_T ) ) ; sm_core_SmSizeTVector_create ( & delegate -> mDofToVelSlot ,
delegate -> mDof , 0 ) ; memcpy ( sm_core_SmSizeTVector_nonConstValues ( &
delegate -> mDofToVelSlot ) , dofToVelSlot , delegate -> mDof * sizeof (
size_t ) ) ; sm_core_SmSizeTVector_create ( & delegate -> mConstraintDofs , 0
, 0 ) ; memcpy ( sm_core_SmSizeTVector_nonConstValues ( & delegate ->
mConstraintDofs ) , constraintDofs , 0 * sizeof ( size_t ) ) ;
sm_core_SmSizeTVector_create ( & delegate -> mConstraintDofOffsets , delegate
-> mNumConstraints + 1 , 0 ) ; memcpy ( sm_core_SmSizeTVector_nonConstValues
( & delegate -> mConstraintDofOffsets ) , constraintDofOffsets , ( delegate
-> mNumConstraints + 1 ) * sizeof ( size_t ) ) ; sm_core_SmBoundedSet_create
( & scratchpad -> mPosRequired , 27 ) ; sm_core_SmBoundedSet_create ( &
scratchpad -> mPosDesired , 27 ) ; sm_core_SmBoundedSet_create ( & scratchpad
-> mPosSuggested , 27 ) ; sm_core_SmBoundedSet_create ( & scratchpad ->
mPosFree , 27 ) ; sm_core_SmBoundedSet_create ( & scratchpad ->
mPosNonRequired , 27 ) ; sm_core_SmBoundedSet_create ( & scratchpad ->
mPosSuggAndFree , 27 ) ; sm_core_SmBoundedSet_create ( & scratchpad ->
mVelRequired , 27 ) ; sm_core_SmBoundedSet_create ( & scratchpad ->
mVelDesired , 27 ) ; sm_core_SmBoundedSet_create ( & scratchpad ->
mVelSuggested , 27 ) ; sm_core_SmBoundedSet_create ( & scratchpad -> mVelFree
, 27 ) ; sm_core_SmBoundedSet_create ( & scratchpad -> mVelNonRequired , 27 )
; sm_core_SmBoundedSet_create ( & scratchpad -> mVelSuggAndFree , 27 ) ;
sm_core_SmBoundedSet_create ( & scratchpad -> mConstraintFilter , 0 ) ;
sm_core_SmBoundedSet_create ( & scratchpad -> mActiveConstraints , 0 ) ;
sm_core_SmBoundedSet_create ( & scratchpad -> mActiveDofs , 27 ) ;
sm_core_SmBoundedSet_create ( & scratchpad -> mActiveDofs0 , 27 ) ;
sm_core_SmBoundedSet_create ( & scratchpad -> mNewConstraints , 0 ) ;
sm_core_SmBoundedSet_create ( & scratchpad -> mNewDofs , 27 ) ;
sm_core_SmBoundedSet_create ( & scratchpad -> mUnsatisfiedConstraints , 0 ) ;
sm_core_SmSizeTVector_create ( & scratchpad -> mActiveConstraintsVect , 0 , 0
) ; sm_core_SmSizeTVector_create ( & scratchpad -> mActiveDofsVect , 27 , 0 )
; sm_core_SmSizeTVector_create ( & scratchpad -> mFullDofToActiveDof , 27 , 0
) ; sm_core_SmSizePairVector_create ( & scratchpad ->
mPartiallyPosTargetedPrims , 23 , & zeroSizePair ) ;
sm_core_SmSizePairVector_create ( & scratchpad -> mPartiallyVelTargetedPrims
, 23 , & zeroSizePair ) ; sm_core_SmSizeTVector_create ( & scratchpad ->
mPosPartialTypes , 23 , 0 ) ; sm_core_SmSizeTVector_create ( & scratchpad ->
mVelPartialTypes , 23 , 0 ) ; sm_core_SmSizeTVector_create ( & scratchpad ->
mPartiallyActivePrims , 23 , 0 ) ; sm_core_SmSizePairVector_create ( &
scratchpad -> mBaseFrameVelOffsets , 2 , & zeroSizePair ) ;
sm_core_SmSizePairVector_create ( & scratchpad -> mCvQuaternionVelOffsets , 0
, & zeroSizePair ) ; sm_core_SmRealVector_create ( & scratchpad ->
mCvQuaternionAzimuthValues , 0 , 0.0 ) ; sm_core_SmRealVector_create ( &
scratchpad -> mInitialState , 56 , 0.0 ) ; sm_core_SmRealVector_create ( &
scratchpad -> mStartState , 56 , 0.0 ) ; sm_core_SmRealVector_create ( &
scratchpad -> mTestState , 56 , 0.0 ) ; sm_core_SmRealVector_create ( &
scratchpad -> mFullStateVector , 56 , 0.0 ) ; sm_core_SmIntVector_create ( &
scratchpad -> mModeVector , 0 , 0 ) ; sm_core_SmRealVector_create ( &
scratchpad -> mJacobianRowMaj , Jm * Jn , 0.0 ) ; sm_core_SmRealVector_create
( & scratchpad -> mJacobian , Jm * Jn , 0.0 ) ; sm_core_SmRealVector_create (
& scratchpad -> mJacobianPrimSubmatrix , Jm * 6 , 0.0 ) ;
sm_core_SmRealVector_create ( & scratchpad -> mConstraintNonhomoTerms , Jm ,
0.0 ) ; sm_core_SmRealVector_create ( & scratchpad -> mConstraintError , Jm ,
0.0 ) ; sm_core_SmRealVector_create ( & scratchpad -> mBestConstraintError ,
Jm , 0.0 ) ; sm_core_SmRealVector_create ( & scratchpad -> mDeltas , Jn * (
Jm <= Jn ? Jm : Jn ) , 0.0 ) ; sm_core_SmRealVector_create ( & scratchpad ->
mSvdWork , 784 , 0.0 ) ; sm_core_SmRealVector_create ( & scratchpad ->
mLineSearchScaledDeltaVect , 27 , 0.0 ) ; sm_core_SmRealVector_create ( &
scratchpad -> mLineSearchTestStateVect , 56 , 0.0 ) ;
sm_core_SmRealVector_create ( & scratchpad -> mLineSearchErrorVect , Jm , 0.0
) ; sm_core_SmRealVector_create ( & scratchpad -> mActiveDofVelsVect , 27 ,
0.0 ) ; sm_core_SmRealVector_create ( & scratchpad -> mVelSystemRhs , Jm ,
0.0 ) ; sm_core_SmRealVector_create ( & scratchpad -> mMotionData , 264 , 0.0
) ; delegate -> mSetTargets = NULL ; delegate -> mResetStateVector =
Top_Level_Simulation_66cd9431_1_resetSimStateVector ; delegate ->
mInitializeTrackedAngleState = NULL ; delegate -> mComputeDiscreteState =
NULL ; delegate -> mAdjustPosition = NULL ; delegate ->
mPerturbJointPrimitiveState =
Top_Level_Simulation_66cd9431_1_perturbSimJointPrimitiveState ; delegate ->
mPerturbFlexibleBodyState =
Top_Level_Simulation_66cd9431_1_perturbFlexibleBodyState ; delegate ->
mComputePosDofBlendMatrix = NULL ; delegate -> mComputeVelDofBlendMatrix =
NULL ; delegate -> mProjectPartiallyTargetedPos = NULL ; delegate ->
mPropagateMotion = NULL ; delegate -> mComputeAssemblyError = NULL ; delegate
-> mComputeAssemblyJacobian = NULL ; delegate -> mComputeFullAssemblyJacobian
= NULL ; delegate -> mIsInKinematicSingularity = NULL ; delegate ->
mConvertStateVector = NULL ; delegate -> mConstructStateVector =
Top_Level_Simulation_66cd9431_1_constructStateVector ; delegate ->
mExtractSolverStateVector =
Top_Level_Simulation_66cd9431_1_extractSolverStateVector ; delegate ->
mIsPositionViolation = Top_Level_Simulation_66cd9431_1_isPositionViolation ;
delegate -> mIsVelocityViolation =
Top_Level_Simulation_66cd9431_1_isVelocityViolation ; delegate ->
mProjectStateSim = Top_Level_Simulation_66cd9431_1_projectStateSim ; delegate
-> mComputeConstraintError =
Top_Level_Simulation_66cd9431_1_computeConstraintError ; delegate ->
mResetModeVector = Top_Level_Simulation_66cd9431_1_resetModeVector ; delegate
-> mHasJointDisToNormModeChange =
Top_Level_Simulation_66cd9431_1_hasJointDisToNormModeChange ; delegate ->
mPerformJointDisToNormModeChange =
Top_Level_Simulation_66cd9431_1_performJointDisToNormModeChange ; delegate ->
mOnModeChangedCutJoints =
Top_Level_Simulation_66cd9431_1_onModeChangedCutJoints ; delegate -> mMech =
NULL ; } static void initMechanismDelegates ( NeDaePrivateData * smData ) {
PmAllocator * alloc = pm_default_allocator ( ) ; const int32_T
motionInputOffsets [ 15 ] = { 2 , 3 , 4 , 0 , 1 , 5 , 6 , 7 , 8 , 9 , 10 , 11
, 12 , 14 , 13 } ; int_T status = 0 ; initAssemblyDelegate ( & smData ->
mAssemblyDelegate ) ; initSimulationDelegate ( & smData ->
mSimulationDelegate ) ; status = pm_create_int_vector_fields ( & smData ->
mMotionInputOffsets , smData -> mNumInputMotionPrimitives , alloc ) ;
checkMemAllocStatus ( status ) ; memcpy ( smData -> mMotionInputOffsets . mX
, motionInputOffsets , 15 * sizeof ( int32_T ) ) ; } static void
initComputationFcnPtrs ( NeDaePrivateData * smData ) { smData ->
mSetParametersFcn = dae_cg_setParameters_function ; smData -> mPAssertFcn =
dae_cg_pAssert_method ; smData -> mDerivativeFcn = dae_cg_deriv_method ;
smData -> mNumJacPerturbLoBoundsFcn = dae_cg_numJacPerturbLoBounds_method ;
smData -> mNumJacPerturbHiBoundsFcn = dae_cg_numJacPerturbHiBounds_method ;
smData -> mOutputFcn = dae_cg_compOutputs_method ; smData -> mModeFcn =
dae_cg_mode_method ; smData -> mZeroCrossingFcn = dae_cg_zeroCrossing_method
; smData -> mProjectionFcn = dae_cg_project_solve ; smData -> mCIC_MODE_Fcn =
dae_cg_CIC_MODE_solve ; smData -> mCheckFcn = ( smData -> mStateVectorSize ==
0 ) ? dae_cg_check_solve : NULL ; smData -> mAssemblyFcn =
dae_cg_assemble_solve ; smData -> mSetupLoggerFcn = dae_cg_setupLoggerFcn ;
smData -> mLogFcn = dae_cg_recordLog_method ; smData -> mResidualsFcn = NULL
; smData -> mLinearizeFcn = NULL ; smData -> mGenerateFcn = NULL ; } static
void initLiveLinkToSm ( NeDaePrivateData * smData ) { smData -> mLiveSmLink =
NULL ; smData -> mLiveSmLink_destroy = NULL ; smData -> mLiveSmLink_copy =
NULL ; } void Top_Level_Simulation_66cd9431_1_NeDaePrivateData_create (
NeDaePrivateData * smData ) { initBasicAttributes ( smData ) ;
initStateVector ( smData ) ; initAsserts ( smData ) ; initModeVector ( smData
) ; initZeroCrossings ( smData ) ; initVariables ( smData ) ;
initRuntimeParameters ( smData ) ; initIoInfo ( smData ) ; initInputDerivs (
smData ) ; initDirectFeedthrough ( smData ) ; initOutputDerivProc ( smData )
; initMechanismDelegates ( smData ) ; initComputationFcnPtrs ( smData ) ;
initLiveLinkToSm ( smData ) ; }
