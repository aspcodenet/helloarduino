#include <avr/io.h>
#include <util/delay.h>

// ARDUINO NR 10
// PORTB + pinne 2


// ARDUINO UNO 0
// PORTD + pinne 0

// https://wokwi.com/projects/365047092561218561
// B (digital pin 8 to 13)
// C (analog input pins)
// D (digital pins 0 to 7)

#define BIT_SET(a, b) ((a) |= (1ULL << (b)))
#define BIT_CLEAR(a,b) ((a) &= ~(1ULL<<(b)))
#define BIT_FLIP(a,b) ((a) ^= (1ULL<<(b)))
#define BIT_CHECK(a,b) (!!((a) & (1ULL<<(b)))) 


int main(){
    //init

    while(1){
       // SÄTTA pinnen
       BIT_SET(PORTB,2);
       _delay_ms(1000);
        // CLEARA pinnen
       BIT_CLEAR(PORTB,2);
       _delay_ms(1000);
    }
    return 0;
}

