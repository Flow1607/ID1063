#include <stdio.h>

int main(void) {
    // Declare a 2x3x4 3D array of integers
    int arr[2][3][4];

    printf("Memory addresses of 2x3x4 array elements:\n\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 4; k++) {
                printf("arr[%d][%d][%d] is at address: %p\n", i, j, k, (void *)&arr[i][j][k]);
		//Since arr[i][j][k] is of type int 
		//Using & will give int*
		//typecast to void*
            }
        }
    }

    return 0;
}

