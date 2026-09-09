//By Jaideep Singh
//Date: 9/09/2026

#include <stdio.h>
#include <string.h>

int palindrome(char str[]) { //defining the function
    int len = strlen(str);

    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - 1 - i]) {
            return 0; //if anywhere the command fails 
		      //here this defines palindrome as false 
        }
    }
    return 1; //if function runs completely
	      // defines the function as true
}

int main() {
	printf("Input: ");
    	char str[100];
    	fgets(str,sizeof(str),stdin); //taking input for string
	str[strlen(str)-1]='\0';

    	if (palindrome(str)) {
	printf("Output: Palindrome\n");
    	} else {
        printf("Output: Not a Palindrome\n");
    	} //giving req ouput

    	return 0;
}

