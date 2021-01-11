#include<stdio.h>

char CheckAlpha(char);

void main()

{
	char cChar = '\0';
	printf("Please enter any Alphabet\n");
	scanf("%c",&cChar);
	CheckAlpha(cChar);

	printf("******End of Program******\n");
	

}


char CheckAlpha(char fcChar1)
{
	
	if(fcChar1==('a' || 'e' || 'i' || 'o' || 'u') || ('A' || 'E' || 'I' || 'O' || 'U'))
	{

		printf("%c is vowel\n",fcChar1);
	}

	else 

	{
		printf("false\n");	
	}
}
