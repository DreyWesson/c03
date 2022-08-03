/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doduwole <doduwole@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 22:16:10 by doduwole          #+#    #+#             */
/*   Updated: 2022/08/03 00:50:58 by doduwole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_cmp(char s1, char s2)
{
	if (s1 < s2)
		return (-1);
	return (1);
}

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	unsigned int	k;

	i = 0;
	k = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[k] != '\0')
		k++;
	if (i < n || k < n)
		return (ft_cmp(i, k));
	i = 0;
	while (i < n)
	{
		if (s1[i] != s2[i])
		{
			return (ft_cmp(s1[i], s2[i]));
		}
		i++;
	}
	if (i != n)
		return (ft_cmp(i, n));
	return (0);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char s1[] = "he";
// 	char s2[] = "hellO World";
// 	printf("abcd == abcdc: %i",ft_strncmp(s1, s2, 3));
// 	return (0);
// }