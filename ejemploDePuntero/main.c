#include <stdio.h>
#include <stdlib.h>

typedef struct{
    char pais[10];
    int id;
    char nombre[10];
}emoneda;

void moneda_mostrarListado(emoneda* , int );
emoneda altaMoneda(int);

int main(){
    FILE *fp;
    char buffering[100];
    emoneda moneda[3]; //= {{"Argentina",1,"Peso"},{"Brasil",2,"Real"},{"EEUU",3,"Dolar"}};

    emoneda* listado;

   // listado //= moneda;
    listado = altaMoneda(3);
//moneda_mostrarListado(listado,3);
    return 0;
}

void moneda_mostrarListado(emoneda* lista,int limite){
    if(lista != NULL && limite > 0){
        for(int i = 0; i < limite; i++){
            printf("%s - - %d - - %s\n", (lista+i) -> pais, (lista+i) -> id, (lista+i) -> nombre);
        }
    }

}

emoneda altaMoneda(int limite){
    emoneda moneda[limite];

    for(int i=0; i<limite; i++){
        printf("Ingrese ID: ");
        scanf("%d", &((moneda+i)->id));
        printf("Ingrese Pais: ");
        fflush(stdin);
        gets((moneda+i)->pais);
        printf("Ingrese moneda: ");
        fflush(stdin);
        gets((moneda+i)->nombre);
    }
    return moneda[limite];

}

