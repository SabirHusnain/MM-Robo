###########################################################################
## Makefile generated for component 'Top_Level_Simulation'. 
## 
## Makefile     : Top_Level_Simulation.mk
## Generated on : Tue Jul 25 18:08:24 2023
## Final product: ./Top_Level_Simulation.exe
## Product type : executable
## 
###########################################################################

###########################################################################
## MACROS
###########################################################################

# Macro Descriptions:
# PRODUCT_NAME            Name of the system to build
# MAKEFILE                Name of this makefile
# COMPILER_COMMAND_FILE   Compiler command listing model reference header paths
# CMD_FILE                Command file

PRODUCT_NAME              = Top_Level_Simulation
MAKEFILE                  = Top_Level_Simulation.mk
MATLAB_ROOT               = C:/PROGRA~1/MATLAB/R2023a
MATLAB_BIN                = C:/PROGRA~1/MATLAB/R2023a/bin
MATLAB_ARCH_BIN           = $(MATLAB_BIN)/win64
START_DIR                 = F:/Freelancing/Pending/6DOFAG~1/SIMULA~1/Cache
SOLVER                    = 
SOLVER_OBJ                = 
CLASSIC_INTERFACE         = 1
TGT_FCN_LIB               = ISO_C
MODEL_HAS_DYNAMICALLY_LOADED_SFCNS = 0
RELATIVE_PATH_TO_ANCHOR   = ../../..
COMPILER_COMMAND_FILE     = Top_Level_Simulation_comp.rsp
CMD_FILE                  = Top_Level_Simulation.rsp
C_STANDARD_OPTS           = -fwrapv
CPP_STANDARD_OPTS         = -fwrapv
LIBSSC_SLI_MINGW64_OBJS   = 
LIBSM_SSCI_MINGW64_OBJS   = 
LIBSSC_CORE_MINGW64_OBJS  = 
LIBSSC_ST_MINGW64_OBJS    = 
LIBMC_MINGW64_OBJS        = 
LIBSM_MINGW64_OBJS        = 
LIBPM_MATH_MINGW64_OBJS   = 
LIBEX_MINGW64_OBJS        = 
LIBPM_MINGW64_OBJS        = 

###########################################################################
## TOOLCHAIN SPECIFICATIONS
###########################################################################

# Toolchain Name:          MinGW64 | gmake (64-bit Windows)
# Supported Version(s):    6.x
# ToolchainInfo Version:   2023a
# Specification Revision:  1.0
# 
#-------------------------------------------
# Macros assumed to be defined elsewhere
#-------------------------------------------

# C_STANDARD_OPTS
# CPP_STANDARD_OPTS
# MINGW_ROOT
# MINGW_C_STANDARD_OPTS

#-----------
# MACROS
#-----------

WARN_FLAGS            = -Wall -W -Wwrite-strings -Winline -Wstrict-prototypes -Wnested-externs -Wpointer-arith -Wcast-align
WARN_FLAGS_MAX        = $(WARN_FLAGS) -Wcast-qual -Wshadow
CPP_WARN_FLAGS        = -Wall -W -Wwrite-strings -Winline -Wpointer-arith -Wcast-align
CPP_WARN_FLAGS_MAX    = $(CPP_WARN_FLAGS) -Wcast-qual -Wshadow
MW_EXTERNLIB_DIR      = $(MATLAB_ROOT)/extern/lib/win64/mingw64
SHELL                 = %SystemRoot%/system32/cmd.exe

TOOLCHAIN_SRCS = 
TOOLCHAIN_INCS = 
TOOLCHAIN_LIBS = -lws2_32

#------------------------
# BUILD TOOL COMMANDS
#------------------------

# C Compiler: GNU C Compiler
CC_PATH = $(MINGW_ROOT)
CC = "$(CC_PATH)/gcc"

# Linker: GNU Linker
LD_PATH = $(MINGW_ROOT)
LD = "$(LD_PATH)/g++"

# C++ Compiler: GNU C++ Compiler
CPP_PATH = $(MINGW_ROOT)
CPP = "$(CPP_PATH)/g++"

# C++ Linker: GNU C++ Linker
CPP_LD_PATH = $(MINGW_ROOT)
CPP_LD = "$(CPP_LD_PATH)/g++"

# Archiver: GNU Archiver
AR_PATH = $(MINGW_ROOT)
AR = "$(AR_PATH)/ar"

# MEX Tool: MEX Tool
MEX_PATH = $(MATLAB_ARCH_BIN)
MEX = "$(MEX_PATH)/mex"

# Download: Download
DOWNLOAD =

# Execute: Execute
EXECUTE = $(PRODUCT)

# Builder: GMAKE Utility
MAKE_PATH = $(MINGW_ROOT)
MAKE = "$(MAKE_PATH)/mingw32-make.exe"


#-------------------------
# Directives/Utilities
#-------------------------

CDEBUG              = -g
C_OUTPUT_FLAG       = -o
LDDEBUG             = -g
OUTPUT_FLAG         = -o
CPPDEBUG            = -g
CPP_OUTPUT_FLAG     = -o
CPPLDDEBUG          = -g
OUTPUT_FLAG         = -o
ARDEBUG             =
STATICLIB_OUTPUT_FLAG =
MEX_DEBUG           = -g
RM                  = @del
ECHO                = @echo
MV                  = @move
RUN                 =

#----------------------------------------
# "Faster Builds" Build Configuration
#----------------------------------------

ARFLAGS              = ruvs
CFLAGS               = -c $(MINGW_C_STANDARD_OPTS) -m64 \
                       -O0
CPPFLAGS             = -c $(CPP_STANDARD_OPTS) -m64 \
                       -O0
CPP_LDFLAGS          =  -static -m64
CPP_SHAREDLIB_LDFLAGS  = -shared -Wl,--no-undefined \
                         -Wl,--out-implib,$(notdir $(basename $(PRODUCT))).lib
