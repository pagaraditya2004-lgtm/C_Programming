#include<stdio.h>
#include<stdlib.h>

#define PI 3.14

////////////////////////////////////////////////////////////
//
// Function Name : CircleArea
// Description : Calculate area of a circle
// Input : Float
// Output : Double
// Author : Aditya Vitthal Pagar
// Date : 02/11/2026
//
////////////////////////////////////////////////////////////
double CircleArea(float fRadius)
{
    double dArea = 0.0;

    dArea = PI * fRadius * fRadius;

    return dArea;
}
    

///////////////////////////////////////////////////
//
//  Entry point of the application
//
///////////////////////////////////////////////////
int main()
{
    float fRadius = 0.0;
    double dArea = 0.0;

    printf("Enter Radius : \n");
    scanf("%f",&fRadius);

    dArea = CircleArea(fRadius);
    printf("Circle Area : %lf\n", dArea);

    return EXIT_SUCCESS;
}
  