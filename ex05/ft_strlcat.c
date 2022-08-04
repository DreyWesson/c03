/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doduwole <doduwole@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 12:39:12 by doduwole          #+#    #+#             */
/*   Updated: 2022/08/04 07:48:55 by doduwole         ###   ########.fr       */
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

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	int				k;

	j = 0;
	k = ft_str_len(src);
	i = ft_str_len(dest);
	if (size == 0)
		return (k);
	if (size <= i)
		return (size + k);
	while (src[j] != '\0')
	{
		if ((size - 1) == (j + i))
			break ;
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (i + k);
}

// int	main(void)
// {
// 	char s1[16] = "This is ";
// 	char s2[] = "a potentially long string";
// 	printf("%d", ft_strlcat(s1, s2, 16));
// 	return (0);
// }