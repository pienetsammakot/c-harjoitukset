#include <stdio.h>

int main()
{
	float numerot[3][6];
	
	printf("Anna pisteet: \n");
	scanf("%f", &numerot[0][0]);
	printf("Anna pisteet: \n");
	scanf("%f", &numerot[0][1]);
	printf("Anna pisteet: \n");
	scanf("%f", &numerot[0][2]);
	printf("Anna pisteet: \n");
	scanf("%f", &numerot[0][3]);
	
	printf("Anna pisteet: \n");
	scanf("%f", &numerot[1][0]);
	printf("Anna pisteet: \n");
	scanf("%f", &numerot[1][1]);
	printf("Anna pisteet: \n");
	scanf("%f", &numerot[1][2]);
	printf("Anna pisteet: \n");
	scanf("%f", &numerot[1][3]);
	
	printf("Anna pisteet: \n");
	scanf("%f", &numerot[2][0]);
	printf("Anna pisteet: \n");
	scanf("%f", &numerot[2][1]);
	printf("Anna pisteet: \n");
	scanf("%f", &numerot[2][2]);
	printf("Anna pisteet: \n");
	scanf("%f", &numerot[2][3]);
	
	numerot[0][4] = numerot[0][0] + numerot[0][1] + numerot[0][2] + numerot[0][3];
	numerot[1][4] = numerot[1][0] + numerot[1][1] + numerot[1][2] + numerot[1][3];
	numerot[2][4] = numerot[2][0] + numerot[2][1] + numerot[2][2] + numerot[2][3];
	
	printf("\nOppilaan 1 koepisteet: \n %.1f %.1f %.1f %.1f \n", numerot[0][0], numerot[0][1], 
	        numerot[0][2], numerot[0][3]);
	printf("Oppilaan 1 yhteispisteet:\n %.1f \n", numerot[0][4]);
	printf("Oppilaan 2 koepisteet: \n %.1f %.1f %.1f %.1f \n", numerot[1][0], numerot[1][1], 
	        numerot[1][2], numerot[1][3]);
	printf("Oppilaan 2 yhteispisteet: \n %.1f \n", numerot[1][4]);
	printf("Oppilaan 3 koepisteet: \n %.1f %.1f %.1f %.1f \n", numerot[2][0], numerot[2][1], 
	        numerot[2][2], numerot[2][3]);
	printf("Oppilaan 3 yhteispisteet: \n %.1f", numerot[2][4]);
	
	getch();
	return 0;
}
