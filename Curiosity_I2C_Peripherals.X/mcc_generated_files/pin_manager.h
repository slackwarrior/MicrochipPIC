/**
  @Generated Pin Manager Header File

  @Company:
    Microchip Technology Inc.

  @File Name:
    pin_manager.h

  @Summary:
    This is the Pin Manager file generated using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  @Description
    This header file provides APIs for driver for .
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.80.0
        Device            :  PIC16LF1709
        Driver Version    :  2.11
    The generated drivers are tested against the following:
        Compiler          :  XC8 2.10 and above
        MPLAB 	          :  MPLAB X 5.30	
*/

/*
    (c) 2018 Microchip Technology Inc. and its subsidiaries. 
    
    Subject to your compliance with these terms, you may use Microchip software and any 
    derivatives exclusively with Microchip products. It is your responsibility to comply with third party 
    license terms applicable to your use of third party software (including open source software) that 
    may accompany Microchip software.
    
    THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER 
    EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY 
    IMPLIED WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS 
    FOR A PARTICULAR PURPOSE.
    
    IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND 
    WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP 
    HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO 
    THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL 
    CLAIMS IN ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT 
    OF FEES, IF ANY, THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS 
    SOFTWARE.
*/

#ifndef PIN_MANAGER_H
#define PIN_MANAGER_H

/**
  Section: Included Files
*/

#include <xc.h>

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set GPIO_LED_D5 aliases
#define GPIO_LED_D5_TRIS                 TRISAbits.TRISA1
#define GPIO_LED_D5_LAT                  LATAbits.LATA1
#define GPIO_LED_D5_PORT                 PORTAbits.RA1
#define GPIO_LED_D5_WPU                  WPUAbits.WPUA1
#define GPIO_LED_D5_OD                   ODCONAbits.ODA1
#define GPIO_LED_D5_ANS                  ANSELAbits.ANSA1
#define GPIO_LED_D5_SetHigh()            do { LATAbits.LATA1 = 1; } while(0)
#define GPIO_LED_D5_SetLow()             do { LATAbits.LATA1 = 0; } while(0)
#define GPIO_LED_D5_Toggle()             do { LATAbits.LATA1 = ~LATAbits.LATA1; } while(0)
#define GPIO_LED_D5_GetValue()           PORTAbits.RA1
#define GPIO_LED_D5_SetDigitalInput()    do { TRISAbits.TRISA1 = 1; } while(0)
#define GPIO_LED_D5_SetDigitalOutput()   do { TRISAbits.TRISA1 = 0; } while(0)
#define GPIO_LED_D5_SetPullup()          do { WPUAbits.WPUA1 = 1; } while(0)
#define GPIO_LED_D5_ResetPullup()        do { WPUAbits.WPUA1 = 0; } while(0)
#define GPIO_LED_D5_SetPushPull()        do { ODCONAbits.ODA1 = 0; } while(0)
#define GPIO_LED_D5_SetOpenDrain()       do { ODCONAbits.ODA1 = 1; } while(0)
#define GPIO_LED_D5_SetAnalogMode()      do { ANSELAbits.ANSA1 = 1; } while(0)
#define GPIO_LED_D5_SetDigitalMode()     do { ANSELAbits.ANSA1 = 0; } while(0)

