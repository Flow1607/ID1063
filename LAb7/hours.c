#include <stdio.h>

int runLength(int a[], int n, int i);

int main() {
    int n, k;
    int a[1000];
    int i;
    printf("Input:");
    scanf("%d %d", &n, &k);

    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int violated_session = 0;
    for (i = 0; i < n; i++) {
        if (runLength(a, n, i) > k) {
            // Index start is i, so violation index is i + k
	    violated_session = i + k + 1;
            break;
        }
    }

    printf("Output: %d\n", violated_session);

    return 0;
}

int runLength(int a[], int n, int i) {
    int count = 0;
    while (i < n && a[i] == 1) { //checks for each i the number of consecutive hours the person has studied
        count++;
        i++;
    }
    return count;
}

