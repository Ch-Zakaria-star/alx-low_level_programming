#include <stdio.h>
int _putchar(char c);
void *malloc(size_t size);
void free(void *ptr);
char *create_array(unsigned int size, char c);
char *_strdup(char *str);
char *str_concat(char *s1, char *s2);
void free_grid(int **grid, int height);
int **alloc_grid(int width, int height);
char *argstostr(int ac, char **av);
