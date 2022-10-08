/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csitja-b <csitja-b@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 20:01:58 by csitja-b          #+#    #+#             */
/*   Updated: 2022/10/08 22:36:08 by csitja-b         ###   ########.fr       */
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

void		print_char(va_list arg, int *arg_len);					// %c  imprime un caracter ascii
void		print_int(va_list arg, int *arg_len);					// %d %i  imprime un real o entero  (%i tan solo un real)
void		print_uint(va_list arg, int *arg_len);					// %u imprime un real sin signo (unsigned int)
void		print_str(va_list arg, int *arg_len);					// %s  imprime una cadena (terminada en '\0')

// funciones en functions_3

void		ft_putchar(char c, int *base_len);
void		ft_putstr(char *s, int *base_len);
void		ft_putnbr(int n, int *base_len);
void		ft_putnbr_u(unsigned int n, int *base_len);
//size_t		ft_strlen(char *str);

// funcions en functions_2

//void		print_hexa(va_list arg, int *arg_len, char c);			// %x %X imprime un hexadecimal tanto en minisculas como mayusculas sin signo
//  pdte funcion puntero
//  pdte funcion %

//int		ft_formats(va_list args, const char format);

/*
int		ft_printchar(int c);									// %c  imprime un caracter ascii
int		ft_printstr(char *str);									// %s  imprime una cadena (terminada en '\0')
int		ft_print_ptr(unsigned long long ptr);					// %p  imprime direccion de memoria (puntero)
int		ft_printnbr(int n);										// %d %i  imprime un real o entero  (%i tan solo un real)
int		ft_print_unsigned(unsigned int n);						// %u imprime un real sin signo (unsigned int)
int		ft_print_hex(unsigned int num, const char format);		// %x %X imprime un hexadecimal tanto en minisculas como mayusculas sin signo
int		ft_printpercent(void);									// %%  imprime simbolo %
*/

#endif
