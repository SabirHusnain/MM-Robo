#ifndef RTW_HEADER_Top_Level_Simulation_types_h_
#define RTW_HEADER_Top_Level_Simulation_types_h_
#include "rtwtypes.h"
#ifndef DEFINED_TYPEDEF_FOR_ikblock_info_bus_
#define DEFINED_TYPEDEF_FOR_ikblock_info_bus_
typedef struct { real_T Iterations ; real_T PoseErrorNorm ; uint16_T ExitFlag
; uint8_T Status ; uint8_T sl_padding0 [ 5 ] ; } ikblock_info_bus ;
#endif
#ifndef DEFINED_TYPEDEF_FOR_struct_MH1icwhz7mkMseeLmnjXIE_
#define DEFINED_TYPEDEF_FOR_struct_MH1icwhz7mkMseeLmnjXIE_
typedef struct { boolean_T EnforceJointLimits ; boolean_T AllowRandomRestart
; uint8_T sl_padding0 [ 6 ] ; real_T MaxIterations ; real_T MaxTime ; real_T
GradientTolerance ; real_T SolutionTolerance ; real_T StepTolerance ; }
struct_MH1icwhz7mkMseeLmnjXIE ;
#endif
#ifndef DEFINED_TYPEDEF_FOR_struct_HjWznGQfRTNID7KXnowNiG_
#define DEFINED_TYPEDEF_FOR_struct_HjWznGQfRTNID7KXnowNiG_
typedef struct { real_T Radius ; real_T Length ; real_T Mass ; }
struct_HjWznGQfRTNID7KXnowNiG ;
#endif
#ifndef DEFINED_TYPEDEF_FOR_struct_2hBrgz1Av1YQD2HwLOwlBD_
#define DEFINED_TYPEDEF_FOR_struct_2hBrgz1Av1YQD2HwLOwlBD_
typedef struct { real_T X ; real_T Y ; } struct_2hBrgz1Av1YQD2HwLOwlBD ;
#endif
#ifndef DEFINED_TYPEDEF_FOR_struct_uL0pxdA9CLhg9KUiqLmMTE_
#define DEFINED_TYPEDEF_FOR_struct_uL0pxdA9CLhg9KUiqLmMTE_
typedef struct { real_T Stiffness ; real_T Damping ; real_T sFrictionCoeff ;
real_T kFrictionCoeff ; struct_2hBrgz1Av1YQD2HwLOwlBD ArmPlane ; }
struct_uL0pxdA9CLhg9KUiqLmMTE ;
#endif
#ifndef DEFINED_TYPEDEF_FOR_struct_a4uJcCPwLYNP0Eo2tJy9BG_
#define DEFINED_TYPEDEF_FOR_struct_a4uJcCPwLYNP0Eo2tJy9BG_
typedef struct { real_T X ; real_T Y ; real_T Rot [ 3 ] ; }
struct_a4uJcCPwLYNP0Eo2tJy9BG ;
#endif
#ifndef DEFINED_TYPEDEF_FOR_struct_5lMvj1bEcICoYHM5NMKgmC_
#define DEFINED_TYPEDEF_FOR_struct_5lMvj1bEcICoYHM5NMKgmC_
typedef struct { struct_a4uJcCPwLYNP0Eo2tJy9BG One ;
struct_a4uJcCPwLYNP0Eo2tJy9BG Two ; } struct_5lMvj1bEcICoYHM5NMKgmC ;
#endif
#ifndef DEFINED_TYPEDEF_FOR_struct_OkHeu9eK3mB6g0h8z1nbJG_
#define DEFINED_TYPEDEF_FOR_struct_OkHeu9eK3mB6g0h8z1nbJG_
typedef struct { real_T Stiffness ; real_T Damping ; real_T sFrictionCoeff ;
real_T kFrictionCoeff ; } struct_OkHeu9eK3mB6g0h8z1nbJG ;
#endif
#ifndef DEFINED_TYPEDEF_FOR_struct_rvOi9M8Udcrol81BZGhD5E_
#define DEFINED_TYPEDEF_FOR_struct_rvOi9M8Udcrol81BZGhD5E_
typedef struct { real_T X ; real_T Y ; real_T Phase ; }
struct_rvOi9M8Udcrol81BZGhD5E ;
#endif
#ifndef DEFINED_TYPEDEF_FOR_struct_xGpzbZ0wN9eJPl253wr9RE_
#define DEFINED_TYPEDEF_FOR_struct_xGpzbZ0wN9eJPl253wr9RE_
typedef struct { real_T TireRadius ; real_T DistanceBwTires ; real_T Height ;
real_T motorSpeed ; struct_rvOi9M8Udcrol81BZGhD5E Initial ; }
struct_xGpzbZ0wN9eJPl253wr9RE ;
#endif
#ifndef struct_tag_2PsGMppoK4e2vdwpogf6iH
#define struct_tag_2PsGMppoK4e2vdwpogf6iH
struct tag_2PsGMppoK4e2vdwpogf6iH { int32_T isInitialized ; } ;
#endif
#ifndef typedef_j2cq0amibe
#define typedef_j2cq0amibe
typedef struct tag_2PsGMppoK4e2vdwpogf6iH j2cq0amibe ;
#endif
#ifndef struct_tag_9D0ejTgiaZDB2bwsGwHqBF
#define struct_tag_9D0ejTgiaZDB2bwsGwHqBF
struct tag_9D0ejTgiaZDB2bwsGwHqBF { void * CollisionPrimitive ; } ;
#endif
#ifndef typedef_jy5nolvw3p
#define typedef_jy5nolvw3p
typedef struct tag_9D0ejTgiaZDB2bwsGwHqBF jy5nolvw3p ;
#endif
#ifndef struct_tag_sdAmwXbnJnEmimT0NaJRtAD
#define struct_tag_sdAmwXbnJnEmimT0NaJRtAD
struct tag_sdAmwXbnJnEmimT0NaJRtAD { real_T tv_sec ; real_T tv_nsec ; } ;
#endif
#ifndef typedef_nm2ck2vibf
#define typedef_nm2ck2vibf
typedef struct tag_sdAmwXbnJnEmimT0NaJRtAD nm2ck2vibf ;
#endif
#include "coder_posix_time.h"
#ifndef struct_tag_1FpmCQNe36RDLjratTWCgF
#define struct_tag_1FpmCQNe36RDLjratTWCgF
struct tag_1FpmCQNe36RDLjratTWCgF { int32_T __dummy ; } ;
#endif
#ifndef typedef_iypjqwvfvj
#define typedef_iypjqwvfvj
typedef struct tag_1FpmCQNe36RDLjratTWCgF iypjqwvfvj ;
#endif
#ifndef struct_tag_9VaLdcnhzQxC5h4iXVOCU
#define struct_tag_9VaLdcnhzQxC5h4iXVOCU
struct tag_9VaLdcnhzQxC5h4iXVOCU { nm2ck2vibf StartTime ; } ;
#endif
#ifndef typedef_eq5qmkfbmb
#define typedef_eq5qmkfbmb
typedef struct tag_9VaLdcnhzQxC5h4iXVOCU eq5qmkfbmb ;
#endif
#ifndef struct_tag_I7lxy6BEal0s7MBxygd9JE
#define struct_tag_I7lxy6BEal0s7MBxygd9JE
struct tag_I7lxy6BEal0s7MBxygd9JE { real_T f1 [ 16 ] ; } ;
#endif
#ifndef typedef_kvqz32ufqp
#define typedef_kvqz32ufqp
typedef struct tag_I7lxy6BEal0s7MBxygd9JE kvqz32ufqp ;
#endif
#ifndef struct_emxArray_char_T
#define struct_emxArray_char_T
struct emxArray_char_T { char_T * data ; int32_T * size ; int32_T
allocatedSize ; int32_T numDimensions ; boolean_T canFreeData ; } ;
#endif
#ifndef typedef_lg5jhfa1j5
#define typedef_lg5jhfa1j5
typedef struct emxArray_char_T lg5jhfa1j5 ;
#endif
#ifndef struct_emxArray_tag_9D0ejTgiaZDB2bwsGw
#define struct_emxArray_tag_9D0ejTgiaZDB2bwsGw
struct emxArray_tag_9D0ejTgiaZDB2bwsGw { jy5nolvw3p * data ; int32_T * size ;
int32_T allocatedSize ; int32_T numDimensions ; boolean_T canFreeData ; } ;
#endif
#ifndef typedef_e2t4yts01i
#define typedef_e2t4yts01i
typedef struct emxArray_tag_9D0ejTgiaZDB2bwsGw e2t4yts01i ;
#endif
#ifndef struct_tag_fg3hltRT1BVNp1FuRifnyD
#define struct_tag_fg3hltRT1BVNp1FuRifnyD
struct tag_fg3hltRT1BVNp1FuRifnyD { lg5jhfa1j5 * Type ; real_T PositionNumber
; real_T JointToParentTransform [ 16 ] ; real_T ChildToJointTransform [ 16 ]
; real_T JointAxisInternal [ 3 ] ; } ;
#endif
#ifndef typedef_orkdduvnog
#define typedef_orkdduvnog
typedef struct tag_fg3hltRT1BVNp1FuRifnyD orkdduvnog ;
#endif
#ifndef struct_tag_HWD60tsp5C7nQvoaHaK87D
#define struct_tag_HWD60tsp5C7nQvoaHaK87D
struct tag_HWD60tsp5C7nQvoaHaK87D { boolean_T matlabCodegenIsDeleted ;
e2t4yts01i * CollisionGeometries ; real_T MaxElements ; real_T Size ; } ;
#endif
#ifndef typedef_ejmcoi31fm
#define typedef_ejmcoi31fm
typedef struct tag_HWD60tsp5C7nQvoaHaK87D ejmcoi31fm ;
#endif
#ifndef struct_tag_bLD8l9lmku4VeoWPZlvqoC
#define struct_tag_bLD8l9lmku4VeoWPZlvqoC
struct tag_bLD8l9lmku4VeoWPZlvqoC { boolean_T matlabCodegenIsDeleted ;
lg5jhfa1j5 * NameInternal ; orkdduvnog JointInternal ; real_T ParentIndex ;
ejmcoi31fm CollisionsInternal ; } ;
#endif
#ifndef typedef_cwp5dxx3gq
#define typedef_cwp5dxx3gq
typedef struct tag_bLD8l9lmku4VeoWPZlvqoC cwp5dxx3gq ;
#endif
#ifndef struct_tag_RMndQv5lMsgIWZyuPEPIhB
#define struct_tag_RMndQv5lMsgIWZyuPEPIhB
struct tag_RMndQv5lMsgIWZyuPEPIhB { boolean_T matlabCodegenIsDeleted ; real_T
NumBodies ; cwp5dxx3gq Base ; cwp5dxx3gq * Bodies [ 7 ] ; real_T
PositionNumber ; cwp5dxx3gq _pobj0 [ 14 ] ; } ;
#endif
#ifndef typedef_fykx3ceuls
#define typedef_fykx3ceuls
typedef struct tag_RMndQv5lMsgIWZyuPEPIhB fykx3ceuls ;
#endif
#ifndef struct_tag_F2vU7WO3mRcMdbXn6EtpsB
#define struct_tag_F2vU7WO3mRcMdbXn6EtpsB
struct tag_F2vU7WO3mRcMdbXn6EtpsB { boolean_T matlabCodegenIsDeleted ;
int32_T isInitialized ; fykx3ceuls TreeInternal ; } ;
#endif
#ifndef typedef_aivhh1v50g
#define typedef_aivhh1v50g
typedef struct tag_F2vU7WO3mRcMdbXn6EtpsB aivhh1v50g ;
#endif
#ifndef struct_emxArray_real_T
#define struct_emxArray_real_T
struct emxArray_real_T { real_T * data ; int32_T * size ; int32_T
allocatedSize ; int32_T numDimensions ; boolean_T canFreeData ; } ;
#endif
#ifndef typedef_hnyeda4wkh
#define typedef_hnyeda4wkh
typedef struct emxArray_real_T hnyeda4wkh ;
#endif
#ifndef struct_tag_EhjQFBatIylmRskzCQ6c4C
#define struct_tag_EhjQFBatIylmRskzCQ6c4C
struct tag_EhjQFBatIylmRskzCQ6c4C { lg5jhfa1j5 * Type ; real_T VelocityNumber
; real_T PositionNumber ; hnyeda4wkh * MotionSubspace ; boolean_T InTree ;
real_T JointToParentTransform [ 16 ] ; real_T ChildToJointTransform [ 16 ] ;
lg5jhfa1j5 * NameInternal ; hnyeda4wkh * PositionLimitsInternal ; hnyeda4wkh
* HomePositionInternal ; real_T JointAxisInternal [ 3 ] ; } ;
#endif
#ifndef typedef_orkdduvnogx
#define typedef_orkdduvnogx
typedef struct tag_EhjQFBatIylmRskzCQ6c4C orkdduvnogx ;
#endif
#ifndef struct_emxArray_tag_I7lxy6BEal0s7MBxyg
#define struct_emxArray_tag_I7lxy6BEal0s7MBxyg
struct emxArray_tag_I7lxy6BEal0s7MBxyg { kvqz32ufqp * data ; int32_T * size ;
int32_T allocatedSize ; int32_T numDimensions ; boolean_T canFreeData ; } ;
#endif
#ifndef typedef_kubhfbb3hs
#define typedef_kubhfbb3hs
typedef struct emxArray_tag_I7lxy6BEal0s7MBxyg kubhfbb3hs ;
#endif
#ifndef struct_emxArray_int8_T
#define struct_emxArray_int8_T
struct emxArray_int8_T { int8_T * data ; int32_T * size ; int32_T
allocatedSize ; int32_T numDimensions ; boolean_T canFreeData ; } ;
#endif
#ifndef typedef_hohltwy3pn
#define typedef_hohltwy3pn
typedef struct emxArray_int8_T hohltwy3pn ;
#endif
#ifndef struct_emxArray_boolean_T
#define struct_emxArray_boolean_T
struct emxArray_boolean_T { boolean_T * data ; int32_T * size ; int32_T
allocatedSize ; int32_T numDimensions ; boolean_T canFreeData ; } ;
#endif
#ifndef typedef_i2qqrhl1oe
#define typedef_i2qqrhl1oe
typedef struct emxArray_boolean_T i2qqrhl1oe ;
#endif
#ifndef struct_emxArray_int32_T
#define struct_emxArray_int32_T
struct emxArray_int32_T { int32_T * data ; int32_T * size ; int32_T
allocatedSize ; int32_T numDimensions ; boolean_T canFreeData ; } ;
#endif
#ifndef typedef_nabfuq4qup
#define typedef_nabfuq4qup
typedef struct emxArray_int32_T nabfuq4qup ;
#endif
#ifndef struct_emxArray_uint32_T
#define struct_emxArray_uint32_T
struct emxArray_uint32_T { uint32_T * data ; int32_T * size ; int32_T
allocatedSize ; int32_T numDimensions ; boolean_T canFreeData ; } ;
#endif
#ifndef typedef_netvxor230
#define typedef_netvxor230
typedef struct emxArray_uint32_T netvxor230 ;
#endif
#ifndef struct_tag_FDmcpvQOLiq3ThVhRoRDgG
#define struct_tag_FDmcpvQOLiq3ThVhRoRDgG
struct tag_FDmcpvQOLiq3ThVhRoRDgG { void * CollisionPrimitive ; real_T
LocalPose [ 16 ] ; real_T WorldPose [ 16 ] ; } ;
#endif
#ifndef typedef_jy5nolvw3ph
#define typedef_jy5nolvw3ph
typedef struct tag_FDmcpvQOLiq3ThVhRoRDgG jy5nolvw3ph ;
#endif
#ifndef struct_emxArray_tag_FDmcpvQOLiq3ThVhRo
#define struct_emxArray_tag_FDmcpvQOLiq3ThVhRo
struct emxArray_tag_FDmcpvQOLiq3ThVhRo { jy5nolvw3ph * data ; int32_T * size
; int32_T allocatedSize ; int32_T numDimensions ; boolean_T canFreeData ; } ;
#endif
#ifndef typedef_e2t4yts01ix
#define typedef_e2t4yts01ix
typedef struct emxArray_tag_FDmcpvQOLiq3ThVhRo e2t4yts01ix ;
#endif
#ifndef struct_tag_9POrn2enIyVe8JaCCgbcC
#define struct_tag_9POrn2enIyVe8JaCCgbcC
struct tag_9POrn2enIyVe8JaCCgbcC { boolean_T matlabCodegenIsDeleted ;
e2t4yts01ix * CollisionGeometries ; real_T MaxElements ; real_T Size ; } ;
#endif
#ifndef typedef_ejmcoi31fmi
#define typedef_ejmcoi31fmi
typedef struct tag_9POrn2enIyVe8JaCCgbcC ejmcoi31fmi ;
#endif
#ifndef struct_tag_i5Te3PaGE08te6EzjoIaZ
#define struct_tag_i5Te3PaGE08te6EzjoIaZ
struct tag_i5Te3PaGE08te6EzjoIaZ { boolean_T matlabCodegenIsDeleted ; real_T
Index ; lg5jhfa1j5 * NameInternal ; orkdduvnogx * JointInternal ; real_T
ParentIndex ; real_T MassInternal ; real_T CenterOfMassInternal [ 3 ] ;
real_T InertiaInternal [ 9 ] ; real_T SpatialInertia [ 36 ] ; ejmcoi31fmi *
CollisionsInternal ; } ;
#endif
#ifndef typedef_cwp5dxx3gqu
#define typedef_cwp5dxx3gqu
typedef struct tag_i5Te3PaGE08te6EzjoIaZ cwp5dxx3gqu ;
#endif
#ifndef struct_tag_FzHyNqQvVhN8UjTByO7RlB
#define struct_tag_FzHyNqQvVhN8UjTByO7RlB
struct tag_FzHyNqQvVhN8UjTByO7RlB { boolean_T matlabCodegenIsDeleted ; real_T
NumBodies ; cwp5dxx3gqu Base ; real_T Gravity [ 3 ] ; cwp5dxx3gqu * Bodies [
7 ] ; ejmcoi31fmi _pobj0 [ 15 ] ; orkdduvnogx _pobj1 [ 15 ] ; cwp5dxx3gqu
_pobj2 [ 14 ] ; } ;
#endif
#ifndef typedef_fykx3ceulsm
#define typedef_fykx3ceulsm
typedef struct tag_FzHyNqQvVhN8UjTByO7RlB fykx3ceulsm ;
#endif
#ifndef struct_tag_f6DJg5TC4xtfeMPuQC8R5D
#define struct_tag_f6DJg5TC4xtfeMPuQC8R5D
struct tag_f6DJg5TC4xtfeMPuQC8R5D { boolean_T matlabCodegenIsDeleted ; real_T
NumBodies ; cwp5dxx3gqu Base ; iypjqwvfvj FastVisualizationHelper ;
cwp5dxx3gqu * Bodies [ 7 ] ; real_T NumNonFixedBodies ; real_T PositionNumber
; real_T VelocityNumber ; real_T PositionDoFMap [ 14 ] ; real_T
VelocityDoFMap [ 14 ] ; cwp5dxx3gqu _pobj0 [ 7 ] ; ejmcoi31fmi _pobj1 [ 8 ] ;
orkdduvnogx _pobj2 [ 8 ] ; } ;
#endif
#ifndef typedef_i5s4hgzi5z
#define typedef_i5s4hgzi5z
typedef struct tag_f6DJg5TC4xtfeMPuQC8R5D i5s4hgzi5z ;
#endif
#ifndef struct_tag_XWXImZHkvZhhiGolxqPReH
#define struct_tag_XWXImZHkvZhhiGolxqPReH
struct tag_XWXImZHkvZhhiGolxqPReH { boolean_T matlabCodegenIsDeleted ;
i5s4hgzi5z * Robot ; real_T WeightMatrix [ 36 ] ; lg5jhfa1j5 * BodyName ;
real_T Tform [ 16 ] ; hnyeda4wkh * ErrTemp ; real_T CostTemp ; hnyeda4wkh *
GradTemp ; } ;
#endif
#ifndef typedef_fprravcitl
#define typedef_fprravcitl
typedef struct tag_XWXImZHkvZhhiGolxqPReH fprravcitl ;
#endif
#ifndef struct_tag_NGPQgU8p1amqKfBi21qhbC
#define struct_tag_NGPQgU8p1amqKfBi21qhbC
struct tag_NGPQgU8p1amqKfBi21qhbC { boolean_T matlabCodegenIsDeleted ; char_T
Name [ 22 ] ; hnyeda4wkh * ConstraintMatrix ; hnyeda4wkh * ConstraintBound ;
boolean_T ConstraintsOn ; real_T SolutionTolerance ; boolean_T RandomRestart
; fprravcitl * ExtraArgs ; real_T MaxNumIteration ; real_T MaxTime ; real_T
SeedInternal [ 6 ] ; real_T MaxTimeInternal ; real_T MaxNumIterationInternal
; real_T StepTolerance ; eq5qmkfbmb TimeObj ; real_T GradientTolerance ;
real_T ArmijoRuleBeta ; real_T ArmijoRuleSigma ; eq5qmkfbmb TimeObjInternal ;
} ;
#endif
#ifndef typedef_oy2a1akvcj
#define typedef_oy2a1akvcj
typedef struct tag_NGPQgU8p1amqKfBi21qhbC oy2a1akvcj ;
#endif
#ifndef struct_tag_R8NYI2wnFf7E7GPfn4yqAE
#define struct_tag_R8NYI2wnFf7E7GPfn4yqAE
struct tag_R8NYI2wnFf7E7GPfn4yqAE { boolean_T matlabCodegenIsDeleted ;
int32_T isInitialized ; boolean_T isSetupComplete ; oy2a1akvcj * Solver ;
hnyeda4wkh * Limits ; i5s4hgzi5z * RigidBodyTreeInternal ; fprravcitl _pobj0
; orkdduvnogx _pobj1 [ 14 ] ; cwp5dxx3gqu _pobj2 [ 7 ] ; ejmcoi31fmi _pobj3 [
15 ] ; i5s4hgzi5z _pobj4 ; oy2a1akvcj _pobj5 ; } ;
#endif
#ifndef typedef_grjfkdr5ak
#define typedef_grjfkdr5ak
typedef struct tag_R8NYI2wnFf7E7GPfn4yqAE grjfkdr5ak ;
#endif
#ifndef struct_tag_qE5jJuVODEej9g3pFD2YV
#define struct_tag_qE5jJuVODEej9g3pFD2YV
struct tag_qE5jJuVODEej9g3pFD2YV { boolean_T matlabCodegenIsDeleted ; int32_T
isInitialized ; fykx3ceulsm TreeInternal ; grjfkdr5ak IKInternal ; } ;
#endif
#ifndef typedef_pd0uxzf3xo
#define typedef_pd0uxzf3xo
typedef struct tag_qE5jJuVODEej9g3pFD2YV pd0uxzf3xo ;
#endif
#ifndef typedef_ehzicop4dv
#define typedef_ehzicop4dv
typedef int32_T ehzicop4dv ;
#endif
#ifndef robotics_core_internal_NLPSolverExitFlags_constants
#define robotics_core_internal_NLPSolverExitFlags_constants
#define robotics_core_internal_NLPSolverExitFlags_LocalMinimumFound (1)
#define robotics_core_internal_NLPSolverExitFlags_IterationLimitExceeded (2)
#define robotics_core_internal_NLPSolverExitFlags_TimeLimitExceeded (3)
#define robotics_core_internal_NLPSolverExitFlags_StepSizeBelowMinimum (4)
#define robotics_core_internal_NLPSolverExitFlags_ChangeInErrorBelowMinimum (5)
#define robotics_core_internal_NLPSolverExitFlags_SearchDirectionInvalid (6)
#define robotics_core_internal_NLPSolverExitFlags_HessianNotPositiveSemidefinite (7)
#define robotics_core_internal_NLPSolverExitFlags_TrustRegionRadiusBelowMinimum (8)
#endif
#ifndef SS_UINT64
#define SS_UINT64 30
#endif
#ifndef SS_INT64
#define SS_INT64 31
#endif
typedef struct P_ P ;
#endif
