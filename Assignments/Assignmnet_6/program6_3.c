#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////
//
// Function Name : CalculateDiscount
// Description : Calculate Shopping Discount  
// Input : Float
// Output : None(print on console)
// Author : Aditya Vitthal Pagar
// Date : 22/10/2026
//
////////////////////////////////////////////////////////////
void CalculateDiscount(float fAmount)
{
    float fFinalAmount = 0.0f;

    if(fAmount <= 1000)
    {
        printf("Payable Amount : %f",fAmount);
    }
    else if ((fAmount > 1000) && (fAmount <= 5000))
    {
        fFinalAmount = fAmount - ((fAmount * 10) / 100);

        printf("Payable Amount : %f",fFinalAmount);
    }
    else if((fAmount > 5000))
    {
        fFinalAmount = fAmount - ((fAmount * 20) / 100);

        printf("Payable Amount : %f",fFinalAmount);
    }
    else
    {
        printf("Enter Valid Amount");
    }
    
}

///////////////////////////////////////////////////
//
//  Entry point of the application
//
///////////////////////////////////////////////////
int main()
{
    float fAmount = 0.0f;

    printf("Enter purchase amount : \n");
    scanf("%f",&fAmount);

    CalculateDiscount(fAmount);

    return EXIT_SUCCESS;
}