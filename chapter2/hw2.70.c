#include <stdio.h>
/*
    Return 1 when x can be represented as an n-bits 2's-complement
    assume 1 <= n <= w
*/
int fits_bits(int x,int k){
    return !(x >> k);
}
int main(){
    /*
    test
    expected
    1
    1
    0
    1
    */
    printf("%d\n",fits_bits(0,1));
    printf("%d\n",fits_bits(1,1));
    printf("%d\n",fits_bits(8,3));
    printf("%d\n",fits_bits(7,3));
}