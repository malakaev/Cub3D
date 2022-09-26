/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cub_map_check_contur_bonus.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgolda <kgolda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 11:52:09 by gulwyck           #+#    #+#             */
/*   Updated: 2022/04/27 16:36:38 by kgolda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d_bonus.h"

void	ft_map_err_symb_exit(char error, char symbol, int i, int j)
{
	char	*error_msg;

	if (error == 'v')
		error_msg = "vertical contour is unclosed";
	else
		error_msg = "horizontal contour is unclosed";
	printf("Error: %s '%c' h - %d, w - %d\n", error_msg, symbol, i, j);
	exit (EXIT_FAILURE);
}

void	ft_check_map_border_row(char **map, t_glb *glb)
{
	int	j;
	int	i;

	i = 0;
	while (i < glb->map.rows)
	{
		j = 0;
		while (map[i][j] == ' ' && j < glb->map.row_len - 1)
			j++;
		if (map[i][j] != '1' && j < glb->map.row_len - 1)
			ft_map_err_symb_exit('h', map[i][j], i, j);
		j = glb->map.row_len - 1;
		while (map[i][j] == ' ' && j > 0)
			j--;
		if (map[i][j] != '1' && j > 0)
			ft_map_err_symb_exit('h', map[i][j], i, j);
		i++;
	}
}

void	ft_check_map_border_column(char **map, t_glb *glb)
{
	int	j;
	int	i;

	i = 0;
	while (i < glb->map.row_len)
	{
		j = 0;
		while (map[j][i] == ' ' && j < glb->map.rows - 1)
			j++;
		if (map[j][i] != '1' && j < glb->map.rows - 1)
			ft_map_err_symb_exit('v', map[j][i], j, i);
		j = glb->map.rows - 1;
		while (map[j][i] == ' ' && j > 0)
			j--;
		if (map[j][i] != '1' && j > 0)
			ft_map_err_symb_exit('v', map[j][i], j, i);
		i++;
	}
}

void	ft_check_contour_map_in_rows(char **map, t_glb *glb)
{
	int	j;
	int	i;

	i = 0;
	while (i < glb->map.rows)
	{
		j = 0;
		while (j < glb->map.row_len - 1)
		{
			while (j < glb->map.row_len - 1 && map[i][j] != ' ')
				j++;
			if (j > 0 && j < glb->map.row_len - 1 && map[i][j - 1] != '1')
				ft_map_err_symb_exit('h', map[i][j], i, j);
			while (j < glb->map.row_len - 1 && map[i][j] == ' ')
				j++;
			if (j < glb->map.row_len - 1 && map[i][j] != '1')
				ft_map_err_symb_exit('h', map[i][j], i, j);
		}
		i++;
	}
}

void	ft_check_contour_map_in_columns(char **map, t_glb *glb)
{
	int	j;
	int	i;

	i = 0;
	while (i < glb->map.row_len)
	{
		j = 0;
		while (j < glb->map.rows - 1)
		{
			while (j < glb->map.rows - 1 && map[j][i] != ' ')
				j++;
			if (j > 0 && j < glb->map.rows - 1 && map[j - 1][i] != '1')
				ft_map_err_symb_exit('v', map[j][i], j, i);
			while (j < glb->map.rows - 1 && map[j][i] == ' ')
				j++;
			if (j < glb->map.rows - 1 && map[j][i] != '1')
				ft_map_err_symb_exit('v', map[j][i], j, i);
		}
		i++;
	}
}
