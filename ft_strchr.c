/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apinho-a <apinho-a@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/17 15:31:07 by apinho-a          #+#    #+#             */
/*   Updated: 2026/04/17 16:27:26 by apinho-a         ###   ########.fr       */
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
int	main()
{
	char	*ptr;

	ptr = ft_strchr("aaBaaaaBaaaa",'B');

	printf("%p\n", ptr);
	printf("%p\n", &ptr);
	printf("%s\n", ptr);
} */