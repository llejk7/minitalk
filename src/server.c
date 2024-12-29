/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjell <kjell@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 17:40:13 by krenken           #+#    #+#             */
/*   Updated: 2024/12/29 01:03:02 by kjell            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	handle_signal(int signal)
{
	static unsigned char	current_char = 0;
	static int				bit_index = 0;

	if (signal == SIGUSR1 || signal == SIGUSR2)
	{
		current_char |= (signal == SIGUSR1);
		if (++bit_index == 8)
		{
			if (current_char == '\0')
				ft_printf("\n");
			else
				ft_printf("%c", current_char);
			bit_index = 0;
			current_char = 0;
		}
		else
			current_char <<= 1;
	}
	else
		ft_printf("Error: Unexpected signal received\n");
}

int	main(void)
{
	ft_printf("Server PID: %d\n", getpid());
	signal(SIGUSR1, handle_signal);
	signal(SIGUSR2, handle_signal);
	while (1)
		pause();
	return (EXIT_SUCCESS);
}
