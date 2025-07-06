#include <stdio.h>
void main(){
  char *name = "AISH";
  int p =10;
  int *m = &p;
  printf("name = %c",*name);
  printf("m = %p",m);
}