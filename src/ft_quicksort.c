/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_quicksort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diegmore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 16:42:27 by diegmore          #+#    #+#             */
/*   Updated: 2024/01/25 16:42:29 by diegmore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../push_swap.h"



void quicksort(t_node **stacka,t_node **stackb)
{
    int pivot;
    int middle;
    int index = 0;
    t_node *last;
    t_node *ptr;

    last = find_last(*stacka);
    ptr = *stacka;
    while(index != ft_nodesize(stacka) / 2)
    {
        ptr = ptr->next;
        index++;
    }
    middle = ptr->num;
    pivot = ((*stacka)->num + last->num + middle) / 3;
    printf("Hello Word meu pivot e %i", pivot);
}