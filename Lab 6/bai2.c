#include <stdio.h>

void copyArray(int a[5], int n, float b[10]){
    for (int i = 0; i < n; i++)
    {
        b[i] = a[i];
    }
 }

int main(int argc, char const *argv[])
{
  int n = 5;
  int a[5];
  float b[10] = {0};

  for (int i = 0; i < 5; i++)
  {
    printf("\nEnter array element a[%d]: ", i + 1);
    scanf("%d", a[i]);
  }
  
  copyArray(a, n, b);
  printf("\n");
  for (int i = 0; i < 10; i++)
  {
    printf("%.1f", b[i]);
  }
  return 0;
}
