/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgaspari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 12:43:40 by vgaspari          #+#    #+#             */
/*   Updated: 2023/10/23 12:43:41 by vgaspari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	len;
	size_t	j;

	i = 0;
	len = 0;
	j = 0;
	while (dst[i])
		i++;
	while (src[len])
		len++;
	if (i >= size)
		len += size;
	else
		len += i;
	while (src[j] != '\0' && i + 1 < size)
	{
		dst[i++] = src[j++];
	}
	dst[i] = '\0';
	return (len);
}
