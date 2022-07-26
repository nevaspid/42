/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbrendle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 23:51:56 by rbrendle          #+#    #+#             */
/*   Updated: 2022/07/26 15:02:50 by rbrendle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

int	ft_strlen(char	*str, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (str[i] && i != n)
		i++;
	return (i);
}

int	ft_strncmp(char	*s1, char	*s2, unsigned int n)
{	
	int	i;
	int	j;

	i = ft_strlen(s1, n);
	j = ft_strlen(s2, n);
	if (i < j)
		return (s1 - s2);
	else if (i == j)
		return (0);
	else
		return (1);
}

int main()
{
char a[] = "pepepoopoo";
char b[] = "pipoupippippou";
printf("%d\n", strncmp(a, b, 5));
printf("%d\n", ft_strncmp(a, b, 5));
}
