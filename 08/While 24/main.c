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
    int promedioposiv=0;
    int promedioneg=0;
    int resta;
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





    fflush(stdin);
    printf("Desea continuar(s/n)");
    scanf("%c",&respuesta);

    }while(respuesta=='s');

    if(cantn!=0)
    {

        promedioneg=negativos/cantn;

    }

    if(cantp!=0)
    {

        promedioposiv=positivos/cantp;

    }



    resta=positivos-negativos;

    printf("suma de negativos: %d\n",negativos);
    printf("suma de positivos: %d\n",positivos);
    printf("cantidad de negativos: %d\n",cantn);
    printf("cantidad de positivos: %d\n",cantp);
    printf("cantidad de numeros pares: %d\n",cantpares);
    printf("cantidad de ceros: %d\n",cantc);
    printf("promedio de negativos: %d\n",promedioneg);
    printf("promedio de positivos: %d\n",promedioposiv);
    printf("resta: %d",resta);

    return 0;
}
