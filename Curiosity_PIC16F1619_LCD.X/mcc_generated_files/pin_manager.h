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
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.65.2
        Device            :  PIC16F1619
        Driver Version    :  2.11
    The generated drivers are tested against the following:
        Compiler          :  XC8 1.45
        MPLAB 	          :  MPLAB X 4.15	
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

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set LED_D5 aliases
#define LED_D5_TRIS                 TRISAbits.TRISA1
#define LED_D5_LAT                  LATAbits.LATA1
#define LED_D5_PORT                 PORTAbits.RA1
#define LED_D5_WPU                  WPUAbits.WPUA1
#define LED_D5_OD                   ODCONAbits.ODA1
#define LED_D5_ANS                  ANSELAbits.ANSA1
#define LED_D5_SetHigh()            do { LATAbits.LATA1 = 1; } while(0)
#define LED_D5_SetLow()             do { LATAbits.LATA1 = 0; } while(0)
#define LED_D5_Toggle()             do { LATAbits.LATA1 = ~LATAbits.LATA1; } while(0)
#define LED_D5_GetValue()           PORTAbits.RA1
#define LED_D5_SetDigitalInput()    do { TRISAbits.TRISA1 = 1; } while(0)
#define LED_D5_SetDigitalOutput()   do { TRISAbits.TRISA1 = 0; } while(0)
#define LED_D5_SetPullup()          do { WPUAbits.WPUA1 = 1; } while(0)
#define LED_D5_ResetPullup()        do { WPUAbits.WPUA1 = 0; } while(0)
#define LED_D5_SetPushPull()        do { ODCONAbits.ODA1 = 0; } while(0)
#define LED_D5_SetOpenDrain()       do { ODCONAbits.ODA1 = 1; } while(0)
#define LED_D5_SetAnalogMode()      do { ANSELAbits.ANSA1 = 1; } while(0)
#define LED_D5_SetDigitalMode()     do { ANSELAbits.ANSA1 = 0; } while(0)

// get/set LED_D6 aliases
#define LED_D6_TRIS                 TRISAbits.TRISA2
#define LED_D6_LAT                  LATAbits.LATA2
#define LED_D6_PORT                 PORTAbits.RA2
#define LED_D6_WPU                  WPUAbits.WPUA2
#define LED_D6_OD                   ODCONAbits.ODA2
#define LED_D6_ANS                  ANSELAbits.ANSA2
#define LED_D6_SetHigh()            do { LATAbits.LATA2 = 1; } while(0)
#define LED_D6_SetLow()             do { LATAbits.LATA2 = 0; } while(0)
#define LED_D6_Toggle()             do { LATAbits.LATA2 = ~LATAbits.LATA2; } while(0)
#define LED_D6_GetValue()           PORTAbits.RA2
#define LED_D6_SetDigitalInput()    do { TRISAbits.TRISA2 = 1; } while(0)
#define LED_D6_SetDigitalOutput()   do { TRISAbits.TRISA2 = 0; } while(0)
#define LED_D6_SetPullup()          do { WPUAbits.WPUA2 = 1; } while(0)
#define LED_D6_ResetPullup()        do { WPUAbits.WPUA2 = 0; } while(0)
#define LED_D6_SetPushPull()        do { ODCONAbits.ODA2 = 0; } while(0)
#define LED_D6_SetOpenDrain()       do { ODCONAbits.ODA2 = 1; } while(0)
#define LED_D6_SetAnalogMode()      do { ANSELAbits.ANSA2 = 1; } while(0)
#define LED_D6_SetDigitalMode()     do { ANSELAbits.ANSA2 = 0; } while(0)

