/*
 * File: ert_main.c
 *
 * Code generated for Simulink model 'Drone_Compensator'.
 *
 * Model version                  : 1.3077
 * Simulink Coder version         : 8.9 (R2015b) 13-Aug-2015
 * C/C++ source code generated on : Wed Nov  7 18:03:15 2018
 *
 * Target selection: ert_shrlib.tlc
 * Embedded hardware selection: 32-bit Generic
 * Emulation hardware selection:
 *    Differs from embedded hardware (MATLAB Host)
 * Code generation objectives:
 *    1. Execution efficiency
 *    2. RAM efficiency
 *    3. ROM efficiency
 * Validation result: Not run
 */

#include <stddef.h>
#include <stdio.h>                     /* This ert_main.c example uses printf/fflush */
#include "Drone_Compensator.h"         /* Model's header file */
#include "rtwtypes.h"
#include "builtin_typeid_types.h"
#include "multiword_types.h"
#include "rt_logging.h"
#define QUOTE1(name)                   #name
#define QUOTE(name)                    QUOTE1(name)              /* need to expand name */
#ifndef SAVEFILE
# define MATFILE2(file)                #file ".mat"
# define MATFILE1(file)                MATFILE2(file)
# define MATFILE                       MATFILE1(MODEL)
#else
# define MATFILE                       QUOTE(SAVEFILE)
#endif

static RT_MODEL_Drone_Compensator_T Drone_Compensator_M_;
static RT_MODEL_Drone_Compensator_T *const Drone_Compensator_M =
  &Drone_Compensator_M_;               /* Real-time model */
