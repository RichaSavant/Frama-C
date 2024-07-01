#include <stdio.h>
/*@
logic integer fac(integer n)=(n<=0)?1:n*fac(n-1);
*/

 

/*@
requires n>=0;
ensures \result==fac(n);
assigns \nothing;
*/
int fac(int n)
{
int f=1,i=1;
/*@
loop invariant f==fac(i-1);
loop invariant 0<i<=n+1;
loop assigns i,f;
*/
while(i<=n)
{
f=f*i;
i=i+1;
}
return f;
}
int main()
{
int x,a=5;
x=fac(a);
}
