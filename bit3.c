#include <stdio.h>
#include <stdint.h>
int main(){
    int c =3;
    int *cptr = &c;
    int i = 0xff;
    uintptr_t castcptr = (uintptr_t)cptr;
int m = castcptr&i;
printf("uintptr_t castcptr =%lu\n", castcptr);
printf("uintcptr_t castcptr =%lx\n ",castcptr);
printf("m = castcptr&i = 0x%x",m);

}