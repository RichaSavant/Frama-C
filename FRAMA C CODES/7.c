#include<math.h>
#include<limits.h>
/*@requires x>0;
ensures \result>=0;
ensures \result*\result<=x;
ensures ((\result+1)*(\result+1))>x;
*/
double sq(int x)
{
    return sqrt(x);
}
int main()
{
    int a=81;
    double w=sq(a);
}
