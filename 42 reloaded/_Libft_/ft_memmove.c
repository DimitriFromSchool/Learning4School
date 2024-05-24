/*
             ░       ░                             ░    ░   
    .*✶░█▀▄ █ █▀▄▀█ █ ▀█▀ █▀█ █ █░█ █▀ █▀▀ █░█ █▀█ █▀█ █░✶*..
     ..*█▄▀ █ █░▀░█ █ ░█░ █▀▄ █ ▀▀█ ▄█ █▄▄ █▀█ █▄█ █▄█ █▄▄*✶.
                                 github:DimitriFromSchool::.
  ────────────────────────────────────────────────────────────
           Project: memmove.c
                      Created: 2024-05-24, 22:10:34 |
                      Updated: 2024-05-24, 22:41:49 | 
  ────────────────────────────────────────────────────────────
 */

#include<stdio.h>

void * memmove(void *dest, const void *src, size_t n)
{
    unsigned char       *temp;
    unsigned char       *destination;
    const unsigned char *source;
    size_t              i;
    
    destination = (unsigned char *) dest;
    source = (const void *) src;
    i = 0;

    if (dest == 0 && src == 0)
        return (NULL);
    while (i < n)
    {
        temp[i] = source[i];
        destination [i] = temp[i];
        i++;
    }
    return (destination);
}

int main(void)
{
    
    return (0);
}