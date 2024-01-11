#include <stdio.h>
#include <string.h>

int main()
{
  char text[] = "muitos testes";
  char text2[10] = "teste";

  printf("%d\n", strlen(text));
  printf("%d\n", strlen(text2));
  strcat(text2, "s");
  printf("%d\n", strlen(text2));
  strcpy(text2, "a");
  printf("%d\n", strlen(text2));

  char text3[10];
  sprintf(text3, "%d\n", 888);
  printf("\nText: %s", text3);
}