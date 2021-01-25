#include <stdio.h>
#include <math.h>

int main() {
    double inputNumber;
    printf("Enter a number: ");
    scanf("%lf", &inputNumber);
    printf("The ceiling of %.1lf is %.1lf", inputNumber, ceil(inputNumber));
    return 0;
}
