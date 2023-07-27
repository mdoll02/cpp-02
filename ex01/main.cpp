/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdoll <mdoll@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 12:09:47 by mdoll             #+#    #+#             */
/*   Updated: 2023/07/17 12:10:08 by mdoll            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

int main() {

	Fixed a;
	Fixed const b(10);
	Fixed const c(-42.42f);
	Fixed const d(b);

	a = Fixed( 1234.4322663631f );

	std::cout << "a was 1234.4322663631f and now is " << a << std::endl;
	std::cout << "b was 10 and now is " << b << std::endl;
	std::cout << "c was -42.42f and now is " << c << std::endl;
	std::cout << "d was 10 and now is " << d << std::endl;
	std::cout << "a is " << a.toInt() << " as integer" << std::endl;
	std::cout << "b is " << b.toInt() << " as integer" << std::endl;
	std::cout << "c is " << c.toInt() << " as integer" << std::endl;
	std::cout << "d is " << d.toInt() << " as integer" << std::endl;
	std::cout << "a is " << a.toFloat() << " as Float" << std::endl;
	std::cout << "b is " << b.toFloat() << " as Float" << std::endl;
	std::cout << "c is " << c.toFloat() << " as Float" << std::endl;
	std::cout << "d is " << d.toFloat() << " as Float" << std::endl;
	return 0;
}