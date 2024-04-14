#include <stdio.h>
int anyBitIsOne(int x){
    return !(~x);
}
int anyBitIsZero(int x){
    return !(x ^ 0);
}
int lowByteIsFF(int x){
    return !((x & 0x000000FF) ^ 0xFF);
}
int HighByteIsZero(int x){

    return !((x >> ((sizeof(int) - 1) << 3))) ;
}
int main(){
    printf("%d\n",anyBitIsOne(0xffffffff));//expected 1
    printf("%d\n",anyBitIsOne(~0));//expected 1
    printf("%d\n",anyBitIsOne(0x1123));// expected 0
    printf("%d\n",anyBitIsZero(0));//expected 1
    printf("%d\n",HighByteIsZero(0x1234));// expected 1
    printf("%d",HighByteIsZero(0x01234567));//expected 0

}