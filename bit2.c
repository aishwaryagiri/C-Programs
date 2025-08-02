//check how many bits are set
#include <stdio.h>
	unsigned count_func(unsigned int x)
	{

	   	unsigned num = 0;
	   while(x)
	    {
           num = num+(x&1);
           x=x>>1;
        }
	    
	return num;
	}
	int main()
	{
	    unsigned int N = 27;
         printf("%d\n",count_func(N));
	        return 0;
	}


