// Checks a number for repeated digits

#include <stdio.h>
#include <stdbool.h>

int main(void)
{
  bool digits_seen[10] = {false};
  int digit;
  long n;

  printf("Enter a number: ");
  scanf("%ld", &n);

  while (n > 0)
  {
    digit = n % 10;
    if (digits_seen[digit])
      break;
    digits_seen[digit] = true;
    n /= 10;
  }

  if (n > 0)
    printf("Repeated digit\n");
  else
    printf("No repeated digit\n");

  return 0;
}