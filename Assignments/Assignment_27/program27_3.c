#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////
//
// Function Name : Difference
// Description : Calculates the difference between the number of small and capital letters in a string
// Input : String
// Output : Integer
// Author : Aditya Vitthal Pagar
// Date : 20/11/2026
//
////////////////////////////////////////////////////////////
int Difference(char *str)
{
    int i = 0;
    int CapitalCount = 0, SmallCount = 0;
    
    while(*str != '\0')
    {
        if(*str >= 'A' && *str <= 'Z')
        {
            CapitalCount++;
        }
        if(*str >= 'a' && *str <= 'z')
        {
            SmallCount++;
        }
        str++;
    }
    return SmallCount - CapitalCount;
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

    iRet = Difference(arr);

    printf("Difference between small and capital letters: %d\n", iRet);
    return EXIT_SUCCESS;
}

    

