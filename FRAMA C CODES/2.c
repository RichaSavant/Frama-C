#include<stdio.h>
/*@ requires 0<=x<100;
    ensures \result>=0;
    ensures(x>=0==>\result==x+1);
*/
int inc(int x)
{
  int z=x+1;
  return z;
}
int main()
{
  int x=5,w;
  w=inc(x);
}
