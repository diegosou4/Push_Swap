/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checknum.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diegmore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 15:48:34 by diegmore          #+#    #+#             */
/*   Updated: 2024/01/10 15:48:36 by diegmore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int check_duplicates(char **num, int index)
{
    int len;
    int curr;
    curr = index;
    len = len_darray(num);
    while(curr != len)
    {
        index = curr + 1;
        while(num[index])
        {
        if(ft_atoi(num[curr]) == ft_atoi(num[index]))
        {
            ft_printf("Numeros duplicados \n");
            return(0);
        }
        index++;
        }
        curr++;
    }
    return(1);
}

int check_nvalues(char **num, int index)
{
    char *curr;

    while(num[index])
    {
        curr = ft_itoa(ft_atoi(num[index]));
        if(ft_strncmp(num[index],curr, ft_strlen(num[index])))
        {
            free(curr);
            ft_printf("Error \n");
            return(0);
        }
        free(curr);
        index++;
    }
    return(1);
}