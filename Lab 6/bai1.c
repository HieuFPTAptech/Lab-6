#include <stdio.h>

int main(int argc, char const *argv[])
{
  int n = 10;
  int a[] = {0,1,2,3,4,5,6,7,8,9};

  for (int i = 0; i < n; i++)
  {
    if (a[i] % 2 == 0)
    {
      printf("\n%d", a[i]);
    }
    
  }
  return 0;
}


//Input array from keyboard
/*
int main(int argc, char const *argv[])
{
  int n = 10;
  int a[10];

  for (int i = 0; i < n; i++)
  {
    printf("\nEnter array element a[%d]: ", i + 1);
    scanf("%d", a[i]);
  }

  for (int i = 0; i < n; i++)
  {
    if (a[i] % 2 == 0)
    {
      printf("\nEven numbers in array");
      printf("\n%d", a[i]);
    }
    
  }
  
  
  return 0;
}
*/