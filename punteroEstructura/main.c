#include <stdio.h>
#include <stdlib.h>


typedef struct{
    int a;
    char b;
}dato;

int main()
{
 //   dato datito ={15,'c'};
   // dato* p;
   // p = &datito;

    /*
        printf("%d",p);
        printf("\n%d",&datito.adato lista[2]= {{1,'c'},{2,'d'}};

dato* p;
p = lista;

for(int i = 0; i<2; i++){
    printf("%d - - %c\n", (*(p+i).a),(*(p+i).b)); ///ver esta parte
});
        printf("\n%d",&datito);

     */
/*****************************************/
   //  printf("\n%d", (*p).a);
   //  printf("\n%c", (*p).b);

/*********************************************/
/*
dato lista[2]= {{1,'c'},{2,'d'}};

dato* p;
p = lista;

for(int i = 0; i<2; i++){
    printf("%d - - %c\n", (*(p+i).a),(*(p+i).b)); ///ver esta parte
}

*/
/*******************************************/
/*
dato datito = {1, 'c'};
dato* p;

p = &datito;

printf("%d - - %c", p -> a, p -> b);  //con la flecha reemplazamos el * y el punto

*/
/***********************************************/


dato lista[2]= {{1,'c'},{2,'d'}};

dato* p;
p = lista;

for(int i = 0; i<2; i++){
    printf("%d - - %c\n", (p+i)-> a, (p+i)->b); ///ver esta parte
}

/***************************************************/


    return 0;
}
