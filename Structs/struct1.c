#include <stdio.h>

struct student {
  char *name;
  int age;
  double gpa;
};

int main(){
  struct student x;
  x.name="Sumant Mathur";
  x.age=22;
  x.gpa=3.2;
  printf("%s",x.name);
  FILE *output_file;
  output_file=fopen("output_test.txt","a");
  if(output_file ==NULL){
	fprintf(stderr,"Oops");
  }

  fprintf(output_file,x.name);
  int error;
  error=fclose(output_file);
  if(error!=0){
    fprintf(stderr,"File not close just yet");
  }
  return 0;

}
