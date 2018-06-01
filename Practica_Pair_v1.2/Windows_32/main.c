#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ArrayList.h"
#include "Employee.h"

/****************************************************
    Menu:
        1. Parse del archivo data.csv
        2. Listar Empleados
        3. Ordenar por nombre
        4. Agregar un elemento
        5. Elimina un elemento
        6. Listar Empleados (Desde/Hasta)
*****************************************************/


int main()
{
ArrayList* empleados;
Employee* aux;
// Employee e = {1,"Juan", "Gomez"};

empleados = al_newArrayList();
Employee* e;
e = (Employee*)malloc(sizeof(Employee));
e->id=5;
strcpy(e->name,"Juan");
al_add(empleados,e);

Employee* e2;
e2 = (Employee*)malloc(sizeof(Employee));
e2->id=6;
strcpy(e2->name,"Pedro");
al_add(empleados,e2);


//al_add(empleados,&e);

printf("Hay %d elementos: ", al_len(empleados));


for(int i = 0 ; i<(al_len(empleados)); i++){
    //aux = (Employee*) al_get(empleados,i);
    employee_print( al_get(empleados,i));
    //printf("\n%d--%s", aux->id, aux->name);
}




    return 0;
}
