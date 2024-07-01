#include<math.h>
#include<limits.h>
/*@requires num>0;
ensures \result>=0;
ensures \result*\result<=num;
ensures ((\result+1)*(\result+1))>num;
*/
double sq(int num)
{
return sqrt(num);
}
int main()
{
int a=25;
double w=sq(num);
//@assert w==5;
}


