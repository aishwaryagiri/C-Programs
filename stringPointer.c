#include <stdio.h>
void main(){
  char *name = "AISH";
  int p =10;
  int *m = &p;
  printf("*name = %c\n",*name);
  printf("(void*)m = %p\n",(void*)m);//this will give the same result as the below line of code, still we should typecast the pointer to (void*) type for prtability
  printf("m = %p\n",m);
  printf("address of pointer variable m =%p",&m);
}