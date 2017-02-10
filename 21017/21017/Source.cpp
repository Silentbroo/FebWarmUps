#include <stdio.h>

int main(){
	char string[10];
	
	printf("What is your name?");
	fgets(string, 10, stdin);
	printf("hi %s  you are awesome!",string);
	
	return 0;
}