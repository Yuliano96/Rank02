/*
Nombre de la asignación: alpha_mirror
Archivos esperados: alpha_mirror.c
Funciones permitidas: write
--------------------------------------------------------------------------------

Escriba un programa llamado alpha_mirror que tome una cadena y la muestre después de reemplazar cada carácter alfabético por el carácter alfabético opuesto, seguido de un salto de línea.

'a' se convierte en 'z', 'Z' en 'A', 'd' en 'w', 'M' en 'N', y así sucesivamente.

No se cambia el uso de mayúsculas y minúsculas.

Si el número de argumentos no es 1, se muestra solo un salto de línea.

Ejemplos:

$>./alpha_mirror "abc"
zyx
$>./alpha_mirror "My horse is Amazing." | cat -e
Nb slihv rh Znzarmt.$
$>./alpha_mirror | cat -e
$
*/

#include <unistd.h>

/*char abc[] = "abcdefghijklmnopqrstuvwxyz";
char cba[] = "zyxwvutsrqponmlkjihgfedcba";
char ABC[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
char CBA[] = "ZYXWVUTSRQPONMLKJIHGFEDCBA";

void alpha_mirror(char *s)
{
	int i;
	int j;

	i = 0;
	while (s[i] != '\0')
	{
		if(s[i] >= 'a' && s[i] <= 'z' || s[i] >= 'A' && s[i] <= 'Z')
		{
			j = 0;
			while (abc[j] != '\0')
			{
				if (s[i] == abc[j])
				{
					s[i] = cba[j];
					break;
				}
				if (s[i] == ABC[j])
				{
					s[i] = CBA[j];
					break;
				}
				j++;
			}
		}
		write(1, &s[i], 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc != 2)
		write(1, "\n", 1);
	else
	{
		alpha_mirror(argv[1]);
		write(1, "\n", 1);
	}
	return (0);
}*/

#include <unistd.h>

void alpha_mirror(char *s)
{
    int i;

    i = 0;
    while (s[i] != '\0')
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            s[i] = 'z' - (s[i] - 'a');
        }
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
			s[i] = 'Z' - (s[i] - 'A');
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
        alpha_mirror(argv[1]);
        write(1, "\n", 1);
    }
    return (0);
}
