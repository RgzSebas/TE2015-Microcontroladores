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
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.81.8
        Device            :  PIC18F57Q43
        Driver Version    :  2.11
    The generated drivers are tested against the following:
        Compiler          :  XC8 2.36 and above
        MPLAB 	          :  MPLAB X 6.00	
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

// get/set LED0 aliases
#define LED0_TRIS                 TRISAbits.TRISA0
#define LED0_LAT                  LATAbits.LATA0
#define LED0_PORT                 PORTAbits.RA0
#define LED0_WPU                  WPUAbits.WPUA0
#define LED0_OD                   ODCONAbits.ODCA0
#define LED0_ANS                  ANSELAbits.ANSELA0
#define LED0_SetHigh()            do { LATAbits.LATA0 = 1; } while(0)
#define LED0_SetLow()             do { LATAbits.LATA0 = 0; } while(0)
#define LED0_Toggle()             do { LATAbits.LATA0 = ~LATAbits.LATA0; } while(0)
#define LED0_GetValue()           PORTAbits.RA0
#define LED0_SetDigitalInput()    do { TRISAbits.TRISA0 = 1; } while(0)
#define LED0_SetDigitalOutput()   do { TRISAbits.TRISA0 = 0; } while(0)
#define LED0_SetPullup()          do { WPUAbits.WPUA0 = 1; } while(0)
#define LED0_ResetPullup()        do { WPUAbits.WPUA0 = 0; } while(0)
#define LED0_SetPushPull()        do { ODCONAbits.ODCA0 = 0; } while(0)
#define LED0_SetOpenDrain()       do { ODCONAbits.ODCA0 = 1; } while(0)
#define LED0_SetAnalogMode()      do { ANSELAbits.ANSELA0 = 1; } while(0)
#define LED0_SetDigitalMode()     do { ANSELAbits.ANSELA0 = 0; } while(0)

// get/set LED1 aliases
#define LED1_TRIS                 TRISAbits.TRISA1
#define LED1_LAT                  LATAbits.LATA1
#define LED1_PORT                 PORTAbits.RA1
#define LED1_WPU                  WPUAbits.WPUA1
#define LED1_OD                   ODCONAbits.ODCA1
#define LED1_ANS                  ANSELAbits.ANSELA1
#define LED1_SetHigh()            do { LATAbits.LATA1 = 1; } while(0)
#define LED1_SetLow()             do { LATAbits.LATA1 = 0; } while(0)
#define LED1_Toggle()             do { LATAbits.LATA1 = ~LATAbits.LATA1; } while(0)
#define LED1_GetValue()           PORTAbits.RA1
#define LED1_SetDigitalInput()    do { TRISAbits.TRISA1 = 1; } while(0)
#define LED1_SetDigitalOutput()   do { TRISAbits.TRISA1 = 0; } while(0)
#define LED1_SetPullup()          do { WPUAbits.WPUA1 = 1; } while(0)
#define LED1_ResetPullup()        do { WPUAbits.WPUA1 = 0; } while(0)
#define LED1_SetPushPull()        do { ODCONAbits.ODCA1 = 0; } while(0)
#define LED1_SetOpenDrain()       do { ODCONAbits.ODCA1 = 1; } while(0)
#define LED1_SetAnalogMode()      do { ANSELAbits.ANSELA1 = 1; } while(0)
#define LED1_SetDigitalMode()     do { ANSELAbits.ANSELA1 = 0; } while(0)

// get/set LED2 aliases
#define LED2_TRIS                 TRISAbits.TRISA2
#define LED2_LAT                  LATAbits.LATA2
#define LED2_PORT                 PORTAbits.RA2
#define LED2_WPU                  WPUAbits.WPUA2
#define LED2_OD                   ODCONAbits.ODCA2
#define LED2_ANS                  ANSELAbits.ANSELA2
#define LED2_SetHigh()            do { LATAbits.LATA2 = 1; } while(0)
#define LED2_SetLow()             do { LATAbits.LATA2 = 0; } while(0)
#define LED2_Toggle()             do { LATAbits.LATA2 = ~LATAbits.LATA2; } while(0)
#define LED2_GetValue()           PORTAbits.RA2
#define LED2_SetDigitalInput()    do { TRISAbits.TRISA2 = 1; } while(0)
#define LED2_SetDigitalOutput()   do { TRISAbits.TRISA2 = 0; } while(0)
#define LED2_SetPullup()          do { WPUAbits.WPUA2 = 1; } while(0)
#define LED2_ResetPullup()        do { WPUAbits.WPUA2 = 0; } while(0)
#define LED2_SetPushPull()        do { ODCONAbits.ODCA2 = 0; } while(0)
#define LED2_SetOpenDrain()       do { ODCONAbits.ODCA2 = 1; } while(0)
#define LED2_SetAnalogMode()      do { ANSELAbits.ANSELA2 = 1; } while(0)
#define LED2_SetDigitalMode()     do { ANSELAbits.ANSELA2 = 0; } while(0)

// get/set LED3 aliases
#define LED3_TRIS                 TRISAbits.TRISA3
#define LED3_LAT                  LATAbits.LATA3
#define LED3_PORT                 PORTAbits.RA3
#define LED3_WPU                  WPUAbits.WPUA3
#define LED3_OD                   ODCONAbits.ODCA3
#define LED3_ANS                  ANSELAbits.ANSELA3
#define LED3_SetHigh()            do { LATAbits.LATA3 = 1; } while(0)
#define LED3_SetLow()             do { LATAbits.LATA3 = 0; } while(0)
#define LED3_Toggle()             do { LATAbits.LATA3 = ~LATAbits.LATA3; } while(0)
#define LED3_GetValue()           PORTAbits.RA3
#define LED3_SetDigitalInput()    do { TRISAbits.TRISA3 = 1; } while(0)
#define LED3_SetDigitalOutput()   do { TRISAbits.TRISA3 = 0; } while(0)
#define LED3_SetPullup()          do { WPUAbits.WPUA3 = 1; } while(0)
#define LED3_ResetPullup()        do { WPUAbits.WPUA3 = 0; } while(0)
#define LED3_SetPushPull()        do { ODCONAbits.ODCA3 = 0; } while(0)
#define LED3_SetOpenDrain()       do { ODCONAbits.ODCA3 = 1; } while(0)
#define LED3_SetAnalogMode()      do { ANSELAbits.ANSELA3 = 1; } while(0)
#define LED3_SetDigitalMode()     do { ANSELAbits.ANSELA3 = 0; } while(0)

