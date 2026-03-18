#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int main(void) {
    // strdup и strndup - копирование строк с выделением памяти
    char *copy = _strdup("Hello");  // malloc + strcpy
   printf("%s", copy);
    // memccpy - копирование до определенного символа
    char src[] = "Hello\nWorld";
    char dst[20];
    _memccpy(dst, src, '\n', sizeof(dst));
    // -> POSIX
    //_ -> ISO
     printf("%s", dst);
    free(copy);
    return 0;
}