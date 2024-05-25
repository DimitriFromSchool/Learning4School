/*
             ░       ░                             ░    ░   
    .*✶░█▀▄ █ █▀▄▀█ █ ▀█▀ █▀█ █ █░█ █▀ █▀▀ █░█ █▀█ █▀█ █░✶*..
     ..*█▄▀ █ █░▀░█ █ ░█░ █▀▄ █ ▀▀█ ▄█ █▄▄ █▀█ █▄█ █▄█ █▄▄*✶.
                                 github:DimitriFromSchool::.
  ────────────────────────────────────────────────────────────
           Project: ex0901.c
                      Created: 2024-05-25, 22:23:10 |
                      Updated: 2024-05-25, 22:30:07 | 
  ────────────────────────────────────────────────────────────
 */
#include <stdio.h>

int main(void)
{
    int x;
    
    for (x = 0; x < 10; x++)
    {
        if ( x == 0)
            printf("Je te le dit...Arrête!\n");
        else
            printf("Je te l'ai déjà dit %d fois! \n", x);
    }
    printf ("Arrête!!!");
    return (0); 
}

