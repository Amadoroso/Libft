/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apinho-a <apinho-a@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/17 15:31:07 by apinho-a          #+#    #+#             */
/*   Updated: 2026/04/17 17:22:13 by apinho-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char) c)
			return ((char *) s);
		s++;
	}
	if (*s == 0 && (char) c == 0)
		return ((char *) s);
	return (0);
}

/* #include <stdio.h>
#include <string.h>
int	main()
{
	printf("%s\n", ft_strchr("aaaaBaaaBa", -23));
	printf("%p\n", ft_strchr("aaaaBaaaBa", -23));
	printf("%s\n", strchr("aaaaBaaaBa", -23));
	printf("%p\n", strchr("aaaaBaaaBa", -23));
} */