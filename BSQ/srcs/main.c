/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elim <elim@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/22 08:15:25 by heryu             #+#    #+#             */
/*   Updated: 2020/07/22 17:32:20 by heryu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int		main(int argc, char **argv)
{
	int		fd;
	char	*map_data;
	char	**splited_map;
	int		repeat;

	repeat = (argc == 1) ? 1 : argc - 1;
	while (repeat--)
	{
		fd = (argc == 1) ? 0 : get_fd(argv[argc - repeat - 1]);
		if (fd < 0)
			map_error_free_all(0, NULL, NULL, NULL);
		else if ((map_data = read_map(fd)) == NULL)
			map_error_free_all(fd, NULL, NULL, NULL);
		else if ((splited_map = ft_split(map_data)) == NULL)
			map_error_free_all(fd, map_data, NULL, NULL);
		else if (!is_valid_map(splited_map))
			map_error_free_all(fd, map_data, splited_map, NULL);
		else if (!solve())
			map_error_free_all(fd, map_data, splited_map, NULL);
		else
			free_all(fd, map_data, splited_map, g_dp);
	}
	return (0);
}
