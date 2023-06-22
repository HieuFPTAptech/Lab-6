#include <stdio.h>

int main(int argc, char const *argv[])
{
  char ten[30];

  for (int i = 0; i < 5; i++)
  {
    fflush(stdin);
    printf("\nEnter student number %d:", i + 1);
    scanf("%s", ten[i]);
  }
  for (int i = 0; i < 5; i++)
  {
    printf("\nStudent number %d:%s", i + 1, ten[i]);
  }
  
  return 0;
}
