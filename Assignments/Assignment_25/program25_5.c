#include<stdio.h>
#include<stdlib.h>


////////////////////////////////////////////////////////////
//
// Function Name : ChkSmall
// Description : Checks if a character is a small letter
// Input : Character
// Output : BOOL
// Author : Aditya Vitthal Pagar
// Date : 20/11/2026
//
////////////////////////////////////////////////////////////
void DisplaySchedule(char ch)
{
    if(ch >= 'a' && ch <= 'z')
    {
        ch = ch - 32;
    }
    
    if(ch == 'A')
    {
        printf("Your Exam is at 7 AM\n");
    }
    else if(ch == 'B')
    {
        printf("Your Exam is at 8:30 AM\n");
    }
    else if(ch == 'C')
    {
        printf("Your Exam is at 9:20 AM\n");
    }
    else if(ch == 'D')
    {
        printf("Your Exam is at 10:30 AM\n");
    }
    else
    {
        printf("Invalid Character\n");
    }
    
}


///////////////////////////////////////////////////
//
//  Entry point of the application
//
///////////////////////////////////////////////////
int main()
{
    char cValue = '\0';

    printf("Enter character : \n");
    scanf(" %c",&cValue);

    DisplaySchedule(cValue);   
   
    return EXIT_SUCCESS;
}

    

