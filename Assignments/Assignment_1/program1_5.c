#include<stdio.h>

///////////////////////////////////////////////////
//
// Function Name : Accept
// Description : Prints "*"
// Input : Int
// Output : None (prints to the console)
// Author : Aditya Vitthal Pagar
// Date : 22/10/2026
//
///////////////////////////////////////////////////
void Accept(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <=iNo; iCnt++)
    {
        printf("*\n");
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

    Accept(iValue);

    return 0;
}