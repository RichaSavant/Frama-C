#include<stddef.h>
/*@
requires \valid(array + (0..length-1));
assigns array[0..length-1];
ensures \forall size_t i;0<=i<length && array[i]==\old(array[length-i]);
*/
int reverse_array(int* array,size_t length){
/*@
loop invariant length-1<=i<=0;
loop invariant \forall size_t i;0<=i<length && array[i]==\old(array[length-i]);
loop assigns i,array[0..length-1];
loop variant length-i;
*/
for(size_t i=length;i>0;i--){
return array[length-i];
}
}
int main(){
int a[]={1,2,3,4,5};
int r=reverse_array(&a,5);
return 0;
}
