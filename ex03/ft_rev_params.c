/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntmalule <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 17:24:14 by ntmalule          #+#    #+#             */
/*   Updated: 2020/07/15 17:31:42 by ntmalule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include <unistd.h>

int main(int argc, char ** argv)
{
	int i;
	argc--;
	i = 0;
	while(argc != 0)
	{
		while(argv[argc][i])
		{
			write(1, &argv[argc][i], 1);
			i++;
		}
		argc--;
		write(1 , " ", 1);
		i=0;
	}
}
