#include <stdio.h>

int main()
{
  int x;

  for (x=100; x>=0; x = x - 10)
    printf("Arvo on: %d\n", x);

  getch();
  return 0;
}
