#include <stdio.h>

double calculateArea(double length,double width){
    double z=length*width;
    return z;
}

int main(){
    printf("Enter dims of rect\n");
    double l,w;
    scanf("%lf %lf", &l, &w);
    printf("The area is %lf",calculateArea(l,w));
    return 0;
}