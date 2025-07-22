#include <stdio.h>
 void f(char**);
int main()
{
    char *argv[] = { "ab", "cd", "ef", "gh", "ij", "kl" };
    // char rg = 'b';
    // printf("%c",rg);
    // printf("argv = %p\n",argv);
    // printf("&argv = %p\n",&argv);
    // printf("&argv[0]66=%p\n",&argv[0]);
    // printf("argv[0]=%p\n",argv[0]);
    // printf("*argv[0] = %c\n",*argv[0]);
         f(argv);
//     argv is like a row of 6 houses (pointers to strings).
// argv points to the first house.
// &argv is like pointing to the entire row as a block.
// Passing argv gives access to each house. Passing &argv gives access to the whole block as one unit — not what the function expects.
     return 0;
     }
             void f(char **p)
             {
               char *t;
                   t = (p += sizeof(int))[-1]; //p = p+4, which is the 4th element of array pointer
                printf("%s\n", t);
             }