/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdoll <mdoll@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 11:18:22 by mdoll             #+#    #+#             */
/*   Updated: 2023/07/17 11:22:40 by mdoll            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Nan, 0, 1.0, inf

#include "Fixed.hpp"
#include <iostream>

const int Fixed::_fractBits = 8;

Fixed::Fixed() : _numberVal(0){
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &other) {
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

Fixed &Fixed::operator=(const Fixed &other) {
	std::cout << "Copy constructor called" << std::endl;
	if (this != &other) {
		_numberVal = other.getRawBits();
	}
	return *this;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called" << std::endl;
	return _numberVal;
}

void Fixed::setRawBits(int const raw) {
	std::cout << "setRawBits member function called" << std::endl;
	_numberVal = raw;
}