#include <stdio.h>

int main()
{
	float numerot[3][6];
	char nimi1[50], nimi2[50], nimi3[50];
	
	puts("Opiskelijan nimi:\n");
	gets(nimi1);
	fflush(stdin);
	
	puts("Opiskelijan nimi:\n");
	gets(nimi2);
	fflush(stdin);
	
	puts("Opiskelijan nimi:\n");
	gets(nimi3);
	fflush(stdin);
	
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
	
	printf("\n%sn koepisteet: \n %.1f %.1f %.1f %.1f \n", nimi1, numerot[0][0], numerot[0][1], 
	        numerot[0][2], numerot[0][3]);
	printf("%sn yhteispisteet:\n %.1f \n", nimi1, numerot[0][4]);
	printf("%sn koepisteet: \n %.1f %.1f %.1f %.1f \n", nimi2, numerot[1][0], numerot[1][1], 
	        numerot[1][2], numerot[1][3]);
	printf("%sn yhteispisteet: \n %.1f \n", nimi2, numerot[1][4]);
	printf("%sn koepisteet: \n %.1f %.1f %.1f %.1f \n", nimi3, numerot[2][0], numerot[2][1], 
	        numerot[2][2], numerot[2][3]);
	printf("%s yhteispisteet: \n %.1f", nimi3, numerot[2][4]);
	
	getch();
	return 0;
}
