/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjung <gjung@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/19 15:28:42 by hykang            #+#    #+#             */
/*   Updated: 2020/07/19 21:27:31 by gjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_space(char c)
{
	if (c == '\t' || c == '\n' || c == '\v' ||
	c == '\f' || c == '\r' || c == ' ')
	{
		return (1);
	}
	return (0);
}

int		check_space(char *c)
{
	int index;

	index = 0;
	while (is_space(c[index]) != 0)
	{
		index++;
	}
	return (index);
}

int		is_numeric(char c)
{
	if ('0' <= c && c <= '9')
	{
		return (1);
	}
	return (0);
}

int		ft_atoi(char *str)
{
	int index;
	int is_negative;
	int result;

	index = check_space(str);
	is_negative = -1;
	result = 0;
	while (str[index] == '-' || str[index] == '+')
	{
		if (str[index] == '-')
			is_negative *= -1;
		index++;
	}
	while (is_numeric(str[index]) != 0)
	{
		result *= 10;
		if (is_negative == 1)
			result -= str[index] - '0';
		else
			result += str[index] - '0';
		index++;
	}
	return (result);
}
