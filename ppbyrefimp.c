#include <stdio.h>
void swap( char **aa,char **bb){
char *temp = *aa;     
*aa = *bb;                // *aa = b(address stored at b pointer , we are putting that value at pointer a) 
printf("*temp = %c\n",*temp);
*bb = temp;                // *bb  =a(address stores at b pointer is changed to the address stored at pointer a)
}

int main(){
    char *a  = "aish";
    char *b = "ath";
    swap(&a,&b);
    printf("a= %s\n  b=%s\n",a,b);
    
   return 0; 
}