DOWNLOAD_FLAGS       =
EXECUTE_FLAGS        =
LDFLAGS              =  -static -m64
MEX_CPPFLAGS         =
MEX_CPPLDFLAGS       =
MEX_CFLAGS           =
MEX_LDFLAGS          =
MAKE_FLAGS           = -f $(MAKEFILE)
SHAREDLIB_LDFLAGS    = -shared -Wl,--no-undefined \
                       -Wl,--out-implib,$(notdir $(basename $(PRODUCT))).lib



###########################################################################
## OUTPUT INFO
###########################################################################

PRODUCT = ./Top_Level_Simulation.exe
PRODUCT_TYPE = "executable"
BUILD_TYPE = "Top-Level Standalone Executable"

###########################################################################
## INCLUDE PATHS
###########################################################################

INCLUDES_BUILDINFO = 

INCLUDES = $(INCLUDES_BUILDINFO)

###########################################################################
## DEFINES
###########################################################################

DEFINES_ = -Dccd_EXPORTS
DEFINES_BUILD_ARGS = -DCLASSIC_INTERFACE=1 -DALLOCATIONFCN=0 -DONESTEPFCN=0 -DTERMFCN=1 -DMULTI_INSTANCE_CODE=0 -DINTEGER_CODE=0
DEFINES_CUSTOM = -DEXT_MODE -DIS_RAPID_ACCEL
DEFINES_OPTS = -DTGTCONN -DIS_SIM_TARGET -DNRT -DRSIM_PARAMETER_LOADING -DRSIM_WITH_SL_SOLVER -DENABLE_SLEXEC_SSBRIDGE=1 -DMODEL_HAS_DYNAMICALLY_LOADED_SFCNS=0 -DON_TARGET_WAIT_FOR_START=0 -DTID01EQ=0
DEFINES_STANDARD = -DMODEL=Top_Level_Simulation -DNUMST=4 -DNCSTATES=68 -DHAVESTDIO

DEFINES = $(DEFINES_) $(DEFINES_BUILD_ARGS) $(DEFINES_CUSTOM) $(DEFINES_OPTS) $(DEFINES_STANDARD)

###########################################################################
## SOURCE FILES
###########################################################################

SRCS = $(MATLAB_ROOT)/toolbox/shared/robotics/externalDependency/libccd/src/ccd_ccd.c $(MATLAB_ROOT)/toolbox/shared/robotics/externalDependency/libccd/src/ccd_mpr.c $(MATLAB_ROOT)/toolbox/shared/robotics/externalDependency/libccd/src/ccd_polytope.c $(MATLAB_ROOT)/toolbox/shared/robotics/externalDependency/libccd/src/ccd_vec3.c $(MATLAB_ROOT)/toolbox/shared/robotics/robotcore/builtins/libsrc/collisioncodegen/collisioncodegen_CollisionGeometry.cpp $(MATLAB_ROOT)/toolbox/shared/robotics/robotcore/builtins/libsrc/collisioncodegen/collisioncodegen_api.cpp $(MATLAB_ROOT)/toolbox/shared/robotics/robotcore/builtins/libsrc/collisioncodegen/collisioncodegen_ccdExtensions.cpp $(MATLAB_ROOT)/toolbox/shared/robotics/robotcore/builtins/libsrc/collisioncodegen/collisioncodegen_checkCollision.cpp $(MATLAB_ROOT)/toolbox/eml/externalDependency/timefun/coder_posix_time.c $(START_DIR)/slprj/raccel/Top_Level_Simulation/Top_Level_Simulation_66cd9431_1.c $(START_DIR)/slprj/raccel/Top_Level_Simulation/Top_Level_Simulation_66cd9431_1_create.c $(START_DIR)/slprj/raccel/Top_Level_Simulation/Top_Level_Simulation_66cd9431_1_setParameters.c $(START_DIR)/slprj/raccel/Top_Level_Simulation/Top_Level_Simulation_66cd9431_1_asserts.c $(START_DIR)/slprj/raccel/Top_Level_Simulation/Top_Level_Simulation_66cd9431_1_deriv.c $(START_DIR)/slprj/raccel/Top_Level_Simulation/Top_Level_Simulation_66cd9431_1_checkDynamics.c $(START_DIR)/slprj/raccel/Top_Level_Simulation/Top_Level_Simulation_66cd9431_1_compOutputs.c $(START_DIR)/slprj/raccel/Top_Level_Simulation/Top_Level_Simulation_66cd9431_1_asm_delegate.c $(START_DIR)/slprj/raccel/Top_Level_Simulation/Top_Level_Simulation_66cd9431_1_sim_delegate.c $(START_DIR)/slprj/raccel/Top_Level_Simulation/Top_Level_Simulation_66cd9431_1_mode_zero_crossings.c $(START_DIR)/slprj/raccel/Top_Level_Simulation/Top_Level_Simulation_66cd9431_1_logging.c $(START_DIR)/slprj/raccel/Top_Level_Simulation/Top_Level_Simulation_66cd9431_1_geometries.c $(START_DIR)/slprj/raccel/Top_Level_Simulation/Top_Level_Simulation_66cd9431_1_gateway.c $(START_DIR)/slprj/raccel/Top_Level_Simulation/Top_Level_Simulation_66cd9431_3_ds.c $(START_DIR)/slprj/raccel/Top_Level_Simulation/Top_Level_Simulation_66cd9431_3_ds_duf.c $(START_DIR)/slprj/raccel/Top_Level_Simulation/Top_Level_Simulation_66cd9431_3_ds_dxf.c $(START_DIR)/slprj/raccel/Top_Level_Simulation/Top_Level_Simulation_66cd9431_3_ds_f.c $(START_DIR)/slprj/raccel/Top_Level_Simulation/Top_Level_Simulation_66cd9431_3.c $(START_DIR)/slprj/raccel/Top_Level_Simulation/Top_Level_Simulation_66cd9431_3_gateway.c $(START_DIR)/slprj/raccel/Top_Level_Simulation/Top_Level_Simulation_66cd9431_2_ds.c $(START_DIR)/slprj/raccel/Top_Level_Simulation/Top_Level_Simulation_66cd9431_2_ds_duf.c $(START_DIR)/slprj/raccel/Top_Level_Simulation/Top_Level_Simulation_66cd9431_2_ds_dxf.c $(START_DIR)/slprj/raccel/Top_Level_Simulation/Top_Level_Simulation_66cd9431_2_ds_f.c $(START_DIR)/slprj/raccel/Top_Level_Simulation/Top_Level_Simulation_66cd9431_2.c $(START_DIR)/slprj/raccel/Top_Level_Simulation/Top_Level_Simulation_66cd9431_2_gateway.c $(START_DIR)/slprj/raccel/Top_Level_Simulation/rt_backsubrr_dbl.c $(START_DIR)/slprj/raccel/Top_Level_Simulation/rt_forwardsubrr_dbl.c $(START_DIR)/slprj/raccel/Top_Level_Simulation/rt_lu_real.c $(START_DIR)/slprj/raccel/Top_Level_Simulation/rt_matrixlib_dbl.c $(START_DIR)/slprj/raccel/Top_Level_Simulation/Top_Level_Simulation.c $(START_DIR)/slprj/raccel/Top_Level_Simulation/Top_Level_Simulation_capi.c $(START_DIR)/slprj/raccel/Top_Level_Simulation/Top_Level_Simulation_data.c $(START_DIR)/slprj/raccel/Top_Level_Simulation/Top_Level_Simulation_tgtconn.c $(START_DIR)/slprj/raccel/Top_Level_Simulation/rtGetInf.c $(START_DIR)/slprj/raccel/Top_Level_Simulation/rtGetNaN.c $(START_DIR)/slprj/raccel/Top_Level_Simulation/rt_nonfinite.c $(START_DIR)/slprj/raccel/Top_Level_Simulation/rt_zcfcn.c $(MATLAB_ROOT)/rtw/c/raccel/raccel_main.c $(MATLAB_ROOT)/rtw/c/raccel/raccel_sup.c $(MATLAB_ROOT)/rtw/c/raccel/raccel_mat.c $(MATLAB_ROOT)/simulink/include/simulink_solver_api.c $(MATLAB_ROOT)/rtw/c/src/rapid/raccel_utils.c $(MATLAB_ROOT)/rtw/c/src/rapid/common_utils.c $(MATLAB_ROOT)/rtw/c/src/ext_mode/common/ext_svr.c $(MATLAB_ROOT)/rtw/c/src/ext_mode/common/updown.c $(MATLAB_ROOT)/rtw/c/src/ext_mode/common/ext_work.c $(MATLAB_ROOT)/rtw/c/src/ext_mode/common/rtiostream_interface.c $(MATLAB_ROOT)/toolbox/coder/rtiostream/src/rtiostreamtcpip/rtiostream_tcpip.c $(MATLAB_ROOT)/toolbox/coder/rtiostream/src/utils/rtiostream_utils.c

