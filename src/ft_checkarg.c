/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checkarg.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diemorei <diemorei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 13:06:11 by diegmore          #+#    #+#             */
/*   Updated: 2024/01/15 14:17:54 by diemorei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	check_float(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == '-')
			return (error_num("Tem um valor negativo"));
		if (str[i] == '.' || str[i] == ',')
			return (error_num("Tem um numero que nao e inteiro"));
		i++;
	}
	return (1);
}

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

int	check_arg(int ac, char **av, t_node **stacka)
{
	if (ac == 2)
	{
		value_arr(ac,av,stacka);
		return (1);
	}
	if (ac > 2)
	{
		value_av(ac,av,stacka);
		return (2);
	}
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
				return (error_num("!!!Error Digite apenas numeros!!!"));
			j++;
		}
		index++;
	}
	return (1);
}

int	value_av(int ac, char **av, t_node **stacka)
{
	if (check_num(av,1) == 0 || check_duplicates(av,1) == 0 || check_nvalues(av,1) == 0)
	{
		return (0);
	}
    *stacka = create_stack(av,1);
}

int value_arr(int ac,char **av, t_node **stacka)
{
	char **num;
	num = ft_split(av[1], ' ');
	if(check_num(num,0) == 0 || check_duplicates(num,0) == 0 || check_nvalues(num,0) == 0)
	{
		free_array(num);
		return(0);
	}
	*stacka = create_stack(num,0);
}
/*

"--123"
0
"0"

"--123" == "0"

*/