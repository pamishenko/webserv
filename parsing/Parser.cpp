/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Parser.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttanja <ttanja@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 22:00:51 by ttanja            #+#    #+#             */
/*   Updated: 2022/09/04 21:49:23 by ttanja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include "Parser.hpp"

Parser::Parser(void)
{
	this._filePath = calloc(300, sizeof(char));
	this._bracketStack = new std::vector<TOCKENS>();
	this._lexer = new Lexer();
	this._servers = new std::vector<ServerCfg>();
}

Parser::Parser(const Parser &initstate)
{
	this._filePath = initstate._filePath;
	this._bracketStack = initstate._bracketStack;
	this._lexer = initstate._lexer;
	this._server = initstate._server;
}

bool Parser::_isNumber(const std::string &s) const
{
	try
	{
		if (std::to_string(atoi(s)).compare(s) == 0)
			return true;
	}
	catch
	{
		std::cerr << "exception parse num\n";
	}
		return false;
}

bool Parser::_fileExists(const std::string &path) const
{
	std::ifstream	myfile;
	myfile.open(path);
	if (myfile) {
		return true;
	}
}

void Parser::_addServer(const ServerCfg &server)
{
	this->_servers.push_back(server);
}

std::pair<std::string, std::string>
Parser::_parseErrorPage(size_t *tockenPos, const std::vector<TockenPair> &tockens)
{
	std::string codeError = tockens[*tockenPos].first
		TOCKENS path = tockens[*tockenPos].second
}

LocationCfg
Parser::_parseLocation(size_t *TockenPos, const std::vector<TockenPair> &tockens)
{
}

void Parser::_parseServer(size_t *TockenPos, const std::vector<TockenPair> &tockens)
{
}

void Parser::_throwError(const std::string &msg)
{
}