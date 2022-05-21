//Accept one number and check whether it is divisible by 5 or not

typedef int BOOL;
#define TRUE 1
#define FALSE 0

///////////////////////////////////////////////////////////////////
//
//Function Name: Check
//Description:	 Accept one number and check whether it is divisible by 5 or not
//Input:		 Integar
//Output:		 Integar
//Date:			 20/04/2022
//Author:		 Kartik Vithhal Dhole
//
//////////////////////////////////////////////////////////////////

BOOL Check(int iNo)
{
	if((iNo%5)==0)
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}	

////////////////////////////////////////////////////////////////////
// Accept one number and check whether it is divisible by 5 or not
////////////////////////////////////////////////////////////////////

int main()
{
	int iValue = 0;
	BOOL bRet = FALSE;
	
	printf("Enter Number");
	scanf("%d",&iValue);
	
	bRet = Check(iValue);
	
	if(bRet == TRUE)
	{
		printf("Divisible by 5");
	}
	else
	{
		printf("Not Divisible by 5");
	}
	
	return 0;
}


///////////////////////////////////////////////////////////////////
//
//Input:  25
//Output: 5
//		  
///////////////////////////////////////////////////////////////////
