#include <stdio.h>
#include "show-bytes.h"
int lower_one_mask(int n){
    int x = 1 << (n - 1);
    x |= x >> 16;
    x |= x >> 8;
    x |= x >> 4;
    x |= x >> 2;
    x |= x >> 1;
    return x; 
}
int main(){
    show_int(lower_one_mask(32));
    show_int(lower_one_mask(6));
    show_int(lower_one_mask(17));
    show_int(lower_one_mask(1));
}