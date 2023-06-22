#include <stdio.h>

int maxElement (int a[10], int n)
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

int minElement (int a[10], int n)
{
  int min = a[0];
  for (int i = 1; i < n; i++)
  {
    if (min < a[i])
    {
      min = a[i];
    }
    
  }
  return min;
}

int countElement (int a[10], int n, int check)
{
  int count = 0;
  for (int i = 0; i < n; i++)
  {
    if (a[i] == check)
    {
      count++;
    }
    
  }
  return count;
} 

int total (int a[10], int n)
{
  int total = 0;
  int b = maxElement(a, n);
  int c = minElement(a, n);
  total = b + c;
  printf("\nThe total of founded numbers: %d", total);
  return 0;
}

int average (int a[10], int n)
{
  int avg = 0;
  int b = maxElement(a, n);
  int c = minElement(a, n);
  avg = (b + c) / 2;
  printf("\nThe average of founded numbers: %d", avg);
  return 0;
}

void maxCount (int a[10], int n)
{
  int maxValue = maxElement(a, n);
  int countMax = countElement(a, n, maxValue);
  printf("\nThe biggest number in array is %d and appears %d times.");
}

void minCount (int a[10], int n)
{
  int minValue = minElement(a, n);
  int countMin = countElement(a, n, minValue);
  printf("\nThe smallest number in array is %d and appears %d times.");
}

int main(int argc, char const *argv[])
{
  int n = 10;
  int a[10];
  
  for (int i = 0; i < 10; i++)
  {
    printf("\nEnter array element a[%d]: ", i + 1);
    scanf("%d", a[i]);
  }
  
  maxCount(a, n);
  minCount(a, n);
  total(a, n);
  average(a, n);
  return 0;
}
