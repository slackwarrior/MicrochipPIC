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
        Device            :  PIC16F15344
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

// get/set LED_D5_Out aliases
#define LED_D5_Out_TRIS                 TRISAbits.TRISA1
#define LED_D5_Out_LAT                  LATAbits.LATA1
#define LED_D5_Out_PORT                 PORTAbits.RA1
#define LED_D5_Out_WPU                  WPUAbits.WPUA1
#define LED_D5_Out_OD                   ODCONAbits.ODCA1
#define LED_D5_Out_ANS                  ANSELAbits.ANSA1
#define LED_D5_Out_SetHigh()            do { LATAbits.LATA1 = 1; } while(0)
#define LED_D5_Out_SetLow()             do { LATAbits.LATA1 = 0; } while(0)
#define LED_D5_Out_Toggle()             do { LATAbits.LATA1 = ~LATAbits.LATA1; } while(0)
#define LED_D5_Out_GetValue()           PORTAbits.RA1
#define LED_D5_Out_SetDigitalInput()    do { TRISAbits.TRISA1 = 1; } while(0)
#define LED_D5_Out_SetDigitalOutput()   do { TRISAbits.TRISA1 = 0; } while(0)
#define LED_D5_Out_SetPullup()          do { WPUAbits.WPUA1 = 1; } while(0)
#define LED_D5_Out_ResetPullup()        do { WPUAbits.WPUA1 = 0; } while(0)
#define LED_D5_Out_SetPushPull()        do { ODCONAbits.ODCA1 = 0; } while(0)
#define LED_D5_Out_SetOpenDrain()       do { ODCONAbits.ODCA1 = 1; } while(0)
#define LED_D5_Out_SetAnalogMode()      do { ANSELAbits.ANSA1 = 1; } while(0)
#define LED_D5_Out_SetDigitalMode()     do { ANSELAbits.ANSA1 = 0; } while(0)

// get/set LED_D6_Out aliases
#define LED_D6_Out_TRIS                 TRISAbits.TRISA2
#define LED_D6_Out_LAT                  LATAbits.LATA2
#define LED_D6_Out_PORT                 PORTAbits.RA2
#define LED_D6_Out_WPU                  WPUAbits.WPUA2
#define LED_D6_Out_OD                   ODCONAbits.ODCA2
#define LED_D6_Out_ANS                  ANSELAbits.ANSA2
#define LED_D6_Out_SetHigh()            do { LATAbits.LATA2 = 1; } while(0)
#define LED_D6_Out_SetLow()             do { LATAbits.LATA2 = 0; } while(0)
#define LED_D6_Out_Toggle()             do { LATAbits.LATA2 = ~LATAbits.LATA2; } while(0)
#define LED_D6_Out_GetValue()           PORTAbits.RA2
#define LED_D6_Out_SetDigitalInput()    do { TRISAbits.TRISA2 = 1; } while(0)
#define LED_D6_Out_SetDigitalOutput()   do { TRISAbits.TRISA2 = 0; } while(0)
#define LED_D6_Out_SetPullup()          do { WPUAbits.WPUA2 = 1; } while(0)
#define LED_D6_Out_ResetPullup()        do { WPUAbits.WPUA2 = 0; } while(0)
#define LED_D6_Out_SetPushPull()        do { ODCONAbits.ODCA2 = 0; } while(0)
#define LED_D6_Out_SetOpenDrain()       do { ODCONAbits.ODCA2 = 1; } while(0)
#define LED_D6_Out_SetAnalogMode()      do { ANSELAbits.ANSA2 = 1; } while(0)
#define LED_D6_Out_SetDigitalMode()     do { ANSELAbits.ANSA2 = 0; } while(0)

