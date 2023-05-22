#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Definicion de variables
    int c;
    int f;

    //Solicitud al usuario de la matriz
    printf("Ingrese el numero de columnas de la matriz: ");
    scanf("%d", &c);

    printf("Ingrese el numero de filas de la matriz: ");
    scanf("%d", &f);

    //Definicion de la matriz
    int num[f][c];

    // Impresion y los valores aleatorios de matriz original
    printf("Su matriz original es:\n");
    

    for (int i = 0; i < f; i++)
    {
        for (int j = 0; j < c; j++)
        {
            num[i][j]= rand() % 100;
            printf("%d ", num[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    //Impresion de la matriz transpuesta

    printf("Su transpuesta es:\n");
    
    for (int i = 0; i < f; i++)
    {
        for (int j = 0; j < c; j++)
        {
            
            printf("%d ", num[j][i]);
        }
        printf("\n");
    }
    
    



    return 0;
}