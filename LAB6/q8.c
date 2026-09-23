#include <stdio.h>
#include <string.h>

//void letters(char let);
void letters(char let){

        int lett= let;
        if(lett>=97 && lett<=122){
                lett=lett-=32;
        };
        else if(lett>=65 && lett <=90){
                lett=lett+=32;
        };
}
int main(){
	char b ='b';
	letters(b);
}
