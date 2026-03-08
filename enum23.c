#include <stdio.h>

// В C23 можно явно указать тип, например, char.
// Это гарантирует, что enum будет занимать 1 байт.
enum Status : char {
    OK = 0,
    ERROR = -1,
    PENDING = 1
};

int main() {
    
    enum Status current = OK; 

    if (current == OK) {
        printf("Status is OK, code: %d\n", current);
    }

    return 0;
}
