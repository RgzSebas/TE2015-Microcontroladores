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
    ; a) Load 0xFA on address 0x100 in Bank 1
    movlb   1	    ; Move to Bank 1
    movlw   0xFA    ; Load work register with 0x05
    movwf   0x100,1 ; Load value in work register in addess 0x100 through BSR

    ; b) Load 0x05 on address 0x200 in Bank 2
    movlb   2	    ; Move to Bank 1
    movlw   0x05    ; Load work register with 0x05
    movwf   0x200,1 ; Load value in work register in addess 0x100 through BSR

    ; c) Load 0xA0 on address 0x345
    movlb   3	    ; Move to Bank 1
    movlw   0xA0    ; Load work register with 0x05
    movwf   0x345,1 ; Load value in work register in addess 0x100 through BSR

    ; d) Load 156 (dec) on address 0x2FF
    movlb   2	    ; Move to Bank 1
    movlw   156	    ; Load work register with 0x05
    movwf   0x2FF,1 ; Load value in work register in addess 0x100 through BSR

    ; d) What happens if we specify an address but do not switch to its corresponding bank?
    ; Example: let's try to load 0x48 on address 0x2F0 but loading 1 to BSR
    movlb   1	    ; Move to Bank 1
    movlw   0x48    ; Load work register with 0x05
    movwf   0x2F0,1 ; Load value in work register in addess 0x100 through BSR
end


