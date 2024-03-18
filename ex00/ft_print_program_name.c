/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alerome2 <alerome2@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 12:28:35 by alerome2          #+#    #+#             */
/*   Updated: 2024/03/15 13:06:49 by alerome2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	main(int argc, char *argv[])
{
	char	*program_name;
	int		counter;

	argc = 2;
	counter = 0;
	program_name = argv[0];
	while (program_name[counter] != '\0')
	{
		write(1, &program_name[counter], 1);
		counter++;
	}
	write(1, "\n", 1);
	return (0);
}
