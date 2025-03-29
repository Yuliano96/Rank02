/*
Nombre de la asignación: fizzbuzz
Archivos esperados: fizzbuzz.c
Funciones permitidas: write
--------------------------------------------------------------------------------

Escriba un programa que imprima los números del 1 al 100, separados por una nueva línea.

Si el número es múltiplo de 3, imprime "fizz".

Si el número es múltiplo de 5, imprime "buzz".

Si el número es múltiplo de 3 y de 5, imprime "fizzbuzz".

Ejemplo:

$>./fizzbuzz
1
2
fizz
4
buzz
fizz
7
8
fizz
buzz
11
fizz
13
14
fizzbuzz
[...]
97
98
fizz
buzz
$>
*/

#include <unistd.h>

void	put_nbr(int nbr)
{
	char	c;

	if (nbr < 10)
	{
		c = nbr + 48;
		write(1, &c, 1);
	}
	else
	{
		put_nbr(nbr / 10);
		c = nbr%10 + 48;
		write(1, &c, 1);

	}
}

void	fizzbuzz()
{
	int i;
	i = 1;
	while (i <= 100)
	{
		if ((i % 3) == 0 && (i % 5 ) == 0)
			write(1,"fizzbuzz\n", 9);
		else if (i % 3 == 0)
			write(1,"fizz\n", 5);
		else if (i % 5 == 0)
			write(1, "buzz\n", 5);
		else
		{
			put_nbr(i);
			write(1, "\n", 1);
		}
		i++;
	}

}
int main()
{
	fizzbuzz();
	return (0);
}