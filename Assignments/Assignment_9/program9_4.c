#include<stdio.h>
#include<stdlib.h>

#define DOLLAR 70

////////////////////////////////////////////////////////////
//
// Function Name : OddFactorial
// Description : Calculate factorial of odd numbers
// Input : Int
// Output : Int
// Author : Aditya Vitthal Pagar
// Date : 02/11/2026
//
////////////////////////////////////////////////////////////
int OddFactorial(int iNo)
{
    int iCnt = 0, iFact = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt += 2)
    {
        iFact *= iCnt;
    }

    return iFact;
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

    iRet = OddFactorial(iValue);
    printf("Odd Factorial : %d\n", iRet);

    return EXIT_SUCCESS;
}