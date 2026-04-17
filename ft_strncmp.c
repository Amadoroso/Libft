/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apinho-a <apinho-a@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/17 17:17:12 by apinho-a          #+#    #+#             */
/*   Updated: 2026/04/17 18:01:39 by apinho-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	if (n == 0)
		return (0);
	while ((unsigned char) *s1 == (unsigned char) *s2
		&& (unsigned char) *s1 != 0 && --n > 0)
	{
		s1++;
		s2++;
	}
	return ((unsigned char) *s1 - (unsigned char) *s2);
}

/* #include <string.h>
#include <stdio.h>
int	main()
{
	printf("%d\n", ft_strncmp("AAz", "AAa", 4));
	printf("%d\n", strncmp("AAz", "AAa", 4));
} */