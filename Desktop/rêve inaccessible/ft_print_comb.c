/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbrendle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 17:01:27 by rbrendle          #+#    #+#             */
/*   Updated: 2022/07/15 10:23:20 by rbrendle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
	

void	ft_print_comb(void)
{	
	int	c;
	int	d;
	int	u;

	c = 0;
	d = 1;
	u = 2;

if	(*c <= 7 && *d <= 8 && *u <= 9)
{
		write (1, &c, 1);
		c++;
		write (1, &d, 1);
		d++;
		write (1, &u, 1);
		u++;
		write (1, ", ", 1);
		ft_print_comb1(&c, &d, &u);
}
	else
	{	write (1, "789", 3);
	}
}
void	ft_print_comb1(int	*c, int	*d, int	*u)
{
if	(*c <= 7 && *d <= 8 && *u <= 9)
{
		write (1, &c, 1);
		c++;
		write (1, &d, 1);
		d++;
		write (1, &u, 1);
		u++;
		write (1, ", ", 1);
		ft_print_comb1();
}
	else
	{	write (1, "789", 3);
	}
}

int	main()
{
	ft_print_comb();
	return 0;
}

