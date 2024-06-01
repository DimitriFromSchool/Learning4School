/*
             ░       ░                             ░    ░   
    .*✶░█▀▄ █ █▀▄▀█ █ ▀█▀ █▀█ █ █░█ █▀ █▀▀ █░█ █▀█ █▀█ █░✶*..
     ..*█▄▀ █ █░▀░█ █ ░█░ █▀▄ █ ▀▀█ ▄█ █▄▄ █▀█ █▄█ █▄█ █▄▄*✶.
                                 github:DimitriFromSchool::.
  ────────────────────────────────────────────────────────────
           Project: ex1106.c
                      Created: 2024-06-01, 22:45:00 |
                      Updated: 2024-06-01, 22:46:19 | 
  ────────────────────────────────────────────────────────────
 */

#include<stdio.h>

int main(void)
{
    int a,b;

    b = 16;
    printf("Ici, a change ne pas encore et b = %d\n", b);
    a = ++b;
    printf("Avec la pré - incrémentation, a = %d et b = %d en revanche\n", a, b);
    return (0);
}