// computes minimum bills ($20, $10, $5, and $1 only)
// needed to get to a given dollar value

#include <stdio.h>

int main(void)
{
  int target, b20, b10, b5, b1;

  printf("Enter a dollar amount: ");
  scanf("%d", &target);

  b20 = target / 20;
  target -= b20 * 20;
  b10 = target / 10;
  target -= b10 * 10;
  b5 = target / 5;
  target -= b5 * 5;
  b1 = target;

  printf("$20 biils: %d\n$10 biils: %d\n$5 biils: %d\n$1 biils: %d\n",
         b20, b10, b5, b1, b1);

  return 0;
}