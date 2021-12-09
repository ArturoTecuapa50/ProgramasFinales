/*
Autor: Tecuapa Gallardo Arturo
Titulo: Ejercicio 3.2.5
Date: 08/12/2021
*/


#include <stdio.h>
#include <iostream>
#include <math.h>


int vect []= {8, 10, -3, 4, -5, 50, 2, 3};



/*Suma de 5 elementos de un vector*/


void ordena ( int* v, int len ){
        int i , j , aux ;
        for ( i= 1; i < len ; i++ )
                for ( j= 0; j < len -i ; j++ )
                        if( v[j] > v[j+1] )
                                aux = v[j];
                                v[j]= v[j+1];
                                v[j+1]= aux;
}

int main(void){
 int i;

ordena (vect,8);
for (i= 0; i <8; i++)
        printf ( "%d\n", vect [i]);

}
