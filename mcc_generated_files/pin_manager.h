/**
  System Interrupts Generated Driver File

  @Company:
    Microchip Technology Inc.

  @File Name:
    pin_manager.h

  @Summary:
    This is the generated manager file for the MPLAB(c) Code Configurator device.  This manager
    configures the pins direction, initial state, analog setting.
    The peripheral pin select, PPS, configuration is also handled by this manager.

  @Description:
    This source file provides implementations for MPLAB(c) Code Configurator interrupts.
    Generation Information :
        Product Revision  :  MPLAB(c) Code Configurator - 4.45
        Device            :  PIC32MM0256GPM028
    The generated drivers are tested against the following:
        Compiler          :  XC32 v2.05
        MPLAB             :  MPLAB X v4.15

    Copyright (c) 2013 - 2015 released Microchip Technology Inc.  All rights reserved.

    Microchip licenses to you the right to use, modify, copy and distribute
    Software only when embedded on a Microchip microcontroller or digital signal
    controller that is integrated into your product or third party product
    (pursuant to the sublicense terms in the accompanying license agreement).

    You should refer to the license agreement accompanying this Software for
    additional information regarding your rights and obligations.

    SOFTWARE AND DOCUMENTATION ARE PROVIDED "AS IS" WITHOUT WARRANTY OF ANY KIND,
    EITHER EXPRESS OR IMPLIED, INCLUDING WITHOUT LIMITATION, ANY WARRANTY OF
    MERCHANTABILITY, TITLE, NON-INFRINGEMENT AND FITNESS FOR A PARTICULAR PURPOSE.
    IN NO EVENT SHALL MICROCHIP OR ITS LICENSORS BE LIABLE OR OBLIGATED UNDER
    CONTRACT, NEGLIGENCE, STRICT LIABILITY, CONTRIBUTION, BREACH OF WARRANTY, OR
    OTHER LEGAL EQUITABLE THEORY ANY DIRECT OR INDIRECT DAMAGES OR EXPENSES
    INCLUDING BUT NOT LIMITED TO ANY INCIDENTAL, SPECIAL, INDIRECT, PUNITIVE OR
    CONSEQUENTIAL DAMAGES, LOST PROFITS OR LOST DATA, COST OF PROCUREMENT OF
    SUBSTITUTE GOODS, TECHNOLOGY, SERVICES, OR ANY CLAIMS BY THIRD PARTIES
    (INCLUDING BUT NOT LIMITED TO ANY DEFENSE THEREOF), OR OTHER SIMILAR COSTS.

*/

#ifndef _PIN_MANAGER_H
#define _PIN_MANAGER_H
/**
    Section: Includes
*/
#include <xc.h>
#include <stdbool.h>
/**
    Section: Device Pin Macros
*/
/**
  @Summary
    Sets the GPIO pin, RB7, high using LATBbits.LATB7.

  @Description
    Sets the GPIO pin, RB7, high using LATBbits.LATB7.

  @Preconditions
    The RB7 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RB7 high (1)
    SS2OUT_SetHigh();
    </code>

*/
#define SS2OUT_SetHigh()          ( LATBSET = (1 << 7) )
/**
  @Summary
    Sets the GPIO pin, RB7, low using LATBbits.LATB7.

  @Description
    Sets the GPIO pin, RB7, low using LATBbits.LATB7.

  @Preconditions
    The RB7 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RB7 low (0)
    SS2OUT_SetLow();
    </code>

*/
#define SS2OUT_SetLow()           ( LATBCLR = (1 << 7) )

/**
  @Summary
    Sets a value to the GPIO pin.

  @Description
    Sets or Resets the GPIO pin, RB7, low or high using LATBbits.LATB7.

  @Preconditions
    The RB7 must be set to an output.

  @Returns
    None.

  @Param
    bool value; : value to be set to the GPIO pin.

  @Example
    <code>
    // Set RB7 to low.
    SS2OUT_SetValue(false);
    </code>

*/
inline static void SS2OUT_SetValue(bool value)
{
  if(value)
  {
    SS2OUT_SetHigh();
  }
  else
  {
    SS2OUT_SetLow();
  }
}

