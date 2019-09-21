int main(){
	int i=5; 
	int j=i;

	int *point;
	point= &i;

	*point =*point+1

	printf("i=%d",i);//6
	printf("j=%d",j);//5
}