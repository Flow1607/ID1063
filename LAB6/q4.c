#include <stdio.h>
#include <string.h>

void occur(char *str,char a){
	int i=0;
	do{
		if(str[i]==a){
			printf("Occurence is %d",i);
		}
		else{
			i++;
		}
		return i;
	}while(str[i]!=a);

	if(i==sizeof(str)){
		printf("Occurence is -1");
}

int main(){
	char str[sizeof(str)]='i';
	printf("Enter a string: ");
	fgets(str,sizeof(str),stdin);
	str[strlen(str)-1]='\0';
	printf("Input: ");
	char a;
	scanf("%c", &a);
	occur(str, a);
}		
