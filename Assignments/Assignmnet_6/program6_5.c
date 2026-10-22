#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////
//
// Function Name : CalculateBonus
// Description : Calculate Employee Bonus  
// Input : Float, Int
// Output : None(print on console)
// Author : Aditya Vitthal Pagar
// Date : 22/10/2026
//
////////////////////////////////////////////////////////////
void CalculateBonus(float fSalary, int iYears)
{
    float fBonus = 0.0f;

    if(iYears >= 10)
    {
        fBonus = (fSalary * 15) / 100;

        printf("Bonus : %f",fBonus);
    }
    else if((iYears >= 5) && (iYears < 10))
    {
        fBonus = (fSalary * 10) / 100;

        printf("Bonus : %f",fBonus);
    }
    else if((iYears >= 1) && (iYears < 5))
    {
        fBonus = (fSalary * 5) / 100;

        printf("Bonus : %f",fBonus);
    }
    else
    {
        printf("Invalid Details \n");
    }
}

///////////////////////////////////////////////////
//
//  Entry point of the application
//
///////////////////////////////////////////////////
int main()
{
    float fSalary = 0.0f;
    int iYears = 0;

    printf("Enter Salary and Years of Service : \n");
    scanf("%f %d",&fSalary, &iYears);

    CalculateBonus(fSalary, iYears);

    return EXIT_SUCCESS;
}