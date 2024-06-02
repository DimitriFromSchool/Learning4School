/*
             ░       ░                             ░    ░   
    .*✶░█▀▄ █ █▀▄▀█ █ ▀█▀ █▀█ █ █░█ █▀ █▀▀ █░█ █▀█ █▀█ █░✶*..
     ..*█▄▀ █ █░▀░█ █ ░█░ █▀▄ █ ▀▀█ ▄█ █▄▄ █▀█ █▄█ █▄█ █▄▄*✶.
                                 github:DimitriFromSchool::.
  ────────────────────────────────────────────────────────────
           Project: ex1107.c
                      Created: 2024-06-02, 21:53:20 |
                      Updated: 2024-06-02, 21:56:42 | 
  ────────────────────────────────────────────────────────────
 */

#include <stdio.h>

#define VALEUR 5

int main(void)
{
    int a;
    
    printf("Modulus %d \n", VALEUR);
    for (a = 0; a < 30; a++)
        printf("%d %% %d = %d\n", a, VALEUR, a%VALEUR);
    return (0);
}