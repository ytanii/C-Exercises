#include <stdio.h>
#define SPHERE_CONSTANT (4.0f/3.0f)
#define PI 3.14159f

int main(void) {
    float radius;

    printf("Enter the radius of the sphere: ");
    scanf("%f",&radius);

    float volume = SPHERE_CONSTANT * PI * (radius * radius * radius);

    printf("The volume of a sphere with a radius of %.2f is %.2f",radius,volume);
}
