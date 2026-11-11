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
void Pattern(int iNo)
{
    int i = 0;

    for(i = 1 ; i <= iNo; i++)
    {
        printf("%d\t*\t#\t",i);
    }
    printf("\n");

}
    

///////////////////////////////////////////////////
//
//  Entry point of the application
//
///////////////////////////////////////////////////
int main()
{
    int iValue = 0;

    printf("Enter number of elements : \n");
    scanf("%d",&iValue);

    Pattern(iValue);

    return EXIT_SUCCESS;
}

    

