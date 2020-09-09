/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddel-bla <ddel-bla@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/08 08:23:05 by ddel-bla          #+#    #+#             */
/*   Updated: 2020/09/08 16:23:47 by ddel-bla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void
	*ft_memmove(void *dest, const void *src, size_t n)
{
	if ((dest == src) || n == 0)
		return (dest);
	if (dest < src)
		ft_memcpy(dest, src, n);
	else
		while (n--)
			((unsigned char *)dest)[n] = ((unsigned char *)src)[n];
	return (dest);
}
