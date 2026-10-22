#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////
//
// Function Name : CheckLeapYear
// Description : check leap year
// Input : Int
// Output : None(print on console)
// Author : Aditya Vitthal Pagar
// Date : 22/10/2026
//
////////////////////////////////////////////////////////////
void CheckLeapYear(int iNo)
{
    if(iNo <= 0)
    {
        printf("Invalid Year \n");
    }
    else if(((iNo % 400) == 0) || (((iNo % 4) == 0) && (iNo % 100) != 0))
    {
        printf("It is a Leap Year\n");
    }
    else
    {
        printf("It is not a Leap Year\n");
    }
}

///////////////////////////////////////////////////
//
//  Entry point of the application
//
///////////////////////////////////////////////////
int main()
{
    int iYear = 0;

    printf("Enter a year : \n");
    scanf("%d",&iYear);

    CheckLeapYear(iYear);

    return EXIT_SUCCESS;
}