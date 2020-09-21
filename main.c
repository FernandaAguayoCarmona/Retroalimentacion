#include <stdio.h>
#include <stdlib.h>
#include <conio.h>


typedef struct personaje {char nombre [30];
char tipo[30]; int fuerza; int salud;}personaje;

int main ()
{
    caracter_personaje ();
    getch ();
    return 0;
}

// Captura de datos del personaje
void caracter_personaje()
{
    int i=0;
    personaje perso[4];

    for (i=0;i<5;i++)
    {
        printf ("\nPersonajes");
        printf ("\nNombre del personaje:");
        scanf ("%s",&perso[i].nombre);

        printf ("\nTipo del personaje:");
        scanf ("%s",&perso[i].tipo);

        printf ("\nFuerza del personaje:");
        scanf ("%d",&perso[i].fuerza);

        printf ("\nSalud del personaje:");
        scanf ("%d",&perso[i].salud);

        system ("cls");
    }
}