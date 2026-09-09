#include <stdio.h>

void printBorder(int count){
    for(int i=0;i<count;i++){
        printf("*");
    }
    printf("\n");
}

int main(){
    printBorder(9);
    return 0;
}
