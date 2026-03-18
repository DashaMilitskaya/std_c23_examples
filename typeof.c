#include <stdio.h>

int main(void) {
    int x = 42;
    typeof(x) y = 100;  // y имеет тип int
    
    const int c = 10;
    typeof_unqual(c) u = 20;  // u имеет тип int (без const)
    
    // Полезно для макросов
    #define SWAP(a, b) do { \
        typeof(a) temp = a; \
        a = b; \
        b = temp; \
    } while(0)
    
    int a = 1, b = 2;
    SWAP(a, b);
    printf("a=%d, b=%d\n", a, b);
    
    return 0;
}