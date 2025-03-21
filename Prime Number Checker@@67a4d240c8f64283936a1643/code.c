#include <stdio.h>
#include <math.h>  // For sqrt()

// Function to check if a number is prime
int isPrime(int num) {
    if (num < 2) {
        return 0;  // 0 and 1 are not prime
    }
    for (int i = 2; i * i <= num; i++) {  // Check up to sqrt(num)
        if (num % i == 0) {
            return 0;  // Not a prime number
        }
    }
    return 1;  // Prime number
}
