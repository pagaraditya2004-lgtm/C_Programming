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
        if(i %  2 != 0)
        {
            for(j = 1; j <= iCol; j++)
            {
                printf("%d\t",j);
            }
        }
        else
        {
            for(j = -1; j >= -iCol; j--)
            {
                printf("%d\t",j);
            }
        }
        
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

    

