#include<limits.h>
/*@
requires \valid(a)&&\valid_read(b);
assigns *a,*b;
ensures *a == \old(*b);
ensures *b == \old(*a);
*/
void swap(int * a,int *b){
int temp = *a;
*a = *b;
*b = temp;
}
int main(){
int a = 42;
int b = 37;
swap(&a,&b);
//@assert a==37 && b==42;
return 0;
}