// get/set LED_D4_Out aliases
#define LED_D4_Out_TRIS                 TRISAbits.TRISA5
#define LED_D4_Out_LAT                  LATAbits.LATA5
#define LED_D4_Out_PORT                 PORTAbits.RA5
#define LED_D4_Out_WPU                  WPUAbits.WPUA5
#define LED_D4_Out_OD                   ODCONAbits.ODCA5
#define LED_D4_Out_ANS                  ANSELAbits.ANSA5
#define LED_D4_Out_SetHigh()            do { LATAbits.LATA5 = 1; } while(0)
#define LED_D4_Out_SetLow()             do { LATAbits.LATA5 = 0; } while(0)
#define LED_D4_Out_Toggle()             do { LATAbits.LATA5 = ~LATAbits.LATA5; } while(0)
#define LED_D4_Out_GetValue()           PORTAbits.RA5
#define LED_D4_Out_SetDigitalInput()    do { TRISAbits.TRISA5 = 1; } while(0)
#define LED_D4_Out_SetDigitalOutput()   do { TRISAbits.TRISA5 = 0; } while(0)
#define LED_D4_Out_SetPullup()          do { WPUAbits.WPUA5 = 1; } while(0)
#define LED_D4_Out_ResetPullup()        do { WPUAbits.WPUA5 = 0; } while(0)
#define LED_D4_Out_SetPushPull()        do { ODCONAbits.ODCA5 = 0; } while(0)
#define LED_D4_Out_SetOpenDrain()       do { ODCONAbits.ODCA5 = 1; } while(0)
#define LED_D4_Out_SetAnalogMode()      do { ANSELAbits.ANSA5 = 1; } while(0)
#define LED_D4_Out_SetDigitalMode()     do { ANSELAbits.ANSA5 = 0; } while(0)

// get/set LCD_D4_Out aliases
#define LCD_D4_Out_TRIS                 TRISBbits.TRISB4
#define LCD_D4_Out_LAT                  LATBbits.LATB4
#define LCD_D4_Out_PORT                 PORTBbits.RB4
#define LCD_D4_Out_WPU                  WPUBbits.WPUB4
#define LCD_D4_Out_OD                   ODCONBbits.ODCB4
#define LCD_D4_Out_ANS                  ANSELBbits.ANSB4
#define LCD_D4_Out_SetHigh()            do { LATBbits.LATB4 = 1; } while(0)
#define LCD_D4_Out_SetLow()             do { LATBbits.LATB4 = 0; } while(0)
#define LCD_D4_Out_Toggle()             do { LATBbits.LATB4 = ~LATBbits.LATB4; } while(0)
#define LCD_D4_Out_GetValue()           PORTBbits.RB4
#define LCD_D4_Out_SetDigitalInput()    do { TRISBbits.TRISB4 = 1; } while(0)
#define LCD_D4_Out_SetDigitalOutput()   do { TRISBbits.TRISB4 = 0; } while(0)
#define LCD_D4_Out_SetPullup()          do { WPUBbits.WPUB4 = 1; } while(0)
#define LCD_D4_Out_ResetPullup()        do { WPUBbits.WPUB4 = 0; } while(0)
#define LCD_D4_Out_SetPushPull()        do { ODCONBbits.ODCB4 = 0; } while(0)
#define LCD_D4_Out_SetOpenDrain()       do { ODCONBbits.ODCB4 = 1; } while(0)
#define LCD_D4_Out_SetAnalogMode()      do { ANSELBbits.ANSB4 = 1; } while(0)
#define LCD_D4_Out_SetDigitalMode()     do { ANSELBbits.ANSB4 = 0; } while(0)

// get/set LCD_D5_Out aliases
#define LCD_D5_Out_TRIS                 TRISBbits.TRISB5
#define LCD_D5_Out_LAT                  LATBbits.LATB5
#define LCD_D5_Out_PORT                 PORTBbits.RB5
#define LCD_D5_Out_WPU                  WPUBbits.WPUB5
#define LCD_D5_Out_OD                   ODCONBbits.ODCB5
#define LCD_D5_Out_ANS                  ANSELBbits.ANSB5
#define LCD_D5_Out_SetHigh()            do { LATBbits.LATB5 = 1; } while(0)
#define LCD_D5_Out_SetLow()             do { LATBbits.LATB5 = 0; } while(0)
#define LCD_D5_Out_Toggle()             do { LATBbits.LATB5 = ~LATBbits.LATB5; } while(0)
#define LCD_D5_Out_GetValue()           PORTBbits.RB5
#define LCD_D5_Out_SetDigitalInput()    do { TRISBbits.TRISB5 = 1; } while(0)
#define LCD_D5_Out_SetDigitalOutput()   do { TRISBbits.TRISB5 = 0; } while(0)
#define LCD_D5_Out_SetPullup()          do { WPUBbits.WPUB5 = 1; } while(0)
#define LCD_D5_Out_ResetPullup()        do { WPUBbits.WPUB5 = 0; } while(0)
#define LCD_D5_Out_SetPushPull()        do { ODCONBbits.ODCB5 = 0; } while(0)
#define LCD_D5_Out_SetOpenDrain()       do { ODCONBbits.ODCB5 = 1; } while(0)
#define LCD_D5_Out_SetAnalogMode()      do { ANSELBbits.ANSB5 = 1; } while(0)
#define LCD_D5_Out_SetDigitalMode()     do { ANSELBbits.ANSB5 = 0; } while(0)

