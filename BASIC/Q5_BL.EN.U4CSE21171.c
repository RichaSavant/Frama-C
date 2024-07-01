#include<limits.h>
int h = 40;
/*@
requires \valid(a)&&\valid(b);
ensures *a==\old(*b)&&*b==\old(*a);
*/
void swap(int *a,int *b){
int temp = *a;
*a = *b;
*b = temp;
}
int main(){
int x = 37;
int y = 91;
//@assert h == 40;
swap(&x,&y);
//@assert h == 40;
}
