/*
  ░       ░                             ░    ░   
  .*✶░█▀▄ █ █▀▄▀█ █ ▀█▀ █▀█ █ █░█ █▀ █▀▀ █░█ █▀█ █▀█ █░✶*..
   ..*█▄▀ █ █░▀░█ █ ░█░ █▀▄ █ ▀▀█ ▄█ █▄▄ █▀█ █▄█ █▄█ █▄▄*✶.
                               github:DimitriFromSchool::.
────────────────────────────────────────────────────────────
         Project: ex1318.c
                    Created: 2024-07-29, 11:01:36 |
                    Updated: 2024-07-29, 11:08:02 |
────────────────────────────────────────────────────────────
*/

#include <stdio.h>

int main (void) 
{
    char primo, secundo;
    
    printf("Initiale de votre prenom : ");
    primo = getchar();
    printf("Initiale de votre nom de famille :");
    secundo = getchar();
    printf("Vos initiales sont '%c' et '%c' \n", primo, secundo);
    return (0);
}

