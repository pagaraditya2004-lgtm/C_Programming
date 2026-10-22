#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////
//
// Function Name : FindGreater
// Description : It is used to check which number is greater and if both number are equals
// Input : Int
// Output : None(print on console)
// Author : Aditya Vitthal Pagar
// Date : 22/10/2026
//
////////////////////////////////////////////////////////////
void FindGreater(int iNo1, int iNo2)
{
    if(iNo1 > iNo2)
    {
        printf("%d is Greater",iNo1);
    }
    else if(iNo1 == iNo2)
    {
        printf("Both Number are equal \n");
    }
    else
    {
        printf("%d is Greater",iNo2);
    }
}

///////////////////////////////////////////////////
//
//  Entry point of the application
//
///////////////////////////////////////////////////
int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter two Number : \n");
    scanf("%d %d",&iValue1, &iValue2);

    FindGreater(iValue1, iValue2);

    return EXIT_SUCCESS;
}