// get/set LED_D4 aliases
#define LED_D4_TRIS                 TRISAbits.TRISA5
#define LED_D4_LAT                  LATAbits.LATA5
#define LED_D4_PORT                 PORTAbits.RA5
#define LED_D4_WPU                  WPUAbits.WPUA5
#define LED_D4_OD                   ODCONAbits.ODA5
#define LED_D4_SetHigh()            do { LATAbits.LATA5 = 1; } while(0)
#define LED_D4_SetLow()             do { LATAbits.LATA5 = 0; } while(0)
#define LED_D4_Toggle()             do { LATAbits.LATA5 = ~LATAbits.LATA5; } while(0)
#define LED_D4_GetValue()           PORTAbits.RA5
#define LED_D4_SetDigitalInput()    do { TRISAbits.TRISA5 = 1; } while(0)
#define LED_D4_SetDigitalOutput()   do { TRISAbits.TRISA5 = 0; } while(0)
#define LED_D4_SetPullup()          do { WPUAbits.WPUA5 = 1; } while(0)
#define LED_D4_ResetPullup()        do { WPUAbits.WPUA5 = 0; } while(0)
#define LED_D4_SetPushPull()        do { ODCONAbits.ODA5 = 0; } while(0)
#define LED_D4_SetOpenDrain()       do { ODCONAbits.ODA5 = 1; } while(0)

// get/set LCD_Display_D4 aliases
#define LCD_Display_D4_TRIS                 TRISBbits.TRISB4
#define LCD_Display_D4_LAT                  LATBbits.LATB4
#define LCD_Display_D4_PORT                 PORTBbits.RB4
#define LCD_Display_D4_WPU                  WPUBbits.WPUB4
#define LCD_Display_D4_OD                   ODCONBbits.ODB4
#define LCD_Display_D4_ANS                  ANSELBbits.ANSB4
#define LCD_Display_D4_SetHigh()            do { LATBbits.LATB4 = 1; } while(0)
#define LCD_Display_D4_SetLow()             do { LATBbits.LATB4 = 0; } while(0)
#define LCD_Display_D4_Toggle()             do { LATBbits.LATB4 = ~LATBbits.LATB4; } while(0)
#define LCD_Display_D4_GetValue()           PORTBbits.RB4
#define LCD_Display_D4_SetDigitalInput()    do { TRISBbits.TRISB4 = 1; } while(0)
#define LCD_Display_D4_SetDigitalOutput()   do { TRISBbits.TRISB4 = 0; } while(0)
#define LCD_Display_D4_SetPullup()          do { WPUBbits.WPUB4 = 1; } while(0)
#define LCD_Display_D4_ResetPullup()        do { WPUBbits.WPUB4 = 0; } while(0)
#define LCD_Display_D4_SetPushPull()        do { ODCONBbits.ODB4 = 0; } while(0)
#define LCD_Display_D4_SetOpenDrain()       do { ODCONBbits.ODB4 = 1; } while(0)
#define LCD_Display_D4_SetAnalogMode()      do { ANSELBbits.ANSB4 = 1; } while(0)
#define LCD_Display_D4_SetDigitalMode()     do { ANSELBbits.ANSB4 = 0; } while(0)

// get/set LCD_Display_D5 aliases
#define LCD_Display_D5_TRIS                 TRISBbits.TRISB5
#define LCD_Display_D5_LAT                  LATBbits.LATB5
#define LCD_Display_D5_PORT                 PORTBbits.RB5
#define LCD_Display_D5_WPU                  WPUBbits.WPUB5
#define LCD_Display_D5_OD                   ODCONBbits.ODB5
#define LCD_Display_D5_ANS                  ANSELBbits.ANSB5
#define LCD_Display_D5_SetHigh()            do { LATBbits.LATB5 = 1; } while(0)
#define LCD_Display_D5_SetLow()             do { LATBbits.LATB5 = 0; } while(0)
#define LCD_Display_D5_Toggle()             do { LATBbits.LATB5 = ~LATBbits.LATB5; } while(0)
#define LCD_Display_D5_GetValue()           PORTBbits.RB5
#define LCD_Display_D5_SetDigitalInput()    do { TRISBbits.TRISB5 = 1; } while(0)
#define LCD_Display_D5_SetDigitalOutput()   do { TRISBbits.TRISB5 = 0; } while(0)
#define LCD_Display_D5_SetPullup()          do { WPUBbits.WPUB5 = 1; } while(0)
#define LCD_Display_D5_ResetPullup()        do { WPUBbits.WPUB5 = 0; } while(0)
#define LCD_Display_D5_SetPushPull()        do { ODCONBbits.ODB5 = 0; } while(0)
#define LCD_Display_D5_SetOpenDrain()       do { ODCONBbits.ODB5 = 1; } while(0)
#define LCD_Display_D5_SetAnalogMode()      do { ANSELBbits.ANSB5 = 1; } while(0)
#define LCD_Display_D5_SetDigitalMode()     do { ANSELBbits.ANSB5 = 0; } while(0)

