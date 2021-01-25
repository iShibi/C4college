#include <stdio.h>
#include <math.h>

int main() {
    double inputNumber;
    printf("Enter a number: ");
    scanf("%lf", &inputNumber);
    printf("The absolute value of %lf is %lf", inputNumber, fabs(inputNumber));
    return  0;
}