
#include "funciones.h"

int sumarNumeros(int primerNumero, int segundoNumero)
{

int resultado;


resultado= primerNumero + segundoNumero;

return resultado;

}

int restarNumeros(int primerNumero, int segundoNumero)
{

int resultado;


resultado= primerNumero - segundoNumero;

return resultado;
}

int multiplicarNumeros(int primerNumero, int segundoNumero)
{

int resultado;


resultado= primerNumero * segundoNumero;

return resultado;
}

float dividirNumeros(int primerNumero, int segundoNumero)
{

float resultado;


resultado = (float) primerNumero / segundoNumero;

return resultado;
}

int factoriarNumeros(int x)

{


int resultado;

int n;

if(x == 0){

    resultado =1;
}

else
    {

    n=x-1;
    resultado=x;
    while(n>0){

        resultado = resultado* n;

        n = n-1;

    }

    }




    return resultado;
}

