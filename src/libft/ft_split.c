/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maobushi <maobushi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 00:08:38 by maobushi          #+#    #+#             */
/*   Updated: 2023/01/23 02:35:25 by maobushi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	free_darray(size_t count, size_t argv_index, void **output)
{
	size_t	i;

	i = 0;
	if (count == 2)
	{
		while (i < argv_index)
		{
			//printf("i:%zu count : %zu\n",i,count);
			//printf("output[%zu]:%s\n",i,(char *)output[i]);
			free (output[i]);
			i++;
		}
		free(output);
	}
}

static int	count_index(char const *s, char c)
{
	size_t	i;
	size_t	count;

	count = 0;
	i = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		if (s[i] != 0)
			count++;
		while (s[i] != 0 && s[i] != c)
			i++;
	}
	return (count);
}

static char	*ft_strndup(const char *s1,size_t len)
{
	char	*tmp;
	size_t	j;

	j = 0;
	tmp = (char *)malloc(len + 1);
	if (tmp == NULL)
		return (NULL);
	while (j < len)
	{
		tmp[j] = s1[j];
		j++;
	}
	tmp[j] = '\0';
	return (tmp);
}

static char	**make_ret(char *s, char c, char **ret)
{
	char		*head;
	char		*tail;
	size_t		i;

	i = 0;
	while (*s)
	{
		if (*s != c)
		{
			head = s;
			while (*s != c && *s)
				s++;
			tail = s;
			ret[i] = ft_strndup(head, tail - head);
			if (!ret[i])
				free_darray(i, ft_strlen(ret[i]), (void **)ret);
			i++;
		}
		else
			s++;
	}
	ret[i] = NULL;
	return (ret);
}

char	**ft_split(char *src, char c)
{
	char	**ret;

	if (!src)
		return (NULL);
	ret = malloc(sizeof(char *) * (count_index(src, c) + 1));
	if (!ret)
		return (NULL);
	ret = make_ret(src, c, ret);
	return (ret);
}
