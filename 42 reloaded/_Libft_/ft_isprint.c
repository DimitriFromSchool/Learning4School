/*
             ░       ░                             ░    ░   
    .*✶░█▀▄ █ █▀▄▀█ █ ▀█▀ █▀█ █ █░█ █▀ █▀▀ █░█ █▀█ █▀█ █░✶*..
     ..*█▄▀ █ █░▀░█ █ ░█░ █▀▄ █ ▀▀█ ▄█ █▄▄ █▀█ █▄█ █▄█ █▄▄*✶.
                                 github:DimitriFromSchool::.
  ────────────────────────────────────────────────────────────
           Project: ft_isprint.c
                      Created: 2024-05-15, 22:58:45 |
                      Updated: 2024-05-23, 15:34:09 | 
  ────────────────────────────────────────────────────────────
 */

#include <stdio.h>

int ft_isprint(int c)
{
    if (c >= '!' && c <='~')
        return (1);
    else
        return (0);
}

int main(void)
{
     int c;
    c = 115;
    
    if (ft_isprint(c)== 1)
        printf("%c est bien un charactère affichable", c);
    else 
        printf("Ce caractère ne peut as être affiché à l'écran");
    return (0);

}
