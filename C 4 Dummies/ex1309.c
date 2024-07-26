/*
  ░       ░                             ░    ░   
  .*✶░█▀▄ █ █▀▄▀█ █ ▀█▀ █▀█ █ █░█ █▀ █▀▀ █░█ █▀█ █▀█ █░✶*..
   ..*█▄▀ █ █░▀░█ █ ░█░ █▀▄ █ ▀▀█ ▄█ █▄▄ █▀█ █▄█ █▄█ █▄▄*✶.
                               github:DimitriFromSchool::.
────────────────────────────────────────────────────────────
         Project: ex1309.c
                    Created: 2024-07-26, 1:52:32 |
                    Updated: 2024-07-26, 1:55:04 |
────────────────────────────────────────────────────────────
*/

#include <stdio.h>
#include <string.h>

int main (void)
{
    char password[] = "taco";
    char tabsinput[15];

    printf("Le mot de passe ? ");
    scanf("%s", tabsinput);

    if ((strcasecmp(tabsinput, password)) == 0)
        puts("Mot de passe correct");
    else
        puts("Mot de passe incorrect.");

    return (0);
}