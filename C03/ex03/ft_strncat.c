/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nihamdan <nihamdan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 19:37:16 by nihamdan          #+#    #+#             */
/*   Updated: 2023/02/08 16:21:37 by nihamdan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	int				j;

	i = -1;
	j = ft_strlen(dest);
	while (++i < nb && src[i])
		dest[j++] = src[i];
	dest[j] = '\0';
	return (dest);
}

/*int main()
{
	char dest[5] = "Hello";
	char src[10] = "Bellop";
	ft_strncat(dest,src, 7);
	printf("%s\n", dest);
	return 0;
}
*/
