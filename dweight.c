/*
 * Name: dweight.c
 * Purpose: Computes the dimensional weight of a box
 * Author: Raymag
 */

#include <stdio.h>

#define INCHES_PER_POUND 166
#define INCHES_PER_POUND_OFFSET (INCHES_PER_POUND - 1)

int main(void)
{
  int height, width, length, volume, weight;

  printf("Enter height of the box: ");
  scanf("%d", &height);
  printf("Enter width of the box: ");
  scanf("%d", &width);
  printf("Enter length of the box: ");
  scanf("%d", &length);

  volume = height * width * length;
  // since int/int, weight will be assigned a truncated value.
  // Hence, +165 to ensure the value is rounded up.
  weight = (volume + INCHES_PER_POUND_OFFSET) / INCHES_PER_POUND;

  printf("Volume (cubic inches): %d\n", volume);
  printf("Dimensional weight (pounds): %d\n", weight);

  return 0;
}