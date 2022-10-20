/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csitja-b <csitja-b@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 21:23:32 by csitja-b          #+#    #+#             */
/*   Updated: 2022/10/20 17:52:58 by csitja-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	check_format(char const *str, va_list arg, int *arg_len)
{
	if (*str == 'c')
		return (ft_putchar(va_arg(arg, int), arg_len));
	if (*str == '%')
		*arg_len += write(1, "%", 1);
	if (*str == 'd' || *str == 'i')
		print_int(arg, arg_len);
	if (*str == 'u')
		print_uint(arg, arg_len);
	if (*str == 'x' || *str == 'X')
		print_hexa(arg, arg_len,*str);
	if (*str == 'p')
		print_address_hexa(arg, arg_len);
	if (*str == 's')
		print_str(arg, arg_len);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		len;

	va_start(args, format);
	len = 0;
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			check_format(format, args, &len);
			if (len == -1)
				return (-1);
		}
		else
		{
			if (write(1, format, 1) != 1)
				return (-1);
			len ++;
		}
		format++;
	}
	va_end(args);
	return (len);
}
/*
int main (void)
{
	int		f = 0;
	char 	*s = "Hello World";

	f =	ft_printf("String: %s, %s\n", s, s);
	ft_printf("%d\n", f);
	ft_printf("%p\n", "");
	return (0);
}*/
