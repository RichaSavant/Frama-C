#include<limits.h>
/*@
requires INT_MIN<=n;
requires INT_MAX>n;
ensures \result>0;
*/
int sumation(int n){
if(n==0)
return 1;
int sum=0;
int i;
/*@
loop invariant 1<=i<=n+1;
loop invariant sum==sum+i*i;
loop assigns i,sum;
loop variant n-i;
*/
for(i=1;i<=n;i++){
sum=sum+i*i;
}
return sum;
}
int main(){
int a=5;
int r=sumation(a);
//@assert a==5;
}


