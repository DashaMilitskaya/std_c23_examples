
int main(void) {
    static_assert(sizeof(long int) == 4);  // сообщение по умолчанию
    static_assert(sizeof(long) > 4, "long must be at least 4 bytes");  // два аргумента как раньше

    return 0;
}