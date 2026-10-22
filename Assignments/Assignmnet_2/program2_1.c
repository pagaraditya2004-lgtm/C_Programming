#include<stdio.h>

///////////////////////////////////////////////////
//
// Function Name : Display
// Description : Prints "*"
// Input : Int
// Output : None (prints to the console)
// Author : Aditya Vitthal Pagar
// Date : 22/10/2026
//
///////////////////////////////////////////////////
void Display(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -(iNo);
    }
    while (iCnt < iNo)
    {
        printf("*\n");
        iCnt++;
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

    printf("Enter Number : ");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}