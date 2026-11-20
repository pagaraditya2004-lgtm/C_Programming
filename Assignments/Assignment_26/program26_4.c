#include<stdio.h>
#include<stdlib.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

////////////////////////////////////////////////////////////
//
// Function Name : ChkSpecial
// Description : Checks if a character is a special character
// Input : Character
// Output : BOOL
// Author : Aditya Vitthal Pagar
// Date : 20/11/2026
//
////////////////////////////////////////////////////////////
BOOL ChkSpecial(char cValue)
{
    if(cValue >= 'A' && cValue <= 'Z')
    {
        return FALSE;
    }
    else if(cValue >= 'a' && cValue <= 'z')
    {
        return FALSE;
    }
    else if(cValue >= '0' && cValue <= '9')
    {
        return FALSE;
    }
    else
    {
        return TRUE;
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

    bRet = ChkSpecial(cValue);   

    if(bRet == TRUE)
    {
        printf("It is a Special Character \n");
    }
    else
    {
        printf("It is not a Special Character\n");
    }
    return EXIT_SUCCESS;
}

    