// get/set LCD_D6_Out aliases
#define LCD_D6_Out_TRIS                 TRISBbits.TRISB6
#define LCD_D6_Out_LAT                  LATBbits.LATB6
#define LCD_D6_Out_PORT                 PORTBbits.RB6
#define LCD_D6_Out_WPU                  WPUBbits.WPUB6
#define LCD_D6_Out_OD                   ODCONBbits.ODCB6
#define LCD_D6_Out_ANS                  ANSELBbits.ANSB6
#define LCD_D6_Out_SetHigh()            do { LATBbits.LATB6 = 1; } while(0)
#define LCD_D6_Out_SetLow()             do { LATBbits.LATB6 = 0; } while(0)
#define LCD_D6_Out_Toggle()             do { LATBbits.LATB6 = ~LATBbits.LATB6; } while(0)
#define LCD_D6_Out_GetValue()           PORTBbits.RB6
#define LCD_D6_Out_SetDigitalInput()    do { TRISBbits.TRISB6 = 1; } while(0)
#define LCD_D6_Out_SetDigitalOutput()   do { TRISBbits.TRISB6 = 0; } while(0)
#define LCD_D6_Out_SetPullup()          do { WPUBbits.WPUB6 = 1; } while(0)
#define LCD_D6_Out_ResetPullup()        do { WPUBbits.WPUB6 = 0; } while(0)
#define LCD_D6_Out_SetPushPull()        do { ODCONBbits.ODCB6 = 0; } while(0)
#define LCD_D6_Out_SetOpenDrain()       do { ODCONBbits.ODCB6 = 1; } while(0)
#define LCD_D6_Out_SetAnalogMode()      do { ANSELBbits.ANSB6 = 1; } while(0)
#define LCD_D6_Out_SetDigitalMode()     do { ANSELBbits.ANSB6 = 0; } while(0)

// get/set LCD_D7_Out aliases
#define LCD_D7_Out_TRIS                 TRISBbits.TRISB7
#define LCD_D7_Out_LAT                  LATBbits.LATB7
#define LCD_D7_Out_PORT                 PORTBbits.RB7
#define LCD_D7_Out_WPU                  WPUBbits.WPUB7
#define LCD_D7_Out_OD                   ODCONBbits.ODCB7
#define LCD_D7_Out_ANS                  ANSELBbits.ANSB7
#define LCD_D7_Out_SetHigh()            do { LATBbits.LATB7 = 1; } while(0)
#define LCD_D7_Out_SetLow()             do { LATBbits.LATB7 = 0; } while(0)
#define LCD_D7_Out_Toggle()             do { LATBbits.LATB7 = ~LATBbits.LATB7; } while(0)
#define LCD_D7_Out_GetValue()           PORTBbits.RB7
#define LCD_D7_Out_SetDigitalInput()    do { TRISBbits.TRISB7 = 1; } while(0)
#define LCD_D7_Out_SetDigitalOutput()   do { TRISBbits.TRISB7 = 0; } while(0)
#define LCD_D7_Out_SetPullup()          do { WPUBbits.WPUB7 = 1; } while(0)
#define LCD_D7_Out_ResetPullup()        do { WPUBbits.WPUB7 = 0; } while(0)
#define LCD_D7_Out_SetPushPull()        do { ODCONBbits.ODCB7 = 0; } while(0)
#define LCD_D7_Out_SetOpenDrain()       do { ODCONBbits.ODCB7 = 1; } while(0)
#define LCD_D7_Out_SetAnalogMode()      do { ANSELBbits.ANSB7 = 1; } while(0)
#define LCD_D7_Out_SetDigitalMode()     do { ANSELBbits.ANSB7 = 0; } while(0)

