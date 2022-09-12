#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//lottokone

int main()
{
	int lotto[41]={0};
	int i=0;
	int x=0;
	
	srand (time(NULL));
	
	for(i=1; i<=7; i++) //silmukalla arvotaan 7 numeroa
	{
		do {
			x = rand() % 40 + 1; //arvotaan luku ja siirretään muuttujaan x
		}
		while (lotto[x]!=0); //jos luku on jo arvottu
		lotto[x]=1; //kun löytyy luku jota ei ole vielä arvottu sijoitetaan taulukkoon 1
	}
	
	printf("Lottokoneen oikeat numerot ovat seuraavat:\n");
	for(i=1; i<=40; i++)
	{
		if(lotto[i]==1)
		{
			printf("%d \n", i);
		}
	}
	
	do {
		x = rand() % 40 + 1;
	}
	while (lotto[x]!=0 && lotto[x]!=1);
	lotto[x]=2;
	
	printf("Lottokoneen lisanumero on: \n");
	printf("%d", x);
}
