/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alerome2 <alerome2@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 12:50:45 by alerome2          #+#    #+#             */
/*   Updated: 2024/03/15 13:04:29 by alerome2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	main(int argc, char *argv[])
{
	int		counter;
	char	*temp_name;
	int		name_counter;

	if (argc > 1)
	{
		counter = 1;
		while (argv[counter] != (void *)0)
		{
			name_counter = 0;
			temp_name = argv[counter];
			while (temp_name[name_counter] != '\0')
			{
				write(1, &temp_name[name_counter], 1);
				name_counter++;
			}
			write(1, "\n", 1);
			counter++;
		}
	}
	return (0);
}