// get/set Pot1_In aliases
#define Pot1_In_TRIS                 TRISCbits.TRISC0
#define Pot1_In_LAT                  LATCbits.LATC0
#define Pot1_In_PORT                 PORTCbits.RC0
#define Pot1_In_WPU                  WPUCbits.WPUC0
#define Pot1_In_OD                   ODCONCbits.ODCC0
#define Pot1_In_ANS                  ANSELCbits.ANSC0
#define Pot1_In_SetHigh()            do { LATCbits.LATC0 = 1; } while(0)
#define Pot1_In_SetLow()             do { LATCbits.LATC0 = 0; } while(0)
#define Pot1_In_Toggle()             do { LATCbits.LATC0 = ~LATCbits.LATC0; } while(0)
#define Pot1_In_GetValue()           PORTCbits.RC0
#define Pot1_In_SetDigitalInput()    do { TRISCbits.TRISC0 = 1; } while(0)
#define Pot1_In_SetDigitalOutput()   do { TRISCbits.TRISC0 = 0; } while(0)
#define Pot1_In_SetPullup()          do { WPUCbits.WPUC0 = 1; } while(0)
#define Pot1_In_ResetPullup()        do { WPUCbits.WPUC0 = 0; } while(0)
#define Pot1_In_SetPushPull()        do { ODCONCbits.ODCC0 = 0; } while(0)
#define Pot1_In_SetOpenDrain()       do { ODCONCbits.ODCC0 = 1; } while(0)
#define Pot1_In_SetAnalogMode()      do { ANSELCbits.ANSC0 = 1; } while(0)
#define Pot1_In_SetDigitalMode()     do { ANSELCbits.ANSC0 = 0; } while(0)

// get/set TBtn_In aliases
#define TBtn_In_TRIS                 TRISCbits.TRISC1
#define TBtn_In_LAT                  LATCbits.LATC1
#define TBtn_In_PORT                 PORTCbits.RC1
#define TBtn_In_WPU                  WPUCbits.WPUC1
#define TBtn_In_OD                   ODCONCbits.ODCC1
#define TBtn_In_ANS                  ANSELCbits.ANSC1
#define TBtn_In_SetHigh()            do { LATCbits.LATC1 = 1; } while(0)
#define TBtn_In_SetLow()             do { LATCbits.LATC1 = 0; } while(0)
#define TBtn_In_Toggle()             do { LATCbits.LATC1 = ~LATCbits.LATC1; } while(0)
#define TBtn_In_GetValue()           PORTCbits.RC1
#define TBtn_In_SetDigitalInput()    do { TRISCbits.TRISC1 = 1; } while(0)
#define TBtn_In_SetDigitalOutput()   do { TRISCbits.TRISC1 = 0; } while(0)
#define TBtn_In_SetPullup()          do { WPUCbits.WPUC1 = 1; } while(0)
#define TBtn_In_ResetPullup()        do { WPUCbits.WPUC1 = 0; } while(0)
#define TBtn_In_SetPushPull()        do { ODCONCbits.ODCC1 = 0; } while(0)
#define TBtn_In_SetOpenDrain()       do { ODCONCbits.ODCC1 = 1; } while(0)
#define TBtn_In_SetAnalogMode()      do { ANSELCbits.ANSC1 = 1; } while(0)
#define TBtn_In_SetDigitalMode()     do { ANSELCbits.ANSC1 = 0; } while(0)

