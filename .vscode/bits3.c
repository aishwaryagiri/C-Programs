//Remove the last set bit of a number
#include <stdio.h>
void rem_set_bit(int N)
{
    int count = 0;
    int M = N;
while(M)
{
int M = M>>(M-1);
count++;
}
int count2=0;
for(int i = 0; i<=count;i++)
{
    if(N&(1<<(i))!=0)
    {
        count2 = i;
    }
    break;
}
int l = N &!(1<<(count2+1));
printf("%d",&l);
}
int main()
{

    int K;
    printf("enter the number");
    scanf("%d",&K);
rem_set_bit(K);
return 0;
}
