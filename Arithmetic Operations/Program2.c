#include<stdio.h>


int Addition(int iNo1,int iNo2)
{

	int iSum= 0;
	
	iSum = iNo1 + iNo2;

	return iSum;

	
}


int main()

{
	int iValue1 = 0;
	int iValue2= 0;
	int iRet= 0;

	printf("Enter first operator:\n ");
	scanf("%d",&iValue1);

	printf("Enter Second operator:\n ");
	scanf("%d",&iValue2);

	iRet= Addition(iValue1,iValue2);
	printf("Addition Of %d and %d is %d\n",iValue1,iValue2,iRet);

	printf("******************End Of program******************\n");

return 0;


}