// get/set LCD_Display_D6 aliases
#define LCD_Display_D6_TRIS                 TRISBbits.TRISB6
#define LCD_Display_D6_LAT                  LATBbits.LATB6
#define LCD_Display_D6_PORT                 PORTBbits.RB6
#define LCD_Display_D6_WPU                  WPUBbits.WPUB6
#define LCD_Display_D6_OD                   ODCONBbits.ODB6
#define LCD_Display_D6_ANS                  ANSELBbits.ANSB6
#define LCD_Display_D6_SetHigh()            do { LATBbits.LATB6 = 1; } while(0)
#define LCD_Display_D6_SetLow()             do { LATBbits.LATB6 = 0; } while(0)
#define LCD_Display_D6_Toggle()             do { LATBbits.LATB6 = ~LATBbits.LATB6; } while(0)
#define LCD_Display_D6_GetValue()           PORTBbits.RB6
#define LCD_Display_D6_SetDigitalInput()    do { TRISBbits.TRISB6 = 1; } while(0)
#define LCD_Display_D6_SetDigitalOutput()   do { TRISBbits.TRISB6 = 0; } while(0)
#define LCD_Display_D6_SetPullup()          do { WPUBbits.WPUB6 = 1; } while(0)
#define LCD_Display_D6_ResetPullup()        do { WPUBbits.WPUB6 = 0; } while(0)
#define LCD_Display_D6_SetPushPull()        do { ODCONBbits.ODB6 = 0; } while(0)
#define LCD_Display_D6_SetOpenDrain()       do { ODCONBbits.ODB6 = 1; } while(0)
#define LCD_Display_D6_SetAnalogMode()      do { ANSELBbits.ANSB6 = 1; } while(0)
#define LCD_Display_D6_SetDigitalMode()     do { ANSELBbits.ANSB6 = 0; } while(0)

// get/set LCD_Display_D7 aliases
#define LCD_Display_D7_TRIS                 TRISBbits.TRISB7
#define LCD_Display_D7_LAT                  LATBbits.LATB7
#define LCD_Display_D7_PORT                 PORTBbits.RB7
#define LCD_Display_D7_WPU                  WPUBbits.WPUB7
#define LCD_Display_D7_OD                   ODCONBbits.ODB7
#define LCD_Display_D7_ANS                  ANSELBbits.ANSB7
#define LCD_Display_D7_SetHigh()            do { LATBbits.LATB7 = 1; } while(0)
#define LCD_Display_D7_SetLow()             do { LATBbits.LATB7 = 0; } while(0)
#define LCD_Display_D7_Toggle()             do { LATBbits.LATB7 = ~LATBbits.LATB7; } while(0)
#define LCD_Display_D7_GetValue()           PORTBbits.RB7
#define LCD_Display_D7_SetDigitalInput()    do { TRISBbits.TRISB7 = 1; } while(0)
#define LCD_Display_D7_SetDigitalOutput()   do { TRISBbits.TRISB7 = 0; } while(0)
#define LCD_Display_D7_SetPullup()          do { WPUBbits.WPUB7 = 1; } while(0)
#define LCD_Display_D7_ResetPullup()        do { WPUBbits.WPUB7 = 0; } while(0)
#define LCD_Display_D7_SetPushPull()        do { ODCONBbits.ODB7 = 0; } while(0)
#define LCD_Display_D7_SetOpenDrain()       do { ODCONBbits.ODB7 = 1; } while(0)
#define LCD_Display_D7_SetAnalogMode()      do { ANSELBbits.ANSB7 = 1; } while(0)
#define LCD_Display_D7_SetDigitalMode()     do { ANSELBbits.ANSB7 = 0; } while(0)

