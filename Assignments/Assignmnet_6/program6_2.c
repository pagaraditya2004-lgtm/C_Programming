#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////
//
// Function Name : CheckAdmission
// Description : Check Admission Eligibilty  
// Input : Float, Int
// Output : None(print on console)
// Author : Aditya Vitthal Pagar
// Date : 22/10/2026
//
////////////////////////////////////////////////////////////
void CheckAdmission(float fMarks, int iAge)
{
    if((fMarks >= 100) || (fMarks <= 0 ) || (iAge < 0))
    {
        printf("Invalid Input \n");
    }
    else if((fMarks >= 60) && (iAge >=17))
    {
        printf("Eligible");
    }
    else
    {
        printf("Not Eligible");
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
    int iAge = 0;

    printf("Enter Marks and Age : \n");
    scanf("%f %d",&fMarks , &iAge);

    CheckAdmission(fMarks, iAge);

    return EXIT_SUCCESS;
}