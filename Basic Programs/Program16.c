#include<stdio.h>

int CheckNum(int);

int main()

{
	int iValue1 = 0;
	
	printf("Please Enter any number: \n");
	scanf("%d",&iValue1);

	CheckNum(iValue1);

	printf("*******");

return 0;
}

int CheckNum(int iNum1)
{
	if(iNum1<0)
	{
		printf("%d is Negative Number\n",iNum1);
	}

	else if(iNum1>0)

	{
		printf("%d is Positive number\n",iNum1);
	}
	
	else if(iNum1==0)

	{

		printf("%d is zero\n",iNum1);

	}
	
	else
	{

		printf("Enter valid number\n");
	}

}
