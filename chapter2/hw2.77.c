#include <stdio.h>
// K = 17
int first(int x){
    return x + (x << 4);
}
// K = -7
int second(int x){
    return x - (x << 3);
}
// K = 60
int third(int x){
    return (x << 5) +( x << 4) + (x << 3) + (x << 2);
}
// K = -112
int fourth(int x){
    return (x << 4) - (x << 7);
}
