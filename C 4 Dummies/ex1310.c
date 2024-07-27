/*
  ░       ░                             ░    ░   
  .*✶░█▀▄ █ █▀▄▀█ █ ▀█▀ █▀█ █ █░█ █▀ █▀▀ █░█ █▀█ █▀█ █░✶*..
   ..*█▄▀ █ █░▀░█ █ ░█░ █▀▄ █ ▀▀█ ▄█ █▄▄ █▀█ █▄█ █▄█ █▄▄*✶.
                               github:DimitriFromSchool::.
────────────────────────────────────────────────────────────
         Project: ex1310.c
                    Created: 2024-07-26, 1:56:47 |
                    Updated: 2024-07-26, 2:03:59 |
────────────────────────────────────────────────────────────
*/

#include <stdio.h>
#include <string.h>

int main (void)
{
    char primo[40];
    char secundo[20];
    
    printf("Entrez votre prénom :");
    scanf("%s", primo);
    printf("Entrez votre nom de famille :");
    scanf("%s", secundo);
    strcat(primo, secundo);
    printf("Ravi de vous voir, %s!\n", primo);
    return (0);
}