# include<stdio.h>

////////////////////////////////////////////////////////////
//
// Function Name : PrintEven
// Description : It is used to display first n Even numbers
// Input : Int
// Output : None (prints on console)
// Author : Aditya Vitthal Pagar
// Date : 22/10/2026
//
////////////////////////////////////////////////////////////
void PrintEven(int iNo)
{
    int iCnt = 0;
    
    if(iNo <= 0)
    {
        return;
    }

    for(iCnt = 1; iCnt <= iNo * 2; iCnt++)
    {
        if((iCnt % 2) == 0)
        {
            printf("%d \n",iCnt);
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

    printf("Enter Number : ");
    scanf("%d",&iValue);

    PrintEven(iValue);

    return 0;
}