/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdoll <mdoll@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 11:18:22 by mdoll             #+#    #+#             */
/*   Updated: 2023/07/17 11:22:40 by mdoll            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed {
public:
	Fixed();
	~Fixed();
	explicit Fixed(int const number);
	explicit Fixed(float const number);
	Fixed(const Fixed &other)	;

	Fixed &operator=(const Fixed &other);

	int getRawBits() const;
	void setRawBits(int const raw);


	int toInt() const;
	float toFloat() const;

private:
	int _numberVal;
	static const int _fractBits;
};

std::ostream &operator<<(std::ostream &out, Fixed const &fixed);

#endif