// Autogenerated C header file for Microphone
#ifndef _JACDAC_SPEC_MICROPHONE_H
#define _JACDAC_SPEC_MICROPHONE_H 1

#define JD_SERVICE_CLASS_MICROPHONE  0x113dac86

/**
 * The samples will be streamed back over the `samples` pipe.
 * If `num_samples` is `0`, streaming will only stop when the pipe is closed.
 * Otherwise the specified number of samples is streamed.
 * Samples are sent as `i16`.
 */
#define JD_MICROPHONE_CMD_SAMPLE 0x81
typedef struct jd_microphone_sample {
    uint8_t samples[12];  // pipe
    uint32_t num_samples;
} jd_microphone_sample_t;


/**
 * Read-write μs uint32_t. Get or set microphone sampling period.
 * Sampling rate is `1_000_000 / sampling_period Hz`.
 */
#define JD_MICROPHONE_REG_SAMPLING_PERIOD 0x80

#endif
