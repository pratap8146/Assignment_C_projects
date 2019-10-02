// program to count vowels and consonent in a given word.
#include <stdio.h>
#include<string.h>
void main()
{
    char line[100];
    int i,len,vow=0,cons=0,dig=0,whites=0;
    printf("Enter your string:");   //Asking for input any word.
    scanf("%[^\n]",line);
    len=strlen(line);    //counting the no of carecters in word.
    
    for(i=1;i<=len;i++)    // loop for checking charecter is V/C/S/D or not one by one/
    {
        if(line[i-1]=='a' || line[i-1]=='e' || line[i-1]=='i' ||
           line[i-1]=='o' || line[i-1]=='u' || line[i-1]=='A' ||
           line[i-1]=='E' || line[i-1]=='I' || line[i]=='O' ||
           line[i]=='U')
            vow++;
        else if(line[i-1]>=1 && line[i-1]<=9)
            dig++;
        else if(line[i-1]==' ')
            whites++;
        else
            cons++;
    }
    printf("Total no of charecters is %d\n",len-whites);
    printf("the no of Vowels are %d\nNo of consonents are %d\n",vow,cons); //displaying the answer.
    printf("No of white space are %d\nNo of digita are %d",whites,dig);
}
