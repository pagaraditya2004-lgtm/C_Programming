#include<stdio.h>
#include<stdlib.h>

#define DOLLAR 70

////////////////////////////////////////////////////////////
//
// Function Name : FactorialDiff
// Description : Calculate difference between factorial of even and odd numbers
// Input : Int
// Output : Int
// Author : Aditya Vitthal Pagar
// Date : 02/11/2026
//
////////////////////////////////////////////////////////////
int FactorialDiff(int iNo)
{
    int iCnt = 0, iEvenFact = 1, iOddFact = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt += 2)
    {
        iOddFact *= iCnt;
    }
    for(iCnt = 2; iCnt <= iNo; iCnt += 2)
    {
        iEvenFact *= iCnt;
    }

    return iEvenFact - iOddFact;;
}
    

///////////////////////////////////////////////////
//
//  Entry point of the application
//
///////////////////////////////////////////////////
int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    iRet = FactorialDiff(iValue);
    printf("Factorial Difference : %d\n", iRet);

    return EXIT_SUCCESS;
}