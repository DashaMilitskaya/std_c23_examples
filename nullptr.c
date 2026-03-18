#include <stdio.h>

void process(int *ptr) {
    if (ptr == nullptr) {  // вместо NULL
        printf("null pointer\n");
    }
}

int main(void) {
    int *p = nullptr;  // тип nullptr_t, совместим с void*
    process(p);
    return 0;
}