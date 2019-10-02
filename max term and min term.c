// Program to find Max and Min no. from an array of 10 elements.

#include <stdio.h>
#include <conio.h>
void main()
{
    int arr[10],i,max,min;
    printf("Enter elements of array: ");
    for(i=1;i<=10;i++)
    {
        scanf("%d",&arr[i-1]);
    }
    max = arr[0];
    min = arr[0];

    for(i=1; i<10; i++)
    {
        /* If current element is greater than max */
        if(arr[i] > max)
        {
            max = arr[i];
        }

        /* If current element is smaller than min */
        if(arr[i] < min)
        {
            min = arr[i];
        }
    }
    printf("The max term is %d\nMin term is %d",max,min);
    getch();
}
