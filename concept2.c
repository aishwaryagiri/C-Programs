#include <stdio.h>
 void f(char*);
int main()
{
    char *argv[] = { "ab", "cd", "ef", "gh", "ij", "kl" };

         f(argv[0]);
            return 0;
}
             void f(char *p)
{
               char *t;               
                   t = (p += sizeof(long))[-1]; // t = p[-1], 
                        printf("%s\n", t);
}
                