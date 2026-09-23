#include <stdio.h>

int main() {
    int m, n, T;
    int image[100][100];
	
    printf("Enter value of m and n with space in between: ");
    scanf(" %d %d", &m, &n);
    printf("Enter value of threshold(0<=T<=255)");
    scanf("%d", &T); //taking input
    
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){ //forming matrix of pixels
            scanf("%d", &image[i][j]);
            if(image[i][j]>= T){
                image[i][j]= 255;
            }
            else if(image[i][j]<T){
                image[i][j] =0;
            }
	    printf("\n");
        }
    }
    
    for(int i =0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("%d",image[i][j]); //prints 255 or 0 
            if(j!=n-1) printf(" "); 
        }
        printf("\n");
    }

    return 0;
}
