/*
             ░       ░                             ░    ░   
    .*✶░█▀▄ █ █▀▄▀█ █ ▀█▀ █▀█ █ █░█ █▀ █▀▀ █░█ █▀█ █▀█ █░✶*..
     ..*█▄▀ █ █░▀░█ █ ░█░ █▀▄ █ ▀▀█ ▄█ █▄▄ █▀█ █▄█ █▄█ █▄▄*✶.
                                 github:DimitriFromSchool::.
  ────────────────────────────────────────────────────────────
           Project: ft_bzero.c
                      Created: 2024-05-23, 13:49:07 |
                      Updated: 2024-05-23, 15:31:39 | 
  ────────────────────────────────────────────────────────────
 */
#include <stdio.h>

void ft_bzero(void *s, size_t n)
{
    size_t          i;
    unsigned char   *buffer;
    
    i = 0;
    buffer = (unsigned char *)s;

    while (i < n)
    {
        buffer[i] = 0;
        i++;
    }
}

int main(void)
{
    #include <strings.h>
    char input[] = "Hello";
    char inputII[] = "Hello";
    size_t length = 6;
    
    ft_bzero(input,length);
    bzero(inputII,length);

    for (size_t i = 0; i < length; i++) 
    {
        printf("%02x ", input[i]);
    }
    printf("\n");

    for (size_t i = 0; i < length; i++) 
    {
        printf("%02x ", inputII[i]);
    }
    return (0);
}