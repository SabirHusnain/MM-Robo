/* Include files */

#include "modelInterface.h"
#include "m_dnGfh1DX0a11xSfGnyzF5G.h"
#include <emmintrin.h>
#include <string.h>
#include "mwmathutil.h"

/* Type Definitions */

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */
static emlrtRSInfo emlrtRSI = { 62,    /* lineNo */
  "CoordinateTransformationConversion",/* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\robotics\\robotslcore\\+robotics\\+slcore\\+internal\\+block\\CoordinateTran"
  "sformationConversion.m"             /* pathName */
};

static emlrtRSInfo b_emlrtRSI = { 1,   /* lineNo */
  "System",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\system\\coder\\+matlab\\+system\\+coder\\System.p"/* pathName */
};

static emlrtRSInfo c_emlrtRSI = { 1,   /* lineNo */
  "SystemProp",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\system\\coder\\+matlab\\+system\\+coder\\SystemProp.p"/* pathName */
};

static emlrtRSInfo d_emlrtRSI = { 1,   /* lineNo */
  "SystemCore",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\system\\coder\\+matlab\\+system\\+coder\\SystemCore.p"/* pathName */
};

static emlrtRSInfo e_emlrtRSI = { 1,   /* lineNo */
  "InternalAccess",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\robotics\\robotslcore\\+robotics\\+slcore\\+internal\\InternalAccess.m"/* pathName */
};

static emlrtRSInfo f_emlrtRSI = { 10,  /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo g_emlrtRSI = { 27,  /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo h_emlrtRSI = { 191, /* lineNo */
  "CoordinateTransformationConversion",/* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\robotics\\robotslcore\\+robotics\\+slcore\\+internal\\+block\\CoordinateTran"
  "sformationConversion.m"             /* pathName */
};

static emlrtRSInfo i_emlrtRSI = { 193, /* lineNo */
  "CoordinateTransformationConversion",/* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\robotics\\robotslcore\\+robotics\\+slcore\\+internal\\+block\\CoordinateTran"
  "sformationConversion.m"             /* pathName */
};

static emlrtRSInfo j_emlrtRSI = { 158, /* lineNo */
  "Util",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\robotics\\robotslcore\\+robotics\\+slcore\\+internal\\+xform\\Util.m"/* pathName */
};

static emlrtRSInfo k_emlrtRSI = { 93,  /* lineNo */
  "validateattributes",                /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\lang\\validateattributes.m"/* pathName */
};

static emlrtRSInfo l_emlrtRSI = { 29,  /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo m_emlrtRSI = { 34,  /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo n_emlrtRSI = { 76,  /* lineNo */
  "CoordinateTransformationConversion",/* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\robotics\\robotslcore\\+robotics\\+slcore\\+internal\\+block\\CoordinateTran"
  "sformationConversion.m"             /* pathName */
};

static emlrtRSInfo o_emlrtRSI = { 308, /* lineNo */
  "CoordinateTransformationConversion",/* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\robotics\\robotslcore\\+robotics\\+slcore\\+internal\\+block\\CoordinateTran"
  "sformationConversion.m"             /* pathName */
};

static emlrtRSInfo p_emlrtRSI = { 430, /* lineNo */
  "CoordinateTransformationConversion",/* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\robotics\\robotslcore\\+robotics\\+slcore\\+internal\\+block\\CoordinateTran"
  "sformationConversion.m"             /* pathName */
};

static emlrtRSInfo q_emlrtRSI = { 44,  /* lineNo */
  "eul2tform",                         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\robotics\\robotutils\\eul2tform.m"/* pathName */
};

static emlrtRSInfo r_emlrtRSI = { 26,  /* lineNo */
  "eul2tform",                         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\robotics\\robotutils\\+robotics\\+internal\\eul2tform.m"/* pathName */
};

static emlrtRSInfo s_emlrtRSI = { 48,  /* lineNo */
  "IKBlock",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotsimulink\\robotslmanip\\+robotics\\+slmanip\\+internal\\+block\\IKBlo"
  "ck.m"                               /* pathName */
};

static emlrtRSInfo t_emlrtRSI = { 12,  /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo u_emlrtRSI = { 31,  /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo v_emlrtRSI = { 68,  /* lineNo */
  "IKBlock",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotsimulink\\robotslmanip\\+robotics\\+slmanip\\+internal\\+block\\IKBlo"
  "ck.m"                               /* pathName */
};

static emlrtRSInfo w_emlrtRSI = { 69,  /* lineNo */
  "IKBlock",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotsimulink\\robotslmanip\\+robotics\\+slmanip\\+internal\\+block\\IKBlo"
  "ck.m"                               /* pathName */
};

static emlrtRSInfo x_emlrtRSI = { 1,   /* lineNo */
  "InternalAccess",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\InternalAccess.m"/* pathName */
};

static emlrtRSInfo y_emlrtRSI = { 111, /* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo ab_emlrtRSI = { 194,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo bb_emlrtRSI = { 184,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo cb_emlrtRSI = { 187,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo db_emlrtRSI = { 203,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo eb_emlrtRSI = { 1318,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo fb_emlrtRSI = { 71, /* lineNo */
  "RigidBody",                         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBody.m"/* pathName */
};

static emlrtRSInfo gb_emlrtRSI = { 96, /* lineNo */
  "RigidBody",                         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBody.m"/* pathName */
};

static emlrtRSInfo hb_emlrtRSI = { 106,/* lineNo */
  "RigidBody",                         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBody.m"/* pathName */
};

static emlrtRSInfo ib_emlrtRSI = { 140,/* lineNo */
  "rigidBodyJoint",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pathName */
};

static emlrtRSInfo jb_emlrtRSI = { 1,  /* lineNo */
  "InternalAccess",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\robotics\\robotutils\\+robotics\\+core\\+internal\\InternalAccess.m"/* pathName */
};

static emlrtRSInfo kb_emlrtRSI = { 27, /* lineNo */
  "CollisionSet",                      /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\CollisionSet.m"/* pathName */
};

static emlrtRSInfo lb_emlrtRSI = { 46, /* lineNo */
  "CollisionSet",                      /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\CollisionSet.m"/* pathName */
};

static emlrtRSInfo mb_emlrtRSI = { 145,/* lineNo */
  "RigidBody",                         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBody.m"/* pathName */
};

static emlrtRSInfo nb_emlrtRSI = { 163,/* lineNo */
  "RigidBody",                         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBody.m"/* pathName */
};

static emlrtRSInfo ob_emlrtRSI = { 158,/* lineNo */
  "RigidBody",                         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBody.m"/* pathName */
};

static emlrtRSInfo pb_emlrtRSI = { 147,/* lineNo */
  "rigidBodyJoint",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pathName */
};

static emlrtRSInfo qb_emlrtRSI = { 210,/* lineNo */
  "inverseKinematics",                 /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\inverseKinematics.m"/* pathName */
};

static emlrtRSInfo rb_emlrtRSI = { 251,/* lineNo */
  "inverseKinematics",                 /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\inverseKinematics.m"/* pathName */
};

static emlrtRSInfo sb_emlrtRSI = { 1,  /* lineNo */
  "ProcessConstructorArguments",       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\system\\coder\\+matlab\\+system\\+coder\\ProcessConstructorArguments.p"/* pathName */
};

static emlrtRSInfo tb_emlrtRSI = { 472,/* lineNo */
  "inverseKinematics",                 /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\inverseKinematics.m"/* pathName */
};

static emlrtRSInfo ub_emlrtRSI = { 539,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo vb_emlrtRSI = { 540,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo wb_emlrtRSI = { 545,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo xb_emlrtRSI = { 558,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo yb_emlrtRSI = { 544,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo ac_emlrtRSI = { 167,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo bc_emlrtRSI = { 163,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo cc_emlrtRSI = { 160,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo dc_emlrtRSI = { 169,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo ec_emlrtRSI = { 47, /* lineNo */
  "VisualizationInfo",                 /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\VisualizationInfo.m"/* pathName */
};

static emlrtRSInfo fc_emlrtRSI = { 69, /* lineNo */
  "VisualizationInfo",                 /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\VisualizationInfo.m"/* pathName */
};

static emlrtRSInfo gc_emlrtRSI = { 81, /* lineNo */
  "randi",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\randfun\\randi.m"/* pathName */
};

static emlrtRSInfo hc_emlrtRSI = { 107,/* lineNo */
  "rand",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\randfun\\rand.m"/* pathName */
};

static emlrtRSInfo ic_emlrtRSI = { 45, /* lineNo */
  "eml_rand",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\randfun\\private\\eml_rand.m"/* pathName */
};

static emlrtRSInfo jc_emlrtRSI = { 23, /* lineNo */
  "eml_rand_mt19937ar_stateful",       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\randfun\\private\\eml_rand_mt19937ar_stateful.m"/* pathName */
};

static emlrtRSInfo kc_emlrtRSI = { 51, /* lineNo */
  "eml_rand_mt19937ar",                /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\randfun\\eml_rand_mt19937ar.m"/* pathName */
};

static emlrtRSInfo lc_emlrtRSI = { 47, /* lineNo */
  "FastVisualizationHelper",           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\FastVisualizationHelper.m"/* pathName */
};

static emlrtRSInfo mc_emlrtRSI = { 1328,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo nc_emlrtRSI = { 1347,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo oc_emlrtRSI = { 2226,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo pc_emlrtRSI = { 2231,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo qc_emlrtRSI = { 2234,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo rc_emlrtRSI = { 2242,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo sc_emlrtRSI = { 1367,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo tc_emlrtRSI = { 1370,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo uc_emlrtRSI = { 1376,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo vc_emlrtRSI = { 242,/* lineNo */
  "CollisionSet",                      /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\CollisionSet.m"/* pathName */
};

static emlrtRSInfo wc_emlrtRSI = { 246,/* lineNo */
  "CollisionSet",                      /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\CollisionSet.m"/* pathName */
};

static emlrtRSInfo xc_emlrtRSI = { 261,/* lineNo */
  "CollisionGeometry",                 /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\CollisionGeometry.m"/* pathName */
};

static emlrtRSInfo yc_emlrtRSI = { 265,/* lineNo */
  "CollisionGeometry",                 /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\CollisionGeometry.m"/* pathName */
};

static emlrtRSInfo ad_emlrtRSI = { 2293,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo bd_emlrtRSI = { 232,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo cd_emlrtRSI = { 236,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo dd_emlrtRSI = { 240,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo ed_emlrtRSI = { 243,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo fd_emlrtRSI = { 245,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo gd_emlrtRSI = { 285,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo hd_emlrtRSI = { 287,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo id_emlrtRSI = { 288,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo jd_emlrtRSI = { 295,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo kd_emlrtRSI = { 296,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo ld_emlrtRSI = { 256,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo md_emlrtRSI = { 1661,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo nd_emlrtRSI = { 1665,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo od_emlrtRSI = { 447,/* lineNo */
  "RigidBody",                         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBody.m"/* pathName */
};

static emlrtRSInfo pd_emlrtRSI = { 1390,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo qd_emlrtRSI = { 1394,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo rd_emlrtRSI = { 189,/* lineNo */
  "RigidBody",                         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBody.m"/* pathName */
};

static emlrtRSInfo sd_emlrtRSI = { 190,/* lineNo */
  "RigidBody",                         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBody.m"/* pathName */
};

static emlrtRSInfo td_emlrtRSI = { 200,/* lineNo */
  "RigidBody",                         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBody.m"/* pathName */
};

static emlrtRSInfo ud_emlrtRSI = { 88, /* lineNo */
  "RigidBody",                         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBody.m"/* pathName */
};

static emlrtRSInfo vd_emlrtRSI = { 215,/* lineNo */
  "rigidBodyJoint",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pathName */
};

static emlrtRSInfo wd_emlrtRSI = { 360,/* lineNo */
  "rigidBodyJoint",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pathName */
};

static emlrtRSInfo xd_emlrtRSI = { 362,/* lineNo */
  "rigidBodyJoint",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pathName */
};

static emlrtRSInfo yd_emlrtRSI = { 364,/* lineNo */
  "rigidBodyJoint",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pathName */
};

static emlrtRSInfo ae_emlrtRSI = { 365,/* lineNo */
  "rigidBodyJoint",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pathName */
};

static emlrtRSInfo be_emlrtRSI = { 155,/* lineNo */
  "rigidBodyJoint",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pathName */
};

static emlrtRSInfo ce_emlrtRSI = { 74, /* lineNo */
  "validatestring",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\lang\\validatestring.m"/* pathName */
};

static emlrtRSInfo de_emlrtRSI = { 111,/* lineNo */
  "validatestring",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\lang\\validatestring.m"/* pathName */
};

static emlrtRSInfo ee_emlrtRSI = { 164,/* lineNo */
  "validatestring",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\lang\\validatestring.m"/* pathName */
};

static emlrtRSInfo fe_emlrtRSI = { 240,/* lineNo */
  "strcmp",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\strcmp.m"/* pathName */
};

static emlrtRSInfo ge_emlrtRSI = { 241,/* lineNo */
  "strcmp",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\strcmp.m"/* pathName */
};

static emlrtRSInfo he_emlrtRSI = { 242,/* lineNo */
  "strcmp",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\strcmp.m"/* pathName */
};

static emlrtRSInfo ie_emlrtRSI = { 16, /* lineNo */
  "lower",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\strfun\\lower.m"/* pathName */
};

static emlrtRSInfo je_emlrtRSI = { 10, /* lineNo */
  "eml_string_transform",              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\strfun\\eml_string_transform.m"/* pathName */
};

static emlrtRSInfo ke_emlrtRSI = { 227,/* lineNo */
  "rigidBodyJoint",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pathName */
};

static emlrtRSInfo le_emlrtRSI = { 231,/* lineNo */
  "rigidBodyJoint",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pathName */
};

static emlrtRSInfo me_emlrtRSI = { 21, /* lineNo */
  "warning",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\warning.m"/* pathName */
};

static emlrtRSInfo ne_emlrtRSI = { 455,/* lineNo */
  "inverseKinematics",                 /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\inverseKinematics.m"/* pathName */
};

static emlrtRSInfo oe_emlrtRSI = { 1,  /* lineNo */
  "NLPSolverInterface",                /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\robotics\\robotutils\\+robotics\\+core\\+internal\\NLPSolverInterface.m"/* pathName */
};

static emlrtRSInfo pe_emlrtRSI = { 70, /* lineNo */
  "DampedBFGSwGradientProjection",     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\robotics\\robotutils\\+robotics\\+core\\+internal\\DampedBFGSwGradientProjec"
  "tion.m"                             /* pathName */
};

static emlrtRSInfo qe_emlrtRSI = { 112,/* lineNo */
  "DampedBFGSwGradientProjection",     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\robotics\\robotutils\\+robotics\\+core\\+internal\\DampedBFGSwGradientProjec"
  "tion.m"                             /* pathName */
};

static emlrtRSInfo re_emlrtRSI = { 113,/* lineNo */
  "DampedBFGSwGradientProjection",     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\robotics\\robotutils\\+robotics\\+core\\+internal\\DampedBFGSwGradientProjec"
  "tion.m"                             /* pathName */
};

static emlrtRSInfo se_emlrtRSI = { 42, /* lineNo */
  "SystemTimeProvider",                /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\robotics\\robotutils\\+robotics\\+core\\+internal\\SystemTimeProvider.m"/* pathName */
};

static emlrtRSInfo te_emlrtRSI = { 1,  /* lineNo */
  "TimeProvider",                      /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\robotics\\robotutils\\+robotics\\+core\\+internal\\TimeProvider.m"/* pathName */
};

static emlrtRSInfo ue_emlrtRSI = { 362,/* lineNo */
  "inverseKinematics",                 /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\inverseKinematics.m"/* pathName */
};

static emlrtRSInfo ve_emlrtRSI = { 443,/* lineNo */
  "inverseKinematics",                 /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\inverseKinematics.m"/* pathName */
};

static emlrtRSInfo we_emlrtRSI = { 33, /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo xe_emlrtRSI = { 38, /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo ye_emlrtRSI = { 118,/* lineNo */
  "inverseKinematics",                 /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\inverseKinematics.m"/* pathName */
};

static emlrtRSInfo af_emlrtRSI = { 121,/* lineNo */
  "inverseKinematics",                 /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\inverseKinematics.m"/* pathName */
};

static emlrtRSInfo bf_emlrtRSI = { 124,/* lineNo */
  "inverseKinematics",                 /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\inverseKinematics.m"/* pathName */
};

static emlrtRSInfo cf_emlrtRSI = { 508,/* lineNo */
  "inverseKinematics",                 /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\inverseKinematics.m"/* pathName */
};

static emlrtRSInfo df_emlrtRSI = { 511,/* lineNo */
  "inverseKinematics",                 /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\inverseKinematics.m"/* pathName */
};

static emlrtRSInfo ef_emlrtRSI = { 512,/* lineNo */
  "inverseKinematics",                 /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\inverseKinematics.m"/* pathName */
};

static emlrtRSInfo ff_emlrtRSI = { 513,/* lineNo */
  "inverseKinematics",                 /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\inverseKinematics.m"/* pathName */
};

static emlrtRSInfo gf_emlrtRSI = { 514,/* lineNo */
  "inverseKinematics",                 /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\inverseKinematics.m"/* pathName */
};

static emlrtRSInfo hf_emlrtRSI = { 50, /* lineNo */
  "eye",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\elmat\\eye.m"/* pathName */
};

static emlrtRSInfo if_emlrtRSI = { 21, /* lineNo */
  "checkAndSaturateExpandSize",        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\checkAndSaturateExpandSize.m"/* pathName */
};

static emlrtRSInfo jf_emlrtRSI = { 2254,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo kf_emlrtRSI = { 130,/* lineNo */
  "inverseKinematics",                 /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\inverseKinematics.m"/* pathName */
};

static emlrtRSInfo lf_emlrtRSI = { 1,  /* lineNo */
  "IKExtraArgs",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\IKExtraArgs.m"/* pathName */
};

static emlrtRSInfo mf_emlrtRSI = { 158,/* lineNo */
  "inverseKinematics",                 /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\inverseKinematics.m"/* pathName */
};

static emlrtRSInfo nf_emlrtRSI = { 159,/* lineNo */
  "inverseKinematics",                 /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\inverseKinematics.m"/* pathName */
};

static emlrtRSInfo of_emlrtRSI = { 262,/* lineNo */
  "inverseKinematics",                 /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\inverseKinematics.m"/* pathName */
};

static emlrtRSInfo pf_emlrtRSI = { 263,/* lineNo */
  "inverseKinematics",                 /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\inverseKinematics.m"/* pathName */
};

static emlrtRSInfo qf_emlrtRSI = { 265,/* lineNo */
  "inverseKinematics",                 /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\inverseKinematics.m"/* pathName */
};

static emlrtRSInfo rf_emlrtRSI = { 274,/* lineNo */
  "inverseKinematics",                 /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\inverseKinematics.m"/* pathName */
};

static emlrtRSInfo sf_emlrtRSI = { 275,/* lineNo */
  "inverseKinematics",                 /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\inverseKinematics.m"/* pathName */
};

static emlrtRSInfo tf_emlrtRSI = { 279,/* lineNo */
  "inverseKinematics",                 /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\inverseKinematics.m"/* pathName */
};

static emlrtRSInfo uf_emlrtRSI = { 31, /* lineNo */
  "inv",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\matfun\\inv.m"/* pathName */
};

static emlrtRSInfo vf_emlrtRSI = { 42, /* lineNo */
  "inv",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\matfun\\inv.m"/* pathName */
};

static emlrtRSInfo wf_emlrtRSI = { 46, /* lineNo */
  "inv",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\matfun\\inv.m"/* pathName */
};

static emlrtRSInfo xf_emlrtRSI = { 311,/* lineNo */
  "inverseKinematics",                 /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\inverseKinematics.m"/* pathName */
};

static emlrtRSInfo yf_emlrtRSI = { 313,/* lineNo */
  "inverseKinematics",                 /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\inverseKinematics.m"/* pathName */
};

static emlrtRSInfo ag_emlrtRSI = { 319,/* lineNo */
  "inverseKinematics",                 /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\inverseKinematics.m"/* pathName */
};

static emlrtRSInfo bg_emlrtRSI = { 320,/* lineNo */
  "inverseKinematics",                 /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\inverseKinematics.m"/* pathName */
};

static emlrtRSInfo cg_emlrtRSI = { 324,/* lineNo */
  "inverseKinematics",                 /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\inverseKinematics.m"/* pathName */
};

static emlrtRSInfo dg_emlrtRSI = { 1634,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo eg_emlrtRSI = { 1636,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo fg_emlrtRSI = { 1650,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo gg_emlrtRSI = { 39, /* lineNo */
  "find",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"/* pathName */
};

static emlrtRSInfo hg_emlrtRSI = { 1613,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo ig_emlrtRSI = { 402,/* lineNo */
  "find",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"/* pathName */
};

static emlrtRSInfo jg_emlrtRSI = { 42, /* lineNo */
  "indexShapeCheck",                   /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\indexShapeCheck.m"/* pathName */
};

static emlrtRSInfo kg_emlrtRSI = { 108,/* lineNo */
  "NLPSolverInterface",                /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\robotics\\robotutils\\+robotics\\+core\\+internal\\NLPSolverInterface.m"/* pathName */
};

static emlrtRSInfo lg_emlrtRSI = { 111,/* lineNo */
  "NLPSolverInterface",                /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\robotics\\robotutils\\+robotics\\+core\\+internal\\NLPSolverInterface.m"/* pathName */
};

static emlrtRSInfo mg_emlrtRSI = { 123,/* lineNo */
  "NLPSolverInterface",                /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\robotics\\robotutils\\+robotics\\+core\\+internal\\NLPSolverInterface.m"/* pathName */
};

static emlrtRSInfo ng_emlrtRSI = { 142,/* lineNo */
  "NLPSolverInterface",                /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\robotics\\robotutils\\+robotics\\+core\\+internal\\NLPSolverInterface.m"/* pathName */
};

static emlrtRSInfo og_emlrtRSI = { 144,/* lineNo */
  "NLPSolverInterface",                /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\robotics\\robotutils\\+robotics\\+core\\+internal\\NLPSolverInterface.m"/* pathName */
};

static emlrtRSInfo pg_emlrtRSI = { 83, /* lineNo */
  "SystemTimeProvider",                /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\robotics\\robotutils\\+robotics\\+core\\+internal\\SystemTimeProvider.m"/* pathName */
};

static emlrtRSInfo qg_emlrtRSI = { 84, /* lineNo */
  "SystemTimeProvider",                /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\robotics\\robotutils\\+robotics\\+core\\+internal\\SystemTimeProvider.m"/* pathName */
};

static emlrtRSInfo rg_emlrtRSI = { 31, /* lineNo */
  "tic",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\timefun\\tic.m"/* pathName */
};

static emlrtRSInfo sg_emlrtRSI = { 7,  /* lineNo */
  "getTime",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\coder\\coder\\lib\\+coder\\+internal\\+time\\getTime.m"/* pathName */
};

static emlrtRSInfo tg_emlrtRSI = { 21, /* lineNo */
  "CoderTimeAPI",                      /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\coder\\coder\\lib\\+coder\\+internal\\+time\\CoderTimeAPI.m"/* pathName */
};

static emlrtRSInfo ug_emlrtRSI = { 185,/* lineNo */
  "DampedBFGSwGradientProjection",     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\robotics\\robotutils\\+robotics\\+core\\+internal\\DampedBFGSwGradientProjec"
  "tion.m"                             /* pathName */
};

static emlrtRSInfo vg_emlrtRSI = { 191,/* lineNo */
  "DampedBFGSwGradientProjection",     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\robotics\\robotutils\\+robotics\\+core\\+internal\\DampedBFGSwGradientProjec"
  "tion.m"                             /* pathName */
};

static emlrtRSInfo wg_emlrtRSI = { 192,/* lineNo */
  "DampedBFGSwGradientProjection",     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\robotics\\robotutils\\+robotics\\+core\\+internal\\DampedBFGSwGradientProjec"
  "tion.m"                             /* pathName */
};

static emlrtRSInfo xg_emlrtRSI = { 223,/* lineNo */
  "DampedBFGSwGradientProjection",     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\robotics\\robotutils\\+robotics\\+core\\+internal\\DampedBFGSwGradientProjec"
  "tion.m"                             /* pathName */
};

static emlrtRSInfo yg_emlrtRSI = { 226,/* lineNo */
  "DampedBFGSwGradientProjection",     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\robotics\\robotutils\\+robotics\\+core\\+internal\\DampedBFGSwGradientProjec"
  "tion.m"                             /* pathName */
};

static emlrtRSInfo ah_emlrtRSI = { 235,/* lineNo */
  "DampedBFGSwGradientProjection",     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\robotics\\robotutils\\+robotics\\+core\\+internal\\DampedBFGSwGradientProjec"
  "tion.m"                             /* pathName */
};

static emlrtRSInfo bh_emlrtRSI = { 239,/* lineNo */
  "DampedBFGSwGradientProjection",     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\robotics\\robotutils\\+robotics\\+core\\+internal\\DampedBFGSwGradientProjec"
  "tion.m"                             /* pathName */
};

static emlrtRSInfo ch_emlrtRSI = { 243,/* lineNo */
  "DampedBFGSwGradientProjection",     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\robotics\\robotutils\\+robotics\\+core\\+internal\\DampedBFGSwGradientProjec"
  "tion.m"                             /* pathName */
};

static emlrtRSInfo dh_emlrtRSI = { 250,/* lineNo */
  "DampedBFGSwGradientProjection",     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\robotics\\robotutils\\+robotics\\+core\\+internal\\DampedBFGSwGradientProjec"
  "tion.m"                             /* pathName */
};

static emlrtRSInfo eh_emlrtRSI = { 251,/* lineNo */
  "DampedBFGSwGradientProjection",     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\robotics\\robotutils\\+robotics\\+core\\+internal\\DampedBFGSwGradientProjec"
  "tion.m"                             /* pathName */
};

static emlrtRSInfo fh_emlrtRSI = { 266,/* lineNo */
  "DampedBFGSwGradientProjection",     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\robotics\\robotutils\\+robotics\\+core\\+internal\\DampedBFGSwGradientProjec"
  "tion.m"                             /* pathName */
};

static emlrtRSInfo gh_emlrtRSI = { 286,/* lineNo */
  "DampedBFGSwGradientProjection",     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\robotics\\robotutils\\+robotics\\+core\\+internal\\DampedBFGSwGradientProjec"
  "tion.m"                             /* pathName */
};

static emlrtRSInfo hh_emlrtRSI = { 320,/* lineNo */
  "DampedBFGSwGradientProjection",     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\robotics\\robotutils\\+robotics\\+core\\+internal\\DampedBFGSwGradientProjec"
  "tion.m"                             /* pathName */
};

static emlrtRSInfo ih_emlrtRSI = { 324,/* lineNo */
  "DampedBFGSwGradientProjection",     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\robotics\\robotutils\\+robotics\\+core\\+internal\\DampedBFGSwGradientProjec"
  "tion.m"                             /* pathName */
};

static emlrtRSInfo jh_emlrtRSI = { 327,/* lineNo */
  "DampedBFGSwGradientProjection",     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\robotics\\robotutils\\+robotics\\+core\\+internal\\DampedBFGSwGradientProjec"
  "tion.m"                             /* pathName */
};

static emlrtRSInfo kh_emlrtRSI = { 334,/* lineNo */
  "DampedBFGSwGradientProjection",     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\robotics\\robotutils\\+robotics\\+core\\+internal\\DampedBFGSwGradientProjec"
  "tion.m"                             /* pathName */
};

static emlrtRSInfo lh_emlrtRSI = { 337,/* lineNo */
  "DampedBFGSwGradientProjection",     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\robotics\\robotutils\\+robotics\\+core\\+internal\\DampedBFGSwGradientProjec"
  "tion.m"                             /* pathName */
};

static emlrtRSInfo mh_emlrtRSI = { 348,/* lineNo */
  "DampedBFGSwGradientProjection",     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\robotics\\robotutils\\+robotics\\+core\\+internal\\DampedBFGSwGradientProjec"
  "tion.m"                             /* pathName */
};

static emlrtRSInfo nh_emlrtRSI = { 385,/* lineNo */
  "DampedBFGSwGradientProjection",     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\robotics\\robotutils\\+robotics\\+core\\+internal\\DampedBFGSwGradientProjec"
  "tion.m"                             /* pathName */
};

static emlrtRSInfo oh_emlrtRSI = { 388,/* lineNo */
  "DampedBFGSwGradientProjection",     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\robotics\\robotutils\\+robotics\\+core\\+internal\\DampedBFGSwGradientProjec"
  "tion.m"                             /* pathName */
};

static emlrtRSInfo ph_emlrtRSI = { 394,/* lineNo */
  "DampedBFGSwGradientProjection",     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\robotics\\robotutils\\+robotics\\+core\\+internal\\DampedBFGSwGradientProjec"
  "tion.m"                             /* pathName */
};

static emlrtRSInfo qh_emlrtRSI = { 398,/* lineNo */
  "DampedBFGSwGradientProjection",     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\robotics\\robotutils\\+robotics\\+core\\+internal\\DampedBFGSwGradientProjec"
  "tion.m"                             /* pathName */
};

static emlrtRSInfo rh_emlrtRSI = { 410,/* lineNo */
  "DampedBFGSwGradientProjection",     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\robotics\\robotutils\\+robotics\\+core\\+internal\\DampedBFGSwGradientProjec"
  "tion.m"                             /* pathName */
};

static emlrtRSInfo sh_emlrtRSI = { 94, /* lineNo */
  "eml_mtimes_helper",                 /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\ops\\eml_mtimes_helper.m"/* pathName */
};

static emlrtRSInfo th_emlrtRSI = { 69, /* lineNo */
  "eml_mtimes_helper",                 /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\ops\\eml_mtimes_helper.m"/* pathName */
};

static emlrtRSInfo uh_emlrtRSI = { 51, /* lineNo */
  "div",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\div.m"/* pathName */
};

static emlrtRSInfo vh_emlrtRSI = { 38, /* lineNo */
  "minOrMax",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\minOrMax.m"/* pathName */
};

static emlrtRSInfo wh_emlrtRSI = { 40, /* lineNo */
  "minOrMax",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\minOrMax.m"/* pathName */
};

static emlrtRSInfo xh_emlrtRSI = { 22, /* lineNo */
  "IKHelpers",                         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\IKHelpers.m"/* pathName */
};

static emlrtRSInfo yh_emlrtRSI = { 27, /* lineNo */
  "IKHelpers",                         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\IKHelpers.m"/* pathName */
};

static emlrtRSInfo ai_emlrtRSI = { 1873,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo bi_emlrtRSI = { 1870,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo ci_emlrtRSI = { 1837,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo di_emlrtRSI = { 1824,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo ei_emlrtRSI = { 1823,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo fi_emlrtRSI = { 1820,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo gi_emlrtRSI = { 1947,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo hi_emlrtRSI = { 1948,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo ii_emlrtRSI = { 512,/* lineNo */
  "rigidBodyJoint",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pathName */
};

static emlrtRSInfo ji_emlrtRSI = { 396,/* lineNo */
  "rigidBodyJoint",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pathName */
};

static emlrtRSInfo ki_emlrtRSI = { 397,/* lineNo */
  "rigidBodyJoint",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pathName */
};

static emlrtRSInfo li_emlrtRSI = { 399,/* lineNo */
  "rigidBodyJoint",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pathName */
};

static emlrtRSInfo mi_emlrtRSI = { 24, /* lineNo */
  "axang2tform",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\robotics\\robotutils\\axang2tform.m"/* pathName */
};

static emlrtRSInfo ni_emlrtRSI = { 24, /* lineNo */
  "axang2tform",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\robotics\\robotutils\\+robotics\\+internal\\axang2tform.m"/* pathName */
};

static emlrtRSInfo oi_emlrtRSI = { 37, /* lineNo */
  "axang2rotm",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\robotics\\robotutils\\+robotics\\+internal\\axang2rotm.m"/* pathName */
};

static emlrtRSInfo pi_emlrtRSI = { 15, /* lineNo */
  "normalizeRows",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\robotics\\robotutils\\+robotics\\+internal\\normalizeRows.m"/* pathName */
};

static emlrtRSInfo qi_emlrtRSI = { 21, /* lineNo */
  "axang2tform",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\robotics\\robotutils\\axang2tform.m"/* pathName */
};

static emlrtRSInfo ri_emlrtRSI = { 21, /* lineNo */
  "validateNumericMatrix",             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\robotics\\robotutils\\+robotics\\+internal\\+validation\\validateNumericMatr"
  "ix.m"                               /* pathName */
};

static emlrtRSInfo si_emlrtRSI = { 64, /* lineNo */
  "IKHelpers",                         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\IKHelpers.m"/* pathName */
};

static emlrtRSInfo ti_emlrtRSI = { 25, /* lineNo */
  "rotm2axang",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\robotics\\robotutils\\rotm2axang.m"/* pathName */
};

static emlrtRSInfo ui_emlrtRSI = { 51, /* lineNo */
  "rotm2axang",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\robotics\\robotutils\\+robotics\\+internal\\rotm2axang.m"/* pathName */
};

static emlrtRSInfo vi_emlrtRSI = { 42, /* lineNo */
  "rotm2axang",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\robotics\\robotutils\\+robotics\\+internal\\rotm2axang.m"/* pathName */
};

static emlrtRSInfo wi_emlrtRSI = { 36, /* lineNo */
  "svd",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\matfun\\svd.m"/* pathName */
};

static emlrtRSInfo xi_emlrtRSI = { 42, /* lineNo */
  "svd",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\matfun\\svd.m"/* pathName */
};

static emlrtRSInfo yi_emlrtRSI = { 34, /* lineNo */
  "xgesvd",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xgesvd.m"/* pathName */
};

static emlrtRSInfo aj_emlrtRSI = { 407,/* lineNo */
  "xzsvdc",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\+reflapack\\xzsvdc.m"/* pathName */
};

static emlrtRSInfo bj_emlrtRSI = { 394,/* lineNo */
  "xzsvdc",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\+reflapack\\xzsvdc.m"/* pathName */
};

static emlrtRSInfo cj_emlrtRSI = { 380,/* lineNo */
  "xzsvdc",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\+reflapack\\xzsvdc.m"/* pathName */
};

static emlrtRSInfo dj_emlrtRSI = { 353,/* lineNo */
  "xzsvdc",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\+reflapack\\xzsvdc.m"/* pathName */
};

static emlrtRSInfo ej_emlrtRSI = { 334,/* lineNo */
  "xzsvdc",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\+reflapack\\xzsvdc.m"/* pathName */
};

static emlrtRSInfo fj_emlrtRSI = { 32, /* lineNo */
  "xrotg",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\+refblas\\xrotg.m"/* pathName */
};

static emlrtRSInfo gj_emlrtRSI = { 64, /* lineNo */
  "SystemTimeProvider",                /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\robotics\\robotutils\\+robotics\\+core\\+internal\\SystemTimeProvider.m"/* pathName */
};

static emlrtRSInfo hj_emlrtRSI = { 66, /* lineNo */
  "SystemTimeProvider",                /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\robotics\\robotutils\\+robotics\\+core\\+internal\\SystemTimeProvider.m"/* pathName */
};

static emlrtRSInfo ij_emlrtRSI = { 36, /* lineNo */
  "toc",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\timefun\\toc.m"/* pathName */
};

static emlrtRSInfo jj_emlrtRSI = { 20, /* lineNo */
  "mldivide",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\ops\\mldivide.m"/* pathName */
};

static emlrtRSInfo kj_emlrtRSI = { 42, /* lineNo */
  "mldivide",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\ops\\mldivide.m"/* pathName */
};

static emlrtRSInfo lj_emlrtRSI = { 44, /* lineNo */
  "mldivide",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\ops\\mldivide.m"/* pathName */
};

static emlrtRSInfo mj_emlrtRSI = { 112,/* lineNo */
  "lusolve",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\lusolve.m"/* pathName */
};

static emlrtRSInfo nj_emlrtRSI = { 124,/* lineNo */
  "lusolve",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\lusolve.m"/* pathName */
};

static emlrtRSInfo oj_emlrtRSI = { 70, /* lineNo */
  "xgetrfs",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xgetrfs.m"/* pathName */
};

static emlrtRSInfo pj_emlrtRSI = { 28, /* lineNo */
  "repmat",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\elmat\\repmat.m"/* pathName */
};

static emlrtRSInfo qj_emlrtRSI = { 31, /* lineNo */
  "xgetrf",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xgetrf.m"/* pathName */
};

static emlrtRSInfo rj_emlrtRSI = { 59, /* lineNo */
  "xgetrf",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xgetrf.m"/* pathName */
};

static emlrtRSInfo sj_emlrtRSI = { 82, /* lineNo */
  "colon",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\ops\\colon.m"/* pathName */
};

static emlrtRSInfo tj_emlrtRSI = { 148,/* lineNo */
  "colon",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\ops\\colon.m"/* pathName */
};

static emlrtRSInfo uj_emlrtRSI = { 295,/* lineNo */
  "colon",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\ops\\colon.m"/* pathName */
};

static emlrtRSInfo vj_emlrtRSI = { 45, /* lineNo */
  "xgeru",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\+blas\\xgeru.m"/* pathName */
};

static emlrtRSInfo wj_emlrtRSI = { 16, /* lineNo */
  "xgetrs",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xgetrs.m"/* pathName */
};

static emlrtRSInfo xj_emlrtRSI = { 18, /* lineNo */
  "xgetrs",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xgetrs.m"/* pathName */
};

static emlrtRSInfo yj_emlrtRSI = { 32, /* lineNo */
  "xzgetrs",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\+reflapack\\xzgetrs.m"/* pathName */
};

static emlrtRSInfo ak_emlrtRSI = { 36, /* lineNo */
  "xzgetrs",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\+reflapack\\xzgetrs.m"/* pathName */
};

static emlrtRSInfo bk_emlrtRSI = { 90, /* lineNo */
  "lusolve",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\lusolve.m"/* pathName */
};

static emlrtRSInfo ck_emlrtRSI = { 61, /* lineNo */
  "qrsolve",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\qrsolve.m"/* pathName */
};

static emlrtRSInfo dk_emlrtRSI = { 72, /* lineNo */
  "qrsolve",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\qrsolve.m"/* pathName */
};

static emlrtRSInfo ek_emlrtRSI = { 85, /* lineNo */
  "qrsolve",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\qrsolve.m"/* pathName */
};

static emlrtRSInfo fk_emlrtRSI = { 116,/* lineNo */
  "xzgeqp3",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\+reflapack\\xzgeqp3.m"/* pathName */
};

static emlrtRSInfo gk_emlrtRSI = { 119,/* lineNo */
  "xzgeqp3",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\+reflapack\\xzgeqp3.m"/* pathName */
};

static emlrtRSInfo hk_emlrtRSI = { 174,/* lineNo */
  "xzgeqp3",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\+reflapack\\xzgeqp3.m"/* pathName */
};

static emlrtRSInfo ik_emlrtRSI = { 81, /* lineNo */
  "xzlarfg",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\+reflapack\\xzlarfg.m"/* pathName */
};

static emlrtRSInfo jk_emlrtRSI = { 68, /* lineNo */
  "xzlarfg",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\+reflapack\\xzlarfg.m"/* pathName */
};

static emlrtRSInfo kk_emlrtRSI = { 41, /* lineNo */
  "xzlarfg",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\+reflapack\\xzlarfg.m"/* pathName */
};

static emlrtRSInfo lk_emlrtRSI = { 68, /* lineNo */
  "xzlarf",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\+reflapack\\xzlarf.m"/* pathName */
};

static emlrtRSInfo mk_emlrtRSI = { 75, /* lineNo */
  "xzlarf",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\+reflapack\\xzlarf.m"/* pathName */
};

static emlrtRSInfo nk_emlrtRSI = { 45, /* lineNo */
  "xgerc",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\+blas\\xgerc.m"/* pathName */
};

static emlrtRSInfo ok_emlrtRSI = { 173,/* lineNo */
  "qrsolve",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\qrsolve.m"/* pathName */
};

static emlrtRSInfo pk_emlrtRSI = { 172,/* lineNo */
  "qrsolve",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\qrsolve.m"/* pathName */
};

static emlrtRSInfo qk_emlrtRSI = { 119,/* lineNo */
  "qrsolve",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\qrsolve.m"/* pathName */
};

static emlrtRSInfo rk_emlrtRSI = { 31, /* lineNo */
  "xunormqr",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xunormqr.m"/* pathName */
};

static emlrtRSInfo sk_emlrtRSI = { 415,/* lineNo */
  "DampedBFGSwGradientProjection",     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\robotics\\robotutils\\+robotics\\+core\\+internal\\DampedBFGSwGradientProjec"
  "tion.m"                             /* pathName */
};

static emlrtRSInfo tk_emlrtRSI = { 21, /* lineNo */
  "inv",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\matfun\\inv.m"/* pathName */
};

static emlrtRSInfo uk_emlrtRSI = { 22, /* lineNo */
  "inv",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\matfun\\inv.m"/* pathName */
};

static emlrtRSInfo vk_emlrtRSI = { 173,/* lineNo */
  "inv",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\matfun\\inv.m"/* pathName */
};

static emlrtRSInfo wk_emlrtRSI = { 174,/* lineNo */
  "inv",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\matfun\\inv.m"/* pathName */
};

static emlrtRSInfo xk_emlrtRSI = { 190,/* lineNo */
  "inv",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\matfun\\inv.m"/* pathName */
};

static emlrtRSInfo yk_emlrtRSI = { 76, /* lineNo */
  "div",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\div.m"/* pathName */
};

static emlrtRSInfo al_emlrtRSI = { 15, /* lineNo */
  "chol",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\matfun\\chol.m"/* pathName */
};

static emlrtRSInfo bl_emlrtRSI = { 84, /* lineNo */
  "chol",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\chol.m"/* pathName */
};

static emlrtRSInfo cl_emlrtRSI = { 16, /* lineNo */
  "xpotrf",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xpotrf.m"/* pathName */
};

static emlrtRSInfo dl_emlrtRSI = { 13, /* lineNo */
  "xzpotrf",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\+reflapack\\xzpotrf.m"/* pathName */
};

static emlrtRSInfo el_emlrtRSI = { 99, /* lineNo */
  "xzpotrf",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\+reflapack\\xzpotrf.m"/* pathName */
};

static emlrtRSInfo fl_emlrtRSI = { 419,/* lineNo */
  "DampedBFGSwGradientProjection",     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\robotics\\robotutils\\+robotics\\+core\\+internal\\DampedBFGSwGradientProjec"
  "tion.m"                             /* pathName */
};

static emlrtRSInfo gl_emlrtRSI = { 48, /* lineNo */
  "IKHelpers",                         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\IKHelpers.m"/* pathName */
};

static emlrtRSInfo hl_emlrtRSI = { 641,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo il_emlrtRSI = { 524,/* lineNo */
  "rigidBodyJoint",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pathName */
};

static emlrtRSInfo jl_emlrtRSI = { 525,/* lineNo */
  "rigidBodyJoint",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pathName */
};

static emlrtRSInfo kl_emlrtRSI = { 527,/* lineNo */
  "rigidBodyJoint",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pathName */
};

static emlrtRSInfo ll_emlrtRSI = { 528,/* lineNo */
  "rigidBodyJoint",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pathName */
};

static emlrtRSInfo ml_emlrtRSI = { 529,/* lineNo */
  "rigidBodyJoint",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pathName */
};

static emlrtRSInfo nl_emlrtRSI = { 530,/* lineNo */
  "rigidBodyJoint",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pathName */
};

static emlrtRSInfo ol_emlrtRSI = { 532,/* lineNo */
  "rigidBodyJoint",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pathName */
};

static emlrtRSInfo pl_emlrtRSI = { 119,/* lineNo */
  "randn",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\randfun\\randn.m"/* pathName */
};

static emlrtRSInfo ql_emlrtRSI = { 40, /* lineNo */
  "eml_randn",                         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\randfun\\private\\eml_randn.m"/* pathName */
};

static emlrtRSInfo rl_emlrtRSI = { 39, /* lineNo */
  "eml_rand_mt19937ar_stateful",       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\randfun\\private\\eml_rand_mt19937ar_stateful.m"/* pathName */
};

static emlrtRSInfo sl_emlrtRSI = { 56, /* lineNo */
  "eml_rand_mt19937ar",                /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\randfun\\eml_rand_mt19937ar.m"/* pathName */
};

static emlrtRSInfo tl_emlrtRSI = { 438,/* lineNo */
  "eml_rand_mt19937ar",                /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\randfun\\eml_rand_mt19937ar.m"/* pathName */
};

static emlrtRSInfo ul_emlrtRSI = { 447,/* lineNo */
  "eml_rand_mt19937ar",                /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\randfun\\eml_rand_mt19937ar.m"/* pathName */
};

static emlrtRSInfo vl_emlrtRSI = { 449,/* lineNo */
  "eml_rand_mt19937ar",                /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\randfun\\eml_rand_mt19937ar.m"/* pathName */
};

static emlrtRSInfo wl_emlrtRSI = { 1988,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo xl_emlrtRSI = { 2001,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo yl_emlrtRSI = { 125,/* lineNo */
  "colon",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\ops\\colon.m"/* pathName */
};

static emlrtRSInfo am_emlrtRSI = { 319,/* lineNo */
  "colon",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\ops\\colon.m"/* pathName */
};

static emlrtRSInfo bm_emlrtRSI = { 713,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo cm_emlrtRSI = { 1475,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo dm_emlrtRSI = { 22, /* lineNo */
  "matlabCodegenHandle",               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\matlabCodegenHandle.m"/* pathName */
};

static emlrtRSInfo em_emlrtRSI = { 255,/* lineNo */
  "CollisionSet",                      /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\CollisionSet.m"/* pathName */
};

static emlrtRSInfo fm_emlrtRSI = { 326,/* lineNo */
  "CollisionGeometry",                 /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\CollisionGeometry.m"/* pathName */
};

static emlrtMCInfo emlrtMCI = { 1,     /* lineNo */
  1,                                   /* colNo */
  "SystemCore",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\system\\coder\\+matlab\\+system\\+coder\\SystemCore.p"/* pName */
};

static emlrtMCInfo b_emlrtMCI = { 14,  /* lineNo */
  37,                                  /* colNo */
  "validatefinite",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\+valattr\\validatefinite.m"/* pName */
};

static emlrtMCInfo c_emlrtMCI = { 13,  /* lineNo */
  37,                                  /* colNo */
  "validatenonempty",                  /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\+valattr\\validatenonempty.m"/* pName */
};

static emlrtMCInfo d_emlrtMCI = { 158, /* lineNo */
  17,                                  /* colNo */
  "eml_rand_mt19937ar",                /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\randfun\\eml_rand_mt19937ar.m"/* pName */
};

static emlrtMCInfo e_emlrtMCI = { 28,  /* lineNo */
  9,                                   /* colNo */
  "error",                             /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\error.m"/* pName */
};

static emlrtMCInfo f_emlrtMCI = { 14,  /* lineNo */
  37,                                  /* colNo */
  "validatenonnan",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\+valattr\\validatenonnan.m"/* pName */
};

static emlrtMCInfo g_emlrtMCI = { 139, /* lineNo */
  9,                                   /* colNo */
  "validatestring",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\lang\\validatestring.m"/* pName */
};

static emlrtMCInfo h_emlrtMCI = { 131, /* lineNo */
  9,                                   /* colNo */
  "validatestring",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\lang\\validatestring.m"/* pName */
};

static emlrtMCInfo i_emlrtMCI = { 15,  /* lineNo */
  9,                                   /* colNo */
  "assertSupportedString",             /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\assertSupportedString.m"/* pName */
};

static emlrtMCInfo j_emlrtMCI = { 14,  /* lineNo */
  25,                                  /* colNo */
  "warning",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\coder\\coder\\lib\\+coder\\+internal\\warning.m"/* pName */
};

static emlrtMCInfo k_emlrtMCI = { 14,  /* lineNo */
  9,                                   /* colNo */
  "warning",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\coder\\coder\\lib\\+coder\\+internal\\warning.m"/* pName */
};

static emlrtMCInfo l_emlrtMCI = { 58,  /* lineNo */
  23,                                  /* colNo */
  "assertValidSizeArg",                /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\assertValidSizeArg.m"/* pName */
};

static emlrtMCInfo m_emlrtMCI = { 64,  /* lineNo */
  15,                                  /* colNo */
  "assertValidSizeArg",                /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\assertValidSizeArg.m"/* pName */
};

static emlrtMCInfo n_emlrtMCI = { 21,  /* lineNo */
  9,                                   /* colNo */
  "error",                             /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\error.m"/* pName */
};

static emlrtMCInfo o_emlrtMCI = { 53,  /* lineNo */
  19,                                  /* colNo */
  "flt2str",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\flt2str.m"/* pName */
};

static emlrtMCInfo p_emlrtMCI = { 13,  /* lineNo */
  9,                                   /* colNo */
  "sqrt",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\elfun\\sqrt.m"/* pName */
};

static emlrtMCInfo q_emlrtMCI = { 14,  /* lineNo */
  37,                                  /* colNo */
  "validatenonnegative",               /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\+valattr\\validatenonnegative.m"/* pName */
};

static emlrtMCInfo r_emlrtMCI = { 10,  /* lineNo */
  23,                                  /* colNo */
  "validatesize",                      /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\+valattr\\validatesize.m"/* pName */
};

static emlrtMCInfo s_emlrtMCI = { 15,  /* lineNo */
  19,                                  /* colNo */
  "validatesize",                      /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\+valattr\\validatesize.m"/* pName */
};

static emlrtMCInfo t_emlrtMCI = { 122, /* lineNo */
  5,                                   /* colNo */
  "indexShapeCheck",                   /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\indexShapeCheck.m"/* pName */
};

static emlrtMCInfo u_emlrtMCI = { 288, /* lineNo */
  27,                                  /* colNo */
  "cat",                               /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\cat.m"/* pName */
};

static emlrtMCInfo v_emlrtMCI = { 18,  /* lineNo */
  23,                                  /* colNo */
  "validatencols",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\+valattr\\validatencols.m"/* pName */
};

static emlrtMCInfo w_emlrtMCI = { 138, /* lineNo */
  23,                                  /* colNo */
  "eml_mtimes_helper",                 /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\ops\\eml_mtimes_helper.m"/* pName */
};

static emlrtMCInfo x_emlrtMCI = { 133, /* lineNo */
  23,                                  /* colNo */
  "eml_mtimes_helper",                 /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\ops\\eml_mtimes_helper.m"/* pName */
};

static emlrtMCInfo y_emlrtMCI = { 269, /* lineNo */
  13,                                  /* colNo */
  "xzsvdc",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\+reflapack\\xzsvdc.m"/* pName */
};

static emlrtMCInfo ab_emlrtMCI = { 64, /* lineNo */
  13,                                  /* colNo */
  "SystemTimeProvider",                /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\robotics\\robotutils\\+robotics\\+core\\+internal\\SystemTimeProvider.m"/* pName */
};

static emlrtMCInfo bb_emlrtMCI = { 16, /* lineNo */
  19,                                  /* colNo */
  "mldivide",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\ops\\mldivide.m"/* pName */
};

static emlrtMCInfo cb_emlrtMCI = { 47, /* lineNo */
  5,                                   /* colNo */
  "repmat",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\elmat\\repmat.m"/* pName */
};

static emlrtMCInfo db_emlrtMCI = { 419,/* lineNo */
  15,                                  /* colNo */
  "colon",                             /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\ops\\colon.m"/* pName */
};

static emlrtMCInfo eb_emlrtMCI = { 12, /* lineNo */
  23,                                  /* colNo */
  "xzgetrs",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\+reflapack\\xzgetrs.m"/* pName */
};

static emlrtMCInfo fb_emlrtMCI = { 47, /* lineNo */
  19,                                  /* colNo */
  "allOrAny",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\allOrAny.m"/* pName */
};

static emlrtMCInfo gb_emlrtMCI = { 14, /* lineNo */
  15,                                  /* colNo */
  "inv",                               /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\matfun\\inv.m"/* pName */
};

static emlrtMCInfo hb_emlrtMCI = { 102,/* lineNo */
  19,                                  /* colNo */
  "diag",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\elmat\\diag.m"/* pName */
};

static emlrtMCInfo ib_emlrtMCI = { 13, /* lineNo */
  27,                                  /* colNo */
  "assertCompatibleDims",              /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\coder\\coder\\lib\\+coder\\+internal\\assertCompatibleDims.m"/* pName */
};

static emlrtMCInfo jb_emlrtMCI = { 28, /* lineNo */
  27,                                  /* colNo */
  "unaryMinOrMax",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\unaryMinOrMax.m"/* pName */
};

static emlrtMCInfo kb_emlrtMCI = { 134,/* lineNo */
  27,                                  /* colNo */
  "unaryMinOrMax",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\unaryMinOrMax.m"/* pName */
};

static emlrtMCInfo lb_emlrtMCI = { 81, /* lineNo */
  1,                                   /* colNo */
  "find",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"/* pName */
};

static emlrtMCInfo mb_emlrtMCI = { 392,/* lineNo */
  1,                                   /* colNo */
  "find",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"/* pName */
};

static emlrtMCInfo nb_emlrtMCI = { 16, /* lineNo */
  5,                                   /* colNo */
  "chol",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\matfun\\chol.m"/* pName */
};

static emlrtRTEInfo emlrtRTEI = { 52,  /* lineNo */
  25,                                  /* colNo */
  "CollisionSet",                      /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\CollisionSet.m"/* pName */
};

static emlrtBCInfo emlrtBCI = { -1,    /* iFirst */
  -1,                                  /* iLast */
  53,                                  /* lineNo */
  45,                                  /* colNo */
  "",                                  /* aName */
  "CollisionSet",                      /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\CollisionSet.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo emlrtDCI = { 33,    /* lineNo */
  61,                                  /* colNo */
  "CollisionSet",                      /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\CollisionSet.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo b_emlrtDCI = { 33,  /* lineNo */
  61,                                  /* colNo */
  "CollisionSet",                      /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\CollisionSet.m",/* pName */
  4                                    /* checkKind */
};

static emlrtRTEInfo b_emlrtRTEI = { 1375,/* lineNo */
  21,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pName */
};

static emlrtBCInfo b_emlrtBCI = { 0,   /* iFirst */
  6,                                   /* iLast */
  1376,                                /* lineNo */
  38,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c_emlrtBCI = { 0,   /* iFirst */
  6,                                   /* iLast */
  554,                                 /* lineNo */
  45,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c_emlrtDCI = { 554, /* lineNo */
  45,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo d_emlrtDCI = { 70,  /* lineNo */
  17,                                  /* colNo */
  "VisualizationInfo",                 /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\VisualizationInfo.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo d_emlrtBCI = { 1,   /* iFirst */
  62,                                  /* iLast */
  70,                                  /* lineNo */
  17,                                  /* colNo */
  "",                                  /* aName */
  "VisualizationInfo",                 /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\VisualizationInfo.m",/* pName */
  0                                    /* checkKind */
};

static emlrtRTEInfo c_emlrtRTEI = { 245,/* lineNo */
  21,                                  /* colNo */
  "CollisionSet",                      /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\CollisionSet.m"/* pName */
};

static emlrtBCInfo e_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  246,                                 /* lineNo */
  44,                                  /* colNo */
  "",                                  /* aName */
  "CollisionSet",                      /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\CollisionSet.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo f_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  246,                                 /* lineNo */
  78,                                  /* colNo */
  "",                                  /* aName */
  "CollisionSet",                      /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\CollisionSet.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo e_emlrtDCI = { 266, /* lineNo */
  24,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo f_emlrtDCI = { 275, /* lineNo */
  36,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo g_emlrtBCI = { 1,   /* iFirst */
  7,                                   /* iLast */
  275,                                 /* lineNo */
  36,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo g_emlrtDCI = { 287, /* lineNo */
  36,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo h_emlrtBCI = { 1,   /* iFirst */
  7,                                   /* iLast */
  287,                                 /* lineNo */
  36,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo h_emlrtDCI = { 288, /* lineNo */
  36,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo i_emlrtBCI = { 1,   /* iFirst */
  7,                                   /* iLast */
  288,                                 /* lineNo */
  36,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo i_emlrtDCI = { 290, /* lineNo */
  36,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo j_emlrtBCI = { 1,   /* iFirst */
  7,                                   /* iLast */
  290,                                 /* lineNo */
  36,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo j_emlrtDCI = { 291, /* lineNo */
  36,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo k_emlrtBCI = { 1,   /* iFirst */
  7,                                   /* iLast */
  291,                                 /* lineNo */
  36,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  3                                    /* checkKind */
};

static emlrtBCInfo l_emlrtBCI = { 0,   /* iFirst */
  6,                                   /* iLast */
  266,                                 /* lineNo */
  24,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  3                                    /* checkKind */
};

static emlrtBCInfo m_emlrtBCI = { 0,   /* iFirst */
  6,                                   /* iLast */
  271,                                 /* lineNo */
  37,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtRTEInfo d_emlrtRTEI = { 1393,/* lineNo */
  21,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pName */
};

static emlrtBCInfo n_emlrtBCI = { 0,   /* iFirst */
  6,                                   /* iLast */
  1394,                                /* lineNo */
  38,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo emlrtECI = { 2,     /* nDims */
  155,                                 /* lineNo */
  17,                                  /* colNo */
  "rigidBodyJoint",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pName */
};

static emlrtRTEInfo e_emlrtRTEI = { 507,/* lineNo */
  21,                                  /* colNo */
  "inverseKinematics",                 /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\inverseKinematics.m"/* pName */
};

static emlrtBCInfo o_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  513,                                 /* lineNo */
  49,                                  /* colNo */
  "",                                  /* aName */
  "inverseKinematics",                 /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\inverseKinematics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo p_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  514,                                 /* lineNo */
  52,                                  /* colNo */
  "",                                  /* aName */
  "inverseKinematics",                 /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\inverseKinematics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo k_emlrtDCI = { 511, /* lineNo */
  23,                                  /* colNo */
  "inverseKinematics",                 /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\inverseKinematics.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo q_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  511,                                 /* lineNo */
  23,                                  /* colNo */
  "",                                  /* aName */
  "inverseKinematics",                 /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\inverseKinematics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo l_emlrtDCI = { 511, /* lineNo */
  25,                                  /* colNo */
  "inverseKinematics",                 /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\inverseKinematics.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo r_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  511,                                 /* lineNo */
  25,                                  /* colNo */
  "",                                  /* aName */
  "inverseKinematics",                 /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\inverseKinematics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo m_emlrtDCI = { 511, /* lineNo */
  35,                                  /* colNo */
  "inverseKinematics",                 /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\inverseKinematics.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo s_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  511,                                 /* lineNo */
  35,                                  /* colNo */
  "",                                  /* aName */
  "inverseKinematics",                 /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\inverseKinematics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo n_emlrtDCI = { 511, /* lineNo */
  37,                                  /* colNo */
  "inverseKinematics",                 /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\inverseKinematics.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo t_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  511,                                 /* lineNo */
  37,                                  /* colNo */
  "",                                  /* aName */
  "inverseKinematics",                 /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\inverseKinematics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo b_emlrtECI = { -1,  /* nDims */
  511,                                 /* lineNo */
  21,                                  /* colNo */
  "inverseKinematics",                 /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\inverseKinematics.m"/* pName */
};

static emlrtDCInfo o_emlrtDCI = { 512, /* lineNo */
  23,                                  /* colNo */
  "inverseKinematics",                 /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\inverseKinematics.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo u_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  512,                                 /* lineNo */
  23,                                  /* colNo */
  "",                                  /* aName */
  "inverseKinematics",                 /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\inverseKinematics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo p_emlrtDCI = { 512, /* lineNo */
  25,                                  /* colNo */
  "inverseKinematics",                 /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\inverseKinematics.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo v_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  512,                                 /* lineNo */
  25,                                  /* colNo */
  "",                                  /* aName */
  "inverseKinematics",                 /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\inverseKinematics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo q_emlrtDCI = { 512, /* lineNo */
  35,                                  /* colNo */
  "inverseKinematics",                 /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\inverseKinematics.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo w_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  512,                                 /* lineNo */
  35,                                  /* colNo */
  "",                                  /* aName */
  "inverseKinematics",                 /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\inverseKinematics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo r_emlrtDCI = { 512, /* lineNo */
  42,                                  /* colNo */
  "inverseKinematics",                 /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\inverseKinematics.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo x_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  512,                                 /* lineNo */
  42,                                  /* colNo */
  "",                                  /* aName */
  "inverseKinematics",                 /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\inverseKinematics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo c_emlrtECI = { -1,  /* nDims */
  512,                                 /* lineNo */
  21,                                  /* colNo */
  "inverseKinematics",                 /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\inverseKinematics.m"/* pName */
};

static emlrtECInfo d_emlrtECI = { 1,   /* nDims */
  146,                                 /* lineNo */
  13,                                  /* colNo */
  "inverseKinematics",                 /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\inverseKinematics.m"/* pName */
};

static emlrtDCInfo s_emlrtDCI = { 502, /* lineNo */
  23,                                  /* colNo */
  "inverseKinematics",                 /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\inverseKinematics.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo t_emlrtDCI = { 502, /* lineNo */
  23,                                  /* colNo */
  "inverseKinematics",                 /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\inverseKinematics.m",/* pName */
  4                                    /* checkKind */
};

static emlrtDCInfo u_emlrtDCI = { 502, /* lineNo */
  26,                                  /* colNo */
  "inverseKinematics",                 /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\inverseKinematics.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo v_emlrtDCI = { 502, /* lineNo */
  13,                                  /* colNo */
  "inverseKinematics",                 /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\inverseKinematics.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo w_emlrtDCI = { 503, /* lineNo */
  13,                                  /* colNo */
  "inverseKinematics",                 /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\inverseKinematics.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo y_emlrtBCI = { 0,   /* iFirst */
  6,                                   /* iLast */
  508,                                 /* lineNo */
  58,                                  /* colNo */
  "",                                  /* aName */
  "inverseKinematics",                 /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\inverseKinematics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo x_emlrtDCI = { 146, /* lineNo */
  23,                                  /* colNo */
  "inverseKinematics",                 /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\inverseKinematics.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo y_emlrtDCI = { 146, /* lineNo */
  23,                                  /* colNo */
  "inverseKinematics",                 /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\inverseKinematics.m",/* pName */
  4                                    /* checkKind */
};

static emlrtBCInfo ab_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  513,                                 /* lineNo */
  23,                                  /* colNo */
  "",                                  /* aName */
  "inverseKinematics",                 /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\inverseKinematics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo ab_emlrtDCI = { 513,/* lineNo */
  23,                                  /* colNo */
  "inverseKinematics",                 /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\inverseKinematics.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo bb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  514,                                 /* lineNo */
  23,                                  /* colNo */
  "",                                  /* aName */
  "inverseKinematics",                 /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\inverseKinematics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtRTEInfo f_emlrtRTEI = { 2250,/* lineNo */
  21,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pName */
};

static emlrtDCInfo bb_emlrtDCI = { 2254,/* lineNo */
  28,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo cb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  2254,                                /* lineNo */
  28,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo cb_emlrtDCI = { 2254,/* lineNo */
  30,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo db_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  2254,                                /* lineNo */
  30,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo e_emlrtECI = { -1,  /* nDims */
  2254,                                /* lineNo */
  21,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pName */
};

static emlrtDCInfo db_emlrtDCI = { 2248,/* lineNo */
  28,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo eb_emlrtDCI = { 2248,/* lineNo */
  28,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  4                                    /* checkKind */
};

static emlrtDCInfo fb_emlrtDCI = { 2248,/* lineNo */
  13,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo gb_emlrtDCI = { 2248,/* lineNo */
  13,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  4                                    /* checkKind */
};

static emlrtBCInfo eb_emlrtBCI = { 0,  /* iFirst */
  6,                                   /* iLast */
  2251,                                /* lineNo */
  35,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo hb_emlrtDCI = { 729,/* lineNo */
  34,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  4                                    /* checkKind */
};

static emlrtDCInfo ib_emlrtDCI = { 729,/* lineNo */
  34,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo fb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  740,                                 /* lineNo */
  39,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo jb_emlrtDCI = { 740,/* lineNo */
  39,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo gb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  740,                                 /* lineNo */
  37,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo f_emlrtECI = { -1,  /* nDims */
  736,                                 /* lineNo */
  21,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pName */
};

static emlrtBCInfo hb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  733,                                 /* lineNo */
  33,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ib_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  2001,                                /* lineNo */
  38,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo jb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  2001,                                /* lineNo */
  36,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo g_emlrtECI = { -1,  /* nDims */
  322,                                 /* lineNo */
  13,                                  /* colNo */
  "inverseKinematics",                 /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\inverseKinematics.m"/* pName */
};

static emlrtDCInfo kb_emlrtDCI = { 319,/* lineNo */
  13,                                  /* colNo */
  "inverseKinematics",                 /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\inverseKinematics.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo lb_emlrtDCI = { 319,/* lineNo */
  13,                                  /* colNo */
  "inverseKinematics",                 /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\inverseKinematics.m",/* pName */
  4                                    /* checkKind */
};

static emlrtBCInfo kb_emlrtBCI = { 0,  /* iFirst */
  6,                                   /* iLast */
  1993,                                /* lineNo */
  35,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo lb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  1997,                                /* lineNo */
  29,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo mb_emlrtBCI = { 0,  /* iFirst */
  6,                                   /* iLast */
  1998,                                /* lineNo */
  39,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo mb_emlrtDCI = { 1998,/* lineNo */
  39,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo nb_emlrtBCI = { 1,  /* iFirst */
  7,                                   /* iLast */
  728,                                 /* lineNo */
  46,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo nb_emlrtDCI = { 728,/* lineNo */
  46,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo ob_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  728,                                 /* lineNo */
  58,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo ob_emlrtDCI = { 320,/* lineNo */
  13,                                  /* colNo */
  "inverseKinematics",                 /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\inverseKinematics.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo pb_emlrtDCI = { 320,/* lineNo */
  13,                                  /* colNo */
  "inverseKinematics",                 /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\inverseKinematics.m",/* pName */
  4                                    /* checkKind */
};

static emlrtDCInfo qb_emlrtDCI = { 322,/* lineNo */
  19,                                  /* colNo */
  "inverseKinematics",                 /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\inverseKinematics.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo pb_emlrtBCI = { 1,  /* iFirst */
  6,                                   /* iLast */
  322,                                 /* lineNo */
  19,                                  /* colNo */
  "",                                  /* aName */
  "inverseKinematics",                 /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\inverseKinematics.m",/* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo rb_emlrtDCI = { 736,/* lineNo */
  32,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo qb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  736,                                 /* lineNo */
  32,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo h_emlrtECI = { -1,  /* nDims */
  143,                                 /* lineNo */
  17,                                  /* colNo */
  "NLPSolverInterface",                /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\robotics\\robotutils\\+robotics\\+core\\+internal\\NLPSolverInterface.m"/* pName */
};

static emlrtRTEInfo g_emlrtRTEI = { 638,/* lineNo */
  21,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pName */
};

static emlrtBCInfo rb_emlrtBCI = { 1,  /* iFirst */
  7,                                   /* iLast */
  639,                                 /* lineNo */
  40,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo sb_emlrtDCI = { 642,/* lineNo */
  23,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo sb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  642,                                 /* lineNo */
  23,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo tb_emlrtDCI = { 642,/* lineNo */
  28,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo tb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  642,                                 /* lineNo */
  28,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo i_emlrtECI = { -1,  /* nDims */
  642,                                 /* lineNo */
  21,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pName */
};

static emlrtDCInfo ub_emlrtDCI = { 518,/* lineNo */
  20,                                  /* colNo */
  "rigidBodyJoint",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo vb_emlrtDCI = { 142,/* lineNo */
  17,                                  /* colNo */
  "NLPSolverInterface",                /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\robotics\\robotutils\\+robotics\\+core\\+internal\\NLPSolverInterface.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo wb_emlrtDCI = { 142,/* lineNo */
  17,                                  /* colNo */
  "NLPSolverInterface",                /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\robotics\\robotutils\\+robotics\\+core\\+internal\\NLPSolverInterface.m",/* pName */
  4                                    /* checkKind */
};

static emlrtBCInfo ub_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  211,                                 /* lineNo */
  25,                                  /* colNo */
  "",                                  /* aName */
  "DampedBFGSwGradientProjection",     /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\robotics\\robotutils\\+robotics\\+core\\+internal\\DampedBFGSwGradientProjec"
  "tion.m",                            /* pName */
  0                                    /* checkKind */
};

static emlrtRTEInfo h_emlrtRTEI = { 220,/* lineNo */
  21,                                  /* colNo */
  "DampedBFGSwGradientProjection",     /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\robotics\\robotutils\\+robotics\\+core\\+internal\\DampedBFGSwGradientProjec"
  "tion.m"                             /* pName */
};

static emlrtBCInfo vb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  259,                                 /* lineNo */
  57,                                  /* colNo */
  "",                                  /* aName */
  "DampedBFGSwGradientProjection",     /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\robotics\\robotutils\\+robotics\\+core\\+internal\\DampedBFGSwGradientProjec"
  "tion.m",                            /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo wb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  270,                                 /* lineNo */
  55,                                  /* colNo */
  "",                                  /* aName */
  "DampedBFGSwGradientProjection",     /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\robotics\\robotutils\\+robotics\\+core\\+internal\\DampedBFGSwGradientProjec"
  "tion.m",                            /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo xb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  349,                                 /* lineNo */
  48,                                  /* colNo */
  "",                                  /* aName */
  "DampedBFGSwGradientProjection",     /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\robotics\\robotutils\\+robotics\\+core\\+internal\\DampedBFGSwGradientProjec"
  "tion.m",                            /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo yb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  201,                                 /* lineNo */
  45,                                  /* colNo */
  "",                                  /* aName */
  "DampedBFGSwGradientProjection",     /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\robotics\\robotutils\\+robotics\\+core\\+internal\\DampedBFGSwGradientProjec"
  "tion.m",                            /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ac_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  262,                                 /* lineNo */
  36,                                  /* colNo */
  "",                                  /* aName */
  "DampedBFGSwGradientProjection",     /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\robotics\\robotutils\\+robotics\\+core\\+internal\\DampedBFGSwGradientProjec"
  "tion.m",                            /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo bc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  288,                                 /* lineNo */
  47,                                  /* colNo */
  "",                                  /* aName */
  "DampedBFGSwGradientProjection",     /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\robotics\\robotutils\\+robotics\\+core\\+internal\\DampedBFGSwGradientProjec"
  "tion.m",                            /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo cc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  263,                                 /* lineNo */
  54,                                  /* colNo */
  "",                                  /* aName */
  "DampedBFGSwGradientProjection",     /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\robotics\\robotutils\\+robotics\\+core\\+internal\\DampedBFGSwGradientProjec"
  "tion.m",                            /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo dc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  289,                                 /* lineNo */
  50,                                  /* colNo */
  "",                                  /* aName */
  "DampedBFGSwGradientProjection",     /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\robotics\\robotutils\\+robotics\\+core\\+internal\\DampedBFGSwGradientProjec"
  "tion.m",                            /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ec_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  351,                                 /* lineNo */
  31,                                  /* colNo */
  "",                                  /* aName */
  "DampedBFGSwGradientProjection",     /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\robotics\\robotutils\\+robotics\\+core\\+internal\\DampedBFGSwGradientProjec"
  "tion.m",                            /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo fc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  352,                                 /* lineNo */
  49,                                  /* colNo */
  "",                                  /* aName */
  "DampedBFGSwGradientProjection",     /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\robotics\\robotutils\\+robotics\\+core\\+internal\\DampedBFGSwGradientProjec"
  "tion.m",                            /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo gc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  296,                                 /* lineNo */
  51,                                  /* colNo */
  "",                                  /* aName */
  "DampedBFGSwGradientProjection",     /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\robotics\\robotutils\\+robotics\\+core\\+internal\\DampedBFGSwGradientProjec"
  "tion.m",                            /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo hc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  297,                                 /* lineNo */
  58,                                  /* colNo */
  "",                                  /* aName */
  "DampedBFGSwGradientProjection",     /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\robotics\\robotutils\\+robotics\\+core\\+internal\\DampedBFGSwGradientProjec"
  "tion.m",                            /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ic_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  297,                                 /* lineNo */
  60,                                  /* colNo */
  "",                                  /* aName */
  "DampedBFGSwGradientProjection",     /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\robotics\\robotutils\\+robotics\\+core\\+internal\\DampedBFGSwGradientProjec"
  "tion.m",                            /* pName */
  0                                    /* checkKind */
};

static emlrtECInfo j_emlrtECI = { -1,  /* nDims */
  1897,                                /* lineNo */
  29,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pName */
};

static emlrtBCInfo jc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  1897,                                /* lineNo */
  43,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo xb_emlrtDCI = { 1897,/* lineNo */
  43,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo kc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  1897,                                /* lineNo */
  35,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo yb_emlrtDCI = { 1897,/* lineNo */
  35,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo lc_emlrtBCI = { 1,  /* iFirst */
  7,                                   /* iLast */
  1875,                                /* lineNo */
  55,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo ac_emlrtDCI = { 1875,/* lineNo */
  55,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo mc_emlrtBCI = { 1,  /* iFirst */
  6,                                   /* iLast */
  1873,                                /* lineNo */
  72,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo bc_emlrtDCI = { 1873,/* lineNo */
  72,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo nc_emlrtBCI = { 1,  /* iFirst */
  6,                                   /* iLast */
  1873,                                /* lineNo */
  64,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo cc_emlrtDCI = { 1873,/* lineNo */
  64,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo oc_emlrtBCI = { 1,  /* iFirst */
  7,                                   /* iLast */
  1872,                                /* lineNo */
  51,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo dc_emlrtDCI = { 1872,/* lineNo */
  51,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo pc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  1958,                                /* lineNo */
  43,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo qc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  1960,                                /* lineNo */
  41,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo ec_emlrtDCI = { 1840,/* lineNo */
  32,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo fc_emlrtDCI = { 1840,/* lineNo */
  32,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  4                                    /* checkKind */
};

static emlrtBCInfo rc_emlrtBCI = { 0,  /* iFirst */
  6,                                   /* iLast */
  1830,                                /* lineNo */
  40,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo sc_emlrtBCI = { 0,  /* iFirst */
  6,                                   /* iLast */
  1835,                                /* lineNo */
  40,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo tc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  1952,                                /* lineNo */
  37,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo uc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  1952,                                /* lineNo */
  64,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo vc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  1957,                                /* lineNo */
  52,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo gc_emlrtDCI = { 1840,/* lineNo */
  17,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo hc_emlrtDCI = { 1840,/* lineNo */
  17,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  4                                    /* checkKind */
};

static emlrtBCInfo wc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  1842,                                /* lineNo */
  45,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo xc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  1847,                                /* lineNo */
  45,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo yc_emlrtBCI = { 0,  /* iFirst */
  6,                                   /* iLast */
  1843,                                /* lineNo */
  50,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo ic_emlrtDCI = { 1843,/* lineNo */
  50,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo ad_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  1843,                                /* lineNo */
  71,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo bd_emlrtBCI = { 0,  /* iFirst */
  6,                                   /* iLast */
  1848,                                /* lineNo */
  47,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo jc_emlrtDCI = { 1848,/* lineNo */
  47,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo cd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  1848,                                /* lineNo */
  68,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo dd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  1981,                                /* lineNo */
  33,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ed_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  1981,                                /* lineNo */
  31,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo fd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  1971,                                /* lineNo */
  21,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo kc_emlrtDCI = { 1969,/* lineNo */
  31,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo lc_emlrtDCI = { 1969,/* lineNo */
  31,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  4                                    /* checkKind */
};

static emlrtDCInfo mc_emlrtDCI = { 1969,/* lineNo */
  13,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo nc_emlrtDCI = { 1969,/* lineNo */
  13,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  4                                    /* checkKind */
};

static emlrtBCInfo gd_emlrtBCI = { 0,  /* iFirst */
  6,                                   /* iLast */
  1973,                                /* lineNo */
  35,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo oc_emlrtDCI = { 1973,/* lineNo */
  35,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo hd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  1978,                                /* lineNo */
  25,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo id_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  1974,                                /* lineNo */
  25,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo jd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  42,                                  /* lineNo */
  28,                                  /* colNo */
  "",                                  /* aName */
  "axang2rotm",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\robotics\\robotutils\\+robotics\\+internal\\axang2rotm.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo kd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  61,                                  /* lineNo */
  23,                                  /* colNo */
  "",                                  /* aName */
  "IKHelpers",                         /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\IKHelpers.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo k_emlrtECI = { -1,  /* nDims */
  45,                                  /* lineNo */
  5,                                   /* colNo */
  "rotm2axang",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\robotics\\robotutils\\+robotics\\+internal\\rotm2axang.m"/* pName */
};

static emlrtBCInfo ld_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  43,                                  /* lineNo */
  20,                                  /* colNo */
  "",                                  /* aName */
  "rotm2axang",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\robotics\\robotutils\\+robotics\\+internal\\rotm2axang.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo md_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  42,                                  /* lineNo */
  41,                                  /* colNo */
  "",                                  /* aName */
  "rotm2axang",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\robotics\\robotutils\\+robotics\\+internal\\rotm2axang.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo nd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  59,                                  /* lineNo */
  19,                                  /* colNo */
  "",                                  /* aName */
  "IKHelpers",                         /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\IKHelpers.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo od_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  59,                                  /* lineNo */
  23,                                  /* colNo */
  "",                                  /* aName */
  "IKHelpers",                         /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\IKHelpers.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo pd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  61,                                  /* lineNo */
  19,                                  /* colNo */
  "",                                  /* aName */
  "IKHelpers",                         /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\IKHelpers.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo pc_emlrtDCI = { 21, /* lineNo */
  28,                                  /* colNo */
  "eml_rand_mt19937ar_stateful",       /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\randfun\\private\\eml_rand_mt19937ar_stateful.m",/* pName */
  4                                    /* checkKind */
};

static emlrtRTEInfo i_emlrtRTEI = { 254,/* lineNo */
  25,                                  /* colNo */
  "CollisionSet",                      /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\CollisionSet.m"/* pName */
};

static emlrtBCInfo qd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  255,                                 /* lineNo */
  45,                                  /* colNo */
  "",                                  /* aName */
  "CollisionSet",                      /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\CollisionSet.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo rd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  255,                                 /* lineNo */
  79,                                  /* colNo */
  "",                                  /* aName */
  "CollisionSet",                      /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\CollisionSet.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo l_emlrtECI = { -1,  /* nDims */
  1646,                                /* lineNo */
  21,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pName */
};

static emlrtECInfo m_emlrtECI = { -1,  /* nDims */
  1649,                                /* lineNo */
  21,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pName */
};

static emlrtBCInfo sd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  1646,                                /* lineNo */
  63,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo td_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  1649,                                /* lineNo */
  63,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtRSInfo gm_emlrtRSI = { 269,/* lineNo */
  "xzsvdc",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\+reflapack\\xzsvdc.m"/* pathName */
};

static emlrtRSInfo hm_emlrtRSI = { 13, /* lineNo */
  "sqrt",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\elfun\\sqrt.m"/* pathName */
};

static emlrtRSInfo im_emlrtRSI = { 15, /* lineNo */
  "validatesize",                      /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\+valattr\\validatesize.m"/* pathName */
};

static emlrtRSInfo jm_emlrtRSI = { 14, /* lineNo */
  "validatefinite",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\+valattr\\validatefinite.m"/* pathName */
};

static emlrtRSInfo km_emlrtRSI = { 14, /* lineNo */
  "validatenonnan",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\+valattr\\validatenonnan.m"/* pathName */
};

static emlrtRSInfo lm_emlrtRSI = { 14, /* lineNo */
  "validatenonnegative",               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\+valattr\\validatenonnegative.m"/* pathName */
};

static emlrtRSInfo mm_emlrtRSI = { 28, /* lineNo */
  "error",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\error.m"/* pathName */
};

static emlrtRSInfo nm_emlrtRSI = { 15, /* lineNo */
  "assertSupportedString",             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\assertSupportedString.m"/* pathName */
};

static emlrtRSInfo om_emlrtRSI = { 13, /* lineNo */
  "validatenonempty",                  /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\+valattr\\validatenonempty.m"/* pathName */
};

static emlrtRSInfo pm_emlrtRSI = { 158,/* lineNo */
  "eml_rand_mt19937ar",                /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\randfun\\eml_rand_mt19937ar.m"/* pathName */
};

static emlrtRSInfo qm_emlrtRSI = { 10, /* lineNo */
  "validatesize",                      /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\+valattr\\validatesize.m"/* pathName */
};

static emlrtRSInfo rm_emlrtRSI = { 133,/* lineNo */
  "eml_mtimes_helper",                 /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\ops\\eml_mtimes_helper.m"/* pathName */
};

static emlrtRSInfo sm_emlrtRSI = { 138,/* lineNo */
  "eml_mtimes_helper",                 /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\ops\\eml_mtimes_helper.m"/* pathName */
};

static emlrtRSInfo tm_emlrtRSI = { 134,/* lineNo */
  "unaryMinOrMax",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\unaryMinOrMax.m"/* pathName */
};

static emlrtRSInfo um_emlrtRSI = { 28, /* lineNo */
  "unaryMinOrMax",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\unaryMinOrMax.m"/* pathName */
};

static emlrtRSInfo vm_emlrtRSI = { 47, /* lineNo */
  "allOrAny",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\allOrAny.m"/* pathName */
};

static emlrtRSInfo wm_emlrtRSI = { 392,/* lineNo */
  "find",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"/* pathName */
};

static emlrtRSInfo xm_emlrtRSI = { 13, /* lineNo */
  "assertCompatibleDims",              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\coder\\coder\\lib\\+coder\\+internal\\assertCompatibleDims.m"/* pathName */
};

static emlrtRSInfo ym_emlrtRSI = { 102,/* lineNo */
  "diag",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\elmat\\diag.m"/* pathName */
};

static emlrtRSInfo an_emlrtRSI = { 14, /* lineNo */
  "inv",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\matfun\\inv.m"/* pathName */
};

static emlrtRSInfo bn_emlrtRSI = { 419,/* lineNo */
  "colon",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\ops\\colon.m"/* pathName */
};

static emlrtRSInfo cn_emlrtRSI = { 16, /* lineNo */
  "mldivide",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\ops\\mldivide.m"/* pathName */
};

static emlrtRSInfo dn_emlrtRSI = { 18, /* lineNo */
  "validatencols",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\+valattr\\validatencols.m"/* pathName */
};

static emlrtRSInfo en_emlrtRSI = { 288,/* lineNo */
  "cat",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\cat.m"/* pathName */
};

static emlrtRSInfo fn_emlrtRSI = { 122,/* lineNo */
  "indexShapeCheck",                   /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\indexShapeCheck.m"/* pathName */
};

static emlrtRSInfo gn_emlrtRSI = { 21, /* lineNo */
  "error",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\error.m"/* pathName */
};

static emlrtRSInfo hn_emlrtRSI = { 64, /* lineNo */
  "assertValidSizeArg",                /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\assertValidSizeArg.m"/* pathName */
};

static emlrtRSInfo in_emlrtRSI = { 58, /* lineNo */
  "assertValidSizeArg",                /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\assertValidSizeArg.m"/* pathName */
};

static emlrtRSInfo jn_emlrtRSI = { 131,/* lineNo */
  "validatestring",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\lang\\validatestring.m"/* pathName */
};

static emlrtRSInfo kn_emlrtRSI = { 139,/* lineNo */
  "validatestring",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\lang\\validatestring.m"/* pathName */
};

static emlrtRSInfo ln_emlrtRSI = { 14, /* lineNo */
  "warning",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\coder\\coder\\lib\\+coder\\+internal\\warning.m"/* pathName */
};

static emlrtRSInfo mn_emlrtRSI = { 53, /* lineNo */
  "flt2str",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\flt2str.m"/* pathName */
};

/* Function Declarations */
static void cgxe_mdl_start(InstanceStruct_dnGfh1DX0a11xSfGnyzF5G *moduleInstance);
static void cgxe_mdl_initialize(InstanceStruct_dnGfh1DX0a11xSfGnyzF5G
  *moduleInstance);
static void cgxe_mdl_outputs(InstanceStruct_dnGfh1DX0a11xSfGnyzF5G
  *moduleInstance);
static void cgxe_mdl_update(InstanceStruct_dnGfh1DX0a11xSfGnyzF5G
  *moduleInstance);
static void cgxe_mdl_enable(InstanceStruct_dnGfh1DX0a11xSfGnyzF5G
  *moduleInstance);
static void cgxe_mdl_disable(InstanceStruct_dnGfh1DX0a11xSfGnyzF5G
  *moduleInstance);
static void cgxe_mdl_terminate(InstanceStruct_dnGfh1DX0a11xSfGnyzF5G
  *moduleInstance);
static void mw__internal__call__setup(InstanceStruct_dnGfh1DX0a11xSfGnyzF5G
  *moduleInstance, const emlrtStack *sp, real_T b_u0[3], real_T b_u1[3]);
static void SystemCore_setup(InstanceStruct_dnGfh1DX0a11xSfGnyzF5G
  *moduleInstance, const emlrtStack *sp,
  c_robotics_slcore_internal_block_CoordinateTransformationConvers *obj, real_T
  varargin_1[3], real_T varargin_2[3], cgxertBlkSrcLocInfo *blkSrc);
static void validateattributes(InstanceStruct_dnGfh1DX0a11xSfGnyzF5G
  *moduleInstance, const emlrtStack *sp, real_T a[3]);
static void mw__internal__call__reset(InstanceStruct_dnGfh1DX0a11xSfGnyzF5G
  *moduleInstance, const emlrtStack *sp);
static void mw__internal__call__step(InstanceStruct_dnGfh1DX0a11xSfGnyzF5G
  *moduleInstance, const emlrtStack *sp, real_T b_u0[3], real_T b_u1[3], real_T
  c_y0[16]);
static void mw__internal__system__init__fcn
  (InstanceStruct_dnGfh1DX0a11xSfGnyzF5G *moduleInstance);
static void mw__internal__system__terminate__fcn
  (InstanceStruct_dnGfh1DX0a11xSfGnyzF5G *moduleInstance, const emlrtStack *sp);
static void b_mw__internal__call__setup(InstanceStruct_dnGfh1DX0a11xSfGnyzF5G
  *moduleInstance, const emlrtStack *sp);
static void b_SystemCore_setup(InstanceStruct_dnGfh1DX0a11xSfGnyzF5G
  *moduleInstance, const emlrtStack *sp, robotics_slmanip_internal_block_IKBlock
  *obj, cgxertBlkSrcLocInfo *blkSrc);
static real_T minimum2(real_T x, real_T y);
static robotics_manip_internal_RigidBody *RigidBody_RigidBody
  (InstanceStruct_dnGfh1DX0a11xSfGnyzF5G *moduleInstance, const emlrtStack *sp,
   robotics_manip_internal_RigidBody *obj, robotics_manip_internal_CollisionSet *
   iobj_0, rigidBodyJoint *iobj_1);
static boolean_T b_strcmp(emxArray_char_T *a);
static boolean_T c_strcmp(emxArray_char_T *a);
static void eye(real_T b_I[36]);
static robotics_manip_internal_CollisionSet *CollisionSet_CollisionSet
  (InstanceStruct_dnGfh1DX0a11xSfGnyzF5G *moduleInstance, const emlrtStack *sp,
   robotics_manip_internal_CollisionSet *obj, real_T maxElements);
static robotics_manip_internal_RigidBody *b_RigidBody_RigidBody
  (InstanceStruct_dnGfh1DX0a11xSfGnyzF5G *moduleInstance, const emlrtStack *sp,
   robotics_manip_internal_RigidBody *obj, robotics_manip_internal_CollisionSet *
   iobj_0, rigidBodyJoint *iobj_1);
static robotics_manip_internal_RigidBody *c_RigidBody_RigidBody
  (InstanceStruct_dnGfh1DX0a11xSfGnyzF5G *moduleInstance, const emlrtStack *sp,
   robotics_manip_internal_RigidBody *obj, robotics_manip_internal_CollisionSet *
   iobj_0, rigidBodyJoint *iobj_1);
static robotics_manip_internal_RigidBody *d_RigidBody_RigidBody
  (InstanceStruct_dnGfh1DX0a11xSfGnyzF5G *moduleInstance, const emlrtStack *sp,
   robotics_manip_internal_RigidBody *obj, robotics_manip_internal_CollisionSet *
   iobj_0, rigidBodyJoint *iobj_1);
static robotics_manip_internal_RigidBody *e_RigidBody_RigidBody
  (InstanceStruct_dnGfh1DX0a11xSfGnyzF5G *moduleInstance, const emlrtStack *sp,
   robotics_manip_internal_RigidBody *obj, robotics_manip_internal_CollisionSet *
   iobj_0, rigidBodyJoint *iobj_1);
static robotics_manip_internal_RigidBody *f_RigidBody_RigidBody
  (InstanceStruct_dnGfh1DX0a11xSfGnyzF5G *moduleInstance, const emlrtStack *sp,
   robotics_manip_internal_RigidBody *obj, robotics_manip_internal_CollisionSet *
   iobj_0, rigidBodyJoint *iobj_1);
static robotics_manip_internal_RigidBody *g_RigidBody_RigidBody
  (InstanceStruct_dnGfh1DX0a11xSfGnyzF5G *moduleInstance, const emlrtStack *sp,
   robotics_manip_internal_RigidBody *obj, robotics_manip_internal_CollisionSet *
   iobj_0, rigidBodyJoint *iobj_1);
static robotics_manip_internal_RigidBody *h_RigidBody_RigidBody
  (InstanceStruct_dnGfh1DX0a11xSfGnyzF5G *moduleInstance, const emlrtStack *sp,
   robotics_manip_internal_RigidBody *obj, robotics_manip_internal_CollisionSet *
   iobj_0, rigidBodyJoint *iobj_1);
static robotics_manip_internal_RigidBody *i_RigidBody_RigidBody
  (InstanceStruct_dnGfh1DX0a11xSfGnyzF5G *moduleInstance, const emlrtStack *sp,
   robotics_manip_internal_RigidBody *obj, robotics_manip_internal_CollisionSet *
   iobj_0, rigidBodyJoint *iobj_1);
static robotics_manip_internal_RigidBody *j_RigidBody_RigidBody
  (InstanceStruct_dnGfh1DX0a11xSfGnyzF5G *moduleInstance, const emlrtStack *sp,
   robotics_manip_internal_RigidBody *obj, robotics_manip_internal_CollisionSet *
   iobj_0, rigidBodyJoint *iobj_1);
static robotics_manip_internal_RigidBody *k_RigidBody_RigidBody
  (InstanceStruct_dnGfh1DX0a11xSfGnyzF5G *moduleInstance, const emlrtStack *sp,
   robotics_manip_internal_RigidBody *obj, robotics_manip_internal_CollisionSet *
   iobj_0, rigidBodyJoint *iobj_1);
static robotics_manip_internal_RigidBody *l_RigidBody_RigidBody
  (InstanceStruct_dnGfh1DX0a11xSfGnyzF5G *moduleInstance, const emlrtStack *sp,
   robotics_manip_internal_RigidBody *obj, robotics_manip_internal_CollisionSet *
   iobj_0, rigidBodyJoint *iobj_1);
static robotics_manip_internal_RigidBody *m_RigidBody_RigidBody
  (InstanceStruct_dnGfh1DX0a11xSfGnyzF5G *moduleInstance, const emlrtStack *sp,
   robotics_manip_internal_RigidBody *obj, robotics_manip_internal_CollisionSet *
   iobj_0, rigidBodyJoint *iobj_1);
static rigidBodyJoint *rigidBodyJoint_rigidBodyJoint
  (InstanceStruct_dnGfh1DX0a11xSfGnyzF5G *moduleInstance, const emlrtStack *sp,
   rigidBodyJoint *obj, emxArray_char_T *jname);
static void b_validateattributes(InstanceStruct_dnGfh1DX0a11xSfGnyzF5G
  *moduleInstance, const emlrtStack *sp, emxArray_char_T *a);
static void SystemProp_setProperties(InstanceStruct_dnGfh1DX0a11xSfGnyzF5G
  *moduleInstance, const emlrtStack *sp, inverseKinematics *obj,
  robotics_manip_internal_RigidBodyTree *varargin_2, rigidBodyJoint *iobj_0,
  robotics_manip_internal_RigidBody *iobj_1,
  robotics_manip_internal_CollisionSet *iobj_2,
  robotics_manip_internal_RigidBodyTree_1 *iobj_3,
  robotics_core_internal_DampedBFGSwGradientProjection *iobj_4);
static robotics_manip_internal_RigidBodyTree_1 *RigidBodyTree_RigidBodyTree
  (InstanceStruct_dnGfh1DX0a11xSfGnyzF5G *moduleInstance, const emlrtStack *sp,
   robotics_manip_internal_RigidBodyTree_1 *obj);
static void b_rand(InstanceStruct_dnGfh1DX0a11xSfGnyzF5G *moduleInstance, const
                   emlrtStack *sp, real_T r[5]);
static boolean_T is_valid_state(uint32_T mt[625]);
static void c_validateattributes(InstanceStruct_dnGfh1DX0a11xSfGnyzF5G
  *moduleInstance, const emlrtStack *sp, emxArray_char_T *a);
static boolean_T d_strcmp(emxArray_char_T *a, emxArray_char_T *b_b);
static robotics_manip_internal_CollisionSet *CollisionSet_copy
  (InstanceStruct_dnGfh1DX0a11xSfGnyzF5G *moduleInstance, const emlrtStack *sp,
   robotics_manip_internal_CollisionSet *obj,
   robotics_manip_internal_CollisionSet *iobj_0);
static void RigidBodyTree_addBody(InstanceStruct_dnGfh1DX0a11xSfGnyzF5G
  *moduleInstance, const emlrtStack *sp, robotics_manip_internal_RigidBodyTree_1
  *obj, robotics_manip_internal_RigidBody *bodyin, emxArray_char_T *parentName,
  robotics_manip_internal_CollisionSet *iobj_0, rigidBodyJoint *iobj_1,
  robotics_manip_internal_RigidBody *iobj_2, cgxertBlkSrcLocInfo *blkSrc);
static real_T RigidBodyTree_findBodyIndexByName
  (InstanceStruct_dnGfh1DX0a11xSfGnyzF5G *moduleInstance, const emlrtStack *sp,
   robotics_manip_internal_RigidBodyTree_1 *obj, emxArray_char_T *bodyname);
static real_T RigidBodyTree_validateInputBodyName
  (InstanceStruct_dnGfh1DX0a11xSfGnyzF5G *moduleInstance, const emlrtStack *sp,
   robotics_manip_internal_RigidBodyTree_1 *obj, emxArray_char_T *bodyname);
static void error(InstanceStruct_dnGfh1DX0a11xSfGnyzF5G *moduleInstance, const
                  emlrtStack *sp, cgxertBlkSrcLocInfo *blkSrc);
static robotics_manip_internal_RigidBody *RigidBody_copy
  (InstanceStruct_dnGfh1DX0a11xSfGnyzF5G *moduleInstance, const emlrtStack *sp,
   robotics_manip_internal_RigidBody *obj, robotics_manip_internal_CollisionSet *
   iobj_0, rigidBodyJoint *iobj_1, robotics_manip_internal_RigidBody *iobj_2);
static void get_match(InstanceStruct_dnGfh1DX0a11xSfGnyzF5G *moduleInstance,
                      const emlrtStack *sp, emxArray_char_T *str, char_T
                      match_data[], int32_T match_size[2], int32_T *nmatched);
static void assertSupportedString(InstanceStruct_dnGfh1DX0a11xSfGnyzF5G
  *moduleInstance, const emlrtStack *sp, char_T s, cgxertBlkSrcLocInfo *blkSrc);
static void warning(InstanceStruct_dnGfh1DX0a11xSfGnyzF5G *moduleInstance, const
                    emlrtStack *sp, cgxertBlkSrcLocInfo *blkSrc);
static boolean_T e_strcmp(emxArray_char_T *a);
static void inverseKinematics_set_SolverAlgorithm(inverseKinematics *obj,
  robotics_core_internal_DampedBFGSwGradientProjection *iobj_0);
static void b_mw__internal__call__reset(InstanceStruct_dnGfh1DX0a11xSfGnyzF5G
  *moduleInstance, const emlrtStack *sp);
static void b_mw__internal__call__step(InstanceStruct_dnGfh1DX0a11xSfGnyzF5G
  *moduleInstance, const emlrtStack *sp, real_T b_u0[16], real_T b_u1[6], real_T
  b_u2[6], real_T c_y0[6], real_T *y1_Iterations, real_T *y1_PoseErrorNorm,
  uint16_T *y1_ExitFlag, uint8_T *y1_Status);
static void b_eye(InstanceStruct_dnGfh1DX0a11xSfGnyzF5G *moduleInstance, const
                  emlrtStack *sp, real_T varargin_1, emxArray_real_T *b_I);
static void RigidBodyTree_get_JointPositionLimits
  (InstanceStruct_dnGfh1DX0a11xSfGnyzF5G *moduleInstance, const emlrtStack *sp,
   robotics_manip_internal_RigidBodyTree_1 *obj, emxArray_real_T *limits,
   cgxertBlkSrcLocInfo *blkSrc);
static void inverseKinematics_stepImpl(InstanceStruct_dnGfh1DX0a11xSfGnyzF5G
  *moduleInstance, const emlrtStack *sp, inverseKinematics *obj, real_T tform[16],
  real_T weights[6], real_T initialGuess[6], real_T QSol[6], real_T
  *solutionInfo_Iterations, real_T *solutionInfo_PoseErrorNorm, real_T
  *solutionInfo_ExitFlag, char_T solutionInfo_Status_data[], int32_T
  solutionInfo_Status_size[2]);
static boolean_T f_strcmp(emxArray_char_T *a);
static void inv(InstanceStruct_dnGfh1DX0a11xSfGnyzF5G *moduleInstance, const
                emlrtStack *sp, real_T x[9], real_T y[9]);
static real_T b_norm(real_T x[9]);
static void b_warning(InstanceStruct_dnGfh1DX0a11xSfGnyzF5G *moduleInstance,
                      const emlrtStack *sp, cgxertBlkSrcLocInfo *blkSrc);
static void c_warning(InstanceStruct_dnGfh1DX0a11xSfGnyzF5G *moduleInstance,
                      const emlrtStack *sp, char_T varargin_1[14],
                      cgxertBlkSrcLocInfo *blkSrc);
static void d_warning(InstanceStruct_dnGfh1DX0a11xSfGnyzF5G *moduleInstance,
                      const emlrtStack *sp, cgxertBlkSrcLocInfo *blkSrc);
static void d_validateattributes(InstanceStruct_dnGfh1DX0a11xSfGnyzF5G
  *moduleInstance, const emlrtStack *sp, real_T a[6]);
static void inverseKinematics_solve(InstanceStruct_dnGfh1DX0a11xSfGnyzF5G
  *moduleInstance, const emlrtStack *sp, inverseKinematics *obj, real_T
  initialGuess[6], real_T QSol[6], real_T *solutionInfo_Iterations, real_T
  *solutionInfo_NumRandomRestarts, real_T *solutionInfo_PoseErrorNorm, real_T
  *solutionInfo_ExitFlag, char_T solutionInfo_Status_data[], int32_T
  solutionInfo_Status_size[2], cgxertBlkSrcLocInfo *blkSrc);
static void eml_find(InstanceStruct_dnGfh1DX0a11xSfGnyzF5G *moduleInstance,
                     const emlrtStack *sp, boolean_T x[6], int32_T i_data[],
                     int32_T i_size[1]);
static void indexShapeCheck(InstanceStruct_dnGfh1DX0a11xSfGnyzF5G
  *moduleInstance, const emlrtStack *sp, int32_T matrixSize, int32_T indexSize[2]);
static void e_warning(InstanceStruct_dnGfh1DX0a11xSfGnyzF5G *moduleInstance,
                      const emlrtStack *sp, cgxertBlkSrcLocInfo *blkSrc);
static void NLPSolverInterface_solve(InstanceStruct_dnGfh1DX0a11xSfGnyzF5G
  *moduleInstance, const emlrtStack *sp,
  robotics_core_internal_DampedBFGSwGradientProjection *obj, real_T seed[6],
  real_T xSol[6], real_T *solutionInfo_Iterations, real_T
  *solutionInfo_RRAttempts, real_T *solutionInfo_Error, real_T
  *solutionInfo_ExitFlag, char_T solutionInfo_Status_data[], int32_T
  solutionInfo_Status_size[2], cgxertBlkSrcLocInfo *blkSrc);
static void SystemTimeProvider_reset(robotics_core_internal_SystemTimeProvider
  *obj);
static emlrtTimespec tic(void);
static void DampedBFGSwGradientProjection_solveInternal
  (InstanceStruct_dnGfh1DX0a11xSfGnyzF5G *moduleInstance, const emlrtStack *sp,
   robotics_core_internal_DampedBFGSwGradientProjection *obj, real_T xSol[6],
   robotics_core_internal_NLPSolverExitFlags *exitFlag, real_T *err, real_T
   *iter, cgxertBlkSrcLocInfo *blkSrc);
static void IKHelpers_computeCost(InstanceStruct_dnGfh1DX0a11xSfGnyzF5G
  *moduleInstance, const emlrtStack *sp, real_T x[6],
  robotics_manip_internal_IKExtraArgs *args, real_T *cost, real_T W[36],
  emxArray_real_T *Jac, robotics_manip_internal_IKExtraArgs **b_args);
static void RigidBodyTree_efficientFKAndJacobianForIK
  (InstanceStruct_dnGfh1DX0a11xSfGnyzF5G *moduleInstance, const emlrtStack *sp,
   robotics_manip_internal_RigidBodyTree_1 *obj, real_T qv[6], emxArray_char_T
   *body1Name, real_T T_data[], int32_T T_size[2], emxArray_real_T *Jac,
   cgxertBlkSrcLocInfo *blkSrc);
static void RigidBodyTree_ancestorIndices(InstanceStruct_dnGfh1DX0a11xSfGnyzF5G *
  moduleInstance, const emlrtStack *sp, robotics_manip_internal_RigidBodyTree_1 *
  obj, robotics_manip_internal_RigidBody *body, emxArray_real_T *indices,
  cgxertBlkSrcLocInfo *blkSrc);
static void rigidBodyJoint_transformBodyToParent
  (InstanceStruct_dnGfh1DX0a11xSfGnyzF5G *moduleInstance, const emlrtStack *sp,
   rigidBodyJoint *obj, real_T T[16]);
static void normalizeRows(InstanceStruct_dnGfh1DX0a11xSfGnyzF5G *moduleInstance,
  const emlrtStack *sp, real_T matrix[3], real_T normRowMatrix[3]);
static real_T sumColumnB(real_T x[3]);
static void cat(real_T varargin_1, real_T varargin_2, real_T varargin_3, real_T
                varargin_4, real_T varargin_5, real_T varargin_6, real_T
                varargin_7, real_T varargin_8, real_T varargin_9, real_T y[9]);
static void permute(real_T a[9], real_T b_b[9]);
static void b_rigidBodyJoint_transformBodyToParent
  (InstanceStruct_dnGfh1DX0a11xSfGnyzF5G *moduleInstance, const emlrtStack *sp,
   rigidBodyJoint *obj, real_T q_data[], int32_T q_size[1], real_T T[16]);
static void mtimes(real_T A[36], emxArray_real_T *B, emxArray_real_T *C);
static void IKHelpers_poseError(InstanceStruct_dnGfh1DX0a11xSfGnyzF5G
  *moduleInstance, const emlrtStack *sp, real_T Td[16], real_T T_data[], int32_T
  T_size[2], real_T errorvec[6], cgxertBlkSrcLocInfo *blkSrc);
static void xzsvdc(InstanceStruct_dnGfh1DX0a11xSfGnyzF5G *moduleInstance, const
                   emlrtStack *sp, real_T A[9], real_T U[9], real_T b_S[3],
                   real_T V[9]);
static real_T xnrm2(int32_T n, real_T x[9], int32_T ix0);
static real_T xdotc(int32_T n, real_T x[9], int32_T ix0, real_T y[9], int32_T
                    iy0);
static real_T b_xnrm2(real_T x[3], int32_T ix0);
static void dynamic_size_checks(InstanceStruct_dnGfh1DX0a11xSfGnyzF5G
  *moduleInstance, const emlrtStack *sp, emxArray_real_T *a, int32_T innerDimA,
  cgxertBlkSrcLocInfo *blkSrc);
static void b_mtimes(emxArray_real_T *A, real_T B[6], emxArray_real_T *C);
static void b_dynamic_size_checks(InstanceStruct_dnGfh1DX0a11xSfGnyzF5G
  *moduleInstance, const emlrtStack *sp, emxArray_real_T *a, int32_T innerDimA,
  cgxertBlkSrcLocInfo *blkSrc);
static void c_dynamic_size_checks(InstanceStruct_dnGfh1DX0a11xSfGnyzF5G
  *moduleInstance, const emlrtStack *sp, emxArray_real_T *b_b, int32_T innerDimB,
  cgxertBlkSrcLocInfo *blkSrc);
static void d_dynamic_size_checks(InstanceStruct_dnGfh1DX0a11xSfGnyzF5G
  *moduleInstance, const emlrtStack *sp, emxArray_real_T *b_b, int32_T innerDimB,
  cgxertBlkSrcLocInfo *blkSrc);
static void c_mtimes(real_T A[36], emxArray_real_T *B, emxArray_real_T *C);
static void e_dynamic_size_checks(InstanceStruct_dnGfh1DX0a11xSfGnyzF5G
  *moduleInstance, const emlrtStack *sp, int32_T innerDimA, cgxertBlkSrcLocInfo *
  blkSrc);
static real_T SystemTimeProvider_getElapsedTime
  (InstanceStruct_dnGfh1DX0a11xSfGnyzF5G *moduleInstance, const emlrtStack *sp,
   robotics_core_internal_SystemTimeProvider *obj, cgxertBlkSrcLocInfo *blkSrc);
static real_T toc(real_T tstart_tv_sec, real_T tstart_tv_nsec);
static real_T IKHelpers_evaluateSolution(InstanceStruct_dnGfh1DX0a11xSfGnyzF5G
  *moduleInstance, const emlrtStack *sp, robotics_manip_internal_IKExtraArgs
  *args);
static void f_dynamic_size_checks(InstanceStruct_dnGfh1DX0a11xSfGnyzF5G
  *moduleInstance, const emlrtStack *sp, emxArray_real_T *b_b, int32_T innerDimB,
  cgxertBlkSrcLocInfo *blkSrc);
static real_T c_norm(real_T x[6]);
static void g_dynamic_size_checks(InstanceStruct_dnGfh1DX0a11xSfGnyzF5G
  *moduleInstance, const emlrtStack *sp, emxArray_real_T *a, emxArray_real_T
  *b_b, int32_T innerDimA, int32_T innerDimB, cgxertBlkSrcLocInfo *blkSrc);
static void d_mtimes(emxArray_real_T *A, emxArray_real_T *B, emxArray_real_T *C);
static void mldivide(InstanceStruct_dnGfh1DX0a11xSfGnyzF5G *moduleInstance,
                     const emlrtStack *sp, emxArray_real_T *A, emxArray_real_T
                     *B, emxArray_real_T *Y, cgxertBlkSrcLocInfo *blkSrc);
static void mldiv(InstanceStruct_dnGfh1DX0a11xSfGnyzF5G *moduleInstance, const
                  emlrtStack *sp, emxArray_real_T *A, emxArray_real_T *B,
                  emxArray_real_T *Y);
static void repmat(ptrdiff_t a, int32_T varargin_1, emxArray_ptrdiff_t *b_b);
static void assert_pmaxsize(InstanceStruct_dnGfh1DX0a11xSfGnyzF5G
  *moduleInstance, const emlrtStack *sp, boolean_T p, cgxertBlkSrcLocInfo
  *blkSrc);
static void f_warning(InstanceStruct_dnGfh1DX0a11xSfGnyzF5G *moduleInstance,
                      const emlrtStack *sp, int32_T varargin_1, char_T
                      varargin_2[14], cgxertBlkSrcLocInfo *blkSrc);
static void h_dynamic_size_checks(InstanceStruct_dnGfh1DX0a11xSfGnyzF5G
  *moduleInstance, const emlrtStack *sp, emxArray_real_T *a, emxArray_real_T
  *b_b, int32_T innerDimA, int32_T innerDimB, cgxertBlkSrcLocInfo *blkSrc);
static void e_mtimes(emxArray_real_T *A, emxArray_real_T *B, emxArray_real_T *C);
static boolean_T DampedBFGSwGradientProjection_atLocalMinimum
  (InstanceStruct_dnGfh1DX0a11xSfGnyzF5G *moduleInstance, const emlrtStack *sp,
   robotics_core_internal_DampedBFGSwGradientProjection *obj, real_T Hg[6],
   emxArray_real_T *alpha);
static boolean_T all(InstanceStruct_dnGfh1DX0a11xSfGnyzF5G *moduleInstance,
                     const emlrtStack *sp, emxArray_boolean_T *x);
static void b_inv(InstanceStruct_dnGfh1DX0a11xSfGnyzF5G *moduleInstance, const
                  emlrtStack *sp, emxArray_real_T *x, emxArray_real_T *y,
                  cgxertBlkSrcLocInfo *blkSrc);
static real_T d_norm(emxArray_real_T *x);
static void diag(InstanceStruct_dnGfh1DX0a11xSfGnyzF5G *moduleInstance, const
                 emlrtStack *sp, emxArray_real_T *v, emxArray_real_T *d,
                 cgxertBlkSrcLocInfo *blkSrc);
static void assertCompatibleDims(InstanceStruct_dnGfh1DX0a11xSfGnyzF5G
  *moduleInstance, const emlrtStack *sp, emxArray_real_T *x, emxArray_real_T *y,
  cgxertBlkSrcLocInfo *blkSrc);
static void maximum(InstanceStruct_dnGfh1DX0a11xSfGnyzF5G *moduleInstance, const
                    emlrtStack *sp, emxArray_real_T *x, real_T *ex, int32_T *idx);
static void b_eml_find(InstanceStruct_dnGfh1DX0a11xSfGnyzF5G *moduleInstance,
  const emlrtStack *sp, emxArray_boolean_T *x, emxArray_int32_T *i);
static void f_mtimes(emxArray_real_T *A, emxArray_real_T *B, emxArray_real_T *C);
static boolean_T any(InstanceStruct_dnGfh1DX0a11xSfGnyzF5G *moduleInstance,
                     const emlrtStack *sp, emxArray_boolean_T *x);
static void minimum(InstanceStruct_dnGfh1DX0a11xSfGnyzF5G *moduleInstance, const
                    emlrtStack *sp, emxArray_real_T *x, real_T *ex, int32_T *idx);
static void i_dynamic_size_checks(InstanceStruct_dnGfh1DX0a11xSfGnyzF5G
  *moduleInstance, const emlrtStack *sp, emxArray_real_T *a, int32_T innerDimA,
  cgxertBlkSrcLocInfo *blkSrc);
static void j_dynamic_size_checks(InstanceStruct_dnGfh1DX0a11xSfGnyzF5G
  *moduleInstance, const emlrtStack *sp, emxArray_real_T *a, int32_T innerDimA,
  cgxertBlkSrcLocInfo *blkSrc);
static void g_mtimes(emxArray_real_T *A, real_T B[36], emxArray_real_T *C);
static void k_dynamic_size_checks(InstanceStruct_dnGfh1DX0a11xSfGnyzF5G
  *moduleInstance, const emlrtStack *sp, int32_T innerDimB, cgxertBlkSrcLocInfo *
  blkSrc);
static void l_dynamic_size_checks(InstanceStruct_dnGfh1DX0a11xSfGnyzF5G
  *moduleInstance, const emlrtStack *sp, emxArray_real_T *b_b, int32_T innerDimB,
  cgxertBlkSrcLocInfo *blkSrc);
static void m_dynamic_size_checks(InstanceStruct_dnGfh1DX0a11xSfGnyzF5G
  *moduleInstance, const emlrtStack *sp, emxArray_real_T *a, int32_T innerDimA,
  cgxertBlkSrcLocInfo *blkSrc);
static boolean_T isPositiveDefinite(real_T B[36]);
static boolean_T DampedBFGSwGradientProjection_searchDirectionInvalid
  (InstanceStruct_dnGfh1DX0a11xSfGnyzF5G *moduleInstance, const emlrtStack *sp,
   robotics_core_internal_DampedBFGSwGradientProjection *obj, real_T xNew[6]);
static void c_rand(InstanceStruct_dnGfh1DX0a11xSfGnyzF5G *moduleInstance, const
                   emlrtStack *sp, real_T varargin_1, emxArray_real_T *r);
static void randn(InstanceStruct_dnGfh1DX0a11xSfGnyzF5G *moduleInstance, const
                  emlrtStack *sp, real_T varargin_1[2], emxArray_real_T *r);
static void g_warning(InstanceStruct_dnGfh1DX0a11xSfGnyzF5G *moduleInstance,
                      const emlrtStack *sp, cgxertBlkSrcLocInfo *blkSrc);
static void handle_matlabCodegenDestructor(InstanceStruct_dnGfh1DX0a11xSfGnyzF5G
  *moduleInstance, const emlrtStack *sp, robotics_manip_internal_CollisionSet
  *obj);
static void emlrt_marshallIn(InstanceStruct_dnGfh1DX0a11xSfGnyzF5G
  *moduleInstance, const emlrtStack *sp, const mxArray *a__output_of_sprintf_,
  const char_T *identifier, char_T y[14]);
static void b_emlrt_marshallIn(InstanceStruct_dnGfh1DX0a11xSfGnyzF5G
  *moduleInstance, const emlrtStack *sp, const mxArray *b_u, const
  emlrtMsgIdentifier *parentId, char_T y[14]);
static const mxArray *emlrt_marshallOut(InstanceStruct_dnGfh1DX0a11xSfGnyzF5G
  *moduleInstance, const emlrtStack *sp, const char_T b_u[30],
  cgxertBlkSrcLocInfo *blkSrc);
static const mxArray *message(InstanceStruct_dnGfh1DX0a11xSfGnyzF5G
  *moduleInstance, const emlrtStack *sp, const mxArray *m1, const mxArray *m2,
  emlrtMCInfo *location, cgxertBlkSrcLocInfo *blkSrc);
static const mxArray *getString(InstanceStruct_dnGfh1DX0a11xSfGnyzF5G
  *moduleInstance, const emlrtStack *sp, const mxArray *m1, emlrtMCInfo
  *location, cgxertBlkSrcLocInfo *blkSrc);
static void b_error(InstanceStruct_dnGfh1DX0a11xSfGnyzF5G *moduleInstance, const
                    emlrtStack *sp, const mxArray *m, const mxArray *m1,
                    emlrtMCInfo *location, cgxertBlkSrcLocInfo *blkSrc);
static const mxArray *b_message(InstanceStruct_dnGfh1DX0a11xSfGnyzF5G
  *moduleInstance, const emlrtStack *sp, const mxArray *m1, emlrtMCInfo
  *location, cgxertBlkSrcLocInfo *blkSrc);
static const mxArray *c_message(InstanceStruct_dnGfh1DX0a11xSfGnyzF5G
  *moduleInstance, const emlrtStack *sp, const mxArray *m1, const mxArray *m2,
  const mxArray *m3, const mxArray *m4, emlrtMCInfo *location,
  cgxertBlkSrcLocInfo *blkSrc);
static const mxArray *feval(InstanceStruct_dnGfh1DX0a11xSfGnyzF5G
  *moduleInstance, const emlrtStack *sp, const mxArray *m1, const mxArray *m2,
  emlrtMCInfo *location, cgxertBlkSrcLocInfo *blkSrc);
static void b_feval(InstanceStruct_dnGfh1DX0a11xSfGnyzF5G *moduleInstance, const
                    emlrtStack *sp, const mxArray *m, const mxArray *m1,
                    emlrtMCInfo *location, cgxertBlkSrcLocInfo *blkSrc);
static const mxArray *d_message(InstanceStruct_dnGfh1DX0a11xSfGnyzF5G
  *moduleInstance, const emlrtStack *sp, const mxArray *m1, const mxArray *m2,
  const mxArray *m3, emlrtMCInfo *location, cgxertBlkSrcLocInfo *blkSrc);
static const mxArray *b_sprintf(InstanceStruct_dnGfh1DX0a11xSfGnyzF5G
  *moduleInstance, const emlrtStack *sp, const mxArray *m1, const mxArray *m2,
  emlrtMCInfo *location, cgxertBlkSrcLocInfo *blkSrc);
static const mxArray *c_feval(InstanceStruct_dnGfh1DX0a11xSfGnyzF5G
  *moduleInstance, const emlrtStack *sp, const mxArray *m1, const mxArray *m2,
  const mxArray *m3, emlrtMCInfo *location, cgxertBlkSrcLocInfo *blkSrc);
static const mxArray *d_feval(InstanceStruct_dnGfh1DX0a11xSfGnyzF5G
  *moduleInstance, const emlrtStack *sp, const mxArray *m1, const mxArray *m2,
  const mxArray *m3, const mxArray *m4, emlrtMCInfo *location,
  cgxertBlkSrcLocInfo *blkSrc);
static void c_emlrt_marshallIn(InstanceStruct_dnGfh1DX0a11xSfGnyzF5G
  *moduleInstance, const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, char_T ret[14], cgxertBlkSrcLocInfo *blkSrc);
static real_T eml_rand_mt19937ar(InstanceStruct_dnGfh1DX0a11xSfGnyzF5G
  *moduleInstance, const emlrtStack *sp, uint32_T e_state[625]);
static void genrand_uint32_vector(uint32_T mt[625], uint32_T b_u[2]);
static void b_sqrt(InstanceStruct_dnGfh1DX0a11xSfGnyzF5G *moduleInstance, const
                   emlrtStack *sp, real_T *x, cgxertBlkSrcLocInfo *blkSrc);
static void RigidBodyTree_validateConfigurationWithLimits
  (InstanceStruct_dnGfh1DX0a11xSfGnyzF5G *moduleInstance, const emlrtStack *sp,
   robotics_manip_internal_RigidBodyTree_1 *obj, real_T Q[6]);
static void c_sqrt(creal_T *x);
static real_T rescale(real_T *re, real_T *im);
static void xscal(int32_T n, real_T a, real_T x[9], int32_T ix0);
static void xaxpy(int32_T n, real_T a, int32_T ix0, real_T y[9], int32_T iy0);
static void b_xscal(real_T a, real_T x[3], int32_T ix0);
static void b_xaxpy(int32_T n, real_T a, real_T x[9], int32_T ix0, real_T y[3],
                    int32_T iy0);
static void c_xaxpy(int32_T n, real_T a, real_T x[3], int32_T ix0, real_T y[9],
                    int32_T iy0);
static void c_xscal(real_T a, real_T x[9], int32_T ix0);
static void xrotg(real_T *a, real_T *b_b, real_T *c, real_T *s);
static void xrot(real_T x[9], int32_T ix0, int32_T iy0, real_T c, real_T s);
static void xswap(real_T x[9], int32_T ix0, int32_T iy0);
static void d_sqrt(InstanceStruct_dnGfh1DX0a11xSfGnyzF5G *moduleInstance, const
                   emlrtStack *sp, emxArray_real_T *x, cgxertBlkSrcLocInfo
                   *blkSrc);
static real_T b_eml_rand_mt19937ar(InstanceStruct_dnGfh1DX0a11xSfGnyzF5G
  *moduleInstance, const emlrtStack *sp, uint32_T e_state[625]);
static real_T genrandu(InstanceStruct_dnGfh1DX0a11xSfGnyzF5G *moduleInstance,
  const emlrtStack *sp, uint32_T mt[625], cgxertBlkSrcLocInfo *blkSrc);
static void plus(emxArray_real_T *in1, emxArray_real_T *in2, emxArray_real_T
                 *in3);
static void times(emxArray_real_T *in1, emxArray_real_T *in2);
static void minus(emxArray_real_T *in1, emxArray_real_T *in2);
static void b_plus(emxArray_real_T *in1, emxArray_real_T *in2);
static void b_minus(real_T in1[36], emxArray_real_T *in2);
static void c_minus(real_T in1[36], emxArray_real_T *in2);
static void d_minus(emxArray_real_T *in1, emxArray_real_T *in2);
static void rdivide(emxArray_real_T *in1, emxArray_real_T *in2);
static void binary_expand_op(InstanceStruct_dnGfh1DX0a11xSfGnyzF5G
  *moduleInstance, const emlrtStack *sp, emlrtRSInfo in1, emxArray_real_T *in2,
  emxArray_real_T *in3, real_T *out1, int32_T *out2);
static void b_binary_expand_op(emxArray_boolean_T *in1, emxArray_real_T *in2,
  robotics_core_internal_DampedBFGSwGradientProjection *in3);
static void c_binary_expand_op(boolean_T in1[6], real_T in2[6], emxArray_real_T *
  in3);
static void d_binary_expand_op(boolean_T in1[6], real_T in2[6], emxArray_real_T *
  in3);
static void emxInitStruct_robotics_slmanip_
  (robotics_slmanip_internal_block_IKBlock *pStruct);
static void emxInitStruct_robotics_manip_in
  (robotics_manip_internal_RigidBodyTree *pStruct);
static void b_emxInitStruct_robotics_manip_in(robotics_manip_internal_RigidBody *
  pStruct);
static void emxInit_char_T(emxArray_char_T **pEmxArray, int32_T b_numDimensions);
static void emxInitMatrix_robotics_manip_in(robotics_manip_internal_CollisionSet
  pMatrix[15]);
static void c_emxInitStruct_robotics_manip_in
  (robotics_manip_internal_CollisionSet *pStruct);
static void emxInit_robotics_manip_internal(emxArray_robotics_manip_interna
  **pEmxArray, int32_T b_numDimensions);
static void emxInitMatrix_rigidBodyJoint(rigidBodyJoint pMatrix[15]);
static void emxInitStruct_rigidBodyJoint(rigidBodyJoint *pStruct);
static void emxInit_real_T(emxArray_real_T **pEmxArray, int32_T b_numDimensions);
static void emxInit_real_T1(emxArray_real_T **pEmxArray, int32_T b_numDimensions);
static void b_emxInitMatrix_robotics_manip_in(robotics_manip_internal_RigidBody
  pMatrix[14]);
static void emxInitStruct_inverseKinematics(inverseKinematics *pStruct);
static void d_emxInitStruct_robotics_manip_in
  (robotics_manip_internal_IKExtraArgs *pStruct);
static void emxInitMatrix_rigidBodyJoint1(rigidBodyJoint pMatrix[14]);
static void c_emxInitMatrix_robotics_manip_in(robotics_manip_internal_RigidBody
  pMatrix[7]);
static void e_emxInitStruct_robotics_manip_in
  (robotics_manip_internal_RigidBodyTree_1 *pStruct);
static void d_emxInitMatrix_robotics_manip_in
  (robotics_manip_internal_CollisionSet pMatrix[8]);
static void emxInitMatrix_rigidBodyJoint2(rigidBodyJoint pMatrix[8]);
static void emxInitStruct_robotics_core_int
  (robotics_core_internal_DampedBFGSwGradientProjection *pStruct);
static void emxFree_char_T(emxArray_char_T **pEmxArray);
static void emxFreeStruct_robotics_manip_in(robotics_manip_internal_RigidBody
  *pStruct);
static void b_emxFreeStruct_robotics_manip_in
  (robotics_manip_internal_RigidBodyTree *pStruct);
static void emxFreeMatrix_robotics_manip_in(robotics_manip_internal_CollisionSet
  pMatrix[15]);
static void emxFree_robotics_manip_internal(emxArray_robotics_manip_interna
  **pEmxArray);
static void c_emxFreeStruct_robotics_manip_in
  (robotics_manip_internal_CollisionSet *pStruct);
static void emxFreeMatrix_rigidBodyJoint(rigidBodyJoint pMatrix[15]);
static void emxFreeStruct_rigidBodyJoint(rigidBodyJoint *pStruct);
static void emxFree_real_T(emxArray_real_T **pEmxArray);
static void b_emxFreeMatrix_robotics_manip_in(robotics_manip_internal_RigidBody
  pMatrix[14]);
static void emxFreeStruct_robotics_slmanip_
  (robotics_slmanip_internal_block_IKBlock *pStruct);
static void emxFreeStruct_inverseKinematics(inverseKinematics *pStruct);
static void d_emxFreeStruct_robotics_manip_in
  (robotics_manip_internal_IKExtraArgs *pStruct);
static void emxFreeMatrix_rigidBodyJoint1(rigidBodyJoint pMatrix[14]);
static void c_emxFreeMatrix_robotics_manip_in(robotics_manip_internal_RigidBody
  pMatrix[7]);
static void e_emxFreeStruct_robotics_manip_in
  (robotics_manip_internal_RigidBodyTree_1 *pStruct);
static void d_emxFreeMatrix_robotics_manip_in
  (robotics_manip_internal_CollisionSet pMatrix[8]);
static void emxFreeMatrix_rigidBodyJoint2(rigidBodyJoint pMatrix[8]);
static void emxFreeStruct_robotics_core_int
  (robotics_core_internal_DampedBFGSwGradientProjection *pStruct);
static void emxEnsureCapacity_char_T(emxArray_char_T *emxArray, int32_T oldNumel);
static void emxEnsureCapacity_real_T(emxArray_real_T *emxArray, int32_T oldNumel);
static void emxEnsureCapacity_real_T1(emxArray_real_T *emxArray, int32_T
  oldNumel);
static void emxEnsureCapacity_robotics_mani(emxArray_robotics_manip_interna
  *emxArray, int32_T oldNumel);
static void emxEnsureCapacity_int32_T(emxArray_int32_T *emxArray, int32_T
  oldNumel);
static void emxEnsureCapacity_int32_T1(emxArray_int32_T *emxArray, int32_T
  oldNumel);
static void emxInit_int32_T(emxArray_int32_T **pEmxArray, int32_T
  b_numDimensions);
static void emxInit_int32_T1(emxArray_int32_T **pEmxArray, int32_T
  b_numDimensions);
static void emxFree_int32_T(emxArray_int32_T **pEmxArray);
static void emxEnsureCapacity_boolean_T(emxArray_boolean_T *emxArray, int32_T
  oldNumel);
static void emxInit_boolean_T(emxArray_boolean_T **pEmxArray, int32_T
  b_numDimensions);
static void emxFree_boolean_T(emxArray_boolean_T **pEmxArray);
static void emxEnsureCapacity_ptrdiff_t(emxArray_ptrdiff_t *emxArray, int32_T
  oldNumel);
static void emxInit_ptrdiff_t(emxArray_ptrdiff_t **pEmxArray, int32_T
  b_numDimensions);
static void emxFree_ptrdiff_t(emxArray_ptrdiff_t **pEmxArray);
static int32_T div_nzp_s32(int32_T numerator, int32_T denominator);
static int32_T div_s32(InstanceStruct_dnGfh1DX0a11xSfGnyzF5G *moduleInstance,
  const emlrtStack *sp, int32_T numerator, int32_T denominator,
  cgxertBlkSrcLocInfo *blkSrc);
static void init_simulink_io_address(InstanceStruct_dnGfh1DX0a11xSfGnyzF5G
  *moduleInstance);

/* Function Definitions */
static void cgxe_mdl_start(InstanceStruct_dnGfh1DX0a11xSfGnyzF5G *moduleInstance)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  init_simulink_io_address(moduleInstance);
  st.tls = moduleInstance->emlrtRootTLSGlobal;
  cgxertSetSimStateCompliance(moduleInstance->S, 4);
  cgxertSetGcb(moduleInstance->S, moduleInstance->sysIdx, 3);
  mw__internal__call__setup(moduleInstance, &st, *moduleInstance->u0,
    *moduleInstance->u2);
  cgxertRestoreGcb(moduleInstance->S, moduleInstance->sysIdx, 3);
  cgxertSetGcb(moduleInstance->S, moduleInstance->sysIdx, 6);
  mw__internal__system__init__fcn(moduleInstance);
  b_mw__internal__call__setup(moduleInstance, &st);
  cgxertRestoreGcb(moduleInstance->S, moduleInstance->sysIdx, 6);
}

static void cgxe_mdl_initialize(InstanceStruct_dnGfh1DX0a11xSfGnyzF5G
  *moduleInstance)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = moduleInstance->emlrtRootTLSGlobal;
  *moduleInstance->pipeStage = 0;
  cgxertSetGcb(moduleInstance->S, moduleInstance->sysIdx, 3);
  mw__internal__call__reset(moduleInstance, &st);
  cgxertRestoreGcb(moduleInstance->S, moduleInstance->sysIdx, 3);
  emlrtLicenseCheckR2022a(cgxertPrepareEmlrtTLS(moduleInstance->S, &st,
    moduleInstance->sysIdx, 6), (char_T *)
    "EMLRT:runTime:MexFunctionNeedsLicense", (char_T *)"robotics_system_toolbox",
    2);
  cgxertSetGcb(moduleInstance->S, moduleInstance->sysIdx, 6);
  b_mw__internal__call__reset(moduleInstance, &st);
  cgxertRestoreGcb(moduleInstance->S, moduleInstance->sysIdx, 6);
  cgxertCallAccelRunBlock(moduleInstance->S, *moduleInstance->sysIdxToRun, 7,
    SS_CALL_MDL_INITIALIZE_CONDITIONS);
}

static void cgxe_mdl_outputs(InstanceStruct_dnGfh1DX0a11xSfGnyzF5G
  *moduleInstance)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  real_T dv[6];
  real_T (*b_Value)[6];
  real_T d;
  real_T d1;
  int32_T i;
  int32_T i1;
  uint16_T b_u;
  uint8_T b_u1;
  b_Value = (real_T (*)[6])cgxertGetRunTimeParamInfoData(moduleInstance->S, 0);
  st.tls = moduleInstance->emlrtRootTLSGlobal;
  cgxertCallAccelRunBlock(moduleInstance->S, *moduleInstance->sysIdxToRun, 0,
    SS_CALL_MDL_OUTPUTS);
  cgxertCallAccelRunBlock(moduleInstance->S, *moduleInstance->sysIdxToRun, 1,
    SS_CALL_MDL_OUTPUTS);
  cgxertCallAccelRunBlock(moduleInstance->S, *moduleInstance->sysIdxToRun, 2,
    SS_CALL_MDL_OUTPUTS);
  cgxertSetGcb(moduleInstance->S, moduleInstance->sysIdx, 3);
  mw__internal__call__step(moduleInstance, &st, *moduleInstance->u0,
    *moduleInstance->u2, moduleInstance->B3_Y0);
  cgxertRestoreGcb(moduleInstance->S, moduleInstance->sysIdx, 3);
  for (i = 0; i < 6; i++) {
    moduleInstance->B4_Y0[i] = (*b_Value)[i];
    moduleInstance->B5_Y0[i] = (*moduleInstance->u1)[i];
  }

  cgxertSetGcb(moduleInstance->S, moduleInstance->sysIdx, 6);
  b_mw__internal__call__step(moduleInstance, &st, moduleInstance->B3_Y0,
    moduleInstance->B4_Y0, moduleInstance->B5_Y0, dv, &d, &d1, &b_u, &b_u1);
  moduleInstance->B6_Y1.Status = b_u1;
  moduleInstance->B6_Y1.ExitFlag = b_u;
  moduleInstance->B6_Y1.PoseErrorNorm = d1;
  moduleInstance->B6_Y1.Iterations = d;
  for (i1 = 0; i1 < 6; i1++) {
    (*moduleInstance->y3)[i1] = dv[i1];
  }

  cgxertRestoreGcb(moduleInstance->S, moduleInstance->sysIdx, 6);
  cgxertCallAccelRunBlock(moduleInstance->S, *moduleInstance->sysIdxToRun, 7,
    SS_CALL_MDL_OUTPUTS);
}

static void cgxe_mdl_update(InstanceStruct_dnGfh1DX0a11xSfGnyzF5G
  *moduleInstance)
{
  (void)moduleInstance;
}

static void cgxe_mdl_enable(InstanceStruct_dnGfh1DX0a11xSfGnyzF5G
  *moduleInstance)
{
  (void)moduleInstance;
}

static void cgxe_mdl_disable(InstanceStruct_dnGfh1DX0a11xSfGnyzF5G
  *moduleInstance)
{
  (void)moduleInstance;
}

static void cgxe_mdl_terminate(InstanceStruct_dnGfh1DX0a11xSfGnyzF5G
  *moduleInstance)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = moduleInstance->emlrtRootTLSGlobal;
  cgxertSetGcb(moduleInstance->S, moduleInstance->sysIdx, 3);
  cgxertRestoreGcb(moduleInstance->S, moduleInstance->sysIdx, 3);
  cgxertSetGcb(moduleInstance->S, moduleInstance->sysIdx, 6);
  mw__internal__system__terminate__fcn(moduleInstance, &st);
  cgxertRestoreGcb(moduleInstance->S, moduleInstance->sysIdx, 6);
}

static void mw__internal__call__setup(InstanceStruct_dnGfh1DX0a11xSfGnyzF5G
  *moduleInstance, const emlrtStack *sp, real_T b_u0[3], real_T b_u1[3])
{
  cgxertBlkSrcLocInfo blkSrcLoc;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  if (!moduleInstance->sysobj_not_empty) {
    st.site = &f_emlrtRSI;
    b_st.site = &emlrtRSI;
    c_st.site = &b_emlrtRSI;
    d_st.site = &c_emlrtRSI;
    c_st.site = &b_emlrtRSI;
    d_st.site = &d_emlrtRSI;
    moduleInstance->sysobj.isInitialized = 0;
    b_st.site = &emlrtRSI;
    c_st.site = &e_emlrtRSI;
    moduleInstance->sysobj_not_empty = true;
  }

  st.site = &g_emlrtRSI;
  blkSrcLoc.sysIdx = moduleInstance->sysIdx;
  blkSrcLoc.blkIdx = 3;
  SystemCore_setup(moduleInstance, &st, &moduleInstance->sysobj, b_u0, b_u1,
                   &blkSrcLoc);
}

static void SystemCore_setup(InstanceStruct_dnGfh1DX0a11xSfGnyzF5G
  *moduleInstance, const emlrtStack *sp,
  c_robotics_slcore_internal_block_CoordinateTransformationConvers *obj, real_T
  varargin_1[3], real_T varargin_2[3], cgxertBlkSrcLocInfo *blkSrc)
{
  static const int32_T iv[2] = { 1, 51 };

  static const int32_T iv1[2] = { 1, 51 };

  static const int32_T iv2[2] = { 1, 5 };

  static char_T c_u[51] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l', 'e',
    'd', 'W', 'h', 'e', 'n', 'L', 'o', 'c', 'k', 'e', 'd', 'R', 'e', 'l', 'e',
    'a', 's', 'e', 'd', 'C', 'o', 'd', 'e', 'g', 'e', 'n' };

  static char_T e_u[5] = { 's', 'e', 't', 'u', 'p' };

  cgxertBlkSrcLocInfo b_blkSrcLoc;
  cgxertBlkSrcLocInfo blkSrcLoc;
  cgxertBlkSrcLocInfo c_blkSrcLoc;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *m;
  const mxArray *y;
  int32_T i;
  char_T b_u[51];
  char_T d_u[5];
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  if (obj->isInitialized != 0) {
    for (i = 0; i < 51; i++) {
      b_u[i] = c_u[i];
    }

    y = NULL;
    m = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a(cgxertPrepareEmlrtTLS(moduleInstance->S,
      (emlrtConstCTX)sp, blkSrc->sysIdx, blkSrc->blkIdx), 51, m, &b_u[0]);
    emlrtAssign(&y, m);
    for (i = 0; i < 51; i++) {
      b_u[i] = c_u[i];
    }

    b_y = NULL;
    m = emlrtCreateCharArray(2, &iv1[0]);
    emlrtInitCharArrayR2013a(cgxertPrepareEmlrtTLS(moduleInstance->S,
      (emlrtConstCTX)sp, blkSrc->sysIdx, blkSrc->blkIdx), 51, m, &b_u[0]);
    emlrtAssign(&b_y, m);
    for (i = 0; i < 5; i++) {
      d_u[i] = e_u[i];
    }

    c_y = NULL;
    m = emlrtCreateCharArray(2, &iv2[0]);
    emlrtInitCharArrayR2013a(cgxertPrepareEmlrtTLS(moduleInstance->S,
      (emlrtConstCTX)sp, blkSrc->sysIdx, blkSrc->blkIdx), 5, m, &d_u[0]);
    emlrtAssign(&c_y, m);
    st.site = &d_emlrtRSI;
    blkSrcLoc.sysIdx = moduleInstance->sysIdx;
    blkSrcLoc.blkIdx = 3;
    b_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
    b_blkSrcLoc.blkIdx = 3;
    c_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
    c_blkSrcLoc.blkIdx = 3;
    b_error(moduleInstance, &st, y, getString(moduleInstance, &st, message
             (moduleInstance, &st, b_y, c_y, &emlrtMCI, &blkSrcLoc), &emlrtMCI,
             &b_blkSrcLoc), &emlrtMCI, &c_blkSrcLoc);
  }

  obj->isInitialized = 1;
  st.site = &d_emlrtRSI;
  b_st.site = &h_emlrtRSI;
  c_st.site = &j_emlrtRSI;
  validateattributes(moduleInstance, &c_st, varargin_1);
  b_st.site = &i_emlrtRSI;
  c_st.site = &j_emlrtRSI;
  validateattributes(moduleInstance, &c_st, varargin_2);
}

static void validateattributes(InstanceStruct_dnGfh1DX0a11xSfGnyzF5G
  *moduleInstance, const emlrtStack *sp, real_T a[3])
{
  static const int32_T iv[2] = { 1, 21 };

  static const int32_T iv1[2] = { 1, 46 };

  static const int32_T iv2[2] = { 1, 5 };

  static char_T e_u[46] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'V', 'a', 'l', 'i', 'd', 'a', 't', 'e', 'a', 't', 't',
    'r', 'i', 'b', 'u', 't', 'e', 's', 'e', 'x', 'p', 'e', 'c', 't', 'e', 'd',
    'F', 'i', 'n', 'i', 't', 'e' };

  static char_T c_u[21] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'e', 'x', 'p',
    'e', 'c', 't', 'e', 'd', 'F', 'i', 'n', 'i', 't', 'e' };

  static char_T g_u[5] = { 'i', 'n', 'p', 'u', 't' };

  cgxertBlkSrcLocInfo b_blkSrcLoc;
  cgxertBlkSrcLocInfo blkSrcLoc;
  cgxertBlkSrcLocInfo c_blkSrcLoc;
  emlrtStack b_st;
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *m;
  const mxArray *y;
  int32_T k;
  char_T d_u[46];
  char_T b_u[21];
  char_T f_u[5];
  boolean_T exitg1;
  boolean_T p;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &k_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  p = true;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k < 3)) {
    if ((!muDoubleScalarIsInf(a[k])) && (!muDoubleScalarIsNaN(a[k]))) {
      k++;
    } else {
      p = false;
      exitg1 = true;
    }
  }

  if (!p) {
    for (k = 0; k < 21; k++) {
      b_u[k] = c_u[k];
    }

    y = NULL;
    m = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a(cgxertPrepareEmlrtTLS(moduleInstance->S, &st,
      moduleInstance->sysIdx, 3), 21, m, &b_u[0]);
    emlrtAssign(&y, m);
    for (k = 0; k < 46; k++) {
      d_u[k] = e_u[k];
    }

    b_y = NULL;
    m = emlrtCreateCharArray(2, &iv1[0]);
    emlrtInitCharArrayR2013a(cgxertPrepareEmlrtTLS(moduleInstance->S, &st,
      moduleInstance->sysIdx, 3), 46, m, &d_u[0]);
    emlrtAssign(&b_y, m);
    for (k = 0; k < 5; k++) {
      f_u[k] = g_u[k];
    }

    c_y = NULL;
    m = emlrtCreateCharArray(2, &iv2[0]);
    emlrtInitCharArrayR2013a(cgxertPrepareEmlrtTLS(moduleInstance->S, &st,
      moduleInstance->sysIdx, 3), 5, m, &f_u[0]);
    emlrtAssign(&c_y, m);
    b_st.site = &jm_emlrtRSI;
    blkSrcLoc.sysIdx = moduleInstance->sysIdx;
    blkSrcLoc.blkIdx = 3;
    b_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
    b_blkSrcLoc.blkIdx = 3;
    c_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
    c_blkSrcLoc.blkIdx = 3;
    b_error(moduleInstance, &b_st, y, getString(moduleInstance, &b_st, message
             (moduleInstance, &b_st, b_y, c_y, &b_emlrtMCI, &blkSrcLoc),
             &b_emlrtMCI, &b_blkSrcLoc), &b_emlrtMCI, &c_blkSrcLoc);
  }
}

static void mw__internal__call__reset(InstanceStruct_dnGfh1DX0a11xSfGnyzF5G
  *moduleInstance, const emlrtStack *sp)
{
  static const int32_T iv[2] = { 1, 45 };

  static const int32_T iv1[2] = { 1, 45 };

  static const int32_T iv2[2] = { 1, 5 };

  static char_T c_u[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l', 'e',
    'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C', 'o',
    'd', 'e', 'g', 'e', 'n' };

  static char_T e_u[5] = { 'r', 'e', 's', 'e', 't' };

  cgxertBlkSrcLocInfo b_blkSrcLoc;
  cgxertBlkSrcLocInfo blkSrcLoc;
  cgxertBlkSrcLocInfo c_blkSrcLoc;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *m;
  const mxArray *y;
  int32_T i;
  char_T b_u[45];
  char_T d_u[5];
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  if (!moduleInstance->sysobj_not_empty) {
    st.site = &f_emlrtRSI;
    b_st.site = &emlrtRSI;
    c_st.site = &b_emlrtRSI;
    d_st.site = &c_emlrtRSI;
    c_st.site = &b_emlrtRSI;
    d_st.site = &d_emlrtRSI;
    moduleInstance->sysobj.isInitialized = 0;
    b_st.site = &emlrtRSI;
    c_st.site = &e_emlrtRSI;
    moduleInstance->sysobj_not_empty = true;
  }

  st.site = &l_emlrtRSI;
  if (moduleInstance->sysobj.isInitialized == 2) {
    for (i = 0; i < 45; i++) {
      b_u[i] = c_u[i];
    }

    y = NULL;
    m = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a(cgxertPrepareEmlrtTLS(moduleInstance->S, &st,
      moduleInstance->sysIdx, 3), 45, m, &b_u[0]);
    emlrtAssign(&y, m);
    for (i = 0; i < 45; i++) {
      b_u[i] = c_u[i];
    }

    b_y = NULL;
    m = emlrtCreateCharArray(2, &iv1[0]);
    emlrtInitCharArrayR2013a(cgxertPrepareEmlrtTLS(moduleInstance->S, &st,
      moduleInstance->sysIdx, 3), 45, m, &b_u[0]);
    emlrtAssign(&b_y, m);
    for (i = 0; i < 5; i++) {
      d_u[i] = e_u[i];
    }

    c_y = NULL;
    m = emlrtCreateCharArray(2, &iv2[0]);
    emlrtInitCharArrayR2013a(cgxertPrepareEmlrtTLS(moduleInstance->S, &st,
      moduleInstance->sysIdx, 3), 5, m, &d_u[0]);
    emlrtAssign(&c_y, m);
    b_st.site = &d_emlrtRSI;
    blkSrcLoc.sysIdx = moduleInstance->sysIdx;
    blkSrcLoc.blkIdx = 3;
    b_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
    b_blkSrcLoc.blkIdx = 3;
    c_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
    c_blkSrcLoc.blkIdx = 3;
    b_error(moduleInstance, &b_st, y, getString(moduleInstance, &b_st, message
             (moduleInstance, &b_st, b_y, c_y, &emlrtMCI, &blkSrcLoc), &emlrtMCI,
             &b_blkSrcLoc), &emlrtMCI, &c_blkSrcLoc);
  }
}

static void mw__internal__call__step(InstanceStruct_dnGfh1DX0a11xSfGnyzF5G
  *moduleInstance, const emlrtStack *sp, real_T b_u0[3], real_T b_u1[3], real_T
  c_y0[16])
{
  static const int32_T iv[2] = { 1, 45 };

  static const int32_T iv1[2] = { 1, 45 };

  static const int32_T iv2[2] = { 1, 4 };

  static char_T c_u[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l', 'e',
    'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C', 'o',
    'd', 'e', 'g', 'e', 'n' };

  static char_T e_u[4] = { 's', 't', 'e', 'p' };

  c_robotics_slcore_internal_block_CoordinateTransformationConvers *obj;
  cgxertBlkSrcLocInfo b_blkSrcLoc;
  cgxertBlkSrcLocInfo blkSrcLoc;
  cgxertBlkSrcLocInfo c_blkSrcLoc;
  cgxertBlkSrcLocInfo d_blkSrcLoc;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack h_st;
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *m;
  const mxArray *y;
  real_T R[9];
  real_T ct[3];
  real_T g_st[3];
  real_T c_u0;
  int32_T i;
  int32_T k;
  char_T b_u[45];
  char_T d_u[4];
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  if (!moduleInstance->sysobj_not_empty) {
    st.site = &f_emlrtRSI;
    b_st.site = &emlrtRSI;
    c_st.site = &b_emlrtRSI;
    d_st.site = &c_emlrtRSI;
    c_st.site = &b_emlrtRSI;
    d_st.site = &d_emlrtRSI;
    moduleInstance->sysobj.isInitialized = 0;
    b_st.site = &emlrtRSI;
    c_st.site = &e_emlrtRSI;
    moduleInstance->sysobj_not_empty = true;
  }

  st.site = &m_emlrtRSI;
  obj = &moduleInstance->sysobj;
  if (moduleInstance->sysobj.isInitialized == 2) {
    for (k = 0; k < 45; k++) {
      b_u[k] = c_u[k];
    }

    y = NULL;
    m = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a(cgxertPrepareEmlrtTLS(moduleInstance->S, &st,
      moduleInstance->sysIdx, 3), 45, m, &b_u[0]);
    emlrtAssign(&y, m);
    for (k = 0; k < 45; k++) {
      b_u[k] = c_u[k];
    }

    b_y = NULL;
    m = emlrtCreateCharArray(2, &iv1[0]);
    emlrtInitCharArrayR2013a(cgxertPrepareEmlrtTLS(moduleInstance->S, &st,
      moduleInstance->sysIdx, 3), 45, m, &b_u[0]);
    emlrtAssign(&b_y, m);
    for (k = 0; k < 4; k++) {
      d_u[k] = e_u[k];
    }

    c_y = NULL;
    m = emlrtCreateCharArray(2, &iv2[0]);
    emlrtInitCharArrayR2013a(cgxertPrepareEmlrtTLS(moduleInstance->S, &st,
      moduleInstance->sysIdx, 3), 4, m, &d_u[0]);
    emlrtAssign(&c_y, m);
    b_st.site = &d_emlrtRSI;
    b_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
    b_blkSrcLoc.blkIdx = 3;
    c_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
    c_blkSrcLoc.blkIdx = 3;
    d_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
    d_blkSrcLoc.blkIdx = 3;
    b_error(moduleInstance, &b_st, y, getString(moduleInstance, &b_st, message
             (moduleInstance, &b_st, b_y, c_y, &emlrtMCI, &b_blkSrcLoc),
             &emlrtMCI, &c_blkSrcLoc), &emlrtMCI, &d_blkSrcLoc);
  }

  if (moduleInstance->sysobj.isInitialized != 1) {
    b_st.site = &d_emlrtRSI;
    c_st.site = &d_emlrtRSI;
    blkSrcLoc.sysIdx = moduleInstance->sysIdx;
    blkSrcLoc.blkIdx = 3;
    SystemCore_setup(moduleInstance, &c_st, obj, b_u0, b_u1, &blkSrcLoc);
  }

  b_st.site = &d_emlrtRSI;
  c_st.site = &n_emlrtRSI;
  d_st.site = &o_emlrtRSI;
  e_st.site = &p_emlrtRSI;
  f_st.site = &q_emlrtRSI;
  for (k = 0; k < 3; k++) {
    c_u0 = b_u0[k];
    ct[k] = muDoubleScalarCos(c_u0);
    g_st[k] = muDoubleScalarSin(c_u0);
  }

  R[0] = ct[1] * ct[2];
  R[3] = -ct[1] * g_st[2];
  R[6] = g_st[1];
  R[1] = ct[0] * g_st[2] + g_st[0] * ct[2] * g_st[1];
  R[4] = ct[0] * ct[2] - g_st[0] * g_st[1] * g_st[2];
  R[7] = -ct[1] * g_st[0];
  R[2] = g_st[0] * g_st[2] - ct[0] * ct[2] * g_st[1];
  R[5] = g_st[0] * ct[2] + ct[0] * g_st[1] * g_st[2];
  R[8] = ct[0] * ct[1];
  h_st.site = &r_emlrtRSI;
  for (k = 0; k < 16; k++) {
    c_y0[k] = 0.0;
  }

  for (k = 0; k < 3; k++) {
    for (i = 0; i < 3; i++) {
      c_y0[i + (k << 2)] = R[i + 3 * k];
    }
  }

  c_y0[15] = 1.0;
  for (k = 0; k < 3; k++) {
    c_y0[k + 12] = b_u1[k];
  }
}

static void mw__internal__system__init__fcn
  (InstanceStruct_dnGfh1DX0a11xSfGnyzF5G *moduleInstance)
{
  static uint32_T uv[625] = { 5489U, 1301868182U, 2938499221U, 2950281878U,
    1875628136U, 751856242U, 944701696U, 2243192071U, 694061057U, 219885934U,
    2066767472U, 3182869408U, 485472502U, 2336857883U, 1071588843U, 3418470598U,
    951210697U, 3693558366U, 2923482051U, 1793174584U, 2982310801U, 1586906132U,
    1951078751U, 1808158765U, 1733897588U, 431328322U, 4202539044U, 530658942U,
    1714810322U, 3025256284U, 3342585396U, 1937033938U, 2640572511U, 1654299090U,
    3692403553U, 4233871309U, 3497650794U, 862629010U, 2943236032U, 2426458545U,
    1603307207U, 1133453895U, 3099196360U, 2208657629U, 2747653927U, 931059398U,
    761573964U, 3157853227U, 785880413U, 730313442U, 124945756U, 2937117055U,
    3295982469U, 1724353043U, 3021675344U, 3884886417U, 4010150098U, 4056961966U,
    699635835U, 2681338818U, 1339167484U, 720757518U, 2800161476U, 2376097373U,
    1532957371U, 3902664099U, 1238982754U, 3725394514U, 3449176889U, 3570962471U,
    4287636090U, 4087307012U, 3603343627U, 202242161U, 2995682783U, 1620962684U,
    3704723357U, 371613603U, 2814834333U, 2111005706U, 624778151U, 2094172212U,
    4284947003U, 1211977835U, 991917094U, 1570449747U, 2962370480U, 1259410321U,
    170182696U, 146300961U, 2836829791U, 619452428U, 2723670296U, 1881399711U,
    1161269684U, 1675188680U, 4132175277U, 780088327U, 3409462821U, 1036518241U,
    1834958505U, 3048448173U, 161811569U, 618488316U, 44795092U, 3918322701U,
    1924681712U, 3239478144U, 383254043U, 4042306580U, 2146983041U, 3992780527U,
    3518029708U, 3545545436U, 3901231469U, 1896136409U, 2028528556U, 2339662006U,
    501326714U, 2060962201U, 2502746480U, 561575027U, 581893337U, 3393774360U,
    1778912547U, 3626131687U, 2175155826U, 319853231U, 986875531U, 819755096U,
    2915734330U, 2688355739U, 3482074849U, 2736559U, 2296975761U, 1029741190U,
    2876812646U, 690154749U, 579200347U, 4027461746U, 1285330465U, 2701024045U,
    4117700889U, 759495121U, 3332270341U, 2313004527U, 2277067795U, 4131855432U,
    2722057515U, 1264804546U, 3848622725U, 2211267957U, 4100593547U, 959123777U,
    2130745407U, 3194437393U, 486673947U, 1377371204U, 17472727U, 352317554U,
    3955548058U, 159652094U, 1232063192U, 3835177280U, 49423123U, 3083993636U,
    733092U, 2120519771U, 2573409834U, 1112952433U, 3239502554U, 761045320U,
    1087580692U, 2540165110U, 641058802U, 1792435497U, 2261799288U, 1579184083U,
    627146892U, 2165744623U, 2200142389U, 2167590760U, 2381418376U, 1793358889U,
    3081659520U, 1663384067U, 2009658756U, 2689600308U, 739136266U, 2304581039U,
    3529067263U, 591360555U, 525209271U, 3131882996U, 294230224U, 2076220115U,
    3113580446U, 1245621585U, 1386885462U, 3203270426U, 123512128U, 12350217U,
    354956375U, 4282398238U, 3356876605U, 3888857667U, 157639694U, 2616064085U,
    1563068963U, 2762125883U, 4045394511U, 4180452559U, 3294769488U, 1684529556U,
    1002945951U, 3181438866U, 22506664U, 691783457U, 2685221343U, 171579916U,
    3878728600U, 2475806724U, 2030324028U, 3331164912U, 1708711359U, 1970023127U,
    2859691344U, 2588476477U, 2748146879U, 136111222U, 2967685492U, 909517429U,
    2835297809U, 3206906216U, 3186870716U, 341264097U, 2542035121U, 3353277068U,
    548223577U, 3170936588U, 1678403446U, 297435620U, 2337555430U, 466603495U,
    1132321815U, 1208589219U, 696392160U, 894244439U, 2562678859U, 470224582U,
    3306867480U, 201364898U, 2075966438U, 1767227936U, 2929737987U, 3674877796U,
    2654196643U, 3692734598U, 3528895099U, 2796780123U, 3048728353U, 842329300U,
    191554730U, 2922459673U, 3489020079U, 3979110629U, 1022523848U, 2202932467U,
    3583655201U, 3565113719U, 587085778U, 4176046313U, 3013713762U, 950944241U,
    396426791U, 3784844662U, 3477431613U, 3594592395U, 2782043838U, 3392093507U,
    3106564952U, 2829419931U, 1358665591U, 2206918825U, 3170783123U, 31522386U,
    2988194168U, 1782249537U, 1105080928U, 843500134U, 1225290080U, 1521001832U,
    3605886097U, 2802786495U, 2728923319U, 3996284304U, 903417639U, 1171249804U,
    1020374987U, 2824535874U, 423621996U, 1988534473U, 2493544470U, 1008604435U,
    1756003503U, 1488867287U, 1386808992U, 732088248U, 1780630732U, 2482101014U,
    976561178U, 1543448953U, 2602866064U, 2021139923U, 1952599828U, 2360242564U,
    2117959962U, 2753061860U, 2388623612U, 4138193781U, 2962920654U, 2284970429U,
    766920861U, 3457264692U, 2879611383U, 815055854U, 2332929068U, 1254853997U,
    3740375268U, 3799380844U, 4091048725U, 2006331129U, 1982546212U, 686850534U,
    1907447564U, 2682801776U, 2780821066U, 998290361U, 1342433871U, 4195430425U,
    607905174U, 3902331779U, 2454067926U, 1708133115U, 1170874362U, 2008609376U,
    3260320415U, 2211196135U, 433538229U, 2728786374U, 2189520818U, 262554063U,
    1182318347U, 3710237267U, 1221022450U, 715966018U, 2417068910U, 2591870721U,
    2870691989U, 3418190842U, 4238214053U, 1540704231U, 1575580968U, 2095917976U,
    4078310857U, 2313532447U, 2110690783U, 4056346629U, 4061784526U, 1123218514U,
    551538993U, 597148360U, 4120175196U, 3581618160U, 3181170517U, 422862282U,
    3227524138U, 1713114790U, 662317149U, 1230418732U, 928171837U, 1324564878U,
    1928816105U, 1786535431U, 2878099422U, 3290185549U, 539474248U, 1657512683U,
    552370646U, 1671741683U, 3655312128U, 1552739510U, 2605208763U, 1441755014U,
    181878989U, 3124053868U, 1447103986U, 3183906156U, 1728556020U, 3502241336U,
    3055466967U, 1013272474U, 818402132U, 1715099063U, 2900113506U, 397254517U,
    4194863039U, 1009068739U, 232864647U, 2540223708U, 2608288560U, 2415367765U,
    478404847U, 3455100648U, 3182600021U, 2115988978U, 434269567U, 4117179324U,
    3461774077U, 887256537U, 3545801025U, 286388911U, 3451742129U, 1981164769U,
    786667016U, 3310123729U, 3097811076U, 2224235657U, 2959658883U, 3370969234U,
    2514770915U, 3345656436U, 2677010851U, 2206236470U, 271648054U, 2342188545U,
    4292848611U, 3646533909U, 3754009956U, 3803931226U, 4160647125U, 1477814055U,
    4043852216U, 1876372354U, 3133294443U, 3871104810U, 3177020907U, 2074304428U,
    3479393793U, 759562891U, 164128153U, 1839069216U, 2114162633U, 3989947309U,
    3611054956U, 1333547922U, 835429831U, 494987340U, 171987910U, 1252001001U,
    370809172U, 3508925425U, 2535703112U, 1276855041U, 1922855120U, 835673414U,
    3030664304U, 613287117U, 171219893U, 3423096126U, 3376881639U, 2287770315U,
    1658692645U, 1262815245U, 3957234326U, 1168096164U, 2968737525U, 2655813712U,
    2132313144U, 3976047964U, 326516571U, 353088456U, 3679188938U, 3205649712U,
    2654036126U, 1249024881U, 880166166U, 691800469U, 2229503665U, 1673458056U,
    4032208375U, 1851778863U, 2563757330U, 376742205U, 1794655231U, 340247333U,
    1505873033U, 396524441U, 879666767U, 3335579166U, 3260764261U, 3335999539U,
    506221798U, 4214658741U, 975887814U, 2080536343U, 3360539560U, 571586418U,
    138896374U, 4234352651U, 2737620262U, 3928362291U, 1516365296U, 38056726U,
    3599462320U, 3585007266U, 3850961033U, 471667319U, 1536883193U, 2310166751U,
    1861637689U, 2530999841U, 4139843801U, 2710569485U, 827578615U, 2012334720U,
    2907369459U, 3029312804U, 2820112398U, 1965028045U, 35518606U, 2478379033U,
    643747771U, 1924139484U, 4123405127U, 3811735531U, 3429660832U, 3285177704U,
    1948416081U, 1311525291U, 1183517742U, 1739192232U, 3979815115U, 2567840007U,
    4116821529U, 213304419U, 4125718577U, 1473064925U, 2442436592U, 1893310111U,
    4195361916U, 3747569474U, 828465101U, 2991227658U, 750582866U, 1205170309U,
    1409813056U, 678418130U, 1171531016U, 3821236156U, 354504587U, 4202874632U,
    3882511497U, 1893248677U, 1903078632U, 26340130U, 2069166240U, 3657122492U,
    3725758099U, 831344905U, 811453383U, 3447711422U, 2434543565U, 4166886888U,
    3358210805U, 4142984013U, 2988152326U, 3527824853U, 982082992U, 2809155763U,
    190157081U, 3340214818U, 2365432395U, 2548636180U, 2894533366U, 3474657421U,
    2372634704U, 2845748389U, 43024175U, 2774226648U, 1987702864U, 3186502468U,
    453610222U, 4204736567U, 1392892630U, 2471323686U, 2470534280U, 3541393095U,
    4269885866U, 3909911300U, 759132955U, 1482612480U, 667715263U, 1795580598U,
    2337923983U, 3390586366U, 581426223U, 1515718634U, 476374295U, 705213300U,
    363062054U, 2084697697U, 2407503428U, 2292957699U, 2426213835U, 2199989172U,
    1987356470U, 4026755612U, 2147252133U, 270400031U, 1367820199U, 2369854699U,
    2844269403U, 79981964U, 624U };

  int32_T i;
  emxInitStruct_robotics_slmanip_(&moduleInstance->b_sysobj);
  for (i = 0; i < 8; i++) {
    moduleInstance->b_sysobj.IKInternal._pobj4._pobj1[i].matlabCodegenIsDeleted =
      true;
  }

  for (i = 0; i < 15; i++) {
    moduleInstance->b_sysobj.IKInternal._pobj3[i].matlabCodegenIsDeleted = true;
  }

  for (i = 0; i < 15; i++) {
    moduleInstance->b_sysobj.TreeInternal._pobj0[i].matlabCodegenIsDeleted =
      true;
  }

  for (i = 0; i < 7; i++) {
    moduleInstance->b_sysobj.IKInternal._pobj4._pobj0[i].matlabCodegenIsDeleted =
      true;
  }

  moduleInstance->b_sysobj.IKInternal._pobj4.Base.matlabCodegenIsDeleted = true;
  for (i = 0; i < 7; i++) {
    moduleInstance->b_sysobj.IKInternal._pobj2[i].matlabCodegenIsDeleted = true;
  }

  for (i = 0; i < 14; i++) {
    moduleInstance->b_sysobj.TreeInternal._pobj2[i].matlabCodegenIsDeleted =
      true;
  }

  moduleInstance->b_sysobj.TreeInternal.Base.matlabCodegenIsDeleted = true;
  moduleInstance->b_sysobj.TreeInternal.matlabCodegenIsDeleted = true;
  moduleInstance->b_sysobj.IKInternal._pobj4.matlabCodegenIsDeleted = true;
  moduleInstance->b_sysobj.IKInternal._pobj0.matlabCodegenIsDeleted = true;
  moduleInstance->b_sysobj.IKInternal._pobj5.matlabCodegenIsDeleted = true;
  moduleInstance->b_sysobj.IKInternal.matlabCodegenIsDeleted = true;
  moduleInstance->b_sysobj.matlabCodegenIsDeleted = true;
  moduleInstance->method = 7U;
  moduleInstance->method_not_empty = true;
  moduleInstance->state = 1144108930U;
  moduleInstance->state_not_empty = true;
  for (i = 0; i < 2; i++) {
    moduleInstance->b_state[i] = 158852560U * (uint32_T)i + 362436069U;
  }

  moduleInstance->b_state_not_empty = true;
  memcpy(&moduleInstance->c_state[0], &uv[0], 625U * sizeof(uint32_T));
  moduleInstance->c_state_not_empty = true;
  moduleInstance->b_method = 0U;
  moduleInstance->b_method_not_empty = true;
  for (i = 0; i < 2; i++) {
    moduleInstance->d_state[i] = 158852560U * (uint32_T)i + 362436069U;
  }

  moduleInstance->d_state_not_empty = true;
}

static void mw__internal__system__terminate__fcn
  (InstanceStruct_dnGfh1DX0a11xSfGnyzF5G *moduleInstance, const emlrtStack *sp)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  inverseKinematics *obj;
  robotics_core_internal_DampedBFGSwGradientProjection *b_obj;
  robotics_manip_internal_IKExtraArgs *c_obj;
  robotics_manip_internal_RigidBody *f_obj;
  robotics_manip_internal_RigidBodyTree *e_obj;
  robotics_manip_internal_RigidBodyTree_1 *d_obj;
  int32_T i;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = NULL;
  if (!moduleInstance->b_sysobj.matlabCodegenIsDeleted) {
    moduleInstance->b_sysobj.matlabCodegenIsDeleted = true;
  }

  st.site = NULL;
  obj = &moduleInstance->b_sysobj.IKInternal;
  if (!obj->matlabCodegenIsDeleted) {
    obj->matlabCodegenIsDeleted = true;
    b_st.site = &dm_emlrtRSI;
    c_st.site = &d_emlrtRSI;
    if (obj->isInitialized == 1) {
      obj->isInitialized = 2;
      d_st.site = &d_emlrtRSI;
    }
  }

  st.site = NULL;
  b_obj = &moduleInstance->b_sysobj.IKInternal._pobj5;
  if (!b_obj->matlabCodegenIsDeleted) {
    b_obj->matlabCodegenIsDeleted = true;
  }

  st.site = NULL;
  c_obj = &moduleInstance->b_sysobj.IKInternal._pobj0;
  if (!c_obj->matlabCodegenIsDeleted) {
    c_obj->matlabCodegenIsDeleted = true;
  }

  st.site = NULL;
  d_obj = &moduleInstance->b_sysobj.IKInternal._pobj4;
  if (!d_obj->matlabCodegenIsDeleted) {
    d_obj->matlabCodegenIsDeleted = true;
  }

  st.site = NULL;
  e_obj = &moduleInstance->b_sysobj.TreeInternal;
  if (!e_obj->matlabCodegenIsDeleted) {
    e_obj->matlabCodegenIsDeleted = true;
  }

  st.site = NULL;
  f_obj = &moduleInstance->b_sysobj.TreeInternal.Base;
  if (!f_obj->matlabCodegenIsDeleted) {
    f_obj->matlabCodegenIsDeleted = true;
  }

  for (i = 0; i < 14; i++) {
    st.site = NULL;
    f_obj = &moduleInstance->b_sysobj.TreeInternal._pobj2[i];
    if (!f_obj->matlabCodegenIsDeleted) {
      f_obj->matlabCodegenIsDeleted = true;
    }
  }

  for (i = 0; i < 7; i++) {
    st.site = NULL;
    f_obj = &moduleInstance->b_sysobj.IKInternal._pobj2[i];
    if (!f_obj->matlabCodegenIsDeleted) {
      f_obj->matlabCodegenIsDeleted = true;
    }
  }

  st.site = NULL;
  f_obj = &moduleInstance->b_sysobj.IKInternal._pobj4.Base;
  if (!f_obj->matlabCodegenIsDeleted) {
    f_obj->matlabCodegenIsDeleted = true;
  }

  for (i = 0; i < 7; i++) {
    st.site = NULL;
    f_obj = &moduleInstance->b_sysobj.IKInternal._pobj4._pobj0[i];
    if (!f_obj->matlabCodegenIsDeleted) {
      f_obj->matlabCodegenIsDeleted = true;
    }
  }

  for (i = 0; i < 15; i++) {
    st.site = NULL;
    handle_matlabCodegenDestructor(moduleInstance, &st,
      &moduleInstance->b_sysobj.TreeInternal._pobj0[i]);
  }

  for (i = 0; i < 15; i++) {
    st.site = NULL;
    handle_matlabCodegenDestructor(moduleInstance, &st,
      &moduleInstance->b_sysobj.IKInternal._pobj3[i]);
  }

  for (i = 0; i < 8; i++) {
    st.site = NULL;
    handle_matlabCodegenDestructor(moduleInstance, &st,
      &moduleInstance->b_sysobj.IKInternal._pobj4._pobj1[i]);
  }

  emxFreeStruct_robotics_slmanip_(&moduleInstance->b_sysobj);
}

static void b_mw__internal__call__setup(InstanceStruct_dnGfh1DX0a11xSfGnyzF5G
  *moduleInstance, const emlrtStack *sp)
{
  cgxertBlkSrcLocInfo blkSrcLoc;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  if (!moduleInstance->b_sysobj_not_empty) {
    st.site = &t_emlrtRSI;
    b_st.site = &s_emlrtRSI;
    c_st.site = &b_emlrtRSI;
    d_st.site = &c_emlrtRSI;
    c_st.site = &b_emlrtRSI;
    d_st.site = &d_emlrtRSI;
    moduleInstance->b_sysobj.isInitialized = 0;
    moduleInstance->b_sysobj.matlabCodegenIsDeleted = false;
    moduleInstance->b_sysobj_not_empty = true;
  }

  st.site = &u_emlrtRSI;
  blkSrcLoc.sysIdx = moduleInstance->sysIdx;
  blkSrcLoc.blkIdx = 6;
  b_SystemCore_setup(moduleInstance, &st, &moduleInstance->b_sysobj, &blkSrcLoc);
}

static void b_SystemCore_setup(InstanceStruct_dnGfh1DX0a11xSfGnyzF5G
  *moduleInstance, const emlrtStack *sp, robotics_slmanip_internal_block_IKBlock
  *obj, cgxertBlkSrcLocInfo *blkSrc)
{
  static real_T dv2[36] = { 3.7283131221130956, 0.14734196970714092,
    -0.71270625187285419, 0.0, 11.898111552581014, 1.5387432848037215,
    0.14734196970714092, 3.8707252237475256, 0.44799921633224543,
    -11.898111552581014, 0.0, 2.4469388175205693, -0.71270625187285419,
    0.44799921633224543, 0.9073753211438329, -1.5387432848037215,
    -2.4469388175205693, 0.0, 0.0, -11.898111552581014, -1.5387432848037215,
    66.0277530923337, 0.0, 0.0, 11.898111552581014, 0.0, -2.4469388175205693,
    0.0, 66.0277530923337, 0.0, 1.5387432848037215, 2.4469388175205693, 0.0, 0.0,
    0.0, 66.0277530923337 };

  static real_T dv3[16] = { 0.84692739772072112, -0.53170855079639956, -0.0, 0.0,
    -0.53170855079639956, -0.84692739772072112, 1.2246467991473532E-16, 0.0,
    -6.5115517481208857E-17, -1.0371869267288785E-16, -1.0, 0.0, 0.0, 0.0,
    0.129975000000001, 1.0 };

  static real_T dv1[9] = { 3.7283131221130956, 0.14734196970714092,
    -0.71270625187285419, 0.14734196970714092, 3.8707252237475256,
    0.44799921633224543, -0.71270625187285419, 0.44799921633224543,
    0.9073753211438329 };

  static real_T dv[3] = { -0.037059247103240843, 0.023304492622245248,
    -0.1801986436815835 };

  static real_T dv4[3] = { 0.0, 0.0, -9.80665 };

  static const int32_T iv[2] = { 1, 51 };

  static const int32_T iv1[2] = { 1, 51 };

  static const int32_T iv2[2] = { 1, 5 };

  static char_T c_u[51] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l', 'e',
    'd', 'W', 'h', 'e', 'n', 'L', 'o', 'c', 'k', 'e', 'd', 'R', 'e', 'l', 'e',
    'a', 's', 'e', 'd', 'C', 'o', 'd', 'e', 'g', 'e', 'n' };

  static char_T cv1[8] = { 'r', 'e', 'v', 'o', 'l', 'u', 't', 'e' };

  static char_T jname[6] = { 'J', 'o', 'i', 'n', 't', '1' };

  static char_T cv[5] = { 'B', 'o', 'd', 'y', '1' };

  static char_T e_u[5] = { 's', 'e', 't', 'u', 'p' };

  static char_T cv2[4] = { 'B', 'a', 's', 'e' };

  static char_T cv3[4] = { '_', 'j', 'n', 't' };

  static int8_T iv3[16] = { 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1 };

  static int8_T iv4[6] = { 0, 0, 1, 0, 0, 0 };

  static int8_T iv5[6] = { 0, 0, 0, 0, 0, 1 };

  static int8_T iv6[3] = { 0, 0, 1 };

  cgxertBlkSrcLocInfo b_blkSrcLoc;
  cgxertBlkSrcLocInfo blkSrcLoc;
  cgxertBlkSrcLocInfo c_blkSrcLoc;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack st;
  emxArray_char_T *b_jname;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *m;
  const mxArray *y;
  real_T poslim_data[12];
  int32_T i;
  int32_T loop_ub;
  char_T b_u[51];
  char_T d_u[5];
  int8_T msubspace_data[36];
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  if (obj->isInitialized != 0) {
    for (i = 0; i < 51; i++) {
      b_u[i] = c_u[i];
    }

    y = NULL;
    m = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a(cgxertPrepareEmlrtTLS(moduleInstance->S,
      (emlrtConstCTX)sp, blkSrc->sysIdx, blkSrc->blkIdx), 51, m, &b_u[0]);
    emlrtAssign(&y, m);
    for (i = 0; i < 51; i++) {
      b_u[i] = c_u[i];
    }

    b_y = NULL;
    m = emlrtCreateCharArray(2, &iv1[0]);
    emlrtInitCharArrayR2013a(cgxertPrepareEmlrtTLS(moduleInstance->S,
      (emlrtConstCTX)sp, blkSrc->sysIdx, blkSrc->blkIdx), 51, m, &b_u[0]);
    emlrtAssign(&b_y, m);
    for (i = 0; i < 5; i++) {
      d_u[i] = e_u[i];
    }

    c_y = NULL;
    m = emlrtCreateCharArray(2, &iv2[0]);
    emlrtInitCharArrayR2013a(cgxertPrepareEmlrtTLS(moduleInstance->S,
      (emlrtConstCTX)sp, blkSrc->sysIdx, blkSrc->blkIdx), 5, m, &d_u[0]);
    emlrtAssign(&c_y, m);
    st.site = &d_emlrtRSI;
    blkSrcLoc.sysIdx = moduleInstance->sysIdx;
    blkSrcLoc.blkIdx = 6;
    b_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
    b_blkSrcLoc.blkIdx = 6;
    c_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
    c_blkSrcLoc.blkIdx = 6;
    b_error(moduleInstance, &st, y, getString(moduleInstance, &st, message
             (moduleInstance, &st, b_y, c_y, &emlrtMCI, &blkSrcLoc), &emlrtMCI,
             &b_blkSrcLoc), &emlrtMCI, &c_blkSrcLoc);
  }

  obj->isInitialized = 1;
  st.site = &d_emlrtRSI;
  b_st.site = &v_emlrtRSI;
  c_st.site = &y_emlrtRSI;
  d_st.site = &x_emlrtRSI;
  obj->TreeInternal.NumBodies = 7.0;
  c_st.site = &bb_emlrtRSI;
  d_st.site = &eb_emlrtRSI;
  obj->TreeInternal.Bodies[0] = RigidBody_RigidBody(moduleInstance, &d_st,
    &(&obj->TreeInternal._pobj2[0])[0], &(&obj->TreeInternal._pobj0[0])[0],
    &(&obj->TreeInternal._pobj1[0])[0]);
  d_st.site = &eb_emlrtRSI;
  obj->TreeInternal.Bodies[1] = b_RigidBody_RigidBody(moduleInstance, &d_st,
    &(&obj->TreeInternal._pobj2[0])[1], &(&obj->TreeInternal._pobj0[0])[1],
    &(&obj->TreeInternal._pobj1[0])[1]);
  d_st.site = &eb_emlrtRSI;
  obj->TreeInternal.Bodies[2] = c_RigidBody_RigidBody(moduleInstance, &d_st,
    &(&obj->TreeInternal._pobj2[0])[2], &(&obj->TreeInternal._pobj0[0])[2],
    &(&obj->TreeInternal._pobj1[0])[2]);
  d_st.site = &eb_emlrtRSI;
  obj->TreeInternal.Bodies[3] = d_RigidBody_RigidBody(moduleInstance, &d_st,
    &(&obj->TreeInternal._pobj2[0])[3], &(&obj->TreeInternal._pobj0[0])[3],
    &(&obj->TreeInternal._pobj1[0])[3]);
  d_st.site = &eb_emlrtRSI;
  obj->TreeInternal.Bodies[4] = e_RigidBody_RigidBody(moduleInstance, &d_st,
    &(&obj->TreeInternal._pobj2[0])[4], &(&obj->TreeInternal._pobj0[0])[4],
    &(&obj->TreeInternal._pobj1[0])[4]);
  d_st.site = &eb_emlrtRSI;
  obj->TreeInternal.Bodies[5] = f_RigidBody_RigidBody(moduleInstance, &d_st,
    &(&obj->TreeInternal._pobj2[0])[5], &(&obj->TreeInternal._pobj0[0])[5],
    &(&obj->TreeInternal._pobj1[0])[5]);
  d_st.site = &eb_emlrtRSI;
  obj->TreeInternal.Bodies[6] = g_RigidBody_RigidBody(moduleInstance, &d_st,
    &(&obj->TreeInternal._pobj2[0])[6], &(&obj->TreeInternal._pobj0[0])[6],
    &(&obj->TreeInternal._pobj1[0])[6]);
  c_st.site = &cb_emlrtRSI;
  d_st.site = &fb_emlrtRSI;
  e_st.site = &x_emlrtRSI;
  i = obj->TreeInternal._pobj2[7].NameInternal->size[0] *
    obj->TreeInternal._pobj2[7].NameInternal->size[1];
  obj->TreeInternal._pobj2[7].NameInternal->size[0] = 1;
  obj->TreeInternal._pobj2[7].NameInternal->size[1] = 5;
  emxEnsureCapacity_char_T(obj->TreeInternal._pobj2[7].NameInternal, i);
  for (i = 0; i < 5; i++) {
    obj->TreeInternal._pobj2[7].NameInternal->data[i] = cv[i];
  }

  obj->TreeInternal._pobj2[7].ParentIndex = 0.0;
  obj->TreeInternal._pobj2[7].MassInternal = 66.0277530923337;
  for (i = 0; i < 3; i++) {
    obj->TreeInternal._pobj2[7].CenterOfMassInternal[i] = dv[i];
  }

  for (i = 0; i < 9; i++) {
    obj->TreeInternal._pobj2[7].InertiaInternal[i] = dv1[i];
  }

  for (i = 0; i < 36; i++) {
    obj->TreeInternal._pobj2[7].SpatialInertia[i] = dv2[i];
  }

  d_st.site = &mb_emlrtRSI;
  obj->TreeInternal._pobj1[7].InTree = false;
  for (i = 0; i < 16; i++) {
    obj->TreeInternal._pobj1[7].JointToParentTransform[i] = (real_T)iv3[i];
  }

  for (i = 0; i < 16; i++) {
    obj->TreeInternal._pobj1[7].ChildToJointTransform[i] = (real_T)iv3[i];
  }

  e_st.site = &ib_emlrtRSI;
  i = obj->TreeInternal._pobj1[7].NameInternal->size[0] *
    obj->TreeInternal._pobj1[7].NameInternal->size[1];
  obj->TreeInternal._pobj1[7].NameInternal->size[0] = 1;
  obj->TreeInternal._pobj1[7].NameInternal->size[1] = 6;
  emxEnsureCapacity_char_T(obj->TreeInternal._pobj1[7].NameInternal, i);
  for (i = 0; i < 6; i++) {
    obj->TreeInternal._pobj1[7].NameInternal->data[i] = jname[i];
  }

  i = obj->TreeInternal._pobj1[7].Type->size[0] * obj->TreeInternal._pobj1[7].
    Type->size[1];
  obj->TreeInternal._pobj1[7].Type->size[0] = 1;
  obj->TreeInternal._pobj1[7].Type->size[1] = 8;
  emxEnsureCapacity_char_T(obj->TreeInternal._pobj1[7].Type, i);
  for (i = 0; i < 8; i++) {
    obj->TreeInternal._pobj1[7].Type->data[i] = cv1[i];
  }

  emxInit_char_T(&b_jname, 2);
  i = b_jname->size[0] * b_jname->size[1];
  b_jname->size[0] = 1;
  b_jname->size[1] = obj->TreeInternal._pobj1[7].Type->size[1];
  emxEnsureCapacity_char_T(b_jname, i);
  loop_ub = obj->TreeInternal._pobj1[7].Type->size[1];
  for (i = 0; i < loop_ub; i++) {
    b_jname->data[i] = obj->TreeInternal._pobj1[7].Type->data[i];
  }

  if (b_strcmp(b_jname)) {
    loop_ub = 0;
  } else if (c_strcmp(b_jname)) {
    loop_ub = 1;
  } else {
    loop_ub = -1;
  }

  switch (loop_ub) {
   case 0:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = iv4[i];
    }

    for (i = 0; i < 2; i++) {
      poslim_data[i] = 6.2831853071795862 * (real_T)i - 3.1415926535897931;
    }

    obj->TreeInternal._pobj1[7].VelocityNumber = 1.0;
    obj->TreeInternal._pobj1[7].PositionNumber = 1.0;
    for (i = 0; i < 3; i++) {
      obj->TreeInternal._pobj1[7].JointAxisInternal[i] = (real_T)iv6[i];
    }
    break;

   case 1:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = iv5[i];
    }

    for (i = 0; i < 2; i++) {
      poslim_data[i] = (real_T)i - 0.5;
    }

    obj->TreeInternal._pobj1[7].VelocityNumber = 1.0;
    obj->TreeInternal._pobj1[7].PositionNumber = 1.0;
    for (i = 0; i < 3; i++) {
      obj->TreeInternal._pobj1[7].JointAxisInternal[i] = (real_T)iv6[i];
    }
    break;

   default:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = 0;
    }

    for (i = 0; i < 2; i++) {
      poslim_data[i] = 0.0;
    }

    obj->TreeInternal._pobj1[7].VelocityNumber = 0.0;
    obj->TreeInternal._pobj1[7].PositionNumber = 0.0;
    for (i = 0; i < 3; i++) {
      obj->TreeInternal._pobj1[7].JointAxisInternal[i] = 0.0;
    }
    break;
  }

  i = obj->TreeInternal._pobj1[7].MotionSubspace->size[0] *
    obj->TreeInternal._pobj1[7].MotionSubspace->size[1];
  obj->TreeInternal._pobj1[7].MotionSubspace->size[0] = 6;
  obj->TreeInternal._pobj1[7].MotionSubspace->size[1] = 1;
  emxEnsureCapacity_real_T(obj->TreeInternal._pobj1[7].MotionSubspace, i);
  for (i = 0; i < 6; i++) {
    obj->TreeInternal._pobj1[7].MotionSubspace->data[i] = (real_T)
      msubspace_data[i];
  }

  i = obj->TreeInternal._pobj1[7].PositionLimitsInternal->size[0] *
    obj->TreeInternal._pobj1[7].PositionLimitsInternal->size[1];
  obj->TreeInternal._pobj1[7].PositionLimitsInternal->size[0] = 1;
  obj->TreeInternal._pobj1[7].PositionLimitsInternal->size[1] = 2;
  emxEnsureCapacity_real_T(obj->TreeInternal._pobj1[7].PositionLimitsInternal, i);
  for (i = 0; i < 2; i++) {
    obj->TreeInternal._pobj1[7].PositionLimitsInternal->data[i] = poslim_data[i];
  }

  i = obj->TreeInternal._pobj1[7].HomePositionInternal->size[0];
  obj->TreeInternal._pobj1[7].HomePositionInternal->size[0] = 1;
  emxEnsureCapacity_real_T1(obj->TreeInternal._pobj1[7].HomePositionInternal, i);
  for (i = 0; i < 1; i++) {
    obj->TreeInternal._pobj1[7].HomePositionInternal->data[0] = 0.0;
  }

  obj->TreeInternal._pobj2[7].JointInternal = &obj->TreeInternal._pobj1[7];
  for (i = 0; i < 16; i++) {
    obj->TreeInternal._pobj2[7].JointInternal->JointToParentTransform[i] = dv3[i];
  }

  for (i = 0; i < 16; i++) {
    obj->TreeInternal._pobj2[7].JointInternal->ChildToJointTransform[i] =
      (real_T)iv3[i];
  }

  i = obj->TreeInternal._pobj2[7].JointInternal->MotionSubspace->size[0] *
    obj->TreeInternal._pobj2[7].JointInternal->MotionSubspace->size[1];
  obj->TreeInternal._pobj2[7].JointInternal->MotionSubspace->size[0] = 6;
  obj->TreeInternal._pobj2[7].JointInternal->MotionSubspace->size[1] = 1;
  emxEnsureCapacity_real_T(obj->TreeInternal._pobj2[7]
    .JointInternal->MotionSubspace, i);
  for (i = 0; i < 6; i++) {
    obj->TreeInternal._pobj2[7].JointInternal->MotionSubspace->data[i] = (real_T)
      iv4[i];
  }

  obj->TreeInternal._pobj2[7].JointInternal->InTree = true;
  i = obj->TreeInternal._pobj2[7].JointInternal->PositionLimitsInternal->size[0]
    * obj->TreeInternal._pobj2[7].JointInternal->PositionLimitsInternal->size[1];
  obj->TreeInternal._pobj2[7].JointInternal->PositionLimitsInternal->size[0] = 1;
  obj->TreeInternal._pobj2[7].JointInternal->PositionLimitsInternal->size[1] = 2;
  emxEnsureCapacity_real_T(obj->TreeInternal._pobj2[7]
    .JointInternal->PositionLimitsInternal, i);
  for (i = 0; i < 2; i++) {
    obj->TreeInternal._pobj2[7].JointInternal->PositionLimitsInternal->data[i] =
      6.2831853071795862 * (real_T)i - 3.1415926535897931;
  }

  for (i = 0; i < 3; i++) {
    obj->TreeInternal._pobj2[7].JointInternal->JointAxisInternal[i] = (real_T)
      iv6[i];
  }

  i = obj->TreeInternal._pobj2[7].JointInternal->HomePositionInternal->size[0];
  obj->TreeInternal._pobj2[7].JointInternal->HomePositionInternal->size[0] = 1;
  emxEnsureCapacity_real_T1(obj->TreeInternal._pobj2[7]
    .JointInternal->HomePositionInternal, i);
  obj->TreeInternal._pobj2[7].JointInternal->HomePositionInternal->data[0] = 0.0;
  d_st.site = &nb_emlrtRSI;
  obj->TreeInternal._pobj2[7].CollisionsInternal = CollisionSet_CollisionSet
    (moduleInstance, &d_st, &obj->TreeInternal._pobj0[7], 0.0);
  obj->TreeInternal._pobj2[7].matlabCodegenIsDeleted = false;
  obj->TreeInternal.Bodies[0] = &obj->TreeInternal._pobj2[7];
  obj->TreeInternal.Bodies[0]->Index = 1.0;
  c_st.site = &cb_emlrtRSI;
  obj->TreeInternal.Bodies[1] = h_RigidBody_RigidBody(moduleInstance, &c_st,
    &obj->TreeInternal._pobj2[8], &obj->TreeInternal._pobj0[8],
    &obj->TreeInternal._pobj1[8]);
  obj->TreeInternal.Bodies[1]->Index = 2.0;
  c_st.site = &cb_emlrtRSI;
  obj->TreeInternal.Bodies[2] = i_RigidBody_RigidBody(moduleInstance, &c_st,
    &obj->TreeInternal._pobj2[9], &obj->TreeInternal._pobj0[9],
    &obj->TreeInternal._pobj1[9]);
  obj->TreeInternal.Bodies[2]->Index = 3.0;
  c_st.site = &cb_emlrtRSI;
  obj->TreeInternal.Bodies[3] = j_RigidBody_RigidBody(moduleInstance, &c_st,
    &obj->TreeInternal._pobj2[10], &obj->TreeInternal._pobj0[10],
    &obj->TreeInternal._pobj1[10]);
  obj->TreeInternal.Bodies[3]->Index = 4.0;
  c_st.site = &cb_emlrtRSI;
  obj->TreeInternal.Bodies[4] = k_RigidBody_RigidBody(moduleInstance, &c_st,
    &obj->TreeInternal._pobj2[11], &obj->TreeInternal._pobj0[11],
    &obj->TreeInternal._pobj1[11]);
  obj->TreeInternal.Bodies[4]->Index = 5.0;
  c_st.site = &cb_emlrtRSI;
  obj->TreeInternal.Bodies[5] = l_RigidBody_RigidBody(moduleInstance, &c_st,
    &obj->TreeInternal._pobj2[12], &obj->TreeInternal._pobj0[12],
    &obj->TreeInternal._pobj1[12]);
  obj->TreeInternal.Bodies[5]->Index = 6.0;
  c_st.site = &cb_emlrtRSI;
  obj->TreeInternal.Bodies[6] = m_RigidBody_RigidBody(moduleInstance, &c_st,
    &obj->TreeInternal._pobj2[13], &obj->TreeInternal._pobj0[13],
    &obj->TreeInternal._pobj1[13]);
  obj->TreeInternal.Bodies[6]->Index = 7.0;
  c_st.site = &ab_emlrtRSI;
  for (i = 0; i < 3; i++) {
    obj->TreeInternal.Gravity[i] = dv4[i];
  }

  c_st.site = &db_emlrtRSI;
  d_st.site = &fb_emlrtRSI;
  e_st.site = &x_emlrtRSI;
  i = obj->TreeInternal.Base.NameInternal->size[0] *
    obj->TreeInternal.Base.NameInternal->size[1];
  obj->TreeInternal.Base.NameInternal->size[0] = 1;
  obj->TreeInternal.Base.NameInternal->size[1] = 4;
  emxEnsureCapacity_char_T(obj->TreeInternal.Base.NameInternal, i);
  for (i = 0; i < 4; i++) {
    obj->TreeInternal.Base.NameInternal->data[i] = cv2[i];
  }

  obj->TreeInternal.Base.ParentIndex = -1.0;
  obj->TreeInternal.Base.MassInternal = 0.0;
  for (i = 0; i < 3; i++) {
    obj->TreeInternal.Base.CenterOfMassInternal[i] = 0.0;
  }

  for (i = 0; i < 9; i++) {
    obj->TreeInternal.Base.InertiaInternal[i] = 0.0;
  }

  for (i = 0; i < 36; i++) {
    obj->TreeInternal.Base.SpatialInertia[i] = 0.0;
  }

  i = b_jname->size[0] * b_jname->size[1];
  b_jname->size[0] = 1;
  b_jname->size[1] = obj->TreeInternal.Base.NameInternal->size[1] + 4;
  emxEnsureCapacity_char_T(b_jname, i);
  loop_ub = obj->TreeInternal.Base.NameInternal->size[1];
  for (i = 0; i < loop_ub; i++) {
    b_jname->data[i] = obj->TreeInternal.Base.NameInternal->data[i];
  }

  for (i = 0; i < 4; i++) {
    b_jname->data[i + obj->TreeInternal.Base.NameInternal->size[1]] = cv3[i];
  }

  d_st.site = &ob_emlrtRSI;
  obj->TreeInternal.Base.JointInternal = rigidBodyJoint_rigidBodyJoint
    (moduleInstance, &d_st, &obj->TreeInternal._pobj1[14], b_jname);
  emxFree_char_T(&b_jname);
  d_st.site = &nb_emlrtRSI;
  obj->TreeInternal.Base.CollisionsInternal = CollisionSet_CollisionSet
    (moduleInstance, &d_st, &obj->TreeInternal._pobj0[14], 0.0);
  obj->TreeInternal.Base.matlabCodegenIsDeleted = false;
  obj->TreeInternal.Base.Index = 0.0;
  obj->TreeInternal.matlabCodegenIsDeleted = false;
  b_st.site = &w_emlrtRSI;
  c_st.site = &qb_emlrtRSI;
  d_st.site = &b_emlrtRSI;
  e_st.site = &c_emlrtRSI;
  d_st.site = &b_emlrtRSI;
  e_st.site = &d_emlrtRSI;
  obj->IKInternal.isInitialized = 0;
  c_st.site = &qb_emlrtRSI;
  d_st.site = &x_emlrtRSI;
  c_st.site = &rb_emlrtRSI;
  SystemProp_setProperties(moduleInstance, &c_st, &obj->IKInternal,
    &obj->TreeInternal, &obj->IKInternal._pobj1[0], &obj->IKInternal._pobj2[0],
    &obj->IKInternal._pobj3[0], &obj->IKInternal._pobj4, &obj->IKInternal._pobj5);
  obj->IKInternal.matlabCodegenIsDeleted = false;
}

static real_T minimum2(real_T x, real_T y)
{
  return muDoubleScalarMin(x, y);
}

static robotics_manip_internal_RigidBody *RigidBody_RigidBody
  (InstanceStruct_dnGfh1DX0a11xSfGnyzF5G *moduleInstance, const emlrtStack *sp,
   robotics_manip_internal_RigidBody *obj, robotics_manip_internal_CollisionSet *
   iobj_0, rigidBodyJoint *iobj_1)
{
  static char_T jname[14] = { 'd', 'u', 'm', 'm', 'y', 'b', 'o', 'd', 'y', '1',
    '_', 'j', 'n', 't' };

  static char_T bname[10] = { 'd', 'u', 'm', 'm', 'y', 'b', 'o', 'd', 'y', '1' };

  static char_T cv[5] = { 'f', 'i', 'x', 'e', 'd' };

  static int8_T iv[16] = { 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1 };

  static int8_T iv1[6] = { 0, 0, 1, 0, 0, 0 };

  static int8_T iv2[6] = { 0, 0, 0, 0, 0, 1 };

  static int8_T iv3[3] = { 0, 0, 1 };

  emlrtStack b_st;
  emlrtStack st;
  emxArray_char_T *switch_expression;
  robotics_manip_internal_RigidBody *b_obj;
  real_T poslim_data[12];
  int32_T i;
  int32_T loop_ub;
  int8_T msubspace_data[36];
  int8_T b_I[9];
  st.prev = sp;
  st.tls = sp->tls;
  b_obj = obj;
  st.site = &fb_emlrtRSI;
  b_st.site = &x_emlrtRSI;
  i = b_obj->NameInternal->size[0] * b_obj->NameInternal->size[1];
  b_obj->NameInternal->size[0] = 1;
  b_obj->NameInternal->size[1] = 10;
  emxEnsureCapacity_char_T(b_obj->NameInternal, i);
  for (i = 0; i < 10; i++) {
    b_obj->NameInternal->data[i] = bname[i];
  }

  st.site = &gb_emlrtRSI;
  iobj_1->InTree = false;
  for (i = 0; i < 16; i++) {
    iobj_1->JointToParentTransform[i] = (real_T)iv[i];
  }

  for (i = 0; i < 16; i++) {
    iobj_1->ChildToJointTransform[i] = (real_T)iv[i];
  }

  b_st.site = &ib_emlrtRSI;
  i = iobj_1->NameInternal->size[0] * iobj_1->NameInternal->size[1];
  iobj_1->NameInternal->size[0] = 1;
  iobj_1->NameInternal->size[1] = 14;
  emxEnsureCapacity_char_T(iobj_1->NameInternal, i);
  for (i = 0; i < 14; i++) {
    iobj_1->NameInternal->data[i] = jname[i];
  }

  i = iobj_1->Type->size[0] * iobj_1->Type->size[1];
  iobj_1->Type->size[0] = 1;
  iobj_1->Type->size[1] = 5;
  emxEnsureCapacity_char_T(iobj_1->Type, i);
  for (i = 0; i < 5; i++) {
    iobj_1->Type->data[i] = cv[i];
  }

  emxInit_char_T(&switch_expression, 2);
  i = switch_expression->size[0] * switch_expression->size[1];
  switch_expression->size[0] = 1;
  switch_expression->size[1] = iobj_1->Type->size[1];
  emxEnsureCapacity_char_T(switch_expression, i);
  loop_ub = iobj_1->Type->size[1];
  for (i = 0; i < loop_ub; i++) {
    switch_expression->data[i] = iobj_1->Type->data[i];
  }

  if (b_strcmp(switch_expression)) {
    loop_ub = 0;
  } else if (c_strcmp(switch_expression)) {
    loop_ub = 1;
  } else {
    loop_ub = -1;
  }

  emxFree_char_T(&switch_expression);
  switch (loop_ub) {
   case 0:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = iv1[i];
    }

    for (i = 0; i < 2; i++) {
      poslim_data[i] = 6.2831853071795862 * (real_T)i - 3.1415926535897931;
    }

    iobj_1->VelocityNumber = 1.0;
    iobj_1->PositionNumber = 1.0;
    for (i = 0; i < 3; i++) {
      iobj_1->JointAxisInternal[i] = (real_T)iv3[i];
    }
    break;

   case 1:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = iv2[i];
    }

    for (i = 0; i < 2; i++) {
      poslim_data[i] = (real_T)i - 0.5;
    }

    iobj_1->VelocityNumber = 1.0;
    iobj_1->PositionNumber = 1.0;
    for (i = 0; i < 3; i++) {
      iobj_1->JointAxisInternal[i] = (real_T)iv3[i];
    }
    break;

   default:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = 0;
    }

    for (i = 0; i < 2; i++) {
      poslim_data[i] = 0.0;
    }

    iobj_1->VelocityNumber = 0.0;
    iobj_1->PositionNumber = 0.0;
    for (i = 0; i < 3; i++) {
      iobj_1->JointAxisInternal[i] = 0.0;
    }
    break;
  }

  i = iobj_1->MotionSubspace->size[0] * iobj_1->MotionSubspace->size[1];
  iobj_1->MotionSubspace->size[0] = 6;
  iobj_1->MotionSubspace->size[1] = 1;
  emxEnsureCapacity_real_T(iobj_1->MotionSubspace, i);
  for (i = 0; i < 6; i++) {
    iobj_1->MotionSubspace->data[i] = (real_T)msubspace_data[i];
  }

  i = iobj_1->PositionLimitsInternal->size[0] * iobj_1->
    PositionLimitsInternal->size[1];
  iobj_1->PositionLimitsInternal->size[0] = 1;
  iobj_1->PositionLimitsInternal->size[1] = 2;
  emxEnsureCapacity_real_T(iobj_1->PositionLimitsInternal, i);
  for (i = 0; i < 2; i++) {
    iobj_1->PositionLimitsInternal->data[i] = poslim_data[i];
  }

  i = iobj_1->HomePositionInternal->size[0];
  iobj_1->HomePositionInternal->size[0] = 1;
  emxEnsureCapacity_real_T1(iobj_1->HomePositionInternal, i);
  for (i = 0; i < 1; i++) {
    iobj_1->HomePositionInternal->data[0] = 0.0;
  }

  b_obj->JointInternal = iobj_1;
  b_obj->Index = -1.0;
  b_obj->ParentIndex = -1.0;
  b_obj->MassInternal = 1.0;
  for (i = 0; i < 3; i++) {
    b_obj->CenterOfMassInternal[i] = 0.0;
  }

  for (i = 0; i < 9; i++) {
    b_I[i] = 0;
  }

  for (loop_ub = 0; loop_ub < 3; loop_ub++) {
    b_I[loop_ub + 3 * loop_ub] = 1;
  }

  for (i = 0; i < 9; i++) {
    b_obj->InertiaInternal[i] = (real_T)b_I[i];
  }

  for (i = 0; i < 36; i++) {
    msubspace_data[i] = 0;
  }

  for (loop_ub = 0; loop_ub < 6; loop_ub++) {
    msubspace_data[loop_ub + 6 * loop_ub] = 1;
  }

  for (i = 0; i < 36; i++) {
    b_obj->SpatialInertia[i] = (real_T)msubspace_data[i];
  }

  st.site = &hb_emlrtRSI;
  b_obj->CollisionsInternal = CollisionSet_CollisionSet(moduleInstance, &st,
    iobj_0, 0.0);
  b_obj->matlabCodegenIsDeleted = false;
  return b_obj;
}

static boolean_T b_strcmp(emxArray_char_T *a)
{
  static char_T cv[8] = { 'r', 'e', 'v', 'o', 'l', 'u', 't', 'e' };

  int32_T exitg1;
  int32_T kstr;
  boolean_T b_bool;
  b_bool = false;
  if (a->size[1] != 8) {
  } else {
    kstr = 1;
    do {
      exitg1 = 0;
      if (kstr - 1 < 8) {
        if (a->data[kstr - 1] != cv[kstr - 1]) {
          exitg1 = 1;
        } else {
          kstr++;
        }
      } else {
        b_bool = true;
        exitg1 = 1;
      }
    } while (exitg1 == 0);
  }

  return b_bool;
}

static boolean_T c_strcmp(emxArray_char_T *a)
{
  static char_T cv[9] = { 'p', 'r', 'i', 's', 'm', 'a', 't', 'i', 'c' };

  int32_T exitg1;
  int32_T kstr;
  boolean_T b_bool;
  b_bool = false;
  if (a->size[1] != 9) {
  } else {
    kstr = 1;
    do {
      exitg1 = 0;
      if (kstr - 1 < 9) {
        if (a->data[kstr - 1] != cv[kstr - 1]) {
          exitg1 = 1;
        } else {
          kstr++;
        }
      } else {
        b_bool = true;
        exitg1 = 1;
      }
    } while (exitg1 == 0);
  }

  return b_bool;
}

static void eye(real_T b_I[36])
{
  int32_T k;
  for (k = 0; k < 36; k++) {
    b_I[k] = 0.0;
  }

  for (k = 0; k < 6; k++) {
    b_I[k + 6 * k] = 1.0;
  }
}

static robotics_manip_internal_CollisionSet *CollisionSet_CollisionSet
  (InstanceStruct_dnGfh1DX0a11xSfGnyzF5G *moduleInstance, const emlrtStack *sp,
   robotics_manip_internal_CollisionSet *obj, real_T maxElements)
{
  static int8_T b_localPose[16] = { 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0,
    1 };

  void* defaultCollisionObj_GeometryInternal;
  emlrtStack b_st;
  emlrtStack st;
  emxArray_robotics_manip_interna *r;
  robotics_manip_internal_CollisionGeometry expl_temp;
  robotics_manip_internal_CollisionSet *b_obj;
  real_T d;
  int32_T b_i;
  int32_T i;
  int32_T i1;
  int32_T i2;
  int8_T defaultGeometry_LocalPose[16];
  int8_T defaultGeometry_WorldPose[16];
  int8_T localPose;
  b_obj = obj;
  b_obj->Size = 0.0;
  st.site = &kb_emlrtRSI;
  b_st.site = &jb_emlrtRSI;
  b_obj->MaxElements = maxElements;
  emxInit_robotics_manip_internal(&r, 2);
  i = r->size[0] * r->size[1];
  r->size[0] = 1;
  d = emlrtNonNegativeCheckR2012b(b_obj->MaxElements, &b_emlrtDCI,
    cgxertPrepareEmlrtTLS(moduleInstance->S, (emlrtConstCTX)sp,
    moduleInstance->sysIdx, 6));
  r->size[1] = (int32_T)emlrtIntegerCheckR2012b(d, &emlrtDCI,
    cgxertPrepareEmlrtTLS(moduleInstance->S, (emlrtConstCTX)sp,
    moduleInstance->sysIdx, 6));
  emxEnsureCapacity_robotics_mani(r, i);
  i = b_obj->CollisionGeometries->size[0] * b_obj->CollisionGeometries->size[1];
  b_obj->CollisionGeometries->size[0] = r->size[0];
  b_obj->CollisionGeometries->size[1] = r->size[1];
  emxFree_robotics_manip_internal(&r);
  emxEnsureCapacity_robotics_mani(b_obj->CollisionGeometries, i);
  defaultCollisionObj_GeometryInternal = NULL;
  st.site = &lb_emlrtRSI;
  for (i = 0; i < 16; i++) {
    localPose = b_localPose[i];
    defaultGeometry_LocalPose[i] = localPose;
    defaultGeometry_WorldPose[i] = localPose;
  }

  d = b_obj->MaxElements;
  i = (int32_T)d - 1;
  emlrtForLoopVectorCheckR2021a(1.0, 1.0, d, mxDOUBLE_CLASS, (int32_T)d,
    &emlrtRTEI, cgxertPrepareEmlrtTLS(moduleInstance->S, (emlrtConstCTX)sp,
    moduleInstance->sysIdx, 6));
  for (b_i = 0; b_i <= i; b_i++) {
    i1 = b_obj->CollisionGeometries->size[1] - 1;
    expl_temp.CollisionPrimitive = defaultCollisionObj_GeometryInternal;
    for (i2 = 0; i2 < 16; i2++) {
      expl_temp.LocalPose[i2] = (real_T)defaultGeometry_LocalPose[i2];
      expl_temp.WorldPose[i2] = (real_T)defaultGeometry_WorldPose[i2];
    }

    b_obj->CollisionGeometries->data[emlrtDynamicBoundsCheckR2012b(b_i, 0, i1,
      &emlrtBCI, cgxertPrepareEmlrtTLS(moduleInstance->S, (emlrtConstCTX)sp,
      moduleInstance->sysIdx, 6))] = expl_temp;
  }

  b_obj->matlabCodegenIsDeleted = false;
  return b_obj;
}

static robotics_manip_internal_RigidBody *b_RigidBody_RigidBody
  (InstanceStruct_dnGfh1DX0a11xSfGnyzF5G *moduleInstance, const emlrtStack *sp,
   robotics_manip_internal_RigidBody *obj, robotics_manip_internal_CollisionSet *
   iobj_0, rigidBodyJoint *iobj_1)
{
  static char_T jname[14] = { 'd', 'u', 'm', 'm', 'y', 'b', 'o', 'd', 'y', '2',
    '_', 'j', 'n', 't' };

  static char_T bname[10] = { 'd', 'u', 'm', 'm', 'y', 'b', 'o', 'd', 'y', '2' };

  static char_T cv[5] = { 'f', 'i', 'x', 'e', 'd' };

  static int8_T iv[16] = { 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1 };

  static int8_T iv1[6] = { 0, 0, 1, 0, 0, 0 };

  static int8_T iv2[6] = { 0, 0, 0, 0, 0, 1 };

  static int8_T iv3[3] = { 0, 0, 1 };

  emlrtStack b_st;
  emlrtStack st;
  emxArray_char_T *switch_expression;
  robotics_manip_internal_RigidBody *b_obj;
  real_T poslim_data[12];
  int32_T i;
  int32_T loop_ub;
  int8_T msubspace_data[36];
  int8_T b_I[9];
  st.prev = sp;
  st.tls = sp->tls;
  b_obj = obj;
  st.site = &fb_emlrtRSI;
  b_st.site = &x_emlrtRSI;
  i = b_obj->NameInternal->size[0] * b_obj->NameInternal->size[1];
  b_obj->NameInternal->size[0] = 1;
  b_obj->NameInternal->size[1] = 10;
  emxEnsureCapacity_char_T(b_obj->NameInternal, i);
  for (i = 0; i < 10; i++) {
    b_obj->NameInternal->data[i] = bname[i];
  }

  st.site = &gb_emlrtRSI;
  iobj_1->InTree = false;
  for (i = 0; i < 16; i++) {
    iobj_1->JointToParentTransform[i] = (real_T)iv[i];
  }

  for (i = 0; i < 16; i++) {
    iobj_1->ChildToJointTransform[i] = (real_T)iv[i];
  }

  b_st.site = &ib_emlrtRSI;
  i = iobj_1->NameInternal->size[0] * iobj_1->NameInternal->size[1];
  iobj_1->NameInternal->size[0] = 1;
  iobj_1->NameInternal->size[1] = 14;
  emxEnsureCapacity_char_T(iobj_1->NameInternal, i);
  for (i = 0; i < 14; i++) {
    iobj_1->NameInternal->data[i] = jname[i];
  }

  i = iobj_1->Type->size[0] * iobj_1->Type->size[1];
  iobj_1->Type->size[0] = 1;
  iobj_1->Type->size[1] = 5;
  emxEnsureCapacity_char_T(iobj_1->Type, i);
  for (i = 0; i < 5; i++) {
    iobj_1->Type->data[i] = cv[i];
  }

  emxInit_char_T(&switch_expression, 2);
  i = switch_expression->size[0] * switch_expression->size[1];
  switch_expression->size[0] = 1;
  switch_expression->size[1] = iobj_1->Type->size[1];
  emxEnsureCapacity_char_T(switch_expression, i);
  loop_ub = iobj_1->Type->size[1];
  for (i = 0; i < loop_ub; i++) {
    switch_expression->data[i] = iobj_1->Type->data[i];
  }

  if (b_strcmp(switch_expression)) {
    loop_ub = 0;
  } else if (c_strcmp(switch_expression)) {
    loop_ub = 1;
  } else {
    loop_ub = -1;
  }

  emxFree_char_T(&switch_expression);
  switch (loop_ub) {
   case 0:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = iv1[i];
    }

    for (i = 0; i < 2; i++) {
      poslim_data[i] = 6.2831853071795862 * (real_T)i - 3.1415926535897931;
    }

    iobj_1->VelocityNumber = 1.0;
    iobj_1->PositionNumber = 1.0;
    for (i = 0; i < 3; i++) {
      iobj_1->JointAxisInternal[i] = (real_T)iv3[i];
    }
    break;

   case 1:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = iv2[i];
    }

    for (i = 0; i < 2; i++) {
      poslim_data[i] = (real_T)i - 0.5;
    }

    iobj_1->VelocityNumber = 1.0;
    iobj_1->PositionNumber = 1.0;
    for (i = 0; i < 3; i++) {
      iobj_1->JointAxisInternal[i] = (real_T)iv3[i];
    }
    break;

   default:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = 0;
    }

    for (i = 0; i < 2; i++) {
      poslim_data[i] = 0.0;
    }

    iobj_1->VelocityNumber = 0.0;
    iobj_1->PositionNumber = 0.0;
    for (i = 0; i < 3; i++) {
      iobj_1->JointAxisInternal[i] = 0.0;
    }
    break;
  }

  i = iobj_1->MotionSubspace->size[0] * iobj_1->MotionSubspace->size[1];
  iobj_1->MotionSubspace->size[0] = 6;
  iobj_1->MotionSubspace->size[1] = 1;
  emxEnsureCapacity_real_T(iobj_1->MotionSubspace, i);
  for (i = 0; i < 6; i++) {
    iobj_1->MotionSubspace->data[i] = (real_T)msubspace_data[i];
  }

  i = iobj_1->PositionLimitsInternal->size[0] * iobj_1->
    PositionLimitsInternal->size[1];
  iobj_1->PositionLimitsInternal->size[0] = 1;
  iobj_1->PositionLimitsInternal->size[1] = 2;
  emxEnsureCapacity_real_T(iobj_1->PositionLimitsInternal, i);
  for (i = 0; i < 2; i++) {
    iobj_1->PositionLimitsInternal->data[i] = poslim_data[i];
  }

  i = iobj_1->HomePositionInternal->size[0];
  iobj_1->HomePositionInternal->size[0] = 1;
  emxEnsureCapacity_real_T1(iobj_1->HomePositionInternal, i);
  for (i = 0; i < 1; i++) {
    iobj_1->HomePositionInternal->data[0] = 0.0;
  }

  b_obj->JointInternal = iobj_1;
  b_obj->Index = -1.0;
  b_obj->ParentIndex = -1.0;
  b_obj->MassInternal = 1.0;
  for (i = 0; i < 3; i++) {
    b_obj->CenterOfMassInternal[i] = 0.0;
  }

  for (i = 0; i < 9; i++) {
    b_I[i] = 0;
  }

  for (loop_ub = 0; loop_ub < 3; loop_ub++) {
    b_I[loop_ub + 3 * loop_ub] = 1;
  }

  for (i = 0; i < 9; i++) {
    b_obj->InertiaInternal[i] = (real_T)b_I[i];
  }

  for (i = 0; i < 36; i++) {
    msubspace_data[i] = 0;
  }

  for (loop_ub = 0; loop_ub < 6; loop_ub++) {
    msubspace_data[loop_ub + 6 * loop_ub] = 1;
  }

  for (i = 0; i < 36; i++) {
    b_obj->SpatialInertia[i] = (real_T)msubspace_data[i];
  }

  st.site = &hb_emlrtRSI;
  b_obj->CollisionsInternal = CollisionSet_CollisionSet(moduleInstance, &st,
    iobj_0, 0.0);
  b_obj->matlabCodegenIsDeleted = false;
  return b_obj;
}

static robotics_manip_internal_RigidBody *c_RigidBody_RigidBody
  (InstanceStruct_dnGfh1DX0a11xSfGnyzF5G *moduleInstance, const emlrtStack *sp,
   robotics_manip_internal_RigidBody *obj, robotics_manip_internal_CollisionSet *
   iobj_0, rigidBodyJoint *iobj_1)
{
  static char_T jname[14] = { 'd', 'u', 'm', 'm', 'y', 'b', 'o', 'd', 'y', '3',
    '_', 'j', 'n', 't' };

  static char_T bname[10] = { 'd', 'u', 'm', 'm', 'y', 'b', 'o', 'd', 'y', '3' };

  static char_T cv[5] = { 'f', 'i', 'x', 'e', 'd' };

  static int8_T iv[16] = { 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1 };

  static int8_T iv1[6] = { 0, 0, 1, 0, 0, 0 };

  static int8_T iv2[6] = { 0, 0, 0, 0, 0, 1 };

  static int8_T iv3[3] = { 0, 0, 1 };

  emlrtStack b_st;
  emlrtStack st;
  emxArray_char_T *switch_expression;
  robotics_manip_internal_RigidBody *b_obj;
  real_T poslim_data[12];
  int32_T i;
  int32_T loop_ub;
  int8_T msubspace_data[36];
  int8_T b_I[9];
  st.prev = sp;
  st.tls = sp->tls;
  b_obj = obj;
  st.site = &fb_emlrtRSI;
  b_st.site = &x_emlrtRSI;
  i = b_obj->NameInternal->size[0] * b_obj->NameInternal->size[1];
  b_obj->NameInternal->size[0] = 1;
  b_obj->NameInternal->size[1] = 10;
  emxEnsureCapacity_char_T(b_obj->NameInternal, i);
  for (i = 0; i < 10; i++) {
    b_obj->NameInternal->data[i] = bname[i];
  }

  st.site = &gb_emlrtRSI;
  iobj_1->InTree = false;
  for (i = 0; i < 16; i++) {
    iobj_1->JointToParentTransform[i] = (real_T)iv[i];
  }

  for (i = 0; i < 16; i++) {
    iobj_1->ChildToJointTransform[i] = (real_T)iv[i];
  }

  b_st.site = &ib_emlrtRSI;
  i = iobj_1->NameInternal->size[0] * iobj_1->NameInternal->size[1];
  iobj_1->NameInternal->size[0] = 1;
  iobj_1->NameInternal->size[1] = 14;
  emxEnsureCapacity_char_T(iobj_1->NameInternal, i);
  for (i = 0; i < 14; i++) {
    iobj_1->NameInternal->data[i] = jname[i];
  }

  i = iobj_1->Type->size[0] * iobj_1->Type->size[1];
  iobj_1->Type->size[0] = 1;
  iobj_1->Type->size[1] = 5;
  emxEnsureCapacity_char_T(iobj_1->Type, i);
  for (i = 0; i < 5; i++) {
    iobj_1->Type->data[i] = cv[i];
  }

  emxInit_char_T(&switch_expression, 2);
  i = switch_expression->size[0] * switch_expression->size[1];
  switch_expression->size[0] = 1;
  switch_expression->size[1] = iobj_1->Type->size[1];
  emxEnsureCapacity_char_T(switch_expression, i);
  loop_ub = iobj_1->Type->size[1];
  for (i = 0; i < loop_ub; i++) {
    switch_expression->data[i] = iobj_1->Type->data[i];
  }

  if (b_strcmp(switch_expression)) {
    loop_ub = 0;
  } else if (c_strcmp(switch_expression)) {
    loop_ub = 1;
  } else {
    loop_ub = -1;
  }

  emxFree_char_T(&switch_expression);
  switch (loop_ub) {
   case 0:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = iv1[i];
    }

    for (i = 0; i < 2; i++) {
      poslim_data[i] = 6.2831853071795862 * (real_T)i - 3.1415926535897931;
    }

    iobj_1->VelocityNumber = 1.0;
    iobj_1->PositionNumber = 1.0;
    for (i = 0; i < 3; i++) {
      iobj_1->JointAxisInternal[i] = (real_T)iv3[i];
    }
    break;

   case 1:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = iv2[i];
    }

    for (i = 0; i < 2; i++) {
      poslim_data[i] = (real_T)i - 0.5;
    }

    iobj_1->VelocityNumber = 1.0;
    iobj_1->PositionNumber = 1.0;
    for (i = 0; i < 3; i++) {
      iobj_1->JointAxisInternal[i] = (real_T)iv3[i];
    }
    break;

   default:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = 0;
    }

    for (i = 0; i < 2; i++) {
      poslim_data[i] = 0.0;
    }

    iobj_1->VelocityNumber = 0.0;
    iobj_1->PositionNumber = 0.0;
    for (i = 0; i < 3; i++) {
      iobj_1->JointAxisInternal[i] = 0.0;
    }
    break;
  }

  i = iobj_1->MotionSubspace->size[0] * iobj_1->MotionSubspace->size[1];
  iobj_1->MotionSubspace->size[0] = 6;
  iobj_1->MotionSubspace->size[1] = 1;
  emxEnsureCapacity_real_T(iobj_1->MotionSubspace, i);
  for (i = 0; i < 6; i++) {
    iobj_1->MotionSubspace->data[i] = (real_T)msubspace_data[i];
  }

  i = iobj_1->PositionLimitsInternal->size[0] * iobj_1->
    PositionLimitsInternal->size[1];
  iobj_1->PositionLimitsInternal->size[0] = 1;
  iobj_1->PositionLimitsInternal->size[1] = 2;
  emxEnsureCapacity_real_T(iobj_1->PositionLimitsInternal, i);
  for (i = 0; i < 2; i++) {
    iobj_1->PositionLimitsInternal->data[i] = poslim_data[i];
  }

  i = iobj_1->HomePositionInternal->size[0];
  iobj_1->HomePositionInternal->size[0] = 1;
  emxEnsureCapacity_real_T1(iobj_1->HomePositionInternal, i);
  for (i = 0; i < 1; i++) {
    iobj_1->HomePositionInternal->data[0] = 0.0;
  }

  b_obj->JointInternal = iobj_1;
  b_obj->Index = -1.0;
  b_obj->ParentIndex = -1.0;
  b_obj->MassInternal = 1.0;
  for (i = 0; i < 3; i++) {
    b_obj->CenterOfMassInternal[i] = 0.0;
  }

  for (i = 0; i < 9; i++) {
    b_I[i] = 0;
  }

  for (loop_ub = 0; loop_ub < 3; loop_ub++) {
    b_I[loop_ub + 3 * loop_ub] = 1;
  }

  for (i = 0; i < 9; i++) {
    b_obj->InertiaInternal[i] = (real_T)b_I[i];
  }

  for (i = 0; i < 36; i++) {
    msubspace_data[i] = 0;
  }

  for (loop_ub = 0; loop_ub < 6; loop_ub++) {
    msubspace_data[loop_ub + 6 * loop_ub] = 1;
  }

  for (i = 0; i < 36; i++) {
    b_obj->SpatialInertia[i] = (real_T)msubspace_data[i];
  }

  st.site = &hb_emlrtRSI;
  b_obj->CollisionsInternal = CollisionSet_CollisionSet(moduleInstance, &st,
    iobj_0, 0.0);
  b_obj->matlabCodegenIsDeleted = false;
  return b_obj;
}

static robotics_manip_internal_RigidBody *d_RigidBody_RigidBody
  (InstanceStruct_dnGfh1DX0a11xSfGnyzF5G *moduleInstance, const emlrtStack *sp,
   robotics_manip_internal_RigidBody *obj, robotics_manip_internal_CollisionSet *
   iobj_0, rigidBodyJoint *iobj_1)
{
  static char_T jname[14] = { 'd', 'u', 'm', 'm', 'y', 'b', 'o', 'd', 'y', '4',
    '_', 'j', 'n', 't' };

  static char_T bname[10] = { 'd', 'u', 'm', 'm', 'y', 'b', 'o', 'd', 'y', '4' };

  static char_T cv[5] = { 'f', 'i', 'x', 'e', 'd' };

  static int8_T iv[16] = { 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1 };

  static int8_T iv1[6] = { 0, 0, 1, 0, 0, 0 };

  static int8_T iv2[6] = { 0, 0, 0, 0, 0, 1 };

  static int8_T iv3[3] = { 0, 0, 1 };

  emlrtStack b_st;
  emlrtStack st;
  emxArray_char_T *switch_expression;
  robotics_manip_internal_RigidBody *b_obj;
  real_T poslim_data[12];
  int32_T i;
  int32_T loop_ub;
  int8_T msubspace_data[36];
  int8_T b_I[9];
  st.prev = sp;
  st.tls = sp->tls;
  b_obj = obj;
  st.site = &fb_emlrtRSI;
  b_st.site = &x_emlrtRSI;
  i = b_obj->NameInternal->size[0] * b_obj->NameInternal->size[1];
  b_obj->NameInternal->size[0] = 1;
  b_obj->NameInternal->size[1] = 10;
  emxEnsureCapacity_char_T(b_obj->NameInternal, i);
  for (i = 0; i < 10; i++) {
    b_obj->NameInternal->data[i] = bname[i];
  }

  st.site = &gb_emlrtRSI;
  iobj_1->InTree = false;
  for (i = 0; i < 16; i++) {
    iobj_1->JointToParentTransform[i] = (real_T)iv[i];
  }

  for (i = 0; i < 16; i++) {
    iobj_1->ChildToJointTransform[i] = (real_T)iv[i];
  }

  b_st.site = &ib_emlrtRSI;
  i = iobj_1->NameInternal->size[0] * iobj_1->NameInternal->size[1];
  iobj_1->NameInternal->size[0] = 1;
  iobj_1->NameInternal->size[1] = 14;
  emxEnsureCapacity_char_T(iobj_1->NameInternal, i);
  for (i = 0; i < 14; i++) {
    iobj_1->NameInternal->data[i] = jname[i];
  }

  i = iobj_1->Type->size[0] * iobj_1->Type->size[1];
  iobj_1->Type->size[0] = 1;
  iobj_1->Type->size[1] = 5;
  emxEnsureCapacity_char_T(iobj_1->Type, i);
  for (i = 0; i < 5; i++) {
    iobj_1->Type->data[i] = cv[i];
  }

  emxInit_char_T(&switch_expression, 2);
  i = switch_expression->size[0] * switch_expression->size[1];
  switch_expression->size[0] = 1;
  switch_expression->size[1] = iobj_1->Type->size[1];
  emxEnsureCapacity_char_T(switch_expression, i);
  loop_ub = iobj_1->Type->size[1];
  for (i = 0; i < loop_ub; i++) {
    switch_expression->data[i] = iobj_1->Type->data[i];
  }

  if (b_strcmp(switch_expression)) {
    loop_ub = 0;
  } else if (c_strcmp(switch_expression)) {
    loop_ub = 1;
  } else {
    loop_ub = -1;
  }

  emxFree_char_T(&switch_expression);
  switch (loop_ub) {
   case 0:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = iv1[i];
    }

    for (i = 0; i < 2; i++) {
      poslim_data[i] = 6.2831853071795862 * (real_T)i - 3.1415926535897931;
    }

    iobj_1->VelocityNumber = 1.0;
    iobj_1->PositionNumber = 1.0;
    for (i = 0; i < 3; i++) {
      iobj_1->JointAxisInternal[i] = (real_T)iv3[i];
    }
    break;

   case 1:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = iv2[i];
    }

    for (i = 0; i < 2; i++) {
      poslim_data[i] = (real_T)i - 0.5;
    }

    iobj_1->VelocityNumber = 1.0;
    iobj_1->PositionNumber = 1.0;
    for (i = 0; i < 3; i++) {
      iobj_1->JointAxisInternal[i] = (real_T)iv3[i];
    }
    break;

   default:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = 0;
    }

    for (i = 0; i < 2; i++) {
      poslim_data[i] = 0.0;
    }

    iobj_1->VelocityNumber = 0.0;
    iobj_1->PositionNumber = 0.0;
    for (i = 0; i < 3; i++) {
      iobj_1->JointAxisInternal[i] = 0.0;
    }
    break;
  }

  i = iobj_1->MotionSubspace->size[0] * iobj_1->MotionSubspace->size[1];
  iobj_1->MotionSubspace->size[0] = 6;
  iobj_1->MotionSubspace->size[1] = 1;
  emxEnsureCapacity_real_T(iobj_1->MotionSubspace, i);
  for (i = 0; i < 6; i++) {
    iobj_1->MotionSubspace->data[i] = (real_T)msubspace_data[i];
  }

  i = iobj_1->PositionLimitsInternal->size[0] * iobj_1->
    PositionLimitsInternal->size[1];
  iobj_1->PositionLimitsInternal->size[0] = 1;
  iobj_1->PositionLimitsInternal->size[1] = 2;
  emxEnsureCapacity_real_T(iobj_1->PositionLimitsInternal, i);
  for (i = 0; i < 2; i++) {
    iobj_1->PositionLimitsInternal->data[i] = poslim_data[i];
  }

  i = iobj_1->HomePositionInternal->size[0];
  iobj_1->HomePositionInternal->size[0] = 1;
  emxEnsureCapacity_real_T1(iobj_1->HomePositionInternal, i);
  for (i = 0; i < 1; i++) {
    iobj_1->HomePositionInternal->data[0] = 0.0;
  }

  b_obj->JointInternal = iobj_1;
  b_obj->Index = -1.0;
  b_obj->ParentIndex = -1.0;
  b_obj->MassInternal = 1.0;
  for (i = 0; i < 3; i++) {
    b_obj->CenterOfMassInternal[i] = 0.0;
  }

  for (i = 0; i < 9; i++) {
    b_I[i] = 0;
  }

  for (loop_ub = 0; loop_ub < 3; loop_ub++) {
    b_I[loop_ub + 3 * loop_ub] = 1;
  }

  for (i = 0; i < 9; i++) {
    b_obj->InertiaInternal[i] = (real_T)b_I[i];
  }

  for (i = 0; i < 36; i++) {
    msubspace_data[i] = 0;
  }

  for (loop_ub = 0; loop_ub < 6; loop_ub++) {
    msubspace_data[loop_ub + 6 * loop_ub] = 1;
  }

  for (i = 0; i < 36; i++) {
    b_obj->SpatialInertia[i] = (real_T)msubspace_data[i];
  }

  st.site = &hb_emlrtRSI;
  b_obj->CollisionsInternal = CollisionSet_CollisionSet(moduleInstance, &st,
    iobj_0, 0.0);
  b_obj->matlabCodegenIsDeleted = false;
  return b_obj;
}

static robotics_manip_internal_RigidBody *e_RigidBody_RigidBody
  (InstanceStruct_dnGfh1DX0a11xSfGnyzF5G *moduleInstance, const emlrtStack *sp,
   robotics_manip_internal_RigidBody *obj, robotics_manip_internal_CollisionSet *
   iobj_0, rigidBodyJoint *iobj_1)
{
  static char_T jname[14] = { 'd', 'u', 'm', 'm', 'y', 'b', 'o', 'd', 'y', '5',
    '_', 'j', 'n', 't' };

  static char_T bname[10] = { 'd', 'u', 'm', 'm', 'y', 'b', 'o', 'd', 'y', '5' };

  static char_T cv[5] = { 'f', 'i', 'x', 'e', 'd' };

  static int8_T iv[16] = { 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1 };

  static int8_T iv1[6] = { 0, 0, 1, 0, 0, 0 };

  static int8_T iv2[6] = { 0, 0, 0, 0, 0, 1 };

  static int8_T iv3[3] = { 0, 0, 1 };

  emlrtStack b_st;
  emlrtStack st;
  emxArray_char_T *switch_expression;
  robotics_manip_internal_RigidBody *b_obj;
  real_T poslim_data[12];
  int32_T i;
  int32_T loop_ub;
  int8_T msubspace_data[36];
  int8_T b_I[9];
  st.prev = sp;
  st.tls = sp->tls;
  b_obj = obj;
  st.site = &fb_emlrtRSI;
  b_st.site = &x_emlrtRSI;
  i = b_obj->NameInternal->size[0] * b_obj->NameInternal->size[1];
  b_obj->NameInternal->size[0] = 1;
  b_obj->NameInternal->size[1] = 10;
  emxEnsureCapacity_char_T(b_obj->NameInternal, i);
  for (i = 0; i < 10; i++) {
    b_obj->NameInternal->data[i] = bname[i];
  }

  st.site = &gb_emlrtRSI;
  iobj_1->InTree = false;
  for (i = 0; i < 16; i++) {
    iobj_1->JointToParentTransform[i] = (real_T)iv[i];
  }

  for (i = 0; i < 16; i++) {
    iobj_1->ChildToJointTransform[i] = (real_T)iv[i];
  }

  b_st.site = &ib_emlrtRSI;
  i = iobj_1->NameInternal->size[0] * iobj_1->NameInternal->size[1];
  iobj_1->NameInternal->size[0] = 1;
  iobj_1->NameInternal->size[1] = 14;
  emxEnsureCapacity_char_T(iobj_1->NameInternal, i);
  for (i = 0; i < 14; i++) {
    iobj_1->NameInternal->data[i] = jname[i];
  }

  i = iobj_1->Type->size[0] * iobj_1->Type->size[1];
  iobj_1->Type->size[0] = 1;
  iobj_1->Type->size[1] = 5;
  emxEnsureCapacity_char_T(iobj_1->Type, i);
  for (i = 0; i < 5; i++) {
    iobj_1->Type->data[i] = cv[i];
  }

  emxInit_char_T(&switch_expression, 2);
  i = switch_expression->size[0] * switch_expression->size[1];
  switch_expression->size[0] = 1;
  switch_expression->size[1] = iobj_1->Type->size[1];
  emxEnsureCapacity_char_T(switch_expression, i);
  loop_ub = iobj_1->Type->size[1];
  for (i = 0; i < loop_ub; i++) {
    switch_expression->data[i] = iobj_1->Type->data[i];
  }

  if (b_strcmp(switch_expression)) {
    loop_ub = 0;
  } else if (c_strcmp(switch_expression)) {
    loop_ub = 1;
  } else {
    loop_ub = -1;
  }

  emxFree_char_T(&switch_expression);
  switch (loop_ub) {
   case 0:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = iv1[i];
    }

    for (i = 0; i < 2; i++) {
      poslim_data[i] = 6.2831853071795862 * (real_T)i - 3.1415926535897931;
    }

    iobj_1->VelocityNumber = 1.0;
    iobj_1->PositionNumber = 1.0;
    for (i = 0; i < 3; i++) {
      iobj_1->JointAxisInternal[i] = (real_T)iv3[i];
    }
    break;

   case 1:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = iv2[i];
    }

    for (i = 0; i < 2; i++) {
      poslim_data[i] = (real_T)i - 0.5;
    }

    iobj_1->VelocityNumber = 1.0;
    iobj_1->PositionNumber = 1.0;
    for (i = 0; i < 3; i++) {
      iobj_1->JointAxisInternal[i] = (real_T)iv3[i];
    }
    break;

   default:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = 0;
    }

    for (i = 0; i < 2; i++) {
      poslim_data[i] = 0.0;
    }

    iobj_1->VelocityNumber = 0.0;
    iobj_1->PositionNumber = 0.0;
    for (i = 0; i < 3; i++) {
      iobj_1->JointAxisInternal[i] = 0.0;
    }
    break;
  }

  i = iobj_1->MotionSubspace->size[0] * iobj_1->MotionSubspace->size[1];
  iobj_1->MotionSubspace->size[0] = 6;
  iobj_1->MotionSubspace->size[1] = 1;
  emxEnsureCapacity_real_T(iobj_1->MotionSubspace, i);
  for (i = 0; i < 6; i++) {
    iobj_1->MotionSubspace->data[i] = (real_T)msubspace_data[i];
  }

  i = iobj_1->PositionLimitsInternal->size[0] * iobj_1->
    PositionLimitsInternal->size[1];
  iobj_1->PositionLimitsInternal->size[0] = 1;
  iobj_1->PositionLimitsInternal->size[1] = 2;
  emxEnsureCapacity_real_T(iobj_1->PositionLimitsInternal, i);
  for (i = 0; i < 2; i++) {
    iobj_1->PositionLimitsInternal->data[i] = poslim_data[i];
  }

  i = iobj_1->HomePositionInternal->size[0];
  iobj_1->HomePositionInternal->size[0] = 1;
  emxEnsureCapacity_real_T1(iobj_1->HomePositionInternal, i);
  for (i = 0; i < 1; i++) {
    iobj_1->HomePositionInternal->data[0] = 0.0;
  }

  b_obj->JointInternal = iobj_1;
  b_obj->Index = -1.0;
  b_obj->ParentIndex = -1.0;
  b_obj->MassInternal = 1.0;
  for (i = 0; i < 3; i++) {
    b_obj->CenterOfMassInternal[i] = 0.0;
  }

  for (i = 0; i < 9; i++) {
    b_I[i] = 0;
  }

  for (loop_ub = 0; loop_ub < 3; loop_ub++) {
    b_I[loop_ub + 3 * loop_ub] = 1;
  }

  for (i = 0; i < 9; i++) {
    b_obj->InertiaInternal[i] = (real_T)b_I[i];
  }

  for (i = 0; i < 36; i++) {
    msubspace_data[i] = 0;
  }

  for (loop_ub = 0; loop_ub < 6; loop_ub++) {
    msubspace_data[loop_ub + 6 * loop_ub] = 1;
  }

  for (i = 0; i < 36; i++) {
    b_obj->SpatialInertia[i] = (real_T)msubspace_data[i];
  }

  st.site = &hb_emlrtRSI;
  b_obj->CollisionsInternal = CollisionSet_CollisionSet(moduleInstance, &st,
    iobj_0, 0.0);
  b_obj->matlabCodegenIsDeleted = false;
  return b_obj;
}

static robotics_manip_internal_RigidBody *f_RigidBody_RigidBody
  (InstanceStruct_dnGfh1DX0a11xSfGnyzF5G *moduleInstance, const emlrtStack *sp,
   robotics_manip_internal_RigidBody *obj, robotics_manip_internal_CollisionSet *
   iobj_0, rigidBodyJoint *iobj_1)
{
  static char_T jname[14] = { 'd', 'u', 'm', 'm', 'y', 'b', 'o', 'd', 'y', '6',
    '_', 'j', 'n', 't' };

  static char_T bname[10] = { 'd', 'u', 'm', 'm', 'y', 'b', 'o', 'd', 'y', '6' };

  static char_T cv[5] = { 'f', 'i', 'x', 'e', 'd' };

  static int8_T iv[16] = { 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1 };

  static int8_T iv1[6] = { 0, 0, 1, 0, 0, 0 };

  static int8_T iv2[6] = { 0, 0, 0, 0, 0, 1 };

  static int8_T iv3[3] = { 0, 0, 1 };

  emlrtStack b_st;
  emlrtStack st;
  emxArray_char_T *switch_expression;
  robotics_manip_internal_RigidBody *b_obj;
  real_T poslim_data[12];
  int32_T i;
  int32_T loop_ub;
  int8_T msubspace_data[36];
  int8_T b_I[9];
  st.prev = sp;
  st.tls = sp->tls;
  b_obj = obj;
  st.site = &fb_emlrtRSI;
  b_st.site = &x_emlrtRSI;
  i = b_obj->NameInternal->size[0] * b_obj->NameInternal->size[1];
  b_obj->NameInternal->size[0] = 1;
  b_obj->NameInternal->size[1] = 10;
  emxEnsureCapacity_char_T(b_obj->NameInternal, i);
  for (i = 0; i < 10; i++) {
    b_obj->NameInternal->data[i] = bname[i];
  }

  st.site = &gb_emlrtRSI;
  iobj_1->InTree = false;
  for (i = 0; i < 16; i++) {
    iobj_1->JointToParentTransform[i] = (real_T)iv[i];
  }

  for (i = 0; i < 16; i++) {
    iobj_1->ChildToJointTransform[i] = (real_T)iv[i];
  }

  b_st.site = &ib_emlrtRSI;
  i = iobj_1->NameInternal->size[0] * iobj_1->NameInternal->size[1];
  iobj_1->NameInternal->size[0] = 1;
  iobj_1->NameInternal->size[1] = 14;
  emxEnsureCapacity_char_T(iobj_1->NameInternal, i);
  for (i = 0; i < 14; i++) {
    iobj_1->NameInternal->data[i] = jname[i];
  }

  i = iobj_1->Type->size[0] * iobj_1->Type->size[1];
  iobj_1->Type->size[0] = 1;
  iobj_1->Type->size[1] = 5;
  emxEnsureCapacity_char_T(iobj_1->Type, i);
  for (i = 0; i < 5; i++) {
    iobj_1->Type->data[i] = cv[i];
  }

  emxInit_char_T(&switch_expression, 2);
  i = switch_expression->size[0] * switch_expression->size[1];
  switch_expression->size[0] = 1;
  switch_expression->size[1] = iobj_1->Type->size[1];
  emxEnsureCapacity_char_T(switch_expression, i);
  loop_ub = iobj_1->Type->size[1];
  for (i = 0; i < loop_ub; i++) {
    switch_expression->data[i] = iobj_1->Type->data[i];
  }

  if (b_strcmp(switch_expression)) {
    loop_ub = 0;
  } else if (c_strcmp(switch_expression)) {
    loop_ub = 1;
  } else {
    loop_ub = -1;
  }

  emxFree_char_T(&switch_expression);
  switch (loop_ub) {
   case 0:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = iv1[i];
    }

    for (i = 0; i < 2; i++) {
      poslim_data[i] = 6.2831853071795862 * (real_T)i - 3.1415926535897931;
    }

    iobj_1->VelocityNumber = 1.0;
    iobj_1->PositionNumber = 1.0;
    for (i = 0; i < 3; i++) {
      iobj_1->JointAxisInternal[i] = (real_T)iv3[i];
    }
    break;

   case 1:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = iv2[i];
    }

    for (i = 0; i < 2; i++) {
      poslim_data[i] = (real_T)i - 0.5;
    }

    iobj_1->VelocityNumber = 1.0;
    iobj_1->PositionNumber = 1.0;
    for (i = 0; i < 3; i++) {
      iobj_1->JointAxisInternal[i] = (real_T)iv3[i];
    }
    break;

   default:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = 0;
    }

    for (i = 0; i < 2; i++) {
      poslim_data[i] = 0.0;
    }

    iobj_1->VelocityNumber = 0.0;
    iobj_1->PositionNumber = 0.0;
    for (i = 0; i < 3; i++) {
      iobj_1->JointAxisInternal[i] = 0.0;
    }
    break;
  }

  i = iobj_1->MotionSubspace->size[0] * iobj_1->MotionSubspace->size[1];
  iobj_1->MotionSubspace->size[0] = 6;
  iobj_1->MotionSubspace->size[1] = 1;
  emxEnsureCapacity_real_T(iobj_1->MotionSubspace, i);
  for (i = 0; i < 6; i++) {
    iobj_1->MotionSubspace->data[i] = (real_T)msubspace_data[i];
  }

  i = iobj_1->PositionLimitsInternal->size[0] * iobj_1->
    PositionLimitsInternal->size[1];
  iobj_1->PositionLimitsInternal->size[0] = 1;
  iobj_1->PositionLimitsInternal->size[1] = 2;
  emxEnsureCapacity_real_T(iobj_1->PositionLimitsInternal, i);
  for (i = 0; i < 2; i++) {
    iobj_1->PositionLimitsInternal->data[i] = poslim_data[i];
  }

  i = iobj_1->HomePositionInternal->size[0];
  iobj_1->HomePositionInternal->size[0] = 1;
  emxEnsureCapacity_real_T1(iobj_1->HomePositionInternal, i);
  for (i = 0; i < 1; i++) {
    iobj_1->HomePositionInternal->data[0] = 0.0;
  }

  b_obj->JointInternal = iobj_1;
  b_obj->Index = -1.0;
  b_obj->ParentIndex = -1.0;
  b_obj->MassInternal = 1.0;
  for (i = 0; i < 3; i++) {
    b_obj->CenterOfMassInternal[i] = 0.0;
  }

  for (i = 0; i < 9; i++) {
    b_I[i] = 0;
  }

  for (loop_ub = 0; loop_ub < 3; loop_ub++) {
    b_I[loop_ub + 3 * loop_ub] = 1;
  }

  for (i = 0; i < 9; i++) {
    b_obj->InertiaInternal[i] = (real_T)b_I[i];
  }

  for (i = 0; i < 36; i++) {
    msubspace_data[i] = 0;
  }

  for (loop_ub = 0; loop_ub < 6; loop_ub++) {
    msubspace_data[loop_ub + 6 * loop_ub] = 1;
  }

  for (i = 0; i < 36; i++) {
    b_obj->SpatialInertia[i] = (real_T)msubspace_data[i];
  }

  st.site = &hb_emlrtRSI;
  b_obj->CollisionsInternal = CollisionSet_CollisionSet(moduleInstance, &st,
    iobj_0, 0.0);
  b_obj->matlabCodegenIsDeleted = false;
  return b_obj;
}

static robotics_manip_internal_RigidBody *g_RigidBody_RigidBody
  (InstanceStruct_dnGfh1DX0a11xSfGnyzF5G *moduleInstance, const emlrtStack *sp,
   robotics_manip_internal_RigidBody *obj, robotics_manip_internal_CollisionSet *
   iobj_0, rigidBodyJoint *iobj_1)
{
  static char_T jname[14] = { 'd', 'u', 'm', 'm', 'y', 'b', 'o', 'd', 'y', '7',
    '_', 'j', 'n', 't' };

  static char_T bname[10] = { 'd', 'u', 'm', 'm', 'y', 'b', 'o', 'd', 'y', '7' };

  static char_T cv[5] = { 'f', 'i', 'x', 'e', 'd' };

  static int8_T iv[16] = { 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1 };

  static int8_T iv1[6] = { 0, 0, 1, 0, 0, 0 };

  static int8_T iv2[6] = { 0, 0, 0, 0, 0, 1 };

  static int8_T iv3[3] = { 0, 0, 1 };

  emlrtStack b_st;
  emlrtStack st;
  emxArray_char_T *switch_expression;
  robotics_manip_internal_RigidBody *b_obj;
  real_T poslim_data[12];
  int32_T i;
  int32_T loop_ub;
  int8_T msubspace_data[36];
  int8_T b_I[9];
  st.prev = sp;
  st.tls = sp->tls;
  b_obj = obj;
  st.site = &fb_emlrtRSI;
  b_st.site = &x_emlrtRSI;
  i = b_obj->NameInternal->size[0] * b_obj->NameInternal->size[1];
  b_obj->NameInternal->size[0] = 1;
  b_obj->NameInternal->size[1] = 10;
  emxEnsureCapacity_char_T(b_obj->NameInternal, i);
  for (i = 0; i < 10; i++) {
    b_obj->NameInternal->data[i] = bname[i];
  }

  st.site = &gb_emlrtRSI;
  iobj_1->InTree = false;
  for (i = 0; i < 16; i++) {
    iobj_1->JointToParentTransform[i] = (real_T)iv[i];
  }

  for (i = 0; i < 16; i++) {
    iobj_1->ChildToJointTransform[i] = (real_T)iv[i];
  }

  b_st.site = &ib_emlrtRSI;
  i = iobj_1->NameInternal->size[0] * iobj_1->NameInternal->size[1];
  iobj_1->NameInternal->size[0] = 1;
  iobj_1->NameInternal->size[1] = 14;
  emxEnsureCapacity_char_T(iobj_1->NameInternal, i);
  for (i = 0; i < 14; i++) {
    iobj_1->NameInternal->data[i] = jname[i];
  }

  i = iobj_1->Type->size[0] * iobj_1->Type->size[1];
  iobj_1->Type->size[0] = 1;
  iobj_1->Type->size[1] = 5;
  emxEnsureCapacity_char_T(iobj_1->Type, i);
  for (i = 0; i < 5; i++) {
    iobj_1->Type->data[i] = cv[i];
  }

  emxInit_char_T(&switch_expression, 2);
  i = switch_expression->size[0] * switch_expression->size[1];
  switch_expression->size[0] = 1;
  switch_expression->size[1] = iobj_1->Type->size[1];
  emxEnsureCapacity_char_T(switch_expression, i);
  loop_ub = iobj_1->Type->size[1];
  for (i = 0; i < loop_ub; i++) {
    switch_expression->data[i] = iobj_1->Type->data[i];
  }

  if (b_strcmp(switch_expression)) {
    loop_ub = 0;
  } else if (c_strcmp(switch_expression)) {
    loop_ub = 1;
  } else {
    loop_ub = -1;
  }

  emxFree_char_T(&switch_expression);
  switch (loop_ub) {
   case 0:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = iv1[i];
    }

    for (i = 0; i < 2; i++) {
      poslim_data[i] = 6.2831853071795862 * (real_T)i - 3.1415926535897931;
    }

    iobj_1->VelocityNumber = 1.0;
    iobj_1->PositionNumber = 1.0;
    for (i = 0; i < 3; i++) {
      iobj_1->JointAxisInternal[i] = (real_T)iv3[i];
    }
    break;

   case 1:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = iv2[i];
    }

    for (i = 0; i < 2; i++) {
      poslim_data[i] = (real_T)i - 0.5;
    }

    iobj_1->VelocityNumber = 1.0;
    iobj_1->PositionNumber = 1.0;
    for (i = 0; i < 3; i++) {
      iobj_1->JointAxisInternal[i] = (real_T)iv3[i];
    }
    break;

   default:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = 0;
    }

    for (i = 0; i < 2; i++) {
      poslim_data[i] = 0.0;
    }

    iobj_1->VelocityNumber = 0.0;
    iobj_1->PositionNumber = 0.0;
    for (i = 0; i < 3; i++) {
      iobj_1->JointAxisInternal[i] = 0.0;
    }
    break;
  }

  i = iobj_1->MotionSubspace->size[0] * iobj_1->MotionSubspace->size[1];
  iobj_1->MotionSubspace->size[0] = 6;
  iobj_1->MotionSubspace->size[1] = 1;
  emxEnsureCapacity_real_T(iobj_1->MotionSubspace, i);
  for (i = 0; i < 6; i++) {
    iobj_1->MotionSubspace->data[i] = (real_T)msubspace_data[i];
  }

  i = iobj_1->PositionLimitsInternal->size[0] * iobj_1->
    PositionLimitsInternal->size[1];
  iobj_1->PositionLimitsInternal->size[0] = 1;
  iobj_1->PositionLimitsInternal->size[1] = 2;
  emxEnsureCapacity_real_T(iobj_1->PositionLimitsInternal, i);
  for (i = 0; i < 2; i++) {
    iobj_1->PositionLimitsInternal->data[i] = poslim_data[i];
  }

  i = iobj_1->HomePositionInternal->size[0];
  iobj_1->HomePositionInternal->size[0] = 1;
  emxEnsureCapacity_real_T1(iobj_1->HomePositionInternal, i);
  for (i = 0; i < 1; i++) {
    iobj_1->HomePositionInternal->data[0] = 0.0;
  }

  b_obj->JointInternal = iobj_1;
  b_obj->Index = -1.0;
  b_obj->ParentIndex = -1.0;
  b_obj->MassInternal = 1.0;
  for (i = 0; i < 3; i++) {
    b_obj->CenterOfMassInternal[i] = 0.0;
  }

  for (i = 0; i < 9; i++) {
    b_I[i] = 0;
  }

  for (loop_ub = 0; loop_ub < 3; loop_ub++) {
    b_I[loop_ub + 3 * loop_ub] = 1;
  }

  for (i = 0; i < 9; i++) {
    b_obj->InertiaInternal[i] = (real_T)b_I[i];
  }

  for (i = 0; i < 36; i++) {
    msubspace_data[i] = 0;
  }

  for (loop_ub = 0; loop_ub < 6; loop_ub++) {
    msubspace_data[loop_ub + 6 * loop_ub] = 1;
  }

  for (i = 0; i < 36; i++) {
    b_obj->SpatialInertia[i] = (real_T)msubspace_data[i];
  }

  st.site = &hb_emlrtRSI;
  b_obj->CollisionsInternal = CollisionSet_CollisionSet(moduleInstance, &st,
    iobj_0, 0.0);
  b_obj->matlabCodegenIsDeleted = false;
  return b_obj;
}

static robotics_manip_internal_RigidBody *h_RigidBody_RigidBody
  (InstanceStruct_dnGfh1DX0a11xSfGnyzF5G *moduleInstance, const emlrtStack *sp,
   robotics_manip_internal_RigidBody *obj, robotics_manip_internal_CollisionSet *
   iobj_0, rigidBodyJoint *iobj_1)
{
  static real_T dv2[36] = { 4.7024945426411984, 0.45348088473271247,
    0.045893522033607428, 0.0, 1.4923137780005653, -7.6916829479703939,
    0.45348088473271247, 0.30870459932230732, -0.44979498948729357,
    -1.4923137780005653, 0.0, -0.78512310105554284, 0.045893522033607428,
    -0.44979498948729357, 4.6998679939424681, 7.6916829479703939,
    0.78512310105554284, 0.0, 0.0, -1.4923137780005653, 7.6916829479703939,
    21.79104922806868, 0.0, 0.0, 1.4923137780005653, 0.0, 0.78512310105554284,
    0.0, 21.79104922806868, 0.0, -7.6916829479703939, -0.78512310105554284, 0.0,
    0.0, 0.0, 21.79104922806868 };

  static real_T dv3[16] = { 0.52921227710730678, 0.84295122962804792,
    -0.096786312190625445, 0.0, 0.051462109791375082, 0.081970979518861856,
    0.99530518423875336, 0.0, 0.84692739772351189, -0.53170855079195445,
    6.09448654026378E-17, 0.0, -0.12855508881743644, 0.080708027815108885,
    -0.28898998695028683, 1.0 };

  static real_T dv1[9] = { 4.7024945426411984, 0.45348088473271247,
    0.045893522033607428, 0.45348088473271247, 0.30870459932230732,
    -0.44979498948729357, 0.045893522033607428, -0.44979498948729357,
    4.6998679939424681 };

  static real_T dv[3] = { 0.036029614399853638, -0.35297441933465362,
    -0.068482878560906624 };

  static char_T cv1[8] = { 'r', 'e', 'v', 'o', 'l', 'u', 't', 'e' };

  static char_T jname[6] = { 'J', 'o', 'i', 'n', 't', '2' };

  static char_T cv[5] = { 'B', 'o', 'd', 'y', '2' };

  static int8_T iv[16] = { 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1 };

  static int8_T iv1[6] = { 0, 0, 1, 0, 0, 0 };

  static int8_T iv2[6] = { 0, 0, 0, 0, 0, 1 };

  static int8_T iv3[3] = { 0, 0, 1 };

  emlrtStack b_st;
  emlrtStack st;
  emxArray_char_T *switch_expression;
  robotics_manip_internal_RigidBody *b_obj;
  real_T poslim_data[12];
  int32_T i;
  int32_T loop_ub;
  int8_T msubspace_data[36];
  st.prev = sp;
  st.tls = sp->tls;
  b_obj = obj;
  st.site = &fb_emlrtRSI;
  b_st.site = &x_emlrtRSI;
  i = b_obj->NameInternal->size[0] * b_obj->NameInternal->size[1];
  b_obj->NameInternal->size[0] = 1;
  b_obj->NameInternal->size[1] = 5;
  emxEnsureCapacity_char_T(b_obj->NameInternal, i);
  for (i = 0; i < 5; i++) {
    b_obj->NameInternal->data[i] = cv[i];
  }

  b_obj->ParentIndex = 1.0;
  b_obj->MassInternal = 21.79104922806868;
  for (i = 0; i < 3; i++) {
    b_obj->CenterOfMassInternal[i] = dv[i];
  }

  for (i = 0; i < 9; i++) {
    b_obj->InertiaInternal[i] = dv1[i];
  }

  for (i = 0; i < 36; i++) {
    b_obj->SpatialInertia[i] = dv2[i];
  }

  st.site = &mb_emlrtRSI;
  iobj_1->InTree = false;
  for (i = 0; i < 16; i++) {
    iobj_1->JointToParentTransform[i] = (real_T)iv[i];
  }

  for (i = 0; i < 16; i++) {
    iobj_1->ChildToJointTransform[i] = (real_T)iv[i];
  }

  b_st.site = &ib_emlrtRSI;
  i = iobj_1->NameInternal->size[0] * iobj_1->NameInternal->size[1];
  iobj_1->NameInternal->size[0] = 1;
  iobj_1->NameInternal->size[1] = 6;
  emxEnsureCapacity_char_T(iobj_1->NameInternal, i);
  for (i = 0; i < 6; i++) {
    iobj_1->NameInternal->data[i] = jname[i];
  }

  i = iobj_1->Type->size[0] * iobj_1->Type->size[1];
  iobj_1->Type->size[0] = 1;
  iobj_1->Type->size[1] = 8;
  emxEnsureCapacity_char_T(iobj_1->Type, i);
  for (i = 0; i < 8; i++) {
    iobj_1->Type->data[i] = cv1[i];
  }

  emxInit_char_T(&switch_expression, 2);
  i = switch_expression->size[0] * switch_expression->size[1];
  switch_expression->size[0] = 1;
  switch_expression->size[1] = iobj_1->Type->size[1];
  emxEnsureCapacity_char_T(switch_expression, i);
  loop_ub = iobj_1->Type->size[1];
  for (i = 0; i < loop_ub; i++) {
    switch_expression->data[i] = iobj_1->Type->data[i];
  }

  if (b_strcmp(switch_expression)) {
    loop_ub = 0;
  } else if (c_strcmp(switch_expression)) {
    loop_ub = 1;
  } else {
    loop_ub = -1;
  }

  emxFree_char_T(&switch_expression);
  switch (loop_ub) {
   case 0:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = iv1[i];
    }

    for (i = 0; i < 2; i++) {
      poslim_data[i] = 6.2831853071795862 * (real_T)i - 3.1415926535897931;
    }

    iobj_1->VelocityNumber = 1.0;
    iobj_1->PositionNumber = 1.0;
    for (i = 0; i < 3; i++) {
      iobj_1->JointAxisInternal[i] = (real_T)iv3[i];
    }
    break;

   case 1:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = iv2[i];
    }

    for (i = 0; i < 2; i++) {
      poslim_data[i] = (real_T)i - 0.5;
    }

    iobj_1->VelocityNumber = 1.0;
    iobj_1->PositionNumber = 1.0;
    for (i = 0; i < 3; i++) {
      iobj_1->JointAxisInternal[i] = (real_T)iv3[i];
    }
    break;

   default:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = 0;
    }

    for (i = 0; i < 2; i++) {
      poslim_data[i] = 0.0;
    }

    iobj_1->VelocityNumber = 0.0;
    iobj_1->PositionNumber = 0.0;
    for (i = 0; i < 3; i++) {
      iobj_1->JointAxisInternal[i] = 0.0;
    }
    break;
  }

  i = iobj_1->MotionSubspace->size[0] * iobj_1->MotionSubspace->size[1];
  iobj_1->MotionSubspace->size[0] = 6;
  iobj_1->MotionSubspace->size[1] = 1;
  emxEnsureCapacity_real_T(iobj_1->MotionSubspace, i);
  for (i = 0; i < 6; i++) {
    iobj_1->MotionSubspace->data[i] = (real_T)msubspace_data[i];
  }

  i = iobj_1->PositionLimitsInternal->size[0] * iobj_1->
    PositionLimitsInternal->size[1];
  iobj_1->PositionLimitsInternal->size[0] = 1;
  iobj_1->PositionLimitsInternal->size[1] = 2;
  emxEnsureCapacity_real_T(iobj_1->PositionLimitsInternal, i);
  for (i = 0; i < 2; i++) {
    iobj_1->PositionLimitsInternal->data[i] = poslim_data[i];
  }

  i = iobj_1->HomePositionInternal->size[0];
  iobj_1->HomePositionInternal->size[0] = 1;
  emxEnsureCapacity_real_T1(iobj_1->HomePositionInternal, i);
  for (i = 0; i < 1; i++) {
    iobj_1->HomePositionInternal->data[0] = 0.0;
  }

  b_obj->JointInternal = iobj_1;
  for (i = 0; i < 16; i++) {
    b_obj->JointInternal->JointToParentTransform[i] = dv3[i];
  }

  for (i = 0; i < 16; i++) {
    b_obj->JointInternal->ChildToJointTransform[i] = (real_T)iv[i];
  }

  i = b_obj->JointInternal->MotionSubspace->size[0] * b_obj->
    JointInternal->MotionSubspace->size[1];
  b_obj->JointInternal->MotionSubspace->size[0] = 6;
  b_obj->JointInternal->MotionSubspace->size[1] = 1;
  emxEnsureCapacity_real_T(b_obj->JointInternal->MotionSubspace, i);
  for (i = 0; i < 6; i++) {
    b_obj->JointInternal->MotionSubspace->data[i] = (real_T)iv1[i];
  }

  b_obj->JointInternal->InTree = true;
  i = b_obj->JointInternal->PositionLimitsInternal->size[0] *
    b_obj->JointInternal->PositionLimitsInternal->size[1];
  b_obj->JointInternal->PositionLimitsInternal->size[0] = 1;
  b_obj->JointInternal->PositionLimitsInternal->size[1] = 2;
  emxEnsureCapacity_real_T(b_obj->JointInternal->PositionLimitsInternal, i);
  for (i = 0; i < 2; i++) {
    b_obj->JointInternal->PositionLimitsInternal->data[i] = 6.2831853071795862 *
      (real_T)i - 3.1415926535897931;
  }

  for (i = 0; i < 3; i++) {
    b_obj->JointInternal->JointAxisInternal[i] = (real_T)iv3[i];
  }

  i = b_obj->JointInternal->HomePositionInternal->size[0];
  b_obj->JointInternal->HomePositionInternal->size[0] = 1;
  emxEnsureCapacity_real_T1(b_obj->JointInternal->HomePositionInternal, i);
  b_obj->JointInternal->HomePositionInternal->data[0] = 0.0;
  st.site = &nb_emlrtRSI;
  b_obj->CollisionsInternal = CollisionSet_CollisionSet(moduleInstance, &st,
    iobj_0, 0.0);
  b_obj->matlabCodegenIsDeleted = false;
  return b_obj;
}

static robotics_manip_internal_RigidBody *i_RigidBody_RigidBody
  (InstanceStruct_dnGfh1DX0a11xSfGnyzF5G *moduleInstance, const emlrtStack *sp,
   robotics_manip_internal_RigidBody *obj, robotics_manip_internal_CollisionSet *
   iobj_0, rigidBodyJoint *iobj_1)
{
  static real_T dv2[36] = { 0.6112534351807184, 0.23245673061570959,
    0.30624758382981676, 0.0, 2.71205488767081, -1.399099306213214,
    0.23245673061570959, 0.90607120680081921, -0.16825415193426005,
    -2.71205488767081, 0.0, -2.5465048108121309, 0.30624758382981676,
    -0.16825415193426005, 0.727668360820738, 1.399099306213214,
    2.5465048108121309, 0.0, 0.0, -2.71205488767081, 1.399099306213214,
    32.945118318379222, 0.0, 0.0, 2.71205488767081, 0.0, 2.5465048108121309, 0.0,
    32.945118318379222, 0.0, -1.399099306213214, -2.5465048108121309, 0.0, 0.0,
    0.0, 32.945118318379222 };

  static real_T dv3[16] = { 0.99887503989935389, 0.047419981717248857, -0.0, 0.0,
    0.047419981717248857, -0.99887503989935389, 1.2246467991473532E-16, 0.0,
    5.8072728825654825E-18, -1.2232691203609284E-16, -1.0, 0.0,
    0.082345474851098888, -0.80700970426109886, 0.024195000000044813, 1.0 };

  static real_T dv1[9] = { 0.6112534351807184, 0.23245673061570959,
    0.30624758382981676, 0.23245673061570959, 0.90607120680081921,
    -0.16825415193426005, 0.30624758382981676, -0.16825415193426005,
    0.727668360820738 };

  static real_T dv[3] = { 0.077295360915170919, -0.042467575702488616,
    -0.082320386937503431 };

  static char_T cv1[8] = { 'r', 'e', 'v', 'o', 'l', 'u', 't', 'e' };

  static char_T jname[6] = { 'J', 'o', 'i', 'n', 't', '3' };

  static char_T cv[5] = { 'B', 'o', 'd', 'y', '3' };

  static int8_T iv[16] = { 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1 };

  static int8_T iv1[6] = { 0, 0, 1, 0, 0, 0 };

  static int8_T iv2[6] = { 0, 0, 0, 0, 0, 1 };

  static int8_T iv3[3] = { 0, 0, 1 };

  emlrtStack b_st;
  emlrtStack st;
  emxArray_char_T *switch_expression;
  robotics_manip_internal_RigidBody *b_obj;
  real_T poslim_data[12];
  int32_T i;
  int32_T loop_ub;
  int8_T msubspace_data[36];
  st.prev = sp;
  st.tls = sp->tls;
  b_obj = obj;
  st.site = &fb_emlrtRSI;
  b_st.site = &x_emlrtRSI;
  i = b_obj->NameInternal->size[0] * b_obj->NameInternal->size[1];
  b_obj->NameInternal->size[0] = 1;
  b_obj->NameInternal->size[1] = 5;
  emxEnsureCapacity_char_T(b_obj->NameInternal, i);
  for (i = 0; i < 5; i++) {
    b_obj->NameInternal->data[i] = cv[i];
  }

  b_obj->ParentIndex = 2.0;
  b_obj->MassInternal = 32.945118318379222;
  for (i = 0; i < 3; i++) {
    b_obj->CenterOfMassInternal[i] = dv[i];
  }

  for (i = 0; i < 9; i++) {
    b_obj->InertiaInternal[i] = dv1[i];
  }

  for (i = 0; i < 36; i++) {
    b_obj->SpatialInertia[i] = dv2[i];
  }

  st.site = &mb_emlrtRSI;
  iobj_1->InTree = false;
  for (i = 0; i < 16; i++) {
    iobj_1->JointToParentTransform[i] = (real_T)iv[i];
  }

  for (i = 0; i < 16; i++) {
    iobj_1->ChildToJointTransform[i] = (real_T)iv[i];
  }

  b_st.site = &ib_emlrtRSI;
  i = iobj_1->NameInternal->size[0] * iobj_1->NameInternal->size[1];
  iobj_1->NameInternal->size[0] = 1;
  iobj_1->NameInternal->size[1] = 6;
  emxEnsureCapacity_char_T(iobj_1->NameInternal, i);
  for (i = 0; i < 6; i++) {
    iobj_1->NameInternal->data[i] = jname[i];
  }

  i = iobj_1->Type->size[0] * iobj_1->Type->size[1];
  iobj_1->Type->size[0] = 1;
  iobj_1->Type->size[1] = 8;
  emxEnsureCapacity_char_T(iobj_1->Type, i);
  for (i = 0; i < 8; i++) {
    iobj_1->Type->data[i] = cv1[i];
  }

  emxInit_char_T(&switch_expression, 2);
  i = switch_expression->size[0] * switch_expression->size[1];
  switch_expression->size[0] = 1;
  switch_expression->size[1] = iobj_1->Type->size[1];
  emxEnsureCapacity_char_T(switch_expression, i);
  loop_ub = iobj_1->Type->size[1];
  for (i = 0; i < loop_ub; i++) {
    switch_expression->data[i] = iobj_1->Type->data[i];
  }

  if (b_strcmp(switch_expression)) {
    loop_ub = 0;
  } else if (c_strcmp(switch_expression)) {
    loop_ub = 1;
  } else {
    loop_ub = -1;
  }

  emxFree_char_T(&switch_expression);
  switch (loop_ub) {
   case 0:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = iv1[i];
    }

    for (i = 0; i < 2; i++) {
      poslim_data[i] = 6.2831853071795862 * (real_T)i - 3.1415926535897931;
    }

    iobj_1->VelocityNumber = 1.0;
    iobj_1->PositionNumber = 1.0;
    for (i = 0; i < 3; i++) {
      iobj_1->JointAxisInternal[i] = (real_T)iv3[i];
    }
    break;

   case 1:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = iv2[i];
    }

    for (i = 0; i < 2; i++) {
      poslim_data[i] = (real_T)i - 0.5;
    }

    iobj_1->VelocityNumber = 1.0;
    iobj_1->PositionNumber = 1.0;
    for (i = 0; i < 3; i++) {
      iobj_1->JointAxisInternal[i] = (real_T)iv3[i];
    }
    break;

   default:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = 0;
    }

    for (i = 0; i < 2; i++) {
      poslim_data[i] = 0.0;
    }

    iobj_1->VelocityNumber = 0.0;
    iobj_1->PositionNumber = 0.0;
    for (i = 0; i < 3; i++) {
      iobj_1->JointAxisInternal[i] = 0.0;
    }
    break;
  }

  i = iobj_1->MotionSubspace->size[0] * iobj_1->MotionSubspace->size[1];
  iobj_1->MotionSubspace->size[0] = 6;
  iobj_1->MotionSubspace->size[1] = 1;
  emxEnsureCapacity_real_T(iobj_1->MotionSubspace, i);
  for (i = 0; i < 6; i++) {
    iobj_1->MotionSubspace->data[i] = (real_T)msubspace_data[i];
  }

  i = iobj_1->PositionLimitsInternal->size[0] * iobj_1->
    PositionLimitsInternal->size[1];
  iobj_1->PositionLimitsInternal->size[0] = 1;
  iobj_1->PositionLimitsInternal->size[1] = 2;
  emxEnsureCapacity_real_T(iobj_1->PositionLimitsInternal, i);
  for (i = 0; i < 2; i++) {
    iobj_1->PositionLimitsInternal->data[i] = poslim_data[i];
  }

  i = iobj_1->HomePositionInternal->size[0];
  iobj_1->HomePositionInternal->size[0] = 1;
  emxEnsureCapacity_real_T1(iobj_1->HomePositionInternal, i);
  for (i = 0; i < 1; i++) {
    iobj_1->HomePositionInternal->data[0] = 0.0;
  }

  b_obj->JointInternal = iobj_1;
  for (i = 0; i < 16; i++) {
    b_obj->JointInternal->JointToParentTransform[i] = dv3[i];
  }

  for (i = 0; i < 16; i++) {
    b_obj->JointInternal->ChildToJointTransform[i] = (real_T)iv[i];
  }

  i = b_obj->JointInternal->MotionSubspace->size[0] * b_obj->
    JointInternal->MotionSubspace->size[1];
  b_obj->JointInternal->MotionSubspace->size[0] = 6;
  b_obj->JointInternal->MotionSubspace->size[1] = 1;
  emxEnsureCapacity_real_T(b_obj->JointInternal->MotionSubspace, i);
  for (i = 0; i < 6; i++) {
    b_obj->JointInternal->MotionSubspace->data[i] = (real_T)iv1[i];
  }

  b_obj->JointInternal->InTree = true;
  i = b_obj->JointInternal->PositionLimitsInternal->size[0] *
    b_obj->JointInternal->PositionLimitsInternal->size[1];
  b_obj->JointInternal->PositionLimitsInternal->size[0] = 1;
  b_obj->JointInternal->PositionLimitsInternal->size[1] = 2;
  emxEnsureCapacity_real_T(b_obj->JointInternal->PositionLimitsInternal, i);
  for (i = 0; i < 2; i++) {
    b_obj->JointInternal->PositionLimitsInternal->data[i] = 6.2831853071795862 *
      (real_T)i - 3.1415926535897931;
  }

  for (i = 0; i < 3; i++) {
    b_obj->JointInternal->JointAxisInternal[i] = (real_T)iv3[i];
  }

  i = b_obj->JointInternal->HomePositionInternal->size[0];
  b_obj->JointInternal->HomePositionInternal->size[0] = 1;
  emxEnsureCapacity_real_T1(b_obj->JointInternal->HomePositionInternal, i);
  b_obj->JointInternal->HomePositionInternal->data[0] = 0.0;
  st.site = &nb_emlrtRSI;
  b_obj->CollisionsInternal = CollisionSet_CollisionSet(moduleInstance, &st,
    iobj_0, 0.0);
  b_obj->matlabCodegenIsDeleted = false;
  return b_obj;
}

static robotics_manip_internal_RigidBody *j_RigidBody_RigidBody
  (InstanceStruct_dnGfh1DX0a11xSfGnyzF5G *moduleInstance, const emlrtStack *sp,
   robotics_manip_internal_RigidBody *obj, robotics_manip_internal_CollisionSet *
   iobj_0, rigidBodyJoint *iobj_1)
{
  static real_T dv2[36] = { 1.1935632910804839, -0.03208233273032908,
    0.404264800180025, 0.0, 2.6921198511491227, 0.22305650975964122,
    -0.03208233273032908, 1.3442748382810747, 0.082463992816450074,
    -2.6921198511491227, 0.0, -1.0930299990157011, 0.404264800180025,
    0.082463992816450074, 0.22464431391629225, -0.22305650975964122,
    1.0930299990157011, 0.0, 0.0, -2.6921198511491227, -0.22305650975964122,
    10.09694353188112, 0.0, 0.0, 2.6921198511491227, 0.0, 1.0930299990157011,
    0.0, 10.09694353188112, 0.0, 0.22305650975964122, -1.0930299990157011, 0.0,
    0.0, 0.0, 10.09694353188112 };

  static real_T dv3[16] = { 0.096500416960583826, 0.17542938201214472,
    -0.97975109158054552, 0.0, -0.47221398207965382, -0.85844403229432908,
    -0.20021937605219314, 0.0, -0.87618583910886738, 0.48197341767476154,
    1.2259900900479928E-17, 0.0, 0.21742989269471785, -0.11960411114760211,
    -0.11998997562072158, 1.0 };

  static real_T dv1[9] = { 1.1935632910804839, -0.03208233273032908,
    0.404264800180025, -0.03208233273032908, 1.3442748382810747,
    0.082463992816450074, 0.404264800180025, 0.082463992816450074,
    0.22464431391629225 };

  static real_T dv[3] = { 0.1082535517371625, 0.02209148828606794,
    -0.266627206802608 };

  static char_T cv1[8] = { 'r', 'e', 'v', 'o', 'l', 'u', 't', 'e' };

  static char_T jname[6] = { 'J', 'o', 'i', 'n', 't', '4' };

  static char_T cv[5] = { 'B', 'o', 'd', 'y', '4' };

  static int8_T iv[16] = { 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1 };

  static int8_T iv1[6] = { 0, 0, 1, 0, 0, 0 };

  static int8_T iv2[6] = { 0, 0, 0, 0, 0, 1 };

  static int8_T iv3[3] = { 0, 0, 1 };

  emlrtStack b_st;
  emlrtStack st;
  emxArray_char_T *switch_expression;
  robotics_manip_internal_RigidBody *b_obj;
  real_T poslim_data[12];
  int32_T i;
  int32_T loop_ub;
  int8_T msubspace_data[36];
  st.prev = sp;
  st.tls = sp->tls;
  b_obj = obj;
  st.site = &fb_emlrtRSI;
  b_st.site = &x_emlrtRSI;
  i = b_obj->NameInternal->size[0] * b_obj->NameInternal->size[1];
  b_obj->NameInternal->size[0] = 1;
  b_obj->NameInternal->size[1] = 5;
  emxEnsureCapacity_char_T(b_obj->NameInternal, i);
  for (i = 0; i < 5; i++) {
    b_obj->NameInternal->data[i] = cv[i];
  }

  b_obj->ParentIndex = 3.0;
  b_obj->MassInternal = 10.09694353188112;
  for (i = 0; i < 3; i++) {
    b_obj->CenterOfMassInternal[i] = dv[i];
  }

  for (i = 0; i < 9; i++) {
    b_obj->InertiaInternal[i] = dv1[i];
  }

  for (i = 0; i < 36; i++) {
    b_obj->SpatialInertia[i] = dv2[i];
  }

  st.site = &mb_emlrtRSI;
  iobj_1->InTree = false;
  for (i = 0; i < 16; i++) {
    iobj_1->JointToParentTransform[i] = (real_T)iv[i];
  }

  for (i = 0; i < 16; i++) {
    iobj_1->ChildToJointTransform[i] = (real_T)iv[i];
  }

  b_st.site = &ib_emlrtRSI;
  i = iobj_1->NameInternal->size[0] * iobj_1->NameInternal->size[1];
  iobj_1->NameInternal->size[0] = 1;
  iobj_1->NameInternal->size[1] = 6;
  emxEnsureCapacity_char_T(iobj_1->NameInternal, i);
  for (i = 0; i < 6; i++) {
    iobj_1->NameInternal->data[i] = jname[i];
  }

  i = iobj_1->Type->size[0] * iobj_1->Type->size[1];
  iobj_1->Type->size[0] = 1;
  iobj_1->Type->size[1] = 8;
  emxEnsureCapacity_char_T(iobj_1->Type, i);
  for (i = 0; i < 8; i++) {
    iobj_1->Type->data[i] = cv1[i];
  }

  emxInit_char_T(&switch_expression, 2);
  i = switch_expression->size[0] * switch_expression->size[1];
  switch_expression->size[0] = 1;
  switch_expression->size[1] = iobj_1->Type->size[1];
  emxEnsureCapacity_char_T(switch_expression, i);
  loop_ub = iobj_1->Type->size[1];
  for (i = 0; i < loop_ub; i++) {
    switch_expression->data[i] = iobj_1->Type->data[i];
  }

  if (b_strcmp(switch_expression)) {
    loop_ub = 0;
  } else if (c_strcmp(switch_expression)) {
    loop_ub = 1;
  } else {
    loop_ub = -1;
  }

  emxFree_char_T(&switch_expression);
  switch (loop_ub) {
   case 0:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = iv1[i];
    }

    for (i = 0; i < 2; i++) {
      poslim_data[i] = 6.2831853071795862 * (real_T)i - 3.1415926535897931;
    }

    iobj_1->VelocityNumber = 1.0;
    iobj_1->PositionNumber = 1.0;
    for (i = 0; i < 3; i++) {
      iobj_1->JointAxisInternal[i] = (real_T)iv3[i];
    }
    break;

   case 1:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = iv2[i];
    }

    for (i = 0; i < 2; i++) {
      poslim_data[i] = (real_T)i - 0.5;
    }

    iobj_1->VelocityNumber = 1.0;
    iobj_1->PositionNumber = 1.0;
    for (i = 0; i < 3; i++) {
      iobj_1->JointAxisInternal[i] = (real_T)iv3[i];
    }
    break;

   default:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = 0;
    }

    for (i = 0; i < 2; i++) {
      poslim_data[i] = 0.0;
    }

    iobj_1->VelocityNumber = 0.0;
    iobj_1->PositionNumber = 0.0;
    for (i = 0; i < 3; i++) {
      iobj_1->JointAxisInternal[i] = 0.0;
    }
    break;
  }

  i = iobj_1->MotionSubspace->size[0] * iobj_1->MotionSubspace->size[1];
  iobj_1->MotionSubspace->size[0] = 6;
  iobj_1->MotionSubspace->size[1] = 1;
  emxEnsureCapacity_real_T(iobj_1->MotionSubspace, i);
  for (i = 0; i < 6; i++) {
    iobj_1->MotionSubspace->data[i] = (real_T)msubspace_data[i];
  }

  i = iobj_1->PositionLimitsInternal->size[0] * iobj_1->
    PositionLimitsInternal->size[1];
  iobj_1->PositionLimitsInternal->size[0] = 1;
  iobj_1->PositionLimitsInternal->size[1] = 2;
  emxEnsureCapacity_real_T(iobj_1->PositionLimitsInternal, i);
  for (i = 0; i < 2; i++) {
    iobj_1->PositionLimitsInternal->data[i] = poslim_data[i];
  }

  i = iobj_1->HomePositionInternal->size[0];
  iobj_1->HomePositionInternal->size[0] = 1;
  emxEnsureCapacity_real_T1(iobj_1->HomePositionInternal, i);
  for (i = 0; i < 1; i++) {
    iobj_1->HomePositionInternal->data[0] = 0.0;
  }

  b_obj->JointInternal = iobj_1;
  for (i = 0; i < 16; i++) {
    b_obj->JointInternal->JointToParentTransform[i] = dv3[i];
  }

  for (i = 0; i < 16; i++) {
    b_obj->JointInternal->ChildToJointTransform[i] = (real_T)iv[i];
  }

  i = b_obj->JointInternal->MotionSubspace->size[0] * b_obj->
    JointInternal->MotionSubspace->size[1];
  b_obj->JointInternal->MotionSubspace->size[0] = 6;
  b_obj->JointInternal->MotionSubspace->size[1] = 1;
  emxEnsureCapacity_real_T(b_obj->JointInternal->MotionSubspace, i);
  for (i = 0; i < 6; i++) {
    b_obj->JointInternal->MotionSubspace->data[i] = (real_T)iv1[i];
  }

  b_obj->JointInternal->InTree = true;
  i = b_obj->JointInternal->PositionLimitsInternal->size[0] *
    b_obj->JointInternal->PositionLimitsInternal->size[1];
  b_obj->JointInternal->PositionLimitsInternal->size[0] = 1;
  b_obj->JointInternal->PositionLimitsInternal->size[1] = 2;
  emxEnsureCapacity_real_T(b_obj->JointInternal->PositionLimitsInternal, i);
  for (i = 0; i < 2; i++) {
    b_obj->JointInternal->PositionLimitsInternal->data[i] = 6.2831853071795862 *
      (real_T)i - 3.1415926535897931;
  }

  for (i = 0; i < 3; i++) {
    b_obj->JointInternal->JointAxisInternal[i] = (real_T)iv3[i];
  }

  i = b_obj->JointInternal->HomePositionInternal->size[0];
  b_obj->JointInternal->HomePositionInternal->size[0] = 1;
  emxEnsureCapacity_real_T1(b_obj->JointInternal->HomePositionInternal, i);
  b_obj->JointInternal->HomePositionInternal->data[0] = 0.0;
  st.site = &nb_emlrtRSI;
  b_obj->CollisionsInternal = CollisionSet_CollisionSet(moduleInstance, &st,
    iobj_0, 0.0);
  b_obj->matlabCodegenIsDeleted = false;
  return b_obj;
}

static robotics_manip_internal_RigidBody *k_RigidBody_RigidBody
  (InstanceStruct_dnGfh1DX0a11xSfGnyzF5G *moduleInstance, const emlrtStack *sp,
   robotics_manip_internal_RigidBody *obj, robotics_manip_internal_CollisionSet *
   iobj_0, rigidBodyJoint *iobj_1)
{
  static real_T dv2[36] = { 0.30111198235333808, -0.011359260806530972,
    0.00929994354367826, 0.0, -1.2197797714503833, -0.89422327594540707,
    -0.011359260806530972, 0.17437851942459445, 0.10478016371420321,
    1.2197797714503833, 0.0, 0.079494612667573739, 0.00929994354367826,
    0.10478016371420321, 0.16846328851594453, 0.89422327594540707,
    -0.079494612667573739, 0.0, 0.0, 1.2197797714503833, 0.89422327594540707,
    14.05841696800046, 0.0, 0.0, -1.2197797714503833, 0.0, -0.079494612667573739,
    0.0, 14.05841696800046, 0.0, -0.89422327594540707, 0.079494612667573739, 0.0,
    0.0, 0.0, 14.05841696800046 };

  static real_T dv3[16] = { 0.10332663435196174, -0.50561731232852969,
    -0.85654815399203921, 0.0, 0.17149753695106323, -0.83920398886497727,
    0.51606710793542143, 0.0, -0.9797510915805171, -0.20021937605233242,
    3.1599996593917272E-17, 0.0, 0.12049958683154875, 0.024624981076611704,
    -0.63036996585545535, 1.0 };

  static real_T dv1[9] = { 0.30111198235333808, -0.011359260806530972,
    0.00929994354367826, -0.011359260806530972, 0.17437851942459445,
    0.10478016371420321, 0.00929994354367826, 0.10478016371420321,
    0.16846328851594453 };

  static real_T dv[3] = { -0.0056545920389556008, -0.06360767915625376,
    0.086765087009926245 };

  static char_T cv1[8] = { 'r', 'e', 'v', 'o', 'l', 'u', 't', 'e' };

  static char_T jname[6] = { 'J', 'o', 'i', 'n', 't', '5' };

  static char_T cv[5] = { 'B', 'o', 'd', 'y', '5' };

  static int8_T iv[16] = { 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1 };

  static int8_T iv1[6] = { 0, 0, 1, 0, 0, 0 };

  static int8_T iv2[6] = { 0, 0, 0, 0, 0, 1 };

  static int8_T iv3[3] = { 0, 0, 1 };

  emlrtStack b_st;
  emlrtStack st;
  emxArray_char_T *switch_expression;
  robotics_manip_internal_RigidBody *b_obj;
  real_T poslim_data[12];
  int32_T i;
  int32_T loop_ub;
  int8_T msubspace_data[36];
  st.prev = sp;
  st.tls = sp->tls;
  b_obj = obj;
  st.site = &fb_emlrtRSI;
  b_st.site = &x_emlrtRSI;
  i = b_obj->NameInternal->size[0] * b_obj->NameInternal->size[1];
  b_obj->NameInternal->size[0] = 1;
  b_obj->NameInternal->size[1] = 5;
  emxEnsureCapacity_char_T(b_obj->NameInternal, i);
  for (i = 0; i < 5; i++) {
    b_obj->NameInternal->data[i] = cv[i];
  }

  b_obj->ParentIndex = 4.0;
  b_obj->MassInternal = 14.05841696800046;
  for (i = 0; i < 3; i++) {
    b_obj->CenterOfMassInternal[i] = dv[i];
  }

  for (i = 0; i < 9; i++) {
    b_obj->InertiaInternal[i] = dv1[i];
  }

  for (i = 0; i < 36; i++) {
    b_obj->SpatialInertia[i] = dv2[i];
  }

  st.site = &mb_emlrtRSI;
  iobj_1->InTree = false;
  for (i = 0; i < 16; i++) {
    iobj_1->JointToParentTransform[i] = (real_T)iv[i];
  }

  for (i = 0; i < 16; i++) {
    iobj_1->ChildToJointTransform[i] = (real_T)iv[i];
  }

  b_st.site = &ib_emlrtRSI;
  i = iobj_1->NameInternal->size[0] * iobj_1->NameInternal->size[1];
  iobj_1->NameInternal->size[0] = 1;
  iobj_1->NameInternal->size[1] = 6;
  emxEnsureCapacity_char_T(iobj_1->NameInternal, i);
  for (i = 0; i < 6; i++) {
    iobj_1->NameInternal->data[i] = jname[i];
  }

  i = iobj_1->Type->size[0] * iobj_1->Type->size[1];
  iobj_1->Type->size[0] = 1;
  iobj_1->Type->size[1] = 8;
  emxEnsureCapacity_char_T(iobj_1->Type, i);
  for (i = 0; i < 8; i++) {
    iobj_1->Type->data[i] = cv1[i];
  }

  emxInit_char_T(&switch_expression, 2);
  i = switch_expression->size[0] * switch_expression->size[1];
  switch_expression->size[0] = 1;
  switch_expression->size[1] = iobj_1->Type->size[1];
  emxEnsureCapacity_char_T(switch_expression, i);
  loop_ub = iobj_1->Type->size[1];
  for (i = 0; i < loop_ub; i++) {
    switch_expression->data[i] = iobj_1->Type->data[i];
  }

  if (b_strcmp(switch_expression)) {
    loop_ub = 0;
  } else if (c_strcmp(switch_expression)) {
    loop_ub = 1;
  } else {
    loop_ub = -1;
  }

  emxFree_char_T(&switch_expression);
  switch (loop_ub) {
   case 0:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = iv1[i];
    }

    for (i = 0; i < 2; i++) {
      poslim_data[i] = 6.2831853071795862 * (real_T)i - 3.1415926535897931;
    }

    iobj_1->VelocityNumber = 1.0;
    iobj_1->PositionNumber = 1.0;
    for (i = 0; i < 3; i++) {
      iobj_1->JointAxisInternal[i] = (real_T)iv3[i];
    }
    break;

   case 1:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = iv2[i];
    }

    for (i = 0; i < 2; i++) {
      poslim_data[i] = (real_T)i - 0.5;
    }

    iobj_1->VelocityNumber = 1.0;
    iobj_1->PositionNumber = 1.0;
    for (i = 0; i < 3; i++) {
      iobj_1->JointAxisInternal[i] = (real_T)iv3[i];
    }
    break;

   default:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = 0;
    }

    for (i = 0; i < 2; i++) {
      poslim_data[i] = 0.0;
    }

    iobj_1->VelocityNumber = 0.0;
    iobj_1->PositionNumber = 0.0;
    for (i = 0; i < 3; i++) {
      iobj_1->JointAxisInternal[i] = 0.0;
    }
    break;
  }

  i = iobj_1->MotionSubspace->size[0] * iobj_1->MotionSubspace->size[1];
  iobj_1->MotionSubspace->size[0] = 6;
  iobj_1->MotionSubspace->size[1] = 1;
  emxEnsureCapacity_real_T(iobj_1->MotionSubspace, i);
  for (i = 0; i < 6; i++) {
    iobj_1->MotionSubspace->data[i] = (real_T)msubspace_data[i];
  }

  i = iobj_1->PositionLimitsInternal->size[0] * iobj_1->
    PositionLimitsInternal->size[1];
  iobj_1->PositionLimitsInternal->size[0] = 1;
  iobj_1->PositionLimitsInternal->size[1] = 2;
  emxEnsureCapacity_real_T(iobj_1->PositionLimitsInternal, i);
  for (i = 0; i < 2; i++) {
    iobj_1->PositionLimitsInternal->data[i] = poslim_data[i];
  }

  i = iobj_1->HomePositionInternal->size[0];
  iobj_1->HomePositionInternal->size[0] = 1;
  emxEnsureCapacity_real_T1(iobj_1->HomePositionInternal, i);
  for (i = 0; i < 1; i++) {
    iobj_1->HomePositionInternal->data[0] = 0.0;
  }

  b_obj->JointInternal = iobj_1;
  for (i = 0; i < 16; i++) {
    b_obj->JointInternal->JointToParentTransform[i] = dv3[i];
  }

  for (i = 0; i < 16; i++) {
    b_obj->JointInternal->ChildToJointTransform[i] = (real_T)iv[i];
  }

  i = b_obj->JointInternal->MotionSubspace->size[0] * b_obj->
    JointInternal->MotionSubspace->size[1];
  b_obj->JointInternal->MotionSubspace->size[0] = 6;
  b_obj->JointInternal->MotionSubspace->size[1] = 1;
  emxEnsureCapacity_real_T(b_obj->JointInternal->MotionSubspace, i);
  for (i = 0; i < 6; i++) {
    b_obj->JointInternal->MotionSubspace->data[i] = (real_T)iv1[i];
  }

  b_obj->JointInternal->InTree = true;
  i = b_obj->JointInternal->PositionLimitsInternal->size[0] *
    b_obj->JointInternal->PositionLimitsInternal->size[1];
  b_obj->JointInternal->PositionLimitsInternal->size[0] = 1;
  b_obj->JointInternal->PositionLimitsInternal->size[1] = 2;
  emxEnsureCapacity_real_T(b_obj->JointInternal->PositionLimitsInternal, i);
  for (i = 0; i < 2; i++) {
    b_obj->JointInternal->PositionLimitsInternal->data[i] = 6.2831853071795862 *
      (real_T)i - 3.1415926535897931;
  }

  for (i = 0; i < 3; i++) {
    b_obj->JointInternal->JointAxisInternal[i] = (real_T)iv3[i];
  }

  i = b_obj->JointInternal->HomePositionInternal->size[0];
  b_obj->JointInternal->HomePositionInternal->size[0] = 1;
  emxEnsureCapacity_real_T1(b_obj->JointInternal->HomePositionInternal, i);
  b_obj->JointInternal->HomePositionInternal->data[0] = 0.0;
  st.site = &nb_emlrtRSI;
  b_obj->CollisionsInternal = CollisionSet_CollisionSet(moduleInstance, &st,
    iobj_0, 0.0);
  b_obj->matlabCodegenIsDeleted = false;
  return b_obj;
}

static robotics_manip_internal_RigidBody *l_RigidBody_RigidBody
  (InstanceStruct_dnGfh1DX0a11xSfGnyzF5G *moduleInstance, const emlrtStack *sp,
   robotics_manip_internal_RigidBody *obj, robotics_manip_internal_CollisionSet *
   iobj_0, rigidBodyJoint *iobj_1)
{
  static real_T dv2[36] = { 0.84173164146062152, -0.31951386306103857,
    0.00095068857110633918, 0.0, 1.8735312962809951, 0.014586502985558464,
    -0.31951386306103857, 0.79424720923418346, 0.0010466045877502465,
    -1.8735312962809951, 0.0, -0.013233852298345365, 0.00095068857110633918,
    0.0010466045877502465, 0.83025529180417679, -0.014586502985558464,
    0.013233852298345365, 0.0, 0.0, -1.8735312962809951, -0.014586502985558464,
    11.401316724146994, 0.0, 0.0, 1.8735312962809951, 0.0, 0.013233852298345365,
    0.0, 11.401316724146994, 0.0, 0.014586502985558464, -0.013233852298345365,
    0.0, 0.0, 0.0, 11.401316724146994 };

  static real_T dv3[16] = { -0.72988089845754411, 0.065019410197615327,
    0.68047509165608888, 0.0, 0.67779105252954108, -0.060379131123754384,
    0.7327712123409581, 0.0, 0.0887308468217524, 0.99605563942095865,
    4.4869295985033991E-17, 0.0, -0.015990185507606339, -0.17949918231066653,
    0.11660998821191004, 1.0 };

  static real_T dv1[9] = { 0.84173164146062152, -0.31951386306103857,
    0.00095068857110633918, -0.31951386306103857, 0.79424720923418346,
    0.0010466045877502465, 0.00095068857110633918, 0.0010466045877502465,
    0.83025529180417679 };

  static real_T dv[3] = { 0.0011607301699037287, 0.0012793700358017003,
    -0.16432587056484618 };

  static char_T cv1[8] = { 'r', 'e', 'v', 'o', 'l', 'u', 't', 'e' };

  static char_T jname[6] = { 'J', 'o', 'i', 'n', 't', '6' };

  static char_T cv[5] = { 'B', 'o', 'd', 'y', '6' };

  static int8_T iv[16] = { 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1 };

  static int8_T iv1[6] = { 0, 0, 1, 0, 0, 0 };

  static int8_T iv2[6] = { 0, 0, 0, 0, 0, 1 };

  static int8_T iv3[3] = { 0, 0, 1 };

  emlrtStack b_st;
  emlrtStack st;
  emxArray_char_T *switch_expression;
  robotics_manip_internal_RigidBody *b_obj;
  real_T poslim_data[12];
  int32_T i;
  int32_T loop_ub;
  int8_T msubspace_data[36];
  st.prev = sp;
  st.tls = sp->tls;
  b_obj = obj;
  st.site = &fb_emlrtRSI;
  b_st.site = &x_emlrtRSI;
  i = b_obj->NameInternal->size[0] * b_obj->NameInternal->size[1];
  b_obj->NameInternal->size[0] = 1;
  b_obj->NameInternal->size[1] = 5;
  emxEnsureCapacity_char_T(b_obj->NameInternal, i);
  for (i = 0; i < 5; i++) {
    b_obj->NameInternal->data[i] = cv[i];
  }

  b_obj->ParentIndex = 5.0;
  b_obj->MassInternal = 11.401316724146994;
  for (i = 0; i < 3; i++) {
    b_obj->CenterOfMassInternal[i] = dv[i];
  }

  for (i = 0; i < 9; i++) {
    b_obj->InertiaInternal[i] = dv1[i];
  }

  for (i = 0; i < 36; i++) {
    b_obj->SpatialInertia[i] = dv2[i];
  }

  st.site = &mb_emlrtRSI;
  iobj_1->InTree = false;
  for (i = 0; i < 16; i++) {
    iobj_1->JointToParentTransform[i] = (real_T)iv[i];
  }

  for (i = 0; i < 16; i++) {
    iobj_1->ChildToJointTransform[i] = (real_T)iv[i];
  }

  b_st.site = &ib_emlrtRSI;
  i = iobj_1->NameInternal->size[0] * iobj_1->NameInternal->size[1];
  iobj_1->NameInternal->size[0] = 1;
  iobj_1->NameInternal->size[1] = 6;
  emxEnsureCapacity_char_T(iobj_1->NameInternal, i);
  for (i = 0; i < 6; i++) {
    iobj_1->NameInternal->data[i] = jname[i];
  }

  i = iobj_1->Type->size[0] * iobj_1->Type->size[1];
  iobj_1->Type->size[0] = 1;
  iobj_1->Type->size[1] = 8;
  emxEnsureCapacity_char_T(iobj_1->Type, i);
  for (i = 0; i < 8; i++) {
    iobj_1->Type->data[i] = cv1[i];
  }

  emxInit_char_T(&switch_expression, 2);
  i = switch_expression->size[0] * switch_expression->size[1];
  switch_expression->size[0] = 1;
  switch_expression->size[1] = iobj_1->Type->size[1];
  emxEnsureCapacity_char_T(switch_expression, i);
  loop_ub = iobj_1->Type->size[1];
  for (i = 0; i < loop_ub; i++) {
    switch_expression->data[i] = iobj_1->Type->data[i];
  }

  if (b_strcmp(switch_expression)) {
    loop_ub = 0;
  } else if (c_strcmp(switch_expression)) {
    loop_ub = 1;
  } else {
    loop_ub = -1;
  }

  emxFree_char_T(&switch_expression);
  switch (loop_ub) {
   case 0:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = iv1[i];
    }

    for (i = 0; i < 2; i++) {
      poslim_data[i] = 6.2831853071795862 * (real_T)i - 3.1415926535897931;
    }

    iobj_1->VelocityNumber = 1.0;
    iobj_1->PositionNumber = 1.0;
    for (i = 0; i < 3; i++) {
      iobj_1->JointAxisInternal[i] = (real_T)iv3[i];
    }
    break;

   case 1:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = iv2[i];
    }

    for (i = 0; i < 2; i++) {
      poslim_data[i] = (real_T)i - 0.5;
    }

    iobj_1->VelocityNumber = 1.0;
    iobj_1->PositionNumber = 1.0;
    for (i = 0; i < 3; i++) {
      iobj_1->JointAxisInternal[i] = (real_T)iv3[i];
    }
    break;

   default:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = 0;
    }

    for (i = 0; i < 2; i++) {
      poslim_data[i] = 0.0;
    }

    iobj_1->VelocityNumber = 0.0;
    iobj_1->PositionNumber = 0.0;
    for (i = 0; i < 3; i++) {
      iobj_1->JointAxisInternal[i] = 0.0;
    }
    break;
  }

  i = iobj_1->MotionSubspace->size[0] * iobj_1->MotionSubspace->size[1];
  iobj_1->MotionSubspace->size[0] = 6;
  iobj_1->MotionSubspace->size[1] = 1;
  emxEnsureCapacity_real_T(iobj_1->MotionSubspace, i);
  for (i = 0; i < 6; i++) {
    iobj_1->MotionSubspace->data[i] = (real_T)msubspace_data[i];
  }

  i = iobj_1->PositionLimitsInternal->size[0] * iobj_1->
    PositionLimitsInternal->size[1];
  iobj_1->PositionLimitsInternal->size[0] = 1;
  iobj_1->PositionLimitsInternal->size[1] = 2;
  emxEnsureCapacity_real_T(iobj_1->PositionLimitsInternal, i);
  for (i = 0; i < 2; i++) {
    iobj_1->PositionLimitsInternal->data[i] = poslim_data[i];
  }

  i = iobj_1->HomePositionInternal->size[0];
  iobj_1->HomePositionInternal->size[0] = 1;
  emxEnsureCapacity_real_T1(iobj_1->HomePositionInternal, i);
  for (i = 0; i < 1; i++) {
    iobj_1->HomePositionInternal->data[0] = 0.0;
  }

  b_obj->JointInternal = iobj_1;
  for (i = 0; i < 16; i++) {
    b_obj->JointInternal->JointToParentTransform[i] = dv3[i];
  }

  for (i = 0; i < 16; i++) {
    b_obj->JointInternal->ChildToJointTransform[i] = (real_T)iv[i];
  }

  i = b_obj->JointInternal->MotionSubspace->size[0] * b_obj->
    JointInternal->MotionSubspace->size[1];
  b_obj->JointInternal->MotionSubspace->size[0] = 6;
  b_obj->JointInternal->MotionSubspace->size[1] = 1;
  emxEnsureCapacity_real_T(b_obj->JointInternal->MotionSubspace, i);
  for (i = 0; i < 6; i++) {
    b_obj->JointInternal->MotionSubspace->data[i] = (real_T)iv1[i];
  }

  b_obj->JointInternal->InTree = true;
  i = b_obj->JointInternal->PositionLimitsInternal->size[0] *
    b_obj->JointInternal->PositionLimitsInternal->size[1];
  b_obj->JointInternal->PositionLimitsInternal->size[0] = 1;
  b_obj->JointInternal->PositionLimitsInternal->size[1] = 2;
  emxEnsureCapacity_real_T(b_obj->JointInternal->PositionLimitsInternal, i);
  for (i = 0; i < 2; i++) {
    b_obj->JointInternal->PositionLimitsInternal->data[i] = 6.2831853071795862 *
      (real_T)i - 3.1415926535897931;
  }

  for (i = 0; i < 3; i++) {
    b_obj->JointInternal->JointAxisInternal[i] = (real_T)iv3[i];
  }

  i = b_obj->JointInternal->HomePositionInternal->size[0];
  b_obj->JointInternal->HomePositionInternal->size[0] = 1;
  emxEnsureCapacity_real_T1(b_obj->JointInternal->HomePositionInternal, i);
  b_obj->JointInternal->HomePositionInternal->data[0] = 0.0;
  st.site = &nb_emlrtRSI;
  b_obj->CollisionsInternal = CollisionSet_CollisionSet(moduleInstance, &st,
    iobj_0, 0.0);
  b_obj->matlabCodegenIsDeleted = false;
  return b_obj;
}

static robotics_manip_internal_RigidBody *m_RigidBody_RigidBody
  (InstanceStruct_dnGfh1DX0a11xSfGnyzF5G *moduleInstance, const emlrtStack *sp,
   robotics_manip_internal_RigidBody *obj, robotics_manip_internal_CollisionSet *
   iobj_0, rigidBodyJoint *iobj_1)
{
  static real_T dv[16] = { -0.68047509165608866, -0.73277121234095821, -0.0, 0.0,
    0.73277121234095821, -0.68047509165608866, 0.0, 0.0, -0.0, 0.0, 1.0, 0.0,
    2.6645352591003757E-15, 1.2975731600306517E-15, -0.30703499999999911, 1.0 };

  static char_T jname[6] = { 'J', 'o', 'i', 'n', 't', '7' };

  static char_T cv[5] = { 'B', 'o', 'd', 'y', '7' };

  static char_T cv1[5] = { 'f', 'i', 'x', 'e', 'd' };

  static int8_T iv[16] = { 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1 };

  static int8_T iv1[6] = { 0, 0, 1, 0, 0, 0 };

  static int8_T iv2[6] = { 0, 0, 0, 0, 0, 1 };

  static int8_T iv3[3] = { 0, 0, 1 };

  emlrtStack b_st;
  emlrtStack st;
  emxArray_char_T *switch_expression;
  robotics_manip_internal_RigidBody *b_obj;
  real_T poslim_data[12];
  int32_T i;
  int32_T loop_ub;
  int8_T msubspace_data[36];
  st.prev = sp;
  st.tls = sp->tls;
  b_obj = obj;
  st.site = &fb_emlrtRSI;
  b_st.site = &x_emlrtRSI;
  i = b_obj->NameInternal->size[0] * b_obj->NameInternal->size[1];
  b_obj->NameInternal->size[0] = 1;
  b_obj->NameInternal->size[1] = 5;
  emxEnsureCapacity_char_T(b_obj->NameInternal, i);
  for (i = 0; i < 5; i++) {
    b_obj->NameInternal->data[i] = cv[i];
  }

  b_obj->ParentIndex = 6.0;
  b_obj->MassInternal = 0.0;
  for (i = 0; i < 3; i++) {
    b_obj->CenterOfMassInternal[i] = -0.0;
  }

  for (i = 0; i < 9; i++) {
    b_obj->InertiaInternal[i] = 0.0;
  }

  for (i = 0; i < 36; i++) {
    b_obj->SpatialInertia[i] = 0.0;
  }

  st.site = &mb_emlrtRSI;
  iobj_1->InTree = false;
  for (i = 0; i < 16; i++) {
    iobj_1->JointToParentTransform[i] = (real_T)iv[i];
  }

  for (i = 0; i < 16; i++) {
    iobj_1->ChildToJointTransform[i] = (real_T)iv[i];
  }

  b_st.site = &ib_emlrtRSI;
  i = iobj_1->NameInternal->size[0] * iobj_1->NameInternal->size[1];
  iobj_1->NameInternal->size[0] = 1;
  iobj_1->NameInternal->size[1] = 6;
  emxEnsureCapacity_char_T(iobj_1->NameInternal, i);
  for (i = 0; i < 6; i++) {
    iobj_1->NameInternal->data[i] = jname[i];
  }

  i = iobj_1->Type->size[0] * iobj_1->Type->size[1];
  iobj_1->Type->size[0] = 1;
  iobj_1->Type->size[1] = 5;
  emxEnsureCapacity_char_T(iobj_1->Type, i);
  for (i = 0; i < 5; i++) {
    iobj_1->Type->data[i] = cv1[i];
  }

  emxInit_char_T(&switch_expression, 2);
  i = switch_expression->size[0] * switch_expression->size[1];
  switch_expression->size[0] = 1;
  switch_expression->size[1] = iobj_1->Type->size[1];
  emxEnsureCapacity_char_T(switch_expression, i);
  loop_ub = iobj_1->Type->size[1];
  for (i = 0; i < loop_ub; i++) {
    switch_expression->data[i] = iobj_1->Type->data[i];
  }

  if (b_strcmp(switch_expression)) {
    loop_ub = 0;
  } else if (c_strcmp(switch_expression)) {
    loop_ub = 1;
  } else {
    loop_ub = -1;
  }

  emxFree_char_T(&switch_expression);
  switch (loop_ub) {
   case 0:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = iv1[i];
    }

    for (i = 0; i < 2; i++) {
      poslim_data[i] = 6.2831853071795862 * (real_T)i - 3.1415926535897931;
    }

    iobj_1->VelocityNumber = 1.0;
    iobj_1->PositionNumber = 1.0;
    for (i = 0; i < 3; i++) {
      iobj_1->JointAxisInternal[i] = (real_T)iv3[i];
    }
    break;

   case 1:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = iv2[i];
    }

    for (i = 0; i < 2; i++) {
      poslim_data[i] = (real_T)i - 0.5;
    }

    iobj_1->VelocityNumber = 1.0;
    iobj_1->PositionNumber = 1.0;
    for (i = 0; i < 3; i++) {
      iobj_1->JointAxisInternal[i] = (real_T)iv3[i];
    }
    break;

   default:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = 0;
    }

    for (i = 0; i < 2; i++) {
      poslim_data[i] = 0.0;
    }

    iobj_1->VelocityNumber = 0.0;
    iobj_1->PositionNumber = 0.0;
    for (i = 0; i < 3; i++) {
      iobj_1->JointAxisInternal[i] = 0.0;
    }
    break;
  }

  i = iobj_1->MotionSubspace->size[0] * iobj_1->MotionSubspace->size[1];
  iobj_1->MotionSubspace->size[0] = 6;
  iobj_1->MotionSubspace->size[1] = 1;
  emxEnsureCapacity_real_T(iobj_1->MotionSubspace, i);
  for (i = 0; i < 6; i++) {
    iobj_1->MotionSubspace->data[i] = (real_T)msubspace_data[i];
  }

  i = iobj_1->PositionLimitsInternal->size[0] * iobj_1->
    PositionLimitsInternal->size[1];
  iobj_1->PositionLimitsInternal->size[0] = 1;
  iobj_1->PositionLimitsInternal->size[1] = 2;
  emxEnsureCapacity_real_T(iobj_1->PositionLimitsInternal, i);
  for (i = 0; i < 2; i++) {
    iobj_1->PositionLimitsInternal->data[i] = poslim_data[i];
  }

  i = iobj_1->HomePositionInternal->size[0];
  iobj_1->HomePositionInternal->size[0] = 1;
  emxEnsureCapacity_real_T1(iobj_1->HomePositionInternal, i);
  for (i = 0; i < 1; i++) {
    iobj_1->HomePositionInternal->data[0] = 0.0;
  }

  b_obj->JointInternal = iobj_1;
  for (i = 0; i < 16; i++) {
    b_obj->JointInternal->JointToParentTransform[i] = dv[i];
  }

  for (i = 0; i < 16; i++) {
    b_obj->JointInternal->ChildToJointTransform[i] = (real_T)iv[i];
  }

  i = b_obj->JointInternal->MotionSubspace->size[0] * b_obj->
    JointInternal->MotionSubspace->size[1];
  b_obj->JointInternal->MotionSubspace->size[0] = 6;
  b_obj->JointInternal->MotionSubspace->size[1] = 1;
  emxEnsureCapacity_real_T(b_obj->JointInternal->MotionSubspace, i);
  for (i = 0; i < 6; i++) {
    b_obj->JointInternal->MotionSubspace->data[i] = 0.0;
  }

  b_obj->JointInternal->InTree = true;
  i = b_obj->JointInternal->PositionLimitsInternal->size[0] *
    b_obj->JointInternal->PositionLimitsInternal->size[1];
  b_obj->JointInternal->PositionLimitsInternal->size[0] = 1;
  b_obj->JointInternal->PositionLimitsInternal->size[1] = 2;
  emxEnsureCapacity_real_T(b_obj->JointInternal->PositionLimitsInternal, i);
  for (i = 0; i < 2; i++) {
    b_obj->JointInternal->PositionLimitsInternal->data[i] = 0.0;
  }

  for (i = 0; i < 3; i++) {
    b_obj->JointInternal->JointAxisInternal[i] = 0.0;
  }

  i = b_obj->JointInternal->HomePositionInternal->size[0];
  b_obj->JointInternal->HomePositionInternal->size[0] = 1;
  emxEnsureCapacity_real_T1(b_obj->JointInternal->HomePositionInternal, i);
  b_obj->JointInternal->HomePositionInternal->data[0] = 0.0;
  st.site = &nb_emlrtRSI;
  b_obj->CollisionsInternal = CollisionSet_CollisionSet(moduleInstance, &st,
    iobj_0, 0.0);
  b_obj->matlabCodegenIsDeleted = false;
  return b_obj;
}

static rigidBodyJoint *rigidBodyJoint_rigidBodyJoint
  (InstanceStruct_dnGfh1DX0a11xSfGnyzF5G *moduleInstance, const emlrtStack *sp,
   rigidBodyJoint *obj, emxArray_char_T *jname)
{
  static char_T cv[5] = { 'f', 'i', 'x', 'e', 'd' };

  static int8_T iv[16] = { 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1 };

  static int8_T iv1[6] = { 0, 0, 1, 0, 0, 0 };

  static int8_T iv2[6] = { 0, 0, 0, 0, 0, 1 };

  static int8_T iv3[3] = { 0, 0, 1 };

  emlrtStack st;
  emxArray_char_T *switch_expression;
  rigidBodyJoint *b_obj;
  real_T poslim_data[12];
  int32_T i;
  int32_T loop_ub;
  int8_T msubspace_data[36];
  st.prev = sp;
  st.tls = sp->tls;
  b_obj = obj;
  b_obj->InTree = false;
  for (i = 0; i < 16; i++) {
    b_obj->JointToParentTransform[i] = (real_T)iv[i];
  }

  for (i = 0; i < 16; i++) {
    b_obj->ChildToJointTransform[i] = (real_T)iv[i];
  }

  i = jname->size[0] * jname->size[1];
  jname->size[0] = 1;
  emxEnsureCapacity_char_T(jname, i);
  st.site = &pb_emlrtRSI;
  b_validateattributes(moduleInstance, &st, jname);
  st.site = &ib_emlrtRSI;
  i = b_obj->NameInternal->size[0] * b_obj->NameInternal->size[1];
  b_obj->NameInternal->size[0] = 1;
  b_obj->NameInternal->size[1] = jname->size[1];
  emxEnsureCapacity_char_T(b_obj->NameInternal, i);
  loop_ub = jname->size[1] - 1;
  for (i = 0; i <= loop_ub; i++) {
    b_obj->NameInternal->data[i] = jname->data[i];
  }

  i = b_obj->Type->size[0] * b_obj->Type->size[1];
  b_obj->Type->size[0] = 1;
  b_obj->Type->size[1] = 5;
  emxEnsureCapacity_char_T(b_obj->Type, i);
  for (i = 0; i < 5; i++) {
    b_obj->Type->data[i] = cv[i];
  }

  emxInit_char_T(&switch_expression, 2);
  i = switch_expression->size[0] * switch_expression->size[1];
  switch_expression->size[0] = 1;
  switch_expression->size[1] = b_obj->Type->size[1];
  emxEnsureCapacity_char_T(switch_expression, i);
  loop_ub = b_obj->Type->size[1];
  for (i = 0; i < loop_ub; i++) {
    switch_expression->data[i] = b_obj->Type->data[i];
  }

  if (b_strcmp(switch_expression)) {
    loop_ub = 0;
  } else if (c_strcmp(switch_expression)) {
    loop_ub = 1;
  } else {
    loop_ub = -1;
  }

  emxFree_char_T(&switch_expression);
  switch (loop_ub) {
   case 0:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = iv1[i];
    }

    for (i = 0; i < 2; i++) {
      poslim_data[i] = 6.2831853071795862 * (real_T)i - 3.1415926535897931;
    }

    b_obj->VelocityNumber = 1.0;
    b_obj->PositionNumber = 1.0;
    for (i = 0; i < 3; i++) {
      b_obj->JointAxisInternal[i] = (real_T)iv3[i];
    }
    break;

   case 1:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = iv2[i];
    }

    for (i = 0; i < 2; i++) {
      poslim_data[i] = (real_T)i - 0.5;
    }

    b_obj->VelocityNumber = 1.0;
    b_obj->PositionNumber = 1.0;
    for (i = 0; i < 3; i++) {
      b_obj->JointAxisInternal[i] = (real_T)iv3[i];
    }
    break;

   default:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = 0;
    }

    for (i = 0; i < 2; i++) {
      poslim_data[i] = 0.0;
    }

    b_obj->VelocityNumber = 0.0;
    b_obj->PositionNumber = 0.0;
    for (i = 0; i < 3; i++) {
      b_obj->JointAxisInternal[i] = 0.0;
    }
    break;
  }

  i = b_obj->MotionSubspace->size[0] * b_obj->MotionSubspace->size[1];
  b_obj->MotionSubspace->size[0] = 6;
  b_obj->MotionSubspace->size[1] = 1;
  emxEnsureCapacity_real_T(b_obj->MotionSubspace, i);
  for (i = 0; i < 6; i++) {
    b_obj->MotionSubspace->data[i] = (real_T)msubspace_data[i];
  }

  i = b_obj->PositionLimitsInternal->size[0] * b_obj->
    PositionLimitsInternal->size[1];
  b_obj->PositionLimitsInternal->size[0] = 1;
  b_obj->PositionLimitsInternal->size[1] = 2;
  emxEnsureCapacity_real_T(b_obj->PositionLimitsInternal, i);
  for (i = 0; i < 2; i++) {
    b_obj->PositionLimitsInternal->data[i] = poslim_data[i];
  }

  i = b_obj->HomePositionInternal->size[0];
  b_obj->HomePositionInternal->size[0] = 1;
  emxEnsureCapacity_real_T1(b_obj->HomePositionInternal, i);
  for (i = 0; i < 1; i++) {
    b_obj->HomePositionInternal->data[0] = 0.0;
  }

  return b_obj;
}

static void b_validateattributes(InstanceStruct_dnGfh1DX0a11xSfGnyzF5G
  *moduleInstance, const emlrtStack *sp, emxArray_char_T *a)
{
  static const int32_T iv[2] = { 1, 38 };

  static const int32_T iv1[2] = { 1, 48 };

  static const int32_T iv2[2] = { 1, 5 };

  static char_T e_u[48] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'V', 'a', 'l', 'i', 'd', 'a', 't', 'e', 'a', 't', 't',
    'r', 'i', 'b', 'u', 't', 'e', 's', 'e', 'x', 'p', 'e', 'c', 't', 'e', 'd',
    'N', 'o', 'n', 'e', 'm', 'p', 't', 'y' };

  static char_T c_u[38] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'r', 'i', 'g',
    'i', 'd', 'B', 'o', 'd', 'y', 'J', 'o', 'i', 'n', 't', ':', 'e', 'x', 'p',
    'e', 'c', 't', 'e', 'd', 'N', 'o', 'n', 'e', 'm', 'p', 't', 'y' };

  static char_T g_u[5] = { 'j', 'n', 'a', 'm', 'e' };

  cgxertBlkSrcLocInfo b_blkSrcLoc;
  cgxertBlkSrcLocInfo blkSrcLoc;
  cgxertBlkSrcLocInfo c_blkSrcLoc;
  emlrtStack b_st;
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *m;
  const mxArray *y;
  int32_T i;
  char_T d_u[48];
  char_T b_u[38];
  char_T f_u[5];
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &k_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  if (a->size[1] == 0) {
    for (i = 0; i < 38; i++) {
      b_u[i] = c_u[i];
    }

    y = NULL;
    m = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a(cgxertPrepareEmlrtTLS(moduleInstance->S, &st,
      moduleInstance->sysIdx, 6), 38, m, &b_u[0]);
    emlrtAssign(&y, m);
    for (i = 0; i < 48; i++) {
      d_u[i] = e_u[i];
    }

    b_y = NULL;
    m = emlrtCreateCharArray(2, &iv1[0]);
    emlrtInitCharArrayR2013a(cgxertPrepareEmlrtTLS(moduleInstance->S, &st,
      moduleInstance->sysIdx, 6), 48, m, &d_u[0]);
    emlrtAssign(&b_y, m);
    for (i = 0; i < 5; i++) {
      f_u[i] = g_u[i];
    }

    c_y = NULL;
    m = emlrtCreateCharArray(2, &iv2[0]);
    emlrtInitCharArrayR2013a(cgxertPrepareEmlrtTLS(moduleInstance->S, &st,
      moduleInstance->sysIdx, 6), 5, m, &f_u[0]);
    emlrtAssign(&c_y, m);
    b_st.site = &om_emlrtRSI;
    blkSrcLoc.sysIdx = moduleInstance->sysIdx;
    blkSrcLoc.blkIdx = 6;
    b_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
    b_blkSrcLoc.blkIdx = 6;
    c_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
    c_blkSrcLoc.blkIdx = 6;
    b_error(moduleInstance, &b_st, y, getString(moduleInstance, &b_st, message
             (moduleInstance, &b_st, b_y, c_y, &c_emlrtMCI, &blkSrcLoc),
             &c_emlrtMCI, &b_blkSrcLoc), &c_emlrtMCI, &c_blkSrcLoc);
  }
}

static void SystemProp_setProperties(InstanceStruct_dnGfh1DX0a11xSfGnyzF5G
  *moduleInstance, const emlrtStack *sp, inverseKinematics *obj,
  robotics_manip_internal_RigidBodyTree *varargin_2, rigidBodyJoint *iobj_0,
  robotics_manip_internal_RigidBody *iobj_1,
  robotics_manip_internal_CollisionSet *iobj_2,
  robotics_manip_internal_RigidBodyTree_1 *iobj_3,
  robotics_core_internal_DampedBFGSwGradientProjection *iobj_4)
{
  static const int32_T iv[2] = { 1, 37 };

  static const int32_T iv1[2] = { 1, 48 };

  static const int32_T iv10[2] = { 1, 46 };

  static const int32_T iv11[2] = { 1, 7 };

  static const int32_T iv2[2] = { 1, 8 };

  static const int32_T iv3[2] = { 1, 51 };

  static const int32_T iv4[2] = { 1, 51 };

  static const int32_T iv6[2] = { 1, 35 };

  static const int32_T iv7[2] = { 1, 46 };

  static const int32_T iv8[2] = { 1, 35 };

  static const int32_T iv9[2] = { 1, 7 };

  static char_T i_u[51] = { 'r', 'o', 'b', 'o', 't', 'i', 'c', 's', ':', 'r',
    'o', 'b', 'o', 't', 'm', 'a', 'n', 'i', 'p', ':', 'r', 'i', 'g', 'i', 'd',
    'b', 'o', 'd', 'y', 't', 'r', 'e', 'e', ':', 'B', 'a', 's', 'e', 'N', 'a',
    'm', 'e', 'C', 'o', 'l', 'l', 'i', 's', 'i', 'o', 'n' };

  static char_T e_u[48] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'V', 'a', 'l', 'i', 'd', 'a', 't', 'e', 'a', 't', 't',
    'r', 'i', 'b', 'u', 't', 'e', 's', 'e', 'x', 'p', 'e', 'c', 't', 'e', 'd',
    'N', 'o', 'n', 'e', 'm', 'p', 't', 'y' };

  static char_T m_u[46] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'V', 'a', 'l', 'i', 'd', 'a', 't', 'e', 'a', 't', 't',
    'r', 'i', 'b', 'u', 't', 'e', 's', 'e', 'x', 'p', 'e', 'c', 't', 'e', 'd',
    'N', 'o', 'n', 'N', 'a', 'N' };

  static char_T q_u[46] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'V', 'a', 'l', 'i', 'd', 'a', 't', 'e', 'a', 't', 't',
    'r', 'i', 'b', 'u', 't', 'e', 's', 'e', 'x', 'p', 'e', 'c', 't', 'e', 'd',
    'F', 'i', 'n', 'i', 't', 'e' };

  static char_T c_u[37] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'r', 'i', 'g',
    'i', 'd', 'B', 'o', 'd', 'y', 'T', 'r', 'e', 'e', ':', 'e', 'x', 'p', 'e',
    'c', 't', 'e', 'd', 'N', 'o', 'n', 'e', 'm', 'p', 't', 'y' };

  static char_T k_u[35] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'r', 'i', 'g',
    'i', 'd', 'B', 'o', 'd', 'y', 'T', 'r', 'e', 'e', ':', 'e', 'x', 'p', 'e',
    'c', 't', 'e', 'd', 'N', 'o', 'n', 'N', 'a', 'N' };

  static char_T n_u[35] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'r', 'i', 'g',
    'i', 'd', 'B', 'o', 'd', 'y', 'T', 'r', 'e', 'e', ':', 'e', 'x', 'p', 'e',
    'c', 't', 'e', 'd', 'F', 'i', 'n', 'i', 't', 'e' };

  static char_T g_u[8] = { 'b', 'a', 's', 'e', 'N', 'a', 'm', 'e' };

  static char_T p_u[7] = { 'G', 'r', 'a', 'v', 'i', 't', 'y' };

  cgxertBlkSrcLocInfo b_blkSrcLoc;
  cgxertBlkSrcLocInfo blkSrcLoc;
  cgxertBlkSrcLocInfo c_blkSrcLoc;
  cgxertBlkSrcLocInfo d_blkSrcLoc;
  cgxertBlkSrcLocInfo e_blkSrcLoc;
  cgxertBlkSrcLocInfo f_blkSrcLoc;
  cgxertBlkSrcLocInfo g_blkSrcLoc;
  cgxertBlkSrcLocInfo h_blkSrcLoc;
  cgxertBlkSrcLocInfo i_blkSrcLoc;
  cgxertBlkSrcLocInfo j_blkSrcLoc;
  cgxertBlkSrcLocInfo k_blkSrcLoc;
  cgxertBlkSrcLocInfo l_blkSrcLoc;
  cgxertBlkSrcLocInfo m_blkSrcLoc;
  cgxertBlkSrcLocInfo n_blkSrcLoc;
  cgxertBlkSrcLocInfo o_blkSrcLoc;
  cgxertBlkSrcLocInfo p_blkSrcLoc;
  cgxertBlkSrcLocInfo q_blkSrcLoc;
  cgxertBlkSrcLocInfo r_blkSrcLoc;
  cgxertBlkSrcLocInfo s_blkSrcLoc;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack h_st;
  emlrtStack st;
  emxArray_char_T *b_basename;
  emxArray_char_T *bname;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *d_y;
  const mxArray *e_y;
  const mxArray *f_y;
  const mxArray *g_y;
  const mxArray *h_y;
  const mxArray *i_y;
  const mxArray *j_y;
  const mxArray *k_y;
  const mxArray *l_y;
  const mxArray *m;
  const mxArray *y;
  robotics_core_internal_DampedBFGSwGradientProjection *b_obj;
  robotics_manip_internal_RigidBody *body;
  robotics_manip_internal_RigidBody *parent;
  robotics_manip_internal_RigidBodyTree_1 *newrobot;
  real_T g[3];
  real_T pid;
  int32_T iv5[2];
  int32_T b_i;
  int32_T bid;
  int32_T i;
  int32_T loop_ub;
  char_T h_u[51];
  char_T d_u[48];
  char_T l_u[46];
  char_T b_u[37];
  char_T j_u[35];
  char_T f_u[8];
  char_T o_u[7];
  boolean_T exitg1;
  boolean_T p;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &c_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  f_st.prev = &e_st;
  f_st.tls = e_st.tls;
  g_st.prev = &f_st;
  g_st.tls = f_st.tls;
  h_st.prev = &g_st;
  h_st.tls = g_st.tls;
  b_st.site = &sb_emlrtRSI;
  c_st.site = &sb_emlrtRSI;
  d_st.site = &tb_emlrtRSI;
  e_st.site = &ub_emlrtRSI;
  newrobot = RigidBodyTree_RigidBodyTree(moduleInstance, &e_st, iobj_3);
  emxInit_char_T(&b_basename, 2);
  e_st.site = &vb_emlrtRSI;
  f_st.site = &oc_emlrtRSI;
  i = b_basename->size[0] * b_basename->size[1];
  b_basename->size[0] = 1;
  b_basename->size[1] = varargin_2->Base.NameInternal->size[1];
  emxEnsureCapacity_char_T(b_basename, i);
  loop_ub = varargin_2->Base.NameInternal->size[1];
  for (i = 0; i < loop_ub; i++) {
    b_basename->data[i] = varargin_2->Base.NameInternal->data[i];
  }

  e_st.site = &vb_emlrtRSI;
  f_st.site = &pc_emlrtRSI;
  g_st.site = &k_emlrtRSI;
  if (b_basename->size[1] == 0) {
    for (i = 0; i < 37; i++) {
      b_u[i] = c_u[i];
    }

    y = NULL;
    m = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a(cgxertPrepareEmlrtTLS(moduleInstance->S, &g_st,
      moduleInstance->sysIdx, 6), 37, m, &b_u[0]);
    emlrtAssign(&y, m);
    for (i = 0; i < 48; i++) {
      d_u[i] = e_u[i];
    }

    b_y = NULL;
    m = emlrtCreateCharArray(2, &iv1[0]);
    emlrtInitCharArrayR2013a(cgxertPrepareEmlrtTLS(moduleInstance->S, &g_st,
      moduleInstance->sysIdx, 6), 48, m, &d_u[0]);
    emlrtAssign(&b_y, m);
    for (i = 0; i < 8; i++) {
      f_u[i] = g_u[i];
    }

    c_y = NULL;
    m = emlrtCreateCharArray(2, &iv2[0]);
    emlrtInitCharArrayR2013a(cgxertPrepareEmlrtTLS(moduleInstance->S, &g_st,
      moduleInstance->sysIdx, 6), 8, m, &f_u[0]);
    emlrtAssign(&c_y, m);
    h_st.site = &om_emlrtRSI;
    blkSrcLoc.sysIdx = moduleInstance->sysIdx;
    blkSrcLoc.blkIdx = 6;
    b_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
    b_blkSrcLoc.blkIdx = 6;
    c_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
    c_blkSrcLoc.blkIdx = 6;
    b_error(moduleInstance, &h_st, y, getString(moduleInstance, &h_st, message
             (moduleInstance, &h_st, b_y, c_y, &c_emlrtMCI, &blkSrcLoc),
             &c_emlrtMCI, &b_blkSrcLoc), &c_emlrtMCI, &c_blkSrcLoc);
  }

  f_st.site = &qc_emlrtRSI;
  bid = -1;
  g_st.site = &sc_emlrtRSI;
  c_validateattributes(moduleInstance, &g_st, b_basename);
  emxInit_char_T(&bname, 2);
  g_st.site = &tc_emlrtRSI;
  i = bname->size[0] * bname->size[1];
  bname->size[0] = 1;
  bname->size[1] = newrobot->Base.NameInternal->size[1];
  emxEnsureCapacity_char_T(bname, i);
  loop_ub = newrobot->Base.NameInternal->size[1];
  for (i = 0; i < loop_ub; i++) {
    bname->data[i] = newrobot->Base.NameInternal->data[i];
  }

  if (d_strcmp(bname, b_basename)) {
    bid = 0;
  } else {
    pid = newrobot->NumBodies;
    emlrtForLoopVectorCheckR2021a(1.0, 1.0, pid, mxDOUBLE_CLASS, (int32_T)pid,
      &b_emlrtRTEI, cgxertPrepareEmlrtTLS(moduleInstance->S, &f_st,
      moduleInstance->sysIdx, 6));
    b_i = 0;
    exitg1 = false;
    while ((!exitg1) && (b_i <= (int32_T)pid - 1)) {
      g_st.site = &uc_emlrtRSI;
      body = newrobot->Bodies[emlrtDynamicBoundsCheckR2012b(b_i, 0, 6,
        &b_emlrtBCI, cgxertPrepareEmlrtTLS(moduleInstance->S, &g_st,
        moduleInstance->sysIdx, 6))];
      i = bname->size[0] * bname->size[1];
      bname->size[0] = 1;
      bname->size[1] = body->NameInternal->size[1];
      emxEnsureCapacity_char_T(bname, i);
      loop_ub = body->NameInternal->size[1];
      for (i = 0; i < loop_ub; i++) {
        bname->data[i] = body->NameInternal->data[i];
      }

      if (d_strcmp(bname, b_basename)) {
        bid = b_i + 1;
        exitg1 = true;
      } else {
        b_i++;
      }
    }
  }

  if (bid != 0) {
    if (bid < 0) {
      i = newrobot->Base.NameInternal->size[0] * newrobot->
        Base.NameInternal->size[1];
      newrobot->Base.NameInternal->size[0] = 1;
      newrobot->Base.NameInternal->size[1] = b_basename->size[1];
      emxEnsureCapacity_char_T(newrobot->Base.NameInternal, i);
      loop_ub = b_basename->size[1] - 1;
      for (i = 0; i <= loop_ub; i++) {
        newrobot->Base.NameInternal->data[i] = b_basename->data[i];
      }
    } else {
      f_st.site = &rc_emlrtRSI;
      for (i = 0; i < 51; i++) {
        h_u[i] = i_u[i];
      }

      d_y = NULL;
      m = emlrtCreateCharArray(2, &iv3[0]);
      emlrtInitCharArrayR2013a(cgxertPrepareEmlrtTLS(moduleInstance->S, &f_st,
        moduleInstance->sysIdx, 6), 51, m, &h_u[0]);
      emlrtAssign(&d_y, m);
      for (i = 0; i < 51; i++) {
        h_u[i] = i_u[i];
      }

      e_y = NULL;
      m = emlrtCreateCharArray(2, &iv4[0]);
      emlrtInitCharArrayR2013a(cgxertPrepareEmlrtTLS(moduleInstance->S, &f_st,
        moduleInstance->sysIdx, 6), 51, m, &h_u[0]);
      emlrtAssign(&e_y, m);
      f_y = NULL;
      for (i = 0; i < 2; i++) {
        iv5[i] = b_basename->size[i];
      }

      m = emlrtCreateCharArray(2, &iv5[0]);
      emlrtInitCharArrayR2013a(cgxertPrepareEmlrtTLS(moduleInstance->S, &f_st,
        moduleInstance->sysIdx, 6), b_basename->size[1], m, &b_basename->data[0]);
      emlrtAssign(&f_y, m);
      g_st.site = &mm_emlrtRSI;
      d_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
      d_blkSrcLoc.blkIdx = 6;
      e_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
      e_blkSrcLoc.blkIdx = 6;
      f_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
      f_blkSrcLoc.blkIdx = 6;
      b_error(moduleInstance, &g_st, d_y, getString(moduleInstance, &g_st,
               message(moduleInstance, &g_st, e_y, f_y, &e_emlrtMCI,
                       &d_blkSrcLoc), &e_emlrtMCI, &e_blkSrcLoc), &e_emlrtMCI,
              &f_blkSrcLoc);
    }
  }

  emxFree_char_T(&b_basename);
  e_st.site = &yb_emlrtRSI;
  newrobot->Base.CollisionsInternal = CollisionSet_copy(moduleInstance, &e_st,
    varargin_2->Base.CollisionsInternal, &(&(&(&(&iobj_2[0])[0])[0])[0])[0]);
  e_st.site = &wb_emlrtRSI;
  for (i = 0; i < 3; i++) {
    g[i] = varargin_2->Gravity[i];
  }

  f_st.site = &ad_emlrtRSI;
  g_st.site = &k_emlrtRSI;
  p = true;
  loop_ub = 0;
  exitg1 = false;
  while ((!exitg1) && (loop_ub < 3)) {
    if (!muDoubleScalarIsNaN(g[loop_ub])) {
      loop_ub++;
    } else {
      p = false;
      exitg1 = true;
    }
  }

  if (!p) {
    for (i = 0; i < 35; i++) {
      j_u[i] = k_u[i];
    }

    g_y = NULL;
    m = emlrtCreateCharArray(2, &iv6[0]);
    emlrtInitCharArrayR2013a(cgxertPrepareEmlrtTLS(moduleInstance->S, &g_st,
      moduleInstance->sysIdx, 6), 35, m, &j_u[0]);
    emlrtAssign(&g_y, m);
    for (i = 0; i < 46; i++) {
      l_u[i] = m_u[i];
    }

    h_y = NULL;
    m = emlrtCreateCharArray(2, &iv7[0]);
    emlrtInitCharArrayR2013a(cgxertPrepareEmlrtTLS(moduleInstance->S, &g_st,
      moduleInstance->sysIdx, 6), 46, m, &l_u[0]);
    emlrtAssign(&h_y, m);
    for (i = 0; i < 7; i++) {
      o_u[i] = p_u[i];
    }

    j_y = NULL;
    m = emlrtCreateCharArray(2, &iv9[0]);
    emlrtInitCharArrayR2013a(cgxertPrepareEmlrtTLS(moduleInstance->S, &g_st,
      moduleInstance->sysIdx, 6), 7, m, &o_u[0]);
    emlrtAssign(&j_y, m);
    h_st.site = &km_emlrtRSI;
    g_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
    g_blkSrcLoc.blkIdx = 6;
    i_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
    i_blkSrcLoc.blkIdx = 6;
    k_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
    k_blkSrcLoc.blkIdx = 6;
    b_error(moduleInstance, &h_st, g_y, getString(moduleInstance, &h_st, message
             (moduleInstance, &h_st, h_y, j_y, &f_emlrtMCI, &g_blkSrcLoc),
             &f_emlrtMCI, &i_blkSrcLoc), &f_emlrtMCI, &k_blkSrcLoc);
  }

  g_st.site = &k_emlrtRSI;
  p = true;
  loop_ub = 0;
  exitg1 = false;
  while ((!exitg1) && (loop_ub < 3)) {
    if ((!muDoubleScalarIsInf(g[loop_ub])) && (!muDoubleScalarIsNaN(g[loop_ub])))
    {
      loop_ub++;
    } else {
      p = false;
      exitg1 = true;
    }
  }

  if (!p) {
    for (i = 0; i < 35; i++) {
      j_u[i] = n_u[i];
    }

    i_y = NULL;
    m = emlrtCreateCharArray(2, &iv8[0]);
    emlrtInitCharArrayR2013a(cgxertPrepareEmlrtTLS(moduleInstance->S, &g_st,
      moduleInstance->sysIdx, 6), 35, m, &j_u[0]);
    emlrtAssign(&i_y, m);
    for (i = 0; i < 46; i++) {
      l_u[i] = q_u[i];
    }

    k_y = NULL;
    m = emlrtCreateCharArray(2, &iv10[0]);
    emlrtInitCharArrayR2013a(cgxertPrepareEmlrtTLS(moduleInstance->S, &g_st,
      moduleInstance->sysIdx, 6), 46, m, &l_u[0]);
    emlrtAssign(&k_y, m);
    for (i = 0; i < 7; i++) {
      o_u[i] = p_u[i];
    }

    l_y = NULL;
    m = emlrtCreateCharArray(2, &iv11[0]);
    emlrtInitCharArrayR2013a(cgxertPrepareEmlrtTLS(moduleInstance->S, &g_st,
      moduleInstance->sysIdx, 6), 7, m, &o_u[0]);
    emlrtAssign(&l_y, m);
    h_st.site = &jm_emlrtRSI;
    n_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
    n_blkSrcLoc.blkIdx = 6;
    p_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
    p_blkSrcLoc.blkIdx = 6;
    r_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
    r_blkSrcLoc.blkIdx = 6;
    b_error(moduleInstance, &h_st, i_y, getString(moduleInstance, &h_st, message
             (moduleInstance, &h_st, k_y, l_y, &b_emlrtMCI, &n_blkSrcLoc),
             &b_emlrtMCI, &p_blkSrcLoc), &b_emlrtMCI, &r_blkSrcLoc);
  }

  if (varargin_2->NumBodies >= 1.0) {
    body = varargin_2->Bodies[0];
    pid = body->ParentIndex;
    if (pid > 0.0) {
      i = (int32_T)emlrtIntegerCheckR2012b(pid, &c_emlrtDCI,
        cgxertPrepareEmlrtTLS(moduleInstance->S, &d_st, moduleInstance->sysIdx,
        6)) - 1;
      parent = varargin_2->Bodies[emlrtDynamicBoundsCheckR2012b(i, 0, 6,
        &c_emlrtBCI, cgxertPrepareEmlrtTLS(moduleInstance->S, &d_st,
        moduleInstance->sysIdx, 6))];
    } else {
      parent = &varargin_2->Base;
    }

    e_st.site = &xb_emlrtRSI;
    i = bname->size[0] * bname->size[1];
    bname->size[0] = 1;
    bname->size[1] = parent->NameInternal->size[1];
    emxEnsureCapacity_char_T(bname, i);
    loop_ub = parent->NameInternal->size[1];
    for (i = 0; i < loop_ub; i++) {
      bname->data[i] = parent->NameInternal->data[i];
    }

    e_st.site = &xb_emlrtRSI;
    h_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
    h_blkSrcLoc.blkIdx = 6;
    RigidBodyTree_addBody(moduleInstance, &e_st, newrobot, body, bname, &(&(&(&(
      &iobj_2[0])[0])[0])[0])[1], &(&(&(&(&iobj_0[0])[0])[0])[0])[0],
                          &(&(&(&(&iobj_1[0])[0])[0])[0])[0], &h_blkSrcLoc);
  }

  if (varargin_2->NumBodies >= 2.0) {
    body = varargin_2->Bodies[1];
    pid = body->ParentIndex;
    if (pid > 0.0) {
      i = (int32_T)emlrtIntegerCheckR2012b(pid, &c_emlrtDCI,
        cgxertPrepareEmlrtTLS(moduleInstance->S, &d_st, moduleInstance->sysIdx,
        6)) - 1;
      parent = varargin_2->Bodies[emlrtDynamicBoundsCheckR2012b(i, 0, 6,
        &c_emlrtBCI, cgxertPrepareEmlrtTLS(moduleInstance->S, &d_st,
        moduleInstance->sysIdx, 6))];
    } else {
      parent = &varargin_2->Base;
    }

    e_st.site = &xb_emlrtRSI;
    i = bname->size[0] * bname->size[1];
    bname->size[0] = 1;
    bname->size[1] = parent->NameInternal->size[1];
    emxEnsureCapacity_char_T(bname, i);
    loop_ub = parent->NameInternal->size[1];
    for (i = 0; i < loop_ub; i++) {
      bname->data[i] = parent->NameInternal->data[i];
    }

    e_st.site = &xb_emlrtRSI;
    j_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
    j_blkSrcLoc.blkIdx = 6;
    RigidBodyTree_addBody(moduleInstance, &e_st, newrobot, body, bname, &(&(&(&(
      &iobj_2[0])[0])[0])[0])[3], &(&(&(&(&iobj_0[0])[0])[0])[0])[2],
                          &(&(&(&(&iobj_1[0])[0])[0])[0])[1], &j_blkSrcLoc);
  }

  if (varargin_2->NumBodies >= 3.0) {
    body = varargin_2->Bodies[2];
    pid = body->ParentIndex;
    if (pid > 0.0) {
      i = (int32_T)emlrtIntegerCheckR2012b(pid, &c_emlrtDCI,
        cgxertPrepareEmlrtTLS(moduleInstance->S, &d_st, moduleInstance->sysIdx,
        6)) - 1;
      parent = varargin_2->Bodies[emlrtDynamicBoundsCheckR2012b(i, 0, 6,
        &c_emlrtBCI, cgxertPrepareEmlrtTLS(moduleInstance->S, &d_st,
        moduleInstance->sysIdx, 6))];
    } else {
      parent = &varargin_2->Base;
    }

    e_st.site = &xb_emlrtRSI;
    i = bname->size[0] * bname->size[1];
    bname->size[0] = 1;
    bname->size[1] = parent->NameInternal->size[1];
    emxEnsureCapacity_char_T(bname, i);
    loop_ub = parent->NameInternal->size[1];
    for (i = 0; i < loop_ub; i++) {
      bname->data[i] = parent->NameInternal->data[i];
    }

    e_st.site = &xb_emlrtRSI;
    l_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
    l_blkSrcLoc.blkIdx = 6;
    RigidBodyTree_addBody(moduleInstance, &e_st, newrobot, body, bname, &(&(&(&(
      &iobj_2[0])[0])[0])[0])[5], &(&(&(&(&iobj_0[0])[0])[0])[0])[4],
                          &(&(&(&(&iobj_1[0])[0])[0])[0])[2], &l_blkSrcLoc);
  }

  if (varargin_2->NumBodies >= 4.0) {
    body = varargin_2->Bodies[3];
    pid = body->ParentIndex;
    if (pid > 0.0) {
      i = (int32_T)emlrtIntegerCheckR2012b(pid, &c_emlrtDCI,
        cgxertPrepareEmlrtTLS(moduleInstance->S, &d_st, moduleInstance->sysIdx,
        6)) - 1;
      parent = varargin_2->Bodies[emlrtDynamicBoundsCheckR2012b(i, 0, 6,
        &c_emlrtBCI, cgxertPrepareEmlrtTLS(moduleInstance->S, &d_st,
        moduleInstance->sysIdx, 6))];
    } else {
      parent = &varargin_2->Base;
    }

    e_st.site = &xb_emlrtRSI;
    i = bname->size[0] * bname->size[1];
    bname->size[0] = 1;
    bname->size[1] = parent->NameInternal->size[1];
    emxEnsureCapacity_char_T(bname, i);
    loop_ub = parent->NameInternal->size[1];
    for (i = 0; i < loop_ub; i++) {
      bname->data[i] = parent->NameInternal->data[i];
    }

    e_st.site = &xb_emlrtRSI;
    m_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
    m_blkSrcLoc.blkIdx = 6;
    RigidBodyTree_addBody(moduleInstance, &e_st, newrobot, body, bname, &(&(&(&(
      &iobj_2[0])[0])[0])[0])[7], &(&(&(&(&iobj_0[0])[0])[0])[0])[6],
                          &(&(&(&(&iobj_1[0])[0])[0])[0])[3], &m_blkSrcLoc);
  }

  if (varargin_2->NumBodies >= 5.0) {
    body = varargin_2->Bodies[4];
    pid = body->ParentIndex;
    if (pid > 0.0) {
      i = (int32_T)emlrtIntegerCheckR2012b(pid, &c_emlrtDCI,
        cgxertPrepareEmlrtTLS(moduleInstance->S, &d_st, moduleInstance->sysIdx,
        6)) - 1;
      parent = varargin_2->Bodies[emlrtDynamicBoundsCheckR2012b(i, 0, 6,
        &c_emlrtBCI, cgxertPrepareEmlrtTLS(moduleInstance->S, &d_st,
        moduleInstance->sysIdx, 6))];
    } else {
      parent = &varargin_2->Base;
    }

    e_st.site = &xb_emlrtRSI;
    i = bname->size[0] * bname->size[1];
    bname->size[0] = 1;
    bname->size[1] = parent->NameInternal->size[1];
    emxEnsureCapacity_char_T(bname, i);
    loop_ub = parent->NameInternal->size[1];
    for (i = 0; i < loop_ub; i++) {
      bname->data[i] = parent->NameInternal->data[i];
    }

    e_st.site = &xb_emlrtRSI;
    o_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
    o_blkSrcLoc.blkIdx = 6;
    RigidBodyTree_addBody(moduleInstance, &e_st, newrobot, body, bname, &(&(&(&(
      &iobj_2[0])[0])[0])[0])[9], &(&(&(&(&iobj_0[0])[0])[0])[0])[8],
                          &(&(&(&(&iobj_1[0])[0])[0])[0])[4], &o_blkSrcLoc);
  }

  if (varargin_2->NumBodies >= 6.0) {
    body = varargin_2->Bodies[5];
    pid = body->ParentIndex;
    if (pid > 0.0) {
      i = (int32_T)emlrtIntegerCheckR2012b(pid, &c_emlrtDCI,
        cgxertPrepareEmlrtTLS(moduleInstance->S, &d_st, moduleInstance->sysIdx,
        6)) - 1;
      parent = varargin_2->Bodies[emlrtDynamicBoundsCheckR2012b(i, 0, 6,
        &c_emlrtBCI, cgxertPrepareEmlrtTLS(moduleInstance->S, &d_st,
        moduleInstance->sysIdx, 6))];
    } else {
      parent = &varargin_2->Base;
    }

    e_st.site = &xb_emlrtRSI;
    i = bname->size[0] * bname->size[1];
    bname->size[0] = 1;
    bname->size[1] = parent->NameInternal->size[1];
    emxEnsureCapacity_char_T(bname, i);
    loop_ub = parent->NameInternal->size[1];
    for (i = 0; i < loop_ub; i++) {
      bname->data[i] = parent->NameInternal->data[i];
    }

    e_st.site = &xb_emlrtRSI;
    q_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
    q_blkSrcLoc.blkIdx = 6;
    RigidBodyTree_addBody(moduleInstance, &e_st, newrobot, body, bname, &(&(&(&(
      &iobj_2[0])[0])[0])[0])[11], &(&(&(&(&iobj_0[0])[0])[0])[0])[10], &(&(&(&(
      &iobj_1[0])[0])[0])[0])[5], &q_blkSrcLoc);
  }

  if (varargin_2->NumBodies >= 7.0) {
    body = varargin_2->Bodies[6];
    pid = body->ParentIndex;
    if (pid > 0.0) {
      i = (int32_T)emlrtIntegerCheckR2012b(pid, &c_emlrtDCI,
        cgxertPrepareEmlrtTLS(moduleInstance->S, &d_st, moduleInstance->sysIdx,
        6)) - 1;
      parent = varargin_2->Bodies[emlrtDynamicBoundsCheckR2012b(i, 0, 6,
        &c_emlrtBCI, cgxertPrepareEmlrtTLS(moduleInstance->S, &d_st,
        moduleInstance->sysIdx, 6))];
    } else {
      parent = &varargin_2->Base;
    }

    e_st.site = &xb_emlrtRSI;
    i = bname->size[0] * bname->size[1];
    bname->size[0] = 1;
    bname->size[1] = parent->NameInternal->size[1];
    emxEnsureCapacity_char_T(bname, i);
    loop_ub = parent->NameInternal->size[1];
    for (i = 0; i < loop_ub; i++) {
      bname->data[i] = parent->NameInternal->data[i];
    }

    e_st.site = &xb_emlrtRSI;
    s_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
    s_blkSrcLoc.blkIdx = 6;
    RigidBodyTree_addBody(moduleInstance, &e_st, newrobot, body, bname, &(&(&(&(
      &iobj_2[0])[0])[0])[0])[13], &(&(&(&(&iobj_0[0])[0])[0])[0])[12], &(&(&(&(
      &iobj_1[0])[0])[0])[0])[6], &s_blkSrcLoc);
  }

  emxFree_char_T(&bname);
  obj->RigidBodyTreeInternal = newrobot;
  c_st.site = &sb_emlrtRSI;
  inverseKinematics_set_SolverAlgorithm(obj, iobj_4);
  c_st.site = &sb_emlrtRSI;
  d_st.site = &c_emlrtRSI;
  c_st.site = &sb_emlrtRSI;
  d_st.site = &ue_emlrtRSI;
  d_st.site = &ve_emlrtRSI;
  b_obj = obj->Solver;
  b_obj->MaxNumIteration = 30.0;
  b_obj->MaxTime = 2.0;
  b_obj->GradientTolerance = 0.0001;
  b_obj->SolutionTolerance = 0.001;
  b_obj->ConstraintsOn = true;
  b_obj->RandomRestart = false;
  b_obj->StepTolerance = 1.0E-6;
}

static robotics_manip_internal_RigidBodyTree_1 *RigidBodyTree_RigidBodyTree
  (InstanceStruct_dnGfh1DX0a11xSfGnyzF5G *moduleInstance, const emlrtStack *sp,
   robotics_manip_internal_RigidBodyTree_1 *obj)
{
  static char_T jname[8] = { 'b', 'a', 's', 'e', '_', 'j', 'n', 't' };

  static char_T cv[5] = { 'f', 'i', 'x', 'e', 'd' };

  static char_T bname[4] = { 'b', 'a', 's', 'e' };

  static int8_T iv[16] = { 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1 };

  static int8_T iv4[14] = { 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1 };

  static int8_T iv1[6] = { 0, 0, 1, 0, 0, 0 };

  static int8_T iv2[6] = { 0, 0, 0, 0, 0, 1 };

  static int8_T iv3[3] = { 0, 0, 1 };

  __m128d r;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack st;
  emxArray_char_T *switch_expression;
  robotics_manip_internal_RigidBodyTree_1 *b_obj;
  real_T poslim_data[12];
  real_T idx[5];
  real_T dv[2];
  real_T dv1[2];
  real_T dv2[2];
  real_T dv3[2];
  int32_T i;
  int32_T loop_ub;
  int8_T msubspace_data[36];
  int8_T b_I[9];
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  b_obj = obj;
  st.site = &y_emlrtRSI;
  b_st.site = &x_emlrtRSI;
  st.site = &cc_emlrtRSI;
  b_st.site = &fb_emlrtRSI;
  c_st.site = &x_emlrtRSI;
  i = b_obj->Base.NameInternal->size[0] * b_obj->Base.NameInternal->size[1];
  b_obj->Base.NameInternal->size[0] = 1;
  b_obj->Base.NameInternal->size[1] = 4;
  emxEnsureCapacity_char_T(b_obj->Base.NameInternal, i);
  for (i = 0; i < 4; i++) {
    b_obj->Base.NameInternal->data[i] = bname[i];
  }

  b_st.site = &gb_emlrtRSI;
  b_obj->_pobj2[0].InTree = false;
  for (i = 0; i < 16; i++) {
    b_obj->_pobj2[0].JointToParentTransform[i] = (real_T)iv[i];
  }

  for (i = 0; i < 16; i++) {
    b_obj->_pobj2[0].ChildToJointTransform[i] = (real_T)iv[i];
  }

  c_st.site = &ib_emlrtRSI;
  i = b_obj->_pobj2[0].NameInternal->size[0] * b_obj->_pobj2[0]
    .NameInternal->size[1];
  b_obj->_pobj2[0].NameInternal->size[0] = 1;
  b_obj->_pobj2[0].NameInternal->size[1] = 8;
  emxEnsureCapacity_char_T(b_obj->_pobj2[0].NameInternal, i);
  for (i = 0; i < 8; i++) {
    b_obj->_pobj2[0].NameInternal->data[i] = jname[i];
  }

  i = b_obj->_pobj2[0].Type->size[0] * b_obj->_pobj2[0].Type->size[1];
  b_obj->_pobj2[0].Type->size[0] = 1;
  b_obj->_pobj2[0].Type->size[1] = 5;
  emxEnsureCapacity_char_T(b_obj->_pobj2[0].Type, i);
  for (i = 0; i < 5; i++) {
    b_obj->_pobj2[0].Type->data[i] = cv[i];
  }

  emxInit_char_T(&switch_expression, 2);
  i = switch_expression->size[0] * switch_expression->size[1];
  switch_expression->size[0] = 1;
  switch_expression->size[1] = b_obj->_pobj2[0].Type->size[1];
  emxEnsureCapacity_char_T(switch_expression, i);
  loop_ub = b_obj->_pobj2[0].Type->size[1];
  for (i = 0; i < loop_ub; i++) {
    switch_expression->data[i] = b_obj->_pobj2[0].Type->data[i];
  }

  if (b_strcmp(switch_expression)) {
    loop_ub = 0;
  } else if (c_strcmp(switch_expression)) {
    loop_ub = 1;
  } else {
    loop_ub = -1;
  }

  emxFree_char_T(&switch_expression);
  switch (loop_ub) {
   case 0:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = iv1[i];
    }

    for (i = 0; i < 2; i++) {
      poslim_data[i] = 6.2831853071795862 * (real_T)i - 3.1415926535897931;
    }

    b_obj->_pobj2[0].VelocityNumber = 1.0;
    b_obj->_pobj2[0].PositionNumber = 1.0;
    for (i = 0; i < 3; i++) {
      b_obj->_pobj2[0].JointAxisInternal[i] = (real_T)iv3[i];
    }
    break;

   case 1:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = iv2[i];
    }

    for (i = 0; i < 2; i++) {
      poslim_data[i] = (real_T)i - 0.5;
    }

    b_obj->_pobj2[0].VelocityNumber = 1.0;
    b_obj->_pobj2[0].PositionNumber = 1.0;
    for (i = 0; i < 3; i++) {
      b_obj->_pobj2[0].JointAxisInternal[i] = (real_T)iv3[i];
    }
    break;

   default:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = 0;
    }

    for (i = 0; i < 2; i++) {
      poslim_data[i] = 0.0;
    }

    b_obj->_pobj2[0].VelocityNumber = 0.0;
    b_obj->_pobj2[0].PositionNumber = 0.0;
    for (i = 0; i < 3; i++) {
      b_obj->_pobj2[0].JointAxisInternal[i] = 0.0;
    }
    break;
  }

  i = b_obj->_pobj2[0].MotionSubspace->size[0] * b_obj->_pobj2[0].
    MotionSubspace->size[1];
  b_obj->_pobj2[0].MotionSubspace->size[0] = 6;
  b_obj->_pobj2[0].MotionSubspace->size[1] = 1;
  emxEnsureCapacity_real_T(b_obj->_pobj2[0].MotionSubspace, i);
  for (i = 0; i < 6; i++) {
    b_obj->_pobj2[0].MotionSubspace->data[i] = (real_T)msubspace_data[i];
  }

  i = b_obj->_pobj2[0].PositionLimitsInternal->size[0] * b_obj->_pobj2[0].
    PositionLimitsInternal->size[1];
  b_obj->_pobj2[0].PositionLimitsInternal->size[0] = 1;
  b_obj->_pobj2[0].PositionLimitsInternal->size[1] = 2;
  emxEnsureCapacity_real_T(b_obj->_pobj2[0].PositionLimitsInternal, i);
  for (i = 0; i < 2; i++) {
    b_obj->_pobj2[0].PositionLimitsInternal->data[i] = poslim_data[i];
  }

  i = b_obj->_pobj2[0].HomePositionInternal->size[0];
  b_obj->_pobj2[0].HomePositionInternal->size[0] = 1;
  emxEnsureCapacity_real_T1(b_obj->_pobj2[0].HomePositionInternal, i);
  for (i = 0; i < 1; i++) {
    b_obj->_pobj2[0].HomePositionInternal->data[0] = 0.0;
  }

  b_obj->Base.JointInternal = &b_obj->_pobj2[0];
  b_obj->Base.Index = -1.0;
  b_obj->Base.ParentIndex = -1.0;
  b_obj->Base.MassInternal = 1.0;
  for (i = 0; i < 3; i++) {
    b_obj->Base.CenterOfMassInternal[i] = 0.0;
  }

  for (i = 0; i < 9; i++) {
    b_I[i] = 0;
  }

  for (loop_ub = 0; loop_ub < 3; loop_ub++) {
    b_I[loop_ub + 3 * loop_ub] = 1;
  }

  for (i = 0; i < 9; i++) {
    b_obj->Base.InertiaInternal[i] = (real_T)b_I[i];
  }

  for (i = 0; i < 36; i++) {
    msubspace_data[i] = 0;
  }

  for (loop_ub = 0; loop_ub < 6; loop_ub++) {
    msubspace_data[loop_ub + 6 * loop_ub] = 1;
  }

  for (i = 0; i < 36; i++) {
    b_obj->Base.SpatialInertia[i] = (real_T)msubspace_data[i];
  }

  b_st.site = &hb_emlrtRSI;
  b_obj->Base.CollisionsInternal = CollisionSet_CollisionSet(moduleInstance,
    &b_st, &b_obj->_pobj1[0], 0.0);
  b_obj->Base.matlabCodegenIsDeleted = false;
  b_obj->Base.Index = 0.0;
  st.site = &bc_emlrtRSI;
  b_st.site = &ec_emlrtRSI;
  c_st.site = &fc_emlrtRSI;
  d_st.site = &gc_emlrtRSI;
  b_rand(moduleInstance, &d_st, idx);
  for (loop_ub = 0; loop_ub <= 2; loop_ub += 2) {
    r = _mm_loadu_pd(&idx[loop_ub]);
    _mm_storeu_pd(&dv[0], _mm_mul_pd(r, _mm_set1_pd(62.0)));
    dv1[0] = muDoubleScalarFloor(dv[0]);
    dv1[1] = muDoubleScalarFloor(dv[1]);
    r = _mm_loadu_pd(&dv1[0]);
    _mm_storeu_pd(&idx[loop_ub], _mm_add_pd(r, _mm_set1_pd(1.0)));
  }

  for (loop_ub = 4; loop_ub < 5; loop_ub++) {
    idx[4] = muDoubleScalarFloor(idx[4] * 62.0) + 1.0;
  }

  for (i = 0; i < 5; i++) {
    loop_ub = (int32_T)emlrtIntegerCheckR2012b(idx[i], &d_emlrtDCI,
      cgxertPrepareEmlrtTLS(moduleInstance->S, &b_st, moduleInstance->sysIdx, 6));
    emlrtDynamicBoundsCheckR2012b(loop_ub, 1, 62, &d_emlrtBCI,
      cgxertPrepareEmlrtTLS(moduleInstance->S, &b_st, moduleInstance->sysIdx, 6));
  }

  st.site = &ac_emlrtRSI;
  b_st.site = &lc_emlrtRSI;
  c_st.site = &x_emlrtRSI;
  st.site = &dc_emlrtRSI;
  b_st.site = &mc_emlrtRSI;
  c_st.site = &eb_emlrtRSI;
  b_obj->Bodies[0] = RigidBody_RigidBody(moduleInstance, &c_st,
    &(&(&b_obj->_pobj0[0])[0])[0], &(&(&b_obj->_pobj1[1])[0])[0],
    &(&(&b_obj->_pobj2[1])[0])[0]);
  c_st.site = &eb_emlrtRSI;
  b_obj->Bodies[1] = b_RigidBody_RigidBody(moduleInstance, &c_st,
    &(&(&b_obj->_pobj0[0])[0])[1], &(&(&b_obj->_pobj1[1])[0])[1],
    &(&(&b_obj->_pobj2[1])[0])[1]);
  c_st.site = &eb_emlrtRSI;
  b_obj->Bodies[2] = c_RigidBody_RigidBody(moduleInstance, &c_st,
    &(&(&b_obj->_pobj0[0])[0])[2], &(&(&b_obj->_pobj1[1])[0])[2],
    &(&(&b_obj->_pobj2[1])[0])[2]);
  c_st.site = &eb_emlrtRSI;
  b_obj->Bodies[3] = d_RigidBody_RigidBody(moduleInstance, &c_st,
    &(&(&b_obj->_pobj0[0])[0])[3], &(&(&b_obj->_pobj1[1])[0])[3],
    &(&(&b_obj->_pobj2[1])[0])[3]);
  c_st.site = &eb_emlrtRSI;
  b_obj->Bodies[4] = e_RigidBody_RigidBody(moduleInstance, &c_st,
    &(&(&b_obj->_pobj0[0])[0])[4], &(&(&b_obj->_pobj1[1])[0])[4],
    &(&(&b_obj->_pobj2[1])[0])[4]);
  c_st.site = &eb_emlrtRSI;
  b_obj->Bodies[5] = f_RigidBody_RigidBody(moduleInstance, &c_st,
    &(&(&b_obj->_pobj0[0])[0])[5], &(&(&b_obj->_pobj1[1])[0])[5],
    &(&(&b_obj->_pobj2[1])[0])[5]);
  c_st.site = &eb_emlrtRSI;
  b_obj->Bodies[6] = g_RigidBody_RigidBody(moduleInstance, &c_st,
    &(&(&b_obj->_pobj0[0])[0])[6], &(&(&b_obj->_pobj1[1])[0])[6],
    &(&(&b_obj->_pobj2[1])[0])[6]);
  b_obj->NumBodies = 0.0;
  b_obj->NumNonFixedBodies = 0.0;
  b_obj->PositionNumber = 0.0;
  b_obj->VelocityNumber = 0.0;
  b_st.site = &nc_emlrtRSI;
  c_st.site = &ec_emlrtRSI;
  d_st.site = &fc_emlrtRSI;
  e_st.site = &gc_emlrtRSI;
  b_rand(moduleInstance, &e_st, idx);
  for (loop_ub = 0; loop_ub <= 2; loop_ub += 2) {
    r = _mm_loadu_pd(&idx[loop_ub]);
    _mm_storeu_pd(&dv2[0], _mm_mul_pd(r, _mm_set1_pd(62.0)));
    dv3[0] = muDoubleScalarFloor(dv2[0]);
    dv3[1] = muDoubleScalarFloor(dv2[1]);
    r = _mm_loadu_pd(&dv3[0]);
    _mm_storeu_pd(&idx[loop_ub], _mm_add_pd(r, _mm_set1_pd(1.0)));
  }

  for (loop_ub = 4; loop_ub < 5; loop_ub++) {
    idx[4] = muDoubleScalarFloor(idx[4] * 62.0) + 1.0;
  }

  for (i = 0; i < 5; i++) {
    loop_ub = (int32_T)emlrtIntegerCheckR2012b(idx[i], &d_emlrtDCI,
      cgxertPrepareEmlrtTLS(moduleInstance->S, &c_st, moduleInstance->sysIdx, 6));
    emlrtDynamicBoundsCheckR2012b(loop_ub, 1, 62, &d_emlrtBCI,
      cgxertPrepareEmlrtTLS(moduleInstance->S, &c_st, moduleInstance->sysIdx, 6));
  }

  for (i = 0; i < 14; i++) {
    b_obj->PositionDoFMap[i] = (real_T)iv4[i];
  }

  for (i = 0; i < 14; i++) {
    b_obj->VelocityDoFMap[i] = (real_T)iv4[i];
  }

  b_obj->matlabCodegenIsDeleted = false;
  return b_obj;
}

static void b_rand(InstanceStruct_dnGfh1DX0a11xSfGnyzF5G *moduleInstance, const
                   emlrtStack *sp, real_T r[5])
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  real_T d;
  int32_T k;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &hc_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  b_st.site = &ic_emlrtRSI;
  for (k = 0; k < 5; k++) {
    c_st.site = &jc_emlrtRSI;
    d = eml_rand_mt19937ar(moduleInstance, &c_st, moduleInstance->c_state);
    r[k] = d;
  }
}

static boolean_T is_valid_state(uint32_T mt[625])
{
  int32_T k;
  boolean_T exitg1;
  boolean_T isvalid;
  if ((mt[624] >= 1U) && (mt[624] < 625U)) {
    isvalid = true;
  } else {
    isvalid = false;
  }

  if (isvalid) {
    isvalid = false;
    k = 0;
    exitg1 = false;
    while ((!exitg1) && (k + 1 < 625)) {
      if (mt[k] == 0U) {
        k++;
      } else {
        isvalid = true;
        exitg1 = true;
      }
    }
  }

  return isvalid;
}

static void c_validateattributes(InstanceStruct_dnGfh1DX0a11xSfGnyzF5G
  *moduleInstance, const emlrtStack *sp, emxArray_char_T *a)
{
  static const int32_T iv[2] = { 1, 43 };

  static const int32_T iv1[2] = { 1, 48 };

  static const int32_T iv2[2] = { 1, 8 };

  static char_T e_u[48] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'V', 'a', 'l', 'i', 'd', 'a', 't', 'e', 'a', 't', 't',
    'r', 'i', 'b', 'u', 't', 'e', 's', 'e', 'x', 'p', 'e', 'c', 't', 'e', 'd',
    'N', 'o', 'n', 'e', 'm', 'p', 't', 'y' };

  static char_T c_u[43] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'f', 'i', 'n',
    'd', 'B', 'o', 'd', 'y', 'I', 'n', 'd', 'e', 'x', 'B', 'y', 'N', 'a', 'm',
    'e', ':', 'e', 'x', 'p', 'e', 'c', 't', 'e', 'd', 'N', 'o', 'n', 'e', 'm',
    'p', 't', 'y' };

  static char_T g_u[8] = { 'b', 'o', 'd', 'y', 'n', 'a', 'm', 'e' };

  cgxertBlkSrcLocInfo b_blkSrcLoc;
  cgxertBlkSrcLocInfo blkSrcLoc;
  cgxertBlkSrcLocInfo c_blkSrcLoc;
  emlrtStack b_st;
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *m;
  const mxArray *y;
  int32_T i;
  char_T d_u[48];
  char_T b_u[43];
  char_T f_u[8];
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &k_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  if (a->size[1] == 0) {
    for (i = 0; i < 43; i++) {
      b_u[i] = c_u[i];
    }

    y = NULL;
    m = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a(cgxertPrepareEmlrtTLS(moduleInstance->S, &st,
      moduleInstance->sysIdx, 6), 43, m, &b_u[0]);
    emlrtAssign(&y, m);
    for (i = 0; i < 48; i++) {
      d_u[i] = e_u[i];
    }

    b_y = NULL;
    m = emlrtCreateCharArray(2, &iv1[0]);
    emlrtInitCharArrayR2013a(cgxertPrepareEmlrtTLS(moduleInstance->S, &st,
      moduleInstance->sysIdx, 6), 48, m, &d_u[0]);
    emlrtAssign(&b_y, m);
    for (i = 0; i < 8; i++) {
      f_u[i] = g_u[i];
    }

    c_y = NULL;
    m = emlrtCreateCharArray(2, &iv2[0]);
    emlrtInitCharArrayR2013a(cgxertPrepareEmlrtTLS(moduleInstance->S, &st,
      moduleInstance->sysIdx, 6), 8, m, &f_u[0]);
    emlrtAssign(&c_y, m);
    b_st.site = &om_emlrtRSI;
    blkSrcLoc.sysIdx = moduleInstance->sysIdx;
    blkSrcLoc.blkIdx = 6;
    b_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
    b_blkSrcLoc.blkIdx = 6;
    c_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
    c_blkSrcLoc.blkIdx = 6;
    b_error(moduleInstance, &b_st, y, getString(moduleInstance, &b_st, message
             (moduleInstance, &b_st, b_y, c_y, &c_emlrtMCI, &blkSrcLoc),
             &c_emlrtMCI, &b_blkSrcLoc), &c_emlrtMCI, &c_blkSrcLoc);
  }
}

static boolean_T d_strcmp(emxArray_char_T *a, emxArray_char_T *b_b)
{
  int32_T exitg1;
  int32_T kstr;
  boolean_T b_bool;
  boolean_T c_b;
  b_bool = false;
  c_b = (a->size[1] == 0);
  if (c_b && (b_b->size[1] == 0)) {
    b_bool = true;
  } else if (a->size[1] != b_b->size[1]) {
  } else {
    kstr = 1;
    do {
      exitg1 = 0;
      if (kstr - 1 <= b_b->size[1] - 1) {
        if (a->data[kstr - 1] != b_b->data[kstr - 1]) {
          exitg1 = 1;
        } else {
          kstr++;
        }
      } else {
        b_bool = true;
        exitg1 = 1;
      }
    } while (exitg1 == 0);
  }

  return b_bool;
}

static robotics_manip_internal_CollisionSet *CollisionSet_copy
  (InstanceStruct_dnGfh1DX0a11xSfGnyzF5G *moduleInstance, const emlrtStack *sp,
   robotics_manip_internal_CollisionSet *obj,
   robotics_manip_internal_CollisionSet *iobj_0)
{
  void* copyGeometryInternal;
  emlrtStack b_st;
  emlrtStack st;
  robotics_manip_internal_CollisionGeometry b_expl_temp;
  robotics_manip_internal_CollisionGeometry expl_temp;
  robotics_manip_internal_CollisionSet *newObj;
  real_T obj_LocalPose[16];
  real_T obj_WorldPose[16];
  real_T d;
  int32_T b_i;
  int32_T i;
  int32_T i1;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &vc_emlrtRSI;
  newObj = CollisionSet_CollisionSet(moduleInstance, &st, iobj_0,
    obj->MaxElements);
  newObj->Size = obj->Size;
  d = obj->Size;
  i = (int32_T)d - 1;
  emlrtForLoopVectorCheckR2021a(1.0, 1.0, d, mxDOUBLE_CLASS, (int32_T)d,
    &c_emlrtRTEI, cgxertPrepareEmlrtTLS(moduleInstance->S, (emlrtConstCTX)sp,
    moduleInstance->sysIdx, 6));
  for (b_i = 0; b_i <= i; b_i++) {
    st.site = &wc_emlrtRSI;
    i1 = obj->CollisionGeometries->size[1] - 1;
    expl_temp = obj->CollisionGeometries->data[emlrtDynamicBoundsCheckR2012b(b_i,
      0, i1, &f_emlrtBCI, cgxertPrepareEmlrtTLS(moduleInstance->S, &st,
      moduleInstance->sysIdx, 6))];
    memcpy(&obj_LocalPose[0], &expl_temp.LocalPose[0], sizeof(real_T) << 4);
    memcpy(&obj_WorldPose[0], &expl_temp.WorldPose[0], sizeof(real_T) << 4);
    b_st.site = &xc_emlrtRSI;
    copyGeometryInternal = collisioncodegen_copyGeometry
      (expl_temp.CollisionPrimitive);
    b_st.site = &yc_emlrtRSI;
    i1 = newObj->CollisionGeometries->size[1] - 1;
    b_expl_temp.CollisionPrimitive = copyGeometryInternal;
    memcpy(&b_expl_temp.LocalPose[0], &obj_LocalPose[0], sizeof(real_T) << 4);
    memcpy(&b_expl_temp.WorldPose[0], &obj_WorldPose[0], sizeof(real_T) << 4);
    newObj->CollisionGeometries->data[emlrtDynamicBoundsCheckR2012b(b_i, 0, i1,
      &e_emlrtBCI, cgxertPrepareEmlrtTLS(moduleInstance->S, (emlrtConstCTX)sp,
      moduleInstance->sysIdx, 6))] = b_expl_temp;
  }

  return newObj;
}

static void RigidBodyTree_addBody(InstanceStruct_dnGfh1DX0a11xSfGnyzF5G
  *moduleInstance, const emlrtStack *sp, robotics_manip_internal_RigidBodyTree_1
  *obj, robotics_manip_internal_RigidBody *bodyin, emxArray_char_T *parentName,
  robotics_manip_internal_CollisionSet *iobj_0, rigidBodyJoint *iobj_1,
  robotics_manip_internal_RigidBody *iobj_2, cgxertBlkSrcLocInfo *blkSrc)
{
  static const int32_T iv[2] = { 1, 51 };

  static const int32_T iv1[2] = { 1, 51 };

  static const int32_T iv2[2] = { 1, 48 };

  static const int32_T iv4[2] = { 1, 48 };

  static const int32_T iv5[2] = { 1, 9 };

  static const int32_T iv6[2] = { 1, 52 };

  static const int32_T iv7[2] = { 1, 52 };

  static char_T j_u[52] = { 'r', 'o', 'b', 'o', 't', 'i', 'c', 's', ':', 'r',
    'o', 'b', 'o', 't', 'm', 'a', 'n', 'i', 'p', ':', 'r', 'i', 'g', 'i', 'd',
    'b', 'o', 'd', 'y', 't', 'r', 'e', 'e', ':', 'J', 'o', 'i', 'n', 't', 'N',
    'a', 'm', 'e', 'C', 'o', 'l', 'l', 'i', 's', 'i', 'o', 'n' };

  static char_T c_u[51] = { 'r', 'o', 'b', 'o', 't', 'i', 'c', 's', ':', 'r',
    'o', 'b', 'o', 't', 'm', 'a', 'n', 'i', 'p', ':', 'r', 'i', 'g', 'i', 'd',
    'b', 'o', 'd', 'y', 't', 'r', 'e', 'e', ':', 'B', 'o', 'd', 'y', 'N', 'a',
    'm', 'e', 'C', 'o', 'l', 'l', 'i', 's', 'i', 'o', 'n' };

  static char_T e_u[48] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'f', 'i', 'n',
    'd', 'B', 'o', 'd', 'y', 'I', 'n', 'd', 'e', 'x', 'B', 'y', 'J', 'o', 'i',
    'n', 't', 'N', 'a', 'm', 'e', ':', 'e', 'x', 'p', 'e', 'c', 't', 'e', 'd',
    'N', 'o', 'n', 'e', 'm', 'p', 't', 'y' };

  static char_T f_u[48] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'V', 'a', 'l', 'i', 'd', 'a', 't', 'e', 'a', 't', 't',
    'r', 'i', 'b', 'u', 't', 'e', 's', 'e', 'x', 'p', 'e', 'c', 't', 'e', 'd',
    'N', 'o', 'n', 'e', 'm', 'p', 't', 'y' };

  static char_T h_u[9] = { 'j', 'o', 'i', 'n', 't', 'n', 'a', 'm', 'e' };

  cgxertBlkSrcLocInfo b_blkSrcLoc;
  cgxertBlkSrcLocInfo blkSrcLoc;
  cgxertBlkSrcLocInfo c_blkSrcLoc;
  cgxertBlkSrcLocInfo d_blkSrcLoc;
  cgxertBlkSrcLocInfo e_blkSrcLoc;
  cgxertBlkSrcLocInfo f_blkSrcLoc;
  cgxertBlkSrcLocInfo g_blkSrcLoc;
  cgxertBlkSrcLocInfo h_blkSrcLoc;
  cgxertBlkSrcLocInfo i_blkSrcLoc;
  cgxertBlkSrcLocInfo j_blkSrcLoc;
  cgxertBlkSrcLocInfo k_blkSrcLoc;
  cgxertBlkSrcLocInfo l_blkSrcLoc;
  cgxertBlkSrcLocInfo m_blkSrcLoc;
  cgxertBlkSrcLocInfo n_blkSrcLoc;
  cgxertBlkSrcLocInfo o_blkSrcLoc;
  cgxertBlkSrcLocInfo p_blkSrcLoc;
  cgxertBlkSrcLocInfo q_blkSrcLoc;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  emxArray_char_T *bname;
  emxArray_char_T *nm;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *d_y;
  const mxArray *e_y;
  const mxArray *f_y;
  const mxArray *g_y;
  const mxArray *h_y;
  const mxArray *i_y;
  const mxArray *m;
  const mxArray *y;
  rigidBodyJoint *jnt;
  robotics_manip_internal_RigidBody *body;
  real_T bid;
  real_T pid;
  int32_T iv3[2];
  int32_T b_i;
  int32_T bid2;
  int32_T i;
  int32_T loop_ub;
  char_T i_u[52];
  char_T b_u[51];
  char_T d_u[48];
  char_T g_u[9];
  boolean_T exitg1;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  emxInit_char_T(&bname, 2);
  st.site = &bd_emlrtRSI;
  i = bname->size[0] * bname->size[1];
  bname->size[0] = 1;
  bname->size[1] = bodyin->NameInternal->size[1];
  emxEnsureCapacity_char_T(bname, i);
  loop_ub = bodyin->NameInternal->size[1];
  for (i = 0; i < loop_ub; i++) {
    bname->data[i] = bodyin->NameInternal->data[i];
  }

  st.site = &bd_emlrtRSI;
  bid = RigidBodyTree_findBodyIndexByName(moduleInstance, &st, obj, bname);
  if (bid > -1.0) {
    st.site = &cd_emlrtRSI;
    i = bname->size[0] * bname->size[1];
    bname->size[0] = 1;
    bname->size[1] = bodyin->NameInternal->size[1];
    emxEnsureCapacity_char_T(bname, i);
    loop_ub = bodyin->NameInternal->size[1];
    for (i = 0; i < loop_ub; i++) {
      bname->data[i] = bodyin->NameInternal->data[i];
    }

    st.site = &cd_emlrtRSI;
    for (i = 0; i < 51; i++) {
      b_u[i] = c_u[i];
    }

    y = NULL;
    m = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a(cgxertPrepareEmlrtTLS(moduleInstance->S, &st,
      moduleInstance->sysIdx, 6), 51, m, &b_u[0]);
    emlrtAssign(&y, m);
    for (i = 0; i < 51; i++) {
      b_u[i] = c_u[i];
    }

    b_y = NULL;
    m = emlrtCreateCharArray(2, &iv1[0]);
    emlrtInitCharArrayR2013a(cgxertPrepareEmlrtTLS(moduleInstance->S, &st,
      moduleInstance->sysIdx, 6), 51, m, &b_u[0]);
    emlrtAssign(&b_y, m);
    d_y = NULL;
    for (i = 0; i < 2; i++) {
      iv3[i] = bname->size[i];
    }

    m = emlrtCreateCharArray(2, &iv3[0]);
    emlrtInitCharArrayR2013a(cgxertPrepareEmlrtTLS(moduleInstance->S, &st,
      moduleInstance->sysIdx, 6), bname->size[1], m, &bname->data[0]);
    emlrtAssign(&d_y, m);
    b_st.site = &mm_emlrtRSI;
    b_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
    b_blkSrcLoc.blkIdx = 6;
    e_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
    e_blkSrcLoc.blkIdx = 6;
    f_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
    f_blkSrcLoc.blkIdx = 6;
    b_error(moduleInstance, &b_st, y, getString(moduleInstance, &b_st, message
             (moduleInstance, &b_st, b_y, d_y, &e_emlrtMCI, &b_blkSrcLoc),
             &e_emlrtMCI, &e_blkSrcLoc), &e_emlrtMCI, &f_blkSrcLoc);
  }

  st.site = &dd_emlrtRSI;
  pid = RigidBodyTree_validateInputBodyName(moduleInstance, &st, obj, parentName);
  st.site = &ed_emlrtRSI;
  if (bodyin->Index == 0.0) {
    b_st.site = &od_emlrtRSI;
    blkSrcLoc.sysIdx = moduleInstance->sysIdx;
    blkSrcLoc.blkIdx = 6;
    error(moduleInstance, &b_st, &blkSrcLoc);
  }

  jnt = bodyin->JointInternal;
  st.site = &ed_emlrtRSI;
  i = bname->size[0] * bname->size[1];
  bname->size[0] = 1;
  bname->size[1] = jnt->NameInternal->size[1];
  emxEnsureCapacity_char_T(bname, i);
  loop_ub = jnt->NameInternal->size[1];
  for (i = 0; i < loop_ub; i++) {
    bname->data[i] = jnt->NameInternal->data[i];
  }

  st.site = &ed_emlrtRSI;
  bid2 = -2;
  b_st.site = &pd_emlrtRSI;
  c_st.site = &k_emlrtRSI;
  if (bname->size[1] == 0) {
    for (i = 0; i < 48; i++) {
      d_u[i] = e_u[i];
    }

    c_y = NULL;
    m = emlrtCreateCharArray(2, &iv2[0]);
    emlrtInitCharArrayR2013a(cgxertPrepareEmlrtTLS(moduleInstance->S, &c_st,
      moduleInstance->sysIdx, 6), 48, m, &d_u[0]);
    emlrtAssign(&c_y, m);
    for (i = 0; i < 48; i++) {
      d_u[i] = f_u[i];
    }

    e_y = NULL;
    m = emlrtCreateCharArray(2, &iv4[0]);
    emlrtInitCharArrayR2013a(cgxertPrepareEmlrtTLS(moduleInstance->S, &c_st,
      moduleInstance->sysIdx, 6), 48, m, &d_u[0]);
    emlrtAssign(&e_y, m);
    for (i = 0; i < 9; i++) {
      g_u[i] = h_u[i];
    }

    f_y = NULL;
    m = emlrtCreateCharArray(2, &iv5[0]);
    emlrtInitCharArrayR2013a(cgxertPrepareEmlrtTLS(moduleInstance->S, &c_st,
      moduleInstance->sysIdx, 6), 9, m, &g_u[0]);
    emlrtAssign(&f_y, m);
    d_st.site = &om_emlrtRSI;
    g_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
    g_blkSrcLoc.blkIdx = 6;
    h_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
    h_blkSrcLoc.blkIdx = 6;
    i_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
    i_blkSrcLoc.blkIdx = 6;
    b_error(moduleInstance, &d_st, c_y, getString(moduleInstance, &d_st, message
             (moduleInstance, &d_st, e_y, f_y, &c_emlrtMCI, &g_blkSrcLoc),
             &c_emlrtMCI, &h_blkSrcLoc), &c_emlrtMCI, &i_blkSrcLoc);
  }

  bid = obj->NumBodies;
  emlrtForLoopVectorCheckR2021a(1.0, 1.0, bid, mxDOUBLE_CLASS, (int32_T)bid,
    &d_emlrtRTEI, cgxertPrepareEmlrtTLS(moduleInstance->S, &st,
    moduleInstance->sysIdx, 6));
  b_i = 0;
  emxInit_char_T(&nm, 2);
  exitg1 = false;
  while ((!exitg1) && (b_i <= (int32_T)bid - 1)) {
    b_st.site = &qd_emlrtRSI;
    body = obj->Bodies[emlrtDynamicBoundsCheckR2012b(b_i, 0, 6, &n_emlrtBCI,
      cgxertPrepareEmlrtTLS(moduleInstance->S, &b_st, moduleInstance->sysIdx, 6))];
    if (body->Index == 0.0) {
      c_st.site = &od_emlrtRSI;
      c_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
      c_blkSrcLoc.blkIdx = 6;
      error(moduleInstance, &c_st, &c_blkSrcLoc);
    }

    jnt = body->JointInternal;
    b_st.site = &qd_emlrtRSI;
    i = nm->size[0] * nm->size[1];
    nm->size[0] = 1;
    nm->size[1] = jnt->NameInternal->size[1];
    emxEnsureCapacity_char_T(nm, i);
    loop_ub = jnt->NameInternal->size[1];
    for (i = 0; i < loop_ub; i++) {
      nm->data[i] = jnt->NameInternal->data[i];
    }

    if (d_strcmp(nm, bname)) {
      bid2 = b_i;
      exitg1 = true;
    } else {
      b_i++;
    }
  }

  emxFree_char_T(&nm);
  if (bid2 + 1 > 0) {
    st.site = &fd_emlrtRSI;
    if (bodyin->Index == 0.0) {
      b_st.site = &od_emlrtRSI;
      d_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
      d_blkSrcLoc.blkIdx = 6;
      error(moduleInstance, &b_st, &d_blkSrcLoc);
    }

    jnt = bodyin->JointInternal;
    st.site = &fd_emlrtRSI;
    i = bname->size[0] * bname->size[1];
    bname->size[0] = 1;
    bname->size[1] = jnt->NameInternal->size[1];
    emxEnsureCapacity_char_T(bname, i);
    loop_ub = jnt->NameInternal->size[1];
    for (i = 0; i < loop_ub; i++) {
      bname->data[i] = jnt->NameInternal->data[i];
    }

    st.site = &fd_emlrtRSI;
    for (i = 0; i < 52; i++) {
      i_u[i] = j_u[i];
    }

    g_y = NULL;
    m = emlrtCreateCharArray(2, &iv6[0]);
    emlrtInitCharArrayR2013a(cgxertPrepareEmlrtTLS(moduleInstance->S, &st,
      moduleInstance->sysIdx, 6), 52, m, &i_u[0]);
    emlrtAssign(&g_y, m);
    for (i = 0; i < 52; i++) {
      i_u[i] = j_u[i];
    }

    h_y = NULL;
    m = emlrtCreateCharArray(2, &iv7[0]);
    emlrtInitCharArrayR2013a(cgxertPrepareEmlrtTLS(moduleInstance->S, &st,
      moduleInstance->sysIdx, 6), 52, m, &i_u[0]);
    emlrtAssign(&h_y, m);
    i_y = NULL;
    for (i = 0; i < 2; i++) {
      iv3[i] = bname->size[i];
    }

    m = emlrtCreateCharArray(2, &iv3[0]);
    emlrtInitCharArrayR2013a(cgxertPrepareEmlrtTLS(moduleInstance->S, &st,
      moduleInstance->sysIdx, 6), bname->size[1], m, &bname->data[0]);
    emlrtAssign(&i_y, m);
    b_st.site = &mm_emlrtRSI;
    n_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
    n_blkSrcLoc.blkIdx = 6;
    p_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
    p_blkSrcLoc.blkIdx = 6;
    q_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
    q_blkSrcLoc.blkIdx = 6;
    b_error(moduleInstance, &b_st, g_y, getString(moduleInstance, &b_st, message
             (moduleInstance, &b_st, h_y, i_y, &e_emlrtMCI, &n_blkSrcLoc),
             &e_emlrtMCI, &p_blkSrcLoc), &e_emlrtMCI, &q_blkSrcLoc);
  }

  emxFree_char_T(&bname);
  bid = obj->NumBodies + 1.0;
  st.site = &ld_emlrtRSI;
  body = RigidBody_copy(moduleInstance, &st, bodyin, &iobj_0[0], &iobj_1[0],
                        iobj_2);
  i = (int32_T)emlrtIntegerCheckR2012b(bid, &e_emlrtDCI, cgxertPrepareEmlrtTLS
    (moduleInstance->S, (emlrtConstCTX)sp, moduleInstance->sysIdx, 6)) - 1;
  obj->Bodies[emlrtDynamicBoundsCheckR2012b(i, 0, 6, &l_emlrtBCI,
    cgxertPrepareEmlrtTLS(moduleInstance->S, (emlrtConstCTX)sp,
    moduleInstance->sysIdx, 6))] = body;
  body->Index = bid;
  body->ParentIndex = pid;
  if (pid > 0.0) {
    emlrtDynamicBoundsCheckR2012b((int32_T)pid - 1, 0, 6, &m_emlrtBCI,
      cgxertPrepareEmlrtTLS(moduleInstance->S, (emlrtConstCTX)sp,
      moduleInstance->sysIdx, 6));
  }

  i = (int32_T)emlrtIntegerCheckR2012b(body->Index, &f_emlrtDCI,
    cgxertPrepareEmlrtTLS(moduleInstance->S, (emlrtConstCTX)sp,
    moduleInstance->sysIdx, 6));
  emlrtDynamicBoundsCheckR2012b(i, 1, 7, &g_emlrtBCI, cgxertPrepareEmlrtTLS
    (moduleInstance->S, (emlrtConstCTX)sp, blkSrc->sysIdx, blkSrc->blkIdx));
  body->JointInternal->InTree = true;
  obj->NumBodies++;
  st.site = &gd_emlrtRSI;
  if (body->Index == 0.0) {
    b_st.site = &od_emlrtRSI;
    j_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
    j_blkSrcLoc.blkIdx = 6;
    error(moduleInstance, &b_st, &j_blkSrcLoc);
  }

  jnt = body->JointInternal;
  if (!e_strcmp(jnt->Type)) {
    obj->NumNonFixedBodies++;
    st.site = &hd_emlrtRSI;
    if (body->Index == 0.0) {
      b_st.site = &od_emlrtRSI;
      k_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
      k_blkSrcLoc.blkIdx = 6;
      error(moduleInstance, &b_st, &k_blkSrcLoc);
    }

    jnt = body->JointInternal;
    i = (int32_T)emlrtIntegerCheckR2012b(body->Index, &g_emlrtDCI,
      cgxertPrepareEmlrtTLS(moduleInstance->S, (emlrtConstCTX)sp,
      moduleInstance->sysIdx, 6));
    loop_ub = emlrtDynamicBoundsCheckR2012b(i, 1, 7, &h_emlrtBCI,
      cgxertPrepareEmlrtTLS(moduleInstance->S, (emlrtConstCTX)sp, blkSrc->sysIdx,
      blkSrc->blkIdx)) - 1;
    obj->PositionDoFMap[loop_ub] = obj->PositionNumber + 1.0;
    obj->PositionDoFMap[loop_ub + 7] = obj->PositionNumber + jnt->PositionNumber;
    st.site = &id_emlrtRSI;
    if (body->Index == 0.0) {
      b_st.site = &od_emlrtRSI;
      m_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
      m_blkSrcLoc.blkIdx = 6;
      error(moduleInstance, &b_st, &m_blkSrcLoc);
    }

    jnt = body->JointInternal;
    i = (int32_T)emlrtIntegerCheckR2012b(body->Index, &h_emlrtDCI,
      cgxertPrepareEmlrtTLS(moduleInstance->S, (emlrtConstCTX)sp,
      moduleInstance->sysIdx, 6));
    loop_ub = emlrtDynamicBoundsCheckR2012b(i, 1, 7, &i_emlrtBCI,
      cgxertPrepareEmlrtTLS(moduleInstance->S, (emlrtConstCTX)sp, blkSrc->sysIdx,
      blkSrc->blkIdx)) - 1;
    obj->VelocityDoFMap[loop_ub] = obj->VelocityNumber + 1.0;
    obj->VelocityDoFMap[loop_ub + 7] = obj->VelocityNumber + jnt->VelocityNumber;
  } else {
    i = (int32_T)emlrtIntegerCheckR2012b(body->Index, &i_emlrtDCI,
      cgxertPrepareEmlrtTLS(moduleInstance->S, (emlrtConstCTX)sp,
      moduleInstance->sysIdx, 6));
    loop_ub = emlrtDynamicBoundsCheckR2012b(i, 1, 7, &j_emlrtBCI,
      cgxertPrepareEmlrtTLS(moduleInstance->S, (emlrtConstCTX)sp, blkSrc->sysIdx,
      blkSrc->blkIdx));
    for (i = 0; i < 2; i++) {
      obj->PositionDoFMap[(loop_ub + 7 * i) - 1] = 0.0 - (real_T)i;
    }

    i = (int32_T)emlrtIntegerCheckR2012b(body->Index, &j_emlrtDCI,
      cgxertPrepareEmlrtTLS(moduleInstance->S, (emlrtConstCTX)sp,
      moduleInstance->sysIdx, 6));
    loop_ub = emlrtDynamicBoundsCheckR2012b(i, 1, 7, &k_emlrtBCI,
      cgxertPrepareEmlrtTLS(moduleInstance->S, (emlrtConstCTX)sp, blkSrc->sysIdx,
      blkSrc->blkIdx));
    for (i = 0; i < 2; i++) {
      obj->VelocityDoFMap[(loop_ub + 7 * i) - 1] = 0.0 - (real_T)i;
    }
  }

  st.site = &jd_emlrtRSI;
  if (body->Index == 0.0) {
    b_st.site = &od_emlrtRSI;
    l_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
    l_blkSrcLoc.blkIdx = 6;
    error(moduleInstance, &b_st, &l_blkSrcLoc);
  }

  jnt = body->JointInternal;
  obj->PositionNumber += jnt->PositionNumber;
  st.site = &kd_emlrtRSI;
  if (body->Index == 0.0) {
    b_st.site = &od_emlrtRSI;
    o_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
    o_blkSrcLoc.blkIdx = 6;
    error(moduleInstance, &b_st, &o_blkSrcLoc);
  }

  jnt = body->JointInternal;
  obj->VelocityNumber += jnt->VelocityNumber;
}

static real_T RigidBodyTree_findBodyIndexByName
  (InstanceStruct_dnGfh1DX0a11xSfGnyzF5G *moduleInstance, const emlrtStack *sp,
   robotics_manip_internal_RigidBodyTree_1 *obj, emxArray_char_T *bodyname)
{
  emlrtStack st;
  emxArray_char_T *bname;
  robotics_manip_internal_RigidBody *b_obj;
  real_T bid;
  real_T d;
  int32_T b_i;
  int32_T i;
  int32_T loop_ub;
  boolean_T exitg1;
  st.prev = sp;
  st.tls = sp->tls;
  bid = -1.0;
  i = bodyname->size[0] * bodyname->size[1];
  bodyname->size[0] = 1;
  emxEnsureCapacity_char_T(bodyname, i);
  st.site = &sc_emlrtRSI;
  c_validateattributes(moduleInstance, &st, bodyname);
  emxInit_char_T(&bname, 2);
  st.site = &tc_emlrtRSI;
  i = bname->size[0] * bname->size[1];
  bname->size[0] = 1;
  bname->size[1] = obj->Base.NameInternal->size[1];
  emxEnsureCapacity_char_T(bname, i);
  loop_ub = obj->Base.NameInternal->size[1];
  for (i = 0; i < loop_ub; i++) {
    bname->data[i] = obj->Base.NameInternal->data[i];
  }

  if (d_strcmp(bname, bodyname)) {
    bid = 0.0;
  } else {
    d = obj->NumBodies;
    emlrtForLoopVectorCheckR2021a(1.0, 1.0, d, mxDOUBLE_CLASS, (int32_T)d,
      &b_emlrtRTEI, cgxertPrepareEmlrtTLS(moduleInstance->S, (emlrtConstCTX)sp,
      moduleInstance->sysIdx, 6));
    b_i = 0;
    exitg1 = false;
    while ((!exitg1) && (b_i <= (int32_T)d - 1)) {
      st.site = &uc_emlrtRSI;
      b_obj = obj->Bodies[emlrtDynamicBoundsCheckR2012b(b_i, 0, 6, &b_emlrtBCI,
        cgxertPrepareEmlrtTLS(moduleInstance->S, &st, moduleInstance->sysIdx, 6))];
      i = bname->size[0] * bname->size[1];
      bname->size[0] = 1;
      bname->size[1] = b_obj->NameInternal->size[1];
      emxEnsureCapacity_char_T(bname, i);
      loop_ub = b_obj->NameInternal->size[1];
      for (i = 0; i < loop_ub; i++) {
        bname->data[i] = b_obj->NameInternal->data[i];
      }

      if (d_strcmp(bname, bodyname)) {
        bid = (real_T)b_i + 1.0;
        exitg1 = true;
      } else {
        b_i++;
      }
    }
  }

  emxFree_char_T(&bname);
  return bid;
}

static real_T RigidBodyTree_validateInputBodyName
  (InstanceStruct_dnGfh1DX0a11xSfGnyzF5G *moduleInstance, const emlrtStack *sp,
   robotics_manip_internal_RigidBodyTree_1 *obj, emxArray_char_T *bodyname)
{
  static const int32_T iv[2] = { 1, 46 };

  static const int32_T iv1[2] = { 1, 46 };

  static char_T c_u[46] = { 'r', 'o', 'b', 'o', 't', 'i', 'c', 's', ':', 'r',
    'o', 'b', 'o', 't', 'm', 'a', 'n', 'i', 'p', ':', 'r', 'i', 'g', 'i', 'd',
    'b', 'o', 'd', 'y', 't', 'r', 'e', 'e', ':', 'B', 'o', 'd', 'y', 'N', 'o',
    't', 'F', 'o', 'u', 'n', 'd' };

  cgxertBlkSrcLocInfo b_blkSrcLoc;
  cgxertBlkSrcLocInfo blkSrcLoc;
  cgxertBlkSrcLocInfo c_blkSrcLoc;
  emlrtStack b_st;
  emlrtStack st;
  emxArray_char_T *b_bodyname;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *m;
  const mxArray *y;
  real_T bid;
  int32_T iv2[2];
  int32_T loop_ub;
  char_T b_u[46];
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emxInit_char_T(&b_bodyname, 2);
  loop_ub = b_bodyname->size[0] * b_bodyname->size[1];
  b_bodyname->size[0] = 1;
  b_bodyname->size[1] = bodyname->size[1];
  emxEnsureCapacity_char_T(b_bodyname, loop_ub);
  loop_ub = bodyname->size[1];
  if (loop_ub - 1 >= 0) {
    memcpy(&b_bodyname->data[0], &bodyname->data[0], (uint32_T)loop_ub * sizeof
           (char_T));
  }

  st.site = &md_emlrtRSI;
  bid = RigidBodyTree_findBodyIndexByName(moduleInstance, &st, obj, b_bodyname);
  emxFree_char_T(&b_bodyname);
  if (bid == -1.0) {
    st.site = &nd_emlrtRSI;
    for (loop_ub = 0; loop_ub < 46; loop_ub++) {
      b_u[loop_ub] = c_u[loop_ub];
    }

    y = NULL;
    m = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a(cgxertPrepareEmlrtTLS(moduleInstance->S, &st,
      moduleInstance->sysIdx, 6), 46, m, &b_u[0]);
    emlrtAssign(&y, m);
    for (loop_ub = 0; loop_ub < 46; loop_ub++) {
      b_u[loop_ub] = c_u[loop_ub];
    }

    b_y = NULL;
    m = emlrtCreateCharArray(2, &iv1[0]);
    emlrtInitCharArrayR2013a(cgxertPrepareEmlrtTLS(moduleInstance->S, &st,
      moduleInstance->sysIdx, 6), 46, m, &b_u[0]);
    emlrtAssign(&b_y, m);
    c_y = NULL;
    for (loop_ub = 0; loop_ub < 2; loop_ub++) {
      iv2[loop_ub] = bodyname->size[loop_ub];
    }

    m = emlrtCreateCharArray(2, &iv2[0]);
    emlrtInitCharArrayR2013a(cgxertPrepareEmlrtTLS(moduleInstance->S, &st,
      moduleInstance->sysIdx, 6), bodyname->size[1], m, &bodyname->data[0]);
    emlrtAssign(&c_y, m);
    b_st.site = &mm_emlrtRSI;
    blkSrcLoc.sysIdx = moduleInstance->sysIdx;
    blkSrcLoc.blkIdx = 6;
    b_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
    b_blkSrcLoc.blkIdx = 6;
    c_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
    c_blkSrcLoc.blkIdx = 6;
    b_error(moduleInstance, &b_st, y, getString(moduleInstance, &b_st, message
             (moduleInstance, &b_st, b_y, c_y, &e_emlrtMCI, &blkSrcLoc),
             &e_emlrtMCI, &b_blkSrcLoc), &e_emlrtMCI, &c_blkSrcLoc);
  }

  return bid;
}

static void error(InstanceStruct_dnGfh1DX0a11xSfGnyzF5G *moduleInstance, const
                  emlrtStack *sp, cgxertBlkSrcLocInfo *blkSrc)
{
  static const int32_T iv[2] = { 1, 51 };

  static const int32_T iv1[2] = { 1, 51 };

  static const int32_T iv2[2] = { 1, 5 };

  static char_T c_u[51] = { 'r', 'o', 'b', 'o', 't', 'i', 'c', 's', ':', 'r',
    'o', 'b', 'o', 't', 'm', 'a', 'n', 'i', 'p', ':', 'r', 'i', 'g', 'i', 'd',
    'b', 'o', 'd', 'y', ':', 'N', 'o', 'S', 'u', 'c', 'h', 'P', 'r', 'o', 'p',
    'e', 'r', 't', 'y', 'F', 'o', 'r', 'B', 'a', 's', 'e' };

  static char_T e_u[5] = { 'J', 'o', 'i', 'n', 't' };

  cgxertBlkSrcLocInfo b_blkSrcLoc;
  cgxertBlkSrcLocInfo blkSrcLoc;
  cgxertBlkSrcLocInfo c_blkSrcLoc;
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *m;
  const mxArray *y;
  int32_T i;
  char_T b_u[51];
  char_T d_u[5];
  st.prev = sp;
  st.tls = sp->tls;
  for (i = 0; i < 51; i++) {
    b_u[i] = c_u[i];
  }

  y = NULL;
  m = emlrtCreateCharArray(2, &iv[0]);
  emlrtInitCharArrayR2013a(cgxertPrepareEmlrtTLS(moduleInstance->S,
    (emlrtConstCTX)sp, blkSrc->sysIdx, blkSrc->blkIdx), 51, m, &b_u[0]);
  emlrtAssign(&y, m);
  for (i = 0; i < 51; i++) {
    b_u[i] = c_u[i];
  }

  b_y = NULL;
  m = emlrtCreateCharArray(2, &iv1[0]);
  emlrtInitCharArrayR2013a(cgxertPrepareEmlrtTLS(moduleInstance->S,
    (emlrtConstCTX)sp, blkSrc->sysIdx, blkSrc->blkIdx), 51, m, &b_u[0]);
  emlrtAssign(&b_y, m);
  for (i = 0; i < 5; i++) {
    d_u[i] = e_u[i];
  }

  c_y = NULL;
  m = emlrtCreateCharArray(2, &iv2[0]);
  emlrtInitCharArrayR2013a(cgxertPrepareEmlrtTLS(moduleInstance->S,
    (emlrtConstCTX)sp, blkSrc->sysIdx, blkSrc->blkIdx), 5, m, &d_u[0]);
  emlrtAssign(&c_y, m);
  st.site = &mm_emlrtRSI;
  blkSrcLoc.sysIdx = moduleInstance->sysIdx;
  blkSrcLoc.blkIdx = 6;
  b_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
  b_blkSrcLoc.blkIdx = 6;
  c_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
  c_blkSrcLoc.blkIdx = 6;
  b_error(moduleInstance, &st, y, getString(moduleInstance, &st, message
           (moduleInstance, &st, b_y, c_y, &e_emlrtMCI, &blkSrcLoc), &e_emlrtMCI,
           &b_blkSrcLoc), &e_emlrtMCI, &c_blkSrcLoc);
}

static robotics_manip_internal_RigidBody *RigidBody_copy
  (InstanceStruct_dnGfh1DX0a11xSfGnyzF5G *moduleInstance, const emlrtStack *sp,
   robotics_manip_internal_RigidBody *obj, robotics_manip_internal_CollisionSet *
   iobj_0, rigidBodyJoint *iobj_1, robotics_manip_internal_RigidBody *iobj_2)
{
  static const int32_T iv[2] = { 1, 33 };

  static const int32_T iv1[2] = { 1, 48 };

  static const int32_T iv10[2] = { 1, 32 };

  static const int32_T iv13[2] = { 1, 32 };

  static const int32_T iv15[2] = { 1, 38 };

  static const int32_T iv16[2] = { 1, 48 };

  static const int32_T iv17[2] = { 1, 4 };

  static const int32_T iv2[2] = { 1, 5 };

  static const int32_T iv4[2] = { 1, 43 };

  static const int32_T iv5[2] = { 1, 46 };

  static const int32_T iv6[2] = { 1, 49 };

  static const int32_T iv7[2] = { 1, 52 };

  static const int32_T iv8[2] = { 1, 5 };

  static const int32_T iv9[2] = { 1, 5 };

  static char_T o_u[52] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'V', 'a', 'l', 'i', 'd', 'a', 't', 'e', 's', 't', 'r',
    'i', 'n', 'g', 'U', 'n', 'r', 'e', 'c', 'o', 'g', 'n', 'i', 'z', 'e', 'd',
    'S', 't', 'r', 'i', 'n', 'g', 'C', 'h', 'o', 'i', 'c', 'e' };

  static char_T m_u[49] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'V', 'a', 'l', 'i', 'd', 'a', 't', 'e', 's', 't', 'r',
    'i', 'n', 'g', 'A', 'm', 'b', 'i', 'g', 'u', 'o', 'u', 's', 'S', 't', 'r',
    'i', 'n', 'g', 'C', 'h', 'o', 'i', 'c', 'e' };

  static char_T e_u[48] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'V', 'a', 'l', 'i', 'd', 'a', 't', 'e', 'a', 't', 't',
    'r', 'i', 'b', 'u', 't', 'e', 's', 'e', 'x', 'p', 'e', 'c', 't', 'e', 'd',
    'N', 'o', 'n', 'e', 'm', 'p', 't', 'y' };

  static char_T l_u[46] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'r', 'i', 'g',
    'i', 'd', 'B', 'o', 'd', 'y', 'J', 'o', 'i', 'n', 't', ':', 'u', 'n', 'r',
    'e', 'c', 'o', 'g', 'n', 'i', 'z', 'e', 'd', 'S', 't', 'r', 'i', 'n', 'g',
    'C', 'h', 'o', 'i', 'c', 'e' };

  static char_T i_u[43] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'r', 'i', 'g',
    'i', 'd', 'B', 'o', 'd', 'y', 'J', 'o', 'i', 'n', 't', ':', 'a', 'm', 'b',
    'i', 'g', 'u', 'o', 'u', 's', 'S', 't', 'r', 'i', 'n', 'g', 'C', 'h', 'o',
    'i', 'c', 'e' };

  static char_T t_u[38] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'r', 'i', 'g',
    'i', 'd', 'B', 'o', 'd', 'y', 'J', 'o', 'i', 'n', 't', ':', 'e', 'x', 'p',
    'e', 'c', 't', 'e', 'd', 'N', 'o', 'n', 'e', 'm', 'p', 't', 'y' };

  static char_T c_u[33] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'r', 'i', 'g',
    'i', 'd', 'B', 'o', 'd', 'y', ':', 'e', 'x', 'p', 'e', 'c', 't', 'e', 'd',
    'N', 'o', 'n', 'e', 'm', 'p', 't', 'y' };

  static char_T r_u[32] = { '\'', 'r', 'e', 'v', 'o', 'l', 'u', 't', 'e', '\'',
    ',', ' ', '\'', 'p', 'r', 'i', 's', 'm', 'a', 't', 'i', 'c', '\'', ',', ' ',
    '\'', 'f', 'i', 'x', 'e', 'd', '\'' };

  static char_T g_u[5] = { 'b', 'n', 'a', 'm', 'e' };

  static char_T p_u[5] = { 'j', 't', 'y', 'p', 'e' };

  static char_T cv[4] = { '_', 'j', 'n', 't' };

  static char_T v_u[4] = { 'N', 'a', 'm', 'e' };

  static char_T cv1[3] = { ',', ' ', '\'' };

  static char_T cv2[2] = { '\'', ',' };

  static int8_T iv3[16] = { 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1 };

  static int8_T iv11[6] = { 0, 0, 1, 0, 0, 0 };

  static int8_T iv12[6] = { 0, 0, 0, 0, 0, 1 };

  static int8_T iv14[3] = { 0, 0, 1 };

  cgxertBlkSrcLocInfo b_blkSrcLoc;
  cgxertBlkSrcLocInfo blkSrcLoc;
  cgxertBlkSrcLocInfo c_blkSrcLoc;
  cgxertBlkSrcLocInfo d_blkSrcLoc;
  cgxertBlkSrcLocInfo e_blkSrcLoc;
  cgxertBlkSrcLocInfo f_blkSrcLoc;
  cgxertBlkSrcLocInfo g_blkSrcLoc;
  cgxertBlkSrcLocInfo h_blkSrcLoc;
  cgxertBlkSrcLocInfo i_blkSrcLoc;
  cgxertBlkSrcLocInfo j_blkSrcLoc;
  cgxertBlkSrcLocInfo k_blkSrcLoc;
  cgxertBlkSrcLocInfo l_blkSrcLoc;
  cgxertBlkSrcLocInfo m_blkSrcLoc;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack st;
  emxArray_char_T *b_jname;
  emxArray_char_T *jname;
  emxArray_char_T *jtype;
  emxArray_real_T *c_obj;
  emxArray_real_T *d_obj;
  emxArray_real_T *f_obj;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *d_y;
  const mxArray *e_y;
  const mxArray *f_y;
  const mxArray *g_y;
  const mxArray *h_y;
  const mxArray *i_y;
  const mxArray *j_y;
  const mxArray *k_y;
  const mxArray *l_y;
  const mxArray *m;
  const mxArray *m_y;
  const mxArray *n_y;
  const mxArray *o_y;
  const mxArray *p_y;
  const mxArray *y;
  rigidBodyJoint *b_obj;
  robotics_manip_internal_RigidBody *newbody;
  real_T i_obj[36];
  real_T g_obj[16];
  real_T poslim_data[12];
  real_T h_obj[9];
  real_T e_obj[3];
  int32_T partial_match_size[2];
  int32_T i;
  int32_T jointtype_size_idx_1;
  int32_T loop_ub;
  char_T n_u[52];
  char_T k_u[49];
  char_T d_u[48];
  char_T j_u[46];
  char_T h_u[43];
  char_T s_u[38];
  char_T b_u[33];
  char_T q_u[32];
  char_T jointtype_data[9];
  char_T partial_match_data[9];
  char_T f_u[5];
  char_T u_u[4];
  int8_T msubspace_data[36];
  int8_T b_I[9];
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &rd_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  f_st.prev = &e_st;
  f_st.tls = e_st.tls;
  emxInit_char_T(&jname, 2);
  i = jname->size[0] * jname->size[1];
  jname->size[0] = 1;
  jname->size[1] = obj->NameInternal->size[1];
  emxEnsureCapacity_char_T(jname, i);
  loop_ub = obj->NameInternal->size[1];
  for (i = 0; i < loop_ub; i++) {
    jname->data[i] = obj->NameInternal->data[i];
  }

  b_st.site = &fb_emlrtRSI;
  c_st.site = &x_emlrtRSI;
  newbody = iobj_2;
  b_st.site = &ud_emlrtRSI;
  c_st.site = &k_emlrtRSI;
  if (jname->size[1] == 0) {
    for (i = 0; i < 33; i++) {
      b_u[i] = c_u[i];
    }

    y = NULL;
    m = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a(cgxertPrepareEmlrtTLS(moduleInstance->S, &c_st,
      moduleInstance->sysIdx, 6), 33, m, &b_u[0]);
    emlrtAssign(&y, m);
    for (i = 0; i < 48; i++) {
      d_u[i] = e_u[i];
    }

    b_y = NULL;
    m = emlrtCreateCharArray(2, &iv1[0]);
    emlrtInitCharArrayR2013a(cgxertPrepareEmlrtTLS(moduleInstance->S, &c_st,
      moduleInstance->sysIdx, 6), 48, m, &d_u[0]);
    emlrtAssign(&b_y, m);
    for (i = 0; i < 5; i++) {
      f_u[i] = g_u[i];
    }

    c_y = NULL;
    m = emlrtCreateCharArray(2, &iv2[0]);
    emlrtInitCharArrayR2013a(cgxertPrepareEmlrtTLS(moduleInstance->S, &c_st,
      moduleInstance->sysIdx, 6), 5, m, &f_u[0]);
    emlrtAssign(&c_y, m);
    d_st.site = &om_emlrtRSI;
    blkSrcLoc.sysIdx = moduleInstance->sysIdx;
    blkSrcLoc.blkIdx = 6;
    b_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
    b_blkSrcLoc.blkIdx = 6;
    c_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
    c_blkSrcLoc.blkIdx = 6;
    b_error(moduleInstance, &d_st, y, getString(moduleInstance, &d_st, message
             (moduleInstance, &d_st, b_y, c_y, &c_emlrtMCI, &blkSrcLoc),
             &c_emlrtMCI, &b_blkSrcLoc), &c_emlrtMCI, &c_blkSrcLoc);
  }

  i = iobj_2->NameInternal->size[0] * iobj_2->NameInternal->size[1];
  iobj_2->NameInternal->size[0] = 1;
  iobj_2->NameInternal->size[1] = jname->size[1];
  emxEnsureCapacity_char_T(iobj_2->NameInternal, i);
  loop_ub = jname->size[1] - 1;
  for (i = 0; i <= loop_ub; i++) {
    iobj_2->NameInternal->data[i] = jname->data[i];
  }

  emxInit_char_T(&b_jname, 2);
  i = b_jname->size[0] * b_jname->size[1];
  b_jname->size[0] = 1;
  b_jname->size[1] = jname->size[1] + 4;
  emxEnsureCapacity_char_T(b_jname, i);
  loop_ub = jname->size[1];
  if (loop_ub - 1 >= 0) {
    memcpy(&b_jname->data[0], &jname->data[0], (uint32_T)loop_ub * sizeof(char_T));
  }

  for (i = 0; i < 4; i++) {
    b_jname->data[i + jname->size[1]] = cv[i];
  }

  b_st.site = &gb_emlrtRSI;
  iobj_2->JointInternal = rigidBodyJoint_rigidBodyJoint(moduleInstance, &b_st,
    &iobj_1[0], b_jname);
  emxFree_char_T(&b_jname);
  iobj_2->Index = -1.0;
  iobj_2->ParentIndex = -1.0;
  iobj_2->MassInternal = 1.0;
  for (i = 0; i < 3; i++) {
    iobj_2->CenterOfMassInternal[i] = 0.0;
  }

  for (i = 0; i < 9; i++) {
    b_I[i] = 0;
  }

  for (loop_ub = 0; loop_ub < 3; loop_ub++) {
    b_I[loop_ub + 3 * loop_ub] = 1;
  }

  for (i = 0; i < 9; i++) {
    iobj_2->InertiaInternal[i] = (real_T)b_I[i];
  }

  for (i = 0; i < 36; i++) {
    msubspace_data[i] = 0;
  }

  for (loop_ub = 0; loop_ub < 6; loop_ub++) {
    msubspace_data[loop_ub + 6 * loop_ub] = 1;
  }

  for (i = 0; i < 36; i++) {
    iobj_2->SpatialInertia[i] = (real_T)msubspace_data[i];
  }

  b_st.site = &hb_emlrtRSI;
  iobj_2->CollisionsInternal = CollisionSet_CollisionSet(moduleInstance, &b_st,
    &iobj_0[0], 0.0);
  iobj_2->matlabCodegenIsDeleted = false;
  st.site = &sd_emlrtRSI;
  b_obj = obj->JointInternal;
  b_st.site = &vd_emlrtRSI;
  emxInit_char_T(&jtype, 2);
  i = jtype->size[0] * jtype->size[1];
  jtype->size[0] = 1;
  jtype->size[1] = b_obj->Type->size[1];
  emxEnsureCapacity_char_T(jtype, i);
  loop_ub = b_obj->Type->size[1];
  for (i = 0; i < loop_ub; i++) {
    jtype->data[i] = b_obj->Type->data[i];
  }

  c_st.site = &wd_emlrtRSI;
  i = jname->size[0] * jname->size[1];
  jname->size[0] = 1;
  jname->size[1] = b_obj->NameInternal->size[1];
  emxEnsureCapacity_char_T(jname, i);
  loop_ub = b_obj->NameInternal->size[1];
  for (i = 0; i < loop_ub; i++) {
    jname->data[i] = b_obj->NameInternal->data[i];
  }

  c_st.site = &xd_emlrtRSI;
  iobj_1[1].InTree = false;
  for (i = 0; i < 16; i++) {
    iobj_1[1].JointToParentTransform[i] = (real_T)iv3[i];
  }

  for (i = 0; i < 16; i++) {
    iobj_1[1].ChildToJointTransform[i] = (real_T)iv3[i];
  }

  d_st.site = &pb_emlrtRSI;
  b_validateattributes(moduleInstance, &d_st, jname);
  d_st.site = &ib_emlrtRSI;
  i = iobj_1[1].NameInternal->size[0] * iobj_1[1].NameInternal->size[1];
  iobj_1[1].NameInternal->size[0] = 1;
  iobj_1[1].NameInternal->size[1] = jname->size[1];
  emxEnsureCapacity_char_T(iobj_1[1].NameInternal, i);
  loop_ub = jname->size[1] - 1;
  for (i = 0; i <= loop_ub; i++) {
    iobj_1[1].NameInternal->data[i] = jname->data[i];
  }

  d_st.site = &be_emlrtRSI;
  e_st.site = &ce_emlrtRSI;
  f_st.site = &de_emlrtRSI;
  get_match(moduleInstance, &f_st, jtype, partial_match_data, partial_match_size,
            &loop_ub);
  if ((loop_ub == 0) || (jtype->size[1] == 0)) {
    jointtype_size_idx_1 = 8;
    for (i = 0; i < 8; i++) {
      jointtype_data[i] = ' ';
    }

    if ((loop_ub == 0) || (jtype->size[1] == 0)) {
      for (i = 0; i < 46; i++) {
        j_u[i] = l_u[i];
      }

      e_y = NULL;
      m = emlrtCreateCharArray(2, &iv5[0]);
      emlrtInitCharArrayR2013a(cgxertPrepareEmlrtTLS(moduleInstance->S, &e_st,
        moduleInstance->sysIdx, 6), 46, m, &j_u[0]);
      emlrtAssign(&e_y, m);
      for (i = 0; i < 52; i++) {
        n_u[i] = o_u[i];
      }

      g_y = NULL;
      m = emlrtCreateCharArray(2, &iv7[0]);
      emlrtInitCharArrayR2013a(cgxertPrepareEmlrtTLS(moduleInstance->S, &e_st,
        moduleInstance->sysIdx, 6), 52, m, &n_u[0]);
      emlrtAssign(&g_y, m);
      for (i = 0; i < 5; i++) {
        f_u[i] = p_u[i];
      }

      i_y = NULL;
      m = emlrtCreateCharArray(2, &iv9[0]);
      emlrtInitCharArrayR2013a(cgxertPrepareEmlrtTLS(moduleInstance->S, &e_st,
        moduleInstance->sysIdx, 6), 5, m, &f_u[0]);
      emlrtAssign(&i_y, m);
      for (i = 0; i < 32; i++) {
        q_u[i] = r_u[i];
      }

      k_y = NULL;
      m = emlrtCreateCharArray(2, &iv13[0]);
      emlrtInitCharArrayR2013a(cgxertPrepareEmlrtTLS(moduleInstance->S, &e_st,
        moduleInstance->sysIdx, 6), 32, m, &q_u[0]);
      emlrtAssign(&k_y, m);
      i = jname->size[0] * jname->size[1];
      jname->size[0] = 1;
      jname->size[1] = jtype->size[1] + 5;
      emxEnsureCapacity_char_T(jname, i);
      for (i = 0; i < 3; i++) {
        jname->data[i] = cv1[i];
      }

      loop_ub = jtype->size[1];
      if (loop_ub - 1 >= 0) {
        memcpy(&jname->data[3], &jtype->data[0], (uint32_T)loop_ub * sizeof
               (char_T));
      }

      for (i = 0; i < 2; i++) {
        jname->data[(i + jtype->size[1]) + 3] = cv2[i];
      }

      m_y = NULL;
      for (i = 0; i < 2; i++) {
        partial_match_size[i] = jname->size[i];
      }

      m = emlrtCreateCharArray(2, &partial_match_size[0]);
      emlrtInitCharArrayR2013a(cgxertPrepareEmlrtTLS(moduleInstance->S, &e_st,
        moduleInstance->sysIdx, 6), jname->size[1], m, &jname->data[0]);
      emlrtAssign(&m_y, m);
      f_st.site = &jn_emlrtRSI;
      g_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
      g_blkSrcLoc.blkIdx = 6;
      h_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
      h_blkSrcLoc.blkIdx = 6;
      i_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
      i_blkSrcLoc.blkIdx = 6;
      b_error(moduleInstance, &f_st, e_y, getString(moduleInstance, &f_st,
               c_message(moduleInstance, &f_st, g_y, i_y, k_y, m_y, &h_emlrtMCI,
                         &i_blkSrcLoc), &h_emlrtMCI, &g_blkSrcLoc), &h_emlrtMCI,
              &h_blkSrcLoc);
    }
  } else if (loop_ub > 1) {
    for (i = 0; i < 43; i++) {
      h_u[i] = i_u[i];
    }

    d_y = NULL;
    m = emlrtCreateCharArray(2, &iv4[0]);
    emlrtInitCharArrayR2013a(cgxertPrepareEmlrtTLS(moduleInstance->S, &e_st,
      moduleInstance->sysIdx, 6), 43, m, &h_u[0]);
    emlrtAssign(&d_y, m);
    for (i = 0; i < 49; i++) {
      k_u[i] = m_u[i];
    }

    f_y = NULL;
    m = emlrtCreateCharArray(2, &iv6[0]);
    emlrtInitCharArrayR2013a(cgxertPrepareEmlrtTLS(moduleInstance->S, &e_st,
      moduleInstance->sysIdx, 6), 49, m, &k_u[0]);
    emlrtAssign(&f_y, m);
    for (i = 0; i < 5; i++) {
      f_u[i] = p_u[i];
    }

    h_y = NULL;
    m = emlrtCreateCharArray(2, &iv8[0]);
    emlrtInitCharArrayR2013a(cgxertPrepareEmlrtTLS(moduleInstance->S, &e_st,
      moduleInstance->sysIdx, 6), 5, m, &f_u[0]);
    emlrtAssign(&h_y, m);
    for (i = 0; i < 32; i++) {
      q_u[i] = r_u[i];
    }

    j_y = NULL;
    m = emlrtCreateCharArray(2, &iv10[0]);
    emlrtInitCharArrayR2013a(cgxertPrepareEmlrtTLS(moduleInstance->S, &e_st,
      moduleInstance->sysIdx, 6), 32, m, &q_u[0]);
    emlrtAssign(&j_y, m);
    i = jname->size[0] * jname->size[1];
    jname->size[0] = 1;
    jname->size[1] = jtype->size[1] + 5;
    emxEnsureCapacity_char_T(jname, i);
    for (i = 0; i < 3; i++) {
      jname->data[i] = cv1[i];
    }

    loop_ub = jtype->size[1];
    if (loop_ub - 1 >= 0) {
      memcpy(&jname->data[3], &jtype->data[0], (uint32_T)loop_ub * sizeof(char_T));
    }

    for (i = 0; i < 2; i++) {
      jname->data[(i + jtype->size[1]) + 3] = cv2[i];
    }

    l_y = NULL;
    for (i = 0; i < 2; i++) {
      partial_match_size[i] = jname->size[i];
    }

    m = emlrtCreateCharArray(2, &partial_match_size[0]);
    emlrtInitCharArrayR2013a(cgxertPrepareEmlrtTLS(moduleInstance->S, &e_st,
      moduleInstance->sysIdx, 6), jname->size[1], m, &jname->data[0]);
    emlrtAssign(&l_y, m);
    f_st.site = &kn_emlrtRSI;
    d_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
    d_blkSrcLoc.blkIdx = 6;
    e_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
    e_blkSrcLoc.blkIdx = 6;
    f_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
    f_blkSrcLoc.blkIdx = 6;
    b_error(moduleInstance, &f_st, d_y, getString(moduleInstance, &f_st,
             c_message(moduleInstance, &f_st, f_y, h_y, j_y, l_y, &g_emlrtMCI,
                       &f_blkSrcLoc), &g_emlrtMCI, &d_blkSrcLoc), &g_emlrtMCI,
            &e_blkSrcLoc);
  } else {
    jointtype_size_idx_1 = partial_match_size[1];
    if (partial_match_size[1] - 1 >= 0) {
      memcpy(&jointtype_data[0], &partial_match_data[0], (uint32_T)
             partial_match_size[1] * sizeof(char_T));
    }
  }

  emxFree_char_T(&jtype);
  emlrtDimSizeGeqCheckR2012b(20, jointtype_size_idx_1, &emlrtECI,
    cgxertPrepareEmlrtTLS(moduleInstance->S, &c_st, moduleInstance->sysIdx, 6));
  i = iobj_1[1].Type->size[0] * iobj_1[1].Type->size[1];
  iobj_1[1].Type->size[0] = 1;
  iobj_1[1].Type->size[1] = jointtype_size_idx_1;
  emxEnsureCapacity_char_T(iobj_1[1].Type, i);
  loop_ub = jointtype_size_idx_1 - 1;
  for (i = 0; i <= loop_ub; i++) {
    iobj_1[1].Type->data[i] = jointtype_data[i];
  }

  i = jname->size[0] * jname->size[1];
  jname->size[0] = 1;
  jname->size[1] = iobj_1[1].Type->size[1];
  emxEnsureCapacity_char_T(jname, i);
  loop_ub = iobj_1[1].Type->size[1];
  for (i = 0; i < loop_ub; i++) {
    jname->data[i] = iobj_1[1].Type->data[i];
  }

  if (b_strcmp(jname)) {
    loop_ub = 0;
  } else if (c_strcmp(jname)) {
    loop_ub = 1;
  } else {
    loop_ub = -1;
  }

  switch (loop_ub) {
   case 0:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = iv11[i];
    }

    for (i = 0; i < 2; i++) {
      poslim_data[i] = 6.2831853071795862 * (real_T)i - 3.1415926535897931;
    }

    iobj_1[1].VelocityNumber = 1.0;
    iobj_1[1].PositionNumber = 1.0;
    for (i = 0; i < 3; i++) {
      iobj_1[1].JointAxisInternal[i] = (real_T)iv14[i];
    }
    break;

   case 1:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = iv12[i];
    }

    for (i = 0; i < 2; i++) {
      poslim_data[i] = (real_T)i - 0.5;
    }

    iobj_1[1].VelocityNumber = 1.0;
    iobj_1[1].PositionNumber = 1.0;
    for (i = 0; i < 3; i++) {
      iobj_1[1].JointAxisInternal[i] = (real_T)iv14[i];
    }
    break;

   default:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = 0;
    }

    for (i = 0; i < 2; i++) {
      poslim_data[i] = 0.0;
    }

    iobj_1[1].VelocityNumber = 0.0;
    iobj_1[1].PositionNumber = 0.0;
    for (i = 0; i < 3; i++) {
      iobj_1[1].JointAxisInternal[i] = 0.0;
    }
    break;
  }

  i = iobj_1[1].MotionSubspace->size[0] * iobj_1[1].MotionSubspace->size[1];
  iobj_1[1].MotionSubspace->size[0] = 6;
  iobj_1[1].MotionSubspace->size[1] = 1;
  emxEnsureCapacity_real_T(iobj_1[1].MotionSubspace, i);
  for (i = 0; i < 6; i++) {
    iobj_1[1].MotionSubspace->data[i] = (real_T)msubspace_data[i];
  }

  i = iobj_1[1].PositionLimitsInternal->size[0] * iobj_1[1].
    PositionLimitsInternal->size[1];
  iobj_1[1].PositionLimitsInternal->size[0] = 1;
  iobj_1[1].PositionLimitsInternal->size[1] = 2;
  emxEnsureCapacity_real_T(iobj_1[1].PositionLimitsInternal, i);
  for (i = 0; i < 2; i++) {
    iobj_1[1].PositionLimitsInternal->data[i] = poslim_data[i];
  }

  i = iobj_1[1].HomePositionInternal->size[0];
  iobj_1[1].HomePositionInternal->size[0] = 1;
  emxEnsureCapacity_real_T1(iobj_1[1].HomePositionInternal, i);
  for (i = 0; i < 1; i++) {
    iobj_1[1].HomePositionInternal->data[0] = 0.0;
  }

  c_st.site = &yd_emlrtRSI;
  i = jname->size[0] * jname->size[1];
  jname->size[0] = 1;
  jname->size[1] = b_obj->NameInternal->size[1];
  emxEnsureCapacity_char_T(jname, i);
  loop_ub = b_obj->NameInternal->size[1];
  for (i = 0; i < loop_ub; i++) {
    jname->data[i] = b_obj->NameInternal->data[i];
  }

  if (jname->size[1] != 0) {
    c_st.site = &ae_emlrtRSI;
    i = jname->size[0] * jname->size[1];
    jname->size[0] = 1;
    jname->size[1] = b_obj->NameInternal->size[1];
    emxEnsureCapacity_char_T(jname, i);
    loop_ub = b_obj->NameInternal->size[1];
    for (i = 0; i < loop_ub; i++) {
      jname->data[i] = b_obj->NameInternal->data[i];
    }

    c_st.site = &ae_emlrtRSI;
    d_st.site = &ke_emlrtRSI;
    e_st.site = &k_emlrtRSI;
    if (jname->size[1] == 0) {
      for (i = 0; i < 38; i++) {
        s_u[i] = t_u[i];
      }

      n_y = NULL;
      m = emlrtCreateCharArray(2, &iv15[0]);
      emlrtInitCharArrayR2013a(cgxertPrepareEmlrtTLS(moduleInstance->S, &e_st,
        moduleInstance->sysIdx, 6), 38, m, &s_u[0]);
      emlrtAssign(&n_y, m);
      for (i = 0; i < 48; i++) {
        d_u[i] = e_u[i];
      }

      o_y = NULL;
      m = emlrtCreateCharArray(2, &iv16[0]);
      emlrtInitCharArrayR2013a(cgxertPrepareEmlrtTLS(moduleInstance->S, &e_st,
        moduleInstance->sysIdx, 6), 48, m, &d_u[0]);
      emlrtAssign(&o_y, m);
      for (i = 0; i < 4; i++) {
        u_u[i] = v_u[i];
      }

      p_y = NULL;
      m = emlrtCreateCharArray(2, &iv17[0]);
      emlrtInitCharArrayR2013a(cgxertPrepareEmlrtTLS(moduleInstance->S, &e_st,
        moduleInstance->sysIdx, 6), 4, m, &u_u[0]);
      emlrtAssign(&p_y, m);
      f_st.site = &om_emlrtRSI;
      k_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
      k_blkSrcLoc.blkIdx = 6;
      l_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
      l_blkSrcLoc.blkIdx = 6;
      m_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
      m_blkSrcLoc.blkIdx = 6;
      b_error(moduleInstance, &f_st, n_y, getString(moduleInstance, &f_st,
               message(moduleInstance, &f_st, o_y, p_y, &c_emlrtMCI,
                       &k_blkSrcLoc), &c_emlrtMCI, &l_blkSrcLoc), &c_emlrtMCI,
              &m_blkSrcLoc);
    }

    if (!iobj_1[1].InTree) {
      i = iobj_1[1].NameInternal->size[0] * iobj_1[1].NameInternal->size[1];
      iobj_1[1].NameInternal->size[0] = 1;
      iobj_1[1].NameInternal->size[1] = jname->size[1];
      emxEnsureCapacity_char_T(iobj_1[1].NameInternal, i);
      loop_ub = jname->size[1] - 1;
      for (i = 0; i <= loop_ub; i++) {
        iobj_1[1].NameInternal->data[i] = jname->data[i];
      }
    } else {
      d_st.site = &le_emlrtRSI;
      e_st.site = &me_emlrtRSI;
      j_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
      j_blkSrcLoc.blkIdx = 6;
      warning(moduleInstance, &e_st, &j_blkSrcLoc);
    }
  }

  emxFree_char_T(&jname);
  loop_ub = b_obj->PositionLimitsInternal->size[0] << 1;
  i = iobj_1[1].PositionLimitsInternal->size[0] * iobj_1[1].
    PositionLimitsInternal->size[1];
  iobj_1[1].PositionLimitsInternal->size[0] = b_obj->
    PositionLimitsInternal->size[0];
  iobj_1[1].PositionLimitsInternal->size[1] = 2;
  emxEnsureCapacity_real_T(iobj_1[1].PositionLimitsInternal, i);
  emxInit_real_T1(&c_obj, 1);
  i = c_obj->size[0];
  c_obj->size[0] = loop_ub;
  emxEnsureCapacity_real_T1(c_obj, i);
  for (i = 0; i < loop_ub; i++) {
    c_obj->data[i] = b_obj->PositionLimitsInternal->data[i];
  }

  loop_ub = c_obj->size[0];
  for (i = 0; i < loop_ub; i++) {
    iobj_1[1].PositionLimitsInternal->data[i] = c_obj->data[i];
  }

  emxFree_real_T(&c_obj);
  emxInit_real_T1(&d_obj, 1);
  i = d_obj->size[0];
  d_obj->size[0] = b_obj->HomePositionInternal->size[0];
  emxEnsureCapacity_real_T1(d_obj, i);
  loop_ub = b_obj->HomePositionInternal->size[0];
  for (i = 0; i < loop_ub; i++) {
    d_obj->data[i] = b_obj->HomePositionInternal->data[i];
  }

  i = iobj_1[1].HomePositionInternal->size[0];
  iobj_1[1].HomePositionInternal->size[0] = d_obj->size[0];
  emxEnsureCapacity_real_T1(iobj_1[1].HomePositionInternal, i);
  loop_ub = d_obj->size[0];
  for (i = 0; i < loop_ub; i++) {
    iobj_1[1].HomePositionInternal->data[i] = d_obj->data[i];
  }

  emxFree_real_T(&d_obj);
  for (i = 0; i < 3; i++) {
    e_obj[i] = b_obj->JointAxisInternal[i];
  }

  for (i = 0; i < 3; i++) {
    iobj_1[1].JointAxisInternal[i] = e_obj[i];
  }

  loop_ub = 6 * b_obj->MotionSubspace->size[1];
  i = iobj_1[1].MotionSubspace->size[0] * iobj_1[1].MotionSubspace->size[1];
  iobj_1[1].MotionSubspace->size[0] = 6;
  iobj_1[1].MotionSubspace->size[1] = b_obj->MotionSubspace->size[1];
  emxEnsureCapacity_real_T(iobj_1[1].MotionSubspace, i);
  emxInit_real_T1(&f_obj, 1);
  i = f_obj->size[0];
  f_obj->size[0] = loop_ub;
  emxEnsureCapacity_real_T1(f_obj, i);
  for (i = 0; i < loop_ub; i++) {
    f_obj->data[i] = b_obj->MotionSubspace->data[i];
  }

  loop_ub = f_obj->size[0];
  for (i = 0; i < loop_ub; i++) {
    iobj_1[1].MotionSubspace->data[i] = f_obj->data[i];
  }

  emxFree_real_T(&f_obj);
  for (i = 0; i < 16; i++) {
    g_obj[i] = b_obj->JointToParentTransform[i];
  }

  for (i = 0; i < 16; i++) {
    iobj_1[1].JointToParentTransform[i] = g_obj[i];
  }

  for (i = 0; i < 16; i++) {
    g_obj[i] = b_obj->ChildToJointTransform[i];
  }

  for (i = 0; i < 16; i++) {
    iobj_1[1].ChildToJointTransform[i] = g_obj[i];
  }

  iobj_2->JointInternal = &iobj_1[1];
  iobj_2->MassInternal = obj->MassInternal;
  for (i = 0; i < 3; i++) {
    e_obj[i] = obj->CenterOfMassInternal[i];
  }

  for (i = 0; i < 3; i++) {
    iobj_2->CenterOfMassInternal[i] = e_obj[i];
  }

  for (i = 0; i < 9; i++) {
    h_obj[i] = obj->InertiaInternal[i];
  }

  for (i = 0; i < 9; i++) {
    iobj_2->InertiaInternal[i] = h_obj[i];
  }

  for (i = 0; i < 36; i++) {
    i_obj[i] = obj->SpatialInertia[i];
  }

  for (i = 0; i < 36; i++) {
    iobj_2->SpatialInertia[i] = i_obj[i];
  }

  st.site = &td_emlrtRSI;
  iobj_2->CollisionsInternal = CollisionSet_copy(moduleInstance, &st,
    obj->CollisionsInternal, &iobj_0[1]);
  return newbody;
}

static void get_match(InstanceStruct_dnGfh1DX0a11xSfGnyzF5G *moduleInstance,
                      const emlrtStack *sp, emxArray_char_T *str, char_T
                      match_data[], int32_T match_size[2], int32_T *nmatched)
{
  static char_T cv[128] = { '\x00', '\x01', '\x02', '\x03', '\x04', '\x05',
    '\x06', '\a', '\b', '\t', '\n', '\v', '\f', '\r', '\x0e', '\x0f', '\x10',
    '\x11', '\x12', '\x13', '\x14', '\x15', '\x16', '\x17', '\x18', '\x19',
    '\x1a', '\x1b', '\x1c', '\x1d', '\x1e', '\x1f', ' ', '!', '\"', '#', '$',
    '%', '&', '\'', '(', ')', '*', '+', ',', '-', '.', '/', '0', '1', '2', '3',
    '4', '5', '6', '7', '8', '9', ':', ';', '<', '=', '>', '?', '@', 'a', 'b',
    'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q',
    'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '[', '\\', ']', '^', '_', '`',
    'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o',
    'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '{', '|', '}', '~',
    '\x7f' };

  static char_T b_vstr[9] = { 'p', 'r', 'i', 's', 'm', 'a', 't', 'i', 'c' };

  static char_T vstr[8] = { 'r', 'e', 'v', 'o', 'l', 'u', 't', 'e' };

  static char_T c_vstr[5] = { 'f', 'i', 'x', 'e', 'd' };

  cgxertBlkSrcLocInfo b_blkSrcLoc;
  cgxertBlkSrcLocInfo blkSrcLoc;
  cgxertBlkSrcLocInfo c_blkSrcLoc;
  cgxertBlkSrcLocInfo d_blkSrcLoc;
  cgxertBlkSrcLocInfo e_blkSrcLoc;
  cgxertBlkSrcLocInfo f_blkSrcLoc;
  cgxertBlkSrcLocInfo g_blkSrcLoc;
  cgxertBlkSrcLocInfo h_blkSrcLoc;
  cgxertBlkSrcLocInfo i_blkSrcLoc;
  cgxertBlkSrcLocInfo j_blkSrcLoc;
  cgxertBlkSrcLocInfo k_blkSrcLoc;
  cgxertBlkSrcLocInfo l_blkSrcLoc;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  int32_T exitg1;
  int32_T minnanb;
  int32_T ns;
  int32_T partial_match_size_idx_1;
  char_T partial_match_data[9];
  boolean_T b_bool;
  boolean_T b_guard1 = false;
  boolean_T guard1 = false;
  boolean_T guard2 = false;
  boolean_T guard3 = false;
  boolean_T matched;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  partial_match_size_idx_1 = 8;
  for (minnanb = 0; minnanb < 8; minnanb++) {
    partial_match_data[minnanb] = ' ';
  }

  *nmatched = 0;
  matched = false;
  guard1 = false;
  guard2 = false;
  guard3 = false;
  if (str->size[1] <= 8) {
    st.site = &ee_emlrtRSI;
    ns = str->size[1];
    b_bool = false;
    if (str->size[1] < 8) {
      minnanb = str->size[1];
    } else {
      minnanb = 8;
    }

    b_guard1 = false;
    if (ns <= minnanb) {
      if (minnanb < ns) {
        ns = minnanb;
      }

      b_guard1 = true;
    } else if (str->size[1] == 8) {
      ns = 8;
      b_guard1 = true;
    }

    if (b_guard1) {
      minnanb = 1;
      do {
        exitg1 = 0;
        if (minnanb - 1 <= ns - 1) {
          b_st.site = &fe_emlrtRSI;
          blkSrcLoc.sysIdx = moduleInstance->sysIdx;
          blkSrcLoc.blkIdx = 6;
          assertSupportedString(moduleInstance, &b_st, str->data[minnanb - 1],
                                &blkSrcLoc);
          b_st.site = &ge_emlrtRSI;
          c_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
          c_blkSrcLoc.blkIdx = 6;
          assertSupportedString(moduleInstance, &b_st, vstr[minnanb - 1],
                                &c_blkSrcLoc);
          b_st.site = &he_emlrtRSI;
          c_st.site = &ie_emlrtRSI;
          d_st.site = &je_emlrtRSI;
          g_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
          g_blkSrcLoc.blkIdx = 6;
          assertSupportedString(moduleInstance, &d_st, str->data[minnanb - 1],
                                &g_blkSrcLoc);
          b_st.site = &he_emlrtRSI;
          c_st.site = &ie_emlrtRSI;
          d_st.site = &je_emlrtRSI;
          j_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
          j_blkSrcLoc.blkIdx = 6;
          assertSupportedString(moduleInstance, &d_st, vstr[minnanb - 1],
                                &j_blkSrcLoc);
          if (cv[(uint8_T)str->data[minnanb - 1] & 127] != cv[(int32_T)
              vstr[minnanb - 1]]) {
            exitg1 = 1;
          } else {
            minnanb++;
          }
        } else {
          b_bool = true;
          exitg1 = 1;
        }
      } while (exitg1 == 0);
    }

    if (b_bool) {
      if (str->size[1] == 8) {
        *nmatched = 1;
        match_size[0] = 1;
        match_size[1] = 8;
        for (minnanb = 0; minnanb < 8; minnanb++) {
          match_data[minnanb] = vstr[minnanb];
        }
      } else {
        for (minnanb = 0; minnanb < 8; minnanb++) {
          partial_match_data[minnanb] = vstr[minnanb];
        }

        matched = true;
        *nmatched = 1;
        guard3 = true;
      }
    } else {
      guard3 = true;
    }
  } else {
    guard3 = true;
  }

  if (guard3) {
    if (str->size[1] <= 9) {
      st.site = &ee_emlrtRSI;
      ns = str->size[1];
      b_bool = false;
      if (str->size[1] < 9) {
        minnanb = str->size[1];
      } else {
        minnanb = 9;
      }

      b_guard1 = false;
      if (ns <= minnanb) {
        if (minnanb < ns) {
          ns = minnanb;
        }

        b_guard1 = true;
      } else if (str->size[1] == 9) {
        ns = 9;
        b_guard1 = true;
      }

      if (b_guard1) {
        minnanb = 1;
        do {
          exitg1 = 0;
          if (minnanb - 1 <= ns - 1) {
            b_st.site = &fe_emlrtRSI;
            b_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
            b_blkSrcLoc.blkIdx = 6;
            assertSupportedString(moduleInstance, &b_st, str->data[minnanb - 1],
                                  &b_blkSrcLoc);
            b_st.site = &ge_emlrtRSI;
            e_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
            e_blkSrcLoc.blkIdx = 6;
            assertSupportedString(moduleInstance, &b_st, b_vstr[minnanb - 1],
                                  &e_blkSrcLoc);
            b_st.site = &he_emlrtRSI;
            c_st.site = &ie_emlrtRSI;
            d_st.site = &je_emlrtRSI;
            h_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
            h_blkSrcLoc.blkIdx = 6;
            assertSupportedString(moduleInstance, &d_st, str->data[minnanb - 1],
                                  &h_blkSrcLoc);
            b_st.site = &he_emlrtRSI;
            c_st.site = &ie_emlrtRSI;
            d_st.site = &je_emlrtRSI;
            k_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
            k_blkSrcLoc.blkIdx = 6;
            assertSupportedString(moduleInstance, &d_st, b_vstr[minnanb - 1],
                                  &k_blkSrcLoc);
            if (cv[(uint8_T)str->data[minnanb - 1] & 127] != cv[(int32_T)
                b_vstr[minnanb - 1]]) {
              exitg1 = 1;
            } else {
              minnanb++;
            }
          } else {
            b_bool = true;
            exitg1 = 1;
          }
        } while (exitg1 == 0);
      }

      if (b_bool) {
        if (str->size[1] == 9) {
          *nmatched = 1;
          match_size[0] = 1;
          match_size[1] = 9;
          for (minnanb = 0; minnanb < 9; minnanb++) {
            match_data[minnanb] = b_vstr[minnanb];
          }
        } else {
          if (!matched) {
            partial_match_size_idx_1 = 9;
            for (minnanb = 0; minnanb < 9; minnanb++) {
              partial_match_data[minnanb] = b_vstr[minnanb];
            }
          }

          matched = true;
          (*nmatched)++;
          guard2 = true;
        }
      } else {
        guard2 = true;
      }
    } else {
      guard2 = true;
    }
  }

  if (guard2) {
    if (str->size[1] <= 5) {
      st.site = &ee_emlrtRSI;
      ns = str->size[1];
      b_bool = false;
      if (str->size[1] < 5) {
        minnanb = str->size[1];
      } else {
        minnanb = 5;
      }

      b_guard1 = false;
      if (ns <= minnanb) {
        if (minnanb < ns) {
          ns = minnanb;
        }

        b_guard1 = true;
      } else if (str->size[1] == 5) {
        ns = 5;
        b_guard1 = true;
      }

      if (b_guard1) {
        minnanb = 1;
        do {
          exitg1 = 0;
          if (minnanb - 1 <= ns - 1) {
            b_st.site = &fe_emlrtRSI;
            d_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
            d_blkSrcLoc.blkIdx = 6;
            assertSupportedString(moduleInstance, &b_st, str->data[minnanb - 1],
                                  &d_blkSrcLoc);
            b_st.site = &ge_emlrtRSI;
            f_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
            f_blkSrcLoc.blkIdx = 6;
            assertSupportedString(moduleInstance, &b_st, c_vstr[minnanb - 1],
                                  &f_blkSrcLoc);
            b_st.site = &he_emlrtRSI;
            c_st.site = &ie_emlrtRSI;
            d_st.site = &je_emlrtRSI;
            i_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
            i_blkSrcLoc.blkIdx = 6;
            assertSupportedString(moduleInstance, &d_st, str->data[minnanb - 1],
                                  &i_blkSrcLoc);
            b_st.site = &he_emlrtRSI;
            c_st.site = &ie_emlrtRSI;
            d_st.site = &je_emlrtRSI;
            l_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
            l_blkSrcLoc.blkIdx = 6;
            assertSupportedString(moduleInstance, &d_st, c_vstr[minnanb - 1],
                                  &l_blkSrcLoc);
            if (cv[(uint8_T)str->data[minnanb - 1] & 127] != cv[(int32_T)
                c_vstr[minnanb - 1]]) {
              exitg1 = 1;
            } else {
              minnanb++;
            }
          } else {
            b_bool = true;
            exitg1 = 1;
          }
        } while (exitg1 == 0);
      }

      if (b_bool) {
        if (str->size[1] == 5) {
          *nmatched = 1;
          match_size[0] = 1;
          match_size[1] = 5;
          for (minnanb = 0; minnanb < 5; minnanb++) {
            match_data[minnanb] = c_vstr[minnanb];
          }
        } else {
          if (!matched) {
            partial_match_size_idx_1 = 5;
            for (minnanb = 0; minnanb < 5; minnanb++) {
              partial_match_data[minnanb] = c_vstr[minnanb];
            }
          }

          (*nmatched)++;
          guard1 = true;
        }
      } else {
        guard1 = true;
      }
    } else {
      guard1 = true;
    }
  }

  if (guard1) {
    if (*nmatched == 0) {
      match_size[0] = 1;
      match_size[1] = 8;
      for (minnanb = 0; minnanb < 8; minnanb++) {
        match_data[minnanb] = ' ';
      }
    } else {
      match_size[0] = 1;
      match_size[1] = partial_match_size_idx_1;
      memcpy(&match_data[0], &partial_match_data[0], (uint32_T)
             partial_match_size_idx_1 * sizeof(char_T));
    }
  }
}

static void assertSupportedString(InstanceStruct_dnGfh1DX0a11xSfGnyzF5G
  *moduleInstance, const emlrtStack *sp, char_T s, cgxertBlkSrcLocInfo *blkSrc)
{
  static const int32_T iv[2] = { 1, 31 };

  static const int32_T iv1[2] = { 1, 31 };

  static char_T c_u[31] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'u', 'n', 's', 'u', 'p', 'p', 'o', 'r', 't', 'e', 'd',
    'S', 't', 'r', 'i', 'n', 'g' };

  cgxertBlkSrcLocInfo b_blkSrcLoc;
  cgxertBlkSrcLocInfo blkSrcLoc;
  cgxertBlkSrcLocInfo c_blkSrcLoc;
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *m;
  const mxArray *y;
  int32_T i;
  char_T b_u[31];
  st.prev = sp;
  st.tls = sp->tls;
  if (!((uint8_T)s <= 127)) {
    for (i = 0; i < 31; i++) {
      b_u[i] = c_u[i];
    }

    y = NULL;
    m = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a(cgxertPrepareEmlrtTLS(moduleInstance->S,
      (emlrtConstCTX)sp, blkSrc->sysIdx, blkSrc->blkIdx), 31, m, &b_u[0]);
    emlrtAssign(&y, m);
    for (i = 0; i < 31; i++) {
      b_u[i] = c_u[i];
    }

    b_y = NULL;
    m = emlrtCreateCharArray(2, &iv1[0]);
    emlrtInitCharArrayR2013a(cgxertPrepareEmlrtTLS(moduleInstance->S,
      (emlrtConstCTX)sp, blkSrc->sysIdx, blkSrc->blkIdx), 31, m, &b_u[0]);
    emlrtAssign(&b_y, m);
    c_y = NULL;
    m = emlrtCreateNumericMatrix(1, 1, mxINT8_CLASS, mxREAL);
    *(int8_T *)emlrtMxGetData(m) = MAX_int8_T;
    emlrtAssign(&c_y, m);
    st.site = &nm_emlrtRSI;
    blkSrcLoc.sysIdx = moduleInstance->sysIdx;
    blkSrcLoc.blkIdx = 6;
    b_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
    b_blkSrcLoc.blkIdx = 6;
    c_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
    c_blkSrcLoc.blkIdx = 6;
    b_error(moduleInstance, &st, y, getString(moduleInstance, &st, message
             (moduleInstance, &st, b_y, c_y, &i_emlrtMCI, &blkSrcLoc),
             &i_emlrtMCI, &b_blkSrcLoc), &i_emlrtMCI, &c_blkSrcLoc);
  }
}

static void warning(InstanceStruct_dnGfh1DX0a11xSfGnyzF5G *moduleInstance, const
                    emlrtStack *sp, cgxertBlkSrcLocInfo *blkSrc)
{
  static const int32_T iv[2] = { 1, 7 };

  static const int32_T iv1[2] = { 1, 7 };

  static const int32_T iv2[2] = { 1, 38 };

  static char_T b_msgID[38] = { 'r', 'o', 'b', 'o', 't', 'i', 'c', 's', ':', 'r',
    'o', 'b', 'o', 't', 'm', 'a', 'n', 'i', 'p', ':', 'j', 'o', 'i', 'n', 't',
    ':', 'J', 'o', 'i', 'n', 't', 'N', 'o', 't', 'F', 'r', 'e', 'e' };

  static char_T c_u[7] = { 'w', 'a', 'r', 'n', 'i', 'n', 'g' };

  static char_T d_u[7] = { 'm', 'e', 's', 's', 'a', 'g', 'e' };

  cgxertBlkSrcLocInfo b_blkSrcLoc;
  cgxertBlkSrcLocInfo blkSrcLoc;
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *m;
  const mxArray *y;
  int32_T i;
  char_T msgID[38];
  char_T b_u[7];
  st.prev = sp;
  st.tls = sp->tls;
  for (i = 0; i < 38; i++) {
    msgID[i] = b_msgID[i];
  }

  for (i = 0; i < 7; i++) {
    b_u[i] = c_u[i];
  }

  y = NULL;
  m = emlrtCreateCharArray(2, &iv[0]);
  emlrtInitCharArrayR2013a(cgxertPrepareEmlrtTLS(moduleInstance->S,
    (emlrtConstCTX)sp, blkSrc->sysIdx, blkSrc->blkIdx), 7, m, &b_u[0]);
  emlrtAssign(&y, m);
  for (i = 0; i < 7; i++) {
    b_u[i] = d_u[i];
  }

  b_y = NULL;
  m = emlrtCreateCharArray(2, &iv1[0]);
  emlrtInitCharArrayR2013a(cgxertPrepareEmlrtTLS(moduleInstance->S,
    (emlrtConstCTX)sp, blkSrc->sysIdx, blkSrc->blkIdx), 7, m, &b_u[0]);
  emlrtAssign(&b_y, m);
  c_y = NULL;
  m = emlrtCreateCharArray(2, &iv2[0]);
  emlrtInitCharArrayR2013a(cgxertPrepareEmlrtTLS(moduleInstance->S,
    (emlrtConstCTX)sp, blkSrc->sysIdx, blkSrc->blkIdx), 38, m, &msgID[0]);
  emlrtAssign(&c_y, m);
  st.site = &ln_emlrtRSI;
  blkSrcLoc.sysIdx = moduleInstance->sysIdx;
  blkSrcLoc.blkIdx = 6;
  b_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
  b_blkSrcLoc.blkIdx = 6;
  b_feval(moduleInstance, &st, y, feval(moduleInstance, &st, b_y, c_y,
           &j_emlrtMCI, &blkSrcLoc), &k_emlrtMCI, &b_blkSrcLoc);
}

static boolean_T e_strcmp(emxArray_char_T *a)
{
  static char_T cv[5] = { 'f', 'i', 'x', 'e', 'd' };

  int32_T exitg1;
  int32_T kstr;
  boolean_T b_bool;
  b_bool = false;
  if (a->size[1] != 5) {
  } else {
    kstr = 1;
    do {
      exitg1 = 0;
      if (kstr - 1 < 5) {
        if (a->data[kstr - 1] != cv[kstr - 1]) {
          exitg1 = 1;
        } else {
          kstr++;
        }
      } else {
        b_bool = true;
        exitg1 = 1;
      }
    } while (exitg1 == 0);
  }

  return b_bool;
}

static void inverseKinematics_set_SolverAlgorithm(inverseKinematics *obj,
  robotics_core_internal_DampedBFGSwGradientProjection *iobj_0)
{
  static char_T cv[22] = { 'B', 'F', 'G', 'S', 'G', 'r', 'a', 'd', 'i', 'e', 'n',
    't', 'P', 'r', 'o', 'j', 'e', 'c', 't', 'i', 'o', 'n' };

  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  int32_T i;
  st.site = &ne_emlrtRSI;
  b_st.site = &pe_emlrtRSI;
  c_st.site = &oe_emlrtRSI;
  iobj_0->MaxNumIteration = 1500.0;
  iobj_0->MaxTime = 10.0;
  iobj_0->GradientTolerance = 1.0E-7;
  iobj_0->SolutionTolerance = 1.0E-6;
  iobj_0->ArmijoRuleBeta = 0.4;
  iobj_0->ArmijoRuleSigma = 1.0E-5;
  iobj_0->ConstraintsOn = true;
  iobj_0->RandomRestart = true;
  iobj_0->StepTolerance = 1.0E-14;
  for (i = 0; i < 22; i++) {
    iobj_0->Name[i] = cv[i];
  }

  iobj_0->ConstraintMatrix->size[0] = 0;
  iobj_0->ConstraintMatrix->size[1] = 0;
  iobj_0->ConstraintBound->size[0] = 0;
  b_st.site = &qe_emlrtRSI;
  c_st.site = &se_emlrtRSI;
  d_st.site = &te_emlrtRSI;
  iobj_0->TimeObj.StartTime.tv_sec = 0.0;
  iobj_0->TimeObj.StartTime.tv_nsec = 0.0;
  b_st.site = &re_emlrtRSI;
  c_st.site = &se_emlrtRSI;
  d_st.site = &te_emlrtRSI;
  iobj_0->TimeObjInternal.StartTime.tv_sec = 0.0;
  iobj_0->TimeObjInternal.StartTime.tv_nsec = 0.0;
  iobj_0->matlabCodegenIsDeleted = false;
  obj->Solver = iobj_0;
}

static void b_mw__internal__call__reset(InstanceStruct_dnGfh1DX0a11xSfGnyzF5G
  *moduleInstance, const emlrtStack *sp)
{
  static const int32_T iv[2] = { 1, 45 };

  static const int32_T iv1[2] = { 1, 45 };

  static const int32_T iv2[2] = { 1, 5 };

  static char_T c_u[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l', 'e',
    'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C', 'o',
    'd', 'e', 'g', 'e', 'n' };

  static char_T e_u[5] = { 'r', 'e', 's', 'e', 't' };

  cgxertBlkSrcLocInfo b_blkSrcLoc;
  cgxertBlkSrcLocInfo blkSrcLoc;
  cgxertBlkSrcLocInfo c_blkSrcLoc;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *m;
  const mxArray *y;
  int32_T i;
  char_T b_u[45];
  char_T d_u[5];
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  if (!moduleInstance->b_sysobj_not_empty) {
    st.site = &t_emlrtRSI;
    b_st.site = &s_emlrtRSI;
    c_st.site = &b_emlrtRSI;
    d_st.site = &c_emlrtRSI;
    c_st.site = &b_emlrtRSI;
    d_st.site = &d_emlrtRSI;
    moduleInstance->b_sysobj.isInitialized = 0;
    moduleInstance->b_sysobj.matlabCodegenIsDeleted = false;
    moduleInstance->b_sysobj_not_empty = true;
  }

  st.site = &we_emlrtRSI;
  if (moduleInstance->b_sysobj.isInitialized == 2) {
    for (i = 0; i < 45; i++) {
      b_u[i] = c_u[i];
    }

    y = NULL;
    m = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a(cgxertPrepareEmlrtTLS(moduleInstance->S, &st,
      moduleInstance->sysIdx, 6), 45, m, &b_u[0]);
    emlrtAssign(&y, m);
    for (i = 0; i < 45; i++) {
      b_u[i] = c_u[i];
    }

    b_y = NULL;
    m = emlrtCreateCharArray(2, &iv1[0]);
    emlrtInitCharArrayR2013a(cgxertPrepareEmlrtTLS(moduleInstance->S, &st,
      moduleInstance->sysIdx, 6), 45, m, &b_u[0]);
    emlrtAssign(&b_y, m);
    for (i = 0; i < 5; i++) {
      d_u[i] = e_u[i];
    }

    c_y = NULL;
    m = emlrtCreateCharArray(2, &iv2[0]);
    emlrtInitCharArrayR2013a(cgxertPrepareEmlrtTLS(moduleInstance->S, &st,
      moduleInstance->sysIdx, 6), 5, m, &d_u[0]);
    emlrtAssign(&c_y, m);
    b_st.site = &d_emlrtRSI;
    blkSrcLoc.sysIdx = moduleInstance->sysIdx;
    blkSrcLoc.blkIdx = 6;
    b_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
    b_blkSrcLoc.blkIdx = 6;
    c_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
    c_blkSrcLoc.blkIdx = 6;
    b_error(moduleInstance, &b_st, y, getString(moduleInstance, &b_st, message
             (moduleInstance, &b_st, b_y, c_y, &emlrtMCI, &blkSrcLoc), &emlrtMCI,
             &b_blkSrcLoc), &emlrtMCI, &c_blkSrcLoc);
  }
}

static void b_mw__internal__call__step(InstanceStruct_dnGfh1DX0a11xSfGnyzF5G
  *moduleInstance, const emlrtStack *sp, real_T b_u0[16], real_T b_u1[6], real_T
  b_u2[6], real_T c_y0[6], real_T *y1_Iterations, real_T *y1_PoseErrorNorm,
  uint16_T *y1_ExitFlag, uint8_T *y1_Status)
{
  static const int32_T iv[2] = { 1, 45 };

  static const int32_T iv1[2] = { 1, 45 };

  static const int32_T iv2[2] = { 1, 45 };

  static const int32_T iv3[2] = { 1, 51 };

  static const int32_T iv4[2] = { 1, 45 };

  static const int32_T iv5[2] = { 1, 4 };

  static const int32_T iv6[2] = { 1, 51 };

  static const int32_T iv7[2] = { 1, 4 };

  static const int32_T iv8[2] = { 1, 5 };

  static char_T f_u[51] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l', 'e',
    'd', 'W', 'h', 'e', 'n', 'L', 'o', 'c', 'k', 'e', 'd', 'R', 'e', 'l', 'e',
    'a', 's', 'e', 'd', 'C', 'o', 'd', 'e', 'g', 'e', 'n' };

  static char_T c_u[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l', 'e',
    'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C', 'o',
    'd', 'e', 'g', 'e', 'n' };

  static char_T cv[7] = { 's', 'u', 'c', 'c', 'e', 's', 's' };

  static char_T i_u[5] = { 's', 'e', 't', 'u', 'p' };

  static char_T g_u[4] = { 's', 't', 'e', 'p' };

  cgxertBlkSrcLocInfo b_blkSrcLoc;
  cgxertBlkSrcLocInfo blkSrcLoc;
  cgxertBlkSrcLocInfo c_blkSrcLoc;
  cgxertBlkSrcLocInfo d_blkSrcLoc;
  cgxertBlkSrcLocInfo e_blkSrcLoc;
  cgxertBlkSrcLocInfo f_blkSrcLoc;
  cgxertBlkSrcLocInfo g_blkSrcLoc;
  cgxertBlkSrcLocInfo h_blkSrcLoc;
  cgxertBlkSrcLocInfo i_blkSrcLoc;
  cgxertBlkSrcLocInfo j_blkSrcLoc;
  cgxertBlkSrcLocInfo k_blkSrcLoc;
  cgxertBlkSrcLocInfo l_blkSrcLoc;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack h_st;
  emlrtStack i_st;
  emlrtStack st;
  emxArray_real_T *A;
  emxArray_real_T *b_b;
  emxArray_real_T *r;
  emxArray_real_T *r1;
  inverseKinematics *b_obj;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *d_y;
  const mxArray *e_y;
  const mxArray *f_y;
  const mxArray *g_y;
  const mxArray *h_y;
  const mxArray *i_y;
  const mxArray *m;
  const mxArray *y;
  rigidBodyJoint *joint;
  robotics_manip_internal_RigidBody *c_obj;
  robotics_slmanip_internal_block_IKBlock *obj;
  real_T varargout_1[6];
  real_T b_m;
  real_T d;
  real_T d1;
  real_T d2;
  real_T d3;
  real_T n;
  real_T pnum;
  int32_T varargout_2_Status_size[2];
  int32_T b_i;
  int32_T b_loop_ub;
  int32_T exitg1;
  int32_T i;
  int32_T i1;
  int32_T i2;
  int32_T i3;
  int32_T i4;
  int32_T i5;
  int32_T loop_ub;
  char_T d_u[51];
  char_T b_u[45];
  char_T varargout_2_Status_data[14];
  char_T h_u[5];
  char_T e_u[4];
  int8_T b_I[16];
  boolean_T b_bool;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  f_st.prev = &e_st;
  f_st.tls = e_st.tls;
  g_st.prev = &f_st;
  g_st.tls = f_st.tls;
  h_st.prev = &g_st;
  h_st.tls = g_st.tls;
  i_st.prev = &h_st;
  i_st.tls = h_st.tls;
  if (!moduleInstance->b_sysobj_not_empty) {
    st.site = &t_emlrtRSI;
    b_st.site = &s_emlrtRSI;
    c_st.site = &b_emlrtRSI;
    d_st.site = &c_emlrtRSI;
    c_st.site = &b_emlrtRSI;
    d_st.site = &d_emlrtRSI;
    moduleInstance->b_sysobj.isInitialized = 0;
    moduleInstance->b_sysobj.matlabCodegenIsDeleted = false;
    moduleInstance->b_sysobj_not_empty = true;
  }

  st.site = &xe_emlrtRSI;
  obj = &moduleInstance->b_sysobj;
  if (moduleInstance->b_sysobj.isInitialized == 2) {
    for (i = 0; i < 45; i++) {
      b_u[i] = c_u[i];
    }

    y = NULL;
    m = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a(cgxertPrepareEmlrtTLS(moduleInstance->S, &st,
      moduleInstance->sysIdx, 6), 45, m, &b_u[0]);
    emlrtAssign(&y, m);
    for (i = 0; i < 45; i++) {
      b_u[i] = c_u[i];
    }

    c_y = NULL;
    m = emlrtCreateCharArray(2, &iv2[0]);
    emlrtInitCharArrayR2013a(cgxertPrepareEmlrtTLS(moduleInstance->S, &st,
      moduleInstance->sysIdx, 6), 45, m, &b_u[0]);
    emlrtAssign(&c_y, m);
    for (i = 0; i < 4; i++) {
      e_u[i] = g_u[i];
    }

    f_y = NULL;
    m = emlrtCreateCharArray(2, &iv5[0]);
    emlrtInitCharArrayR2013a(cgxertPrepareEmlrtTLS(moduleInstance->S, &st,
      moduleInstance->sysIdx, 6), 4, m, &e_u[0]);
    emlrtAssign(&f_y, m);
    b_st.site = &d_emlrtRSI;
    b_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
    b_blkSrcLoc.blkIdx = 6;
    c_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
    c_blkSrcLoc.blkIdx = 6;
    d_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
    d_blkSrcLoc.blkIdx = 6;
    b_error(moduleInstance, &b_st, y, getString(moduleInstance, &b_st, message
             (moduleInstance, &b_st, c_y, f_y, &emlrtMCI, &b_blkSrcLoc),
             &emlrtMCI, &c_blkSrcLoc), &emlrtMCI, &d_blkSrcLoc);
  }

  if (moduleInstance->b_sysobj.isInitialized != 1) {
    b_st.site = &d_emlrtRSI;
    c_st.site = &d_emlrtRSI;
    blkSrcLoc.sysIdx = moduleInstance->sysIdx;
    blkSrcLoc.blkIdx = 6;
    b_SystemCore_setup(moduleInstance, &c_st, obj, &blkSrcLoc);
  }

  b_st.site = &d_emlrtRSI;
  b_obj = &moduleInstance->b_sysobj.IKInternal;
  c_st.site = &d_emlrtRSI;
  if (moduleInstance->b_sysobj.IKInternal.isInitialized == 2) {
    for (i = 0; i < 45; i++) {
      b_u[i] = c_u[i];
    }

    b_y = NULL;
    m = emlrtCreateCharArray(2, &iv1[0]);
    emlrtInitCharArrayR2013a(cgxertPrepareEmlrtTLS(moduleInstance->S, &c_st,
      moduleInstance->sysIdx, 6), 45, m, &b_u[0]);
    emlrtAssign(&b_y, m);
    for (i = 0; i < 45; i++) {
      b_u[i] = c_u[i];
    }

    e_y = NULL;
    m = emlrtCreateCharArray(2, &iv4[0]);
    emlrtInitCharArrayR2013a(cgxertPrepareEmlrtTLS(moduleInstance->S, &c_st,
      moduleInstance->sysIdx, 6), 45, m, &b_u[0]);
    emlrtAssign(&e_y, m);
    for (i = 0; i < 4; i++) {
      e_u[i] = g_u[i];
    }

    h_y = NULL;
    m = emlrtCreateCharArray(2, &iv7[0]);
    emlrtInitCharArrayR2013a(cgxertPrepareEmlrtTLS(moduleInstance->S, &c_st,
      moduleInstance->sysIdx, 6), 4, m, &e_u[0]);
    emlrtAssign(&h_y, m);
    d_st.site = &d_emlrtRSI;
    e_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
    e_blkSrcLoc.blkIdx = 6;
    f_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
    f_blkSrcLoc.blkIdx = 6;
    g_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
    g_blkSrcLoc.blkIdx = 6;
    b_error(moduleInstance, &d_st, b_y, getString(moduleInstance, &d_st, message
             (moduleInstance, &d_st, e_y, h_y, &emlrtMCI, &e_blkSrcLoc),
             &emlrtMCI, &f_blkSrcLoc), &emlrtMCI, &g_blkSrcLoc);
  }

  if (moduleInstance->b_sysobj.IKInternal.isInitialized != 1) {
    d_st.site = &d_emlrtRSI;
    e_st.site = &d_emlrtRSI;
    moduleInstance->b_sysobj.IKInternal.isSetupComplete = false;
    if (moduleInstance->b_sysobj.IKInternal.isInitialized != 0) {
      for (i = 0; i < 51; i++) {
        d_u[i] = f_u[i];
      }

      d_y = NULL;
      m = emlrtCreateCharArray(2, &iv3[0]);
      emlrtInitCharArrayR2013a(cgxertPrepareEmlrtTLS(moduleInstance->S, &e_st,
        moduleInstance->sysIdx, 6), 51, m, &d_u[0]);
      emlrtAssign(&d_y, m);
      for (i = 0; i < 51; i++) {
        d_u[i] = f_u[i];
      }

      g_y = NULL;
      m = emlrtCreateCharArray(2, &iv6[0]);
      emlrtInitCharArrayR2013a(cgxertPrepareEmlrtTLS(moduleInstance->S, &e_st,
        moduleInstance->sysIdx, 6), 51, m, &d_u[0]);
      emlrtAssign(&g_y, m);
      for (i = 0; i < 5; i++) {
        h_u[i] = i_u[i];
      }

      i_y = NULL;
      m = emlrtCreateCharArray(2, &iv8[0]);
      emlrtInitCharArrayR2013a(cgxertPrepareEmlrtTLS(moduleInstance->S, &e_st,
        moduleInstance->sysIdx, 6), 5, m, &h_u[0]);
      emlrtAssign(&i_y, m);
      f_st.site = &d_emlrtRSI;
      h_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
      h_blkSrcLoc.blkIdx = 6;
      i_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
      i_blkSrcLoc.blkIdx = 6;
      j_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
      j_blkSrcLoc.blkIdx = 6;
      b_error(moduleInstance, &f_st, d_y, getString(moduleInstance, &f_st,
               message(moduleInstance, &f_st, g_y, i_y, &emlrtMCI, &h_blkSrcLoc),
               &emlrtMCI, &i_blkSrcLoc), &emlrtMCI, &j_blkSrcLoc);
    }

    moduleInstance->b_sysobj.IKInternal.isInitialized = 1;
    f_st.site = &d_emlrtRSI;
    g_st.site = &ye_emlrtRSI;
    n = moduleInstance->
      b_sysobj.IKInternal.RigidBodyTreeInternal->PositionNumber;
    emxInit_real_T(&A, 2);
    i = A->size[0] * A->size[1];
    d2 = emlrtNonNegativeCheckR2012b(n, &t_emlrtDCI, cgxertPrepareEmlrtTLS
      (moduleInstance->S, &g_st, moduleInstance->sysIdx, 6));
    A->size[0] = (int32_T)emlrtIntegerCheckR2012b(d2, &s_emlrtDCI,
      cgxertPrepareEmlrtTLS(moduleInstance->S, &g_st, moduleInstance->sysIdx, 6));
    A->size[1] = (int32_T)emlrtIntegerCheckR2012b(2.0 * n, &u_emlrtDCI,
      cgxertPrepareEmlrtTLS(moduleInstance->S, &g_st, moduleInstance->sysIdx, 6));
    emxEnsureCapacity_real_T(A, i);
    b_loop_ub = (int32_T)emlrtIntegerCheckR2012b(n, &v_emlrtDCI,
      cgxertPrepareEmlrtTLS(moduleInstance->S, &g_st, moduleInstance->sysIdx, 6))
      * (int32_T)emlrtIntegerCheckR2012b(2.0 * n, &v_emlrtDCI,
      cgxertPrepareEmlrtTLS(moduleInstance->S, &g_st, moduleInstance->sysIdx, 6));
    for (i = 0; i < b_loop_ub; i++) {
      A->data[i] = 0.0;
    }

    emxInit_real_T1(&b_b, 1);
    i = b_b->size[0];
    b_b->size[0] = (int32_T)emlrtIntegerCheckR2012b(2.0 * n, &w_emlrtDCI,
      cgxertPrepareEmlrtTLS(moduleInstance->S, &g_st, moduleInstance->sysIdx, 6));
    emxEnsureCapacity_real_T1(b_b, i);
    b_loop_ub = (int32_T)emlrtIntegerCheckR2012b(2.0 * n, &w_emlrtDCI,
      cgxertPrepareEmlrtTLS(moduleInstance->S, &g_st, moduleInstance->sysIdx, 6));
    for (i = 0; i < b_loop_ub; i++) {
      b_b->data[i] = 0.0;
    }

    n = 1.0;
    b_m = 1.0;
    d2 = moduleInstance->b_sysobj.IKInternal.RigidBodyTreeInternal->NumBodies;
    i = (int32_T)d2 - 1;
    emlrtForLoopVectorCheckR2021a(1.0, 1.0, d2, mxDOUBLE_CLASS, (int32_T)d2,
      &e_emlrtRTEI, cgxertPrepareEmlrtTLS(moduleInstance->S, &g_st,
      moduleInstance->sysIdx, 6));
    emxInit_real_T(&r, 2);
    emxInit_real_T(&r1, 2);
    for (b_i = 0; b_i <= i; b_i++) {
      h_st.site = &cf_emlrtRSI;
      c_obj = b_obj->RigidBodyTreeInternal->Bodies[emlrtDynamicBoundsCheckR2012b
        (b_i, 0, 6, &y_emlrtBCI, cgxertPrepareEmlrtTLS(moduleInstance->S, &h_st,
          moduleInstance->sysIdx, 6))];
      if (c_obj->Index == 0.0) {
        i_st.site = &od_emlrtRSI;
        k_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
        k_blkSrcLoc.blkIdx = 6;
        error(moduleInstance, &i_st, &k_blkSrcLoc);
      }

      joint = c_obj->JointInternal;
      pnum = joint->PositionNumber;
      if (!e_strcmp(joint->Type)) {
        d2 = (n + pnum) - 1.0;
        if (n > d2) {
          i1 = 0;
          i2 = 0;
        } else {
          i1 = A->size[0];
          i2 = (int32_T)emlrtIntegerCheckR2012b(n, &k_emlrtDCI,
            cgxertPrepareEmlrtTLS(moduleInstance->S, &g_st,
            moduleInstance->sysIdx, 6));
          i1 = emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &q_emlrtBCI,
            cgxertPrepareEmlrtTLS(moduleInstance->S, &g_st,
            moduleInstance->sysIdx, 6)) - 1;
          i2 = A->size[0];
          i3 = (int32_T)emlrtIntegerCheckR2012b(d2, &l_emlrtDCI,
            cgxertPrepareEmlrtTLS(moduleInstance->S, &g_st,
            moduleInstance->sysIdx, 6));
          i2 = emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &r_emlrtBCI,
            cgxertPrepareEmlrtTLS(moduleInstance->S, &g_st,
            moduleInstance->sysIdx, 6));
        }

        d2 = (b_m + pnum) - 1.0;
        if (b_m > d2) {
          i3 = 0;
          i4 = 0;
        } else {
          i3 = A->size[1];
          i4 = (int32_T)emlrtIntegerCheckR2012b(b_m, &m_emlrtDCI,
            cgxertPrepareEmlrtTLS(moduleInstance->S, &g_st,
            moduleInstance->sysIdx, 6));
          i3 = emlrtDynamicBoundsCheckR2012b(i4, 1, i3, &s_emlrtBCI,
            cgxertPrepareEmlrtTLS(moduleInstance->S, &g_st,
            moduleInstance->sysIdx, 6)) - 1;
          i4 = A->size[1];
          i5 = (int32_T)emlrtIntegerCheckR2012b(d2, &n_emlrtDCI,
            cgxertPrepareEmlrtTLS(moduleInstance->S, &g_st,
            moduleInstance->sysIdx, 6));
          i4 = emlrtDynamicBoundsCheckR2012b(i5, 1, i4, &t_emlrtBCI,
            cgxertPrepareEmlrtTLS(moduleInstance->S, &g_st,
            moduleInstance->sysIdx, 6));
        }

        h_st.site = &df_emlrtRSI;
        b_eye(moduleInstance, &h_st, pnum, r1);
        varargout_2_Status_size[0] = i2 - i1;
        varargout_2_Status_size[1] = i4 - i3;
        emlrtSubAssignSizeCheckR2012b(&varargout_2_Status_size[0], 2,
          &(*(int32_T (*)[2])r1->size)[0], 2, &b_emlrtECI, cgxertPrepareEmlrtTLS
          (moduleInstance->S, &g_st, moduleInstance->sysIdx, 6));
        b_loop_ub = r1->size[1];
        for (i2 = 0; i2 < b_loop_ub; i2++) {
          loop_ub = r1->size[0];
          for (i4 = 0; i4 < loop_ub; i4++) {
            A->data[(i1 + i4) + A->size[0] * (i3 + i2)] = r1->data[i4 + r1->
              size[0] * i2];
          }
        }

        d2 = (n + pnum) - 1.0;
        if (n > d2) {
          i1 = 0;
          i2 = 0;
        } else {
          i1 = A->size[0];
          i2 = (int32_T)emlrtIntegerCheckR2012b(n, &o_emlrtDCI,
            cgxertPrepareEmlrtTLS(moduleInstance->S, &g_st,
            moduleInstance->sysIdx, 6));
          i1 = emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &u_emlrtBCI,
            cgxertPrepareEmlrtTLS(moduleInstance->S, &g_st,
            moduleInstance->sysIdx, 6)) - 1;
          i2 = A->size[0];
          i3 = (int32_T)emlrtIntegerCheckR2012b(d2, &p_emlrtDCI,
            cgxertPrepareEmlrtTLS(moduleInstance->S, &g_st,
            moduleInstance->sysIdx, 6));
          i2 = emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &v_emlrtBCI,
            cgxertPrepareEmlrtTLS(moduleInstance->S, &g_st,
            moduleInstance->sysIdx, 6));
        }

        d2 = b_m + pnum;
        d3 = (b_m + 2.0 * pnum) - 1.0;
        if (d2 > d3) {
          i3 = 0;
          i4 = 0;
        } else {
          i3 = A->size[1];
          i4 = (int32_T)emlrtIntegerCheckR2012b(d2, &q_emlrtDCI,
            cgxertPrepareEmlrtTLS(moduleInstance->S, &g_st,
            moduleInstance->sysIdx, 6));
          i3 = emlrtDynamicBoundsCheckR2012b(i4, 1, i3, &w_emlrtBCI,
            cgxertPrepareEmlrtTLS(moduleInstance->S, &g_st,
            moduleInstance->sysIdx, 6)) - 1;
          i4 = A->size[1];
          i5 = (int32_T)emlrtIntegerCheckR2012b(d3, &r_emlrtDCI,
            cgxertPrepareEmlrtTLS(moduleInstance->S, &g_st,
            moduleInstance->sysIdx, 6));
          i4 = emlrtDynamicBoundsCheckR2012b(i5, 1, i4, &x_emlrtBCI,
            cgxertPrepareEmlrtTLS(moduleInstance->S, &g_st,
            moduleInstance->sysIdx, 6));
        }

        h_st.site = &ef_emlrtRSI;
        b_eye(moduleInstance, &h_st, pnum, r1);
        i5 = r1->size[0] * r1->size[1];
        loop_ub = r1->size[0] * r1->size[1];
        emxEnsureCapacity_real_T(r1, loop_ub);
        b_loop_ub = i5 - 1;
        for (i5 = 0; i5 <= b_loop_ub; i5++) {
          r1->data[i5] = -r1->data[i5];
        }

        varargout_2_Status_size[0] = i2 - i1;
        varargout_2_Status_size[1] = i4 - i3;
        emlrtSubAssignSizeCheckR2012b(&varargout_2_Status_size[0], 2,
          &(*(int32_T (*)[2])r1->size)[0], 2, &c_emlrtECI, cgxertPrepareEmlrtTLS
          (moduleInstance->S, &g_st, moduleInstance->sysIdx, 6));
        b_loop_ub = r1->size[1];
        for (i2 = 0; i2 < b_loop_ub; i2++) {
          loop_ub = r1->size[0];
          for (i4 = 0; i4 < loop_ub; i4++) {
            A->data[(i1 + i4) + A->size[0] * (i3 + i2)] = r1->data[i4 + r1->
              size[0] * i2];
          }
        }

        h_st.site = &ff_emlrtRSI;
        i1 = r->size[0] * r->size[1];
        r->size[0] = joint->PositionLimitsInternal->size[0];
        r->size[1] = 2;
        emxEnsureCapacity_real_T(r, i1);
        b_loop_ub = joint->PositionLimitsInternal->size[0] << 1;
        for (i1 = 0; i1 < b_loop_ub; i1++) {
          r->data[i1] = joint->PositionLimitsInternal->data[i1];
        }

        i1 = r->size[0] << 1;
        emlrtDynamicBoundsCheckR2012b(2, 1, i1, &o_emlrtBCI,
          cgxertPrepareEmlrtTLS(moduleInstance->S, &g_st, moduleInstance->sysIdx,
          6));
        i1 = b_b->size[0];
        i2 = (int32_T)emlrtIntegerCheckR2012b(b_m, &ab_emlrtDCI,
          cgxertPrepareEmlrtTLS(moduleInstance->S, &g_st, moduleInstance->sysIdx,
          6));
        b_b->data[emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &ab_emlrtBCI,
          cgxertPrepareEmlrtTLS(moduleInstance->S, &g_st, moduleInstance->sysIdx,
          6)) - 1] = r->data[1];
        h_st.site = &gf_emlrtRSI;
        i1 = r->size[0] * r->size[1];
        r->size[0] = joint->PositionLimitsInternal->size[0];
        r->size[1] = 2;
        emxEnsureCapacity_real_T(r, i1);
        b_loop_ub = joint->PositionLimitsInternal->size[0] << 1;
        for (i1 = 0; i1 < b_loop_ub; i1++) {
          r->data[i1] = joint->PositionLimitsInternal->data[i1];
        }

        i1 = r->size[0] << 1;
        emlrtDynamicBoundsCheckR2012b(1, 1, i1, &p_emlrtBCI,
          cgxertPrepareEmlrtTLS(moduleInstance->S, &g_st, moduleInstance->sysIdx,
          6));
        i1 = b_b->size[0];
        b_b->data[emlrtDynamicBoundsCheckR2012b((int32_T)((uint32_T)b_m + 1U), 1,
          i1, &bb_emlrtBCI, cgxertPrepareEmlrtTLS(moduleInstance->S, &g_st,
          moduleInstance->sysIdx, 6)) - 1] = -r->data[0];
        b_m += 2.0 * pnum;
      }

      n += pnum;
    }

    emxFree_real_T(&r1);
    emxFree_real_T(&r);
    i = moduleInstance->b_sysobj.IKInternal.Solver->ConstraintMatrix->size[0] *
      moduleInstance->b_sysobj.IKInternal.Solver->ConstraintMatrix->size[1];
    moduleInstance->b_sysobj.IKInternal.Solver->ConstraintMatrix->size[0] =
      A->size[0];
    moduleInstance->b_sysobj.IKInternal.Solver->ConstraintMatrix->size[1] =
      A->size[1];
    emxEnsureCapacity_real_T(moduleInstance->
      b_sysobj.IKInternal.Solver->ConstraintMatrix, i);
    b_loop_ub = A->size[0] * A->size[1] - 1;
    for (i = 0; i <= b_loop_ub; i++) {
      moduleInstance->b_sysobj.IKInternal.Solver->ConstraintMatrix->data[i] =
        A->data[i];
    }

    emxFree_real_T(&A);
    i = moduleInstance->b_sysobj.IKInternal.Solver->ConstraintBound->size[0];
    moduleInstance->b_sysobj.IKInternal.Solver->ConstraintBound->size[0] =
      b_b->size[0];
    emxEnsureCapacity_real_T1(moduleInstance->
      b_sysobj.IKInternal.Solver->ConstraintBound, i);
    b_loop_ub = b_b->size[0];
    for (i = 0; i < b_loop_ub; i++) {
      moduleInstance->b_sysobj.IKInternal.Solver->ConstraintBound->data[i] =
        b_b->data[i];
    }

    g_st.site = &af_emlrtRSI;
    l_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
    l_blkSrcLoc.blkIdx = 6;
    RigidBodyTree_get_JointPositionLimits(moduleInstance, &g_st,
      obj->IKInternal.RigidBodyTreeInternal, obj->IKInternal.Limits,
      &l_blkSrcLoc);
    g_st.site = &bf_emlrtRSI;
    h_st.site = &kf_emlrtRSI;
    i_st.site = &lf_emlrtRSI;
    b_obj->_pobj0.matlabCodegenIsDeleted = false;
    moduleInstance->b_sysobj.IKInternal.Solver->ExtraArgs = &b_obj->_pobj0;
    for (i = 0; i < 36; i++) {
      moduleInstance->b_sysobj.IKInternal.Solver->ExtraArgs->WeightMatrix[i] =
        0.0;
    }

    moduleInstance->b_sysobj.IKInternal.Solver->ExtraArgs->Robot =
      moduleInstance->b_sysobj.IKInternal.RigidBodyTreeInternal;
    for (i = 0; i < 16; i++) {
      b_I[i] = 0;
    }

    for (loop_ub = 0; loop_ub < 4; loop_ub++) {
      b_I[loop_ub + (loop_ub << 2)] = 1;
    }

    for (i = 0; i < 16; i++) {
      moduleInstance->b_sysobj.IKInternal.Solver->ExtraArgs->Tform[i] = (real_T)
        b_I[i];
    }

    moduleInstance->b_sysobj.IKInternal.Solver->ExtraArgs->BodyName->size[0] = 1;
    moduleInstance->b_sysobj.IKInternal.Solver->ExtraArgs->BodyName->size[1] = 0;
    i = moduleInstance->b_sysobj.IKInternal.Solver->ExtraArgs->ErrTemp->size[0];
    moduleInstance->b_sysobj.IKInternal.Solver->ExtraArgs->ErrTemp->size[0] = 6;
    emxEnsureCapacity_real_T1(moduleInstance->
      b_sysobj.IKInternal.Solver->ExtraArgs->ErrTemp, i);
    for (i = 0; i < 6; i++) {
      moduleInstance->b_sysobj.IKInternal.Solver->ExtraArgs->ErrTemp->data[i] =
        0.0;
    }

    moduleInstance->b_sysobj.IKInternal.Solver->ExtraArgs->CostTemp = 0.0;
    i = b_b->size[0];
    d2 = moduleInstance->
      b_sysobj.IKInternal.RigidBodyTreeInternal->PositionNumber;
    d2 = emlrtNonNegativeCheckR2012b(d2, &y_emlrtDCI, cgxertPrepareEmlrtTLS
      (moduleInstance->S, &g_st, moduleInstance->sysIdx, 6));
    b_b->size[0] = (int32_T)emlrtIntegerCheckR2012b(d2, &x_emlrtDCI,
      cgxertPrepareEmlrtTLS(moduleInstance->S, &g_st, moduleInstance->sysIdx, 6));
    emxEnsureCapacity_real_T1(b_b, i);
    d2 = moduleInstance->
      b_sysobj.IKInternal.RigidBodyTreeInternal->PositionNumber;
    d2 = emlrtNonNegativeCheckR2012b(d2, &y_emlrtDCI, cgxertPrepareEmlrtTLS
      (moduleInstance->S, &g_st, moduleInstance->sysIdx, 6));
    b_loop_ub = (int32_T)emlrtIntegerCheckR2012b(d2, &x_emlrtDCI,
      cgxertPrepareEmlrtTLS(moduleInstance->S, &g_st, moduleInstance->sysIdx, 6));
    for (i = 0; i < b_loop_ub; i++) {
      b_b->data[i] = 0.0;
    }

    i = b_b->size[0];
    emlrtDimSizeGeqCheckR2012b(49, i, &d_emlrtECI, cgxertPrepareEmlrtTLS
      (moduleInstance->S, &g_st, moduleInstance->sysIdx, 6));
    i = moduleInstance->b_sysobj.IKInternal.Solver->ExtraArgs->GradTemp->size[0];
    moduleInstance->b_sysobj.IKInternal.Solver->ExtraArgs->GradTemp->size[0] =
      b_b->size[0];
    emxEnsureCapacity_real_T1(moduleInstance->
      b_sysobj.IKInternal.Solver->ExtraArgs->GradTemp, i);
    b_loop_ub = b_b->size[0];
    for (i = 0; i < b_loop_ub; i++) {
      moduleInstance->b_sysobj.IKInternal.Solver->ExtraArgs->GradTemp->data[i] =
        b_b->data[i];
    }

    emxFree_real_T(&b_b);
    moduleInstance->b_sysobj.IKInternal.isSetupComplete = true;
  }

  d_st.site = &d_emlrtRSI;
  inverseKinematics_stepImpl(moduleInstance, &d_st, &obj->IKInternal, b_u0, b_u1,
    b_u2, varargout_1, &d, &d1, &n, varargout_2_Status_data,
    varargout_2_Status_size);
  *y1_PoseErrorNorm = d1;
  *y1_Iterations = d;
  d2 = muDoubleScalarRound(n);
  if (d2 < 65536.0) {
    if (d2 >= 0.0) {
      *y1_ExitFlag = (uint16_T)d2;
    } else {
      *y1_ExitFlag = 0U;
    }
  } else if (d2 >= 65536.0) {
    *y1_ExitFlag = MAX_uint16_T;
  } else {
    *y1_ExitFlag = 0U;
  }

  b_bool = false;
  if (varargout_2_Status_size[1] != 7) {
  } else {
    loop_ub = 1;
    do {
      exitg1 = 0;
      if (loop_ub - 1 < 7) {
        if (varargout_2_Status_data[loop_ub - 1] != cv[loop_ub - 1]) {
          exitg1 = 1;
        } else {
          loop_ub++;
        }
      } else {
        b_bool = true;
        exitg1 = 1;
      }
    } while (exitg1 == 0);
  }

  if (b_bool) {
    *y1_Status = 1U;
  } else {
    *y1_Status = 2U;
  }

  for (i = 0; i < 6; i++) {
    c_y0[i] = varargout_1[i];
  }
}

static void b_eye(InstanceStruct_dnGfh1DX0a11xSfGnyzF5G *moduleInstance, const
                  emlrtStack *sp, real_T varargin_1, emxArray_real_T *b_I)
{
  static const int32_T iv[2] = { 1, 28 };

  static const int32_T iv1[2] = { 1, 21 };

  static const int32_T iv2[2] = { 1, 28 };

  static const int32_T iv3[2] = { 1, 21 };

  static char_T c_u[28] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T', 'L',
    'A', 'B', ':', 'N', 'o', 'n', 'I', 'n', 't', 'e', 'g', 'e', 'r', 'I', 'n',
    'p', 'u', 't' };

  static char_T e_u[21] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T', 'L',
    'A', 'B', ':', 'p', 'm', 'a', 'x', 's', 'i', 'z', 'e' };

  cgxertBlkSrcLocInfo b_blkSrcLoc;
  cgxertBlkSrcLocInfo blkSrcLoc;
  cgxertBlkSrcLocInfo c_blkSrcLoc;
  cgxertBlkSrcLocInfo d_blkSrcLoc;
  cgxertBlkSrcLocInfo e_blkSrcLoc;
  cgxertBlkSrcLocInfo f_blkSrcLoc;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *d_y;
  const mxArray *e_y;
  const mxArray *f_y;
  const mxArray *m;
  const mxArray *y;
  real_T n;
  real_T t;
  int32_T b_m;
  int32_T i;
  int32_T loop_ub;
  char_T b_u[28];
  char_T d_u[21];
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &hf_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  if (varargin_1 < 0.0) {
    t = 0.0;
  } else {
    t = varargin_1;
  }

  b_st.site = &if_emlrtRSI;
  if ((t != muDoubleScalarFloor(t)) || muDoubleScalarIsInf(t) || (t >
       2.147483647E+9)) {
    for (i = 0; i < 28; i++) {
      b_u[i] = c_u[i];
    }

    y = NULL;
    m = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a(cgxertPrepareEmlrtTLS(moduleInstance->S, &b_st,
      moduleInstance->sysIdx, 6), 28, m, &b_u[0]);
    emlrtAssign(&y, m);
    for (i = 0; i < 28; i++) {
      b_u[i] = c_u[i];
    }

    c_y = NULL;
    m = emlrtCreateCharArray(2, &iv2[0]);
    emlrtInitCharArrayR2013a(cgxertPrepareEmlrtTLS(moduleInstance->S, &b_st,
      moduleInstance->sysIdx, 6), 28, m, &b_u[0]);
    emlrtAssign(&c_y, m);
    d_y = NULL;
    m = emlrtCreateNumericMatrix(1, 1, mxINT32_CLASS, mxREAL);
    *(int32_T *)emlrtMxGetData(m) = MIN_int32_T;
    emlrtAssign(&d_y, m);
    f_y = NULL;
    m = emlrtCreateNumericMatrix(1, 1, mxINT32_CLASS, mxREAL);
    *(int32_T *)emlrtMxGetData(m) = MAX_int32_T;
    emlrtAssign(&f_y, m);
    c_st.site = &in_emlrtRSI;
    c_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
    c_blkSrcLoc.blkIdx = 6;
    e_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
    e_blkSrcLoc.blkIdx = 6;
    f_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
    f_blkSrcLoc.blkIdx = 6;
    b_error(moduleInstance, &c_st, y, getString(moduleInstance, &c_st, d_message
             (moduleInstance, &c_st, c_y, d_y, f_y, &l_emlrtMCI, &f_blkSrcLoc),
             &l_emlrtMCI, &c_blkSrcLoc), &l_emlrtMCI, &e_blkSrcLoc);
  }

  if (t <= 0.0) {
    n = 0.0;
  } else {
    n = t;
  }

  if (!(n <= 2.147483647E+9)) {
    for (i = 0; i < 21; i++) {
      d_u[i] = e_u[i];
    }

    b_y = NULL;
    m = emlrtCreateCharArray(2, &iv1[0]);
    emlrtInitCharArrayR2013a(cgxertPrepareEmlrtTLS(moduleInstance->S, &b_st,
      moduleInstance->sysIdx, 6), 21, m, &d_u[0]);
    emlrtAssign(&b_y, m);
    for (i = 0; i < 21; i++) {
      d_u[i] = e_u[i];
    }

    e_y = NULL;
    m = emlrtCreateCharArray(2, &iv3[0]);
    emlrtInitCharArrayR2013a(cgxertPrepareEmlrtTLS(moduleInstance->S, &b_st,
      moduleInstance->sysIdx, 6), 21, m, &d_u[0]);
    emlrtAssign(&e_y, m);
    c_st.site = &hn_emlrtRSI;
    blkSrcLoc.sysIdx = moduleInstance->sysIdx;
    blkSrcLoc.blkIdx = 6;
    b_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
    b_blkSrcLoc.blkIdx = 6;
    d_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
    d_blkSrcLoc.blkIdx = 6;
    b_error(moduleInstance, &c_st, b_y, getString(moduleInstance, &c_st,
             b_message(moduleInstance, &c_st, e_y, &m_emlrtMCI, &d_blkSrcLoc),
             &m_emlrtMCI, &blkSrcLoc), &m_emlrtMCI, &b_blkSrcLoc);
  }

  b_m = (int32_T)t - 1;
  i = b_I->size[0] * b_I->size[1];
  b_I->size[0] = (int32_T)t;
  b_I->size[1] = (int32_T)t;
  emxEnsureCapacity_real_T(b_I, i);
  loop_ub = (int32_T)t * (int32_T)t;
  for (i = 0; i < loop_ub; i++) {
    b_I->data[i] = 0.0;
  }

  if ((int32_T)t > 0) {
    for (loop_ub = 0; loop_ub <= b_m; loop_ub++) {
      b_I->data[loop_ub + b_I->size[0] * loop_ub] = 1.0;
    }
  }
}

static void RigidBodyTree_get_JointPositionLimits
  (InstanceStruct_dnGfh1DX0a11xSfGnyzF5G *moduleInstance, const emlrtStack *sp,
   robotics_manip_internal_RigidBodyTree_1 *obj, emxArray_real_T *limits,
   cgxertBlkSrcLocInfo *blkSrc)
{
  emlrtStack st;
  emxArray_real_T *r;
  rigidBodyJoint *b_obj;
  robotics_manip_internal_RigidBody *body;
  real_T d;
  real_T k;
  real_T pnum;
  int32_T iv[2];
  int32_T b_i;
  int32_T i;
  int32_T i1;
  int32_T i2;
  int32_T i3;
  int32_T loop_ub;
  i = limits->size[0] * limits->size[1];
  d = emlrtNonNegativeCheckR2012b(obj->PositionNumber, &eb_emlrtDCI,
    cgxertPrepareEmlrtTLS(moduleInstance->S, (emlrtConstCTX)sp,
    moduleInstance->sysIdx, 6));
  limits->size[0] = (int32_T)emlrtIntegerCheckR2012b(d, &db_emlrtDCI,
    cgxertPrepareEmlrtTLS(moduleInstance->S, (emlrtConstCTX)sp,
    moduleInstance->sysIdx, 6));
  limits->size[1] = 2;
  emxEnsureCapacity_real_T(limits, i);
  d = emlrtNonNegativeCheckR2012b(obj->PositionNumber, &gb_emlrtDCI,
    cgxertPrepareEmlrtTLS(moduleInstance->S, (emlrtConstCTX)sp,
    moduleInstance->sysIdx, 6));
  loop_ub = (int32_T)emlrtIntegerCheckR2012b(d, &fb_emlrtDCI,
    cgxertPrepareEmlrtTLS(moduleInstance->S, (emlrtConstCTX)sp,
    moduleInstance->sysIdx, 6)) << 1;
  for (i = 0; i < loop_ub; i++) {
    limits->data[i] = 0.0;
  }

  k = 1.0;
  d = obj->NumBodies;
  i = (int32_T)d - 1;
  emlrtForLoopVectorCheckR2021a(1.0, 1.0, d, mxDOUBLE_CLASS, (int32_T)d,
    &f_emlrtRTEI, cgxertPrepareEmlrtTLS(moduleInstance->S, (emlrtConstCTX)sp,
    moduleInstance->sysIdx, 6));
  emxInit_real_T(&r, 2);
  for (b_i = 0; b_i <= i; b_i++) {
    body = obj->Bodies[emlrtDynamicBoundsCheckR2012b(b_i, 0, 6, &eb_emlrtBCI,
      cgxertPrepareEmlrtTLS(moduleInstance->S, (emlrtConstCTX)sp,
      moduleInstance->sysIdx, 6))];
    if (!e_strcmp(body->JointInternal->Type)) {
      pnum = body->JointInternal->PositionNumber;
      d = (k + pnum) - 1.0;
      if (k > d) {
        i1 = 0;
        i2 = 0;
      } else {
        i1 = limits->size[0];
        i2 = (int32_T)emlrtIntegerCheckR2012b(k, &bb_emlrtDCI,
          cgxertPrepareEmlrtTLS(moduleInstance->S, (emlrtConstCTX)sp,
          moduleInstance->sysIdx, 6));
        i1 = emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &cb_emlrtBCI,
          cgxertPrepareEmlrtTLS(moduleInstance->S, (emlrtConstCTX)sp,
          moduleInstance->sysIdx, 6)) - 1;
        i2 = limits->size[0];
        i3 = (int32_T)emlrtIntegerCheckR2012b(d, &cb_emlrtDCI,
          cgxertPrepareEmlrtTLS(moduleInstance->S, (emlrtConstCTX)sp,
          blkSrc->sysIdx, blkSrc->blkIdx));
        i2 = emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &db_emlrtBCI,
          cgxertPrepareEmlrtTLS(moduleInstance->S, (emlrtConstCTX)sp,
          blkSrc->sysIdx, blkSrc->blkIdx));
      }

      st.site = &jf_emlrtRSI;
      b_obj = body->JointInternal;
      i3 = r->size[0] * r->size[1];
      r->size[0] = b_obj->PositionLimitsInternal->size[0];
      r->size[1] = 2;
      emxEnsureCapacity_real_T(r, i3);
      loop_ub = b_obj->PositionLimitsInternal->size[0] << 1;
      for (i3 = 0; i3 < loop_ub; i3++) {
        r->data[i3] = b_obj->PositionLimitsInternal->data[i3];
      }

      iv[0] = i2 - i1;
      iv[1] = 2;
      emlrtSubAssignSizeCheckR2012b(&iv[0], 2, &(*(int32_T (*)[2])r->size)[0], 2,
        &e_emlrtECI, cgxertPrepareEmlrtTLS(moduleInstance->S, (void *)sp,
        blkSrc->sysIdx, blkSrc->blkIdx));
      for (i2 = 0; i2 < 2; i2++) {
        loop_ub = r->size[0];
        for (i3 = 0; i3 < loop_ub; i3++) {
          limits->data[(i1 + i3) + limits->size[0] * i2] = r->data[i3 + r->size
            [0] * i2];
        }
      }

      k += pnum;
    }
  }

  emxFree_real_T(&r);
}

static void inverseKinematics_stepImpl(InstanceStruct_dnGfh1DX0a11xSfGnyzF5G
  *moduleInstance, const emlrtStack *sp, inverseKinematics *obj, real_T tform[16],
  real_T weights[6], real_T initialGuess[6], real_T QSol[6], real_T
  *solutionInfo_Iterations, real_T *solutionInfo_PoseErrorNorm, real_T
  *solutionInfo_ExitFlag, char_T solutionInfo_Status_data[], int32_T
  solutionInfo_Status_size[2])
{
  static const int32_T iv[2] = { 1, 55 };

  static const int32_T iv1[2] = { 1, 55 };

  static const int32_T iv2[2] = { 1, 46 };

  static const int32_T iv3[2] = { 1, 46 };

  static const int32_T iv4[2] = { 1, 5 };

  static char_T c_u[55] = { 'r', 'o', 'b', 'o', 't', 'i', 'c', 's', ':', 'r',
    'o', 'b', 'o', 't', 'm', 'a', 'n', 'i', 'p', ':', 'i', 'n', 'v', 'e', 'r',
    's', 'e', 'k', 'i', 'n', 'e', 'm', 'a', 't', 'i', 'c', 's', ':', 'E', 'n',
    'd', 'E', 'f', 'f', 'e', 'c', 't', 'o', 'r', 'I', 's', 'B', 'a', 's', 'e' };

  static char_T e_u[46] = { 'r', 'o', 'b', 'o', 't', 'i', 'c', 's', ':', 'r',
    'o', 'b', 'o', 't', 'm', 'a', 'n', 'i', 'p', ':', 'r', 'i', 'g', 'i', 'd',
    'b', 'o', 'd', 'y', 't', 'r', 'e', 'e', ':', 'B', 'o', 'd', 'y', 'N', 'o',
    't', 'F', 'o', 'u', 'n', 'd' };

  static char_T g_u[5] = { 'B', 'o', 'd', 'y', '7' };

  static int8_T iv5[4] = { 0, 0, 0, 1 };

  cgxertBlkSrcLocInfo b_blkSrcLoc;
  cgxertBlkSrcLocInfo blkSrcLoc;
  cgxertBlkSrcLocInfo c_blkSrcLoc;
  cgxertBlkSrcLocInfo d_blkSrcLoc;
  cgxertBlkSrcLocInfo e_blkSrcLoc;
  cgxertBlkSrcLocInfo f_blkSrcLoc;
  cgxertBlkSrcLocInfo g_blkSrcLoc;
  cgxertBlkSrcLocInfo h_blkSrcLoc;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  emxArray_char_T *b_basename;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *d_y;
  const mxArray *e_y;
  const mxArray *m;
  const mxArray *y;
  robotics_manip_internal_IKExtraArgs *args;
  robotics_manip_internal_RigidBody *c_obj;
  robotics_manip_internal_RigidBodyTree_1 *b_obj;
  real_T weightMatrix[36];
  real_T R[9];
  real_T dv[9];
  real_T x[9];
  real_T b_maxval[3];
  real_T absxk;
  real_T d;
  real_T d1;
  real_T d2;
  real_T maxval;
  real_T scale;
  real_T t;
  int32_T b_i;
  int32_T bid;
  int32_T i;
  int32_T idx;
  char_T b_u[55];
  char_T d_u[46];
  char_T f_u[5];
  boolean_T exitg1;
  boolean_T guard1 = false;
  boolean_T p;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &mf_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  emxInit_char_T(&b_basename, 2);
  b_st.site = &of_emlrtRSI;
  b_obj = obj->RigidBodyTreeInternal;
  c_st.site = &oc_emlrtRSI;
  i = b_basename->size[0] * b_basename->size[1];
  b_basename->size[0] = 1;
  b_basename->size[1] = b_obj->Base.NameInternal->size[1];
  emxEnsureCapacity_char_T(b_basename, i);
  idx = b_obj->Base.NameInternal->size[1];
  for (i = 0; i < idx; i++) {
    b_basename->data[i] = b_obj->Base.NameInternal->data[i];
  }

  if (f_strcmp(b_basename)) {
    b_st.site = &pf_emlrtRSI;
    for (i = 0; i < 55; i++) {
      b_u[i] = c_u[i];
    }

    y = NULL;
    m = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a(cgxertPrepareEmlrtTLS(moduleInstance->S, &b_st,
      moduleInstance->sysIdx, 6), 55, m, &b_u[0]);
    emlrtAssign(&y, m);
    for (i = 0; i < 55; i++) {
      b_u[i] = c_u[i];
    }

    b_y = NULL;
    m = emlrtCreateCharArray(2, &iv1[0]);
    emlrtInitCharArrayR2013a(cgxertPrepareEmlrtTLS(moduleInstance->S, &b_st,
      moduleInstance->sysIdx, 6), 55, m, &b_u[0]);
    emlrtAssign(&b_y, m);
    c_st.site = &gn_emlrtRSI;
    blkSrcLoc.sysIdx = moduleInstance->sysIdx;
    blkSrcLoc.blkIdx = 6;
    b_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
    b_blkSrcLoc.blkIdx = 6;
    c_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
    c_blkSrcLoc.blkIdx = 6;
    b_error(moduleInstance, &c_st, y, getString(moduleInstance, &c_st, b_message
             (moduleInstance, &c_st, b_y, &n_emlrtMCI, &c_blkSrcLoc),
             &n_emlrtMCI, &blkSrcLoc), &n_emlrtMCI, &b_blkSrcLoc);
  }

  b_st.site = &qf_emlrtRSI;
  b_obj = obj->RigidBodyTreeInternal;
  c_st.site = &md_emlrtRSI;
  bid = -2;
  d_st.site = &tc_emlrtRSI;
  i = b_basename->size[0] * b_basename->size[1];
  b_basename->size[0] = 1;
  b_basename->size[1] = b_obj->Base.NameInternal->size[1];
  emxEnsureCapacity_char_T(b_basename, i);
  idx = b_obj->Base.NameInternal->size[1];
  for (i = 0; i < idx; i++) {
    b_basename->data[i] = b_obj->Base.NameInternal->data[i];
  }

  if (f_strcmp(b_basename)) {
    bid = -1;
  } else {
    maxval = b_obj->NumBodies;
    emlrtForLoopVectorCheckR2021a(1.0, 1.0, maxval, mxDOUBLE_CLASS, (int32_T)
      maxval, &b_emlrtRTEI, cgxertPrepareEmlrtTLS(moduleInstance->S, &c_st,
      moduleInstance->sysIdx, 6));
    b_i = 0;
    exitg1 = false;
    while ((!exitg1) && (b_i <= (int32_T)maxval - 1)) {
      d_st.site = &uc_emlrtRSI;
      c_obj = b_obj->Bodies[emlrtDynamicBoundsCheckR2012b(b_i, 0, 6, &b_emlrtBCI,
        cgxertPrepareEmlrtTLS(moduleInstance->S, &d_st, moduleInstance->sysIdx,
        6))];
      i = b_basename->size[0] * b_basename->size[1];
      b_basename->size[0] = 1;
      b_basename->size[1] = c_obj->NameInternal->size[1];
      emxEnsureCapacity_char_T(b_basename, i);
      idx = c_obj->NameInternal->size[1];
      for (i = 0; i < idx; i++) {
        b_basename->data[i] = c_obj->NameInternal->data[i];
      }

      if (f_strcmp(b_basename)) {
        bid = b_i;
        exitg1 = true;
      } else {
        b_i++;
      }
    }
  }

  emxFree_char_T(&b_basename);
  if (bid + 1 == -1) {
    c_st.site = &nd_emlrtRSI;
    for (i = 0; i < 46; i++) {
      d_u[i] = e_u[i];
    }

    c_y = NULL;
    m = emlrtCreateCharArray(2, &iv2[0]);
    emlrtInitCharArrayR2013a(cgxertPrepareEmlrtTLS(moduleInstance->S, &c_st,
      moduleInstance->sysIdx, 6), 46, m, &d_u[0]);
    emlrtAssign(&c_y, m);
    for (i = 0; i < 46; i++) {
      d_u[i] = e_u[i];
    }

    d_y = NULL;
    m = emlrtCreateCharArray(2, &iv3[0]);
    emlrtInitCharArrayR2013a(cgxertPrepareEmlrtTLS(moduleInstance->S, &c_st,
      moduleInstance->sysIdx, 6), 46, m, &d_u[0]);
    emlrtAssign(&d_y, m);
    for (i = 0; i < 5; i++) {
      f_u[i] = g_u[i];
    }

    e_y = NULL;
    m = emlrtCreateCharArray(2, &iv4[0]);
    emlrtInitCharArrayR2013a(cgxertPrepareEmlrtTLS(moduleInstance->S, &c_st,
      moduleInstance->sysIdx, 6), 5, m, &f_u[0]);
    emlrtAssign(&e_y, m);
    d_st.site = &mm_emlrtRSI;
    d_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
    d_blkSrcLoc.blkIdx = 6;
    e_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
    e_blkSrcLoc.blkIdx = 6;
    f_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
    f_blkSrcLoc.blkIdx = 6;
    b_error(moduleInstance, &d_st, c_y, getString(moduleInstance, &d_st, message
             (moduleInstance, &d_st, d_y, e_y, &e_emlrtMCI, &d_blkSrcLoc),
             &e_emlrtMCI, &e_blkSrcLoc), &e_emlrtMCI, &f_blkSrcLoc);
  }

  for (i = 0; i < 3; i++) {
    for (idx = 0; idx < 3; idx++) {
      R[idx + 3 * i] = tform[idx + (i << 2)];
    }
  }

  b_st.site = &rf_emlrtRSI;
  inv(moduleInstance, &b_st, R, dv);
  for (i = 0; i < 3; i++) {
    for (idx = 0; idx < 3; idx++) {
      x[idx + 3 * i] = dv[idx + 3 * i] - R[i + 3 * idx];
    }
  }

  for (bid = 0; bid < 9; bid++) {
    R[bid] = muDoubleScalarAbs(x[bid]);
  }

  for (idx = 0; idx < 3; idx++) {
    b_maxval[idx] = R[3 * idx];
    for (b_i = 0; b_i < 2; b_i++) {
      maxval = b_maxval[idx];
      if (muDoubleScalarIsNaN(R[(b_i + 3 * idx) + 1])) {
        p = false;
      } else if (muDoubleScalarIsNaN(maxval)) {
        p = true;
      } else {
        p = (maxval < R[(b_i + 3 * idx) + 1]);
      }

      if (p) {
        maxval = R[(b_i + 3 * idx) + 1];
      }

      b_maxval[idx] = maxval;
    }
  }

  if (!muDoubleScalarIsNaN(b_maxval[0])) {
    idx = 1;
  } else {
    idx = 0;
    bid = 2;
    exitg1 = false;
    while ((!exitg1) && (bid < 4)) {
      if (!muDoubleScalarIsNaN(b_maxval[bid - 1])) {
        idx = bid;
        exitg1 = true;
      } else {
        bid++;
      }
    }
  }

  if (idx == 0) {
    maxval = b_maxval[0];
  } else {
    maxval = b_maxval[idx - 1];
    for (bid = idx + 1; bid < 4; bid++) {
      if (maxval < b_maxval[bid - 1]) {
        maxval = b_maxval[bid - 1];
      }
    }
  }

  guard1 = false;
  if (maxval > 0.0001) {
    guard1 = true;
  } else {
    maxval = 0.0;
    scale = 3.3121686421112381E-170;
    for (bid = 0; bid < 4; bid++) {
      absxk = muDoubleScalarAbs(tform[(bid << 2) + 3] - (real_T)iv5[bid]);
      if (absxk > scale) {
        t = scale / absxk;
        maxval = maxval * t * t + 1.0;
        scale = absxk;
      } else {
        t = absxk / scale;
        maxval += t * t;
      }
    }

    maxval = scale * muDoubleScalarSqrt(maxval);
    if (maxval > 1.0E-7) {
      guard1 = true;
    }
  }

  if (guard1) {
    b_st.site = &sf_emlrtRSI;
    c_st.site = &me_emlrtRSI;
    g_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
    g_blkSrcLoc.blkIdx = 6;
    d_warning(moduleInstance, &c_st, &g_blkSrcLoc);
  }

  b_st.site = &tf_emlrtRSI;
  d_validateattributes(moduleInstance, &b_st, weights);
  for (i = 0; i < 36; i++) {
    weightMatrix[i] = 0.0;
  }

  for (idx = 0; idx < 6; idx++) {
    weightMatrix[idx + 6 * idx] = weights[idx];
  }

  args = obj->Solver->ExtraArgs;
  for (i = 0; i < 36; i++) {
    args->WeightMatrix[i] = weightMatrix[i];
  }

  i = args->BodyName->size[0] * args->BodyName->size[1];
  args->BodyName->size[0] = 1;
  args->BodyName->size[1] = 5;
  emxEnsureCapacity_char_T(args->BodyName, i);
  for (i = 0; i < 5; i++) {
    args->BodyName->data[i] = g_u[i];
  }

  for (i = 0; i < 16; i++) {
    args->Tform[i] = tform[i];
  }

  st.site = &nf_emlrtRSI;
  h_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
  h_blkSrcLoc.blkIdx = 6;
  inverseKinematics_solve(moduleInstance, &st, obj, initialGuess, QSol, &d,
    &maxval, &d1, &d2, solutionInfo_Status_data, solutionInfo_Status_size,
    &h_blkSrcLoc);
  *solutionInfo_ExitFlag = d2;
  *solutionInfo_PoseErrorNorm = d1;
  *solutionInfo_Iterations = d;
}

static boolean_T f_strcmp(emxArray_char_T *a)
{
  static char_T cv[5] = { 'B', 'o', 'd', 'y', '7' };

  int32_T exitg1;
  int32_T kstr;
  boolean_T b_bool;
  b_bool = false;
  if (a->size[1] != 5) {
  } else {
    kstr = 1;
    do {
      exitg1 = 0;
      if (kstr - 1 < 5) {
        if (a->data[kstr - 1] != cv[kstr - 1]) {
          exitg1 = 1;
        } else {
          kstr++;
        }
      } else {
        b_bool = true;
        exitg1 = 1;
      }
    } while (exitg1 == 0);
  }

  return b_bool;
}

static void inv(InstanceStruct_dnGfh1DX0a11xSfGnyzF5G *moduleInstance, const
                emlrtStack *sp, real_T x[9], real_T y[9])
{
  static const int32_T iv[2] = { 1, 6 };

  static char_T b_rfmt[6] = { '%', '1', '4', '.', '6', 'e' };

  cgxertBlkSrcLocInfo b_blkSrcLoc;
  cgxertBlkSrcLocInfo blkSrcLoc;
  cgxertBlkSrcLocInfo c_blkSrcLoc;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *m;
  real_T b_x[9];
  real_T absx11;
  real_T absx21;
  real_T absx31;
  int32_T itmp;
  int32_T p1;
  int32_T p2;
  int32_T p3;
  char_T str[14];
  char_T rfmt[6];
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  memcpy(&b_x[0], &x[0], 9U * sizeof(real_T));
  p1 = 1;
  p2 = 3;
  p3 = 6;
  absx11 = muDoubleScalarAbs(x[0]);
  absx21 = muDoubleScalarAbs(x[1]);
  absx31 = muDoubleScalarAbs(x[2]);
  if ((absx21 > absx11) && (absx21 > absx31)) {
    p1 = 4;
    p2 = 0;
    b_x[0] = x[1];
    b_x[1] = x[0];
    b_x[3] = x[4];
    b_x[4] = x[3];
    b_x[6] = x[7];
    b_x[7] = x[6];
  } else if (absx31 > absx11) {
    p1 = 7;
    p3 = 0;
    b_x[0] = x[2];
    b_x[2] = x[0];
    b_x[3] = x[5];
    b_x[5] = x[3];
    b_x[6] = x[8];
    b_x[8] = x[6];
  }

  absx11 = b_x[1] / b_x[0];
  b_x[1] /= b_x[0];
  absx21 = b_x[2] / b_x[0];
  b_x[2] /= b_x[0];
  b_x[4] -= b_x[3] * absx11;
  b_x[5] -= b_x[3] * absx21;
  b_x[7] -= b_x[6] * absx11;
  b_x[8] -= b_x[6] * absx21;
  if (muDoubleScalarAbs(b_x[5]) > muDoubleScalarAbs(b_x[4])) {
    itmp = p2;
    p2 = p3;
    p3 = itmp;
    b_x[1] = absx21;
    b_x[2] = absx11;
    absx11 = b_x[4];
    b_x[4] = b_x[5];
    b_x[5] = absx11;
    absx11 = b_x[7];
    b_x[7] = b_x[8];
    b_x[8] = absx11;
  }

  absx11 = b_x[5] / b_x[4];
  b_x[5] /= b_x[4];
  b_x[8] -= b_x[7] * absx11;
  absx11 = (b_x[1] * b_x[5] - b_x[2]) / b_x[8];
  absx21 = -(b_x[1] + b_x[7] * absx11) / b_x[4];
  y[p1 - 1] = ((1.0 - b_x[3] * absx21) - b_x[6] * absx11) / b_x[0];
  y[p1] = absx21;
  y[p1 + 1] = absx11;
  absx11 = -b_x[5] / b_x[8];
  absx21 = (1.0 - b_x[7] * absx11) / b_x[4];
  y[p2] = -(b_x[3] * absx21 + b_x[6] * absx11) / b_x[0];
  y[p2 + 1] = absx21;
  y[p2 + 2] = absx11;
  absx11 = 1.0 / b_x[8];
  absx21 = -b_x[7] * absx11 / b_x[4];
  y[p3] = -(b_x[3] * absx21 + b_x[6] * absx11) / b_x[0];
  y[p3 + 1] = absx21;
  y[p3 + 2] = absx11;
  st.site = &uf_emlrtRSI;
  absx11 = b_norm(x);
  absx21 = b_norm(y);
  absx31 = 1.0 / (absx11 * absx21);
  if ((absx11 == 0.0) || (absx21 == 0.0) || (absx31 == 0.0)) {
    b_st.site = &vf_emlrtRSI;
    blkSrcLoc.sysIdx = moduleInstance->sysIdx;
    blkSrcLoc.blkIdx = 6;
    b_warning(moduleInstance, &b_st, &blkSrcLoc);
  } else if (muDoubleScalarIsNaN(absx31) || (absx31 < 2.2204460492503131E-16)) {
    b_st.site = &wf_emlrtRSI;
    for (p1 = 0; p1 < 6; p1++) {
      rfmt[p1] = b_rfmt[p1];
    }

    b_y = NULL;
    m = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a(cgxertPrepareEmlrtTLS(moduleInstance->S, &b_st,
      moduleInstance->sysIdx, 6), 6, m, &rfmt[0]);
    emlrtAssign(&b_y, m);
    c_y = NULL;
    m = emlrtCreateDoubleScalar(absx31);
    emlrtAssign(&c_y, m);
    c_st.site = &mn_emlrtRSI;
    b_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
    b_blkSrcLoc.blkIdx = 6;
    emlrt_marshallIn(moduleInstance, &c_st, b_sprintf(moduleInstance, &c_st, b_y,
      c_y, &o_emlrtMCI, &b_blkSrcLoc), "<output of sprintf>", str);
    b_st.site = &wf_emlrtRSI;
    c_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
    c_blkSrcLoc.blkIdx = 6;
    c_warning(moduleInstance, &b_st, str, &c_blkSrcLoc);
  }
}

static real_T b_norm(real_T x[9])
{
  real_T s;
  real_T y;
  int32_T i;
  int32_T j;
  boolean_T exitg1;
  y = 0.0;
  j = 0;
  exitg1 = false;
  while ((!exitg1) && (j < 3)) {
    s = 0.0;
    for (i = 0; i < 3; i++) {
      s += muDoubleScalarAbs(x[i + 3 * j]);
    }

    if (muDoubleScalarIsNaN(s)) {
      y = rtNaN;
      exitg1 = true;
    } else {
      if (s > y) {
        y = s;
      }

      j++;
    }
  }

  return y;
}

static void b_warning(InstanceStruct_dnGfh1DX0a11xSfGnyzF5G *moduleInstance,
                      const emlrtStack *sp, cgxertBlkSrcLocInfo *blkSrc)
{
  static const int32_T iv[2] = { 1, 7 };

  static const int32_T iv1[2] = { 1, 7 };

  static const int32_T iv2[2] = { 1, 21 };

  static char_T b_msgID[21] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'i', 'n',
    'g', 'u', 'l', 'a', 'r', 'M', 'a', 't', 'r', 'i', 'x' };

  static char_T c_u[7] = { 'w', 'a', 'r', 'n', 'i', 'n', 'g' };

  static char_T d_u[7] = { 'm', 'e', 's', 's', 'a', 'g', 'e' };

  cgxertBlkSrcLocInfo b_blkSrcLoc;
  cgxertBlkSrcLocInfo blkSrcLoc;
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *m;
  const mxArray *y;
  int32_T i;
  char_T msgID[21];
  char_T b_u[7];
  st.prev = sp;
  st.tls = sp->tls;
  for (i = 0; i < 21; i++) {
    msgID[i] = b_msgID[i];
  }

  for (i = 0; i < 7; i++) {
    b_u[i] = c_u[i];
  }

  y = NULL;
  m = emlrtCreateCharArray(2, &iv[0]);
  emlrtInitCharArrayR2013a(cgxertPrepareEmlrtTLS(moduleInstance->S,
    (emlrtConstCTX)sp, blkSrc->sysIdx, blkSrc->blkIdx), 7, m, &b_u[0]);
  emlrtAssign(&y, m);
  for (i = 0; i < 7; i++) {
    b_u[i] = d_u[i];
  }

  b_y = NULL;
  m = emlrtCreateCharArray(2, &iv1[0]);
  emlrtInitCharArrayR2013a(cgxertPrepareEmlrtTLS(moduleInstance->S,
    (emlrtConstCTX)sp, blkSrc->sysIdx, blkSrc->blkIdx), 7, m, &b_u[0]);
  emlrtAssign(&b_y, m);
  c_y = NULL;
  m = emlrtCreateCharArray(2, &iv2[0]);
  emlrtInitCharArrayR2013a(cgxertPrepareEmlrtTLS(moduleInstance->S,
    (emlrtConstCTX)sp, blkSrc->sysIdx, blkSrc->blkIdx), 21, m, &msgID[0]);
  emlrtAssign(&c_y, m);
  st.site = &ln_emlrtRSI;
  blkSrcLoc.sysIdx = moduleInstance->sysIdx;
  blkSrcLoc.blkIdx = 6;
  b_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
  b_blkSrcLoc.blkIdx = 6;
  b_feval(moduleInstance, &st, y, feval(moduleInstance, &st, b_y, c_y,
           &j_emlrtMCI, &blkSrcLoc), &k_emlrtMCI, &b_blkSrcLoc);
}

static void c_warning(InstanceStruct_dnGfh1DX0a11xSfGnyzF5G *moduleInstance,
                      const emlrtStack *sp, char_T varargin_1[14],
                      cgxertBlkSrcLocInfo *blkSrc)
{
  static const int32_T iv[2] = { 1, 7 };

  static const int32_T iv1[2] = { 1, 7 };

  static const int32_T iv2[2] = { 1, 33 };

  static const int32_T iv3[2] = { 1, 14 };

  static char_T b_msgID[33] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T', 'L',
    'A', 'B', ':', 'i', 'l', 'l', 'C', 'o', 'n', 'd', 'i', 't', 'i', 'o', 'n',
    'e', 'd', 'M', 'a', 't', 'r', 'i', 'x' };

  static char_T c_u[7] = { 'w', 'a', 'r', 'n', 'i', 'n', 'g' };

  static char_T d_u[7] = { 'm', 'e', 's', 's', 'a', 'g', 'e' };

  cgxertBlkSrcLocInfo b_blkSrcLoc;
  cgxertBlkSrcLocInfo blkSrcLoc;
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *d_y;
  const mxArray *m;
  const mxArray *y;
  int32_T i;
  char_T msgID[33];
  char_T b_u[7];
  st.prev = sp;
  st.tls = sp->tls;
  for (i = 0; i < 33; i++) {
    msgID[i] = b_msgID[i];
  }

  for (i = 0; i < 7; i++) {
    b_u[i] = c_u[i];
  }

  y = NULL;
  m = emlrtCreateCharArray(2, &iv[0]);
  emlrtInitCharArrayR2013a(cgxertPrepareEmlrtTLS(moduleInstance->S,
    (emlrtConstCTX)sp, blkSrc->sysIdx, blkSrc->blkIdx), 7, m, &b_u[0]);
  emlrtAssign(&y, m);
  for (i = 0; i < 7; i++) {
    b_u[i] = d_u[i];
  }

  b_y = NULL;
  m = emlrtCreateCharArray(2, &iv1[0]);
  emlrtInitCharArrayR2013a(cgxertPrepareEmlrtTLS(moduleInstance->S,
    (emlrtConstCTX)sp, blkSrc->sysIdx, blkSrc->blkIdx), 7, m, &b_u[0]);
  emlrtAssign(&b_y, m);
  c_y = NULL;
  m = emlrtCreateCharArray(2, &iv2[0]);
  emlrtInitCharArrayR2013a(cgxertPrepareEmlrtTLS(moduleInstance->S,
    (emlrtConstCTX)sp, blkSrc->sysIdx, blkSrc->blkIdx), 33, m, &msgID[0]);
  emlrtAssign(&c_y, m);
  d_y = NULL;
  m = emlrtCreateCharArray(2, &iv3[0]);
  emlrtInitCharArrayR2013a(cgxertPrepareEmlrtTLS(moduleInstance->S,
    (emlrtConstCTX)sp, blkSrc->sysIdx, blkSrc->blkIdx), 14, m, &varargin_1[0]);
  emlrtAssign(&d_y, m);
  st.site = &ln_emlrtRSI;
  blkSrcLoc.sysIdx = moduleInstance->sysIdx;
  blkSrcLoc.blkIdx = 6;
  b_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
  b_blkSrcLoc.blkIdx = 6;
  b_feval(moduleInstance, &st, y, c_feval(moduleInstance, &st, b_y, c_y, d_y,
           &j_emlrtMCI, &b_blkSrcLoc), &k_emlrtMCI, &blkSrcLoc);
}

static void d_warning(InstanceStruct_dnGfh1DX0a11xSfGnyzF5G *moduleInstance,
                      const emlrtStack *sp, cgxertBlkSrcLocInfo *blkSrc)
{
  static const int32_T iv[2] = { 1, 7 };

  static const int32_T iv1[2] = { 1, 7 };

  static const int32_T iv2[2] = { 1, 65 };

  static char_T b_msgID[65] = { 'r', 'o', 'b', 'o', 't', 'i', 'c', 's', ':', 'r',
    'o', 'b', 'o', 't', 'm', 'a', 'n', 'i', 'p', ':', 'i', 'n', 'v', 'e', 'r',
    's', 'e', 'k', 'i', 'n', 'e', 'm', 'a', 't', 'i', 'c', 's', ':', 'H', 'o',
    'm', 'o', 'g', 'e', 'n', 'e', 'o', 'u', 's', 'T', 'r', 'a', 'n', 's', 'f',
    'o', 'r', 'm', 'I', 'n', 'v', 'a', 'l', 'i', 'd' };

  static char_T c_u[7] = { 'w', 'a', 'r', 'n', 'i', 'n', 'g' };

  static char_T d_u[7] = { 'm', 'e', 's', 's', 'a', 'g', 'e' };

  cgxertBlkSrcLocInfo b_blkSrcLoc;
  cgxertBlkSrcLocInfo blkSrcLoc;
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *m;
  const mxArray *y;
  int32_T i;
  char_T msgID[65];
  char_T b_u[7];
  st.prev = sp;
  st.tls = sp->tls;
  memcpy(&msgID[0], &b_msgID[0], 65U * sizeof(char_T));
  for (i = 0; i < 7; i++) {
    b_u[i] = c_u[i];
  }

  y = NULL;
  m = emlrtCreateCharArray(2, &iv[0]);
  emlrtInitCharArrayR2013a(cgxertPrepareEmlrtTLS(moduleInstance->S,
    (emlrtConstCTX)sp, blkSrc->sysIdx, blkSrc->blkIdx), 7, m, &b_u[0]);
  emlrtAssign(&y, m);
  for (i = 0; i < 7; i++) {
    b_u[i] = d_u[i];
  }

  b_y = NULL;
  m = emlrtCreateCharArray(2, &iv1[0]);
  emlrtInitCharArrayR2013a(cgxertPrepareEmlrtTLS(moduleInstance->S,
    (emlrtConstCTX)sp, blkSrc->sysIdx, blkSrc->blkIdx), 7, m, &b_u[0]);
  emlrtAssign(&b_y, m);
  c_y = NULL;
  m = emlrtCreateCharArray(2, &iv2[0]);
  emlrtInitCharArrayR2013a(cgxertPrepareEmlrtTLS(moduleInstance->S,
    (emlrtConstCTX)sp, blkSrc->sysIdx, blkSrc->blkIdx), 65, m, &msgID[0]);
  emlrtAssign(&c_y, m);
  st.site = &ln_emlrtRSI;
  blkSrcLoc.sysIdx = moduleInstance->sysIdx;
  blkSrcLoc.blkIdx = 6;
  b_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
  b_blkSrcLoc.blkIdx = 6;
  b_feval(moduleInstance, &st, y, feval(moduleInstance, &st, b_y, c_y,
           &j_emlrtMCI, &blkSrcLoc), &k_emlrtMCI, &b_blkSrcLoc);
}

static void d_validateattributes(InstanceStruct_dnGfh1DX0a11xSfGnyzF5G
  *moduleInstance, const emlrtStack *sp, real_T a[6])
{
  static const int32_T iv[2] = { 1, 33 };

  static const int32_T iv1[2] = { 1, 46 };

  static const int32_T iv2[2] = { 1, 38 };

  static const int32_T iv3[2] = { 1, 7 };

  static const int32_T iv4[2] = { 1, 51 };

  static const int32_T iv5[2] = { 1, 33 };

  static const int32_T iv6[2] = { 1, 7 };

  static const int32_T iv7[2] = { 1, 46 };

  static const int32_T iv8[2] = { 1, 7 };

  static char_T k_u[51] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'V', 'a', 'l', 'i', 'd', 'a', 't', 'e', 'a', 't', 't',
    'r', 'i', 'b', 'u', 't', 'e', 's', 'e', 'x', 'p', 'e', 'c', 't', 'e', 'd',
    'N', 'o', 'n', 'n', 'e', 'g', 'a', 't', 'i', 'v', 'e' };

  static char_T f_u[46] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'V', 'a', 'l', 'i', 'd', 'a', 't', 'e', 'a', 't', 't',
    'r', 'i', 'b', 'u', 't', 'e', 's', 'e', 'x', 'p', 'e', 'c', 't', 'e', 'd',
    'N', 'o', 'n', 'N', 'a', 'N' };

  static char_T m_u[46] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'V', 'a', 'l', 'i', 'd', 'a', 't', 'e', 'a', 't', 't',
    'r', 'i', 'b', 'u', 't', 'e', 's', 'e', 'x', 'p', 'e', 'c', 't', 'e', 'd',
    'F', 'i', 'n', 'i', 't', 'e' };

  static char_T g_u[38] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'e', 't',
    'P', 'o', 's', 'e', 'G', 'o', 'a', 'l', ':', 'e', 'x', 'p', 'e', 'c', 't',
    'e', 'd', 'N', 'o', 'n', 'n', 'e', 'g', 'a', 't', 'i', 'v', 'e' };

  static char_T c_u[33] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'e', 't',
    'P', 'o', 's', 'e', 'G', 'o', 'a', 'l', ':', 'e', 'x', 'p', 'e', 'c', 't',
    'e', 'd', 'N', 'o', 'n', 'N', 'a', 'N' };

  static char_T l_u[33] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'e', 't',
    'P', 'o', 's', 'e', 'G', 'o', 'a', 'l', ':', 'e', 'x', 'p', 'e', 'c', 't',
    'e', 'd', 'F', 'i', 'n', 'i', 't', 'e' };

  static char_T j_u[7] = { 'w', 'e', 'i', 'g', 'h', 't', 's' };

  cgxertBlkSrcLocInfo b_blkSrcLoc;
  cgxertBlkSrcLocInfo blkSrcLoc;
  cgxertBlkSrcLocInfo c_blkSrcLoc;
  cgxertBlkSrcLocInfo d_blkSrcLoc;
  cgxertBlkSrcLocInfo e_blkSrcLoc;
  cgxertBlkSrcLocInfo f_blkSrcLoc;
  cgxertBlkSrcLocInfo g_blkSrcLoc;
  cgxertBlkSrcLocInfo h_blkSrcLoc;
  cgxertBlkSrcLocInfo i_blkSrcLoc;
  emlrtStack b_st;
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *d_y;
  const mxArray *e_y;
  const mxArray *f_y;
  const mxArray *g_y;
  const mxArray *h_y;
  const mxArray *i_y;
  const mxArray *m;
  const mxArray *y;
  int32_T k;
  char_T i_u[51];
  char_T d_u[46];
  char_T e_u[38];
  char_T b_u[33];
  char_T h_u[7];
  boolean_T exitg1;
  boolean_T p;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &k_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  p = true;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k < 6)) {
    if (!muDoubleScalarIsNaN(a[k])) {
      k++;
    } else {
      p = false;
      exitg1 = true;
    }
  }

  if (!p) {
    for (k = 0; k < 33; k++) {
      b_u[k] = c_u[k];
    }

    y = NULL;
    m = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a(cgxertPrepareEmlrtTLS(moduleInstance->S, &st,
      moduleInstance->sysIdx, 6), 33, m, &b_u[0]);
    emlrtAssign(&y, m);
    for (k = 0; k < 46; k++) {
      d_u[k] = f_u[k];
    }

    b_y = NULL;
    m = emlrtCreateCharArray(2, &iv1[0]);
    emlrtInitCharArrayR2013a(cgxertPrepareEmlrtTLS(moduleInstance->S, &st,
      moduleInstance->sysIdx, 6), 46, m, &d_u[0]);
    emlrtAssign(&b_y, m);
    for (k = 0; k < 7; k++) {
      h_u[k] = j_u[k];
    }

    d_y = NULL;
    m = emlrtCreateCharArray(2, &iv3[0]);
    emlrtInitCharArrayR2013a(cgxertPrepareEmlrtTLS(moduleInstance->S, &st,
      moduleInstance->sysIdx, 6), 7, m, &h_u[0]);
    emlrtAssign(&d_y, m);
    b_st.site = &km_emlrtRSI;
    blkSrcLoc.sysIdx = moduleInstance->sysIdx;
    blkSrcLoc.blkIdx = 6;
    b_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
    b_blkSrcLoc.blkIdx = 6;
    c_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
    c_blkSrcLoc.blkIdx = 6;
    b_error(moduleInstance, &b_st, y, getString(moduleInstance, &b_st, message
             (moduleInstance, &b_st, b_y, d_y, &f_emlrtMCI, &blkSrcLoc),
             &f_emlrtMCI, &b_blkSrcLoc), &f_emlrtMCI, &c_blkSrcLoc);
  }

  st.site = &k_emlrtRSI;
  p = true;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k < 6)) {
    if (!(a[k] < 0.0)) {
      k++;
    } else {
      p = false;
      exitg1 = true;
    }
  }

  if (!p) {
    for (k = 0; k < 38; k++) {
      e_u[k] = g_u[k];
    }

    c_y = NULL;
    m = emlrtCreateCharArray(2, &iv2[0]);
    emlrtInitCharArrayR2013a(cgxertPrepareEmlrtTLS(moduleInstance->S, &st,
      moduleInstance->sysIdx, 6), 38, m, &e_u[0]);
    emlrtAssign(&c_y, m);
    for (k = 0; k < 51; k++) {
      i_u[k] = k_u[k];
    }

    e_y = NULL;
    m = emlrtCreateCharArray(2, &iv4[0]);
    emlrtInitCharArrayR2013a(cgxertPrepareEmlrtTLS(moduleInstance->S, &st,
      moduleInstance->sysIdx, 6), 51, m, &i_u[0]);
    emlrtAssign(&e_y, m);
    for (k = 0; k < 7; k++) {
      h_u[k] = j_u[k];
    }

    g_y = NULL;
    m = emlrtCreateCharArray(2, &iv6[0]);
    emlrtInitCharArrayR2013a(cgxertPrepareEmlrtTLS(moduleInstance->S, &st,
      moduleInstance->sysIdx, 6), 7, m, &h_u[0]);
    emlrtAssign(&g_y, m);
    b_st.site = &lm_emlrtRSI;
    d_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
    d_blkSrcLoc.blkIdx = 6;
    e_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
    e_blkSrcLoc.blkIdx = 6;
    f_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
    f_blkSrcLoc.blkIdx = 6;
    b_error(moduleInstance, &b_st, c_y, getString(moduleInstance, &b_st, message
             (moduleInstance, &b_st, e_y, g_y, &q_emlrtMCI, &d_blkSrcLoc),
             &q_emlrtMCI, &e_blkSrcLoc), &q_emlrtMCI, &f_blkSrcLoc);
  }

  st.site = &k_emlrtRSI;
  p = true;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k < 6)) {
    if ((!muDoubleScalarIsInf(a[k])) && (!muDoubleScalarIsNaN(a[k]))) {
      k++;
    } else {
      p = false;
      exitg1 = true;
    }
  }

  if (!p) {
    for (k = 0; k < 33; k++) {
      b_u[k] = l_u[k];
    }

    f_y = NULL;
    m = emlrtCreateCharArray(2, &iv5[0]);
    emlrtInitCharArrayR2013a(cgxertPrepareEmlrtTLS(moduleInstance->S, &st,
      moduleInstance->sysIdx, 6), 33, m, &b_u[0]);
    emlrtAssign(&f_y, m);
    for (k = 0; k < 46; k++) {
      d_u[k] = m_u[k];
    }

    h_y = NULL;
    m = emlrtCreateCharArray(2, &iv7[0]);
    emlrtInitCharArrayR2013a(cgxertPrepareEmlrtTLS(moduleInstance->S, &st,
      moduleInstance->sysIdx, 6), 46, m, &d_u[0]);
    emlrtAssign(&h_y, m);
    for (k = 0; k < 7; k++) {
      h_u[k] = j_u[k];
    }

    i_y = NULL;
    m = emlrtCreateCharArray(2, &iv8[0]);
    emlrtInitCharArrayR2013a(cgxertPrepareEmlrtTLS(moduleInstance->S, &st,
      moduleInstance->sysIdx, 6), 7, m, &h_u[0]);
    emlrtAssign(&i_y, m);
    b_st.site = &jm_emlrtRSI;
    g_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
    g_blkSrcLoc.blkIdx = 6;
    h_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
    h_blkSrcLoc.blkIdx = 6;
    i_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
    i_blkSrcLoc.blkIdx = 6;
    b_error(moduleInstance, &b_st, f_y, getString(moduleInstance, &b_st, message
             (moduleInstance, &b_st, h_y, i_y, &b_emlrtMCI, &g_blkSrcLoc),
             &b_emlrtMCI, &h_blkSrcLoc), &b_emlrtMCI, &i_blkSrcLoc);
  }
}

static void inverseKinematics_solve(InstanceStruct_dnGfh1DX0a11xSfGnyzF5G
  *moduleInstance, const emlrtStack *sp, inverseKinematics *obj, real_T
  initialGuess[6], real_T QSol[6], real_T *solutionInfo_Iterations, real_T
  *solutionInfo_NumRandomRestarts, real_T *solutionInfo_PoseErrorNorm, real_T
  *solutionInfo_ExitFlag, char_T solutionInfo_Status_data[], int32_T
  solutionInfo_Status_size[2], cgxertBlkSrcLocInfo *blkSrc)
{
  cgxertBlkSrcLocInfo b_blkSrcLoc;
  cgxertBlkSrcLocInfo blkSrcLoc;
  cgxertBlkSrcLocInfo c_blkSrcLoc;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  emxArray_char_T *b_endEffectorName;
  emxArray_int32_T *r;
  emxArray_int32_T *r1;
  emxArray_real_T *bodyIndices;
  emxArray_real_T *positionIndices;
  emxArray_real_T *positionMap;
  emxArray_real_T *y;
  robotics_manip_internal_RigidBody *body;
  robotics_manip_internal_RigidBodyTree_1 *b_obj;
  real_T qvSolRaw[6];
  real_T apnd;
  real_T b_d;
  real_T bid;
  real_T cdiff;
  real_T d;
  real_T d1;
  real_T d2;
  real_T d3;
  real_T idxCount;
  real_T ndbl;
  real_T numPositions;
  int32_T iv[2];
  int32_T sol_Status_size[2];
  int32_T b_i;
  int32_T i;
  int32_T i1;
  int32_T k;
  int32_T nm1d2;
  int32_T trueCount;
  uint32_T c_i;
  char_T sol_Status_data[14];
  boolean_T b_b[6];
  boolean_T b_y;
  boolean_T exitg1;
  boolean_T guard1 = false;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  for (i = 0; i < 6; i++) {
    QSol[i] = initialGuess[i];
  }

  st.site = &xf_emlrtRSI;
  RigidBodyTree_validateConfigurationWithLimits(moduleInstance, &st,
    obj->RigidBodyTreeInternal, QSol);
  st.site = &yf_emlrtRSI;
  blkSrcLoc.sysIdx = moduleInstance->sysIdx;
  blkSrcLoc.blkIdx = 6;
  NLPSolverInterface_solve(moduleInstance, &st, obj->Solver, QSol, qvSolRaw, &d,
    &d1, &d2, &d3, sol_Status_data, sol_Status_size, &blkSrcLoc);
  *solutionInfo_ExitFlag = d3;
  *solutionInfo_PoseErrorNorm = d2;
  *solutionInfo_NumRandomRestarts = d1;
  *solutionInfo_Iterations = d;
  st.site = &ag_emlrtRSI;
  b_obj = obj->RigidBodyTreeInternal;
  emxInit_char_T(&b_endEffectorName, 2);
  b_i = b_endEffectorName->size[0] * b_endEffectorName->size[1];
  b_endEffectorName->size[0] = 1;
  b_endEffectorName->size[1] = obj->Solver->ExtraArgs->BodyName->size[1];
  emxEnsureCapacity_char_T(b_endEffectorName, b_i);
  nm1d2 = obj->Solver->ExtraArgs->BodyName->size[1];
  for (b_i = 0; b_i < nm1d2; b_i++) {
    b_endEffectorName->data[b_i] = obj->Solver->ExtraArgs->BodyName->data[b_i];
  }

  emxInit_real_T1(&bodyIndices, 1);
  b_i = bodyIndices->size[0];
  bid = emlrtNonNegativeCheckR2012b(b_obj->NumBodies, &lb_emlrtDCI,
    cgxertPrepareEmlrtTLS(moduleInstance->S, &st, moduleInstance->sysIdx, 6));
  bodyIndices->size[0] = (int32_T)emlrtIntegerCheckR2012b(bid, &kb_emlrtDCI,
    cgxertPrepareEmlrtTLS(moduleInstance->S, &st, moduleInstance->sysIdx, 6));
  emxEnsureCapacity_real_T1(bodyIndices, b_i);
  bid = emlrtNonNegativeCheckR2012b(b_obj->NumBodies, &lb_emlrtDCI,
    cgxertPrepareEmlrtTLS(moduleInstance->S, &st, moduleInstance->sysIdx, 6));
  nm1d2 = (int32_T)emlrtIntegerCheckR2012b(bid, &kb_emlrtDCI,
    cgxertPrepareEmlrtTLS(moduleInstance->S, &st, moduleInstance->sysIdx, 6));
  for (b_i = 0; b_i < nm1d2; b_i++) {
    bodyIndices->data[b_i] = 0.0;
  }

  b_st.site = &wl_emlrtRSI;
  bid = RigidBodyTree_validateInputBodyName(moduleInstance, &b_st, b_obj,
    b_endEffectorName);
  emxFree_char_T(&b_endEffectorName);
  if (bid == 0.0) {
    b_i = bodyIndices->size[0];
    bodyIndices->size[0] = 1;
    emxEnsureCapacity_real_T1(bodyIndices, b_i);
    bodyIndices->data[0] = 0.0;
  } else {
    body = b_obj->Bodies[emlrtDynamicBoundsCheckR2012b((int32_T)bid - 1, 0, 6,
      &kb_emlrtBCI, cgxertPrepareEmlrtTLS(moduleInstance->S, &st,
      moduleInstance->sysIdx, 6))];
    c_i = 1U;
    while (body->ParentIndex != 0.0) {
      b_i = bodyIndices->size[0];
      bodyIndices->data[emlrtDynamicBoundsCheckR2012b((int32_T)c_i, 1, b_i,
        &lb_emlrtBCI, cgxertPrepareEmlrtTLS(moduleInstance->S, &st,
        moduleInstance->sysIdx, 6)) - 1] = body->Index;
      b_i = (int32_T)emlrtIntegerCheckR2012b(body->ParentIndex, &mb_emlrtDCI,
        cgxertPrepareEmlrtTLS(moduleInstance->S, &st, moduleInstance->sysIdx, 6))
        - 1;
      body = b_obj->Bodies[emlrtDynamicBoundsCheckR2012b(b_i, 0, 6, &mb_emlrtBCI,
        cgxertPrepareEmlrtTLS(moduleInstance->S, &st, moduleInstance->sysIdx, 6))];
      c_i++;
    }

    if ((int32_T)(c_i - 1U) < 1) {
      nm1d2 = 0;
    } else {
      b_i = bodyIndices->size[0];
      emlrtDynamicBoundsCheckR2012b(1, 1, b_i, &jb_emlrtBCI,
        cgxertPrepareEmlrtTLS(moduleInstance->S, &st, moduleInstance->sysIdx, 6));
      b_i = bodyIndices->size[0];
      nm1d2 = emlrtDynamicBoundsCheckR2012b((int32_T)(c_i - 1U), 1, b_i,
        &ib_emlrtBCI, cgxertPrepareEmlrtTLS(moduleInstance->S, &st,
        moduleInstance->sysIdx, 6));
    }

    iv[0] = 1;
    iv[1] = nm1d2;
    b_st.site = &xl_emlrtRSI;
    indexShapeCheck(moduleInstance, &b_st, bodyIndices->size[0], iv);
    b_i = bodyIndices->size[0];
    bodyIndices->size[0] = nm1d2 + 2;
    emxEnsureCapacity_real_T1(bodyIndices, b_i);
    bodyIndices->data[nm1d2] = body->Index;
    bodyIndices->data[nm1d2 + 1] = 0.0;
  }

  st.site = &bg_emlrtRSI;
  b_obj = obj->RigidBodyTreeInternal;
  nm1d2 = bodyIndices->size[0] - 1;
  trueCount = 0;
  for (i = 0; i <= nm1d2; i++) {
    if (bodyIndices->data[i] != 0.0) {
      trueCount++;
    }
  }

  emxInit_int32_T1(&r, 1);
  b_i = r->size[0];
  r->size[0] = trueCount;
  emxEnsureCapacity_int32_T(r, b_i);
  trueCount = 0;
  for (i = 0; i <= nm1d2; i++) {
    if (bodyIndices->data[i] != 0.0) {
      r->data[trueCount] = i;
      trueCount++;
    }
  }

  trueCount = bodyIndices->size[0];
  emxInit_real_T(&positionMap, 2);
  b_i = positionMap->size[0] * positionMap->size[1];
  positionMap->size[0] = r->size[0];
  positionMap->size[1] = 2;
  emxEnsureCapacity_real_T(positionMap, b_i);
  for (b_i = 0; b_i < 2; b_i++) {
    nm1d2 = r->size[0];
    for (i1 = 0; i1 < nm1d2; i1++) {
      k = r->data[i1];
      bid = bodyIndices->data[emlrtDynamicBoundsCheckR2012b(k, 0, trueCount - 1,
        &ob_emlrtBCI, cgxertPrepareEmlrtTLS(moduleInstance->S, &st,
        moduleInstance->sysIdx, 6))];
      k = (int32_T)emlrtIntegerCheckR2012b(bid, &nb_emlrtDCI,
        cgxertPrepareEmlrtTLS(moduleInstance->S, &st, moduleInstance->sysIdx, 6));
      positionMap->data[i1 + positionMap->size[0] * b_i] = b_obj->
        PositionDoFMap[(emlrtDynamicBoundsCheckR2012b(k, 1, 7, &nb_emlrtBCI,
        cgxertPrepareEmlrtTLS(moduleInstance->S, &st, moduleInstance->sysIdx, 6))
                        + 7 * b_i) - 1];
    }
  }

  emxFree_int32_T(&r);
  emxFree_real_T(&bodyIndices);
  emxInit_real_T(&positionIndices, 2);
  b_i = positionIndices->size[0] * positionIndices->size[1];
  positionIndices->size[0] = 1;
  bid = emlrtNonNegativeCheckR2012b(b_obj->PositionNumber, &hb_emlrtDCI,
    cgxertPrepareEmlrtTLS(moduleInstance->S, &st, moduleInstance->sysIdx, 6));
  positionIndices->size[1] = (int32_T)emlrtIntegerCheckR2012b(bid, &ib_emlrtDCI,
    cgxertPrepareEmlrtTLS(moduleInstance->S, &st, moduleInstance->sysIdx, 6));
  emxEnsureCapacity_real_T(positionIndices, b_i);
  bid = emlrtNonNegativeCheckR2012b(b_obj->PositionNumber, &pb_emlrtDCI,
    cgxertPrepareEmlrtTLS(moduleInstance->S, &st, moduleInstance->sysIdx, 6));
  nm1d2 = (int32_T)emlrtIntegerCheckR2012b(bid, &ob_emlrtDCI,
    cgxertPrepareEmlrtTLS(moduleInstance->S, &st, moduleInstance->sysIdx, 6));
  for (b_i = 0; b_i < nm1d2; b_i++) {
    positionIndices->data[b_i] = 0.0;
  }

  idxCount = 0.0;
  b_i = positionMap->size[0] - 1;
  emxInit_int32_T(&r1, 2);
  emxInit_real_T(&y, 2);
  for (i = 0; i <= b_i; i++) {
    i1 = positionMap->size[0];
    emlrtDynamicBoundsCheckR2012b(i + 1, 1, i1, &hb_emlrtBCI,
      cgxertPrepareEmlrtTLS(moduleInstance->S, &st, moduleInstance->sysIdx, 6));
    numPositions = (positionMap->data[i + positionMap->size[0]] -
                    positionMap->data[i]) + 1.0;
    if (numPositions > 0.0) {
      if (numPositions < 1.0) {
        y->size[0] = 1;
        y->size[1] = 0;
      } else {
        i1 = y->size[0] * y->size[1];
        y->size[0] = 1;
        y->size[1] = (int32_T)(numPositions - 1.0) + 1;
        emxEnsureCapacity_real_T(y, i1);
        nm1d2 = (int32_T)(numPositions - 1.0);
        for (i1 = 0; i1 <= nm1d2; i1++) {
          y->data[i1] = (real_T)i1 + 1.0;
        }
      }

      i1 = r1->size[0] * r1->size[1];
      r1->size[0] = 1;
      r1->size[1] = y->size[1];
      emxEnsureCapacity_int32_T1(r1, i1);
      trueCount = positionIndices->size[1];
      nm1d2 = y->size[1];
      for (i1 = 0; i1 < nm1d2; i1++) {
        bid = idxCount + y->data[i1];
        k = (int32_T)emlrtIntegerCheckR2012b(bid, &rb_emlrtDCI,
          cgxertPrepareEmlrtTLS(moduleInstance->S, &st, moduleInstance->sysIdx,
          6));
        r1->data[i1] = emlrtDynamicBoundsCheckR2012b(k, 1, trueCount,
          &qb_emlrtBCI, cgxertPrepareEmlrtTLS(moduleInstance->S, &st,
          moduleInstance->sysIdx, 6));
      }

      bid = positionMap->data[i];
      b_d = positionMap->data[i + positionMap->size[0]];
      if (muDoubleScalarIsNaN(bid) || muDoubleScalarIsNaN(b_d)) {
        i1 = y->size[0] * y->size[1];
        y->size[0] = 1;
        y->size[1] = 1;
        emxEnsureCapacity_real_T(y, i1);
        y->data[0] = rtNaN;
      } else if (positionMap->data[i + positionMap->size[0]] < positionMap->
                 data[i]) {
        y->size[0] = 1;
        y->size[1] = 0;
      } else if ((muDoubleScalarIsInf(bid) || muDoubleScalarIsInf(b_d)) &&
                 (positionMap->data[i] == positionMap->data[i +
                  positionMap->size[0]])) {
        i1 = y->size[0] * y->size[1];
        y->size[0] = 1;
        y->size[1] = 1;
        emxEnsureCapacity_real_T(y, i1);
        y->data[0] = rtNaN;
      } else if (muDoubleScalarFloor(bid) == positionMap->data[i]) {
        bid = positionMap->data[i];
        b_d = positionMap->data[i + positionMap->size[0]];
        i1 = y->size[0] * y->size[1];
        y->size[0] = 1;
        y->size[1] = (int32_T)(b_d - bid) + 1;
        emxEnsureCapacity_real_T(y, i1);
        nm1d2 = (int32_T)(b_d - bid);
        for (i1 = 0; i1 <= nm1d2; i1++) {
          y->data[i1] = bid + (real_T)i1;
        }
      } else {
        b_st.site = &yl_emlrtRSI;
        ndbl = muDoubleScalarFloor((positionMap->data[i + positionMap->size[0]]
          - positionMap->data[i]) + 0.5);
        apnd = positionMap->data[i] + ndbl;
        cdiff = apnd - positionMap->data[i + positionMap->size[0]];
        if (muDoubleScalarAbs(cdiff) < 4.4408920985006262E-16 *
            muDoubleScalarMax(muDoubleScalarAbs(bid), muDoubleScalarAbs(b_d))) {
          ndbl++;
          apnd = positionMap->data[i + positionMap->size[0]];
        } else if (cdiff > 0.0) {
          apnd = positionMap->data[i] + (ndbl - 1.0);
        } else {
          ndbl++;
        }

        if (ndbl >= 0.0) {
          trueCount = (int32_T)ndbl - 1;
        } else {
          trueCount = -1;
        }

        c_st.site = &am_emlrtRSI;
        b_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
        b_blkSrcLoc.blkIdx = 6;
        assert_pmaxsize(moduleInstance, &c_st, !(ndbl > 2.147483647E+9),
                        &b_blkSrcLoc);
        i1 = y->size[0] * y->size[1];
        y->size[0] = 1;
        y->size[1] = trueCount + 1;
        emxEnsureCapacity_real_T(y, i1);
        if (trueCount + 1 > 0) {
          y->data[0] = positionMap->data[i];
          if (trueCount + 1 > 1) {
            y->data[trueCount] = apnd;
            nm1d2 = div_nzp_s32(trueCount, 2);
            i1 = nm1d2 - 2;
            for (k = 0; k <= i1; k++) {
              y->data[k + 1] = bid + (real_T)(k + 1);
              y->data[(trueCount - k) - 1] = apnd - (real_T)(k + 1);
            }

            if (nm1d2 << 1 == trueCount) {
              y->data[nm1d2] = (positionMap->data[i] + apnd) / 2.0;
            } else {
              y->data[nm1d2] = positionMap->data[i] + (real_T)nm1d2;
              y->data[nm1d2 + 1] = apnd - (real_T)nm1d2;
            }
          }
        }
      }

      i1 = r1->size[1];
      k = y->size[1];
      emlrtSubAssignSizeCheck1dR2017a(i1, k, &f_emlrtECI, cgxertPrepareEmlrtTLS
        (moduleInstance->S, &st, moduleInstance->sysIdx, 6));
      nm1d2 = y->size[1];
      for (i1 = 0; i1 < nm1d2; i1++) {
        positionIndices->data[r1->data[i1] - 1] = y->data[i1];
      }

      idxCount += numPositions;
    }
  }

  emxFree_real_T(&y);
  emxFree_real_T(&positionMap);
  if (idxCount < 1.0) {
    b_i = 0;
  } else {
    b_i = positionIndices->size[1];
    emlrtDynamicBoundsCheckR2012b(1, 1, b_i, &gb_emlrtBCI, cgxertPrepareEmlrtTLS
      (moduleInstance->S, &st, moduleInstance->sysIdx, 6));
    b_i = positionIndices->size[1];
    i1 = (int32_T)emlrtIntegerCheckR2012b(idxCount, &jb_emlrtDCI,
      cgxertPrepareEmlrtTLS(moduleInstance->S, &st, moduleInstance->sysIdx, 6));
    b_i = emlrtDynamicBoundsCheckR2012b(i1, 1, b_i, &fb_emlrtBCI,
      cgxertPrepareEmlrtTLS(moduleInstance->S, &st, moduleInstance->sysIdx, 6));
  }

  i1 = positionIndices->size[0] * positionIndices->size[1];
  positionIndices->size[1] = b_i;
  emxEnsureCapacity_real_T(positionIndices, i1);
  b_i = r1->size[0] * r1->size[1];
  r1->size[0] = 1;
  r1->size[1] = positionIndices->size[1];
  emxEnsureCapacity_int32_T1(r1, b_i);
  nm1d2 = positionIndices->size[1];
  for (b_i = 0; b_i < nm1d2; b_i++) {
    bid = positionIndices->data[b_i];
    i1 = (int32_T)emlrtIntegerCheckR2012b(bid, &qb_emlrtDCI,
      cgxertPrepareEmlrtTLS(moduleInstance->S, (emlrtConstCTX)sp, blkSrc->sysIdx,
      blkSrc->blkIdx));
    r1->data[b_i] = emlrtDynamicBoundsCheckR2012b(i1, 1, 6, &pb_emlrtBCI,
      cgxertPrepareEmlrtTLS(moduleInstance->S, (emlrtConstCTX)sp, blkSrc->sysIdx,
      blkSrc->blkIdx));
  }

  b_i = r1->size[1];
  i1 = positionIndices->size[1];
  emlrtSubAssignSizeCheck1dR2017a(b_i, i1, &g_emlrtECI, cgxertPrepareEmlrtTLS
    (moduleInstance->S, (emlrtConstCTX)sp, blkSrc->sysIdx, blkSrc->blkIdx));
  nm1d2 = positionIndices->size[1];
  for (b_i = 0; b_i < nm1d2; b_i++) {
    QSol[r1->data[b_i] - 1] = qvSolRaw[(int32_T)positionIndices->data[b_i] - 1];
  }

  emxFree_int32_T(&r1);
  emxFree_real_T(&positionIndices);
  st.site = &cg_emlrtRSI;
  b_st.site = &bm_emlrtRSI;
  for (i = 0; i < 6; i++) {
    b_b[i] = muDoubleScalarIsNaN(QSol[i]);
  }

  b_y = false;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k < 6)) {
    if (!b_b[k]) {
      k++;
    } else {
      b_y = true;
      exitg1 = true;
    }
  }

  guard1 = false;
  if (b_y) {
    guard1 = true;
  } else {
    for (i = 0; i < 6; i++) {
      b_b[i] = muDoubleScalarIsInf(QSol[i]);
    }

    b_y = false;
    k = 0;
    exitg1 = false;
    while ((!exitg1) && (k < 6)) {
      if (!b_b[k]) {
        k++;
      } else {
        b_y = true;
        exitg1 = true;
      }
    }

    if (b_y) {
      guard1 = true;
    }
  }

  if (guard1) {
    c_st.site = &cm_emlrtRSI;
    d_st.site = &me_emlrtRSI;
    c_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
    c_blkSrcLoc.blkIdx = 6;
    g_warning(moduleInstance, &d_st, &c_blkSrcLoc);
  }

  solutionInfo_Status_size[0] = 1;
  solutionInfo_Status_size[1] = sol_Status_size[1];
  if (sol_Status_size[1] - 1 >= 0) {
    memcpy(&solutionInfo_Status_data[0], &sol_Status_data[0], (uint32_T)
           sol_Status_size[1] * sizeof(char_T));
  }
}

static void eml_find(InstanceStruct_dnGfh1DX0a11xSfGnyzF5G *moduleInstance,
                     const emlrtStack *sp, boolean_T x[6], int32_T i_data[],
                     int32_T i_size[1])
{
  emlrtStack st;
  int32_T iv[2];
  int32_T idx;
  int32_T ii;
  boolean_T exitg1;
  st.prev = sp;
  st.tls = sp->tls;
  idx = 0;
  ii = 1;
  exitg1 = false;
  while ((!exitg1) && (ii - 1 < 6)) {
    if (x[ii - 1]) {
      idx++;
      i_data[idx - 1] = ii;
      if (idx >= 6) {
        exitg1 = true;
      } else {
        ii++;
      }
    } else {
      ii++;
    }
  }

  if (idx < 1) {
    idx = 0;
  }

  iv[0] = 1;
  iv[1] = idx;
  st.site = &ig_emlrtRSI;
  indexShapeCheck(moduleInstance, &st, 6, iv);
  i_size[0] = idx;
}

static void indexShapeCheck(InstanceStruct_dnGfh1DX0a11xSfGnyzF5G
  *moduleInstance, const emlrtStack *sp, int32_T matrixSize, int32_T indexSize[2])
{
  static const int32_T iv[2] = { 1, 30 };

  static const int32_T iv1[2] = { 1, 30 };

  static char_T c_u[30] = { 'C', 'o', 'd', 'e', 'r', ':', 'F', 'E', ':', 'P',
    'o', 't', 'e', 'n', 't', 'i', 'a', 'l', 'V', 'e', 'c', 't', 'o', 'r', 'V',
    'e', 'c', 't', 'o', 'r' };

  cgxertBlkSrcLocInfo b_blkSrcLoc;
  cgxertBlkSrcLocInfo blkSrcLoc;
  cgxertBlkSrcLocInfo c_blkSrcLoc;
  emlrtStack b_st;
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *m;
  const mxArray *y;
  int32_T i;
  char_T b_u[30];
  boolean_T c;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  if ((matrixSize != 1) || (!(indexSize[1] != 1))) {
    c = false;
  } else {
    c = true;
  }

  st.site = &jg_emlrtRSI;
  if (c) {
    for (i = 0; i < 30; i++) {
      b_u[i] = c_u[i];
    }

    y = NULL;
    m = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a(cgxertPrepareEmlrtTLS(moduleInstance->S, &st,
      moduleInstance->sysIdx, 6), 30, m, &b_u[0]);
    emlrtAssign(&y, m);
    for (i = 0; i < 30; i++) {
      b_u[i] = c_u[i];
    }

    b_y = NULL;
    m = emlrtCreateCharArray(2, &iv1[0]);
    emlrtInitCharArrayR2013a(cgxertPrepareEmlrtTLS(moduleInstance->S, &st,
      moduleInstance->sysIdx, 6), 30, m, &b_u[0]);
    emlrtAssign(&b_y, m);
    b_st.site = &fn_emlrtRSI;
    blkSrcLoc.sysIdx = moduleInstance->sysIdx;
    blkSrcLoc.blkIdx = 6;
    b_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
    b_blkSrcLoc.blkIdx = 6;
    c_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
    c_blkSrcLoc.blkIdx = 6;
    b_error(moduleInstance, &b_st, y, getString(moduleInstance, &b_st, b_message
             (moduleInstance, &b_st, b_y, &t_emlrtMCI, &c_blkSrcLoc),
             &t_emlrtMCI, &blkSrcLoc), &t_emlrtMCI, &b_blkSrcLoc);
  }
}

static void e_warning(InstanceStruct_dnGfh1DX0a11xSfGnyzF5G *moduleInstance,
                      const emlrtStack *sp, cgxertBlkSrcLocInfo *blkSrc)
{
  static const int32_T iv[2] = { 1, 7 };

  static const int32_T iv1[2] = { 1, 7 };

  static const int32_T iv2[2] = { 1, 72 };

  static char_T b_msgID[72] = { 'r', 'o', 'b', 'o', 't', 'i', 'c', 's', ':', 'r',
    'o', 'b', 'o', 't', 'm', 'a', 'n', 'i', 'p', ':', 'r', 'i', 'g', 'i', 'd',
    'b', 'o', 'd', 'y', 't', 'r', 'e', 'e', ':', 'C', 'o', 'n', 'f', 'i', 'g',
    'J', 'o', 'i', 'n', 't', 'L', 'i', 'm', 'i', 't', 's', 'V', 'i', 'o', 'l',
    'a', 't', 'i', 'o', 'n', 'A', 'u', 't', 'o', 'A', 'd', 'j', 'u', 's', 't',
    'e', 'd' };

  static char_T c_u[7] = { 'w', 'a', 'r', 'n', 'i', 'n', 'g' };

  static char_T d_u[7] = { 'm', 'e', 's', 's', 'a', 'g', 'e' };

  cgxertBlkSrcLocInfo b_blkSrcLoc;
  cgxertBlkSrcLocInfo blkSrcLoc;
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *m;
  const mxArray *y;
  int32_T i;
  char_T msgID[72];
  char_T b_u[7];
  st.prev = sp;
  st.tls = sp->tls;
  memcpy(&msgID[0], &b_msgID[0], 72U * sizeof(char_T));
  for (i = 0; i < 7; i++) {
    b_u[i] = c_u[i];
  }

  y = NULL;
  m = emlrtCreateCharArray(2, &iv[0]);
  emlrtInitCharArrayR2013a(cgxertPrepareEmlrtTLS(moduleInstance->S,
    (emlrtConstCTX)sp, blkSrc->sysIdx, blkSrc->blkIdx), 7, m, &b_u[0]);
  emlrtAssign(&y, m);
  for (i = 0; i < 7; i++) {
    b_u[i] = d_u[i];
  }

  b_y = NULL;
  m = emlrtCreateCharArray(2, &iv1[0]);
  emlrtInitCharArrayR2013a(cgxertPrepareEmlrtTLS(moduleInstance->S,
    (emlrtConstCTX)sp, blkSrc->sysIdx, blkSrc->blkIdx), 7, m, &b_u[0]);
  emlrtAssign(&b_y, m);
  c_y = NULL;
  m = emlrtCreateCharArray(2, &iv2[0]);
  emlrtInitCharArrayR2013a(cgxertPrepareEmlrtTLS(moduleInstance->S,
    (emlrtConstCTX)sp, blkSrc->sysIdx, blkSrc->blkIdx), 72, m, &msgID[0]);
  emlrtAssign(&c_y, m);
  st.site = &ln_emlrtRSI;
  blkSrcLoc.sysIdx = moduleInstance->sysIdx;
  blkSrcLoc.blkIdx = 6;
  b_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
  b_blkSrcLoc.blkIdx = 6;
  b_feval(moduleInstance, &st, y, feval(moduleInstance, &st, b_y, c_y,
           &j_emlrtMCI, &blkSrcLoc), &k_emlrtMCI, &b_blkSrcLoc);
}

static void NLPSolverInterface_solve(InstanceStruct_dnGfh1DX0a11xSfGnyzF5G
  *moduleInstance, const emlrtStack *sp,
  robotics_core_internal_DampedBFGSwGradientProjection *obj, real_T seed[6],
  real_T xSol[6], real_T *solutionInfo_Iterations, real_T
  *solutionInfo_RRAttempts, real_T *solutionInfo_Error, real_T
  *solutionInfo_ExitFlag, char_T solutionInfo_Status_data[], int32_T
  solutionInfo_Status_size[2], cgxertBlkSrcLocInfo *blkSrc)
{
  static char_T cv[14] = { 'b', 'e', 's', 't', ' ', 'a', 'v', 'a', 'i', 'l', 'a',
    'b', 'l', 'e' };

  static char_T cv1[7] = { 's', 'u', 'c', 'c', 'e', 's', 's' };

  cgxertBlkSrcLocInfo b_blkSrcLoc;
  cgxertBlkSrcLocInfo blkSrcLoc;
  cgxertBlkSrcLocInfo c_blkSrcLoc;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  emlrtTimespec expl_temp;
  emxArray_boolean_T *r;
  emxArray_boolean_T *r1;
  emxArray_boolean_T *r2;
  emxArray_boolean_T *r3;
  emxArray_boolean_T *r4;
  emxArray_boolean_T *r5;
  emxArray_real_T *b_obj;
  emxArray_real_T *c_obj;
  emxArray_real_T *lb;
  emxArray_real_T *newseed;
  emxArray_real_T *rn;
  emxArray_real_T *ub;
  emxArray_real_T *x;
  rigidBodyJoint *e_obj;
  robotics_manip_internal_IKExtraArgs *args;
  robotics_manip_internal_RigidBodyTree_1 *d_obj;
  real_T b_xSol[6];
  real_T b_ub[2];
  real_T p[2];
  real_T err;
  real_T iter;
  real_T tol;
  int32_T b_i;
  int32_T i;
  int32_T i1;
  int32_T k;
  int32_T nx;
  robotics_core_internal_NLPSolverExitFlags exitFlag;
  robotics_core_internal_NLPSolverExitFlags exitFlagPrev;
  boolean_T exitg1;
  boolean_T guard1 = false;
  boolean_T guard2 = false;
  boolean_T guard3 = false;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  obj->MaxNumIterationInternal = obj->MaxNumIteration;
  obj->MaxTimeInternal = obj->MaxTime;
  for (i = 0; i < 6; i++) {
    obj->SeedInternal[i] = seed[i];
  }

  tol = obj->SolutionTolerance;
  st.site = &kg_emlrtRSI;
  b_st.site = &pg_emlrtRSI;
  expl_temp = tic();
  obj->TimeObj.StartTime.tv_sec = expl_temp.tv_sec;
  obj->TimeObj.StartTime.tv_nsec = expl_temp.tv_nsec;
  b_st.site = &qg_emlrtRSI;
  st.site = &lg_emlrtRSI;
  blkSrcLoc.sysIdx = moduleInstance->sysIdx;
  blkSrcLoc.blkIdx = 6;
  DampedBFGSwGradientProjection_solveInternal(moduleInstance, &st, obj, xSol,
    &exitFlag, &err, &iter, &blkSrcLoc);
  *solutionInfo_RRAttempts = 0.0;
  *solutionInfo_Iterations = iter;
  *solutionInfo_Error = err;
  exitFlagPrev = exitFlag;
  emxInit_real_T1(&newseed, 1);
  emxInit_real_T1(&ub, 1);
  emxInit_real_T1(&lb, 1);
  emxInit_real_T1(&rn, 1);
  emxInit_real_T1(&x, 1);
  emxInit_real_T1(&b_obj, 1);
  emxInit_real_T1(&c_obj, 1);
  emxInit_boolean_T(&r, 1);
  emxInit_boolean_T(&r1, 1);
  emxInit_boolean_T(&r2, 1);
  emxInit_boolean_T(&r3, 1);
  emxInit_boolean_T(&r4, 1);
  emxInit_boolean_T(&r5, 1);
  exitg1 = false;
  while ((!exitg1) && (obj->RandomRestart && (err > tol))) {
    obj->MaxNumIterationInternal -= iter;
    st.site = &mg_emlrtRSI;
    b_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
    b_blkSrcLoc.blkIdx = 6;
    obj->MaxTimeInternal = obj->MaxTime - SystemTimeProvider_getElapsedTime
      (moduleInstance, &st, &obj->TimeObj, &b_blkSrcLoc);
    if (obj->MaxNumIterationInternal <= 0.0) {
      exitFlag =
        robotics_core_internal_NLPSolverExitFlags_IterationLimitExceeded;
    }

    if ((exitFlag ==
         robotics_core_internal_NLPSolverExitFlags_IterationLimitExceeded) ||
        (exitFlag == robotics_core_internal_NLPSolverExitFlags_TimeLimitExceeded))
    {
      exitFlagPrev = exitFlag;
      exitg1 = true;
    } else {
      st.site = &ng_emlrtRSI;
      args = obj->ExtraArgs;
      b_st.site = &gl_emlrtRSI;
      d_obj = args->Robot;
      b_i = newseed->size[0];
      err = emlrtNonNegativeCheckR2012b(d_obj->PositionNumber, &wb_emlrtDCI,
        cgxertPrepareEmlrtTLS(moduleInstance->S, &b_st, moduleInstance->sysIdx,
        6));
      newseed->size[0] = (int32_T)emlrtIntegerCheckR2012b(err, &vb_emlrtDCI,
        cgxertPrepareEmlrtTLS(moduleInstance->S, &b_st, moduleInstance->sysIdx,
        6));
      emxEnsureCapacity_real_T1(newseed, b_i);
      err = emlrtNonNegativeCheckR2012b(d_obj->PositionNumber, &wb_emlrtDCI,
        cgxertPrepareEmlrtTLS(moduleInstance->S, &b_st, moduleInstance->sysIdx,
        6));
      nx = (int32_T)emlrtIntegerCheckR2012b(err, &vb_emlrtDCI,
        cgxertPrepareEmlrtTLS(moduleInstance->S, &b_st, moduleInstance->sysIdx,
        6));
      for (b_i = 0; b_i < nx; b_i++) {
        newseed->data[b_i] = 0.0;
      }

      err = d_obj->NumBodies;
      b_i = (int32_T)err - 1;
      emlrtForLoopVectorCheckR2021a(1.0, 1.0, err, mxDOUBLE_CLASS, (int32_T)err,
        &g_emlrtRTEI, cgxertPrepareEmlrtTLS(moduleInstance->S, &b_st,
        moduleInstance->sysIdx, 6));
      for (i = 0; i <= b_i; i++) {
        nx = emlrtDynamicBoundsCheckR2012b((int32_T)((uint32_T)i + 1U), 1, 7,
          &rb_emlrtBCI, cgxertPrepareEmlrtTLS(moduleInstance->S, &b_st,
          moduleInstance->sysIdx, 6));
        for (i1 = 0; i1 < 2; i1++) {
          p[i1] = d_obj->PositionDoFMap[(nx + 7 * i1) - 1];
        }

        if (p[0] <= p[1]) {
          c_st.site = &hl_emlrtRSI;
          e_obj = d_obj->Bodies[i]->JointInternal;
          if ((int32_T)emlrtIntegerCheckR2012b(e_obj->PositionNumber,
               &ub_emlrtDCI, cgxertPrepareEmlrtTLS(moduleInstance->S, &c_st,
                moduleInstance->sysIdx, 6)) == 0) {
            i1 = ub->size[0];
            ub->size[0] = 1;
            emxEnsureCapacity_real_T1(ub, i1);
            ub->data[0] = rtNaN;
          } else {
            nx = e_obj->PositionLimitsInternal->size[0];
            i1 = b_obj->size[0];
            b_obj->size[0] = nx;
            emxEnsureCapacity_real_T1(b_obj, i1);
            for (i1 = 0; i1 < nx; i1++) {
              b_obj->data[i1] = e_obj->PositionLimitsInternal->data[i1 +
                e_obj->PositionLimitsInternal->size[0]];
            }

            i1 = ub->size[0];
            ub->size[0] = b_obj->size[0];
            emxEnsureCapacity_real_T1(ub, i1);
            nx = b_obj->size[0];
            if (nx - 1 >= 0) {
              memcpy(&ub->data[0], &b_obj->data[0], (uint32_T)nx * sizeof(real_T));
            }

            nx = e_obj->PositionLimitsInternal->size[0];
            i1 = c_obj->size[0];
            c_obj->size[0] = nx;
            emxEnsureCapacity_real_T1(c_obj, i1);
            for (i1 = 0; i1 < nx; i1++) {
              c_obj->data[i1] = e_obj->PositionLimitsInternal->data[i1];
            }

            i1 = lb->size[0];
            lb->size[0] = c_obj->size[0];
            emxEnsureCapacity_real_T1(lb, i1);
            nx = c_obj->size[0];
            if (nx - 1 >= 0) {
              memcpy(&lb->data[0], &c_obj->data[0], (uint32_T)nx * sizeof(real_T));
            }

            i1 = r->size[0];
            r->size[0] = lb->size[0];
            emxEnsureCapacity_boolean_T(r, i1);
            nx = lb->size[0];
            for (i1 = 0; i1 < nx; i1++) {
              r->data[i1] = ((!muDoubleScalarIsInf(lb->data[i1])) &&
                             (!muDoubleScalarIsNaN(lb->data[i1])));
            }

            d_st.site = &il_emlrtRSI;
            guard1 = false;
            guard2 = false;
            guard3 = false;
            if (all(moduleInstance, &d_st, r)) {
              i1 = r1->size[0];
              r1->size[0] = ub->size[0];
              emxEnsureCapacity_boolean_T(r1, i1);
              nx = ub->size[0];
              for (i1 = 0; i1 < nx; i1++) {
                r1->data[i1] = ((!muDoubleScalarIsInf(ub->data[i1])) &&
                                (!muDoubleScalarIsNaN(ub->data[i1])));
              }

              d_st.site = &il_emlrtRSI;
              if (all(moduleInstance, &d_st, r1)) {
                d_st.site = &jl_emlrtRSI;
                c_rand(moduleInstance, &d_st, e_obj->PositionNumber, rn);
                if (ub->size[0] == lb->size[0]) {
                  i1 = ub->size[0];
                  emxEnsureCapacity_real_T1(ub, i1);
                  nx = ub->size[0];
                  for (i1 = 0; i1 < nx; i1++) {
                    ub->data[i1] -= lb->data[i1];
                  }
                } else {
                  minus(ub, lb);
                }

                if (rn->size[0] == ub->size[0]) {
                  i1 = rn->size[0];
                  emxEnsureCapacity_real_T1(rn, i1);
                  nx = rn->size[0];
                  for (i1 = 0; i1 < nx; i1++) {
                    rn->data[i1] *= ub->data[i1];
                  }
                } else {
                  times(rn, ub);
                }

                if (lb->size[0] == rn->size[0]) {
                  i1 = ub->size[0];
                  ub->size[0] = lb->size[0];
                  emxEnsureCapacity_real_T1(ub, i1);
                  nx = lb->size[0];
                  for (i1 = 0; i1 < nx; i1++) {
                    ub->data[i1] = lb->data[i1] + rn->data[i1];
                  }
                } else {
                  plus(ub, lb, rn);
                }
              } else {
                guard3 = true;
              }
            } else {
              guard3 = true;
            }

            if (guard3) {
              i1 = r2->size[0];
              r2->size[0] = lb->size[0];
              emxEnsureCapacity_boolean_T(r2, i1);
              nx = lb->size[0];
              for (i1 = 0; i1 < nx; i1++) {
                r2->data[i1] = ((!muDoubleScalarIsInf(lb->data[i1])) &&
                                (!muDoubleScalarIsNaN(lb->data[i1])));
              }

              d_st.site = &kl_emlrtRSI;
              if (all(moduleInstance, &d_st, r2)) {
                i1 = r3->size[0];
                r3->size[0] = ub->size[0];
                emxEnsureCapacity_boolean_T(r3, i1);
                nx = ub->size[0];
                for (i1 = 0; i1 < nx; i1++) {
                  r3->data[i1] = (muDoubleScalarIsInf(ub->data[i1]) ||
                                  muDoubleScalarIsNaN(ub->data[i1]));
                }

                d_st.site = &kl_emlrtRSI;
                if (any(moduleInstance, &d_st, r3)) {
                  b_ub[0] = (real_T)lb->size[0];
                  b_ub[1] = 1.0;
                  d_st.site = &ll_emlrtRSI;
                  randn(moduleInstance, &d_st, b_ub, x);
                  nx = x->size[0] - 1;
                  i1 = ub->size[0];
                  ub->size[0] = x->size[0];
                  emxEnsureCapacity_real_T1(ub, i1);
                  for (k = 0; k <= nx; k++) {
                    ub->data[k] = muDoubleScalarAbs(x->data[k]);
                  }

                  if (lb->size[0] == ub->size[0]) {
                    i1 = ub->size[0];
                    ub->size[0] = lb->size[0];
                    emxEnsureCapacity_real_T1(ub, i1);
                    nx = lb->size[0];
                    for (i1 = 0; i1 < nx; i1++) {
                      ub->data[i1] += lb->data[i1];
                    }
                  } else {
                    b_plus(ub, lb);
                  }
                } else {
                  guard2 = true;
                }
              } else {
                guard2 = true;
              }
            }

            if (guard2) {
              i1 = r4->size[0];
              r4->size[0] = lb->size[0];
              emxEnsureCapacity_boolean_T(r4, i1);
              nx = lb->size[0];
              for (i1 = 0; i1 < nx; i1++) {
                r4->data[i1] = (muDoubleScalarIsInf(lb->data[i1]) ||
                                muDoubleScalarIsNaN(lb->data[i1]));
              }

              d_st.site = &ml_emlrtRSI;
              if (any(moduleInstance, &d_st, r4)) {
                i1 = r5->size[0];
                r5->size[0] = ub->size[0];
                emxEnsureCapacity_boolean_T(r5, i1);
                nx = ub->size[0];
                for (i1 = 0; i1 < nx; i1++) {
                  r5->data[i1] = ((!muDoubleScalarIsInf(ub->data[i1])) &&
                                  (!muDoubleScalarIsNaN(ub->data[i1])));
                }

                d_st.site = &ml_emlrtRSI;
                if (all(moduleInstance, &d_st, r5)) {
                  b_ub[0] = (real_T)ub->size[0];
                  b_ub[1] = 1.0;
                  d_st.site = &nl_emlrtRSI;
                  randn(moduleInstance, &d_st, b_ub, x);
                  nx = x->size[0] - 1;
                  i1 = rn->size[0];
                  rn->size[0] = x->size[0];
                  emxEnsureCapacity_real_T1(rn, i1);
                  for (k = 0; k <= nx; k++) {
                    rn->data[k] = muDoubleScalarAbs(x->data[k]);
                  }

                  if (ub->size[0] == rn->size[0]) {
                    i1 = ub->size[0];
                    emxEnsureCapacity_real_T1(ub, i1);
                    nx = ub->size[0];
                    for (i1 = 0; i1 < nx; i1++) {
                      ub->data[i1] -= rn->data[i1];
                    }
                  } else {
                    minus(ub, rn);
                  }
                } else {
                  guard1 = true;
                }
              } else {
                guard1 = true;
              }
            }

            if (guard1) {
              nx = ub->size[0];
              b_ub[0] = (real_T)nx;
              b_ub[1] = 1.0;
              d_st.site = &ol_emlrtRSI;
              randn(moduleInstance, &d_st, b_ub, ub);
            }
          }

          if (p[0] > p[1]) {
            i1 = 0;
            k = 0;
          } else {
            i1 = newseed->size[0];
            k = (int32_T)emlrtIntegerCheckR2012b(p[0], &sb_emlrtDCI,
              cgxertPrepareEmlrtTLS(moduleInstance->S, &b_st,
              moduleInstance->sysIdx, 6));
            i1 = emlrtDynamicBoundsCheckR2012b(k, 1, i1, &sb_emlrtBCI,
              cgxertPrepareEmlrtTLS(moduleInstance->S, &b_st,
              moduleInstance->sysIdx, 6)) - 1;
            k = newseed->size[0];
            nx = (int32_T)emlrtIntegerCheckR2012b(p[1], &tb_emlrtDCI,
              cgxertPrepareEmlrtTLS(moduleInstance->S, &b_st,
              moduleInstance->sysIdx, 6));
            k = emlrtDynamicBoundsCheckR2012b(nx, 1, k, &tb_emlrtBCI,
              cgxertPrepareEmlrtTLS(moduleInstance->S, &b_st,
              moduleInstance->sysIdx, 6));
          }

          nx = ub->size[0];
          emlrtSubAssignSizeCheck1dR2017a(k - i1, nx, &i_emlrtECI,
            cgxertPrepareEmlrtTLS(moduleInstance->S, &b_st,
            moduleInstance->sysIdx, 6));
          nx = k - i1;
          for (k = 0; k < nx; k++) {
            newseed->data[i1 + k] = ub->data[k];
          }
        }
      }

      b_i = newseed->size[0];
      emlrtSubAssignSizeCheck1dR2017a(6, b_i, &h_emlrtECI, cgxertPrepareEmlrtTLS
        (moduleInstance->S, (emlrtConstCTX)sp, blkSrc->sysIdx, blkSrc->blkIdx));
      for (b_i = 0; b_i < 6; b_i++) {
        obj->SeedInternal[b_i] = newseed->data[b_i];
      }

      st.site = &og_emlrtRSI;
      c_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
      c_blkSrcLoc.blkIdx = 6;
      DampedBFGSwGradientProjection_solveInternal(moduleInstance, &st, obj,
        b_xSol, &exitFlag, &err, &iter, &c_blkSrcLoc);
      if (err < *solutionInfo_Error) {
        for (i = 0; i < 6; i++) {
          xSol[i] = b_xSol[i];
        }

        *solutionInfo_Error = err;
        exitFlagPrev = exitFlag;
      }

      (*solutionInfo_RRAttempts)++;
      *solutionInfo_Iterations += iter;
    }
  }

  emxFree_boolean_T(&r5);
  emxFree_boolean_T(&r4);
  emxFree_boolean_T(&r3);
  emxFree_boolean_T(&r2);
  emxFree_boolean_T(&r1);
  emxFree_boolean_T(&r);
  emxFree_real_T(&c_obj);
  emxFree_real_T(&b_obj);
  emxFree_real_T(&x);
  emxFree_real_T(&rn);
  emxFree_real_T(&lb);
  emxFree_real_T(&ub);
  emxFree_real_T(&newseed);
  *solutionInfo_ExitFlag = (real_T)exitFlagPrev;
  if (*solutionInfo_Error < tol) {
    solutionInfo_Status_size[0] = 1;
    solutionInfo_Status_size[1] = 7;
    for (b_i = 0; b_i < 7; b_i++) {
      solutionInfo_Status_data[b_i] = cv1[b_i];
    }
  } else {
    solutionInfo_Status_size[0] = 1;
    solutionInfo_Status_size[1] = 14;
    for (b_i = 0; b_i < 14; b_i++) {
      solutionInfo_Status_data[b_i] = cv[b_i];
    }
  }
}

static void SystemTimeProvider_reset(robotics_core_internal_SystemTimeProvider
  *obj)
{
  emlrtStack st;
  emlrtTimespec expl_temp;
  st.site = &pg_emlrtRSI;
  expl_temp = tic();
  obj->StartTime.tv_sec = expl_temp.tv_sec;
  obj->StartTime.tv_nsec = expl_temp.tv_nsec;
  st.site = &qg_emlrtRSI;
}

static emlrtTimespec tic(void)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  emlrtTimespec tstart;
  st.site = &rg_emlrtRSI;
  b_st.site = &sg_emlrtRSI;
  c_st.site = &tg_emlrtRSI;
  emlrtClockGettimeMonotonic(&tstart);
  return tstart;
}

static void DampedBFGSwGradientProjection_solveInternal
  (InstanceStruct_dnGfh1DX0a11xSfGnyzF5G *moduleInstance, const emlrtStack *sp,
   robotics_core_internal_DampedBFGSwGradientProjection *obj, real_T xSol[6],
   robotics_core_internal_NLPSolverExitFlags *exitFlag, real_T *err, real_T
   *iter, cgxertBlkSrcLocInfo *blkSrc)
{
  static real_T e_y[36] = { 1.4901161193847656E-8, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    1.4901161193847656E-8, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.4901161193847656E-8,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.4901161193847656E-8, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 1.4901161193847656E-8, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    1.4901161193847656E-8 };

  __m128d r6;
  __m128d r8;
  cgxertBlkSrcLocInfo ab_blkSrcLoc;
  cgxertBlkSrcLocInfo b_blkSrcLoc;
  cgxertBlkSrcLocInfo bb_blkSrcLoc;
  cgxertBlkSrcLocInfo blkSrcLoc;
  cgxertBlkSrcLocInfo c_blkSrcLoc;
  cgxertBlkSrcLocInfo cb_blkSrcLoc;
  cgxertBlkSrcLocInfo d_blkSrcLoc;
  cgxertBlkSrcLocInfo db_blkSrcLoc;
  cgxertBlkSrcLocInfo e_blkSrcLoc;
  cgxertBlkSrcLocInfo eb_blkSrcLoc;
  cgxertBlkSrcLocInfo f_blkSrcLoc;
  cgxertBlkSrcLocInfo fb_blkSrcLoc;
  cgxertBlkSrcLocInfo g_blkSrcLoc;
  cgxertBlkSrcLocInfo gb_blkSrcLoc;
  cgxertBlkSrcLocInfo h_blkSrcLoc;
  cgxertBlkSrcLocInfo hb_blkSrcLoc;
  cgxertBlkSrcLocInfo i_blkSrcLoc;
  cgxertBlkSrcLocInfo ib_blkSrcLoc;
  cgxertBlkSrcLocInfo j_blkSrcLoc;
  cgxertBlkSrcLocInfo jb_blkSrcLoc;
  cgxertBlkSrcLocInfo k_blkSrcLoc;
  cgxertBlkSrcLocInfo kb_blkSrcLoc;
  cgxertBlkSrcLocInfo l_blkSrcLoc;
  cgxertBlkSrcLocInfo lb_blkSrcLoc;
  cgxertBlkSrcLocInfo m_blkSrcLoc;
  cgxertBlkSrcLocInfo mb_blkSrcLoc;
  cgxertBlkSrcLocInfo n_blkSrcLoc;
  cgxertBlkSrcLocInfo nb_blkSrcLoc;
  cgxertBlkSrcLocInfo o_blkSrcLoc;
  cgxertBlkSrcLocInfo ob_blkSrcLoc;
  cgxertBlkSrcLocInfo p_blkSrcLoc;
  cgxertBlkSrcLocInfo pb_blkSrcLoc;
  cgxertBlkSrcLocInfo q_blkSrcLoc;
  cgxertBlkSrcLocInfo r_blkSrcLoc;
  cgxertBlkSrcLocInfo s_blkSrcLoc;
  cgxertBlkSrcLocInfo t_blkSrcLoc;
  cgxertBlkSrcLocInfo u_blkSrcLoc;
  cgxertBlkSrcLocInfo v_blkSrcLoc;
  cgxertBlkSrcLocInfo w_blkSrcLoc;
  cgxertBlkSrcLocInfo x_blkSrcLoc;
  cgxertBlkSrcLocInfo y_blkSrcLoc;
  emlrtStack b_st;
  emlrtStack st;
  emxArray_boolean_T *activeSet;
  emxArray_boolean_T *b_a;
  emxArray_boolean_T *b_activeSet;
  emxArray_boolean_T *b_bIn;
  emxArray_boolean_T *c_activeSet;
  emxArray_int32_T *ii;
  emxArray_int32_T *inactiveConstraintIndices;
  emxArray_int32_T *r1;
  emxArray_int32_T *r2;
  emxArray_int32_T *r3;
  emxArray_int32_T *r4;
  emxArray_int32_T *r5;
  emxArray_real_T *A;
  emxArray_real_T *B;
  emxArray_real_T *a;
  emxArray_real_T *a__2;
  emxArray_real_T *bIn;
  emxArray_real_T *b_A;
  emxArray_real_T *b_args;
  emxArray_real_T *b_b;
  emxArray_real_T *b_y;
  emxArray_real_T *c_A;
  emxArray_real_T *c_a;
  emxArray_real_T *c_args;
  emxArray_real_T *c_bIn;
  emxArray_real_T *c_y;
  emxArray_real_T *d_obj;
  emxArray_real_T *e_obj;
  emxArray_real_T *f_obj;
  emxArray_real_T *g_obj;
  emxArray_real_T *grad;
  emxArray_real_T *gradNew;
  emxArray_real_T *y;
  robotics_manip_internal_IKExtraArgs *args;
  robotics_manip_internal_IKExtraArgs *r;
  robotics_manip_internal_IKExtraArgs *r7;
  robotics_manip_internal_IKExtraArgs *r9;
  real_T H[36];
  real_T V[36];
  real_T b_V[36];
  real_T b_sNew[36];
  real_T d_a[36];
  real_T Hg[6];
  real_T sNew[6];
  real_T x[6];
  real_T b_cost;
  real_T b_costNew;
  real_T b_gamma;
  real_T beta;
  real_T c_costNew;
  real_T cost;
  real_T costNew;
  real_T d;
  real_T d_y;
  real_T lambda;
  real_T m;
  real_T sigma;
  int32_T b_i;
  int32_T b_obj;
  int32_T c_obj;
  int32_T exitg1;
  int32_T exitg2;
  int32_T i;
  int32_T i1;
  int32_T i2;
  int32_T idxl;
  int32_T loop_ub;
  int32_T trueCount;
  uint32_T unnamed_idx_0;
  boolean_T flag;
  boolean_T guard1 = false;
  boolean_T guard2 = false;
  boolean_T guard3 = false;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  for (i = 0; i < 6; i++) {
    x[i] = obj->SeedInternal[i];
  }

  st.site = &ug_emlrtRSI;
  SystemTimeProvider_reset(&obj->TimeObjInternal);
  emxInit_real_T(&a__2, 2);
  st.site = &vg_emlrtRSI;
  IKHelpers_computeCost(moduleInstance, &st, x, obj->ExtraArgs, &cost, V, a__2,
                        &r);
  b_cost = cost;
  obj->ExtraArgs = r;
  st.site = &wg_emlrtRSI;
  args = obj->ExtraArgs;
  emxInit_real_T1(&b_args, 1);
  b_i = b_args->size[0];
  b_args->size[0] = args->GradTemp->size[0];
  emxEnsureCapacity_real_T1(b_args, b_i);
  loop_ub = args->GradTemp->size[0];
  for (b_i = 0; b_i < loop_ub; b_i++) {
    b_args->data[b_i] = args->GradTemp->data[b_i];
  }

  emxInit_real_T1(&grad, 1);
  b_i = grad->size[0];
  grad->size[0] = b_args->size[0];
  emxEnsureCapacity_real_T1(grad, b_i);
  loop_ub = b_args->size[0];
  if (loop_ub - 1 >= 0) {
    memcpy(&grad->data[0], &b_args->data[0], (uint32_T)loop_ub * sizeof(real_T));
  }

  emxFree_real_T(&b_args);
  eye(H);
  emxInit_boolean_T(&activeSet, 1);
  emxInit_real_T(&A, 2);
  emxInit_real_T1(&a, 1);
  emxInit_real_T(&B, 2);
  if (obj->ConstraintsOn) {
    b_i = B->size[0] * B->size[1];
    B->size[0] = obj->ConstraintMatrix->size[0];
    B->size[1] = obj->ConstraintMatrix->size[1];
    emxEnsureCapacity_real_T(B, b_i);
    b_obj = obj->ConstraintMatrix->size[0];
    c_obj = obj->ConstraintMatrix->size[1];
    emxInit_real_T1(&d_obj, 1);
    b_i = d_obj->size[0];
    d_obj->size[0] = b_obj * c_obj;
    emxEnsureCapacity_real_T1(d_obj, b_i);
    loop_ub = b_obj * c_obj;
    for (b_i = 0; b_i < loop_ub; b_i++) {
      d_obj->data[b_i] = obj->ConstraintMatrix->data[b_i];
    }

    loop_ub = d_obj->size[0];
    if (loop_ub - 1 >= 0) {
      memcpy(&B->data[0], &d_obj->data[0], (uint32_T)loop_ub * sizeof(real_T));
    }

    emxFree_real_T(&d_obj);
    st.site = &th_emlrtRSI;
    blkSrcLoc.sysIdx = moduleInstance->sysIdx;
    blkSrcLoc.blkIdx = 6;
    dynamic_size_checks(moduleInstance, &st, B, B->size[0], &blkSrcLoc);
    st.site = &sh_emlrtRSI;
    b_mtimes(B, x, a);
    if (a->size[0] == obj->ConstraintBound->size[0]) {
      emxInit_boolean_T(&b_a, 1);
      b_i = b_a->size[0];
      b_a->size[0] = a->size[0];
      emxEnsureCapacity_boolean_T(b_a, b_i);
      loop_ub = a->size[0];
      for (b_i = 0; b_i < loop_ub; b_i++) {
        b_a->data[b_i] = (a->data[b_i] >= obj->ConstraintBound->data[b_i]);
      }

      b_i = activeSet->size[0];
      activeSet->size[0] = b_a->size[0];
      emxEnsureCapacity_boolean_T(activeSet, b_i);
      loop_ub = b_a->size[0];
      if (loop_ub - 1 >= 0) {
        memcpy(&activeSet->data[0], &b_a->data[0], (uint32_T)loop_ub * sizeof
               (boolean_T));
      }

      emxFree_boolean_T(&b_a);
    } else {
      b_binary_expand_op(activeSet, a, obj);
    }

    c_obj = activeSet->size[0] - 1;
    trueCount = 0;
    for (i = 0; i <= c_obj; i++) {
      if (activeSet->data[i]) {
        trueCount++;
      }
    }

    emxInit_int32_T1(&r5, 1);
    b_i = r5->size[0];
    r5->size[0] = trueCount;
    emxEnsureCapacity_int32_T(r5, b_i);
    trueCount = 0;
    for (i = 0; i <= c_obj; i++) {
      if (activeSet->data[i]) {
        r5->data[trueCount] = i;
        trueCount++;
      }
    }

    b_obj = obj->ConstraintMatrix->size[1];
    b_i = A->size[0] * A->size[1];
    A->size[0] = obj->ConstraintMatrix->size[0];
    A->size[1] = r5->size[0];
    emxEnsureCapacity_real_T(A, b_i);
    loop_ub = r5->size[0];
    for (b_i = 0; b_i < loop_ub; b_i++) {
      trueCount = obj->ConstraintMatrix->size[0];
      for (i1 = 0; i1 < trueCount; i1++) {
        i2 = r5->data[b_i];
        A->data[i1 + A->size[0] * b_i] = obj->ConstraintMatrix->data[i1 +
          obj->ConstraintMatrix->size[0] * emlrtDynamicBoundsCheckR2012b(i2, 0,
          b_obj - 1, &yb_emlrtBCI, cgxertPrepareEmlrtTLS(moduleInstance->S,
          (emlrtConstCTX)sp, moduleInstance->sysIdx, 6))];
      }
    }

    emxFree_int32_T(&r5);
  } else {
    unnamed_idx_0 = (uint32_T)obj->ConstraintBound->size[0];
    b_i = activeSet->size[0];
    activeSet->size[0] = (int32_T)unnamed_idx_0;
    emxEnsureCapacity_boolean_T(activeSet, b_i);
    loop_ub = (int32_T)unnamed_idx_0;
    for (b_i = 0; b_i < loop_ub; b_i++) {
      activeSet->data[b_i] = false;
    }

    A->size[0] = 6;
    A->size[1] = 0;
  }

  b_i = A->size[1] - 1;
  emxInit_real_T(&y, 2);
  for (c_obj = 0; c_obj <= b_i; c_obj++) {
    i1 = A->size[1];
    trueCount = emlrtDynamicBoundsCheckR2012b(c_obj + 1, 1, i1, &ub_emlrtBCI,
      cgxertPrepareEmlrtTLS(moduleInstance->S, (emlrtConstCTX)sp, blkSrc->sysIdx,
      blkSrc->blkIdx));
    i1 = a->size[0];
    a->size[0] = A->size[0];
    emxEnsureCapacity_real_T1(a, i1);
    loop_ub = A->size[0];
    for (i1 = 0; i1 < loop_ub; i1++) {
      a->data[i1] = A->data[i1 + A->size[0] * (trueCount - 1)];
    }

    st.site = &th_emlrtRSI;
    b_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
    b_blkSrcLoc.blkIdx = 6;
    b_dynamic_size_checks(moduleInstance, &st, a, A->size[0], &b_blkSrcLoc);
    st.site = &th_emlrtRSI;
    c_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
    c_blkSrcLoc.blkIdx = 6;
    c_dynamic_size_checks(moduleInstance, &st, a, A->size[0], &c_blkSrcLoc);
    sigma = 0.0;
    for (i1 = 0; i1 < 6; i1++) {
      sNew[i1] = 0.0;
      for (i2 = 0; i2 < 6; i2++) {
        beta = sNew[i1] + A->data[i2 + A->size[0] * c_obj] * H[i2 + 6 * i1];
        sNew[i1] = beta;
      }

      sigma += sNew[i1] * A->data[i1 + A->size[0] * c_obj];
    }

    sigma = 1.0 / sigma;
    i1 = y->size[0] * y->size[1];
    y->size[0] = A->size[0];
    y->size[1] = A->size[0];
    emxEnsureCapacity_real_T(y, i1);
    loop_ub = A->size[0];
    for (i1 = 0; i1 < loop_ub; i1++) {
      trueCount = A->size[0];
      for (i2 = 0; i2 < trueCount; i2++) {
        y->data[i2 + y->size[0] * i1] = A->data[i2 + A->size[0] * c_obj] *
          A->data[i1 + A->size[0] * c_obj];
      }
    }

    st.site = &th_emlrtRSI;
    d_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
    d_blkSrcLoc.blkIdx = 6;
    d_dynamic_size_checks(moduleInstance, &st, y, y->size[0], &d_blkSrcLoc);
    for (i1 = 0; i1 <= 34; i1 += 2) {
      r6 = _mm_loadu_pd(&H[i1]);
      _mm_storeu_pd(&d_a[i1], _mm_mul_pd(_mm_set1_pd(sigma), r6));
    }

    st.site = &sh_emlrtRSI;
    c_mtimes(d_a, y, a__2);
    st.site = &th_emlrtRSI;
    f_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
    f_blkSrcLoc.blkIdx = 6;
    e_dynamic_size_checks(moduleInstance, &st, a__2->size[1], &f_blkSrcLoc);
    for (i1 = 0; i1 < 6; i1++) {
      for (i2 = 0; i2 < 6; i2++) {
        d = 0.0;
        for (trueCount = 0; trueCount < 6; trueCount++) {
          d += a__2->data[i1 + 6 * trueCount] * H[trueCount + 6 * i2];
        }

        d_a[i1 + 6 * i2] = H[i1 + 6 * i2] - d;
      }
    }

    memcpy(&H[0], &d_a[0], 36U * sizeof(real_T));
  }

  for (i = 0; i < 6; i++) {
    xSol[i] = x[i];
  }

  d = obj->MaxNumIterationInternal;
  emlrtForLoopVectorCheckR2021a(1.0, 1.0, d, mxDOUBLE_CLASS, (int32_T)d,
    &h_emlrtRTEI, cgxertPrepareEmlrtTLS(moduleInstance->S, (emlrtConstCTX)sp,
    moduleInstance->sysIdx, 6));
  i = 0;
  emxInit_real_T1(&bIn, 1);
  emxInit_int32_T1(&inactiveConstraintIndices, 1);
  emxInit_real_T1(&gradNew, 1);
  emxInit_int32_T1(&ii, 1);
  emxInit_real_T(&b_b, 2);
  emxInit_real_T(&b_y, 2);
  emxInit_real_T(&c_y, 2);
  emxInit_int32_T1(&r1, 1);
  emxInit_int32_T1(&r2, 1);
  emxInit_int32_T1(&r3, 1);
  emxInit_int32_T1(&r4, 1);
  emxInit_real_T(&b_A, 2);
  emxInit_boolean_T(&b_activeSet, 1);
  emxInit_real_T1(&c_a, 1);
  emxInit_real_T(&e_obj, 2);
  emxInit_boolean_T(&c_activeSet, 1);
  emxInit_real_T1(&c_args, 1);
  emxInit_real_T(&c_A, 2);
  emxInit_real_T1(&f_obj, 1);
  emxInit_real_T1(&g_obj, 1);
  emxInit_boolean_T(&b_bIn, 1);
  emxInit_real_T1(&c_bIn, 1);
  do {
    exitg2 = 0;
    if (i <= (int32_T)d - 1) {
      st.site = &xg_emlrtRSI;
      b_st.site = &xg_emlrtRSI;
      e_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
      e_blkSrcLoc.blkIdx = 6;
      sigma = SystemTimeProvider_getElapsedTime(moduleInstance, &b_st,
        &obj->TimeObjInternal, &e_blkSrcLoc);
      flag = (sigma > obj->MaxTimeInternal);
      if (flag) {
        *exitFlag = robotics_core_internal_NLPSolverExitFlags_TimeLimitExceeded;
        st.site = &yg_emlrtRSI;
        *err = IKHelpers_evaluateSolution(moduleInstance, &st, obj->ExtraArgs);
        *iter = (real_T)i + 1.0;
        exitg2 = 1;
      } else {
        if ((A->size[0] == 0) || (A->size[1] == 0)) {
          b_i = a->size[0];
          a->size[0] = 1;
          emxEnsureCapacity_real_T1(a, b_i);
          a->data[0] = 0.0;
        } else {
          st.site = &th_emlrtRSI;
          g_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
          g_blkSrcLoc.blkIdx = 6;
          g_dynamic_size_checks(moduleInstance, &st, A, A, A->size[0], A->size[0],
                                &g_blkSrcLoc);
          st.site = &sh_emlrtRSI;
          d_mtimes(A, A, y);
          b_i = b_A->size[0] * b_A->size[1];
          b_A->size[0] = A->size[1];
          b_A->size[1] = A->size[0];
          emxEnsureCapacity_real_T(b_A, b_i);
          loop_ub = A->size[0];
          for (b_i = 0; b_i < loop_ub; b_i++) {
            trueCount = A->size[1];
            for (i1 = 0; i1 < trueCount; i1++) {
              b_A->data[i1 + b_A->size[0] * b_i] = A->data[b_i + A->size[0] * i1];
            }
          }

          st.site = &ah_emlrtRSI;
          i_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
          i_blkSrcLoc.blkIdx = 6;
          mldivide(moduleInstance, &st, y, b_A, B, &i_blkSrcLoc);
          st.site = &th_emlrtRSI;
          j_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
          j_blkSrcLoc.blkIdx = 6;
          h_dynamic_size_checks(moduleInstance, &st, B, grad, B->size[1],
                                grad->size[0], &j_blkSrcLoc);
          st.site = &sh_emlrtRSI;
          e_mtimes(B, grad, a);
        }

        st.site = &th_emlrtRSI;
        h_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
        h_blkSrcLoc.blkIdx = 6;
        f_dynamic_size_checks(moduleInstance, &st, grad, grad->size[0],
                              &h_blkSrcLoc);
        for (b_i = 0; b_i < 6; b_i++) {
          Hg[b_i] = 0.0;
          for (i1 = 0; i1 < 6; i1++) {
            m = Hg[b_i] + H[b_i + 6 * i1] * grad->data[i1];
            Hg[b_i] = m;
          }
        }

        st.site = &bh_emlrtRSI;
        if (DampedBFGSwGradientProjection_atLocalMinimum(moduleInstance, &st,
             obj, Hg, a)) {
          *exitFlag =
            robotics_core_internal_NLPSolverExitFlags_LocalMinimumFound;
          st.site = &ch_emlrtRSI;
          *err = IKHelpers_evaluateSolution(moduleInstance, &st, obj->ExtraArgs);
          *iter = (real_T)i + 1.0;
          exitg2 = 1;
        } else {
          guard1 = false;
          guard2 = false;
          guard3 = false;
          if (obj->ConstraintsOn && ((A->size[0] != 0) && (A->size[1] != 0))) {
            st.site = &th_emlrtRSI;
            k_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
            k_blkSrcLoc.blkIdx = 6;
            g_dynamic_size_checks(moduleInstance, &st, A, A, A->size[0], A->
                                  size[0], &k_blkSrcLoc);
            st.site = &sh_emlrtRSI;
            d_mtimes(A, A, y);
            st.site = &dh_emlrtRSI;
            l_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
            l_blkSrcLoc.blkIdx = 6;
            b_inv(moduleInstance, &st, y, B, &l_blkSrcLoc);
            st.site = &eh_emlrtRSI;
            n_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
            n_blkSrcLoc.blkIdx = 6;
            diag(moduleInstance, &st, B, gradNew, &n_blkSrcLoc);
            st.site = &eh_emlrtRSI;
            o_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
            o_blkSrcLoc.blkIdx = 6;
            d_sqrt(moduleInstance, &st, gradNew, &o_blkSrcLoc);
            st.site = &uh_emlrtRSI;
            p_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
            p_blkSrcLoc.blkIdx = 6;
            assertCompatibleDims(moduleInstance, &st, a, gradNew, &p_blkSrcLoc);
            if (a->size[0] == gradNew->size[0]) {
              b_i = c_a->size[0];
              c_a->size[0] = a->size[0];
              emxEnsureCapacity_real_T1(c_a, b_i);
              loop_ub = a->size[0];
              for (b_i = 0; b_i < loop_ub; b_i++) {
                c_a->data[b_i] = a->data[b_i] / gradNew->data[b_i];
              }

              st.site = &vh_emlrtRSI;
              maximum(moduleInstance, &st, c_a, &sigma, &idxl);
            } else {
              st.site = &vh_emlrtRSI;
              binary_expand_op(moduleInstance, &st, vh_emlrtRSI, a, gradNew,
                               &sigma, &idxl);
            }

            if (c_norm(Hg) < 0.5 * sigma) {
              st.site = &gg_emlrtRSI;
              b_eml_find(moduleInstance, &st, activeSet, ii);
              b_i = a->size[0];
              a->size[0] = ii->size[0];
              emxEnsureCapacity_real_T1(a, b_i);
              loop_ub = ii->size[0];
              for (b_i = 0; b_i < loop_ub; b_i++) {
                a->data[b_i] = (real_T)ii->data[b_i];
              }

              b_i = a->size[0];
              emlrtDynamicBoundsCheckR2012b(idxl, 1, b_i, &vb_emlrtBCI,
                cgxertPrepareEmlrtTLS(moduleInstance->S, (emlrtConstCTX)sp,
                moduleInstance->sysIdx, 6));
              b_i = activeSet->size[0];
              i1 = (int32_T)a->data[idxl - 1];
              activeSet->data[emlrtDynamicBoundsCheckR2012b(i1, 1, b_i,
                &ac_emlrtBCI, cgxertPrepareEmlrtTLS(moduleInstance->S,
                (emlrtConstCTX)sp, moduleInstance->sysIdx, 6)) - 1] = false;
              c_obj = activeSet->size[0] - 1;
              trueCount = 0;
              for (b_obj = 0; b_obj <= c_obj; b_obj++) {
                if (activeSet->data[b_obj]) {
                  trueCount++;
                }
              }

              b_i = r3->size[0];
              r3->size[0] = trueCount;
              emxEnsureCapacity_int32_T(r3, b_i);
              trueCount = 0;
              for (b_obj = 0; b_obj <= c_obj; b_obj++) {
                if (activeSet->data[b_obj]) {
                  r3->data[trueCount] = b_obj;
                  trueCount++;
                }
              }

              b_obj = obj->ConstraintMatrix->size[1];
              b_i = A->size[0] * A->size[1];
              A->size[0] = obj->ConstraintMatrix->size[0];
              A->size[1] = r3->size[0];
              emxEnsureCapacity_real_T(A, b_i);
              loop_ub = r3->size[0];
              for (b_i = 0; b_i < loop_ub; b_i++) {
                trueCount = obj->ConstraintMatrix->size[0];
                for (i1 = 0; i1 < trueCount; i1++) {
                  i2 = r3->data[b_i];
                  A->data[i1 + A->size[0] * b_i] = obj->ConstraintMatrix->
                    data[i1 + obj->ConstraintMatrix->size[0] *
                    emlrtDynamicBoundsCheckR2012b(i2, 0, b_obj - 1, &cc_emlrtBCI,
                    cgxertPrepareEmlrtTLS(moduleInstance->S, (emlrtConstCTX)sp,
                    moduleInstance->sysIdx, 6))];
                }
              }

              st.site = &th_emlrtRSI;
              cb_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
              cb_blkSrcLoc.blkIdx = 6;
              g_dynamic_size_checks(moduleInstance, &st, A, A, A->size[0],
                                    A->size[0], &cb_blkSrcLoc);
              st.site = &sh_emlrtRSI;
              d_mtimes(A, A, y);
              b_i = c_A->size[0] * c_A->size[1];
              c_A->size[0] = A->size[1];
              c_A->size[1] = A->size[0];
              emxEnsureCapacity_real_T(c_A, b_i);
              loop_ub = A->size[0];
              for (b_i = 0; b_i < loop_ub; b_i++) {
                trueCount = A->size[1];
                for (i1 = 0; i1 < trueCount; i1++) {
                  c_A->data[i1 + c_A->size[0] * b_i] = A->data[b_i + A->size[0] *
                    i1];
                }
              }

              st.site = &fh_emlrtRSI;
              fb_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
              fb_blkSrcLoc.blkIdx = 6;
              mldivide(moduleInstance, &st, y, c_A, b_b, &fb_blkSrcLoc);
              st.site = &th_emlrtRSI;
              gb_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
              gb_blkSrcLoc.blkIdx = 6;
              g_dynamic_size_checks(moduleInstance, &st, A, b_b, A->size[1],
                                    b_b->size[0], &gb_blkSrcLoc);
              st.site = &sh_emlrtRSI;
              f_mtimes(A, b_b, B);
              eye(V);
              if ((B->size[0] == 6) && (B->size[1] == 6)) {
                for (b_i = 0; b_i < 36; b_i++) {
                  V[b_i] -= B->data[b_i];
                }
              } else {
                b_minus(V, B);
              }

              b_obj = obj->ConstraintMatrix->size[0];
              trueCount = (int32_T)a->data[idxl - 1];
              c_obj = obj->ConstraintMatrix->size[1];
              trueCount = emlrtDynamicBoundsCheckR2012b(trueCount, 1, c_obj,
                &wb_emlrtBCI, cgxertPrepareEmlrtTLS(moduleInstance->S,
                (emlrtConstCTX)sp, blkSrc->sysIdx, blkSrc->blkIdx));
              b_i = g_obj->size[0];
              g_obj->size[0] = b_obj;
              emxEnsureCapacity_real_T1(g_obj, b_i);
              for (b_i = 0; b_i < b_obj; b_i++) {
                g_obj->data[b_i] = obj->ConstraintMatrix->data[b_i +
                  obj->ConstraintMatrix->size[0] * (trueCount - 1)];
              }

              b_i = a->size[0];
              a->size[0] = g_obj->size[0];
              emxEnsureCapacity_real_T1(a, b_i);
              loop_ub = g_obj->size[0];
              if (loop_ub - 1 >= 0) {
                memcpy(&a->data[0], &g_obj->data[0], (uint32_T)loop_ub * sizeof
                       (real_T));
              }

              st.site = &th_emlrtRSI;
              kb_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
              kb_blkSrcLoc.blkIdx = 6;
              b_dynamic_size_checks(moduleInstance, &st, a, a->size[0],
                                    &kb_blkSrcLoc);
              st.site = &th_emlrtRSI;
              lb_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
              lb_blkSrcLoc.blkIdx = 6;
              c_dynamic_size_checks(moduleInstance, &st, a, a->size[0],
                                    &lb_blkSrcLoc);
              for (b_i = 0; b_i < 6; b_i++) {
                sNew[b_i] = 0.0;
                for (i1 = 0; i1 < 6; i1++) {
                  sigma = sNew[b_i] + a->data[i1] * V[i1 + 6 * b_i];
                  sNew[b_i] = sigma;
                }
              }

              sigma = 0.0;
              for (b_i = 0; b_i < 6; b_i++) {
                sigma += sNew[b_i] * a->data[b_i];
              }

              sigma = 1.0 / sigma;
              b_i = y->size[0] * y->size[1];
              y->size[0] = a->size[0];
              y->size[1] = a->size[0];
              emxEnsureCapacity_real_T(y, b_i);
              loop_ub = a->size[0];
              for (b_i = 0; b_i < loop_ub; b_i++) {
                trueCount = a->size[0];
                for (i1 = 0; i1 < trueCount; i1++) {
                  y->data[i1 + y->size[0] * b_i] = a->data[i1] * a->data[b_i];
                }
              }

              st.site = &th_emlrtRSI;
              ob_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
              ob_blkSrcLoc.blkIdx = 6;
              d_dynamic_size_checks(moduleInstance, &st, y, y->size[0],
                                    &ob_blkSrcLoc);
              for (b_i = 0; b_i <= 34; b_i += 2) {
                r6 = _mm_loadu_pd(&V[b_i]);
                _mm_storeu_pd(&d_a[b_i], _mm_mul_pd(_mm_set1_pd(sigma), r6));
              }

              st.site = &sh_emlrtRSI;
              c_mtimes(d_a, y, a__2);
              st.site = &th_emlrtRSI;
              pb_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
              pb_blkSrcLoc.blkIdx = 6;
              e_dynamic_size_checks(moduleInstance, &st, a__2->size[1],
                                    &pb_blkSrcLoc);
              for (b_i = 0; b_i < 6; b_i++) {
                for (i1 = 0; i1 < 6; i1++) {
                  m = 0.0;
                  for (i2 = 0; i2 < 6; i2++) {
                    m += a__2->data[b_i + 6 * i2] * V[i2 + 6 * i1];
                  }

                  H[b_i + 6 * i1] += m;
                }
              }

              i++;
            } else {
              guard3 = true;
            }
          } else {
            guard3 = true;
          }

          if (guard3) {
            for (b_i = 0; b_i <= 4; b_i += 2) {
              r6 = _mm_loadu_pd(&Hg[b_i]);
              _mm_storeu_pd(&Hg[b_i], _mm_mul_pd(r6, _mm_set1_pd(-1.0)));
            }

            idxl = -1;
            if (obj->ConstraintsOn) {
              b_i = b_activeSet->size[0];
              b_activeSet->size[0] = activeSet->size[0];
              emxEnsureCapacity_boolean_T(b_activeSet, b_i);
              loop_ub = activeSet->size[0];
              for (b_i = 0; b_i < loop_ub; b_i++) {
                b_activeSet->data[b_i] = !activeSet->data[b_i];
              }

              st.site = &gh_emlrtRSI;
              if (any(moduleInstance, &st, b_activeSet)) {
                c_obj = activeSet->size[0] - 1;
                trueCount = 0;
                for (b_obj = 0; b_obj <= c_obj; b_obj++) {
                  if (!activeSet->data[b_obj]) {
                    trueCount++;
                  }
                }

                b_i = bIn->size[0];
                bIn->size[0] = trueCount;
                emxEnsureCapacity_real_T1(bIn, b_i);
                trueCount = 0;
                for (b_obj = 0; b_obj <= c_obj; b_obj++) {
                  if (!activeSet->data[b_obj]) {
                    b_i = obj->ConstraintBound->size[0] - 1;
                    bIn->data[trueCount] = obj->ConstraintBound->
                      data[emlrtDynamicBoundsCheckR2012b(b_obj, 0, b_i,
                      &bc_emlrtBCI, cgxertPrepareEmlrtTLS(moduleInstance->S,
                      (emlrtConstCTX)sp, moduleInstance->sysIdx, 6))];
                    trueCount++;
                  }
                }

                c_obj = activeSet->size[0] - 1;
                trueCount = 0;
                for (b_obj = 0; b_obj <= c_obj; b_obj++) {
                  if (!activeSet->data[b_obj]) {
                    trueCount++;
                  }
                }

                b_i = r2->size[0];
                r2->size[0] = trueCount;
                emxEnsureCapacity_int32_T(r2, b_i);
                trueCount = 0;
                for (b_obj = 0; b_obj <= c_obj; b_obj++) {
                  if (!activeSet->data[b_obj]) {
                    r2->data[trueCount] = b_obj;
                    trueCount++;
                  }
                }

                b_obj = obj->ConstraintMatrix->size[0];
                c_obj = obj->ConstraintMatrix->size[1] - 1;
                b_i = e_obj->size[0] * e_obj->size[1];
                e_obj->size[0] = b_obj;
                e_obj->size[1] = r2->size[0];
                emxEnsureCapacity_real_T(e_obj, b_i);
                loop_ub = r2->size[0];
                for (b_i = 0; b_i < loop_ub; b_i++) {
                  for (i1 = 0; i1 < b_obj; i1++) {
                    i2 = r2->data[b_i];
                    e_obj->data[i1 + e_obj->size[0] * b_i] =
                      obj->ConstraintMatrix->data[i1 + obj->
                      ConstraintMatrix->size[0] * emlrtDynamicBoundsCheckR2012b
                      (i2, 0, c_obj, &dc_emlrtBCI, cgxertPrepareEmlrtTLS
                       (moduleInstance->S, (emlrtConstCTX)sp,
                        moduleInstance->sysIdx, 6))];
                  }
                }

                b_i = B->size[0] * B->size[1];
                B->size[0] = e_obj->size[0];
                B->size[1] = e_obj->size[1];
                emxEnsureCapacity_real_T(B, b_i);
                loop_ub = e_obj->size[0] * e_obj->size[1];
                if (loop_ub - 1 >= 0) {
                  memcpy(&B->data[0], &e_obj->data[0], (uint32_T)loop_ub *
                         sizeof(real_T));
                }

                b_i = c_activeSet->size[0];
                c_activeSet->size[0] = activeSet->size[0];
                emxEnsureCapacity_boolean_T(c_activeSet, b_i);
                loop_ub = activeSet->size[0];
                for (b_i = 0; b_i < loop_ub; b_i++) {
                  c_activeSet->data[b_i] = !activeSet->data[b_i];
                }

                st.site = &gg_emlrtRSI;
                b_eml_find(moduleInstance, &st, c_activeSet, ii);
                b_i = inactiveConstraintIndices->size[0];
                inactiveConstraintIndices->size[0] = ii->size[0];
                emxEnsureCapacity_int32_T(inactiveConstraintIndices, b_i);
                loop_ub = ii->size[0];
                if (loop_ub - 1 >= 0) {
                  memcpy(&inactiveConstraintIndices->data[0], &ii->data[0],
                         (uint32_T)loop_ub * sizeof(int32_T));
                }

                st.site = &th_emlrtRSI;
                db_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
                db_blkSrcLoc.blkIdx = 6;
                dynamic_size_checks(moduleInstance, &st, B, B->size[0],
                                    &db_blkSrcLoc);
                st.site = &sh_emlrtRSI;
                b_mtimes(B, x, a);
                st.site = &th_emlrtRSI;
                eb_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
                eb_blkSrcLoc.blkIdx = 6;
                dynamic_size_checks(moduleInstance, &st, B, B->size[0],
                                    &eb_blkSrcLoc);
                st.site = &sh_emlrtRSI;
                b_mtimes(B, Hg, gradNew);
                if (bIn->size[0] == a->size[0]) {
                  b_i = bIn->size[0];
                  emxEnsureCapacity_real_T1(bIn, b_i);
                  loop_ub = bIn->size[0];
                  for (b_i = 0; b_i < loop_ub; b_i++) {
                    bIn->data[b_i] -= a->data[b_i];
                  }
                } else {
                  minus(bIn, a);
                }

                st.site = &uh_emlrtRSI;
                hb_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
                hb_blkSrcLoc.blkIdx = 6;
                assertCompatibleDims(moduleInstance, &st, bIn, gradNew,
                                     &hb_blkSrcLoc);
                if (bIn->size[0] == gradNew->size[0]) {
                  b_i = bIn->size[0];
                  emxEnsureCapacity_real_T1(bIn, b_i);
                  loop_ub = bIn->size[0];
                  for (b_i = 0; b_i < loop_ub; b_i++) {
                    bIn->data[b_i] /= gradNew->data[b_i];
                  }
                } else {
                  rdivide(bIn, gradNew);
                }

                b_i = b_bIn->size[0];
                b_bIn->size[0] = bIn->size[0];
                emxEnsureCapacity_boolean_T(b_bIn, b_i);
                loop_ub = bIn->size[0];
                for (b_i = 0; b_i < loop_ub; b_i++) {
                  b_bIn->data[b_i] = (bIn->data[b_i] > 0.0);
                }

                st.site = &gg_emlrtRSI;
                b_eml_find(moduleInstance, &st, b_bIn, ii);
                b_i = a->size[0];
                a->size[0] = ii->size[0];
                emxEnsureCapacity_real_T1(a, b_i);
                loop_ub = ii->size[0];
                for (b_i = 0; b_i < loop_ub; b_i++) {
                  a->data[b_i] = (real_T)ii->data[b_i];
                }

                if (a->size[0] != 0) {
                  c_obj = bIn->size[0] - 1;
                  trueCount = 0;
                  for (b_obj = 0; b_obj <= c_obj; b_obj++) {
                    if (bIn->data[b_obj] > 0.0) {
                      trueCount++;
                    }
                  }

                  b_i = r1->size[0];
                  r1->size[0] = trueCount;
                  emxEnsureCapacity_int32_T(r1, b_i);
                  trueCount = 0;
                  for (b_obj = 0; b_obj <= c_obj; b_obj++) {
                    if (bIn->data[b_obj] > 0.0) {
                      r1->data[trueCount] = b_obj;
                      trueCount++;
                    }
                  }

                  trueCount = bIn->size[0];
                  loop_ub = r1->size[0];
                  for (b_i = 0; b_i < loop_ub; b_i++) {
                    i1 = r1->data[b_i];
                    emlrtDynamicBoundsCheckR2012b(i1, 0, trueCount - 1,
                      &gc_emlrtBCI, cgxertPrepareEmlrtTLS(moduleInstance->S,
                      (emlrtConstCTX)sp, blkSrc->sysIdx, blkSrc->blkIdx));
                  }

                  b_i = c_bIn->size[0];
                  c_bIn->size[0] = r1->size[0];
                  emxEnsureCapacity_real_T1(c_bIn, b_i);
                  loop_ub = r1->size[0];
                  for (b_i = 0; b_i < loop_ub; b_i++) {
                    c_bIn->data[b_i] = bIn->data[r1->data[b_i]];
                  }

                  st.site = &wh_emlrtRSI;
                  minimum(moduleInstance, &st, c_bIn, &lambda, &idxl);
                  b_i = inactiveConstraintIndices->size[0];
                  i1 = a->size[0];
                  i1 = (int32_T)a->data[emlrtDynamicBoundsCheckR2012b(idxl, 1,
                    i1, &ic_emlrtBCI, cgxertPrepareEmlrtTLS(moduleInstance->S,
                    (emlrtConstCTX)sp, moduleInstance->sysIdx, 6)) - 1];
                  idxl = inactiveConstraintIndices->
                    data[emlrtDynamicBoundsCheckR2012b(i1, 1, b_i, &hc_emlrtBCI,
                    cgxertPrepareEmlrtTLS(moduleInstance->S, (emlrtConstCTX)sp,
                    moduleInstance->sysIdx, 6)) - 1];
                } else {
                  lambda = 0.0;
                }
              } else {
                lambda = 0.0;
              }
            } else {
              lambda = 0.0;
            }

            if (lambda > 0.0) {
              b_gamma = minimum2(1.0, lambda);
            } else {
              b_gamma = 1.0;
            }

            beta = obj->ArmijoRuleBeta;
            sigma = obj->ArmijoRuleSigma;
            for (b_i = 0; b_i <= 4; b_i += 2) {
              r6 = _mm_loadu_pd(&Hg[b_i]);
              r8 = _mm_loadu_pd(&x[b_i]);
              _mm_storeu_pd(&sNew[b_i], _mm_add_pd(r8, _mm_mul_pd(_mm_set1_pd
                (b_gamma), r6)));
            }

            st.site = &hh_emlrtRSI;
            IKHelpers_computeCost(moduleInstance, &st, sNew, obj->ExtraArgs,
                                  &b_costNew, V, a__2, &r7);
            costNew = b_costNew;
            obj->ExtraArgs = r7;
            m = 0.0;
            do {
              exitg1 = 0;
              b_i = b_y->size[0] * b_y->size[1];
              b_y->size[0] = 1;
              b_y->size[1] = grad->size[0];
              emxEnsureCapacity_real_T(b_y, b_i);
              loop_ub = grad->size[0];
              for (b_i = 0; b_i < loop_ub; b_i++) {
                b_y->data[b_i] = -sigma * grad->data[b_i];
              }

              st.site = &th_emlrtRSI;
              s_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
              s_blkSrcLoc.blkIdx = 6;
              i_dynamic_size_checks(moduleInstance, &st, b_y, b_y->size[1],
                                    &s_blkSrcLoc);
              d_y = 0.0;
              for (b_i = 0; b_i < 6; b_i++) {
                d_y += b_y->data[b_i] * (b_gamma * Hg[b_i]);
              }

              if (b_cost - costNew < d_y) {
                st.site = &ih_emlrtRSI;
                flag = (b_gamma < obj->StepTolerance);
                if (flag) {
                  *exitFlag =
                    robotics_core_internal_NLPSolverExitFlags_StepSizeBelowMinimum;
                  st.site = &jh_emlrtRSI;
                  *err = IKHelpers_evaluateSolution(moduleInstance, &st,
                    obj->ExtraArgs);
                  *iter = (real_T)i + 1.0;
                  exitg1 = 1;
                } else {
                  b_gamma *= beta;
                  m++;
                  for (b_i = 0; b_i <= 4; b_i += 2) {
                    r6 = _mm_loadu_pd(&Hg[b_i]);
                    r8 = _mm_loadu_pd(&x[b_i]);
                    _mm_storeu_pd(&sNew[b_i], _mm_add_pd(r8, _mm_mul_pd
                      (_mm_set1_pd(b_gamma), r6)));
                  }

                  st.site = &kh_emlrtRSI;
                  IKHelpers_computeCost(moduleInstance, &st, sNew,
                                        obj->ExtraArgs, &c_costNew, V, a__2, &r9);
                  costNew = c_costNew;
                  obj->ExtraArgs = r9;
                }
              } else {
                for (b_obj = 0; b_obj <= 4; b_obj += 2) {
                  r6 = _mm_loadu_pd(&Hg[b_obj]);
                  r8 = _mm_loadu_pd(&x[b_obj]);
                  _mm_storeu_pd(&xSol[b_obj], _mm_add_pd(r8, _mm_mul_pd
                    (_mm_set1_pd(b_gamma), r6)));
                }

                st.site = &lh_emlrtRSI;
                args = obj->ExtraArgs;
                b_i = c_args->size[0];
                c_args->size[0] = args->GradTemp->size[0];
                emxEnsureCapacity_real_T1(c_args, b_i);
                loop_ub = args->GradTemp->size[0];
                for (b_i = 0; b_i < loop_ub; b_i++) {
                  c_args->data[b_i] = args->GradTemp->data[b_i];
                }

                b_i = gradNew->size[0];
                gradNew->size[0] = c_args->size[0];
                emxEnsureCapacity_real_T1(gradNew, b_i);
                loop_ub = c_args->size[0];
                if (loop_ub - 1 >= 0) {
                  memcpy(&gradNew->data[0], &c_args->data[0], (uint32_T)loop_ub *
                         sizeof(real_T));
                }

                exitg1 = 2;
              }
            } while (exitg1 == 0);

            if (exitg1 == 1) {
              exitg2 = 1;
            } else if (m == 0.0) {
              m = 2.2204460492503131E-16;
              st.site = &mh_emlrtRSI;
              y_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
              y_blkSrcLoc.blkIdx = 6;
              b_sqrt(moduleInstance, &st, &m, &y_blkSrcLoc);
              if (muDoubleScalarAbs(b_gamma - lambda) < 1.4901161193847656E-8) {
                b_obj = obj->ConstraintMatrix->size[0];
                c_obj = obj->ConstraintMatrix->size[1];
                trueCount = emlrtDynamicBoundsCheckR2012b(idxl, 1, c_obj,
                  &xb_emlrtBCI, cgxertPrepareEmlrtTLS(moduleInstance->S,
                  (emlrtConstCTX)sp, moduleInstance->sysIdx, 6));
                b_i = f_obj->size[0];
                f_obj->size[0] = b_obj;
                emxEnsureCapacity_real_T1(f_obj, b_i);
                for (b_i = 0; b_i < b_obj; b_i++) {
                  f_obj->data[b_i] = obj->ConstraintMatrix->data[b_i +
                    obj->ConstraintMatrix->size[0] * (trueCount - 1)];
                }

                b_i = a->size[0];
                a->size[0] = f_obj->size[0];
                emxEnsureCapacity_real_T1(a, b_i);
                loop_ub = f_obj->size[0];
                if (loop_ub - 1 >= 0) {
                  memcpy(&a->data[0], &f_obj->data[0], (uint32_T)loop_ub *
                         sizeof(real_T));
                }

                b_i = activeSet->size[0];
                activeSet->data[emlrtDynamicBoundsCheckR2012b(idxl, 1, b_i,
                  &ec_emlrtBCI, cgxertPrepareEmlrtTLS(moduleInstance->S,
                  (emlrtConstCTX)sp, moduleInstance->sysIdx, 6)) - 1] = true;
                c_obj = activeSet->size[0] - 1;
                trueCount = 0;
                for (b_obj = 0; b_obj <= c_obj; b_obj++) {
                  if (activeSet->data[b_obj]) {
                    trueCount++;
                  }
                }

                b_i = r4->size[0];
                r4->size[0] = trueCount;
                emxEnsureCapacity_int32_T(r4, b_i);
                trueCount = 0;
                for (b_obj = 0; b_obj <= c_obj; b_obj++) {
                  if (activeSet->data[b_obj]) {
                    r4->data[trueCount] = b_obj;
                    trueCount++;
                  }
                }

                b_obj = obj->ConstraintMatrix->size[1];
                b_i = A->size[0] * A->size[1];
                A->size[0] = obj->ConstraintMatrix->size[0];
                A->size[1] = r4->size[0];
                emxEnsureCapacity_real_T(A, b_i);
                loop_ub = r4->size[0];
                for (b_i = 0; b_i < loop_ub; b_i++) {
                  trueCount = obj->ConstraintMatrix->size[0];
                  for (i1 = 0; i1 < trueCount; i1++) {
                    i2 = r4->data[b_i];
                    A->data[i1 + A->size[0] * b_i] = obj->ConstraintMatrix->
                      data[i1 + obj->ConstraintMatrix->size[0] *
                      emlrtDynamicBoundsCheckR2012b(i2, 0, b_obj - 1,
                      &fc_emlrtBCI, cgxertPrepareEmlrtTLS(moduleInstance->S,
                      (emlrtConstCTX)sp, moduleInstance->sysIdx, 6))];
                  }
                }

                st.site = &th_emlrtRSI;
                ib_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
                ib_blkSrcLoc.blkIdx = 6;
                b_dynamic_size_checks(moduleInstance, &st, a, a->size[0],
                                      &ib_blkSrcLoc);
                st.site = &th_emlrtRSI;
                jb_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
                jb_blkSrcLoc.blkIdx = 6;
                c_dynamic_size_checks(moduleInstance, &st, a, a->size[0],
                                      &jb_blkSrcLoc);
                b_i = y->size[0] * y->size[1];
                y->size[0] = a->size[0];
                y->size[1] = a->size[0];
                emxEnsureCapacity_real_T(y, b_i);
                loop_ub = a->size[0];
                for (b_i = 0; b_i < loop_ub; b_i++) {
                  trueCount = a->size[0];
                  for (i1 = 0; i1 < trueCount; i1++) {
                    y->data[i1 + y->size[0] * b_i] = a->data[i1] * a->data[b_i];
                  }
                }

                st.site = &th_emlrtRSI;
                mb_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
                mb_blkSrcLoc.blkIdx = 6;
                j_dynamic_size_checks(moduleInstance, &st, y, y->size[1],
                                      &mb_blkSrcLoc);
                st.site = &sh_emlrtRSI;
                g_mtimes(y, H, c_y);
                st.site = &th_emlrtRSI;
                nb_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
                nb_blkSrcLoc.blkIdx = 6;
                k_dynamic_size_checks(moduleInstance, &st, c_y->size[0],
                                      &nb_blkSrcLoc);
                sigma = 0.0;
                for (b_i = 0; b_i < 6; b_i++) {
                  sNew[b_i] = 0.0;
                  for (i1 = 0; i1 < 6; i1++) {
                    beta = sNew[b_i] + a->data[i1] * H[i1 + 6 * b_i];
                    sNew[b_i] = beta;
                  }

                  sigma += sNew[b_i] * a->data[b_i];
                }

                sigma = 1.0 / sigma;
                for (b_i = 0; b_i < 6; b_i++) {
                  for (i1 = 0; i1 < 6; i1++) {
                    d_a[b_i + 6 * i1] = 0.0;
                    for (i2 = 0; i2 < 6; i2++) {
                      d_a[b_i + 6 * i1] += H[b_i + 6 * i2] * c_y->data[i2 + 6 *
                        i1];
                    }
                  }
                }

                for (b_i = 0; b_i <= 34; b_i += 2) {
                  r6 = _mm_loadu_pd(&d_a[b_i]);
                  r8 = _mm_loadu_pd(&H[b_i]);
                  _mm_storeu_pd(&H[b_i], _mm_sub_pd(r8, _mm_mul_pd(_mm_set1_pd
                    (sigma), r6)));
                }

                guard1 = true;
              } else {
                guard2 = true;
              }
            } else {
              guard2 = true;
            }
          }

          if (guard2) {
            if (gradNew->size[0] == grad->size[0]) {
              b_i = grad->size[0];
              grad->size[0] = gradNew->size[0];
              emxEnsureCapacity_real_T1(grad, b_i);
              loop_ub = gradNew->size[0];
              for (b_i = 0; b_i < loop_ub; b_i++) {
                grad->data[b_i] = gradNew->data[b_i] - grad->data[b_i];
              }
            } else {
              d_minus(grad, gradNew);
            }

            st.site = &th_emlrtRSI;
            m_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
            m_blkSrcLoc.blkIdx = 6;
            l_dynamic_size_checks(moduleInstance, &st, grad, grad->size[0],
                                  &m_blkSrcLoc);
            b_i = b_y->size[0] * b_y->size[1];
            b_y->size[0] = 1;
            b_y->size[1] = grad->size[0];
            emxEnsureCapacity_real_T(b_y, b_i);
            loop_ub = grad->size[0];
            for (b_i = 0; b_i < loop_ub; b_i++) {
              b_y->data[b_i] = 0.2 * grad->data[b_i];
            }

            st.site = &th_emlrtRSI;
            q_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
            q_blkSrcLoc.blkIdx = 6;
            m_dynamic_size_checks(moduleInstance, &st, b_y, b_y->size[1],
                                  &q_blkSrcLoc);
            st.site = &th_emlrtRSI;
            r_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
            r_blkSrcLoc.blkIdx = 6;
            c_dynamic_size_checks(moduleInstance, &st, grad, grad->size[0],
                                  &r_blkSrcLoc);
            m = 0.0;
            for (b_i = 0; b_i < 6; b_i++) {
              m += Hg[b_i] * grad->data[b_i];
            }

            d_y = 0.0;
            for (b_i = 0; b_i < 6; b_i++) {
              sNew[b_i] = 0.0;
              for (i1 = 0; i1 < 6; i1++) {
                beta = sNew[b_i] + b_y->data[i1] * H[i1 + 6 * b_i];
                sNew[b_i] = beta;
              }

              d_y += sNew[b_i] * grad->data[b_i];
            }

            if (m < d_y) {
              b_i = b_y->size[0] * b_y->size[1];
              b_y->size[0] = 1;
              b_y->size[1] = grad->size[0];
              emxEnsureCapacity_real_T(b_y, b_i);
              loop_ub = grad->size[0];
              for (b_i = 0; b_i < loop_ub; b_i++) {
                b_y->data[b_i] = 0.8 * grad->data[b_i];
              }

              st.site = &th_emlrtRSI;
              u_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
              u_blkSrcLoc.blkIdx = 6;
              m_dynamic_size_checks(moduleInstance, &st, b_y, b_y->size[1],
                                    &u_blkSrcLoc);
              st.site = &th_emlrtRSI;
              w_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
              w_blkSrcLoc.blkIdx = 6;
              c_dynamic_size_checks(moduleInstance, &st, grad, grad->size[0],
                                    &w_blkSrcLoc);
              st.site = &th_emlrtRSI;
              x_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
              x_blkSrcLoc.blkIdx = 6;
              b_dynamic_size_checks(moduleInstance, &st, grad, grad->size[0],
                                    &x_blkSrcLoc);
              st.site = &th_emlrtRSI;
              ab_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
              ab_blkSrcLoc.blkIdx = 6;
              c_dynamic_size_checks(moduleInstance, &st, grad, grad->size[0],
                                    &ab_blkSrcLoc);
              st.site = &th_emlrtRSI;
              bb_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
              bb_blkSrcLoc.blkIdx = 6;
              l_dynamic_size_checks(moduleInstance, &st, grad, grad->size[0],
                                    &bb_blkSrcLoc);
              d_y = 0.0;
              for (b_i = 0; b_i < 6; b_i++) {
                sNew[b_i] = 0.0;
                for (i1 = 0; i1 < 6; i1++) {
                  beta = sNew[b_i] + b_y->data[i1] * H[i1 + 6 * b_i];
                  sNew[b_i] = beta;
                }

                d_y += sNew[b_i] * grad->data[b_i];
              }

              beta = 0.0;
              m = 0.0;
              for (b_i = 0; b_i < 6; b_i++) {
                sNew[b_i] = 0.0;
                for (i1 = 0; i1 < 6; i1++) {
                  sigma = sNew[b_i] + grad->data[i1] * H[i1 + 6 * b_i];
                  sNew[b_i] = sigma;
                }

                beta += sNew[b_i] * grad->data[b_i];
                m += Hg[b_i] * grad->data[b_i];
              }

              sigma = d_y / (beta - m);
            } else {
              sigma = 1.0;
            }

            st.site = &th_emlrtRSI;
            t_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
            t_blkSrcLoc.blkIdx = 6;
            f_dynamic_size_checks(moduleInstance, &st, grad, grad->size[0],
                                  &t_blkSrcLoc);
            for (b_i = 0; b_i < 6; b_i++) {
              m = 0.0;
              for (i1 = 0; i1 < 6; i1++) {
                m += (1.0 - sigma) * H[b_i + 6 * i1] * grad->data[i1];
              }

              sNew[b_i] = sigma * Hg[b_i] + m;
            }

            st.site = &th_emlrtRSI;
            v_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
            v_blkSrcLoc.blkIdx = 6;
            l_dynamic_size_checks(moduleInstance, &st, grad, grad->size[0],
                                  &v_blkSrcLoc);
            beta = 0.0;
            for (b_i = 0; b_i < 6; b_i++) {
              beta += sNew[b_i] * grad->data[b_i];
            }

            b_i = a__2->size[0] * a__2->size[1];
            a__2->size[0] = 6;
            a__2->size[1] = grad->size[0];
            emxEnsureCapacity_real_T(a__2, b_i);
            loop_ub = grad->size[0];
            for (b_i = 0; b_i < loop_ub; b_i++) {
              for (i1 = 0; i1 < 6; i1++) {
                m = sNew[i1] * grad->data[b_i];
                a__2->data[i1 + 6 * b_i] = m / beta;
              }
            }

            eye(V);
            if (a__2->size[1] == 6) {
              for (b_i = 0; b_i < 36; b_i++) {
                V[b_i] -= a__2->data[b_i];
              }
            } else {
              c_minus(V, a__2);
            }

            for (b_i = 0; b_i < 6; b_i++) {
              for (i1 = 0; i1 < 6; i1++) {
                d_a[b_i + 6 * i1] = 0.0;
                for (i2 = 0; i2 < 6; i2++) {
                  d_a[b_i + 6 * i1] += V[b_i + 6 * i2] * H[i2 + 6 * i1];
                }
              }
            }

            for (b_i = 0; b_i < 6; b_i++) {
              for (i1 = 0; i1 < 6; i1++) {
                b_V[b_i + 6 * i1] = 0.0;
                for (i2 = 0; i2 < 6; i2++) {
                  b_V[b_i + 6 * i1] += d_a[b_i + 6 * i2] * V[i1 + 6 * i2];
                }
              }
            }

            for (b_i = 0; b_i < 6; b_i++) {
              for (i1 = 0; i1 <= 4; i1 += 2) {
                r6 = _mm_loadu_pd(&sNew[i1]);
                _mm_storeu_pd(&b_sNew[i1 + 6 * b_i], _mm_div_pd(_mm_mul_pd(r6,
                  _mm_set1_pd(sNew[b_i])), _mm_set1_pd(beta)));
              }
            }

            for (b_i = 0; b_i <= 34; b_i += 2) {
              r6 = _mm_loadu_pd(&b_V[b_i]);
              r8 = _mm_loadu_pd(&b_sNew[b_i]);
              r6 = _mm_add_pd(r6, r8);
              _mm_storeu_pd(&d_a[b_i], _mm_add_pd(r6, _mm_loadu_pd(&e_y[b_i])));
              _mm_storeu_pd(&H[b_i], r6);
            }

            st.site = &nh_emlrtRSI;
            if (!isPositiveDefinite(d_a)) {
              *exitFlag =
                c_robotics_core_internal_NLPSolverExitFlags_HessianNotPositiveSe;
              st.site = &oh_emlrtRSI;
              *err = IKHelpers_evaluateSolution(moduleInstance, &st,
                obj->ExtraArgs);
              *iter = (real_T)i + 1.0;
              exitg2 = 1;
            } else {
              guard1 = true;
            }
          }

          if (guard1) {
            st.site = &ph_emlrtRSI;
            if (DampedBFGSwGradientProjection_searchDirectionInvalid
                (moduleInstance, &st, obj, xSol)) {
              for (b_obj = 0; b_obj < 6; b_obj++) {
                xSol[b_obj] = x[b_obj];
              }

              *exitFlag =
                robotics_core_internal_NLPSolverExitFlags_SearchDirectionInvalid;
              st.site = &qh_emlrtRSI;
              *err = IKHelpers_evaluateSolution(moduleInstance, &st,
                obj->ExtraArgs);
              *iter = (real_T)i + 1.0;
              exitg2 = 1;
            } else {
              for (b_obj = 0; b_obj < 6; b_obj++) {
                x[b_obj] = xSol[b_obj];
              }

              b_i = grad->size[0];
              grad->size[0] = gradNew->size[0];
              emxEnsureCapacity_real_T1(grad, b_i);
              loop_ub = gradNew->size[0];
              if (loop_ub - 1 >= 0) {
                memcpy(&grad->data[0], &gradNew->data[0], (uint32_T)loop_ub *
                       sizeof(real_T));
              }

              b_cost = costNew;
              i++;
            }
          }
        }
      }
    } else {
      *exitFlag =
        robotics_core_internal_NLPSolverExitFlags_IterationLimitExceeded;
      st.site = &rh_emlrtRSI;
      *err = IKHelpers_evaluateSolution(moduleInstance, &st, obj->ExtraArgs);
      *iter = obj->MaxNumIterationInternal;
      exitg2 = 1;
    }
  } while (exitg2 == 0);

  emxFree_real_T(&c_bIn);
  emxFree_boolean_T(&b_bIn);
  emxFree_real_T(&g_obj);
  emxFree_real_T(&f_obj);
  emxFree_real_T(&c_A);
  emxFree_real_T(&c_args);
  emxFree_boolean_T(&c_activeSet);
  emxFree_real_T(&e_obj);
  emxFree_real_T(&c_a);
  emxFree_boolean_T(&b_activeSet);
  emxFree_real_T(&b_A);
  emxFree_int32_T(&r4);
  emxFree_int32_T(&r3);
  emxFree_int32_T(&r2);
  emxFree_int32_T(&r1);
  emxFree_real_T(&c_y);
  emxFree_real_T(&b_y);
  emxFree_real_T(&b_b);
  emxFree_int32_T(&ii);
  emxFree_real_T(&y);
  emxFree_real_T(&gradNew);
  emxFree_int32_T(&inactiveConstraintIndices);
  emxFree_real_T(&bIn);
  emxFree_real_T(&B);
  emxFree_real_T(&a);
  emxFree_real_T(&A);
  emxFree_boolean_T(&activeSet);
  emxFree_real_T(&grad);
  emxFree_real_T(&a__2);
}

static void IKHelpers_computeCost(InstanceStruct_dnGfh1DX0a11xSfGnyzF5G
  *moduleInstance, const emlrtStack *sp, real_T x[6],
  robotics_manip_internal_IKExtraArgs *args, real_T *cost, real_T W[36],
  emxArray_real_T *Jac, robotics_manip_internal_IKExtraArgs **b_args)
{
  ptrdiff_t k_t;
  ptrdiff_t lda_t;
  ptrdiff_t ldb_t;
  ptrdiff_t ldc_t;
  ptrdiff_t m_t;
  ptrdiff_t n_t;
  cgxertBlkSrcLocInfo b_blkSrcLoc;
  cgxertBlkSrcLocInfo blkSrcLoc;
  emlrtStack st;
  emxArray_char_T *bodyName;
  emxArray_real_T *J;
  emxArray_real_T *b_y;
  robotics_manip_internal_RigidBodyTree_1 *treeInternal;
  real_T T_data[16];
  real_T Td[16];
  real_T e[6];
  real_T y[6];
  real_T alpha1;
  real_T beta1;
  int32_T T_size[2];
  int32_T i;
  int32_T loop_ub;
  char_T TRANSA1;
  char_T TRANSB1;
  st.prev = sp;
  st.tls = sp->tls;
  *b_args = args;
  treeInternal = (*b_args)->Robot;
  emxInit_char_T(&bodyName, 2);
  i = bodyName->size[0] * bodyName->size[1];
  bodyName->size[0] = 1;
  bodyName->size[1] = (*b_args)->BodyName->size[1];
  emxEnsureCapacity_char_T(bodyName, i);
  loop_ub = (*b_args)->BodyName->size[1];
  for (i = 0; i < loop_ub; i++) {
    bodyName->data[i] = (*b_args)->BodyName->data[i];
  }

  for (i = 0; i < 16; i++) {
    Td[i] = (*b_args)->Tform[i];
  }

  for (i = 0; i < 36; i++) {
    W[i] = (*b_args)->WeightMatrix[i];
  }

  emxInit_real_T(&J, 2);
  st.site = &xh_emlrtRSI;
  blkSrcLoc.sysIdx = moduleInstance->sysIdx;
  blkSrcLoc.blkIdx = 6;
  RigidBodyTree_efficientFKAndJacobianForIK(moduleInstance, &st, treeInternal, x,
    bodyName, T_data, T_size, J, &blkSrcLoc);
  emxFree_char_T(&bodyName);
  i = Jac->size[0] * Jac->size[1];
  Jac->size[0] = 6;
  Jac->size[1] = J->size[1];
  emxEnsureCapacity_real_T(Jac, i);
  loop_ub = 6 * J->size[1];
  for (i = 0; i < loop_ub; i++) {
    Jac->data[i] = -J->data[i];
  }

  emxFree_real_T(&J);
  st.site = &yh_emlrtRSI;
  b_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
  b_blkSrcLoc.blkIdx = 6;
  IKHelpers_poseError(moduleInstance, &st, Td, T_data, T_size, e, &b_blkSrcLoc);
  i = (*b_args)->ErrTemp->size[0];
  (*b_args)->ErrTemp->size[0] = 6;
  emxEnsureCapacity_real_T1((*b_args)->ErrTemp, i);
  for (i = 0; i < 6; i++) {
    (*b_args)->ErrTemp->data[i] = e[i];
  }

  for (i = 0; i < 6; i++) {
    y[i] = 0.0;
    for (loop_ub = 0; loop_ub < 6; loop_ub++) {
      alpha1 = y[i] + 0.5 * e[loop_ub] * W[loop_ub + 6 * i];
      y[i] = alpha1;
    }
  }

  alpha1 = 0.0;
  for (i = 0; i < 6; i++) {
    alpha1 += y[i] * e[i];
  }

  (*b_args)->CostTemp = alpha1;
  for (i = 0; i < 6; i++) {
    y[i] = 0.0;
    for (loop_ub = 0; loop_ub < 6; loop_ub++) {
      alpha1 = y[i] + e[loop_ub] * W[loop_ub + 6 * i];
      y[i] = alpha1;
    }
  }

  emxInit_real_T(&b_y, 2);
  st.site = &sh_emlrtRSI;
  if (Jac->size[1] == 0) {
    b_y->size[0] = 1;
    b_y->size[1] = 0;
  } else {
    TRANSB1 = 'N';
    TRANSA1 = 'N';
    alpha1 = 1.0;
    beta1 = 0.0;
    m_t = (ptrdiff_t)1;
    n_t = (ptrdiff_t)Jac->size[1];
    k_t = (ptrdiff_t)6;
    lda_t = (ptrdiff_t)1;
    ldb_t = (ptrdiff_t)6;
    ldc_t = (ptrdiff_t)1;
    i = b_y->size[0] * b_y->size[1];
    b_y->size[0] = 1;
    b_y->size[1] = Jac->size[1];
    emxEnsureCapacity_real_T(b_y, i);
    dgemm(&TRANSA1, &TRANSB1, &m_t, &n_t, &k_t, &alpha1, &y[0], &lda_t,
          &Jac->data[0], &ldb_t, &beta1, &b_y->data[0], &ldc_t);
  }

  i = (*b_args)->GradTemp->size[0];
  (*b_args)->GradTemp->size[0] = b_y->size[1];
  emxEnsureCapacity_real_T1((*b_args)->GradTemp, i);
  loop_ub = b_y->size[1];
  for (i = 0; i < loop_ub; i++) {
    (*b_args)->GradTemp->data[i] = b_y->data[i];
  }

  emxFree_real_T(&b_y);
  alpha1 = (*b_args)->CostTemp;
  *cost = alpha1;
}

static void RigidBodyTree_efficientFKAndJacobianForIK
  (InstanceStruct_dnGfh1DX0a11xSfGnyzF5G *moduleInstance, const emlrtStack *sp,
   robotics_manip_internal_RigidBodyTree_1 *obj, real_T qv[6], emxArray_char_T
   *body1Name, real_T T_data[], int32_T T_size[2], emxArray_real_T *Jac,
   cgxertBlkSrcLocInfo *blkSrc)
{
  static int8_T iv[4] = { 0, 0, 0, 1 };

  __m128d r;
  cgxertBlkSrcLocInfo b_blkSrcLoc;
  cgxertBlkSrcLocInfo blkSrcLoc;
  cgxertBlkSrcLocInfo c_blkSrcLoc;
  cgxertBlkSrcLocInfo d_blkSrcLoc;
  emlrtStack b_st;
  emlrtStack st;
  emxArray_char_T *body2Name;
  emxArray_real_T *JacSlice;
  emxArray_real_T *ancestorIndices1;
  emxArray_real_T *ancestorIndices2;
  emxArray_real_T *b_Jac;
  emxArray_real_T *kinematicPathIndices;
  emxArray_real_T *y;
  rigidBodyJoint *joint;
  robotics_manip_internal_RigidBody *body1;
  robotics_manip_internal_RigidBody *body2;
  real_T R[36];
  real_T T1[16];
  real_T T1j[16];
  real_T Tc2p[16];
  real_T Tj[16];
  real_T Tj1[16];
  real_T b_R[9];
  real_T c_R[9];
  real_T dv[9];
  real_T qv_data[6];
  real_T d_R[3];
  real_T qidx[2];
  real_T bid1;
  real_T bid2;
  int32_T iv1[2];
  int32_T qv_size[1];
  int32_T b_i;
  int32_T i;
  int32_T i1;
  int32_T i2;
  int32_T i3;
  int32_T jointSign;
  int32_T loop_ub;
  int32_T minPathLength;
  boolean_T exitg1;
  boolean_T nextBodyIsParent;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &fi_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emxInit_char_T(&body2Name, 2);
  i = body2Name->size[0] * body2Name->size[1];
  body2Name->size[0] = 1;
  body2Name->size[1] = obj->Base.NameInternal->size[1];
  emxEnsureCapacity_char_T(body2Name, i);
  loop_ub = obj->Base.NameInternal->size[1];
  for (i = 0; i < loop_ub; i++) {
    body2Name->data[i] = obj->Base.NameInternal->data[i];
  }

  st.site = &ei_emlrtRSI;
  bid1 = RigidBodyTree_validateInputBodyName(moduleInstance, &st, obj, body1Name);
  st.site = &di_emlrtRSI;
  bid2 = RigidBodyTree_validateInputBodyName(moduleInstance, &st, obj, body2Name);
  emxFree_char_T(&body2Name);
  if (bid1 == 0.0) {
    body1 = &obj->Base;
  } else {
    body1 = obj->Bodies[emlrtDynamicBoundsCheckR2012b((int32_T)bid1 - 1, 0, 6,
      &rc_emlrtBCI, cgxertPrepareEmlrtTLS(moduleInstance->S, (emlrtConstCTX)sp,
      moduleInstance->sysIdx, 6))];
  }

  if (bid2 == 0.0) {
    body2 = &obj->Base;
  } else {
    body2 = obj->Bodies[emlrtDynamicBoundsCheckR2012b((int32_T)bid2 - 1, 0, 6,
      &sc_emlrtBCI, cgxertPrepareEmlrtTLS(moduleInstance->S, (emlrtConstCTX)sp,
      moduleInstance->sysIdx, 6))];
  }

  st.site = &ci_emlrtRSI;
  emxInit_real_T(&ancestorIndices1, 2);
  b_st.site = &gi_emlrtRSI;
  blkSrcLoc.sysIdx = moduleInstance->sysIdx;
  blkSrcLoc.blkIdx = 6;
  RigidBodyTree_ancestorIndices(moduleInstance, &b_st, obj, body1,
    ancestorIndices1, &blkSrcLoc);
  emxInit_real_T(&ancestorIndices2, 2);
  b_st.site = &hi_emlrtRSI;
  b_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
  b_blkSrcLoc.blkIdx = 6;
  RigidBodyTree_ancestorIndices(moduleInstance, &b_st, obj, body2,
    ancestorIndices2, &b_blkSrcLoc);
  minPathLength = (int32_T)muDoubleScalarMin((real_T)ancestorIndices1->size[1],
    (real_T)ancestorIndices2->size[1]);
  b_i = 1;
  exitg1 = false;
  while ((!exitg1) && (b_i - 1 <= minPathLength - 2)) {
    i = ancestorIndices1->size[1];
    i1 = ancestorIndices1->size[1] - b_i;
    i2 = ancestorIndices2->size[1];
    i3 = ancestorIndices2->size[1] - b_i;
    if (ancestorIndices1->data[emlrtDynamicBoundsCheckR2012b(i1, 1, i,
         &tc_emlrtBCI, cgxertPrepareEmlrtTLS(moduleInstance->S, &st,
          moduleInstance->sysIdx, 6)) - 1] != ancestorIndices2->
        data[emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &uc_emlrtBCI,
         cgxertPrepareEmlrtTLS(moduleInstance->S, &st, moduleInstance->sysIdx, 6))
        - 1]) {
      minPathLength = b_i;
      exitg1 = true;
    } else {
      b_i++;
    }
  }

  i = ancestorIndices1->size[1];
  i1 = (ancestorIndices1->size[1] - minPathLength) + 1;
  bid1 = ancestorIndices1->data[emlrtDynamicBoundsCheckR2012b(i1, 1, i,
    &vc_emlrtBCI, cgxertPrepareEmlrtTLS(moduleInstance->S, &st,
    moduleInstance->sysIdx, 6)) - 1];
  i = ancestorIndices1->size[1] - minPathLength;
  if (i < 1) {
    loop_ub = 0;
  } else {
    i1 = ancestorIndices1->size[1];
    loop_ub = emlrtDynamicBoundsCheckR2012b(i, 1, i1, &pc_emlrtBCI,
      cgxertPrepareEmlrtTLS(moduleInstance->S, &st, moduleInstance->sysIdx, 6));
  }

  i = ancestorIndices2->size[1] - minPathLength;
  if (i < 1) {
    i = 1;
    i1 = 1;
    i2 = 0;
  } else {
    i1 = ancestorIndices2->size[1];
    i = emlrtDynamicBoundsCheckR2012b(i, 1, i1, &qc_emlrtBCI,
      cgxertPrepareEmlrtTLS(moduleInstance->S, &st, moduleInstance->sysIdx, 6));
    i1 = -1;
    i2 = 1;
  }

  emxInit_real_T(&kinematicPathIndices, 2);
  i3 = kinematicPathIndices->size[0] * kinematicPathIndices->size[1];
  kinematicPathIndices->size[0] = 1;
  b_st.site = &ci_emlrtRSI;
  c_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
  c_blkSrcLoc.blkIdx = 6;
  kinematicPathIndices->size[1] = (loop_ub + div_s32(moduleInstance, &b_st, i2 -
    i, i1, &c_blkSrcLoc)) + 2;
  emxEnsureCapacity_real_T(kinematicPathIndices, i3);
  if (loop_ub - 1 >= 0) {
    memcpy(&kinematicPathIndices->data[0], &ancestorIndices1->data[0], (uint32_T)
           loop_ub * sizeof(real_T));
  }

  emxFree_real_T(&ancestorIndices1);
  kinematicPathIndices->data[loop_ub] = bid1;
  b_st.site = &ci_emlrtRSI;
  d_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
  d_blkSrcLoc.blkIdx = 6;
  minPathLength = div_s32(moduleInstance, &b_st, i2 - i, i1, &d_blkSrcLoc);
  for (i2 = 0; i2 <= minPathLength; i2++) {
    kinematicPathIndices->data[(i2 + loop_ub) + 1] = ancestorIndices2->data[(i +
      i1 * i2) - 1];
  }

  emxFree_real_T(&ancestorIndices2);
  for (i = 0; i < 16; i++) {
    T1[i] = 0.0;
  }

  for (minPathLength = 0; minPathLength < 4; minPathLength++) {
    T1[minPathLength + (minPathLength << 2)] = 1.0;
  }

  i = Jac->size[0] * Jac->size[1];
  Jac->size[0] = 6;
  bid1 = emlrtNonNegativeCheckR2012b(obj->PositionNumber, &fc_emlrtDCI,
    cgxertPrepareEmlrtTLS(moduleInstance->S, (emlrtConstCTX)sp,
    moduleInstance->sysIdx, 6));
  Jac->size[1] = (int32_T)emlrtIntegerCheckR2012b(bid1, &ec_emlrtDCI,
    cgxertPrepareEmlrtTLS(moduleInstance->S, (emlrtConstCTX)sp,
    moduleInstance->sysIdx, 6));
  emxEnsureCapacity_real_T(Jac, i);
  bid1 = emlrtNonNegativeCheckR2012b(obj->PositionNumber, &hc_emlrtDCI,
    cgxertPrepareEmlrtTLS(moduleInstance->S, (emlrtConstCTX)sp,
    moduleInstance->sysIdx, 6));
  loop_ub = 6 * (int32_T)emlrtIntegerCheckR2012b(bid1, &gc_emlrtDCI,
    cgxertPrepareEmlrtTLS(moduleInstance->S, (emlrtConstCTX)sp,
    moduleInstance->sysIdx, 6));
  for (i = 0; i < loop_ub; i++) {
    Jac->data[i] = 0.0;
  }

  i = kinematicPathIndices->size[1] - 2;
  emxInit_real_T(&JacSlice, 2);
  emxInit_real_T(&y, 2);
  for (b_i = 0; b_i <= i; b_i++) {
    i1 = kinematicPathIndices->size[1];
    if (kinematicPathIndices->data[emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, i1,
         &wc_emlrtBCI, cgxertPrepareEmlrtTLS(moduleInstance->S, (emlrtConstCTX)
          sp, moduleInstance->sysIdx, 6)) - 1] != 0.0) {
      i1 = kinematicPathIndices->size[1];
      bid1 = kinematicPathIndices->data[emlrtDynamicBoundsCheckR2012b(b_i + 1, 1,
        i1, &ad_emlrtBCI, cgxertPrepareEmlrtTLS(moduleInstance->S,
        (emlrtConstCTX)sp, blkSrc->sysIdx, blkSrc->blkIdx)) - 1];
      i1 = (int32_T)emlrtIntegerCheckR2012b(bid1, &ic_emlrtDCI,
        cgxertPrepareEmlrtTLS(moduleInstance->S, (emlrtConstCTX)sp,
        blkSrc->sysIdx, blkSrc->blkIdx)) - 1;
      body1 = obj->Bodies[emlrtDynamicBoundsCheckR2012b(i1, 0, 6, &yc_emlrtBCI,
        cgxertPrepareEmlrtTLS(moduleInstance->S, (emlrtConstCTX)sp,
        moduleInstance->sysIdx, 6))];
    } else {
      body1 = &obj->Base;
    }

    i1 = kinematicPathIndices->size[1];
    if (kinematicPathIndices->data[emlrtDynamicBoundsCheckR2012b(b_i + 2, 1, i1,
         &xc_emlrtBCI, cgxertPrepareEmlrtTLS(moduleInstance->S, (emlrtConstCTX)
          sp, moduleInstance->sysIdx, 6)) - 1] != 0.0) {
      i1 = kinematicPathIndices->size[1];
      bid1 = kinematicPathIndices->data[emlrtDynamicBoundsCheckR2012b(b_i + 2, 1,
        i1, &cd_emlrtBCI, cgxertPrepareEmlrtTLS(moduleInstance->S,
        (emlrtConstCTX)sp, blkSrc->sysIdx, blkSrc->blkIdx)) - 1];
      i1 = (int32_T)emlrtIntegerCheckR2012b(bid1, &jc_emlrtDCI,
        cgxertPrepareEmlrtTLS(moduleInstance->S, (emlrtConstCTX)sp,
        blkSrc->sysIdx, blkSrc->blkIdx)) - 1;
      body2 = obj->Bodies[emlrtDynamicBoundsCheckR2012b(i1, 0, 6, &bd_emlrtBCI,
        cgxertPrepareEmlrtTLS(moduleInstance->S, (emlrtConstCTX)sp,
        moduleInstance->sysIdx, 6))];
    } else {
      body2 = &obj->Base;
    }

    nextBodyIsParent = (body2->Index == body1->ParentIndex);
    if (nextBodyIsParent) {
      body2 = body1;
      jointSign = 1;
    } else {
      jointSign = -1;
    }

    joint = body2->JointInternal;
    if (e_strcmp(joint->Type)) {
      st.site = &bi_emlrtRSI;
      rigidBodyJoint_transformBodyToParent(moduleInstance, &st, joint, Tc2p);
    } else {
      i1 = (int32_T)emlrtIntegerCheckR2012b(body2->Index, &dc_emlrtDCI,
        cgxertPrepareEmlrtTLS(moduleInstance->S, (emlrtConstCTX)sp,
        moduleInstance->sysIdx, 6));
      minPathLength = emlrtDynamicBoundsCheckR2012b(i1, 1, 7, &oc_emlrtBCI,
        cgxertPrepareEmlrtTLS(moduleInstance->S, (emlrtConstCTX)sp,
        blkSrc->sysIdx, blkSrc->blkIdx));
      for (i1 = 0; i1 < 2; i1++) {
        qidx[i1] = obj->PositionDoFMap[(minPathLength + 7 * i1) - 1];
      }

      if (qidx[0] > qidx[1]) {
        i1 = 0;
        i2 = 0;
      } else {
        i1 = (int32_T)emlrtIntegerCheckR2012b(qidx[0], &cc_emlrtDCI,
          cgxertPrepareEmlrtTLS(moduleInstance->S, (emlrtConstCTX)sp,
          moduleInstance->sysIdx, 6));
        i1 = emlrtDynamicBoundsCheckR2012b(i1, 1, 6, &nc_emlrtBCI,
          cgxertPrepareEmlrtTLS(moduleInstance->S, (emlrtConstCTX)sp,
          moduleInstance->sysIdx, 6)) - 1;
        i2 = (int32_T)emlrtIntegerCheckR2012b(qidx[1], &bc_emlrtDCI,
          cgxertPrepareEmlrtTLS(moduleInstance->S, (emlrtConstCTX)sp,
          moduleInstance->sysIdx, 6));
        i2 = emlrtDynamicBoundsCheckR2012b(i2, 1, 6, &mc_emlrtBCI,
          cgxertPrepareEmlrtTLS(moduleInstance->S, (emlrtConstCTX)sp,
          blkSrc->sysIdx, blkSrc->blkIdx));
      }

      qv_size[0] = i2 - i1;
      loop_ub = i2 - i1;
      for (i2 = 0; i2 < loop_ub; i2++) {
        qv_data[i2] = qv[i1 + i2];
      }

      st.site = &ai_emlrtRSI;
      b_rigidBodyJoint_transformBodyToParent(moduleInstance, &st, joint, qv_data,
        qv_size, Tc2p);
      i1 = (int32_T)emlrtIntegerCheckR2012b(body2->Index, &ac_emlrtDCI,
        cgxertPrepareEmlrtTLS(moduleInstance->S, (emlrtConstCTX)sp,
        moduleInstance->sysIdx, 6));
      minPathLength = emlrtDynamicBoundsCheckR2012b(i1, 1, 7, &lc_emlrtBCI,
        cgxertPrepareEmlrtTLS(moduleInstance->S, (emlrtConstCTX)sp,
        blkSrc->sysIdx, blkSrc->blkIdx));
      for (i1 = 0; i1 < 2; i1++) {
        qidx[i1] = obj->VelocityDoFMap[(minPathLength + 7 * i1) - 1];
      }

      if (nextBodyIsParent) {
        for (i1 = 0; i1 < 16; i1++) {
          Tj[i1] = joint->ChildToJointTransform[i1];
        }
      } else {
        for (i1 = 0; i1 < 16; i1++) {
          Tj1[i1] = joint->JointToParentTransform[i1];
        }

        for (i1 = 0; i1 < 3; i1++) {
          for (i2 = 0; i2 < 3; i2++) {
            b_R[i2 + 3 * i1] = Tj1[i1 + (i2 << 2)];
          }
        }

        for (i1 = 0; i1 <= 6; i1 += 2) {
          r = _mm_loadu_pd(&b_R[i1]);
          _mm_storeu_pd(&c_R[i1], _mm_mul_pd(r, _mm_set1_pd(-1.0)));
        }

        for (i1 = 8; i1 < 9; i1++) {
          c_R[8] = -b_R[8];
        }

        for (i1 = 0; i1 < 3; i1++) {
          d_R[i1] = 0.0;
          for (i2 = 0; i2 < 3; i2++) {
            Tj[i2 + (i1 << 2)] = b_R[i2 + 3 * i1];
            d_R[i1] += c_R[i1 + 3 * i2] * Tj1[i2 + 12];
          }

          Tj[i1 + 12] = d_R[i1];
        }

        for (i1 = 0; i1 < 4; i1++) {
          Tj[(i1 << 2) + 3] = (real_T)iv[i1];
        }
      }

      for (i1 = 0; i1 < 4; i1++) {
        for (i2 = 0; i2 < 4; i2++) {
          T1j[i1 + (i2 << 2)] = 0.0;
          for (i3 = 0; i3 < 4; i3++) {
            T1j[i1 + (i2 << 2)] += Tj[i1 + (i3 << 2)] * T1[i3 + (i2 << 2)];
          }
        }
      }

      for (i1 = 0; i1 < 3; i1++) {
        for (i2 = 0; i2 < 3; i2++) {
          b_R[i2 + 3 * i1] = T1j[i1 + (i2 << 2)];
        }
      }

      for (i1 = 0; i1 <= 6; i1 += 2) {
        r = _mm_loadu_pd(&b_R[i1]);
        _mm_storeu_pd(&c_R[i1], _mm_mul_pd(r, _mm_set1_pd(-1.0)));
      }

      for (i1 = 8; i1 < 9; i1++) {
        c_R[8] = -b_R[8];
      }

      for (i1 = 0; i1 < 3; i1++) {
        d_R[i1] = 0.0;
        for (i2 = 0; i2 < 3; i2++) {
          Tj1[i2 + (i1 << 2)] = b_R[i2 + 3 * i1];
          d_R[i1] += c_R[i1 + 3 * i2] * T1j[i2 + 12];
        }

        Tj1[i1 + 12] = d_R[i1];
      }

      for (i1 = 0; i1 < 4; i1++) {
        Tj1[(i1 << 2) + 3] = (real_T)iv[i1];
      }

      for (i1 = 0; i1 < 3; i1++) {
        for (i2 = 0; i2 < 3; i2++) {
          b_R[i2 + 3 * i1] = Tj1[i2 + (i1 << 2)];
        }
      }

      i1 = JacSlice->size[0] * JacSlice->size[1];
      JacSlice->size[0] = 6;
      JacSlice->size[1] = joint->MotionSubspace->size[1];
      emxEnsureCapacity_real_T(JacSlice, i1);
      loop_ub = 6 * joint->MotionSubspace->size[1];
      for (i1 = 0; i1 < loop_ub; i1++) {
        JacSlice->data[i1] = joint->MotionSubspace->data[i1];
      }

      c_R[0] = 0.0;
      c_R[3] = -Tj1[14];
      c_R[6] = Tj1[13];
      c_R[1] = Tj1[14];
      c_R[4] = 0.0;
      c_R[7] = -Tj1[12];
      c_R[2] = -Tj1[13];
      c_R[5] = Tj1[12];
      c_R[8] = 0.0;
      for (i1 = 0; i1 < 3; i1++) {
        for (i2 = 0; i2 < 3; i2++) {
          dv[i1 + 3 * i2] = 0.0;
          for (i3 = 0; i3 < 3; i3++) {
            dv[i1 + 3 * i2] += c_R[i1 + 3 * i3] * b_R[i3 + 3 * i2];
          }

          R[i2 + 6 * i1] = b_R[i2 + 3 * i1];
          R[i2 + 6 * (i1 + 3)] = 0.0;
        }
      }

      for (i1 = 0; i1 < 3; i1++) {
        for (i2 = 0; i2 < 3; i2++) {
          R[(i2 + 6 * i1) + 3] = dv[i2 + 3 * i1];
          R[(i2 + 6 * (i1 + 3)) + 3] = b_R[i2 + 3 * i1];
        }
      }

      st.site = &sh_emlrtRSI;
      mtimes(R, JacSlice, y);
      i1 = JacSlice->size[0] * JacSlice->size[1];
      JacSlice->size[0] = 6;
      JacSlice->size[1] = y->size[1];
      emxEnsureCapacity_real_T(JacSlice, i1);
      loop_ub = 6 * y->size[1];
      for (i1 = 0; i1 < loop_ub; i1++) {
        JacSlice->data[i1] = y->data[i1] * (real_T)jointSign;
      }

      if (qidx[0] > qidx[1]) {
        i1 = 0;
        i2 = 0;
      } else {
        i1 = Jac->size[1];
        i2 = (int32_T)emlrtIntegerCheckR2012b(qidx[0], &yb_emlrtDCI,
          cgxertPrepareEmlrtTLS(moduleInstance->S, (emlrtConstCTX)sp,
          moduleInstance->sysIdx, 6));
        i1 = emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &kc_emlrtBCI,
          cgxertPrepareEmlrtTLS(moduleInstance->S, (emlrtConstCTX)sp,
          moduleInstance->sysIdx, 6)) - 1;
        i2 = Jac->size[1];
        i3 = (int32_T)emlrtIntegerCheckR2012b(qidx[1], &xb_emlrtDCI,
          cgxertPrepareEmlrtTLS(moduleInstance->S, (emlrtConstCTX)sp,
          moduleInstance->sysIdx, 6));
        i2 = emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &jc_emlrtBCI,
          cgxertPrepareEmlrtTLS(moduleInstance->S, (emlrtConstCTX)sp,
          blkSrc->sysIdx, blkSrc->blkIdx));
      }

      iv1[0] = 6;
      iv1[1] = i2 - i1;
      emlrtSubAssignSizeCheckR2012b(&iv1[0], 2, &(*(int32_T (*)[2])
        JacSlice->size)[0], 2, &j_emlrtECI, cgxertPrepareEmlrtTLS
        (moduleInstance->S, (void *)sp, blkSrc->sysIdx, blkSrc->blkIdx));
      loop_ub = JacSlice->size[1];
      for (i2 = 0; i2 < loop_ub; i2++) {
        for (i3 = 0; i3 < 6; i3++) {
          Jac->data[i3 + 6 * (i1 + i2)] = JacSlice->data[i3 + 6 * i2];
        }
      }
    }

    if (nextBodyIsParent) {
      for (i1 = 0; i1 < 4; i1++) {
        for (i2 = 0; i2 < 4; i2++) {
          Tj1[i1 + (i2 << 2)] = 0.0;
          for (i3 = 0; i3 < 4; i3++) {
            Tj1[i1 + (i2 << 2)] += Tc2p[i1 + (i3 << 2)] * T1[i3 + (i2 << 2)];
          }
        }
      }

      memcpy(&T1[0], &Tj1[0], sizeof(real_T) << 4);
    } else {
      for (i1 = 0; i1 < 3; i1++) {
        for (i2 = 0; i2 < 3; i2++) {
          b_R[i2 + 3 * i1] = Tc2p[i1 + (i2 << 2)];
        }
      }

      for (i1 = 0; i1 <= 6; i1 += 2) {
        r = _mm_loadu_pd(&b_R[i1]);
        _mm_storeu_pd(&c_R[i1], _mm_mul_pd(r, _mm_set1_pd(-1.0)));
      }

      for (i1 = 8; i1 < 9; i1++) {
        c_R[8] = -b_R[8];
      }

      for (i1 = 0; i1 < 3; i1++) {
        d_R[i1] = 0.0;
        for (i2 = 0; i2 < 3; i2++) {
          Tj[i2 + (i1 << 2)] = b_R[i2 + 3 * i1];
          d_R[i1] += c_R[i1 + 3 * i2] * Tc2p[i2 + 12];
        }

        Tj[i1 + 12] = d_R[i1];
      }

      for (i1 = 0; i1 < 4; i1++) {
        Tj[(i1 << 2) + 3] = (real_T)iv[i1];
      }

      for (i1 = 0; i1 < 4; i1++) {
        for (i2 = 0; i2 < 4; i2++) {
          Tj1[i1 + (i2 << 2)] = 0.0;
          for (i3 = 0; i3 < 4; i3++) {
            Tj1[i1 + (i2 << 2)] += Tj[i1 + (i3 << 2)] * T1[i3 + (i2 << 2)];
          }
        }
      }

      memcpy(&T1[0], &Tj1[0], sizeof(real_T) << 4);
    }
  }

  emxFree_real_T(&y);
  emxFree_real_T(&JacSlice);
  emxFree_real_T(&kinematicPathIndices);
  for (i = 0; i < 3; i++) {
    for (i1 = 0; i1 < 3; i1++) {
      R[i1 + 6 * i] = T1[i1 + (i << 2)];
      R[i1 + 6 * (i + 3)] = 0.0;
      R[(i1 + 6 * i) + 3] = 0.0;
      R[(i1 + 6 * (i + 3)) + 3] = T1[i1 + (i << 2)];
    }
  }

  emxInit_real_T(&b_Jac, 2);
  i = b_Jac->size[0] * b_Jac->size[1];
  b_Jac->size[0] = 6;
  b_Jac->size[1] = Jac->size[1];
  emxEnsureCapacity_real_T(b_Jac, i);
  loop_ub = Jac->size[1];
  for (i = 0; i < loop_ub; i++) {
    for (i1 = 0; i1 < 6; i1++) {
      b_Jac->data[i1 + 6 * i] = Jac->data[i1 + 6 * i];
    }
  }

  st.site = &sh_emlrtRSI;
  mtimes(R, b_Jac, Jac);
  emxFree_real_T(&b_Jac);
  T_size[0] = 4;
  T_size[1] = 4;
  memcpy(&T_data[0], &T1[0], sizeof(real_T) << 4);
}

static void RigidBodyTree_ancestorIndices(InstanceStruct_dnGfh1DX0a11xSfGnyzF5G *
  moduleInstance, const emlrtStack *sp, robotics_manip_internal_RigidBodyTree_1 *
  obj, robotics_manip_internal_RigidBody *body, emxArray_real_T *indices,
  cgxertBlkSrcLocInfo *blkSrc)
{
  real_T d;
  int32_T i;
  int32_T loop_ub;
  uint32_T b_i;
  i = indices->size[0] * indices->size[1];
  indices->size[0] = 1;
  d = obj->NumBodies + 1.0;
  d = emlrtNonNegativeCheckR2012b(d, &lc_emlrtDCI, cgxertPrepareEmlrtTLS
    (moduleInstance->S, (emlrtConstCTX)sp, blkSrc->sysIdx, blkSrc->blkIdx));
  indices->size[1] = (int32_T)emlrtIntegerCheckR2012b(d, &kc_emlrtDCI,
    cgxertPrepareEmlrtTLS(moduleInstance->S, (emlrtConstCTX)sp,
    moduleInstance->sysIdx, 6));
  emxEnsureCapacity_real_T(indices, i);
  d = obj->NumBodies + 1.0;
  d = emlrtNonNegativeCheckR2012b(d, &nc_emlrtDCI, cgxertPrepareEmlrtTLS
    (moduleInstance->S, (emlrtConstCTX)sp, moduleInstance->sysIdx, 6));
  loop_ub = (int32_T)emlrtIntegerCheckR2012b(d, &mc_emlrtDCI,
    cgxertPrepareEmlrtTLS(moduleInstance->S, (emlrtConstCTX)sp,
    moduleInstance->sysIdx, 6));
  for (i = 0; i < loop_ub; i++) {
    indices->data[i] = 0.0;
  }

  b_i = 2U;
  i = indices->size[1];
  emlrtDynamicBoundsCheckR2012b(1, 1, i, &fd_emlrtBCI, cgxertPrepareEmlrtTLS
    (moduleInstance->S, (emlrtConstCTX)sp, moduleInstance->sysIdx, 6));
  indices->data[0] = body->Index;
  while (body->ParentIndex > 0.0) {
    i = (int32_T)emlrtIntegerCheckR2012b(body->ParentIndex, &oc_emlrtDCI,
      cgxertPrepareEmlrtTLS(moduleInstance->S, (emlrtConstCTX)sp,
      moduleInstance->sysIdx, 6)) - 1;
    body = obj->Bodies[emlrtDynamicBoundsCheckR2012b(i, 0, 6, &gd_emlrtBCI,
      cgxertPrepareEmlrtTLS(moduleInstance->S, (emlrtConstCTX)sp,
      moduleInstance->sysIdx, 6))];
    i = indices->size[1];
    indices->data[emlrtDynamicBoundsCheckR2012b((int32_T)b_i, 1, i, &id_emlrtBCI,
      cgxertPrepareEmlrtTLS(moduleInstance->S, (emlrtConstCTX)sp,
      moduleInstance->sysIdx, 6)) - 1] = body->Index;
    b_i++;
  }

  if (body->Index > 0.0) {
    i = indices->size[1];
    indices->data[emlrtDynamicBoundsCheckR2012b((int32_T)b_i, 1, i, &hd_emlrtBCI,
      cgxertPrepareEmlrtTLS(moduleInstance->S, (emlrtConstCTX)sp,
      moduleInstance->sysIdx, 6)) - 1] = body->ParentIndex;
    b_i++;
  }

  i = indices->size[1];
  emlrtDynamicBoundsCheckR2012b(1, 1, i, &ed_emlrtBCI, cgxertPrepareEmlrtTLS
    (moduleInstance->S, (emlrtConstCTX)sp, moduleInstance->sysIdx, 6));
  i = indices->size[1];
  emlrtDynamicBoundsCheckR2012b((int32_T)((real_T)b_i - 1.0), 1, i, &dd_emlrtBCI,
    cgxertPrepareEmlrtTLS(moduleInstance->S, (emlrtConstCTX)sp, blkSrc->sysIdx,
    blkSrc->blkIdx));
  i = indices->size[0] * indices->size[1];
  indices->size[1] = (int32_T)(b_i - 1U);
  emxEnsureCapacity_real_T(indices, i);
}

static void rigidBodyJoint_transformBodyToParent
  (InstanceStruct_dnGfh1DX0a11xSfGnyzF5G *moduleInstance, const emlrtStack *sp,
   rigidBodyJoint *obj, real_T T[16])
{
  static int8_T iv[4] = { 0, 0, 0, 1 };

  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack st;
  emxArray_char_T *switch_expression;
  real_T a[16];
  real_T b_a[16];
  real_T b_b[16];
  real_T c_b[16];
  real_T dv[9];
  real_T dv1[9];
  real_T b_v[3];
  real_T v[3];
  int32_T i;
  int32_T i1;
  int32_T loop_ub;
  int8_T b_I[9];
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  for (i = 0; i < 16; i++) {
    a[i] = obj->JointToParentTransform[i];
  }

  st.site = &ii_emlrtRSI;
  emxInit_char_T(&switch_expression, 2);
  i = switch_expression->size[0] * switch_expression->size[1];
  switch_expression->size[0] = 1;
  switch_expression->size[1] = obj->Type->size[1];
  emxEnsureCapacity_char_T(switch_expression, i);
  loop_ub = obj->Type->size[1];
  for (i = 0; i < loop_ub; i++) {
    switch_expression->data[i] = obj->Type->data[i];
  }

  if (e_strcmp(switch_expression)) {
    loop_ub = 0;
  } else if (b_strcmp(switch_expression)) {
    loop_ub = 1;
  } else {
    loop_ub = -1;
  }

  emxFree_char_T(&switch_expression);
  switch (loop_ub) {
   case 0:
    for (i = 0; i < 16; i++) {
      b_b[i] = 0.0;
    }

    for (loop_ub = 0; loop_ub < 4; loop_ub++) {
      b_b[loop_ub + (loop_ub << 2)] = 1.0;
    }
    break;

   case 1:
    b_st.site = &ji_emlrtRSI;
    if (b_strcmp(obj->Type) || c_strcmp(obj->Type)) {
      for (i = 0; i < 3; i++) {
        v[i] = obj->JointAxisInternal[i];
      }
    } else {
      for (i = 0; i < 3; i++) {
        v[i] = rtNaN;
      }
    }

    b_st.site = &ki_emlrtRSI;
    c_st.site = &mi_emlrtRSI;
    d_st.site = &ni_emlrtRSI;
    e_st.site = &oi_emlrtRSI;
    normalizeRows(moduleInstance, &e_st, v, b_v);
    for (i = 0; i < 16; i++) {
      b_b[i] = 0.0;
    }

    cat(b_v[0] * b_v[0] * 0.0 + 1.0, b_v[0] * b_v[1] * 0.0 - b_v[2] * 0.0, b_v[0]
        * b_v[2] * 0.0 + b_v[1] * 0.0, b_v[0] * b_v[1] * 0.0 + b_v[2] * 0.0,
        b_v[1] * b_v[1] * 0.0 + 1.0, b_v[1] * b_v[2] * 0.0 - b_v[0] * 0.0, b_v[0]
        * b_v[2] * 0.0 - b_v[1] * 0.0, b_v[1] * b_v[2] * 0.0 + b_v[0] * 0.0,
        b_v[2] * b_v[2] * 0.0 + 1.0, dv1);
    permute(dv1, dv);
    for (i = 0; i < 3; i++) {
      for (loop_ub = 0; loop_ub < 3; loop_ub++) {
        b_b[loop_ub + (i << 2)] = dv[loop_ub + 3 * i];
      }
    }

    b_b[15] = 1.0;
    break;

   default:
    b_st.site = &li_emlrtRSI;
    if (b_strcmp(obj->Type) || c_strcmp(obj->Type)) {
      for (i = 0; i < 3; i++) {
        v[i] = obj->JointAxisInternal[i];
      }
    } else {
      for (i = 0; i < 3; i++) {
        v[i] = rtNaN;
      }
    }

    for (i = 0; i < 9; i++) {
      b_I[i] = 0;
    }

    for (loop_ub = 0; loop_ub < 3; loop_ub++) {
      b_I[loop_ub + 3 * loop_ub] = 1;
    }

    for (i = 0; i < 3; i++) {
      for (loop_ub = 0; loop_ub < 3; loop_ub++) {
        b_b[loop_ub + (i << 2)] = (real_T)b_I[loop_ub + 3 * i];
      }

      b_b[i + 12] = v[i] * 0.0;
    }

    for (i = 0; i < 4; i++) {
      b_b[(i << 2) + 3] = (real_T)iv[i];
    }
    break;
  }

  for (i = 0; i < 16; i++) {
    c_b[i] = obj->ChildToJointTransform[i];
  }

  for (i = 0; i < 4; i++) {
    for (loop_ub = 0; loop_ub < 4; loop_ub++) {
      b_a[i + (loop_ub << 2)] = 0.0;
      for (i1 = 0; i1 < 4; i1++) {
        b_a[i + (loop_ub << 2)] += a[i + (i1 << 2)] * b_b[i1 + (loop_ub << 2)];
      }
    }

    for (loop_ub = 0; loop_ub < 4; loop_ub++) {
      T[i + (loop_ub << 2)] = 0.0;
      for (i1 = 0; i1 < 4; i1++) {
        T[i + (loop_ub << 2)] += b_a[i + (i1 << 2)] * c_b[i1 + (loop_ub << 2)];
      }
    }
  }
}

static void normalizeRows(InstanceStruct_dnGfh1DX0a11xSfGnyzF5G *moduleInstance,
  const emlrtStack *sp, real_T matrix[3], real_T normRowMatrix[3])
{
  __m128d r;
  cgxertBlkSrcLocInfo blkSrcLoc;
  emlrtStack st;
  real_T y[3];
  real_T b_matrix;
  int32_T k;
  st.prev = sp;
  st.tls = sp->tls;
  for (k = 0; k <= 0; k += 2) {
    r = _mm_loadu_pd(&matrix[0]);
    _mm_storeu_pd(&y[0], _mm_mul_pd(r, r));
  }

  for (k = 2; k < 3; k++) {
    b_matrix = matrix[2];
    y[2] = b_matrix * b_matrix;
  }

  b_matrix = sumColumnB(y);
  st.site = &pi_emlrtRSI;
  blkSrcLoc.sysIdx = moduleInstance->sysIdx;
  blkSrcLoc.blkIdx = 6;
  b_sqrt(moduleInstance, &st, &b_matrix, &blkSrcLoc);
  b_matrix = 1.0 / b_matrix;
  for (k = 0; k <= 0; k += 2) {
    r = _mm_loadu_pd(&matrix[0]);
    _mm_storeu_pd(&normRowMatrix[0], _mm_mul_pd(r, _mm_set1_pd(b_matrix)));
  }

  for (k = 2; k < 3; k++) {
    normRowMatrix[2] = matrix[2] * b_matrix;
  }
}

static real_T sumColumnB(real_T x[3])
{
  real_T y;
  int32_T k;
  y = x[0];
  for (k = 0; k < 2; k++) {
    y += x[k + 1];
  }

  return y;
}

static void cat(real_T varargin_1, real_T varargin_2, real_T varargin_3, real_T
                varargin_4, real_T varargin_5, real_T varargin_6, real_T
                varargin_7, real_T varargin_8, real_T varargin_9, real_T y[9])
{
  y[0] = varargin_1;
  y[1] = varargin_2;
  y[2] = varargin_3;
  y[3] = varargin_4;
  y[4] = varargin_5;
  y[5] = varargin_6;
  y[6] = varargin_7;
  y[7] = varargin_8;
  y[8] = varargin_9;
}

static void permute(real_T a[9], real_T b_b[9])
{
  int32_T b_k;
  int32_T k;
  for (k = 0; k < 3; k++) {
    for (b_k = 0; b_k < 3; b_k++) {
      b_b[k + 3 * b_k] = a[b_k + 3 * k];
    }
  }
}

static void b_rigidBodyJoint_transformBodyToParent
  (InstanceStruct_dnGfh1DX0a11xSfGnyzF5G *moduleInstance, const emlrtStack *sp,
   rigidBodyJoint *obj, real_T q_data[], int32_T q_size[1], real_T T[16])
{
  static const int32_T iv[2] = { 1, 39 };

  static const int32_T iv1[2] = { 1, 15 };

  static const int32_T iv2[2] = { 1, 45 };

  static const int32_T iv3[2] = { 1, 39 };

  static const int32_T iv5[2] = { 1, 15 };

  static const int32_T iv6[2] = { 1, 45 };

  static const int32_T iv7[2] = { 1, 35 };

  static const int32_T iv8[2] = { 1, 48 };

  static const int32_T iv9[2] = { 1, 5 };

  static char_T k_u[48] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'V', 'a', 'l', 'i', 'd', 'a', 't', 'e', 'a', 't', 't',
    'r', 'i', 'b', 'u', 't', 'e', 's', 'i', 'n', 'c', 'o', 'r', 'r', 'e', 'c',
    't', 'N', 'u', 'm', 'c', 'o', 'l', 's' };

  static char_T g_u[45] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'm', 't', 'i', 'm', 'e', 's', '_', 'n', 'o', 'D', 'y',
    'n', 'a', 'm', 'i', 'c', 'S', 'c', 'a', 'l', 'a', 'r', 'E', 'x', 'p', 'a',
    'n', 's', 'i', 'o', 'n' };

  static char_T e_u[39] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'c', 'a', 't',
    'e', 'n', 'a', 't', 'e', ':', 'm', 'a', 't', 'r', 'i', 'x', 'D', 'i', 'm',
    'e', 'n', 's', 'i', 'o', 'n', 'M', 'i', 's', 'm', 'a', 't', 'c', 'h' };

  static char_T i_u[35] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'a', 'x', 'a',
    'n', 'g', '2', 't', 'f', 'o', 'r', 'm', ':', 'i', 'n', 'c', 'o', 'r', 'r',
    'e', 'c', 't', 'N', 'u', 'm', 'c', 'o', 'l', 's' };

  static char_T f_u[15] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'i', 'n', 'n',
    'e', 'r', 'd', 'i', 'm' };

  static char_T m_u[5] = { 'a', 'x', 'a', 'n', 'g' };

  static int8_T iv4[4] = { 0, 0, 0, 1 };

  cgxertBlkSrcLocInfo b_blkSrcLoc;
  cgxertBlkSrcLocInfo blkSrcLoc;
  cgxertBlkSrcLocInfo c_blkSrcLoc;
  cgxertBlkSrcLocInfo d_blkSrcLoc;
  cgxertBlkSrcLocInfo e_blkSrcLoc;
  cgxertBlkSrcLocInfo f_blkSrcLoc;
  cgxertBlkSrcLocInfo g_blkSrcLoc;
  cgxertBlkSrcLocInfo h_blkSrcLoc;
  cgxertBlkSrcLocInfo i_blkSrcLoc;
  cgxertBlkSrcLocInfo j_blkSrcLoc;
  cgxertBlkSrcLocInfo k_blkSrcLoc;
  cgxertBlkSrcLocInfo l_blkSrcLoc;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack st;
  emxArray_char_T *switch_expression;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *d_y;
  const mxArray *e_y;
  const mxArray *f_y;
  const mxArray *g_y;
  const mxArray *h_y;
  const mxArray *i_y;
  const mxArray *j_y;
  const mxArray *m;
  const mxArray *y;
  real_T a[16];
  real_T b_a[16];
  real_T b_b[16];
  real_T c_b[16];
  real_T dv[9];
  real_T dv1[9];
  real_T result_data[4];
  real_T v[3];
  real_T cth;
  real_T sth;
  int32_T i;
  int32_T i1;
  int32_T loop_ub;
  char_T j_u[48];
  char_T d_u[45];
  char_T b_u[39];
  char_T h_u[35];
  char_T c_u[15];
  char_T l_u[5];
  int8_T b_I[9];
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  f_st.prev = &e_st;
  f_st.tls = e_st.tls;
  for (i = 0; i < 16; i++) {
    a[i] = obj->JointToParentTransform[i];
  }

  st.site = &ii_emlrtRSI;
  emxInit_char_T(&switch_expression, 2);
  i = switch_expression->size[0] * switch_expression->size[1];
  switch_expression->size[0] = 1;
  switch_expression->size[1] = obj->Type->size[1];
  emxEnsureCapacity_char_T(switch_expression, i);
  loop_ub = obj->Type->size[1];
  for (i = 0; i < loop_ub; i++) {
    switch_expression->data[i] = obj->Type->data[i];
  }

  if (e_strcmp(switch_expression)) {
    loop_ub = 0;
  } else if (b_strcmp(switch_expression)) {
    loop_ub = 1;
  } else {
    loop_ub = -1;
  }

  emxFree_char_T(&switch_expression);
  switch (loop_ub) {
   case 0:
    for (i = 0; i < 16; i++) {
      b_b[i] = 0.0;
    }

    for (loop_ub = 0; loop_ub < 4; loop_ub++) {
      b_b[loop_ub + (loop_ub << 2)] = 1.0;
    }
    break;

   case 1:
    b_st.site = &ji_emlrtRSI;
    if (b_strcmp(obj->Type) || c_strcmp(obj->Type)) {
      for (i = 0; i < 3; i++) {
        v[i] = obj->JointAxisInternal[i];
      }
    } else {
      for (i = 0; i < 3; i++) {
        v[i] = rtNaN;
      }
    }

    if ((q_size[0] == 1) || (q_size[0] == 0)) {
    } else {
      for (i = 0; i < 39; i++) {
        b_u[i] = e_u[i];
      }

      y = NULL;
      m = emlrtCreateCharArray(2, &iv[0]);
      emlrtInitCharArrayR2013a(cgxertPrepareEmlrtTLS(moduleInstance->S, &st,
        moduleInstance->sysIdx, 6), 39, m, &b_u[0]);
      emlrtAssign(&y, m);
      for (i = 0; i < 39; i++) {
        b_u[i] = e_u[i];
      }

      d_y = NULL;
      m = emlrtCreateCharArray(2, &iv3[0]);
      emlrtInitCharArrayR2013a(cgxertPrepareEmlrtTLS(moduleInstance->S, &st,
        moduleInstance->sysIdx, 6), 39, m, &b_u[0]);
      emlrtAssign(&d_y, m);
      b_st.site = &en_emlrtRSI;
      blkSrcLoc.sysIdx = moduleInstance->sysIdx;
      blkSrcLoc.blkIdx = 6;
      d_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
      d_blkSrcLoc.blkIdx = 6;
      g_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
      g_blkSrcLoc.blkIdx = 6;
      b_error(moduleInstance, &b_st, y, getString(moduleInstance, &b_st,
               b_message(moduleInstance, &b_st, d_y, &u_emlrtMCI, &g_blkSrcLoc),
               &u_emlrtMCI, &blkSrcLoc), &u_emlrtMCI, &d_blkSrcLoc);
    }

    if (q_size[0] != 0) {
      loop_ub = 1;
    } else {
      loop_ub = 0;
    }

    for (i = 0; i < 3; i++) {
      result_data[i] = v[i];
    }

    if (loop_ub - 1 >= 0) {
      memcpy(&result_data[3], &q_data[0], (uint32_T)loop_ub * sizeof(real_T));
    }

    b_st.site = &ki_emlrtRSI;
    c_st.site = &qi_emlrtRSI;
    d_st.site = &ri_emlrtRSI;
    e_st.site = &k_emlrtRSI;
    if (loop_ub + 3 != 4) {
      for (i = 0; i < 35; i++) {
        h_u[i] = i_u[i];
      }

      g_y = NULL;
      m = emlrtCreateCharArray(2, &iv7[0]);
      emlrtInitCharArrayR2013a(cgxertPrepareEmlrtTLS(moduleInstance->S, &e_st,
        moduleInstance->sysIdx, 6), 35, m, &h_u[0]);
      emlrtAssign(&g_y, m);
      for (i = 0; i < 48; i++) {
        j_u[i] = k_u[i];
      }

      h_y = NULL;
      m = emlrtCreateCharArray(2, &iv8[0]);
      emlrtInitCharArrayR2013a(cgxertPrepareEmlrtTLS(moduleInstance->S, &e_st,
        moduleInstance->sysIdx, 6), 48, m, &j_u[0]);
      emlrtAssign(&h_y, m);
      for (i = 0; i < 5; i++) {
        l_u[i] = m_u[i];
      }

      i_y = NULL;
      m = emlrtCreateCharArray(2, &iv9[0]);
      emlrtInitCharArrayR2013a(cgxertPrepareEmlrtTLS(moduleInstance->S, &e_st,
        moduleInstance->sysIdx, 6), 5, m, &l_u[0]);
      emlrtAssign(&i_y, m);
      j_y = NULL;
      m = emlrtCreateDoubleScalar(4.0);
      emlrtAssign(&j_y, m);
      f_st.site = &dn_emlrtRSI;
      j_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
      j_blkSrcLoc.blkIdx = 6;
      k_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
      k_blkSrcLoc.blkIdx = 6;
      l_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
      l_blkSrcLoc.blkIdx = 6;
      b_error(moduleInstance, &f_st, g_y, getString(moduleInstance, &f_st,
               d_message(moduleInstance, &f_st, h_y, i_y, j_y, &v_emlrtMCI,
                         &l_blkSrcLoc), &v_emlrtMCI, &j_blkSrcLoc), &v_emlrtMCI,
              &k_blkSrcLoc);
    }

    c_st.site = &mi_emlrtRSI;
    d_st.site = &ni_emlrtRSI;
    e_st.site = &oi_emlrtRSI;
    normalizeRows(moduleInstance, &e_st, *(real_T (*)[3])&result_data[0], v);
    emlrtDynamicBoundsCheckR2012b(4, 1, loop_ub + 3, &jd_emlrtBCI,
      cgxertPrepareEmlrtTLS(moduleInstance->S, &d_st, moduleInstance->sysIdx, 6));
    cth = muDoubleScalarCos(result_data[3]);
    sth = muDoubleScalarSin(result_data[3]);
    for (i = 0; i < 16; i++) {
      b_b[i] = 0.0;
    }

    cat(v[0] * v[0] * (1.0 - cth) + cth, v[0] * v[1] * (1.0 - cth) - v[2] * sth,
        v[0] * v[2] * (1.0 - cth) + v[1] * sth, v[0] * v[1] * (1.0 - cth) + v[2]
        * sth, v[1] * v[1] * (1.0 - cth) + cth, v[1] * v[2] * (1.0 - cth) - v[0]
        * sth, v[0] * v[2] * (1.0 - cth) - v[1] * sth, v[1] * v[2] * (1.0 - cth)
        + v[0] * sth, v[2] * v[2] * (1.0 - cth) + cth, dv1);
    permute(dv1, dv);
    for (i = 0; i < 3; i++) {
      for (loop_ub = 0; loop_ub < 3; loop_ub++) {
        b_b[loop_ub + (i << 2)] = dv[loop_ub + 3 * i];
      }
    }

    b_b[15] = 1.0;
    break;

   default:
    b_st.site = &li_emlrtRSI;
    if (b_strcmp(obj->Type) || c_strcmp(obj->Type)) {
      for (i = 0; i < 3; i++) {
        v[i] = obj->JointAxisInternal[i];
      }
    } else {
      for (i = 0; i < 3; i++) {
        v[i] = rtNaN;
      }
    }

    b_st.site = &th_emlrtRSI;
    if (q_size[0] != 1) {
      if (q_size[0] == 1) {
        for (i = 0; i < 45; i++) {
          d_u[i] = g_u[i];
        }

        c_y = NULL;
        m = emlrtCreateCharArray(2, &iv2[0]);
        emlrtInitCharArrayR2013a(cgxertPrepareEmlrtTLS(moduleInstance->S, &b_st,
          moduleInstance->sysIdx, 6), 45, m, &d_u[0]);
        emlrtAssign(&c_y, m);
        for (i = 0; i < 45; i++) {
          d_u[i] = g_u[i];
        }

        f_y = NULL;
        m = emlrtCreateCharArray(2, &iv6[0]);
        emlrtInitCharArrayR2013a(cgxertPrepareEmlrtTLS(moduleInstance->S, &b_st,
          moduleInstance->sysIdx, 6), 45, m, &d_u[0]);
        emlrtAssign(&f_y, m);
        c_st.site = &rm_emlrtRSI;
        c_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
        c_blkSrcLoc.blkIdx = 6;
        f_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
        f_blkSrcLoc.blkIdx = 6;
        i_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
        i_blkSrcLoc.blkIdx = 6;
        b_error(moduleInstance, &c_st, c_y, getString(moduleInstance, &c_st,
                 b_message(moduleInstance, &c_st, f_y, &x_emlrtMCI, &i_blkSrcLoc),
                 &x_emlrtMCI, &c_blkSrcLoc), &x_emlrtMCI, &f_blkSrcLoc);
      } else {
        for (i = 0; i < 15; i++) {
          c_u[i] = f_u[i];
        }

        b_y = NULL;
        m = emlrtCreateCharArray(2, &iv1[0]);
        emlrtInitCharArrayR2013a(cgxertPrepareEmlrtTLS(moduleInstance->S, &b_st,
          moduleInstance->sysIdx, 6), 15, m, &c_u[0]);
        emlrtAssign(&b_y, m);
        for (i = 0; i < 15; i++) {
          c_u[i] = f_u[i];
        }

        e_y = NULL;
        m = emlrtCreateCharArray(2, &iv5[0]);
        emlrtInitCharArrayR2013a(cgxertPrepareEmlrtTLS(moduleInstance->S, &b_st,
          moduleInstance->sysIdx, 6), 15, m, &c_u[0]);
        emlrtAssign(&e_y, m);
        c_st.site = &sm_emlrtRSI;
        b_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
        b_blkSrcLoc.blkIdx = 6;
        e_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
        e_blkSrcLoc.blkIdx = 6;
        h_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
        h_blkSrcLoc.blkIdx = 6;
        b_error(moduleInstance, &c_st, b_y, getString(moduleInstance, &c_st,
                 b_message(moduleInstance, &c_st, e_y, &w_emlrtMCI, &h_blkSrcLoc),
                 &w_emlrtMCI, &b_blkSrcLoc), &w_emlrtMCI, &e_blkSrcLoc);
      }
    }

    for (i = 0; i < 9; i++) {
      b_I[i] = 0;
    }

    for (loop_ub = 0; loop_ub < 3; loop_ub++) {
      b_I[loop_ub + 3 * loop_ub] = 1;
    }

    cth = q_data[0];
    for (i = 0; i < 3; i++) {
      for (loop_ub = 0; loop_ub < 3; loop_ub++) {
        b_b[loop_ub + (i << 2)] = (real_T)b_I[loop_ub + 3 * i];
      }

      b_b[i + 12] = v[i] * cth;
    }

    for (i = 0; i < 4; i++) {
      b_b[(i << 2) + 3] = (real_T)iv4[i];
    }
    break;
  }

  for (i = 0; i < 16; i++) {
    c_b[i] = obj->ChildToJointTransform[i];
  }

  for (i = 0; i < 4; i++) {
    for (loop_ub = 0; loop_ub < 4; loop_ub++) {
      b_a[i + (loop_ub << 2)] = 0.0;
      for (i1 = 0; i1 < 4; i1++) {
        b_a[i + (loop_ub << 2)] += a[i + (i1 << 2)] * b_b[i1 + (loop_ub << 2)];
      }
    }

    for (loop_ub = 0; loop_ub < 4; loop_ub++) {
      T[i + (loop_ub << 2)] = 0.0;
      for (i1 = 0; i1 < 4; i1++) {
        T[i + (loop_ub << 2)] += b_a[i + (i1 << 2)] * c_b[i1 + (loop_ub << 2)];
      }
    }
  }
}

static void mtimes(real_T A[36], emxArray_real_T *B, emxArray_real_T *C)
{
  ptrdiff_t k_t;
  ptrdiff_t lda_t;
  ptrdiff_t ldb_t;
  ptrdiff_t ldc_t;
  ptrdiff_t m_t;
  ptrdiff_t n_t;
  real_T alpha1;
  real_T beta1;
  int32_T i;
  char_T TRANSA1;
  char_T TRANSB1;
  if (B->size[1] == 0) {
    C->size[0] = 6;
    C->size[1] = 0;
  } else {
    TRANSB1 = 'N';
    TRANSA1 = 'N';
    alpha1 = 1.0;
    beta1 = 0.0;
    m_t = (ptrdiff_t)6;
    n_t = (ptrdiff_t)B->size[1];
    k_t = (ptrdiff_t)6;
    lda_t = (ptrdiff_t)6;
    ldb_t = (ptrdiff_t)6;
    ldc_t = (ptrdiff_t)6;
    i = C->size[0] * C->size[1];
    C->size[0] = 6;
    C->size[1] = B->size[1];
    emxEnsureCapacity_real_T(C, i);
    dgemm(&TRANSA1, &TRANSB1, &m_t, &n_t, &k_t, &alpha1, &A[0], &lda_t, &B->
          data[0], &ldb_t, &beta1, &C->data[0], &ldc_t);
  }
}

static void IKHelpers_poseError(InstanceStruct_dnGfh1DX0a11xSfGnyzF5G
  *moduleInstance, const emlrtStack *sp, real_T Td[16], real_T T_data[], int32_T
  T_size[2], real_T errorvec[6], cgxertBlkSrcLocInfo *blkSrc)
{
  __m128d r;
  __m128d r1;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack st;
  creal_T b_u;
  creal_T v;
  real_T U[9];
  real_T V[9];
  real_T b_I[9];
  real_T y[9];
  real_T c_v[4];
  real_T b_v[3];
  real_T vspecial_data[3];
  real_T ci;
  real_T q;
  int32_T iv[3];
  int32_T vspecial_size[2];
  int32_T b_i;
  int32_T i;
  int32_T ii_size_idx_1;
  int32_T iy;
  int32_T k;
  boolean_T x[3];
  boolean_T exitg1;
  boolean_T p;
  boolean_T rEQ0;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  for (i = 0; i < 3; i++) {
    emlrtDynamicBoundsCheckR2012b(i + 1, 1, T_size[0], &nd_emlrtBCI,
      cgxertPrepareEmlrtTLS(moduleInstance->S, (emlrtConstCTX)sp, blkSrc->sysIdx,
      blkSrc->blkIdx));
  }

  for (i = 0; i < 3; i++) {
    emlrtDynamicBoundsCheckR2012b(i + 1, 1, T_size[1], &od_emlrtBCI,
      cgxertPrepareEmlrtTLS(moduleInstance->S, (emlrtConstCTX)sp, blkSrc->sysIdx,
      blkSrc->blkIdx));
  }

  emlrtDynamicBoundsCheckR2012b(4, 1, T_size[1], &kd_emlrtBCI,
    cgxertPrepareEmlrtTLS(moduleInstance->S, (emlrtConstCTX)sp,
    moduleInstance->sysIdx, 6));
  for (i = 0; i < 3; i++) {
    emlrtDynamicBoundsCheckR2012b(i + 1, 1, T_size[0], &pd_emlrtBCI,
      cgxertPrepareEmlrtTLS(moduleInstance->S, (emlrtConstCTX)sp, blkSrc->sysIdx,
      blkSrc->blkIdx));
  }

  for (i = 0; i < 3; i++) {
    for (k = 0; k < 3; k++) {
      y[i + 3 * k] = 0.0;
      for (iy = 0; iy < 3; iy++) {
        y[i + 3 * k] += Td[i + (iy << 2)] * T_data[k + T_size[0] * iy];
      }
    }
  }

  st.site = &si_emlrtRSI;
  b_st.site = &ti_emlrtRSI;
  b_u.re = 0.5 * (((y[0] + y[4]) + y[8]) - 1.0);
  if (!(muDoubleScalarAbs(b_u.re) > 1.0)) {
    ci = b_u.re;
    b_u.re = muDoubleScalarAcos(ci);
  } else {
    v.re = b_u.re + 1.0;
    v.im = 0.0;
    c_sqrt(&v);
    ci = b_u.re;
    b_u.re = 1.0 - ci;
    b_u.im = 0.0;
    c_sqrt(&b_u);
    if ((-v.im == 0.0) && (b_u.im == 0.0)) {
    } else {
      ci = v.re * b_u.im + -v.im * b_u.re;
      if ((muDoubleScalarIsInf(ci) || muDoubleScalarIsNaN(ci)) &&
          (!muDoubleScalarIsNaN(v.re)) && (!muDoubleScalarIsNaN(-v.im)) &&
          (!muDoubleScalarIsNaN(b_u.re)) && (!muDoubleScalarIsNaN(b_u.im))) {
        ci = v.re;
        q = -v.im;
        rescale(&ci, &q);
        ci = b_u.re;
        q = b_u.im;
        rescale(&ci, &q);
      }
    }

    ci = b_u.re;
    b_u.re = 2.0 * muDoubleScalarAtan2(ci, v.re);
  }

  ci = 2.0 * muDoubleScalarSin(b_u.re);
  b_v[0] = (y[5] - y[7]) / ci;
  b_v[1] = (y[6] - y[2]) / ci;
  b_v[2] = (y[1] - y[3]) / ci;
  if (muDoubleScalarIsNaN(b_u.re) || muDoubleScalarIsInf(b_u.re)) {
    ci = rtNaN;
  } else if (b_u.re == 0.0) {
    ci = 0.0;
  } else {
    ci = muDoubleScalarRem(b_u.re, 3.1415926535897931);
    rEQ0 = (ci == 0.0);
    if (!rEQ0) {
      q = muDoubleScalarAbs(b_u.re / 3.1415926535897931);
      rEQ0 = !(muDoubleScalarAbs(q - muDoubleScalarFloor(q + 0.5)) >
               2.2204460492503131E-16 * q);
    }

    if (rEQ0) {
      ci = 0.0;
    } else if (b_u.re < 0.0) {
      ci += 3.1415926535897931;
    }
  }

  for (i = 0; i < 3; i++) {
    x[i] = (b_v[i] == 0.0);
  }

  rEQ0 = true;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k < 3)) {
    if (!x[k]) {
      rEQ0 = false;
      exitg1 = true;
    } else {
      k++;
    }
  }

  rEQ0 = ((ci == 0.0) || rEQ0);
  if (rEQ0) {
    vspecial_size[0] = 3;
    vspecial_size[1] = (int32_T)rEQ0;
    iy = 3 * (int32_T)rEQ0;
    for (i = 0; i < iy; i++) {
      vspecial_data[i] = 0.0;
    }

    if (rEQ0) {
      iy = 1;
      ii_size_idx_1 = 1;
    } else {
      iy = 0;
      ii_size_idx_1 = 0;
    }

    i = (int32_T)rEQ0 - 1;
    for (b_i = 0; b_i <= i; b_i++) {
      emlrtDynamicBoundsCheckR2012b(1, 1, iy * ii_size_idx_1, &md_emlrtBCI,
        cgxertPrepareEmlrtTLS(moduleInstance->S, &b_st, moduleInstance->sysIdx,
        6));
      for (k = 0; k < 9; k++) {
        b_I[k] = 0.0;
      }

      for (k = 0; k < 3; k++) {
        b_I[k + 3 * k] = 1.0;
      }

      c_st.site = &vi_emlrtRSI;
      p = true;
      for (k = 0; k < 9; k++) {
        ci = b_I[k] - y[k];
        if (p && ((!muDoubleScalarIsInf(ci)) && (!muDoubleScalarIsNaN(ci)))) {
          p = true;
        } else {
          p = false;
        }

        b_I[k] = ci;
      }

      if (p) {
        d_st.site = &wi_emlrtRSI;
        e_st.site = &yi_emlrtRSI;
        xzsvdc(moduleInstance, &e_st, b_I, U, vspecial_data, V);
      } else {
        d_st.site = &xi_emlrtRSI;
        for (k = 0; k < 9; k++) {
          b_I[k] = 0.0;
        }

        e_st.site = &yi_emlrtRSI;
        xzsvdc(moduleInstance, &e_st, b_I, U, vspecial_data, V);
        for (k = 0; k < 9; k++) {
          V[k] = rtNaN;
        }
      }

      emlrtDynamicBoundsCheckR2012b(1, 1, (int32_T)rEQ0, &ld_emlrtBCI,
        cgxertPrepareEmlrtTLS(moduleInstance->S, &b_st, moduleInstance->sysIdx,
        6));
      for (k = 0; k < 3; k++) {
        vspecial_data[k] = V[k + 6];
      }
    }

    iy = 0;
    for (b_i = 0; b_i < 1; b_i++) {
      if (rEQ0) {
        iy++;
      }
    }

    iv[0] = 1;
    iv[1] = 3;
    iv[2] = iy;
    emlrtSubAssignSizeCheckR2012b(&iv[0], 3, &vspecial_size[0], 2, &k_emlrtECI,
      cgxertPrepareEmlrtTLS(moduleInstance->S, &b_st, moduleInstance->sysIdx, 6));
    for (i = 0; i < iy; i++) {
      for (k = 0; k < 3; k++) {
        b_v[k] = vspecial_data[k];
      }
    }
  }

  for (i = 0; i < 3; i++) {
    vspecial_data[i] = b_v[i];
  }

  c_st.site = &ui_emlrtRSI;
  normalizeRows(moduleInstance, &c_st, vspecial_data, b_v);
  iy = -1;
  for (ii_size_idx_1 = 0; ii_size_idx_1 < 3; ii_size_idx_1++) {
    iy++;
    c_v[iy] = b_v[ii_size_idx_1];
  }

  c_v[iy + 1] = b_u.re;
  for (i = 0; i <= 0; i += 2) {
    r = _mm_loadu_pd(&c_v[0]);
    _mm_storeu_pd(&errorvec[0], _mm_mul_pd(_mm_set1_pd(c_v[3]), r));
    r = _mm_loadu_pd(&Td[12]);
    r1 = _mm_loadu_pd(&T_data[T_size[0] * 3]);
    _mm_storeu_pd(&errorvec[3], _mm_sub_pd(r, r1));
  }

  for (i = 2; i < 3; i++) {
    errorvec[2] = c_v[2] * c_v[3];
    errorvec[5] = Td[14] - T_data[2 + T_size[0] * 3];
  }
}

static void xzsvdc(InstanceStruct_dnGfh1DX0a11xSfGnyzF5G *moduleInstance, const
                   emlrtStack *sp, real_T A[9], real_T U[9], real_T b_S[3],
                   real_T V[9])
{
  static char_T cv[30] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T', 'L', 'A',
    'B', ':', 's', 'v', 'd', '_', 'N', 'o', 'C', 'o', 'n', 'v', 'e', 'r', 'g',
    'e', 'n', 'c', 'e' };

  __m128d r;
  cgxertBlkSrcLocInfo b_blkSrcLoc;
  cgxertBlkSrcLocInfo blkSrcLoc;
  cgxertBlkSrcLocInfo c_blkSrcLoc;
  cgxertBlkSrcLocInfo d_blkSrcLoc;
  cgxertBlkSrcLocInfo e_blkSrcLoc;
  cgxertBlkSrcLocInfo f_blkSrcLoc;
  emlrtStack st;
  real_T e[3];
  real_T s[3];
  real_T work[3];
  real_T b_b;
  real_T f;
  real_T nrm;
  real_T rt;
  real_T scale;
  real_T sm;
  real_T snorm;
  real_T sqds;
  int32_T exitg2;
  int32_T i;
  int32_T iter;
  int32_T k;
  int32_T m;
  int32_T q;
  int32_T qp1;
  int32_T qq;
  int32_T qs;
  boolean_T apply_transform;
  boolean_T exitg1;
  boolean_T exitg3;
  st.prev = sp;
  st.tls = sp->tls;
  for (i = 0; i < 3; i++) {
    s[i] = 0.0;
    e[i] = 0.0;
    work[i] = 0.0;
  }

  for (iter = 0; iter < 9; iter++) {
    U[iter] = 0.0;
    V[iter] = 0.0;
  }

  for (q = 0; q < 2; q++) {
    qp1 = q + 2;
    qq = (q + 3 * q) + 1;
    apply_transform = false;
    nrm = xnrm2(3 - q, A, qq);
    if (nrm > 0.0) {
      apply_transform = true;
      if (A[qq - 1] < 0.0) {
        nrm = -nrm;
      }

      s[q] = nrm;
      if (muDoubleScalarAbs(s[q]) >= 1.0020841800044864E-292) {
        xscal(3 - q, 1.0 / s[q], A, qq);
      } else {
        iter = qq - q;
        i = ((iter - qq) + 3) / 2 * 2 + qq;
        qs = i - 2;
        for (k = qq; k <= qs; k += 2) {
          r = _mm_loadu_pd(&A[k - 1]);
          _mm_storeu_pd(&A[k - 1], _mm_div_pd(r, _mm_set1_pd(s[q])));
        }

        for (k = i; k <= iter + 2; k++) {
          A[k - 1] /= s[q];
        }
      }

      A[qq - 1]++;
      s[q] = -s[q];
    } else {
      s[q] = 0.0;
    }

    for (qs = qp1; qs < 4; qs++) {
      i = (q + 3 * (qs - 1)) + 1;
      if (apply_transform) {
        xaxpy(3 - q, -(xdotc(3 - q, A, qq, A, i) / A[q + 3 * q]), qq, A, i);
      }

      e[qs - 1] = A[i - 1];
    }

    memcpy(&U[q + q * 3], &A[q + q * 3], (uint32_T)(((q * 3 - q) - q * 3) + 3) *
           sizeof(real_T));
    if (q + 1 <= 1) {
      nrm = b_xnrm2(e, 2);
      if (nrm == 0.0) {
        e[0] = 0.0;
      } else {
        if (e[1] < 0.0) {
          nrm = -nrm;
        }

        e[0] = nrm;
        if (muDoubleScalarAbs(nrm) >= 1.0020841800044864E-292) {
          b_xscal(1.0 / nrm, e, 2);
        } else {
          i = ((2 - q) / 2 * 2 + q) + 2;
          qs = i - 2;
          for (k = qp1; k <= qs; k += 2) {
            r = _mm_loadu_pd(&e[k - 1]);
            _mm_storeu_pd(&e[k - 1], _mm_div_pd(r, _mm_set1_pd(nrm)));
          }

          for (k = i; k < 4; k++) {
            e[k - 1] /= nrm;
          }
        }

        e[1]++;
        e[0] = -e[0];
        for (k = qp1; k < 4; k++) {
          work[k - 1] = 0.0;
        }

        for (qs = qp1; qs < 4; qs++) {
          b_xaxpy(2, e[qs - 1], A, 3 * (qs - 1) + 2, work, 2);
        }

        for (qs = qp1; qs < 4; qs++) {
          c_xaxpy(2, -e[qs - 1] / e[1], work, 2, A, 3 * (qs - 1) + 2);
        }
      }

      for (k = qp1; k < 4; k++) {
        V[k - 1] = e[k - 1];
      }
    }
  }

  m = 1;
  s[2] = A[8];
  e[1] = A[7];
  e[2] = 0.0;
  for (k = 0; k < 3; k++) {
    U[k + 6] = 0.0;
  }

  U[8] = 1.0;
  for (q = 1; q >= 0; q--) {
    qq = q + 3 * q;
    if (s[q] != 0.0) {
      for (qs = q + 2; qs < 4; qs++) {
        i = (q + 3 * (qs - 1)) + 1;
        xaxpy(3 - q, -(xdotc(3 - q, U, qq + 1, U, i) / U[qq]), qq + 1, U, i);
      }

      for (k = q + 1; k < 4; k++) {
        U[(k + 3 * q) - 1] = -U[(k + 3 * q) - 1];
      }

      U[qq]++;
      iter = q - 1;
      for (k = 0; k <= iter; k++) {
        U[3 * q] = 0.0;
      }
    } else {
      for (k = 0; k < 3; k++) {
        U[k + 3 * q] = 0.0;
      }

      U[qq] = 1.0;
    }
  }

  for (q = 2; q >= 0; q--) {
    if ((q + 1 <= 1) && (e[0] != 0.0)) {
      for (qs = 0; qs < 2; qs++) {
        i = 3 * (qs + 1) + 2;
        xaxpy(2, -(xdotc(2, V, 2, V, i) / V[1]), 2, V, i);
      }
    }

    for (k = 0; k < 3; k++) {
      V[k + 3 * q] = 0.0;
    }

    V[q + 3 * q] = 1.0;
  }

  for (q = 0; q < 3; q++) {
    sm = e[q];
    if (s[q] != 0.0) {
      rt = muDoubleScalarAbs(s[q]);
      nrm = s[q] / rt;
      s[q] = rt;
      if (q + 1 < 3) {
        sm /= nrm;
      }

      c_xscal(nrm, U, 3 * q + 1);
    }

    if ((q + 1 < 3) && (sm != 0.0)) {
      rt = muDoubleScalarAbs(sm);
      nrm = rt / sm;
      sm = rt;
      s[q + 1] *= nrm;
      c_xscal(nrm, V, 3 * (q + 1) + 1);
    }

    e[q] = sm;
  }

  iter = 0;
  snorm = 0.0;
  for (k = 0; k < 3; k++) {
    snorm = muDoubleScalarMax(snorm, muDoubleScalarMax(muDoubleScalarAbs(s[k]),
      muDoubleScalarAbs(e[k])));
  }

  exitg1 = false;
  while ((!exitg1) && (m + 2 > 0)) {
    if (iter >= 75) {
      st.site = &gm_emlrtRSI;
      blkSrcLoc.sysIdx = moduleInstance->sysIdx;
      blkSrcLoc.blkIdx = 6;
      b_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
      b_blkSrcLoc.blkIdx = 6;
      c_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
      c_blkSrcLoc.blkIdx = 6;
      d_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
      d_blkSrcLoc.blkIdx = 6;
      e_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
      e_blkSrcLoc.blkIdx = 6;
      b_error(moduleInstance, &st, emlrt_marshallOut(moduleInstance, &st, cv,
               &blkSrcLoc), getString(moduleInstance, &st, b_message
               (moduleInstance, &st, emlrt_marshallOut(moduleInstance, &st, cv,
                 &b_blkSrcLoc), &y_emlrtMCI, &e_blkSrcLoc), &y_emlrtMCI,
               &c_blkSrcLoc), &y_emlrtMCI, &d_blkSrcLoc);
      exitg1 = true;
    } else {
      k = m;
      do {
        exitg2 = 0;
        q = k + 1;
        if (k + 1 == 0) {
          exitg2 = 1;
        } else {
          nrm = muDoubleScalarAbs(e[k]);
          if ((nrm <= 2.2204460492503131E-16 * (muDoubleScalarAbs(s[k]) +
                muDoubleScalarAbs(s[k + 1]))) || (nrm <= 1.0020841800044864E-292)
              || ((iter > 20) && (nrm <= 2.2204460492503131E-16 * snorm))) {
            e[k] = 0.0;
            exitg2 = 1;
          } else {
            k--;
          }
        }
      } while (exitg2 == 0);

      if (k + 1 == m + 1) {
        i = 4;
      } else {
        qs = m + 2;
        i = m + 2;
        exitg3 = false;
        while ((!exitg3) && (i >= k + 1)) {
          qs = i;
          if (i == k + 1) {
            exitg3 = true;
          } else {
            nrm = 0.0;
            if (i < m + 2) {
              nrm = muDoubleScalarAbs(e[i - 1]);
            }

            if (i > k + 2) {
              nrm += muDoubleScalarAbs(e[i - 2]);
            }

            rt = muDoubleScalarAbs(s[i - 1]);
            if ((rt <= 2.2204460492503131E-16 * nrm) || (rt <=
                 1.0020841800044864E-292)) {
              s[i - 1] = 0.0;
              exitg3 = true;
            } else {
              i--;
            }
          }
        }

        if (qs == k + 1) {
          i = 3;
        } else if (qs == m + 2) {
          i = 1;
        } else {
          i = 2;
          q = qs;
        }
      }

      switch (i) {
       case 1:
        f = e[m];
        e[m] = 0.0;
        for (k = m + 1; k >= q + 1; k--) {
          sm = e[0];
          nrm = s[k - 1];
          st.site = &ej_emlrtRSI;
          xrotg(&nrm, &f, &rt, &b_b);
          s[k - 1] = nrm;
          if (k > q + 1) {
            f = -b_b * e[0];
            sm = e[0] * rt;
          }

          xrot(V, 3 * (k - 1) + 1, 3 * (m + 1) + 1, rt, b_b);
          e[0] = sm;
        }
        break;

       case 2:
        f = e[q - 1];
        e[q - 1] = 0.0;
        for (k = q + 1; k <= m + 2; k++) {
          nrm = s[k - 1];
          st.site = &dj_emlrtRSI;
          xrotg(&nrm, &f, &rt, &b_b);
          s[k - 1] = nrm;
          f = -b_b * e[k - 1];
          e[k - 1] *= rt;
          xrot(U, 3 * (k - 1) + 1, 3 * (q - 1) + 1, rt, b_b);
        }
        break;

       case 3:
        scale = muDoubleScalarMax(muDoubleScalarMax(muDoubleScalarMax
          (muDoubleScalarMax(muDoubleScalarAbs(s[m + 1]), muDoubleScalarAbs(s[m])),
           muDoubleScalarAbs(e[m])), muDoubleScalarAbs(s[q])), muDoubleScalarAbs
          (e[q]));
        sm = s[m + 1] / scale;
        nrm = s[m] / scale;
        rt = e[m] / scale;
        sqds = s[q] / scale;
        b_b = ((nrm + sm) * (nrm - sm) + rt * rt) / 2.0;
        nrm = sm * rt;
        nrm *= nrm;
        if ((b_b != 0.0) || (nrm != 0.0)) {
          rt = b_b * b_b + nrm;
          st.site = &cj_emlrtRSI;
          f_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
          f_blkSrcLoc.blkIdx = 6;
          b_sqrt(moduleInstance, &st, &rt, &f_blkSrcLoc);
          if (b_b < 0.0) {
            rt = -rt;
          }

          rt = nrm / (b_b + rt);
        } else {
          rt = 0.0;
        }

        f = (sqds + sm) * (sqds - sm) + rt;
        nrm = sqds * (e[q] / scale);
        for (k = q + 1; k <= m + 1; k++) {
          st.site = &bj_emlrtRSI;
          xrotg(&f, &nrm, &rt, &b_b);
          if (k > q + 1) {
            e[0] = f;
          }

          f = rt * s[k - 1] + b_b * e[k - 1];
          e[k - 1] = rt * e[k - 1] - b_b * s[k - 1];
          nrm = b_b * s[k];
          s[k] *= rt;
          xrot(V, 3 * (k - 1) + 1, 3 * k + 1, rt, b_b);
          st.site = &aj_emlrtRSI;
          xrotg(&f, &nrm, &rt, &b_b);
          s[k - 1] = f;
          f = rt * e[k - 1] + b_b * s[k];
          s[k] = -b_b * e[k - 1] + rt * s[k];
          nrm = b_b * e[k];
          e[k] *= rt;
          xrot(U, 3 * (k - 1) + 1, 3 * k + 1, rt, b_b);
        }

        e[m] = f;
        iter++;
        break;

       default:
        if (s[q] < 0.0) {
          s[q] = -s[q];
          c_xscal(-1.0, V, 3 * q + 1);
        }

        qp1 = q + 1;
        while ((q + 1 < 3) && (s[q] < s[qp1])) {
          rt = s[q];
          s[q] = s[qp1];
          s[qp1] = rt;
          xswap(V, 3 * q + 1, 3 * (q + 1) + 1);
          xswap(U, 3 * q + 1, 3 * (q + 1) + 1);
          q = qp1;
          qp1++;
        }

        iter = 0;
        m--;
        break;
      }
    }
  }

  for (k = 0; k < 3; k++) {
    b_S[k] = s[k];
  }
}

static real_T xnrm2(int32_T n, real_T x[9], int32_T ix0)
{
  real_T absxk;
  real_T scale;
  real_T t;
  real_T y;
  int32_T k;
  int32_T kend;
  y = 0.0;
  scale = 3.3121686421112381E-170;
  kend = ix0 + n;
  for (k = ix0; k < kend; k++) {
    absxk = muDoubleScalarAbs(x[k - 1]);
    if (absxk > scale) {
      t = scale / absxk;
      y = y * t * t + 1.0;
      scale = absxk;
    } else {
      t = absxk / scale;
      y += t * t;
    }
  }

  return scale * muDoubleScalarSqrt(y);
}

static real_T xdotc(int32_T n, real_T x[9], int32_T ix0, real_T y[9], int32_T
                    iy0)
{
  real_T d;
  int32_T i;
  int32_T ix;
  int32_T iy;
  int32_T k;
  d = 0.0;
  ix = ix0 - 1;
  iy = iy0 - 1;
  i = (uint8_T)n - 1;
  for (k = 0; k <= i; k++) {
    d += x[ix] * y[iy];
    ix++;
    iy++;
  }

  return d;
}

static real_T b_xnrm2(real_T x[3], int32_T ix0)
{
  real_T absxk;
  real_T scale;
  real_T t;
  real_T y;
  int32_T k;
  y = 0.0;
  scale = 3.3121686421112381E-170;
  for (k = ix0; k <= ix0 + 1; k++) {
    absxk = muDoubleScalarAbs(x[k - 1]);
    if (absxk > scale) {
      t = scale / absxk;
      y = y * t * t + 1.0;
      scale = absxk;
    } else {
      t = absxk / scale;
      y += t * t;
    }
  }

  return scale * muDoubleScalarSqrt(y);
}

static void dynamic_size_checks(InstanceStruct_dnGfh1DX0a11xSfGnyzF5G
  *moduleInstance, const emlrtStack *sp, emxArray_real_T *a, int32_T innerDimA,
  cgxertBlkSrcLocInfo *blkSrc)
{
  static const int32_T iv[2] = { 1, 15 };

  static const int32_T iv1[2] = { 1, 45 };

  static const int32_T iv2[2] = { 1, 15 };

  static const int32_T iv3[2] = { 1, 45 };

  static char_T e_u[45] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'm', 't', 'i', 'm', 'e', 's', '_', 'n', 'o', 'D', 'y',
    'n', 'a', 'm', 'i', 'c', 'S', 'c', 'a', 'l', 'a', 'r', 'E', 'x', 'p', 'a',
    'n', 's', 'i', 'o', 'n' };

  static char_T d_u[15] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'i', 'n', 'n',
    'e', 'r', 'd', 'i', 'm' };

  cgxertBlkSrcLocInfo b_blkSrcLoc;
  cgxertBlkSrcLocInfo blkSrcLoc;
  cgxertBlkSrcLocInfo c_blkSrcLoc;
  cgxertBlkSrcLocInfo d_blkSrcLoc;
  cgxertBlkSrcLocInfo e_blkSrcLoc;
  cgxertBlkSrcLocInfo f_blkSrcLoc;
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *d_y;
  const mxArray *m;
  const mxArray *y;
  int32_T i;
  char_T c_u[45];
  char_T b_u[15];
  st.prev = sp;
  st.tls = sp->tls;
  if (innerDimA != 6) {
    if ((a->size[0] == 1) && (a->size[1] == 1)) {
      for (i = 0; i < 45; i++) {
        c_u[i] = e_u[i];
      }

      b_y = NULL;
      m = emlrtCreateCharArray(2, &iv1[0]);
      emlrtInitCharArrayR2013a(cgxertPrepareEmlrtTLS(moduleInstance->S,
        (emlrtConstCTX)sp, blkSrc->sysIdx, blkSrc->blkIdx), 45, m, &c_u[0]);
      emlrtAssign(&b_y, m);
      for (i = 0; i < 45; i++) {
        c_u[i] = e_u[i];
      }

      d_y = NULL;
      m = emlrtCreateCharArray(2, &iv3[0]);
      emlrtInitCharArrayR2013a(cgxertPrepareEmlrtTLS(moduleInstance->S,
        (emlrtConstCTX)sp, blkSrc->sysIdx, blkSrc->blkIdx), 45, m, &c_u[0]);
      emlrtAssign(&d_y, m);
      st.site = &rm_emlrtRSI;
      b_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
      b_blkSrcLoc.blkIdx = 6;
      d_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
      d_blkSrcLoc.blkIdx = 6;
      f_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
      f_blkSrcLoc.blkIdx = 6;
      b_error(moduleInstance, &st, b_y, getString(moduleInstance, &st, b_message
               (moduleInstance, &st, d_y, &x_emlrtMCI, &f_blkSrcLoc),
               &x_emlrtMCI, &b_blkSrcLoc), &x_emlrtMCI, &d_blkSrcLoc);
    } else {
      for (i = 0; i < 15; i++) {
        b_u[i] = d_u[i];
      }

      y = NULL;
      m = emlrtCreateCharArray(2, &iv[0]);
      emlrtInitCharArrayR2013a(cgxertPrepareEmlrtTLS(moduleInstance->S,
        (emlrtConstCTX)sp, blkSrc->sysIdx, blkSrc->blkIdx), 15, m, &b_u[0]);
      emlrtAssign(&y, m);
      for (i = 0; i < 15; i++) {
        b_u[i] = d_u[i];
      }

      c_y = NULL;
      m = emlrtCreateCharArray(2, &iv2[0]);
      emlrtInitCharArrayR2013a(cgxertPrepareEmlrtTLS(moduleInstance->S,
        (emlrtConstCTX)sp, blkSrc->sysIdx, blkSrc->blkIdx), 15, m, &b_u[0]);
      emlrtAssign(&c_y, m);
      st.site = &sm_emlrtRSI;
      blkSrcLoc.sysIdx = moduleInstance->sysIdx;
      blkSrcLoc.blkIdx = 6;
      c_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
      c_blkSrcLoc.blkIdx = 6;
      e_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
      e_blkSrcLoc.blkIdx = 6;
      b_error(moduleInstance, &st, y, getString(moduleInstance, &st, b_message
               (moduleInstance, &st, c_y, &w_emlrtMCI, &e_blkSrcLoc),
               &w_emlrtMCI, &blkSrcLoc), &w_emlrtMCI, &c_blkSrcLoc);
    }
  }
}

static void b_mtimes(emxArray_real_T *A, real_T B[6], emxArray_real_T *C)
{
  ptrdiff_t k_t;
  ptrdiff_t lda_t;
  ptrdiff_t ldb_t;
  ptrdiff_t ldc_t;
  ptrdiff_t m_t;
  ptrdiff_t n_t;
  real_T alpha1;
  real_T beta1;
  int32_T i;
  int32_T loop_ub;
  char_T TRANSA1;
  char_T TRANSB1;
  if ((A->size[0] == 0) || (A->size[1] == 0)) {
    i = C->size[0];
    C->size[0] = A->size[1];
    emxEnsureCapacity_real_T1(C, i);
    loop_ub = A->size[1];
    for (i = 0; i < loop_ub; i++) {
      C->data[i] = 0.0;
    }
  } else {
    TRANSB1 = 'N';
    TRANSA1 = 'T';
    alpha1 = 1.0;
    beta1 = 0.0;
    m_t = (ptrdiff_t)A->size[1];
    n_t = (ptrdiff_t)1;
    k_t = (ptrdiff_t)6;
    lda_t = (ptrdiff_t)A->size[0];
    ldb_t = (ptrdiff_t)6;
    ldc_t = (ptrdiff_t)A->size[1];
    i = C->size[0];
    C->size[0] = A->size[1];
    emxEnsureCapacity_real_T1(C, i);
    dgemm(&TRANSA1, &TRANSB1, &m_t, &n_t, &k_t, &alpha1, &A->data[0], &lda_t,
          &B[0], &ldb_t, &beta1, &C->data[0], &ldc_t);
  }
}

static void b_dynamic_size_checks(InstanceStruct_dnGfh1DX0a11xSfGnyzF5G
  *moduleInstance, const emlrtStack *sp, emxArray_real_T *a, int32_T innerDimA,
  cgxertBlkSrcLocInfo *blkSrc)
{
  static const int32_T iv[2] = { 1, 15 };

  static const int32_T iv1[2] = { 1, 45 };

  static const int32_T iv2[2] = { 1, 15 };

  static const int32_T iv3[2] = { 1, 45 };

  static char_T e_u[45] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'm', 't', 'i', 'm', 'e', 's', '_', 'n', 'o', 'D', 'y',
    'n', 'a', 'm', 'i', 'c', 'S', 'c', 'a', 'l', 'a', 'r', 'E', 'x', 'p', 'a',
    'n', 's', 'i', 'o', 'n' };

  static char_T d_u[15] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'i', 'n', 'n',
    'e', 'r', 'd', 'i', 'm' };

  cgxertBlkSrcLocInfo b_blkSrcLoc;
  cgxertBlkSrcLocInfo blkSrcLoc;
  cgxertBlkSrcLocInfo c_blkSrcLoc;
  cgxertBlkSrcLocInfo d_blkSrcLoc;
  cgxertBlkSrcLocInfo e_blkSrcLoc;
  cgxertBlkSrcLocInfo f_blkSrcLoc;
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *d_y;
  const mxArray *m;
  const mxArray *y;
  int32_T i;
  char_T c_u[45];
  char_T b_u[15];
  st.prev = sp;
  st.tls = sp->tls;
  if (innerDimA != 6) {
    if (a->size[0] == 1) {
      for (i = 0; i < 45; i++) {
        c_u[i] = e_u[i];
      }

      b_y = NULL;
      m = emlrtCreateCharArray(2, &iv1[0]);
      emlrtInitCharArrayR2013a(cgxertPrepareEmlrtTLS(moduleInstance->S,
        (emlrtConstCTX)sp, blkSrc->sysIdx, blkSrc->blkIdx), 45, m, &c_u[0]);
      emlrtAssign(&b_y, m);
      for (i = 0; i < 45; i++) {
        c_u[i] = e_u[i];
      }

      d_y = NULL;
      m = emlrtCreateCharArray(2, &iv3[0]);
      emlrtInitCharArrayR2013a(cgxertPrepareEmlrtTLS(moduleInstance->S,
        (emlrtConstCTX)sp, blkSrc->sysIdx, blkSrc->blkIdx), 45, m, &c_u[0]);
      emlrtAssign(&d_y, m);
      st.site = &rm_emlrtRSI;
      b_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
      b_blkSrcLoc.blkIdx = 6;
      d_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
      d_blkSrcLoc.blkIdx = 6;
      f_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
      f_blkSrcLoc.blkIdx = 6;
      b_error(moduleInstance, &st, b_y, getString(moduleInstance, &st, b_message
               (moduleInstance, &st, d_y, &x_emlrtMCI, &f_blkSrcLoc),
               &x_emlrtMCI, &b_blkSrcLoc), &x_emlrtMCI, &d_blkSrcLoc);
    } else {
      for (i = 0; i < 15; i++) {
        b_u[i] = d_u[i];
      }

      y = NULL;
      m = emlrtCreateCharArray(2, &iv[0]);
      emlrtInitCharArrayR2013a(cgxertPrepareEmlrtTLS(moduleInstance->S,
        (emlrtConstCTX)sp, blkSrc->sysIdx, blkSrc->blkIdx), 15, m, &b_u[0]);
      emlrtAssign(&y, m);
      for (i = 0; i < 15; i++) {
        b_u[i] = d_u[i];
      }

      c_y = NULL;
      m = emlrtCreateCharArray(2, &iv2[0]);
      emlrtInitCharArrayR2013a(cgxertPrepareEmlrtTLS(moduleInstance->S,
        (emlrtConstCTX)sp, blkSrc->sysIdx, blkSrc->blkIdx), 15, m, &b_u[0]);
      emlrtAssign(&c_y, m);
      st.site = &sm_emlrtRSI;
      blkSrcLoc.sysIdx = moduleInstance->sysIdx;
      blkSrcLoc.blkIdx = 6;
      c_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
      c_blkSrcLoc.blkIdx = 6;
      e_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
      e_blkSrcLoc.blkIdx = 6;
      b_error(moduleInstance, &st, y, getString(moduleInstance, &st, b_message
               (moduleInstance, &st, c_y, &w_emlrtMCI, &e_blkSrcLoc),
               &w_emlrtMCI, &blkSrcLoc), &w_emlrtMCI, &c_blkSrcLoc);
    }
  }
}

static void c_dynamic_size_checks(InstanceStruct_dnGfh1DX0a11xSfGnyzF5G
  *moduleInstance, const emlrtStack *sp, emxArray_real_T *b_b, int32_T innerDimB,
  cgxertBlkSrcLocInfo *blkSrc)
{
  static const int32_T iv[2] = { 1, 15 };

  static const int32_T iv1[2] = { 1, 45 };

  static const int32_T iv2[2] = { 1, 15 };

  static const int32_T iv3[2] = { 1, 45 };

  static char_T e_u[45] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'm', 't', 'i', 'm', 'e', 's', '_', 'n', 'o', 'D', 'y',
    'n', 'a', 'm', 'i', 'c', 'S', 'c', 'a', 'l', 'a', 'r', 'E', 'x', 'p', 'a',
    'n', 's', 'i', 'o', 'n' };

  static char_T d_u[15] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'i', 'n', 'n',
    'e', 'r', 'd', 'i', 'm' };

  cgxertBlkSrcLocInfo b_blkSrcLoc;
  cgxertBlkSrcLocInfo blkSrcLoc;
  cgxertBlkSrcLocInfo c_blkSrcLoc;
  cgxertBlkSrcLocInfo d_blkSrcLoc;
  cgxertBlkSrcLocInfo e_blkSrcLoc;
  cgxertBlkSrcLocInfo f_blkSrcLoc;
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *d_y;
  const mxArray *m;
  const mxArray *y;
  int32_T i;
  char_T c_u[45];
  char_T b_u[15];
  st.prev = sp;
  st.tls = sp->tls;
  if (innerDimB != 6) {
    if (b_b->size[0] == 1) {
      for (i = 0; i < 45; i++) {
        c_u[i] = e_u[i];
      }

      b_y = NULL;
      m = emlrtCreateCharArray(2, &iv1[0]);
      emlrtInitCharArrayR2013a(cgxertPrepareEmlrtTLS(moduleInstance->S,
        (emlrtConstCTX)sp, blkSrc->sysIdx, blkSrc->blkIdx), 45, m, &c_u[0]);
      emlrtAssign(&b_y, m);
      for (i = 0; i < 45; i++) {
        c_u[i] = e_u[i];
      }

      d_y = NULL;
      m = emlrtCreateCharArray(2, &iv3[0]);
      emlrtInitCharArrayR2013a(cgxertPrepareEmlrtTLS(moduleInstance->S,
        (emlrtConstCTX)sp, blkSrc->sysIdx, blkSrc->blkIdx), 45, m, &c_u[0]);
      emlrtAssign(&d_y, m);
      st.site = &rm_emlrtRSI;
      b_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
      b_blkSrcLoc.blkIdx = 6;
      d_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
      d_blkSrcLoc.blkIdx = 6;
      f_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
      f_blkSrcLoc.blkIdx = 6;
      b_error(moduleInstance, &st, b_y, getString(moduleInstance, &st, b_message
               (moduleInstance, &st, d_y, &x_emlrtMCI, &f_blkSrcLoc),
               &x_emlrtMCI, &b_blkSrcLoc), &x_emlrtMCI, &d_blkSrcLoc);
    } else {
      for (i = 0; i < 15; i++) {
        b_u[i] = d_u[i];
      }

      y = NULL;
      m = emlrtCreateCharArray(2, &iv[0]);
      emlrtInitCharArrayR2013a(cgxertPrepareEmlrtTLS(moduleInstance->S,
        (emlrtConstCTX)sp, blkSrc->sysIdx, blkSrc->blkIdx), 15, m, &b_u[0]);
      emlrtAssign(&y, m);
      for (i = 0; i < 15; i++) {
        b_u[i] = d_u[i];
      }

      c_y = NULL;
      m = emlrtCreateCharArray(2, &iv2[0]);
      emlrtInitCharArrayR2013a(cgxertPrepareEmlrtTLS(moduleInstance->S,
        (emlrtConstCTX)sp, blkSrc->sysIdx, blkSrc->blkIdx), 15, m, &b_u[0]);
      emlrtAssign(&c_y, m);
      st.site = &sm_emlrtRSI;
      blkSrcLoc.sysIdx = moduleInstance->sysIdx;
      blkSrcLoc.blkIdx = 6;
      c_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
      c_blkSrcLoc.blkIdx = 6;
      e_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
      e_blkSrcLoc.blkIdx = 6;
      b_error(moduleInstance, &st, y, getString(moduleInstance, &st, b_message
               (moduleInstance, &st, c_y, &w_emlrtMCI, &e_blkSrcLoc),
               &w_emlrtMCI, &blkSrcLoc), &w_emlrtMCI, &c_blkSrcLoc);
    }
  }
}

static void d_dynamic_size_checks(InstanceStruct_dnGfh1DX0a11xSfGnyzF5G
  *moduleInstance, const emlrtStack *sp, emxArray_real_T *b_b, int32_T innerDimB,
  cgxertBlkSrcLocInfo *blkSrc)
{
  static const int32_T iv[2] = { 1, 15 };

  static const int32_T iv1[2] = { 1, 45 };

  static const int32_T iv2[2] = { 1, 15 };

  static const int32_T iv3[2] = { 1, 45 };

  static char_T e_u[45] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'm', 't', 'i', 'm', 'e', 's', '_', 'n', 'o', 'D', 'y',
    'n', 'a', 'm', 'i', 'c', 'S', 'c', 'a', 'l', 'a', 'r', 'E', 'x', 'p', 'a',
    'n', 's', 'i', 'o', 'n' };

  static char_T d_u[15] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'i', 'n', 'n',
    'e', 'r', 'd', 'i', 'm' };

  cgxertBlkSrcLocInfo b_blkSrcLoc;
  cgxertBlkSrcLocInfo blkSrcLoc;
  cgxertBlkSrcLocInfo c_blkSrcLoc;
  cgxertBlkSrcLocInfo d_blkSrcLoc;
  cgxertBlkSrcLocInfo e_blkSrcLoc;
  cgxertBlkSrcLocInfo f_blkSrcLoc;
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *d_y;
  const mxArray *m;
  const mxArray *y;
  int32_T i;
  char_T c_u[45];
  char_T b_u[15];
  st.prev = sp;
  st.tls = sp->tls;
  if (innerDimB != 6) {
    if ((b_b->size[0] == 1) && (b_b->size[1] == 1)) {
      for (i = 0; i < 45; i++) {
        c_u[i] = e_u[i];
      }

      b_y = NULL;
      m = emlrtCreateCharArray(2, &iv1[0]);
      emlrtInitCharArrayR2013a(cgxertPrepareEmlrtTLS(moduleInstance->S,
        (emlrtConstCTX)sp, blkSrc->sysIdx, blkSrc->blkIdx), 45, m, &c_u[0]);
      emlrtAssign(&b_y, m);
      for (i = 0; i < 45; i++) {
        c_u[i] = e_u[i];
      }

      d_y = NULL;
      m = emlrtCreateCharArray(2, &iv3[0]);
      emlrtInitCharArrayR2013a(cgxertPrepareEmlrtTLS(moduleInstance->S,
        (emlrtConstCTX)sp, blkSrc->sysIdx, blkSrc->blkIdx), 45, m, &c_u[0]);
      emlrtAssign(&d_y, m);
      st.site = &rm_emlrtRSI;
      b_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
      b_blkSrcLoc.blkIdx = 6;
      d_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
      d_blkSrcLoc.blkIdx = 6;
      f_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
      f_blkSrcLoc.blkIdx = 6;
      b_error(moduleInstance, &st, b_y, getString(moduleInstance, &st, b_message
               (moduleInstance, &st, d_y, &x_emlrtMCI, &f_blkSrcLoc),
               &x_emlrtMCI, &b_blkSrcLoc), &x_emlrtMCI, &d_blkSrcLoc);
    } else {
      for (i = 0; i < 15; i++) {
        b_u[i] = d_u[i];
      }

      y = NULL;
      m = emlrtCreateCharArray(2, &iv[0]);
      emlrtInitCharArrayR2013a(cgxertPrepareEmlrtTLS(moduleInstance->S,
        (emlrtConstCTX)sp, blkSrc->sysIdx, blkSrc->blkIdx), 15, m, &b_u[0]);
      emlrtAssign(&y, m);
      for (i = 0; i < 15; i++) {
        b_u[i] = d_u[i];
      }

      c_y = NULL;
      m = emlrtCreateCharArray(2, &iv2[0]);
      emlrtInitCharArrayR2013a(cgxertPrepareEmlrtTLS(moduleInstance->S,
        (emlrtConstCTX)sp, blkSrc->sysIdx, blkSrc->blkIdx), 15, m, &b_u[0]);
      emlrtAssign(&c_y, m);
      st.site = &sm_emlrtRSI;
      blkSrcLoc.sysIdx = moduleInstance->sysIdx;
      blkSrcLoc.blkIdx = 6;
      c_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
      c_blkSrcLoc.blkIdx = 6;
      e_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
      e_blkSrcLoc.blkIdx = 6;
      b_error(moduleInstance, &st, y, getString(moduleInstance, &st, b_message
               (moduleInstance, &st, c_y, &w_emlrtMCI, &e_blkSrcLoc),
               &w_emlrtMCI, &blkSrcLoc), &w_emlrtMCI, &c_blkSrcLoc);
    }
  }
}

static void c_mtimes(real_T A[36], emxArray_real_T *B, emxArray_real_T *C)
{
  ptrdiff_t k_t;
  ptrdiff_t lda_t;
  ptrdiff_t ldb_t;
  ptrdiff_t ldc_t;
  ptrdiff_t m_t;
  ptrdiff_t n_t;
  real_T alpha1;
  real_T beta1;
  int32_T i;
  int32_T loop_ub;
  char_T TRANSA1;
  char_T TRANSB1;
  if ((B->size[0] == 0) || (B->size[1] == 0)) {
    i = C->size[0] * C->size[1];
    C->size[0] = 6;
    C->size[1] = B->size[1];
    emxEnsureCapacity_real_T(C, i);
    loop_ub = 6 * B->size[1];
    for (i = 0; i < loop_ub; i++) {
      C->data[i] = 0.0;
    }
  } else {
    TRANSB1 = 'N';
    TRANSA1 = 'N';
    alpha1 = 1.0;
    beta1 = 0.0;
    m_t = (ptrdiff_t)6;
    n_t = (ptrdiff_t)B->size[1];
    k_t = (ptrdiff_t)6;
    lda_t = (ptrdiff_t)6;
    ldb_t = (ptrdiff_t)B->size[0];
    ldc_t = (ptrdiff_t)6;
    i = C->size[0] * C->size[1];
    C->size[0] = 6;
    C->size[1] = B->size[1];
    emxEnsureCapacity_real_T(C, i);
    dgemm(&TRANSA1, &TRANSB1, &m_t, &n_t, &k_t, &alpha1, &A[0], &lda_t, &B->
          data[0], &ldb_t, &beta1, &C->data[0], &ldc_t);
  }
}

static void e_dynamic_size_checks(InstanceStruct_dnGfh1DX0a11xSfGnyzF5G
  *moduleInstance, const emlrtStack *sp, int32_T innerDimA, cgxertBlkSrcLocInfo *
  blkSrc)
{
  static const int32_T iv[2] = { 1, 15 };

  static const int32_T iv1[2] = { 1, 15 };

  static char_T c_u[15] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'i', 'n', 'n',
    'e', 'r', 'd', 'i', 'm' };

  cgxertBlkSrcLocInfo b_blkSrcLoc;
  cgxertBlkSrcLocInfo blkSrcLoc;
  cgxertBlkSrcLocInfo c_blkSrcLoc;
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *m;
  const mxArray *y;
  int32_T i;
  char_T b_u[15];
  st.prev = sp;
  st.tls = sp->tls;
  if (innerDimA != 6) {
    for (i = 0; i < 15; i++) {
      b_u[i] = c_u[i];
    }

    y = NULL;
    m = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a(cgxertPrepareEmlrtTLS(moduleInstance->S,
      (emlrtConstCTX)sp, blkSrc->sysIdx, blkSrc->blkIdx), 15, m, &b_u[0]);
    emlrtAssign(&y, m);
    for (i = 0; i < 15; i++) {
      b_u[i] = c_u[i];
    }

    b_y = NULL;
    m = emlrtCreateCharArray(2, &iv1[0]);
    emlrtInitCharArrayR2013a(cgxertPrepareEmlrtTLS(moduleInstance->S,
      (emlrtConstCTX)sp, blkSrc->sysIdx, blkSrc->blkIdx), 15, m, &b_u[0]);
    emlrtAssign(&b_y, m);
    st.site = &sm_emlrtRSI;
    blkSrcLoc.sysIdx = moduleInstance->sysIdx;
    blkSrcLoc.blkIdx = 6;
    b_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
    b_blkSrcLoc.blkIdx = 6;
    c_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
    c_blkSrcLoc.blkIdx = 6;
    b_error(moduleInstance, &st, y, getString(moduleInstance, &st, b_message
             (moduleInstance, &st, b_y, &w_emlrtMCI, &c_blkSrcLoc), &w_emlrtMCI,
             &blkSrcLoc), &w_emlrtMCI, &b_blkSrcLoc);
  }
}

static real_T SystemTimeProvider_getElapsedTime
  (InstanceStruct_dnGfh1DX0a11xSfGnyzF5G *moduleInstance, const emlrtStack *sp,
   robotics_core_internal_SystemTimeProvider *obj, cgxertBlkSrcLocInfo *blkSrc)
{
  static const int32_T iv[2] = { 1, 66 };

  static const int32_T iv1[2] = { 1, 66 };

  static char_T c_u[66] = { 's', 'h', 'a', 'r', 'e', 'd', '_', 'r', 'o', 'b',
    'o', 't', 'i', 'c', 's', ':', 'r', 'o', 'b', 'o', 't', 'u', 't', 'i', 'l',
    's', ':', 't', 'i', 'm', 'e', 'p', 'r', 'o', 'v', 'i', 'd', 'e', 'r', ':',
    'T', 'i', 'm', 'e', 'P', 'r', 'o', 'v', 'i', 'd', 'e', 'r', 'N', 'o', 't',
    'I', 'n', 'i', 't', 'i', 'a', 'l', 'i', 'z', 'e', 'd' };

  cgxertBlkSrcLocInfo b_blkSrcLoc;
  cgxertBlkSrcLocInfo blkSrcLoc;
  cgxertBlkSrcLocInfo c_blkSrcLoc;
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *m;
  const mxArray *y;
  char_T b_u[66];
  boolean_T valid;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &gj_emlrtRSI;
  valid = (obj->StartTime.tv_sec > 0.0);
  if (!valid) {
    memcpy(&b_u[0], &c_u[0], 66U * sizeof(char_T));
    y = NULL;
    m = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a(cgxertPrepareEmlrtTLS(moduleInstance->S,
      (emlrtConstCTX)sp, blkSrc->sysIdx, blkSrc->blkIdx), 66, m, &b_u[0]);
    emlrtAssign(&y, m);
    memcpy(&b_u[0], &c_u[0], 66U * sizeof(char_T));
    b_y = NULL;
    m = emlrtCreateCharArray(2, &iv1[0]);
    emlrtInitCharArrayR2013a(cgxertPrepareEmlrtTLS(moduleInstance->S,
      (emlrtConstCTX)sp, blkSrc->sysIdx, blkSrc->blkIdx), 66, m, &b_u[0]);
    emlrtAssign(&b_y, m);
    st.site = &gj_emlrtRSI;
    blkSrcLoc.sysIdx = moduleInstance->sysIdx;
    blkSrcLoc.blkIdx = 6;
    b_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
    b_blkSrcLoc.blkIdx = 6;
    c_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
    c_blkSrcLoc.blkIdx = 6;
    b_error(moduleInstance, &st, y, getString(moduleInstance, &st, b_message
             (moduleInstance, &st, b_y, &ab_emlrtMCI, &c_blkSrcLoc),
             &ab_emlrtMCI, &blkSrcLoc), &ab_emlrtMCI, &b_blkSrcLoc);
  }

  st.site = &hj_emlrtRSI;
  return toc(obj->StartTime.tv_sec, obj->StartTime.tv_nsec);
}

static real_T toc(real_T tstart_tv_sec, real_T tstart_tv_nsec)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  emlrtTimespec tnow;
  st.site = &ij_emlrtRSI;
  b_st.site = &sg_emlrtRSI;
  c_st.site = &tg_emlrtRSI;
  emlrtClockGettimeMonotonic(&tnow);
  return (tnow.tv_sec - tstart_tv_sec) + (tnow.tv_nsec - tstart_tv_nsec) /
    1.0E+9;
}

static real_T IKHelpers_evaluateSolution(InstanceStruct_dnGfh1DX0a11xSfGnyzF5G
  *moduleInstance, const emlrtStack *sp, robotics_manip_internal_IKExtraArgs
  *args)
{
  cgxertBlkSrcLocInfo blkSrcLoc;
  emlrtStack st;
  emxArray_real_T *b_b;
  real_T a[36];
  real_T b_a[6];
  real_T c_a;
  int32_T i;
  int32_T loop_ub;
  st.prev = sp;
  st.tls = sp->tls;
  for (i = 0; i < 36; i++) {
    a[i] = args->WeightMatrix[i];
  }

  emxInit_real_T1(&b_b, 1);
  i = b_b->size[0];
  b_b->size[0] = args->ErrTemp->size[0];
  emxEnsureCapacity_real_T1(b_b, i);
  loop_ub = args->ErrTemp->size[0];
  for (i = 0; i < loop_ub; i++) {
    b_b->data[i] = args->ErrTemp->data[i];
  }

  st.site = &th_emlrtRSI;
  blkSrcLoc.sysIdx = moduleInstance->sysIdx;
  blkSrcLoc.blkIdx = 6;
  f_dynamic_size_checks(moduleInstance, &st, b_b, b_b->size[0], &blkSrcLoc);
  for (i = 0; i < 6; i++) {
    b_a[i] = 0.0;
    for (loop_ub = 0; loop_ub < 6; loop_ub++) {
      c_a = b_a[i] + a[i + 6 * loop_ub] * b_b->data[loop_ub];
      b_a[i] = c_a;
    }
  }

  emxFree_real_T(&b_b);
  return c_norm(b_a);
}

static void f_dynamic_size_checks(InstanceStruct_dnGfh1DX0a11xSfGnyzF5G
  *moduleInstance, const emlrtStack *sp, emxArray_real_T *b_b, int32_T innerDimB,
  cgxertBlkSrcLocInfo *blkSrc)
{
  static const int32_T iv[2] = { 1, 15 };

  static const int32_T iv1[2] = { 1, 45 };

  static const int32_T iv2[2] = { 1, 15 };

  static const int32_T iv3[2] = { 1, 45 };

  static char_T e_u[45] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'm', 't', 'i', 'm', 'e', 's', '_', 'n', 'o', 'D', 'y',
    'n', 'a', 'm', 'i', 'c', 'S', 'c', 'a', 'l', 'a', 'r', 'E', 'x', 'p', 'a',
    'n', 's', 'i', 'o', 'n' };

  static char_T d_u[15] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'i', 'n', 'n',
    'e', 'r', 'd', 'i', 'm' };

  cgxertBlkSrcLocInfo b_blkSrcLoc;
  cgxertBlkSrcLocInfo blkSrcLoc;
  cgxertBlkSrcLocInfo c_blkSrcLoc;
  cgxertBlkSrcLocInfo d_blkSrcLoc;
  cgxertBlkSrcLocInfo e_blkSrcLoc;
  cgxertBlkSrcLocInfo f_blkSrcLoc;
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *d_y;
  const mxArray *m;
  const mxArray *y;
  int32_T i;
  char_T c_u[45];
  char_T b_u[15];
  st.prev = sp;
  st.tls = sp->tls;
  if (innerDimB != 6) {
    if (b_b->size[0] == 1) {
      for (i = 0; i < 45; i++) {
        c_u[i] = e_u[i];
      }

      b_y = NULL;
      m = emlrtCreateCharArray(2, &iv1[0]);
      emlrtInitCharArrayR2013a(cgxertPrepareEmlrtTLS(moduleInstance->S,
        (emlrtConstCTX)sp, blkSrc->sysIdx, blkSrc->blkIdx), 45, m, &c_u[0]);
      emlrtAssign(&b_y, m);
      for (i = 0; i < 45; i++) {
        c_u[i] = e_u[i];
      }

      d_y = NULL;
      m = emlrtCreateCharArray(2, &iv3[0]);
      emlrtInitCharArrayR2013a(cgxertPrepareEmlrtTLS(moduleInstance->S,
        (emlrtConstCTX)sp, blkSrc->sysIdx, blkSrc->blkIdx), 45, m, &c_u[0]);
      emlrtAssign(&d_y, m);
      st.site = &rm_emlrtRSI;
      b_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
      b_blkSrcLoc.blkIdx = 6;
      d_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
      d_blkSrcLoc.blkIdx = 6;
      f_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
      f_blkSrcLoc.blkIdx = 6;
      b_error(moduleInstance, &st, b_y, getString(moduleInstance, &st, b_message
               (moduleInstance, &st, d_y, &x_emlrtMCI, &f_blkSrcLoc),
               &x_emlrtMCI, &b_blkSrcLoc), &x_emlrtMCI, &d_blkSrcLoc);
    } else {
      for (i = 0; i < 15; i++) {
        b_u[i] = d_u[i];
      }

      y = NULL;
      m = emlrtCreateCharArray(2, &iv[0]);
      emlrtInitCharArrayR2013a(cgxertPrepareEmlrtTLS(moduleInstance->S,
        (emlrtConstCTX)sp, blkSrc->sysIdx, blkSrc->blkIdx), 15, m, &b_u[0]);
      emlrtAssign(&y, m);
      for (i = 0; i < 15; i++) {
        b_u[i] = d_u[i];
      }

      c_y = NULL;
      m = emlrtCreateCharArray(2, &iv2[0]);
      emlrtInitCharArrayR2013a(cgxertPrepareEmlrtTLS(moduleInstance->S,
        (emlrtConstCTX)sp, blkSrc->sysIdx, blkSrc->blkIdx), 15, m, &b_u[0]);
      emlrtAssign(&c_y, m);
      st.site = &sm_emlrtRSI;
      blkSrcLoc.sysIdx = moduleInstance->sysIdx;
      blkSrcLoc.blkIdx = 6;
      c_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
      c_blkSrcLoc.blkIdx = 6;
      e_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
      e_blkSrcLoc.blkIdx = 6;
      b_error(moduleInstance, &st, y, getString(moduleInstance, &st, b_message
               (moduleInstance, &st, c_y, &w_emlrtMCI, &e_blkSrcLoc),
               &w_emlrtMCI, &blkSrcLoc), &w_emlrtMCI, &c_blkSrcLoc);
    }
  }
}

static real_T c_norm(real_T x[6])
{
  real_T absxk;
  real_T scale;
  real_T t;
  real_T y;
  int32_T k;
  y = 0.0;
  scale = 3.3121686421112381E-170;
  for (k = 0; k < 6; k++) {
    absxk = muDoubleScalarAbs(x[k]);
    if (absxk > scale) {
      t = scale / absxk;
      y = y * t * t + 1.0;
      scale = absxk;
    } else {
      t = absxk / scale;
      y += t * t;
    }
  }

  return scale * muDoubleScalarSqrt(y);
}

static void g_dynamic_size_checks(InstanceStruct_dnGfh1DX0a11xSfGnyzF5G
  *moduleInstance, const emlrtStack *sp, emxArray_real_T *a, emxArray_real_T
  *b_b, int32_T innerDimA, int32_T innerDimB, cgxertBlkSrcLocInfo *blkSrc)
{
  static const int32_T iv[2] = { 1, 15 };

  static const int32_T iv1[2] = { 1, 45 };

  static const int32_T iv2[2] = { 1, 15 };

  static const int32_T iv3[2] = { 1, 45 };

  static char_T e_u[45] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'm', 't', 'i', 'm', 'e', 's', '_', 'n', 'o', 'D', 'y',
    'n', 'a', 'm', 'i', 'c', 'S', 'c', 'a', 'l', 'a', 'r', 'E', 'x', 'p', 'a',
    'n', 's', 'i', 'o', 'n' };

  static char_T d_u[15] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'i', 'n', 'n',
    'e', 'r', 'd', 'i', 'm' };

  cgxertBlkSrcLocInfo b_blkSrcLoc;
  cgxertBlkSrcLocInfo blkSrcLoc;
  cgxertBlkSrcLocInfo c_blkSrcLoc;
  cgxertBlkSrcLocInfo d_blkSrcLoc;
  cgxertBlkSrcLocInfo e_blkSrcLoc;
  cgxertBlkSrcLocInfo f_blkSrcLoc;
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *d_y;
  const mxArray *m;
  const mxArray *y;
  int32_T i;
  char_T c_u[45];
  char_T b_u[15];
  st.prev = sp;
  st.tls = sp->tls;
  if (innerDimA != innerDimB) {
    if (((a->size[0] == 1) && (a->size[1] == 1)) || ((b_b->size[0] == 1) &&
         (b_b->size[1] == 1))) {
      for (i = 0; i < 45; i++) {
        c_u[i] = e_u[i];
      }

      b_y = NULL;
      m = emlrtCreateCharArray(2, &iv1[0]);
      emlrtInitCharArrayR2013a(cgxertPrepareEmlrtTLS(moduleInstance->S,
        (emlrtConstCTX)sp, blkSrc->sysIdx, blkSrc->blkIdx), 45, m, &c_u[0]);
      emlrtAssign(&b_y, m);
      for (i = 0; i < 45; i++) {
        c_u[i] = e_u[i];
      }

      d_y = NULL;
      m = emlrtCreateCharArray(2, &iv3[0]);
      emlrtInitCharArrayR2013a(cgxertPrepareEmlrtTLS(moduleInstance->S,
        (emlrtConstCTX)sp, blkSrc->sysIdx, blkSrc->blkIdx), 45, m, &c_u[0]);
      emlrtAssign(&d_y, m);
      st.site = &rm_emlrtRSI;
      b_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
      b_blkSrcLoc.blkIdx = 6;
      d_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
      d_blkSrcLoc.blkIdx = 6;
      f_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
      f_blkSrcLoc.blkIdx = 6;
      b_error(moduleInstance, &st, b_y, getString(moduleInstance, &st, b_message
               (moduleInstance, &st, d_y, &x_emlrtMCI, &f_blkSrcLoc),
               &x_emlrtMCI, &b_blkSrcLoc), &x_emlrtMCI, &d_blkSrcLoc);
    } else {
      for (i = 0; i < 15; i++) {
        b_u[i] = d_u[i];
      }

      y = NULL;
      m = emlrtCreateCharArray(2, &iv[0]);
      emlrtInitCharArrayR2013a(cgxertPrepareEmlrtTLS(moduleInstance->S,
        (emlrtConstCTX)sp, blkSrc->sysIdx, blkSrc->blkIdx), 15, m, &b_u[0]);
      emlrtAssign(&y, m);
      for (i = 0; i < 15; i++) {
        b_u[i] = d_u[i];
      }

      c_y = NULL;
      m = emlrtCreateCharArray(2, &iv2[0]);
      emlrtInitCharArrayR2013a(cgxertPrepareEmlrtTLS(moduleInstance->S,
        (emlrtConstCTX)sp, blkSrc->sysIdx, blkSrc->blkIdx), 15, m, &b_u[0]);
      emlrtAssign(&c_y, m);
      st.site = &sm_emlrtRSI;
      blkSrcLoc.sysIdx = moduleInstance->sysIdx;
      blkSrcLoc.blkIdx = 6;
      c_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
      c_blkSrcLoc.blkIdx = 6;
      e_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
      e_blkSrcLoc.blkIdx = 6;
      b_error(moduleInstance, &st, y, getString(moduleInstance, &st, b_message
               (moduleInstance, &st, c_y, &w_emlrtMCI, &e_blkSrcLoc),
               &w_emlrtMCI, &blkSrcLoc), &w_emlrtMCI, &c_blkSrcLoc);
    }
  }
}

static void d_mtimes(emxArray_real_T *A, emxArray_real_T *B, emxArray_real_T *C)
{
  ptrdiff_t k_t;
  ptrdiff_t lda_t;
  ptrdiff_t ldb_t;
  ptrdiff_t ldc_t;
  ptrdiff_t m_t;
  ptrdiff_t n_t;
  real_T alpha1;
  real_T beta1;
  int32_T i;
  int32_T loop_ub;
  char_T TRANSA1;
  char_T TRANSB1;
  if ((A->size[0] == 0) || (A->size[1] == 0) || (B->size[0] == 0) || (B->size[1]
       == 0)) {
    i = C->size[0] * C->size[1];
    C->size[0] = A->size[1];
    C->size[1] = B->size[1];
    emxEnsureCapacity_real_T(C, i);
    loop_ub = A->size[1] * B->size[1];
    for (i = 0; i < loop_ub; i++) {
      C->data[i] = 0.0;
    }
  } else {
    TRANSB1 = 'N';
    TRANSA1 = 'T';
    alpha1 = 1.0;
    beta1 = 0.0;
    m_t = (ptrdiff_t)A->size[1];
    n_t = (ptrdiff_t)B->size[1];
    k_t = (ptrdiff_t)A->size[0];
    lda_t = (ptrdiff_t)A->size[0];
    ldb_t = (ptrdiff_t)B->size[0];
    ldc_t = (ptrdiff_t)A->size[1];
    i = C->size[0] * C->size[1];
    C->size[0] = A->size[1];
    C->size[1] = B->size[1];
    emxEnsureCapacity_real_T(C, i);
    dgemm(&TRANSA1, &TRANSB1, &m_t, &n_t, &k_t, &alpha1, &A->data[0], &lda_t,
          &B->data[0], &ldb_t, &beta1, &C->data[0], &ldc_t);
  }
}

static void mldivide(InstanceStruct_dnGfh1DX0a11xSfGnyzF5G *moduleInstance,
                     const emlrtStack *sp, emxArray_real_T *A, emxArray_real_T
                     *B, emxArray_real_T *Y, cgxertBlkSrcLocInfo *blkSrc)
{
  static const int32_T iv[2] = { 1, 15 };

  static const int32_T iv1[2] = { 1, 15 };

  static char_T c_u[15] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'd', 'i', 'm',
    'a', 'g', 'r', 'e', 'e' };

  cgxertBlkSrcLocInfo b_blkSrcLoc;
  cgxertBlkSrcLocInfo blkSrcLoc;
  cgxertBlkSrcLocInfo c_blkSrcLoc;
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *m;
  const mxArray *y;
  int32_T i;
  char_T b_u[15];
  st.prev = sp;
  st.tls = sp->tls;
  if (B->size[0] != A->size[0]) {
    for (i = 0; i < 15; i++) {
      b_u[i] = c_u[i];
    }

    y = NULL;
    m = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a(cgxertPrepareEmlrtTLS(moduleInstance->S,
      (emlrtConstCTX)sp, blkSrc->sysIdx, blkSrc->blkIdx), 15, m, &b_u[0]);
    emlrtAssign(&y, m);
    for (i = 0; i < 15; i++) {
      b_u[i] = c_u[i];
    }

    b_y = NULL;
    m = emlrtCreateCharArray(2, &iv1[0]);
    emlrtInitCharArrayR2013a(cgxertPrepareEmlrtTLS(moduleInstance->S,
      (emlrtConstCTX)sp, blkSrc->sysIdx, blkSrc->blkIdx), 15, m, &b_u[0]);
    emlrtAssign(&b_y, m);
    st.site = &cn_emlrtRSI;
    blkSrcLoc.sysIdx = moduleInstance->sysIdx;
    blkSrcLoc.blkIdx = 6;
    b_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
    b_blkSrcLoc.blkIdx = 6;
    c_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
    c_blkSrcLoc.blkIdx = 6;
    b_error(moduleInstance, &st, y, getString(moduleInstance, &st, b_message
             (moduleInstance, &st, b_y, &bb_emlrtMCI, &c_blkSrcLoc),
             &bb_emlrtMCI, &blkSrcLoc), &bb_emlrtMCI, &b_blkSrcLoc);
  }

  st.site = &jj_emlrtRSI;
  mldiv(moduleInstance, &st, A, B, Y);
}

static void mldiv(InstanceStruct_dnGfh1DX0a11xSfGnyzF5G *moduleInstance, const
                  emlrtStack *sp, emxArray_real_T *A, emxArray_real_T *B,
                  emxArray_real_T *Y)
{
  static const int32_T iv[2] = { 1, 6 };

  static int32_T offsets[4] = { 0, 1, 2, 3 };

  static char_T b_rfmt[6] = { '%', '1', '4', '.', '6', 'e' };

  ptrdiff_t INFO;
  ptrdiff_t LDA;
  ptrdiff_t info_t;
  cgxertBlkSrcLocInfo b_blkSrcLoc;
  cgxertBlkSrcLocInfo blkSrcLoc;
  cgxertBlkSrcLocInfo c_blkSrcLoc;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  emxArray_int32_T *jpvt;
  emxArray_ptrdiff_t *jpvt_t;
  emxArray_real_T *b_A;
  emxArray_real_T *b_B;
  emxArray_real_T *tau;
  const mxArray *b_y;
  const mxArray *m;
  const mxArray *y;
  real_T tol;
  int32_T c_B[2];
  int32_T b_i;
  int32_T b_ma;
  int32_T b_na;
  int32_T i;
  int32_T j;
  int32_T k;
  int32_T ma;
  int32_T minmn;
  int32_T na;
  uint32_T unnamed_idx_0;
  uint32_T unnamed_idx_1;
  char_T str[14];
  char_T rfmt[6];
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  emxInit_real_T(&b_A, 2);
  emxInit_real_T1(&tau, 1);
  emxInit_int32_T(&jpvt, 2);
  emxInit_ptrdiff_t(&jpvt_t, 1);
  emxInit_real_T(&b_B, 2);
  if ((A->size[0] == 0) || (A->size[1] == 0) || ((B->size[0] == 0) || (B->size[1]
        == 0))) {
    unnamed_idx_0 = (uint32_T)A->size[1];
    unnamed_idx_1 = (uint32_T)B->size[1];
    i = Y->size[0] * Y->size[1];
    Y->size[0] = (int32_T)unnamed_idx_0;
    Y->size[1] = (int32_T)unnamed_idx_1;
    emxEnsureCapacity_real_T(Y, i);
    minmn = (int32_T)unnamed_idx_0 * (int32_T)unnamed_idx_1;
    for (i = 0; i < minmn; i++) {
      Y->data[i] = 0.0;
    }
  } else if (A->size[0] == A->size[1]) {
    st.site = &kj_emlrtRSI;
    b_st.site = &nj_emlrtRSI;
    ma = A->size[0];
    na = A->size[1];
    b_na = B->size[0];
    i = muIntScalarMin_sint32(ma, na);
    b_na = muIntScalarMin_sint32(b_na, i);
    i = b_A->size[0] * b_A->size[1];
    b_A->size[0] = A->size[0];
    b_A->size[1] = A->size[1];
    emxEnsureCapacity_real_T(b_A, i);
    minmn = A->size[0] * A->size[1];
    if (minmn - 1 >= 0) {
      memcpy(&b_A->data[0], &A->data[0], (uint32_T)minmn * sizeof(real_T));
    }

    i = b_B->size[0] * b_B->size[1];
    b_B->size[0] = B->size[0];
    b_B->size[1] = B->size[1];
    emxEnsureCapacity_real_T(b_B, i);
    minmn = B->size[0] * B->size[1];
    if (minmn - 1 >= 0) {
      memcpy(&b_B->data[0], &B->data[0], (uint32_T)minmn * sizeof(real_T));
    }

    c_st.site = &oj_emlrtRSI;
    repmat((ptrdiff_t)0.0, b_na, jpvt_t);
    minmn = jpvt_t->size[0];
    i = jpvt_t->size[0];
    jpvt_t->size[0] = minmn;
    emxEnsureCapacity_ptrdiff_t(jpvt_t, i);
    info_t = (ptrdiff_t)b_na;
    LDA = (ptrdiff_t)b_A->size[0];
    INFO = LAPACKE_dgetrf_work(102, info_t, info_t, &b_A->data[0], LDA,
      &jpvt_t->data[0]);
    if ((int32_T)INFO < 0) {
      for (i = 0; i < 2; i++) {
        c_B[i] = b_B->size[i];
      }

      i = b_B->size[0] * b_B->size[1];
      b_B->size[0] = c_B[0];
      b_B->size[1] = c_B[1];
      emxEnsureCapacity_real_T(b_B, i);
      minmn = c_B[0] * c_B[1];
      for (i = 0; i < minmn; i++) {
        b_B->data[i] = rtNaN;
      }
    } else {
      LAPACKE_dgetrs_work(102, 'N', info_t, (ptrdiff_t)B->size[1], &b_A->data[0],
                          LDA, &jpvt_t->data[0], &b_B->data[0], (ptrdiff_t)
                          b_B->size[0]);
    }

    i = Y->size[0] * Y->size[1];
    Y->size[0] = b_B->size[0];
    Y->size[1] = b_B->size[1];
    emxEnsureCapacity_real_T(Y, i);
    minmn = b_B->size[0] * b_B->size[1];
    if (minmn - 1 >= 0) {
      memcpy(&Y->data[0], &b_B->data[0], (uint32_T)minmn * sizeof(real_T));
    }

    if (((A->size[0] != 1) || (A->size[1] != 1)) && ((int32_T)INFO > 0)) {
      b_st.site = &mj_emlrtRSI;
      c_st.site = &bk_emlrtRSI;
      blkSrcLoc.sysIdx = moduleInstance->sysIdx;
      blkSrcLoc.blkIdx = 6;
      b_warning(moduleInstance, &c_st, &blkSrcLoc);
    }
  } else {
    st.site = &lj_emlrtRSI;
    b_st.site = &ck_emlrtRSI;
    ma = A->size[0];
    na = A->size[1] - 1;
    i = jpvt->size[0] * jpvt->size[1];
    jpvt->size[0] = 1;
    jpvt->size[1] = A->size[1];
    emxEnsureCapacity_int32_T1(jpvt, i);
    minmn = A->size[1];
    for (i = 0; i < minmn; i++) {
      jpvt->data[i] = 0;
    }

    i = b_A->size[0] * b_A->size[1];
    b_A->size[0] = A->size[0];
    b_A->size[1] = A->size[1];
    emxEnsureCapacity_real_T(b_A, i);
    minmn = A->size[0] * A->size[1];
    if (minmn - 1 >= 0) {
      memcpy(&b_A->data[0], &A->data[0], (uint32_T)minmn * sizeof(real_T));
    }

    b_ma = b_A->size[0];
    b_na = b_A->size[1];
    b_na = muIntScalarMin_sint32(b_ma, b_na);
    i = tau->size[0];
    tau->size[0] = b_na;
    emxEnsureCapacity_real_T1(tau, i);
    i = jpvt_t->size[0];
    jpvt_t->size[0] = A->size[1];
    emxEnsureCapacity_ptrdiff_t(jpvt_t, i);
    minmn = A->size[1];
    for (i = 0; i < minmn; i++) {
      jpvt_t->data[i] = (ptrdiff_t)0;
    }

    info_t = LAPACKE_dgeqp3(102, (ptrdiff_t)A->size[0], (ptrdiff_t)A->size[1],
      &b_A->data[0], (ptrdiff_t)b_A->size[0], &jpvt_t->data[0], &tau->data[0]);
    if ((int32_T)info_t != 0) {
      for (j = 0; j <= na; j++) {
        for (b_i = 0; b_i < ma; b_i++) {
          b_A->data[j * b_ma + b_i] = rtNaN;
        }
      }

      i = na + 1;
      minmn = muIntScalarMin_sint32(ma, i) - 1;
      for (k = 0; k <= minmn; k++) {
        tau->data[k] = rtNaN;
      }

      for (k = minmn + 2; k <= b_na; k++) {
        tau->data[k - 1] = 0.0;
      }

      b_na = (na + 1) / 4 * 4;
      minmn = b_na - 4;
      for (k = 0; k <= minmn; k += 4) {
        _mm_storeu_si128((__m128i *)&jpvt->data[k], _mm_add_epi32(_mm_add_epi32
          (_mm_set1_epi32(k), _mm_loadu_si128((const __m128i *)&offsets[0])),
          _mm_set1_epi32(1)));
      }

      for (k = b_na; k <= na; k++) {
        jpvt->data[k] = k + 1;
      }
    } else {
      for (k = 0; k <= na; k++) {
        jpvt->data[k] = (int32_T)jpvt_t->data[k];
      }
    }

    b_st.site = &dk_emlrtRSI;
    na = 0;
    if (b_A->size[0] < b_A->size[1]) {
      minmn = b_A->size[0];
      b_na = b_A->size[1];
    } else {
      minmn = b_A->size[1];
      b_na = b_A->size[0];
    }

    tol = muDoubleScalarMin(1.4901161193847656E-8, 2.2204460492503131E-15 *
      (real_T)b_na) * muDoubleScalarAbs(b_A->data[0]);
    while ((na < minmn) && (!(muDoubleScalarAbs(b_A->data[na + b_A->size[0] * na])
             <= tol))) {
      na++;
    }

    if (na < minmn) {
      c_st.site = &ok_emlrtRSI;
      for (i = 0; i < 6; i++) {
        rfmt[i] = b_rfmt[i];
      }

      y = NULL;
      m = emlrtCreateCharArray(2, &iv[0]);
      emlrtInitCharArrayR2013a(cgxertPrepareEmlrtTLS(moduleInstance->S, &c_st,
        moduleInstance->sysIdx, 6), 6, m, &rfmt[0]);
      emlrtAssign(&y, m);
      b_y = NULL;
      m = emlrtCreateDoubleScalar(tol);
      emlrtAssign(&b_y, m);
      d_st.site = &mn_emlrtRSI;
      b_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
      b_blkSrcLoc.blkIdx = 6;
      emlrt_marshallIn(moduleInstance, &d_st, b_sprintf(moduleInstance, &d_st, y,
        b_y, &o_emlrtMCI, &b_blkSrcLoc), "<output of sprintf>", str);
      c_st.site = &pk_emlrtRSI;
      c_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
      c_blkSrcLoc.blkIdx = 6;
      f_warning(moduleInstance, &c_st, na, str, &c_blkSrcLoc);
    }

    b_st.site = &ek_emlrtRSI;
    ma = B->size[1] - 1;
    minmn = b_A->size[1];
    b_na = B->size[1];
    i = Y->size[0] * Y->size[1];
    Y->size[0] = minmn;
    Y->size[1] = b_na;
    emxEnsureCapacity_real_T(Y, i);
    minmn *= b_na;
    for (i = 0; i < minmn; i++) {
      Y->data[i] = 0.0;
    }

    c_st.site = &qk_emlrtRSI;
    d_st.site = &rk_emlrtRSI;
    i = b_B->size[0] * b_B->size[1];
    b_B->size[0] = B->size[0];
    b_B->size[1] = B->size[1];
    emxEnsureCapacity_real_T(b_B, i);
    minmn = B->size[0] * B->size[1];
    if (minmn - 1 >= 0) {
      memcpy(&b_B->data[0], &B->data[0], (uint32_T)minmn * sizeof(real_T));
    }

    if (b_A->size[0] < b_A->size[1]) {
      b_na = b_A->size[0];
    } else {
      b_na = b_A->size[1];
    }

    info_t = (ptrdiff_t)b_B->size[0];
    info_t = LAPACKE_dormqr(102, 'L', 'T', info_t, (ptrdiff_t)b_B->size[1],
      (ptrdiff_t)b_na, &b_A->data[0], (ptrdiff_t)b_A->size[0], &tau->data[0],
      &b_B->data[0], info_t);
    if ((int32_T)info_t != 0) {
      if (((int32_T)info_t == -10) && (b_B->size[1] > 1)) {
        minmn = b_A->size[0];
        b_ma = b_B->size[1] - 1;
        if (b_A->size[0] < b_A->size[1]) {
          b_na = b_A->size[0];
        } else {
          b_na = b_A->size[1];
        }

        for (j = 0; j < b_na; j++) {
          if (tau->data[j] != 0.0) {
            for (k = 0; k <= b_ma; k++) {
              tol = b_B->data[j + b_B->size[0] * k];
              for (b_i = j + 2; b_i <= minmn; b_i++) {
                tol += b_A->data[(b_i + b_A->size[0] * j) - 1] * b_B->data[(b_i
                  + b_B->size[0] * k) - 1];
              }

              tol *= tau->data[j];
              if (tol != 0.0) {
                b_B->data[j + b_B->size[0] * k] -= tol;
                for (b_i = j + 2; b_i <= minmn; b_i++) {
                  b_B->data[(b_i + b_B->size[0] * k) - 1] -= b_A->data[(b_i +
                    b_A->size[0] * j) - 1] * tol;
                }
              }
            }
          }
        }
      } else {
        for (i = 0; i < 2; i++) {
          c_B[i] = b_B->size[i];
        }

        i = b_B->size[0] * b_B->size[1];
        b_B->size[0] = c_B[0];
        b_B->size[1] = c_B[1];
        emxEnsureCapacity_real_T(b_B, i);
        minmn = c_B[0] * c_B[1];
        for (i = 0; i < minmn; i++) {
          b_B->data[i] = rtNaN;
        }
      }
    }

    for (k = 0; k <= ma; k++) {
      for (b_i = 0; b_i < na; b_i++) {
        Y->data[(jpvt->data[b_i] + Y->size[0] * k) - 1] = b_B->data[b_i +
          b_B->size[0] * k];
      }

      for (j = na; j >= 1; j--) {
        Y->data[(jpvt->data[j - 1] + Y->size[0] * k) - 1] /= b_A->data[(j +
          b_A->size[0] * (j - 1)) - 1];
        i = j - 2;
        for (b_i = 0; b_i <= i; b_i++) {
          Y->data[(jpvt->data[b_i] + Y->size[0] * k) - 1] -= Y->data[(jpvt->
            data[j - 1] + Y->size[0] * k) - 1] * b_A->data[b_i + b_A->size[0] *
            (j - 1)];
        }
      }
    }
  }

  emxFree_real_T(&b_B);
  emxFree_ptrdiff_t(&jpvt_t);
  emxFree_int32_T(&jpvt);
  emxFree_real_T(&tau);
  emxFree_real_T(&b_A);
}

static void repmat(ptrdiff_t a, int32_T varargin_1, emxArray_ptrdiff_t *b_b)
{
  emlrtStack st;
  int32_T i;
  st.site = &pj_emlrtRSI;
  i = b_b->size[0];
  b_b->size[0] = varargin_1;
  emxEnsureCapacity_ptrdiff_t(b_b, i);
  for (i = 0; i < varargin_1; i++) {
    b_b->data[i] = a;
  }
}

static void assert_pmaxsize(InstanceStruct_dnGfh1DX0a11xSfGnyzF5G
  *moduleInstance, const emlrtStack *sp, boolean_T p, cgxertBlkSrcLocInfo
  *blkSrc)
{
  static const int32_T iv[2] = { 1, 21 };

  static const int32_T iv1[2] = { 1, 21 };

  static char_T c_u[21] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T', 'L',
    'A', 'B', ':', 'p', 'm', 'a', 'x', 's', 'i', 'z', 'e' };

  cgxertBlkSrcLocInfo b_blkSrcLoc;
  cgxertBlkSrcLocInfo blkSrcLoc;
  cgxertBlkSrcLocInfo c_blkSrcLoc;
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *m;
  const mxArray *y;
  int32_T i;
  char_T b_u[21];
  st.prev = sp;
  st.tls = sp->tls;
  if (!p) {
    for (i = 0; i < 21; i++) {
      b_u[i] = c_u[i];
    }

    y = NULL;
    m = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a(cgxertPrepareEmlrtTLS(moduleInstance->S,
      (emlrtConstCTX)sp, blkSrc->sysIdx, blkSrc->blkIdx), 21, m, &b_u[0]);
    emlrtAssign(&y, m);
    for (i = 0; i < 21; i++) {
      b_u[i] = c_u[i];
    }

    b_y = NULL;
    m = emlrtCreateCharArray(2, &iv1[0]);
    emlrtInitCharArrayR2013a(cgxertPrepareEmlrtTLS(moduleInstance->S,
      (emlrtConstCTX)sp, blkSrc->sysIdx, blkSrc->blkIdx), 21, m, &b_u[0]);
    emlrtAssign(&b_y, m);
    st.site = &bn_emlrtRSI;
    blkSrcLoc.sysIdx = moduleInstance->sysIdx;
    blkSrcLoc.blkIdx = 6;
    b_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
    b_blkSrcLoc.blkIdx = 6;
    c_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
    c_blkSrcLoc.blkIdx = 6;
    b_error(moduleInstance, &st, y, getString(moduleInstance, &st, b_message
             (moduleInstance, &st, b_y, &db_emlrtMCI, &c_blkSrcLoc),
             &db_emlrtMCI, &blkSrcLoc), &db_emlrtMCI, &b_blkSrcLoc);
  }
}

static void f_warning(InstanceStruct_dnGfh1DX0a11xSfGnyzF5G *moduleInstance,
                      const emlrtStack *sp, int32_T varargin_1, char_T
                      varargin_2[14], cgxertBlkSrcLocInfo *blkSrc)
{
  static const int32_T iv[2] = { 1, 7 };

  static const int32_T iv1[2] = { 1, 7 };

  static const int32_T iv2[2] = { 1, 32 };

  static const int32_T iv3[2] = { 1, 14 };

  static char_T b_msgID[32] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T', 'L',
    'A', 'B', ':', 'r', 'a', 'n', 'k', 'D', 'e', 'f', 'i', 'c', 'i', 'e', 'n',
    't', 'M', 'a', 't', 'r', 'i', 'x' };

  static char_T c_u[7] = { 'w', 'a', 'r', 'n', 'i', 'n', 'g' };

  static char_T d_u[7] = { 'm', 'e', 's', 's', 'a', 'g', 'e' };

  cgxertBlkSrcLocInfo b_blkSrcLoc;
  cgxertBlkSrcLocInfo blkSrcLoc;
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *d_y;
  const mxArray *e_y;
  const mxArray *m;
  const mxArray *y;
  int32_T i;
  char_T msgID[32];
  char_T b_u[7];
  st.prev = sp;
  st.tls = sp->tls;
  for (i = 0; i < 32; i++) {
    msgID[i] = b_msgID[i];
  }

  for (i = 0; i < 7; i++) {
    b_u[i] = c_u[i];
  }

  y = NULL;
  m = emlrtCreateCharArray(2, &iv[0]);
  emlrtInitCharArrayR2013a(cgxertPrepareEmlrtTLS(moduleInstance->S,
    (emlrtConstCTX)sp, blkSrc->sysIdx, blkSrc->blkIdx), 7, m, &b_u[0]);
  emlrtAssign(&y, m);
  for (i = 0; i < 7; i++) {
    b_u[i] = d_u[i];
  }

  b_y = NULL;
  m = emlrtCreateCharArray(2, &iv1[0]);
  emlrtInitCharArrayR2013a(cgxertPrepareEmlrtTLS(moduleInstance->S,
    (emlrtConstCTX)sp, blkSrc->sysIdx, blkSrc->blkIdx), 7, m, &b_u[0]);
  emlrtAssign(&b_y, m);
  c_y = NULL;
  m = emlrtCreateCharArray(2, &iv2[0]);
  emlrtInitCharArrayR2013a(cgxertPrepareEmlrtTLS(moduleInstance->S,
    (emlrtConstCTX)sp, blkSrc->sysIdx, blkSrc->blkIdx), 32, m, &msgID[0]);
  emlrtAssign(&c_y, m);
  d_y = NULL;
  m = emlrtCreateNumericMatrix(1, 1, mxINT32_CLASS, mxREAL);
  *(int32_T *)emlrtMxGetData(m) = varargin_1;
  emlrtAssign(&d_y, m);
  e_y = NULL;
  m = emlrtCreateCharArray(2, &iv3[0]);
  emlrtInitCharArrayR2013a(cgxertPrepareEmlrtTLS(moduleInstance->S,
    (emlrtConstCTX)sp, blkSrc->sysIdx, blkSrc->blkIdx), 14, m, &varargin_2[0]);
  emlrtAssign(&e_y, m);
  st.site = &ln_emlrtRSI;
  blkSrcLoc.sysIdx = moduleInstance->sysIdx;
  blkSrcLoc.blkIdx = 6;
  b_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
  b_blkSrcLoc.blkIdx = 6;
  b_feval(moduleInstance, &st, y, d_feval(moduleInstance, &st, b_y, c_y, d_y,
           e_y, &j_emlrtMCI, &b_blkSrcLoc), &k_emlrtMCI, &blkSrcLoc);
}

static void h_dynamic_size_checks(InstanceStruct_dnGfh1DX0a11xSfGnyzF5G
  *moduleInstance, const emlrtStack *sp, emxArray_real_T *a, emxArray_real_T
  *b_b, int32_T innerDimA, int32_T innerDimB, cgxertBlkSrcLocInfo *blkSrc)
{
  static const int32_T iv[2] = { 1, 15 };

  static const int32_T iv1[2] = { 1, 45 };

  static const int32_T iv2[2] = { 1, 15 };

  static const int32_T iv3[2] = { 1, 45 };

  static char_T e_u[45] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'm', 't', 'i', 'm', 'e', 's', '_', 'n', 'o', 'D', 'y',
    'n', 'a', 'm', 'i', 'c', 'S', 'c', 'a', 'l', 'a', 'r', 'E', 'x', 'p', 'a',
    'n', 's', 'i', 'o', 'n' };

  static char_T d_u[15] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'i', 'n', 'n',
    'e', 'r', 'd', 'i', 'm' };

  cgxertBlkSrcLocInfo b_blkSrcLoc;
  cgxertBlkSrcLocInfo blkSrcLoc;
  cgxertBlkSrcLocInfo c_blkSrcLoc;
  cgxertBlkSrcLocInfo d_blkSrcLoc;
  cgxertBlkSrcLocInfo e_blkSrcLoc;
  cgxertBlkSrcLocInfo f_blkSrcLoc;
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *d_y;
  const mxArray *m;
  const mxArray *y;
  int32_T i;
  char_T c_u[45];
  char_T b_u[15];
  st.prev = sp;
  st.tls = sp->tls;
  if (innerDimA != innerDimB) {
    if (((a->size[0] == 1) && (a->size[1] == 1)) || (b_b->size[0] == 1)) {
      for (i = 0; i < 45; i++) {
        c_u[i] = e_u[i];
      }

      b_y = NULL;
      m = emlrtCreateCharArray(2, &iv1[0]);
      emlrtInitCharArrayR2013a(cgxertPrepareEmlrtTLS(moduleInstance->S,
        (emlrtConstCTX)sp, blkSrc->sysIdx, blkSrc->blkIdx), 45, m, &c_u[0]);
      emlrtAssign(&b_y, m);
      for (i = 0; i < 45; i++) {
        c_u[i] = e_u[i];
      }

      d_y = NULL;
      m = emlrtCreateCharArray(2, &iv3[0]);
      emlrtInitCharArrayR2013a(cgxertPrepareEmlrtTLS(moduleInstance->S,
        (emlrtConstCTX)sp, blkSrc->sysIdx, blkSrc->blkIdx), 45, m, &c_u[0]);
      emlrtAssign(&d_y, m);
      st.site = &rm_emlrtRSI;
      b_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
      b_blkSrcLoc.blkIdx = 6;
      d_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
      d_blkSrcLoc.blkIdx = 6;
      f_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
      f_blkSrcLoc.blkIdx = 6;
      b_error(moduleInstance, &st, b_y, getString(moduleInstance, &st, b_message
               (moduleInstance, &st, d_y, &x_emlrtMCI, &f_blkSrcLoc),
               &x_emlrtMCI, &b_blkSrcLoc), &x_emlrtMCI, &d_blkSrcLoc);
    } else {
      for (i = 0; i < 15; i++) {
        b_u[i] = d_u[i];
      }

      y = NULL;
      m = emlrtCreateCharArray(2, &iv[0]);
      emlrtInitCharArrayR2013a(cgxertPrepareEmlrtTLS(moduleInstance->S,
        (emlrtConstCTX)sp, blkSrc->sysIdx, blkSrc->blkIdx), 15, m, &b_u[0]);
      emlrtAssign(&y, m);
      for (i = 0; i < 15; i++) {
        b_u[i] = d_u[i];
      }

      c_y = NULL;
      m = emlrtCreateCharArray(2, &iv2[0]);
      emlrtInitCharArrayR2013a(cgxertPrepareEmlrtTLS(moduleInstance->S,
        (emlrtConstCTX)sp, blkSrc->sysIdx, blkSrc->blkIdx), 15, m, &b_u[0]);
      emlrtAssign(&c_y, m);
      st.site = &sm_emlrtRSI;
      blkSrcLoc.sysIdx = moduleInstance->sysIdx;
      blkSrcLoc.blkIdx = 6;
      c_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
      c_blkSrcLoc.blkIdx = 6;
      e_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
      e_blkSrcLoc.blkIdx = 6;
      b_error(moduleInstance, &st, y, getString(moduleInstance, &st, b_message
               (moduleInstance, &st, c_y, &w_emlrtMCI, &e_blkSrcLoc),
               &w_emlrtMCI, &blkSrcLoc), &w_emlrtMCI, &c_blkSrcLoc);
    }
  }
}

static void e_mtimes(emxArray_real_T *A, emxArray_real_T *B, emxArray_real_T *C)
{
  ptrdiff_t k_t;
  ptrdiff_t lda_t;
  ptrdiff_t ldb_t;
  ptrdiff_t ldc_t;
  ptrdiff_t m_t;
  ptrdiff_t n_t;
  real_T alpha1;
  real_T beta1;
  int32_T i;
  int32_T loop_ub;
  char_T TRANSA1;
  char_T TRANSB1;
  if ((A->size[0] == 0) || (A->size[1] == 0) || (B->size[0] == 0)) {
    i = C->size[0];
    C->size[0] = A->size[0];
    emxEnsureCapacity_real_T1(C, i);
    loop_ub = A->size[0];
    for (i = 0; i < loop_ub; i++) {
      C->data[i] = 0.0;
    }
  } else {
    TRANSB1 = 'N';
    TRANSA1 = 'N';
    alpha1 = 1.0;
    beta1 = 0.0;
    m_t = (ptrdiff_t)A->size[0];
    n_t = (ptrdiff_t)1;
    k_t = (ptrdiff_t)A->size[1];
    lda_t = (ptrdiff_t)A->size[0];
    ldb_t = (ptrdiff_t)B->size[0];
    ldc_t = (ptrdiff_t)A->size[0];
    i = C->size[0];
    C->size[0] = A->size[0];
    emxEnsureCapacity_real_T1(C, i);
    dgemm(&TRANSA1, &TRANSB1, &m_t, &n_t, &k_t, &alpha1, &A->data[0], &lda_t,
          &B->data[0], &ldb_t, &beta1, &C->data[0], &ldc_t);
  }
}

static boolean_T DampedBFGSwGradientProjection_atLocalMinimum
  (InstanceStruct_dnGfh1DX0a11xSfGnyzF5G *moduleInstance, const emlrtStack *sp,
   robotics_core_internal_DampedBFGSwGradientProjection *obj, real_T Hg[6],
   emxArray_real_T *alpha)
{
  emlrtStack st;
  emxArray_boolean_T *b_alpha;
  int32_T i;
  int32_T loop_ub;
  boolean_T flag;
  st.prev = sp;
  st.tls = sp->tls;
  emxInit_boolean_T(&b_alpha, 1);
  if (c_norm(Hg) < obj->GradientTolerance) {
    i = b_alpha->size[0];
    b_alpha->size[0] = alpha->size[0];
    emxEnsureCapacity_boolean_T(b_alpha, i);
    loop_ub = alpha->size[0];
    for (i = 0; i < loop_ub; i++) {
      b_alpha->data[i] = (alpha->data[i] <= 0.0);
    }

    st.site = &sk_emlrtRSI;
    if (all(moduleInstance, &st, b_alpha)) {
      flag = true;
    } else {
      flag = false;
    }
  } else {
    flag = false;
  }

  emxFree_boolean_T(&b_alpha);
  return flag;
}

static boolean_T all(InstanceStruct_dnGfh1DX0a11xSfGnyzF5G *moduleInstance,
                     const emlrtStack *sp, emxArray_boolean_T *x)
{
  static const int32_T iv[2] = { 1, 51 };

  static const int32_T iv1[2] = { 1, 51 };

  static char_T c_u[51] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'e', 'm', 'l', '_', 'a', 'l', 'l', '_', 'o', 'r', '_',
    'a', 'n', 'y', '_', 'a', 'u', 't', 'o', 'D', 'i', 'm', 'I', 'n', 'c', 'o',
    'm', 'p', 'a', 't', 'i', 'b', 'i', 'l', 'i', 't', 'y' };

  cgxertBlkSrcLocInfo b_blkSrcLoc;
  cgxertBlkSrcLocInfo blkSrcLoc;
  cgxertBlkSrcLocInfo c_blkSrcLoc;
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *m;
  int32_T ix;
  char_T b_u[51];
  boolean_T exitg1;
  boolean_T y;
  st.prev = sp;
  st.tls = sp->tls;
  if ((x->size[0] == 1) || (x->size[0] != 1)) {
  } else {
    for (ix = 0; ix < 51; ix++) {
      b_u[ix] = c_u[ix];
    }

    b_y = NULL;
    m = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a(cgxertPrepareEmlrtTLS(moduleInstance->S,
      (emlrtConstCTX)sp, moduleInstance->sysIdx, 6), 51, m, &b_u[0]);
    emlrtAssign(&b_y, m);
    for (ix = 0; ix < 51; ix++) {
      b_u[ix] = c_u[ix];
    }

    c_y = NULL;
    m = emlrtCreateCharArray(2, &iv1[0]);
    emlrtInitCharArrayR2013a(cgxertPrepareEmlrtTLS(moduleInstance->S,
      (emlrtConstCTX)sp, moduleInstance->sysIdx, 6), 51, m, &b_u[0]);
    emlrtAssign(&c_y, m);
    st.site = &vm_emlrtRSI;
    blkSrcLoc.sysIdx = moduleInstance->sysIdx;
    blkSrcLoc.blkIdx = 6;
    b_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
    b_blkSrcLoc.blkIdx = 6;
    c_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
    c_blkSrcLoc.blkIdx = 6;
    b_error(moduleInstance, &st, b_y, getString(moduleInstance, &st, b_message
             (moduleInstance, &st, c_y, &fb_emlrtMCI, &c_blkSrcLoc),
             &fb_emlrtMCI, &blkSrcLoc), &fb_emlrtMCI, &b_blkSrcLoc);
  }

  y = true;
  ix = 0;
  exitg1 = false;
  while ((!exitg1) && (ix + 1 <= x->size[0])) {
    if (!x->data[ix]) {
      y = false;
      exitg1 = true;
    } else {
      ix++;
    }
  }

  return y;
}

static void b_inv(InstanceStruct_dnGfh1DX0a11xSfGnyzF5G *moduleInstance, const
                  emlrtStack *sp, emxArray_real_T *x, emxArray_real_T *y,
                  cgxertBlkSrcLocInfo *blkSrc)
{
  static const int32_T iv[2] = { 1, 19 };

  static const int32_T iv1[2] = { 1, 19 };

  static const int32_T iv2[2] = { 1, 6 };

  static int32_T offsets[4] = { 0, 1, 2, 3 };

  static char_T c_u[19] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T', 'L',
    'A', 'B', ':', 's', 'q', 'u', 'a', 'r', 'e' };

  static char_T b_rfmt[6] = { '%', '1', '4', '.', '6', 'e' };

  ptrdiff_t info_t;
  ptrdiff_t lda_t;
  ptrdiff_t ldb_t;
  ptrdiff_t n_t;
  cgxertBlkSrcLocInfo b_blkSrcLoc;
  cgxertBlkSrcLocInfo blkSrcLoc;
  cgxertBlkSrcLocInfo c_blkSrcLoc;
  cgxertBlkSrcLocInfo d_blkSrcLoc;
  cgxertBlkSrcLocInfo e_blkSrcLoc;
  cgxertBlkSrcLocInfo f_blkSrcLoc;
  cgxertBlkSrcLocInfo g_blkSrcLoc;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack st;
  emxArray_int32_T *ipiv;
  emxArray_int32_T *p;
  emxArray_ptrdiff_t *ipiv_t;
  emxArray_real_T *A;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *d_y;
  const mxArray *e_y;
  const mxArray *m;
  real_T n1x;
  real_T n1xinv;
  real_T rc;
  int32_T b_A[2];
  int32_T b_n;
  int32_T i;
  int32_T k;
  int32_T n;
  int32_T yk;
  char_T b_u[19];
  char_T str[14];
  char_T rfmt[6];
  char_T DIAGA1;
  char_T SIDE1;
  char_T TRANSA1;
  char_T UPLO1;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  if (x->size[0] != x->size[1]) {
    for (i = 0; i < 19; i++) {
      b_u[i] = c_u[i];
    }

    b_y = NULL;
    m = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a(cgxertPrepareEmlrtTLS(moduleInstance->S,
      (emlrtConstCTX)sp, blkSrc->sysIdx, blkSrc->blkIdx), 19, m, &b_u[0]);
    emlrtAssign(&b_y, m);
    for (i = 0; i < 19; i++) {
      b_u[i] = c_u[i];
    }

    c_y = NULL;
    m = emlrtCreateCharArray(2, &iv1[0]);
    emlrtInitCharArrayR2013a(cgxertPrepareEmlrtTLS(moduleInstance->S,
      (emlrtConstCTX)sp, blkSrc->sysIdx, blkSrc->blkIdx), 19, m, &b_u[0]);
    emlrtAssign(&c_y, m);
    st.site = &an_emlrtRSI;
    blkSrcLoc.sysIdx = moduleInstance->sysIdx;
    blkSrcLoc.blkIdx = 6;
    b_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
    b_blkSrcLoc.blkIdx = 6;
    c_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
    c_blkSrcLoc.blkIdx = 6;
    b_error(moduleInstance, &st, b_y, getString(moduleInstance, &st, b_message
             (moduleInstance, &st, c_y, &gb_emlrtMCI, &c_blkSrcLoc),
             &gb_emlrtMCI, &blkSrcLoc), &gb_emlrtMCI, &b_blkSrcLoc);
  }

  if ((x->size[0] == 0) || (x->size[1] == 0)) {
    i = y->size[0] * y->size[1];
    y->size[0] = x->size[0];
    y->size[1] = x->size[1];
    emxEnsureCapacity_real_T(y, i);
    yk = x->size[0] * x->size[1];
    if (yk - 1 >= 0) {
      memcpy(&y->data[0], &x->data[0], (uint32_T)yk * sizeof(real_T));
    }
  } else {
    st.site = &tk_emlrtRSI;
    n = x->size[0];
    i = y->size[0] * y->size[1];
    y->size[0] = x->size[0];
    y->size[1] = x->size[1];
    emxEnsureCapacity_real_T(y, i);
    yk = x->size[0] * x->size[1];
    for (i = 0; i < yk; i++) {
      y->data[i] = 0.0;
    }

    b_st.site = &vk_emlrtRSI;
    emxInit_real_T(&A, 2);
    i = A->size[0] * A->size[1];
    A->size[0] = x->size[0];
    A->size[1] = x->size[1];
    emxEnsureCapacity_real_T(A, i);
    yk = x->size[0] * x->size[1];
    if (yk - 1 >= 0) {
      memcpy(&A->data[0], &x->data[0], (uint32_T)yk * sizeof(real_T));
    }

    emxInit_ptrdiff_t(&ipiv_t, 1);
    c_st.site = &rj_emlrtRSI;
    repmat((ptrdiff_t)0.0, muIntScalarMin_sint32(n, n), ipiv_t);
    yk = ipiv_t->size[0];
    i = ipiv_t->size[0];
    ipiv_t->size[0] = yk;
    emxEnsureCapacity_ptrdiff_t(ipiv_t, i);
    info_t = LAPACKE_dgetrf_work(102, (ptrdiff_t)x->size[0], (ptrdiff_t)x->size
      [0], &A->data[0], (ptrdiff_t)x->size[0], &ipiv_t->data[0]);
    emxInit_int32_T(&ipiv, 2);
    i = ipiv->size[0] * ipiv->size[1];
    ipiv->size[0] = 1;
    ipiv->size[1] = ipiv_t->size[0];
    emxEnsureCapacity_int32_T1(ipiv, i);
    if ((int32_T)info_t < 0) {
      for (i = 0; i < 2; i++) {
        b_A[i] = A->size[i];
      }

      i = A->size[0] * A->size[1];
      A->size[0] = b_A[0];
      A->size[1] = b_A[1];
      emxEnsureCapacity_real_T(A, i);
      yk = b_A[0] * b_A[1];
      for (i = 0; i < yk; i++) {
        A->data[i] = rtNaN;
      }

      i = ipiv->size[1];
      yk = i / 4 * 4;
      b_n = yk - 4;
      for (k = 0; k <= b_n; k += 4) {
        _mm_storeu_si128((__m128i *)&ipiv->data[k], _mm_add_epi32(_mm_add_epi32
          (_mm_set1_epi32(k), _mm_loadu_si128((const __m128i *)&offsets[0])),
          _mm_set1_epi32(1)));
      }

      for (k = yk; k < i; k++) {
        ipiv->data[k] = k + 1;
      }
    } else {
      i = ipiv->size[1];
      for (k = 0; k < i; k++) {
        ipiv->data[k] = (int32_T)ipiv_t->data[k];
      }
    }

    emxFree_ptrdiff_t(&ipiv_t);
    b_st.site = &wk_emlrtRSI;
    c_st.site = &sj_emlrtRSI;
    d_st.site = &tj_emlrtRSI;
    e_st.site = &uj_emlrtRSI;
    d_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
    d_blkSrcLoc.blkIdx = 6;
    assert_pmaxsize(moduleInstance, &e_st, true, &d_blkSrcLoc);
    b_n = x->size[0];
    emxInit_int32_T(&p, 2);
    i = p->size[0] * p->size[1];
    p->size[0] = 1;
    p->size[1] = b_n;
    emxEnsureCapacity_int32_T1(p, i);
    p->data[0] = 1;
    yk = 1;
    for (k = 2; k <= b_n; k++) {
      yk++;
      p->data[k - 1] = yk;
    }

    i = ipiv->size[1] - 1;
    for (k = 0; k <= i; k++) {
      if (ipiv->data[k] > k + 1) {
        yk = p->data[ipiv->data[k] - 1];
        p->data[ipiv->data[k] - 1] = p->data[k];
        p->data[k] = yk;
      }
    }

    emxFree_int32_T(&ipiv);
    for (k = 0; k < n; k++) {
      yk = p->data[k] - 1;
      y->data[k + y->size[0] * (p->data[k] - 1)] = 1.0;
      for (b_n = k + 1; b_n <= n; b_n++) {
        if (y->data[(b_n + y->size[0] * yk) - 1] != 0.0) {
          for (i = b_n + 1; i <= n; i++) {
            y->data[(i + y->size[0] * yk) - 1] -= y->data[(b_n + y->size[0] * yk)
              - 1] * A->data[(i + A->size[0] * (b_n - 1)) - 1];
          }
        }
      }
    }

    emxFree_int32_T(&p);
    b_st.site = &xk_emlrtRSI;
    n1x = 1.0;
    DIAGA1 = 'N';
    TRANSA1 = 'N';
    UPLO1 = 'U';
    SIDE1 = 'L';
    info_t = (ptrdiff_t)x->size[0];
    n_t = (ptrdiff_t)x->size[0];
    lda_t = (ptrdiff_t)x->size[0];
    ldb_t = (ptrdiff_t)x->size[0];
    dtrsm(&SIDE1, &UPLO1, &TRANSA1, &DIAGA1, &info_t, &n_t, &n1x, &A->data[0],
          &lda_t, &y->data[0], &ldb_t);
    emxFree_real_T(&A);
    st.site = &uk_emlrtRSI;
    n1x = d_norm(x);
    n1xinv = d_norm(y);
    rc = 1.0 / (n1x * n1xinv);
    if ((n1x == 0.0) || (n1xinv == 0.0) || (rc == 0.0)) {
      b_st.site = &vf_emlrtRSI;
      e_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
      e_blkSrcLoc.blkIdx = 6;
      b_warning(moduleInstance, &b_st, &e_blkSrcLoc);
    } else if (muDoubleScalarIsNaN(rc) || (rc < 2.2204460492503131E-16)) {
      b_st.site = &wf_emlrtRSI;
      for (i = 0; i < 6; i++) {
        rfmt[i] = b_rfmt[i];
      }

      d_y = NULL;
      m = emlrtCreateCharArray(2, &iv2[0]);
      emlrtInitCharArrayR2013a(cgxertPrepareEmlrtTLS(moduleInstance->S, &b_st,
        moduleInstance->sysIdx, 6), 6, m, &rfmt[0]);
      emlrtAssign(&d_y, m);
      e_y = NULL;
      m = emlrtCreateDoubleScalar(rc);
      emlrtAssign(&e_y, m);
      c_st.site = &mn_emlrtRSI;
      f_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
      f_blkSrcLoc.blkIdx = 6;
      emlrt_marshallIn(moduleInstance, &c_st, b_sprintf(moduleInstance, &c_st,
        d_y, e_y, &o_emlrtMCI, &f_blkSrcLoc), "<output of sprintf>", str);
      b_st.site = &wf_emlrtRSI;
      g_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
      g_blkSrcLoc.blkIdx = 6;
      c_warning(moduleInstance, &b_st, str, &g_blkSrcLoc);
    }
  }
}

static real_T d_norm(emxArray_real_T *x)
{
  real_T s;
  real_T y;
  int32_T b_i;
  int32_T i;
  int32_T k;
  boolean_T MATRIX_INPUT_AND_P_IS_ONE;
  boolean_T VECTOR_INPUT_AND_P_IS_NUMERIC;
  boolean_T exitg1;
  VECTOR_INPUT_AND_P_IS_NUMERIC = false;
  MATRIX_INPUT_AND_P_IS_ONE = false;
  if ((x->size[0] == 1) || (x->size[1] == 1)) {
    VECTOR_INPUT_AND_P_IS_NUMERIC = true;
  } else {
    MATRIX_INPUT_AND_P_IS_ONE = true;
  }

  if ((x->size[0] == 0) || (x->size[1] == 0)) {
    y = 0.0;
  } else if (MATRIX_INPUT_AND_P_IS_ONE) {
    y = 0.0;
    k = 0;
    exitg1 = false;
    while ((!exitg1) && (k <= x->size[1] - 1)) {
      s = 0.0;
      i = x->size[0] - 1;
      for (b_i = 0; b_i <= i; b_i++) {
        s += muDoubleScalarAbs(x->data[b_i + x->size[0] * k]);
      }

      if (muDoubleScalarIsNaN(s)) {
        y = rtNaN;
        exitg1 = true;
      } else {
        if (s > y) {
          y = s;
        }

        k++;
      }
    }
  } else if (VECTOR_INPUT_AND_P_IS_NUMERIC) {
    y = 0.0;
    i = x->size[0] * x->size[1] - 1;
    for (k = 0; k <= i; k++) {
      y += muDoubleScalarAbs(x->data[k]);
    }
  } else {
    y = rtNaN;
  }

  return y;
}

static void diag(InstanceStruct_dnGfh1DX0a11xSfGnyzF5G *moduleInstance, const
                 emlrtStack *sp, emxArray_real_T *v, emxArray_real_T *d,
                 cgxertBlkSrcLocInfo *blkSrc)
{
  static const int32_T iv[2] = { 1, 39 };

  static const int32_T iv1[2] = { 1, 39 };

  static char_T c_u[39] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'd', 'i', 'a', 'g', '_', 'v', 'a', 'r', 's', 'i', 'z',
    'e', 'd', 'M', 'a', 't', 'r', 'i', 'x', 'V', 'e', 'c', 't', 'o', 'r' };

  cgxertBlkSrcLocInfo b_blkSrcLoc;
  cgxertBlkSrcLocInfo blkSrcLoc;
  cgxertBlkSrcLocInfo c_blkSrcLoc;
  emlrtStack st;
  const mxArray *b_m;
  const mxArray *b_y;
  const mxArray *y;
  int32_T m;
  int32_T n;
  char_T b_u[39];
  st.prev = sp;
  st.tls = sp->tls;
  if ((v->size[0] == 1) && (v->size[1] == 1)) {
    n = d->size[0];
    d->size[0] = 1;
    emxEnsureCapacity_real_T1(d, n);
    d->data[0] = v->data[0];
  } else {
    if (!((v->size[0] != 1) && (v->size[1] != 1))) {
      for (n = 0; n < 39; n++) {
        b_u[n] = c_u[n];
      }

      y = NULL;
      b_m = emlrtCreateCharArray(2, &iv[0]);
      emlrtInitCharArrayR2013a(cgxertPrepareEmlrtTLS(moduleInstance->S,
        (emlrtConstCTX)sp, blkSrc->sysIdx, blkSrc->blkIdx), 39, b_m, &b_u[0]);
      emlrtAssign(&y, b_m);
      for (n = 0; n < 39; n++) {
        b_u[n] = c_u[n];
      }

      b_y = NULL;
      b_m = emlrtCreateCharArray(2, &iv1[0]);
      emlrtInitCharArrayR2013a(cgxertPrepareEmlrtTLS(moduleInstance->S,
        (emlrtConstCTX)sp, blkSrc->sysIdx, blkSrc->blkIdx), 39, b_m, &b_u[0]);
      emlrtAssign(&b_y, b_m);
      st.site = &ym_emlrtRSI;
      blkSrcLoc.sysIdx = moduleInstance->sysIdx;
      blkSrcLoc.blkIdx = 6;
      b_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
      b_blkSrcLoc.blkIdx = 6;
      c_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
      c_blkSrcLoc.blkIdx = 6;
      b_error(moduleInstance, &st, y, getString(moduleInstance, &st, b_message
               (moduleInstance, &st, b_y, &hb_emlrtMCI, &c_blkSrcLoc),
               &hb_emlrtMCI, &blkSrcLoc), &hb_emlrtMCI, &b_blkSrcLoc);
    }

    m = v->size[0];
    n = v->size[1];
    if (v->size[1] > 0) {
      m = muIntScalarMin_sint32(m, n);
    } else {
      m = 0;
    }

    n = d->size[0];
    d->size[0] = m;
    emxEnsureCapacity_real_T1(d, n);
    for (n = 0; n < m; n++) {
      d->data[n] = v->data[n + v->size[0] * n];
    }
  }
}

static void assertCompatibleDims(InstanceStruct_dnGfh1DX0a11xSfGnyzF5G
  *moduleInstance, const emlrtStack *sp, emxArray_real_T *x, emxArray_real_T *y,
  cgxertBlkSrcLocInfo *blkSrc)
{
  static const int32_T iv[2] = { 1, 30 };

  static const int32_T iv1[2] = { 1, 30 };

  static char_T c_u[30] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'i', 'z',
    'e', 'D', 'i', 'm', 'e', 'n', 's', 'i', 'o', 'n', 's', 'M', 'u', 's', 't',
    'M', 'a', 't', 'c', 'h' };

  cgxertBlkSrcLocInfo b_blkSrcLoc;
  cgxertBlkSrcLocInfo blkSrcLoc;
  cgxertBlkSrcLocInfo c_blkSrcLoc;
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *m;
  int32_T i;
  char_T b_u[30];
  st.prev = sp;
  st.tls = sp->tls;
  if ((x->size[0] == 1) || (y->size[0] == 1) || (x->size[0] == y->size[0])) {
  } else {
    for (i = 0; i < 30; i++) {
      b_u[i] = c_u[i];
    }

    b_y = NULL;
    m = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a(cgxertPrepareEmlrtTLS(moduleInstance->S,
      (emlrtConstCTX)sp, blkSrc->sysIdx, blkSrc->blkIdx), 30, m, &b_u[0]);
    emlrtAssign(&b_y, m);
    for (i = 0; i < 30; i++) {
      b_u[i] = c_u[i];
    }

    c_y = NULL;
    m = emlrtCreateCharArray(2, &iv1[0]);
    emlrtInitCharArrayR2013a(cgxertPrepareEmlrtTLS(moduleInstance->S,
      (emlrtConstCTX)sp, blkSrc->sysIdx, blkSrc->blkIdx), 30, m, &b_u[0]);
    emlrtAssign(&c_y, m);
    st.site = &xm_emlrtRSI;
    blkSrcLoc.sysIdx = moduleInstance->sysIdx;
    blkSrcLoc.blkIdx = 6;
    b_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
    b_blkSrcLoc.blkIdx = 6;
    c_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
    c_blkSrcLoc.blkIdx = 6;
    b_error(moduleInstance, &st, b_y, getString(moduleInstance, &st, b_message
             (moduleInstance, &st, c_y, &ib_emlrtMCI, &c_blkSrcLoc),
             &ib_emlrtMCI, &blkSrcLoc), &ib_emlrtMCI, &b_blkSrcLoc);
  }
}

static void maximum(InstanceStruct_dnGfh1DX0a11xSfGnyzF5G *moduleInstance, const
                    emlrtStack *sp, emxArray_real_T *x, real_T *ex, int32_T *idx)
{
  static const int32_T iv[2] = { 1, 36 };

  static const int32_T iv1[2] = { 1, 39 };

  static const int32_T iv2[2] = { 1, 36 };

  static const int32_T iv3[2] = { 1, 39 };

  static char_T e_u[39] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'e', 'm', 'l', '_', 'm', 'i', 'n', '_', 'o', 'r', '_',
    'm', 'a', 'x', '_', 'v', 'a', 'r', 'D', 'i', 'm', 'Z', 'e', 'r', 'o' };

  static char_T d_u[36] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'a', 'u', 't', 'o', 'D', 'i', 'm', 'I', 'n', 'c', 'o',
    'm', 'p', 'a', 't', 'i', 'b', 'i', 'l', 'i', 't', 'y' };

  cgxertBlkSrcLocInfo b_blkSrcLoc;
  cgxertBlkSrcLocInfo blkSrcLoc;
  cgxertBlkSrcLocInfo c_blkSrcLoc;
  cgxertBlkSrcLocInfo d_blkSrcLoc;
  cgxertBlkSrcLocInfo e_blkSrcLoc;
  cgxertBlkSrcLocInfo f_blkSrcLoc;
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *d_y;
  const mxArray *m;
  const mxArray *y;
  int32_T b_idx;
  int32_T k;
  int32_T last;
  char_T c_u[39];
  char_T b_u[36];
  boolean_T exitg1;
  st.prev = sp;
  st.tls = sp->tls;
  if ((x->size[0] == 1) || (x->size[0] != 1)) {
  } else {
    for (last = 0; last < 36; last++) {
      b_u[last] = d_u[last];
    }

    y = NULL;
    m = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a(cgxertPrepareEmlrtTLS(moduleInstance->S,
      (emlrtConstCTX)sp, moduleInstance->sysIdx, 6), 36, m, &b_u[0]);
    emlrtAssign(&y, m);
    for (last = 0; last < 36; last++) {
      b_u[last] = d_u[last];
    }

    c_y = NULL;
    m = emlrtCreateCharArray(2, &iv2[0]);
    emlrtInitCharArrayR2013a(cgxertPrepareEmlrtTLS(moduleInstance->S,
      (emlrtConstCTX)sp, moduleInstance->sysIdx, 6), 36, m, &b_u[0]);
    emlrtAssign(&c_y, m);
    st.site = &um_emlrtRSI;
    blkSrcLoc.sysIdx = moduleInstance->sysIdx;
    blkSrcLoc.blkIdx = 6;
    b_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
    b_blkSrcLoc.blkIdx = 6;
    d_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
    d_blkSrcLoc.blkIdx = 6;
    b_error(moduleInstance, &st, y, getString(moduleInstance, &st, b_message
             (moduleInstance, &st, c_y, &jb_emlrtMCI, &d_blkSrcLoc),
             &jb_emlrtMCI, &blkSrcLoc), &jb_emlrtMCI, &b_blkSrcLoc);
  }

  if (!(x->size[0] >= 1)) {
    for (last = 0; last < 39; last++) {
      c_u[last] = e_u[last];
    }

    b_y = NULL;
    m = emlrtCreateCharArray(2, &iv1[0]);
    emlrtInitCharArrayR2013a(cgxertPrepareEmlrtTLS(moduleInstance->S,
      (emlrtConstCTX)sp, moduleInstance->sysIdx, 6), 39, m, &c_u[0]);
    emlrtAssign(&b_y, m);
    for (last = 0; last < 39; last++) {
      c_u[last] = e_u[last];
    }

    d_y = NULL;
    m = emlrtCreateCharArray(2, &iv3[0]);
    emlrtInitCharArrayR2013a(cgxertPrepareEmlrtTLS(moduleInstance->S,
      (emlrtConstCTX)sp, moduleInstance->sysIdx, 6), 39, m, &c_u[0]);
    emlrtAssign(&d_y, m);
    st.site = &tm_emlrtRSI;
    c_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
    c_blkSrcLoc.blkIdx = 6;
    e_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
    e_blkSrcLoc.blkIdx = 6;
    f_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
    f_blkSrcLoc.blkIdx = 6;
    b_error(moduleInstance, &st, b_y, getString(moduleInstance, &st, b_message
             (moduleInstance, &st, d_y, &kb_emlrtMCI, &f_blkSrcLoc),
             &kb_emlrtMCI, &c_blkSrcLoc), &kb_emlrtMCI, &e_blkSrcLoc);
  }

  last = x->size[0];
  if (x->size[0] <= 2) {
    if (x->size[0] == 1) {
      *ex = x->data[0];
      *idx = 1;
    } else if ((x->data[0] < x->data[x->size[0] - 1]) || (muDoubleScalarIsNaN
                (x->data[0]) && (!muDoubleScalarIsNaN(x->data[x->size[0] - 1]))))
    {
      *ex = x->data[x->size[0] - 1];
      *idx = x->size[0];
    } else {
      *ex = x->data[0];
      *idx = 1;
    }
  } else {
    if (!muDoubleScalarIsNaN(x->data[0])) {
      *idx = 1;
    } else {
      *idx = 0;
      k = 2;
      exitg1 = false;
      while ((!exitg1) && (k <= last)) {
        if (!muDoubleScalarIsNaN(x->data[k - 1])) {
          *idx = k;
          exitg1 = true;
        } else {
          k++;
        }
      }
    }

    if (*idx == 0) {
      *ex = x->data[0];
      *idx = 1;
    } else {
      *ex = x->data[*idx - 1];
      b_idx = *idx;
      for (k = *idx + 1; k <= last; k++) {
        if (*ex < x->data[k - 1]) {
          *ex = x->data[k - 1];
          b_idx = k;
        }
      }

      *idx = b_idx;
    }
  }
}

static void b_eml_find(InstanceStruct_dnGfh1DX0a11xSfGnyzF5G *moduleInstance,
  const emlrtStack *sp, emxArray_boolean_T *x, emxArray_int32_T *i)
{
  static const int32_T iv1[2] = { 1, 30 };

  static const int32_T iv2[2] = { 1, 30 };

  static char_T c_u[30] = { 'C', 'o', 'd', 'e', 'r', ':', 'b', 'u', 'i', 'l',
    't', 'i', 'n', 's', ':', 'A', 's', 's', 'e', 'r', 't', 'i', 'o', 'n', 'F',
    'a', 'i', 'l', 'e', 'd' };

  cgxertBlkSrcLocInfo b_blkSrcLoc;
  cgxertBlkSrcLocInfo blkSrcLoc;
  cgxertBlkSrcLocInfo c_blkSrcLoc;
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *m;
  const mxArray *y;
  int32_T iv[2];
  int32_T idx;
  int32_T ii;
  int32_T nx;
  char_T b_u[30];
  boolean_T exitg1;
  st.prev = sp;
  st.tls = sp->tls;
  nx = x->size[0];
  idx = 0;
  ii = i->size[0];
  i->size[0] = x->size[0];
  emxEnsureCapacity_int32_T(i, ii);
  ii = 1;
  exitg1 = false;
  while ((!exitg1) && (ii - 1 <= nx - 1)) {
    if (x->data[ii - 1]) {
      idx++;
      i->data[idx - 1] = ii;
      if (idx >= nx) {
        exitg1 = true;
      } else {
        ii++;
      }
    } else {
      ii++;
    }
  }

  if (!(idx <= x->size[0])) {
    for (ii = 0; ii < 30; ii++) {
      b_u[ii] = c_u[ii];
    }

    y = NULL;
    m = emlrtCreateCharArray(2, &iv1[0]);
    emlrtInitCharArrayR2013a(cgxertPrepareEmlrtTLS(moduleInstance->S,
      (emlrtConstCTX)sp, moduleInstance->sysIdx, 6), 30, m, &b_u[0]);
    emlrtAssign(&y, m);
    for (ii = 0; ii < 30; ii++) {
      b_u[ii] = c_u[ii];
    }

    b_y = NULL;
    m = emlrtCreateCharArray(2, &iv2[0]);
    emlrtInitCharArrayR2013a(cgxertPrepareEmlrtTLS(moduleInstance->S,
      (emlrtConstCTX)sp, moduleInstance->sysIdx, 6), 30, m, &b_u[0]);
    emlrtAssign(&b_y, m);
    st.site = &wm_emlrtRSI;
    blkSrcLoc.sysIdx = moduleInstance->sysIdx;
    blkSrcLoc.blkIdx = 6;
    b_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
    b_blkSrcLoc.blkIdx = 6;
    c_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
    c_blkSrcLoc.blkIdx = 6;
    b_error(moduleInstance, &st, y, getString(moduleInstance, &st, b_message
             (moduleInstance, &st, b_y, &mb_emlrtMCI, &c_blkSrcLoc),
             &mb_emlrtMCI, &blkSrcLoc), &mb_emlrtMCI, &b_blkSrcLoc);
  }

  if (x->size[0] == 1) {
    if (idx == 0) {
      i->size[0] = 0;
    }
  } else {
    if (idx < 1) {
      idx = 0;
    }

    iv[0] = 1;
    iv[1] = idx;
    st.site = &ig_emlrtRSI;
    indexShapeCheck(moduleInstance, &st, i->size[0], iv);
    ii = i->size[0];
    i->size[0] = idx;
    emxEnsureCapacity_int32_T(i, ii);
  }
}

static void f_mtimes(emxArray_real_T *A, emxArray_real_T *B, emxArray_real_T *C)
{
  ptrdiff_t k_t;
  ptrdiff_t lda_t;
  ptrdiff_t ldb_t;
  ptrdiff_t ldc_t;
  ptrdiff_t m_t;
  ptrdiff_t n_t;
  real_T alpha1;
  real_T beta1;
  int32_T i;
  int32_T loop_ub;
  char_T TRANSA1;
  char_T TRANSB1;
  if ((A->size[0] == 0) || (A->size[1] == 0) || (B->size[0] == 0) || (B->size[1]
       == 0)) {
    i = C->size[0] * C->size[1];
    C->size[0] = A->size[0];
    C->size[1] = B->size[1];
    emxEnsureCapacity_real_T(C, i);
    loop_ub = A->size[0] * B->size[1];
    for (i = 0; i < loop_ub; i++) {
      C->data[i] = 0.0;
    }
  } else {
    TRANSB1 = 'N';
    TRANSA1 = 'N';
    alpha1 = 1.0;
    beta1 = 0.0;
    m_t = (ptrdiff_t)A->size[0];
    n_t = (ptrdiff_t)B->size[1];
    k_t = (ptrdiff_t)A->size[1];
    lda_t = (ptrdiff_t)A->size[0];
    ldb_t = (ptrdiff_t)B->size[0];
    ldc_t = (ptrdiff_t)A->size[0];
    i = C->size[0] * C->size[1];
    C->size[0] = A->size[0];
    C->size[1] = B->size[1];
    emxEnsureCapacity_real_T(C, i);
    dgemm(&TRANSA1, &TRANSB1, &m_t, &n_t, &k_t, &alpha1, &A->data[0], &lda_t,
          &B->data[0], &ldb_t, &beta1, &C->data[0], &ldc_t);
  }
}

static boolean_T any(InstanceStruct_dnGfh1DX0a11xSfGnyzF5G *moduleInstance,
                     const emlrtStack *sp, emxArray_boolean_T *x)
{
  static const int32_T iv[2] = { 1, 51 };

  static const int32_T iv1[2] = { 1, 51 };

  static char_T c_u[51] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'e', 'm', 'l', '_', 'a', 'l', 'l', '_', 'o', 'r', '_',
    'a', 'n', 'y', '_', 'a', 'u', 't', 'o', 'D', 'i', 'm', 'I', 'n', 'c', 'o',
    'm', 'p', 'a', 't', 'i', 'b', 'i', 'l', 'i', 't', 'y' };

  cgxertBlkSrcLocInfo b_blkSrcLoc;
  cgxertBlkSrcLocInfo blkSrcLoc;
  cgxertBlkSrcLocInfo c_blkSrcLoc;
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *m;
  int32_T ix;
  char_T b_u[51];
  boolean_T exitg1;
  boolean_T y;
  st.prev = sp;
  st.tls = sp->tls;
  if ((x->size[0] == 1) || (x->size[0] != 1)) {
  } else {
    for (ix = 0; ix < 51; ix++) {
      b_u[ix] = c_u[ix];
    }

    b_y = NULL;
    m = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a(cgxertPrepareEmlrtTLS(moduleInstance->S,
      (emlrtConstCTX)sp, moduleInstance->sysIdx, 6), 51, m, &b_u[0]);
    emlrtAssign(&b_y, m);
    for (ix = 0; ix < 51; ix++) {
      b_u[ix] = c_u[ix];
    }

    c_y = NULL;
    m = emlrtCreateCharArray(2, &iv1[0]);
    emlrtInitCharArrayR2013a(cgxertPrepareEmlrtTLS(moduleInstance->S,
      (emlrtConstCTX)sp, moduleInstance->sysIdx, 6), 51, m, &b_u[0]);
    emlrtAssign(&c_y, m);
    st.site = &vm_emlrtRSI;
    blkSrcLoc.sysIdx = moduleInstance->sysIdx;
    blkSrcLoc.blkIdx = 6;
    b_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
    b_blkSrcLoc.blkIdx = 6;
    c_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
    c_blkSrcLoc.blkIdx = 6;
    b_error(moduleInstance, &st, b_y, getString(moduleInstance, &st, b_message
             (moduleInstance, &st, c_y, &fb_emlrtMCI, &c_blkSrcLoc),
             &fb_emlrtMCI, &blkSrcLoc), &fb_emlrtMCI, &b_blkSrcLoc);
  }

  y = false;
  ix = 0;
  exitg1 = false;
  while ((!exitg1) && (ix + 1 <= x->size[0])) {
    if (!x->data[ix]) {
      ix++;
    } else {
      y = true;
      exitg1 = true;
    }
  }

  return y;
}

static void minimum(InstanceStruct_dnGfh1DX0a11xSfGnyzF5G *moduleInstance, const
                    emlrtStack *sp, emxArray_real_T *x, real_T *ex, int32_T *idx)
{
  static const int32_T iv[2] = { 1, 36 };

  static const int32_T iv1[2] = { 1, 39 };

  static const int32_T iv2[2] = { 1, 36 };

  static const int32_T iv3[2] = { 1, 39 };

  static char_T e_u[39] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'e', 'm', 'l', '_', 'm', 'i', 'n', '_', 'o', 'r', '_',
    'm', 'a', 'x', '_', 'v', 'a', 'r', 'D', 'i', 'm', 'Z', 'e', 'r', 'o' };

  static char_T d_u[36] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'a', 'u', 't', 'o', 'D', 'i', 'm', 'I', 'n', 'c', 'o',
    'm', 'p', 'a', 't', 'i', 'b', 'i', 'l', 'i', 't', 'y' };

  cgxertBlkSrcLocInfo b_blkSrcLoc;
  cgxertBlkSrcLocInfo blkSrcLoc;
  cgxertBlkSrcLocInfo c_blkSrcLoc;
  cgxertBlkSrcLocInfo d_blkSrcLoc;
  cgxertBlkSrcLocInfo e_blkSrcLoc;
  cgxertBlkSrcLocInfo f_blkSrcLoc;
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *d_y;
  const mxArray *m;
  const mxArray *y;
  int32_T b_idx;
  int32_T k;
  int32_T last;
  char_T c_u[39];
  char_T b_u[36];
  boolean_T exitg1;
  st.prev = sp;
  st.tls = sp->tls;
  if ((x->size[0] == 1) || (x->size[0] != 1)) {
  } else {
    for (last = 0; last < 36; last++) {
      b_u[last] = d_u[last];
    }

    y = NULL;
    m = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a(cgxertPrepareEmlrtTLS(moduleInstance->S,
      (emlrtConstCTX)sp, moduleInstance->sysIdx, 6), 36, m, &b_u[0]);
    emlrtAssign(&y, m);
    for (last = 0; last < 36; last++) {
      b_u[last] = d_u[last];
    }

    c_y = NULL;
    m = emlrtCreateCharArray(2, &iv2[0]);
    emlrtInitCharArrayR2013a(cgxertPrepareEmlrtTLS(moduleInstance->S,
      (emlrtConstCTX)sp, moduleInstance->sysIdx, 6), 36, m, &b_u[0]);
    emlrtAssign(&c_y, m);
    st.site = &um_emlrtRSI;
    blkSrcLoc.sysIdx = moduleInstance->sysIdx;
    blkSrcLoc.blkIdx = 6;
    b_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
    b_blkSrcLoc.blkIdx = 6;
    d_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
    d_blkSrcLoc.blkIdx = 6;
    b_error(moduleInstance, &st, y, getString(moduleInstance, &st, b_message
             (moduleInstance, &st, c_y, &jb_emlrtMCI, &d_blkSrcLoc),
             &jb_emlrtMCI, &blkSrcLoc), &jb_emlrtMCI, &b_blkSrcLoc);
  }

  if (!(x->size[0] >= 1)) {
    for (last = 0; last < 39; last++) {
      c_u[last] = e_u[last];
    }

    b_y = NULL;
    m = emlrtCreateCharArray(2, &iv1[0]);
    emlrtInitCharArrayR2013a(cgxertPrepareEmlrtTLS(moduleInstance->S,
      (emlrtConstCTX)sp, moduleInstance->sysIdx, 6), 39, m, &c_u[0]);
    emlrtAssign(&b_y, m);
    for (last = 0; last < 39; last++) {
      c_u[last] = e_u[last];
    }

    d_y = NULL;
    m = emlrtCreateCharArray(2, &iv3[0]);
    emlrtInitCharArrayR2013a(cgxertPrepareEmlrtTLS(moduleInstance->S,
      (emlrtConstCTX)sp, moduleInstance->sysIdx, 6), 39, m, &c_u[0]);
    emlrtAssign(&d_y, m);
    st.site = &tm_emlrtRSI;
    c_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
    c_blkSrcLoc.blkIdx = 6;
    e_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
    e_blkSrcLoc.blkIdx = 6;
    f_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
    f_blkSrcLoc.blkIdx = 6;
    b_error(moduleInstance, &st, b_y, getString(moduleInstance, &st, b_message
             (moduleInstance, &st, d_y, &kb_emlrtMCI, &f_blkSrcLoc),
             &kb_emlrtMCI, &c_blkSrcLoc), &kb_emlrtMCI, &e_blkSrcLoc);
  }

  last = x->size[0];
  if (x->size[0] <= 2) {
    if (x->size[0] == 1) {
      *ex = x->data[0];
      *idx = 1;
    } else if ((x->data[0] > x->data[x->size[0] - 1]) || (muDoubleScalarIsNaN
                (x->data[0]) && (!muDoubleScalarIsNaN(x->data[x->size[0] - 1]))))
    {
      *ex = x->data[x->size[0] - 1];
      *idx = x->size[0];
    } else {
      *ex = x->data[0];
      *idx = 1;
    }
  } else {
    if (!muDoubleScalarIsNaN(x->data[0])) {
      *idx = 1;
    } else {
      *idx = 0;
      k = 2;
      exitg1 = false;
      while ((!exitg1) && (k <= last)) {
        if (!muDoubleScalarIsNaN(x->data[k - 1])) {
          *idx = k;
          exitg1 = true;
        } else {
          k++;
        }
      }
    }

    if (*idx == 0) {
      *ex = x->data[0];
      *idx = 1;
    } else {
      *ex = x->data[*idx - 1];
      b_idx = *idx;
      for (k = *idx + 1; k <= last; k++) {
        if (*ex > x->data[k - 1]) {
          *ex = x->data[k - 1];
          b_idx = k;
        }
      }

      *idx = b_idx;
    }
  }
}

static void i_dynamic_size_checks(InstanceStruct_dnGfh1DX0a11xSfGnyzF5G
  *moduleInstance, const emlrtStack *sp, emxArray_real_T *a, int32_T innerDimA,
  cgxertBlkSrcLocInfo *blkSrc)
{
  static const int32_T iv[2] = { 1, 15 };

  static const int32_T iv1[2] = { 1, 45 };

  static const int32_T iv2[2] = { 1, 15 };

  static const int32_T iv3[2] = { 1, 45 };

  static char_T e_u[45] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'm', 't', 'i', 'm', 'e', 's', '_', 'n', 'o', 'D', 'y',
    'n', 'a', 'm', 'i', 'c', 'S', 'c', 'a', 'l', 'a', 'r', 'E', 'x', 'p', 'a',
    'n', 's', 'i', 'o', 'n' };

  static char_T d_u[15] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'i', 'n', 'n',
    'e', 'r', 'd', 'i', 'm' };

  cgxertBlkSrcLocInfo b_blkSrcLoc;
  cgxertBlkSrcLocInfo blkSrcLoc;
  cgxertBlkSrcLocInfo c_blkSrcLoc;
  cgxertBlkSrcLocInfo d_blkSrcLoc;
  cgxertBlkSrcLocInfo e_blkSrcLoc;
  cgxertBlkSrcLocInfo f_blkSrcLoc;
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *d_y;
  const mxArray *m;
  const mxArray *y;
  int32_T i;
  char_T c_u[45];
  char_T b_u[15];
  st.prev = sp;
  st.tls = sp->tls;
  if (innerDimA != 6) {
    if (a->size[1] == 1) {
      for (i = 0; i < 45; i++) {
        c_u[i] = e_u[i];
      }

      b_y = NULL;
      m = emlrtCreateCharArray(2, &iv1[0]);
      emlrtInitCharArrayR2013a(cgxertPrepareEmlrtTLS(moduleInstance->S,
        (emlrtConstCTX)sp, blkSrc->sysIdx, blkSrc->blkIdx), 45, m, &c_u[0]);
      emlrtAssign(&b_y, m);
      for (i = 0; i < 45; i++) {
        c_u[i] = e_u[i];
      }

      d_y = NULL;
      m = emlrtCreateCharArray(2, &iv3[0]);
      emlrtInitCharArrayR2013a(cgxertPrepareEmlrtTLS(moduleInstance->S,
        (emlrtConstCTX)sp, blkSrc->sysIdx, blkSrc->blkIdx), 45, m, &c_u[0]);
      emlrtAssign(&d_y, m);
      st.site = &rm_emlrtRSI;
      b_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
      b_blkSrcLoc.blkIdx = 6;
      d_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
      d_blkSrcLoc.blkIdx = 6;
      f_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
      f_blkSrcLoc.blkIdx = 6;
      b_error(moduleInstance, &st, b_y, getString(moduleInstance, &st, b_message
               (moduleInstance, &st, d_y, &x_emlrtMCI, &f_blkSrcLoc),
               &x_emlrtMCI, &b_blkSrcLoc), &x_emlrtMCI, &d_blkSrcLoc);
    } else {
      for (i = 0; i < 15; i++) {
        b_u[i] = d_u[i];
      }

      y = NULL;
      m = emlrtCreateCharArray(2, &iv[0]);
      emlrtInitCharArrayR2013a(cgxertPrepareEmlrtTLS(moduleInstance->S,
        (emlrtConstCTX)sp, blkSrc->sysIdx, blkSrc->blkIdx), 15, m, &b_u[0]);
      emlrtAssign(&y, m);
      for (i = 0; i < 15; i++) {
        b_u[i] = d_u[i];
      }

      c_y = NULL;
      m = emlrtCreateCharArray(2, &iv2[0]);
      emlrtInitCharArrayR2013a(cgxertPrepareEmlrtTLS(moduleInstance->S,
        (emlrtConstCTX)sp, blkSrc->sysIdx, blkSrc->blkIdx), 15, m, &b_u[0]);
      emlrtAssign(&c_y, m);
      st.site = &sm_emlrtRSI;
      blkSrcLoc.sysIdx = moduleInstance->sysIdx;
      blkSrcLoc.blkIdx = 6;
      c_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
      c_blkSrcLoc.blkIdx = 6;
      e_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
      e_blkSrcLoc.blkIdx = 6;
      b_error(moduleInstance, &st, y, getString(moduleInstance, &st, b_message
               (moduleInstance, &st, c_y, &w_emlrtMCI, &e_blkSrcLoc),
               &w_emlrtMCI, &blkSrcLoc), &w_emlrtMCI, &c_blkSrcLoc);
    }
  }
}

static void j_dynamic_size_checks(InstanceStruct_dnGfh1DX0a11xSfGnyzF5G
  *moduleInstance, const emlrtStack *sp, emxArray_real_T *a, int32_T innerDimA,
  cgxertBlkSrcLocInfo *blkSrc)
{
  static const int32_T iv[2] = { 1, 15 };

  static const int32_T iv1[2] = { 1, 45 };

  static const int32_T iv2[2] = { 1, 15 };

  static const int32_T iv3[2] = { 1, 45 };

  static char_T e_u[45] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'm', 't', 'i', 'm', 'e', 's', '_', 'n', 'o', 'D', 'y',
    'n', 'a', 'm', 'i', 'c', 'S', 'c', 'a', 'l', 'a', 'r', 'E', 'x', 'p', 'a',
    'n', 's', 'i', 'o', 'n' };

  static char_T d_u[15] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'i', 'n', 'n',
    'e', 'r', 'd', 'i', 'm' };

  cgxertBlkSrcLocInfo b_blkSrcLoc;
  cgxertBlkSrcLocInfo blkSrcLoc;
  cgxertBlkSrcLocInfo c_blkSrcLoc;
  cgxertBlkSrcLocInfo d_blkSrcLoc;
  cgxertBlkSrcLocInfo e_blkSrcLoc;
  cgxertBlkSrcLocInfo f_blkSrcLoc;
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *d_y;
  const mxArray *m;
  const mxArray *y;
  int32_T i;
  char_T c_u[45];
  char_T b_u[15];
  st.prev = sp;
  st.tls = sp->tls;
  if (innerDimA != 6) {
    if ((a->size[0] == 1) && (a->size[1] == 1)) {
      for (i = 0; i < 45; i++) {
        c_u[i] = e_u[i];
      }

      b_y = NULL;
      m = emlrtCreateCharArray(2, &iv1[0]);
      emlrtInitCharArrayR2013a(cgxertPrepareEmlrtTLS(moduleInstance->S,
        (emlrtConstCTX)sp, blkSrc->sysIdx, blkSrc->blkIdx), 45, m, &c_u[0]);
      emlrtAssign(&b_y, m);
      for (i = 0; i < 45; i++) {
        c_u[i] = e_u[i];
      }

      d_y = NULL;
      m = emlrtCreateCharArray(2, &iv3[0]);
      emlrtInitCharArrayR2013a(cgxertPrepareEmlrtTLS(moduleInstance->S,
        (emlrtConstCTX)sp, blkSrc->sysIdx, blkSrc->blkIdx), 45, m, &c_u[0]);
      emlrtAssign(&d_y, m);
      st.site = &rm_emlrtRSI;
      b_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
      b_blkSrcLoc.blkIdx = 6;
      d_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
      d_blkSrcLoc.blkIdx = 6;
      f_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
      f_blkSrcLoc.blkIdx = 6;
      b_error(moduleInstance, &st, b_y, getString(moduleInstance, &st, b_message
               (moduleInstance, &st, d_y, &x_emlrtMCI, &f_blkSrcLoc),
               &x_emlrtMCI, &b_blkSrcLoc), &x_emlrtMCI, &d_blkSrcLoc);
    } else {
      for (i = 0; i < 15; i++) {
        b_u[i] = d_u[i];
      }

      y = NULL;
      m = emlrtCreateCharArray(2, &iv[0]);
      emlrtInitCharArrayR2013a(cgxertPrepareEmlrtTLS(moduleInstance->S,
        (emlrtConstCTX)sp, blkSrc->sysIdx, blkSrc->blkIdx), 15, m, &b_u[0]);
      emlrtAssign(&y, m);
      for (i = 0; i < 15; i++) {
        b_u[i] = d_u[i];
      }

      c_y = NULL;
      m = emlrtCreateCharArray(2, &iv2[0]);
      emlrtInitCharArrayR2013a(cgxertPrepareEmlrtTLS(moduleInstance->S,
        (emlrtConstCTX)sp, blkSrc->sysIdx, blkSrc->blkIdx), 15, m, &b_u[0]);
      emlrtAssign(&c_y, m);
      st.site = &sm_emlrtRSI;
      blkSrcLoc.sysIdx = moduleInstance->sysIdx;
      blkSrcLoc.blkIdx = 6;
      c_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
      c_blkSrcLoc.blkIdx = 6;
      e_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
      e_blkSrcLoc.blkIdx = 6;
      b_error(moduleInstance, &st, y, getString(moduleInstance, &st, b_message
               (moduleInstance, &st, c_y, &w_emlrtMCI, &e_blkSrcLoc),
               &w_emlrtMCI, &blkSrcLoc), &w_emlrtMCI, &c_blkSrcLoc);
    }
  }
}

static void g_mtimes(emxArray_real_T *A, real_T B[36], emxArray_real_T *C)
{
  ptrdiff_t k_t;
  ptrdiff_t lda_t;
  ptrdiff_t ldb_t;
  ptrdiff_t ldc_t;
  ptrdiff_t m_t;
  ptrdiff_t n_t;
  real_T alpha1;
  real_T beta1;
  int32_T i;
  int32_T loop_ub;
  char_T TRANSA1;
  char_T TRANSB1;
  if ((A->size[0] == 0) || (A->size[1] == 0)) {
    i = C->size[0] * C->size[1];
    C->size[0] = A->size[0];
    C->size[1] = 6;
    emxEnsureCapacity_real_T(C, i);
    loop_ub = A->size[0] * 6;
    for (i = 0; i < loop_ub; i++) {
      C->data[i] = 0.0;
    }
  } else {
    TRANSB1 = 'N';
    TRANSA1 = 'N';
    alpha1 = 1.0;
    beta1 = 0.0;
    m_t = (ptrdiff_t)A->size[0];
    n_t = (ptrdiff_t)6;
    k_t = (ptrdiff_t)6;
    lda_t = (ptrdiff_t)A->size[0];
    ldb_t = (ptrdiff_t)6;
    ldc_t = (ptrdiff_t)A->size[0];
    i = C->size[0] * C->size[1];
    C->size[0] = A->size[0];
    C->size[1] = 6;
    emxEnsureCapacity_real_T(C, i);
    dgemm(&TRANSA1, &TRANSB1, &m_t, &n_t, &k_t, &alpha1, &A->data[0], &lda_t,
          &B[0], &ldb_t, &beta1, &C->data[0], &ldc_t);
  }
}

static void k_dynamic_size_checks(InstanceStruct_dnGfh1DX0a11xSfGnyzF5G
  *moduleInstance, const emlrtStack *sp, int32_T innerDimB, cgxertBlkSrcLocInfo *
  blkSrc)
{
  static const int32_T iv[2] = { 1, 15 };

  static const int32_T iv1[2] = { 1, 15 };

  static char_T c_u[15] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'i', 'n', 'n',
    'e', 'r', 'd', 'i', 'm' };

  cgxertBlkSrcLocInfo b_blkSrcLoc;
  cgxertBlkSrcLocInfo blkSrcLoc;
  cgxertBlkSrcLocInfo c_blkSrcLoc;
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *m;
  const mxArray *y;
  int32_T i;
  char_T b_u[15];
  st.prev = sp;
  st.tls = sp->tls;
  if (innerDimB != 6) {
    for (i = 0; i < 15; i++) {
      b_u[i] = c_u[i];
    }

    y = NULL;
    m = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a(cgxertPrepareEmlrtTLS(moduleInstance->S,
      (emlrtConstCTX)sp, blkSrc->sysIdx, blkSrc->blkIdx), 15, m, &b_u[0]);
    emlrtAssign(&y, m);
    for (i = 0; i < 15; i++) {
      b_u[i] = c_u[i];
    }

    b_y = NULL;
    m = emlrtCreateCharArray(2, &iv1[0]);
    emlrtInitCharArrayR2013a(cgxertPrepareEmlrtTLS(moduleInstance->S,
      (emlrtConstCTX)sp, blkSrc->sysIdx, blkSrc->blkIdx), 15, m, &b_u[0]);
    emlrtAssign(&b_y, m);
    st.site = &sm_emlrtRSI;
    blkSrcLoc.sysIdx = moduleInstance->sysIdx;
    blkSrcLoc.blkIdx = 6;
    b_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
    b_blkSrcLoc.blkIdx = 6;
    c_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
    c_blkSrcLoc.blkIdx = 6;
    b_error(moduleInstance, &st, y, getString(moduleInstance, &st, b_message
             (moduleInstance, &st, b_y, &w_emlrtMCI, &c_blkSrcLoc), &w_emlrtMCI,
             &blkSrcLoc), &w_emlrtMCI, &b_blkSrcLoc);
  }
}

static void l_dynamic_size_checks(InstanceStruct_dnGfh1DX0a11xSfGnyzF5G
  *moduleInstance, const emlrtStack *sp, emxArray_real_T *b_b, int32_T innerDimB,
  cgxertBlkSrcLocInfo *blkSrc)
{
  static const int32_T iv[2] = { 1, 15 };

  static const int32_T iv1[2] = { 1, 45 };

  static const int32_T iv2[2] = { 1, 15 };

  static const int32_T iv3[2] = { 1, 45 };

  static char_T e_u[45] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'm', 't', 'i', 'm', 'e', 's', '_', 'n', 'o', 'D', 'y',
    'n', 'a', 'm', 'i', 'c', 'S', 'c', 'a', 'l', 'a', 'r', 'E', 'x', 'p', 'a',
    'n', 's', 'i', 'o', 'n' };

  static char_T d_u[15] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'i', 'n', 'n',
    'e', 'r', 'd', 'i', 'm' };

  cgxertBlkSrcLocInfo b_blkSrcLoc;
  cgxertBlkSrcLocInfo blkSrcLoc;
  cgxertBlkSrcLocInfo c_blkSrcLoc;
  cgxertBlkSrcLocInfo d_blkSrcLoc;
  cgxertBlkSrcLocInfo e_blkSrcLoc;
  cgxertBlkSrcLocInfo f_blkSrcLoc;
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *d_y;
  const mxArray *m;
  const mxArray *y;
  int32_T i;
  char_T c_u[45];
  char_T b_u[15];
  st.prev = sp;
  st.tls = sp->tls;
  if (innerDimB != 6) {
    if (b_b->size[0] == 1) {
      for (i = 0; i < 45; i++) {
        c_u[i] = e_u[i];
      }

      b_y = NULL;
      m = emlrtCreateCharArray(2, &iv1[0]);
      emlrtInitCharArrayR2013a(cgxertPrepareEmlrtTLS(moduleInstance->S,
        (emlrtConstCTX)sp, blkSrc->sysIdx, blkSrc->blkIdx), 45, m, &c_u[0]);
      emlrtAssign(&b_y, m);
      for (i = 0; i < 45; i++) {
        c_u[i] = e_u[i];
      }

      d_y = NULL;
      m = emlrtCreateCharArray(2, &iv3[0]);
      emlrtInitCharArrayR2013a(cgxertPrepareEmlrtTLS(moduleInstance->S,
        (emlrtConstCTX)sp, blkSrc->sysIdx, blkSrc->blkIdx), 45, m, &c_u[0]);
      emlrtAssign(&d_y, m);
      st.site = &rm_emlrtRSI;
      b_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
      b_blkSrcLoc.blkIdx = 6;
      d_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
      d_blkSrcLoc.blkIdx = 6;
      f_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
      f_blkSrcLoc.blkIdx = 6;
      b_error(moduleInstance, &st, b_y, getString(moduleInstance, &st, b_message
               (moduleInstance, &st, d_y, &x_emlrtMCI, &f_blkSrcLoc),
               &x_emlrtMCI, &b_blkSrcLoc), &x_emlrtMCI, &d_blkSrcLoc);
    } else {
      for (i = 0; i < 15; i++) {
        b_u[i] = d_u[i];
      }

      y = NULL;
      m = emlrtCreateCharArray(2, &iv[0]);
      emlrtInitCharArrayR2013a(cgxertPrepareEmlrtTLS(moduleInstance->S,
        (emlrtConstCTX)sp, blkSrc->sysIdx, blkSrc->blkIdx), 15, m, &b_u[0]);
      emlrtAssign(&y, m);
      for (i = 0; i < 15; i++) {
        b_u[i] = d_u[i];
      }

      c_y = NULL;
      m = emlrtCreateCharArray(2, &iv2[0]);
      emlrtInitCharArrayR2013a(cgxertPrepareEmlrtTLS(moduleInstance->S,
        (emlrtConstCTX)sp, blkSrc->sysIdx, blkSrc->blkIdx), 15, m, &b_u[0]);
      emlrtAssign(&c_y, m);
      st.site = &sm_emlrtRSI;
      blkSrcLoc.sysIdx = moduleInstance->sysIdx;
      blkSrcLoc.blkIdx = 6;
      c_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
      c_blkSrcLoc.blkIdx = 6;
      e_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
      e_blkSrcLoc.blkIdx = 6;
      b_error(moduleInstance, &st, y, getString(moduleInstance, &st, b_message
               (moduleInstance, &st, c_y, &w_emlrtMCI, &e_blkSrcLoc),
               &w_emlrtMCI, &blkSrcLoc), &w_emlrtMCI, &c_blkSrcLoc);
    }
  }
}

static void m_dynamic_size_checks(InstanceStruct_dnGfh1DX0a11xSfGnyzF5G
  *moduleInstance, const emlrtStack *sp, emxArray_real_T *a, int32_T innerDimA,
  cgxertBlkSrcLocInfo *blkSrc)
{
  static const int32_T iv[2] = { 1, 15 };

  static const int32_T iv1[2] = { 1, 45 };

  static const int32_T iv2[2] = { 1, 15 };

  static const int32_T iv3[2] = { 1, 45 };

  static char_T e_u[45] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'm', 't', 'i', 'm', 'e', 's', '_', 'n', 'o', 'D', 'y',
    'n', 'a', 'm', 'i', 'c', 'S', 'c', 'a', 'l', 'a', 'r', 'E', 'x', 'p', 'a',
    'n', 's', 'i', 'o', 'n' };

  static char_T d_u[15] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'i', 'n', 'n',
    'e', 'r', 'd', 'i', 'm' };

  cgxertBlkSrcLocInfo b_blkSrcLoc;
  cgxertBlkSrcLocInfo blkSrcLoc;
  cgxertBlkSrcLocInfo c_blkSrcLoc;
  cgxertBlkSrcLocInfo d_blkSrcLoc;
  cgxertBlkSrcLocInfo e_blkSrcLoc;
  cgxertBlkSrcLocInfo f_blkSrcLoc;
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *d_y;
  const mxArray *m;
  const mxArray *y;
  int32_T i;
  char_T c_u[45];
  char_T b_u[15];
  st.prev = sp;
  st.tls = sp->tls;
  if (innerDimA != 6) {
    if (a->size[1] == 1) {
      for (i = 0; i < 45; i++) {
        c_u[i] = e_u[i];
      }

      b_y = NULL;
      m = emlrtCreateCharArray(2, &iv1[0]);
      emlrtInitCharArrayR2013a(cgxertPrepareEmlrtTLS(moduleInstance->S,
        (emlrtConstCTX)sp, blkSrc->sysIdx, blkSrc->blkIdx), 45, m, &c_u[0]);
      emlrtAssign(&b_y, m);
      for (i = 0; i < 45; i++) {
        c_u[i] = e_u[i];
      }

      d_y = NULL;
      m = emlrtCreateCharArray(2, &iv3[0]);
      emlrtInitCharArrayR2013a(cgxertPrepareEmlrtTLS(moduleInstance->S,
        (emlrtConstCTX)sp, blkSrc->sysIdx, blkSrc->blkIdx), 45, m, &c_u[0]);
      emlrtAssign(&d_y, m);
      st.site = &rm_emlrtRSI;
      b_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
      b_blkSrcLoc.blkIdx = 6;
      d_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
      d_blkSrcLoc.blkIdx = 6;
      f_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
      f_blkSrcLoc.blkIdx = 6;
      b_error(moduleInstance, &st, b_y, getString(moduleInstance, &st, b_message
               (moduleInstance, &st, d_y, &x_emlrtMCI, &f_blkSrcLoc),
               &x_emlrtMCI, &b_blkSrcLoc), &x_emlrtMCI, &d_blkSrcLoc);
    } else {
      for (i = 0; i < 15; i++) {
        b_u[i] = d_u[i];
      }

      y = NULL;
      m = emlrtCreateCharArray(2, &iv[0]);
      emlrtInitCharArrayR2013a(cgxertPrepareEmlrtTLS(moduleInstance->S,
        (emlrtConstCTX)sp, blkSrc->sysIdx, blkSrc->blkIdx), 15, m, &b_u[0]);
      emlrtAssign(&y, m);
      for (i = 0; i < 15; i++) {
        b_u[i] = d_u[i];
      }

      c_y = NULL;
      m = emlrtCreateCharArray(2, &iv2[0]);
      emlrtInitCharArrayR2013a(cgxertPrepareEmlrtTLS(moduleInstance->S,
        (emlrtConstCTX)sp, blkSrc->sysIdx, blkSrc->blkIdx), 15, m, &b_u[0]);
      emlrtAssign(&c_y, m);
      st.site = &sm_emlrtRSI;
      blkSrcLoc.sysIdx = moduleInstance->sysIdx;
      blkSrcLoc.blkIdx = 6;
      c_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
      c_blkSrcLoc.blkIdx = 6;
      e_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
      e_blkSrcLoc.blkIdx = 6;
      b_error(moduleInstance, &st, y, getString(moduleInstance, &st, b_message
               (moduleInstance, &st, c_y, &w_emlrtMCI, &e_blkSrcLoc),
               &w_emlrtMCI, &blkSrcLoc), &w_emlrtMCI, &c_blkSrcLoc);
    }
  }
}

static boolean_T isPositiveDefinite(real_T B[36])
{
  __m128d r;
  ptrdiff_t incx_t;
  ptrdiff_t incy_t;
  ptrdiff_t lda_t;
  ptrdiff_t m_t;
  ptrdiff_t n_t;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack st;
  real_T A[36];
  real_T alpha1;
  real_T beta1;
  real_T ssq;
  int32_T i;
  int32_T idxAjj;
  int32_T info;
  int32_T ix;
  int32_T iy;
  int32_T j;
  int32_T k;
  char_T TRANSA;
  boolean_T exitg1;
  st.site = &al_emlrtRSI;
  b_st.site = &bl_emlrtRSI;
  c_st.site = &cl_emlrtRSI;
  d_st.site = &dl_emlrtRSI;
  memcpy(&A[0], &B[0], 36U * sizeof(real_T));
  info = 0;
  j = 1;
  exitg1 = false;
  while ((!exitg1) && (j - 1 < 6)) {
    idxAjj = (j + (j - 1) * 6) - 1;
    ssq = 0.0;
    if (!(j - 1 < 1)) {
      ix = j - 1;
      iy = j - 1;
      i = j - 2;
      for (k = 0; k <= i; k++) {
        ssq += A[ix] * A[iy];
        ix += 6;
        iy += 6;
      }
    }

    ssq = A[idxAjj] - ssq;
    if (ssq > 0.0) {
      ssq = muDoubleScalarSqrt(ssq);
      A[idxAjj] = ssq;
      if (j < 6) {
        e_st.site = &el_emlrtRSI;
        if (!(j - 1 < 1)) {
          alpha1 = -1.0;
          beta1 = 1.0;
          TRANSA = 'N';
          m_t = (ptrdiff_t)(6 - j);
          n_t = (ptrdiff_t)(j - 1);
          lda_t = (ptrdiff_t)6;
          incx_t = (ptrdiff_t)6;
          incy_t = (ptrdiff_t)1;
          dgemv(&TRANSA, &m_t, &n_t, &alpha1, &A[j], &lda_t, &A[j - 1], &incx_t,
                &beta1, &A[idxAjj + 1], &incy_t);
        }

        ssq = 1.0 / ssq;
        i = idxAjj - j;
        ix = (((i - idxAjj) + 6) / 2 * 2 + idxAjj) + 2;
        iy = ix - 2;
        for (k = idxAjj + 2; k <= iy; k += 2) {
          r = _mm_loadu_pd(&A[k - 1]);
          _mm_storeu_pd(&A[k - 1], _mm_mul_pd(_mm_set1_pd(ssq), r));
        }

        for (k = ix; k <= i + 7; k++) {
          A[k - 1] *= ssq;
        }
      }

      j++;
    } else {
      info = j;
      exitg1 = true;
    }
  }

  return info == 0;
}

static boolean_T DampedBFGSwGradientProjection_searchDirectionInvalid
  (InstanceStruct_dnGfh1DX0a11xSfGnyzF5G *moduleInstance, const emlrtStack *sp,
   robotics_core_internal_DampedBFGSwGradientProjection *obj, real_T xNew[6])
{
  cgxertBlkSrcLocInfo b_blkSrcLoc;
  cgxertBlkSrcLocInfo blkSrcLoc;
  emlrtStack st;
  emxArray_boolean_T *r1;
  emxArray_real_T *a;
  emxArray_real_T *r;
  real_T d;
  int32_T aux_0_0;
  int32_T aux_1_0;
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  boolean_T flag;
  st.prev = sp;
  st.tls = sp->tls;
  emxInit_real_T(&a, 2);
  emxInit_real_T1(&r, 1);
  emxInit_boolean_T(&r1, 1);
  if (obj->ConstraintsOn) {
    i = a->size[0] * a->size[1];
    a->size[0] = obj->ConstraintMatrix->size[0];
    a->size[1] = obj->ConstraintMatrix->size[1];
    emxEnsureCapacity_real_T(a, i);
    loop_ub = obj->ConstraintMatrix->size[0] * obj->ConstraintMatrix->size[1];
    for (i = 0; i < loop_ub; i++) {
      a->data[i] = obj->ConstraintMatrix->data[i];
    }

    st.site = &th_emlrtRSI;
    blkSrcLoc.sysIdx = moduleInstance->sysIdx;
    blkSrcLoc.blkIdx = 6;
    dynamic_size_checks(moduleInstance, &st, a, a->size[0], &blkSrcLoc);
    st.site = &sh_emlrtRSI;
    b_mtimes(a, xNew, r);
    d = 2.2204460492503131E-16;
    st.site = &fl_emlrtRSI;
    b_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
    b_blkSrcLoc.blkIdx = 6;
    b_sqrt(moduleInstance, &st, &d, &b_blkSrcLoc);
    i = r1->size[0];
    if (obj->ConstraintBound->size[0] == 1) {
      r1->size[0] = r->size[0];
    } else {
      r1->size[0] = obj->ConstraintBound->size[0];
    }

    emxEnsureCapacity_boolean_T(r1, i);
    stride_0_0 = (r->size[0] != 1);
    stride_1_0 = (obj->ConstraintBound->size[0] != 1);
    aux_0_0 = 0;
    aux_1_0 = 0;
    if (obj->ConstraintBound->size[0] == 1) {
      loop_ub = r->size[0];
    } else {
      loop_ub = obj->ConstraintBound->size[0];
    }

    for (i = 0; i < loop_ub; i++) {
      r1->data[i] = (r->data[aux_0_0] - obj->ConstraintBound->data[aux_1_0] >
                     1.4901161193847656E-8);
      aux_1_0 += stride_1_0;
      aux_0_0 += stride_0_0;
    }

    st.site = &fl_emlrtRSI;
    if (any(moduleInstance, &st, r1)) {
      flag = true;
    } else {
      flag = false;
    }
  } else {
    flag = false;
  }

  emxFree_boolean_T(&r1);
  emxFree_real_T(&r);
  emxFree_real_T(&a);
  return flag;
}

static void c_rand(InstanceStruct_dnGfh1DX0a11xSfGnyzF5G *moduleInstance, const
                   emlrtStack *sp, real_T varargin_1, emxArray_real_T *r)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  real_T d;
  int32_T i;
  int32_T k;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &hc_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  b_st.site = &ic_emlrtRSI;
  i = r->size[0];
  r->size[0] = (int32_T)emlrtNonNegativeCheckR2012b(varargin_1, &pc_emlrtDCI,
    cgxertPrepareEmlrtTLS(moduleInstance->S, &b_st, moduleInstance->sysIdx, 6));
  emxEnsureCapacity_real_T1(r, i);
  i = (int32_T)varargin_1 - 1;
  for (k = 0; k <= i; k++) {
    c_st.site = &jc_emlrtRSI;
    d = eml_rand_mt19937ar(moduleInstance, &c_st, moduleInstance->c_state);
    r->data[k] = d;
  }
}

static void randn(InstanceStruct_dnGfh1DX0a11xSfGnyzF5G *moduleInstance, const
                  emlrtStack *sp, real_T varargin_1[2], emxArray_real_T *r)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  real_T d;
  int32_T i;
  int32_T k;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &pl_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  b_st.site = &ql_emlrtRSI;
  c_st.site = &ic_emlrtRSI;
  i = r->size[0];
  r->size[0] = (int32_T)varargin_1[0];
  emxEnsureCapacity_real_T1(r, i);
  i = (int32_T)varargin_1[0] - 1;
  for (k = 0; k <= i; k++) {
    d_st.site = &rl_emlrtRSI;
    d = b_eml_rand_mt19937ar(moduleInstance, &d_st, moduleInstance->c_state);
    r->data[k] = d;
  }
}

static void g_warning(InstanceStruct_dnGfh1DX0a11xSfGnyzF5G *moduleInstance,
                      const emlrtStack *sp, cgxertBlkSrcLocInfo *blkSrc)
{
  static const int32_T iv[2] = { 1, 7 };

  static const int32_T iv1[2] = { 1, 7 };

  static const int32_T iv2[2] = { 1, 55 };

  static char_T b_msgID[55] = { 'r', 'o', 'b', 'o', 't', 'i', 'c', 's', ':', 'r',
    'o', 'b', 'o', 't', 'm', 'a', 'n', 'i', 'p', ':', 'r', 'i', 'g', 'i', 'd',
    'b', 'o', 'd', 'y', 't', 'r', 'e', 'e', ':', 'I', 'n', 'v', 'a', 'l', 'i',
    'd', 'D', 'y', 'n', 'a', 'm', 'i', 'c', 's', 'R', 'e', 's', 'u', 'l', 't' };

  static char_T c_u[7] = { 'w', 'a', 'r', 'n', 'i', 'n', 'g' };

  static char_T d_u[7] = { 'm', 'e', 's', 's', 'a', 'g', 'e' };

  cgxertBlkSrcLocInfo b_blkSrcLoc;
  cgxertBlkSrcLocInfo blkSrcLoc;
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *m;
  const mxArray *y;
  int32_T i;
  char_T msgID[55];
  char_T b_u[7];
  st.prev = sp;
  st.tls = sp->tls;
  for (i = 0; i < 55; i++) {
    msgID[i] = b_msgID[i];
  }

  for (i = 0; i < 7; i++) {
    b_u[i] = c_u[i];
  }

  y = NULL;
  m = emlrtCreateCharArray(2, &iv[0]);
  emlrtInitCharArrayR2013a(cgxertPrepareEmlrtTLS(moduleInstance->S,
    (emlrtConstCTX)sp, blkSrc->sysIdx, blkSrc->blkIdx), 7, m, &b_u[0]);
  emlrtAssign(&y, m);
  for (i = 0; i < 7; i++) {
    b_u[i] = d_u[i];
  }

  b_y = NULL;
  m = emlrtCreateCharArray(2, &iv1[0]);
  emlrtInitCharArrayR2013a(cgxertPrepareEmlrtTLS(moduleInstance->S,
    (emlrtConstCTX)sp, blkSrc->sysIdx, blkSrc->blkIdx), 7, m, &b_u[0]);
  emlrtAssign(&b_y, m);
  c_y = NULL;
  m = emlrtCreateCharArray(2, &iv2[0]);
  emlrtInitCharArrayR2013a(cgxertPrepareEmlrtTLS(moduleInstance->S,
    (emlrtConstCTX)sp, blkSrc->sysIdx, blkSrc->blkIdx), 55, m, &msgID[0]);
  emlrtAssign(&c_y, m);
  st.site = &ln_emlrtRSI;
  blkSrcLoc.sysIdx = moduleInstance->sysIdx;
  blkSrcLoc.blkIdx = 6;
  b_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
  b_blkSrcLoc.blkIdx = 6;
  b_feval(moduleInstance, &st, y, feval(moduleInstance, &st, b_y, c_y,
           &j_emlrtMCI, &blkSrcLoc), &k_emlrtMCI, &b_blkSrcLoc);
}

static void handle_matlabCodegenDestructor(InstanceStruct_dnGfh1DX0a11xSfGnyzF5G
  *moduleInstance, const emlrtStack *sp, robotics_manip_internal_CollisionSet
  *obj)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  robotics_manip_internal_CollisionGeometry b_expl_temp;
  robotics_manip_internal_CollisionGeometry expl_temp;
  real_T obj_LocalPose[16];
  real_T obj_WorldPose[16];
  real_T d;
  int32_T b_i;
  int32_T i;
  int32_T i1;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  if (!obj->matlabCodegenIsDeleted) {
    obj->matlabCodegenIsDeleted = true;
    st.site = &dm_emlrtRSI;
    d = obj->Size;
    i = (int32_T)d - 1;
    emlrtForLoopVectorCheckR2021a(1.0, 1.0, d, mxDOUBLE_CLASS, (int32_T)d,
      &i_emlrtRTEI, cgxertPrepareEmlrtTLS(moduleInstance->S, &st,
      moduleInstance->sysIdx, 6));
    for (b_i = 0; b_i <= i; b_i++) {
      b_st.site = &em_emlrtRSI;
      i1 = obj->CollisionGeometries->size[1] - 1;
      expl_temp = obj->CollisionGeometries->data[emlrtDynamicBoundsCheckR2012b
        (b_i, 0, i1, &rd_emlrtBCI, cgxertPrepareEmlrtTLS(moduleInstance->S,
          &b_st, moduleInstance->sysIdx, 6))];
      memcpy(&obj_LocalPose[0], &expl_temp.LocalPose[0], sizeof(real_T) << 4);
      memcpy(&obj_WorldPose[0], &expl_temp.WorldPose[0], sizeof(real_T) << 4);
      c_st.site = &fm_emlrtRSI;
      collisioncodegen_destructGeometry(&expl_temp.CollisionPrimitive);
      i1 = obj->CollisionGeometries->size[1] - 1;
      b_expl_temp.CollisionPrimitive = expl_temp.CollisionPrimitive;
      memcpy(&b_expl_temp.LocalPose[0], &obj_LocalPose[0], sizeof(real_T) << 4);
      memcpy(&b_expl_temp.WorldPose[0], &obj_WorldPose[0], sizeof(real_T) << 4);
      obj->CollisionGeometries->data[emlrtDynamicBoundsCheckR2012b(b_i, 0, i1,
        &qd_emlrtBCI, cgxertPrepareEmlrtTLS(moduleInstance->S, &st,
        moduleInstance->sysIdx, 6))] = b_expl_temp;
    }
  }
}

static void emlrt_marshallIn(InstanceStruct_dnGfh1DX0a11xSfGnyzF5G
  *moduleInstance, const emlrtStack *sp, const mxArray *a__output_of_sprintf_,
  const char_T *identifier, char_T y[14])
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  b_emlrt_marshallIn(moduleInstance, sp, emlrtAlias(a__output_of_sprintf_),
                     &thisId, y);
  emlrtDestroyArray(&a__output_of_sprintf_);
}

static void b_emlrt_marshallIn(InstanceStruct_dnGfh1DX0a11xSfGnyzF5G
  *moduleInstance, const emlrtStack *sp, const mxArray *b_u, const
  emlrtMsgIdentifier *parentId, char_T y[14])
{
  cgxertBlkSrcLocInfo blkSrcLoc;
  blkSrcLoc.sysIdx = moduleInstance->sysIdx;
  blkSrcLoc.blkIdx = 6;
  c_emlrt_marshallIn(moduleInstance, sp, emlrtAlias(b_u), parentId, y,
                     &blkSrcLoc);
  emlrtDestroyArray(&b_u);
}

static const mxArray *emlrt_marshallOut(InstanceStruct_dnGfh1DX0a11xSfGnyzF5G
  *moduleInstance, const emlrtStack *sp, const char_T b_u[30],
  cgxertBlkSrcLocInfo *blkSrc)
{
  static const int32_T iv[2] = { 1, 30 };

  const mxArray *m;
  const mxArray *y;
  y = NULL;
  m = emlrtCreateCharArray(2, &iv[0]);
  emlrtInitCharArrayR2013a(cgxertPrepareEmlrtTLS(moduleInstance->S,
    (emlrtConstCTX)sp, blkSrc->sysIdx, blkSrc->blkIdx), 30, m, &b_u[0]);
  emlrtAssign(&y, m);
  return y;
}

static const mxArray *message(InstanceStruct_dnGfh1DX0a11xSfGnyzF5G
  *moduleInstance, const emlrtStack *sp, const mxArray *m1, const mxArray *m2,
  emlrtMCInfo *location, cgxertBlkSrcLocInfo *blkSrc)
{
  const mxArray *pArrays[2];
  const mxArray *m;
  pArrays[0] = m1;
  pArrays[1] = m2;
  return emlrtCallMATLABR2012b(cgxertPrepareEmlrtTLS(moduleInstance->S,
    (emlrtConstCTX)sp, blkSrc->sysIdx, blkSrc->blkIdx), 1, &m, 2, &pArrays[0],
    "message", true, location);
}

static const mxArray *getString(InstanceStruct_dnGfh1DX0a11xSfGnyzF5G
  *moduleInstance, const emlrtStack *sp, const mxArray *m1, emlrtMCInfo
  *location, cgxertBlkSrcLocInfo *blkSrc)
{
  const mxArray *m;
  const mxArray *pArray;
  pArray = m1;
  return emlrtCallMATLABR2012b(cgxertPrepareEmlrtTLS(moduleInstance->S,
    (emlrtConstCTX)sp, blkSrc->sysIdx, blkSrc->blkIdx), 1, &m, 1, &pArray,
    "getString", true, location);
}

static void b_error(InstanceStruct_dnGfh1DX0a11xSfGnyzF5G *moduleInstance, const
                    emlrtStack *sp, const mxArray *m, const mxArray *m1,
                    emlrtMCInfo *location, cgxertBlkSrcLocInfo *blkSrc)
{
  const mxArray *pArrays[2];
  pArrays[0] = m;
  pArrays[1] = m1;
  emlrtCallMATLABR2012b(cgxertPrepareEmlrtTLS(moduleInstance->S, (emlrtConstCTX)
    sp, blkSrc->sysIdx, blkSrc->blkIdx), 0, NULL, 2, &pArrays[0], "error", true,
                        location);
}

static const mxArray *b_message(InstanceStruct_dnGfh1DX0a11xSfGnyzF5G
  *moduleInstance, const emlrtStack *sp, const mxArray *m1, emlrtMCInfo
  *location, cgxertBlkSrcLocInfo *blkSrc)
{
  const mxArray *m;
  const mxArray *pArray;
  pArray = m1;
  return emlrtCallMATLABR2012b(cgxertPrepareEmlrtTLS(moduleInstance->S,
    (emlrtConstCTX)sp, blkSrc->sysIdx, blkSrc->blkIdx), 1, &m, 1, &pArray,
    "message", true, location);
}

static const mxArray *c_message(InstanceStruct_dnGfh1DX0a11xSfGnyzF5G
  *moduleInstance, const emlrtStack *sp, const mxArray *m1, const mxArray *m2,
  const mxArray *m3, const mxArray *m4, emlrtMCInfo *location,
  cgxertBlkSrcLocInfo *blkSrc)
{
  const mxArray *pArrays[4];
  const mxArray *m;
  pArrays[0] = m1;
  pArrays[1] = m2;
  pArrays[2] = m3;
  pArrays[3] = m4;
  return emlrtCallMATLABR2012b(cgxertPrepareEmlrtTLS(moduleInstance->S,
    (emlrtConstCTX)sp, blkSrc->sysIdx, blkSrc->blkIdx), 1, &m, 4, &pArrays[0],
    "message", true, location);
}

static const mxArray *feval(InstanceStruct_dnGfh1DX0a11xSfGnyzF5G
  *moduleInstance, const emlrtStack *sp, const mxArray *m1, const mxArray *m2,
  emlrtMCInfo *location, cgxertBlkSrcLocInfo *blkSrc)
{
  const mxArray *pArrays[2];
  const mxArray *m;
  pArrays[0] = m1;
  pArrays[1] = m2;
  return emlrtCallMATLABR2012b(cgxertPrepareEmlrtTLS(moduleInstance->S,
    (emlrtConstCTX)sp, blkSrc->sysIdx, blkSrc->blkIdx), 1, &m, 2, &pArrays[0],
    "feval", true, location);
}

static void b_feval(InstanceStruct_dnGfh1DX0a11xSfGnyzF5G *moduleInstance, const
                    emlrtStack *sp, const mxArray *m, const mxArray *m1,
                    emlrtMCInfo *location, cgxertBlkSrcLocInfo *blkSrc)
{
  const mxArray *pArrays[2];
  pArrays[0] = m;
  pArrays[1] = m1;
  emlrtCallMATLABR2012b(cgxertPrepareEmlrtTLS(moduleInstance->S, (emlrtConstCTX)
    sp, blkSrc->sysIdx, blkSrc->blkIdx), 0, NULL, 2, &pArrays[0], "feval", true,
                        location);
}

static const mxArray *d_message(InstanceStruct_dnGfh1DX0a11xSfGnyzF5G
  *moduleInstance, const emlrtStack *sp, const mxArray *m1, const mxArray *m2,
  const mxArray *m3, emlrtMCInfo *location, cgxertBlkSrcLocInfo *blkSrc)
{
  const mxArray *pArrays[3];
  const mxArray *m;
  pArrays[0] = m1;
  pArrays[1] = m2;
  pArrays[2] = m3;
  return emlrtCallMATLABR2012b(cgxertPrepareEmlrtTLS(moduleInstance->S,
    (emlrtConstCTX)sp, blkSrc->sysIdx, blkSrc->blkIdx), 1, &m, 3, &pArrays[0],
    "message", true, location);
}

static const mxArray *b_sprintf(InstanceStruct_dnGfh1DX0a11xSfGnyzF5G
  *moduleInstance, const emlrtStack *sp, const mxArray *m1, const mxArray *m2,
  emlrtMCInfo *location, cgxertBlkSrcLocInfo *blkSrc)
{
  const mxArray *pArrays[2];
  const mxArray *m;
  pArrays[0] = m1;
  pArrays[1] = m2;
  return emlrtCallMATLABR2012b(cgxertPrepareEmlrtTLS(moduleInstance->S,
    (emlrtConstCTX)sp, blkSrc->sysIdx, blkSrc->blkIdx), 1, &m, 2, &pArrays[0],
    "sprintf", true, location);
}

static const mxArray *c_feval(InstanceStruct_dnGfh1DX0a11xSfGnyzF5G
  *moduleInstance, const emlrtStack *sp, const mxArray *m1, const mxArray *m2,
  const mxArray *m3, emlrtMCInfo *location, cgxertBlkSrcLocInfo *blkSrc)
{
  const mxArray *pArrays[3];
  const mxArray *m;
  pArrays[0] = m1;
  pArrays[1] = m2;
  pArrays[2] = m3;
  return emlrtCallMATLABR2012b(cgxertPrepareEmlrtTLS(moduleInstance->S,
    (emlrtConstCTX)sp, blkSrc->sysIdx, blkSrc->blkIdx), 1, &m, 3, &pArrays[0],
    "feval", true, location);
}

static const mxArray *d_feval(InstanceStruct_dnGfh1DX0a11xSfGnyzF5G
  *moduleInstance, const emlrtStack *sp, const mxArray *m1, const mxArray *m2,
  const mxArray *m3, const mxArray *m4, emlrtMCInfo *location,
  cgxertBlkSrcLocInfo *blkSrc)
{
  const mxArray *pArrays[4];
  const mxArray *m;
  pArrays[0] = m1;
  pArrays[1] = m2;
  pArrays[2] = m3;
  pArrays[3] = m4;
  return emlrtCallMATLABR2012b(cgxertPrepareEmlrtTLS(moduleInstance->S,
    (emlrtConstCTX)sp, blkSrc->sysIdx, blkSrc->blkIdx), 1, &m, 4, &pArrays[0],
    "feval", true, location);
}

static void c_emlrt_marshallIn(InstanceStruct_dnGfh1DX0a11xSfGnyzF5G
  *moduleInstance, const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, char_T ret[14], cgxertBlkSrcLocInfo *blkSrc)
{
  static const int32_T dims[2] = { 1, 14 };

  emlrtCheckBuiltInR2012b(cgxertPrepareEmlrtTLS(moduleInstance->S,
    (emlrtConstCTX)sp, blkSrc->sysIdx, blkSrc->blkIdx), msgId, src, "char",
    false, 2U, (const void *)&dims[0]);
  emlrtImportCharArrayR2015b(cgxertPrepareEmlrtTLS(moduleInstance->S,
    (emlrtConstCTX)sp, blkSrc->sysIdx, blkSrc->blkIdx), src, &ret[0], 14);
  emlrtDestroyArray(&src);
}

static real_T eml_rand_mt19937ar(InstanceStruct_dnGfh1DX0a11xSfGnyzF5G
  *moduleInstance, const emlrtStack *sp, uint32_T e_state[625])
{
  static const int32_T iv[2] = { 1, 37 };

  static const int32_T iv1[2] = { 1, 37 };

  static char_T d_u[37] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T', 'L',
    'A', 'B', ':', 'r', 'a', 'n', 'd', '_', 'i', 'n', 'v', 'a', 'l', 'i', 'd',
    'T', 'w', 'i', 's', 't', 'e', 'r', 'S', 't', 'a', 't', 'e' };

  cgxertBlkSrcLocInfo b_blkSrcLoc;
  cgxertBlkSrcLocInfo blkSrcLoc;
  cgxertBlkSrcLocInfo c_blkSrcLoc;
  emlrtStack b_st;
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *m;
  const mxArray *y;
  real_T r;
  int32_T exitg1;
  int32_T i;
  uint32_T b_u[2];
  char_T c_u[37];
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &kc_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;

  /* ========================= COPYRIGHT NOTICE ============================ */
  /*  This is a uniform (0,1) pseudorandom number generator based on:        */
  /*                                                                         */
  /*  A C-program for MT19937, with initialization improved 2002/1/26.       */
  /*  Coded by Takuji Nishimura and Makoto Matsumoto.                        */
  /*                                                                         */
  /*  Copyright (C) 1997 - 2002, Makoto Matsumoto and Takuji Nishimura,      */
  /*  All rights reserved.                                                   */
  /*                                                                         */
  /*  Redistribution and use in source and binary forms, with or without     */
  /*  modification, are permitted provided that the following conditions     */
  /*  are met:                                                               */
  /*                                                                         */
  /*    1. Redistributions of source code must retain the above copyright    */
  /*       notice, this list of conditions and the following disclaimer.     */
  /*                                                                         */
  /*    2. Redistributions in binary form must reproduce the above copyright */
  /*       notice, this list of conditions and the following disclaimer      */
  /*       in the documentation and/or other materials provided with the     */
  /*       distribution.                                                     */
  /*                                                                         */
  /*    3. The names of its contributors may not be used to endorse or       */
  /*       promote products derived from this software without specific      */
  /*       prior written permission.                                         */
  /*                                                                         */
  /*  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS    */
  /*  "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT      */
  /*  LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR  */
  /*  A PARTICULAR PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL THE COPYRIGHT  */
  /*  OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,  */
  /*  SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT       */
  /*  LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,  */
  /*  DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY  */
  /*  THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT    */
  /*  (INCLUDING  NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE */
  /*  OF THIS  SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.  */
  /*                                                                         */
  /* =============================   END   ================================= */
  do {
    exitg1 = 0;
    genrand_uint32_vector(e_state, b_u);
    r = 1.1102230246251565E-16 * ((real_T)(b_u[0] >> 5U) * 6.7108864E+7 +
      (real_T)(b_u[1] >> 6U));
    if (r == 0.0) {
      if (!is_valid_state(e_state)) {
        for (i = 0; i < 37; i++) {
          c_u[i] = d_u[i];
        }

        y = NULL;
        m = emlrtCreateCharArray(2, &iv[0]);
        emlrtInitCharArrayR2013a(cgxertPrepareEmlrtTLS(moduleInstance->S, &st,
          moduleInstance->sysIdx, 6), 37, m, &c_u[0]);
        emlrtAssign(&y, m);
        for (i = 0; i < 37; i++) {
          c_u[i] = d_u[i];
        }

        b_y = NULL;
        m = emlrtCreateCharArray(2, &iv1[0]);
        emlrtInitCharArrayR2013a(cgxertPrepareEmlrtTLS(moduleInstance->S, &st,
          moduleInstance->sysIdx, 6), 37, m, &c_u[0]);
        emlrtAssign(&b_y, m);
        b_st.site = &pm_emlrtRSI;
        blkSrcLoc.sysIdx = moduleInstance->sysIdx;
        blkSrcLoc.blkIdx = 6;
        b_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
        b_blkSrcLoc.blkIdx = 6;
        c_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
        c_blkSrcLoc.blkIdx = 6;
        b_error(moduleInstance, &b_st, y, getString(moduleInstance, &b_st,
                 b_message(moduleInstance, &b_st, b_y, &d_emlrtMCI, &c_blkSrcLoc),
                 &d_emlrtMCI, &blkSrcLoc), &d_emlrtMCI, &b_blkSrcLoc);
      }
    } else {
      exitg1 = 1;
    }
  } while (exitg1 == 0);

  return r;
}

static void genrand_uint32_vector(uint32_T mt[625], uint32_T b_u[2])
{
  int32_T j;
  int32_T kk;
  uint32_T mti;
  uint32_T y;
  for (j = 0; j < 2; j++) {
    mti = mt[624] + 1U;
    if (mti >= 625U) {
      for (kk = 0; kk < 227; kk++) {
        y = (mt[kk] & 2147483648U) | (mt[kk + 1] & 2147483647U);
        if ((y & 1U) == 0U) {
          y >>= 1U;
        } else {
          y = y >> 1U ^ 2567483615U;
        }

        mt[kk] = mt[kk + 397] ^ y;
      }

      for (kk = 0; kk < 396; kk++) {
        y = (mt[kk + 227] & 2147483648U) | (mt[kk + 228] & 2147483647U);
        if ((y & 1U) == 0U) {
          y >>= 1U;
        } else {
          y = y >> 1U ^ 2567483615U;
        }

        mt[kk + 227] = mt[kk] ^ y;
      }

      y = (mt[623] & 2147483648U) | (mt[0] & 2147483647U);
      if ((y & 1U) == 0U) {
        y >>= 1U;
      } else {
        y = y >> 1U ^ 2567483615U;
      }

      mt[623] = mt[396] ^ y;
      mti = 1U;
    }

    y = mt[(int32_T)mti - 1];
    mt[624] = mti;
    y ^= y >> 11U;
    y ^= y << 7U & 2636928640U;
    y ^= y << 15U & 4022730752U;
    y ^= y >> 18U;
    b_u[j] = y;
  }
}

static void b_sqrt(InstanceStruct_dnGfh1DX0a11xSfGnyzF5G *moduleInstance, const
                   emlrtStack *sp, real_T *x, cgxertBlkSrcLocInfo *blkSrc)
{
  static const int32_T iv[2] = { 1, 30 };

  static const int32_T iv1[2] = { 1, 30 };

  static const int32_T iv2[2] = { 1, 4 };

  static char_T c_u[30] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'E', 'l', 'F', 'u', 'n', 'D', 'o', 'm', 'a', 'i', 'n',
    'E', 'r', 'r', 'o', 'r' };

  static char_T e_u[4] = { 's', 'q', 'r', 't' };

  cgxertBlkSrcLocInfo b_blkSrcLoc;
  cgxertBlkSrcLocInfo blkSrcLoc;
  cgxertBlkSrcLocInfo c_blkSrcLoc;
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *m;
  const mxArray *y;
  int32_T i;
  char_T b_u[30];
  char_T d_u[4];
  st.prev = sp;
  st.tls = sp->tls;
  if (*x < 0.0) {
    for (i = 0; i < 30; i++) {
      b_u[i] = c_u[i];
    }

    y = NULL;
    m = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a(cgxertPrepareEmlrtTLS(moduleInstance->S,
      (emlrtConstCTX)sp, blkSrc->sysIdx, blkSrc->blkIdx), 30, m, &b_u[0]);
    emlrtAssign(&y, m);
    for (i = 0; i < 30; i++) {
      b_u[i] = c_u[i];
    }

    b_y = NULL;
    m = emlrtCreateCharArray(2, &iv1[0]);
    emlrtInitCharArrayR2013a(cgxertPrepareEmlrtTLS(moduleInstance->S,
      (emlrtConstCTX)sp, blkSrc->sysIdx, blkSrc->blkIdx), 30, m, &b_u[0]);
    emlrtAssign(&b_y, m);
    for (i = 0; i < 4; i++) {
      d_u[i] = e_u[i];
    }

    c_y = NULL;
    m = emlrtCreateCharArray(2, &iv2[0]);
    emlrtInitCharArrayR2013a(cgxertPrepareEmlrtTLS(moduleInstance->S,
      (emlrtConstCTX)sp, blkSrc->sysIdx, blkSrc->blkIdx), 4, m, &d_u[0]);
    emlrtAssign(&c_y, m);
    st.site = &hm_emlrtRSI;
    blkSrcLoc.sysIdx = moduleInstance->sysIdx;
    blkSrcLoc.blkIdx = 6;
    b_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
    b_blkSrcLoc.blkIdx = 6;
    c_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
    c_blkSrcLoc.blkIdx = 6;
    b_error(moduleInstance, &st, y, getString(moduleInstance, &st, message
             (moduleInstance, &st, b_y, c_y, &p_emlrtMCI, &blkSrcLoc),
             &p_emlrtMCI, &b_blkSrcLoc), &p_emlrtMCI, &c_blkSrcLoc);
  }

  *x = muDoubleScalarSqrt(*x);
}

static void RigidBodyTree_validateConfigurationWithLimits
  (InstanceStruct_dnGfh1DX0a11xSfGnyzF5G *moduleInstance, const emlrtStack *sp,
   robotics_manip_internal_RigidBodyTree_1 *obj, real_T Q[6])
{
  static const int32_T iv[2] = { 1, 52 };

  static const int32_T iv1[2] = { 1, 46 };

  static const int32_T iv10[2] = { 1, 25 };

  static const int32_T iv2[2] = { 1, 52 };

  static const int32_T iv3[2] = { 1, 38 };

  static const int32_T iv4[2] = { 1, 25 };

  static const int32_T iv5[2] = { 1, 46 };

  static const int32_T iv6[2] = { 1, 51 };

  static const int32_T iv7[2] = { 1, 38 };

  static const int32_T iv8[2] = { 1, 25 };

  static const int32_T iv9[2] = { 1, 45 };

  static char_T c_u[52] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'v', 'a', 'l',
    'i', 'd', 'a', 't', 'e', 'D', 'y', 'n', 'a', 'm', 'i', 'c', 's', 'F', 'u',
    'n', 'c', 't', 'i', 'o', 'n', 'I', 'n', 'p', 'u', 't', 's', ':', 'e', 'x',
    'p', 'e', 'c', 't', 'e', 'd', 'N', 'o', 'n', 'N', 'a', 'N' };

  static char_T f_u[52] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'v', 'a', 'l',
    'i', 'd', 'a', 't', 'e', 'D', 'y', 'n', 'a', 'm', 'i', 'c', 's', 'F', 'u',
    'n', 'c', 't', 'i', 'o', 'n', 'I', 'n', 'p', 'u', 't', 's', ':', 'e', 'x',
    'p', 'e', 'c', 't', 'e', 'd', 'F', 'i', 'n', 'i', 't', 'e' };

  static char_T m_u[51] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'v', 'a', 'l',
    'i', 'd', 'a', 't', 'e', 'D', 'y', 'n', 'a', 'm', 'i', 'c', 's', 'F', 'u',
    'n', 'c', 't', 'i', 'o', 'n', 'I', 'n', 'p', 'u', 't', 's', ':', 'i', 'n',
    'c', 'o', 'r', 'r', 'e', 'c', 't', 'S', 'i', 'z', 'e' };

  static char_T e_u[46] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'V', 'a', 'l', 'i', 'd', 'a', 't', 'e', 'a', 't', 't',
    'r', 'i', 'b', 'u', 't', 'e', 's', 'e', 'x', 'p', 'e', 'c', 't', 'e', 'd',
    'N', 'o', 'n', 'N', 'a', 'N' };

  static char_T k_u[46] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'V', 'a', 'l', 'i', 'd', 'a', 't', 'e', 'a', 't', 't',
    'r', 'i', 'b', 'u', 't', 'e', 's', 'e', 'x', 'p', 'e', 'c', 't', 'e', 'd',
    'F', 'i', 'n', 'i', 't', 'e' };

  static char_T o_u[45] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'V', 'a', 'l', 'i', 'd', 'a', 't', 'e', 'a', 't', 't',
    'r', 'i', 'b', 'u', 't', 'e', 's', 'i', 'n', 'c', 'o', 'r', 'r', 'e', 'c',
    't', 'S', 'i', 'z', 'e' };

  static char_T i_u[38] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'v', 'a', 'l',
    'i', 'd', 'a', 't', 'e', 'a', 't', 't', 'r', 'i', 'b', 'u', 't', 'e', 's',
    ':', 'b', 'a', 'd', 'S', 'i', 'z', 'e', 'A', 'r', 'r', 'a', 'y' };

  static char_T j_u[25] = { 'j', 'o', 'i', 'n', 't', ' ', 'p', 'o', 's', 'i',
    't', 'i', 'o', 'n', ' ', 'v', 'e', 'c', 't', 'o', 'r', ' ', '(', 'q', ')' };

  cgxertBlkSrcLocInfo b_blkSrcLoc;
  cgxertBlkSrcLocInfo blkSrcLoc;
  cgxertBlkSrcLocInfo c_blkSrcLoc;
  cgxertBlkSrcLocInfo d_blkSrcLoc;
  cgxertBlkSrcLocInfo e_blkSrcLoc;
  cgxertBlkSrcLocInfo f_blkSrcLoc;
  cgxertBlkSrcLocInfo g_blkSrcLoc;
  cgxertBlkSrcLocInfo h_blkSrcLoc;
  cgxertBlkSrcLocInfo i_blkSrcLoc;
  cgxertBlkSrcLocInfo j_blkSrcLoc;
  cgxertBlkSrcLocInfo k_blkSrcLoc;
  cgxertBlkSrcLocInfo l_blkSrcLoc;
  cgxertBlkSrcLocInfo m_blkSrcLoc;
  cgxertBlkSrcLocInfo n_blkSrcLoc;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  emxArray_real_T *limits;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *d_y;
  const mxArray *e_y;
  const mxArray *f_y;
  const mxArray *g_y;
  const mxArray *h_y;
  const mxArray *i_y;
  const mxArray *j_y;
  const mxArray *k_y;
  const mxArray *m;
  const mxArray *y;
  real_T sz[2];
  real_T b_sz;
  int32_T ii_data[6];
  int32_T indicesUpperBoundViolation_data[6];
  int32_T ii_size[1];
  int32_T b_ii_data;
  int32_T i;
  int32_T indicesUpperBoundViolation_size_idx_0;
  int32_T k;
  char_T b_u[52];
  char_T l_u[51];
  char_T d_u[46];
  char_T n_u[45];
  char_T g_u[38];
  char_T h_u[25];
  boolean_T b_ubOK[6];
  boolean_T lbOK[6];
  boolean_T ubOK[6];
  boolean_T exitg1;
  boolean_T guard1 = false;
  boolean_T p;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &dg_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  sz[0] = obj->PositionNumber;
  sz[1] = 1.0;
  b_st.site = &hg_emlrtRSI;
  c_st.site = &k_emlrtRSI;
  p = true;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k < 6)) {
    if (!muDoubleScalarIsNaN(Q[k])) {
      k++;
    } else {
      p = false;
      exitg1 = true;
    }
  }

  if (!p) {
    for (i = 0; i < 52; i++) {
      b_u[i] = c_u[i];
    }

    y = NULL;
    m = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a(cgxertPrepareEmlrtTLS(moduleInstance->S, &c_st,
      moduleInstance->sysIdx, 6), 52, m, &b_u[0]);
    emlrtAssign(&y, m);
    for (i = 0; i < 46; i++) {
      d_u[i] = e_u[i];
    }

    b_y = NULL;
    m = emlrtCreateCharArray(2, &iv1[0]);
    emlrtInitCharArrayR2013a(cgxertPrepareEmlrtTLS(moduleInstance->S, &c_st,
      moduleInstance->sysIdx, 6), 46, m, &d_u[0]);
    emlrtAssign(&b_y, m);
    for (i = 0; i < 25; i++) {
      h_u[i] = j_u[i];
    }

    e_y = NULL;
    m = emlrtCreateCharArray(2, &iv4[0]);
    emlrtInitCharArrayR2013a(cgxertPrepareEmlrtTLS(moduleInstance->S, &c_st,
      moduleInstance->sysIdx, 6), 25, m, &h_u[0]);
    emlrtAssign(&e_y, m);
    d_st.site = &km_emlrtRSI;
    b_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
    b_blkSrcLoc.blkIdx = 6;
    c_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
    c_blkSrcLoc.blkIdx = 6;
    d_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
    d_blkSrcLoc.blkIdx = 6;
    b_error(moduleInstance, &d_st, y, getString(moduleInstance, &d_st, message
             (moduleInstance, &d_st, b_y, e_y, &f_emlrtMCI, &b_blkSrcLoc),
             &f_emlrtMCI, &c_blkSrcLoc), &f_emlrtMCI, &d_blkSrcLoc);
  }

  c_st.site = &k_emlrtRSI;
  p = true;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k < 6)) {
    if ((!muDoubleScalarIsInf(Q[k])) && (!muDoubleScalarIsNaN(Q[k]))) {
      k++;
    } else {
      p = false;
      exitg1 = true;
    }
  }

  if (!p) {
    for (i = 0; i < 52; i++) {
      b_u[i] = f_u[i];
    }

    c_y = NULL;
    m = emlrtCreateCharArray(2, &iv2[0]);
    emlrtInitCharArrayR2013a(cgxertPrepareEmlrtTLS(moduleInstance->S, &c_st,
      moduleInstance->sysIdx, 6), 52, m, &b_u[0]);
    emlrtAssign(&c_y, m);
    for (i = 0; i < 46; i++) {
      d_u[i] = k_u[i];
    }

    f_y = NULL;
    m = emlrtCreateCharArray(2, &iv5[0]);
    emlrtInitCharArrayR2013a(cgxertPrepareEmlrtTLS(moduleInstance->S, &c_st,
      moduleInstance->sysIdx, 6), 46, m, &d_u[0]);
    emlrtAssign(&f_y, m);
    for (i = 0; i < 25; i++) {
      h_u[i] = j_u[i];
    }

    i_y = NULL;
    m = emlrtCreateCharArray(2, &iv8[0]);
    emlrtInitCharArrayR2013a(cgxertPrepareEmlrtTLS(moduleInstance->S, &c_st,
      moduleInstance->sysIdx, 6), 25, m, &h_u[0]);
    emlrtAssign(&i_y, m);
    d_st.site = &jm_emlrtRSI;
    f_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
    f_blkSrcLoc.blkIdx = 6;
    h_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
    h_blkSrcLoc.blkIdx = 6;
    j_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
    j_blkSrcLoc.blkIdx = 6;
    b_error(moduleInstance, &d_st, c_y, getString(moduleInstance, &d_st, message
             (moduleInstance, &d_st, f_y, i_y, &b_emlrtMCI, &f_blkSrcLoc),
             &b_emlrtMCI, &h_blkSrcLoc), &b_emlrtMCI, &j_blkSrcLoc);
  }

  c_st.site = &k_emlrtRSI;
  p = true;
  for (k = 0; k < 2; k++) {
    b_sz = sz[k];
    if (p && ((b_sz != b_sz) || ((!muDoubleScalarIsInf(b_sz)) && (b_sz >= 0.0) &&
          (b_sz == muDoubleScalarFloor(b_sz))))) {
      p = true;
    } else {
      p = false;
    }
  }

  if (!p) {
    for (i = 0; i < 38; i++) {
      g_u[i] = i_u[i];
    }

    d_y = NULL;
    m = emlrtCreateCharArray(2, &iv3[0]);
    emlrtInitCharArrayR2013a(cgxertPrepareEmlrtTLS(moduleInstance->S, &c_st,
      moduleInstance->sysIdx, 6), 38, m, &g_u[0]);
    emlrtAssign(&d_y, m);
    for (i = 0; i < 38; i++) {
      g_u[i] = i_u[i];
    }

    h_y = NULL;
    m = emlrtCreateCharArray(2, &iv7[0]);
    emlrtInitCharArrayR2013a(cgxertPrepareEmlrtTLS(moduleInstance->S, &c_st,
      moduleInstance->sysIdx, 6), 38, m, &g_u[0]);
    emlrtAssign(&h_y, m);
    d_st.site = &qm_emlrtRSI;
    e_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
    e_blkSrcLoc.blkIdx = 6;
    g_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
    g_blkSrcLoc.blkIdx = 6;
    i_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
    i_blkSrcLoc.blkIdx = 6;
    b_error(moduleInstance, &d_st, d_y, getString(moduleInstance, &d_st,
             b_message(moduleInstance, &d_st, h_y, &r_emlrtMCI, &i_blkSrcLoc),
             &r_emlrtMCI, &e_blkSrcLoc), &r_emlrtMCI, &g_blkSrcLoc);
  }

  p = true;
  for (k = 0; k < 2; k++) {
    b_sz = sz[k];
    if (p) {
      if (b_sz != b_sz) {
        p = true;
      } else {
        if (k + 1 <= 1) {
          i = 6;
        } else {
          i = 1;
        }

        if (b_sz == (real_T)i) {
          p = true;
        } else {
          p = false;
        }
      }
    } else {
      p = false;
    }
  }

  if (!p) {
    for (i = 0; i < 51; i++) {
      l_u[i] = m_u[i];
    }

    g_y = NULL;
    m = emlrtCreateCharArray(2, &iv6[0]);
    emlrtInitCharArrayR2013a(cgxertPrepareEmlrtTLS(moduleInstance->S, &c_st,
      moduleInstance->sysIdx, 6), 51, m, &l_u[0]);
    emlrtAssign(&g_y, m);
    for (i = 0; i < 45; i++) {
      n_u[i] = o_u[i];
    }

    j_y = NULL;
    m = emlrtCreateCharArray(2, &iv9[0]);
    emlrtInitCharArrayR2013a(cgxertPrepareEmlrtTLS(moduleInstance->S, &c_st,
      moduleInstance->sysIdx, 6), 45, m, &n_u[0]);
    emlrtAssign(&j_y, m);
    for (i = 0; i < 25; i++) {
      h_u[i] = j_u[i];
    }

    k_y = NULL;
    m = emlrtCreateCharArray(2, &iv10[0]);
    emlrtInitCharArrayR2013a(cgxertPrepareEmlrtTLS(moduleInstance->S, &c_st,
      moduleInstance->sysIdx, 6), 25, m, &h_u[0]);
    emlrtAssign(&k_y, m);
    d_st.site = &im_emlrtRSI;
    k_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
    k_blkSrcLoc.blkIdx = 6;
    l_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
    l_blkSrcLoc.blkIdx = 6;
    m_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
    m_blkSrcLoc.blkIdx = 6;
    b_error(moduleInstance, &d_st, g_y, getString(moduleInstance, &d_st, message
             (moduleInstance, &d_st, j_y, k_y, &s_emlrtMCI, &k_blkSrcLoc),
             &s_emlrtMCI, &l_blkSrcLoc), &s_emlrtMCI, &m_blkSrcLoc);
  }

  emxInit_real_T(&limits, 2);
  st.site = &eg_emlrtRSI;
  blkSrcLoc.sysIdx = moduleInstance->sysIdx;
  blkSrcLoc.blkIdx = 6;
  RigidBodyTree_get_JointPositionLimits(moduleInstance, &st, obj, limits,
    &blkSrcLoc);
  if (limits->size[0] == 6) {
    for (i = 0; i < 6; i++) {
      ubOK[i] = (Q[i] <= limits->data[i + limits->size[0]] +
                 4.4408920985006262E-16);
    }
  } else {
    d_binary_expand_op(ubOK, Q, limits);
  }

  if (limits->size[0] == 6) {
    for (i = 0; i < 6; i++) {
      lbOK[i] = (Q[i] >= limits->data[i] - 4.4408920985006262E-16);
    }
  } else {
    c_binary_expand_op(lbOK, Q, limits);
  }

  p = true;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k < 6)) {
    if (!ubOK[k]) {
      p = false;
      exitg1 = true;
    } else {
      k++;
    }
  }

  guard1 = false;
  if (p) {
    p = true;
    k = 0;
    exitg1 = false;
    while ((!exitg1) && (k < 6)) {
      if (!lbOK[k]) {
        p = false;
        exitg1 = true;
      } else {
        k++;
      }
    }

    if (p) {
    } else {
      guard1 = true;
    }
  } else {
    guard1 = true;
  }

  if (guard1) {
    for (i = 0; i < 6; i++) {
      b_ubOK[i] = !ubOK[i];
    }

    st.site = &gg_emlrtRSI;
    eml_find(moduleInstance, &st, b_ubOK, ii_data, ii_size);
    indicesUpperBoundViolation_size_idx_0 = ii_size[0];
    k = ii_size[0];
    for (i = 0; i < k; i++) {
      b_ii_data = ii_data[i];
      ii_data[i] = b_ii_data;
      indicesUpperBoundViolation_data[i] = b_ii_data;
    }

    k = limits->size[0];
    for (i = 0; i < indicesUpperBoundViolation_size_idx_0; i++) {
      emlrtDynamicBoundsCheckR2012b(indicesUpperBoundViolation_data[i], 1, k,
        &sd_emlrtBCI, cgxertPrepareEmlrtTLS(moduleInstance->S, (emlrtConstCTX)sp,
        moduleInstance->sysIdx, 6));
    }

    emlrtSubAssignSizeCheck1dR2017a(ii_size[0], ii_size[0], &l_emlrtECI,
      cgxertPrepareEmlrtTLS(moduleInstance->S, (emlrtConstCTX)sp,
      moduleInstance->sysIdx, 6));
    for (i = 0; i < indicesUpperBoundViolation_size_idx_0; i++) {
      Q[ii_data[i] - 1] = limits->data[(indicesUpperBoundViolation_data[i] +
        limits->size[0]) - 1];
    }

    for (i = 0; i < 6; i++) {
      ubOK[i] = !lbOK[i];
    }

    st.site = &gg_emlrtRSI;
    eml_find(moduleInstance, &st, ubOK, ii_data, ii_size);
    indicesUpperBoundViolation_size_idx_0 = ii_size[0];
    k = ii_size[0];
    for (i = 0; i < k; i++) {
      b_ii_data = ii_data[i];
      ii_data[i] = b_ii_data;
      indicesUpperBoundViolation_data[i] = b_ii_data;
    }

    k = limits->size[0];
    for (i = 0; i < indicesUpperBoundViolation_size_idx_0; i++) {
      emlrtDynamicBoundsCheckR2012b(indicesUpperBoundViolation_data[i], 1, k,
        &td_emlrtBCI, cgxertPrepareEmlrtTLS(moduleInstance->S, (emlrtConstCTX)sp,
        moduleInstance->sysIdx, 6));
    }

    emlrtSubAssignSizeCheck1dR2017a(ii_size[0], ii_size[0], &m_emlrtECI,
      cgxertPrepareEmlrtTLS(moduleInstance->S, (emlrtConstCTX)sp,
      moduleInstance->sysIdx, 6));
    for (i = 0; i < indicesUpperBoundViolation_size_idx_0; i++) {
      Q[ii_data[i] - 1] = limits->data[indicesUpperBoundViolation_data[i] - 1];
    }

    st.site = &fg_emlrtRSI;
    b_st.site = &me_emlrtRSI;
    n_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
    n_blkSrcLoc.blkIdx = 6;
    e_warning(moduleInstance, &b_st, &n_blkSrcLoc);
  }

  emxFree_real_T(&limits);
}

static void c_sqrt(creal_T *x)
{
  real_T absxi;
  real_T absxr;
  real_T xi;
  real_T xr;
  xr = x->re;
  xi = x->im;
  if (xi == 0.0) {
    if (xr < 0.0) {
      absxr = 0.0;
      absxi = muDoubleScalarSqrt(-xr);
    } else {
      absxr = muDoubleScalarSqrt(xr);
      absxi = 0.0;
    }
  } else if (xr == 0.0) {
    if (xi < 0.0) {
      absxr = muDoubleScalarSqrt(-xi / 2.0);
      absxi = -absxr;
    } else {
      absxr = muDoubleScalarSqrt(xi / 2.0);
      absxi = absxr;
    }
  } else if (muDoubleScalarIsNaN(xr)) {
    absxr = rtNaN;
    absxi = rtNaN;
  } else if (muDoubleScalarIsNaN(xi)) {
    absxr = rtNaN;
    absxi = rtNaN;
  } else if (muDoubleScalarIsInf(xi)) {
    absxr = muDoubleScalarAbs(xi);
    absxi = xi;
  } else if (muDoubleScalarIsInf(xr)) {
    if (xr < 0.0) {
      absxr = 0.0;
      absxi = xi * -xr;
    } else {
      absxr = xr;
      absxi = 0.0;
    }
  } else {
    absxr = muDoubleScalarAbs(xr);
    absxi = muDoubleScalarAbs(xi);
    if ((absxr > 4.4942328371557893E+307) || (absxi > 4.4942328371557893E+307))
    {
      absxr *= 0.5;
      absxi *= 0.5;
      absxi = muDoubleScalarHypot(absxr, absxi);
      if (absxi > absxr) {
        absxr = muDoubleScalarSqrt(absxi) * muDoubleScalarSqrt(absxr / absxi +
          1.0);
      } else {
        absxr = muDoubleScalarSqrt(absxi) * 1.4142135623730951;
      }
    } else {
      absxr = muDoubleScalarSqrt((muDoubleScalarHypot(absxr, absxi) + absxr) *
        0.5);
    }

    if (xr > 0.0) {
      absxi = 0.5 * (xi / absxr);
    } else {
      if (xi < 0.0) {
        absxi = -absxr;
      } else {
        absxi = absxr;
      }

      absxr = 0.5 * (xi / absxi);
    }
  }

  x->re = absxr;
  x->im = absxi;
}

static real_T rescale(real_T *re, real_T *im)
{
  real_T absim;
  real_T scale;
  scale = muDoubleScalarAbs(*re);
  absim = muDoubleScalarAbs(*im);
  if (scale > absim) {
    if (*re < 0.0) {
      *re = -1.0;
    } else {
      *re = 1.0;
    }

    *im /= scale;
  } else if (absim > scale) {
    *re /= absim;
    if (*im < 0.0) {
      *im = -1.0;
    } else {
      *im = 1.0;
    }

    scale = absim;
  } else {
    if (*re < 0.0) {
      *re = -1.0;
    } else {
      *re = 1.0;
    }

    if (*im < 0.0) {
      *im = -1.0;
    } else {
      *im = 1.0;
    }
  }

  return scale;
}

static void xscal(int32_T n, real_T a, real_T x[9], int32_T ix0)
{
  __m128d r;
  int32_T i;
  int32_T k;
  int32_T scalarLB;
  int32_T vectorUB;
  i = ix0 + n;
  scalarLB = (i - ix0) / 2 * 2 + ix0;
  vectorUB = scalarLB - 2;
  for (k = ix0; k <= vectorUB; k += 2) {
    r = _mm_loadu_pd(&x[k - 1]);
    _mm_storeu_pd(&x[k - 1], _mm_mul_pd(_mm_set1_pd(a), r));
  }

  for (k = scalarLB; k < i; k++) {
    x[k - 1] *= a;
  }
}

static void xaxpy(int32_T n, real_T a, int32_T ix0, real_T y[9], int32_T iy0)
{
  int32_T ix;
  int32_T iy;
  int32_T k;
  if (!(a == 0.0)) {
    ix = ix0;
    iy = iy0 - 1;
    for (k = 0; k < n; k++) {
      y[iy] += a * y[ix - 1];
      ix++;
      iy++;
    }
  }
}

static void b_xscal(real_T a, real_T x[3], int32_T ix0)
{
  __m128d r;
  int32_T k;
  int32_T scalarLB;
  int32_T vectorUB;
  scalarLB = 2 + ix0;
  vectorUB = scalarLB - 2;
  for (k = ix0; k <= vectorUB; k += 2) {
    r = _mm_loadu_pd(&x[k - 1]);
    _mm_storeu_pd(&x[k - 1], _mm_mul_pd(_mm_set1_pd(a), r));
  }

  for (k = scalarLB; k <= ix0 + 1; k++) {
    x[k - 1] *= a;
  }
}

static void b_xaxpy(int32_T n, real_T a, real_T x[9], int32_T ix0, real_T y[3],
                    int32_T iy0)
{
  int32_T ix;
  int32_T iy;
  int32_T k;
  if (!(a == 0.0)) {
    ix = ix0;
    iy = iy0 - 1;
    for (k = 0; k < n; k++) {
      y[iy] += a * x[ix - 1];
      ix++;
      iy++;
    }
  }
}

static void c_xaxpy(int32_T n, real_T a, real_T x[3], int32_T ix0, real_T y[9],
                    int32_T iy0)
{
  int32_T ix;
  int32_T iy;
  int32_T k;
  if (!(a == 0.0)) {
    ix = ix0;
    iy = iy0 - 1;
    for (k = 0; k < n; k++) {
      y[iy] += a * x[ix - 1];
      ix++;
      iy++;
    }
  }
}

static void c_xscal(real_T a, real_T x[9], int32_T ix0)
{
  __m128d r;
  int32_T k;
  int32_T scalarLB;
  int32_T vectorUB;
  scalarLB = 2 + ix0;
  vectorUB = scalarLB - 2;
  for (k = ix0; k <= vectorUB; k += 2) {
    r = _mm_loadu_pd(&x[k - 1]);
    _mm_storeu_pd(&x[k - 1], _mm_mul_pd(_mm_set1_pd(a), r));
  }

  for (k = scalarLB; k <= ix0 + 2; k++) {
    x[k - 1] *= a;
  }
}

static void xrotg(real_T *a, real_T *b_b, real_T *c, real_T *s)
{
  *c = 0.0;
  *s = 0.0;
  drotg(a, b_b, c, s);
}

static void xrot(real_T x[9], int32_T ix0, int32_T iy0, real_T c, real_T s)
{
  real_T temp;
  int32_T ix;
  int32_T iy;
  int32_T k;
  ix = ix0 - 1;
  iy = iy0 - 1;
  for (k = 0; k < 3; k++) {
    temp = c * x[ix] + s * x[iy];
    x[iy] = c * x[iy] - s * x[ix];
    x[ix] = temp;
    iy++;
    ix++;
  }
}

static void xswap(real_T x[9], int32_T ix0, int32_T iy0)
{
  real_T temp;
  int32_T ix;
  int32_T iy;
  int32_T k;
  ix = ix0 - 1;
  iy = iy0 - 1;
  for (k = 0; k < 3; k++) {
    temp = x[ix];
    x[ix] = x[iy];
    x[iy] = temp;
    ix++;
    iy++;
  }
}

static void d_sqrt(InstanceStruct_dnGfh1DX0a11xSfGnyzF5G *moduleInstance, const
                   emlrtStack *sp, emxArray_real_T *x, cgxertBlkSrcLocInfo
                   *blkSrc)
{
  static const int32_T iv[2] = { 1, 30 };

  static const int32_T iv1[2] = { 1, 30 };

  static const int32_T iv2[2] = { 1, 4 };

  static char_T c_u[30] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'E', 'l', 'F', 'u', 'n', 'D', 'o', 'm', 'a', 'i', 'n',
    'E', 'r', 'r', 'o', 'r' };

  static char_T e_u[4] = { 's', 'q', 'r', 't' };

  cgxertBlkSrcLocInfo b_blkSrcLoc;
  cgxertBlkSrcLocInfo blkSrcLoc;
  cgxertBlkSrcLocInfo c_blkSrcLoc;
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *m;
  const mxArray *y;
  int32_T k;
  int32_T nx;
  char_T b_u[30];
  char_T d_u[4];
  boolean_T p;
  st.prev = sp;
  st.tls = sp->tls;
  p = false;
  nx = x->size[0] - 1;
  for (k = 0; k <= nx; k++) {
    if (p || (x->data[k] < 0.0)) {
      p = true;
    } else {
      p = false;
    }
  }

  if (p) {
    for (nx = 0; nx < 30; nx++) {
      b_u[nx] = c_u[nx];
    }

    y = NULL;
    m = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a(cgxertPrepareEmlrtTLS(moduleInstance->S,
      (emlrtConstCTX)sp, blkSrc->sysIdx, blkSrc->blkIdx), 30, m, &b_u[0]);
    emlrtAssign(&y, m);
    for (nx = 0; nx < 30; nx++) {
      b_u[nx] = c_u[nx];
    }

    b_y = NULL;
    m = emlrtCreateCharArray(2, &iv1[0]);
    emlrtInitCharArrayR2013a(cgxertPrepareEmlrtTLS(moduleInstance->S,
      (emlrtConstCTX)sp, blkSrc->sysIdx, blkSrc->blkIdx), 30, m, &b_u[0]);
    emlrtAssign(&b_y, m);
    for (nx = 0; nx < 4; nx++) {
      d_u[nx] = e_u[nx];
    }

    c_y = NULL;
    m = emlrtCreateCharArray(2, &iv2[0]);
    emlrtInitCharArrayR2013a(cgxertPrepareEmlrtTLS(moduleInstance->S,
      (emlrtConstCTX)sp, blkSrc->sysIdx, blkSrc->blkIdx), 4, m, &d_u[0]);
    emlrtAssign(&c_y, m);
    st.site = &hm_emlrtRSI;
    blkSrcLoc.sysIdx = moduleInstance->sysIdx;
    blkSrcLoc.blkIdx = 6;
    b_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
    b_blkSrcLoc.blkIdx = 6;
    c_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
    c_blkSrcLoc.blkIdx = 6;
    b_error(moduleInstance, &st, y, getString(moduleInstance, &st, message
             (moduleInstance, &st, b_y, c_y, &p_emlrtMCI, &blkSrcLoc),
             &p_emlrtMCI, &b_blkSrcLoc), &p_emlrtMCI, &c_blkSrcLoc);
  }

  nx = x->size[0] - 1;
  for (k = 0; k <= nx; k++) {
    x->data[k] = muDoubleScalarSqrt(x->data[k]);
  }
}

static real_T b_eml_rand_mt19937ar(InstanceStruct_dnGfh1DX0a11xSfGnyzF5G
  *moduleInstance, const emlrtStack *sp, uint32_T e_state[625])
{
  static real_T dv[257] = { 0.0, 0.215241895984875, 0.286174591792068,
    0.335737519214422, 0.375121332878378, 0.408389134611989, 0.43751840220787,
    0.46363433679088, 0.487443966139235, 0.50942332960209, 0.529909720661557,
    0.549151702327164, 0.567338257053817, 0.584616766106378, 0.601104617755991,
    0.61689699000775, 0.63207223638606, 0.646695714894993, 0.660822574244419,
    0.674499822837293, 0.687767892795788, 0.700661841106814, 0.713212285190975,
    0.725446140909999, 0.737387211434295, 0.749056662017815, 0.760473406430107,
    0.771654424224568, 0.782615023307232, 0.793369058840623, 0.80392911698997,
    0.814306670135215, 0.824512208752291, 0.834555354086381, 0.844444954909153,
    0.854189171008163, 0.863795545553308, 0.87327106808886, 0.882622229585165,
    0.891855070732941, 0.900975224461221, 0.909987953496718, 0.91889818364959,
    0.927710533401999, 0.936429340286575, 0.945058684468165, 0.953602409881086,
    0.96206414322304, 0.970447311064224, 0.978755155294224, 0.986990747099062,
    0.99515699963509, 1.00325667954467, 1.01129241744, 1.01926671746548,
    1.02718196603564, 1.03504043983344, 1.04284431314415, 1.05059566459093,
    1.05829648333067, 1.06594867476212, 1.07355406579244, 1.0811144097034,
    1.08863139065398, 1.09610662785202, 1.10354167942464, 1.11093804601357,
    1.11829717411934, 1.12562045921553, 1.13290924865253, 1.14016484436815,
    1.14738850542085, 1.15458145035993, 1.16174485944561, 1.16887987673083,
    1.17598761201545, 1.18306914268269, 1.19012551542669, 1.19715774787944,
    1.20416683014438, 1.2111537262437, 1.21811937548548, 1.22506469375653,
    1.23199057474614, 1.23889789110569, 1.24578749554863, 1.2526602218949,
    1.25951688606371, 1.26635828701823, 1.27318520766536, 1.27999841571382,
    1.28679866449324, 1.29358669373695, 1.30036323033084, 1.30712898903073,
    1.31388467315022, 1.32063097522106, 1.32736857762793, 1.33409815321936,
    1.3408203658964, 1.34753587118059, 1.35424531676263, 1.36094934303328,
    1.36764858359748, 1.37434366577317, 1.38103521107586, 1.38772383568998,
    1.39441015092814, 1.40109476367925, 1.4077782768464, 1.41446128977547,
    1.42114439867531, 1.42782819703026, 1.43451327600589, 1.44120022484872,
    1.44788963128058, 1.45458208188841, 1.46127816251028, 1.46797845861808,
    1.47468355569786, 1.48139403962819, 1.48811049705745, 1.49483351578049,
    1.50156368511546, 1.50830159628131, 1.51504784277671, 1.521803020761,
    1.52856772943771, 1.53534257144151, 1.542128153229, 1.54892508547417,
    1.55573398346918, 1.56255546753104, 1.56939016341512, 1.57623870273591,
    1.58310172339603, 1.58997987002419, 1.59687379442279, 1.60378415602609,
    1.61071162236983, 1.61765686957301, 1.62462058283303, 1.63160345693487,
    1.63860619677555, 1.64562951790478, 1.65267414708306, 1.65974082285818,
    1.66683029616166, 1.67394333092612, 1.68108070472517, 1.68824320943719,
    1.69543165193456, 1.70264685479992, 1.7098896570713, 1.71716091501782,
    1.72446150294804, 1.73179231405296, 1.73915426128591, 1.74654827828172,
    1.75397532031767, 1.76143636531891, 1.76893241491127, 1.77646449552452,
    1.78403365954944, 1.79164098655216, 1.79928758454972, 1.80697459135082,
    1.81470317596628, 1.82247454009388, 1.83028991968276, 1.83815058658281,
    1.84605785028518, 1.8540130597602, 1.86201760539967, 1.87007292107127,
    1.878180486293, 1.88634182853678, 1.8945585256707, 1.90283220855043,
    1.91116456377125, 1.91955733659319, 1.92801233405266, 1.93653142827569,
    1.94511656000868, 1.95376974238465, 1.96249306494436, 1.97128869793366,
    1.98015889690048, 1.98910600761744, 1.99813247135842, 2.00724083056053,
    2.0164337349062, 2.02571394786385, 2.03508435372962, 2.04454796521753,
    2.05410793165065, 2.06376754781173, 2.07353026351874, 2.0833996939983,
    2.09337963113879, 2.10347405571488, 2.11368715068665, 2.12402331568952,
    2.13448718284602, 2.14508363404789, 2.15581781987674, 2.16669518035431,
    2.17772146774029, 2.18890277162636, 2.20024554661128, 2.21175664288416,
    2.22344334009251, 2.23531338492992, 2.24737503294739, 2.25963709517379,
    2.27210899022838, 2.28480080272449, 2.29772334890286, 2.31088825060137,
    2.32430801887113, 2.33799614879653, 2.35196722737914, 2.36623705671729,
    2.38082279517208, 2.39574311978193, 2.41101841390112, 2.42667098493715,
    2.44272531820036, 2.4592083743347, 2.47614993967052, 2.49358304127105,
    2.51154444162669, 2.53007523215985, 2.54922155032478, 2.56903545268184,
    2.58957598670829, 2.61091051848882, 2.63311639363158, 2.65628303757674,
    2.68051464328574, 2.70593365612306, 2.73268535904401, 2.76094400527999,
    2.79092117400193, 2.82287739682644, 2.85713873087322, 2.89412105361341,
    2.93436686720889, 2.97860327988184, 3.02783779176959, 3.08352613200214,
    3.147889289518, 3.2245750520478, 3.32024473383983, 3.44927829856143,
    3.65415288536101, 3.91075795952492 };

  static real_T dv1[257] = { 1.0, 0.977101701267673, 0.959879091800108,
    0.9451989534423, 0.932060075959231, 0.919991505039348, 0.908726440052131,
    0.898095921898344, 0.887984660755834, 0.878309655808918, 0.869008688036857,
    0.860033621196332, 0.851346258458678, 0.842915653112205, 0.834716292986884,
    0.826726833946222, 0.818929191603703, 0.811307874312656, 0.803849483170964,
    0.796542330422959, 0.789376143566025, 0.782341832654803, 0.775431304981187,
    0.768637315798486, 0.761953346836795, 0.755373506507096, 0.748892447219157,
    0.742505296340151, 0.736207598126863, 0.729995264561476, 0.72386453346863,
    0.717811932630722, 0.711834248878248, 0.705928501332754, 0.700091918136512,
    0.694321916126117, 0.688616083004672, 0.682972161644995, 0.677388036218774,
    0.671861719897082, 0.66639134390875, 0.660975147776663, 0.655611470579697,
    0.650298743110817, 0.645035480820822, 0.639820277453057, 0.634651799287624,
    0.629528779924837, 0.624450015547027, 0.619414360605834, 0.614420723888914,
    0.609468064925773, 0.604555390697468, 0.599681752619125, 0.594846243767987,
    0.590047996332826, 0.585286179263371, 0.580559996100791, 0.575868682972354,
    0.571211506735253, 0.566587763256165, 0.561996775814525, 0.557437893618766,
    0.552910490425833, 0.548413963255266, 0.543947731190026, 0.539511234256952,
    0.535103932380458, 0.530725304403662, 0.526374847171684, 0.522052074672322,
    0.517756517229756, 0.513487720747327, 0.509245245995748, 0.505028667943468,
    0.500837575126149, 0.49667156905249, 0.492530263643869, 0.488413284705458,
    0.484320269426683, 0.480250865909047, 0.476204732719506, 0.47218153846773,
    0.468180961405694, 0.464202689048174, 0.460246417812843, 0.456311852678716,
    0.452398706861849, 0.448506701507203, 0.444635565395739, 0.440785034665804,
    0.436954852547985, 0.433144769112652, 0.429354541029442, 0.425583931338022,
    0.421832709229496, 0.418100649837848, 0.414387534040891, 0.410693148270188,
    0.407017284329473, 0.403359739221114, 0.399720314980197, 0.396098818515832,
    0.392495061459315, 0.388908860018789, 0.385340034840077, 0.381788410873393,
    0.378253817245619, 0.374736087137891, 0.371235057668239, 0.367750569779032,
    0.364282468129004, 0.360830600989648, 0.357394820145781, 0.353974980800077,
    0.350570941481406, 0.347182563956794, 0.343809713146851, 0.340452257044522,
    0.337110066637006, 0.333783015830718, 0.330470981379163, 0.327173842813601,
    0.323891482376391, 0.320623784956905, 0.317370638029914, 0.314131931596337,
    0.310907558126286, 0.307697412504292, 0.30450139197665, 0.301319396100803,
    0.298151326696685, 0.294997087799962, 0.291856585617095, 0.288729728482183,
    0.285616426815502, 0.282516593083708, 0.279430141761638, 0.276356989295668,
    0.273297054068577, 0.270250256365875, 0.267216518343561, 0.264195763997261,
    0.261187919132721, 0.258192911337619, 0.255210669954662, 0.252241126055942,
    0.249284212418529, 0.246339863501264, 0.24340801542275, 0.240488605940501,
    0.237581574431238, 0.23468686187233, 0.231804410824339, 0.228934165414681,
    0.226076071322381, 0.223230075763918, 0.220396127480152, 0.217574176724331,
    0.214764175251174, 0.211966076307031, 0.209179834621125, 0.206405406397881,
    0.203642749310335, 0.200891822494657, 0.198152586545776, 0.195425003514135,
    0.192709036903589, 0.190004651670465, 0.187311814223801, 0.1846304924268,
    0.181960655599523, 0.179302274522848, 0.176655321443735, 0.174019770081839,
    0.171395595637506, 0.168782774801212, 0.166181285764482, 0.163591108232366,
    0.161012223437511, 0.158444614155925, 0.15588826472448, 0.153343161060263,
    0.150809290681846, 0.148286642732575, 0.145775208005994, 0.143274978973514,
    0.140785949814445, 0.138308116448551, 0.135841476571254, 0.133386029691669,
    0.130941777173644, 0.12850872228, 0.126086870220186, 0.123676228201597,
    0.12127680548479, 0.11888861344291, 0.116511665625611, 0.114145977827839,
    0.111791568163838, 0.109448457146812, 0.107116667774684, 0.104796225622487,
    0.102487158941935, 0.10018949876881, 0.0979032790388625, 0.095628536713009,
    0.093365311912691, 0.0911136480663738, 0.0888735920682759,
    0.0866451944505581, 0.0844285095703535, 0.082223595813203,
    0.0800305158146631, 0.0778493367020961, 0.0756801303589272,
    0.0735229737139814, 0.0713779490588905, 0.0692451443970068,
    0.0671246538277886, 0.065016577971243, 0.0629210244377582, 0.06083810834954,
    0.0587679529209339, 0.0567106901062031, 0.0546664613248891,
    0.0526354182767924, 0.0506177238609479, 0.0486135532158687,
    0.0466230949019305, 0.0446465522512946, 0.0426841449164746,
    0.0407361106559411, 0.0388027074045262, 0.0368842156885674,
    0.0349809414617162, 0.0330932194585786, 0.0312214171919203,
    0.0293659397581334, 0.0275272356696031, 0.0257058040085489,
    0.0239022033057959, 0.0221170627073089, 0.0203510962300445,
    0.0186051212757247, 0.0168800831525432, 0.0151770883079353,
    0.0134974506017399, 0.0118427578579079, 0.0102149714397015,
    0.00861658276939875, 0.00705087547137324, 0.00552240329925101,
    0.00403797259336304, 0.00260907274610216, 0.0012602859304986,
    0.000477467764609386 };

  cgxertBlkSrcLocInfo b_blkSrcLoc;
  cgxertBlkSrcLocInfo blkSrcLoc;
  cgxertBlkSrcLocInfo c_blkSrcLoc;
  emlrtStack b_st;
  emlrtStack st;
  real_T b_u;
  real_T r;
  real_T x;
  int32_T exitg1;
  int32_T i;
  uint32_T u32[2];
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &sl_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  do {
    exitg1 = 0;
    genrand_uint32_vector(e_state, u32);
    i = (int32_T)((u32[1] >> 24U) + 1U);
    r = (((real_T)(u32[0] >> 3U) * 1.6777216E+7 + (real_T)((int32_T)u32[1] &
           16777215)) * 2.2204460492503131E-16 - 1.0) * dv[i];
    if (muDoubleScalarAbs(r) <= dv[i - 1]) {
      exitg1 = 1;
    } else if (i < 256) {
      b_st.site = &tl_emlrtRSI;
      blkSrcLoc.sysIdx = moduleInstance->sysIdx;
      blkSrcLoc.blkIdx = 6;
      b_u = genrandu(moduleInstance, &b_st, e_state, &blkSrcLoc);
      if (dv1[i] + b_u * (dv1[i - 1] - dv1[i]) < muDoubleScalarExp(-0.5 * r * r))
      {
        exitg1 = 1;
      }
    } else {
      do {
        b_st.site = &ul_emlrtRSI;
        b_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
        b_blkSrcLoc.blkIdx = 6;
        b_u = genrandu(moduleInstance, &b_st, e_state, &b_blkSrcLoc);
        x = muDoubleScalarLog(b_u) * 0.273661237329758;
        b_st.site = &vl_emlrtRSI;
        c_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
        c_blkSrcLoc.blkIdx = 6;
        b_u = genrandu(moduleInstance, &b_st, e_state, &c_blkSrcLoc);
      } while (!(-2.0 * muDoubleScalarLog(b_u) > x * x));

      if (r < 0.0) {
        r = x - 3.65415288536101;
      } else {
        r = 3.65415288536101 - x;
      }

      exitg1 = 1;
    }
  } while (exitg1 == 0);

  return r;
}

static real_T genrandu(InstanceStruct_dnGfh1DX0a11xSfGnyzF5G *moduleInstance,
  const emlrtStack *sp, uint32_T mt[625], cgxertBlkSrcLocInfo *blkSrc)
{
  static const int32_T iv[2] = { 1, 37 };

  static const int32_T iv1[2] = { 1, 37 };

  static char_T d_u[37] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T', 'L',
    'A', 'B', ':', 'r', 'a', 'n', 'd', '_', 'i', 'n', 'v', 'a', 'l', 'i', 'd',
    'T', 'w', 'i', 's', 't', 'e', 'r', 'S', 't', 'a', 't', 'e' };

  cgxertBlkSrcLocInfo b_blkSrcLoc;
  cgxertBlkSrcLocInfo blkSrcLoc;
  cgxertBlkSrcLocInfo c_blkSrcLoc;
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *m;
  const mxArray *y;
  real_T r;
  int32_T exitg1;
  int32_T i;
  uint32_T b_u[2];
  char_T c_u[37];
  st.prev = sp;
  st.tls = sp->tls;

  /* ========================= COPYRIGHT NOTICE ============================ */
  /*  This is a uniform (0,1) pseudorandom number generator based on:        */
  /*                                                                         */
  /*  A C-program for MT19937, with initialization improved 2002/1/26.       */
  /*  Coded by Takuji Nishimura and Makoto Matsumoto.                        */
  /*                                                                         */
  /*  Copyright (C) 1997 - 2002, Makoto Matsumoto and Takuji Nishimura,      */
  /*  All rights reserved.                                                   */
  /*                                                                         */
  /*  Redistribution and use in source and binary forms, with or without     */
  /*  modification, are permitted provided that the following conditions     */
  /*  are met:                                                               */
  /*                                                                         */
  /*    1. Redistributions of source code must retain the above copyright    */
  /*       notice, this list of conditions and the following disclaimer.     */
  /*                                                                         */
  /*    2. Redistributions in binary form must reproduce the above copyright */
  /*       notice, this list of conditions and the following disclaimer      */
  /*       in the documentation and/or other materials provided with the     */
  /*       distribution.                                                     */
  /*                                                                         */
  /*    3. The names of its contributors may not be used to endorse or       */
  /*       promote products derived from this software without specific      */
  /*       prior written permission.                                         */
  /*                                                                         */
  /*  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS    */
  /*  "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT      */
  /*  LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR  */
  /*  A PARTICULAR PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL THE COPYRIGHT  */
  /*  OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,  */
  /*  SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT       */
  /*  LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,  */
  /*  DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY  */
  /*  THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT    */
  /*  (INCLUDING  NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE */
  /*  OF THIS  SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.  */
  /*                                                                         */
  /* =============================   END   ================================= */
  do {
    exitg1 = 0;
    genrand_uint32_vector(mt, b_u);
    r = 1.1102230246251565E-16 * ((real_T)(b_u[0] >> 5U) * 6.7108864E+7 +
      (real_T)(b_u[1] >> 6U));
    if (r == 0.0) {
      if (!is_valid_state(mt)) {
        for (i = 0; i < 37; i++) {
          c_u[i] = d_u[i];
        }

        y = NULL;
        m = emlrtCreateCharArray(2, &iv[0]);
        emlrtInitCharArrayR2013a(cgxertPrepareEmlrtTLS(moduleInstance->S,
          (emlrtConstCTX)sp, blkSrc->sysIdx, blkSrc->blkIdx), 37, m, &c_u[0]);
        emlrtAssign(&y, m);
        for (i = 0; i < 37; i++) {
          c_u[i] = d_u[i];
        }

        b_y = NULL;
        m = emlrtCreateCharArray(2, &iv1[0]);
        emlrtInitCharArrayR2013a(cgxertPrepareEmlrtTLS(moduleInstance->S,
          (emlrtConstCTX)sp, blkSrc->sysIdx, blkSrc->blkIdx), 37, m, &c_u[0]);
        emlrtAssign(&b_y, m);
        st.site = &pm_emlrtRSI;
        blkSrcLoc.sysIdx = moduleInstance->sysIdx;
        blkSrcLoc.blkIdx = 6;
        b_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
        b_blkSrcLoc.blkIdx = 6;
        c_blkSrcLoc.sysIdx = moduleInstance->sysIdx;
        c_blkSrcLoc.blkIdx = 6;
        b_error(moduleInstance, &st, y, getString(moduleInstance, &st, b_message
                 (moduleInstance, &st, b_y, &d_emlrtMCI, &c_blkSrcLoc),
                 &d_emlrtMCI, &blkSrcLoc), &d_emlrtMCI, &b_blkSrcLoc);
      }
    } else {
      exitg1 = 1;
    }
  } while (exitg1 == 0);

  return r;
}

static void plus(emxArray_real_T *in1, emxArray_real_T *in2, emxArray_real_T
                 *in3)
{
  emxArray_real_T *b_in2;
  int32_T aux_0_0;
  int32_T aux_1_0;
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  emxInit_real_T1(&b_in2, 1);
  i = b_in2->size[0];
  if (in3->size[0] == 1) {
    b_in2->size[0] = in2->size[0];
  } else {
    b_in2->size[0] = in3->size[0];
  }

  emxEnsureCapacity_real_T1(b_in2, i);
  stride_0_0 = (in2->size[0] != 1);
  stride_1_0 = (in3->size[0] != 1);
  aux_0_0 = 0;
  aux_1_0 = 0;
  if (in3->size[0] == 1) {
    loop_ub = in2->size[0];
  } else {
    loop_ub = in3->size[0];
  }

  for (i = 0; i < loop_ub; i++) {
    b_in2->data[i] = in2->data[aux_0_0] + in3->data[aux_1_0];
    aux_1_0 += stride_1_0;
    aux_0_0 += stride_0_0;
  }

  i = in1->size[0];
  in1->size[0] = b_in2->size[0];
  emxEnsureCapacity_real_T1(in1, i);
  loop_ub = b_in2->size[0];
  for (i = 0; i < loop_ub; i++) {
    in1->data[i] = b_in2->data[i];
  }

  emxFree_real_T(&b_in2);
}

static void times(emxArray_real_T *in1, emxArray_real_T *in2)
{
  emxArray_real_T *b_in1;
  int32_T aux_0_0;
  int32_T aux_1_0;
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  emxInit_real_T1(&b_in1, 1);
  i = b_in1->size[0];
  if (in2->size[0] == 1) {
    b_in1->size[0] = in1->size[0];
  } else {
    b_in1->size[0] = in2->size[0];
  }

  emxEnsureCapacity_real_T1(b_in1, i);
  stride_0_0 = (in1->size[0] != 1);
  stride_1_0 = (in2->size[0] != 1);
  aux_0_0 = 0;
  aux_1_0 = 0;
  if (in2->size[0] == 1) {
    loop_ub = in1->size[0];
  } else {
    loop_ub = in2->size[0];
  }

  for (i = 0; i < loop_ub; i++) {
    b_in1->data[i] = in1->data[aux_0_0] * in2->data[aux_1_0];
    aux_1_0 += stride_1_0;
    aux_0_0 += stride_0_0;
  }

  i = in1->size[0];
  in1->size[0] = b_in1->size[0];
  emxEnsureCapacity_real_T1(in1, i);
  loop_ub = b_in1->size[0];
  for (i = 0; i < loop_ub; i++) {
    in1->data[i] = b_in1->data[i];
  }

  emxFree_real_T(&b_in1);
}

static void minus(emxArray_real_T *in1, emxArray_real_T *in2)
{
  emxArray_real_T *b_in1;
  int32_T aux_0_0;
  int32_T aux_1_0;
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  emxInit_real_T1(&b_in1, 1);
  i = b_in1->size[0];
  if (in2->size[0] == 1) {
    b_in1->size[0] = in1->size[0];
  } else {
    b_in1->size[0] = in2->size[0];
  }

  emxEnsureCapacity_real_T1(b_in1, i);
  stride_0_0 = (in1->size[0] != 1);
  stride_1_0 = (in2->size[0] != 1);
  aux_0_0 = 0;
  aux_1_0 = 0;
  if (in2->size[0] == 1) {
    loop_ub = in1->size[0];
  } else {
    loop_ub = in2->size[0];
  }

  for (i = 0; i < loop_ub; i++) {
    b_in1->data[i] = in1->data[aux_0_0] - in2->data[aux_1_0];
    aux_1_0 += stride_1_0;
    aux_0_0 += stride_0_0;
  }

  i = in1->size[0];
  in1->size[0] = b_in1->size[0];
  emxEnsureCapacity_real_T1(in1, i);
  loop_ub = b_in1->size[0];
  for (i = 0; i < loop_ub; i++) {
    in1->data[i] = b_in1->data[i];
  }

  emxFree_real_T(&b_in1);
}

static void b_plus(emxArray_real_T *in1, emxArray_real_T *in2)
{
  emxArray_real_T *b_in2;
  int32_T aux_0_0;
  int32_T aux_1_0;
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  emxInit_real_T1(&b_in2, 1);
  i = b_in2->size[0];
  if (in1->size[0] == 1) {
    b_in2->size[0] = in2->size[0];
  } else {
    b_in2->size[0] = in1->size[0];
  }

  emxEnsureCapacity_real_T1(b_in2, i);
  stride_0_0 = (in2->size[0] != 1);
  stride_1_0 = (in1->size[0] != 1);
  aux_0_0 = 0;
  aux_1_0 = 0;
  if (in1->size[0] == 1) {
    loop_ub = in2->size[0];
  } else {
    loop_ub = in1->size[0];
  }

  for (i = 0; i < loop_ub; i++) {
    b_in2->data[i] = in2->data[aux_0_0] + in1->data[aux_1_0];
    aux_1_0 += stride_1_0;
    aux_0_0 += stride_0_0;
  }

  i = in1->size[0];
  in1->size[0] = b_in2->size[0];
  emxEnsureCapacity_real_T1(in1, i);
  loop_ub = b_in2->size[0];
  for (i = 0; i < loop_ub; i++) {
    in1->data[i] = b_in2->data[i];
  }

  emxFree_real_T(&b_in2);
}

static void b_minus(real_T in1[36], emxArray_real_T *in2)
{
  real_T b_in1[36];
  int32_T aux_0_0;
  int32_T aux_0_1;
  int32_T i;
  int32_T i1;
  int32_T stride_0_0;
  int32_T stride_0_1;
  stride_0_0 = (in2->size[0] != 1);
  stride_0_1 = (in2->size[1] != 1);
  aux_0_1 = 0;
  for (i = 0; i < 6; i++) {
    aux_0_0 = 0;
    for (i1 = 0; i1 < 6; i1++) {
      b_in1[i1 + 6 * i] = in1[i1 + 6 * i] - in2->data[aux_0_0 + in2->size[0] *
        aux_0_1];
      aux_0_0 += stride_0_0;
    }

    aux_0_1 += stride_0_1;
  }

  for (i = 0; i < 36; i++) {
    in1[i] = b_in1[i];
  }
}

static void c_minus(real_T in1[36], emxArray_real_T *in2)
{
  real_T b_in1[36];
  int32_T aux_0_1;
  int32_T i;
  int32_T i1;
  int32_T stride_0_1;
  stride_0_1 = (in2->size[1] != 1);
  aux_0_1 = 0;
  for (i = 0; i < 6; i++) {
    for (i1 = 0; i1 < 6; i1++) {
      b_in1[i1 + 6 * i] = in1[i1 + 6 * i] - in2->data[i1 + 6 * aux_0_1];
    }

    aux_0_1 += stride_0_1;
  }

  for (i = 0; i < 36; i++) {
    in1[i] = b_in1[i];
  }
}

static void d_minus(emxArray_real_T *in1, emxArray_real_T *in2)
{
  emxArray_real_T *b_in2;
  int32_T aux_0_0;
  int32_T aux_1_0;
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  emxInit_real_T1(&b_in2, 1);
  i = b_in2->size[0];
  if (in1->size[0] == 1) {
    b_in2->size[0] = in2->size[0];
  } else {
    b_in2->size[0] = in1->size[0];
  }

  emxEnsureCapacity_real_T1(b_in2, i);
  stride_0_0 = (in2->size[0] != 1);
  stride_1_0 = (in1->size[0] != 1);
  aux_0_0 = 0;
  aux_1_0 = 0;
  if (in1->size[0] == 1) {
    loop_ub = in2->size[0];
  } else {
    loop_ub = in1->size[0];
  }

  for (i = 0; i < loop_ub; i++) {
    b_in2->data[i] = in2->data[aux_0_0] - in1->data[aux_1_0];
    aux_1_0 += stride_1_0;
    aux_0_0 += stride_0_0;
  }

  i = in1->size[0];
  in1->size[0] = b_in2->size[0];
  emxEnsureCapacity_real_T1(in1, i);
  loop_ub = b_in2->size[0];
  for (i = 0; i < loop_ub; i++) {
    in1->data[i] = b_in2->data[i];
  }

  emxFree_real_T(&b_in2);
}

static void rdivide(emxArray_real_T *in1, emxArray_real_T *in2)
{
  emxArray_real_T *b_in1;
  int32_T aux_0_0;
  int32_T aux_1_0;
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  emxInit_real_T1(&b_in1, 1);
  i = b_in1->size[0];
  if (in2->size[0] == 1) {
    b_in1->size[0] = in1->size[0];
  } else {
    b_in1->size[0] = in2->size[0];
  }

  emxEnsureCapacity_real_T1(b_in1, i);
  stride_0_0 = (in1->size[0] != 1);
  stride_1_0 = (in2->size[0] != 1);
  aux_0_0 = 0;
  aux_1_0 = 0;
  if (in2->size[0] == 1) {
    loop_ub = in1->size[0];
  } else {
    loop_ub = in2->size[0];
  }

  for (i = 0; i < loop_ub; i++) {
    b_in1->data[i] = in1->data[aux_0_0] / in2->data[aux_1_0];
    aux_1_0 += stride_1_0;
    aux_0_0 += stride_0_0;
  }

  i = in1->size[0];
  in1->size[0] = b_in1->size[0];
  emxEnsureCapacity_real_T1(in1, i);
  loop_ub = b_in1->size[0];
  for (i = 0; i < loop_ub; i++) {
    in1->data[i] = b_in1->data[i];
  }

  emxFree_real_T(&b_in1);
}

static void binary_expand_op(InstanceStruct_dnGfh1DX0a11xSfGnyzF5G
  *moduleInstance, const emlrtStack *sp, emlrtRSInfo in1, emxArray_real_T *in2,
  emxArray_real_T *in3, real_T *out1, int32_T *out2)
{
  emlrtStack st;
  emxArray_real_T *b_in2;
  int32_T aux_0_0;
  int32_T aux_1_0;
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  st.prev = sp;
  st.tls = sp->tls;
  emxInit_real_T1(&b_in2, 1);
  i = b_in2->size[0];
  if (in3->size[0] == 1) {
    b_in2->size[0] = in2->size[0];
  } else {
    b_in2->size[0] = in3->size[0];
  }

  emxEnsureCapacity_real_T1(b_in2, i);
  stride_0_0 = (in2->size[0] != 1);
  stride_1_0 = (in3->size[0] != 1);
  aux_0_0 = 0;
  aux_1_0 = 0;
  if (in3->size[0] == 1) {
    loop_ub = in2->size[0];
  } else {
    loop_ub = in3->size[0];
  }

  for (i = 0; i < loop_ub; i++) {
    b_in2->data[i] = in2->data[aux_0_0] / in3->data[aux_1_0];
    aux_1_0 += stride_1_0;
    aux_0_0 += stride_0_0;
  }

  st.site = &in1;
  maximum(moduleInstance, &st, b_in2, out1, out2);
  emxFree_real_T(&b_in2);
}

static void b_binary_expand_op(emxArray_boolean_T *in1, emxArray_real_T *in2,
  robotics_core_internal_DampedBFGSwGradientProjection *in3)
{
  emxArray_boolean_T *b_in2;
  int32_T aux_0_0;
  int32_T aux_1_0;
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  emxInit_boolean_T(&b_in2, 1);
  i = b_in2->size[0];
  if (in3->ConstraintBound->size[0] == 1) {
    b_in2->size[0] = in2->size[0];
  } else {
    b_in2->size[0] = in3->ConstraintBound->size[0];
  }

  emxEnsureCapacity_boolean_T(b_in2, i);
  stride_0_0 = (in2->size[0] != 1);
  stride_1_0 = (in3->ConstraintBound->size[0] != 1);
  aux_0_0 = 0;
  aux_1_0 = 0;
  if (in3->ConstraintBound->size[0] == 1) {
    loop_ub = in2->size[0];
  } else {
    loop_ub = in3->ConstraintBound->size[0];
  }

  for (i = 0; i < loop_ub; i++) {
    b_in2->data[i] = (in2->data[aux_0_0] >= in3->ConstraintBound->data[aux_1_0]);
    aux_1_0 += stride_1_0;
    aux_0_0 += stride_0_0;
  }

  i = in1->size[0];
  in1->size[0] = b_in2->size[0];
  emxEnsureCapacity_boolean_T(in1, i);
  loop_ub = b_in2->size[0];
  for (i = 0; i < loop_ub; i++) {
    in1->data[i] = b_in2->data[i];
  }

  emxFree_boolean_T(&b_in2);
}

static void c_binary_expand_op(boolean_T in1[6], real_T in2[6], emxArray_real_T *
  in3)
{
  int32_T aux_0_0;
  int32_T b_in3;
  int32_T i;
  boolean_T b_in2[6];
  b_in3 = in3->size[0];
  b_in3 = (b_in3 != 1);
  aux_0_0 = 0;
  for (i = 0; i < 6; i++) {
    b_in2[i] = (in2[i] >= in3->data[aux_0_0] - 4.4408920985006262E-16);
    aux_0_0 += b_in3;
  }

  for (i = 0; i < 6; i++) {
    in1[i] = b_in2[i];
  }
}

static void d_binary_expand_op(boolean_T in1[6], real_T in2[6], emxArray_real_T *
  in3)
{
  int32_T aux_0_0;
  int32_T b_in3;
  int32_T i;
  boolean_T b_in2[6];
  b_in3 = in3->size[0];
  b_in3 = (b_in3 != 1);
  aux_0_0 = 0;
  for (i = 0; i < 6; i++) {
    b_in2[i] = (in2[i] <= in3->data[aux_0_0 + in3->size[0]] +
                4.4408920985006262E-16);
    aux_0_0 += b_in3;
  }

  for (i = 0; i < 6; i++) {
    in1[i] = b_in2[i];
  }
}

static void emxInitStruct_robotics_slmanip_
  (robotics_slmanip_internal_block_IKBlock *pStruct)
{
  emxInitStruct_robotics_manip_in(&pStruct->TreeInternal);
  emxInitStruct_inverseKinematics(&pStruct->IKInternal);
}

static void emxInitStruct_robotics_manip_in
  (robotics_manip_internal_RigidBodyTree *pStruct)
{
  b_emxInitStruct_robotics_manip_in(&pStruct->Base);
  emxInitMatrix_robotics_manip_in(pStruct->_pobj0);
  emxInitMatrix_rigidBodyJoint(pStruct->_pobj1);
  b_emxInitMatrix_robotics_manip_in(pStruct->_pobj2);
}

static void b_emxInitStruct_robotics_manip_in(robotics_manip_internal_RigidBody *
  pStruct)
{
  emxInit_char_T(&pStruct->NameInternal, 2);
}

static void emxInit_char_T(emxArray_char_T **pEmxArray, int32_T b_numDimensions)
{
  emxArray_char_T *emxArray;
  int32_T i;
  *pEmxArray = (emxArray_char_T *)emlrtMallocMex(sizeof(emxArray_char_T));
  emxArray = *pEmxArray;
  emxArray->data = (char_T *)NULL;
  emxArray->numDimensions = b_numDimensions;
  emxArray->size = (int32_T *)emlrtMallocMex(sizeof(int32_T) * (uint32_T)
    b_numDimensions);
  emxArray->allocatedSize = 0;
  emxArray->canFreeData = true;
  for (i = 0; i < b_numDimensions; i++) {
    emxArray->size[i] = 0;
  }
}

static void emxInitMatrix_robotics_manip_in(robotics_manip_internal_CollisionSet
  pMatrix[15])
{
  int32_T i;
  for (i = 0; i < 15; i++) {
    c_emxInitStruct_robotics_manip_in(&pMatrix[i]);
  }
}

static void c_emxInitStruct_robotics_manip_in
  (robotics_manip_internal_CollisionSet *pStruct)
{
  emxInit_robotics_manip_internal(&pStruct->CollisionGeometries, 2);
}

static void emxInit_robotics_manip_internal(emxArray_robotics_manip_interna
  **pEmxArray, int32_T b_numDimensions)
{
  emxArray_robotics_manip_interna *emxArray;
  int32_T i;
  *pEmxArray = (emxArray_robotics_manip_interna *)emlrtMallocMex(sizeof
    (emxArray_robotics_manip_interna));
  emxArray = *pEmxArray;
  emxArray->data = (robotics_manip_internal_CollisionGeometry *)NULL;
  emxArray->numDimensions = b_numDimensions;
  emxArray->size = (int32_T *)emlrtMallocMex(sizeof(int32_T) * (uint32_T)
    b_numDimensions);
  emxArray->allocatedSize = 0;
  emxArray->canFreeData = true;
  for (i = 0; i < b_numDimensions; i++) {
    emxArray->size[i] = 0;
  }
}

static void emxInitMatrix_rigidBodyJoint(rigidBodyJoint pMatrix[15])
{
  int32_T i;
  for (i = 0; i < 15; i++) {
    emxInitStruct_rigidBodyJoint(&pMatrix[i]);
  }
}

static void emxInitStruct_rigidBodyJoint(rigidBodyJoint *pStruct)
{
  emxInit_char_T(&pStruct->Type, 2);
  emxInit_real_T(&pStruct->MotionSubspace, 2);
  emxInit_char_T(&pStruct->NameInternal, 2);
  emxInit_real_T(&pStruct->PositionLimitsInternal, 2);
  emxInit_real_T1(&pStruct->HomePositionInternal, 1);
}

static void emxInit_real_T(emxArray_real_T **pEmxArray, int32_T b_numDimensions)
{
  emxArray_real_T *emxArray;
  int32_T i;
  *pEmxArray = (emxArray_real_T *)emlrtMallocMex(sizeof(emxArray_real_T));
  emxArray = *pEmxArray;
  emxArray->data = (real_T *)NULL;
  emxArray->numDimensions = b_numDimensions;
  emxArray->size = (int32_T *)emlrtMallocMex(sizeof(int32_T) * (uint32_T)
    b_numDimensions);
  emxArray->allocatedSize = 0;
  emxArray->canFreeData = true;
  for (i = 0; i < b_numDimensions; i++) {
    emxArray->size[i] = 0;
  }
}

static void emxInit_real_T1(emxArray_real_T **pEmxArray, int32_T b_numDimensions)
{
  emxArray_real_T *emxArray;
  int32_T i;
  *pEmxArray = (emxArray_real_T *)emlrtMallocMex(sizeof(emxArray_real_T));
  emxArray = *pEmxArray;
  emxArray->data = (real_T *)NULL;
  emxArray->numDimensions = b_numDimensions;
  emxArray->size = (int32_T *)emlrtMallocMex(sizeof(int32_T) * (uint32_T)
    b_numDimensions);
  emxArray->allocatedSize = 0;
  emxArray->canFreeData = true;
  for (i = 0; i < b_numDimensions; i++) {
    emxArray->size[i] = 0;
  }
}

static void b_emxInitMatrix_robotics_manip_in(robotics_manip_internal_RigidBody
  pMatrix[14])
{
  int32_T i;
  for (i = 0; i < 14; i++) {
    b_emxInitStruct_robotics_manip_in(&pMatrix[i]);
  }
}

static void emxInitStruct_inverseKinematics(inverseKinematics *pStruct)
{
  emxInit_real_T(&pStruct->Limits, 2);
  d_emxInitStruct_robotics_manip_in(&pStruct->_pobj0);
  emxInitMatrix_rigidBodyJoint1(pStruct->_pobj1);
  c_emxInitMatrix_robotics_manip_in(pStruct->_pobj2);
  emxInitMatrix_robotics_manip_in(pStruct->_pobj3);
  e_emxInitStruct_robotics_manip_in(&pStruct->_pobj4);
  emxInitStruct_robotics_core_int(&pStruct->_pobj5);
}

static void d_emxInitStruct_robotics_manip_in
  (robotics_manip_internal_IKExtraArgs *pStruct)
{
  emxInit_char_T(&pStruct->BodyName, 2);
  emxInit_real_T1(&pStruct->ErrTemp, 1);
  emxInit_real_T1(&pStruct->GradTemp, 1);
}

static void emxInitMatrix_rigidBodyJoint1(rigidBodyJoint pMatrix[14])
{
  int32_T i;
  for (i = 0; i < 14; i++) {
    emxInitStruct_rigidBodyJoint(&pMatrix[i]);
  }
}

static void c_emxInitMatrix_robotics_manip_in(robotics_manip_internal_RigidBody
  pMatrix[7])
{
  int32_T i;
  for (i = 0; i < 7; i++) {
    b_emxInitStruct_robotics_manip_in(&pMatrix[i]);
  }
}

static void e_emxInitStruct_robotics_manip_in
  (robotics_manip_internal_RigidBodyTree_1 *pStruct)
{
  b_emxInitStruct_robotics_manip_in(&pStruct->Base);
  c_emxInitMatrix_robotics_manip_in(pStruct->_pobj0);
  d_emxInitMatrix_robotics_manip_in(pStruct->_pobj1);
  emxInitMatrix_rigidBodyJoint2(pStruct->_pobj2);
}

static void d_emxInitMatrix_robotics_manip_in
  (robotics_manip_internal_CollisionSet pMatrix[8])
{
  int32_T i;
  for (i = 0; i < 8; i++) {
    c_emxInitStruct_robotics_manip_in(&pMatrix[i]);
  }
}

static void emxInitMatrix_rigidBodyJoint2(rigidBodyJoint pMatrix[8])
{
  int32_T i;
  for (i = 0; i < 8; i++) {
    emxInitStruct_rigidBodyJoint(&pMatrix[i]);
  }
}

static void emxInitStruct_robotics_core_int
  (robotics_core_internal_DampedBFGSwGradientProjection *pStruct)
{
  emxInit_real_T(&pStruct->ConstraintMatrix, 2);
  emxInit_real_T1(&pStruct->ConstraintBound, 1);
}

static void emxFree_char_T(emxArray_char_T **pEmxArray)
{
  if (*pEmxArray != (emxArray_char_T *)NULL) {
    if (((*pEmxArray)->data != (char_T *)NULL) && (*pEmxArray)->canFreeData) {
      emlrtFreeMex((*pEmxArray)->data);
    }

    emlrtFreeMex((*pEmxArray)->size);
    emlrtFreeMex(*pEmxArray);
    *pEmxArray = (emxArray_char_T *)NULL;
  }
}

static void emxFreeStruct_robotics_manip_in(robotics_manip_internal_RigidBody
  *pStruct)
{
  emxFree_char_T(&pStruct->NameInternal);
}

static void b_emxFreeStruct_robotics_manip_in
  (robotics_manip_internal_RigidBodyTree *pStruct)
{
  emxFreeStruct_robotics_manip_in(&pStruct->Base);
  emxFreeMatrix_robotics_manip_in(pStruct->_pobj0);
  emxFreeMatrix_rigidBodyJoint(pStruct->_pobj1);
  b_emxFreeMatrix_robotics_manip_in(pStruct->_pobj2);
}

static void emxFreeMatrix_robotics_manip_in(robotics_manip_internal_CollisionSet
  pMatrix[15])
{
  int32_T i;
  for (i = 0; i < 15; i++) {
    c_emxFreeStruct_robotics_manip_in(&pMatrix[i]);
  }
}

static void emxFree_robotics_manip_internal(emxArray_robotics_manip_interna
  **pEmxArray)
{
  if (*pEmxArray != (emxArray_robotics_manip_interna *)NULL) {
    if (((*pEmxArray)->data != (robotics_manip_internal_CollisionGeometry *)NULL)
        && (*pEmxArray)->canFreeData) {
      emlrtFreeMex((*pEmxArray)->data);
    }

    emlrtFreeMex((*pEmxArray)->size);
    emlrtFreeMex(*pEmxArray);
    *pEmxArray = (emxArray_robotics_manip_interna *)NULL;
  }
}

static void c_emxFreeStruct_robotics_manip_in
  (robotics_manip_internal_CollisionSet *pStruct)
{
  emxFree_robotics_manip_internal(&pStruct->CollisionGeometries);
}

static void emxFreeMatrix_rigidBodyJoint(rigidBodyJoint pMatrix[15])
{
  int32_T i;
  for (i = 0; i < 15; i++) {
    emxFreeStruct_rigidBodyJoint(&pMatrix[i]);
  }
}

static void emxFreeStruct_rigidBodyJoint(rigidBodyJoint *pStruct)
{
  emxFree_char_T(&pStruct->Type);
  emxFree_real_T(&pStruct->MotionSubspace);
  emxFree_char_T(&pStruct->NameInternal);
  emxFree_real_T(&pStruct->PositionLimitsInternal);
  emxFree_real_T(&pStruct->HomePositionInternal);
}

static void emxFree_real_T(emxArray_real_T **pEmxArray)
{
  if (*pEmxArray != (emxArray_real_T *)NULL) {
    if (((*pEmxArray)->data != (real_T *)NULL) && (*pEmxArray)->canFreeData) {
      emlrtFreeMex((*pEmxArray)->data);
    }

    emlrtFreeMex((*pEmxArray)->size);
    emlrtFreeMex(*pEmxArray);
    *pEmxArray = (emxArray_real_T *)NULL;
  }
}

static void b_emxFreeMatrix_robotics_manip_in(robotics_manip_internal_RigidBody
  pMatrix[14])
{
  int32_T i;
  for (i = 0; i < 14; i++) {
    emxFreeStruct_robotics_manip_in(&pMatrix[i]);
  }
}

static void emxFreeStruct_robotics_slmanip_
  (robotics_slmanip_internal_block_IKBlock *pStruct)
{
  b_emxFreeStruct_robotics_manip_in(&pStruct->TreeInternal);
  emxFreeStruct_inverseKinematics(&pStruct->IKInternal);
}

static void emxFreeStruct_inverseKinematics(inverseKinematics *pStruct)
{
  emxFree_real_T(&pStruct->Limits);
  d_emxFreeStruct_robotics_manip_in(&pStruct->_pobj0);
  emxFreeMatrix_rigidBodyJoint1(pStruct->_pobj1);
  c_emxFreeMatrix_robotics_manip_in(pStruct->_pobj2);
  emxFreeMatrix_robotics_manip_in(pStruct->_pobj3);
  e_emxFreeStruct_robotics_manip_in(&pStruct->_pobj4);
  emxFreeStruct_robotics_core_int(&pStruct->_pobj5);
}

static void d_emxFreeStruct_robotics_manip_in
  (robotics_manip_internal_IKExtraArgs *pStruct)
{
  emxFree_char_T(&pStruct->BodyName);
  emxFree_real_T(&pStruct->ErrTemp);
  emxFree_real_T(&pStruct->GradTemp);
}

static void emxFreeMatrix_rigidBodyJoint1(rigidBodyJoint pMatrix[14])
{
  int32_T i;
  for (i = 0; i < 14; i++) {
    emxFreeStruct_rigidBodyJoint(&pMatrix[i]);
  }
}

static void c_emxFreeMatrix_robotics_manip_in(robotics_manip_internal_RigidBody
  pMatrix[7])
{
  int32_T i;
  for (i = 0; i < 7; i++) {
    emxFreeStruct_robotics_manip_in(&pMatrix[i]);
  }
}

static void e_emxFreeStruct_robotics_manip_in
  (robotics_manip_internal_RigidBodyTree_1 *pStruct)
{
  emxFreeStruct_robotics_manip_in(&pStruct->Base);
  c_emxFreeMatrix_robotics_manip_in(pStruct->_pobj0);
  d_emxFreeMatrix_robotics_manip_in(pStruct->_pobj1);
  emxFreeMatrix_rigidBodyJoint2(pStruct->_pobj2);
}

static void d_emxFreeMatrix_robotics_manip_in
  (robotics_manip_internal_CollisionSet pMatrix[8])
{
  int32_T i;
  for (i = 0; i < 8; i++) {
    c_emxFreeStruct_robotics_manip_in(&pMatrix[i]);
  }
}

static void emxFreeMatrix_rigidBodyJoint2(rigidBodyJoint pMatrix[8])
{
  int32_T i;
  for (i = 0; i < 8; i++) {
    emxFreeStruct_rigidBodyJoint(&pMatrix[i]);
  }
}

static void emxFreeStruct_robotics_core_int
  (robotics_core_internal_DampedBFGSwGradientProjection *pStruct)
{
  emxFree_real_T(&pStruct->ConstraintMatrix);
  emxFree_real_T(&pStruct->ConstraintBound);
}

static void emxEnsureCapacity_char_T(emxArray_char_T *emxArray, int32_T oldNumel)
{
  int32_T i;
  int32_T newNumel;
  void *newData;
  if (oldNumel < 0) {
    oldNumel = 0;
  }

  newNumel = 1;
  for (i = 0; i < emxArray->numDimensions; i++) {
    newNumel *= emxArray->size[i];
  }

  if (newNumel > emxArray->allocatedSize) {
    i = emxArray->allocatedSize;
    if (i < 16) {
      i = 16;
    }

    while (i < newNumel) {
      if (i > 1073741823) {
        i = MAX_int32_T;
      } else {
        i <<= 1;
      }
    }

    newData = emlrtCallocMex((uint32_T)i, sizeof(char_T));
    if (emxArray->data != NULL) {
      memcpy(newData, emxArray->data, sizeof(char_T) * (uint32_T)oldNumel);
      if (emxArray->canFreeData) {
        emlrtFreeMex(emxArray->data);
      }
    }

    emxArray->data = (char_T *)newData;
    emxArray->allocatedSize = i;
    emxArray->canFreeData = true;
  }
}

static void emxEnsureCapacity_real_T(emxArray_real_T *emxArray, int32_T oldNumel)
{
  int32_T i;
  int32_T newNumel;
  void *newData;
  if (oldNumel < 0) {
    oldNumel = 0;
  }

  newNumel = 1;
  for (i = 0; i < emxArray->numDimensions; i++) {
    newNumel *= emxArray->size[i];
  }

  if (newNumel > emxArray->allocatedSize) {
    i = emxArray->allocatedSize;
    if (i < 16) {
      i = 16;
    }

    while (i < newNumel) {
      if (i > 1073741823) {
        i = MAX_int32_T;
      } else {
        i <<= 1;
      }
    }

    newData = emlrtCallocMex((uint32_T)i, sizeof(real_T));
    if (emxArray->data != NULL) {
      memcpy(newData, emxArray->data, sizeof(real_T) * (uint32_T)oldNumel);
      if (emxArray->canFreeData) {
        emlrtFreeMex(emxArray->data);
      }
    }

    emxArray->data = (real_T *)newData;
    emxArray->allocatedSize = i;
    emxArray->canFreeData = true;
  }
}

static void emxEnsureCapacity_real_T1(emxArray_real_T *emxArray, int32_T
  oldNumel)
{
  int32_T i;
  int32_T newNumel;
  void *newData;
  if (oldNumel < 0) {
    oldNumel = 0;
  }

  newNumel = 1;
  for (i = 0; i < emxArray->numDimensions; i++) {
    newNumel *= emxArray->size[i];
  }

  if (newNumel > emxArray->allocatedSize) {
    i = emxArray->allocatedSize;
    if (i < 16) {
      i = 16;
    }

    while (i < newNumel) {
      if (i > 1073741823) {
        i = MAX_int32_T;
      } else {
        i <<= 1;
      }
    }

    newData = emlrtCallocMex((uint32_T)i, sizeof(real_T));
    if (emxArray->data != NULL) {
      memcpy(newData, emxArray->data, sizeof(real_T) * (uint32_T)oldNumel);
      if (emxArray->canFreeData) {
        emlrtFreeMex(emxArray->data);
      }
    }

    emxArray->data = (real_T *)newData;
    emxArray->allocatedSize = i;
    emxArray->canFreeData = true;
  }
}

static void emxEnsureCapacity_robotics_mani(emxArray_robotics_manip_interna
  *emxArray, int32_T oldNumel)
{
  int32_T i;
  int32_T newNumel;
  void *newData;
  if (oldNumel < 0) {
    oldNumel = 0;
  }

  newNumel = 1;
  for (i = 0; i < emxArray->numDimensions; i++) {
    newNumel *= emxArray->size[i];
  }

  if (newNumel > emxArray->allocatedSize) {
    i = emxArray->allocatedSize;
    if (i < 16) {
      i = 16;
    }

    while (i < newNumel) {
      if (i > 1073741823) {
        i = MAX_int32_T;
      } else {
        i <<= 1;
      }
    }

    newData = emlrtCallocMex((uint32_T)i, sizeof
      (robotics_manip_internal_CollisionGeometry));
    if (emxArray->data != NULL) {
      memcpy(newData, emxArray->data, sizeof
             (robotics_manip_internal_CollisionGeometry) * (uint32_T)oldNumel);
      if (emxArray->canFreeData) {
        emlrtFreeMex(emxArray->data);
      }
    }

    emxArray->data = (robotics_manip_internal_CollisionGeometry *)newData;
    emxArray->allocatedSize = i;
    emxArray->canFreeData = true;
  }
}

static void emxEnsureCapacity_int32_T(emxArray_int32_T *emxArray, int32_T
  oldNumel)
{
  int32_T i;
  int32_T newNumel;
  void *newData;
  if (oldNumel < 0) {
    oldNumel = 0;
  }

  newNumel = 1;
  for (i = 0; i < emxArray->numDimensions; i++) {
    newNumel *= emxArray->size[i];
  }

  if (newNumel > emxArray->allocatedSize) {
    i = emxArray->allocatedSize;
    if (i < 16) {
      i = 16;
    }

    while (i < newNumel) {
      if (i > 1073741823) {
        i = MAX_int32_T;
      } else {
        i <<= 1;
      }
    }

    newData = emlrtCallocMex((uint32_T)i, sizeof(int32_T));
    if (emxArray->data != NULL) {
      memcpy(newData, emxArray->data, sizeof(int32_T) * (uint32_T)oldNumel);
      if (emxArray->canFreeData) {
        emlrtFreeMex(emxArray->data);
      }
    }

    emxArray->data = (int32_T *)newData;
    emxArray->allocatedSize = i;
    emxArray->canFreeData = true;
  }
}

static void emxEnsureCapacity_int32_T1(emxArray_int32_T *emxArray, int32_T
  oldNumel)
{
  int32_T i;
  int32_T newNumel;
  void *newData;
  if (oldNumel < 0) {
    oldNumel = 0;
  }

  newNumel = 1;
  for (i = 0; i < emxArray->numDimensions; i++) {
    newNumel *= emxArray->size[i];
  }

  if (newNumel > emxArray->allocatedSize) {
    i = emxArray->allocatedSize;
    if (i < 16) {
      i = 16;
    }

    while (i < newNumel) {
      if (i > 1073741823) {
        i = MAX_int32_T;
      } else {
        i <<= 1;
      }
    }

    newData = emlrtCallocMex((uint32_T)i, sizeof(int32_T));
    if (emxArray->data != NULL) {
      memcpy(newData, emxArray->data, sizeof(int32_T) * (uint32_T)oldNumel);
      if (emxArray->canFreeData) {
        emlrtFreeMex(emxArray->data);
      }
    }

    emxArray->data = (int32_T *)newData;
    emxArray->allocatedSize = i;
    emxArray->canFreeData = true;
  }
}

static void emxInit_int32_T(emxArray_int32_T **pEmxArray, int32_T
  b_numDimensions)
{
  emxArray_int32_T *emxArray;
  int32_T i;
  *pEmxArray = (emxArray_int32_T *)emlrtMallocMex(sizeof(emxArray_int32_T));
  emxArray = *pEmxArray;
  emxArray->data = (int32_T *)NULL;
  emxArray->numDimensions = b_numDimensions;
  emxArray->size = (int32_T *)emlrtMallocMex(sizeof(int32_T) * (uint32_T)
    b_numDimensions);
  emxArray->allocatedSize = 0;
  emxArray->canFreeData = true;
  for (i = 0; i < b_numDimensions; i++) {
    emxArray->size[i] = 0;
  }
}

static void emxInit_int32_T1(emxArray_int32_T **pEmxArray, int32_T
  b_numDimensions)
{
  emxArray_int32_T *emxArray;
  int32_T i;
  *pEmxArray = (emxArray_int32_T *)emlrtMallocMex(sizeof(emxArray_int32_T));
  emxArray = *pEmxArray;
  emxArray->data = (int32_T *)NULL;
  emxArray->numDimensions = b_numDimensions;
  emxArray->size = (int32_T *)emlrtMallocMex(sizeof(int32_T) * (uint32_T)
    b_numDimensions);
  emxArray->allocatedSize = 0;
  emxArray->canFreeData = true;
  for (i = 0; i < b_numDimensions; i++) {
    emxArray->size[i] = 0;
  }
}

static void emxFree_int32_T(emxArray_int32_T **pEmxArray)
{
  if (*pEmxArray != (emxArray_int32_T *)NULL) {
    if (((*pEmxArray)->data != (int32_T *)NULL) && (*pEmxArray)->canFreeData) {
      emlrtFreeMex((*pEmxArray)->data);
    }

    emlrtFreeMex((*pEmxArray)->size);
    emlrtFreeMex(*pEmxArray);
    *pEmxArray = (emxArray_int32_T *)NULL;
  }
}

static void emxEnsureCapacity_boolean_T(emxArray_boolean_T *emxArray, int32_T
  oldNumel)
{
  int32_T i;
  int32_T newNumel;
  void *newData;
  if (oldNumel < 0) {
    oldNumel = 0;
  }

  newNumel = 1;
  for (i = 0; i < emxArray->numDimensions; i++) {
    newNumel *= emxArray->size[i];
  }

  if (newNumel > emxArray->allocatedSize) {
    i = emxArray->allocatedSize;
    if (i < 16) {
      i = 16;
    }

    while (i < newNumel) {
      if (i > 1073741823) {
        i = MAX_int32_T;
      } else {
        i <<= 1;
      }
    }

    newData = emlrtCallocMex((uint32_T)i, sizeof(boolean_T));
    if (emxArray->data != NULL) {
      memcpy(newData, emxArray->data, sizeof(boolean_T) * (uint32_T)oldNumel);
      if (emxArray->canFreeData) {
        emlrtFreeMex(emxArray->data);
      }
    }

    emxArray->data = (boolean_T *)newData;
    emxArray->allocatedSize = i;
    emxArray->canFreeData = true;
  }
}

static void emxInit_boolean_T(emxArray_boolean_T **pEmxArray, int32_T
  b_numDimensions)
{
  emxArray_boolean_T *emxArray;
  int32_T i;
  *pEmxArray = (emxArray_boolean_T *)emlrtMallocMex(sizeof(emxArray_boolean_T));
  emxArray = *pEmxArray;
  emxArray->data = (boolean_T *)NULL;
  emxArray->numDimensions = b_numDimensions;
  emxArray->size = (int32_T *)emlrtMallocMex(sizeof(int32_T) * (uint32_T)
    b_numDimensions);
  emxArray->allocatedSize = 0;
  emxArray->canFreeData = true;
  for (i = 0; i < b_numDimensions; i++) {
    emxArray->size[i] = 0;
  }
}

static void emxFree_boolean_T(emxArray_boolean_T **pEmxArray)
{
  if (*pEmxArray != (emxArray_boolean_T *)NULL) {
    if (((*pEmxArray)->data != (boolean_T *)NULL) && (*pEmxArray)->canFreeData)
    {
      emlrtFreeMex((*pEmxArray)->data);
    }

    emlrtFreeMex((*pEmxArray)->size);
    emlrtFreeMex(*pEmxArray);
    *pEmxArray = (emxArray_boolean_T *)NULL;
  }
}

static void emxEnsureCapacity_ptrdiff_t(emxArray_ptrdiff_t *emxArray, int32_T
  oldNumel)
{
  int32_T i;
  int32_T newNumel;
  void *newData;
  if (oldNumel < 0) {
    oldNumel = 0;
  }

  newNumel = 1;
  for (i = 0; i < emxArray->numDimensions; i++) {
    newNumel *= emxArray->size[i];
  }

  if (newNumel > emxArray->allocatedSize) {
    i = emxArray->allocatedSize;
    if (i < 16) {
      i = 16;
    }

    while (i < newNumel) {
      if (i > 1073741823) {
        i = MAX_int32_T;
      } else {
        i <<= 1;
      }
    }

    newData = emlrtCallocMex((uint32_T)i, sizeof(ptrdiff_t));
    if (emxArray->data != NULL) {
      memcpy(newData, emxArray->data, sizeof(ptrdiff_t) * (uint32_T)oldNumel);
      if (emxArray->canFreeData) {
        emlrtFreeMex(emxArray->data);
      }
    }

    emxArray->data = (ptrdiff_t *)newData;
    emxArray->allocatedSize = i;
    emxArray->canFreeData = true;
  }
}

static void emxInit_ptrdiff_t(emxArray_ptrdiff_t **pEmxArray, int32_T
  b_numDimensions)
{
  emxArray_ptrdiff_t *emxArray;
  int32_T i;
  *pEmxArray = (emxArray_ptrdiff_t *)emlrtMallocMex(sizeof(emxArray_ptrdiff_t));
  emxArray = *pEmxArray;
  emxArray->data = (ptrdiff_t *)NULL;
  emxArray->numDimensions = b_numDimensions;
  emxArray->size = (int32_T *)emlrtMallocMex(sizeof(int32_T) * (uint32_T)
    b_numDimensions);
  emxArray->allocatedSize = 0;
  emxArray->canFreeData = true;
  for (i = 0; i < b_numDimensions; i++) {
    emxArray->size[i] = 0;
  }
}

static void emxFree_ptrdiff_t(emxArray_ptrdiff_t **pEmxArray)
{
  if (*pEmxArray != (emxArray_ptrdiff_t *)NULL) {
    if (((*pEmxArray)->data != (ptrdiff_t *)NULL) && (*pEmxArray)->canFreeData)
    {
      emlrtFreeMex((*pEmxArray)->data);
    }

    emlrtFreeMex((*pEmxArray)->size);
    emlrtFreeMex(*pEmxArray);
    *pEmxArray = (emxArray_ptrdiff_t *)NULL;
  }
}

static int32_T div_nzp_s32(int32_T numerator, int32_T denominator)
{
  int32_T quotient;
  uint32_T b_u;
  uint32_T tempAbsQuotient;
  if (numerator < 0) {
    tempAbsQuotient = ~(uint32_T)numerator + 1U;
  } else {
    tempAbsQuotient = (uint32_T)numerator;
  }

  if (denominator < 0) {
    b_u = ~(uint32_T)denominator + 1U;
  } else {
    b_u = (uint32_T)denominator;
  }

  tempAbsQuotient /= b_u;
  if ((numerator < 0) != (denominator < 0)) {
    quotient = -(int32_T)tempAbsQuotient;
  } else {
    quotient = (int32_T)tempAbsQuotient;
  }

  return quotient;
}

static int32_T div_s32(InstanceStruct_dnGfh1DX0a11xSfGnyzF5G *moduleInstance,
  const emlrtStack *sp, int32_T numerator, int32_T denominator,
  cgxertBlkSrcLocInfo *blkSrc)
{
  int32_T quotient;
  uint32_T b_u;
  uint32_T tempAbsQuotient;
  if (denominator == 0) {
    if (numerator >= 0) {
      quotient = MAX_int32_T;
    } else {
      quotient = MIN_int32_T;
    }

    emlrtDivisionByZeroWarningOrError2018b(NULL, cgxertPrepareEmlrtTLS
      (moduleInstance->S, (emlrtConstCTX)sp, blkSrc->sysIdx, blkSrc->blkIdx));
  } else {
    if (numerator < 0) {
      tempAbsQuotient = ~(uint32_T)numerator + 1U;
    } else {
      tempAbsQuotient = (uint32_T)numerator;
    }

    if (denominator < 0) {
      b_u = ~(uint32_T)denominator + 1U;
    } else {
      b_u = (uint32_T)denominator;
    }

    tempAbsQuotient /= b_u;
    if ((numerator < 0) != (denominator < 0)) {
      quotient = -(int32_T)tempAbsQuotient;
    } else {
      quotient = (int32_T)tempAbsQuotient;
    }
  }

  return quotient;
}

static void init_simulink_io_address(InstanceStruct_dnGfh1DX0a11xSfGnyzF5G
  *moduleInstance)
{
  moduleInstance->emlrtRootTLSGlobal = (void *)cgxertGetEMLRTCtx
    (moduleInstance->S);
  moduleInstance->u0 = (real_T (*)[3])cgxertGetInputPortSignal(moduleInstance->S,
    0);
  moduleInstance->u1 = (real_T (*)[6])cgxertGetInputPortSignal(moduleInstance->S,
    1);
  moduleInstance->u2 = (real_T (*)[3])cgxertGetInputPortSignal(moduleInstance->S,
    2);
  moduleInstance->u3 = (real_T (*)[6])cgxertGetInputPortSignal(moduleInstance->S,
    3);
  moduleInstance->b_y0 = (real_T (*)[3])cgxertGetOutputPortSignal
    (moduleInstance->S, 0);
  moduleInstance->b_y1 = (real_T (*)[6])cgxertGetOutputPortSignal
    (moduleInstance->S, 1);
  moduleInstance->y2 = (real_T (*)[3])cgxertGetOutputPortSignal
    (moduleInstance->S, 2);
  moduleInstance->y3 = (real_T (*)[6])cgxertGetOutputPortSignal
    (moduleInstance->S, 3);
  moduleInstance->pipeStage = (int32_T *)cgxertGetDWork(moduleInstance->S, 0);
  moduleInstance->sysIdxToRun = (int32_T *)cgxertGetDWork(moduleInstance->S, 1);
  moduleInstance->sysIdx = (int32_T)cgxertGetSubsysIdx(moduleInstance->S);
}

/* CGXE Glue Code */
static void mdlOutputs_dnGfh1DX0a11xSfGnyzF5G(SimStruct *S, int_T tid)
{
  InstanceStruct_dnGfh1DX0a11xSfGnyzF5G *moduleInstance =
    (InstanceStruct_dnGfh1DX0a11xSfGnyzF5G *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_outputs(moduleInstance);
}

static void mdlInitialize_dnGfh1DX0a11xSfGnyzF5G(SimStruct *S)
{
  InstanceStruct_dnGfh1DX0a11xSfGnyzF5G *moduleInstance =
    (InstanceStruct_dnGfh1DX0a11xSfGnyzF5G *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_initialize(moduleInstance);
}

static void mdlUpdate_dnGfh1DX0a11xSfGnyzF5G(SimStruct *S, int_T tid)
{
  InstanceStruct_dnGfh1DX0a11xSfGnyzF5G *moduleInstance =
    (InstanceStruct_dnGfh1DX0a11xSfGnyzF5G *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_update(moduleInstance);
}

static void mdlTerminate_dnGfh1DX0a11xSfGnyzF5G(SimStruct *S)
{
  InstanceStruct_dnGfh1DX0a11xSfGnyzF5G *moduleInstance =
    (InstanceStruct_dnGfh1DX0a11xSfGnyzF5G *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_terminate(moduleInstance);
  free((void *)moduleInstance);
}

static void mdlEnable_dnGfh1DX0a11xSfGnyzF5G(SimStruct *S)
{
  InstanceStruct_dnGfh1DX0a11xSfGnyzF5G *moduleInstance =
    (InstanceStruct_dnGfh1DX0a11xSfGnyzF5G *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_enable(moduleInstance);
}

static void mdlDisable_dnGfh1DX0a11xSfGnyzF5G(SimStruct *S)
{
  InstanceStruct_dnGfh1DX0a11xSfGnyzF5G *moduleInstance =
    (InstanceStruct_dnGfh1DX0a11xSfGnyzF5G *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_disable(moduleInstance);
}

static void mdlStart_dnGfh1DX0a11xSfGnyzF5G(SimStruct *S)
{
  InstanceStruct_dnGfh1DX0a11xSfGnyzF5G *moduleInstance =
    (InstanceStruct_dnGfh1DX0a11xSfGnyzF5G *)calloc(1, sizeof
    (InstanceStruct_dnGfh1DX0a11xSfGnyzF5G));
  moduleInstance->S = S;
  cgxertSetRuntimeInstance(S, (void *)moduleInstance);
  ssSetmdlOutputs(S, mdlOutputs_dnGfh1DX0a11xSfGnyzF5G);
  ssSetmdlInitializeConditions(S, mdlInitialize_dnGfh1DX0a11xSfGnyzF5G);
  ssSetmdlUpdate(S, mdlUpdate_dnGfh1DX0a11xSfGnyzF5G);
  ssSetmdlTerminate(S, mdlTerminate_dnGfh1DX0a11xSfGnyzF5G);
  ssSetmdlEnable(S, mdlEnable_dnGfh1DX0a11xSfGnyzF5G);
  ssSetmdlDisable(S, mdlDisable_dnGfh1DX0a11xSfGnyzF5G);
  cgxe_mdl_start(moduleInstance);

  {
    uint_T options = ssGetOptions(S);
    options |= SS_OPTION_RUNTIME_EXCEPTION_FREE_CODE;
    ssSetOptions(S, options);
  }
}

static void mdlProcessParameters_dnGfh1DX0a11xSfGnyzF5G(SimStruct *S)
{
}

void method_dispatcher_dnGfh1DX0a11xSfGnyzF5G(SimStruct *S, int_T method, void
  *data)
{
  switch (method) {
   case SS_CALL_MDL_START:
    mdlStart_dnGfh1DX0a11xSfGnyzF5G(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_dnGfh1DX0a11xSfGnyzF5G(S);
    break;

   default:
    /* Unhandled method */
    /*
       sf_mex_error_message("Stateflow Internal Error:\n"
       "Error calling method dispatcher for module: dnGfh1DX0a11xSfGnyzF5G.\n"
       "Can't handle method %d.\n", method);
     */
    break;
  }
}

mxArray *cgxe_dnGfh1DX0a11xSfGnyzF5G_BuildInfoUpdate(void)
{
  mxArray * mxBIArgs;
  mxArray * elem_1;
  mxArray * elem_2;
  mxArray * elem_3;
  mxArray * elem_4;
  mxArray * elem_5;
  mxArray * elem_6;
  mxArray * elem_7;
  mxArray * elem_8;
  mxArray * elem_9;
  mxArray * elem_10;
  mxArray * elem_11;
  mxArray * elem_12;
  mxArray * elem_13;
  mxArray * elem_14;
  mxArray * elem_15;
  mxArray * elem_16;
  mxArray * elem_17;
  mxArray * elem_18;
  mxArray * elem_19;
  mxArray * elem_20;
  mxArray * elem_21;
  mxArray * elem_22;
  mxArray * elem_23;
  mxArray * elem_24;
  mxArray * elem_25;
  mxArray * elem_26;
  mxArray * elem_27;
  mxArray * elem_28;
  mxArray * elem_29;
  mxBIArgs = mxCreateCellMatrix(1,3);
  elem_1 = mxCreateCellMatrix(1,6);
  elem_2 = mxCreateCellMatrix(0,0);
  mxSetCell(elem_1,0,elem_2);
  elem_3 = mxCreateCellMatrix(1,4);
  elem_4 = mxCreateString("addIncludeFiles");
  mxSetCell(elem_3,0,elem_4);
  elem_5 = mxCreateCellMatrix(1,4);
  elem_6 = mxCreateString("<string.h>");
  mxSetCell(elem_5,0,elem_6);
  elem_7 = mxCreateString("blas.h");
  mxSetCell(elem_5,1,elem_7);
  elem_8 = mxCreateString("collisioncodegen_api.hpp");
  mxSetCell(elem_5,2,elem_8);
  elem_9 = mxCreateString("lapacke.h");
  mxSetCell(elem_5,3,elem_9);
  mxSetCell(elem_3,1,elem_5);
  elem_10 = mxCreateCellMatrix(1,4);
  elem_11 = mxCreateString("");
  mxSetCell(elem_10,0,elem_11);
  elem_12 = mxCreateString("");
  mxSetCell(elem_10,1,elem_12);
  elem_13 = mxCreateString("");
  mxSetCell(elem_10,2,elem_13);
  elem_14 = mxCreateString("");
  mxSetCell(elem_10,3,elem_14);
  mxSetCell(elem_3,2,elem_10);
  elem_15 = mxCreateCellMatrix(1,4);
  elem_16 = mxCreateString("");
  mxSetCell(elem_15,0,elem_16);
  elem_17 = mxCreateString("");
  mxSetCell(elem_15,1,elem_17);
  elem_18 = mxCreateString("");
  mxSetCell(elem_15,2,elem_18);
  elem_19 = mxCreateString("");
  mxSetCell(elem_15,3,elem_19);
  mxSetCell(elem_3,3,elem_15);
  mxSetCell(elem_1,1,elem_3);
  elem_20 = mxCreateCellMatrix(0,0);
  mxSetCell(elem_1,2,elem_20);
  elem_21 = mxCreateCellMatrix(0,0);
  mxSetCell(elem_1,3,elem_21);
  elem_22 = mxCreateCellMatrix(0,0);
  mxSetCell(elem_1,4,elem_22);
  elem_23 = mxCreateCellMatrix(0,0);
  mxSetCell(elem_1,5,elem_23);
  mxSetCell(mxBIArgs,0,elem_1);
  elem_24 = mxCreateCellMatrix(1,4);
  elem_25 = mxCreateString(
    "robotics.core.internal.coder.CollisionGeometryBuildable");
  mxSetCell(elem_24,0,elem_25);
  elem_26 = mxCreateString("coder.internal.time.CoderTimeAPI");
  mxSetCell(elem_24,1,elem_26);
  elem_27 = mxCreateString("coder.internal.blas.BLASApi");
  mxSetCell(elem_24,2,elem_27);
  elem_28 = mxCreateString("coder.internal.lapack.LAPACKApi");
  mxSetCell(elem_24,3,elem_28);
  mxSetCell(mxBIArgs,1,elem_24);
  elem_29 = mxCreateCellMatrix(1,0);
  mxSetCell(mxBIArgs,2,elem_29);
  return mxBIArgs;
}

mxArray *cgxe_dnGfh1DX0a11xSfGnyzF5G_fallback_info(void)
{
  const char* fallbackInfoFields[] = { "fallbackType", "incompatiableSymbol" };

  mxArray* fallbackInfoStruct = mxCreateStructMatrix(1, 1, 2, fallbackInfoFields);
  mxArray* fallbackType = mxCreateString("thirdPartyLibs");
  mxArray* incompatibleSymbol = mxCreateString(
    "robotics.core.internal.coder.CollisionGeometryBuildable");
  mxSetFieldByNumber(fallbackInfoStruct, 0, 0, fallbackType);
  mxSetFieldByNumber(fallbackInfoStruct, 0, 1, incompatibleSymbol);
  return fallbackInfoStruct;
}
