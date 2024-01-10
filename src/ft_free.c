/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diegmore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 16:29:30 by diegmore          #+#    #+#             */
/*   Updated: 2024/01/09 16:31:16 by diegmore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	free_struct(t_node *node)
{
	t_node *pnode;

    pnode = node;

    while(pnode->next)
    {
        pnode = pnode->next;
    }
    while(pnode->previous)
    {
        free(pnode);
        pnode = pnode->previous;
    }
    free(pnode);
    return(1);
}



void free_array(char **num)
{
    int lenarr;
    lenarr = 0;

    while (num[lenarr])
        lenarr++;
    lenarr--;
    while (lenarr != 0)
    {
        free(num[lenarr]);
        lenarr--;
    }
    free(num);
}


void return_free(char **num, void type)
{
    free_array(num);
    return(0);
}