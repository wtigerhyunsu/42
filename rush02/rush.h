/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjung <gjung@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/19 15:27:34 by hykang            #+#    #+#             */
/*   Updated: 2020/07/19 17:56:51 by gjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH_H
# define RUSH_H

int		check_argv(char *str);
char	*get_word_three(char *str, int length);
int		cal_dict(char *str, int count, int is_first);
int		make_ouput_word(char *str, int count, int rest_count);
int		rush(char *str);
#endif
