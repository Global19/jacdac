// Autogenerated C header file for Bootloader
#ifndef _JACDAC_SPEC_BOOTLOADER_H
#define _JACDAC_SPEC_BOOTLOADER_H 1

#define JD_SERVICE_CLASS_BOOTLOADER  0x1ffa9948

// enum Error (uint32_t)
#define JD_BOOTLOADER_ERROR_NO_ERROR 0x0
#define JD_BOOTLOADER_ERROR_PACKET_TOO_SMALL 0x1
#define JD_BOOTLOADER_ERROR_OUT_OF_FLASHABLE_RANGE 0x2
#define JD_BOOTLOADER_ERROR_INVALID_PAGE_OFFSET 0x3
#define JD_BOOTLOADER_ERROR_NOT_PAGE_ALIGNED 0x4

/**
 * No args. The `service_class` is always `0x1ffa9948`. The `firmware_identifier` identifies the kind of firmware
 * that "fits" this device.
 */
#define JD_BOOTLOADER_CMD_INFO JD_CMD_ANNOUNCE
// Report: 
typedef struct jd_bootloader_info_report {
    uint32_t service_class;
    uint32_t page_size; // B
    uint32_t flashable_size; // B
    uint32_t firmware_identifier;
} jd_bootloader_info_report_t;


/** Argument: session_id uint32_t. The flashing host should generate a random id, and use this command to set it. */
#define JD_BOOTLOADER_CMD_SET_SESSION 0x81
// Report: Argument: session_id uint32_t

/**
 * Use to send flashing data. A physical page is split into `chunk_max + 1` chunks, where `chunk_no = 0 ... chunk_max`.
 * Each chunk is stored at `page_address + page_offset`. `page_address` has to be equal in all chunks,
 * and is included in response.
 * Only the last chunk causes writing to flash and elicits response.
 */
#define JD_BOOTLOADER_CMD_PAGE_DATA 0x80
typedef struct jd_bootloader_page_data {
    uint32_t page_address;
    uint16_t page_offset;
    uint8_t chunk_no;
    uint8_t chunk_max;
    uint32_t session_id;
    uint32_t reserved0;
    uint32_t reserved1;
    uint32_t reserved2;
    uint32_t reserved3;
    uint8_t page_data[0];
} jd_bootloader_page_data_t;

// Report: 
typedef struct jd_bootloader_page_data_report {
    uint32_t session_id;
    uint32_t page_error;  // Error
    uint32_t page_address;
} jd_bootloader_page_data_report_t;


#endif
