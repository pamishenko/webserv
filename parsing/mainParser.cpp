/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainParser.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttanja <ttanja@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 22:00:47 by ttanja            #+#    #+#             */
/*   Updated: 2022/09/04 16:13:27 by ttanja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Parser.hpp"

int main()
{
	ServerCfg	serverCfg = Parser();
	std::cout << "start parse config\n";
	return (0);
}