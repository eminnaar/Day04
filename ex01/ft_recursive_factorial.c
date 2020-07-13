/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eminnaar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 14:45:51 by eminnaar          #+#    #+#             */
/*   Updated: 2020/07/13 17:48:10 by eminnaar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_recursive_factorial(int nb)
{
	if (nb == 1)
	{
		return 1;
	}
	else if (nb <= 0)
	{
		return 0;
	}
	else
	{
		return nb * ft_recursive_factorial(nb - 1);
	}
}

int	main()
{
	int num = -3;
	int fact = ft_recursive_factorial(num);
	printf("%d", fact);
	return 0;
}
