/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncolomer <ncolomer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/02 15:57:31 by ncolomer          #+#    #+#             */
/*   Updated: 2020/01/07 17:28:52 by ncolomer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test/test.hpp"

int main(void)
{
	test_Vector();
	test_List();

	// Leaks
	//std::cout << "#####" << std::endl;
	//system("leaks ft_containers");
	//std::cout << "#####" << std::endl;
	return (0);
}
