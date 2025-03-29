/*
Nombre de la asignación: first_word
Archivos esperados: first_word.c
Funciones permitidas: write
--------------------------------------------------------------------------------

Escribe un programa que tome una cadena y muestre su primera palabra, seguida de un salto de línea.

Una palabra es una sección de cadena delimitada por espacios/tabuladores o por el inicio/fin de la cadena.

Si el número de parámetros no es 1, o si no hay palabras, simplemente muestra un salto de línea.

Ejemplos:

$> ./first_word "FOR PONY" | cat -e
FOR$
$> ./first_word "this ... is sparta, then again, perhaps not" | cat -e
this$
$> ./first_word " " | cat -e
$
$> ./first_word "a" "b" | cat -e
$
$> ./first_word " lorem,ipsum " | cat -e
lorem,ipsum$
$>
*/

#include <unistd.h>

void	ft_word(char *s)
{
	int i;

	i = 0;
	// Saltar espacios y tabuladores al inicio
	while (s[i] == ' ' || s[i] == '\t')
		i++;
	// Imprimir la primera palabra
	while (s[i] && s[i] != ' ' && s[i] != '\t')
	{
		write(1, &s[i], 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		ft_word(argv[1]);
	write(1, "\n", 1);
	return (0);
}
