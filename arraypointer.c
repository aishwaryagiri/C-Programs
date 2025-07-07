#include<stdio.h>
int main (){
char *namePtr = "aish";
char name[] = "aish";
printf( "namePtr = %p\n namePtr = %s\n *namePtr = %c\n &nameptr = %p",namePtr,namePtr,*namePtr,&namePtr);
printf("name = %p\n name = %s\n name[0]  =%c\n *name = %c\n",&name,name,name[0],*name);
return 0;
}

