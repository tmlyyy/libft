/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thamoliv <thamoliv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/19 19:45:59 by thamoliv          #+#    #+#             */
/*   Updated: 2026/06/01 16:44:43 by thamoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*p;
	size_t	total_size;

	if (count != 0 && size > SIZE_MAX / count)
		return (NULL);

	total_size = count * size;
	p = malloc(total_size);
	if (p == NULL)
		return (NULL);

	ft_bzero(p, total_size);
	return (p);
}
