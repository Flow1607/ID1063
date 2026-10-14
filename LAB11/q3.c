//Code by Jaideep
//date: 14/10/26

#include <stdio.h>

int main(void) {
    // Declare a 2x3 2D array of integers
    int arr[2][3];

    printf("Memory addresses of 2x3 array elements:\n\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("arr[%d][%d] is at address: %p\n", i, j,(void *)&arr[i][j]);
	    //arr[i][j] has type int
	    //%p requires void *
        }
    }

    return 0;
}

