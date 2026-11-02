#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////
//
// Function Name : Factorial
// Description : return factorial of given number
// Input : Int
// Output : Int
// Author : Aditya Vitthal Pagar
// Date : 02/11/2026
//
////////////////////////////////////////////////////////////
int Factorial(int iNo)
{
    int iFact = 1, iCnt = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    if(iNo == 0)
    {
        return 1;
    }
    else
    {
        for(iCnt = 1; iCnt <= iNo; iCnt++)
        {
            iFact = iFact * iCnt;
        }
        return iFact;
    }
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

    iRet = Factorial(iValue);
    printf("Factorial is : %d\n", iRet);

    return EXIT_SUCCESS;
}