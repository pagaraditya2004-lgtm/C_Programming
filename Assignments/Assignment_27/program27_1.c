#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////
//
// Function Name : CountCapital
// Description : Counts the number of capital letters in a string
// Input : String
// Output : Integer
// Author : Aditya Vitthal Pagar
// Date : 20/11/2026
//
////////////////////////////////////////////////////////////
int CountCapital(char *str)
{
    int i = 0;
    int count = 0;
    
    while(*str != '\0')
    {
        if(*str >= 'A' && *str <= 'Z')
        {
            count++;
        }
        str++;
    }
    return count;
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

    iRet = CountCapital(arr);

    printf("Number of capital letters: %d\n", iRet);
    return EXIT_SUCCESS;
}

    