// get/set LCD_Ctrl_EN aliases
#define LCD_Ctrl_EN_TRIS                 TRISCbits.TRISC2
#define LCD_Ctrl_EN_LAT                  LATCbits.LATC2
#define LCD_Ctrl_EN_PORT                 PORTCbits.RC2
#define LCD_Ctrl_EN_WPU                  WPUCbits.WPUC2
#define LCD_Ctrl_EN_OD                   ODCONCbits.ODCC2
#define LCD_Ctrl_EN_ANS                  ANSELCbits.ANSC2
#define LCD_Ctrl_EN_SetHigh()            do { LATCbits.LATC2 = 1; } while(0)
#define LCD_Ctrl_EN_SetLow()             do { LATCbits.LATC2 = 0; } while(0)
#define LCD_Ctrl_EN_Toggle()             do { LATCbits.LATC2 = ~LATCbits.LATC2; } while(0)
#define LCD_Ctrl_EN_GetValue()           PORTCbits.RC2
#define LCD_Ctrl_EN_SetDigitalInput()    do { TRISCbits.TRISC2 = 1; } while(0)
#define LCD_Ctrl_EN_SetDigitalOutput()   do { TRISCbits.TRISC2 = 0; } while(0)
#define LCD_Ctrl_EN_SetPullup()          do { WPUCbits.WPUC2 = 1; } while(0)
#define LCD_Ctrl_EN_ResetPullup()        do { WPUCbits.WPUC2 = 0; } while(0)
#define LCD_Ctrl_EN_SetPushPull()        do { ODCONCbits.ODCC2 = 0; } while(0)
#define LCD_Ctrl_EN_SetOpenDrain()       do { ODCONCbits.ODCC2 = 1; } while(0)
#define LCD_Ctrl_EN_SetAnalogMode()      do { ANSELCbits.ANSC2 = 1; } while(0)
#define LCD_Ctrl_EN_SetDigitalMode()     do { ANSELCbits.ANSC2 = 0; } while(0)

// get/set LCD_Ctrl_RS aliases
#define LCD_Ctrl_RS_TRIS                 TRISCbits.TRISC3
#define LCD_Ctrl_RS_LAT                  LATCbits.LATC3
#define LCD_Ctrl_RS_PORT                 PORTCbits.RC3
#define LCD_Ctrl_RS_WPU                  WPUCbits.WPUC3
#define LCD_Ctrl_RS_OD                   ODCONCbits.ODCC3
#define LCD_Ctrl_RS_ANS                  ANSELCbits.ANSC3
#define LCD_Ctrl_RS_SetHigh()            do { LATCbits.LATC3 = 1; } while(0)
#define LCD_Ctrl_RS_SetLow()             do { LATCbits.LATC3 = 0; } while(0)
#define LCD_Ctrl_RS_Toggle()             do { LATCbits.LATC3 = ~LATCbits.LATC3; } while(0)
#define LCD_Ctrl_RS_GetValue()           PORTCbits.RC3
#define LCD_Ctrl_RS_SetDigitalInput()    do { TRISCbits.TRISC3 = 1; } while(0)
#define LCD_Ctrl_RS_SetDigitalOutput()   do { TRISCbits.TRISC3 = 0; } while(0)
#define LCD_Ctrl_RS_SetPullup()          do { WPUCbits.WPUC3 = 1; } while(0)
#define LCD_Ctrl_RS_ResetPullup()        do { WPUCbits.WPUC3 = 0; } while(0)
#define LCD_Ctrl_RS_SetPushPull()        do { ODCONCbits.ODCC3 = 0; } while(0)
#define LCD_Ctrl_RS_SetOpenDrain()       do { ODCONCbits.ODCC3 = 1; } while(0)
#define LCD_Ctrl_RS_SetAnalogMode()      do { ANSELCbits.ANSC3 = 1; } while(0)
#define LCD_Ctrl_RS_SetDigitalMode()     do { ANSELCbits.ANSC3 = 0; } while(0)

// get/set Sw1_In aliases
#define Sw1_In_TRIS                 TRISCbits.TRISC4
#define Sw1_In_LAT                  LATCbits.LATC4
#define Sw1_In_PORT                 PORTCbits.RC4
#define Sw1_In_WPU                  WPUCbits.WPUC4
#define Sw1_In_OD                   ODCONCbits.ODCC4
#define Sw1_In_ANS                  ANSELCbits.ANSC4
#define Sw1_In_SetHigh()            do { LATCbits.LATC4 = 1; } while(0)
#define Sw1_In_SetLow()             do { LATCbits.LATC4 = 0; } while(0)
#define Sw1_In_Toggle()             do { LATCbits.LATC4 = ~LATCbits.LATC4; } while(0)
#define Sw1_In_GetValue()           PORTCbits.RC4
#define Sw1_In_SetDigitalInput()    do { TRISCbits.TRISC4 = 1; } while(0)
#define Sw1_In_SetDigitalOutput()   do { TRISCbits.TRISC4 = 0; } while(0)
#define Sw1_In_SetPullup()          do { WPUCbits.WPUC4 = 1; } while(0)
#define Sw1_In_ResetPullup()        do { WPUCbits.WPUC4 = 0; } while(0)
#define Sw1_In_SetPushPull()        do { ODCONCbits.ODCC4 = 0; } while(0)
#define Sw1_In_SetOpenDrain()       do { ODCONCbits.ODCC4 = 1; } while(0)
#define Sw1_In_SetAnalogMode()      do { ANSELCbits.ANSC4 = 1; } while(0)
#define Sw1_In_SetDigitalMode()     do { ANSELCbits.ANSC4 = 0; } while(0)

