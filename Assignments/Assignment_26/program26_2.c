#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////
//
// Function Name : Display
// Description : Displays the case of a character
// Input : Character
// Output : None
// Author : Aditya Vitthal Pagar
// Date : 20/11/2026
//
////////////////////////////////////////////////////////////
void Display(char ch)
{
    if(ch >= 'A' && ch <= 'Z')
    {
        printf("%c\n",ch+32);
    }
    else if(ch >= 'a' && ch <= 'z')
    {
        printf("%c\n",ch-32);
    }
    else
    {
        printf("%c\n",ch);
    }
}


///////////////////////////////////////////////////
//
//  Entry point of the application
//
///////////////////////////////////////////////////
int main()
{
    char cValue = '\0';

    printf("Enter character : \n");
    scanf(" %c",&cValue);

    Display(cValue);

    return EXIT_SUCCESS;
}

    