static P_Drone_Compensator_T Drone_Compensator_P = {
  {
    4.7199903669109095e-8,
    500.0,
    13840.8,
    1530.72683064892,

    { 0.3, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.3, 0.0, 0.0, 0.0, 0.0, 0.0,
      0.0, 0.0, 0.0, 0.5, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.002, 0.0,
      0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.002, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
      0.0, 0.0, 0.002, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.001, 0.0, 0.0,
      0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 50.0 },
    1.0,

    { 0.09, -0.06, -9.473, -0.0095, -0.0075, 0.0015, 101270.95 },

    { 1.00596, 1.00383, 0.99454 },

    { 0.99861, 1.00644, 0.99997 },
    1.225,
    12.01725,

    { 0.99407531114557246, 0.99618461293246863, 1.0054899752649467,
      1.0013919347893572, 0.99360120821906917, 1.0000300009000269 },
    0.44,

    {
      { 3.5, 70.0 },

      { -99.0, 0.0, 0.0, -9.0 },
      0.0
    },
    0.05,
    0.005,
    0.1,
    5.5,
    2.5,
    0.2,
    3.0,
    1.5,
    0.0,
    3.0,
    1.0,
    1.0,
    -1.1,
    -99.0,
    -9.0,
    10.0,
    0.05,
    0.0,
    0.0,
    -30.0,
    20.0,
    1.0
  },                                   /* Variable: quadEDT
                                        * Referenced by:
                                        *   '<S3>/sampleTime'
                                        *   '<S6>/thrustToMotorcommand'
                                        *   '<S6>/Saturation5'
                                        *   '<S7>/prsToAlt_gain'
                                        *   '<S10>/inverseIMU_gain'
                                        *   '<S12>/SaturationSonar'
                                        *   '<S184>/Constant'
                                        *   '<S61>/Constant'
                                        */

  {
    4.0,
    9.81,
    1.184,
    1.5e-5,
    0.068,

    { 6.86e-5, 0.0, 0.0, 0.0, 9.2e-5, 0.0, 0.0, 0.0, 0.0001366 },
    -0.015875999999999998,
    0.0624,
    2.0,
    0.033,
    0.008,
    0.0,
    0.000375,
    0.0,
    0.0,
    1.0209375000000001e-7,
    0.0,
    6.0699375000000009e-5,
    2.0418750000000001e-7,
    0.0107,
    0.00078263752785053692,
    0.15433206602850458,
    0.11868238913561441,
    0.25481807079117214,
    -0.13613568165555773,
    0.15271630954950383,
    10000.0,
    5.5,
    0.0034211943997592849,
    0.605147136,
    4.7199903669109095e-8,
    1.1392838555498841e-10,
    0
  },                                   /* Variable: quad
                                        * Referenced by:
                                        *   '<S2>/w0'
                                        *   '<S3>/sampleTime1'
                                        */

  {
    { 1.0, 0.0024137419083240857, -0.044123463146040563, -0.044123463146040563,
      1.0, -0.0024137419083240857, -0.044123463146040563, 0.044123463146040563,
      1.0, 0.0024137419083240857, 0.044123463146040563, 0.044123463146040563,
      1.0, -0.0024137419083240857, 0.044123463146040563, -0.044123463146040563 },

    { 0.25, 0.25, 0.25, 0.25, 103.57362530676717, -103.57362530676717,
      103.57362530676717, -103.57362530676717, -5.6659197210460537,
      -5.6659197210460546, 5.6659197210460546, 5.6659197210460546,
      -5.6659197210460546, 5.6659197210460546, 5.6659197210460546,
      -5.6659197210460546 },
    0.12,
    0.92,
    0.32664221335170257
  },                                   /* Variable: controlHelperParams
                                        * Referenced by:
                                        *   '<S2>/takeoff_gain'
                                        *   '<S2>/SaturationThrust'
                                        *   '<S4>/TorquetotalThrustToThrustperMotor'
                                        */

  /* Start of '<Root>/Drone_Compensator' */
  {
    0.0,                               /* Mask Parameter: DiscreteDerivative_ICPrevScaled
                                        * Referenced by: '<S119>/UD'
                                        */
    -99.0,                             /* Mask Parameter: checkifPosavailable_const
                                        * Referenced by: '<S180>/Constant'
                                        */
    0.18,                              /* Mask Parameter: maxp3_const
                                        * Referenced by: '<S181>/Constant'
                                        */
    0.18,                              /* Mask Parameter: maxq3_const
                                        * Referenced by: '<S182>/Constant'
                                        */
    1.0,                               /* Mask Parameter: planarjumpsVISPOS_const
                                        * Referenced by: '<S183>/Constant'
                                        */
    0.6,                               /* Mask Parameter: maxp_const
                                        * Referenced by: '<S122>/Constant'
                                        */
    0.6,                               /* Mask Parameter: maxq_const
                                        * Referenced by: '<S124>/Constant'
                                        */
    7.0,                               /* Mask Parameter: maxw1_const
                                        * Referenced by: '<S126>/Constant'
                                        */
    7.0,                               /* Mask Parameter: maxw2_const
                                        * Referenced by: '<S127>/Constant'
                                        */
    80.0,                              /* Mask Parameter: maxdw1_const
                                        * Referenced by: '<S120>/Constant'
                                        */
    80.0,                              /* Mask Parameter: maxdw2_const
                                        * Referenced by: '<S121>/Constant'
                                        */
    0.5,                               /* Mask Parameter: maxp2_const
                                        * Referenced by: '<S123>/Constant'
                                        */
    0.5,                               /* Mask Parameter: maxq2_const
                                        * Referenced by: '<S125>/Constant'
                                        */
    5.0,                               /* Mask Parameter: maxw3_const
                                        * Referenced by: '<S128>/Constant'
                                        */
    5.0,                               /* Mask Parameter: maxw4_const
                                        * Referenced by: '<S129>/Constant'
                                        */
    0.3,                               /* Mask Parameter: outlierJump_const
                                        * Referenced by: '<S64>/Constant'
                                        */
    0.8,                               /* Mask Parameter: currentEstimateVeryOffFromPress
                                        * Referenced by: '<S62>/Constant'
                                        */
    0.4,                               /* Mask Parameter: currentStateVeryOffsonarflt_con
                                        * Referenced by: '<S63>/Constant'
                                        */
    0.0,                               /* Mask Parameter: outlierBelowFloor_const
                                        * Referenced by: '<S13>/Constant'
                                        */
    -0.4,                              /* Mask Parameter: minHeightforOF_const
                                        * Referenced by: '<S130>/Constant'
                                        */
    0.0,                               /* Mask Parameter: donotuseaccifopticalflowneverav
                                        * Referenced by: '<S71>/Constant'
                                        */
    0.0,                               /* Mask Parameter: donotuseaccifopticalflownever_g
                                        * Referenced by: '<S72>/Constant'
                                        */
    -0.4,                              /* Mask Parameter: DeactivateAccelerationIfOFisnot
                                        * Referenced by: '<S70>/Constant'
                                        */

    /*  Expression: [0 0 +quad.g 0 0 0]
     * Referenced by: '<S10>/Assuming that calib was done level!'
     */
    { 0.0, 0.0, 9.81, 0.0, 0.0, 0.0 },
    0.0,                               /* Expression: 0
                                        * Referenced by: '<S10>/FIR_IMUaccel'
                                        */

    /*  Expression: estimParams.IMU.filter_accel.Coefficients
     * Referenced by: '<S10>/FIR_IMUaccel'
     */
    { 0.026407724923238066, 0.14053136276241623, 0.3330609123143457,
      0.3330609123143457, 0.14053136276241623, 0.026407724923238066 },

    /*  Expression: estimParams.IMU.filter_gyro_r_b
     * Referenced by: '<S10>/IIR_IMUgyro_r'
     */
    { 0.28212412246252067, 1.272539291716861, 2.4208439774454473,
      2.4208439774454487, 1.272539291716863, 0.28212412246252133 },

    /*  Expression: estimParams.IMU.filter_gyro_r_a
     * Referenced by: '<S10>/IIR_IMUgyro_r'
     */
    { 1.0, 2.2287149173647665, 2.5244618916938606, 1.5772531712757014,
      0.541022406829817, 0.079562396085500781 },
    0.0,                               /* Expression: 0
                                        * Referenced by: '<S10>/IIR_IMUgyro_r'
                                        */
    0.0,                               /* Expression: 0
                                        * Referenced by: '<S66>/Delay'
                                        */

    /*  Expression: pInitialization.M
     * Referenced by: '<S134>/KalmanGainM'
     */
    { 0.005756860081440762, 0.0, 0.0, 0.005756860081440762 },

    /*  Expression: estimParams.IMU.filter_gyro_r_b
     * Referenced by: '<S69>/IIRgyroz'
     */
    { 0.28212412246252067, 1.272539291716861, 2.4208439774454473,
      2.4208439774454487, 1.272539291716863, 0.28212412246252133 },

    /*  Expression: estimParams.IMU.filter_gyro_r_b
     * Referenced by: '<S69>/IIRgyroz'
     */
    { 0.28212412246252067, 1.272539291716861, 2.4208439774454473,
      2.4208439774454487, 1.272539291716863, 0.28212412246252133 },
    0.0,                               /* Expression: 0
                                        * Referenced by: '<S69>/IIRgyroz'
                                        */
    200.0,                             /* Computed Parameter: TSamp_WtEt
                                        * Referenced by: '<S119>/TSamp'
                                        */
    0.0,                               /* Expression: 0
                                        * Referenced by: '<S65>/Delay'
                                        */
    20.0,                              /* Expression: estimParams.pos.opticalFlowToVelocity_gain
                                        * Referenced by: '<S65>/opticalFlowToVelocity_gain'
                                        */
    -1.0,                              /* Expression: -1
                                        * Referenced by: '<S7>/invertzaxisGain'
                                        */
    0.0,                               /* Expression: -inf
                                        * Referenced by: '<S12>/SaturationSonar'
                                        */
    0.0,                               /* Expression: 0
                                        * Referenced by: '<S7>/Delay2'
                                        */

    /*  Expression: estimParams.alt.filter_prs_b
     * Referenced by: '<S12>/pressureFilter_IIR'
     */
    { 0.007509257528603033, -0.022498139897706472, 0.014988905760749172,
      0.014988905760749172, -0.022498139897706455, 0.0075092575286030234 },

    /*  Expression: estimParams.alt.filter_prs_a
     * Referenced by: '<S12>/pressureFilter_IIR'
     */
    { 1.0, -4.89810443312637, 9.5974881329446688, -9.4036722433820046,
      4.60730099744654, -0.90301240709954322 },
    0.0,                               /* Expression: 0
                                        * Referenced by: '<S12>/pressureFilter_IIR'
                                        */

    /*  Expression: estimParams.alt.filter_sonar_b
     * Referenced by: '<S12>/soonarFilter_IIR'
     */
    { 0.007509257528603033, -0.022498139897706472, 0.014988905760749172,
      0.014988905760749172, -0.022498139897706455, 0.0075092575286030234 },

    /*  Expression: estimParams.alt.filter_sonar_a
     * Referenced by: '<S12>/soonarFilter_IIR'
     */
    { 1.0, -4.89810443312637, 9.5974881329446688, -9.4036722433820046,
      4.60730099744654, -0.90301240709954322 },
    0.0,                               /* Expression: 0
                                        * Referenced by: '<S12>/soonarFilter_IIR'
                                        */

    /*  Expression: pInitialization.M
     * Referenced by: '<S16>/KalmanGainM'
     */
    { 0.026241420641871072, 0.069776736071495274 },

    /*  Expression: [0 0 quad.g]
     * Referenced by: '<S7>/gravity'
     */
    { 0.0, 0.0, 9.81 },

    /*  Expression: pInitialization.C
     * Referenced by: '<S11>/C'
     */
    { 1.0, 0.0 },
    0.0,                               /* Expression: pInitialization.D
                                        * Referenced by: '<S11>/D'
                                        */

    /*  Expression: pInitialization.X0
     * Referenced by: '<S11>/X0'
     */
    { -0.046, 0.0 },

    /*  Expression: pInitialization.M
     * Referenced by: '<S74>/KalmanGainM'
     */
    { 0.1254656089860898, 0.0, 0.0, 0.1254656089860898 },

    /*  Expression: [0 0 -quad.g]
     * Referenced by: '<S67>/gravity'
     */
    { 0.0, 0.0, -9.81 },
    0.2,                               /* Expression: estimParams.pos.accelerationInput_gain
                                        * Referenced by: '<S67>/gainaccinput'
                                        */

    /*  Expression: pInitialization.C
     * Referenced by: '<S68>/C'
     */
    { 1.0, 0.0, 0.0, 1.0 },

    /*  Expression: pInitialization.D
     * Referenced by: '<S68>/D'
     */
    { 0.0, 0.0, 0.0, 0.0 },

    /*  Expression: pInitialization.X0
     * Referenced by: '<S68>/X0'
     */
    { 0.0, 0.0 },
    0.0,                               /* Expression: 0
                                        * Referenced by: '<S3>/Delay1'
                                        */

    /*  Expression: pInitialization.C
     * Referenced by: '<S131>/C'
     */
    { 1.0, 0.0, 0.0, 1.0 },

    /*  Expression: pInitialization.D
     * Referenced by: '<S131>/D'
     */
    { 0.0, 0.0, 0.0, 0.0 },

    /*  Expression: pInitialization.X0
     * Referenced by: '<S131>/X0'
     */
    { 0.1, 0.0 },
    0.005,                             /* Computed Parameter: SimplyIntegrateVelocity_gainval
                                        * Referenced by: '<S66>/SimplyIntegrateVelocity'
                                        */
    0.0,                               /* Expression: 0
                                        * Referenced by: '<S66>/SimplyIntegrateVelocity'
                                        */
    0.0,                               /* Expression: 0
                                        * Referenced by: '<S66>/UseIPPosSwitch'
                                        */
    0.3,                               /* Expression: estimParams.alt.deltaSonarToCurrent_max
                                        * Referenced by: '<S7>/Bias'
                                        */
    -0.3,                              /* Expression: -estimParams.alt.deltaSonarToCurrent_max
                                        * Referenced by: '<S7>/Bias1'
                                        */

    /*  Expression: pInitialization.A
     * Referenced by: '<S11>/A'
     */
    { 1.0, 0.0, 0.005, 1.0 },

    /*  Expression: pInitialization.B
     * Referenced by: '<S11>/B'
     */
    { 0.0, 0.005 },

    /*  Expression: pInitialization.L
     * Referenced by: '<S16>/KalmanGainL'
     */
    { 0.026590304322228548, 0.069776736071495274 },

    /*  Expression: pInitialization.A
     * Referenced by: '<S68>/A'
     */
    { 1.0, 0.0, 0.0, 1.0 },

    /*  Expression: pInitialization.B
     * Referenced by: '<S68>/B'
     */
    { 0.005, 0.0, 0.0, 0.005 },

    /*  Expression: pInitialization.L
     * Referenced by: '<S74>/KalmanGainL'
     */
    { 0.1254656089860898, 0.0, 0.0, 0.1254656089860898 },

    /*  Expression: pInitialization.A
     * Referenced by: '<S131>/A'
     */
    { 1.0, 0.0, 0.0, 1.0 },

    /*  Expression: pInitialization.B
     * Referenced by: '<S131>/B'
     */
    { 0.005, 0.0, 0.0, 0.005 },

    /*  Expression: pInitialization.L
     * Referenced by: '<S134>/KalmanGainL'
     */
    { 0.005756860081440762, 0.0, 0.0, 0.005756860081440762 },
    1U,                                /* Computed Parameter: Delay_DelayLength
                                        * Referenced by: '<S66>/Delay'
                                        */
    1U,                                /* Computed Parameter: Delay_DelayLength_i
                                        * Referenced by: '<S65>/Delay'
                                        */
    1U,                                /* Computed Parameter: Delay2_DelayLength
                                        * Referenced by: '<S7>/Delay2'
                                        */
    1U,                                /* Computed Parameter: MemoryX_DelayLength
                                        * Referenced by: '<S11>/MemoryX'
                                        */
    1U,                                /* Computed Parameter: MemoryX_DelayLength_e
                                        * Referenced by: '<S68>/MemoryX'
                                        */
    1U,                                /* Computed Parameter: Delay1_DelayLength
                                        * Referenced by: '<S3>/Delay1'
                                        */
    1U,                                /* Computed Parameter: MemoryX_DelayLength_a
                                        * Referenced by: '<S131>/MemoryX'
                                        */

    /* Start of '<S1>/ControllerPID' */
    {
      0.3,                             /* Expression: 0.3
                                        * Referenced by: '<S2>/D_z'
                                        */
      0.8,                             /* Expression: 0.8
                                        * Referenced by: '<S2>/P_z'
                                        */

      /*  Expression: [0.1, -0.1]
       * Referenced by: '<S2>/D_xy'
       */
      { 0.1, -0.1 },
      3.0,                             /* Expression: 3
                                        * Referenced by: '<S2>/Saturation'
                                        */
      -3.0,                            /* Expression: -3
                                        * Referenced by: '<S2>/Saturation'
                                        */

      /*  Expression: [-0.24,0.24]
       * Referenced by: '<S2>/P_xy'
       */
      { -0.24, 0.24 },
      0.0,                             /* Expression: 0
                                        * Referenced by: '<S2>/Delay'
                                        */
      0.001,                           /* Expression: 0.001
                                        * Referenced by: '<S2>/antiWU_Gain'
                                        */
      0.004,                           /* Expression: 0.004
                                        * Referenced by: '<S2>/P_yaw'
                                        */
      0.0012,                          /* Expression: 0.3*0.004
                                        * Referenced by: '<S2>/D_yaw'
                                        */

      /*  Expression: [0.013;0.02]
       * Referenced by: '<S2>/P_pr'
       */
      { 0.013, 0.02 },
      0.005,                           /* Computed Parameter: DiscreteTimeIntegrator_gainval
                                        * Referenced by: '<S2>/Discrete-Time Integrator'
                                        */
      0.0,                             /* Expression: 0
                                        * Referenced by: '<S2>/Discrete-Time Integrator'
                                        */
      2.0,                             /* Expression: 2
                                        * Referenced by: '<S2>/Discrete-Time Integrator'
                                        */
      -2.0,                            /* Expression: -2
                                        * Referenced by: '<S2>/Discrete-Time Integrator'
                                        */
      0.01,                            /* Expression: 0.01
                                        * Referenced by: '<S2>/I_pr'
                                        */

      /*  Expression: [0.002;0.003]
       * Referenced by: '<S2>/D_pr'
       */
      { 0.002, 0.003 },
      10.0,                            /* Expression: 10
                                        * Referenced by: '<S6>/Saturation5'
                                        */

      /*  Expression: [1 -1 1 -1]
       * Referenced by: '<S6>/Motordirections1'
       */
      { 1.0, -1.0, 1.0, -1.0 },
      1U                               /* Computed Parameter: Delay_DelayLength
                                        * Referenced by: '<S2>/Delay'
                                        */
    }
    /* End of '<S1>/ControllerPID' */
  }
  /* End of '<Root>/Drone_Compensator' */
};                                     /* Modifiable parameters */

