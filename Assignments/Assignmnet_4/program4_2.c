#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////
//
// Function Name : CheckEvenOdd
// Description : It is used to check if number is Even or Odd
// Input : Int
// Output : None(print on console)
// Author : Aditya Vitthal Pagar
// Date : 22/10/2026
//
////////////////////////////////////////////////////////////
void CheckEvenOdd(int iNo)
{
    if((iNo %  2) == 0)
    {
        printf("Even \n");
    }
    else
    {
        printf("Odd \n");
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

    CheckEvenOdd(iValue);

    return EXIT_SUCCESS;
}