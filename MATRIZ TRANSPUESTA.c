#include <stdio.h>
#include <stdlib.h>

int main()
{
    int c;
    int f;
    int c2;
    int f2;

    printf("Ingrese el numero de columnas de la matriz: ");
    scanf("%d", &c);

    printf("Ingrese el numero de filas de la matriz: ");
    scanf("%d", &f);

    int num[f][c];

    for (int i = 0; i < f; i++)
    {
        for (int j = 0; j < c; j++)
        {
            num[i][j]= rand() % 100;
        }
        printf("\n");
    }

    for (int i = 0; i < count; i++)
    {
        for (int i = 0; i < ; i++)
        {
            /* code */
        }
        
    }
    



    return 0;
}