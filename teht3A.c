#include <stdio.h>

int main()
{
	float sarjak, rinnank;
	float vastus1, vastus2, vastus3;
	
	printf("Anna ensimmainen vastus:\n");
	scanf("%f", &vastus1);
	printf("Anna toinen ja kolmas vastus:\n");
	scanf("%f %f", &vastus2, &vastus3);
	
	sarjak = vastus1 + vastus2 + vastus3;
	rinnank = 1 / ((1 / vastus1) + (1 / vastus2) + (1 / vastus3));
	
	printf("Sarjakytkennan arvo on %.2f\n", sarjak);
	printf("Rinnankytkennan arvo on %.2f", rinnank);
	
	getch();
	return 0;
}
