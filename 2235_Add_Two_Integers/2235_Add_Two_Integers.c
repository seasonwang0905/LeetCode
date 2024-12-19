#include <stdio.h>

int sum(int num1, int num2) {
    return num1 + num2;
}

int main() {
    // Example 1
    int num1 = 12, num2 = 5;
    printf("Example 1: num1 = %d, num2 = %d\n", num1, num2);
    printf("Result 1: %d\n", sum(num1, num2));

    // Example 2
    num1 = -10, num2 = 4;
    printf("Example 2: num1 = %d, num2 = %d\n", num1, num2);
    printf("Result 2: %d\n", sum(num1, num2));

    return 0;
}