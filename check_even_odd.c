#include <stdio.h>
#include <conio.h>
void check_Even_odd(int x)
{
    if(x%2==0)
    {
        printf("%d is even no.",x);
    }
    else
    {
        printf("%d is odd",x);
    }
}

void main()
{
  int n;
  printf("Enter anyt number: ");
  scanf("%d",&n);
  check_Even_odd(n);
  getch();
}