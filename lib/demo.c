#include <stdio.h>
#include <stdlib.h>
int main() {
    printf("this is from wasm\n");
    return 99;
}

int getBestNumber() {
    return rand();
}