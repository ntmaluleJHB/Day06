/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntmalule <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 17:15:38 by ntmalule          #+#    #+#             */
/*   Updated: 2020/07/15 17:21:36 by ntmalule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>

int main(int argc, char **argv)
{
	int i;
	int num;
	i = 0;
	num = 1;
	while (num < argc)
	{
		while(argv[num][i] != '\0')
		{
			write(1, &argv[num][i], 1);
			i++;
		}
		i= 0;
		write(1, "\n", 1);
		num ++;
	}
}

