/*
 *             ░       ░                             ░    ░   
 *    .*✶░█▀▄ █ █▀▄▀█ █ ▀█▀ █▀█ █ █░█ █▀ █▀▀ █░█ █▀█ █▀█ █░✶*..
 *     ..*█▄▀ █ █░▀░█ █ ░█░ █▀▄ █ ▀▀█ ▄█ █▄▄ █▀█ █▄█ █▄█ █▄▄*✶.
 *                                 github:DimitriFromSchool::.
 *  ────────────────────────────────────────────────────────────
 *           Project: ex1105.c
 *                      Created: 2024-06-01, 22:39:31 |
 *                      Updated: 2024-06-01, 22:39:31 | 
 *  ────────────────────────────────────────────────────────────
 */

#include<stdio.h>

int main(void)
{
    int a,b;

    b = 16;
    printf("Avant, a ne change pas encore et b = %d\n", b);
    a = b++;
    printf("Après la post - incrémentation, a = %d et b = %d\n", a, b);
    return (0);
}