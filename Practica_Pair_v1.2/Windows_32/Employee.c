#include <stdio.h>
#include <stdlib.h>
#include "ArrayList.h"
#include "Employee.h"


int employee_compare(void* pEmployeeA,void* pEmployeeB)
{
(Employee*) pEmployeeA;
(Employee*) pEmployeeB;
for(int i=0; i<strlen(pEmployeeA); i++){

}

    return 0;
}


void employee_print(Employee* this){
  printf("\n%d--%s -- %s -- %d",
          this->id,
          this->name,
          this->lastName,
          this->isEmpty);
}


Employee* employee_new(void)
{

    Employee* returnAux = NULL;

    return returnAux;

}

void employee_delete(Employee* this)
{


}

int employee_setId(Employee* this, int id)
{

    return 0;

}

int employee_getId(Employee* this)
{

    return 0;

}


