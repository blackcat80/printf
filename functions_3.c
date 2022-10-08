/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions_3.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csitja-b <csitja-b@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 22:15:16 by csitja-b          #+#    #+#             */
/*   Updated: 2022/10/08 22:20:21 by csitja-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void	ft_putchar(char c, int *base_len)
{
	*base_len += write(1, &c, 1);
}

void	ft_putnbr(int n, int *base_len)
{
	unsigned int	number;

	if (n < 0)
	{
		ft_putchar('-', base_len);
		number = -n;
	}
	else
		number = n;
	if (number > 9)
	{
		ft_putnbr(number / 10, base_len);
		number %= 10;
	}
	ft_putchar(number + '0', base_len);
}

void	ft_putstr(char *s, int *base_len)
{
	int	i;

	i = 0;
	while (s[i])
	{
		ft_putchar(s[i], base_len);
		i++;
	}
}

void	ft_putnbr_u(unsigned int n, int *base_len)
{
	if (n > 9)
	{
		ft_putnbr(n / 10, base_len);
		n %= 10;
	}
	ft_putchar(n + '0', base_len);
}
