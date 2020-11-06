#include<stdio.h>
#include<stdlib.h>

void archivo(char nombre[10], int edad, int ganada, int barcos);

int main(){
  
  
  
  
  return 0;
}

void archivo(char nombre[10], int edad, int ganada, int barcos){
   // crea el archivo con los datos del jugador
   /*la funcion recibe 4 parametros
   char nombre[10]: es la cadena del nombre
   int edad: la edad
   int ganada: recibe un 1 o un 0, si el jugador gana guardara 1
               y si pierde guardara un 0
   int barcos: recibe el numero de barcos que logo hundir el perdedor*/

   FILE * flujo;
   flujo = fopen("informacion.txt", "a");
   if(flujo == NULL){
      perror("Error al crear el archivo\n");
   } else {
      if(ganada==1){
        fprintf(flujo, "%s     %d     ganador",nombre, edad);
        fputc('\n', flujo);
      } else{
        fprintf(flujo, "%s     %d     perdedor  %d barcos hundidos",nombre, edad, barcos);
        fputc('\n', flujo);
      }
      fflush(flujo);
      fclose(flujo);
      printf("DATOS GUARDADOS EXITOSAMENTE!!!!!\n\n");
   }
   
}	

