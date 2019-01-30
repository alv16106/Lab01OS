#include <sys/syscall.h>
#include <stdio.h>

int main(){
	int x = syscall(345,15);
	printf("%d \n" ,x);
}
