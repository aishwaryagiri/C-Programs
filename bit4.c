//flip MSB then LSB
#include <stdio.h>

int main() {
unsigned int N =7;
unsigned f_msb;
unsigned count = 0;
unsigned m =N;
while(m>0)
{
m=m>>1;
count++;
}
count = count-1;
f_msb = (N^(1<<count));
unsigned f_lsb = (f_msb^1);
printf("%d",f_lsb);
return 0;
}
