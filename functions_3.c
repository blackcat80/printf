/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions_3.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csitja-b <csitja-b@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 22:15:16 by csitja-b          #+#    #+#             */
/*   Updated: 2022/10/17 20:48:24 by csitja-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putchar(char c, int *base_len)
{
	if (write(1, &c, 1) != 1)
	{
		*base_len = -1;
		return ;
	}
	*base_len += 1;
}

void	ft_putnbr(int n, int *base_len)
{
	unsigned int	number;

	if (n < 0)
	{
		ft_putchar('-', base_len);
		if (*base_len == -1)
			return ;
		number = -n;
	}
	else
		number = n;
	if (number > 9)
	{
		ft_putnbr(number / 10, base_len);
		if (*base_len == -1)
			return ;
		number %= 10;
	}
	ft_putchar(number + '0', base_len);
	if (*base_len == -1)
		return ;
}

void	ft_putstr(char *s, int *base_len)
{
	int	i;

	i = 0;
	if (s == NULL)
	{
		if (write(1, "(null)", 6) != 6)
		{
			*base_len = -1;
			return ;
		}
	}
	while (s[i])
	{
		ft_putchar(s[i], base_len);
		if (*base_len == -1)
			break ;
		i++;
	}
}

void	ft_putnbr_u(unsigned int n, int *base_len)
{
	if (n > 9)
	{
		ft_putnbr(n / 10, base_len);
		if (*base_len == -1)
			return ;
		n %= 10;
	}
	ft_putchar(n + '0', base_len);
	if (*base_len == -1)
		return ;
}

void	ft_putnbr_base_ul(unsigned long n, char *base, int *len)
{
	unsigned long	base_len;

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
