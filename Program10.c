#include<stdio.h>

int main()

{
	char cLetter1;
	char cLetter2;
	char cLetter3;
	int iSum = 0;

	printf("Enter First Character : \n");
	scanf(" %c",&cLetter1);

	printf("Enter Second Character : \n");
	scanf(" %c",&cLetter2);

	printf("Enter Third Character : \n");
	scanf(" %c",&cLetter3);

	printf("%u\n%u\n%u\n",cLetter1,cLetter2,cLetter3);

	iSum = cLetter1+cLetter2+cLetter3;

	printf("Addition Of Their Ascci Numbers Is : %d\n",iSum);

	printf("**************************************\n");


return 0;
}











