#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////
//
// Function Name : strRevx
// Description : Reverses a string
// Input : String
// Output : None
// Author : Aditya Vitthal Pagar
// Date : 20/11/2026
//
////////////////////////////////////////////////////////////
void strRevx(char *str)
{
    int i = 0;
    while(str[i] != '\0')
    {
        i++;
    }

    int iStart = 0;
    int iEnd = i - 1;
    char temp = '\0';

    while(iStart < iEnd)
    {
        temp = str[iStart];
        str[iStart] = str[iEnd];
        str[iEnd] = temp;

        iStart++;
        iEnd--;
    }

}
    

///////////////////////////////////////////////////
//
//  Entry point of the application
//
///////////////////////////////////////////////////
int main()
{
    char arr[20];

    printf("Enter string : \n");
    scanf("%[^'\n']s",arr);

    strRevx(arr);   

    printf("Modified String is : %s\n",arr);

    return EXIT_SUCCESS;
}

    

