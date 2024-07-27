/*
  ░       ░                             ░    ░   
  .*✶░█▀▄ █ █▀▄▀█ █ ▀█▀ █▀█ █ █░█ █▀ █▀▀ █░█ █▀█ █▀█ █░✶*..
   ..*█▄▀ █ █░▀░█ █ ░█░ █▀▄ █ ▀▀█ ▄█ █▄▄ █▀█ █▄█ █▄█ █▄▄*✶.
                               github:DimitriFromSchool::.
────────────────────────────────────────────────────────────
         Project: ex1311.c
                    Created: 2024-07-27, 9:51:11 |
                    Updated: 2024-07-27, 9:55:22 |
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
    strcat(primo," ");
    strcat(primo, secundo);
    printf("Ravi de vous voir, %s!\n", primo);
    return (0);
}