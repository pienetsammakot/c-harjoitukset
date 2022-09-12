#include <stdio.h>

int main()
{
  int counter = 20;

  while (counter >= 1)
  {
    printf("Iterointi: %d\n", counter);
    counter --;
  }
  getch();
  return 0;
}
