#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

////////////////////////////////////////////////////////////
//
// Function Name : ChkGreater
// Description : Checks whether the given number is greater than 100 or not
// Input : Integer
// Output : BOOL
// Author : Aditya Vitthal Pagar
// Date : 04/11/2026
//
////////////////////////////////////////////////////////////
BOOL ChkGreater(int iNo)
{
    if(iNo < 100)
    {
        return FALSE;
    }
    else
    {
        return TRUE;
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
    BOOL bRet = FALSE;

    printf("Enter a number : \n");
    scanf("%d",&iValue);

    bRet = ChkGreater(iValue);
    if(bRet == TRUE)
    {
        printf("greater\n");
    }
    else
    {
        printf("Smaller\n");
    }

    return EXIT_SUCCESS;
}

    

