/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions_1.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csitja-b <csitja-b@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 22:14:29 by csitja-b          #+#    #+#             */
/*   Updated: 2023/01/08 18:24:06 by csitja-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// funcion %c para imprimir un solo caracter

void	print_char(va_list arg, int *arg_len)
{
	char	c;

	c = va_arg(arg, int);
	*arg_len += write(1, &c, 1);
}

// funcion %s para imprimir una string

void	print_str(va_list arg, int *arg_len)
{
	char	*str;

	str = va_arg(arg, void *);
	if (str == NULL)
		ft_putstr("(null)", arg_len);
	else
		ft_putstr(str, arg_len);
}

// funcion %d %i 

void	print_int(va_list arg, int *arg_len)
{
	int		num;

	num = va_arg(arg, int);
	ft_putnbr(num, arg_len);
}

// funcion %u para imprimir un unsigned int

void	print_uint(va_list arg, int *arg_len)
{
	unsigned int	num;

	num = va_arg(arg, unsigned int);
	ft_putnbr_u(num, arg_len);
}
