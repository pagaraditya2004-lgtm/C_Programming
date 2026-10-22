#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////
//
// Function Name : CheckDivisibilty
// Description : It is used to check if number is divisible by 5 or not
// Input : Int
// Output : None(print on console)
// Author : Aditya Vitthal Pagar
// Date : 22/10/2026
//
////////////////////////////////////////////////////////////
void CheckDivisibilty(int iNo)
{
    if((iNo % 5) == 0)
    {
        printf("Divisible by 5 \n");
    }
    else
    {
        printf("Not Divisible by 5 \n");
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

    CheckDivisibilty(iValue);

    return EXIT_SUCCESS;
}