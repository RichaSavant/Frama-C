#include<limits.h>

/*@
requires INT_MIN<=a<INT_MAX;
requires INT_MIN<=b<INT_MAX;
ensures \result==a && \result>b || \result==b && \result>a || \result==a && \result==b;
*/

int max(int a,int b){
return a>b?a:b;
}

int main(){
int x=10;
int y=15;
int r=max(x,y);
//@assert x==10 && y==15;
}

