#include <stdio.h>

int main()
{
	float R1, R2, R3, R4, U1, U2, vastus, virta;
	
	printf("Anna 3 rinnan kytkettyjen vastusten arvot:\n");
	scanf("%f %f %f", &R1, &R2, &R3);
	printf("\nAnna 1 sarjaan kytketyn vastuksen arvo:\n");
	scanf("%f", &R4);
	printf("\nAnna 2 jannitteen arvot:\n");
	scanf("%f %f", &U1, &U2);
	
	vastus = (1 / ((1 / R1) + (1 / R2) + (1 / R3))) + R4;
	virta = (U1 + U2) / vastus;
	
	printf("Virran teho on %.2f", virta);
	
	getch();
	return 0;
}
