#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////
//
// Function Name : Percentage
// Description : Calculates the percentage of obtained marks with respect to total marks
// Input : Integer
// Output : Float
// Author : Aditya Vitthal Pagar
// Date : 04/11/2026
//
////////////////////////////////////////////////////////////
float Percentage(int iNo1, int iNo2)
{
    return ((float)iNo2 / (float)iNo1) * 100;
}
    

///////////////////////////////////////////////////
//
//  Entry point of the application
//
///////////////////////////////////////////////////
int main()
{
    int iValue1 = 0, iValue2 = 0;
    float fRet = 0.0f;

    printf("Enter Total Marks : \n");
    scanf("%d",&iValue1);

    printf("Enter Obtained Marks : \n");
    scanf("%d",&iValue2);

    fRet = Percentage(iValue1, iValue2);
    
    printf("Percentage is : %.2f%%\n",fRet);

    return EXIT_SUCCESS;
}

    

