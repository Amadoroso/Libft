/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apinho-a <apinho-a@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 14:54:33 by apinho-a          #+#    #+#             */
/*   Updated: 2026/04/14 17:22:26 by apinho-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	index;

	index = 0;
	while (index < n)
	{
		*((unsigned char *) dst + index) = *((unsigned char *) src + index);
		index++;
	}
	return (dst);
}

/* #include <unistd.h>
int	main()
{
	char *src ="abcdefghij";
	unsigned char dst[11] = "0123456789";
	unsigned int i;

	ft_memcpy(dst, src, 3);

	i = 0;
	while(dst[i])
		write(1, &dst[i++], 1);
	return (0);
} */