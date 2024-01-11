// Prints a table of compound interest

#include <stdio.h>

#define NUM_RATES ((int)(sizeof(values) / sizeof(values[0])))
#define INITIAL_BALANCE 100.0

int main(void)
{
  int low_rate, num_years, year, i;
  double values[5];

  printf("Enter the interest rate: ");
  scanf("%d", &low_rate);
  printf("Enter the number of years: ");
  scanf("%d", &num_years);

  printf("\nYears");
  for (i = 0; i < NUM_RATES; i++)
  {
    printf("%6d%%", low_rate + i);
    values[i] = INITIAL_BALANCE;
  }
  printf("\n");

  for (year = 1; year <= num_years; year++)
  {
    printf("%3d\t", year);
    for (i = 0; i < NUM_RATES; i++)
    {
      values[i] *= ((low_rate + i) / 100.0f) + 1;
      printf("%.2lf ", values[i]);
    }
    printf("\n");
  }

  return 0;
}