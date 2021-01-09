#include<stdio.h>


int main()

{
	char cAscciLetter = 'A';
	
	for(cAscciLetter='A'; cAscciLetter<='Z'; cAscciLetter++)
	{
		printf("%c's Ascci value is %d and Address Is %d\n",cAscciLetter,cAscciLetter,&cAscciLetter);
	}
printf("****End Of Program****\n");
printf("\n");

return 0;

}
