#include <stdio.h>

int main(void) {
    // Двоичные литералы с префиксом 0b или 0B
    int flags = 0b1010'1100'0000'0000;  // битовые флаги
    
    // Разделитель ' для улучшения читаемости (любая система счисления)
    int million = 1'000'000;
    long hex = 0xDEAD'BEEF;
    long long big = 1'000'000'000'000LL;
    
    // Форматированный вывод двоичных чисел (%b или %B)
    printf("flags in binary: %b\n", flags);  // выведет 1010110000000000
    printf("million: %d\n", million);
    
    return 0;
}