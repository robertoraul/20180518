#include <stdio.h>
#include <stdlib.h>
#define TAM 5

int main()
{

    int* puntero;
    int* aux;


    puntero = (int*)malloc(sizeof(int) *TAM);

    for(int i=0; i<TAM; i++){
        *(puntero + i) = i +1;
    }

    printf("muestro los primeros 5 valores.\n");
    for(int i = 0; i<TAM; i++){
        printf("%d\n",*(puntero +i));
    }

    /*
    cuando necesito reasignar el temaño utilizo realloc
    */

    aux = (int*)realloc(puntero,sizeof(int)*(TAM *2));

    if(aux != NULL){
        puntero = aux;

        for(int i=TAM; i<(TAM*2); i++){
        *(puntero + i) = i +1;
        }
        printf("muestro la segunda parte con 10 \n");
        for(int i = 0; i<(TAM*2); i++){
            printf("%d\n",*(puntero +i));
        }
    }
/*
vuelvo a reasignar tamaño ocn realloc pero ahora lo achico
*/
    puntero = (int*)realloc(puntero,sizeof(int)*3);
    printf("muestra los primeros 3 :\n");

    for(int i = 0; i<TAM; i++){
        printf("%d\n",*(puntero +i));
    }

    return 0;
}