// get/set LED4 aliases
#define LED4_TRIS                 TRISAbits.TRISA4
#define LED4_LAT                  LATAbits.LATA4
#define LED4_PORT                 PORTAbits.RA4
#define LED4_WPU                  WPUAbits.WPUA4
#define LED4_OD                   ODCONAbits.ODCA4
#define LED4_ANS                  ANSELAbits.ANSELA4
#define LED4_SetHigh()            do { LATAbits.LATA4 = 1; } while(0)
#define LED4_SetLow()             do { LATAbits.LATA4 = 0; } while(0)
#define LED4_Toggle()             do { LATAbits.LATA4 = ~LATAbits.LATA4; } while(0)
#define LED4_GetValue()           PORTAbits.RA4
#define LED4_SetDigitalInput()    do { TRISAbits.TRISA4 = 1; } while(0)
#define LED4_SetDigitalOutput()   do { TRISAbits.TRISA4 = 0; } while(0)
#define LED4_SetPullup()          do { WPUAbits.WPUA4 = 1; } while(0)
#define LED4_ResetPullup()        do { WPUAbits.WPUA4 = 0; } while(0)
#define LED4_SetPushPull()        do { ODCONAbits.ODCA4 = 0; } while(0)
#define LED4_SetOpenDrain()       do { ODCONAbits.ODCA4 = 1; } while(0)
#define LED4_SetAnalogMode()      do { ANSELAbits.ANSELA4 = 1; } while(0)
#define LED4_SetDigitalMode()     do { ANSELAbits.ANSELA4 = 0; } while(0)

// get/set LED5 aliases
#define LED5_TRIS                 TRISAbits.TRISA5
#define LED5_LAT                  LATAbits.LATA5
#define LED5_PORT                 PORTAbits.RA5
#define LED5_WPU                  WPUAbits.WPUA5
#define LED5_OD                   ODCONAbits.ODCA5
#define LED5_ANS                  ANSELAbits.ANSELA5
#define LED5_SetHigh()            do { LATAbits.LATA5 = 1; } while(0)
#define LED5_SetLow()             do { LATAbits.LATA5 = 0; } while(0)
#define LED5_Toggle()             do { LATAbits.LATA5 = ~LATAbits.LATA5; } while(0)
#define LED5_GetValue()           PORTAbits.RA5
#define LED5_SetDigitalInput()    do { TRISAbits.TRISA5 = 1; } while(0)
#define LED5_SetDigitalOutput()   do { TRISAbits.TRISA5 = 0; } while(0)
#define LED5_SetPullup()          do { WPUAbits.WPUA5 = 1; } while(0)
#define LED5_ResetPullup()        do { WPUAbits.WPUA5 = 0; } while(0)
#define LED5_SetPushPull()        do { ODCONAbits.ODCA5 = 0; } while(0)
#define LED5_SetOpenDrain()       do { ODCONAbits.ODCA5 = 1; } while(0)
#define LED5_SetAnalogMode()      do { ANSELAbits.ANSELA5 = 1; } while(0)
#define LED5_SetDigitalMode()     do { ANSELAbits.ANSELA5 = 0; } while(0)

// get/set LED6 aliases
#define LED6_TRIS                 TRISAbits.TRISA6
#define LED6_LAT                  LATAbits.LATA6
#define LED6_PORT                 PORTAbits.RA6
#define LED6_WPU                  WPUAbits.WPUA6
#define LED6_OD                   ODCONAbits.ODCA6
#define LED6_ANS                  ANSELAbits.ANSELA6
#define LED6_SetHigh()            do { LATAbits.LATA6 = 1; } while(0)
#define LED6_SetLow()             do { LATAbits.LATA6 = 0; } while(0)
#define LED6_Toggle()             do { LATAbits.LATA6 = ~LATAbits.LATA6; } while(0)
#define LED6_GetValue()           PORTAbits.RA6
#define LED6_SetDigitalInput()    do { TRISAbits.TRISA6 = 1; } while(0)
#define LED6_SetDigitalOutput()   do { TRISAbits.TRISA6 = 0; } while(0)
#define LED6_SetPullup()          do { WPUAbits.WPUA6 = 1; } while(0)
#define LED6_ResetPullup()        do { WPUAbits.WPUA6 = 0; } while(0)
#define LED6_SetPushPull()        do { ODCONAbits.ODCA6 = 0; } while(0)
#define LED6_SetOpenDrain()       do { ODCONAbits.ODCA6 = 1; } while(0)
#define LED6_SetAnalogMode()      do { ANSELAbits.ANSELA6 = 1; } while(0)
#define LED6_SetDigitalMode()     do { ANSELAbits.ANSELA6 = 0; } while(0)

// get/set LED7 aliases
#define LED7_TRIS                 TRISAbits.TRISA7
#define LED7_LAT                  LATAbits.LATA7
#define LED7_PORT                 PORTAbits.RA7
#define LED7_WPU                  WPUAbits.WPUA7
#define LED7_OD                   ODCONAbits.ODCA7
#define LED7_ANS                  ANSELAbits.ANSELA7
#define LED7_SetHigh()            do { LATAbits.LATA7 = 1; } while(0)
#define LED7_SetLow()             do { LATAbits.LATA7 = 0; } while(0)
#define LED7_Toggle()             do { LATAbits.LATA7 = ~LATAbits.LATA7; } while(0)
#define LED7_GetValue()           PORTAbits.RA7
#define LED7_SetDigitalInput()    do { TRISAbits.TRISA7 = 1; } while(0)
#define LED7_SetDigitalOutput()   do { TRISAbits.TRISA7 = 0; } while(0)
#define LED7_SetPullup()          do { WPUAbits.WPUA7 = 1; } while(0)
#define LED7_ResetPullup()        do { WPUAbits.WPUA7 = 0; } while(0)
#define LED7_SetPushPull()        do { ODCONAbits.ODCA7 = 0; } while(0)
#define LED7_SetOpenDrain()       do { ODCONAbits.ODCA7 = 1; } while(0)
#define LED7_SetAnalogMode()      do { ANSELAbits.ANSELA7 = 1; } while(0)
#define LED7_SetDigitalMode()     do { ANSELAbits.ANSELA7 = 0; } while(0)

