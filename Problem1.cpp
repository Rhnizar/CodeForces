/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Problem1.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrhnizar <rrhnizar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 10:32:21 by rrhnizar          #+#    #+#             */
/*   Updated: 2024/01/27 10:41:35 by rrhnizar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>

int main()
{
    int w;
    std::cin >> w;
	if(w % 2 == 0 && w > 2)
    	std::cout << "YES" << std::endl;
	else
		std::cout << "NO" << std::endl;
		
    return 0;
}