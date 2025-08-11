#include <math.h>
#include <stdio.h>

int numberOfDigits(int n) {
    int digit = 0;
    while (n > 0) {
        digit++;
        n /= 10;
    }
    return digit;
}

int isArmstrong(int n) {
    int sum, d, digits, temp;

    digits = numberOfDigits(n);
    temp = n;
    sum = 0;

    while (temp > 0) {
        d = temp % 10;
        sum = sum + (int)ceil(pow(d, digits));
        temp /= 10;
    }

    return n == sum;
}

int main() {
    int n;

    printf("- ARMSTRONG NUMBER CHECKER -\n");
    printf("Enter a number : ");
    scanf("%d", &n);

    if (isArmstrong(n)) {
        printf("Yes, %d is a Armstrong number.", n);
    } else {
        printf("No, %d is not a Armstrong number.", n);
    }
}
