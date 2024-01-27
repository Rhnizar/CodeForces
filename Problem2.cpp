/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Problem2.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrhnizar <rrhnizar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 10:46:59 by rrhnizar          #+#    #+#             */
/*   Updated: 2024/01/27 11:52:40 by rrhnizar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>

int main()
{
	int n;
	std::string line;
	std::vector<std::string> FirstWords;
	std::vector<std::string> words;
	std::cin >> n;
	int Tmpn = n;
	while(n > 0)
	{
		std::cin >> line;
		FirstWords.push_back(line);
		n--;
	}
	for(size_t i=0; i<FirstWords.size(); i++)
	{
		if(FirstWords[i].length() > 10)
		{
			std::string FirstLine(1, FirstWords[i][0]);
			std::string SizeOfBodyString = std::to_string(FirstWords[i].length() - 2);
			std::string LastLine(1, FirstWords[i][FirstWords[i].length() - 1]);
			
			std::string Upline = FirstLine + SizeOfBodyString + LastLine;
			words.push_back(Upline);
		}
		else
			words.push_back(FirstWords[i]);
	}
	for(size_t i=0; i<words.size(); i++)
		std::cout << words[i] << std::endl;
	return 0;
}