// get/set An_IN aliases
#define An_IN_TRIS                 TRISCbits.TRISC0
#define An_IN_LAT                  LATCbits.LATC0
#define An_IN_PORT                 PORTCbits.RC0
#define An_IN_WPU                  WPUCbits.WPUC0
#define An_IN_OD                   ODCONCbits.ODC0
#define An_IN_ANS                  ANSELCbits.ANSC0
#define An_IN_SetHigh()            do { LATCbits.LATC0 = 1; } while(0)
#define An_IN_SetLow()             do { LATCbits.LATC0 = 0; } while(0)
#define An_IN_Toggle()             do { LATCbits.LATC0 = ~LATCbits.LATC0; } while(0)
#define An_IN_GetValue()           PORTCbits.RC0
#define An_IN_SetDigitalInput()    do { TRISCbits.TRISC0 = 1; } while(0)
#define An_IN_SetDigitalOutput()   do { TRISCbits.TRISC0 = 0; } while(0)
#define An_IN_SetPullup()          do { WPUCbits.WPUC0 = 1; } while(0)
#define An_IN_ResetPullup()        do { WPUCbits.WPUC0 = 0; } while(0)
#define An_IN_SetPushPull()        do { ODCONCbits.ODC0 = 0; } while(0)
#define An_IN_SetOpenDrain()       do { ODCONCbits.ODC0 = 1; } while(0)
#define An_IN_SetAnalogMode()      do { ANSELCbits.ANSC0 = 1; } while(0)
#define An_IN_SetDigitalMode()     do { ANSELCbits.ANSC0 = 0; } while(0)

// get/set Touch_IN aliases
#define Touch_IN_TRIS                 TRISCbits.TRISC1
#define Touch_IN_LAT                  LATCbits.LATC1
#define Touch_IN_PORT                 PORTCbits.RC1
#define Touch_IN_WPU                  WPUCbits.WPUC1
#define Touch_IN_OD                   ODCONCbits.ODC1
#define Touch_IN_ANS                  ANSELCbits.ANSC1
#define Touch_IN_SetHigh()            do { LATCbits.LATC1 = 1; } while(0)
#define Touch_IN_SetLow()             do { LATCbits.LATC1 = 0; } while(0)
#define Touch_IN_Toggle()             do { LATCbits.LATC1 = ~LATCbits.LATC1; } while(0)
#define Touch_IN_GetValue()           PORTCbits.RC1
#define Touch_IN_SetDigitalInput()    do { TRISCbits.TRISC1 = 1; } while(0)
#define Touch_IN_SetDigitalOutput()   do { TRISCbits.TRISC1 = 0; } while(0)
#define Touch_IN_SetPullup()          do { WPUCbits.WPUC1 = 1; } while(0)
#define Touch_IN_ResetPullup()        do { WPUCbits.WPUC1 = 0; } while(0)
#define Touch_IN_SetPushPull()        do { ODCONCbits.ODC1 = 0; } while(0)
#define Touch_IN_SetOpenDrain()       do { ODCONCbits.ODC1 = 1; } while(0)
#define Touch_IN_SetAnalogMode()      do { ANSELCbits.ANSC1 = 1; } while(0)
#define Touch_IN_SetDigitalMode()     do { ANSELCbits.ANSC1 = 0; } while(0)

