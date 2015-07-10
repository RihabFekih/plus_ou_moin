#include <stdio.h>

#include <stdlib.h>

#include <time.h>

#include <math.h>

int main ( int argc, char** argv )

{

    int nombreMystere = 0, nombreEntre = 0, compteur , MAX , niveau ;

    const int MIN = 1;

    int continuerPartie = 1 ;

    while (continuerPartie)
    {
     // choisir le niveau de dificulte
     printf("   *** les niveau du difficulte *** \n");
     printf("         1 = entre 1 et 100 \n");
     printf("         2 = entre 1 et 1000 \n");
     printf("         3 = entre 1 et 10000 \n");
     printf("quel est le niveau que vous choisissez: ");
     scanf("%d",&niveau);
     MAX = pow(10, niveau+1);

    // initialiser le nombre des coups a zero
    compteur = 0 ;

    // G�n�ration du nombre al�atoire

    srand(time(NULL));

    nombreMystere = (rand() % (MAX - MIN + 1)) + MIN;

    /* La boucle du programme. Elle se r�p�te tant que l'utilisateur n'a pas trouv� le nombre myst�re */

    do

    {

        // On demande le nombre

        printf("Quel est le nombre ? ");

        scanf("%d", &nombreEntre);

        // on incremente le nombre des coups
        compteur++;

        // On compare le nombre entr� avec le nombre myst�re

        if (nombreMystere > nombreEntre)

            printf("C'est plus !\n\n");

        else if (nombreMystere < nombreEntre)

            printf("C'est moins !\n\n");

        else

            printf ("Bravo, vous avez trouv� le nombre mystere en %d coups\n\n",compteur);

    } while (nombreEntre != nombreMystere);

   printf("voulez vous rejouer si oui pressez sur 1 sinon 0:  ");
   scanf("%d",&continuerPartie);
    }
    return 0;

}