ALL_SRCS = $(SRCS)

###########################################################################
## OBJECTS
###########################################################################

OBJS = ccd_ccd.obj ccd_mpr.obj ccd_polytope.obj ccd_vec3.obj collisioncodegen_CollisionGeometry.obj collisioncodegen_api.obj collisioncodegen_ccdExtensions.obj collisioncodegen_checkCollision.obj coder_posix_time.obj Top_Level_Simulation_66cd9431_1.obj Top_Level_Simulation_66cd9431_1_create.obj Top_Level_Simulation_66cd9431_1_setParameters.obj Top_Level_Simulation_66cd9431_1_asserts.obj Top_Level_Simulation_66cd9431_1_deriv.obj Top_Level_Simulation_66cd9431_1_checkDynamics.obj Top_Level_Simulation_66cd9431_1_compOutputs.obj Top_Level_Simulation_66cd9431_1_asm_delegate.obj Top_Level_Simulation_66cd9431_1_sim_delegate.obj Top_Level_Simulation_66cd9431_1_mode_zero_crossings.obj Top_Level_Simulation_66cd9431_1_logging.obj Top_Level_Simulation_66cd9431_1_geometries.obj Top_Level_Simulation_66cd9431_1_gateway.obj Top_Level_Simulation_66cd9431_3_ds.obj Top_Level_Simulation_66cd9431_3_ds_duf.obj Top_Level_Simulation_66cd9431_3_ds_dxf.obj Top_Level_Simulation_66cd9431_3_ds_f.obj Top_Level_Simulation_66cd9431_3.obj Top_Level_Simulation_66cd9431_3_gateway.obj Top_Level_Simulation_66cd9431_2_ds.obj Top_Level_Simulation_66cd9431_2_ds_duf.obj Top_Level_Simulation_66cd9431_2_ds_dxf.obj Top_Level_Simulation_66cd9431_2_ds_f.obj Top_Level_Simulation_66cd9431_2.obj Top_Level_Simulation_66cd9431_2_gateway.obj rt_backsubrr_dbl.obj rt_forwardsubrr_dbl.obj rt_lu_real.obj rt_matrixlib_dbl.obj Top_Level_Simulation.obj Top_Level_Simulation_capi.obj Top_Level_Simulation_data.obj Top_Level_Simulation_tgtconn.obj rtGetInf.obj rtGetNaN.obj rt_nonfinite.obj rt_zcfcn.obj raccel_main.obj raccel_sup.obj raccel_mat.obj simulink_solver_api.obj raccel_utils.obj common_utils.obj ext_svr.obj updown.obj ext_work.obj rtiostream_interface.obj rtiostream_tcpip.obj rtiostream_utils.obj

