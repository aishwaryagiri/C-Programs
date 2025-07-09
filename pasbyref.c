#include <stdio.h>

void mo(int *x){
    *x  =10;  // int *x = &a; we are manipulating value of a by address.this is called call by reference.

}
int main()
{
    int a = 5;
    mo(&a);
    printf("a = %d",a);
return 0;
}