// get/set LCD_Display_EN aliases
#define LCD_Display_EN_TRIS                 TRISCbits.TRISC3
#define LCD_Display_EN_LAT                  LATCbits.LATC3
#define LCD_Display_EN_PORT                 PORTCbits.RC3
#define LCD_Display_EN_WPU                  WPUCbits.WPUC3
#define LCD_Display_EN_OD                   ODCONCbits.ODC3
#define LCD_Display_EN_ANS                  ANSELCbits.ANSC3
#define LCD_Display_EN_SetHigh()            do { LATCbits.LATC3 = 1; } while(0)
#define LCD_Display_EN_SetLow()             do { LATCbits.LATC3 = 0; } while(0)
#define LCD_Display_EN_Toggle()             do { LATCbits.LATC3 = ~LATCbits.LATC3; } while(0)
#define LCD_Display_EN_GetValue()           PORTCbits.RC3
#define LCD_Display_EN_SetDigitalInput()    do { TRISCbits.TRISC3 = 1; } while(0)
#define LCD_Display_EN_SetDigitalOutput()   do { TRISCbits.TRISC3 = 0; } while(0)
#define LCD_Display_EN_SetPullup()          do { WPUCbits.WPUC3 = 1; } while(0)
#define LCD_Display_EN_ResetPullup()        do { WPUCbits.WPUC3 = 0; } while(0)
#define LCD_Display_EN_SetPushPull()        do { ODCONCbits.ODC3 = 0; } while(0)
#define LCD_Display_EN_SetOpenDrain()       do { ODCONCbits.ODC3 = 1; } while(0)
#define LCD_Display_EN_SetAnalogMode()      do { ANSELCbits.ANSC3 = 1; } while(0)
#define LCD_Display_EN_SetDigitalMode()     do { ANSELCbits.ANSC3 = 0; } while(0)

// get/set Sw1_IN aliases
#define Sw1_IN_TRIS                 TRISCbits.TRISC4
#define Sw1_IN_LAT                  LATCbits.LATC4
#define Sw1_IN_PORT                 PORTCbits.RC4
#define Sw1_IN_WPU                  WPUCbits.WPUC4
#define Sw1_IN_OD                   ODCONCbits.ODC4
#define Sw1_IN_SetHigh()            do { LATCbits.LATC4 = 1; } while(0)
#define Sw1_IN_SetLow()             do { LATCbits.LATC4 = 0; } while(0)
#define Sw1_IN_Toggle()             do { LATCbits.LATC4 = ~LATCbits.LATC4; } while(0)
#define Sw1_IN_GetValue()           PORTCbits.RC4
#define Sw1_IN_SetDigitalInput()    do { TRISCbits.TRISC4 = 1; } while(0)
#define Sw1_IN_SetDigitalOutput()   do { TRISCbits.TRISC4 = 0; } while(0)
#define Sw1_IN_SetPullup()          do { WPUCbits.WPUC4 = 1; } while(0)
#define Sw1_IN_ResetPullup()        do { WPUCbits.WPUC4 = 0; } while(0)
#define Sw1_IN_SetPushPull()        do { ODCONCbits.ODC4 = 0; } while(0)
#define Sw1_IN_SetOpenDrain()       do { ODCONCbits.ODC4 = 1; } while(0)

// get/set LED_D7 aliases
#define LED_D7_TRIS                 TRISCbits.TRISC5
#define LED_D7_LAT                  LATCbits.LATC5
#define LED_D7_PORT                 PORTCbits.RC5
#define LED_D7_WPU                  WPUCbits.WPUC5
#define LED_D7_OD                   ODCONCbits.ODC5
#define LED_D7_SetHigh()            do { LATCbits.LATC5 = 1; } while(0)
#define LED_D7_SetLow()             do { LATCbits.LATC5 = 0; } while(0)
#define LED_D7_Toggle()             do { LATCbits.LATC5 = ~LATCbits.LATC5; } while(0)
#define LED_D7_GetValue()           PORTCbits.RC5
#define LED_D7_SetDigitalInput()    do { TRISCbits.TRISC5 = 1; } while(0)
#define LED_D7_SetDigitalOutput()   do { TRISCbits.TRISC5 = 0; } while(0)
#define LED_D7_SetPullup()          do { WPUCbits.WPUC5 = 1; } while(0)
#define LED_D7_ResetPullup()        do { WPUCbits.WPUC5 = 0; } while(0)
#define LED_D7_SetPushPull()        do { ODCONCbits.ODC5 = 0; } while(0)
#define LED_D7_SetOpenDrain()       do { ODCONCbits.ODC5 = 1; } while(0)