// get/set SSEG_A aliases
#define SSEG_A_TRIS                 TRISBbits.TRISB0
#define SSEG_A_LAT                  LATBbits.LATB0
#define SSEG_A_PORT                 PORTBbits.RB0
#define SSEG_A_WPU                  WPUBbits.WPUB0
#define SSEG_A_OD                   ODCONBbits.ODCB0
#define SSEG_A_ANS                  ANSELBbits.ANSELB0
#define SSEG_A_SetHigh()            do { LATBbits.LATB0 = 1; } while(0)
#define SSEG_A_SetLow()             do { LATBbits.LATB0 = 0; } while(0)
#define SSEG_A_Toggle()             do { LATBbits.LATB0 = ~LATBbits.LATB0; } while(0)
#define SSEG_A_GetValue()           PORTBbits.RB0
#define SSEG_A_SetDigitalInput()    do { TRISBbits.TRISB0 = 1; } while(0)
#define SSEG_A_SetDigitalOutput()   do { TRISBbits.TRISB0 = 0; } while(0)
#define SSEG_A_SetPullup()          do { WPUBbits.WPUB0 = 1; } while(0)
#define SSEG_A_ResetPullup()        do { WPUBbits.WPUB0 = 0; } while(0)
#define SSEG_A_SetPushPull()        do { ODCONBbits.ODCB0 = 0; } while(0)
#define SSEG_A_SetOpenDrain()       do { ODCONBbits.ODCB0 = 1; } while(0)
#define SSEG_A_SetAnalogMode()      do { ANSELBbits.ANSELB0 = 1; } while(0)
#define SSEG_A_SetDigitalMode()     do { ANSELBbits.ANSELB0 = 0; } while(0)

// get/set SSEG_B aliases
#define SSEG_B_TRIS                 TRISBbits.TRISB1
#define SSEG_B_LAT                  LATBbits.LATB1
#define SSEG_B_PORT                 PORTBbits.RB1
#define SSEG_B_WPU                  WPUBbits.WPUB1
#define SSEG_B_OD                   ODCONBbits.ODCB1
#define SSEG_B_ANS                  ANSELBbits.ANSELB1
#define SSEG_B_SetHigh()            do { LATBbits.LATB1 = 1; } while(0)
#define SSEG_B_SetLow()             do { LATBbits.LATB1 = 0; } while(0)
#define SSEG_B_Toggle()             do { LATBbits.LATB1 = ~LATBbits.LATB1; } while(0)
#define SSEG_B_GetValue()           PORTBbits.RB1
#define SSEG_B_SetDigitalInput()    do { TRISBbits.TRISB1 = 1; } while(0)
#define SSEG_B_SetDigitalOutput()   do { TRISBbits.TRISB1 = 0; } while(0)
#define SSEG_B_SetPullup()          do { WPUBbits.WPUB1 = 1; } while(0)
#define SSEG_B_ResetPullup()        do { WPUBbits.WPUB1 = 0; } while(0)
#define SSEG_B_SetPushPull()        do { ODCONBbits.ODCB1 = 0; } while(0)
#define SSEG_B_SetOpenDrain()       do { ODCONBbits.ODCB1 = 1; } while(0)
#define SSEG_B_SetAnalogMode()      do { ANSELBbits.ANSELB1 = 1; } while(0)
#define SSEG_B_SetDigitalMode()     do { ANSELBbits.ANSELB1 = 0; } while(0)

// get/set SSEG_C aliases
#define SSEG_C_TRIS                 TRISBbits.TRISB2
#define SSEG_C_LAT                  LATBbits.LATB2
#define SSEG_C_PORT                 PORTBbits.RB2
#define SSEG_C_WPU                  WPUBbits.WPUB2
#define SSEG_C_OD                   ODCONBbits.ODCB2
#define SSEG_C_ANS                  ANSELBbits.ANSELB2
#define SSEG_C_SetHigh()            do { LATBbits.LATB2 = 1; } while(0)
#define SSEG_C_SetLow()             do { LATBbits.LATB2 = 0; } while(0)
#define SSEG_C_Toggle()             do { LATBbits.LATB2 = ~LATBbits.LATB2; } while(0)
#define SSEG_C_GetValue()           PORTBbits.RB2
#define SSEG_C_SetDigitalInput()    do { TRISBbits.TRISB2 = 1; } while(0)
#define SSEG_C_SetDigitalOutput()   do { TRISBbits.TRISB2 = 0; } while(0)
#define SSEG_C_SetPullup()          do { WPUBbits.WPUB2 = 1; } while(0)
#define SSEG_C_ResetPullup()        do { WPUBbits.WPUB2 = 0; } while(0)
#define SSEG_C_SetPushPull()        do { ODCONBbits.ODCB2 = 0; } while(0)
#define SSEG_C_SetOpenDrain()       do { ODCONBbits.ODCB2 = 1; } while(0)
#define SSEG_C_SetAnalogMode()      do { ANSELBbits.ANSELB2 = 1; } while(0)
#define SSEG_C_SetDigitalMode()     do { ANSELBbits.ANSELB2 = 0; } while(0)

// get/set SSEG_D aliases
#define SSEG_D_TRIS                 TRISBbits.TRISB3
#define SSEG_D_LAT                  LATBbits.LATB3
#define SSEG_D_PORT                 PORTBbits.RB3
#define SSEG_D_WPU                  WPUBbits.WPUB3
#define SSEG_D_OD                   ODCONBbits.ODCB3
#define SSEG_D_ANS                  ANSELBbits.ANSELB3
#define SSEG_D_SetHigh()            do { LATBbits.LATB3 = 1; } while(0)
#define SSEG_D_SetLow()             do { LATBbits.LATB3 = 0; } while(0)
#define SSEG_D_Toggle()             do { LATBbits.LATB3 = ~LATBbits.LATB3; } while(0)
#define SSEG_D_GetValue()           PORTBbits.RB3
#define SSEG_D_SetDigitalInput()    do { TRISBbits.TRISB3 = 1; } while(0)
#define SSEG_D_SetDigitalOutput()   do { TRISBbits.TRISB3 = 0; } while(0)
#define SSEG_D_SetPullup()          do { WPUBbits.WPUB3 = 1; } while(0)
#define SSEG_D_ResetPullup()        do { WPUBbits.WPUB3 = 0; } while(0)
#define SSEG_D_SetPushPull()        do { ODCONBbits.ODCB3 = 0; } while(0)
#define SSEG_D_SetOpenDrain()       do { ODCONBbits.ODCB3 = 1; } while(0)
#define SSEG_D_SetAnalogMode()      do { ANSELBbits.ANSELB3 = 1; } while(0)
#define SSEG_D_SetDigitalMode()     do { ANSELBbits.ANSELB3 = 0; } while(0)

