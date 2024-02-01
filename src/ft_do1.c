/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_do1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diegmore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 16:11:17 by diegmore          #+#    #+#             */
/*   Updated: 2024/01/23 16:11:18 by diegmore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rchoose(t_node **stack, int who)
{
	if (rotate(stack) == 0)
		return ;
	if (who == 1)
		ft_printf("rb\n");
	else
		ft_printf("ra\n");
}

void	rrchoose(t_node **stack, int who)
{
	if (reverse_rotate(stack) == 0)
		return ;
	if (who == 1)
		ft_printf("rrb\n");
	else
		ft_printf("rra\n");
}

void	schoose(t_node **stack, int who)
{
	if (swap(stack) == 0)
		return ;
	if (who == 1)
		ft_printf("sb\n");
	else
		ft_printf("sa\n");
}

void	pchoose(t_node **stack1, t_node **stack2, int who)
{
	if (push(stack2, stack1) == 0)
		return ;
	if (who == 1)
		ft_printf("pb\n");
	else
		ft_printf("pa\n");
}
