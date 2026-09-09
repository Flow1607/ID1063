//Code by Jaideep Singh
//Date : 9/09/2026

#include <stdio.h>
#include <string.h>


char swap(char string)
	string[strlen(string)-1]='\0';
	if(sizeof(string)<=1){
		printf("Enter an apt string\n");
	}
	else{
		char t=string[0];
		string[0]=string[1];
		string[1]=t;
		return char;
	}
}

int main(void){
	printf("Enter your string\n");
	fgets(string,sizeof(string),stdin);



