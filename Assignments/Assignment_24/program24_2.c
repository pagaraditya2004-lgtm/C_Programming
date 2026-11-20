#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////
//
// Function Name : CountChar
// Description : Counts occurrences of a character in a string
// Input : String , character
// Output : int
// Author : Aditya Vitthal Pagar
// Date : 20/11/2026
//
////////////////////////////////////////////////////////////
int CountChar(char *str, char cValue)
{
    int iCount = 0;
    while(*str != '\0')
    {
        if(*str == cValue)
        {
            iCount++;
        }
        str++;
    }
    return iCount;
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

    int iRet = 0;

    printf("Enter string : \n");
    scanf("%[^'\n']s",arr);

    printf("Enter character : \n");
    scanf(" %c",&cValue);

    iRet = CountChar(arr, cValue);   

   printf("Character frequency : %d\n",iRet);

    return EXIT_SUCCESS;
}

    

