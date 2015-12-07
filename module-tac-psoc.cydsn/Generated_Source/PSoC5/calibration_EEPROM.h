/*******************************************************************************
* File Name: calibration_EEPROM.h
* Version 1.10
*
* Description:
*  This file provides constants and parameter values for the Emulated EEPROM
*  Component.
*
********************************************************************************
* Copyright 2013, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions,
* disclaimers, and limitations in the end user license agreement accompanying
* the software package with which this file was provided.
*******************************************************************************/
#ifndef CY_EM_EEPROM_calibration_EEPROM_H
#define CY_EM_EEPROM_calibration_EEPROM_H

#include "cytypes.h"
#include "CyFlash.h"

#if !defined(CYDEV_FLASH_BASE)
    #define CYDEV_FLASH_BASE                    (CYDEV_FLS_BASE)
#endif  /* !defined(CYDEV_FLS_BASE) */

#define calibration_EEPROM_FLASH_BASE_ADDR        (CYDEV_FLASH_BASE)
#define calibration_EEPROM_FLASH_SIZE             (CYDEV_FLASH_SIZE)
#define calibration_EEPROM_FLASH_END_ADDR         (calibration_EEPROM_FLASH_BASE_ADDR + calibration_EEPROM_FLASH_SIZE)

#if (CY_PSOC3)
    #define calibration_EEPROM_CODE_ADDR_OFFSET   (0xff0000u)
    #define calibration_EEPROM_CODE_ADDR_END      (calibration_EEPROM_CODE_ADDR_OFFSET + (calibration_EEPROM_FLASH_SIZE - 1u))
    #define calibration_EEPROM_CODE_ADDR_MASK     (0xffffu)
#endif /* (CY_PSOC3) */

#define calibration_EEPROM_ROWS_IN_ARRAY          (CY_FLASH_SIZEOF_ARRAY/CY_FLASH_SIZEOF_ROW)


/***************************************
*        Function Prototypes
***************************************/
void calibration_EEPROM_Start(void) ;
void calibration_EEPROM_Stop(void) ;
#if (CY_PSOC3)
    cystatus calibration_EEPROM_Write(const uint8 srcBuf[], const uint8 eepromPtr[],
                                                uint16 byteCount) ;
#else
    cystatus calibration_EEPROM_Write(const uint8 srcBuf[], const uint8 eepromPtr[], uint32 byteCount);
#endif /* (CY_PSOC3) */

#endif /* CY_EM_EEPROM_calibration_EEPROM_H */


/* [] END OF FILE */
