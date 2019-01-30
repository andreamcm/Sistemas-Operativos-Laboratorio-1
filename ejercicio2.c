#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
	
	char c;
	FILE *copiar, *copiado;

	copiar = fopen("copiar.txt", "r");
	if (copiar == NULL){
		printf("No existe 1");
		exit(EXIT_FAILURE);
	}

	copiado = fopen("copiado.txt", "w");
	if (copiado == NULL) {
		printf("No existe 2");
		exit(EXIT_FAILURE);
	}
	
	c = fgetc(copiar);

	while (c != EOF ) {
		fputc(c, copiado);
		c = fgetc(copiar);
	}

	printf("Se copiaron (?)");

	fclose(copiar);
	fclose(copiado);


	return(0);

}
