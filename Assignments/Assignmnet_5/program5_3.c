#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////
//
// Function Name : DisplayGrade
// Description : calculates student grade
// Input : Int
// Output : None(print on console)
// Author : Aditya Vitthal Pagar
// Date : 22/10/2026
//
////////////////////////////////////////////////////////////
void DisplayGrade(float fMarks)
{
    if((fMarks <= 0) || (fMarks >=100))
    {
        printf("Invalid Marks \n");
    }
    else if((fMarks >= 90) && (fMarks < 100))
    {
        printf("Grade A\n");
    }
    else if((fMarks >= 75) && (fMarks <= 89))
    {
        printf("Grade B\n");
    }
    else if((fMarks >= 60) && (fMarks <= 74))
    {
        printf("Grade C\n");
    }
    else if((fMarks >= 40) && (fMarks <= 59))
    {
        printf("Grade D\n");
    }
    else
    {
        printf("Fail \n");
    }
}

///////////////////////////////////////////////////
//
//  Entry point of the application
//
///////////////////////////////////////////////////
int main()
{
    float fMarks = 0.0f;

    printf("Enter Marks : \n");
    scanf("%f",&fMarks);

    DisplayGrade(fMarks);

    return EXIT_SUCCESS;
}