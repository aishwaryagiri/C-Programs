#include <stdio.h>

void myFunc1(void);

void myFunc1()
{
    static int count = 0;
    count = count+1;
    printf("%d",count);

}


int main()
{
    myFunc1();
    myFunc1();
    myFunc1();
    myFunc1();
    return 0;
}

