#include <stdio.h>

int main() {
    int num = 42;       
    int* ptr = &num;    

    printf("Стойност на num: %d\n", num);
    printf("Адрес на num: %p\n", &num);
    printf("Стойност на адресът на num: %p\n", ptr);
    printf("Стойност на адреса: %d\n", *ptr);

    return 0;
}
