/*
             ░       ░                             ░    ░   
    .*✶░█▀▄ █ █▀▄▀█ █ ▀█▀ █▀█ █ █░█ █▀ █▀▀ █░█ █▀█ █▀█ █░✶*..
     ..*█▄▀ █ █░▀░█ █ ░█░ █▀▄ █ ▀▀█ ▄█ █▄▄ █▀█ █▄█ █▄█ █▄▄*✶.
                                 github:DimitriFromSchool::.
  ────────────────────────────────────────────────────────────
           Project: ex0703.c
                      Created: 2024-05-23, 19:12:14 |
                      Updated: 2024-05-23, 19:12:57 | 
  ────────────────────────────────────────────────────────────
 */

#include <stdio.h>

int main(void)
{
    int c;

    printf("Je vais recevoir un caractère :\n");
    c = getc(stdin);
    printf("J'ai obtenu le caractère '%c'\n", c);
    return (0);
}