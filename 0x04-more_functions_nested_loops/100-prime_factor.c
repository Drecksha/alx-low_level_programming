#include <stdio.h>
#include <math.h>

long find_largest_prime_factor(long number) {
    long largest_prime = -1;
    
    while (number % 2 == 0) {
        largest_prime = 2;
        number /= 2;
    }
    
    for (long i = 3; i <= sqrt(number); i += 2) {
        while (number % i == 0) {
            largest_prime = i;
            number /= i;
        }
    }
    
    if (number > 2) {
        largest_prime = number;
    }
    
    return largest_prime;
}

int main() {
    long number = 612852475143;
    long largest_prime = find_largest_prime_factor(number);
    
    printf("%ld\n", largest_prime);
    
    return 0;
}
