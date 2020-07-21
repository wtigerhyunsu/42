
	#include <stdio.h>
	#include <stdarg.h>
	#include <string.h>
	#include <stdlib.h>

int			ft_find_next_prime(int nb);

int main()
{
		printf("%d\n", ft_find_next_prime(-2));
	printf("%d\n", ft_find_next_prime(24));
	printf("%d\n", ft_find_next_prime(29));
	printf("%d\n", ft_find_next_prime(2147483629));
	printf("%d\n", ft_find_next_prime(2147483630));
	
}
