/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbrendle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 20:58:12 by rbrendle          #+#    #+#             */
/*   Updated: 2022/07/20 23:06:58 by rbrendle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> 
#include <stdio.h> 

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	mod;
	int	div;

	mod = *a % *b;
	div = *a / *b;
	*a = div;
	*b = mod;
}
