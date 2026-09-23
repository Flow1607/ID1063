#include <stdio.h>

int main() {
	
    	int n;
    	scanf("%d", &n);

    // allocating space for n characters
    // definig all as null terminator initially to use last char as null
    	char str[n + 1]='\0';

    	for (int i=0; i<n; i++) {
        // space before %c takes away any whitespaces due to prev scanf
        	scanf(" %c", &str[i]);
    	}

    	printf("%s\n",str);
}

