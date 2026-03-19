#include <stdio.h>

int main() {
    float base1, base2, height, area;

    printf("Enter the lengths of the two parallel bases: ");
    scanf("%f %f", &base1, &base2);

    printf("Enter the height of the trapezium: ");
    scanf("%f", &height);

    area = 0.5 * (base1 + base2) * height;

    printf("The area of the trapezium is: %.2f\n", area);

    return 0;
}
