#include <wiringPi.h>
#include <stdio.h>

#define LEDPIN  0 //LEDPIN is wiringPi Pin#0 or physical pin#11 or GPIO#17

int main(){
    //when initialize wiring failed,print message to screen
    if(wiringPiSetup()== -1){
        printf("Setup wiringPi Failed!");
        return -1;
    }

    pinMode(LEDPIN,OUTPUT);
    printf("\n");
    printf("\n");
    printf("********************************|\n");
    printf("|       LED Blink               |\n");
    printf("|  -----------------------      |\n");
    printf("|                               |\n");
    printf("|   LED connect to wiringPi# 0  |\n");
    printf("|                               |\n");
    printf("|   LED will blink at 500ms     |\n");
    printf("|   OSOYOO.COM                  |\n");
    printf("********************************|\n");

    while(1){
        digitalWrite(LEDPIN,LOW);
        printf("...LED OFF\n");
        printf("\n");
        delay(500);
        digitalWrite(LEDPIN,HIGH);
        printf("LED ON.../n");
        printf("\n");
        delay(500);
    }
    return 0;
}