// get/set SSEG_E aliases
#define SSEG_E_TRIS                 TRISBbits.TRISB4
#define SSEG_E_LAT                  LATBbits.LATB4
#define SSEG_E_PORT                 PORTBbits.RB4
#define SSEG_E_WPU                  WPUBbits.WPUB4
#define SSEG_E_OD                   ODCONBbits.ODCB4
#define SSEG_E_ANS                  ANSELBbits.ANSELB4
#define SSEG_E_SetHigh()            do { LATBbits.LATB4 = 1; } while(0)
#define SSEG_E_SetLow()             do { LATBbits.LATB4 = 0; } while(0)
#define SSEG_E_Toggle()             do { LATBbits.LATB4 = ~LATBbits.LATB4; } while(0)
#define SSEG_E_GetValue()           PORTBbits.RB4
#define SSEG_E_SetDigitalInput()    do { TRISBbits.TRISB4 = 1; } while(0)
#define SSEG_E_SetDigitalOutput()   do { TRISBbits.TRISB4 = 0; } while(0)
#define SSEG_E_SetPullup()          do { WPUBbits.WPUB4 = 1; } while(0)
#define SSEG_E_ResetPullup()        do { WPUBbits.WPUB4 = 0; } while(0)
#define SSEG_E_SetPushPull()        do { ODCONBbits.ODCB4 = 0; } while(0)
#define SSEG_E_SetOpenDrain()       do { ODCONBbits.ODCB4 = 1; } while(0)
#define SSEG_E_SetAnalogMode()      do { ANSELBbits.ANSELB4 = 1; } while(0)
#define SSEG_E_SetDigitalMode()     do { ANSELBbits.ANSELB4 = 0; } while(0)

// get/set SSEG_F aliases
#define SSEG_F_TRIS                 TRISBbits.TRISB5
#define SSEG_F_LAT                  LATBbits.LATB5
#define SSEG_F_PORT                 PORTBbits.RB5
#define SSEG_F_WPU                  WPUBbits.WPUB5
#define SSEG_F_OD                   ODCONBbits.ODCB5
#define SSEG_F_ANS                  ANSELBbits.ANSELB5
#define SSEG_F_SetHigh()            do { LATBbits.LATB5 = 1; } while(0)
#define SSEG_F_SetLow()             do { LATBbits.LATB5 = 0; } while(0)
#define SSEG_F_Toggle()             do { LATBbits.LATB5 = ~LATBbits.LATB5; } while(0)
#define SSEG_F_GetValue()           PORTBbits.RB5
#define SSEG_F_SetDigitalInput()    do { TRISBbits.TRISB5 = 1; } while(0)
#define SSEG_F_SetDigitalOutput()   do { TRISBbits.TRISB5 = 0; } while(0)
#define SSEG_F_SetPullup()          do { WPUBbits.WPUB5 = 1; } while(0)
#define SSEG_F_ResetPullup()        do { WPUBbits.WPUB5 = 0; } while(0)
#define SSEG_F_SetPushPull()        do { ODCONBbits.ODCB5 = 0; } while(0)
#define SSEG_F_SetOpenDrain()       do { ODCONBbits.ODCB5 = 1; } while(0)
#define SSEG_F_SetAnalogMode()      do { ANSELBbits.ANSELB5 = 1; } while(0)
#define SSEG_F_SetDigitalMode()     do { ANSELBbits.ANSELB5 = 0; } while(0)

// get/set SSEG_G aliases
#define SSEG_G_TRIS                 TRISBbits.TRISB6
#define SSEG_G_LAT                  LATBbits.LATB6
#define SSEG_G_PORT                 PORTBbits.RB6
#define SSEG_G_WPU                  WPUBbits.WPUB6
#define SSEG_G_OD                   ODCONBbits.ODCB6
#define SSEG_G_ANS                  ANSELBbits.ANSELB6
#define SSEG_G_SetHigh()            do { LATBbits.LATB6 = 1; } while(0)
#define SSEG_G_SetLow()             do { LATBbits.LATB6 = 0; } while(0)
#define SSEG_G_Toggle()             do { LATBbits.LATB6 = ~LATBbits.LATB6; } while(0)
#define SSEG_G_GetValue()           PORTBbits.RB6
#define SSEG_G_SetDigitalInput()    do { TRISBbits.TRISB6 = 1; } while(0)
#define SSEG_G_SetDigitalOutput()   do { TRISBbits.TRISB6 = 0; } while(0)
#define SSEG_G_SetPullup()          do { WPUBbits.WPUB6 = 1; } while(0)
#define SSEG_G_ResetPullup()        do { WPUBbits.WPUB6 = 0; } while(0)
#define SSEG_G_SetPushPull()        do { ODCONBbits.ODCB6 = 0; } while(0)
#define SSEG_G_SetOpenDrain()       do { ODCONBbits.ODCB6 = 1; } while(0)
#define SSEG_G_SetAnalogMode()      do { ANSELBbits.ANSELB6 = 1; } while(0)
#define SSEG_G_SetDigitalMode()     do { ANSELBbits.ANSELB6 = 0; } while(0)

// get/set SSEG_P aliases
#define SSEG_P_TRIS                 TRISBbits.TRISB7
#define SSEG_P_LAT                  LATBbits.LATB7
#define SSEG_P_PORT                 PORTBbits.RB7
#define SSEG_P_WPU                  WPUBbits.WPUB7
#define SSEG_P_OD                   ODCONBbits.ODCB7
#define SSEG_P_ANS                  ANSELBbits.ANSELB7
#define SSEG_P_SetHigh()            do { LATBbits.LATB7 = 1; } while(0)
#define SSEG_P_SetLow()             do { LATBbits.LATB7 = 0; } while(0)
#define SSEG_P_Toggle()             do { LATBbits.LATB7 = ~LATBbits.LATB7; } while(0)
#define SSEG_P_GetValue()           PORTBbits.RB7
#define SSEG_P_SetDigitalInput()    do { TRISBbits.TRISB7 = 1; } while(0)
#define SSEG_P_SetDigitalOutput()   do { TRISBbits.TRISB7 = 0; } while(0)
#define SSEG_P_SetPullup()          do { WPUBbits.WPUB7 = 1; } while(0)
#define SSEG_P_ResetPullup()        do { WPUBbits.WPUB7 = 0; } while(0)
#define SSEG_P_SetPushPull()        do { ODCONBbits.ODCB7 = 0; } while(0)
#define SSEG_P_SetOpenDrain()       do { ODCONBbits.ODCB7 = 1; } while(0)
#define SSEG_P_SetAnalogMode()      do { ANSELBbits.ANSELB7 = 1; } while(0)
#define SSEG_P_SetDigitalMode()     do { ANSELBbits.ANSELB7 = 0; } while(0)

