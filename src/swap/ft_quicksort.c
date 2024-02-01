/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_quicksort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diemorei <diemorei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 16:42:27 by diegmore          #+#    #+#             */
/*   Updated: 2024/02/01 12:03:04 by diegmore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	tempsort(t_node **stackc)
{
	t_node	*stackd;

	stackd = NULL;
	while (is_sorted(stackc) == 0)
	{
		sort_c(stackc, &stackd);
	}
}

int	caselen(int len)
{
	int	i;

	i = 0;
	if (len <= 80)
		i = 2;
	else if (len <= 100)
		i = 4;
	else if (len <= 150)
		i = 6;
	else if (len <= 500)
		i = 8;
	else if (len <= 1000)
		i = 16;
	else if (len <= INT_MAX)
		i = 20;
	return (i);
}

t_node	*stackpivot(t_node **stackc)
{
	int		len;
	t_node	*stackpiv;
	t_node	*current;
	int		i;
	int		j;

	len = ft_nodesize(stackc) / caselen(ft_nodesize(stackc));
	stackpiv = NULL;
	current = *stackc;
	i = 0;
	j = 0;
	while (current != NULL)
	{
		if (i == (len - 1 + j * len))
		{
			if (j == 0)
				stackpiv = new_node(current->num);
			else
				add_back(&stackpiv, current->num);
			j++;
		}
		current = current->next;
		i++;
	}
	return (stackpiv);
}

void	firstsetp(t_node **stacka, t_node **stackb, t_node **stackc)
{
	t_node	*pivot;
	t_node	*ptr;

	tempsort(stackc);
	pivot = stackpivot(stackc);
	ptr = pivot;
	while (ptr != NULL && ft_nodesize(stacka) != 1)
	{
		while (havemin(stacka, ptr->num) == 1 && ft_nodesize(stacka) != 1)
		{
			if ((*stacka)->num <= ptr->num)
			{
				pchoose(stacka, stackb, 1);
			}
			else
			{
				rchoose(stacka, 2);
			}
		}
		ptr = ptr->next;
	}
	free_pivot(pivot);
}

void	quicksort(t_node **stacka, t_node **stackb, t_node **stackc)
{
	int	max;
	int	nummax;

	firstsetp(stacka, stackb, stackc);
	while (ft_nodesize(stacka) != 0)
	{
		pchoose(stacka, stackb, 1);
	}
	while (ft_nodesize(stackb) != 0)
	{
		nummax = findmax(stackb);
		max = find_indexmin(stackb, nummax, ft_nodesize(stackb) + 1);
		if (max > ((ft_nodesize(stackb) + 1) / 2))
		{
			while ((*stackb)->num != nummax)
				rrchoose(stackb, 1);
		}
		else
		{
			while ((*stackb)->num != nummax)
				rchoose(stackb, 1);
		}
		pchoose(stackb, stacka, 2);
	}
}
