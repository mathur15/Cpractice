#include <stdio.h>
#include <string.h>

int main(){
	char text[]="hello";
	printf("text %s\n",text);
	char text1[20]="Monday";
	printf("text 1 %s\n",text1);
	char text2[20]="Wed";
	printf("text2 %s\n",text2);

	//printf("%s",text1+text2);

	char *text3="Tuesday"; //String literal cannot be modified
	//text3[0]="z"; //Bus error

	printf("The length of the string is %lu\n", strlen(text3));
	printf("%s",text3);

	//copying string using strcpy
	char cpy1[20];
	char cpy2[10]= "Monday";

	strcpy(cpy1,cpy2);
	printf("Using strcpy %s \n",cpy1);
	printf("Using strcpy %s\n", cpy2);

	//copying using strncpy

	char strncpy1[10];
	char strncpy2[40]= "I love university of Toronto";

	strncpy(strncpy1,strncpy2,sizeof(strncpy1)); 
	/* At this point since null terminator will not be found in first 10 chars of strncpy2, null terminator wont be added */

	strncpy1[9] ="\0";

	printf("Using strncpy %s\n", strncpy1);
	printf("Using strncpy %s\n", strncpy2);




}