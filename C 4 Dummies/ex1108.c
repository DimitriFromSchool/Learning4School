/*
             ░       ░                             ░    ░   
    .*✶░█▀▄ █ █▀▄▀█ █ ▀█▀ █▀█ █ █░█ █▀ █▀▀ █░█ █▀█ █▀█ █░✶*..
     ..*█▄▀ █ █░▀░█ █ ░█░ █▀▄ █ ▀▀█ ▄█ █▄▄ █▀█ █▄█ █▄█ █▄▄*✶.
                                 github:DimitriFromSchool::.
  ────────────────────────────────────────────────────────────
           Project: ex1108.c
                      Created: 2024-06-02, 21:57:56 |
                      Updated: 2024-06-02, 22:00:12 | 
  ────────────────────────────────────────────────────────────
 */

#include <stdio.h>

#define VALEUR 10

int main(void)
{
    int a;
    
    printf("Modulo : %d \n", VALEUR);
    for (a = 0; a <= 30; a++)
        printf("%d %% %d = %d\n", a, VALEUR, a%VALEUR);
    return (0);
}