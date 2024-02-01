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
# define PUSH_SWAP_H
# include "./src/ext/libft.h"
# include <stdio.h>

typedef struct node
{
	int			num;
	struct node	*next;
	struct node	*previous;
}				t_node;

void			value_av(char **av, t_node **stacka, t_node **stackc);
void			value_arr(char **av, t_node **stacka, t_node **stackc);
t_node			*create_stack(char **num, int index);
t_node			*new_node(int num);
void			add_back(t_node **node, int num);

int				free_struct(t_node *node);
int				check_arg(int ac, char **av, t_node **stacka, t_node **stackc);
int				check_numbers(int argc, char **argv);
int				check_float(char *str);

// Arr
int				len_darray(char **num);
int				check_duplicates(char **num, int index);
// ARG " "

int				check_nvalues(char **num, int index);
int				check_num(char **num, int index);

// COMANDS
void			ft_swap(t_node **stacka, t_node **stackc);
int				swap(t_node **stack);
int				push(t_node **dest, t_node **src);
int				rotate(t_node **stack);
int				reverse_rotate(t_node **stack);

// Use and Print

void			ss(t_node **stacka, t_node **stackb);
void			rr(t_node **stacka, t_node **stackb);
void			rrr(t_node **stacka, t_node **stackb);

void			rchoose(t_node **stack, int who);
void			rrchoose(t_node **stack, int who);
void			schoose(t_node **stack, int who);
void			pchoose(t_node **stack1, t_node **stack2, int who);
// Check
int				ft_nodesize(t_node **stack);
int				is_sorted(t_node **stacka);
int				my_sort(t_node **stacka, t_node **stackb, t_node **stackc);
int				low_number(t_node **stacka);

// Case
void			case3(t_node **stacka);
void			case5(t_node **stacka, t_node **stackb);
int				find_min(t_node **stacka, int nodesize);
void			putinb(t_node **stacka, t_node **stackb, int size);

// FREE
void			free_nvalues(char *curr);
void			free_stack(t_node **stack);
void			freetwo(t_node **stacka, t_node **stackc);
void			free_pivot(t_node *pivot);
void			free_array(char **num);
t_node			*find_last(t_node *stack);

// Sorting Algorithm
int				caselen(int len);
t_node			*stackpivot(t_node **stackc);
int				sort_c(t_node **stackc, t_node **stackd);
void			tempsort(t_node **stackc);

void			findindex(t_node **stack, int pivot);
void			firstsetp(t_node **stacka, t_node **stackb, t_node **stackc);
int				find_indexa(t_node **stack, int pivot, int sizestack);
int				find_indexb(t_node **stack, int pivot, int sizestack);
int				havemin(t_node **stack, int pivot);
void			quicksort(t_node **stacka, t_node **stackb, t_node **stackc);
int				find_indexmin(t_node **stack, int min, int sizestack);
int				findminnum(t_node **stack);
int				findmax(t_node **stack);
int				findbigproxfinal(t_node **stack, int numstackb);
int				findbigproxstart(t_node **stack, int numstackb);
// Messagens de Error
int				error_num(void);
#endif
