//Janis Lizeth Salgado Perez//
//practica 8, ejercicio 1. //
#include<stdio.h>
int main()
{
    int n=0,c=0,par,impar;
    printf("De un número: ");
    scanf("%d", &n);
    while(c<=n)
    {
        if(n%2==0)
        {
        par=n;
        impar=n-1;
        }
        else
        {
        impar=n;
        par=n-1;
        }
        c=c+1;
    }
    printf("\nel ultimo numero par es: %d",par);
    printf("\nel ultimo número impar es: %d",impar);
    printf("\nfin del programa");
    return 0;
}