// get/set SSEG_1 aliases
#define SSEG_1_TRIS                 TRISCbits.TRISC0
#define SSEG_1_LAT                  LATCbits.LATC0
#define SSEG_1_PORT                 PORTCbits.RC0
#define SSEG_1_WPU                  WPUCbits.WPUC0
#define SSEG_1_OD                   ODCONCbits.ODCC0
#define SSEG_1_ANS                  ANSELCbits.ANSELC0
#define SSEG_1_SetHigh()            do { LATCbits.LATC0 = 1; } while(0)
#define SSEG_1_SetLow()             do { LATCbits.LATC0 = 0; } while(0)
#define SSEG_1_Toggle()             do { LATCbits.LATC0 = ~LATCbits.LATC0; } while(0)
#define SSEG_1_GetValue()           PORTCbits.RC0
#define SSEG_1_SetDigitalInput()    do { TRISCbits.TRISC0 = 1; } while(0)
#define SSEG_1_SetDigitalOutput()   do { TRISCbits.TRISC0 = 0; } while(0)
#define SSEG_1_SetPullup()          do { WPUCbits.WPUC0 = 1; } while(0)
#define SSEG_1_ResetPullup()        do { WPUCbits.WPUC0 = 0; } while(0)
#define SSEG_1_SetPushPull()        do { ODCONCbits.ODCC0 = 0; } while(0)
#define SSEG_1_SetOpenDrain()       do { ODCONCbits.ODCC0 = 1; } while(0)
#define SSEG_1_SetAnalogMode()      do { ANSELCbits.ANSELC0 = 1; } while(0)
#define SSEG_1_SetDigitalMode()     do { ANSELCbits.ANSELC0 = 0; } while(0)

// get/set SSEG_2 aliases
#define SSEG_2_TRIS                 TRISCbits.TRISC1
#define SSEG_2_LAT                  LATCbits.LATC1
#define SSEG_2_PORT                 PORTCbits.RC1
#define SSEG_2_WPU                  WPUCbits.WPUC1
#define SSEG_2_OD                   ODCONCbits.ODCC1
#define SSEG_2_ANS                  ANSELCbits.ANSELC1
#define SSEG_2_SetHigh()            do { LATCbits.LATC1 = 1; } while(0)
#define SSEG_2_SetLow()             do { LATCbits.LATC1 = 0; } while(0)
#define SSEG_2_Toggle()             do { LATCbits.LATC1 = ~LATCbits.LATC1; } while(0)
#define SSEG_2_GetValue()           PORTCbits.RC1
#define SSEG_2_SetDigitalInput()    do { TRISCbits.TRISC1 = 1; } while(0)
#define SSEG_2_SetDigitalOutput()   do { TRISCbits.TRISC1 = 0; } while(0)
#define SSEG_2_SetPullup()          do { WPUCbits.WPUC1 = 1; } while(0)
#define SSEG_2_ResetPullup()        do { WPUCbits.WPUC1 = 0; } while(0)
#define SSEG_2_SetPushPull()        do { ODCONCbits.ODCC1 = 0; } while(0)
#define SSEG_2_SetOpenDrain()       do { ODCONCbits.ODCC1 = 1; } while(0)
#define SSEG_2_SetAnalogMode()      do { ANSELCbits.ANSELC1 = 1; } while(0)
#define SSEG_2_SetDigitalMode()     do { ANSELCbits.ANSELC1 = 0; } while(0)

// get/set SSEG_3 aliases
#define SSEG_3_TRIS                 TRISCbits.TRISC2
#define SSEG_3_LAT                  LATCbits.LATC2
#define SSEG_3_PORT                 PORTCbits.RC2
#define SSEG_3_WPU                  WPUCbits.WPUC2
#define SSEG_3_OD                   ODCONCbits.ODCC2
#define SSEG_3_ANS                  ANSELCbits.ANSELC2
#define SSEG_3_SetHigh()            do { LATCbits.LATC2 = 1; } while(0)
#define SSEG_3_SetLow()             do { LATCbits.LATC2 = 0; } while(0)
#define SSEG_3_Toggle()             do { LATCbits.LATC2 = ~LATCbits.LATC2; } while(0)
#define SSEG_3_GetValue()           PORTCbits.RC2
#define SSEG_3_SetDigitalInput()    do { TRISCbits.TRISC2 = 1; } while(0)
#define SSEG_3_SetDigitalOutput()   do { TRISCbits.TRISC2 = 0; } while(0)
#define SSEG_3_SetPullup()          do { WPUCbits.WPUC2 = 1; } while(0)
#define SSEG_3_ResetPullup()        do { WPUCbits.WPUC2 = 0; } while(0)
#define SSEG_3_SetPushPull()        do { ODCONCbits.ODCC2 = 0; } while(0)
#define SSEG_3_SetOpenDrain()       do { ODCONCbits.ODCC2 = 1; } while(0)
#define SSEG_3_SetAnalogMode()      do { ANSELCbits.ANSELC2 = 1; } while(0)
#define SSEG_3_SetDigitalMode()     do { ANSELCbits.ANSELC2 = 0; } while(0)

// get/set SSEG_4 aliases
#define SSEG_4_TRIS                 TRISCbits.TRISC3
#define SSEG_4_LAT                  LATCbits.LATC3
#define SSEG_4_PORT                 PORTCbits.RC3
#define SSEG_4_WPU                  WPUCbits.WPUC3
#define SSEG_4_OD                   ODCONCbits.ODCC3
#define SSEG_4_ANS                  ANSELCbits.ANSELC3
#define SSEG_4_SetHigh()            do { LATCbits.LATC3 = 1; } while(0)
#define SSEG_4_SetLow()             do { LATCbits.LATC3 = 0; } while(0)
#define SSEG_4_Toggle()             do { LATCbits.LATC3 = ~LATCbits.LATC3; } while(0)
#define SSEG_4_GetValue()           PORTCbits.RC3
#define SSEG_4_SetDigitalInput()    do { TRISCbits.TRISC3 = 1; } while(0)
#define SSEG_4_SetDigitalOutput()   do { TRISCbits.TRISC3 = 0; } while(0)
#define SSEG_4_SetPullup()          do { WPUCbits.WPUC3 = 1; } while(0)
#define SSEG_4_ResetPullup()        do { WPUCbits.WPUC3 = 0; } while(0)
#define SSEG_4_SetPushPull()        do { ODCONCbits.ODCC3 = 0; } while(0)
#define SSEG_4_SetOpenDrain()       do { ODCONCbits.ODCC3 = 1; } while(0)
#define SSEG_4_SetAnalogMode()      do { ANSELCbits.ANSELC3 = 1; } while(0)
#define SSEG_4_SetDigitalMode()     do { ANSELCbits.ANSELC3 = 0; } while(0)