ALL_OBJS = $(OBJS)

###########################################################################
## PREBUILT OBJECT FILES
###########################################################################

PREBUILT_OBJS = 

###########################################################################
## LIBRARIES
###########################################################################

LIBS = $(MATLAB_ROOT)/extern/physmod/win64/ssc_sli/lib/ssc_sli_mingw64.lib $(MATLAB_ROOT)/extern/physmod/win64/sm_ssci/lib/sm_ssci_mingw64.lib $(MATLAB_ROOT)/extern/physmod/win64/ssc_core/lib/ssc_core_mingw64.lib $(MATLAB_ROOT)/extern/physmod/win64/ssc_st/lib/ssc_st_mingw64.lib $(MATLAB_ROOT)/extern/physmod/win64/mc/lib/mc_mingw64.lib $(MATLAB_ROOT)/extern/physmod/win64/sm/lib/sm_mingw64.lib $(MATLAB_ROOT)/extern/physmod/win64/pm_math/lib/pm_math_mingw64.lib $(MATLAB_ROOT)/extern/physmod/win64/ex/lib/ex_mingw64.lib $(MATLAB_ROOT)/extern/physmod/win64/pm/lib/pm_mingw64.lib

###########################################################################
## SYSTEM LIBRARIES
###########################################################################

SYSTEM_LIBS =  -L"$(MATLAB_ROOT)/extern/lib/win64/mingw64" -llibmwipp -llibut -llibmx -llibmex -llibmat -llibmwmathutil -llibmwslsa_sim -llibmwslexec_simbridge -llibmwsl_fileio -llibmwsigstream -llibmwsl_AsyncioQueue -llibmwsl_services -llibmwsdi_raccel -llibmwi18n -llibmwcoder_target_services -llibmwcoder_ParamTuningTgtAppSvc -llibmwslpointerutil -llibmwsl_simtarget_instrumentation -llibfixedpoint -llibmwslexec_simlog -llibmwstringutil

###########################################################################
## ADDITIONAL TOOLCHAIN FLAGS
###########################################################################

#---------------
# C Compiler
#---------------

CFLAGS_ = -mcmodel=medium
CFLAGS_OPTS = -fopenmp
CFLAGS_TFL = -msse2
CFLAGS_BASIC = $(DEFINES) $(INCLUDES) @$(COMPILER_COMMAND_FILE)

CFLAGS += $(CFLAGS_) $(CFLAGS_OPTS) $(CFLAGS_TFL) $(CFLAGS_BASIC)

#-----------------
# C++ Compiler
#-----------------

CPPFLAGS_ = -mcmodel=medium
CPPFLAGS_OPTS = -fopenmp
CPPFLAGS_TFL = -msse2
CPPFLAGS_BASIC = $(DEFINES) $(INCLUDES) @$(COMPILER_COMMAND_FILE)

CPPFLAGS += $(CPPFLAGS_) $(CPPFLAGS_OPTS) $(CPPFLAGS_TFL) $(CPPFLAGS_BASIC)

#---------------
# C++ Linker
#---------------

CPP_LDFLAGS_ = -fopenmp

CPP_LDFLAGS += $(CPP_LDFLAGS_)

#------------------------------
# C++ Shared Library Linker
#------------------------------

CPP_SHAREDLIB_LDFLAGS_ = -fopenmp

CPP_SHAREDLIB_LDFLAGS += $(CPP_SHAREDLIB_LDFLAGS_)

#-----------
# Linker
#-----------

LDFLAGS_ = -fopenmp

LDFLAGS += $(LDFLAGS_)

#---------------------
# MEX C++ Compiler
#---------------------

MEX_CPP_Compiler_BASIC =  @$(COMPILER_COMMAND_FILE)

MEX_CPPFLAGS += $(MEX_CPP_Compiler_BASIC)

#-----------------
# MEX Compiler
#-----------------

MEX_Compiler_BASIC =  @$(COMPILER_COMMAND_FILE)

MEX_CFLAGS += $(MEX_Compiler_BASIC)

#--------------------------
# Shared Library Linker
#--------------------------

SHAREDLIB_LDFLAGS_ = -fopenmp

SHAREDLIB_LDFLAGS += $(SHAREDLIB_LDFLAGS_)

###########################################################################
## INLINED COMMANDS
###########################################################################


MINGW_C_STANDARD_OPTS = $(C_STANDARD_OPTS)


###########################################################################
## PHONY TARGETS
###########################################################################

.PHONY : all build buildobj clean info prebuild download execute


all : build
	@echo "### Successfully generated all binary outputs."


build : prebuild $(PRODUCT)


buildobj : prebuild $(OBJS) $(PREBUILT_OBJS) $(LIBS)
	@echo "### Successfully generated all binary outputs."


prebuild : 


download : $(PRODUCT)


execute : download
	@echo "### Invoking postbuild tool "Execute" ..."
	$(EXECUTE) $(EXECUTE_FLAGS)
	@echo "### Done invoking postbuild tool."


###########################################################################
## FINAL TARGET
###########################################################################

#-------------------------------------------
# Create a standalone executable            
#-------------------------------------------

$(PRODUCT) : $(OBJS) $(PREBUILT_OBJS) $(LIBS)
	@echo "### Creating standalone executable "$(PRODUCT)" ..."
	$(CPP_LD) $(CPP_LDFLAGS) -o $(PRODUCT) @$(CMD_FILE) -Wl,--start-group $(LIBS) -Wl,--end-group $(SYSTEM_LIBS) $(TOOLCHAIN_LIBS)
	@echo "### Created: $(PRODUCT)"


