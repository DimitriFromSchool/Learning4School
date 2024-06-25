/*
             ░       ░                             ░    ░   
    .*✶░█▀▄ █ █▀▄▀█ █ ▀█▀ █▀█ █ █░█ █▀ █▀▀ █░█ █▀█ █▀█ █░✶*..
     ..*█▄▀ █ █░▀░█ █ ░█░ █▀▄ █ ▀▀█ ▄█ █▄▄ █▀█ █▄█ █▄█ █▄▄*✶.
                                 github:DimitriFromSchool::.
  ────────────────────────────────────────────────────────────
           Project: ft_atoi.c
                      Created: 2024-06-05, 12:58:25 |
                      Updated: 2024-06-25, 18:07:09 | 
  ────────────────────────────────────────────────────────────
 */

#include <stdio.h>
#include <stdlib.h>

int ft_atoi(const char *str)
{
    int i;
    int num;
    int result;
    i = 0;
    num = 0;

    while (str[i] != '\0')
    {
        if ( str[i] == '+' || str[i] == '-' )
        {
            num += i;
            i++;
        }
        if ( str[i] => 48 || str[i] <= 57)
        {
            result = str[i] - 48 // Créer dizaine;
            i++;
        }
    }
    return (result);
}

int main(void)
{
    char *ascii = "++483647";
    int result = ft_atoi(ascii);

    printf("%d \n", result);
    return (0);
}

//fivv