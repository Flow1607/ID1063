#include <stdio.h>

int main(void) {
    int a, b;
    printf("Enter 2 ints with space in bw");
    scanf("%d %d",&a,&b); 

    int *p; //defining pointer and assigning value
    if (a < b) {
        p = &a;
    }
    else {
        p = &b;
    }

    // Add 10 to the variable pointed to by p
    *p += 10;

    printf("The modified values are: %d %d\n", a, b);

    return 0;
}

