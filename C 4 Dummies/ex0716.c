/*
             ░       ░                             ░    ░   
    .*✶░█▀▄ █ █▀▄▀█ █ ▀█▀ █▀█ █ █░█ █▀ █▀▀ █░█ █▀█ █▀█ █░✶*..
     ..*█▄▀ █ █░▀░█ █ ░█░ █▀▄ █ ▀▀█ ▄█ █▄▄ █▀█ █▄█ █▄█ █▄▄*✶.
                                 github:DimitriFromSchool::.
  ────────────────────────────────────────────────────────────
           Project: ex0716.c
                      Created: 2024-05-23, 20:41:42 |
                      Updated: 2024-05-23, 20:44:24 | 
  ────────────────────────────────────────────────────────────
 */
#include <stdio.h>

int main(void)
{
    char    personne[30];
    
    printf("Veuillez indiquer votre prénom suivit de votre nom :\n");
    fgets(personne, 10, stdin);
    printf("Ravi de vous rencontrer %s", personne);
    return (0);
}
