/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hykang <hykang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/19 14:47:40 by hykang            #+#    #+#             */
/*   Updated: 2020/07/19 14:48:45 by hykang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILE_H
# define FILE_H

int				counting(int *fd, int *count);
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);
void			get_key_val(char **key_val, char *start, char *end);
int				one_line(int count, int fd, char *key, char *value);
int				read_file(char *path);
#endif
