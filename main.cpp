#include "mbed.h"
#include "C12832.h"
#include "LM75B.h"

//DigitalOut myled(LED1);
C12832 lcd(p5,p7,p6,p8,p11);
//DigitalIn temp(p28);
LM75B temp(p28,p27);

int main() {
    while (1)
    {
        lcd.cls();
        lcd.locate(0,3);
        lcd.printf("Temp: %.2f C", temp.read());
        wait(1);
    }
}
