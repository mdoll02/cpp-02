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
	Fixed b( Fixed( 5.05f ) * Fixed( 2 ) );
	Fixed const c( Fixed( 5.05f ) / Fixed( 2 ) );
	Fixed const d( Fixed( 5.05f ) + Fixed( 2 ) );
	Fixed const e( Fixed( 5.05f ) - Fixed( 2 ) );

	std::cout << "initial value b " << b << std::endl;
	std::cout << "initial value c " << c << std::endl;
	std::cout << "initial value d " << d << std::endl;
	std::cout << "initial value e " << e << std::endl;
	std::cout << "initial value a " << a << std::endl;

	std::cout << "\nis " << b << " > " << a << "? " << (b > a) << " (true)" << std::endl;
	std::cout << "is " << b << " < " << a << "  " << (b < a) << " (false)" << std::endl;
	std::cout << "is " << a << " == 0? " << (a == 0) << " (true)" << std::endl;
	std::cout << "is " << a << " != 42? " << (a != 42) << " (true)" << std::endl;
	std::cout << "is " << e << " >= " << d << "? " << (e >= d) << " (false)" << std::endl;
	std::cout << "is " << e << " <= " << e << "? " << (e <= 3.04688f) << " (true)\n" << std::endl;


	std::cout << "initial value a " << a << std::endl;
	std::cout << "a++ " << a++ << std::endl;
	std::cout << "value of a after post-increment (1/256) " << a << std::endl;
	std::cout << "++a " << ++a << std::endl;
	std::cout << "value of a after pre-increment (1/256) " << a << std::endl;
	std::cout << "\ninitial value b " << b << std::endl;
	std::cout << "b-- " << b-- << std::endl;
	std::cout << "value of b after post-decrement (1/256) " << b << std::endl;
	std::cout << "--b " << --b << std::endl;
	std::cout << "value of b after pre-decrement (1/256) " << b << std::endl;

	std::cout << "\nmin(" << d << ", " << e << ") = " << Fixed::min(d, e) << std::endl;
	std::cout << "max(" << e << ", " << a << ") = " << Fixed::max(e, a) << std::endl;

	return 0;
}