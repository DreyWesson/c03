/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doduwole <doduwole@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 21:32:35 by doduwole          #+#    #+#             */
/*   Updated: 2022/08/02 23:52:25 by doduwole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_cmp(char s1, char s2)
{
	if (s1 < s2)
		return (-1);
	return (1);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	k;

	i = 0;
	k = 0;
	while (s1[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (ft_cmp(s1[i], s2[i]));
		i++;
	}
	while (s2[k] != '\0')
		k++;
	if (i != k)
		return (ft_cmp(i, k));
	return (0);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char s1[5] = "abcd";
// 	char s2[5] = "abcdb";
// 	printf("abcd == abcdc: %i",ft_strcmp(s1,s2));
// 	return (0);
// }