#include <iostream>

void Zad0() {
    printf("Zadamie 0\n");
    unsigned char a = 0xA;
    unsigned char b = 0xF;
    uint8_t y = 0;
    y = a + b;
    printf("C: DEC : %d\t HEX : %x\n", y, y);

    _asm {
        xor al, al
        xor bl, bl
        mov al, a
        mov bl, b
        add al, bl
        mov y, al
    }
    printf("Assemler: DEC : %d\t HEX : %x\n", y, y);
}

void Zad1() {
    printf("Zadanie 1\n");
    unsigned char a = 0xA;
    uint8_t y = 0;
    y = 2;
    a = 4;
    y += a;
    a = 4;
    y = 2;
    printf("C: DEC : %d\t HEX : %x\n", y, y);
    _asm {
        xor al, al
        xor bl, bl
        mov al, a
        mov bl, y
        add bl, al
        mov y, bl
    }
    printf("Assemler: DEC : %d\t HEX : %x\n", y, y);
}


void Zad2() {
    printf("Zadanie 2\n");
    unsigned char a = 0xA;
    unsigned char b = 0xF;
    unsigned char c = 0x01;
    uint8_t y = 0;

    y = a + b - c;
    printf("C: DEC : %d\t HEX : %x\n", y, y);
    _asm {
        xor al, al
        xor bl, bl
        xor cl, cl
        mov al, a
        mov bl, b
        mov cl, c
        add al, bl
        sub al, cl
        mov y, al
    }
    printf("Assembler: DEC : %d\t HEX : %x\n", y, y);
}

void Zad3() {
    printf("Zadanie 3\n");
    unsigned char a = 0xA;
    uint8_t y = 0;
    a = 4;
    y = a << 1;
    printf("C: DEC : %d\t HEX : %x\n", y, y);
    _asm {
        xor al, al
        mov al, a
        sal al, 0x01
        mov y, al
    }
    printf("Assemler: DEC : %d\t HEX : %x\n", y, y);
}

void Zad4() {
    printf("Zadanie 4\n");
    uint8_t y = 0;
    y = 2;
    y <<= 2;
    printf("C: DEC : %d\t HEX : %x\n", y, y);
    y = 2;
    _asm {
        xor al,al
        mov al,y
        sal al,0x02
        mov y,al
    }
    printf("Assemler: DEC : %d\t HEX : %x\n", y, y);

}

void Zad5() {
    printf("Zadanie 5\n");
    uint8_t y = 2;
    y <<= 3;
    printf("C: DEC : %d\t HEX : %x\n", y, y);
    y = 2;
    _asm {
        xor al, al
        mov al, y
        sal al, 0x03
        mov y, al
    }
    printf("Assemler: DEC : %d\t HEX : %x\n", y, y);
}

void Zad6() {
    printf("Zadanie 6\n");
    uint8_t y = 2;
    y >>= 1;
    printf("C: DEC : %d\t HEX : %x\n", y, y);
    y = 2;
    _asm {
        xor al, al
        mov al, y
        sar al, 0x01
        mov y, al
    }
    printf("Assemler: DEC : %d\t HEX : %x\n", y, y);

}

void Zad7() {
    printf("Zadanie 7\n");
    // y = a * 12 = a*(4+8)= a*4 + a*8 =a^2 +a^3 = a<<2 + a<<3
    unsigned char a = 0x01;
    uint8_t y = 0;
    y = (a << 3) + (a << 2);
    printf("C: DEC : %d\t HEX : %x\n", y, y);

    _asm {
        xor al, al
        xor bl, bl
        mov al, a
        mov bl, a
        sal al, 3
        sal bl, 2
        add al, bl
        mov y, al
    }
    printf("Assemler: DEC : %d\t HEX : %x\n", y, y);

    
}



int main()
{
    Zad0();
    Zad1();
    Zad2();
    Zad3();
    Zad4();
    Zad5();
    Zad6();
    Zad7();
    return 0;
}
