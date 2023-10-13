#include <unistd.h>

int _putchar(char c) {
    return write(1, &c, 1);
}

void print_triangle(int size) {
    if (size <= 0) {
        _putchar('\n');
    } else {
        int i, j;
        for (i = 1; i <= size; i++) {
            for (j = 1; j <= i; j++) {
                _putchar('#');
            }
            _putchar('\n');
        }
    }
}

int main() {
    print_triangle(5);
    return 0;
}