// get/set PB1 aliases
#define PB1_TRIS                 TRISCbits.TRISC4
#define PB1_LAT                  LATCbits.LATC4
#define PB1_PORT                 PORTCbits.RC4
#define PB1_WPU                  WPUCbits.WPUC4
#define PB1_OD                   ODCONCbits.ODCC4
#define PB1_ANS                  ANSELCbits.ANSELC4
#define PB1_SetHigh()            do { LATCbits.LATC4 = 1; } while(0)
#define PB1_SetLow()             do { LATCbits.LATC4 = 0; } while(0)
#define PB1_Toggle()             do { LATCbits.LATC4 = ~LATCbits.LATC4; } while(0)
#define PB1_GetValue()           PORTCbits.RC4
#define PB1_SetDigitalInput()    do { TRISCbits.TRISC4 = 1; } while(0)
#define PB1_SetDigitalOutput()   do { TRISCbits.TRISC4 = 0; } while(0)
#define PB1_SetPullup()          do { WPUCbits.WPUC4 = 1; } while(0)
#define PB1_ResetPullup()        do { WPUCbits.WPUC4 = 0; } while(0)
#define PB1_SetPushPull()        do { ODCONCbits.ODCC4 = 0; } while(0)
#define PB1_SetOpenDrain()       do { ODCONCbits.ODCC4 = 1; } while(0)
#define PB1_SetAnalogMode()      do { ANSELCbits.ANSELC4 = 1; } while(0)
#define PB1_SetDigitalMode()     do { ANSELCbits.ANSELC4 = 0; } while(0)

// get/set PB2 aliases
#define PB2_TRIS                 TRISCbits.TRISC5
#define PB2_LAT                  LATCbits.LATC5
#define PB2_PORT                 PORTCbits.RC5
#define PB2_WPU                  WPUCbits.WPUC5
#define PB2_OD                   ODCONCbits.ODCC5
#define PB2_ANS                  ANSELCbits.ANSELC5
#define PB2_SetHigh()            do { LATCbits.LATC5 = 1; } while(0)
#define PB2_SetLow()             do { LATCbits.LATC5 = 0; } while(0)
#define PB2_Toggle()             do { LATCbits.LATC5 = ~LATCbits.LATC5; } while(0)
#define PB2_GetValue()           PORTCbits.RC5
#define PB2_SetDigitalInput()    do { TRISCbits.TRISC5 = 1; } while(0)
#define PB2_SetDigitalOutput()   do { TRISCbits.TRISC5 = 0; } while(0)
#define PB2_SetPullup()          do { WPUCbits.WPUC5 = 1; } while(0)
#define PB2_ResetPullup()        do { WPUCbits.WPUC5 = 0; } while(0)
#define PB2_SetPushPull()        do { ODCONCbits.ODCC5 = 0; } while(0)
#define PB2_SetOpenDrain()       do { ODCONCbits.ODCC5 = 1; } while(0)
#define PB2_SetAnalogMode()      do { ANSELCbits.ANSELC5 = 1; } while(0)
#define PB2_SetDigitalMode()     do { ANSELCbits.ANSELC5 = 0; } while(0)

// get/set PB3 aliases
#define PB3_TRIS                 TRISCbits.TRISC6
#define PB3_LAT                  LATCbits.LATC6
#define PB3_PORT                 PORTCbits.RC6
#define PB3_WPU                  WPUCbits.WPUC6
#define PB3_OD                   ODCONCbits.ODCC6
#define PB3_ANS                  ANSELCbits.ANSELC6
#define PB3_SetHigh()            do { LATCbits.LATC6 = 1; } while(0)
#define PB3_SetLow()             do { LATCbits.LATC6 = 0; } while(0)
#define PB3_Toggle()             do { LATCbits.LATC6 = ~LATCbits.LATC6; } while(0)
#define PB3_GetValue()           PORTCbits.RC6
#define PB3_SetDigitalInput()    do { TRISCbits.TRISC6 = 1; } while(0)
#define PB3_SetDigitalOutput()   do { TRISCbits.TRISC6 = 0; } while(0)
#define PB3_SetPullup()          do { WPUCbits.WPUC6 = 1; } while(0)
#define PB3_ResetPullup()        do { WPUCbits.WPUC6 = 0; } while(0)
#define PB3_SetPushPull()        do { ODCONCbits.ODCC6 = 0; } while(0)
#define PB3_SetOpenDrain()       do { ODCONCbits.ODCC6 = 1; } while(0)
#define PB3_SetAnalogMode()      do { ANSELCbits.ANSELC6 = 1; } while(0)
#define PB3_SetDigitalMode()     do { ANSELCbits.ANSELC6 = 0; } while(0)

// get/set PB4 aliases
#define PB4_TRIS                 TRISCbits.TRISC7
#define PB4_LAT                  LATCbits.LATC7
#define PB4_PORT                 PORTCbits.RC7
#define PB4_WPU                  WPUCbits.WPUC7
#define PB4_OD                   ODCONCbits.ODCC7
#define PB4_ANS                  ANSELCbits.ANSELC7
#define PB4_SetHigh()            do { LATCbits.LATC7 = 1; } while(0)
#define PB4_SetLow()             do { LATCbits.LATC7 = 0; } while(0)
#define PB4_Toggle()             do { LATCbits.LATC7 = ~LATCbits.LATC7; } while(0)
#define PB4_GetValue()           PORTCbits.RC7
#define PB4_SetDigitalInput()    do { TRISCbits.TRISC7 = 1; } while(0)
#define PB4_SetDigitalOutput()   do { TRISCbits.TRISC7 = 0; } while(0)
#define PB4_SetPullup()          do { WPUCbits.WPUC7 = 1; } while(0)
#define PB4_ResetPullup()        do { WPUCbits.WPUC7 = 0; } while(0)
#define PB4_SetPushPull()        do { ODCONCbits.ODCC7 = 0; } while(0)
#define PB4_SetOpenDrain()       do { ODCONCbits.ODCC7 = 1; } while(0)
#define PB4_SetAnalogMode()      do { ANSELCbits.ANSELC7 = 1; } while(0)
#define PB4_SetDigitalMode()     do { ANSELCbits.ANSELC7 = 0; } while(0)

