#include <stdio.h>
#include <stdlib.h>



int main() {
	
	int numerouno;
	int numerodos;
	int resta;
	int suma;
	
	printf("Ingrese numero: ");
	scanf("%d",&numerouno);
	printf("Ingrese numero: ");
	scanf("%d",&numerodos);
	
	if(numerouno==numerodos)
	{
		
		printf("concatenados %d%d",numerouno,numerodos);
		
		
	}else{
		if(numerouno>numerodos)
		{
			
			resta=numerouno-numerodos;
			printf("La resta es: %d",resta);
			
		}else{
			if(numerouno<numerodos)
			{
				
				suma=numerouno+numerodos;
				
			}
			
			if(suma>50)
			{
				
				printf("La suma es %d y es mayor a 50",suma);
				
			}else{
				
				printf("La suma es: %d",suma);
			}
			
		}
	}
	
	return 0;
}
