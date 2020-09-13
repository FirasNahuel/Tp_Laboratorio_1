#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main()
{
int primerNumero;
int segundoNumero;
int sumar;
int restar;
int multiplicar;
int dividir;
int factorialX;
int factorialY;
int flag1=0;
int flag2=0;
int flag3=0;
int operador;
int opcion;
int resultado;




do{
    printf("|----------------------------------|\n");
    printf("|----------| CALCULADORA |---------|\n");
    printf("|----------------------------------|\n");

    if(flag1==0){
        printf("1.Ingrese el primer numero: \n");


    }
    else{
        printf("1.Cambiar primer numero: %d\n",primerNumero);
    }

if(flag2==0){
    printf("2.Ingrese el segundo numero: \n");
}

else{
    printf("2.Cambiar el segundo numero: %d\n");
}

    printf("3. Calcular todas las operaciones\n");
    printf("a) Calcular la suma (A+B)\n b) Calcular la resta (A-B)\n c) Calcular la division (A/B)\n d) Calcular la multiplicacion (A*B)\n e) Calcular el factorial (A!)\n");
    printf("4. Informar resultados");
    printf( "El resultado de A+B es: r\n b) El resultado de A-B es: r\n c) El resultado de A/B es: r o No es posible dividir por cero\n d) El resultado de A*B es: r\n e) El factorial de A es: r1 y El factorial de B es: r2\n");
    printf("5. Salir \n");





scanf("%d", &opcion);



    switch(opcion){

    case 1:

        printf("1.Ingrese el primer numero:\n");
        scanf("%d",&primerNumero);
        flag1=1;
        break;

    case 2:
        printf("2.Ingrese el segundo numero:\n");
        scanf("%d", &segundoNumero);
        flag2=1;
break;

    case 3:
        if(flag1==1 && flag2==1){
            printf("La suma de %d + %d\n",primerNumero,segundoNumero);
            sumar= sumarNumeros(primerNumero,segundoNumero);

            printf("La resta de %d - %d \n",primerNumero,segundoNumero);
            restar= restarNumeros(primerNumero, segundoNumero);

            printf("La multiplicacion de %d * %d\n",primerNumero,segundoNumero);
            multiplicar= multiplicarNumeros(primerNumero,segundoNumero);


            if(segundoNumero==0){

                printf("No es posible dividir por 0");
            }
            else{
                printf("la division de %d / %d \n");
                dividir = dividirNumeros(primerNumero,segundoNumero);
            }

            if(primerNumero >= 0 && segundoNumero >= 0){

                    printf("Calcular la facotirizacion de (%d!) y de (%d!)\n", primerNumero,segundoNumero);

                factorialX = factoriarNumeros(primerNumero);

                factorialY = factoriarNumeros(segundoNumero);
            }

            else{
                printf("No se puede factorizar por numeros negativos");

            }

        }
        else{
            printf("Usted no ingreso ningun numero");
        }

        flag3=1;

        break;

    case 4:

        if(flag1==1 && flag2==1){

            if(flag3==1){
                    printf("%d + %d = %d\n",primerNumero, segundoNumero,sumar);
                    printf("%d - %d = %d\n",primerNumero, segundoNumero,restar);
                    printf("%d * %d = %d\n",primerNumero, segundoNumero,multiplicar);
                    printf("%d / %d = %d\n",primerNumero, segundoNumero,dividir);
                    printf("La factorizacion(%d!) es : %d, y la factorizacion de (%d!) es : %d\n ", primerNumero,factorialX,segundoNumero,factorialY);

            }
            else{
                flag3=0;
            }
        }


    break;


    case 5:

       printf("\n Gracias vuelva prontos.... \n");
        break;

        default:
        printf("Error, Ingrese la opcion correcta. \n");



    }

system("pause");
system("cls");
}while(opcion!= 5);
return 0;
}