###########################################################################
## INTERMEDIATE TARGETS
###########################################################################

#---------------------
# SOURCE-TO-OBJECT
#---------------------

%.obj : %.c
	$(CC) $(CFLAGS) -o "$@" "$<"


%.obj : %.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.obj : $(RELATIVE_PATH_TO_ANCHOR)/%.c
	$(CC) $(CFLAGS) -o "$@" "$<"


%.obj : $(RELATIVE_PATH_TO_ANCHOR)/%.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.obj : $(MATLAB_ROOT)/extern/physmod/win64/ex/src/%.c
	$(CC) $(CFLAGS) -o "$@" "$<"


%.obj : $(MATLAB_ROOT)/extern/physmod/win64/ex/src/%.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.obj : $(MATLAB_ROOT)/extern/physmod/win64/mc/src/%.c
	$(CC) $(CFLAGS) -o "$@" "$<"


%.obj : $(MATLAB_ROOT)/extern/physmod/win64/mc/src/%.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.obj : $(MATLAB_ROOT)/extern/physmod/win64/pm/src/%.c
	$(CC) $(CFLAGS) -o "$@" "$<"


%.obj : $(MATLAB_ROOT)/extern/physmod/win64/pm/src/%.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.obj : $(MATLAB_ROOT)/extern/physmod/win64/pm_math/src/%.c
	$(CC) $(CFLAGS) -o "$@" "$<"


%.obj : $(MATLAB_ROOT)/extern/physmod/win64/pm_math/src/%.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.obj : $(MATLAB_ROOT)/extern/physmod/win64/sm/src/%.c
	$(CC) $(CFLAGS) -o "$@" "$<"


%.obj : $(MATLAB_ROOT)/extern/physmod/win64/sm/src/%.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.obj : $(MATLAB_ROOT)/extern/physmod/win64/sm_ssci/src/%.c
	$(CC) $(CFLAGS) -o "$@" "$<"


%.obj : $(MATLAB_ROOT)/extern/physmod/win64/sm_ssci/src/%.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.obj : $(MATLAB_ROOT)/extern/physmod/win64/ssc_core/src/%.c
	$(CC) $(CFLAGS) -o "$@" "$<"


%.obj : $(MATLAB_ROOT)/extern/physmod/win64/ssc_core/src/%.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.obj : $(MATLAB_ROOT)/extern/physmod/win64/ssc_sli/src/%.c
	$(CC) $(CFLAGS) -o "$@" "$<"


%.obj : $(MATLAB_ROOT)/extern/physmod/win64/ssc_sli/src/%.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.obj : $(MATLAB_ROOT)/extern/physmod/win64/ssc_st/src/%.c
	$(CC) $(CFLAGS) -o "$@" "$<"


%.obj : $(MATLAB_ROOT)/extern/physmod/win64/ssc_st/src/%.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.obj : $(START_DIR)/%.c
	$(CC) $(CFLAGS) -o "$@" "$<"


%.obj : $(START_DIR)/%.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/shared/robotics/externalDependency/libccd/src/%.c
	$(CC) $(CFLAGS) -o "$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/shared/robotics/externalDependency/libccd/src/%.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/shared/robotics/robotcore/builtins/libsrc/collisioncodegen/%.c
	$(CC) $(CFLAGS) -o "$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/shared/robotics/robotcore/builtins/libsrc/collisioncodegen/%.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.obj : $(START_DIR)/slprj/raccel/Top_Level_Simulation/%.c
	$(CC) $(CFLAGS) -o "$@" "$<"


%.obj : $(START_DIR)/slprj/raccel/Top_Level_Simulation/%.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.obj : $(MATLAB_ROOT)/rtw/c/src/%.c
	$(CC) $(CFLAGS) -o "$@" "$<"


%.obj : $(MATLAB_ROOT)/rtw/c/src/%.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.obj : $(MATLAB_ROOT)/simulink/src/%.c
	$(CC) $(CFLAGS) -o "$@" "$<"


%.obj : $(MATLAB_ROOT)/simulink/src/%.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.obj : $(MATLAB_ROOT)/rtw/c/src/ext_mode/common/%.c
	$(CC) $(CFLAGS) -o "$@" "$<"


%.obj : $(MATLAB_ROOT)/rtw/c/src/ext_mode/common/%.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/coder/rtiostream/src/rtiostreamtcpip/%.c
	$(CC) $(CFLAGS) -o "$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/coder/rtiostream/src/rtiostreamtcpip/%.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/coder/rtiostream/src/utils/%.c
	$(CC) $(CFLAGS) -o "$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/coder/rtiostream/src/utils/%.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


ccd_ccd.obj : $(MATLAB_ROOT)/toolbox/shared/robotics/externalDependency/libccd/src/ccd_ccd.c
	$(CC) $(CFLAGS) -o "$@" "$<"


ccd_mpr.obj : $(MATLAB_ROOT)/toolbox/shared/robotics/externalDependency/libccd/src/ccd_mpr.c
	$(CC) $(CFLAGS) -o "$@" "$<"


ccd_polytope.obj : $(MATLAB_ROOT)/toolbox/shared/robotics/externalDependency/libccd/src/ccd_polytope.c
	$(CC) $(CFLAGS) -o "$@" "$<"


ccd_vec3.obj : $(MATLAB_ROOT)/toolbox/shared/robotics/externalDependency/libccd/src/ccd_vec3.c
	$(CC) $(CFLAGS) -o "$@" "$<"


collisioncodegen_CollisionGeometry.obj : $(MATLAB_ROOT)/toolbox/shared/robotics/robotcore/builtins/libsrc/collisioncodegen/collisioncodegen_CollisionGeometry.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


collisioncodegen_api.obj : $(MATLAB_ROOT)/toolbox/shared/robotics/robotcore/builtins/libsrc/collisioncodegen/collisioncodegen_api.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


