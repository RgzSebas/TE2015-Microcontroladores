; TECNOLOGICO DE MONTERREY, CAMPUS MONTERREY                                  
; TE2015 MICROCONTROLADORES, AGOSTO-DICIEMBRE 2022                            
; PROFESOR: MATIAS VAZQUEZ PINON                                              
; FECHA: 16 DE JULIO DE 2022                                                  
;
; IC: PIC18F4550
; 1) Move value of 0xFA to address 0x100 of Bank 1
; 2) Move value of 9 to address 0x200 of Bank 2
; 3) Move value of 0xA0 to address 0x345
; 4) Move value of 156 to address 0x710
; 5) What happens if we specify an address but do not switch to its corresponding bank?

PROCESSOR   18F4550
#include<xc.inc>

PSECT	resetVec, class=CODE, reloc=2
PSECT	absdata, abs, ovrld

absdata:
    org	    0x1000

resetVec:
    goto    main

PSECT code
main:
;   1) Move value of 0xFA to address 0x100 of Bank 1
    movlb   1		; Move literal 1 to BSR to select Bank 1
    movlw   0xFA	; Move literal 0xFA to W
    movwf   0x100,1	; Move W to file with address 0x100 using BSR (a=1)

;   2) Move value of 9 to address 0x200 of Bank 2
    movlb   2		; Move literal 2 to BSR to select Bank 2
    movlw   0x09	; Move literal 9 to W
    movwf   0x200,1	; Move W to file with address 0x200 using BSR (a=1)

;   3) Move value of 0xA0 to address 0x345 of Bank 3
    movlb   3		; Move literal 3 to BSR to select Bank 3
    movlw   0xA0	; Move literal 0xA0 to W
    movwf   0x345,1	; Move W to file with address 0x345 using BSR (a=1)

;   4) Move value of 156 to address 0x710 of Bank 7
    movlb   7		; Move literal 7 to BSR to select Bank 3
    movlw   156		; Move literal 156 to W
    movwf   0x710,1	; Move W to file with address 0x710 using BSR (a=1)

;   5) What happens if we specify an address but do not switch to its corresponding bank?
;   Example: let's try to load 0x48 on address 0x2F0 without changing banks
;   NOTE: remember that the last time we loaded something into BSR was a 7
    movlw   0x48	; Move literal 0x48 to W
    movwf   0x2F0,1	; Move W to file with address 0x2F0 using BSR (a=1)

end resetVec


