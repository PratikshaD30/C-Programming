#include<stdio.h>


int main()

{
	char cChar;
	char cStartChar;
	char cEndChar;
	
	printf("Enter Starting Character\n");
	scanf(" %c",&cStartChar);

	printf("Enter Ending Character\n");
	scanf(" %c",&cEndChar);

	for(cChar=cStartChar; cChar<=cEndChar; cChar++)

	{
	printf("\n%c",cChar);
	}


printf("****End Of Program****");

return 0;
}


/*#include<stdio.h>
int main()
{
	int iVal=0;
	int iVal1=0;
	int iVal2=0;

	printf("STarting chara\n");
	scanf("%d",&iVal1);

	printf("ENd chara\n");
	scanf("%d",&iVal2);

	for(iVal=iVal1; iVal<=iVal2; iVal++)
	{
		printf("%d\n",iVal);
	}

printf("\n");
return 0;
}*/


