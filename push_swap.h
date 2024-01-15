/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diemorei <diemorei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 12:06:13 by diegmore          #+#    #+#             */
/*   Updated: 2024/01/15 13:36:30 by diemorei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H
#include "./ext/libft/libft.h"
#include <stdio.h>

typedef struct node
{
    int num;
    int index;
    struct node *next;
    struct node *previous;
} t_node;


t_node	*value_av(int ac, char **av);
t_node *value_arr(int ac,char **av);
t_node *create_stack(char **num, int index);
t_node* new_node(int num, int index);
void add_back(t_node **node,int num, int index);

int	free_struct(t_node *node);
int	check_arg(int ac, char **av, t_node *stacka);
int check_numbers(int argc, char **argv);
int check_float(char *str);


// Arr
int len_darray(char **num);
int check_duplicates(char **num, int index);
// ARG " "


int check_nvalues(char **num, int index);
int	check_num(char **num, int index);
t_node* save_values(int ac,char **av);

// FREE
void free_array(char **num);
void* return_free(char **num, void *type);

// Messagens de Error
int error_num(char *str);
#endif
