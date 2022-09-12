#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int lotto[70]={0};
	int i=0;
	int x=0;
	int y=0;
	int z=0;
	
	srand (time(NULL));
	
	for(i=1; i<=9; i++) 
	{
		do {
			x = rand() % 70 + 1;
		}
		while (lotto[x]!=0); 
		lotto[x]=1; 
	}
	
	for(i=1; i<=2; i++)
	{
		do {
			y = rand() % 70 + 1;
		}
		while (lotto[y]!=0 && lotto[y]!=1);
		lotto[y]=2;
	}
	
	do {
		z = rand() % 70 + 1;
	}
	while (lotto[z]==1);
	lotto[z]=1;
			
	printf("Eurolottokoneen oikeat numerot ovat seuraavat:\n");
	for(i=1; i<=70; i++)
	{
		if(lotto[i]==1)
		{
			printf("%d \n", i);
		}
	}
	
	printf("Bonusnumerot ovat seuraavat:\n");
	for(i=1; i<=70; i++)
	{
		if(lotto[i]==2)
		{
			printf("%d\n", i);
		}
	}
	
	printf("Onnennumero on seuraava:\n");
	printf("%d", z);
}
