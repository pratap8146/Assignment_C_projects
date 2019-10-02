//program to check the given integer is armstrong or not

#include <stdio.h>
#include <conio.h>

void main()
{
    int number, originalNumber, remainder, result = 0;
    printf("Enter a three digit integer: ");   // asking to enter any three degit integer
    scanf("%d", &number);
    originalNumber = number;
    while (originalNumber != 0)  
    {
        remainder = originalNumber%10;
        result += remainder*remainder*remainder;
        originalNumber /= 10;
    }
    if(result == number)
        printf("\n%d is an Armstrong number.",number);
    else
        printf("\n%d is not an Armstrong number.",number);
    
    getch();
}
