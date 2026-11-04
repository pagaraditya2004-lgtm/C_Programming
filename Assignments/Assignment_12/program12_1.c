#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////
//
// Function Name : DisplayDigit
// Description : Display individual digits of a number
// Input : Integer
// Output : None
// Author : Aditya Vitthal Pagar
// Date : 04/11/2026
//
////////////////////////////////////////////////////////////
void DisplayDigit(int iNo)
{
    int iDigit = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo > 0)
    {
        iDigit = iNo % 10;
        printf("%d\n", iDigit);
        iNo = iNo / 10;
    }
}
    

///////////////////////////////////////////////////
//
//  Entry point of the application
//
///////////////////////////////////////////////////
int main()
{
    int iValue = 0;

    printf("Enter a number : \n");
    scanf("%d",&iValue);

    DisplayDigit(iValue);

    return EXIT_SUCCESS;
}

    

