#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////
//
// Function Name : MultFact
// Description : Calculates Multiplication of Factors of Number
// Input : Integer
// Output : int
// Author : Aditya Vitthal Pagar
// Date : 04/11/2026
//
////////////////////////////////////////////////////////////
int MultFact(int iNo)
{
    int iCnt = 0,iFact = 1;

    for(iCnt = 1; iCnt <= iNo/2; iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            iFact *= iCnt;
        }
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
    int iValue = 0;
    int iRet = 0;

    printf("Enter a number : \n");
    scanf("%d",&iValue);

    iRet = MultFact(iValue);

    printf("%d",iRet);

    return EXIT_SUCCESS;
}

    

