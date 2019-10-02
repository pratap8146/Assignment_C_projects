// program to print table og given number.
// these are comments plese do not remember it.

#include <stdio.h>
#include <conio.h>
void main()
{
    int n, table,i;
    clrscr();
    printf("Enter any number: ");  //asking for user to input any number/
    scanf("%d",&n);
    for(i=1;i<=10;i++)      //loop to multiply number by 1to10 one by one 
    {
        table=n*i;
        printf("%d*%d=%d\n",n,i,table);  //display the table.
    }
    getch();
}