collisioncodegen_ccdExtensions.obj : $(MATLAB_ROOT)/toolbox/shared/robotics/robotcore/builtins/libsrc/collisioncodegen/collisioncodegen_ccdExtensions.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


collisioncodegen_checkCollision.obj : $(MATLAB_ROOT)/toolbox/shared/robotics/robotcore/builtins/libsrc/collisioncodegen/collisioncodegen_checkCollision.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


coder_posix_time.obj : $(MATLAB_ROOT)/toolbox/eml/externalDependency/timefun/coder_posix_time.c
	$(CC) $(CFLAGS) -o "$@" "$<"


Top_Level_Simulation_66cd9431_1.obj : $(START_DIR)/slprj/raccel/Top_Level_Simulation/Top_Level_Simulation_66cd9431_1.c
	$(CC) $(CFLAGS) -o "$@" "$<"


Top_Level_Simulation_66cd9431_1_create.obj : $(START_DIR)/slprj/raccel/Top_Level_Simulation/Top_Level_Simulation_66cd9431_1_create.c
	$(CC) $(CFLAGS) -o "$@" "$<"


Top_Level_Simulation_66cd9431_1_setParameters.obj : $(START_DIR)/slprj/raccel/Top_Level_Simulation/Top_Level_Simulation_66cd9431_1_setParameters.c
	$(CC) $(CFLAGS) -o "$@" "$<"


Top_Level_Simulation_66cd9431_1_asserts.obj : $(START_DIR)/slprj/raccel/Top_Level_Simulation/Top_Level_Simulation_66cd9431_1_asserts.c
	$(CC) $(CFLAGS) -o "$@" "$<"


Top_Level_Simulation_66cd9431_1_deriv.obj : $(START_DIR)/slprj/raccel/Top_Level_Simulation/Top_Level_Simulation_66cd9431_1_deriv.c
	$(CC) $(CFLAGS) -o "$@" "$<"


Top_Level_Simulation_66cd9431_1_checkDynamics.obj : $(START_DIR)/slprj/raccel/Top_Level_Simulation/Top_Level_Simulation_66cd9431_1_checkDynamics.c
	$(CC) $(CFLAGS) -o "$@" "$<"


Top_Level_Simulation_66cd9431_1_compOutputs.obj : $(START_DIR)/slprj/raccel/Top_Level_Simulation/Top_Level_Simulation_66cd9431_1_compOutputs.c
	$(CC) $(CFLAGS) -o "$@" "$<"


Top_Level_Simulation_66cd9431_1_asm_delegate.obj : $(START_DIR)/slprj/raccel/Top_Level_Simulation/Top_Level_Simulation_66cd9431_1_asm_delegate.c
	$(CC) $(CFLAGS) -o "$@" "$<"


Top_Level_Simulation_66cd9431_1_sim_delegate.obj : $(START_DIR)/slprj/raccel/Top_Level_Simulation/Top_Level_Simulation_66cd9431_1_sim_delegate.c
	$(CC) $(CFLAGS) -o "$@" "$<"


Top_Level_Simulation_66cd9431_1_mode_zero_crossings.obj : $(START_DIR)/slprj/raccel/Top_Level_Simulation/Top_Level_Simulation_66cd9431_1_mode_zero_crossings.c
	$(CC) $(CFLAGS) -o "$@" "$<"


Top_Level_Simulation_66cd9431_1_logging.obj : $(START_DIR)/slprj/raccel/Top_Level_Simulation/Top_Level_Simulation_66cd9431_1_logging.c
	$(CC) $(CFLAGS) -o "$@" "$<"


Top_Level_Simulation_66cd9431_1_geometries.obj : $(START_DIR)/slprj/raccel/Top_Level_Simulation/Top_Level_Simulation_66cd9431_1_geometries.c
	$(CC) $(CFLAGS) -o "$@" "$<"


Top_Level_Simulation_66cd9431_1_gateway.obj : $(START_DIR)/slprj/raccel/Top_Level_Simulation/Top_Level_Simulation_66cd9431_1_gateway.c
	$(CC) $(CFLAGS) -o "$@" "$<"


Top_Level_Simulation_66cd9431_3_ds.obj : $(START_DIR)/slprj/raccel/Top_Level_Simulation/Top_Level_Simulation_66cd9431_3_ds.c
	$(CC) $(CFLAGS) -o "$@" "$<"


Top_Level_Simulation_66cd9431_3_ds_duf.obj : $(START_DIR)/slprj/raccel/Top_Level_Simulation/Top_Level_Simulation_66cd9431_3_ds_duf.c
	$(CC) $(CFLAGS) -o "$@" "$<"


Top_Level_Simulation_66cd9431_3_ds_dxf.obj : $(START_DIR)/slprj/raccel/Top_Level_Simulation/Top_Level_Simulation_66cd9431_3_ds_dxf.c
	$(CC) $(CFLAGS) -o "$@" "$<"


Top_Level_Simulation_66cd9431_3_ds_f.obj : $(START_DIR)/slprj/raccel/Top_Level_Simulation/Top_Level_Simulation_66cd9431_3_ds_f.c
	$(CC) $(CFLAGS) -o "$@" "$<"


Top_Level_Simulation_66cd9431_3.obj : $(START_DIR)/slprj/raccel/Top_Level_Simulation/Top_Level_Simulation_66cd9431_3.c
	$(CC) $(CFLAGS) -o "$@" "$<"


Top_Level_Simulation_66cd9431_3_gateway.obj : $(START_DIR)/slprj/raccel/Top_Level_Simulation/Top_Level_Simulation_66cd9431_3_gateway.c
	$(CC) $(CFLAGS) -o "$@" "$<"


