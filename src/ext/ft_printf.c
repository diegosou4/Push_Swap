/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diemorei <diemorei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 11:27:57 by diegmore          #+#    #+#             */
/*   Updated: 2023/10/16 22:04:26 by diemorei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_printf(const char *format, ...)
{
	va_list	list;
	int		length;
	int		i;

	va_start(list, format);
	i = 0;
	length = 0;
	while (format[i] != '\0')
	{
		if (format[i] == '%' && ft_strrchr("cspdiuxX%", format[i + 1]))
		{
			length = ft_printc(format, i, length, list);
			i++;
		}
		else
		{
			length += ft_putchar(format[i]);
		}
		i++;
	}
	va_end(list);
	return (length);
}

/*
int	main(void)
{
    ft_printf("ola mundo");

}*/
