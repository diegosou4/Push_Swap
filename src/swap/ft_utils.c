/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diemorei <diemorei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 12:35:41 by diegmore          #+#    #+#             */
/*   Updated: 2024/02/01 12:04:32 by diegmore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

int	is_sorted(t_node **stacka)
{
	t_node	*p;
	t_node	*ptr;

	p = (*stacka);
	while (p->next)
	{
		ptr = p->next;
		while (ptr)
		{
			if (p->num > ptr->num)
				return (0);
			else
				ptr = ptr->next;
		}
		p = p->next;
	}
	return (1);
}

int	len_darray(char **num)
{
	int	i;

	i = 0;
	while (num[i])
		i++;
	return (i);
}

t_node	*find_last(t_node *stack)
{
	t_node	*last;

	last = stack;
	while (last->next)
		last = last->next;
	return (last);
}

int	ft_nodesize(t_node **stack)
{
	int		i;
	t_node	*pstack;

	pstack = (*stack);
	i = 0;
	while (pstack != NULL)
	{
		i++;
		pstack = pstack->next;
	}
	return (i);
}

int	error_num(char *str)
{
	ft_printf("%s\n", str);
	return (0);
}
