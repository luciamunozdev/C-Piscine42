/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmunoz-m <lmunoz-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 09:52:26 by lmunoz-m          #+#    #+#             */
/*   Updated: 2021/09/26 19:24:50 by lmunoz-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	imprimimos(char r[5])
{
	write(1, &r[0], 1), write(1, &r[1], 1);
	write(1, " ", 1), write(1, &r[2], 1), write(1, &r[3], 1);
	if (!(r[0] == '9' & r[1] == '8' & r[2] == '9' & r[3] == '9'))
		write(1, ",", 1), write(1, " ", 1);
}

void	ft_print_comb2(void)
{
	char	r[5];

	r [0] = '0';
	r [1] = '0';
	while (r[0] <= '9')
	{
		while (r[1] <= '9')
		{
			r[2] = r[0];
			r[3] = r[1] + 1;
			while (r[2] <= '9')
			{
				while (r[3] <= '9')
				{
					imprimimos(r);
					r[3]++;
				}
				r[2]++, r[3] = '0';
			}
			r[1]++;
		}
		r[0]++, r[1] = '0';
	}	
}
