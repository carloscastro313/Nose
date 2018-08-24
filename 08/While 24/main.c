#include <stdio.h>
#include <stdlib.h>

int main()
{

    int numero;
    int contador=0;
    int negativos=0;
    int positivos=0;
    int cantp=0;
    int cantn=0;
    int cantc=0;
    int cantpares=0;
    int resta;
    int maximo;
    int minimo;
    int flag=0;
    float promedioposiv=0;
    float promedioneg=0;

    char respuesta;



    do
    {
        contador++;

        printf("Ingrese numero %d entero:",contador);
        scanf("%d",&numero);

        if(numero<0)
        {

            negativos=negativos+numero;
            cantn++;

        }else
        {

            positivos=positivos+numero;
            cantp++;

        }

        if(numero==0)
        {

            cantc++;

        }else
        {
            if(numero%2==0)
            {

                cantpares++;

            }
        }

    if(flag==0)
    {
        flag=1;
        maximo=numero;
        minimo=numero;

    }else
    {
        if(numero>maximo)
        {

            maximo=numero;

        }else
        {
            if(numero<minimo)
            {

                minimo=numero;

            }
        }
    }

    /*if(flag==0||maximo<numero)
    {
        flag=1;
        maximo=numero;
    }*/

    fflush(stdin);
    printf("Desea continuar(s/n)");
    scanf("%c",&respuesta);

    }while(respuesta=='s');

    if(cantn!=0)
    {

        promedioneg=negativos/(float)cantn;

    }

    if(cantp!=0)
    {

        promedioposiv=positivos/(float)cantp;

    }



    resta=positivos-negativos;

    printf("suma de negativos: %d\n",negativos);
    printf("suma de positivos: %d\n",positivos);
    printf("cantidad de negativos: %d\n",cantn);
    printf("cantidad de positivos: %d\n",cantp);
    printf("cantidad de numeros pares: %d\n",cantpares);
    printf("cantidad de ceros: %d\n",cantc);
    printf("promedio de negativos: %.2f\n",promedioneg);
    printf("promedio de positivos: %.2f\n",promedioposiv);
    printf("El maximo: %d\n",maximo);
    printf("EL minimo: %d\n",minimo);
    printf("resta: %d",resta);

    return 0;
}
