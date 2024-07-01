#include<limits.h>
/*@
requires INT_MIN<=n;
requires INT_MAX>n;
ensures \result==n*(n+1)/2;
*/
int sigma(int n){
int s=0;
int i=1;
/*@
loop invariant 1<=i<=n+1;
loop invariant s==(i-1)*i/2;
loop assigns s,i;
loop variant n-i;
*/
while(i<=n){
s=s+i;
i=i+1;
}
return s;
}
int main(){
int x=10;
int r=sigma(x);
//@assert x==10;
}

