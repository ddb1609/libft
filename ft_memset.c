/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddel-bla <ddel-bla@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/08 08:22:50 by ddel-bla          #+#    #+#             */
/*   Updated: 2020/09/09 02:46:53 by ddel-bla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void
	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;

	i = 0;
	while (i < n)
	{
		*(unsigned char*)(s + i) = (unsigned char)c;
		i++;
	}
	return (s);
}
