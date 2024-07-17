/*
  ░       ░                             ░    ░   
  .*✶░█▀▄ █ █▀▄▀█ █ ▀█▀ █▀█ █ █░█ █▀ █▀▀ █░█ █▀█ █▀█ █░✶*..
   ..*█▄▀ █ █░▀░█ █ ░█░ █▀▄ █ ▀▀█ ▄█ █▄▄ █▀█ █▄█ █▄█ █▄▄*✶.
                               github:DimitriFromSchool::.
────────────────────────────────────────────────────────────
         Project: ex1215.c
                    Created: 2024-07-17, 11:53:09 |
                    Updated: 2024-07-17, 12:27:10 |
────────────────────────────────────────────────────────────
*/


#include <stdio.h> 
#include <stdlib.h>
#include <time.h>

#define TAILLE 4


int main(void)
{
    int tabulles[TAILLE] = {3,5,4,1};    
    int temp;
    int i ,j ,k;
    
    //srand(time(NULL));
    

    /*Affiche le tableau initial */
    puts("Tableau de départ : ");
    for(i = 0; i < TAILLE; i++)
    {
        //tabulles[i] = rand() % 101;
        printf("%d\t", tabulles[i] );
    }
    putchar('\n');
    
/* Tri du tableau par ordre decroissant */
    for (j = 0;j < TAILLE - 1;j++) 
    {
            for( k = j + 1; k < TAILLE; k++)
            {
                if( tabulles[j] < tabulles[k])
                {
                    temp = tabulles[j];
                    tabulles[j] = tabulles[k];
                    tabulles[k] = temp;
                }
        }
    }
    
/* Affiche le tableau apres tri */
puts("Tableau apres tri");
for ( i = 0; i < TAILLE; i++)
{
    printf("%d\t", tabulles[i] );
    putchar('\n');
}

    return (0);
}