// get/set KEYP_R1 aliases
#define KEYP_R1_TRIS                 TRISFbits.TRISF0
#define KEYP_R1_LAT                  LATFbits.LATF0
#define KEYP_R1_PORT                 PORTFbits.RF0
#define KEYP_R1_WPU                  WPUFbits.WPUF0
#define KEYP_R1_OD                   ODCONFbits.ODCF0
#define KEYP_R1_ANS                  ANSELFbits.ANSELF0
#define KEYP_R1_SetHigh()            do { LATFbits.LATF0 = 1; } while(0)
#define KEYP_R1_SetLow()             do { LATFbits.LATF0 = 0; } while(0)
#define KEYP_R1_Toggle()             do { LATFbits.LATF0 = ~LATFbits.LATF0; } while(0)
#define KEYP_R1_GetValue()           PORTFbits.RF0
#define KEYP_R1_SetDigitalInput()    do { TRISFbits.TRISF0 = 1; } while(0)
#define KEYP_R1_SetDigitalOutput()   do { TRISFbits.TRISF0 = 0; } while(0)
#define KEYP_R1_SetPullup()          do { WPUFbits.WPUF0 = 1; } while(0)
#define KEYP_R1_ResetPullup()        do { WPUFbits.WPUF0 = 0; } while(0)
#define KEYP_R1_SetPushPull()        do { ODCONFbits.ODCF0 = 0; } while(0)
#define KEYP_R1_SetOpenDrain()       do { ODCONFbits.ODCF0 = 1; } while(0)
#define KEYP_R1_SetAnalogMode()      do { ANSELFbits.ANSELF0 = 1; } while(0)
#define KEYP_R1_SetDigitalMode()     do { ANSELFbits.ANSELF0 = 0; } while(0)

// get/set KEYP_R2 aliases
#define KEYP_R2_TRIS                 TRISFbits.TRISF1
#define KEYP_R2_LAT                  LATFbits.LATF1
#define KEYP_R2_PORT                 PORTFbits.RF1
#define KEYP_R2_WPU                  WPUFbits.WPUF1
#define KEYP_R2_OD                   ODCONFbits.ODCF1
#define KEYP_R2_ANS                  ANSELFbits.ANSELF1
#define KEYP_R2_SetHigh()            do { LATFbits.LATF1 = 1; } while(0)
#define KEYP_R2_SetLow()             do { LATFbits.LATF1 = 0; } while(0)
#define KEYP_R2_Toggle()             do { LATFbits.LATF1 = ~LATFbits.LATF1; } while(0)
#define KEYP_R2_GetValue()           PORTFbits.RF1
#define KEYP_R2_SetDigitalInput()    do { TRISFbits.TRISF1 = 1; } while(0)
#define KEYP_R2_SetDigitalOutput()   do { TRISFbits.TRISF1 = 0; } while(0)
#define KEYP_R2_SetPullup()          do { WPUFbits.WPUF1 = 1; } while(0)
#define KEYP_R2_ResetPullup()        do { WPUFbits.WPUF1 = 0; } while(0)
#define KEYP_R2_SetPushPull()        do { ODCONFbits.ODCF1 = 0; } while(0)
#define KEYP_R2_SetOpenDrain()       do { ODCONFbits.ODCF1 = 1; } while(0)
#define KEYP_R2_SetAnalogMode()      do { ANSELFbits.ANSELF1 = 1; } while(0)
#define KEYP_R2_SetDigitalMode()     do { ANSELFbits.ANSELF1 = 0; } while(0)

// get/set KEYP_R3 aliases
#define KEYP_R3_TRIS                 TRISFbits.TRISF2
#define KEYP_R3_LAT                  LATFbits.LATF2
#define KEYP_R3_PORT                 PORTFbits.RF2
#define KEYP_R3_WPU                  WPUFbits.WPUF2
#define KEYP_R3_OD                   ODCONFbits.ODCF2
#define KEYP_R3_ANS                  ANSELFbits.ANSELF2
#define KEYP_R3_SetHigh()            do { LATFbits.LATF2 = 1; } while(0)
#define KEYP_R3_SetLow()             do { LATFbits.LATF2 = 0; } while(0)
#define KEYP_R3_Toggle()             do { LATFbits.LATF2 = ~LATFbits.LATF2; } while(0)
#define KEYP_R3_GetValue()           PORTFbits.RF2
#define KEYP_R3_SetDigitalInput()    do { TRISFbits.TRISF2 = 1; } while(0)
#define KEYP_R3_SetDigitalOutput()   do { TRISFbits.TRISF2 = 0; } while(0)
#define KEYP_R3_SetPullup()          do { WPUFbits.WPUF2 = 1; } while(0)
#define KEYP_R3_ResetPullup()        do { WPUFbits.WPUF2 = 0; } while(0)
#define KEYP_R3_SetPushPull()        do { ODCONFbits.ODCF2 = 0; } while(0)
#define KEYP_R3_SetOpenDrain()       do { ODCONFbits.ODCF2 = 1; } while(0)
#define KEYP_R3_SetAnalogMode()      do { ANSELFbits.ANSELF2 = 1; } while(0)
#define KEYP_R3_SetDigitalMode()     do { ANSELFbits.ANSELF2 = 0; } while(0)

// get/set KEYP_R4 aliases
#define KEYP_R4_TRIS                 TRISFbits.TRISF3
#define KEYP_R4_LAT                  LATFbits.LATF3
#define KEYP_R4_PORT                 PORTFbits.RF3
#define KEYP_R4_WPU                  WPUFbits.WPUF3
#define KEYP_R4_OD                   ODCONFbits.ODCF3
#define KEYP_R4_ANS                  ANSELFbits.ANSELF3
#define KEYP_R4_SetHigh()            do { LATFbits.LATF3 = 1; } while(0)
#define KEYP_R4_SetLow()             do { LATFbits.LATF3 = 0; } while(0)
#define KEYP_R4_Toggle()             do { LATFbits.LATF3 = ~LATFbits.LATF3; } while(0)
#define KEYP_R4_GetValue()           PORTFbits.RF3
#define KEYP_R4_SetDigitalInput()    do { TRISFbits.TRISF3 = 1; } while(0)
#define KEYP_R4_SetDigitalOutput()   do { TRISFbits.TRISF3 = 0; } while(0)
#define KEYP_R4_SetPullup()          do { WPUFbits.WPUF3 = 1; } while(0)
#define KEYP_R4_ResetPullup()        do { WPUFbits.WPUF3 = 0; } while(0)
#define KEYP_R4_SetPushPull()        do { ODCONFbits.ODCF3 = 0; } while(0)
#define KEYP_R4_SetOpenDrain()       do { ODCONFbits.ODCF3 = 1; } while(0)
#define KEYP_R4_SetAnalogMode()      do { ANSELFbits.ANSELF3 = 1; } while(0)
#define KEYP_R4_SetDigitalMode()     do { ANSELFbits.ANSELF3 = 0; } while(0)

