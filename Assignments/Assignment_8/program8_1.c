#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////
//
// Function Name : Number
// Description : Display size category of given number
// Input : Int
// Output : None(print on console)
// Author : Aditya Vitthal Pagar
// Date : 02/11/2026
//
////////////////////////////////////////////////////////////
void Number(int iNo)
{
    if(iNo <= 50)
    {
        printf("Small\n");
    }
    else if(iNo > 50 && iNo <= 100)
    {
        printf("Medium\n");
    }
    else if(iNo > 100)
    {
        printf("Large\n");
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

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    Number(iValue);

    return EXIT_SUCCESS;
}