#include <stdio.h>
int main()
{
    int a =12;
    void *b =(int*) &a;
    printf("b = %d",b);
    return 0;
}