#include "mbed.h"
#include "uLCD_4DGL.h"

uLCD_4DGL uLCD(D1, D0, D2);

int main()
{
    uLCD.line(5,5,50,5,WHITE);
    uLCD.line(5,5,5,50,WHITE);
    uLCD.line(5,50,50,50,WHITE);
    uLCD.line(50,5,50,50,WHITE);
    uLCD.printf("\n\n\n\n\n\n\n107061136\n");    
}