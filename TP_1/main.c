#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main()
{
    char seguir='s';
    int opcion=0;
    int num1=0;
    int num2=0;

    while(seguir=='s')
    {
        printf("1- Ingresar 1er operando (A=%d)\n",num1);
        printf("2- Ingresar 2do operando (B=%d)\n",num2);
        printf("3- Calcular la suma (A+B)\n");
        printf("4- Calcular la resta (A-B)\n");
        printf("5- Calcular la division (A/B)\n");
        printf("6- Calcular la multiplicacion (A*B)\n");
        printf("7- Calcular el factorial (A!)\n");
        printf("8- Calcular todas las operacione\n");
        printf("9- Salir\n");

        scanf("%d",&opcion);

        if(opcion < 1 || opcion > 9)
        {
            printf("Ingrese una opcion del 1 al 9");
            fflush(stdin);
            getchar();
        }

        switch(opcion)
        {
            case 1:
                num1=agregarNumero("Ingrese el Primer numero: ");
                break;
            case 2:
                num2=agregarNumero("Ingrese el Segundo numero: ");
                break;
            case 3:
                sumar(num1,num2);

                break;
            case 4:
                restar(num1,num2);

                break;
            case 5:
                division(num1,num2);

                break;
            case 6:
                mult(num1,num2);

                break;
            case 7:
                factorial(num1);

                break;
            case 8:
                sumar(num1,num2);
                restar(num1,num2);
                division(num1,num2);
                mult(num1,num2);
                factorial(num1);

                break;
            case 9:
                seguir = 'n';
                system("pause");
                break;
        }

       system("cls");

}

return 0;
}
