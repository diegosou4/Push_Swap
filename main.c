/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diegmore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 12:06:21 by diegmore          #+#    #+#             */
/*   Updated: 2024/01/09 12:06:23 by diegmore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int ac, char **av)
{
    int i;
    if(ac < 2)
        return(0);
    i = check_arg(ac,av);
    t_node *stacka;

    stacka = save_values(ac,av);
    return(0);
}