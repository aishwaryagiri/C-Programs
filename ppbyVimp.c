#include <stdio.h>

void swap(char *aa,char *bb){
char *temp = aa; 
//we are using the address stored in pointer a and b, which are the addresses of both the string
// we created the copy of pointer a & b i.e. aa bb, which now points to both the string, 
// hence when we swaped the pointers addressed, the copies got the string swaped buth the original remained same//
aa = bb;
bb = temp;
printf("aa= %s\n bb =%s\n",aa,bb);}
int main(){
char *a = "aish";
char *b = "ath";
swap(a,b);
printf("a = %s\n b =%s\n",a,b);
    return 0;
}
// //In the swap(char *aa, char *bb) function, you're passing copies of the pointers a and b.
// These copies (aa and bb) still point to the same strings as a and b do — "aish" and "ath", respectively.
// When you swap aa and bb, you're only swapping the local copies of the pointers — not the original pointers in main().
// So inside the function, the swap appears to work, but the original pointers a and b in main() remain unchanged.