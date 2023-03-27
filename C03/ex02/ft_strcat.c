/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nihamdan <nihamdan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 17:49:30 by nihamdan          #+#    #+#             */
/*   Updated: 2023/02/06 19:36:43 by nihamdan         ###   ########.fr       */
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

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = -1;
	j = ft_strlen(dest);
	while (src[++i])
		dest[j++] = src[i];
	dest[j] = '\0';
	return (dest);
}

/*int main()
{
	char src[] = "Hello";
	char dest[20] = "Bonjour";
	printf("%s\n",ft_strcat(dest,src));
	return 0;
}
*/
