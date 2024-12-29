/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjell <kjell@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 17:40:05 by krenken           #+#    #+#             */
/*   Updated: 2024/12/29 01:03:07 by kjell            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	send_bit(int pid, int bit)
{
	if (kill(pid, bit ? SIGUSR1 : SIGUSR2) == -1)
	{
		ft_printf("Error: Failed to send signal\n");
		exit(EXIT_FAILURE);
	}
	usleep(SIGNAL_DELAY_US);
}

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
	// Send null-terminator
	i = 8;
	while (i--)
		send_bit(pid, 0);
}

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
