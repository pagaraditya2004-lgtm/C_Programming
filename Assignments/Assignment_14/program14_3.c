#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////
//
// Function Name : NonFact
// Description : Displays non-factors of a number
// Input : Integer
// Output : None
// Author : Aditya Vitthal Pagar
// Date : 04/11/2026
//
////////////////////////////////////////////////////////////
void NonFact(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1 ; iCnt < iNo; iCnt++)
    {
        if(iNo % iCnt != 0)
        {
            printf("%d\t",iCnt);
        }
    }
}
    

///////////////////////////////////////////////////
//
//  Entry point of the application
//
///////////////////////////////////////////////////
int main()
{
    int iValue = 0;

    printf("Enter a number : \n");
    scanf("%d",&iValue);

    NonFact(iValue);

    return EXIT_SUCCESS;
}

    

