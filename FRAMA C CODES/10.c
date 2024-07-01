/*@requires n>0;
ensures \result==((2*n*n*n)+(3*n*n)+n)/6;
assigns \nothing;
*/
int sqr_sum(int n)
{
    int s=0;
    /*@loop invariant 0<=i<=n+1;
    loop invariant s==((2*i*i*i)-(3*i*i)+i)/6;
    loop assigns i,s;
    loop variant n+1-i;*/
    for(int i=1;i<=n;i++)
    {
        s=s+i*i;
    }
    return s;
}
void main()
{
    int a=8;
    a=sqr_sum(a);
}
