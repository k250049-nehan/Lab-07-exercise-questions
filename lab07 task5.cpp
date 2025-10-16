#include <stdio.h>
int main() {
    int arr[10];
    int max, min;

    printf("Enter 10 integers:\n");
    for (int i = 0; i < 10; i++) {
        printf("number %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    max = arr[0];
    min = arr[0];

    for (int i = 1; i < 10; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    printf("\nMaximum value: %d\n", max);
    printf("Minimum value: %d\n", min);
    printf("Difference(max-min): %d\n", max - min);

    return 0;
}

