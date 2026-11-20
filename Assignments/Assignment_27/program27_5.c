#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////
//
// Function Name : Reverse
// Description : Reverses a string
// Input : String
// Output : None
// Author : Aditya Vitthal Pagar
// Date : 20/11/2026
//
////////////////////////////////////////////////////////////
void Reverse(char *str)
{
    int i = 0;

    while(str[i] != '\0')
    {
        i++;
    }

    char temp = '\0';
    int Start = 0;
    int End = i - 1;

    while(Start < End)
    {
        temp = str[Start];
        str[Start] = str[End];  
        str[End] = temp;

        Start++;
        End--;
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

    Reverse(arr);

    printf("Reversed string is : %s\n",arr);

    return EXIT_SUCCESS;
}

    

