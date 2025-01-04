/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krenken <krenken@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/04 17:27:19 by krenken           #+#    #+#             */
/*   Updated: 2025/01/04 17:27:23 by krenken          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

/*
 * Function: handle_signal
 * -----------------------
 * Handles incoming signals (SIGUSR1 or SIGUSR2) to reconstruct a message sent 
 * by the client. Each signal corresponds to a single bit of the message.
 *
 * signal: The signal received (SIGUSR1 represents 1, SIGUSR2 represents 0).
 *
 * The function builds characters bit-by-bit and prints them to the standard
 * output. When a null character ('\0') is fully received, it prints a newline
 * to indicate the end of a message.
 */
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

/*
 * Function: main
 * --------------
 * Entry point for the server program. It initializes the signal handlers for 
 * SIGUSR1 and SIGUSR2 and prints the server's PID to the standard output.
 *
 * The server continuously waits for incoming signals, processing each one to
 * reconstruct and display the message sent by the client.
 *
 * Returns EXIT_SUCCESS when terminated (normally unreachable).
 */
int	main(void)
{
	ft_printf("Server PID: %d\n", getpid());
	signal(SIGUSR1, handle_signal);
	signal(SIGUSR2, handle_signal);
	while (1)
		pause();
	return (EXIT_SUCCESS);
}