// get/set GPIO_LED_D6 aliases
#define GPIO_LED_D6_TRIS                 TRISAbits.TRISA2
#define GPIO_LED_D6_LAT                  LATAbits.LATA2
#define GPIO_LED_D6_PORT                 PORTAbits.RA2
#define GPIO_LED_D6_WPU                  WPUAbits.WPUA2
#define GPIO_LED_D6_OD                   ODCONAbits.ODA2
#define GPIO_LED_D6_ANS                  ANSELAbits.ANSA2
#define GPIO_LED_D6_SetHigh()            do { LATAbits.LATA2 = 1; } while(0)
#define GPIO_LED_D6_SetLow()             do { LATAbits.LATA2 = 0; } while(0)
#define GPIO_LED_D6_Toggle()             do { LATAbits.LATA2 = ~LATAbits.LATA2; } while(0)
#define GPIO_LED_D6_GetValue()           PORTAbits.RA2
#define GPIO_LED_D6_SetDigitalInput()    do { TRISAbits.TRISA2 = 1; } while(0)
#define GPIO_LED_D6_SetDigitalOutput()   do { TRISAbits.TRISA2 = 0; } while(0)
#define GPIO_LED_D6_SetPullup()          do { WPUAbits.WPUA2 = 1; } while(0)
#define GPIO_LED_D6_ResetPullup()        do { WPUAbits.WPUA2 = 0; } while(0)
#define GPIO_LED_D6_SetPushPull()        do { ODCONAbits.ODA2 = 0; } while(0)
#define GPIO_LED_D6_SetOpenDrain()       do { ODCONAbits.ODA2 = 1; } while(0)
#define GPIO_LED_D6_SetAnalogMode()      do { ANSELAbits.ANSA2 = 1; } while(0)
#define GPIO_LED_D6_SetDigitalMode()     do { ANSELAbits.ANSA2 = 0; } while(0)

// get/set GPIO_LED_D4 aliases
#define GPIO_LED_D4_TRIS                 TRISAbits.TRISA5
#define GPIO_LED_D4_LAT                  LATAbits.LATA5
#define GPIO_LED_D4_PORT                 PORTAbits.RA5
#define GPIO_LED_D4_WPU                  WPUAbits.WPUA5
#define GPIO_LED_D4_OD                   ODCONAbits.ODA5
#define GPIO_LED_D4_SetHigh()            do { LATAbits.LATA5 = 1; } while(0)
#define GPIO_LED_D4_SetLow()             do { LATAbits.LATA5 = 0; } while(0)
#define GPIO_LED_D4_Toggle()             do { LATAbits.LATA5 = ~LATAbits.LATA5; } while(0)
#define GPIO_LED_D4_GetValue()           PORTAbits.RA5
#define GPIO_LED_D4_SetDigitalInput()    do { TRISAbits.TRISA5 = 1; } while(0)
#define GPIO_LED_D4_SetDigitalOutput()   do { TRISAbits.TRISA5 = 0; } while(0)
#define GPIO_LED_D4_SetPullup()          do { WPUAbits.WPUA5 = 1; } while(0)
#define GPIO_LED_D4_ResetPullup()        do { WPUAbits.WPUA5 = 0; } while(0)
#define GPIO_LED_D4_SetPushPull()        do { ODCONAbits.ODA5 = 0; } while(0)
#define GPIO_LED_D4_SetOpenDrain()       do { ODCONAbits.ODA5 = 1; } while(0)

// get/set RB4 procedures
#define RB4_SetHigh()            do { LATBbits.LATB4 = 1; } while(0)
#define RB4_SetLow()             do { LATBbits.LATB4 = 0; } while(0)
#define RB4_Toggle()             do { LATBbits.LATB4 = ~LATBbits.LATB4; } while(0)
#define RB4_GetValue()              PORTBbits.RB4
#define RB4_SetDigitalInput()    do { TRISBbits.TRISB4 = 1; } while(0)
#define RB4_SetDigitalOutput()   do { TRISBbits.TRISB4 = 0; } while(0)
#define RB4_SetPullup()             do { WPUBbits.WPUB4 = 1; } while(0)
#define RB4_ResetPullup()           do { WPUBbits.WPUB4 = 0; } while(0)
#define RB4_SetAnalogMode()         do { ANSELBbits.ANSB4 = 1; } while(0)
#define RB4_SetDigitalMode()        do { ANSELBbits.ANSB4 = 0; } while(0)

