/*******************************************************************************
* File Name: Therm2.h  
* Version 2.10
*
* Description:
*  This file containts Control Register function prototypes and register defines
*
* Note:
*
********************************************************************************
* Copyright 2008-2014, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_PINS_Therm2_H) /* Pins Therm2_H */
#define CY_PINS_Therm2_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "Therm2_aliases.h"

/* Check to see if required defines such as CY_PSOC5A are available */
/* They are defined starting with cy_boot v3.0 */
#if !defined (CY_PSOC5A)
    #error Component cy_pins_v2_10 requires cy_boot v3.0 or later
#endif /* (CY_PSOC5A) */

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 Therm2__PORT == 15 && ((Therm2__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

void    Therm2_Write(uint8 value) ;
void    Therm2_SetDriveMode(uint8 mode) ;
uint8   Therm2_ReadDataReg(void) ;
uint8   Therm2_Read(void) ;
uint8   Therm2_ClearInterrupt(void) ;


/***************************************
*           API Constants        
***************************************/

/* Drive Modes */
#define Therm2_DM_ALG_HIZ         PIN_DM_ALG_HIZ
#define Therm2_DM_DIG_HIZ         PIN_DM_DIG_HIZ
#define Therm2_DM_RES_UP          PIN_DM_RES_UP
#define Therm2_DM_RES_DWN         PIN_DM_RES_DWN
#define Therm2_DM_OD_LO           PIN_DM_OD_LO
#define Therm2_DM_OD_HI           PIN_DM_OD_HI
#define Therm2_DM_STRONG          PIN_DM_STRONG
#define Therm2_DM_RES_UPDWN       PIN_DM_RES_UPDWN

/* Digital Port Constants */
#define Therm2_MASK               Therm2__MASK
#define Therm2_SHIFT              Therm2__SHIFT
#define Therm2_WIDTH              1u


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define Therm2_PS                     (* (reg8 *) Therm2__PS)
/* Data Register */
#define Therm2_DR                     (* (reg8 *) Therm2__DR)
/* Port Number */
#define Therm2_PRT_NUM                (* (reg8 *) Therm2__PRT) 
/* Connect to Analog Globals */                                                  
#define Therm2_AG                     (* (reg8 *) Therm2__AG)                       
/* Analog MUX bux enable */
#define Therm2_AMUX                   (* (reg8 *) Therm2__AMUX) 
/* Bidirectional Enable */                                                        
#define Therm2_BIE                    (* (reg8 *) Therm2__BIE)
/* Bit-mask for Aliased Register Access */
#define Therm2_BIT_MASK               (* (reg8 *) Therm2__BIT_MASK)
/* Bypass Enable */
#define Therm2_BYP                    (* (reg8 *) Therm2__BYP)
/* Port wide control signals */                                                   
#define Therm2_CTL                    (* (reg8 *) Therm2__CTL)
/* Drive Modes */
#define Therm2_DM0                    (* (reg8 *) Therm2__DM0) 
#define Therm2_DM1                    (* (reg8 *) Therm2__DM1)
#define Therm2_DM2                    (* (reg8 *) Therm2__DM2) 
/* Input Buffer Disable Override */
#define Therm2_INP_DIS                (* (reg8 *) Therm2__INP_DIS)
/* LCD Common or Segment Drive */
#define Therm2_LCD_COM_SEG            (* (reg8 *) Therm2__LCD_COM_SEG)
/* Enable Segment LCD */
#define Therm2_LCD_EN                 (* (reg8 *) Therm2__LCD_EN)
/* Slew Rate Control */
#define Therm2_SLW                    (* (reg8 *) Therm2__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define Therm2_PRTDSI__CAPS_SEL       (* (reg8 *) Therm2__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define Therm2_PRTDSI__DBL_SYNC_IN    (* (reg8 *) Therm2__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define Therm2_PRTDSI__OE_SEL0        (* (reg8 *) Therm2__PRTDSI__OE_SEL0) 
#define Therm2_PRTDSI__OE_SEL1        (* (reg8 *) Therm2__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define Therm2_PRTDSI__OUT_SEL0       (* (reg8 *) Therm2__PRTDSI__OUT_SEL0) 
#define Therm2_PRTDSI__OUT_SEL1       (* (reg8 *) Therm2__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define Therm2_PRTDSI__SYNC_OUT       (* (reg8 *) Therm2__PRTDSI__SYNC_OUT) 


#if defined(Therm2__INTSTAT)  /* Interrupt Registers */

    #define Therm2_INTSTAT                (* (reg8 *) Therm2__INTSTAT)
    #define Therm2_SNAP                   (* (reg8 *) Therm2__SNAP)

#endif /* Interrupt Registers */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_Therm2_H */


/* [] END OF FILE */
