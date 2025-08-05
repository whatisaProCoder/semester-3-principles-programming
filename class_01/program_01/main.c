#include <stdio.h>

int fact_recur(int n) {
    if (n > 0) {
        return n * fact_recur(n - 1);
    } else {
        return 1;
    }
}

int fact_iter(int n) {
    int f = 1;
    for (int i = 1; i <= n; i++) {
        f = f * i;
    }
    return f;
}

int main() {
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);

    int f = fact_iter(n);
    printf("Factorial : %d", f);
}