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
BOOL ChkVowel(char *str)
{
    while(*str != '\0')
    {
        if(*str == 'A' || *str == 'E' || *str == 'I' || *str == 'O' || *str == 'U' ||
           *str == 'a' || *str == 'e' || *str == 'i' || *str == 'o' || *str == 'u')
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

    BOOL bRet = FALSE;

    printf("Enter string : \n");
    scanf("%[^'\n']s", arr);

    bRet = ChkVowel(arr);   

    if(bRet == TRUE)
    {
        printf("Contains Vowel \n");
    }
    else
    {
        printf("There is no Vowel\n");
    }
    return EXIT_SUCCESS;
}

    

