/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddel-bla <ddel-bla@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/09 02:37:09 by ddel-bla          #+#    #+#             */
/*   Updated: 2020/09/09 02:37:10 by ddel-bla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t
	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	ldst;
	size_t	lsrc;
	size_t	i;

	ldst = ft_strlen(dst);
	lsrc = ft_strlen(src);
	i = 0;
	if (ldst < size - 1 && size > 0)
	{
		while (src[i] && (ldst + i) < (size - 1))
		{
			dst[ldst + i] = src[i];
			i++;
		}
		dst[ldst + i] = 0;
	}
	if (ldst < size)
		return (ldst + lsrc);
	return (size + lsrc);
}
