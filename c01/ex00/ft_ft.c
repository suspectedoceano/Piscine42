/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Oceano <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 18:29:42 by Oceano            #+#    #+#             */
/*   Updated: 2022/11/15 18:30:57 by Oceano           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ft(int *p)
{
	*p = 42;
}

int	main(void)
{
	int		n;

	n = 1492;
	printf("Before-> %d\n", n);
	ft_ft(&n);
	printf("After-> %d\n", n);
}
