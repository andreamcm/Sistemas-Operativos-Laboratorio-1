#include <stdio.h>
#include <unistd.h>

int main() {

	//Funcion fork()
	int f = 0;
	f = fork();

	if (f == 0 ){
		execl("ejer", NULL);
	}
	else {
		printf("%d\n", (int)getpid());
		execl("ejer", NULL);
	}

	return (0);

}
