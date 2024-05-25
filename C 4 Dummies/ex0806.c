/*
             ░       ░                             ░    ░   
    .*✶░█▀▄ █ █▀▄▀█ █ ▀█▀ █▀█ █ █░█ █▀ █▀▀ █░█ █▀█ █▀█ █░✶*..
     ..*█▄▀ █ █░▀░█ █ ░█░ █▀▄ █ ▀▀█ ▄█ █▄▄ █▀█ █▄█ █▄█ █▄▄*✶.
                                 github:DimitriFromSchool::.
  ────────────────────────────────────────────────────────────
           Project: ex0806.c
                      Created: 2024-05-25, 20:53:28 |
                      Updated: 2024-05-25, 21:25:16 | 
  ────────────────────────────────────────────────────────────
 */

#include <stdio.h>

#define SECRET 17

int main(void)
{
    int tentative;
    int nombreEssais = 1;
    
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
}