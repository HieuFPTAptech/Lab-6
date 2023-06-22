#include <stdio.h>

int main(int argc, char const *argv[])
{
  char s[11];
  int i;
  for (i = 0; i < 10; i++)
  {
      s[i] = getchar();
      if (s[i] == '\n')
      {
          break;
      }
  }
  s[i] = '\0';
  printf("\nYour Array: %s", s);
  printf("\ncharacter and ASCII\n");
  for (int j = 0; j < i; j++) {
      printf("\n%c: %d", s[j], s[j]);
  }

  return 0;
}
