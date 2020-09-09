/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddel-bla <ddel-bla@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/08 08:24:32 by ddel-bla          #+#    #+#             */
/*   Updated: 2020/09/08 16:20:28 by ddel-bla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void
	ft_putnbr_fd(int n, int fd)
{
	char	str[12];
	int		is_neg;
	int		length;

	is_neg = (n < 0);
	ft_bzero(str, 12);
	if (n == 0)
		str[0] = '0';
	length = 0;
	while (n != 0)
	{
		str[length++] = is_neg ? '0' - (n % 10) : '0' + (n % 10);
		n = (n / 10);
	}
	if (is_neg)
		str[length] = '-';
	else if (length > 0)
		length--;
	while (length >= 0)
		ft_putchar_fd(str[length--], fd);
}
