#include <stdio.h>
#include <stdint.h>

void main()
{
   int c = 3;
    int *cptr = &c;
    int i = 0xff;
    uintptr_t castptr = (uintptr_t)castptr;
int m = castptr & i ;
printf("uintptr_t castptr = %lu\n",castptr );
printf("uintptr_t castptr = 0x%lx\n",castptr);
printf("m = 0x%x\n",m);
   
}       