/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dict.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjung <gjung@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/19 15:24:28 by hykang            #+#    #+#             */
/*   Updated: 2020/07/19 17:38:52 by gjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DICT_H
# define DICT_H
# define SIZE 1000

typedef	struct	s_dict
{
	int			key;
	char		*value;
}				t_dict;
char			*remove_space_key(char *str);
char			*remove_space_value(char *str);
int				set_three(char *key, char *value);
int				set_etc(char *key, char *value);
int				get_etc_key(char *key);
int				set_dict_value(char *key, char *value);
#endif
