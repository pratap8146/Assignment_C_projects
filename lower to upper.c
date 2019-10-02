// program to read a sentance and replace lowercase to uppercase

#include <stdio.h>
#include <string.h>
 
void main()
{
   char string[1000];
   
   printf("Input a string to convert to upper case\n");
   gets(string);
   
   printf("The string in upper case: %s", strupr(string));
   
}