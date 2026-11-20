#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////
//
// Function Name : DisplayASCII
// Description : Displays ASCII values in different formats
// Input : None
// Output : None
// Author : Aditya Vitthal Pagar
// Date : 20/11/2026
//
////////////////////////////////////////////////////////////
void Display(char ch)
{
    printf("Decimal\tOctal\tHexadecimal\n");
    
    printf("%d\t%o\t%X\n",ch,ch,ch);
}


///////////////////////////////////////////////////
//
//  Entry point of the application
//
///////////////////////////////////////////////////
int main()
{
    char cValue = '\0';

    printf("Enter a character: ");
    scanf(" %c", &cValue);

    Display(cValue);

    return EXIT_SUCCESS;
}

    

