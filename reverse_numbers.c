// Reverse an array of numbers

#include <stdio.h>
#define LEN 5

int main(void)
{
  int numbers[LEN], i;

  printf("Enter a list of %d numbers: ", LEN);
  for (i = 0; i < LEN; i++)
    scanf("%d", &numbers[i]);

  printf("In reverse order: ");
  for (i = LEN - 1; i >= 0; i--)
    printf("%d ", numbers[i]);
  printf("\n");

  return 0;
}