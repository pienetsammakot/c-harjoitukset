#include <stdio.h>

int main()

{
	int x=1, rivi;
	float lukuja[10];
	float summa = 0;
	float average = 0;
	
	for(rivi = 0; rivi <= 9; rivi++)
	{
		printf("Anna %d. luku:\n", x);
		x++;
		scanf("%f", &lukuja[rivi]);
	}
	
	for(rivi = 0; rivi <= 9; rivi++)
	{
		printf("%.2f \n", lukuja[rivi]);
		summa += lukuja[rivi];
	}
	
	average = summa / 10;
	printf("Keskiarvo = %.2f", average);
	
	getch();
	return 0;
}
