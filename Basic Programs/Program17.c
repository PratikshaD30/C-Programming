#include<stdio.h>

int EvenNum(int);

int main()

{
	int iValue = 0;

	EvenNum(iValue);
	printf("********End Of Program********\n");



}

int EvenNum(int iNum1)
{
	

	for(iNum1=1; iNum1<=20; iNum1++)
	{
		if(iNum1%2==0)
		printf("%d ",iNum1);
	}
printf("\n");

}
