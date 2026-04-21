/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apinho-a <apinho-a@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 15:42:33 by apinho-a          #+#    #+#             */
/*   Updated: 2026/04/21 17:58:41 by apinho-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static size_t	ft_strlen(const char *str)
{
	size_t	len;

	len = 0;
	while (*str++)
		len++;
	return (len);
}

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
		return (malloc(0));
	else if (size > max_val / nmeb)
		return (NULL);
	else
	{
		result = malloc (nmeb * size);
		if (result == 0)
			return (NULL);
		return (ft_memset(result, '\0', nmeb * size));
	}
}

char	*ft_substr(char	const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	index;
	size_t	s_len;
	
	if (s == NULL)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
		return (sub = (char *) ft_calloc (1, sizeof(char)));
	if (len > s_len - start)
		len = s_len - start;
	sub = (char *) ft_calloc (len + 1, sizeof(char));
	if (sub == 0)
		return (NULL);
	index = 0;
	while (*(s + start + index) != 0 && len-- > 0)
	{
		*(sub + index) = *(s + start + index);
		index++;
	}
	return (sub);
}

/* #include <stdio.h>
int main()
{
	char const *str;
	char *sub_str;
	str = "abcdefgh123456";
	sub_str = ft_substr(str, 3, 5);
	printf("%s", sub_str);
	free(sub_str);
} */