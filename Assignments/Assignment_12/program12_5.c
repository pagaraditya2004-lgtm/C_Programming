#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////
//
// Function Name : Count
// Description : Calculates Frequency of digits less than 6 in Number
// Input : Integer
// Output : int
// Author : Aditya Vitthal Pagar
// Date : 04/11/2026
//
////////////////////////////////////////////////////////////
int Count(int iNo)
{
    int iDigit = 0, iCount = 0;

    while(iNo > 0)
    {
        iDigit = iNo % 10;
        if(iDigit < 6)
        {
            iCount++;
        }
        iNo = iNo / 10;
    }

    return iCount;
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

    iRet = Count(iValue);

    printf("%d",iRet);

    return EXIT_SUCCESS;
}

    

