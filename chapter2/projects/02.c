/* Chapter 2 Programming Projects 2
 * Write a program that computes the volume of a sphere with a
 * 10 metre radius, using the formula v = 4/3pir3. Write the fraction
 * 4/3 as 4.0f / 3.0f */

#include <stdio.h>

int main(void)
{
    int radius_in_metres = 10;
    float volume_of_sphere = 0.0f;
    const float pi = 3.14f;
    volume_of_sphere = (((4.0f / 3.0f) * pi) * radius_in_metres * radius_in_metres * radius_in_metres);
    printf("The volume of a sphere with a radius of %d is %.2f\n", radius_in_metres, volume_of_sphere);
	return 0;
}
