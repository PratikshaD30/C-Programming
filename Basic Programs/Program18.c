#include<stdio.h>

char Alphabet(char);

int main()

{
	char cLetter = '\0';

	printf("Please enter any Alphabet\n");
	scanf("%c",&cLetter);
	
	Alphabet(cLetter);
	printf("******End of Program******\n");
}

char Alphabet(char cAlpha)
{

	
	if((cAlpha>='a') && (cAlpha<='z'))
	{

	
	 printf("Given Alphabet in uppercase is : %c\n",cAlpha -32);
	
	}
	
	else if((cAlpha>='A') && (cAlpha<='Z'))

	{
		
		printf("Given Alphabet in lowercase is : %c\n",cAlpha +32);
	}

	else

	{
		printf("Please enter valid character\n");	
	}
	
	 

}
