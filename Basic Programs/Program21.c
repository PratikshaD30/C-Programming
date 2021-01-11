#include<stdio.h>


int Checknum();

int main()
{

	int ivalue = 0;
	printf("Enter any number:\n");
	scanf("%d",&ivalue);

	Checknum(ivalue);
  printf("******End of Program******\n");
}

int Checknum(int inum)
{
	if(inum>100)
	{ 
		printf("%d is greater than 100",inum);


	}

	else 
	{
		printf("%d is less than 100",inum);
	}

}
