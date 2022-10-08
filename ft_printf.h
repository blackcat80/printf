/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csitja-b <csitja-b@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 15:45:24 by csitja-b          #+#    #+#             */
/*   Updated: 2022/10/06 21:31:28 by csitja-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

//int		ft_printf(const char *format, ...);
//int		ft_formats(va_list args, const char format);
int		ft_printchar(int c);									// %c  imprime un caracter ascii
int		ft_printstr(char *str);									// %s  imprime una cadena (terminada en '\0')
int		ft_print_ptr(unsigned long long ptr);					// %p  imprime direccion de memoria (puntero)
int		ft_printnbr(int n);										// %d %i  imprime un real o entero  (%i tan solo un real)
int		ft_print_unsigned(unsigned int n);						// %u imprime un real sin signo (unsigned int)
int		ft_print_hex(unsigned int num, const char format);		// %x %X imprime un hexadecimal tanto en minisculas como mayusculas sin signo
int		ft_printpercent(void);									// %%  imprime simbolo %


/*
void	ft_putstr(char *str);
void	ft_put_ptr(uintptr_t num);
int		ft_ptr_len(uintptr_t num);
char	*ft_uitoa(unsigned int n);
int		ft_num_len(unsigned	int num);
void	ft_put_hex(unsigned int num, const char format);
int		ft_hex_len(unsigned	int num);
*/
#endif


/*  Esta parte la tengo que comprobar....

# include <stdlib.h>

int		ft_printf(const char *str, ...);

void	print_char(va_list arg, int *arg_len);
void	print_int(va_list arg, int *arg_len);
void	print_uint(va_list arg, int *arg_len);
void	print_hexa(va_list arg, int *arg_len, char c);
void	print_address_hexa(va_list arg, int *arg_len);
void	print_str(va_list arg, int *arg_len);

*/
