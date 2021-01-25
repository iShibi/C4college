#include <stdio.h>
#include <math.h>

int main() {
    double inputNumber;
    printf("Enter a number: ");
    scanf("%lf", &inputNumber);
    printf("Log of %lf = %lf", inputNumber, log(inputNumber));
    return 0;
}