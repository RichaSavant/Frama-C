#include<limits.h>
/*@ requires *a>INT_MIN&&*b>INT_MIN;
requires \valid(a)&&\valid(b);
requires \separated(a,b);
assigns *a,*b;
ensures *a==\old(*b)&&*b==\old(*a);
*/
void swap(int *a, int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
int main()
{
    int x=11,y=22;
    swap(&x,&y);
}
