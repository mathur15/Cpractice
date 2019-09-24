#include <stdio.h>

int main(int argc, char**argv){

	if(argc<2){
		fprintf(stderr,"Not enough arguments\n");
	}
	FILE* fp;
        char s[80];
        printf("%s %s\n",argv[1],argv[2]);
        fp=fopen(argv[1],"r");//system call so perror will set a value to errno
        if(fp==NULL){
		perror("test1:");
        }
	long number_of_lines=strtol(argv[2],NULL,10);
        for(int i=0;i<number_of_lines;i++){
		if(fgets(s,80,fp)==NULL){
			fprintf(stderr, "Problem reading the file");
 		}
		printf("%s",s);
	}
	
	
        
}
