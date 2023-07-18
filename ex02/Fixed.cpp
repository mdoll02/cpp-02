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

Fixed::Fixed(const int number) {
	std::cout << "Int constructor called" << std::endl;
	_numberVal = number << _fractBits;
}

Fixed::Fixed(const float number) {
	std::cout << "Float constructor called" << std::endl;
	_numberVal = static_cast<int>(number * (1 << _fractBits));
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

// ----------------- NEW ZONE -----------------

bool Fixed::operator>(const Fixed &other) const {
	return this->_numberVal > other._numberVal;
}

bool Fixed::operator<(const Fixed &other) const {
	return this->_numberVal < other._numberVal;
}

bool Fixed::operator<=(const Fixed &other) const {
	return this->_numberVal <= other._numberVal;
}

bool Fixed::operator>=(const Fixed &other) const {
	return this->_numberVal >= other._numberVal;
}

bool Fixed::operator==(const Fixed &other) const {
	return this->_numberVal == other._numberVal;
}

bool Fixed::operator!=(const Fixed &other) const {
	return this->_numberVal != other._numberVal;
}

Fixed Fixed::operator+(const Fixed &other) const {
	Fixed ret;
	ret.setRawBits(this->_numberVal + other._numberVal);
	return ret;
}

Fixed Fixed::operator-(const Fixed &other) const {
	Fixed ret;
	ret.setRawBits(this->_numberVal - other._numberVal);
	return ret;
}

Fixed Fixed::operator*(const Fixed &other) const {
	Fixed ret;
	ret.setRawBits(this->_numberVal * other._numberVal);
	return ret;
}

Fixed Fixed::operator/(const Fixed &other) const {
	Fixed ret;
	ret.setRawBits(this->_numberVal / other._numberVal);
	return ret;
}

Fixed Fixed::operator++(int ignored) {
	(void)ignored;
	this->_numberVal++;
	return *this;
}

Fixed Fixed::operator--(int ignored) {
	(void)ignored;
	Fixed tmp(*this);
	--(*this);
	return tmp;
}

Fixed &Fixed::operator++() {
	this->_numberVal++;
	return *this;
}

Fixed &Fixed::operator--() {
	this->_numberVal++;
	return *this;
}

Fixed &Fixed::min(Fixed &a, Fixed &b) {
	if (a < b)
		return a;
	return b;
}

const Fixed &Fixed::min(Fixed const &a, Fixed const &b) {
	if (a < b)
		return a;
	return b;
}

Fixed &Fixed::max(Fixed &a, Fixed &b) {
	if (a > b)
		return a;
	return b;
}

const Fixed &Fixed::max(Fixed const &a, Fixed const &b) {
	if (a > b)
		return a;
	return b;
}