// get/set LCD_Display_RS aliases
#define LCD_Display_RS_TRIS                 TRISCbits.TRISC6
#define LCD_Display_RS_LAT                  LATCbits.LATC6
#define LCD_Display_RS_PORT                 PORTCbits.RC6
#define LCD_Display_RS_WPU                  WPUCbits.WPUC6
#define LCD_Display_RS_OD                   ODCONCbits.ODC6
#define LCD_Display_RS_ANS                  ANSELCbits.ANSC6
#define LCD_Display_RS_SetHigh()            do { LATCbits.LATC6 = 1; } while(0)
#define LCD_Display_RS_SetLow()             do { LATCbits.LATC6 = 0; } while(0)
#define LCD_Display_RS_Toggle()             do { LATCbits.LATC6 = ~LATCbits.LATC6; } while(0)
#define LCD_Display_RS_GetValue()           PORTCbits.RC6
#define LCD_Display_RS_SetDigitalInput()    do { TRISCbits.TRISC6 = 1; } while(0)
#define LCD_Display_RS_SetDigitalOutput()   do { TRISCbits.TRISC6 = 0; } while(0)
#define LCD_Display_RS_SetPullup()          do { WPUCbits.WPUC6 = 1; } while(0)
#define LCD_Display_RS_ResetPullup()        do { WPUCbits.WPUC6 = 0; } while(0)
#define LCD_Display_RS_SetPushPull()        do { ODCONCbits.ODC6 = 0; } while(0)
#define LCD_Display_RS_SetOpenDrain()       do { ODCONCbits.ODC6 = 1; } while(0)
#define LCD_Display_RS_SetAnalogMode()      do { ANSELCbits.ANSC6 = 1; } while(0)
#define LCD_Display_RS_SetDigitalMode()     do { ANSELCbits.ANSC6 = 0; } while(0)

// get/set LCD_Display_RW aliases
#define LCD_Display_RW_TRIS                 TRISCbits.TRISC7
#define LCD_Display_RW_LAT                  LATCbits.LATC7
#define LCD_Display_RW_PORT                 PORTCbits.RC7
#define LCD_Display_RW_WPU                  WPUCbits.WPUC7
#define LCD_Display_RW_OD                   ODCONCbits.ODC7
#define LCD_Display_RW_ANS                  ANSELCbits.ANSC7
#define LCD_Display_RW_SetHigh()            do { LATCbits.LATC7 = 1; } while(0)
#define LCD_Display_RW_SetLow()             do { LATCbits.LATC7 = 0; } while(0)
#define LCD_Display_RW_Toggle()             do { LATCbits.LATC7 = ~LATCbits.LATC7; } while(0)
#define LCD_Display_RW_GetValue()           PORTCbits.RC7
#define LCD_Display_RW_SetDigitalInput()    do { TRISCbits.TRISC7 = 1; } while(0)
#define LCD_Display_RW_SetDigitalOutput()   do { TRISCbits.TRISC7 = 0; } while(0)
#define LCD_Display_RW_SetPullup()          do { WPUCbits.WPUC7 = 1; } while(0)
#define LCD_Display_RW_ResetPullup()        do { WPUCbits.WPUC7 = 0; } while(0)
#define LCD_Display_RW_SetPushPull()        do { ODCONCbits.ODC7 = 0; } while(0)
#define LCD_Display_RW_SetOpenDrain()       do { ODCONCbits.ODC7 = 1; } while(0)
#define LCD_Display_RW_SetAnalogMode()      do { ANSELCbits.ANSC7 = 1; } while(0)
#define LCD_Display_RW_SetDigitalMode()     do { ANSELCbits.ANSC7 = 0; } while(0)

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