Top_Level_Simulation_66cd9431_2_ds.obj : $(START_DIR)/slprj/raccel/Top_Level_Simulation/Top_Level_Simulation_66cd9431_2_ds.c
	$(CC) $(CFLAGS) -o "$@" "$<"


Top_Level_Simulation_66cd9431_2_ds_duf.obj : $(START_DIR)/slprj/raccel/Top_Level_Simulation/Top_Level_Simulation_66cd9431_2_ds_duf.c
	$(CC) $(CFLAGS) -o "$@" "$<"


Top_Level_Simulation_66cd9431_2_ds_dxf.obj : $(START_DIR)/slprj/raccel/Top_Level_Simulation/Top_Level_Simulation_66cd9431_2_ds_dxf.c
	$(CC) $(CFLAGS) -o "$@" "$<"


Top_Level_Simulation_66cd9431_2_ds_f.obj : $(START_DIR)/slprj/raccel/Top_Level_Simulation/Top_Level_Simulation_66cd9431_2_ds_f.c
	$(CC) $(CFLAGS) -o "$@" "$<"


Top_Level_Simulation_66cd9431_2.obj : $(START_DIR)/slprj/raccel/Top_Level_Simulation/Top_Level_Simulation_66cd9431_2.c
	$(CC) $(CFLAGS) -o "$@" "$<"


Top_Level_Simulation_66cd9431_2_gateway.obj : $(START_DIR)/slprj/raccel/Top_Level_Simulation/Top_Level_Simulation_66cd9431_2_gateway.c
	$(CC) $(CFLAGS) -o "$@" "$<"


rt_backsubrr_dbl.obj : $(START_DIR)/slprj/raccel/Top_Level_Simulation/rt_backsubrr_dbl.c
	$(CC) $(CFLAGS) -o "$@" "$<"


rt_forwardsubrr_dbl.obj : $(START_DIR)/slprj/raccel/Top_Level_Simulation/rt_forwardsubrr_dbl.c
	$(CC) $(CFLAGS) -o "$@" "$<"


rt_lu_real.obj : $(START_DIR)/slprj/raccel/Top_Level_Simulation/rt_lu_real.c
	$(CC) $(CFLAGS) -o "$@" "$<"


rt_matrixlib_dbl.obj : $(START_DIR)/slprj/raccel/Top_Level_Simulation/rt_matrixlib_dbl.c
	$(CC) $(CFLAGS) -o "$@" "$<"


Top_Level_Simulation.obj : $(START_DIR)/slprj/raccel/Top_Level_Simulation/Top_Level_Simulation.c
	$(CC) $(CFLAGS) -o "$@" "$<"


Top_Level_Simulation_capi.obj : $(START_DIR)/slprj/raccel/Top_Level_Simulation/Top_Level_Simulation_capi.c
	$(CC) $(CFLAGS) -o "$@" "$<"


Top_Level_Simulation_data.obj : $(START_DIR)/slprj/raccel/Top_Level_Simulation/Top_Level_Simulation_data.c
	$(CC) $(CFLAGS) -o "$@" "$<"


Top_Level_Simulation_tgtconn.obj : $(START_DIR)/slprj/raccel/Top_Level_Simulation/Top_Level_Simulation_tgtconn.c
	$(CC) $(CFLAGS) -o "$@" "$<"


rtGetInf.obj : $(START_DIR)/slprj/raccel/Top_Level_Simulation/rtGetInf.c
	$(CC) $(CFLAGS) -o "$@" "$<"


rtGetNaN.obj : $(START_DIR)/slprj/raccel/Top_Level_Simulation/rtGetNaN.c
	$(CC) $(CFLAGS) -o "$@" "$<"


rt_nonfinite.obj : $(START_DIR)/slprj/raccel/Top_Level_Simulation/rt_nonfinite.c
	$(CC) $(CFLAGS) -o "$@" "$<"


rt_zcfcn.obj : $(START_DIR)/slprj/raccel/Top_Level_Simulation/rt_zcfcn.c
	$(CC) $(CFLAGS) -o "$@" "$<"


raccel_main.obj : $(MATLAB_ROOT)/rtw/c/raccel/raccel_main.c
	$(CC) $(CFLAGS) -o "$@" "$<"


raccel_sup.obj : $(MATLAB_ROOT)/rtw/c/raccel/raccel_sup.c
	$(CC) $(CFLAGS) -o "$@" "$<"


raccel_mat.obj : $(MATLAB_ROOT)/rtw/c/raccel/raccel_mat.c
	$(CC) $(CFLAGS) -o "$@" "$<"


simulink_solver_api.obj : $(MATLAB_ROOT)/simulink/include/simulink_solver_api.c
	$(CC) $(CFLAGS) -o "$@" "$<"


raccel_utils.obj : $(MATLAB_ROOT)/rtw/c/src/rapid/raccel_utils.c
	$(CC) $(CFLAGS) -o "$@" "$<"


common_utils.obj : $(MATLAB_ROOT)/rtw/c/src/rapid/common_utils.c
	$(CC) $(CFLAGS) -o "$@" "$<"


ext_svr.obj : $(MATLAB_ROOT)/rtw/c/src/ext_mode/common/ext_svr.c
	$(CC) $(CFLAGS) -o "$@" "$<"


updown.obj : $(MATLAB_ROOT)/rtw/c/src/ext_mode/common/updown.c
	$(CC) $(CFLAGS) -o "$@" "$<"


ext_work.obj : $(MATLAB_ROOT)/rtw/c/src/ext_mode/common/ext_work.c
	$(CC) $(CFLAGS) -o "$@" "$<"


rtiostream_interface.obj : $(MATLAB_ROOT)/rtw/c/src/ext_mode/common/rtiostream_interface.c
	$(CC) $(CFLAGS) -o "$@" "$<"


