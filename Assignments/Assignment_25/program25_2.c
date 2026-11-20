#include<stdio.h>
#include<stdlib.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

////////////////////////////////////////////////////////////
//
// Function Name : ChkCapital
// Description : Checks if a character is a capital letter
// Input : Character
// Output : BOOL
// Author : Aditya Vitthal Pagar
// Date : 20/11/2026
//
////////////////////////////////////////////////////////////
BOOL ChkCapital(char ch)
{
       if(ch >= 'A' && ch <= 'Z')
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

    bRet = ChkCapital(cValue);   

    if(bRet == TRUE)
    {
        printf("It is Capital Character\n");
    }
    else
    {
        printf("It is Not a Capital Character\n");
    }
    return EXIT_SUCCESS;
}

    

