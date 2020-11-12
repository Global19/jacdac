// Autogenerated C header file for Logger
#ifndef _JACDAC_SPEC_LOGGER_H
#define _JACDAC_SPEC_LOGGER_H 1

#define JD_SERVICE_CLASS_LOGGER  0x12dc1fca

// enum Priority (uint8_t)
#define JD_LOGGER_PRIORITY_DEBUG 0x0
#define JD_LOGGER_PRIORITY_LOG 0x1
#define JD_LOGGER_PRIORITY_WARNING 0x2
#define JD_LOGGER_PRIORITY_ERROR 0x3

/**
 * Read-write Priority (uint8_t). Messages with level lower than this won't be emitted. The default setting may vary.
 * Loggers should revert this to their default setting if the register has not been
 * updated in 3000ms, and also keep the lowest setting they have seen in the last 1500ms.
 * Thus, clients should write this register every 1000ms and ignore messages which are
 * too verbose for them.
 */
#define JD_LOGGER_REG_MIN_PRIORITY 0x80

/** Argument: message string (bytes). Report a message. */
#define JD_LOGGER_CMD_DEBUG 0x80

/** Argument: message string (bytes). Report a message. */
#define JD_LOGGER_CMD_LOG 0x81

/** Argument: message string (bytes). Report a message. */
#define JD_LOGGER_CMD_WARN 0x82

/** Argument: message string (bytes). Report a message. */
#define JD_LOGGER_CMD_ERROR 0x83

#endif
