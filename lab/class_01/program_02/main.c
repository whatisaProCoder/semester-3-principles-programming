#include <math.h>
#include <stdio.h>

void getRoots(double a, double b, double c) {
    double discriminant = b * b - 4 * a * c;

    if (discriminant >= 0) {
        double D = sqrt(discriminant);
        double x1 = (-b + D) / (2 * a);
        double x2 = (-b - D) / (2 * a);
        printf("Roots: %.2f, %.2f", x1, x2);
    } else {
        printf("Real roots don't exist for this equation.");
    }
}

int main() {
    double a, b, c;
    printf("For a quadratic equation: ax^2 + bx + c = 0,\n");
    printf("Give the value of \'a\' : ");
    scanf("%lf", &a);
    printf("Give the value of \'b\' : ");
    scanf("%lf", &b);
    printf("Give the value of \'c\' : ");
    scanf("%lf", &c);

    getRoots(a, b, c);

    return 0;
}
