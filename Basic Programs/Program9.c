#include<stdio.h>

int main()

{
	Addition();
	Subtraction();
	Multiplication();
	Division();



return 0;
}
void Addition()
{
	int iNum1 = 0;
	int iNum2 = 0;
	int iSum = 0;
	
	printf("Enter First Value for Addition : \n");
	scanf("%d",&iNum1);

	printf("Enter Second Value for Addition : \n");
	scanf("%d",&iNum2);

	iSum = iNum1 + iNum2;

	printf("Addition Of Two Number Is : %d\n",iSum);
	printf("*************************************\n");
}


void Subtraction()
{
	int iValue1 = 0;
	int iValue2 = 0;
	int iSub = 0;

	printf("Enter First Value for Subtraction : \n");
	scanf("%d",&iValue1);

	printf("Enter Second Value for Subtraction : \n");
	scanf("%d",&iValue2);

	iSub = iValue2-iValue1;
	
	printf("Subtraction Of Two Number Is : %d\n",iSub);
	printf("***************************************\n");



}



void Multiplication()
{
	int iMul1 = 0;
	int iMul2 = 0;
	int iMul3 = 0;

	printf("Enter First Value for Multiplication : \n");
	scanf("%d",&iMul1);

	printf("Enter Second Value for Multiplication : \n");
	scanf("%d",&iMul2);

	iMul3 = iMul1*iMul2;
	
	printf("Multiplication Of Two Number Is : %d\n",iMul3);
	printf("***************************************\n");

}



void Division()
{
	float fDiv1 = 0.0;
	float fDiv2 = 0.0;
	float fDiv3 = 0.0;

	printf("Enter First Value for Division : \n");
	scanf("%f",&fDiv1);

	printf("Enter Second Value for Division : \n");
	scanf("%f",&fDiv2);

	fDiv3= fDiv1/fDiv2;
	
	printf("Division Of Two Number Is : %f\n",fDiv3);
	printf("***************************************\n");

}



