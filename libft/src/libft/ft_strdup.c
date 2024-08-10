/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgaspari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 12:43:06 by vgaspari          #+#    #+#             */
/*   Updated: 2023/10/23 12:43:07 by vgaspari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		len;
	char	*copy;

	len = ft_strlen(s1);
	copy = malloc(++len);
	if (copy == NULL)
		return (NULL);
	while (--len >= 0)
		copy[len] = s1[len];
	return (copy);
}
