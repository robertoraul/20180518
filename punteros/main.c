#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    int* variableNombre; //va a guardar una direccion de memoria,
                         //el tipo de dato tiene q ser el mismo tipo q la variable a la q apunta
                         //la variable puntero tambien tiene un valor de direccion de memoria propia del puntero
    int variableApuntada = 5;

    variableNombre = &variableApuntada;

    *variableNombre = 20;

    printf("\n el valor de la variable puntero es: %d",variableNombre);
    printf("\n el valor del puntero es: %d",*variableNombre);
    printf("\n el valor de la variable es %d", variableApuntada);
    printf("\n el valor de memoria de la variable es: %d",&variableApuntada);
    printf("\n el valor de memoria del puntero es: %d", &variableNombre);
*/
/*
    int* pEntero;
    int* otroPuntero;
    int miEntero;

    pEntero = &miEntero;
    otroPuntero = pEntero;

    printf("%d - %d", pEntero, otroPuntero);
*/
/*

// imprimo las diferentes posiciones del puntero
  int* pEntero = NULL;
  int miEntero = 7;

  pEntero = &miEntero;


      printf("El puntero no esta inicializado");
      printf("\n mi entero es %d",pEntero+1);
      printf("\n mi entero es %d",pEntero+2);
      printf("\n mi entero es %d",pEntero+3);
      printf("\n mi entero es %d",pEntero+4);

    pEntero = pEntero+1;
    printf("\n nuevo valor %d", pEntero);
*/

/*
//cargo valores a vec por medio del puntero y luego los muestro
    int vec[3];
    int* pEntero = NULL;

      pEntero = vec;

     for(int i= 0; i<3; i++){
        printf("ingrese un numero: ");
        scanf("%d", pEntero +i); //aca no va el * pq necesito la posicion de la memoria para poder guardar el valor ingresado por teclado
     }

    for(int i = 0; i<3;i++){
    printf("\n %d", *(pEntero +i)); //para mostrar el valor le aplico el *(operador de inacceso) para q me muestre el valor
    }
*/

cargar(n, 3);
mostrar(n,3);

void cargar (int*, int);
void mostrar (int*, int);


void cargar(int* vector, int t){

       for(int i= 0; i<t; i++){
        printf("ingrese un numero: ");
        scanf("%d", vector +i); //aca no va el * pq necesito la posicion de la memoria para poder guardar el valor ingresado por teclado
     }
}

void mostrar(int* vector, int t){

    for(int i = 0; i<t;i++){
    printf("\n %d", *(vector +i)); //para mostrar el valor le aplico el *(operador de inacceso) para q me muestre el valor
    }
}


    return 0;
}

//Tarea:1 cargar y mostrar

// 1 - version recibe el array y lo maneja con notacion de array; con corchetes

// 2 - recibe el array con notacion de array y en la implementacion de la funcion trabaja con notacion de punteros

// 3 - recibe el puntero y lo manejo con notacion de array

// 4 - recibe el puntero y  trabaja con notacion de puntero


