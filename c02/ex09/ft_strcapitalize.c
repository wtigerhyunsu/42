/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hykang <hykang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 14:14:17 by hykang            #+#    #+#             */
/*   Updated: 2020/07/15 14:14:41 by hykang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	upcase(char *str, int i)
{
	if (str[i] >= 'a' && str[i] <= 'z')
		str[i] = str[i] - 32;
}

void	lowcase(char *str, int i)
{
	if (str[i] >= 'A' && str[i] <= 'Z')
		str[i] = str[i] + 32;
}

char	*ft_strcapitalize(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (i == 0)
			upcase(str, 0);
		else
			lowcase(str, i);
		i++;
	}
	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i - 1] >= 'a' && str[i - 1] <= 'z') &&
				!(str[i - 1] >= 'A' && str[i - 1] <= 'Z'))
		{
			if (!(str[i - 1] >= '0' && str[i - 1] <= '9'))
				upcase(str, i);
		}
		i++;
	}
	return (str);
}
