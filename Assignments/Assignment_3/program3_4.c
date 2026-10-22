#include<stdio.h>

////////////////////////////////////////////////////////////
//
// Function Name : DisplayConvert
// Description : It is used to convert case of character
// Input : Char
// Output : None (prints on console)
// Author : Aditya Vitthal Pagar
// Date : 22/10/2026
//
////////////////////////////////////////////////////////////
void DisplayConvert(char CValue)
{
    if((CValue >= 65) && (CValue <=90))
    {
        printf("%c",CValue+32);
    }
    else if((CValue >= 97) && (CValue <=122))
    {
        printf("%c",CValue-32);
    }
    else
    {
        printf("Enter Valid Character");
    }
}

///////////////////////////////////////////////////
//
//  Entry point of the application
//
///////////////////////////////////////////////////
int main()
{
    char cValue = '\0';

    printf("Enter Character \n");

    scanf("%c",&cValue);

    DisplayConvert(cValue);

    return 0;
}