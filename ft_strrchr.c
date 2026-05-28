/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thamoliv <thamoliv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/18 19:40:52 by thamoliv          #+#    #+#             */
/*   Updated: 2026/05/28 19:14:25 by thamoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char	*last;

	last = NULL;
	while (*str != '\0')
	{
		if (*str == (char)c)
			last = (char *)str;
		str++;
	}
	if (*str == (char)c)
		last = (char *)str;
	return (last);
}
