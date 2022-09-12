#include <stdio.h>
int esimerkki();

int main()
{
	printf("Kolmen vastuksen rinnankytkennan kokonaisarvon laskeminen \n");
	
	esimerkki();
		
	getch();
	return 0;
}

int esimerkki()
{
	float vastus1, vastus2, vastus3;
	float tulos = 0;
	
	printf("Anna eka vastus:\n");
	scanf("%f", &vastus1);
	
	printf("Anna toinen vastus: \n");
	scanf("%f", &vastus2);
	
	printf("Anna kolmas vastus: \n");
	scanf("%f", &vastus3);
	
	tulos = 1 / ((1 / vastus1) + (1 / vastus2) + (1 / vastus3));
	
	printf("Rinnankytkennan arvo on %.2f", tulos);
}
