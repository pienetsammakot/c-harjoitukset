#include <stdio.h>
#define PI 3.1415

int main()
{
	float ala, sade;

    printf("Anna ympyran sade:\n");
    scanf("%f", &sade);

    ala = PI * sade * sade;

    printf("Ympyran pinta-ala on %.2f\n", ala);

    getch();
    return 0;
}
