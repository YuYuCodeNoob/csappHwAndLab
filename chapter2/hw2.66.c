#include <stdio.h>
#include "show-bytes.h"
// for exapmle 0Xff00 -> 0X8000
int left_most_one(unsigned x){
    x |= x >> 16;
    x |= x >> 8;
    x |= x >> 4;
    x |= x >> 2;
    x |= x >> 1;
    return x ^ (x >> 1);
}
int main(){
    show_int(0xff00);
    show_int(left_most_one(0xff00));
}