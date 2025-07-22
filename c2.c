#include <stdio.h>
int main(){
    char str[] = "hello";
    char *p = 'h';
   str[0] = 'H';
   p= 'H';
   printf("str[0] =%c\n",str[0]);
   printf("p=%c\n",p);
   return 0;
}
