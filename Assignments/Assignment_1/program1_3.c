#include<stdio.h>

///////////////////////////////////////////////////
//
// Function Name : Display
// Description : Prints 5 to 1 numbers
// Input : None
// Output : None (prints to the console)
// Author : Aditya Vitthal Pagar
// Date : 22/10/2026
//
///////////////////////////////////////////////////
void Display()
{
    int i = 0;
    
    i = 5;

    while (i>=1)
    {
        printf("%d\n",i);
        i--;
    }
    
}

///////////////////////////////////////////////////
//
//  Entry point of the application
//
///////////////////////////////////////////////////
int main()
{
    Display();

    return 0;
}