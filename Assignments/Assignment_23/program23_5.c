#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////
//
// Function Name : CountWhite
// Description : Counts the number of white spaces in a string
// Input : String
// Output : Integer
// Author : Aditya Vitthal Pagar
// Date : 20/11/2026
//
////////////////////////////////////////////////////////////
int CountWhite(char *str)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if(*str == '\t' || *str == ' ')
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
    int iRet = 0;

    printf("Enter string : \n");
    scanf("%[^'\n']s",arr);

    iRet = CountWhite(arr);
    printf("%d\n",iRet);

    return EXIT_SUCCESS;
}

    

