#include <stdio.h>

int main()
{
	const float alv = 0.24;
	float hinta, kokohinta, vero;
	
	printf("Anna hinta (alviton):");
	scanf("%f", &hinta);
	
	vero = alv * hinta;
	kokohinta = hinta + vero;
	
	printf("Tuotteen hinta ilman alvia on %.2f euroa. \n Tuotteen alv on %.2f euroa. \n Tuotteen kokonaishinta alvilla on %.2f euroa.", hinta, vero, kokohinta);
	
	getch();
	return 0;
}
