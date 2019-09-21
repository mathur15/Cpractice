#define DAYS 365
//to run the gcc wall pointers.c
//./a.out
int main(){
	char test= 'y'
	char *point;
	point= &test
	printf("Printing the constant declared %d",DAYS);
	printf("The address of the variable test is in point which is %d", point);
	printf("To find the value the pointer is referring to we *point %d",*point);
}