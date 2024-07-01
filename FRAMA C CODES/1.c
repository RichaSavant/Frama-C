#include<limits.h>

/*@ requires INT_MIN<=x<=INT_MAX && INT_MIN<=y<=INT_MAX;

ensures x>=y ==> \result==x && x<y ==> \result==y;

*/

int max(int x, int y)

{

   if( x>y)

   {

    return x;

   }

   else

   {

    return y;

   }

}


int main()

{

    int b;

    b=max(7,9);

}
