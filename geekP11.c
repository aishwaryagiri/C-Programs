#include <stdio.h>
void func(int *p,int *q)
{
    p = q;
    *p = 10;
}
i = 0;
j = 1;
int main()
{
    f(&i,&j); // learn the concept of passed by value, how local copies are created and what is that//

}