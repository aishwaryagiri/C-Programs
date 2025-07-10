#include<stdio.h>
void mo(int x){
    x = 10; //x = a
    printf("x = %d\n",x);
   // printf("a = %d",a); a is the local variable for main()hence it is undefined in main()
}

int main(){
int a = 5;
mo(a);
printf("a= %d\n",a);
//printf("x = %d",x); x is the local variable for mo() hence it is undefined in main()
return 0;
}