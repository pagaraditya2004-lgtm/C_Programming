#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////
//
// Function Name : CheckVotingEligibility
// Description : It is used to check Voting Eligibility
// Input : Int
// Output : None(print on console)
// Author : Aditya Vitthal Pagar
// Date : 22/10/2026
//
////////////////////////////////////////////////////////////
void CheckVotingEligibility(int iNo)
{
    if((iNo >=  18))
    {
        printf("Eligible for Voting \n");
    }
    else if(iNo < 18 && iNo >0)
    {
        printf("Not Eligible for Voting \n");
    }
    else
    {
        printf("Invalid Age");
    }
}

///////////////////////////////////////////////////
//
//  Entry point of the application
//
///////////////////////////////////////////////////
int main()
{
    int iAge = 0;

    printf("Enter your Age : \n");
    scanf("%d",&iAge);

    CheckVotingEligibility(iAge);

    return EXIT_SUCCESS;
}