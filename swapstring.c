#include <stdio.h>
void swap(char **p,char **q)
{
    char * temp;
    temp = *p;
    *p = *q;
*q = temp;
}
int main ()
{
    char* str1 = "aish";
    char* str2 = "ath";
    swap(&str1,&str2);
    printf("str1 = %s,str2 = %s",str1,str2);
    return 0;
}