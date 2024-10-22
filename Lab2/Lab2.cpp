#include <iostream>

//void Zad1() {
//    // 27 = 16 + 8 +2 +1=a<<4 + a<<3 + a<<2 +a<<1
//    unsigned char a = 255;
//    uint16_t y = 27 * a;
//    printf("C: DEC : %d\t HEX : %x\n", y, y);
//    y = 0;
//    _asm {
//        xor al, al
//        xor bl, bl
//        mov al, a
//        mov bl, a
//        sal al, 4
//        sal bl, 3
//        add al, bl
//        mov bl, a
//        sax bl, 1
//        add al, bl
//        mov bl, a
//        add al, bl
//        mov y, al
//    }
//    printf("Assemler: DEC : %d\t HEX : %x\n", y, y);
//}

void Zad2() {
    unsigned char a = 0x0;
    uint8_t y = 0;
    if (a == 0x32) y = 0;
    else y = 1;
    printf("C: DEC : %d\t HEX : %x\n", y, y);
    _asm {
        xor al, al
        mov al, a
        sub al, 0x32
        jnz et1 //ZF=0
        jz et2 //ZF=1
        et1:
            mov y,1
            jmp koniec
        et2:
            mov y,0
        koniec:
    }
    printf("Assembler: DEC : %d\t HEX : %x\n", y, y);
    
}

void Zad3() {
    unsigned char a = 0x0;
    uint8_t y = 0;
    if (a == 0x32) {
        y = 0;

    }
    else { 
        y = 1; 
    }
    printf("C: DEC : %d\t HEX : %x\n", y, y);
    _asm {
        xor al, al
        mov al, 0x32
        cmp al, 0x32
        jnz et1 //ZF=0
        jz et2 //ZF=1
        et1 :
        mov y, 1
            jmp koniec
            et2 :
        mov y, 0
            koniec :
    }
    printf("Assembler: DEC : %d\t HEX : %x\n", y, y);
}

void Zad4() {
    unsigned char a = 0x32;
    uint8_t y = 0;
    if (a == 0x32) {
        y = 0;

    }
    else {
        y = 1;
    }
    printf("C: DEC : %d\t HEX : %x\n", y, y);
    _asm {
        xor al, al
        mov al, 0x32
        add al, 0xC3
        jnz et1 //ZF=0
        jz et2 //ZF=1
        et1 :
        mov y, 1
            jmp koniec
            et2 :
        mov y, 0
            koniec :
    }
    printf("Assembler: DEC : %d\t HEX : %x\n", y, y);

}

void Zad5() {
    unsigned char a = 5;
    unsigned char b = 7;
    uint8_t y = 0;
    if (a == 5 && b == 7) {
        y = 1;
    }
    else {
        y = 0;
    }
    _asm {
        xor al, al
        xor bl, bl
        mov al, a
        mov bl, b
        sub al, 5
        sub bl, 7

    }
}

int main()
{
    //Zad1();
    //Zad2();
    //Zad3();
    //Zad4();
    Zad5();
    return 0;
}
