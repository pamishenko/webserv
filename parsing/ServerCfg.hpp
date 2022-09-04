/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ServerCfg.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttanja <ttanja@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 15:20:59 by ttanja            #+#    #+#             */
/*   Updated: 2022/09/03 22:02:02 by ttanja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>

struct enum
{
	POST,
	GET,
	DELETE,
	PUT
}	method;

struct Location
{
	std::string		root;
	method[]		methods;
	int				file_upload;
	std::string		index;
	unsigned int	client_max_body_size;
	int				autoindex;
}

class ServerCfg
{
private:
	unsigned int	listen;
    int				port;
    std::string		server_name;
    std::string		error_page;
    int				client_max_body_size;
    std::string		mime_conf_path;
    Location		location

public:
	ServerCfg();
	~ServerCfg();
};
