#include <stdio.h>
#include <math.h>

int main() {
    double inputNumber;
    printf("Enter a number: ");
    scanf("%lf", &inputNumber);
    printf("The floor of %1lf is %.1lf.", inputNumber, floor(inputNumber));
    return 0;
}