
#include <stdio.h>

int main()
{
  float liuku1 = 150.123456;
  float liuku2 = 123.456789;
  char text[100] = {"Hojo hojo kuis menee?"};

  printf("[%7f]\n", liuku1);
  printf("[%15f]\n", liuku2);
  printf("[%9s]\n", text);
  printf("[%21s]\n", text);
  printf("[%30s]\n", text);
  
  getch();
  return 0;
}
