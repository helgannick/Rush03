#include <unistd.h>


// Função que imprime uma linha com caracteres específicos
void	print_line(char left, char middle, char right, int length)
{
	int	i;

	// Imprime o caractere da esquerda
	if (length > 0)
		ft_putchar(left);
	
	// Imprime os caracteres do meio
	i = 0;
	while (i < length - 2)
	{
		ft_putchar(middle);
		i++;
	}

	// Imprime o caractere da direita
	if (length > 1)
		ft_putchar(right);

	// Nova linha
	ft_putchar('\n');
}

// Função principal que coordena a impressão do "rush"
void	rush(int x, int y)
{
	int	i;

	// Imprime a linha superior
	if (y > 0)
		print_line('A', 'B', 'C', x);

	// Imprime as linhas do meio
	i = 0;
	while (i < y - 2)
	{
		print_line('B', ' ', 'B', x);
		i++;
	}

	// Imprime a linha inferior
	if (y > 1)
		print_line('A', 'B', 'C', x);
}

