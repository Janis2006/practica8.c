//Janis Lizeth Salgado Perez//
//practica 8, ejercicio 2 //

#include <stdio.h>

int main()
{
    int i;
    for (i = 1; i <= 100; i++) 
    {
        printf("%d\n", i);
    }
    return 0;
}


//Ejercicio 3//

#include <stdio.h>
int main() 
{
    int numero;
    int contador = 0;
    int suma = 0;

    do 
    {
        printf("Introduce un numero: ");
        scanf("%d", &numero);

        if (numero != 0)
        {
            printf("Has introducido el numero %d\n", numero);
            contador=contador+1;
            suma += numero;
        } else 
            {
            printf("Finalizando: Se ha introducido el numero 0\n");
            }

    }
    while (numero != 0);

    printf("Se han introducido %d numeros\n", contador);
    printf("La suma de los numeros introducidos es %d\n", suma);

    return 0;
}

//Ejerciccio 4//

#include <stdio.h>
int main()
{
    int numero;
    int contador = 0;
    int suma = 0;
    while (contador < 10 && suma <= 100) 
        {
        printf("Introduce un numero: ");
        scanf("%d", &numero);
        suma += numero;
        contador++;
        }
    if (contador == 10)
        {
        printf("Se han introducido 10 numeros.\n");
        }
    if (suma > 100) 
        {
        printf("La suma de los numeros es mayor que 100.\n");
        }
    return 0;
}
