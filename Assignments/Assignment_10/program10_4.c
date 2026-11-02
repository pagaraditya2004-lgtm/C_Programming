#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////
//
// Function Name : FhtoCs
// Description : Convert Fahrenheit to Celsius
// Input : Float
// Output : Double
// Author : Aditya Vitthal Pagar
// Date : 02/11/2026
//
////////////////////////////////////////////////////////////
double FhtoCs(float fTemp)
{
    double dCs = 0.0;

    dCs = (fTemp - 32) * 5 / 9;

    return dCs;
}
    

///////////////////////////////////////////////////
//
//  Entry point of the application
//
///////////////////////////////////////////////////
int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter Temperature in Fahrenheit : \n");
    scanf("%f",&fValue);

    dRet = FhtoCs(fValue);
    printf("Temperature in Celsius : %lf\n", dRet);

    return EXIT_SUCCESS;
}
  