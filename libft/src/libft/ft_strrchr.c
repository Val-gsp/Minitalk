/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgaspari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 12:45:06 by vgaspari          #+#    #+#             */
/*   Updated: 2023/10/23 12:45:07 by vgaspari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	len;
	char	*r;

	c = (char)c;
	r = (char *)s;
	len = ft_strlen(s);
	while (len > 0)
	{
		if (r[len] == c)
			return (&r[len]);
		len--;
	}
	if (r[len] == c)
		return (r);
	return (0);
}
