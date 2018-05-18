#include <stdio.h>
#include <stdlib.h>

int main(int argc, char ** argv)
{
    FILE *fp;
    char buffering[100];
    char buffer[100] = "Esto es un texto dentro del fichero.";
//   fp = fopen("fichero.txt", "w"); ///nos permite abrir el archivo q vamos a trabajar, primer parametro le digo la direccion,(por defecto en la carpeta del proyecto)
//    fprintf(fp,buffer);              ///poner la \\ para separar la ruta
                                    /// El segundo parametro me dice q es lo q voy a hacer con el archivo, "w"
                                    /// fprintf le paso el puntero al archivo y el mensaje q se desea escribir


 //   fclose(fp); ///se cierra el archivo
 //   system("pause");
    //remove("fichero.txt");

    /*******************************************************/

fp = fopen("fichero.txt", "r");

fgets(buffering,100,fp); ///primer parametro la variable donde se va a guardar lo que queres leer, el tamaño de la variable, y el puntero al archivo.
                         /// tener en cuenta q fgets solo lee la primer linea del archivo y deja un puntero a la linea siguiente.
                         /// por el momento solo repetimos las sentencias para mostrar las diferentes lineas


fclose(fp);
puts(buffering);


///la alternativa a lo anterior es usar feof q me devuelve un entero si es q hay una linea siguiente.
while(!feof(fp)){
    fgets(buffering,100,fp);
    puts(buffering);
}




    return 0;
}
