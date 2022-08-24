/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcheng <mcheng@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 11:02:10 by mcheng            #+#    #+#             */
/*   Updated: 2022/08/24 11:21:02 by mcheng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_ft(int *********nbr);

int	main(void)
{
	int	*********pnbr;
	int	********pnbr1;
	int	*******pnbr2;
	int	******pnbr3;
	int	*****pnbr4;
	int	****pnbr5;
	int	***pnbr6;
	int	**pnbr7;
	int	*pnbr8;
	int	nbr;

	nbr = 1;
	pnbr8 = &nbr;
	pnbr7 = &pnbr8;
	pnbr6 = &pnbr7;
	pnbr5 = &pnbr6;
	pnbr4 = &pnbr5;
	pnbr3 = &pnbr4;
	pnbr2 = &pnbr3;
	pnbr1 = &pnbr2;
	pnbr = &pnbr1;

	printf("%d\n", nbr);
	ft_ultimate_ft(pnbr);
	printf("%d\n", nbr);
}
