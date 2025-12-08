#include <stdio.h>
#define SPHERE_CONSTANT (4.0f/3.0f)
#define PI 3.14159f

int main(void) {
    float radius = 10.0f;
    float volume = SPHERE_CONSTANT * PI * (radius * radius * radius);

    printf("The volume of a sphere with a radius of 10 is %.2f",volume);
}
