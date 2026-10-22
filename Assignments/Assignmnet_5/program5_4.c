#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////
//
// Function Name : CheckMultipleDivisibilty
// Description : check divisibility by 5 and 3
// Input : Int
// Output : None(print on console)
// Author : Aditya Vitthal Pagar
// Date : 22/10/2026
//
////////////////////////////////////////////////////////////
void CheckMultipleDivisibilty(int iNo)
{
    if(((iNo % 5) == 0) && ((iNo % 3) == 0))
    {
        printf("Divisible by 5 and 3 \n");
    }
    else if((iNo % 5) == 0)
    {
        printf("Divisible by 5\n");
    }
    else if((iNo % 3) == 0)
    {
        printf("Divisible by 3\n");
    }
    else
    {
        printf("Not Divisible by either\n");
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

    CheckMultipleDivisibilty(iValue);

    return EXIT_SUCCESS;
}