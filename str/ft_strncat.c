/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaunovi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/22 17:33:47 by dpaunovi          #+#    #+#             */
/*   Updated: 2016/12/01 16:50:50 by dpaunovi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t i;

	i = ft_strlen(s1);
	while (*s2 && n--)
	{
		s1[i] = *s2++;
		i++;
	}
	s1[i] = '\0';
	return (s1);
}
