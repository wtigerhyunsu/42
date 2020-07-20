/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hykang <hykang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 14:43:42 by hykang            #+#    #+#             */
/*   Updated: 2020/07/15 21:17:59 by hykang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	char *pint;

	pint = dest;
	while (*src != '\0' && n != 0)
	{
		*dest++ = *src++;
		n--;
	}
	while (n != 0)
	{
		*dest++ = '\0';
		n--;
	}
	return (pint);
}
