/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eminnaar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 14:22:51 by eminnaar          #+#    #+#             */
/*   Updated: 2020/07/13 14:37:12 by eminnaar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_recursive_factorial(int nb);

int ft_recursive_factorial(int nb)
{
    if (nb <= 0)
        return 0;
    else
        return 1 + ft_recursive_factorial(nb - 1);
}

int     main()
{
    int nb = -5;
    printf("%d", ft_recursive_factorial(nb));
    return 0;
}
