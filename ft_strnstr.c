/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apinho-a <apinho-a@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/17 19:32:20 by apinho-a          #+#    #+#             */
/*   Updated: 2026/04/17 20:13:30 by apinho-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	j_saver;
	size_t	len_saver;

	if (*little == 0)
		return ((char *) big);
	j = 0;
	while (*(big + j) != 0 && --len > 0)
	{
		i = 0;
		if (*(big + j) == *(little + i))
		{
			j_saver = j;
			len_saver = len;
			while (*(big + j++) == *(little + i++) && --len > 0)
			{
				if (*(little + i) == 0)
					return ((char *) big + j_saver);
			}
			j = j_saver;
			len = len_saver;
		}
		else
			j++;
	}
	return (0);
}

#include <stdio.h>
int main()
{
	printf("%s\n",ft_strnstr("abcOla2", "Ola3", 4));
	printf("%s\n",strnstr("abcOla2", "Ola3", 4));
}