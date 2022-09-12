#include <stdio.h>
#include <stdlib.h>

int main()
{
	float grammat, unssit;
	
	printf("Anna grammat:\n");
	scanf("%f", &grammat);
	
	unssit = grammat * (1 / 28.35);
	
	printf("Paino unsseina:\n");
	printf("%.2f", unssit);
	
	getch();
	return 0;
}
