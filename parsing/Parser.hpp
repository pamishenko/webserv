/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Parser.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttanja <ttanja@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 15:16:33 by ttanja            #+#    #+#             */
/*   Updated: 2022/08/28 15:35:56 by ttanja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Lexer.hpp"
#include "ServerCfg.hpp"

class Parser {
	private:
		std::string				_filePath;
		std::vector<TOCKENS>	_bracketStack;
		Lexer					_lexer;
		std::vector<ServerCfg>	_servers;

		bool
		_isNumber(const std::string &s) const;
		bool
		_fileExists(const std::string &path) const;
		void
		_addServer(const ServerCfg &server);
		std::pair<std::string, std::string>
		_parseErrorPage(size_t *TockenPos, const std::vector<TockenPair> &tockens);
		LocationCfg
		_parseLocation(size_t *TockenPos, const std::vector<TockenPair> &tockens);
		void
		_parseServer(size_t *TockenPos, const std::vector<TockenPair> &tockens);
		void
		_throwError(const std::string &msg);

	public:
		Parser(void);
		Parser(const Parser &initstate);

		Parser &operator=(const Parser &rhs);

		~Parser(void);
		const std::vector<ServerCfg>
		getServers(void) const;
		void
		parse(const std::string &filePath);
}