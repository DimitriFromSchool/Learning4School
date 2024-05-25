/*
             ░       ░                             ░    ░   
    .*✶░█▀▄ █ █▀▄▀█ █ ▀█▀ █▀█ █ █░█ █▀ █▀▀ █░█ █▀█ █▀█ █░✶*..
     ..*█▄▀ █ █░▀░█ █ ░█░ █▀▄ █ ▀▀█ ▄█ █▄▄ █▀█ █▄█ █▄█ █▄▄*✶.
                                 github:DimitriFromSchool::.
  ────────────────────────────────────────────────────────────
           Project: ex0806.c
                      Created: 2024-05-25, 20:53:28 |
                      Updated: 2024-05-25, 21:02:27 | 
  ────────────────────────────────────────────────────────────
 */

#include <stdio.h>

#define SECRET 17

int main(void)
{
    int tentative;
    
    while (1)
    {
        printf("Tentez de deviner le chiffre ou nombre secret : ");
        scanf("%d", &tentative);
    
        if (tentative == SECRET)
        {
            printf("Bravo %d est bien le nombre secret. T'es doué toi!", SECRET);
            return (0);
        }
        else
        {
            puts("Oh non tu n'as pas trouvé... Essaye encore !\n");
        }      
    }   
}