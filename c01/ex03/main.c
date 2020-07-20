#include <stdio.h>
void	ft_div_mod(int a, int b, int *div, int *mod);

int main(void)
{
	int div = 0, mod = 0;
	ft_div_mod(473, 25, &div, &mod);
	printf("%d, %d", div, mod);
}