/**
  @Summary
    Toggles the GPIO pin, RB7, using LATBbits.LATB7.

  @Description
    Toggles the GPIO pin, RB7, using LATBbits.LATB7.

  @Preconditions
    The RB7 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Toggle RB7
    SS2OUT_Toggle();
    </code>

*/
#define SS2OUT_Toggle()           ( LATBINV = (1 << 7) )
/**
  @Summary
    Reads the value of the GPIO pin, RB7.

  @Description
    Reads the value of the GPIO pin, RB7.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    uint16_t portValue;

    // Read RB7
    postValue = SS2OUT_GetValue();
    </code>

*/
#define SS2OUT_GetValue()         PORTBbits.RB7
/**
  @Summary
    Configures the GPIO pin, RB7, as an input.

  @Description
    Configures the GPIO pin, RB7, as an input.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RB7 as an input
    SS2OUT_SetDigitalInput();
    </code>

*/
#define SS2OUT_SetDigitalInput()   ( TRISBSET = (1 << 7) )
/**
  @Summary
    Configures the GPIO pin, RB7, as an output.

  @Description
    Configures the GPIO pin, RB7, as an output.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RB7 as an output
    SS2OUT_SetDigitalOutput();
    </code>

*/
#define SS2OUT_SetDigitalOutput()   ( TRISBCLR = (1 << 7) )
/**
  @Summary
    Sets the GPIO pin, RB8, high using LATBbits.LATB8.

  @Description
    Sets the GPIO pin, RB8, high using LATBbits.LATB8.

  @Preconditions
    The RB8 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RB8 high (1)
    SDO2_SetHigh();
    </code>

*/
#define SDO2_SetHigh()          ( LATBSET = (1 << 8) )
/**
  @Summary
    Sets the GPIO pin, RB8, low using LATBbits.LATB8.

  @Description
    Sets the GPIO pin, RB8, low using LATBbits.LATB8.

  @Preconditions
    The RB8 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RB8 low (0)
    SDO2_SetLow();
    </code>

*/
#define SDO2_SetLow()           ( LATBCLR = (1 << 8) )

/**
  @Summary
    Sets a value to the GPIO pin.

  @Description
    Sets or Resets the GPIO pin, RB8, low or high using LATBbits.LATB8.

  @Preconditions
    The RB8 must be set to an output.

  @Returns
    None.

  @Param
    bool value; : value to be set to the GPIO pin.

  @Example
    <code>
    // Set RB8 to low.
    SDO2_SetValue(false);
    </code>

*/
inline static void SDO2_SetValue(bool value)
{
  if(value)
  {
    SDO2_SetHigh();
  }
  else
  {
    SDO2_SetLow();
  }
}

/**
  @Summary
    Toggles the GPIO pin, RB8, using LATBbits.LATB8.

  @Description
    Toggles the GPIO pin, RB8, using LATBbits.LATB8.

  @Preconditions
    The RB8 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Toggle RB8
    SDO2_Toggle();
    </code>

*/
#define SDO2_Toggle()           ( LATBINV = (1 << 8) )
/**
  @Summary
    Reads the value of the GPIO pin, RB8.

  @Description
    Reads the value of the GPIO pin, RB8.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    uint16_t portValue;

    // Read RB8
    postValue = SDO2_GetValue();
    </code>

*/
#define SDO2_GetValue()         PORTBbits.RB8
/**
  @Summary
    Configures the GPIO pin, RB8, as an input.

  @Description
    Configures the GPIO pin, RB8, as an input.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RB8 as an input
    SDO2_SetDigitalInput();
    </code>

*/
#define SDO2_SetDigitalInput()   ( TRISBSET = (1 << 8) )
/**
  @Summary
    Configures the GPIO pin, RB8, as an output.

  @Description
    Configures the GPIO pin, RB8, as an output.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RB8 as an output
    SDO2_SetDigitalOutput();
    </code>

*/
#define SDO2_SetDigitalOutput()   ( TRISBCLR = (1 << 8) )
/**
  @Summary
    Sets the GPIO pin, RB9, high using LATBbits.LATB9.

  @Description
    Sets the GPIO pin, RB9, high using LATBbits.LATB9.

  @Preconditions
    The RB9 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RB9 high (1)
    SDI2_SetHigh();
    </code>

*/
#define SDI2_SetHigh()          ( LATBSET = (1 << 9) )
/**
  @Summary
    Sets the GPIO pin, RB9, low using LATBbits.LATB9.

  @Description
    Sets the GPIO pin, RB9, low using LATBbits.LATB9.

  @Preconditions
    The RB9 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RB9 low (0)
    SDI2_SetLow();
    </code>

*/
#define SDI2_SetLow()           ( LATBCLR = (1 << 9) )

/**
  @Summary
    Sets a value to the GPIO pin.

  @Description
    Sets or Resets the GPIO pin, RB9, low or high using LATBbits.LATB9.

  @Preconditions
    The RB9 must be set to an output.

  @Returns
    None.

  @Param
    bool value; : value to be set to the GPIO pin.

  @Example
    <code>
    // Set RB9 to low.
    SDI2_SetValue(false);
    </code>

*/
inline static void SDI2_SetValue(bool value)
{
  if(value)
  {
    SDI2_SetHigh();
  }
  else
  {
    SDI2_SetLow();
  }
}

