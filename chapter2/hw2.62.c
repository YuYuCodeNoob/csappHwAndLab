#include <stdio.h>
int int_shift_are_arithmetic(){
    int test = -1;// 0xffffffff
    return !(((test >> 8) & 0xff000000) ^ 0xff000000 );
}
int main(){
    printf("%d",int_shift_are_arithmetic());
}