//check if ith bit is set or not
// N is thr number and  i is the position of bit to be checked
#include <stdio.h>

   void bitset(int N,int i)
{
    if((N&(1<<(i-1)))!=0) // we should not use ==1,but !0 should be used which is not equal to 0 non zero//
    {
        printf("bit is set");
    }
    else printf("bit is not set");
}
int main()
{
    int x;
    int l;
    printf("enter the number\n");
    scanf("%d",&x);
    printf("enter the bit needs to be checked\n");
    scanf("%d",&l);
    bitset(x,l);
    return 0;
}

