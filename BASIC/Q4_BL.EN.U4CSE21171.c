#include<limits.h>
/*@
requires INT_MIN<=n<INT_MAX;
ensures (n%2==0 ==> \result==1) && (n%2!=0 ==> \result==0);
*/
int check(int n){
if(n%2==0)
return 1;
else
return 0;
}
int main(){
int a=12;
int r=check(a);
//@assert a==12;
}

