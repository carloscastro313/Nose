#include <stdio.h>
#include <stdlib.h>



int main() {
	int precio;
	int descuento;
	int preciofinal;
	
	printf("Ingrese precio: ");
	scanf("%d",&precio);	
	printf("Ingrese descuento: ");
	scanf("%d",&descuento);
	
	preciofinal=precio-(precio*descuento/100);
	
	printf("El precio final es de %d",preciofinal);
	
	return 0;
}
