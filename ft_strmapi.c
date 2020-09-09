/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddel-bla <ddel-bla@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/08 08:24:26 by ddel-bla          #+#    #+#             */
/*   Updated: 2020/09/08 16:35:39 by ddel-bla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char
	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	size_t	i;

	if (!s)
		return (0);
	if (!(str = (char*)malloc(sizeof(*s) * (ft_strlen(s) + 1))))
		return (NULL);
	i = 0;
	while (*s)
	{
		str[i] = (*f)(i, *s++);
		i++;
	}
	str[i] = '\0';
	return (str);
}
