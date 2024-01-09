/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diegmore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 12:06:13 by diegmore          #+#    #+#             */
/*   Updated: 2024/01/09 12:06:14 by diegmore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
#include "./ext/libft/libft.h"


typedef struct  node
{
    int num;
    t_node next;
    t_node previus;
}       t_node;

int check_numbers(int argc, char **argv);
int check_float(char *str);


// Messagens de Error
int error_num(char *str);
#endif
