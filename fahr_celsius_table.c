#include <stdio.h>
#include <string.h>

void line_printer(int width)
{
  int width_c;

  width_c = 0;
  while (width_c++ <= width)
  {
    printf("-");
  }
}

void print_cell(char str[], int cell_size)
{
  int c_size;
  int diff;

  c_size = strlen(str) + 2;
  diff = cell_size - c_size;
  char fill[diff];
  int c;

  c = 0;
  strcpy(fill, "");
  while (c < diff)
  {
    strcat(fill, " ");
    c++;
  }
  strcat(fill, "|");

  char text[c_size];
  sprintf(text, "| %s%s", str, fill);
  printf(text);
}

int main()
{
  /* print Fahrenheit-Celsius table
 for fahr = 0, 20, ..., 300 */
  int fahr, celsius;
  int lower, upper, step;

  int cell_width;
  char cell_text[cell_width];

  lower = 0;
  upper = 300;

  cell_width = 21;
  line_printer(cell_width);
  printf("\n");

  sprintf(cell_text, "%s", "Fahr");
  print_cell(cell_text, 10);
  sprintf(cell_text, "%s", "Celsius");
  print_cell(cell_text, 10);
  printf("\n");
  line_printer(cell_width);
  printf("\n");

  fahr = lower;
  step = 20;
  while (fahr <= upper)
  {
    celsius = (5 * (fahr - 32)) / 9;
    sprintf(cell_text, "%d", fahr);
    print_cell(cell_text, 10);
    sprintf(cell_text, "%d", celsius);
    print_cell(cell_text, 10);
    printf("\n");
    fahr += step;
  }
  line_printer(cell_width);
  printf("\n\n");

  line_printer(cell_width);
  printf("\n");

  sprintf(cell_text, "%s", "Celsius");
  print_cell(cell_text, 10);
  sprintf(cell_text, "%s", "Fahr");
  print_cell(cell_text, 10);
  printf("\n");
  line_printer(cell_width);
  printf("\n");

  celsius = lower;
  step = 20;
  while (celsius <= upper)
  {
    fahr = (celsius * 9) / 5 + 32;
    sprintf(cell_text, "%d", celsius);
    print_cell(cell_text, 10);

    sprintf(cell_text, "%d", fahr);
    print_cell(cell_text, 10);
    printf("\n");
    celsius += step;
  }
}