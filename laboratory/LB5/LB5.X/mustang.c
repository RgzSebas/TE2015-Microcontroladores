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
#define step 50

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
        KR3_Toggle(); // Toggle 4th LED (Start High = False, therefore LED will turn ON)
        KR4_Toggle(); // Toggle 5th LED     
        __delay_ms(step);  // Wait for value in step (in ms)
        KR2_Toggle(); // Toggle 3th LED 
        KR5_Toggle(); // Toggle 6th LED     
        __delay_ms(step);  // Wait for value in step (in ms
        KR1_Toggle(); // Toggle 2th LED 
        KR6_Toggle(); // Toggle 7th LED     
        __delay_ms(step);  // Wait for value in step (in ms)
        KR0_Toggle(); // Toggle 1th LED 
        KR7_Toggle(); // Toggle 8th LED     
        __delay_ms(step);  // Wait for value in step (in ms)
        // Turn OFF all LEDs
        KR3_Toggle(); // Toggle 4th LED 
        KR4_Toggle(); // Toggle 5th LED     
        KR2_Toggle(); // Toggle 3th LED 
        KR5_Toggle(); // Toggle 6th LED     
        KR1_Toggle(); // Toggle 2th LED 
        KR6_Toggle(); // Toggle 7th LED     
        KR0_Toggle(); // Toggle 1th LED 
        KR7_Toggle(); // Toggle 8th LED   
        __delay_ms(step);  // Wait for value in step (in ms)
    }
}
/**
 End of File
*/
