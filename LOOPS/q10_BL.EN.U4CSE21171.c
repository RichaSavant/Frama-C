#include<limits.h>
/*@
requires INT_MIN<=a;
requires INT_MAX>a;
ensures \old(a)+10;
*/
int inc(int a){
int i;
/*@
loop invariant 1<=i<=a+1;
loop assigns i,a;
loop variant a-i;
*/
for(i=1;i<a;i++){
++a;
}
return a;
}
int main(){
int a=10;
int r=inc(a);
//@assert a==10;
}
