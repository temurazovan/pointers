#include <iostream>

void swap(int* a, int* b) {
    *a = *a - *b;
    *b = *a + *b;
    *a = *b - *a;
}

int main() {
    int a = 20;
    int b = 5;

    swap(&a, &b);
    std::cout << a << " " << b << std::endl;
}