static B_Drone_Compensator_T Drone_Compensator_B;/* Observable signals */
static DW_Drone_Compensator_T Drone_Compensator_DW;/* Observable states */

/* '<Root>/controlModePosVSOrient_flagin' */
static boolean_T Drone_Compensator_U_controlModePosVSOrient_flagin;

/* '<Root>/pos_refin' */
static real_T Drone_Compensator_U_pos_refin[3];

/* '<Root>/takeoff_flag' */
static boolean_T Drone_Compensator_U_takeoff_flag;

/* '<Root>/orient_refin' */
static real_T Drone_Compensator_U_orient_refin[3];

/* '<Root>/ddx' */
static real_T Drone_Compensator_U_ddx;

/* '<Root>/ddy' */
static real_T Drone_Compensator_U_ddy;

/* '<Root>/ddz' */
static real_T Drone_Compensator_U_ddz;

/* '<Root>/p' */
static real_T Drone_Compensator_U_p;

/* '<Root>/q' */
static real_T Drone_Compensator_U_q;

/* '<Root>/r' */
static real_T Drone_Compensator_U_r;

/* '<Root>/altitude_sonar' */
static real_T Drone_Compensator_U_altitude_sonar;

/* '<Root>/prs' */
static real_T Drone_Compensator_U_prs;

