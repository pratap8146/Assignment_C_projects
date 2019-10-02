// program to add 2D array
// these code are comments.

#include <stdio.h>
#include <conio.h>

void main()
{
    int arr[100][100],i,j,x,y,sum=0;
    printf("Enter no of rows & coloumns:\nRows: ");  //asking to enter rows and coloumns
    scanf("%d",&x);
    printf("Coloumns: ");
    scanf("%d",&y);
    printf("\nEnter elements of array: ");   //asking to enter elements of array one by one using loop.
    for(i=1;i<=x;i++)
    {
        for(j=1;j<=y;j++)
        {
            scanf("%d",&arr[i-1][j-1]);
            sum+=arr[i-1][j-1];
        }
    }
    printf("the sum is %d",sum); //display the sum of array.
    getch();
}