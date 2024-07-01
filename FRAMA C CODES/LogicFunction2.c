#include<limits.h>
/*@
logic integer ax_b(integer a,integer x,integer b);
*/
/*@
lemma ax_b_pos:
\forall a,b,i,j;
a>0==>i<=j==>ax_b(a,i,b)<ax_b(a,j,b);
lemma ax_b_neg:
\forall a,b,i,j;
a<0==>i<=j==>ax_b(a,i,b)>ax_b(a,j,b);
lemma ax_b_eq:
\forall a,b,i,j;
a=0==>ax_b(a,x,b)==ax_b(a,j,b);
*/
/*@
requires INT_MIN<=a*x<INT_MAX;
requires INT_MIN<=ax_b(a,x,b)<INT_MAX;
assigns \nothing;
ensures \result==ax_b(a,x,4);
*/
int func(int a,int x){
return a*x+4;
}
/*@
requires INT_MIN<=a*x<INT_MAX;
requires INT_MIN<=a*y<INT_MAX;
requires a>0;
requires INT_MIN<=ax_b(a,x,4)<=INT_MAX;
requires INT_MIN<=ax_b(a,y,4)<=INT_MAX;
assigns \nothing;
*/
void check(int a,int x,int y){
int fmin,fmax;
if(x>y){
fmin=func(a,x);
fmax=func(a,y);
}
else{
fmin=func(a,y);
fmax=func(a,x);
}
//@assert fmin<=fmax;
}
int main(){
int w=3;
int r=4;
int s=7;
int t=func(w,r);
check(w,r,s);
}

