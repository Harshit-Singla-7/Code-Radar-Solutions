#include <stdio.h>
#include <math.h> // For sqrt()

int isPrime(int num) {
    if (num < 2) {
        return 0;
    }
    for (int i = 2; i * i <= num; i++) {  // Loop till sqrt(num)
        if (num % i == 0) {
            return 0;  // Not a prime
        }
    }
    return 1;  // Prime number
}

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {  // Run 't' times
        int num;
        scanf("%d", &num);
        printf("%d\n", isPrime(num));
    }

    return 0;
}

