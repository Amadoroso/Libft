/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apinho-a <apinho-a@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 18:41:06 by apinho-a          #+#    #+#             */
/*   Updated: 2026/04/22 16:08:37 by apinho-a         ###   ########.fr       */
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

static char	*ft_strchr(const char *s, int c)
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

static char	*ft_strcpy_custom(char *dst, const char *src, size_t start,
size_t end)
{
	size_t	index;

	index = 0;
	while (start <= end)
	{
		*(dst + index) = *(src + start);
		index++;
		start++;
	}
	*(dst + index) = 0;
	return (dst);
}

static char	*ft_strdup(const char *s)
{
	char			*dup;
	unsigned int	index;

	dup = (char *) malloc((ft_strlen(s) + 1) * sizeof(char));
	if (dup == 0)
		return (NULL);
	index = 0;
	while (*s)
	{
		*(dup + index) = *s;
		s++;
		index++;
	}
	*(dup + index) = 0;
	return (dup);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*result;

	if (s1 == NULL || set == NULL)
		return (NULL);
	if (*set == '\0')
		return (result = ft_strdup(s1));
	if (*s1 == '\0')
		return (result = ft_strdup("\0"));
	start = 0;
	while (s1[start] != 0 && ft_strchr(set, s1[start]) != 0)
		start++;
	end = ft_strlen(s1) - 1;
	while (s1[end] != 0 && ft_strchr(set, s1[end]) != 0 && end != 0)
		end--;
	if (end < start)
		return (result = ft_strdup("\0"));
	result = malloc((end - start + 2) * sizeof(char));
	if (result == 0)
		return (NULL);
	return (result = ft_strcpy_custom(result, s1, start, end));
}

/* #include <stdio.h>
int	main()
{
	char	*a;

	a = ft_strtrim("AAAAA", "xyz");
	printf("%s\n", a);
	free(a);
	return (0);
} */