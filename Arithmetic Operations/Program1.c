#include<stdio.h>

int ArithmeticOperations();


int main()

{
	int iValue1 = 0;
	int iValue2 = 0;
	

	printf("Please Enter first operator:\n ");
	scanf("%d",&iValue1);

	printf("Please Enter second operator:\n ");
	scanf("%d",&iValue2);

	ArithmeticOperations(iValue1,iValue2);

return 0;


}

int ArithmeticOperations(int fiValue1,int fiValue2)
{

	int fiResult= 0;
	char cOperator= '\0';
	char cAns='\0';

	printf("Which Operator do you want to do : (+,-,*,/)\n");
	scanf("%s",&cOperator);

	if(cOperator=='+')
	{

		 fiResult= fiValue1 + fiValue2;

		printf("Addition of two operands is %d\n",fiResult);

	}



	 else if(cOperator=='-')
	{
		
		 fiResult= fiValue2 - fiValue1;
		printf("Substraction of two operands is %d\n",fiResult);
	
	}	
	
	else if(cOperator=='*')
	{

		fiResult= fiValue1 * fiValue2;
		
		printf("Multiplication of two operands is %d\n",fiResult);
	}

	else if(cOperator=='/')
	{

		fiResult= fiValue1 / fiValue2;
	
		printf("Division of two operands is %d\n",fiResult);
	
	}

	else
	{

		printf("Enter Valid Operator\n");
	}
	


	printf("Do you want to continue?\n");
	scanf("%s",&cAns);

	if((cAns=='Y') ||  (cAns=='y'))

	{
	        
		main();
	}


	else if((cAns=='N') || (cAns=='n'))


	{
		printf("End of program\n");
	}

	else

	{
		printf("Please Enter valid Input\n");
	}


}
