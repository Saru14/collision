/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   movement_2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbodson <jbodson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/01 15:49:04 by namenega          #+#    #+#             */
/*   Updated: 2021/02/04 20:18:47 by jbodson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../cub3d.h"

void		ft_mvleft(t_pos *pos, t_map *map)
{
		printf("x = %f\n", pos->dir.x);
		printf("y = %f\n", pos->dir.y);
		if((map->real_map[(int)(map->x - 0.2)][(int)map->y] == 7) &&
		 (map->real_map[(int)(map->x  + 0.2)][(int)map->y] == 7))
			map->x -= pos->dir.y * MS;
		if((map->real_map[(int)map->x][(int)(map->y - 0.2)] == 7) && 
		(map->real_map[(int)map->x][(int)(map->y + 0.2)] == 7))
			map->y += pos->dir.x * MS;
}

void		ft_mvright(t_pos *pos, t_map *map)
{
	if(KEYCODE_D) //move right if no wall in front of you
	{
		if((map->real_map[(int)(map->x  - 0.2)][(int)map->y] == 7) &&
		 (map->real_map[(int)(map->x + 0.2)][(int)map->y] == 7))
			map->x += pos->dir.y * MS;
		if((map->real_map[(int)map->x][(int)(map->y - 0.2)] == 7) && 
		(map->real_map[(int)map->x][(int)(map->y + 0.2)] == 7))
			map->y -= pos->dir.x * MS;
	}
}

// int			hook_loop(t_pos *pos/*, t_map *map*/)
// {
// 	ft_rotate_left(pos);
// 	ft_rotate_right(pos);
// 	// ft_rotate_mvright(pos, map);
// 	// ft_rotate_mvleft(pos, map);
// 	// ft_rotate_mvforward(pos, map);
// 	// ft_rotate_mvbackward(pos, map);
// 	return (0);
// }
