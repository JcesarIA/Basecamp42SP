/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcesar-d <jcesar-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/22 15:17:58 by jcesar-d          #+#    #+#             */
/*   Updated: 2021/07/26 22:10:50 by jcesar-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_int_to_char(int n1, int n2)
{
	char	first[2];
	char	second[2];

	first[0] = (n1 / 10 ) + 48;
	first[1] = (n1 % 10) + 48;
	second[0] = (n2 / 10) + 48;
	second[1] = (n2 % 10) + 48;
	write (1, &first, 2);
	write (1, " ", 1);
	write (1, &second, 2);
	if (first[0] == '9' && first[1] == '8')
	{
		write(1, "", 0);
	}
	else
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb2(void)
{
	int	num1;
	int	num2;

	num1 = 0;
	num2 = 1;
	while (num1 <= 98)
	{
		while (num2 <= 99)
		{
			ft_int_to_char(num1, num2);
			num2++;
		}
		num1++;
		num2 = num1 + 1;
	}
}
