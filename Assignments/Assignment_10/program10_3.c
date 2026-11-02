#include<stdio.h>
#include<stdlib.h>

#define METER 1000

////////////////////////////////////////////////////////////
//
// Function Name : KMtoMeter
// Description : Convert kilometers to meters
// Input : Int
// Output : Int
// Author : Aditya Vitthal Pagar
// Date : 02/11/2026
//
////////////////////////////////////////////////////////////
int KMtoMeter(int iNO)
{
    int iMeter = 0;

    iMeter = iNO * METER;

    return iMeter;
}
    

///////////////////////////////////////////////////
//
//  Entry point of the application
//
///////////////////////////////////////////////////
int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter Distance in Kilometers : \n");
    scanf("%d",&iValue);

    iRet = KMtoMeter(iValue);
    printf("Distance in Meters : %d\n", iRet);

    return EXIT_SUCCESS;
}
  