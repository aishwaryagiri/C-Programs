#include <stdio.h>
//  void find_oe(int N)
//  {
//     if(N%2==1)
//     {
//         printf("number is odd");
//     }
//     else {
//     printf("it is even");
//     }
//  }
void met(int N)
 {
    if( (N&1==0))
    printf("it is even");
    else
    printf("it is odd");
 }
 int main()
 { 
    int n;
    printf("enter the number\n");
    scanf("%d",&n);
    // find_oe(n);
    met(n);
    return 0;
 }
 