rtiostream_tcpip.obj : $(MATLAB_ROOT)/toolbox/coder/rtiostream/src/rtiostreamtcpip/rtiostream_tcpip.c
	$(CC) $(CFLAGS) -o "$@" "$<"


rtiostream_utils.obj : $(MATLAB_ROOT)/toolbox/coder/rtiostream/src/utils/rtiostream_utils.c
	$(CC) $(CFLAGS) -o "$@" "$<"


#------------------------
# BUILDABLE LIBRARIES
#------------------------

$(MATLAB_ROOT)/extern/physmod/win64/ssc_sli/lib/ssc_sli_mingw64.lib : $(LIBSSC_SLI_MINGW64_OBJS)
	@echo "### Creating static library $@ ..."
	$(AR) $(ARFLAGS)  $@ $(LIBSSC_SLI_MINGW64_OBJS)


$(MATLAB_ROOT)/extern/physmod/win64/sm_ssci/lib/sm_ssci_mingw64.lib : $(LIBSM_SSCI_MINGW64_OBJS)
	@echo "### Creating static library $@ ..."
	$(AR) $(ARFLAGS)  $@ $(LIBSM_SSCI_MINGW64_OBJS)


$(MATLAB_ROOT)/extern/physmod/win64/ssc_core/lib/ssc_core_mingw64.lib : $(LIBSSC_CORE_MINGW64_OBJS)
	@echo "### Creating static library $@ ..."
	$(AR) $(ARFLAGS)  $@ $(LIBSSC_CORE_MINGW64_OBJS)


$(MATLAB_ROOT)/extern/physmod/win64/ssc_st/lib/ssc_st_mingw64.lib : $(LIBSSC_ST_MINGW64_OBJS)
	@echo "### Creating static library $@ ..."
	$(AR) $(ARFLAGS)  $@ $(LIBSSC_ST_MINGW64_OBJS)


$(MATLAB_ROOT)/extern/physmod/win64/mc/lib/mc_mingw64.lib : $(LIBMC_MINGW64_OBJS)
	@echo "### Creating static library $@ ..."
	$(AR) $(ARFLAGS)  $@ $(LIBMC_MINGW64_OBJS)


$(MATLAB_ROOT)/extern/physmod/win64/sm/lib/sm_mingw64.lib : $(LIBSM_MINGW64_OBJS)
	@echo "### Creating static library $@ ..."
	$(AR) $(ARFLAGS)  $@ $(LIBSM_MINGW64_OBJS)


$(MATLAB_ROOT)/extern/physmod/win64/pm_math/lib/pm_math_mingw64.lib : $(LIBPM_MATH_MINGW64_OBJS)
	@echo "### Creating static library $@ ..."
	$(AR) $(ARFLAGS)  $@ $(LIBPM_MATH_MINGW64_OBJS)


$(MATLAB_ROOT)/extern/physmod/win64/ex/lib/ex_mingw64.lib : $(LIBEX_MINGW64_OBJS)
	@echo "### Creating static library $@ ..."
	$(AR) $(ARFLAGS)  $@ $(LIBEX_MINGW64_OBJS)


$(MATLAB_ROOT)/extern/physmod/win64/pm/lib/pm_mingw64.lib : $(LIBPM_MINGW64_OBJS)
	@echo "### Creating static library $@ ..."
	$(AR) $(ARFLAGS)  $@ $(LIBPM_MINGW64_OBJS)


###########################################################################
## DEPENDENCIES
###########################################################################

$(ALL_OBJS) : rtw_proj.tmw $(COMPILER_COMMAND_FILE) $(MAKEFILE)


###########################################################################
## MISCELLANEOUS TARGETS
###########################################################################

info : 
	@echo "### PRODUCT = $(PRODUCT)"
	@echo "### PRODUCT_TYPE = $(PRODUCT_TYPE)"
	@echo "### BUILD_TYPE = $(BUILD_TYPE)"
	@echo "### INCLUDES = $(INCLUDES)"
	@echo "### DEFINES = $(DEFINES)"
	@echo "### ALL_SRCS = $(ALL_SRCS)"
	@echo "### ALL_OBJS = $(ALL_OBJS)"
	@echo "### LIBS = $(LIBS)"
	@echo "### MODELREF_LIBS = $(MODELREF_LIBS)"
	@echo "### SYSTEM_LIBS = $(SYSTEM_LIBS)"
	@echo "### TOOLCHAIN_LIBS = $(TOOLCHAIN_LIBS)"
	@echo "### CFLAGS = $(CFLAGS)"
	@echo "### LDFLAGS = $(LDFLAGS)"
	@echo "### SHAREDLIB_LDFLAGS = $(SHAREDLIB_LDFLAGS)"
	@echo "### CPPFLAGS = $(CPPFLAGS)"
	@echo "### CPP_LDFLAGS = $(CPP_LDFLAGS)"
	@echo "### CPP_SHAREDLIB_LDFLAGS = $(CPP_SHAREDLIB_LDFLAGS)"
	@echo "### ARFLAGS = $(ARFLAGS)"
	@echo "### MEX_CFLAGS = $(MEX_CFLAGS)"
	@echo "### MEX_CPPFLAGS = $(MEX_CPPFLAGS)"
	@echo "### MEX_LDFLAGS = $(MEX_LDFLAGS)"
	@echo "### MEX_CPPLDFLAGS = $(MEX_CPPLDFLAGS)"
	@echo "### DOWNLOAD_FLAGS = $(DOWNLOAD_FLAGS)"
	@echo "### EXECUTE_FLAGS = $(EXECUTE_FLAGS)"
	@echo "### MAKE_FLAGS = $(MAKE_FLAGS)"


clean : 
	$(ECHO) "### Deleting all derived files ..."
	$(RM) $(subst /,\,$(PRODUCT))
	$(RM) $(subst /,\,$(ALL_OBJS))
	$(ECHO) "### Deleted all derived files."


