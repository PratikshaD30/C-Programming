#include<stdio.h>

int Display(int);

int main()

{
	int iNum = 0;
	printf("Please enter any operand\n");
	scanf("%d",&iNum);

	Display(iNum);
	printf("*******End Of program******\n");

}

int Display(int fiVal1)
{
	int icnt=0;
	for(icnt=1; icnt<=fiVal1; icnt++)
	{
		printf("$");
	printf("*");
	}

}
