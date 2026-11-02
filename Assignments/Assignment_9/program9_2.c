#include<stdio.h>
#include<stdlib.h>

#define DOLLAR 70

////////////////////////////////////////////////////////////
//
// Function Name : DollarToInr
// Description : Convert Dollar to Indian Rupees
// Input : Int
// Output : Int
// Author : Aditya Vitthal Pagar
// Date : 02/11/2026
//
////////////////////////////////////////////////////////////
int DollarToInr(int iNo)
{
    return iNo * DOLLAR;

}
    

///////////////////////////////////////////////////
//
//  Entry point of the application
//
///////////////////////////////////////////////////
int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter Number of USD : \n");
    scanf("%d",&iValue);

    iRet = DollarToInr(iValue);
    printf("Value in INR : %d\n", iRet);

    return EXIT_SUCCESS;
}