/* '<Root>/opticalFlow_datin' */
static real_T Drone_Compensator_U_opticalFlow_datin[3];

/* '<Root>/sensordataCalib_datin' */
static real_T Drone_Compensator_U_sensordataCalib_datin[7];

/* '<Root>/posVIS_datin' */
static real_T Drone_Compensator_U_posVIS_datin[4];

/* '<Root>/usePosVIS_flagin' */
static real_T Drone_Compensator_U_usePosVIS_flagin;

/* '<Root>/batteryStatus_datin' */
static real_T Drone_Compensator_U_batteryStatus_datin[2];

/* '<Root>/motors_refout' */
static real_T Drone_Compensator_Y_motors_refout[4];

/* '<Root>/X' */
static real_T Drone_Compensator_Y_X;

/* '<Root>/Y' */
static real_T Drone_Compensator_Y_Y;

/* '<Root>/Z' */
static real_T Drone_Compensator_Y_Z;

/* '<Root>/yaw' */
static real_T Drone_Compensator_Y_yaw;

/* '<Root>/pitch' */
static real_T Drone_Compensator_Y_pitch;

/* '<Root>/roll' */
static real_T Drone_Compensator_Y_roll;

/* '<Root>/dx' */
static real_T Drone_Compensator_Y_dx;

