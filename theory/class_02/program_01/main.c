#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i;
    int *numbers;
    int sum = 0;

    printf("Enter the number of numbers: ");
    scanf("%d", &n);

    numbers = (int *)malloc(n * sizeof(int));
    if (numbers == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Enter %d numbers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }

    // Sum in a separate loop
    for (i = 0; i < n; i++) {
        sum += numbers[i];
    }

    printf("Sum = %d\n", sum);

    free(numbers);
    return 0;
}