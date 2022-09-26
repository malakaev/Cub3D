/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cub_key_handler.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgolda <kgolda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 11:51:11 by gulwyck           #+#    #+#             */
/*   Updated: 2022/04/28 17:34:54 by kgolda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

void	ft_player_forward(t_glb *glb)
{
	int	nxt_x;
	int	nxt_y;

	nxt_x = (int)(glb->player_x + glb->pl_dir_x * glb->speed_move);
	nxt_y = (int)(glb->player_y);
	if (glb->map.map_array[nxt_x][nxt_y] == '0')
		glb->player_x = glb->player_x + glb->pl_dir_x * glb->speed_move;
	nxt_x = (int)(glb->player_x);
	nxt_y = (int)(glb->player_y + glb->pl_dir_y * glb->speed_move);
	if (glb->map.map_array[nxt_x][nxt_y] == '0')
		glb->player_y = glb->player_y + glb->pl_dir_y * glb->speed_move;
}

void	ft_player_backward(t_glb *glb)
{
	int	nxt_x;
	int	nxt_y;

	nxt_x = (int)(glb->player_x - glb->pl_dir_x * glb->speed_move);
	nxt_y = (int)(glb->player_y);
	if (glb->map.map_array[nxt_x][nxt_y] == '0')
		glb->player_x = glb->player_x - glb->pl_dir_x * glb->speed_move;
	nxt_x = (int)(glb->player_x);
	nxt_y = (int)(glb->player_y - glb->pl_dir_y * glb->speed_move);
	if (glb->map.map_array[nxt_x][nxt_y] == '0')
		glb->player_y = glb->player_y - glb->pl_dir_y * glb->speed_move;
}

void	ft_player_left(t_glb *glb)
{
	int	nxt_x;
	int	nxt_y;

	nxt_x = (int)(glb->player_x - glb->cam_pln_x * glb->speed_move);
	nxt_y = (int)(glb->player_y - glb->cam_pln_y * glb->speed_move);
	if (glb->map.map_array[nxt_x][nxt_y] == '0')
	{
		glb->player_x = glb->player_x - glb->cam_pln_x * glb->speed_move;
		glb->player_y = glb->player_y - glb->cam_pln_y * glb->speed_move;
	}
}

void	ft_player_right(t_glb *glb)
{
	int	nxt_x;
	int	nxt_y;

	nxt_x = (int)(glb->player_x + glb->cam_pln_x * glb->speed_move);
	nxt_y = (int)(glb->player_y + glb->cam_pln_y * glb->speed_move);
	if (glb->map.map_array[nxt_x][nxt_y] == '0')
	{
		glb->player_x = glb->player_x + glb->cam_pln_x * glb->speed_move;
		glb->player_y = glb->player_y + glb->cam_pln_y * glb->speed_move;
	}
}
