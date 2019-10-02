// program to reverse a string enter by a user.

#include <stdio.h>
#include <conio.h>
void reverseSentence()  // function defination
{
    char c;
    scanf("%c", &c);    //asking to enter string
    if( c != '\n')
    {
        reverseSentence();   
        printf("%c",c);    
    }
}
void main()
{
    printf("Enter a sentence: "); 
    reverseSentence();   //function call
}

