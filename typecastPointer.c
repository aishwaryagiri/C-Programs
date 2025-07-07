#include <stdio.h>
#include <stdint.h>

int main(void) // its a best practice to use void inside the main function, it makes the function portable.
{
   int c = 3;
    int *cptr = &c;
    int i = 0xff;
    uintptr_t castptr = (uintptr_t)cptr;
int m = castptr & i ;
printf("uintptr_t castptr = %lu\n",castptr );
printf("uintptr_t castptr = 0x%lx\n",castptr);
printf("cptr = %p\n",(void*)cptr);
printf("m = 0x%x\n",m);
 return 0;  
}       