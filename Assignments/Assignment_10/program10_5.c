#include<stdio.h>
#include<stdlib.h>

#define SQUAREMETER 0.0929

////////////////////////////////////////////////////////////
//
// Function Name : SquareMeter
// Description : Convert Square Feet to Square Meters
// Input : Int
// Output : Double
// Author : Aditya Vitthal Pagar
// Date : 02/11/2026
//
////////////////////////////////////////////////////////////
double SquareMeter(int iValue)
{
    return iValue * SQUAREMETER;
}
    

///////////////////////////////////////////////////
//
//  Entry point of the application
//
///////////////////////////////////////////////////
int main()
{
    int iValue = 0;
    double dRet = 0.0;

    printf("Enter Area in Square Feet : \n");
    scanf("%d",&iValue);

    dRet = SquareMeter(iValue);
    printf("Area in Square Meters : %lf\n", dRet);

    return EXIT_SUCCESS;
}
  