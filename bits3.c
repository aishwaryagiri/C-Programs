// //Remove the last set bit of a number
#include <stdio.h>
// void rem_set_bit(int N)
// {

// int count=0;
// for(int i = 0; i<=32;i++)// this is to check the postion of last set bit
// {
//     if((N&(1<<(i)))!=0)
//     {
//         count = i;
//         break;
//     }
    
// }
// printf("%d\n",count);
// int l = (N &~(1<<(count)));// to remove the last set bit
// printf("%d\n",l);
// }
// int main()
// {
// int K;
//     printf("enter the number\n");
//     scanf("%d",&K);
// rem_set_bit(K);
// return 0;
// }

//2nd approach
int main()
{
    int N = 2;
    int M = N&(N-1);
    printf("%d\n",M);
return 0;
}