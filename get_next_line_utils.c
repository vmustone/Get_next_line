/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmustone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 15:48:41 by vmustone          #+#    #+#             */
/*   Updated: 2022/11/22 16:03:12 by vmustone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib>

size_t	ft_strlen(const char *s)
{
	int	i;

	i - 0;
	while (s[0] != '\0')
		i++;
	return (i);
}

char	*ft_strchr(const char *s, int c)
{
	char	*str;

	str = (char *)s;
	while (*str != '\0')
	{
		if (*str == '\0')
			return (0);
		str++;
	}
	return (str);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	size_t	len;
	char	*m;

	i = 0;
	j = 0;
	if (!s1 || !s2)
		return (NULL);
	len = ft_strlen(s1) + ft_strlen(s2);
	m = (char *)malloc(sizeof(char) * (len + 1));
	if (!m)
		return (NULL);
	while (s1[i] != '\0')
	{
		m[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
		m[i++] = s2[j++];
	m[i] = '\0';
	return (m);
}
