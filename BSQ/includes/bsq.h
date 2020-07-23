/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elim <elim@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/22 14:50:00 by elim              #+#    #+#             */
/*   Updated: 2020/07/22 17:30:23 by heryu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQ_H
# define BSQ_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

extern char		**g_map;
extern char		g_c[3];
extern int		g_row_cnt;
extern int		g_col_cnt;
extern int		g_max;
extern int		g_i;
extern int		g_j;
extern int		**g_dp;

int		get_fd(char *filename);
int		close_file(int fd);
void	map_error_free_all(int fd, char *map_data, char **splitedmap, int **dp);
void	ft_puterror(char *str);
void	free_all(int fd, char *map_data, char **splited_map, int **dp);
int		free_map(char **splited_map);
int		free_dp(void);
char	*read_map(int fd);
int		ft_strlen(char *str);
void	ft_putstr(char *str);
int		ft_memcpy(char *dest, char *src, int size);
int		ft_atoi(char *nbr_str, int size);
char	**ft_split(char *map);
int		get_line_count(char *str);
int		get_char_cnt(char *map, int pivot);
char	**free_allocated_map(char **map, int size);
void	init_max_index(int value);
int		**create_dp_array(void);
void	init_first_row(void);
void	init_first_col(void);
int		solve(void);
void	start_dp(void);
void	modify_map(void);
void	print_map(void);
int		get_min_value(int i, int j);
void	memorized_max_index(int i, int j);
int		is_valid_map(char **map);
int		is_valid_first_line(char **map);
int		is_duplicate(char *c);
int		is_printable_map(char *map);
int		is_valid_nbr(char *nbr_str, int size);
int		is_same_as_row_cnt(char *map, int size);
int		is_valid_rest_line(char **map);
int		is_printable(char ch);
int		is_same_as_col_cnt(char **map);
int		is_valid_box_char(char **map);

#endif
