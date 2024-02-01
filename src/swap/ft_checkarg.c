/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checkarg.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diemorei <diemorei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 13:06:11 by diegmore          #+#    #+#             */
/*   Updated: 2024/01/15 15:18:57 by diemorei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

int	check_numbers(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (i < argc)
	{
		j = check_float(argv[i]);
		if (j == 0)
			return (0);
		i++;
	}
	return (1);
}

int	check_arg(int ac, char **av, t_node **stacka, t_node **stackc)
{
	if (ac == 2)
	{
		value_arr(av, stacka, stackc);
		return (1);
	}
	if (ac >= 3)
	{
		value_av(av, stacka, stackc);
		return (2);
	}
	ac = 1;
	return (0);
}

int	check_num(char **num, int index)
{
	int	j;

	while (num[index])
	{
		j = 0;
		while (num[index][j])
		{
			if (ft_isdigit(num[index][j]) == 0)
				return (error_num("Error"));
			j++;
		}
		index++;
	}
	return (1);
}

void	value_av(char **av, t_node **stacka, t_node **stackc)
{

	if (check_num(av, 1) == 0 || check_duplicates(av, 1) == 0
		|| check_nvalues(av, 1) == 0)
	{
		exit(0);
	}
	*stacka = create_stack(av, 1);
	*stackc = create_stack(av, 1);

}

void	value_arr(char **av, t_node **stacka, t_node **stackc)
{
	char	**num;

	num = ft_split(av[1], ' ');
	if (check_num(num, 0) == 0 || check_duplicates(num, 0) == 0
		|| check_nvalues(num, 0) == 0 || len_darray(num) < 1)
	{
		free_array(num);
		exit(0);
	}
	*stacka = create_stack(num, 0);
	*stackc = create_stack(num, 0);
	free_array(num);
}
