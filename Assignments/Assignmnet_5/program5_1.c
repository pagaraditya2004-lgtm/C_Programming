#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////
//
// Function Name : FindGreatest
// Description : It is used to finf Greatest among 3 numbers
// Input : Int
// Output : None(print on console)
// Author : Aditya Vitthal Pagar
// Date : 22/10/2026
//
////////////////////////////////////////////////////////////
void FindGreatest(int iNo1, int iNo2, int iNo3)
{
    if((iNo1  > iNo2) && (iNo1 > iNo3))
    {
        printf("%d is greatest \n",iNo1);
    }
    else if((iNo2  > iNo1) && (iNo2 > iNo3))
    {
        printf("%d is greatest \n",iNo2);
    }
    else if ((iNo1 == iNo3 == iNo2))
    {
        printf("%d is greatest \n",iNo2);
    }
    else
    {
        printf("%d is greatest \n",iNo3);
    }
}

///////////////////////////////////////////////////
//
//  Entry point of the application
//
///////////////////////////////////////////////////
int main()
{
    int iValue1 = 0, iValue2 = 0, iValue3 = 0;

    printf("Enter 3 Numbers : \n");
    scanf("%d %d %d",&iValue1, &iValue2, &iValue3);

    FindGreatest(iValue1, iValue2, iValue3);

    return EXIT_SUCCESS;
}