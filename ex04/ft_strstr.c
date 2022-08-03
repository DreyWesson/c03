/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doduwole <doduwole@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 08:13:59 by doduwole          #+#    #+#             */
/*   Updated: 2022/08/03 12:55:02 by doduwole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_len(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

void	ft_cmp(char *str, char *to_find, int *val_k, int *val_l)
{	
	int	k;
	int	l;
	int	i;

	k = 0;
	l = 0;
	i = ft_str_len(to_find);
	while (str[l] != '\0')
	{
		if (str[l] == to_find[k] && k <= i)
		{
			k++;
			if (k == i)
			{
				str[l + 1] = '\0';
				break ;
			}
		}
		else
			k = 0;
		l++;
	}
	*val_k = k;
	*val_l = l;
}

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		j;
	int		k;
	int		l;
	char	*p;

	p = NULL;
	i = ft_str_len(to_find);
	j = ft_str_len(str);
	k = 0;
	l = 0;
	if (i > j)
		return (p);
	if (i == 0)
		return (str);
	ft_cmp(str, to_find, &k, &l);
	if (k == i)
	{
		p = &str[l - k + 1];
		return (p);
	}
	return (p);
}

// #include <stdio.h>
// int main(void)
// {
// 	char str[] = "string";
// 	char to_find[] = "ring";
// 	ft_strstr(str, to_find);
// 	return (0);
// }