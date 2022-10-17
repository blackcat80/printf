/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions_2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csitja-b <csitja-b@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 18:54:04 by csitja-b          #+#    #+#             */
/*   Updated: 2022/10/17 20:48:08 by csitja-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	check_base(char *base)
{
	int	i;
	int	z;

	i = 0;
	z = 0;
	if (base[0] == '\0' || base[1] == '\0')
		return (0);
	while (base[i])
	{
		z = i + 1;
		if (base[i] == '+' || base[i] == '-')
			return (0);
		if (base[i] < 32 || base[i] > 126)
			return (0);
		while (base[z])
		{
			if (base[i] == base[z])
				return (0);
			z++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base_u(unsigned int n, char *base, int *len)
{
	unsigned int	base_len;

	if (check_base(base))
	{
		base_len = 0;
		while (base[base_len])
			base_len++;
		if (n > base_len - 1)
		{
			ft_putnbr_base_ul(n / base_len, base, len);
			if (*len == -1)
				return ;
			n %= base_len;
		}
		ft_putchar(base[n], len);
		if (*len == -1)
			return ;
	}
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
	{
		ft_putstr("0x0", arg_len);
		if (*arg_len == -1)
			return ;
	}
	else
	{
		ft_putstr("0x", arg_len);
		if (*arg_len == -1)
			return ;
		ft_putnbr_base_ul(address, "0123456789abcdef", arg_len);
		if (*arg_len == -1)
			return ;
	}
}
