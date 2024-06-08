/*
             ░       ░                             ░    ░   
    .*✶░█▀▄ █ █▀▄▀█ █ ▀█▀ █▀█ █ █░█ █▀ █▀▀ █░█ █▀█ █▀█ █░✶*..
     ..*█▄▀ █ █░▀░█ █ ░█░ █▀▄ █ ▀▀█ ▄█ █▄▄ █▀█ █▄█ █▄█ █▄▄*✶.
                                 github:DimitriFromSchool::.
  ────────────────────────────────────────────────────────────
           Project: ex1121.c
                      Created: 2024-06-08, 23:17:51 |
                      Updated: 2024-06-08, 23:22:30 | 
  ────────────────────────────────────────────────────────────
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SECRET (rand()%20 + 1);

int main(void)
{
    int tentative;
    int nombreEssais = 1;
    srand((unsigned int)time(NULL));
    
    while (1)
    {
        printf("Tentes de deviner le chiffre ou nombre secret:");
        scanf("%d", &tentative);
    
        if (tentative == SECRET)
        {
            printf("Bravo! %d est bien le nombre secret.\
             \nTu as trouvé en %d essai(s).\n", SECRET, nombreEssais);
            return (0);
        }
        else
        {
            puts("Oh non tu n'as pas trouvé... Essaye encore !\n");
            nombreEssais++;
        }      
    }   
    return (0);
}