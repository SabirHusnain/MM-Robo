#include "Top_Level_Simulation_capi_host.h"
static Top_Level_Simulation_host_DataMapInfo_T root;
static int initialized = 0;
__declspec( dllexport ) rtwCAPI_ModelMappingInfo *getRootMappingInfo()
{
    if (initialized == 0) {
        initialized = 1;
        Top_Level_Simulation_host_InitializeDataMapInfo(&(root), "Top_Level_Simulation");
    }
    return &root.mmi;
}

rtwCAPI_ModelMappingInfo *mexFunction(){return(getRootMappingInfo());}
