#include<limits.h>
/*@ requires k>0;
ensures \result==(k*(k+1))/2;
assigns \nothing;
*/
int sum_of_int(int k)
{
    int j=0,i=0;
    /*@ loop invariant 0<=j<=k+1;
    loop invariant i==(j-1)*j/2;
    loop assigns i,j;
    loop variant k-j;*/
    for(j=0;j<=k;j++)
    {
        i=i+j;
    }
    return i;
}

void main()
{
    int b=10,w;
    w=sum_of_int(b);
}
