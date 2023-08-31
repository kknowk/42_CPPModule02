/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khorike <khorike@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 13:30:23 by khorike           #+#    #+#             */
/*   Updated: 2023/08/30 17:13:49 by khorike          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <string>
#include <iostream> 

class Fixed
{
private:
	int value;
	static const int fractional_bits = 8;

public:
	Fixed();
	Fixed(const Fixed &other);
	~Fixed();

	Fixed &operator=(const Fixed &other);

	int getRawBits(void) const;
	void setRawBits(int const raw);

	// float toFloat(void) const;
};

#endif
