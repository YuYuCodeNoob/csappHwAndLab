#include <stdio.h>
typedef unsigned char *byte_pointer;
void show_bytes(byte_pointer start, size_t len) {
    size_t i;
    for (i = 0; i < len; i++)
        printf(" %.2x", start[i]);
    printf("\n");
}
void show_int(int x){
    show_bytes((byte_pointer) &x, sizeof(int));
}
void show_float(float x){
    show_bytes((byte_pointer) &x, sizeof(float));
}
void show_short(short x){
    show_bytes((byte_pointer) &x, sizeof(short));
}
void show_long(long x){
    show_bytes((byte_pointer) &x, sizeof(long));
}
void show_double(double x){
    show_bytes((byte_pointer) &x, sizeof(double));
}
// 作业2.58：判断小端还是大端
int is_little_endian(){
    // 小端，最低有效字节在内存低位置
    int x = 0x12345678;
    char * y = (char *) &x;
    return !(y[0] ^ 0x78);
}
// 作业2.59：生成新的字，对于运算数x = 0x89ABCDEF 和 y = 0x76543210 => 0x765432EF
unsigned int combine(unsigned int x, unsigned int y){
    y = y & 0xFFFFFF00;
    x = x & 0x000000FF;
    return x + y;
}
// 作业2.60：替换指定位字节
unsigned replace_byte(unsigned x,int i,unsigned char b){
    if (i == 0)
    {
        x = x & 0xFFFFFF00;
    }
    if (i == 1)
    {
        x = x & 0xFFFF00FF;
    }
    if (i == 2)
    {
        x = x & 0xFF00FFFF;
    }
    if (i == 3)
    {
        x = x & 0x00FFFFFF;
    }
    return x + (b << (i << 3)) ;
    }
    
int main(){
    int x = is_little_endian();
    printf("%d\n", x);
    show_int(combine(0x89ABCDEF, 0x76543210));
    show_int(replace_byte(0x12345678,2, 0xAB));
    show_int(replace_byte(0x12345678,0, 0xAB));
}
