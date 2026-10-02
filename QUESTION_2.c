#include <stdio.h>

int add(int a, int b){return a+b;}

int main()
{
    int firstNumber;
    int secondNumber;

    printf("Enter first number: ");
    scanf("%d", &firstNumber);

    printf("Enter second number: ");
    scanf("%d", &secondNumber);

        printf("Sum = %d\n", add(firstNumber,secondNumber));

    return 0;
}


