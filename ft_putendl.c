/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaunovi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/29 18:51:00 by dpaunovi          #+#    #+#             */
/*   Updated: 2017/11/27 21:57:09 by dpaunovi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl(char const *s)
{
	ft_putstr(s);
	ft_putchar('\n');
}
