/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcheng <mcheng@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 16:50:29 by mcheng            #+#    #+#             */
/*   Updated: 2022/08/24 18:00:28 by mcheng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_strlen(char *str)
{
	int	length;

	length = 0;
	while (*(str++) != '\0')
	{
		length++;
	}
	return (length);
}

int main(void)
{
	char a[] = "gay";
	int	length;
   	length = ft_strlen(a);
	printf("no. of characters: %d", length);
}
