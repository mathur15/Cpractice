#include <stdio.h>
#include <signal.h>

void handler(int code){
	fprintf(stderr,"Signal %d caught",code);
	}
int main(){
	int i=0;
	struct sigaction new_action;
	new_action.sa_handler=handler;
	new_action.sa_flags=0;
	sigemptyset(&new_action.sa_mask); //setting the list of signals to be //excluded
	sigaction(SIGINT,&new_action,NULL);
	for(;;){
		if((i++%5000000)==0){
			fprintf(stderr,".");
			}
	}
	return 0;
} 
