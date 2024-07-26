/*
  ░       ░                             ░    ░   
  .*✶░█▀▄ █ █▀▄▀█ █ ▀█▀ █▀█ █ █░█ █▀ █▀▀ █░█ █▀█ █▀█ █░✶*..
   ..*█▄▀ █ █░▀░█ █ ░█░ █▀▄ █ ▀▀█ ▄█ █▄▄ █▀█ █▄█ █▄█ █▄▄*✶.
                               github:DimitriFromSchool::.
────────────────────────────────────────────────────────────
         Project: ex1307.c
                    Created: 2024-07-26, 1:42:54 |
                    Updated: 2024-07-26, 1:47:51 |
────────────────────────────────────────────────────────────
*/

#include <stdio.h>
#include <string.h>

int main (void)
{
    char password[] = "taco";
    char tabsinput[15];
    int match;

    printf("Le mot de passe ? ");
    scanf("%s", tabsinput);

    match = strcmp(tabsinput, password);
    if (match == 0)
        puts("Mot de passe correct");
    else
        puts("Mot de passe incorrect.");

    return (0);
}
    