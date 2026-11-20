#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////
//
// Function Name : DisplayASCII
// Description : Displays ASCII values in different formats
// Input : None
// Output : None
// Author : Aditya Vitthal Pagar
// Date : 20/11/2026
//
////////////////////////////////////////////////////////////
void DisplayASCII()
{
    int i = 0;
    printf("Decimal\tOctal\tHexadecimal\n");
    for(i = 0; i <= 255; i++)
    {
        printf("%d\t%o\t%X\n",i,i,i);
    }
}


///////////////////////////////////////////////////
//
//  Entry point of the application
//
///////////////////////////////////////////////////
int main()
{
    DisplayASCII();

    return EXIT_SUCCESS;
}

    

