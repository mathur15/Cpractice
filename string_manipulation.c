#include <stdio.h>
#include <string.h>

int main(){
	char text[]="hello";
	char text1[20]="Monday";
	char text2[20]="Wed";
	printf("%s",text1+text2);

	char *text3="Tuesday"; //String literal cannot be modified
	text3[0]="z"; //Bus error

	printf("The length of the string is %lu\n", strlen(text3));
	printf("%s",text3);



}