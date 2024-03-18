/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alerome2 <alerome2@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 13:26:05 by alerome2          #+#    #+#             */
/*   Updated: 2024/03/17 17:46:42 by alerome2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	print_arg(char *argument)
{
	int		i;

	i = 0;
	while (argument[i] != '\0')
	{
		write(1, &argument[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

void	ft_swap_pointer(char *argument[], int pos1, int pos2)
{
	char	*temp;

	temp = argument[pos1];
	argument[pos1] = argument[pos2];
	argument[pos2] = temp;
}

int	ft_strcmp(char *s1, char *s2)
{
	int	counter;

	counter = 0;
	while (s1[counter] == s2[counter] && s1[counter] != '\0')
	{
		counter++;
	}
	return (s1[counter] - s2[counter]);
}

int	main(int argc, char *argv[])
{
	int	i;
	int	j;

	i = 1;
	while (i < argc)
	{
		j = i + 1;
		while (j < argc)
		{
			if (ft_strcmp(argv[i], argv[j]) > 0)
				ft_swap_pointer(argv, i, j);
			j++;
		}
		i++;
	}
	i = 1;
	while (i < argc)
	{
		print_arg(argv[i]);
		i++;
	}
	return (0);
}
