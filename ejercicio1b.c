#include <stdio.h>
#include <unistd.h>

int main(){
	int f = fork();
	if (f==0){
		execl("miprogramita", (char*) NULL);
	}else {
		printf("ree %d\n", (int)getpid());
		execl("miprogramita", (char*) NULL);
	}
}
