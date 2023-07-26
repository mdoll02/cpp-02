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

class Fixed {
public:
	// Default constructor
	Fixed();

	// Destructor
	~Fixed();

	// Copy constructor
	Fixed(const Fixed &other);

	// Copy assignment operator
	Fixed &operator=(const Fixed &other);

	int getRawBits() const;

	void setRawBits(int const raw);

private:
	// Private members and methods
	int _numberVal;
	static const int _fractBits;
};

#endif
