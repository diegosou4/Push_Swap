/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diemorei <diemorei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 12:06:13 by diegmore          #+#    #+#             */
/*   Updated: 2024/01/15 17:19:25 by diemorei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H
#include "./ext/libft/libft.h"
#include <stdio.h>

typedef struct node
{
    int num;
    struct node *next;
    struct node *previous;
} t_node;


int	value_av(int ac, char **av, t_node **stacka);
int value_arr(int ac,char **av, t_node **stacka);
t_node *create_stack(char **num, int index);
t_node	*new_node(int num);
void	add_back(t_node **node, int num);

int	free_struct(t_node *node);
int	check_arg(int ac, char **av, t_node **stacka);
int check_numbers(int argc, char **argv);
int check_float(char *str);

void push_swap(t_node **stacka, t_node **stackb);

// Arr
int len_darray(char **num);
int check_duplicates(char **num, int index);
// ARG " "


int check_nvalues(char **num, int index);
int	check_num(char **num, int index);
t_node* save_values(int ac,char **av);

// COMANDS
int swap(t_node **stack);
int push(t_node **dest, t_node **src);
int rotate(t_node **stack);
int reverse_rotate(t_node **stack);

// FREE
void free_array(char **num);
void* return_free(char **num, void *type);
t_node *find_last(t_node *stack);

// Messagens de Error
int error_num(char *str);
#endif
