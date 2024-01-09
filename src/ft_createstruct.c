/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_createstruct.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diegmore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 14:33:38 by diegmore          #+#    #+#             */
/*   Updated: 2024/01/09 14:33:39 by diegmore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../push_swap.h"


t_node* new_node(int num, int index)
{
    t_node *node = malloc (sizeof(t_node));
    node->num = num;
    node->index = index;
    node->next = NULL;
    node->previous = NULL;
    return(node);
}


int    create_stack(int argc, char **argv, t_node *stacka, t_node *stackb)
{
    int i;
    int num;

    i = 2;
    if(argc == 1)
        return(0);
    num = ft_atoi(argv[1]);
    stacka = new_node(num, 0);
    num = ft_atoi(argv[2]);
    stacka->next = new_node(num,1);
    stacka->previous = stacka;
    ft_printf("%i : valor %i : index \n", stacka->num, stacka->index);
    ft_printf("%i : valor %i : index \n", stacka->next->num, stacka->next->index);

}