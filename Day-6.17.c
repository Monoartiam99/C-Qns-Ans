<<<<<<< HEAD
#include <stdio.h>

// Function to calculate factorial using recursion.
int factorial(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    // Calculate factorial
    int result = factorial(n);

    // Print the result
    printf("Factorial of %d is %d\n", n, result);

    return 0;
}
=======
#include <stdio.h>

// Function to calculate factorial using recursion.
int factorial(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    // Calculate factorial
    int result = factorial(n);

    // Print the result
    printf("Factorial of %d is %d\n", n, result);

    return 0;
}
>>>>>>> fef790d45792d805e8077c047d1d2df6abebc11b
