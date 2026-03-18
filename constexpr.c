// C23 - constexpr для переменных
//int array_size = 100;
constexpr int array_size = 100;  // гарантированно константа времени компиляции
constexpr double pi = 3.14159265358979323846;

// Можно использовать для размеров массивов
int buffer[array_size];

// constexpr static_assert
static_assert(array_size > 50);

int main(void) {
    return 0;
}