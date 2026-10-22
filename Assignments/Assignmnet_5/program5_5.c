#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////
//
// Function Name : CheckCharcterType
// Description : Identify Charcter Type
// Input : Char
// Output : None (prints on console)
// Author : Aditya Vitthal Pagar
// Date : 22/10/2026
//
////////////////////////////////////////////////////////////
void CheckCharcterType(char CValue)
{
    if((CValue >= 65) && (CValue <=90))
    {
        printf("%c is UpperCase Alphabet",CValue);
    }
    else if((CValue >= 97) && (CValue <=122))
    {
        printf("%c is LowerCase Alphabet",CValue);
    }
    else if((CValue >= 48) && (CValue <= 57))
    {
        printf("%c is Digit",CValue);
    }
    else
    {
        printf("%c is Special Character",CValue);
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

    printf("Enter Character \n");

    scanf("%c",&cValue);

    CheckCharcterType(cValue);

    return EXIT_SUCCESS;
}