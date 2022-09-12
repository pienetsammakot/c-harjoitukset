#include <stdio.h>

int main()
{
  int x = 10;

  do
  {
    printf("%d\n", x--);
  }
  while(x >= 1);
  getch();
  return 0;
}
