/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csitja-b <csitja-b@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 21:29:23 by csitja-b          #+#    #+#             */
/*   Updated: 2022/10/06 21:29:49 by csitja-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft/libft.h"

// comprobar todo el codigo

void	print_char(va_list arg, int *arg_len)
{
	char	c;

	c = va_arg(arg, int);
	*arg_len += write(1, &c, 1);
}

void	print_int(va_list arg, int *arg_len)
{
	int		num;

	num = va_arg(arg, int);
	ft_putnbr(num, arg_len);
}

void	print_uint(va_list arg, int *arg_len)
{
	unsigned int	num;

	num = va_arg(arg, unsigned int);
	ft_putnbr_u(num, arg_len);
}

void	print_hexa(va_list arg, int *arg_len, char c)
{
	unsigned long	num;

	num = va_arg(arg, unsigned long);
	if (c == 'X')
		ft_putnbr_base_u(num, "0123456789ABCDEF", arg_len);
	else
		ft_putnbr_base_u(num, "0123456789abcdef", arg_len);
}

void	print_address_hexa(va_list arg, int *arg_len)
{
	unsigned long	address;

	address = va_arg(arg, unsigned long);
	if ((void *)address == NULL)
		ft_putstr(PTR_NULL, arg_len);
	else
	{
		ft_putstr("0x", arg_len);
		ft_putnbr_base_ul(address, "0123456789abcdef", arg_len);
	}
}

