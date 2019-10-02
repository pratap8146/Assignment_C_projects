// program to print table og given number.
#include <stdio.h>
#include <conio.h>
void main()
{
    int n, table,i;
    clrscr();
    printf("Enter any number: ");
    scanf("%d",&n);
    for(i=1;i<=10;i++)
    {
        table=n*i;
        printf("%d*%d=%d\n",n,i,table);
    }
    getch();
}

