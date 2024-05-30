/*
 *             ░       ░                             ░    ░   
 *    .*✶░█▀▄ █ █▀▄▀█ █ ▀█▀ █▀█ █ █░█ █▀ █▀▀ █░█ █▀█ █▀█ █░✶*..
 *     ..*█▄▀ █ █░▀░█ █ ░█░ █▀▄ █ ▀▀█ ▄█ █▄▄ █▀█ █▄█ █▄█ █▄▄*✶.
 *                                 github:DimitriFromSchool::.
 *  ────────────────────────────────────────────────────────────
 *           Project: ex1001.c
 *                      Created: 2024-05-30, 22:18:32 |
 *                      Updated: 2024-05-30, 22:18:32 | 
 *  ────────────────────────────────────────────────────────────
 */

#include <stdio.h>

void prompt();

int main (void)
{
    int loop;
    char input[32];

    loop = 0;
    while(loop <5)
    {
        prompt();
        fgets(input,31, stdin);
        loop++;
    }
    return (0);
}

void prompt(void)
{
    printf("C:\\DOS>");
}
