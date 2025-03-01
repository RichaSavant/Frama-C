#include<limits.h>
/*@
requires \valid(array+(0..length-1));
assigns array[0..length-1];
ensures \forall size_t i; 0<=i<length && \old(array[i] == old ==> array[i] == new;
ensures \forall size_t i; 0<=i<length && \old(array[i]) != old ==> array[i] == \old(array[i]);
*/
void search_and_replace(int *array,size_t length,int old,int new){
/*@
loop invariant 0<=i<=length;
loop invariant \forall size_t j; 0<=j<i && \at(array[j],Pre) == old ==> array[i] == new;
loop invariant \forall size_t j; 0<=j<i && \at(array[j],Pre) != old ==> array[j] == \at(array[i],Pre);
loop assigns i,array[0..length-1];
loop variant length-i;
*/
for(size_t i=0;i<length;++i){
if(array[i] == old)
array[i] = new;
}
}

