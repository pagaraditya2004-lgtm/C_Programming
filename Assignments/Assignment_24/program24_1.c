#include<stdio.h>
#include<stdlib.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

////////////////////////////////////////////////////////////
//
// Function Name : ChkChar
// Description : Checks if a character exists in a string
// Input : String , character
// Output : BOOL
// Author : Aditya Vitthal Pagar
// Date : 20/11/2026
//
////////////////////////////////////////////////////////////
BOOL ChkChar(char *str, char cValue)
{
    while(*str != '\0')
    {
        if(*str == cValue)
        {
            return TRUE;
        }
        str++;
    }
    return FALSE;
}  

///////////////////////////////////////////////////
//
//  Entry point of the application
//
///////////////////////////////////////////////////
int main()
{
    char arr[20];
    char cValue = '\0';

    BOOL bRet = FALSE;

    printf("Enter string : \n");
    scanf("%[^'\n']s",arr);

    printf("Enter character : \n");
    scanf(" %c",&cValue);

    bRet = ChkChar(arr, cValue);   

    if(bRet == TRUE)
    {
        printf("Character Found\n");
    }
    else
    {
        printf("Character Not Found\n");
    }
    return EXIT_SUCCESS;
}

    

