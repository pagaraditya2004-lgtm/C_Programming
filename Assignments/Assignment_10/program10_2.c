#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////
//
// Function Name : RectArea
// Description : Calculate area of a rectangle
// Input : Float, Float
// Output : Double
// Author : Aditya Vitthal Pagar
// Date : 02/11/2026
//
////////////////////////////////////////////////////////////
double RectArea(float fwidth, float fheight)
{
    double dArea = 0.0;

    dArea = fwidth * fheight;

    return dArea;
}
    

///////////////////////////////////////////////////
//
//  Entry point of the application
//
///////////////////////////////////////////////////
int main()
{
    float fValue1 = 0.0, fValue2 = 0.0;
    double dArea = 0.0;

    printf("Enter Width and Height : \n");
    scanf("%f %f",&fValue1, &fValue2);

    dArea = RectArea(fValue1, fValue2);
    printf("Rectangle Area : %lf\n", dArea);

    return EXIT_SUCCESS;
}
  