/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Lexer.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttanja <ttanja@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 15:06:39 by ttanja            #+#    #+#             */
/*   Updated: 2022/08/28 15:16:17 by ttanja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <vector>
#include <string>
#include <iostream>
#include <fstream>
#include <sstream>

enum TOCKENS {
	OPEN_BRACKET,
	CLOSE_BRACKET,
	HASHTAG,
	WORD,
	SEMICOLN
};

typedef std::pair<std::string, TOCKENS> TockenPair;

class Lexer {
	private:
		std::vector<TOckenPair>	_tokens;
		std::string				_trim;
		size_t					_split;

	public:
		Lexer(void);
		Lexer(const Lexer &initstate);

		Lexer &operator=(const Lexer &rhs);

		std::vector<TockenPair>	&getTockens(void);

		void					handleLine(const std::string &line);
		void					tokenize(const std::string &filePath);

		~Lexer(void);
};
