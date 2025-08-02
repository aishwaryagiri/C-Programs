//set the ith bit of a number//
//K is the number i is the bit needs to be set
#include <stdio.h>
void iset_bit(int N, int j)
{
int M = N | (1<<(j-1));
printf("%d",M);

}
int main()
{
   int K,i;
   printf("enter the number\n");
   scanf("%d",&K);
   printf("enter the bit that needs to be set");
   scanf("%d",&i);
   iset_bit(K,i);
   return 0;
}





