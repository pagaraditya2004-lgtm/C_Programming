#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////
//
// Function Name : Multiply
// Description : Multiplies the given three numbers
// Input : Integer
// Output : Integer
// Author : Aditya Vitthal Pagar
// Date : 04/11/2026
//
////////////////////////////////////////////////////////////
int Multiply(int iNo1, int iNo2, int iNo3)
{
    return iNo1 * iNo2 * iNo3;
}
    

///////////////////////////////////////////////////
//
//  Entry point of the application
//
///////////////////////////////////////////////////
int main()
{
    int iValue1 = 0, iValue2 = 0, iValue3 = 0, iRet = 0;

    printf("Enter three numbers : \n");
    scanf("%d%d%d",&iValue1,&iValue2,&iValue3);

    iRet = Multiply(iValue1, iValue2, iValue3);
    
    printf("Multiplication of three numbers is : %d\n",iRet);

    return EXIT_SUCCESS;
}

    

