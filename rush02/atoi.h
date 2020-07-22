/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjung <gjung@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/19 15:02:28 by hykang            #+#    #+#             */
/*   Updated: 2020/07/19 21:27:33 by gjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ATOI_H
# define ATOI_H

int		is_space(char c);
int		check_space(char *c);
int		is_numeric(char c);
int		ft_atoi(char *str);
#endif
