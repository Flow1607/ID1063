#include <stdio.h>

int main(void) {
    int n;
    printf("Enter no of chests: ");
    scanf("%d", &n);

    printf("Enter the values(positive) each with a space in between: ");
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Pointer tracks the cursed chest (minimum value)
    int *p = &arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] < *p) {
            p = &arr[i];
        }
    }

    // Set minimum to 0 through the pointer
    *p = 0;

    printf("The final values are: \n");

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

