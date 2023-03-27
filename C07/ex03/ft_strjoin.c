/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nihamdan <nihamdan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 17:36:12 by nihamdan          #+#    #+#             */
/*   Updated: 2023/02/15 17:29:01 by nihamdan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_count_total(char **strs, int size)
{
	int	r;
	int	j;

	j = 0;
	r = 0;
	while (j != size)
		r += ft_strlen(strs[j++]);
	return (r);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = ft_strlen(dest);
	while (src[i])
		dest[j++] = src[i++];
	dest[j] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*dest;
	int		j;

	if (size == 0)
		return (malloc(sizeof(char)));
	dest = malloc (sizeof(char)
			* ft_count_total(strs, size) + ((size - 1) * ft_strlen(sep)) + 1);
	if (!dest)
		return (0);
	dest[0] = '\0';
	j = 0;
	while (size)
	{
		ft_strcat(dest, strs[j]);
		if (--size)
			ft_strcat(dest, sep);
		j++;
	}
	return (dest);
}

/*int main()
{
	char* strs[] = {"Salut","Ca","Va?","hamdoullah","Merci"};
	char	sep[] = "/";
	printf("%s\n",ft_strjoin(0, strs, sep));
	return 0;	
}
*/
