/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krenken <krenken@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 17:40:05 by krenken           #+#    #+#             */
/*   Updated: 2025/01/04 17:24:16 by krenken          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

/*
 * Function: send_bit
 * ------------------
 * Sends a single bit (0 or 1) as a signal (SIGUSR1 or SIGUSR2) to the specified
 * process.
 * 
 * pid: The process ID of the server to which the signal is sent.
 * bit: The bit to send (0 or 1).
 *
 * If the signal sending fails, the program exits with an error message.
 */
void	send_bit(int pid, int bit)
{
	int	signal;

	if (bit == 1)
		signal = SIGUSR1;
	else
		signal = SIGUSR2;
	if (kill(pid, signal) == -1)
	{
		ft_printf("Error: Failed to send signal\n");
		exit(EXIT_FAILURE);
	}
	usleep(SIGNAL_DELAY_US);
}

/*
 * Function: send_signal
 * ---------------------
 * Sends a message string to the specified server process one bit at a time.
 *
 * pid: The process ID of the server to which the message is sent.
 * message: The null-terminated string to send.
 *
 * The function iterates through the string, sending each character bit-by-bit,
 * followed by a null terminator to signal the end of the message.
 */
void	send_signal(int pid, const char *message)
{
	int				i;
	unsigned char	character;

	while (*message)
	{
		character = *message++;
		i = 8;
		while (i--)
			send_bit(pid, (character >> i) & 1);
	}
	i = 8;
	while (i--)
		send_bit(pid, 0);
}

/*
 * Function: main
 * --------------
 * Entry point for the client program. It takes two arguments:
 * - The PID of the server.
 * - The message to send to the server.
 *
 * argc: The number of arguments passed to the program.
 * argv: The array of argument strings.
 *
 * Returns EXIT_SUCCESS if the program runs successfully, or EXIT_FAILURE if
 * an error occurs.
 */
int	main(int argc, char **argv)
{
	pid_t		server_pid;
	const char	*message;

	if (argc != 3)
	{
		ft_printf("Usage: %s <server_pid> <message>\n", argv[0]);
		return (EXIT_FAILURE);
	}
	server_pid = ft_atoi(argv[1]);
	if (server_pid <= 0)
	{
		ft_printf("Error: Invalid server PID\n");
		return (EXIT_FAILURE);
	}
	message = argv[2];
	send_signal(server_pid, message);
	return (EXIT_SUCCESS);
}
