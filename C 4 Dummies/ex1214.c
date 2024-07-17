/*
  ░       ░                             ░    ░   
  .*✶░█▀▄ █ █▀▄▀█ █ ▀█▀ █▀█ █ █░█ █▀ █▀▀ █░█ █▀█ █▀█ █░✶*..
   ..*█▄▀ █ █░▀░█ █ ░█░ █▀▄ █ ▀▀█ ▄█ █▄▄ █▀█ █▄█ █▄█ █▄▄*✶.
                               github:DimitriFromSchool::.
────────────────────────────────────────────────────────────
         Project: ex1214.c
                    Created: 2024-07-17, 11:27:02 |
                    Updated: 2024-07-17, 11:42:50 |
────────────────────────────────────────────────────────────
*/

#include <stdio.h> 
#include <stdlib.h>
#include <time.h>

#define TAILLE 6

srand(time( NULL));
int main(void)
{
    int tabulles[40];    
    int temp;
    int i ,j ,k;
    
    /*Remplit le tableau initial */
    for(i = 0; i < 40; i++)
    {
        tabulles[i] = rand() % 101;
    }
    /*Affiche le tableau initial */
    puts("Tableau de départ : ");
    for(i = 0; i < TAILLE; i++)
     printf("%d\t", tabulles[i] );
    putchar('\n');
    
/* Tri du tableau */
    for (j = 0;j < TAILLE-1;j++) 
    {
            for( k = j + 1; k < TAILLE; k++)
            {
                if( tabulles[j] > tabulles[k])
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

