/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgaspari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 12:44:50 by vgaspari          #+#    #+#             */
/*   Updated: 2023/10/23 12:44:52 by vgaspari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *tofind, size_t len)
{
	size_t	tofind_len;

	if (!*tofind)
		return ((char *)str);
	tofind_len = ft_strlen(tofind);
	while (*str && len-- >= tofind_len)
	{
		if (!ft_strncmp(str, tofind, tofind_len))
			return ((char *)str);
		str++;
	}
	return (NULL);
}
