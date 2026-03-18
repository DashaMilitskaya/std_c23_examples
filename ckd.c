#include <limits.h>
#include <stdio.h>
#include <stdckdint.h>

int main(void) {
    int result;
    
    // ckd_add возвращает true при переполнении
    bool overflow = ckd_add(&result, INT_MAX, 1);
    
    if (overflow) {
        printf("Overflow detected!\n");
    } else {
        printf("Result: %d\n", result);
    }
    
    // Аналогично: ckd_sub, ckd_mul
    int a = 2000000000, b = 2;
    int prod;
    if (ckd_mul(&prod, a, b)) {
        printf("Multiplication overflow!\n");
    }
    
    return 0;
}