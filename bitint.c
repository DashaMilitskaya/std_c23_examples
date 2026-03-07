#include <stdio.h>

// Функция для печати _BitInt, так как printf в glibc еще не поддерживает спецификаторы для них
// Итеративная функция печати _BitInt (надежнее рекурсии)
void print_bitint(_BitInt(256) n) {
    if (n == 0wb) {
        putchar('0');
        return;
    }

    // Буфер для хранения цифр (256 бит ≈ 78 десятичных цифр)
    char buffer[100];
    int index = 0;

    // Извлекаем цифры в обратном порядке
    while (n > 0wb) {
        _BitInt(256) digit = n % 10wb;
        buffer[index++] = '0' + (char)digit;
        n = n / 10wb;
    }

    // Выводим в правильном порядке (разворачиваем буфер)
    for (int i = index - 1; i >= 0; i--) {
        putchar(buffer[i]);
    }
}

int main(void) {
    // Стандартный ключевой тип _BitInt(N)
    _BitInt(128) a = 100wb;
    _BitInt(128) b = 200wb;

    _BitInt(128) sum = a + b;

    // Число, не влезающее в стандартные типы (2^200)
    _BitInt(256) big =  (_BitInt(256))1wb << 200;

    // Для малых значений можно привести к long long для printf
    printf("Sum (128-bit): %lld\n", (long long)sum);
    _BitInt(128) f = 0x7FFF'FFFF'FFFF'FFFF'FFFF'FFFF'FFFF'FFFFwb;
    // Для больших значений используем нашу функцию
    printf("2^200 = ");
    print_bitint(big);
    printf("\n");
    print_bitint(f);

    return 0;
}
