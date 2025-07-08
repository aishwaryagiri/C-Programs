#include <stdio.h>
int main()
{
    int i = 512;
    char *x;
    x = (char*)&i;// 512 = 00000010 00000000 = 0x0200 //
    x[0] = 1; // 0001 0010 0000 0000 = 0x1200 we have changed the value of LSB as char is 1 byte so each //
    x[1] = 2;  // here the 2nd LSB value has been changed to 0001 0010 0000 0000  which is 513 in integer//
    printf("value of i = %d",i);

}