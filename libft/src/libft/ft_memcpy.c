/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgaspari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 12:40:53 by vgaspari          #+#    #+#             */
/*   Updated: 2023/10/23 12:40:54 by vgaspari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t len)
{
	unsigned char	*d;
	unsigned char	*s;
	size_t			i;

	d = dst;
	s = (unsigned char *)src;
	i = 0;
	if (!dst && !src)
		return (0);
	while (len--)
	{
		d[i] = s[i];
		i++;
	}
	return (dst);
}
