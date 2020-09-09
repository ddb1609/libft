/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddel-bla <ddel-bla@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/08 08:23:02 by ddel-bla          #+#    #+#             */
/*   Updated: 2020/09/08 16:23:47 by ddel-bla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void
	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		*(unsigned char*)(dest + i) = *(unsigned char*)(src + i);
		if (*(unsigned char*)(src + i) == (unsigned char)c)
			return (dest + i + 1);
		i++;
	}
	return (NULL);
}
