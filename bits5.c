//check if number is power of 2
//a number is power of 2 when it has only 1 bit set in binary representation

#include <stdio.h>
// void check_pow(int n)
// {
//     if((n&(n-1))==0)
//     printf("number is power of 2\n");
// }
void mask(int H)
{
    if(H%2==0)
    printf("number is power of 2");
    else 
    printf("number is not power of 2");    
}
int main()
{
    int N;
    printf("Enter the number\n");
    scanf("%d",&N);
    // check_pow(N);
    mask(N);
    return 0;
}
