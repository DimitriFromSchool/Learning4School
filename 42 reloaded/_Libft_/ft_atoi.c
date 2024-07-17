/*
             ░       ░                             ░    ░   
    .*✶░█▀▄ █ █▀▄▀█ █ ▀█▀ █▀█ █ █░█ █▀ █▀▀ █░█ █▀█ █▀█ █░✶*..
     ..*█▄▀ █ █░▀░█ █ ░█░ █▀▄ █ ▀▀█ ▄█ █▄▄ █▀█ █▄█ █▄█ █▄▄*✶.
                                 github:DimitriFromSchool::.
  ────────────────────────────────────────────────────────────
           Project: ft_atoi.c
                      Created: 2024-06-05, 12:58:25 |
                    Updated: 2024-07-17, 1:26:19 |
  ────────────────────────────────────────────────────────────
 */

#include <stdio.h>
#include <stdlib.h>

int ft_atoi(const char *str)
{
    int i;
    int result;
    int sign;
    
    i = 0;
    result = 0;
    sign = 1;

    while (str[i] != '\0')
    {
        if ( str[i] == '+' || str[i] == '-' )
        {
            if (str[i] == '-')
                sign = -1;
            i++;
        }
        if ( str[i] => 48 || str[i] <= 57)
        {
            result = result * 10 + str[i] - 48 
            i++;
        }
    }
    return (result * sign);
}

int main(void)
{
    char *ascii = "++483647";
    int result = ft_atoi(ascii);

    printf("%d \n", result);
    return (0);
}

//fivv