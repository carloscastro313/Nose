#include <stdio.h>
#include <stdlib.h>


int main() {
	
	char nombre;
	char localidad;
	
	fflush(stdin);
	printf("Ingrese nombre: ");
	scanf("%c",&nombre);
	
	fflush(stdin);
	printf("Ingrese localidad: ");
	scanf("%c",&localidad);
	
	
	printf("Usted es %c y vive en la localidad %c",nombre,localidad);
	
	
	return 0;
}
