/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_rev_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alerome2 <alerome2@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 13:07:46 by alerome2          #+#    #+#             */
/*   Updated: 2024/03/15 13:24:39 by alerome2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	main(int argc, char *argv[])
{
	int		counter;
	char	*temp_name;
	int		temp_counter;

	if (argc > 1)
	{
		counter = 1;
		while (argv[counter] != (void *)0)
			counter++;
		while (counter > 1)
		{
			temp_counter = 0;
			temp_name = argv[counter - 1];
			while (temp_name[temp_counter] != '\0')
			{
				write(1, &temp_name[temp_counter], 1);
				temp_counter++;
			}
			write (1, "\n", 1);
			counter--;
		}
	}
	return (0);
}
