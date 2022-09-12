#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int lotto[70]={0};
	int i, x;
	int ln=0;
	printf("\nEurolotto generator version 1.0 made by megamekaanikko J");
	
	srand(time(NULL));
	
	for(i=1; i<=9; i++)
	{
		do
		{
			x = rand() % 70 + 1;
		}
		while (lotto[x]!=0);
		lotto[x]=1;
	}
	
	for(i=1; i<=2; i++)
	{
		do
		{
			x = rand() % 70 + 1;
		}
		while (lotto[x]!=0);
		lotto[x]=2;
	}
	
	do
	{
		x = rand() % 70 + 1;
	}
	while (lotto[x]!=0 && lotto[x]!=2);
	lotto[x]=1;
	ln=x;
	
	printf("\nEurolotto numbers are:\n");
	for(i=1; i<=70; i++)
	{
		if(lotto[i]==1)
		{
			printf("%d \n", i);
		}
	}
	
	printf("Bonus numbers are:\n");
	for(i=1; i<=70; i++)
	{
		if(lotto[i]==2)
		{
			printf("%d \n", i);
		}
	}
	
	printf("Lucky number is:\n");
	printf("%d", ln);
}
