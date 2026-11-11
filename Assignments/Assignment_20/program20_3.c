#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////
//
// Function Name : Pattern
// Description : Prints a pattern of characters in a grid
// Input : Integer
// Output : None
// Author : Aditya Vitthal Pagar
// Date : 10/11/2026
//
////////////////////////////////////////////////////////////
void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;

    for(i = 1 ; i <= iRow; i++)
    {
        for(j = 1 ; j <= iCol; j++)
        {
            if((i + j) == (iRow + 1) || (i ==1 || i == iRow || j == 1 || j == iCol))
            {
                printf("*\t");
            }
            else
            {
                printf(" \t");
            }
        }
        printf("\n");
        printf("\n");
    }

}
    

///////////////////////////////////////////////////
//
//  Entry point of the application
//
///////////////////////////////////////////////////
int main()
{
    int iValue = 0, iValue2 = 0;

    printf("Enter number of rows and columns : \n");
    scanf("%d%d",&iValue,&iValue2);

    Pattern(iValue, iValue2);

    return EXIT_SUCCESS;
}

    

