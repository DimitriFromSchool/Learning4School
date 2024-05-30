/*
             ░       ░                             ░    ░   
    .*✶░█▀▄ █ █▀▄▀█ █ ▀█▀ █▀█ █ █░█ █▀ █▀▀ █░█ █▀█ █▀█ █░✶*..
     ..*█▄▀ █ █░▀░█ █ ░█░ █▀▄ █ ▀▀█ ▄█ █▄▄ █▀█ █▄█ █▄█ █▄▄*✶.
                                 github:DimitriFromSchool::.
  ────────────────────────────────────────────────────────────
           Project: ex0704.c
                      Created: 2024-05-23, 19:14:32 |
                      Updated: 2024-05-30, 22:37:11 | 
  ────────────────────────────────────────────────────────────
 */

#include <stdio.h>

int main(void)
{
    int a;
    int b;
    int c;

    printf("Je vais recevoir trois caractères :\n");
    a = getchar();
    b = getchar();
    c = getchar();
    printf("J'ai obtenu le caractère '%c%c%c'\n", a, b, c);
    return (0);
}