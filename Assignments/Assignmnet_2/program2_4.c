#include<stdio.h>

///////////////////////////////////////////////////
//
// Function Name : Display
// Description : Prints first number in second number of times
// Input : Int, Int
// Output : None (prints to the console)
// Author : Aditya Vitthal Pagar
// Date : 22/10/2026
//
///////////////////////////////////////////////////
 void Display(int iNo, int iFrequency)
 {
    int iCnt = 0;

    if(iFrequency < 0)
    {
        iFrequency = -(iFrequency);
    }

    for(iCnt = 1; iCnt <= iFrequency; iCnt++)
    {
        printf("%d \t",iNo);
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
    int iCount = 0;

    printf("Enter a Number : ");
    scanf("%d",&iValue);

    printf("Enter Frequency : ");
    scanf("%d",&iCount);

    Display(iValue, iCount);

    return 0;
}