#include <stdio.h>

int primeNumber (int n)
{
  while (n != 0 || n != 1)
  {
    for (int i = 2; i * i < n; i++)
    {
      if (n % i == 0)
      {
        return 0;
      }
      
    }
  }
  return 1;
}

int maxValue (int a[], int n)
{
  int max = a[0];

  for (int i = 1; i < n; i++)
  {
    if (a[i] > max)
    {
      max = a[i];
    }
  }
  return max;
}

int minValue (int a[], int n)
{
  int min = a[0];

  for (int i = 1; i < n; i++)
  {   
      if (a[i] < min)
      {
          min = a[i];
      }
  }
  return min;
}
int main(int argc, char const *argv[])
{
  int a[5];
  int n = 5;
  for (int i = 0; i < n; i++)
  {
    printf("\nEnter array element a[%d] ", i + 1);
    scanf("%d", &a[i]);

    if (!primeNumber(a[i]))
    {
      printf("\nThis is not prime number");
      i--;
    }
  }
  printf("\n====Array====");
  for (int i = 0; i < n; i++)
  {
    printf("\t%d; ", a[i]);
  }

  int max = maxValue(a, n);
  printf("\n%d is the biggest array element", max);
  int min = minValue(a, n);
  printf("\n%d is the smallest array element", min);

  return 0;
}

