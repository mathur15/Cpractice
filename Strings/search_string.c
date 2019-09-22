#include <stdio.h>
#include <string.h>

int main(){
	//using the search in strings
	char text[30]= "My name is Som.";
	char *p;
	p=strchr(text, 'M');
	
	printf("The text was found in index %ld\n",(p-text));
	
}