// get/set KEYP_C1 aliases
#define KEYP_C1_TRIS                 TRISFbits.TRISF4
#define KEYP_C1_LAT                  LATFbits.LATF4
#define KEYP_C1_PORT                 PORTFbits.RF4
#define KEYP_C1_WPU                  WPUFbits.WPUF4
#define KEYP_C1_OD                   ODCONFbits.ODCF4
#define KEYP_C1_ANS                  ANSELFbits.ANSELF4
#define KEYP_C1_SetHigh()            do { LATFbits.LATF4 = 1; } while(0)
#define KEYP_C1_SetLow()             do { LATFbits.LATF4 = 0; } while(0)
#define KEYP_C1_Toggle()             do { LATFbits.LATF4 = ~LATFbits.LATF4; } while(0)
#define KEYP_C1_GetValue()           PORTFbits.RF4
#define KEYP_C1_SetDigitalInput()    do { TRISFbits.TRISF4 = 1; } while(0)
#define KEYP_C1_SetDigitalOutput()   do { TRISFbits.TRISF4 = 0; } while(0)
#define KEYP_C1_SetPullup()          do { WPUFbits.WPUF4 = 1; } while(0)
#define KEYP_C1_ResetPullup()        do { WPUFbits.WPUF4 = 0; } while(0)
#define KEYP_C1_SetPushPull()        do { ODCONFbits.ODCF4 = 0; } while(0)
#define KEYP_C1_SetOpenDrain()       do { ODCONFbits.ODCF4 = 1; } while(0)
#define KEYP_C1_SetAnalogMode()      do { ANSELFbits.ANSELF4 = 1; } while(0)
#define KEYP_C1_SetDigitalMode()     do { ANSELFbits.ANSELF4 = 0; } while(0)

// get/set KEYP_C2 aliases
#define KEYP_C2_TRIS                 TRISFbits.TRISF5
#define KEYP_C2_LAT                  LATFbits.LATF5
#define KEYP_C2_PORT                 PORTFbits.RF5
#define KEYP_C2_WPU                  WPUFbits.WPUF5
#define KEYP_C2_OD                   ODCONFbits.ODCF5
#define KEYP_C2_ANS                  ANSELFbits.ANSELF5
#define KEYP_C2_SetHigh()            do { LATFbits.LATF5 = 1; } while(0)
#define KEYP_C2_SetLow()             do { LATFbits.LATF5 = 0; } while(0)
#define KEYP_C2_Toggle()             do { LATFbits.LATF5 = ~LATFbits.LATF5; } while(0)
#define KEYP_C2_GetValue()           PORTFbits.RF5
#define KEYP_C2_SetDigitalInput()    do { TRISFbits.TRISF5 = 1; } while(0)
#define KEYP_C2_SetDigitalOutput()   do { TRISFbits.TRISF5 = 0; } while(0)
#define KEYP_C2_SetPullup()          do { WPUFbits.WPUF5 = 1; } while(0)
#define KEYP_C2_ResetPullup()        do { WPUFbits.WPUF5 = 0; } while(0)
#define KEYP_C2_SetPushPull()        do { ODCONFbits.ODCF5 = 0; } while(0)
#define KEYP_C2_SetOpenDrain()       do { ODCONFbits.ODCF5 = 1; } while(0)
#define KEYP_C2_SetAnalogMode()      do { ANSELFbits.ANSELF5 = 1; } while(0)
#define KEYP_C2_SetDigitalMode()     do { ANSELFbits.ANSELF5 = 0; } while(0)

// get/set KEYP_C3 aliases
#define KEYP_C3_TRIS                 TRISFbits.TRISF6
#define KEYP_C3_LAT                  LATFbits.LATF6
#define KEYP_C3_PORT                 PORTFbits.RF6
#define KEYP_C3_WPU                  WPUFbits.WPUF6
#define KEYP_C3_OD                   ODCONFbits.ODCF6
#define KEYP_C3_ANS                  ANSELFbits.ANSELF6
#define KEYP_C3_SetHigh()            do { LATFbits.LATF6 = 1; } while(0)
#define KEYP_C3_SetLow()             do { LATFbits.LATF6 = 0; } while(0)
#define KEYP_C3_Toggle()             do { LATFbits.LATF6 = ~LATFbits.LATF6; } while(0)
#define KEYP_C3_GetValue()           PORTFbits.RF6
#define KEYP_C3_SetDigitalInput()    do { TRISFbits.TRISF6 = 1; } while(0)
#define KEYP_C3_SetDigitalOutput()   do { TRISFbits.TRISF6 = 0; } while(0)
#define KEYP_C3_SetPullup()          do { WPUFbits.WPUF6 = 1; } while(0)
#define KEYP_C3_ResetPullup()        do { WPUFbits.WPUF6 = 0; } while(0)
#define KEYP_C3_SetPushPull()        do { ODCONFbits.ODCF6 = 0; } while(0)
#define KEYP_C3_SetOpenDrain()       do { ODCONFbits.ODCF6 = 1; } while(0)
#define KEYP_C3_SetAnalogMode()      do { ANSELFbits.ANSELF6 = 1; } while(0)
#define KEYP_C3_SetDigitalMode()     do { ANSELFbits.ANSELF6 = 0; } while(0)

// get/set KEYP_C4 aliases
#define KEYP_C4_TRIS                 TRISFbits.TRISF7
#define KEYP_C4_LAT                  LATFbits.LATF7
#define KEYP_C4_PORT                 PORTFbits.RF7
#define KEYP_C4_WPU                  WPUFbits.WPUF7
#define KEYP_C4_OD                   ODCONFbits.ODCF7
#define KEYP_C4_ANS                  ANSELFbits.ANSELF7
#define KEYP_C4_SetHigh()            do { LATFbits.LATF7 = 1; } while(0)
#define KEYP_C4_SetLow()             do { LATFbits.LATF7 = 0; } while(0)
#define KEYP_C4_Toggle()             do { LATFbits.LATF7 = ~LATFbits.LATF7; } while(0)
#define KEYP_C4_GetValue()           PORTFbits.RF7
#define KEYP_C4_SetDigitalInput()    do { TRISFbits.TRISF7 = 1; } while(0)
#define KEYP_C4_SetDigitalOutput()   do { TRISFbits.TRISF7 = 0; } while(0)
#define KEYP_C4_SetPullup()          do { WPUFbits.WPUF7 = 1; } while(0)
#define KEYP_C4_ResetPullup()        do { WPUFbits.WPUF7 = 0; } while(0)
#define KEYP_C4_SetPushPull()        do { ODCONFbits.ODCF7 = 0; } while(0)
#define KEYP_C4_SetOpenDrain()       do { ODCONFbits.ODCF7 = 1; } while(0)
#define KEYP_C4_SetAnalogMode()      do { ANSELFbits.ANSELF7 = 1; } while(0)
#define KEYP_C4_SetDigitalMode()     do { ANSELFbits.ANSELF7 = 0; } while(0)

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