#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////
//
// Function Name : FactRev
// Description : Displays factors of a number in reverse order
// Input : Integer
// Output : None
// Author : Aditya Vitthal Pagar
// Date : 04/11/2026
//
////////////////////////////////////////////////////////////
void FactRev(int iNo)
{
    int iCnt = 0;

    for(iCnt = iNo/2; iCnt >= 1; iCnt--)
    {
        if(iNo % iCnt == 0)
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

    FactRev(iValue);

    return EXIT_SUCCESS;
}

    