// get/set LED_D7_Out aliases
#define LED_D7_Out_TRIS                 TRISCbits.TRISC5
#define LED_D7_Out_LAT                  LATCbits.LATC5
#define LED_D7_Out_PORT                 PORTCbits.RC5
#define LED_D7_Out_WPU                  WPUCbits.WPUC5
#define LED_D7_Out_OD                   ODCONCbits.ODCC5
#define LED_D7_Out_ANS                  ANSELCbits.ANSC5
#define LED_D7_Out_SetHigh()            do { LATCbits.LATC5 = 1; } while(0)
#define LED_D7_Out_SetLow()             do { LATCbits.LATC5 = 0; } while(0)
#define LED_D7_Out_Toggle()             do { LATCbits.LATC5 = ~LATCbits.LATC5; } while(0)
#define LED_D7_Out_GetValue()           PORTCbits.RC5
#define LED_D7_Out_SetDigitalInput()    do { TRISCbits.TRISC5 = 1; } while(0)
#define LED_D7_Out_SetDigitalOutput()   do { TRISCbits.TRISC5 = 0; } while(0)
#define LED_D7_Out_SetPullup()          do { WPUCbits.WPUC5 = 1; } while(0)
#define LED_D7_Out_ResetPullup()        do { WPUCbits.WPUC5 = 0; } while(0)
#define LED_D7_Out_SetPushPull()        do { ODCONCbits.ODCC5 = 0; } while(0)
#define LED_D7_Out_SetOpenDrain()       do { ODCONCbits.ODCC5 = 1; } while(0)
#define LED_D7_Out_SetAnalogMode()      do { ANSELCbits.ANSC5 = 1; } while(0)
#define LED_D7_Out_SetDigitalMode()     do { ANSELCbits.ANSC5 = 0; } while(0)

// get/set LCD_Ctrl_RW aliases
#define LCD_Ctrl_RW_TRIS                 TRISCbits.TRISC6
#define LCD_Ctrl_RW_LAT                  LATCbits.LATC6
#define LCD_Ctrl_RW_PORT                 PORTCbits.RC6
#define LCD_Ctrl_RW_WPU                  WPUCbits.WPUC6
#define LCD_Ctrl_RW_OD                   ODCONCbits.ODCC6
#define LCD_Ctrl_RW_ANS                  ANSELCbits.ANSC6
#define LCD_Ctrl_RW_SetHigh()            do { LATCbits.LATC6 = 1; } while(0)
#define LCD_Ctrl_RW_SetLow()             do { LATCbits.LATC6 = 0; } while(0)
#define LCD_Ctrl_RW_Toggle()             do { LATCbits.LATC6 = ~LATCbits.LATC6; } while(0)
#define LCD_Ctrl_RW_GetValue()           PORTCbits.RC6
#define LCD_Ctrl_RW_SetDigitalInput()    do { TRISCbits.TRISC6 = 1; } while(0)
#define LCD_Ctrl_RW_SetDigitalOutput()   do { TRISCbits.TRISC6 = 0; } while(0)
#define LCD_Ctrl_RW_SetPullup()          do { WPUCbits.WPUC6 = 1; } while(0)
#define LCD_Ctrl_RW_ResetPullup()        do { WPUCbits.WPUC6 = 0; } while(0)
#define LCD_Ctrl_RW_SetPushPull()        do { ODCONCbits.ODCC6 = 0; } while(0)
#define LCD_Ctrl_RW_SetOpenDrain()       do { ODCONCbits.ODCC6 = 1; } while(0)
#define LCD_Ctrl_RW_SetAnalogMode()      do { ANSELCbits.ANSC6 = 1; } while(0)
#define LCD_Ctrl_RW_SetDigitalMode()     do { ANSELCbits.ANSC6 = 0; } while(0)

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