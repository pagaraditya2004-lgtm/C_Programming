#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////
//
// Function Name : FactDiff
// Description : Calculates the difference between the sum of factors and the sum of non-factors of a number
// Input : Integer
// Output : Integer
// Author : Aditya Vitthal Pagar
// Date : 04/11/2026
//
////////////////////////////////////////////////////////////
int FactDiff(int iNo)
{
    int iCnt = 0,iSumFact = 0,iSumNonFact = 0;

    for(iCnt = 1 ; iCnt < iNo; iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            iSumFact += iCnt;
        }
        else
        {
            iSumNonFact += iCnt;
        }
    }

    return iSumFact - iSumNonFact;
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

    iRet = FactDiff(iValue);
    printf("%d\n",iRet);

    return EXIT_SUCCESS;
}

    

