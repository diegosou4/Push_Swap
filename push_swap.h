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
#define PUSH_SWAP_H
#include "./ext/libft/libft.h"


typedef struct node
{
    int num;
    int index;
    struct node *next;
    struct node *previous;
} t_node;

t_node* new_node(int num, int index);
int    create_stack(int argc, char **argv, t_node *stacka, t_node *stackb);


int check_numbers(int argc, char **argv);
int check_float(char *str);


// Messagens de Error
int error_num(char *str);
#endif
