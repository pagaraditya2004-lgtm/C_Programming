#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////
//
// Function Name : Display
// Description : Display pattern
// Input : Int
// Output : None(print on console)
// Author : Aditya Vitthal Pagar
// Date : 02/11/2026
//
////////////////////////////////////////////////////////////
void Display(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    for(int i = 1; i <= iNo; i++)
    {
        printf("*\t");
    }
    for(int i = 1; i <= iNo; i++)
    {
        printf("#\t");
    }
    printf("\n");

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

    Display(iValue);

    return EXIT_SUCCESS;
}