#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////
//
// Function Name : CountSmall
// Description : Counts the number of small letters in a string
// Input : String
// Output : Integer
// Author : Aditya Vitthal Pagar
// Date : 20/11/2026
//
////////////////////////////////////////////////////////////
int CountSmall(char *str)
{
    int i = 0;
    int count = 0;
    
    while(*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z')
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

    iRet = CountSmall(arr);

    printf("Number of small letters: %d\n", iRet);
    return EXIT_SUCCESS;
}

    

