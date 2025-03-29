/*
Nombre de la asignación: camel_to_snake
Archivos esperados: camel_to_snake.c
Funciones permitidas: malloc, realloc, write
--------------------------------------------------------------------------------

Escriba un programa que tome una sola cadena en formato lowerCamelCase
y la convierta en una cadena en formato snake_case.

Una cadena lowerCamelCase es una cadena donde cada palabra comienza con mayúscula,
excepto la primera.

Una cadena snake_case es una cadena donde cada palabra está en minúscula, separada por un guión bajo "_".

Ejemplos:
$>./camel_to_snake "hereIsACamelCaseWord"
here_is_a_camel_case_word
$>./camel_to_snake "helloWorld" | cat -e
hello_world$
$>./camel_to_snake | cat -e
$
*/

#include <unistd.h>

char    mayu_minu(char c)
{
    if (c >= 'A' && c <= 'Z')
        c = c + 32;
    return (c);
}

void camel_to_snake(char *s)
{
    int i;
    i = 0;
    while (s[i] != '\0')
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            write(1, "_", 1);
            s[i] = mayu_minu(s[i]);
        }
        write(1, &s[i], 1);
        i++;
    }
}

int main(int argc, char **argv)
{
    if (argc != 2)
        write(1, "\n", 1);
    else
    {
        camel_to_snake(argv[1]);
        write(1, "\n", 1);
    }
    return (0);
}