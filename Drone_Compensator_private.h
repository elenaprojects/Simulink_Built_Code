/*
 * File: Drone_Compensator_private.h
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

#ifndef RTW_HEADER_Drone_Compensator_private_h_
#define RTW_HEADER_Drone_Compensator_private_h_
#include "rtwtypes.h"
#include "builtin_typeid_types.h"
#include "multiword_types.h"

/* Private macros used by the generated code to access rtModel */
#ifndef rtmSetTFinal
# define rtmSetTFinal(rtm, val)        ((rtm)->Timing.tFinal = (val))
#endif

#ifndef rtmGetTPtr
# define rtmGetTPtr(rtm)               (&(rtm)->Timing.taskTime0)
#endif

extern void Drone_Compen_ControllerPID_Init(DW_ControllerPID_Drone_Compen_T
  *localDW, P_ControllerPID_Drone_Compens_T *localP);
extern void Drone_Compensator_ControllerPID(const real_T rtu_pos_ref[3],
  boolean_T rtu_takeoff_flag, const real_T rtu_orient_ref[3], boolean_T
  rtu_controlModePosVOrient_flagi, const real_T rtu_states_estim[3], const
  real_T rtu_states_estim_j[3], real_T rtu_states_estim_n, real_T
  rtu_states_estim_a, const real_T rtu_states_estim_ns[2], const real_T
  rtu_states_estim_g[2], B_ControllerPID_Drone_Compens_T *localB,
  DW_ControllerPID_Drone_Compen_T *localDW, P_ControllerPID_Drone_Compens_T
  *localP, P_Drone_Compensator_T *Drone_Compensator_P);
extern void Drone_Compens_MeasurementUpdate(boolean_T rtu_Enable, const real_T
  rtu_Lk[4], const real_T rtu_yk[2], const real_T rtu_yhatkk1[2],
  B_MeasurementUpdate_Drone_Com_T *localB);
extern void Drone_Compe_UseCurrentEstimator(boolean_T rtu_Enablek, const real_T
  rtu_Mk[4], const real_T rtu_uk[2], const real_T rtu_yk[2], const real_T
  rtu_Ck[4], const real_T rtu_Dk[4], const real_T rtu_xhatkk1[2],
  B_UseCurrentEstimator_Drone_C_T *localB);
extern void Drone_Co_Drone_Compensator_Init(DW_Drone_Compensator_Drone_Co_T
  *localDW, P_Drone_Compensator_Drone_Com_T *localP);
extern void Drone_Compens_Drone_Compensator(boolean_T
  rtu_controlModePosVSOrient_flag, const real_T rtu_pos_refin[3], boolean_T
  rtu_takeoff_flag, const real_T rtu_orient_refin[3], real_T
  rtu_sensordata_datin, real_T rtu_sensordata_datin_n, real_T
  rtu_sensordata_datin_j, real_T rtu_sensordata_datin_k, real_T
  rtu_sensordata_datin_c, real_T rtu_sensordata_datin_g, real_T
  rtu_sensordata_datin_gz, real_T rtu_sensordata_datin_p, const real_T
  rtu_opticalFlow_datin[3], const real_T rtu_sensordataCalib_datin[7], const
  real_T rtu_posVIS_datin[4], real_T rtu_usePosVIS_flagin, const real_T
  rtu_batteryStatus_datin[2], B_Drone_Compensator_Drone_Com_T *localB,
  DW_Drone_Compensator_Drone_Co_T *localDW, P_Drone_Compensator_Drone_Com_T
  *localP, P_Drone_Compensator_T *Drone_Compensator_P);

#endif                                 /* RTW_HEADER_Drone_Compensator_private_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