/* '<Root>/dy' */
static real_T Drone_Compensator_Y_dy;

/* '<Root>/dz' */
static real_T Drone_Compensator_Y_dz;

/* '<Root>/pb' */
static real_T Drone_Compensator_Y_pb;

/* '<Root>/qb' */
static real_T Drone_Compensator_Y_qb;

/* '<Root>/rb' */
static real_T Drone_Compensator_Y_rb;

/* '<Root>/controlModePosVSOrient_flagout' */
static boolean_T Drone_Compensator_Y_controlModePosVSOrient_flagout;

/* '<Root>/pose_refout' */
static real_T Drone_Compensator_Y_pose_refout[6];

/* '<Root>/ddxb' */
static real_T Drone_Compensator_Y_ddxb;

/* '<Root>/ddyb' */
static real_T Drone_Compensator_Y_ddyb;

/* '<Root>/ddzb' */
static real_T Drone_Compensator_Y_ddzb;

/* '<Root>/pa' */
static real_T Drone_Compensator_Y_pa;

/* '<Root>/qa' */
static real_T Drone_Compensator_Y_qa;

/* '<Root>/ra' */
static real_T Drone_Compensator_Y_ra;

/* '<Root>/altitude_sonarb' */
static real_T Drone_Compensator_Y_altitude_sonarb;

