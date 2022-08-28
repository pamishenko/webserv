/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SimpleSocket.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttanja <ttanja@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 12:02:55 by ttanja            #+#    #+#             */
/*   Updated: 2022/08/28 13:02:27 by ttanja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SimpleSocket.hpp"

SimpleSocket::SimpleSocket(int domain, int service, int protocol, int port,
	u_long interface)
{
	address.sin_family = domain;
	address.sin_port = htons(port);
	address.sin_addr.s_addr = htonl(interface);
	sock = socket(domain, service, protocol);
	test_connection(sock);
	connection = connect_to_network(sock, address);
	test_connection(connection);
}

void SimpleSocket::test_connection(int item_to_test)
{
	if (item_to_test < 0)
	{
		perror("Failed to coonnect...");
		exit(EXIT_FAILURE)
	}
}

struct sockaddress_in SimpleSocket::get_address()
{
	return address;
}

int SimpleSocket::get_sock()
{
	return sock;
}

int SimpleSocket::get_connection()
{
	return connection;
}
