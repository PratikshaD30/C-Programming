#include<stdio.h>
int Checknum(int,int);

int main()
{
	
	int iVal1=0;
	int iVal2=0;

	printf("Please Enter first operand\n");
	scanf("%d",&iVal1);

	printf("Please Enter second operand\n");
	scanf("%d",&iVal2);

	Checknum(iVal1,iVal2)
  printf("********End Of Program*********\n");


}

int Checknum(int fiNum1, int fiNum2)
{
	if(fiNum1==fiNum2)
	{
		printf("Equal\n");
	}

	else if(fiNum1<=fiNum2)
	{
		printf("not Equal\n");
	}

	else if(fiNum1<=-fiNum2)
	{
		printf("Not equal\n");	
	}
}
