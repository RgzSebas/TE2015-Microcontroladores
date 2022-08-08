/**
  Generated Main Source File

  Company:
    Microchip Technology Inc.

  File Name:
    main.c

  Summary:
    This is the main file generated using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  Description:
    This header file provides implementations for driver APIs for all modules selected in the GUI.
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.81.8
        Device            :  PIC18F57Q43
        Driver Version    :  2.00
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

#include "mcc_generated_files/mcc.h"

/*
                         Main application
 */
void main(void)
{
    // Initialize the device
    SYSTEM_Initialize();

    // If using interrupts in PIC18 High/Low Priority Mode you need to enable the Global High and Low Interrupts
    // If using interrupts in PIC Mid-Range Compatibility Mode you need to enable the Global Interrupts
    // Use the following macros to:

    // Enable the Global Interrupts
    //INTERRUPT_GlobalInterruptEnable();

    // Disable the Global Interrupts
    //INTERRUPT_GlobalInterruptDisable();

    while (1)
    {
        // Add your application code
        SSEG_1_SetLow();
        SSEG_2_SetHigh();
        SSEG_3_SetHigh();
        SSEG_4_SetHigh();
        LATB = 0x3F;
        __delay_ms(2);
        
        SSEG_1_SetHigh();
        SSEG_2_SetLow();
        SSEG_3_SetHigh();
        SSEG_4_SetHigh();
        LATB = 0x3F;
        __delay_ms(2);
        
        SSEG_1_SetHigh();
        SSEG_2_SetHigh();
        SSEG_3_SetLow();
        SSEG_4_SetHigh();
        LATB = 0x3F;
        __delay_ms(2);
        SSEG_1_SetHigh();
        SSEG_2_SetHigh();
        SSEG_3_SetHigh();
        SSEG_4_SetLow();        
        LATB = 0x3F;
        __delay_ms(2);
                
                
//        LATB = 0x06;        // 1
//        LATB = 0x5B;        // 2
//        LATB = 0x4F;        // 3
//        LATB = 0x66;        // 4
//        LATB = 0x6D;        // 5
//        LATB = 0x7D;        // 6
//        LATB = 0x07;        // 7
//        LATB = 0x7F;        // 8
//        LATB = 0x67;        // 9
//        LATB = 0x3F;        // 0
        
        if (!PB1_PORT){
            SSEG_1_SetLow();
            SSEG_2_SetHigh();
            SSEG_3_SetHigh();
            SSEG_4_SetHigh();
            LATB = 0x06;        // 1
            __delay_ms(50);
            LATB = 0x3F;
        }
        else
            LATB = 0x3F;
        
        if (!PB2_PORT){
            SSEG_1_SetHigh();
            SSEG_2_SetLow();
            SSEG_3_SetHigh();
            SSEG_4_SetHigh();
            LATB = 0x06;        // 1
            __delay_ms(50);
            LATB = 0x3F;
        }
        else
            LATB = 0x3F;
        if (!PB3_PORT)
            LATB = 0x06;        // 1
        else
            LATB = 0x3F;
        if (!PB4_PORT)
            LATB = 0x06;        // 1
        else
            LATB = 0x3F;        
    }
}
/**
 End of File
*/