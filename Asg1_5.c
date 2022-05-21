// Accept one number from user and print that number of * on screen.

#include<stdio.h>


///////////////////////////////////////////////////////////////////
//
//Function Name: Accept
//Description:	 Accept one number from user and print that number of * on screen
//Input:		 Integar
//Output:		 Symbol
//Date:			 20/04/2022
//Author:		 Kartik Vithhal Dhole
//
//////////////////////////////////////////////////////////////////

void Accept(int iNo)
{
	int iCnt = 0;
	
	for(iCnt=1;iCnt<=5;iCnt++)
	{
		printf("*");
	}
}

////////////////////////////////////////////////////////////////////
// Accept one number from user and print that number of * on screen
////////////////////////////////////////////////////////////////////

int main()
{
	int iValue = 0;
	iValue =5;
	
	Accept(iValue);
	return 0;
}