/* '<Root>/prsb' */
static real_T Drone_Compensator_Y_prsb;

/* '<Root>/opticalFlow_datout' */
static real_T Drone_Compensator_Y_opticalFlow_datout[3];

/* '<Root>/sensordataCalib_datout' */
static real_T Drone_Compensator_Y_sensordataCalib_datout[7];

/* '<Root>/posVIS_datout' */
static real_T Drone_Compensator_Y_posVIS_datout[4];

/* '<Root>/usePosVIS_flagout' */
static real_T Drone_Compensator_Y_usePosVIS_flagout;

/* '<Root>/batteryStatus_datout' */
static real_T Drone_Compensator_Y_batteryStatus_datout[2];

/* '<Root>/takeoff_flagout' */
static boolean_T Drone_Compensator_Y_takeoff_flagout;

/*
 * Associating rt_OneStep with a real-time clock or interrupt service routine
 * is what makes the generated code "real-time".  The function rt_OneStep is
 * always associated with the base rate of the model.  Subrates are managed
 * by the base rate from inside the generated code.  Enabling/disabling
 * interrupts and floating point context switches are target specific.  This
 * example code indicates where these should take place relative to executing
 * the generated code step function.  Overrun behavior should be tailored to
 * your application needs.  This example simply sets an error status in the
 * real-time model and returns from rt_OneStep.
 */
