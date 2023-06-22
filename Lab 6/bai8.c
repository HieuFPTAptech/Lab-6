#include <stdio.h>

int main(int argc, char const *argv[])
{
  int n = 5;
  int m = 6;
  float a[n][m];

  //Nhập điểm cho ma trận
  for (int i = 0; i < n; i++)
  {
      printf("\nEnter the student %d mark", i + 1);
      for (int j = 0; j < m; j++)
      {
          printf("\nSubject %d: ", j + 1);
          scanf("%f", &a[i][j]);
      }
  }

  for (int j = 0; j < m; j++)
  {
      printf("\n Subject %d ", j + 1);
  }
  printf("\n");

  for (int i = 0; i < n; i++)
  {
      printf("\nStudent %-6d", i + 1);
      for (int j = 0; j < m; j++)
      {
          printf(" %-9.2f ", a[i][j]);
      }
      printf("\n");
  }
    
  for (int i = 0; i < n; i++)
  {
    float sum = 0.0;
    for (int j = 0; j < m; j++)
    {
      sum += a[i][j];
    }
    float avg = sum / m;
    printf("\nStudent %d average score: %.2f\n", i + 1, avg);
  }
  return 0;
}
