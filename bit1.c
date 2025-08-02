#include <stdio.h>
void main()
{
    int a = 0x45;
    int b = 0x07;
    int c = a & b;
    printf("a&b:%x\n", a&b);
    printf("a|b:%x\n",a|b);
    printf("a^b : %x\n",a^b);
   printf("~a : %x\n",~a);
    printf("~b : %x\n",~b);
}