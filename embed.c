#include <stdio.h>

int main(void) {
    // Встраиваем первые 16 байт файла как массив байт
    static const unsigned char data[] = {
#embed "logo.png" limit(16)
    };
    
    // Выводим в шестнадцатеричном виде
    printf("First %zu bytes:\n", sizeof(data));
    for (size_t i = 0; i < sizeof(data); i++) {
        printf("%02X ", data[i]);
        if ((i + 1) % 8 == 0) printf("\n");  // новая строка каждые 8 байт
    }
    printf("\n");
    
    // Выводим как ASCII (если печатаемые символы)
    printf("As ASCII: ");
    for (size_t i = 0; i < sizeof(data); i++) {
        unsigned char c = data[i];
        printf("%c", (c >= 32 && c < 127) ? c : '.');
    }
    printf("\n");
    
    return 0;
}