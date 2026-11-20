#include<stdio.h>
#include<stdlib.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

////////////////////////////////////////////////////////////
//
// Function Name : ChkSmall
// Description : Checks if a character is a small letter
// Input : Character
// Output : BOOL
// Author : Aditya Vitthal Pagar
// Date : 20/11/2026
//
////////////////////////////////////////////////////////////
BOOL ChkSmall(char ch)
{
       if(ch >= 'a' && ch <= 'z')
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

    bRet = ChkSmall(cValue);   

    if(bRet == TRUE)
    {
        printf("It is Small Character\n");
    }
    else
    {
        printf("It is Not a Small Character\n");
    }
    return EXIT_SUCCESS;
}

    

