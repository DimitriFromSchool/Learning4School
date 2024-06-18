/*
             ░       ░                             ░    ░   
    .*✶░█▀▄ █ █▀▄▀█ █ ▀█▀ █▀█ █ █░█ █▀ █▀▀ █░█ █▀█ █▀█ █░✶*..
     ..*█▄▀ █ █░▀░█ █ ░█░ █▀▄ █ ▀▀█ ▄█ █▄▄ █▀█ █▄█ █▄█ █▄▄*✶.
                                 github:DimitriFromSchool::.
  ────────────────────────────────────────────────────────────
           Project: ft_atoi.c
                      Created: 2024-06-05, 12:58:25 |
                      Updated: 2024-06-18, 22:20:45 | 
  ────────────────────────────────────────────────────────────
 */

#include <stdio.h>
#include <stdlib.h>

int ft_atoi(const char *str)
{
    int i;
    int num;
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
      //num = str[i] - 48;
    
    
    return (i);
}

int main(void)
{
    char *ascii = "483647";
    int result = ft_atoi(ascii);

    printf("%d \n", result);
    return (0);
}