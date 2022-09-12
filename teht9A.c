#include <stdio.h>
#include <stdlib.h>

int main()
{
	float unssit, grammat;
	
	printf("Anna unssit:\n");
	scanf("%f", &unssit);
	
	grammat = unssit * 28.35;
	
	printf("Paino grammoina:\n");
	printf("%.2f", grammat);
	
	getch();
	return 0;
}
