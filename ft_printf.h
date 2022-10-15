/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csitja-b <csitja-b@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 20:01:58 by csitja-b          #+#    #+#             */
/*   Updated: 2022/10/15 20:54:33 by csitja-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <string.h>

int			ft_printf(const char *format, ...);

// funciones en functions_1

void		print_char(va_list arg, int *arg_len);
void		print_int(va_list arg, int *arg_len);
void		print_uint(va_list arg, int *arg_len);
void		print_str(va_list arg, int *arg_len);

// funciones en functions_3

void		ft_putchar(char c, int *base_len);
void		ft_putstr(char *s, int *base_len);
void		ft_putnbr(int n, int *base_len);
void		ft_putnbr_u(unsigned int n, int *base_len);
void		ft_putnbr_base_ul(unsigned long n, char *base, int *len);

// funcions en functions_2

void		print_hexa(va_list arg, int *arg_len, char c);
void		print_address_hexa(va_list arg, int *arg_len);
int			check_base(char *base);
void		ft_putnbr_base_u(unsigned int n, char *base, int *len);

#endif
