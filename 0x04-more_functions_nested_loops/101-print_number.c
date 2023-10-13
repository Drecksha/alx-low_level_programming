#include <unistd.h>

int _putchar(char c) {
    return write(1, &c, 1);
}

void print_number(int n) {
    if (n < 0) {
        _putchar('-');
        n = -n;
    }
    
    if (n / 10 != 0) {
        print_number(n / 10);
    }
    
    _putchar(n % 10 + '0');
}

int main() {
    int num = 12345; // Replace with your desired integer
    print_number(num);
    _putchar('\n');
    return 0;
}

