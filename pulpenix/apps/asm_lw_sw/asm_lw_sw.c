

#include <gpio.h>        // simple SOC gpio interface

int main() {

    asm("nop");
    asm("nop");
    asm("nop");
    asm("nop");	
    asm("nop");
    asm("nop");
    asm("nop");
    asm("nop");	

    asm("ori x5, x0 , 33"); //data
    asm("ori x6, x0 , 160");//address
    asm("andi x7, x7, 0");//clean
    asm("sw   x5, 0(x6)") ;//store data in address
    asm("lw   x7, 0(x6)"); // load data from address

    asm("nop");
    asm("nop");
    asm("nop");
    asm("nop");
    asm("nop");
    asm("nop");
    asm("nop");
    asm("nop");	  
  sim_finish () ;  // flag to trigger simulation termination
  
  return 0;
}
