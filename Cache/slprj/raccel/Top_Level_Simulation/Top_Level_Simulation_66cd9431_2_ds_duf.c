#include "ne_ds.h"
#include "Top_Level_Simulation_66cd9431_2_ds_sys_struct.h"
#include "Top_Level_Simulation_66cd9431_2_ds_duf.h"
#include "Top_Level_Simulation_66cd9431_2_ds.h"
#include "Top_Level_Simulation_66cd9431_2_ds_externals.h"
#include "Top_Level_Simulation_66cd9431_2_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T Top_Level_Simulation_66cd9431_2_ds_duf ( const NeDynamicSystem * sys
, const NeDynamicSystemInput * t4 , NeDsMethodOutput * t5 ) { PmRealVector
out ; real_T U_idx_0 ; real_T X_idx_0 ; real_T intermediate_der2 ; real_T
intrm_sf_mf_0 ; real_T t0 ; real_T t2 ; U_idx_0 = t4 -> mU . mX [ 0 ] ;
X_idx_0 = t4 -> mX . mX [ 0 ] ; out = t5 -> mDUF ; intrm_sf_mf_0 = ( X_idx_0
- 0.00125 ) * 10000.0 + U_idx_0 * 150.0 ; U_idx_0 = ( X_idx_0 - - 0.0001 ) *
10000.0 + U_idx_0 * 150.0 ; t0 = ( X_idx_0 - 0.00125 ) / 0.0001 ; t2 = t0 *
t0 * 3.0 - t0 * t0 * t0 * 2.0 ; t0 = ( - 0.0001 - X_idx_0 ) / 0.0001 ;
intermediate_der2 = 150.0 ; if ( X_idx_0 >= 0.00135 ) { t0 = - ( ( real_T ) (
intrm_sf_mf_0 >= 0.0 ) * intermediate_der2 ) ; } else if ( X_idx_0 >= 0.00125
) { t0 = - ( ( real_T ) ( intrm_sf_mf_0 >= 0.0 ) * intermediate_der2 * t2 ) ;
} else if ( X_idx_0 > - 0.0001 ) { t0 = 0.0 ; } else if ( X_idx_0 > - 0.0002
) { t0 = - ( ( real_T ) ( U_idx_0 <= 0.0 ) * intermediate_der2 * ( t0 * t0 *
3.0 - t0 * t0 * t0 * 2.0 ) ) ; } else { t0 = - ( ( real_T ) ( U_idx_0 <= 0.0
) * intermediate_der2 ) ; } out . mX [ 0 ] = t0 ; ( void ) sys ; ( void ) t5
; return 0 ; }
