
#include <stdint.h>

#define SENSOR_DATA_REGISTER (*(volatile uint8_t*)0x40004000)
 int main(){
    uint8_t sendorData = SENSOR_DATA_REGISTER;
    return 0;
 }