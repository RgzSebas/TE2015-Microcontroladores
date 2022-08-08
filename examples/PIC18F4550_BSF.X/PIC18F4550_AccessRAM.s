PROCESSOR   18F4550
#include<xc.inc>

PSECT	resetVec, class=CODE, reloc=2
PSECT	absdata, abs, ovrld

;absdata:
;    org	    0x1000

resetVec:
    goto    main

PSECT code
main:
    ; a) Load 0xFA on address 0x100 in Bank 1
    movlw   0xFA
    movwf   0x100,0

    ; b) Load 0x05 on address 0x200 in Bank 2
    movlw   0x05
    movwf   0x200,0

    ; c) Load 0xA0 on address 0x345
    movlw   0xA0
    movwf   0x345,0

    ; d) Load 156 (dec) on address 0x2FF
    movlw   156
    movwf   0x2FF,0

    ; d) What happens if we specify an address but do not switch to its corresponding bank?
    ; Example: let's try to load 0x48 on address 0x2F0 but loading 1 to BSR
    movlw   0x48
    movwf   0x2F0,0
end


