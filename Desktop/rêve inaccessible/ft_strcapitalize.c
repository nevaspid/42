/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbrendle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 22:50:21 by rbrendle          #+#    #+#             */
/*   Updated: 2022/07/23 01:28:52 by rbrendle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strcapitalize(char	*str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		while (str[i] >= 0 && str[i] < 48 || str[i] > 57 && str[i] < 65)
		{
			i++;
		}
		if (str[i] >= 'a' && str[i] <= 'z' 	&& (str[i] - 1 >= 0 
				&& str[i] - 1 <= 48) || (str[i] - 1 > 57 && str[i] - 1 < 65))
		{
			str[i] = str[i] -32;
			i++;
			while (str[i] >= 'a' && str[i] <= 'z')
				i++;
		}

		else if (str[i] >= 'A' &&  str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
			i++;
		}
		else 
		{
			return (str);
		}
	}
	return (str);
}
int main()
{
	char a[] = "ta mEre, 12la xxxxXxx ,, Lol.";
	ft_strcapitalize(a);
	printf("%s", a);
}
