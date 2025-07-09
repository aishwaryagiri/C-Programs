#include <stdio.h>
int main()
{
    int a =12;
    void *b =(int*) &a;
    //printf("b = %d",b);//This will give compilation error void* type pointer cannot be dereferenced. we must typecast them before dereferencing//
    printf("b = %d",*(int*)b); //we have typecasted the void pointer to int type//
    return 0;
}