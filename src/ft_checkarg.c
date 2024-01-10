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


int check_arg(int ac,char **av)
{
    if(ac == 2)
        return(1);
    if(ac > 2)
        return(2);
    return(0);

}
int check_num(char **num)
{
    int i;
    int j;
    i = 0;

    while(num[i])
    {
        j = 0;
        while(num[i][j])
        {
            if(ft_isdigit(num[i][j]) == 0)
                return(error_num("!!!Error Digite apenas numeros!!!"));
            j++;
        }
        i++;
    }
    return(1);
}



t_node* save_values(int ac,char **av)
{
    char **num;
    int i;
    t_node stacka;
    i = 0;
    num = ft_split(av[1],' ');
    i = check_num(num);
    if(i == 0)
    {
        free_array(num);
        return(NULL);
    }
        
}