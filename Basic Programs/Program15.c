#include<stdio.h>

int ChkNum(int);

int main()

{
	int iValue = 0;
	
	printf("Please Enter Any Number : \n");
	scanf("%d",&iValue);

	ChkNum(iValue);

	printf("*********End Of Program*********\n");
	

return 0;
}

int ChkNum(int fiNum1)
{
	if(fiNum1%2==0)
	
	{
		printf("%d is Even number\n", fiNum1);
	}

	else
	{
		printf("%d is Odd number\n",fiNum1);	
	}
}
