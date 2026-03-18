#include <stdio.h>
#include <string.h>

typedef struct {
    int x, y, z;
    char name[32];
} Point;

int main(void) {
    // C23 - пустые скобки для обнуления всей структуры
    Point p = {};  // все поля = 0
    
    // Массивы
    int arr[10] = {};  // все элементы = 0
    
    // Вывод всех полей структуры Point
    printf("=== Point p ===\n");
    printf("p.x = %d\n", p.x);
    printf("p.y = %d\n", p.y);
    printf("p.z = %d\n", p.z);
    printf("p.name = \"%s\" (empty, len=%zu)\n", p.name, strlen(p.name));
    
    // Проверка: name действительно обнулен?
    printf("p.name bytes: ");
    for (int i = 0; i < 5; i++) {
        printf("%02X ", (unsigned char)p.name[i]);
    }
    printf("...\n");
    
    // Вывод всех элементов массива arr
    printf("\n=== Array arr[10] ===\n");
    for (int i = 0; i < 10; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }
    
 
    
    
    return 0;
}