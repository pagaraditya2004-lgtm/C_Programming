#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////
//
// Function Name : FirstChar
// Description : Finds the first occurrence index of a character in a string
// Input : String , character
// Output : int
// Author : Aditya Vitthal Pagar
// Date : 20/11/2026
//
////////////////////////////////////////////////////////////
int FirstChar(char *str, char cValue)
{
    int i = 0;
    while(str[i] != '\0')
    {
        if(str[i] == cValue)
        {
            return i;
        }
        i++;
    }
    return -1;
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

    iRet = FirstChar(arr, cValue);   

   printf("Character location : %d\n",iRet);

    return EXIT_SUCCESS;
}

    

