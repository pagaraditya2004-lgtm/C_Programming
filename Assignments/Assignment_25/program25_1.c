#include<stdio.h>
#include<stdlib.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

////////////////////////////////////////////////////////////
//
// Function Name : ChkAlpha
// Description : Checks if a character is an alphabet
// Input : Character
// Output : BOOL
// Author : Aditya Vitthal Pagar
// Date : 20/11/2026
//
////////////////////////////////////////////////////////////
BOOL ChkAlpha(char ch)
{
       if(ch >= 'A' && ch <= 'Z')
        {
            return TRUE;
        }
        else if(ch >= 'a' && ch <= 'z')
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

    bRet = ChkAlpha(cValue);   

    if(bRet == TRUE)
    {
        printf("It is Character\n");
    }
    else
    {
        printf("It is Not a Character\n");
    }
    return EXIT_SUCCESS;
}

    

