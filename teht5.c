#include <stdio.h>

int main()
{
	float ossi[] = {1.2, 2.2, 3.3, 3.4, 4.5};
	char nimi[80];
    float keskiarvo = (ossi[0] + ossi[1] + ossi[2] + ossi[3] + ossi[4]) / 5;
	
	printf("Anna nimesi: \n");
	scanf("%s", &nimi);
	
	printf("\n");
	printf("Luvut: \n %.1f \n %.1f \n %.1f \n %.1f \n %.1f \n", ossi[0], ossi[1], ossi[2], ossi[3], ossi[4]);
	
	printf("\nNimesi on %s ja lukujen keskiarvo on %.2f.", nimi, keskiarvo);
	
	getch();
	return 0;
}
