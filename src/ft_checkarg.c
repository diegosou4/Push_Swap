/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diegmore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 13:06:11 by diegmore          #+#    #+#             */
/*   Updated: 2024/01/09 13:06:13 by diegmore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int check_float(char *str)
{
    int i;

    i = 0;
    while(str[i])
    {
        if(str[i] == '-')
            return(error_num("Tem um valor negativo"));
        if(str[i] == '.' || str[i] == ',')
            return(error_num("Tem um numero que nao e inteiro"));
        i++;
    }
    return(1);

}

int check_numbers(int argc, char **argv)
{
    int i;
    int j;
    i = 1;

    while(i < argc)
    {
        j = check_float(argv[i]);
        if(j == 0)
             return(0);
        i++;
    }
    return(1);


}
