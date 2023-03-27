/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nihamdan <nihamdan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 16:12:36 by nihamdan          #+#    #+#             */
/*   Updated: 2023/02/13 16:28:10 by nihamdan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_test_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (!base || ft_strlen(base) == 1)
		return (1);
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (1);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base [j++])
				return (1);
		}
		i++;
	}
	return (0);
}

int	ft_atoi_base(char *str, char *base)
{
}
