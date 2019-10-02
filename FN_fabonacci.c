// program to display fibonacci sequence.
#include <stdio.h>
#include <conio.h>
void fabonacci(int x)  //function defination
{
   int a=1,num1=0,num2=1,num3=0; 
    while(a<=x){
        num3=num1;
        printf("%d,",num3);
        num1=num1+num2;
        num2=num3;
        a++;
    }
}
void main()
{
    int n;
    printf("Enter number of terms: ");  //asking to input no of terms.
    scanf("%d",&n);
    fabonacci(n);  //function call
    getch();
}


