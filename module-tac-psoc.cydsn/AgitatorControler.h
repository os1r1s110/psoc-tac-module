/* ========================================
 *
 * Copyright YOUR COMPANY, THE YEAR
 * All Rights Reserved
 * UNPUBLISHED, LICENSED SOFTWARE.
 *
 * CONFIDENTIAL AND PROPRIETARY INFORMATION
 * WHICH IS THE PROPERTY OF your company.
 *
 * ========================================
*/

#ifndef __AGITATOR_CONTROLER_H__
#define __AGITATOR_CONTROLER_H__

    
#include <project.h>
#include "Defines.h"

void changeAgitatorSpeed(uint8 percentage, uint8 module);
int8 changeAgitatorState(uint8 agitatorEnableState, uint8 module);

#endif
/* [] END OF FILE */
