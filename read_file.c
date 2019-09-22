//read file using fopen , fgets, and fclose

#include <stdio.h>
#define LINE_LENGTH 80

int main(){
	FILE *test_file;
	test_file= fopen("test_read.txt","r");
	if(test_file ==NULL){
		fprintf(stderr,"Something went wrong opening the file");
		return 1;
	}
	char get_content[LINE_LENGTH+1];
	while(fgets(get_content, LINE_LENGTH+1,test_file) !=NULL){
		printf("%s",get_content);
	}
	int error;
	error=fclose(test_file);
	if(error !=0){
		fprintf(stderr,"Something went wrong");
		return 1;
	}
	
	//trying to get input from stdin
	char get_stdin[80];
	while(fgets(get_stdin, 80,stdin) !=NULL){
		printf("Here is what you entered: %s\n",get_stdin);
	}
	return 0;
	
}
