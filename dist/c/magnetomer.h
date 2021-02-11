// Autogenerated C header file for Magnetometer
#ifndef _JACDAC_SPEC_MAGNETO_H
#define _JACDAC_SPEC_MAGNETO_H 1

#define JD_SERVICE_CLASS_MAGNETO  0x13029088

/**
 * Indicates the current magnetic field on magnetometer.
 * For reference: `1 mgauss` is `100 nT` (and `1 gauss` is `100 000 nT`).
 */
#define JD_MAGNETO_REG_FORCES JD_REG_READING
typedef struct jd_magneto_forces {
    int32_t x; // nT
    int32_t y; // nT
    int32_t z; // nT
} jd_magneto_forces_t;


/**
 * Error on the readings.
 */
#define JD_MAGNETO_REG_FORCES_ERROR JD_REG_READING_ERROR
typedef struct jd_magneto_forces_error {
    int32_t x; // nT
    int32_t y; // nT
    int32_t z; // nT
} jd_magneto_forces_error_t;


/**
 * No args. Forces a calibration sequence where the user/device
 * might have to rotate to be calibrated.
 */
#define JD_MAGNETO_CMD_CALIBRATE JD_CMD_CALIBRATE

#endif