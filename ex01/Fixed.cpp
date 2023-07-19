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

#include "Fixed.hpp"

const int Fixed::_fractBits = 8;

Fixed::Fixed() : _numberVal(0){
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
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

int Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called" << std::endl;
	return _numberVal;
}

void Fixed::setRawBits(int const raw) {
	std::cout << "setRawBits member function called" << std::endl;
	_numberVal = raw;
}

// -------------- NEW --------------

Fixed::Fixed(const int number) {
	std::cout << "Int constructor called" << std::endl;
	_numberVal = number << _fractBits;
}

Fixed::Fixed(const float number) {
	std::cout << "Float constructor called" << std::endl;
	_numberVal = static_cast<int>(number * (1 << _fractBits));
}

int Fixed::toInt() const {
	return _numberVal >> _fractBits;
}

float Fixed::toFloat() const{
	return static_cast<float>(_numberVal) / (1 << _fractBits);
}

std::ostream &operator<<(std::ostream &out, Fixed const &fixed) {
	out << fixed.toFloat();
	return out;
}