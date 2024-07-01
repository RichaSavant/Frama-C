#include<limits.h>
/*@
requires INT_MIN<=a<INT_MAX;
requires INT_MIN<=b<INT_MAX;
ensures \result>0;
assigns \nothing;
*/
int foo(int a,int b){
if(a>=0){
a++;
}
else{
a+=b;
}
return a;
}
int main(){
int x=-99;
int y=100;
int r=foo(x,y);
//@assert x==-99 && y==100;
}


