/*
             ░       ░                             ░    ░   
    .*✶░█▀▄ █ █▀▄▀█ █ ▀█▀ █▀█ █ █░█ █▀ █▀▀ █░█ █▀█ █▀█ █░✶*..
     ..*█▄▀ █ █░▀░█ █ ░█░ █▀▄ █ ▀▀█ ▄█ █▄▄ █▀█ █▄█ █▄█ █▄▄*✶.
                                 github:DimitriFromSchool::.
  ────────────────────────────────────────────────────────────
           Project: ex1121.c
                      Created: 2024-06-08, 23:17:51 |
                      Updated: 2024-06-08, 23:37:41 | 
  ────────────────────────────────────────────────────────────
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int tentative;
    int nombreEssais = 1;
    srand((unsigned int)time(NULL));
    int Secret = rand() % 10;
    
    while ( nombreEssais < 4)
    {
        printf("Tentes de deviner le chiffre secret:");
        scanf("%d", &tentative);
    
        if (tentative == Secret)
        {
            printf("Bravo! %d est bien le chiffre secret.\
             \nTu as trouvé en %d essai(s).\n", Secret, nombreEssais);
            return (0);
        }
        else
        {
            printf("Oh non tu n'as pas trouvé...! Essaye encore !\n");
            nombreEssais++;
        }      
    }  
    printf("Heu en fait non...\n");
    printf ("Tu as fait trop de tentatives! Le chiffre secret était %d \nGAME OVER...", Secret);
    return (0);
}