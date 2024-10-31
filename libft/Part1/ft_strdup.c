/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-adna <mel-adna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 19:49:30 by mel-adna          #+#    #+#             */
/*   Updated: 2024/10/30 17:35:22 by mel-adna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	i;
	size_t	n;
	char	*dup;

	n = 0; 
	i = ft_strlen(s);
	dup = (char *)malloc(i + 1);
	if (dup == NULL)
		return (NULL);
	while (n < i)
	{
		dup[n] = s[n];
		n++;
	}
	dup[i] = '\0';
	return (dup);
}