void rt_OneStep(RT_MODEL_Drone_Compensator_T *const Drone_Compensator_M);
void rt_OneStep(RT_MODEL_Drone_Compensator_T *const Drone_Compensator_M)
{
  static boolean_T OverrunFlag = false;

  /* Disable interrupts here */

  /* Check for overrun */
  if (OverrunFlag) {
    rtmSetErrorStatus(Drone_Compensator_M, "Overrun");
    return;
  }

  OverrunFlag = true;

  /* Save FPU context here (if necessary) */
  /* Re-enable timer or interrupt here */
  /* Set model inputs here */

  /* Step the model */
  Drone_Compensator_step(Drone_Compensator_M,
    Drone_Compensator_U_controlModePosVSOrient_flagin,
    Drone_Compensator_U_pos_refin, Drone_Compensator_U_takeoff_flag,
    Drone_Compensator_U_orient_refin, Drone_Compensator_U_ddx,
    Drone_Compensator_U_ddy, Drone_Compensator_U_ddz, Drone_Compensator_U_p,
    Drone_Compensator_U_q, Drone_Compensator_U_r,
    Drone_Compensator_U_altitude_sonar, Drone_Compensator_U_prs,
    Drone_Compensator_U_opticalFlow_datin,
    Drone_Compensator_U_sensordataCalib_datin, Drone_Compensator_U_posVIS_datin,
    Drone_Compensator_U_usePosVIS_flagin,
    Drone_Compensator_U_batteryStatus_datin, Drone_Compensator_Y_motors_refout,
    &Drone_Compensator_Y_X, &Drone_Compensator_Y_Y, &Drone_Compensator_Y_Z,
    &Drone_Compensator_Y_yaw, &Drone_Compensator_Y_pitch,
    &Drone_Compensator_Y_roll, &Drone_Compensator_Y_dx, &Drone_Compensator_Y_dy,
    &Drone_Compensator_Y_dz, &Drone_Compensator_Y_pb, &Drone_Compensator_Y_qb,
    &Drone_Compensator_Y_rb, &Drone_Compensator_Y_controlModePosVSOrient_flagout,
    Drone_Compensator_Y_pose_refout, &Drone_Compensator_Y_ddxb,
    &Drone_Compensator_Y_ddyb, &Drone_Compensator_Y_ddzb,
    &Drone_Compensator_Y_pa, &Drone_Compensator_Y_qa, &Drone_Compensator_Y_ra,
    &Drone_Compensator_Y_altitude_sonarb, &Drone_Compensator_Y_prsb,
    Drone_Compensator_Y_opticalFlow_datout,
    Drone_Compensator_Y_sensordataCalib_datout,
    Drone_Compensator_Y_posVIS_datout, &Drone_Compensator_Y_usePosVIS_flagout,
    Drone_Compensator_Y_batteryStatus_datout,
    &Drone_Compensator_Y_takeoff_flagout);

  /* Get model outputs here */

  /* Indicate task complete */
  OverrunFlag = false;

  /* Disable interrupts here */
  /* Restore FPU context here (if necessary) */
  /* Enable interrupts here */
}

