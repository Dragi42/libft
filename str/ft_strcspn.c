/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaunovi <dpaunovi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/30 17:09:24 by dpaunovi          #+#    #+#             */
/*   Updated: 2019/02/11 13:42:42 by dpaunovi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strcspn(const char *s, const char *reject)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (s[i] && reject[count])
	{
		if (s[i] != reject[count])
			i++;
		count++;
	}
	return (count);
}