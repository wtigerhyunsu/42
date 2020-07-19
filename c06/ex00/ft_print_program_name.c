/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hykang <hykang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/19 12:24:19 by hykang            #+#    #+#             */
/*   Updated: 2020/07/19 12:55:06 by hykang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
void ft_putstr(char *str)
{
	int i;
	
	i = 0;
	while (str[i])
	{
		write(1,&str[i],1);
		i++;
	}
}

int main(int argc,char *argv[])
{
	if(argc>=0)
	{
		ft_putstr(argv[0]);
		ft_putstr("\n");
	}
	return (0);
}
