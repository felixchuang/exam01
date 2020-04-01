#include "mbed.h"
#include "uLCD_4DGL.h"
Serial pc(USBTX, USBRX);
uLCD_4DGL uLCD(D1, D7, D2);
AnalogIn Ain(D0);
PwmOut PWM1(D6);

int main()
{
    uLCD.line(5,5,50,5,WHITE);
    uLCD.line(5,5,5,50,WHITE);
    uLCD.line(5,50,50,50,WHITE);
    uLCD.line(50,5,50,50,WHITE);
    uLCD.printf("\n\n\n\n\n\n\n107061136\n");    

    PWM1.period(0.001);

    float i;
    int j;
    float ADCdata[128];
    int sample = 128;
    for (j = 0; j < sample; j++){
        ADCdata[j] = Ain;
    //    Aout = ADCdata[i];
        wait(1./sample);
        pc.printf("%1.3f\r\n", ADCdata[j]);
    }
    
    while(1){
        for (i = 0; i < 1; i += 0.1){
            PWM1 = i;
            wait(0.1);
        }
        for (i = 1; i > 0; i -= 0.1){
            PWM1 = i;
            wait(0.1);
        } 
    }
    

}