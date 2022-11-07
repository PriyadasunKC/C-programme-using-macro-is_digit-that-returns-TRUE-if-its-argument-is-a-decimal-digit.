#include <stdio.h>
#define is_digit(number) (number >= 0 && number <= 9) ? printf("TRUE") : printf("FALSE")
int checkDigit();
int main()
{

    checkDigit();
    return 0;
}

int checkDigit()
{

    int number = 0;
    printf("Enter a Digit : ");
    scanf("%d", &number);
    is_digit(number);
    return 0;
}