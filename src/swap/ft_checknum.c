/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checknum.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diemorei <diemorei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 15:48:34 by diegmore          #+#    #+#             */
/*   Updated: 2024/01/15 13:45:39 by diemorei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

int	check_float(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == '-')
			return (error_num());
		if (str[i] == '.' || str[i] == ',')
			return (error_num());
		i++;
	}
	return (1);
}

int	check_duplicates(char **num, int index)
{
	int	len;
	int	curr;

	curr = index;
	len = len_darray(num);
	while (curr != len)
	{
		index = curr + 1;
		while (num[index])
		{
			if (ft_atoi(num[curr]) == ft_atoi(num[index]))
			{
				write(2, "Error\n", 6);
				return (0);
			}
			index++;
		}
		curr++;
	}
	return (1);
}

int	check_nvalues(char **num, int index)
{
	char		*curr;
	long int	value;

	while (num[index])
	{
		value = ft_atoi(num[index]);
		curr = ft_itoa(value);
		if (value < INT_MIN || value > INT_MAX)
			free_nvalues(curr);
		if (num[index][0] == '+' || num[index][0] == '0')
		{
			if (ft_strncmp(&num[index][1], curr, ft_strlen(num[index]) - 1))
				free_nvalues(curr);
		}
		else if (ft_strncmp(num[index], curr, ft_strlen(num[index])))
			free_nvalues(curr);
		free(curr);
		index++;
	}
	return (1);
}
