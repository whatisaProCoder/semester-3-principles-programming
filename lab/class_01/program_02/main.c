#include <math.h>
#include <stdio.h>

void getRoots(int a, int b, int c) {
    int D = sqrt(b * b - 4 * a * c);
    if (D >= 0) {
        int x1 = (-b + D) / (2 * a);
        int x2 = (-b - D) / (2 * a);
        printf("Roots: %d, %d", x1, x2);
    } else {
        printf("Real roots don't exist for this equation.");
    }
}

int main() {
    int a, b, c;
    printf("For a quadratic equation: ax^2 + bx + c = 0,\n");
    printf("Give the value of \'a\' : ");
    scanf("%d", &a);
    printf("Give the value of \'b\' : ");
    scanf("%d", &b);
    printf("Give the value of \'c\' : ");
    scanf("%d", &c);

    getRoots(a, b, c);
}
