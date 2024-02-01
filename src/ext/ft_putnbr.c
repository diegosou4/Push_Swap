/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diemorei <diemorei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 16:56:00 by diegmore          #+#    #+#             */
/*   Updated: 2023/10/16 22:27:55 by diemorei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isnegative(int n)
{
	if (n < 0)
	{
		n *= -1;
		write(1, "-", 1);
	}
	return (n);
}

static int	ft_countwordls(int n)
{
	int	wordls;

	wordls = 0;
	if (n < 0)
	{
		wordls++;
		n *= -1;
	}
	if (n == 0)
		wordls++;
	while (n != 0)
	{
		n = n / 10;
		wordls++;
	}
	return (wordls);
}

static int	ft_minint(int n)
{
	if (n == INT_MIN)
	{
		write(1, "-2147483648", 11);
		return (1);
	}
	return (0);
}

int	ft_putnbr(int n)
{
	int	i;
	int	worlds;

	worlds = 0;
	i = 0;
	worlds = ft_countwordls(n);
	if (ft_minint(n))
		return (11);
	n = ft_isnegative(n);
	if (n > 9)
	{
		i = i + (n % 10);
		ft_putnbr(n / 10);
		i = i + '0';
		write(1, &i, 1);
		return (worlds);
	}
	else
	{
		n += '0';
		write(1, &n, 1);
	}
	return (worlds);
}
