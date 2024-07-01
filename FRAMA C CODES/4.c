#include<stdio.h>
/*@ requires a>0;
ensures a == \old(b) && b == \old(a);
*/
int swap(int a, int b) {
int t = a;
a = b;
b = t;
return 0;
}
int main()
{
swap(2,4);
return 0;
}