/**
  @Summary
    Toggles the GPIO pin, RB9, using LATBbits.LATB9.

  @Description
    Toggles the GPIO pin, RB9, using LATBbits.LATB9.

  @Preconditions
    The RB9 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Toggle RB9
    SDI2_Toggle();
    </code>

*/
#define SDI2_Toggle()           ( LATBINV = (1 << 9) )
/**
  @Summary
    Reads the value of the GPIO pin, RB9.

  @Description
    Reads the value of the GPIO pin, RB9.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    uint16_t portValue;

    // Read RB9
    postValue = SDI2_GetValue();
    </code>

*/
#define SDI2_GetValue()         PORTBbits.RB9
/**
  @Summary
    Configures the GPIO pin, RB9, as an input.

  @Description
    Configures the GPIO pin, RB9, as an input.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RB9 as an input
    SDI2_SetDigitalInput();
    </code>

*/
#define SDI2_SetDigitalInput()   ( TRISBSET = (1 << 9) )
/**
  @Summary
    Configures the GPIO pin, RB9, as an output.

  @Description
    Configures the GPIO pin, RB9, as an output.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RB9 as an output
    SDI2_SetDigitalOutput();
    </code>

*/
#define SDI2_SetDigitalOutput()   ( TRISBCLR = (1 << 9) )
/**
  @Summary
    Sets the GPIO pin, RC9, high using LATCbits.LATC9.

  @Description
    Sets the GPIO pin, RC9, high using LATCbits.LATC9.

  @Preconditions
    The RC9 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RC9 high (1)
    SCK2OUT_SetHigh();
    </code>

*/
#define SCK2OUT_SetHigh()          ( LATCSET = (1 << 9) )
/**
  @Summary
    Sets the GPIO pin, RC9, low using LATCbits.LATC9.

  @Description
    Sets the GPIO pin, RC9, low using LATCbits.LATC9.

  @Preconditions
    The RC9 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RC9 low (0)
    SCK2OUT_SetLow();
    </code>

*/
#define SCK2OUT_SetLow()           ( LATCCLR = (1 << 9) )

/**
  @Summary
    Sets a value to the GPIO pin.

  @Description
    Sets or Resets the GPIO pin, RC9, low or high using LATCbits.LATC9.

  @Preconditions
    The RC9 must be set to an output.

  @Returns
    None.

  @Param
    bool value; : value to be set to the GPIO pin.

  @Example
    <code>
    // Set RC9 to low.
    SCK2OUT_SetValue(false);
    </code>

*/
inline static void SCK2OUT_SetValue(bool value)
{
  if(value)
  {
    SCK2OUT_SetHigh();
  }
  else
  {
    SCK2OUT_SetLow();
  }
}

/**
  @Summary
    Toggles the GPIO pin, RC9, using LATCbits.LATC9.

  @Description
    Toggles the GPIO pin, RC9, using LATCbits.LATC9.

  @Preconditions
    The RC9 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Toggle RC9
    SCK2OUT_Toggle();
    </code>

*/
#define SCK2OUT_Toggle()           ( LATCINV = (1 << 9) )
/**
  @Summary
    Reads the value of the GPIO pin, RC9.

  @Description
    Reads the value of the GPIO pin, RC9.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    uint16_t portValue;

    // Read RC9
    postValue = SCK2OUT_GetValue();
    </code>

*/
#define SCK2OUT_GetValue()         PORTCbits.RC9
/**
  @Summary
    Configures the GPIO pin, RC9, as an input.

  @Description
    Configures the GPIO pin, RC9, as an input.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RC9 as an input
    SCK2OUT_SetDigitalInput();
    </code>

*/
#define SCK2OUT_SetDigitalInput()   ( TRISCSET = (1 << 9) )
/**
  @Summary
    Configures the GPIO pin, RC9, as an output.

  @Description
    Configures the GPIO pin, RC9, as an output.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RC9 as an output
    SCK2OUT_SetDigitalOutput();
    </code>

*/
#define SCK2OUT_SetDigitalOutput()   ( TRISCCLR = (1 << 9) )

/**
    Section: Function Prototypes
*/
/**
  @Summary
    Configures the pin settings of the PIC32MM0256GPM028
    The peripheral pin select, PPS, configuration is also handled by this manager.

  @Description
    This is the generated manager file for the MPLAB(c) Code Configurator device.  This manager
    configures the pins direction, initial state, analog setting.
    The peripheral pin select, PPS, configuration is also handled by this manager.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    void SYSTEM_Initialize(void)
    {
        // Other initializers are called from this function
        PIN_MANAGER_Initialize();
    }
    </code>

*/
void PIN_MANAGER_Initialize(void);

#endif
