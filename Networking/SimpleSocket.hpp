/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SimpleSocket.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttanja <ttanja@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 12:02:57 by ttanja            #+#    #+#             */
/*   Updated: 2022/08/28 12:57:25 by ttanja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SimpleSocket_hpp
#define SimpleSocket_hpp

#include <stdio.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <iostream>

	class SimpleSocket
	{
	private:
		struct sockaddr_in	address;
		int					sock;
		int					connection;
	public:
		SimpleSocket(int domain, int service, int protocol, int port,
			u_long interface);
		virtual void connect_to_network(int sock,
			struct sockaddr_in address) = 0;
		void test_connection(int item);
		struct sockaddr_in	get_address();
		int get_sock();
		int get_connection();
	};

#endif
