; TECNOLOGICO DE MONTERREY, CAMPUS MONTERREY
; Clase: TE2015 - Microcontroladores
; Profesor: Matias Vazquez Pinon
; Fecha: 16/Julio/2022
; Archivo: Practica_04.s
; Procesador: PIC18F57Q43
; MPLAB X v6.00
; Compilador: pic-as (v2.36)
;  
; Descripcion:
;   Ejemplo para PIC18F57Q43.
;   Declarar la variable en Access RAM llamada 'var' y cargar el valor de 0xE6,
;   es decir 1110 0110b.
;   Desplazar un bit hacia la derecha la variable 'var' utilizando Carry en 1
;   (el carry entrara por la izquierda): 1110 0110 -> 1111 0011b
;
; NOTAS
;   LEDs conectados al Puerto A.
;   Botones conectados al Puerto RC4 A RC7.

PROCESSOR   18F57Q43
#include    <xc.inc>
    
    ; CONFIG1
  CONFIG  FEXTOSC = OFF         ; External Oscillator Selection (Oscillator not enabled)
  CONFIG  RSTOSC = HFINTOSC_1MHZ; Reset Oscillator Selection (HFINTOSC with HFFRQ = 4 MHz and CDIV = 4:1)

; CONFIG2
  CONFIG  CLKOUTEN = OFF        ; Clock out Enable bit (CLKOUT function is disabled)
  CONFIG  PR1WAY = ON           ; PRLOCKED One-Way Set Enable bit (PRLOCKED bit can be cleared and set only once)
  CONFIG  CSWEN = ON            ; Clock Switch Enable bit (Writing to NOSC and NDIV is allowed)
  CONFIG  FCMEN = ON            ; Fail-Safe Clock Monitor Enable bit (Fail-Safe Clock Monitor enabled)

; CONFIG3
  CONFIG  MCLRE = EXTMCLR       ; MCLR Enable bit (If LVP = 0, MCLR pin is MCLR; If LVP = 1, RE3 pin function is MCLR )
  CONFIG  PWRTS = PWRT_OFF      ; Power-up timer selection bits (PWRT is disabled)
  CONFIG  MVECEN = OFF          ; Multi-vector enable bit (Interrupt contoller does not use vector table to prioritze interrupts)
  CONFIG  IVT1WAY = ON          ; IVTLOCK bit One-way set enable bit (IVTLOCKED bit can be cleared and set only once)
  CONFIG  LPBOREN = OFF         ; Low Power BOR Enable bit (Low-Power BOR disabled)
  CONFIG  BOREN = SBORDIS       ; Brown-out Reset Enable bits (Brown-out Reset enabled , SBOREN bit is ignored)

; CONFIG4
  CONFIG  BORV = VBOR_1P9       ; Brown-out Reset Voltage Selection bits (Brown-out Reset Voltage (VBOR) set to 1.9V)
  CONFIG  ZCD = OFF             ; ZCD Disable bit (ZCD module is disabled. ZCD can be enabled by setting the ZCDSEN bit of ZCDCON)
  CONFIG  PPS1WAY = ON          ; PPSLOCK bit One-Way Set Enable bit (PPSLOCKED bit can be cleared and set only once; PPS registers remain locked after one clear/set cycle)
  CONFIG  STVREN = ON           ; Stack Full/Underflow Reset Enable bit (Stack full/underflow will cause Reset)
  CONFIG  LVP = ON              ; Low Voltage Programming Enable bit (Low voltage programming enabled. MCLR/VPP pin function is MCLR. MCLRE configuration bit is ignored)
  CONFIG  XINST = OFF           ; Extended Instruction Set Enable bit (Extended Instruction Set and Indexed Addressing Mode disabled)

; CONFIG5
  CONFIG  WDTCPS = WDTCPS_31    ; WDT Period selection bits (Divider ratio 1:65536; software control of WDTPS)
  CONFIG  WDTE = OFF            ; WDT operating mode (WDT Disabled; SWDTEN is ignored)

; CONFIG6
  CONFIG  WDTCWS = WDTCWS_7     ; WDT Window Select bits (window always open (100%); software control; keyed access not required)
  CONFIG  WDTCCS = SC           ; WDT input clock selector (Software Control)

; CONFIG7
  CONFIG  BBSIZE = BBSIZE_512   ; Boot Block Size selection bits (Boot Block size is 512 words)
  CONFIG  BBEN = OFF            ; Boot Block enable bit (Boot block disabled)
  CONFIG  SAFEN = OFF           ; Storage Area Flash enable bit (SAF disabled)
  CONFIG  DEBUG = OFF           ; Background Debugger (Background Debugger disabled)

; CONFIG8
  CONFIG  WRTB = OFF            ; Boot Block Write Protection bit (Boot Block not Write protected)
  CONFIG  WRTC = OFF            ; Configuration Register Write Protection bit (Configuration registers not Write protected)
  CONFIG  WRTD = OFF            ; Data EEPROM Write Protection bit (Data EEPROM not Write protected)
  CONFIG  WRTSAF = OFF          ; SAF Write protection bit (SAF not Write Protected)
  CONFIG  WRTAPP = OFF          ; Application Block write protection bit (Application Block not write protected)

; CONFIG10
  CONFIG  CP = OFF              ; PFM and Data EEPROM Code Protection bit (PFM and Data EEPROM code protection disabled)
 
PSECT resetVec, class=CODE, reloc=2
resetVec:
    goto main

PSECT code
main:
    ; CONFIGURACI?N DEL OSCILADOR
    BANKSEL OSCCON1		; BANCO 0
    MOVLW   0X62H
    MOVWF   OSCCON1,1
    MOVLW   0X02H
    MOVWF   OSCFRQ,1

    ; Configuración de GPIO
    CLRF    TRISA, 0		; Puerto A como salida por Acceso Rápido
    SETF    TRISC, 0		; Puerto C como entrada por Acceso Rápido

    BANKSEL ANSELC		
    CLRF    ANSELC,1		; Líneas de Puerto C como digitales, por BSR
    BANKSEL WPUC
    SETF    WPUC,1		; Habilitar Pull-up del Puerto C por BSR

var equ	    0xE6
    SETF    WREG,0
    RRCF    WREG
    MOVLW   var
    RRCF    WREG

loop:
    MOVWF   LATA,0
    goto loop
END


