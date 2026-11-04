#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////
//
// Function Name : SumNonFact
// Description : Calculates the sum of non-factors of a number
// Input : Integer
// Output : Integer
// Author : Aditya Vitthal Pagar
// Date : 04/11/2026
//
////////////////////////////////////////////////////////////
int SumNonFact(int iNo)
{
    int iCnt = 0,iSum = 0;

    for(iCnt = 1 ; iCnt < iNo; iCnt++)
    {
        if(iNo % iCnt != 0)
        {
            iSum += iCnt;
        }
    }

    return iSum;
}
    

///////////////////////////////////////////////////
//
//  Entry point of the application
//
///////////////////////////////////////////////////
int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter a number : \n");
    scanf("%d",&iValue);

    iRet = SumNonFact(iValue);
    printf("Sum of non-factors is : %d\n",iRet);

    return EXIT_SUCCESS;
}

    

