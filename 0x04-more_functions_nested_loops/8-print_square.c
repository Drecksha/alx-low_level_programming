#include <unistd.h>

int _putchar(char c) {
    return write(1, &c, 1);
}

void print_square(int size) {
    if (size <= 0) {
        _putchar('\n');
    } else {
        int i, j;
        for (i = 0; i < size; i++) {
            for (j = 0; j < size; j++) {
                _putchar('#');
            }
            _putchar('\n');
        }
    }
}

int main() {
    print_square(5);
    return 0;
}

