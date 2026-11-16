#include <stdio.h>

#define PI 3.141592653589793

int main() {
    double radius, height, volume, surface_area;

    printf("Enter the radius of the cylinder: ");
    scanf("%lf", &radius);

    printf("Enter the height of the cylinder: ");
    scanf("%lf", &height);

    volume = PI * radius * radius * height;
    surface_area = (2 * PI * radius * radius) + (2 * PI * radius * height);

    printf("Volume of the cylinder = %.2f\n", volume);
    printf("Surface Area of the cylinder = %.2f\n", surface_area);

    return 0;
}
