// Computes the volume of a sphere

#include <stdio.h>

#define PI 3.1415

int main(void)
{

  float radius, volume;

  printf("Enter sphere radius (meters): ");
  scanf("%f", &radius);
  // v = 4/3 * PI * r³
  volume = (4.0f / 3.0f) * PI * (radius * radius * radius);

  printf("The volume of a %.1fm radius Sphere is %.1fm³\n", radius, volume);

  return 0;
}