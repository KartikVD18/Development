//Program to print 5 to 1 numbers on screen.

#include<stdio.h>

void Display()
{
	int iCnt = 0;
	
	for(iCnt=iNo;iCnt>=1;iCnt--)
	{
		printf("%d\t",iCnt);
	}
}

int main()
{
	Display();
	
	return 0;
}