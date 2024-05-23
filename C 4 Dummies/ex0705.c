/*
             ░       ░                             ░    ░   
    .*✶░█▀▄ █ █▀▄▀█ █ ▀█▀ █▀█ █ █░█ █▀ █▀▀ █░█ █▀█ █▀█ █░✶*..
     ..*█▄▀ █ █░▀░█ █ ░█░ █▀▄ █ ▀▀█ ▄█ █▄▄ █▀█ █▄█ █▄█ █▄▄*✶.
                                 github:DimitriFromSchool::.
  ────────────────────────────────────────────────────────────
           Project: ex0705.c
                      Created: 2024-05-23, 19:20:52 |
                      Updated: 2024-05-23, 19:31:39 | 
  ────────────────────────────────────────────────────────────
 */

#include <stdio.h>

int main(void)
{
    int ch;

    printf("Tapez sur la touche 'Entrée' :\n");
    getchar(); //getchar est utilisé içi pour marquer une pause et faire executer une action à l'user avant d'afficer le message.
    ch = 'H';
    putchar(ch);
    ch = 'i';
    putchar(ch);
    putchar('!');
    return (0);
}