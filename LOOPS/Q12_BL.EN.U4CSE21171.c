#include<limits.h>
/*@
logic integer factorial(integer n)=(n<=0)?1:n*factorial(n-1);
*/
/*
requires INT_MIN<=n<INT_MAX;
ensures \result==factorial(n);
*/
int fact(int n){
if(n<2)
return 1;
int res=1;
/*@
loop invariant 2<=i<=n+1;
loop invariant res==factorial(i-1);
loop assigns res,i;
loop variant n-i;
*/
for(int i=2;i<=n;i++){
res=res*i;
}
return res;
}
int main(){
int a=3;
//@assert a==3;
int r=fact(a);
//@assert r==6;
}


