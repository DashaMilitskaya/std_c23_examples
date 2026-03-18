// C23 - bool, true, false - ключевые слова
#include <stdio.h>

int main(void) {
    bool flag = false;   // не нужен #include <stdbool.h>
    if (flag == false) {
        printf("false\n");
    }
    return 0;
}