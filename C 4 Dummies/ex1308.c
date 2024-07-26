/*
  ░       ░                             ░    ░   
  .*✶░█▀▄ █ █▀▄▀█ █ ▀█▀ █▀█ █ █░█ █▀ █▀▀ █░█ █▀█ █▀█ █░✶*..
   ..*█▄▀ █ █░▀░█ █ ░█░ █▀▄ █ ▀▀█ ▄█ █▄▄ █▀█ █▄█ █▄█ █▄▄*✶.
                               github:DimitriFromSchool::.
────────────────────────────────────────────────────────────
         Project: ex1308.c
                    Created: 2024-07-26, 1:50:38 |
                    Updated: 2024-07-26, 1:51:38 |
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

    if ((strcmp(tabsinput, password)) == 0)
        puts("Mot de passe correct");
    else
        puts("Mot de passe incorrect.");

    return (0);
}
    