/*
             ░       ░                             ░    ░   
    .*✶░█▀▄ █ █▀▄▀█ █ ▀█▀ █▀█ █ █░█ █▀ █▀▀ █░█ █▀█ █▀█ █░✶*..
     ..*█▄▀ █ █░▀░█ █ ░█░ █▀▄ █ ▀▀█ ▄█ █▄▄ █▀█ █▄█ █▄█ █▄▄*✶.
                                 github:DimitriFromSchool::.
  ────────────────────────────────────────────────────────────
           Project: ft_atoi.c
                      Created: 2024-06-05, 12:58:25 |
                      Updated: 2024-06-18, 21:55:53 | 
  ────────────────────────────────────────────────────────────
 */

#include <stdio.h>
#include <stdlib.h>

int ft_atoi(const char *str)
{
    int i;
    int num;
    i = 0;

    while (str[i] != '\0')
    {
        //if ( str[i] == '+' || str[i] == '-' )
        if ( str[i] < 48 && str[i] > 57 )
            return (1);
        num = str[i] - 48;
        
    }
    
    
    return (0);
}

int main(void)
{
    char *ascii = "A-00000483647";
    int result = atoi(ascii) + 1;

    printf("%d \n", result);
    return (0);
}