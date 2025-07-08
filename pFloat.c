#include <stdio.h>

#include<stdio.h>
int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60};
    int *ptr1 = arr;
    int *ptr2 = arr + 5;
    printf("Number of elements between two pointer are: %ld\n", (ptr2 - ptr1));
//pointer substraction always gives integer.
    printf("Number of bytes between two pointers are  :%ld\n",(long*)ptr2-(long*)ptr1);//pointer substraction always return integer,it doesnt give fraction//
    printf("Number of bytes between two pointers are: %ld\n", (short*)ptr2 - (short*) ptr1);

    return 0;
}