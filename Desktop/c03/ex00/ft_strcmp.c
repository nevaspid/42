/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbrendle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 21:46:35 by rbrendle          #+#    #+#             */
/*   Updated: 2022/07/23 22:29:36 by rbrendle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char	*str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_strcmp(char	*s1, char	*s2)
{	
	int	i;
	int	j;

	i = ft_strlen(s1);
	j = ft_strlen(s2);
	if (i < j)
		return (-1);
	else if (i == j)
		return (0);
	else
		return (1);
}
