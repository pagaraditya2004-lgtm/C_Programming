#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////
//
// Function Name : CheckNumber
// Description : It is used to check if number is positive, negative or zero
// Input : Int
// Output : None(print on console)
// Author : Aditya Vitthal Pagar
// Date : 22/10/2026
//
////////////////////////////////////////////////////////////
void CheckNumber(int iNo)
{
    if(iNo > 0)
    {
        printf("Positive \n");
    }
    else if(iNo < 0)
    {
        printf("Negative \n");
    }
    else if(iNo == 0)
    {
        printf("Zero \n");
    }
    else
    {
        printf("Enter Valid Input \n");
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

    printf("Enter a Number : \n");
    scanf("%d",&iValue);

    CheckNumber(iValue);

    return EXIT_SUCCESS;
}