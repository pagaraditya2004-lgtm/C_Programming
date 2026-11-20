#include<stdio.h>
#include<stdlib.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

////////////////////////////////////////////////////////////
//
// Function Name : ChkDigit
// Description : Checks if a character is a digit
// Input : Character
// Output : BOOL
// Author : Aditya Vitthal Pagar
// Date : 20/11/2026
//
////////////////////////////////////////////////////////////
BOOL ChkDigit(char ch)
{
       if(ch >= '0' && ch <= '9')
        {
            return TRUE;
        }
        else
        {
            return FALSE;
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

    BOOL bRet = FALSE;

    printf("Enter character : \n");
    scanf(" %c",&cValue);

    bRet = ChkDigit(cValue);   

    if(bRet == TRUE)
    {
        printf("It is Digit\n");
    }
    else
    {
        printf("It is Not a Digit\n");
    }
    return EXIT_SUCCESS;
}

    

