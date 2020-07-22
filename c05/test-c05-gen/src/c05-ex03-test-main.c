
	#include <stdio.h>
	#include <stdarg.h>
	#include <string.h>
	#include <stdlib.h>

int		ft_recursive_power(int nb, int power);

int main()
{
	
	printf("%d\n", ft_recursive_power(-3293, -1509));
	printf("%d\n", ft_recursive_power(0, 0));
	printf("%d\n", ft_recursive_power(-371, 0));
	printf("%d\n", ft_recursive_power(1109, 1));
	printf("%d\n", ft_recursive_power(0, 3));
	printf("%d\n", ft_recursive_power(8, 4));
	printf("%d\n", ft_recursive_power(-8, 5));
	printf("%d\n", ft_recursive_power(-5, 6));
	printf("%d\n", ft_recursive_power(-4, 7));
	printf("%d\n", ft_recursive_power(-3, 9));
	printf("%d\n", ft_recursive_power(-2, 10));
}
