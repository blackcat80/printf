/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printchar.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csitja-b <csitja-b@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 16:47:14 by csitja-b          #+#    #+#             */
/*   Updated: 2022/10/03 17:13:25 by csitja-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_printchar(int c)
{
	write(1, &c, 1);
	return (0);
}
/*
int main(void)
{
	ft_printchar('h');
	return (0);
}*/
