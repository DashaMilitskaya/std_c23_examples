#include <stdlib.h>

// [[nodiscard]] - предупреждать, если результат игнорируется
[[nodiscard]] int allocate_buffer(void **ptr, size_t size) {
    *ptr = malloc(size);
    return *ptr ? 0 : -1;
}

// [[maybe_unused]] - подавить предупреждение о неиспользовании
[[maybe_unused]] int debug_counter = 0;

// [[deprecated]] - пометить как устаревшее
[[deprecated("Use new_function instead")]]
void old_function(void) {
    // ...
}

// [[noreturn]] - функция не возвращает управление
[[noreturn]] void fatal_error(const char *msg) {
    perror(msg);
    exit(1);
}

// [[fallthrough]] - явно указать намеренное проваливание в switch
int handle_command(int cmd) {
    int result = 0;
    switch (cmd) {
        case 1:
            result = 10;
            [[fallthrough]];  // явно указываем намерение
        case 2:
            result += 5;
            break;
        default:
            result = -1;
    }
    return result;
}

int main(void) {
    void *buf;
    allocate_buffer(&buf, 1024);  // компилятор предупредит о неиспользовании результата
    old_function();
    free(buf);
    return 0;
}