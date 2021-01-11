#include<stdio.h>

int Rent(int);

int main()

{
	int iRunningInKm = 0;
	printf("Enter Running of car in Km:\n");
	scanf("%d",&iRunningInKm);
	Rent(iRunningInKm);
  printf("*******End Of Program******\n");

}


int Rent(fiDist)
{
	
	int fiRent = 0;
	int fiRent1=0;

	if(fiDist<100)

	{
		
		fiRent = fiDist * 25;
		printf("Rent of car is %d\n",fiRent);
	}
	
	else if(fiDist>100)
	{

		fiRent = (fiDist-100);
		fiRent1 = (fiRent*15)+(100*25);
	        printf("Rent of car is %d\n",fiRent1);
	}	

	else

	{
		printf("Enter Valid input\n");
	}
}



