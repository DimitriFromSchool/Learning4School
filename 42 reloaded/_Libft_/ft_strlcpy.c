/*
  ░       ░                             ░    ░   
  .*✶░█▀▄ █ █▀▄▀█ █ ▀█▀ █▀█ █ █░█ █▀ █▀▀ █░█ █▀█ █▀█ █░✶*..
   ..*█▄▀ █ █░▀░█ █ ░█░ █▀▄ █ ▀▀█ ▄█ █▄▄ █▀█ █▄█ █▄█ █▄▄*✶.
                               github:DimitriFromSchool::.
────────────────────────────────────────────────────────────
         Project: ft_strlcpy.c
                    Created: 2024-07-17, 2:06:08 |
                    Updated: 2024-07-18, 4:00:07 |
────────────────────────────────────────────────────────────
*/

#include <stdio.h>

size_t strlcpy(char *dst, const char *src, size_t size)
{
  size_t i;
  size_t length;
  
  i = 0;
  length = 0;
  
  if (size == 0)
    return (length);
    
  while ( src[i] =! '\0' && i < size )
  {
    dest[i] = src[i];
    i++;
  }
  dest[i] = '\0';
  return (length);
}

int main (void)
{
  
  char *source = "Hello!";
  char *destination;
  size_t size = 6;

  strlcpy(destination, source, size);

  printf("%s \n", destination);
  return (0);
}
