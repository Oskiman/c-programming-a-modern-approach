/* Chapter 2 Programming Projects 3
 * Modify Project 2 so that it prompts the user to
 * enter the radius of the sphere */

#include <stdio.h>

int main(void)
{
    float radius_in_metres = 0.0f;
    printf("Enter the radius: ");
    scanf("%f", &radius_in_metres);
    float volume_of_sphere = 0.0f;
    const float pi = 3.14f;
    volume_of_sphere = (((4.0f / 3.0f) * pi) * radius_in_metres * radius_in_metres * radius_in_metres);
    printf("The volume of a sphere with a radius of %f is %.2f\n", radius_in_metres, volume_of_sphere);
	
    return 0;
}
