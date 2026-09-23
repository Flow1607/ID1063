#include<math.h>
#include <stdio.h>

double rms( double a[], int n);

int main(void){
	int n;
	scanf("%d",&n);
	
	double a[n];
	for(int i=0;i<n;i++){
		scanf(" %lf",&a[i]);
	}
	printf(" %.2lf", rms(a,n));
}

double rms(double a[],int n){
	double sq=0;
	for(int i=0;i<n;i++){
		sq=sq+a[i];
	}
	return sqrt(sq/n);
}

