# include<stdio.h>

////////////////////////////////////////////////////////////
//
// Function Name : DisplayFactor
// Description : It is used to display even factors of a number
// Input : Int
// Output : None (prints on console)
// Author : Aditya Vitthal Pagar
// Date : 22/10/2026
//
////////////////////////////////////////////////////////////
void DisplayFactor(int iNo)
{
    int iCnt = 0;
    
    if(iNo < 0)
    {
        iNo = -(iNo);
    }

    for(iCnt = 1; iCnt <= iNo / 2; iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            if((iCnt % 2) == 0)
            {
                printf("%d \n",iCnt);
            }   
        }
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

    DisplayFactor(iValue);

    return 0;
}