// get/set RB6 procedures
#define RB6_SetHigh()            do { LATBbits.LATB6 = 1; } while(0)
#define RB6_SetLow()             do { LATBbits.LATB6 = 0; } while(0)
#define RB6_Toggle()             do { LATBbits.LATB6 = ~LATBbits.LATB6; } while(0)
#define RB6_GetValue()              PORTBbits.RB6
#define RB6_SetDigitalInput()    do { TRISBbits.TRISB6 = 1; } while(0)
#define RB6_SetDigitalOutput()   do { TRISBbits.TRISB6 = 0; } while(0)
#define RB6_SetPullup()             do { WPUBbits.WPUB6 = 1; } while(0)
#define RB6_ResetPullup()           do { WPUBbits.WPUB6 = 0; } while(0)

// get/set GPIO_SW1 aliases
#define GPIO_SW1_TRIS                 TRISCbits.TRISC4
#define GPIO_SW1_LAT                  LATCbits.LATC4
#define GPIO_SW1_PORT                 PORTCbits.RC4
#define GPIO_SW1_WPU                  WPUCbits.WPUC4
#define GPIO_SW1_OD                   ODCONCbits.ODC4
#define GPIO_SW1_SetHigh()            do { LATCbits.LATC4 = 1; } while(0)
#define GPIO_SW1_SetLow()             do { LATCbits.LATC4 = 0; } while(0)
#define GPIO_SW1_Toggle()             do { LATCbits.LATC4 = ~LATCbits.LATC4; } while(0)
#define GPIO_SW1_GetValue()           PORTCbits.RC4
#define GPIO_SW1_SetDigitalInput()    do { TRISCbits.TRISC4 = 1; } while(0)
#define GPIO_SW1_SetDigitalOutput()   do { TRISCbits.TRISC4 = 0; } while(0)
#define GPIO_SW1_SetPullup()          do { WPUCbits.WPUC4 = 1; } while(0)
#define GPIO_SW1_ResetPullup()        do { WPUCbits.WPUC4 = 0; } while(0)
#define GPIO_SW1_SetPushPull()        do { ODCONCbits.ODC4 = 0; } while(0)
#define GPIO_SW1_SetOpenDrain()       do { ODCONCbits.ODC4 = 1; } while(0)

// get/set GPIO_LED_D7 aliases
#define GPIO_LED_D7_TRIS                 TRISCbits.TRISC5
#define GPIO_LED_D7_LAT                  LATCbits.LATC5
#define GPIO_LED_D7_PORT                 PORTCbits.RC5
#define GPIO_LED_D7_WPU                  WPUCbits.WPUC5
#define GPIO_LED_D7_OD                   ODCONCbits.ODC5
#define GPIO_LED_D7_SetHigh()            do { LATCbits.LATC5 = 1; } while(0)
#define GPIO_LED_D7_SetLow()             do { LATCbits.LATC5 = 0; } while(0)
#define GPIO_LED_D7_Toggle()             do { LATCbits.LATC5 = ~LATCbits.LATC5; } while(0)
#define GPIO_LED_D7_GetValue()           PORTCbits.RC5
#define GPIO_LED_D7_SetDigitalInput()    do { TRISCbits.TRISC5 = 1; } while(0)
#define GPIO_LED_D7_SetDigitalOutput()   do { TRISCbits.TRISC5 = 0; } while(0)
#define GPIO_LED_D7_SetPullup()          do { WPUCbits.WPUC5 = 1; } while(0)
#define GPIO_LED_D7_ResetPullup()        do { WPUCbits.WPUC5 = 0; } while(0)
#define GPIO_LED_D7_SetPushPull()        do { ODCONCbits.ODC5 = 0; } while(0)
#define GPIO_LED_D7_SetOpenDrain()       do { ODCONCbits.ODC5 = 1; } while(0)

/**
   @Param
    none
   @Returns
    none
   @Description
    GPIO and peripheral I/O initialization
   @Example
    PIN_MANAGER_Initialize();
 */
void PIN_MANAGER_Initialize (void);

/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handling routine
 * @Example
    PIN_MANAGER_IOC();
 */
void PIN_MANAGER_IOC(void);



#endif // PIN_MANAGER_H
/**
 End of File
*/