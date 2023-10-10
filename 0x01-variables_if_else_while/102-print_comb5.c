#include <stdio.h>

int main() {
    int i, j;

    for (i = 0; i <= 99; i++) {
        for (j = i + 1; j <= 99; j++) {
            Print the first two-digit number
            putchar((i / 10) + '0');
            putchar((i % 10) + '0');
            
            // Print a space
            putchar(' ');
            
            // Print the second two-digit number
            putchar((j / 10) + '0');
            putchar((j % 10) + '0');

            // Check if it's not the last combination
            if (i != 98 || j != 99) {
                // Print a comma followed by a space
                putchar(',');
                putchar(' ');
            }
        }
    }

    putchar('\n'); // Print a newline character to end the output
    return 0;
}
