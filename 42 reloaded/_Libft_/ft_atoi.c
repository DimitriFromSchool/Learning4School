/*
             ░       ░                             ░    ░   
    .*✶░█▀▄ █ █▀▄▀█ █ ▀█▀ █▀█ █ █░█ █▀ █▀▀ █░█ █▀█ █▀█ █░✶*..
     ..*█▄▀ █ █░▀░█ █ ░█░ █▀▄ █ ▀▀█ ▄█ █▄▄ █▀█ █▄█ █▄█ █▄▄*✶.
                                 github:DimitriFromSchool::.
  ────────────────────────────────────────────────────────────
           Project: ft_atoi.c
                      Created: 2024-06-05, 12:58:25 |
                      Updated: 2024-06-24, 22:58:56 | 
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
        while ( str[i] == '+' || str[i] == '-' )
        {
            num += i;
            i++;
        }
        if (str[i] < 48 || str[i] > 57 || num != 0 )
            return (1);
        i++;
    }
    while ( i > 0)
    {
        // Créer dizaine(num);
        result = num  + (str[i] - 48);
        i--;
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