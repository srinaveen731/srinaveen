#include <stdio.h>

int main() {
    int a, b, c, d, sum;
    float average;

    // Input 4 numbers
    printf("Enter four numbers:\n");
    scanf("%d %d %d %d", &a, &b, &c, &d);

    // Calculate sum
    sum = a + b + c + d;

    // Calculate average
    average = sum / 4.0;  // use 4.0 to get float result

    // Output results
    printf("Sum = %d\n", sum);
    printf("Average = %.2f\n", average);

    return 0;
}
