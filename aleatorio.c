//JUAN ALBERTO OJEDA CRUZ

#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int a[3][3];
int j, i, posicion1, posicion2,posicion3,posicion4;
int aux=1;
int k;

void llenar();
void imprimir();
void desordenar();


main(){
        srand(time(NULL));
       llenar();
       imprimir();
       printf("\n\n");
      
      for(k=0;k<=10;k++){
      
       desordenar();
       printf("\n\n");
       imprimir();
       getch();
       }
       }

void llenar(){
     for(i=0; i<=2; i++)
     {
     for(j=0; j<=2; j++)
     {
      
              a[i][j] = aux++;      
              
              }
     
     }
}

void imprimir()
{
     for(i=0; i<=2; i++)
     {    
           for(j=0; j<=2; j++)
     {    
              printf("\t[%d]", a[i][j]);
              }
    printf("\n\n");
     }
     
}

void desordenar()
{
for(i=0; i<=560; i++)
     {   
  
      
        
              posicion1=rand()%3;
              posicion2=rand()%3;
              posicion3=rand()%3;
              posicion4=rand()%3;
              aux=a[posicion1][posicion2];
              a[posicion1][posicion2]=a[posicion3][posicion4];
              a[posicion3][posicion4]=aux;

              }
    

}

