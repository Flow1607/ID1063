#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 100

void uniform(char *str, int len) {
    FILE *fp = fopen(str, "w");
    for (int i = 0; i < len; i++) {
        fprintf(fp, "%lf\n", (double)rand() / RAND_MAX);
    }
    fclose(fp);
}

void randomArrayFromFile(int arr[], int n) {
    double x;
    uniform("random.dat", n);

    FILE *fp = fopen("random.dat", "r");
    for (int i = 0; i < n; i++) {
        fscanf(fp, "%lf", &x);
        // Scale [0.0, 1.0) to an integer [1, 100]
        arr[i] = (int)(x * 100) + 1;
    }
    fclose(fp);
}

int main() {
    int arr[SIZE];
    srand(time(NULL));

    randomArrayFromFile(arr, SIZE);

    for (int i = 0; i < SIZE; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