/*
 * The example "main" function illustrates what is required by your
 * application code to initialize, execute, and terminate the generated code.
 * Attaching rt_OneStep to a real-time clock is target specific.  This example
 * illustates how you do this relative to initializing the model.
 */
int_T main(int_T argc, const char *argv[])
{
  /* Unused arguments */
  (void)(argc);
  (void)(argv);

  /* Pack model data into RTM */
  Drone_Compensator_M->ModelData.defaultParam = &Drone_Compensator_P;
  Drone_Compensator_M->ModelData.blockIO = &Drone_Compensator_B;
  Drone_Compensator_M->ModelData.dwork = &Drone_Compensator_DW;

  /* Initialize model */
  Drone_Compensator_initialize(Drone_Compensator_M,
    &Drone_Compensator_U_controlModePosVSOrient_flagin,
    Drone_Compensator_U_pos_refin, &Drone_Compensator_U_takeoff_flag,
    Drone_Compensator_U_orient_refin, &Drone_Compensator_U_ddx,
    &Drone_Compensator_U_ddy, &Drone_Compensator_U_ddz, &Drone_Compensator_U_p,
    &Drone_Compensator_U_q, &Drone_Compensator_U_r,
    &Drone_Compensator_U_altitude_sonar, &Drone_Compensator_U_prs,
    Drone_Compensator_U_opticalFlow_datin,
    Drone_Compensator_U_sensordataCalib_datin, Drone_Compensator_U_posVIS_datin,
    &Drone_Compensator_U_usePosVIS_flagin,
    Drone_Compensator_U_batteryStatus_datin, Drone_Compensator_Y_motors_refout,
    &Drone_Compensator_Y_X, &Drone_Compensator_Y_Y, &Drone_Compensator_Y_Z,
    &Drone_Compensator_Y_yaw, &Drone_Compensator_Y_pitch,
    &Drone_Compensator_Y_roll, &Drone_Compensator_Y_dx, &Drone_Compensator_Y_dy,
    &Drone_Compensator_Y_dz, &Drone_Compensator_Y_pb, &Drone_Compensator_Y_qb,
    &Drone_Compensator_Y_rb, &Drone_Compensator_Y_controlModePosVSOrient_flagout,
    Drone_Compensator_Y_pose_refout, &Drone_Compensator_Y_ddxb,
    &Drone_Compensator_Y_ddyb, &Drone_Compensator_Y_ddzb,
    &Drone_Compensator_Y_pa, &Drone_Compensator_Y_qa, &Drone_Compensator_Y_ra,
    &Drone_Compensator_Y_altitude_sonarb, &Drone_Compensator_Y_prsb,
    Drone_Compensator_Y_opticalFlow_datout,
    Drone_Compensator_Y_sensordataCalib_datout,
    Drone_Compensator_Y_posVIS_datout, &Drone_Compensator_Y_usePosVIS_flagout,
    Drone_Compensator_Y_batteryStatus_datout,
    &Drone_Compensator_Y_takeoff_flagout);

  /* The MAT-file logging option selected; therefore, simulating
   * the model step behavior (in non real-time).  Running this
   * code produces results that can be loaded into MATLAB.
   */
  while (rtmGetErrorStatus(Drone_Compensator_M) == (NULL)) {
    rt_OneStep(Drone_Compensator_M);
  }

  /* Matfile logging */
  rt_StopDataLogging(MATFILE, Drone_Compensator_M->rtwLogInfo);

  /* Disable rt_OneStep() here */
  return 0;
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
