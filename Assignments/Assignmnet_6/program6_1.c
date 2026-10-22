#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////
//
// Function Name : CalculateElectricityBill
// Description : Calculate Electricity  Bill
// Input : Int
// Output : None(print on console)
// Author : Aditya Vitthal Pagar
// Date : 22/10/2026
//
////////////////////////////////////////////////////////////
void CalculateElectricityBill(int iUnits)
{
    float fBill = 0.0f;

    if(iUnits <= 100)
    {
        fBill = iUnits * 5;

        printf("Bill is : %f",fBill);
    }
    else if(iUnits > 100 && iUnits<=200)
    {
        fBill = 500 + ((iUnits-100) * 7);

        printf("Bill is : %f",fBill);
    }
    else if(iUnits > 200)
    {
        fBill = 500 + 700 + ((iUnits-200) * 10);

        printf("Bill is : %f",fBill);
    }
    else
    {
        printf("Enter Valid Bill");
    }
}

///////////////////////////////////////////////////
//
//  Entry point of the application
//
///////////////////////////////////////////////////
int main()
{
    int iUnits = 0;

    printf("Enter Consumed Units : \n");
    scanf("%d",&iUnits);

    CalculateElectricityBill(iUnits);

    return EXIT_SUCCESS;
}