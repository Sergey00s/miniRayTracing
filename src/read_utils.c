/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcakay <mcakay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 16:27:12 by mcakay            #+#    #+#             */
/*   Updated: 2023/01/09 06:27:18 by mcakay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "read.h"

void	ft_free(char **strs)
{
	int	i;

	i = 0;
	while (strs[i])
	{
		free(strs[i]);
		i++;
	}	
	free(strs);
}

void	ft_error(char *str, int error_code, int l)
{
	if (l == -1)
		printf("Error: %s\n", str);
	else
		printf("Line %d: Error: %s\n", l, str);
	exit(error_code);
}

t_vec3	split_vec(char **strs)
{
	t_vec3	vec;

	vec.x = ft_atod(strs[0]);
	vec.y = ft_atod(strs[1]);
	vec.z = ft_atod(strs[2]);
	return (vec);
}
