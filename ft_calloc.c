/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apinho-a <apinho-a@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 11:46:34 by apinho-a          #+#    #+#             */
/*   Updated: 2026/04/21 14:54:50 by apinho-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	c_char;
	unsigned char	*b_str;

	c_char = (unsigned char) c;
	b_str = (unsigned char *) b;
	while (len--)
		*b_str++ = c_char;
	return (b);
}

void	*ft_calloc(size_t nmeb, size_t size)
{
	size_t	max_val;
	void	*result;

	max_val = -1;
	if (nmeb == 0 || size == 0)
		return (0);
	else if (size > max_val / nmeb)
		return (0);
	else
	{
		result = malloc (nmeb * size);
		if (result == 0)
			return (0);
		return (ft_memset(result, '\0', nmeb * size));
	}
}

/* #include <stdio.h>
int	main()
{
	int	*array_1;
	int	*array_2;
	size_t	nmeb;
	size_t	index;

	nmeb = 4;
	array_1 = (int *) ft_calloc (nmeb, sizeof(int));
	array_2 = (int *) calloc (nmeb, sizeof(int));
	index = 0;
	while (index < nmeb)
	{
		printf("%d", *(array_1 + index++));
		printf("%c", ' ');
	}
	printf("%c", '\n');
	index = 0;
	while (index < nmeb)
	{
		printf("%d", *(array_2 + index++));
		printf("%c", ' ');	
	}
	return (0);
} */